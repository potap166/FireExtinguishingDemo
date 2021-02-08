
#include "Func_for_Modbus_Polling_Task.h"
#include "Func_for_Modbus_Polling_Task_Public.h"





/****************************************************************************
  * Имя функции   : Get_CurrentQtyByteRecive_Buf_Modbus_Polling_Task()
  * Описание      : вернуть значение текушего кол-ва принимаемых Байт
  * 
  *
  * Параметры     : нет
  * Возврат       : uint8_t
  ****************************************************************************/


uint8_t Get_CurrentQtyByteRecive_Buf_Modbus_Polling_Task (void)
{ 
  return CurrentQtyByteRecive ;
}
 /** end **/



/****************************************************************************
  * Имя функции   : Set_CurrentQtyByteRecive_Buf_Modbus_Polling_Task()
  * Описание      : записать значение текушего кол-ва принимаемых Байт  
  * 
  *
  * Параметры     : const uint8_t 
  * Возврат       : нет
  ****************************************************************************/


 void Set_CurrentQtyByteRecive_Buf_Modbus_Polling_Task ( const uint8_t NewCurrentQtyByteRecive )
{ 
  CurrentQtyByteRecive = NewCurrentQtyByteRecive  ;
}
 /** end **/



/****************************************************************************
  * Имя функции   : Get_Ptr_Buf_Modbus_Polling_Task()
  * Описание      : вернуть указатель на буфер модбас  
  * 
  *
  * Параметры     : нет
  * Возврат       : uint8_t
  ****************************************************************************/


 uint8_t * Get_Ptr_Buf_Modbus_Polling_Task (void)
{ 
   return ( uint8_t *)&ModbusPollingUsartBuffer[0] ;
}
 /** end **/
/****************************************************************************
  * Имя функции   : Clear_Buf_Modbus_Polling_Task()
  * Описание      : очистить буфер задачи модбас опрос ведомых задачу
  * 
  *
  * Параметры     : нет
  * Возврат       : нет
  ****************************************************************************/


void Clear_Buf_Modbus_Polling_Task (void)
{ 
  Clear_Data ( ( uint8_t *) ModbusPollingUsartBuffer , sizeof ( ModbusPollingUsartBuffer ) )  ;
}
 /** end **/


/****************************************************************************
  * Имя функции   : Calculate_CRC_Input_packet()
  * Описание      : проверка контрольной суммы входяшего пакета
  * 
  *
  * Параметры     : uint8_t * ,uint16_t 
  * Возврат       : FireBooL_t
  ****************************************************************************/


static FireBooL_t Calculate_CRC_Input_packet (uint8_t *data,uint16_t size)
{
  if ( size < MIN_LENGH_PACKAGE_MB || size > MAX_LENGH_PACKAGE_MB )
  {
    return False ; 
  }
  uint16_t CRC_V=0,CRC_I=0     ;
  uint8_t  LSB=0,MSB=0 ; 
  
  LSB=data[size-2] ;
  MSB=data[size-1] ; 
 
  CRC_I=MSB << 8 | LSB;   
  CRC_V=crc_16(data,(size-LENGH_CRC_MB) ) ; 
 
  if (CRC_I ==  CRC_V)
  {
    return True ;
  }         //1 - ok
   else
  {
    return False ;
  }
}
 /** end **/



/****************************************************************************
  * Имя функции   : Calculation_of_Waiting_Time_For_MB()
  * Описание      : ф-ция расчёта обшего кол-ва байт так же колво которое необходимо принять
  * 
  *
  * Параметры     : const CodOfFuncModbus_t  , const RegistrsModbus_t 
  * Возврат       : ModbusCalcQtyByte_t
  ****************************************************************************/


static ModbusCalcQtyByte_t Calculation_of_Waiting_Time_For_MB (const CodOfFuncModbus_t CodOfFuncModbus , const RegistrsModbus_t RegistrsModbus)
{
  ModbusCalcQtyByte_t QtyOfByte ;
  
  QtyOfByte.ReciveQtyByte=0 ;
  // расчёт кол-ва отправляемых байт                                                     
  QtyOfByte.TotalQtyByte=8U  ;                                                   //первых байт любого запроса не зависимо от ф-ций + 2 байта  crc 
  QtyOfByte.TransQtyByte=8U  ;
  
  switch (CodOfFuncModbus)
    {
    case  CodOfFuncModbusRead :
                  QtyOfByte.TotalQtyByte += 5 ;                                   //ответ на ф-цию 0x03 =5 байт  без данных но с crc 
                  QtyOfByte.ReciveQtyByte = 5 ;
                  if ( RegistrsModbus > 1 )                                     //если кол-во рег больше одного, то в ответе будет ..... 
                  {
                    QtyOfByte.ReciveQtyByte += RegistrsModbus*2     ;
                    QtyOfByte.TotalQtyByte += RegistrsModbus*2      ;     
                  }
                  else
                  {
                    QtyOfByte.ReciveQtyByte+=2                             ;
                    QtyOfByte.TotalQtyByte+=2                              ;     //если кол-во рег ==1 
                  }
                  break ;                  
    case  CodOfFuncModbusSingleWrite :  
                  QtyOfByte.TotalQtyByte +=8  ;                                 //ответ состовляет 8 байт 
                  QtyOfByte.ReciveQtyByte=8  ;
                  break ;                                                      //8 байт                                        
    case  CodOfFuncModbusBurstWrite :
                  QtyOfByte.TotalQtyByte ++                                  ; 
                  QtyOfByte.TotalQtyByte += RegistrsModbus*2         ; 
                  QtyOfByte.TransQtyByte ++                                  ;
                  QtyOfByte.TransQtyByte += RegistrsModbus*2         ;
                  QtyOfByte.TotalQtyByte +=8                                ;
                  QtyOfByte.ReciveQtyByte+=8                                ;
                  break                                                     ;                  
     default :    QtyOfByte.TransQtyByte=0;  
                  break                                                     ;              
    }   
  return  QtyOfByte ; 
}
 /** end **/



/****************************************************************************
  * Имя функции   : Packet_Assambly_for_Request()
  * Описание      : сборка пакета для запроса мастером
  *                (адрес устр, начальн адрес, кол-во регистров)
  * 
  *
  * Параметры     : const AdresModbus_t  ,const CodOfFuncModbus_t  ,const RegistrsModbus_t ,
  *                 const QtyRegOneActModbus_t  ,const uint8_t *
  * Возврат       : нет
  ****************************************************************************/


static void Packet_Assambly_for_Request( const AdresModbus_t AdresModbus ,const CodOfFuncModbus_t CodOfFuncModbus ,const RegistrsModbus_t RegistrsModbusStartAdr,
                                   const QtyRegOneActModbus_t QtyRegOneActModbus ,const uint8_t *data ) 
 {
   uint8_t sh=0 ; 
  
     Clear_Data ( ( uint8_t *) ModbusPollingUsartBuffer , sizeof ( ModbusPollingUsartBuffer ) )  ;
   
    ModbusPollingUsartBuffer[sh++]= AdresModbus                         ;               // Адрес КЛ1
    ModbusPollingUsartBuffer[sh++]= CodOfFuncModbus                     ;    
    ModbusPollingUsartBuffer[sh++]= RegistrsModbusStartAdr      >> 8    ;               // нач. адрес ст.
    ModbusPollingUsartBuffer[sh++]= RegistrsModbusStartAdr      & 0xFF  ;               // нач.адрес мл.
  
    
    switch (CodOfFuncModbus)
    {
      case  CodOfFuncModbusRead :
                  ModbusPollingUsartBuffer[sh++]= QtyRegOneActModbus >> 8    ; // кол-во рег ст.
                  ModbusPollingUsartBuffer[sh++]= QtyRegOneActModbus & 0xFF  ; // кол-во рег8 мл.
                  break  ;
                  
      case  CodOfFuncModbusSingleWrite :
                  ModbusPollingUsartBuffer[sh++]=*data ++ ; 
                  ModbusPollingUsartBuffer[sh++]=*data ++ ; 
                  break ;                                  
      case  CodOfFuncModbusBurstWrite :  
                  ModbusPollingUsartBuffer[sh++]= QtyRegOneActModbus >> 8    ; // кол-во рег ст.
                  ModbusPollingUsartBuffer[sh++]= QtyRegOneActModbus & 0xFF  ; // кол-во рег8 мл.   
                  ModbusPollingUsartBuffer[sh++]=2*QtyRegOneActModbus & 0xFF ; //счётчик байт
                  {
                    uint8_t  QtyByte  =          QtyRegOneActModbus*2    ;
                    while (QtyByte--)   
                    {
                       ModbusPollingUsartBuffer[sh++]=*data ++ ;                        //данные 
                    }
                  }
                  break ;   
      default : return  ;  //error           
    }
      
    uint16_t CRC_V=crc_16((uint8_t *)&ModbusPollingUsartBuffer,sh )     ;
    
    ModbusPollingUsartBuffer[sh++]=  CRC_V                     & 0xFF   ;           //crc ст.
    ModbusPollingUsartBuffer[sh++]=  CRC_V                     >> 8     ;           //сrс мл.
         
    UART_Transmit_IT ( 1 ,  (uint8_t*)&ModbusPollingUsartBuffer,sh   )  ; 
 }
 /** end **/



/****************************************************************************
  * Имя функции   : Handler_Modbus_Polling_Task()
  * Описание      : основная функция
  * 
  *
  * Параметры     : const TaskRequestModbusPolingMsq_t * const 
  * Возврат       : нет
  ****************************************************************************/

void  Handler_Modbus_Polling_Task (const TaskRequestModbusPolingMsq_t * const TaskRequestModbusPolingMsq  )                               
{
  static AnswerModbusPolingMsq_t       AnswerModbusPolingMsq       ; 
  static ModbusCalcQtyByte_t           ModbusCalcQtyByte           ;
   
             
        ModbusCalcQtyByte = Calculation_of_Waiting_Time_For_MB ( TaskRequestModbusPolingMsq->CodOfFunc,
                                                                 TaskRequestModbusPolingMsq->QtyMBReg    ); // фунция расчёта байт  для передачи для приёма  обшее колличество 
        
        Set_CurrentQtyByteRecive_Buf_Modbus_Polling_Task ( ModbusCalcQtyByte.ReciveQtyByte ) ; 
        
        uint16_t timeSem  = ( ( ModbusCalcQtyByte.TransQtyByte + 1 ) * 578U ) / 1000U + 20 ;
        
        for ( uint8_t CurrentQtyAttempt = 0 ; CurrentQtyAttempt < QTY_ATTEMPT_REQUEST_MB ; ++CurrentQtyAttempt )  // цикл с  повторением запроса 
        {//+0    
          osDelay (5) ; 
          //  Set_Current_Ring_Direction(element_que.RingDirection) ;                         //устанавливаю необходимое направление  
           Packet_Assambly_for_Request ( TaskRequestModbusPolingMsq->Adres , 
                                        TaskRequestModbusPolingMsq->CodOfFunc , 
                                        TaskRequestModbusPolingMsq->StartMBadr , 
                                        TaskRequestModbusPolingMsq->QtyMBReg  ,
                                        TaskRequestModbusPolingMsq->Buf ) ;
             
          if ( TaskRequestModbusPolingMsq->Adres )
          {
            AnswerModbusPolingMsq.NumOfError     = 0 ;
            AnswerModbusPolingMsq.NumOfFunc      = 0 ;
            AnswerModbusPolingMsq.StatusOfSelect = 0 ; 
            
            Waiting_Semofare_Modbus_Polling_Task_OS  ( 0 ) ; // очищаю семафор
           
            if (  Waiting_Semofare_Modbus_Polling_Task_OS (  timeSem ) == osOK ) // задача блокируется на семафоре на время передачи ,время задержки расчитывается в зависимости от кол-ва байт (модбус байт=11 бит)
            {                                              // 20 - ожидание ответа ,  572/1000 мили сек время передачи одного модбас байта
                  /* выдача семафора установлена в прерываний  void Give_Semafor(void)
                   задача блокируется на время передачи заказанного кол-ва байт  =TimeDelay.TransQtyByte+1 плюс приём первого байта плюс 20 милисекунды из которых 2.3 это задержка модбусовская между пакетами 
                   передачи и приёма (3.5 символа)   + время ожидания 
                  */                                        
                 // если попал сюда значит был принят 1 байт 
                  if ( Waiting_Semofare_Modbus_Polling_Task_OS ( 1000 ) == osOK )                                                                                
                  {  
                    
                    //получаю кол-во принятых байт
                    uint16_t CountByte = 0 ; 
                    if ( Get_RxXferCount_UART (1) )
                    {
                      CountByte = ModbusCalcQtyByte.ReciveQtyByte - Get_RxXferCount_UART ( 1 ) ;
                    }
                    else 
                    {
                      CountByte =  ModbusCalcQtyByte.ReciveQtyByte ; 
                    }                   
                    if ( Calculate_CRC_Input_packet ( ( uint8_t * )&ModbusPollingUsartBuffer , CountByte ) )   //   возврат значения после подсчёта crc
                    {
                      //Add_Satic_Info (element_que.adr_dev,element_que.RingDirection,STAT_ECHANGE_ACT_REPLY_OK) ; статистика
                      if  ( !Get_RxXferCount_UART (1) )
                      {
                        AnswerModbusPolingMsq.StatusOfSelect = StatusAnswModbusOk ;          
                        break ;
                      }
                      else 
                      {
                        AnswerModbusPolingMsq.NumOfError     =  StatusAnswTypeErrorModbusRegError ;              
                        AnswerModbusPolingMsq.NumOfFunc      =  ModbusPollingUsartBuffer[1] ;
                        AnswerModbusPolingMsq.StatusOfSelect =  StatusAnswModbusOKSmtWrong  ;  
                      }
                    }
                    else 
                    {                     
                      AnswerModbusPolingMsq.NumOfError     =  StatusAnswTypeErrorModbusCRC;              
                      AnswerModbusPolingMsq.StatusOfSelect =  StatusAnswModbusError;                       
                    }                                                                                                                                                                                                                                                 
                  }                                                           // ветка в которой  ответа от  устройства не пришло вообще                                                                         
                else 
                {
                   AnswerModbusPolingMsq.NumOfError     =  StatusAnswTypeErrorModbusNOReply;              
                   AnswerModbusPolingMsq.StatusOfSelect =  StatusAnswModbusError;  
                }
            }
            else 
            {
              AnswerModbusPolingMsq.NumOfError     =  StatusAnswTypeErrorModbusNOReply;              
              AnswerModbusPolingMsq.StatusOfSelect =  StatusAnswModbusError;       
            }
          }
          else 
          {
             osDelay ( timeSem - 18 ) ; 
             break  ; 
          }                             
        } 
       if (  AnswerModbusPolingMsq.StatusOfSelect == StatusAnswModbusOk  )
       {
          switch ( TaskRequestModbusPolingMsq->CodOfFunc )
          {
            case  CodOfFuncModbusRead :      
                   memcpy (TaskRequestModbusPolingMsq->Buf , ( const void *) &ModbusPollingUsartBuffer[3] , TaskRequestModbusPolingMsq->QtyMBReg *2 );
                  break  ;                  
       //     case  CodOfFuncModbusSingleWrite :
       //             memcpy (TaskRequestModbusPolingMsq.Buf , ( const void *) &ModbusPollingUsartBuffer[3] , TaskRequestModbusPolingMsq.QtyMBReg *2 );
       //           break ;                                  
       //     case  CodOfFuncModbusBurstWrite :            
       //           break ;   
            default : return  ;  //error           
          }
       }
       Send_Msg_Msq_from_osQueueAnswerModbusPollingTask_OS ( &AnswerModbusPolingMsq ) ;  
 }

 /** end **/
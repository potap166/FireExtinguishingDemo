
#include "Func_for_Modbus_Polling_Task.h"
#include "Func_for_Modbus_Polling_Task_Public.h"





/****************************************************************************
  * ��� �������   : Get_CurrentQtyByteRecive_Buf_Modbus_Polling_Task()
  * ��������      : ������� �������� �������� ���-�� ����������� ����
  * 
  *
  * ���������     : ���
  * �������       : uint8_t
  ****************************************************************************/


uint8_t Get_CurrentQtyByteRecive_Buf_Modbus_Polling_Task (void)
{ 
  return CurrentQtyByteRecive ;
}
 /** end **/



/****************************************************************************
  * ��� �������   : Set_CurrentQtyByteRecive_Buf_Modbus_Polling_Task()
  * ��������      : �������� �������� �������� ���-�� ����������� ����  
  * 
  *
  * ���������     : const uint8_t 
  * �������       : ���
  ****************************************************************************/


 void Set_CurrentQtyByteRecive_Buf_Modbus_Polling_Task ( const uint8_t NewCurrentQtyByteRecive )
{ 
  CurrentQtyByteRecive = NewCurrentQtyByteRecive  ;
}
 /** end **/



/****************************************************************************
  * ��� �������   : Get_Ptr_Buf_Modbus_Polling_Task()
  * ��������      : ������� ��������� �� ����� ������  
  * 
  *
  * ���������     : ���
  * �������       : uint8_t
  ****************************************************************************/


 uint8_t * Get_Ptr_Buf_Modbus_Polling_Task (void)
{ 
   return ( uint8_t *)&ModbusPollingUsartBuffer[0] ;
}
 /** end **/
/****************************************************************************
  * ��� �������   : Clear_Buf_Modbus_Polling_Task()
  * ��������      : �������� ����� ������ ������ ����� ������� ������
  * 
  *
  * ���������     : ���
  * �������       : ���
  ****************************************************************************/


void Clear_Buf_Modbus_Polling_Task (void)
{ 
  Clear_Data ( ( uint8_t *) ModbusPollingUsartBuffer , sizeof ( ModbusPollingUsartBuffer ) )  ;
}
 /** end **/


/****************************************************************************
  * ��� �������   : Calculate_CRC_Input_packet()
  * ��������      : �������� ����������� ����� ��������� ������
  * 
  *
  * ���������     : uint8_t * ,uint16_t 
  * �������       : FireBooL_t
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
  * ��� �������   : Calculation_of_Waiting_Time_For_MB()
  * ��������      : �-��� ������� ������ ���-�� ���� ��� �� ����� ������� ���������� �������
  * 
  *
  * ���������     : const CodOfFuncModbus_t  , const RegistrsModbus_t 
  * �������       : ModbusCalcQtyByte_t
  ****************************************************************************/


static ModbusCalcQtyByte_t Calculation_of_Waiting_Time_For_MB (const CodOfFuncModbus_t CodOfFuncModbus , const RegistrsModbus_t RegistrsModbus)
{
  ModbusCalcQtyByte_t QtyOfByte ;
  
  QtyOfByte.ReciveQtyByte=0 ;
  // ������ ���-�� ������������ ����                                                     
  QtyOfByte.TotalQtyByte=8U  ;                                                   //������ ���� ������ ������� �� �������� �� �-��� + 2 �����  crc 
  QtyOfByte.TransQtyByte=8U  ;
  
  switch (CodOfFuncModbus)
    {
    case  CodOfFuncModbusRead :
                  QtyOfByte.TotalQtyByte += 5 ;                                   //����� �� �-��� 0x03 =5 ����  ��� ������ �� � crc 
                  QtyOfByte.ReciveQtyByte = 5 ;
                  if ( RegistrsModbus > 1 )                                     //���� ���-�� ��� ������ ������, �� � ������ ����� ..... 
                  {
                    QtyOfByte.ReciveQtyByte += RegistrsModbus*2     ;
                    QtyOfByte.TotalQtyByte += RegistrsModbus*2      ;     
                  }
                  else
                  {
                    QtyOfByte.ReciveQtyByte+=2                             ;
                    QtyOfByte.TotalQtyByte+=2                              ;     //���� ���-�� ��� ==1 
                  }
                  break ;                  
    case  CodOfFuncModbusSingleWrite :  
                  QtyOfByte.TotalQtyByte +=8  ;                                 //����� ���������� 8 ���� 
                  QtyOfByte.ReciveQtyByte=8  ;
                  break ;                                                      //8 ����                                        
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
  * ��� �������   : Packet_Assambly_for_Request()
  * ��������      : ������ ������ ��� ������� ��������
  *                (����� ����, ������� �����, ���-�� ���������)
  * 
  *
  * ���������     : const AdresModbus_t  ,const CodOfFuncModbus_t  ,const RegistrsModbus_t ,
  *                 const QtyRegOneActModbus_t  ,const uint8_t *
  * �������       : ���
  ****************************************************************************/


static void Packet_Assambly_for_Request( const AdresModbus_t AdresModbus ,const CodOfFuncModbus_t CodOfFuncModbus ,const RegistrsModbus_t RegistrsModbusStartAdr,
                                   const QtyRegOneActModbus_t QtyRegOneActModbus ,const uint8_t *data ) 
 {
   uint8_t sh=0 ; 
  
     Clear_Data ( ( uint8_t *) ModbusPollingUsartBuffer , sizeof ( ModbusPollingUsartBuffer ) )  ;
   
    ModbusPollingUsartBuffer[sh++]= AdresModbus                         ;               // ����� ��1
    ModbusPollingUsartBuffer[sh++]= CodOfFuncModbus                     ;    
    ModbusPollingUsartBuffer[sh++]= RegistrsModbusStartAdr      >> 8    ;               // ���. ����� ��.
    ModbusPollingUsartBuffer[sh++]= RegistrsModbusStartAdr      & 0xFF  ;               // ���.����� ��.
  
    
    switch (CodOfFuncModbus)
    {
      case  CodOfFuncModbusRead :
                  ModbusPollingUsartBuffer[sh++]= QtyRegOneActModbus >> 8    ; // ���-�� ��� ��.
                  ModbusPollingUsartBuffer[sh++]= QtyRegOneActModbus & 0xFF  ; // ���-�� ���8 ��.
                  break  ;
                  
      case  CodOfFuncModbusSingleWrite :
                  ModbusPollingUsartBuffer[sh++]=*data ++ ; 
                  ModbusPollingUsartBuffer[sh++]=*data ++ ; 
                  break ;                                  
      case  CodOfFuncModbusBurstWrite :  
                  ModbusPollingUsartBuffer[sh++]= QtyRegOneActModbus >> 8    ; // ���-�� ��� ��.
                  ModbusPollingUsartBuffer[sh++]= QtyRegOneActModbus & 0xFF  ; // ���-�� ���8 ��.   
                  ModbusPollingUsartBuffer[sh++]=2*QtyRegOneActModbus & 0xFF ; //������� ����
                  {
                    uint8_t  QtyByte  =          QtyRegOneActModbus*2    ;
                    while (QtyByte--)   
                    {
                       ModbusPollingUsartBuffer[sh++]=*data ++ ;                        //������ 
                    }
                  }
                  break ;   
      default : return  ;  //error           
    }
      
    uint16_t CRC_V=crc_16((uint8_t *)&ModbusPollingUsartBuffer,sh )     ;
    
    ModbusPollingUsartBuffer[sh++]=  CRC_V                     & 0xFF   ;           //crc ��.
    ModbusPollingUsartBuffer[sh++]=  CRC_V                     >> 8     ;           //�r� ��.
         
    UART_Transmit_IT ( 1 ,  (uint8_t*)&ModbusPollingUsartBuffer,sh   )  ; 
 }
 /** end **/



/****************************************************************************
  * ��� �������   : Handler_Modbus_Polling_Task()
  * ��������      : �������� �������
  * 
  *
  * ���������     : const TaskRequestModbusPolingMsq_t * const 
  * �������       : ���
  ****************************************************************************/

void  Handler_Modbus_Polling_Task (const TaskRequestModbusPolingMsq_t * const TaskRequestModbusPolingMsq  )                               
{
  static AnswerModbusPolingMsq_t       AnswerModbusPolingMsq       ; 
  static ModbusCalcQtyByte_t           ModbusCalcQtyByte           ;
   
             
        ModbusCalcQtyByte = Calculation_of_Waiting_Time_For_MB ( TaskRequestModbusPolingMsq->CodOfFunc,
                                                                 TaskRequestModbusPolingMsq->QtyMBReg    ); // ������ ������� ����  ��� �������� ��� �����  ����� ����������� 
        
        Set_CurrentQtyByteRecive_Buf_Modbus_Polling_Task ( ModbusCalcQtyByte.ReciveQtyByte ) ; 
        
        uint16_t timeSem  = ( ( ModbusCalcQtyByte.TransQtyByte + 1 ) * 578U ) / 1000U + 20 ;
        
        for ( uint8_t CurrentQtyAttempt = 0 ; CurrentQtyAttempt < QTY_ATTEMPT_REQUEST_MB ; ++CurrentQtyAttempt )  // ���� �  ����������� ������� 
        {//+0    
          osDelay (5) ; 
          //  Set_Current_Ring_Direction(element_que.RingDirection) ;                         //������������ ����������� �����������  
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
            
            Waiting_Semofare_Modbus_Polling_Task_OS  ( 0 ) ; // ������ �������
           
            if (  Waiting_Semofare_Modbus_Polling_Task_OS (  timeSem ) == osOK ) // ������ ����������� �� �������� �� ����� �������� ,����� �������� ������������� � ����������� �� ���-�� ���� (������ ����=11 ���)
            {                                              // 20 - �������� ������ ,  572/1000 ���� ��� ����� �������� ������ ������ �����
                  /* ������ �������� ����������� � ����������  void Give_Semafor(void)
                   ������ ����������� �� ����� �������� ����������� ���-�� ����  =TimeDelay.TransQtyByte+1 ���� ���� ������� ����� ���� 20 ����������� �� ������� 2.3 ��� �������� ������������ ����� �������� 
                   �������� � ����� (3.5 �������)   + ����� �������� 
                  */                                        
                 // ���� ����� ���� ������ ��� ������ 1 ���� 
                  if ( Waiting_Semofare_Modbus_Polling_Task_OS ( 1000 ) == osOK )                                                                                
                  {  
                    
                    //������� ���-�� �������� ����
                    uint16_t CountByte = 0 ; 
                    if ( Get_RxXferCount_UART (1) )
                    {
                      CountByte = ModbusCalcQtyByte.ReciveQtyByte - Get_RxXferCount_UART ( 1 ) ;
                    }
                    else 
                    {
                      CountByte =  ModbusCalcQtyByte.ReciveQtyByte ; 
                    }                   
                    if ( Calculate_CRC_Input_packet ( ( uint8_t * )&ModbusPollingUsartBuffer , CountByte ) )   //   ������� �������� ����� �������� crc
                    {
                      //Add_Satic_Info (element_que.adr_dev,element_que.RingDirection,STAT_ECHANGE_ACT_REPLY_OK) ; ����������
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
                  }                                                           // ����� � �������  ������ ��  ���������� �� ������ ������                                                                         
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
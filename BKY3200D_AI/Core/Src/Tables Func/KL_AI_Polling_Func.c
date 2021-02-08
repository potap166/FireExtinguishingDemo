
#include "Modbus_Reg.h"
#include "Func_for_Polling_Task_Public.h"

#include "Func_for_Modbus_Polling_Task_Public.h"
#include "Communic_Ring_Func_Public.h"
#include "KL_AI_Polling_Func_Public.h"
#include "Func_for_Info_KL_AI_Public.h"
#include "Func_for_Log_Struct_Public.h"
#include "Total_Tools.h"




  /****************************************************************************
  * »м€ функций   : Waiting_Log_Struct_OS()
  * ќписание      :  ожидаю мьютекс 
  * 
  *
  * параметры     :  No
  * ¬озврат       : osStatus_t
  ****************************************************************************/

FireBooL_t Init_KL_AI ( const AdresModbus_t AdrDev , const TypeDev_t TypeDev )
{    
  TaskRequestModbusPolingMsq_t  TaskRequestModbusPolingMsq ; 
  AnswerModbusPolingMsq_t AnswerModbusPolingMsq ; 
  
   TaskRequestModbusPolingMsq.Buf           = Get_Ptr_Buf_Polling_Task () ; 
   TaskRequestModbusPolingMsq.Adres         = AdrDev                      ;
   TaskRequestModbusPolingMsq.CodOfFunc     = CodOfFuncModbusRead         ;
   TaskRequestModbusPolingMsq.StartMBadr    = MB_KL_AI_TYPE_DEVICE        ;
   TaskRequestModbusPolingMsq.QtyMBReg      = MB_KL_AI_TYPE_DEVICE_LENGH  ;
   TaskRequestModbusPolingMsq.RingDirection = Get_Ring_Direction ()       ;
   
   Clear_Ptr_Buf_Polling_Task ()                                          ; 
   
   Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;  
   if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
   {
     return False ; 
   } 
   if ( Get_Ptr_Buf_Polling_Task ()[1]!= TypeDev )
   {
     return False ;
   }
   // спрашиваю версию прошивки 
   TaskRequestModbusPolingMsq.StartMBadr    = MB_KL_AI_VER_FIRMWARE         ;
   TaskRequestModbusPolingMsq.QtyMBReg      = MB_KL_AI_VER_FIRMWARE_LENGH  ;
  
   Clear_Ptr_Buf_Polling_Task ()                                          ; 
   
   Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;  
   if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
   {
     return False ; 
   } 
   
   Set_Ver_Event_Manage_KLAI ( AdrDev - 1 ,  Get_Ptr_Buf_Polling_Task ()[1]  ) ;
     
   return True  ;  
}
 /** end **/



  /****************************************************************************
  * »м€ функций   : Read_Event_KL_AI
  * ќписание      : читаю событи€ с  Ћ 
  * 
  *
  * параметры     : const AdresModbus_t
  * ¬озврат       : FireBooL_t
  ****************************************************************************/

FireBooL_t Read_Event_KL_AI ( const AdresModbus_t AdrDev )
{    
  TaskRequestModbusPolingMsq_t  TaskRequestModbusPolingMsq ; 
  AnswerModbusPolingMsq_t AnswerModbusPolingMsq ; 
  
  /***********************************************************************/
  
   TaskRequestModbusPolingMsq.Buf           = Get_Ptr_Buf_Polling_Task () ; 
   TaskRequestModbusPolingMsq.Adres         = AdrDev                      ;
   TaskRequestModbusPolingMsq.CodOfFunc     = CodOfFuncModbusRead         ;
   TaskRequestModbusPolingMsq.StartMBadr    = MB_KL_AI_QTY_EVENT_BUF_EXCH        ;
   TaskRequestModbusPolingMsq.QtyMBReg      = MB_KL_AI_QTY_EVENT_BUF_EXCH_LENGH  ;
   TaskRequestModbusPolingMsq.RingDirection = Get_Ring_Direction ()       ;
   
   Clear_Ptr_Buf_Polling_Task ()                                          ; 
   
   Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;  
   if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
   {
     return False ; 
   } 
   uint16_t QtyMes = ( ( Get_Ptr_Buf_Polling_Task ()[0] << 8 ) | Get_Ptr_Buf_Polling_Task ()[1] ) ; 
                           
   if ( !QtyMes )                                       //нет событий выхожу 
   {
     return True ;
   }
   Clear_ArrayStructMesFromKL_Polling_Task () ; 
   //начинаю чтение событий 
   while ( QtyMes )
   { 
     if ( QtyMes >  60  )
     {
        QtyMes  =  60  ; 
     }
     
     /***********************************************************************/  
     TaskRequestModbusPolingMsq.Buf           = Get_Ptr_Buf_Polling_Task () ; 
     TaskRequestModbusPolingMsq.StartMBadr    = MB_KL_AI_BUF_EXCH        ;
     TaskRequestModbusPolingMsq.QtyMBReg      = QtyMes *2                ;
   
     Change_Priority_Polling_Task_OS (1)                                 ;
     Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;  
     if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
     {
       Change_Priority_Polling_Task_OS (0)                                 ;
       if ( AnswerModbusPolingMsq.StatusOfSelect == StatusAnswModbusError )
       {
         return False ;
       }
       else 
       {
         return True ;
       }
     } 
     // подтверждаю считывание 
     uint8_t Buf1 [4] ; 
     TaskRequestModbusPolingMsq.Buf           = ( uint8_t * )&Buf1                 ; 
     TaskRequestModbusPolingMsq.StartMBadr    = MB_KL_AI_QTY_EVENT_BUF_EXCH        ;
     TaskRequestModbusPolingMsq.QtyMBReg      = MB_KL_AI_QTY_EVENT_BUF_EXCH_LENGH  ;
   
     Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;
     Change_Priority_Polling_Task_OS (0)                                        ;
     if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
     {
       if ( AnswerModbusPolingMsq.StatusOfSelect == StatusAnswModbusError )
       {
         return False ;
       }
       else 
       {
         return True ;
       } 
     } 
            
     for ( uint8_t i = 0 ; i < QtyMes ;  ++i )
     {
       StructMesFromKL_t      StructMesFromKL ;
       StructMesFromKL.InOut     = Get_Ptr_Buf_Polling_Task (  )[ i*4   ]; 
       StructMesFromKL.Adr       = Get_Ptr_Buf_Polling_Task (  )[ i*4+1 ]; 
       StructMesFromKL.Res       = Get_Ptr_Buf_Polling_Task (  )[ i*4+2 ];  // адрес
       StructMesFromKL.IdEventKL = Get_Ptr_Buf_Polling_Task (  )[ i*4+3 ];  // id событи€  Ћ 
       
       Add_Mes_ArrayStructMesFromKL_Polling_Task ( StructMesFromKL ) ; 
     } 
     
     QtyMes = ( ( Buf1 [0] <<8 ) | Buf1 [1] ) ;      
   }
   
   if ( Get_Cnt_ArrayStructMesFromKL_Polling_Task ( ) ) //если было что то считано начинаю анализ
   {
     for ( uint8_t i = 0 ; i < Get_Cnt_ArrayStructMesFromKL_Polling_Task ( )  ; i ++ )
     {
       // переделать 
       
       
       StructMesFromKL_t   StructMesFromKL  = Get_Mes_ArrayStructMesFromKL_Polling_Task ( i );
             
       if ( !Check_ID_Event_Type_Log_Struct ( (IDEvent_t) ( StructMesFromKL.IdEventKL + 1000 ) )  )            // провер€ю на  существование событи€ в системе
       {
         continue ; 
       }
       
       Cond2Event_t Cond2Event ;   
       
       Cond2Event.all = 0 ; 
       Cond2Event.TempBitCreation = 0 ;  
       EventLogStr_t EventLogStr ;
       
       Clear_Data ( ( uint8_t * ) &EventLogStr , sizeof ( EventLogStr ) ) ;
       
       EventLogStr.IDEvent =(IDEvent_t) ( StructMesFromKL.IdEventKL + 1000 ) ;
       
       EventLogStr.Cond2Event =Cond2Event.all ;
      
       EventLogStr.Adres.all = 0      ; 
       EventLogStr.Adres.BKY = 1      ;        
       EventLogStr.Adres.KL  = AdrDev ;  
   
       if ( StructMesFromKL.Adr )
       {
         EventLogStr.Adres.Sensor  = StructMesFromKL.Adr  ;  
         EventLogStr.Zone          = (Zone_t)1         ;
       }   
               
       Send_Msg_Log_Struct_OS ( ( const EventLogStr_t * )&EventLogStr ) ; 
       
     }
   }
   
   return True  ;  
}
 /** end **/








  /****************************************************************************
  * »м€ функций   : Read_Addition_Info_Adr_KL_AI()
  * ќписание      : ожидаю мьютекс 
  * 
  *
  * параметры     : const AdresModbus_t , uint8_t 
  * ¬озврат       : osStatus_t
  ****************************************************************************/

void Read_Addition_Info_Adr_KL_AI (const AdresModbus_t AdrDev ,uint8_t RingDirection)
{ 
 
  TaskRequestModbusPolingMsq_t  TaskRequestModbusPolingMsq ; 
  AnswerModbusPolingMsq_t AnswerModbusPolingMsq ; 
  
  /***********************************************************************/
  
   TaskRequestModbusPolingMsq.Buf           = Get_Ptr_Buf_Polling_Task () ; 
   TaskRequestModbusPolingMsq.Adres         = AdrDev                      ;
   TaskRequestModbusPolingMsq.CodOfFunc     = CodOfFuncModbusRead         ;
   TaskRequestModbusPolingMsq.StartMBadr    = 0x03D3        ;
   TaskRequestModbusPolingMsq.QtyMBReg      = 1  ;
   TaskRequestModbusPolingMsq.RingDirection = Get_Ring_Direction ()       ;
   
   Clear_Ptr_Buf_Polling_Task ()                                          ; 
   
   Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;  
   if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
   {
     return  ; 
   } 
   Set_CondKL_Adr03D3_KLAI ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [0] << 8 | Get_Ptr_Buf_Polling_Task() [1] ) ) )  ;  
   
     
   ////////////////////////////////
   TaskRequestModbusPolingMsq.Buf           = Get_Ptr_Buf_Polling_Task () ; 
   TaskRequestModbusPolingMsq.Adres         = AdrDev                      ;
   TaskRequestModbusPolingMsq.CodOfFunc     = CodOfFuncModbusRead         ;
   TaskRequestModbusPolingMsq.StartMBadr    = 0x03D4        ;
   TaskRequestModbusPolingMsq.QtyMBReg      = 1 ;
   TaskRequestModbusPolingMsq.RingDirection = Get_Ring_Direction ()       ;
   
   Clear_Ptr_Buf_Polling_Task ()                                          ; 
   
   Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;  
   if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
   {
     return  ; 
   } 
   //uint8_t i = 0 ; 
   Set_CondKL_Adr03D4_KLAI  ( AdrDev - 1 ,       ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[0] << 8 | Get_Ptr_Buf_Polling_Task()[1] )))  ;  
   
   ////////////////////
   //Adres=10125 +(FullAdressDev.AdrYU/2)  ; 
//   Adres = Get_Adr_MB_for_Adr_KLAI ( 10125 , FullAdressDev.AdrYU )  ;
//   CLEARALLBUF  ;              
//   Reply=Create_and_Messege(num,COD_OF_FUNC_MB_READ_OF_DATA,Adres,1,QUE_FOR_TASK_DEVICE,(uint8_t*)&RXusartLineBufferForTaskDevice,(uint8_t*)&TXusartLineBufferForTaskDevice,RingDirection)  ;//делаю запрос  начтение типа                                               
//   if(Reply.StatusOfSelect == MB_TASK_OK_STATUS)                  //провер€ю статус ответа 
//   {
 //     Set_Ver_Info_Adr_KLAI (  RXusartLineBufferForTaskDevice[3] )  ;                              
 //  } 
   TaskRequestModbusPolingMsq.Buf           = Get_Ptr_Buf_Polling_Task () ; 
   TaskRequestModbusPolingMsq.Adres         = AdrDev                      ;
   TaskRequestModbusPolingMsq.CodOfFunc     = CodOfFuncModbusRead         ;
   TaskRequestModbusPolingMsq.StartMBadr    = 0x03D5        ;
   TaskRequestModbusPolingMsq.QtyMBReg      = 8 ;
   TaskRequestModbusPolingMsq.RingDirection = Get_Ring_Direction ()       ;
   
   Clear_Ptr_Buf_Polling_Task ()                                          ; 
   
   Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;  
   if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
   {
     return  ; 
   } 
   //uint8_t i = 0 ; 
   Set_CntErrorParity03D5_KLAI ( AdrDev - 1 ,       ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[0] << 8 | Get_Ptr_Buf_Polling_Task()[1] )))  ;                              
   Set_CntErrorNoise03D6_KLAI ( AdrDev - 1 ,        ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[2] << 8 | Get_Ptr_Buf_Polling_Task()[3] )))  ; 
   Set_CntErrorDataBit03D7_KLAI ( AdrDev - 1 ,      ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[4] << 8 | Get_Ptr_Buf_Polling_Task()[5] )))  ; 
   Set_CntErrorSBD03D8_KLAI ( AdrDev - 1 ,          ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[6] << 8 | Get_Ptr_Buf_Polling_Task()[7] )))  ; 
   Set_CntErrorTimeOut03D9_KLAI ( AdrDev - 1 ,      ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[8] << 8 | Get_Ptr_Buf_Polling_Task()[9] )))  ; 
   Set_CntErrorOvFlBuf03DA_KLAI ( AdrDev - 1 ,      ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[10] << 8 | Get_Ptr_Buf_Polling_Task()[11] )))  ; 
   Set_CntErrorCurrentHigh03DB_KLAI ( AdrDev - 1 ,  ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[12] << 8 | Get_Ptr_Buf_Polling_Task()[13] )))  ; 
   Set_CntErrorCurrentBel03DC_KLAI ( AdrDev - 1 ,   ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[14] << 8 | Get_Ptr_Buf_Polling_Task()[15] )))  ;  
   //Set_CondKL_Adr03D3_KLAI ( AdrDev - 1 - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [0] << 8 | Get_Ptr_Buf_Polling_Task() [1] ) ) )  ;  
    ///////////////////////////////
   // Adres=10439 +(FullAdressDev.AdrYU/2)  ; 
 //  Adres = Get_Adr_MB_for_Adr_KLAI ( 10439 , FullAdressDev.AdrYU )  ;
 //  CLEARALLBUF  ;              
 //  Reply=Create_and_Messege(num,COD_OF_FUNC_MB_READ_OF_DATA,Adres,1,QUE_FOR_TASK_DEVICE,(uint8_t*)&RXusartLineBufferForTaskDevice,(uint8_t*)&TXusartLineBufferForTaskDevice,RingDirection)  ;//делаю запрос  начтение типа                                               
 //  if(Reply.StatusOfSelect == MB_TASK_OK_STATUS)                  //провер€ю статус ответа 
  // {
  //   Set_CurrentTableFirstBit_Info_Adr_KLAI (  RXusartLineBufferForTaskDevice[3] )  ;                              
  // }
  
   TaskRequestModbusPolingMsq.Buf           = Get_Ptr_Buf_Polling_Task () ; 
   TaskRequestModbusPolingMsq.Adres         = AdrDev                      ;
   TaskRequestModbusPolingMsq.CodOfFunc     = CodOfFuncModbusRead         ;
   TaskRequestModbusPolingMsq.StartMBadr    = 0x03DD        ;
   TaskRequestModbusPolingMsq.QtyMBReg      = 5  ;
   TaskRequestModbusPolingMsq.RingDirection = Get_Ring_Direction ()       ;
   
   Clear_Ptr_Buf_Polling_Task ()                                          ; 
   
   Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;  
   if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
   {
     return  ; 
   } 
   Set_CntErrorCRCFromMaster03DD_KLAI  ( AdrDev - 1  ,  ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[0] << 8 | Get_Ptr_Buf_Polling_Task()[1])))  ;                              
   Set_CntErrorFEFromMaster03DE_KLAI   ( AdrDev - 1  ,  ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[2] << 8 | Get_Ptr_Buf_Polling_Task()[3])))  ; 
   Set_CntErrorNEFromMaster03DF_KLAI   ( AdrDev - 1  ,  ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[4] << 8 | Get_Ptr_Buf_Polling_Task()[5])))  ; 
   Set_CntErrorOREFromMaster03E0_KLAI  ( AdrDev - 1  ,  ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[6] << 8 | Get_Ptr_Buf_Polling_Task()[7])))  ; 
   Set_CntErrorLogicFromMaster03E1_KLAI( AdrDev - 1  ,  ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[8] << 8 | Get_Ptr_Buf_Polling_Task()[9])))  ;
   
  // Adres=10564 +(FullAdressDev.AdrYU/10564)  ;
 //  Adres = Get_Adr_MB_for_Adr_KLAI ( 10564 , FullAdressDev.AdrYU )  ;
 //  CLEARALLBUF  ;              
 //  Reply=Create_and_Messege(num,COD_OF_FUNC_MB_READ_OF_DATA,Adres,1,QUE_FOR_TASK_DEVICE,(uint8_t*)&RXusartLineBufferForTaskDevice,(uint8_t*)&TXusartLineBufferForTaskDevice,RingDirection)  ;//делаю запрос  начтение типа                                               
 //  if(Reply.StatusOfSelect == MB_TASK_OK_STATUS)                  //провер€ю статус ответа 
 //  {
 //    Set_CurrentMediumAnswer_Info_Adr_KLAI (  RXusartLineBufferForTaskDevice[3] )  ;                              
 //  }
  
   TaskRequestModbusPolingMsq.Buf           = Get_Ptr_Buf_Polling_Task () ; 
   TaskRequestModbusPolingMsq.Adres         = AdrDev                      ;
   TaskRequestModbusPolingMsq.CodOfFunc     = CodOfFuncModbusRead         ;
   TaskRequestModbusPolingMsq.StartMBadr    = 0x03D3        ;
   TaskRequestModbusPolingMsq.QtyMBReg      = 1  ;
   TaskRequestModbusPolingMsq.RingDirection = Get_Ring_Direction ()       ;
   
   Clear_Ptr_Buf_Polling_Task ()                                          ; 
   
   Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;  
   if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
   {
     return  ; 
   } 
   Set_CondKL_Adr03D3_KLAI ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [0] << 8 | Get_Ptr_Buf_Polling_Task() [1] ) ) )  ; 
   
   TaskRequestModbusPolingMsq.Buf           = Get_Ptr_Buf_Polling_Task () ; 
   TaskRequestModbusPolingMsq.Adres         = AdrDev                      ;
   TaskRequestModbusPolingMsq.CodOfFunc     = CodOfFuncModbusRead         ;
   TaskRequestModbusPolingMsq.StartMBadr    = 0x03E2        ;
   TaskRequestModbusPolingMsq.QtyMBReg      = 4  ;
   TaskRequestModbusPolingMsq.RingDirection = Get_Ring_Direction ()       ;
   
   Clear_Ptr_Buf_Polling_Task ()                                          ; 
   
   Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;  
   if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
   {
     return  ; 
   } 
   
   Set_VolCurInLine24_KLAI       ( AdrDev - 1  ,  ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[0] << 8 | Get_Ptr_Buf_Polling_Task()[1])))  ;                              
   Set_VolCurInLine13_KLAI       ( AdrDev - 1  ,  ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[2] << 8 | Get_Ptr_Buf_Polling_Task()[3])))  ; 
   Set_QtyRequestLineMA_KLAI     ( AdrDev - 1  ,  ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[4] << 8 | Get_Ptr_Buf_Polling_Task()[5])))  ; 
   Set_QtyRequestLineModbus_KLAI ( AdrDev - 1  ,  ( (uint16_t)(Get_Ptr_Buf_Polling_Task()[6] << 8 | Get_Ptr_Buf_Polling_Task()[7])))  ; 
}
 /** end **/



  /****************************************************************************
  * »м€ функций   : Waiting_Log_Struct_OS()
  * ќписание      :  ожидаю мьютекс 
  * 
  *
  * параметры     :  No
  * ¬озврат       : osStatus_t
  ****************************************************************************/

void Read_Addition_Info_KL_AI ( const AdresModbus_t AdrDev )
{ 
  TaskRequestModbusPolingMsq_t  TaskRequestModbusPolingMsq ; 
  AnswerModbusPolingMsq_t AnswerModbusPolingMsq ; 
  
  /***********************************************************************/
  
   TaskRequestModbusPolingMsq.Buf           = Get_Ptr_Buf_Polling_Task () ; 
   TaskRequestModbusPolingMsq.Adres         = AdrDev                      ;
   TaskRequestModbusPolingMsq.CodOfFunc     = CodOfFuncModbusRead         ;
   TaskRequestModbusPolingMsq.StartMBadr    = 0x03D3        ;
   TaskRequestModbusPolingMsq.QtyMBReg      = 1  ;
   TaskRequestModbusPolingMsq.RingDirection = Get_Ring_Direction ()       ;
   
   Clear_Ptr_Buf_Polling_Task ()                                          ; 
   
   Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;  
   if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
   {
     return  ; 
   } 
   Set_CondKL_Adr03D3_KLAI ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [0] << 8 | Get_Ptr_Buf_Polling_Task() [1] ) ) )  ;  
  // ... 
  //  Adres=0x03D3 ; 
  //  CLEARALLBUF  ;              
  //  Reply=Create_and_Messege(num,COD_OF_FUNC_MB_READ_OF_DATA,Adres,1,QUE_FOR_TASK_DEVICE,(uint8_t*)&RXusartLineBufferForTaskDevice,(uint8_t*)&TXusartLineBufferForTaskDevice,RingDirection)  ;//делаю запрос  начтение типа                                               
  //  if(Reply.StatusOfSelect == MB_TASK_OK_STATUS)                  //провер€ю статус ответа 
  //  { 
  //....  
        
   // Adres=0x03D4 ; 
   // CLEARALLBUF  ;              
   // Reply=Create_and_Messege(num,COD_OF_FUNC_MB_READ_OF_DATA,Adres,1,QUE_FOR_TASK_DEVICE,(uint8_t*)&RXusartLineBufferForTaskDevice,(uint8_t*)&TXusartLineBufferForTaskDevice,RingDirection)  ;//делаю запрос  начтение типа                                               
   // if(Reply.StatusOfSelect == MB_TASK_OK_STATUS)                  //провер€ю статус ответа 
   // {
   //    Set_CondKL_Adr03D4_KLAI ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[3] << 8 | RXusartLineBufferForTaskDevice[4] )))  ;                              
   // }
      
    TaskRequestModbusPolingMsq.StartMBadr    = 0x03D4                      ;
    TaskRequestModbusPolingMsq.QtyMBReg      = 1                           ;
     
    Clear_Ptr_Buf_Polling_Task ()                                          ; 
   
    Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;  
    if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
    {
      return  ; 
    } 
    Set_CondKL_Adr03D4_KLAI ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [0] << 8 | Get_Ptr_Buf_Polling_Task() [1] ) ) )  ;  
      
  //  Adres=0x03D5 ; 
  //  CLEARALLBUF  ;               
  //  Reply=Create_and_Messege(num,COD_OF_FUNC_MB_READ_OF_DATA,Adres,8,QUE_FOR_TASK_DEVICE,(uint8_t*)&RXusartLineBufferForTaskDevice,(uint8_t*)&TXusartLineBufferForTaskDevice,RingDirection)  ;//делаю запрос  начтение типа                                               
  //  if(Reply.StatusOfSelect == MB_TASK_OK_STATUS)                  //провер€ю статус ответа 
   // {
   //   Set_CntErrorParity03D5_KLAI ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[3] << 8 | RXusartLineBufferForTaskDevice[4] )))  ;                              
   //   Set_CntErrorNoise03D6_KLAI ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[5] << 8 | RXusartLineBufferForTaskDevice[6] )))  ; 
   //   Set_CntErrorDataBit03D7_KLAI ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[7] << 8 | RXusartLineBufferForTaskDevice[8] )))  ; 
   //   Set_CntErrorSBD03D8_KLAI ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[9] << 8 | RXusartLineBufferForTaskDevice[10] )))  ; 
   //   Set_CntErrorTimeOut03D9_KLAI ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[11] << 8 | RXusartLineBufferForTaskDevice[12] )))  ; 
   //   Set_CntErrorOvFlBuf03DA_KLAI ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[13] << 8 | RXusartLineBufferForTaskDevice[14] )))  ; 
   //   Set_CntErrorCurrentHigh03DB_KLAI ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[15] << 8 | RXusartLineBufferForTaskDevice[16] )))  ; 
   //   Set_CntErrorCurrentBel03DC_KLAI ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[17] << 8 | RXusartLineBufferForTaskDevice[18] )))  ;     
   // }
    TaskRequestModbusPolingMsq.StartMBadr    = 0x03D5                      ;
    TaskRequestModbusPolingMsq.QtyMBReg      = 8                           ;
     
    Clear_Ptr_Buf_Polling_Task ()                                          ; 
   
    Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;  
    if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
    {
      return  ; 
    } 
     Set_CntErrorParity03D5_KLAI      ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [0] << 8 | Get_Ptr_Buf_Polling_Task() [1] ) ) )        ;                              
     Set_CntErrorNoise03D6_KLAI       ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [2] << 8 | Get_Ptr_Buf_Polling_Task() [3] ) ) )         ; 
     Set_CntErrorDataBit03D7_KLAI     ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [4] << 8 | Get_Ptr_Buf_Polling_Task() [5] ) ) )       ; 
     Set_CntErrorSBD03D8_KLAI         ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [6] << 8 | Get_Ptr_Buf_Polling_Task() [7] ) ) )           ; 
     Set_CntErrorTimeOut03D9_KLAI     ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [8] << 8 | Get_Ptr_Buf_Polling_Task() [9] ) ) )        ; 
     Set_CntErrorOvFlBuf03DA_KLAI     ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [10] << 8 | Get_Ptr_Buf_Polling_Task() [11] ) ) )       ; 
     Set_CntErrorCurrentHigh03DB_KLAI ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [12] << 8 | Get_Ptr_Buf_Polling_Task() [13] ) ) )   ; 
     Set_CntErrorCurrentBel03DC_KLAI  ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [14] << 8 | Get_Ptr_Buf_Polling_Task() [15] ) ) )    ;    
            
 //   Adres=0x03DD ;   
 //   CLEARALLBUF  ;               
 //   Reply=Create_and_Messege(num,COD_OF_FUNC_MB_READ_OF_DATA,Adres,5,QUE_FOR_TASK_DEVICE,(uint8_t*)&RXusartLineBufferForTaskDevice,(uint8_t*)&TXusartLineBufferForTaskDevice,RingDirection)  ;//делаю запрос  начтение типа                                               
 //   if(Reply.StatusOfSelect == MB_TASK_OK_STATUS)                  //провер€ю статус ответа 
 //   {
 //     Set_CntErrorCRCFromMaster03DD_KLAI  ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[3] << 8 | RXusartLineBufferForTaskDevice[4] )))  ;                              
 //     Set_CntErrorFEFromMaster03DE_KLAI   ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[5] << 8 | RXusartLineBufferForTaskDevice[6] )))  ; 
 //     Set_CntErrorNEFromMaster03DF_KLAI ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[7] << 8 | RXusartLineBufferForTaskDevice[8] )))  ; 
 //     Set_CntErrorOREFromMaster03E0_KLAI     ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[9] << 8 | RXusartLineBufferForTaskDevice[10] )))  ; 
 //     Set_CntErrorLogicFromMaster03E1_KLAI ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[11] << 8 | RXusartLineBufferForTaskDevice[12] )))  ;         
 //   }
    TaskRequestModbusPolingMsq.StartMBadr    = 0x03DD                      ;
    TaskRequestModbusPolingMsq.QtyMBReg      = 5                           ;
     
    Clear_Ptr_Buf_Polling_Task ()                                          ; 
   
    Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;  
    if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
    {
      return  ; 
    } 
    Set_CntErrorCRCFromMaster03DD_KLAI   ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [0] << 8 | Get_Ptr_Buf_Polling_Task() [1] ) ) )        ;                              
    Set_CntErrorFEFromMaster03DE_KLAI    ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [2] << 8 | Get_Ptr_Buf_Polling_Task() [3] ) ) )         ; 
    Set_CntErrorNEFromMaster03DF_KLAI    ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [4] << 8 | Get_Ptr_Buf_Polling_Task() [5] ) ) )         ; 
    Set_CntErrorOREFromMaster03E0_KLAI   ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [6] << 8 | Get_Ptr_Buf_Polling_Task() [7] ) ) )        ; 
    Set_CntErrorLogicFromMaster03E1_KLAI ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [8] << 8 | Get_Ptr_Buf_Polling_Task() [9] ) ) )      ;  
     
    
     
  //  Adres=0x03E2 ; 
  //  CLEARALLBUF  ;               
  //  Reply=Create_and_Messege(num,COD_OF_FUNC_MB_READ_OF_DATA,Adres,4,QUE_FOR_TASK_DEVICE,(uint8_t*)&RXusartLineBufferForTaskDevice,(uint8_t*)&TXusartLineBufferForTaskDevice,RingDirection)  ;//делаю запрос  начтение типа                                               
  //  if(Reply.StatusOfSelect == MB_TASK_OK_STATUS)                  //провер€ю статус ответа 
   // {
  //    Set_VolCurInLine24_KLAI           ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[3] << 8 | RXusartLineBufferForTaskDevice[4] )))  ;                              
  //    Set_VolCurInLine13_KLAI           ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[5] << 8 | RXusartLineBufferForTaskDevice[6] )))  ; 
  //    Set_QtyRequestLineMA_KLAI         ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[7] << 8 | RXusartLineBufferForTaskDevice[8] )))  ; 
  //    Set_QtyRequestLineModbus_KLAI     ( num ,  ( (uint16_t)(RXusartLineBufferForTaskDevice[9] << 8 | RXusartLineBufferForTaskDevice[10] )))  ;               
  //  }   
    TaskRequestModbusPolingMsq.StartMBadr    = 0x03E2                      ;
    TaskRequestModbusPolingMsq.QtyMBReg      = 4                           ;
     
    Clear_Ptr_Buf_Polling_Task ()                                          ; 
   
    Task_Request_Modbus_Polling_Task_OS  ( &TaskRequestModbusPolingMsq , &AnswerModbusPolingMsq  )  ;  
    if ( AnswerModbusPolingMsq.StatusOfSelect != StatusAnswModbusOk )
    {
      return  ; 
    } 
    Set_VolCurInLine24_KLAI       ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [0] << 8 | Get_Ptr_Buf_Polling_Task() [1] ) ) )        ;                              
    Set_VolCurInLine13_KLAI       ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [2] << 8 | Get_Ptr_Buf_Polling_Task() [3] ) ) )         ; 
    Set_QtyRequestLineMA_KLAI     ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [4] << 8 | Get_Ptr_Buf_Polling_Task() [5] ) ) )         ; 
    Set_QtyRequestLineModbus_KLAI ( AdrDev - 1,  ( ( uint16_t )( Get_Ptr_Buf_Polling_Task() [6] << 8 | Get_Ptr_Buf_Polling_Task() [7] ) ) )        ; 
      
}
 /** end **/

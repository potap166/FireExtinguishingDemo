
#include "Func_OS_for_Modbus_Polling_Task.h"
#include "Func_OS_for_Modbus_Polling_Task_Public.h"





  /****************************************************************************
  * ��� �������   : Task_Request_Modbus_Polling_Task_OS()
  * ��������      : ������ � ������ 
  * 
  *
  * ���������     : const TaskRequestModbusPolingMsq_t * const    , 
  *                 AnswerModbusPolingMsq_t * 
  * �������       : osStatus_t
  ****************************************************************************/

 osStatus_t  Task_Request_Modbus_Polling_Task_OS ( const TaskRequestModbusPolingMsq_t * const TaskRequestModbusPolingMsq   , 
                                                                AnswerModbusPolingMsq_t * AnswerModbusPolingMsq)
{   
  osStatus_t osStatus ; 
  
   if ( Waiting_Mutex_Modbus_Polling_Task_OS ( osWaitForever ) == osOK )
   {   
     Send_Msg_Msq_from_osQueueModbusPollingTask_OS ( ( TaskRequestModbusPolingMsq_t *)TaskRequestModbusPolingMsq  ) ;
     if ( Wait_Msq_from_osQueueAnswerModbusPollingTask_OS( AnswerModbusPolingMsq ) == osOK ) 
     {
        osStatus =  osOK ; 
     }
     else 
     {
       osStatus =  osError ;
     }
     Release_Mutex_Modbus_Polling_Task_OS ( ) ; 
    
   } 
   return osStatus ; 
}
/** end **/ 


  /****************************************************************************
  * ��� �������   : Modbus_Polling_Task_Create_OS()
  * ��������      : ������� ������   
  * 
  *
  * ���������     : ���
  * �������       : * void
  ****************************************************************************/


void * Modbus_Polling_Task_Create_OS ( void )
{
  ModbusPollingTaskHandle =  osThreadNew ( Modbus_Polling_Task , NULL , &ModbusPollingTask_attributes );
  return !ModbusPollingTaskHandle || !Create_Que_Msg_Modbus_Polling_Task_OS() || 
         !Create_MUTEX_Modbus_Polling_Task_OS () || !Create_Semofare_Modbus_Polling_Task_OS () ? 
         NULL : ModbusPollingTaskHandle ; 
}
/** end **/


  /****************************************************************************
  * ��� �������   : Waiting_Mutex_Modbus_Polling_Task_OS()
  * ��������      :  ������ ������� 
  * 
  *
  * ���������     : ���
  * �������       : osStatus_t
  ****************************************************************************/


static osStatus_t Waiting_Mutex_Modbus_Polling_Task_OS ( const uint32_t WaitDelay )
{  
   osStatus_t osStatus = osMutexAcquire ( osMutexModbusPollingTask , WaitDelay ) ;

#ifdef TRACE_OS_ENABLE
  Trace_OS_Messege (osStatus ,(const char *) "osMutexModbusPollingTask"  ) ; 
#endif
  return osStatus; 
}
/** end **/ 


  /****************************************************************************
  * ��� �������   : Key_Pad_Keyboard()
  * ��������      : ����� ��������
  * 
  *
  * ���������     : ���
  * �������       : ���
  ****************************************************************************/


static void Release_Mutex_Modbus_Polling_Task_OS ( void )
{   
  osStatus_t osStatus = osMutexRelease (osMutexModbusPollingTask);
  
#ifdef TRACE_OS_ENABLE
  Trace_OS_Messege (osStatus ,(const char *) "osMutexModbusPollingTask"  ) ;
#endif  
}
/** end **/ 


  /****************************************************************************
  * ��� �������   : Waiting_Semofare_Modbus_Polling_Task_OS()
  * ��������      :  ��������  �������� 
  * 
  *
  * ���������     : ���
  * �������       : osStatus_t
  ****************************************************************************/


osStatus_t Waiting_Semofare_Modbus_Polling_Task_OS ( const uint32_t WaitDelay )
{  
  osStatus_t osStatus =  osSemaphoreAcquire ( osSemaphoreBlockOff , WaitDelay ) ;
  
#ifdef TRACE_OS_ENABLE
  Trace_OS_Messege (osStatus ,(const char *) "osSemaphoreBlockOff"  ) ; 
#endif
  return osStatus ; 
}
/** end **/ 


  /****************************************************************************
  * ��� �������   : Release_Semofare_Modbus_Polling_Task_OS()
  * ��������      : �������� �������
  * 
  *
  * ���������     : ���
  * �������       : osStatus_t
  ****************************************************************************/


osStatus_t Release_Semofare_Modbus_Polling_Task_OS ( void )
{   
  osStatus_t osStatus = osSemaphoreRelease ( osSemaphoreBlockOff ) ;
  
#ifdef TRACE_OS_ENABLE
  Trace_OS_Messege (osStatus ,(const char *) "osSemaphoreBlockOff"  ) ;
#endif  
 return osStatus ;  
}
/** end **/ 


  /****************************************************************************
  * ��� �������   : Create_Semofare_Modbus_Polling_Task_OS()
  * ��������      : �������� �������  ��� ��������� ������� 
  * 
  *
  * ���������     : ���
  * �������       : osStatus_t
  ****************************************************************************/


static void * Create_Semofare_Modbus_Polling_Task_OS ( void )
{  
   osSemaphoreBlockOff = osSemaphoreNew ( 2U , 0 , NULL ) ;
   return osSemaphoreBlockOff ; 
}
/** end **/ 



  /****************************************************************************
  * ��� �������   : Create_MUTEX_Modbus_Polling_Task_OS()
  * ��������      :  �������� �������  ��� ������� � ������ MODBUS
  * 
  *
  * ���������     : ���
  * �������       : osStatus_t
  ****************************************************************************/


static void * Create_MUTEX_Modbus_Polling_Task_OS ( void )
{  
   osMutexModbusPollingTask = osMutexNew ( &ModbusPollingTask_Mutex_attributes );
   return osMutexModbusPollingTask ; 
}
/** end **/ 



  /****************************************************************************
  * ��� �������   : Create_Que_Msg_Modbus_Polling_Task_OS()
  * ��������      : �������� �������  ��� �������� ���������� �� modbus 
  *                 � ������� ��� ��������� ���������� 
  * 
  *
  * ���������     : ���
  * �������       : osStatus_t
  ****************************************************************************/


static void * Create_Que_Msg_Modbus_Polling_Task_OS ( void )
{  
  osQueueModbusPollingTask       = osMessageQueueNew ( 2, sizeof ( TaskRequestModbusPolingMsq_t )       , NULL );
  osQueueAnswerModbusPollingTask = osMessageQueueNew ( 2, sizeof ( AnswerModbusPolingMsq_t ) , NULL );
  
  return !osQueueModbusPollingTask || !osQueueAnswerModbusPollingTask ? NULL : osQueueModbusPollingTask ; 
}
/** end **/ 



  /****************************************************************************
  * ��� �������   : Wait_Msq_from_osQueueModbusPollingTask_OS()
  * ��������      :  ������ ��������� 
  * 
  *
  * ���������     : const TaskRequestModbusPolingMsq_t *
  * �������       : osStatus_t
  ****************************************************************************/


 osStatus_t Wait_Msq_from_osQueueModbusPollingTask_OS( const TaskRequestModbusPolingMsq_t * TaskRequestModbusPolingMsq )
{  
   osStatus_t osStatus =   osMessageQueueGet ( osQueueModbusPollingTask , (void *)TaskRequestModbusPolingMsq , NULL , osWaitForever );   // wait for message osWaitForever
#ifdef TRACE_OS_ENABLE
   Trace_OS_Messege (osStatus ,(const char *) "osQueueModbusPollingTask"  ) ;
#endif    
   return osStatus ;
}
/** end **/



  /****************************************************************************
  * ��� �������   : Wait_Msq_from_osQueueAnswerModbusPollingTask_OS()
  * ��������      :  ������ ��������� 
  * 
  *
  * ���������     : AnswerModbusPolingMsq_t * AnswerModbusPolingMsq
  * �������       : osStatus_t
  ****************************************************************************/


static osStatus_t Wait_Msq_from_osQueueAnswerModbusPollingTask_OS( const AnswerModbusPolingMsq_t * AnswerModbusPolingMsq )
{
   osStatus_t osStatus =   osMessageQueueGet ( osQueueAnswerModbusPollingTask , (void *)AnswerModbusPolingMsq , NULL , 5000 );   // wait for message osWaitForever  
#ifdef TRACE_OS_ENABLE
   Trace_OS_Messege (osStatus ,(const char *) "osQueueAnswerModbusPollingTask"  ) ;
#endif  
   return osStatus ;
}
/** end **/



  /****************************************************************************
  * ��� �������   : Send_Msg_Msq_from_osQueueModbusPollingTask_OS()
  * ��������      : ������  � ������ ������  
  * 
  *
  * ���������     :  TaskRequestModbusPolingMsq_t *  
  * �������       : osStatus_t
  ****************************************************************************/


static osStatus_t Send_Msg_Msq_from_osQueueModbusPollingTask_OS ( TaskRequestModbusPolingMsq_t *  TaskRequestModbusPolingMsq )
{ 
   osStatus_t osStatus =   osMessageQueuePut(osQueueModbusPollingTask, TaskRequestModbusPolingMsq, 0U, 0U);
#ifdef TRACE_OS_ENABLE
   Trace_OS_Messege (osStatus ,(const char *) "osQueueModbusPollingTask"  ) ;
#endif     
   return osStatus ;
}
/** end **/ 



  /****************************************************************************
  * ��� �������   : Send_Msg_Msq_from_osQueueAnswerModbusPollingTask_OS()
  * ��������      : ������  � ������ ������ 
  * 
  *
  * ���������     : ���
  * �������       : osStatus_t
  ****************************************************************************/


osStatus_t Send_Msg_Msq_from_osQueueAnswerModbusPollingTask_OS ( AnswerModbusPolingMsq_t * AnswerModbusPolingMsq )
{ 
   osStatus_t osStatus =   osMessageQueuePut(osQueueAnswerModbusPollingTask, AnswerModbusPolingMsq, 0U, 0U);
#ifdef TRACE_OS_ENABLE
   Trace_OS_Messege (osStatus ,(const char *) "osQueueAnswerModbusPollingTask"  ) ;
#endif     
   return osStatus ; 
}
/** end **/ 

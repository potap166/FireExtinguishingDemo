
#include "Func_OS_for_Modbus_Polling_Task.h"
#include "Func_OS_for_Modbus_Polling_Task_Public.h"





  /****************************************************************************
  * Имя функции   : Task_Request_Modbus_Polling_Task_OS()
  * Описание      : запрос в задачу 
  * 
  *
  * Параметры     : const TaskRequestModbusPolingMsq_t * const    , 
  *                 AnswerModbusPolingMsq_t * 
  * Возврат       : osStatus_t
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
  * Имя функции   : Modbus_Polling_Task_Create_OS()
  * Описание      : создать задачу   
  * 
  *
  * Параметры     : нет
  * Возврат       : * void
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
  * Имя функции   : Waiting_Mutex_Modbus_Polling_Task_OS()
  * Описание      :  ожидаю мьютекс 
  * 
  *
  * Параметры     : нет
  * Возврат       : osStatus_t
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
  * Имя функции   : Key_Pad_Keyboard()
  * Описание      : релиз мьютекса
  * 
  *
  * Параметры     : нет
  * Возврат       : нет
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
  * Имя функции   : Waiting_Semofare_Modbus_Polling_Task_OS()
  * Описание      :  ожидание  семафора 
  * 
  *
  * Параметры     : нет
  * Возврат       : osStatus_t
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
  * Имя функции   : Release_Semofare_Modbus_Polling_Task_OS()
  * Описание      : отпустил мьютекс
  * 
  *
  * Параметры     : нет
  * Возврат       : osStatus_t
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
  * Имя функции   : Create_Semofare_Modbus_Polling_Task_OS()
  * Описание      : создание семафор  для получения сигнала 
  * 
  *
  * Параметры     : нет
  * Возврат       : osStatus_t
  ****************************************************************************/


static void * Create_Semofare_Modbus_Polling_Task_OS ( void )
{  
   osSemaphoreBlockOff = osSemaphoreNew ( 2U , 0 , NULL ) ;
   return osSemaphoreBlockOff ; 
}
/** end **/ 



  /****************************************************************************
  * Имя функции   : Create_MUTEX_Modbus_Polling_Task_OS()
  * Описание      :  создание мьютекс  для доступа к задаче MODBUS
  * 
  *
  * Параметры     : нет
  * Возврат       : osStatus_t
  ****************************************************************************/


static void * Create_MUTEX_Modbus_Polling_Task_OS ( void )
{  
   osMutexModbusPollingTask = osMutexNew ( &ModbusPollingTask_Mutex_attributes );
   return osMutexModbusPollingTask ; 
}
/** end **/ 



  /****************************************************************************
  * Имя функции   : Create_Que_Msg_Modbus_Polling_Task_OS()
  * Описание      : создание очереди  для отправки информаций по modbus 
  *                 и очередь для получения результата 
  * 
  *
  * Параметры     : нет
  * Возврат       : osStatus_t
  ****************************************************************************/


static void * Create_Que_Msg_Modbus_Polling_Task_OS ( void )
{  
  osQueueModbusPollingTask       = osMessageQueueNew ( 2, sizeof ( TaskRequestModbusPolingMsq_t )       , NULL );
  osQueueAnswerModbusPollingTask = osMessageQueueNew ( 2, sizeof ( AnswerModbusPolingMsq_t ) , NULL );
  
  return !osQueueModbusPollingTask || !osQueueAnswerModbusPollingTask ? NULL : osQueueModbusPollingTask ; 
}
/** end **/ 



  /****************************************************************************
  * Имя функции   : Wait_Msq_from_osQueueModbusPollingTask_OS()
  * Описание      :  ожидаю сообщение 
  * 
  *
  * Параметры     : const TaskRequestModbusPolingMsq_t *
  * Возврат       : osStatus_t
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
  * Имя функции   : Wait_Msq_from_osQueueAnswerModbusPollingTask_OS()
  * Описание      :  ожидаю сообщение 
  * 
  *
  * Параметры     : AnswerModbusPolingMsq_t * AnswerModbusPolingMsq
  * Возврат       : osStatus_t
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
  * Имя функции   : Send_Msg_Msq_from_osQueueModbusPollingTask_OS()
  * Описание      : запрос  в задачу модбас  
  * 
  *
  * Параметры     :  TaskRequestModbusPolingMsq_t *  
  * Возврат       : osStatus_t
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
  * Имя функции   : Send_Msg_Msq_from_osQueueAnswerModbusPollingTask_OS()
  * Описание      : запрос  в задачу модбас 
  * 
  *
  * Параметры     : нет
  * Возврат       : osStatus_t
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

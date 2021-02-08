
#include "Func_OS_for_Log_Struct.h"
#include "Func_OS_for_Log_Struct_Public.h"






 /****************************************************************************
  * Имя функции   : Waiting_Log_Struct_OS()
  * Описание      :  ожидаю мьютекс 
  * 
  *
  * Параметры     :  No
  * Возврат       : osStatus_t
  ****************************************************************************/

static void * Create_MUTEX_Log_Struct_OS ( void )
{  
   osMutexLogStruct = osMutexNew ( &LogStruct_Mutex_attributes );
   return osMutexLogStruct ; 
}
  /** end **/




  /****************************************************************************
  * Имя функции   : Waiting_Log_Struct_OS()
  * Описание      :  ожидаю мьютекс 
  * 
  *
  * Параметры     :  No
  * Возврат       : osStatus_t
  ****************************************************************************/

static osStatus_t Waiting_Log_Struct_OS ( const uint32_t WaitDelay )
{  
   osStatus_t osStatus = osMutexAcquire ( osMutexLogStruct , WaitDelay ) ;

#ifdef TRACE_OS_ENABLE
  Trace_OS_Messege (osStatus ,(const char *) "osMutexLogStruct"  ) ; 
#endif
  return osStatus; 
}
  /** end **/



  /****************************************************************************
  * Имя функции   : Waiting_Log_Struct_OS()
  * Описание      :  ожидаю мьютекс 
  * 
  *
  * Параметры     :  No
  * Возврат       : osStatus_t
  ****************************************************************************/

static void Release_Mutex_Log_Struct_OS ( void )
{   
  osStatus_t osStatus = osMutexRelease (osMutexLogStruct);
  
#ifdef TRACE_OS_ENABLE
  Trace_OS_Messege (osStatus ,(const char *) "osMutexLogStruct"  ) ;
#endif  
}
  /** end **/




  /****************************************************************************
  * Имя функции   : Waiting_Log_Struct_OS()
  * Описание      :  ожидаю мьютекс 
  * 
  *
  * Параметры     :  No
  * Возврат       : osStatus_t
  ****************************************************************************/
    
void Create_Que_Msg_Log_Struct_OS ( void )
{  
  // очередь  для запроса  протоколирования измененеий 
  osQueueEventAdd = osMessageQueueNew( 10, sizeof ( EventLogStr_t ) , NULL );
  hQueue166 = (QueueHandle_t)osQueueEventAdd;
}
  /** end **/ 



 /****************************************************************************
  * Имя функции   : Waiting_Log_Struct_OS()
  * Описание      :  ожидаю мьютекс 
  * 
  *
  * Параметры     :  No
  * Возврат       : osStatus_t
  ****************************************************************************/
    
void Send_Msg_Log_Struct_OS ( const EventLogStr_t  * EventLogStr )
{ 
  if (osQueueEventAdd != NULL)  
  { 
    osStatus_t osStatus = osMessageQueuePut(osQueueEventAdd,(void *) EventLogStr, 0U, 0U);
    osThreadYield(); 
   #ifdef TRACE_OS_ENABLE
      Trace_OS_Messege (osStatus ,(const char *) "osQueueEventAdd"  ) ; 
   #endif
  }
}
  /** end **/ 



 /****************************************************************************
  * Имя функции   : Waiting_Log_Struct_OS()
  * Описание      :  ожидаю мьютекс 
  * 
  *
  * Параметры     :  No
  * Возврат       : osStatus_t
  ****************************************************************************/

void Event_Task_Create_Log_Struct_OS(void)
{
   EventTaskHandle =  osThreadNew ( Event_Task , NULL , &EventTask_attributes );
   // создаю мьютекс для доступа к структуре лога
   Create_MUTEX_Log_Struct_OS (  )  ; 
}
  /** end **/



 /****************************************************************************
  * Имя функции   : Waiting_Log_Struct_OS()
  * Описание      :  ожидаю мьютекс 
  * 
  *
  * Параметры     :  No
  * Возврат       : osStatus_t
  ****************************************************************************/

osStatus_t Wait_Msq_from_osQueueEventAdd_Log_Struct_OS( EventLogStr_t * EventLogStr )
{
  osStatus_t osStatus = osError  ;
  
  if (osQueueEventAdd != NULL)  
  {    
    osStatus = osMessageQueueGet(osQueueEventAdd,( void *) EventLogStr, NULL, osWaitForever);   // wait for message osWaitForever
    #ifdef TRACE_OS_ENABLE
      Trace_OS_Messege (osStatus ,(const char *) "osQueueEventAdd"  ) ; 
    #endif
  //  osDelay (10) ;
  }
  return osStatus ; 
}
  /** end **/
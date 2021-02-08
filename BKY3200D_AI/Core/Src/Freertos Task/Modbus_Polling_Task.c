
#include "Func_for_Modbus_Polling_Task_Public.h"






/****************************************************************************
  * Имя функции   : Modbus_Polling_Task()
  * Описание      : задача работы с модбас
  * 
  *
  * Параметры     : void const * 
  * Возврат       : нет
  ****************************************************************************/
void Modbus_Polling_Task(void const * argument)
{
 static TaskRequestModbusPolingMsq_t  TaskRequestModbusPolingMsq  ; 


  while (1)
  {
     if ( Wait_Msq_from_osQueueModbusPollingTask_OS( ( TaskRequestModbusPolingMsq_t *)&TaskRequestModbusPolingMsq ) == osOK )
     {
        Handler_Modbus_Polling_Task ( (  TaskRequestModbusPolingMsq_t * )&TaskRequestModbusPolingMsq )  ;  
     }
  }
}
 /** end **/ 

#include "Func_OS_for_Polling_Task.h"
#include "Func_OS_for_Polling_Task_Public.h"



 /****************************************************************************
  * Имя функции   : Change_Priority_Polling_Task_OS()
  * Описание      : изменяю приоритет у задачи опроса устройств  
  *                 0-низкий 1-высокий 
  * 
  *
  * Параметры     : const uint8_t 
  * Возврат       : нет
  ****************************************************************************/

void  Change_Priority_Polling_Task_OS  ( const uint8_t Low_Hight )              //0-низкий 1-высокий
{  
  if(Low_Hight)
  {
    osThreadSetPriority ( PollingTaskHandle , osPriorityRealtime ) ;
  }
  else 
  {
    osThreadSetPriority ( PollingTaskHandle , osPriorityNormal ) ;
  }
}
/** end **/



 /****************************************************************************
  * Имя функции   : Polling_Task_Create_OS()
  * Описание      : создаю задачу  
  * 
  *
  * Параметры     : нет 
  * Возврат       : нет
  ****************************************************************************/

void Polling_Task_Create_OS ( void )
{
  PollingTaskHandle =  osThreadNew ( Polling_Task , NULL , &PollingTask_attributes );
}
/** end **/

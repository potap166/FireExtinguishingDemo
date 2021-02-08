
#include "Func_OS_for_GUI_MB_Task.h"
#include "Func_OS_for_GUI_MB_Task_Public.h"




  /****************************************************************************
  * Имя функции   : Send_Button_Msq_to_GUI()
  * Описание      : отправить в очередь  
  * 
  *
  * Параметры     : const Buttons_t
  * Возврат       : нет
  ****************************************************************************/


void Send_Msg_GUI_MB_Task_OS (  GuiForMB_t * GuiForMB  )
{ 
  if (osQueueForGui != NULL)  
  { 
    osMessageQueuePut(osQueueForGui, GuiForMB, 0U, 0U);
  }
}
/** end **/


  /****************************************************************************
  * Имя функции   : Create_Que_Msg_GUI_MB_Task_OS()
  * Описание      : создание очереди    
  * 
  *
  * Параметры     : нет
  * Возврат       : нет
  ****************************************************************************/


void Create_Que_Msg_GUI_MB_Task_OS ( void )
{  
  // очередь  для запроса  протоколирования измененеий 
  osQueueForGui = osMessageQueueNew( 5, sizeof ( GuiForMB_t ) , NULL );
}
/** end **/


  /****************************************************************************
  * Имя функции   : Gui_MB_Task_Create_OS()
  * Описание      :  
  * 
  *
  * Параметры     : const Buttons_t
  * Возврат       : нет
  ****************************************************************************/


void Gui_MB_Task_Create_OS (void )
{
 GUITaskForMBHandle =  osThreadNew ( GUI_Task_MB , NULL , &GuiTask_MB_attributes );
}
/** end **/


  /****************************************************************************
  * Имя функции   : Wait_Msq_from_osQueueEventAdd_GUI_MB_Task_OS()
  * Описание      : ожилаю сообщение 
  * 
  *
  * Параметры     : GuiForMB_t *
  * Возврат       : osStatus_t
  ****************************************************************************/


osStatus_t Wait_Msq_from_osQueueEventAdd_GUI_MB_Task_OS( GuiForMB_t * GuiForMB )
{
  osStatus_t osStatus = osError  ;
  
  if (osQueueForGui != NULL)  
  {    
    osStatus = osMessageQueueGet(osQueueForGui, GuiForMB, NULL, osWaitForever);   // wait for message osWaitForever
  }
  return osStatus ; 
}
/** end **/
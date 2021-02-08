
#include "Func_OS_for_GUI_MB_Task.h"
#include "Func_OS_for_GUI_MB_Task_Public.h"




  /****************************************************************************
  * ��� �������   : Send_Button_Msq_to_GUI()
  * ��������      : ��������� � �������  
  * 
  *
  * ���������     : const Buttons_t
  * �������       : ���
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
  * ��� �������   : Create_Que_Msg_GUI_MB_Task_OS()
  * ��������      : �������� �������    
  * 
  *
  * ���������     : ���
  * �������       : ���
  ****************************************************************************/


void Create_Que_Msg_GUI_MB_Task_OS ( void )
{  
  // �������  ��� �������  ���������������� ���������� 
  osQueueForGui = osMessageQueueNew( 5, sizeof ( GuiForMB_t ) , NULL );
}
/** end **/


  /****************************************************************************
  * ��� �������   : Gui_MB_Task_Create_OS()
  * ��������      :  
  * 
  *
  * ���������     : const Buttons_t
  * �������       : ���
  ****************************************************************************/


void Gui_MB_Task_Create_OS (void )
{
 GUITaskForMBHandle =  osThreadNew ( GUI_Task_MB , NULL , &GuiTask_MB_attributes );
}
/** end **/


  /****************************************************************************
  * ��� �������   : Wait_Msq_from_osQueueEventAdd_GUI_MB_Task_OS()
  * ��������      : ������ ��������� 
  * 
  *
  * ���������     : GuiForMB_t *
  * �������       : osStatus_t
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
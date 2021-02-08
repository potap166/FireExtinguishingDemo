#ifndef  __FUNC_OS_FOR_GUI_MB_TASK_PUBLIC_H
#define  __FUNC_OS_FOR_GUI_MB_TASK_PUBLIC_H

#include "cmsis_os2.h"
#include "GUI_MB_Data_Type.h"
#include "stdint.h"
#include "Modbus_Info.h"

void Gui_MB_Task_Create_OS                              ( void )                ;  
void Create_Que_Msg_GUI_MB_Task_OS                      ( void )                ;
osStatus_t Wait_Msq_from_osQueueEventAdd_GUI_MB_Task_OS ( GuiForMB_t * )        ;
void Send_Msg_GUI_MB_Task_OS                            ( GuiForMB_t * )        ;


#endif 

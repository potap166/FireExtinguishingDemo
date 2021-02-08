#ifndef  __FUNC_OS_FOR_GUI_MB_TASK_H
#define  __FUNC_OS_FOR_GUI_MB_TASK_H



#include "cmsis_os2.h"
                              

const osThreadAttr_t GuiTask_MB_attributes = {
  .name = "GuiTask",
  .priority = (osPriority_t) osPriorityBelowNormal,
  .stack_size = 512
};

static  osThreadId_t          GUITaskForMBHandle                                ;
static  osMessageQueueId_t    osQueueForGui                                     ;



extern  void GUI_Task_MB(void  * argument)     ;
 





#endif 

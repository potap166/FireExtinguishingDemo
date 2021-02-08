#ifndef  __FUNC_OS_FOR_POLLING_TASK_H
#define  __FUNC_OS_FOR_POLLING_TASK_H

#include "cmsis_os2.h"

//#include "Include_Lib.h"                              

//static osRtxMutex_t  osRtxMutex ; 

static osThreadId_t        PollingTaskHandle @"SDRAM_STATIC_VAR"                  ;
const osThreadAttr_t       PollingTask_attributes = {
  .name = "PollingTask",
  .priority = (osPriority_t) osPriorityNormal,
  .stack_size = 128 * 5
};

extern  void Polling_Task(void  * argument) ;
 

#endif 

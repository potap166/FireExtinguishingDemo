

#ifndef  __FUNC_OS_FOR_LOG_STRUCT_H
#define  __FUNC_OS_FOR_LOG_STRUCT_H

#include "cmsis_os2.h"
#include "Include_Lib.h"                              

typedef struct QueueDefinition * QueueHandle_t;

static osMessageQueueId_t  osQueueEventAdd          ;// @"SDRAM_STATIC_VAR"        ;
static osMutexId_t         osMutexLogStruct          @"SDRAM_STATIC_VAR"        ;  

 QueueHandle_t hQueue166 ;

static osThreadId_t        EventTaskHandle  ; //@"SDRAM_STATIC_VAR"                  ;
const osThreadAttr_t       EventTask_attributes = {
  .name = "EventsTask",
  .priority = (osPriority_t) osPriorityHigh,
  .stack_size = 128 * 5
};


const osMutexAttr_t   LogStruct_Mutex_attributes = {
  NULL,     // human readable mutex name
  osMutexPrioInherit,  // attr_bits
  NULL,                // memory for control block   
  0U                   // size for control block
};



extern  void Event_Task(void  * argument)   ; 

#endif 

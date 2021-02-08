#ifndef  __FUNC_OS_FOR_MODBUS_POLLING_TASK_H
#define  __FUNC_OS_FOR_MODBUS_POLLING_TASK_H

#include "cmsis_os2.h"
//#include "Include_Lib.h"                              
#include "Composite_Data_Types.h"
#include  "Trace_Tools.h"

static osSemaphoreId_t     osSemaphoreBlockOff @"SDRAM_STATIC_VAR"              ;  
static osMessageQueueId_t  osQueueAnswerModbusPollingTask @"SDRAM_STATIC_VAR"   ;
static osMessageQueueId_t  osQueueModbusPollingTask @"SDRAM_STATIC_VAR"         ;
static osThreadId_t        ModbusPollingTaskHandle @"SDRAM_STATIC_VAR"          ;
static osMutexId_t         osMutexModbusPollingTask  @"SDRAM_STATIC_VAR"        ;  
 
const osMutexAttr_t   ModbusPollingTask_Mutex_attributes = {
  NULL,     // human readable mutex name
  osMutexPrioInherit,  // attr_bits
  NULL,                // memory for control block   
  0U                   // size for control block
};

const osThreadAttr_t       ModbusPollingTask_attributes = {
  .name = "ModbusPollingTask",
  .priority = (osPriority_t) osPriorityNormal,
  .stack_size = 128 * 5
};


static osStatus_t Send_Msg_Msq_from_osQueueModbusPollingTask_OS       ( TaskRequestModbusPolingMsq_t *  TaskRequestModbusPolingMsq ) ;

static osStatus_t Wait_Msq_from_osQueueAnswerModbusPollingTask_OS     ( const  AnswerModbusPolingMsq_t *  )      ;
static void * Create_Que_Msg_Modbus_Polling_Task_OS                   ( void )                                   ;
static void * Create_Semofare_Modbus_Polling_Task_OS                  ( void )                                   ;
static void * Create_MUTEX_Modbus_Polling_Task_OS                     ( void )                                   ;
static osStatus_t Waiting_Mutex_Modbus_Polling_Task_OS                ( const uint32_t WaitDelay )               ;
static void Release_Mutex_Modbus_Polling_Task_OS                      ( void )                                   ;


extern  void Modbus_Polling_Task(void  * argument) ;


#endif 

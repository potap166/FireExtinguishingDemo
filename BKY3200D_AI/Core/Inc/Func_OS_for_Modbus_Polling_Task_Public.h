#ifndef  __FUNC_OS_FOR_MODBUS_POLLING_TASK_PUBLIC_H
#define  __FUNC_OS_FOR_MODBUS_POLLING_TASK_PUBLIC_H

#include "cmsis_os2.h"
#include "Composite_Data_Types.h"

void * Modbus_Polling_Task_Create_OS                            ( void )                  ;

osStatus_t Task_Request_Modbus_Polling_Task_OS                 ( const TaskRequestModbusPolingMsq_t * const , AnswerModbusPolingMsq_t * )  ;
osStatus_t Waiting_Semofare_Modbus_Polling_Task_OS              ( const uint32_t  )                                                        ;
osStatus_t Release_Semofare_Modbus_Polling_Task_OS              ( void )                                                                   ;
osStatus_t Wait_Msq_from_osQueueModbusPollingTask_OS            ( const TaskRequestModbusPolingMsq_t * TaskRequestModbusPolingMsq )        ;
osStatus_t Send_Msg_Msq_from_osQueueAnswerModbusPollingTask_OS  ( AnswerModbusPolingMsq_t * AnswerModbusPolingMsq )                        ;

#endif 

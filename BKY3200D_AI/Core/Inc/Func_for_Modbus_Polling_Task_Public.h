#ifndef  __FUNC_FOR_MODBUS_POLLING_TASK_PUBLIC_H
#define  __FUNC_FOR_MODBUS_POLLING_TASK_PUBLIC_H
                         
#include "Func_OS_for_Modbus_Polling_Task_Public.h"

 void Clear_Buf_Modbus_Polling_Task                           ( void )                                         ;
 uint8_t * Get_Ptr_Buf_Modbus_Polling_Task                    ( void )                                         ;
 uint8_t Get_CurrentQtyByteRecive_Buf_Modbus_Polling_Task     ( void )                                         ;
 void Set_CurrentQtyByteRecive_Buf_Modbus_Polling_Task        ( const uint8_t  )                               ;
 void  Handler_Modbus_Polling_Task                            (const TaskRequestModbusPolingMsq_t * const   )  ;  

#endif 
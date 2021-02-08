#ifndef  __FUNC_FOR_POLLING_TASK_PUBLIC_H
#define  __FUNC_FOR_POLLING_TASK_PUBLIC_H


#include "Simple_Data_Types.h"                            
#include "Func_OS_for_Polling_Task_Public.h"


uint8_t * Get_Ptr_Buf_Polling_Task                          ( void )               ;
void Clear_Ptr_Buf_Polling_Task                             ( void )               ; 
void Clear_ArrayStructMesFromKL_Polling_Task                ( void )               ; 
void Add_Mes_ArrayStructMesFromKL_Polling_Task              ( const StructMesFromKL_t ) ; 
void Polling_In_Slave                                       ( void )               ;
StructMesFromKL_t Get_Mes_ArrayStructMesFromKL_Polling_Task ( const uint8_t )      ;
uint8_t Get_Cnt_ArrayStructMesFromKL_Polling_Task           ( void )               ;


#endif 

#ifndef  __FUNC_OS_FOR_POLLING_TASK_PUBLIC_H
#define  __FUNC_OS_FOR_POLLING_TASK_PUBLIC_H

#include "cmsis_os2.h"

//#include "Simple_Data_Types.h"


void Polling_Task_Create_OS(void)    ;
void  Change_Priority_Polling_Task_OS  ( const uint8_t Low_Hight )   ; 

#endif 

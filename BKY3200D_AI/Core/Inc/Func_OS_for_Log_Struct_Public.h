

#ifndef  __FUNC_OS_FOR_LOG_STRUCT_PUBLIC_H
#define  __FUNC_OS_FOR_LOG_STRUCT_PUBLIC_H

#include "cmsis_os2.h"
#include "Simple_Data_Types.h"


void Create_Que_Msg_Log_Struct_OS    ( void )                                                ;
void Send_Msg_Log_Struct_OS ( const EventLogStr_t  * EventLogStr )                           ;
void Event_Task_Create_Log_Struct_OS ( void )                                                ;
osStatus_t Wait_Msq_from_osQueueEventAdd_Log_Struct_OS (  EventLogStr_t * EventLogStr ) ;

#endif 

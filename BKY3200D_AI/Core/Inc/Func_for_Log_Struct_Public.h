

#ifndef  __FUNC_FOR_LOG_STRUCT_PUBLIC_H
#define  __FUNC_FOR_LOG_STRUCT_PUBLIC_H

#include "Func_OS_for_Log_Struct_Public.h"

#define START_YEAR                                (uint16_t)2021U

#define EVENT_CONDITION_1_HasBeenDelivery         (uint8_t)1U
#define EVENT_CONDITION_1_HasBeenWached           (uint8_t)2U
#define EVENT_CONDITION_1_AtivDeactiv             (uint8_t)4U 
#define EVENT_CONDITION_1_ResetEvent              (uint8_t)8U 
#define EVENT_CONDITION_1_EventCameFromBottom     (uint8_t)16U  

#define EVENT_CONDITION_1_NeedTranstoDown         (uint8_t)16U 
#define EVENT_CONDITION_1_HasBeenTranftoDown      (uint8_t)32U 


#define EVENT_CONDITION_2_HasBeenWached           (uint8_t)1U

void Add_Event_Log_Struct                 ( const  EventLogStr_t  * const )  ;
EventLogStr_t * Get_Event_Log_Struct      ( const CurrentStrLogStruct_t   )  ; 
TypeEvents_t Get_Event_Type_Log_Struct    ( const IDEvent_t  )               ;

TypeEvents_t Get_Event_Type_Log_Struct    ( const IDEvent_t  )               ; 
const char * Get_Event_Descr_Log_Struct   ( const IDEvent_t  )               ;
FireBooL_t Check_ID_Event_Type_Log_Struct ( const IDEvent_t IDEvent )        ;
void Clear_Struct_Event_Log_Struct        ( void )                           ;
uint16_t Get_Cursor_Event_Log_Table       ( void )                           ;
#endif 

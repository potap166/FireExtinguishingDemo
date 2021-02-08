#ifndef  __FUNC_FOR_LOG_STRUCT_H
#define  __FUNC_FOR_LOG_STRUCT_H

#include "Include_Lib.h"
#include "Description_of_Events.h"
#include "Total_Tools.h"

 static EventLog_t EventLog @ "SDRAM_DATA";

#define CLEAR_EventLog                {uint8_t* ptrH=(uint8_t*)&EventLog;\
                                      for (uint32_t i=0 ;i<sizeof(EventLog);i++)\
                                      {*ptrH++=0;}}  

#endif 
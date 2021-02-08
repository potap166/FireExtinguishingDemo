#ifndef  __FUNC_FOR_POLLING_DEVICE_STRUCT_H
#define  __FUNC_FOR_POLLING_DEVICE_STRUCT_H

#include "FreeRTOS.h"
#include "Composite_Data_Types.h"


static PollingDevStruct_t   PollingDevStruct  @ "SDRAM_STATIC_VAR"         ;


#define POLL_DEV_STR                          PollingDevStruct.PollingDevString 


#endif 

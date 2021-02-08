#ifndef  __FUNC_FOR_POLLING_TASK_H
#define  __FUNC_FOR_POLLING_TASK_H


#include "Composite_Data_Types.h"
#include "Total_Tools.h"   
#include "KL_AI_Polling_Func_Public.h"
#include "Communic_Ring_Func_Public.h" 
#include "Func_for_Polling_Device_Struct_Public.h"

#define QTY_MES_INTO_ArrayStructMesFromKL                          (uint8_t)255U

static uint8_t              PollingTaskBuffer    [ 264 ]    @ "SDRAM_STATIC_VAR" ; 
static StructMesFromKL_t    ArrayStructMesFromKL [ QTY_MES_INTO_ArrayStructMesFromKL ] @ "SDRAM_STATIC_VAR" ; // в эту структуру сначала считываем все сообщения 
static uint8_t              CntMes                  @ "SDRAM_STATIC_VAR"  ; // колличество сообщений  
static uint8_t              ArrayStructMesFromKLCnt @ "SDRAM_STATIC_VAR" ; 





#endif 

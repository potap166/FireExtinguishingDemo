#ifndef  __FUNC_FOR_MODBUS_POLLING_TASK_H
#define  __FUNC_FOR_MODBUS_POLLING_TASK_H

#include "Total_Tools.h"
#include "String.h"
#include "UART_Public.h"
#include "Composite_Data_Types.h"


static uint8_t  ModbusPollingUsartBuffer [ 264 ] @"SDRAM_STATIC_VAR" ;
static uint8_t  CurrentQtyByteRecive @"SDRAM_STATIC_VAR" ;

typedef struct 
{      
  uint8_t   TransQtyByte       ; 
  uint8_t   TotalQtyByte       ;   
  uint16_t  ReciveQtyByte      ;                
} 
ModbusCalcQtyByte_t ;
 

static void Packet_Assambly_for_Request( const AdresModbus_t  ,const CodOfFuncModbus_t  ,const RegistrsModbus_t ,
                                   const QtyRegOneActModbus_t  ,const uint8_t * )                           ;

static ModbusCalcQtyByte_t Calculation_of_Waiting_Time_For_MB (const CodOfFuncModbus_t , const RegistrsModbus_t )  ;

#define QTY_ATTEMPT_REQUEST_MB                                    (uint8_t)3U
#define MAX_LENGH_PACKAGE_MB                                      (uint16_t)258U   
#define MIN_LENGH_PACKAGE_MB                                      (uint16_t)4U   
#define LENGH_CRC_MB                                              (uint8_t)2U  
#endif 

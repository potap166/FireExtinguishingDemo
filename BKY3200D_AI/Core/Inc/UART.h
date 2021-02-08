#ifndef  __UART_H
#define  __UART_H

#include "GPIO_Public.h"
#include "Func_for_Modbus_Polling_Task_Public.h"
#include "stm32f4xx_hal.h"

static UART_HandleTypeDef huart1,huart2;
static uint8_t FirstReciveByteU1=0 ,FirstReciveByteU2=0;
UART_HandleTypeDef * Get_Ptr_UART ( const uint8_t NumUart ) ;

#endif 

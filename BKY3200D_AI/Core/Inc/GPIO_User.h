
#ifndef  __GPIO_USER_H
#define  __GPIO_USER_H

#include "stm32f4xx_hal.h"
/******************************************************************************/
//определяю порт и пин отвечающий за  разрешение приёма\передачи 1 Uart который направлен вниз 
#define ENABLE_TRANSM_DOWN_PORT    GPIOB
#define ENABLE_TRANSM_DOWN_PIN     GPIO_PIN_6 

#define ENABLE_TRANSM_UP_PORT      GPIOH
#define ENABLE_TRANSM_UP_PIN       GPIO_PIN_4  
/******************************************************************************/   
// новый
#define TX_ON_UART_DOWN     HAL_GPIO_WritePin(ENABLE_TRANSM_DOWN_PORT,ENABLE_TRANSM_DOWN_PIN ,GPIO_PIN_SET) //
#define RX_ON_UART_DOWN     HAL_GPIO_WritePin(ENABLE_TRANSM_DOWN_PORT,ENABLE_TRANSM_DOWN_PIN ,GPIO_PIN_RESET) // для 1 го адреса  в slave 

#define TX_ON_UART_UP     HAL_GPIO_WritePin(ENABLE_TRANSM_UP_PORT,ENABLE_TRANSM_UP_PIN ,GPIO_PIN_SET) //
#define RX_ON_UART_UP     HAL_GPIO_WritePin(ENABLE_TRANSM_UP_PORT,ENABLE_TRANSM_UP_PIN ,GPIO_PIN_RESET) //
/******************************************************************************/


#endif
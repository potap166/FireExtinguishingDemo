
#ifndef  __GPIO_USER_H
#define  __GPIO_USER_H

#include "stm32f4xx_hal.h"
/******************************************************************************/
//��������� ���� � ��� ���������� ��  ���������� �����\�������� 1 Uart ������� ��������� ���� 
#define ENABLE_TRANSM_DOWN_PORT    GPIOB
#define ENABLE_TRANSM_DOWN_PIN     GPIO_PIN_6 

#define ENABLE_TRANSM_UP_PORT      GPIOH
#define ENABLE_TRANSM_UP_PIN       GPIO_PIN_4  
/******************************************************************************/   
// �����
#define TX_ON_UART_DOWN     HAL_GPIO_WritePin(ENABLE_TRANSM_DOWN_PORT,ENABLE_TRANSM_DOWN_PIN ,GPIO_PIN_SET) //
#define RX_ON_UART_DOWN     HAL_GPIO_WritePin(ENABLE_TRANSM_DOWN_PORT,ENABLE_TRANSM_DOWN_PIN ,GPIO_PIN_RESET) // ��� 1 �� ������  � slave 

#define TX_ON_UART_UP     HAL_GPIO_WritePin(ENABLE_TRANSM_UP_PORT,ENABLE_TRANSM_UP_PIN ,GPIO_PIN_SET) //
#define RX_ON_UART_UP     HAL_GPIO_WritePin(ENABLE_TRANSM_UP_PORT,ENABLE_TRANSM_UP_PIN ,GPIO_PIN_RESET) //
/******************************************************************************/


#endif
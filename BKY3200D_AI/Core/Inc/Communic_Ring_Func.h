
#ifndef  __COMMUNIC_RING_FUNC_H
#define  __COMMUNIC_RING_FUNC_H


#include "cmsis_os2.h"
#include "stm32f4xx_hal.h"
#include <stdint.h>
#include "TableConst.h"

static RingDir_t RingDirection  @"SDRAM_STATIC_VAR";  //RingDirection 0-левое 1- правое
static volatile  uint8_t  currentDir  @"SDRAM_STATIC_VAR"; 

 //определяю порты и пины отвечающие за  направления  по кольцу  вниз  
#define DIRECTION_RING_LEFT_PORT   GPIOF
#define DIRECTION_RING_RIGHT_PORT  GPIOF

#define DIRECTION_RING_LEFT_PIN    GPIO_PIN_6
#define DIRECTION_RING_RIGHT_PIN   GPIO_PIN_7

#define DELAY_TURN_OFF     (uint8_t)2U
#define DELAY_TURN_ON      (uint8_t)3U


#define LEFT_DIRECTION_OF_RING    HAL_GPIO_WritePin(DIRECTION_RING_RIGHT_PORT,DIRECTION_RING_RIGHT_PIN ,GPIO_PIN_RESET);osDelay(DELAY_TURN_OFF) ;\
                                  HAL_GPIO_WritePin(DIRECTION_RING_LEFT_PORT,DIRECTION_RING_LEFT_PIN ,GPIO_PIN_SET) ;osDelay(DELAY_TURN_ON); currentDir=0 ;
#define RIGHT_DIRECTION_OF_RING   HAL_GPIO_WritePin(DIRECTION_RING_LEFT_PORT,DIRECTION_RING_LEFT_PIN ,GPIO_PIN_RESET); osDelay(DELAY_TURN_OFF);\
                                  HAL_GPIO_WritePin(DIRECTION_RING_RIGHT_PORT,DIRECTION_RING_RIGHT_PIN,GPIO_PIN_SET) ;osDelay(DELAY_TURN_ON); currentDir=1 ; 
                                  
                                  
                                  
#endif
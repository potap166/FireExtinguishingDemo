

#ifndef  __FUNC_FOR_KEYBOARD_PUBLIC_H
#define  __FUNC_FOR_KEYBOARD_PUBLIC_H


#include <stdint.h>
#include "stm32f4xx_hal.h"
#include "Func_OS_for_KeyBoard_Public.h"
#include "Buttons.h"


extern  void Init_Port (uint16_t pin , GPIO_TypeDef * port , uint8_t out_in ) ;         //функци€ инициализаций портов

  #define  PORT_OUTPUT            1U
  #define  PORT_INPUT             0U

//  определ€ю  выходы 
/******************************************************************************/
 //  выход на шлейфе            выход процессора    
  #define  OUT_1_PIN            GPIO_PIN_3
  #define  OUT_1_PORT           GPIOI 
  #define  OUT_1_ON             HAL_GPIO_WritePin(OUT_1_PORT,OUT_1_PIN ,GPIO_PIN_SET)   
  #define  OUT_1_OFF            HAL_GPIO_WritePin(OUT_1_PORT,OUT_1_PIN ,GPIO_PIN_RESET) 
  #define  OUT_1_READ           HAL_GPIO_ReadPin(OUT_1_PORT,OUT_1_PIN) 

  #define  OUT_2_PIN            GPIO_PIN_2 
  #define  OUT_2_PORT           GPIOE 
  #define  OUT_2_ON             HAL_GPIO_WritePin(OUT_2_PORT,OUT_2_PIN ,GPIO_PIN_SET)   
  #define  OUT_2_OFF            HAL_GPIO_WritePin(OUT_2_PORT,OUT_2_PIN ,GPIO_PIN_RESET) 
  #define  OUT_2_READ           HAL_GPIO_ReadPin(OUT_2_PORT,OUT_2_PIN) 

  #define  OUT_3_PIN            GPIO_PIN_3
  #define  OUT_3_PORT           GPIOE 
  #define  OUT_3_ON             HAL_GPIO_WritePin(OUT_3_PORT,OUT_3_PIN ,GPIO_PIN_SET)   
  #define  OUT_3_OFF            HAL_GPIO_WritePin(OUT_3_PORT,OUT_3_PIN ,GPIO_PIN_RESET) 
  #define  OUT_3_READ           HAL_GPIO_ReadPin(OUT_3_PORT,OUT_3_PIN) 

  #define  OUT_4_PIN            GPIO_PIN_9 
  #define  OUT_4_PORT           GPIOG 
  #define  OUT_4_ON             HAL_GPIO_WritePin(OUT_4_PORT,OUT_4_PIN ,GPIO_PIN_SET)   
  #define  OUT_4_OFF            HAL_GPIO_WritePin(OUT_4_PORT,OUT_4_PIN ,GPIO_PIN_RESET)
  #define  OUT_4_READ           HAL_GPIO_ReadPin(OUT_4_PORT,OUT_4_PIN)  

  #define  OUT_5_PIN            GPIO_PIN_4
  #define  OUT_5_PORT           GPIOB 
  #define  OUT_5_ON             HAL_GPIO_WritePin(OUT_5_PORT,OUT_5_PIN ,GPIO_PIN_SET)   
  #define  OUT_5_OFF            HAL_GPIO_WritePin(OUT_5_PORT,OUT_5_PIN ,GPIO_PIN_RESET)
  #define  OUT_5_READ           HAL_GPIO_ReadPin(OUT_5_PORT,OUT_5_PIN) 

  #define  OUT_6_PIN            GPIO_PIN_13 
  #define  OUT_6_PORT           GPIOG 
  #define  OUT_6_ON             HAL_GPIO_WritePin(OUT_6_PORT,OUT_6_PIN ,GPIO_PIN_SET)   
  #define  OUT_6_OFF            HAL_GPIO_WritePin(OUT_6_PORT,OUT_6_PIN ,GPIO_PIN_RESET)
  #define  OUT_6_READ           HAL_GPIO_ReadPin(OUT_6_PORT,OUT_6_PIN)  

  #define  OUT_7_PIN            GPIO_PIN_14 
  #define  OUT_7_PORT           GPIOG 
  #define  OUT_7_ON             HAL_GPIO_WritePin(OUT_7_PORT,OUT_7_PIN ,GPIO_PIN_SET)   
  #define  OUT_7_OFF            HAL_GPIO_WritePin(OUT_7_PORT,OUT_7_PIN ,GPIO_PIN_RESET)
  #define  OUT_7_READ           HAL_GPIO_ReadPin(OUT_7_PORT,OUT_7_PIN) 
  
  #define  OUT_8_PIN            GPIO_PIN_8 
  #define  OUT_8_PORT           GPIOI 
  #define  OUT_8_ON             HAL_GPIO_WritePin(OUT_8_PORT,OUT_8_PIN ,GPIO_PIN_SET)   
  #define  OUT_8_OFF            HAL_GPIO_WritePin(OUT_8_PORT,OUT_8_PIN ,GPIO_PIN_RESET)
  #define  OUT_8_READ           HAL_GPIO_ReadPin(OUT_8_PORT,OUT_8_PIN)

  #define  OUT_9_PIN           GPIO_PIN_5 
  #define  OUT_9_PORT          GPIOB 
  #define  OUT_9_ON            HAL_GPIO_WritePin(OUT_9_PORT,OUT_9_PIN ,GPIO_PIN_SET)   
  #define  OUT_9_OFF           HAL_GPIO_WritePin(OUT_9_PORT,OUT_9_PIN ,GPIO_PIN_RESET) 
  #define  OUT_9_READ          HAL_GPIO_ReadPin(OUT_9_PORT,OUT_9_PIN)
 
  #define  OUT_10_PIN           GPIO_PIN_6
  #define  OUT_10_PORT          GPIOI 
  #define  OUT_10_ON            HAL_GPIO_WritePin(OUT_10_PORT,OUT_10_PIN ,GPIO_PIN_SET)   
  #define  OUT_10_OFF           HAL_GPIO_WritePin(OUT_10_PORT,OUT_10_PIN ,GPIO_PIN_RESET)
  #define  OUT_10_READ          HAL_GPIO_ReadPin(OUT_10_PORT,OUT_10_PIN)

  #define  OUT_11_PIN           GPIO_PIN_7
  #define  OUT_11_PORT          GPIOI 
  #define  OUT_11_ON            HAL_GPIO_WritePin(OUT_11_PORT,OUT_11_PIN ,GPIO_PIN_SET)   
  #define  OUT_11_OFF           HAL_GPIO_WritePin(OUT_11_PORT,OUT_11_PIN ,GPIO_PIN_RESET)
  #define  OUT_11_READ          HAL_GPIO_ReadPin(OUT_11_PORT,OUT_11_PIN)


//определ€ю строки и р€ды и их функций
/******************************************************************************/ 
  #define  ROW_1_ON                  OUT_11_ON                                  // 
  #define  ROW_1_OFF                 OUT_11_OFF 
  #define  ROW_1_INIT                Init_Port(OUT_11_PIN,OUT_11_PORT,PORT_OUTPUT) 

  #define  ROW_2_ON                  OUT_10_ON                                    // 
  #define  ROW_2_OFF                 OUT_10_OFF 
  #define  ROW_2_INIT                Init_Port(OUT_10_PIN,OUT_10_PORT,PORT_OUTPUT) 

  #define  ROW_3_ON                  OUT_9_ON                                    // 
  #define  ROW_3_OFF                 OUT_9_OFF  
  #define  ROW_3_INIT                Init_Port(OUT_9_PIN,OUT_9_PORT,PORT_OUTPUT) 

  #define  ROW_4_ON                  OUT_8_ON                                    // 
  #define  ROW_4_OFF                 OUT_8_OFF  
  #define  ROW_4_INIT                Init_Port(OUT_8_PIN,OUT_8_PORT,PORT_OUTPUT) 

  #define  ROW_5_ON                  OUT_7_ON                                    // 
  #define  ROW_5_OFF                 OUT_7_OFF  
  #define  ROW_5_INIT                Init_Port(OUT_7_PIN,OUT_7_PORT,PORT_OUTPUT) 


  #define ALL_ROW_OFF          ROW_1_OFF;ROW_2_OFF;ROW_3_OFF;ROW_4_OFF;ROW_5_OFF;  
  #define ALL_ROW_ON           ROW_1_ON;ROW_2_ON;ROW_3_ON;ROW_4_ON;ROW_5_ON;  
      
  #define  QTY_ROW              5   
 

////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
 

  #define  STRING_1_READ             OUT_1_READ                                 //
  #define  STRING_1_INIT             Init_Port(OUT_1_PIN,OUT_1_PORT,PORT_INPUT) 

  #define  STRING_2_READ             OUT_2_READ                                 //
  #define  STRING_2_INIT             Init_Port(OUT_2_PIN,OUT_2_PORT,PORT_INPUT) 
 
  #define  STRING_3_READ             OUT_3_READ                                 //
  #define  STRING_3_INIT             Init_Port(OUT_3_PIN,OUT_3_PORT,PORT_INPUT) 
 
  #define  STRING_4_READ             OUT_4_READ                                 
  #define  STRING_4_INIT             Init_Port(OUT_4_PIN,OUT_4_PORT,PORT_INPUT) 
  
  #define  STRING_5_READ             OUT_5_READ                                 
  #define  STRING_5_INIT             Init_Port(OUT_5_PIN,OUT_5_PORT,PORT_INPUT) 
 
  #define  STRING_6_READ             OUT_6_READ                                 
  #define  STRING_6_INIT             Init_Port(OUT_6_PIN,OUT_6_PORT,PORT_INPUT) 
  
  #define  QTY_STRING              6   

   #define  STRING_1               0
   #define  STRING_2               1
   #define  STRING_3               2
   #define  STRING_4               3
   #define  STRING_5               4
   #define  STRING_6               5

/******************************************************************************/

#define TOTAL_KEYPAD_PORT_INIT       ROW_1_INIT ; ROW_2_INIT ; ROW_3_INIT ;\
                                     ROW_4_INIT ; ROW_5_INIT ;\
                                     STRING_1_INIT ;  STRING_2_INIT;STRING_3_INIT;STRING_4_INIT;\
                                         STRING_5_INIT;STRING_6_INIT;\
                                                                                                               
uint8_t Key_Pad_Keyboard (void) ;

#endif 

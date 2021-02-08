
#include "GPIO_User.h"
#include "GPIO_Public.h"



void Init_Port (uint16_t pin , GPIO_TypeDef * port , uint8_t out_in ) ;



  /****************************************************************************
  * Имя функции   : MX_GPIO_Init()
  * Описание      : инициализация  GPIO 
  * 
  *
  * Параметры     : нет
  * Возврат       : нет
  ****************************************************************************/

 void MX_GPIO_Init(void)
{
   GPIO_InitTypeDef GPIO_InitStruct;
     
  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOI_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOG_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();       
  
  
  GPIO_InitStruct.Mode =   GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull =   GPIO_PULLDOWN;
  GPIO_InitStruct.Pin = GPIO_PIN_3  ;
  GPIO_InitStruct.Speed =  GPIO_SPEED_FREQ_LOW; 
//  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);   

 /****************************************************************************/
  GPIO_InitStruct.Pin = ENABLE_TRANSM_DOWN_PIN ;                                //разрешение приема\передачи  ВНИЗ  TX1
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  
  HAL_GPIO_Init(ENABLE_TRANSM_DOWN_PORT,&GPIO_InitStruct);
  
  GPIO_InitStruct.Pin = ENABLE_TRANSM_UP_PIN ;                                  //разрешение приема\передачи  ВВЕРХ  TX1
  HAL_GPIO_Init(ENABLE_TRANSM_UP_PORT,&GPIO_InitStruct);
  
  /****************************************************************************/

    
  GPIO_InitStruct.Mode =   GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull =   GPIO_PULLDOWN;
  GPIO_InitStruct.Pin = GPIO_PIN_3  ;
  GPIO_InitStruct.Speed =  GPIO_SPEED_FREQ_VERY_HIGH; 
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);     
  
  HAL_GPIO_WritePin ( GPIOB , GPIO_PIN_3 , GPIO_PIN_RESET ) ; //
  

}
/** end **/



  /****************************************************************************
  * Имя функции   : Init_Port()
  * Описание      : меняет режим работы пина  
  * 
  *
  * Параметры     : нет
  * Возврат       : нет
  ****************************************************************************/


void Init_Port (uint16_t pin , GPIO_TypeDef * port , uint8_t out_in )
{
   GPIO_InitTypeDef GPIO_InitStruct; 
   
   GPIO_InitStruct.Pin = pin ;
   if(out_in)
   {
     GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_OD;
   }
   else
   {
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;// GPIO_MODE_INPUT;
   }
   GPIO_InitStruct.Pull =   GPIO_PULLDOWN;
   GPIO_InitStruct.Speed =  GPIO_SPEED_FREQ_LOW; 
   
   HAL_GPIO_Init(port,&GPIO_InitStruct);   
}
/** end **/


  /****************************************************************************
  * Имя функции   : TX_RX_Enable_Down()
  * Описание      : переключает на прием и передачу  
  * 
  *
  * Параметры     : const uint8_t
  * Возврат       : нет
  ****************************************************************************/


 void TX_RX_Enable_Down ( const uint8_t Val  )
{
   if (Val)
   {
     TX_ON_UART_DOWN  ;
   }
   else
   {
     RX_ON_UART_DOWN  ;
   }
}

/** end **/
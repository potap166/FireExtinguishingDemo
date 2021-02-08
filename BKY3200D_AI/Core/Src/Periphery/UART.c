
#include "UART.h"
#include "UART_Public.h"




  
 /****************************************************************************
  * Имя функции   : UARTs_Init()
  * Описание      :   
  * 
  *
  * Параметры     : нет
  * Возврат       : нет
  ****************************************************************************/


 void UARTs_Init(void)                                                       //мастер 
{
  huart1.Instance = USART1;
  huart1.Init.BaudRate = 19200;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_2;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  if ( HAL_UART_Init ( &huart1 ) != HAL_OK )
  {
    Error_Handler ( ) ;
  }   
 /*****************************************************************************/ 
  huart2.Instance = USART2;                                                     //slave
  huart2.Init.BaudRate =19200;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_2;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler ( ) ;
  } 
}
   /** end **/
  
 /****************************************************************************
  * Имя функции   : HAL_UART_MspInit()
  * Описание      :   
  * 
  *
  * Параметры     : UART_HandleTypeDef* 
  * Возврат       : нет
  ****************************************************************************/


void HAL_UART_MspInit(UART_HandleTypeDef* huart)
{
  GPIO_InitTypeDef GPIO_InitStruct;
  
  if ( huart->Instance == USART1 )
  {
  /* USER CODE BEGIN USART1_MspInit 0 */

  /* USER CODE END USART1_MspInit 0 */
    /* Peripheral clock enable */
    __HAL_RCC_USART1_CLK_ENABLE();
  
    /**USART1 GPIO Configuration    
    PA9     -----. USART1_TX
    PA10     -----. USART1_RX 
    */
    GPIO_InitStruct.Pin = GPIO_PIN_9;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_PULLUP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
    GPIO_InitStruct.Alternate = GPIO_AF7_USART1;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
    
    GPIO_InitStruct.Pin = GPIO_PIN_7;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_PULLUP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
    GPIO_InitStruct.Alternate = GPIO_AF7_USART1;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    /* Peripheral interrupt init */
    HAL_NVIC_SetPriority(USART1_IRQn,13, 0);
    HAL_NVIC_EnableIRQ(USART1_IRQn);

  }
 /*****************************************************************************/
 if(huart->Instance==USART2)
  {
  /* USER CODE BEGIN USART2_MspInit 0 */

  /* USER CODE END USART2_MspInit 0 */
    /* Peripheral clock enable */
    __HAL_RCC_USART2_CLK_ENABLE();
  
    /**USART1 GPIO Configuration    
    PA2     -----. USART1_TX
    PA3     -----. USART1_RX 
    */
    GPIO_InitStruct.Pin = GPIO_PIN_2|GPIO_PIN_3;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_PULLUP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
    GPIO_InitStruct.Alternate = GPIO_AF7_USART2;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    /* Peripheral interrupt init */
    HAL_NVIC_SetPriority(USART2_IRQn,13, 0);
    HAL_NVIC_EnableIRQ(USART2_IRQn);

  }
}
   /** end **/ 


 /****************************************************************************
  * Имя функции   : HAL_UART_MspDeInit()
  * Описание      : 
  * 
  *
  * Параметры     : UART_HandleTypeDef* 
  * Возврат       : нет
  ****************************************************************************/


void HAL_UART_MspDeInit(UART_HandleTypeDef* huart)
{
  if(huart->Instance==USART1)
  {
    /* USER CODE BEGIN USART1_MspDeInit 0 */
    /* USER CODE END USART1_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_USART1_CLK_DISABLE();
  
    /**USART1 GPIO Configuration    
    PA9     -----. USART1_TX
    PA10     -----. USART1_RX 
    */
    HAL_GPIO_DeInit(GPIOA, GPIO_PIN_9);
    HAL_GPIO_DeInit(GPIOB, GPIO_PIN_7);
    /* Peripheral interrupt DeInit*/
    HAL_NVIC_DisableIRQ(USART1_IRQn);
/******************************************************************************/
    if(huart->Instance==USART2)
    {
      /* USER CODE BEGIN USART2_MspDeInit 0 */
      /* USER CODE END USART2_MspDeInit 0 */
      /* Peripheral clock disable */
      __HAL_RCC_USART2_CLK_DISABLE();
  
      /**USART1 GPIO Configuration    
      PA2     -----. USART1_TX
      PA3     -----. USART1_RX 
      */
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_2|GPIO_PIN_3);

      /* Peripheral interrupt DeInit*/
      HAL_NVIC_DisableIRQ(USART2_IRQn);
    }
  }
}
   /** end **/
  
 /****************************************************************************
  * Имя функции   : HAL_UART_TxCpltCallback()
  * Описание      : колбэк по окончанию передачи 
  * 
  *
  * Параметры     : UART_HandleTypeDef *
  * Возврат       : нет
  ****************************************************************************/


void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)
 {
   if (huart==&huart1)
   {
     TX_RX_Enable_Down ( RX_ENABLE )   ;
     FirstReciveByteU1 = 0             ;      
     Clear_Buf_Modbus_Polling_Task  () ;       
 
     
     HAL_UART_Receive_IT ( huart , Get_Ptr_Buf_Modbus_Polling_Task () , Get_CurrentQtyByteRecive_Buf_Modbus_Polling_Task ()  ) ;    
   } 
   else
     if (huart==&huart2)
      {
     
   }
 }
   /** end **/
  

 /****************************************************************************
  * Имя функции   : HAL_UART_RxCpltCallback()
  * Описание      : колбэк по окончанию приёма
  * 
  *
  * Параметры     : нет
  * Возврат       : нет
  ****************************************************************************/

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
  if ( huart == &huart1 )
   {
        Release_Semofare_Modbus_Polling_Task_OS () ; 
   }else 
  if ( huart == &huart2 )
   { // если попал сюда  значит пришёл сверху пакет слишком большой длинны  бракую его 
   //   CallBackRXfromMBMaster() ;
   }  
}
   /** end **/
  
 /****************************************************************************
  * Имя функции   : Get_Ptr_UART()
  * Описание      : инициализация портов и прерываний
  * 
  *
  * Параметры     :  const uint8_t
  * Возврат       : UART_HandleTypeDef
  ****************************************************************************/


UART_HandleTypeDef * Get_Ptr_UART ( const uint8_t NumUart )
{
  switch ( NumUart )
  {
    case 1: return (UART_HandleTypeDef *)&huart1 ;  break ;
    case 2: return (UART_HandleTypeDef *)&huart2 ;  break ;
    default :return NULL  ;  break ;
  } 
}
   /** end **/
  


 /****************************************************************************
  * Имя функции   : Get_RxXferCount_UART()
  * Описание      : Вернуть параметр RxXferCount
  * 
  *
  * Параметры     : const uint8_t
  * Возврат       : нет
  ****************************************************************************/


uint16_t  Get_RxXferCount_UART ( const uint8_t NumUart )
{
  switch ( NumUart )
  {
    case 1: return huart1.RxXferCount ;  break ;
    case 2: return huart2.RxXferCount ;  break ;
    default :return NULL  ;  break ;
  } 
}
   /** end **/
  
 /****************************************************************************
  * Имя функции   : UART_Transmit_IT()
  * Описание      : пнастройка для передачи через прерывание 
  * 
  *
  * Параметры     : const uint8_t , uint8_t  ,const uint16_t 
  * Возврат       : нет
  ****************************************************************************/


 void UART_Transmit_IT ( const uint8_t NumUart ,  uint8_t *ptrData ,const uint16_t Size  )
{ 
  switch ( NumUart )
  {
    case 1: 
            TX_RX_Enable_Down ( TX_ENABLE )                   ;
            FirstReciveByteU1 = 0                             ; 
            __HAL_UART_DISABLE_IT (&huart1 , UART_IT_IDLE) ;
            HAL_UART_Transmit_IT ( &huart1 , ptrData , Size ) ;
            break ;
            
    case 2: 
            //eturn (UART_HandleTypeDef *)&huart2 ;  break ;
      
    default :
              break ;
  } 
}
   /** end **/
  


 /****************************************************************************
  * Имя функции   : Give_Idle_Interrupt()
  * Описание      : установить  флаг IDLE
  * 
  *
  * Параметры     : UART_HandleTypeDef *
  * Возврат       : нет
  ****************************************************************************/


void Give_Idle_Interrupt ( UART_HandleTypeDef *huart )
{
    huart->Instance->CR1 |=0x10; 
}
   /** end **/



  
 /****************************************************************************
  * Имя функции   : Set_First_Recive_Byte()
  * Описание      : выдать семафор после приёма первого байта
  * 
  *
  * Параметры     : UART_HandleTypeDef *
  * Возврат       : нет
  ****************************************************************************/



void Set_First_Recive_Byte ( UART_HandleTypeDef *huart )
{
  if ( huart == &huart1 )
  {
    if ( !FirstReciveByteU1 )
    {
       Release_Semofare_Modbus_Polling_Task_OS () ; 
       __HAL_UART_ENABLE_IT (huart , UART_IT_IDLE) ;     
       FirstReciveByteU1     = 1    ;
    }     
  }
  else  if ( huart == &huart2 )
  {
    if ( !FirstReciveByteU2 )
    {
       __HAL_UART_ENABLE_IT (huart , UART_IT_IDLE) ;     
       FirstReciveByteU2     = 1    ;
    }     
  }   
}
   /** end **/

  
 /****************************************************************************
  * Имя функции   : UART_Idle()
  * Описание      : выдать семафор по срабоке IDLE
  * 
  *
  * Параметры     : UART_HandleTypeDef *
  * Возврат       : нет
  ****************************************************************************/


void UART_Idle ( UART_HandleTypeDef *huart )
{ 
   if ( huart == &huart1 )
   {   
     Release_Semofare_Modbus_Polling_Task_OS () ; 
   }
 
   __HAL_UART_CLEAR_IDLEFLAG(huart) ;
}
   /** end **/










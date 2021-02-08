/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : stm32f4xx_hal_msp.c
  * Description        : This file provides code for the MSP Initialization 
  *                      and de-Initialization codes.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN TD */

/* USER CODE END TD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN Define */
 
/* USER CODE END Define */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN Macro */

/* USER CODE END Macro */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* External functions --------------------------------------------------------*/
/* USER CODE BEGIN ExternalFunctions */

/* USER CODE END ExternalFunctions */

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */
/**
  * Initializes the Global MSP.
  */
void HAL_MspInit(void)
{
  /* USER CODE BEGIN MspInit 0 */

  /* USER CODE END MspInit 0 */

  __HAL_RCC_SYSCFG_CLK_ENABLE();
  __HAL_RCC_PWR_CLK_ENABLE();

  /* System interrupt init*/
  /* PendSV_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(PendSV_IRQn, 15, 0);

  /* USER CODE BEGIN MspInit 1 */

  /* USER CODE END MspInit 1 */
}

/**
* @brief CRC MSP Initialization
* This function configures the hardware resources used in this example
* @param hcrc: CRC handle pointer
* @retval None
*/
void HAL_CRC_MspInit(CRC_HandleTypeDef* hcrc)
{
  if(hcrc->Instance==CRC)
  {
  /* USER CODE BEGIN CRC_MspInit 0 */

  /* USER CODE END CRC_MspInit 0 */
    /* Peripheral clock enable */
    __HAL_RCC_CRC_CLK_ENABLE();
  /* USER CODE BEGIN CRC_MspInit 1 */

  /* USER CODE END CRC_MspInit 1 */
  }

}

/**
* @brief CRC MSP De-Initialization
* This function freeze the hardware resources used in this example
* @param hcrc: CRC handle pointer
* @retval None
*/
void HAL_CRC_MspDeInit(CRC_HandleTypeDef* hcrc)
{
  if(hcrc->Instance==CRC)
  {
  /* USER CODE BEGIN CRC_MspDeInit 0 */

  /* USER CODE END CRC_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_CRC_CLK_DISABLE();
  /* USER CODE BEGIN CRC_MspDeInit 1 */

  /* USER CODE END CRC_MspDeInit 1 */
  }

}

/**
* @brief DMA2D MSP Initialization
* This function configures the hardware resources used in this example
* @param hdma2d: DMA2D handle pointer
* @retval None
*/
//void HAL_DMA2D_MspInit(DMA2D_HandleTypeDef* hdma2d)
//{
//  if(hdma2d.Instance==DMA2D)
//  {
//  /* USER CODE BEGIN DMA2D_MspInit 0 */
//
//  /* USER CODE END DMA2D_MspInit 0 */
//    /* Peripheral clock enable */
//    __HAL_RCC_DMA2D_CLK_ENABLE();
//  /* USER CODE BEGIN DMA2D_MspInit 1 */
//
//  /* USER CODE END DMA2D_MspInit 1 */
//  }
//
//}

/**
* @brief DMA2D MSP De-Initialization
* This function freeze the hardware resources used in this example
* @param hdma2d: DMA2D handle pointer
* @retval None
*/
//void HAL_DMA2D_MspDeInit(DMA2D_HandleTypeDef* hdma2d)
//{
//  if(hdma2d.Instance==DMA2D)
//  {
//  /* USER CODE BEGIN DMA2D_MspDeInit 0 */
//
//  /* USER CODE END DMA2D_MspDeInit 0 */
//    /* Peripheral clock disable */
//    __HAL_RCC_DMA2D_CLK_DISABLE();
//  /* USER CODE BEGIN DMA2D_MspDeInit 1 */
//
//  /* USER CODE END DMA2D_MspDeInit 1 */
//  }
//
//}

/**
* @brief LTDC MSP Initialization
* This function configures the hardware resources used in this example
* @param hltdc: LTDC handle pointer
* @retval None
*/
//void HAL_LTDC_MspInit(LTDC_HandleTypeDef* hltdc)
//{
//  GPIO_InitTypeDef GPIO_InitStruct = {0};
//  if(hltdc.Instance==LTDC)
//  {
//  /* USER CODE BEGIN LTDC_MspInit 0 */
//
//  /* USER CODE END LTDC_MspInit 0 */
//    /* Peripheral clock enable */
//    __HAL_RCC_LTDC_CLK_ENABLE();
//  
//    __HAL_RCC_GPIOI_CLK_ENABLE();
//    __HAL_RCC_GPIOF_CLK_ENABLE();
//    __HAL_RCC_GPIOA_CLK_ENABLE();
//    __HAL_RCC_GPIOB_CLK_ENABLE();
//    __HAL_RCC_GPIOE_CLK_ENABLE();
//    __HAL_RCC_GPIOH_CLK_ENABLE();
//    __HAL_RCC_GPIOD_CLK_ENABLE();
//    __HAL_RCC_GPIOC_CLK_ENABLE();
//    /**LTDC GPIO Configuration    
//    PI9     -----. LTDC_VSYNC
//    PI10     -----. LTDC_HSYNC
//    PF10     -----. LTDC_DE
//    PA3     -----. LTDC_B5
//    PA6     -----. LTDC_G2
//    PB0     -----. LTDC_R3
//    PB1     -----. LTDC_R6
//    PE11     -----. LTDC_G3
//    PE12     -----. LTDC_B4
//    PE14     -----. LTDC_CLK
//    PE15     -----. LTDC_R7
//    PB10     -----. LTDC_G4
//    PB11     -----. LTDC_G5
//    PH10     -----. LTDC_R4
//    PH11     -----. LTDC_R5
//    PD10     -----. LTDC_B3
//    PC7     -----. LTDC_G6
//    PI2     -----. LTDC_G7
//    PB8     -----. LTDC_B6
//    PB9     -----. LTDC_B7 
//    */
//    GPIO_InitStruct.Pin = GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_2;
//    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
//    GPIO_InitStruct.Pull = GPIO_NOPULL;
//    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
//    GPIO_InitStruct.Alternate = GPIO_AF14_LTDC;
//    HAL_GPIO_Init(GPIOI, &GPIO_InitStruct);
//
//    GPIO_InitStruct.Pin = GPIO_PIN_10;
//    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
//    GPIO_InitStruct.Pull = GPIO_NOPULL;
//    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
//    GPIO_InitStruct.Alternate = GPIO_AF14_LTDC;
//    HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);
//
//    GPIO_InitStruct.Pin = GPIO_PIN_3|GPIO_PIN_6;
//    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
//    GPIO_InitStruct.Pull = GPIO_NOPULL;
//    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
//    GPIO_InitStruct.Alternate = GPIO_AF14_LTDC;
//    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
//
//    GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1;
//    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
//    GPIO_InitStruct.Pull = GPIO_NOPULL;
//    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
//    GPIO_InitStruct.Alternate = GPIO_AF9_LTDC;
//    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
//
//    GPIO_InitStruct.Pin = GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_14|GPIO_PIN_15;
//    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
//    GPIO_InitStruct.Pull = GPIO_NOPULL;
//    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
//    GPIO_InitStruct.Alternate = GPIO_AF14_LTDC;
//    HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);
//
//    GPIO_InitStruct.Pin = GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_8|GPIO_PIN_9;
//    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
//    GPIO_InitStruct.Pull = GPIO_NOPULL;
//    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
//    GPIO_InitStruct.Alternate = GPIO_AF14_LTDC;
//    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
//
//    GPIO_InitStruct.Pin = GPIO_PIN_10|GPIO_PIN_11;
//    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
//    GPIO_InitStruct.Pull = GPIO_NOPULL;
//    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
//    GPIO_InitStruct.Alternate = GPIO_AF14_LTDC;
//    HAL_GPIO_Init(GPIOH, &GPIO_InitStruct);
//
//    GPIO_InitStruct.Pin = GPIO_PIN_10;
//    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
//    GPIO_InitStruct.Pull = GPIO_NOPULL;
//    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
//    GPIO_InitStruct.Alternate = GPIO_AF14_LTDC;
//    HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);
//
//    GPIO_InitStruct.Pin = GPIO_PIN_7;
//    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
//    GPIO_InitStruct.Pull = GPIO_NOPULL;
//    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
//    GPIO_InitStruct.Alternate = GPIO_AF14_LTDC;
//    HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);
//
//  /* USER CODE BEGIN LTDC_MspInit 1 */
//
//  /* USER CODE END LTDC_MspInit 1 */
//  }
//
//}

/**
* @brief LTDC MSP De-Initialization
* This function freeze the hardware resources used in this example
* @param hltdc: LTDC handle pointer
* @retval None
*/
//void HAL_LTDC_MspDeInit(LTDC_HandleTypeDef* hltdc)
//{
//  if(hltdc.Instance==LTDC)
//  {
//  /* USER CODE BEGIN LTDC_MspDeInit 0 */
//
//  /* USER CODE END LTDC_MspDeInit 0 */
//    /* Peripheral clock disable */
//    __HAL_RCC_LTDC_CLK_DISABLE();
//  
//    /**LTDC GPIO Configuration    
//    PI9     -----. LTDC_VSYNC
//    PI10     -----. LTDC_HSYNC
//    PF10     -----. LTDC_DE
//    PA3     -----. LTDC_B5
//    PA6     -----. LTDC_G2
//    PB0     -----. LTDC_R3
//    PB1     -----. LTDC_R6
//    PE11     -----. LTDC_G3
//    PE12     -----. LTDC_B4
//    PE14     -----. LTDC_CLK
//    PE15     -----. LTDC_R7
//    PB10     -----. LTDC_G4
//    PB11     -----. LTDC_G5
//    PH10     -----. LTDC_R4
//    PH11     -----. LTDC_R5
//    PD10     -----. LTDC_B3
//    PC7     -----. LTDC_G6
//    PI2     -----. LTDC_G7
//    PB8     -----. LTDC_B6
//    PB9     -----. LTDC_B7 
//    */
//    HAL_GPIO_DeInit(GPIOI, GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_2);
//
//    HAL_GPIO_DeInit(GPIOF, GPIO_PIN_10);
//
//    HAL_GPIO_DeInit(GPIOA, GPIO_PIN_3|GPIO_PIN_6);
//
//    HAL_GPIO_DeInit(GPIOB, GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_10|GPIO_PIN_11 
//                          |GPIO_PIN_8|GPIO_PIN_9);
//
//    HAL_GPIO_DeInit(GPIOE, GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_14|GPIO_PIN_15);
//
//    HAL_GPIO_DeInit(GPIOH, GPIO_PIN_10|GPIO_PIN_11);
//
//    HAL_GPIO_DeInit(GPIOD, GPIO_PIN_10);
//
//    HAL_GPIO_DeInit(GPIOC, GPIO_PIN_7);
//
//  /* USER CODE BEGIN LTDC_MspDeInit 1 */
//
//  /* USER CODE END LTDC_MspDeInit 1 */
//  }
//
//}

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

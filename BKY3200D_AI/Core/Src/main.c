/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
#include "cmsis_os2.h"
#include "System_Text.h"
#include "SDRAM_Public.h"
#include "UART_Public.h"
   

extern void GUI_Task_Create(void) ;

CRC_HandleTypeDef hcrc;
IWDG_HandleTypeDef hiwdg;

/* Definitions for defaultTask */
osThreadId_t defaultTaskHandle;
const osThreadAttr_t defaultTask_attributes = {
  .name = "defaultTask",
  .priority = (osPriority_t) osPriorityNormal,
  .stack_size = 128 * 4
};

/* Private function prototypes -----------------------------------------------*/
static void MX_CRC_Init(void);
//static void MX_DMA2D_Init(void);
static void MX_IWDG_Init(void);
//static void MX_LTDC_Init(void);
void StartDefaultTask(void *argument);

/**
  * @brief  The application entry point.
  * @retval int
  */

  /****************************************************************************
  * Имя функции   : main()
  * Описание      : 
  * 
  *
  * Параметры     :  нет
  * Возврат       : нет
  ****************************************************************************/


int main(void)
{
  /* MCU Configuration--------------------------------------------------------*/
  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();
  MX_IWDG_Init();
  HAL_IWDG_Refresh(&hiwdg);    

  /* Configure the system clock */
  SystemClock_Config();
  

  MX_GPIO_Init();
  MX_FMC_SDRAM_Init () ;
  MX_CRC_Init(); 
  MX_IWDG_Init () ; 
  UARTs_Init() ;    
   
  

  
  k_CalendarBkupInit();
  defaultTaskHandle = osThreadNew(StartDefaultTask, NULL, &defaultTask_attributes);
  //uint8_t ghh = 1+ gg + EventLogStr.Service ; 
  
   if(osKernelGetState() == osKernelInactive) {
    osKernelInitialize();
  }
  ; // ... Start Threads
  if (osKernelGetState() == osKernelReady) {        // If kernel is ready to run...
    osKernelStart();                                // ... start thread execution
    }
  

 
  while (1)
  {
  }
}
/**
  * @brief CRC Initialization Function
  * @param None
  * @retval None
  */


  /****************************************************************************
  * Имя функции   : MX_CRC_Init()
  * Описание      : 
  * 
  *
  * Параметры     :  нет
  * Возврат       :  нет
  ****************************************************************************/

static void MX_CRC_Init(void)
{
  hcrc.Instance = CRC;
  if (HAL_CRC_Init(&hcrc) != HAL_OK)
  {
    Error_Handler();
  }
}

  /****************************************************************************
  * Имя функции   : HAL_TIM_PeriodElapsedCallback()
  * Описание      : 
  * 
  *
  * Параметры     :  TIM_HandleTypeDef *
  * Возврат       :  нет
  ****************************************************************************/

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  if (htim->Instance == TIM7) {
    HAL_IncTick();
  }
}

/**
  * @brief DMA2D Initialization Function
  * @param None
  * @retval None
  */

/**
  * @brief IWDG Initialization Function
  * @param None
  * @retval None
  */

  /****************************************************************************
  * Имя функции   : MX_IWDG_Init()
  * Описание      : 
  * 
  *
  * Параметры     :  нет
  * Возврат       :  нет
  ****************************************************************************/

static void MX_IWDG_Init(void)
{
  hiwdg.Instance = IWDG;
  hiwdg.Init.Prescaler = IWDG_PRESCALER_256;
  hiwdg.Init.Reload = 4095;
  if (HAL_IWDG_Init(&hiwdg) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used 
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
 
  /****************************************************************************
  * Имя функции   : StartDefaultTask()
  * Описание      : 
  * 
  *
  * Параметры     :  void *
  * Возврат       :  нет
  ****************************************************************************/

void StartDefaultTask(void *argument)
{
 
  Clear_Struct_Event_Log_Struct () ; 
  
  GUI_Task_Create () ;
  Gui_MB_Task_Create_OS   () ;
  Event_Task_Create_Log_Struct_OS  () ;
  KeyBorad_Task_Create_Keyboard_OS() ;
  Polling_Task_Create_OS          () ;
  Modbus_Polling_Task_Create_OS   () ; 
  
  // ф-ций 
  Init_Port_Ring_Direction () ;

  //osDelay(100);
  
  for(;;)
  {
    HAL_IWDG_Refresh(&hiwdg); 
    osDelay(100);
  }
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

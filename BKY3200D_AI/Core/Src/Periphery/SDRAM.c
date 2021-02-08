

#include "SDRAM.h"
#include "SDRAM_Public.h"


  
 /****************************************************************************
  * Имя функции   : MX_FMC_SDRAM_Init()
  * Описание      : Настройка , инициализация SDRAM 
  * 
  *
  * Параметры     : нет
  * Возврат       : uint8_t
  ****************************************************************************/

 uint8_t MX_FMC_SDRAM_Init(void){
   
  FMC_SDRAM_TimingTypeDef SdramTiming;
 
  /** Perform the SDRAM1 memory initialization sequence*/
  
  hsdram1.Instance = FMC_SDRAM_DEVICE;
  /* hsdram1.Init */
  hsdram1.Init.SDBank =             FMC_SDRAM_BANK2;
  hsdram1.Init.ColumnBitsNumber   = FMC_SDRAM_COLUMN_BITS_NUM_8;
  hsdram1.Init.RowBitsNumber =      FMC_SDRAM_ROW_BITS_NUM_12;
  hsdram1.Init.MemoryDataWidth =    FMC_SDRAM_MEM_BUS_WIDTH_16;
  hsdram1.Init.InternalBankNumber = FMC_SDRAM_INTERN_BANKS_NUM_4;
  hsdram1.Init.CASLatency =         FMC_SDRAM_CAS_LATENCY_3;
  hsdram1.Init.WriteProtection =    FMC_SDRAM_WRITE_PROTECTION_DISABLE;
  hsdram1.Init.SDClockPeriod =      FMC_SDRAM_CLOCK_PERIOD_2;
  hsdram1.Init.ReadBurst =          FMC_SDRAM_RBURST_ENABLE;
  hsdram1.Init.ReadPipeDelay =      FMC_SDRAM_RPIPE_DELAY_1;
  /* SdramTiming */
  SdramTiming.LoadToActiveDelay =    2;
  SdramTiming.ExitSelfRefreshDelay = 7;
  SdramTiming.SelfRefreshTime =      4;
  SdramTiming.RowCycleDelay =        7;
  SdramTiming.WriteRecoveryTime =    2;
  SdramTiming.RPDelay =              2;
  SdramTiming.RCDDelay =             2;
  
  /////////////////////////////////////////
  if (HAL_SDRAM_Init(&hsdram1, &SdramTiming) != HAL_OK)
  {
    return HAL_ERROR   ;
  }
 else
  {
     SDRAM_Initialization_Sequence(&hsdram1, &command); 
     
     /// проверка работоспособности  SDRAM  после иниц.
     *(__IO uint32_t*)0xD0000000=0x123456 ;
     
      if( *(__IO uint32_t*)0xD0000000!=0x123456)       
      {
        return HAL_ERROR ;
      }
  } 
  
    uint8_t *p =(uint8_t *)0xD0000000 ;
   for (uint32_t val=0 ;val<(0x7fffff);val++)
         *p++=0 ; 
  
  
  return HAL_OK ;  
}
   /** end **/


  /****************************************************************************
  * Имя функции   : HAL_FMC_MspInit()
  * Описание      : иниц. портов 
  * 
  *
  * Параметры     : нет
  * Возврат       : нет
  ****************************************************************************/

static void HAL_FMC_MspInit(void){

  static DMA_HandleTypeDef dmaHandle;
  GPIO_InitTypeDef GPIO_InitStruct;
  
  /* Peripheral clock enable */
  __HAL_RCC_FMC_CLK_ENABLE();
  
   __DMAx_CLK_ENABLE();
 
  /** FMC GPIO Configuration  
  PF0   -----. FMC_A0
  PF1   -----. FMC_A1
  PF2   -----. FMC_A2
  PF3   -----. FMC_A3
  PF4   -----. FMC_A4
  PF5   -----. FMC_A5
  PC0   -----. FMC_SDNWE
  PF11   -----. FMC_SDNRAS
  PF12   -----. FMC_A6
  PF13   -----. FMC_A7
  PF14   -----. FMC_A8
  PF15   -----. FMC_A9
  PG0   -----. FMC_A10
  PG1   -----. FMC_A11
  PE7   -----. FMC_D4
  PE8   -----. FMC_D5
  PE9   -----. FMC_D6
  PE10   -----. FMC_D7
  PE11   -----. FMC_D8
  PE12   -----. FMC_D9
  PE13   -----. FMC_D10
  PE14   -----. FMC_D11
  PE15   -----. FMC_D12
  PH6   -----. FMC_SDNE1
  PH7   -----. FMC_SDCKE1
  PD8   -----. FMC_D13
  PD9   -----. FMC_D14
  PD10   -----. FMC_D15
  PD14   -----. FMC_D0
  PD15   -----. FMC_D1
  PG4   -----. FMC_BA0
  PG5   -----. FMC_BA1
  PG8   -----. FMC_SDCLK
  PD0   -----. FMC_D2
  PD1   -----. FMC_D3
  PG15   -----. FMC_SDNCAS
  PE0   -----. FMC_NBL0
  PE1   -----. FMC_NBL1
  */
   GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3 
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_11|GPIO_PIN_12 
                          |GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;
  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;
  HAL_GPIO_Init(GPIOH, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_4|GPIO_PIN_5 
                          |GPIO_PIN_8|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;
  HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_11 |GPIO_PIN_12  
                          |GPIO_PIN_15|GPIO_PIN_0|GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10 ; 
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);
  
  
  GPIO_InitStruct.Pin = GPIO_PIN_13|GPIO_PIN_6 ;
   GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
   GPIO_InitStruct.Pull =   GPIO_NOPULL;
   GPIO_InitStruct.Speed =  GPIO_SPEED_FREQ_VERY_HIGH; 
 //  GPIO_InitStruct.Mode = GPIO_MODE_AF_OD; 
 // GPIO_InitStruct.Alternate = GPIO_AF12_FMC;
   HAL_GPIO_Init(GPIOD, &GPIO_InitStruct); 
   
  // GPIO_InitStruct.Pin = GPIO_PIN_6;
  // GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  // GPIO_InitStruct.Pull =   GPIO_NOPULL;
  // GPIO_InitStruct.Speed =  GPIO_SPEED_FREQ_VERY_HIGH; 
  // GPIO_InitStruct.Alternate = GPIO_AF12_FMC;
  // HAL_GPIO_Init(GPIOD, &GPIO_InitStruct); 
  /////////////////////////////////////////////////////////////////////////////
   // FOR nand 
  GPIO_InitStruct.Pin = GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10     ;                     
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_7|GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_14|GPIO_PIN_15;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  GPIO_InitStruct.Alternate = GPIO_AF12_FMC;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

      
  /* Configure common DMA parameters */
  dmaHandle.Init.Channel             = SDRAM_DMAx_CHANNEL;
  dmaHandle.Init.Direction           = DMA_MEMORY_TO_MEMORY;
  dmaHandle.Init.PeriphInc           = DMA_PINC_ENABLE;
  dmaHandle.Init.MemInc              = DMA_MINC_ENABLE;
  dmaHandle.Init.PeriphDataAlignment = DMA_PDATAALIGN_WORD;
  dmaHandle.Init.MemDataAlignment    = DMA_MDATAALIGN_WORD;
  dmaHandle.Init.Mode                = DMA_NORMAL;
  dmaHandle.Init.Priority            = DMA_PRIORITY_HIGH;
  dmaHandle.Init.FIFOMode            = DMA_FIFOMODE_DISABLE;
  dmaHandle.Init.FIFOThreshold       = DMA_FIFO_THRESHOLD_FULL;
  dmaHandle.Init.MemBurst            = DMA_MBURST_SINGLE;
  dmaHandle.Init.PeriphBurst         = DMA_PBURST_SINGLE; 
  
  
  dmaHandle.Instance = SDRAM_DMAx_STREAM;
  
  /* Associate the DMA handle */
  __HAL_LINKDMA(&hsdram1, hdma, dmaHandle);
  
  /* Deinitialize the stream for new transfer */
  HAL_DMA_DeInit(&dmaHandle);
  
  /* Configure the DMA stream */
   HAL_DMA_Init(&dmaHandle); 
  
  /* NVIC configuration for DMA transfer complete interrupt */
   HAL_NVIC_SetPriority(SDRAM_DMAx_IRQn, 0, 0);
   HAL_NVIC_EnableIRQ(SDRAM_DMAx_IRQn);
   
}
   /** end **/



 /****************************************************************************
  * Имя функции   : HAL_SDRAM_MspInit()
  * Описание      : 
  * 
  *
  * Параметры     : SDRAM_HandleTypeDef *
  * Возврат       : нет
  ****************************************************************************/


void HAL_SDRAM_MspInit(SDRAM_HandleTypeDef* hsdram){
  HAL_FMC_MspInit();
}
  /** end **/



 /****************************************************************************
  * Имя функции   : HAL_FMC_MspDeInit()
  * Описание      : деинициализация портов FMC
  * 
  *
  * Параметры     : нет
  * Возврат       : нет
  ****************************************************************************/


static void HAL_FMC_MspDeInit(void){


  /* Peripheral clock enable */
  __HAL_RCC_FMC_CLK_DISABLE();
  
  /** FMC GPIO Configuration  
  PF0   -----. FMC_A0
  PF1   -----. FMC_A1
  PF2   -----. FMC_A2
  PF3   -----. FMC_A3
  PF4   -----. FMC_A4
  PF5   -----. FMC_A5
  PC0   -----. FMC_SDNWE
  PF11   -----. FMC_SDNRAS
  PF12   -----. FMC_A6
  PF13   -----. FMC_A7
  PF14   -----. FMC_A8
  PF15   -----. FMC_A9
  PG0   -----. FMC_A10
  PG1   -----. FMC_A11
  PE7   -----. FMC_D4
  PE8   -----. FMC_D5
  PE9   -----. FMC_D6
  PE10   -----. FMC_D7
  PE11   -----. FMC_D8
  PE12   -----. FMC_D9
  PE13   -----. FMC_D10
  PE14   -----. FMC_D11
  PE15   -----. FMC_D12
  PH6   -----. FMC_SDNE1
  PH7   -----. FMC_SDCKE1
  PD8   -----. FMC_D13
  PD9   -----. FMC_D14
  PD10   -----. FMC_D15
  PD14   -----. FMC_D0
  PD15   -----. FMC_D1
  PG4   -----. FMC_BA0
  PG5   -----. FMC_BA1
  PG8   -----. FMC_SDCLK
  PD0   -----. FMC_D2
  PD1   -----. FMC_D3
  PG15   -----. FMC_SDNCAS
  PE0   -----. FMC_NBL0
  PE1   -----. FMC_NBL1
  */
  HAL_GPIO_DeInit(GPIOF, GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3 
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_11|GPIO_PIN_12 
                          |GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15);

  HAL_GPIO_DeInit(GPIOG, GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_4|GPIO_PIN_5 
                          |GPIO_PIN_8|GPIO_PIN_15);
  HAL_GPIO_DeInit(GPIOE, GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10 
                          |GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14 
                          |GPIO_PIN_15|GPIO_PIN_0|GPIO_PIN_1);
  HAL_GPIO_DeInit(GPIOH, GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_5);
  HAL_GPIO_DeInit(GPIOD, GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_14|GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_7|GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_6 
                          |GPIO_PIN_15|GPIO_PIN_0|GPIO_PIN_1);
}
   /** end **/


 /****************************************************************************
  * Имя функции   : SDRAM_Initialization_Sequence()
  * Описание      : инициализация fmc 
  * 
  *
  * Параметры     : SDRAM_HandleTypeDef * , FMC_SDRAM_CommandTypeDef *
  * Возврат       : нет
  ****************************************************************************/


static void SDRAM_Initialization_Sequence(SDRAM_HandleTypeDef *hsdram, FMC_SDRAM_CommandTypeDef *Command)
{
  __IO uint32_t tmpmrd =0;
  /* Step 3:  Configure a clock configuration enable command */
  Command->CommandMode 			 = FMC_SDRAM_CMD_CLK_ENABLE;
  Command->CommandTarget 		 = FMC_SDRAM_CMD_TARGET_BANK2;
  Command->AutoRefreshNumber 	 = 1;
  Command->ModeRegisterDefinition = 0;

  /* Send the command */
  HAL_SDRAM_SendCommand(hsdram, Command, 0x1000);

  /* Step 4: Insert 100 ms delay */
 HAL_Delay(100);
    
  /* Step 5: Configure a PALL (precharge all) command */ 
  Command->CommandMode 			 = FMC_SDRAM_CMD_PALL;
  Command->CommandTarget 	     = FMC_SDRAM_CMD_TARGET_BANK2;
  Command->AutoRefreshNumber 	 = 1;
  Command->ModeRegisterDefinition = 0;

  /* Send the command */
  HAL_SDRAM_SendCommand(hsdram, Command, 0x1000);  
  
  /* Step 6 : Configure a Auto-Refresh command */ 
  Command->CommandMode 			 = FMC_SDRAM_CMD_AUTOREFRESH_MODE;
  Command->CommandTarget 		 = FMC_SDRAM_CMD_TARGET_BANK2;
  Command->AutoRefreshNumber 	 = 4;
  Command->ModeRegisterDefinition = 0;

  /* Send the command */
  HAL_SDRAM_SendCommand(hsdram, Command, 0x1000);
  
  /* Step 7: Program the external memory mode register */
  tmpmrd = (uint32_t)SDRAM_MODEREG_BURST_LENGTH_1          |
                     SDRAM_MODEREG_BURST_TYPE_SEQUENTIAL   |
                     SDRAM_MODEREG_CAS_LATENCY_3           |
                     SDRAM_MODEREG_OPERATING_MODE_STANDARD |
                     SDRAM_MODEREG_WRITEBURST_MODE_SINGLE;
  
  Command->CommandMode = FMC_SDRAM_CMD_LOAD_MODE;
  Command->CommandTarget 		 = FMC_SDRAM_CMD_TARGET_BANK2;
  Command->AutoRefreshNumber 	 = 1;
  Command->ModeRegisterDefinition = tmpmrd;

  /* Send the command */
  HAL_SDRAM_SendCommand(hsdram, Command, 0x1000);
  
  /* Step 8: Set the refresh rate counter */
  /* (15.62 us x Freq) - 20 */
  /* Set the device refresh counter */
  HAL_SDRAM_ProgramRefreshRate(hsdram, REFRESH_COUNT); 
}
   /** end **/


 /****************************************************************************
  * Имя функции   : HAL_SDRAM_MspDeInit()
  * Описание      : деинициализация   fmc
  * 
  *
  * Параметры     : SDRAM_HandleTypeDef *
  * Возврат       : нет
  ****************************************************************************/


void HAL_SDRAM_MspDeInit(SDRAM_HandleTypeDef* hsdram)
{
  HAL_FMC_MspDeInit();
}
   /** end **/

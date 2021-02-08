/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __TABLECONST_H
#define __TABLECONST_H

#ifdef __cplusplus
extern "C" {
#endif


  
#define QTY_EVETS_IN_LOG                                        (uint16_t)7000U 
#define START_YEAR_2020                                         (uint16_t)2020U 
  
#define MAX_QTY_POLLING_ADR_RS485                               (uint8_t)20U  
 
#define MAX_QTY_ADR_IO                                          (uint8_t)250U  
#define MAX_QTY_BKY                                             (uint8_t)20U  
  
#define MAX_QTY_KL                                              (uint8_t)6U  


  
typedef enum 
{  
   Slave          = 1U,
   Master         = 2U,
   OneInSystem    = 3U,
    
} BKYWorkMode ;   
  
typedef enum 
{  
   False         = 0U,
   True          = 1U,  
   
} FireBooL_t ;   

typedef enum 
{  
   FireAnswer_OK          = 0U,
   FireAnswer_Error       = 1U,  
   
} FireAnswer_t ;  

typedef enum 
{  
   LeftRingDir         = 0U,
   RightRingDir        = 1U,  
   
} RingDir_t ;   
  
  
  
  
  /*

#define QTY_STRINGS_BUF_ALARMS_WORK_BUF                (uint16_t)10000U
#define TOTAL_QTY_ADR_IO                               (uint8_t)241U
#define TOTAL_QTY_ADR_KL_BKY                           (uint8_t)21U
#define QTY_TIED_ADR                                   (uint8_t)15U
#define QTY_STRINGS_DIF_VAL                            (uint16_t)500U
#define QTY_STRINGS_RUN_TABLE                          (uint16_t)4800U
#define QTY_DRENCHERS                                  (uint8_t)100U
#define GUI_ADR_FINISH                                 (uint32_t)0xD0000000+(1024U*1024U)
#define START_ADRES_FOR_GENERAL_VAL                    GUI_ADR_FINISH+(480U*800U*2U)*3
#define QTY_ZONE                                       (uint16_t)4000U
#define QTY_AREA                                       (uint8_t)33U 
#define QTY_OUTSIDE_ADRESS                             (uint8_t)100U 
#define QTY_STR_EXTERNAL_OUTPUTS                       (uint8_t)50U
#define QTY_ZONE_OUTSIDE_ADRESS                        (uint8_t)15U
#define TYPE_MB_ADR_WRITE_READ                         (uint8_t)1U 
#define TYPE_MB_ADR_READ                               (uint8_t)2U 
#define TYPE_MB_ADR_WRITE                              (uint8_t)3U 
#define CHAR_QTY_STRING                                (uint8_t)12U
#define CHAR_MAS_SIZE                                  (uint8_t)100U
#define SIZE_BUFER_INFO                                (uint32_t)(500U*1024U) 
#define QTY_EVETS                                      (uint16_t)13500U
#define SIZE_OF_MB_PACKET_TypeSrtingEventLog           (uint8_t)32U  // (uint8_t)24U 
#define QTY_REG_FOR_ONE_EVENT_BKU                      (uint8_t)16U // (uint8_t)12U   // SIZE_OF_MB_PACKET_TypeSrtingEventLog/2   
#define MAX_QTY_EVENT_FOR_ONE_READ                     (uint8_t)7U  // (uint8_t)10       //126  /QTY_REG_FOR_ONE_EVENT_BKU 
#define QTY_REG_FOR_ONE_EVENT_KL                       (uint8_t)2U   

#define SIZE_OF_MB_PACKET_Master                       (uint8_t)26U 
#define QTY_REG_FOR_ONE_EVENT_BKU_Master               (uint8_t)13U  
#define MAX_QTY_EVENT_FOR_ONE_READ_READ_Masrer         (uint8_t)9U 

#define MAX_QTY_FIRE                                   (uint8_t)50U         
#define MAX_QTY_TRIGGERED_ADRESSES                     (uint8_t)100U                 
#define VAL_PRESENSE_OF_FIRE                           (uint16_t)0xAAU      

#define SIZE_RX_TX_BUF2                                (uint8_t)254U   
#define SIZE_INPUT_INFO_OF_ZONE                        (uint16_t)256U   

#define QTY_STRING_LUNCH_ADR_FROM_MASTER               (uint8_t)40U   
#define QTY_STRING_RF_CARD                             (uint8_t)10U   

#define LENGH_COMMET                                   (uint8_t)40U 

#define LENGH_CONF_NAME                                (uint8_t)40U 
#define LENGH_CONF_DATE_TIME                           (uint8_t)20U 

#define MAX_SIZE_OF_PROG                               (uint32_t)(896U*1024U)
#define ACUM_COMAND                                    (uint8_t)5U     
#define QTYPROGBLOCK                                   (uint16_t)383U  
#define SIZE_EventinTransfDown                         (uint16_t)4100U  
#define QTY_STR                                        (uint8_t)10U  

#define SIZE_PAGE_IN_BYTES                             (uint32_t)2048U  
#define QTY_PAGE_IN_BLOCK                              (uint8_t)64U 

#define SIZE_BLOCK_IN_BYTES                            (uint32_t)(SIZE_PAGE_IN_BYTES*QTY_PAGE_IN_BLOCK)

#define True                                           (uint8_t)1U
#define False                                          (uint8_t)0U


#define ERROR_INDEX                                    (uint8_t)0xfeU

#define BKY_SLAVE                                      (uint8_t)0U
#define BKY_MASTER                                     (uint8_t)1U
#define BKY_SLAVE_ONE_IN_SYSTEM                        (uint8_t)2U

#define QTY_STRINGS_FOR_CONFIRM_SCREEN                 (uint8_t)20U

#define FOR_START_ADR_FILL_LUNCH                       (uint8_t)50U

#define START_DATA                                     (uint16_t)2016U
*/

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

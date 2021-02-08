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

#ifndef __MODBUS_INFO_H
#define __MODBUS_INFO_H


/*******************************************************************************
 тип данных функций модбас используемые  в системе 
*******************************************************************************/  
typedef enum 
{  
   CodOfFuncModbusRead            = (uint8_t)0x03U ,
   CodOfFuncModbusSingleWrite     = (uint8_t)0x06U,
   CodOfFuncModbusBurstWrite      = (uint8_t)0x10U,
    
} CodOfFuncModbus_t ;  
/*******************************************************************************
  статус ответа 
*******************************************************************************/  
typedef enum 
{  
   StatusAnswModbusError        = (uint8_t)0x00U ,
   StatusAnswModbusOk           = (uint8_t)0x01U,
   StatusAnswModbusOKSmtWrong   = (uint8_t)0x02U,
    
} StatusAnswModbus_t ;  
/*******************************************************************************
  тип ошибки  
*******************************************************************************/  
typedef enum 
{  
   StatusAnswTypeErrorModbusCRC          = (uint8_t)0x00U ,
   StatusAnswTypeErrorModbusNOReply      = (uint8_t)0x01U,
   StatusAnswTypeErrorModbusRegError     = (uint8_t)0x02U,
   
   // StatusAnswTypeErrorModbus   = (uint8_t)0x02U,
   // #define MB_TASK_CRC_ERROR                            (uint8_t)0x02U //тип ошибки 
   //#define MB_TASK_NO_REPLAY                            (uint8_t)0x03U //тип ошибки
   //#define MB__NOT_CORRECT_COD_OF_FUNC                  (uint8_t)0x04U //тип ошибки
   //#define MB__NOT_AVAILABLE_ADR_FOR_WRITE              (uint8_t)0x05U //тип ошибки
   //#define MB__LIMIT_ADR_AREA                           (uint8_t)0x06U //тип ошибки 
} StatusAnswTypeErrorModbus_t ; 


/******************************************************************************/
/*******************************************************************************
 тип данных регистр модбас
*******************************************************************************/
typedef uint16_t RegistrsModbus_t;
/*******************************************************************************
 тип данных  адрес модбас
*******************************************************************************/
typedef uint8_t AdresModbus_t;
/*******************************************************************************
 тип данных  колличество регистров за одно чтение\запись
*******************************************************************************/
typedef uint8_t QtyRegOneActModbus_t;

#endif 

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

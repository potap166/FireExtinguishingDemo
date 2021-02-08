
#ifndef  __FUNC_FOR_INFO_KL_AI_H
#define  __FUNC_FOR_INFO_KL_AI_H

#include "stdint.h"
#include "stddef.h"
#include "Simple_Data_Types.h"

typedef struct   
{                    
 // KLAIStrEvent_t        KLAIStrEvent [TOTAL_QTY_ADR_IO]  ;
  uint8_t               ThresholdTemp [250]              ; //темпиратурные пороги
  CondKLAIMbAdr03D3_t   CondKL                           ; //состояние КЛ адр 03D3
  CondKLAIMbAdr03D4_t   CondKLAIMbAdr03D4                ;
  uint16_t              CntErrorParity03D5               ; //счётчик ошибок чётности при приёме данных от МА
  uint16_t              CntErrorNoise03D6                ; //счётчик ошибок помех при приёме данных от МА
  uint16_t              CntErrorDataBit03D7              ; //счётчик  неверных длительностей бит данных при приёме данных от МА 
  uint16_t              CntErrorSBD03D8                  ; //счётчик  неверных длительностей стартовых бит при приёме данных от МА 
  uint16_t              CntErrorTimeOut03D9              ; //счётчик  ошибок , когда за данный интервал времени бит не пришёл
  uint16_t              CntErrorOvFlBuf03DA              ; //счётчик  ошибок , произошло переполнение  приёмного буфера при приёме данных по ЛС от МА
  uint16_t              CntErrorCurrentHigh03DB          ; //счётчик  ошибок , когда ток в ЛС выше допустимого
  uint16_t              CntErrorCurrentBel03DC           ; //счётчик  ошибок , когда ток в ЛС ниже допустимого 
  uint16_t              CntErrorCRCFromMaster03DD        ; //счётчик ошибок CRC (CRC) при приёме данных от сервера
  uint16_t              CntErrorFEFromMaster03DE         ; //счётчик ошибок фрейам (FE) при приёме данных от сервера 
  uint16_t              CntErrorNEFromMaster03DF         ; //счётчик ошибок помех (NE) при приёме данных от сервера  
  uint16_t              CntErrorOREFromMaster03E0        ; //счётчик ошибок переполнения буфера UART (ORE) при приёме данных от сервера
  uint16_t              CntErrorLogicFromMaster03E1      ; //счётчик логических ошибок ModBus(ModBus) при приёме данных от сервера

  uint16_t              VolCurInLine24                   ; //1 регистр младший байт – напряжение ЛС при U=24 В 1 регистр старший байт – ток в ЛС при U=24 В
  uint16_t              VolCurInLine13                   ; //1 регистр младший байт – напряжение ЛС при U=13 В 1 регистр старший байт – ток в ЛС при U=13 В
  uint16_t              QtyRequestLineMA                 ; //Количество запросов по ЛС
  uint16_t              QtyRequestLineModbus             ; //Количество запросов по ModBus
  
  uint8_t               Ver                              ; //версия   
  uint8_t               Cursor                           ;  
  uint8_t               Request                          ; //необходимо ли вести опрос по состоянию кл с дополнительных регистров  
}
InfoStructKLAI_t ; ;

typedef struct   
{                    
  InfoStructKLAI_t   InfoStructKLAI [ MAX_QTY_KL ] ;
}
TotalInfoStructKLAI_t ;

static TotalInfoStructKLAI_t TotalInfoStructKLAI @"SDRAM_STATIC_VAR" ;


#endif
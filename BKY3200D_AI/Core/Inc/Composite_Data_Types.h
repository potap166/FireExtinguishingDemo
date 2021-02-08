
#ifndef  __COMPOSITE_DATA_TYPES_H
#define  __COMPOSITE_DATA_TYPES_H


#include "Simple_Data_Types.h"
#include "Modbus_Info.h" 



/*******************************************************************************
// элемент очереди для задачи модас опрос ведомых    
*******************************************************************************/
typedef struct 
{
   uint8_t              *Buf                   ;
   AdresModbus_t        Adres                  ;
   CodOfFuncModbus_t    CodOfFunc              ;
   RegistrsModbus_t     StartMBadr             ;
   QtyRegOneActModbus_t QtyMBReg               ; 
   RingDir_t            RingDirection          ;    
}
TaskRequestModbusPolingMsq_t;
/*******************************************************************************
  содержимое 1 события 
*******************************************************************************/
typedef  struct   
{                    
  TimeDate_t            TimeDateThenEventCame           ;//Время прихода сообщения
  TimeDate_t            TimeDate                        ;
  AdrDevice_t           Adres                           ;
  IndentificationCode_t IndentificationCode             ;//индетефикационный код 
  uint32_t              Service                         ;// разное
  Zone_t                Zone                            ;
  IDEvent_t             IDEvent                         ;//IDсобытия
  UserId_t              UserId                          ;//Карта
  uint8_t               Cond1Event                      ;
  uint8_t               Cond2Event                      ;
}
EventLogStr_t ;
/*******************************************************************************

*******************************************************************************/
typedef struct   
{     
   EventLogStr_t Events [QTY_EVETS_IN_LOG]        ;
   CurrentStrLogStruct_t CurrentStrLogStruct      ;  
}
EventLog_t ;
/*******************************************************************************
cтруктура  в которой хранится сисок опрашиваемых нижестоящих устройств 
485
так же хранятся некоторые временные состояния и вспомогательная информация 
*******************************************************************************/
typedef struct   
{    
   uint32_t condDev [ 250 ] ; 
}
IOTempCond_t ;


typedef struct   
{    
  uint8_t           AdrPollingDev   ;
  DeviceTypes_t     TypeDev         ;
  CondPollingDev_t  CondPollingDev  ;
  IOTempCond_t    * IOTempCond      ;
}
PollingDevString_t ;

typedef struct   
{    
   PollingDevString_t   PollingDevString [ MAX_QTY_POLLING_ADR_RS485 ]  ;
   uint8_t              QtyAdr                                          ;  
}
PollingDevStruct_t ;


typedef struct 
{
  AdrDevice_t  AdrDevice    ;
  Zone_t       Zona         ;
  EventType_t  EventType_t  ; 
} 
AddedEventStruct_t  ; 



#endif
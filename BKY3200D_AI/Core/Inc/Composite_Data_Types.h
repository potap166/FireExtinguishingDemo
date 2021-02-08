
#ifndef  __COMPOSITE_DATA_TYPES_H
#define  __COMPOSITE_DATA_TYPES_H


#include "Simple_Data_Types.h"
#include "Modbus_Info.h" 



/*******************************************************************************
// ������� ������� ��� ������ ����� ����� �������    
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
  ���������� 1 ������� 
*******************************************************************************/
typedef  struct   
{                    
  TimeDate_t            TimeDateThenEventCame           ;//����� ������� ���������
  TimeDate_t            TimeDate                        ;
  AdrDevice_t           Adres                           ;
  IndentificationCode_t IndentificationCode             ;//����������������� ��� 
  uint32_t              Service                         ;// ������
  Zone_t                Zone                            ;
  IDEvent_t             IDEvent                         ;//ID�������
  UserId_t              UserId                          ;//�����
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
c��������  � ������� �������� ����� ������������ ����������� ��������� 
485
��� �� �������� ��������� ��������� ��������� � ��������������� ���������� 
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
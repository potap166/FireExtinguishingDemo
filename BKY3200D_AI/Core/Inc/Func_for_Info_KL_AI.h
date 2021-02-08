
#ifndef  __FUNC_FOR_INFO_KL_AI_H
#define  __FUNC_FOR_INFO_KL_AI_H

#include "stdint.h"
#include "stddef.h"
#include "Simple_Data_Types.h"

typedef struct   
{                    
 // KLAIStrEvent_t        KLAIStrEvent [TOTAL_QTY_ADR_IO]  ;
  uint8_t               ThresholdTemp [250]              ; //������������� ������
  CondKLAIMbAdr03D3_t   CondKL                           ; //��������� �� ��� 03D3
  CondKLAIMbAdr03D4_t   CondKLAIMbAdr03D4                ;
  uint16_t              CntErrorParity03D5               ; //������� ������ �������� ��� ����� ������ �� ��
  uint16_t              CntErrorNoise03D6                ; //������� ������ ����� ��� ����� ������ �� ��
  uint16_t              CntErrorDataBit03D7              ; //�������  �������� ������������� ��� ������ ��� ����� ������ �� �� 
  uint16_t              CntErrorSBD03D8                  ; //�������  �������� ������������� ��������� ��� ��� ����� ������ �� �� 
  uint16_t              CntErrorTimeOut03D9              ; //�������  ������ , ����� �� ������ �������� ������� ��� �� ������
  uint16_t              CntErrorOvFlBuf03DA              ; //�������  ������ , ��������� ������������  �������� ������ ��� ����� ������ �� �� �� ��
  uint16_t              CntErrorCurrentHigh03DB          ; //�������  ������ , ����� ��� � �� ���� �����������
  uint16_t              CntErrorCurrentBel03DC           ; //�������  ������ , ����� ��� � �� ���� ����������� 
  uint16_t              CntErrorCRCFromMaster03DD        ; //������� ������ CRC (CRC) ��� ����� ������ �� �������
  uint16_t              CntErrorFEFromMaster03DE         ; //������� ������ ������ (FE) ��� ����� ������ �� ������� 
  uint16_t              CntErrorNEFromMaster03DF         ; //������� ������ ����� (NE) ��� ����� ������ �� �������  
  uint16_t              CntErrorOREFromMaster03E0        ; //������� ������ ������������ ������ UART (ORE) ��� ����� ������ �� �������
  uint16_t              CntErrorLogicFromMaster03E1      ; //������� ���������� ������ ModBus(ModBus) ��� ����� ������ �� �������

  uint16_t              VolCurInLine24                   ; //1 ������� ������� ���� � ���������� �� ��� U=24 � 1 ������� ������� ���� � ��� � �� ��� U=24 �
  uint16_t              VolCurInLine13                   ; //1 ������� ������� ���� � ���������� �� ��� U=13 � 1 ������� ������� ���� � ��� � �� ��� U=13 �
  uint16_t              QtyRequestLineMA                 ; //���������� �������� �� ��
  uint16_t              QtyRequestLineModbus             ; //���������� �������� �� ModBus
  
  uint8_t               Ver                              ; //������   
  uint8_t               Cursor                           ;  
  uint8_t               Request                          ; //���������� �� ����� ����� �� ��������� �� � �������������� ���������  
}
InfoStructKLAI_t ; ;

typedef struct   
{                    
  InfoStructKLAI_t   InfoStructKLAI [ MAX_QTY_KL ] ;
}
TotalInfoStructKLAI_t ;

static TotalInfoStructKLAI_t TotalInfoStructKLAI @"SDRAM_STATIC_VAR" ;


#endif


#ifndef  __FUNC_FOR_INFO_KL_AI_ADR_H
#define  __FUNC_FOR_INFO_KL_AI_ADR_H

#include "stdint.h"
#include "Simple_Data_Types.h"


typedef struct   //��������� ��� �������� � �����������  ���������� 1 ������ ��
{       
  AdrDevice_t            AdrDevice                    ;            
  uint8_t                Type                         ; //��� ��
  uint8_t                Ver                          ; //������ ��������
  uint8_t                AnalogVal                    ; //���������� ��������  �����������  �������������
  uint8_t                FireLabel                    ; //��������� �� ����� � ������
  uint8_t                OpenLabel                    ; //��������� �� ����� �� �������� ���������
  uint8_t                CondOuts                     ; //��������� ������ �� 0 ��� ����� 1 ��� ������  
  uint8_t                CurrentTableFirstBit         ; //������� ����� ������� ���������� ����  
  uint8_t                CurrentMediumAnswer          ; //������� ������� ����� ������  
}
InfoStructKLAIAdr_t ;


static InfoStructKLAIAdr_t InfoStructKLAIAdr @"SDRAM_STATIC_VAR" ;

#endif
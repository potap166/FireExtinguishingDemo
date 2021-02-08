
#ifndef  __GUITYPEDATA_H
#define  __GUITYPEDATA_H

#include "GUI.h"
#include "DIALOG.h"

typedef struct  
{
  WM_HWIN          htem        ; //���� ����������
  uint8_t        * Ptr         ; //���� ���������� ��� ������ ������
  uint8_t          Size        ; //������� ���������� ��� ������ � ������ 
  uint16_t         AdresMB     ; //����� �������
  
  uint8_t          Adres       ; //����� ����������
  uint8_t          CodofFunc   ; //��� ������� 
  uint8_t          Result      ; //0 - ������ �� ��� ��������� 1 - ���  
  uint8_t          Error       ; //  �� 0 ���� ������ 
}
GuiForMB_t;

void Put_in_Que_GUI_MB (GuiForMB_t  * GuiForMBIn) ;

#endif
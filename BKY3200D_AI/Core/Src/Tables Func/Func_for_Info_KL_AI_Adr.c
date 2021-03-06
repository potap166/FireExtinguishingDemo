
#include "Func_for_Info_KL_AI_Adr.h"
#include "Func_for_Info_KL_AI_Adr_Public.h"

        



/*****************************************************************************/
//������� ������� ����� ������ 
/*****************************************************************************/
uint8_t Get_CurrentMediumAnswer_Info_Adr_KLAI ( void )
{    
  return  InfoStructKLAIAdr.CurrentMediumAnswer;
}
/** end **/
/*****************************************************************************/
//���������� ������� ����� ������ 
/*****************************************************************************/
void Set_CurrentMediumAnswer_Info_Adr_KLAI ( const uint8_t CurrentMediumAnswer )
{    
  InfoStructKLAIAdr.CurrentMediumAnswer = CurrentMediumAnswer;
}
/** end **/
/*****************************************************************************/
//�������  ���� ������� ���������� ���� 
/*****************************************************************************/
uint8_t Get_CurrentTableFirstBit_Info_Adr_KLAI ( void )
{    
  return  InfoStructKLAIAdr.CurrentTableFirstBit;
}
/** end **/
/*****************************************************************************/
//���������� ���� ������� ���������� ���� 
/*****************************************************************************/
void Set_CurrentTableFirstBit_Info_Adr_KLAI ( const uint8_t CurrentTableFirstBit )
{    
  InfoStructKLAIAdr.CurrentTableFirstBit = CurrentTableFirstBit;
}
/** end **/
/*****************************************************************************/
//������� ��������� ������
/*****************************************************************************/
uint8_t Get_CondOuts_Info_Adr_KLAI ( void )
{    
  return  InfoStructKLAIAdr.CondOuts;
}
/** end **/
/*****************************************************************************/
//���������� ��������� ������
/*****************************************************************************/
void Set_CondOuts_Info_Adr_KLAI ( const uint8_t CondOuts )
{    
  InfoStructKLAIAdr.CondOuts = CondOuts;
}
/** end **/
/*****************************************************************************/
//������� ������ �� �����
/*****************************************************************************/
uint8_t Get_OpenLabel_Info_Adr_KLAI ( void )
{    
  return  InfoStructKLAIAdr.OpenLabel;
}
/** end **/
/*****************************************************************************/
//���������� ������ �� �����
/*****************************************************************************/
void Set_OpenLabel_Info_Adr_KLAI ( const uint8_t OpenLabel )
{    
  InfoStructKLAIAdr.OpenLabel = OpenLabel;
}
/** end **/
/*****************************************************************************/
//������� � ������ �� �����
/*****************************************************************************/
uint8_t Get_FireLabel_Info_Adr_KLAI ( void )
{    
  return  InfoStructKLAIAdr.FireLabel;
}
/** end **/
/*****************************************************************************/
//���������� � ������ �� �����
/*****************************************************************************/
void Set_FireLabel_Info_Adr_KLAI ( const uint8_t FireLabel )
{    
  InfoStructKLAIAdr.FireLabel = FireLabel;
}
/** end **/
/*****************************************************************************/
//�������  ������ ��
/*****************************************************************************/
uint8_t Get_AnalogVal_Info_Adr_KLAI ( void )
{    
  return  InfoStructKLAIAdr.AnalogVal ;
}
/** end **/
/*****************************************************************************/
//���������� ������ ��
/*****************************************************************************/
void Set_AnalogVal_Info_Adr_KLAI ( const uint8_t AnalogVal )
{    
  InfoStructKLAIAdr.AnalogVal = AnalogVal;
}
/** end **/ 
/*****************************************************************************/
//�������  ������ ��
/*****************************************************************************/
uint8_t Get_Ver_Info_Adr_KLAI ( void )
{    
  return  InfoStructKLAIAdr.Ver ;
}
/** end **/
/*****************************************************************************/
//���������� ������ ��
/*****************************************************************************/
void Set_Ver_Info_Adr_KLAI ( const uint8_t Ver )
{    
  InfoStructKLAIAdr.Ver = Ver;
}
/** end **/  
/*****************************************************************************/
//������� ��� ��
/*****************************************************************************/
uint8_t Get_Type_Info_Adr_KLAI ( void )
{    
  return  InfoStructKLAIAdr.Type ;
}
/** end **/
/*****************************************************************************/
//���������� ��� ��
/*****************************************************************************/
void Set_Type_Info_Adr_KLAI ( const uint8_t Type )
{    
  InfoStructKLAIAdr.Type = Type;
}
/** end **/  
/*****************************************************************************/
//������� ������ ����� ����������
/*****************************************************************************/
AdrDevice_t Get_FullAdressDev_Info_Adr_KLAI ( void )
{    
  return  InfoStructKLAIAdr.AdrDevice ;
}
/** end **/
/*****************************************************************************/
//���������� ������ ����� ����������
/*****************************************************************************/
void Set_FullAdressDev_Info_Adr_KLAI ( AdrDevice_t AdrDevice )
{    
  InfoStructKLAIAdr.AdrDevice = AdrDevice;
}
/** end **/  



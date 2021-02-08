
#include "Func_for_Info_KL_AI.h"
#include "Func_for_Info_KL_AI_Public.h"



             
            
/*****************************************************************************/
//��������  ����� ��  ��� ������� �� ��
/*****************************************************************************/
uint16_t Get_Adr_MB_for_Adr_KLAI ( const uint16_t StartMBAdr, const uint8_t Adr )
{    
   if ( !( Adr % 2 ) )
   {// ������
     return ( StartMBAdr + ( ( Adr/2)-1 ) ) ;
   }
   else
   {// ��������
     return ( StartMBAdr + (Adr/2 ) )  ;
   }
}
/** end **//*****************************************************************************/
//������� ������
/*****************************************************************************/
uint16_t  Get_Size_ThresholdTemp_KLAI ( const uint8_t NumKL )
{    
  return   ( sizeof ( TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].ThresholdTemp ) );
}
/** end **/
/*****************************************************************************/
//������� ���������
/*****************************************************************************/
uint8_t * Get_Ptr_ThresholdTemp_KLAI ( const uint8_t NumKL )
{    
  return  (uint8_t*)TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].ThresholdTemp ;
}
/** end **/
/*****************************************************************************/
//������� ��������� �� ���������� �����
/*****************************************************************************/
uint8_t * Get_Ptr_Adr_ThresholdTemp_KLAI ( const uint8_t NumKL ,  uint8_t NumAI  )
{  
  if ( !( NumAI % 2 ) )
  {// ������
    NumAI -- ;
  }
  else
  {// ��������
    
  }
  return  (uint8_t*)TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].ThresholdTemp [ NumAI ] ;
}
/** end **/
/*****************************************************************************/
//������� ������������� �����
/*****************************************************************************/
uint8_t Get_ThresholdTemp_KLAI ( const uint8_t NumKL , const uint8_t NumAI  )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].ThresholdTemp [ NumAI ];
}
/** end **/
/*****************************************************************************/
//���������� ������������� ��� ����
/*****************************************************************************/
void Set_ThresholdTemp_For_All_KLAI ( const uint8_t NumKL , const uint8_t Val )
{    
  for ( uint8_t i=0; i< MAX_QTY_ADR_IO ; ++ i )
  {
    TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].ThresholdTemp [i] = Val  ;
  }
}
/** end **/  
/*****************************************************************************/
//���������� ������������� 
/*****************************************************************************/
void Set_ThresholdTemp_KLAI ( const uint8_t NumKL , const uint8_t NumAI , const uint8_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].ThresholdTemp [NumAI] = Val  ;
}
/** end **/ 
/*****************************************************************************/
//������� ���������� �������� �� ModBus
/*****************************************************************************/
uint16_t Get_QtyRequestLineModbus_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].QtyRequestLineModbus ;
}
/** end **/
/*****************************************************************************/
//���������� ���������� �������� �� ModBus
/*****************************************************************************/
void Set_QtyRequestLineModbus_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].QtyRequestLineModbus = Val  ;
}
/** end **/                            
/*****************************************************************************/
//������� ���������� �������� �� ��
/*****************************************************************************/
uint16_t Get_QtyRequestLineMA_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].QtyRequestLineMA ;
}
/** end **/
/*****************************************************************************/
//���������� ���������� �������� �� ��
/*****************************************************************************/
void Set_QtyRequestLineMA_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].QtyRequestLineMA = Val  ;
}
/** end **/   
             
/*****************************************************************************/
//������� 1 ������� ������� ���� � ���������� �� ��� U=13 � 1 ������� ������� ���� � ��� � �� ��� U=13 �
/*****************************************************************************/
uint16_t Get_VolCurInLine13_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].VolCurInLine13 ;
}
/** end **/
/*****************************************************************************/
//���������� 1 ������� ������� ���� � ���������� �� ��� U=13 � 1 ������� ������� ���� � ��� � �� ��� U=13 �
/*****************************************************************************/
void Set_VolCurInLine13_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].VolCurInLine13 = Val  ;
}
/** end **/              

/*****************************************************************************/
//������� 1 ������� ������� ���� � ���������� �� ��� U=24 � 1 ������� ������� ���� � ��� � �� ��� U=24 �
/*****************************************************************************/
uint16_t Get_VolCurInLine24_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].VolCurInLine24 ;
}
/** end **/
/*****************************************************************************/
//���������� �1 ������� ������� ���� � ���������� �� ��� U=24 � 1 ������� ������� ���� � ��� � �� ��� U=24 �
/*****************************************************************************/
void Set_VolCurInLine24_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].VolCurInLine24 = Val  ;
}
/** end **/ 
            
/*****************************************************************************/
//������� ������� ���������� ������ ModBus(ModBus) ��� ����� ������ �� ������� 
/*****************************************************************************/
uint16_t Get_CntErrorLogicFromMaster03E1_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorLogicFromMaster03E1 ;
}
/** end **/
/*****************************************************************************/
//���������� ������� ���������� ������ ModBus(ModBus) ��� ����� ������ �� �������
/*****************************************************************************/
void Set_CntErrorLogicFromMaster03E1_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorLogicFromMaster03E1 = Val  ;
}
/** end **/    
/*****************************************************************************/
//������� ������� ������ ������������ ������ UART (ORE) ��� ����� ������ �� ������� 
/*****************************************************************************/
uint16_t Get_CntErrorOREFromMaster03E0_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorOREFromMaster03E0 ;
}
/** end **/
/*****************************************************************************/
//���������� ������� ������ ������������ ������ UART (ORE) ��� ����� ������ �� �������
/*****************************************************************************/
void Set_CntErrorOREFromMaster03E0_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorOREFromMaster03E0 = Val  ;
}
/** end **/     
     
/*****************************************************************************/
//������� ������� ������ ����� (NE) ��� ����� ������ �� �������  
/*****************************************************************************/
uint16_t Get_CntErrorNEFromMaster03DF_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorNEFromMaster03DF ;
}
/** end **/
/*****************************************************************************/
//���������� ������� ������ ����� (NE) ��� ����� ������ �� �������
/*****************************************************************************/
void Set_CntErrorNEFromMaster03DF_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorNEFromMaster03DF = Val  ;
}
/** end **/        
     
/*****************************************************************************/
//������� ������� ������ ������ (FE) ��� ����� ������ �� �������  
/*****************************************************************************/
uint16_t Get_CntErrorFEFromMaster03DE_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorFEFromMaster03DE ;
}
/** end **/
/*****************************************************************************/
//���������� ������� ������ ������ (FE) ��� ����� ������ �� �������
/*****************************************************************************/
void Set_CntErrorFEFromMaster03DE_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorFEFromMaster03DE = Val  ;
}
/** end **/      

/*****************************************************************************/
//������� ������� ������ CRC (CRC) ��� ����� ������ �� �������  
/*****************************************************************************/
uint16_t Get_CntErrorCRCFromMaster03DD_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorCRCFromMaster03DD ;
}
/** end **/
/*****************************************************************************/
//���������� ������� ������ CRC (CRC) ��� ����� ������ �� ������� 
/*****************************************************************************/
void Set_CntErrorCRCFromMaster03DD_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorCRCFromMaster03DD = Val  ;
}
/** end **/     
     
/*****************************************************************************/
//������� �������  ������ , ����� ��� � �� ���� �����������  
/*****************************************************************************/
uint16_t Get_CntErrorCurrentBel03DC_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorCurrentBel03DC ;
}
/** end **/
/*****************************************************************************/
//���������� �������  ������ , ����� ��� � �� ���� ����������� 
/*****************************************************************************/
void Set_CntErrorCurrentBel03DC_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorCurrentBel03DC = Val  ;
}
/** end **/
/*****************************************************************************/
//������� �������  ������ , ����� ��� � �� ���� ����������� 
/*****************************************************************************/
uint16_t Get_CntErrorCurrentHigh03DB_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorCurrentHigh03DB ;
}
/** end **/
/*****************************************************************************/
//���������� �������  ������ , ����� ��� � �� ���� ����������� 
/*****************************************************************************/
void Set_CntErrorCurrentHigh03DB_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorCurrentHigh03DB = Val  ;
}
/** end **/
/*****************************************************************************/
//������� �������  ������ , ��������� ������������  �������� ������ ���
//����� ������ �� �� �� ��
/*****************************************************************************/
uint16_t Get_CntErrorOvFlBuf03DA_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorOvFlBuf03DA ;
}
/** end **/
/*****************************************************************************/
//���������� �������  ������ , ��������� ������������  �������� ������ ���
//����� ������ �� �� �� ��
/*****************************************************************************/
void Set_CntErrorOvFlBuf03DA_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorOvFlBuf03DA = Val  ;
}
/** end **/
/*****************************************************************************/
//������� �������  ������ , ����� �� ������ �������� ������� ��� �� ������ 
/*****************************************************************************/
uint16_t Get_CntErrorTimeOut03D9_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorTimeOut03D9 ;
}
/** end **/
/*****************************************************************************/
//���������� �������  ������ , ����� �� ������ �������� ������� ��� �� ������ 
/*****************************************************************************/
void Set_CntErrorTimeOut03D9_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorTimeOut03D9 = Val  ;
}
/** end **/
/*****************************************************************************/
//������� �������  �������� ������������� ��������� ��� ��� ����� ������ �� �� 
/*****************************************************************************/
uint16_t Get_CntErrorSBD03D8_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorSBD03D8 ;
}
/** end **/
/*****************************************************************************/
//���������� �������  �������� ������������� ��������� ��� ��� ����� ������ �� �� 
/*****************************************************************************/
void Set_CntErrorSBD03D8_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorSBD03D8 = Val  ;
}
/** end **/
/*****************************************************************************/
//������� �������  �������� ������������� ��� ������ ��� ����� ������ �� ��
/*****************************************************************************/
uint16_t Get_CntErrorDataBit03D7_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorNoise03D6 ;
}
/** end **/
/*****************************************************************************/
//���������� �������  �������� ������������� ��� ������ ��� ����� ������ �� ��
/*****************************************************************************/
void Set_CntErrorDataBit03D7_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorDataBit03D7 = Val  ;
}
/** end **/
/*****************************************************************************/
//������� ������� ������ ����� ��� ����� ������ �� ��
/*****************************************************************************/
uint16_t Get_CntErrorNoise03D6_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorNoise03D6 ;
}
/** end **/
/*****************************************************************************/
//���������� ������� ������ ����� ��� ����� ������ �� ��
/*****************************************************************************/
void Set_CntErrorNoise03D6_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorNoise03D6 = Val  ;
}
/** end **/
/*****************************************************************************/
//������� ������� ������ �������� ��� ����� ������ �� ��
/*****************************************************************************/
uint16_t Get_CntErrorParity03D5_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorParity03D5 ;
}
/** end **/
/*****************************************************************************/
//���������� ������� ������ �������� ��� ����� ������ �� ��
/*****************************************************************************/
void Set_CntErrorParity03D5_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorParity03D5 = Val  ;
}
/** end **/
/*****************************************************************************/
//������� ��������� ������ �������������� ���������  
/*****************************************************************************/
uint16_t Get_Request_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].Request ;
}
/** end **/
/*****************************************************************************/
//���������� ������  �������������� ��������� 
/*****************************************************************************/
void Set_Request_KLAI ( const uint8_t NumKL , const uint8_t Cond )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].Request = Cond  ;
}
/** end **/
/*****************************************************************************/
//������� ��������� �� �� 03D4  
/*****************************************************************************/
uint16_t Get_CondKL_Adr03D4_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CondKLAIMbAdr03D4.all  ;
}
/** end **/
/*****************************************************************************/
//���������� ��������� �� �� 03D4  
/*****************************************************************************/
void Set_CondKL_Adr03D4_KLAI ( const uint8_t NumKL , const uint16_t AdrCond )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CondKLAIMbAdr03D4.all = AdrCond  ;
}
/** end **/
/*****************************************************************************/
//������� ��������� �� �� 03D3  
/*****************************************************************************/
uint16_t Get_CondKL_Adr03D3_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CondKL.all  ;
}
/** end **/
/*****************************************************************************/
//���������� ��������� �� �� 03D3  
/*****************************************************************************/
void Set_CondKL_Adr03D3_KLAI ( const uint8_t NumKL , const uint16_t AdrCond )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CondKL.all = AdrCond  ;
}
/** end **/
/*****************************************************************************/
//���������� ������  
/*****************************************************************************/
uint8_t Get_Ver_Event_Manage_KLAI ( const uint8_t NumKL )
{
  if ( NumKL > MAX_QTY_KL   )
  {
    return NULL ;
  }
   
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].Ver  ;
}
/** end **/
/*****************************************************************************/
//���������� ������  
/*****************************************************************************/
void Set_Ver_Event_Manage_KLAI ( const uint8_t NumKL, const uint8_t Ver  )
{
 if ( NumKL > MAX_QTY_KL   )
  {
    return  ;
  }
   
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].Ver = Ver ;
}
/** end **/


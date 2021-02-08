
#include "Func_for_Info_KL_AI.h"
#include "Func_for_Info_KL_AI_Public.h"



             
            
/*****************************************************************************/
//получить  адрес МБ  для адресов кл АИ
/*****************************************************************************/
uint16_t Get_Adr_MB_for_Adr_KLAI ( const uint16_t StartMBAdr, const uint8_t Adr )
{    
   if ( !( Adr % 2 ) )
   {// чётная
     return ( StartMBAdr + ( ( Adr/2)-1 ) ) ;
   }
   else
   {// нечётная
     return ( StartMBAdr + (Adr/2 ) )  ;
   }
}
/** end **//*****************************************************************************/
//вернуть размер
/*****************************************************************************/
uint16_t  Get_Size_ThresholdTemp_KLAI ( const uint8_t NumKL )
{    
  return   ( sizeof ( TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].ThresholdTemp ) );
}
/** end **/
/*****************************************************************************/
//вернуть указатель
/*****************************************************************************/
uint8_t * Get_Ptr_ThresholdTemp_KLAI ( const uint8_t NumKL )
{    
  return  (uint8_t*)TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].ThresholdTemp ;
}
/** end **/
/*****************************************************************************/
//вернуть указатель на конкретный адрес
/*****************************************************************************/
uint8_t * Get_Ptr_Adr_ThresholdTemp_KLAI ( const uint8_t NumKL ,  uint8_t NumAI  )
{  
  if ( !( NumAI % 2 ) )
  {// чётная
    NumAI -- ;
  }
  else
  {// нечётная
    
  }
  return  (uint8_t*)TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].ThresholdTemp [ NumAI ] ;
}
/** end **/
/*****************************************************************************/
//вернуть темпиратурный порог
/*****************************************************************************/
uint8_t Get_ThresholdTemp_KLAI ( const uint8_t NumKL , const uint8_t NumAI  )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].ThresholdTemp [ NumAI ];
}
/** end **/
/*****************************************************************************/
//установить темпиратурный для всех
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
//установить темпиратурный 
/*****************************************************************************/
void Set_ThresholdTemp_KLAI ( const uint8_t NumKL , const uint8_t NumAI , const uint8_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].ThresholdTemp [NumAI] = Val  ;
}
/** end **/ 
/*****************************************************************************/
//вернуть Количество запросов по ModBus
/*****************************************************************************/
uint16_t Get_QtyRequestLineModbus_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].QtyRequestLineModbus ;
}
/** end **/
/*****************************************************************************/
//установить Количество запросов по ModBus
/*****************************************************************************/
void Set_QtyRequestLineModbus_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].QtyRequestLineModbus = Val  ;
}
/** end **/                            
/*****************************************************************************/
//вернуть Количество запросов по ЛС
/*****************************************************************************/
uint16_t Get_QtyRequestLineMA_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].QtyRequestLineMA ;
}
/** end **/
/*****************************************************************************/
//установить Количество запросов по ЛС
/*****************************************************************************/
void Set_QtyRequestLineMA_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].QtyRequestLineMA = Val  ;
}
/** end **/   
             
/*****************************************************************************/
//вернуть 1 регистр младший байт – напряжение ЛС при U=13 В 1 регистр старший байт – ток в ЛС при U=13 В
/*****************************************************************************/
uint16_t Get_VolCurInLine13_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].VolCurInLine13 ;
}
/** end **/
/*****************************************************************************/
//установить 1 регистр младший байт – напряжение ЛС при U=13 В 1 регистр старший байт – ток в ЛС при U=13 В
/*****************************************************************************/
void Set_VolCurInLine13_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].VolCurInLine13 = Val  ;
}
/** end **/              

/*****************************************************************************/
//вернуть 1 регистр младший байт – напряжение ЛС при U=24 В 1 регистр старший байт – ток в ЛС при U=24 В
/*****************************************************************************/
uint16_t Get_VolCurInLine24_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].VolCurInLine24 ;
}
/** end **/
/*****************************************************************************/
//установить с1 регистр младший байт – напряжение ЛС при U=24 В 1 регистр старший байт – ток в ЛС при U=24 В
/*****************************************************************************/
void Set_VolCurInLine24_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].VolCurInLine24 = Val  ;
}
/** end **/ 
            
/*****************************************************************************/
//вернуть счётчик логических ошибок ModBus(ModBus) при приёме данных от сервера 
/*****************************************************************************/
uint16_t Get_CntErrorLogicFromMaster03E1_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorLogicFromMaster03E1 ;
}
/** end **/
/*****************************************************************************/
//установить счётчик логических ошибок ModBus(ModBus) при приёме данных от сервера
/*****************************************************************************/
void Set_CntErrorLogicFromMaster03E1_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorLogicFromMaster03E1 = Val  ;
}
/** end **/    
/*****************************************************************************/
//вернуть счётчик ошибок переполнения буфера UART (ORE) при приёме данных от сервера 
/*****************************************************************************/
uint16_t Get_CntErrorOREFromMaster03E0_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorOREFromMaster03E0 ;
}
/** end **/
/*****************************************************************************/
//установить счётчик ошибок переполнения буфера UART (ORE) при приёме данных от сервера
/*****************************************************************************/
void Set_CntErrorOREFromMaster03E0_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorOREFromMaster03E0 = Val  ;
}
/** end **/     
     
/*****************************************************************************/
//вернуть счётчик ошибок помех (NE) при приёме данных от сервера  
/*****************************************************************************/
uint16_t Get_CntErrorNEFromMaster03DF_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorNEFromMaster03DF ;
}
/** end **/
/*****************************************************************************/
//установить счётчик ошибок помех (NE) при приёме данных от сервера
/*****************************************************************************/
void Set_CntErrorNEFromMaster03DF_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorNEFromMaster03DF = Val  ;
}
/** end **/        
     
/*****************************************************************************/
//вернуть счётчик ошибок фрейам (FE) при приёме данных от сервера  
/*****************************************************************************/
uint16_t Get_CntErrorFEFromMaster03DE_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorFEFromMaster03DE ;
}
/** end **/
/*****************************************************************************/
//установить счётчик ошибок фрейам (FE) при приёме данных от сервера
/*****************************************************************************/
void Set_CntErrorFEFromMaster03DE_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorFEFromMaster03DE = Val  ;
}
/** end **/      

/*****************************************************************************/
//вернуть счётчик ошибок CRC (CRC) при приёме данных от сервера  
/*****************************************************************************/
uint16_t Get_CntErrorCRCFromMaster03DD_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorCRCFromMaster03DD ;
}
/** end **/
/*****************************************************************************/
//установить счётчик ошибок CRC (CRC) при приёме данных от сервера 
/*****************************************************************************/
void Set_CntErrorCRCFromMaster03DD_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorCRCFromMaster03DD = Val  ;
}
/** end **/     
     
/*****************************************************************************/
//вернуть счётчик  ошибок , когда ток в ЛС ниже допустимого  
/*****************************************************************************/
uint16_t Get_CntErrorCurrentBel03DC_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorCurrentBel03DC ;
}
/** end **/
/*****************************************************************************/
//установить счётчик  ошибок , когда ток в ЛС ниже допустимого 
/*****************************************************************************/
void Set_CntErrorCurrentBel03DC_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorCurrentBel03DC = Val  ;
}
/** end **/
/*****************************************************************************/
//вернуть счётчик  ошибок , когда ток в ЛС выше допустимого 
/*****************************************************************************/
uint16_t Get_CntErrorCurrentHigh03DB_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorCurrentHigh03DB ;
}
/** end **/
/*****************************************************************************/
//установить счётчик  ошибок , когда ток в ЛС выше допустимого 
/*****************************************************************************/
void Set_CntErrorCurrentHigh03DB_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorCurrentHigh03DB = Val  ;
}
/** end **/
/*****************************************************************************/
//вернуть счётчик  ошибок , произошло переполнение  приёмного буфера при
//приёме данных по ЛС от МА
/*****************************************************************************/
uint16_t Get_CntErrorOvFlBuf03DA_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorOvFlBuf03DA ;
}
/** end **/
/*****************************************************************************/
//установить счётчик  ошибок , произошло переполнение  приёмного буфера при
//приёме данных по ЛС от МА
/*****************************************************************************/
void Set_CntErrorOvFlBuf03DA_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorOvFlBuf03DA = Val  ;
}
/** end **/
/*****************************************************************************/
//вернуть счётчик  ошибок , когда за данный интервал времени бит не пришёл 
/*****************************************************************************/
uint16_t Get_CntErrorTimeOut03D9_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorTimeOut03D9 ;
}
/** end **/
/*****************************************************************************/
//установить счётчик  ошибок , когда за данный интервал времени бит не пришёл 
/*****************************************************************************/
void Set_CntErrorTimeOut03D9_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorTimeOut03D9 = Val  ;
}
/** end **/
/*****************************************************************************/
//вернуть счётчик  неверных длительностей стартовых бит при приёме данных от МА 
/*****************************************************************************/
uint16_t Get_CntErrorSBD03D8_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorSBD03D8 ;
}
/** end **/
/*****************************************************************************/
//установить счётчик  неверных длительностей стартовых бит при приёме данных от МА 
/*****************************************************************************/
void Set_CntErrorSBD03D8_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorSBD03D8 = Val  ;
}
/** end **/
/*****************************************************************************/
//вернуть счётчик  неверных длительностей бит данных при приёме данных от МА
/*****************************************************************************/
uint16_t Get_CntErrorDataBit03D7_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorNoise03D6 ;
}
/** end **/
/*****************************************************************************/
//установить счётчик  неверных длительностей бит данных при приёме данных от МА
/*****************************************************************************/
void Set_CntErrorDataBit03D7_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorDataBit03D7 = Val  ;
}
/** end **/
/*****************************************************************************/
//вернуть счётчик ошибок помех при приёме данных от МА
/*****************************************************************************/
uint16_t Get_CntErrorNoise03D6_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorNoise03D6 ;
}
/** end **/
/*****************************************************************************/
//установить счётчик ошибок помех при приёме данных от МА
/*****************************************************************************/
void Set_CntErrorNoise03D6_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorNoise03D6 = Val  ;
}
/** end **/
/*****************************************************************************/
//вернуть счётчик ошибок чётности при приёме данных от МА
/*****************************************************************************/
uint16_t Get_CntErrorParity03D5_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorParity03D5 ;
}
/** end **/
/*****************************************************************************/
//установить счётчик ошибок чётности при приёме данных от МА
/*****************************************************************************/
void Set_CntErrorParity03D5_KLAI ( const uint8_t NumKL , const uint16_t Val )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CntErrorParity03D5 = Val  ;
}
/** end **/
/*****************************************************************************/
//вернуть состояние чтения дополнительных регистров  
/*****************************************************************************/
uint16_t Get_Request_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].Request ;
}
/** end **/
/*****************************************************************************/
//установить чтение  дополнительных регистров 
/*****************************************************************************/
void Set_Request_KLAI ( const uint8_t NumKL , const uint8_t Cond )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].Request = Cond  ;
}
/** end **/
/*****************************************************************************/
//вернуть состояние КЛ АИ 03D4  
/*****************************************************************************/
uint16_t Get_CondKL_Adr03D4_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CondKLAIMbAdr03D4.all  ;
}
/** end **/
/*****************************************************************************/
//установить состояние КЛ АИ 03D4  
/*****************************************************************************/
void Set_CondKL_Adr03D4_KLAI ( const uint8_t NumKL , const uint16_t AdrCond )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CondKLAIMbAdr03D4.all = AdrCond  ;
}
/** end **/
/*****************************************************************************/
//вернуть состояние КЛ АИ 03D3  
/*****************************************************************************/
uint16_t Get_CondKL_Adr03D3_KLAI ( const uint8_t NumKL )
{    
  return TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CondKL.all  ;
}
/** end **/
/*****************************************************************************/
//установить состояние КЛ АИ 03D3  
/*****************************************************************************/
void Set_CondKL_Adr03D3_KLAI ( const uint8_t NumKL , const uint16_t AdrCond )
{    
  TotalInfoStructKLAI.InfoStructKLAI [ NumKL ].CondKL.all = AdrCond  ;
}
/** end **/
/*****************************************************************************/
//установить версию  
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
//установить версию  
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


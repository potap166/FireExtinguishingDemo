
#ifndef  __FUNC_FOR_INFO_KL_AI_PUBLIC_H
#define  __FUNC_FOR_INFO_KL_AI_PUBLIC_H




//void Set_Str_Event_Manage_KLAI ( const uint8_t Num_KL, const uint8_t Num_Ay , const uint8_t TypeEvent ) ;
//KLAIStrEvent_t * Get_Str_Event_Manage_KLAI ( const uint8_t NumKL,const uint8_t NumStr )   ;

uint8_t Get_Ver_Event_Manage_KLAI ( const uint8_t NumKL )                                 ;
void Set_Ver_Event_Manage_KLAI    ( const uint8_t NumKL, const uint8_t Ver  )             ;

uint16_t Get_CondKL_Adr03D3_KLAI ( const uint8_t NumKL )                                  ;
void Set_CondKL_Adr03D3_KLAI ( const uint8_t NumKL , const uint16_t AdrCond )             ;

uint16_t Get_Request_KLAI ( const uint8_t NumKL )                                         ;
void Set_Request_KLAI ( const uint8_t NumKL , const uint8_t Cond )                        ;  
   
uint16_t Get_CondKL_Adr03D4_KLAI ( const uint8_t NumKL )                                  ;
void Set_CondKL_Adr03D4_KLAI ( const uint8_t NumKL , const uint16_t AdrCond )            ;

uint16_t Get_CntErrorParity03D5_KLAI ( const uint8_t NumKL )                  ;
void Set_CntErrorParity03D5_KLAI ( const uint8_t NumKL , const uint16_t Val ) ;

uint16_t Get_CntErrorNoise03D6_KLAI ( const uint8_t NumKL )                   ;  
void Set_CntErrorNoise03D6_KLAI ( const uint8_t NumKL , const uint16_t Val )  ;

uint16_t Get_CntErrorDataBit03D7_KLAI ( const uint8_t NumKL )                 ;
void Set_CntErrorDataBit03D7_KLAI ( const uint8_t NumKL , const uint16_t Val ); 

uint16_t Get_CntErrorSBD03D8_KLAI ( const uint8_t NumKL )                     ; 
void Set_CntErrorSBD03D8_KLAI ( const uint8_t NumKL , const uint16_t Val )    ;

uint16_t Get_CntErrorTimeOut03D9_KLAI ( const uint8_t NumKL )                 ;
void Set_CntErrorTimeOut03D9_KLAI ( const uint8_t NumKL , const uint16_t Val );

uint16_t Get_CntErrorOvFlBuf03DA_KLAI ( const uint8_t NumKL )                 ;
void Set_CntErrorOvFlBuf03DA_KLAI ( const uint8_t NumKL , const uint16_t Val );

uint16_t Get_CntErrorCurrentHigh03DB_KLAI ( const uint8_t NumKL )              ; 
void Set_CntErrorCurrentHigh03DB_KLAI ( const uint8_t NumKL , const uint16_t Val ) ;

uint16_t Get_CntErrorCurrentBel03DC_KLAI ( const uint8_t NumKL )                 ;
void Set_CntErrorCurrentBel03DC_KLAI ( const uint8_t NumKL , const uint16_t Val );

uint16_t Get_CntErrorFEFromMaster03DE_KLAI ( const uint8_t NumKL )                  ;  
void Set_CntErrorFEFromMaster03DE_KLAI ( const uint8_t NumKL , const uint16_t Val ) ;

uint16_t Get_CntErrorCRCFromMaster03DD_KLAI ( const uint8_t NumKL )                 ;  
void Set_CntErrorCRCFromMaster03DD_KLAI ( const uint8_t NumKL , const uint16_t Val );

uint16_t Get_CntErrorNEFromMaster03DF_KLAI ( const uint8_t NumKL )                  ;
void Set_CntErrorNEFromMaster03DF_KLAI ( const uint8_t NumKL , const uint16_t Val ) ;

uint16_t Get_CntErrorOREFromMaster03E0_KLAI ( const uint8_t NumKL )                 ;
void Set_CntErrorOREFromMaster03E0_KLAI ( const uint8_t NumKL , const uint16_t Val );

uint16_t Get_CntErrorLogicFromMaster03E1_KLAI ( const uint8_t NumKL )               ;
void Set_CntErrorLogicFromMaster03E1_KLAI ( const uint8_t NumKL , const uint16_t Val ) ;

uint16_t Get_VolCurInLine24_KLAI ( const uint8_t NumKL )                             ;
void Set_VolCurInLine24_KLAI ( const uint8_t NumKL , const uint16_t Val )            ;

uint16_t Get_VolCurInLine13_KLAI ( const uint8_t NumKL )                             ;
void Set_VolCurInLine13_KLAI ( const uint8_t NumKL , const uint16_t Val )            ;
 
uint16_t Get_QtyRequestLineMA_KLAI ( const uint8_t NumKL )                           ;
void Set_QtyRequestLineMA_KLAI ( const uint8_t NumKL , const uint16_t Val )          ;

uint16_t Get_QtyRequestLineModbus_KLAI ( const uint8_t NumKL )                       ;
void Set_QtyRequestLineModbus_KLAI ( const uint8_t NumKL , const uint16_t Val )      ;

uint8_t Get_ThresholdTemp_KLAI ( const uint8_t NumKL , const uint8_t NumAI  )        ;
void Set_ThresholdTemp_KLAI ( const uint8_t NumKL , const uint8_t NumAI , const uint8_t Val );

uint8_t * Get_Ptr_ThresholdTemp_KLAI ( const uint8_t NumKL )                     ;
uint16_t  Get_Size_ThresholdTemp_KLAI ( const uint8_t NumKL )                    ;

void Set_ThresholdTemp_For_All_KLAI ( const uint8_t NumKL , const uint8_t Val )  ;

uint8_t * Get_Ptr_Adr_ThresholdTemp_KLAI ( const uint8_t NumKL ,  uint8_t NumAI  ) ;


uint16_t Get_Adr_MB_for_Adr_KLAI ( const uint16_t StartMBAdr, const uint8_t Adr ) ;


#endif

 #ifndef  __DEVICE_STATUS_H
 #define  __DEVICE_STATUS_H


///////////////////////////////////////////////////////////////////////////////

typedef enum 
{  

   TypesTempCondIPT_AI_Missing_in_Config         = 0U,
   TypesTempCondIPT_AI_Processing_En_Dis         = 1U,
   TypesTempCondIPT_AI_Unknown                   = 2U, 
   TypesTempCondIPT_AI_Fault                     = 3U,
   TypesTempCondIPT_AI_Low_Voltage               = 4U,
   TypesTempCondIPT_AI_Norma                     = 5U,
   TypesTempCondIPT_AI_Fire1                     = 6U, 
   TypesTempCondIPT_AI_Fire2                     = 7U,
   TypesTempCondIPT_AI_KZ                        = 8U, 
  
} 
TempCondIPT_AI_t;



#endif
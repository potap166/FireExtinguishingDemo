 
 
#ifndef  __DEVICE_TYPES_H
#define  __DEVICE_TYPES_H




typedef enum //таблица типов устройств 
{  
   NONE_td                   = 0,
   BKY_td                    = 1U,
   KL_SA_td                  = 2U,
   IPT_SA_td                 = 3U,
   KL_AE_td                  = 4U,
   IPT_AE_td                 = 5U,  
   MC_SA_td                  = 6U, 
   KL_AI_td                  = 7U,
   IPT_SkI_td                = 8U,
   IPP_SkI_td                = 9U,
   IPT_SkA_td                = 10U,
   IPP_SkA_td                = 11U,
   IPP_SA_td                 = 12U,
   IPT_A_td                  = 13U,
   MKP_SA_td                 = 14U,   
   MKP_SkA_td                = 15U, 
   IPP_A                     = 16U,
   IPR_A                     = 17U,
   IPD_A                     = 18U,
   IPR_AE                    = 19U,
   MKP_SA_R_td               = 20U,
   IPT_SIk_td                = 21U, 
   
   MaxValofType              = 62U
     
} DeviceTypes_t;

#endif
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __RTC_PUBLIC_H
#define __RTC_PUBLIC_H


#include "stm32f4xx_hal.h"

#ifdef __cplusplus
 extern "C" {
#endif
   

/* Includes ------------------------------------------------------------------*/
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macros -----------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */ 
void     k_CalendarBkupInit(void);

void k_SetTime  (RTC_TimeTypeDef *Time);
void k_GetTime  (RTC_TimeTypeDef *Time);
void k_SetDate  (RTC_DateTypeDef *Date);
void k_GetDate  (RTC_DateTypeDef *Date);

#ifdef __cplusplus
}
#endif

#endif /*__K_RTC_H */
#ifndef  __TOTALCONST_H
#define  __TOTALCONST_H




/******************************************************************************/
// мои  статусы
#define MB_TASK_ERROR_STATUS                            (uint8_t)0x00U // статус
#define MB_TASK_OK_STATUS                               (uint8_t)0x01U // статус  
#define MB_TASK_OK_STATUS_BUT_MB_SEND_ER                (uint8_t)0x09U // статус  
/*************************************************************/
// мои  ошибки 
#define MB_TASK_CRC_ERROR                            (uint8_t)0x02U //тип ошибки 
#define MB_TASK_NO_REPLAY                            (uint8_t)0x03U //тип ошибки
#define MB__NOT_CORRECT_COD_OF_FUNC                  (uint8_t)0x04U //тип ошибки
#define MB__NOT_AVAILABLE_ADR_FOR_WRITE              (uint8_t)0x05U //тип ошибки
#define MB__LIMIT_ADR_AREA                           (uint8_t)0x06U //тип ошибки
/******************************************************************************/
//коды функций  модбаса
#define COD_OF_FUNC_MB_READ_OF_DATA                               (uint8_t)0x03U     
#define COD_OF_FUNC_MB_WRITE_SINGLE_OF_ADR                        (uint8_t)0x06U
#define COD_OF_FUNC_MB_WRITE_BURST_OF_ADR                         (uint8_t)0x10U
/******************************************************************************/
#define LENGH_TX_RX_MAS_FOR_USART_BUF                             (uint16_t)262U  


#endif

#ifndef  __EVENT_TYPES_PUBLIC_H
#define  __EVENT_TYPES_PUBLIC_H

//  ���� ������� 
////  1-�����  2-�������������  3-�������  4-���������  5-������   6 - ����

typedef enum 
{  
   NONE_TYPE                = 0U,
   TYPE_EVENT_SEVICE        = 1U,
   TYPE_EVENT_NORMA         = 2U,
   TYPE_EVENT_FAULT         = 3U,
   TYPE_EVENT_ALARM         = 4U,
   TYPE_EVENT_TIMER         = 5U,
   TYPE_EVENT_LUNCH         = 6U,  
    
} TypeEvents_t ; 

//#define TYPE_EVENT_SEVICE                                            (uint8_t)1U
//#define TYPE_EVENT_NORMA                                             (uint8_t)2U
//#define TYPE_EVENT_FAULT                                             (uint8_t)3U
//#define TYPE_EVENT_ALARM                                             (uint8_t)4U
//#define TYPE_EVENT_TIMER                                             (uint8_t)5U
//#define TYPE_EVENT_LUNCH                                             (uint8_t)6U



#endif 





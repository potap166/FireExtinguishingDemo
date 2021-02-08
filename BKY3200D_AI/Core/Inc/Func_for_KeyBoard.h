#ifndef  __FUNC_FOR_KEYBOARD_H
#define  __FUNC_FOR_KEYBOARD_H

#include "Include_Lib.h"                              




//#include "stm32f4xx_hal.h"
/******************************************************************************/
typedef union
{
   uint8_t   all;
   struct
   {
      unsigned   FlagPress  /**/                 : 1; 
      unsigned   Row  /**/                       : 2; 
      unsigned   String    /**/                  : 5;      
   } ; 
} TypeKeyPadProccecing;
/******************************************************************************/

 uint8_t KeyCheckBuf [QTY_ROW][QTY_STRING]  ;
//////////////////////////////////////////////////////////////////////
const uint8_t KeyTabl [QTY_ROW][QTY_STRING] ={ 
   {KEY_DELAY,KEY_LUNCH_STOP,KEY_AUTO_OFF,KEY_SOUND_OFF,KEY_TEST,KEY_RESET},
   {KEY_F1,KEY_F2,KEY_F3,KEY_PAGE_UP,KEY_PAGEDOWN,KEY_CANCELLATION},
   {KEY_UP,KEY_DOWN,KEY_LEFT,KEY_RIGHT,KEY_ENTER,KEY_0},
   {KEY_1,KEY_2,KEY_3,KEY_4,KEY_5,KEY_6},
   {KEY_7,KEY_8,KEY_9,0,0,0},
  
} ;

#define QTY_ELEMNTS_IN_PASWORD    4 

//const uint8_t Pasword [QTY_ELEMNTS_IN_PASWORD] = {
// KEY_1,KEY_9,KEY_4,KEY_5,KEY_0,KEY_5,KEY_0,KEY_9,KEY_1,KEY_2 
//} ;
const uint8_t Pasword [QTY_ELEMNTS_IN_PASWORD] = {
 KEY_7,KEY_8,KEY_2,KEY_5} ;


#define CLEAR_KeyCheckBuf     for (uint8_t l=0;l<QTY_ROW;l++ ){\
                                for (uint8_t ll=0;ll<QTY_STRING;ll++ ){\
                                    KeyCheckBuf[l][ll]=0 ; }}

static uint8_t Take_Value_String (uint8_t val)  ;
static void Row_On (uint8_t row) ; 
///////////////////////////////////////////////////////////////////////////////





//uint8_t Key_Pad_Keyboard (void) ;
 

#endif 

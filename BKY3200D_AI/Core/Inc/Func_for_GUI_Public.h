

#ifndef  __FUNC_FOR_GUI_PUBLIC_H
#define  __FUNC_FOR_GUI_PUBLIC_H

#include "WM.h"
#include "System_Text_Extern.h"
#include "Simple_Data_Types.h"
#include "GUI_MB_Data_Type.h"

#include "string.h"
#include "stdio.h"

#define STEP_PG_DW                                                  (uint16_t)16
#define GUI_STEK_MIN_CURENT_VALUE                                (uint32_t)1024U


extern char  GuiCharArray     [7][40]; 
#define CLEAR_GuiCharArray    {uint8_t* p=(uint8_t*)&GuiCharArray ; \
                               for (uint32_t i=0 ;i<sizeof(GuiCharArray);i++ ) \
                               {*p++=0;}}    

extern WM_HWIN CreateFramewinMessageDialog (const MessageBox_t * Mes )          ;
void  Send_Button_Msq_to_GUI               ( const Buttons_t  Key )             ;
FireBooL_t Check_GUI_RAM                   ( void )                             ;
FireBooL_t Cheak_Focus_Windows             ( const WM_HWIN hWin )               ;
FireBooL_t  Cheak_Cover_Windows_2          ( const WM_HWIN hWin )               ;
void Show_Message_Box(const char * const , const char * const ,\
                      const char * const , const char * const )                 ;  
void  Print_Button_Row (const uint32_t x , const uint32_t y, const uint8_t Val) ; 
void  Add_Key ( const WM_HWIN hWin , const uint8_t Key )                        ;
void Edit_Cursor_Move_Action  ( const WM_HWIN Edit , const uint32_t Action )    ;
void Set_Sel_emWin ( const WM_HWIN hWin , const uint32_t Sel )                  ;
#endif 

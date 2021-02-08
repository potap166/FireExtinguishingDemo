
#include <stdint.h>
#include "TotalConst.h" 
#include "DIALOG.h"
#include "Include_Lib.h"



#define ID_TIMER_TIMER  (GUI_ID_USER + 0)
#define TIMER_BUF   (uint16_t)30000

static WM_HTIMER TmrBk=0;
static uint8_t   TmrBkTStartStop=0 ;//0 -����� 1 ��� ;



extern WM_HWIN CreateWindowIconFirstMenu(void)             ;

void    Reset_Bk_Timer(void)                               ;
void    InitMainMenu(void)                                 ;
void    _cbBk(WM_MESSAGE * pMsg)                           ;
void    Reset_Bk_Timer(void)                               ;
uint8_t Get_TmrBk  ( void )                                ;





  /****************************************************************************
  * ��� �������   : Get_TmrBk()
  * ��������      : ������� �������� ������� 
  * 
  *
  * ���������     :  ���
  * �������       : uint8_t
  ****************************************************************************/


uint8_t Get_TmrBk  ( void ) 
{
  
  return TmrBkTStartStop ;
  
}
 /** end **/


  /****************************************************************************
  * ��� �������   : Reset_Bk_Timer()
  * ��������      : ������� 
  * 
  *
  * ���������     :  ���
  * �������       : ���
  ****************************************************************************/


void Reset_Bk_Timer(void) 
{
   if(TmrBk)
   {
 //    WM_RestartTimer(TmrBk,1);
   }
}
 /** end **/



  /****************************************************************************
  * ��� �������   : _cbBk
  * ��������      :  ������ �-��� ��� ���������
  * 
  *
  * ���������     :  WM_MESSAGE *
  * �������       : ���
  ****************************************************************************/


void _cbBk(WM_MESSAGE * pMsg) 
{ 
  switch (pMsg->MsgId) 
  {                        
      case WM_TIMER: if ( WM_GetTimerId(pMsg->Data.v) == ID_TIMER_TIMER )
                     {  
                     }
                     break ;

            
                 
     default: WM_DefaultProc(pMsg);
  }
}
 /** end **/


  /****************************************************************************
  * ��� �������   : InitMainMenu()
  * ��������      :   �������������  ��������� ����  
  * 
  *
  * ���������     :  ���
  * �������       : ���
  ****************************************************************************/


void InitMainMenu(void) 
{  
 // WM_SetDesktopColor(GUI_YELLOW);
  WM_SetCallback(WM_HBKWIN, _cbBk);  
 // TmrBk=WM_CreateTimer(WM_HBKWIN, ID_TIMER_TIMER,TIMER_BUF,0) ;

  CreateWindowIconFirstMenu();  
}
 /** end **/
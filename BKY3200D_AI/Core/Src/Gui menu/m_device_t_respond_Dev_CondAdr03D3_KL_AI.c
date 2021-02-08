
/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.28                          *
*        Compiled Jan 30 2015, 16:41:06                              *
*        (c) 2015 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END
#include "DIALOG.h"
#include "Func_for_GUI_Public.h"
#include "Func_for_Info_KL_AI_Public.h"
#include "Func_for_Polling_Device_Struct_Public.h"

WM_HWIN CreateFramewinMenuDeviceTableofRespondDevCondAdr03D3KLAI (void );
static void  Fill_Table ( const WM_HWIN hWin   )           ; 



extern AdrDevice_t Get_Adr_KL_Info ( void ) ; 
 
/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_WINDOW_0     (GUI_ID_USER + 0x00)
#define ID_LISTVIEW_0   (GUI_ID_USER + 0x01)
// USER START (Optionally insert additional defines)
// USER END
/*********************************************************************
*
*       Static data
*
**********************************************************************
*/


//static uint16_t KLNumStatic =0 ;

// USER START (Optionally insert additional static data)
// USER END
/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
   { WINDOW_CreateIndirect,     NULL, ID_WINDOW_0, 25, 92, 775, 390, 0, 0x0, 0 },
   { LISTVIEW_CreateIndirect,  "Listview", ID_LISTVIEW_0, 0, 0, 760, 390, 0, 0x0, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg)
 {
  
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  // USER START (Optionally insert additional variables)
  // USER END
  
  switch (pMsg->MsgId)
  {
  case WM_INIT_DIALOG:
        //
        // Initialization of 'Listview'
        //
        hItem = WM_GetDialogItem(pMsg->hWin, ID_LISTVIEW_0);
        HEADER_SetBkColor(LISTVIEW_GetHeader(hItem), GUI_GRAY);
        HEADER_SetFont(LISTVIEW_GetHeader(hItem), &GUI_FontVerdana23);
        LISTVIEW_AddColumn      ( hItem, 40,  "���", GUI_TA_HCENTER | GUI_TA_VCENTER       );
        LISTVIEW_AddColumn      ( hItem, 555, "��������", GUI_TA_HCENTER | GUI_TA_VCENTER  );
        LISTVIEW_AddColumn      ( hItem, 180, "���������", GUI_TA_HCENTER | GUI_TA_VCENTER );
       // LISTVIEW_SetGridVis     ( hItem, 1  );
        LISTVIEW_SetAutoScrollV ( hItem, 1  );
        LISTVIEW_SetRowHeight   ( hItem, 25 );
        LISTVIEW_SetHeaderHeight( hItem, 25 );
        LISTVIEW_SetFont        ( hItem, &GUI_FontVerdana23 );
       // LISTVIEW_SetSel(hItem,0) ;
      //  WM_SetFocus(hItem) ;   
       break;
  // USER START (Optionally insert additional message handling)
  // USER END
      case WM_KEY:    
                 switch (pMsg->Data.v)
                    {        
                      case GUI_KEY_ENTER_HAND :
                                                 break ;                                                 
                       case GUI_KEY_LEFT_HAND  :{
                                                  WM_MESSAGE  pMsg1 ; 
                                                  pMsg1.Data.v=0       ;
                                                  pMsg1.hWin=0         ;
                                                  pMsg1.hWinSrc=0      ;
                                                  pMsg1.MsgId =WM_KEY  ; 
                                                  pMsg1.Data.v=GUI_KEY_LEFT_HAND ; 
                                                  WM_SendMessage(WM_GetParent(pMsg->hWin),&pMsg1) ;
                                                } 
                                                 break ;   
                       case GUI_KEY_RIGHT_HAND :{
                                                  WM_MESSAGE  pMsg1 ; 
                                                  pMsg1.Data.v=0       ;
                                                  pMsg1.hWin=0         ;
                                                  pMsg1.hWinSrc=0      ;
                                                  pMsg1.MsgId =WM_KEY  ; 
                                                  pMsg1.Data.v=GUI_KEY_RIGHT_HAND ; 
                                                  WM_SendMessage(WM_GetParent(pMsg->hWin),&pMsg1) ;
                                                }
                                                 break ;                                            
                       case GUI_KEY_UP_HAND    :                                                                                    
                                                 break ;                                                                                        
                       case GUI_KEY_DOWN_HAND: 
                                                 break ;                                                                              
                      case GUI_KEY_ESCAPE_HAND : {
                                                  WM_MESSAGE  pMsg1 ; 
                                                  pMsg1.Data.v=0       ;
                                                  pMsg1.hWin=0         ;
                                                  pMsg1.hWinSrc=0      ;
                                                  pMsg1.MsgId =WM_KEY  ; 
                                                  pMsg1.Data.v=GUI_KEY_ESCAPE_HAND ; 
                                                  WM_SendMessage(WM_GetParent(pMsg->hWin),&pMsg1) ;
                                                }             
                                                 break ;
                                               
                      default: break ;                        
                    }
                 break ;    
    case  WM_PAINT:
             Fill_Table ( pMsg->hWin ) ;
	  break;
     case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_LISTVIEW_0: // Notifications sent by 'Listview'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_SEL_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_GOT_FOCUS :
                   // Fill_Table ( pMsg->hWin ) ;
          break ;    
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    // USER START (Optionally insert additional code for further Ids)
    // USER END
    }
    break;      
  default:   WM_DefaultProc(pMsg);
    break;
  }
}
/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateWindow
*/
WM_HWIN CreateFramewinMenuDeviceTableofRespondDevCondAdr03D3KLAI ( void )
{
  WM_HWIN hWin;

  if(Check_GUI_RAM())
  {
   // KLNumStatic = KLNum ;
    hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  }
  return hWin;
}


  /****************************************************************************
  * ��� �������   : Fill_Table
  * ��������      : �������� ������� 
  * 
  *
  * ���������     : const WM_HWIN 
  * �������       : ��� 
  ****************************************************************************/

static void  Fill_Table ( const WM_HWIN hWin )   
{
 char *_aTable[1][3] ; 
  
  WM_HWIN hItem = WM_GetDialogItem(hWin, ID_LISTVIEW_0);
  uint32_t Qty_Row= LISTVIEW_GetNumRows(hItem) ; 
  while(Qty_Row-->0)
  {
    LISTVIEW_DeleteRow(hItem,Qty_Row) ;       
  } 
  
  if( 1 ) // �������� ,������!
  {
     
    CondPollingDev_t CondPollingDev    ; 
    CondPollingDev  =  Get_CondPollingDev_PollingDevStruct ( 0 )  ; 
  
    CondKLAIMbAdr03D3_t CondKLAIMbAdr03D3 ;
    CondKLAIMbAdr03D3.all = Get_CondKL_Adr03D3_KLAI ( Get_Adr_KL_Info ().KL - 1  ) ;  
 
   ////////////////////////////////////
    //0
    _aTable[0][0]= "0";
    _aTable[0][1]=  "��������� ������ �����" ;
    if ( CondPollingDev.Respond )
    {
      if ( CondKLAIMbAdr03D3.CondLeftKey ) 
      {
        _aTable[0][2]=  "�������" ;
      }
      else
      {
        _aTable[0][2]=  "��������" ;
      }        
    }
    else
    {
      _aTable[0][2]=  "��� �����" ;
    }
    LISTVIEW_AddRow (hItem, _aTable[0]) ; 
  ////////////////////////////////////
    //1
    _aTable[0][0]= "1";
    _aTable[0][1]=  "��������� ������� �����" ;
    if ( CondPollingDev.Respond )
    {
      if ( CondKLAIMbAdr03D3.CondRightKey ) 
      {
        _aTable[0][2]=  "�������" ;
      }
      else
      {
        _aTable[0][2]=  "��������" ;
      }       
    }
    else
    {
      _aTable[0][2]=  "��� �����" ;
    }
    LISTVIEW_AddRow (hItem, _aTable[0]) ; 
  ////////////////////////////////////
    //2
    _aTable[0][0]= "2";
    _aTable[0][1]=  "��������� ������� ��" ;
    if ( CondPollingDev.Respond )
    { 
      if ( CondKLAIMbAdr03D3.CondLeftFE ) 
      {
        _aTable[0][2]=  "�������" ;
      }
      else
      {
        _aTable[0][2]=  "��������" ;
      }          
    }
    else
    {
      _aTable[0][2]=  "��� �����" ;
    }
    LISTVIEW_AddRow (hItem, _aTable[0]) ;   
  ////////////////////////////////////
    //3
    _aTable[0][0]= "3";
    _aTable[0][1]=  "��������� ������� ��" ;
    if ( CondPollingDev.Respond )
    {
      if ( CondKLAIMbAdr03D3.CondRightFE ) 
      {
        _aTable[0][2]=  "�������" ;
      }
      else
      {
        _aTable[0][2]=  "��������" ;
      }     
    }
    else
    {
      _aTable[0][2]=  "��� �����" ;
    }
    LISTVIEW_AddRow (hItem, _aTable[0]) ;   
  ////////////////////////////////////
    //4
    _aTable[0][0]= "4";
    _aTable[0][1]=  "������� ����������� � ��������� �����" ;
    if ( CondPollingDev.Respond )
    { 
      if ( CondKLAIMbAdr03D3.AdrFire ) 
      {
        _aTable[0][2]=  "����" ;
      }
      else
      {
        _aTable[0][2]=  "���" ;
      }      
    }
    else
    {
      _aTable[0][2]=  "��� �����" ;
    }
   LISTVIEW_AddRow (hItem, _aTable[0]) ;  
  ////////////////////////////////////
    //5
    _aTable[0][0]= "5";
    _aTable[0][1]=  "������� ����������� � ��������� ����������� " ;
    if ( CondPollingDev.Respond )
    { 
      if ( CondKLAIMbAdr03D3.AdrActive ) 
      {
        _aTable[0][2]=  "����" ;
      }
      else
      {
        _aTable[0][2]=  "���" ;
      }     
    }
    else
    {
      _aTable[0][2]=  "��� �����" ;
    }
    LISTVIEW_AddRow (hItem, _aTable[0]) ; 
   ////////////////////////////////////
    //6
    _aTable[0][0]= "6";
    _aTable[0][1]=  "������� ����������� � ��������� ������������" ;
    if ( CondPollingDev.Respond )
    {
      if ( CondKLAIMbAdr03D3.AdrBlock ) 
      {
        _aTable[0][2]=  "����" ;
      }
      else
      {
        _aTable[0][2]=  "���" ;
      }     
    }
    else
    {
      _aTable[0][2]=  "��� �����" ;
    }
    LISTVIEW_AddRow (hItem, _aTable[0]) ; 
   ////////////////////////////////////
    //7
    _aTable[0][0]= "7";
    _aTable[0][1]=  "������� ����������� c 251 �������" ;
    if ( CondPollingDev.Respond )
    {
      if ( CondKLAIMbAdr03D3.Adr251 ) 
      {
        _aTable[0][2]=  "����" ;
      }
      else
      {
        _aTable[0][2]=  "���" ;
      }     
    }
    else
    {
      _aTable[0][2]=  "��� �����" ;
    }
    LISTVIEW_AddRow (hItem, _aTable[0]) ; 
  }
                             
// Set_Sel_emWin(hItem ,Sel) ;         
}

  /** end **/


// USER START (Optionally insert additional public code)
// USER END
/*************************** End of file ****************************/

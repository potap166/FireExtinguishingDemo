
#include "Func_for_KeyBoard.h"
#include "Func_for_KeyBoard_Public.h"


  /****************************************************************************
  * ��� �������   : Key_Pad_Keyboard()
  * ��������      :  ������ ������� 
  * 
  *
  * ���������     : ���
  * �������       : Buttons_t
  ****************************************************************************/

Buttons_t Key_Pad_Keyboard (void)
{ 
 uint8_t x,xx,jj,flag,button,error; 
 static uint8_t FlagCount=0; 

  ALL_ROW_OFF ; //�� ���� ������� �������� 0 
  for(x=0;x<QTY_STRING;x++) // � �������� 1 �� �������� ���������  ����� 
  {
    flag=0 ;
    if(Take_Value_String (x)) 
    {
      osDelay(1) ; 
    }
    else 
    { //���������� ������� 
      CLEAR_KeyCheckBuf ;     
      for ( jj = 0 ; jj < 5; jj++ )
      {
        for ( xx = 0 ; xx < QTY_ROW ; xx++ ) //�� �������  ������� ���� 
        {
          Row_On (xx) ; 
          osDelay(1) ; //
          for  ( x = 0 ; x < QTY_STRING ; x ++ ) // 
          {
            if ( !Take_Value_String (x) ) 
            {
              KeyCheckBuf [ xx ][ x ] ++ ;  
              flag = 1 ;// ����� � ��� ��� ���� �������������� ������� 
            } 
          }
          ALL_ROW_ON ; 
          osDelay(1) ; //
          for ( x = 0 ; x < QTY_STRING ; x++ ) // 
          {
            if(!Take_Value_String (x)) 
            {    
              FlagCount++;   // ����������� ����������  ���� ��������� ���� �� ���� ���� - ��� ������������� ���������� 
              return 0xff  ;  
            } 
          } 
        }    
      }      
      break ; 
     }
   } 
  //��������� ������ 
   if (flag)
    {
       button=0 ; 
       error=0  ; 
       for (uint8_t l=0;l<QTY_ROW;l++ )
        {
          for (uint8_t ll=0;ll<QTY_STRING;ll++ )
           {
               if (KeyCheckBuf[l][ll]>3)
                 {
                   if (!button)
                     {
                       button= KeyTabl[l][ll] ;
                     }      
                   else
                     {
                       error=1 ; //���������� ������� ������� 
                     }
                 }                  
           }
          if (error)
          {
            button=0 ;
            break ;            
          }
        }
       if (button && button<= KEY_0)
       {
          return button ; 
       }
    }
  return False ;  
}
   /** end **/


  /****************************************************************************
  * ��� �������   : Row_On()
  * ��������      : ���������� ��������� �����
  * 
  *
  * ���������     : row
  * �������       : ���
  ****************************************************************************/


static void Row_On (uint8_t row )
{
  switch (row)
  {
     case 0: ROW_1_OFF; ROW_2_ON; ROW_3_ON; ROW_4_ON; ROW_5_ON; break;
     case 1: ROW_1_ON; ROW_2_OFF; ROW_3_ON; ROW_4_ON; ROW_5_ON; break;
     case 2: ROW_1_ON; ROW_2_ON; ROW_3_OFF; ROW_4_ON; ROW_5_ON; break;
     case 3: ROW_1_ON; ROW_2_ON; ROW_3_ON; ROW_4_OFF; ROW_5_ON;  break;
     case 4: ROW_1_ON; ROW_2_ON; ROW_3_ON; ROW_4_ON; ROW_5_OFF;  break;         
     default : break ;
  }
}
   /** end **/


  /****************************************************************************
  * ��� �������   : Take_Value_String()
  * ��������      : ��������� ��������  ��������� ������
  * 
  *
  * ���������     : uint8_t
  * �������       : ���
  ****************************************************************************/


static uint8_t Take_Value_String (uint8_t string )
{
  switch (string)
  {
     case STRING_1:  return STRING_1_READ;
     case STRING_2:  return STRING_2_READ;
     case STRING_3:  return STRING_3_READ;
     case STRING_4:  return STRING_4_READ;
     case STRING_5:  return STRING_5_READ;
     case STRING_6:  return STRING_6_READ;   
     default : return 0 ;
  }
}
   /** end **/
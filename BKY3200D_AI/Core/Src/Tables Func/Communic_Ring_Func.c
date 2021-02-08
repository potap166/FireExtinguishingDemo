

#include "Communic_Ring_Func.h"
#include "Communic_Ring_Func_Public.h"


 /****************************************************************************
  * ��� �������   : Trace_OS_Messege()
  * ��������      : ������������� ���� ������������� �����������
  * 
  *
  * ���������     : ���
  * �������       : ���
  ****************************************************************************/


void Init_Port_Ring_Direction (void)
{ 
  GPIO_InitTypeDef GPIO_InitStruct;
  GPIO_InitStruct.Pin = DIRECTION_RING_LEFT_PIN|DIRECTION_RING_RIGHT_PIN ;                                 //����������� ��������TX1 �� ������ 
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
 
  HAL_GPIO_Init(GPIOF,&GPIO_InitStruct);
   
  Set_Ring_Direction ( LeftRingDir ) ;
}
/** end **/



 /****************************************************************************
  * ��� �������   : Get_Ring_Direction()
  * ��������      : ������� ���������� RingDirection
  * 
  *
  * ���������     : ���
  * �������       : RingDir_t
  ****************************************************************************/

RingDir_t Get_Ring_Direction (void)
{ 
  return RingDirection ;
}
/** end **/


 /****************************************************************************
  * ��� �������   : Get_Last_Working_Direction()
  * ��������      :  ������������� �����������  �� ������ ��
  *                  �������� ��������� ��� ���� ����� � �����������
  * 
  *
  * ���������     : const uint8_t 
  * �������       : RingDir_t
  ****************************************************************************/

RingDir_t Get_Last_Working_Direction ( const uint8_t num )// num -�����  �������� ������� �� ������� ������ 
{ 
 // if ( !num || num >= TOTAL_QTY_ADR_KL_BKY )
 // {
 //   return False ;
 // }
 // if ( num == ERROR_INDEX )
 {
  //    return False ;    
  }
 // if ( AnswerDeviceofRing.LeftDir[num] && AnswerDeviceofRing.RightftDir[num] )
   {
      return  currentDir; 
   }
 // if ( AnswerDeviceofRing.LeftDir[num] )
  {
//    return False ;       
  }
  //else 
  {
//    return True ;     
  }
}
/** end **/


 /****************************************************************************
  * ��� �������   : Return_Direction()
  * ��������      : ������� ���������� ������� ����������� �� ������ 
  * 
  *
  * ���������     : uint8_t
  * �������       : ���
  ****************************************************************************/
/******************************************************************************/
//������� ���������� ������� ����������� �� ������ 
/******************************************************************************/
uint8_t Return_Direction (void)
{ 
  if(currentDir!=RingDirection)
  {  
   return   RingDirection ;    
  }
 return  currentDir ; 
}
/** end **/



 /****************************************************************************
  * ��� �������   : Trace_OS_Messege()
  * ��������      : ������ ����������� ������
  * 
  *
  * ���������     : ���
  * �������       : ���
  ****************************************************************************/


void Togle_Ring_Direction ( void )
{ 
   if(RingDirection == LeftRingDir)
   {
     RingDirection=RightRingDir ;
     RIGHT_DIRECTION_OF_RING ;                
   }
   else 
   {      
     RingDirection=LeftRingDir ;  
     LEFT_DIRECTION_OF_RING ;    
   }   
}
/** end **/



 /****************************************************************************
  * ��� �������   : Set_Ring_Direction()
  * ��������      : ����������������� ����������� �� �����
  * 
  *
  * ���������     :  const RingDir_t
  * �������       : ���
  ****************************************************************************/


void Set_Ring_Direction ( const RingDir_t RingDir )
{ 
   if(!RingDir == LeftRingDir)
   {
     RingDirection=RingDir ;  
     LEFT_DIRECTION_OF_RING ;               
   }
   else 
   {      
     RingDirection=RingDir ;
     RIGHT_DIRECTION_OF_RING ;  
   }   
}
/** end **/



 /****************************************************************************
  * ��� �������   : Set_Current_Ring_Direction()
  * ��������      : ������������ ������ ����������� �� ������ ��� ��������� RingDirection
  * 
  *
  * ���������     : uint8_t
  * �������       : ���
  ****************************************************************************/

void Set_Current_Ring_Direction(uint8_t RequiredDir)
{ 
   if ( !RequiredDir )
   { 
     LEFT_DIRECTION_OF_RING ;               
   }
   else 
   {      
     RIGHT_DIRECTION_OF_RING ;  
   }   
}
/** end **/

#include "Func_OS_for_KeyBoard.h"
#include "Func_OS_for_KeyBoard_Public.h"



/****************************************************************************
  * ��� �������   : KeyBorad_Task_Create_Keyboard_OS()
  * ��������      : ������ ������
  * 
  *
  * ���������     : ���
  * �������       : ���
  ****************************************************************************/

void KeyBorad_Task_Create_Keyboard_OS(void)
{
  KeyBoardTaskHandle =  osThreadNew ( Keyboard_Task , NULL , &KeyBoardTask_attributes );
}
   /** end **/

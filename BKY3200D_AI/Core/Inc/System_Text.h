
#ifndef  __SYSTEM_TEXT_H
#define  __SYSTEM_TEXT_H

#include "main.h"


/*
������� ���������� ��������� � ������� !!!!!!!!
*/ 


#define RUS 
//#define ENG 
/*****************************************************************************/ 
/*
������������ ����
*/ 
#ifdef  RUS 
  const unsigned char   TextString1[]=   "���������";   
#endif 
#ifdef  ENG 
   const unsigned char  TextString1[]=   "Settings";
#endif   
#ifdef  FIN 
   const unsigned char  TextString1[]=   "����� ������";
#endif     
/*****************************************************************************/ 
/*
����� ��� ����� ���������� �������
*/ 
#ifdef  RUS 
   const unsigned char  TextString2[]=    "������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString2[]=   "Event log";
#endif   
#ifdef  FIN 
   const unsigned char  TextString2[]  =   "������";
#endif       
/*****************************************************************************/ 
/*
������������ �����
*/ 
#ifdef  RUS 
  const unsigned char   TextString3[]="����� ������� �������:\n����� �������:\n����� ����:\n����� ����������:\n��� ����������:\n��� �������:\nID ������������:\n        ���������� :\n                    \n������ �������������:";
#endif 
#ifdef  ENG 
  const unsigned char   TextString3[]  =   "event arriving time:\nevent time:\nzone number:\ndevice address:\ndevice type:\nevent type:\nuser ID:\n        information :\n                    \nfault status:";
#endif  
#ifdef  FIN 
   const unsigned char  TextString3[] =   "";
#endif  
/*****************************************************************************/ 
/*
����������� ���������� (���� �������� ����������).
*/   
#ifdef  RUS 
   const unsigned char  TextString4[]=  "���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString4[]=   "BKU";
#endif
#ifdef  FIN 
   const unsigned char  TextString4[]=   "";
#endif    
/*****************************************************************************/
/*
������������ ����������.
*/    
#ifdef  RUS 
   const unsigned char  TextString5[]=  "��-240��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString5[]=  "KL-240SA";
#endif
#ifdef  FIN 
   const unsigned char  TextString5[]=   "";
#endif   
/*****************************************************************************/ 
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString6[]=  "���-��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString6[]=  "IPT-SA";
#endif
#ifdef  FIN 
   const unsigned char  TextString6[]=   "";
#endif    
/*****************************************************************************/    
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString7[]=  "��-240��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString7[]=  "KL-240AE";
#endif
#ifdef  FIN 
   const unsigned char  TextString7[]=   "";
#endif   
/*****************************************************************************/ 
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString8[]=  "���-��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString8[]=  "IPT-AE";
#endif 
#ifdef  FIN 
   const unsigned char  TextString8[]=   "";
#endif  
/*****************************************************************************/ 
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString9[]=  "��-��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString9[]=   "MS-SA";
#endif
#ifdef  FIN 
   const unsigned char  TextString9[]=   "";
#endif   
/*****************************************************************************/ 
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString10[]=  "���-��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString10[]=   "MKP-SA";
#endif
#ifdef  FIN 
   const unsigned char  TextString10[]=   "";
#endif   
/*****************************************************************************/   
/*
����� ���������. �������� ��������� ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString11[]=  "�����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString11[]=   "norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString11[]=   "";
#endif     
/*****************************************************************************/ 
/*
����� ���������. �������� ��������� ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString12[]=  "�������������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString12[]=   "fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString12[]=   "";
#endif    
/*****************************************************************************/ 
/*
����� ���������. �������� ��������� ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString13[]=  "�������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString13[]=   "alarm";
#endif   
#ifdef  FIN 
   const unsigned char  TextString13[]=   "";
#endif 
/*****************************************************************************/ 
/*
������������ ���������.
*/
#ifdef  RUS 
   const unsigned char  TextString14[]=  "������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString14[]=   "countdown";
#endif 
#ifdef  FIN 
   const unsigned char  TextString14[] =   "";
#endif    
/*****************************************************************************/ 
/*
������������ ���� ���������
*/
#ifdef  RUS 
   const unsigned char  TextString15[]=  "���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString15[]=   "service";
#endif 
#ifdef  FIN 
   const unsigned char  TextString15[]=   "";
#endif    
/*****************************************************************************/ 
/*
����������� ���� ������� � ���� "������������ ������� � ���"(������� "����").
��� ��������� "����" ��������������� ������ ������� ������.
*/
#ifdef  RUS 
   const unsigned char  TextString16[]=  "����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString16[]=   "Activation";
#endif
#ifdef  FIN 
   const unsigned char  TextString16[]=   "";
#endif   
/*****************************************************************************/
/*
������������ ����
*/   
#ifdef  RUS 
   const unsigned char  TextString17[]=  "�������� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString17[]=   "MAIN SETTINGS";
#endif
#ifdef  FIN 
   const unsigned char  TextString17[] =   "";
#endif    
/*****************************************************************************/   
/*
������������ ����
*/   
#ifdef  RUS 
   const unsigned char  TextString18[]=  "����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString18[]=   "INFORMATION";
#endif 
#ifdef  FIN 
   const unsigned char  TextString3[] =   "";
#endif    
/*****************************************************************************/ 
/*
������������ ����
*/   
#ifdef  RUS 
   const unsigned char  TextString19[]=  "������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString19[]=   "ACCESS";
#endif 
#ifdef  FIN 
   const unsigned char  TextString19[] =   "";
#endif    
/*****************************************************************************/ 
/*
������������ ����
*/   
#ifdef  RUS 
   const unsigned char  TextString20[]=  "������ � �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString20[]=   "BLOCKS OF FLASH";
#endif 
#ifdef  FIN 
   const unsigned char  TextString20[] =   "";
#endif    
/*****************************************************************************/ 
/*
������������ ����
*/   
#ifdef  RUS 
   const unsigned char  TextString21[]=  "��������� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString21[]=   "TIME SETTING";
#endif 
#ifdef  FIN 
   const unsigned char  TextString21[] =   "";
#endif   
/*****************************************************************************/ 
/*
������������ ����
*/   
#ifdef  RUS 
   const unsigned char  TextString22[]=  "���� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString22[]=   "SETTINGS";
#endif 
#ifdef  FIN 
   const unsigned char  TextString22[] =   "";
#endif 
/*****************************************************************************/ 
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString23[]=  "������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString23[]=   "MASTER";
#endif
#ifdef  FIN 
   const unsigned char  TextString23[]=   "";
#endif    
/*****************************************************************************/ 
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString24[]=  "�������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString24[]=   "SLAVE";
#endif 
#ifdef  FIN 
   const unsigned char  TextString24[]=   "";
#endif 
/*****************************************************************************/ 
/*
������������ ����. ������ ���� �������� �������� ��������. ������� ��� ��� 
����������� ������� ������ ����� ���������� ����������� �����������.���������� 
- ���������� ����������; ������� ������������ ������� � �� �������. ��� �������� 
���������� ��������������� ������ �������
*/
#ifdef  RUS 
  const unsigned char   TextString25[]=  "����������.������� �������� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString25[]  =   "Control.Areas description table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString25[] =   "";
#endif       
/*****************************************************************************/
 /*

*/
#ifdef  RUS 
   const unsigned char  TextString26[]=  "���������� ����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString26[]=   "KEYBOARD LOCK";
#endif
#ifdef  FIN 
   const unsigned char  TextString26[] =   "";
#endif    
/*****************************************************************************/
/*

*/
#ifdef  RUS 
   const unsigned char  TextString27[]=  "��������� �����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString27[]=   "BACKUP";
#endif   
#ifdef  FIN 
   const unsigned char  TextString27[] =   "";
#endif    
/*****************************************************************************/
 /*

*/   
#ifdef  RUS 
   const unsigned char  TextString28[]=  "������� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString28[]=   "DEVICES TABLE";
#endif  
#ifdef  FIN 
   const unsigned char  TextString28[] =   "";
#endif    
/*****************************************************************************/
 /*

*/   

   
   
   
   
   
   
   
   
/*****************************************************************************/ 
 /*

*/   









   
/*****************************************************************************/
/*

*/  
#ifdef  RUS 
   const unsigned char  TextString31[]=  "������� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString31[]=   "ACTIVATIONS TABLE.  EXT. LINKS 2";
#endif 
#ifdef  FIN 
   const unsigned char  TextString31[] =   "";
#endif    
/*****************************************************************************/
/*

*/   
#ifdef  RUS 
   const unsigned char  TextString32[]=  "������� �������������� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString32[]=   "ACTUATORS TABLE";
#endif   
#ifdef  FIN 
   const unsigned char  TextString32[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString33[]=  "������� �������� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString33[]=   "ADDR. DESCRIPTIONS TABLE";
#endif   
#ifdef  FIN 
   const unsigned char  TextString33[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString34[]=   "������� �������� ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString34[]=   "ZONE DESCRIPTIONS TABLE";
#endif
#ifdef  FIN 
   const unsigned char  TextString34[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString35[]=   "����� �����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString35[]=   "POLL";
#endif
#ifdef  FIN 
   const unsigned char  TextString35[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString36[]=  "������� ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString36[]=   "AREAS ";
#endif
#ifdef  FIN 
   const unsigned char  TextString36[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString37[]=  "�������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString37[]=   "areas";
#endif 
#ifdef  FIN 
   const unsigned char  TextString37[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString38[]=  "����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString38[]=   "ZONES";
#endif  
#ifdef  FIN 
   const unsigned char  TextString38[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString39[]=  "������� ������ � ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString39[]=   "EXT. ADDRESSES WITH ZONES";
#endif 
#ifdef  FIN 
   const unsigned char  TextString39[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString40[]=  "���������� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString40[]=   "DELUGE ZONES";
#endif
#ifdef  FIN 
   const unsigned char  TextString40[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString41[]=  "";
#endif 
#ifdef  ENG 
   const unsigned char  TextString41[]=  "";
#endif 
#ifdef  FIN 
   const unsigned char  TextString41[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString42[]=  "������ ��������� �� �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString42[]=   "STARTING DELUGES ON ZONES";
#endif   
#ifdef  FIN 
   const unsigned char  TextString42[] =   "";
#endif       
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString43[]=  "������ ��������� �� �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString43[]=   "STARTING DELUGES ON ZONES";
#endif
#ifdef  FIN 
   const unsigned char  TextString43[] =   "";
#endif    
/*****************************************************************************/
/*
������������ �������. ������� ����������� ������������ � ��������� ��������� ��������� 
���������. 
*/
#ifdef  RUS 
   const unsigned char  TextString44[]=  "������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString44[]=   "other";
#endif
#ifdef  FIN 
   const unsigned char  TextString44[]=   "";
#endif   
/*****************************************************************************/
/*
������������ �������. ������� ����������� ������������ � ������������ �������
�������. 
*/
#ifdef  RUS 
   const unsigned char  TextString46[]=  "������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString46[]=   "fires";
#endif
#ifdef  FIN 
   const unsigned char  TextString46[]=   "";
#endif    
/*****************************************************************************/
/*
������������ �������. ������� ����������� ������������ � ������������ �������
������������� ���������. 
*/
#ifdef  RUS 
   const unsigned char  TextString47[]=  "�������������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString47[]=   "faults";
#endif
#endif
#ifdef  FIN 
   const unsigned char  TextString47[]=   "";
#endif    
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
   const unsigned char  TextString50[]=  "��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString50[]=   "Short-circuit";
#endif
#ifdef  FIN 
   const unsigned char  TextString50[]=   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString51[]=  "�����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString51[]=   "activations";
#endif 
#ifdef  FIN 
   const unsigned char  TextString51[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString52[]=  "����� ������� ������� ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString52[]=   "Event arriving time ";
#endif 
#ifdef  FIN 
   const unsigned char  TextString52[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString53[]=  "����� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString53[]=   "Event time";
#endif  
#ifdef  FIN 
   const unsigned char  TextString53[] =   "";
#endif    
/*****************************************************************************/
/*
������������ ����������� ��
*/
#ifdef  RUS 
   const unsigned char  TextString54[]=  "����� ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString54[]=   "ZONE NUMBER";
#endif
#ifdef  FIN 
   const unsigned char  TextString54[]=   "";
#endif   
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString55[]=  "����� ����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString55[]=   "device address";
#endif 
#ifdef  FIN 
   const unsigned char  TextString55[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString56[]=  "��� ����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString56[]=   "device type";
#endif 
#ifdef  FIN 
   const unsigned char  TextString56[] =   "";
#endif    
/*****************************************************************************/
/*
������������
*/
#ifdef  RUS 
   const unsigned char  TextString57[]=  "��� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString57[]=   "event type";
#endif   
#ifdef  FIN 
   const unsigned char  TextString57[]=   "";
#endif
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString58[]=  "ID ������������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString58[]=   "user ID";
#endif  
#ifdef  FIN 
   const unsigned char  TextString58[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString59[]=  "������ ���������� 1";
#endif 
#ifdef  ENG 
   const unsigned char  TextString59[]=   "information line 1";
#endif
#ifdef  FIN 
   const unsigned char  TextString59[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString60[]=  "������ ���������� 2";
#endif 
#ifdef  ENG 
   const unsigned char  TextString60[]=   "information line 2";
#endif  
#ifdef  FIN 
   const unsigned char  TextString60[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString61[]=  "������ �������������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString61[]=   "fault status";
#endif   
#ifdef  FIN 
   const unsigned char  TextString61[] =   "";
#endif    
/*****************************************************************************/
/*
������������ ����. ������ ���� ������������ ��� ����������� ��������� � �������.
*/
#ifdef  RUS 
   const unsigned char  TextString62[]=  "����� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString62[]=   "Event buffer";
#endif
#ifdef  FIN 
   const unsigned char  TextString62[] =   "";
#endif    
/*****************************************************************************/
/*
����� ���� ���������. 
*/
#ifdef  RUS 
  const unsigned char   TextString63[]=  " ��������� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString63[]  =   "reset procedure";
#endif   
#ifdef  FIN 
   const unsigned char  TextString63[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������. 
*/
#ifdef  RUS 
  const unsigned char   TextString64[]=  "- ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString64[]  =   "- cancel";
#endif   
#ifdef  FIN 
   const unsigned char  TextString64[] =   "";
#endif      
/*****************************************************************************/
/*
�������� ����������
*/
#ifdef  RUS 
   const unsigned char  TextString65[]=  "��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString65[]=   "AD";
#endif   
#ifdef  FIN 
   const unsigned char  TextString65[] =   "";
#endif 
/*****************************************************************************/
/*
����� ���� ���������. 
*/
#ifdef  RUS 
  const unsigned char   TextString66[]=  "��������� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString66[]  =   "Wait until finish";
#endif   
#ifdef  FIN 
   const unsigned char  TextString66[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ��� �������� ���������� ��������������� ������ �������.
*/
#ifdef  RUS 
   const unsigned char  TextString67[]=  "������ ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString67[]=   "Manual activation";
#endif
#ifdef  FIN 
   const unsigned char  TextString67[] =   "";
#endif    
/*****************************************************************************/
/*
������������ ������.
*/
#ifdef  RUS 
   const unsigned char  TextString68[]=  "- ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString68[]=   "- activation";
#endif 
#ifdef  FIN 
   const unsigned char  TextString68[] =   "";
#endif  
/*****************************************************************************/
/*
������������ ������.
*/
#ifdef  RUS 
   const unsigned char  TextString69[]=  "- ��������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString69[]=   "- add";
#endif
#ifdef  FIN 
   const unsigned char  TextString69[] =   "";
#endif   
/*****************************************************************************/
/*
������������ ������.
*/
#ifdef  RUS 
   const unsigned char  TextString70[]=  "- ������� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString70[]=   "- delete line";
#endif
#ifdef  FIN 
   const unsigned char  TextString70[] =   "";
#endif   
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString71[]=  "F2 - ����� / ����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString71[]=   "F2 - pause/continue";
#endif   
#ifdef  FIN 
   const unsigned char  TextString71[] =   "";
#endif    
/*****************************************************************************/
/*

*/    
#ifdef  RUS 
   const unsigned char  TextString72[]=  "F3 - ��������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString72[]=   "F3 - cancel";
#endif
#ifdef  FIN 
   const unsigned char  TextString72[] =   "";
#endif    
/*****************************************************************************/
/*
������������ ������. ������� �� ������ ��������� �������� ��������� ������
��������.
*/
#ifdef  RUS 
   const unsigned char  TextString74[]=  "- ��������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString74[]=   "- change";
#endif
#ifdef  FIN 
   const unsigned char  TextString74[] =   "";
#endif    
/*****************************************************************************/
/*
������������ ������. ������� �� ������ ��������� �������� ��������� ������
��������.
*/
#ifdef  RUS 
   const unsigned char  TextString75[]=  "- �������� ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString75[]=   "- change all";
#endif  
#ifdef  FIN 
   const unsigned char  TextString75[] =   "";
#endif   
/*****************************************************************************/    
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString76[]=  "���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString76[]  =   "condition";
#endif   
#ifdef  FIN 
   const unsigned char  TextString76[] =   "";
#endif
/*****************************************************************************/
/*
������������ � �������� ������ ����. ���� ��� ��� ����������� ������� ������ 
����������� ����� ������� ������� �����������.���������� - ���������� ����������; 
������� ������������ ������� � �� �������. ��� �������� ���������� ��������������� 
������ �������.
*/
#ifdef  RUS 
   const unsigned char  TextString77[]=  "����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString77[]=   "zone";
#endif
#ifdef  FIN 
   const unsigned char  TextString77[] =   "";
#endif    
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
   const unsigned char  TextString78[]=  "������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString78[]=   "timer";
#endif
#ifdef  FIN 
   const unsigned char  TextString78[] =   "";
#endif      
/*****************************************************************************/
/*
����� ���� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString79[]=  "   ��� ������������� ����� ������� ����\n       ��� ������ ��� ����� ������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString79[]  =   "for activation conformation press enter\n for exit without activation press Cancel";
#endif   
#ifdef  FIN 
   const unsigned char  TextString79[] =   "";
#endif   
/*****************************************************************************/
/*
��������� �����
*/
#ifdef  RUS 
  const unsigned char   TextString80[]=  "��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString80[]  =   "KL";
#endif   
#ifdef  FIN 
   const unsigned char  TextString80[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������. 
*/
#ifdef  RUS 
  const unsigned char   TextString81[]=  "������ �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString81[]  =   "address list";
#endif   
#ifdef  FIN 
   const unsigned char  TextString81[] =   "";
#endif  
/*****************************************************************************/
/*
������������ � �������� ������ ����������. 
*/  
#ifdef  RUS
   const unsigned char  TextString82[]=  "�����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString82[]=   "address";
#endif
#ifdef  FIN 
   const unsigned char  TextString82[] =   "";
#endif    
/*****************************************************************************/
/*
������������ ������ ����. ������������� �� ������ ������������ ����������
� �������.
*/
#ifdef  RUS
   const unsigned char  TextString83[]=  "���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString83[]=   "type";
#endif
#ifdef  FIN 
   const unsigned char  TextString83[] =   "";
#endif 
/*****************************************************************************/
/*
������������; ��� ������������.
*/
#ifdef  RUS
   const unsigned char  TextString84[]=  "�����-��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString84[]=   "USER";
#endif
#ifdef  FIN 
   const unsigned char  TextString84[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������ ����� ������������
*/
#ifdef  RUS
   const unsigned char  TextString85[]=  "ID";
#endif 
#ifdef  ENG 
   const unsigned char  TextString85[]=   "ID";
#endif
#ifdef  FIN 
   const unsigned char  TextString85[] =   "";
#endif 
/*****************************************************************************/
/*

*/   
#ifdef  RUS
   const unsigned char  TextString86[]=  "������������� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString86[]=   "address fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString86[] =   "";
#endif    
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString87[]=  "��������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString87[]=   "pre-alarm";
#endif
#ifdef  FIN 
   const unsigned char  TextString87[]=   "";
#endif
/*****************************************************************************/
/*

*/ 
#ifdef  RUS
   const unsigned char  TextString88[]=  "����� � ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString88[]=   "address in fire";
#endif
#ifdef  FIN 
   const unsigned char  TextString88[] =   "";
#endif    
/*****************************************************************************/
/*

*/ 
#ifdef  RUS
   const unsigned char  TextString89[]=  "�������� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString89[]=   "Short";
#endif
#ifdef  FIN 
   const unsigned char  TextString89[] =   "";
#endif    
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString90[]=  "������ ������� 7";
#endif 
#ifdef  ENG 
   const unsigned char  TextString90[]=   "table error";
#endif
#ifdef  FIN 
   const unsigned char  TextString90[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString91[]=  "��������� ������� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString91[]=   "external command";
#endif
#ifdef  FIN 
   const unsigned char  TextString91[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString92[]=  "�� ������� � �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString92[]=   "AD polling on";
#endif
#ifdef  FIN 
   const unsigned char  TextString92[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString93[]=  "���. �� ��������� �� � �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString93[]=   "address activation command";
#endif
#ifdef  FIN 
   const unsigned char  TextString93[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString94[]=  "�� �������� �� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString94[]=   "AD polling off";
#endif
#ifdef  FIN 
   const unsigned char  TextString94[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString95[]=  "���. �� ����. �� �� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString95[]=   "AD polling off command";
#endif
#ifdef  FIN 
   const unsigned char  TextString95[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString96[]=  "������ ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString96[]=   "sprinkler heating";
#endif
#ifdef  FIN 
   const unsigned char  TextString96[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString97[]=  "������ ��������� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString97[]=   "sprinkler heating is over";
#endif
#ifdef  FIN 
   const unsigned char  TextString97[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString98[]=  "�� ��������������� ��������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString98[]=   "Short-circuit of heating element";
#endif
#ifdef  FIN 
   const unsigned char  TextString98[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString99[]=  "������������� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString99[]=   "ionistor fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString99[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString100[]=  "������������� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString100[]=   "sensor fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString100[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString101[]=  "����� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString101[]=   "ionistor OK";
#endif
#ifdef  FIN 
   const unsigned char  TextString101[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString102[]=  "����� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString102[]=   "sensor OK";
#endif
#ifdef  FIN 
   const unsigned char  TextString102[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString103[]=  "���1";
#endif 
#ifdef  ENG 
   const unsigned char  TextString103[]=   "ISOL1";
#endif
#ifdef  FIN 
   const unsigned char  TextString103[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString104[]=  "���2";
#endif 
#ifdef  ENG 
   const unsigned char  TextString104[]=   "ISOL2";
#endif
#ifdef  FIN 
   const unsigned char  TextString104[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString105[]=  "���� ���1";
#endif 
#ifdef  ENG 
   const unsigned char  TextString105[]=   "ISOL1 norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString105[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString106[]=  "���� ���2";
#endif 
#ifdef  ENG 
   const unsigned char  TextString106[]=   "ISOL2 norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString106[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString107[]=  "���. �� ���-� ������ � ���.";
#endif 
#ifdef  ENG 
   const unsigned char  TextString107[]=   "add address to activ. list";
#endif
#ifdef  FIN 
   const unsigned char  TextString107[] =   "";
#endif
/*****************************************************************************/
/*

*/ 
#ifdef  RUS
   const unsigned char  TextString108[]=  "������ ����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString108[]=   "low voltage";
#endif
#ifdef  FIN 
   const unsigned char  TextString108[] =   "";
#endif    
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString109[]=  "������� �� ����. ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString109[]=   "manual activ. command";
#endif
#ifdef  FIN 
   const unsigned char  TextString109[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString110[]=  "������ �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString110[]=   "command sent";
#endif
#ifdef  FIN 
   const unsigned char  TextString110[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString111[]=  "����� � �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString111[]=   "ready for activ.";
#endif
#ifdef  FIN 
   const unsigned char  TextString111[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString112[]=  "������� 9";
#endif 
#ifdef  ENG 
   const unsigned char  TextString112[]=   "event 9";
#endif
#ifdef  FIN 
   const unsigned char  TextString112[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString113[]=  "������� 10";
#endif 
#ifdef  ENG 
   const unsigned char  TextString113[]=   "event 10";
#endif
#ifdef  FIN 
   const unsigned char  TextString113[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString114[]=  "������� 11";
#endif 
#ifdef  ENG 
   const unsigned char  TextString114[]=   "event 11";
#endif
#ifdef  FIN 
   const unsigned char  TextString114[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString115[]=  "������� 12";
#endif 
#ifdef  ENG 
   const unsigned char  TextString115[]=   "event 12";
#endif
#ifdef  FIN 
   const unsigned char  TextString115[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString116[]=  "��� ����� �� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString116[]=   "no activ";
#endif
#ifdef  FIN 
   const unsigned char  TextString116[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString117[]=  "����� �����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString117[]=   "no address";
#endif
#ifdef  FIN 
   const unsigned char  TextString117[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString118[]=  "������ ����� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString118[]=   "no KL connection";
#endif
#ifdef  FIN 
   const unsigned char  TextString118[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString119[]=  "�������������� ����� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString119[]=   "KL connection norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString119[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString120[]=  "������ ������������� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString120[]=   "KL initialization error";
#endif
#ifdef  FIN 
   const unsigned char  TextString120[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString121[]=  "������������� �� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString121[]=   "KL initialization complete";
#endif
#ifdef  FIN 
   const unsigned char  TextString121[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString122[]=  "������ ������� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString122[]=   "KL tamper active";
#endif
#ifdef  FIN 
   const unsigned char  TextString122[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString123[]=  "������ ������� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString123[]=   "KL tamper norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString123[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString124[]=  "�� �������� �� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString124[]=   "KL polling off";
#endif
#ifdef  FIN 
   const unsigned char  TextString124[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString125[]=  "�� ������� � �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString125[]=   "Kl polling on";
#endif
#ifdef  FIN 
   const unsigned char  TextString125[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString126[]=  "�� � �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString126[]=   "Short-circuit in line";
#endif
#ifdef  FIN 
   const unsigned char  TextString126[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString127[]=  "������������ �� � �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString127[]=   "KL line norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString127[] =   "";
#endif
/*****************************************************************************/   
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString128[]=  "������������ �� � �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString128[]=   "KL line norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString128[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString129[]=  "���. �� ���. �� � �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString129[]=   "KL polling on command";
#endif
#ifdef  FIN 
   const unsigned char  TextString129[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString130[]=  "���. �� ����. �� �� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString130[]=   "command to turn off KL";
#endif
#ifdef  FIN 
   const unsigned char  TextString130[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString131[]=  "������� �� ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString131[]=   "on battery";
#endif
#ifdef  FIN 
   const unsigned char  TextString131[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString132[]=  "������� �� ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString132[]=   "on mains";
#endif
#ifdef  FIN 
   const unsigned char  TextString132[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString133[]=  "���� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString133[]=   "addressing fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString133[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString134[]=  "��������� �������������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString134[]=   "addressing restored";
#endif
#ifdef  FIN 
   const unsigned char  TextString134[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString135[]=  "����� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString135[]=   "line is opened";
#endif
#ifdef  FIN 
   const unsigned char  TextString135[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString136[]=  "����� ������ ��������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString136[]=   "line norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString136[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString137[]=  "������������� �� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString137[]=   "KL reserve fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString137[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString138[]=  "������������� �� �� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString138[]=   "KL reserve norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString138[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString139[]=  "������ �������� ���.";
#endif 
#ifdef  ENG 
   const unsigned char  TextString139[]=   "command transfer fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString139[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString140[]=  "������ �������� ���. ����.";
#endif 
#ifdef  ENG 
   const unsigned char  TextString140[]=   "command transfer norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString140[] =   "";
#endif
/*****************************************************************************/
/*

*/   
#ifdef  RUS
   const unsigned char  TextString141[]=  "������ ������������� ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString141[]=   "BKU initialization error";
#endif
#ifdef  FIN 
   const unsigned char  TextString141[] =   "";
#endif   
/*****************************************************************************/
/*

*/   
#ifdef  RUS
   const unsigned char  TextString142[]=  "������ ����� � ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString142[]=   "no BKU connection";
#endif
#ifdef  FIN 
   const unsigned char  TextString142[] =   "";
#endif  
/*****************************************************************************/
/*

*/   
#ifdef  RUS
   const unsigned char  TextString143[]=  "����� � ��� �������������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString143[]=   "BKU connection norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString143[] =   "";
#endif   
/*****************************************************************************/
/*

*/   
#ifdef  RUS
   const unsigned char  TextString144[]=  "��� �������� �� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString144[]=   "BKU polling off";
#endif
#ifdef  FIN 
   const unsigned char  TextString144[] =   "";
#endif   
/*****************************************************************************/
/*
������������ ���������.
*/   
#ifdef  RUS
   const unsigned char  TextString145[]=  "��� ������� � �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString145[]=   "BKU polling on";
#endif
#ifdef  FIN 
   const unsigned char  TextString145[] =   "";
#endif   
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString146[]=  "�RC-������ ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString146[]=   "event log �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString146[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString147[]=  "�RC-������ ���.1";
#endif 
#ifdef  ENG 
   const unsigned char  TextString147[]=   "tab.1 �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString147[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString148[]=  "�RC-������ ���.2";
#endif 
#ifdef  ENG 
   const unsigned char  TextString148[]=   "tab.2 �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString148[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString149[]=  "�RC-������ ���.3";
#endif 
#ifdef  ENG 
   const unsigned char  TextString149[]=   "tab.3 �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString149[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString150[]=  "�RC-������ ���.4";
#endif 
#ifdef  ENG 
   const unsigned char  TextString150[]=   "tab.4 �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString150[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString151[]=  "�RC-������ ���.5";
#endif 
#ifdef  ENG 
   const unsigned char  TextString151[]=   "tab.5 �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString151[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString152[]=  "�RC-������ ���.6";
#endif 
#ifdef  ENG 
   const unsigned char  TextString152[]=   "tab.6 �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString152[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString153[]=  "�RC-������ ���.7";
#endif 
#ifdef  ENG 
   const unsigned char  TextString153[]=   "tab.7 �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString153[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString154[]=  "�RC-������ ���.8";
#endif 
#ifdef  ENG 
   const unsigned char  TextString154[]=   "tab.8 �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString154[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString155[]=  "�RC-������ ���.9";
#endif 
#ifdef  ENG 
   const unsigned char  TextString155[]=   "tab.9 �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString155[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString156[]=  "�RC-������ ���.10";
#endif 
#ifdef  ENG 
   const unsigned char  TextString156[]=   "tab.10 �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString156[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString157[]=  "�RC-������ ���.11";
#endif 
#ifdef  ENG 
   const unsigned char  TextString157[]=   "tab.11 �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString157[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString158[]=  "�RC-������ ���.12";
#endif 
#ifdef  ENG 
   const unsigned char  TextString158[]=   "tab.12 �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString158[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString159[]=  "�RC-������ ���.13";
#endif 
#ifdef  ENG 
   const unsigned char  TextString159[]=   "tab.13 �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString159[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString160[]=  "�RC-������ ���.14";
#endif 
#ifdef  ENG 
   const unsigned char  TextString160[]=   "tab.14 �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString160[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString161[]=  "�RC-������ ����.���.";
#endif 
#ifdef  ENG 
   const unsigned char  TextString161[]=   "system tab. �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString161[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString162[]=  "��������� ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString162[]=   "BKU turning-on";
#endif
#ifdef  FIN 
   const unsigned char  TextString162[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString163[]=  "���. �� ���-� �������� � ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString163[]=   "BKU update firmware command";
#endif
#ifdef  FIN 
   const unsigned char  TextString163[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString164[]=  "���. �� ��������� ��� � �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString164[]=   "BKU polling on command";
#endif
#ifdef  FIN 
   const unsigned char  TextString164[] =   "";
#endif
/*****************************************************************************/   
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString165[]=  "���. �� ����. ��� �� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString165[]=   "BKU polling off command";
#endif
#ifdef  FIN 
   const unsigned char  TextString165[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString166[]=  "������ ������ ������ RF ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString166[]=   "RF card �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString166[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString167[]=  "������. ROM ������ ����-��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString167[]=   "Processor ROM fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString167[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString168[]=  "��������� ���-�� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString168[]=   "no program backup";
#endif
#ifdef  FIN 
   const unsigned char  TextString168[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString169[]=  "������������� �� ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString169[]=   "BKU mains fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString169[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString170[]=  "������������� �� ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString170[]=   "BKU reserve fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString170[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString171[]=  "����� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString171[]=   "mains norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString171[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString172[]=  "����� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString172[]=   "reserve norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString172[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString173[]=  "����� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString173[]=   "reserve norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString173[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString174[]=  "�������� ������� ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString174[]=   "BKU tamper is opened";
#endif
#ifdef  FIN 
   const unsigned char  TextString174[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString175[]=  "������ ��� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString175[]=   "BKU tamper is closed";
#endif
#ifdef  FIN 
   const unsigned char  TextString175[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString176[]=  "������������� ����-��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString176[]=   "keyboard fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString176[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString177[]=  "���������� ��������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString177[]=   "keyboard norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString177[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString178[]=  "�������������� ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString178[]=   "forced activation";
#endif
#ifdef  FIN 
   const unsigned char  TextString178[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString179[]=  "��������� �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString179[]=   "enabling test";
#endif
#ifdef  FIN 
   const unsigned char  TextString179[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString180[]=  "����������� ������ �� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString180[]=   "tables copying";
#endif
#ifdef  FIN 
   const unsigned char  TextString180[] =   "";
#endif
/*****************************************************************************/
/*
������������; ��� ������������.
*/
#ifdef  RUS
   const unsigned char  TextString181[]=  "�������������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString181[]=   "admin";
#endif
#ifdef  FIN 
   const unsigned char  TextString181[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������
*/
#ifdef  RUS
   const unsigned char  TextString182[]=  "����� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString182[]=   "card is added";
#endif
#ifdef  FIN 
   const unsigned char  TextString182[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������
*/
#ifdef  RUS
   const unsigned char  TextString183[]=  "���. �� ���������� �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString183[]=   "add card command";
#endif
#ifdef  FIN 
   const unsigned char  TextString183[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������
*/
#ifdef  RUS
   const unsigned char  TextString184[]=  "����� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString184[]=   "card deleted";
#endif
#ifdef  FIN 
   const unsigned char  TextString184[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������
*/
#ifdef  RUS
   const unsigned char  TextString185[]=  "���. �� �������� �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString185[]=   "delete card command";
#endif
#ifdef  FIN 
   const unsigned char  TextString185[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������
*/
#ifdef  RUS
   const unsigned char  TextString186[]=  "��� ����� ��� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString186[]=   "card type changed";
#endif
#ifdef  FIN 
   const unsigned char  TextString186[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������
*/
#ifdef  RUS
   const unsigned char  TextString187[]=  "���. �� ��������� ���� ���-��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString187[]=   "change user type command";
#endif
#ifdef  FIN 
   const unsigned char  TextString187[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString188[]=  "����� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString188[]=   "loop is opened";
#endif
#ifdef  FIN 
   const unsigned char  TextString188[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString189[]=  "�������������� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString189[]=   "loop restored";
#endif
#ifdef  FIN 
   const unsigned char  TextString189[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString190[]=  "������ �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString190[]=   "delay start";
#endif
#ifdef  FIN 
   const unsigned char  TextString190[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������
*/
#ifdef  RUS
   const unsigned char  TextString191[]=  "�����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString191[]=   "pause";
#endif
#ifdef  FIN 
   const unsigned char  TextString191[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString192[]=  "����������� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString192[]=   "restoring delay count";
#endif
#ifdef  FIN 
   const unsigned char  TextString192[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString193[]=  "������ �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString193[]=   "delay canceled";
#endif
#ifdef  FIN 
   const unsigned char  TextString193[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString194[]=  "������ �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString194[]=   "delay canceled";
#endif
#ifdef  FIN 
   const unsigned char  TextString194[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString195[]=  "�������������� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString195[]=   "forced zeroing";
#endif
#ifdef  FIN 
   const unsigned char  TextString195[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString196[]=  "���-�� ������� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString196[]=   "delay time adjustment";
#endif
#ifdef  FIN 
   const unsigned char  TextString196[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString197[]=  "����� ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString197[]=   "BKU reset";
#endif
#ifdef  FIN 
   const unsigned char  TextString197[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString198[]=  "������� �� ����� ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString198[]=   "BKU reset command";
#endif
#ifdef  FIN 
   const unsigned char  TextString198[] =   "";
#endif  
/*****************************************************************************/
/*
����� ���� ���������. 
*/
#ifdef  RUS 
  const unsigned char   TextString199[]=  "��� ������������� ����� ������� ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString199[]  =   "For activation conformation press enter";
#endif   
#ifdef  FIN 
   const unsigned char  TextString199[] =   "";
#endif
/*****************************************************************************/
/*
����� ���� ���������. 
*/
#ifdef  RUS 
  const unsigned char   TextString200[]=  "��� ������ ��� ����� ������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString200[]  =   "for exit without activation press Cancel";
#endif   
#ifdef  FIN 
   const unsigned char  TextString200[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� �������� �������� ��������. ���� ��� ��� 
����������� ������� ������ ����� �������� �� ������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString201[]=  "����������.������� �������� ���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString201[]  =   "Control.zone description table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString201[] =   "";
#endif
   
/*****************************************************************************/
/*
��������� ��������� ����.
*/
#ifdef  RUS
   const unsigned char  TextString202[]=  "���������� ���.";
#endif 
#ifdef  ENG 
   const unsigned char  TextString202[]=   "automation ON";
#endif
#ifdef  FIN 
   const unsigned char  TextString202[] =   "";
#endif
/*****************************************************************************/
/*
��������� ��������� ����.
*/
#ifdef  RUS
   const unsigned char  TextString203[]=  "���������� ����.";
#endif 
#ifdef  ENG 
   const unsigned char  TextString203[]=   "automation OFF";
#endif
#ifdef  FIN 
   const unsigned char  TextString203[] =   "";
#endif
/*****************************************************************************/
/*
��������� ��������� ����.
*/
#ifdef  RUS
   const unsigned char  TextString204[]=  "������ ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString204[]=   "activ. banned";
#endif
#ifdef  FIN 
   const unsigned char  TextString204[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� �������� �������� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString205[]=  "����������.������� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString205[]  =   "Control.deluge table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString205[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString206[]=  "�������� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString206[]=   "firmware accepted";
#endif
#ifdef  FIN 
   const unsigned char  TextString206[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString207[]=  "���������� ��������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString207[]=   "firmware update";
#endif
#ifdef  FIN 
   const unsigned char  TextString207[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString208[]=  "����.����� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString208[]=  "config. mode ON";
#endif
#ifdef  FIN 
   const unsigned char  TextString208[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString209[]=  "����.����� ��������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString209[]=  "config. mode OFF";
#endif
#ifdef  FIN 
   const unsigned char  TextString209[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString210[]=  "���. �� ���. ����.������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString210[]=  "config. mode ON command";
#endif
#ifdef  FIN 
   const unsigned char  TextString210[] =   "";
#endif   
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString211[]=  "���. �� ����. ����.������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString211[]=  "config. mode OFF command";
#endif
 #ifdef  FIN 
   const unsigned char  TextString211[] =   "";
#endif    
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString212[]=  "������� ������ �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString212[]= "start delay command";
#endif
#ifdef  FIN 
   const unsigned char  TextString212[] =   "";
#endif     
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString213[]=  "������� �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString213[]=  "pause command";
#endif
#ifdef  FIN 
   const unsigned char  TextString213[] =   "";
#endif 
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString214[]=  "������� ����������� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString214[]=  "restoring delay count command";
#endif
#ifdef  FIN 
   const unsigned char  TextString214[] =   "";
#endif 
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString215[]=  "������� ������ �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString215[]=  "cancel timer command";
#endif
#ifdef  FIN 
   const unsigned char  TextString215[] =   "";
#endif   
/*****************************************************************************/
/*

*/ 
#ifdef  RUS
   const unsigned char  TextString216[]=  "������� ������. ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString216[]=  "forced zeroing command";
#endif
#ifdef  FIN 
   const unsigned char  TextString216[] =   "";
#endif   
/*****************************************************************************/
/*

*/ 
#ifdef  RUS
   const unsigned char  TextString217[]=  "����� 1 � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString217[]=  "fire in zone";
#endif
#ifdef  FIN 
   const unsigned char  TextString217[] =   "";
#endif
/*****************************************************************************/
/*

*/ 
#ifdef  RUS
   const unsigned char  TextString218[]=  "����� 2 � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString218[]=  "coinc. in zone";
#endif
   #ifdef  FIN 
   const unsigned char  TextString218[] =   "";
#endif
/*****************************************************************************/
/*

*/ 
#ifdef  RUS
   const unsigned char  TextString219[]=  "����-�� �������� � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString219[]=  "delay reduction in zone";
#endif
#ifdef  FIN 
   const unsigned char  TextString219[] =   "";
#endif   
/*****************************************************************************/
/*

*/ 
#ifdef  RUS
   const unsigned char  TextString220[]=  "���. �� ���. �����1 � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString220[]=  "fire in zone command";
#endif
#ifdef  FIN 
   const unsigned char  TextString220[] =   "";
#endif    
/*****************************************************************************/
/*

*/ 
#ifdef  RUS
   const unsigned char  TextString221[]=  "���. �� ���. �����2 � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString221[]=  "coinc. in zone command";
#endif
#ifdef  FIN 
   const unsigned char  TextString221[] =   "";
#endif  
/*****************************************************************************/
/*

*/ 
#ifdef  RUS
   const unsigned char  TextString222[]=  "������� �� ��������. ���-��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString222[]=  "decreasing delay command";
#endif
#ifdef  FIN 
   const unsigned char  TextString222[] =   "";
#endif   
/*****************************************************************************/
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString223[]="����� ������� �������:\n����� �������:\n����� ����:";
#endif 
#ifdef  ENG 
  const unsigned char   TextString223[]  =   "event arriving time:\nevent time:\nzone number:" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString223[] =   "";
#endif  
/*****************************************************************************/    
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString224[]="- ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString224[]  =   "activate" ;
#endif 
#ifdef  FIN 
   const unsigned char  TextString224[] =   "";
#endif  
/*****************************************************************************/ 
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString225[]="   ����� \n ����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString225[]  =   "pause \n continue" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString225[] =   "";
#endif   
/*****************************************************************************/ 
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString226[]="- ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString226[]  =   "cancel" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString226[] =   "";
#endif  
/*****************************************************************************/ 
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString227[]="����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString227[]  =   "Install" ;
#endif 
#ifdef  FIN 
   const unsigned char  TextString227[] =   "";
#endif  
/*****************************************************************************/ 
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString228[]="����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString228[]  =   "hour" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString228[] =   "";
#endif  
/*****************************************************************************/ 
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString229[]="������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString229[]  =   "minutes" ;
#endif 
#ifdef  FIN 
   const unsigned char  TextString229[] =   "";
#endif  
/*****************************************************************************/ 
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString230[]="�������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString230[]  =   "seconds" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString230[] =   "";
#endif  
/*****************************************************************************/ 
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString231[]="���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString231[]  =   "year" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString231[] =   "";
#endif  
/*****************************************************************************/ 
/*
������������ ������
*/
#ifdef  RUS 
  const unsigned char   TextString232[]="�����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString232[]  =   "month";
#endif
#ifdef  FIN 
   const unsigned char  TextString232[] =   "";
#endif    
/*****************************************************************************/ 
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString233[]="����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString233[]  =   "day" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString233[] =   "";
#endif   
/*****************************************************************************/     
/*
������������ ���� ���������
*/
#ifdef  RUS 
  const unsigned char   TextString234[]="���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString234[]  =   "message" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString234[] =   "";
#endif   
/*****************************************************************************/   
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString235[]="�������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString235[]  =   "Success";
#endif
#ifdef  FIN 
   const unsigned char  TextString235[] =   "";
#endif   
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString236[]="�������� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString236[]  =   "Operation completed" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString236[] =   "";
#endif     
/*****************************************************************************/
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString237[]="�������� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString237[]  =   "FIRMWARE MONITORING" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString217[] =   "";
#endif  
/*****************************************************************************/
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString238[]="����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString238[]  =   "STATISTICS" ;
#endif  
#ifdef  FIN 
   const unsigned char  TextString238[] =   "";
#endif  
/*****************************************************************************/
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString239[]="���������� ������� ������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString239[]  =   "Configuration mode control" ;
#endif 
#ifdef  FIN 
   const unsigned char  TextString239[] =   "";
#endif  
/*****************************************************************************/
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString240[]="����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString240[]  =   "Control" ;
#endif 
#ifdef  FIN 
   const unsigned char  TextString240[] =   "";
#endif  
/*****************************************************************************/
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString241[]="������� ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString241[]  =   "Main menu" ;
#endif 
#ifdef  FIN 
   const unsigned char  TextString251[] =   "";
#endif  
/*****************************************************************************/
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString242[]="��������� � �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString242[]  =   "Save and exit" ;
#endif 
#ifdef  FIN 
   const unsigned char  TextString242[] =   "";
#endif  
/*****************************************************************************/
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString243[]="��������� . �������� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString243[]  =   "Settings.Main settings" ;
#endif   
#ifdef  FIN 
   const unsigned char  TextString243[] =   "";
#endif  
/*****************************************************************************/
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString244[]="���� � �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString244[]  =   "One in system" ;
#endif  
#ifdef  FIN 
   const unsigned char  TextString244[] =   "";
#endif  
/*****************************************************************************/
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString245[]="���������������� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString245[]  =   "CONFIGURATION MODE" ;
#endif 
#ifdef  FIN 
   const unsigned char  TextString245[] =   "";
#endif  
/*****************************************************************************/
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString246[]=  "���������.������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString246[]  =   "Settings.Access" ;
#endif 
#ifdef  FIN 
   const unsigned char  TextString246[] =   "";
#endif  
/*****************************************************************************/
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString247[]=  "- ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString247[]  =   "change" ;
#endif 
#ifdef  FIN 
   const unsigned char  TextString247[] =   "";
#endif  
/*****************************************************************************/
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString248[]=  "- ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString248[]  =   "add" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString248[] =   "";
#endif  
/*****************************************************************************/
/*
������������ ������
*/
#ifdef  RUS 
  const unsigned char   TextString249[]=  "- �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString249[]  =   "delete" ;
#endif 
#ifdef  FIN 
   const unsigned char  TextString249[] =   "";
#endif  
/*****************************************************************************/  
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString250[]=  "�������� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString250[]  =   "waiting for card" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString250[] =   "";
#endif  
/*****************************************************************************/  
/*
������������ �������. � ������ ������� ������������  ���������� �����. 
*/
#ifdef  RUS 
  const unsigned char   TextString251[]=  "� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString251[]  =   "card number" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString251[]  =   "";
#endif    
/*****************************************************************************/   
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString252[]=  "�������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString252[]  =   "level" ;
#endif  
#ifdef  FIN 
   const unsigned char  TextString252[] =   "";
#endif  
/*****************************************************************************/   
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString253[]=  "� ������ ������� �������������� ������� �� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString253[]  =   "Access edition in slave mode is not available" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString253[] =   "";
#endif  
/*****************************************************************************/  
/*
����� ��������� �� ��������������� ������. ��������� ����������� ������������ � ������� 
������������� ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString254[]=  "����������; ��������� �����\n� �����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString254[]  =   "please badge card/n\to reader";
#endif
#ifdef  FIN 
   const unsigned char  TextString254[]  =   "";
#endif    
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString255[]=  "�������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString255[]  =   "countdowns";
#endif
#ifdef  FIN 
   const unsigned char  TextString255[]  =   "";
#endif     
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString256[]=   "���/���� ��� �� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString256[]  =   "BKU polling on/off";
#endif
#ifdef  FIN 
   const unsigned char  TextString256[]  =   "";
#endif   
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString257[]=   "����� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString257[]  =   "address switched off";
#endif
#ifdef  FIN 
   const unsigned char  TextString257[]  =   "";
#endif 
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString258[]=   "    ����� ���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString258[]  =   "address is added";
#endif
#ifdef  FIN 
   const unsigned char  TextString258[]  =   "";
#endif  
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString259[]=   "�� ��� ���������!";
#endif 
#ifdef  ENG 
  const unsigned char   TextString259[]  =   "AD is already added!";
#endif
#ifdef  FIN 
   const unsigned char  TextString259[]  =   "";
#endif    
/*****************************************************************************/ 
/*
����� ��������� � ��������� �� ��������������� ������. ��������� ����������� ������������ � ���;
���������� �������������.
*/
#ifdef  RUS 
  const unsigned char   TextString260[]=  "����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString260[]  =   "BLOCK" ;
#endif   
#ifdef  FIN 
   const unsigned char  TextString260[] =   "";
#endif    
/*****************************************************************************/ 
/*
����� ��������� �� �������������� ������. �������� ����������� ������������ � ���;
��� ����� ������� ���� ���������; � ����������� �������������� ���������� ������������ 
������ �� ��������.
*/
#ifdef  RUS 
  const unsigned char   TextString261[]=  "ID ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString261[]  =   "ID is switched-off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString261[] =   "";
#endif    
/*****************************************************************************/ 
/*
����� ��������� �� �������������� ������. �������� ����������� ������������ � ���;
��� ����� ������� �� ���� ���������; � ����������� �������������� ���������� ������������ 
�� ��������.
*/
#ifdef  RUS 
  const unsigned char   TextString262[]=  "����������� ID";
#endif 
#ifdef  ENG 
  const unsigned char   TextString262[]  =   "UNKNOWN ID";
#endif   
#ifdef  FIN 
   const unsigned char  TextString262[] =   "";
#endif    
/*****************************************************************************/ 
/*
����� ��������� �� ������. �������� ����������� ������������ � ���;
��� ������� ������� �� ���������� ��� �������� � ����.
*/
#ifdef  RUS 
  const unsigned char   TextString263[]=  "��� ���� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString263[]  =   "No access";
#endif   
#ifdef  FIN 
   const unsigned char  TextString263[] =   "";
#endif    
/*****************************************************************************/ 
/*
����� ��������� �� ������. �������� ����������� ������������ � ���;
��� ������� ������� �� ���������� ��� ��������� ������ ������� ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString264[]=  "������ �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString264[]  =   "Access error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString264[] =   "";
#endif    
/*****************************************************************************/ 
/*
�������� ������
*/
#ifdef  RUS 
  const unsigned char   TextString265[]=  "OK";
#endif 
#ifdef  ENG 
  const unsigned char   TextString265[]  =   "OK";
#endif   
#ifdef  FIN 
   const unsigned char  TextString265[] =   "";
#endif    
/*****************************************************************************/ 
/*

*/
#ifdef  RUS 
  const unsigned char   TextString266[]=  "";
#endif 
#ifdef  ENG 
  const unsigned char   TextString266[]  =   "";
#endif   
#ifdef  FIN 
   const unsigned char  TextString266[] =   "";
#endif    
/*****************************************************************************/
/*
������������ ����. ���� ��������� ������������ ������������ ��� ��������� �������
����������� �� ���������� � ������������ �����������.
*/
#ifdef  RUS 
  const unsigned char   TextString267[]=  "������������� ������ � ���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString267[]  =   "Confirmation of PC commands";
#endif   
#ifdef  FIN 
   const unsigned char  TextString267[] =   "";
#endif    
/*****************************************************************************/     
/*
������������ ������. �� ������� �������������� ��� ������� ����������� �� 
���������� � ������������ �����������.
*/
#ifdef  RUS 
  const unsigned char   TextString268[]=  " - ����������� ���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString268[]  =   " - confirm everything";
#endif   
#ifdef  FIN 
   const unsigned char  TextString268[] =   "";
#endif    
/*****************************************************************************/   
/*
������������ ������� ����������� �������; ����������� � ������������ �����������.
������ ��� �������� ������� �� ���������� ��������� ��������� � �����.
*/
#ifdef  RUS 
  const unsigned char   TextString269[]=  "���. ����.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString269[]  =   "DEV. ON";
#endif   
#ifdef  FIN 
   const unsigned char  TextString269[] =   "";
#endif    
/*****************************************************************************/   
/*
������������ ������� ����������� �������; ����������� � ������������ �����������.
������ ��� �������� ������� �� ���������� ���������� ��������� � �����.
*/
#ifdef  RUS 
  const unsigned char   TextString270[]=  "����. ����.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString270[]  =   "DEV. OFF";
#endif   
#ifdef  FIN 
   const unsigned char  TextString270[] =   "";
#endif    
/*****************************************************************************/ 
/*
������������ ������; ������������ ��� ������ ���� ������ ����������� � 
����������� �����������.
*/
#ifdef  RUS 
  const unsigned char   TextString271[]=  "- �������� ���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString271[]  =   "- cancel everything";
#endif  
#ifdef  FIN 
   const unsigned char  TextString271[] =   "";
#endif    
/*****************************************************************************/ 
/*
������������ �������. � ������ ������� ������������  ����� ���������� ����������� 
�����������.���������� - ���������� ����������; ������� ������������ ������� � 
�� �������. ��� �������� ���������� ��������������� ������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString272[]=  "����. ���.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString272[]  =   "max quantity";
#endif  
#ifdef  FIN 
   const unsigned char  TextString272[] =   "";
#endif    
/*****************************************************************************/ 
/*
������������ �������; � ������� ���������� ������� ���������; ��� � ������.
*/
#ifdef  RUS 
  const unsigned char   TextString273[]=  "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString273[]  =   "description";
#endif  
#ifdef  FIN 
   const unsigned char  TextString273[] =   "";
#endif    
/*****************************************************************************/ 
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString274[]=  "������ ������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString274[]  =   "EVENT LOG FILTER";
#endif   
#ifdef  FIN 
   const unsigned char  TextString274[] =   "";
#endif    
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString275[]=  "������ �� ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString275[]  =   "DATE FILTER";
#endif   
#ifdef  FIN 
   const unsigned char  TextString275[] =   "";
#endif    
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString276[]=  "������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString276[]  =   "JANUARY";
#endif   
#ifdef  FIN 
   const unsigned char  TextString276[] =   "";
#endif    
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString277[]=  "�������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString277[]  =   "FEBRUARY";
#endif   
#ifdef  FIN 
   const unsigned char  TextString277[] =   "";
#endif    
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString278[]=  "����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString278[]  =   "MARCH";
#endif   
#ifdef  FIN 
   const unsigned char  TextString278[] =   "";
#endif    
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString279[]=  "������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString279[]  =   "APRIL";
#endif   
#ifdef  FIN 
   const unsigned char  TextString279[] =   "";
#endif    
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString280[]=  "���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString280[]  =   "MAY";
#endif   
#ifdef  FIN 
   const unsigned char  TextString280[] =   "";
#endif    
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString281[]=  "����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString281[]  =   "JUNE";
#endif   
#ifdef  FIN 
   const unsigned char  TextString281[] =   "";
#endif    
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString282[]=  "����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString282[]  =   "JULY";
#endif   
#ifdef  FIN 
   const unsigned char  TextString282[] =   "";
#endif    
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString283[]=  "������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString283[]  =   "AUGUST";
#endif   
#ifdef  FIN 
   const unsigned char  TextString283[] =   "";
#endif    
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString284[]=  "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString284[]  =   "SEPTEMBER";
#endif   
#ifdef  FIN 
   const unsigned char  TextString284[] =   "";
#endif    
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString285[]=  "�������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString285[]  =   "OCTOBER";
#endif   
#ifdef  FIN 
   const unsigned char  TextString285[] =   "";
#endif    
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString286[]=  "������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString286[]  =   "NOVEMBER";
#endif   
#ifdef  FIN 
   const unsigned char  TextString286[] =   "";
#endif    
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString287[]=  "�������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString287[]  =   "DECEMBER";
#endif   
#ifdef  FIN 
   const unsigned char  TextString287[] =   "";
#endif    
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString288[]=  "����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString288[]  =   "date";
#endif   
#ifdef  FIN 
   const unsigned char  TextString288[] =   "";
#endif    
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString289[]=  "����� �� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString289[]  =   "ADDRESS SEARCH";
#endif   
#ifdef  FIN 
   const unsigned char  TextString289[] =   "";
#endif    
  
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString291[]=  "�������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString291[]  =   "ACTIVATIONS";
#endif   
#ifdef  FIN 
   const unsigned char  TextString291[] =   "";
#endif     
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString293[]=  "������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString293[]  =   "FIRES";
#endif
#ifdef  FIN 
   const unsigned char  TextString293[] =   "";
#endif    
/*****************************************************************************/
/*
???
*/
#ifdef  RUS 
  const unsigned char   TextString294[]=  "�������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString294[]  =   "FAULTS";
#endif  
#ifdef  FIN 
   const unsigned char  TextString294[] =   "";
#endif    
/*****************************************************************************/
/*
������������ ����. � ����� ���� ���������� ������ ��� ���������; ����������� � 
�������.
*/
#ifdef  RUS 
  const unsigned char   TextString295[]=  "������ �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString295[]  =   "Event log";
#endif  
#ifdef  FIN 
   const unsigned char  TextString295[] =   "";
#endif    
/*****************************************************************************/
/*
������������ ����. � ����� ���� ���������� ������ ��� ���������; ����������� � 
�������.
*/
#ifdef  RUS 
  const unsigned char   TextString296[]=  "�����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString296[]  =   "time";
#endif  
#ifdef  FIN 
   const unsigned char  TextString296[] =   "";
#endif    
/*****************************************************************************/
/*
������������ ������ ����. ������������� �� ������ ������������ ������� � 
��������� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString297[]=  "��.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString297[]  =   "see";
#endif  
#ifdef  FIN 
   const unsigned char  TextString297[] =   "";
#endif    
/*****************************************************************************/
/*
������������ ������ ����. ������������� �� ������ ������������ ������� � 
��������� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString298[]=  "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString298[]  =   "Actuation";
#endif  
#ifdef  FIN 
   const unsigned char  TextString298[] =   "";
#endif    
/*****************************************************************************/
/*
������������ ���������. ��� �������� ���������������; ������ ������� �� ������ ������� ������.
*/
#ifdef  RUS 
  const unsigned char   TextString299[]=  "������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString299[]  =   "Countdown";
#endif   
#ifdef  FIN 
   const unsigned char  TextString299[] =   "";
#endif
/*****************************************************************************/ 
/*
������������ ��������� ����. 
*/
#ifdef  RUS 
  const unsigned char   TextString300[]=  "���������� �����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString300[]  =   "Automation control";
#endif   
#ifdef  FIN 
   const unsigned char  TextString300[] =   "";
#endif

/*****************************************************************************/    
/*
������������ �������. 
*/
#ifdef  RUS                               
  const unsigned char   TextString301[]=  "������� ���������� ���. ����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString301[]  =   "automation on command sent";
#endif   
#ifdef  FIN 
   const unsigned char  TextString301[] =   "";
#endif
/*****************************************************************************/  
/*
������������ �������. 
*/
#ifdef  RUS 
  const unsigned char   TextString302[]=  "������� ���������� ���������� ����.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString302[]  =   "automation off command sent";
#endif   
#ifdef  FIN 
   const unsigned char  TextString302[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������. 
*/
#ifdef  RUS 
  const unsigned char   TextString303[]=  "������� ���������� ������ ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString303[]  =   "activation ban command sent";
#endif   
#ifdef  FIN 
   const unsigned char  TextString303[] =   "";
#endif
/*****************************************************************************/ 
/*
������������ ���������  
*/
#ifdef  RUS 
  const unsigned char   TextString304[]=  "��������� ���������� � ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString304[]  =   "automation change in zone";
#endif   
#ifdef  FIN 
   const unsigned char  TextString304[] =   "";
#endif
/*****************************************************************************/ 
/*
������������ ���������  
*/
#ifdef  RUS 
  const unsigned char   TextString305[]=  "��������� ���������� �� ���� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString305[]  =   "automation change in all zones";
#endif   
#ifdef  FIN 
   const unsigned char  TextString305[] =   "";
#endif
/*****************************************************************************/ 
/*
��������� ���������� � ����.  
*/
#ifdef  RUS 
  const unsigned char   TextString306[]=  "���. ���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString306[]  =   "AUT. ON";
#endif   
#ifdef  FIN 
   const unsigned char  TextString306[] =   "";
#endif
/*****************************************************************************/ 
/*
���������� ���������� � ����. ��� ����������� ���������� ����������    
*/
#ifdef  RUS 
  const unsigned char   TextString307[]=  "���. ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString307[]  =   "AUT OFF";
#endif   
#ifdef  FIN 
   const unsigned char  TextString307[] =   "";
#endif
/*****************************************************************************/
/*
������ ������ � ����. ��� �������� ��������������� ������ �������. 
*/
#ifdef  RUS 
  const unsigned char   TextString308[]=  "������ ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString308[]  =   "ACTIVATION BAN";
#endif   
#ifdef  FIN 
   const unsigned char  TextString308[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������.
*/
#ifdef  RUS 
  const unsigned char   TextString309[]=  "���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString309[]  =   "OK";
#endif   
#ifdef  FIN 
   const unsigned char  TextString309[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� �������� �������� ��������� � �������.
*/
#ifdef  RUS 
  const unsigned char   TextString310[]=  "����������.������� �������� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString310[]  =   "Control.devices description table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString310[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����..
*/
#ifdef  RUS 
  const unsigned char   TextString311[]=  "����������.������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString311[]  =   "Control.addresses table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString311[] =   "";
#endif
/*****************************************************************************/
/*
����� ��������� �� ������.
*/
#ifdef  RUS 
  const unsigned char   TextString312[]=  "������� ����� ��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString312[]  =   "Enter KL number";
#endif   
#ifdef  FIN 
   const unsigned char  TextString312[] =   "";
#endif
/*****************************************************************************/
/*
����� ��������� �� ������.
*/
#ifdef  RUS 
  const unsigned char   TextString313[]=  "������� ����� ���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString313[]  =   "Enter BKU number";
#endif   
#ifdef  FIN 
   const unsigned char  TextString313[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ��� ������� ��������������� ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString314[]=  "�������������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString314[]  =   "address editing";
#endif   
#ifdef  FIN 
   const unsigned char  TextString314[] =   "";
#endif
/*****************************************************************************/
/*
������������ ��������� ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString315[]=  "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString315[]  =   "OFF";
#endif   
#ifdef  FIN 
   const unsigned char  TextString315[] =   "";
#endif
/*****************************************************************************/
/*
������������ ��������� ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString316[]=  "�������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString316[]  =   "ON";
#endif   
#ifdef  FIN 
   const unsigned char  TextString316[] =   "";
#endif
/*****************************************************************************/
/*
������������ ��������� ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString317[]=  "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString317[]  =   "DELETED";
#endif   
#ifdef  FIN 
   const unsigned char  TextString317[] =   "";
#endif
/*****************************************************************************/
/*
������������ ��������� ���������� (�������).
*/
#ifdef  RUS 
  const unsigned char   TextString318[]=  "���.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString318[]  =   "act.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString318[] =   "";
#endif
/*****************************************************************************/
/*
������������ ��������� ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString319[]=  "�����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString319[]  =   "absent";
#endif   
#ifdef  FIN 
   const unsigned char  TextString319[] =   "";
#endif
/*****************************************************************************/
/*
������������ ��������� ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString320[]=  "�������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString320[]  =   "fault";
#endif   
#ifdef  FIN 
   const unsigned char  TextString320[] =   "";
#endif
/*****************************************************************************/
/*
������������ ��������� ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString321[]=  "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString321[]  =   "activated";
#endif   
#ifdef  FIN 
   const unsigned char  TextString321[] =   "";
#endif
/*****************************************************************************/
/*
������������ ��������� ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString322[]=  "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString322[]  =   "activated";
#endif   
#ifdef  FIN 
   const unsigned char  TextString322[] =   "";
#endif
/*****************************************************************************/
/*
������������ ��������� ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString323[]=  "���. �� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString323[]  =   "heating command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString323[] =   "";
#endif
/*****************************************************************************/
/*
������������ ��������� ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString324[]=  "����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString324[]  =   "damaged";
#endif   
#ifdef  FIN 
   const unsigned char  TextString324[] =   "";
#endif
/*****************************************************************************/
/*
������������ ��������� ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString325[]=  "������ ����.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString325[]  =   "low voltage";
#endif   
#ifdef  FIN 
   const unsigned char  TextString325[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������ (��� ���������). 
*/
#ifdef  RUS 
  const unsigned char   TextString326[]=  "��� ����.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString326[]  =   "everything off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString326[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������ (���������� �������). 
*/
#ifdef  RUS 
  const unsigned char   TextString327[]=  "���. ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString327[]  =   "set table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString327[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������ ���� (���������� ������ ��-240 ��). 
*/
#ifdef  RUS 
  const unsigned char   TextString328[]=  "���-�� ������� ��-240��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString328[]  =   "KL-240AE addresses quantity";
#endif   
#ifdef  FIN 
   const unsigned char  TextString328[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������ (�������� ���������� ������ ��-240 ��). 
*/
#ifdef  RUS 
  const unsigned char   TextString329[]=  "�������� ���-��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString329[]  =   "record quantity";
#endif   
#ifdef  FIN 
   const unsigned char  TextString329[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������ ����. 
*/
#ifdef  RUS 
  const unsigned char   TextString330[]=  "����� ������������ ��-240��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString330[]  =   "KL-240AE activation threshold";
#endif   
#ifdef  FIN 
   const unsigned char  TextString330[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������ (�������� ����� ������������ ��-240 ��). 
*/
#ifdef  RUS 
  const unsigned char   TextString331[]=  "�������� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString331[]  =   "record threshold";
#endif   
#ifdef  FIN 
   const unsigned char  TextString331[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString332[]="���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString332[]  =   "unsuccessfully";
#endif
#ifdef  FIN 
   const unsigned char  TextString332[] =   "";
#endif 
/*****************************************************************************/
/*
������������ ����. ������ ���� �������� �������� ��������� � �������.
*/
#ifdef  RUS 
  const unsigned char   TextString333[]=  "����������.������� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString333[]  =   "Control.devices table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString333[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������ ����.
*/
#ifdef  RUS 
  const unsigned char   TextString334[]=  "��� ����.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString334[]  =   "device type";
#endif   
#ifdef  FIN 
   const unsigned char  TextString334[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������ ����.
*/
#ifdef  RUS 
  const unsigned char   TextString335[]=  "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString335[]  =   "responding";
#endif   
#ifdef  FIN 
   const unsigned char  TextString335[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString336[]=  "��� ������ ��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString336[]  =   "Under this KL";
#endif   
#ifdef  FIN 
   const unsigned char  TextString336[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString337[]=  "����������� ����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString337[]  =   "no devices";
#endif   
#ifdef  FIN 
   const unsigned char  TextString337[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString338[]=  "���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString338[]  =   "NO";
#endif   
#ifdef  FIN 
   const unsigned char  TextString338[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString339[]=  "��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString339[]  =   "YES";
#endif   
#ifdef  FIN 
   const unsigned char  TextString339[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� �������� �������� ��������� � �������.
*/
#ifdef  RUS 
  const unsigned char   TextString340[]=  "����������.������� ������� ���������� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString340[]  =   "Control.internal connections activation table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString340[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� �������� �������� ��������� � �������.
*/
#ifdef  RUS 
  const unsigned char   TextString341[]=  "������� ����� ���������� ���� �� (1-20)";
#endif 
#ifdef  ENG 
  const unsigned char   TextString341[]  =   "enter device address of KL type (1-20)";
#endif   
#ifdef  FIN 
   const unsigned char  TextString341[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString342[]=  "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString342[]  =   "lock-on";
#endif   
#ifdef  FIN 
   const unsigned char  TextString342[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString343[]=  "��� ����� � ���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString343[]  =   "no connection with BKU";
#endif   
#ifdef  FIN 
   const unsigned char  TextString343[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� �������� �������� ��������� � �������.
*/
#ifdef  RUS 
  const unsigned char   TextString344[]=  "����������.������� ������� ������� ����� 1";
#endif 
#ifdef  ENG 
  const unsigned char   TextString344[]  =   "Control.external connections 1 activation table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString344[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� �������� �������� ��������� � �������.
*/
#ifdef  RUS 
  const unsigned char   TextString345[]=  "����������.������� ���������.��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString345[]  =   "Control.device table.AD";
#endif   
#ifdef  FIN 
   const unsigned char  TextString345[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString346[]=  "��� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString346[]  =   "No connection";
#endif   
#ifdef  FIN 
   const unsigned char  TextString346[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString347[]=  "��� ����� � ��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString347[]  =   "no connection with KL";
#endif   
#ifdef  FIN 
   const unsigned char  TextString347[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� �������� �������� ��������� � �������.
*/
#ifdef  RUS 
  const unsigned char   TextString348[]=  "����������.������� ���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString348[]  =   "Control.zone table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString348[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString349[]=  "������� ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString349[]  =   "area";
#endif   
#ifdef  FIN 
   const unsigned char  TextString349[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString350[]=  "���.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString350[]  =   "command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString350[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString351[]=  "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString351[]  =   "delay";
#endif   
#ifdef  FIN 
   const unsigned char  TextString351[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString352[]=  "���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString352[]  =   "OFF";
#endif   
#ifdef  FIN 
   const unsigned char  TextString352[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString353[]=  "��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString353[]  =   "ON";
#endif   
#ifdef  FIN 
   const unsigned char  TextString353[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� �������� �������� �������� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString354[]=  "����������.������� ������� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString354[]  =   "Control.deluge activation table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString354[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString355[]=  "�����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString355[]  =   "options";
#endif   
#ifdef  FIN 
   const unsigned char  TextString355[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString356[]=  "���� �";
#endif 
#ifdef  ENG 
  const unsigned char   TextString356[]  =   "Zone number";
#endif   
#ifdef  FIN 
   const unsigned char  TextString356[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString357[]=  "���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString357[]  =   "OFF";
#endif   
#ifdef  FIN 
   const unsigned char  TextString357[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString358[]=  "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString358[]  =   "ON";
#endif   
#ifdef  FIN 
   const unsigned char  TextString358[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� �������� �������� �������� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString359[]=  "����������.������� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString359[]  =   "Control.area table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString359[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� �������� ������� ������� �������� ������� � �������.
*/
#ifdef  RUS 
  const unsigned char   TextString361[]=  "����������.������� ������� ������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString361[]  =   "Control.external addresses activation table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString361[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� ��������� �������������� �������� ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString362[]=  "���������.�������� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString362[]  =   "Settings.Firmware monitoring";
#endif   
#ifdef  FIN 
   const unsigned char  TextString362[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString363[]=  "������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString363[]  =   "current version";
#endif   
#ifdef  FIN 
   const unsigned char  TextString363[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString364[]=  "���������. �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString364[]  =   "check sum";
#endif   
#ifdef  FIN 
   const unsigned char  TextString364[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString365[]=  "��� ����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString365[]  =   "No correct";
#endif   
#ifdef  FIN 
   const unsigned char  TextString365[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString366[]=  "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString366[]  =   "firmware";
#endif   
#ifdef  FIN 
   const unsigned char  TextString366[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������.
*/
#ifdef  RUS 
  const unsigned char   TextString367[]=  "- ��������� � �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString367[]  =   "- upload to current";
#endif   
#ifdef  FIN 
   const unsigned char  TextString367[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���� ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString368[]=  "���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString368[]=   "Single";
#endif 
#ifdef  FIN 
   const unsigned char  TextString368[]=   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
   const unsigned char  TextString369[]=  "OK";
#endif 
#ifdef  ENG 
   const unsigned char  TextString369[]=   "OK";
#endif 
#ifdef  FIN 
   const unsigned char  TextString369[]=   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
   const unsigned char  TextString370[]=  "������ �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString370[]=   "Issue command";
#endif 
#ifdef  FIN 
   const unsigned char  TextString370[]=   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
   const unsigned char  TextString371[]=  "�������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString371[]=   "command";
#endif 
#ifdef  FIN 
   const unsigned char  TextString371[]=   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
   const unsigned char  TextString372[]=  "������������ ��������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString372[]=   "Incorrect firmware";
#endif 
#ifdef  FIN 
   const unsigned char  TextString372[]=   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
   const unsigned char  TextString373[]=  "������� �� ��������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString373[]=   "command is impossible";
#endif 
#ifdef  FIN 
   const unsigned char  TextString373[]=   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
   const unsigned char  TextString374[]=  "����� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString374[]=   "new version";
#endif 
#ifdef  FIN 
   const unsigned char  TextString374[]=   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
   const unsigned char  TextString375[]=  "������������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString375[]=   "correctness";
#endif 
#ifdef  FIN 
   const unsigned char  TextString375[]=   "";
#endif
/*****************************************************************************/
/*
������������ ������.
*/
#ifdef  RUS 
   const unsigned char  TextString376[]=   "F1-������ ��������                                         F3-�������������� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString376[]=   "F1-start file transfer                                     F3-individual recording";
#endif 
#ifdef  FIN 
   const unsigned char  TextString376[]=   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
   const unsigned char  TextString377[]=  "���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString377[]=   "correct";
#endif 
#ifdef  FIN 
   const unsigned char  TextString377[]=   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
   const unsigned char  TextString378[]=  "�����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString378[]=   "incorrect";
#endif 
#ifdef  FIN 
   const unsigned char  TextString378[]=   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� ��������� �������������� �������� ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString379[]=  "���������.�������� ��������.��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString379[]  =   "Settings.Firmware monitoring.loading";
#endif   
#ifdef  FIN 
   const unsigned char  TextString379[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� ��������� �������������� �������� ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString380[]=  "�������� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString380[]  =   "loading completed";
#endif   
#ifdef  FIN 
   const unsigned char  TextString380[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString381[]=  "����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString381[]  =   "sent";
#endif   
#ifdef  FIN 
   const unsigned char  TextString381[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString382[]=  "�����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString382[]  =   "totally";
#endif   
#ifdef  FIN 
   const unsigned char  TextString382[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString383[]=  "����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString383[]  =   "delivered";
#endif   
#ifdef  FIN 
   const unsigned char  TextString383[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString384[]=  "�������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString384[]  =   "attempt";
#endif   
#ifdef  FIN 
   const unsigned char  TextString384[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString385[]=  "�� ���� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString385[]  =   "can not complete";
#endif   
#ifdef  FIN 
   const unsigned char  TextString385[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString386[]=  "���� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString386[]  =   "loading";
#endif   
#ifdef  FIN 
   const unsigned char  TextString386[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������.
*/
#ifdef  RUS 
  const unsigned char   TextString387[]=  "-  ���������� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString387[]  =   "- continue loading";
#endif   
#ifdef  FIN 
   const unsigned char  TextString387[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������.
*/
#ifdef  RUS 
  const unsigned char   TextString388[]=  "-  �������������� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString388[]  =   "- individual loading";
#endif   
#ifdef  FIN 
   const unsigned char  TextString388[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString389[]=  "����� ���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString389[]  =   "BKU address";
#endif   
#ifdef  FIN 
   const unsigned char  TextString389[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������.
*/
#ifdef  RUS 
  const unsigned char   TextString390[]=  "                             F2-���������� ������            F3-�������������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString390[]  =   "                             F2-continue recording       F3-individual recording";
#endif   
#ifdef  FIN 
   const unsigned char  TextString390[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString391[]=  "������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString391[]  =   "error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString391[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString392[]=  "�������� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString392[]  =   "loading is over";
#endif   
#ifdef  FIN 
   const unsigned char  TextString392[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString393[]=  "��������� �����\n\n��� ������ ������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString393[]  =   "BADGE CARD\n\nfor exit press CANCEL";
#endif   
#ifdef  FIN 
   const unsigned char  TextString393[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString394[]=  "��������� ����� ��� ���\n\n��� ������ ������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString394[]  =   "badge card once more\n\nfor exit press CANCEL";
#endif   
#ifdef  FIN 
   const unsigned char  TextString394[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString395[]=  "������� ����� ������������(1-255)\n\n��� ������ ������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString395[]  =   "enter user number(1-255)\n\nfor exit press CANCEL";
#endif   
#ifdef  FIN 
   const unsigned char  TextString395[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString396[]=  "����� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString396[]  =   "number is busy";
#endif   
#ifdef  FIN 
   const unsigned char  TextString396[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString397[]=  "   ����������� �������� -'����'\n       �������� �������� -'������'";
#endif 
#ifdef  ENG 
  const unsigned char   TextString397[]  =   "Confirm deleting - 'Enter'\n     cancel deleting - 'Cancel'";
#endif   
#ifdef  FIN 
   const unsigned char  TextString397[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���� ������������.
*/
#ifdef  RUS 
  const unsigned char   TextString398[]=  "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString398[]  =   "off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString398[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString399[]=  "������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString399[]  =   "access level";
#endif   
#ifdef  FIN 
   const unsigned char  TextString399[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString400[]=  "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString400[]  =   "off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString400[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString401[]=  "�������� �� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString401[]  =   "Operation is not completed";
#endif   
#ifdef  FIN 
   const unsigned char  TextString401[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� ��������� ����������� NAND ������ ����������.
*/
#ifdef  RUS 
  const unsigned char   TextString402[]=  "������ � �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString402[]  =   "Work with memory";
#endif   
#ifdef  FIN 
   const unsigned char  TextString402[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������.
*/
#ifdef  RUS 
  const unsigned char   TextString403[]=  "�����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString403[]  =   "SCAN";
#endif   
#ifdef  FIN 
   const unsigned char  TextString403[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������.
*/
#ifdef  RUS 
  const unsigned char   TextString404[]=  "���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString404[]  =   "CHECK";
#endif   
#ifdef  FIN 
   const unsigned char  TextString404[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������.
*/
#ifdef  RUS 
  const unsigned char   TextString405[]=  "� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString405[]  =   "Block �umber";
#endif   
#ifdef  FIN 
   const unsigned char  TextString405[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString406[]=  "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString406[]  =   "name";
#endif   
#ifdef  FIN 
   const unsigned char  TextString406[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString407[]=  "������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString407[]  =   "size";
#endif   
#ifdef  FIN 
   const unsigned char  TextString407[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString408[]=  "������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString408[]  =   "start";
#endif   
#ifdef  FIN 
   const unsigned char  TextString408[] =   "";
#endif
/*****************************************************************************/
/*
����� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString409[]=  "����� ��������-���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString409[]  =   "General examination - COMPLETED";
#endif   
#ifdef  FIN 
   const unsigned char  TextString409[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString410[]=  "����� ��������-�����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString410[]  =   "General examination-NOT COMPLETED";
#endif   
#ifdef  FIN 
   const unsigned char  TextString410[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString411[]=  "������������-���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString411[]  =   "Scanning-COMPLETED";
#endif   
#ifdef  FIN 
   const unsigned char  TextString411[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString412[]=  "������������-�����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString412[]  =   "Scanning-NOT COMPLETED";
#endif   
#ifdef  FIN 
   const unsigned char  TextString412[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString413[]=  "������ ������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString413[]  =   "Press button first";
#endif   
#ifdef  FIN 
   const unsigned char  TextString413[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString414[]=  "�����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString414[]  =   "SCAN";
#endif   
#ifdef  FIN 
   const unsigned char  TextString414[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString415[]=  "��������� ����.(������)";
#endif 
#ifdef  ENG 
  const unsigned char   TextString415[]  =   "System table (backup)";
#endif   
#ifdef  FIN 
   const unsigned char  TextString415[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString416[]=  "�������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString416[]  =   "Tables";
#endif   
#ifdef  FIN 
   const unsigned char  TextString416[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString417[]=  "������� (������)";
#endif 
#ifdef  ENG 
  const unsigned char   TextString417[]  =   "Tables (backup)";
#endif   
#ifdef  FIN 
   const unsigned char  TextString417[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString418[]=  "���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString418[]  =   "Log";
#endif   
#ifdef  FIN 
   const unsigned char  TextString418[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString419[]=  "��� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString419[]  =   "Log backup";
#endif   
#ifdef  FIN 
   const unsigned char  TextString419[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString420[]=  "RF �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString420[]  =   "Card RF";
#endif   
#ifdef  FIN 
   const unsigned char  TextString420[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString421[]=  "RF ����� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString421[]  =   "Card RF backup";
#endif   
#ifdef  FIN 
   const unsigned char  TextString421[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString422[]=  "����������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString422[]  =   "Crossing of blocks";
#endif   
#ifdef  FIN 
   const unsigned char  TextString422[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString423[]=  "����� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString423[]  =   "Bad blocks";
#endif   
#ifdef  FIN 
   const unsigned char  TextString423[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString424[]=  "� ������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString424[]  =   "in configuration";
#endif   
#ifdef  FIN 
   const unsigned char  TextString424[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString425[]=  "�������!";
#endif 
#ifdef  ENG 
  const unsigned char   TextString425[]  =   "Success!";
#endif   
#ifdef  FIN 
   const unsigned char  TextString425[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString426[]=  "��������� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString426[]  =   "system message";
#endif   
#ifdef  FIN 
   const unsigned char  TextString426[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString427[]=  "����� �������� - ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString427[]  =   "general check - COMPLETED";
#endif   
#ifdef  FIN 
   const unsigned char  TextString427[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString428[]=  "���������� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString428[]  =   "please wait";
#endif   
#ifdef  FIN 
   const unsigned char  TextString428[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString429[]=  "���� �������������!";
#endif 
#ifdef  ENG 
  const unsigned char   TextString429[]  =   "initialization!";
#endif   
#ifdef  FIN 
   const unsigned char  TextString429[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString430[]=  "��������� ���������� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString430[]  =   "change of initial block";
#endif   
#ifdef  FIN 
   const unsigned char  TextString430[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString431[]=  "������� ����� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString431[]  =   "Enter new address";
#endif   
#ifdef  FIN 
   const unsigned char  TextString431[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString432[]=  "������� ����� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString432[]  =   "Enter new address";
#endif   
#ifdef  FIN 
   const unsigned char  TextString432[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString433[]=  "��� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString433[]  =   "no response";
#endif   
#ifdef  FIN 
   const unsigned char  TextString433[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString434[]=  "����� ����. �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString434[]  =   "conf. mode on";
#endif   
#ifdef  FIN 
   const unsigned char  TextString434[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString435[]=  "����� ����. ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString435[]  =   "configuration mode off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString435[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� ��������� �������� ���������� � ������ ������������ � ��������.
*/
#ifdef  RUS 
  const unsigned char   TextString436[]=  "���������.����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString436[]  =   "Setting.Information";
#endif   
#ifdef  FIN 
   const unsigned char  TextString436[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������. 
*/
#ifdef  RUS 
  const unsigned char   TextString437[]=  "����� ����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString437[]  =   "General information";
#endif   
#ifdef  FIN 
   const unsigned char  TextString437[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������. 
*/
#ifdef  RUS 
  const unsigned char   TextString438[]=  "������ ��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString438[]  =   "Software version";
#endif   
#ifdef  FIN 
   const unsigned char  TextString438[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������. 
*/
#ifdef  RUS 
  const unsigned char   TextString439[]=  "��� ������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString439[]  =   "configuration name";
#endif   
#ifdef  FIN 
   const unsigned char  TextString439[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������. 
*/
#ifdef  RUS 
  const unsigned char   TextString440[]=  "���� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString440[]  =   "loading date";
#endif   
#ifdef  FIN 
   const unsigned char  TextString440[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����. ������ ���� ��������� �������� ���������� � ������ ������������ � ��������.
*/
#ifdef  RUS 
  const unsigned char   TextString441[]=  "���������.���������� ������� ������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString441[]  =   "Setting.configuration mode control";
#endif   
#ifdef  FIN 
   const unsigned char  TextString441[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString442[]=  "����� ����. �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString442[]  =   "configuration mode on";
#endif   
#ifdef  FIN 
   const unsigned char  TextString442[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString443[]=  "����� ����. ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString443[]  =   "configuration mode off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString443[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����.
*/
#ifdef  RUS 
  const unsigned char   TextString444[]=  "���������.���������� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString444[]  =   "Setting.Slave statistic";
#endif   
#ifdef  FIN 
   const unsigned char  TextString444[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������.
*/
#ifdef  RUS 
  const unsigned char   TextString445[]=  "F1 - ������� �� ����� ���������� �������� ���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString445[]  =   "F1 - slave BKU statistics reset command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString445[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString446[]=  "���.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString446[]  =   "adr.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString446[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString447[]=  "����� ���. ��.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString447[]  =   "tot. req. r.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString447[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString448[]=  "����� ���. ��.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString448[]  =   "tot. req. l.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString448[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString449[]=  "����� ���.��.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString449[]  =   "tot. resp. r.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString449[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString450[]=  "����� ���.��.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString450[]  =   "tot. resp. l.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString450[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString451[]=  "��� ���.��.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString451[]  =   "no resp. r.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString451[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString452[]=  "��� ���.��.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString452[]  =   "no resp. l.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString452[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString453[]=  "crc_er_��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString453[]  =   "crc_er_r.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString453[] =   "";
#endif
/*****************************************************************************/
/*
������������ �������.
*/
#ifdef  RUS 
  const unsigned char   TextString454[]=  "crc_er_��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString454[]  =   "crc_er_l.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString454[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString455[]=  "���������.����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString455[]  =   "Setting.Statistics";
#endif   
#ifdef  FIN 
   const unsigned char  TextString455[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������.
*/
#ifdef  RUS 
  const unsigned char   TextString456[]=  "- ���������� ���������� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString456[]  =   "- see slave statistics";
#endif   
#ifdef  FIN 
   const unsigned char  TextString456[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������.
*/
#ifdef  RUS 
  const unsigned char   TextString457[]=  "- �������� ����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString457[]  =   "- reset statistics";
#endif   
#ifdef  FIN 
   const unsigned char  TextString457[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString458[]=  "��������� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString458[]  =   "Activation stop";
#endif   
#ifdef  FIN 
   const unsigned char  TextString458[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������.
*/
#ifdef  RUS 
  const unsigned char   TextString459[]=  "F1 -�������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString459[]  =   "F1-delete";
#endif   
#ifdef  FIN 
   const unsigned char  TextString459[] =   "";
#endif
/*****************************************************************************/
/*
������������ ����.
*/
#ifdef  RUS 
  const unsigned char   TextString460[]=  "�������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString460[]  =   "Confirmation";
#endif   
#ifdef  FIN 
   const unsigned char  TextString460[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString461[]=  "������ ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString461[]  =   "Access denied";
#endif   
#ifdef  FIN 
   const unsigned char  TextString461[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString462[]=  "� ������ �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString462[]  =   "In slave mode";
#endif   
#ifdef  FIN 
   const unsigned char  TextString462[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString463[]=  "������� ����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString463[]  =   "function is not available";
#endif   
#ifdef  FIN 
   const unsigned char  TextString463[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString464[]=  "������������� ��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString464[]  =   "AD fault";
#endif   
#ifdef  FIN 
   const unsigned char  TextString464[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString465[]=  "�������������� ����� � ��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString465[]  =   "AD reconnection";
#endif   
#ifdef  FIN 
   const unsigned char  TextString465[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString466[]=  "�� � ��������� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString466[]  =   "AD in Attention mode";
#endif   
#ifdef  FIN 
   const unsigned char  TextString466[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString467[]=  "�� � ��������� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString467[]  =   "AD in Fire mode";
#endif   
#ifdef  FIN 
   const unsigned char  TextString467[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString468[]=  "�������� ��������� ��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString468[]  =   "AD short-circuit";
#endif   
#ifdef  FIN 
   const unsigned char  TextString468[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString469[]=  "������ ��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString469[]  =   "AD activation";
#endif   
#ifdef  FIN 
   const unsigned char  TextString469[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString470[]=  "���������� ���� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString470[]  =   "AES unblocked";
#endif   
#ifdef  FIN 
   const unsigned char  TextString470[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString471[]=  "�� � ������� ����� ��-240��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString471[]  =   "Short-circuit in power line of KL-240AE";
#endif   
#ifdef  FIN 
   const unsigned char  TextString471[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString472[]=  "�� � ������� ����� ��-240�� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString472[]  =   "Short-circuit in power line of KL-240AE fixed";
#endif   
#ifdef  FIN 
   const unsigned char  TextString472[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString473[]=  "������ ������������� ���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString473[]  =   "BKU initialization error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString473[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString474[]=  "������ ����� � ���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString474[]  =   "BKU connection loss";
#endif   
#ifdef  FIN 
   const unsigned char  TextString474[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString475[]=  "����� � ��� �������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString475[]  =   "BKU connection norm";
#endif   
#ifdef  FIN 
   const unsigned char  TextString475[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString476[]=  "�������� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString476[]  =   "Sprinkler activation";
#endif   
#ifdef  FIN 
   const unsigned char  TextString476[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString477[]=  "���������� ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString477[]  =   "AES blocking";
#endif   
#ifdef  FIN 
   const unsigned char  TextString477[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString478[]=  "��� �������� �� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString478[]  =   "BKU polling off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString478[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString479[]=  "��� ������� � �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString479[]  =   "BKU polling on";
#endif   
#ifdef  FIN 
   const unsigned char  TextString479[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString480[]=  "����� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString480[]  =   "time is changed";
#endif   
#ifdef  FIN 
   const unsigned char  TextString480[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString481[]=  "������� �� ������� ���� �� ���������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString481[]  =   "zone transfer to accelerated timer command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString481[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString482[]=  "������� ������������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString482[]  =   "time update command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString482[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString483[]=  "����� ������ � ��������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString483[]  =   "faults and alarms reset";
#endif   
#ifdef  FIN 
   const unsigned char  TextString483[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString484[]=  "������� ����� ������ � ��������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString484[]  =   "faults and alarms reset";
#endif   
#ifdef  FIN 
   const unsigned char  TextString484[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString485[]=  "���������������� ����� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString485[]  =   "configuration mode on";
#endif   
#ifdef  FIN 
   const unsigned char  TextString485[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString486[]=  "���������������� ����� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString486[]  =   "configuration mode off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString486[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString487[]=  "������� �� ���. ����������������� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString487[]  =   "configuration mode on command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString487[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString488[]=  "������� �� ����. ����������������� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString488[]  =   "configuration mode off command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString488[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString489[]=  "�������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString489[]  =   "firmware is accepted";
#endif   
#ifdef  FIN 
   const unsigned char  TextString489[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString490[]=  "���. �� ���. ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString490[]  =   "firmware update command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString490[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString491[]=  "���� � ������ 1";
#endif 
#ifdef  ENG 
  const unsigned char   TextString491[]  =   "fire in zone";
#endif   
#ifdef  FIN 
   const unsigned char  TextString491[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString492[]=  "���� � ������ 2";
#endif 
#ifdef  ENG 
  const unsigned char   TextString492[]  =   "coinc. in zone";
#endif   
#ifdef  FIN 
   const unsigned char  TextString492[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString493[]=  "���������� �������� � ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString493[]  =   "Delay reduction in zone";
#endif   
#ifdef  FIN 
   const unsigned char  TextString493[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString494[]=  "���. �� ���. ����� 1 � ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString494[]  =   "Fire in zone command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString494[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString495[]=  "���. �� ���. ����� 2 � ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString495[]  =   "Coinc. in zone command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString495[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString496[]=  "������ ��������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString496[]  =   "Countdown activation";
#endif   
#ifdef  FIN 
   const unsigned char  TextString496[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString497[]=  "����� ��������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString497[]  =   "Countdown paused";
#endif   
#ifdef  FIN 
   const unsigned char  TextString497[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString498[]=  "������������� ����� ����� ��������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString498[]  =   "Countdown activation after pause";
#endif   
#ifdef  FIN 
   const unsigned char  TextString498[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString499[]=  "������ ��������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString499[]  =   "Countdown cancel";
#endif   
#ifdef  FIN 
   const unsigned char  TextString499[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString500[]=  "�������������� ����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString500[]  =   "forced updating";
#endif   
#ifdef  FIN 
   const unsigned char  TextString500[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString501[]=  "������� ������ ��������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString501[]  =   "Countdown start command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString501[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString502[]=  "������� ����� ��������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString502[]  =   "Countdown pause command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString502[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString503[]=  "������� ����������� ��������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString503[]  =   "Countdown continuing";
#endif   
#ifdef  FIN 
   const unsigned char  TextString503[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString504[]=  "������� ������ �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString504[]  =   "timer cancelled command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString504[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString505[]=  "������� ��������. ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString505[]  =   "forced nulling command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString505[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString506[]=  "��������� ����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString506[]  =   "Automation on";
#endif   
#ifdef  FIN 
   const unsigned char  TextString506[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString507[]=  "���������� ����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString507[]  =   "Automation off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString507[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString508[]=  "��������� ������ ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString508[]  =   "Activation ban on";
#endif   
#ifdef  FIN 
   const unsigned char  TextString508[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString509[]=  "���. ���. ����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString509[]  =   "automation on command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString509[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString510[]=  "���. ���������� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString510[]  =   "automation off command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString510[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString511[]=  "���. �� ������ ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString511[]  =   "activation ban command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString511[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString512[]=  "�������� ������������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString512[]  =   "waiting for command confirmation";
#endif   
#ifdef  FIN 
   const unsigned char  TextString512[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString513[]=  "������ ��������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString513[]  =   "system table error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString513[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString514[]=  "����� ������������ �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString514[]  =   "configuration mode on";
#endif   
#ifdef  FIN 
   const unsigned char  TextString514[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString515[]=  "������ ������ ������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString515[]  =   "configuration table error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString515[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString516[]=  "������ ������ ���� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString516[]  =   "access card reading error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString516[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString517[]=  "������ ������ ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString517[]  =   "log reading error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString517[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString518[]=  "����������� �� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString518[]  =   "verification failed";
#endif   
#ifdef  FIN 
   const unsigned char  TextString518[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString519[]=  "��������� ���� ����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString519[]  =   "test failed";
#endif   
#ifdef  FIN 
   const unsigned char  TextString519[] =   "";
#endif
/*****************************************************************************/
/*
������������ ��������� ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString520[]=  "����� ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString520[]  =   "Test mode";
#endif   
#ifdef  FIN 
   const unsigned char  TextString520[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString521[]=  "����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString521[]  =   "Test";
#endif   
#ifdef  FIN 
   const unsigned char  TextString521[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString522[]=  "������������ ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString522[]  =   "incorrect value";
#endif   
#ifdef  FIN 
   const unsigned char  TextString522[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString523[]=  "������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString523[]  =   "Not enough";
#endif   
#ifdef  FIN 
   const unsigned char  TextString523[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString524[]=  "�����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString524[]  =   "Video memory";
#endif   
#ifdef  FIN 
   const unsigned char  TextString524[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString525[]=  "������ �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString525[]  =   "system error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString525[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString526[]=  "������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString526[]  =   "logic";
#endif   
#ifdef  FIN 
   const unsigned char  TextString526[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString527[]=  "(���������)";
#endif 
#ifdef  ENG 
  const unsigned char   TextString527[]  =   "(correct)";
#endif   
#ifdef  FIN 
   const unsigned char  TextString527[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString528[]=  "����� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString528[]  =   "card number";
#endif   
#ifdef  FIN 
   const unsigned char  TextString528[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString529[]=  "��������� �� ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString529[]  =   "reduced by ";
#endif   
#ifdef  FIN 
   const unsigned char  TextString529[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString530[]=  "��������;";
#endif 
#ifdef  ENG 
  const unsigned char   TextString530[]  =   "off;";
#endif   
#ifdef  FIN 
   const unsigned char  TextString530[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString531[]=  "������������;";
#endif 
#ifdef  ENG 
  const unsigned char   TextString531[]  =   "user;";
#endif   
#ifdef  FIN 
   const unsigned char  TextString531[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString532[]=  "�����.;";
#endif 
#ifdef  ENG 
  const unsigned char   TextString532[]  =   "admin.;";
#endif   
#ifdef  FIN 
   const unsigned char  TextString532[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString533[]=  "id:";
#endif 
#ifdef  ENG 
  const unsigned char   TextString533[]  =   "id:";
#endif   
#ifdef  FIN 
   const unsigned char  TextString533[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString534[]=  "������:";
#endif 
#ifdef  ENG 
  const unsigned char   TextString534[]  =   "status:";
#endif   
#ifdef  FIN 
   const unsigned char  TextString534[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString535[]=  "�� ���.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString535[]  =   "non-active";
#endif   
#ifdef  FIN 
   const unsigned char  TextString535[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString536[]=  "��������.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString536[]  =   "FAULT";
#endif   
#ifdef  FIN 
   const unsigned char  TextString536[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString537[]=  "������ ������������� ������ NAND";
#endif 
#ifdef  ENG 
  const unsigned char   TextString537[]  =   "NAND memory initialization error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString537[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString538[]=  "���������� �� ����������!";
#endif 
#ifdef  ENG 
  const unsigned char   TextString538[]  =   "contact support!";
#endif   
#ifdef  FIN 
   const unsigned char  TextString538[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS 
  const unsigned char   TextString539[]=  "������� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString539[]  =   "OLIMP SYSTEM";
#endif   
#ifdef  FIN 
   const unsigned char  TextString539[] =   "";
#endif
/*****************************************************************************/
/*
������������ ������ ����.
*/
#ifdef  RUS 
  const unsigned char   TextString540[]=  "�������.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString540[]  =   "initialization";
#endif   
#ifdef  FIN 
   const unsigned char  TextString540[] =   "";
#endif   
/*****************************************************************************/
/*
������������ �������. ������ ������� �������� ������ ����������� ���������
*/
#ifdef  RUS 
  const unsigned char   TextString541[]=  "�����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString541[]  =   "activated";
#endif   
#ifdef  FIN 
   const unsigned char  TextString541[] =   "";
#endif  
/*****************************************************************************/
/*

*/
#ifdef  RUS 
  const unsigned char   TextString542[]=  "���������!";
#endif 
#ifdef  ENG 
  const unsigned char   TextString542[]  =   "banned!";
#endif   
#ifdef  FIN 
   const unsigned char  TextString542[] =   "";
#endif  
/*****************************************************************************/
/*

*/
#ifdef  RUS 
  const unsigned char   TextString543[]=  "����� � ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString543[]  =   "activations in zone";
#endif   
#ifdef  FIN 
   const unsigned char  TextString543[] =   "";
#endif   
/*****************************************************************************/
/*

*/
#ifdef  RUS 
  const unsigned char   TextString544[]=  "������ ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString544[]  =   "list is full";
#endif   
#ifdef  FIN 
   const unsigned char  TextString544[] =   "";
#endif   
/*****************************************************************************/
/*

*/
#ifdef  RUS 
  const unsigned char   TextString545[]=  "�� �� �������� � ����-���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString545[]  =   "AD is not added to config.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString545[] =   "";
#endif   
/*****************************************************************************/
/*

*/
#ifdef  RUS 
  const unsigned char   TextString546[]=   "����� �����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString546[]  =   "no address";
#endif   
#ifdef  FIN 
   const unsigned char  TextString546[] =   "";
#endif 
/*****************************************************************************/
/*

*/
#ifdef  RUS 
  const unsigned char   TextString547[]=   "�� �� ����� �������� ��-��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString547[]  =   "AD has no activation element";
#endif   
#ifdef  FIN 
   const unsigned char  TextString547[] =   "";
#endif   
/*****************************************************************************/
/*

*/
#ifdef  RUS 
  const unsigned char   TextString548[]=   "�������������� ��-240��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString548[]  =   "KL-240SA edit";
#endif   
#ifdef  FIN 
   const unsigned char  TextString548[] =   "";
#endif    
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString549[]=   "�������������� ��-240��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString549[]  =   "KL-240AE edit";
#endif   
#ifdef  FIN 
   const unsigned char  TextString549[] =   "";
#endif    
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString550[]=   "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString550[]  =   "record";
#endif   
#ifdef  FIN 
   const unsigned char  TextString550[] =   "";
#endif  
/*****************************************************************************/
/*
������������ ����. ������ ���� �������� �������� ��������� � �������.
*/
#ifdef  RUS 
  const unsigned char   TextString551[]=  "����������.������� ���������.��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString551[]  =   "Control.device table.KL";
#endif   
#ifdef  FIN 
   const unsigned char  TextString551[] =   "";
#endif  
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString552[]=   "���/���� �� �� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString552[]  =   "AD polling on/off";
#endif
#ifdef  FIN 
   const unsigned char  TextString552[]  =   "";
#endif     
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString553[]=   "����������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString553[]  =   "no address";
#endif
#ifdef  FIN 
   const unsigned char  TextString553[]  =   "";
#endif     
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString554[]=    "��� ������ ���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString554[]  =   "Under this BKU";
#endif
#ifdef  FIN 
   const unsigned char  TextString554[]  =   "";
#endif  
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString555[]=    "������������ ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString555[]  =   "Scanning completed";
#endif
#ifdef  FIN 
   const unsigned char  TextString555[]  =   "";
#endif       
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString556[]=    "����������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString556[]  =   "damaged blocks";
#endif
#ifdef  FIN 
   const unsigned char  TextString556[]  =   "";
#endif         
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString557[]=    "������ �������.��������� ����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString557[]  =   "Event log.Detailed information";
#endif
#ifdef  FIN 
   const unsigned char  TextString557[]  =   "";
#endif
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString558[]=    "��������� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString558[]  =   "sprinkler activated";
#endif
#ifdef  FIN 
   const unsigned char  TextString558[]  =   "";
#endif         
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString559[]=     "���� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString559[]  =   "AES off";
#endif
#ifdef  FIN 
   const unsigned char  TextString559[]  =   "";
#endif     
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString560[]=     "�� �������?";
#endif 
#ifdef  ENG 
  const unsigned char   TextString560[]  =   "Are you sure?";
#endif
#ifdef  FIN 
   const unsigned char  TextString560[]  =   "";
#endif       
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString561[]=     "����������� ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString561[]  =   "Technical menu";
#endif
#ifdef  FIN 
   const unsigned char  TextString561[]  =   "";
#endif    
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString562[]=     "��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString562[]  =   "Yes";
#endif
#ifdef  FIN 
   const unsigned char  TextString562[]  =   "";
#endif 
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString563[]=     "���";
#endif 
#ifdef  ENG 
  const unsigned char   TextString563[]  =   "No";
#endif
#ifdef  FIN 
   const unsigned char  TextString563[]  =   "";
#endif   
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString564[]=    "�������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString564[]  =   "Clear log";
#endif
#ifdef  FIN 
   const unsigned char  TextString564[]  =   "";
#endif     
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString565[]=    "������� ���.�����.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString565[]  =   "delete backup programs";
#endif
#ifdef  FIN 
   const unsigned char  TextString565[]  =   "";
#endif   
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString566[]=    "�������� ����� ��.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString566[]  =   "clear buffer";
#endif
#ifdef  FIN 
   const unsigned char  TextString566[]  =   "";
#endif     
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString567[]=    "�������� ����������� ��������.\n���� 0-������������ �����������\n��������.\n�� 0-��� �������� ������ �� ������\n��� ����� ��������� ��������.\n����������� ��������\n����� ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString567[]  =   "Minimum delay value.\nIf 0-standard\nvalues are used.\nNot 0-��� Countdowns on this\nBKU are equal to entered value.\nConfirm value\n by pressing ENTER";
#endif
#ifdef  FIN 
   const unsigned char  TextString567[]  =   "";
#endif   
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString568[]=    "������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString568[]  =   "Error";
#endif
#ifdef  FIN 
   const unsigned char  TextString568[]  =   "";
#endif    
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString569[]=    "������ ���������� ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString569[]  =   "Date filling error";
#endif
#ifdef  FIN 
   const unsigned char  TextString569[]  =   "";
#endif    
  /*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString570[]=    "������ ���������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString570[]  =   "Address filling error";
#endif
#ifdef  FIN 
   const unsigned char  TextString570[]  =   "";
#endif    
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString571[]=    "��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString571[]  =   "by";
#endif
#ifdef  FIN 
   const unsigned char  TextString571[]  =   "";
#endif
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString572[]=    "���� ������ ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString572[]  =   "Filters window";
#endif
#ifdef  FIN 
   const unsigned char  TextString572[]  =   "";
#endif
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString573[]=    "�� ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString573[]  =   "By date";
#endif
#ifdef  FIN 
   const unsigned char  TextString573[]  =   "";
#endif    
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString574[]=    "�� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString574[]  =   "By time";
#endif
#ifdef  FIN 
   const unsigned char  TextString574[]  =   "";
#endif  
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString575[]=     "�� ���� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString575[]  =   "By type of event";
#endif
#ifdef  FIN 
   const unsigned char  TextString575[]  =   "";
#endif 
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString576[]=     "�� ����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString576[]  =   "By viewings";
#endif
#ifdef  FIN 
   const unsigned char  TextString576[]  =   "";
#endif 
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString577[]=     "�� �������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString577[]  =   "non-viewed";
#endif
#ifdef  FIN 
   const unsigned char  TextString577[]  =   "";
#endif    
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString578[]=     "�������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString578[]  =   "viewed";
#endif
#ifdef  FIN 
   const unsigned char  TextString578[]  =   "";
#endif    
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString579[]=     "�� ������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString579[]  =   "By users";
#endif
#ifdef  FIN 
   const unsigned char  TextString579[]  =   "";
#endif 
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString580[]=     "- ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString580[]  =   "- Filter";
#endif
#ifdef  FIN 
   const unsigned char  TextString580[]  =   "";
#endif    
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString581[]=     "����� ������. ����.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString581[]  =   "slave polling off";
#endif
#ifdef  FIN 
   const unsigned char  TextString581[]  =   "";
#endif    
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString582[]=     "����� ������. ���.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString582[]  =   "slave polling on";
#endif
#ifdef  FIN 
   const unsigned char  TextString582[]  =   "";
#endif      
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString583[]=     "������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString583[]  =   "user";
#endif
#ifdef  FIN 
   const unsigned char  TextString583[]  =   "";
#endif      
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString584[]=     "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString584[]  =   "operator";
#endif
#ifdef  FIN 
   const unsigned char  TextString584[]  =   "";
#endif      
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString585[]=     "������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString585[]  =   "memory";
#endif
#ifdef  FIN 
   const unsigned char  TextString585[]  =   "";
#endif  
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString586[]=     "��������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString586[]  =   "Time setiing";
#endif
#ifdef  FIN 
   const unsigned char  TextString586[]  =   "";
#endif      
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString587[]=     "�������� ������ �� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString587[]  =   "Memory check not done";
#endif
#ifdef  FIN 
   const unsigned char  TextString587[]  =   "";
#endif  
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString588[]=  "- ��������� �� ��� ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString588[]  =   "upload to every";
#endif   
#ifdef  FIN 
   const unsigned char  TextString588[] =   "";
#endif    
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString589[]=  "Nand ������ ����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString589[]  =   "Nand memory damaged";
#endif   
#ifdef  FIN 
   const unsigned char  TextString589[] =   "";
#endif    
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString590[]=  "����� �� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString590[]  =   "going beyound";
#endif   
#ifdef  FIN 
   const unsigned char  TextString590[] =   "";
#endif   
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString591[]=  "������ ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString591[]  =   "memory error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString591[] =   "";
#endif    
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString592[]=  "�������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString592[]  =   "accept";
#endif   
#ifdef  FIN 
   const unsigned char  TextString592[] =   "";
#endif  
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString593[]=  "��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString593[]  =   "cancel";
#endif   
#ifdef  FIN 
   const unsigned char  TextString593[] =   "";
#endif 
/*****************************************************************************/   
/*

*/
#ifdef  RUS 
  const unsigned char   TextString594[]=  "��������!\n�� ������� ��� ����������\n��� ����� � ���������������� ���.\n������� ������������ �����\n���������������!";
#endif 
#ifdef  ENG 
  const unsigned char   TextString594[]  =   "Attention!\nYou are changinh device type\nor address in configurated BKU.\nCurrent confuguration will be\nnot valid!";
#endif   
#ifdef  FIN 
   const unsigned char  TextString594[] =   "";
#endif    
/*****************************************************************************/   
/*

*/
#ifdef  RUS 
  const unsigned char   TextString595[]=  "���� ����������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString595[]  =   "verification flag is cleared";
#endif   
#ifdef  FIN 
   const unsigned char  TextString595[] =   "";
#endif    
/*****************************************************************************/   
/*

*/
#ifdef  RUS 
  const unsigned char   TextString596[]=  "����� ������ ��� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString596[]  =   "BKU operation mode is changed";
#endif   
#ifdef  FIN 
   const unsigned char  TextString596[] =   "";
#endif    
/*****************************************************************************/   
/*

*/
#ifdef  RUS 
  const unsigned char   TextString597[]=  "����� ��� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString597[]  =   "BKU address is changed";
#endif   
#ifdef  FIN 
   const unsigned char  TextString597[] =   "";
#endif                
/*****************************************************************************/   
/*

*/
#ifdef  RUS 
  const unsigned char   TextString598[]=  "������ �����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString598[]  =   "Filter is activated";
#endif   
#ifdef  FIN 
   const unsigned char  TextString598[] =   "";
#endif  
/*****************************************************************************/   
/*

*/
#ifdef  RUS 
  const unsigned char   TextString599[]=   "��������� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString599[]  =   "repeat procedure";
#endif   
#ifdef  FIN 
   const unsigned char  TextString599[] =   "";
#endif    
/*****************************************************************************/   
/*

*/
#ifdef  RUS 
  const unsigned char   TextString600[]=   "��� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString600[]  =   "no space";
#endif   
#ifdef  FIN 
   const unsigned char  TextString600[] =   "";
#endif    
/*****************************************************************************/   
/*

*/
#ifdef  RUS 
  const unsigned char   TextString601[]=   "����� ���� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString601[]  =   "card has been added";
#endif   
#ifdef  FIN 
   const unsigned char  TextString601[] =   "";
#endif      
/*****************************************************************************/   
/*

*/
#ifdef  RUS 
  const unsigned char   TextString602[]=   "��� �������� ����� ��������\n ������� ������ ''����''";
#endif 
#ifdef  ENG 
  const unsigned char   TextString602[]  =   "For transfer between cells\n press ''enter''";
#endif   
#ifdef  FIN 
   const unsigned char  TextString602[] =   "";
#endif      
/*****************************************************************************/ 
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString603[]=  "���-��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString603[]=  "IPP-SA";
#endif
#ifdef  FIN 
   const unsigned char  TextString603[]=   "";
#endif    
/*****************************************************************************/ 
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString604[]=  "���-�";
#endif 
#ifdef  ENG 
   const unsigned char  TextString604[]=  "IPT-A";
#endif
#ifdef  FIN 
   const unsigned char  TextString604[]=   "";
#endif  
/*****************************************************************************/ 
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString605[]=  "����������.������� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString605[]=  "Control.activation table";
#endif
#ifdef  FIN 
   const unsigned char  TextString605[]=   "";
#endif     
/*****************************************************************************/ 
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString606[]=  "�������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString606[]=  "active";
#endif
#ifdef  FIN 
   const unsigned char  TextString606[]=   "";
#endif     
/*****************************************************************************/ 
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString607[]=  "�� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString607[]=  "not active";
#endif
#ifdef  FIN 
   const unsigned char  TextString607[]=   "";
#endif    
/*****************************************************************************/ 
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString608[]=  "�����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString608[]=  "card";
#endif
#ifdef  FIN 
   const unsigned char  TextString608[]=   "";
#endif     
/*****************************************************************************/ 
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString609[]=  "������� ��������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString609[]=  "command is receieved";
#endif
#ifdef  FIN 
   const unsigned char  TextString609[]=   "";
#endif      
/*****************************************************************************/ 
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString610[]=  "������� �� ����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString610[]=  "command is not sent";
#endif
#ifdef  FIN 
   const unsigned char  TextString610[]=   "";
#endif    
/*****************************************************************************/ 
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString611[]=  "������� ����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString611[]=  "command is sent";
#endif
#ifdef  FIN 
   const unsigned char  TextString611[]=   "";
#endif      
/*****************************************************************************/ 
/*
������������ �����
*/ 
#ifdef  RUS 
  const unsigned char   TextString612[]="����� ������� �������:\n����� �������:\n����� ����:\n����� ����������:\n��� ����������:\n��� �������:\nID ������������:\n        ���������� :\n                   ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString612[]  =   "event arriving time:\nevent time:\nzone number:\ndevice address:\ndevice type:\nevent type:\nuser ID:\n        information :\n                   ";
#endif  
#ifdef  FIN 
   const unsigned char  TextString612[] =   "";
#endif 
/*****************************************************************************/ 
/*
������������ �����
*/ 
#ifdef  RUS 
  const unsigned char   TextString613[]="�����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString613[]  =   "fire";
#endif  
#ifdef  FIN 
   const unsigned char  TextString613[] =   "";
#endif    
/*****************************************************************************/ 
/*
������������ �����
*/ 
#ifdef  RUS 
  const unsigned char   TextString614[]="��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString614[]  =   "off";
#endif  
#ifdef  FIN 
   const unsigned char  TextString614[] =   "";
#endif   
/*****************************************************************************/ 
/*
������������ �����
*/ 
#ifdef  RUS 
  const unsigned char   TextString615[]="������ ����. �����\n��� ���� ���-��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString615[]  =   "set temp. threshold\nfor all IPT-AE";
#endif  
#ifdef  FIN 
   const unsigned char  TextString615[] =   "";
#endif       
/*****************************************************************************/ 
/*
������������ �����
*/ 
#ifdef  RUS 
  const unsigned char   TextString616[]="������������ �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString616[]  =   "handle events";
#endif  
#ifdef  FIN 
   const unsigned char  TextString616[] =   "";
#endif    
/*****************************************************************************/ 
/*
������������ �����
*/ 
#ifdef  RUS 
  const unsigned char   TextString617[]="- �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString617[]  =   "- back";
#endif  
#ifdef  FIN 
   const unsigned char  TextString617[] =   "";
#endif    
/*****************************************************************************/ 
/*
������������ �����
*/ 
#ifdef  RUS 
  const unsigned char   TextString618[]="- �����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString618[]  =   "- slave";
#endif  
#ifdef  FIN 
   const unsigned char  TextString618[] =   "";
#endif      
/*****************************************************************************/ 
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString619[]="����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString619[]  =   "DESKTOP";
#endif  
#ifdef  FIN 
   const unsigned char  TextString619[] =   "";
#endif  
/*****************************************************************************/ 
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString620[]="emoji";
#endif 
#ifdef  ENG 
  const unsigned char   TextString620[]  =   "emoji";
#endif  
#ifdef  FIN 
   const unsigned char  TextString620[] =   "";
#endif 
/*****************************************************************************/ 
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString621[]="�����������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString621[]  =   "standard";
#endif  
#ifdef  FIN 
   const unsigned char  TextString621[] =   "";
#endif    
/*****************************************************************************/ 
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString622[]="����� ����� ������ ����������:";
#endif 
#ifdef  ENG 
  const unsigned char   TextString622[]  =   "Blocking screen style selection";
#endif  
#ifdef  FIN 
   const unsigned char  TextString622[] =   "";
#endif       
/*****************************************************************************/ 
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString623[]="- ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString623[]  =   "- forward";
#endif  
#ifdef  FIN 
   const unsigned char  TextString623[] =   "";
#endif     
/*****************************************************************************/ 
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString624[]= "- �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString624[]  =   "- backward";
#endif  
#ifdef  FIN 
   const unsigned char  TextString624[] =   "";
#endif        
/*****************************************************************************/ 
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString625[]="�� ����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString625[]  =   "By zone";
#endif  
#ifdef  FIN 
   const unsigned char  TextString625[] =   "";
#endif     
/*****************************************************************************/ 
/*

*/ 
#ifdef  RUS 
  const unsigned char   TextString626[]= "�� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString626[]  = "By adress";
#endif  
#ifdef  FIN 
   const unsigned char  TextString626[] =   "";
#endif       
/*****************************************************************************/
/*
*/
#ifdef  RUS 
   const unsigned char  TextString627[]=  "������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString627[]=   "fires/coins.";
#endif
#ifdef  FIN 
   const unsigned char  TextString627[]=   "";
#endif      
/*****************************************************************************/
/*
*/
#ifdef  RUS 
   const unsigned char  TextString628[]=  "���-���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString628[]=   "IPT-SkA";
#endif
#ifdef  FIN 
   const unsigned char  TextString628[]=   "";
#endif    
/*****************************************************************************/
/*
*/
#ifdef  RUS 
   const unsigned char  TextString629[]=  "���-���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString629[]=   "IPP-SkA";
#endif
#ifdef  FIN 
   const unsigned char  TextString629[]=   "";
#endif     
   /*****************************************************************************/
/*
*/
#ifdef  RUS 
   const unsigned char  TextString630[]=  "���-���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString630[]=   "MKP-SkA";
#endif
#ifdef  FIN 
   const unsigned char  TextString630[]=   "";
#endif    
/*****************************************************************************/    
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString631[]=  "��-240��";
#endif 
#ifdef  ENG 
   const unsigned char  TextString631[]=  "KL-240AI";
#endif
#ifdef  FIN 
   const unsigned char  TextString631[]=   "";
#endif      
/*****************************************************************************/
/*

*/
#ifdef  RUS 
  const unsigned char   TextString632[]=   "�������������� ��-240��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString632[]  =   "KL-240AI edit";
#endif   
#ifdef  FIN 
   const unsigned char  TextString632[] =   "";
#endif    
/*****************************************************************************/
/*

*/
#ifdef  RUS 
  const unsigned char   TextString633[]=   "����-���� ��-�� ����-��";
#endif 
#ifdef  ENG 
  const unsigned char   TextString633[]  =  "";
#endif   
#ifdef  FIN 
   const unsigned char  TextString633[] =   "";
#endif    
/*****************************************************************************/
/*

*/
#ifdef  RUS 
  const unsigned char   TextString634[]=   "����-���� ��-�� ���������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString634[]  =  "";
#endif   
#ifdef  FIN 
   const unsigned char  TextString634[] =   "";
#endif   
/*****************************************************************************/
/*

*/
#ifdef  RUS 
  const unsigned char   TextString635[]=   "������ ������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString635[]  =  "";
#endif   
#ifdef  FIN 
   const unsigned char  TextString635[] =   "";
#endif 
/*****************************************************************************/
/*

*/
#ifdef  RUS 
  const unsigned char   TextString636[]=   "������ ��������������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString636[]  =  "";
#endif   
#ifdef  FIN 
   const unsigned char  TextString636[] =   "";
#endif    
   
   
/*****************************************************************************/
/*

*/
#ifdef  RUS 
  const unsigned char   TextString637[]=   "������� ��� � �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString637[]  =  "";
#endif   
#ifdef  FIN 
   const unsigned char  TextString637[] =   "";
#endif 
/*****************************************************************************/
/*

*/
#ifdef  RUS 
  const unsigned char   TextString638[]=   "������� ��� ��������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString638[]  =  "";
#endif   
#ifdef  FIN 
   const unsigned char  TextString638[] =   "";
#endif      
/*****************************************************************************/
/*

*/
#ifdef  RUS 
  const unsigned char   TextString639[]=   "���-��� ������.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString639[]  =  "";
#endif   
#ifdef  FIN 
   const unsigned char  TextString639[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString640[]=  "���-���";
#endif 
#ifdef  ENG 
   const unsigned char  TextString640[]=  "IPT-SIk";
#endif
#ifdef  FIN 
   const unsigned char  TextString640[]=   "";
#endif    
/*****************************************************************************/  
 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString641[]=  "������� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString641[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString641[]=   "";
#endif    
/*****************************************************************************/    
   
   
   
   
   
 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString642[]=  "������ 1� � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString642[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString642[]=   "";
#endif    
/*****************************************************************************/   
 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString643[]=  "������ 2� � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString643[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString643[]=   "";
#endif    
/*****************************************************************************/  
 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString644[]=  "��������� � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString644[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString644[]=   "";
#endif    
/*****************************************************************************/  
 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString645[]=  "����� � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString645[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString645[]=   "";
#endif    
/*****************************************************************************/  
 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString646[]=  "K�����a ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString646[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString646[]=   "";
#endif    
/*****************************************************************************/  
 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString647[]=  "C����� ����������������� ����� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString647[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString647[]=   "";
#endif    
/*****************************************************************************/  

 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString649[]=  "����������� ��������� � ���e";
#endif 
#ifdef  ENG 
   const unsigned char  TextString649[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString649[]=   "";
#endif    
/*****************************************************************************/  
 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString650[]=  "����������� �������� � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString650[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString650[]=   "";
#endif    
/*****************************************************************************/  
 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString651[]=  "����������� ����� � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString651[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString651[]=   "";
#endif    
/*****************************************************************************/  
 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString652[]=  "��������� ���������� � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString652[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString652[]=   "";
#endif    
/*****************************************************************************/  
 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString653[]=  "��������.� � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString653[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString653[]=   "";
#endif    
/*****************************************************************************/  
 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString654[]=  "���������� � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString654[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString654[]=   "";
#endif    
/*****************************************************************************/  
 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString655[]=  "��������� � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString655[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString655[]=   "";
#endif    
/*****************************************************************************/  
 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString656[]=  "������������� � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString656[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString656[]=   "";
#endif    
/*****************************************************************************/     
 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString657[]=  "���������� �������� � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString657[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString657[]=   "";
#endif    
/*****************************************************************************/     
 /*
������������ ����������.
*/
#ifdef  RUS 
   const unsigned char  TextString658[]=  "������� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextString658[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString658[]=   "";
#endif    
/*****************************************************************************/     
 /*
*/
#ifdef  RUS 
   const unsigned char  TextString659[]=  "����������� ����� � ����";
#endif 
#ifdef  ENG 
   const unsigned char  TextString659[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString659[]=   "";
#endif    
/*****************************************************************************/     
/*
*/
#ifdef  RUS 
  const unsigned char   TextString660[]=  "����������.������� ������� �������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString660[]  =   "";
#endif   
#ifdef  FIN 
   const unsigned char  TextString660[] =   "";
#endif
/*****************************************************************************/    
/*
*/
#ifdef  RUS 
  const unsigned char   TextString661[]=  "����������.������� ������� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString661[]  =   "";
#endif   
#ifdef  FIN 
   const unsigned char  TextString661[] =   "";
#endif
/*****************************************************************************/    
/*
*/
#ifdef  RUS 
  const unsigned char   TextString662[]=  "������� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString662[]  =   "";
#endif   
#ifdef  FIN 
   const unsigned char  TextString662[] =   "";
#endif
/*****************************************************************************/        
/*
*/
#ifdef  RUS 
  const unsigned char   TextString663[]=    "���. ����-�� ������";
#endif 
#ifdef  ENG 
  const unsigned char   TextString663[]  =  "";
#endif   
#ifdef  FIN 
   const unsigned char  TextString663[] =   "";
#endif
/*****************************************************************************/   
/*
*/
#ifdef  RUS 
  const unsigned char   TextString664[]=    "���. ����-�� �����";
#endif 
#ifdef  ENG 
  const unsigned char   TextString664]  =  "";
#endif   
#ifdef  FIN 
   const unsigned char  TextString664[] =   "";
#endif
/*****************************************************************************/      
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString665[]=  "�RC-������ ���.15";
#endif 
#ifdef  ENG 
   const unsigned char  TextString665[]=   "tab.15 �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString665[] =   "";
#endif
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextString666[]=  "�RC-������ ���.16";
#endif 
#ifdef  ENG 
   const unsigned char  TextString666[]=   "tab.15 �RC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString666[] =   "";
#endif   
   
   
   
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1001[]=  "���������� ������� �������, ������� ��� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1001[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1001[] =   "";
#endif      
   
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1002[]=  "������ ��������� ��-�� ������������ ������� ���������, ������������ �� �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1002[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1002[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1003[]=  "������ ��������� ��-�� ������������ ������� ���������, ������������ �� ����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1003[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1003[] =   "";
#endif      
 /*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1004[]=  "�� ����������� ������� � ������� task_InitLS � �������� ������������� - 120 ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1004[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1004[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1005[]=  "�� ����������� ������� � ������� task_InitLS � �������� ������������� ������� ����������� - 20 ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1005[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1005[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1006[]=  "�� ����������� ������� � ������� task_InitLS � �������� ������������� - 0,7 ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1006[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1006[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1007[]=  "�� ����������� ������� � ������� task_InitLS � �������� ������������� - 120 ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1007[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1007[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1008[]=  "�� ����������� ������� � ������� task_InitLS � �������� ������������� - 20 ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1008[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1008[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1009[]=  "�� ����������� ������� � ������� task_InitLS � �������� ������������� - 75 �";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1009[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1009[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1010[]=  "�� ����������� ������� � ������� task_InitLS � �������� ������������� ������ ����������� - 20 ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1010[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1010[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1011[]=  "�� ����������� ������� � ������� task_InitLS � �������� ������������� ������ ����������� - 75 �";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1011[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1011[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1012[]=  "�� ����������� ������� � ������� task_InitLS � �������� ������������� - 120 ��� ��� �������� ������� ��������� �������� � �������� �������������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1012[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1012[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1013[]=  "�� ����������� ������� � ������� task_InitLS � �������� ������������� - 50 m�";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1013[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1013[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1014[]=  "��� ������ �������� � ������� ����� ��������� ��������� sDelayKZ_InitRightDir ��� sDelayKZ_InitLeftDir �� ��� �������� ��������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1014[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1014[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1015[]=  "��� ������ �������� � ������� ����� ��������� ��������� sDelayInitLS �� ��� �������� ��������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1015[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1015[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1016[]=  "������������ ����� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1016[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1016[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1032[]=  "������� ������� �� �������� 75 �";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1032[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1032[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1033[]=  "������� ������������� �� ������� ��-�� �������� ���������� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1033[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1033[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1034[]=  "������� ������������� ��������, �� � �� ������������ �� � ������� ������������ �����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1034[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1034[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1035[]=  "������� ������������� �� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1035[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1035[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1036[]=  "������� ������������� ������� ��-�� ����������� ������ � �������� �������������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1036[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1036[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1041[]=  "� �������� ������������� �� ���� ���������� ������������� (�������� ����������� ���������� ��, ��� ������� �� �� ������ ����� ��), ����������� ��������� ������������� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1041[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1041[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1051[]=  "�� �� �� ����� ����� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1051[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1051[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1052[]=  "�� �� �� ������ ����� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1052[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1052[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1053[]=  "����� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1053[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1053[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1054[]=  "�� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1054[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1054[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1055[]=  "�� ����������� ����������� ����� ���������� ������ ��� �� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1055[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1055[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1071[]=  "��� ��������� ������������� �� ����� ������ ���������� �� ����� ����������� ��� ������� ������ �� ������� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1071[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1071[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1073[]=  "��� ��������� ������������� �� ����� ������ ���������� �� ������ ����������� ��� ������� ������ �� ������ ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1073[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1073[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1074[]=  "�� �������� ����� �������� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1074[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1074[] =   "";
#endif      
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1075[]=  "�� �������� ������ �������� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1075[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1075[] =   "";
#endif      
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1101[]=  "����� ������� ������������� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1101[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1101[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1102[]=  "������� ������������� �� ������� ��������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1102[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1102[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1103[]=  "������� ������������� �� ��������, �� � �� ������������ ������������� ( ��, ����� ��� ���������� � ��������������������� �������)";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1103[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1103[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1104[]=  "������� ������������� �� ������� �������� (�� ������������)";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1104[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1104[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1105[]=  "� �������� ������������� �� � ����� ���������� ������������� (��, �����, ����� 251 ��� �������� ����� ���������� ��)";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1105[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1105[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1106[]=  "���������� ����� ����������� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1106[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1106[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1107[]=  "��������� ����� ����������� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1107[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1107[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1108[]=  "���������� ������ ����������� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1108[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1108[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1109[]=  "��������� ������ ����������� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1109[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1109[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1110[]=  "������� ������ �� ������� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1110[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1110[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1111[]=  "������� ������ �� ������ ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1111[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1111[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1112[]=  "������ ���������� ����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1112[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1112[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1113[]=  "����� ������� ������������� �� � ����� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1113[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1113[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1114[]=  "����� ������� ������������� �� � ������ �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1114[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1114[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1120[]=  "������ ����� � �� (�� �� ��������)";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1120[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1120[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1121[]=  "������ ����� � �� (������������� ������ �����)";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1121[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1121[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1122[]=  "�������������� ����� ���������� ����� � ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1122[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1122[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1123[]=  "��������� �� � ����������� �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1123[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1123[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1124[]=  "�� ������� ������� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1124[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1124[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1125[]=  "��������� ������� �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1125[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1125[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1126[]=  "���������� ���������� � ��������������������� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1126[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1126[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1127[]=  "��������� ��� ����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1127[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1127[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1128[]=  "���������� ������ ��  ����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1128[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1128[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1129[]=  "���������� ������ ��������� �����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1129[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1129[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1130[]=  "������������ ������ ������� ModBus";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1130[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1130[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1131[]=  "�����";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1131[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1131[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1132[]=  "������� ���������� �������� ������� ev_EventDriverModBus";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1132[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1132[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1133[]=  "������ � EEPROM ����������� � �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1133[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1133[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1134[]=  "�������� �� �������� (����� ��� ��)";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1134[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1134[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1135[]=  "�������� ������� �� ��������� �������������(����� ��� ��) � ��������� �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1135[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1135[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1136[]=  "��������� ���������� � ����� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1136[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1136[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1137[]=  "������������� �� (����� ��� ��)";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1137[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1137[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1138[]=  "��� ������ ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1138[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1138[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1139[]=  "������ �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1139[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1139[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1140[]=  "������ ������ ������� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1140[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1140[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1141[]=  "� ���������� ������� �������� �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1141[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1141[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1142[]=  "���� n ������ ��� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1142[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1143[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1143[]=  "����� ����� n ������ ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1143[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1143[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1144[]=  "�� ����� n ������ ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1144[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1144[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1145[]=  "���������� ������� ����������� ������ ����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1145[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1145[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1146[]=  "��������� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1146[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1146[] =   "";
#endif      

/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1147[]=  "�������� ����� ����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1147[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1147[] =   "";
#endif 
   
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1148[]=  "�������� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1148[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1148[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1149[]=  "����� n ������ ��� ��������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1149[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1149[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1150[]=  "����� n ������ ��� �������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1150[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1150[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1151[]=  "����� ��� �� ����� ���������� �������� ������ n ������ ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1151[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1151[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1152[]=  "������������� ������������� �������� ������ n ������ ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1152[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1152[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1153[]=  "������ ��� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1153[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1153[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1154[]=  "������ ��� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1154[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1154[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1155[]=  "������ ��� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1155[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1155[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1156[]=  "������ ��� (������ ��������� ������ ��� �������� ������)";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1156[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1156[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1157[]=  "������� ������ ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1157[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1157[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1158[]=  "������� ������ ���";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1158[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1158[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1159[]=  "������ ��� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1159[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1159[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1170[]=  "������: ���������� �� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1170[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1170[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1180[]=  "�� ����������� ��������� �����������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1180[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1180[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1181[]=  "� ����� ������ ��������� ������� �� ���� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1181[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1181[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1182[]=  "������� �� ���� ��������� �� ��������� � ����� ������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1182[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1182[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1183[]=  "������� �� ����� ���� �������� - �� ������ ��� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1183[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1183[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1184[]=  "������� �� ����� ���� �������� - ��������� ���������";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1184[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1184[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1185[]=  "������� �� ����� ���� �������� - ���������� ��";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1185[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1185[] =   "";
#endif 
 
/*****************************************************************************/
/*
������������ ���������.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1186[]=  "������� �� ����� ���� �������� - � ����������� ���������� �����";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1186[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1186[] =   "";
#endif 
 

   

   
   

const unsigned char  PunctuationMark1[]=".";
const unsigned char  PunctuationMark2[]=";";
const unsigned char  PunctuationMark3[]=",";
const unsigned char  PunctuationMark4[]="-";
const unsigned char  PunctuationMark5[]="";
const unsigned char  PunctuationMark6[]=" ";
const unsigned char  PunctuationMark7[]="�";
const unsigned char  PunctuationMark8[]="|";
const unsigned char  PunctuationMark9[]="V";
const unsigned char  PunctuationMark10[]="0";
const unsigned char  PunctuationMark11[]="?";
const unsigned char  PunctuationMark12[]="01";
const unsigned char  PunctuationMark13[]="02";
const unsigned char  PunctuationMark14[]="03";
const unsigned char  PunctuationMark15[]="04";
const unsigned char  PunctuationMark16[]="05";
const unsigned char  PunctuationMark17[]="06";
const unsigned char  PunctuationMark18[]="07";
const unsigned char  PunctuationMark19[]="08";
const unsigned char  PunctuationMark20[]="09";
const unsigned char  PunctuationMark21[]="10";
const unsigned char  PunctuationMark22[]="11";
const unsigned char  PunctuationMark23[]="12";
const unsigned char  PunctuationMark24[]="1";
const unsigned char  PunctuationMark25[]=":";
const unsigned char  PunctuationMark26[]="(";
const unsigned char  PunctuationMark27[]=")";
const unsigned char  PunctuationMark28[]="/";
   
   
   
   
   
   
   
   
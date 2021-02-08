
#ifndef  __SYSTEM_TEXT_H
#define  __SYSTEM_TEXT_H

#include "main.h"


/*
перевод необходимо вставлять в кавычки !!!!!!!!
*/ 


#define RUS 
//#define ENG 
/*****************************************************************************/ 
/*
наименование меню
*/ 
#ifdef  RUS 
  const unsigned char   TextString1[]=   "Настройки";   
#endif 
#ifdef  ENG 
   const unsigned char  TextString1[]=   "Settings";
#endif   
#ifdef  FIN 
   const unsigned char  TextString1[]=   "екала пукала";
#endif     
/*****************************************************************************/ 
/*
место где можно посмотреть события
*/ 
#ifdef  RUS 
   const unsigned char  TextString2[]=    "Журнал";
#endif 
#ifdef  ENG 
   const unsigned char  TextString2[]=   "Event log";
#endif   
#ifdef  FIN 
   const unsigned char  TextString2[]  =   "пулька";
#endif       
/*****************************************************************************/ 
/*
наименование строк
*/ 
#ifdef  RUS 
  const unsigned char   TextString3[]="время прихода события:\nвремя события:\nномер зоны:\nадрес устройства:\nтип устройства:\nтип события:\nID пользователя:\n        информация :\n                    \nстатус неисправности:";
#endif 
#ifdef  ENG 
  const unsigned char   TextString3[]  =   "event arriving time:\nevent time:\nzone number:\ndevice address:\ndevice type:\nevent type:\nuser ID:\n        information :\n                    \nfault status:";
#endif  
#ifdef  FIN 
   const unsigned char  TextString3[] =   "";
#endif  
/*****************************************************************************/ 
/*
Нименование устройства (блок контроля управления).
*/   
#ifdef  RUS 
   const unsigned char  TextString4[]=  "БКУ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString4[]=   "BKU";
#endif
#ifdef  FIN 
   const unsigned char  TextString4[]=   "";
#endif    
/*****************************************************************************/
/*
Наименование устройства.
*/    
#ifdef  RUS 
   const unsigned char  TextString5[]=  "КЛ-240СА";
#endif 
#ifdef  ENG 
   const unsigned char  TextString5[]=  "KL-240SA";
#endif
#ifdef  FIN 
   const unsigned char  TextString5[]=   "";
#endif   
/*****************************************************************************/ 
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString6[]=  "ИПТ-СА";
#endif 
#ifdef  ENG 
   const unsigned char  TextString6[]=  "IPT-SA";
#endif
#ifdef  FIN 
   const unsigned char  TextString6[]=   "";
#endif    
/*****************************************************************************/    
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString7[]=  "КЛ-240АЭ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString7[]=  "KL-240AE";
#endif
#ifdef  FIN 
   const unsigned char  TextString7[]=   "";
#endif   
/*****************************************************************************/ 
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString8[]=  "ИПТ-АЭ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString8[]=  "IPT-AE";
#endif 
#ifdef  FIN 
   const unsigned char  TextString8[]=   "";
#endif  
/*****************************************************************************/ 
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString9[]=  "МС-СА";
#endif 
#ifdef  ENG 
   const unsigned char  TextString9[]=   "MS-SA";
#endif
#ifdef  FIN 
   const unsigned char  TextString9[]=   "";
#endif   
/*****************************************************************************/ 
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString10[]=  "МКП-СА";
#endif 
#ifdef  ENG 
   const unsigned char  TextString10[]=   "MKP-SA";
#endif
#ifdef  FIN 
   const unsigned char  TextString10[]=   "";
#endif   
/*****************************************************************************/   
/*
Часть сообщения. Передает состояние устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString11[]=  "норма";
#endif 
#ifdef  ENG 
   const unsigned char  TextString11[]=   "norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString11[]=   "";
#endif     
/*****************************************************************************/ 
/*
Часть сообщения. Передает состояние устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString12[]=  "неисправность";
#endif 
#ifdef  ENG 
   const unsigned char  TextString12[]=   "fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString12[]=   "";
#endif    
/*****************************************************************************/ 
/*
Часть сообщения. Передает состояние устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString13[]=  "тревога";
#endif 
#ifdef  ENG 
   const unsigned char  TextString13[]=   "alarm";
#endif   
#ifdef  FIN 
   const unsigned char  TextString13[]=   "";
#endif 
/*****************************************************************************/ 
/*
Наименование сообщения.
*/
#ifdef  RUS 
   const unsigned char  TextString14[]=  "отсчет";
#endif 
#ifdef  ENG 
   const unsigned char  TextString14[]=   "countdown";
#endif 
#ifdef  FIN 
   const unsigned char  TextString14[] =   "";
#endif    
/*****************************************************************************/ 
/*
наименование типа сообщений
*/
#ifdef  RUS 
   const unsigned char  TextString15[]=  "служебные";
#endif 
#ifdef  ENG 
   const unsigned char  TextString15[]=   "service";
#endif 
#ifdef  FIN 
   const unsigned char  TextString15[]=   "";
#endif    
/*****************************************************************************/ 
/*
Нименование типа команды в меню "Потверждение комманд с АРМ"(команда "пуск").
Под коомандой "пуск" подрузамевается начало тушения пожара.
*/
#ifdef  RUS 
   const unsigned char  TextString16[]=  "Пуск";
#endif 
#ifdef  ENG 
   const unsigned char  TextString16[]=   "Activation";
#endif
#ifdef  FIN 
   const unsigned char  TextString16[]=   "";
#endif   
/*****************************************************************************/
/*
наименование меню
*/   
#ifdef  RUS 
   const unsigned char  TextString17[]=  "Основные настройки";
#endif 
#ifdef  ENG 
   const unsigned char  TextString17[]=   "MAIN SETTINGS";
#endif
#ifdef  FIN 
   const unsigned char  TextString17[] =   "";
#endif    
/*****************************************************************************/   
/*
наименование меню
*/   
#ifdef  RUS 
   const unsigned char  TextString18[]=  "Информация";
#endif 
#ifdef  ENG 
   const unsigned char  TextString18[]=   "INFORMATION";
#endif 
#ifdef  FIN 
   const unsigned char  TextString3[] =   "";
#endif    
/*****************************************************************************/ 
/*
наименование меню
*/   
#ifdef  RUS 
   const unsigned char  TextString19[]=  "Доступ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString19[]=   "ACCESS";
#endif 
#ifdef  FIN 
   const unsigned char  TextString19[] =   "";
#endif    
/*****************************************************************************/ 
/*
наименование меню
*/   
#ifdef  RUS 
   const unsigned char  TextString20[]=  "Работа с памятью";
#endif 
#ifdef  ENG 
   const unsigned char  TextString20[]=   "BLOCKS OF FLASH";
#endif 
#ifdef  FIN 
   const unsigned char  TextString20[] =   "";
#endif    
/*****************************************************************************/ 
/*
наименование меню
*/   
#ifdef  RUS 
   const unsigned char  TextString21[]=  "Установка времени";
#endif 
#ifdef  ENG 
   const unsigned char  TextString21[]=   "TIME SETTING";
#endif 
#ifdef  FIN 
   const unsigned char  TextString21[] =   "";
#endif   
/*****************************************************************************/ 
/*
наименование меню
*/   
#ifdef  RUS 
   const unsigned char  TextString22[]=  "Меню настройки";
#endif 
#ifdef  ENG 
   const unsigned char  TextString22[]=   "SETTINGS";
#endif 
#ifdef  FIN 
   const unsigned char  TextString22[] =   "";
#endif 
/*****************************************************************************/ 
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString23[]=  "Мастер";
#endif 
#ifdef  ENG 
   const unsigned char  TextString23[]=   "MASTER";
#endif
#ifdef  FIN 
   const unsigned char  TextString23[]=   "";
#endif    
/*****************************************************************************/ 
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString24[]=  "Ведомый";
#endif 
#ifdef  ENG 
   const unsigned char  TextString24[]=   "SLAVE";
#endif 
#ifdef  FIN 
   const unsigned char  TextString24[]=   "";
#endif 
/*****************************************************************************/ 
/*
Наименование меню. Данное меню содержит описание областей. Область это тип 
объединения который задает число масимально запускаемых извещателей.Извещатель 
- устройство выполняюще; функции отслеживания пожаров и их тушение. Под запуском 
извещателя подразумевается начало тушения
*/
#ifdef  RUS 
  const unsigned char   TextString25[]=  "Управление.таблица описания областей";
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
   const unsigned char  TextString26[]=  "БЛОКИРОВКА КЛАВИАТУРЫ";
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
   const unsigned char  TextString27[]=  "РЕЗЕРВНОЕ КОПИРОВАНИЕ";
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
   const unsigned char  TextString28[]=  "Таблица устройств";
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
   const unsigned char  TextString31[]=  "Таблица запуска";
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
   const unsigned char  TextString32[]=  "Таблица исполнительных устройств";
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
   const unsigned char  TextString33[]=  "Таблица описания адресов";
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
   const unsigned char  TextString34[]=   "Таблица описания зон";
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
   const unsigned char  TextString35[]=   "ОПРОС ПОДЧИНеННЫХ";
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
   const unsigned char  TextString36[]=  "Области ";
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
   const unsigned char  TextString37[]=  "Области";
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
   const unsigned char  TextString38[]=  "Зоны";
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
   const unsigned char  TextString39[]=  "Внешние адреса с зонами";
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
   const unsigned char  TextString40[]=  "Дренчерные группы";
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
   const unsigned char  TextString42[]=  "Запуск дренчеров по зонам";
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
   const unsigned char  TextString43[]=  "ЗАПУСК ДРЕНЧЕРОВ ПО ЗОНАМ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString43[]=   "STARTING DELUGES ON ZONES";
#endif
#ifdef  FIN 
   const unsigned char  TextString43[] =   "";
#endif    
/*****************************************************************************/
/*
Наименование вкладки. Вкладка информирует пользователя о появлении различных служебных 
сообщений. 
*/
#ifdef  RUS 
   const unsigned char  TextString44[]=  "другое";
#endif 
#ifdef  ENG 
   const unsigned char  TextString44[]=   "other";
#endif
#ifdef  FIN 
   const unsigned char  TextString44[]=   "";
#endif   
/*****************************************************************************/
/*
Наименование вкладки. Вкладка информирует пользователя о обнаружениии ситемой
Пожаров. 
*/
#ifdef  RUS 
   const unsigned char  TextString46[]=  "пожары";
#endif 
#ifdef  ENG 
   const unsigned char  TextString46[]=   "fires";
#endif
#ifdef  FIN 
   const unsigned char  TextString46[]=   "";
#endif    
/*****************************************************************************/
/*
Наименование вкладки. Вкладка информирует пользователя о обнаружениии ситемой
неисправности устройств. 
*/
#ifdef  RUS 
   const unsigned char  TextString47[]=  "неисправности";
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
Наименование состояния.
*/
#ifdef  RUS 
   const unsigned char  TextString50[]=  "КЗ";
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
   const unsigned char  TextString51[]=  "пуски";
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
   const unsigned char  TextString52[]=  "время прихода события ";
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
   const unsigned char  TextString53[]=  "время события";
#endif 
#ifdef  ENG 
   const unsigned char  TextString53[]=   "Event time";
#endif  
#ifdef  FIN 
   const unsigned char  TextString53[] =   "";
#endif    
/*****************************************************************************/
/*
нАИМЕНОВАНИЕ ОБЪЕДИНЕНИЯ АУ
*/
#ifdef  RUS 
   const unsigned char  TextString54[]=  "НОМЕР ЗОНЫ";
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
   const unsigned char  TextString55[]=  "адрес устройства";
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
   const unsigned char  TextString56[]=  "тип устройства";
#endif 
#ifdef  ENG 
   const unsigned char  TextString56[]=   "device type";
#endif 
#ifdef  FIN 
   const unsigned char  TextString56[] =   "";
#endif    
/*****************************************************************************/
/*
нАИМЕНОВАНИЕ
*/
#ifdef  RUS 
   const unsigned char  TextString57[]=  "ТИП СОБЫТИЯ";
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
   const unsigned char  TextString58[]=  "ID пользователя";
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
   const unsigned char  TextString59[]=  "строка информации 1";
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
   const unsigned char  TextString60[]=  "строка информации 2";
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
   const unsigned char  TextString61[]=  "статус неисправности";
#endif 
#ifdef  ENG 
   const unsigned char  TextString61[]=   "fault status";
#endif   
#ifdef  FIN 
   const unsigned char  TextString61[] =   "";
#endif    
/*****************************************************************************/
/*
Наименование меню. Данное меню используется для отображения сообщений в системе.
*/
#ifdef  RUS 
   const unsigned char  TextString62[]=  "Буфер тревог";
#endif 
#ifdef  ENG 
   const unsigned char  TextString62[]=   "Event buffer";
#endif
#ifdef  FIN 
   const unsigned char  TextString62[] =   "";
#endif    
/*****************************************************************************/
/*
Текст окна сообщения. 
*/
#ifdef  RUS 
  const unsigned char   TextString63[]=  " процедуры СБРОС";
#endif 
#ifdef  ENG 
  const unsigned char   TextString63[]  =   "reset procedure";
#endif   
#ifdef  FIN 
   const unsigned char  TextString63[] =   "";
#endif
/*****************************************************************************/
/*
Наименование кнопки. 
*/
#ifdef  RUS 
  const unsigned char   TextString64[]=  "- отмена";
#endif 
#ifdef  ENG 
  const unsigned char   TextString64[]  =   "- cancel";
#endif   
#ifdef  FIN 
   const unsigned char  TextString64[] =   "";
#endif      
/*****************************************************************************/
/*
адресное устройство
*/
#ifdef  RUS 
   const unsigned char  TextString65[]=  "АУ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString65[]=   "AD";
#endif   
#ifdef  FIN 
   const unsigned char  TextString65[] =   "";
#endif 
/*****************************************************************************/
/*
Текст окна сообщения. 
*/
#ifdef  RUS 
  const unsigned char   TextString66[]=  "Дождитесь окончания";
#endif 
#ifdef  ENG 
  const unsigned char   TextString66[]  =   "Wait until finish";
#endif   
#ifdef  FIN 
   const unsigned char  TextString66[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Под запуском извещателя подразумевается начало тушения.
*/
#ifdef  RUS 
   const unsigned char  TextString67[]=  "Ручной запуск";
#endif 
#ifdef  ENG 
   const unsigned char  TextString67[]=   "Manual activation";
#endif
#ifdef  FIN 
   const unsigned char  TextString67[] =   "";
#endif    
/*****************************************************************************/
/*
наименование кнопки.
*/
#ifdef  RUS 
   const unsigned char  TextString68[]=  "- запуск";
#endif 
#ifdef  ENG 
   const unsigned char  TextString68[]=   "- activation";
#endif 
#ifdef  FIN 
   const unsigned char  TextString68[] =   "";
#endif  
/*****************************************************************************/
/*
наименование кнопки.
*/
#ifdef  RUS 
   const unsigned char  TextString69[]=  "- добавить";
#endif 
#ifdef  ENG 
   const unsigned char  TextString69[]=   "- add";
#endif
#ifdef  FIN 
   const unsigned char  TextString69[] =   "";
#endif   
/*****************************************************************************/
/*
наименование кнопки.
*/
#ifdef  RUS 
   const unsigned char  TextString70[]=  "- удалить строку";
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
   const unsigned char  TextString71[]=  "F2 - пауза / продолжить";
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
   const unsigned char  TextString72[]=  "F3 - отменить";
#endif 
#ifdef  ENG 
   const unsigned char  TextString72[]=   "F3 - cancel";
#endif
#ifdef  FIN 
   const unsigned char  TextString72[] =   "";
#endif    
/*****************************************************************************/
/*
Наименование кнопки. Нажатие на кнопку позволяет изменить состояние одного
элемента.
*/
#ifdef  RUS 
   const unsigned char  TextString74[]=  "- изменить";
#endif 
#ifdef  ENG 
   const unsigned char  TextString74[]=   "- change";
#endif
#ifdef  FIN 
   const unsigned char  TextString74[] =   "";
#endif    
/*****************************************************************************/
/*
Наименование кнопки. Нажатие на кнопку позволяет изменить состояние одного
элемента.
*/
#ifdef  RUS 
   const unsigned char  TextString75[]=  "- изменить все";
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
  const unsigned char   TextString76[]=  "состояние";
#endif 
#ifdef  ENG 
  const unsigned char   TextString76[]  =   "condition";
#endif   
#ifdef  FIN 
   const unsigned char  TextString76[] =   "";
#endif
/*****************************************************************************/
/*
Наименование и указание номера зоны. Зона это тип объединения который задает 
масимальное время запуска запуска извещателей.Извещатель - устройство выполняюще; 
функции отслеживания пожаров и их тушение. Под запуском извещателя подразумевается 
начало тушения.
*/
#ifdef  RUS 
   const unsigned char  TextString77[]=  "зона";
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
   const unsigned char  TextString78[]=  "таймер";
#endif 
#ifdef  ENG 
   const unsigned char  TextString78[]=   "timer";
#endif
#ifdef  FIN 
   const unsigned char  TextString78[] =   "";
#endif      
/*****************************************************************************/
/*
Текст окна сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString79[]=  "   Для подтверждения пуска нажмите ввод\n       для выхода без пуска нажмите Отмена";
#endif 
#ifdef  ENG 
  const unsigned char   TextString79[]  =   "for activation conformation press enter\n for exit without activation press Cancel";
#endif   
#ifdef  FIN 
   const unsigned char  TextString79[] =   "";
#endif   
/*****************************************************************************/
/*
контролер линии
*/
#ifdef  RUS 
  const unsigned char   TextString80[]=  "КЛ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString80[]  =   "KL";
#endif   
#ifdef  FIN 
   const unsigned char  TextString80[] =   "";
#endif
/*****************************************************************************/
/*
наименование столбца. 
*/
#ifdef  RUS 
  const unsigned char   TextString81[]=  "Список адресов";
#endif 
#ifdef  ENG 
  const unsigned char   TextString81[]  =   "address list";
#endif   
#ifdef  FIN 
   const unsigned char  TextString81[] =   "";
#endif  
/*****************************************************************************/
/*
Наименование и указание номера устройства. 
*/  
#ifdef  RUS
   const unsigned char  TextString82[]=  "адрес";
#endif 
#ifdef  ENG 
   const unsigned char  TextString82[]=   "address";
#endif
#ifdef  FIN 
   const unsigned char  TextString82[] =   "";
#endif    
/*****************************************************************************/
/*
Наименование пункта окна. Располагается на против наименования устройства
в системе.
*/
#ifdef  RUS
   const unsigned char  TextString83[]=  "тип";
#endif 
#ifdef  ENG 
   const unsigned char  TextString83[]=   "type";
#endif
#ifdef  FIN 
   const unsigned char  TextString83[] =   "";
#endif 
/*****************************************************************************/
/*
Наименование; тип пользователя.
*/
#ifdef  RUS
   const unsigned char  TextString84[]=  "польз-ль";
#endif 
#ifdef  ENG 
   const unsigned char  TextString84[]=   "USER";
#endif
#ifdef  FIN 
   const unsigned char  TextString84[] =   "";
#endif
/*****************************************************************************/
/*
наименование номера карты пользователя
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
   const unsigned char  TextString86[]=  "неисправность адреса";
#endif 
#ifdef  ENG 
   const unsigned char  TextString86[]=   "address fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString86[] =   "";
#endif    
/*****************************************************************************/
/*
Наименование состояния.
*/
#ifdef  RUS
   const unsigned char  TextString87[]=  "внимание";
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
   const unsigned char  TextString88[]=  "адрес в пожаре";
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
   const unsigned char  TextString89[]=  "короткое замыкание";
#endif 
#ifdef  ENG 
   const unsigned char  TextString89[]=   "Short";
#endif
#ifdef  FIN 
   const unsigned char  TextString89[] =   "";
#endif    
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString90[]=  "ошибка таблицы 7";
#endif 
#ifdef  ENG 
   const unsigned char  TextString90[]=   "table error";
#endif
#ifdef  FIN 
   const unsigned char  TextString90[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString91[]=  "сработало внешнее АУ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString91[]=   "external command";
#endif
#ifdef  FIN 
   const unsigned char  TextString91[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString92[]=  "АУ включен в опрос";
#endif 
#ifdef  ENG 
   const unsigned char  TextString92[]=   "AD polling on";
#endif
#ifdef  FIN 
   const unsigned char  TextString92[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString93[]=  "ком. на включение АУ в опрос";
#endif 
#ifdef  ENG 
   const unsigned char  TextString93[]=   "address activation command";
#endif
#ifdef  FIN 
   const unsigned char  TextString93[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString94[]=  "АУ исключен из опроса";
#endif 
#ifdef  ENG 
   const unsigned char  TextString94[]=   "AD polling off";
#endif
#ifdef  FIN 
   const unsigned char  TextString94[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString95[]=  "ком. на выкл. АУ из опроса";
#endif 
#ifdef  ENG 
   const unsigned char  TextString95[]=   "AD polling off command";
#endif
#ifdef  FIN 
   const unsigned char  TextString95[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString96[]=  "нагрев оросителя";
#endif 
#ifdef  ENG 
   const unsigned char  TextString96[]=   "sprinkler heating";
#endif
#ifdef  FIN 
   const unsigned char  TextString96[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString97[]=  "нагрев оросителя окончен";
#endif 
#ifdef  ENG 
   const unsigned char  TextString97[]=   "sprinkler heating is over";
#endif
#ifdef  FIN 
   const unsigned char  TextString97[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString98[]=  "КЗ нагревательного элемента";
#endif 
#ifdef  ENG 
   const unsigned char  TextString98[]=   "Short-circuit of heating element";
#endif
#ifdef  FIN 
   const unsigned char  TextString98[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString99[]=  "неисправность ионистора";
#endif 
#ifdef  ENG 
   const unsigned char  TextString99[]=   "ionistor fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString99[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString100[]=  "неисправность сенсора";
#endif 
#ifdef  ENG 
   const unsigned char  TextString100[]=   "sensor fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString100[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString101[]=  "норма ионистора";
#endif 
#ifdef  ENG 
   const unsigned char  TextString101[]=   "ionistor OK";
#endif
#ifdef  FIN 
   const unsigned char  TextString101[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString102[]=  "норма сенсора";
#endif 
#ifdef  ENG 
   const unsigned char  TextString102[]=   "sensor OK";
#endif
#ifdef  FIN 
   const unsigned char  TextString102[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString103[]=  "ИКЗ1";
#endif 
#ifdef  ENG 
   const unsigned char  TextString103[]=   "ISOL1";
#endif
#ifdef  FIN 
   const unsigned char  TextString103[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString104[]=  "ИКЗ2";
#endif 
#ifdef  ENG 
   const unsigned char  TextString104[]=   "ISOL2";
#endif
#ifdef  FIN 
   const unsigned char  TextString104[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString105[]=  "норм ИКЗ1";
#endif 
#ifdef  ENG 
   const unsigned char  TextString105[]=   "ISOL1 norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString105[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString106[]=  "норм ИКЗ2";
#endif 
#ifdef  ENG 
   const unsigned char  TextString106[]=   "ISOL2 norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString106[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString107[]=  "ком. на доб-е адреса в зап.";
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
   const unsigned char  TextString108[]=  "низкое напряжение";
#endif 
#ifdef  ENG 
   const unsigned char  TextString108[]=   "low voltage";
#endif
#ifdef  FIN 
   const unsigned char  TextString108[] =   "";
#endif    
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString109[]=  "команда на ручн. пуск";
#endif 
#ifdef  ENG 
   const unsigned char  TextString109[]=   "manual activ. command";
#endif
#ifdef  FIN 
   const unsigned char  TextString109[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения
*/
#ifdef  RUS
   const unsigned char  TextString110[]=  "подана команда";
#endif 
#ifdef  ENG 
   const unsigned char  TextString110[]=   "command sent";
#endif
#ifdef  FIN 
   const unsigned char  TextString110[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString111[]=  "готов к пуску";
#endif 
#ifdef  ENG 
   const unsigned char  TextString111[]=   "ready for activ.";
#endif
#ifdef  FIN 
   const unsigned char  TextString111[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString112[]=  "событие 9";
#endif 
#ifdef  ENG 
   const unsigned char  TextString112[]=   "event 9";
#endif
#ifdef  FIN 
   const unsigned char  TextString112[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString113[]=  "событие 10";
#endif 
#ifdef  ENG 
   const unsigned char  TextString113[]=   "event 10";
#endif
#ifdef  FIN 
   const unsigned char  TextString113[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString114[]=  "событие 11";
#endif 
#ifdef  ENG 
   const unsigned char  TextString114[]=   "event 11";
#endif
#ifdef  FIN 
   const unsigned char  TextString114[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString115[]=  "событие 12";
#endif 
#ifdef  ENG 
   const unsigned char  TextString115[]=   "event 12";
#endif
#ifdef  FIN 
   const unsigned char  TextString115[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString116[]=  "нет пуска на АУ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString116[]=   "no activ";
#endif
#ifdef  FIN 
   const unsigned char  TextString116[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString117[]=  "адрес отсутствует";
#endif 
#ifdef  ENG 
   const unsigned char  TextString117[]=   "no address";
#endif
#ifdef  FIN 
   const unsigned char  TextString117[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString118[]=  "потеря связи КЛ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString118[]=   "no KL connection";
#endif
#ifdef  FIN 
   const unsigned char  TextString118[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString119[]=  "восстановление связи КЛ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString119[]=   "KL connection norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString119[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString120[]=  "ошибка инициализаций КЛ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString120[]=   "KL initialization error";
#endif
#ifdef  FIN 
   const unsigned char  TextString120[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString121[]=  "инициализация КЛ выполнена";
#endif 
#ifdef  ENG 
   const unsigned char  TextString121[]=   "KL initialization complete";
#endif
#ifdef  FIN 
   const unsigned char  TextString121[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString122[]=  "крышка открыта КЛ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString122[]=   "KL tamper active";
#endif
#ifdef  FIN 
   const unsigned char  TextString122[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString123[]=  "крышка закрыта КЛ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString123[]=   "KL tamper norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString123[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString124[]=  "КЛ исключен из опроса";
#endif 
#ifdef  ENG 
   const unsigned char  TextString124[]=   "KL polling off";
#endif
#ifdef  FIN 
   const unsigned char  TextString124[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString125[]=  "КЛ включен в опрос";
#endif 
#ifdef  ENG 
   const unsigned char  TextString125[]=   "Kl polling on";
#endif
#ifdef  FIN 
   const unsigned char  TextString125[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString126[]=  "кз в линии";
#endif 
#ifdef  ENG 
   const unsigned char  TextString126[]=   "Short-circuit in line";
#endif
#ifdef  FIN 
   const unsigned char  TextString126[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString127[]=  "Нормализация КЗ в линии";
#endif 
#ifdef  ENG 
   const unsigned char  TextString127[]=   "KL line norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString127[] =   "";
#endif
/*****************************************************************************/   
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString128[]=  "нормализация КЗ в линии";
#endif 
#ifdef  ENG 
   const unsigned char  TextString128[]=   "KL line norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString128[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString129[]=  "ком. на вкл. КЛ в опрос";
#endif 
#ifdef  ENG 
   const unsigned char  TextString129[]=   "KL polling on command";
#endif
#ifdef  FIN 
   const unsigned char  TextString129[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString130[]=  "ком. на выкл. КЛ из опроса";
#endif 
#ifdef  ENG 
   const unsigned char  TextString130[]=   "command to turn off KL";
#endif
#ifdef  FIN 
   const unsigned char  TextString130[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString131[]=  "питание от АКБ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString131[]=   "on battery";
#endif
#ifdef  FIN 
   const unsigned char  TextString131[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString132[]=  "питание от сети";
#endif 
#ifdef  ENG 
   const unsigned char  TextString132[]=   "on mains";
#endif
#ifdef  FIN 
   const unsigned char  TextString132[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString133[]=  "сбой адресаций";
#endif 
#ifdef  ENG 
   const unsigned char  TextString133[]=   "addressing fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString133[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString134[]=  "адресация восстановлена";
#endif 
#ifdef  ENG 
   const unsigned char  TextString134[]=   "addressing restored";
#endif
#ifdef  FIN 
   const unsigned char  TextString134[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString135[]=  "обрыв шлейфа";
#endif 
#ifdef  ENG 
   const unsigned char  TextString135[]=   "line is opened";
#endif
#ifdef  FIN 
   const unsigned char  TextString135[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString136[]=  "обрыв шлейфа устранен";
#endif 
#ifdef  ENG 
   const unsigned char  TextString136[]=   "line norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString136[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString137[]=  "неисправность РП КЛ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString137[]=   "KL reserve fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString137[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString138[]=  "неисправность РП КЛ устранена";
#endif 
#ifdef  ENG 
   const unsigned char  TextString138[]=   "KL reserve norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString138[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString139[]=  "ошибка передачи ком.";
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
   const unsigned char  TextString140[]=  "ошибка передачи ком. испр.";
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
   const unsigned char  TextString141[]=  "ошибка инициализаций БКУ";
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
   const unsigned char  TextString142[]=  "потеря связи с БКУ";
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
   const unsigned char  TextString143[]=  "связь с БКУ восстановлена";
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
   const unsigned char  TextString144[]=  "БКУ исключен из опроса";
#endif 
#ifdef  ENG 
   const unsigned char  TextString144[]=   "BKU polling off";
#endif
#ifdef  FIN 
   const unsigned char  TextString144[] =   "";
#endif   
/*****************************************************************************/
/*
Наименование сообщения.
*/   
#ifdef  RUS
   const unsigned char  TextString145[]=  "БКУ включен в опрос";
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
   const unsigned char  TextString146[]=  "СRC-ошибка лога";
#endif 
#ifdef  ENG 
   const unsigned char  TextString146[]=   "event log СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString146[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString147[]=  "СRC-ошибка таб.1";
#endif 
#ifdef  ENG 
   const unsigned char  TextString147[]=   "tab.1 СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString147[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString148[]=  "СRC-ошибка таб.2";
#endif 
#ifdef  ENG 
   const unsigned char  TextString148[]=   "tab.2 СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString148[] =   "";
#endif
/*****************************************************************************/
/*

*/
#ifdef  RUS
   const unsigned char  TextString149[]=  "СRC-ошибка таб.3";
#endif 
#ifdef  ENG 
   const unsigned char  TextString149[]=   "tab.3 СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString149[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString150[]=  "СRC-ошибка таб.4";
#endif 
#ifdef  ENG 
   const unsigned char  TextString150[]=   "tab.4 СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString150[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString151[]=  "СRC-ошибка таб.5";
#endif 
#ifdef  ENG 
   const unsigned char  TextString151[]=   "tab.5 СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString151[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString152[]=  "СRC-ошибка таб.6";
#endif 
#ifdef  ENG 
   const unsigned char  TextString152[]=   "tab.6 СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString152[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString153[]=  "СRC-ошибка таб.7";
#endif 
#ifdef  ENG 
   const unsigned char  TextString153[]=   "tab.7 СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString153[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString154[]=  "СRC-ошибка таб.8";
#endif 
#ifdef  ENG 
   const unsigned char  TextString154[]=   "tab.8 СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString154[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString155[]=  "СRC-ошибка таб.9";
#endif 
#ifdef  ENG 
   const unsigned char  TextString155[]=   "tab.9 СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString155[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString156[]=  "СRC-ошибка таб.10";
#endif 
#ifdef  ENG 
   const unsigned char  TextString156[]=   "tab.10 СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString156[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString157[]=  "СRC-ошибка таб.11";
#endif 
#ifdef  ENG 
   const unsigned char  TextString157[]=   "tab.11 СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString157[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString158[]=  "СRC-ошибка таб.12";
#endif 
#ifdef  ENG 
   const unsigned char  TextString158[]=   "tab.12 СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString158[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString159[]=  "СRC-ошибка таб.13";
#endif 
#ifdef  ENG 
   const unsigned char  TextString159[]=   "tab.13 СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString159[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString160[]=  "СRC-ошибка таб.14";
#endif 
#ifdef  ENG 
   const unsigned char  TextString160[]=   "tab.14 СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString160[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString161[]=  "СRC-ошибка сист.таб.";
#endif 
#ifdef  ENG 
   const unsigned char  TextString161[]=   "system tab. СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString161[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString162[]=  "Включение БКУ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString162[]=   "BKU turning-on";
#endif
#ifdef  FIN 
   const unsigned char  TextString162[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString163[]=  "ком. на обн-е прошивки в БКУ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString163[]=   "BKU update firmware command";
#endif
#ifdef  FIN 
   const unsigned char  TextString163[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString164[]=  "ком. на включение БКУ в опрос";
#endif 
#ifdef  ENG 
   const unsigned char  TextString164[]=   "BKU polling on command";
#endif
#ifdef  FIN 
   const unsigned char  TextString164[] =   "";
#endif
/*****************************************************************************/   
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString165[]=  "ком. на искл. БКУ из опроса";
#endif 
#ifdef  ENG 
   const unsigned char  TextString165[]=   "BKU polling off command";
#endif
#ifdef  FIN 
   const unsigned char  TextString165[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString166[]=  "ошибка чтения данных RF карт";
#endif 
#ifdef  ENG 
   const unsigned char  TextString166[]=   "RF card СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString166[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString167[]=  "неиспр. ROM памяти проц-ра";
#endif 
#ifdef  ENG 
   const unsigned char  TextString167[]=   "Processor ROM fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString167[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString168[]=  "отсутвует рез-ая программа";
#endif 
#ifdef  ENG 
   const unsigned char  TextString168[]=   "no program backup";
#endif
#ifdef  FIN 
   const unsigned char  TextString168[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString169[]=  "неисправность ОП БКУ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString169[]=   "BKU mains fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString169[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString170[]=  "неисправность РП БКУ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString170[]=   "BKU reserve fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString170[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString171[]=  "норма ОП";
#endif 
#ifdef  ENG 
   const unsigned char  TextString171[]=   "mains norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString171[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString172[]=  "норма РП";
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
   const unsigned char  TextString173[]=  "норма РП";
#endif 
#ifdef  ENG 
   const unsigned char  TextString173[]=   "reserve norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString173[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString174[]=  "вскрытие корпуса БКУ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString174[]=   "BKU tamper is opened";
#endif
#ifdef  FIN 
   const unsigned char  TextString174[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString175[]=  "корпус БКУ закрыт";
#endif 
#ifdef  ENG 
   const unsigned char  TextString175[]=   "BKU tamper is closed";
#endif
#ifdef  FIN 
   const unsigned char  TextString175[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString176[]=  "неисправность клав-ры";
#endif 
#ifdef  ENG 
   const unsigned char  TextString176[]=   "keyboard fault";
#endif
#ifdef  FIN 
   const unsigned char  TextString176[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString177[]=  "клавиатура исправна";
#endif 
#ifdef  ENG 
   const unsigned char  TextString177[]=   "keyboard norm";
#endif
#ifdef  FIN 
   const unsigned char  TextString177[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString178[]=  "принудительный пуск";
#endif 
#ifdef  ENG 
   const unsigned char  TextString178[]=   "forced activation";
#endif
#ifdef  FIN 
   const unsigned char  TextString178[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString179[]=  "включение теста";
#endif 
#ifdef  ENG 
   const unsigned char  TextString179[]=   "enabling test";
#endif
#ifdef  FIN 
   const unsigned char  TextString179[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString180[]=  "копирование таблиц из резерва";
#endif 
#ifdef  ENG 
   const unsigned char  TextString180[]=   "tables copying";
#endif
#ifdef  FIN 
   const unsigned char  TextString180[] =   "";
#endif
/*****************************************************************************/
/*
Наименование; тип пользователя.
*/
#ifdef  RUS
   const unsigned char  TextString181[]=  "администратор";
#endif 
#ifdef  ENG 
   const unsigned char  TextString181[]=   "admin";
#endif
#ifdef  FIN 
   const unsigned char  TextString181[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения
*/
#ifdef  RUS
   const unsigned char  TextString182[]=  "карта добавлена";
#endif 
#ifdef  ENG 
   const unsigned char  TextString182[]=   "card is added";
#endif
#ifdef  FIN 
   const unsigned char  TextString182[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения
*/
#ifdef  RUS
   const unsigned char  TextString183[]=  "ком. на добавление карты";
#endif 
#ifdef  ENG 
   const unsigned char  TextString183[]=   "add card command";
#endif
#ifdef  FIN 
   const unsigned char  TextString183[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения
*/
#ifdef  RUS
   const unsigned char  TextString184[]=  "карта удалена";
#endif 
#ifdef  ENG 
   const unsigned char  TextString184[]=   "card deleted";
#endif
#ifdef  FIN 
   const unsigned char  TextString184[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения
*/
#ifdef  RUS
   const unsigned char  TextString185[]=  "ком. на удаление карты";
#endif 
#ifdef  ENG 
   const unsigned char  TextString185[]=   "delete card command";
#endif
#ifdef  FIN 
   const unsigned char  TextString185[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения
*/
#ifdef  RUS
   const unsigned char  TextString186[]=  "тип карты был изменен";
#endif 
#ifdef  ENG 
   const unsigned char  TextString186[]=   "card type changed";
#endif
#ifdef  FIN 
   const unsigned char  TextString186[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения
*/
#ifdef  RUS
   const unsigned char  TextString187[]=  "ком. на изменение типа пол-ля";
#endif 
#ifdef  ENG 
   const unsigned char  TextString187[]=   "change user type command";
#endif
#ifdef  FIN 
   const unsigned char  TextString187[] =   "";
#endif
/*****************************************************************************/
/*
Наименование состояния
*/
#ifdef  RUS
   const unsigned char  TextString188[]=  "обрыв кольца";
#endif 
#ifdef  ENG 
   const unsigned char  TextString188[]=   "loop is opened";
#endif
#ifdef  FIN 
   const unsigned char  TextString188[] =   "";
#endif
/*****************************************************************************/
/*
Наименование состояния
*/
#ifdef  RUS
   const unsigned char  TextString189[]=  "восстановление кольца";
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
   const unsigned char  TextString190[]=  "начало отсчета";
#endif 
#ifdef  ENG 
   const unsigned char  TextString190[]=   "delay start";
#endif
#ifdef  FIN 
   const unsigned char  TextString190[] =   "";
#endif
/*****************************************************************************/
/*
Наименование состояния
*/
#ifdef  RUS
   const unsigned char  TextString191[]=  "пауза";
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
   const unsigned char  TextString192[]=  "продолжение отсчета";
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
   const unsigned char  TextString193[]=  "таймер отменен";
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
   const unsigned char  TextString194[]=  "таймер отменен";
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
   const unsigned char  TextString195[]=  "принудительное обнуление";
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
   const unsigned char  TextString196[]=  "кор-ка времени таймера";
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
   const unsigned char  TextString197[]=  "сброс БКУ";
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
   const unsigned char  TextString198[]=  "команда на сброс БКУ";
#endif 
#ifdef  ENG 
   const unsigned char  TextString198[]=   "BKU reset command";
#endif
#ifdef  FIN 
   const unsigned char  TextString198[] =   "";
#endif  
/*****************************************************************************/
/*
Текст окна сообщения. 
*/
#ifdef  RUS 
  const unsigned char   TextString199[]=  "Для подтверждения пуска нажмите ввод";
#endif 
#ifdef  ENG 
  const unsigned char   TextString199[]  =   "For activation conformation press enter";
#endif   
#ifdef  FIN 
   const unsigned char  TextString199[] =   "";
#endif
/*****************************************************************************/
/*
Текст окна сообщения. 
*/
#ifdef  RUS 
  const unsigned char   TextString200[]=  "для выхода без пуска нажмите Отмена";
#endif 
#ifdef  ENG 
  const unsigned char   TextString200[]  =   "for exit without activation press Cancel";
#endif   
#ifdef  FIN 
   const unsigned char  TextString200[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню содержит описание областей. Зона это тип 
объединения который задает время задержки до начала тушения.
*/
#ifdef  RUS 
  const unsigned char   TextString201[]=  "Управление.таблица описания зон";
#endif 
#ifdef  ENG 
  const unsigned char   TextString201[]  =   "Control.zone description table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString201[] =   "";
#endif
   
/*****************************************************************************/
/*
Изменение состаяния зоны.
*/
#ifdef  RUS
   const unsigned char  TextString202[]=  "автоматика ВКЛ.";
#endif 
#ifdef  ENG 
   const unsigned char  TextString202[]=   "automation ON";
#endif
#ifdef  FIN 
   const unsigned char  TextString202[] =   "";
#endif
/*****************************************************************************/
/*
Изменение состаяния зоны.
*/
#ifdef  RUS
   const unsigned char  TextString203[]=  "автоматика ВЫКЛ.";
#endif 
#ifdef  ENG 
   const unsigned char  TextString203[]=   "automation OFF";
#endif
#ifdef  FIN 
   const unsigned char  TextString203[] =   "";
#endif
/*****************************************************************************/
/*
Изменение состаяния зоны.
*/
#ifdef  RUS
   const unsigned char  TextString204[]=  "запрет пусков";
#endif 
#ifdef  ENG 
   const unsigned char  TextString204[]=   "activ. banned";
#endif
#ifdef  FIN 
   const unsigned char  TextString204[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню содержит описание дренчеров.
*/
#ifdef  RUS 
  const unsigned char   TextString205[]=  "Управление.таблица дренчеров";
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
   const unsigned char  TextString206[]=  "прошивка принята";
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
   const unsigned char  TextString207[]=  "обновление прошивки";
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
   const unsigned char  TextString208[]=  "конф.режим включен";
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
   const unsigned char  TextString209[]=  "конф.режим выключен";
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
   const unsigned char  TextString210[]=  "ком. на вкл. конф.режима";
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
   const unsigned char  TextString211[]=  "ком. на выкл. конф.режима";
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
   const unsigned char  TextString212[]=  "команда начало отсчета";
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
   const unsigned char  TextString213[]=  "команда пауза";
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
   const unsigned char  TextString214[]=  "команда продолжение отсчета";
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
   const unsigned char  TextString215[]=  "команда таймер отменен";
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
   const unsigned char  TextString216[]=  "команда принуд. обнуление";
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
   const unsigned char  TextString217[]=  "пожар 1 в зоне";
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
   const unsigned char  TextString218[]=  "пожар 2 в зоне";
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
   const unsigned char  TextString219[]=  "умен-ие задержки в зоне";
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
   const unsigned char  TextString220[]=  "ком. на уст. пожар1 в зоне";
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
   const unsigned char  TextString221[]=  "ком. на уст. пожар2 в зоне";
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
   const unsigned char  TextString222[]=  "команда на уменьшен. зад-ки";
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
  const unsigned char   TextString223[]="время прихода события:\nвремя события:\nномер зоны:";
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
  const unsigned char   TextString224[]="- запустить";
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
  const unsigned char   TextString225[]="   пауза \n продолжить";
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
  const unsigned char   TextString226[]="- отменить";
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
  const unsigned char   TextString227[]="Установить";
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
  const unsigned char   TextString228[]="часы";
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
  const unsigned char   TextString229[]="минуты";
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
  const unsigned char   TextString230[]="секунды";
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
  const unsigned char   TextString231[]="год";
#endif 
#ifdef  ENG 
  const unsigned char   TextString231[]  =   "year" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString231[] =   "";
#endif  
/*****************************************************************************/ 
/*
Наименование ячейки
*/
#ifdef  RUS 
  const unsigned char   TextString232[]="месяц";
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
  const unsigned char   TextString233[]="день";
#endif 
#ifdef  ENG 
  const unsigned char   TextString233[]  =   "day" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString233[] =   "";
#endif   
/*****************************************************************************/     
/*
Наименование окна сообщения
*/
#ifdef  RUS 
  const unsigned char   TextString234[]="сообщение";
#endif 
#ifdef  ENG 
  const unsigned char   TextString234[]  =   "message" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString234[] =   "";
#endif   
/*****************************************************************************/   
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString235[]="Успешно";
#endif 
#ifdef  ENG 
  const unsigned char   TextString235[]  =   "Success";
#endif
#ifdef  FIN 
   const unsigned char  TextString235[] =   "";
#endif   
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString236[]="Операция выполнена";
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
  const unsigned char   TextString237[]="Контроль прошивки";
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
  const unsigned char   TextString238[]="Статистика";
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
  const unsigned char   TextString239[]="Управление режимом конфигураций";
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
  const unsigned char   TextString240[]="Управление";
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
  const unsigned char   TextString241[]="Главное меню";
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
  const unsigned char   TextString242[]="сохранить и выйти";
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
  const unsigned char   TextString243[]="Настройки . Основные настройки";
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
  const unsigned char   TextString244[]="Один в системе";
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
  const unsigned char   TextString245[]="КОНФИГУРАЦИОННЫЙ РЕЖИМ";
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
  const unsigned char   TextString246[]=  "Настройки.Доступ";
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
  const unsigned char   TextString247[]=  "- изменить";
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
  const unsigned char   TextString248[]=  "- добавить";
#endif 
#ifdef  ENG 
  const unsigned char   TextString248[]  =   "add" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString248[] =   "";
#endif  
/*****************************************************************************/
/*
наименование кнопки
*/
#ifdef  RUS 
  const unsigned char   TextString249[]=  "- удалить";
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
  const unsigned char   TextString250[]=  "ожидание карты";
#endif 
#ifdef  ENG 
  const unsigned char   TextString250[]  =   "waiting for card" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString250[] =   "";
#endif  
/*****************************************************************************/  
/*
Наименование столбца. В данном столбце отображается  логический номер. 
*/
#ifdef  RUS 
  const unsigned char   TextString251[]=  "№ карты";
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
  const unsigned char   TextString252[]=  "уровень";
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
  const unsigned char   TextString253[]=  "В режиме ведомый редактирование доступа не доступно";
#endif 
#ifdef  ENG 
  const unsigned char   TextString253[]  =   "Access edition in slave mode is not available" ;
#endif
#ifdef  FIN 
   const unsigned char  TextString253[] =   "";
#endif  
/*****************************************************************************/  
/*
Текст сообщения на заблокированном экране. Сообщение информирует пользователя о способе 
разблокировки устройства.
*/
#ifdef  RUS 
  const unsigned char   TextString254[]=  "Пожалуйста; поднесите карту\nк считывателю";
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
  const unsigned char   TextString255[]=  "отсчеты";
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
  const unsigned char   TextString256[]=   "вкл/откл БКУ из опроса";
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
  const unsigned char   TextString257[]=   "адрес отключен";
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
  const unsigned char   TextString258[]=   "    адрес уже";
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
  const unsigned char   TextString259[]=   "ИУ уже добавлено!";
#endif 
#ifdef  ENG 
  const unsigned char   TextString259[]  =   "AD is already added!";
#endif
#ifdef  FIN 
   const unsigned char  TextString259[]  =   "";
#endif    
/*****************************************************************************/ 
/*
Текст заголовка в сообщении на заблокированном экране. Сообщение информирует пользователя о том;
устройство заблокировано.
*/
#ifdef  RUS 
  const unsigned char   TextString260[]=  "БЛОКИРОВКА";
#endif 
#ifdef  ENG 
  const unsigned char   TextString260[]  =   "BLOCK" ;
#endif   
#ifdef  FIN 
   const unsigned char  TextString260[] =   "";
#endif    
/*****************************************************************************/ 
/*
Текст сообщения на заблокированом экране. Собщение информирует пользователя о том;
его карта доступа была отключена; и возможность разблокировать устройство пользователю 
теперь не доступна.
*/
#ifdef  RUS 
  const unsigned char   TextString261[]=  "ID ОТКЛЮЧЕН";
#endif 
#ifdef  ENG 
  const unsigned char   TextString261[]  =   "ID is switched-off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString261[] =   "";
#endif    
/*****************************************************************************/ 
/*
Текст сообщения на заблокированом экране. Собщение информирует пользователя о том;
его карта доступа не была добавлена; и возможность разблокировать устройство пользователю 
не доступна.
*/
#ifdef  RUS 
  const unsigned char   TextString262[]=  "НЕИЗВЕСТНЫЙ ID";
#endif 
#ifdef  ENG 
  const unsigned char   TextString262[]  =   "UNKNOWN ID";
#endif   
#ifdef  FIN 
   const unsigned char  TextString262[] =   "";
#endif    
/*****************************************************************************/ 
/*
Текст сообщения на экране. Собщение информирует пользователя о том;
его уровень доступа не достаточен для перехода в меню.
*/
#ifdef  RUS 
  const unsigned char   TextString263[]=  "Нет прав доступа";
#endif 
#ifdef  ENG 
  const unsigned char   TextString263[]  =   "No access";
#endif   
#ifdef  FIN 
   const unsigned char  TextString263[] =   "";
#endif    
/*****************************************************************************/ 
/*
Текст сообщения на экране. Собщение информирует пользователя о том;
его уровень доступа не достаточен для активации данных функций устройства.
*/
#ifdef  RUS 
  const unsigned char   TextString264[]=  "Ошибка доступа";
#endif 
#ifdef  ENG 
  const unsigned char   TextString264[]  =   "Access error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString264[] =   "";
#endif    
/*****************************************************************************/ 
/*
название кнопки
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
Наименование меню. Меню позваляет пользователю подтверждать или откланять команды
поступающие на устройство с программного обеспечения.
*/
#ifdef  RUS 
  const unsigned char   TextString267[]=  "Подтверждение команд с АРМ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString267[]  =   "Confirmation of PC commands";
#endif   
#ifdef  FIN 
   const unsigned char  TextString267[] =   "";
#endif    
/*****************************************************************************/     
/*
Наименование Кнопки. По нажатию подтверждаются все команды поступающие на 
устройство с программного обеспечения.
*/
#ifdef  RUS 
  const unsigned char   TextString268[]=  " - подтвердить все";
#endif 
#ifdef  ENG 
  const unsigned char   TextString268[]  =   " - confirm everything";
#endif   
#ifdef  FIN 
   const unsigned char  TextString268[] =   "";
#endif    
/*****************************************************************************/   
/*
Наименование команды управляющей команды; поступающей с программного обеспечения.
Данный тип комканды отвечет за логическое включение устройств в опрос.
*/
#ifdef  RUS 
  const unsigned char   TextString269[]=  "ВКЛ. УСТР.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString269[]  =   "DEV. ON";
#endif   
#ifdef  FIN 
   const unsigned char  TextString269[] =   "";
#endif    
/*****************************************************************************/   
/*
Наименование команды управляющей команды; поступающей с программного обеспечения.
Данный тип комканды отвечет за логическое выключение устройств в опрос.
*/
#ifdef  RUS 
  const unsigned char   TextString270[]=  "ВЫКЛ. УСТР.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString270[]  =   "DEV. OFF";
#endif   
#ifdef  FIN 
   const unsigned char  TextString270[] =   "";
#endif    
/*****************************************************************************/ 
/*
Наименование кнопки; используемой для отмены всех команд поступавших с 
програмного обеспечения.
*/
#ifdef  RUS 
  const unsigned char   TextString271[]=  "- отменить все";
#endif 
#ifdef  ENG 
  const unsigned char   TextString271[]  =   "- cancel everything";
#endif  
#ifdef  FIN 
   const unsigned char  TextString271[] =   "";
#endif    
/*****************************************************************************/ 
/*
Наименование столбца. В данном столбце отображается  число масимально запускаемых 
извещателей.Извещатель - устройство выполняюще; функции отслеживания пожаров и 
их тушение. Под запуском извещателя подразумевается начало тушения.
*/
#ifdef  RUS 
  const unsigned char   TextString272[]=  "макс. кол.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString272[]  =   "max quantity";
#endif  
#ifdef  FIN 
   const unsigned char  TextString272[] =   "";
#endif    
/*****************************************************************************/ 
/*
Наименование столбца; в столбце содержится описние устройств; зон и прочее.
*/
#ifdef  RUS 
  const unsigned char   TextString273[]=  "описание";
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
  const unsigned char   TextString274[]=  "ФИЛЬТР ЖУРНАЛА СОБЫТИЙ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString274[]  =   "EVENT LOG FILTER";
#endif   
#ifdef  FIN 
   const unsigned char  TextString274[] =   "";
#endif    
/*****************************************************************************/
/*
НАИМЕНОВАНИЕ ФИЛЬТРА.
*/
#ifdef  RUS 
  const unsigned char   TextString275[]=  "ФИЛЬТР ПО ДАТЕ";
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
  const unsigned char   TextString276[]=  "ЯНВАРЬ";
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
  const unsigned char   TextString277[]=  "ФЕВРАЛЬ";
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
  const unsigned char   TextString278[]=  "МАРТ";
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
  const unsigned char   TextString279[]=  "АПРЕЛЬ";
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
  const unsigned char   TextString280[]=  "МАЙ";
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
  const unsigned char   TextString281[]=  "ИЮНЬ";
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
  const unsigned char   TextString282[]=  "ИЮЛЬ";
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
  const unsigned char   TextString283[]=  "АВГУСТ";
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
  const unsigned char   TextString284[]=  "СЕНТЯБРЬ";
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
  const unsigned char   TextString285[]=  "ОКТЯБРЬ";
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
  const unsigned char   TextString286[]=  "НОЯБРЬ";
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
  const unsigned char   TextString287[]=  "ДЕКАБРЬ";
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
  const unsigned char   TextString288[]=  "дата";
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
  const unsigned char   TextString289[]=  "ПОИСК ПО АДРЕСУ";
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
  const unsigned char   TextString291[]=  "ЗАПУСКИ";
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
  const unsigned char   TextString293[]=  "ПОЖАРЫ";
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
  const unsigned char   TextString294[]=  "НЕИСПРАВНОСТИ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString294[]  =   "FAULTS";
#endif  
#ifdef  FIN 
   const unsigned char  TextString294[] =   "";
#endif    
/*****************************************************************************/
/*
Наименование меню. В даном меню содержится список все сообщений; обнаруженых в 
системе.
*/
#ifdef  RUS 
  const unsigned char   TextString295[]=  "Журнал событий";
#endif 
#ifdef  ENG 
  const unsigned char   TextString295[]  =   "Event log";
#endif  
#ifdef  FIN 
   const unsigned char  TextString295[] =   "";
#endif    
/*****************************************************************************/
/*
Наименование меню. В даном меню содержится список все сообщений; обнаруженых в 
системе.
*/
#ifdef  RUS 
  const unsigned char   TextString296[]=  "время";
#endif 
#ifdef  ENG 
  const unsigned char   TextString296[]  =   "time";
#endif  
#ifdef  FIN 
   const unsigned char  TextString296[] =   "";
#endif    
/*****************************************************************************/
/*
Наименование пункта окна. Располагается на против наименования отметки о 
просмотре сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString297[]=  "см.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString297[]  =   "see";
#endif  
#ifdef  FIN 
   const unsigned char  TextString297[] =   "";
#endif    
/*****************************************************************************/
/*
Наименование пункта окна. Располагается на против наименования отметки о 
просмотре сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString298[]=  "Сработка";
#endif 
#ifdef  ENG 
  const unsigned char   TextString298[]  =   "Actuation";
#endif  
#ifdef  FIN 
   const unsigned char  TextString298[] =   "";
#endif    
/*****************************************************************************/
/*
наименование состаяния. Под отсчетом подразумевается; отсчет времени до начала тушения пожара.
*/
#ifdef  RUS 
  const unsigned char   TextString299[]=  "Отсчет";
#endif 
#ifdef  ENG 
  const unsigned char   TextString299[]  =   "Countdown";
#endif   
#ifdef  FIN 
   const unsigned char  TextString299[] =   "";
#endif
/*****************************************************************************/ 
/*
Наименование состаяния зоны. 
*/
#ifdef  RUS 
  const unsigned char   TextString300[]=  "Управление автоматикой";
#endif 
#ifdef  ENG 
  const unsigned char   TextString300[]  =   "Automation control";
#endif   
#ifdef  FIN 
   const unsigned char  TextString300[] =   "";
#endif

/*****************************************************************************/    
/*
Наименование команды. 
*/
#ifdef  RUS                               
  const unsigned char   TextString301[]=  "команда автоматика ВКЛ. отправлена";
#endif 
#ifdef  ENG 
  const unsigned char   TextString301[]  =   "automation on command sent";
#endif   
#ifdef  FIN 
   const unsigned char  TextString301[] =   "";
#endif
/*****************************************************************************/  
/*
Наименование команды. 
*/
#ifdef  RUS 
  const unsigned char   TextString302[]=  "команда отправлена автоматика ВыКЛ.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString302[]  =   "automation off command sent";
#endif   
#ifdef  FIN 
   const unsigned char  TextString302[] =   "";
#endif
/*****************************************************************************/
/*
Наименование команды. 
*/
#ifdef  RUS 
  const unsigned char   TextString303[]=  "команда отправлена запрет пусков";
#endif 
#ifdef  ENG 
  const unsigned char   TextString303[]  =   "activation ban command sent";
#endif   
#ifdef  FIN 
   const unsigned char  TextString303[] =   "";
#endif
/*****************************************************************************/ 
/*
наименование заголовка  
*/
#ifdef  RUS 
  const unsigned char   TextString304[]=  "изменение автоматики в зоне";
#endif 
#ifdef  ENG 
  const unsigned char   TextString304[]  =   "automation change in zone";
#endif   
#ifdef  FIN 
   const unsigned char  TextString304[] =   "";
#endif
/*****************************************************************************/ 
/*
наименование заголовка  
*/
#ifdef  RUS 
  const unsigned char   TextString305[]=  "изменение автоматики во всех зонах";
#endif 
#ifdef  ENG 
  const unsigned char   TextString305[]  =   "automation change in all zones";
#endif   
#ifdef  FIN 
   const unsigned char  TextString305[] =   "";
#endif
/*****************************************************************************/ 
/*
Включение автоматики в зоне.  
*/
#ifdef  RUS 
  const unsigned char   TextString306[]=  "АВТ. ВКЛ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString306[]  =   "AUT. ON";
#endif   
#ifdef  FIN 
   const unsigned char  TextString306[] =   "";
#endif
/*****************************************************************************/ 
/*
Выключение автоматики в зоне. под выключением автоматики понимается    
*/
#ifdef  RUS 
  const unsigned char   TextString307[]=  "АВТ. ВЫКЛ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString307[]  =   "AUT OFF";
#endif   
#ifdef  FIN 
   const unsigned char  TextString307[] =   "";
#endif
/*****************************************************************************/
/*
ЗАПРЕТ ПУСКОВ в зоне. Под запуском подразумевается начало тушения. 
*/
#ifdef  RUS 
  const unsigned char   TextString308[]=  "ЗАПРЕТ ПУСКОВ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString308[]  =   "ACTIVATION BAN";
#endif   
#ifdef  FIN 
   const unsigned char  TextString308[] =   "";
#endif
/*****************************************************************************/
/*
Ниаменование кнопки.
*/
#ifdef  RUS 
  const unsigned char   TextString309[]=  "применить";
#endif 
#ifdef  ENG 
  const unsigned char   TextString309[]  =   "OK";
#endif   
#ifdef  FIN 
   const unsigned char  TextString309[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню содержит описание устройств в системе.
*/
#ifdef  RUS 
  const unsigned char   TextString310[]=  "Управление.таблица описания устройств";
#endif 
#ifdef  ENG 
  const unsigned char   TextString310[]  =   "Control.devices description table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString310[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню..
*/
#ifdef  RUS 
  const unsigned char   TextString311[]=  "Управление.таблица адресов";
#endif 
#ifdef  ENG 
  const unsigned char   TextString311[]  =   "Control.addresses table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString311[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения на экране.
*/
#ifdef  RUS 
  const unsigned char   TextString312[]=  "Введите номер КЛ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString312[]  =   "Enter KL number";
#endif   
#ifdef  FIN 
   const unsigned char  TextString312[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения на экране.
*/
#ifdef  RUS 
  const unsigned char   TextString313[]=  "Введите номер БКУ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString313[]  =   "Enter BKU number";
#endif   
#ifdef  FIN 
   const unsigned char  TextString313[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Под адресом подрузамевается устройство.
*/
#ifdef  RUS 
  const unsigned char   TextString314[]=  "редактирование адреса";
#endif 
#ifdef  ENG 
  const unsigned char   TextString314[]  =   "address editing";
#endif   
#ifdef  FIN 
   const unsigned char  TextString314[] =   "";
#endif
/*****************************************************************************/
/*
Наименование состояния устройства.
*/
#ifdef  RUS 
  const unsigned char   TextString315[]=  "ВЫКЛЮЧЕН";
#endif 
#ifdef  ENG 
  const unsigned char   TextString315[]  =   "OFF";
#endif   
#ifdef  FIN 
   const unsigned char  TextString315[] =   "";
#endif
/*****************************************************************************/
/*
Наименование состояния устройства.
*/
#ifdef  RUS 
  const unsigned char   TextString316[]=  "ВКЛЮЧЕН";
#endif 
#ifdef  ENG 
  const unsigned char   TextString316[]  =   "ON";
#endif   
#ifdef  FIN 
   const unsigned char  TextString316[] =   "";
#endif
/*****************************************************************************/
/*
Наименование состояния устройства.
*/
#ifdef  RUS 
  const unsigned char   TextString317[]=  "ИСКЛЮЧЕН";
#endif 
#ifdef  ENG 
  const unsigned char   TextString317[]  =   "DELETED";
#endif   
#ifdef  FIN 
   const unsigned char  TextString317[] =   "";
#endif
/*****************************************************************************/
/*
Наименование состояния устройства (активна).
*/
#ifdef  RUS 
  const unsigned char   TextString318[]=  "акт.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString318[]  =   "act.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString318[] =   "";
#endif
/*****************************************************************************/
/*
Наименование состояния устройства.
*/
#ifdef  RUS 
  const unsigned char   TextString319[]=  "отсутствует";
#endif 
#ifdef  ENG 
  const unsigned char   TextString319[]  =   "absent";
#endif   
#ifdef  FIN 
   const unsigned char  TextString319[] =   "";
#endif
/*****************************************************************************/
/*
Наименование состояния устройства.
*/
#ifdef  RUS 
  const unsigned char   TextString320[]=  "неисправность";
#endif 
#ifdef  ENG 
  const unsigned char   TextString320[]  =   "fault";
#endif   
#ifdef  FIN 
   const unsigned char  TextString320[] =   "";
#endif
/*****************************************************************************/
/*
Наименование состояния устройства.
*/
#ifdef  RUS 
  const unsigned char   TextString321[]=  "вскрылся";
#endif 
#ifdef  ENG 
  const unsigned char   TextString321[]  =   "activated";
#endif   
#ifdef  FIN 
   const unsigned char  TextString321[] =   "";
#endif
/*****************************************************************************/
/*
Наименование состояния устройства.
*/
#ifdef  RUS 
  const unsigned char   TextString322[]=  "вскрылся";
#endif 
#ifdef  ENG 
  const unsigned char   TextString322[]  =   "activated";
#endif   
#ifdef  FIN 
   const unsigned char  TextString322[] =   "";
#endif
/*****************************************************************************/
/*
Наименование состояния устройства.
*/
#ifdef  RUS 
  const unsigned char   TextString323[]=  "ком. на нагрев";
#endif 
#ifdef  ENG 
  const unsigned char   TextString323[]  =   "heating command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString323[] =   "";
#endif
/*****************************************************************************/
/*
Наименование состояния устройства.
*/
#ifdef  RUS 
  const unsigned char   TextString324[]=  "неисправен";
#endif 
#ifdef  ENG 
  const unsigned char   TextString324[]  =   "damaged";
#endif   
#ifdef  FIN 
   const unsigned char  TextString324[] =   "";
#endif
/*****************************************************************************/
/*
Наименование состояния устройства.
*/
#ifdef  RUS 
  const unsigned char   TextString325[]=  "низкое напр.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString325[]  =   "low voltage";
#endif   
#ifdef  FIN 
   const unsigned char  TextString325[] =   "";
#endif
/*****************************************************************************/
/*
Наименование кнопки (все выключить). 
*/
#ifdef  RUS 
  const unsigned char   TextString326[]=  "все выкл.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString326[]  =   "everything off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString326[] =   "";
#endif
/*****************************************************************************/
/*
Наименование кнопки (установить таблицу). 
*/
#ifdef  RUS 
  const unsigned char   TextString327[]=  "уст. табл";
#endif 
#ifdef  ENG 
  const unsigned char   TextString327[]  =   "set table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString327[] =   "";
#endif
/*****************************************************************************/
/*
Наименование пункта меню (количество адрсов КЛ-240 АЭ). 
*/
#ifdef  RUS 
  const unsigned char   TextString328[]=  "кол-во адресов КЛ-240АЭ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString328[]  =   "KL-240AE addresses quantity";
#endif   
#ifdef  FIN 
   const unsigned char  TextString328[] =   "";
#endif
/*****************************************************************************/
/*
Наименование кнопки (записать количество адрсов КЛ-240 АЭ). 
*/
#ifdef  RUS 
  const unsigned char   TextString329[]=  "записать кол-во";
#endif 
#ifdef  ENG 
  const unsigned char   TextString329[]  =   "record quantity";
#endif   
#ifdef  FIN 
   const unsigned char  TextString329[] =   "";
#endif
/*****************************************************************************/
/*
Наименование пункта меню. 
*/
#ifdef  RUS 
  const unsigned char   TextString330[]=  "порог срабатывания КЛ-240АЭ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString330[]  =   "KL-240AE activation threshold";
#endif   
#ifdef  FIN 
   const unsigned char  TextString330[] =   "";
#endif
/*****************************************************************************/
/*
Наименование кнопки (записать порог срабатывания КЛ-240 АЕ). 
*/
#ifdef  RUS 
  const unsigned char   TextString331[]=  "записать порог";
#endif 
#ifdef  ENG 
  const unsigned char   TextString331[]  =   "record threshold";
#endif   
#ifdef  FIN 
   const unsigned char  TextString331[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString332[]="Неуспешно";
#endif 
#ifdef  ENG 
  const unsigned char   TextString332[]  =   "unsuccessfully";
#endif
#ifdef  FIN 
   const unsigned char  TextString332[] =   "";
#endif 
/*****************************************************************************/
/*
Наименование меню. Данное меню содержит описание устройств в системе.
*/
#ifdef  RUS 
  const unsigned char   TextString333[]=  "Управление.таблица устройств";
#endif 
#ifdef  ENG 
  const unsigned char   TextString333[]  =   "Control.devices table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString333[] =   "";
#endif
/*****************************************************************************/
/*
Наименование пункта меню.
*/
#ifdef  RUS 
  const unsigned char   TextString334[]=  "тип устр.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString334[]  =   "device type";
#endif   
#ifdef  FIN 
   const unsigned char  TextString334[] =   "";
#endif
/*****************************************************************************/
/*
Наименование пункта меню.
*/
#ifdef  RUS 
  const unsigned char   TextString335[]=  "отвечает";
#endif 
#ifdef  ENG 
  const unsigned char   TextString335[]  =   "responding";
#endif   
#ifdef  FIN 
   const unsigned char  TextString335[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString336[]=  "Под данным КЛ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString336[]  =   "Under this KL";
#endif   
#ifdef  FIN 
   const unsigned char  TextString336[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString337[]=  "отсутствуют устройства";
#endif 
#ifdef  ENG 
  const unsigned char   TextString337[]  =   "no devices";
#endif   
#ifdef  FIN 
   const unsigned char  TextString337[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString338[]=  "НЕТ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString338[]  =   "NO";
#endif   
#ifdef  FIN 
   const unsigned char  TextString338[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString339[]=  "ДА";
#endif 
#ifdef  ENG 
  const unsigned char   TextString339[]  =   "YES";
#endif   
#ifdef  FIN 
   const unsigned char  TextString339[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню содержит описание устройств в системе.
*/
#ifdef  RUS 
  const unsigned char   TextString340[]=  "Управление.таблица запуска внутренние связи";
#endif 
#ifdef  ENG 
  const unsigned char   TextString340[]  =   "Control.internal connections activation table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString340[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню содержит описание устройств в системе.
*/
#ifdef  RUS 
  const unsigned char   TextString341[]=  "введите адрес устройства типа КЛ (1-20)";
#endif 
#ifdef  ENG 
  const unsigned char   TextString341[]  =   "enter device address of KL type (1-20)";
#endif   
#ifdef  FIN 
   const unsigned char  TextString341[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString342[]=  "привязка";
#endif 
#ifdef  ENG 
  const unsigned char   TextString342[]  =   "lock-on";
#endif   
#ifdef  FIN 
   const unsigned char  TextString342[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString343[]=  "нет связи с БКУ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString343[]  =   "no connection with BKU";
#endif   
#ifdef  FIN 
   const unsigned char  TextString343[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню содержит описание устройств в системе.
*/
#ifdef  RUS 
  const unsigned char   TextString344[]=  "Управление.таблица запуска внешние связи 1";
#endif 
#ifdef  ENG 
  const unsigned char   TextString344[]  =   "Control.external connections 1 activation table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString344[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню содержит описание устройств в системе.
*/
#ifdef  RUS 
  const unsigned char   TextString345[]=  "Управление.таблица устройств.АУ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString345[]  =   "Control.device table.AD";
#endif   
#ifdef  FIN 
   const unsigned char  TextString345[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString346[]=  "нет связи";
#endif 
#ifdef  ENG 
  const unsigned char   TextString346[]  =   "No connection";
#endif   
#ifdef  FIN 
   const unsigned char  TextString346[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString347[]=  "нет связи с КЛ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString347[]  =   "no connection with KL";
#endif   
#ifdef  FIN 
   const unsigned char  TextString347[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню содержит описание устройств в системе.
*/
#ifdef  RUS 
  const unsigned char   TextString348[]=  "Управление.таблица зон";
#endif 
#ifdef  ENG 
  const unsigned char   TextString348[]  =   "Control.zone table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString348[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString349[]=  "область ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString349[]  =   "area";
#endif   
#ifdef  FIN 
   const unsigned char  TextString349[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString350[]=  "ком.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString350[]  =   "command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString350[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString351[]=  "задержка";
#endif 
#ifdef  ENG 
  const unsigned char   TextString351[]  =   "delay";
#endif   
#ifdef  FIN 
   const unsigned char  TextString351[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString352[]=  "ВЫК";
#endif 
#ifdef  ENG 
  const unsigned char   TextString352[]  =   "OFF";
#endif   
#ifdef  FIN 
   const unsigned char  TextString352[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString353[]=  "ВК";
#endif 
#ifdef  ENG 
  const unsigned char   TextString353[]  =   "ON";
#endif   
#ifdef  FIN 
   const unsigned char  TextString353[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню содержит описание привязок дренчеров.
*/
#ifdef  RUS 
  const unsigned char   TextString354[]=  "Управление.таблица запуска дренчеров";
#endif 
#ifdef  ENG 
  const unsigned char   TextString354[]  =   "Control.deluge activation table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString354[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString355[]=  "опций";
#endif 
#ifdef  ENG 
  const unsigned char   TextString355[]  =   "options";
#endif   
#ifdef  FIN 
   const unsigned char  TextString355[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString356[]=  "Зона №";
#endif 
#ifdef  ENG 
  const unsigned char   TextString356[]  =   "Zone number";
#endif   
#ifdef  FIN 
   const unsigned char  TextString356[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString357[]=  "ВЫКЛЮЧЕНА";
#endif 
#ifdef  ENG 
  const unsigned char   TextString357[]  =   "OFF";
#endif   
#ifdef  FIN 
   const unsigned char  TextString357[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString358[]=  "ВКЛЮЧЕНА";
#endif 
#ifdef  ENG 
  const unsigned char   TextString358[]  =   "ON";
#endif   
#ifdef  FIN 
   const unsigned char  TextString358[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню содержит описание привязок дренчеров.
*/
#ifdef  RUS 
  const unsigned char   TextString359[]=  "Управление.таблица областей";
#endif 
#ifdef  ENG 
  const unsigned char   TextString359[]  =   "Control.area table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString359[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню содержит таблицу запуска внешнеих адресов в системе.
*/
#ifdef  RUS 
  const unsigned char   TextString361[]=  "Управление.таблица запуска внешних адресов";
#endif 
#ifdef  ENG 
  const unsigned char   TextString361[]  =   "Control.external addresses activation table";
#endif   
#ifdef  FIN 
   const unsigned char  TextString361[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню позволяет контролировать прошивку устройства.
*/
#ifdef  RUS 
  const unsigned char   TextString362[]=  "Настройка.Контроль прошивки";
#endif 
#ifdef  ENG 
  const unsigned char   TextString362[]  =   "Settings.Firmware monitoring";
#endif   
#ifdef  FIN 
   const unsigned char  TextString362[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString363[]=  "текущая версия";
#endif 
#ifdef  ENG 
  const unsigned char   TextString363[]  =   "current version";
#endif   
#ifdef  FIN 
   const unsigned char  TextString363[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString364[]=  "контрольн. сумма";
#endif 
#ifdef  ENG 
  const unsigned char   TextString364[]  =   "check sum";
#endif   
#ifdef  FIN 
   const unsigned char  TextString364[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString365[]=  "Нет корректной";
#endif 
#ifdef  ENG 
  const unsigned char   TextString365[]  =   "No correct";
#endif   
#ifdef  FIN 
   const unsigned char  TextString365[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString366[]=  "прошивки";
#endif 
#ifdef  ENG 
  const unsigned char   TextString366[]  =   "firmware";
#endif   
#ifdef  FIN 
   const unsigned char  TextString366[] =   "";
#endif
/*****************************************************************************/
/*
Наименование кнопки.
*/
#ifdef  RUS 
  const unsigned char   TextString367[]=  "- загрузить в текущий";
#endif 
#ifdef  ENG 
  const unsigned char   TextString367[]  =   "- upload to current";
#endif   
#ifdef  FIN 
   const unsigned char  TextString367[] =   "";
#endif
/*****************************************************************************/
/*
Наименование типа устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString368[]=  "Одиночный";
#endif 
#ifdef  ENG 
   const unsigned char  TextString368[]=   "Single";
#endif 
#ifdef  FIN 
   const unsigned char  TextString368[]=   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
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
Текст сообщения.
*/
#ifdef  RUS 
   const unsigned char  TextString370[]=  "Подать команду";
#endif 
#ifdef  ENG 
   const unsigned char  TextString370[]=   "Issue command";
#endif 
#ifdef  FIN 
   const unsigned char  TextString370[]=   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
   const unsigned char  TextString371[]=  "команда";
#endif 
#ifdef  ENG 
   const unsigned char  TextString371[]=   "command";
#endif 
#ifdef  FIN 
   const unsigned char  TextString371[]=   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
   const unsigned char  TextString372[]=  "Некорректная прошивка";
#endif 
#ifdef  ENG 
   const unsigned char  TextString372[]=   "Incorrect firmware";
#endif 
#ifdef  FIN 
   const unsigned char  TextString372[]=   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
   const unsigned char  TextString373[]=  "команда не возможна";
#endif 
#ifdef  ENG 
   const unsigned char  TextString373[]=   "command is impossible";
#endif 
#ifdef  FIN 
   const unsigned char  TextString373[]=   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
   const unsigned char  TextString374[]=  "новая версия";
#endif 
#ifdef  ENG 
   const unsigned char  TextString374[]=   "new version";
#endif 
#ifdef  FIN 
   const unsigned char  TextString374[]=   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
   const unsigned char  TextString375[]=  "корректность";
#endif 
#ifdef  ENG 
   const unsigned char  TextString375[]=   "correctness";
#endif 
#ifdef  FIN 
   const unsigned char  TextString375[]=   "";
#endif
/*****************************************************************************/
/*
Наименование кнопок.
*/
#ifdef  RUS 
   const unsigned char  TextString376[]=   "F1-начать передачу                                         F3-индивидуальная запись";
#endif 
#ifdef  ENG 
   const unsigned char  TextString376[]=   "F1-start file transfer                                     F3-individual recording";
#endif 
#ifdef  FIN 
   const unsigned char  TextString376[]=   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
   const unsigned char  TextString377[]=  "корректно";
#endif 
#ifdef  ENG 
   const unsigned char  TextString377[]=   "correct";
#endif 
#ifdef  FIN 
   const unsigned char  TextString377[]=   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
   const unsigned char  TextString378[]=  "некорректно";
#endif 
#ifdef  ENG 
   const unsigned char  TextString378[]=   "incorrect";
#endif 
#ifdef  FIN 
   const unsigned char  TextString378[]=   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню позволяет контролировать прошивку устройства.
*/
#ifdef  RUS 
  const unsigned char   TextString379[]=  "Настройка.Контроль прошивки.загрузка";
#endif 
#ifdef  ENG 
  const unsigned char   TextString379[]  =   "Settings.Firmware monitoring.loading";
#endif   
#ifdef  FIN 
   const unsigned char  TextString379[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню позволяет контролировать прошивку устройства.
*/
#ifdef  RUS 
  const unsigned char   TextString380[]=  "загрузка завершена";
#endif 
#ifdef  ENG 
  const unsigned char   TextString380[]  =   "loading completed";
#endif   
#ifdef  FIN 
   const unsigned char  TextString380[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString381[]=  "отправлено";
#endif 
#ifdef  ENG 
  const unsigned char   TextString381[]  =   "sent";
#endif   
#ifdef  FIN 
   const unsigned char  TextString381[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString382[]=  "всего";
#endif 
#ifdef  ENG 
  const unsigned char   TextString382[]  =   "totally";
#endif   
#ifdef  FIN 
   const unsigned char  TextString382[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString383[]=  "доставлено";
#endif 
#ifdef  ENG 
  const unsigned char   TextString383[]  =   "delivered";
#endif   
#ifdef  FIN 
   const unsigned char  TextString383[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString384[]=  "попытка";
#endif 
#ifdef  ENG 
  const unsigned char   TextString384[]  =   "attempt";
#endif   
#ifdef  FIN 
   const unsigned char  TextString384[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString385[]=  "не могу выполнить";
#endif 
#ifdef  ENG 
  const unsigned char   TextString385[]  =   "can not complete";
#endif   
#ifdef  FIN 
   const unsigned char  TextString385[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString386[]=  "идет загрузка";
#endif 
#ifdef  ENG 
  const unsigned char   TextString386[]  =   "loading";
#endif   
#ifdef  FIN 
   const unsigned char  TextString386[] =   "";
#endif
/*****************************************************************************/
/*
Наименование кнопки.
*/
#ifdef  RUS 
  const unsigned char   TextString387[]=  "-  продолжить загрузку";
#endif 
#ifdef  ENG 
  const unsigned char   TextString387[]  =   "- continue loading";
#endif   
#ifdef  FIN 
   const unsigned char  TextString387[] =   "";
#endif
/*****************************************************************************/
/*
Наименование кнопки.
*/
#ifdef  RUS 
  const unsigned char   TextString388[]=  "-  индивидуальная загрузка";
#endif 
#ifdef  ENG 
  const unsigned char   TextString388[]  =   "- individual loading";
#endif   
#ifdef  FIN 
   const unsigned char  TextString388[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString389[]=  "Адрес БКУ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString389[]  =   "BKU address";
#endif   
#ifdef  FIN 
   const unsigned char  TextString389[] =   "";
#endif
/*****************************************************************************/
/*
Наименование кнопки.
*/
#ifdef  RUS 
  const unsigned char   TextString390[]=  "                             F2-продолжить запись            F3-индивидуальная запись";
#endif 
#ifdef  ENG 
  const unsigned char   TextString390[]  =   "                             F2-continue recording       F3-individual recording";
#endif   
#ifdef  FIN 
   const unsigned char  TextString390[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString391[]=  "ошибка";
#endif 
#ifdef  ENG 
  const unsigned char   TextString391[]  =   "error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString391[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString392[]=  "загрузка окончена";
#endif 
#ifdef  ENG 
  const unsigned char   TextString392[]  =   "loading is over";
#endif   
#ifdef  FIN 
   const unsigned char  TextString392[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString393[]=  "ПОДНЕСИТЕ КАРТУ\n\nдля выхода нажмите ОТМЕНА";
#endif 
#ifdef  ENG 
  const unsigned char   TextString393[]  =   "BADGE CARD\n\nfor exit press CANCEL";
#endif   
#ifdef  FIN 
   const unsigned char  TextString393[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString394[]=  "поднесите карту еще раз\n\nдля выхода нажмите ОТМЕНА";
#endif 
#ifdef  ENG 
  const unsigned char   TextString394[]  =   "badge card once more\n\nfor exit press CANCEL";
#endif   
#ifdef  FIN 
   const unsigned char  TextString394[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString395[]=  "введите номер пользователя(1-255)\n\nдля выхода нажмите ОТМЕНА";
#endif 
#ifdef  ENG 
  const unsigned char   TextString395[]  =   "enter user number(1-255)\n\nfor exit press CANCEL";
#endif   
#ifdef  FIN 
   const unsigned char  TextString395[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString396[]=  "номер занят";
#endif 
#ifdef  ENG 
  const unsigned char   TextString396[]  =   "number is busy";
#endif   
#ifdef  FIN 
   const unsigned char  TextString396[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString397[]=  "   Подтвердить удаление -'Ввод'\n       отменить удаление -'Отмена'";
#endif 
#ifdef  ENG 
  const unsigned char   TextString397[]  =   "Confirm deleting - 'Enter'\n     cancel deleting - 'Cancel'";
#endif   
#ifdef  FIN 
   const unsigned char  TextString397[] =   "";
#endif
/*****************************************************************************/
/*
Наименование типа пользователя.
*/
#ifdef  RUS 
  const unsigned char   TextString398[]=  "отключен";
#endif 
#ifdef  ENG 
  const unsigned char   TextString398[]  =   "off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString398[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString399[]=  "уровень доступа";
#endif 
#ifdef  ENG 
  const unsigned char   TextString399[]  =   "access level";
#endif   
#ifdef  FIN 
   const unsigned char  TextString399[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString400[]=  "отключен";
#endif 
#ifdef  ENG 
  const unsigned char   TextString400[]  =   "off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString400[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString401[]=  "Операция не выполнена";
#endif 
#ifdef  ENG 
  const unsigned char   TextString401[]  =   "Operation is not completed";
#endif   
#ifdef  FIN 
   const unsigned char  TextString401[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню позволяет настраивать NAND память устройства.
*/
#ifdef  RUS 
  const unsigned char   TextString402[]=  "Работа с памятью";
#endif 
#ifdef  ENG 
  const unsigned char   TextString402[]  =   "Work with memory";
#endif   
#ifdef  FIN 
   const unsigned char  TextString402[] =   "";
#endif
/*****************************************************************************/
/*
Наименование кнопки.
*/
#ifdef  RUS 
  const unsigned char   TextString403[]=  "СКАНИРОВАТЬ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString403[]  =   "SCAN";
#endif   
#ifdef  FIN 
   const unsigned char  TextString403[] =   "";
#endif
/*****************************************************************************/
/*
Наименование кнопки.
*/
#ifdef  RUS 
  const unsigned char   TextString404[]=  "ПРОВЕРИТЬ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString404[]  =   "CHECK";
#endif   
#ifdef  FIN 
   const unsigned char  TextString404[] =   "";
#endif
/*****************************************************************************/
/*
Наименование кнопки.
*/
#ifdef  RUS 
  const unsigned char   TextString405[]=  "№ Блока";
#endif 
#ifdef  ENG 
  const unsigned char   TextString405[]  =   "Block тumber";
#endif   
#ifdef  FIN 
   const unsigned char  TextString405[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString406[]=  "название";
#endif 
#ifdef  ENG 
  const unsigned char   TextString406[]  =   "name";
#endif   
#ifdef  FIN 
   const unsigned char  TextString406[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString407[]=  "размер";
#endif 
#ifdef  ENG 
  const unsigned char   TextString407[]  =   "size";
#endif   
#ifdef  FIN 
   const unsigned char  TextString407[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString408[]=  "начало";
#endif 
#ifdef  ENG 
  const unsigned char   TextString408[]  =   "start";
#endif   
#ifdef  FIN 
   const unsigned char  TextString408[] =   "";
#endif
/*****************************************************************************/
/*
Текст сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString409[]=  "Общая проверка-ВЫПОЛНЕНО";
#endif 
#ifdef  ENG 
  const unsigned char   TextString409[]  =   "General examination - COMPLETED";
#endif   
#ifdef  FIN 
   const unsigned char  TextString409[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString410[]=  "Общая проверка-НЕВЫПОЛНЕНО";
#endif 
#ifdef  ENG 
  const unsigned char   TextString410[]  =   "General examination-NOT COMPLETED";
#endif   
#ifdef  FIN 
   const unsigned char  TextString410[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString411[]=  "Сканирование-ВЫПОЛНЕНО";
#endif 
#ifdef  ENG 
  const unsigned char   TextString411[]  =   "Scanning-COMPLETED";
#endif   
#ifdef  FIN 
   const unsigned char  TextString411[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString412[]=  "Сканирование-НЕВЫПОЛНЕНО";
#endif 
#ifdef  ENG 
  const unsigned char   TextString412[]  =   "Scanning-NOT COMPLETED";
#endif   
#ifdef  FIN 
   const unsigned char  TextString412[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString413[]=  "Сперва нажмите кнопку";
#endif 
#ifdef  ENG 
  const unsigned char   TextString413[]  =   "Press button first";
#endif   
#ifdef  FIN 
   const unsigned char  TextString413[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString414[]=  "СКАНИРОВАТЬ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString414[]  =   "SCAN";
#endif   
#ifdef  FIN 
   const unsigned char  TextString414[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString415[]=  "Системная табл.(резерв)";
#endif 
#ifdef  ENG 
  const unsigned char   TextString415[]  =   "System table (backup)";
#endif   
#ifdef  FIN 
   const unsigned char  TextString415[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString416[]=  "Таблицы";
#endif 
#ifdef  ENG 
  const unsigned char   TextString416[]  =   "Tables";
#endif   
#ifdef  FIN 
   const unsigned char  TextString416[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString417[]=  "Таблицы (резерв)";
#endif 
#ifdef  ENG 
  const unsigned char   TextString417[]  =   "Tables (backup)";
#endif   
#ifdef  FIN 
   const unsigned char  TextString417[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString418[]=  "Лог";
#endif 
#ifdef  ENG 
  const unsigned char   TextString418[]  =   "Log";
#endif   
#ifdef  FIN 
   const unsigned char  TextString418[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString419[]=  "Лог резерв";
#endif 
#ifdef  ENG 
  const unsigned char   TextString419[]  =   "Log backup";
#endif   
#ifdef  FIN 
   const unsigned char  TextString419[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString420[]=  "RF карты";
#endif 
#ifdef  ENG 
  const unsigned char   TextString420[]  =   "Card RF";
#endif   
#ifdef  FIN 
   const unsigned char  TextString420[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString421[]=  "RF карты резерв";
#endif 
#ifdef  ENG 
  const unsigned char   TextString421[]  =   "Card RF backup";
#endif   
#ifdef  FIN 
   const unsigned char  TextString421[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString422[]=  "Пересечение блоков";
#endif 
#ifdef  ENG 
  const unsigned char   TextString422[]  =   "Crossing of blocks";
#endif   
#ifdef  FIN 
   const unsigned char  TextString422[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString423[]=  "Битые блоки";
#endif 
#ifdef  ENG 
  const unsigned char   TextString423[]  =   "Bad blocks";
#endif   
#ifdef  FIN 
   const unsigned char  TextString423[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString424[]=  "в конфигурации";
#endif 
#ifdef  ENG 
  const unsigned char   TextString424[]  =   "in configuration";
#endif   
#ifdef  FIN 
   const unsigned char  TextString424[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString425[]=  "Успешно!";
#endif 
#ifdef  ENG 
  const unsigned char   TextString425[]  =   "Success!";
#endif   
#ifdef  FIN 
   const unsigned char  TextString425[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString426[]=  "системное сообщение";
#endif 
#ifdef  ENG 
  const unsigned char   TextString426[]  =   "system message";
#endif   
#ifdef  FIN 
   const unsigned char  TextString426[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString427[]=  "общая проверка - ВЫПОЛНЕНО";
#endif 
#ifdef  ENG 
  const unsigned char   TextString427[]  =   "general check - COMPLETED";
#endif   
#ifdef  FIN 
   const unsigned char  TextString427[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString428[]=  "пожалуйста подождите";
#endif 
#ifdef  ENG 
  const unsigned char   TextString428[]  =   "please wait";
#endif   
#ifdef  FIN 
   const unsigned char  TextString428[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString429[]=  "идет инициализация!";
#endif 
#ifdef  ENG 
  const unsigned char   TextString429[]  =   "initialization!";
#endif   
#ifdef  FIN 
   const unsigned char  TextString429[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString430[]=  "изменение начального блока";
#endif 
#ifdef  ENG 
  const unsigned char   TextString430[]  =   "change of initial block";
#endif   
#ifdef  FIN 
   const unsigned char  TextString430[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString431[]=  "Введите новый адрес";
#endif 
#ifdef  ENG 
  const unsigned char   TextString431[]  =   "Enter new address";
#endif   
#ifdef  FIN 
   const unsigned char  TextString431[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString432[]=  "Введите новый адрес";
#endif 
#ifdef  ENG 
  const unsigned char   TextString432[]  =   "Enter new address";
#endif   
#ifdef  FIN 
   const unsigned char  TextString432[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString433[]=  "нет ответа";
#endif 
#ifdef  ENG 
  const unsigned char   TextString433[]  =   "no response";
#endif   
#ifdef  FIN 
   const unsigned char  TextString433[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString434[]=  "режим конф. включен";
#endif 
#ifdef  ENG 
  const unsigned char   TextString434[]  =   "conf. mode on";
#endif   
#ifdef  FIN 
   const unsigned char  TextString434[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString435[]=  "режим конф. выключен";
#endif 
#ifdef  ENG 
  const unsigned char   TextString435[]  =   "configuration mode off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString435[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню позволяет получить информацию о версии конфигурации и прошивки.
*/
#ifdef  RUS 
  const unsigned char   TextString436[]=  "Настройка.Информация";
#endif 
#ifdef  ENG 
  const unsigned char   TextString436[]  =   "Setting.Information";
#endif   
#ifdef  FIN 
   const unsigned char  TextString436[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца. 
*/
#ifdef  RUS 
  const unsigned char   TextString437[]=  "Общая информация";
#endif 
#ifdef  ENG 
  const unsigned char   TextString437[]  =   "General information";
#endif   
#ifdef  FIN 
   const unsigned char  TextString437[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца. 
*/
#ifdef  RUS 
  const unsigned char   TextString438[]=  "версия ПО";
#endif 
#ifdef  ENG 
  const unsigned char   TextString438[]  =   "Software version";
#endif   
#ifdef  FIN 
   const unsigned char  TextString438[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца. 
*/
#ifdef  RUS 
  const unsigned char   TextString439[]=  "имя конфигурации";
#endif 
#ifdef  ENG 
  const unsigned char   TextString439[]  =   "configuration name";
#endif   
#ifdef  FIN 
   const unsigned char  TextString439[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца. 
*/
#ifdef  RUS 
  const unsigned char   TextString440[]=  "дата загрузки";
#endif 
#ifdef  ENG 
  const unsigned char   TextString440[]  =   "loading date";
#endif   
#ifdef  FIN 
   const unsigned char  TextString440[] =   "";
#endif
/*****************************************************************************/
/*
Наименование меню. Данное меню позволяет получить информацию о версии конфигурации и прошивки.
*/
#ifdef  RUS 
  const unsigned char   TextString441[]=  "Настройка.Управление режимом конфигурации";
#endif 
#ifdef  ENG 
  const unsigned char   TextString441[]  =   "Setting.configuration mode control";
#endif   
#ifdef  FIN 
   const unsigned char  TextString441[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString442[]=  "режим конф. включен";
#endif 
#ifdef  ENG 
  const unsigned char   TextString442[]  =   "configuration mode on";
#endif   
#ifdef  FIN 
   const unsigned char  TextString442[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString443[]=  "режим конф. выключен";
#endif 
#ifdef  ENG 
  const unsigned char   TextString443[]  =   "configuration mode off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString443[] =   "";
#endif
/*****************************************************************************/
/*
Наименование МЕНЮ.
*/
#ifdef  RUS 
  const unsigned char   TextString444[]=  "Настройка.Статистика ведомого";
#endif 
#ifdef  ENG 
  const unsigned char   TextString444[]  =   "Setting.Slave statistic";
#endif   
#ifdef  FIN 
   const unsigned char  TextString444[] =   "";
#endif
/*****************************************************************************/
/*
Наименование КНОПКИ.
*/
#ifdef  RUS 
  const unsigned char   TextString445[]=  "F1 - команда на сброс статистики ведомого БКУ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString445[]  =   "F1 - slave BKU statistics reset command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString445[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString446[]=  "адр.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString446[]  =   "adr.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString446[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString447[]=  "всего зап. пр.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString447[]  =   "tot. req. r.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString447[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString448[]=  "всего зап. лв.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString448[]  =   "tot. req. l.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString448[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString449[]=  "всего отв.пр.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString449[]  =   "tot. resp. r.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString449[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString450[]=  "всего отв.лв.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString450[]  =   "tot. resp. l.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString450[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString451[]=  "нет отв.пр.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString451[]  =   "no resp. r.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString451[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString452[]=  "нет отв.лв.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString452[]  =   "no resp. l.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString452[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString453[]=  "crc_er_пр";
#endif 
#ifdef  ENG 
  const unsigned char   TextString453[]  =   "crc_er_r.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString453[] =   "";
#endif
/*****************************************************************************/
/*
Наименование столбца.
*/
#ifdef  RUS 
  const unsigned char   TextString454[]=  "crc_er_лв";
#endif 
#ifdef  ENG 
  const unsigned char   TextString454[]  =   "crc_er_l.";
#endif   
#ifdef  FIN 
   const unsigned char  TextString454[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString455[]=  "Настройка.Статистика";
#endif 
#ifdef  ENG 
  const unsigned char   TextString455[]  =   "Setting.Statistics";
#endif   
#ifdef  FIN 
   const unsigned char  TextString455[] =   "";
#endif
/*****************************************************************************/
/*
Наименование КНОПКИ.
*/
#ifdef  RUS 
  const unsigned char   TextString456[]=  "- посмотреть статистику ведомого";
#endif 
#ifdef  ENG 
  const unsigned char   TextString456[]  =   "- see slave statistics";
#endif   
#ifdef  FIN 
   const unsigned char  TextString456[] =   "";
#endif
/*****************************************************************************/
/*
Наименование КНОПКИ.
*/
#ifdef  RUS 
  const unsigned char   TextString457[]=  "- сбросить статистику";
#endif 
#ifdef  ENG 
  const unsigned char   TextString457[]  =   "- reset statistics";
#endif   
#ifdef  FIN 
   const unsigned char  TextString457[] =   "";
#endif
/*****************************************************************************/
/*
Наименование состаяния.
*/
#ifdef  RUS 
  const unsigned char   TextString458[]=  "Остановка пуска";
#endif 
#ifdef  ENG 
  const unsigned char   TextString458[]  =   "Activation stop";
#endif   
#ifdef  FIN 
   const unsigned char  TextString458[] =   "";
#endif
/*****************************************************************************/
/*
Наименование кнопки.
*/
#ifdef  RUS 
  const unsigned char   TextString459[]=  "F1 -удалить";
#endif 
#ifdef  ENG 
  const unsigned char   TextString459[]  =   "F1-delete";
#endif   
#ifdef  FIN 
   const unsigned char  TextString459[] =   "";
#endif
/*****************************************************************************/
/*
Наименование Окна.
*/
#ifdef  RUS 
  const unsigned char   TextString460[]=  "Подтверждение";
#endif 
#ifdef  ENG 
  const unsigned char   TextString460[]  =   "Confirmation";
#endif   
#ifdef  FIN 
   const unsigned char  TextString460[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString461[]=  "Доступ закрыт";
#endif 
#ifdef  ENG 
  const unsigned char   TextString461[]  =   "Access denied";
#endif   
#ifdef  FIN 
   const unsigned char  TextString461[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString462[]=  "В режиме Ведомый";
#endif 
#ifdef  ENG 
  const unsigned char   TextString462[]  =   "In slave mode";
#endif   
#ifdef  FIN 
   const unsigned char  TextString462[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString463[]=  "функция недоступна";
#endif 
#ifdef  ENG 
  const unsigned char   TextString463[]  =   "function is not available";
#endif   
#ifdef  FIN 
   const unsigned char  TextString463[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString464[]=  "Неисправность АУ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString464[]  =   "AD fault";
#endif   
#ifdef  FIN 
   const unsigned char  TextString464[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString465[]=  "Восстановление связи с АУ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString465[]  =   "AD reconnection";
#endif   
#ifdef  FIN 
   const unsigned char  TextString465[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString466[]=  "АУ в состоянии Внимание";
#endif 
#ifdef  ENG 
  const unsigned char   TextString466[]  =   "AD in Attention mode";
#endif   
#ifdef  FIN 
   const unsigned char  TextString466[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString467[]=  "АУ в состоянии Пожар";
#endif 
#ifdef  ENG 
  const unsigned char   TextString467[]  =   "AD in Fire mode";
#endif   
#ifdef  FIN 
   const unsigned char  TextString467[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString468[]=  "Короткое замыкание АУ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString468[]  =   "AD short-circuit";
#endif   
#ifdef  FIN 
   const unsigned char  TextString468[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString469[]=  "Запуск АУ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString469[]  =   "AD activation";
#endif   
#ifdef  FIN 
   const unsigned char  TextString469[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString470[]=  "Блокировка АСПТ снята";
#endif 
#ifdef  ENG 
  const unsigned char   TextString470[]  =   "AES unblocked";
#endif   
#ifdef  FIN 
   const unsigned char  TextString470[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString471[]=  "КЗ в силовой линии КЛ-240АЭ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString471[]  =   "Short-circuit in power line of KL-240AE";
#endif   
#ifdef  FIN 
   const unsigned char  TextString471[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString472[]=  "КЗ в силовой линии КЛ-240АЭ устранено";
#endif 
#ifdef  ENG 
  const unsigned char   TextString472[]  =   "Short-circuit in power line of KL-240AE fixed";
#endif   
#ifdef  FIN 
   const unsigned char  TextString472[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString473[]=  "ошибка инициализаций БКУ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString473[]  =   "BKU initialization error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString473[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString474[]=  "потеря связи с БКУ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString474[]  =   "BKU connection loss";
#endif   
#ifdef  FIN 
   const unsigned char  TextString474[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString475[]=  "связь с БКУ восстановлена";
#endif 
#ifdef  ENG 
  const unsigned char   TextString475[]  =   "BKU connection norm";
#endif   
#ifdef  FIN 
   const unsigned char  TextString475[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString476[]=  "Вскрытие оросителя";
#endif 
#ifdef  ENG 
  const unsigned char   TextString476[]  =   "Sprinkler activation";
#endif   
#ifdef  FIN 
   const unsigned char  TextString476[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString477[]=  "Блокировка АСПТ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString477[]  =   "AES blocking";
#endif   
#ifdef  FIN 
   const unsigned char  TextString477[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString478[]=  "БКУ исключен из опрос";
#endif 
#ifdef  ENG 
  const unsigned char   TextString478[]  =   "BKU polling off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString478[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString479[]=  "БКУ включен в опрос";
#endif 
#ifdef  ENG 
  const unsigned char   TextString479[]  =   "BKU polling on";
#endif   
#ifdef  FIN 
   const unsigned char  TextString479[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString480[]=  "время изменено";
#endif 
#ifdef  ENG 
  const unsigned char   TextString480[]  =   "time is changed";
#endif   
#ifdef  FIN 
   const unsigned char  TextString480[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString481[]=  "команда на перевод зоны на ускоренный таймер";
#endif 
#ifdef  ENG 
  const unsigned char   TextString481[]  =   "zone transfer to accelerated timer command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString481[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString482[]=  "команда корректировки времени";
#endif 
#ifdef  ENG 
  const unsigned char   TextString482[]  =   "time update command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString482[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString483[]=  "сброс тревог и неисправностей";
#endif 
#ifdef  ENG 
  const unsigned char   TextString483[]  =   "faults and alarms reset";
#endif   
#ifdef  FIN 
   const unsigned char  TextString483[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString484[]=  "команда сброс тревог и неисправностей";
#endif 
#ifdef  ENG 
  const unsigned char   TextString484[]  =   "faults and alarms reset";
#endif   
#ifdef  FIN 
   const unsigned char  TextString484[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString485[]=  "конфигурационный режим включен";
#endif 
#ifdef  ENG 
  const unsigned char   TextString485[]  =   "configuration mode on";
#endif   
#ifdef  FIN 
   const unsigned char  TextString485[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString486[]=  "конфигурационный режим выключен";
#endif 
#ifdef  ENG 
  const unsigned char   TextString486[]  =   "configuration mode off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString486[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString487[]=  "команда на вкл. конфигурационного режим";
#endif 
#ifdef  ENG 
  const unsigned char   TextString487[]  =   "configuration mode on command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString487[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString488[]=  "команда на выкл. конфигурационного режим";
#endif 
#ifdef  ENG 
  const unsigned char   TextString488[]  =   "configuration mode off command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString488[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString489[]=  "прошивка принята";
#endif 
#ifdef  ENG 
  const unsigned char   TextString489[]  =   "firmware is accepted";
#endif   
#ifdef  FIN 
   const unsigned char  TextString489[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString490[]=  "ком. на обн. прошивки";
#endif 
#ifdef  ENG 
  const unsigned char   TextString490[]  =   "firmware update command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString490[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString491[]=  "зона в Пожаре 1";
#endif 
#ifdef  ENG 
  const unsigned char   TextString491[]  =   "fire in zone";
#endif   
#ifdef  FIN 
   const unsigned char  TextString491[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString492[]=  "зона в Пожаре 2";
#endif 
#ifdef  ENG 
  const unsigned char   TextString492[]  =   "coinc. in zone";
#endif   
#ifdef  FIN 
   const unsigned char  TextString492[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString493[]=  "Уменьшение задержки в зоне";
#endif 
#ifdef  ENG 
  const unsigned char   TextString493[]  =   "Delay reduction in zone";
#endif   
#ifdef  FIN 
   const unsigned char  TextString493[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString494[]=  "Ком. на уст. пожар 1 в зоне";
#endif 
#ifdef  ENG 
  const unsigned char   TextString494[]  =   "Fire in zone command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString494[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString495[]=  "Ком. на уст. пожар 2 в зоне";
#endif 
#ifdef  ENG 
  const unsigned char   TextString495[]  =   "Coinc. in zone command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString495[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString496[]=  "Запуск обратного отсчета";
#endif 
#ifdef  ENG 
  const unsigned char   TextString496[]  =   "Countdown activation";
#endif   
#ifdef  FIN 
   const unsigned char  TextString496[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString497[]=  "Пауза обратного отсчета";
#endif 
#ifdef  ENG 
  const unsigned char   TextString497[]  =   "Countdown paused";
#endif   
#ifdef  FIN 
   const unsigned char  TextString497[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString498[]=  "Возобновление после паузы обратного отсчета";
#endif 
#ifdef  ENG 
  const unsigned char   TextString498[]  =   "Countdown activation after pause";
#endif   
#ifdef  FIN 
   const unsigned char  TextString498[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString499[]=  "Отмена обратного отсчета";
#endif 
#ifdef  ENG 
  const unsigned char   TextString499[]  =   "Countdown cancel";
#endif   
#ifdef  FIN 
   const unsigned char  TextString499[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString500[]=  "Принудительное обновление";
#endif 
#ifdef  ENG 
  const unsigned char   TextString500[]  =   "forced updating";
#endif   
#ifdef  FIN 
   const unsigned char  TextString500[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString501[]=  "Команда начало обратного отсчета";
#endif 
#ifdef  ENG 
  const unsigned char   TextString501[]  =   "Countdown start command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString501[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString502[]=  "Команда пауза обратного отсчета";
#endif 
#ifdef  ENG 
  const unsigned char   TextString502[]  =   "Countdown pause command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString502[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString503[]=  "Команда продолжение обратного отсчета";
#endif 
#ifdef  ENG 
  const unsigned char   TextString503[]  =   "Countdown continuing";
#endif   
#ifdef  FIN 
   const unsigned char  TextString503[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString504[]=  "команда таймер отменен";
#endif 
#ifdef  ENG 
  const unsigned char   TextString504[]  =   "timer cancelled command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString504[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString505[]=  "команда принудит. обнуление";
#endif 
#ifdef  ENG 
  const unsigned char   TextString505[]  =   "forced nulling command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString505[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString506[]=  "Включение автоматики";
#endif 
#ifdef  ENG 
  const unsigned char   TextString506[]  =   "Automation on";
#endif   
#ifdef  FIN 
   const unsigned char  TextString506[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString507[]=  "Отключение автоматики";
#endif 
#ifdef  ENG 
  const unsigned char   TextString507[]  =   "Automation off";
#endif   
#ifdef  FIN 
   const unsigned char  TextString507[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString508[]=  "Включение запрет пусков";
#endif 
#ifdef  ENG 
  const unsigned char   TextString508[]  =   "Activation ban on";
#endif   
#ifdef  FIN 
   const unsigned char  TextString508[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString509[]=  "ком. вкл. автоматики";
#endif 
#ifdef  ENG 
  const unsigned char   TextString509[]  =   "automation on command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString509[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString510[]=  "ком. автоматику отключить";
#endif 
#ifdef  ENG 
  const unsigned char   TextString510[]  =   "automation off command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString510[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString511[]=  "ком. на запрет пусков";
#endif 
#ifdef  ENG 
  const unsigned char   TextString511[]  =   "activation ban command";
#endif   
#ifdef  FIN 
   const unsigned char  TextString511[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString512[]=  "ожидание подтверждения команды";
#endif 
#ifdef  ENG 
  const unsigned char   TextString512[]  =   "waiting for command confirmation";
#endif   
#ifdef  FIN 
   const unsigned char  TextString512[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString513[]=  "ошибка системной таблицы";
#endif 
#ifdef  ENG 
  const unsigned char   TextString513[]  =   "system table error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString513[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString514[]=  "режим конфигурации включен";
#endif 
#ifdef  ENG 
  const unsigned char   TextString514[]  =   "configuration mode on";
#endif   
#ifdef  FIN 
   const unsigned char  TextString514[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString515[]=  "ошибка таблиц конфигураций";
#endif 
#ifdef  ENG 
  const unsigned char   TextString515[]  =   "configuration table error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString515[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString516[]=  "ошибка чтения карт доступа";
#endif 
#ifdef  ENG 
  const unsigned char   TextString516[]  =   "access card reading error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString516[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString517[]=  "ошибка чтения лога";
#endif 
#ifdef  ENG 
  const unsigned char   TextString517[]  =   "log reading error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString517[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString518[]=  "верификация не выполнена";
#endif 
#ifdef  ENG 
  const unsigned char   TextString518[]  =   "verification failed";
#endif   
#ifdef  FIN 
   const unsigned char  TextString518[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString519[]=  "выполнить тест невозможно";
#endif 
#ifdef  ENG 
  const unsigned char   TextString519[]  =   "test failed";
#endif   
#ifdef  FIN 
   const unsigned char  TextString519[] =   "";
#endif
/*****************************************************************************/
/*
Наименование заголовка сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString520[]=  "Режим Тест";
#endif 
#ifdef  ENG 
  const unsigned char   TextString520[]  =   "Test mode";
#endif   
#ifdef  FIN 
   const unsigned char  TextString520[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString521[]=  "Тест";
#endif 
#ifdef  ENG 
  const unsigned char   TextString521[]  =   "Test";
#endif   
#ifdef  FIN 
   const unsigned char  TextString521[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString522[]=  "некорректное значение";
#endif 
#ifdef  ENG 
  const unsigned char   TextString522[]  =   "incorrect value";
#endif   
#ifdef  FIN 
   const unsigned char  TextString522[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString523[]=  "Недостаточно";
#endif 
#ifdef  ENG 
  const unsigned char   TextString523[]  =   "Not enough";
#endif   
#ifdef  FIN 
   const unsigned char  TextString523[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString524[]=  "Видеопамяти";
#endif 
#ifdef  ENG 
  const unsigned char   TextString524[]  =   "Video memory";
#endif   
#ifdef  FIN 
   const unsigned char  TextString524[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString525[]=  "ошибка системы";
#endif 
#ifdef  ENG 
  const unsigned char   TextString525[]  =   "system error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString525[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString526[]=  "логика";
#endif 
#ifdef  ENG 
  const unsigned char   TextString526[]  =   "logic";
#endif   
#ifdef  FIN 
   const unsigned char  TextString526[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString527[]=  "(корректно)";
#endif 
#ifdef  ENG 
  const unsigned char   TextString527[]  =   "(correct)";
#endif   
#ifdef  FIN 
   const unsigned char  TextString527[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString528[]=  "номер карты";
#endif 
#ifdef  ENG 
  const unsigned char   TextString528[]  =   "card number";
#endif   
#ifdef  FIN 
   const unsigned char  TextString528[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString529[]=  "уменьшено на ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString529[]  =   "reduced by ";
#endif   
#ifdef  FIN 
   const unsigned char  TextString529[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString530[]=  "отключен;";
#endif 
#ifdef  ENG 
  const unsigned char   TextString530[]  =   "off;";
#endif   
#ifdef  FIN 
   const unsigned char  TextString530[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString531[]=  "пользователь;";
#endif 
#ifdef  ENG 
  const unsigned char   TextString531[]  =   "user;";
#endif   
#ifdef  FIN 
   const unsigned char  TextString531[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString532[]=  "админ.;";
#endif 
#ifdef  ENG 
  const unsigned char   TextString532[]  =   "admin.;";
#endif   
#ifdef  FIN 
   const unsigned char  TextString532[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
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
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString534[]=  "статус:";
#endif 
#ifdef  ENG 
  const unsigned char   TextString534[]  =   "status:";
#endif   
#ifdef  FIN 
   const unsigned char  TextString534[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString535[]=  "не акт.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString535[]  =   "non-active";
#endif   
#ifdef  FIN 
   const unsigned char  TextString535[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString536[]=  "НЕИСПРАВ.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString536[]  =   "FAULT";
#endif   
#ifdef  FIN 
   const unsigned char  TextString536[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString537[]=  "Ошибка инициализации памяти NAND";
#endif 
#ifdef  ENG 
  const unsigned char   TextString537[]  =   "NAND memory initialization error";
#endif   
#ifdef  FIN 
   const unsigned char  TextString537[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString538[]=  "обратитесь за поддержкой!";
#endif 
#ifdef  ENG 
  const unsigned char   TextString538[]  =   "contact support!";
#endif   
#ifdef  FIN 
   const unsigned char  TextString538[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS 
  const unsigned char   TextString539[]=  "СИСТЕМА ОЛИМП";
#endif 
#ifdef  ENG 
  const unsigned char   TextString539[]  =   "OLIMP SYSTEM";
#endif   
#ifdef  FIN 
   const unsigned char  TextString539[] =   "";
#endif
/*****************************************************************************/
/*
Наименование пункта меню.
*/
#ifdef  RUS 
  const unsigned char   TextString540[]=  "инициал.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString540[]  =   "initialization";
#endif   
#ifdef  FIN 
   const unsigned char  TextString540[] =   "";
#endif   
/*****************************************************************************/
/*
Наименование столбца. Данный столбец содержит список запускаемых устройств
*/
#ifdef  RUS 
  const unsigned char   TextString541[]=  "запускаемые";
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
  const unsigned char   TextString542[]=  "запрещены!";
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
  const unsigned char   TextString543[]=  "пуски в зоне";
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
  const unsigned char   TextString544[]=  "список заполнен";
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
  const unsigned char   TextString545[]=  "АУ не добавлен в конф-цию";
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
  const unsigned char   TextString546[]=   "адрес отсутствует";
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
  const unsigned char   TextString547[]=   "АУ не имеет пусковой эл-нт";
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
  const unsigned char   TextString548[]=   "Редактирование КЛ-240СА";
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
  const unsigned char   TextString549[]=   "Редактирование КЛ-240АЭ";
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
  const unsigned char   TextString550[]=   "записать";
#endif 
#ifdef  ENG 
  const unsigned char   TextString550[]  =   "record";
#endif   
#ifdef  FIN 
   const unsigned char  TextString550[] =   "";
#endif  
/*****************************************************************************/
/*
Наименование меню. Данное меню содержит описание устройств в системе.
*/
#ifdef  RUS 
  const unsigned char   TextString551[]=  "Управление.таблица устройств.КЛ";
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
  const unsigned char   TextString552[]=   "вкл/откл АУ из опроса";
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
  const unsigned char   TextString553[]=   "отсутствуют адреса";
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
  const unsigned char   TextString554[]=    "Под данным БКУ";
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
  const unsigned char   TextString555[]=    "Сканирование завершено";
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
  const unsigned char   TextString556[]=    "неисправных блоков";
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
  const unsigned char   TextString557[]=    "Журнал событий.Подробная информация";
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
  const unsigned char   TextString558[]=    "ороситель вскрылся";
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
  const unsigned char   TextString559[]=     "АСПТ выключен";
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
  const unsigned char   TextString560[]=     "Вы уверены?";
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
  const unsigned char   TextString561[]=     "Техническое меню";
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
  const unsigned char   TextString562[]=     "Да";
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
  const unsigned char   TextString563[]=     "Нет";
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
  const unsigned char   TextString564[]=    "очистить журнал";
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
  const unsigned char   TextString565[]=    "удалить рез.прогр.";
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
  const unsigned char   TextString566[]=    "очистить буфер тр.";
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
  const unsigned char   TextString567[]=    "Значение минимальной задержки.\nЕсли 0-используются стандартные\nзначения.\nНе 0-все обратные отчеты на данном\nБКУ равны введеному значению.\nПодтвердите значение\nнажав ВВОД";
#endif 
#ifdef  ENG 
  const unsigned char   TextString567[]  =   "Minimum delay value.\nIf 0-standard\nvalues are used.\nNot 0-все Countdowns on this\nBKU are equal to entered value.\nConfirm value\n by pressing ENTER";
#endif
#ifdef  FIN 
   const unsigned char  TextString567[]  =   "";
#endif   
/*****************************************************************************/  
/*

*/
#ifdef  RUS 
  const unsigned char   TextString568[]=    "Ошибка";
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
  const unsigned char   TextString569[]=    "Ошибка заполнения даты";
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
  const unsigned char   TextString570[]=    "Ошибка заполнения адреса";
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
  const unsigned char   TextString571[]=    "по";
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
  const unsigned char   TextString572[]=    "Окно выбора фильтров";
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
  const unsigned char   TextString573[]=    "По дате";
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
  const unsigned char   TextString574[]=    "По времени";
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
  const unsigned char   TextString575[]=     "По типу события";
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
  const unsigned char   TextString576[]=     "По просмотрам";
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
  const unsigned char   TextString577[]=     "не просмотренные";
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
  const unsigned char   TextString578[]=     "просмотренные";
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
  const unsigned char   TextString579[]=     "По пользователю";
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
  const unsigned char   TextString580[]=     "- Фильтр";
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
  const unsigned char   TextString581[]=     "опрос подчин. выкл.";
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
  const unsigned char   TextString582[]=     "опрос подчин. вкл.";
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
  const unsigned char   TextString583[]=     "пользователь";
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
  const unsigned char   TextString584[]=     "оператор";
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
  const unsigned char   TextString585[]=     "память";
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
  const unsigned char   TextString586[]=     "Установка времени";
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
  const unsigned char   TextString587[]=     "проверка памяти не выполнена";
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
  const unsigned char   TextString588[]=  "- загрузить во все ";
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
  const unsigned char   TextString589[]=  "Nand память повреждена";
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
  const unsigned char   TextString590[]=  "выход за пределы";
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
  const unsigned char   TextString591[]=  "ошибка памяти";
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
  const unsigned char   TextString592[]=  "принять";
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
  const unsigned char   TextString593[]=  "отменить";
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
  const unsigned char   TextString594[]=  "Внимание!\nВы меняете тип устройства\nили адрес в сконфигурируемом БКУ.\nТекущая конфигурация будет\nнедействительна!";
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
  const unsigned char   TextString595[]=  "флаг верификаций очишен";
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
  const unsigned char   TextString596[]=  "режим работы БКУ изменен";
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
  const unsigned char   TextString597[]=  "адрес БКУ изменен";
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
  const unsigned char   TextString598[]=  "Фильтр активирован";
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
  const unsigned char   TextString599[]=   "повторите процедуру";
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
  const unsigned char   TextString600[]=   "нет места";
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
  const unsigned char   TextString601[]=   "карта была добавлена";
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
  const unsigned char   TextString602[]=   "Для перехода между ячейками\n нажмите кнопку ''ввод''";
#endif 
#ifdef  ENG 
  const unsigned char   TextString602[]  =   "For transfer between cells\n press ''enter''";
#endif   
#ifdef  FIN 
   const unsigned char  TextString602[] =   "";
#endif      
/*****************************************************************************/ 
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString603[]=  "ИПП-СА";
#endif 
#ifdef  ENG 
   const unsigned char  TextString603[]=  "IPP-SA";
#endif
#ifdef  FIN 
   const unsigned char  TextString603[]=   "";
#endif    
/*****************************************************************************/ 
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString604[]=  "ИПТ-А";
#endif 
#ifdef  ENG 
   const unsigned char  TextString604[]=  "IPT-A";
#endif
#ifdef  FIN 
   const unsigned char  TextString604[]=   "";
#endif  
/*****************************************************************************/ 
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString605[]=  "Управление.таблица запуска";
#endif 
#ifdef  ENG 
   const unsigned char  TextString605[]=  "Control.activation table";
#endif
#ifdef  FIN 
   const unsigned char  TextString605[]=   "";
#endif     
/*****************************************************************************/ 
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString606[]=  "активна";
#endif 
#ifdef  ENG 
   const unsigned char  TextString606[]=  "active";
#endif
#ifdef  FIN 
   const unsigned char  TextString606[]=   "";
#endif     
/*****************************************************************************/ 
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString607[]=  "не активна";
#endif 
#ifdef  ENG 
   const unsigned char  TextString607[]=  "not active";
#endif
#ifdef  FIN 
   const unsigned char  TextString607[]=   "";
#endif    
/*****************************************************************************/ 
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString608[]=  "карта";
#endif 
#ifdef  ENG 
   const unsigned char  TextString608[]=  "card";
#endif
#ifdef  FIN 
   const unsigned char  TextString608[]=   "";
#endif     
/*****************************************************************************/ 
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString609[]=  "команда получена";
#endif 
#ifdef  ENG 
   const unsigned char  TextString609[]=  "command is receieved";
#endif
#ifdef  FIN 
   const unsigned char  TextString609[]=   "";
#endif      
/*****************************************************************************/ 
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString610[]=  "команда не отправлена";
#endif 
#ifdef  ENG 
   const unsigned char  TextString610[]=  "command is not sent";
#endif
#ifdef  FIN 
   const unsigned char  TextString610[]=   "";
#endif    
/*****************************************************************************/ 
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString611[]=  "команда отправлена";
#endif 
#ifdef  ENG 
   const unsigned char  TextString611[]=  "command is sent";
#endif
#ifdef  FIN 
   const unsigned char  TextString611[]=   "";
#endif      
/*****************************************************************************/ 
/*
наименование строк
*/ 
#ifdef  RUS 
  const unsigned char   TextString612[]="время прихода события:\nвремя события:\nномер зоны:\nадрес устройства:\nтип устройства:\nтип события:\nID пользователя:\n        информация :\n                   ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString612[]  =   "event arriving time:\nevent time:\nzone number:\ndevice address:\ndevice type:\nevent type:\nuser ID:\n        information :\n                   ";
#endif  
#ifdef  FIN 
   const unsigned char  TextString612[] =   "";
#endif 
/*****************************************************************************/ 
/*
наименование строк
*/ 
#ifdef  RUS 
  const unsigned char   TextString613[]="пожар";
#endif 
#ifdef  ENG 
  const unsigned char   TextString613[]  =   "fire";
#endif  
#ifdef  FIN 
   const unsigned char  TextString613[] =   "";
#endif    
/*****************************************************************************/ 
/*
наименование строк
*/ 
#ifdef  RUS 
  const unsigned char   TextString614[]="выключен";
#endif 
#ifdef  ENG 
  const unsigned char   TextString614[]  =   "off";
#endif  
#ifdef  FIN 
   const unsigned char  TextString614[] =   "";
#endif   
/*****************************************************************************/ 
/*
наименование строк
*/ 
#ifdef  RUS 
  const unsigned char   TextString615[]="задать темп. порог\nдля всех ИПТ-АЭ";
#endif 
#ifdef  ENG 
  const unsigned char   TextString615[]  =   "set temp. threshold\nfor all IPT-AE";
#endif  
#ifdef  FIN 
   const unsigned char  TextString615[] =   "";
#endif       
/*****************************************************************************/ 
/*
наименование строк
*/ 
#ifdef  RUS 
  const unsigned char   TextString616[]="обрабатывать события";
#endif 
#ifdef  ENG 
  const unsigned char   TextString616[]  =   "handle events";
#endif  
#ifdef  FIN 
   const unsigned char  TextString616[] =   "";
#endif    
/*****************************************************************************/ 
/*
наименование строк
*/ 
#ifdef  RUS 
  const unsigned char   TextString617[]="- назад";
#endif 
#ifdef  ENG 
  const unsigned char   TextString617[]  =   "- back";
#endif  
#ifdef  FIN 
   const unsigned char  TextString617[] =   "";
#endif    
/*****************************************************************************/ 
/*
наименование строк
*/ 
#ifdef  RUS 
  const unsigned char   TextString618[]="- подчиненные";
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
  const unsigned char   TextString619[]="Оформление";
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
  const unsigned char   TextString621[]="стандартная";
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
  const unsigned char   TextString622[]="Выбор стиля экрана блокировки:";
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
  const unsigned char   TextString623[]="- вперед";
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
  const unsigned char   TextString624[]= "- назад";
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
  const unsigned char   TextString625[]="По зоне";
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
  const unsigned char   TextString626[]= "По адресу";
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
   const unsigned char  TextString627[]=  "пожары";
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
   const unsigned char  TextString628[]=  "ИПТ-СкА";
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
   const unsigned char  TextString629[]=  "ИПП-СкА";
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
   const unsigned char  TextString630[]=  "МКП-СкА";
#endif 
#ifdef  ENG 
   const unsigned char  TextString630[]=   "MKP-SkA";
#endif
#ifdef  FIN 
   const unsigned char  TextString630[]=   "";
#endif    
/*****************************************************************************/    
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString631[]=  "КЛ-240АИ";
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
  const unsigned char   TextString632[]=   "Редактирование КЛ-240АИ";
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
  const unsigned char   TextString633[]=   "крит-ская ош-ка прот-ла";
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
  const unsigned char   TextString634[]=   "крит-ская ош-ка устранена";
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
  const unsigned char   TextString635[]=   "пожары игнорируются";
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
  const unsigned char   TextString636[]=   "пожары регистрируются";
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
  const unsigned char   TextString637[]=   "двойной ток в линий";
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
  const unsigned char   TextString638[]=   "двойной ток устранен";
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
  const unsigned char   TextString639[]=   "апп-ная неиспр.";
#endif 
#ifdef  ENG 
  const unsigned char   TextString639[]  =  "";
#endif   
#ifdef  FIN 
   const unsigned char  TextString639[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString640[]=  "ИПТ-СИк";
#endif 
#ifdef  ENG 
   const unsigned char  TextString640[]=  "IPT-SIk";
#endif
#ifdef  FIN 
   const unsigned char  TextString640[]=   "";
#endif    
/*****************************************************************************/  
 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString641[]=  "Внешние выходы";
#endif 
#ifdef  ENG 
   const unsigned char  TextString641[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString641[]=   "";
#endif    
/*****************************************************************************/    
   
   
   
   
   
 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString642[]=  "«Пожар 1» в зоне";
#endif 
#ifdef  ENG 
   const unsigned char  TextString642[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString642[]=   "";
#endif    
/*****************************************************************************/   
 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString643[]=  "«Пожар 2» в зоне";
#endif 
#ifdef  ENG 
   const unsigned char  TextString643[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString643[]=   "";
#endif    
/*****************************************************************************/  
 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString644[]=  "«Задержка» в зоне";
#endif 
#ifdef  ENG 
   const unsigned char  TextString644[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString644[]=   "";
#endif    
/*****************************************************************************/  
 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString645[]=  "«Пуск» в зоне";
#endif 
#ifdef  ENG 
   const unsigned char  TextString645[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString645[]=   "";
#endif    
/*****************************************************************************/  
 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString646[]=  "Kомандa «сброс»";
#endif 
#ifdef  ENG 
   const unsigned char  TextString646[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString646[]=   "";
#endif    
/*****************************************************************************/  
 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString647[]=  "Cигнал «конфигурационный режим включен»";
#endif 
#ifdef  ENG 
   const unsigned char  TextString647[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString647[]=   "";
#endif    
/*****************************************************************************/  

 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString649[]=  "«Автоматика отключена» в зонe";
#endif 
#ifdef  ENG 
   const unsigned char  TextString649[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString649[]=   "";
#endif    
/*****************************************************************************/  
 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString650[]=  "«Автоматика включена» в зоне";
#endif 
#ifdef  ENG 
   const unsigned char  TextString650[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString650[]=   "";
#endif    
/*****************************************************************************/  
 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString651[]=  "«Блокировка пуска» в зоне";
#endif 
#ifdef  ENG 
   const unsigned char  TextString651[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString651[]=   "";
#endif    
/*****************************************************************************/  
 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString652[]=  "«Вскрытие оросителя» в зоне";
#endif 
#ifdef  ENG 
   const unsigned char  TextString652[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString652[]=   "";
#endif    
/*****************************************************************************/  
 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString653[]=  "«Останов.» в зоне";
#endif 
#ifdef  ENG 
   const unsigned char  TextString653[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString653[]=   "";
#endif    
/*****************************************************************************/  
 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString654[]=  "Отключение в зоне";
#endif 
#ifdef  ENG 
   const unsigned char  TextString654[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString654[]=   "";
#endif    
/*****************************************************************************/  
 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString655[]=  "Включение в зоне";
#endif 
#ifdef  ENG 
   const unsigned char  TextString655[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString655[]=   "";
#endif    
/*****************************************************************************/  
 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString656[]=  "Неисправность в зоне";
#endif 
#ifdef  ENG 
   const unsigned char  TextString656[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString656[]=   "";
#endif    
/*****************************************************************************/     
 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString657[]=  "Уменьшение задержки» в зоне";
#endif 
#ifdef  ENG 
   const unsigned char  TextString657[]=  "";
#endif
#ifdef  FIN 
   const unsigned char  TextString657[]=   "";
#endif    
/*****************************************************************************/     
 /*
Наименование устройства.
*/
#ifdef  RUS 
   const unsigned char  TextString658[]=  "Внешние событие";
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
   const unsigned char  TextString659[]=  "«Разрешение пуска» в зоне";
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
  const unsigned char   TextString660[]=  "Управление.таблица внешних выходов";
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
  const unsigned char   TextString661[]=  "Управление.таблица внешних входов";
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
  const unsigned char   TextString662[]=  "Внешние входы";
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
  const unsigned char   TextString663[]=    "акт. внеш-го выхода";
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
  const unsigned char   TextString664[]=    "акт. внеш-го входа";
#endif 
#ifdef  ENG 
  const unsigned char   TextString664]  =  "";
#endif   
#ifdef  FIN 
   const unsigned char  TextString664[] =   "";
#endif
/*****************************************************************************/      
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString665[]=  "СRC-ошибка таб.15";
#endif 
#ifdef  ENG 
   const unsigned char  TextString665[]=   "tab.15 СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString665[] =   "";
#endif
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextString666[]=  "СRC-ошибка таб.16";
#endif 
#ifdef  ENG 
   const unsigned char  TextString666[]=   "tab.15 СRC-error";
#endif
#ifdef  FIN 
   const unsigned char  TextString666[] =   "";
#endif   
   
   
   
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1001[]=  "невозможно создать очередь, семафор или мьютекс";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1001[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1001[] =   "";
#endif      
   
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1002[]=  "потеря сообщения из-за переполнения очереди сообщений, передаваемых из задач";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1002[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1002[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1003[]=  "потеря сообщения из-за переполнения очереди сообщений, передаваемых из прерываний";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1003[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1003[] =   "";
#endif      
 /*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1004[]=  "не освободился семафор в функции task_InitLS в процессе инициализации - 120 мкС";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1004[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1004[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1005[]=  "не освободился семафор в функции task_InitLS в процессе инициализации правого направления - 20 мС";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1005[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1005[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1006[]=  "не освободился семафор в функции task_InitLS в процессе инициализации - 0,7 мС";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1006[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1006[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1007[]=  "не освободился семафор в функции task_InitLS в процессе инициализации - 120 мкС";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1007[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1007[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1008[]=  "не освободился семафор в функции task_InitLS в процессе инициализации - 20 мС";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1008[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1008[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1009[]=  "не освободился семафор в функции task_InitLS в процессе инициализации - 75 С";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1009[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1009[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1010[]=  "не освободился семафор в функции task_InitLS в процессе инициализации левого направления - 20 мС";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1010[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1010[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1011[]=  "не освободился семафор в функции task_InitLS в процессе инициализации левого направления - 75 С";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1011[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1011[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1012[]=  "не освободился семафор в функции task_InitLS в процессе инициализации - 120 мкС при проверке правого концевого элемента в процессе инициализации";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1012[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1012[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1013[]=  "не освободился семафор в функции task_InitLS в процессе инициализации - 50 mС";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1013[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1013[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1014[]=  "при выдаче семафора в функции после окончания интервала sDelayKZ_InitRightDir или sDelayKZ_InitLeftDir он уже оказался доступен";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1014[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1014[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1015[]=  "при выдаче семафора в функции после окончания интервала sDelayInitLS он уже оказался доступен";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1015[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1015[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1016[]=  "переполнение стека ОС";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1016[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1016[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1032[]=  "семафор таймера на задержку 75 с";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1032[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1032[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1033[]=  "процесс инициализации КЛ прерван из-за напрямую соединённых выходов";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1033[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1033[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1034[]=  "процесс инициализации завершён, но в ЛС присутствует МА с неверно подключённой полярностью";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1034[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1034[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1035[]=  "процесс инициализации КЛ прерван";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1035[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1035[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1036[]=  "процесс инициализации прерван из-за неизвестной ошибки в процессе инициализации";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1036[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1036[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1041[]=  "в процессе инициализации ЛС была обнаружена неисправность (неверное подключение полярности МА, что вызвало КЗ на правом входе КЛ), запускается повторная инициализация КЛ";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1041[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1041[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1051[]=  "КЗ ЛС на левом входе КЛ";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1051[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1051[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1052[]=  "КЗ ЛС на правом входе КЛ";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1052[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1052[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1053[]=  "обрыв ЛС";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1053[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1053[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1054[]=  "КЗ ЛС";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1054[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1054[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1055[]=  "за устройством отсутствует связь вследствие обрыва или КЗ ЛС";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1055[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1055[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1071[]=  "при начальной инициализации КЛ после подачи напряжения на левое направление был получен сигнал от правого КЭ";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1071[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1071[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1073[]=  "при начальной инициализации КЛ после подачи напряжения на правое направление был получен сигнал от левого КЭ";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1073[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1073[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1074[]=  "не исправен левый концевой элемент";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1074[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1074[] =   "";
#endif      
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1075[]=  "не исправен правый концевой элемент";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1075[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1075[] =   "";
#endif      
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1101[]=  "начат процесс инициализации КЛ";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1101[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1101[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1102[]=  "процесс инициализации КЛ успешно завершён";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1102[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1102[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1103[]=  "процесс инициализации ЛС завершён, но в ЛС присутствует неисправность ( КЗ, обрыв или устройство с незапрограммированным адресом)";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1103[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1103[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1104[]=  "процесс инициализации ЛС успешно завершён (ЛС закольцована)";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1104[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1104[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1105[]=  "в процессе инициализации ЛС в линии обнаружена неисправность (КЗ, обрыв, адрес 251 или неверное подкл полярность МА)";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1105[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1105[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1106[]=  "подключено левое направление ЛС";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1106[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1106[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1107[]=  "отключено левое направление ЛС";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1107[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1107[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1108[]=  "подключено правое направление ЛС";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1108[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1108[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1109[]=  "отключено правое направление ЛС";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1109[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1109[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1110[]=  "получен сигнал от правого КЭ";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1110[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1110[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1111[]=  "получен сигнал от левого КЭ";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1111[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1111[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1112[]=  "работа устройства прекращена";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1112[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1112[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1113[]=  "начат процесс инициализация ЛС с левой стороны";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1113[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1113[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1114[]=  "начат процесс инициализации ЛС с правой стороны";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1114[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1114[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1120[]=  "потеря связи с МА (МА не отвечает)";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1120[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1120[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1121[]=  "потеря связи с МА (множественные ошибки приёма)";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1121[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1121[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1122[]=  "восстановилась ранее потерянная связь с МА";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1122[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1122[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1123[]=  "обнаружен МА с неизвестным типом";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1123[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1123[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1124[]=  "не удалось предать команду";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1124[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1124[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1125[]=  "обнаружен двойной адрес";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1125[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1125[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1126[]=  "обнаружено устройство с незапрограммированным адресом";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1126[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1126[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1127[]=  "изменился тип устройства";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1127[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1127[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1128[]=  "изменилась версия ПО  устройства";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1128[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1128[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1129[]=  "неисправен сенсор измерения температуры";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1129[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1129[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1130[]=  "переполнение буфера событий ModBus";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1130[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1130[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1131[]=  "Пожар";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1131[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1131[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1132[]=  "Таблица блокировок записана успешно ev_EventDriverModBus";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1132[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1132[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1133[]=  "запись в EEPROM произведена с ошибкой";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1133[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1133[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1134[]=  "ионистор не исправен (обрыв или КЗ)";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1134[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1134[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1135[]=  "ионистор перешёл из состояния Неисправность(Обрыв или КЗ) в состояние Норма";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1135[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1135[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1136[]=  "ионисторы переведены в режим заряда";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1136[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1136[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1137[]=  "неисправность НЭ (обрыв или КЗ)";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1137[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1137[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1138[]=  "идёт нагрев НЭ";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1138[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1138[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1139[]=  "нагрев окончен";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1139[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1139[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1140[]=  "запись адреса успешно завершена";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1140[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1140[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1141[]=  "в устройство записан неверный адрес";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1141[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1141[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1142[]=  "вход n модуля МКВ замкнулся";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1142[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1143[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1143[]=  "обрыв входа n модуля МКВ";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1143[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1143[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1144[]=  "КЗ входа n модуля МКВ";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1144[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1144[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1145[]=  "установлен джампер автономного заряда ионисторов";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1145[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1145[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1146[]=  "ионисторы разряжены";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1146[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1146[] =   "";
#endif      

/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1147[]=  "закончен заряд ионисторов";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1147[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1147[] =   "";
#endif 
   
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1148[]=  "вскрылся ороситель";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1148[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1148[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1149[]=  "Выход n модуля МКР выключен";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1149[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1149[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1150[]=  "выход n модуля МКР включен";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1150[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1150[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1151[]=  "обрыв или КЗ цепей управления оптореле выхода n модуля МКР";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1151[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1151[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1152[]=  "неопределённая неисправность оптореле выхода n модуля МКР";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1152[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1152[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1153[]=  "кнопка ИПР нажата";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1153[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1153[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1154[]=  "кнопка ИПР отжата";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1154[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1154[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1155[]=  "кнопка УДП нажата";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1155[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1155[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1156[]=  "ошибка УДП (кнопка оказалась нажата при закрытой крышке)";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1156[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1156[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1157[]=  "открыли крышку УДП";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1157[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1157[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1158[]=  "закрыли крышку УДП";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1158[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1158[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1159[]=  "кнопка УДП отжата";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1159[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1159[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1170[]=  "Ошибка: неисправен ИК светодиод";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1170[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1170[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1180[]=  "не установлена пороговая температура";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1180[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1180[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1181[]=  "в буфер команд поступила команда на пуск оросителя";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1181[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1181[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1182[]=  "команда на пуск оросителя не поступила в буфер команд";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1182[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1182[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1183[]=  "команда не может быть передана - не верный тип МА";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1183[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1183[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1184[]=  "команда не может быть передана - разряжены ионисторы";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1184[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1184[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1185[]=  "команда не может быть передана - неисправен НЭ";
#endif 
#ifdef  ENG 
   const unsigned char  TextStringEvent1185[]=   "";
#endif
#ifdef  FIN 
   const unsigned char  TextStringEvent1185[] =   "";
#endif 
 
/*****************************************************************************/
/*
Наименование сообщения.
*/
#ifdef  RUS
   const unsigned char  TextStringEvent1186[]=  "команда не может быть передана - с устройством отсутсвует связь";
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
const unsigned char  PunctuationMark7[]="№";
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
   
   
   
   
   
   
   
   
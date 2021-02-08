
#include "DIALOG.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
//
// Recommended memory to run the sample with adequate performance
//

void Start_Screen(void);

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       
*/
static const GUI_POINT aPoints[] = {
{218,0},
{303,70},
{260,70},
{217,36},
{81,156},
{357,156},
{325,128},
{158,128},
{188,103},
{337,103},
{433,187},
{262,187},
{262,212},
{174,212},
{174,187},
{0,187},
};
//ПОЛИГОН БУКВЫ Е
const GUI_POINT aPointsE1[] = {
{0,0},
{55,0},
{55,9},
{10,9},
};
const GUI_POINT aPointsE2[] = {
{0,0},
{10,9},
{0,21}
};
const GUI_POINT aPointsE3[] = {
{0,21},
{10,33},
{10,9}
};
const GUI_POINT aPointsE4[] = {
{0,21},
{15,39},
{0,57},
};
const GUI_POINT aPointsE5[] = {
{10,33},
{55,33},
{55,42},
{10,42},
{15,39}
};
const GUI_POINT aPointsE6[] = {
{10,42},
{10,83},
{0,83},
{0,57}
};
const GUI_POINT aPointsE7[] = {
{10,74},
{55,74},
{55,83},
{10,83},
};
//ПОЛИГОН БУКВЫ F
const GUI_POINT aPointsF1[] = {
{0,0},
{53,0},
{53,9},
{10,9},
};
const GUI_POINT aPointsF2[] = {
{0,0},
{10,9},
{10,34},
{0,38}
};
const GUI_POINT aPointsF3[] = {
{0,38},
{10,34},
{48,34},
{48,43},
{10,43},
};
const GUI_POINT aPointsF4[] = {
{0,38},
{10,43},
{10,83},
{0,83}
};

//полигон буквы T
const GUI_POINT aPointsT1[] = {
{0,0},
{70,0},
{70,9},
{0,9}
};
const GUI_POINT aPointsT2[] = {
{30,9},
{40,9},
{40,45},
{30,45}
};
const GUI_POINT aPointsT3[] = {
{30,45},
{40,45},
{40,83},
{30,83},
};


//полигон буквы G
const GUI_POINT aPointsG1[] = {
{0,0},
{33,0},
{33,34},
{32,35},
{31,36},
{23,33},
{23,9},
{0,9}
};
const GUI_POINT aPointsG2[] = {
{0,0},
{7,2},
{7,15},
{5,14},
{0,10}
};
//полигон буквы S
const GUI_POINT aPointsS1[] = {
{0,0},
{10,3},
{11,4},
{11,16},
{0,9}
};
const GUI_POINT aPointsS2[] = {
{2,0},
{10,7},
{12,8},
{12,18},
{2,13}
};
void Sample(void);



   /****************************************************************************
  * Имя функции   : Start_Screen()
  * Описание      :  логотип  компаний 1 экран основной программы  
  * 
  *
  * Параметры     : нет
  * Возврат       : нет
  ****************************************************************************/

 
void Start_Screen(void)
{   
        GUI_SetDrawMode(GUI_DM_NORMAL);
	GUI_DrawGradientV(0, 0, 800, 260, 0x6BB7BD, 0x8CE6F0);
	GUI_DrawGradientV(0, 260, 800, 480, 0x8CE6F0, GUI_LIGHTBLUE);
	GUI_Delay(500);

	GUI_SetColor(GUI_LIGHTBLUE);
	GUI_FillPolygon(aPoints, GUI_COUNTOF(aPoints), 185, 40);
	
	GUI_Delay(100);
	GUI_SetColor(GUI_BLUE);
	GUI_FillPolygon(aPoints, GUI_COUNTOF(aPoints), 186, 41);

	GUI_Delay(100);
	GUI_SetColor(0xCD0000);
	GUI_FillPolygon(aPoints, GUI_COUNTOF(aPoints), 187, 42);

	GUI_SetColor(GUI_BLUE);
	
	GUI_Delay(100);
	GUI_SetColor(0x8B0000);
	GUI_EnableAlpha(1);
	GUI_FillPolygon(aPoints, GUI_COUNTOF(aPoints), 188, 43);

        GUI_Delay(1000);
	GUI_FillPolygon(aPointsG2, GUI_COUNTOF(aPointsG2), 248, 283);
	GUI_Delay(50);

	//дуги от G
	GUI_SetPenSize(10);
	GUI_DrawArc(224, 337, 55, 87, 60, 90);
	GUI_Delay(50);
	GUI_DrawArc(223, 321, 39, 87, 90, 120);
	GUI_Delay(50);
	GUI_DrawArc(228, 322, 42, 87, 120, 235);
	GUI_Delay(50);
	GUI_DrawArc(223, 322, 39, 87, 240, 270);
	GUI_Delay(50);
	
	GUI_DrawArc(224, 306, 55, 87, 270, 300);
	GUI_Delay(50);
	
	//GUI_EnlargePolygon(aEnlargedPointsG1, aPointsG1, GUI_COUNTOF(aPointsG1), 0); // часть G2
	GUI_FillPolygon(aPointsG1, GUI_COUNTOF(aPointsG1), 222, 322);
	GUI_Delay(50);
	
	//GUI_EnlargePolygon(aEnlargedPointsE1, aPointsE1, GUI_COUNTOF(aPointsE1), 0); //часть E1
	GUI_FillPolygon(aPointsE1, GUI_COUNTOF(aPointsE1), 275, 280);
	GUI_Delay(50);
	//GUI_EnlargePolygon(aEnlargedPointsE2, aPointsE2, GUI_COUNTOF(aPointsE2), 0); //часть E2
	GUI_FillPolygon(aPointsE2, GUI_COUNTOF(aPointsE2), 275, 280);
	GUI_Delay(50);
	//GUI_EnlargePolygon(aEnlargedPointsE3, aPointsE3, GUI_COUNTOF(aPointsE3), 0); //часть E3
	GUI_FillPolygon(aPointsE3, GUI_COUNTOF(aPointsE3), 275, 280);
	GUI_Delay(50);
	//GUI_EnlargePolygon(aEnlargedPointsE4, aPointsE4, GUI_COUNTOF(aPointsE4), 0); //часть E4
	GUI_FillPolygon(aPointsE4, GUI_COUNTOF(aPointsE4), 275, 280);
	GUI_Delay(50);
	//GUI_EnlargePolygon(aEnlargedPointsE5, aPointsE5, GUI_COUNTOF(aPointsE5), 0); //часть E5
	GUI_FillPolygon(aPointsE5, GUI_COUNTOF(aPointsE5), 275, 280);
	GUI_Delay(50);
	//GUI_EnlargePolygon(aEnlargedPointsE6, aPointsE6, GUI_COUNTOF(aPointsE6), 0); //часть E6
	GUI_FillPolygon(aPointsE6, GUI_COUNTOF(aPointsE6), 275, 280);
	GUI_Delay(50);
	//GUI_EnlargePolygon(aEnlargedPointsE7, aPointsE7, GUI_COUNTOF(aPointsE7), 0); //часть E7
	GUI_FillPolygon(aPointsE7, GUI_COUNTOF(aPointsE7), 275, 280);
	GUI_Delay(50);
	//GUI_EnlargePolygon(aEnlargedPointsF1, aPointsF1, GUI_COUNTOF(aPointsF1), 0); //часть F1
	GUI_FillPolygon(aPointsF1, GUI_COUNTOF(aPointsF1), 348, 280);
	GUI_Delay(50);
	//GUI_EnlargePolygon(aEnlargedPointsF2, aPointsF2, GUI_COUNTOF(aPointsF2), 0); //часть F2
	GUI_FillPolygon(aPointsF2, GUI_COUNTOF(aPointsF2), 348, 280);
	GUI_Delay(50);
	//GUI_EnlargePolygon(aEnlargedPointsF3, aPointsF3, GUI_COUNTOF(aPointsF3), 0); //часть F3
	GUI_FillPolygon(aPointsF3, GUI_COUNTOF(aPointsF3), 348, 280);
	GUI_Delay(50);
	//GUI_EnlargePolygon(aEnlargedPointsF4, aPointsF4, GUI_COUNTOF(aPointsF4), 0); //часть F4
	GUI_FillPolygon(aPointsF4, GUI_COUNTOF(aPointsF4), 348, 280);
	GUI_Delay(50);
	//GUI_EnlargePolygon(aEnlargedPointsE1, aPointsE1, GUI_COUNTOF(aPointsE1), 0); //часть Е21
	GUI_FillPolygon(aPointsE1, GUI_COUNTOF(aPointsE1), 414, 280);
	GUI_Delay(50);
	
//	GUI_EnlargePolygon(aEnlargedPointsE2, aPointsE2, GUI_COUNTOF(aPointsE2), 0); //часть E22
	GUI_FillPolygon(aPointsE2, GUI_COUNTOF(aPointsE2), 414, 280);
	GUI_Delay(50);
	
	//GUI_EnlargePolygon(aEnlargedPointsE3, aPointsE3, GUI_COUNTOF(aPointsE3), 0); //часть E23
	GUI_FillPolygon(aPointsE3, GUI_COUNTOF(aPointsE3), 414, 280);
	GUI_Delay(50);
	
	//GUI_EnlargePolygon(aEnlargedPointsE4, aPointsE4, GUI_COUNTOF(aPointsE4), 0); //часть E24
	GUI_FillPolygon(aPointsE4, GUI_COUNTOF(aPointsE4), 414, 280);
	GUI_Delay(50);
	
	//GUI_EnlargePolygon(aEnlargedPointsE5, aPointsE5, GUI_COUNTOF(aPointsE5), 0); //часть E25
	GUI_FillPolygon(aPointsE5, GUI_COUNTOF(aPointsE5), 414, 280);
	GUI_Delay(50);
	
	//GUI_EnlargePolygon(aEnlargedPointsE6, aPointsE6, GUI_COUNTOF(aPointsE6), 0); //часть E26
	GUI_FillPolygon(aPointsE6, GUI_COUNTOF(aPointsE6), 414, 280);
	GUI_Delay(50);
	
	//GUI_EnlargePolygon(aEnlargedPointsE7, aPointsE7, GUI_COUNTOF(aPointsE7), 0); //часть E27
	GUI_FillPolygon(aPointsE7, GUI_COUNTOF(aPointsE7), 414, 280);
	GUI_Delay(50);
	
	//GUI_EnlargePolygon(aEnlargedPointsS1, aPointsS1, GUI_COUNTOF(aPointsS1), 0); // часть S1
	GUI_FillPolygon(aPointsS1, GUI_COUNTOF(aPointsS1), 532, 280);
	GUI_Delay(50);

	//дуги от S
	GUI_DrawArc(514, 345, 63, 87, 70, 95);
	GUI_Delay(50);
	GUI_DrawArc(512, 305, 23, 87, 95, 180);
	GUI_Delay(50);
	GUI_DrawArc(508, 302, 19, 87, 180, 275);
	GUI_Delay(50);
	GUI_DrawArc(510, 366, 46, 87, 50, 95);
	GUI_Delay(50);
	GUI_DrawArc(523, 342, 19, 87, 0, 70);
	GUI_Delay(50);
	GUI_DrawArc(518, 337, 24, 87, 275, 360);
	GUI_Delay(50);
	GUI_DrawArc(514, 298, 63, 87, 250, 275);
	GUI_Delay(50);

//	GUI_EnlargePolygon(aEnlargedPointsS2, aPointsS2, GUI_COUNTOF(aPointsS2), 0); // часть S2
	GUI_FillPolygon(aPointsS2, GUI_COUNTOF(aPointsS2), 484, 345);
	GUI_Delay(50);

	//GUI_EnlargePolygon(aEnlargedPointsT1, aPointsT1, GUI_COUNTOF(aPointsT1), 0); //часть T1
	GUI_FillPolygon(aPointsT1, GUI_COUNTOF(aPointsT1), 555, 280);
	GUI_Delay(50);
	//GUI_EnlargePolygon(aEnlargedPointsT2, aPointsT2, GUI_COUNTOF(aPointsT2), 0); //часть Т2
	GUI_FillPolygon(aPointsT2, GUI_COUNTOF(aPointsT2), 555, 280);
	GUI_Delay(50);
	
	//GUI_EnlargePolygon(aEnlargedPointsT3, aPointsT3, GUI_COUNTOF(aPointsT3), 0); //часть Т3
	GUI_FillPolygon(aPointsT3, GUI_COUNTOF(aPointsT3), 555, 280);
	GUI_Delay(50);
		
	GUI_SetBkColor(GUI_BLUE);

 }

  /** end **/

/*************************** End of file ****************************/


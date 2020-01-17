#include "moves.h"

 uint16_t SERVO1 = 1400;

void stand_up(){
	//PZ
  	LL_TIM_OC_SetCompareCH1(TIM3, 750);
  	LL_TIM_OC_SetCompareCH4(TIM3, 2040);
  	//PP
  	LL_TIM_OC_SetCompareCH2(TIM3, 850);
  	LL_TIM_OC_SetCompareCH2(TIM2, 2150);
  	//LZ
  	LL_TIM_OC_SetCompareCH3(TIM2, 750); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 2200);
  	//LP
  	LL_TIM_OC_SetCompareCH4(TIM2, 700);
  	LL_TIM_OC_SetCompareCH1(TIM2, 2050);
	LL_mDelay(1000);

}

void push_ups(){
	stand_up();

	LL_TIM_OC_SetCompareCH1(TIM3, SERVO1);
	LL_TIM_OC_SetCompareCH4(TIM3, SERVO1);
  	LL_TIM_OC_SetCompareCH2(TIM3, SERVO1);
  	LL_TIM_OC_SetCompareCH2(TIM2, SERVO1);
  	LL_TIM_OC_SetCompareCH3(TIM2, SERVO1);
  	LL_TIM_OC_SetCompareCH3(TIM3, SERVO1);
  	LL_TIM_OC_SetCompareCH4(TIM2, SERVO1);
  	LL_TIM_OC_SetCompareCH1(TIM2, SERVO1);
	LL_mDelay(1000);


}

void check(){

	stand_up();
	LL_TIM_OC_SetCompareCH1(TIM3, SERVO1);
	LL_TIM_OC_SetCompareCH4(TIM3, SERVO1);
	LL_mDelay(1000);
	stand_up();
  	LL_TIM_OC_SetCompareCH2(TIM3, SERVO1);
  	LL_TIM_OC_SetCompareCH2(TIM2, SERVO1);
  	LL_mDelay(1000);
  	stand_up();
  	LL_TIM_OC_SetCompareCH3(TIM2, SERVO1);
  	LL_TIM_OC_SetCompareCH3(TIM3, SERVO1);
  	LL_mDelay(1000);
  	stand_up();
  	LL_TIM_OC_SetCompareCH4(TIM2, SERVO1);
  	LL_TIM_OC_SetCompareCH1(TIM2, SERVO1);
  	LL_mDelay(1000);
  	stand_up();

}

void sit(){
  	LL_TIM_OC_SetCompareCH2(TIM3, 850);
  	LL_TIM_OC_SetCompareCH2(TIM2, 2050);
  	LL_TIM_OC_SetCompareCH4(TIM2, 700);
  	LL_TIM_OC_SetCompareCH1(TIM2, 2050);

	LL_TIM_OC_SetCompareCH1(TIM3, 1800);
	LL_TIM_OC_SetCompareCH4(TIM3, 1000);
  	LL_TIM_OC_SetCompareCH3(TIM2, 1800);
  	LL_TIM_OC_SetCompareCH3(TIM3, 1000);

}

void lay(){

	LL_TIM_OC_SetCompareCH1(TIM3, SERVO1);
	LL_TIM_OC_SetCompareCH4(TIM3, SERVO1);
  	LL_TIM_OC_SetCompareCH2(TIM3, SERVO1);
  	LL_TIM_OC_SetCompareCH2(TIM2, SERVO1);
  	LL_TIM_OC_SetCompareCH3(TIM2, SERVO1);
  	LL_TIM_OC_SetCompareCH3(TIM3, SERVO1);
  	LL_TIM_OC_SetCompareCH4(TIM2, SERVO1);
  	LL_TIM_OC_SetCompareCH1(TIM2, SERVO1);
  	LL_mDelay(500);

}

void hello(){
  	LL_TIM_OC_SetCompareCH4(TIM2, 700);
  	LL_TIM_OC_SetCompareCH1(TIM2, 2050);
  	LL_TIM_OC_SetCompareCH2(TIM3, 1800);
  	LL_mDelay(300);
  	LL_TIM_OC_SetCompareCH2(TIM3, 1500);
  	LL_mDelay(300);

}

void sit_inv(){

  	LL_TIM_OC_SetCompareCH1(TIM3, 750);
  	LL_TIM_OC_SetCompareCH4(TIM3, 2040);
  	LL_TIM_OC_SetCompareCH3(TIM2, 750); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 2100);

  	LL_TIM_OC_SetCompareCH2(TIM3, 1800);
  	LL_TIM_OC_SetCompareCH2(TIM2, 1000);
  	LL_TIM_OC_SetCompareCH4(TIM2, 1800);
  	LL_TIM_OC_SetCompareCH1(TIM2, 1000);

}

void walk(){
	/////////////////////////////////zdvih PP LZ
  	LL_TIM_OC_SetCompareCH2(TIM3, 1100);
  	LL_TIM_OC_SetCompareCH2(TIM2, 1800);
  	LL_TIM_OC_SetCompareCH3(TIM2, 1100); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 1800);
  	//dole LP PZ
  	LL_TIM_OC_SetCompareCH4(TIM2, 700);
  	LL_TIM_OC_SetCompareCH1(TIM2, 2050);
  	LL_TIM_OC_SetCompareCH1(TIM3, 750);
  	LL_TIM_OC_SetCompareCH4(TIM3, 2040);
  	LL_mDelay(2000);

  	////////////////////vpred PP LZ
  	LL_TIM_OC_SetCompareCH2(TIM3, 1400);
  	LL_TIM_OC_SetCompareCH2(TIM2, 2250);
  	LL_TIM_OC_SetCompareCH3(TIM2, 650); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 1550);

  	//vzad LP PZ
  	LL_TIM_OC_SetCompareCH4(TIM2, 1200);
  	LL_TIM_OC_SetCompareCH1(TIM2, 2200);
  	LL_TIM_OC_SetCompareCH1(TIM3, 650);
  	LL_TIM_OC_SetCompareCH4(TIM3, 1550);
  	LL_mDelay(2000);

  	///////////////////dole PP LZ
  	LL_TIM_OC_SetCompareCH2(TIM3, 850);
  	LL_TIM_OC_SetCompareCH2(TIM2, 2050);
  	LL_TIM_OC_SetCompareCH3(TIM2, 750); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 2100);

  	//hore LP PZ
  	LL_TIM_OC_SetCompareCH4(TIM2, 1100);
  	LL_TIM_OC_SetCompareCH1(TIM2, 1800);
  	LL_TIM_OC_SetCompareCH1(TIM3, 1000);
  	LL_TIM_OC_SetCompareCH4(TIM3, 1900);
  	LL_mDelay(2000);


  	//vzad PP LZ
  	LL_TIM_OC_SetCompareCH2(TIM3, 650);
  	LL_TIM_OC_SetCompareCH2(TIM2, 1550);
  	LL_TIM_OC_SetCompareCH3(TIM2, 1300); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 2200);

  	//vpred LP PZ
  	LL_TIM_OC_SetCompareCH4(TIM2, 650);
  	LL_TIM_OC_SetCompareCH1(TIM2, 1450);
  	LL_TIM_OC_SetCompareCH1(TIM3, 1300);
  	LL_TIM_OC_SetCompareCH4(TIM3, 2200);
  	LL_mDelay(2000);

}

void back_walk(){

	/////////////////////////////////zdvih PP LZ
  	LL_TIM_OC_SetCompareCH2(TIM3, 1000);
  	LL_TIM_OC_SetCompareCH2(TIM2, 1800);
  	LL_TIM_OC_SetCompareCH3(TIM2, 1000); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 1900);
  	//dole LP PZ
  	LL_TIM_OC_SetCompareCH4(TIM2, 700); /////////////////////////
  	LL_TIM_OC_SetCompareCH1(TIM2, 2050);//////////////////
  	LL_TIM_OC_SetCompareCH1(TIM3, 750);
  	LL_TIM_OC_SetCompareCH4(TIM3, 2040);
  	LL_mDelay(200);

  	//vzad PP LZ
  	LL_TIM_OC_SetCompareCH2(TIM3, 750);
  	LL_TIM_OC_SetCompareCH2(TIM2, 1550);
  	LL_TIM_OC_SetCompareCH3(TIM2, 1300); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 2200);

  	//vpred LP PZ
  	LL_TIM_OC_SetCompareCH4(TIM2, 650);
  	LL_TIM_OC_SetCompareCH1(TIM2, 1550);
  	LL_TIM_OC_SetCompareCH1(TIM3, 1300);
  	LL_TIM_OC_SetCompareCH4(TIM3, 2200);
  	LL_mDelay(200);

  	///////////////////dole PP LZ
  	LL_TIM_OC_SetCompareCH2(TIM3, 850);
  	LL_TIM_OC_SetCompareCH2(TIM2, 2050);
  	LL_TIM_OC_SetCompareCH3(TIM2, 750); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 2100);

  	//hore LP PZ
  	LL_TIM_OC_SetCompareCH4(TIM2, 900);
  	LL_TIM_OC_SetCompareCH1(TIM2, 1850);
  	LL_TIM_OC_SetCompareCH1(TIM3, 1000);
  	LL_TIM_OC_SetCompareCH4(TIM3, 1800);
  	LL_mDelay(200);

  	//vpred
  	LL_TIM_OC_SetCompareCH2(TIM3, 1300);
  	LL_TIM_OC_SetCompareCH2(TIM2, 2200);
  	LL_TIM_OC_SetCompareCH3(TIM2, 650); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 1550);

  	//vzad LP PZ
  	LL_TIM_OC_SetCompareCH4(TIM2, 1300);
  	LL_TIM_OC_SetCompareCH1(TIM2, 2200);
  	LL_TIM_OC_SetCompareCH1(TIM3, 750);
  	LL_TIM_OC_SetCompareCH4(TIM3, 1550);
  	LL_mDelay(200);

}

void right_walk(){

  	//LZ dole
  	LL_TIM_OC_SetCompareCH3(TIM2, 750); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 2200);
  	//dole PP
  	LL_TIM_OC_SetCompareCH2(TIM3, 850);
  	LL_TIM_OC_SetCompareCH2(TIM2, 2150);


	//hore

  	LL_TIM_OC_SetCompareCH1(TIM3, 1100);
  	LL_TIM_OC_SetCompareCH4(TIM3, 1800);
  	LL_mDelay(50);
  	LL_TIM_OC_SetCompareCH4(TIM2, 1000);
  	LL_TIM_OC_SetCompareCH1(TIM2, 1800);
  	LL_mDelay(150);

  	//vpred LP
  	LL_TIM_OC_SetCompareCH4(TIM2, 650);
  	LL_TIM_OC_SetCompareCH1(TIM2, 1350);
  	//vzad
  	LL_TIM_OC_SetCompareCH1(TIM3, 650);
  	LL_TIM_OC_SetCompareCH4(TIM3, 1550);
  	LL_mDelay(200);


  	LL_TIM_OC_SetCompareCH2(TIM3, 1100);
  	LL_TIM_OC_SetCompareCH2(TIM2, 1800);
  	LL_TIM_OC_SetCompareCH3(TIM2, 1100); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 1800);

  	//dole
  	LL_TIM_OC_SetCompareCH4(TIM2, 700);
  	LL_TIM_OC_SetCompareCH1(TIM2, 2050);
  	LL_TIM_OC_SetCompareCH1(TIM3, 750);
  	LL_TIM_OC_SetCompareCH4(TIM3, 2040);
  	LL_mDelay(200);


  	//vzad LP
  	LL_TIM_OC_SetCompareCH4(TIM2, 850);
  	LL_TIM_OC_SetCompareCH1(TIM2, 2200);
  	//vpred P
  	LL_TIM_OC_SetCompareCH1(TIM3, 850);
  	LL_TIM_OC_SetCompareCH4(TIM3, 2200);
  	LL_mDelay(200);





}

void left_walk(){

  	LL_TIM_OC_SetCompareCH4(TIM2, 700);
  	LL_TIM_OC_SetCompareCH1(TIM2, 2050);
  	LL_TIM_OC_SetCompareCH1(TIM3, 750);
  	LL_TIM_OC_SetCompareCH4(TIM3, 2040);
  	//LZ hore
  	LL_TIM_OC_SetCompareCH2(TIM3, 1000);
  	LL_TIM_OC_SetCompareCH2(TIM2, 1900);
  	LL_TIM_OC_SetCompareCH3(TIM2, 1100); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 1800);
  	LL_mDelay(200);

  	//
  	//vpred PP LZ vzad
  	LL_TIM_OC_SetCompareCH2(TIM3, 1450);
  	LL_TIM_OC_SetCompareCH2(TIM2, 2200);

  	LL_TIM_OC_SetCompareCH3(TIM2, 1300); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 2200);
  	LL_mDelay(200);

  	//hore LP PZ
  	LL_TIM_OC_SetCompareCH4(TIM2, 1100);
  	LL_TIM_OC_SetCompareCH1(TIM2, 1800);
  	LL_TIM_OC_SetCompareCH1(TIM3, 1100);
  	LL_TIM_OC_SetCompareCH4(TIM3, 1800);

  	//LZ dole
  	LL_TIM_OC_SetCompareCH2(TIM3, 850);
  	LL_TIM_OC_SetCompareCH2(TIM2, 2050);
  	LL_TIM_OC_SetCompareCH3(TIM2, 750); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 2200);
  	LL_mDelay(200);

  	//LZ vpred
  	LL_TIM_OC_SetCompareCH2(TIM3, 750);
  	LL_TIM_OC_SetCompareCH2(TIM2, 1750);
  	LL_TIM_OC_SetCompareCH3(TIM2, 650); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 1750);
  	LL_mDelay(200);



}


void walk2(){

	/////////////////////////////////zdvih PP LZ
  	LL_TIM_OC_SetCompareCH2(TIM3, 1100);
  	LL_TIM_OC_SetCompareCH2(TIM2, 1800);
  	LL_TIM_OC_SetCompareCH3(TIM2, 850); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 1900);
  	//dole LP PZ
  	LL_TIM_OC_SetCompareCH4(TIM2, 700);
  	LL_TIM_OC_SetCompareCH1(TIM2, 2050);
  	LL_TIM_OC_SetCompareCH1(TIM3, 750);
  	LL_TIM_OC_SetCompareCH4(TIM3, 2040);
  	LL_mDelay(200);

  	////////////////////vpred PP LZ
  	LL_TIM_OC_SetCompareCH2(TIM3, 1400);
  	LL_TIM_OC_SetCompareCH2(TIM2, 2250);
  	LL_TIM_OC_SetCompareCH3(TIM2, 600); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 1550);
  	//vzad LP PZ
  	LL_TIM_OC_SetCompareCH4(TIM2, 1100);
  	LL_TIM_OC_SetCompareCH1(TIM2, 2200);
  	LL_TIM_OC_SetCompareCH1(TIM3, 650);
  	LL_TIM_OC_SetCompareCH4(TIM3, 1550);
  	LL_mDelay(200);

  	///////////////////dole PP LZ
  	LL_TIM_OC_SetCompareCH2(TIM3, 850);
  	LL_TIM_OC_SetCompareCH2(TIM2, 2050);
  	LL_TIM_OC_SetCompareCH3(TIM2, 700); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 2170);
  	//hore LP PZ
  	LL_TIM_OC_SetCompareCH4(TIM2, 1100);
  	LL_TIM_OC_SetCompareCH1(TIM2, 1800);
  	LL_TIM_OC_SetCompareCH1(TIM3, 1000);
  	LL_TIM_OC_SetCompareCH4(TIM3, 1900);
  	LL_mDelay(200);

  	//vzad PP LZ
  	LL_TIM_OC_SetCompareCH2(TIM3, 650);
  	LL_TIM_OC_SetCompareCH2(TIM2, 1550);
  	LL_TIM_OC_SetCompareCH3(TIM2, 1200); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 2280);
  	//vpred LP PZ
  	LL_TIM_OC_SetCompareCH4(TIM2, 650);
  	LL_TIM_OC_SetCompareCH1(TIM2, 1450);
  	LL_TIM_OC_SetCompareCH1(TIM3, 1300);
  	LL_TIM_OC_SetCompareCH4(TIM3, 2120);
  	LL_mDelay(200);






}
void test(){

	/////////////////////////////////zdvih PP LZ
  	LL_TIM_OC_SetCompareCH2(TIM3, 1100);
  	LL_TIM_OC_SetCompareCH2(TIM2, 1800);
  	LL_TIM_OC_SetCompareCH3(TIM2, 850); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 1900);
  	//hore
  	LL_TIM_OC_SetCompareCH4(TIM2, 1100);
  	LL_TIM_OC_SetCompareCH1(TIM2, 1800);
  	LL_TIM_OC_SetCompareCH1(TIM3, 1000);
  	LL_TIM_OC_SetCompareCH4(TIM3, 1900);
  	LL_mDelay(2000);

  	////////////////////vpred PP LZ
  	LL_TIM_OC_SetCompareCH2(TIM3, 1400);
  	LL_TIM_OC_SetCompareCH2(TIM2, 2250);
  	LL_TIM_OC_SetCompareCH3(TIM2, 600); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 1550);

  	//vpred LP PZ
  	LL_TIM_OC_SetCompareCH4(TIM2, 650);
  	LL_TIM_OC_SetCompareCH1(TIM2, 1450);
  	LL_TIM_OC_SetCompareCH1(TIM3, 1300);
  	LL_TIM_OC_SetCompareCH4(TIM3, 2120);
  	LL_mDelay(2000);


  	///////////////////dole PP LZ
  	LL_TIM_OC_SetCompareCH2(TIM3, 850);
  	LL_TIM_OC_SetCompareCH2(TIM2, 2050);
  	LL_TIM_OC_SetCompareCH3(TIM2, 700); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 2170);

  	//dole LP PZ
  	LL_TIM_OC_SetCompareCH4(TIM2, 700);
  	LL_TIM_OC_SetCompareCH1(TIM2, 2050);
  	LL_TIM_OC_SetCompareCH1(TIM3, 750);
  	LL_TIM_OC_SetCompareCH4(TIM3, 2040);
  	LL_mDelay(2000);




  	//vzad PP LZ
  	LL_TIM_OC_SetCompareCH2(TIM3, 650);
  	LL_TIM_OC_SetCompareCH2(TIM2, 1550);
  	LL_TIM_OC_SetCompareCH3(TIM2, 1200); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 2280);

  	//vzad LP PZ
  	LL_TIM_OC_SetCompareCH4(TIM2, 1100);
  	LL_TIM_OC_SetCompareCH1(TIM2, 2200);
  	LL_TIM_OC_SetCompareCH1(TIM3, 650);
  	LL_TIM_OC_SetCompareCH4(TIM3, 1550);
  	LL_mDelay(2000);





}

void sleep(){

  	LL_TIM_OC_SetCompareCH1(TIM3, 2040);
  	LL_TIM_OC_SetCompareCH4(TIM3, 750);
  	//PP
  	LL_TIM_OC_SetCompareCH2(TIM3, 2050);
  	LL_TIM_OC_SetCompareCH2(TIM2, 850);
  	//LZ
  	LL_TIM_OC_SetCompareCH3(TIM2, 2100); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 750);
  	//LP
  	LL_TIM_OC_SetCompareCH4(TIM2, 2050);
  	LL_TIM_OC_SetCompareCH1(TIM2, 700);


}

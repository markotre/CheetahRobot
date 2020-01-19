#include "moves.h"


 uint16_t SERVO1 = 1400;

 uint16_t SERVOMIN = 700;
 uint16_t SERVOMAX = 2100;
 uint16_t STEP = 100;
 uint16_t STEP2 = 100;
 uint16_t STEP11 = 100;
 uint16_t STEP22 = 100;
 uint16_t SERVOM = 700;
 uint16_t SERVOV = 2100;
 uint16_t SERVOM2 = 700;
 uint16_t SERVOV2 = 2100;
 uint8_t start_fulldance=0;
 uint8_t count=0;
extern uint8_t recived;

void stand_up(){
	//PZ
  	LL_TIM_OC_SetCompareCH1(TIM3, 750);
  	LL_TIM_OC_SetCompareCH4(TIM3, 2040); //2040
  	//PP
  	LL_TIM_OC_SetCompareCH2(TIM3, 850);  //850
  	LL_TIM_OC_SetCompareCH2(TIM2, 2150); //2150
  	//LZ
  	LL_TIM_OC_SetCompareCH3(TIM2, 750); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 2200); //2200
  	//LP
  	LL_TIM_OC_SetCompareCH4(TIM2, 700); //700
  	LL_TIM_OC_SetCompareCH1(TIM2, 2050); //2050
	LL_mDelay(500);

}

void push_ups(){
	stand_up();
	LL_mDelay(500);

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
	LL_mDelay(500);
	stand_up();
  	LL_TIM_OC_SetCompareCH2(TIM3, SERVO1);
  	LL_TIM_OC_SetCompareCH2(TIM2, SERVO1);
  	LL_mDelay(500);
  	stand_up();
  	LL_TIM_OC_SetCompareCH3(TIM2, SERVO1);
  	LL_TIM_OC_SetCompareCH3(TIM3, SERVO1);
  	LL_mDelay(500);
  	stand_up();
  	LL_TIM_OC_SetCompareCH4(TIM2, SERVO1);
  	LL_TIM_OC_SetCompareCH1(TIM2, SERVO1);
  	LL_mDelay(500);
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
  	LL_mDelay(250);
  	LL_TIM_OC_SetCompareCH2(TIM3, 1900);
  	LL_mDelay(300);
  	LL_TIM_OC_SetCompareCH2(TIM3, 1500);


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


void walk(){

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

void back_walk(){
	/////////////////////////////////zdvih PP LZ
	  	LL_TIM_OC_SetCompareCH2(TIM3, 1000);
	  	LL_TIM_OC_SetCompareCH2(TIM2, 1800);
	  	LL_TIM_OC_SetCompareCH3(TIM2, 1000); //FS
	  	LL_TIM_OC_SetCompareCH3(TIM3, 1900);
	  	//dole LP PZ
	  	LL_TIM_OC_SetCompareCH4(TIM2, 700); /////////////////////////
	  	LL_TIM_OC_SetCompareCH1(TIM2, 2050);//////////////////
	  	LL_TIM_OC_SetCompareCH1(TIM3, 850);
	  	LL_TIM_OC_SetCompareCH4(TIM3, 1940);
	  	LL_mDelay(200);

	  	//vzad PP LZ
	  	LL_TIM_OC_SetCompareCH2(TIM3, 750);
	  	LL_TIM_OC_SetCompareCH2(TIM2, 1450);
	  	LL_TIM_OC_SetCompareCH3(TIM2, 1300); //FS
	  	LL_TIM_OC_SetCompareCH3(TIM3, 2200);
	  	//vpred LP PZ
	  	LL_TIM_OC_SetCompareCH4(TIM2, 650);
	  	LL_TIM_OC_SetCompareCH1(TIM2, 1550);
	  	LL_TIM_OC_SetCompareCH1(TIM3, 1300);
	  	LL_TIM_OC_SetCompareCH4(TIM3, 2100);
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
	  	LL_TIM_OC_SetCompareCH4(TIM3, 1750);
	  	LL_mDelay(200);


	  	//vpred PP LZ
	  	LL_TIM_OC_SetCompareCH2(TIM3, 1250);
	  	LL_TIM_OC_SetCompareCH2(TIM2, 2100);
	  	LL_TIM_OC_SetCompareCH3(TIM2, 650); //FS
	  	LL_TIM_OC_SetCompareCH3(TIM3, 1550);
	  	//vzad LP PZ
	  	LL_TIM_OC_SetCompareCH4(TIM2, 1300);
	  	LL_TIM_OC_SetCompareCH1(TIM2, 2200);
	  	LL_TIM_OC_SetCompareCH1(TIM3, 800);
	  	LL_TIM_OC_SetCompareCH4(TIM3, 1330);
	  	LL_mDelay(200);



}
void test_back(){

	/////////////////////////////////zdvih PP LZ
	  	LL_TIM_OC_SetCompareCH2(TIM3, 1000);
	  	LL_TIM_OC_SetCompareCH2(TIM2, 1800);
	  	LL_TIM_OC_SetCompareCH3(TIM2, 1000); //FS
	  	LL_TIM_OC_SetCompareCH3(TIM3, 1900);
	  	//hore LP PZ
	  	LL_TIM_OC_SetCompareCH4(TIM2, 900);
	  	LL_TIM_OC_SetCompareCH1(TIM2, 1850);
	  	LL_TIM_OC_SetCompareCH1(TIM3, 1000);
	  	LL_TIM_OC_SetCompareCH4(TIM3, 1750);
	  	LL_mDelay(2000);


	  	//vzad PP LZ
	  	LL_TIM_OC_SetCompareCH2(TIM3, 750);
	  	LL_TIM_OC_SetCompareCH2(TIM2, 1450);
	  	LL_TIM_OC_SetCompareCH3(TIM2, 1300); //FS
	  	LL_TIM_OC_SetCompareCH3(TIM3, 2200);

	  	//vzad LP PZ
	  	LL_TIM_OC_SetCompareCH4(TIM2, 1300);
	  	LL_TIM_OC_SetCompareCH1(TIM2, 2200);
	  	LL_TIM_OC_SetCompareCH1(TIM3, 800);
	  	LL_TIM_OC_SetCompareCH4(TIM3, 1330);
	  	LL_mDelay(2000);



	  	///////////////////dole PP LZ
	  	LL_TIM_OC_SetCompareCH2(TIM3, 850);
	  	LL_TIM_OC_SetCompareCH2(TIM2, 2050);
	  	LL_TIM_OC_SetCompareCH3(TIM2, 750); //FS
	  	LL_TIM_OC_SetCompareCH3(TIM3, 2100);

	  	//dole LP PZ
	  	LL_TIM_OC_SetCompareCH4(TIM2, 700); /////////////////////////
	  	LL_TIM_OC_SetCompareCH1(TIM2, 2050);//////////////////
	  	LL_TIM_OC_SetCompareCH1(TIM3, 850);
	  	LL_TIM_OC_SetCompareCH4(TIM3, 1940);
	  	LL_mDelay(2000);



	  	//vpred
	  	LL_TIM_OC_SetCompareCH2(TIM3, 1250);
	  	LL_TIM_OC_SetCompareCH2(TIM2, 2100);
	  	LL_TIM_OC_SetCompareCH3(TIM2, 650); //FS
	  	LL_TIM_OC_SetCompareCH3(TIM3, 1550);
	  	//vpred LP PZ
	  	LL_TIM_OC_SetCompareCH4(TIM2, 650);
	  	LL_TIM_OC_SetCompareCH1(TIM2, 1550);
	  	LL_TIM_OC_SetCompareCH1(TIM3, 1300);
	  	LL_TIM_OC_SetCompareCH4(TIM3, 2100);
	  	LL_mDelay(2000);





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
void dance(){
	start_fulldance=0;
	SERVOM = 700;
	SERVOV = 2100;
	SERVOM2 = 700;
	SERVOV2 = 2100;
	count=0;


	while(recived =='a' && count<4){


		if(start_fulldance){
			//PZ
		  	LL_TIM_OC_SetCompareCH1(TIM3, SERVOM2);
		  	LL_TIM_OC_SetCompareCH4(TIM3, SERVOV2); //2040
		  	//LZ
		  	LL_TIM_OC_SetCompareCH3(TIM2, SERVOM2); //FS
		  	LL_TIM_OC_SetCompareCH3(TIM3, SERVOV2);

			if(SERVOM2==SERVOMIN){
				STEP11=50;

			}
			else if(SERVOM2==SERVO1){
				STEP11=-50;


			}
			if(SERVOV2==SERVO1){
				STEP22=50;

			}
			else if(SERVOV2==SERVOMAX){
				STEP22=-50;
			}
			SERVOV2+= STEP22;
			SERVOM2+= STEP11;

		}



	  	LL_TIM_OC_SetCompareCH2(TIM3, SERVOM);  //850
	  	LL_TIM_OC_SetCompareCH2(TIM2, SERVOV); //2150
	  	LL_TIM_OC_SetCompareCH4(TIM2, SERVOM); //700
	  	LL_TIM_OC_SetCompareCH1(TIM2, SERVOV); //2050
		LL_mDelay(100);
		if(SERVOM==SERVOMIN){
			STEP=50;


		}
		else if(SERVOM==SERVO1){
			STEP=-50;
			start_fulldance=1;
			count+=1;
		}
		if(SERVOV==SERVO1){
			STEP2=50;

		}
		else if(SERVOV==SERVOMAX){
			STEP2=-50;
		}
		SERVOV+= STEP2;
		SERVOM+= STEP;


	}
	count=0;

	while(recived =='a' && count<5){

		stand_up();
		//PZ
	  	LL_TIM_OC_SetCompareCH1(TIM3, 1100);
	  	LL_TIM_OC_SetCompareCH4(TIM3, 1700); //2040
	  	//LZ
	  	LL_TIM_OC_SetCompareCH3(TIM2, 1100); //FS
	  	LL_TIM_OC_SetCompareCH3(TIM3, 1750);
	  	LL_mDelay(500);
	  	count++;

	}





}

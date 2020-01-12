#include "moves.h"

 uint16_t SERVO1 = 1400;

void stand_up(){
	//BR
  	LL_TIM_OC_SetCompareCH1(TIM3, 750);
  	LL_TIM_OC_SetCompareCH4(TIM3, 2040);
  	//FR
  	LL_TIM_OC_SetCompareCH2(TIM3, 850);
  	LL_TIM_OC_SetCompareCH2(TIM2, 2050);
  	//BL
  	LL_TIM_OC_SetCompareCH3(TIM2, 750); //FS
  	LL_TIM_OC_SetCompareCH3(TIM3, 2100);
  	//FL
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

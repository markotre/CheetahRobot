/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"
#include "moves.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
void state(uint8_t);
/* USER CODE BEGIN PFP */

uint8_t recived = 'x';
uint8_t prev_recived='x';
void process_serial_data(uint8_t ch);


/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */
  

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  

  LL_APB2_GRP1_EnableClock(LL_APB2_GRP1_PERIPH_SYSCFG);
  LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_PWR);

  NVIC_SetPriorityGrouping(NVIC_PRIORITYGROUP_4);

  /* System interrupt init*/

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM2_Init();
  MX_TIM3_Init();
  MX_USART1_UART_Init();
  USART1_RegisterCallback(process_serial_data);
  /* USER CODE BEGIN 2 */
  LL_TIM_CC_EnableChannel(TIM2, LL_TIM_CHANNEL_CH1);
  LL_TIM_CC_EnableChannel(TIM2, LL_TIM_CHANNEL_CH2);
  LL_TIM_CC_EnableChannel(TIM2, LL_TIM_CHANNEL_CH3);
  LL_TIM_CC_EnableChannel(TIM2, LL_TIM_CHANNEL_CH4);
  LL_TIM_EnableCounter(TIM2);

  LL_TIM_CC_EnableChannel(TIM3, LL_TIM_CHANNEL_CH1);
  LL_TIM_CC_EnableChannel(TIM3, LL_TIM_CHANNEL_CH2);
  LL_TIM_CC_EnableChannel(TIM3, LL_TIM_CHANNEL_CH3);
  LL_TIM_CC_EnableChannel(TIM3, LL_TIM_CHANNEL_CH4);
  LL_TIM_EnableCounter(TIM3);




  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */



  stand_up();



  while (1)
  {
	  walk2();
    /* USER CODE END WHILE */

	  if (recived=='m'){
		  push_ups();
		  state('m');

	  }
	  else if (recived=='b') {
		  stand_up();
		  state('b');

	  }
	  else if (recived=='h') {
	  		check();
	  		state('h');

	  	  }
	  else if (recived=='i') {
		  if(prev_recived != recived){
			  stand_up();
		  }
	  		sit();
	  		state('i');

	  	  }
	  else if (recived=='k') {
	  		lay();
	  		state('k');

	  	  }
	  else if (recived=='g') {
		  if(prev_recived != recived){
		  			stand_up();
		  			sit();
		  			LL_mDelay(1000);
		  }

	  		hello();
	  		state('g');

	  	  }
	  else if (recived=='j') {
		  if(prev_recived != recived){
			  stand_up();
		  }
	  		sit_inv();
	  		state('j');

	  	  }
	  else if (recived=='e') {
		  if(prev_recived != recived){
			  stand_up();
		  }
	  		walk();
	  		state('e');

	  	  }
	  else if (recived=='l') {
		  if(prev_recived != recived){
			  lay();
		  }
	  		sleep();
	  		state('l');

	  	  }
	  else if (recived=='f') {
		  if(prev_recived != recived){
			  stand_up();
		  }
		  	  back_walk();
		  	  state('f');

	  	  }
	  else if (recived=='d') {
		  if(prev_recived != recived){
			  stand_up();
		  }
		  	  right_walk();
		  	  state('d');

	  	  }
	  else if (recived=='c') {
		  if(prev_recived != recived){
			  stand_up();
		  }
		  	 left_walk();
		  	 state('c');

	  	  }



    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  LL_FLASH_SetLatency(LL_FLASH_LATENCY_0);

  if(LL_FLASH_GetLatency() != LL_FLASH_LATENCY_0)
  {
  Error_Handler();  
  }
  LL_RCC_HSI_Enable();

   /* Wait till HSI is ready */
  while(LL_RCC_HSI_IsReady() != 1)
  {
    
  }
  LL_RCC_HSI_SetCalibTrimming(16);
  LL_RCC_SetAHBPrescaler(LL_RCC_SYSCLK_DIV_1);
  LL_RCC_SetAPB1Prescaler(LL_RCC_APB1_DIV_1);
  LL_RCC_SetAPB2Prescaler(LL_RCC_APB1_DIV_1);
  LL_RCC_SetSysClkSource(LL_RCC_SYS_CLKSOURCE_HSI);

   /* Wait till System clock is ready */
  while(LL_RCC_GetSysClkSource() != LL_RCC_SYS_CLKSOURCE_STATUS_HSI)
  {
  
  }
  LL_Init1msTick(8000000);
  LL_SYSTICK_SetClkSource(LL_SYSTICK_CLKSOURCE_HCLK);
  LL_SetSystemCoreClock(8000000);
  LL_RCC_SetUSARTClockSource(LL_RCC_USART1_CLKSOURCE_PCLK1);
}

/* USER CODE BEGIN 4 */
void process_serial_data(uint8_t ch)
{
	//static uint8_t count = 0;

	if(ch>=97 && ch<=122){
		recived = ch;
	}

	/*if(ch == 'm')
	{
		//LL_GPIO_SetOutputPin(GPIOB, LL_GPIO_PIN_3);


	}
	else if(ch == 'b')
	{
		//LL_GPIO_ResetOutputPin(GPIOB, LL_GPIO_PIN_3);
		recived = ch;

	}
	else if(ch == 'h')
		{
			//LL_GPIO_ResetOutputPin(GPIOB, LL_GPIO_PIN_3);
			recived = ch;

		}
	else if(ch == 'i')
		{
			//LL_GPIO_ResetOutputPin(GPIOB, LL_GPIO_PIN_3);
			recived = ch;


		}
	else if(ch == 'k')
		{
			//LL_GPIO_ResetOutputPin(GPIOB, LL_GPIO_PIN_3);
			recived = ch;

		}
	else if(ch == 'g')
		{
			//LL_GPIO_ResetOutputPin(GPIOB, LL_GPIO_PIN_3);
			recived = ch;


		}
	else if(ch == 'j')
		{
			//LL_GPIO_ResetOutputPin(GPIOB, LL_GPIO_PIN_3);
			recived = ch;

		}
	else if(ch == 'e')
		{
			//LL_GPIO_ResetOutputPin(GPIOB, LL_GPIO_PIN_3);
			recived = ch;

		}
	else if(ch == 'l')
		{
			//LL_GPIO_ResetOutputPin(GPIOB, LL_GPIO_PIN_3);
			recived = ch;

		}*/

}


void state(uint8_t s){
	if(recived==s){
		prev_recived=s;
	}
}





/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(char *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

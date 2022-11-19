/* Includes ------------------------------------------------------------------*/
#include "MyApplication.h"

/* Private define-------------------------------------------------------------*/

/* Private variables----------------------------------------------------------*/

Buzzer_t  Buzzer = {BuzzerStatus_OFF};

/* Public variables-----------------------------------------------------------*/

/* Public function prototypes------------------------------------------------*/  

void Buzzer_ON(void)
{
	HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_1);
	Buzzer.Status = BuzzerStatus_ON;
}

void Buzzer_OFF(void)
{
	HAL_TIM_PWM_Stop(&htim1,TIM_CHANNEL_1);
	Buzzer.Status = BuzzerStatus_OFF;
}

/*	Òô·û	ÆµÂÊ
			1 	268
			2		294
			3		330
			4		349
			5		392
			6		440
			7		494
*/

void Buzzer_SetFreq(uint16_t frequency) 
{
	__HAL_TIM_SetAutoreload(&htim1,(uint16_t)(1000000/frequency));
	__HAL_TIM_SetCompare(&htim1,TIM_CHANNEL_1,(uint16_t)(1000000/frequency/2));	
}

/********************************************************
  End Of File
********************************************************/

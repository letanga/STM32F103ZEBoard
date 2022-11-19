/* Includes ------------------------------------------------------------------*/
#include "MyApplication.h"

/* Private define-------------------------------------------------------------*/

/* Private variables----------------------------------------------------------*/

/* Public variables-----------------------------------------------------------*/

/* Private function prototypes------------------------------------------------*/ 

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if(huart->Instance == USART1)//����1
	{
		UART_REC[UART_CNT] = UART_TMP[0];
		UART_CNT++;
		if(UART_TMP[0] == 0x0a)
		{
			UART_FLAG = 1;
		}
		HAL_UART_Receive_IT(&huart1,UART_TMP,1);//������������Ҫ���¿����ж�
	}
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if(htim->Instance == htim6.Instance)
	{
		//����֧�����У�ָʾ�Ƽ��1s��˸
		if(++Timer6.usMCU_Run_Timer >= TIMER0_1S)
		{
			Timer6.usMCU_Run_Timer = 0;
			
//			LED_Flip(LED1);
//			LED_Flip(LED2);
//			LED_Flip(LED3);
		}
	}
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	switch(GPIO_Pin)
	{
		case KEY1_Pin: KEY1.KEY_Flag = TRUE;	break;
		case KEY2_Pin: KEY2.KEY_Flag = TRUE;	break;
		case KEY3_Pin: KEY3.KEY_Flag = TRUE;	break;
		case KEY4_Pin: KEY4.KEY_Flag = TRUE;	break;
		default:printf("���� - �ⲿ�жϻص������У�����������ֵ����\r\n\r\n");
	}
}


/********************************************************
  End Of File
********************************************************/

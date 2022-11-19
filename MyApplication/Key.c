/* Includes ------------------------------------------------------------------*/
#include "MyApplication.h"

/* Private define-------------------------------------------------------------*/

/* Private variables----------------------------------------------------------*/

/* Public variables-----------------------------------------------------------*/

KEY_t KEY1 = {FALSE,FALSE,FALSE};
KEY_t KEY2 = {FALSE,FALSE,FALSE};
KEY_t KEY3 = {FALSE,FALSE,FALSE};
KEY_t KEY4 = {FALSE,FALSE,FALSE};

/* Public function prototypes------------------------------------------------*/      


void KEY1_Detect(void)
{
	uint8_t i = 0;
	
	if(KEY1.KEY_Flag == TRUE)
	{
		KEY1.Click = FALSE;
		KEY1.Press = TRUE;
		//���������������
		for(i=0;i<200;i++)
		{
			HAL_Delay(10);
			//���2s�ڣ�����״̬���ָߵ�ƽ����ʱ����Ϊ����������ѭ��
			if(HAL_GPIO_ReadPin(KEY1_GPIO_Port,KEY1_Pin) == GPIO_PIN_SET)
			{
				KEY1.Click = TRUE;
				KEY1.Press = FALSE;
				break; //����forѭ��
			}
		}
		
		if(KEY1.Click == TRUE)
		{
			printf("��⵽��������1����\r\n");
			
			
			Buzzer_SetFreq(262);
			Buzzer_ON();
			HAL_Delay(200);
			Buzzer_OFF();
			
			
//			//����1��������
//			LED_Flip(LED1);
		}
		
		if(KEY1.Press == TRUE)
		{
			printf("��⵽��������1����\r\n");
			
			//����1��������
			LED_Flip(LED1);
			HAL_Delay(200);
			LED_Flip(LED1);
		}
		
		//�������״̬
		KEY1.KEY_Flag = FALSE;
		KEY1.Click = FALSE;
		KEY1.Press = FALSE;
	
	}
}


void KEY2_Detect(void)
{
	uint8_t i = 0;
	
	if(KEY2.KEY_Flag == TRUE)
	{
		KEY2.Click = FALSE;
		KEY2.Press = TRUE;
		//���������������
		for(i=0;i<200;i++)
		{
			HAL_Delay(10);
			//���2s�ڣ�����״̬���ָߵ�ƽ����ʱ����Ϊ����������ѭ��
			if(HAL_GPIO_ReadPin(KEY2_GPIO_Port,KEY2_Pin) == GPIO_PIN_SET)
			{
				KEY2.Click = TRUE;
				KEY2.Press = FALSE;
				break; //����forѭ��
			}
		}
		
		if(KEY2.Click == TRUE)
		{
			printf("��⵽��������2����\r\n");
			
			//����2��������
			LED_Flip(LED2);
		}
		
		if(KEY2.Press == TRUE)
		{
			printf("��⵽��������2����\r\n");
			
			//����2��������
			LED_Flip(LED2);
			HAL_Delay(200);
			LED_Flip(LED2);
		}
		
		//�������״̬
		KEY2.KEY_Flag = FALSE;
		KEY2.Click = FALSE;
		KEY2.Press = FALSE;
	}
}

void KEY3_Detect(void)
{
	uint8_t i = 0;
	
	if(KEY3.KEY_Flag == TRUE)
	{
		KEY3.Click = FALSE;
		KEY3.Press = TRUE;
		//���������������
		for(i=0;i<200;i++)
		{
			HAL_Delay(10);
			//���2s�ڣ�����״̬���ָߵ�ƽ����ʱ����Ϊ����������ѭ��
			if(HAL_GPIO_ReadPin(KEY3_GPIO_Port,KEY3_Pin) == GPIO_PIN_SET)
			{
				KEY3.Click = TRUE;
				KEY3.Press = FALSE;
				break; //����forѭ��
			}
		}
		
		if(KEY3.Click == TRUE)
		{
			printf("��⵽��������3����\r\n");
			
			//����3��������
			LED_Flip(LED3);
		}
		
		if(KEY3.Press == TRUE)
		{
			printf("��⵽��������3����\r\n");
			
			//����3��������
			LED_Flip(LED3);
			HAL_Delay(200);
			LED_Flip(LED3);
		}
		
		//�������״̬
		KEY3.KEY_Flag = FALSE;
		KEY3.Click = FALSE;
		KEY3.Press = FALSE;
	}
}

void KEY4_Detect(void)
{
	uint8_t i = 0;
	
	if(KEY4.KEY_Flag == TRUE)
	{
		KEY4.Click = FALSE;
		KEY4.Press = TRUE;
		//���������������
		for(i=0;i<200;i++)
		{
			HAL_Delay(10);
			//���2s�ڣ�����״̬���ָߵ�ƽ����ʱ����Ϊ����������ѭ��
			if(HAL_GPIO_ReadPin(KEY4_GPIO_Port,KEY4_Pin) == GPIO_PIN_SET)
			{
				KEY4.Click = TRUE;
				KEY4.Press = FALSE;
				break; //����forѭ��
			}
		}
		
		if(KEY4.Click == TRUE)
		{
			printf("��⵽��������4����\r\n");
			
			//����4��������
			Relay_Flip();
		}
		
		if(KEY4.Press == TRUE)
		{
			printf("��⵽��������4����\r\n");
			
			//����4��������
			Relay_Flip();
			HAL_Delay(200);
			Relay_Flip();
		}
		
		//�������״̬
		KEY4.KEY_Flag = FALSE;
		KEY4.Click = FALSE;
		KEY4.Press = FALSE;
	}
}

/********************************************************
  End Of File
********************************************************/

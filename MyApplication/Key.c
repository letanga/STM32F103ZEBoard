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
		//触摸按键长按检测
		for(i=0;i<200;i++)
		{
			HAL_Delay(10);
			//如果2s内，按键状态出现高电平，此时按键为单击，跳出循环
			if(HAL_GPIO_ReadPin(KEY1_GPIO_Port,KEY1_Pin) == GPIO_PIN_SET)
			{
				KEY1.Click = TRUE;
				KEY1.Press = FALSE;
				break; //跳出for循环
			}
		}
		
		if(KEY1.Click == TRUE)
		{
			printf("检测到触摸按键1单击\r\n");
			
			
			Buzzer_SetFreq(262);
			Buzzer_ON();
			HAL_Delay(200);
			Buzzer_OFF();
			
			
//			//按键1单击动作
//			LED_Flip(LED1);
		}
		
		if(KEY1.Press == TRUE)
		{
			printf("检测到触摸按键1长按\r\n");
			
			//按键1长按动作
			LED_Flip(LED1);
			HAL_Delay(200);
			LED_Flip(LED1);
		}
		
		//清除按键状态
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
		//触摸按键长按检测
		for(i=0;i<200;i++)
		{
			HAL_Delay(10);
			//如果2s内，按键状态出现高电平，此时按键为单击，跳出循环
			if(HAL_GPIO_ReadPin(KEY2_GPIO_Port,KEY2_Pin) == GPIO_PIN_SET)
			{
				KEY2.Click = TRUE;
				KEY2.Press = FALSE;
				break; //跳出for循环
			}
		}
		
		if(KEY2.Click == TRUE)
		{
			printf("检测到触摸按键2单击\r\n");
			
			//按键2单击动作
			LED_Flip(LED2);
		}
		
		if(KEY2.Press == TRUE)
		{
			printf("检测到触摸按键2长按\r\n");
			
			//按键2长按动作
			LED_Flip(LED2);
			HAL_Delay(200);
			LED_Flip(LED2);
		}
		
		//清除按键状态
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
		//触摸按键长按检测
		for(i=0;i<200;i++)
		{
			HAL_Delay(10);
			//如果2s内，按键状态出现高电平，此时按键为单击，跳出循环
			if(HAL_GPIO_ReadPin(KEY3_GPIO_Port,KEY3_Pin) == GPIO_PIN_SET)
			{
				KEY3.Click = TRUE;
				KEY3.Press = FALSE;
				break; //跳出for循环
			}
		}
		
		if(KEY3.Click == TRUE)
		{
			printf("检测到触摸按键3单击\r\n");
			
			//按键3单击动作
			LED_Flip(LED3);
		}
		
		if(KEY3.Press == TRUE)
		{
			printf("检测到触摸按键3长按\r\n");
			
			//按键3长按动作
			LED_Flip(LED3);
			HAL_Delay(200);
			LED_Flip(LED3);
		}
		
		//清除按键状态
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
		//触摸按键长按检测
		for(i=0;i<200;i++)
		{
			HAL_Delay(10);
			//如果2s内，按键状态出现高电平，此时按键为单击，跳出循环
			if(HAL_GPIO_ReadPin(KEY4_GPIO_Port,KEY4_Pin) == GPIO_PIN_SET)
			{
				KEY4.Click = TRUE;
				KEY4.Press = FALSE;
				break; //跳出for循环
			}
		}
		
		if(KEY4.Click == TRUE)
		{
			printf("检测到触摸按键4单击\r\n");
			
			//按键4单击动作
			Relay_Flip();
		}
		
		if(KEY4.Press == TRUE)
		{
			printf("检测到触摸按键4长按\r\n");
			
			//按键4长按动作
			Relay_Flip();
			HAL_Delay(200);
			Relay_Flip();
		}
		
		//清除按键状态
		KEY4.KEY_Flag = FALSE;
		KEY4.Click = FALSE;
		KEY4.Press = FALSE;
	}
}

/********************************************************
  End Of File
********************************************************/

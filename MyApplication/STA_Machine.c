/* Includes ------------------------------------------------------------------*/
#include "MyApplication.h"

/* Private define-------------------------------------------------------------*/

/* Private variables----------------------------------------------------------*/

/* Private function prototypes------------------------------------------------*/


/* Public variables-----------------------------------------------------------*/
//�ṹ�嶨��    
STA_Machine_t   STA_Machine = 
{
	STA1
};

/*
	* @name   Fun_STA1 - 5
	* @brief  ״̬����
	* @param  None
	* @retval None      
*/
void Fun_STA1()
{
	HAL_Delay(500);             //��ʱ500ms
	
	LED_Flip(LED1); //��תLED1,���
	LED_Flip(LED2); //��תLED2,���
	LED_Flip(LED3); //��תLED3,���
	
	//״̬���л���״̬2
	STA_Machine.ucSTA_Machine_Status = STA2;
}

void Fun_STA2()
{
	HAL_Delay(500);            //��ʱ500ms
	LED_ON(LED1);  //LED1����
	LED_OFF(LED2); //LED2���
	LED_OFF(LED3); //LED3���
	
	//״̬���л���״̬3
	STA_Machine.ucSTA_Machine_Status = STA3;
}

void Fun_STA3()
{
	HAL_Delay(500);            //��ʱ500ms
	LED_OFF(LED1); //LED1���
	LED_ON(LED2);  //LED2����
	LED_OFF(LED3); //LED3���
	
	//״̬���л���״̬4
	STA_Machine.ucSTA_Machine_Status = STA4;
}

void Fun_STA4()
{
	HAL_Delay(500);            //��ʱ500ms
	LED_OFF(LED1); //LED1���
	LED_OFF(LED2); //LED2���
	LED_ON(LED3);  //LED3����
	
	//״̬���л���״̬5
	STA_Machine.ucSTA_Machine_Status = STA5;
}

void Fun_STA5()
{
	HAL_Delay(500);            //��ʱ500ms
	LED_ON(LED1);  //LED1����
	LED_ON(LED2);  //LED2����
	LED_ON(LED3);  //LED3����
	
	//״̬���л�����ʼ״̬1
	STA_Machine.ucSTA_Machine_Status = STA1;
}
/********************************************************
  End Of File
********************************************************/

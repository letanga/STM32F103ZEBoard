/* Includes ------------------------------------------------------------------*/
#include "MyApplication.h"

/* Private define-------------------------------------------------------------*/

/* Private variables----------------------------------------------------------*/

/* Private function prototypes------------------------------------------------*/


/* Public variables-----------------------------------------------------------*/
//½á¹¹Ìå¶¨Òå    
STA_Machine_t   STA_Machine = 
{
	STA1
};

/*
	* @name   Fun_STA1 - 5
	* @brief  ×´Ì¬º¯Êý
	* @param  None
	* @retval None      
*/
void Fun_STA1()
{
	HAL_Delay(500);             //ÑÓÊ±500ms
	
	LED_Flip(LED1); //·­×ªLED1,ÃðµÆ
	LED_Flip(LED2); //·­×ªLED2,ÃðµÆ
	LED_Flip(LED3); //·­×ªLED3,ÃðµÆ
	
	//×´Ì¬»úÇÐ»»ÖÁ×´Ì¬2
	STA_Machine.ucSTA_Machine_Status = STA2;
}

void Fun_STA2()
{
	HAL_Delay(500);            //ÑÓÊ±500ms
	LED_ON(LED1);  //LED1ÁÁµÆ
	LED_OFF(LED2); //LED2ÃðµÆ
	LED_OFF(LED3); //LED3ÃðµÆ
	
	//×´Ì¬»úÇÐ»»ÖÁ×´Ì¬3
	STA_Machine.ucSTA_Machine_Status = STA3;
}

void Fun_STA3()
{
	HAL_Delay(500);            //ÑÓÊ±500ms
	LED_OFF(LED1); //LED1ÃðµÆ
	LED_ON(LED2);  //LED2ÁÁµÆ
	LED_OFF(LED3); //LED3ÃðµÆ
	
	//×´Ì¬»úÇÐ»»ÖÁ×´Ì¬4
	STA_Machine.ucSTA_Machine_Status = STA4;
}

void Fun_STA4()
{
	HAL_Delay(500);            //ÑÓÊ±500ms
	LED_OFF(LED1); //LED1ÃðµÆ
	LED_OFF(LED2); //LED2ÃðµÆ
	LED_ON(LED3);  //LED3ÁÁµÆ
	
	//×´Ì¬»úÇÐ»»ÖÁ×´Ì¬5
	STA_Machine.ucSTA_Machine_Status = STA5;
}

void Fun_STA5()
{
	HAL_Delay(500);            //ÑÓÊ±500ms
	LED_ON(LED1);  //LED1ÁÁµÆ
	LED_ON(LED2);  //LED2ÁÁµÆ
	LED_ON(LED3);  //LED3ÁÁµÆ
	
	//×´Ì¬»úÇÐ»»ÖÁ³õÊ¼×´Ì¬1
	STA_Machine.ucSTA_Machine_Status = STA1;
}
/********************************************************
  End Of File
********************************************************/

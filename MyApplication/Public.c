/* Includes ------------------------------------------------------------------*/
#include "MyApplication.h"

/* Private define-------------------------------------------------------------*/

/* Public define-------------------------------------------------------------*/

#define	huart_debug		huart1

/* Private variables----------------------------------------------------------*/

/* Public variables-----------------------------------------------------------*/

uint8_t UART_REC[50];
uint8_t UART_TMP[1];
uint8_t UART_FLAG;
uint8_t UART_CNT;

/* Private function prototypes------------------------------------------------*/      

/*
	* @name   fputc
	* @brief  fputc映射物理串口
	* @param  ch -> 待发送字符
	* @retval ch -> 已发送字符      
*/
int fputc(int ch,FILE* f)
{
	//通过查询的方式循环发送
	HAL_UART_Transmit(&huart_debug, (uint8_t *)&ch, 1, 0x000A);

	return ch;
}

/********************************************************
  End Of File
********************************************************/

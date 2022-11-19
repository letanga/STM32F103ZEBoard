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
	* @brief  fputcӳ��������
	* @param  ch -> �������ַ�
	* @retval ch -> �ѷ����ַ�      
*/
int fputc(int ch,FILE* f)
{
	//ͨ����ѯ�ķ�ʽѭ������
	HAL_UART_Transmit(&huart_debug, (uint8_t *)&ch, 1, 0x000A);

	return ch;
}

/********************************************************
  End Of File
********************************************************/

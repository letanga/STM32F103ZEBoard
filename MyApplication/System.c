/* Includes ------------------------------------------------------------------*/
#include "MyApplication.h"

/* Private define-------------------------------------------------------------*/

/* Private variables----------------------------------------------------------*/
	
/* Public variables-----------------------------------------------------------*/

/* Private function prototypes------------------------------------------------*/      

/*
	* @name   Run
	* @brief  ϵͳ����
	* @param  None
	* @retval None      
*/
void System_Run(void)
{
	KEY1_Detect();
	KEY2_Detect();
	KEY3_Detect();
	KEY4_Detect();

	//�����жϽ��ղ���
//	if(UART_FLAG)
//	{
//		HAL_UART_Transmit(&huart1,UART_REC,UART_CNT,0x10);
//		for(int i = 0 ;i < UART_CNT;i++)
//		{
//			UART_REC[i] = 0 ;
//		}
//		UART_FLAG = 0;
//		UART_CNT = 0;
//	}
	
	//��ӡ����
//	printf("abcde\r\n");
//	HAL_Delay(100);
	//״̬������
//	switch(STA_Machine.ucSTA_Machine_Status)
//	{
//		case STA1:
//			Fun_STA1();
//			break;
//		case STA2:
//			Fun_STA2();
//			break;
//		case STA3:
//			Fun_STA3();
//			break;
//		case STA4:
//			Fun_STA4();
//			break;
//		case STA5:
//			Fun_STA5();
//			break;
//		default:
//			Fun_STA1();
//			break;
//	}
}

/*
	* @name   Error_Handler
	* @brief  ϵͳ������
	* @param  None
	* @retval None      
*/
void System_Error_Handler(void)
{
	/* User can add his own implementation to report the HAL error return state */
}

/*
	* @name   Assert_Failed
	* @brief  ��������������
	* @param  None
	* @retval None      
*/
void System_Assert_Failed(void)
{
	/* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
}

/********************************************************
  End Of File
********************************************************/

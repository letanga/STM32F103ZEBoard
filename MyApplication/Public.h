#ifndef __PUBLIC_H_
#define __PUBLIC_H_

/* Includes ------------------------------------------------------------------*/

#include "stdint.h"

/* Public define-------------------------------------------------------------*/
#define SoftWare_Version 	(float)1.0
#define	huart_debug		huart1

//����ö������ -> TRUE/FALSEλ
typedef enum 
{
  FALSE = 0U, 
  TRUE = !FALSE
} FlagStatus_t;


typedef enum 
{
  FAILED = 0U, 
  PASSED = !FAILED
} TestStatus_t;
//����ṹ������

/* extern variables-----------------------------------------------------------*/

extern uint8_t UART_REC[50];
extern uint8_t UART_TMP[1];
extern uint8_t UART_FLAG;
extern uint8_t UART_CNT;

/*******Ԥ����궨��*******/
//#define Monitor_Run_Code   //�������м���� 
//#define Hardware_TEST      //Ӳ������

#endif
/********************************************************
  End Of File
********************************************************/

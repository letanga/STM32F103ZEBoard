#ifndef __Timer6_H__
#define __Timer6_H__

#include "MyApplication.h"

//����ö������
typedef enum
{
	TIMER0_10mS  	= (uint16_t)2,
	TIMER0_50mS  	= (uint16_t)10,
	TIMER0_100mS	= (uint16_t)20,
	TIMER0_200mS	= (uint16_t)40,
	TIMER0_500mS	= (uint16_t)100,
	TIMER0_1S     = (uint16_t)200,
	TIMER0_2S     = (uint16_t)400,
	TIMER0_3S     = (uint16_t)600,
	TIMER0_5S     = (uint16_t)1000,
	TIMER0_10S    = (uint16_t)2000,
	TIMER0_3min   = (uint16_t)36000,
}TIMER0_Value_t;

//����ṹ������
typedef struct
{
  uint16_t volatile usMCU_Run_Timer;  //ϵͳ���ж�ʱ��
} Timer6_t;

/* extern variables-----------------------------------------------------------*/
extern Timer6_t  Timer6;

#endif
/********************************************************
  End Of File
********************************************************/

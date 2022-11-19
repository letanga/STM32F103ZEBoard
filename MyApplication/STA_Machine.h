#ifndef __KEY2_H__
#define __KEY2_H__

#include "MyApplication.h"

//����ö������
typedef enum
{
	STA1   = (uint8_t)0x01, 
	STA2   = (uint8_t)0x02, 
	STA3   = (uint8_t)0x03, 
	STA4   = (uint8_t)0x04, 
	STA5   = (uint8_t)0x05,
} STA_Machine_Status_t;


//����ṹ������
typedef struct
{
	STA_Machine_Status_t  ucSTA_Machine_Status;  //״̬��״̬
} STA_Machine_t;

/* extern variables-----------------------------------------------------------*/
//�ṹ������
extern STA_Machine_t   STA_Machine;
extern void Fun_STA1(void);
extern void Fun_STA2(void);
extern void Fun_STA3(void);
extern void Fun_STA4(void);
extern void Fun_STA5(void);

/* extern function prototypes-------------------------------------------------*/

#endif
/********************************************************
  End Of File
********************************************************/

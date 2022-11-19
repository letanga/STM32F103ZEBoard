/* Includes ------------------------------------------------------------------*/
#include "MyApplication.h"

/* Private define-------------------------------------------------------------*/

/* Private variables----------------------------------------------------------*/

Relay_t  Relay = {RelayStatus_OFF};

/* Public variables-----------------------------------------------------------*/

/* Public function prototypes------------------------------------------------*/  


void Relay_ON(void)
{
	HAL_GPIO_WritePin(Relay_GPIO_Port,Relay_Pin,GPIO_PIN_SET);
	Relay.Relay_Status = RelayStatus_ON;
}
void Relay_OFF(void)
{
	HAL_GPIO_WritePin(Relay_GPIO_Port,Relay_Pin,GPIO_PIN_RESET);
	Relay.Relay_Status = RelayStatus_OFF;
}
void Relay_Flip(void)
{
	HAL_GPIO_TogglePin(Relay_GPIO_Port,Relay_Pin);
	Relay.Relay_Status = !(Relay.Relay_Status);
}


/********************************************************
  End Of File
********************************************************/

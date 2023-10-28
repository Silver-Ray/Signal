#include "stm32f4xx.h"
#include "sys.h"
#include "delay.h"
#include "ad9959.h"
#include "usart.h"
#include "usmart.h"

extern u8 Serial_RxPacket[4];
int main(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	delay_init(168);
	uart_init(115200);
	usmart_dev.init(84);
	Init_AD9959();
	while (1)
	{
	}
}

#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include "key.h"
#include "timer.h"
#include "modbus.h"
/************************************************
 ALIENTEK 战舰STM32F103开发板 实验8
 定时器中断实验-HAL库函数版 
 技术支持：www.openedv.com
 淘宝店铺： http://eboard.taobao.com 
 关注微信公众平台微信号："正点原子"，免费获取STM32资料。
 广州市星翼电子科技有限公司  
 作者：正点原子 @ALIENTEK
************************************************/

int main(void)
{
  HAL_Init();                    	 	//初始化HAL库    
  Stm32_Clock_Init(RCC_PLL_MUL9);   	//设置时钟,72M
	delay_init(72);               		//初始化延时函数
	uart_init(19200);					//初始化串口
	LED_Init();							//初始化LED	
	KEY_Init();							//初始化按键
  TIM3_Init(520-1,72-1);     //520us
  while(1)
  {
      modbus_service();
  }
}

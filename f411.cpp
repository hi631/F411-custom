#include "pxt.h"
#include "stm32f4xx_hal.h"

namespace myExtension {
unsigned int init_gpioa = 0;
unsigned int init_gpiob = 0;
unsigned int init_gpioc = 0;
void init_gpio(GPIO_TypeDef *GPIOx, int pinno, unsigned int *initf, unsigned int mode){
	unsigned int initp = 3 << pinno*2;
	if(((*initf >> pinno*2) & 3)!=mode) {
		*initf = (*initf & ~initp) | (mode << pinno*2);
		if(GPIOx==GPIOA) __HAL_RCC_GPIOA_CLK_ENABLE();
		if(GPIOx==GPIOB) __HAL_RCC_GPIOB_CLK_ENABLE();
		if(GPIOx==GPIOC) __HAL_RCC_GPIOC_CLK_ENABLE();
		GPIO_InitTypeDef GPIO_InitStruct = {0};
		GPIO_InitStruct.Pin = 1 << pinno;
		if(mode<2){
			GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP; // プッシュプル出力
			GPIO_InitStruct.Pull = GPIO_NOPULL;
			GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
		} else {
			GPIO_InitStruct.Mode = GPIO_MODE_INPUT; // 入力モード
			GPIO_InitStruct.Pull = GPIO_PULLUP;     // 必要に応じてPULLUP/PULLDOWNに
		}
		HAL_GPIO_Init(GPIOx, &GPIO_InitStruct);
	}
}
//-- output  --------------------------------------------------------------
   //%
  void f411_gpioa(int value, int count) {
       init_gpio(GPIOA, value, &init_gpioa, 1);
       int gpin=1 << value;
       if(count==0) HAL_GPIO_WritePin(GPIOA, gpin, GPIO_PIN_SET);    // off
       else         HAL_GPIO_WritePin(GPIOA, gpin, GPIO_PIN_RESET);  // on
   }
   //%
   void f411_gpiob(int value, int count) {
       init_gpio(GPIOB, value, &init_gpiob, 1);
       int gpin=1 << value;
       if(count==0) HAL_GPIO_WritePin(GPIOB, gpin, GPIO_PIN_SET);    // off
       else         HAL_GPIO_WritePin(GPIOB, gpin, GPIO_PIN_RESET);  // on
   }
   //%
   void f411_gpioc(int value, int count) {
       init_gpio(GPIOC, value, &init_gpioc, 1);
       int gpin=1 << value;
       if(count==0) HAL_GPIO_WritePin(GPIOC, gpin, GPIO_PIN_SET);    // off
       else         HAL_GPIO_WritePin(GPIOC, gpin, GPIO_PIN_RESET);  // on
   }
//-- input  -------------------------------------------------------------------------
   //%
  int f411_gpioa_in(int value) {
       init_gpio(GPIOA, value, &init_gpioa, 2);
       int gpin=1 << value;
       return HAL_GPIO_ReadPin(GPIOA, gpin);
   }
   //%
   int f411_gpiob_in(int value) {
       init_gpio(GPIOB, value, &init_gpiob, 2);
       int gpin=1 << value;
       return HAL_GPIO_ReadPin(GPIOB, gpin);
   }
   //%
   int f411_gpioc_in(int value) {
       init_gpio(GPIOC, value, &init_gpioc, 2);
       int gpin=1 << value;
       return HAL_GPIO_ReadPin(GPIOC, gpin);
   }

 }


#include "pxt.h"
#include "stm32f4xx_hal.h"

namespace myExtension {
    int init_gpioa = 0;
    int init_gpiob = 0;
    int init_gpioc = 0;
    void init_gpio(GPIO_TypeDef *GPIOx, int gpin){
	  if(GPIOx==GPIOA) __HAL_RCC_GPIOA_CLK_ENABLE();
	  if(GPIOx==GPIOB) __HAL_RCC_GPIOB_CLK_ENABLE();
	  if(GPIOx==GPIOC) __HAL_RCC_GPIOC_CLK_ENABLE();
	  GPIO_InitTypeDef GPIO_InitStruct = {0};
	  GPIO_InitStruct.Pin = gpin;
	  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP; // プッシュプル出力
	  GPIO_InitStruct.Pull = GPIO_NOPULL;
	  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	  HAL_GPIO_Init(GPIOx, &GPIO_InitStruct);
}
    //%
    void f411_gpioa(int value, int count) {
        int gpin=1 << value;
        if(init_gpioa==0) { init_gpio(GPIOA, gpin); init_gpioa = 1;}
        if(count==0) HAL_GPIO_WritePin(GPIOC, gpin, GPIO_PIN_SET);    // off
        else         HAL_GPIO_WritePin(GPIOC, gpin, GPIO_PIN_RESET);  // on
    }
    //%
    void f411_gpiob(int value, int count) {
        int gpin=1 << value;
        if(init_gpiob==0) { init_gpio(GPIOB, gpin); init_gpiob = 1;}
        if(count==0) HAL_GPIO_WritePin(GPIOC, gpin, GPIO_PIN_SET);    // off
        else         HAL_GPIO_WritePin(GPIOC, gpin, GPIO_PIN_RESET);  // on
    }
    //%
    void f411_gpioc(int value, int count) {
        int gpin=1 << value;
        if(init_gpioc==0) { init_gpio(GPIOC, gpin); init_gpioc = 1;}
        if(count==0) HAL_GPIO_WritePin(GPIOC, gpin, GPIO_PIN_SET);    // off
        else         HAL_GPIO_WritePin(GPIOC, gpin, GPIO_PIN_RESET);  // on
    }
}


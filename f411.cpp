#include "pxt.h"
#include "stm32f4xx_hal.h"

namespace myExtension {
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
    void helloWorld(int value, int count) {

        int gpin=1 << value;
        init_gpio(GPIOC, gpin);
        int tc;
        int lc=count;
        while(lc--) {
            HAL_GPIO_WritePin(GPIOC, gpin, GPIO_PIN_SET);    // off
            tc=0x200000; while(tc--) { __NOP();  }
            HAL_GPIO_WritePin(GPIOC, gpin, GPIO_PIN_RESET);  // on
            tc=0x200000; while(tc--) { __NOP();  }
        }
    }
}


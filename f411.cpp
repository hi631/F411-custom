#include "pxt.h"
#include "stm32f4xx_hal.h"

// PC13を点灯 (LEDが負論理の場合、Lowで点灯)
#define LED_ON()  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET)
// PC13を消灯 (LEDが負論理の場合、Highで消灯)
#define LED_OFF() HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET)
// PC13を反転
#define LED_TOGGLE() HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13)

namespace myExtension {
    //%
    void helloWorld(int value) {
        // STM32のHALライブラリなどを使用した処理
        // 例: HAL_GPIO_WritePin(...) 
        __HAL_RCC_GPIOC_CLK_ENABLE(); // GPIOCのクロックを有効化

        int tc;
        int lc=10;
        while(lc--) {
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);    // off
            tc=0x1000000; while(tc--) { __NOP();  }
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);  // on
            tc=0x1000000; while(tc--) { __NOP();  }
        }
    }
}

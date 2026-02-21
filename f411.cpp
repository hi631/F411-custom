#include "pxt.h"

// custom.tsのnamespaceと合わせる
namespace stm32io {

    /**
     * STM32の特定のGPIOピンをHighにする
     */
    //%
    void pinHigh(int pin) {
        // --- ここにSTM32F411用のC++コードを記述 ---
        // 例: STM32Cube HALやCMSISレジスタ直接操作
        // HAL_GPIO_WritePin(GPIOA, 1 << pin, GPIO_PIN_SET);                
    }
}

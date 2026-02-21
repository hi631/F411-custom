//% color="#AA278D" icon="\uf108" weight=100 block="STM32F411 IO"
namespace stm32io {
    /**
     * STM32の特定のGPIOピンをHighにします
     * @param pin GPIOピン番号, eg: 13
     */
    //% blockId=stm32_pin_high block="pin high %pin"
    //% weight=80
    //% export
    export function pinHigh(pin: number): void {
        // ここで実際のC++関数を呼び出します
        // C++側で `namespace stm32io` の `pinHigh` 関数を定義します
        // ccall("pinHigh", pin); // 簡易的な例
    }
}
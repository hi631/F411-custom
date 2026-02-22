//% color="#AA278D" icon="\uf11b" block="My Extension"
namespace myExtension {
    /**
     * STM32F411で入出力するブロック
     */
    //% block="f411_gpio with %value %counr"
    //% shim=myExtension::f411_gpio
    export function f411_gpio(value: number, count: number): void {
        // シミュレータ用のフォールバック処理（実機ではshimが呼ばれる）
        return;
    }
}
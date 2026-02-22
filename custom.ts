//% color="#AA278D" icon="\uf11b" block="My Extension"
namespace myExtension {
    /**
     * STM32F411で入出力するブロック
     */
    //% block="f411_gpioa with %value %counr"
    //% shim=myExtension::f411_gpioa
    export function f411_gpioa(value: number, count: number): void {
        // シミュレータ用のフォールバック処理（実機ではshimが呼ばれる）
        return;
    }
    /**
     * STM32F411で入出力するブロック
     */
    //% block="f411_gpiob with %value %counr"
    //% shim=myExtension::f411_gpiob
    export function f411_gpiob(value: number, count: number): void {
        // シミュレータ用のフォールバック処理（実機ではshimが呼ばれる）
        return;
    }
    /**
     * STM32F411で入出力するブロック
     */
    //% block="f411_gpioc with %value %counr"
    //% shim=myExtension::f411_gpioc
    export function f411_gpioc(value: number, count: number): void {
        // シミュレータ用のフォールバック処理（実機ではshimが呼ばれる）
        return;
    }
}
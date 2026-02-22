//% color="#AA278D" icon="\uf11b" block="f411 Extension"
namespace f411Extension {
    /**
     * STM32F411で出力するブロック
     */
    //% block="f411_gpioa with %value %counr"
    //% shim=myExtension::f411_gpioa
    export function f411_gpioa(value: number, count: number): void {
        // シミュレータ用のフォールバック処理（実機ではshimが呼ばれる）
        return;
    }
    /**
     * STM32F411で出力するブロック
     */
    //% block="f411_gpiob with %value %counr"
    //% shim=myExtension::f411_gpiob
    export function f411_gpiob(value: number, count: number): void {
        // シミュレータ用のフォールバック処理（実機ではshimが呼ばれる）
        return;
    }
    /**
     * STM32F411で出力するブロック
     */
    //% block="f411_gpioc with %value %counr"
    //% shim=myExtension::f411_gpioc
    export function f411_gpioc(value: number, count: number): void {
        // シミュレータ用のフォールバック処理（実機ではshimが呼ばれる）
        return;
    }
    /**
     * STM32F411で入力するブロック
     */
    //% block="f411_gpioa_in with %value %counr"
    //% shim=myExtension::f411_gpioa_in
    export function f411_gpioa_in(value: number): number {
        // シミュレータ用のフォールバック処理（実機ではshimが呼ばれる）
        return 0;
    }
    /**
     * STM32F411で入力するブロック
     */
    //% block="f411_gpiob_in with %value %counr"
    //% shim=myExtension::f411_gpiob_in
    export function f411_gpiob_in(value: number): number {
        // シミュレータ用のフォールバック処理（実機ではshimが呼ばれる）
        return 0;
    }
    /**
     * STM32F411で入力するブロック
     */
    //% block="f411_gpioc_in with %value %counr"
    //% shim=myExtension::f411_gpioc_in
    export function f411_gpioc_in(value: number): number {
        // シミュレータ用のフォールバック処理（実機ではshimが呼ばれる）
        return 0;
    }
}
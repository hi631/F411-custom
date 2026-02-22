//% color="#AA278D" icon="\uf11b" block="My Extension"
namespace myExtension {
    /**
     * STM32で数値を処理するブロック
     */
    //% block="hello world with %value %counr"
    //% shim=myExtension::helloWorld
    export function helloWorld(value: number, count: number): void {
        // シミュレータ用のフォールバック処理（実機ではshimが呼ばれる）
        return;
    }
}
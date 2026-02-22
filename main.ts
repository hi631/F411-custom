forever(function () {
    myExtension.f411_gpioc(13, 1)
    pause(500)
    myExtension.f411_gpioc(13, 0)
    pause(500)
})

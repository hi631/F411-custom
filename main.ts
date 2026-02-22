forever(function () {
    f411Extension.f411_gpioc(13, 1)
    pause(500)
    f411Extension.f411_gpioc(13, 0)
    pause(500)
})

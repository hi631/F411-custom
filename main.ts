forever(function () {
    if (f411Extension.f411_gpioa_in(8) == 1) {
        scene.setBackgroundImage(assets.image`autumn0`)
        f411Extension.f411_gpioc(13, 1)
        pause(500)
        f411Extension.f411_gpioc(13, 0)
        pause(500)
    } else {
        scene.setBackgroundImage(assets.image`forest2`)
        f411Extension.f411_gpioc(13, 1)
        pause(100)
        f411Extension.f411_gpioc(13, 0)
        pause(100)
    }
})

input.onButtonPressed(Button.A, function () {
    pov = 1
    extension.initDisplay()
    basic.clearScreen()
})
input.onButtonPressed(Button.B, function () {
    if (pov == 1) {
        music.play(music.tonePlayable(262, music.beat(BeatFraction.Whole)), music.PlaybackMode.UntilDone)
        basic.showString("Hello!")
    }
})
let pov = 0
pov = 0
basic.showIcon(IconNames.Heart)

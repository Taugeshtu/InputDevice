This looks like a great start:
https://hci.cs.uni-saarland.de/projects/multi-touch-kit/
The paper: [[Multitouch_DIY.pdf]]
The tutorial: [[MTK_Tutorial.pdf]]

Arduino-based, can take trash electrodes, why the fuck not...

RP2040's PIO: https://www.youtube.com/watch?v=3_fxE2XXgX8

Working principle:
- Have a bunch of TX and RX lines
- Pump TX lines one by one by 10MHz, 25% duty PWM (square is fiiiiine)
- While TX line burns, listen to RX lines (can be one by one, can be all at once) - feed them into ADC and watch for voltage

Practicalities:
- for me it makes most sense to have multiplexer on RX lines, TX - raw off pins. This is because the matrix is most likely 4x8 or 5x8, maybe x10 - it's practical to have that many PWM lines, and impractical to have that many ADC lines. Thus, [the MUX](https://www.mouser.co.uk/ProductDetail/Texas-Instruments/TMUX1208PWR?qs=lc2O%252BfHJPVbYdIGs2%2FdugA%3D%3D)

Live example: https://www.youtube.com/watch?v=Lz0CHqbtyuQ
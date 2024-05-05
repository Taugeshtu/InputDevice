This looks like a great start:
https://hci.cs.uni-saarland.de/projects/multi-touch-kit/
The paper: [[MTK_Multitouch_DIY.pdf]]
The tutorial: [[MTK_Tutorial.pdf]]

Arduino-based, can take trash electrodes, why the fuck not...

RP2040's PIO: https://www.youtube.com/watch?v=3_fxE2XXgX8

Working principle:
- Have a bunch of TX and RX lines
- Pump TX lines one by one by 10MHz, 25% duty PWM (square is fiiiiine)
- While TX line burns, listen to RX lines (can be one by one, can be all at once) - feed them into ADC and watch for voltage

Practicalities:
- for me it makes most sense to have multiplexer on RX lines, TX - raw off pins. This is because the matrix is most likely 4x8 or 5x8, maybe x10 - it's practical to have that many PWM lines, and impractical to have that many ADC lines. Thus, the [[MUX]]
- Suggested electrode size is 6mm side; that's about 8.5mm diagonal, so for 18mm key spacing roughly we'll have 2x2 matrix of diamonds. Given the main pads layout is roughly 3.5x6 keys, that means per-pad matrix needs to be 7x12; we can _almost_ get away with squiggled 9x9 matrix, but I'd rather not. 7x12 fits nicely into 8x16 envelope by two [MUX]es (three if we do 8:1s) - 3+1 + 4+1 = 9 pins (3+1 x3 = 12 pins with 8:1s)


Live example: https://www.youtube.com/watch?v=Lz0CHqbtyuQ
### RP2040
Seems like the most bombastic option - programmable IO allowing for heaps of protocols, can implement USB mastering/slaving, 4 ADCs.

Have to watch out though, reference design has NOISY power supply, which is bad (can be made slightly less shit by switching it from PFM to PWM mode of operation)
ProPico tries to address this, but most likely the end result would be custom board? https://dmytroengineering.com/content/projects/pro-pico

[Can run Rust on it xD](https://www.youtube.com/watch?v=Yi0WRF5WPFw)

Probably need IO expander:
https://www.mouser.co.uk/ProductDetail/NXP-Semiconductors/PCAL6524HEAZ?qs=gH1BdSMZm8UzrKpsyR%252B%2FSg%3D%3D
Alternatively this:
https://www.mouser.co.uk/ProductDetail/Diodes-Incorporated/PI4IOE5V96248ZLEX?qs=0lQeLiL1qybrik73ZzHIIw%3D%3D
But the first one wins by having a hardware debouncer - might be useful!

### Pinout
https://pico.pinout.xyz/pimoroni-pico-lipo
Pins usage:

| Usage   | Left    | Board      | Right       | Usage |
|---------|---------|------------|-------------|-------|
| I2C_SDA | GP0     | USB        | VBUS        |       |
| I2C_SCL | GP1     |            | VSYS        |       |
|         | **GND** | LED Charge | **GND**     |       |
|         | GP2     | LED Power  | 3V3 En      |       |
|         | GP3     | LED Signal | 3V3 Out     |       |
|         | GP4     |            | ADC Vref    |       |
|         | GP5     |            | A2          |       |
|         | **GND** | RP2040     | **ADC GND** |       |
|         | GP6     |            | A1          |       |
|         | GP7     |            | A0          | RX    |
|         | GP8     |            | RUN         |       |
|         | GP9     |            | GP22        | MUX_0 |
|         | **GND** |            | **GND**     |       |
|         | GP10    |            | GP21        | TX_0  |
|         | GP11    |            | GP20        | TX_1  |
|         | GP12    |            | GP19        | TX_2  |
|         | GP13    | H1         | GP18        | TX_3  |
|         | **GND** |            | **GND**     |       |
|         | GP14    | H2         | GP17        | MUX_1 |
|         | GP15    | H3         | GP16        | MUX_2 |

TX_n lines are for driving the [[Multitouch]] with 10MHz signal, going horizontal
MUX_n lines are for driving a multiplexer so we can listen back to our result
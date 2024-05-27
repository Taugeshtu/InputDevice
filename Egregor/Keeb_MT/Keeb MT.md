### Goal
Testing multitouch panel as an input device. Maybe also piezo-haptics

### TODO
- [ ] Test the 3V3 out pin on Pico Lipo - does it supply when Pico is USB-powered? Can we sip off that?
	- According to [[PicoLipo_schematic.pdf]] - yes, but test anyway. Maybe there needs to be something on 3V3_EN pin... Drive off VSYS instead?.. [[MUX]] is tolerant anyway...
- [ ] Try [[Multitouch]] on Pi Pico
	- [x] Test single cell touch
	- [ ] Test matrix touch
		- [x] Draw PCB
		- [ ] Get PCB
		- [ ] Test raw values over serial
	- [ ] Play with thickness and materials as overlay to test responsiveness when implemented under the keys
- [ ] Try making [[Haptics]]
	- [ ] Learn more about driving piezos
	- [ ] Select piezo
	- [ ] Draw up a test board
	- [ ] Test [[Haptics#Oil haptics]]

### Pathway


### Components
- MT controller: https://www.mouser.co.uk/ProductDetail/Microchip-Technology/ATMXT336UD-MAUHA1?qs=sGAEpiMZZMtgJDuTUz7XuxnyRbUY9e%252Bvp8Ip%252B1rPrRyDKpGTkosQww%3D%3D
	A cool cat, supports a big matrix (meaning good resolution!); 5-7mA running power, maybe 1-2mA sleep, BUT latency is about 25-30ms!!! Obscene :/ I don't understand though if it's the entire pipeline latency, or first touch acquisition one. Has a smaller brother: https://www.microchip.com/en-us/product/atmxt228ud
- Another cool cat: https://www.mouser.co.uk/ProductDetail/Infineon-Technologies/CYAT71658-56LWS41?qs=sGAEpiMZZMtgJDuTUz7XuxnyRbUY9e%252Bv9aNpWMniiX91J6Ox0QyaBQ%3D%3D
	30ms wake time, 250Hz max (with caveats, but can live on 100Hz), somewhat reasonable power draw of ~3mA avg
- Super-cool cat, analog front-end with 8 (!) synchronized (!!) stupid-fast (!!!) ADC channels, internal voltage ref, the jazz: https://www.mouser.co.uk/ProductDetail/Microchip-Technology/MCP3914A1-E-MV?qs=sGAEpiMZZMvRHvrHmQ%252BDIWpFEauEb5JCItKiCXyYBLc%3D

Oracle suggestions:
- https://www.mouser.co.uk/ProductDetail/Texas-Instruments/ADS127L01IPBSR?qs=HjC056NR38HDY2dqtfko1w%3D%3D

### Beforers
- https://www.youtube.com/watch?v=ZUP7xVqbu9c - FlickBoard, automatic switching between keeb and touch modes
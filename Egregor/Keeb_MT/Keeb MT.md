### Goal
Testing multitouch panel as an input device. Maybe also piezo-haptics

### TODO
- [ ] Test the 3V3 out pin on Pico Lipo - does it supply when Pico is USB-powered? Can we sip off that?
	- According to [[PicoLipo_schematic.pdf]] - yes, but test anyway. Maybe there needs to be something on 3V3_EN pin... Drive off VSYS instead?.. [[MUX]] is tolerant anyway...
- [ ] Try [[Multitouch]] on Pi Pico
	- [ ] Wire up a matrix and test the scanning
	- [ ] Play with thickness and materials as overlay to test responsiveness when implemented under the keys
- [ ] Try making [[Haptics]]
	- [ ] Test [[Haptics#Oil haptics]]

### Pathway

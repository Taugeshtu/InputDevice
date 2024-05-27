### Options overview
- Factory component - Linear Resonance Actuator
- PCB voice coils with huge lifespan: https://www.youtube.com/watch?v=M3HqYx6Y0nM
	Explorations in coil design; highlight: most intuitive design is perfectly fine https://www.youtube.com/watch?v=tti6MpB3ClM
- [[Piezo]]

Idea:
use Piezo as a force sensor as well; and capacitive sensors around it
	+ Lower total profile
	+ fewer PCBs
	- a hit to resolution?..
	- piezo probably bad at measuring super-light touches
	- complicated circuitry

### Oil haptics
So, sound transmission! The idea, ultimately, is to use generated pressure to drive a surface, sooo... why not use liquids?.. Like oil, non-conductive, slightly viscous, pretty fucking great at transmitting sound. Can even integrate baffles to "die down" the sound:
![[Haptic_stack_oil.png]]

The hardest part would be manufacturing; will need to come up with a protocol to fill it with oil AND do the glue-up, at the same-ish time
		Version:
		- Make PCBs sandwich
		- PARTIAL silicone wall build-up (more like contouring, really), partial cure
		- Oil flood
		- Bring in keys, finish silicone pour

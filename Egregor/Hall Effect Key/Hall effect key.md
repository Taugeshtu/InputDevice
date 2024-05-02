So! Knowledge:
https://www.unitconverters.net/magnetic-flux-density/tesla-to-gauss.htm
https://www.kjmagnetics.com/fieldcalculator.asp

Design is "breakaway pair of magnets" - so that we have some initial preload to break through
Going with 2x1mm disk magnet, around N35; this should provide around 45grams of "preload"

### Sensors
1. [Diodes Incorporated AH1913](https://www.diodes.com/assets/Datasheets/AH1913.pdf)
   Typical refresh rate == 350Hz, power == 18uA
1. [Diodes Incorporated AH1388](https://www.diodes.com/assets/Datasheets/AH1388.pdf)
	Kind of the same as AH1913, different package?.. This one has two outputs, basically two switches in one (polarity detector), the rest is very much identical
1. [Ablic S-5715](https://www.ablic.com/en/doc/datasheet/hall_ics/S5715_E.pdf)
	Can run at 1kHz (60uA), even 10kHz (but with 1.4mA power draw lel)
1. [Ablic S-5724](https://www.ablic.com/en/doc/datasheet/hall_ics/S5724_E.pdf)
	Running at 800Hz (1.25ms latency) for 26uA!!! Hard to get tho :/ https://www.mouser.co.uk/ProductDetail/ABLIC/S-5724INBL1-I4T1U?qs=t7xnP681wgUnNOUQMP4Dwg%3D%3D


### Power
Avg power consumption @ 1.8VDC == 12uA (3V3 == 18uA)
If we roll ~70 keys, that's ~1.25mA
With Ablic S-5715 that would be 4.2mA
Ablic S-5724 == ~2mA

### Example
https://github.com/riskable/void_switch
This is cool; three magnets to regulate the force. I probably won't need that many on account of tiny travel...

### Mechanics
[Microswitch](https://www.youtube.com/watch?v=PztPqkeTXEI)
![[Microswitch_scheme.png]]

This works by having 2 springs against each other; actuation motion compresses the first spring (top leaf), then, when the force on that becomes greater than preload on the bottom leaf - switch clicks in. Because the bottom leaf is only "overpowered" and not locked out, the switch bounces up when force on top leaf is removed.

![[Decoupling_levers.png]]
This demonstrates that there's a mechanical advantage factor at play with the hinge; the longer the lever - the less difference in break force at different points on the key

Another idea to possibly play with... Magnet on an independent plate:
### Driving
https://www.allaboutcircuits.com/industry-articles/an-overview-of-driver-circuits-for-piezo-transducer-buzzers/
Basically:
- resistor in parallel to dry down the piezo
- or drive with a full bridge (maybe with FETs to not pay penalty of diode junctions on voltage)

Also this video:
https://www.youtube.com/watch?v=ri0nWiQx_Bc
Highlights that piezo should be thought of as a capacitor; once it's charged - it's gonna stay charged (and elongated!)

### In the wild
https://www.youtube.com/watch?v=egLA0GgF3xw

### Hunting for component
[Mouser filter](https://www.mouser.co.uk/c/electromechanical/audio-devices/piezo-buzzers-audio-indicators/?dimensions=3.2%20mm%20x%203.2%20mm%20x%202%20mm~~9%20mm%20x%205.5%20mm%7C~9%20mm%20x%209%20mm%20x%201.9%20mm~~9%20mm%20x%209%20mm%20x%203%20mm%7C~9.5%20mm%20x%205%20mm~~9.6%20mm%20x%205%20mm%7C~9.6%20mm%20x%209.6%20mm%20x%205%20mm~~9.7%20mm%20x%209.7%20mm%20x%205%20mm%7C~10%20mm%20x%2010%20mm%20x%203.2%20mm~~10%20mm%20x%2010%20mm%20x%203.3%20mm%7C~10%20mm%20x%203.1%20mm~~10.5%20mm%20x%2010.5%20mm%20x%202.5%20mm%7C~10.5%20mm%20x%204%20mm~~12%20mm%20x%200.09%20mm%7C~12%20mm%20x%2012%20mm%20x%203%20mm%7C~12%20mm%20x%203.8%20mm%7C~12.2%20mm%20x%203.5%20mm%7C~12.8%20mm%20x%2012.8%20mm%20x%202.5%20mm%7C~13%20mm%20x%2013%20mm%20x%202.5%20mm~~13%20mm%20x%202.8%20mm%7C~13.8%20mm%20x%204%20mm%7C~14%20mm%20x%2011%20mm%20x%203%20mm%7C~14%20mm%20x%204%20mm~~14%20mm%20x%205%20mm%7C~14.9%20mm%20x%2014.1%20mm%20x%204.7%20mm%7C~15%20mm%20x%202%20mm~~15%20mm%20x%203.9%20mm%7C~16%20mm%20x%201.2%20mm&instock=y&normallystocked=y&rp=electromechanical%2Faudio-devices%2Fpiezo-buzzers-audio-indicators%7C~Dimensions&sort=pricing)

Really good:
- https://www.mouser.co.uk/ProductDetail/CUI-Devices/CPT-9019S-SMT-TR?qs=qCxwlXJ4fnyFEmpIvvxRFg%3D%3D - struck gold?.. 25V tho
- https://www.mouser.co.uk/ProductDetail/AATC/APD-1203-PQ1?qs=uwxL4vQweFNgR0vQM0uYRg%3D%3D - compact, 3V rated, 1-20V "operational", hole goes down?!

Promising:
- https://www.mouser.co.uk/ProductDetail/Murata-Electronics/PKMCS0909E4000-R1?qs=YqJ97pz8ambMt2Tf4F1Kig%3D%3D
- https://www.mouser.co.uk/ProductDetail/PUI-Audio/AB1245B?qs=GedFDFLaBXFHbJ4sWeo0%2FQ%3D%3D
- https://www.mouser.co.uk/ProductDetail/EPCOS-TDK/B54102H1020A001?qs=T3oQrply3y%2Fj25zqEKiIFg%3D%3D - this is purpose-built, but expensive, and has some nasty tricks with needing to be preloaded and flexible connection to PCB...

Enterprise edition:
- https://flora.tech/dragonfly-haptic/
- https://www.tdk-electronics.tdk.com/en/2124786/products/product-catalog/switching-heating-piezo-components-buzzers-microphones/powerhap

Also options:
- https://www.mouser.co.uk/ProductDetail/CUI-Devices/CPT-1625-80-SMT-TR?qs=P1JMDcb91o43eCFIymFs3Q%3D%3D
- https://www.mouser.co.uk/ProductDetail/CUI-Devices/CMT-7525-80-SMT-TR?qs=P1JMDcb91o5izP7Xira9ww%3D%3D - electromagnetic?! Buuut much larger power consumption :/

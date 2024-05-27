https://github.com/microsoft/hidtools

### Self-soldering
Inspiration: https://www.youtube.com/watch?v=r0csHZveVvY
I'm getting a bit of a kick out of self-soldering PCBs; and here's my thinking. Take a 2-layer board, make it a 4-layer, and under the actual circuit layer you put the heating layer. BUT. Instead of just doing a noodle all over the board, what if..

we did wide traces. And then narrow traces _under the solder pads_. And then instead of feeding it with DC, we pumped it with AC, maybe something like 40kHz! Maybe even more. The idea being that at a higher frequency the narrow traces will have their resistance grow even more than the wide ones (is that true? or am I misremembering my AC circuits?) and at any rate, having the hot-hot-hot traces _right under the pads_ will lead to localized heating (which may be bad from warping perspective, I dunno! but pads are typically tiny, so maybe it won't be a problem?) - meaning more efficiency, meaning it may even be possible to self-solder via USB?..

### RP2040 cube
put it into PLCC package, with some bits and bobs realized as "layers"! Inspiration: https://hackaday.io/project/186871-femto-module-v1

### Name
- Mechanicless keyboard
- SSK - solid-state keyboard

### House Geshtu
Tagline: "Home of good things"

### Resin boards
- Make a custom generator that takes the board dimensions (copped clad size + thickness) and gerber, and outputs 2 STL files:
	  1. "holder" - prints first, basically corner tabs for the board to hold on to. After printing that user must insert the board AND RE-HOME THE PRINTER
	  2. "mask" - the actual mask of the circuit, with maybe channels/cavities if adhesion proves to be a problem
Then it's just a simple procedure to get your board out, dunk it into solvent, and peel off the plastic. This is subject to adhesion tho; might not work

Another possible coolhack would be to put the board in and blast around it for a gooooood chunk of time - but this might require hacking g-code... Dunno how well that would work

### BetterPin
Basically, standard headers suck, let's make the one that will plug into a breadboard and afford hot-swap to regular header holes. The "before soldering" stage of the project. Is there a market for it? I'm not sure!
Think "lego peg" on one end, square header peg on the other; joined by plastic stripe same as regular square headers

### Videos
If you ever do videos and have unworking stuff - put it in a "Lessons learned" box. "Box of shame" analog, but with a positive spin

### Progressive matrix scan
This is kinda dumb, when I think about it... But the gist is that instead of sequentially lighting up coloumns, we do a binary search for activations

This will probably require custom firmware, but..
What if we light up half the matrix at once:
```
[x][ ][ ][ ]
[ ][x][x][ ]
[ ][ ][x][ ]
```
Normally that's N^2 scans

**Scan 1**
Coloumns are driven, rows - receiving
c0, c1 active:
R1 = true
R2 = true
R3 = false

**Scan 2**
Coloumns are driven, rows - receiving
c0 active:
R1 = true
R2 = false
R3 = false

**Scan 3** c1 active

Scan 
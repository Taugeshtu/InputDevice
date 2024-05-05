### Name
- Mechanicless keyboard
- SSK - solid-state keyboard

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
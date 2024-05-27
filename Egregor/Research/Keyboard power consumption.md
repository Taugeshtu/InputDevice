If we're running off 18650, that's 3000mAh
ROUGHLY we can anticipate give or take 1h active operation per day (with microsleeps here and there after a second or so inactivity, etc); and we want to hit 300 days on 1 charge - so, 300h work time
Means off one battery we can sip 10mA, give or take.

If we split, we're looking at 2x battery, and 1/2 load from keys

Now, the biggest hog would be the chip. Popcorn test shows 90mA, but I'm sure with careful management it can be brought down to, say, 20mA?.. [This calculator](https://pi-power-calc.shipit.dev/#/runtime) nets about 2500 hours on "low load", and 90h at "med" - so averaging with intense periods where capacitive sensing is enabled, we're probably looking at 300h as doable?

![[Hall effect key#Power]]
Comes down to about 1.5mA
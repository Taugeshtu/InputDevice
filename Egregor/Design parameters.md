I want the full matrix scan to be done innnn 1ms or less, for 1000Hz refresh rate. Very fast, yes, BUT that directly translates to power consumption when you're running at lower sampling rates, AND affords me better filtering.

Let's also say that our panel is at most 16x16 cells, since 16-channel MUXes are common and cheap, and if you want to build a bigger panel with the same resolution, you're probably gonna both increase cell physical size, up-step to 32x32 matrix, and drop down sampling to 250Hz - still plenty fucking fast.

Now, with these params, we need to do roughly 250 cell-scans per 1000us, which means that per-cell we have 4us time budget.
I am currently having 1us as a "settle time" between me toggling pins and reading out of adc, so that MUXes and everything can settle down, pins come up and down, PWM function on GPIO pins to come online or offline - the works.

Which means that when I do my switching and then wait for things to settle - that's the slice of time that I have between ADC reads that the "deaf" channels have to dry up, so to speak.
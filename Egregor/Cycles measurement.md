Okay, so imagine this: you are developing a performance-critical code for your RP2040-based project. Wouldn't it be nice to know _exactly_ how many CPU cycles some operations/functions/code blocks take? Yeah, I think so to.

Unfortunately, there's no such thing as a monotonically increasing cycles counter - I wish! Well, there _is_ one, part of the Cortex-M0 core, BUUUT it's not exposed to us because it's part of the debug bridge and I think some hardware bobs for it are left unimplemented/disabled?.. Anyway, that basically leaves us with 3 options:

### Timers
Resolution on easily findable timers is HORRIBLE though. I mean, it's okay if 1us uncertainty in measurement is fine for your application, but we're in the world of microcontrollers here, 1us is EONS down here (or about 125 clock ticks, which, given that most operations on Cortex-M0 execute in 1 cycle, is potentially a lot of work we could be doing)

### Parallel counter
This one is genius for how simple it is to set up vs how well it works. The basic idea is that you have two cores, which both run off the same clock, and are therefore in lockstep. Now, if you task _one core_ with your code, but _the other one_ with just keeping the counter and pushing it into memory - you can get that loop down to 5 cycles, which will be your measurement resolution. Not too shabby, eh?
### PIO counter
Okay, here we are evoking some primordial voodoo sorcery. Don't like the uncertainty of whole 5 cycles? Let PIO loose on some memory value; pretend there's an input (there isn't), increment scratch register value and immediately push it out into memory, and wrap to the start to do it all over again. I am still a bit hazy about utilizing PIO, so I dunno if that's going to bring the measurement uncertainty down to 1 cycle or, like, 2-3; but it seems to be the only viable option for getting lower than 5 cycles of the parallel counter.
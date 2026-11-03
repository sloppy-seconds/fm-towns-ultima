# Hardware interrupts, and the fact that this port never delivered one

Found on 2026-11-03 while chasing a sound that repeated, and kept because it is a gap in the machine rather than a detail
of one driver. It is also the one change from that investigation that did **not** fix the reported bug, which is exactly why
it needs its own record rather than riding along on the fix.

## What was found

`x86_poll()` exists in `towns_cpu.cpp`. It advances the machine's clock, calls `pending_irq()` in a loop while the guest's
`IF` flag is set, and takes each vector through `take()`. `pending_irq()` in turn reads the 8259s in level-triggered mode
and only delivers a request whose vector has a protected-mode handler installed.

**Nothing called `x86_poll()`.** Not the port, not the kit, and not the recompiled module: the emitter turns `in` and `out`
into `x86_in()`/`x86_out()` calls and leaves the poll alone. So the entire interrupt path was present, correct-looking, and
dead. No hardware interrupt had ever been delivered by this port: not the sound chip's, not the timer's, not the keyboard's.

Measured, not assumed. A one-shot print placed in `pending_irq()` never appeared in a 900-frame run, and the same one-shot in
`x86_poll()` did, with `IF=1`. The two together say the poll was never called rather than never needed.

The installed handlers, once the poll existed and could report them:

```
poll at frame 401: IF=1, sound pcm_irq=0, vectors: 44 4D
```

Master PIC base `0x40`, slave base `0x48`, so those are master IRQ4 and slave IRQ5, which is IRQ13, the sound line. The game
does install handlers. It had simply never had one run.

## Why the poll belongs at the I/O boundary

In this port the guest's clock advances only when it touches hardware: `x86_in()` and `x86_out()` are the only places that
call `advance()`. Instruction execution itself carries no time. So an I/O access is the only instruction boundary where a
pending interrupt can be taken without inventing a time base, and the poll runs there, guarded against re-entry because
taking an interrupt runs guest code that itself touches ports.

## What it did and did not do

**It did not fix the looping sound.** That was deployed before the mechanism, and the sound still stuck; the change that
fixed it was the RF5C68 stopping its channel at the end marker. Three sessions of logs show the driver never reads the sound
status register and never switches a channel off, so it was never waiting for an interrupt at all.

**It did not change what the port draws.** The 700-frame frame is byte-identical before and after, `21682d77` with a save
disk present.

**It did move time, slightly.** Across 14,000 frames with keys, guest clocks shifted by 121 ns. That is the expected
consequence of taking interrupts at all, and it is small enough that the scripted route still reaches the world with no
fault.

## Why it is still in the tree, and what would justify it

It is the correct model: a machine that never takes an interrupt is not a machine, and any driver that does poll a status
register, or any BIOS service that waits for a timer tick, silently does nothing here. But "correct model" is not evidence
that this game needs it, and the risk is real: taking an interrupt runs handler code that has never run in this port before.

The honest state is **present and not yet justified**. Plan item `5n` owns the decision, and it has two acceptable endings:
a measurement that names a behaviour which needs interrupts, or a build without the change that plays the same route and
still behaves, after which the change comes out and the item records why.

## The instrument that answered it

`U2_TRACE_INT=1` now prints, once per run, the poll's first call after frame 400 with `IF` and the installed vectors, and
names why a sound interrupt is dropped: the slave line masked, no protected-mode handler for its vector, or the cascaded
line not taken. Without that line the question "is the driver being reached" could only be answered by guessing.

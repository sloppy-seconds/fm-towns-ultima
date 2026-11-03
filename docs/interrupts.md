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

## Reverted on 2026-11-03, because it silenced the FM music

Kept for two days as "correct in principle, not yet justified", then bisected when the music stopped being heard. Same route,
same 9,000 frames, counting the one-second sound-port census:

| kit | change | result |
|---|---|---|
| `2d148da` | poll never called anywhere | **83 buckets**, music from frame 4026 |
| `b67f023` | poll called at every I/O access | **1 bucket**, no music at all |
| `37ef727` | marker fix on top | still silent |
| `4ce0ea5` | the delivery reverted | **83 buckets** again, identical to the release build |

So the answer to "does this game want interrupts" is not "unknown": it demonstrably does worse with them. The change was
reverted whole, and the RF5C68 marker fix that ended the looping sound effect stayed, because it touches only the sample
channel and the census proves it did not cost the music.

**Why the poll silences the music is not established.** The likely shape is that the FM timer's handler now runs, and the
sequencer's timing assumption no longer holds: the chip's timer was being read as free-running and an interrupt-driven
rewrite of it changes what the driver sees. That is a hypothesis, and item `5n` starts from this bisection rather than from
the guess.

## The gap that remains, and what would justify closing it

A machine that never takes an interrupt is not a machine, and any driver that polls a status register, or any BIOS service
that waits for a timer tick, silently does nothing here. That is still true: the port still delivers no interrupts, and this
page records the one attempt and why it came out.

The honest state is **reverted with evidence, not abandoned**. Plan item `5n` owns it, and its ending has changed: not "does
this game want interrupts" (it demonstrably does worse with the naive version) but "can they be delivered without silencing
the FM music", measured by the same census that caught the regression.

## The instrument that answered it

## The instrument that answered it

`U2_TRACE_INT=1` now prints, once per run, the poll's first call after frame 400 with `IF` and the installed vectors, and
names why a sound interrupt is dropped: the slave line masked, no protected-mode handler for its vector, or the cascaded
line not taken. Without that line the question "is the driver being reached" could only be answered by guessing.

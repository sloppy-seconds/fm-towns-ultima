# Music: where it comes from, and when it starts

The report that started this: the music does not begin when the game boots. It arrives about thirty seconds later,
every launch, and only once the player has left the title screen. That is a behaviour claim, so it needed measuring
rather than diagnosing, and the measurements split it into two questions that had been treated as one.

The first is which part of the machine the music comes out of. The second is whether the delay belongs to the program
or to this port.

Paul parked the question on 2026-11-03 with both answers partly in hand. Plan item `5m` holds the remainder.

## The disc has seven audio tracks, and U2 does not play them

**Tried:** the obvious reading, that a CD game plays its music from the CD. The disc does carry the tracks. The cue
sheet, read this session:

```
TRACK 01 MODE1/2352   INDEX 01 00:00:00
TRACK 02 AUDIO        INDEX 01 01:58:00
TRACK 03 AUDIO        INDEX 01 02:22:00
TRACK 04 AUDIO        INDEX 01 05:22:00
TRACK 05 AUDIO        INDEX 01 06:41:00
TRACK 06 AUDIO        INDEX 01 08:05:00
TRACK 07 AUDIO        INDEX 01 09:48:00
TRACK 08 AUDIO        INDEX 01 11:41:00
```

Audio starts at LBA 9000, which is where the 9,000-sector data track ends. So the music is on the disc and a port that
never asks for it looks like a port bug.

**Measured:** it is not a port bug. With `U2_TRACE_INT=1`, a route driven through the menu and into the world, 14,000
frames, the program makes **exactly one CD-DA play request** in the whole run:

```
int 93h AX=50C0 CX=FF01 BX=0CD4 buffer 76cd4  ES=0014 DS:+000000/000000 ES:+000000/000000
  CD-DA 0 to 0 (frame 183)
```

Both MSF triples are `00:00:00`. `from_msf` reads them as sector 0, so `cd_play(0, 0)` sets `left = 1` and the port
reads one sector of the data track and stops. The audio tracks are never touched.

**Verdict:** U2's music does not come from the CD player. The seven tracks exist, and the plausible owner is one of the
other two games on the trilogy disc, but that is unmeasured and should not be repeated as though it were.

**The first answer here was wrong, and the way it was wrong matters.** The obvious explanation for reading `0 to 0` was
that the play structure lives in `ES:BX` and the port reads `DS:BX`, which would silently discard a real request. That
was tested rather than assumed, by printing both: `towns_dos.cpp` binds the buffer as `rds * 16 + bx`, and the trace
now dumps six bytes at each segment. Both are zeros. The segment hypothesis is dead, and it died in one run because the
trace printed the evidence for and against it side by side.

## The sound chips are silent for a full minute

**Tried:** the question the ear cannot answer. Music starting late could be the program waiting or the port's mixer
being slow to open, and those are different defects with the same sound. Neither is visible from outside the machine,
so the second answer had to come from counting what the program does to the hardware.

**Measured:** `out8` counts writes across the sound port span, `0x4C0` to `0x4FF`, bucketed into one-second slices of
machine time, behind `trace_int`. Same route, same 14,000 frames:

```
FM   1s   530 writes
FM   3s     4 writes
             <- 63 seconds with nothing at all on the sound ports
FM  66s   695 writes
FM  67s   695 writes
...
FM 228s   697 writes
```

Once the music starts it never stops again. There is no fade, no ramp and no partial start: the chips are untouched for
a minute and then driven continuously to the end of the run.

**Verdict:** the mixer is not delaying anything. The program writes nothing to the sound hardware for 63 seconds, and
the port cannot be adding silence to a program that is already silent.

## The frame the music starts is the title menu

**Tried:** naming what the player is looking at when the chips wake up, rather than assuming the silence is the boot.

**Measured:** a screenshot taken at exactly frame 4,026, the frame the first music write lands, read by
`qwen3.8-flash-next`. It is the Ultima II logo with the Option menu on screen:

```
Option:
Return to TOWNS OS
Generate Character
Quit
```

**Verdict:** the music begins with the menu. The thirty seconds in the report are not the world loading, they are the
program's own path from boot to that menu, which on this route took 66 seconds of machine time including the key
presses that got there.

## What is not known, and why

Whether the original FM Towns release is silent through its title screen in the same way. If it plays title music and
this port does not, then something is lost in the first minute and it is ours. If it is silent too, the port is
faithful and the delay is simply what U2 does.

That question cannot be answered from the port's side at all, and on 2026-11-03 it could not be answered from the
original's side either.

**Measured:** Tsugaru has no working audio device in the container, and says so in its own log:

```
ALSA lib pcm.c:2721:(snd_pcm_open_noupdate) Unknown PCM default
Cannot open PCM device.
```

`SDL_AUDIODRIVER=disk` was set in the container and confirmed with `podman inspect`, and no capture file was ever
created, because SDL never reached that driver. Tsugaru's readme states the same limitation in words: audio does not
work on natively-running Linux, and there is no WAV or dump option of its own, checked in `readme.md` and
`command.md`.

**Verdict:** NEGATIVE, and the negative is the reason the item stays open. Capturing the original needs a sound device
inside the container before it needs anything else.

## Instruments this left behind

Two, both behind `trace_int` so neither changes a frame, both committed in `fmtownskit` at `db7744d` and pinned in the
parent.

- `towns_dos.cpp`, `int 93h`: prints `ES` and the six bytes of a play request at `DS:BX` and at `ES:BX`. This is what
  refuted the segment hypothesis.
- `towns_io.cpp`, `out8`: counts writes to the sound span in one-second buckets of machine time. This is what turned
  the question into a measurement.

`tools/container-run.sh` gained an opt-in `AUDIO_CAPTURE=1` that points SDL's disk driver at `/data`, which is the
mounted `saves/` directory, so a capture would appear on the host with nothing to copy out. It does not capture
anything yet, for the reason above, and it is opt-in so a normal run is untouched.

## What a headless driver needs to know

Two facts cost time here and are not about music.

**The ROM warning screen waits for Return.** Without it the emulator sits on its splash indefinitely, and a screenshot
looks like a boot in progress rather than a prompt nobody answered.

**A run with no save disk exits at frame 4,415.** The menu Return after two Down presses ends the program when no
floppy is available, which reads as a crash and is not one. With `saves/userdisk.hdm` in place the same route runs on
to 14,000 frames. `tools/container-run.sh` already mounts that image, so this bites the port's own headless drivers
rather than the emulator.

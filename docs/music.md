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

**Verdict:** the mixer is not delaying anything. The program writes nothing to the sound hardware until its menu is
reached, and the port cannot be adding silence to a program that is already silent.

**The 63 seconds is the route, not the machine, and that had to be corrected.** Paul pointed out on 2026-11-03 that the
Ultima II menu itself plays sounds and music in the emulator. It does here too: on a driven session his own log shows the
first PCM channel starting at **frame 1084**, about eighteen seconds in, as soon as the menu appears. The 63-second figure
above comes from a run whose keys did not arrive until frame 2600, so its menu did not appear until frame 4026. A keyless
run measured today produces no channel start at all, because it never reaches the menu: nothing is pressed.

So the number describes how long that scripted route took to get to the menu, and reading it as a property of the game was
wrong. What survives is the useful half: the chips are silent until the menu, and the music is the menu's.

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

## What the original does, as reported by Paul on 2026-11-03

Heard in the emulator on `jarvis`, which is the first rig this project has had with working audio. This is the comparison
target, recorded in his words because it is behaviour nobody here can hear:

- music starts **at the splash screen**, before any menu is reached (Paul corrected this on 2026-11-03: he had first
  described it as starting at the main menu, then heard it start at the splash)
- **every keypress produces a beep**, arrow keys included
- choosing **Create Character** hard-stops the music and a different song starts
- returning to the main menu hard-stops that song and the menu music starts again
- **Journey Onward** keeps the menu music playing while the character selection is navigated, and it hard-stops when that is
  completed (select character, `Y`, `Space`), then the game loads and music plays again

Two things stand out and both are testable against the port: the music is **tied to the screen**, with hard stops at
screen transitions rather than fades, and **the keyboard is audible**, which means the beep is the driver's response to a
key event rather than something the game draws.

Against that, the port so far: the music engine starts writing registers at second 66 of a headless run (594 writes a
second to the YM3438 plus 101 to the RF5C68), and the mixer outputs nothing. No route scripted here reaches the menu, so
what the port does in front of a player at the menu has not been measured at all.

## What is not known, and why

Whether the original FM Towns release is silent through its title screen in the same way. If it plays title music and
this port does not, then something is lost in the first minute and it is ours. If it is silent too, the port is
faithful and the delay is simply what U2 does.

That question cannot be answered from the port's side at all, and on 2026-11-03 it could not be answered from the
original's side either, in the container. It can now, because a rig with working audio exists: `jarvis:~/Downloads/ut-towns`
boots the trilogy disc into TownsOS under the vendored Tsugaru on a machine with a sound card, and `start.sh --check`
resolves every path. Comparing the original's first sound against the port's is a measurement waiting to be taken rather
than a capability that is missing.

**Measured, in the container, which is why it could not answer this at the time:** Tsugaru has no working audio device
there, and says so in its own log:

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

**A run with no save disk exits at frame 4,415, and the save disk is not why.** The menu Return after two Down
presses ends the program, and an earlier version of this paragraph blamed a missing floppy. It is the selection: a
screenshot at frame 4,400 with no `.hdm` anywhere shows the title menu with **Return to TOWNS OS** highlighted, which is
the quit item. With a save store present the same two Downs land on a different line of a slightly longer menu and the
run continues. The port does not need a disk image at all, and it says so itself: `machine saves as plain files in
./saves (writable)` is printed and that directory is mounted as the floppy. The `media no save disk (.hdm); the game
will ask for one` line above it is about the image, not about the save store, and it reads as a warning when nothing is
wrong.

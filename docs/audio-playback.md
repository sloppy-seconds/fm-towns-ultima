# Sound playback: three faults, what fixed each, and what is left

Everything here was measured on 2026-11-05 in play, with Paul listening on `jarvis` and the port's own instruments in the log.
The symptom that started it was simple: a sound effect repeated until another sound played, the menu had no keypress beeps and
no footstep per step, and the music only started after about a minute. That last part is **unchanged by everything on this page**:
the music still arrives late and still arrives, exactly as it always did, and the late start is item `5m`, not something fixed
here.

Three separate faults were stacked, and two of them had to be fixed before the third was even visible.

## 1. The FM chip was dead from the first frame

`sound_start()` called `chips->fm.reset()` on a freshly constructed `ym3438`. On a new instance that silences the chip
permanently. Measured with a controlled patch (the same one, both ways):

```
without reset()   peak |sample| = 5482
with reset()      peak |sample| = 0
```

Removed. The same patch through the port's own chip instance then gave 5482 where it had given 0.

**What this does and does not explain, corrected after Paul pointed it out.** The harness result is solid: on a fresh chip, `reset()`
followed by the same patch gives silence. What is **not** established is that it silenced the port in play, because music did
play in earlier builds that still had the `reset()` call, after about sixty seconds. Those two facts contradict the simple
version of the story, so the honest statement is that the reset can silence a chip and the port's behaviour under it was never
separated from everything else broken at the time. It stays removed because the harness shows it is unsafe and nothing needed
it, not because it has been shown to have caused anything.

That also weakens the next paragraph rather than supporting it: the marker fix was reverted on 2026-11-03 for stopping the
music, and while the machine was certainly in a bad state then, this page cannot now claim the chip was dead as the reason.
The re-test on 2026-11-05 is what matters, and it is below.

## 2. `int 90h AH=01` never reached the driver

The Towns sound BIOS is entered through `int 90h` and dispatches on `AH` at `0110:000110B0`:

```
0110b3  80 FC 51        cmp ah, 0x51
0110b8  0F B6 EC        movzx ebp, ah
0110bb  2E FF 14 AD CC 10 01 00   jmp dword ptr cs:[ebp*4 + 0x110CC]
```

The table at `cs:0x110CC` reads `0 -> 0x11214`, `1 -> 0x11224`, `2 -> 0x11234`, `3 -> 0x11244`, `4 -> 0x11254`,
`5 -> 0x11264`, `6 -> 0x11274`. Entry 1 is the driver that, at the splash, writes `0x27` to `0x4D8` (the YM3438's timer
control) from `0110:00011C08`, which is the first sound write the original makes.

The kit answered `AH=01` with `break`. It now calls the recompiled driver at `0x11224` with CS switched to TBIOS and a return
address pushed, as a real interrupt would. Measured after: the port writes the same first registers as the original at frame
97: `0x27`, then `0x28`, then the channel and operator setup.

## 3. Some samples are cut off at the end marker

The chip restarts a sample at its loop address when it reaches an `0xFF` marker, and stopping it is the driver's job. The
driver never does stop it, which is the original repeating sound.

Stopping the channel at the marker fixes the repeat and does not make the music any worse. What that means precisely, because
it is easy to overstate: the music behaves exactly as it did before the change, starting after about sixty seconds and not
before. The change was reverted on 2026-11-03 for stopping the music altogether, and it no longer does that. It does not fix
the late start either, and nothing here should be read as saying the music is fixed: the late start is its own problem and is
item `5m`. Measured in play on 2026-11-05 with `U2_IRQ=1`, after the chip fix. The step sound ends every ~80 frames as it
should.

**But some sounds are truncated**, a moongate for instance. The register values cannot separate them:

```
start 224, loop 61440, step 1960    <- steps
start 224, loop 61438, step 1568    <- a slower variant
```

`start` and `loop` are identical across every sound, and only `step` differs, so a deliberate loop cannot be told from a
one-shot by its registers. The difference has to be in the data the channel reads, and the plausible cause is either that
the game's samples contain `0xFF` as an ordinary waveform value, or that our wave indexing reads the wrong bank and finds
`0xFF` where the sample has none.

## What was tried and reverted

**`int 90h AH=06` routed to `0x11274`.** The game calls that service at the menu (frames 2604, 4423) and the shim swallowed
it, so it looked like the missing music call. It changes what is drawn: same frames, same keys, VRAM hash `dc7d8320` against
`6e6c5100`, and in play the menu's red selection bar disappeared. Reverted to the no-op. The service still does something the
shim does not, and the likely reason our call breaks is the frame: a real `int 90h` sets up arguments and a stack this call
does not reproduce. Reading `ESP` at the call site in the original is how to get it right.

**Restoring the timer flag model.** ymfm sets a timer's overflow flag only when the interrupt-enable bit is set
(`engine_timer_expired`); hardware sets it regardless and gates only the interrupt. An attempt to keep the enable bits set and
gate the IRQ in the port suppressed the very interrupt it meant to restore, and was removed.

## Instruments this left behind

All behind `trace_int`, so none changes a frame:

| line | what it answers |
|---|---|
| `FM reg=` / `FM data=` | which register the driver writes, in order |
| `FM key-on` / `LATE` | whether a note is ever keyed on, and what is written after frame 200 |
| `FM status` | the chip's status byte, with the timer-flag bits counted per frame |
| `int90 AH=` | every `int 90h` service except the key read, with its frame |
| `INT TAKEN` | whether a hardware interrupt is ever delivered, and its vector |
| `AUDIO <s> fm= pcm= cd=` | non-zero samples produced per source per second |
| `PCM chN sample ended` | a sample reaching its marker, with start, loop and step |

The last two are what separated "the chip is asked and answers" from "the chip is never asked", which was the difference
between two very different fixes.

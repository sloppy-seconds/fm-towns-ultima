# Sound playback: three faults, what fixed each, and what is left

Everything here was measured on 2026-11-05 in play, with Paul listening on `jarvis` and the port's own instruments in the log.
The symptom that started it was simple: a sound effect repeated until another sound played, the menu had no keypress beeps and
no footstep per step, and the music did not start at all for about a minute. That last part is a **second defect, untouched by
everything on this page**, and it is item `5m`. The original starts its music at the splash screen, so a minute of silence is not
baseline behaviour to be described and lived with, it is a fault with a known reference: the correct behaviour is music from the
splash.

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

Stopping the channel at the marker fixes the repeat and does not make the music any worse. To be exact about what that means: the
music still fails to start for about a minute, which is a defect and not a baseline (item `5m`). The change was reverted on
2026-11-03 for stopping the music altogether, and it no longer does that. It does not fix the late start either, and nothing here
should be read as saying the music is fixed.

**But some sounds are truncated**, a moongate for instance. The register values cannot separate them:

```
start 224, loop 61440, step 1960    <- steps
start 224, loop 61438, step 1568    <- a slower variant
```

`start` and `loop` are identical across every sound, and only `step` differs, so a deliberate loop cannot be told from a
one-shot by its registers. The difference has to be in the data the channel reads, and the plausible cause is either that
the game's samples contain `0xFF` as an ordinary waveform value, or that our wave indexing reads the wrong bank and finds
`0xFF` where the sample has none.

## 4. The sound API, located (uncommitted, 2026-11-05)

Measured on a played session, not inferred. The game does not use `int 90h` for sound. Its own sound library sits at the end of
its image (`0xFD933` to `0xFDBFE`) and reaches the system layer with `lcall fs:[0x80]`, which lands in the TBIOS dispatcher at
`0110:000110B0`. The service number travels in `AH`, so the port's `int 90h` shim never sees these calls at all.

The library's shape, read from `module/p_game_020.cpp`:

| address | services | reads to be the |
|---|---|---|
| `0xFD933` | `AH=0`, `AH=0x15` twice, `AH=0x16` | init: installs the driver's far pointer at `[0xdea2c]` |
| `0xFDB15` | `AH=0x15` with `bl=[ebp+8]`, `ecx=[ebp+0xc]` | parameter write |
| `0xFDB49` | `AH=0x17` | query |
| `0xFDB93` | `AH=0x21` with `bl=[ebp+8]` | per-channel request |
| `0xFDBA8` | `AH=0x22` | per-channel request |
| `0xFDBBD` | `AH=0x23` with `edx=[ebp+8]` | per-channel request |
| `0xFDBD2` | `AH=0x16`, `AH=0x24` with `edx/esi/ecx/bl` | the one that carries the sample buffer, so the play call |

On the played session the dispatcher received 195 calls, 55 of them after frame 200, and the services seen were `0x04`, `0x05`,
`0x15`, `0x16`, `0x21`, `0x23`, `0x43`, `0x44`, `0x46`. **`0x24` was not among them**, which is the next thing to explain: either the
play call is one of the others, or the trace is missing calls.

Two facts that rule things out. `0110:00011224`, the sample-start path that claims a channel and writes `0x4F8` once, was entered
**exactly once** in the whole session and that entry came from this port's own `int 90h` shim. And `0x4F8` was written three
times in the same session, all at frame 97. So the game's PCM output during play does not go through the TBIOS start service at
all, and the repeat question has to be answered in the game's own library, not in the system layer.

## 5. The wave RAM is 87.5 percent unwritten, and the sample is one 4 KB page (uncommitted, 2026-11-05)

Measured on the traced build, in play, from the marker itself:

```
PCM ch7 sample ended at frame 705 (start 224, loop 61440, step 1960)
WAVE read at EFFF (start 224 loop 61440): FF 39 17 8E 8E 90 81 8B B4 D4 CA A0 0F ...
WAVE ff 57346 of 65536, first non-FF at E000, loop point 0000
```

Three things follow, and they are the first hard facts about the PCM path rather than inferences from it.

**The address mapping is correct.** `start = 224` puts the first byte of the sample at wave offset `0xE000`, and `first non-FF at
E000` is exactly where real data begins. So the channel is not reading the wrong place, which was the leading suspect and is now
ruled out.

**The sample is 4096 bytes and ends on its own last byte.** The channel ran from `0xE000` to `0xEFFF` and the byte at `0xEFFF`
is `FF`, which is the end marker. At step 1960 that is about twelve frames, which is exactly when the marker fires. One pass is
therefore correct behaviour for the data as this port has it.

**Wave RAM is 87.5 percent `FF`.** 57,346 bytes of 65,536 are fill. Only 8,190 bytes hold anything else, and the sample under
investigation occupies one 4 KB page of that. The fill is not a bug in itself: `FF` is what the driver writes to mean "end of
sample", and an empty region of wave RAM is supposed to be `FF`.

**What is still unexplained.** The original plays the moongate three times and this port once, and the port issues exactly one
start per sound (`4F8 = FF` then `4F8 = 7F`, seven times in a session, one pair per sound). So either the original's sample data
is three pages long where ours is one, or the original re-triggers the channel twice more by some route this port does not
reproduce. The loop address the driver programs, `0xF000`, is one page past the data, which is where the end marker lives, so it
is a stop configuration rather than a loop within the sample.

## 6. The dispatch table, read at run time (uncommitted, 2026-11-05)

The module resolves `call dword ptr cs:[ebp*4+0x110CC]` at run time, so which entry answers a service is a fact about the loaded
image. `U2_DUMP_DISPATCH=1` finds the dispatcher by its own bytes (`0F B6 EC`, `movzx ebp, ah`) and dumps the table. The entries
that matter, measured:

| service | entry | what the code does |
|---|---|---|
| `AH=0x10` | `0x11B34` | reads port `0x4D8` and returns the FM status in `DL` |
| `AH=0x17` | `0x11B04` | not yet read |
| `AH=0x18` | `0x11B1C` | arms the timers: `gs:[edi+0x27] \|= 0x2A`, then writes register `0x27` |
| `AH=0x24` | `0x124F0` | never called in any session so far |

**Two of those were guessed wrong first and are corrected here.** `AH=0x10` is not a sequencer, it is a status read, and
`AH=0x18` is not a note write, it is timer arming. What misled the first reading was comparing argument registers between a
title-screen log and an in-game log: `AH=0x18` calls carry different `ebx` values in the two, and that service does not read `ebx`
at all. Different leftovers in a register are not different parameters.

**What is established about the title screen.** The interrupt handler at vector `0x4D` (`0xFDDE8`) runs from frame 97, reads the
sound status, and does nothing but rewrite `0x27` about 295 times a second. No key-on is written. In-game the same handler runs and
music is audible, so the game's own player is feeding the driver there and not at the title.

**What is left.** Find the game-side music player: which code writes note data to the FM chip in-game, and what sets the song it
walks. The traced build (`-DU2_TRACE_ON`) gives true write addresses, so one in-game run names the first key-on after entering
the game and the code that produced it.

## 7. CD audio is the music, and the tracks are now measured (2026-11-07)

The splash music is CD audio. Two independent measurements say so, and neither is an inference from register traffic.

**Muting the CD silences it.** Paul ran the debugger's `CDDAMUTE` in the middle of the splash with music playing, and the music
stopped. `CDDAUNMUTE` brought it back. That is a direct test of one device and the only detector that has not been wrong.

**The fork logs every CD audio start.** `TSG_CDDA_LOG=1` in `references/TOWNSEMU` prints the range and the instruction that asked
for it. Two starts appear in a run that reaches the character screen:

```
CDDAPLAY 06:43:00 to 08:06:74 at 0256:000027C9     splash, track 5
CDDAPLAY 09:50:00 to 11:42:74 at 0256:000027BF     Create Character, track 7
```

Both ranges begin exactly on a track's first sector and end exactly on its last: 06:43:00 is LBA 30225 and 08:06:74 is LBA 36524,
which is track 5 and nothing else. The second is track 7. Both come from the CD BIOS at `0256`, not from the game's own segment.

**Two port defects were behind the silence, and a third behind the squelch.**

1. **The media.** The port was given a one-track cue, so the program was told the disc had one track and its table of contents was
   nine bytes. It now reads the `.ccd`, which states the layout, and the table is thirty bytes with eight tracks. The loader had
   been refusing the eight-track cue because its `PREGAP` cannot be decided from a cue, and the `.ccd` is the file that decides it.
2. **The position service.** The program asks `int 93h` where the play is and hands that same buffer back as a play range, so an
   all-zero answer becomes "play 00:00:00 to 00:00:00", which is nothing. Measured: with a range in that reply the program asked
   for `CD-DA 30225 to 36525`, exactly track 5.
3. **The audio reader's bounds.** `Disc::read_audio` bounded each track from `file_start`, which is zero for every track on a
   single-image disc, so the first audio track claimed every sector below its own end, including the whole data track. The program
   asks for `CD-DA 225 to 280` at the character screen, which is inside the data track, and data rendered as 16-bit PCM is the
   squelch that was heard there. Each track is now bounded by its own first and last sector.

**What is still different.** At Create Character the machine plays track 7 and this port goes silent, because the request it receives
has an end before its start (`CD-DA 225 to 67`), which plays nothing. Whether that is the port's table of contents and position
replies still differing from the BIOS's, or the program asking for a track by number through a service this port does not have, is
not yet known. The measurement to make first is what the program asks the BIOS for at that moment, which needs a call-stack print at
the CD audio start rather than another range comparison.

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

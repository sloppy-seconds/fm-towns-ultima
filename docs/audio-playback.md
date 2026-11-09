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
2. **The position service, which is a substitution rather than machine behaviour.** The program asks `int 93h` where the play is
   and hands that same buffer back as a play range, so an all-zero answer becomes "play 00:00:00 to 00:00:00", which is nothing. This
   port now answers with a range, and that is what makes the splash music play. Measured with `U2_CD_NOFALLBACK=1`, which restores
   the documented zeros-while-nothing-has-played answer: the splash is silent. So this is a workaround standing in for a service the
   port does not implement, not something the machine does.
3. **The audio reader's bounds.** `Disc::read_audio` bounded each track from `file_start`, which is zero for every track on a
   single-image disc, so the first audio track claimed every sector below its own end, including the whole data track. The program
   asks for `CD-DA 225 to 280` at the character screen, which is inside the data track, and data rendered as 16-bit PCM is the
   squelch that was heard there. Each track is now bounded by its own first and last sector.

**What is still different, and what the call stack settled.** At Create Character the machine plays track 7 and this port goes
silent, because the request it receives has an end before its start (`CD-DA 225 to 67`), which plays nothing. The fork's call-stack
log at the audio start names the caller:

```
000C:000E093A -> 000C:00102492 -> 0256:000027B9      the game asks, through a DOS-extender thunk
```

So the game does ask for it, and the port is mis-decoding what it asks. The game's own code says why. At `0xE093A` it builds a
parameter block and calls the CD BIOS:

```
0e0904  mov byte  [0xe3d], 0xfe
0e090e  mov byte  [0xe39], al      the track, from the caller
0e0913  mov byte  [0xe3c], 1
0e0926  mov dword [0xe40], 0xb94   a sub-function code
0e0930  push 0xe50                 output block
0e0935  push 0xe34                 parameter block
0e093a  call 0x102492              into the CD BIOS
```

`int 93h` in this port is hand-written and expects two MSF triples in the buffer. What the program passes is this structure, so the
decoded range is meaningless. The same is true of the splash call, which only works because the port's own position reply supplies
the numbers.

**A correction to an earlier claim on this page.** It said the launcher started a track before Ultima II ran, and that this is why
the port had to supply a position. That was an inference, not a measurement, and the call stack refutes it: the splash play and the
character screen play have the same caller, the game at `000C:000E093A`. There is no launcher involvement. What the port supplies is a
substitution for a service it does not implement, measured by turning it off and hearing silence.

**The consequence for the port.** Its CD services are modelled one level too high. Two routes, and the second is the honest one:

- reverse the parameter block at `0xe34` and make the hand-written `int 93h` services parse it. Bounded, but it re-derives an ABI
  that the BIOS already implements.
- model the CD controller at `0x4C0` to `0x4C7` and route `int 93h` into the recompiled TBIOS, so the real BIOS code speaks to a
  device this port provides. `references/TOWNSEMU`'s `TownsCDROM` is a worked reference for that device, and the port already has
  the disc model, the audio reader and the mixer it would feed.

The second is more work and is the shape that makes every CD service correct at once, rather than one call at a time.

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

## 8. Gameplay music is FM, and the CD is only used by screens (measured 2026-11-07)

Two walks on the original with the fork logging every CD audio start and every write to the sound and CD ports settle what each
device is for.

**A full walk through gameplay produces no CD play at all.** Overworld, town, overworld, death, dungeon, overworld produced three CD
stops at the menus and not one CD audio start, while the FM chip received 40,892 register writes and 3,300 key-on register selects,
and the sample chip was enabled 679 times. So in-game music is the FM chip, and the CD is used for screens.

**Menus and screens are CD, and there are two tracks.** Two walks gave the same boundary sequence:

```
CDDAPLAY 06:43:00 to 08:06:74     splash, and again after exiting to the menus   track 5
CDDAPLAY 09:50:00 to 11:42:74     Create Character                              track 7
```

Both ranges begin and end exactly on a track's first and last sector. A stop precedes each change, and one of those stops came from
`000C:000FDEE8`, the game's own sound interrupt handler, so the program drives the CD from its own interrupt path as well as asking
the BIOS for tracks.

That means the port's in-game music is right in mechanism rather than by luck: the game's own sequencer runs on the FM chip, so
changing the music between the overworld, towns and dungeons comes from its own code, and the port reproduces it by executing that
code. It also means a music change per context cannot be a CD request, which was the first thing to check about it.

## What was tried and failed: finding the track table by searching memory

The game builds its CD requests from a three-bytes-per-track table at `0xCE0`, which is empty in the image and therefore filled at
run time. Three attempts to locate it:

**Search for the track times.** `FIND 064300` and `FIND 095000`, the MSF of tracks 5 and 7 as the builder uses them, over eight cycles
with a segment translation before each. One address came back every cycle, `0x8BAE`, in low memory rather than the game's 4 MB data
area.

**Dump that address.** `0x8B40` onward is a keyboard translation table, four-byte records mapping scan codes to ASCII (`0x53` to `S`,
`0x54` to `T` and so on), and the matched bytes are not at `0x8BAE` in the dump. So the hit was not a track table.

**Check whether the game was running.** The translation taken at dump time says `Page Table Not Present`, so segment `0x14` was not
mapped the way the game maps it, and the dump cannot be used as evidence either way.

Failed for two reasons worth recording: the searches were fired at fixed times rather than repeated, and `FIND` reports that it
searches main RAM, sprite RAM and VRAM, which may not include the game's four-megabyte area. A memory-write monitor on the assumed
address caught only DMA traffic with code-like values, which is the CD controller's transfer buffer, not the table.

**What is left.** The table is only ever read through DS with an immediate address, so its writer uses a computed pointer. Reading the
functions at `0xE0624`, `0xE07C8` and their neighbours in full, rather than grepping their constants, is how that pointer gets found,
and it needs no emulator.

## 9. The CD layer is inside IO.SYS, and the call convention is measured (2026-11-09)

### 9.1 There is no separate driver file

The disc carries no CD driver and no `MSCDEX.EXE`. `node tools/getfile.js --list CD` and `--list DRV` both report no such name, and
`CONFIG.SYS`, 84 bytes, loads only `DEVICE=TBIOS.SYS /TBIOS.BIN`. `AUTOEXEC.BAT`, 196 bytes, runs `GAIJI2` and `CONTROL` and nothing
else.

The CD layer is inside `IO.SYS`, 77,824 bytes, measured by `python3 tools/cdlayer.py`:

| file | `mov dx,0x4C0..0x4C7` | `int 93h` | CD strings |
|---|---|---|---|
| `IO.SYS` | 26 | 32 | `C:\MSCDEX.EXE`, `!/L:Q /D:TOWNS_CD /D:MENU_DRV /M:8`, `Q7\7TOWNS_CD` |
| `T_OAK2.EXE` | 0 | 0 | none |
| `CONTROL.EXE` | 0 | 1 | none |
| `TBIOS.SYS` | 0 | 0 | none |

The controller code sits at file offsets `0x4106` to `0x4CAC`. It polls `0x4C0` for a ready bit, writes parameters to `0x4C4`, and
writes the command to `0x4C2`, with the parameter bytes staged in its own data at `DS:0x3B` to `DS:0x43`.

**The load base is 0x400, measured three ways.** `0256:0018` resolves to file `0x2178` (`0x2578 - 0x400`). The physical dump at
`0:05E0` matches file `0x1E0` byte for byte. And a CD play recorded on the original carries the frame `0256:27B9`, which is linear
`0x4D19` and file `0x4919`, inside the controller region. So the driver the game reaches is this one, in `IO.SYS`.

### 9.2 The interrupt convention, read from the driver's own call site

File `0x4179`, base `0x400`, segment `0457`:

```
push ds
mov al,[bp+2]      ; and al,0x0f  then  or al,0xb0
mov ch,[bp+7]
mov ds,[bp+0x10]
mov di,[bp+0x0e]
mov ah,0xfd
int 0x93
```

So `int 93h` is entered with `AH=0xFD`, `AL=0xB0` plus a four-bit selector, `DS:DI` a buffer and `CH` carried in and out. The entry
stub at file `0x2160` guards `AH` to `0xFD` or above, or `0x04` or below, so a second family exists in the low range.

### 9.3 What the game sends, and the parked note was reading the wrong layer

The CD code is one cluster at `0xE05F8` to `0xE0FA0`. The routine the splash and the character screen both reach is `0x102692`, and
it is a register-image caller, not a BIOS call:

```
mov eax,[esi]      ; block +0x00
mov ebx,[esi+4]    ; +0x04
mov ecx,[esi+8]    ; +0x08
mov edx,[esi+0x0c] ; +0x0c
mov edi,[esi+0x14] ; +0x14
mov esi,[esi+0x10] ; +0x10
int 0x21
```

and it writes `EAX`, `EBX`, `ECX`, `EDX`, `ESI`, `EDI` and the carry flag back into the reply block at `0xe50`. So the block at
`0xe34` is a register image for the DOS extender and the two service words in it, `0x250F` and `0x2511`, are `int 21h` `AX` values.

`0x2511` raises a real-mode interrupt. `EDX` points at a sub-block at `0xb94` whose first word is `0x93`, whose `+2` word is a
segment, and whose `+0xa` dword is `0x50c0` in the splash path and `0x54c0` in the other. Read as a register value that is `AH=0x50`
with `AL=0xC0`, and read as a real-mode address it is `0050:00C0`, the same selector the interrupt stub keeps its work words in.

The request the game fills is six bytes at `0xcd4`: three taken from the track table at `0xce0` by the index in `EDI` times three,
and three from locals at `[ebp-3]` to `[ebp-1]`. That is a start time and an end time, and it is the data that has to reach the
driver.

### 9.4 What this changes

The port's `towns_dos.cpp` `case 0x11` already implements `2511h`, reading `+0` as the interrupt number, `+2` as a segment, `+0xa` as
`EAX` and `+0xe` as `EDX`, and calling `int93` with `DS = segment * 16 + DI`. That matches the observed block, so the gateway is not the
defect. What is still unread is the driver's side: which bytes of the buffer `DS:DI` are the start and end time, and what the reply
must carry.

**Two corrections to earlier notes.** The parked note said the next step was to find the writer of the table at `0xce0`. The table is
read here with an immediate address and an index computed as `edi + edi*2`, so the writer is elsewhere and still unread. It is no
longer on the critical path, because the port does not need the table. It needs the request and reply format, which is in the driver.

The other correction: `ADTR 50:0` gave linear `0x500`, identity mapped, in one session and linear `0x68C50` in an earlier one, so
selector `0x50` is per-context. It cannot be used as a stable base for dumping the installed handler, and the address that earlier
looked like the handler's home was a different table.

### 9.5 The commands behind 9.1 to 9.3

```
node tools/getfile.js IO.SYS --out /var/tmp/io        # and T_OAK2.EXE, CONTROL.EXE, TBIOS.SYS, RUN386.EXE
python3 tools/cdlayer.py /var/tmp/io/IO.SYS /var/tmp/io/T_OAK2.EXE /var/tmp/io/CONTROL.EXE /var/tmp/io/TBIOS.SYS
tools/.venv/bin/python tools/dis16.py /var/tmp/io/IO.SYS 0x4179 0x20 0x400    # the driver's int 93h call site
tools/.venv/bin/python tools/dis16.py /var/tmp/io/IO.SYS 0x2160 0x40 0x400    # the entry stub and its guard
tools/.venv/bin/python tools/dis32.py ENCHANT.EXP 0x102692 0x40                # the register-image caller
tools/.venv/bin/python tools/dis32.py ENCHANT.EXP 0xE05F8 0x120                # the CD cluster's first service
tools/.venv/bin/python tools/findabs.py ENCHANT.EXP 0xcd4 0x250f 0x2511 0x50c0
```

The disassembly helpers `dis16.py`, `dis32.py` and `findabs.py` are in `tools/` for the same reason: these addresses are worth
re-reading without rebuilding a one-liner. All three use capstone, so they need `./tools/decode-setup.sh` once. The ROM offsets below
were checked with `python3 /var/tmp/findpat.py`, which is a five-line byte search and stays a scratch script.

### 9.6 Two ROMs hold the rest of the layer

`FMT_SYS.ROM`, 262,144 bytes, carries 12 loads of `0x4C0` to `0x4C7`, starting at file `0x3CA00`. Disassembled there
(`tools/.venv/bin/python tools/dis16.py /var/tmp/io/FMT_SYS.ROM 0x3c9c0 0x80 0`) it polls `0x4C0`, stages parameters through a register
file at `0x3B60` to `0x3B7E`, and writes the command to `0x4C2`. So there are two CD controller drivers on this machine, one in the system
ROM and one in `IO.SYS`, both driving the same ports by different routes.

`FMT_DOS.ROM`, 524,288 bytes, contains `C:\MSCDEX.EXE` at `0x15F4C` and four strings that name what it is:

```
0x022670  '   /E/K/S/M    Ignored (for MSCDEX commandline compatibility).'
0x02293A  'SHSUCDX or MSCDEX is already installed.'
0x023400  'This FMT_DOS.ROM includes SHSUCDX by courtesy of Mr. Jason Hood.'
0x023444  'It is renamed to MSCDEX.EXE so that FM TOWNS software recognizes it.'
0x0234F2  'Copyright (C) 2005-2020 Jason Hood'
```

So the DOS CD extensions on this machine are **SHSUCDX**, Jason Hood's open-source MSCDEX replacement, shipped inside the DOS ROM and
renamed to `MSCDEX.EXE` so that Towns software finds it. That is worth knowing for two reasons. The DOS-side CD API is
MSCDEX-compatible, so its semantics have a public reference implementation rather than only a ROM to read. And it explains the absence
of a driver file: the whole CD stack is in the firmware and in `IO.SYS`, not on the disc.

### 9.7 What is still unread, and the two routes to it

The one thing not yet read is the service the game's `AH=0x50` and `AH=0x54` calls land in, and therefore which bytes of the `DS:DI`
buffer are the start and end time. Two routes, both static:

- **The system ROM.** `FMT_SYS.ROM` holds a CD controller driver and is the one place a Towns CD BIOS would live. Its Int 93h entry has
  not been found by opcode search: `cmp ah,0x50`, `cmp ah,0xFD` and `cmp al,0xFD` all occur zero times in it, so the dispatch is
  indirect and the table has to be found first, probably from the ROM's own interrupt vector contents.
- **SHSUCDX as the specification.** If the audio calls pass through MSCDEX, the record layout the game builds is the MSCDEX device
  request and ioctl structure, which SHSUCDX implements in public source. That would answer the field question without disassembly, and
  it also predicts what a correct reply looks like.

Neither route needs the emulator, which is what the plan asked for.

### 9.8 SHSUCDX answers nothing here, and the ROM dispatcher is found (2026-11-09)

**SHSUCDX disqualified, measured.** The source is `shsucdx.nsm`, 79,659 bytes, indexed from
`https://raw.githubusercontent.com/adoxa/shsucd/master/shsucdx.nsm`. Searching it for `audio`, `93h` and `CDDA` returns nothing at all. It
implements the data path, `Int 2Fh` functions `0B` to `10` (drive check, version, drive letters, directory entry, and `10h` send-device-request
which forwards a device request header untouched), so it has no audio code to specify. The CD audio family is therefore not MSCDEX, and the
route was worth one check and no more.

**The ROM dispatcher, found by walking callers.** `tools/callers.py` reports 50 near calls into `0x3C990`..`0x3CD80`, clustering at
`0x3C7A1` to `0x3C996`, which puts the entry immediately above. At `0x3C795`:

```
0x3C795  mov al,[si]
0x3C797  and al,0xf0
0x3C799  cmp al,0x20      ; low nibble cleared
0x3C79B  je 0x3C7A5       ; -> call 0x3CAF3, ret
0x3C79D  cmp al,0xb0
0x3C79F  je 0x3C7A9       ; -> call 0x3CCD7, ret
0x3C7A1  call 0x3C9A9     ; default
```

So the service is selected by the **high nibble of the first byte of the request buffer**, not by `AH`. Three families exist: `0x2n`,
`0xBn` and everything else. `tools/callers.py` also reports **no near call** into `0x3C795`, so the dispatcher is entered by a far call or
through a vector, which is consistent with it being the `Int 93h` entry.

The `0xBn` handler at `0x3CCD7` is 32-bit code with `66` prefixes. It reads a descriptor out of `ES:[DI]`, taking a segment from `+0xC`,
an offset from `+0xA` and a word from `+4`, then takes `DS:[SI+2]` and `DS:[SI] & 0x0F`, saves the segment registers, switches `DS` to
`CS`, and calls `0x3D219`. The default handler at `0x3C9A9` is the reset and status path: it writes `0xA0`, reads port `0x3B72`,
and returns `CX=1` with carry set for a status nibble of 9, `CX=0x80` for 8.

### 9.9 The `0x2511` caller, read in full, and the port's real defect

The function at `0xE06C0`, which is the character-screen path, builds the request explicitly:

```
0x0E06D7  mov word [0xb94], 0x93        ; sub-block +0: interrupt number
0x0E06E0  mov ax,[0xe24]
0x0E06E6  mov word [0xb96], ax          ; +2: a real-mode segment, from the last reply
0x0E06EC  mov dword [0xb9e], 0x54c0     ; +0xA: 0x54c0 in this path, 0x50c0 in the other
0x0E06F6  mov word [0xe34], 0x2511      ; int 21h AX
0x0E070D  mov dword [0xe40], 0xb94      ; EDX = the sub-block
0x0E0717  mov ax,[0xe28]
0x0E071D  mov word [0xe48], ax          ; EDI = an offset, from the last reply
0x0E072D  call 0x102692                 ; int 21h
```

So the register image is `EAX=0x2511`, `ECX=0`, `EDX=0xb94`, `EDI=[0xe28]`, and the reply is read back from `0xe51` and `0xe58`. The
buffer the BIOS sees is at segment `[0xe24]` offset `[0xe28]`, and both of those came out of the *previous* call's reply, so the extender
allocates it and the game then fills it through another `0x250F` call that passes `0xCD4` with length `0x0A`.

The value at sub-block `+0xA` is `0x54C0` here and `0x50C0` on the other path, which differ only in their high byte. Those are real-mode
`SS:SP` values, a stack pointer per path, and not a function code. **This is the port's defect.** `towns_dos.cpp` `case 0x11` reads `+0xa`
as `EAX` and hands `0x50C0` to its CD service as `AH=0x50`, `AL=0xC0`. The registers the caller actually sets are `EDX` (the sub-block)
and `EDI` (the offset), with the segment in the sub-block at `+2`. Which bytes of the buffer at `DS:DI` carry the start and end time is
still unread, and it is now the only thing standing between this and a correct implementation.

**Corrected 2026-11-09, same session, by a port run.** The word at `+0xA` takes four values in one session and each belongs to a different
service: `0x50C0` with the buffer holding a start and end pair and the port playing it, `0x52C0` with the buffer zeroed and a stop,
`0x53C0` with a position request, `0x54C0` with the table of contents. The game's own code confirms it, because `0xE092A` writes `0x50C0`
inside the function that builds the MSF range and issues the play, and `0xE06EC` writes `0x54C0` inside the function that reads a run of
`0x63` six-byte records, which is the table of contents being parsed. So `+0xA` is a **service word**, `AH` the function and `AL=0xC0` a
constant, and not a stack pointer. The earlier reading in this section was wrong: four distinct values matched four distinct operations, and
the agreement was the answer rather than a coincidence.

What follows from that: the port's `towns_dos.cpp` reading `+0xA` as `EAX` and dispatching on `AH` with `AL=0xC0` is **right**, and the
services it implements are `0x50` play, `0x52` stop, `0x53` position, `0x54` table of contents, `0x55` pause and `0x56` resume. The claim
that this was the port's defect is withdrawn.

### 9.10 The vector table, and the int 93h entry confirmed byte for byte

A dump of the real-mode vector table at 40 seconds, 1,024 bytes, read with
`python3 /var/tmp/parseivt.py`, gives:

| vector | value | linear | where |
|---|---|---|---|
| `Int 10h` `13h` `16h` `1Ah` | `0A7E:039B` | `0x00AB7B` | the MBIOS module at file `0xA3E0` |
| `Int 21h` | `1064:13F9` | `0x011A39` | below IO.SYS's end at file `0x11639` |
| `Int 2Fh` | `17BA:03F6` | `0x017F96` | past IO.SYS's end, so neither IO.SYS nor the ROM |
| `Int 93h` | `0256:0000` | `0x002560` | IO.SYS file `0x2160` |
| `Int 08h` `09h` | `5E88:10FE` | `0x05F97E` | a mode-switch stub |

**The int 93h entry is now confirmed by comparison, not inference.** Physical `0:2560` reads `FA 55 8B EC 80 66 06 FE 5D 80 FC 80 73 0A`, and
IO.SYS file `0x2160` holds the same bytes, so the stub read statically in 9.2 is the vector's target.

**But two regions of the image no longer match the file, measured the same way.** Physical `0:11A40`, inside the int 21h handler, holds
`75 0C 55 89 E5 8B 6E 02 2E 89 2E DA 13` where IO.SYS file `0x11640` holds `76 04 77 05 39 76 06 73 03 E8 24`. Physical `0:10250`
likewise differs: the dump reads `00 00 00 00 00 00 00 00 00 00 00 00 00 9D 5A AA` where the file holds
`90 BF 45 5C B4 03 CD AE 80 65 03 FD B4 02 CD AE`. So the OS has written over those parts of its own image, and a file offset there is not
the code that runs. Any further reading of the `0x250F` and `0x2511` services has to come from a dump taken while they are resident, not
from the file, and that is a different instrument from the ones used so far.

### 9.11 The port is now an instrument for the buffer, and the first byte is `0x06`

`towns_dos.cpp` `case 0x11` now names the block fields for what they are and, under `U2_TRACE_INT=1` with `--dev`, prints the block, the
segment, the stack word and sixteen bytes at the target:

```
  real-mode int 93h: block 400B94 ds 76CD ss:sp 53C0 target 76CD4 bytes 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  real-mode int 93h: block 400B94 ds 76CD ss:sp 52C0 target 76CD4 bytes 06 2D 00 08 09 00 00 00 00 00 00 00 00 00 00 00
  real-mode int 93h: block 400B94 ds 76BA ss:sp 54C0 target 76BA4 bytes 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
```

Four things this settles and one it raises.

- The port's `0x0F` address fabrication round-trips: segment `0x76CD` with offset `4` gives `0x76CD4`, the buffer the program filled. So
  `DS:DI` is right and the port was already computing it correctly.
- The value at `+0xA` is a **service word**, not a stack pointer. It takes `0x50C0`, `0x52C0`, `0x53C0` and `0x54C0` across one run, and
  each one is the call the port sees: play, stop, position, table of contents. See the correction in 9.9.
- The buffer at `DS:DI` is a **packed-BCD** start and end pair. `06 2D 00 08 09 00` is `06:45:00` to `08:09:00`, and both values are
  copies of the table of contents entries: the TOC reply the port sent holds `06 45 00` and `08 09 00`, packed BCD, and the game unpacks
  them into this buffer. So the play range is derived from the TOC rather than from a table in the program.
- The port already plays that range: `from_msf` subtracts 150 sectors, so `06:45:00` becomes `30225`, which is the `06:43:00` the original
  was measured playing. The two-second correction is a measurement, not a fudge, and it explains why the splash works.

**Which reframes the dispatcher question.** The buffer is a packed-BCD time pair and the service is in `AH`, so the byte the ROM reads at
`[SI]` is neither of those: the caller sets `DI` and `AH`, and the ROM dispatcher reads a memory byte at `SI`. Either the ROM entry loads
`SI` from a structure the caller passes, or the ROM dispatcher serves a different caller, and the `0xBn` family it does handle is the one
`IO.SYS` uses (`AL=0xB0|n`). The family the game uses is `0xC0`, which lands on the ROM's default branch, and that branch is the reset and
status path, which is not what a play does. So the ROM dispatcher is probably not the code that serves this call, and the search for its
entry is worth less than it looked.

### 9.12 The Create Character request, and the input trap that nearly hid it

Driving the port through character creation over its control socket, with `--dev` so `U2_TRACE_INT` is honoured, gives the requests at
those screens. Two traps first, because both produced plausible-looking wrong answers.

**The cue is the wrong medium.** The first run passed `build/port/disc.cue`, which declares one track. The port's table of contents then
read `03 01 01 13 25 00 80 02 00`, 9 bytes with first and last track both `01`, the program asked to play `00:02:00` to `00:13:25`, and the
character screen asked for `00 01 00 00 06 00`. All of that is a correct answer to a disc with one track. The `.ccd` declares eight, and
with it the table of contents is 30 bytes, `03 01 08 13 25 00 80 02 00 ...`, and the splash request is `06 2D 00 08 09 00`. This is the
documented `.ccd` versus `.cue` trap, and it looked like a finding for one run.

**The committed tool drops the instrument.** `tools/controlcreate.py` starts the port without `--dev`, and the port drops `U2_TRACE_INT` in
that mode, printing `[dropped, pass --dev: U2_TRACE_INT]` on a line nobody reads when the run is already failing for a different reason. So
the trace came from a scratch driver that copies the same socket protocol and key route and adds `--dev`.

**What the character screen asks, measured:**

```
  real-mode int 93h: block 400B94 ds 76CD ss:sp 53C0 target 76CD4 bytes 06 2D 00 08 09 00 ...   (position)
  real-mode int 93h: block 400B94 ds 76CD ss:sp 50C0 target 76CD4 bytes 00 05 00 00 06 00 00 06 31 00 ...
  CD-DA 225 to 300 (frame 908) raw 00 05 00 00 06 00 cx FF01
```

So the request is `00:05:00` to `00:06:00`, a **one-second window five seconds into the disc**, which decodes to `225` to `300` after the
minus-150 correction. That is inside the data track, so the port's own audio bounds refuse it and the screen is silent. It is also not what
the original does: there, the same screen plays track 7, `09:50:00` to `11:42:74`.

Two facts about the request are unexplained and both are recorded rather than guessed at. The buffer is **ten** bytes here, not six, and
the third group is `00 06 31 00`. And the values are one second long, which is not a music range, so either this is a different service
from the splash's play or the program computed it from a reply the port gave wrongly.

**The table of contents header is innocent, measured.** `U2_TOC_HEADER=1` sends the header as `01 08 08` instead of `03 01 08`, on the
reading that the parser at `0xE06C0` consumes `(first, last, count)`. The reply becomes
`01 08 08 13 25 00 80 02 00 ...` and the character screen asks for exactly the same `00 05 00 00 06 00` as before, byte for byte. So the
header is ruled out, and the suspect moves to the position reply: the request is always preceded by a position ask, and the port answers
that one with its substitution (`30225` to the end of the disc) rather than with anything derived from the drive.

**What is left needs the original.** Distinguishing "this request means something else to the real BIOS" from "the program made a
different request because an earlier reply differed" requires the requests the original makes at that same screen, and no run of this
port can supply them. That is one drive through character creation with `TSG_CDDA_LOG=1`, which needs a real click.

### 9.13 The original's requests at that screen, and the disc's real track starts (measured 2026-11-09)

One drive through character creation on the original, with the fork's `TSG_CDDA_LOG=1` and the `0xCE0` watch armed, logged four plays:

```
CDDASTOP
CDDAPLAY 06:43:00 to 08:06:74      <- the menu
CDDAPLAY 09:50:00 to 11:42:74      <- Create Character
CDDAPLAY 06:43:00 to 08:06:74      <- back to the menu
```

So the original really does play track 7's region at that screen, which confirms the report the item was opened for, and the port's
`00:05:00` to `00:06:00` there is wrong by any reading.

`python3 /var/tmp/ccdtracks.py <ccd>` reads the disc's own `[Entry N]` blocks and gives:

```
  point 0x01  lba      0   00:02:00      point 0x05  lba  30225   06:45:00
  point 0x02  lba   9000   02:02:00      point 0x06  lba  36525   08:09:00
  point 0x03  lba  10800   02:26:00      point 0x07  lba  44250   09:52:00
  point 0x04  lba  24300   05:26:00      point 0x08  lba  52725   11:45:00
```

Two things follow. The port's table of contents is **correct for all eight tracks**: entry 7 is `09:52:00`, and the original plays
`09:50:00` to `11:42:74`, which is track 7's start to one sector before track 8's start once the two conventions are separated. And the
minus-150 adjustment is not a fudge but the **lead-in**: a CD's MSF address is its LBA plus 150 sectors, the table of contents uses that
convention, and the fork's `CDDAPLAY` prints the LBA directly. `06:45:00` and `06:43:00` are the same sector, stated two ways.

So the port gives the program a correct table and the program still asks for `00:05:00` to `00:06:00`. The splash, with the same code and
the same table, asks for the right range. The remaining difference is what precedes the request: at both screens a **position** ask comes
first, and the port answers that one with its substitution rather than with anything derived from the drive. That is now the only suspect
left, and it is testable by turning the substitution off.

**Turned off, measured: the substitution is load-bearing, and the ranges come from it.** With `U2_CD_NOFALLBACK=1` the same create route
changes every request at once:

| screen | with the substitution | without it |
|---|---|---|
| menu | `06 2D 00 08 09 00`, plays `30225` to `36525` | `00 00 00 00 00 00`, plays `0` to `0` |
| Create Character | `00 05 00 00 06 00`, plays `225` to `300` | `00 00 00 00 00 00`, plays `0` to `0` |

So the play ranges are built from the **position reply**, not from the table of contents directly. That also explains why the earlier note
that the play range is "copied out of the table of contents" was only half right: the values equal TOC entries, and they reach the program
through the position service. The table of contents is correct and still does not determine what is played.

What that means for the fix: turning the substitution off is not the repair, because a position that honestly reports nothing gives a
program that asks for nothing. The repair is a position reply that describes the drive truthfully, which the port can only produce if it
knows what is playing. On the original something always is, since the menu track runs from the splash until the game changes it. In the port
the track has been stopped, so the honest answer is zero and the screen goes silent. The next question is therefore not "what does position
say" but "why is nothing playing when the program asks".

**That last paragraph was wrong, and the code says why.** `towns_dos.cpp` `case 0x53` has two branches. The **fallback** branch, taken when
nothing plays, writes the first six bytes as a table-of-contents start and end pair, and that is the range the menu screen plays. The
**playing** branch writes the oracle's layout instead: status, the track at `[1]`, the position at `[3..5]`, the disc position at `[7..9]`.
At the Create Character screen something *is* playing, so the second branch runs, and `[1]` holds the track number `5`. The program then
reuses the same buffer as a play range, reads `[0..2]` as the start and `[3..5]` as the end, and asks for `00 05 00` to `00 06 00`:
the track number read as the start time's seconds. So nothing was stopped and no stop is missing. The two branches disagree about what the
first six bytes mean, and the program only ever agreed with one of them.

The repair follows from that and is testable: write the live range into `[0..5]` on the playing branch as well, from the current play's start
and end, and the Create Character screen should then ask for a real range instead of `00:05:00`. The risk to check is the splash, which takes
the fallback branch and must not change.

**Done, and it moved the defect.** `towns_dos.cpp` `case 0x53` now writes the range on both branches. Measured after: Create Character asks
`06 2D 00 08 09 00`, which is `30225` to `36525`, the same range the menu uses, and the port plays it. The splash is unchanged. So the screen
has music again and the request is no longer a track number read as a time. It is not track 7, and the reason is now visible.

**The program never fills its own table in this port.** `case 0x50` under `U2_TRACE_INT` now prints the program's track table at
`prog_base + 0xCE0`, the address the original's watch was armed on. Every play prints 24 zero bytes:

```
  CD-DA table at 400CE0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  CD-DA 30225 to 36525 (frame 548) raw 06 2D 00 08 09 00 cx FF01
  CD-DA table at 400CE0: 00 ... (same, at frames 908 and 2129)
```

So in this port the program's play range is always the one the position service just gave it, at the menu as well as at Create Character. On
the original the same table is filled at run time, which is why its requests differ by screen. The table of contents the port replies with is
correct and lands in the program's `0xBA4` buffer through the alias, so what is missing is whatever writes `0xCE0` from that buffer, and that
writer has still not run in this port.


# Running the game, and reading the machine

How to drive the FM Towns CD browser, what the menu actually is, and how the
live palette was finally captured.


## Getting into the game

**Tried:** drive the Towns OS file browser to launch Ultima II. Two things were
learned and both are load-bearing.

**The menu is a mouse-driven CD browser, not a text menu.** Tsugaru boots into a
windowed file explorer with a CD tab, the volume name `TRILOGY`, a row of five
icon cells and a second row of two. The second cell in the first row is Ultima
II. Keystrokes cannot navigate it because it wants pointer input.

**Measured**, from a 639x460 capture:
- first row of icons occupies y 100-200, second row y 205-270
- the five cells are evenly spaced with 112px pitch, at x centres
  **91, 203, 315, 427, 539**
- Ultima II is the second, centre **x=203**, click around **y=150**

**A working click**, verified by the screen changing from 8 colours in text mode
to 1104 colours with antialiasing, i.e. a graphics screen:

```
xdotool mousemove 205 190
xdotool click 1
```

**Verdict:** POSITIVE, confirmed on the live process. Clicking `(203,150)` via
`POST /api/mouse` moved the screen from the 8-colour file browser to a screen
dominated by `#0022ee` (74%), which is U2's blue and matches the palette derived
independently from screenshots in 6.10.

**Three traps, all of which produced a confident wrong answer first:**

- `/api/mouse` reported `ok: true` while doing nothing, because it added the
  window origin to coordinates `xdotool mousemove` already treats as
  screen-absolute. `ok: true` only means "xdotool did not error", never "the
  click landed". Verify with a screen diff, not the return value.
- The pointer had been clamped at `x:636` from an earlier move and sat over a
  stale window (`4194677`) rather than the live Tsugaru window. Check
  `xdotool getmouselocation` before trusting a click.
- A screenshot taken from an emulator process that had already died was mistaken
  for current state, producing a false "we are in the game" claim. The live
  screen still had the 8-colour text-mode signature. **Always diff against a
  known file-browser capture before believing anything changed**, and check that
  the window id in the capture belongs to the running process.

**Also available but not yet proven to help:** `-BOOTKEY CD` boots from the CD
without the disk-selection step, and `-CONSCMD` / `-INITCMD` run commands once
FreeTOWS OS is ready. Neither skipped the file browser, because the browser *is*
the CD boot path.

The palette is **unchanged** after reaching the graphics screen: still the same
16 entries per page. So that table is what U2 runs with, and the earlier
screenshot-derived colours agree with it.

## The game runs fast, and why

Tsugaru defaults to a **25 MHz** CPU. Every FM Towns of this generation, from the
original 1989 model through the 2F and 2H, is a **386DX at 16 MHz**. So the
emulator hands the game a machine about 1.5 times faster than the one it was
written for, and `-FREQ 16` is the closest match to real hardware.

**Fix the clock with `-FREQ 16`:**

```bash
# native, via the wrapper
EXTRA="-FREQ 16" ./run.sh

# native, raw
vendor/emulator/Tsugaru_CUI vendor/roms -CD "...ccd" -FD0 "...hdm" -FREQ 16

# container
FREQ=16 ./tools/try.sh saves/mydisk.hdm
```

The value is in MHz. `-FREQ 16` is true to the hardware. Below about 12 the
CD-ROM BIOS starts failing, which shows up as a disc that will not boot rather
than anything obviously speed related.

### Why `-FREQ` works, proved

The frequency is not cosmetic. `RunOneInstruction` in `src/towns/towns.h` converts
it directly into emulated time:

```cpp
auto passedInNanoSec=(state.clockBalance/FREQ);
state.townsTime+=passedInNanoSec;
```

So `currentFreq` scales emulated nanoseconds per instruction, and the i8253
programmable timer is driven from `townsTime` rather than from instruction count.
Lower the frequency and a timer-delay game genuinely runs slower. 25 to 12 MHz is
a 2.08x increase in emulated time per instruction. The lever is real and it is
measurable, which is why it is the answer rather than a guess.

### But the game is still fast at 16, and that is not a bug

Lowering the clock helps, and someone who has played this port on real hardware
reports the same thing the emulator shows. From a 2012 playthrough of the FM Towns
release, running on the real machine:

> Getting going is seriously hard as the monsters in the world map spawn
> extremely quickly and there is no holding back with some of the toughest
> creatures being thrown at me. It took me 6 or 7 attempts to make it to the
> nearest town with so many monsters that I was actually boxed in by them on
> occasion and unable to move.

That is not an emulation artefact. The FM Towns rebuild is faster and harder than
the originals, which matches the measured stat changes recorded in
`save-files.md`, where the published tables do not describe this port either.
Origins changed the game when they rebuilt it.

So expect fast movement and fast monster spawning even at `-FREQ 16`. If it is
unpleasant, `FREQ=12` or `FREQ=10` is available, but treat that as a comfort
setting rather than a correction.

### What is not the cause

These are the obvious suspects and both are wrong:

- **`-NOWAIT`**, which disables real-time throttling, is **not** on by default.
  Tsugaru sets `noWait=true` only until the first disk read, then switches to
  `noWaitStandby`, which defaults to `false`. After boot it throttles properly.
  Adding `-YESWAIT` changes nothing.
- **VSYNC** is not the mechanism. The throttle in `TownsThread::AdjustRealTime`
  compares emulated time against wall clock time.

One thing worth knowing if you watch the process: Tsugaru's throttle loop calls
`ProcessSound` in a `while` with no sleep, so the emulator spins at over 100% of a
core even when it is correctly waiting for real time. High CPU use is normal and
does not mean the throttle is off.

Tsugaru has an app-specific tuning table for this class of problem, but it carries
an entry for Ultima Underworld and not Ultima II, so `-FREQ` is the supported dial.

## The live palette

**Tried:** get into Ultima II and read the palette from the live machine.

**How to launch, definitively:**

The Tsugaru boot is a mouse-driven CD browser. To launch Ultima II:

- icon row 1, cell 2, x centre **203**, label baseline **y=185** (screen coords)
- **double-click**. A single click only highlights the cell. Two clicks with a
  short delay activate it.

Reproduced by a human via noVNC. `xdotool` XTEST events reach X but **do not
reach the emulated machine**, so an automated double-click via XTEST does
nothing. VNC input works. Any automation must inject at the VNC layer, not XTEST.

**Measured, palette after entering U2:**

```
Page0:000000 0000FF FF0000 000000 00FF00 00FFFF FFFF00 FFFFFF
      000000 000000 007777 FFFF55 11CC22 0022EE FF0000 FFFFFF
Page1: identical
```

This is **different** from the boot-menu palette in 6.15 and 6.16. Compare:

| index | boot menu | **in U2** |
|---|---|---|
| 1 | `000099` | **`0000FF`** |
| 2 | `990000` | **`FF0000`** |
| 3 | `990099` | **`000000`** |
| 4 | `009900` | **`00FF00`** |
| 5 | `009999` | **`00FFFF`** |
| 6 | `FF00FF` | **`FFFF00`** |
| 7 | `BBBBBB` | **`FFFFFF`** |
| 10 | `0000FF` | **`007777`** |
| 11 | `FF0000` | **`FFFF55`** |
| 12 | `CCCCCC` | **`11CC22`** |
| 13 | `555555` | **`0022EE`** |
| 14 | `00FFFF` | **`FF0000`** |
| 15 | `FF8800` | **`FFFFFF`** |

**Verdict:** POSITIVE, and this settles the question left open in 6.10, 6.15 and
6.16. The boot palette was **not** U2's palette. U2 installs its own at startup,
which confirms `EGB_palette` is called with per-application data, matching the
call-site analysis in 6.14 where every call passes `[edi+8]`.

The colours visible on screen agree with this table: `#000000` 45%,
`#007777` 35%, `#ffffff` 7%, `#ffff55` 4%, `#ff0000` 3%, `#0022ee` 1.5%. Every
one of those is a U2 palette entry.

**This is the index-to-colour mapping needed to render the extracted art in
colour.** The remaining step is to apply it: the 4bpp pixel values in the TIFFs
are indices into this 16-entry table.

**Cross-check with the screenshot work in 6.10:** that analysis independently
derived black, white, red, blue, green, cyan and yellow as dominant. This table
contains all of them. Two unrelated methods, agreeing.

## Confirming it, and the first sign of a disk problem

**Tried:** get past the title screen into playable U2.

**Measured:** after double-clicking Ultima II a title screen appears, then:

```
A WRONG DISK! Push [space]
```

Space gets past it. **`TYPE 20`** via the console works, so keyboard input
reaches the VM even though XTEST mouse events do not.

**Measured, palette once actually in game:**

```
Page0:000000 0000FF FF0000 000000 00FF00 00FFFF FFFF00 FFFFFF
      000000 000000 007777 FFFF55 11CC22 0022EE FF0000 FFFFFF
Page1: identical
```

**Cross-check against the live screen.** Colours covering more than 0.4% of the
display, and the index each maps to:

| on screen | share | palette index |
|---|---|---|
| `#000000` | 68.2% | 0, 3, 8, 9 |
| `#ffffff` | 8.5% | 7, 15 |
| `#ff0000` | 6.6% | 2, 14 |
| `#0000ff` | 3.5% | 1 |
| `#ffff55` | 3.1% | 11 |
| `#ffff00` | 2.2% | 6 |
| `#00ffff` | 2.0% | 5 |
| `#00ff00` | 1.3% | 4 |

Every on-screen colour is a palette entry. Nothing unexplained.

**Verdict:** POSITIVE and closed. This is the index-to-colour mapping. Combined
with the 4bpp pixel values in the TIFF files, the extracted art can now be
rendered in colour.

**The save disk:** `[UserDisk].hdm` is a valid FM Towns 2HD with `IPL4` boot
sector and an empty FAT. U2 rejects it as "a wrong disk". Space continues past
the prompt. Whether U2 then formats it, or whether a properly initialised disk
is needed, is *open*.

**Automation constraint, now definitive:** XTEST events (`xdotool`) reach the X
server but **not the emulated machine**. VNC input does, and so do console
`TYPE` keycodes. Any automated driving must use `TYPE`, or inject at the VNC
layer. This is why every `xdotool` click appeared to succeed and did nothing.

---

**[The colour palette](palette.md)** **[The save disk](save-disk.md)**

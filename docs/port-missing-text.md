# The copyright notice's text, and where it goes

The port draws the copyright notice's chrome and, still, none of its text. This page records what has been fixed,
what has been ruled out by measurement, and the one instrument that should finish it. It exists so the next attempt
starts from here rather than from the beginning.

## What the two screens are

Captured at 1 Hz on both sides, with the port restarted at the same moment so its first second is included.

- **The emulator's notice** shows a yellow bar reading `Ultima Trilogy` and `FUJITSU`, a white-bordered box holding
  ten lines (`Copyright (C) Origin Systems, Inc.`, the Lord British trademark lines, `Presented by FUJITSU`, the
  `TRAVERSE DEEP DARK DUNGEONS` tagline and `データを読み込んでいます！`), and a red bar at the bottom.
- **The port's notice** shows the same yellow bar, the same white-bordered box and the same red bar. The box is empty.

The chrome is layer artwork and works. The text does not.

## What was fixed, and what it changed

**The TownsOS selectors, and the font ROM behind one of them.** `PRI GDT` on the running game dumps the descriptor
table, and the port was missing three entries. Measured, with `PRI GDT`:

| selector | base | limit | what it is |
|---|---|---|---|
| `0120` | `0x80000000` | `0x7FFFF` | VRAM, the screen |
| `0128` | `0x80100000` | `0x7FFFF` | VRAM through the planar-packed view |
| `0130` | `0x81000000` | `0x1FFFF` | sprite RAM |
| `0138` | `0xC2100000` | `0x41FFF` | **the font ROM** |
| `0140` | `0xC2200000` | `0xFFF` | PCM wave RAM |
| `0148` | `0xC2000000` | `0x7FFFF` | |

`0138` is why the box was empty: the kit already mapped `0xC2100000` onto `Machine::font`, matching the emulator's
`TOWNSADDR_FONT_BASE` and its linear `0x3FFFF` mask, but **nothing loaded the ROM**, so every glyph read returned zero
and the text was drawn as nothing. `FMT_FNT.ROM` is loaded at start-up now.

The correlation that pointed there: the port reported one unsatisfied segment load at frames 30, 60 and 90, and three
at frame 105, the frame the notice is drawn.

**The ANK font's physical window.** Physical `0xCA000` is the 8x8 ANK block reading font ROM offset `0x3D000`, and
`0xCB000` is the 16x16 block reading `0x3D800` (emulator's `townsdef.h`), which is not the linear mapping. Those pages
sit inside the low 768 KB that `boot_towns` maps as RAM, so `Machine::unmap_font_window()` drops them and the font cases
answer instead.

**Measured effect of both:** the notice now draws two lines it never drew before, the top bar's
`Ultima II - Revenge of Enchantress -` and the bottom red bar's `データを読み込んでいます`. Text rendering works. The
ANK window changes 2,718 bytes of VRAM at the notice frame, as one to three byte runs, so that path is genuinely used.

## What is ruled out

| candidate | how it was tested | result |
|---|---|---|
| the frame rate makes the stage too short to see | 10 Hz capture during startup | the box sits on screen for seconds |
| the notice is printed through TBIOS | `U2_TRACE_INT=1` over 130 frames | only `int 21h` file I/O, plus one `90h` and one `93h` per boot |
| the text is stored past the 512 KB VRAM window | `U2_WATCH=80080000:20000` | arms and never fires |
| a text grid is in VRAM and the renderer skips a plane | `U2_VRAM_DUMP` at frames 90, 105, 150 | no text grid anywhere in the 512 KB |
| the palette maps the text to black | `U2_PALETTE=1` at notice and title | identical, with `ffffff` at index 7 |
| an asset fails to load | `U2_TRACE_INT=1`, the file opens | every asset opens |
| the sprite/pad page is the missing layer | `U2_VIDEO=1` | at the notice `layer_ctrl` is `0c`, so the second layer is **off**, and every sprite register is **zero**: the engine never ran |
| `vreg[1]`'s differing bit is a mode change | the CRTC dump plus the kit's source | `0x28` is the machine's reset value and `0x20` selects palette bank 1, which is identical to bank 0 |
| the twelve unimplemented ports `0x0E51`–`0x0E71` | the emulator's `townsdef.h` | they are the **MIDI card** registers, not video |
| the notice strings are in the game binary | `strings -n 5` for `Presented by`, `Trademarks`, `TRAVERSE`, `Origin Systems` | **zero hits each** |
| they are in an extracted asset or on the disc | `grep -rlia` across `extracted/` and the whole ISO image | **zero hits** |
| the 20-dot font `FMT_F20.ROM` draws it | mapped at `0xC2180000`, loaded, frame re-rendered | **byte-identical frame** (`76fb77ab`), so it is never read during the notice |

## Two more ruled out, and one real defect found

**Black text on a black background is not it.** The port's sixteen palette entries at the notice were listed and the
machine's read with `PRI PALETTE` on the running game for the same screen. Four indices are black on both sides, 0, 3,
8 and 9, and the game only sets 10 to 15. Text drawn in index 3, 8 or 9 would be invisible on the machine too, and the
machine shows white text, so the palette is not hiding it. The text is not being drawn.

**A real defect fell out of that comparison.** The four entries the game sets disagreed:

| index | machine | port before |
|---|---|---|
| 10 | `007777` | `0A7878` |
| 11 | `FFFF55` | `FFFF50` |
| 12 | `11CC22` | `14C828` |
| 13 | `0022EE` | `0028E6` |

The machine's values are exact `n * 0x11` nibble expansions and the port's were the game's raw bytes, because the kit
copied the written component straight into the palette. The emulator expands it, in
`TownsCrtcBase::AnalogPalette::Set16`: `v &= 0xF0; v |= v >> 4;`, while `Set256` stores the byte unchanged. The kit now
does the same and the two tables agree entry for entry. A palette a few units out per channel is invisible in a
screenshot, which is why it survived every visual check and was caught only by comparing the tables.

## The second screen, and what it showed

Pressing a key on the settled title screen advances the game, and the port does it: with `U2_KEYS=400:1e61` the run
reports `1 served, 0 still queued` and the frame changes. Return does nothing, `1c0d` leaves the frame identical to a
no-key run, so the wait is for a specific key rather than any key. `Down` is scan `0x50` and moves the menu's red
highlight, which is the same queue: the guest reports `2 served`.

The frame after it has the same symptom on a different screen: the title artwork stays and a white-bordered box with
a blue interior appears at the bottom with nothing written in it. Measured there, `layer_ctrl` is `0f` rather than
the notice's `0c`, so both graphics layers are enabled and both are composited, and the interior is palette index 13,
`0022EE`, not black. Rendering layer 1 alone puts 2,348 white pixels inside the box region and they are picture data,
not glyphs: no character shapes and no text rows. So this box is empty for the same reason as the notice's, on a
second screen, which is the second breakpoint site this was looking for.

## What the watch showed about the menu

Driven headlessly, the menu is reachable and live: `U2_KEYS=400:1e61` advances from the splash and `Down` (scan
`0x50`) moves the highlight. The guest takes both, reporting `2 served, 0 still queued`, and the frame changes.

**Where the highlight redraw writes.** Diffing VRAM at frame 700 against frame 760 with one Down pressed: **4,640
bytes change, offsets `0x2d858` to `0x316e8`**, which renders as a 288 by 32 pixel band at x 219, y 397. One menu row.

**Who writes it.** With the watch armed at frame 699 and covering `0x8002d000` for `0x5000`:

| writes | width | instruction |
|---|---|---|
| 1,024 | 4 B | `0110:00008211` |
| 128 | 4 B | `0110:000081df` |
| 104 | 4 B | `0110:0000409e` |
| 52 | 4 B | `0110:00003d2e` |

The remainder are eight-hit fills. **Every one is four bytes wide and comes from selector `0110`, which is TBIOS.**
So the highlight is redrawn by a TBIOS fill, and the labels are not redrawn on a move at all.

**And they are not drawn at menu entry either.** The menu's first draw, watched from frame 300, is 22,538 writes,
all four bytes wide, all from `0110`, and **not one from selector `000C`, the game's own code**. Widened to cover both
VRAM windows (`0x80000000` for two megabytes) it hit the cap at 60,000 hits with still nothing but four-byte TBIOS
fills. Sprite and pad RAM (`0x81000000`) records **zero** writes.

**The conclusion this supports.** No byte or word write to VRAM ever happens, on any of the three screens, so no glyph
rasteriser runs at all. The text is not hidden, not transparent and not on a layer the renderer skips: nothing
rasterises it. That is a narrower question than the one this page started with, and it is the right one.

**Font fetches are not the cause.** The ANK window at physical `0xCA000` reads real font data, `U2_DUMP=ca000` giving
`00 00 00 00 00 00 00 00 e0 80 ea 2a ee 0a 0a 00 ...`, so a glyph fetch returns glyph bytes rather than zeros.

## Two instrumentation defects this exposed

Both made earlier watches report a confident nothing, and both are fixed.

- The linear write watch **stopped after 64 hits, silently**. Four different watches over four ranges reported
exactly 64 lines, all the same start-up fill, which reads as "nothing else writes this range". It is `U2_WATCH_MAX`
now and says `capped at N hits` when it stops.
- It could only be **armed at start-up**, so its budget went on the fills that clear the screen rather than on the
operation under study. `U2_WATCH_AT=<frame>` arms it at a frame. Arming one frame late also caught nothing, because
the frame hook runs at the vsync after the frame it belongs to: the press at frame 700 needs the watch armed at 699.

## How the game reaches TBIOS, and why there is no text import

The question this section answers was: find the game's far calls into TBIOS, compare that import list against the
TBIOS addresses that actually ran, and see whether a text entry is imported and never draws.

**The premise is wrong, and measurably so.** There is no list to compare.

- Scanning the 1,072,398-byte image for `9a <off32> <sel16>`, the 32-bit far call with a constant selector, finds
  **103** such instructions and **not one** of them targets selector `0110`.
- Scanning for a stored far pointer, a dword offset under `0x20000` followed by the two selector bytes `10 01`, finds
  **zero**.

So the game does not name TBIOS in an instruction and does not hold a far pointer to it in data.

**What it does instead.** `U2_TRACE_FAR=1` logs every distinct far transfer into selector `0110` with the caller's
`CS:EIP` and the registers, from `x86_far`, which is the only way into the recompiled TBIOS. Over the splash and the
menu that reports **23 distinct call sites**, all from the game's segment `000C`, landing on two TBIOS offsets:
`0110:00000280` and `0110:000110B0`. The first is a **dispatcher**: the function is not a separate entry point, it is
a number in the registers (`EAX` holds values from `0x00000600` to `0x00116201`).

That is why nothing in the binary looks like a text routine and why every `strings` search failed. A drawing request
is a number passed through one door, so "which TBIOS function is imported but draws nothing" cannot be answered by
reading the image: the function number only exists at run time, in a register, on that dispatcher call.

The trace itself is the instrument for the next attempt, and it is bounded: one line per call site, not per call.

## Which dispatcher function draws, and the deduction that follows

With every dispatcher call logged and each watched write carrying the `EAX` of the call in flight, 520 frames of
splash and menu give **587 calls, 82 distinct `EAX` values**, and the writes fall out like this:

| `EAX` | writes | through |
|---|---|---|
| `00006002` | 11,008 | `0110:0000409e`, `0110:00004195`, `0110:000081df` |
| `0000469e` | 6,792 | `0110:000081df`, `0110:00008211` |
| `00002b01` | 2,560 | `0110:000081df`, `0110:0000817d` |
| `00006016` | 1,280 | `0110:0000409e`, `0110:00004195`, `0110:000081df` |
| `0000466b` | 668 | `0110:00008211`, `0110:000081df` |
| `0000419d` | 132 | `0110:00003d2e` |
| `0000415a`, `0000419f` | 48 each | `0110:00008211`, `0110:00003759` |

**Only eight of the eighty-two touch VRAM at all.** The other seventy-four are called and draw nothing, which is
normal: most of the dispatcher's functions are DOS and file work, not pixels.

The menu's own drawing is one call site, `000c:00000825`, issuing `0x415a`, `0x419d` and `0x419f` with coordinates in
`EDX` (`0x15c` and `0x1e0`), and `000c:00000a99` issuing `0x6002` and `0x6016` with a pointer in `EBX` and packed
coordinates in `EDX` (`0x000c0024`, `0x000c000e`). The buffer at `EBX` plus the data segment base, linear `0x47af1d`,
is a table of small dwords rather than a string, so `0x6002` is a block or box primitive, not text output.

**And this is the deduction worth carrying forward.** The machine runs the same program, so it issues the same
calls in the same order. Therefore whatever draws the menu labels on the machine is **one of these same eight
functions**, called from the same site. The port is not missing a call. It is calling the function and getting
different pixels out, which moves the fault from control flow to **the data or device that the routine reads**: a font
table, or a decode the routine expects the environment to have prepared.

## The machine capture, and why it is not done yet

The comparison this page wants is the machine's VRAM against the port's at the copyright notice, because that is the
one screen both sides reach. Two things are now in place and one thing is missing.

**In place: the read path.** `MD 120:<off> 256` returns sixteen lines of 255 bytes, so **4,080 contiguous bytes per
request**, which is the largest read it gives. The window `0x20000` to `0x40000` is therefore 32 requests, and it
completed: 131,072 bytes in `/var/tmp/machine-notice-20000-40000.bin`.

**Missing: the machine was not on the notice.** The screenshot taken at the same pause shows **TownsMENU V1.1L20**, and
the byte histogram settles it: the machine's window is `0x88` x 59,454 and `0xFF` x 54,427 while the port's is `0x99`
x 71,274 and `0x00` x 53,072. The two captures are of different screens, so the diff is meaningless and has not been
reported as a result.

**The two mistakes, both worth not repeating.**

- Pausing on a clock does not work. The port reaches the notice at frame 105, about 1.75 s, and the machine takes
  several seconds of disc access first. A `sleep` long enough for the machine's boot is long enough for it to have
  moved past the notice.
- `CS:EIP=000C` is **not** evidence that the game is running. TownsMENU is a protected-mode program too and runs under
  the same code selector, so a state line showing `000C` and a linear address in the program's range proves nothing.
  `python3 /opt/u2/u2flow.py --status` is the check, and it reports `in ultima2` honestly.

The next version has to pause on a **screen signature** rather than a delay, and `tools/u2flow.py` already contains the
machinery: `towns_menu_showing` and `game_menu_state` recognise screens from framebuffer pixels. Reusing them is the
whole fix.

## What that leaves

The text is not an ASCII string in the executable, not a plain string in any asset, and not either font ROM. It is
almost certainly stored as **character codes against the game's own glyph table**, which is why no `strings` search
finds it, and it is drawn by code that either does not run in the port or draws where the CRTC window does not show.

## The instrument for the next attempt

Stop reading 512 KB and guessing offsets. Let the emulator name the writer:

1. put the notice on screen, pause, and `ADTR 120:<off>` for an offset inside the box, to get the physical address
2. `BRKON MEMW <phys>` and run; the notice is drawn seconds after the double-click, so the breakpoint fires with the
   `CS:EIP` of the routine that writes those pixels
3. ask the port the same question: does it execute that address, and does its module contain it

One address and one stack, instead of a dump and an inference.

## What the fixes are worth on their own

Two real defects were found and fixed on the way to this page, independent of whether the box ever fills in: the port
had no font ROM, so every glyph fetch in the program returned zero, and it had no descriptors for the TownsOS windows
the program uses. Both are asserted now, the selectors and the font load by `tools/portcheck.js`, so deleting one fails
the gate instead of going quiet.

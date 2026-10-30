# The copyright notice's text, and where it goes

The port draws the copyright notice's chrome and, still, none of its text. This page records what has been fixed,
what has been ruled out by measurement, and the one instrument that should finish it. It exists so the next attempt
starts from here rather than from the beginning.

**Status after the kanji font fix. The game menu is solved and its VRAM now matches the machine's capture byte for
byte. The notice's box is not, and the page below is the record of that hunt rather than a description of the current
build.** The notice screen was last observed before the fix and has not been re-observed since, so the opening
sentence is an earlier reading and not a claim about this build. The last section is the finding that closed the
menu: two-byte characters are fetched through a far pointer at `TBIOS:0x1E8` which pointed at a blank part of the
character ROM, and the font is `\UTFONT.FNT` on the disc rather than any ROM.

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

## The machine and the port, byte for byte on the same menu

The machine was put on the game menu with `u2flow.py` **without** `--journey`, which stops there by design after
pressing space once. Both sides then hold the same screen, and their VRAM differs by **2,733 bytes of 524,288, or
0.52%**. Everywhere else is identical, including the exact counts of the palette values `0x99` (120,464 both sides)
and `0xEE` (5,215 both).

The whole difference is **two text rows**. The blue background rows line up exactly on both sides, `y348` to `y363`
and `y380` to `y413`, and the port holds a flat **160 blue bytes on every one of them**, a solid fill. The machine
holds 160 only on the edges and drops to **74 to 110** in rows `y384` to `y394` and `y400` to `y410`, because glyph
pixels replace blue pixels there. One row, `y388`, side by side:

```
machine: f0 df | dd dd dd dd dd dd dd dd dd | bb bb dd dd bb bb bb dd bd bb bb bb bb dd dd dd dd bb db dd bd ...
port:    f0 df | dd dd dd dd dd dd dd dd dd | dd dd dd dd dd dd dd dd dd dd dd dd dd dd dd dd dd dd dd dd dd ...
```

The glyphs are **palette index 11** (`0xBB`) on a background of index 13 (`0xDD`), and the port draws the background
and nothing else. That is the missing text, located to the byte.

**What this rules out.** The port does write those rows: 9,340 writes into `0x8002C000` for `0x4000` and 9,764 into
`0x80030000`, all from TBIOS (`0110:000081DF`, `0000409E`, `00008211`, `00004195`, `000089F2`). So the box is drawn,
the geometry is right, and the text inside it is not. This is not a misplaced screen, a wrong page, a skipped layer
or a missing call: it is the same function producing the fill and no glyphs.

**The font-window gate is not the cause either.** The emulator selects KVRAM or the ANK font for the physical window at
`0xC0000` with port `0xFF99`, alias physical `0xCFF99`, as `ANKFont = data & 1`. The kit implements neither, which made
this the leading suspect. But a watch over `0xCFF00` to `0xD0100` for the whole run records **zero writes**, so the
program never touches that register here.

**Where that leaves it.** The drawing code runs and produces no glyph pixels, so what TBIOS reads when it looks up a
character is empty. That points at the string or the glyph table the routine reads from RAM, not at control flow, and
it matches the shape of the six earlier walls in this project: machine state the port fabricates.

## Two corrections to the driving, both measured

- **Space does not dismiss the splash in the port.** With `U2_KEYS=400:3920` the run ends still showing the title
  artwork and holds 84 bytes of blue, where `400:1E61` (`'a'`) reaches the menu and holds 8,320. The machine takes
  space, the port takes `'a'`. That is a port behaviour worth its own item.
- **`MD 120:<off>` reads ordinary memory once the program is running.** A Phar Lap extender installs its own GDT, so
  selector `0120` no longer means TownsOS's VRAM window: the first capture came back as x86 machine code
  (`c1 e2 10 5b 66 f7 e3 ... c3`). `MD 0:<linear>` addresses from base zero and VRAM is linear `0x80000000`, which is
the form that works. Two captures were wasted on this, and the second was nearly reported as a real difference.

## How the machine draws a glyph, and why the port never does

The pixel that is index 11 on the machine and index 13 in the port was watched through a physical memory breakpoint,
`BRKON MEMW 8003005A`, while pressing Down on the menu redraws the row. Ten presses, ten breaks, one instruction:
**`0110:000065A6`**, which is the byte after `xor [es:edi], eax` at `0110:000065A3`.

That is the mechanism, and it explains the odd values in the machine's row. Index 11 is not written as a colour. The
glyph bitmap is **XORed into the background**: `0xDD ^ 0x66 = 0xBB`, `0xDD ^ 0x60 = 0xBD`, `0xDD ^ 0x06 = 0xDB`, which
is exactly the mixture of `0xBB`, `0xBD` and `0xDB` those rows contain.

The instruction sits in an eight-byte function at `0x659C`, one of four chosen from a table at `0x622C`:

| entry | first bytes | mode |
|---|---|---|
| `0x6560` | `not eax` / `mov ecx,[es:edi]` / `and ecx,eax` / `mov [es:edi],ecx` | masked copy |
| `0x6578` | `and eax,[gs:ebp+0x10c]` / `or [es:edi],eax` | masked OR |
| `0x6584` | `mov ebx,eax` / `not ebx` / `and ebx,[es:edi]` / `or eax,ebx` / `mov [es:edi],eax` | masked AND |
| `0x659C` | `and eax,[gs:ebp+0x10c]` / `xor [es:edi],eax` | masked XOR |

So TBIOS's text renderer picks a pixel operation from a draw mode held in its own state (`gs:[ebp+0x10A]` flags and
`gs:[ebp+0x10C]` mask) and plots the glyph through it.

**The port never executes any of the four.** Every watched write in the menu's draw comes from `0110:00008211`,
`000081DF`, `00003D2E`, `00004195`, `0000409E`, `000089F2`, `0000E5C80` or `000019CA`, and not one is inside
`0x6560`-`0x65B0`. The functions **are** in the port's recompiled TBIOS module ( `0x659c` is in
`build/port/recomp/p_tbios_table.cpp`), so the code is not missing: the call to it is not made.

Yet the port does read the font: `U2_RDWATCH=c2100000:40000` counts 2,084 reads by frame 400 and 2,572 by frame 520,
so the menu's own draw accounts for **488 glyph lookups**. Glyphs are fetched and never plotted.

**One measurement that has to be re-read before it is believed.** `ADTR 0110:0000659C` on the machine reports linear
`0x000204D0`, which implies a segment base of `0x19F34`, not the `0x100000` the port assigns to selector `0110` and
not the `0x100000` an earlier session measured at boot. Either the extended loader reloads that descriptor after boot,
or the console is translating through a different table. It is unresolved, and it matters: every offset in this
section is an offset into whatever `0110` means at the time.

## The mode selector, read out of TBIOS

The four pixel writers are chosen from a **32-entry table at `0x61C4`**, and the code that chooses is at `0x6120`:

```
mov  ecx,[gs:ebp+0x14]        ; a value from TBIOS's own state block
sub  eax,eax
cmp  byte [gs:ebp+0x300],0
jnz  short
inc  eax
test byte [gs:ebp+0x10a],2
jnz  short
lea  eax,[eax+ecx*2+1]
test byte [gs:ebp+0x10a],1
jnz  short
inc  eax
mov  edi,[cs:eax*4+0x61C4]    ; the chosen writer
mov  [gs:ebp+0x314],edi
```

With `ecx = 14` and both flag bits clear the index is `2 + 2*14 = 30`, and entry 30 is `0x659C`, the masked XOR. So
**the draw mode is a value at `gs:[ebp+0x14]`**, and the plot routine is that table entry. Entries 26 and 31 are the
masked copy at `0x6560`, 28 is masked OR, 29 masked AND, 30 masked XOR.

That is the shape of the fault to look for next: the port has to be reading a different value from that state block,
which selects a different writer, and the menu's text is drawn by a mode that does not lay down the glyph. It is also
where the `ADTR` observation above starts to matter, because `gs:[ebp+...]` means whatever GS and EBP are at the time.

## The emulator's debugger, and how to turn it on

`BP` answers `Error: Debugger is not enabled.` because the debugger is a **runtime** feature, and features are switched
on with `ENABLE <name>`, not by naming them. The console command that works is:

```
ENABLE DEBUG
  >Debugger is ON.
BP 0110:0000659C
BL
  >=>00 0110:0000659C
```

`DEBUG` alone answers `Do what?`, and so does every other feature name (`IOMON`, `CMDLOG`, `AUTODISASM`):
`TownsCommandInterpreter::Interpret` only consults `primaryCmdMap`, while the feature names live in `featureMap` and are
read only by `Execute_Enable`, which requires `argv[1]`. This is worth recording because the error message names the
missing state and not the missing syntax, and two sessions lost time to it.

## What the debugger then showed

Breaking on `0110:0000659C` while the menu redraws gives the whole plot in registers:

```
CS:EIP=0110:0000659C  LINEAR:000204D0
EAX=0000000F  EBX=018701D0  ECX=0000003A  EDX=01860187
ESI=FFFFFFFF  EDI=00030EE8  EBP=0007A7D8  ESP=0011E994
```

- **`EDI = 0x00030EE8`** is the VRAM offset being written, which lands in the glyph row at `y384`. So ES is the VRAM
  segment and the plot address is a plain offset, exactly as the row analysis said.
- **`EAX = 0x0F`** is the pixel bits before the mask is applied, so one glyph cell contributes four bits at a time.
- `EBP = 0x0007A7D8` is TBIOS's state block, the `gs:[ebp+...]` the mode selector reads. With GS base zero that address
  holds code rather than state, so **GS has a non-zero base and has to be measured before those fields can be read**.
- `HIST` at the break shows the instructions immediately before the plot: `0110:6537`, `653B`, `653D`, `6542`, `654A`,
  `654D`, `6550`, `6553`. **The renderer is the routine at `0x6500` to `0x6560`**, in the same TBIOS block as the
  four pixel writers, and it selects a writer and calls it.

That matters because the port's font reads come from a **different** routine, `0110:0000F1C4` with siblings at `F1DC`
and `F209`. The machine draws its labels through `0x6500` and the port reads glyphs through `0xF1C4`, so the two sides
are not taking the same text path at all: one of them is drawing and the other is doing something adjacent to it.

## The text is drawn, one row too high

The port was assumed never to reach the glyph renderer. That was wrong, and a function-entry trace settled it: the port
calls `0110:0000659C` at **frame 404**, and the register state on entry is almost identical to the machine's at the
same call.

| register | machine | port |
|---|---|---|
| EAX (pixel bits) | `0000000F` | `0000000F` |
| ECX | `0000003A` | `0000003A` |
| ESI | `FFFFFFFF` | `FFFFFFFF` |
| EBP (state block) | `0007A7D8` | `0007A7D8` |
| EBX | `018701D0` | `016D01D0` |
| EDX | `01860187` | `000E016D` |
| EDI (VRAM offset) | `00030EE8` | `0002DAE8` |

The renderer computes `EDI = movsx(dx) * [ebp+0x20] + [ebp+0]` with the pitch `[ebp+0x20] = 512`, and the low 16 bits
of `EDX` are that `dx`. On the machine `dx = 0x0187 = 391` and `EDI = 391*512 + 232`; in the port `dx = 0x016D = 365`
and `EDI = 365*512 + 232`. **The x byte is 232 on both sides and the row differs by exactly 26.**

With a 26-pixel text line, `y = row*26 + 1` puts the machine's glyph at **row 15** and the port's at **row 14**. So the
port draws every menu label exactly one text row higher than the machine does, which is why the box looks empty: the
labels are 26 pixels above the box they belong in, not absent.

That changes the question from "why is no text drawn" to "why is the text cursor one row short", which is a state
difference of the kind this project has hit six times before, and it is a much smaller question.

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

## Solved: the kanji font is on the disc, not in a ROM

The page above spent a long time asking which routine fails to run. The answer is that every routine runs. The port
executes the same text engine as the machine, with the same arguments, and reads a font that is empty.

**The pointer.** TBIOS keeps two far pointers to character bitmaps in its own image, at `CS:0x1E0` for the
single-byte ANK font and `CS:0x1E8` for two-byte kanji. The handler reads them with a CS override
(`2e c5 05 e8 01 00 00` at `0xF3EA` is `LDS EAX, CS:[0x1E8]`), adds the glyph index scaled by 32, and copies 32
bytes into a stack buffer.

**What each side holds in that slot**, read on the machine with `MD 0:1A11C` (selector `0110` at base `0x19F34`,
so `CS:0x1E8` is linear `0x1A11C`) and in the port with `U2_STOP_AT` and `U2_STOP_DUMP=1001e8`:

| side | `CS:0x1E8` | what that resolves to |
|---|---|---|
| the disc's `TBIOS.BIN`, and the port | `00006400:0138` | the character ROM at `0x6400`, which is blank there |
| the running machine | `0003B7E1:0040` | low RAM, selector `0040` base 0 limit `0x3FFFFF` |

`PRI GDT` on the machine gives `0040:LnBase=00000000 Lim=003FFFFF`, so the machine's pointer is a flat view of a
buffer at linear `0x3B7E1`. TownsOS replaces the disc's placeholder at boot. The port boots TBIOS without TownsOS's
loader, so it kept the placeholder.

**Why the symptom looked like two different faults.** Single-byte characters take the path at `0xF2D0`, which uses
`CS:0x1E0` and reads the ANK block at ROM offset `0x3D800`, and that data is real in `FMT_FNT.ROM`. So the port's
top bar and red bar text drew correctly. Two-byte characters take `0xF3F8` and read through `CS:0x1E8`, so every
Japanese label rendered from an empty font. The copyright notice's box and the game menu are the two screens where
that is visible, which is why they looked like one defect and behaved like two.

**Where the font comes from.** Not a ROM. Searching the five vendored ROMs for the first glyph's bytes found nothing.
Searching the disc's 140 files found `UTFONT.FNT`, 9,184 bytes: two banks of 94 records of 48 bytes, one per code,
with the bitmap at offset 5. The offset is measured, not inferred: the 32 bytes the machine copies for code `0x752F`
are `00 00 07 e0 1f f8 3e 7c ...`, which is `UTFONT.FNT` `0x2a5` and not `0x2a7`.

**What the port does now.** It reads `\UTFONT.FNT` from the disc, packs the 188 glyphs (94 per bank, 32 bytes each,
headers stripped) at linear `0x3B7E1`, defines selector `0040` as TownsOS defines it, and writes `0003B7E1:0040` into
the TBIOS image at `0x1001E8`. Nothing else in the text path changed.

**The confirmation, which is a byte count and not a screenshot.** Against the machine's menu capture,
`U2_VRAM_DUMP` at frame 900:

| build | bytes differing, rows 344 to 416 (the menu box) |
|---|---|
| before | 2,733 |
| bitmap offset +7 | 1,435 |
| bitmap offset +6 | 3,396 |
| bitmap offset +5 | **0** |

The remaining difference over the whole 512 KB is 8,765 bytes in rows 764 to 949, a region outside the menu box
that the port leaves zero. It was present before this change and is not explained by it.

**What that remainder is, and why it is not a rendering fault.** It is the one characterisation this comparison
needed and the first reading of it was wrong twice, so it is recorded as measured.

Rows 764 to 949 are VRAM page 1, rows 252 to 437 in page-1 terms, and `U2_VIDEO=1` reports `display_page 0` at the
menu, so the region is off screen while that holds. Its ink bounding box is identical on both sides, x 58 to 687,
and of the pixels inside it 34,469 carry ink on both sides, 8,474 carry ink only on the machine and 15 only in the
port. Every differing pixel is one of indices 1, 4, 5 or 7, which are the levels a 4-bit dither is built from.

The block is not static during the run. Sampling it frame by frame gives three states that recur: 15,270 non-zero
bytes around frames 200 and 350, 16,543 from frame 401 onward, and 21,476 at frame 300. The machine's capture is
the 21,476 state and the port reaches it exactly, **0 bytes differing**, at frame 300. From frame 400 onward the
block never changes again, so the port is not animating something the machine leaves still: both sides wrote the
same dither into an off-screen page at the same point in their own timelines, and the two captures caught different
moments of it.

The writer is `0110:00004267`, a TBIOS dithered fill, and `U2_WATCH=8005f800:10000` records it putting
`00000000`, `55555555`, `05000500` and `00050000` into that rectangle, which is what a shaded panel's half-tone
looks like. It runs at the splash and again at the menu draw. The port and the machine disagree about the dither
level per pixel, not about the shape, the position or the colour.

So the honest statement is a characterised difference, not a match and not a fault: the menu screen's displayed
page is byte-identical, and an off-screen page differs in a half-tone fill whose phase depends on when the capture
was taken. It would matter only if the game flipped `display_page` to 1 while this fill was on screen, which has
not been observed.

**Two things this cost, worth not repeating.**

A flag: the machine's debugger had been left by an earlier session with monitor-only breakpoints armed on CRTC and
I/O events, and `RESET` does not clear them. Every `RUN` stopped on the first one, which reads as the program
halting. `DIS CRTC2MON` and `DIS IOMON` fixed it, and `ENABLE DEBUG` does not turn monitors on, so a machine that
stops on the first frame is a reason to list features rather than to distrust the program.

A gap in the port's instrument: `U2_STOP_AT` had no frame gate, so it always fired at start-up. TBIOS's text
renderer is entered 14 times before the menu draws, and the first entry draws the copyright notice, so every
comparison was of the wrong moment and several of them looked like real differences. `U2_STOP_FRAME=<n>` now skips
hits before frame n, and the whole chain was then compared at the same call: `0xF190` on entry, `0xF3F8` at the
character fetch, `0xF447` after it, `0xF523` at the blitter call. Registers, segment bases and the state block agree
at all four on both sides.


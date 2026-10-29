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
no-key run, so the wait is for a specific key rather than any key.

The frame after it has the same symptom on a different screen: the title artwork stays and a white-bordered box with
a blue interior appears at the bottom with nothing written in it. Measured there, `layer_ctrl` is `0f` rather than
the notice's `0c`, so both graphics layers are enabled and both are composited, and the interior is palette index 13,
`0022EE`, not black. Rendering layer 1 alone puts 2,348 white pixels inside the box region and they are picture data,
not glyphs: no character shapes and no text rows. So this box is empty for the same reason as the notice's, on a
second screen, which is the second breakpoint site this was looking for.

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

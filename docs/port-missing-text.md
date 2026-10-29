# The copyright notice's text, and where it goes

The port draws the copyright notice's chrome and none of its text. This page records what has been measured,
what has been ruled out, and the one lead that is left. It exists so the next attempt starts from here rather
than from the beginning.

## What the two screens actually are

Captured at 1 Hz on both sides, with the port restarted at the same moment so its first second is included.

- **The emulator's notice** shows a yellow bar reading `Ultima Trilogy` and `FUJITSU`, a white-bordered box
  holding ten lines of text (`Copyright (C) Origin Systems, Inc.`, the Lord British trademark lines,
  `Presented by FUJITSU`, the `TRAVERSE DEEP DARK DUNGEONS` tagline and `データを読み込んでいます！`), and a red
  bar at the bottom.
- **The port's notice** shows the same yellow bar, the same white-bordered box and the same red bar. The box
  is **empty**.

So the chrome is layer artwork and works. The text is not.

## What is ruled out

Each of these was a plausible cause and each was measured.

| candidate | how it was tested | result |
|---|---|---|
| the frame rate makes the stage too short to see | 10 Hz capture during startup | the box sits on screen for several seconds, so it is not a capture artefact and not a speed artefact |
| the notice is printed through TBIOS | `U2_TRACE_INT=1` over 130 frames | only `int 21h` file I/O, plus one `90h` and one `93h` per boot. No text call |
| the text is stored past the port's 512 KB VRAM window | `U2_WATCH=80080000:20000` | the watch arms and never fires, so nothing is written there |
| a text grid is in VRAM and the renderer skips a plane | `U2_VRAM_DUMP` at frames 90, 105, 150 | there is no text grid anywhere in the 512 KB. `0x50000`–`0x70000` is zeros plus runs of `aa`, `dd`, `bb` and `ff`, with a 0.0% printable-ASCII share |
| the palette maps the text to black | `U2_PALETTE=1` at the notice and at the title | both palettes are identical and include `ffffff` at index 7, so a white glyph would be visible |
| an asset fails to load | `U2_TRACE_INT=1`, looking at the file opens | every asset opens: `HEADTTL.TIF`, `ULTIMA.FMB`, the map, player, enemy and dungeon art, and every `.SND`. No failure |

## The sprite/pad theory, and why it is wrong

`U2_VRAM_DUMP` at frame 90 and frame 105 shows the sprite pages change from **completely empty** to
**35,373 non-zero bytes at `0x40000` and 29,713 at `0x60000`** exactly when the notice appears. That looked like the
answer: the pad page is where `Machine::draw_sprites()` draws, and `render()` composites only the two graphics layers.

**`U2_VIDEO=1` refutes it.** Printing the display state at the three frames:

| frame | what it is | `layer_ctrl` | `vreg` | sprite page / regs |
|---|---|---|---|---|
| 90 | before the notice, black | `00` | `15 08` | page 0, all registers zero |
| 105 | the notice | `0c` | `15 28` | page 0, all registers zero |
| 150 | the title | `0f` | `15 08` | page 0, all registers zero |

Three things follow, and they kill the sprite theory:

- `layer_ctrl` bit `0x03`, the second layer, is **off** at the notice, so the pad page is not displayed
- every sprite register is **zero** and the sprite engine never ran, so nothing was drawn into that page either: the
  35 KB at `0x40000` is pattern data the program loaded, not sprites it drew
- at frame 90 `layer_ctrl` is `00`, which is why the screen is black: nothing was enabled yet, rather than something
  failing to render

So the frame is composed from **layer 0 alone** (`0x0C`), the box and bars are in layer 0, and the text is not in VRAM
anywhere. The write never happens.

## The lead that is left, and it is a strong one

Measured by counting the port's own unsatisfied segment loads at increasing frame counts:

| frames | what is on screen | segment loads with no descriptor |
|---|---|---|
| 30 | black | 1 |
| 60 | black | 1 |
| 90 | black | 1 |
| 105 | the notice | **3** |
| 150 | the title | 3 |

**Two new selector loads appear at exactly the frame the notice is drawn**, and the port has no descriptor for them:
`0128`, `0138`, `0140`. A selector the port cannot resolve is a silent base of zero, which is the same defect class as
the screen selector `0120` that had to be defined before the port could draw anything at all. Whatever the notice draws
through those selectors goes somewhere other than the layer the screen is showing.

The font path was checked and is not it on its own: the kit already maps the font ROM at linear `0xC2100000` out of
`Machine::font`, which nothing loads, but the game does **not** read that address during the notice: no `no device` read
is logged in 105 frames. If those two selectors are how it reaches the font, the base is the thing that is missing.

`vreg[1]` is ruled out as well. `0x28` at the notice is the machine's **reset** value, set in `towns_mem.cpp`, and bit
`0x20` selects palette bank 1, which is byte-identical to bank 0. So that difference is not the cause.

## Solved: the selectors, and the font ROM behind one of them

The unsatisfied segment loads were the cause, and `PRI GDT` on the running game gives the descriptors outright. This is
the whole TownsOS window table the program uses, measured rather than guessed:

| selector | base | limit | what it is |
|---|---|---|---|
| `0120` | `0x80000000` | `0x7FFFF` | VRAM, the screen |
| `0128` | `0x80100000` | `0x7FFFF` | VRAM through the planar-packed view |
| `0130` | `0x81000000` | `0x1FFFF` | sprite RAM |
| `0138` | `0xC2100000` | `0x41FFF` | **the font ROM** |
| `0140` | `0xC2200000` | `0xFFF` | PCM wave RAM |
| `0148` | `0xC2000000` | `0x7FFFF` | |

`0138` is the answer. The kit already maps `0xC2100000` onto `Machine::font` (`TOWNSADDR_FONT_BASE` from the emulator's
`townsdef.h`, mapped linearly through a `0x3FFFF` mask, which the kit matches), **but nothing ever loaded the ROM**, so
every glyph read returned zero and the text was drawn as nothing. That is the empty box exactly: the box and bars are
layer art, the text is a font fetch, and the fetch was zeroes.

**What changed in the port:** the five selectors above are now defined, read off `PRI GDT`; and `FMT_FNT.ROM` is loaded
into `Machine::font` at start-up, from `U2_FONT` or `FMT_FNT.ROM` in the working directory, with a printed warning when
it is missing.

**What it fixed, measured.** At frame 105 the notice now draws two lines that were previously absent: the top bar's
`Ultima II - Revenge of Enchantress -`, and the bottom red bar's `データを読み込んでいます`. Text rendering works.

**What is still wrong.** The box's own copyright lines do not appear, and the crops of that box are blank. The ANK
window was implemented as a correctness fix and it does change what the game reads (2,718 VRAM bytes move at the notice
frame, as one to three byte runs, which is glyph pixels), but it did not put text in the box. So glyph selection
is not the whole story either, and the next thing to establish is whether the machine has that text **in VRAM at all**
during the notice. If it does, the offset names the writer. If it does not, the text is being displayed through a path
this port does not model at all, and no VRAM-side fix will reach it.

A first composite of the pad page was written and reverted before this measurement existed: it put sprite content on
screen (two teal rectangles with yellow bars) which proved the code path, but the geometry was wrong and it made the
notice worse than empty. It is not in the tree, and with `layer_ctrl` proving the second layer is off, it was fixing a
layer that is not displayed.

## What the next attempt needs

The pad layer's exact geometry: its VRAM offset, bytes per line, monitor origin and size, and how the sprite
registers' `xoff`/`yoff` relate to the pad page. The authoritative source is in the repository already, the
emulator that renders the notice correctly:

- `references/TOWNSEMU/src/towns/crtc/sprite.h` and `sprite.cpp` for the sprite state and
  `DisplayVRAMOffset()`
- `references/TOWNSEMU/src/towns/crtc/crtc.cpp` around the layer setup, where `layer.FlipVRAMOffset` is taken
  from the sprite device, for how the pad becomes a layer

The check at the end is unchanged and is the whole point: the notice box should show the Origin copyright
instead of being empty, and `U2_SHOT` at frame 105 is the frame to compare.

## What this page does not claim

It does not claim the sprite engine is the only writer. It claims only this: the pad pages are empty before the
notice, non-empty during it, and not composited by `render()`, which is the one measurement that explains an
empty box with correct chrome.

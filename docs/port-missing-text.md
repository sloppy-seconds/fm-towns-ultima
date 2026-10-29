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

## The lead: the sprite/pad page is never composited

`U2_VRAM_DUMP` at frame 90 and frame 105 shows the sprite pages change from **completely empty** to
**35,373 non-zero bytes at `0x40000` and 29,713 at `0x60000`** exactly when the notice appears. The pad page is
where `Machine::draw_sprites()` draws, and `tools/.../towns_video.cpp`'s `render()` composites only the two
graphics layers. So whatever the sprite engine drew is in VRAM and never reaches the screen.

That matches the shape of the defect: the box and bars are layer art and appear, the text is the part drawn
with sprites and does not.

**A first composite was written and reverted.** Adding a `Frame::pad()` pass that reads the pad page as 4bpp
with the sprite line stride, nibble 0 transparent, and composites over both layers produced visible content in
the box: two teal rectangles with yellow borders, each with a blue bar and a white square. That is sprite data
reaching the screen, which proves the mechanism, but the geometry is wrong and it makes the notice look worse
than empty. It is not in the tree.

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

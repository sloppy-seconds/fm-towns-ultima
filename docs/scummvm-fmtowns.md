# What ScummVM contains for FM Towns, and what it does not

**A clone is at `references/scummvm` (commit `3875f5b249e`, 3.0 GB, gitignored). This records what
it actually holds, because a summary arrived claiming a file that does not exist and a route that
cannot work.**

## The claim that does not hold

The recommendation was to cross-reference `ENCHANT.EXP`'s graphics against
`engines/scumm/gfx_fmtowns.cpp` to tell a pixel write from a CRTC command.

**That file does not exist.** A search of the whole tree for any name matching `*gfx*fmtowns*`
returns nothing. `engines/scumm/gfx.cpp` exists, 5,074 lines, and is the SCUMM engine's own renderer,
not an FM Towns layer.

**And the method would not work even if the file existed.** ScummVM is a *reimplementation*: its
FM Towns code is a C++ model of what the hardware does, not a transcription of any game's x86. Our
binary's instructions are not comparable to it. A drawing routine in `ENCHANT.EXP` sends TBIOS call
numbers, and the mapping from those to hardware is in `TBIOS.BIN`, which this project now reads
directly with `tools/tbios.js`.

## What it does contain, measured

### An Ultima engine, but not for these games

`engines/ultima/` holds `ultima0`, `ultima1`, `ultima4` and `ultima8`, plus `nuvie` for Ultima 6.
**There is no `ultima2` and no `ultima3`.** So the trilogy this project is reverse-engineering has
no ScummVM counterpart, and no U2 source can be lifted from it.

### An FM Towns image decoder, for Ultima 4

`engines/ultima/ultima4/gfx/imageloader_fmtowns.cpp`, 87 lines. It handles two pixel formats:

```cpp
// 4bpp: a CLUT8 surface, palette from the EGA table
// 16bpp:
_surface->create(_width, _height, Graphics::PixelFormat(2, 5, 5, 5, 1, 5, 10, 0, 15));
dst[x] = FROM_LE_16(*src++) ^ 0x8000;
```

**16-bit FM Towns pixels are XOR `0x8000`**, which flips a high bit before display. That is a
platform fact worth recording, and it does not apply to `ENCHANT.EXP`, whose artwork is 4bpp packed
per [assets-and-graphics.md](assets-and-graphics.md).

The 4bpp path is not a packed-pixel decoder at all: it treats the data as one byte per pixel with a
16-entry palette. That is the *other* FM Towns 4bpp layout, the one this project already separates
from the packed form.

### The EUPHONY music driver, which does apply

`audio/softsynth/fmtowns_pc98/towns_euphony.cpp`, **988 lines, GPL**. A full reimplementation of
Fujitsu's EUPHONY player, and the disc carries 10 `.EUP` files under `SOUND/` which this project's
sound table lists by name (`Q:\SOUND\BRIGHT1.EUP` and so on).

A `.EUP` begins with a name and a byte:

```
627269676874 00 44 000000...     "bright" then 0x44
```

The class surface that matters:

```
startTrack(const uint8 *data, int trackSize, int barLen)
stop() / pause() / resume()
setTempo(int) / setLoopStatus(bool)
configPart_enable / _setType / _remap / _adjustVolume / _setTranspose
```

and `resetPartConfig` clears **32 parts**. That is the driver's part model, which is what the `.EUP`
files configure.

**This is the one component here that is directly usable**, for a reimplementation that wants sound
to work. It is not needed for the current work, which is naming game logic.

### Audio synthesis, for the YM2612 and RF5C68

`towns_pc98_fmsynth.cpp` (1,833 lines), `towns_pc98_driver.cpp` (1,438), `towns_pc98_plugins.cpp`
(110). The FM and PCM layers under EUPHONY. Same verdict: useful for a sound implementation, not for
reading this binary.

## What is not in it

- any code for Ultima II or Ultima III
- any disassembly, of any game
- `gfx_fmtowns.cpp`, or any per-game FM Towns graphics layer
- a palette for this game

## Verdict

`references/scummvm` stays as a reference for **two** things: the `.EUP`/EUPHONY driver, if sound is
ever implemented, and the `^ 0x8000` 16bpp detail as a platform fact. Nothing else in it advances
the current problem.

The lesson is the same one this project keeps meeting. A confident summary named a file, a path and a
method, and two of the three were wrong. The file was checked with one `find` and the method was
refuted by reading 87 lines of the file that does exist.

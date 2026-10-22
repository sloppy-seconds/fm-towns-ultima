# Extracting the assets

`extract-u2.js` pulls out everything Ultima II needs: 23 graphics, 14 sound
effects, and the title and ending art. It writes `extracted/u2/`, which is
gitignored, because the output is game data.

The asset list is not guessed. `ENCHANT.EXP` embeds its own file paths as literal
strings, so the extractor uses exactly the set the binary names, and
`tools/verify.js` asserts that every one of them comes out.

## What you get

```
node extract-u2.js
```

Writes `extracted/u2/` with `map/`, `sprites/`, `title/`, `sfx/` and a
`manifest.txt` recording what decoded and what did not. No dependencies, no
`sudo`. The disc is read in place and never modified.

The file list is not guesswork. `ENCHANT.EXP` contains its own asset paths as
literal strings (`Q:\GRAPH\MAP2_1.TIF`, `A:\ROSTER1.UT2`, and so on), so the
extractor uses exactly the set Ultima II opens. Confirmed from those strings:

- **3 maps**: `MAP2_1`, `MAP2_2`, `MAP2_3`
- **6 sheet/sprite files**: `PLAYER`, `ENEMY2`, `EXTRA`, `CHEST`, `DUNG1`, `DUNG2`
- **14 title and ending images**: `HEADTTL`, `U2TITLE1-4`, `U2END1-5`, `GAI`,
  `DUNMON1-3`
- **14 sound effects**, out of the 15 `.SND` files on the disc
- **3 save files** `ROSTER1.UT2` and `WORLD1-4.UT2`, which live on the UserDisk
  floppy and do not exist until you start a game

### Graphics

Two different layouts, both determined by exact byte counts rather than by the
TIFF headers, which on this disc are unreliable:

| Layout | Sizes | Rule |
|---|---|---|
| Sheet | 320x104 | 1 pixel per byte, high nibble only |
| Picture | 640x400, 256x200, 352x352, ... | 4bpp packed, 2 pixels per byte |

Maps decode as legible terrain (coastlines, rivers, mountain rows). Pictures
decode as legible title screens with readable text. Each picture is also
written with a `_planar.png` suffix holding the planar interpretation, so the
layout choice stays inspectable instead of being baked in silently.

Two honest caveats:

- **No palette.** These are 4-bit palette indices written as greyscale. The
  index-to-colour mapping is not stored in the image files, it is set by code,
  so the PNGs show structure and shapes but not original colours.
- **`U2TITLE1` is two screens stacked.** It is 640x400 of packed pixels, which
  is twice the 640x200 the visible title occupies. Row 200 is where the first
  screen ends. The decode is correct, the layout is just a stacked pair.
- **`DUNMON1-3` do not fit any layout.** 213504, 53760 and 13824 bytes against
  8192, 2048 and 512 expected for their declared sizes. They are emitted on a
  best-effort basis and should be treated as unresolved.

### Sound effects

`.SND` layout, verified against all 15 files on the disc. Every one satisfies
`filesize == 32 + u32@12` exactly:

```
 0   char[8]  name
 8   u32      flag (1 for most files, junk in FIRE and WHAT)
12   u32      payload length, authoritative
16   u32      payload length-1 for BUMP/FIRE/WHAT, else 0
20   u32      same as 12 for BUMP/FIRE/WHAT, else 0
24   u32      nominal sample rate, unreliable
28   u16      always 60
30   u16      always 0
32   bytes    payload, runs to end of file, no trailer
```

Field 24 is 1960 Hz for 13 of 15 files, but reads 2426302 for `BUMP`, 4292870291
for `FIRE` and 1568 for `WHAT`. The WAV header uses 1960 Hz as the
best-supported value and the manifest reports the raw field, so the guess stays
visible rather than being silently trusted. If an effect sounds wrong-pitched,
that field is the thing to revisit.

### What is not extracted

- **CD audio** (tracks 2-8): the trilogy soundtrack, not U2-specific. Extract
  with `bchunk` against the `.cue` if you want it.
- **`SOUND/ULTIMA.FMB`**: the FM instrument bank. It is shared by all three
  games and needs a YM2612 renderer to become audio, so there is nothing to
  convert here.
- **`.EUP` files**: EUPHONY driver preset tables, not audio. No waveform data.

## After extracting

The art comes out greyscale, because the palette is not in any asset file. Run:

```bash
node tools/recolour.js
```

to render it in colour using the palette captured from the running machine. See
[palette.md](palette.md) for how that was obtained and why every static approach
failed first.

To look at a tile bank rather than a sheet, `tools/tilesheet.js` lays it out as a
labelled grid.

---

**[Assets and graphics](assets-and-graphics.md)** **[Docs index](index.md)**

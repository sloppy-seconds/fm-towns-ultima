# Assets and graphics

The Ultima II asset set, proved complete against the paths the binary itself
names, and the formats those assets use.


## Asset inventory

**Tried:** locate the file list rather than guess it.

**Measured:** `ENCHANT.EXP` embeds its own asset paths as literal strings
beginning at `0x1ef0`:

```
Q:\GRAPH\MAP2_1.TIF   Q:\GRAPH\PLAYER.TIF   Q:\GRAPH\ENEMY2.TIF
Q:\GRAPH\EXTRA.TIF    Q:\GRAPH\DUNG1.TIF    Q:\GRAPH\DUNG2.TIF
Q:\GRAPH\CHEST.TIF    Q:\GRAPH\MAP2_2.TIF   Q:\GRAPH\MAP2_3.TIF
Q:\GRAPH\HEADTTL.TIF  Q:\GRAPH\U2TITLE1-4.TIF  Q:\GRAPH\U2END1-5.TIF
Q:\GRAPH\GAI.TIF      Q:\GRAPH\DUNMON1-3.TIF
A:\ROSTER1.UT2   A:\WORLD1-4.UT2
```

Plus `\UT2\MAP.MP2`, and diagnostics `CAN'T OPEN TIFF DATA`,
`WRONG TIFF HEADDER` (sic), `TIFF LOAD ERROR`, `SPRITE MAX is OVER`,
`SPRITE APPEND ERROR`.

Also a roster format string listing every character field: `SHAPE=%d`,
`SPID=%d`, `SKIN=%d`, `RACE=%c`, `PROFESSION=%c`, `R_ARMOUR=%c`, and the U2
inventory list (`ANKH`, `RED_GEM`, `SKULL_KEY`, `GREEN_GEM`, `BRASS_BUTTON`,
`BLUE_TASSLE`, `STRANGE_COIN`, `GREEN_IDOL`, `TRI_LITHIUM`).

**Verdict:** positive. The extractor uses exactly this set.

**Tried:** prove extraction coverage is complete, by enumerating every path
string in the shipped binary and matching it against what the extractor emits.

**Measured:** `ENCHANT.EXP` contains exactly **52 file references** and no others.
Of those, 23 are `Q:\GRAPH\*.TIF`, 14 are `Q:\SOUND\*.SND`, 10 are
`Q:\SOUND\*.EUP`, 1 is `Q:\SOUND\ULTIMA.FMB` (the FM instrument bank), and 4
are `A:\*.UT2` save slots.

Note on counting: `ULTIMA.FMB` is stored as `\SOUND\ULTIMA.FMB` with the drive
letter split off, so a naive `[A-Z]:\` scan finds only 51 and misses it. It is
on the disc as `SOUND/ULTIMA.FMB`.

Every one of the 23 graphics and all 14 sounds are extracted. The 10 `.EUP`
files are EUPHONY driver preset tables, present on disc, not audio, and not
extracted as sound on purpose. `ULTIMA.FMB` is an instrument bank, not audio.
The 4 `A:\*.UT2` files do not exist on the disc. They are created in-game and
live on the UserDisk floppy.

39 of the disc's 62 `GRAPH/*.TIF` files are not extracted, and **none of them is
referenced by `ENCHANT.EXP`**. They belong to the other programs on the disc:
`UT1*` and `UT1T*` (Ultima I), `UT3_A`-`D`, `EXOEND1`-5 and `MAP3` (Ultima III),
and `DEMO3_1`-3. The remainder (`ENEMY`, `ANK`, `BRIBRI`, `HITO`, `IZUMI`,
`ROD`, `SDRAGON`, `SDRAGON2`, `TIME`) are unreferenced by U2 and belong to the
same sibling programs.

**Verdict:** positive and complete. Ultima II's asset set is fully extracted. The
leftovers on the disc belong to Ultima I and III, which are out of scope.

**Tried:** confirm whether `ENCHANT.EXP` carries a symbol table like the others.

**Measured:** no. Searching for `SYM1`, `SYM2`, `SYMB`, `NDBG` and `FIXU` returns
nothing, and the file ends in ordinary x86 code. `ENCHANT.EXP` is the stripped
shipping build. The 1,725-record `SYM1` table documented elsewhere in this file
belongs to `TMENU.EXP`, not to U2, so its symbols cannot be used to locate U2
data. The `Common_screen_data1`-11 and `Palette_data1`-3 names come from that
TMENU table and do not describe Ultima II.

**Verdict:** negative, and a correction to earlier assumptions.

**Tried:** search for a monster name table using U2 monster names.

**Measured:** no hits. `ORC` matched only inside `TORCHES`.

**Verdict:** negative. Monster identity is by numeric `SPID`, not by name
string. Table location unknown. *Open.*

---

## Graphic formats

### 5.1 TIFF headers are unreliable

**Tried:** parse TIFF tags on all 63 `GRAPH/` files.

**Measured:** 23 distinct combinations of dimensions and bit depth. Calls that
did not hold up: `UT1_1.TIF` declares `257x169` but holds 86,866 bytes of
payload against 86,338 needed for that geometry. `DUNMON1.TIF` declares
`128x128` 4bpp = 8,192 bytes but the file is 213,504.

**Verdict:** the declared geometry is sometimes wrong and always insufficient to
trust alone. Byte count is the reliable signal.

### 5.2 Map files are a 64-tile grid, packed as two 3-bit fields

**Superseded claim:** an earlier version of this section said `MAP2_1/2/3` are
ASCII, one character per cell, on the strength of `0x0a`, `0x0d` and `0x20`
appearing prominently in the histogram. That is wrong, and the error was reading
one file's histogram and applying it to another. Measured now, directly:

| file | size | `0x0a` | `0x0d` | `0x20` |
|---|---|---|---|---|
| `GRAPH/MAP2_1.TIF` | 33,280 | **0** | **0** | 19 |
| `UT2/MAP.MP2` | 167,936 | 4 | 16 | 256 |

Neither file is character data. `MAP2_1` contains no newline and no carriage
return at all, so the earlier ASCII verdict cannot hold for it.

**What `MAP2_1` actually is.** 62 distinct byte values, every one of them
`(high << 4) | low` where **both nibbles are in 0 to 7**:

```
0x00 0x01 0x02 0x03 0x05 0x06 0x07
0x10 0x11 0x12 0x13 0x14 0x15 0x16 0x17
0x20 0x21 0x22 ... 0x77
```

That is 8 x 8 = **64 combinations**, of which 62 occur. Two are unused (`0x04`
and `0x27`). The DOS release's map also has a 64-entry tile atlas, but packed as
`art_index << 2` giving values `0, 4, 8 ... 252`. Different packing, same 64.

The two nibbles behave almost independently, which fits two separate fields rather
than one packed number. Horizontal neighbours agree 75.8% on the high nibble and
74.7% on the low, where full-byte agreement is 63.4%, and independence predicts
63.4/75.8 = 83.6% for the low given the high. So high and low carry different
information, not a single index split for convenience.

**Geometry.** 33,280 bytes at 320 x 104. Horizontal autocorrelation spikes at
**lag 16** (64.6%, against 41% at nearby lags), which is a 16-pixel period and
matches the documented 20x10-tile viewport of 16x16 tiles. It does **not** show
uniform 8x8 or 16x16 blocks: only 2 of 520 candidate 8x8 blocks hold a single
value, so this is not a grid of one byte per tile. 320 wide is consistent with the
screen, not with a 64-column grid.

**The three files share a region.** Assuming 320 bytes per row, differences are
confined to an upper band and the rest is shared:

- rows 0 to 28 differ between the three files
- rows 29 to 56 are identical in all three
- rows 57 to 59 differ between `MAP2_1` and `MAP2_3` only
- rows 60 to 103 are identical in all three

Overall 25,710 of 33,280 bytes (77.3%) are identical across all three files. So
they are one shared body with a per-file upper block, not three separate maps. The
differences are confined to roughly the top sixth and a three-row stripe, which is
the shape of a variant or overlay rather than a different map.

Both regions satisfy the nibble constraint at 100%, so neither is a header. The
upper block has 61 distinct values and the shared body 39, which means the
per-file part carries more variety. That is consistent with the upper block being
the part that changes between variants.

**Verdict:** the values are a 64-tile vocabulary, almost certainly `terrain` in the
high nibble and `variant` in the low. Two things are still open:

- **The cell size.** The 16-pixel horizontal period argues for a pixel-resolution
  store, but 33,280 bytes at one byte per cell is 320x104 or 512x65, neither of
  which is a plausible 64x64 world. Values also change at random positions, not on
  a 2, 4, 8 or 16-pixel boundary, so it is not a block grid either.
- **What the two regions are for.** Rows 32 to 103 are identical across the three
  files but vertical autocorrelation collapses beyond lag 24 (9.6% at 36), so the
  shared body is not a repeating pattern such as a font. Its role is unproven.

Do not build on the cell size yet.

### 5.3 Two real bitmap layouts

**Tried:** exact byte-count fit across all candidate layouts.

**Measured:**

| Layout | Rule | Confirmed on |
|---|---|---|
| Sheet | 1 pixel per byte, high nibble only | 320x104 maps and sprite sheets, 33,280 B |
| Picture | 4bpp packed, 2 pixels per byte | 640x400 `U2TITLE1`, 256x200 `U2TITLE2-4`, 352x352 `GAI`, 296x240 `U2END1-5` |

**Verdict:** positive for both. `U2TITLE1` renders a legible title screen with
readable text at 4bpp packed. The planar interpretation is written out
alongside as `_planar.png` so the choice stays visible rather than baked in.

### 5.4 Sprite sheets are tile banks

**Tried:** re-read the "sprites" as tile banks after the flat decode produced
noise.

**Measured:**

| File | Bytes | Body after TIFF strip | Layout | Tile count |
|---|---|---|---|---|
| `ENEMY2.TIF` | 33,280 | 33,280 (no TIFF header) | 32x32 @ 4bpp packed, 512 B | 65, 64 non-empty |
| `PLAYER.TIF` | 33,280 | 32,768 (strip=512) | 16x16 @ 1 B, 256 B | **128**, 100 non-empty |
| `DUNMON1.TIF` | 213,504 | 212,992 (strip=512) | 16x16 @ 4bpp packed, 128 B | **1,664**, 1,485 non-empty |
| `DUNMON2.TIF` | 53,760 | 53,248 | 16x16 @ 4bpp packed, 128 B | **416** |
| `DUNMON3.TIF` | 13,824 | 13,312 | 16x16 @ 4bpp packed, 128 B | **104** |

The tile counts must be taken from the body **after** the TIFF strip offset, not
from the file length. Counting from the file length gives 130 / 1,668 / 420 /
108, which are wrong because each file carries a 512-byte header that is not
tile data. Corrected here.

**Verdict:** positive. Supersedes the earlier 320x104 flat decode of these
files, which was wrong, and the earlier "unresolved" note on `DUNMON1-3`, which
was also wrong. `PLAYER` rendered as a tile grid shows legible 16x16 figures
with directional variants.

Render with `tools/tilesheet.js`.

### 5.5 Animation

**Tried:** external check against the Ultima Codex FM Towns goblin image
(`FMGoblin.gif`).

**Measured:** that file is 32x32, GIF89a, 2 frames at 500 ms, using 7 colours
white/red/yellow/green/cyan/blue/black. Its palette entries are pure EGA
primaries, i.e. a placeholder applied after the fact.

**Verdict:** consistent with `ENEMY2`'s 65 tiles of 32x32 and with paired
consecutive tiles in the grid render. Animation is real. Positive.

**Open:** the frame stride per creature, and whether the reference image is FM
Towns or a different port.

---

---

**[The disc and the binaries](disc-and-binaries.md)** **[The colour palette](palette.md)**

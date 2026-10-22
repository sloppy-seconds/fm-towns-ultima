# Investigation log

Every probed hypothesis, what was measured, and the verdict. Positive and
negative results both kept, because the negative ones are what stop the work
being redone.

Format per entry: **what was tried**, **the measurement**, **verdict**.
Anything marked *open* has not been settled.

---

## 0. Platform identification

**Tried:** read the disc's first sector and the floppy image geometry.

**Measured:** disc sector 0 begins `49 50 4c 34` (`IPL4`). The filesystem holds
`RUN386.EXE`, `TBIOS.SYS`, `TBIOS.BIN`, `IO.SYS`, `AUTOEXEC.BAT`, `GAIJI2.COM`,
`OAK2USR.DIC`. The `.hdm` is 1,261,568 bytes = 1232 x 1024 = FM Towns 2HD.

**Verdict:** FM Towns, not X68000. An earlier reading of `GP0:3` in the
partition table as an X68000 marker was wrong. Confirmed independently by the
floppy geometry: X68000 2HD is 1,229,312 bytes, a different number.

---

## 1. Disc image structure

**Tried:** parse the ISO 9660 PVD and walk the directory tree, then compare the
`.cue` and `.ccd` track maps.

**Measured:** volume label `TRILOGY`, 140 files. Track 1 = MODE1 data LBA
0-8999. Tracks 2-8 = CD-DA from LBA 9000. `(.cue)` declares
`PREGAP 00:02:00` before track 2. `(.ccd)` records track 1 ending at 8999 and
track 2 starting at 9000, with 450 zero sectors present in the image.

**Verdict:** use the CCD. Tsugaru's author documents PREGAP as ambiguous, so a
CUE cannot be interpreted reliably. Positive result.

**Tried:** confirm the audio tracks are real CD-DA.

**Measured:** 16-bit big-endian stereo, peaks around +/-15,000.

**Verdict:** positive. Seven Red Book tracks, lossless.

---

## 2. Toolchain / language

**Tried:** string scan of every executable for compiler identity.

**Measured:**

| File | Evidence |
|---|---|
| `DARKNESS.EXP` | `High C Run-time Library Copyright (C) 1983-1988 MetaWare Incorporated.` |
| `ENCHANT.EXP` | same |
| `EXODUS.EXP` | same |
| `TMENU.EXP` | same, plus `Copyright(C) FUJITSU PERSONAL COMPUTER SYSTEMS LIMITED 1988-89` |
| `RUN386.EXE` | `Copyright (C) 1986, 1987 Phar Lap Software, Inc.` and `MetaWare High C Run-time Library ... 1983-1986` |

Also present in all: `TOWNS SOUND LIBRARY by Joe Mizuno1989 Copyright (C)
FUJITSU LIMITED`, `EUPHONY DRIVER FOR TOWNES by Joe Mizuno1989`,
`TOWNS MOUSE LIBRARY by Joe Mizuno1989`.

**Tried:** instruction-level corroboration.

**Measured:** `DARKNESS.EXP` contains 441 instances of `55 8b ec` (`push ebp`
then `mov ebp,esp`), 0 of the `55 89 e5` encoding, 548 `enter`, 462 `retn
imm16`. `ENCHANT.EXP` 366, `EXODUS.EXP` 392, `TMENU.EXP` 283.

**Verdict:** written in C, compiled by MetaWare High C for 32-bit protected
mode. Not Watcom, Borland/Turbo C, or Microsoft C. Positive result.

---

## 3. Executable format

**Tried:** read the header of `DARKNESS.EXP`.

**Measured:** `4d 50` = `MP`. Code image begins at `0x75f`, where the bytes are
`22 0f a0 68 10 01 00 00 0f a1 64 ff` = `mov fs:[0x110],eax`, i.e. protected
mode 32-bit code.

**Verdict:** Phar Lap `MP` 386 executable, loaded by `RUN386.EXE`. Positive.

**Open:** the header layout is not the documented `MP` one. Words `0x1e`
through `0x3e` are all zero, and the segment count is not where the format
description says. A flat dump from `0x75f` works for disassembly but the true
segment table has not been located.

**Tried:** symbol recovery.

**Measured:** identifier-like strings per binary: `DARKNESS` 11, `ENCHANT` 11,
`EXODUS` 17. Of these, 10 per file are High C runtime (`_mwStdio1c`,
`_mwStdlib5`, `_mwFINIT`, `_mwARG`, `_mwStackDump`) and 5 are Fujitsu keyboard
stubs (`KYB_init`, `KYB_setbuf`, `KYB_lock`, `KYB_clic`, `KYB_clrbuf`,
`KYB_read`). `EXODUS` additionally has `Whirl_X`, `Whirl_Y`, `Whirl_d_X`,
`Whirl_d_Y`, `Gate_X`, `Gate_Y`. Printable ASCII density 6-9%.

**Verdict:** binaries are stripped. Six genuine game symbols in the entire
trilogy. Negative result for source recovery, positive for the claim that
decompiled output would not resemble authored source.

---

## 4. Ultima II asset inventory

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

**Tried:** search for a monster name table using U2 monster names.

**Measured:** no hits. `ORC` matched only inside `TORCHES`.

**Verdict:** negative. Monster identity is by numeric `SPID`, not by name
string. Table location unknown. *Open.*

---

## 5. Graphic formats

### 5.1 TIFF headers are unreliable

**Tried:** parse TIFF tags on all 63 `GRAPH/` files.

**Measured:** 23 distinct combinations of dimensions and bit depth. Calls that
did not hold up: `UT1_1.TIF` declares `257x169` but holds 86,866 bytes of
payload against 86,338 needed for that geometry. `DUNMON1.TIF` declares
`128x128` 4bpp = 8,192 bytes but the file is 213,504.

**Verdict:** the declared geometry is sometimes wrong and always insufficient to
trust alone. Byte count is the reliable signal.

### 5.2 Map files are character data, not bitmaps

**Tried:** decode `UT2/MAP.MP2` and `GRAPH/MAP2_1.TIF` as bitmaps at every
width 8-420.

**Measured:** no width produced a coherent image and all scored 57.2-57.7 mean
horizontal gradient. Byte histogram of `MAP2_1`: `0x0a` newline, `0x0d`
carriage return, `0x20` space all prominent.

**Verdict:** `MAP2_1/2/3` are ASCII map data, one character per cell. My earlier
"terrain map" renderings were the character codes interpreted as greyscale and
were not meaningful. Correcting that. *Exact cell layout still open.*

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

## 6. Colour palette: all approaches negative so far

This is the main unsolved problem. The artwork is 4-bit palette indices. The
palette is not stored with the art.

### 6.1 Palette not in the asset files

**Tried:** search `ENCHANT.EXP` for `PAL`, `pal`, `palette`, `PALETTE`.

**Measured:** zero hits for `PAL` or `palette` in any casing.

**Verdict:** no palette-named data referenced anywhere in the binary.

### 6.2 Probe 1: raw RGB555 table scan

**Tried:** scan `ENCHANT.EXP` for runs of >=24 contiguous 16-bit words below
`0x8000` (the shape a 16-entry BGR555 palette would take).

**Measured:** 2,214 runs of 64 bytes or more. Tightening to require 16 entries
that are distinct, non-ASCII, with spread >=6 in all three 5-bit channels still
left 55,979 candidates for 16-entry and 2,422 for 256-entry. Inspection shows
they are x86 opcodes (`0x0fa1` = `pop fs`, `0x8b74` = `mov esi,[esp+0x10]`).

**Verdict:** NEGATIVE. No static palette table in `ENCHANT.EXP`.

### 6.3 Probe 2: CRTC port write scan

**Tried:** search for direct writes to the FM Towns CRTC palette ports.

**Measured:** zero occurrences of `BA A0 01` (`mov dx,0x1A0`), same for `0x1A2`,
`0x1A4`, `0x1A6`, `0x1A8`, `0x1AA`, `0x1AC`. Zero of `E6 A0` (`out 0xA0,al`)
and variants. Zero `int` instructions anywhere in the binary.

Widening to any I/O at all: the only port families referenced are `0xE70`-`0xE77`
(DMA/FDC/PIC area), not graphics.

**Verdict:** NEGATIVE for inline palette code. The write is inside a called
library function, not reachable by scanning for constants.

**Caveat on method:** a linear `ndisasm` sweep of the whole payload produced
501,275 lines, a large fraction misaligned because the binary interleaves data
with code. Samples showed `out 0x82,al` where the bytes are actually a jump
table. Byte-level scanning cannot separate code from data here.

### 6.4 Probe 3: `.EUP` files

**Tried:** examine the ten `.EUP` files as possible palette or colour sources.

**Measured:** headers are a 16-byte internal name plus fixed fields, for example
`DUNGEON.EUP` has internal name `DANJON_`. Every file carries the same 9-byte
sequence `01 02 03 00 00 00 00 ff ff ff ff ff 03 00 00`. `BRIGHT.EUP` and
`BRIGHT1.EUP` differ in 5,344 of 11,524 bytes despite similar sizes.

**Verdict:** NEGATIVE. `.EUP` are EUPHONY voice/track definitions, named after
game locations (`MAP`, `TOWN`, `BRIGHT`, `DUNGEON`). No colour data. This closes
the question raised in an earlier session.

### 6.5 Probe 4: cross-binary diff for the shared Fujitsu graphics library

**Tried:** the shortcut proposed at the end of 6.4. The reasoning was that the
palette setter must be in a library statically linked into *every* executable,
so if all four binaries contain the same routine, anchoring on `TMENU.EXP`
(243 KB, Fujitsu's own menu, least noise) makes the haystack much smaller.

Ran `tools/crossdiff.js`: Rabin-Karp k-gram index (k=32) over `TMENU.EXP`'s
payload from `0x75f`, then a streaming scan of the other six executables,
reporting every shared run of 256+ bytes.

**Measured:**

| Binary | Shared blocks >= 256 B | Longest |
|---|---|---|
| `DARKNESS.EXP` | 5 | 552 |
| `ENCHANT.EXP` | 6 | 1167 |
| `EXODUS.EXP` | 3 | 552 |
| `UT1DEMO.EXP` | 4 | 789 |
| `UT2DEMO.EXP` | 4 | 789 |
| `UT3DEMO.EXP` | 4 | 789 |

Only **3** reference regions are matched by all three games. Inspected each:

| `TMENU.EXP` offset | Length | Content |
|---|---|---|
| `0x9ab5` | 552 | zero fill |
| `0x8575` | 535 | `0x20` space fill |
| `0x33703` | 333 | real code |

Disassembled `0x33600`-`0x33a00`. It is floating-point emulation code, not
graphics: `0x3fff` exponent bias (`sub cx,0x7f` / `add cx,0x3fff`), `0x7fff`
infinity, `mov [edx+0x8],cx` writing a biased exponent, `test eax,0x80000000`
sign check. That is the High C software float library.

**Verdict:** NEGATIVE. The cross-diff found the shared compiler runtime, two
runs of padding, and nothing graphics related. The palette routine is not
among the cross-binary common blocks at 256-byte granularity.

Side finding: the demos all share a 789-byte block at `TMENU.EXP 0xc923`, with
nothing else. That is likely the demo common layer, not something useful here.

### 6.6 Probe 5: I/O census inside `ENCHANT.EXP`

**Tried:** stop looking for constants and instead enumerate *every* I/O
instruction, then classify by port. If video I/O exists at all it must show up.

Ran `tools/findpal.js`, which disassembles from `0x75f` and walks each `out`/
`in` back to the nearest preceding `mov dx,imm`.

**Measured:** 448 I/O instructions total. Classified by port:

| Port | Count | Function |
|---|---|---|
| indirect | 418 | dx loaded from memory or a register |
| `0xE70`-`0xE77` | 24 | FM Towns sound chip (YM2612 / RF5C68 / PCM) |
| `0x82` | 34 | junk, see below |
| `0xEB`, `0x95`, `0x81`, `0x91`, `0x8C` | 17 | junk, see below |

Zero references to `0x1A0`-`0x1AE` (CRTC) anywhere.

The 24 sound-chip sites are genuine: inspected in context, e.g.
`mov dx,0xe70` / `out dx,al` preceded by `cli`/`pushfw`, and `mov dx,[ebx+0x12]`
/ `mov al,0x37` / `out dx,al` waiting on status bit 0 - that is FM register
write protocol.

**But the port census itself is unreliable.** The `0x82` and other odd ports are
artefacts. Around address `0x10D4` the linear disassembly produces `db 0x82`,
`stosb`, `ficom`, `jmp word 0xe782:dword 0xa882c482`, interleaved with
real-looking short-relative `jmp` chains.

Measuring the `0xEB` byte positions in the first 64 KB shows the gaps between
them run almost entirely in 2, 3 and 4, with occasional larger breaks (20, 22,
28, 63). 12,418 `0xEB` bytes in the first 64 KB, entropy 5.30 bits/byte. So the
region is a repeating structure of period roughly 6-23 bytes, not random and
not plain code.

**Verdict:** NEGATIVE for locating the palette, and a method warning. A linear
`ndisasm` sweep of this image does not produce reliable instruction boundaries.
The count of 448 I/O instructions is itself suspect, and the "indirect" 418
cannot be resolved without knowing what loads `dx`.

**Root cause identified:** the `MP` payload from `0x75f` does not disassemble
as one flat stream. Evidence: `TMENU.EXP 0x95e8` is pushed as the argument to a
call at `0x33614` but lies beyond `TMENU.EXP`'s own 243,212-byte file length, so
the load address is not simply "file offset + 0x75f". The image is also not
uniformly-encoded data: reading `0x75f` as 16-bit code yields well-formed 8086
(`push si` / `push di` / `mov di,[si+0x24]` / `ret`) which 32-bit decoding renders
as nonsense. Code/data boundaries and possibly mixed mode are both unresolved.

**Conclusion:** byte scanning and naive linear disassembly are exhausted. The
palette work now requires a loader that reconstructs the real segment layout,
which is exactly the job Ghidra's Pharlap handling or a hand-written `MP` parser
must do first. Recording this so the same three probes are not repeated.

---

## 7. Sound

### 7.1 `.SND` header

**Tried:** fit a field layout across all 15 files.

**Measured:** every file satisfies `filesize == 32 + u32@12` exactly, 15 of 15.
Layout:

```
 0   char[8]  name
 8   u32      flag, 1 for most, junk in FIRE and WHAT
12   u32      payload length, authoritative
16   u32      payload length-1 for BUMP/FIRE/WHAT, else 0
20   u32      same as 12 for BUMP/FIRE/WHAT, else 0
24   u32      nominal rate, unreliable
28   u16      always 60
30   u16      always 0
32   bytes    payload, runs to EOF, no trailer
```

**Verdict:** positive. Two earlier readings were wrong: the payload is not
followed by a 32-byte trailer, and `u32@12` is the length rather than the file
size.

**Open:** field 24 reads 1960 for 13 files but 2,426,302 for `BUMP` and
4,292,870,291 for `FIRE`. WAVs use 1960 as best-supported and report the raw
value. Whether 1960 is the true playback rate is unverified.

### 7.2 `.FMB` instrument bank

**Measured:** `SOUND/ULTIMA.FMB`, 6,152 bytes, 213 instrument names in fixed
64-byte records: `Trumpet`, `Horn`, `Tuba`, `Brass`, `Brass 2`, `BrsBell`,
`Piccolo`, `Flute`, `Clarinet`, `Oboe`, `Fagotto`, `Strings`, `Strg 2`,
`Piano`, `E.Piano`, `E.Piano2`, `P.Organ`, `P.Org 2`, `E.Organ`, `Harpsic`,
`Clavinet`, `Guitar`, ...

**Verdict:** FM Towns YM2612 patch bank. Names extractable. Rendering needs a
YM2612 core plus a driver. Not attempted.

### 7.3 Files named `.MP3`

**Tried:** check for MPEG frame sync.

**Measured:** `UT3/BRITISH.MP3` and `UT3/DARDIN.DG3` begin `02 02 02 02...`.
No `0xFF 0xEx` sync anywhere.

**Verdict:** NEGATIVE. Not MP3 audio. `UT3/*.MP3` (4,096 B) and `UT3/*.DG3`
(2,048 B) are fixed-size map data, consistent with the `MAPTYPE` names
(`BRITISH`, `MOON`, `FAWN`, `YEW`, `GREY`, `AMBROSIA`, `SOSARIA`, `EXODUS`,
`DEATH`, `DUNGEON`, `TIME`, `CNFLCT`, `DEVIL`, `LCN`, `MONTOR_E`, `MONTOR_W`)
for Ultima III's towns. *Format open.*

---

## 8. Save files

**Tried:** locate `ROSTER1.UT2` and `WORLD1-4.UT2` on the UserDisk floppy.

**Measured:** not present. The floppy holds only an `IPL4` boot sector, an
`FBIOS`-style BIOS and a FAT12 volume labelled `USERDISK` with no `.UT2` files.

**Verdict:** negative but expected. These are created when a character is
made in-game. A blank supplied UserDisk is normal.

---

## 9. Open questions

Ordered by cost to resolve.

1. **Palette.** Needs correct code/data separation. Candidate shortcut not yet
   tried: diff `ENCHANT.EXP`, `DARKNESS.EXP`, `EXODUS.EXP` and `TMENU.EXP` for
   a shared region containing the `0x1A0` port constant. `TMENU.EXP` is only
   243 KB and is Fujitsu's own menu, so the library routine should be present
   with far less surrounding noise.
2. **Monster table.** Which `ENEMY2` tile is which creature, and frames per
   creature. No name strings to anchor on.
3. **`MAP2_1/2/3` layout.** Character-per-cell confirmed, geometry not.
4. **`DUNMON` tile count meaning.** 1,664 / 416 / 104 tiles, and what indexes them.
5. **`.SND` playback rate.** Whether 1960 Hz is real.
6. **`UT3/*.MP3` and `*.DG3` format.**

---

## Appendix: what the probes used

| Script | Purpose |
|---|---|
| `run.sh` | Launch in Tsugaru |
| `extract-u2.js` | Ultima II assets: maps, tiles, title art, sound effects |
| `tools/cd.js` | Shared lib: disc reader, ISO walk, PNG and WAV writers |
| `tools/probe-scan.js` | Probes 1-3, palette hunt, port scan, `.EUP` check |
| `tools/tilesheet.js` | Render a tile bank to a labelled PNG grid |
| `tools/disasm-export.js` | Dump the `MP` payload and run `ndisasm` |

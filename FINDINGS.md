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

**Tried:** reconcile the ISO 9660 volume space against the CCD track map.

**Measured:** PVD volume space size is 12,911 sectors (LE and BE agree). The
disc total is 60,225 sectors. Track 1 is claimed to end at 8999 and track 2 to
start at 9000.

**Verdict:** the two numbers do not match and are not supposed to. Volume space
covers the filesystem only, and the seven audio tracks sit outside it. But 12,911
is larger than the 9,000 sectors the track map assigns to track 1, which means
the ISO is declared as extending past where the CCD says audio begins. In
practice the data files all live below sector 6,000 so nothing is lost, and the
disc plays correctly in Tsugaru. Recorded because it is a real inconsistency in
the rip rather than something to assume away. *Open whether the CCD track
boundary or the PVD is the wrong one.*

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
`Whirl_d_Y`, `Gate_X`, `Gate_Y`. **These six are in `EXODUS` only.** An earlier
note claimed they were in `DARKNESS`/`ENCHANT` as well. They are not. `ENCHANT`
and `DARKNESS` carry only the runtime and keyboard stub names. Printable ASCII density 6-9%.

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

### 6.7 Probe 6 - Phar Lap MP/P3 header parse and SYM1 discovery

**Tried:** stop treating the `.EXP` files as opaque blobs. Look for an existing
format specification before writing one.

**Found:** the Phar Lap executable formats are documented. Signatures per Open
Watcom's `exesigns.h`: `MP` (0x504D, simple flat image), `P3` (0x3350, extended
format), `DX` (run-time parameter block), `MQ` (REX), plus `P2`, `P6`, `PL`.
The `MP` header is 30 bytes and the `P3` header is 128 bytes with offset/size
pairs for run-time parameters, relocations, segment information, load image,
symbols, GDT, LDT, IDT and TSS.

**Measured:** applied the `MP` layout to all three games.

| File | Signature | lastPage | blocks | computed size | actual size | Result |
|---|---|---|---|---|---|---|
| `DARKNESS.EXP` | `MP` | 354 | 1887 | 965,986 | 965,986 | exact |
| `ENCHANT.EXP` | `MP` | 270 | 2095 | 1,072,398 | 1,072,398 | exact |
| `EXODUS.EXP` | `MP` | 118 | 1767 | 904,310 | 904,310 | exact |
| `TMENU.EXP` | `P3` | - | - | - | 243,212 | different format |

`TMENU.EXP` is a `P3` extended-format file, not `MP`. Its header reports
header size 384, and carries a run-time parameter block at 0x180 (size 128) and
what appears to be a load image at 0x200. This is why the earlier cross-diff
anchored on the wrong base address.

Entry points from the `MP` header (`EIP` at offset 0x14): `DARKNESS` 0xE7A74,
`ENCHANT` 0x101A20, `EXODUS` 0xD8AB0. Initial `ESP` at 0x0E.

**Verdict:** POSITIVE. The `.EXP` headers are now understood and verified by
exact size arithmetic for all three games.

**Major finding:** at `TMENU.EXP` file offset `0x33a92` there is a `SYM1`
symbol table. It decodes to thousands of named symbols with addresses,
including a Fujitsu graphics layer: `EGB_palette`, `EGB_color`, `EGB_graph`,
`EGB_para`, `Palette_data1`, `Common_screen_data1` through `Common_screen_data11`,
`Common_screen_data2_5`, `Common_screen_data2_7`, `Color0`, `Color2`, `Color14`,
`AL_VIDEO`, `BO_put_p`, `_put_ptn`.

Header reads `SYM1`, then u16 fields `0x0e`, `0x14`, `0x0000`, then u32
`0x00007b58`, then a length-prefixed `PROGRAM` record with value 0x7b58.

**Open:** the record framing is not settled. Neither a fixed 16/19/20-byte
stride nor `[u32 value][u8 len][name]` nor `[u8 len][name][u32 val]` walks more
than one record. The hexdump shows
`... 00 00 00 | 94 38 04 00 | 0c 00 00 00 | 0a | ACT_HANDLE | f3 d2 00 00 01 00 | 0a | ACT_RC_ADDR ...`
which suggests `[u32 value][u8 len][name][pad to 4][u32 type]`, but a walk on
that assumption terminates after the first record. Deriving the framing is the
highest-value outstanding task in this project.

**Also settled:** `DARKNESS.EXP`, `ENCHANT.EXP`, `EXODUS.EXP` and
`UT3DEMO.EXP` do **not** contain `SYM1`. Only `TMENU.EXP` does, and `TMENU` is
Fujitsu's launcher rather than Origins' game code. The symbol table therefore
names the **Fujitsu library layer** the games link against, not the games' own
functions. That is still the strongest lever available for the palette, because
`EGB_palette` and the `Common_screen_data` blocks are library routines and data
the games call, but it will not name U3's internals.

### 6.8 SYM1 framing solved

**Tried:** parse the `TMENU.EXP` symbol table. Four earlier attempts failed by
assuming a fixed record stride, a padded name field, or a `u32` value.

**Method that worked:** stop guessing the layout. Anchor on the names instead.
An identifier is preceded by a length byte equal to its length, so every
`(namelen, name)` pair is findable without knowing anything else. Then measure
the gap from each name's end to the next length byte. That gap is the record
tail, and it came out uniform at 6 bytes, 1,723 times out of 1,724.

**Measured:** record layout, from the hexdump:

```
0x0e  07            namelen 7
0x0f  "PROGRAM"     0x0f..0x15, ends 0x16
0x16  00 00 00 00   six bytes unique to the first record
0x1c  94 38 04 00   value 0x00043894
0x20  0c 00         type 0x000c
0x22  0a            next namelen
0x23  "ACT_HANDLE"  ends 0x2d
0x2d  f3 d2 00 00   value 0xd2f3
0x31  01 00         type 1
0x33  0a            next namelen
```

So: `[u8 namelen][name][u16 value][u16 reserved][u16 type]`, with the first
record carrying 6 extra bytes before its value field.

**Verdict:** POSITIVE. The walk consumes the blob exactly, ending on `0x7b7a`
which is the blob length. 1,725 records, 1,723 with a nonzero value, values
16-bit ranging `0xd8` to `0xffac`, type field 1 for 1,724 records.

Implemented as `tools/sym1.js`. `--dump` writes `analysis/SYM1-symbols.txt`.

**Superseded:** this section originally recorded that symbol values were not
usable as file offsets and that a `P3` loader was needed. That was wrong, and
was caused by reading the value field as a `u16`. See 6.12. The values are
32-bit file offsets into the load image.

### 6.9 The graphics library is named

**Measured:** 30 `EGB_*` symbols, all in the `0xa168`-`0xa514` range, which is
the Fujitsu graphics layer:

`EGB_init`, `EGB_palette`, `EGB_color`, `EGB_pen`, `EGB_penSize`, `EGB_pset`,
`EGB_rectangle`, `EGB_linePattern`, `EGB_paintMode`, `EGB_writeMode`,
`EGB_clearScreen`, `EGB_partClearScreen`, `EGB_putBlock`, `EGB_putBlockColor`,
`EGB_getBlock`, `EGB_maskData`, `EGB_displayPage`, `EGB_writePage`,
`EGB_displayStart`, `EGB_resolution`, `EGB_graphicCursor`, `EGB_sjisString`,
`EGB_fontStyle`, `EGB_textSpace`, `EGB_connect`, `EGB_unConnect`.

Also `EGB_para` (0x3c44), `EGB_work` (0x3d44), `EGB_work2` (0x4344),
`EGB_work3` (0x4944).

Because these are library functions rather than per-game code, the palette
routine is almost certainly **platform-level**, which resolves the open question
in AGENTS.md in the useful direction.

### 6.10 Palette recovered from screenshots

**Tried:** the palette is not in the assets and not findable by scanning. But the
running game displays it. Eight 640x480 FM Towns U2 screenshots from
`pixsoriginadventures.co.uk/ultima-2-fm-towns-part-1` and `part-2` were used as
ground truth.

**Method:** quantise each screenshot to exactly 16 colours with dithering off,
convert every colour to RGB555 (the CRTC format), then rank by screen area and
by how many independent screens each entry appears in. JPEG noise does not
survive cross-screen agreement.

**Measured:** high-confidence entries, appearing on most screens:

| RGB555 | RGB | Screens |
|---|---|---|
| `0x0000` | (0,0,0) | 8/8 |
| `0x7fff` | (248,248,248) | 7/8 |
| `0x7c00` | (248,0,0) | 7/8 |
| `0x009c` | (0,32,224) | 6/8 |
| `0x03c1` | (0,240,8) | 5/8 |
| `0x0402` | (8,0,16) | 5/8 |
| `0x07de` | (8,240,240) | 4/8 |
| `0x7fca` | (248,240,80) | 4/8 |

**Verdict:** POSITIVE on the palette being 16 colours and stable across screens.
The colours are recognisable Ultima 2 tones: black, white, red, blue, green,
cyan, yellow. Implemented as `tools/palette-reference.js`.

**Open:** this is the **on-screen** palette, not the index-to-colour mapping
used by the art files. Screenshots give the colours, not which index each
corresponds to. Mapping index to colour still needs either the `EGB_palette`
call site or a comparison of rendered art against screenshots. Also, JPEG
compression means these values carry quantisation error of roughly +/- 8 per
channel, so they are close enough to identify a palette but not to overwrite one
byte for byte.

### 6.11 P3 loader built, and the address question resolved

**Tried:** build a real `P3` loader, because symbol addresses did not resolve as
direct file offsets and two blockers depended on that.

`tools/pharlap.js` now parses both formats. For `P3` the header layout was
derived by testing candidate layouts against the data rather than trusting the
documentation prose:

| Field | Offset | Value for `TMENU.EXP` |
|---|---|---|
| signature | 0x00 | `P3` |
| level (flat model) | 0x02 | 1 |
| header size | 0x04 | 384 |
| declared file size | 0x06 | 211,616 |
| checksum | 0x0A | `0x5b2c` |
| runtime parameter offset | 0x0C | 384 |
| runtime parameter size | 0x10 | 128 |
| relocation offset | 0x14 | 512 |
| load image end | 0x74 | `0x33892` |

The runtime parameter block at `0x180` carries the `DX` signature, confirming
the Phar Lap DX layout.

**Resulting map:** header `0x000`-`0x180`, `DX` block `0x180`-`0x200`, load image
`0x200`-`0x33892` (210,578 bytes), symbol table `0x33a92`-`0x3b60c`.
The declared file size is 211,616 while the file is 243,212, so the symbol table
is trailing data beyond the declared size. That is why the earlier cross-diff
anchored wrongly.

### 6.12 Symbol values are 32-bit, not 16-bit

**Tried:** re-read the `SYM1` record tail with fresh eyes after the loader gave
us real bounds.

**Measured:** the bytes after `EGB_init` are `68 a1 01 00 01 00`. Read as a
`u32` that is `0x0001a168`. The earlier parser split it into a `u16` value
`0xa168` plus a "reserved" `0x0001`, which is why it reported a maximum value of
`0xffac` and 974 suspicious records. There is no reserved field. The record is
`[u8 len][name][u32 value][u16 type]`, a 6-byte tail, which is exactly what the
tail measurement said.

**Verdict:** POSITIVE. With the `u32` read, values range `0x238` to `0x33848`, and
**1,723 of 1,725** symbols fall inside the declared load image `0x200`-`0x33892`.
The two exceptions are `PROGRAM` and `LINKTOP_R`, both legitimately zero. The
address is therefore a **file offset into the load image**, and no segment
translation is needed.

The earlier claim in 6.8 that symbol values were unusable is **superseded**. It
was a parser bug, not an addressing scheme.

### 6.13 EGB_palette examined

**Tried:** disassemble `EGB_palette` now that its address resolves.

**Measured:** the symbol points at `0x1a1e4`, which is 12 bytes into the tail of
the preceding function. The real entry is `0x1a1f0`:

```
push ebp / mov ebp,esp / push edi
mov edi,[ebp+0x10]
push dword [ebp+0xc]
call 0x19fe0
mov [0x9890],edi
movzx eax,byte [ebp+0x8]
mov [0x988c],eax
push dword 0x40
call 0x19f6c
```

`0x19fe0` builds a far pointer: it takes DS and stores it plus the caller's
argument into `[0x9894]` and `[0x98a0]`. So `EGB_palette` **copies a far pointer
to the colour table into the library state**, it does not write CRTC ports. It
is a setter, and the actual hardware write happens later when the library
refreshes.

`EGB_para` at `0x3c44` is uninitialised BSS, filled with the P3 `0x88` fill
byte, so the parameter block is populated at runtime.

**Verdict:** the palette is per-application data passed in at runtime, not a
static table and not compiled into the library. Combined with 6.10, that means
the colours seen on screen come from a table built at run time, which is why no
static RGB555 run was found in any executable.

**Open:** where that table is constructed. The likely source is either
`ENCHANT.EXP` pushing its own table (the games link the same library) or the
library defaulting. Next step is to grep `ENCHANT.EXP` for `EGB_palette` call
sites and see what pointer is passed.

### 6.14 Palette call sites found, but the table is built at runtime

**Tried:** locate the `EGB_palette` call sites in `ENCHANT.EXP` now that the
`P3` loader resolves addresses.

**Measured:** `EGB_palette` in `ENCHANT.EXP` is at `0x103c84`. It is byte
identical in structure to the `TMENU.EXP` copy at `0x1a1f0`:

```
push ebp / mov ebp,esp / push edi
mov edi,[ebp+0x10]
push dword [ebp+0xc]
call 0x103504          (far-pointer builder, same role as TMENU 0x19fe0)
mov [0xe00c4],edi
movzx eax,byte [ebp+0x8]
mov [0xe00c0],eax
push dword 0x40
call 0x103490
```

So the library is the same code, relocated. There are **12 direct call sites**:
`0x10120d`, `0x101247`, `0x101279`, `0x1012ef`, `0x10133b`, `0x101454`,
`0x1015d8`, `0x103cdc`, `0x10528d`, `0x1052a1`, `0x1053a1`, `0x1053bb`, plus a
wrapper thunk at `0x103cd0`.

Examined the argument setup at several sites. The pattern is consistently:

```
mov eax,0x200
sub eax,[edi+0x4]
push eax
push dword [edi+0x8]
mov al,[edi+0xe]
push eax
call EGB_palette
```

The table pointer is **`[edi+8]`**, a field of a runtime structure, not a static
address. `0x200` (512 bytes) is the size being pushed, which is 256 RGB555
entries.

**Verdict:** the palette is assembled in memory during play and handed to the
library. It is not a constant in the binary. That closes the question of why
five static RGB555 scans (FINDINGS 6.2, 6.5) found nothing: there is nothing
static to find.

**Open:** the structure at `[edi+8]`. Populating it needs either a debugger break
on `0x103c84` while the game runs, or tracing back through whoever writes
`[edi+8]`. Both are a step up in effort from static analysis.

**Practical consequence:** the fastest route to colour is no longer static. Run
the game under a debugger, break at `EGB_palette` in `ENCHANT.EXP`, dump the 512
bytes the pointer leads to. That gives the exact table with no inference.

### 6.15 Palette read from the running machine

**Tried:** stop analysing statically and read the palette out of the emulated
hardware. Tsugaru has a debugger console with a `PALETTE` command.

**Setup:** `tools/vendor.sh` fetches Tsugaru v20260522 and the FreeTowns ROM set
into `vendor/`, both gitignored. `tools/debug-session.sh` boots U2 headless by
reusing the desktop session's Xwayland display and auth file, so this works over
SSH with no monitor.

**Command sequence:**
```
RUN            run the VM
PAU            pause it
PRI PALETTE    print the CRTC palette
PRI CRTC       print CRTC registers
```

Note `PALETTE` and `CRTC` are print-info targets, so they need the `PRI` prefix.
Bare `PALETTE` returns "Do what?".

**Measured:** the machine is running U2 in 4-bit colour, 640x480, 2-page mode,
and reports a 16-colour palette:

```
Page0: 000000 000099 990000 990099 009900 009999 FF00FF BBBBBB
       000000 0000FF FF0000 CCCCCC 555555 00FFFF FF8800 FFFFFF
Page1: 000000 0000FF FF0000 999999 666666 00FFFF FF00FF FFFFFF
       000000 0000FF FF0000 CCCCCC 555555 00FFFF FF8800 FFFFFF
```

These are full 8-bit-per-channel RGB values as the emulator presents them, so the
sixteen entries are:

| # | Page0 | Page1 | | # | Page0 | Page1 |
|---|---|---|---|---|---|---|
| 0 | `000000` | `000000` | | 8 | `000000` | `000000` |
| 1 | `000099` | `0000FF` | | 9 | `0000FF` | `0000FF` |
| 2 | `990000` | `FF0000` | | 10 | `FF0000` | `FF0000` |
| 3 | `990099` | `999999` | | 11 | `CCCCCC` | `CCCCCC` |
| 4 | `009900` | `666666` | | 12 | `555555` | `555555` |
| 5 | `009999` | `00FFFF` | | 13 | `00FFFF` | `00FFFF` |
| 6 | `FF00FF` | `FF00FF` | | 14 | `FF8800` | `FF8800` |
| 7 | `BBBBBB` | `FFFFFF` | | 15 | `FFFFFF` | `FFFFFF` |

**Verdict:** POSITIVE, and this is the index-to-colour mapping that all the
static analysis could not produce. Entries 8-15 duplicate 0-7 in page 0, which
suggests a 16-entry table where the high half mirrors the low, or a second bank.

**Consistency with screenshots:** the screenshot consensus (FINDINGS 6.10) found
black, white, red, blue, green, cyan and yellow as the dominant colours. Every
one of those appears here. The screenshot work was independent of this and they
agree, which is the cross-check that both are right.

**Caveat:** these are the *initial* BIOS palette values, captured about 15
seconds into boot. Whether U2 replaces them later is untested. The values look
like a default 16-colour set (classic VGA-ish EGA ordering), so this may be the
pre-game palette rather than U2's own.

**Re-tested after the boot menu was on screen:** the palette is **unchanged**.
Running 25 seconds in, past the point where the game draws its menu, `PRI
PALETTE` returns exactly the same two rows. So this is not a transient boot
default that gets replaced, it is the palette the game runs with at that stage.
Whether a later screen (title art, in-game map) installs a different one is
still untested, and would need `PRI PALETTE` capturing at several points.

**Browser access:** `tools/container-run.sh` runs the whole stack in a podman
container with Xvfb, x11vnc and noVNC, so the game is playable from any browser
at `http://<host>:6080/vnc.html`. Verified working: noVNC returns HTTP 200,
VNC negotiates `RFB 003.008`, and a screen capture inside the container shows the
U2 boot screen at 640x480. This is now the recommended way to interact with the
running game, and it makes the runtime route available without a local monitor.

The full dump including CRTC registers is in `analysis/palette-dump.txt`.

### 6.16 Getting into the game, and what the menu actually is

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

### 6.17 U2 IS RUNNING, and its palette is finally known

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

### 6.18 In-game palette confirmed, and the disk error

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

### 6.19 "A WRONG DISK": what is and is not the cause

**Symptom:** U2 launches, shows the splash and menu, then refuses to create or
manage saves, printing `A WRONG DISK! Push [space]`. Space continues, but saves
cannot be made.

**Ruled out:**

- **Not a read-only mount.** The floppy was mounted read-only, which was a real
  bug and is now fixed: the image is copied to `saves/userdisk.hdm` and mounted
  read-write. The symptom persisted after the fix.
- **Not Tsugaru's write protection.** `-FD0UP` is now passed. The symptom
  persisted.
- **Not a failure to read the disk.** `PRI FDC` reports
  `Drive00 (/disc/userdisk.hdm) MEDIA:2HD 1232KB` and
  `Last CMD:80 Read_Sector STATUS:00`. The controller reads sector 128
  successfully. The disk is present and readable.
- **Not a corrupt image.** The BPB parses: 1024 bytes per sector, valid for FM
  Towns, `IPL4` boot signature present, root directory holds a `USERDISK`
  volume label with attribute `0x28`.
- **Not a write attempt failing.** After reaching the error,
  `saves/userdisk.hdm` is **byte-identical** to the pristine original (same MD5,
  `5ae4dc119f99`). U2 never writes. It rejects the disk before trying.

**Remaining hypothesis:** U2 wants a disk it initialised itself, not a
pre-formatted blank. The image supplied as `[UserDisk]` is a formatted but
completely empty volume (`0xE5` free-cluster fill throughout, one volume label,
no files). U2 likely checks for a signature or attempts an exclusive format that
it refuses to do on a disk with an existing label.

**The string is not in U2.** Searching `ENCHANT.EXP` for `WRONG` finds only
`WRONG TIFF HEADDER`. There is **no `WRONG DISK`** in the game binary at all. The
message comes from **TMENU**, the launcher, before U2 runs. So this is a launcher
complaint about the disk, not a game complaint. That reframes the whole problem.

**TMENU ships disk utilities.** Its symbol table names a complete disk menu:

```
MENU_DISK_FORMAT  MENU_DISK_COPY   MENU_DISK_BACKUP
MENU_DISK_RESTORE MENU_DISK_VOLNAME MENU_DISK_DISKPAT
MENU_FILE_CHDIR   MENU_FILE_DELETE MENU_FILE_EXEC
```

and the disc carries `FORMAT.EXP`, `DISKCOPY.EXP`, `LABEL.EXP`, `BACKUP.EXP`,
`RESTORE.EXP`, `DISKPAT.EXP`, `HDUTY.EXP`.

**Conclusion:** the answer to making a usable save disk is already on the disc.
Rather than synthesising a disk externally, format one from inside Towns OS
with TMENU's own Format command, which is the path the original release assumes.

**Also on the disc:** `DRIVE_R.IMG` (131,072 bytes at LBA 59) is a Towns OS RAM
disk image, volume label `TOWNES SYSTEM SAMPLE1`, containing `RUN386.EXE`. It is
not a U2 save disk but it shows the disc carries ready-made volumes.

**Superseded:** the `-GENFD` experiment produced a disk with the same `IPL4`
boot sector and `0xE5` free-cluster fill as the supplied one, and U2 still
rejects it. Generating a blank externally does not help.

### 6.20 Save disk: Option A and Option B recorded

Two routes to working saves, neither requiring a synthesised disk.

**Option A - format a floppy from inside Towns OS, then let U2 write to it.**

The launcher provides the tools. `TMENU.EXP` names a disk menu with
`MENU_DISK_FORMAT`, `MENU_DISK_COPY`, `MENU_DISK_BACKUP`,
`MENU_DISK_RESTORE`, `MENU_DISK_VOLNAME` and `MENU_DISK_DISKPAT`, and the disc
ships `FORMAT.EXP`, `DISKCOPY.EXP` and `LABEL.EXP` to back it up.

Procedure:
1. Mount a floppy in FD0. The supplied `[UserDisk].hdm` is fine as a starting
   point, and so is one made with
   `Tsugaru_CUI <roms> -GENFD saves/blank.hdm 1232`.
2. The image must be **writable**. Two separate things control that and both
   must be set:
   - the container bind mount must not be `:ro`, handled by copying to
     `saves/userdisk.hdm`,
   - Tsugaru needs **`-FD0UP`**, because floppies are write-protected by
     default.
3. In the launcher, use the disk menu to Format drive A. This writes a Towns OS
   filesystem that U2 will accept, which a merely blank or pre-labelled image is
   not.
4. Launch U2 and create a character. It writes `A:\ROSTER1.UT2` and
   `A:\WORLD1-4.UT2` directly.

**Option B - Tsugaru machine state. Documented because it is useful for
debugging, not as a substitute for real saves.**

Tsugaru can snapshot the entire VM, which sidesteps the game's own save path
entirely. Worth knowing for debugging a specific screen or chasing a bug,
because it captures exact memory and device state rather than a game-level save.

From the GUI: open the emulator menu with **Scroll Lock** or the menu icon in
the bottom-right, then **States**, then **Save machine state**, and pick a slot
or name. Load reverses it.

From the console, the same thing is scriptable:

```
SSTATE <filename>     save
LSTATE <filename>     load
```

and the command line takes **`-QUICKSTATESAVE filename`**. The console also
exposes `-QUICKSSDIR` for the directory.

**Caveat:** a state file is tied to the emulator build and to the memory
configuration. `Tsugaru_CUI` warns that a state saved under the default CPU core
may crash under `-HIGHFIDELITY` and vice versa. Treat state files as
debugger scratch, never as the thing that preserves a playthrough. Use Option A
for that.

**Tsugaru_GUI has no format command.** Its string table contains
`Select FD Image`, `Eject`, `Save Machine State`, `Load Machine State`,
`Quick State Save`, `Quick State Load`, `Save Screenshot`, `Save Captured WAV`,
`Save Captured VGM`. There is **no** floppy format, no new-disk, no initialise.
Tsugaru only mounts and ejects images. Formatting a floppy is a Towns OS job,
not an emulator job.

This matters because it means Option A cannot be done from the emulator GUI at
all. Whatever produces a disk U2 accepts must run **inside the emulated
machine**, using `FORMAT.EXP` from the disc, driven either through TMENU's disk
menu or from a Towns OS command prompt.

`Tsugaru_GUI` also requires a real display and Qt, so it cannot run in the
headless container as things stand. `Tsugaru_CUI` plus the supervisor is the
only scriptable path here.

**Not yet done:** the actual Format sequence has not been executed. Established
facts: the format function exists (`MENU_DISK_FORMAT`, `FORMAT.EXP`), the disk
must be writable (container mount and `-FD0UP`), and the launcher is what prints
"A WRONG DISK". What is missing is the click path through TMENU's disk menu, or
a route to a Towns OS command prompt. Recorded honestly rather than claimed.

### 6.21 The save-disk messages, finally decoded

**Method:** the game's user-facing messages are **Shift-JIS**, not ASCII, which
is why searching for `WRONG DISK` in any executable found nothing. `ENCHANT.EXP`
contains 2,294 Japanese strings. Decoded with `TextDecoder('shift_jis')`.

**The messages, at known file offsets:**

| offset | message | meaning |
|---|---|---|
| `0x1a0f` | ディスクが書き込み許可でない［許可にしたらキーを押せ］ | "The disk is not write-enabled [press a key once enabled]" |
| `0x1a83` | ディスクをドライブに挿入せよ。［挿入したらキーを押せ］ | "Insert a disk into the drive [press a key when inserted]" |
| `0x1af6` | 初期化したディスクをドライブに挿入せよ。［キーを押せ］ | "**Insert an initialised disk** into the drive [press a key]" |
| `0x1b63` | 正しいディスクをドライブに挿入せよ［挿入したらキーを押せ］ | "Insert the correct disk into the drive [press a key]" |
| `0x1cca` | 注意：ディスクが書き込み禁止である | "Note: the disk is write-protected" |
| `0x2f9a` | 名簿データが読めません | "Cannot read roster data" (ROSTER1.UT2) |
| `0x309a` | 世界データが読めません | "Cannot read world data" (WORLD1-4.UT2) |
| `0x26e3` | 名簿データ | "Roster data" |
| `0x27f1` | 世界データ | "World data" |

So the English `A WRONG DISK` seen on screen is the localised form of
`0x1b63`, and the requirement is explicit at `0x1af6`: **the disk must be
initialised**. A blank or pre-labelled image will not do.

**Confirmed by experiment:** removing the floppy entirely replaces the complaint
with a different one, after which U2 proceeds all the way to character creation.
So U2 starts without any disk and only demands one when it needs to read or write
roster data.

**Superseded:** the earlier claim in 6.19 that the message came from TMENU was
wrong. It is U2's own Shift-JIS string. `MENU_DISK_FORMAT` in `TMENU.EXP` is a
symbol-table entry for a build function, not a menu the user can reach, and
`Tsugaru_GUI` has no format command. There is no way to format from outside the
machine.

**What is needed:** initialise the disk from **inside Towns OS**. The disc
carries `FORMAT.EXP` for exactly this. Run it against drive A from a Towns OS
command prompt, then launch U2. That is the path the original release assumes,
and it is the only remaining route.

**Definitively not reachable from the launcher.** `TMENU.INF` is a plain-text
menu definition listing every program TMENU can start:

```
\RUN386.EXE darkness.exp    ULTIMA I
\RUN386.EXE enchant.exp     ULTIMA ][
\RUN386.EXE exodus.exp      ULTIMA ]I[
\RUN386.EXE british.exp     MESSAGE
\RUN386.EXE UT1DEMO.EXP     UT1_INTRO
\RUN386.EXE UT2DEMO.EXP     UT2_INTRO
\RUN386.EXE UT3DEMO.EXP     UT3_INTRO
```

Eight entries, and `FORMAT.EXP` is not one of them. The launcher has no system
menu, no disk tools, and the A/B/CD tabs are drive *browsers* that display
contents, not disk utilities. Confirmed against the live UI: the A tab shows an
empty window because the floppy genuinely has no files, and there is no menu
anywhere offering a format.

This release's launcher is a game selector only. It was never intended as a
Towns OS shell.

**Attempted and failed:** passing `-CONSCMD FORMAT.EXP` as a launch argument.
The emulator accepted the option, the argument was correctly formed (verified in
the container log), the VM booted normally, and the floppy image was
**byte-identical afterwards** (`5ae4dc119f99` before and after). The command did
not format anything.

`CONSCMD` is not a console command, so it cannot be injected through the
supervisor API either; typing it returns `Do what?`. It is a launch option only.

Likely reasons, none verified: `-CONSCMD` requires the exact Towns OS command
syntax (`FORMAT.EXP` may need a path or different switches), the command runs
before the drive is ready, or `FORMAT.EXP` needs interactive confirmation that a
non-interactive launch cannot supply.

**Not done:** the interactive route. Booting with `NO_FD=1` reaches U2's
character creation with no disk error, so the launcher and the game both work.
What remains is formatting a disk through the Towns OS user interface, which
needs a human at the browser session.

### 6.22 Saves are blocked, and why

**Symptom:** character creation completes, then U2 reports a save failure and
returns to its prompt in a loop.

**Measured:** the messages are Shift-JIS. Decoded:

| offset | message | meaning |
|---|---|---|
| `0x1af6` | 初期化したディスクをドライブに挿入せよ | "insert an initialised disk" |
| `0x1b63` | 正しいディスクをドライブに挿入せよ | "insert the correct disk" |
| `0x26b3` | の保存に失敗しました | "failed to save" |
| `0x28b9` | デ－タを正常にセ－ブできませんでした | "could not save data normally" |

So the loop is: create character, attempt to write `A:\ROSTER1.UT2`, fail
because the disk is not initialised, print `0x28b9`, return to the prompt.

**There is no way to initialise the disk from this release.** `TMENU.INF` lists
exactly eight launchable programs and `FORMAT.EXP` is not among them. The
launcher has no system menu. Its A/B/CD tabs are drive browsers, confirmed
against the live UI: the A tab shows an empty window because the floppy is
genuinely empty, and no menu anywhere offers a format.

FORMAT.EXP ships on the disc but is unreachable. This launcher is a game
selector, not a Towns OS shell.

**Consequence:** in-game saves are not achievable with this disc alone.

**Workarounds, in order of practicality:**

1. **Tsugaru machine state.** Works today. Scroll Lock or the GUI menu, then
   States, then Save machine state. Captures the whole VM so play resumes
   exactly. Console equivalents `SSTATE`/`LSTATE`, and `-QUICKSTATESAVE` at
   launch. Tied to the emulator build, so debugger-grade rather than portable.
2. **A Towns OS environment.** Towns OS V1.1 L10 or V2.1 L20/L31, or the
   Tsugaru project's Rescue Boot Loader CD, would give a command prompt where
   `FORMAT.EXP` can actually be run. Not present in this download.

   **Tested and ruled out:** booting with `-NOINTCD` and no disc, hoping the
   FreeTOWNS compatible ROM would fall through to a shell. It does not. The
   machine stops inside the boot ROM at `CS:EIP=FC00:00000A04` displaying a
   notice about running on compatible ROMs, and ignores keystrokes. The reason
   is that `FMT_SYS.ROM` still needs a bootable medium, and the supplied
   `UserDisk` floppy carries an `IPL4` boot sector with **no bootable files in
   it**, so there is nothing to boot. Verified: no `.EXE`, `.SYS` or `.COM`
   entries anywhere in the boot area.

   So a compatible ROM is not enough on its own. A real Towns OS CD image is
   required.

   **Also tested and ruled out:** `TsugaruUtil.D77`, which ships with the
   emulator. It is a valid D77 with an `IPL4` boot sector and contains
   `TGDRV.COM` and `TGMOUSE.exe`, but booting it as FD0 with `-NOINTCD` produces
   the same halt on the compatible-ROMs notice. It is a data/utility disk for
   host file sharing, not a Towns OS system disk, exactly as the Tsugaru README
   describes.

   Every bootable medium present in this download has now been tested. None of
   them reaches a shell.
3. **Patch or bypass.** U2 could be patched to skip the save, or the disk
   initialisation performed by a small Towns OS program written for the purpose.
   Both are real projects, not quick fixes.

### 6.23 The zero-filled disk suggestion, assessed

**Suggestion received:** create a save disk with
`dd if=/dev/zero of=save_disk.d88 bs=1261568 count=1` and mount it as `-FD0`.

**Assessed against the evidence, and it cannot work.** Measured byte histograms:

| image | size | dominant bytes |
|---|---|---|
| supplied `[UserDisk].hdm` | 1,261,568 | `0xE5` x1,250,304, `0xF6` x5,922, `0x00` x4,913 |
| `TsugaruUtil.D77` | 1,281,968 | `0xE5` x1,005,615, `0x00` x186,364, `0xF6` x7,758 |
| `dd` zero fill | 1,261,568 | `0x00` x1,261,568 |

Both real disks are dominated by `0xE5`, which is FAT12's free-cluster marker.
A zero-filled file has none of that. It has no boot sector, no BPB, no FAT and no
directory, so it is not a formatted disk at all. U2's own requirement, decoded
from Shift-JIS at `0x1af6`, is an **initialised** disk. Zeros are not that.

**Also note the sizes:** FM Towns 2HD is 1,261,568 bytes (1232 x 1024),
confirmed against the supplied image. 1.44 MB is the IBM PC format and does not
apply here, so creating a 1.44 MB image would be wrong for this machine.

**Tested:** mounted a zero-filled image as FD0 and booted. The launcher came up
normally, but reaching character creation to observe the write attempt was not
completed, so the zero-disk case is *unconfirmed in practice*. It is however
ruled out on structure alone: a filesystem-less image cannot satisfy a check for
an initialised disk.

**One thing in the suggestion is right and useful:** `-GAMEPORT0 KEY` maps the
game port to keyboard. Worth adding for any title that reads a joystick, though
U2 is keyboard and mouse driven so it does not apply here.

**Still the conclusion:** a Towns OS image is needed to initialise a floppy. No
amount of external file creation substitutes for running the machine's own
formatter.

### 6.24 The save-disk problem, solved by outside research

**Independent confirmation of the diagnosis.** Searching for the exact symptom
found two sources describing the same thing.

From r/fmtowns, someone with the identical failure:

> ultima 1-3 have an error when creating character that tells you **disk not
> ready**. Open the menu using the small button on the right side bottom, then
> select FD0, then choose select image.

That matches the `NO_FD` test in 6.19, where removing the floppy gave "drive not
ready". So the disk must be present. It also shows this is a known obstacle, not
something specific to our setup.

**Why the disk must be blank.** The Exodus Project, writing about U2's original
floppy release:

> if you try to create a new character when one already exists, the game gives
> you a not-so-user-friendly "Not a blank player disk" message... U2 was run
> entirely on floppies and included separate program master, player master, and
> galactic disk.

So U2 expects a specifically blank player disk, and checks for it. That is
consistent with the Shift-JIS message at `0x1af6` requiring an **initialised**
disk: initialised but empty.

**The missing piece, identified.** From gekk.info's FM Towns emulation guide:

> DOS and **TownsOS 1.1** are available as floppy images... The BIOS pack I made
> contains DOS, **TownsOS 1.1 which boots to a GUI**, and a boot disk for
> TownsOS 2.1 that just boots to DOS.

Towns floppy images are `.HDM`. The pack is at
`https://gekk.info/files/FMT%20ROMs.7z`.

This is precisely what every attempt in 20-23 lacked: a **bootable** Towns OS
medium. Every disk in the archive.org download is a data disk, which is why
booting any of them halts in ROM.

The same guide also notes that TownsOS 2.1 needs a CD and can be booted like a
game.

**The complete chain, now known:**

1. Boot TownsOS 1.1 from gekk's `.HDM` floppy image as FD0.
2. From its command line, format a second floppy. This writes the boot sector,
   BPB and FAT that every blank image lacks.
3. Launch U2 with the formatted disk in FD0 and the CD mounted.
4. Character creation should then write `A:\ROSTER1.UT2` successfully.

**Status:** the chain is fully identified but not yet executed. The BIOS pack is
a third-party download not yet fetched.

### 6.25 MAME source, and the discovery that U2 formats the disk itself

**Checked the MAME lead.** `src/lib/formats/fmtowns_dsk.cpp` in
`mamedev/mame` defines the geometry:

```cpp
{ floppy_image::FF_35, floppy_image::DSHD, floppy_image::MFM,
  1200, 8, 77, 2, 1024, {}, 1, {}, 50, 22, 84 }
```

3.5 inch, double-sided high density, **8 sectors x 77 tracks x 2 sides x 1024
bytes = 1,261,568 bytes**, matching every image we have. The class derives from
`wd177x_format`, and its only method beyond metadata is `save()`, which writes
raw sector data. **MAME contains no filesystem formatter.**

`fmtowns.addblankdisk` from the Batocera wiki is a Batocera wrapper option, not a
MAME or Tsugaru feature. MAME's `fmtowns.cpp` only mounts images and registers
the format. Nobody in that stack formats anything; a blank is mounted and the
game is expected to deal with it.

**Which led to the real answer.** Searching `ENCHANT.EXP` for `FORMAT`,
`FORMAT.EXP` and `初期化` as ASCII finds **nothing**. U2 has no formatter of its
own either. But decoding the Shift-JIS around `0x1d2b` gives:

```
承諾するならば［　］を押せ      "If you accept, press [ ]"
〜ないならば［　］を押せ        "If you do not, press [ ]"
```

So U2 **offers to initialise an unformatted disk and asks you to accept**. The
message at `0x1af6`, "insert an initialised disk", is the *fallback* path taken
when you decline or when the disk cannot be initialised.

**The correct procedure, therefore:**

1. Mount a **blank** disk in a writable slot. It must be writable, which needs
   both a non-`:ro` container mount and `-FD1UP` (not `-FD0UP`, since FD0 is the
   boot disk).
2. Launch U2 and reach character creation.
3. When U2 asks, **accept** the initialisation prompt.
4. U2 writes the filesystem itself, then writes `A:\ROSTER1.UT2`.

**What was wrong with every earlier attempt:** the floppy was mounted read-only,
then writable but with the wrong drive write-protect flag, and in each case we
were reading the *fallback* message rather than reaching the accept prompt. The
disk being pre-formatted was never the requirement.

**Status:** procedure identified, not completed end to end.

**Tested with a correctly configured blank writable disk:**

```
-FD0 /data/savedisk.hdm -FD0UP -BOOTKEY CD
```

all-zeros image, writable mount, correct drive's write-protect flag cleared.
Result: **`A WRONG DISK`**, and the image was still byte-identical all-zeros
afterwards. U2 inspected the disk, rejected it, and wrote nothing.

So U2 refuses a zero-filled image before offering to initialise it. Whatever it
checks for is not "is this writable" and not "is this empty". It is looking for
something in the existing content.

**What "A WRONG DISK" is not:** it is not a stored string. Searching
`ENCHANT.EXP` and `BRITISH.EXP` for `WRONG`, `DISK`, `Wrong` and the Japanese
`間違`, `違うディスク`, `正しくな` finds nothing relevant. `EXODUS.EXP` has
`間違` once, for dungeon codes. The message is either assembled at runtime or
comes from Towns OS rather than U2.

**Two roster messages that are distinct and matter:**

| offset | text | meaning |
|---|---|---|
| `0x2f2a` | まず、キャラクタを作成してください | "First, please create a character" (disk OK, just empty) |
| `0x2f9a` | 名簿データが読めません | "Cannot read roster data" (disk unreadable) |

Reaching `0x2f2a` would mean the disk passed. We have never seen it.

**Remaining hypothesis:** U2 wants a disk with an existing FAT and directory
structure, which is what a Towns OS `FORMAT` produces and a zero-filled file
does not. That returns the problem to needing `FORMAT.EXP`, which needs the CD
mounted from a Towns OS shell, which the FreeTOWNSOS shell does not provide
cleanly.

### 6.26 FORMAT.EXE running, and the keyboard fix

**Injected `FORMAT.EXP` into the FreeTOWNSOS boot floppy.** The OS shell has no
builtin formatter, but the game CD ships `FORMAT.EXP`, and the boot floppy has
`RUN386.EXE`. Built `tools/addfile-fat12.js` to add a file to an FM Towns 2HD
FAT12 image directly:

- geometry read from the BPB: 1024 B sectors, 1 sector/cluster, 1 reserved,
  2 FATs of 2 sectors, 192 root entries, 1232 sectors
- root dir at `0x1400`, data at `0x2c00`, clusters from 2
- allocates from the first free cluster and links the FAT12 chain
- writes the 32-byte directory entry

Result: `FDIMG_FMT.BIN`, verified as `FORMAT EXE`, cluster 245, 208930 bytes,
chain 245-449 with no overlap (original image data ends at 244). `dir` lists it
after a fresh boot, and typing `format` starts the Towns OS formatter, whose own
strings confirm it is the real thing:

```
0x7d2c ディスクの初期化              "disk initialisation"
0x7d40 初期化するドライブを選んでください  "select the drive to initialise"
0x7ee4 ディスクの初期化をしています      "initialising disk"
0x7e3c 正常に終了しました              "completed successfully"
```

**Keyboard fix, and a general gotcha.** Typing `b:` produced `b+`. The cause is
Tsugaru's default `KEYBOARD DIRECT` mode, which sends raw keycodes based on
physical layout, so a UK keyboard's Shift+`;` does not become a colon. Fix:

```
KEYBOARD TRANSLATE
```

which converts typed characters to FM Towns keycodes regardless of layout,
confirmed by the console reply `Keyboard TRANSLATION Mode 1`. After that `b:`
types correctly. **Anyone driving this emulator from a non-Japanese keyboard
should set TRANSLATE before typing anything.**

**Status:** FORMAT.EXE is running and interactive. The remaining step is
selecting drive B: and confirming, which needs a human at the VNC session since
the utility is mouse-driven and `xdotool` pointer events do not reach the VM.
The target image is still all zeros pending that.

### 6.27 The utility hard drive: Towns OS 2.1 L40 booting, and FORMAT located

**`disk/TownsHDD_V1.HDM`, 15,931,539,456 bytes.** From
`nfggames.com/forum2/index.php?topic=6954.0`, where the author describes it as a
pre-installed FM Towns hard drive for real hardware and Tsugaru.

**Measured:** only the first 2 GB has content (1,069 of 15,194 one-MB blocks,
7%). Expected, because the author used a 16 GB SD card and said "only SCSI
Device 0 with 10 partitions which equal 2GB roughly are being utilized".

`disk/HDD V1.rar` contains exactly the same two files already extracted. No new
content.

**The partition table is at offset 0x200**, entries of 16 bytes plus a 16-byte
name. Decoded names:

| # | start | size | name |
|---|---|---|---|
| 1 | 0x000003 | 0x04cbc4 | `MS-DOS` `TownsOS` |
| 2 | 0x000488 | 0x0003f8 | `MS-DOS` `V2.1L40 SYSTEM` |
| 3 | 0x000880 | 0x0003f8 | `MS-DOS` `Doujinshoft1` |
| 4 | 0x000c78 | 0x0003f8 | `MS-DOS` `Doujinshoft2` |

**The boot failure was the CMOS.** Tsugaru does not scan for partitions; it reads
the drive assignment from CMOS. Booting with a fresh CMOS found no bootable
partition and stopped at the IPL. Using the supplied `disk/CMOS.DAT` instead:

```
-CMOS /data/CMOS_HDD.bin -HD0 /disk/TownsHDD_V1.HDM -BOOTKEY H0
```

boots to a **Towns OS V2.1 L40 windowed desktop** (48% #cccccc, 37% #ffffff, blue
UI chrome). The forum post states this directly: "G Partition must be selected as
your boot partition as that has TownsOS on it."

**`FORMAT` located.** Scanning the used 2 GB for the string gives a hit at
`0x1ABB59E`, and the nearest executable header before it is `MP` at
`0x1AB5589` — a Phar Lap 386 executable, the same container as the Ultima games.
The help text it contains is the real Towns OS formatter:

```
FORMAT <ドライブ名> を実行すると, RECOVER <ドライブ名> が実行できなくなります
UNFORMAT [/J]
UNFORMAT [/U] [/L] [/TEST] [/P]
UNFORMAT /PARTN [/L] [/P]
  /J     MIRROR ファイルを作り直す...
```

So `FORMAT` takes a drive letter, exactly as expected, and it exists on this
disk. It has not yet been run.

**Also on the disk per the author:** partition N has a High C compiler, Basic 386
and assembler with C libraries; J/K/L have pre-installed games including Ultima
Underworld II as `UW2TOWNS`.

**Status:** Towns OS 2.1 boots. The formatter is present and identified. Running
it requires driving the desktop GUI, which `xdotool` pointer events do not
reliably reach, so it needs a human at the VNC session.

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

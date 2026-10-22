# The colour palette

Five static approaches failed before the palette was read from the running
machine with `PRI PALETTE`. This page records all of them, including the
failures, because the failures are what make the final answer credible.

## Summary

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

---

**[Running the game, and reading the machine](playing-and-environment.md)** **[Assets and graphics](assets-and-graphics.md)**

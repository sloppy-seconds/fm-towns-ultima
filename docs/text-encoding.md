# The text encoding: `0xEB` escapes a font code, and the table is not in the binary

**Found while reading `0xeeda8`. The game's strings are not Shift-JIS and not ASCII: `0xEB`
introduces a font character code. The code-to-glyph table is not established, so no string in this
binary can be read yet.**

## What `0xeeda8` does

The `funtriage` ranking put it at 13, not the top, because it calls no TBIOS stubs. It is a
different kind of target: a game function touching all three object-table globals.

```
0xeeda8  push ebp / mov ebp,esp / sub esp,0x20
0xeedb1  mov [ebp-0x1d], 0
0xeedb5  push 7 ; call 0xe6b3c
0xeedbc  push 0x42dc ; push 7 ; call 0xe5854     output string 0x42dc
0xeedc8  mov eax,[0xceca0]                       the character index
0xeedcd  lea/lea/shl/sub                         index * 95
0xeeddb  cmp [edx+0xcde56], 1                    a per-character flag
0xeeddf  je 0xeee20
0xeedf2  push 0x42f4 ; push 7 ; call 0xe5854     output string 0x42f4
0xeee05  push 0x4308 ; push 7 ; call 0xe5854     output string 0x4308
0xeee20  push 7 ; call 0xe28c8                   a different path
0xeee30  push 0x4334 ; push 7 ; call 0xe5854
```

So `0xe5854` takes **(string, channel)** and is the text output routine, and `0xe6b3c`, `0xe6e68`,
`0xe28c8` are companions on the same channel 7. `0xe5854` is the highest-degree function in the
`0xe5xxx` cluster and is now a known anchor: **every call to it is a text output.**

The branch on `[edx+0xcde56]` is the same flag the object lookup used in
[movement-wrap-found.md](movement-wrap-found.md), so the three paths are three states of one
condition.

## The string encoding

`0x4308` decodes as Shift-JIS: **`~しました`**. The others do not, because they contain `0xEB`:

```
0x42dc   EB 42 EB 5A EB 67 EB 5C EB 5E EB 65 EB 5E EB 5D   then 24 spaces
0x4334   EB 6C 2E 6D EB 52 EB 69 EB 5A EB 5C EB 5E 2E 6E
```

So the format is: plain ASCII bytes are literal, and `0xEB <byte>` is a **character code**. The
trailing spaces are field padding, which says these are column templates rather than messages.

**The codes are not ASCII.** Reading `EB 42` as `B` gives `BZg\^e^]`, which is not a word. It is a
font glyph index, and the glyph table is not in `ENCHANT.EXP`.

## What this blocks, and how much

**Every string in the binary is unreadable until the glyph table is found.** That includes:

- the menu commands at `0x1673` (`A)ttack  J)ump  S)teal`), whose letters are plain ASCII and do
  read, so the table only affects the `0xEB` runs
- the 81 distinct strings in `extracted/strings.json`
- the message table at `0x1518` with its 56-byte stride

**Three attempts to find the table, all failed, and all recorded here.**

**First, `GAI.TIF`.** `tools/fontgrid.js` names it as a 352 by 352 character sheet with 184 empty
columns and 103 empty rows. Running the tool on the extracted `extracted/u2/title/gai.png` gives
**one ink run per axis**, a single 168 by 249 picture in the middle of the sheet. That is a title
graphic, not a grid of glyphs, so `GAI.TIF` is not a font. The earlier note about 184 empty columns
was reading a sparse picture, not a character sheet.

**Second, a font file among the assets.** The disc carries 63 `.TIF` files and no `.FNT`, `.DAT` or
any other font container. Nothing there is a glyph table.

**Third, `GAIJI2.COM`.** That name means user-defined characters and it is a Fujitsu program,
6,849 bytes, banner `Copyright FUJITSU LIMITED 1989-1990`, entered by the usual COM `jmp +0x3c`.
It is a driver, not a table: its dense data region is 193 bytes of code, and its system calls are
`int 21h` with `AH=09` (print) at two sites and `AH=3e`/`AH=3f` (close and read) at two more. Nothing
in it is a glyph bitmap.

**Where that leaves it.** The glyphs are most likely a TBIOS service rather than game data, which is
consistent with there being no font file on the disc: `fmtownskit`'s `tbiosld.py` lists a `FNT`
module among the TBIOS components for the modular builds. Naming a character code therefore means
either reading the font module out of `TBIOS.BIN`, or reading AH `0x0c`, `0x15`, `0x16` and `0x17` in
[first-ranked-function.md](first-ranked-function.md), which are the calls the text path uses.

Unproven in both cases. What is proven is that the table is not in the assets and not in
`GAIJI2.COM`.

## What was tried and failed

Reading `EB 42` as `0x41 + (code - 0x41)` is a tautology: it returns the code unchanged and produced
`BZg\^e^]`. Recorded because the first version of that test looked like it was doing something.

Trying Shift-JIS on the whole string fails at byte 0 with `illegal multibyte sequence`, which is what
established that `0xEB` is not a Shift-JIS lead byte but an escape.

## What is established

| | |
|---|---|
| `0xe5854` | text output, takes (string address, channel) |
| channel 7 | used by `0xe6b3c`, `0xe6e68`, `0xe28c8`, `0xe5854` together |
| `0xEB` | escapes one font character code |
| the code table | **not found**, and it is not in `ENCHANT.EXP` |
| `0xcde56` | a per-character flag, `1` selecting a different output path |

That is four anchors where there were none, and one blocker stated plainly rather than worked
around.


## The glyph geometry, found in the layout engine

`0xe5854` is a wrapper: it optionally scans to a NUL and calls `0xe6eb0`. That second routine is the
text layout engine and it states the character size as arithmetic:

```
0xe6ebf  lea eax, [eax+eax*2]        ; eax = 3 * arg
0xe6ec2  lea edx, [eax+eax*8]        ; edx = 9 * eax  = 27 * arg
0xe6ec5  lea edx, [eax+edx*2]        ; edx = 55 * arg
0xe6ec8  lea ebx, [edx+0x7aee4]      ; ebx = 0x7aee4 + arg * 55
0xe6ede  mov ax, [ebx+1]             ; window x
0xe6ee2  add ax, 4
0xe6ee6  mov edx, [ebx+0x19]
0xe6ee9  shl edx, 3                  ; column * 8    <- character width
0xe6eec  add edx, eax
0xe6ef5  mov ax, [ebx+5]             ; window y
0xe6ef9  add ax, 0x11                ; 17
0xe6efd  mov edx, [ebx+0x1d]
0xe6f00  shl edx, 4                  ; row * 16      <- character height
```

**A cell is 8 by 16 pixels**, and a text window is a 55-byte record at `0x7aee4 + n * 55` holding
its origin, cursor and a `0xcda7e`-style working buffer.

That is the first hard number about the font: **8 wide, 16 tall, one bit per pixel is 16 bytes per
glyph**, twelve and a half glyphs per 200 bytes, and a full 256-glyph set would be 4,096 bytes.

It also settles the search shape. A glyph table would be 16 bytes per entry, not 32, and the earlier
scan tested lag 32 first.

## What the TBIOS calls in this path actually do

Read directly from `TBIOS.BIN`, they are not font calls:

```
AH 0x0c -> 0x1e04   test dx,0x20 / and dx,0xffbf ...  mov [gs:ebp+0x108], dx   a mode byte
AH 0x15 -> 0x1f1c   cmp al,3 / mov [gs:ebp+0x34c], al                          an attribute byte
```

So the text path sets display flags and the rendering is the game's own code at `0xe6eb0`, reading
cells from the font by a mechanism not yet found. The glyph table is therefore probably in
`ENCHANT.EXP` after all, at 16 bytes per glyph, and the earlier searches used the wrong stride.

## Searching for the glyph table: five attempts, none succeeded

With 8 by 16 established, a glyph is 16 bytes and a 256-glyph set is 4,096. Five tests were run
against `ENCHANT.EXP` and `TBIOS.BIN` and all five failed:

1. **Distinct 32-byte chunks per window.** Every window scored near the maximum, because random code
   bytes are all distinct too. The metric does not separate a font from code at all.
2. **Rows whose low nibble is zero**, on the theory that glyph rows are padded. Two clusters scored
   high, at `0x0c00` and `0x0ba00`, and rendering them as glyphs showed vertical repetition and
   noise rather than letterforms. The test was measuring coincidence.
3. **High-entropy region in `TBIOS.BIN`.** The file is 63 to 86 percent non-zero throughout with no
   boundary between code and data, so there is no block to isolate.
4. **Blank first and last rows of each 16-byte unit.** The winners were all inside zero fill, and
   the `255 of 255` blank-bottom score was the zero region rather than a property of glyphs.
5. **Rendering the best candidate**, `0x0dba00`, as 8 by 16 bitmaps. Every unit was all zeros.

**What this rules out** is a contiguous 1bpp glyph table in either file at these strides. What it
does not rule out is a table that is stored 4bpp, stored compressed, or addressed through the TBIOS
graphics layer rather than read by the game.

**One thing the failure does establish**: the search was being run before the format was known, five
times, and each test was a guess about glyph structure rather than a measurement of it. The next
attempt should start from the code that draws a character, not from the file.

## Status

| | |
|---|---|
| character cell | **8 by 16 pixels**, from `0xe6eb0` |
| text window record | 55 bytes at `0x7aee4 + n * 55` |
| `0xe5854` | wrapper, optional NUL scan, calls `0xe6eb0` |
| `0xe6eb0` | layout engine: origin, cursor, per-character placement |
| glyph storage | **not located**. Five searches failed, listed above |
| next step | find the draw call inside `0xe6eb0`'s character loop |

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


## The draw chain, found: TBIOS function `0x60`

The draw call inside `0xe6eb0`'s character loop is at `0xe6fd5`, and it goes to a **TBIOS thunk**,
not to game code.

```
0xe6fc4  mov word [0xcda7c], dx     the advance width
0xe6fcb  push 0xcda78               a struct: x at +0, y at +2, width at +4
0xe6fd0  push 0x7a7d8               the display context
0xe6fd5  call 0xc7d                 draws one character
```

`0xc7d` is `mov ah,0x60`, then push `fs`, push `0x110`, pop `fs` and `lcall fs:[0x20]`. **My earlier thunk
scan missed it**, because the entry scan looked for a preceding `ret` and this stub is preceded by
`8b 74 24 10` continuing from the previous instruction. The AH-value scan found it and the entry scan
did not, and that is recorded because it means the 70-stub count is a floor, not a total.

### The handler, `TBIOS.BIN 0x336c`

```
0x336c  test word [gs:ebp+0x108], 0xe     the mode byte again, skip if no display
0x3378  lodsd eax, [esi]                  first dword of the struct
0x3379  mov [gs:ebp+0x344], eax           -> the x
0x3380  lodsw ax, [esi]                   next word
0x3382  test ax, ax ; je 0x33cd           a zero width draws nothing
0x3387  mov [gs:ebp+0x348], ax            -> the width
0x338f  mov [gs:ebp+0x33c], esi           the glyph pointer
0x3396  mov [gs:ebp+0x340], ds
0x339d  mov byte [gs:ebp+0x378], 0x10     the height, 16
0x33a5  call 0x3568                       the blit
```

**`0x10` is the height and it agrees with the `shl edx,4` found in the layout engine.** Two
independent statements of 16.

### The blit selects a routine by attribute

`0x3568` compares two values and installs a function pointer:

```
0x3580  cmp dword [gs:ebp+0x350], 0x100008
0x358d  mov dword [gs:ebp+0x330], 0xf538    if equal
0x359a  mov dword [gs:ebp+0x330], 0xf5e0    otherwise
0x35a6  cmp dword [gs:ebp+0x354], 0x100010
0x35b3  mov dword [gs:ebp+0x334], 0xf538    if equal
```

`0xf538` computes a rectangle from the x, y and width fields. `0xf5e0` is the interesting one.

### `0xf5e0` states the pixel handling

```
0xf5e0  movzx eax, byte [gs:ebp+0x34c]     the attribute set by AH 0x15
0xf5e8  mov eax, cs:[eax*4 + 0xfad0]       a second dispatch table, four entries
0xf5f7  test dl, 2
0xf5fc  mov eax, 0xfc13                    one path
0xf603  mov eax, 0xfe78                    the other
0xf61a  mov cx, [gs:ebp+0x362]             a byte count
0xf622  shr cx, 1 ; jae ...                odd byte: not byte [esi] ; inc esi
0xf62a  shr cx, 1 ; jae ...                odd word: not word [esi] ; add esi, 2
0xf635  not dword [esi] ; add esi, 4       then dwords
```

**The `not` cascade is a complemented copy**, so the glyph is stored as a plain bitmap and inverted
while being merged. The loop's byte count comes from `[ebp+0x362]`, and the table at `0xfad0` has
exactly **four** entries, `0xfae0`, `0xfb14`, `0xfb68` and `0xfbc0`, one per text attribute.

## What this changes about the glyph search

The five failed searches all assumed the game reads a glyph table out of `ENCHANT.EXP` and feeds
pixels. It does not: **it hands a pointer to TBIOS and TBIOS renders.** So:

- the glyph pointer in `[gs:ebp+0x33c]` comes from the caller's struct, and the caller is game code
  in `0xe6eb0`'s loop
- the format is whatever TBIOS expects, which the `not` cascade suggests is a plain 1bpp bitmap of
  `0x362` bytes per row-block
- a table in `ENCHANT.EXP` is still the most likely storage, and the search should now be driven by
  what `0xe6eb0` puts in that struct rather than by byte statistics

## Status

| | |
|---|---|
| character cell | **8 by 16 pixels**, stated twice: `shl edx,4` and `[ebp+0x378]=0x10` |
| draw call | `0xe6fd5` -> `0xc7d` -> TBIOS **AH 0x60** -> `TBIOS.BIN 0x336c` |
| the blit | `TBIOS.BIN 0x3568`, installing `0xf538` or `0xf5e0` by attribute |
| text attributes | four, dispatched through `TBIOS.BIN 0xfad0` |
| pixel handling | a `not` cascade over a byte count, so a plain bitmap inverted on merge |
| glyph storage | **not located**. The search now follows the struct built in `0xe6eb0` |


## The text is Shift-JIS after all, and `0xEB` is a lead byte

`0xe6eb0`'s character loop contains the textbook Shift-JIS test, and it refutes the escape theory
recorded above:

```
0xe6f35  mov al,[edi]
0xe6f37  cmp al,0x81 ; jb ...        ; below 0x81 is single-byte
0xe6f3b  cmp al,0x9f ; jbe 0xe6f4d   ; 0x81..0x9F: a Shift-JIS lead byte
0xe6f41  cmp al,0xe0 ; jb ...
0xe6f49  cmp al,0xfc ; ja ...        ; 0xE0..0xFC: the second lead range
0xe6f4d  mov al,[edi+1]
0xe6f50  cmp al,0x40 ; jb ...
0xe6f54  cmp al,0x7e ; jbe 0xe6f63   ; trail byte 0x40..0x7E
0xe6f5b  cmp al,0x80 ; jb ...
0xe6f5f  cmp al,0xfc ; ja ...        ; or 0x80..0xFC
```

Those are Shift-JIS's lead and trail ranges exactly. **`0xEB` is inside `0xE0`-`0xFC`**, so the
`EB 42` pairs in the strings are two-byte Shift-JIS characters and not an escape plus a font code.

**The earlier "font character code" reading was wrong in form and right in substance.** The bytes
are Shift-JIS structured, and they are also not standard Shift-JIS: every `0xEB xx` pair in
`0x42dc` is accepted by the game's test and **rejected by a standard Shift-JIS decoder**.

```
EB42 REJECT    EB5A REJECT    EB67 REJECT    EB5C REJECT
EB5E REJECT    EB65 REJECT    EB5E REJECT    EB5D REJECT
```

That is the definition of **gaiji**, user-defined characters: valid Shift-JIS lead and trail ranges,
codes the standard leaves unassigned, glyphs supplied by the program. Which is what `GAIJI2.COM`
is for, and why its name is not a coincidence.

So the position is sharper than before. The encoding is Shift-JIS with a gaiji block, and the *glyphs*
for that block are installed by the game or by the Fujitsu driver, and **the code is not a font
index and not plain ASCII either**.

## The complete text path

```
0xe6eb0  the layout engine
  0xe6ebf..0xe6ec8   select the text window record: 0x7aee4 + n * 55
  0xe6ede..0xe6ef2   compute x = window.x + 4 + cursor * 8
  0xe6eed..0xe6f03   compute y = window.y + 0x11 + row * 16
  0xe6f25..         take one character, testing for Shift-JIS lead and trail
  0xe6f90           a 0x0A advances the line, a 0x00 ends the string
  0xe6fc4           width = the number of bytes consumed
  0xe6fcb..0xe6fd5  call the draw: the struct at 0xcda78 plus the context
  0xe6fe2           advance the cursor, and when the row is full call 0xe6dc8
```

`0xe6dc8` is the line-full handler and it **fills a background rectangle**:

```
0xe6df1  mov [0x7add8], ax     ; x1 = window.x + 2
0xe6e02  mov [0x7adda], ax     ; y1 = window.y + 2
0xe6e1a  mov [0x7addc], ax     ; x2 = window.x + width - 3
0xe6e32  mov [0x7adde], ax     ; y2 = window.y + height - 3
0xe6e48  call 0x8b6            ; TBIOS AH 0x2b, a rectangle primitive
```

## The rectangle retraction, itself retracted

[recompilation-conflicts.md](recompilation-conflicts.md) recorded a correction saying `0x7add8` was
"not established to be a rectangle". **It is one.** It is written at `0xe6df1` through `0xe6e32`
from the window origin and size, with 2 added to the near edges and 3 subtracted from the far ones,
and then passed to a TBIOS rectangle call.

The earlier retraction was based on the AH 0x46 handler, which turned out to be a different routine
reaching the same struct. Two callers, two purposes, one buffer.

## Status

| | |
|---|---|
| character cell | **8 by 16 pixels** |
| encoding | **Shift-JIS**, tested at `0xe6f35` |
| draw call | `0xe6fd5` -> `0xc7d` -> TBIOS **AH 0x60** |
| background fill | `0xe6e48` -> `0x8b6` -> TBIOS **AH 0x2b**, rectangle `0x7add8` |
| text window | 55-byte record at `0x7aee4 + n * 55` |
| encoding, precisely | Shift-JIS with a **gaiji block**: `0xEB xx` pairs are valid by the game's test and rejected by a standard decoder |
| what `0xEB` is | **unresolved**. Four readings failed, listed below |


## Counting `0xEB` in the text region, and what it shows

A frequency count over `0x1348` to `0x6000`, the region where printable ASCII stops:

| lead | count |
|---|---|
| `0x81` | 1032 |
| `0x82` | 908 |
| `0x83` | 437 |
| `0xEB` | **3652** |
| `0xE1` | 2 |

`0x81`, `0x82` and `0x83` have the frequencies of Shift-JIS punctuation and katakana, which fits
what [three-games-compared.md](three-games-compared.md) measured. **`0xEB` at 3652 against `0xE1` at
2 is not a character code distribution.** No character block has one member outnumbering its
neighbours by three orders of magnitude.

So `0xEB` is not a lead byte here, and it is not an escape to a font index either. What follows it
is mostly **printable ASCII**:

```
0x1474  EB 4F EB 42 EB 4C EB 5A EB 5A EB 6D EB 5A ...
        O    O    B    L    Z    Z    m    Z
```

Stripping the `0xEB` bytes gives `OBL CZmZ eh`, which contains word-shaped fragments and is not
readable Japanese or English. So neither reading is right, and the correct one has not been found.

## Where this leaves the encoding, honestly

Four readings have now been tried and each failed on a measurable test:

| reading | how it failed |
|---|---|
| plain ASCII with `0xEB` as an escape to a glyph code | stripping gives `OBL CZmZ eh`, not words |
| the pairs are Shift-JIS | a standard decoder rejects every one |
| `0xEB` is a Shift-JIS lead byte | 3652 uses against `0xE1` at 2 is not a character distribution |
| `0xEB` marks gaiji | gaiji sets are small, and 155 distinct pairs over 14,214 occurrences in the whole file is far too many |

**What is certain** is the surrounding machinery, which does not depend on the encoding: the cell is
8 by 16, the draw is TBIOS AH `0x60`, the background is AH `0x2b` with a rectangle at `0x7add8`, the
window is a 55-byte record at `0x7aee4 + n * 55`, and the character loop at `0xe6eb0` tests
Shift-JIS lead and trail ranges and advances on `0x0A`.

**The contradiction to resolve** is that the same routine both tests Shift-JIS ranges and is fed
this `0xEB` stream. Either the strings at `0x42dc` and `0x1474` never pass through `0xe6eb0`, or
`0xEB` is handled by a branch in that routine this reading has not followed. The second is more
likely and it is where the next attempt starts: **the `0xe6f37`-`0xe6f8b` tests accept `0xEB` as a
lead and then read one byte, so what `0xe6f4d` onwards does with the pair is the answer.**

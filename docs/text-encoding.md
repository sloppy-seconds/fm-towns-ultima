# The text path: everything established, and the one thing that is not

**The character cell, the draw call, the background fill and the window record are all read and
measured. What `0xEB` means in the strings is not, and four readings of it have failed.**

## What is established

| | |
|---|---|
| character cell | **8 by 16 pixels** |
| text window | a **57-byte record** at `0x7aee4 + n * 57` |
| draw call | `0xe6fd5` -> `0xc7d` -> TBIOS **AH 0x60** |
| the blit | `TBIOS.BIN 0x3568`, installing `0xf538` or `0xf5e0` by attribute |
| background fill | `0xe6e48` -> `0x8b6` -> TBIOS **AH 0x2b**, rectangle at `0x7add8` |
| text attributes | four, through a table at `TBIOS.BIN 0xfad0` |
| pixel handling | a `not` cascade over a byte count, so a plain bitmap inverted on merge |
| `0xEB` in strings | **unresolved**, four readings failed |

## The cell size, from two independent statements

The layout engine `0xe6eb0` computes a character position from the window record:

```
0xe6ebf  lea eax, [eax+eax*2]        3 * arg
0xe6ec2  lea edx, [eax+eax*8]        27 * arg
0xe6ec5  lea edx, [eax+edx*2]        57 * arg
0xe6ec8  lea ebx, [edx+0x7aee4]      a 57-byte window record
0xe6ee6  mov edx, [ebx+0x19]         the column
0xe6ee9  shl edx, 3                  column * 8    <- width
0xe6efd  mov edx, [ebx+0x1d]         the row
0xe6f00  shl edx, 4                  row * 16      <- height
```

**Correction, recorded rather than quietly applied.** This page said 55 for both the stride
and the multiplier. The chain is `3n`, then `27n`, then `3n + 54n`, which is 57. Checked on
the raw bytes with `xxd -s 0xe6ebf -l 12 ENCHANT.EXP`, giving
`8d 04 40 8d 14 c0 8d 14 50 8d 9a e4`, where `8d 14 50` is `lea edx,[eax+edx*2]`. The
independent check came from `0xe74ac` in `docs/rectangle-cluster.md`, which computes the same
chain and whose cell geometry then differs by exactly 7 and 15, an 8 by 16 cell less a
one-pixel border. The field offsets `+0x19` and `+0x1d` are unaffected, so the layout
conclusions on this page stand.

and the TBIOS handler that draws a character states the height again:

```
0x339d  mov byte [gs:ebp+0x378], 0x10     16
```

Two independent statements of 16, in two different files.

## The draw chain

```
0xe6eb0  select the window record, compute x and y
  0xe6f25..         take one character, testing Shift-JIS lead and trail ranges
  0xe6f90           a 0x0A advances the line, a 0x00 ends the string
  0xe6fc4           width = the number of bytes consumed
  0xe6fcb           push the struct at 0xcda78, then the context at 0x7a7d8
  0xe6fd5           call 0xc7d
  0xe6fe2           advance the cursor, and when the row is full call 0xe6dc8
```

`0xc7d` is `mov ah,0x60` then the usual `push fs`, `push 0x110`, `pop fs`, `lcall fs:[0x20]`, so
character rendering is **TBIOS function `0x60`** and not game code. The handler at `TBIOS.BIN 0x336c`
reads the struct with `lodsd` and `lodsw`, stores x to `[ebp+0x344]`, width to `[ebp+0x348]` and the
glyph pointer to `[ebp+0x33c]`, then calls the blit at `0x3568`.

**That stub was missed by the first thunk scan**, which required a preceding `ret`. `0xc7d` continues
from `8b 74 24 10`, so the 70-stub count in [tbios-thunks.md](tbios-thunks.md) is a **floor, not a
total**.

## The background rectangle

When the row is full, `0xe6dc8` fills the window background:

```
0xe6df1  [0x7add8] = window.x + 2
0xe6e02  [0x7adda] = window.y + 2
0xe6e1a  [0x7addc] = window.x + width - 3
0xe6e32  [0x7adde] = window.y + height - 3
0xe6e48  call 0x8b6            TBIOS AH 0x2b, a rectangle primitive
```

**`0x7add8` is a rectangle.** [recompilation-conflicts.md](recompilation-conflicts.md) recorded a
retraction saying it was not, and that retraction was itself wrong: it followed the AH `0x46`
handler, which is a different routine reaching the same buffer. Two callers, two purposes, one
buffer.

## What `0xEB` is not

The strings at `0x42dc`, `0x1474` and `0x4334` are full of `0xEB xx` pairs, and four readings of
them failed on a measurable test.

| reading | how it failed |
|---|---|
| ASCII with `0xEB` as an escape to a glyph code | stripping the `0xEB` bytes gives `OBL CZmZ eh`, not words |
| the pairs are Shift-JIS | a standard decoder rejects every one |
| `0xEB` is a Shift-JIS lead byte | 3,652 uses against `0xE1` at 2 is not a character distribution |
| `0xEB` marks gaiji characters | 155 distinct pairs over 14,214 occurrences is far too many for a gaiji set |

The frequency count, over `0x1348` to `0x6000`:

```
0x81  1032     0x82  908     0x83  437     0xEB  3652     0xE1  2
```

`0x81` to `0x83` have the frequencies of Shift-JIS punctuation and katakana. **No character block has
one member outnumbering its neighbours by three orders of magnitude**, so `0xEB` is not a lead byte.

And stripping it does not work either:

```
0x1474  EB 4F EB 42 EB 4C EB 5A EB 5A EB 6D EB 5A
        O    B    L    Z    Z    m    Z
```

`OBL CZmZ eh` contains word-shaped fragments and reads as neither Japanese nor English.

## Two further readings, and what they rule out

The payload byte after each `0xEB` ranges over `0x42` to `0x68` in the samples read, and seven
distinct values appear in one eight-character run. Two arithmetic transforms were then tried
against the known text, and both produce halfwidth katakana rather than nonsense, which is the
first evidence that the payload really is a character code rather than a glyph index.

**`payload + 0x80`.** For `EB 4F EB 42 EB 4C` this gives `ｦd`'s neighbours `0xCF 0xC2 0xCC`,
which decode as `ﾏﾂﾌ`. That reads as "matsufu", a plausible romanisation, and the first three
characters of the run come out sensible. It fails on payloads above `0x5F`: `0x6D + 0x80` is
`0xED`, outside the halfwidth range `0xA1` to `0xDF`.

**`payload | 0x80` below `0x60`, `payload + 0x40` above.** This keeps every byte in range, since
`0x65 + 0x40` is `0xA5`. It yields `ﾏﾂﾌ ﾃﾚｭﾚ ･ｨﾚﾝ ﾞｫ` for the same run, which is all valid
halfwidth katakana and still not a word.

So the payload is **in the right range to be a halfwidth katakana code with a two-part
transform**, and neither transform tried recovers readable text. That narrows the problem from
"unknown encoding" to "known family, wrong arithmetic", which is a better position than before
and is where this stops for now.

**What is needed to settle it.** A single message present in both forms, so the mapping can be
read off rather than guessed. The run at `0x85fe` and the run at `0xd2158` are *similar but not
the same text*: they differ at the second payload (`0x61` against `0x62`) and in their spacing
(`0x20` literal in one, `0x81 0x40` in the other), so they are two different strings and cannot
be aligned. Finding one string that exists in both encodings is the next step, and it is a
search rather than a reading.

## The contradiction, which is the next thing to read

**`0xe6eb0` tests Shift-JIS lead and trail ranges** and is fed this `0xEB` stream. Both cannot be
true of the same input, so one of two things holds:

- those strings never pass through `0xe6eb0`, or
- `0xEB` is handled by a branch at `0xe6f37` onwards that this reading has not followed

The second is more likely. The tests at `0xe6f37` to `0xe6f8b` accept `0xEB` as a lead and read one
more byte, so **what `0xe6f4d` does with the accepted pair is the answer**, and it has not been read.

## Failures kept, because they cost time

Five searches for a glyph table in `ENCHANT.EXP` and `TBIOS.BIN` all failed, and they are recorded in
the commit history rather than repeated here:

- distinct 32-byte chunks per window scored near maximum everywhere, because random code is distinct
  too. The metric cannot separate a font from code.
- rows with a zero low nibble scored high at two places. Rendering them as glyphs gave vertical
  repetition and noise, not letterforms.
- `TBIOS.BIN` is 63 to 86 percent non-zero throughout with no code and data boundary.
- blank first and last rows per 16-byte unit picked windows inside zero fill.
- rendering the best candidate, `0x0dba00`, gave all-zero units.

`GAI.TIF` is not a character sheet: `tools/fontgrid.js` reports **one ink run per axis** on it, a
single 168 by 249 picture, which is a title graphic. `GAIJI2.COM` is a driver, 6,849 bytes, whose
dense data region is 193 bytes of code and whose system calls are `int 21h AH=09` and `AH=3e`/`3f`.

## Why this page was rewritten

It had grown four `## Status` sections and three successive answers to the same question, each
contradicted by the next, because it was extended rather than revised. The corrections were appended
instead of applied. That is the same defect as a `replace()` that silently no-ops: the page looked
current and was not.

What survives is above. What was wrong is recorded in the commit messages, where it belongs.

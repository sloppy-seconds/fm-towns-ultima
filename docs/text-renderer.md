# The text renderer at `0xe6e90`

Read completely from a real entry point. This is the function that draws a string, and it
parses Shift-JIS to decide how wide each character is. It is called **226 times** from
across the image.

This closes the question the font work was blocked on: the game does not draw text through
any font-index table that needs recovering. It **draws Shift-JIS directly**, one character
at a time, from the bytes in memory.

**And the glyphs come from `\UTFONT.FNT` on the disc, by way of TBIOS.** There is no font table in
the game, which is what this page establishes, and there is still an index into a font, which is
what TBIOS supplies: its renderer at `0110:0000F190` converts each Shift-JIS pair and indexes that
file. The two halves are consistent, and the combination is what the port had to fix before it drew
any two-byte text at all. See `port-missing-text.md` and plan item 7h.

## Signature

```asm
0xE6E90  push ebp / mov ebp,esp / sub esp,0xc / push ebx esi edi
0xE6E99  mov edi,[ebp+0xc]      ; argument 2: pointer to the string
0xE6E9C  mov eax,[ebp+0x8]      ; argument 1: an index
```

Argument 1 is an index into the **57-byte array at `0x7aee4`**, computed with the same
`lea` chain seen elsewhere:

```asm
lea  eax,[eax+eax*2]      ; eax = i*3
lea  edx,[eax+eax*8]      ; edx = i*27
lea  edx,[eax+edx*2]      ; edx = i*57
lea  ebx,[edx+0x7aee4]    ; ebx = &records[i]
```

Argument 2 is the string itself. It is a caller-supplied pointer, so the strings are
reached by the caller, not by this function. That is why the asset and message strings are
not found as immediates followed by a call: the pointer is computed elsewhere.

## What it does

Per iteration, while `*edi` is not zero:

```asm
mov  ax,[ebx+0x1]         ; field +1
add  ax,4
mov  edx,[ebx+0x19]       ; field +25
shl  edx,3                ; * 8
add  edx,eax
mov  [0xcda78],dx         ; X coordinate

mov  ax,[ebx+0x5]         ; field +5
add  ax,0x11              ; + 17
mov  edx,[ebx+0x1d]       ; field +29
shl  edx,4                ; * 16
add  edx,eax
mov  [0xcda7a],dx         ; Y coordinate
```

So the draw position is

```
X = (field +25) * 8  + (field +1)  + 4
Y = (field +29) * 16 + (field +5)  + 17
```

which is a **column-pitch of 8 pixels and a row-pitch of 16 pixels**, with a per-window
origin at fields `+1` and `+5`.

## The Shift-JIS width test

This is the part that matters for the font question. The function copies characters into
a buffer at `0xcda7e` until it finds a wrap point, and it decides how many bytes a
character occupies by testing lead and trail byte ranges:

```asm
; lead byte 0x81..0x9F  OR  0xE0..0xFC  ?
cmp al,0x81 / jc  not_lead
cmp al,0x9F / jna is_lead
cmp al,0xE0 / jc  not_lead
cmp al,0xFC / ja  not_lead

; then trail byte 0x40..0x7E OR 0x80..0xFC
cmp al,0x40 / jc  not_trail
cmp al,0x7E / jna is_trail
cmp al,0x80 / jc  not_trail
cmp al,0xFC / ja  not_trail
```

**Measured against the values recorded in `game-text.md`:** these ranges are exactly the
Shift-JIS double-byte pair ranges, and the trail-byte test here excludes `0x7F`, which is
correct for Shift-JIS.

So the renderer reads **standard Shift-JIS**, two bytes for a kanji and one for ASCII or a
half-width character. The text is not converted through a font index at draw time.

## Line wrapping

```asm
mov  esi,[ebx+0x11]       ; field +17
sub  esi,[ebx+0x19]       ; minus field +25
inc  esi
```

is the number of characters still to fit on this line. Then

```asm
cmp byte [edi],0x0a       ; newline
  inc edi / dec remaining / continue
cmp byte [edi],0x0        ; end of string
  set flags / continue
dec esi / inc buffer cursor / inc edi
```

and after drawing:

```asm
mov  eax,[ebx+0x19]       ; field +25, the column
add  eax,[ebp-0x8]
sub  eax,esi
mov  [ebx+0x19],eax       ; advance the column by the characters consumed

cmp  [ebp-0x4],0          ; did we hit end-of-string?
jnz  loop                 ; no, continue

mov  eax,[ebx+0x1d]       ; field +29, the row
cmp  eax,[ebx+0x15]       ; against field +21
jnz  next_line
  push [ebp+0x8]
  call 0xe6da8            ; row limit reached, call the pager
  mov  dword [ebx+0x19],0
  jmp  loop
next_line:
  mov  dword [ebx+0x19],0 ; new line: column to 0
  inc  dword [ebx+0x1d]   ; row + 1
  jmp  loop
```

## The 57-byte record, with roles

Combining what this function reads with the field scan in `function-recovery.md`:

| offset | width | role, from the code |
|---|---|---|
| +0 | byte | counter or state, used by `0xe6e48` |
| +1 | word | **X origin** of the text window |
| +5 | word | **Y origin** of the text window |
| +9 | 4 | read only at `0xe6df0` |
| +13 | 4 | read only at `0xe6e08` |
| +17 | 4 | **characters per line** (limit, compared against column) |
| +21 | 4 | **maximum row** (line limit, compared against row) |
| +25 | 4 | **current column** |
| +29 | 4 | **current row** |
| +33 | 4 | touched at `0xe7759`, `0xe7771`, `0xe7789` |
| +37 | 4 | touched at four sites |
| +41 | 4 | touched at `0xe5a15`, `0xe6b68` |
| +49 | 4 | touched at five sites |
| +53 | 4 | touched at five sites |

Fourteen fields, every gap a natural width, ending exactly at 57 with no tail padding.

This is a **text window** structure: origin, line width, line count, and cursor. There are
29 of them, which is consistent with 29 separate text areas that can be addressed by index.

## Why this matters for the font question

`font-encoding.md` concluded that the `0xEB` glyph runs needed a font index table in the
executable, and that it was unreachable. That page was looking for the wrong thing.

The renderer here reads Shift-JIS. Whatever the `0xEB` runs are, they are **not** in the
drawing path of this function. That narrows the search: the `0xEB` runs belong to some
other subsystem, not to text rendering.

This does not solve the `0xEB` question. It removes the assumption that solving it was a
prerequisite for drawing text, which it was never going to be, because the text is already
plain Shift-JIS.

## Caveats

- **The four byte/word fields at +0, +1, +5 are single-byte or word reads of dwords.** The
  field scan found `+0`, `+1` and `+5`, and the code reads `[ebx+0x1]` as a word and
  `[ebx+0x5]` as a word, so `+0` is a byte and `+1`..`+2` and `+5`..`+6` are words. The
  gaps of 1 and 4 between them are real and are what the compiler emitted.
- **The roles above are read from one function.** Other functions using the same array
  may treat the same offsets differently, and the roles for `+33` upward are unknown,
  listed only as "touched".
- **Argument 1 is an index, not a pointer.** Nothing in this function clamps it, so an
  out-of-range index reads past the array. That is a fact about the code, not a bug claim.

---

**[Finding functions and structure](function-recovery.md)** **[The font encoding](font-encoding.md)** **[The game text](game-text.md)**

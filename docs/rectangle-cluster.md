# The rectangle cluster: four routines that draw through TBIOS AH 0x46

`tools/funtriage.js` ranked four functions that all reach TBIOS AH 0x46. They turned out to
be one mechanism, not four coincidences, and reading them together produces the drawing
primitives a reimplementation needs: a filled rectangle, a rectangle with text, a window
border, and a grid cell inside a window.

Every address and byte below came from `tools/tbios-read.js` in this session.

## The handler first: AH 0x46 is not a rectangle drawer

The earlier claim, in `docs/text-encoding.md`, was that AH 0x46 uses the rectangle at
`0x7add8`. Reading the handler at `0x2d78` shows something more specific:

```
0x2d78  mov eax, [esi+0x0]      ; first dword of the argument struct
0x2d7a  mov [ebp+0x1c4], eax
0x2d81  mov eax, [esi+0x4]      ; second dword
0x2d84  mov [ebp+0x1c8], eax
0x2d8b  mov al, [ebp+0x108]     ; the mode word 0xe5d90 set to 0x22
0x2d92  test al, 0xe
0x2d94  je 0x2e4c
```

So AH 0x46 takes a **pointer to two dwords** and stores them into the context at `+0x1c4`
and `+0x1c8`. It then branches on the mode word that `0xe5d90` writes. The two dwords are
the rectangle as the game packs it, which is why the callers write the four 16-bit fields
into `0x7add8` first.

The wrapper is `0xabd`:

```
0x000abd  push esi
0x000abe  push edi
0x000abf  mov edi, [esp+0xc]    ; the context
0x000ac3  mov esi, [esp+0x10]   ; the argument struct, read at [esi+0] and [esi+4]
0x000ac7  mov ah, 0x46
```

This is the same wrapper shape as every other TBIOS call: the signature is inside the
wrapper, not at the call target.

## The shared argument buffer

`0x7add8` is the first of four 16-bit fields, and every member of this cluster writes exactly
those four:

| offset | field |
|---|---|
| `0x7add8` | x, or x of corner 1 |
| `0x7adda` | y, or y of corner 1 |
| `0x7addc` | x of corner 2 |
| `0x7adde` | y of corner 2 |

`text-encoding.md` already established that AH 0x2b, the background fill, uses this same
buffer. So one buffer serves both a fill and a rectangle outline, which is why the ordering
below matters.

**Correction from `docs/drawing-clusters.md`.** The buffer is **longer than four fields**. The
sprite group that calls AH 0x25 writes `0x7ade0`, `0x7ade2` and `0x7ade4` as well, so the
struct runs to at least `0x7ade5`. The rectangle cluster uses the first four; other
primitives use more. An earlier version of this section called it "four 16-bit fields",
which was true only of the routines on this page.

## `0xe5ff4`: filled rectangle, with the mode saved and restored

The simplest and the most informative, because it shows the mode write being scoped:

```
0x0e5ff4  push ebp
0x0e5ff7  mov ax, [0x7aedc]     ; the current mode word
0x0e5ffd  or  al, 0x20          ; force bit 5
0x0e5fff  movsx eax, ax
0x0e6002  push eax
0x0e6003  push 0x7a7d8
0x0e6008  call 0x4c5            ; AH 0x0c, mode := mode | 0x20
0x0e600d  mov ax, [ebp+0x8]     ; arg 1
0x0e6011  mov [0x7add8], ax
0x0e6017  mov ax, [ebp+0xc]     ; arg 2
0x0e601b  mov [0x7adda], ax
0x0e6021  mov ax, [ebp+0x10]    ; arg 3
0x0e6025  mov [0x7addc], ax
0x0e602b  mov ax, [ebp+0x14]    ; arg 4
0x0e602f  mov [0x7adde], ax
0x0e6035  push 0x7add8
0x0e603a  push 0x7a7d8
0x0e603f  call 0xabd            ; AH 0x46
0x0e6044  movsx eax, [0x7aedc]  ; reload the mode
0x0e604b  push eax
0x0e604c  push 0x7a7d8
0x0e6051  call 0x4c5            ; AH 0x0c, mode := saved
```

**It saves the mode, sets bit 5, draws, then restores the mode.** So bit 5 of the mode word
is set only for the duration of the draw. `0xe5d90` sets the mode to `0x22`, which already
has bit 5, so the save is defensive rather than functional at startup, but the pattern
matters: bit 5 is a per-operation flag, not a global setting.

Call it `rect_fill(x, y, x2, y2)`.

## `0xe6058`: the same rectangle, with text attributes set first

```
0x0e6058  push ebp
0x0e605c  mov edi, [ebp+0x18]   ; a 5th argument
0x0e605f  push 0x0
0x0e6061  call 0xe5ab8          ; AH 0x0a with 0
0x0e6066  push edi
0x0e6067  call 0xe5948          ; AH 0x07 with the 5th arg
0x0e606c  push edi
0x0e606d  call 0xe5978          ; AH 0x07 with the 5th arg, different plane
0x0e6072  mov ax, [ebp+0x8]     ; the same four stores as 0xe5ff4
   ...      four stores to 0x7add8..0x7adde
0x0e60a4  call 0xabd            ; AH 0x46
0x0e60a9  movsx eax, [0x7a7d4]  ; the header word, value 9
0x0e60b0  push eax
0x0e60b1  call 0xe5ab8          ; AH 0x0a with 9
0x0e60b6  movsx eax, [0x7aedc]
   ...      restore the mode, call 0x4c5
```

The differences from `0xe5ff4` are all about text: it sets AH 0x0a to 0, calls AH 0x07 with
the fifth argument on two planes, draws, then sets AH 0x0a from `0x7a7d4`, which is the
header word `0xe5d90` stores as 9. So this is **a rectangle drawn with a text colour, then
the text colour restored**.

`0x7a7d4` having a reader is worth noting: `display-context.md` listed "whether it is read as
a word or a pair of bytes" as unknown. It is read here with `movsx`, a **signed byte load**,
despite being written as a word. That is a mismatch no static reading resolves, and it is
recorded rather than tidied.

Call it `rect_fill_text(x, y, x2, y2, colour)`.

## `0xe60d0`: the two rectangles a window needs

```
0x0e60f3  cmp [ebp+0x18], 0x0    ; is there a 5th argument?
0x0e60f7  je  0xe6109
0x0e60f9  lea eax, [ebx+esi]     ; ebx = arg 5, esi = arg 2
0x0e60fc  dec eax                ; y + h - 1
0x0e60fd  push eax
0x0e60fe  mov eax, edi           ; edi = arg 1
0x0e6100  add eax, [ebp+0x10]    ; x + w
0x0e6103  dec eax                ; x + w - 1
0x0e6104  push eax
0x0e6105  push esi               ; y
0x0e6106  push edi               ; x
0x0e6107  jmp 0xe6117
0x0e6109  push 0x1a7
0x0e610e  push 0x27f
0x0e6113  push 0x18
0x0e6115  push 0x0
0x0e6117  call 0xe5ff4           ; rect_fill
```

Two paths, both ending in `rect_fill`:

- with a size: `(x, y, x + w - 1, y + h - 1)`
- without: `(0, 0x18, 0x27f, 0x1a7)`, a **fixed** box

The fixed box is the interesting part. `0x27f` is 639 and `0x1a7` is 423, so the box spans
x 0 to 639 and y 0x18 to 423. With an 8 by 16 cell that is **80 columns by 25 rows of text
below a 24-pixel band**, which is a sensible play area for a 640-wide screen. This is the
first measured piece of screen geometry in the project.

Call it `window_fill(x, y, w, h)` when there is a size, and note the fixed full area when
there is not. Reading it as one function with an optional size is what the code does.

## `0xe74ac`: a grid cell inside a window

This one indexes the text window record and is the most arithmetic:

```
0x0e74b5  push 0x4
0x0e74b7  call 0xe5ab8           ; AH 0x0a with 4
0x0e74bc  push 0x422             ; mode := 0x422
0x0e74c1  push 0x7a7d8
0x0e74c6  call 0x4c5             ; AH 0x0c
0x0e74cb  push 0xf
0x0e74cd  call 0xe5948           ; AH 0x07 with 0xf
0x0e74d2  push 0xf
0x0e74d4  call 0xe5978           ; AH 0x07 with 0xf, other plane
0x0e74d9  lea eax, [edi+edi*2]   ; 3 * arg1
0x0e74dc  lea edx, [eax+eax*8]   ; 27 * arg1
0x0e74df  lea edx, [eax+edx*2]   ; 57 * arg1
0x0e74e2  mov ax, [edx+0x7aee5]  ; record field at +1
0x0e74e9  add ax, 0x4
0x0e74ed  mov esi, [ebp+0xc]     ; arg 2
0x0e74f0  shl esi, 0x3           ; arg2 * 8
0x0e74f3  add esi, eax
0x0e74f5  mov [0x7add8], si      ; x = base_x + 4  + arg2*8
```

and the other three fields the same way, with `+2`, `+0xb`, `+0x11` and shifts of 4:

| field | expression |
|---|---|
| x | `record[+1] + 4 + arg2 * 8` |
| y | `record[+5] + 2 + arg3 * 16` |
| x2 | `record[+1] + 0xb + arg4 * 8` |
| y2 | `record[+5] + 0x11 + arg5 * 16` |

The constants differ by exactly 7 in x and 15 in y, which is an **8 by 16 cell less one pixel
of border on each side**. That is independent confirmation of the cell size, from arithmetic
rather than from a table.

Call it `window_cell_rect(record_index, col, row, col2, row2)`.

## The stride is 57, not 55

`text-encoding.md` says the window record is at `0x7aee4 + n * 55`. The chain here is
identical to the one in `0xe6eb0`, and it computes 57:

```
eax = n + n*2      = 3n
edx = eax + eax*8  = 27n
edx = eax + edx*2  = 3n + 54n = 57n
```

Checked independently on the raw bytes, `xxd -s 0xe6ebf -l 12 ENCHANT.EXP` gives
`8d 04 40 8d 14 c0 8d 14 50 8d 9a e4`, where `8d 14 50` is `lea edx,[eax+edx*2]`. There is
no reading of that under which the multiplier is 55.

So `text-encoding.md` has an off-by-two in a stated stride. The fields it names at `+0x19`
and `+0x1d` are still correct relative to the record base, so the layout conclusions in that
page hold; only the number that multiplies the index is wrong. That page is corrected in the
same commit as this one.

## What the cluster is

| routine | call it | AH it calls **directly** | AH reached indirectly |
|---|---|---|---|
| `0xe5ff4` | `rect_fill(x, y, x2, y2)` | 0x0c, 0x46 | none |
| `0xe6058` | `rect_fill_text(x, y, x2, y2, colour)` | 0x0c, 0x46 | 0x07, 0x0a via `0xe5948`/`0xe5978`/`0xe5ab8` |
| `0xe60d0` | `window_fill(x, y, w, h)` | 0x0c, 0x48, 0x49 | 0x46 via `0xe5ff4` |
| `0xe74ac` | `window_cell_rect(rec, col, row, col2, row2)` | 0x0c, 0x46 | 0x07, 0x0a via the helpers |

The direct and indirect columns were separated because an earlier version of this table listed
every AH value the four routines reach by any path, which overstated two of them. Checking
with `node tools/tbios-read.js --at 0x<routine>` and taking the distinct AH values from the
call table gives the direct set only; `0xe60d0` is the case that shows the difference, since
its AH 0x46 is reached solely through `0xe5ff4`.

Three of the four are built on `0xe5ff4`. The fourth is a coordinate calculation that feeds
the same buffer.

## AH 0x48 and 0x49 are one handler

Worth recording because `funtriage` shows them as separate names. Both resolve to
`TBIOS.BIN 0x2e80`, and that handler begins:

```
0x002e80  sub ah, 0x47
0x002e83  movzx eax, ah
0x002e86  mov ebx, [eax*4+0x30b4]
```

So AH 0x47, 0x48, 0x49 and onward are one **family** distinguished by the AH value itself,
indexing a table at `0x30b4` with a parallel byte table at `0x30cc`. Counting them as
separate functions overstates how much the game calls. `0xe60d0` is currently the only
caller found.

## What this does not say

- **What `esi`'s two dwords mean beyond being a rectangle.** AH 0x46 stores them at `+0x1c4`
  and `+0x1c8`, and the callers pack four 16-bit fields. Whether the handler interprets them
  as two corners or as origin and size is not established here.
- **What mode bits `0xe` and `0xe0` select.** `0x2d92` and `0x2df7` test them, and `0xe5d90`
  leaves both clear at `0x22`. The branches they guard are not read.
- **What `0x422` means.** `0xe74ac` sets the mode to it, and no field of that value is
  explained.
- **Whether the fixed `0x27f` by `0x1a7` box is the full screen or the text area.**
  `0x1a7` is 423 and the mode suggests 480 lines, so the box is probably a text region below
  a title band, but that is arithmetic and inference rather than measurement.

# `0xe5d90`: the display context setup, read to its handlers

The second function named by `tools/funtriage.js`, after the text writer. It was called a
"graphics-mode initialiser" on the strength of six TBIOS AH values, which is a label rather
than a description. This page follows each of those six through to the handler in
`TBIOS.BIN` and says what each one does.

Every address and byte below came from `tools/tbios-read.js` in this session. Nothing is
quoted from an earlier page.

## What it is

`0xe5d90` **allocates and initialises the 0x600-byte display context** at `0x7a7d8`, sets
four fields directly, and issues six distinct TBIOS calls (seven sites, because AH 0x01 is
called once per plane).

Not a mode setter. The mode setter is one line inside it, `AH 0x0c` at `0xe5e11`, which
writes two bits. The function's actual work is filling in a structure that everything else
on screen reads.

```
push 0x600          ; size
push 0x7a7d8        ; the context
call 0x2c8          ; AH 0x00
```

`AH 0x00` returns 0 on success and the function returns `0xffffffff` if it did not.

## The six AH values, chained

`node tools/tbios-read.js --at 0xe5d90` produced this. The `sig +N` is how far into the
wrapper the `b4 <AH>` sits, which matters because the call target is the wrapper's first
instruction, not the signature. Seven rows for six values: AH 0x01 is called once per
display plane.

| site | wrapper | AH | handler | sets |
|---|---|---|---|---|
| `0xe5d9a` | `0x2c8` | `0x00` | `0x19b8` | allocates the 0x600 context |
| `0xe5dc6` | `0x2ea` | `0x01` | `0x450` | display plane 0, value 3 |
| `0xe5de2` | `0x2ea` | `0x01` | `0x450` | display plane 1, value 3 |
| `0xe5e11` | `0x4c5` | `0x0c` | `0x1e04` | display mode flags, value 0x22 |
| `0xe5e45` | `0x61c` | `0x15` | `0x1f1c` | priority 0 |
| `0xe5e54` | `0x63e` | `0x16` | `0x1f30` | priority 0 |
| `0xe5e60` | `0x660` | `0x17` | `0x1f44` | priority 0 |

Four of the six are one-line field writes. The two that are not carry the meaning.

## AH 0x00, handler `0x19b8`: allocate and zero a display context

```
cmp ecx, 0x600        ; the requested size
jb  0x19fa            ; too small -> write 0xff at [esp+0x21] and return
mov edx, 0xffffffff
call 0x17b0           ; some other allocation
mov ax, 0x128         ; segment
mov es, eax
sub edi, edi
mov ecx, 0x20000      ; 128Ki dwords
sub eax, eax
rep stosd             ; zero 512 KiB of the segment
mov [ebp+0x3e], al    ; clear two flags
mov [ebp+0x3c], ax
```

So the request is a **screen context of at least 0x600 bytes**, and the handler zeroes a
whole 512 KiB segment behind it. `ecx >= 0x600` is a length check on the argument the game
passes at `0xe5d90`, and `0x600` is exactly what it passes: the check is the handler
validating its own caller.

The two tails the handler runs, `al=1 / dx=3` then `al=0 / dx=3`, both go to `0x450`
(AH 0x01). So AH 0x00 finishes by turning two planes on with value 3.

## AH 0x01, handler `0x450`: which planes are drawn, and at what value

```
cmp al, 0x80     ; plane index must be < 0x80
jae 0x4f8
cmp al, 0x2      ; and < 2, because only two planes are settable
jae 0x4ef
test dx, dx      ; a zero value is rejected
je 0x4ef
cmp dx, 0x12     ; values above 0x12 rejected
ja 0x4a8
test al, al
je 0x479
cmp dx, 0xc      ; plane 1 is narrower than plane 0
jae 0x4ef
```

Then it stores into a per-context word at `[ebp+0x100]` and calls `0xe10`.

The game calls it twice, both with value 3:

- `mov eax,3; push 0; push 0x7a7d8; call 0x2ea` for plane 0, value 3
- `mov eax,3; push 1; push 0x7a7d8; call 0x2ea` for plane 1, value 3

**So `0xe5d90` puts both display planes at intensity 3**, and the asymmetry the handler
enforces, plane 0 up to `0x11` and plane 1 only up to `0xb`, is a hardware property of the
two layers rather than anything the game chooses.

## AH 0x0c, handler `0x1e04`: two bits in the mode word

```
test dx, 0x20
je 0x1e10
and dx, 0xffbf     ; clear bit 6 if bit 5 was set
test dx, 0x2
je 0x1e1c
and dx, 0xfffb     ; clear bit 2 if bit 1 was set
mov [ebp+0x108], dx
```

It stores the word at context offset `0x108` after clearing two bits that conflict with
others. The game passes `0x22`, which is bits 5 and 1. Neither is the bit that gets cleared,
so **the stored value is `0x22` unchanged**: bits 5 and 1 both set.

This is the one field the earlier note called "the mode byte". It is a **word**, and the
value is `0x22`.

## AH 0x15, 0x16, 0x17, handlers `0x1f1c`, `0x1f30`, `0x1f44`: the three priority fields

```
0x1f1c:  cmp al, 3
         ja  0x1f28
         mov [ebp+0x34c], al   ; byte
0x1f30:  cmp al, 3
         ja  0x1f3c
         mov [ebp+0x34d], al   ; byte
0x1f44:  mov [ebp+0x34e], dx   ; word, no range check
```

Three adjacent fields, `0x34c`, `0x34d` as bytes and `0x34e` as a word, all set to **0** by
`0xe5d90`. The first two take 0 to 3 and reject anything higher. The third has no check,
which is a consistency the handler does not have rather than something this page can explain.

They are priority for three layers, in order. The game sets all three to zero at startup.

## The fields it sets, in full

Four stores are in `0xe5d90`'s own body. The rest are written by the handlers it calls, in
the context they take as an argument.

| offset | value | written by |
|---|---|---|
| `0x7aed8` | 3 | `mov [0x7aed8], 0x3`, in this routine |
| `0x7aeda` | 3 | `mov [0x7aeda], ax`, in this routine |
| `0x7a7d4` | 9 | `mov [0x7a7d4], ax`, in this routine |
| `0x7aedc` | 0x22 | `mov [0x7aedc], ax`, in this routine |
| context base | 0x600 bytes zeroed | AH 0x00, handler `0x19b8` |
| base `+0x108` | 0x22 | AH 0x0c, handler `0x1e04` |
| base `+0x34c` | 0 | AH 0x15, handler `0x1f1c` |
| base `+0x34d` | 0 | AH 0x16, handler `0x1f30` |
| base `+0x34e` | 0 | AH 0x17, handler `0x1f44` |

The four in this routine's own body are all `mov [abs], ax` or `mov [abs], imm32`, so
their offsets are read directly rather than derived.

`0x7a7d8` and `0x7a7d4` are **four bytes apart**, and `0x7a7d4` is written with `mov ax`, a
word store, so it occupies `0x7a7d4` and `0x7a7d5`. Two bytes at `0x7a7d6` are then
unaccounted for before the context begins. **Do not read that gap as a reserved field: no
store of any width was traced to it, and the alignment may be nothing more than the
compiler placing a word at a four-byte boundary.** The context base itself is measured:
`0x7a7d8` is the argument to AH 0x00, which is the routine that sizes and zeroes it.

## What this makes the function

`0xe5d90` is **the display context constructor**. It allocates 0x600 bytes, zeroes the
segment behind them, sets both planes to intensity 3, sets mode bits 5 and 1, zeroes three
priorities, then runs a run of game-side initialisers through the same context. Fourteen
calls in total, seven of them TBIOS and seven game routines:

| routine | its own TBIOS calls |
|---|---|
| `0xe5ab8` | AH 0x0a |
| `0xe5acc` | AH 0x05 |
| `0xe5ae0` | AH 0x06 |
| `0xe5890` | AH 0x04 |
| `0xe5948` | AH 0x07 and 0x19 |
| `0xe5960` | AH 0x07 and 0x19 |
| `0xe5978` | AH 0x07 and 0x19 |

Each line is from `node tools/tbios-read.js --at 0x<routine>`, which now stops at the
routine's last `ret` rather than at its first. An earlier version of the tool did not, and
reported each routine's own AH values plus those of every routine following it: `0xe5890`
read as calling AH 0x0a when its own call is AH 0x04. **A per-function count from a walk
that does not stop at the function boundary is a count of everything downstream.**

`0xe5890` is the interesting one, and the one that shows why a zero region must not be
read as data. It walks a 15-entry table with a 12-byte stride:

```
mov [0x7add8], 0x1
mov [0x7ade3], 0x0
mov edi, 0x1
cmp edi, 0x10          ; indices 1..15, loop ends at 16
mov [0x7addc], edi
mov eax, 0x7a7d0
lea edx, [edi*4]
lea edx, [edx+edx*2]    ; edx = edi * 12
mov cl, [eax+edx+0x648]   ; 0x7ae18 + edi*12
mov [0x7ade0], cl
mov cl, [eax+edx+0x64c]   ; +4
mov [0x7ade1], cl
mov dl, [eax+edx+0x650]   ; +8
mov [0x7ade2], dl
push 0x7add8
push 0x1
add eax, 0x8
push eax
call 0x39c             ; AH 0x04
```

Three bytes per entry go into `0x7ade0`, `0x7ade1`, `0x7ade2` and the entry's base into
`AH 0x04`.

**The table it reads is `0x7ae18`, and it is entirely zeros in the file:**

```
$ xxd -s 0x7ae18 -l 200 ENCHANT.EXP
0007ae18: 0000 0000 ... (200 bytes of 00)
```

So this is **BSS**. The 15 entries are filled in at runtime by something this page has not
traced, and the three bytes per entry cannot be read from the disc. The plausible reading,
that this is a palette load with three components per colour, is a guess and is marked as
one. What is established is only the shape: 15 entries, 12-byte stride, three byte fields
per entry at offsets 0, 4 and 8, and one `AH 0x04` call per entry.

This is worth recording because it is the third time in this project that a region of the
image looked like data and turned out to be BSS. A stride and a field layout are measured;
the meaning of the bytes is not, because there are no bytes.

Call `0xe5d90` `display_init`.

## Method note: the call target is not the signature

The first version of `tools/tbios-read.js` searched for `b4 <AH> 0f a0 68 10 01` **at the
call target** and found none, so it reported all 19 calls as game routines. `xxd -s 0x2c8
-l 32 ENCHANT.EXP` shows why:

```
000002c8: 578b 7c24 088b 4c24 0cb4 000f a068 1001  W.|$..L$.....h..
```

`0x2c8` is `push edi; mov edi,[esp+8]; mov ecx,[esp+0xc]` and the `b4 00` is at `0x2d1`,
nine bytes in. **The thing the game calls is a wrapper, and the signature is inside it.**
The search now runs forward over a 32-byte window, chosen because the closest two signature
hits are `0x2d1` and `0x2f8`, 0x27 apart, so the window cannot pick up a neighbour's AH.

The same defect would have been in any tool measuring "how many TBIOS calls does this
function make" by matching at the call site, which is one reason `funtriage` ranks by
`gameAhValues` over the whole file rather than by call sites.

## What this does not say

- **What intensity 3 looks like.** Two planes at 3 and a mode word of `0x22` are values in
  the hardware's terms, not a visual result. Rendering the screen from these fields is a
  separate question.
- **What `0xe10`, `0xe70`, `0xdd4` do.** They are called from `0x450` and are not read here.
- **Why the third priority has no range check.** Measured, not explained.
- **Whether `0x7a7d4` is read as a word or a pair of bytes.** It is written as a word (9);
  no reader has been traced.

## The tool

`tools/tbios-read.js`:

```
node tools/tbios-read.js --at 0xe5d90     the routine and every handler it reaches
node tools/tbios-read.js --ah 0x46        one handler by AH value
node tools/tbios-read.js --handler 0x2d78 one handler by TBIOS.BIN offset
```

It prints the chain site, wrapper, signature offset, AH, handler, then the handler's
disassembly to its first `ret`. Two outputs feed the gate in `tools/checkall.js`.

# The pixel writer is at 0xf3e24, not 0xf3e04, and here is what it proves

**Two documentation errors corrected, one calibration question narrowed.**

This page records a correction to `docs/core-routines.md` and to the
"expected bytes" this project had been comparing compilers against since the
first High C calibration. Both were wrong about *which function* is the pixel
writer, and one of them was wrong about what it does.

## Correction 1: the address

The pixel writer in `ENCHANT.EXP` is at **`0xf3e24`**. The bytes at `0xf3e04`
are a different function. Measured, with `ENCHANT.EXP` being an `MP` flat image
at base 0 so file offset equals virtual address:

```
$ xxd -s 0xf3e04 -l 30 ENCHANT.EXP
000f3e04: c414 5f5e c366 8bc0 8b44 240c c1e0 0603
000f3e14: 4424 088a 5424 0488 9078 d50b 00c3 8bc0
```

Disassembled from `0xf3e04` (contiguous, every byte accounted for):

```
0xF3E04  C4145F            les edx,[edi+ebx*2]     <- mid-instruction, not an entry
0xF3E07  5E                pop esi
0xF3E08  C3                ret
0xF3E09  668BC0            mov ax,ax               <- alignment padding
0xF3E0C  8B44240C          mov eax,[esp+0xc]
0xF3E10  C1E006            shl eax,6               <- 64, not 128
0xF3E13  03442408          add eax,[esp+0x8]
0xF3E17  8A542404          mov dl,[esp+0x4]        <- BYTE, not word
0xF3E1B  889078D50B00      mov [eax+0xbd578],dl    <- 0xbd578, not 0x77e90
0xF3E21  C3                ret
```

Those bytes, in order, are `c4 14 5f 5e c3 66 8b c0 8b 44 24 0c c1 e0 06 03 44 24 08
8a 54 24 04 88 90 78 d5 0b 00 c3`, which is exactly `xxd -s 0xf3e04 -l 30 ENCHANT.EXP`.

`0xf3e04` is mid-instruction or mid-padding relative to the real function, and
the function that does start at `0xf3e0c` is a **byte** writer to a different
buffer at `0xbd578` with a 64 stride. It is not the 16-bit writer into the tile
grid at `0x77e90`.

The real function, found by searching the image for the `0x77e90` immediate and
then disassembling backwards to a clean entry:

```
$ python3 -c "search ENCHANT.EXP for 0x77e90 little-endian"
  0xf3e38 (the only occurrence inside a leaf store)

$ ndisasm -b32 -o 0xf3e24 <bytes at 0xf3e24>
0x0F3E24  8B44240C          mov  eax,[esp+0xc]       ; arg3 = row
0x0F3E28  C1E007            shl  eax,byte 0x7        ; row * 128
0x0F3E2B  8B542408          mov  edx,[esp+0x8]       ; arg2 = col
0x0F3E2F  668B4C2404        mov  cx,[esp+0x4]        ; arg1 = value
0x0F3E34  66898C50907E0700  mov  [eax+edx*2+0x77e90],cx
0x0F3E3C  C3                ret
```

**Six instructions, 25 bytes, frameless.** That is the ground truth.

## Correction 2: the "expected bytes" were a paraphrase

Every calibration since `highc-spike.md` compared against this 29-byte sequence:

```
8b 44 24 0c c1 e0 07 05 90 7e 07 00 8b 4c 24 08 d1 e1 03 c8
66 8b 44 24 04 66 89 01 c3
```

That is **seven** instructions and does not exist anywhere in `ENCHANT.EXP`
(verified by hex search). It reads the base `0x77e90` into an `add` and splits
the store into `mov ecx` / `shl ecx,1` / `add ecx,eax` / `mov [ecx],ax`.

The real function keeps the base as a **displacement inside the store** and
uses a **scaled index**. The paraphrase described the same arithmetic and
produced a different instruction sequence, so any compiler comparison against
it was comparing against a hand-written guess.

This is the same class of defect the project's own rules warn about: a
plausible-looking byte sequence that was never checked against the image.

## Correction 3: the 128 stride claim survives, the 16-bit framing was wrong

`docs/core-routines.md` said the function is "a four-instruction leaf" and that
the row is multiplied by 128 and the column scaled by 2, giving a 128-wide
buffer. Measured: the function is **six** instructions, and the 128 / times-2
reading is **correct** for the real `0xf3e24` function. The stride conclusion
stands. The instruction count and the address do not.

Separately, the `0xf3e04` function is a byte writer at stride 64 into
`0xbd578`. If anything in the corpus attributed 128-wide geometry to `0xf3e04`
specifically, that specific attribution belongs to `0xf3e24` instead.

## What the corrected ground truth does to the compiler question

Re-running the High C 1.7 calibration against the **real** bytes, with a probe
that forces a scaled index (a typed 2-D array, which is what makes a compiler
emit `[base + index*2 + disp32]`):

```c
typedef unsigned short row_t[64];
void r2(unsigned short v, int c, int r) { ((row_t *)0x77e90)[r][c] = v; }
```

High C 1.73 (banner: `MetaWare High C Compiler 1.73`, parser dated 14-Oct-91):

```
55                push ebp
8BEC              mov  ebp,esp
56                push esi
8B4510            mov  eax,[ebp+0x10]
C1E007            shl  eax,byte 0x7
8B550C            mov  edx,[ebp+0xc]
668B4D08          mov  cx,[ebp+0x8]
BE907E0700        mov  esi,0x77e90
03C6              add  eax,esi
66890C50          mov  [eax+edx*2],cx
5E                pop  esi
C9                leave
C3                ret
```

### What now matches

| feature | game | High C 1.73 |
|---|---|---|
| scaled index `[reg+reg*2]` | **yes** | **yes**, `66 89 0c 50` |
| `shl r,7` for row \* 128 | **yes** | **yes** |
| 16-bit `mov cx` from arg | **yes** | **yes** |
| 16-bit store of a word | **yes** | **yes** |
| arg read order row, col, value | **yes** | **yes** |
| wide-integer doubling avoided | **yes** | **yes** |

**The scaled index is the thing I previously reported as absent, and it was
absent only because my probes used pointer-plus-arithmetic.** With a typed
2-D array the compiler emits exactly `mov [eax+edx*2],cx`, which is the game's
store encoding. That was my error, not the compiler's.

### What still does not match

| feature | game | High C 1.73 |
|---|---|---|
| frame pointer | none | `push ebp` / `mov ebp,esp` / `leave` |
| arg addressing | `[esp+N]` | `[ebp+N]` |
| `0x77e90` | folded into the store's disp32 | materialised into `esi`, then `add` |
| callee-saved register | none used | `push esi` / `pop esi` |
| length | 25 bytes | 31 bytes |

So 1.73 produces the **right instruction family, the right scaled index, the
right width handling and the right shift**, but it declines to fold an absolute
address into a store displacement and it uses a frame pointer where the game
uses none.

## What this means, stated carefully

**The identification is much stronger than before.** Every distinguishing
feature that the earlier paraphrased comparison got wrong is now correct in
1.73's output. The remaining gap is a single optimisation decision, folding an
absolute base into a store's displacement, plus the frame-pointer rule.

**The frame pointer is the more interesting of the two**, because
`docs/highc-codegen.md` already measured that only 43.1 percent of the game's
738 routines have a frame. A compiler that emits a frame whenever a
callee-saved register is pushed would explain part of that split, and 1.73
pushing `esi` is exactly that behaviour.

## The next measurement, if anyone returns to this

Two things, both cheap, both now possible to state precisely:

1. **Find a routine in `ENCHANT.EXP` that does `mov [reg+reg*2+disp32],cx`
   frameless and has no callee-saved push**, compile its C through 1.73, and
   see whether the frame appears only because of the `esi`. If a formulation
   exists that keeps the address in the displacement register and never
   materialises the base, the frame may disappear and the function could match.

2. **The `-v` / debug switches were already swept** and do not change this. The
   remaining lever is source shape, and the array-index form is now known to be
   the productive direction, where pointer arithmetic was not.

## Reproducing

The probes are four small C files. The recipe is
[compiling-on-fm-towns.md](compiling-on-fm-towns.md). The ground truth is one
hex search of `ENCHANT.EXP` for the `0x77e90` immediate plus `ndisasm` at
`0xf3e24`. Both take seconds and should have been done before the first
calibration was written up.

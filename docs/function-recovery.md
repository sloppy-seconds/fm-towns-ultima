# Finding functions and structure in `ENCHANT.EXP`

The tile-loader work established a method: a byte-pattern search produces confident
wrong answers, and disassembling from a **real entry point** produces correct ones. This
page records the tooling built to find real entry points, what it found, and the one
result that is genuinely solid.

## Why pattern searching kept failing

`docs/code-analysis.md` records that `ndisasm` from a guessed start produced 501,275
lines with a large fraction misaligned, and that this generated false port writes and
false shared-code blocks. Every byte-scanning probe in this project has hit that.

The reason is alignment. An x86 instruction stream has no self-synchronising markers, so
starting mid-instruction produces plausible-looking output that is not code.

## `tools/funcs.js`: finding real entries

The one reliable signal is the `CALL rel32` instruction (`0xE8`). Its target is a
function entry **by definition**. `tools/funcs.js` scans every byte for `E8` and
collects targets.

**Measured:** 738 distinct `CALL` targets, against 344 distinct `JMP` targets and 5,435
raw `E8` hits. Of the 738, 247 are called three or more times, 107 exactly twice, and 384
once. A target called many times from many places is a real function. A target called
once may be a coincidence.

**The most-called functions:**

| entry | calls |
|---|---|
| `0xe6e48` | 616 |
| `0xe5834` | 563 |
| `0xe6b1c` | 240 |
| `0xe7440` | 231 |
| `0xe6e90` | 226 |
| `0xe1b24` | 171 |
| `0xe5810` | 120 |

Anything called several hundred times from across the image is a core routine.

## A documented claim re-tested, and partly contradicted

`docs/code-analysis.md` says:

> More returns than prologues means most functions are compiled without a frame pointer.
> Scanning finds a minority of function starts and misses the rest.

**Measured:** of the 247 strongly-called targets, **142 (57.5%) start with `55 8b ec`**,
which is `push ebp` / `mov ebp,esp`.

So the claim is too strong. Most functions called often **do** carry a frame prologue.
That does not make a prologue scan sufficient, because the 42% without one are missed
entirely, and because a prologue byte pair also occurs inside data. It does mean the code
is more recoverable than the earlier note implies.

## `tools/stride.js`: reading the struct arithmetic

32-bit compilers of this era compute `base + index*stride` with a chain of `lea`
instructions, because `lea` can multiply by 2, 3, 4, 5, 8 and 9 but not by arbitrary
constants. The chain names the stride exactly.

At `0xe6e4f`, in the function called 616 times:

```
lea eax,[edi+edi*2]      eax = i*3
lea edx,[eax+eax*8]      edx = eax*9 = i*27
lea edx,[eax+edx*2]      edx = eax + edx*2 = i*3 + i*54 = i*57
mov dword [edx+0x7aefd],0
```

**Stride 57.** Not inferred, computed.

**Measured across the most-called functions:** six independent functions use stride 57,
at `0xe6e48` (616 calls), `0xe6b1c` (240), `0xe7440` (231), `0xe76b8` (34), `0xe757c`
(20) and `0xe72cc` (18). No other stride appeared in that set.

Six unrelated callers agreeing on the same multiplication is strong evidence that 57 is a
real record size somewhere in the game.

## What the 57-byte record's fields look like

`tools/structfields.js` finds memory operands whose displacement is `BASE + field`. With
`BASE = 0x7aef9`:

| offset | refs |
|---|---|
| +0 | 2 |
| +4 | 2 |
| +8 | 3 |
| +12 | 3 |
| +16 | 4 |
| +20 | 2 |
| +28 | 5 |
| +32 | 5 |

All eight are **dword-aligned**, and 49 of the 57 bytes are never touched. That is not
what a 57-byte byte-record looks like. It looks like a struct with `int` fields and a
different true size, or an index into something larger.

## The correct base, and the array size

The earlier scan used `0x7aef9` as the record base and found eight dword fields with 49 of
57 bytes untouched, which does not describe a real struct.

The string drawer at `0xe6e90` computes

```asm
lea  ebx,[edx+0x7aee4]
```

so the real base is **`0x7aee4`**, and `0x7aef9` is field `+21` of the record.

Re-running the field scan against `0x7aee4` gives **14 fields**:

| offset | refs |
|---|---|
| +0 | 7 |
| +1 | 6 |
| +5 | 6 |
| +9 | 1 |
| +13 | 1 |
| +17 | 1 |
| +21 | 2 |
| +25 | 2 |
| +29 | 3 |
| +33 | 3 |
| +37 | 4 |
| +41 | 2 |
| +49 | 5 |
| +53 | 5 |

Gaps between fields: 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 8, 4, and 4 to the end of the
record. **Every gap is a natural width (1, 2, 4 or 8), and the last field ends at exactly
57 with zero tail padding.** That is what a real C struct looks like.

**The array size.** The zero-fill block starts at `0x7b557`. From `0x7aee4`, 29 records of
57 bytes end at `0x7b559`, which is **2 bytes before the BSS boundary**. The array is
**29 records**, and it ends where the BSS section begins.

An earlier version of this page concluded that 57 was not a record size, on the grounds
that `(0x7b578 - 0x7aef9) / 57 = 29.18` is not a whole number. That test used the wrong
base and the wrong boundary. `0x7b578` is a string-pool literal, not the end of the
array.

## The one small function read completely

`0xe6e48`, verbatim:

```asm
push ebp / mov ebp,esp / push edi
mov  edi,[ebp+0x8]            ; argument
lea  eax,[edi+edi*2]
lea  edx,[eax+eax*8]
lea  edx,[eax+edx*2]          ; edx = i*57
mov  dword [edx+0x7aefd],0    ; field +4 = 0
mov  eax,[edx+0x7af01]        ; field +8
cmp  eax,[edx+0x7aef9]        ; against field +0
jnz  skip
  push edi
  call 0xe6da8
  jmp  done
skip:
lea  eax,[edi+edi*2]
lea  edx,[eax+eax*8]
lea  edx,[eax+edx*2]
inc  dword [edx+0x7af01]      ; field +8 += 1
done:
pop edi / leave / ret
```

Read plainly: clear field +4, then if field +8 equals field +0 call `0xe6da8`, otherwise
increment field +8. That is a **counter with a limit**. The counter is `+8`, the limit is
`+0`, and `+4` is a reset or state flag.

This is the smallest useful result on the page: one function, fully understood, with the
argument being an index into a 57-strided array. It is a template for reading the rest.

## Tooling added

| tool | what it does |
|---|---|
| `tools/funcs.js` | finds `CALL` targets, ranks them by call count, disassembles from a given entry |
| `tools/stride.js` | decodes `lea` chains into exact struct strides |
| `tools/structfields.js` | finds field offsets by displacement range over the whole image |

## What to do next

Read `0xe5834` (563 calls). It begins:

```asm
push ebp / mov ebp,esp / push edi
mov edi,[ebp+0xc]         ; second argument
cmp dword [0x7a6b4],0
jz  short
  inc edi
  cmp byte [edi-0x1],0    ; scan forward for a NUL
  jnz back
push edi
push dword [ebp+0x8]
call 0xe6e90
```

A forward scan to a NUL over a caller-supplied pointer, then a call with two arguments.
That is the **strlen-then-draw** shape already recorded from `0xe5854`, and reading it
fully may identify the string-drawing entry point, which is the thing the `0xEB` font
work needs.

---

**[The code](code-analysis.md)** **[The tile loader that was not one](tile-loader.md)** **[Open questions](open-questions.md)**

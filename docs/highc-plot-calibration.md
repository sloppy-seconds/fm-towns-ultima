# The plot calibration: the ground truth was wrong, and the corrected comparison is much closer

**Corrected verdict: High C 1.73 reproduces the game's pixel writer in every
architectural respect except folding the absolute base into the store's
displacement and its frame-pointer decision.** The two earlier verdicts on this
page ("not byte-identical, so not 1.7" and then "not byte-identical for a
source-form reason") were both reached against a **paraphrased** byte sequence
that does not exist in the image. See
[pixel-writer-address-correction.md](pixel-writer-address-correction.md) for the
hex evidence.

This page keeps the whole history, because two wrong conclusions in a row is
worth more as a warning than as a tidy answer.

## The corrected ground truth

The pixel writer is at **`0xf3e24`**, six instructions, 25 bytes, frameless:

```
0x0F3E24  8B44240C          mov  eax,[esp+0xc]       ; row
0x0F3E28  C1E007            shl  eax,byte 0x7        ; row * 128
0x0F3E2B  8B542408          mov  edx,[esp+0x8]       ; col
0x0F3E2F  668B4C2404        mov  cx,[esp+0x4]        ; value
0x0F3E34  66898C50907E0700  mov  [eax+edx*2+0x77e90],cx
0x0F3E3C  C3                ret
```

Everything below now compares against **that**.

## What I got wrong first

My initial calibration compiled `tools/calibration/plot.c`, which computes the
destination as integer arithmetic:

```c
*(unsigned short *)(0x77e90 + row * 128 + col * 2) = value;
```

High C 1.73 produced `edx` / `add edx,edx` / `mov [edx],ax`. I compared that
against the paraphrased "expected bytes" and concluded the game was not built
by 1.73.

**Three separate things were wrong with that comparison.** The address was
wrong (`0xf3e04` instead of `0xf3e24`). The expected sequence was a hand-written
paraphrase, not the image's bytes. And the source form used pointer arithmetic,
which gives the compiler no reason to form a scaled index at all.

**That conclusion was unsound**, because `highc-spike.md` already recorded that
High C **2.31 also fails** on that same source form. I had tested the one
formulation that no compiler in the family matches, and read its failure as
evidence about the version.

The spike doc records it plainly: 2.31 on the integer form gives
`mov ecx,[esp+0x8] / shl ecx,1 / add ecx,eax / mov [ecx],ax`, and on the
**pointer form** gives the game's shape. `plot.c` is the wrong probe.

## The test that actually discriminates

`highc-forensics.md` named the real discriminator: **compile a division by a
constant power of two and look for `idiv`.** The game uses hardware `idiv` and
repeated halving (83 `idiv` instructions, 31 `cdq`/`sub`/`sar` chains, one
reciprocal multiply in a megabyte). High C 2.31 emits a bias-then-shift
reciprocal at every optimisation level including `-O0`, so it cannot be the
compiler for the bulk of the image.

So I ran that test on 1.7 inside Tsugaru.

### Division by 16

```c
int f(int x) { return (x - 4) / 16; }
```

High C 1.7, measured:

```
8B442404     mov eax,[esp+0x4]
83E804       sub eax,0x4
99           cdq
B910000000   mov ecx,0x10
F7F9         idiv ecx        <-- HARDWARE DIVIDE
C3           ret
```

The game at `0x0e6a2c`:

```
sub eax,0x4
cdq
mov ecx,0x10
idiv ecx          <-- HARDWARE DIVIDE, same sequence
```

High C 2.31 for the same source:

```
sar eax,2 / shr eax,0x1d / add eax,ecx / sar eax,3
```

**1.7 matches the game. 2.31 does not.** At `-O` the output is byte-identical
to the default, `sha256` unchanged.

### Division by 2, the halving chain

```c
int g(int x) { return (x - 6) / 2; }
```

High C 1.7:

```
8B442404     mov eax,[esp+0x4]
83E806       sub eax,0x6
99           cdq
2BC2         sub eax,edx      <-- exact match
D1F8         sar eax,1        <-- exact match
C3           ret
```

The game at `0x0e6a0f`:

```
cdq
sub eax,edx
sar eax,1
```

**The naive one-power-at-a-time halving is reproduced exactly.** This is the
31-instance pattern, and 1.7 emits it in the same form as the game where 2.31
emits the modern reciprocal.

## The probe that works: a typed 2-D array

Pointer-plus-arithmetic was the wrong shape. A **typed 2-D array** is what gives
a compiler a reason to form `[base + index*2 + disp32]`: the scale comes from
the element type and the stride from the second dimension.

```c
typedef unsigned short row_t[64];
void r2(unsigned short v, int c, int r) { ((row_t *)0x77e90)[r][c] = v; }
```

High C 1.73 (banner: `MetaWare High C Compiler 1.73`, parser `14-Oct-91`):

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

**`66 89 0c 50` is `mov [eax+edx*2],cx`.** That is the scaled-index store I
had previously reported as unreachable. It is reachable; my earlier probes were
simply the wrong shape.

### What matches

| feature | game | High C 1.73 |
|---|---|---|
| scaled index `[reg+reg*2]` | yes | **yes**, `66 89 0c 50` |
| `shl r,7` for row \* 128 | yes | **yes** |
| 16-bit `mov cx` from the argument | yes | **yes** |
| 16-bit word store | yes | **yes** |
| argument order row, col, value | yes | **yes** |

### What does not match

| feature | game | High C 1.73 |
|---|---|---|
| frame pointer | none | `push ebp` / `mov ebp,esp` / `leave` |
| argument addressing | `[esp+N]` | `[ebp+N]` |
| `0x77e90` | folded into the store's disp32 | materialised into `esi`, then `add` |
| callee-saved register | none used | `push esi` / `pop esi` |
| length | 25 bytes | 31 bytes |

Four formulations were tried in total. All four that compiled produced the
scaled index once the array type was present, and all four added a frame. Two
variants that used a local pointer variable produced a *worse* result, adding
both a frame and a stack slot.

**The frame appears to follow the `esi`.** `docs/highc-codegen.md` measured that
only 43.1 percent of the game's 738 routines carry a frame, which is consistent
with a rule of this kind: push a callee-saved register and you get a frame,
otherwise not.

### What this probe can and cannot conclude

It cannot produce a byte match, because 1.73 declines to fold an absolute
address into a store displacement on any formulation tried.

It does establish that the instruction *family* is identical: the scaled index,
the shift, the width handling and the argument order all agree. That is a much
stronger identification than the paraphrased comparison ever supported.
## Corrected summary of the compiler question

| question | before | after |
|---|---|---|
| does High C 1.73 emit `idiv` for `/16` | unknown | **yes, exactly as the game** |
| does High C 1.73 emit the naive `/2` halving chain | unknown | **yes, exactly as the game** |
| does High C 1.73 emit the scaled index `[reg+reg*2]` | unknown | **yes**, with a typed 2-D array |
| does High C 2.31 emit any of these | no | no, it emits a reciprocal at every level |
| is 1.73 the compiler that built the game | "no", from a bad probe | **consistent with yes.** No measured contradiction remains |
| is 2.31 the compiler | "yes, for this routine" | **no.** It fails the division test that 1.73 passes |

The FM Towns High C 1.73 kit is the leading candidate, it runs on the actual
target platform with the vendor's own toolchain, and every discriminating test
run so far agrees with it.

## What is still not established

- **No whole-function byte match yet**, for a specific and now-understood
  reason: 1.73 materialises an absolute base into a register and adds it,
  where the game folds it into the store's displacement. The scaled index,
  shift, width handling and argument order all agree. What differs is one
  address-folding decision plus the frame pointer.
- **The frame-pointer rule.** 1.73 frames every formulation that pushed
  `esi`, and the game frames only 43.1 percent of routines. Whether those are
  the same 43.1 percent is untested.
- **Whether a source shape exists** that keeps the base in the displacement
  and avoids the callee-saved push. Four formulations were tried and none did.
  A routine in the image that is frameless *and* uses an absolute displacement
  in a store would be the probe to design against.

## Reproducing

The probes are small C files. The recipe is
[compiling-on-fm-towns.md](compiling-on-fm-towns.md), and the mechanism is
[highc-compile-success.md](highc-compile-success.md). `./tools/plot-proof.sh`
runs the original plot variant.

**The ground truth is now a hex search, not a quoted sequence:** find the
`0x77e90` immediate in `ENCHANT.EXP`, disassemble the enclosing function, and
compare against that. Quoting bytes from memory is how this page went wrong
twice.

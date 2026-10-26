# The non-leaf blocker was the wrong compiler

**Correction, later session.** The division finding below stands and is correct. Two
framings in this page are superseded. First, `0xe6a58` is not a non-leaf routine: the census
classifies it `base-fold` with `calls: 0`, and its byte-match failure is the absolute-address
blocker of `docs/base-fold-negative.md`, not register allocation. Second, the real blocker for
the actual `non-leaf` set is that every call carries a link-time `rel32` relocation, which no
source shape removes. Both are measured in `docs/nonleaf-relocation-ceiling.md`. The
"allocation is the one open question" framing below is therefore the wrong question.

**Verdict: the recorded negative does not apply to High C 1.73.** A question this
project closed on the strength of `docs/highc-spike.md` is reopened by
measurement, and the reason is a compiler version.

## What was recorded

`docs/highc-spike.md` tested whether compile-and-diff scales past leaf routines,
using `0xe6a58` as the case. It found that matching fails on division:

```
game:      lea eax,[esi-0x6] / cdq / sub eax,edx / sar eax,1  (three times)
High C 2.31: sar eax,2 / shr eax,0x1d / add eax,ecx / sar eax,3
```

and concluded that "bulk decompilation by compile-and-diff would fail on every
routine containing a division, and that is a large fraction of a game's
arithmetic."

That conclusion is correct **for the compiler it was measured with**. It names
High C 2.31 in the text.

## What changed

The compiler now in the pipeline is High C **1.73**, from the SDK CD, on the
English TownsOS developer disk. It has since reproduced ten routines byte for byte
and been shown to reproduce the game's `lea`-then-shift for multiplication.

So the division claim needed re-testing against 1.73. It was tested, and it does
not hold.

## The measurement

Source form, compiled through `tools/cc.sh`:

```c
int t = (e-6)/2/2/2;
```

produces

```
99 2b c2 d1 f8 99 2b c2 d1 f8 99 2b c2 d1 f8
```

which is `cdq / sub eax,edx / sar eax,1` three times. That is **the target's exact
15-byte divide sequence**, byte for byte.

The same source as `(e-6)/8` produces `cdq` then the multiply-by-reciprocal form,
so the two are distinguishable and the choice of source expression decides which
one is emitted. The game's `0xe6a58` contains the three-pair form, so the original
source spelled the division as successive halvings.

| expression | emitted |
|---|---|
| `(e-6)/8` | `99 81 e2 07 00 00 00 03 c2 c1 f8 03` (bias-then-shift) |
| `(e-6)/2/2/2` | `99 2b c2 d1 f8` x3 (naive halving, **matches the game**) |

## Attempting `0xe6a58`: the arithmetic is solved, the allocation is not

Three source shapes were written. None matched. Recording what is known, because
most of it is now known and the remainder is one specific disagreement.

### The record, solved

The routine initialises one record of a struct array. Every store is
`mov [eax+ecx+disp],reg` where `eax` is the literal `0x7a7d0` and `ecx` is
`57*edi`, computed by `lea edx,[edi+edi*2]`, `lea ecx,[edx+edx*8]`,
`lea ecx,[edx+ecx*2]`. So the record stride is **57 bytes** and record `i` starts
at `0x7aee4 + 57*i`.

| offset | field |
|---|---|
| 0 | byte `0xff` |
| 1, 5, 9, 0xd | four dwords from arguments |
| 0x11 | clamped value |
| 0x15 | the min |
| 0x19, 0x1d | 0 |
| 0x21 | `-1` |
| 0x25 | argument |
| 0x29 | 0 |
| 0x2d, 0x31 | arguments |
| 0x35 | `-1` |

Fields span 53 bytes, which fits inside the 57-byte stride. That is a
self-consistency check the layout passes.

### The two computations, solved

```
t = (c-6)/8      via lea eax,[esi-6] then cdq/sub/sar 1 three times
if (t < e) e = t     e is [ebp+0x1c], written back to the stack slot
u = (d-4)/16     via sub/ cdq / mov ecx,0x10 / idiv ecx
if (u < f2) swap     cmp eax,ebx / jnl / xchg eax,ebx
```

The `xchg eax,ebx` is the interesting instruction: it swaps rather than moving,
so after the clamp `ebx` holds the division result and `eax` holds the old `f2`.
That is a swap, not a min.

### The disagreement, and it is allocation not logic

The target's prologue is `push ebp / mov ebp,esp / push ebx / push esi / push edi`
with **no local storage**, then loads `edi=[ebp+8]`, `esi=[ebp+0x14]`,
`ebx=[ebp+0x20]` up front and reuses `esi` for the first division.

All three candidate shapes produce `push eax` and load `c` from the stack again
later. So the target keeps `c` in `esi` and has no frame, while ours spills.
That is the same class as the register-choice case `0xe140c`, not a logic error.

The likely cause is that the source used the parameter fewer times than the
candidates did, or the two divisions were written as separate statements feeding
distinct variables. Not established.

### What this does and does not change

The division blocker is confirmed gone: both `cdq/sub/sar` and `idiv` are
reproduced exactly by 1.73. What this routine adds is that non-leaf matching is
**not** simply a matter of writing the same logic. Register allocation differs on
routine shape, and 225 bytes with 15 stores and two divisions gives the allocator
far more freedom than the 25-byte leaves did.

One routine, one negative. It does not show the other 306 are unreachable, and it
does show they are materially harder than the leaf set.

### The `idiv` test, which `docs/highc-forensics.md` asked for

The forensics page ended by saying the next step was not a bigger decompile
attempt but "obtaining one older High C and running the two-line `idiv` test".
That test had not been run against 1.73. It has now.

```c
int f(int a, int b) { int c = a / b; return c; }
```

High C 1.73 emits `55 8b ec 50 8b 45 08 99 f7 7d 0c 89 45 fc c9 c3`, which
contains `99 f7 7d 0c`: `cdq` then `idiv dword [ebp+0xc]`. The game contains 83
such forms, and 2.31 produces them at no optimisation level.

So the two compilers separate cleanly on this test and the project's earlier
verdict was correct: 1.73 is the compiler, 2.31 never was. The page's negative is
scoped to 2.31 and was right to be.

## The honest limits of this finding

- **One expression form on one routine.** It shows the division strategy of 1.73
  matches the game's. It does not show every remaining instruction does.
- **`0xe6a58` is still unmatched.** The divide sequence matches and the whole
  routine does not, because the frame and the argument mapping differ.
- **A stale negative is a live hazard.** This one was written down, cited, and
  believed for long enough that the queue was cut to the leaf set. It was correct
  when measured and wrong by the time it was acted on, and nothing in the
  project noticed the dependency.

The last point is the general lesson and the reason this page exists rather than a
line in a changelog. Any recorded negative that names a tool version expires when
the tool changes, and this project changed the compiler mid-investigation.

## Related

- `docs/highc-spike.md`: the original negative, superseded on the division point
- `docs/corpus-census.md`: the 307 `non-leaf` routines and why they were excluded
- `docs/globals-step2-plan.md`: the method that recovered two base-fold routines

# The non-leaf blocker was the wrong compiler

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

## What this means for the 307

The specific blocker recorded against non-leaf routines is division, and it is
gone for the compiler in use. What remains on `0xe6a58` is argument mapping and
register allocation: the target uses `ebx`/`esi`/`edi` with arguments at
`[ebp+8]`, `[ebp+0x14]`, `[ebp+0x20]`, while the candidate used `edi` with a
different argument order.

That is ordinary work of the kind already solved ten times on leaves, not a
code-generation wall. It is also not proof that non-leaf matching is now easy. One
routine's divide sequence is one routine's divide sequence.

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

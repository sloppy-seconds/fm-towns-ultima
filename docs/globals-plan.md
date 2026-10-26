# Plan: recover the globals of the base-fold set

**Status: PLAN ONLY. Not executed.** This file is written to be validated before
any step is run, because its cheapness rests on assumptions that have already
failed once.

## The problem this addresses

`docs/corpus.json` classifies 76 routines as `base-fold`: real function entries,
no calls, but referencing an absolute address. They cannot match byte for byte,
because our build places a global at its own address. `docs/base-fold-negative.md`
records that for `0xf3e24` the source was recovered and the address was not
reachable through the linker.

Those 76 are readable, behaviourally understandable game code. They are not
useless, and an earlier claim on this project that the byte-matchable queue was
"five routines" understated the corpus badly by dismissing them.

## What is already known

`0xf3e24`, 104 callers, solved:

```c
unsigned short grid[128][64];
void f(int v, int b, int a) { grid[a][b] = (unsigned short)v; }
```

The global at `0x77e90` is derivable from the instruction. The address is the
displacement, and the shape comes from how the code indexes it: `shl 7` gives a
128-byte row stride, and `[eax+edx*2]` gives `unsigned short` elements. That is
the template the rest of this plan is meant to generalise.

## The steps

**1. Enumerate every absolute reference, not just the first.**
`preflight.js` records one address per routine and stops. A pass that lists all
of them per routine gives the real reference graph.

**2. Separate data references from code references.**
Not every plausible constant is a global. `0xe30a0` disassembles to 10 candidate
values, and several are jump targets inside the routine. A data reference is a
memory operand, an immediate loaded as an address, or a `mov [abs],imm` form. A
branch target is not.

**3. Classify each global by how it is used.**
Element size from the scale factor, array stride from the `lea` chain, base from
the displacement. Record a typed declaration rather than an address.

**4. Cross-check across routines.**
A global touched by several routines must have one shape. Disagreement means one
reading is wrong. This is the corroboration method already used for format
claims, applied to data.

**5. Recover the routine logic per routine, reusing declared globals.**
Each routine gets a page with its arithmetic, in the manner of the C leaves.

## Validation of the plan, run before execution

Each assumption the plan depends on, and what was measured.

### V1. Is 56 distinct addresses the real number? NO.

76 routines reference 56 distinct addresses, but that is a lower bound: `preflight`
records exactly one address per routine, and measurement confirms **0 of 76 carry
more than one**. So the true edge count is unknown and at least 76. The plan must
not quote 56 as the size of the global set.

### V2. Is enumerating all references a contained change? YES, but not trivial.

A prototype found 1 reference in `0xf3e24`, 3 in `0xe6a58` and 10 in `0xe30a0`.
The first prototype found **zero** in `0xf3e24` because it required the constant
to be immediately before `]`, and ndisasm writes
`[eax+edx*2+0x77e90]`. That is the same defect class that hit `preflight.js` four
times: a detector that silently answers the wrong question.

### V3. Are all candidate constants globals? NO.

`0xe6a58` yields 3 candidates and 2 are branch targets (`jnl 0xe6a81`).
`0xe30a0` yields 10 and at least 3 are branch targets. Step 2 is therefore
mandatory, not a refinement. Without it the address set is polluted with code
addresses and every later step inherits the error.

### V4. Is the address range assumption safe? PARTLY.

All recorded addresses fall inside the image, `0x40e88` to `0xff9fa`. But the
filter is `0x10000..0x200000`, which admits code addresses as well, which is
exactly V3's problem. A tighter rule is needed and is not yet established.

### V5. Can a global's type be derived reliably? ONE SAMPLE ONLY.

Demonstrated once, on `0xf3e24`. The shift gave the stride and the scale gave the
element size because the code was a simple indexed store. Nothing here shows it
generalises. `0xe30a0` accesses `[eax+edx+0x392c8]`, `+0x392cc`, `+0x392d0`,
`+0x392d4`, which is a struct of four-byte fields at consecutive offsets, a
different shape again. So step 3 has at least two modes and probably more.

### V6. Does step 4 actually detect errors? UNTESTED.

No case has yet been found where two routines disagree about one global. Until
one is found, the cross-check is unproven as a check. Per this project's rule, a
check that has never been seen to fail is a comment.

## The verdict on the plan

**Sound in direction, unsound in its optimistic form.** Steps 1, 2 and 5 are
well-defined. Step 3 is real work of unknown size, with at least two distinct
shapes already visible. Step 4 is a check that has not been shown able to fail.

So the plan is worth executing, in a changed order:

1. Build the reference enumerator with the data-versus-code separation, since V3
   shows a naive version is worthless.
2. Run it and report the true global count. This replaces the 56, which is only a
   lower bound.
3. Pick the **most-referenced** global, not the next routine, and derive its type
   from every routine that touches it. That exercises step 4 on a real case and is
   the cheapest way to find out whether cross-checking works at all.
4. Only if step 3 converges, continue to per-routine logic.

The change from the original plan is that step 3 of the original becomes the
experiment that validates the method, rather than a bulk operation applied to 76
routines on the strength of one sample.

## Execution log, and what the validation changed

Validation ran before execution and changed the plan twice. Both changes were
forced by measurement, not preference.

### Changed once: the 56 is not the size of the global set

V1 predicted this. `preflight.js` records one address per routine, and
measurement confirmed 0 of 76 carry more. The first working enumerator found
**277 data references across the 76 routines**, a figure the 56 could not have
produced.

### Changed twice: "absolute reference" was three different things

The first enumerator matched any hex literal in an operand and reported **436
distinct addresses**. That was wrong by a factor of three, and the reason is a
distinction the plan did not anticipate:

| operand form | meaning | example |
|---|---|---|
| `[0xceca0]` | bare disp32, a real global | `mov eax,[0xceca0]` |
| `[edx+0xcdf57]` | base register plus field offset, NOT a global | `cmp dword [edx+0xcdf57],0x5` |
| `[eax+edx*2+0x77e90]` | SIB index plus array base | `mov [eax+edx*2+0x77e90],cx` |

In the second form `edx` holds `351*index`, so `0xcdf57` is a struct field and the
effective address moves with the index. Those were being counted as globals.

**A two-class fix then failed its own regression.** Treating anything with a
register as relative made `0xf3e24` report zero data references, when it must
report `0x77e90`. The third form is the one the tool was written for. Three
classes are needed, and the regression is what caught the error.

### The result

| measure | value |
|---|---|
| base-fold routines scanned | 76 |
| data references | 190 |
| code references excluded | 437 |
| **distinct globals** | **118** |
| preflight's earlier figure | 56, a lower bound |

The most-referenced global, `0xceca0`, is touched by 8 routines and is the one
typed below.

### The first global, typed from eight routines

Every user of `0xceca0` loads it identically and then computes the same index by
the same five instructions:

```
mov eax,[0xceca0]
lea edx,[eax+eax*4]     ; edx = 5*i
lea edx,[eax+edx*2]     ; edx = 11*i
shl edx,5               ; edx = 352*i
sub edx,eax             ; edx = 351*i
```

So `0xceca0` is an **int index**, and `351` is a record stride. Fields are then
reached as `[edx+disp]` at offsets `0xcde6e`, `0xcde76`, `0xcde7c` and `0xcdf6b`,
which span 253 bytes and therefore fit inside one 351-byte record. That is
consistent across all eight routines, which is the cross-check working on a real
case.

### Whether the cross-check can fail: it could not, until it was fixed

V6 said a check never seen to fail is a comment. The first width check reported
**0 conflicts across 436 globals**, and on deliberately contradictory synthetic
input it also reported 0. It was decoration, because `mov eax,[addr]` carries no
size keyword and the width lives in the register name.

After teaching it that `eax` is 4 bytes and `cl` is 1, it detects the synthetic
conflict. On the real data it then reported two conflicts, and **both were false
positives from my own classifier**: one mixed an address load with a byte read at
that address, the other was a `[edx+disp]` struct field. Both disappeared once the
three-class split was in. So the check works and the data is clean, and neither of
those statements was true an hour ago.

## Done when

- the enumerator reports every data reference per base-fold routine, and its
  output for `0xf3e24` contains `0x77e90` and nothing spurious, as a regression
- the true number of distinct globals is known and stated once, here
- at least one global is typed from two or more routines, with any disagreement
  recorded
- if the cross-check cannot be shown to fail, that is recorded as a limit rather
  than presented as assurance

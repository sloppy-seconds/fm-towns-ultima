# The `enter` census across seven binaries

**Verdict: `enter 0,0` is compiler output in every binary measured, its frequency varies
five-fold between programs from the same toolchain, and the variation tracks what the program
is rather than who built it. The demos are one program in three data sets, so the seven
binaries are four independent builds, not seven.**

All counts from `tools/entercensus.js`, seeding from every direct call target and classifying
each entry by prologue form and body kind. Base is `0x20` for the `MP` images and `0x200` for
the `P3` launcher.

## The table

| binary | what it is | entries | `enter` | `push ebp` | other | `enter` % | `enter` w/ locals |
|---|---|---|---|---|---|---|---|
| `ENCHANT.EXP` | Ultima II (Origins) | 739 | 71 | 318 | 350 | 9.6% | 39 |
| `DARKNESS.EXP` | Ultima I (Origins) | 889 | 74 | 387 | 428 | 8.3% | 42 |
| `EXODUS.EXP` | Ultima III (Origins) | 790 | 70 | 354 | 366 | 8.9% | 38 |
| `TMENU.EXP` | Fujitsu launcher | 823 | 252 | 233 | 338 | **30.6%** | 224 |
| `BRITISH.EXP` | Lord British presentation | 384 | 67 | 122 | 195 | 17.4% | 37 |
| `UT1DEMO.EXP` | intro, Episode I | 382 | 67 | 121 | 194 | 17.5% | 37 |
| `UT2DEMO.EXP` | intro, Episode II | 380 | 67 | 121 | 192 | 17.6% | 37 |
| `UT3DEMO.EXP` | intro, Episode III | 384 | 67 | 121 | 194 | 17.4% | 37 |

`enter` split by body kind:

| binary | `enter` + C-frame | `enter` + stub |
|---|---|---|
| `ENCHANT.EXP` | 52 | 5 |
| `DARKNESS.EXP` | 55 | 5 |
| `EXODUS.EXP` | 52 | 5 |
| `TMENU.EXP` | 169 | 22 |
| `BRITISH.EXP` | 53 | 3 |
| `UT1DEMO.EXP` | 53 | 3 |
| `UT2DEMO.EXP` | 53 | 3 |
| `UT3DEMO.EXP` | 53 | 3 |

## Four independent builds, not seven

The three `UT*DEMO` files and `BRITISH.EXP` are **one program with four content sets**. Measured
evidence, not inference from filenames:

- identical string tables: `KYB_clrbuf`, `KYB_read`, `SYSTEM ERROR:`, the same `d:\SND\` list,
  the same `A:HEADTTL.TIF`
- `pages` in the `MP` header are 1208, 1209, 1210 for the three demos: sequential, which is
  what a build script producing three variants looks like
- census counts are identical to the routine: 67 `enter` and 121 `push ebp` in all four

So the seven binaries are **four builds**: the three Ultima games, Fujitsu's launcher, and the
presentation program.

That matters for any statistic computed over the table. Treating the four presentation binaries
as four samples would weight one program four times.

## What the variation does show

| group | `enter` rate |
|---|---|
| the three Ultima games | 8.3%, 8.9%, 9.6% |
| the presentation program | 17.4% to 17.6% |
| Fujitsu's launcher | 30.6% |

**The three games agree within 1.3 points across three independently built programs.** That is
the important number: same toolchain, same team, three separate builds, and the rate barely
moves. A global compiler switch would fix one value; a per-function rule that fires on source
structure would produce exactly this stability.

**The presentation program is double the games, and the launcher is triple.** Four separate
builds, four different rates, one toolchain. So the rate is a property of *what the program is
made of*, not of how it was invoked.

## The local-size evidence, which is what rules out assembly

`enter imm16, imm8` declares how many bytes of locals to allocate. A hand-written stub wanting
`enter 0,0` passes zero. The last column of the table counts `enter` entries with a non-zero
first operand:

**39, 42, 38, 224, 37, 37, 37, 37.** Every binary allocates locals through the `enter` operand.

Combined with `TMENU`'s `0xfb7c`, which does `enter 0xc` and then uses exactly three locals at
`[ebp-4]`, `[ebp-8]`, `[ebp-0xc]` in a sort loop touching no hardware, the assembly reading is
dead for all of these.

## The local-size distribution, which refutes the depth explanation

A natural reading of the rate differences is that launchers and presentation shells have deeper
frames, crossing some threshold. Measured, that is wrong.

| binary | `enter` fns | mean locals | mean (nonzero) | max | zero-local |
|---|---|---|---|---|---|
| `DARKNESS.EXP` | 74 | 9.0 | 15.9 | 112 | 32 |
| `ENCHANT.EXP` | 71 | 9.2 | 16.7 | 112 | 32 |
| `EXODUS.EXP` | 70 | 9.2 | 16.9 | 112 | 32 |
| `TMENU.EXP` | 252 | **34.4** | 38.7 | **2052** | 28 |
| `BRITISH.EXP` | 67 | 8.8 | 15.9 | 112 | 30 |
| `UT2DEMO.EXP` | 67 | 8.8 | 15.9 | 112 | 30 |

**The presentation program has the shallowest frames of all (8.8 mean) and nearly double the
`enter` rate.** Depth and rate are not correlated. `TMENU` has both more and larger frames, but
it is the only binary that does, so it is one data point rather than a trend.

The full local-size histograms make the point sharper. The three games are near-identical bucket
by bucket:

```
DARKNESS  0:32 4:17 8:5 12:5 16:4 20:4 28:1 32:1 36:1 44:1 48:1 56:1 112:1
ENCHANT   0:32 4:15 8:4 12:5 16:4 20:4 28:1 32:1 36:1 44:1 48:1 56:1 112:1
EXODUS    0:32 4:15 8:3 12:5 16:4 20:4 28:1 32:1 36:1 44:1 48:1 56:1 112:1
```

Same maximum, same count of zero-local routines, same single routine at 112 bytes. That is not
similarity of style, it is shared code, and the next section confirms it.

## The finding that actually explains the stability

Comparing routine bodies byte for byte across the three games:

| pair | shared `enter` routines |
|---|---|
| `ENCHANT` vs `DARKNESS` | **31 of 71** |
| `ENCHANT` vs `EXODUS` | 29 of 71 |
| `DARKNESS` vs `EXODUS` | 29 of 74 |

**Thirty-one routines are byte-identical between Ultima II and Ultima I.** The three games share
a compiled library core.

Splitting `ENCHANT`'s routines into shared and unique:

| subset | `enter` routines | `push ebp` routines | `enter` rate |
|---|---|---|---|
| shared with `DARKNESS` | 31 | 39 | **44.3%** |
| unique to `ENCHANT` | 40 | 279 | **12.5%** |

**The shared library uses `enter` 3.5 times as often as game-specific code does.** That is the
strongest measured correlate found in this whole investigation, and it points at something
concrete: the frame form tracks which upstream library a routine came from, not what the program
does.

It also revises the "three independent builds agreeing to 1.3 points" reading. They agree
because they share a large block of identical code, not solely because Origins wrote
consistently.

## What this does not show

**It does not identify the trigger.** The 44.3 percent against 12.5 percent split says the frame
form tracks which library a routine came from. It does not say what property of that library's
source causes it. "Comes from the shared core" is a label on the observed split, not an
explanation of it, and the same caution applies here as to the three structural readings already
refuted on this question.

**It does not show `enter` is unreachable from C.** `ENCHANT` uses it 71 times, so the compiler
emits it; what has not been found is a C source that makes it. All 43 toggles are exhausted and
the driver route gives `push ebp` for every source tried.

**It does not licence treating a prologue mismatch as benign.** Because the trigger is unknown, a
candidate whose prologue differs cannot be called verified on a post-prologue comparison. The
`identical except disp32` tolerance used elsewhere in this project rests on the differing bytes
being provably linker-supplied; `enter` against `push ebp` has no such proof, and the two are
different instructions rather than one relocation.

## The correction this page carries

An earlier summary of the two-binary result quoted "TMENU 252/823 (30.6%) against ENCHANT
29/454 (6.4%)" and called the five-fold gap evidence of a per-function source condition. The
direction is right and the framing is not: **454 was the corpus size, not the census size**
(the census finds 739 entries in `ENCHANT`), and the demos were being counted as three samples
of one program. The corrected figures are above, and they support
the per-function conclusion more strongly than the original numbers did, because they rest on
three independent builds agreeing to within 1.3 points rather than on two points and a raw byte
scan.

## Related

- `docs/enter-compiler-emitted.md`: the TMENU refutation of the assembly reading
- `docs/enter-band-boundary.md`: the band in `ENCHANT`, still correct as a boundary
- `docs/compiler-toggles.md`: all 43 toggles, exhausted
- `tools/entercensus.js`: the tool, container-agnostic

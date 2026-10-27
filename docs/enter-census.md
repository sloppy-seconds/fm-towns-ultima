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

## What this does not show

It does not identify the selection rule. Four builds with four rates says the rule is
source-dependent, and says nothing about which source feature triggers it. The 43 command-line
toggles are exhausted and the driver route reproduces the same `push ebp` for every C source
tried.

It also does not show that `enter` is *unreachable*. `ENCHANT` uses it 71 times, so the compiler
can emit it; what has not been found is a C source that makes it.

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

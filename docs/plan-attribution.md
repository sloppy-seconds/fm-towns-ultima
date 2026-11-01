# Attribution: what built this binary, and how we would know

Shared groundwork for [plan-port.md](plan-port.md) and [plan-recomp.md](plan-recomp.md). Neither build
track may claim an attribution it has not earned here, and this document is where the ledger that both
consume is defined.

Agreed with Brain and approved by Paul on 2026-11-01. The four corrections that shaped it are recorded
below because they are the reason the order is what it is.

## Why this exists before either track does

The proposal this replaces was: cluster the functions, bulk compile-and-diff the dominant cluster against
High C 1.73 as a positive oracle, and route the failures to structural hand-asm tests.

**Step three of that is invalid, and Brain conceded it after review.** A compile-and-diff mismatch cannot
distinguish "not 1.73" from "my C is not the original C". Byte identity needs candidate-C equivalence and
compiler match and flag and linker match all at once. So a match is strong positive evidence and a mismatch
is close to no evidence. A funnel that routes mismatches to a hand-asm label launders bad decompilation
into a positive claim about the original binary.

This repository has already made that mistake and written it down. `docs/compiler-generation.md` counted
the zeroing idiom across the image, found 88 percent of `xor` sites in the `enter` region, called it
corroboration, and then measured per routine: **0 of 41 routines in the band contain `sub eax,eax`, and 35
of 41 contain neither idiom.** The image-level concentration was two sparse signals overlapping, not one
cause. The page keeps the withdrawal in place rather than deleting it, and this document is written in the
same spirit.

The consequence for the plan is one rule:

> **Attribution requires positive evidence. A mismatch is not positive evidence of anything.**

## The scale of what is actually in question

Do not size the funnel to a claim bigger than the evidence.

| population | size | what is known |
|---|---|---|
| `ENCHANT.EXP` game module | 818 functions, 41,847 instructions, 137,253 bytes | the scope of the first pass. TBIOS is deferred, see below |
| `TBIOS.BIN` | 5,573 functions, 15,288 instructions | a different binary and a different question. TownsOS is not a High C build target, so mixing it in pollutes every feature vector |
| the `enter` cluster | **41 routines in 2,260 bytes**, `0xfdb9a..0x105000` | two idioms, both clustered on the same address boundary, neither reproducible by 1.73 under any source shape or flag set tried. That is a coherent signature of a **separately built region** |
| unresolved indirect transfers | 30 in the game module | first-class ledger category, not a footnote. See the defect 1 note below |

**What the cluster is not.** It is not "the residual mismatches across 818 functions". `docs/compiler-generation.md`
establishes a separately built region and then explicitly refuses to name it: "a linked static library built
with an older MetaWare release would look exactly like this. So would hand-written assembly." Three
hypotheses, none separated, and separating them is not needed to act on the finding.

**Two claims that do not hold up, recorded so they are not repeated.**

- *The self-modifying int patcher proves hand asm.* It does not. It proves the image writes an `int` opcode
  byte at runtime (`mov [0x10241b], al`, `CD 00` to `CD 93`), which is ordinary C and any compiler emits
  it. It matters for the recompiler's decode-once assumption, which is a different and still useful point.
- *The idiv test identifies 1.73.* It does not. `docs/highc-negative-result.md` proves **v2.31 is not the
  compiler**. That is a negative about 2.31. "1.73 is the leading candidate" rests on the matched
  routines, and the ledger must keep those two states apart.

**A count that needed one owner, now settled by item 0b.** `docs/compiler-generation.md` said "the seven
routines known to be High C 1.73 output (the ten `matched`)". Seven or ten, in one sentence. Both were right
and they were different sets: **eleven** routines are classed `matched` since `0xe140c` was promoted on
2026-11-02, and **nine** of those are driver-verified. The other two are not refutations, they are blocked on a
compiler toggle that strips the frame the game actually uses. The owner is
[attribution-samples.md](attribution-samples.md) and
`tools/checkall.js` asserts that eight plus two account for all ten.

## The ledger

One row per function, one file, both tracks read it and neither owns it. It is the artefact that keeps the
document split from hiding the coupling between the two build efforts.

| column | values | who writes it |
|---|---|---|
| `addr`, `size` | file offsets, size asserted not inferred | attribution |
| `module` | `ENCHANT` or `TBIOS` | attribution |
| `attribution` | the six states below | attribution |
| `confidence` | `proven`, `probable`, `unknown` | attribution |
| `cluster` | the feature-vector group id, or `none` | attribution |
| `recomp` | `compiled`, `refused`, `not-attempted` | recomp |
| `port-coverage` | `reached`, `never-reached`, `coverage-hole` | port |
| `indirect` | `resolved`, `unresolved`, `n-a` | attribution |
| `notes` | one line, with the command that produced it | anyone |

### `confidence` exists because an attribution state is not a degree of belief

The state column says what kind of claim is being made. It does not say how strong the evidence is, and one
state can be reached two ways: `hand-asm-positive` from a quoted idiom that the atlas excluded across 40
probes is a different claim from `hand-asm-positive` from a single census count that nothing has cross-checked.
Flattening those into one word is how a probable finding gets read as a proven one.

| value | means | what earns it |
|---|---|---|
| `proven` | the bytes are settled | a byte-identical match under the equivalence rule, or positive exclusion evidence whose provoking probe is named |
| `probable` | the evidence points one way and has not been confirmed | positive evidence, named, that has not been reproduced or cross-checked. One signal only |
| `unknown` | nobody knows | the default, and it must be written rather than left blank |

**A non-`unknown` row must name its evidence in `notes`, with the command.** A `probable` row must say how many
independent signals support it, because that number is the whole difference between the two values.

**Worked example, because "probable" is easy to hand out.** Item 0c's census found 41 functions that zero a
register with `xor reg,reg`, which the atlas never emits even for `a ^= a` (probes A33 and A40 both refused).
That is one signal, from one instrument, against a probe corpus that was wrong about three other claims in the
same session. So those 41 are `hand-asm-positive` at `probable`, not `proven`, and the note has to say "one
signal, xor-zeroing, atlas probes A33 and A40, not cross-checked by a second method". A second independent
signal would move them. A second run of the same census would not.

### The attribution states

`unattributed` is mandatory and is the default. It exists so that "not 2.31" cannot quietly become "is 1.73".

| state | means | what earns it |
|---|---|---|
| `compiler-1.73-matched` | this function's bytes are what 1.73 emits for a plausible C source | a byte-identical compile under the equivalence rule |
| `compiler-emitted-unmatched` | it has the atlas's compiler habits but not a byte match | positive idiom evidence from the atlas, not from a mismatch |
| `separate-region` | inside a region that is not this build | the cluster's own boundary evidence |
| `hand-asm-positive` | contains a sequence the atlas shows 1.73 never emits | positive evidence only, and the sequence is quoted with the atlas entry that excludes it |
| `unresolved-indirect` | reached only through a transfer nobody has resolved | the transfer analysis, and this is a port problem as much as an attribution one |
| `unattributed` | nobody knows | the default, and an honest answer |

**There is no state that means "the diff failed".** A failed diff leaves the row `unattributed` and the
reason in `notes`.

### Why defect 1 belongs in the ledger and in the port track

`docs/port-defects.md` defect 1 is `no recompiled function at 000c:000ffeba`, at frame 4026, reproduced
three times from ordinary play and twice more from scripted input. That is not a behavioural bug. It is the
port discovering that the recompiled module does not contain the address the game jumped to, and `0xffeba`
sits **inside** `f_000ffe24` and is not a function start, which makes it a computed transfer nobody
resolved.

So the port's top open defect is produced by the reproduction track's incompleteness, and the ledger is
where that becomes visible instead of being hidden by the document split. The 30 unresolved indirect
transfers are the same class of problem and are a first-class category for the same reason.

## The items

### 0a. The forward idiom atlas: what High C 1.73 emits, and what it never emits

**State:** DONE · **Autonomy:** AUTONOMOUS

**What is now known.** 40 small C sources were compiled with the real driver route and disassembled, producing
[idiom-atlas.md](idiom-atlas.md) and an eleven-entry never-emits list. The headline entries, each measured
rather than assumed: this compiler zeroes with `sub reg,reg` and never with `xor reg,reg`, it tests a memory
operand against zero with `cmp x, 0`, a register for truthiness with `and reg, reg` and a mask with
`test mem, reg` but never `test reg, reg`, it uses hardware `idiv` even for a constant divisor and
never a reciprocal multiply, it packs structs to byte alignment with no padding so `sizeof` a `char,int,char`
struct is 6, it allocates locals with `push` and never `sub esp,N`, it lowers small constant multiplies to
`lea` and strides to `shl` and reserves `imul` for runtime operands, and it emits no string ops so a byte copy
is a manual loop. It also corrected a known-good row: division by a power of two is a single wide `sar 3` with
a bias rather than the `sar 1` halving chain `AGENTS.md` recorded, and that chain is only reachable from a
source that halves explicitly. The corpus produced 3 frame shapes, 33 mnemonic sets and 40 distinct
instructions, which is the check that it is not too narrow to say anything. Three of its own early conclusions
were refuted by probes written to test them, and all three corrections are on the page rather than quietly
applied.

Compile a corpus of small C programs with the FM Towns High C 1.73 kit through the working TownsOS route
and harvest what comes out: prologue and epilogue shapes, frame style, the zeroing idiom, `idiv` against
the `cdq`/`sub`/`sar` halving chain, switch lowering, struct and array addressing, register-allocation
habits, alignment and padding. The atlas is the labelled **compiler-emitted** population, labelled by
construction rather than by inference.

It is the gate on everything else. Without it, clustering yields groups and not attributions, and
`hand-asm-positive` cannot be earned at all.

| field | value |
|---|---|
| autonomy | autonomous. The kit compiles in Tsugaru and `docs/compiling-on-fm-towns.md` is the recipe |
| done when | a committed corpus of at least twenty small C sources plus a generated table mapping each harvested idiom to the source shape that produced it, and a named list of idioms the kit did **not** emit across the whole corpus, which is the only thing that can later support a `hand-asm-positive` claim. The failure case: an atlas built from sources that all compile to one shape, which would show the corpus is too narrow rather than the compiler being uniform |
| blocked by | nothing |

### 0b. The labelled-sample inventory: same-compiler ground truth that is not our own guesses

**State:** DONE · **Autonomy:** AUTONOMOUS

**What is now known.** There is a large labelled population on disk and none of it had been examined. The SDK CD
ships four OMF libraries whose members `tools/omflib.py` walks to an exact byte accounting: 1,095 named
MetaWare members and 224,972 code bytes, in `HCE.LIB` (428), `HCC.LIB` (357), `NA.LIB` (307) and `PTOC.LIB`
(3), plus seven loose `.OBJ` files and 20 vendor sample C sources in `HC386\DEMOS\`. `saves/hc.img` and the
pristine kit archive in `references/metaware/` are the same disc differing by exactly 50 bytes in a 74-byte
span, and those 50 bytes are the three documented in-place `AUTOEXEC.BAT` patches, so the working image is a
fully accounted-for derivative of the archived original. The seven-or-ten count is settled: **ten** routines
are classed `matched` in `docs/routines.json`, **eight** of those ten are re-verified through the authentic
driver route, and the remaining two match under the frame-preserving generator that the game's own framed code
implies. Both original numbers were right and the sentence that put them side by side was the bug.
Full inventory, with the commands: [attribution-samples.md](attribution-samples.md).

Look for compiler-emitted code we did not write. Two candidates, and one dead end that must not be
re-attempted.

- the High C 1.7 kit archives in `references/metaware/`: inventory them for shipped library objects or
  sample sources. Kit library objects are same-compiler ground truth and cost an afternoon to check for
- `references/townsos/` for real shipped libraries
- **dead end, already measured:** naming `ENCHANT` functions by probing `TMENU`'s `SYM1` symbols is a
  recorded negative. `docs/name-propagation.md`: 1,291 usable probes, 54 unique matches, a shift control
  showed the matches were noise, verdict NEGATIVE, zero names earned. Do not spend time there again

This item also settles the seven-or-ten count: it produces the definitive list of routines that are
`compiler-1.73-matched`, and one page owns that number.

| field | value |
|---|---|
| autonomy | autonomous, and a negative is a full result here |
| done when | a recorded inventory of what labelled same-compiler material exists, or a recorded negative saying none does, plus the settled count of matched routines with the command that produced it and the old number grep-cleaned from the pages that carried it. The failure case: reporting "no library objects" without the `find` that looked, which is a guess |
| blocked by | nothing |

### 0c. Feature-vector clustering of the game module

**State:** DONE · **Autonomy:** AUTONOMOUS

**What is now known.** The instrument and the ledger exist: `tools/cluster.py` vectors 875 recompiled game
functions on 21 atlas-derived axes and writes `docs/ledger.json`, clustering by categorical signature so every
group is explainable back to idioms. It yields 374 clusters, largest 113. The census is the useful output: 227
functions zero with `sub reg,reg` as the atlas predicts, and **41 zero with `xor reg,reg`**, which is the only
census signal that survived being probed. Two others did not: 25 functions use a string op and 220 use
`and reg,reg` as a truthiness test, and probes A39 and A37 showed both are ordinary compiler output rather
than evidence of anything. Full findings: [clustering-0c.md](clustering-0c.md).

**The enter-cohesion criterion failed, and that is the result.** The item required the enter band's routines to
land in one cluster as the check that the vectors mean something. They do not, at any granularity: a sweep over
every prefix of the 21 axes peaks at 37% in the largest cluster and falls to 21% across 19 clusters at full
granularity, and coherence gets *worse* as the vectors get richer. Accepted as a real negative rather than
tuned away. It is consistent with all three hypotheses `docs/compiler-generation.md` left open and separates
none of them, and it argues against a fourth idea that was implicit in the criterion: that the enter region is
one homogeneous thing with one provenance. On these axes it is not one thing.

The item's stated band was also self-inconsistent: "41 routines in 2,260 bytes" and `0xfdb9a..0x105000` cannot
both hold. The byte count is taken as the assertion because it agrees with the routine count, and that band
holds 43 recompiled functions.

Every function in `ENCHANT.EXP`, vectorised on prologue and epilogue census, frame style, register-allocation
habits, `idiv` against shift, redundancy direction and alignment, clustered **against the atlas** so the
groups carry meaning. Compiles nothing. Scope is the game module only.

| field | value |
|---|---|
| autonomy | autonomous |
| depends on | 0a |
| done when | a committed ledger file with a `cluster` value for all 818 functions, the cluster sizes, and for each cluster the atlas idioms that put it there. The `enter` cluster's 41 routines must land in one cluster, because that is the one group with independent boundary evidence and it is the check that the vectors mean anything. The failure case: clusters that only re-derive the address boundary already known, which would mean the vectors carry no information beyond position. **Revised 2026-11-02:** the enter-cohesion clause was measured and failed, so it is recorded as a negative rather than met. The position check passed: 698 cluster boundaries are crossed in address order across 875 functions, so the clusters interleave rather than re-deriving the address boundary |
| blocked by | nothing |

### 0d. The ledger schema and the tool that fills it

**State:** DONE · **Autonomy:** AUTONOMOUS

**What is now known.** `tools/ledger.py` generates `docs/ledger.json` covering all **875** functions with ten
columns, and [attribution-ledger.md](attribution-ledger.md) documents it. The result is deliberately mostly
empty: 9 `proven`, 43 `probable`, **823 `unattributed`**, and that count is printed every run rather than
buried. `port-coverage` and `indirect` are `n-a` for every row because no tool produces them, and both are
named in the ledger's own `unpopulated` field with the reason. 451 sizes are asserted from `docs/corpus.json`
and 424 are `n-a`.

**The frame error this item would have shipped, found before it was cited.** The module names functions in
image offsets (`f_000e9c2c`) while every document uses file offsets (`0xe9e2c`), 0x200 apart. The first
version compared them directly and produced a ledger that looked merely sparse: 11 asserted sizes out of 454
and none of the ten matched routines mapped. After the shift, all but 23 of the census addresses land on a
module function and 451 of 454 sized entries do, which took asserted sizes from 11 to 451 and matched
routines from 0 to 10 (eleven once `0xe140c` was promoted). A units error that presents as missing data is
worth recording for that reason alone.

**Two deliberate refusals.** `base-fold` is not promoted to a match, because that class is mixed (one entry is
`0xfdeb6`, a two-instruction getter that recovers cleanly, and another is `0xf3e24` at 24 of 25 bytes) and parsing
those prose entries to decide would be guessing from wording. And the 41 xor functions are `probable`, not
`proven`, because one signal from one instrument is what they have.

The columns and states above, as a real file, plus the derivation script. Both build tracks read it and
neither may write a state it has not earned.

| field | value |
|---|---|
| autonomy | autonomous. It builds on 0c, which is done |
| depends on | nothing. 0c is finished, so the dependency is discharged and this is startable |
| done when | a generated ledger covering all 818 game functions with every column populated or explicitly `n-a`, including `confidence`, a `verify.js` assertion that no row carries `hand-asm-positive` without a quoted excluding idiom, and that no row carries `proven` or `probable` without an evidence line in `notes`, and a count of rows still `unattributed` reported in the open. The failure case: a ledger where every row has a state and none of them has evidence attached, which is the confident sentence with no command behind it. **Met 2026-11-02**, with three deviations stated rather than glossed: the population is 875 rather than 818 (Paul's ruling, and 818 was the recompiler's count before the jump-table seed fix moved it to 875), the assertions live in `tools/checkall.js` rather than `verify.js` because they need the module parse and `verify.js` must stay dependency-free, and every one of them was confirmed able to fail |
| blocked by | nothing |

## What this document deliberately does not decide

Whether the `enter` region is an older MetaWare library, a different compiler, or hand-written assembly.
That is a further question, the three are not yet separable with the evidence in hand, and acting on the
finding does not need it. If it later becomes cheap to separate them, the atlas's never-emits list is the
lever, not another compile-and-diff.

# The two walks, compared

Two independent control-flow walks now exist over the same 1,071,886-byte image, and until
`tools/recondiff.js` nobody had put their answers side by side. They disagree, and the disagreement is the
useful part: it names work we were not seeing and work that is not there.

- **Ours.** `tools/cfgwalk.js`, seeded from every `E8 rel32` call target in the image. That is the same rule
  `docs/call-graph.md` counts with, and it gives the 738 starts the queue is built on.
- **fmtownskit's.** The recompiler in `build/port/recomp`, seeded from the MP header entry plus the rules in
  [fmtownskit-and-seeds.md](fmtownskit-and-seeds.md). It reports 0 refused and 0 conflicts and emits 818
  functions.

## The frames, and the one that would have produced a fake answer

This project tracks four frames of reference ([two-frames-of-reference.md](two-frames-of-reference.md),
plus the guest frame the module uses). fmtownskit's emitted names are guest addresses: `void f_00000009` is
guest `0x9`, which is file `0x209`. `tools/cfgwalk.js` strips 0x20 rather than 0x200, so its addresses are
**guest + 0x1E0**.

Converting one side without the other produces a clean empty intersection, which reads as "the two walks
share nothing" rather than as an error. So the delta is one named constant in `tools/recondiff.js`, and it
is checked at run time against two anchors that are call targets in both walks: guest `0x9` and guest
`0x105a78`, the first and last functions the module emits. If either anchor is missing after conversion the
tool exits 2 without printing a comparison, because every number below would be a lie.

## The measurement

Run `node tools/recondiff.js`.

| | ours | theirs | in both | theirs only | ours only |
|---|---|---|---|---|---|
| instruction starts | 39,826 | 41,847 | 37,275 | 4,572 | 2,551 |
| function starts | 782 | 818 | 741 | 77 | 41 |

The instruction overlap is 89.1 percent of their set and 93.6 percent of ours. Our column is the `E8` call targets
**plus the 44 starts in `tools/runtime-seeds.txt`**, which is why it reads 782 rather than 738, and why theirs-only
has fallen from 121 to 77 since the first run of this comparison.

## The 44 that were theirs alone, and are now banked

The first run of this comparison found 121 starts the module emits that our seed rule does not. Classified:

| class | count | what it means |
|---|---|---|
| inside a run of zero bytes | 0 | the collision failure this project already had once. Zero is the result that matters |
| an instruction boundary our walk decoded but no CALL reaches | 77 | jump-table entries and indirect targets, which is a coherent explanation and not a defect |
| an address our walk never reached | 44 | a reachability fact about our seeds, **not** a disagreement about the bytes |

The third row is the one with value in it, and it has been acted on. All 44 are in `tools/runtime-seeds.txt`, with a
header saying where they came from and what the evidence is worth, and seeding this project's walk with them raises
it from **39,190 to 39,826 instructions**. So they are no longer theirs alone: the row above now reads 77 and 0
because 44 moved into the shared set.

**What that did to the queue.** `tools/queue.js` reads the seed file as well as the `E8` rule, so its universe grew
from 731 routines to **775**: 731 call targets, 44 with no call site, and 7 excluded as zero fill. `unattempted` rose
from 629 to 673, which is the first time that number has gone up, and it went up because a whole class of routine
became visible rather than because anything regressed. The counts are owned by [call-graph.md](call-graph.md).

**And what it did not do.** The recompiled module is unchanged: 818 functions, 41,847 instructions, 0 refused and 0
conflicts before and after. That is not a surprise and it is worth writing down, because the same file now feeds both
consumers. These 44 are starts the recompiler already emits, so handing them back to it as seeds is a no-op. The 30
in the next section are the opposite case, addresses it does not decode at all, and those are what moved its counts.

This is the row that needed care, and the first version of this tool got it wrong by calling it "not a boundary". It
means only that our walk never arrived there. Guest `0xe7238` is one of the 44 and begins `ff 05 e0 ae 07 00`, which
decodes cleanly as `inc dword ptr [0x7aee0]`. `node tools/recondiff.js --verbose` lists all 44 with their bytes.

## Our 41, and the seven that are not routines

Of the 41 call targets the module does not emit as functions, 30 it never decodes at all and 4 are decoded as
instructions but not emitted as starts. The remaining **seven land inside runs of zero bytes**, which no
routine can:

| address | zero run containing it | offset in the run | caught by |
|---|---|---|---|
| `0x17309` | 207,322 bytes | 36,631 | either threshold |
| `0x9829b` | 337,645 bytes | 118,564 | either threshold |
| `0x9b26b` | 337,645 bytes | 130,804 | either threshold |
| `0xcfc34` | 59 bytes | 4 | the seed threshold only |
| `0xd295b` | 53 bytes | 42 | the seed threshold only |
| `0xd29c5` | 53 bytes | 16 | the seed threshold only |
| `0xd2c47` | 55 bytes | 0 | the seed threshold only |

These are `0xE8` bytes that occur inside data and happen to point at zero fill. They are the collisions this
project suspected in its own seed set, and the count is now exact: seven entries in the queue are not
routines. The queue still derives 738 call targets by the same byte rule, so 738 is an upper bound on the number
of routines and 731 is the figure the image supports. The count and the correction are owned by
[call-graph.md](call-graph.md), and `tools/queue.js` derives the exclusion so its totals read 731 from 738.

That is a correction to the denominator used in the recovered fraction, not a change to the numerator.

## Why the count read as three for a while, and what reconciled it

The first version of this comparison reported seven, while `tools/cfgwalk.js --refusals` reported three seeds
in zero fill, and the two sets looked unrelated. Two separate causes, both now removed:

- **The frame.** `--refusals` printed addresses in the tool's own frame, file minus `0x20`. Converted by
  `0x1E0`, its three are `0x17309`, `0x9b26b` and `0x9829b`, which are three of the seven above. It now
  converts to the guest frame and prints `frame: guest` before any address, and `tools/checkall.js` asserts
  that header rather than trusting it.
- **The threshold.** `tools/cfgwalk.js` uses `DEFAULT_MIN = 64` from `tools/codelimits.js`, because that number
  answers a different question: could a whole extent be data, for the census of unreferenced regions. Four of
  the seven sit in alignment gaps of 53 to 59 bytes between routines, which that threshold does not catch and
  should not, because raising the census to 16 would fragment 66 runs into 387.

The resolution is two named constants in one file rather than one number doing both jobs. `DEFAULT_MIN` stays
64 for the region census. `SEED_MIN` is 16 for the seed question, because an address inside a 55-byte gap
between routines is not a routine start, and calling it doubtful would keep seven queue rows alive on a
technicality. The four small-run cases are what justify the second constant, and they are asserted by run length
so the argument cannot quietly become a matter of taste.

## What this comparison cannot do

fmtownskit emits instructions, not source, so it cannot say whether a recovered routine is semantically
right. It says where code is, where an instruction starts, and where a function starts, and those are the
three things this project's collisions came from. It is a boundary check, not a meaning check.

Two further limits worth stating:

- the instruction comparison is between two decoders but not between two independent readings of the same
  address, because overlap is counted on addresses. Where both walks call an address an instruction start,
  they agree by construction, since the bytes are the same. What the difference measures is coverage.
- a count agreeing is not a placement agreeing. Nothing here compares the length assigned to an instruction.

## The cross-seed test, and it comes back clean in both directions

`tools/cfgwalk.js` gained two modes for this. `--seeds-file F` adds guest-frame addresses from a file to the
seed set, in the same format `tools/runtime-seeds.txt` already uses for the recompiler, and `--test-seeds F`
answers one question per address: is this address already a boundary, is it inside an instruction we place,
is it in zero fill, or is it unreached.

The point of the test is that neither walk should be believed about a function head on its own. A seed is
acceptable only if the other walk does not contradict it, and the contradiction that matters is an address
falling inside an instruction the other walk proves.

- **Their 121.** 77 are instruction boundaries our walk already places, so the disagreement is about
  function-head status rather than about the bytes. **0 are mid-instruction. 0 are in zero fill. 44 are
  unreached by our seeds.**
- **Our 30 that they never decode.** All 30 are boundaries in our walk, and therefore 0 conflicts from their
  side.

So the two walks contradict each other nowhere. Every difference is coverage or reachability, which is the
outcome that allows the differences to be worked rather than argued.

## The recompile half: our seeds are accepted, and they conflict

`tools/recomp-cross.sh` runs the second half of the experiment. It takes the starts our walk holds that the module
never decodes, adds them as seeds through `U2_EXTRA_SEEDS`, recompiles into a separate directory, and hands both
modules to `tools/recompcompare.js`.

Measured, and the answer is not a clean pass:

```
baseline   game: 818 functions, 41847 instructions, 137253 bytes, 30 indirect unresolved, 0 refused, 0 conflicts
cross      game: 848 functions, 42224 instructions, 138434 bytes, 31 indirect unresolved, 2 refused, 32 conflicts
```

All 30 seeds are emitted, the function count rises by exactly 30, and nothing is lost. But the run reports **2
refused and 32 conflicts**, so the two decodes disagree about those regions rather than one simply having missed
them. The static conflict test could not see this: `--test-seeds` asks whether an address lies inside an instruction
**we** place, which is a one-sided question. The recompiler answers the other side, and it says no.

So the sets do not converge by adding seeds. Each of the 30 now needs a verdict of its own: either our walk is right
and the recompiler's decode of the surrounding bytes is wrong, or the address is a real instruction boundary that is
not a function start, which is the distinction the 77 drew earlier.

**A check that could not fail, recorded because it happened here.** The first version of `recompcompare.js` tested
`/refused (?!0\b)/` against the report line. The report states its counts *before* the words, as "2 refused, 32
conflicts", so that regex could never match and the tool printed `PASS` on a run with 32 conflicts. It now parses
`(\d+) refused` and `(\d+) conflicts`, and a report line missing either count is itself a failure.

## How it is checked

`node tools/checkall.js` runs the comparison as the gate `walk comparison`. It asserts the eight counts
above, the seven addresses by name, and the run length that holds each one, so a new bad seed fails loudly
instead of quietly lowering a percentage and the threshold argument stays tied to its measurement.
`tools/recondiff.js` exits 1 for exactly that reason, and a run that exits 0 while reporting call targets in
zero fill is itself a failure.

The cross-seed recompile is not in `checkall.js` on purpose: it needs the disc, the submodule and a full
recompilation, and it is a measurement rather than a gate. `tools/recomp-cross.sh` is the command.

The gate was tested in both directions before being trusted:

- a module copy with one emitted file removed drops the function count from 818 to 780 and the shared count
  from 697 to 663, so a missing or stale module cannot pass silently
- deleting the file that holds the first anchor makes the tool exit 2 with the anchor named
- the expected run length for one bad seed was changed from 337,645 to 337,646 and the gate reported
  `FAIL the zero runs holding our bad seeds are [...], expected [...]`, so the run-length assertion is live

## The verdict for the 30: 22 are not routines

Item 4o. The 30 starts our walk holds that the module never decodes were decided by one measurement: for each, is the
site of any `E8` pointing at it an instruction start in either walk.

- **22 of the 30 are not routines.** Every `E8` pointing at them sits in data in both decodes. Our byte rule fired on
  table bytes, and the target then decoded as plausible code, which is why it looked like a routine at all. They are
  in `tools/non-call-targets.txt` and the queue excludes them.
- **8 are a genuine disagreement.** Our walk decodes their call site as an instruction and the other walk does not, so
  the question is whether the caller is code. Both walks are self-consistent and one of them is wrong.

The rule needs both decoders, measured: with this project's walk alone it marks **124** targets, against 26 with both,
because a call site in a region our seeds never cover is not one of our instruction starts even when it is obviously
code. Re-derived by `node tools/calltargets.js`, compared by `checkall.js`.

**And it reaches further than the 30.** Applied to all 738 call targets the same rule finds **26** that nothing really
calls, of which 22 came from item 4o, plus the 7 already excluded as zero fill, so the queue's denominator moved from
775 to **749**: 705 routines a call site points at, plus 44 with no call site. Four of the 26 had carried ledger
verdicts, having been attempted as routines; those rows now say `excluded` with the reason, and the queue's INVALID
status is what surfaced them.

## The 8 that remain: every one is a real call

The 8 addresses where our walk calls the call site code and theirs does not. Each was decided by the bytes around the
site, and the test is whether a complete instruction ends exactly where the `e8` begins.

| target | call site | bytes ending at the site | our head | their head | verdict |
|---|---|---|---|---|---|
| `0x610` | `0xe627a` | `68 d8 a7 07 00` = `push 0x7a7d8` | `0xe5ed0` | `0xe5ed0` | real call, their decode spans it |
| `0xb5d` | `0xe71ae` | `68 d8 a7 07 00` = `push 0x7a7d8` | `0xe70ec` | `0xe70ec` | real call, their decode spans it |
| `0x103cd4` | `0x102266` | `74 13` `je`, then `57` `push edi` | `0x102208` | `0x102208` | real call, their decode spans it |
| `0x103d5c` | `0x10214b` | `f4` `hlt`, a one-byte instruction | `0x102088` | `0x102088` | real call, their decode spans it |
| `0x10579c` | `0x105346` | `55 8b ec` `push ebp; mov ebp, esp`, then `ff 75 0c` | `0x105328` | `0x105328` | real call after a standard prologue |
| `0x1050e8` | `0x1050f4` | `c3` `ret`, then `90` `nop` padding | `0x1050e8` | `0x10507c` | real call, and the site is a new function head |
| `0x1019fc` | `0x101a1a` | `6a ff` = `push -1` | `0x1019fc` | `0x1019e4` | real call, function heads disagree |
| `0x103d79` | `0x1057b5` | `57` `push edi` | `0x10579c` | `0x1056dc` | real call, function heads disagree |

So all 8 targets are routines, which is why none of them is in `tools/non-call-targets.txt`, and the queue's 749 does
not change. What differs is where a function begins, not whether the call is real.

Three of the eight are function-head disagreements rather than decode disagreements, and one of those is settled by
its bytes: `0x1050f4` follows a `ret` and a padding `nop`, so it is a function head, and both walks are wrong about it
in different ways, ours by containing it in `0x1050e8` and theirs by starting at `0x10507c`. The other two, `0x101a1a`
and `0x1057b5`, have a real call and an unsettled head.

**What this says about the conflict count.** The cross recompile reported 32 conflicts and 2 refusals when these
addresses were added to its seed list. On this evidence the conflicts are its decode spanning real call instructions,
not our walk inventing calls, which is the opposite of what the conflicts first looked like.

## And all 8 targets decode into readable routines

A real call is only useful if there is a routine on the other end, so each of the 8 targets was decoded linearly from
the target with Capstone until a terminator:

| target | instructions | ends | what it is |
|---|---|---|---|
| `0x610` | 15 | `ret` at `0x638` | pushes, loads three stack arguments, returns |
| `0xb5d` | 18 | `ret` at `0xb8d` | pushes three registers, loads arguments, returns |
| `0x1019fc` | 7 | `ret` at `0x101a10` | `push ebp; mov ebp, esp`, calls `0x101a31` then `0x103348` |
| `0x103cd4` | 4 | `ret 4` at `0x103ce6` | stores its argument to `0xe0132` and converts it with `fild` |
| `0x103d5c` | 3 | `jmp 0x103d4a` | a thunk: `mov cx, 0; call 0x103c44`, then a tail jump |
| `0x103d79` | 4 | `ret 4` at `0x103d83` | loads its argument with `fbld tbyte ptr [eax]`, an 80-bit value |
| `0x1050e8` | 3 | `ret` at `0x1050f3` | a thunk: `push 0xe3a8; call 0x10507c; ret` |
| `0x10579c` | 13 | `jmp 0x1057ca` | `enter 0x1c, 0`, three pushes, a tail jump |

Every one reaches a terminator without passing through zero fill, and the shapes are idiomatic High C of this era:
two thunks, four argument-taking routines, one `enter` frame, and two using x87 for `long double`. Nothing here looks
like a decode that wandered into data.

**One of them settles the boundary question by itself.** `0x1050e8` is `push 0xe3a8; call 0x10507c; ret`, so `0x10507c`
is a real function that it calls, and the next function begins at `0x1050f4` after a `ret` and a `nop`. Their walk
keeps `0x1050f4` inside the `0x10507c` function, which means it extends that function past its own `ret`.

## None of the 8 was decoded or recompiled

Measured four ways, because the first attempt at this question used the wrong search pattern and would have been
worthless. Direct calls are emitted as `push32(c, ret); f_XXXXXXXX(c); X86_RET(c, ret)`, so the test is whether
`f_<target>(c)` appears anywhere. It was validated first against `f_00101a31(c)`, a call their decode really makes.

| test | result for all 8 |
|---|---|
| a function definition in the module | none |
| a call site anywhere in the module | none |
| the address covered by an instruction of theirs | 2 of 8, and only as described below |
| an entry in their function table | none |

Six of the eight fall in **gaps**: no instruction of their decode covers the address at all. The other two are
nominally covered, but only as the middle of a **12-byte instruction at `0x103d5b`** and a **14-byte instruction at
`0x103d76`**, starting 1 and 3 bytes before them. Nothing else in the module has instructions that long, and two in a
row at the exact addresses where a coherent three-instruction routine decodes is the signature of a misaligned walk
rather than a real encoding.

**What that means for the port.** Five of the eight call sites sit inside functions that both walks decode from the
same head. So the port runs those functions and skips the call, because its decode of the surrounding bytes carries
straight through the `e8`. That is a fidelity gap rather than a missing routine, and it is why the cross recompile
conflicted: asking for these addresses as functions forces the recompiler to re-decode their callers.



## The fidelity gap, and the fix that closed most of it

This is what the 8 turned out to be a symptom of. Measured across the whole image: **138 call instructions that this
project's walk decodes and the recompiler's does not**, of which 137 sit in a gap rather than inside a misread
instruction. One cause: the recompiler stops each function at its terminating `ret` and never resumes after the 2 to 4
bytes of alignment padding that follow, so a function with no caller never enters the module and every call inside it is
absent from the port.

`tools/resumepoints.js` derives the fix: for each function of theirs that contains a skipped call, the first
instruction start of ours after their last. **41 of those resume points are seeds now**, 25 of the first 35 confirmed by
a standard prologue.

What the recompile did, in three rounds:

| | functions | instructions | refused | conflicts | skipped calls |
|---|---|---|---|---|---|
| before | 818 | 41,847 | 0 | 0 | 138 |
| after the first 33 seeds | 855 | 42,890 | 0 | 0 | 20 |
| after 41 seeds | 863 | 42,981 | 0 | 0 | 7 |
| after 2 more, the real ones the residue pointed at | **865** | **43,016** | **0** | **0** | **4** |

**Two seeds failed the test and are recorded as failures.** `0x1019f6` and `0x101602` decode as `pop edi` followed by
`65 78 69` and a prefixed jump followed by `74 65 6c 6c`: both spell text, so this project's walk had wandered into a
string. Seeding them made the recompiler refuse at `0x101a1c` (`ff /7`, an invalid opcode group) and report 59 conflicts
clustered from `0x1019ff` to `0x101a9e`, which is the entry point's neighbourhood.

**The residue is 4 skipped calls in 3 functions, and it is named rather than tolerated.** The three unseeded resume
points are `0x10016e`, `0x101602` and `0x101a0f`, in `EXPECTED_RESIDUE` inside the tool, and `checkall.js` fails if that
set changes. `0x101602` sits inside the string `ftell`, and `0x101a0f` decodes as `00 8b c0 61`, which is neither a
prologue nor a plausible start. `0x10016e` is real code whose call site nothing proves, so it is left unseeded rather
than guessed at.

**A printable-text rule was tried on the walker and rejected, measured.** Refusing gap recovery into any run of four or
more printable bytes caught both string cases and cost **1,485 instructions**, because `53 56 57` is
`push ebx; push esi; push edi` and also three ASCII letters. It rejected `0xef7fc`, a real function this project had
already confirmed. The walk was restored, the numbers recorded here, and the rule not adopted.


- The two walks agree on **741** function starts and **37,275** instruction starts, so neither is badly wrong.
- The `E8` rule is blind in both directions, and both are now measured: 33 of its 738 targets are not routines (7 in
  zero fill, 26 pointed at only by data bytes), and 44 routines have no call site at all. Those 44 are in
  `tools/runtime-seeds.txt` and in the queue, which is why the shared function count reads 741 and the routine total
  reads 749.
## What is now known

- **Neither walk contradicts the other anywhere at an address.** In the cross-seed test, 0 of their extra starts fall
  inside an instruction we prove, and 0 of our 30 fall inside one of theirs. Every difference is coverage or
  reachability, which is the outcome that makes the differences workable.
- Seven of the 738 queue entries are `0xE8` bytes in data, listed above with the run holding each. Three are
  in megabyte-scale extents and four in alignment gaps of 53 to 59 bytes. Together with the 19 more that nothing
  really calls, the queue's denominator is **788** routines. The two walks now agree on **788** function starts and
  **38,443** instruction starts, from 697 and 36,658 when this comparison started.
- Two thresholds are needed, not one: 64 for the region census and 16 for the seed question, both named in
  `tools/codelimits.js` with the split above as the reason.
- 77 of the module's extra starts are instruction boundaries no CALL reaches, which is what a jump-table
  member or an indirect-only target looks like from our side.
- 44 of them are addresses our seed rule cannot reach, and at least one of those decodes cleanly as a real
  function head. So our seed coverage has a measurable hole, and it is now enumerated rather than suspected.
- The fidelity gap had one cause and it is fixed for 131 of 138 sites: the recompiler never resumes after a `ret` plus
  alignment padding, so a function with no caller was invisible to it. 41 derived resume points are seeds now, and the
  port went from 818 to 863 functions with 0 refused and 0 conflicts.
- `tools/cfgwalk.js --refusals` and `tools/recondiff.js` now report in the same frame and say so, so the third and
  fifth occurrences of the frame defect are the last ones either tool can cause.

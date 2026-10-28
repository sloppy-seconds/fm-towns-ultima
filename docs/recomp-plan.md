# Plan: get as much of the game recompiled as possible

Written after the CFG capture round, because that round measured something worth acting on. This plan is
built on measured state, not on ambition, and every stage names the artefact it produces and the failure
case.

## The measurement this plan starts from

| | |
|---|---|
| function starts in `ENCHANT.EXP` | **738** |
| named from string references or structure | **89** |
| unnamed, with no readable string | **645** |
| `recomp` functions emitted | **709** |
| emitted C++ compiles | **yes, 90 seconds, 761 vectors, 0 failures** |
| refusals | **828** |
| unresolved indirect transfers | **24** |
| a runnable runtime | **exists, 3,817 lines in `fmtownskit/runtime/`** |

**The important asymmetry**: 709 functions of machine code already transpile to C++ that compiles and
passes 761 test vectors. The gap to a *running* game is not the transpilation. It is that nothing calls
those functions, and that 828 instructions are refused outright.

**And the capture round proved its own limit.** 31 captures observed 13,904 distinct instructions, twenty
times the first capture, and produced **zero new seeds**: all 18 candidate entries were string-data false
positives. Runtime capture resolves indirect transfers, not coverage. That is why this plan is not more
captures.

## The three things standing between the transpiled output and a running game

1. **Nothing drives it.** There is no entry that runs a turn. The emitted functions are a library waiting
   for a caller.
2. **828 instructions cannot be decoded.** Each one is a hole in the translated code, and a hole is a
   crash the moment control reaches it.
3. **24 indirect transfers have unknown targets.** The walker stops there, so code beyond them was never
   emitted at all.

Everything else, assets, text, the roster format, is done or close.

## The tools this plan uses, and where they are

The toolkit is `references/vs-sr-dev/fmtownskit/`, cloned rather than vendored, and it is **not** this
repository's `tools/`. An earlier version of this plan named it once and never said how to call any of it.
That was a real defect: the plan asked for work the toolkit already does.

| module | what it provides | stage |
|---|---|---|
| `fmtownskit/i386emu.py` | **a software emulator**: `CPU.run(code, regs, flags, mem)`, `FlatMemory`, `CPU.step` | **1** |
| `fmtownskit/recomp/emit.py` | C++ emission, functions taking `X86Cpu&` | 1 |
| `fmtownskit/recomp/__main__.py` | the CLI, spec `NAME:PATH:CS+seed,seed` | 1, 2 |
| `fmtownskit/recomp/discover.py` | the guarded walk, `load(path, seeds=...)` | 2, 3 |
| `fmtownskit/runtime/` | 3,817 lines of platform layer | 1 |
| `fmtownskit/tablecheck.py` | `confirmed_by_capstone`, `encoded_sites` | 2 |
| `fmtownskit/x86map.py` | a code/data map, classes `Map` and `Consts` | 2 |
| `fmtownskit/i386.py` | the decoder this repository's tools already use | 2, 3 |

**`i386emu.py` is the important omission.** It is an i386 interpreter, and stage 1 was describing the
writing of exactly that. `tablecheck.py`'s `confirmed_by_capstone` is likewise half of stage 2 already.

One caution: `i386emu` contains `_uc_run` and `_ours_run`, which suggests it has been compared against a
third-party decoder. Confirm that before relying on it, rather than assuming.

**[fmtownskit and seeds](fmtownskit-and-seeds.md)** records what the toolkit already does.

## Stage 1: make the transpiled output run at all

**Artefact:** `0xebb70`, the roster writer, executed **two ways** against one input, both matching a real
`ROSTER1.UT2` byte for byte. Once through `fmtownskit.i386emu.CPU.run`, and once through the C++ that
`recomp/emit.py` generates.

**Done when:** the emulator and the emitted C++ agree with each other **and** with the save file.
**Failure case:** if they disagree, say which two agree and which does not. Two of three agreeing is the
useful result, not a failure.

This is the highest-value stage because it converts "we have transpiled code" into "two independent
executions that agree with the disc", and nothing else is worth doing until that line is crossed. It is
also cheaper than the first version of this plan assumed, because both executions are existing tools.

## Stage 2: close the refusals

**Artefact:** a refusal census, each of the 828 classified into one of three causes with a count and an
address.

The page recording them already shows the shape: `ff /7`, `lock on pop`, `mov to segment register 6`,
`8f /7`. These are not one problem.

- **`/7` and similar** are almost certainly data being decoded as code, which is a seed problem and is
  cheap to fix by removing the seed.
- **486+ opcodes** are the decoder being older than the CPU, which is bounded work.
- **`mov to segment register 6`** is a real instruction the decoder mishandles.

**Done when:** every refusal has a cause, and the ones caused by bad seeds are gone. **Failure case:** if
most refusals turn out to be data-as-code, say so and report the corrected function count rather than 738.

**Tools for this stage, already present.** `fmtownskit/tablecheck.py` has `confirmed_by_capstone(image,
base, offset)`, which asks whether a claimed instruction site decodes the same way in two decoders. That is
the classification half of this stage and needs no new code. `fmtownskit/x86map.py` has a `Map` class and a
`Consts` class, which is the code/data map the refusal census is trying to reconstruct.

So the work is running those against the 828, not writing a classifier.

## Stage 3: the 645 unnamed routines, by reachability not by name

String naming is exhausted at 89. The remaining 645 have no readable text, so they must be identified by
**structure**: what calls them, what they call, what global fields they touch.

**Artefact:** a table of the 645 with, for each, its caller count, its callee count, and the record fields
it reads or writes. Sorted by reachability so the ones on a turn's path come first.

That is derivable now. `tools/refindex.py` maps global references, `tools/cfgwalk.js` gives call edges, and
`tools/triagesweep.js` already clusters routines that call the same TBIOS stubs, which is a grouping the
same way.

**And the toolkit has the structure side.** `fmtownskit/recomp/discover.py` exposes `Program` with
`entries`, `targets`, `tables`, `indirect`, `refused` and `conflicts` settled by the walk itself, and
`fmtownskit/recomp/__main__.py` has a `--report` mode. So the caller and callee counts are an existing
report, not a new tool. What the toolkit does not have is the **record-field** part, which is where
`tools/refindex.py` comes in.

**Done when:** the top 40 routines by reachability have a written description of their arithmetic, or a
stated reason they cannot be read. **Failure case:** if reachability does not separate them, the field sets
are the fallback and that is worth recording as a negative.

## Stage 4: the turn, end to end

**Artefact:** a document that follows one player turn from keypress to redraw, naming every routine in
order with its arithmetic.

The skeleton exists: `0xf6ebc` is called once per loop by `0xe97c0`, reads a key, and dispatches on key
minus one through a ten-entry table. The capture round added the transport field, the moongate dispatch,
the food costs and the dialogue dispatch.

**Done when:** a reader could implement a turn from the document without the binary. **Failure case:** if
the ten-entry table cannot be resolved, say which entries are unknown and what would settle them.

## Stage 5: only then, more captures

Captures earn their place when a specific question cannot be answered statically. The round just done
produced four such answers: the roster loader is shared by menu and death, the `preEIP + 0x200` mapping,
the transport enum, and the moongate dispatch. Each was a question a static reading had got wrong.

**The rule this plan adopts:** no capture without a stated prediction that the capture can refute. The
moongate was captured that way and the code's prediction matched the observation exactly, which is what
made it worth doing.

## What this plan does not do

- **It does not chase a playable game.** Behavioural faithfulness is the target, and a reimplementation is
  a translation exercise. A running transpiled binary is evidence the reading is right, not the deliverable.
- **It does not extract more assets.** That work is done.
- **It does not resolve the palette.** Documented as a residual and off the recompilation path.

## Order, and why

| stage | gives | blocks |
|---|---|---|
| 1 | a program that runs | everything |
| 2 | removes the crashes | 4 |
| 3 | identifies the bulk | 4 |
| 4 | the skeleton | reimplementation |
| 5 | answers specific questions | nothing |

Stage 1 first without exception. A transpiled library that has never been executed is a hypothesis about
the decoder, and stages 2 to 4 are all work spent on top of it.

**[Distance to reimplementation](reimplementation-gap.md)** **[Call graph](call-graph.md)** **[Plan](plan.md)**

# Differential CFG captures: a method, and its first result

A CFG dump on its own says which edges ran. It does not say what any of them mean. This page records
the method that turns a dump into a measurement, the calibration it needed, and the first result.

## The method

Capture a baseline window. Do exactly one thing in the game. Capture again. The difference is the code
path that thing took.

**Diff on instruction addresses, not edges.** Two windows never agree on edge counts even when nothing
happened, because the idle loop's timing varies, but they do agree on which addresses were reached.
The address to use is `preEIP`, the start of the instruction. See [the mapping](cfg-dump.md).

**Arm the capture before the action.** This is not a detail, it is the difference between working and
not. The first attempt took a fixed four second window *after* the action and reported 7 new
instructions. The game state proved the action had happened (food 39895 to 39880, map 6 to 7,
position unchanged), so the action was real and almost none of its code was in the window. A capture
has to be running while the thing happens, which for a human action means `CFGSTART` and `CFGSTOP`
have to be separate calls. `tools/cfgdiff.py start|stop` exists for that.

## The noise floor, and why it is not one number

Idle against idle, four second windows, no input, on the same machine in the same session:

| sample | newly reached |
|---|---|
| 1 | 2 |
| 2 | 3 |
| 3 | 17 |

**There is no fixed threshold.** The first estimate was 3, from a quiet moment, and it would have
licensed reading a diff of 7 as a result when it was timers. Measure the floor on the machine about to
be tested. A diff below about twenty has to be reported as inconclusive.

A paused machine records **zero** edges, because the hook runs per instruction and no instruction
runs. That is a property to rely on, not a defect, and it means `RUN` is required before capturing.

## Experiment 1: a move blocked by water

**Action.** Standing at (19,17) on map 7, a single attempt to move north, which the game refused with
"water blocks you".

**Why a failed move is a good first subject.** A successful move would exercise movement, timer,
terrain and redraw together. A refusal isolates the collision check and whatever it reports through.

**State before and after, measured with `tools/peek.js`:**

| field | before | after |
|---|---|---|
| food | 39880 | 39865 |
| map | 7 | 8 |
| px | 19 | 19 |
| py | 17 | 17 |

Food fell by exactly 15 and the position did not change, so the attempt was charged as a turn and was
refused. `map` counting turns rather than position is consistent with what the runtime work already
recorded.

**Result: 1,416 newly reached instructions, 4 dropped.** That is 80 times the largest noise sample, so
the figure is the action's path rather than drift.

### What the new code contains

- **28 function entries** newly reached, recognised by the High C prologue `55 8B EC` at the start.
- The largest new region is `0xF91A7..0xF938F`, whose head is `pop pop pop leave ret` followed at
  `0xF91AC` by `push ebp; mov ebp,esp; sub esp,0x10; push ebx; push esi; push edi`, a normal entry.
- **37 new instructions reference the text tables** at `0x7a7d0`, `0x7aee4` and `0x7af15`, which
  `docs/text-encoding.md`, `docs/code-analysis.md` and `docs/display-context.md` already record as the
  text record structure (record table at `0x7aee4`, stride 57, base structure at `0x7a7d0`).
- Several new entries compute `lea eax,[edi+edi*2]` then `lea edx,[eax+eax*8]`, the 3n and 27n chain
  already documented for those records.

So the refused move ends in **message output**, which is what "water blocks you" requires. That is a
consistency check the method passed rather than a new discovery.

### What this does not establish

The diff says these routines *ran* during the refused move. It does not say which one decided the
refusal, which one formats the message, or what the collision test compares. Those are still readings
of the code, and the diff's contribution is that it has narrowed 196,725 non-zero bytes to 1,416
instruction addresses to read.

In particular, **no routine here is named.** A name needs a string reference, a caller, or arithmetic
that identifies a job. Nothing in this capture supplies that.

## What to run next

The method works, so the useful experiments are ones where the expected answer is already known, which
tests the method rather than producing data:

- **a successful step** on open terrain, where the food decrement at `0xf0c08` must appear
- **a menu key** such as `A`, `T` or `G`, each of which should light up a distinct cluster
- **a shop purchase**, where the gold change and the item write are both known quantities
- **one combat round**, the largest prize and the noisiest, because damage is a roll

## Tools involved

- `tools/cfgdiff.py` captures and diffs. `start` and `stop` are separate on purpose.
- `tools/peek.js` reads the character record, and is how the before and after rows were produced
- `tools/build-emulator.sh` installs the patched emulator the CFG commands need.

**[CFG capture](cfg-dump.md)** **[Text encoding](text-encoding.md)** **[Plan](plan.md)**

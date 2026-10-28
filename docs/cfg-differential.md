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

## Experiment 2: walking west into a mountain, with a monster and a stats page

**Action.** Nine steps west from (19,17) on map 8, refused at the mountain. During the walk a monster
attacked and hit, and the stats page was opened with `Z`.

This run is deliberately less clean than experiment 1: four things happened, so the diff is the union
of their paths and cannot attribute anything to one of them on its own. It is still worth recording,
because of what the state arithmetic proves.

**State, measured with `tools/peek.js`:**

| field | before | after | reading |
|---|---|---|---|
| px | 19 | 10 | nine steps west |
| py | 17 | 17 | stayed on the row |
| food | 39865 | 39700 | minus 165 |
| map | 8 | 19 | eleven turns |
| hp | 400 | 370 | minus 30 |

Nine successful steps at 15 food is 135, two blocked attempts at 15 is 30, and 135 plus 30 is the 165
observed. Eleven turns is nine steps plus two refusals. The damage is a separate 30 from the monster.
Every figure reconciles, so the action set is known even though the code is not yet separated.

**Result: 2,611 newly reached instructions, 48 of them function entries.**

### What it found, and what it corrected

The documented `spend_food` routine appeared in the diff, and then did not match. The page
`docs/movement-and-wrap.md` gave it at `0xf0c08`, and no address near `0xf0c08` was reached. The
differential reported `0xf0a08` instead, and its body is the listed function instruction for
instruction: `2b d0` for the 351 stride, then `29 82 8d de 0c 00` for `sub [edx+0xcde8d], eax`.

**The documented figure was a file offset, not an address.** They differ by `0x200`, the `MP` header
that the running image strips. `ENCHANT.EXP[0xf0c08]` and the bytes executed at segment `0xf0a08` are
identical, so both figures describe the same code and neither is wrong about the bytes. What was wrong
was presenting a file offset as an address, which is the same confusion that cost several sessions
over the mapping itself.

Two further checks on the corrected address, both run rather than inferred:

- scanning the image for `call` instructions targeting `0xf0a08` finds **exactly two**, at `0xf0943`
  and `0xfacc0`, matching the two callers the page always claimed
- the immediate before each call is `6a 0f` (**push 15**) and `6a 0a` (**push 10**), which is the
  two-cost finding confirmed at the new addresses

`docs/movement-and-wrap.md` is corrected in the same commit.

### What is not established

Nothing here is named beyond `spend_food`. The remaining 47 function entries, the damage of 30, and
the collision check are all unreached by this analysis. The run conflates walking, refusal, combat and
the stats page, so separating them needs separate runs, one action each.

## Experiment 5: a death

**Action.** One hit at HP 6, then another at HP 1. The screen flashed red, then a skull with "thou art
dead" and a prompt to press space. The character then reset to HP 400, food 40,000, gold 400,
position (20,20), map 0.

This is the largest capture taken, and it is the one the earlier pages said had never been recorded.

| | |
|---|---|
| edges | 17,540 |
| game-segment instructions | 6,232 |
| addresses never seen in any earlier capture | **3,373** |
| new prologue-verified function entries, after the terminator test | **12** |

### The terminator test earned its keep

Of 25 candidate entries, **13 were string-data false positives** and were rejected because the byte
before them is ASCII. The rejected addresses are preceded by `sts`, `tc\r`, `ree`, `loc`, `sss`, `gth`,
`t86`, `buf`, `_dx`, `ose`, `ame`, `pen`, ` tem`. A naive count of prologues would have reported 25 and
overstated the result by more than double.

The 12 real entries are all game code: `0xE23CC 0xE23EC 0xE2554 0xE5700 0xE6438 0xE6460 0xE6550
0xE7958 0xE8B90 0xE9C44 0xE9D2C 0xF0A80`.

### What is in the new code

Eight of the new instructions reference the HP field `0xcde81` and three reference FOOD `0xcde8d`, so
the death path does touch the character record directly rather than only through helpers.

The most suggestive entry is `0xe9d2c`, which clears a global and then calls with what look like
message identifiers:

```
0xe9d2c  push ebp
0xe9d2d  mov ebp,esp
0xe9d2f  sub esp,0x60
0xe9d32  push ebx / push esi / push edi
0xe9d36  mov [0xce71c], 0        ; clear a global
0xe9d40  push 0x24cc
0xe9d45  call ...
0xe9d4d  push 0x24f0
```

**This is not named.** Clearing `0xce71c` and pushing two constants is consistent with a state reset
and a message selection, and that is as far as the bytes go. The text it produces is not in the
`0xeb` table that `tools/ebdecode.py` decodes, and `"art dead"` appears in **none of the 140 files on
the disc** in plain ASCII, so the death message is either encoded differently or assembled at run time.
That is open.

### What the capture cannot say

The capture proves these 3,373 addresses ran during a death. It does not separate the killing blow from
the skull screen from the reset to a new character, because all three happened inside one window. The
score screen, the input that dismisses it, and the creation of the replacement character are one path
until a run is taken that stops between them.

## What to run next

The method works, so the useful experiments are ones where the expected answer is already known, which
tests the method rather than producing data:

- **a successful step** on open terrain, where the food decrement at `0xf0a08` must appear
- **a menu key** such as `A`, `T` or `G`, each of which should light up a distinct cluster
- **a shop purchase**, where the gold change and the item write are both known quantities
- **one combat round**, the largest prize and the noisiest, because damage is a roll
- **one action per run**, since experiment 2 shows how quickly a compound action becomes unreadable
- **a death, split into parts.** Experiment 5 captured one but conflated the killing blow, the skull
  screen and the character reset. Stopping between them needs the game paused at the prompt, which the
  console can do.

## Tools involved

- `tools/cfgdiff.py` captures and diffs. `start` and `stop` are separate on purpose.
- `tools/peek.js` reads the character record, and is how the before and after rows were produced
- `tools/build-emulator.sh` installs the patched emulator the CFG commands need.

**[CFG capture](cfg-dump.md)** **[Text encoding](text-encoding.md)** **[Plan](plan.md)**

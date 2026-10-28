# What the differential captures established

A record of the CFG work as a whole: the method, every experiment, what each one proved, what it
refuted, and what the captures contribute to the static seed set. Written at a stopping point so the
next session does not have to reconstruct it.

The mechanics live in [cfg-dump.md](cfg-dump.md). The per-experiment narrative is in
[cfg-differential.md](cfg-differential.md). This page is the consolidated result.

## What works

| piece | state |
|---|---|
| Emulator with `CFGSTART` / `CFGSTOP` / `SAVECFG` | built by `tools/build-emulator.sh` into `vendor/emulator` |
| Container runs it | `container-run.sh` unchanged, mounts `vendor/emulator` as `/emulator` |
| Diff tool | `tools/cfgdiff.py`, with `start` and `stop` separate so an action can be armed |
| Character reads | `tools/peek.js`, which now pauses and restores around every read |

## The mapping

**`image offset = preEIP + 0x200`** for segment `000C`. Verified on 1,555 edges from a running game:
1,546 agree with the emulator's instruction length, 9 differ, **99.42 percent**.

Two things made this hard and both are worth remembering:

- `preEIP` is the address the instruction **started** at. The `src` column is where the CPU was
  **after** it ran. Decoding at `src` compares the wrong bytes with the right length and cannot agree.
  This alone accounted for every failed attempt.
- A file offset and a segment address differ by `0x200` and look identical in prose. That ambiguity
  propagated into `docs/movement-and-wrap.md`, which gave `spend_food` at `0xf0c08` when it runs at
  `0xf0a08`. Both numbers describe the same bytes and only one is an address.

## Method, and its noise floor

Baseline, do one thing, capture again, diff on **instruction addresses**. Counts never agree between
windows, addresses do.

**Arm the capture before the action.** A fixed window after the event caught 7 instructions of an action
whose state change proved it had happened. This is why `start` and `stop` exist.

Idle against idle gave 2, 3 and 17 newly reached instructions in one session. There is no fixed
threshold, and any diff below about twenty has to be reported as inconclusive.

## The experiments

| # | action | new instructions | what it established |
|---|---|---|---|
| 1 | one move north, refused (water) | 1,416 | the method works, 28 function entries, 37 text-table references |
| 2 | nine steps west, refused (mountain), monster hit, `Z` | 2,611 | state arithmetic reconciles exactly; 48 function entries |
| 3 | one attack, missed, hit for 15 | 1,653 | found the `spend_food` address error and an HP-conditional branch |
| 4 | one turn at HP 37 | 1,596 | confirmed both paths of that branch |

### What experiment 2 proved by arithmetic

Nine steps at 15 food, two refusals at 15, and the observed 165 food decrease agree exactly. Map rose
by 11 over the same run, which is 9 steps plus 2 refusals. Position moved 9 west and not at all in y.
Every figure reconciled, so the action set was known even though the code was not separated.

### What experiment 3 corrected

`docs/movement-and-wrap.md` gave `spend_food` at `0xf0c08`. The capture reached `0xf0a08`, whose body
matches the documented listing instruction for instruction. Scanning for calls to `0xf0a08` finds
**exactly two**, at `0xf0943` and `0xfacc0`, with immediates `6a 0f` (15) and `6a 0a` (10) before them.
The address was a file offset presented as an address.

### What experiment 3 found, and what I got wrong about it

`0xe9010` chooses a value from HP and passes it to `0xe74d8`:

```
0xe9027  cmp [edx+0xcde81], 0x32     ; HP against 50
0xe902e  jge 0xe9034
0xe9030  push 0x0b                    ; HP < 50  -> 11
0xe9032  jmp 0xe9036
0xe9034  push 0x0f                    ; HP >= 50 -> 15
0xe9036  push 0x0a                    ; then 10, always
```

I first called the 11 and 15 food amounts. **Experiment 4 refuted that in one measurement:** at HP 37
the 11 branch ran and food still fell by 15. `0xe74d8` stores into `[edx+0x7af09]` and calls
`0xe64bd`, and neither it nor `0xe9010`..`0xe9052` references the food field `0xcde8d` anywhere.

So the branch is real and observed both ways, and **what the 11 and 15 mean is open**. A text payload,
a colour index and an attribute are all consistent with the write; nothing measured distinguishes them.

## Seeds: what the captures add to static analysis

This is the question the work was built to answer. The answer is smaller than the framing that led here,
and the correction is recorded below.

**The union of every capture is 4,169 distinct game-segment instructions**, of which **67 are
prologue-verified function entries**.

Against `tools/seeds.js`, which emitted **430** candidates at the time:

| | count |
|---|---|
| captured entries already in the static seed set | 59 |
| **captured entries the static set did not have** | **8** |

The eight are `0xE2FB0 0xE3FF0 0xE4058 0xF00E8 0xF2810 0xF91AC 0xF931C 0xF9DFC`. All have a High C
prologue and exactly one caller each, and all were excluded by the seed tool's rule dropping targets
"named only once", which rejected 635 of them.

### The seed rule change, and what it actually bought

A single caller is not weak evidence when the caller is a direct `call rel32` landing on a prologue.
`tools/seeds.js` now promotes those. Measured on `ENCHANT.EXP`:

| | before | after |
|---|---|---|
| seed candidates | 430 | **532** |
| rejected as named only once | 635 | 533 |

The promotion is a strict superset, and all eight dynamic finds are now in the set.

**But the coverage gain is much smaller than the seed gain, and the first framing of this was wrong.**
I wrote that 3,993 call sites carry a prologue against 430 kept, implying most of the provable function
set was being discarded. That number is **call sites**, not distinct targets. The distinct
prologue-target count is **318**, of which the old rule already kept 184, so only 134 were ever in play.
And of the 102 that pass the terminator test, **41 were already reachable** by other paths.

Walking the walk with each seed set:

| seed set | instruction starts reached |
|---|---|
| 430 | 37,219 |
| 532 | 37,477 |
| the 61 genuinely unreached promoted seeds, alone | **324 starts the old walk did not have** |

The seed count rose 24 percent and coverage rose 0.7 percent. Most of the promoted functions were
reachable already, and the ones that were not are small.

**The rule change is still worth keeping**: it is a strict superset, the evidence behind it is sound,
and 47 functions the binary states exist are now swept that were not. But it is not the large gain the
earlier wording claimed, and anyone reading the seed count as a coverage number would be misled.

### The prologue test, and why it needs the terminator

A prologue alone is not enough. Of the 134 single-caller prologue targets, **32 are coincidences inside
string data** and 102 are real. The giveaway is the byte before: a real function start follows `ret`,
`ret n`, `leave; ret`, the two-byte nop `8b c0`, a plain nop, a jmp, or a zero pad. The 32 failures are
all preceded by ASCII fragments such as `ita`, `uf\n`, `tc\r`, `ive`.

## What the captures cannot do

- **Name anything.** A name needs a string reference, a caller, or arithmetic that identifies a job.
  These captures supply addresses.
- **Cover the game.** 4,169 instructions out of 196,725 non-zero bytes. The one idle capture reached
  1.9 percent of the image.
- **Replace reading.** The diff says a routine ran. It does not say what it does.

## Corrections made this round

| page | correction |
|---|---|
| `cfg-dump.md` | mapping rewritten: `preEIP`, not `src`; four earlier attempts recorded as failed |
| `movement-and-wrap.md` | `spend_food` `0xf0c08` to `0xf0a08`, both callers re-measured |
| `movement-and-wrap.md` | the 11/15 was called a food cost, then corrected to a text payload |

## The next experiments, in value order

1. **Promote the 3,993 single-caller seeds.** A tool change, not an emulator session, and it is the
   largest single gain available.
2. **HP and the colour field.** Read `[0x7af09 + 135n]` at HP above and below 50. Two reads, and it
   settles what the 11/15 means without needing to observe a colour.
3. **`Z` on its own.** Armed capture, one press, then one press per page. Answers whether the stats
   pages are paginated in code.
4. **A death.** The most valuable single capture for reimplementation, since death handling is where
   save and reset logic lives. It has not been captured once.

**[CFG capture](cfg-dump.md)** **[Differential captures](cfg-differential.md)** **[Plan](plan.md)**

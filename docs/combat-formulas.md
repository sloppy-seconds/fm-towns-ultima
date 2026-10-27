# U2 combat formulas: where they are not

Item 4b. The plan says the reading half is autonomous and the verification needs a fight. **This page
records that the reading half also failed on the first attempt**, and why, so the next try starts elsewhere.

## What the search found

Four approaches, all measured, all negative in a specific way.

### HP is written by six functions, and none of them rolls dice

Every reference to `HP` at `0xcde85` in the image, grouped by owning function:

```
0xe9f0c   1 reference
0xeb354   1 reference
0xec320   1 reference
0xed7f0   2 references
0xef15c   1 reference
0xf1e8c   2 references
```

**Eight references total, in six functions.** None of the six calls `randMod` at `0xe1c5c` or
`randRange` at `0xe3d4c`. Checked by asking `tools/callgraph.js --callees` for each.

So damage is **not computed in the routine that applies it.** Either the amount arrives as an argument, or
combat writes HP somewhere this displacement search does not reach.

### Four of the six are identified and all four are UI or init

| function | identification | why it touches HP |
|---|---|---|
| `0xec320` | character initialisation | writes every field including `HP` and `MHP` |
| `0xed7f0` | status panel | displays `HP` |
| `0xf1e8c` | tile/map interaction | two references, and its comparisons are against `0xdd`, `0xdf`, `0x10`, `0x6c`, which are map cell values |
| `0xeb354` | save and load | persists `HP` |
| `0xe9f0c` | roster load path | restores `HP` |
| `0xef15c` | not identified | one reference, unexplored |

`0xf1e8c` is the one that looked most like combat and is not: comparing a byte against `0xdd` and `0xdf` is
map-cell work, and it calls `0xf22f0`, the language switch.

### No function touching `AGILITY` or `STRENGTH` rolls dice either

Combat needs a character's own stats, so the routine should touch `AGILITY` at `0xcde6a` or `STRENGTH` at
`0xcde66`.

```
functions touching AGILITY:  0xe1ff8 0xe9f0c 0xec320 0xecf17 0xed7f0 0xf0ea4 0xf1474 0xfc4fc
functions touching both:     0xe1ff8 0xe9f0c 0xec320 0xecf17 0xed7f0 0xf0ea4 0xf1474
```

**Seven of the eight are already identified**: init, roster load, publisher credit, status panel, spell
handling, music, and a map-interaction routine. `0xfc4fc` is unidentified and takes two coordinates and
subtracts them, which reads as distance rather than combat.

**None of the eight calls `randMod`.**

### The attack string is data, not code

`\nによる攻撃` at `0xd2e27` disassembles as `add [eax],al` repeated, which is the signature of zero and
padding data, not a function. The string is real and referenced, but its address is inside a data region.
Same for the second copy.

## What this establishes

**U2's combat arithmetic is not reachable from the fields it operates on.** That is the finding, and it is
the same shape as the tick result in [the-tick.md](the-tick.md): a displacement search over the named roster
fields finds every reader and writer, and none of them is the routine that computes the value.

Two readings remain, and they are the same two as for the tick:

1. **Combat works on a copy, not the record.** The record fields named by the format string are persisted
   state. A fight might build a working struct on the stack, roll against that, and write the result back
   once. That would leave the arithmetic invisible to a search for record displacements.
2. **The combat routine is reached indirectly.** There are 144 unresolved indirect branches, dominated by
   `call dword near [0xdfc5c]`. If combat is one of them, no call-graph or displacement search will find it.

## The first damage measurement: one hit of 16

A fight the player did not win in one blow. Sequence as played: the player hit and the monster
was wounded, the monster hit back, then the monster attacked again and the player **parried**,
which is a miss. Nobody died. States taken paused immediately before and after.

| field | before | after | delta |
|---|---|---|---|
| HP | 178 | 162 | **−16** |
| max HP | 400 | 400 | 0 |
| EXP | 12 | 12 | 0 |
| FOOD | 38,770 | 38,740 | **−30** |
| GOLD | 447 | 447 | 0 |
| X / Y | 57 / 18 | 57 / 18 | 0 |
| MAP | 81 | 83 | **+2** |

**The monster landed one hit and it took 16 HP.** The parry took none, so the 16 is a single hit
and not an average.

**The turn accounting corroborates the food measurement.** Two player turns passed and food fell
by 30, which is `2 * 15`. That is independent of the earlier three-step result and it is the
first time the 15 has been observed across a fight rather than a walk. `MAP` rose by 2 over the
same two turns, so `MAP` counts turns and not position.

**What this does not establish, and it is the whole of the formula.**

**One hit cannot tell a constant from a roll**, and the next hit showed it is a roll. See below.

## Damage varies: 16, then 12

A single observation of 16 was not enough to claim a constant, and the following hit confirmed why.
The monster hit again between two reads of the same fight:

| HP | delta |
|---|---|
| 178 → 162 | **16** |
| 162 → 150 | **12** |

So **monster damage is not a constant**. Two samples, 12 and 16, from the same fight and probably
the same monster. That rules out a fixed 16 and it is the first thing this page can say about the
form without guessing.

**What a range would have to be to fit two samples is not determined.** Two points are consistent
with a dice roll, a base plus a small random term, or a value scaled by something that changed
between the hits (the player's own HP fell from 162 to 150, and STRENGTH or the monster's state
could also matter). Distinguishing those needs more hits, and would need the monster's identity
and HP, which this project has not located.

**The turn accounting held again.** One more turn cost 15 food and moved `MAP` from 83 to 84, both
consistent with the earlier reads.

**What is now known that was not:** monster damage is variable, at least 12 and 16 occur, the
player's HP is the field `0xcde81`, and a fight costs the same 15 food per turn as a step. Item 4b
is still open, but it is open on three measurements rather than on a scan.

## An earlier one-hit kill, for contrast

Two savestates, taken paused, before and after killing a monster with one hit. The player stood
at (12,17) on map 40 and did not move; the monster died without landing a hit.

| field | before | after | delta |
|---|---|---|---|
| HP | 216 | 216 | **0** |
| max HP | 400 | 400 | 0 |
| EXP | 10 | 12 | **+2** |
| FOOD | 39,385 | 39,370 | **−15** |
| GOLD | 431 | 447 | **+16** |
| X / Y | 12 / 17 | 12 / 17 | 0 |
| MAP | 40 | 41 | **+1** |

Read with `tools/stateread.py` from the states and confirmed against `tools/peek.js` on the live
game at the same moment; the two agreed on every field but `rng`, which advances per frame.

**What this establishes.**

- **A kill costs 15 food**, the same as a single step (`docs/movement-and-wrap.md`). One fight,
  one data point, but the number being identical to the step cost is worth noting.
- **A kill of this monster is worth 2 EXP and 16 GOLD.**
- **`MAP` moved 40 to 41 while X and Y did not.** So map 40 and 41 are not the same place and the
  change was not caused by movement. What `MAP` counts is unverified, and this is the first
  observed change to it that is not a coordinate change.

**What this does not establish, and it is the interesting part.**

**No damage was taken, so no damage formula was measured.** The whole reason for the capture was
HP before and after a monster hit, and the monster never hit. A one-hit kill cannot produce a
hit-point delta, and this page will not infer one from a fight where HP did not move.

So **item 4b is no better off from this run**, and the honest reading is that the capture was
worth doing for the food, EXP and gold figures and worth nothing for the formula it was aimed at.
The next attempt needs a fight the player does **not** win in one blow.

## What would actually work, and it is not another scan

**Read the routine that prints `\nによる攻撃` and follow it backwards.** That string must be printed at the
moment damage is applied, so whichever routine references it is either the combat routine or one call away
from it. `tools/fnstrings.js` with a search for that specific address would find the referrer, and this page
did not do that.

**That is the concrete next step** and it is cheap. It is recorded here rather than attempted because this
session had already produced two negatives on the same pattern and a third guess is not worth the time.

## The honest state of item 4b

**Not done, in either half.** Not the reading and not the verification. The item was `PARTLY AUTONOMOUS`
which was correct about verification, and too optimistic about reading: the fields the formulas must touch
are not touched by any routine that rolls dice.

**One live attempt has now been made and it produced a single observation.** A monster hit the
player once for 16 HP while the player parried the second attack. That is the first real damage
number this project has, and it is one sample. It does not distinguish a constant 16 from a roll,
and no claim is made about which. See the measurement above.

**Something is now known about the monster's side of the exchange**, which was not before: a
monster can miss (the parry), a hit takes HP from `0xcde81`, and a fight advances `MAP` by one per
turn while charging 15 food per turn.

**A further negative on the string route.** This page's own next step was to find what references the
attack string `による攻撃` and read that routine. The string is at `0x680c` and **nothing references
it**: `tools/refindex.py --query 0x680c` returns none, a literal search for immediates in
`0x6800..0x6820` finds none, and `tools/fnstrings.js --top 200` lists no function for it. So the
string is reached through a computed offset into the `0xEB` table rather than an absolute address, and
following it back needs a different method than the one this page proposed.

The plan's acceptance criterion is "to-hit and damage stated exactly, and marked read-versus-verified".
Neither is satisfied and the page says so rather than offering a plausible formula.

---

**[The RNG](rng-helpers.md)** **[Record layout](record-layout.md)** **[The tick](the-tick.md)** **[Plan](plan.md)**

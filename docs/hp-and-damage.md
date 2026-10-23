# HP, damage, and the fight measurements

A live fight, sampled read-only over the emulator console. This page records the field that is HP, a
correction to the previous field map, and what damage looks like in memory.

## HP is at `0xcde81`, confirmed by the display

The player's screen read **HP 385** after taking 5 damage. Memory at that moment:

```
0xcde81 = 385    <- matches the screen exactly
0xcde85 = 400
0xcde89 = 21
```

**`0xcde81` is current HP. `0xcde85` is maximum HP.**

This corrects `live-fieldmap.md`, which placed HP at `0xcde85`. The error was invisible until HP and max HP
diverged: while both were 400, no test could tell them apart, and the roster's `HP=400` and `MHP=400` were
identical for the same reason.

**That is the second time in this session that two equal values were mistaken for confirmation.** Equality
proves nothing. The measurement only became possible when combat made them different.

## The corrected layout around HP

Reading raw bytes rather than assumed dword boundaries:

```
0xcde7a: 48 46 4D 41    "HFMA"    RACE, PROFESSION, SEX
0xcde7e: 00 00 00       padding
0xcde81: 81 01 00 00    385       HP          verified by display
0xcde85: 90 01 00 00    400       max HP      inferred
0xcde89: 15 00 00 00    21        EXPERIENCE  verified by display
0xcde8d: 2B 93 00 00    37675     FOOD        verified by display
0xcde91: EB 00 00 00    235       GOLD        verified by display
```

**Four fields verified against the game's own display**, which is the only method here that has not produced
a wrong answer.

## Damage reaches HP, and one melee hit measured 5

| moment | HP | note |
|---|---|---|
| before the fight | 400 | |
| after a magic missile | 400 | unchanged |
| after another missile | 400 | unchanged |
| after a melee hit | 385 | **5 damage** |

**A melee attack demonstrably reduced HP by 5.** That is the first combat arithmetic this project has measured.

**What the missiles did is not established.** An earlier version of this page said they "never affect HP at
all", and that claim was withdrawn: **two samples cannot distinguish a miss from a resisted hit from a lucky
damage roll.** All three would leave HP unchanged.

The player also pointed out that the game shows **no mana or magic counter**, which removes the obvious
explanation for the two unchanged readings. If spells do not draw on a visible pool, a spell cost is more
likely a fixed number of casts or a per-day allowance than a resource that can run short.

**A controlled test would need three or four missiles with known HP before and after and nothing else
happening in between.** That has not been done.

## Food is 15 per turn, and HP is not

Across the same fight, `FOOD` fell from 37735 to 37675 in steps of exactly 15, once per turn including turns
where the player's action failed. A failed attack due to paralysis still costs a turn and still costs 15 food.

**So the tick is per turn, not per move**, and it fires whether or not the action succeeded. Recorded in
`the-tick.md`.

## What a failed action does

The player's arms were paralysed, so `A` (attack) failed with a message and consumed the turn. The monster
then attacked. **Mechanically the turn was spent in full**, so a reimplementation must treat a failed action as
a completed turn, not a retry.

## What is not yet known

- **Whether magic missiles can damage at all.** Two unchanged readings, inconclusive. The player reports that
  missiles *can* damage in this game, so the likely explanation is a miss or a negated hit rather than an
  inability to damage.
- **What a spell costs**, given there is no visible mana counter.
- **The monster's own HP.** The object array has not been located, so kill rewards and monster damage cannot
  be measured from the player side alone.
- **Whether 5 damage is the roll or a constant.** One sample of one hit.
- **Whether max HP at `0xcde85` is really max HP.** Inferred from position, not from a display.

## The method, restated because it is now three for three

**Read a number off the game's own display, then find it in memory.** Do not derive an address from a format
string, do not infer a field from its neighbours, and do not treat two equal values as confirmation.

Every field verified this way has held. Every field derived from the format string alone has been wrong.

---

**[Live field map](live-fieldmap.md)** **[The tick](the-tick.md)** **[Save versus memory](save-vs-memory.md)**

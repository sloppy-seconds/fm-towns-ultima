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

## Damage is applied to HP directly

| moment | HP | note |
|---|---|---|
| before the fight | 400 | |
| after a magic missile | 400 | **no damage** |
| after another missile | 400 | **no damage** |
| after a melee hit | 385 | **5 damage** |

**Magic missiles did not touch HP, twice. A melee attack did.** That is a real distinction and it is the first
combat arithmetic this project has measured.

It also means the two `0 damage` observations recorded earlier were not missile misses, they were **missiles
that never affect HP at all**. What they do affect is unresolved.

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

- **What magic missiles do**, if not HP. Energy, a separate pool, or nothing measurable.
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

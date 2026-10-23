# Combat, observed in a live fight

Measured at the emulator, read-only. This page records the combat mechanics the player saw and the numbers
that confirm them. Nothing here is derived from the executable.

## The turn, as it actually plays

**Every player action consumes one turn**, including actions that fail:

| action | outcome | turn consumed |
|---|---|---|
| `A` attack while arms paralysed | fails with a message | **yes** |
| flee while legs are not paralysed | succeeds | yes |
| attack with no target | - | not measured |

The failed attack is the important one. **A paralysis that prevents an action does not prevent the turn**, so
the monsters still get theirs. A reimplementation must treat a failed action as a completed turn rather than a
retry.

## Paralysis is per-limb, and per-spell

The player observed that **arms** paralysis prevents attacking but **not** fleeing, and that a different
monster spell paralyses **legs**. Each monster appears to carry **one** spell type.

That means paralysis is not a single flag. There are at least two, and the player's own report is:

- arms paralysed: `A` fails, fleeing still works
- legs paralysed: presumably fleeing fails, attacking presumably works

**This is not yet confirmed in memory.** The record has not been searched for the flag.

## Parry is a real outcome

The action window showed:

```
Attacked!
You parried!
```

**A parried attack does no damage and still costs the attacker its turn.** So there are at least three outcomes
to a monster attack: hit for damage, parry, and miss. That is why some attacks in the log left `HP` unchanged.

## Measured numbers

One fight, sampled read-only. `HP` at `0xcde81`, `FOOD` at `0xcde8d`.

| moment | HP | FOOD | note |
|---|---|---|---|
| start | 400 | 37735 | |
| after a magic missile | 400 | 37720 | missile, no HP change |
| after another missile | 400 | 37705 | missile, no HP change |
| after a melee hit | 385 | 37675 | **5 damage** |
| after fleeing and further attacks | 370 | 37555 | **15 damage total** |

**Food falls exactly 15 per turn**, and it is the most reliable turn counter available. Eight turns of fleeing
and fighting cost 120 food, which matches.

## What the parry implies for the damage formula

If a parry is possible then the attack resolution has at least two rolls or one roll with three ranges:

- below some threshold: parried
- above it: hits for damage
- outside the range: misses

The U3 reference in `references.md` gives a to-hit of `RandNum(0, armour+16)` succeeding below 8, which is a
two-outcome model. **Parry suggests U2 has three.** That is a hypothesis, not a measurement.

## What magic missiles do is still unknown

Two missiles left `HP` unchanged. With parry established as a real outcome, "unchanged HP" now has three
candidate explanations rather than one, and **a single unchanged reading proves nothing.**

The player also confirmed there is **no visible mana counter**, so a spell cost is not a depleting pool.

## Not yet measured

- **Monster HP.** The object array has not been located, so a kill cannot be read from memory.
- **Kill experience reward.** `EXPERIENCE` stayed at 21 through the whole fight because nothing was killed.
- **The paralysis flags.** Player-observed, not found in memory.
- **Whether 5 and 15 damage are rolls or constants.** Two hit totals, no per-hit breakdown.

---

**[HP and damage](hp-and-damage.md)** **[Live field map](live-fieldmap.md)** **[The tick](the-tick.md)**

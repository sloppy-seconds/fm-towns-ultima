# Status of the equipment threshold tables

**Tried:** the published Ultima II tables say weapons need a minimum Agility and
armour a minimum Strength:

| weapon | agility | | armour | strength |
|---|---|---|---|---|
| Dagger | 9 | | Cloth | 9 |
| Mace | 11 | | Leather | 11 |
| Axe | 19 | | Chain | 19 |
| Bow | 21 | | Plate | 21 |
| Sword | 29 | | Reflect | 29 |
| Great Sword | 31 | | Power | 31 |
| Light Sword | 39 | | | |
| Phaser | 41 | | | |
| Quick Sword | 49 | | | |

Also tried: searching `ENCHANT.EXP` for those sequences.

**Measured:** absent. The full sequence `9,11,19,21,29,31,39,41,49` is not present
in `ENCHANT.EXP` as bytes, as uint16 or as uint32. Neither is the `9,11,19,21`
prefix, nor any adjacent pair from it (`29,31`, `39,41`, `47,49`, `49,51`).

**Verdict:** OPEN, and the exhaustive search is the useful part. It rules out a
literal stored table in the game binary. Three explanations remain and the search
cannot separate them:

1. The FM Towns rebuild changed the numbers, which is exactly what happened to the
   stat modifiers. The published tables are for earlier versions.
2. The values are computed rather than stored, in which case the arithmetic would be
   in the code and no data search would ever find it.
3. They are stored somewhere other than `ENCHANT.EXP`, though nothing suggests that,
   since the game is a flat single-binary image.

**The test that would settle it**, and it needs no decompiling: the roster stores
`R_WEAPON` and `R_ARMOUR` as the currently readied item, and `AGILITY` and
`STRENGTH` alongside them. Set `AGILITY` low, give the character a Quick Sword, and
try to ready it. If the game refuses, the threshold is live and can be found by
bisection in four or five attempts. If it allows it, the FM Towns version either has
no thresholds or different ones.

Our captured character sits on a boundary already: `AGILITY=30`, which by the
published table allows a Sword at 29 but not a Great Sword at 31. That is a
single-test discrimination with no bisection needed.

Do not repeat the byte search. It was exhaustive for contiguous sequences and it
came back empty.

## What the equip step looks like in the save, measured

Observed in the running game, not inferred. A new character carries a cloth armour and a dagger but
has neither equipped. Two commands equip them:

```
W -> B      wear the cloth armour
R -> B      ready the dagger
```

And the effect on the record is two bytes:

| field | before | after |
|---|---|---|
| `R_ARMOUR` (`0xcdea1`) | `A` (65) | `B` (66) |
| `R_WEAPON` (`0xcdebe`) | `A` (65) | `B` (66) |

**This corrects a guess.** An earlier revision of `docs/character-creation.md` read `A` as meaning
"nothing equipped", since a fresh character seemed to hold nothing. In fact `A` is an item code and
`B` is what it becomes once worn or readied. The carried entries are separate fields, which is why
live memory showed `CLOTH` and `DAGGER` as zero at game start while the roster file showed them as
one: the roster stores carried counts and the record's equipped slots were still `A`.

## The threshold test, now available

The character used for the measurements above has `STRENGTH=35` and `AGILITY=25`. Against the
published table that allows every armour up to Power and weapons up to **Bow at 21**, and refuses
**Sword at 29**. So:

- **ready a Sword.** If the game refuses, the thresholds are live and can be bisected.
- if it allows it, this build has no thresholds or different ones, which would be the same outcome
  as the stat modifiers, where the FM Towns rebuild differed from the published figures.

That test has not been run. It needs the running game and one command.

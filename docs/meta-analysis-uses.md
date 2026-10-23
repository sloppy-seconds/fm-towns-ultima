# What in the research doc is actually useful

The doc is prose-heavy and its specific formulas are in embedded images that cannot
be read from the file. It contains **no addresses, no register patterns and no byte
constants**, so nothing in it can be grepped for in the binary.

What it does contain is a set of **falsifiable behavioural claims**. Each is cheap to
test against the saves and the emulator we already have, and each would either
confirm a mechanic or retire it.

Ranked by cost. The first two can be checked with the files already on disk.

## 1. Attribute and counter caps, testable now

| claim | how to test |
|---|---|
| attributes cap at 99 and **wrap to 0** if raised past it | `saves/maxed_four.hdm` holds four characters at exactly 99 |
| inventory caps at 99, a 100th resets the count to 0 | edit a count with `savedisk.js set`, load |
| gold and experience cap at 9,999 and wrap | set `GOLD=9999`, gain gold in game, check the file |
| HP caps at 9,999 | same route via the monarch |

The wrap-to-zero behaviour, if true, is worth encoding in the save editor as a
guard. The editor currently allows values up to the documented maximum without
warning about overflow.

## 2. The 15 HP retreat threshold

> "When an overworld monster's Hit Points drop to 15 HP or lower, its AI behavior
> toggles from aggression to retreat mode. The entity moves away and regenerates HP
> each turn. Once its HP recovers to 16, aggressive pursuit resumes."

This is a **very specific claim**, and it predicts observable behaviour: a monster
you damage to exactly 15 should flee and heal, and one you hit for 16+ in one blow
should die before it can run.

Testable by fighting and watching, and it would explain the "monsters spawn
extremely quickly" complaint from the real-hardware playthrough. If damaged monsters
flee and heal rather than dying, fights last much longer than they look.

## 3. The dual-seed dungeon RNG

> "Before generating fixed dungeon features the RNG is seeded from the dungeon's
> spatial coordinates. Structural floorplans are 100% deterministic. Before spawning
> transient features it is re-seeded from elapsed game time."

This is the single most **decompiling-relevant** claim in the document. If true, the
dungeon generator has two clearly separable phases, and the first is seeded from
constants. That means:

- entering the same dungeon level twice and diffing `WORLD*.UT2` should show the
  same layout and different contents
- the RNG routine, when found, would be identifiable by two call sites with
  different seed sources

Our `SEED` field in the roster schema is the obvious place to look for the second
seed. It has never been observed changing, which is itself a data point.

## 4. Food consumption rates

> "Overworld walking consumes 0.19 food units per tile. Horse or taxiing airplane
> 0.38. Flying, sailing, rocketing consume zero. Dungeon traversal 1.00 per 10
> actions. Spacebar or auto-pass 0.10, but the `P` key bypasses the check entirely."

We know `FOOD` is stored times 100 and ticks down. Our save went 39505 to 39115
across a session that included a moongate, a fight and walking, which is 390 units
of food over an unknown number of tiles. The 0.19-per-tile figure is testable by
walking a counted number of tiles and re-reading the field.

The `P` key bypassing the food check is a specific, checkable oddity.

## 5. Shop discount thresholds

> "A sum of INT+CHA under 40 gives retail price. At 40 or above, 38% off. At 80 or
> above, 60% off."

Testable with two edited saves differing only in INT+CHA either side of 40. Our
captured character has INT 15 and CHA 25, a sum of 40, which sits exactly on the
first threshold and makes a single test discriminating.

## 6. Combat formulas

The doc gives hit chance as a 7-bit random roll against BCD agility, guaranteeing a
hit at agility 80 or above, and damage as deterministic from strength plus weapon
power with no variance roll.

Those are stated as verified against 6502 disassembly. Whether the FM Towns rebuild
kept them is unknown, and testing needs the emulator plus patience. Worth doing only
if combat behaviour turns out to matter for extraction, which it does not
currently.

## What is not useful

- The formulas themselves, which are images in the file and cannot be read here.
- The platform matrix, which is wrong about this port in several places, see
  `rebuttal.md`.
- The Apple II and DOS bug list, which describes code this project does not have.
- The 6502-specific detail: BCD arithmetic, 8-bit registers, and the divide-by-zero
  crash at high clock speeds are all about the Apple II and DOS builds. This port is
  32-bit flat on a 386, and our own measurements show it behaves differently where
  it has been checked.

## The honest summary

The doc gives **no shortcut into the binary**. Its value is a list of behaviours to
watch for, which is genuinely useful for confirming what the code does once found,
but it will not help find anything.

The one exception is the dungeon RNG claim, which describes a *structure* rather than
a value, and structures are findable.

---

**[The research doc](u2-game-meta-analysis.md)** **[Differences from published references](rebuttal.md)**

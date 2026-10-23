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

## 5.5 The formulas, now that they are restored

The equations came back as text after the first pass, and three of them are directly
checkable against fields we already have.

### Hit chance

```
Hit Probability = min(100%, (Agility / 80) * 100)
```

Stated as a 7-bit random roll compared against the agility value, so 80 or above
always hits. **In a 32-bit port this would be a different comparison**, but the shape
survives if the mechanic does: an `and` against a mask of 0x7F followed by a compare
against the stat. That is a searchable pattern, unlike the numbers themselves.

### Damage

```
Damage = floor((Weapon Power * 4 + Strength) / 4)
```

Unarmed, `floor(Strength / 4)`. Deterministic, no variance roll. Two useful
consequences if it holds here: the `* 4` then `/ 4` suggests the code packs weapon
power into a quarter-unit scale, and `floor` implies an integer divide by 4, which is
a shift right by 2.

**Blocker:** this needs `Weapon Power`, and we have never decoded `R_WEAPON`. It is a
`%c` field and it is `A` in **every save we have**, including the four characters at
99 in everything. So `A` is either "nothing readied" or index zero of a letter-coded
weapon list. Until it is decoded the damage formula cannot be tested.

### Enemy hit chance

```
Enemy Hit Probability = (8 - Armor Tier) / 16
```

**Tested, and the model the formula implies does not fit.** Three findings, all
measured:

1. **There is no Vacuum armour.** The doc's tier list includes Vacuum at tier 4. The
   string `VACUUM` appears nowhere in `ENCHANT.EXP` and nowhere in a 7.6 MB machine
   state. The roster has seven armour fields and Vacuum is not among them.

2. **`SKIN` and `CLOTH` are both 1 on a new character.** They are not sequential
   tiers. Reading "highest set flag" as the tier gives a starting character tier 1,
   while the doc puts skin and cloth together at tier 0.

3. Consequence: the armour tier cannot be computed from the flags without knowing
   how the game maps them, and the doc's ladder has an entry this build does not
   have.

So the formula is recorded as **not yet usable**. It needs either the code that
computes armour class, or a controlled experiment: equip each armour in turn, save,
and see which flags change.

### The dungeon seeds

```
Static  Seed = f(X_coord, Y_coord, Depth, Continent Index)
Dynamic Seed = f(Game Time Counter)
```

The inputs are named, which is what makes this findable. If the code computes those
four values together before a call to a random routine, that is a recognisable shape
in a disassembly: four loads, some mixing, one call. `Continent Index` maps to the
roster's `ERA` or `WORLD`, and `Depth` to `DUNG_X`/`DUNG_Y` being non-zero.

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

## What happened when the formulas were searched for

All three combat formulas were chased into the binary. **None has a fingerprint
here**, and each negative is worth recording.

| search | expected | found |
|---|---|---|
| `shr r32,2` | the `/ 4` in the damage formula | **1 site**, and it is inside `rep movsd` (a memory copy), not a divide |
| `lea` with scale 4 | the `* 4` on weapon power | **626 sites**, which is the universal array-index idiom, not a formula |
| `and reg,0x7f` | the 7-bit random roll | **2 sites**, both in a routine that clamps a text length at 127 and wraps with `sub ax,0xc` |

The two `0x7f` sites are text wrapping, not combat. That was checked by
disassembling them: the code adds a per-character width from a table at
`0x0def25` and corrects with `sub ax,0xc` when it passes 127.

**Why this is not a surprise in hindsight.** The doc verified its formulas against
6502 assembly. This binary is 32-bit output from MetaWare High C, and a compiler of
that era divides by small constants using a multiply-high sequence, not a shift, and
is free to represent a random roll without a mask at all. Looking for 6502 idioms in
32-bit compiler output was the wrong instinct.

**What would actually find them:** a deliberate change and observe. Set `AGILITY`
to a known value in a save, fight, and record hit and miss counts. That gives the
formula empirically without needing to recognise its code. The same applies to
damage: known Strength, known weapon, watch the HP delta on a monster.

That is slower per formula than a lucky grep, but it cannot be wrong the way a byte
pattern match can.

---

**[The research doc](u2-game-meta-analysis.md)** **[Differences from published references](rebuttal.md)**

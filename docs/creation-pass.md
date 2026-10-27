# The character creation pass: what it found, and the assumption it corrected

**Plan item 5a, closed.** The state arithmetic is now read out of the code: ten choices across three
questions, each producing a fixed additive delta on six attributes. The pass also corrected a
premise I had invented at the start of the session, and that correction is the more useful result.

## The assumption that was wrong

When I wrote plan item 5a I described the task as reading **the stat roll**: "Ultima II rolls
attributes from dice and then applies race and profession modifiers."

I had no source for that. It was what a 1987 RPG plausibly does, written in the confident voice of a
measured fact. It is not what this game does.

**The game has the player allocate 90 points across six attributes.** No dice are involved. Confirmed
twice: the four characters on `saves/modifier_test.hdm` were entered at exactly 10 each, and the
worked case in `docs/save-files.md` sums to 20+15+20+15+10+10 = 90.

### What the wrong premise cost

It was not a cosmetic error in a prose line. It aimed the work.

A dice roll means the deliverable is **finding the RNG call**, so the first attempt searched for
`randMod` call sites. The highest-frequency hit was `0xf93ac`, which turned out to be **monster spawn
placement** indexing the entity tables at `0xce3c8`. An hour spent reading the wrong code, and a page
nearly written about the wrong subsystem.

The allocation premise points somewhere else entirely: a UI, a budget, and a per-stat bound. That is
where the modifiers actually live.

### Why nothing caught it

`plancheck` validates item metadata, not whether an item's prose is true. No check in this repository
can tell an invented sentence about a 1990 game from a measured one. That is now `AGENTS.md`
section "Never assume game behaviour", with this incident as the worked example.

## The arithmetic, read from the code

`0xed6e0` applies the modifiers, reached only when the player answers `Y` to the create prompt. Six
`add [stat], eax` instructions, each summing two stack slots:

| field | sum |
|---|---|
| `STRENGTH` | `[-0x10] + [-0x14]` |
| `AGILITY` | `[-0x18] + [-0x1c]` |
| `WISDOM` | `[-0x20] + [-0x24]` |
| `INTELLIGENCE` | `[-0x28] + [-0x2c]` |
| `STAMINA` | `[-0x34]` |
| `CHARISMA` | `[-0x30]` |

Three branches write those slots:

| choice | branch | slots |
|---|---|---|
| race | `0xecf07` | `H` sets `[-0x28]=5`; `E` sets `[-0x18]=5`; `D` sets `[-0x10]=5`; `B` sets `[-0x10]=-5` and `[-0x20]=10` |
| profession | `0xed3bb` | `F` sets `[-0x14]=10` and `[-0x1c]=10`; `C` sets `[-0x24]=10`; `W` sets `[-0x2c]=10`; `T` sets `[-0x1c]=10` |
| sex | `0xed158` | `M` sets `[-0x34]=10`; `F` sets `[-0x30]=10` |

### The table

| choice | STR | AGI | STA | CHA | WIS | INT |
|---|---|---|---|---|---|---|
| male | 0 | 0 | +10 | 0 | 0 | 0 |
| female | 0 | 0 | 0 | +10 | 0 | 0 |
| human | 0 | 0 | 0 | 0 | 0 | +5 |
| elf | 0 | +5 | 0 | 0 | 0 | 0 |
| dwarf | +5 | 0 | 0 | 0 | 0 | 0 |
| hobbit | -5 | 0 | 0 | +10 | 0 | 0 |
| fighter | +10 | +10 | 0 | 0 | 0 | 0 |
| cleric | 0 | 0 | 0 | 0 | +10 | 0 |
| wizard | 0 | 0 | 0 | 0 | 0 | +10 |
| thief | 0 | +10 | 0 | 0 | 0 | 0 |

## Verification

The model runs against the four measured characters and reproduces every one exactly:

```
HFM  predicted STR+10 AGI+10 STA+10 CHA+0  WIS+0  INT+5    MATCH
HCM  predicted STR+0  AGI+0  STA+10 CHA+0  WIS+10 INT+5    MATCH
HWM  predicted STR+0  AGI+0  STA+10 CHA+0  WIS+0  INT+15   MATCH
HFF  predicted STR+10 AGI+10 STA+0  CHA+10 WIS+0  INT+5    MATCH
verified 4 of 4
```

Four of four, across three professions and both sexes.

## Three things the code gave that measurement could not

**Elf, dwarf, hobbit and thief are now known.** The measurement-only version listed all four as
unknown, because no such character had ever been created. They come from the same branch code as the
measured ones, so they carry the same evidence, with the honest caveat that none was actually
created to confirm it.

**Hobbit is the only race with a penalty.** `STR-5` for `CHA+10`. Every other choice is a pure
bonus, which makes hobbit a trade rather than a weaker human.

**Thief has no unique term.** It sets `[-0x1c]=10`, the same slot and value fighter uses for one of
its two bonuses. So a thief gets `AGI+10` and nothing else, which is why it has the flattest profile
of the four professions.

## A wrong mapping, caught by the data

My first pass read the order of the six `add` instructions and assigned them as STR, AGI, CHARISMA,
WISDOM, STAMINA. That predicted `WIS+5` for a human fighter, and the measured character has `INT+5`.

The record's physical field order (`0xcde62`, `66`, `6a`, `6e`, `72`, `76`, `7a`) is not the order
the instructions appear in. The measured characters are what caught it, and the corrected mapping
was then checked against all four rather than argued from instruction order.

**That is the pattern worth carrying:** the code gives the mechanism, the measurements give the
labels, and neither alone was enough.

## What the pass did not establish

**Where the 90 base points are held, and whether one stat may take all 90.** The allocator was not
located. A search for a comparison against 90 found `0xea118`, which turned out to parse profession
letters from `D`, `F`, `U`, `Z` rather than check a budget. Neither gap blocks a reimplementation,
which needs the deltas above and a 90-point allocation UI.

**What `0xcde4d` is**, zeroed at creation at `0xea0e2`. Possibly a spent-points counter.

## Two corrections this pass made outside its own subject

**`0xcde81` is HP, not MAGIC.** `docs/inside-a-turn.md` annotated it as `MAGIC`, so the comparison
there read as a spell check. It is HP, verified against the game's own display in
`docs/hp-and-damage.md` where the screen read 385 and memory read 385. The line is the **death
check**.

**There is no magic or mana field in this game.** The record runs HP, maximum HP, experience, food
and gold with nothing between them for a pool. The player reports no mana counter on screen. Spells
appear to be learned or carried rather than paid for, which is the player's reading and is not yet
confirmed from the code.

## Related

- `docs/character-creation.md`: the full arithmetic with the code quoted
- `docs/save-files.md`: the roster format and a worked creation walkthrough
- `docs/equipment-thresholds.md`: strength gates armour, agility gates weapons
- `docs/inside-a-turn.md`: the record layout, corrected here on HP
- `AGENTS.md`: "Never assume game behaviour", which this pass produced

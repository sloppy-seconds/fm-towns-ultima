# Differences from the published Ultima II references

A rebuttal to `u2-game-meta-analysis.md` and to the other secondary sources this
project has used. Everything below is a place where the FM Towns release differs
from what the published material says, with the measurement that establishes it.

The short version: **the FM Towns rebuild is not the game the references describe.**
Mechanics, numbers, asset counts, screen geometry and even the release year differ.
Anyone treating Apple II or DOS documentation as a specification for this disc will
be misled, and several of the differences are large enough to change how the game
plays.

Each entry gives what the reference says, what was measured here, and where the
measurement lives.

---

## 1. Character stat modifiers

**Reference says**, for sex: male `STR+5 AGI+5`, female `STR+10 AGI+10`, described as
"female grants double total stat points compared to male, establishing Female as
mathematically optimal".

**Measured** on FM Towns, from four characters created at 10 across the board:

| option | reference | FM Towns |
|---|---|---|
| Male | STR+5, AGI+5 | **STA+10** |
| Female | STR+10, AGI+10 | **CHA+10** |
| Human | INT+5 | INT+5, agrees |
| Fighter | STR+15 | **STR+10, AGI+10** |
| Cleric | WIS+10 | WIS+10, plus **STR−10 AGI−10** |
| Wizard | INT+10 | **INT+15** |

Male and female grant the **same total** in different places, so the reference's
"female is mathematically optimal" conclusion does not hold here.

Source: `save-files.md`, measured from `saves/modifier_test.hdm`.

## 2. Tile count

**Reference says** "a total of 64 discrete graphical tiles".

**Measured:** `ENEMY2.TIF` is 33,280 bytes, which is **65 tiles of 512**, and the
loader confirms it: four banks of sixteen at `0x0b5578`, `0x0b7578`, `0x0b9578`,
`0x0bb578`, `0x2000` apart, plus one tile over. `4 × 8192 + 512 = 33280`.

Source: `tile-loader.md`.

## 3. Map geometry

**Reference says** a 20×10 tile viewport, with the world implied to be a 64×64 grid
as in the earlier games.

**Measured:** the map file is **128 × 244**. The game does not load `MAP2_1.TIF`
whole: it reads from offset `0x800`, keeping 31,232 bytes, and `31232 = 128 × 244`.
Found contiguously in live memory and matched 100% with no divergence.

Source: `assets-and-graphics.md` section 5.2.1.

## 4. Time periods and worlds are separate

**Reference says** five temporal eras, treated as one axis of location.

**Measured:** the roster carries **two independent fields**, `WORLD` and `ERA`. A
moongate changes **both**. A save diff across a moongate showed `WORLD` going 2 → 3
while `ERA` went 2 → 1, which the single-axis model cannot express.

There is also a `MAP` field, which is a **map type** rather than a map number:
`OUTSIDE`, `VILLAGE`, `TOWN`, `CASTLE`, `TOWER`, `DUNGEON`.

Source: `save-files.md` sections 8.0.2 and 8.0.1.

## 5. Colour depth and resolution

**Reference says** the FM Towns release is 1994, `320x240 / 640x480 256-color`.

**Measured:** the game runs at **640 × 480, 4-bit colour, 2-page mode**, from
`PRI CRTC` on the running machine. Not 256 colours. The artwork uses palette
indices 0 to 7 only, so eight colours in practice.

Source: `palette.md`.

## 6. Release year

**Reference says** 1994.

**Measured:** the disc in this project is `FM-Towns CD/Ultima Trilogy 1-3
(1990)(Origins)(Jp-En)`. The trilogy compilation is 1990. A 1994 date may refer to a
separate later FM Towns release, but it is not this one.

## 7. Equipment thresholds not present

**Reference says**, and the C64-era manuals agree, that weapons need a minimum
Agility and armour a minimum Strength on the ladder `9, 11, 19, 21, 29, 31, 39, 41,
49`.

**Measured:** those values are **absent from `ENCHANT.EXP`** as bytes, as uint16 and
as uint32, including the `9,11,19,21` prefix and every adjacent pair. Either the
numbers changed in this rebuild, as the stat modifiers did, or they are computed
rather than stored.

Source: `equipment-thresholds.md`. Recorded as verified-negative so the search is
not repeated.

## 8. Command keys

**Reference (C64 manual) says** `K` for Klimb, and maps movement to the
punctuation characters `@` `:` `;` `/` because the C64 has no dedicated arrow keys.

**Measured:** the FM Towns command bar has **no `K)limb`**, and the game uses real
arrow keys. It adds `N)egate`, `W)ear`, `O)ffer`, `P)ass` and `Z)tat`, none of which
appear in the C64 set.

Source: `save-files.md` section 8.0.1.1.

## 9. Roster is ASCII, not packed binary

**Reference material** describes a 384-byte packed binary character record.

**Measured:** `ROSTER1.UT2` on this port is **plain ASCII** `key=value` lines with
CRLF endings, 92 fields per slot and four slots. The schema was read out of the
binary itself from the `printf` format string, so the field list is the game's own.

Source: `save-files.md` section 8.0, `roster-reference.md`.

## 10. There is no Vacuum armour

**Reference says** armour runs across seven tiers, with a table listing
`Skin/Cloth, Leather, Chain, Plate, Vacuum, Reflect, Power Armor`.

**Measured:** the roster schema, taken from the format string in the game binary,
contains **no `VACUUM` field at all**. The seven armour fields it does have are:

```
SKIN  CLOTH  LEATHER  CHAIN  PLATE  REFLECT  POWER
```

The string `VACUUM` does not appear anywhere in `ENCHANT.EXP`, nor anywhere in a
7.6 MB machine state. It is not a field that exists and goes unused, it is absent.

Two possibilities, and the data cannot separate them: this port dropped the vacuum
suit, or the reference's tier list is describing a different release. Either way the
reference's seven-tier armour table does not describe this game.

Also measured, and it corrects a natural assumption: **`SKIN` and `CLOTH` are both
set to 1 on a brand new character.** They are not sequential tiers you upgrade
through, and a naive "highest set flag" reading gives a starting character armour
tier 1 when the reference calls it tier 0.

Source: `roster-reference.md`, and the savestate at `/var/tmp/death.state`.

## 11. Named debug modes that no published source mentions

**Reference material** describes no debug or cheat modes for Ultima II on any
platform.

**Measured:** the FM Towns binary names five, in its own text, at file offsets
`0x5501` to `0x55ad`: `日本語表示モ−ド` (Japanese display), `ダンジョンマスタ−`
(dungeon master), `ウルティママスタ−` (Ultima master), `ゾンビモ−ド` (zombie) and
`お金持ちモ−ド` (rich). See `debug-modes.md`.

How they are entered is unknown. They are not referenced as immediates, the same
addressing problem as the asset paths.

## 12. Asset formats

**Reference material** describes tile graphics as raw Apple II or CGA bitmaps.

**Measured:** every artwork file here is **TIFF with lying headers**. The geometry
tags are stale or bogus and the real dimensions have to be derived from the byte
count. All art is 4bpp, in two layouts: packed (two pixels per byte) for pictures,
and a sheet/strip convention for sprites.

Source: `assets-and-graphics.md`.

---

## What the references are still good for

Combat formulas, the dual-seed dungeon RNG, the space grid coordinates, food
consumption rates and the item functions are all things this project has **not**
measured, and the research doc is a reasonable source of hypotheses for them. Each
is testable with a save edit and one observation. The review page lists which.

The distinction that matters: those are hypotheses about game *design*, which
Origins may well have kept. The differences above are measured facts about game
*implementation*, and they show the rebuild did not keep everything.

---

## How to check any of this

Every claim above is reproducible from the archive.org zip alone.

```bash
node tools/verify.js                          # 107 assertions, all measured
node tools/mapfmt.js                          # map file structure
node tools/expimage.js                        # binary layout and dispatch
python3 tools/u2screen.py                     # what screen is up
```

The savestate route used for several of these needs the emulator running, and is
described in `save-files.md` section 8.0 and `tile-loader.md`.

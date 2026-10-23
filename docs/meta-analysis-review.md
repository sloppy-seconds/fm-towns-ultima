# Checking the research doc against the FM Towns measurements

`u2-game-meta-analysis.md` is a wide-ranging secondary-source analysis, built
mainly from Apple II and MS-DOS evidence. It is useful for the parts of the game
this project cannot measure cheaply: combat formulas, the dungeon RNG, the space
grid, food consumption rates, and the platform matrix.

It is **not** evidence about this port. Where its claims and the FM Towns
measurements disagree, the measurement wins, and the disagreements are large
enough that anyone using the doc as a specification will be misled.

## Character stat modifiers

Measured from `saves/modifier_test.hdm`, four characters all human and all entered
at 10 across the board, so stored minus 10 is the modifier.

| character | STR | AGI | STA | CHA | WIS | INT |
|---|---|---|---|---|---|---|
| human male fighter | +10 | +10 | +10 | 0 | 0 | +5 |
| human male cleric | 0 | 0 | +10 | 0 | +10 | +5 |
| human male wizard | 0 | 0 | +10 | 0 | 0 | +15 |
| human female fighter | +10 | +10 | 0 | +10 | 0 | +5 |

Decomposed by holding two factors constant:

**Sex**, at human fighter: male gives STA+10, female gives CHA+10. Neither affects
STR or AGI.

**Profession**, at human male, after subtracting the male constant: fighter adds
nothing further, cleric is WIS+10 with STR-10 AGI-10, wizard is INT+10 with STR-10
AGI-10.

**Race**: all four are human and share INT+5, which is the human bonus. Elf, Dwarf
and Hobbit were not measured at a 10 baseline and are recorded as unknown.

## Compared with the doc

| option | doc says | FM Towns measured |
|---|---|---|
| Male | STR+5 AGI+5 | **STA+10** |
| Female | STR+10 AGI+10 | **CHA+10** |
| Human | INT+5 | INT+5, agree |
| Fighter | STR+15 | **STR+10 AGI+10** |
| Cleric | WIS+10 | WIS+10, agree, plus STR-10 AGI-10 |
| Wizard | INT+10 | **INT+15** |

Two of six agree. The differences are not rounding: male and female give entirely
different stats, and the doc's claim that "Female grants double total stat points
compared to Male" is false here, since male and female grant the same total in
different places.

This is consistent with what the project already found elsewhere. The FM Towns
rebuild changed things, and the published tables describe earlier versions.

## Claims in the doc that contradict measurements

| doc claim | measurement |
|---|---|
| "64 discrete graphical tiles" | **65** in `ENEMY2`, at 512 bytes each |
| "a visible 20x10 tile viewport" | viewport confirmed, but the map file is **128x244** and the game reads it from `0x800`, not whole |
| "5 temporal eras" | roster carries `WORLD` **and** `ERA` as separate fields, and a moongate changes both |
| "map data shared identical sector addresses" (C64) | not applicable, and the FM Towns disc is a single CD |
| FM Towns released 1994, 320x240 or 640x480 | the port runs at **640x480 4-bit**, measured from `PRI CRTC`. The trilogy disc is 1990 |

That last one matters because the doc's platform matrix dates this release four
years late. The disc in this project is `FM-Towns CD/Ultima Trilogy 1-3
(1990)(Origins)(Jp-En)`, and 1990 is what the packaging says.

## What the doc is good for

Treat it as a source of **hypotheses to test**, not of facts about this build:

- The dual-seed dungeon RNG, seeded from coordinates then from game time. That is
  testable by entering the same dungeon level twice and diffing.
- The 15 HP retreat threshold for monsters. Testable by fighting and watching.
- Food consumption at 0.19 per overworld step. Testable against the `FOOD` field,
  which we know ticks down and is stored times 100.
- The shop discount thresholds at INT+CHA of 40 and 80. Testable with edited saves.
- The HP taper when buying from a monarch. Testable with a save holding known gold.

Each of those is a save edit and one observation, and none needs the emulator to be
played for hours.

## Caveat on the doc itself

It cites numbered sources but the reference list is not in the file, so individual
claims cannot be traced to a primary source from this repository. The certainty
matrix at the end is the author's own ranking. Treat every specific number as
unverified until measured here.

It is also entirely about the Apple II and DOS lineage. Nothing in it was derived
from the FM Towns binary, and the FM Towns binary is what this project is
extracting.

---

**[Save files and the roster](save-files.md)** **[World save format](world-format.md)**

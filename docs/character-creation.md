# Character creation: the arithmetic, verified from stored rosters

**Verdict: the creation arithmetic is solved for the parts that matter, and it was solved from
stored rosters rather than from the code.** The remaining gap is the sex, race and profession
modifier table for combinations that were never created.

This answers plan item 5a. It is recorded here because it was scattered across
`save-files.md`, `meta-analysis-review.md` and `rebuttal.md`, and because the re-verification
below found that the three pages agree once the baseline is read correctly.

## The starting state

A new character is allocated **90 points across six attributes**. The game asks for a name,
sex, profession and race, then applies modifiers once at creation time.

The six attributes, in record order: `STRENGTH`, `AGILITY`, `STAMINA`, `CHARISMA`, `WISDOM`,
`INTELLIGENCE`.

## The measured modifier table

Read this session from `saves/modifier_test.hdm`, which holds four characters all entered at
**10 across the board**, all human. Stored value minus 10 is therefore the modifier:

```
slot NAME RACE P SEX  STR AGI STA CHA WIS INT  total
  0         H    F   M   20  20  20  10  10  15   95
  1         H    C   M   10  10  20  10  20  15   85
  2         H    W   M   10  10  20  10  10  25   85
  3         H    F   F   20  20  10  20  10  15   95
```

Command:

```
node -e 'const S=require("./tools/savedisk.js");
const b=require("fs").readFileSync("saves/modifier_test.hdm");
const e=S.listRoot(b).find(x=>/ROSTER1/.test(x.name));
const slots=S.parseSlots(S.readFile(b,e).toString("latin1")); ...'
```

## The decomposition, which is exactly additive

Holding two factors constant and subtracting:

| delta | STR | AGI | STA | CHA | WIS | INT |
|---|---|---|---|---|---|---|
| sex, female minus male, at fighter | 0 | 0 | **-10** | **+10** | 0 | 0 |
| cleric minus male fighter | **-10** | **-10** | 0 | 0 | **+10** | 0 |
| wizard minus male fighter | **-10** | **-10** | 0 | 0 | 0 | **+10** |

Removing the race term, which is `INT+5` for human and common to all four:

| contribution | STR | AGI | STA | CHA | WIS | INT |
|---|---|---|---|---|---|---|
| **sex male** | 0 | 0 | **+10** | 0 | 0 | 0 |
| **sex female** | 0 | 0 | 0 | **+10** | 0 | 0 |
| **race human** | 0 | 0 | 0 | 0 | 0 | **+5** |
| **profession fighter** | **+10** | **+10** | 0 | 0 | 0 | 0 |
| **profession cleric** | 0 | 0 | 0 | 0 | **+10** | 0 |
| **profession wizard** | 0 | 0 | 0 | 0 | 0 | **+10** |

Every measured row is the sum of these terms plus 10. Checked arithmetically for all four.

## The crossed case, which confirms the model

`docs/save-files.md` records a character entered as STR 20, AGI 15, STA 20, CHA 15, WIS 10,
INT 10 and stored as STR 30, AGI 25, STA 20, CHA 25, WIS 10, INT 15. That is human, female,
fighter, and the model predicts exactly that:

```
entered + (female + human + fighter) = stored
STR 20 + 10 = 30    AGI 15 + 10 = 25    STA 20 + 0 = 20
CHA 15 + 10 = 25    WIS 10 + 0  = 10    INT 10 + 5 = 15
```

Two independent observations, at different input totals, agree. The 90-point allocation is
also confirmed: 20+15+20+15+10+10 = 90.

## A correction I made and then withdrew

Comparing the two pages naively makes them look inconsistent, because `meta-analysis-review.md`
attributes STA+10 and CHA+10 to sex while `save-files.md`'s female fighter has STA+0. The
apparent conflict is real data on both sides: **fighter contributes STR+10 AGI+10 and the sex
term is separate**, so a female fighter has STR+10 AGI+10 STA+0 CHA+10. Reading either page
without the other produces a wrong prediction, including one I wrote and then checked against
the disk.

## What is not known

**Elf, dwarf and hobbit modifiers.** All four measured characters are human. The race term is
known only for `H`, and `docs/meta-analysis-review.md` already records the others as unknown.

**Thief.** `save-files.md` establishes the profession letters `F`, `C`, `W`, `T` and the sprite
index formula `SPID = profession_index * 4 + 2`, but no thief was created at a 10 baseline, so
its stat term is unknown.

**The order of application.** The terms are additive and commute, so order does not matter for
the totals. It would matter only if a clamp existed, and none was observed: no row hits a
ceiling.

**Where the table lives in the code.** Not located. The values are known by measurement, which
is sufficient for a reimplementation, and finding the table would only confirm them.

## What a reimplementation needs, and has

1. six attributes, 90 points to allocate, stored per character
2. sex: male STA+10, female CHA+10
3. human: INT+5
4. fighter STR+10 AGI+10, cleric WIS+10, wizard INT+10
5. up to four characters on one roster, each in its own `(n)NAME=` slot

That is enough to generate a character the game accepts, and `docs/quickstart.md` already
describes a tool that does so.

## Related

- `docs/save-files.md`: the roster format and the worked creation walkthrough
- `docs/meta-analysis-review.md`: the decomposition this page re-verified
- `docs/rebuttal.md`: the comparison against published tables from other releases
- `docs/record-layout.md`: field offsets in memory
- `saves/modifier_test.hdm`: the four-character measurement disk

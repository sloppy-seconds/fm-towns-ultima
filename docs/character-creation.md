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

### Everything else a fresh character starts with

**Read from live memory at the start of the game, not from a roster file.** This distinction matters
and an earlier revision of this section got it wrong by reading the roster instead.

With the savestate `saves/u2-start.state` reloaded and the VM paused, the non-zero fields of the
record are:

| field | address | value |
|---|---|---|
| `STRENGTH` | `0xcde62` | 35 |
| `AGILITY` | `0xcde66` | 25 |
| `STAMINA` | `0xcde6a` | 30 |
| `CHARISMA` | `0xcde6e` | 10 |
| `WISDOM` | `0xcde72` | 10 |
| `INTELLIGENCE` | `0xcde76` | 15 |
| `RACE`, `PROFESSION`, `SEX` | `0xcde7a`-`0xcde7c` | `H`, `F`, `M` |
| `HP` | `0xcde81` | 400 |
| `MHP` | `0xcde85` | 400 |
| `FOOD` | `0xcde8d` | 39,985 |
| `GOLD` | `0xcde91` | 400 |
| `MAGIC` | `0xcde99` | 2 |
| `R_ARMOUR` | `0xcdea1` | `A` (65), quantity 1 at `0xcdea2` |
| `SKIN` | `0xcdea6` | 1 |
| `R_WEAPON` | `0xcdebe` | `A` (65), quantity 1 at `0xcdebf` |
| `HAND` | `0xcdec3` | 1 |

### The inventory, and two corrections

**A new character carries one cloth armour and one dagger, and neither is equipped.** Both earlier
readings of this section were wrong in different directions, so both are recorded.

**First correction.** An earlier revision said "no armour and no weapon" from live memory, where
`CLOTH` and `DAGGER` read 0. Those fields are in the record but the *carried* entries are elsewhere,
and the equipped slots `R_ARMOUR` and `R_WEAPON` held `A` at game start. The roster file, which
stores carried counts, correctly said `CLOTH=1` and `DAGGER=1` all along.

**Second correction.** The same revision read `A` in `R_ARMOUR`/`R_WEAPON` as "nothing equipped".
It is an item code. Equipping changes it to `B`:

| command | field | before | after |
|---|---|---|---|
| `W` then `B` (wear) | `R_ARMOUR` `0xcdea1` | `A` (65) | `B` (66) |
| `R` then `B` (ready) | `R_WEAPON` `0xcdebe` | `A` (65) | `B` (66) |

**Equipping is a separate step a new character must perform.** It affects combat statistics, so a
reimplementation that starts a character fully equipped is not faithful.

**The starting kit does not depend on profession or sex.** Measured across all four slots on
`saves/modifier_test.hdm`, which hold a male fighter, a male cleric, a male wizard and a female
fighter. Every one carries the same items and the same money:

| profession, race, sex | held | `R_ARMOUR` | `R_WEAPON` | `GOLD` | `FOOD` | `MAGIC` |
|---|---|---|---|---|---|---|
| `F` `H` `M` | CLOTH, HAND, DAGGER | A | A | 400 | 40000 | 65 |
| `C` `H` `M` | CLOTH, HAND, DAGGER | A | A | 400 | 40000 | 65 |
| `W` `H` `M` | CLOTH, HAND, DAGGER | A | A | 400 | 40000 | 65 |
| `F` `H` `F` | CLOTH, HAND, DAGGER | A | A | 400 | 40000 | 65 |

**So a wizard starts with the same cloth and dagger as a fighter.** The kit is a constant, not a
per-profession table, which is worth knowing because the obvious assumption is the opposite.

Thief was not measured, and neither was any non-human race, so those two cases remain open.

`docs/equipment-thresholds.md` records the published minimums, that strength gates armour and
agility gates weapons, and that the numbers are not stored literally in `ENCHANT.EXP`.

## The profession letters, and a mismatch worth recording

The roster file stores `PROFESSION` as one of `F`, `C`, `W`, `T` (`docs/save-files.md` establishes
this against the sprite index).

But `0xea118` parses a single character as `D`, `F`, `U` or `Z`, mapping to class indices 2, 4, 3
and 1:

```asm
ea109  cmp edx, 0x44        ; 'D' -> 0xcde4c = 2
ea10e  cmp edx, 0x46        ; 'F' -> 4
ea113  cmp edx, 0x55        ; 'U' -> 3
ea118  cmp edx, 0x5a        ; 'Z' -> 1
ea11d  jmp default          ; anything else -> 0
```

**Two different alphabets, in one program.** The routine was not traced to a caller and its role
is not established; it may be a parser for an imported or legacy roster. Recorded because a future
reader comparing the file format to the code will hit it and assume one of them is wrong.

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

**The per-stat bounds.** Not established. The 90-point budget is confirmed, but whether a single
attribute may take all 90, or whether there is a per-stat ceiling at creation, was not tested.
A search for the allocation routine found no comparison against 90 in the registration path at
`0xedf38`, and the allocator itself was not located.

**The order of application.** The terms are additive and commute, so order does not matter for
the totals. It would matter only if a clamp existed, and none was observed: no measured row hits
a ceiling.

**Where the table lives in the code.** Not located. The values are known by measurement, which
is sufficient for a reimplementation, and finding the table would only confirm them.

**What `0xea118` is for.** It parses a profession letter from a different alphabet than the
roster stores. Unresolved.

## What closing the remaining gaps would take

Two of the three gaps are cheap and one is not:

| gap | how |
|---|---|
| elf, dwarf, hobbit, thief modifiers | create four characters at 10 across the board, one per race with a fixed profession, then four more varying profession. This is the same measurement already done for human, repeated. Needs the game and about ten minutes. |
| per-stat bounds | create one character putting all 90 into a single attribute and read the stored value. Needs the game and one character. |
| what `0xea118` parses | trace its caller. Static, cheap, and low value. |

All three need either the running game or a caller trace. None blocks a reimplementation, because
the measured table covers human with all three measured professions, and the starting inventory
is constant.

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

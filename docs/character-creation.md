# Character creation: the exact state arithmetic

**The modifier table is read out of the code, not inferred from measurements.** Six `add [stat],`
instructions at `0xed6f3` apply sums of stack slots, and the writers of those slots are the three
choice branches. The model reproduces all four measured characters exactly.

This page replaces the earlier measurement-only version, which had the arithmetic right for the
four cases measured and no idea where it came from.

## The application code

`0xed6e0` onward, reached only when the player answers `Y` to the create prompt:

```asm
ed6ed  mov eax, [ebp-0x10]
ed6f0  add eax, [ebp-0x14]
ed6f3  add [edx+0xcde62], eax     ; STRENGTH

ed6f9  mov eax, [ebp-0x18]
ed6fc  add eax, [ebp-0x1c]
ed6ff  add [edx+0xcde66], eax     ; AGILITY

ed705  mov eax, [ebp-0x20]
ed708  add eax, [ebp-0x24]
ed70b  add [edx+0xcde72], eax     ; WISDOM

ed711  mov eax, [ebp-0x28]
ed714  add eax, [ebp-0x2c]
ed717  add [edx+0xcde76], eax     ; INTELLIGENCE

ed71d  mov eax, [ebp-0x34]
ed720  add [edx+0xcde6e], eax     ; STAMINA

ed726  mov eax, [ebp-0x30]
ed729  add [edx+0xcde6a], eax     ; CHARISMA
```

**The six stack slots are three pairs plus two singles.** Each pair is one field's total, so each
stat gets a race term and a profession term, and stamina and charisma get one term each.

## Which slot is which choice

Solved by reading the writers and checking against the four measured characters.

### Race, at `0xecf07` to `0xecf6c`

| race | letter written | slots set |
|---|---|---|
| Human | `H` (`0x48`) | `[-0x28] = 5` |
| Elf | `E` (`0x45`) | `[-0x18] = 5` |
| Dwarf | `D` (`0x44`) | `[-0x10] = 5` |
| Hobbit | `B` (`0x42`) | `[-0x10] = -5`, `[-0x20] = 10` |

### Profession, at `0xed3bb` to `0xed42a`

| profession | letter written | slots set |
|---|---|---|
| Fighter | `F` (`0x46`) | `[-0x14] = 10`, `[-0x1c] = 10` |
| Cleric | `C` (`0x43`) | `[-0x24] = 10` |
| Wizard | `W` (`0x57`) | `[-0x2c] = 10` |
| Thief | `T` (`0x54`) | `[-0x1c] = 10` |

### Sex, at `0xed158` and `0xed175`

`M` (`0x4d`) sets `[-0x34] = 10`. `F` (`0x46`) sets `[-0x30] = 10`.

## The resulting table

Slot to field, from the application code paired with the measured data:

| slot | field |
|---|---|
| `[-0x10]` and `[-0x14]` | `STRENGTH` |
| `[-0x18]` and `[-0x1c]` | `AGILITY` |
| `[-0x20]` and `[-0x24]` | `WISDOM` |
| `[-0x28]` and `[-0x2c]` | `INTELLIGENCE` |
| `[-0x34]` | `STAMINA` |
| `[-0x30]` | `CHARISMA` |

Which gives, as additive deltas on the allocated base:

| choice | STR | AGI | STA | CHA | WIS | INT |
|---|---|---|---|---|---|---|
| sex male | 0 | 0 | **+10** | 0 | 0 | 0 |
| sex female | 0 | 0 | 0 | **+10** | 0 | 0 |
| race human | 0 | 0 | 0 | 0 | 0 | **+5** |
| race elf | 0 | **+5** | 0 | 0 | 0 | 0 |
| race dwarf | **+5** | 0 | 0 | 0 | 0 | 0 |
| race hobbit | **-5** | 0 | 0 | **+10** | 0 | 0 |
| profession fighter | **+10** | **+10** | 0 | 0 | 0 | 0 |
| profession cleric | 0 | 0 | 0 | 0 | **+10** | 0 |
| profession wizard | 0 | 0 | 0 | 0 | 0 | **+10** |
| profession thief | 0 | **+10** | 0 | 0 | 0 | 0 |

## Verification

The model reproduces every measured character exactly, checked in code:

```
HFM  predicted STR+10 AGI+10 STA+10 CHA+0 WIS+0 INT+5   MATCH
HCM  predicted STR+0  AGI+0  STA+10 CHA+0 WIS+10 INT+5  MATCH
HWM  predicted STR+0  AGI+0  STA+10 CHA+0 WIS+0 INT+15  MATCH
HFF  predicted STR+10 AGI+10 STA+0  CHA+10 WIS+0 INT+5  MATCH
verified 4 of 4
```

Four of four, across three professions and both sexes, all human.

## What this means that the measurements did not

**Elf, dwarf, hobbit and thief are now known**, which the measurement-only version listed as
unknown. They come from the same code paths as the measured ones, so they are as reliable as the
verification above, with the caveat that no elf, dwarf, hobbit or thief was actually created to
confirm them.

**Hobbit is the only race with a penalty.** `STR-5` for `CHA+10`, which makes it a trade rather than
a bonus.

**Thief has no unique term.** It sets `[-0x1c] = 10`, the same slot and value fighter uses for one
of its two bonuses, so a thief gets `AGI+10` and nothing else. That is why thief is the profession
with the least distinctive profile.

## A wrong mapping I had to discard

My first pass read the application order as STR, AGI, CHARISMA, WISDOM, STAMINA, and predicted
`WIS+5` for a human fighter where the data says `INT+5`. The measured characters are what caught it,
and the corrected mapping was then checked against all four rather than argued from the
instruction order. The record's physical field order (`0xcde62`, `66`, `6a`, `6e`, `72`, `76`,
`7a`) is not the order the adds appear in.

## The allocation, which is 30 points and not 90

The allocator is `0xec340`. It is the routine that runs before any of the choice branches, and it
holds the budget and both bounds.

```asm
ec340  push ebp
ec341  mov ebp, esp
ec343  sub esp, 0x4c
ec349  mov edi, [ebp+0x8]
ec34c  sub eax, eax
ec34e  mov [ebp-0x4], eax        ; the state counter
ec351  mov esi, 0x1e             ; 30 points to allocate
```

And the two bounds, in the increment and decrement paths for strength. The other five stats repeat
the same shape at `0xec7be`, `0xec8fd`, `0xeca3c`, `0xecb7b` and `0xeccbd`:

```asm
ec681  mov edx, [eax+0xcde62]   ; current STRENGTH
ec687  cmp edx, 0x19             ; 25
ec68a  je  refuse                ; cannot raise past 25
ec68c  and esi, esi
ec68e  je  refuse                ; no points remaining
ec690  inc [eax+0xcde62]
ec696  dec esi                   ; spend one

ec6b3  cmp eax, 0xa              ; 10
ec6b6  je  refuse                ; cannot lower below the base
ec6bc  cmp esi, 0x1e             ; 30
ec6bf  je  refuse                ; cannot refund when nothing is spent
ec6c5  dec [edx+0xcde62]
ec6cb  inc esi                   ; refund one
```

| question | answer |
|---|---|
| points to allocate | **30** (`0x1e`) |
| per-stat maximum | **25** (`0x19`) |
| per-stat minimum | **10** (`0xa`) |

### The 90 in the documentation is the total, not the budget

Six attributes start at **10 each**, which is 60. The player allocates **30** on top. That is 90 in
total, and 90 is the number `docs/quickstart.md` and `docs/save-files.md` call the points to spend.

The two are consistent, and the phrasing in both pages is loose rather than wrong.

Checked against the worked example in `docs/save-files.md`, which entered 20, 15, 20, 15, 10, 10:

```
sum                = 90    matches the documented total
spent above base   = 30    exactly the budget in 0xec351
range              = 10..20, inside the 10..25 bounds
```

**A stat cannot take everything.** The cap of 25 means the most one attribute can absorb is 15 of
the 30 points, so at least 15 must go elsewhere. That answers the question this section previously
left open.

### A caveat on the four measured characters

All four on `saves/modifier_test.hdm` were entered at exactly 10 each, so **they spent none of the
30 points**. They confirm the modifier arithmetic and say nothing about allocation. The allocation
model above rests on the `save-files.md` case and on the code, not on those four.

## `0xcde4d` is the points spent

The field is zeroed at `0xec34e` when the allocator starts, incremented implicitly by `dec esi` on
each spend, and then **required to be non-zero** before the profession branch will accept:

```asm
ed632  cmp [edx+0xcde4d], 0x0
ed639  jne  proceed
ed63b  mov [ebp-0x4], 0x9      ; bounce back to state 9
```

So the game refuses to let the player leave the allocation screen without spending at least one
point. That was an open question and the answer is in three instructions.

## The starting kit, which is constant

The modifier arithmetic above is per choice. The rest of a fresh character is not: it is the same
for every race, sex and profession measured.

| field | value |
|---|---|
| `GOLD` | 400 |
| `FOOD` | 40000, which displays as 400 because it is stored times 100 |
| `HP`, `MHP` | 400, 400 |
| `MAGIC` | 65 |
| `ERA` | 2 |
| carried items | one cloth armour, one dagger, bare hands |
| `R_ARMOUR`, `R_WEAPON` | `A` |
| `SKIN`, `CLOTH`, `HAND`, `DAGGER` | 1 each |
| `PLAYER_X`, `PLAYER_Y` | 20, 20 |
| `SEED` | 80 |

**A wizard starts with the same cloth and dagger as a fighter.** `WAND`, `STAFF`, `RING` and `GEM`
are zero for all four measured characters, so no magic item is issued at creation.

### Equipping is a separate step

A new character holds the cloth and dagger but has neither equipped. Two commands equip them, and
the effect on the record is two bytes:

| command | field | before | after |
|---|---|---|---|
| `W` then `B` (wear) | `R_ARMOUR` `0xcdea1` | `A` (65) | `B` (66) |
| `R` then `B` (ready) | `R_WEAPON` `0xcdebe` | `A` (65) | `B` (66) |

`A` is an item code, not "nothing". Equipping changes combat statistics, so a reimplementation that
starts a character fully equipped is not faithful. `docs/equipment-thresholds.md` records that
strength gates armour and agility gates weapons, and that those numbers are not stored literally in
`ENCHANT.EXP`.

## Related

- `docs/save-files.md`: the roster format and a worked creation walkthrough
- `docs/inside-a-turn.md`: the record layout around HP, corrected there
- `docs/meta-analysis-review.md`: the earlier measurement-only decomposition
- `saves/modifier_test.hdm`: the four-character measurement disk

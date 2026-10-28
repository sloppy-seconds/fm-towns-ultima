# The memory layout, derived from live memory

Re-deriving the character record against a running game, after `save-vs-memory.md` established that the
roster format string does not describe the in-memory struct. This page records what is verified, what the
deltas are, and where the accounting does not yet close.

## Method

`PAU` the VM so the record stops changing, then `MD 14:0xcde40` onward. **Pausing is essential**: without it
the record flips between its loaded contents and `FF` fill, observed at one sample in six, because the game
re-reads it continuously.

## Verified against the game's own display

These four are the strongest evidence on this page, because the player read them off the status screen and
they were then found in memory at four consecutive addresses.

| field | screen | address | note |
|---|---|---|---|
| `HP` | 400 | `0xcde85` | **WRONG, corrected: HP is `0xcde81`, `0xcde85` is max HP.** See [hp-and-damage.md](hp-and-damage.md) |
| `EXPERIENCE` | 21 | `0xcde89` | the screen labels this `E` |
| `FOOD` | 377 | `0xcde8d` | 37735 in memory, fixed point times 100, truncated on screen |
| `GOLD` | 235 | `0xcde91` | |

## Verified against movement

One west step, no other action: `PLAYER_X` 36 to 35, `PLAYER_Y` unchanged. So:

| field | address |
|---|---|
| `PLAYER_X` | `0xcdf6b` |
| `PLAYER_Y` | `0xcdf6f` |

## Read from memory while paused

Values present and matching the format string's identity, though not independently verified:

```
0xcde4e  79        NAME, the second character of "GO"
0xcde5e  1         SPID
0xcde62  30        STRENGTH
0xcde66  30        AGILITY
0xcde6a  30        STAMINA
0xcde6e  10        CHARISMA
0xcde72  10        WISDOM
0xcde76  15        INTELLIGENCE
0xcde7a  "HFMA"    RACE, PROFESSION, SEX
0xcde81  400
0xcde85  400       HP
0xcde89  21        EXPERIENCE
0xcde8d  37735     FOOD
0xcde91  235       GOLD
0xcdf53  148
0xcdf6b  34        PLAYER_X
0xcdf6f  23        PLAYER_Y
0xcdf7f  80
0xcdf9f  47
0xcdfa3  28
```

## The deltas, and where they come from

> **CORRECTION: the −4 is not a mystery and `MAGIC` is not a byte.** Both are explained below, from a
> savestate and the format block, and neither needed a played character.

**The layout is exact from `0xcde54` through `TOOLS`, with %c=1 and %d=4.** Start the model at
`0xcde54`, skip the two leading oddities in the block (`=%c`, and `(%d)NAME=%s`, which is two
specifiers in one string and is **not a struct field**), and walk the rest. Fourteen anchors then land
exactly, in one state:

| field | address | value (live.state) |
|---|---|---|
| `STRENGTH` | `0xcde62` | 20 |
| `AGILITY` | `0xcde66` | 25 |
| `INTELLIGENCE` | `0xcde76` | 10 |
| `RACE` | `0xcde7a` | 69, `E` |
| `PROFESSION` | `0xcde7b` | 70, `F` |
| `SEX` | `0xcde7c` | 77, `M` |
| `MAGIC` | `0xcde7d` | 65 |
| `HP` | `0xcde81` | 216 |
| `MHP` | `0xcde85` | 400 |
| `EXPERIENCE` | `0xcde89` | 10 |
| `FOOD` | `0xcde8d` | 39460 |
| `GOLD` | `0xcde91` | 431 |
| `KEY` | `0xcde95` | 0 |
| `ERA` | `0xcde99` | 2 |
| `TOOLS` | `0xcde9d` | 0 |

**So the −4 comes from `NAME`.** `fieldmap.js` walks the same block but counts `(%d)NAME=%s` as a
4-byte field, which pushes everything after it four bytes late. The record does not have that field.

**`MAGIC` is a dword at `0xcde7d`, and that closes the `HFMA` puzzle.** The four bytes at `0xcde7a` read
as `E F M A` on this character and `H F M A` on the earlier one. Only the first three are
`RACE`/`PROFESSION`/`SEX`. The fourth is the low byte of `MAGIC`, which is 65, and 65 is `A`. A
dword whose value happens to be an ASCII letter looked like a fourth character.

**That also explains "`MAGIC` reads as 400".** It does, at the address the format string gives, because
`0xcde81` is `HP` and the character was at full health. `MAGIC` is at `0xcde7d` and reads 65.

**What this does not fix.** Adding the same model up to `PLAYER_X` gives `0xcdf67`, and the observed
address is `0xcdf6b`, so **one 4-byte field still has to be added between `TOOLS` and `PLAYER_X`**.

## The item block is bounded on both sides, and the arithmetic closes

`TOOLS` at `0xcde9d` and `MAP` at `0xcdf53` are both confirmed addresses, one on each side of every
item count. The span between them is **178 bytes**:

```
0xcdf53 - (0xcde9d + 4) = 0xb2 = 178
```

The format block between `TOOLS` and `MAP` has **46 entries**: 35 equipment and quest items, then the
11 spells from `NONE` to `SCORE`. Forty-six dwords is 184 bytes, which is six too many, and
**44 dwords plus the two `%c` fields as single bytes is exactly 178**. So the widths are determined by
the budget even though no state has an item count to test them against: `R_ARMOUR` and `R_WEAPON`
occupy one byte each, and every other field between them is a dword.

That puts the whole item block on fixed addresses, and the missing 4 bytes is *after* `MAP`, between
it and `PLAYER_X`, where it does no damage to any item address.

**One anomaly, recorded rather than smoothed.** Under that decomposition `SKIN` is a dword at
`0xcdea3` and `live.state` reads `0x01000000` there, which is not a plausible skin index, while the
byte at `0xcdea6` is `1`. Either `SKIN` sits at a different offset than the budget implies, or the
value is stored in a form this reading does not capture. **Unresolved**, and it is the one thing that
stops the item table from being finished.

**No artefact on disk can settle it.** All 29 savestates and the save disk's roster were checked: every
character has **zero** in every item field (`TORCHES`, `KEY`, `GEM`, `ANKH`, `SKULL_KEY` and the rest),
so there is nothing to match against. A character holding one item would fix `SKIN` and the item
addresses in the same reading.

## The deltas and what they mean

`fieldmap.js` predicts addresses from the format string. Comparing:

| field | fieldmap | observed | delta |
|---|---|---|---|
| `STRENGTH` | `0xcde66` | `0xcde62` | **−4** |
| `HP` | `0xcde85` | `0xcde85` | 0 |
| `EXPERIENCE` | `0xcde8d` | `0xcde89` | **−4** |
| `FOOD` | `0xcde91` | `0xcde8d` | **−4** |
| `GOLD` | `0xcde95` | `0xcde91` | **−4** |
| `MAP` | `0xcdf57` | `0xcdf53` | **−4** |
| `PLAYER_X` | `0xcdf6b` | `0xcdf6b` | **0** |
| `PLAYER_Y` | `0xcdf6f` | `0xcdf6f` | **0** |

**So the record is 4 bytes early through `MAP`, and back to the predicted position by `PLAYER_X`.** Something
between `MAP` and `PLAYER_X` is 4 bytes wider in memory than the format string implies.

That is why the three anchors in `fieldmap.js` all passed. `MAP`, `PLAYER_X` and `PLAYER_Y` sit on opposite
sides of the compensating field, and two of them land on zero delta. **A layout that shifts early and returns
late will pass any set of anchors placed after the return.**

## What the 4 bytes are: two candidates, neither proven

**Removed early:** `MHP` is in the roster with `MHP=400`, but the address the format string gives it holds
`EXPERIENCE=21`. `MHP` is not in the struct.

**Added later:** the span `MAP` to `PLAYER_X` is 24 bytes where the format string has 20 for five fields. There
is a sixth field there.

## Where the accounting does not close

Adding those two gives zero net by `PLAYER_X`, which matches observation. But extending the sum to `WORLD`
does not work:

```
PLAYER_Y 0xcdf6f to WORLD 0xcdf7f = 16 bytes = 4 fields
format string has 6 fields there: TORCH SPELL VEHICLE SEED FUEL FOUND
```

So two more fields are absent between `PLAYER_Y` and `WORLD`, and the cumulative delta at `WORLD` should be
−8, giving `0xcdf83`. The observed value is at `0xcdf7f`, which is −4 from that.

**One more field is unaccounted for.** The arithmetic does not close and this page does not pretend it does.

## `MAGIC` reads as 400, which is HP

At `0xcde81`, between `HFMA` and `HP`, memory holds 400. The roster says `MAGIC=65`. So either the value at
`0xcde81` is not `MAGIC`, or `MAGIC` is one byte rather than four and 400 is `HP` bleeding into the read.

**Unresolved.** Noting it because 400 appearing twice was mistaken for a read error earlier in the session
and it was not one.

## What this changes in the codebase

**`fieldmap.js` is wrong from `STRENGTH` onward, not from `EXPERIENCE`.** Both, in different directions, and
the net is zero by `PLAYER_X`.

Its `--check` mode cannot detect any of this, because it verifies that three anchors agree with a layout, and
here they do agree while the layout is wrong.

Every page that quotes a `fieldmap.js` offset between `STRENGTH` and `PLAYER_X` needs re-reading. The
shrine function, the consumable tick and the stat gain all touch that region.

## What would finish it

**Verify each field individually against the game's display.** `HP`, `EXPERIENCE`, `FOOD` and `GOLD` were done
that way. The remaining fields need the same: change one thing in game, observe the number change on screen,
find that number in memory.

That is slow and it is the only method that has not produced a wrong answer.

---

**[Save versus memory](save-vs-memory.md)** **[Record layout](record-layout.md)** **[Live session](live-session.md)**

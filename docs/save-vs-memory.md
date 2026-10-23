# The save format is not the memory layout

The single most consequential error in this project's field mapping, found by comparing four values the
game displays against the same four values in live memory. `fieldmap.js` derived the record layout from the
roster format string, and **the format string describes the save file, not the struct in memory.** They
differ.

## The measurement

Four numbers read off the game's own status screen by a human, matched against live memory via the emulator
console at `DS:0xcde85` onward:

| field | screen | live memory | address |
|---|---|---|---|
| HP | 400 | 400 | `0xcde85` |
| **E (Experience)** | **21** | **21** | **`0xcde89`** |
| food | 377 | **37750** | `0xcde8d` |
| gold | 235 | 235 | `0xcde91` |

Four independent values landing on four consecutive addresses is proof, and it is the first time this
project has verified the character record against the game's own display.

## The save file disagrees, and it is right about itself

The same character saved to `saves/probe_blank.hdm` gives:

```
NAME        GO
HP          400
MHP         400
EXPERIENCE  21
FOOD        37750
GOLD        235
MAGIC       65
```

**`EXPERIENCE=21`**, which is the screen's `E`. So `E` is Experience, and it sits where the format string puts
`MHP`.

## The conclusion

**`MHP` is a save-file field that is not in the in-memory record.** The format string lists it because it
must be written to disk. The struct omits it.

So from `EXPERIENCE` onward **every field is 4 bytes earlier in memory than `fieldmap.js` says**:

| field | fieldmap predicted | actual in memory |
|---|---|---|
| `EXPERIENCE` | `0xcde8d` | **`0xcde89`** |
| `FOOD` | `0xcde91` | **`0xcde8d`** |
| `GOLD` | `0xcde95` | **`0xcde91`** |
| and so on for everything after | | **−4 bytes** |

**`HP` at `0xcde85` and everything before it is correct**, because the omission is downstream of it.

## Why this was invisible for so long

`fieldmap.js` anchored on three fields that are **all after the omission point**: `MAP` at `0xcdf57`,
`PLAYER_X` at `0xcdf6b`, `PLAYER_Y` at `0xcdf6f`. Three anchors agreeing looked like proof, and it was proof
of a consistent layout that was consistently wrong.

**Anchoring on the wrong half of a structure cannot detect an error in the half you did not anchor.** The
fix is to anchor on both halves, or on something that spans the gap.

The map, player-position and world fields were verified against live memory during the same session and read
correctly at the format-string addresses. That is the remaining puzzle: if everything after `EXPERIENCE`
shifts by 4, `MAP` should not read correctly at `0xcdf57`. **It does, so some later field must absorb the 4
bytes back.** That is unresolved and is recorded below rather than papered over.

## `MAGIC` does not match either

The save says `MAGIC=65`. Live memory at `0xcde81` read 400, which equals `HP`. So the value read at
`0xcde81` is probably not `MAGIC`, and the `MAGIC` field is elsewhere or is one byte rather than four.

Consistent with everything above: the format string's ordering is a save-file ordering and does not
constrain memory.

## What this changes

**Every offset in `fieldmap.js` from `EXPERIENCE` onward is suspect and needs re-deriving against live
memory.** The tool's `--check` mode cannot catch this, because its three anchors are all in the affected
region and agree with each other.

The corrected approach, which worked here and is the one to use from now on:

**Read a value off the game's own display, then find that value in memory.** The display is ground truth for
what a field means. A format string is ground truth only for what a save file contains.

## What remains open

- **Where the 4 bytes come back.** `MAP` reads correctly at its format-string address, so something between
  `GOLD` and `MAP` must be four bytes wider in memory than the format string implies. The spell-count fields
  `NONE` through `SCORE` sit in that gap and are the candidates.
- **Where `MAGIC` actually lives.**
- **Whether other records have the same save-versus-memory divergence.** The shrine and stat-gain functions
  were read using `fieldmap.js` offsets, and anything they touch after `EXPERIENCE` inherits this error.

---

**[Record layout](record-layout.md)** **[Live session](live-session.md)** **[Roster reference](roster-reference.md)**

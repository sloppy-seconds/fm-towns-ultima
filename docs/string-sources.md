# Where the strings are

`tools/msgcallers.js` walks back from every `CALL 0xe6e90` (the text renderer, see
[text-renderer.md](text-renderer.md)) to the two `push` instructions that set up its
arguments, and classifies where the string pointer comes from.

This is the first map of the game's message sources. Before it, the text was known to be
"somewhere in RAM". Now the call sites are enumerated.

## Measured

226 calls to the renderer. Argument 2 by kind:

| kind | count |
|---|---|
| literal | **123** |
| register | 75 |
| immediate but not a decodable string | 15 |
| `push imm8` (argument-order artefact) | 6 |
| caller-supplied argument | 5 |
| table slot not holding a string | 2 |

**123 call sites pass a literal address.** Those are strings in the image, at known
offsets, each tied to the code that draws it.

## An error this tool made first, and what it looked like

The initial version took the *last* push before the call as argument 2. Pushes are collected
walking backwards, so the last one before the call is argument **1**, not 2. That made every
call report its text-window index (a small number like `7`) as a string pointer, which
surfaced as **216 implausible `imm8` hits** and only 8 registers.

The tell was the distribution: a real string-table argument is a pointer in the image, so
it cannot be an 8-bit immediate. Fixed by taking `pushes[1]`.

## What the literals actually are

The strings are stored **mixed**: ASCII, raw Shift-JIS, and `0xEB` glyph runs, in the same
pool, sometimes inside one logical string. Examples from the table:

| site | address | content |
|---|---|---|
| `0xe3f3d` | `0x1fc0` | `YASURAGI` |
| `0xe3f6f` | `0x1fcc` | `Voyger` |
| `0xe3fa1` | `0x1fd4` | `EB` run, 5 glyphs |
| `0xe400e` | `0x2008` | `EB` run, 2 glyphs |

Adjacent to those, also reachable as literals:

| address | content |
|---|---|
| `0x1f30` | `Theme of Sosaria` |
| `0x1f44` | `What's a fantastic fountain!` |
| `0x1f64` | `In a deep dungeon` |
| `0x1f78` | `Fight!Fight!Fight!` |
| `0x1f8c` | `Severe conflict` |
| `0x1f9c` | `Dark field` |
| `0x1fa8` | `Lord British` |
| `0x1fb8` | `Amem` |

Those are the **music track titles**, in English, as literals in the binary. They were not
previously known and they are directly extractable.

## Debug output strings

At `0xe9029` onwards, drawn by the renderer, in a cluster:

```
PLAYER_X =      0x21f0
PLAYER_Y =      0x2200
DUNGEON_X =     0x2218
DUNGEON_Y =     0x2218
GATE X=         0x222c
GATE Y=         0x2244
MAP X=          0x2230
MAP Y=          0x2230
TOWN / CASTLE / TOWER / DUNGEON   0x21d0
```

These are the **debug mode readouts**. The existence of a debug mode was established from
the Japanese mode-name strings in `debug-modes.md` but the readouts were not. This is
direct evidence of what `デバッグ・モ−ド` displays, and it confirms the field names
`PLAYER_X`, `PLAYER_Y` and the map type labels independently of the savestate.

There are also `CAN'T OPEN TIFF DATA` and similar error strings at `0x2250`.

## The `0xEB` runs: a known-answer attempt, which failed

The ship-name table puts an ASCII name and its `0xEB` twin adjacent, which looked like the
ground truth that nine statistical probes lacked. The attempt:

| ASCII | `EB` run | expected kana |
|---|---|---|
| `YASURAGI` | `4c 6e 6c 62 5c` (5) | ヤスラギ (4) |
| `Voyger` | `6d 5e 6c 6d` (4) | ボイジャー (5) |

**Lengths do not match in either direction**, and glyph `0x6d` would have to be both ボ and
ャ. **Verdict: NEGATIVE.** The ASCII name and the `EB` run are not a transliteration pair,
or the kana I assumed is wrong, or a glyph is not a mora.

Recording this so it is not retried: pairing ship names with their `EB` twins by
transliteration does not produce a consistent mapping.

## What this establishes and what it does not

**Established.** 123 literal string call sites with addresses. The music titles. The debug
readout strings. That the string pool mixes ASCII, Shift-JIS and `EB` runs.

**Not established.** What the `EB` runs mean. How many of the 123 are game dialogue as
opposed to UI labels and error text. Whether the 75 register-supplied calls resolve to
further strings.

**The useful consequence.** Extracting the ASCII and Shift-JIS literals is now a mechanical
job over a known address list, not a search. That is a real extraction win and it needs no
emulator.

---

**[Plan](plan.md)** **[The text renderer](text-renderer.md)** **[The font encoding](font-encoding.md)**

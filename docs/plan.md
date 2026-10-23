# Plan and current state

Where this project is, what is established, and what to do next. Rewritten to be a map rather than a
log of how the map was drawn. The per-item history lives in the subject pages, which is where it
belongs.

## The goal

Extract as much useful data and artwork as possible from the FM Towns Ultima II release, reproducibly
from the archive.org zip alone. Ultima II only.

## The two tracks

**Track A, static analysis.** Reading `ENCHANT.EXP` and the asset files with no emulator.
Deterministic, scriptable, and it runs without anyone watching. This is where almost all progress has
come from.

**Track B, runtime work.** Booting the game, taking savestates, measuring behaviour. Needs a human to
decide when to press a key.

## What is established

These are measured and have pages. Do not re-derive them.

| finding | page |
|---|---|
| Asset inventory is complete: 23 `GRAPH\*.TIF`, 14 `SOUND\*.SND`, 10 `.EUP`, 1 `.FMB`, 4 `A:\*.UT2` | [extraction.md](extraction.md) |
| Palette: indices 0 to 7, eight colours confirmed | [palette.md](palette.md) |
| `MAP2_*` is a **32,768-byte buffer, 256 x 128**; the file supplies rows 12 onward | [map-geometry.md](map-geometry.md) |
| Map cell: `v & 3` carries terrain, 4 classes | [cell-encoding.md](cell-encoding.md) |
| Character record base **`0xcde54`**, 339 bytes, 90 fields named | [record-layout.md](record-layout.md) |
| RNG is an LCG, `0x41c64e6d` / `0x3039`, state at `0xdfc78`, output 15 bits | [rng-helpers.md](rng-helpers.md) |
| `randRange(lo,hi)` is **inclusive both ends**; `randMod(n)` is `0..n` | [rng-helpers.md](rng-helpers.md) |
| `.SND` header layout; offset 12 is length in 15 of 15 files | [sound.md](sound.md) |
| Image loads at base `0x762d2` below `0xd0000`, **mirrored** above it | [mirrored-region.md](mirrored-region.md) |
| `tools/cfgwalk.js` gives 79,470 instruction boundaries in about two seconds | [cfgwalk.md](cfgwalk.md) |
| The text renderer parses Shift-JIS directly; no font table on the drawing path | [text-renderer.md](text-renderer.md) |
| Display text extracts cleanly as Shift-JIS | [game-text.md](game-text.md) |
| Ghidra is viable **with conditions** | [ghidra-viability.md](ghidra-viability.md) |

## Unattended work

[docs/overnight.md](overnight.md) is the queue for work that needs nobody watching: concrete units,
each with a stopping rule and a required commit. Start there when no human is available.

## What is open

Ordered by what it costs and what it is worth.

### 1. The remaining `randMod` functions (33 of 35 unread)

**Worth most, costs least, no blockers.** Grouping put the 85 `randMod` sites into 35 functions.
Two are read: the shrine/effect dispatcher at `0xf2cc0` and the consumable tick at `0xef440`. The
record layout is now solved, so any function read from here on can be written in field names
immediately rather than needing a second pass.

`tools/randgroups.js` lists them. Start with `0xf9c8c` (9 sites), `0xf3758` (6), then the 4s.

**Done when** the random-number-driven behaviour of the game is described rather than sampled.

### 2. The high bits of a map cell

`v & 3` is terrain, established against a shuffle control. The upper nibble has the largest
gain-over-shuffle of any field tested, so it carries real structure, but what it means is unknown.
Candidate: a variant or edge qualifier. See [cell-encoding.md](cell-encoding.md).

**This is the last substantive map question.** It is testable against the rendered map.

### 3. The `0xe4086` switch table

Not a table in the file, not a table at its mirrored runtime address, and not a `cs`-relative offset
with the observed segment base. Three explanations ruled out. See
[indirect-branches.md](indirect-branches.md) and [core-routines.md](core-routines.md).

### 4. The top-of-image runtime mapping

The mirror constant `0x4392d2` holds from `0xd0000` to about `0x104000` and then breaks. Neither it
nor a second candidate covers the tail. This blocks reading anything above `0x104000` at runtime,
including the printf output callback pointer at `0xdfc5c` and the 144 unresolved indirect branches.
See [indirect-branches.md](indirect-branches.md).

**This is a memory-layout question, not a game question.** Likely segmented, given the BIOS gateway
switches `fs` to segment `0x110`.

### 5. The `0xEB` glyph mapping: parked

One glyph of 54, measured on 3 percent of the data. Eleven approaches tried, all negative: no
character table, no code writing `0xEB`, no bitmap region with glyph structure, `GAI.TIF` and
`EXTRA.TIF` not fonts. The likely answer is that TownsOS supplies the glyphs.

**Recommendation: leave it.** It only names things, the display text already extracts, and the record
layout has now removed its only practical cost.

### 6. `WORLD*.UT2` layout

68,096 bytes, four files, no page documents it. Partly solved: **128-byte rows, 6 rows of data, then
68,000 bytes of zero**. Rows 0 and 1 hold grouped values 30 to 34 and row 2 holds values that look
like bitmasks (255, 224, 192, 64, 32). Details and the open questions are in
[overnight.md](overnight.md) item 1.

### 7. Track B, untouched

Nothing here has been attempted. All of it needs a human.

| item | needs |
|---|---|
| Which `ENEMY2` bank is which | a savestate on the overworld |
| Combat formula measurement | a character with known stats, then fighting |
| Equipment thresholds | a character at the boundary |
| Debug mode activation | input testing, or finding the flag |
| `WORLD*.UT2` contents | saves at different positions |
| The RNG seed at `0xdfc78` | a savestate during play, since both existing states are menus |
| The top-of-image mapping | a savestate, for the same reason |

**One Track B item is closable from Track A:** `saves/maxed_four.hdm` exists with known stats. If a
formula can be predicted from the code, one save file confirms it.

## Method rules this project has learned the hard way

Every one of these came from getting it wrong first.

- **Byte-plausible is not verified.** Measure, and state what the measurement does not prove.
- **A layout that fits its anchor and drifts by one field is wrong, and looks right.** Require three
  independent anchors to agree.
- **A fast tidy answer from a cache or a scan may be wrong.** The `cfgwalk` address cache gave a
  plausible rejection list and was dropping real sites.
- **An off-by-`0x20` between file offset and virtual address has bitten this project four times.** The
  image is header-stripped, so an offset in it is a virtual address.
- **Do not trust a search that assumes one base.** The top of the image is mirrored.
- **Do not trust a low `db` ratio as proof a disassembly is clean.** `ndisasm` mis-decodes
  `ff 34 bd <disp32>`, and a function can be 3 percent `db` and still misaligned from the middle.
- **Record negatives.** A failed probe is worth as much as a success.

## What this plan deliberately does not do

- No more statistical probes on the `0xEB` runs. Eleven approaches have failed.
- No decompiler as a substitute for finding code. Ghidra agreed with this project on every
  established address, but under-decodes by a factor of three without seeds. Use it to read code,
  not to find it.
- No attempt to make the FM Towns build behave like the DOS one. They are different games.

---

**[Open questions](open-questions.md)** **[All pages](index.md)**

# Open questions

What is still unknown, as items in the project's item format: state, autonomy, acceptance criteria and what
each is blocked by. `docs/plan-process.md` defines the vocabulary.

**This is a view of [plan.md](plan.md), which is the plan of record.** Where they disagree, `plan.md` wins.
The questions here are the ones that are not yet phases in the plan, plus the open parts of phases that are
only partly solved.

Answered and removed from this list: the statistics modifier question (see [save-files.md](save-files.md)),
and the `0xEB` character mapping, which turned out not to be in the executable at all (see
[eb-renderer.md](eb-renderer.md)).

---

## 1. `WORLD1-4.UT2` structure

**State:** NEEDS A DECISION · **Autonomy:** BLOCKED ON HUMAN

| field | value |
|---|---|
| autonomy | needs a save taken mid-game, which requires a person at the emulator |
| done when | the record layout of a populated world file is stated, or the question is closed as unanswerable from available evidence |
| blocked by | any character having entered the world. All four in the only save are at `MAP=0`, `WORLD=0` |

68,096 bytes each and all four are **byte-identical**, because all four characters in the only available
save have never entered the world. There is no populated world in the file to read.

Measured shape: 128-byte rows, 24 dwords each, six rows of data, 120 nonzero bytes total, then zero to the
end. Rows 1 and 0 are a **sorted/unsorted pair** and rows 2 and 3 are bitmask tables, which reads as
start-up scratch rather than world state. See [world-format.md](world-format.md).

**The decision:** the format needs a save taken mid-game. Either that happens, or this question stays
closed as unanswerable from available evidence. It should not be listed as simply "unread" any more.

## 2. Monster table: which `ENEMY2` tile is which creature

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | the names and the tile bank are both known, so the matching is static work |
| done when | a page maps each of the 64 tile slots to a creature name, or names the ones that cannot be resolved without runtime comparison |
| blocked by | nothing, though the frame grouping needs code that has not been found |

The names exist, in Japanese, and they are in the binary. Extracted from a savestate with
`tools/savetext.py`, in a contiguous table at `0x79377` onward: 商人 (merchant), 道化師 (jester), 衛兵
(guard), 放浪戦士 (wandering warrior), 悪の遊騎兵 (evil ranger), 僧兵 (warrior monk), 死霊使い
(necromancer), 魔法使い (wizard), 盗賊 (thief), オ−ク (orc), ゴブリン (goblin), ガ−ゴイル (gargoyle),
ネス湖の恐竜 (Loch Ness dinosaur), ドラゴンタ−トル (dragon turtle), ドラゴン (dragon), ウォ−ロック
(warlock).

Sixteen names, which is closer to the 25 the Codex lists than a bare tile count suggests.

The names are plain Shift-JIS. An earlier reading in this file said they were stored twice, once in a custom
font encoding and once in Shift-JIS, and that the encoding could be recovered by aligning the two. That was
**wrong** and has been removed.

> **CORRECTION: the "mora reading" explanation that used to sit here is also superseded.** It claimed the
> `0xEB` run was the reading in mora and the Shift-JIS the kanji display, which is why the lengths never
> matched. It is not: `0xEB` is a Shift-JIS lead byte, `[0xEB, code]` is one double-byte character, and the
> renderer passes the bytes unchanged to TownsOS, which owns the glyph shapes. The mapping is not in
> `ENCHANT.EXP` at all. See [eb-renderer.md](eb-renderer.md). Thirteen probes searched the executable for it
> and none could have succeeded.

Still open: which tile each name indexes.

The function at `0xe7b58` was not the answer, and is closed off. It was believed to index tiles by a map
value. A full disassembly from its real entry at `0xe7b38` shows it is a **scroll buffer**: a counter loops
sixteen times, each iteration shifting a 512-byte window through a source region and copying it to the next
slot of a `0x2000` bank. It moves buffers, it does not map a map byte to a tile. The four banks are real but
are working buffers. See [tile-loader.md](tile-loader.md). The map-index code is somewhere else and has not
been found.

Progress. The bank is **64 populated tiles of 512 bytes**, a flat 8x8 list with no grouping. The
[Ultima Codex bestiary](https://wiki.ultimacodex.com/wiki/Ultima_II_monster_data) names **20 creatures**
with FM Towns artwork and gives HP for each, which is a usable ordering signal because HP runs in a
power-of-two ladder: Goblin 5, Orc 16, Thief 32, Daemon and Sea serpent 64, Fighter 128, Pirate ship 160,
Devil 192, Wizard 224, Balron 255. Townsfolk and dungeon creatures have their own HP ranges.

What the wiki cannot settle: it lists 25 representative GIFs against 64 tiles, so 39 tiles are unaccounted
for and the frame grouping has to come from the code. The bestiary is a cross-check for names and ordering,
not a decoder.

## 3. `MAP2_1/2/3` layout

**State:** DONE for the geometry, OPEN for the cell high bits · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous, testable on file data with no runtime step |
| done when | the high nibble's meaning is established, or the neighbour-correlation tests are recorded negative with measurements |
| blocked by | nothing. The geometry half is already closed |

The loaded map is a **32,768-byte buffer**, exactly **256 rows of 128**. The file payload (31,232 bytes from
offset `0x800`) is the **last** part of it: it begins at buffer offset **1,536 = 128 x 12**, so the first
**12 rows are generated** at runtime, not stored.

That is why `31232 = 128 x 244` looked right and never rendered. Rendering from the payload start instead of
the buffer start shifts every row by exactly 12 cells, which destroys horizontal coherence and produces
noise. The width was 128 all along.

Rendered at the correct offset the map is immediately legible: water bands at `0x44`, terrain, a row of
buildings around rows 25 to 27, and a regular tiled grid at rows 36 to 39.

See [map-geometry.md](map-geometry.md). Render with `node tools/maprender.js`.

**Cell encoding: partly solved.** `v & 3` is spatially coherent at **84.6% horizontal and 77.8% vertical**
against a 25% chance baseline, so the **low two bits carry terrain** and there are **4 terrain classes**, not
64. The earlier "64-tile vocabulary" was the count of distinct byte values, which is a different thing.

The high bits correlate at 74 to 75% with themselves, above chance but well below `v & 3`. What they carry
is **still open**. See [cell-encoding.md](cell-encoding.md). This is plan item 2a.

## 4. `DUNMON` tile count meaning

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous, the banks are extracted and their sizes are exact |
| done when | a page states what indexes the 1,664, 416 and 104 tile banks, or records that the index is unreachable statically |
| blocked by | nothing |

Three banks of 1,664 / 416 / 104 tiles, and what indexes them is unread. Sizes are exact arithmetic:
`1664 = 104 x 16`, and 104 appears twice, so the relationship between the banks is probably a base and two
subsets rather than three independent lists.

## 5. `.SND` playback rate

**State:** OPEN · **Autonomy:** BLOCKED ON HUMAN

| field | value |
|---|---|
| autonomy | the rate is set at runtime by the EUPHONY driver, so reading the file cannot settle it |
| done when | the actual playback rate is measured, or the file states that only runtime can determine it |
| blocked by | a person listening to the running game, or a savestate of the driver state |

Whether 1960 Hz is real. The header layout is established ([sound.md](sound.md)); the rate is not in the
file.

## 6. `UT3/*.MP3` and `*.DG3` format

**State:** OPEN · **Autonomy:** AUTONOMOUS

| field | value |
|---|---|
| autonomy | autonomous, this is file-format inference from bytes already local |
| done when | the record layout of either format is stated, or both are recorded as unreadable without the code that loads them |
| blocked by | nothing |

Neither format is MPEG audio despite the extension on `.MP3`, which is established. What they actually hold
is not.

## 7. U2 combat formulas

**State:** OPEN · **Autonomy:** PARTLY AUTONOMOUS

| field | value |
|---|---|
| autonomy | the arithmetic can be read statically, verifying it needs a controlled fight |
| done when | to-hit and damage are stated exactly, and marked read-versus-verified |
| blocked by | verification needs a human fighting with known stats. The reading half does not |

Not found by byte pattern, because the FM Towns build is 32-bit compiler output where the 6502 arithmetic is
no longer recognisable.

Two Ultima **III** reference implementations are cloned into `references/` (see [references.md](references.md))
and they do give U3's formulas: to-hit rolls uniform on `[0, armour+16]` and succeeds below 8, and monster
damage rolls against base HP divided by eight plus max HP divided by a hundred.

**None of that is U2's formula.** U3 and U2 are different games. Those numbers are a hint about where to look
and what a plausible answer looks like, not a result. Establishing U2's combat maths needs a measurement
against U2 data, which in practice means a controlled in-game test with a known `AGILITY` and `STRENGTH`.

The RNG is now understood ([rng-helpers.md](rng-helpers.md)) and the record layout is named
([record-layout.md](record-layout.md)), so the reading half is cheaper than it was. This is plan item 4b.

## Appendix: what the probes used

The tools and methods these questions were attacked with, kept because a failed probe is worth as much as a
success:

- `tools/savetext.py` extracts Shift-JIS and ASCII strings from a savestate
- `tools/fnstrings.js` lists the strings a function references, which names most routines
- `tools/callgraph.js` builds caller to callee edges
- `tools/sweep.js --check` answers whether an address is a real instruction boundary
- `tools/fieldmap.js --resolve` names a record offset
- `tools/randgroups.js` groups the `randMod` call sites by enclosing function

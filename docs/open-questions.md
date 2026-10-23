# Open questions

What is still unknown, ordered by cost to resolve. The statistics modifier
question that used to head this list is answered: see
[save-files.md](save-files.md).

1. **`WORLD1-4.UT2` structure.** 68,096 bytes each, almost entirely zeros on a
   fresh character. Slot pairing is confirmed but the contents are unread.
   Diffing saves taken at different positions would locate the coordinate and
   map-id fields, which is what a teleport feature would need.
   See [save-files.md](save-files.md).
2. **Monster table.** Which `ENEMY2` tile is which creature, and frames per
   creature.

   **The names exist, in Japanese, and they are in the binary.** Extracted from a
   savestate with `tools/savetext.py`, in a contiguous table at `0x79377` onward:
   商人 (merchant), 道化師 (jester), 衛兵 (guard), 放浪戦士 (wandering warrior),
   悪の遊騎兵 (evil ranger), 僧兵 (warrior monk), 死霊使い (necromancer),
   魔法使い (wizard), 盗賊 (thief), オ−ク (orc), ゴブリン (goblin),
   ガ−ゴイル (gargoyle), ネス湖の恐竜 (Loch Ness dinosaur),
   ドラゴンタ−トル (dragon turtle), ドラゴン (dragon), ウォ−ロック (warlock).

   Sixteen names, which is closer to the 25 the Codex lists than a bare tile count
   suggests.

   The names are plain Shift-JIS. An earlier reading in this file said they were
   stored twice, once in a custom font encoding and once in Shift-JIS, and that the
   encoding could be recovered by aligning the two. That was **wrong** and has been
   removed. Nine probes are recorded in `font-encoding.md`, and the mechanism is now
   partly understood: the `0xEB` run is the *reading* in mora and the Shift-JIS is the
   kanji display form, which is why their lengths never match. Eight glyphs are
   established, not enough to decode arbitrary text. Do not retry the failed probes.

   Still open: which tile each name indexes.

   **The function at `0xe7b58` was not the answer, and is now closed off.** It was
   believed to index tiles by a map value. A full disassembly from its real entry at
   `0xe7b38` shows it is a **scroll buffer**: a counter loops sixteen times, each
   iteration shifting a 512-byte window through a source region and copying it to the
   next slot of a `0x2000` bank. It moves buffers, it does not map a map byte to a tile.
   The four banks are real but are working buffers. See [tile-loader.md](tile-loader.md).
   The map-index code is somewhere else and has not been found.

   Progress. The bank is **64 populated tiles of 512 bytes**, a flat 8x8 list with
   no grouping. The [Ultima Codex bestiary](https://wiki.ultimacodex.com/wiki/Ultima_II_monster_data)
   names **20 creatures** with FM Towns artwork and gives HP for each, which is a
   usable ordering signal because HP runs in a power-of-two ladder: Goblin 5, Orc
   16, Thief 32, Daemon and Sea serpent 64, Fighter 128, Pirate ship 160, Devil 192,
   Wizard 224, Balron 255. Townsfolk and dungeon creatures have their own HP ranges.

   What the wiki cannot settle: it lists 25 representative GIFs against 64 tiles, so
   39 tiles are unaccounted for and the frame grouping has to come from the code.
   The bestiary is a cross-check for names and ordering, not a decoder.
3. **`MAP2_1/2/3` layout: SOLVED.** The loaded map is a **32,768-byte buffer**, exactly
   **256 rows of 128**. The file payload (31,232 bytes from offset `0x800`) is the **last**
   part of it: it begins at buffer offset **1,536 = 128 x 12**, so the first **12 rows are
   generated** at runtime, not stored.

   That is why `31232 = 128 x 244` looked right and never rendered. Rendering from the
   payload start instead of the buffer start shifts every row by exactly 12 cells, which
   destroys horizontal coherence and produces noise. The width was 128 all along.

   Rendered at the correct offset the map is immediately legible: water bands at `0x44`,
   terrain, a row of buildings around rows 25 to 27, and a regular tiled grid at rows 36 to 39.

   See [map-geometry.md](map-geometry.md). Render with `node tools/maprender.js`.

   **Still open:** the cell encoding. Values 0 to `0x77` with both nibbles in 0 to 7, and
   whether a cell is one byte or two fields is unresolved.
4. **`DUNMON` tile count meaning.** 1,664 / 416 / 104 tiles, and what indexes them.
5. **`.SND` playback rate.** Whether 1960 Hz is real.
6. **`UT3/*.MP3` and `*.DG3` format.**
7. **U2 combat formulas.** Not found by byte pattern, because the FM Towns build is
   32-bit compiler output where the 6502 arithmetic is no longer recognisable.

   Two Ultima **III** reference implementations are cloned into `references/` (see
   [references.md](references.md)) and they do give U3's formulas: to-hit rolls
   uniform on `[0, armour+16]` and succeeds below 8, and monster damage rolls against
   base HP divided by eight plus max HP divided by a hundred.

   **None of that is U2's formula.** U3 and U2 are different games. Those numbers are
   a hint about where to look and what a plausible answer looks like, not a result.
   Establishing U2's combat maths needs a measurement against U2 data, which in
   practice means a controlled in-game test with a known `AGILITY` and `STRENGTH`.

Resolved or closed since this list was first written: the palette is settled
(the art uses indices 0-7 and those eight entries are confirmed against eight
screenshots, see 6.24), the asset inventory is proved complete (section 4), and
Ultima II saving works, with the roster format documented in 8.7.

---

## Appendix: what the probes used

| Script | Purpose |
|---|---|
| `run.sh` | Launch in Tsugaru |
| `extract-u2.js` | Ultima II assets: maps, tiles, title art, sound effects |
| `tools/cd.js` | Shared lib: disc reader, ISO walk, PNG and WAV writers |
| `tools/probe-scan.js` | Probes 1-3, palette hunt, port scan, `.EUP` check |
| `tools/tilesheet.js` | Render a tile bank to a labelled PNG grid |
| `tools/disasm-export.js` | Dump the `MP` payload and run `ndisasm` |

---

**[Save files and the roster format](save-files.md)** **[The save disk](save-disk.md)**

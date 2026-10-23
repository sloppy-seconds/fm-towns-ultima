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
   creature. No name strings to anchor on in the binary, so this needs the code
   that indexes the bank, not a string search.

   Progress. The bank is **64 populated tiles of 512 bytes**, a flat 8x8 list with
   no grouping. The [Ultima Codex bestiary](https://wiki.ultimacodex.com/wiki/Ultima_II_monster_data)
   names **20 creatures** with FM Towns artwork and gives HP for each, which is a
   usable ordering signal because HP runs in a power-of-two ladder: Goblin 5, Orc
   16, Thief 32, Daemon and Sea serpent 64, Fighter 128, Pirate ship 160, Devil 192,
   Wizard 224, Balron 255. Townsfolk and dungeon creatures have their own HP ranges.

   What the wiki cannot settle: it lists 25 representative GIFs against 64 tiles, so
   39 tiles are unaccounted for and the frame grouping has to come from the code.
   The bestiary is a cross-check for names and ordering, not a decoder.
3. **`MAP2_1/2/3` layout.** Character-per-cell confirmed, geometry not.
4. **`DUNMON` tile count meaning.** 1,664 / 416 / 104 tiles, and what indexes them.
5. **`.SND` playback rate.** Whether 1960 Hz is real.
6. **`UT3/*.MP3` and `*.DG3` format.**

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

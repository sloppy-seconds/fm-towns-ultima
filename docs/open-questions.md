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
   creature. No name strings to anchor on.
3. **`MAP2_1/2/3` layout.** Character-per-cell confirmed, geometry not.
4. **`DUNMON` tile count meaning.** 1,664 / 416 / 104 tiles, and what indexes them.
5. **`.SND` playback rate.** Whether 1960 Hz is real.
6. **`UT3/*.MP3` and `*.DG3` format.**
7. **`WORLD1-4.UT2` structure.** 68,096 bytes each, mostly zero on a fresh
   character. Slot pairing is confirmed but the contents are unread. Diffing
   saves taken at different positions would locate the coordinate and map-id
   fields, which is what a teleport feature would need.
8. **A standalone, server-free save editor.** The roster is plain ASCII inside
   a FAT12 image, and FAT12 parsing is a few dozen lines of JavaScript. A single
   static `.html` page could therefore open an `.hdm`, edit all four character
   slots, and download the modified image, with no backend at all. That would
   allow hosting on GitHub Pages so anyone could fix their own save disk in a
   browser using only the file from the archive, which is a much better
   distribution story than requiring the container. The container editor in
   `container/editor.html` is the reference for the UI and works out the field
   list, defaults and validation rules. Work needed: FAT12 read and write in
   the browser (mirroring `tools/savedisk.js`), file input via the File API,
   output via a Blob download, and care never to touch the original file in
   place. Nothing here is blocked on game knowledge, only on porting code that
   already exists and is tested.

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

# `WORLD*.UT2`: what the only available save can and cannot tell us

68,096 bytes, four files, and no page documented them. This page records what is measured, and then the
finding that matters: **the save we have cannot answer the format question**, and a constant in our own
tooling is wrong.

## Measured shape

From `saves/maxed_four.hdm`, using `tools/worldfmt.js`:

| finding | value |
|---|---|
| size | 68,096 bytes, all four **byte-identical** |
| row pitch | **128 bytes** |
| values per row | **24 dwords**, then 32 bytes of zero |
| rows with data | **6**, that is 768 bytes |
| nonzero bytes in the whole file | **120** |
| all nonzero bytes | at offset **0 mod 4** |
| last nonzero byte | `0x2dc` |
| all four files identical | **yes** |

## The strongest structural fact

**Row 1 is exactly row 0 sorted ascending.** Verified:

```
row0  30 31 32 33 34 30 31 32 33 34 30 31 33 34 30 31 32 33 34 30 31 32 33 34
row1  30 30 30 30 30 31 31 31 31 31 32 32 32 32 33 33 33 33 33 34 34 34 34 34
```

`JSON.stringify(row1) === JSON.stringify([...row0].sort())` returns true. The multiset is identical:
`30` five times, `31` five times, `32` four times, `33` five times, `34` five times.

Two rows where one is the sorted form of the other is **scratch space for a sort**, not stored state.
A save file does not persist an unsorted list beside its sorted copy and leave both there.

Row 5 is the constant `2` in all 24 slots. Row 4 is all zero.

## Rows 2 and 3 are bitmask tables

```
row2  192 224 255 32 64 255 255 64 192 192 255 64 192 255 32 224 255 32 32 192 64 64 255 32
row3  56 248 60 252 52 224 60 52 56 248 60 52 56 60 252 248 60 252 252 56 60 60 224 252
```

Every distinct value in row 2 is a **contiguous run of ones**:

```
32  = 00100000   one bit
64  = 01000000   one bit
192 = 11000000   two bits
224 = 11100000   three bits
255 = 11111111   eight bits
```

Row 3 holds runs that grow a bit at a time (`52` = `00110100`, `56` = `00111000`, `60` = `00111100`)
plus the same high-end family (`224`, `248`, `252`).

**This is a shift or mask table.** It is not terrain, not a tile index, and not a coordinate. Combined
with the sorted-pair finding, the leading reading is that these six rows are a **rendering or geometry
scratch area written by the game at start-up**, not world state.

## The finding that closes the question for now

**All four `WORLD*.UT2` files are byte-identical.** And the roster explains why:

```
slot0  NAME=MAXFIGHT   MAP=0  MAP_X=0  PLAYER_X=20  PLAYER_Y=20  WORLD=0
slot1  NAME=MAXCLERIC  MAP=0  MAP_X=0  PLAYER_X=20  PLAYER_Y=20  WORLD=0
slot2  NAME=MAXWIZARD  MAP=0  MAP_X=0  PLAYER_X=20  PLAYER_Y=20  WORLD=0
slot3  NAME=MAXTHIEF   MAP=0  MAP_X=0  PLAYER_X=20  PLAYER_Y=20  WORLD=0
```

**Every character is at `MAP=0`, `WORLD=0`, and has never entered the world.** A save where nobody has
played has no world state to store, so identical blank world files are exactly what should be expected.

**Therefore this save cannot answer the world file format.** No amount of analysis of these bytes will
produce the layout of a populated world, because there is no populated world in the file.

That is a bounded negative and it is more useful than another round of speculation: the question needs a
save taken mid-game, which is Track B work.

## A constant in our own tooling is wrong

`savedisk.js` defines `WORLD_FILL_FROM = 61952`, and `newWorld()` fills `0xe5` from there to
`0x109ff`. Comparing against the game's own file:

```
offset     saved file          our newWorld()
0xf200     00000000 00000000   e5e5e5e5 e5e5e5e5
```

**The game leaves that region zero. Our generator wrote `0xe5` into it.**

**FIXED.** The cause is visible now: **`0xe5` is the fill for unused space on the DISK**, which is a
different thing from the contents of a file. The value leaked from the FAT layer into file content. The
game never writes `0xe5` inside a world file.

`WORLD_FILL_LEN` is now **0** in both `tools/savedisk.js` and `web/fat12.js`, so `newWorld()` returns all
zeros, which is what the game produces. Asserted in `tools/test-savedisk.js` so it cannot regress.

This mattered beyond this page: **the browser editor** and `tools/makesave.js` both generate world files
through this function, so every generated save carried 6,144 bytes the game never writes. No reported
failure, but it is now correct rather than plausible.

One thing the generator still does not reproduce: the game's own files carry **120 nonzero bytes in the
first 768 bytes**, which is start-up scratch the game writes itself. A generated file is those 120 bytes
shorter in content and the game appears to accept it, because it is blank-world scratch.

## What is still open, and what would settle it

| question | needs |
|---|---|
| the layout of a populated world | a save taken after entering the world (Track B) |
| whether rows 0 to 5 persist or are rebuilt each load | two saves at different map positions |
| what rows 2 and 3 are for | a save where they differ, or a caller search for `0x0` to `0x2dc` |

## What this page does not claim

- Not that the format is understood. Six rows of a scratch area is not a world.
- Not that 68,096 factors into a map. It does not: 68,096 = 532 x 128, and neither 128x256 nor 256x256
  divides it cleanly, so there is no simple tile array filling the file.
- Not that the file is useless. It is a real artefact that the game writes, and its structure is now
  partly measured. It just is not a *populated* world.

---

**[Save files](save-files.md)** **[Overnight queue](overnight.md)** **[Plan](plan.md)**

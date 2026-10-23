# The world save file, from a play-and-save diff

A diff between a blank `WORLD1.UT2` and one written after play. This is the
first time the world format has been measured rather than guessed, because every
earlier attempt started from an untouched file where nothing had been written.

## How the two states were produced

The disk was built empty, with `savedisk.js newdisk`, so it contained no files at
all. Anything on it afterwards came from the game.

1. Boot the disc with that empty disk in drive A. Launch Ultima II.
2. **Generate Character**, which makes the character and a world file.
3. Capture the disk. This is the baseline.
4. **Journey Onward**, walk, fight, then **Q** to save.
5. Capture again and diff.

Both captures are 68,096 bytes, so the file is fixed size.

| state | sha256 | non-zero bytes |
|---|---|---|
| blank, after character creation | `b4adb1f1…` | 120 |
| after playing and saving | `9ac9ba73…` | 192 |

**Only 72 bytes differ.** A whole session of walking and fighting touches less
than 0.11% of the file.

## What a blank world file contains

Not `0xE5` fill, which is what an *untouched* file from the original distribution
has. The game writes zeros with a small header:

```
+0x000  uint32 30 31 32 33 34 30 31 32 33 34 30 31 33 34 ...   (values 30..34)
```

120 non-zero bytes in total, all in the first 733, and every value is in the
range 30 to 34 (`0x1e` to `0x22`). Runs of five ascending values, repeating.

These look like per-region default indices rather than player state, since they
are present before the player has done anything.

## What changes when you play

The 72 changed bytes all sit at offsets that are **multiples of 4**, in five
blocks of twelve 32-bit values each. Block stride is `0x80` (128 bytes), of which
48 are used and 80 are zero padding.

```
0x600  [31, 54, 50, 54, 55, 50, 23, 18, 43, 17, 33, 32]
0x680  [32, 50, 16,  6, 48, 17,  9,  5, 24, 16, 30, 31]
0x700  [20, 20, 90, 80, 80, 10, 20, 10, 10, 80, 180, 10]
0x780  [252, 252, 240, 52, 52, 48, 252, 48, 48, 52, 56, 48]
0x880  [2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2]
```

**Twelve entries per block.** That is the party size, and it is the strongest
structural signal in the file. Each block is one field held for all twelve party
members, not one record per member.

Reading the values:

- `0x880` is uniformly `2`, a constant per member. A class or status code.
- `0x700` is all multiples of 10, up to 180. `[20,20,90,80,80,10,20,10,10,80,180,10]`
  divided by ten gives small numbers, so this is plausibly a scaled statistic.
- `0x780` holds `252` and `240` alongside `48`-`56`. `252` is `0xFC`, which in the
  map format is the highest tile byte, so these may be position or tile values
  rather than plain counts.
- `0x600` and `0x680` are mixed small values in the 5 to 55 range.

**What is not established:** which block is which field. Naming them would need
either a second save from a different position, or a controlled change (walk ten
steps, save, diff again) to see which block moves.

## The player position is at slots 8 and 9 of blocks 0x600 and 0x680

Three saves taken in sequence, each after one deliberate action, settle this.

| save | action | `0x600` x,y | `0x680` x,y | other blocks |
|---|---|---|---|---|
| blank | character created | 0, 0 | 0, 0 | all zero |
| after play | wandered, fought | 43, 17 | 24, 16 | populated, static |
| move right | a few tiles east | **39**, 17 | **22**, 16 | unchanged |
| move up | a few tiles north | 39, **14** | 22, **13** | unchanged |

Reading it:

- Moving east changed **slot 8** and left slot 9 alone.
- Moving north changed **slot 9** and left slot 8 alone.
- So slot 8 is one axis and slot 9 the other.
- Both `0x600` and `0x680` moved, by **identical amounts** on both occasions.
- The other three blocks (`0x700`, `0x780`, `0x880`) did not change at all.

**Only these two blocks track position.** They are two structures that both carry
the player's coordinates, not one coordinate split across two places.

What is measured about the two:

```
         0x600      0x680
played   43, 17     24, 16
right    39, 17     22, 16
up       39, 14     22, 13
```

The difference between them is not constant: `43-24 = 19` before the move and
`39-22 = 17` after. So they are not the same number with a fixed offset. What each
one means is **not established**. Plausible readings include an absolute position
and a viewport-relative one, or a current and a previous position, but nothing in
the data distinguishes those yet.

## Moving right changes exactly five bytes

Second experiment. Save, walk a few tiles to the right, save again. Diff the two.

Only **five bytes** differ, and two of them are in the blocks:

| offset | block | slot | before | after | delta |
|---|---|---|---|---|---|
| `0x0620` | `0x600` | 8 | 43 | 39 | **-4** |
| `0x06a0` | `0x680` | 8 | 24 | 22 | **-2** |
| `0x51a1` | outside | | 96 | 98 | +2 |
| `0x4fa7` | outside | | 0 | 60 | appeared |
| `0x502b` | outside | | 60 | 0 | cleared |

Both deltas are negative while the player moved right, so the axes are mirrored.
That is consistent with an origin at the far edge.

The two bytes outside the blocks at `0x4fa7` and `0x502b` are 132 bytes apart and
one is cleared while the other appears. That looks like a marker moving rather
than a value changing, and 132 is 4 times 33, so a 33-byte cell size would make
them four cells apart. Unconfirmed.

## Position is stored twice, in two different files

A fight and a save produced a clean diff of `ROSTER1.UT2`, which is plain ASCII
and therefore readable directly. It carries the player position as named fields:

```
PLAYER_X=11   ->  14
PLAYER_Y=16   ->  12
```

The same two values appear as **slots 8 and 9 of blocks `0x600` and `0x680`** in
`WORLD1.UT2`, in binary. So the position lives in both files at once.

| file | encoding | field |
|---|---|---|
| `ROSTER1.UT2` | ASCII, `key=value` | `PLAYER_X=`, `PLAYER_Y=` |
| `WORLD1.UT2` | uint32 LE | slot 8 and slot 9 of blocks `0x600` and `0x680` |

**A teleport must write both.** Which one the game reads at load, and whether it
trusts the binary over the ASCII when they disagree, is not established. Guessing
wrong would produce a save that loads at one position and reports another.

## What a fight changes in the roster

Same diff, before and after winning a fight:

| field | before | after | |
|---|---|---|---|
| `HP` | 233 | 116 | took 117 damage |
| `EXPERIENCE` | 12 | 21 | +9 |
| `GOLD` | 436 | 470 | +34 |
| `SCORE` | 32 | 57 | +25 |
| `FOOD` | 39505 | 39115 | -390, time passed |
| `DAGGER` | 1 | 1 | unchanged, already held |

`DAGGER` was 1 both before and after, so this fight did not grant it. Inventory is
a set of `0`/`1` flags per item name, not a counted quantity.

## Also changed, outside the blocks

Ten single bytes far into the file, at `0x4b52`, `0x4bb6`, `0x4c57`, `0x4e11`,
`0x4e32`, `0x4e72`, `0x502b`, `0x51a1`, `0x51e0`, `0x521f`, `0x5637`, `0x56b6`.

These are scattered, not in a regular structure, and their values are in the same
range as bytes elsewhere (`0x2c`-`0x60`). They may be map cells the player
revealed or objects encountered, but that is a guess.

## Reproducing it

```bash
node tools/savedisk.js newdisk saves/probe.hdm       # empty, no files
FREQ=16 ./tools/run.sh saves/probe.hdm               # play, Generate Character
node tools/savedisk.js extract saves/probe.hdm WORLD1.UT2 /tmp/base.bin
# play, then Q to save
node tools/savedisk.js extract saves/probe.hdm WORLD1.UT2 /tmp/after.bin
```

`extract` was added to `savedisk.js` for this: `cat` renders text and refuses
binary, which is no use when the point is to compare bytes.

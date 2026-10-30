# The tracked save disk

`userdisk.hdm.zip` is the only disk image in this repository, and it is here on purpose. Everything else with a
`.hdm` extension is disc-derived and ignored.

## Expanding it

```bash
unzip -o assets/save-disk/userdisk.hdm.zip -d saves/
```

That writes `saves/userdisk.hdm`, 1,261,568 bytes, which is the path every tool and every container in this
repository already expects. The zip is 3,637 bytes.

## What is on it

Read after expanding, with `node tools/savedisk.js ls saves/userdisk.hdm` and
`node tools/savedisk.js slots saves/userdisk.hdm`:

```
USERDISK     (label)
ROSTER1 UT2     3701 B  clusters 2-5 (4)
WORLD1  UT2    68096 B  clusters 6-72 (67)
WORLD2  UT2    68096 B  clusters 73-139 (67)
WORLD3  UT2    68096 B  clusters 140-206 (67)

slot 0: "E"  bytes 47-969
slot 1: "D"  bytes 970-1886
slot 2: "B"  bytes 1887-2803
slot 3: (empty)  bytes 2804-3700
```

Three characters, one empty slot, three world files. The game's character list is 1-indexed and the roster is
0-indexed, so **in-game slot 1 is `E`**, slot 2 is `D` and slot 3 is `B`.

## Why it is committed

The port's tested route is the game menu, then Journey Onward, then pick a character that already exists.
Character creation does not work yet, so a player who picks Generate Character reaches a dead end. Without this file
the quickstart would have to say "play the original first and make a character", which is a poor first five minutes.

It also gives every measurement a fixed starting state. The port's VRAM comparisons and the save-format work were
taken from a disk of this shape, and a checksum makes that state reproducible.

## Why it is zipped

The disk is 1,261,568 bytes and almost all of it is zero fill, so the zip is **3,629 bytes**, 347 to 1. That is the
difference between a 1 MB blob in the working tree of every clone and a file smaller than this README.

The zip is built with `zip -X -9` from a copy whose modification time is fixed to 1980-01-01, so the same disk always
packs to the same bytes and the checksum below is a check on the disk rather than on when somebody packed it.

## What it is not

It contains nothing from the disc. No disc image, no executable, no artwork, no audio, no extracted asset. It is a
FAT12 volume, a plain-text roster and three world files, all written by the game while it was played. The character
names and stat lines are game output, not game data.

The rule it sits under, from `AGENTS.md`: a `.hdm` is ignored because disks in this project are normally derived
from the disc, and un-ignoring a path is a deliberate act rather than a convenience. `.gitignore` carries the
exception as one named filename and `tools/portcheck.js` asserts that the general `*.hdm` and `*.zip` rules still
apply, so the exception cannot quietly widen.

## Checks

| what | value |
|---|---|
| the zip | 3,629 bytes, sha256 `b432ef3fd8198a8888658451aa7349d34e73a7dd6443b1a0759b8f8399193a7f` |
| the disk inside | 1,261,568 bytes, CRC-32 `f4d2c1ea` |

`tools/portcheck.js` reads the zip's central directory and asserts the name, the uncompressed size and the CRC, so
it checks the disk rather than the container bytes. It also asserts that the ignore exception is still one file and
still narrower than the rules above it.

## If the disk has to change

Re-saving over it is allowed and everything above will change. When it does, update these in the same commit:

1. the size and sha256 rows in this file, and the CRC in `tools/portcheck.js`,
2. the slot list above, from `savedisk.js slots`,
3. any quickstart sentence that names a slot.

Repack with a fixed timestamp so the zip stays reproducible. Run from the repository root:

```bash
mkdir -p /var/tmp/disk
cp saves/userdisk.hdm /var/tmp/disk/userdisk.hdm
touch -t 198001010000 /var/tmp/disk/userdisk.hdm
(cd /var/tmp/disk && zip -X -9 userdisk.hdm.zip userdisk.hdm)
mv /var/tmp/disk/userdisk.hdm.zip assets/save-disk/
```

The name inside the archive is part of its bytes, so it has to be `userdisk.hdm`. Packing the same content under a
different name gives a different checksum, which is correct rather than surprising.

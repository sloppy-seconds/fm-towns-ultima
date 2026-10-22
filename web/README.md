# FM Towns Ultima save disk editor

A browser tool for editing Ultima II save disks for the FM Towns release. It runs
entirely in the page. Nothing is uploaded, and your original file is never
modified: you open a disk, edit it, and download a new copy.

**Editor:** https://sloppy-seconds.github.io/fm-towns-ultima/

**Quickstart:** https://sloppy-seconds.github.io/fm-towns-ultima/docs/quickstart/
**Documentation:** https://sloppy-seconds.github.io/fm-towns-ultima/docs/
**Repository:** https://github.com/sloppy-seconds/fm-towns-ultima

**This edits Ultima II only.** Ultima I and III are on the same disc and use the
same class of format, a plain ASCII `KEY=value` roster, so extending this to them
should be close to trivial. It has not been attempted. The work would be a roster
parser per game for the field names, the right filename in the FAT lookup, and
the profession letters, all of which differ between the three. See the
[project docs](https://sloppy-seconds.github.io/fm-towns-ultima/docs/) for what
would be involved.

## What it does

- Opens an FM Towns 2HD save disk (`.hdm` or `.img`, 1,232 KB)
- Lists the four character slots and shows the whole roster
- Creates, edits, copies and clears characters
- Creates the matching world file for a new character
- Builds a valid blank save disk from scratch if you do not have one

## Why you might want it

Ultima II stores characters in `ROSTER1.UT2` on the floppy, which is plain ASCII.
So the save disk can be edited without the game, without an emulator, and
without any tooling beyond a browser.

This is useful because character creation is awkward in the emulator: the
launcher menus are unreadable if you do not read Japanese, and the pointer does
not work reliably in either open-source FM Towns emulator. Editing the file
directly sidesteps all of that.

## Values worth knowing

`FOOD` is stored at one hundred times what the game displays, and it counts down
as you travel. `40000` shows as `400`, and `999900` shows as `9999`. Setting
`9999` looks right in the file but starves the character in about ten turns.

Stats are final values. Race, sex and profession modifiers are applied once by
the game at character creation and baked into the file, so there is nothing to
re-apply when loading. What you write is what the character has.

Names are limited in this tool to 15 characters of letters, digits and spaces.
That is deliberately conservative. The file format itself has no such limit, and
a 26-character name was written and stored intact, but how the game renders a
long or unusual name is unknown: the character sheet and party list draw into
fixed-width fields, and only one `%s` exists in the whole binary, for the roster
writer. So the tool stays well inside what is known to work rather than guessing
where the display breaks.

Profession letters are `F` fighter, `C` cleric, `W` wizard, `T` thief. The sprite
index follows from the profession and you do not need to set it. If you see a
garbled TYPE on the character sheet, the profession letter is usually wrong.

The character list in game is 1-indexed while the file is 0-indexed, so in-game
slot 1 is `(0)NAME` in the roster.

## Using it with the game

Two things to know when you start Ultima II on FM Towns.

**"A WRONG DISK" is harmless.** It appears twice during startup, before the
splash screen. Press space through both and the game runs normally. It does not
mean your disk is bad.

**Choosing 0 leaves character creation.** At the `create entry 1-4` prompt,
picking 1 to 4 starts a new character. Choosing `0` returns to the previous menu
and is the only way out. Creating another character after a successful save
overwrites slot 0, which makes it look as though the save did not work.

## Files

| file | purpose |
|---|---|
| `index.html` | the page, including the UI |
| `fat12.js` | a FAT12 reader and writer for the disk image |
| `roster.js` | parses and builds `ROSTER1.UT2` |

The FAT and roster code is a port of `tools/savedisk.js` from
[fm-family-ultima-trilogy](https://github.com/sloppy-seconds/fm-family-ultima),
which carries the tests. If you fix a bug in one, fix it in the other.

## What is not here

No game data, no artwork, no ROMs, no BIOS, and no disk images. A blank save disk
is generated from geometry values, not copied from a retail disk. In particular
the boot sector is not needed: an FM Towns save disk is never booted from, since
the machine starts from the CD and only ever opens the floppy as a data volume.
This was verified in game by building a disk whose first sector carries only a
BPB, eleven non-zero bytes, and having Ultima II write a character to it.

## License

MIT.

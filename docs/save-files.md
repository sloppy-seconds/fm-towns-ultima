# Save files and the roster format

`ROSTER1.UT2` is plain ASCII, which is why a character editor is possible at all.
This page documents the format, the measured race, sex and profession modifiers,
and the creator's score of deliberate wrong turns that preceded both.


## Save files

**Tried:** locate `ROSTER1.UT2` and `WORLD1-4.UT2` on the UserDisk floppy.

**Measured:** not present. The floppy holds only an `IPL4` boot sector, an
`FBIOS`-style BIOS and a FAT12 volume labelled `USERDISK` with no `.UT2` files.

**Verdict:** negative but expected. These are created when a character is
made in-game. A blank supplied UserDisk is normal.

### 8.1 The floppy subsystem works, and it was proved three ways

This section exists to stop the next person repeating a long dead end. The
question was whether Ultima II can be made to save. The answer is that the
floppy path in this emulator is sound and that Ultima II specifically refuses
every disk offered to it, including the one the game ships with.

**Tried:** determine whether a correctly formatted FM Towns disk can be written
to at all inside Tsugaru. Read the root directory and FAT of the floppy image
after running each game.

**Measured:** `-GENFD filename size` at 1232 produces a genuine FM Towns disk.
Four sizes are accepted and only one is an FM Towns disk:

| size | first 4 bytes | bytes/sector | sectors/track | heads | root entries | FM Towns? |
|---|---|---|---|---|---|---|
| 1232 | `IPL4` | 1024 | 8 | 2 | 192 | **yes** |
| 1440 | `EB FE 90 34` | 512 | 18 | 2 | 224 | no, IBM PC |
| 640 | `EB FE 90 34` | 512 | 8 | 2 | 112 | no |
| 720 | `EB FE 90 34` | 512 | 9 | 2 | 112 | no |

A 1232 KB generated disk differs from the retail `[UserDisk]` in exactly
**12 bytes**: 10 bytes of volume label (`AOMORI` vs `USERDISK`) and the BPB
media byte at `0x0015` (`FE` vs `01`). Everything else is identical: same
`IPL4`, same `FBIOS` boot code, same FAT opening `FE FF FF`, same non-zero byte
count in every region. Note the retail disk contradicts itself, its BPB says
media `01` while its own FAT says `FE`, which is the signature of a disk
formatted by a program rather than by Towns OS.

**Verdict:** POSITIVE. A correct FM Towns blank can be generated, and each game
can be pointed at it with `-FD0 <image> -FD0UP`.

**Tried:** run all three games of the trilogy against that disk and inspect the
image afterwards.

**Measured:**

| game | binary | wrote to A: | file | size |
|---|---|---|---|---|
| Ultima I | `DARKNESS.EXP` | **yes** | `ROSTER.UT1` | 9,676 B |
| Ultima II | `ENCHANT.EXP` | **no** | none | - |
| Ultima III | `EXODUS.EXP` | **yes** | `ROSTER.UT3` | 14,622 B |

Both written files are complete and parse as expected. `ROSTER.UT1` begins
`Roster data:ULTIMA I for FM-TOWNS` and carries `NAME`, `RACE`, `TYPE`, `SEX`,
`HITPOINT`, `STRENGTH`, `AGILITY`, `STAMINA`, `CHARISMA`, `WISDOM`,
`INTELLIGENCE`, `GOLD`, `EXPERIENCE`, `FOOD`, `WEAPON` fields. `ROSTER.UT3`
begins `Roster data:ULTIMA III for FM-TOWNS` and carries `NAME`, the shrine
flags, `TORCHES`, `MEMBER`, `STATUS`, the six attributes, `RACE`,
`PROFESSION`, `SEX`, `MAGIC`, `HITPOINT`.

**Verdict:** POSITIVE and decisive for the emulator. Write protection is off,
drive A: is correctly mapped, and a generated 1232 KB disk is writable by FM
Towns games. The floppy subsystem is not the problem.

**Tried:** find a disk state that Ultima II accepts. Four distinct candidates,
each mounted writable as A:, each followed by an attempt at character creation.

**Measured:**

| disk in A: | result |
|---|---|
| all-zero image | "A WRONG DISK" |
| retail `[UserDisk]`, byte-for-byte as shipped | "A WRONG DISK" |
| `-GENFD 1232`, correct FM Towns format | "A WRONG DISK" |
| the disk Ultima I had just written `ROSTER.UT1` to | "A WRONG DISK" |

The last two rows are the ones that matter. A correctly formatted blank fails,
and so does a disk another game in the same trilogy has just successfully
written to. Most tellingly, **the disk that ships with the game fails.**

**Verdict:** NEGATIVE at the time, and **overturned later in this section**. See
8.5. The reasoning below was wrong because the U1-written disk was copied before
U1 had finished saving, so the copy held a roster but not the state U2 checks for.

The two messages involved, decoded from Shift-JIS at `0x1af6` and `0x1b63`:

- `初期化したディスクをドライブに挿入せよ` - insert an initialised disk into the drive
- `正しいディスクをドライブに挿入せよ。［挿入したらキーを押せ］` - insert the correct disk, then press a key

The second is the one the game displays. "Correct" turned out to be literal.

**What was wrongly concluded:** that this was an emulation defect specific to
`ENCHANT.EXP`. It is not. It is a disk-content check, and it can be satisfied.

### 8.2 The Tsugaru GUI exists and produces identical output

**Tried:** the windowed `Tsugaru_GUI` build, on the theory that its
`File > New > Floppy disk` menu might create a disk the CLI cannot.

**Measured:** `Tsugaru_GUI` links only against X11 and OpenGL, no GTK or Qt, so
it runs headless on Xvfb without special handling. The container previously
hardcoded `Tsugaru_CUI`, and `container/entrypoint.sh` now honours a `TSUGARU_BIN`
environment variable so either binary can be selected.

The GUI offers four sizes, the same four as `-GENFD`. A disk created through
the GUI at the wrong size came out at 1,474,560 bytes and was **byte-identical
to `-GENFD 1440`**. A disk created at 1232 KB came out at 1,261,568 bytes and was
**byte-identical to `-GENFD 1232`**.

The GUI appends the string `.BIN.D77.RDD.D88.XDF` to whatever filename is typed,
which suggests it writes one raw sector format and lists every extension it
could be read as. Whatever it writes, it is not a D88 container.

**Verdict:** NEGATIVE for the purpose it was tried. The GUI produces exactly the
same bytes as the CLI. It offers no initialisation step that `-GENFD 1232`
does not already perform.

**Tried:** the HxC2001 forum thread (`hxc2001.com/floppy/forum/viewtopic.php?t=4214`)
and the Reddit threads about the FM Towns Ultima Trilogy, for a reported fix.

**Measured:** the HxC poster is on real hardware with a Gotek, reports that
TownsOS cannot format either a 77-track or a 1.44M image, and never resolved it.
Their failures are hardware-flavoured (drive not ready, 0 track error) and do not
reproduce in an emulator. The Reddit threads report the same wall, two of them
unanswered, and the one workaround offered is simply to mount an image in FD0,
which is what `-FD0` already does.

**Verdict:** NEGATIVE. No published fix exists for Ultima II saving on FM Towns.

### 8.3 The emulator window was being clipped

**Measured:** the Tsugaru window titled `FM Towns Emulator - TSUGARU` reports a
geometry of **640x496**, not 640x480, and is positioned at y=40. The container's
Xvfb default was `640x480`, so with the window at y=40 its bottom 56 rows fell
off-screen and the top 40 rows were empty.

**Verdict:** POSITIVE, a real bug in the container defaults. It is why the
emulator's own menu area appeared to be missing. `RESOLUTION=1024x800x24` gives
the whole window room. The 640x496 geometry is already noted in `AGENTS.md`.

### 8.4 MAME was tried and fails the same way

**Tried:** run the same disc under MAME instead of Tsugaru. The reason to bother
is that MAME's floppy controller is a different implementation at a lower level:
it models the magnetic surface of the disc, so sector headers, CRCs and
inter-sector gaps are real, where Tsugaru uses a simpler path. If Ultima II's
disk check depends on any of that, MAME would behave differently.

**Measured:** MAME requires the real Fujitsu ROM dump, not the FreeTOWNS clean
room set. The FreeTOWNS ROMs in `vendor/roms/` cannot be used, and two of them
are byte-identical to each other (`FMT_DIC.ROM` and `FMT_F20.ROM`, both CRC32
`524bf849`), which is the signature of a substitute build rather than dumped
silicon. Against MAME's declared CRCs, all four FreeTOWNS files mismatch:

| ROM | FreeTOWNS CRC32 | MAME `fmtowns` expects |
|---|---|---|
| `fmt_dos.rom` | `95ecc6e4` | `112872ee` |
| `fmt_dic.rom` | `524bf849` | `b314c659` |
| `fmt_fnt.rom` | `736d9cb1` | `955c6b75` |
| `fmt_sys.rom` | `eab9c9dc` | `53319e23` |

With a real dump supplied, `mame -verifyroms fmtowns` reports `romset fmtowns is
good` and the machine boots. The container in `container/Containerfile.mame` and
`tools/mame-run.sh` runs it at 1024x800 under Xvfb with noVNC.

Four container faults had to be fixed before it would run, all recorded because
none of them fail loudly:

- MAME segfaults at startup with no sound card present. `SDL_AUDIODRIVER=dummy`.
- Left to itself SDL renders to the root window and creates a 1x1 stub, so the
  window manager has nothing to focus and all input is discarded.
  `SDL_VIDEODRIVER=x11`.
- OpenGL fails under Xvfb with `DRI3 error: Could not get DRI3 device` and
  nothing is drawn. `-video soft`.
- A `.cue` names its `.img` by the original long filename, so mounting the two
  files separately under short names breaks the reference. Mount the directory.

**Verdict:** NEGATIVE for the purpose it was tried. MAME boots the machine and
displays the CD browser, but the pointer stops responding as soon as the grey
launcher menu appears, exactly as under Tsugaru. The colour splash responds, the
menu does not. MAME's own description of the driver is
`status="preliminary" emulation="preliminary"`, and it reports the machine as
`FM-Towns (Model 1 / 2)` while Tsugaru was being driven as a Marty-era machine.

No floppy was written by MAME. The disk image was byte-identical before and
after the session, which means Ultima II was never reached and the FDC was never
exercised on a write path.

This closes the emulator question. Two independent emulators, two different ROM
sets, and two unrelated floppy and input implementations all fail at the same
place. Neither open-source FM Towns emulator fully implements pointer input for
Fujitsu's CD launcher.

**Tried:** create a properly formatted FM Towns disk with MAME's `floptool`,
which ships in the `mame-tools` package and is not part of the `mame` package on
Ubuntu, then carry that disk across to Tsugaru.

**Measured:** `floptool` does have a dedicated FM Towns image format. Its own
geometry table in `src/lib/formats/fmtowns_dsk.cpp` confirms ours independently:

```
{ /* 1.2MB 3 1/2 inch high density */
  floppy_image::FF_35, DSHD, MFM, 1200, 8, 77, 2, 1024, {}, 1, {}, 50, 22, 84 }
// Unverified gap sizes
```

8 sectors x 77 tracks x 2 heads x 1024 bytes is 1,261,568, the same size and
geometry as the retail UserDisk and the `-GENFD 1232` output. Note the author's
comment: the gap sizes are marked unverified.

Creating images is where it stops. `floptool` prints per-filesystem capability
flags, and only the `frw` filesystems can be written:

```
unformatted            F-- f--   Unformatted floppy image
pc_fat                 F-- -r-   PC FAT
hp9825, hp9831, hp9845 F-- frw
isis, oric_jasmin,
vtech                  F-- frw
```

`pc_fat` cannot create images on any geometry, reporting "Floppy creation format
'pc_fat_dshd' does not support creating new images". The only writable
filesystems are HP calculator formats, Intel ISIS-II and two 8-bit machines.
None is FAT.

The nearest success is `floptool flopcreate fmtowns u35dshd`, which produces a
file of exactly 1,261,568 bytes that is **entirely zero**. Right shape, no
filesystem.

**Verdict:** NEGATIVE. MAME can describe an FM Towns disk but cannot put a FAT
filesystem on one, so it cannot produce a save disk. `-GENFD 1232` remains the
only tool in reach that makes a genuinely formatted FM Towns floppy.

**Tried:** the HxC2001 forum thread, the Reddit threads, and the Tsugaru GUI's
`File > New > Floppy disk` menu, in case a disk created by a different path would
be accepted.

**Verdict:** NEGATIVE for all three, documented in 8.2. No published fix exists
for Ultima II saving on FM Towns, and no in-emulator route creates a disk that
Tsugaru's `-GENFD 1232` does not already create.

### 8.5 SOLVED: Ultima II saves on a stock disk. The error message was spurious

**Tried:** mount an untouched copy of the `[UserDisk]` that ships with the
release, launch Ultima II, create a character, save world data, quit, and reload.

**Measured:** Ultima II is fully playable. This is the exact navigation, as
performed, with the awkward steps kept in:

1. Boot the disc. It lands in the `CONTROL` menu (the grey CD browser).
2. Double-click the **Ultima II** icon.
3. **"A WRONG DISK [push space]" appears twice.** Press space through both. The
   splash screen follows.
4. Press space at the splash.
5. Choose **generate character**.
6. Choose **create a character**.
7. Allocate stats. The values used were strength 20, agility 15, stamina 20,
   charisma 15, wisdom 10, intelligence 10.
8. Choose race **human**, sex **female**, profession **fighter**.
9. Type a name, press Enter, answer **Y** to the create prompt.
10. "saving world data" appears.
11. Back at `create entry 1-4`. **This is where it goes wrong for most people.**
    Choosing 1 to 4 re-enters character creation. Choose **0** to leave.
12. Choose **look at a character**, pick the slot, and the character is shown.
    Stats are higher than entered because race and sex modify them.
13. Press space, then **0** again at the slot prompt, then **main menu**.
14. Choose **journey onward**. Four slots are listed, slot 1 holding the new
    character and the rest empty.
15. Select the character, answer **Y**, press space at "player selected", wait
    at "loading", and the game starts.

Step 11 is the one that reads as a bug and is not. Steps 11 and 13 both need
**0**, and neither prompt says so.

The packaged disk afterwards:

| file | size | start cluster |
|---|---|---|
| `USERDISK` (volume label) | 0 | 0 |
| `ROSTER1.UT2` | 3,658 B | 2 |
| `WORLD1.UT2` | 68,096 B | 6 |

`ROSTER1.UT2` recovers cleanly through the FAT chain and contains:

```
Roster data:ULTIMA II for FM-TOWNS
(0)NAME=GIRL
STRENGTH=30  AGILITY=25  STAMINA=20  CHARISMA=25
WISDOM=10    INTELLIGENCE=15
RACE=H  PROFESSION=F  SEX=F
HP=400  MHP=400  EXPERIENCE=0
```

Those are the entered base values as modified by the racial and sex bonuses, so
the round trip through the file is faithful.

**Verdict:** POSITIVE. **"A WRONG DISK" is a spurious warning and not a
failure.** It appears twice on every launch, one per floppy drive, and the game
proceeds normally once space is pressed. There is nothing wrong with the disk
and there never was. No disk preparation step is required, and the stock
`[UserDisk]` works unmodified.

This also explains the earlier Ultima I work: its save writes, persists and
reloads correctly, and its slot list is 1-indexed against a 0-indexed file, so
"slot 1" is `(0)NAME`.

**The create loop is not a loop.** At the `create entry 1-4` prompt, choosing 1
to 4 enters character creation again. Choosing **0** returns to the previous menu
and is the only way out. Ultima I and II both behave this way. Every earlier
report of "stuck in the create loop" or "it saves but then errors" was this
navigation quirk, not a fault. Creating another character after a successful
save overwrites slot 0, which makes it look as though nothing was kept.

### 8.6 Why this took so long, and the lesson

Everything in 8.1 through 8.4 that blamed the emulator was wrong. The root cause
was reading a harmless message as a hard failure, and never checking what
happened after pressing space. The message appears before the splash screen,
is printed twice, and blocks nothing.

Compounding it, three false signals all pointed the same way:

- The boot screen is a grey CD browser with unreadable Japanese menus and
  unreliable pointer input in both emulators, so launching U2 and reporting
  back was itself error-prone.
- Ultima I's slot list is 1-indexed against a 0-indexed roster file, so looking
  at slot "1" showed the empty `(1)` entry and looked like save corruption.
- Ultima I returns to character creation after a successful save rather than
  proceeding, which looks like a failure and is not.

Each of those produces the same symptom as a broken disk. Together they made a
working system look completely broken.

The rule this earned, and the most valuable thing in this file: **when a test
result contradicts the rest of the evidence, re-verify the input and check what
happens next before building a theory.** A file that parses perfectly, written
by the same engine, being rejected by its sibling should have prompted "what
does the screen say after the error", not a week of emulator archaeology.

### 8.7 The FM Towns roster is plain text, and it can be edited

This is the most useful thing in this section, because it means the character
data is readable and writable without any binary understanding at all.

**`ROSTER1.UT2` is ASCII.** It opens with `Roster data:ULTIMA II for FM-TOWNS`
followed by four slot blocks of `KEY=value` lines separated by CRLF. Slot 0
begins with `(0)NAME=`, and each subsequent slot begins at its own `(N)NAME=`
line. An empty slot is the same template with NUL names and zeroed stats, so the
block sizes are nearly equal but not identical, which matters when rewriting.

This is nothing like the DOS release. There, `player` is a 384-byte binary file
holding a packed copy of the DS segment, with several counters in BCD. None of
that applies here. See `FINDINGS` 8.7 notes and the `decompile-u2-v2` project for
the DOS layout, which is a different format under the same game name.

**Measured: every field round-trips.** A character was built entirely in the
file with distinctive values and loaded in-game. The character sheet displayed
STR 11, AGI 22, STA 33, CHA 44, WIS 55, INT 66, HP 1111, EXP 77, GOLD 888 and
race and sex as written. Field order and encoding are therefore confirmed by
display, not assumed.

**Profession drives the sprite, and the letters differ from the DOS release.**
`PROFESSION` is a single character and `SPID` is a sprite index into
`GRAPH/PLAYER.TIF`, derived from it. Four characters, one per profession, all
created and displayed correctly:

| profession | letter | SPID |
|---|---|---|
| Fighter | `F` | 2 |
| Cleric | `C` | 6 |
| Wizard | `W` | 10 |
| Thief | `T` | 14 |

So `SPID = profession_index * 4 + 2`, with the stride of 4 consistent with
three further sprite variants per profession selected by race at draw time.
Race and sex do not affect it: two wizards of different race and sex both store
`SPID=10`.

**The bug this solved:** writing `PROFESSION=M` for mage, carried over from the
DOS convention, produced a garbage TYPE on the character sheet. FM Towns uses
`W` for wizard. Note `SEX=M` is valid, for male, so only the profession letters
differ.

**Other confirmed letters:** `RACE` is `H` human, `E` elf, `D` dwarf, `B`
bobbit. `SHAPE` was 0 for all four characters and is not yet understood.

**`FOOD` is a fixed-point countdown, not a quantity.** The stored value is one
hundred times the number displayed, and each turn consumes a fraction of a unit,
so the visible integer falls every fourth or fifth turn. A character created in
game stores `FOOD=40000` and displays `400`.

This was found the hard way. Setting `FOOD=9999` expected 9999 and displayed
`99`, because 9999 is 99.99 units, roughly ten turns of food. Three data points
agree on the divisor:

| stored | displayed | stored / 100 |
|---|---|---|
| 40000 (written by the game) | 400 | 400 |
| 12345 (written by the editor) | 123 | 123 |
| 9999 (written by the editor) | 99 | 99 |

So a nominally "maxed" character needs `FOOD=999900` to display `9999`, and
`FOOD=9999` starves in about ten turns. Confirmed in game: 999900 displays 9999
and holds.

Every other counter is a plain integer. `HP`, `MHP`, `GOLD`, `EXPERIENCE` and
the six stats all display exactly what is written, verified at 9999 and 99.
The DOS release does the same thing differently, storing food as 6-digit BCD and
printing a 4-digit band.

**World files pair with slots by index.** Slots are 0-based in the roster and
the world files are 1-based, so slot 0 uses `WORLD1.UT2` through slot 3 using
`WORLD4.UT2`. A hand-built slot-1 character with a copied `WORLD2.UT2` loaded
and played, which confirms the pairing.

**Tooling:** `tools/savedisk.js` reads and writes the FAT12 image directly. It
can list files, extract the roster, clone a slot, set a field, and copy world
files. Every write is to a new file unless `--inplace`, and both FAT copies are
kept in sync.

**What the editor does not model: creation-time stat modifiers.**

Race, sex and profession modify the six stats once, when the character is
created, and the modified values are what get written to the file. There is no
separate base-stat field, so the roster holds final values only.

This means the editor sets absolute stats and the game does not re-apply any
modifier when loading. What you write is what the character has. Editing is
therefore straightforward, but it also means the editor cannot reproduce the
creation rules, and a character created in game will not match what was typed at
character creation.

One measured example. A human female fighter was created with base values
20/15/20/15/10/10 and stored:

| stat | entered | stored | delta |
|---|---|---|---|
| STRENGTH | 20 | 30 | +10 |
| AGILITY | 15 | 25 | +10 |
| STAMINA | 20 | 20 | 0 |
| CHARISMA | 15 | 25 | +10 |
| WISDOM | 10 | 10 | 0 |
| INTELLIGENCE | 10 | 15 | +5 |

That is one sample for one race, sex and profession combination. It does not
separate the three factors, and the modifier table itself is not recoverable from
the disc by cheap means: `ENCHANT.EXP` has no symbol table and no English race or
class strings, so the arithmetic is in code that cannot be read reliably without
a proper loader.

Measuring it would take ten characters all entered at 10 across the board,
varying one factor at a time, at which point stored minus ten is the modifier
vector. Until then this is recorded as known-unknown rather than modelled.

Three bugs were hit building it, all of which produced silently wrong output and
are worth knowing:

- Stopping a FAT chain walk at `cluster < 0xFF8` drops the final cluster of every
  file, because `0xFF8` to `0xFFF` are end-of-chain markers. This truncated the
  roster to all zeros and looked like an empty disk.
- Building a regex from the field name `(0)NAME` without escaping turns the
  parentheses into a capture group, so it matches nothing and every slot reads
  as empty.
- Counting only `0x20` to `0x7E` as printable puts a normal DOS text file with
  CRLF endings at 80 percent and misclassifies it as binary.

### 8.8 What a blank save disk actually contains

This matters for any tool that wants to create a disk rather than edit one, and
it is not obvious. Measured on the stock `[UserDisk]`:

| region | offset | contents |
|---|---|---|
| boot sector | `0x0000`-`0x03FF` | `IPL4`, the BPB, and FBIOS boot code. 408 non-zero bytes |
| FAT1 | `0x0400`-`0x07FF` | `FE FF FF` then zeros |
| FAT2 | `0x0C00`-`0x0FFF` | identical to FAT1 |
| root directory | `0x1400`-`0x2BFF` | one volume label entry, then `0xE5` fill |
| data area | `0x2C00`-end | every byte `0xE5` |

`0xE5` is the fill value an FM Towns format writes, which is the same byte that
appears in a fresh `WORLD<n>.UT2` map grid. Space that has been formatted but
never written is `0xE5`, not zero.

A generated disk differs from the retail one in **exactly one byte**: offset
`0x15`, the BPB media descriptor, which is `0x01` on the retail disk and `0xFE`
from `-GENFD`. Everything else is identical.

**Consequence for tooling.** The `0xE5` fill and the FAT can be synthesised from
a formula. The boot sector cannot be copied, but it turns out not to matter.

**A save disk does not need a boot sector at all, and this was tested.**

A disk was built from nothing: 1,261,568 bytes of `0xE5`, a zeroed first sector
carrying only a BPB at `0x0B`, two FATs starting `FE FF FF`, and a zeroed root
directory. That is **11 non-zero bytes** in the whole boot sector, against 408 on
the retail disk, with **no `IPL4` signature, no OEM name and no boot code**.

Ultima II accepted it and wrote a full character to it:

| file | size |
|---|---|
| `ROSTER1.UT2` | 3,659 B |
| `WORLD1.UT2` | 68,096 B |

The boot sector was then re-measured and was still 11 non-zero bytes, still
without `IPL4`. The game never read it beyond the BPB, which is exactly what one
would expect: a save disk is never booted from, the machine starts from CD, and
A: is only ever opened as a FAT volume.

So a blank save disk can be generated from geometry values alone. Nothing
copyrighted is involved: 11 bytes of BPB, an `0xE5` fill, an empty FAT and an
empty root directory. Any tool that needs to offer "create a new disk" can do so
honestly.

Practical routes for a user who wants a save disk:

1. Use the `[UserDisk].hdm` that ships in the zip. It is already formatted.
2. `Tsugaru_CUI -GENFD <file> 1232`, one command, produces a correct disk.
3. Generate a bare one with the layout above, which needs no boot sector.

---

---

**[The save disk](save-disk.md)** **[Open questions](open-questions.md)**

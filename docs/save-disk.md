# The save disk

Everything about making Ultima II write to a floppy: why it refused, what turned
out to be wrong, the format it uses, and how to build one from scratch.

This is the longest investigation in the project and most of it is wrong turns
that are recorded deliberately. Start with the summary below if you only want the
answer.


## "A WRONG DISK": what is and is not the cause

**Symptom:** U2 launches, shows the splash and menu, then refuses to create or
manage saves, printing `A WRONG DISK! Push [space]`. Space continues, but saves
cannot be made.

**Ruled out:**

- **Not a read-only mount.** The floppy was mounted read-only, which was a real
  bug and is now fixed: the image is copied to `saves/userdisk.hdm` and mounted
  read-write. The symptom persisted after the fix.
- **Not Tsugaru's write protection.** `-FD0UP` is now passed. The symptom
  persisted.
- **Not a failure to read the disk.** `PRI FDC` reports
  `Drive00 (/disc/userdisk.hdm) MEDIA:2HD 1232KB` and
  `Last CMD:80 Read_Sector STATUS:00`. The controller reads sector 128
  successfully. The disk is present and readable.
- **Not a corrupt image.** The BPB parses: 1024 bytes per sector, valid for FM
  Towns, `IPL4` boot signature present, root directory holds a `USERDISK`
  volume label with attribute `0x28`.
- **Not a write attempt failing.** After reaching the error,
  `saves/userdisk.hdm` is **byte-identical** to the pristine original (same MD5,
  `5ae4dc119f99`). U2 never writes. It rejects the disk before trying.

**Remaining hypothesis:** U2 wants a disk it initialised itself, not a
pre-formatted blank. The image supplied as `[UserDisk]` is a formatted but
completely empty volume (`0xE5` free-cluster fill throughout, one volume label,
no files). U2 likely checks for a signature or attempts an exclusive format that
it refuses to do on a disk with an existing label.

**The string is not in U2.** Searching `ENCHANT.EXP` for `WRONG` finds only
`WRONG TIFF HEADDER`. There is **no `WRONG DISK`** in the game binary at all. The
message comes from **TMENU**, the launcher, before U2 runs. So this is a launcher
complaint about the disk, not a game complaint. That reframes the whole problem.

**TMENU ships disk utilities.** Its symbol table names a complete disk menu:

```
MENU_DISK_FORMAT  MENU_DISK_COPY   MENU_DISK_BACKUP
MENU_DISK_RESTORE MENU_DISK_VOLNAME MENU_DISK_DISKPAT
MENU_FILE_CHDIR   MENU_FILE_DELETE MENU_FILE_EXEC
```

and the disc carries `FORMAT.EXP`, `DISKCOPY.EXP`, `LABEL.EXP`, `BACKUP.EXP`,
`RESTORE.EXP`, `DISKPAT.EXP`, `HDUTY.EXP`.

**Conclusion:** the answer to making a usable save disk is already on the disc.
Rather than synthesising a disk externally, format one from inside Towns OS
with TMENU's own Format command, which is the path the original release assumes.

**Also on the disc:** `DRIVE_R.IMG` (131,072 bytes at LBA 59) is a Towns OS RAM
disk image, volume label `TOWNES SYSTEM SAMPLE1`, containing `RUN386.EXE`. It is
not a U2 save disk but it shows the disc carries ready-made volumes.

**Superseded:** the `-GENFD` experiment produced a disk with the same `IPL4`
boot sector and `0xE5` free-cluster fill as the supplied one, and U2 still
rejects it. Generating a blank externally does not help.

## Save disk: Option A and Option B recorded

Two routes to working saves, neither requiring a synthesised disk.

**Option A - format a floppy from inside Towns OS, then let U2 write to it.**

The launcher provides the tools. `TMENU.EXP` names a disk menu with
`MENU_DISK_FORMAT`, `MENU_DISK_COPY`, `MENU_DISK_BACKUP`,
`MENU_DISK_RESTORE`, `MENU_DISK_VOLNAME` and `MENU_DISK_DISKPAT`, and the disc
ships `FORMAT.EXP`, `DISKCOPY.EXP` and `LABEL.EXP` to back it up.

Procedure:
1. Mount a floppy in FD0. The supplied `[UserDisk].hdm` is fine as a starting
   point, and so is one made with
   `Tsugaru_CUI <roms> -GENFD saves/blank.hdm 1232`.
2. The image must be **writable**. Two separate things control that and both
   must be set:
   - the container bind mount must not be `:ro`, handled by copying to
     `saves/userdisk.hdm`,
   - Tsugaru needs **`-FD0UP`**, because floppies are write-protected by
     default.
3. In the launcher, use the disk menu to Format drive A. This writes a Towns OS
   filesystem that U2 will accept, which a merely blank or pre-labelled image is
   not.
4. Launch U2 and create a character. It writes `A:\ROSTER1.UT2` and
   `A:\WORLD1-4.UT2` directly.

**Option B - Tsugaru machine state. Documented because it is useful for
debugging, not as a substitute for real saves.**

Tsugaru can snapshot the entire VM, which sidesteps the game's own save path
entirely. Worth knowing for debugging a specific screen or chasing a bug,
because it captures exact memory and device state rather than a game-level save.

From the GUI: open the emulator menu with **Scroll Lock** or the menu icon in
the bottom-right, then **States**, then **Save machine state**, and pick a slot
or name. Load reverses it.

From the console, the same thing is scriptable:

```
SSTATE <filename>     save
LSTATE <filename>     load
```

and the command line takes **`-QUICKSTATESAVE filename`**. The console also
exposes `-QUICKSSDIR` for the directory.

**Caveat:** a state file is tied to the emulator build and to the memory
configuration. `Tsugaru_CUI` warns that a state saved under the default CPU core
may crash under `-HIGHFIDELITY` and vice versa. Treat state files as
debugger scratch, never as the thing that preserves a playthrough. Use Option A
for that.

**Tsugaru_GUI has no format command.** Its string table contains
`Select FD Image`, `Eject`, `Save Machine State`, `Load Machine State`,
`Quick State Save`, `Quick State Load`, `Save Screenshot`, `Save Captured WAV`,
`Save Captured VGM`. There is **no** floppy format, no new-disk, no initialise.
Tsugaru only mounts and ejects images. Formatting a floppy is a Towns OS job,
not an emulator job.

This matters because it means Option A cannot be done from the emulator GUI at
all. Whatever produces a disk U2 accepts must run **inside the emulated
machine**, using `FORMAT.EXP` from the disc, driven either through TMENU's disk
menu or from a Towns OS command prompt.

`Tsugaru_GUI` also requires a real display and Qt, so it cannot run in the
headless container as things stand. `Tsugaru_CUI` plus the supervisor is the
only scriptable path here.

**Not yet done:** the actual Format sequence has not been executed. Established
facts: the format function exists (`MENU_DISK_FORMAT`, `FORMAT.EXP`), the disk
must be writable (container mount and `-FD0UP`), and the launcher is what prints
"A WRONG DISK". What is missing is the click path through TMENU's disk menu, or
a route to a Towns OS command prompt. Recorded honestly rather than claimed.

## The save-disk messages, finally decoded

**Method:** the game's user-facing messages are **Shift-JIS**, not ASCII, which
is why searching for `WRONG DISK` in any executable found nothing. `ENCHANT.EXP`
contains 2,294 Japanese strings. Decoded with `TextDecoder('shift_jis')`.

**The messages, at known file offsets:**

| offset | message | meaning |
|---|---|---|
| `0x1a0f` | ディスクが書き込み許可でない［許可にしたらキーを押せ］ | "The disk is not write-enabled [press a key once enabled]" |
| `0x1a83` | ディスクをドライブに挿入せよ。［挿入したらキーを押せ］ | "Insert a disk into the drive [press a key when inserted]" |
| `0x1af6` | 初期化したディスクをドライブに挿入せよ。［キーを押せ］ | "**Insert an initialised disk** into the drive [press a key]" |
| `0x1b63` | 正しいディスクをドライブに挿入せよ［挿入したらキーを押せ］ | "Insert the correct disk into the drive [press a key]" |
| `0x1cca` | 注意：ディスクが書き込み禁止である | "Note: the disk is write-protected" |
| `0x2f9a` | 名簿データが読めません | "Cannot read roster data" (ROSTER1.UT2) |
| `0x309a` | 世界データが読めません | "Cannot read world data" (WORLD1-4.UT2) |
| `0x26e3` | 名簿データ | "Roster data" |
| `0x27f1` | 世界データ | "World data" |

So the English `A WRONG DISK` seen on screen is the localised form of
`0x1b63`, and the requirement is explicit at `0x1af6`: **the disk must be
initialised**. A blank or pre-labelled image will not do.

**Confirmed by experiment:** removing the floppy entirely replaces the complaint
with a different one, after which U2 proceeds all the way to character creation.
So U2 starts without any disk and only demands one when it needs to read or write
roster data.

**Superseded:** the earlier claim in 6.19 that the message came from TMENU was
wrong. It is U2's own Shift-JIS string. `MENU_DISK_FORMAT` in `TMENU.EXP` is a
symbol-table entry for a build function, not a menu the user can reach, and
`Tsugaru_GUI` has no format command. There is no way to format from outside the
machine.

**What is needed:** initialise the disk from **inside Towns OS**. The disc
carries `FORMAT.EXP` for exactly this. Run it against drive A from a Towns OS
command prompt, then launch U2. That is the path the original release assumes,
and it is the only remaining route.

**Definitively not reachable from the launcher.** `TMENU.INF` is a plain-text
menu definition listing every program TMENU can start:

```
\RUN386.EXE darkness.exp    ULTIMA I
\RUN386.EXE enchant.exp     ULTIMA ][
\RUN386.EXE exodus.exp      ULTIMA ]I[
\RUN386.EXE british.exp     MESSAGE
\RUN386.EXE UT1DEMO.EXP     UT1_INTRO
\RUN386.EXE UT2DEMO.EXP     UT2_INTRO
\RUN386.EXE UT3DEMO.EXP     UT3_INTRO
```

Eight entries, and `FORMAT.EXP` is not one of them. The launcher has no system
menu, no disk tools, and the A/B/CD tabs are drive *browsers* that display
contents, not disk utilities. Confirmed against the live UI: the A tab shows an
empty window because the floppy genuinely has no files, and there is no menu
anywhere offering a format.

This release's launcher is a game selector only. It was never intended as a
Towns OS shell.

**Attempted and failed:** passing `-CONSCMD FORMAT.EXP` as a launch argument.
The emulator accepted the option, the argument was correctly formed (verified in
the container log), the VM booted normally, and the floppy image was
**byte-identical afterwards** (`5ae4dc119f99` before and after). The command did
not format anything.

`CONSCMD` is not a console command, so it cannot be injected through the
supervisor API either; typing it returns `Do what?`. It is a launch option only.

Likely reasons, none verified: `-CONSCMD` requires the exact Towns OS command
syntax (`FORMAT.EXP` may need a path or different switches), the command runs
before the drive is ready, or `FORMAT.EXP` needs interactive confirmation that a
non-interactive launch cannot supply.

**Not done:** the interactive route. Booting with `NO_FD=1` reaches U2's
character creation with no disk error, so the launcher and the game both work.
What remains is formatting a disk through the Towns OS user interface, which
needs a human at the browser session.

## Saves are blocked, and why

**Symptom:** character creation completes, then U2 reports a save failure and
returns to its prompt in a loop.

**Measured:** the messages are Shift-JIS. Decoded:

| offset | message | meaning |
|---|---|---|
| `0x1af6` | 初期化したディスクをドライブに挿入せよ | "insert an initialised disk" |
| `0x1b63` | 正しいディスクをドライブに挿入せよ | "insert the correct disk" |
| `0x26b3` | の保存に失敗しました | "failed to save" |
| `0x28b9` | デ－タを正常にセ－ブできませんでした | "could not save data normally" |

So the loop is: create character, attempt to write `A:\ROSTER1.UT2`, fail
because the disk is not initialised, print `0x28b9`, return to the prompt.

**There is no way to initialise the disk from this release.** `TMENU.INF` lists
exactly eight launchable programs and `FORMAT.EXP` is not among them. The
launcher has no system menu. Its A/B/CD tabs are drive browsers, confirmed
against the live UI: the A tab shows an empty window because the floppy is
genuinely empty, and no menu anywhere offers a format.

FORMAT.EXP ships on the disc but is unreachable. This launcher is a game
selector, not a Towns OS shell.

**Consequence:** in-game saves are not achievable with this disc alone.

**Workarounds, in order of practicality:**

1. **Tsugaru machine state.** Works today. Scroll Lock or the GUI menu, then
   States, then Save machine state. Captures the whole VM so play resumes
   exactly. Console equivalents `SSTATE`/`LSTATE`, and `-QUICKSTATESAVE` at
   launch. Tied to the emulator build, so debugger-grade rather than portable.
2. **A Towns OS environment.** Towns OS V1.1 L10 or V2.1 L20/L31, or the
   Tsugaru project's Rescue Boot Loader CD, would give a command prompt where
   `FORMAT.EXP` can actually be run. Not present in this download.

   **Tested and ruled out:** booting with `-NOINTCD` and no disc, hoping the
   FreeTOWNS compatible ROM would fall through to a shell. It does not. The
   machine stops inside the boot ROM at `CS:EIP=FC00:00000A04` displaying a
   notice about running on compatible ROMs, and ignores keystrokes. The reason
   is that `FMT_SYS.ROM` still needs a bootable medium, and the supplied
   `UserDisk` floppy carries an `IPL4` boot sector with **no bootable files in
   it**, so there is nothing to boot. Verified: no `.EXE`, `.SYS` or `.COM`
   entries anywhere in the boot area.

   So a compatible ROM is not enough on its own. A real Towns OS CD image is
   required.

   **Also tested and ruled out:** `TsugaruUtil.D77`, which ships with the
   emulator. It is a valid D77 with an `IPL4` boot sector and contains
   `TGDRV.COM` and `TGMOUSE.exe`, but booting it as FD0 with `-NOINTCD` produces
   the same halt on the compatible-ROMs notice. It is a data/utility disk for
   host file sharing, not a Towns OS system disk, exactly as the Tsugaru README
   describes.

   Every bootable medium present in this download has now been tested. None of
   them reaches a shell.
3. **Patch or bypass.** U2 could be patched to skip the save, or the disk
   initialisation performed by a small Towns OS program written for the purpose.
   Both are real projects, not quick fixes.

## The zero-filled disk suggestion, assessed

**Suggestion received:** create a save disk with
`dd if=/dev/zero of=save_disk.d88 bs=1261568 count=1` and mount it as `-FD0`.

**Assessed against the evidence, and it cannot work.** Measured byte histograms:

| image | size | dominant bytes |
|---|---|---|
| supplied `[UserDisk].hdm` | 1,261,568 | `0xE5` x1,250,304, `0xF6` x5,922, `0x00` x4,913 |
| `TsugaruUtil.D77` | 1,281,968 | `0xE5` x1,005,615, `0x00` x186,364, `0xF6` x7,758 |
| `dd` zero fill | 1,261,568 | `0x00` x1,261,568 |

Both real disks are dominated by `0xE5`, which is FAT12's free-cluster marker.
A zero-filled file has none of that. It has no boot sector, no BPB, no FAT and no
directory, so it is not a formatted disk at all. U2's own requirement, decoded
from Shift-JIS at `0x1af6`, is an **initialised** disk. Zeros are not that.

**Also note the sizes:** FM Towns 2HD is 1,261,568 bytes (1232 x 1024),
confirmed against the supplied image. 1.44 MB is the IBM PC format and does not
apply here, so creating a 1.44 MB image would be wrong for this machine.

**Tested:** mounted a zero-filled image as FD0 and booted. The launcher came up
normally, but reaching character creation to observe the write attempt was not
completed, so the zero-disk case is *unconfirmed in practice*. It is however
ruled out on structure alone: a filesystem-less image cannot satisfy a check for
an initialised disk.

**One thing in the suggestion is right and useful:** `-GAMEPORT0 KEY` maps the
game port to keyboard. Worth adding for any title that reads a joystick, though
U2 is keyboard and mouse driven so it does not apply here.

**Still the conclusion:** a Towns OS image is needed to initialise a floppy. No
amount of external file creation substitutes for running the machine's own
formatter.

## The save-disk problem, solved by outside research

**Independent confirmation of the diagnosis.** Searching for the exact symptom
found two sources describing the same thing.

From r/fmtowns, someone with the identical failure:

> ultima 1-3 have an error when creating character that tells you **disk not
> ready**. Open the menu using the small button on the right side bottom, then
> select FD0, then choose select image.

That matches the `NO_FD` test in 6.19, where removing the floppy gave "drive not
ready". So the disk must be present. It also shows this is a known obstacle, not
something specific to our setup.

**Why the disk must be blank.** The Exodus Project, writing about U2's original
floppy release:

> if you try to create a new character when one already exists, the game gives
> you a not-so-user-friendly "Not a blank player disk" message... U2 was run
> entirely on floppies and included separate program master, player master, and
> galactic disk.

So U2 expects a specifically blank player disk, and checks for it. That is
consistent with the Shift-JIS message at `0x1af6` requiring an **initialised**
disk: initialised but empty.

**The missing piece, identified.** From gekk.info's FM Towns emulation guide:

> DOS and **TownsOS 1.1** are available as floppy images... The BIOS pack I made
> contains DOS, **TownsOS 1.1 which boots to a GUI**, and a boot disk for
> TownsOS 2.1 that just boots to DOS.

Towns floppy images are `.HDM`. The pack is at
`https://gekk.info/files/FMT%20ROMs.7z`.

This is precisely what every attempt in 20-23 lacked: a **bootable** Towns OS
medium. Every disk in the archive.org download is a data disk, which is why
booting any of them halts in ROM.

The same guide also notes that TownsOS 2.1 needs a CD and can be booted like a
game.

**The complete chain, now known:**

1. Boot TownsOS 1.1 from gekk's `.HDM` floppy image as FD0.
2. From its command line, format a second floppy. This writes the boot sector,
   BPB and FAT that every blank image lacks.
3. Launch U2 with the formatted disk in FD0 and the CD mounted.
4. Character creation should then write `A:\ROSTER1.UT2` successfully.

**Status:** the chain is fully identified but not yet executed. The BIOS pack is
a third-party download not yet fetched.

## MAME source, and the discovery that U2 formats the disk itself

**Checked the MAME lead.** `src/lib/formats/fmtowns_dsk.cpp` in
`mamedev/mame` defines the geometry:

```cpp
{ floppy_image::FF_35, floppy_image::DSHD, floppy_image::MFM,
  1200, 8, 77, 2, 1024, {}, 1, {}, 50, 22, 84 }
```

3.5 inch, double-sided high density, **8 sectors x 77 tracks x 2 sides x 1024
bytes = 1,261,568 bytes**, matching every image we have. The class derives from
`wd177x_format`, and its only method beyond metadata is `save()`, which writes
raw sector data. **MAME contains no filesystem formatter.**

`fmtowns.addblankdisk` from the Batocera wiki is a Batocera wrapper option, not a
MAME or Tsugaru feature. MAME's `fmtowns.cpp` only mounts images and registers
the format. Nobody in that stack formats anything; a blank is mounted and the
game is expected to deal with it.

**Which led to the real answer.** Searching `ENCHANT.EXP` for `FORMAT`,
`FORMAT.EXP` and `初期化` as ASCII finds **nothing**. U2 has no formatter of its
own either. But decoding the Shift-JIS around `0x1d2b` gives:

```
承諾するならば［　］を押せ      "If you accept, press [ ]"
〜ないならば［　］を押せ        "If you do not, press [ ]"
```

So U2 **offers to initialise an unformatted disk and asks you to accept**. The
message at `0x1af6`, "insert an initialised disk", is the *fallback* path taken
when you decline or when the disk cannot be initialised.

**The correct procedure, therefore:**

1. Mount a **blank** disk in a writable slot. It must be writable, which needs
   both a non-`:ro` container mount and `-FD1UP` (not `-FD0UP`, since FD0 is the
   boot disk).
2. Launch U2 and reach character creation.
3. When U2 asks, **accept** the initialisation prompt.
4. U2 writes the filesystem itself, then writes `A:\ROSTER1.UT2`.

**What was wrong with every earlier attempt:** the floppy was mounted read-only,
then writable but with the wrong drive write-protect flag, and in each case we
were reading the *fallback* message rather than reaching the accept prompt. The
disk being pre-formatted was never the requirement.

**Status:** procedure identified, not completed end to end.

**Tested with a correctly configured blank writable disk:**

```
-FD0 /data/savedisk.hdm -FD0UP -BOOTKEY CD
```

all-zeros image, writable mount, correct drive's write-protect flag cleared.
Result: **`A WRONG DISK`**, and the image was still byte-identical all-zeros
afterwards. U2 inspected the disk, rejected it, and wrote nothing.

So U2 refuses a zero-filled image before offering to initialise it. Whatever it
checks for is not "is this writable" and not "is this empty". It is looking for
something in the existing content.

**What "A WRONG DISK" is not:** it is not a stored string. Searching
`ENCHANT.EXP` and `BRITISH.EXP` for `WRONG`, `DISK`, `Wrong` and the Japanese
`間違`, `違うディスク`, `正しくな` finds nothing relevant. `EXODUS.EXP` has
`間違` once, for dungeon codes. The message is either assembled at runtime or
comes from Towns OS rather than U2.

**Two roster messages that are distinct and matter:**

| offset | text | meaning |
|---|---|---|
| `0x2f2a` | まず、キャラクタを作成してください | "First, please create a character" (disk OK, just empty) |
| `0x2f9a` | 名簿データが読めません | "Cannot read roster data" (disk unreadable) |

Reaching `0x2f2a` would mean the disk passed. We have never seen it.

**Remaining hypothesis:** U2 wants a disk with an existing FAT and directory
structure, which is what a Towns OS `FORMAT` produces and a zero-filled file
does not. That returns the problem to needing `FORMAT.EXP`, which needs the CD
mounted from a Towns OS shell, which the FreeTOWNSOS shell does not provide
cleanly.

## FORMAT.EXE running, and the keyboard fix

**Injected `FORMAT.EXP` into the FreeTOWNSOS boot floppy.** The OS shell has no
builtin formatter, but the game CD ships `FORMAT.EXP`, and the boot floppy has
`RUN386.EXE`. Built `tools/addfile-fat12.js` to add a file to an FM Towns 2HD
FAT12 image directly:

- geometry read from the BPB: 1024 B sectors, 1 sector/cluster, 1 reserved,
  2 FATs of 2 sectors, 192 root entries, 1232 sectors
- root dir at `0x1400`, data at `0x2c00`, clusters from 2
- allocates from the first free cluster and links the FAT12 chain
- writes the 32-byte directory entry

Result: `FDIMG_FMT.BIN`, verified as `FORMAT EXE`, cluster 245, 208930 bytes,
chain 245-449 with no overlap (original image data ends at 244). `dir` lists it
after a fresh boot, and typing `format` starts the Towns OS formatter, whose own
strings confirm it is the real thing:

```
0x7d2c ディスクの初期化              "disk initialisation"
0x7d40 初期化するドライブを選んでください  "select the drive to initialise"
0x7ee4 ディスクの初期化をしています      "initialising disk"
0x7e3c 正常に終了しました              "completed successfully"
```

**Keyboard fix, and a general gotcha.** Typing `b:` produced `b+`. The cause is
Tsugaru's default `KEYBOARD DIRECT` mode, which sends raw keycodes based on
physical layout, so a UK keyboard's Shift+`;` does not become a colon. Fix:

```
KEYBOARD TRANSLATE
```

which converts typed characters to FM Towns keycodes regardless of layout,
confirmed by the console reply `Keyboard TRANSLATION Mode 1`. After that `b:`
types correctly. **Anyone driving this emulator from a non-Japanese keyboard
should set TRANSLATE before typing anything.**

**Status:** FORMAT.EXE is running and interactive. The remaining step is
selecting drive B: and confirming, which needs a human at the VNC session since
the utility is mouse-driven and `xdotool` pointer events do not reach the VM.
The target image is still all zeros pending that.

## The utility hard drive: Towns OS 2.1 L40 booting, and FORMAT located

**`disk/TownsHDD_V1.HDM`, 15,931,539,456 bytes.** From
`nfggames.com/forum2/index.php?topic=6954.0`, where the author describes it as a
pre-installed FM Towns hard drive for real hardware and Tsugaru.

**Measured:** only the first 2 GB has content (1,069 of 15,194 one-MB blocks,
7%). Expected, because the author used a 16 GB SD card and said "only SCSI
Device 0 with 10 partitions which equal 2GB roughly are being utilized".

`disk/HDD V1.rar` contains exactly the same two files already extracted. No new
content.

**The partition table is at offset 0x200**, entries of 16 bytes plus a 16-byte
name. Decoded names:

| # | start | size | name |
|---|---|---|---|
| 1 | 0x000003 | 0x04cbc4 | `MS-DOS` `TownsOS` |
| 2 | 0x000488 | 0x0003f8 | `MS-DOS` `V2.1L40 SYSTEM` |
| 3 | 0x000880 | 0x0003f8 | `MS-DOS` `Doujinshoft1` |
| 4 | 0x000c78 | 0x0003f8 | `MS-DOS` `Doujinshoft2` |

**The boot failure was the CMOS.** Tsugaru does not scan for partitions; it reads
the drive assignment from CMOS. Booting with a fresh CMOS found no bootable
partition and stopped at the IPL. Using the supplied `disk/CMOS.DAT` instead:

```
-CMOS /data/CMOS_HDD.bin -HD0 /disk/TownsHDD_V1.HDM -BOOTKEY H0
```

boots to a **Towns OS V2.1 L40 windowed desktop** (48% #cccccc, 37% #ffffff, blue
UI chrome). The forum post states this directly: "G Partition must be selected as
your boot partition as that has TownsOS on it."

**`FORMAT` located.** Scanning the used 2 GB for the string gives a hit at
`0x1ABB59E`, and the nearest executable header before it is `MP` at
`0x1AB5589`, a Phar Lap 386 executable, the same container as the Ultima games.
The help text it contains is the real Towns OS formatter:

```
FORMAT <ドライブ名> を実行すると, RECOVER <ドライブ名> が実行できなくなります
UNFORMAT [/J]
UNFORMAT [/U] [/L] [/TEST] [/P]
UNFORMAT /PARTN [/L] [/P]
  /J     MIRROR ファイルを作り直す...
```

So `FORMAT` takes a drive letter, exactly as expected, and it exists on this
disk. It has not yet been run.

**Also on the disk per the author:** partition N has a High C compiler, Basic 386
and assembler with C libraries; J/K/L have pre-installed games including Ultima
Underworld II as `UW2TOWNS`.

**Status:** Towns OS 2.1 boots. The formatter is present and identified. Running
it requires driving the desktop GUI, which `xdotool` pointer events do not
reliably reach, so it needs a human at the VNC session.

---

---

**[Save files and the roster format](save-files.md)** **[Running the game, and reading the machine](playing-and-environment.md)**

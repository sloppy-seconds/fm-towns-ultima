# Ultima Trilogy I-II-III (FM Towns, 1990)

Playing, and taking apart, the Fujitsu FM Towns release of *Ultima Trilogy 1-3*.

## Where the game comes from

The game is commercial software still in copyright, so it is not in this
repository and never will be. You supply it. The copy this work was built
against is:

> **https://archive.org/details/fmtownscdcollection**
> file: `FM-Towns CD/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[+UserDisk].zip`

The zip contains the CD image as four files (`.img`, `.ccd`, `.cue`, `.sub`) and
the save floppy (`[UserDisk].hdm`). Unpack it into this directory. Section 0
gives checksums so you can confirm you have the same rip.

You also need the FM Towns ROMs, which the emulator requires. Section 2 covers
that, including a free set with no copyright problem.

## What this repository contains

Nothing copyrighted. Scripts, tests and documentation only. Everything the game
needs is supplied by you, and everything derived from the disc stays gitignored.

## Four things you might want to do

| you want | start here |
|---|---|
| Play Ultima II in a browser, nothing installed locally | [Section 3](#3-play-in-a-browser) |
| Play it locally with the emulator | [Section 4](#4-play-locally-with-the-emulator) |
| Make a character without fighting the menus | [Section 5](#5-making-a-character) |
| Take the game apart | [Section 0](#0-reproducing-this-work), then `FINDINGS.md` |

## 0. Reproducing this work

Everything about the disc can be reproduced from the archive.org zip alone.

1. Download the zip linked above.
2. Unpack it into this directory. You should end up with the five files in
   section 1.
3. Run:

```bash
node tools/verify.js     # every assertion about the disc, exits 0 if all pass
node extract-u2.js       # writes extracted/u2/
```

`tools/verify.js` is the authority for what is established, currently 107
assertions. It checks the rip identity (sizes and MD5s), the disc structure, the
executable headers, the toolchain, the U2 asset inventory, every graphics claim,
every sound claim, and the negative results. A claim in `FINDINGS.md` not
asserted there should be treated as unverified.

Expected source file checksums, so you can confirm you have the same rip:

| File | Size | MD5 |
|---|---|---|
| `Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img` | 141,649,200 | `1a0b01f4498b561878dbc49ffb9e1af6` |
| `Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).ccd` | 2,137 | `f89a0640f0a2e75beb3763e80b7be352` |
| `Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).cue` | 415 | `6f931bead286bac24c03ad687f40ac8d` |
| `Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).sub` | 5,781,600 | `6ad09bf5dde849b1d3fa6b00f7ab6ee0` |
| `Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm` | 1,261,568 | `5ae4dc119f990adde82a2b91c0b7feef` |

If the MD5s differ you have a different rip and results will legitimately
differ. `verify.js` will say so rather than failing silently.

**Nothing copyrighted is in this repository.** The game, its artwork, its audio
and its ROMs are commercial software still in copyright. All of it is
gitignored and a pre-commit hook blocks it. This repository is scripts, tests
and documentation. You supply the game, following this section.

Install the guard after cloning:

```bash
ln -sf ../../tools/precommit-guard.sh .git/hooks/pre-commit
```

## 1. What is in this directory

| File | Size | What it is |
|---|---|---|
| `*.img` | 141,649,200 B | Raw 2352-byte/sector CD dump, 60,225 sectors (13:25) |
| `*.cue` | 415 B | 8 tracks: track 1 data, tracks 2-8 CD audio |
| `*.ccd` | 2137 B | CloneCD TOC for the same disc |
| `*.sub` | 5,781,600 B | Subchannel data, 96 B per sector |
| `*[UserDisk].hdm` | 1,261,568 B | FM Towns 2HD floppy: the player save disk |
| `run.sh` | | Launcher (see section 4) |
| `extract-u2.js` | | Extracts Ultima II assets (see section 7) |

Facts confirmed by parsing the image, not assumed:

- Track 1 is ISO 9660, volume label `TRILOGY`, ~112 files across `\`, `\GRAPH`,
  `\SOUND`, `\UT1`, `\UT2`, `\UT3`.
- The game executables are `DARKNESS.EXP`, `ENCHANT.EXP`, `EXODUS.EXP`, Pharlap
  386|DOS-Extender images run through `RUN386.EXE`. The `.EXP` extension means
  "executable", not "export".
- `CONTROL.EXE` plus `TMENU.INF` form the boot menu that picks which of the
  three games to launch.
- The games are written in **C** and compiled with **MetaWare High C** for 386
  protected mode. Every game `.EXP` carries `High C Run-time Library Copyright
  (C) 1983-1988 MetaWare Incorporated`, plus Fujitsu's `TOWNS SOUND LIBRARY`
  and `EUPHONY DRIVER` by Joe Mizuno. `RUN386.EXE` is Phar Lap's DOS Extender,
  itself a High C build, so the toolchain is consistent across runtime and
  game. Compiled C codegen shows through as ~440 standard `push ebp` then `mov
  ebp,esp` function prologues in `DARKNESS.EXP`.
- Tracks 2-8 are CD audio, peaking around +/-15,000 in 16-bit signed stereo.
  Extracting the disc as a plain ISO discards all of it.
- The graphics are 16bpp art wrapped in TIFF headers whose geometry tags are
  wrong (they claim 257x169 while holding 512x169 of data). Only the game can
  read them meaningfully, which is expected rather than corruption.

`(Jp-En)` means the text is in English with Japanese produced only where the
machine needs it. No translation patch is required.

## 2. What you need to download

### The emulator: Tsugaru

FM Towns emulator by CaptainYS. BSD 3-clause, actively developed, roughly 97%
of the commercial catalogue runs.

1. Go to <https://github.com/captainys/TOWNSEMU/releases>.
2. Open the newest release that has assets. Releases are marked
   *pre-release* on GitHub, so **do not trust `/releases/latest`** or the
   green "Latest" badge, they will show nothing. Pick the newest dated tag
   (for example `v20260522`).
3. Download `ubuntu_binary_latest.zip`, about 4.3 MB.
4. Unpack it so that both executables sit directly inside `emulator/`:

```
emulator/Tsugaru_CUI
emulator/Tsugaru_GUI   (optional, needs Qt6)
```

   `Tsugaru_GUI` shells out to `Tsugaru_CUI` and will not start without it in
   the same directory.

Building from source is also fine:

```
git clone https://github.com/captainys/TOWNSEMU.git
cd TOWNSEMU/gui/src
git clone https://github.com/captainys/public.git
cd .. && mkdir build && cd build
cmake ../src && cmake --build . --parallel
```

You also need `xorg-xwayland` if you are on a Wayland session.

### The ROMs: FreeTowns, no copyright problem

Tsugaru needs FM Towns ROM images. You can extract them from real hardware, but
there is a free and legal replacement set built for exactly this purpose.

1. Download <https://ysflight.in.coocan.jp/FM/towns/FreeTOWNS/ROMS.zip>
2. Unpack the contents into `emulator/ROMS/`.
3. You should end up with at least `FMT_SYS.ROM` and `FMT_DOS.ROM` in there.

Background and the source for those ROMs: <https://github.com/captainys/TOWNSROM>
plus the project page at <http://ysflight.com/FM/towns/FreeTOWNS/e.html>.

If you use ROMs dumped from real hardware instead, the names differ
(`IPLROM.DAT`, `CGROM.DAT`, and so on). `run.sh` accepts either. Towns OS
software that depends on the Fujitsu font ROM may render text badly with the
free set. The Ultima games do not need Japanese input, so this is not a
blocker.

## 2b. Use the CCD, not the CUE

This disc has `PREGAP 00:02:00` before track 2, and that is a trap.

Tsugaru's author documents the problem directly: a CUE file does not record
which of two incompatible PREGAP interpretations produced it. Alcohol 52%
treats PREGAP as affecting only its own track, ImgBurn as affecting every
later track, and the resulting track start times differ for the same disc. The
emulator has no way to tell which convention was used, so it cannot compensate.
The README's verdict is that CUE is "absolutely inappropriate" for preservation
and recommends `.MDS` or `.CCD`.

The CCD here records the unambiguous answer: track 1 ends at sector 8999 and
track 2 starts at 9000, with 450 real zero sectors in the image itself. So:

- Feed Tsugaru the **`.ccd`**. `run.sh` does this automatically.
- Keep the `.img` beside it, unmodified.
- Do **not** convert to `.bin`/`.cue` or extract an ISO. Both lose or mangling
  the audio track alignment.

## 3. Play in a browser

The quickest path, and the only one that needs nothing installed on your machine
beyond a browser and a container runtime.

### Vendor the emulator and ROMs

```bash
./tools/vendor.sh              # Tsugaru + the free FreeTOWNS ROMs, into vendor/
```

Both land in `vendor/`, which is gitignored. Re-running is safe. `--force`
re-downloads, `--emulator` or `--roms` fetch one. The Tsugaru release is pinned
so the setup is reproducible.

### Start the container

```bash
./tools/container-run.sh start
```

This builds the image on first run, then starts Tsugaru under Xvfb, with x11vnc
and noVNC in front of it, plus a supervisor that owns the emulator's terminal. It
prints the URLs when ready.

| port | what |
|---|---|
| 6080 | noVNC, the browser view of the game. `http://<host>:6080/vnc.html` |
| 6080 | the character editor, at `http://<host>:6080/editor` |
| 5900 | raw VNC, if you prefer a native client |
| 8080 | the HTTP API |

```bash
./tools/container-run.sh status     # running? on which ports
./tools/container-run.sh logs       # follow the container output
./tools/container-run.sh stop       # tear down
```

Override ports with `PORT_WEB`, `PORT_VNC`, `PORT_API`, and the screen size with
`RESOLUTION` (use `1024x800x24`, the emulator window is 640x496 and a 640x480
virtual screen clips it).

### Does this work on macOS or Windows?

Probably, with a caveat worth stating plainly rather than implying support that
has not been tested.

*Everything is ordinary Linux containers.* The image is Ubuntu, and the pieces
inside it are Xvfb, x11vnc, noVNC and the emulator, none of which care about the
host OS. `tools/container-run.sh` detects SELinux and only adds the `:z` mount
suffix where it is enforcing, which is what breaks on Docker Desktop if applied
blindly.

The caveat is that **it has only been tested on Linux**, specifically Fedora
Bazzite with rootful podman. On macOS and Windows the likely snags are performance
under the virtual machine those runtimes use, and the emulator wanting a window
(the container provides one via Xvfb, so this should be fine). If it does not
work, the browser-based editor below needs no container at all.

### The API

The supervisor wraps the emulator in HTTP so the game can be driven and inspected
without looking at a screen. Useful for automation, and for testing a change
without watching it happen.

```bash
curl -s http://<host>:8080/api/status                     # is it running
curl -s 'http://<host>:8080/api/screen?mode=stats'        # colour census
curl -s 'http://<host>:8080/api/screen?mode=text'         # screen as a character grid
curl -s 'http://<host>:8080/api/screen?mode=ascii'        # screen as luminance ramp

# press keys. Named keys are more reliable than typed text for menus.
curl -s -X POST -H 'content-type: application/json' \
  -d '{"keys":["Escape","Down","Return"]}' http://<host>:8080/api/keys

curl -s -X POST -H 'content-type: application/json' \
  -d '{"line":"PRI PALETTE"}' http://<host>:8080/api/cmd   # live palette
```

`mode=stats`, `ascii` and `text` exist because a screenshot is useless to a
script. `stats` answers "is this screen in colour yet" with a colour census,
`ascii` gives layout, and `text` gives a character grid for reading menus.

Full route list in `tools/README.md`. The save-disk routes (`/api/save/info`,
`/api/save/slot`, `/api/save/clone`, `/api/save/delete`) are covered in section 5.

### Reading hardware state

`tools/debug-session.sh` runs the same emulator with its debugger attached,
headless over SSH. That is how the live palette was captured. See
`tools/README.md`.

## 4. Play locally with the emulator


```
./run.sh
```

Expected layout:

```
fm-family-ultima-trilogy/
├── emulator/
│   ├── Tsugaru_CUI
│   ├── Tsugaru_GUI          (optional)
│   └── ROMS/
│       ├── FMT_SYS.ROM
│       └── FMT_DOS.ROM
├── saves/                   created on first run
├── run.sh
├── *.img  *.cue  *.ccd  *.sub
└── *[UserDisk].hdm
```

Environment overrides, if you keep the pieces elsewhere:

```
EMU_DIR=/path/to/emulator ROM_DIR=/path/to/roms SAVE_DIR=/path/to/saves ./run.sh
```

Pass extra Tsugaru options with `EXTRA`:

```
EXTRA="-SCALE 200" ./run.sh
```

The script runs:

```
Tsugaru_CUI <ROM_DIR> -CD <disc>.ccd -CMOS saves/CMOS.BIN -FD0 <UserDisk>.hdm
```

## 5. Making a character

Ultima II stores characters as plain ASCII, so there are three ways to make one
and they all produce the same result. Pick whichever suits you.

### 5a. In the browser, no install

**https://sloppy-seconds.github.io/fm-towns-ultima/**

Open your save disk (`.hdm` or `.img`, 1,232 KB), edit the four slots, download
the result. Nothing is uploaded and your original file is never touched.

It enforces the game's own rules, because they are known:

- 90 points to spend, at least 10 in each attribute, with a live counter
- race, sex and profession bonuses applied, measured from characters the game
  created, and shown inline so you can see what each choice gives
- the shop discount threshold tracked live, since CHA + INT of 40 is what makes
  early game affordable
- food entered as rations, converted to the stored hundredths

A red **Cheat mode** button removes the cap and the minimum and reveals a set-to-
maximum button. The game does not check, so it works, but it is not how the game
plays.

### 5b. From the command line

```bash
node tools/makesave.js --out hero.hdm \
  --party --name HERO --race H --sex F --prof W --stats 25,25,10,10,10,10
```

`--stats` is the base allocation as you would type it in game. The measured
modifiers are applied and the result clamped to 99. Repeat `--party` for up to
four characters. Food is given in rations.

This imports the same modules the web page uses, so it is also the headless test
for the page. Every character is read back and re-parsed before it reports
success.

### 5c. In the game

Start a character normally, but know three things that trip everyone up.

**"A WRONG DISK" is harmless.** It appears twice during startup, before the
splash screen, one per floppy drive. Press space through both. It does not mean
your disk is bad and nothing needs fixing.

**Choosing 0 breaks out of the character creation loop.** At the
`create entry 1-4` prompt, picking 1 to 4 starts another character. Choosing
**0** returns to the previous menu and is the only way out. Ultima I behaves the
same way. If you create a second character after a successful save, it overwrites
slot 0, which makes it look as though the save did not work.

**The slot list is 1-indexed, the file is 0-indexed.** In-game slot 1 is
`(0)NAME` in `ROSTER1.UT2`.

The full sequence:

1. Double-click the Ultima II icon.
2. Press space through the two disk warnings.
3. Press space at the splash.
4. Generate character, then create a character.
5. Allocate points, choose race, sex and profession, type a name, press Enter,
   answer Y.
6. "saving world data" appears, then you are back at `create entry 1-4`.
   **Choose 0.**
7. Look at a character, pick the slot, confirm it is there.
8. Press space, choose **0** again at the slot prompt, then main menu.
9. Journey onward, select the character, answer Y, press space at "player
   selected", wait at "loading".

### What the modifiers actually are

Measured by creating characters with 10 in every attribute, one per combination,
and reading what the game stored. This port differs from the published tables in
three places.

| choice | bonus |
|---|---|
| Male | **+10 Stamina** |
| Female | **+10 Charisma** |
| Human | +5 Intelligence |
| Elf | +5 Agility |
| Dwarf | +5 Strength |
| Bobbit | **+10 Wisdom, -5 Strength** |
| Fighter | **+10 Strength, +10 Agility** |
| Cleric | +10 Wisdom |
| Wizard | +10 Intelligence |
| Thief | +10 Agility |

Where most references say Stamina is never boosted, male gives it +10. Fighter
splits its +15 into +10 STR and +10 AGI. Bobbit carries a penalty, which no
published table has.

## 6. Playing Ultima II for the first time

**"A WRONG DISK" is harmless.** It appears twice during Ultima II's startup,
before the splash screen. Press space through both. The game then runs normally.
No disk preparation is needed, and the `[UserDisk]` from the zip works as
shipped. See `FINDINGS.md` 8.5.

**Slot numbering catches everyone.** The character list you pick from is
1-indexed but the roster file stores slots from 0, so in-game slot 1 is
`(0)NAME`.

**Choosing 0 breaks out of the character-creation loop.** This is the step that
stumps people, and it looks like a bug. At the `create entry 1-4` prompt,
picking **1 to 4** puts you back into character creation again. Picking **0** is
the way out: it returns you to the menu you came from. Ultima I behaves the same
way. So the sequence is create the character, confirm the save, and then choose
**0** at the next slot prompt to leave.

This is why Ultima I looks like it never saves. It does save, completely and
correctly, then loops back to creation until you press 0. Repeatedly creating
characters overwrites slot 0, so it can look like nothing is being kept.

**Quit properly.** Type `Q` then Enter in `Tsugaru_CUI`. Closing the window
skips the CMOS write, so BIOS settings and your save disk state are not flushed.

**Choosing a game.** The disc boots into the `CONTROL` menu, a grey browser with
Japanese labels. Double-click the icon for the game: `ULTIMA I` is icon 1,
`ULTIMA II` icon 2, `ULTIMA III` icon 3. The launch commands are in `TMENU.INF`
on the disc if the icons are ambiguous.

**Starting a game, step by step.** This is the sequence that trips people up, so
it is written out in full. Ultima II:

1. Double-click the Ultima II icon.
2. "A WRONG DISK [push space]" appears **twice**. Press space through both. It
   is harmless. The splash screen follows.
3. Press space at the splash.
4. Generate character, then create a character.
5. Allocate stats, choose race, sex and profession, type a name, press Enter,
   answer **Y**.
6. "saving world data" appears.
7. The game returns to `create entry 1-4`. **Choose 0.** Picking 1 to 4 starts
   character creation again. This is the step that looks like a bug.
8. Look at a character, choose the slot, check the character is there.
9. Press space, choose **0** again at the slot prompt, then main menu.
10. Journey onward, select the character, answer **Y**, press space at
    "player selected", wait at "loading".

Steps 7 and 9 both require **0**, and neither prompt tells you that.

**Controls.** The FM Towns has no mouse for this game. It is keyboard driven.
`Tsugaru_CUI` maps host keys directly, so the commands match the on-screen
legend. If the party will not move, the arrow keys have been captured by the
emulator as a gamepad instead of passed through, so remap them in the GUI under
the gameport settings.

**First boot.** The game may write to the CMOS on start. That is normal and is
why `saves/CMOS.BIN` appears after the first clean exit. Delete that file to get
back to a clean BIOS state.

## 7. If it does not work

| Symptom | Cause |
|---|---|
| Boot screen freezes or "ROM not found" | `FMT_SYS.ROM` missing from `ROM_DIR`, or `ROM_DIR` points at the ROM files instead of the directory |
| Music missing but game runs | Wrong track map. Confirm you are on the `.ccd`, not a converted `.bin` |
| Audio offsets drift after track 1 | A CUE produced by a third-party tool was used. Use the CCD |
| Window never appears on Wayland | Install `xorg-xwayland` |
| Text renders incorrectly | Using real-hardware ROMs without `FONT.ROM`, or a partial free set |
| Party will not move | Arrow keys are mapped to the emulated gamepad. Remap in the GUI |

Emulator compatibility list, including Origin titles confirmed working:
<http://ysflight.com/FM/towns/FreeTOWNS/e.html>

## 8. Extracting Ultima II assets

```
node extract-u2.js
```

Writes `extracted/u2/` with `map/`, `sprites/`, `title/`, `sfx/` and a
`manifest.txt` recording what decoded and what did not. No dependencies, no
`sudo`. The disc is read in place and never modified.

The file list is not guesswork. `ENCHANT.EXP` contains its own asset paths as
literal strings (`Q:\GRAPH\MAP2_1.TIF`, `A:\ROSTER1.UT2`, and so on), so the
extractor uses exactly the set Ultima II opens. Confirmed from those strings:

- **3 maps**: `MAP2_1`, `MAP2_2`, `MAP2_3`
- **6 sheet/sprite files**: `PLAYER`, `ENEMY2`, `EXTRA`, `CHEST`, `DUNG1`, `DUNG2`
- **14 title and ending images**: `HEADTTL`, `U2TITLE1-4`, `U2END1-5`, `GAI`,
  `DUNMON1-3`
- **14 sound effects**, out of the 15 `.SND` files on the disc
- **3 save files** `ROSTER1.UT2` and `WORLD1-4.UT2`, which live on the UserDisk
  floppy and do not exist until you start a game

### Graphics

Two different layouts, both determined by exact byte counts rather than by the
TIFF headers, which on this disc are unreliable:

| Layout | Sizes | Rule |
|---|---|---|
| Sheet | 320x104 | 1 pixel per byte, high nibble only |
| Picture | 640x400, 256x200, 352x352, ... | 4bpp packed, 2 pixels per byte |

Maps decode as legible terrain (coastlines, rivers, mountain rows). Pictures
decode as legible title screens with readable text. Each picture is also
written with a `_planar.png` suffix holding the planar interpretation, so the
layout choice stays inspectable instead of being baked in silently.

Two honest caveats:

- **No palette.** These are 4-bit palette indices written as greyscale. The
  index-to-colour mapping is not stored in the image files, it is set by code,
  so the PNGs show structure and shapes but not original colours.
- **`U2TITLE1` is two screens stacked.** It is 640x400 of packed pixels, which
  is twice the 640x200 the visible title occupies. Row 200 is where the first
  screen ends. The decode is correct, the layout is just a stacked pair.
- **`DUNMON1-3` do not fit any layout.** 213504, 53760 and 13824 bytes against
  8192, 2048 and 512 expected for their declared sizes. They are emitted on a
  best-effort basis and should be treated as unresolved.

### Sound effects

`.SND` layout, verified against all 15 files on the disc. Every one satisfies
`filesize == 32 + u32@12` exactly:

```
 0   char[8]  name
 8   u32      flag (1 for most files, junk in FIRE and WHAT)
12   u32      payload length, authoritative
16   u32      payload length-1 for BUMP/FIRE/WHAT, else 0
20   u32      same as 12 for BUMP/FIRE/WHAT, else 0
24   u32      nominal sample rate, unreliable
28   u16      always 60
30   u16      always 0
32   bytes    payload, runs to end of file, no trailer
```

Field 24 is 1960 Hz for 13 of 15 files, but reads 2426302 for `BUMP`, 4292870291
for `FIRE` and 1568 for `WHAT`. The WAV header uses 1960 Hz as the
best-supported value and the manifest reports the raw field, so the guess stays
visible rather than being silently trusted. If an effect sounds wrong-pitched,
that field is the thing to revisit.

### What is not extracted

- **CD audio** (tracks 2-8): the trilogy soundtrack, not U2-specific. Extract
  with `bchunk` against the `.cue` if you want it.
- **`SOUND/ULTIMA.FMB`**: the FM instrument bank. It is shared by all three
  games and needs a YM2612 renderer to become audio, so there is nothing to
  convert here.
- **`.EUP` files**: EUPHONY driver preset tables, not audio. No waveform data.


## 9. The tools, and what each is for

Everything here exists because something needed it. Listed by what you would use
them for rather than by filename.

### Playing and running

| tool | what it does |
|---|---|
| `tools/vendor.sh` | Downloads Tsugaru and the free FreeTOWNS ROMs into `vendor/`. Pinned version, so the setup is reproducible. |
| `run.sh` | Runs the emulator directly on the host, for when you have a display. |
| `tools/container-run.sh` | Builds and runs the browser-playable container. Ports, logs, shell. |
| `tools/try.sh` | Starts the emulator on **fixed** ports with a chosen floppy, tearing down the previous container first. Use this rather than inventing new ports. |
| `tools/mame-run.sh` | The same idea for MAME. Kept because MAME's floppy controller is a genuinely different implementation, but read `FINDINGS.md` 8.4 before spending time on it. |

### Save disks and characters

| tool | what it does |
|---|---|
| `tools/savedisk.js` | Reads and writes an FM Towns save disk from the shell: `ls`, `cat`, `slots`, `clone`, `set`, `world-copy`, `newdisk`. |
| `tools/makesave.js` | Builds a disk with characters from the command line, applying the measured modifiers. Imports the browser editor's own modules. |
| `tools/test-savedisk.js` | 25 assertions over the FAT12 and roster logic, against a synthetic disk. Needs no game data. |
| `web/` | The browser editor, published at the GitHub Pages URL above. |

### Extraction

| tool | what it does |
|---|---|
| `extract-u2.js` | Everything Ultima II needs: 23 graphics, 14 sound effects, title and ending art. Writes `extracted/u2/`. |
| `tools/cd.js` | Shared library. Disc reader, ISO9660 walk, PNG and WAV writers, decoders for 4bpp packed, planar and byte-per-pixel, and `.SND`. Import this rather than reimplementing a format. |
| `tools/tilesheet.js` | Lays a tile bank out as a labelled PNG grid, so you can see what the 65 `ENEMY2` tiles actually are. |
| `tools/recolour.js` | Renders the extracted greyscale art using the real palette. Run this on `extracted/u2`. |

### Understanding the binaries

| tool | what it does |
|---|---|
| `tools/pharlap.js` | Parses the Phar Lap `MP` and `P3` headers. The size arithmetic is exact, which is how the header layouts were proved. |
| `tools/sym1.js` | Parses the `SYM1` symbol table out of `TMENU.EXP`, then validates that the walk consumes the blob exactly. |
| `tools/crossdiff.js` | Rabin-Karp shared-substring search between executables. Used to find the Fujitsu graphics library inside the game binaries. |
| `tools/findpal.js` | I/O port census and indirect-call correlation. Indicative, not authoritative: see the caveat in `tools/README.md` before trusting it. |

### Verification

| tool | what it does |
|---|---|
| `tools/verify.js` | 107 assertions covering every claim in this repository, read from the disc. The authority on what is established. |
| `tools/precommit-guard.sh` | Blocks a commit containing copyrighted game data. Install as a git hook, see section 0. |
| `tools/palette-reference.js` | Derives the real palette from emulator screenshots by cross-screen consensus. Screenshots are not committed. |
| `tools/debug-session.sh` | Runs the emulator with its debugger, headless over SSH. How the live palette was captured. |
| `tools/addfile-fat12.js` | Injects a file into an FM Towns 2HD FAT12 image. Used to get `FORMAT.EXE` onto a boot floppy. |

`tools/README.md` has the detailed usage for each, plus the command lines.

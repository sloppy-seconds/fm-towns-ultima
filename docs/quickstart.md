# Quickstart

From nothing to playing Ultima II, and to a save disk you can edit in a browser.

Three routes. Pick the one that matches where you are.

| situation | route |
|---|---|
| I have a desktop, Linux or macOS or Windows | [Native](#route-1-native-emulator) |
| The machine is headless or remote, or I want to play in a browser | [Container](#route-2-container-browser-play) |
| I only want to fix a save disk | [Editor alone](#route-3-the-editor-with-no-emulator) |

## What you need either way

**The game.** https://archive.org/details/fmtownscdcollection, file
`FM-Towns CD/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[+UserDisk].zip`. Unpack it
into the repository directory.

**The emulator and ROMs.** One command, on any platform:

```bash
./tools/vendor.sh
```

That fetches Tsugaru and the free FreeTOWNS ROMs into `vendor/`, both gitignored.
Tsugaru publishes Linux, macOS and Windows builds, and the script picks the right
one from `uname`. Override with `TSUGARU_PLATFORM=macos` if detection is wrong.

**Confirm your disc matches:**

```bash
node tools/verify.js     # 107 assertions, exits 0 if all pass
```

If it fails on checksums you have a different rip, and results will legitimately
differ. That is stated rather than silently tolerated.

## Route 1: native emulator

The shortest path, and the one with the fewest moving parts.

```bash
./run.sh
```

That runs Tsugaru with the disc, the save floppy and a CMOS file, using the
`vendor/` you just fetched. Override paths if you keep things elsewhere:

```bash
EMU_DIR=/path/to/emulator ROM_DIR=/path/to/roms SAVE_DIR=/path/to/saves ./run.sh
EXTRA="-SCALE 200" ./run.sh
```

**Platform support.** Only Linux has been tested, specifically Bazzite. The
script itself is plain shell, the emulator publishes macOS and Windows builds, and
nothing in `run.sh` is Linux-specific beyond the executable name. But **macOS and
Windows are untested**, and the likely snags are the executable being
`Tsugaru_CUI.exe`, or macOS wanting the app bundle rather than the bare binary.
If it fails, the container route below is better tested, and the editor route
needs neither.

## Route 2: container, browser play

For a headless host, a remote machine, or playing from another device. Needs
podman, and builds a container locally (911 MB) the first time.

```bash
./tools/container-run.sh start
```

It prints the URLs. Open `http://<host>:6080/vnc.html`.

| port | what |
|---|---|
| 6080 | the game, in a browser. Also `/editor` for the character editor |
| 8080 | the HTTP API, for driving the game without looking at it |

Then follow [playing the game](#actually-playing) below.

The container is the same on any host with a container runtime, but it has only
been tested on Linux. Docker Desktop on macOS and Windows is plausible and
untested: the script only adds the SELinux `:z` mount suffix where SELinux is
actually enforcing, which is the thing that breaks there.

## Route 3: the editor, with no emulator

If you only want to change a save disk, skip everything above.

**https://sloppy-seconds.github.io/fm-towns-ultima/**

Open your `.hdm`, edit the four character slots, download the result. Nothing is
uploaded, no install, and your original file is untouched. Verified to make three
requests and no external ones.

You need a save disk to open. Any of these will do:

- the `[UserDisk].hdm` from the zip, which is already formatted
- a disk you made in game, via the routes below
- a blank one from `node tools/savedisk.js newdisk mydisk.hdm`, which needs no
  emulator and no game

## Actually playing

Start Ultima II and know three things that catch everyone.

1. **"A WRONG DISK" is harmless.** It appears twice during startup, before the
   splash. Press space through both. Nothing needs fixing.
2. **At the splash**, press space.
3. Generate character, then create a character. Spend your 90 points, choose
   race, sex and profession, type a name, confirm with Y.
4. **"saving world data"** appears, then you are back at `create entry 1-4`.
   **Choose 0.** Picking 1 to 4 starts another character. 0 is the way out, and
   it is not obvious.
5. Look at a character to confirm it is there, then 0 again, then main menu.
6. Journey onward, select the character, Y, space at "player selected".

The in-game slot list is 1-indexed while the file is 0-indexed, so in-game slot 1
is `(0)NAME` in the roster.

## Making a save disk to edit

Two ways that do not involve the game's menus.

**In the browser:** open the editor above and press **New blank disk**. It builds
a valid FM Towns save disk from geometry alone. That works because a save disk is
never booted from: the machine starts from CD and only opens the floppy as a data
volume, so no boot sector is needed. Ultima II was confirmed to accept such a disk
and write a character to it.

**From the command line:**

```bash
node tools/makesave.js --out mydisk.hdm \
  --party --name HERO --race H --sex F --prof W --stats 25,25,10,10,10,10
```

That applies the measured stat modifiers and writes a character the game will
load. Open the result in the browser editor to see or change it, then put it back
where the emulator expects your save floppy.

## Where to go next

- [Playing and environment](playing-and-environment.md) for the CD browser, the
  API, and reading the screen as text
- [The save disk](save-disk.md) for why saves were so hard, and the format
- [Save files](save-files.md) for the roster format and the stat modifiers

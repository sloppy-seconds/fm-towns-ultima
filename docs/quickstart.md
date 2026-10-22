# Quickstart

From nothing to playing Ultima II, and to a save disk you can edit in a browser.

Three routes. Pick the one that matches where you are.

| situation | route |
|---|---|
| I have a Linux or macOS desktop | [Native](#route-1-native-emulator) |
| I have Windows | [Container](#route-2-container-browser-play), or native with a bash shell. Both untested. |
| The machine is headless or remote, or I want to play in a browser | [Container](#route-2-container-browser-play) |
| I only want to fix a save disk | [Editor alone](#route-3-the-editor-with-no-emulator) |

## What you need either way

**The game.** https://archive.org/details/fmtownscdcollection, file
`FM-Towns CD/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[+UserDisk].zip`. Unpack it
into the repository directory.

**The emulator and ROMs.** Two downloads.

1. **Tsugaru**, from
   [github.com/captainys/TOWNSEMU/releases](https://github.com/captainys/TOWNSEMU/releases).
   Take the latest tag and pick your platform: `windows_binary_latest.zip`,
   `macos_binary_latest.zip` or `ubuntu_binary_latest.zip`. Unzip it into
   `vendor/emulator/`.

2. **The ROMs**, from
   [ysflight.com/FM/towns/FreeTOWNS](https://ysflight.in.coocan.jp/FM/towns/FreeTOWNS/e.html).
   Unzip into `vendor/roms/`.

   **Yes, Tsugaru needs ROMs.** It emulates the hardware, and the hardware has
   firmware. Tsugaru's own readme says there are two sources: extract them from a
   real FM Towns if you own one, which gives the best fidelity, or use FreeTOWNS
   if you do not. FreeTOWNS is a clean-room reimplementation rather than a Fujitsu
   dump, so there is no copyright problem, and it is the option this project uses.
   The set is compatible with the UNZ emulator too.

On Linux and macOS one command does both:

```bash
./tools/vendor.sh
```

It is a shell script, so on Windows use Git Bash or WSL, or just do the two
downloads above by hand. Under WSL it will fetch the Linux build, which is only
right if you then run the emulator inside WSL.

Either way you should end up with:

```
vendor/emulator/Tsugaru_CUI        (or Tsugaru_CUI.exe)
vendor/roms/FMT_SYS.ROM  FMT_DOS.ROM  FMT_DIC.ROM  FMT_F20.ROM  FMT_FNT.ROM
```

`vendor/` is gitignored, because both halves are somebody else's work.

**Confirm your disc matches:**

```bash
node tools/verify.js     # 107 assertions, exits 0 if all pass
```

If it fails on checksums you have a different rip, and results will legitimately
differ. That is stated rather than silently tolerated.

## Route 1: native emulator

The shortest path, and the one with the fewest moving parts. **Instructions
rather than a script**, because a `.sh` wrapper would only work on two of the
three platforms and this command works on all of them.

Tsugaru takes the ROM directory first, then options. From the repository
directory:

```
vendor/emulator/Tsugaru_CUI vendor/roms \
  -CD   "Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).ccd" \
  -CMOS saves/CMOS.BIN \
  -FD0  "Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm"
```

On Windows the executable is `vendor\emulator\Tsugaru_CUI.exe` and the paths use
backslashes. PowerShell:

```powershell
vendor\emulator\Tsugaru_CUI.exe vendor\roms `
  -CD   "Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).ccd" `
  -CMOS saves\CMOS.BIN `
  -FD0  "Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm"
```

On macOS, if you unzipped the release there may be an app bundle. Run the binary
inside it rather than the `.app` itself.

That is the whole invocation. What each option does:

| option | why |
|---|---|
| `vendor/roms` | the ROM directory. First argument, no flag. |
| `-CD <file>.ccd` | the disc. Use the `.ccd`, not the `.cue`: this disc's cue uses `PREGAP`, which is ambiguous. The `.img` must sit beside it, unmodified. |
| `-CMOS saves/CMOS.BIN` | BIOS settings. Created on first clean quit, which is normal. Delete it to reset. |
| `-FD0 <file>.hdm` | the save floppy in drive A. Omit it if you have none, and the game will report a wrong disk at character creation. |

Add `-SCALE 200` for a larger window. Type `Q` then Enter to quit: closing the
window skips the CMOS write.

`./run.sh` does the same thing with a few conveniences (path discovery, checking
the files exist, warnings about Wayland and missing ROMs). It is a shell script,
so use it on Linux and macOS, or on Windows under Git Bash or WSL. The raw
command above needs none of that.

**Only Linux has been tested**, specifically Bazzite. **macOS and Windows are
untested.** The emulator does publish builds for both, and the command above is
the one it documents, but no machine has run this. The likely snags are macOS
wanting the app bundle rather than the bare binary, and Windows objecting to
argument quoting.

If it does not work, the editor route needs neither emulator nor game.

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

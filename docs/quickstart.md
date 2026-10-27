# Quickstart

From nothing to playing Ultima II, and to a save disk you can edit in a browser.

Three routes. Pick the one that matches where you are.

| situation | route |
|---|---|
| I have a Linux or macOS desktop | [Native](#route-1-native-emulator) |
| I have Windows | [Container](#route-2-container-browser-play), or native with a bash shell. Both untested. |
| The machine is headless or remote, or I want to play in a browser | [Container](#route-2-container-browser-play) |
| I want a save disk, or to fix one, with nothing installed | [Editor alone](#route-3-the-editor-with-no-emulator) |

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
./tools/check-disc.sh
```

Plain shell, no dependencies beyond `md5sum` or `md5`. It compares sizes and
checksums against the rip this work was built on, and peeks at sector 0 to
confirm the disc is a MODE1 image. If anything differs you have a different rip
and results will legitimately differ.

There is also `node tools/verify.js`, which checks 107 things including the
executable headers, the asset inventory and every format claim. You only need
that if you are going to run the extractors, because those need Node anyway. For
playing, `check-disc.sh` is enough.

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

### Driving the game from a script, without clicking

`tools/u2flow.py` takes the game from the Towns OS menu to a loaded character
with no judgement. It checks the screen before every keypress and stops rather
than guessing, because by hand the same steps went wrong repeatedly: keys sent
into the wrong screen, a space that quit the game, several restarts.

**Run it inside the container, not on the host.** This is the one thing that will
cost you an hour if you miss it. The script drives the emulator with `xdotool`
against `DISPLAY=:99`, and that display exists only inside the container:

```
host       /tmp/.X11-unix/  ->  X0
container  /tmp/.X11-unix/  ->  X99
```

Run from the host it fails with
`subprocess.CalledProcessError: ['/usr/bin/xdotool', 'mousemove', ...]`, which
reads like a wrong icon coordinate and is not. The scripts are baked into the
image at `/opt/u2` for this reason:

```bash
# what screen is showing, changing nothing
podman exec fmtowns python3 /opt/u2/u2flow.py --status

# drive it: menu -> splash -> ULTIMA II -> Journey Onward -> pick a character
podman exec fmtowns python3 /opt/u2/u2flow.py --journey
```

`--status` reports whether the Towns menu or the game is up, whether the red bar
is empty, and what the game menu has selected. `--dry-run` checks the screen and
sends nothing.

To start a particular character, put a disk with that character in
`saves/userdisk.hdm` first. `saves/fresh_game.hdm` begins a new one and
`saves/maxed_four.hdm` has four fully-statted characters:

```bash
cp saves/fresh_game.hdm saves/userdisk.hdm
./tools/container-run.sh start
podman exec fmtowns python3 /opt/u2/u2flow.py --journey
```

The container copies the disc's own `[UserDisk].hdm` into `saves/userdisk.hdm`
only if that file is absent, so a disk placed there by hand is kept.

**The API is on `127.0.0.1`, not `localhost`.** On this host `localhost` resolves
to IPv6 `::1`, nothing listens there, and every call fails with curl exit 56 in
6 milliseconds, which looks like a crashed supervisor.

| endpoint | what |
|---|---|
| `GET /api/status` | is the emulator running, how many commands sent |
| `GET /api/screen?mode=stats` | colour census. `allGrey: false` means a graphics screen |
| `POST /api/key` / `/api/keys` | one key, or a string |
| `POST /api/clickat` | click at a fraction of the window, inside the container |
| `POST /api/cmd` | a raw emulator console command |
| `POST /api/palette` | the live 16-entry palette, both pages |

`GET /api/screen` also takes `mode=ascii` and `mode=text`, which is how the
screen gets read without a vision model.

```bash
curl -s -m 20 -o /tmp/s.json 'http://127.0.0.1:8080/api/screen?mode=stats'
```

The container is the same on any host with a container runtime, but it has only
been tested on Linux. Docker Desktop on macOS and Windows is plausible and
untested: the script only adds the SELinux `:z` mount suffix where SELinux is
actually enforcing, which is the thing that breaks there.

## Route 3: the editor, with no emulator

Skip everything above. This makes a save disk, or changes one, with nothing
installed: no emulator, no ROMs, no game, no container.

**https://sloppy-seconds.github.io/fm-towns-ultima/**

Press **New blank disk**, fill in a character, press Save, then Download. That
is a complete save disk, and you started with nothing. No emulator, no game.

If you already have a disk, open it instead: the `[UserDisk].hdm` from the zip,
or one you made in game. Nothing is uploaded, no install, and your original file
is never modified. Verified to make three requests and no external ones.

Making a disk from scratch works because a save disk is never booted from. The
machine starts from CD and only opens the floppy as a data volume, so the boot
sector is not needed and the page builds a valid filesystem without one. Ultima
II was confirmed to accept such a disk and write a character to it.

### Getting the disk into the emulator

The download is named for what you opened, so a new disk arrives as
`new-savedisk-edited.hdm`. The emulator does not care what the file is called,
but **the command below does**: it names the file explicitly. Either rename it,
or point the command at whatever filename you have.

**Native emulator.** Put the file anywhere and change the `-FD0` path:

```
-FD0  "path/to/your-savedisk.hdm"
```

Or keep the default by overwriting the shipped disk, which is what most people
do. Move the original aside first so you are not destroying it:

```
mv "Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm" save-disk-original.hdm
mv ~/Downloads/new-savedisk-edited.hdm "Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm"
```

**Container.** The container only sees `saves/`, so copy the file there and
restart it with that name:

```bash
cp ~/Downloads/new-savedisk-edited.hdm saves/mydisk.hdm
./tools/try.sh saves/mydisk.hdm
```

`try.sh` mounts whatever you give it as drive A and starts on fixed ports, which
is simpler than editing `container-run.sh`.

If the game says **A WRONG DISK** twice on startup, that is normal and unrelated.
Press space through both. It only becomes a real problem if character creation
then fails.

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

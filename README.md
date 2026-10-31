# Ultima Trilogy I-II-III (FM Towns, 1990)

Playing, and taking apart, the Fujitsu FM Towns release of *Ultima Trilogy 1-3*.

**[Quickstart](docs/quickstart.md)** &nbsp;·&nbsp;
**[All documentation](https://sloppy-seconds.github.io/fm-towns-ultima/docs/)** &nbsp;·&nbsp;
**[Save game editor](https://sloppy-seconds.github.io/fm-towns-ultima/)** and its
**[source](web/)**

**This is a non-commercial game preservation project.**

- You are expected to **own your own copy** of the original Ultima / FM Towns game. Nothing
  here hosts or distributes the original media: no disc images, no executables, no ROMs, no
  extracted assets. You supply your own files.
- *Ultima* is a trademark and copyright of its respective owners (Origin Systems, now
  Electronic Arts). *FM Towns* is Fujitsu. This project is not affiliated with, endorsed by,
  or approved by any of them.
- All original game content, disc images, ROMs and assets are the property of their
  respective owners and are **not included** here or in any release.
- What is here is a translation of the game's machine code into readable C++, plus the
  scripts, tests and documentation around it, for preservation and study. It is MIT licensed,
  it comes with no warranty, and it is provided as-is.
- **Rights holder?** Open an [issue](https://github.com/sloppy-seconds/fm-towns-ultima/issues)
  and this comes down. No argument, no runaround.

Full terms: **[licensing and preservation](docs/licensing.md)**.

**You supply the game.** Download

> **https://archive.org/details/fmtownscdcollection**
> file: `FM-Towns CD/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[+UserDisk].zip`

and put your copy in `./game/` for the port, or unpack it into this directory for the
emulator. The FM Towns ROMs are fetched by `tools/vendor.sh`, and the free clean-room set
is fine.

## Play the recompiled port

```bash
# your own copy of the game goes in ./game/
./play.sh
```

One command. It builds the port from the recompiled module that is committed in `module/`,
so there is no recompile, no container and no toolkit needed, and it fetches the font ROM
if you have not. At the game menu pick *Journey Onward* and a character that already
exists: character creation does not work yet, and `Esc` or `Q` ends the run,
so read **[what is broken](docs/port-defects.md)** first. From the zip to a built binary
by hand: **[build the port from source](docs/port-from-source.md)**.

## Play the original, in a browser

```bash
./tools/vendor.sh                # Tsugaru and the free ROMs, into vendor/
./tools/container-run.sh start   # builds the image first time, prints the URLs
```

Open `http://<host>:6080/vnc.html`. For a native window, Windows, macOS, or the
editor with nothing installed: **[docs/quickstart.md](docs/quickstart.md)**.

## The goal, and what the port is

The goal is Ultima II in readable C. Not a summary of what the code seems to do, but
the rules as arithmetic a person could reimplement from, with the data tables and the
control flow that ties them together. That has not happened yet, and
**[why this is hard](docs/why-this-is-hard.md)** is the honest answer to why.

**The port is not the decompilation.** It is the game's own 386 code mechanically
translated into C++ by a recompiler, plus hand-written C++ glue that supplies what
TownsOS would have handed the program at start-up. No decompiler produced it, and no
candidate C was written for it. It is a recompile, and the difference matters.

What it is for is two things. It proves the corpus is complete enough to run the game,
and it is the oracle a real decompile gets checked against, screen by screen, which is
the comparison this project already runs. A decompile with no oracle is a claim, and
what exists now is the oracle, plus a playable game in the meantime. The measured
distance to the reimplementation is **[the gap](docs/reimplementation-gap.md)**.

## Licensing, and why the recompiled code is in git

Ultima II is still in copyright and cannot be bought. This is a non-commercial preservation
project for people who already own it, and it draws a hard line: **the recompiled C++ is in
git and in the releases, the original media never is.** No disc image, no `ENCHANT.EXP`, no
ROM, no extracted asset, here or in any release.

The reason for the split is that the legible thing worth keeping is the translation of the
machine code into C++, and a binary preserves nothing. The module is measured rather than
assumed to be code and not media, and the measurement is a gate. This repository's own work
is under the **MIT licence** in `LICENSE`, which covers the scripts, the docs, the port
front-end and the translation, and covers nothing else.

**Trademarks.** *Ultima* is a trademark and copyright of its respective owners (Origin
Systems, now Electronic Arts). *FM Towns* is Fujitsu. Naming them here is description, not a
claim: this project is not affiliated with, endorsed by, or approved by any of them, and all
original game content, disc images, ROMs and assets remain the property of their owners and
are not included.

**If you hold rights to this game and want it taken down, open an issue or use the contact on
<https://github.com/sloppy-seconds> and it comes down.** No argument will be raised. Full
policy and reasoning: **[docs/licensing.md](docs/licensing.md)**.

## What this repository contains

Nothing that is the game itself. Scripts, tests, documentation, and the recompiled module.
Everything the game needs is supplied by you, and everything extracted from the disc stays
gitignored.

Documentation: **https://sloppy-seconds.github.io/fm-towns-ultima/docs/**

**Almost all of this is Ultima II work.** Ultima I and III sit on the same disc and
were used throughout as cross-validation, never as subjects. The save-editing
machinery generalises to them, because all three write plain ASCII rosters, but
that work has not been attempted. See [the docs](docs/index.md) for what would be
needed and what is genuinely U2-specific.

The editor runs in a browser, needs nothing installed, and edits a save disk
entirely on your machine. If that is all you want, you can stop reading here.

## How this was made

On a **headless Bazzite Linux host**, with no monitor attached, using pi.dev
driving DeepSeek 4.1 flash for under 10 USD of credit. Some later work may use a
local Qwen 3.8 flash model.

That explains two things that otherwise look odd. The container with VNC exists
because there was no display to launch a window into, and the HTTP API exists so
screen state could be read as text rather than seen. Both were built out of
necessity, not as features.

It also explains why the tools verify so aggressively. The agent was confidently
wrong several times, including a written conclusion that Ultima II saving was an
unfixable emulation defect, and the corrections are recorded rather than edited
away. See [how this was made](docs/provenance.md).

## What you can do, and what each route costs

Every route to actually playing needs the game (which you supply) and the FM Towns
ROMs. The routes differ in how much else you install, not in whether you install
anything. The hosted editor is the only thing here that genuinely needs nothing.

| what you want | needs | start here |
|---|---|---|
| Edit a save disk in a browser, nothing installed | the save disk only | [Section 4](#4-making-a-character), the hosted editor |
| Play in a browser, from another machine | podman, emulator, ROMs, game | [Section 2](#2-play-in-a-browser) |
| Play locally with a window | emulator, ROMs, game | [Section 3](#3-play-locally-with-the-emulator) |
| Make a character without the menus | the save disk, or Node for the CLI | [Section 4](#4-making-a-character) |
| Take the game apart | everything above, plus Node | [Section 7](#7-taking-the-game-apart) |

No prebuilt image is published, so "in a browser" means the container is built on
your machine the first time. The honest figures, measured rather than guessed:

| what | size |
|---|---|
| game disc image, from archive.org | 135 MB |
| emulator and ROMs, `tools/vendor.sh` | 24 MB |
| container image, built locally | 911 MB |

So budget a gigabyte and some build time. The image is Ubuntu with Xvfb, x11vnc,
noVNC and Node, which is most of it.

## 1. What you need, and what you should end up with

You need two things, and neither is in this repository.

**The game**, from the archive.org link above.

**The FM Towns ROMs**, which the emulator needs to boot. Section 2 below has
both, including a free set that carries no copyright problem, and the checksums
to confirm you have the same rip this work was built against.

The detail is in **[docs/setup.md](docs/setup.md)**. The short version:

```bash
# unpack the game zip into this directory, then:
git submodule update --init fmtownskit   # only needed to build the port; the rest works without it
./tools/vendor.sh        # Tsugaru emulator + free ROMs into vendor/
./tools/check-disc.sh    # confirms your disc matches. plain shell, no Node
```

`fmtownskit/` is a git submodule holding the FM Towns toolkit, and a plain `git clone` leaves it empty. Playing
needs nothing from it. Building the C++ port needs all of it, and the build says so on `x86.h` if it is missing.

Neither needs Node. `node tools/verify.js` checks 107 things, but that is for
working on the extraction, not for playing.

Expected layout once set up:

```
fm-family-ultima-trilogy/
├── vendor/                  emulator and ROMs, gitignored
├── extracted/               extractor output, gitignored
├── saves/                   save disks and CMOS, gitignored
├── *.img  *.ccd  *.cue  *.sub   the disc, gitignored
└── *[UserDisk].hdm          the save floppy, gitignored
```

`./run.sh` launches the emulator on the host if you have a display. Pass extra
Tsugaru options with `EXTRA`, and override paths with `EMU_DIR`, `ROM_DIR` or
`SAVE_DIR`:

```bash
EXTRA="-SCALE 200" ./run.sh
```

## 2. Play in a browser

Play from any machine that can reach the host over the network, with no display on
the host and no emulator window to manage. The browser is the only thing on *your*
machine. The host still needs podman, and still needs the emulator, the ROMs and
the game, which the steps below cover.

This is worth it when the machine running the game is headless, or remote, or
you want to poke at it from a phone. If you just want to play on the machine in
front of you, section 3 is fewer moving parts.

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

### Play the recompiled port instead

The C++ reimplementation plays this game. It is the recompiled 386 code running on
the toolkit's FM Towns machine, not the emulator, and it boots through the splash,
the game menu and into the overworld on its own.

**It is early and buggy.** Character creation does not work, so at the game menu pick
*Journey Onward* and a character that already exists, and expect `Esc` or `Q` to end
the run. The tested route, and every known defect with the observation that found it,
is [what is broken in the port](docs/port-defects.md).

The simplest route is native, and it needs no container. The recompiled module is committed
in `module/`, so there is nothing to recompile:

```bash
./play.sh                       # your own copy of the game in ./game/
./play.sh --headless 120        # no window, writes build/play/shot.png
```

`play.sh` builds the port with cmake, which needs a C++20 compiler and SDL3, extracts
`ENCHANT.EXP` and `TBIOS.BIN` from your disc into `build/play/`, and fetches the font ROM.

For a headless or remote machine the container serves the same port over noVNC, and it is
also the route for regenerating the module from the disc:

```bash
./tools/x-run.sh start          # build if needed, start, print the URLs
./tools/x-run.sh stop           # tear down, the build volume is kept
./tools/x-run.sh logs           # follow it
./tools/x-run.sh shot out.png   # capture the virtual display
```

| port | what |
|---|---|
| 6081 | the port in a browser, at `http://<host>:6081/vnc.html` |
| 5901 | raw VNC |

The ports are 6081 and 5901 so they do not collide with the emulator's 6080 and
5900, and both can run at once. `ARGS` passes arguments to the port binary and
`RESOLUTION` sets the virtual screen. The project is mounted read only and everything the
container writes goes to a named volume, so nothing lands in the working tree as
root-owned files.

Same platform caveat as the emulator container: it has only been run on Linux.

If a release has been published, `IMAGE=ghcr.io/sloppy-seconds/fm-towns-ultima:port-latest
./tools/x-run.sh start` uses the published toolchain image instead of building one, and the
release archive ships a built `u2port` that needs no compiler at all. What a release carries,
and what it never will: [licensing and preservation](docs/licensing.md).

### Does this work on macOS or Windows?

**Untested.** Stated plainly rather than implied.

Two separate things, and they have different answers.

**The container** is the more likely to work. Everything inside it is ordinary
Linux: an Ubuntu image running Xvfb, x11vnc, noVNC and the emulator, none of which
care about the host OS. `tools/container-run.sh` detects SELinux and only adds the
`:z` mount suffix where it is enforcing, which is exactly what Docker Desktop
rejects if applied blindly. The likely snags are performance under the virtual
machine those runtimes use, and the emulator wanting a window, which Xvfb
provides. **Not verified on either platform.**

**The shell scripts are a harder problem.** `tools/vendor.sh`, `tools/container-run.sh`
and `run.sh` are `.sh` files. They do not run in `cmd` or PowerShell. On Windows
they need Git Bash, MSYS2 or WSL, and under WSL `vendor.sh` will fetch the Linux
build rather than the Windows one, which is only right if you then run the
emulator inside WSL.

If you would rather not deal with that, download `windows_binary_latest.zip` or
`macos_binary_latest.zip` from
[Tsugaru's releases](https://github.com/captainys/TOWNSEMU/releases) by hand and
run the emulator directly.

**The one route that definitely works everywhere is the editor**, because it is a
web page. No emulator, no game, no install.

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
`/api/save/slot`, `/api/save/clone`, `/api/save/delete`) are covered in
[`tools/README.md`](tools/README.md).

### Reading hardware state

`tools/debug-session.sh` runs the same emulator with its debugger attached,
headless over SSH. That is how the live palette was captured. See
`tools/README.md`.

## 3. Play locally with the emulator

The command, which works on Linux, macOS and Windows. From this directory:

```
vendor/emulator/Tsugaru_CUI vendor/roms \
  -CD   "Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).ccd" \
  -CMOS saves/CMOS.BIN \
  -FD0  "Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm"
```

On Windows the executable is `vendor\emulator\Tsugaru_CUI.exe` and paths use
backslashes.

| option | why |
|---|---|
| `vendor/roms` | the ROM directory, first argument, no flag |
| `-CD <file>.ccd` | the disc. Use the `.ccd`, not the `.cue`: this disc's cue uses `PREGAP`, which is ambiguous. The `.img` must sit beside it, unmodified. |
| `-CMOS saves/CMOS.BIN` | BIOS settings, created on first clean quit |
| `-FD0 <file>.hdm` | the save floppy. Without it the game will refuse to make a character. |

Add `-SCALE 200` for a bigger window. Type `Q` then Enter to quit: closing the
window skips the CMOS write.

`./run.sh` wraps the same command with path discovery, existence checks and
warnings about missing ROMs and Wayland. It is a shell script, so Linux and macOS
directly, or Windows under Git Bash or WSL. The raw command above needs none of
that.

**macOS and Windows are untested.** The emulator publishes builds for both and
the command is the documented one, but no machine has run this.

## 4. Making a character

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

## 5. Playing Ultima II for the first time

**"A WRONG DISK" is harmless.** It appears twice during Ultima II's startup,
before the splash screen. Press space through both. The game then runs normally.
No disk preparation is needed, and the `[UserDisk]` from the zip works as
shipped. See [the docs](docs/) 8.5.

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

## 6. If it does not work

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

## 7. Taking the game apart

The full investigation lives in [`docs/`](docs/), split by subject. It is long,
because it records the failures as well as the results, and the failures are what
make the results credible.

| page | what is in it |
|---|---|
| [Disc and binaries](docs/disc-and-binaries.md) | The platform, disc layout, the C toolchain, and the Phar Lap executable format. |
| [Assets and graphics](docs/assets-and-graphics.md) | The asset set proved complete, and the 4bpp formats behind it. |
| [Extraction](docs/extraction.md) | How to run the extractor, and what it produces. |
| [Palette](docs/palette.md) | Five failed approaches before the palette was read from the running machine. |
| [Sound](docs/sound.md) | The `.SND` effect format. |
| [Save files](docs/save-files.md) | The roster format, and the measured stat modifiers. |
| [Save disk](docs/save-disk.md) | Making the game write to a floppy. |
| [Open questions](docs/open-questions.md) | What is still unknown. |

To regenerate everything from the disc. This part needs Node, unlike playing:

```bash
node tools/verify.js     # every assertion, exits 0 if all pass
node extract-u2.js       # writes extracted/u2/
node tools/recolour.js   # renders the art in colour
```

No npm packages. Node on its own is enough.

## 8. The tools

All in `tools/`, each documented in [`tools/README.md`](tools/README.md).

**Playing.** `vendor.sh` fetches the emulator and ROMs, pinned so the setup is
reproducible. `container-run.sh` runs the browser-playable container. `try.sh`
starts it on fixed ports with a chosen floppy, tearing down the previous one
first. `mame-run.sh` is the same for MAME, which is worth reading about in
`docs/save-disk.md` before spending time on it.

**Characters.** `savedisk.js` reads and writes a save disk from the shell,
`makesave.js` builds a disk with characters from the command line using the same
modules the web editor runs, and `test-savedisk.js` asserts the FAT12 and roster
logic against a synthetic disk.

**Extraction.** `extract-u2.js` is the extractor, `cd.js` is the shared library
for discs and image formats, `tilesheet.js` lays out tile banks, `recolour.js`
applies the real palette.

**Binaries.** `pharlap.js` parses the `MP` and `P3` headers, `sym1.js` parses the
symbol table in `TMENU.EXP`, `crossdiff.js` finds shared code between binaries,
`findpal.js` does the I/O port census.

**Verification.** `verify.js` asserts every claim against the disc,
`precommit-guard.sh` blocks copyrighted data from being committed,
`palette-reference.js` derives the palette from screenshots, `debug-session.sh`
runs the emulator with its debugger.

## 9. What is established, and what is not

`tools/verify.js` is the authority, currently 107 assertions. It checks the rip
identity, the disc structure, the executable headers, the toolchain, the asset
inventory, every graphics and sound claim, and the negative results.

If a claim in `docs/` is not asserted there, treat it as unverified. The
[open questions](docs/open-questions.md) page lists what is still unknown.

## 10. Third-party code

None is vendored. Two Ultima **III** reimplementations are cloned into `references/`
when needed, for reading only, and that directory is gitignored. They are Ultima III
and this project is Ultima II, so anything taken from them is a hint rather than a
result. `docs/references.md` records what they are good for and what they are not.
Where attribution would be owed, it is in
[THIRD-PARTY-NOTICES.md](THIRD-PARTY-NOTICES.md).

# Ultima Trilogy I-II-III (FM Towns, 1990)

The Fujitsu FM Towns release of *Ultima Trilogy 1-3*, recompiled. The games' own 386 machine code is translated into C++
and runs natively on Linux and Windows, with no emulator in the way: same graphics, same sound, same behaviour, and the
translation is in this repository as readable source.

**[The original, in the emulator](docs/quickstart.md)** &nbsp;·&nbsp;
**[Build it yourself](docs/building.md)** &nbsp;·&nbsp;
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

## Play the recompiled port

### 1. You supply the game

Download

> **https://archive.org/details/fmtownscdcollection**
> file: `FM-Towns CD/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[+UserDisk].zip`

and unpack it so that one directory holds the media and the binary you are about to run. That is the only setup there
is.

### 2. Download the binary for the title you want

One file per title, from the [releases page](https://github.com/sloppy-seconds/fm-towns-ultima/releases). Each runs on
both platforms:

| title | Linux | Windows | reads from your disc |
|---|---|---|---|
| Ultima I, *The First Age of Darkness* | `fm-u1-linux-x86_64` | `fm-u1-windows-x86_64.exe` | `\DARKNESS.EXP` |
| Ultima II, *Revenge of the Enchantress* | `fm-u2-linux-x86_64` | `fm-u2-windows-x86_64.exe` | `\ENCHANT.EXP` |
| Ultima III, *Exodus* | `fm-u3-linux-x86_64` | `fm-u3-windows-x86_64.exe` | `\EXODUS.EXP` |
| the message from Lord British | `fm-british-linux-x86_64` | `fm-british-windows-x86_64.exe` | `\BRITISH.EXP` |
| the Ultima I demo, Episode I | `fm-u1demo-linux-x86_64` | `fm-u1demo-windows-x86_64.exe` | `\UT1DEMO.EXP` |
| the Ultima II demo, Episode II | `fm-u2demo-linux-x86_64` | `fm-u2demo-windows-x86_64.exe` | `\UT2DEMO.EXP` |
| the Ultima III demo, Episode III | `fm-u3demo-linux-x86_64` | `fm-u3demo-windows-x86_64.exe` | `\UT3DEMO.EXP` |

### 3. Run it

```
Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img     your copy of the disc
Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).ccd     its track layout, for the music
fm-u2-linux-x86_64                                the binary you downloaded
```

```bash
./fm-u2-linux-x86_64
```

On Windows, double-click `fm-u2-windows-x86_64.exe` with the same files beside it. Nothing else is required: SDL and the
glyph ROM are inside the binary, there is no install step, and `--licences` prints every notice compiled into it.

It reads the program, TBIOS and the game's own graphics and sounds out of your disc image and keeps what it reads under
`extracted/`, so after the first run the image can be moved away. Characters are plain files in `saves/`, not a floppy
image, so there is nothing to format before you can save one, and a character you create persists.

At the game menu pick **Journey Onward** for a character that already exists, or **Generate Character** to make one.
`Ctrl-Q` or closing the window ends the run. What is broken, with the play observation that found it, is
[what is broken in the port](docs/port-defects.md).

## What is in the release, and what it is

**The three games play.** The other four are not games and are not offered as such: the message from Lord British is the
publisher's splash, and the three demos are the slideshow that introduces each episode. They run their real translated
code and show what they were built to show, which is the cheapest demonstration that the machine layer underneath the
games is right.

The demos play their narration in **English**, from translation tables in [`locale/`](locale/), which is one directory
per language, so a new language costs a table and no code. They also start at a fifth of the machine's clock so the text
can be read. `--cpu-rate=N` overrides that for any title, including the three games.

## What has been tested, and where

All seven Linux binaries run and have been played from a real disc. The three games' Windows builds load and play under
Wine, which is a proxy and not the thing itself. The four newer Windows builds pass the same packaging path and their
import tables were checked, but nobody has executed those files yet. **Nothing here has run on a real Windows machine,
and macOS has not been tried at all**, because this project has access to neither. Treat all of it as likely to work
rather than supported, and a failure on real hardware is the most useful report you can send.

## Where to go next

| | |
|---|---|
| the original in the emulator, and a save disk to edit | [the emulator page](docs/quickstart.md) |
| building it yourself, and playing it on a headless box over noVNC | [building it yourself](docs/building.md) |
| the save disk editor | [the editor](https://sloppy-seconds.github.io/fm-towns-ultima/) and [its source](web/) |
| every measurement behind the translation | [the documentation site](https://sloppy-seconds.github.io/fm-towns-ultima/docs/) |
| what may be distributed, and why the C++ is in git | [licensing and preservation](docs/licensing.md) |
| third-party code and notices | [THIRD-PARTY-NOTICES.md](THIRD-PARTY-NOTICES.md) |

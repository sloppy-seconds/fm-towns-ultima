Ultima II, running on its own recompiled code
============================================

u2port is Ultima II's own 386 machine code, translated mechanically into C++ and linked
onto fmtownskit's FM Towns machine. It is a recompile, not a decompile and not a
reimplementation: no human wrote the game's logic in C++, a recompiler translated it, and
the result is here so that it can be read, checked and kept.

You still need the game. This archive does not contain it and never will.


Licence, preservation, and how to reach us
=========================================

Ultima II: Revenge of the Enchantress (FM Towns, 1990) is commercial software still in
copyright and has no legal way to be bought. This is a non-commercial game PRESERVATION
project: nothing here is sold, nothing is monetised, and the aim is that a version of the
game stays readable rather than that anybody gets a free copy.

You are expected to own your own copy of the original game and to supply your own disc
files. Nothing here hosts or distributes the original media: not the disc images, not the
floppy, not ENCHANT.EXP, not the ROMs, not any artwork, audio, font or map extracted from
them. Those belong to their owners.

Trademarks. Ultima is a trademark and copyright of its respective owners (Origin Systems,
now Electronic Arts). FM Towns is Fujitsu. This project is not affiliated with, endorsed by,
or approved by any of them, and all original game content remains their property.

What is distributed here is a translation of machine code into source code, plus the
scripts and documentation that make it run. That part is MIT licensed (see LICENSE in this
archive) and comes with no warranty of any kind, as the licence says. The port is early:
character creation does not work and Esc or Q ends the run, and the full list is linked
below rather than buried.

If you hold rights to this game and would like this repository or a release taken down,
say so and it happens: open an issue at
https://github.com/sloppy-seconds/fm-towns-ultima/issues, or use the contact on
https://github.com/sloppy-seconds. No licence argument will be raised against a takedown
request. The point of the project is preservation, not a fight.


Playing from this archive
=========================

You need three things, and only the first two come from us.

1. This archive, unpacked anywhere you like.
2. The FM Towns font ROM. The clean-room FreeTOWNS set works and carries no copyright
   problem: ./tools/vendor.sh fetches it. Without it the game runs and every glyph is
   blank.
3. Your own copy of the game. Unpack the FM Towns release into a directory called game/
   next to this file. The disc image is the part that matters, because the port opens the
   disc at run time for its artwork and its kanji font.

Then:

  ./play.sh

At the game menu pick Journey Onward and a character that already exists. A disk with
three of them is included at assets/save-disk/userdisk.hdm.zip and play.sh unpacks it
into saves/ if you have not put one there. Character creation does not work yet, and Esc
or Q ends the run: this is an early port, and what is broken is listed honestly at
https://github.com/sloppy-seconds/fm-towns-ultima/blob/main/docs/port-defects.md

Options: --game DIR to point somewhere else, --disk FILE for a different floppy,
--headless [N] to run N frames with no window and write a PNG, --rebuild to force a
build. On a machine with no display, the same script runs inside the published container.

Runtime libraries: this binary was compiled on Debian trixie and links SDL3 dynamically,
so it needs libSDL3 and SDL3's own audio and window set (X11, wayland, libasound,
libpulse, libpipewire, libsndio). It has not been run on Windows or macOS.


What is in this archive
=======================

  u2port                     the port. Contains the recompiled game code and nothing else
  play.sh                    the runner described above
  tools/getfile.js           reads one file out of your disc image, into a build directory
  tools/cd.js                the ISO reader getfile.js uses
  tools/vendor.sh            fetches the emulator, the FreeTOWNS ROMs, pinned and checksummed
  assets/save-disk/          a save disk with three characters, so the tested route works
  LICENSE                    MIT, this project's own code and the recompiled translation
  LICENSE.fmtownskit         the MIT licence of the toolkit this binary statically links
  README.txt                 this file

Not in this archive, by policy: ENCHANT.EXP, any disc image, any ROM, any extracted
asset, and the recompiled module's source (which is in the git repository, where it can
be read and diffed).


The toolkit
===========

The machine this runs on is fmtownskit, MIT, Copyright (c) 2026 Samuele Voltan,
https://github.com/vs-sr-dev/fmtownskit. Its licence text is in LICENSE.fmtownskit
alongside this file, and static linking is what that licence permits.

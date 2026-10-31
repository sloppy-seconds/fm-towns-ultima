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
copyright and has no legal way to be bought. This project exists to preserve a version of
the game that would otherwise become unreadable, and it is non-commercial in every sense:
nothing here is sold, nothing is monetised, and nothing is hosted that the rights holder
has not chosen to leave alone.

What is distributed here is a translation of machine code into source code, plus the
scripts and documentation that make it run. What is never distributed, in this archive,
in the git repository, or in any release, is the original media: the disc images, the
floppy, ENCHANT.EXP, the ROMs, and any artwork, audio, font or map extracted from them.
Those belong to their owner and you are expected to already have them.

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

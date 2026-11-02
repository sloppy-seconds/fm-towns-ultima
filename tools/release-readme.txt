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

You need two things, and only the first comes from us.

1. This archive, unpacked anywhere you like. It carries the port, a save disk with three
   characters on it, and the glyph ROM, so there is nothing to install and nothing to
   download.
2. Your own copy of the game, which means three files out of it: the program, TBIOS, and
   the disc image itself, because the port opens the disc while it runs for its artwork
   and its kanji font.

## Getting your game files in place

Unpack the archive.org download. It gives you a .img, a .ccd and a .cue. The .img is the only
file you need to supply, and it goes in game/ unchanged:

  mkdir -p game
  cp "Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img" game/ultima.img

Then:

  ./u2port

The port reads ENCHANT.EXP, TBIOS, the graphics, the sounds and the kanji font out of the image
itself, so there is nothing to extract and no Node.js to install. It keeps what it reads under
game/extracted/, and after that first run the image is optional: delete it and the game still
starts from what was kept.

Your saves are ordinary files in game/saves/: ROSTER1.UT2 holds the characters and WORLD1.UT2 to
WORLD4.UT2 the worlds. There is no floppy image to create or look after, and a character you make
is saved there the moment the game writes it. Back them up or copy them to another machine the
same way as any other file.

Ignore the .cue that came with the download. It declares a PREGAP on the audio tracks that a rip
may or may not already contain, so the reader refuses it rather than read the wrong sectors, and
the port writes a correct one-track cue itself.

./play.sh does the same thing, and also unpacks the save disk if you would rather have it do the
whole setup.

With no arguments the port looks for a disc image (or a .cue) and a save disk, and for a cache
of what an earlier run kept. It searches ./ and game/, original/ and data/, and its own
directory, so unpacking this archive anywhere and starting the binary from anywhere both work.
It prints what it found and what it took from where. A tree with neither a disc image nor a
cache says so rather than starting and failing later.

At the game menu pick Journey Onward for a character that already exists, or Generate
Character to make one. A disk with three characters is included at
assets/save-disk/userdisk.hdm.zip, and play.sh unpacks it to saves/ if you have not put one
there. The port writes to that disk, so a character you create persists. Ctrl-Q or closing
the window ends the run. Escape does not. This is an early port, and what is broken is listed
honestly at
https://github.com/sloppy-seconds/fm-towns-ultima/blob/main/docs/port-defects.md

Options: --game DIR to point somewhere else, --disk FILE for a different floppy,
--headless [N] to run N frames with no window and write a PNG, --rebuild to force a
build. On a machine with no display, the same script runs inside the published container.

Runtime libraries: none to install for SDL. The binary carries SDL inside it, compiled from
the pinned upstream release, so there is no libSDL3 to install and no distro package that
has to exist first. What SDL loads at run time is the desktop's own set, which any stock
Linux desktop already has: libX11 or libwayland-client for the window, libGL for the
renderer, and libasound, libpulse or libpipewire for sound. If none of those three audio
libraries is present there is no window either, because the port initialises video and audio
in one call, and that is a listed defect rather than a requirement. It has not been run on
Windows or macOS.


What is in this archive
=======================

  u2port                     the port. Contains the recompiled game code and nothing else
  play.sh                    the runner described above
  tools/getfile.js           reads one file out of your disc image, for the analysis routes. The
                             port does not need it: it reads what it needs from the image itself
  tools/cd.js                the ISO reader getfile.js uses
  tools/vendor.sh            fetches the emulator and the full FreeTOWNS ROM set, if you want them
  assets/save-disk/          a save disk with three characters, which seeds game/saves/ on the
                             first run so the tested route has somebody to play
  assets/font-rom/           the glyph ROM the port needs for text, and a document saying where
                             it came from and what is and is not established about its licence
  LICENSE                    MIT, this project's own code and the recompiled translation
  LICENSE.fmtownskit         the MIT licence of the toolkit this binary statically links
  LICENSE.SDL3               the zlib licence of the SDL that this binary statically links
  README.txt                 this file

Not in this archive, by policy: ENCHANT.EXP, any disc image, any extracted asset, and the
recompiled module's source (which is in the git repository, where it can be read and
diffed). The glyph ROM in assets/font-rom is the single exception to the ROM half of that
rule, and its own README explains why it is not affected by it. The other four ROMs in the
FreeTOWNS set are not here and the port does not read them.


The toolkit
===========

The machine this runs on is fmtownskit, MIT, Copyright (c) 2026 Samuele Voltan,
https://github.com/vs-sr-dev/fmtownskit. Its licence text is in LICENSE.fmtownskit
alongside this file, and static linking is what that licence permits.

What this is
============

u2port is Ultima II's own 386 code, mechanically recompiled to C++ and linked onto
fmtownskit's FM Towns machine. It is a recompile, not a decompile, and not a
reimplementation.

This archive contains the port with NO GAME IN IT.

The module that makes it play is the recompiler's output over ENCHANT.EXP, which is
the game translated into another form. That stays where it belongs, on the disc you
bought, so what you downloaded is the machine and the front end: it starts, it prints
that there is nothing to run, and it is the binary you would ship if the game came with
it.

How to get a port that plays
============================

One command on any machine with a container runtime, given the game files and this
repository:

  git clone https://github.com/sloppy-seconds/fm-towns-ultima
  cd fm-towns-ultima
  git submodule update --init fmtownskit
  # unpack the archive.org game zip into this directory, then:
  ./tools/vendor.sh
  unzip -o assets/save-disk/userdisk.hdm.zip -d saves/
  IMAGE=ghcr.io/OWNER/REPO:port-latest ./tools/x-run.sh start

That builds the module from your own copy inside the published image and serves the
screen at http://<host>:6081/vnc.html. At the game menu pick Journey Onward and a
character that already exists. Character creation does not work yet, and Esc or Q ends
the run: the list of what is broken is in docs/port-defects.md.

Substitute the image name from the release notes, and see docs/port-from-source.md for
the route that builds everything by hand.

Runtime libraries
=================

This binary was compiled on Debian trixie and links SDL3 dynamically, so it needs
libSDL3 and SDL3's own audio and window libraries: X11, wayland, libasound, libpulse,
libpipewire and libsndio. That is why the container route is the recommended one. It
has not been run on Windows or macOS, and the scripts that drive it are bash.

Licence and notices
===================

The port's own code is this project's. The machine it runs on is fmtownskit, MIT,
Copyright (c) 2026 Samuele Voltan, and its licence text is in LICENSE.fmtownskit
alongside this file. Static linking is permitted by that licence and this is the
attribution it asks for.

Nothing in this archive is the game, the disc, a ROM, or an extracted asset. The FM
Towns system and font ROMs are fetched separately by tools/vendor.sh from the FreeTOWNS
clean-room set, whose own terms require that it be marked as different from real
Fujitsu silicon, which is what its bundled LICENSE.md does.

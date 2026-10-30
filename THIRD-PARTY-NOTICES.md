# Third-party notices

This project's own code is its own. The material below is other people's, and is
recorded here because attribution is a condition of reuse and a note in a docs page is
not enough on its own.

Nothing from the reference clones below is copied into this project's source or committed
here. The two entries after them are different in kind: `fmtownskit` is a git submodule
whose code is compiled into the port, and the FreeTOWNS ROMs are downloaded by
`tools/vendor.sh` and never committed.

## Ultima III reference implementations

### synthwave-pixel/ultima3

<https://github.com/synthwave-pixel/ultima3>

```
MIT License

Copyright (c) 2025 Leon McNeill
```

This repository vendors LairWare's macOS port of Ultima III, released under the same
MIT licence, in `Lairware/Sources/`. The port's README states: "The code is under the
MIT License (see LICENSE), as LairWare released it."

**The code is MIT. The game's assets are not.**

From the same README: "The game's name, maps, music and other assets are Origin
Systems' and are included as Leon McNeill describes below." The key art derives from the
1983 box painting by Denis Loubet. Fonts under `web/art/fonts/` are Igino Marini's IM
FELL, under the SIL Open Font License.

So MIT covers `web/src/**/*.ts` and `Lairware/Sources/*.c` and `*.h`. It does not cover
the data files, tile sheets, music or artwork, which are in that repository because the
author shipped a playable game rather than because they were licensed to him.

### pantinor/gdx-exodus

<https://github.com/pantinor/gdx-exodus>

Java, libGDX. Check the repository for its own licence terms before reuse. Its
top-level `LICENSE` is the authority, not this file.

## How this project uses them

As reading material. Where a fact is taken from either of them it is attributed in
`docs/references.md` and marked as an Ultima **III** fact, because Ultima II is a
different game. Nothing from either repository is copied into this project's source or
committed to this repository.

If MIT code is ever adopted rather than read, the notice above is the one to carry, and
the adopted file should say where it came from.

## fmtownskit

<https://github.com/vs-sr-dev/fmtownskit>, used through the fork
<https://github.com/paulczar/fmtownskit> on branch `mp-support`.

```
MIT License

Copyright (c) 2026 Samuele Voltan
```

This is the FM Towns toolkit: the 386 recompiler, the emulated machine, the TBIOS and DOS
layers and the SDL window. `fmtownskit/runtime/` is compiled into `u2port`, statically,
which the MIT licence permits, and the release tarball carries this licence text as
`LICENSE.fmtownskit` for that reason. This project's own changes to the kit ride on the
fork's branch and are mirrored in `patches/fmtownskit-mp-support.patch`, which
`tools/patchcheck.js` asserts is exact.

## FreeTOWNS

<https://ysflight.in.coocan.jp/FM/towns/FreeTOWNS/e.html>, fetched by `tools/vendor.sh`
into `vendor/roms/`, which is gitignored.

A clean-room reimplementation of the FM Towns firmware rather than a Fujitsu dump, so it
carries no copyright problem, and it is what this project uses. Its terms are three: mark
who modified what, make clear the compatible ROM is **different** from the ROM extracted
from real FM Towns hardware and so will not cover every application, and never ask
Fujitsu questions about it. The bundled `LICENSE.md` in the download carries them, and
this repository has modified nothing in it.

One consequence worth stating, because it looks like a bug: the port needs the font ROM,
and the FreeTOWNS set is not byte-identical to silicon. Text drawn through it is correct
for this game and is not a claim about real hardware.

## Not covered here

The FM Towns game itself, its disc image, its executables and everything extracted from
them. Those are commercial software still in copyright, and they are excluded from this
repository entirely. See the "Copyrighted material never enters git" section of
`AGENTS.md`.

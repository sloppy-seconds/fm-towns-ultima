# Third-party notices

This project's own code is its own, and it is MIT: see `LICENSE` at the root. What follows
is other people's material, recorded here because attribution is a condition of reuse and a
note in a docs page is not enough on its own.

## What this project's MIT covers, and what it cannot

`LICENSE` covers this repository's own work: the scripts in `tools/`, the browser editor in
`web/`, the documentation in `docs/`, the port front-end in `port/`, and the recompiled
translation in `module/` as a translation produced here.

It does not, and cannot, cover the original game. Ultima II, its disc, its artwork, its
audio, its maps and its machine code belong to their owners, and no licence written by
somebody who does not hold those rights can grant anything over them. The recompiled C++ is
a derivative of that machine code, and the standing position of this project is that it
exists for preservation, non-commercially, for people who already own the game. See
[`docs/licensing.md`](docs/licensing.md) for the full terms and the takedown route.

Anyone reusing this repository should read that paragraph before reading the licence.

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

## SDL3

<https://www.libsdl.org/>, built from the pinned upstream release tarball by
`tools/sdl-from-source.sh` and linked into `u2port` as a static archive.

```
zlib License

Copyright (C) 1997-2026 Sam Lantinga <slouken@libsdl.org>
```

(The copyright line is quoted from the release's own `LICENSE.txt`, which the build copies
next to the prefix and the release archive ships as `LICENSE.SDL3`.)

The version and the sha256 of the tarball are pinned in `tools/sdl-pin.txt`, and the hash is
checked before extraction, so the SDL inside a published binary is a named, hashed artefact
rather than whatever the build machine had. The zlib licence permits the static link and asks
that the notice not be removed or misrepresented, which shipping the text satisfies.

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

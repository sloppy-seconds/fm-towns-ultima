# Licensing, preservation, and what may be distributed

This page is the authority on what this repository hosts and why. It changed on 2026-10-30, by a decision made
deliberately and written down rather than drifted into, and the previous rule is recorded here as a superseded
position rather than deleted, because the reasoning that produced it is still partly valid and the rest of the project
depends on knowing which rule is current.

## The rule

**The recompiled C++ may live in git.** `module/` holds the recompiler's output, which is the game's own machine code
translated mechanically into C++. A release ships a compiled binary built from it, and that binary plays the game
given the reader's own files.

**The original media is never hosted, in git or in a release, ever.** The disc images, the floppy, `ENCHANT.EXP` and
its siblings, the ROMs, and every extracted asset, audio, font, map and artwork. The reader supplies those from a copy
they own.

## Why

Ultima II on FM Towns is abandonware. It is still in copyright, it has no legal way to be bought, and the only copies
in circulation are ones people already own or ones that are quietly shared. The part of it that is worth keeping is not
the bytes on the disc, which are unreadable without the hardware, but the *rules*: what the code does, as arithmetic a
person could read and reimplement from.

A binary does not preserve that. A disc image does not preserve that. A translation of the machine code into C++ does,
and it is the artefact this project's whole method produces. Committing it means the legible version survives even if
every copy of the emulator and the toolchain moves on.

The other half of the rule is not a concession, it is the point. Distributing the game would make this a piracy host
with documentation. Distributing a translation of its code, aimed at people who own it, is a preservation project. The
difference is real and it is enforced by tooling rather than by intention: `.gitignore`, `tools/precommit-guard.sh`,
and the release packaging all refuse the originals by extension and by name.

## The good-faith terms

These are stated in the README, in the docs site, and inside the release archive, and they are the project's position
rather than a legal argument:

- **Derived from the original executable.** The recompiled module is a mechanical translation of code from
  `ENCHANT.EXP`. Nobody wrote the game's logic by hand, and nothing claims otherwise.
- **For people who own the game.** Nothing here works without the reader's own copy, and the copy is expected to be a
  real one. The port reads the disc at run time for its artwork and its font.
- **Non-commercial.** Nothing is sold, nothing is monetised, no service is run for profit off it.
- **A published takedown route.** A rights holder who wants this down opens an issue at
  <https://github.com/sloppy-seconds/fm-towns-ultima/issues> or uses the contact on
  <https://github.com/sloppy-seconds>, and it comes down. No licence argument is raised in response, because the
  purpose is preservation and not a dispute.

## Why the split is defensible rather than convenient

The claim that the module is code and not the game in another box is measured, not asserted. Across all 331 generated
sources there are three string literals of six characters or more: `"p_game_funcs.h"`, `"p_tbios_funcs.h"` and
`"ran off the end of a function"`. The recompiler translates instructions, and the game's text, art and maps live in
its data segment and on its disc, none of which is emitted.

That measurement is an assertion in `tools/portcheck.js`, so it is re-run on every check rather than remembered. If a
future recompile starts embedding game content, the gate fails and the policy has to be argued again in the open.
`module/README.md` carries the provenance: the source file's sha256, the exact recompile command, the toolkit pin, and
the seed inputs.

## What the old rule said, and what is still true of it

Until 2026-10-30 this repository held that nothing derived from the disc enters git, on the grounds that a committed
copyrighted file is unrecoverable, a force-push does not un-distribute what has already been cloned, and the person who
made the mistake cannot undo it.

That reasoning still governs everything it was written about. The originals are still unrecoverable if committed, so
they are still all ignored, still blocked by the pre-commit guard, and still never staged. What changed is only the
status of generated code, which is a different thing: it is not the work of the rights holder in a form that competes
with them, and it is the thing this project exists to produce.

The guard rails that came out of the old rule stay, and they are what makes the new one safe to operate:

| guard | what it stops |
|---|---|
| `.gitignore` | the originals, by extension, case-insensitively, plus `/game/` where the reader's files go |
| `tools/precommit-guard.sh` | staging anything game-shaped, and any large blob except the module's own sources |
| `tools/release-package.sh` | a release archive containing an original, checked by extension and by exact name |
| `tools/portcheck.js` | the module turning into a container for game text |
| `tools/verify.js` | a different rip being mistaken for this one |

## Mirroring

A preservation artefact that lives in one place can be removed in one place. The plan carries an open item to mirror the
repository and its releases to a second host and to archive.org, so that the legible version of this game survives a
takedown of any single account. See `docs/plan.md`, item 9k.

## Reading

[The module's provenance](https://github.com/sloppy-seconds/fm-towns-ultima/blob/main/module/README.md), [what a release carries](port-from-source.md), and
[the port's defects](port-defects.md), which is the page that keeps this honest about how early it is.

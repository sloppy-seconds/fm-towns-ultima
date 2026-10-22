# tools

Reusable extraction and analysis scripts. No dependencies beyond Node and
(optionally) `ndisasm`.

All of them locate the disc `.img` automatically by looking beside the tools
directory, so run them from the repo root.

| Script | What it does |
|---|---|
| `verify.js` | **Start here.** Reproduces every claim in `FINDINGS.md` from the unpacked zip. Exits non-zero if any check fails. No arguments, no dependencies. |
| `precommit-guard.sh` | Blocks commits containing copyrighted game data. Install as a git hook, see below. |
| `cd.js` | Shared library. Disc reader, ISO9660 walk, PNG/WAV writers, decoders for 4bpp packed/planar/byte-per-pixel and `.SND`. Import this rather than duplicating the format logic. |
| `tilesheet.js` | Render a tile bank to a labelled PNG grid. See FINDINGS.md 5.4 for which layout to use per file. |
| `crossdiff.js` | Rabin-Karp shared-substring search between executables. Used in FINDINGS.md 6.5. |
| `findpal.js` | I/O census and port classification, plus indirect-call/constant correlation. Used in FINDINGS.md 6.6. |

## Copyright guard

The repository contains scripts, tests and documentation only. The game, its
artwork and its audio stay out. `.gitignore` alone cannot enforce that, because
it does not stop `git add -f`. Install the hook once per clone:

```bash
ln -sf ../../tools/precommit-guard.sh .git/hooks/pre-commit
```

It blocks staged files by extension and by size, and prints why. See the
copyright section of `AGENTS.md`.

## Reproducing this work

You need only the zip from `archive.org/details/fmtownscdcollection`, unpacked
into the repository root. Then:

```bash
node tools/verify.js          # 89 assertions, exits 0 only if all pass
node tools/verify.js --verbose
node extract-u2.js            # produces extracted/u2/
```

`verify.js` is the authority. If a claim in `FINDINGS.md` is not asserted there,
treat it as unverified. If `verify.js` fails on the source file MD5s, you have a
different rip of the disc and the results will legitimately differ.

## Usage

```bash
# Sprite tiles: 32x32 packed, 65 tiles
node tools/tilesheet.js --file ENEMY2.TIF --tw 32 --th 32 --packed4 --cols 8

# Player frames: 16x16, one byte per pixel
node tools/tilesheet.js --file PLAYER.TIF --tw 16 --th 16 --bytepx --cols 10

# Dungeon monsters: 16x16 packed, 1664 tiles
node tools/tilesheet.js --file DUNMON1.TIF --tw 16 --th 16 --packed4 --cols 24

# Shared code between executables
node tools/crossdiff.js --ref TMENU.EXP --min 256

# Where does this binary touch hardware?
node tools/findpal.js --file ENCHANT.EXP
```

Outputs go to `extracted/tiles/` and `analysis/`, both gitignored.

## Important caveat

`findpal.js` and any linear disassembly of this image produce unreliable
instruction boundaries. The `MP` payload does not decode as one flat 32-bit
stream, and evidence from `TMENU.EXP` shows the load address is not simply
"file offset + 0x75f". Treat its port census as indicative, not authoritative.
Read FINDINGS.md 6.6 before trusting anything it reports.

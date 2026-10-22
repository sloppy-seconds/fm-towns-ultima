# tools

Reusable extraction and analysis scripts. No dependencies beyond Node and
(optionally) `ndisasm`.

All of them locate the disc `.img` automatically by looking beside the tools
directory, so run them from the repo root.

| Script | What it does |
|---|---|
| `verify.js` | **Start here.** Reproduces every claim in `FINDINGS.md` from the unpacked zip. Exits non-zero if any check fails. No arguments, no dependencies. |
| `pharlap.js` | Loads Phar Lap `MP` and `P3` executables. Resolves symbol addresses to file offsets, disassembles at a symbol, dumps the flat load image. |
| `sym1.js` | Parses the `TMENU.EXP` symbol table: 1,725 named symbols including the whole Fujitsu `EGB_*` graphics layer. Validates by exact blob consumption. |
| `palette-reference.js` | Derives the real palette from emulator screenshots by cross-screen consensus. Screenshots are not committed. |
| `vendor.sh` | Downloads Tsugaru and the FreeTowns ROMs into `vendor/`, both gitignored. |
| `debug-session.sh` | Runs U2 under Tsugaru with the debugger, headless over SSH. |
| `container-run.sh` | Start/stop the podman container: Xvfb, VNC, noVNC, and the supervisor API. Playable from a browser. |
| `precommit-guard.sh` | Blocks commits containing copyrighted game data. Install as a git hook, see below. |
| `cd.js` | Shared library. Disc reader, ISO9660 walk, PNG/WAV writers, decoders for 4bpp packed/planar/byte-per-pixel and `.SND`. Import this rather than duplicating the format logic. |
| `tilesheet.js` | Render a tile bank to a labelled PNG grid. See FINDINGS.md 5.4 for which layout to use per file. |
| `crossdiff.js` | Rabin-Karp shared-substring search between executables. Used in FINDINGS.md 6.5. |
| `findpal.js` | I/O census and port classification, plus indirect-call/constant correlation. Used in FINDINGS.md 6.6. |

## Loading a Phar Lap executable

```bash
node tools/pharlap.js --file TMENU.EXP --map
node tools/pharlap.js --file TMENU.EXP --at EGB_palette
node tools/pharlap.js --file TMENU.EXP --disasm EGB_palette --len 192
node tools/pharlap.js --file TMENU.EXP --dump /var/tmp/tmenu-load.bin
```

For `P3` (`TMENU.EXP`) this resolves the load image to `0x200`-`0x33892` and
reports that 1,723 of 1,725 symbol addresses fall inside it. For `MP`
(`DARKNESS`, `ENCHANT`, `EXODUS`) it reports the header, entry point and stack.

## Symbols

```bash
node tools/sym1.js                  # summary + colour/graphics symbols
node tools/sym1.js --find EGB_      # 30 EGB_* graphics functions
node tools/sym1.js --dump           # writes analysis/SYM1-symbols.txt
```

## Palette from screenshots

The palette is not in the assets and not findable by scanning the binary. The
running game shows it, so screenshots are used as ground truth:

```bash
node tools/palette-reference.js --dir /path/to/u2-screenshots
```

Quantises each screenshot to 16 colours, converts to RGB555, and ranks entries
by cross-screen agreement. A real palette entry appears on most screens, a JPEG
artefact does not.

Reference screenshots used for U2 came from
`pixsoriginadventures.co.uk/ultima-2-fm-towns-part-1` and `part-2`. They are
copyrighted and are not committed, per `AGENTS.md`.

## Running the game and reading hardware state

```bash
./tools/vendor.sh                  # Tsugaru + ROMs into vendor/ (gitignored)
./tools/debug-session.sh           # boot to the debugger console
./tools/debug-session.sh --auto    # boot, run 20s, dump palette, quit
```

`debug-session.sh` works over SSH with no monitor. It finds the desktop
session's Xwayland display and auth file, because Tsugaru needs a window even
when driven from the console.

Console commands worth knowing. Print targets need the `PRI` prefix:

```
RUN            run the VM
PAU            pause it
PRI PALETTE    the CRTC palette, 16 entries per page
PRI CRTC       CRTC registers, mode, page setup
STA            CPU state
RUN EIP        run to a temporary breakpoint
T              single step
BRKON MEMW a   break on memory write
Q              quit
```

Output goes to `analysis/`. Nothing produced by the emulator is committed.

## Playing in a browser, and driving it over HTTP

The container runs four things: Xvfb, x11vnc, noVNC, and a supervisor that owns
the emulator's tty and serves an HTTP API.

```bash
./tools/container-run.sh start      # build if needed, start, print URLs
./tools/container-run.sh status     # running? which ports?
./tools/container-run.sh stop       # tear down
./tools/container-run.sh logs       # follow logs
./tools/container-run.sh shell      # bash inside
./tools/container-run.sh build      # force image rebuild
```

Then open `http://<host>:6080/vnc.html`.

### Why a supervisor exists

`Tsugaru_CUI` reads console commands from stdin. A detached container has no
stdin, so binding the emulator directly means nothing can ever type into it.
`container/supervisor.js` holds both ends: it spawns Tsugaru with piped
stdin/stdout and exposes them over HTTP. Keystrokes, debugger commands and
palette dumps all work while the game runs.

### API

All under `/api`, JSON in and out. Port 8080.

| Method | Path | Purpose |
|---|---|---|
| GET | `/api/status` | running, pid, uptime, commands sent |
| GET | `/api/log?since=N` | console output |
| WS | `/api/stream` | live console |
| POST | `/api/run` `/api/pause` `/api/state` | run, pause, CPU state |
| POST | `/api/keys` `{text}` | type into the VM, returns keycodes sent |
| POST | `/api/cmd` `{line}` | any console command |
| POST | `/api/palette` | parsed 16-colour palette per page |
| POST | `/api/crtc` | CRTC registers |
| GET | `/api/screen?mode=` | capture and render as text |
| POST | `/api/shot` `{name,mode}` | capture, optionally rendered |
| GET | `/api/shot.png` | raw PNG bytes |

### Reading the screen without vision

`/api/screen` returns the screen as text, so a model with no image support can
still interpret it. `mode` is `ascii`, `text`, `stats` or `all`.

```bash
curl -s 'http://<host>:8080/api/screen?mode=stats'
```

```json
{ "distinctColours": 1108, "allGrey": false,
  "top": [ {"hex":"#0022ee","percent":74.36}, {"hex":"#000000","percent":7.42},
           {"hex":"#ff0000","percent":5.56}, {"hex":"#ffff55","percent":4.96} ] }
```

That answers "is this screen in colour yet" in one call. `mode=ascii` gives a
luminance ramp for layout, `mode=text` a character grid at 8x16 cells for
reading dialogue and menus. The renderer is `container/screen.js`, zero
dependencies, with its own PNG decoder.

### Console quirks worth knowing

- `TYPE 2` needs the space. `TYPE2` returns "Do what?".
- Print targets need the `PRI` prefix: `PRI PALETTE`, not `PALETTE`.
- The VM starts paused only with `-PAUSE`. Without it the game is already
  running when the API becomes available.

## Copyright guard

If you do not have the desktop's display, run the emulator in a container:

```bash
./tools/container-run.sh          # build if needed, start, print the URL
```

Then open `http://<host>:6080/vnc.html` and click Connect. Raw VNC is on 5900 if
you prefer a native client.

```bash
./tools/container-run.sh --shell  # container with bash instead of the game
./tools/container-run.sh --stop   # tear down
```

Under the hood: Xvfb at 640x480x24, x11vnc, noVNC. Tsugaru and the ROMs are
bind-mounted from `vendor/` read only, so nothing copyrighted is in the image.

Two host quirks are handled in the script because both caused a silent failure:

- podman needs sudo on this host.
- SELinux is enforcing, so every bind mount carries `:z`. Without it the
  container sees `Permission denied` on the host directories and the emulator
  never starts.

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

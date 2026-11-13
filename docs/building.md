# Building it yourself, and running it without a screen

This page is for someone who wants to **build** the port rather than download a release binary, or who wants to run a
title on a **headless machine** and look at it through a browser. A player does not need any of it: download the file
for your title, put it beside your disc image, run it.

Everything here assumes you own the game. The build reads your disc, and the repository holds no media.

| what you want | go to |
|---|---|
| build from a clone, one command | [Play from a clone](#play-from-a-clone) |
| regenerate the recompiled C++ from your own disc | [Recompile the module](#recompile-the-module-from-your-disc) |
| build the Windows `.exe` files | [Cross-build for Windows](#cross-build-for-windows) |
| cut the release assets yourself | [Package a release](#package-a-release) |
| play a title in a browser on a headless box | [NoVNC on a headless machine](#novnc-on-a-headless-machine) |
| run a title with no display at all, and photograph it | [Headless runs](#headless-runs-and-screenshots) |
| check the work before committing | [The gates](#the-gates) |

## What you need

- **Your copy of the game**, unpacked. `tools/check-disc.sh` confirms it is the rip everything here was measured on.
- **git, with the submodule**: `git submodule update --init fmtownskit`. The kit's runtime is what the recompiled code
  links onto, so nothing builds without it.
- **A C++20 compiler and cmake.** The scripts build the pinned SDL3 from source as a static archive, so a distro SDL3 is
  not needed and a shared one is refused on purpose: a binary that needs `libSDL3.so` is not one you can hand to
  somebody.
- **podman**, only for the container recipes and for cross-building Windows.
- **A Python venv**, only for recompiling: `./tools/decode-setup.sh` once. The instruction-coverage pass needs Capstone,
  and Capstone's only binding with operand detail is Python.

## Play from a clone

`play.sh` builds a title from the committed module and runs it. It does not recompile anything, it does not need the
toolkit's compiler, and it does not touch your disc except to read the program and its assets out of it.

```bash
./play.sh                       # Ultima II, the default
./play.sh u3                    # any id from tools/games.js
./play.sh u1demo --locale en    # a demo with its narration in English
./play.sh u2 --cpu-rate=50      # a quarter slower than the machine, for one run
```

| option | what it does |
|---|---|
| `<title>` | the id: `u1`, `u2`, `u3`, `british`, `u1demo`, `u2demo`, `u3demo`. Default `u2` |
| `--game DIR` | where your unpacked copy is, default `./game` and then the repository |
| `--disk FILE` | which save floppy to use, default the title's own from `tools/games.js` |
| `--headless [N]` | no window, N frames, write a PNG. `SHOT=<path>` chooses where |
| `--cpu-rate N` | percentage of the FM Towns clock. The demos default to 20, the games to 100 |
| `--locale LANG` | patch a demo's narration from `locale/<LANG>/` before running it |
| `--rebuild` | force the cmake build even if a binary is already there |

It builds into `build/play/<title>/`, one directory per title because cmake caches the target name inside the build
tree, and the SDL3 archive is shared at `build/play/sdl3`. `U2_WORK=<dir>` moves all of that elsewhere, which is what
the containers below use when the tree is mounted read-only.

**Builds are slow the first time and fast afterwards.** Every title compiles its own copy of the 302-file shared TBIOS
module, so a cold build is about four minutes and the seven titles are the same work seven times. With ccache, measured
on four cores, a cold build is 4m33s, a second title is 9s and a rebuild is 1.2s. The scripts point the cache at
`build/.ccache` so it survives `podman run --rm`, and `U2_CCACHE_DIR` overrides it.

## Recompile the module from your disc

The committed `module/` is the recompiler's output. Regenerating it needs the disc, the venv and about a minute per
title:

```bash
./tools/port-build.sh u3            # recompile, build, run 120 frames headless
./tools/port-build.sh u3 --reuse    # skip the recompile, use build/u3/recomp
./tools/port-build.sh u3 --no-run   # build only
./tools/port-build.sh u3 --frames 600
```

It extracts the program and TBIOS from the disc, strips the 512-byte `MP` header, derives the seed addresses and the
no-code ranges from that image, recompiles both modules, measures instruction coverage, writes a cue, configures cmake
and runs. `DISC_IMG=/path/to/the.img` if the image is not beside the tools. The full walk through, including why the
header strip must not be skipped, is [Building the port from the download](port-from-source.md).

## Cross-build for Windows

```bash
WINDOWS_IDS=u1demo ./tools/win-build.sh    # one title, a few minutes
./tools/win-build.sh                       # all seven, about half an hour
```

It builds in the mingw container, copies the tree into a volume so nothing lands in the working tree as root-owned
files, and writes `dist/fm-<id>-windows-x86_64.exe`. Each one is checked for an import table of Windows' own DLLs only,
so no DLL travels with the binary. `--rebuild-image` rebuilds the container first.

**These files are not run by CI.** The three games were checked under Wine when they were added, the four newer ones
have never been executed anywhere. If you are on Windows, your report is the only evidence that exists.

## Package a release

The Linux assets are built in the AlmaLinux 9 image, so the binary is linked against an older glibc and libstdc++ than
any current desktop, which is what makes it portable:

```bash
podman run --rm -e CCACHE_DIR=/work/build/.ccache -e SDL3_PREFIX=/work/build/sdl3-alma9/prefix \
  -v "$PWD:/work:z" -w /work --entrypoint bash localhost/u2-x-alma9 \
  -lc './tools/release-package.sh'
```

Both `SDL3_PREFIX` and `CCACHE_DIR` matter, and both have bitten:

- **`SDL3_PREFIX`** must name an archive built by *this* container's compiler. A prefix built on the host links glibc
  symbols that AlmaLinux 9 does not have, and the failure is a wall of `undefined reference to __isoc23_strtol`, which
  names glibc rather than SDL. `dist/build-<id>/` caches the old prefix, so clear it if the error appears.
- **`CCACHE_DIR`** must be inside the mounted tree. The ccache package's `/etc/profile.d/ccache.sh` otherwise points it
  at `/var/cache/ccache`, which is discarded with the container, and every build is cold. Measured as 0 percent hits
  across three builds before it was spotted.

`tools/release-package-windows.sh` is the Windows half and needs no container when mingw is on the host. Both refuse to
package a binary that is not self-contained, and the release job refuses any asset that is not one of the fourteen.

## NoVNC on a headless machine

Two different containers, for two different programs. Both serve a browser window and neither needs a monitor.

**The port**, which is what most people want on a remote box:

```bash
./tools/x-run.sh start           # builds if needed, prints the URLs
TITLE=u3 ./tools/x-run.sh start  # any title, u2 is the default
ARGS="--cpu-rate=25" ./tools/x-run.sh start
PLAY_ARGS="--locale en" ./tools/x-run.sh start
./tools/x-run.sh shot out.png    # what it is showing
./tools/x-run.sh logs            # follow it
./tools/x-run.sh stop
```

Serves `http://<host>:6081/vnc.html`, with raw VNC on 5901. The project is mounted read-only and the build goes to a
named volume, so nothing the container writes lands in your tree as root-owned files. `IMAGE=ghcr.io/sloppy-seconds/fm-towns-ultima:port-latest`
uses the published image instead of building one, which needs no local toolchain at all. The HTTP API is on 8080.

**The original, in the emulator**, for comparing behaviour against the machine:

```bash
./tools/vendor.sh                 # Tsugaru and the free ROMs into vendor/
./tools/container-run.sh start
```

Serves `http://<host>:6080/vnc.html`, with the emulator drivable over HTTP on 8080. The emulator's window is 640x496,
so use a virtual screen of `1024x800x24` or the picture is clipped at the bottom.

**Both are Linux-only in practice.** Docker Desktop on macOS or Windows is plausible and has never been run.

### If no window appears

The two containers set the display up for you. A bare `./fm-u2-linux-x86_64` on a machine you reached over ssh usually
does not, because `DISPLAY` is not the problem: the **X cookie** is.

```bash
export DISPLAY=:0
export XAUTHORITY=$(ls -t /run/user/$UID/xauth_* 2>/dev/null | head -1)
./fm-u2-linux-x86_64
```

Ask for the window explicitly and the port will tell you what is wrong instead of falling back silently:

```bash
./fm-u2-linux-x86_64 --graphics=sdl
graphics  --graphics=sdl could not open a window: No available video device
          DISPLAY is ":0". Over ssh the usual cause is the X cookie rather than the display:
```

The default still falls back to no graphics on purpose, because a measurement run must not need a display.

A one-off virtual display, if you would rather not use the containers:

```bash
Xvfb :99 -screen 0 1024x800x24 &
DISPLAY=:99 ./fm-u2-linux-x86_64
DISPLAY=:99 import -window root shot.png    # ImageMagick
```

## Headless runs and screenshots

```bash
U2_SHOT=/var/tmp/u2.png ./fm-u2-linux-x86_64 --graphics=none --frames=600   # no window, a PNG at the end
./fm-u2-linux-x86_64 --graphics=none --frames=200000                       # fifty minutes of guest time, fast
```

`--graphics=none` is what the measurement paths use, because a run must not change according to whether a display
happens to be reachable. `--control` opens a JSON control channel so the machine can be stepped, keys pressed and frames
captured without a window.

## The gates

```bash
node tools/checkall.js      # everything that needs no disc: sources, docs, plan, site build
node tools/verify.js        # the disc: sizes, checksums, formats, every asset
node tools/portcheck.js     # the port's measured constants
node tools/plancheck.js     # the plan's metadata
```

`checkall.js` is the one to run before a commit, and it is what CI runs. It needs no disc and no game file, by design.
`verify.js` needs the unpacked zip, and it is the one that catches a different rip.

## Where things live

| path | what |
|---|---|
| `module/<id>/` | the recompiled game code, one directory per title, committed |
| `module/tbios/` | the shared TBIOS module, 302 files, committed once for all seven |
| `build/play/<id>/` | `play.sh`'s build tree and the assets it extracted |
| `build/<id>/` | `port-build.sh`'s stage: the fresh recompile, the binary, the cue |
| `dist/` | packaged release assets, gitignored |
| `locale/<lang>/` | translation tables, one directory per language |
| `saves/` | characters as plain files, not a floppy image |

The rest of the documentation, including every measurement behind these scripts, is the [docs site](index.md).

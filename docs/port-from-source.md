# Building and running the port from the download

The route from the archive.org zip to a running `u2port`, with nothing on the author's disk that you do not also
have. Every command on this page was run on 2026-10-30 in a clean clone with `build/` and `fmtownskit/` removed, and
the outputs below are what it printed.

The short route, the one that is played and demoed, is `./tools/x-run.sh start` after step 2 and step 3. This page is
for the person who wants the build itself: to change the port, to measure it, or to not run a container.

## What you need

Linux, with `git`, `node`, `python3`, `cmake`, a C++20 compiler and `pkg-config`. The container route needs `podman`
instead of the compiler. Windows and macOS are untested, as they are everywhere in this repository, and the shell
scripts need a bash environment.

## 1. Clone, and put the game in place

```bash
git clone https://github.com/sloppy-seconds/fm-towns-ultima
cd fm-towns-ultima
```

Unpack `FM-Towns CD/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[+UserDisk].zip` from
[archive.org/details/fmtownscdcollection](https://archive.org/details/fmtownscdcollection) into that directory. It
should leave five files beside the tools: the disc as `.img`, `.ccd`, `.cue` and `.sub`, and the save floppy as
`.hdm`. Then confirm you have the same rip this work was built against:

```bash
./tools/check-disc.sh
```

## 2. The toolkit, and the thing not to do with the patch

```bash
git submodule update --init fmtownskit
node tools/patchcheck.js
```

`fmtownskit` is the FM Towns toolkit the recompiler and the machine come from, and a plain clone leaves the directory
empty. The build says so on `x86.h` if it is missing.

**Do not apply `patches/fmtownskit-mp-support.patch`.** The kit's changes to upstream ride on the submodule's
`mp-support` branch, so the checkout already has them, and the patch file is a readable mirror for anyone who wants
to see what changed and why. `patchcheck.js` is the check that the mirror is still exact, and it is the step a plain
`submodule update` skips.

## 3. The ROMs, because the port needs one of them

```bash
./tools/vendor.sh
```

This is not only the emulator. The port loads the FM Towns font ROM, and without it the program runs and every glyph
is blank, which looks like a broken renderer and is a missing file. The run says so out loud: `no font ROM at
FMT_FNT.ROM, so every glyph will be blank (set U2_FONT)`.

## 4. The Python venv, for one step of the build

```bash
./tools/decode-setup.sh
```

`port-build.sh` measures instruction coverage as part of the recompile, and the decoder that does it needs Capstone,
whose only binding with operand detail is Python. The venv is gitignored at `tools/.venv`, and `--check` confirms it
is there.

## 5. The executable, which is inside the disc

`ENCHANT.EXP` is not in the zip. It is a file on the disc image, and it is gitignored here because it is the game.

```bash
node tools/getfile.js ENCHANT.EXP
```

That writes it beside the tools and prints the size, 1,072,398 bytes. `--list` shows what else is on the disc, and
the same tool pulls `TBIOS.BIN` if you want to look at it directly.

## 6. A disk with characters on it

```bash
unzip -o assets/save-disk/userdisk.hdm.zip -d saves/
```

Three characters, in-game slots 1 to 3. The port cannot create a character yet, so without this the only route into
the game is closed and the quickstart would be "play the original first".

## 7. Build

```bash
./tools/port-build.sh
```

It extracts TBIOS from the disc, strips the `MP` header from `ENCHANT.EXP`, derives the seeds and the no-code ranges,
recompiles the game and TBIOS as two modules, writes the one-track cue the kit's disc reader accepts, configures
cmake, builds, and then runs 60 frames headless. `--reuse` skips the recompile, which is the slow half.

**The trap this step exists to avoid.** The module is keyed by runtime address, and the runtime address of file offset
`0x200` is `0`. So the recompile runs on the image with its 512 header bytes removed, and every seed and every
no-code range is shifted by the same `0x200`. Recompile the unstripped file and the module builds, links, runs, and
every lookup is `0x200` out, which is this repository's most expensive recurring mistake. `port-build.sh` does the
strip and asserts the size difference rather than trusting it.

**The one thing that used to make this step un-reproducible, and no longer does.** TBIOS is seeded from a live
capture of the running game, `saves/analysis/entry-boot-tool.txt`, which is 3.2 MB of emulator trace and is
gitignored. Without it the TBIOS module has 307 functions instead of 5,573 and the run faults at `0110:6d73` on
frame 80. That derivation is now checked in as `tools/tbios-seeds.txt`, `port-build.sh` falls back to it when the
capture is absent, and `tools/tbios-seeds.py --check` asserts the two still agree wherever the trace exists.

## 8. Run it

```bash
U2_FONT=vendor/roms/FMT_FNT.ROM U2_FONT20=vendor/roms/FMT_F20.ROM \
U2_SHOT=/var/tmp/notice.png \
./build/port/b/u2port --graphics=none --frames=120 \
  ENCHANT.EXP build/port/tbios.bin build/port/disc.cue saves/userdisk.hdm
```

`--graphics=none` is the measurement path, and `U2_SHOT` writes the frame the machine is showing when the run ends.
The frame at 120 is the copyright notice, with its text drawn, which is the first screen that proves the font, the
disc and the recompiled code are all working together.

## 9. Or skip to the container

```bash
./tools/x-run.sh start
```

That builds inside `container/Containerfile.x` from a read-only mount of the project, into a named volume, and
serves the display at `http://<host>:6081/vnc.html`. It is the route the README's first screen gives, and the one
that has been played. If no module exists yet the container runs the recompile itself, so the host needs the game
files and a container runtime and nothing else, and a published release image skips even the image build:

```bash
IMAGE=ghcr.io/sloppy-seconds/fm-towns-ultima:port-latest ./tools/x-run.sh start
```

## 10. In the game

At the game menu pick *Journey Onward* and a character that already exists. `Generate Character` does not work yet,
and `Esc` or `Q` will end the run. The list of what is broken, each with the observation that found it, is
[here](port-defects.md).

## What a release contains, and what it cannot

`.github/workflows/release.yml` publishes two things from a `v*` tag. The image above goes to ghcr.io, and a host
tarball built by `tools/release-package.sh` goes on the release. Neither can contain a playing port, because a
playing `u2port` embeds the recompiled game and the recompiled game is the game. So the tarball holds the binary
built against a synthetic module, the kit's MIT licence text, and a `README.txt` that says all of that in plain
words. The route that plays is this page, or the container with your own disc mounted.

## What CI proves, and what it cannot

`.github/workflows/port-build.yml` runs on every push and proves the port still links with no game file anywhere in
the pipeline, by recompiling a 4 KB synthetic image and linking `port/main.cpp` against that. It cannot prove the
port plays, because that needs the disc, and a workflow that faked it would be testing a different program. The
script it runs is `tools/ci-port-build.sh`, and it refuses to run when `ENCHANT.EXP` is present so it cannot be
mistaken for the real build.

## Reading

[The port plan](recomp-plan.md) for the divergences this build resolves, [the fmtownskit patches](fmtownskit-patches.md)
for what the toolkit needed, and [why this is hard](why-this-is-hard.md) for the obstacles behind all of it.

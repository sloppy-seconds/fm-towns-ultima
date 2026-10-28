# Geartowns: the container builds, the disc parses, the MCP server serves 106 tools

**Verdict: POSITIVE on everything needed to attempt the two blocked questions, and the
boot itself is NOT yet confirmed.** This page records what was proven and what was not,
because the difference matters for what to do next.

## RESOLVED 2026-10-27: the disc boots and Ultima II launches

The boot is now confirmed. The trilogy disc reaches the Towns OS CD browser
(`TownsMENU V1.1L20`, volume `TRILOGY`, icons for Ultima I/II/III) and a double-click
launches Ultima II to its title screen. The earlier "GL presentation" blocker below was a
misdiagnosis: the window was rendering fine, the emulated machine was hung.

**Root cause: the machine model lacks the free-running timer the IPL waits on.**

**Tried:** boot the `.cue` on the default `model1_2`. The Towns BIOS showed
`システムが遅いです` ("the system is slow") and froze. The frame counter advanced at full
speed and `get_screenshot` changed from black to the BIOS screen, so the emulator was
running, not crashed.

**Measured:** the CPU sat in the boot ROM. `get_disassembly` at the loop PC (`FC00:13D3`)
shows a timed delay that polls I/O port `0x26`:

```
FC00:13D3  IN  AX,0x26      ; read free-running timer
FC00:13D7  IN  AX,0x26
FC00:13DB  SUB DX,BX        ; elapsed ticks
FC00:13E3  SUB ECX,EDX
FC00:13E6  JA  0x13D7       ; spin until the delay expires
```

`pit.cpp` decodes port `0x26` only when the profile carries
`GT_MACHINE_FEATURE_FREE_RUN_TIMER`. `machine_profiles.h` gives that feature to `ug`,
`marty`, `hg` and `hr`, but **not** to `model1_2`, `1f`, `10f`, `cx` or `ux`. On those the
port reads a constant, the delay never expires, and the IPL hangs. The CD head stops at
LBA 59 (just past the `IPL4` boot sector and the `CDROM` directory), which is where the
delay loop first runs.

**Verdict: POSITIVE.** Boot with `--model hr` (or `hg`). On `hr` the AUTO boot reaches the
browser with no extra steps. `marty` also has the timer but stalls as a console (this is a
Towns OS computer CD, and the Marty firmware `MAR_EX0-3.ROM` is not present). The fix is
wired into `container/entrypoint-geartowns.sh` (`MODEL`, default `hr`) and
`tools/geartowns-run.sh`.

**Two more things headless needs, both now handled by `tools/mcp-geartowns.py`:**

- A headless instance starts with the CPU **paused** at the reset vector, so nothing runs
  and `get_screenshot` is black until `debug_continue` is issued.
- The IPL only reads the CD when the boot device is forced. `debug_reset` takes a `boot`
  argument (`cdrom`, `floppy1`, `hard_disk0` and so on) and `boot:"cdrom"` holds the system
  ROM's CD boot key through the reset. On `model1_2` this was still needed after the timer
  fix. On `hr` the AUTO boot is enough.

**MCP HTTP is unusable under podman NAT, confirmed from source.** `mcp_transport.h`
rejects any request whose `Host` header is not the address the socket was accepted on
(DNS-rebinding guard). Under podman port-forwarding that address is the container IP, so
the published port always returns a bare `403`. stdio has no such check and is the
transport. The old client also closed stdin after writing its batch, so Geartowns exited
before answering a `tools/call`. The rewrite keeps stdin open and reads replies on a
thread.

**Launch a game:** `python3 tools/mcp-geartowns.py --launch 2` boots the disc on `hr`,
double-clicks the Ultima II icon and writes `analysis/geartowns-u2.png`. The game then
prints `ディスクを読み込んでいます!` ("loading disk"), which is Ultima II asking for its
in-game data disk, not an emulator fault.

## Playing a game: input and speed limitations

Booting to the Towns OS browser and launching Ultima II to its title screen works. Getting
from there to comfortable interactive play has three findings, all measured this session.

**The save disk must be one U2 initialised, not the shipped blank.** The pristine
`[UserDisk].hdm` is a formatted-but-empty volume and the launcher rejects it with
`A WRONG DISK! Push [space]` (the string is in TMENU, not the game, per
`docs/save-disk.md`). `saves/u2_working.hdm` already contains `ROSTER1.UT2` and
`WORLD1.UT2`, so it is a disk U2 wrote itself and it is accepted. Mount it **writable**
(`--fd1` on a read-write path). A brand-new game instead needs U2's own "initialise disk"
prompt accepted, which writes the filesystem itself.

**Interactive input through noVNC does not reach the game.** This is the headline
limitation. With the windowed container under Xvfb, keyboard and mouse events delivered
through X never arrive at the SDL3 window, so arrow keys and clicks in the browser do
nothing. This was isolated, not assumed:

- The Geartowns window is the only client and holds `_NET_ACTIVE_WINDOW`, and `openbox`
  runs as a window manager, so it is not a focus problem.
- `xdotool key Down`, `xdotool windowactivate`/`windowfocus` first, and a real XTEST
  `mousemove`+`click` followed by a key all left the menu selection unchanged (screenshot
  byte-identical each time). XTEST is the same delivery class noVNC uses, so noVNC input
  fails for the same reason.
- MCP `keyboard_key` (`DOWN`, `press_and_release`) and `mouse_click` DO work, because they
  inject at the emulated device layer and bypass X entirely. That is how the menu highlight
  was moved and how the game was launched.

So the game is fully controllable, but only over MCP, not through the VNC keyboard. The
rendering path is fine (frames present and update), it is SDL3's X event pump under Xvfb
that is not delivering input.

**"Slow" is the CD read, not the CPU.** `get_system_status` on `hr` reports FM Towns II HR,
80486SX at 20 MHz, 4096 KB RAM, and the emulator runs at full speed (about 61 fps
emulated). The long "loading disk" pause is the CD read, governed by `CDROMSpeed` in
`config.ini`, not the core being slow.

**Options for interactive play, none built yet:**

1. **MCP input bridge.** A small page served by the container that forwards browser
   keystrokes and clicks to MCP `keyboard_key`/`mouse_click`. Real play over the network,
   no X dependency. Fits the "MCP is the interface" design.
2. **Play in Tsugaru, debug in Geartowns.** Tsugaru's input path already works
   (`supervisor.js` `/api/mouse`), so keep interactive play there and use Geartowns
   headless for the debugger and palette work.
3. **Run Geartowns on a real display** where SDL gets input normally. Not viable headless
   over SSH.

## What is proven

**The container builds.** `container/Containerfile.geartowns`, Fedora 44, SDL3-devel from
the distro. The Geartowns README's Fedora recipe says `dnf install @development-tools`,
but that group did not bring in `g++` in this image and the first build failed with
`g++: command not found` on every object file. The packages are therefore listed
explicitly.

**The FreeTOWNS ROMs load.** This was the main risk and it resolves in our favour. Our
vendored ROMs match none of the CRCs in the README's MAME `fmtowns` table:

| file | ours | MAME `fmtowns` expects |
|---|---|---|
| `FMT_SYS.ROM` | `EAB9C9DC` | `53319E23` |
| `FMT_DOS.ROM` | `95ECC6E4` | `112872EE` |
| `FMT_FNT.ROM` | `736D9CB1` | `955C6B75` |
| `FMT_DIC.ROM` | `504BF849` | `B314C659` |

But the README states that "The Free FM Towns Project's replacement ROMs are recognized
too, and run the Model 1/2", and the run confirms it:

```
Loading firmware directory: /roms
Firmware loaded: Free FM Towns Font ROM. CRC: 736D9CB1
Unknown firmware loaded: FMT_SYS.ROM.    CRC: EAB9C9DC
Unknown firmware loaded: FMT_DOS.ROM.    CRC: 95ECC6E4
Firmware loaded: Blank ROM.              CRC: 504BF849
```

The font ROM is recognised **by name**. The sys and dos ROMs load as "unknown" with a
warning, which the README permits. `FMT_DIC.ROM` was absent from the mount on that run and
fell back to a blank ROM, which may or may not matter for booting and is untested.

**The disc parses exactly as documented.** 8 tracks, track 1 `MODE1/2352`, tracks 2-8
AUDIO, which matches `docs/` independently.

**The MCP server works and has the tools.** 106 tools. The ones that matter:

| tool | for |
|---|---|
| `get_palettes` | the palette question in `docs/palette.md` |
| `set_breakpoint`, `read_memory`, `list_memory_areas` | break at `EGB_palette` |
| `get_trace_log`, `set_trace_log` | the `0xe6a58` register-allocation question |
| `get_screenshot`, `get_crtc_registers` | confirming the screen state |
| `save_state`, `load_state` | repeatable setups |

## What is NOT proven, and it is the headline

**The game has not been seen to boot.** No screenshot has been captured from a running
machine. The emulator starts, loads firmware, mounts the disc and serves MCP, but nothing
in this work confirms a title screen.

## Three things that were learned the hard way

**`--cd` must be given the `.cue`, not the `.img`.** Geartowns dispatches on extension,
and `.img` is also a floppy extension, so `--cd trilogy.img` produced "Not a floppy disk
image". The `.cue` unambiguously marks a CD. The `.img` must sit beside it or the `FILE`
line does not resolve.

**Firmware has no command line flag.** It comes from `config.ini`, section `[Firmware]`,
keys `Default` and one per model (`model1_2` and so on). The file is generated under
`$HOME/.local/share/Geardome/Geartowns/` on first run. `--portable` does not put it beside
the binary. A headless container must seed this file.

**MCP over HTTP did not work; stdio did.** HTTP on a non-loopback address requires
`GEARTOWNS_MCP_HTTP_TOKEN`. With the token set and accepted, and the server logging
"HTTP client connected", every JSON-RPC request returned a bare `403 Forbidden` with a
`text/plain` body and no JSON error. `--headless --mcp-stdio` worked on the first attempt.
Note also that `--mcp-stdio` alone tries to open a GUI window and dies with
`XDG_RUNTIME_DIR is invalid or not set`, so both flags are required together.

The protocol version this build speaks is **`2025-11-25`**, reported in its `initialize`
response. `2024-11-05` was tried first and is not it.

## What is left, in order

1. **Get a screenshot.** `tools/mcp-geartowns.py --call get_screenshot` returns nothing
   yet, so the stdio client is not completing a `tools/call`. The handshake and
   `tools/list` both work, so the fault is in the client, not the server. Cheapest next
   step is to drive it with a small script that keeps stdin open and reads replies
   incrementally, rather than writing a fixed batch up front: a `tools/call` may need the
   emulator to have run a frame first.
## PINNED: the blocker is GL presentation under Xvfb

**Where this stopped, and exactly what to try next.** The emulator runs, the BIOS
executes, and nothing is drawn, because SDL3 cannot present frames to the X server.

### What is proven

| piece | state |
|---|---|
| container builds | yes, Fedora 44, SDL3 from distro |
| FreeTOWNS ROMs load | yes, font ROM recognised *by name* |
| disc parses | yes, 8 tracks, track 1 `MODE1/2352`, matching `docs/` |
| BIOS executes | yes, confirmed from a debugger screenshot |
| MCP server | yes, **106 tools** including `get_palettes` and `set_breakpoint` |
| noVNC reachable | yes, bound `0.0.0.0` |
| **the picture** | **NO** |

The BIOS evidence, read from a screenshot of the debugger:

```
RESET:
F000:0000FFF0  -> JMP FAR LOC_000FC020
FC00:00000020   CLI
FC00:00000021   CLD
FC00:00000024   MOV DX, 0x3C26
FC00:00000027   OUT DX, AL
```

That is real FM Towns boot code, so the emulation core works. The display path does not.

### The blocker

The log repeats without end:

```
SDL_GL_SetSwapInterval(1) failed: That operation is not supported
```

and two screenshots taken 15 seconds apart are **byte-identical**. The framebuffer never
changes. So it is not paused, not crashed, and not slow: it is failing to present.

What has been eliminated:

- **Xvfb does advertise GLX.** `xdpyinfo` lists `GLX` and `XTEST`.
- **Mesa and the software rasteriser are installed.** `mesa-dri-drivers`, `mesa-libGL`,
  and both `swrast_dri.so` and `kms_swrast_dri.so` are present.
- **`SDL_RENDER_DRIVER=software` and `LIBGL_ALWAYS_SOFTWARE=1` did not help.** The
  `SwapInterval` failures continued, 2,148 of them, because Geartowns configures SDL
  itself rather than honouring those variables.
- **It is not the debugger being paused.** `Debug = false` and `PauseWhenInactive = false`
  were set and the picture still did not move.

### What to try next, in order

1. **Find a Geartowns renderer setting.** The config has a programmable shader chain and
   a `[Render]`-shaped set of keys. A software or no-shader renderer may exist. Grep
   `config.ini` for `shader` and read the shader chain README in the repo.
2. **Give Xvfb a real software GL stack.** `Xvfb` with `+extension GLX` is not the same as
   a working GLX context. Options are `xvfb-run` with a matching `libglx`, or replacing
   Xvfb with `Xorg` on a dummy driver (`xorg-x11-drv-dummy`), which gives a proper
   GLX-able framebuffer.
3. **Try `--fullscreen` instead of `--windowed`.** A fullscreen SDL surface may take a
   different path than a windowed one, and under Xvfb with no window manager the windowed
   path is the one most likely to be missing something.
4. **Give up on the picture and use headless MCP.** The palette question needs
   `get_palettes`, not a screenshot. Headless uses no GL path, so the blocker disappears
   entirely. My stdio client completed the handshake and `tools/list` but never got a
   `tools/call` response, which is a bug in `tools/mcp-geartowns.py` rather than in
   Geartowns, and it is the shorter route to the reason the container exists.

Option 4 is the one I would take first if the picture is not itself required.

### Three things learned the hard way, all now fixed or recorded

**`--cd` must be given the `.cue`, not the `.img`.** Geartowns dispatches on extension and
`.img` is also a floppy extension, so `--cd trilogy.img` produced "Not a floppy disk
image".

**`--portable` relocates the config and breaks firmware loading.** It puts `config.ini`
beside the binary instead of under `$HOME`, so Geartowns finds nothing and runs with an
empty firmware path. The symptom is `No firmware found for FM Towns (Model 1/2)` while
`/roms` plainly holds all five ROMs. This cost a debugging session and produced a blank
screen that looked like a boot failure.

**A 640x480 Xvfb crops the emulator window.** The user spotted this in the VNC view before
my screenshots revealed it. Use a larger virtual screen, and note that two of my earlier
"no window exists" conclusions were invalid because `xwininfo` and `xdotool` are not
installed in the image.

**MCP over HTTP returned a bare 403; stdio works.** With `GEARTOWNS_MCP_HTTP_TOKEN` set
and accepted, and "HTTP client connected" logged, every JSON-RPC request got a `403` with
a `text/plain` body and no JSON error. `--headless --mcp-stdio` worked first time. Note
`--mcp-stdio` alone tries to open a GUI and dies with `XDG_RUNTIME_DIR is invalid`.
Protocol version is **`2025-11-25`**.

## What this does not change

Tsugaru stays the pipeline. `cserve.js`, the compile loop, the CMOS behaviour and the
`-HD0` UNZ images are all proven there, and nothing here suggests moving them. Geartowns is
a second instrument for a different class of question.

## Reproducing

Rootless podman is enough on this host (the image lives in the invoking user's storage).

```bash
# build once (compiles the C++ emulator, several minutes)
podman build -t geartowns -f container/Containerfile.geartowns .

# headless is the primary mode: boots the disc and launches Ultima II, writes a screenshot
python3 tools/mcp-geartowns.py --launch 2

# a long-lived headless container for logs/status
./tools/geartowns-run.sh start

# a live browser view of the Towns OS CD browser instead
./tools/geartowns-run.sh start --vnc
```

`tools/geartowns-run.sh` seeds `config.ini` (the `[Firmware]` path has no command line
flag), forces `--model hr`, and mounts the disc from a scratch dir of hardlinks so podman
never relabels the whole repo. `--vnc` binds noVNC and raw VNC on `6082`/`5902` by default.
Override with `GEARTOWNS_VNC_PORT`/`GEARTOWNS_RFB_PORT` if those are taken. MCP runs over
stdio, not HTTP, because the HTTP transport's Host-header guard rejects every request that
arrives through a podman port-forward.

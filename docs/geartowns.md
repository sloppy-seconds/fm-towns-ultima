# Geartowns: the container builds, the disc parses, the MCP server serves 106 tools

**Verdict: POSITIVE on everything needed to attempt the two blocked questions, and the
boot itself is NOT yet confirmed.** This page records what was proven and what was not,
because the difference matters for what to do next.

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

```bash
sudo -v
sudo podman build -t geartowns -f container/Containerfile.geartowns .
./tools/geartowns-run.sh start
python3 tools/mcp-geartowns.py --find palette
```

The container needs `/roms` populated with the four Model 1/2 ROMs, the disc at `/cdrom`,
and a seeded `[Firmware]` section in `config.ini`. `tools/geartowns-run.sh` seeds it.

Ports, all bound `0.0.0.0`: **6082** noVNC, **5902** raw VNC, **7778** MCP HTTP.

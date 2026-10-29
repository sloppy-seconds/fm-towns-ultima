# The fmtownskit patches

`fmtownskit` is a git submodule at `./fmtownskit`, pinned to a commit on
`https://github.com/vs-sr-dev/fmtownskit`, which is the shape the other games in that organisation use: their
repositories carry `[submodule "fmtownskit"] path = fmtownskit`. The pin is a **published** commit, and this
project's MP support is a patch series on top of it, in
**`patches/fmtownskit-mp-support.patch`. That file is the authoritative list:** the count of patches is whatever it
contains, and `node tools/patchcheck.js` derives it rather than trusting a number written here.

Why a series rather than a branch: the MP support was developed on a local `mp-support` branch of the old clone,
seven commits that were never pushed, so no submodule could point at them. Regenerating the series as
`git diff origin/main` folds those commits and the later working-tree edits into one file that applies to the
published pin. The commit messages are not in the series, and the branch was preserved before the old clone was
removed, in `/var/tmp/fmtownskit-mp-support.bundle`.

## Setting it up

```
git submodule update --init fmtownskit
git -C fmtownskit apply patches/fmtownskit-mp-support.patch
```

That leaves the submodule's working tree **modified against its own HEAD**, which is expected and permanent:
the pin stays clean so that anyone can fetch it, and the difference is described by the patch file. `git status`
will therefore always report the submodule as having modified content.

## What it is checked against

`node tools/patchcheck.js` clones the submodule to a temporary directory, asserts that the pin is reachable from
`origin/main` (a pin to a local commit looks exactly like a pin until a stranger tries to fetch it), applies the
committed patch, and compares the result byte for byte with the submodule's working tree. It also fails if the
working tree holds a change the patch does not describe. It skips with a printed note when the submodule has not
been initialised, because a stranger with only the zip has not run `git submodule update` and should not be told
the check failed.

Measured: the series names 16 files and 46 hunks, and applying it to a fresh clone at the pin reproduces all 16
exactly.

**One file in the submodule is not ours.** `README.md` also shows as modified there: it describes the kit's own
`.agents/skills/fmtownskit/` documentation, which is work in progress on that clone and not this repository's. It
is left exactly as found and deliberately excluded from the patch.

## The patches

Each entry names the file, what it changes, and the measurement that motivated it. The numbered "patch" names in
`recomp-plan.md` and `plan.md` are labels for the same changes, not a second list.

| file | change | why, and where the measurement is |
|---|---|---|
| `exp.py` | `MP` images: `image_offset = 0x200`, the image is the file after it, and the entry is the dword at `0x14` taken as an address in that image | item 8b. `dword@0x14` is `0x101A20` and file `0x101C20` holds `EB 56` (`JMP 00101A78`), which the loader's `IRETD` at `0008:3DD3` delivers. Before this the reader kept the whole file as the image at base 0, so every immediate was `0x200` adrift: 498,320 instructions and 284,785 conflicts, against 622 functions and 0 conflicts after. `docs/recomp-plan.md` "Patch: the MP header's EIP". |
| `recomp/__main__.py` | `--no-code` accepts `NAME=LO:HI` as well as a global `LO:HI`, and refuses a name that matches no module | item 8a. One global list applied ENCHANT's ranges to TBIOS and refused its real code at `0xb91-0xe1c`, which is padding in the game and ordinary code in the BIOS. The workaround was two recompilations merged by hand. Counts identical after: game 818 functions and 41,847 instructions, TBIOS 5,573 and 15,288, 0 refused and 0 conflicts in both. |
| `runtime/x86.h` | `g_watch_lo`, `g_watch_hi`, `g_x86_cur`, `x86_watch_write`, and `X86_WATCH` at the top of `wr8`, `wr16` and `wr32` | patch ten. A physical `MEMW` watch on the machine misses stores when the program's page tables move the address, and a watch in `Machine::mem_write` misses every write to mapped RAM because the inline fast path never reaches it. One unsigned compare when unarmed. |
| `runtime/towns_mem.cpp` | defines the watch's globals and prints each hit with its `cs:eip`, capped at 64 | patch ten, same reasoning. Its first use showed the port never writes `0x400BAA`, which turned a data question into a control-flow one. |
| `runtime/towns_cpu.cpp` | when the dispatched `int` vector is 0, read it from guest memory at `next - 1` | patch nine. Every Origins binary here patches its own `int`: the routine at guest `0x1023f6` stores the number into the next instruction (`mov [0x10241b], al`) and the bytes go from `CD 00` to `CD 93`. A recompiled module compiles the on-disk byte and would trap vector 0 for ever. `docs/self-modifying-int.md`. |
| `runtime/towns_disc.cpp` | `handle()` refuses an empty path; `read_data` and `walk` return nothing when no data track is open; the `PREGAP` refusal names the cue, the line, the track, the gap and what to do instead | item 8c and item 8f. The null was `Disc::data_`, not `handle`, and it killed the port's first 600-frame run inside `Disc::handle` with a backtrace pointing at `fopen`. The `PREGAP` message is item 8f: this disc's cue is one `FILE` with eight tracks and every `INDEX 01` relative to it, so whether the rip contains the 150-sector gap cannot be decided from the cue. Measured output in `docs/disc-and-binaries.md`. |
| `runtime/towns_dos.cpp` | drive `A:` served from a floppy image through two hooks (`fm_floppy_attrs`, `fm_floppy_read`) in `int 21h` cases `3C`, `3D` and `43`; `int 93h AL=0x20` returns its measured registers; `int 90h AH=04` joins the no-op list; `int 90h AH=09` serves a queued keypress | item 7f and the two measurements behind it. `A:`: the program probes `A:\ROSTER1.UT2` before drawing and without the drive it waited 24,000 frames on an error dialog. `int 93h`: read at `000C:0E244D` with the outregs at DS:`0x7a634`, `AX=0x0220` gives `EAX 0x20`, `EBX 0`, `ECX 0`, `EDX 4`, and `AX=0x0720` gives `0`, `1`, `1`, `0`. `int 90h AH=04`: `EAX 0x00000400` in, `0` out, and the result is in `AH`. `KYB_read`: no key is `BX=0xFF00 DX=0xFFFF`, and `a` is `BX=0x1E00 DX=0x0061`, measured at `000C:000000B6` with the break firing first. |
| `runtime/towns_io.cpp` | an unimplemented output port reports its value and the instruction that wrote it | patch twelve. `out 0e51` alone says a port nobody implemented was written and nothing about which device was being programmed. First use named `0x0FF73A` probing four devices at `0x0E51`/`59`/`61`/`69`. |
| `runtime/towns.h` | `press_key(scan, ascii)`, `keys`, `keys_served` | patch eleven, the keyboard. See the `towns_dos.cpp` row for the contract. |
| `runtime/towns_sdl.h` | `std::function<void(uint8_t, uint8_t)> on_key` and `<functional>` | patch fourteen. The front-end maps host keys to the Towns **pad**, and ENCHANT reads the **keyboard**, so without this a window shows the picture and refuses every keypress. |
| `runtime/towns_sdl.cpp` | `towns_key()` maps SDL's scancode to PC/AT set 1 and SDL's layout-aware keycode to the character, and `vsync` calls `on_key` after the front-end's own keys | patch fourteen, same measurement: PC/AT set 1 because `a` is `0x1E` on the machine and ENCHANT indexes a 114-entry table with it. Unmapped keys report nothing rather than a guess, and Escape still quits so a window keeps a way out. |

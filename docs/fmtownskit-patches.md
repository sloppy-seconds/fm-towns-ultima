# The fmtownskit patches

`references/` is not committed, so a change that lives only in the vendored clone is a change that will be lost.
Every edit this repository makes to the kit is in **`patches/fmtownskit-mp-support.patch`**, one file, and it is
the authoritative list: the count of patches is whatever that file contains, and `node tools/patchcheck.js`
derives it rather than trusting a number written here.

## Applying it

```
git clone https://github.com/vs-sr-dev/fmtownskit references/vs-sr-dev/fmtownskit
cd references/vs-sr-dev/fmtownskit
git checkout mp-support            # commit 2203160 is what the patch was made against
git apply /path/to/fm-family-ultima-trilogy/patches/fmtownskit-mp-support.patch
```

`git apply --check` first if the clone is at a different commit. If it does not apply, the commit has moved and
each hunk below names the function it belongs in, so the change can be re-made by hand and the patch regenerated
with `git diff -- exp.py recomp runtime`.

## What it is checked against

Measured, and the measurement is the acceptance criterion for item 8g: applying the patch to a **fresh clone at
`2203160`** reproduces the working vendored tree **byte for byte** across all eleven files it touches. That was run
both ways, `git apply --check` and `git apply` followed by `cmp` on each file, and nothing differed.

`node tools/patchcheck.js` repeats the whole check from scratch (clone to a temporary directory, apply, compare) and
fails if the committed patch has drifted from the vendored clone. It skips with a printed note when `references/`
is absent, because a stranger with only the zip has no clone and should not be told the check failed.

**One file in the clone is not ours.** `README.md` also shows as modified there: it describes the kit's own
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

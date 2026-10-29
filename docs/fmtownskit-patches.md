# The fmtownskit patches

`fmtownskit` is a git submodule at `./fmtownskit` pointing at **the fork**
`https://github.com/paulczar/fmtownskit` on branch **`mp-support`**, with `vs-sr-dev/fmtownskit` recorded inside it
as the `upstream` remote. That is the shape the other games in the upstream organisation use (their repositories
carry `[submodule "fmtownskit"] path = fmtownskit`), with the URL pointed at ours so the pin is a commit anyone
can fetch and the kit can be committed to rather than held as uncommitted edits.

The pin is `e68860e` on `mp-support`, which is upstream `main` plus **seven upstream-quality commits** for MP
support plus one integration commit and one revert. Two-way editing is therefore ordinary git: commit inside the
submodule, push to the fork, then bump the pin in this repository.

**`patches/fmtownskit-mp-support.patch` is a mirror, not the transport.** It answers the question a reader of
this repository actually has, which is what this project changed in the kit and why, in a form git branches do
not provide. `patches/fmtownskit-base.txt` names the upstream commit it is a diff against. Nothing applies the
patch in normal use, and `node tools/patchcheck.js` asserts the mirror is exact instead of trusting it.

## Setting it up

```
git submodule update --init fmtownskit
```

That is the whole setup. No patch to apply, and the working tree is clean afterwards, so `git status` stays
readable. A clone that skips it has an empty `fmtownskit/` and the port build stops on `x86.h` with a message
that says so.

## Editing the kit

```
cd fmtownskit
# edit, then
 git commit -am "what and why" && git push origin mp-support
cd .. && git add fmtownskit && git commit -m "kit: bump the pin"
# and regenerate the mirror so the two records agree
git -C fmtownskit diff $(cat patches/fmtownskit-base.txt) > /var/tmp/mirror.patch
cp /var/tmp/mirror.patch patches/fmtownskit-mp-support.patch
node tools/patchcheck.js
```

`git submodule update --remote` now does something useful rather than something dangerous, because the tracked
branch exists and is fetchable. Rebasing onto upstream is `git -C fmtownskit fetch upstream` and then a rebase,
after which `patches/fmtownskit-base.txt` moves to the new upstream commit and the mirror is regenerated.

## What it is checked against

`node tools/patchcheck.js` asserts four things, in order, and each one is a failure mode this project has already
had:

- **the working tree is clean**, so the branch is the whole truth and nothing is hiding in an uncommitted edit
- **the base commit is an ancestor of the pin**, so the mirror is a diff against something real
- **`git diff <base>` equals the mirror patch byte for byte**, so the readable record cannot drift from the branch
- **the pin is on `origin/mp-support`**, so a fresh clone can fetch the commit it is told to check out. A pin to a
  local-only commit looks exactly like a pin until somebody else tries to clone

It skips with a printed note when the submodule has not been initialised, because a stranger with only the zip has
not run `git submodule update` and should not be told the check failed.

Measured: the mirror names 15 files and 42 hunks, and is identical to `git diff f51f593` on the branch.

**One thing deliberately not ours.** The kit's own `README.md` had a local edit describing its `.agents/`
documentation work in progress. It sat uncommitted in the old clone, so folding that clone's working tree into a
branch would have published somebody else's work in progress. It is reverted to the upstream content in commit
`e68860e`, and the mirror names 15 files rather than the 16 it named when the patch was the transport.


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

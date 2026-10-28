# Plan: get a recompiled C++ build of the game running

**The goal of this plan is a `fmtownskit` recompile to C++ that builds and runs.** Not a reading of 645
routines, not a corpus of specs. Those are means. An earlier version of this page drifted into them and
stated the goal as "recompiled as possible", which is not checkable.

This version is checkable, because the artefact is a binary.

## What exists, measured

| | |
|---|---|
| function starts in `ENCHANT.EXP` | **738** |
| functions `recomp` already emits | **709** |
| the emitted module | **31 files in `/var/tmp/recomp2`, including `CMakeLists.txt` and `modules.cpp`** |
| refusals | **828** |
| unresolved indirect transfers | **24** |
| the runtime | **3,817 lines in `fmtownskit/runtime/`** |
| **has any of it ever been compiled** | **no** |

## The two defects that stop it building today

Both found by reading the generated `CMakeLists.txt` rather than by reasoning about the plan:

1. **`set(FMT_RUNTIME .../fmtownskit/runtime)` points at a path that does not exist.** The toolkit lives at
   `references/vs-sr-dev/fmtownskit/`. The build has never been attempted from this project, so nothing
   caught it.
2. **There is no `main()`.** The output is `recomp` as a `STATIC` library plus a `modules.cpp` that
   registers `g_mod_p_game`. Something has to load the image, set up memory, pick an entry point and call
   it. That file does not exist.

Everything else is in place. This is a wiring problem, not a research problem, and that is the single most
important fact about the current state.

## Stage 0: make the existing output build

> **DONE. It builds, in 8.6 seconds, with no errors.** `cmake` configures, `librecomp.a` links, and two
executables fall out: the kit's `selftest` and this project's `run1`. Both of the defects recorded below
were real and both are fixed.

Build and run:

```
$ tools/recomp-build.sh /var/tmp/recomp3 0xfdeb6
module   GAME  image 1072398 bytes  base 0x0  794 functions
call     0xfdeb6
after    eax 0x000000ff ecx 0x00000000 edx 0x00000000 ebx 0x00000000
         esp 0x0011f000 ebp 0x00000000 esi 0x00000000 edi 0x00000000 eip 0xfffffff0
         eflags 0x202  clocks 14  traps 0  returned
```

`tools/recomp-build.sh` patches the path, drops in `tools/recomp-run1.cpp` as the `main()`, adds the
target, builds, and runs one address. The module reports **794 functions**, which is the 770-seed run and
not the 709 in the table above.

Before anything else, prove the 709 emitted functions compile against the real runtime.

**Artefact:** `cmake` and `ninja` produce `librecomp.a` and `libfmt_towns.a` with the correct
`FMT_RUNTIME` path, from `/var/tmp/recomp2` copied to a build directory.

**Done when:** both libraries link into a stub `main()` that does nothing and exits 0. **Failure case:**
report the first compile error verbatim. A build failure here is a finding about `emit.py` and the runtime
being out of step, and it is worth more than any amount of further reading.

This stage is small and it gates everything.

## Stage 1: make it execute one function

> **PARTLY DONE. It executes and returns. The three-way comparison with the save file has not been run.**

| address | result |
|---|---|
| `0xfdeb6` | **returns**, 14 clocks, `eax` = `0xff`, `eip` = the pushed sentinel. A getter for the int global at `0xdea40`, so the whole call/return path works. |
| `0xfdeb0` | returns, same shape, its twin one dword lower |
| `0x209` | executes 43 clocks and **stops at `int 0x90`**, which is exactly what its body is: `enter 0,0 / mov ah,0 / int 0x90 / movzx eax,ah / leave / ret` |
| `0xfe11c` | **not emitted**, so there is nothing to call |
| `0x101c20` | **not emitted.** This is the entry point at runtime `0x101a20`, and recomp never emitted it because nothing `CALL`s it |

The `0x209` result is the useful one: the code ran correctly and the stop is the *machine*, not the code.
The boundary of what `run1` can do is `int 0x90` and the port I/O that follows it, which is the TBIOS layer
`docs/display-context.md` already maps by name.

**The entry point is not emitted and that is the next fix, not a defect in the runtime.** Seeding the
recompilation with it is one added address in the seed list, in the module's frame: runtime `0x101a20` is
file **`0x101c20`**.

**Artefact:** a `main()` that maps `ENCHANT.EXP` into `X86Cpu` memory, registers the module, calls the
roster writer `0xebb70` by address, and exits with a stated result.

Two independent executions must agree, and the third party is the disc:

1. `fmtownskit.i386emu.CPU.run` runs `0xebb70` with a filled record.
2. The emitted `f_000ebb70` runs with the same record through the runtime.
3. Both outputs match a real `ROSTER1.UT2`.

**Done when:** the two agree with each other and with the save file. **Failure case:** say which two agree
and which does not. Two of three agreeing is the useful result, not a failure.

## Stages 2 to 4: make it run further

These are no longer the plan's centre. They exist to widen what the binary survives, in this order:

| stage | artefact | check |
|---|---|---|
| 2. move the entry point forward | the binary survives N more calls from a real entry | it exits 0 rather than on a fault |
| 3. close the refusals it hits | refusals classified by cause, using `tablecheck.confirmed_by_capstone` | the count the binary actually reaches goes to zero |
| 4. resolve indirect transfers it hits | targets supplied, from captures where a capture can refute a prediction | the 24 sites reached or recorded as unreachable |

**The ordering is driven by the binary, not by the documents.** Whatever it faults on next is what stage 2
or 3 does next. Reading a routine is worth doing when the executable needs it and not before.

## Stage 5: the game loop

The emitted code has no loop, no timer, no input and no file I/O. The runtime has `towns_io.cpp`,
`towns_sdl.cpp`, `towns_disc.cpp` and 3,817 lines around them, so this is integration rather than invention.

**Done when:** a frame is drawn from the recompiled code. That is the first point at which the phrase
"recompiled the game" is honest.

## What this plan does not do, revised

An earlier version said it does not chase a playable game. **That was wrong for this goal.** A recompile to
C++ is only demonstrated by executing it, so playability is the evidence, not a distraction.

It still does not extract more assets, and it still does not resolve the palette.

## Order, and why

| stage | gives | blocks |
|---|---|---|
| 0 | proof the emitted code compiles | everything |
| 1 | proof it executes and is correct | 2 |
| 2-4 | more of the binary surviving | 5 |
| 5 | a frame drawn by recompiled code | the claim |

Stage 0 first. A 709-function module that has never been given to a compiler is a hypothesis, and stages 1
to 5 are all work on top of it.

## The tools this plan uses, and where they are

| module | what it provides | stage |
|---|---|---|
| `fmtownskit/recomp/emit.py` | C++ emission, functions taking `X86Cpu&` | 0, 1 |
| `fmtownskit/recomp/__main__.py` | the CLI, spec `NAME:PATH:CS+seed,seed` | 0, 1 |
| `fmtownskit/runtime/towns.cmake` | defines `fmt_towns`, the library the module links | **0** |
| `fmtownskit/i386emu.py` | a software emulator: `CPU.run(code, regs, flags, mem)` | 1 |
| `fmtownskit/recomp/discover.py` | the guarded walk, `load(path, seeds=...)` | 2, 4 |
| `fmtownskit/tablecheck.py` | `confirmed_by_capstone`, `encoded_sites` | 3 |
| `fmtownskit/x86map.py` | a code/data map, classes `Map` and `Consts` | 3 |
| `run1` (this project) | **the missing `main()`**, as `tools/recomp-run1.cpp` | 156 |
| `fmtownskit/i386.py` | the decoder this repository's own tools use | 3 |

**`i386emu.py` matters** because stage 1 needs a second execution to compare against, and it is already an
i386 interpreter with `FlatMemory` and `CPU.step`. **`towns.cmake` matters** because stage 0 is one path
fix and one `include()`.

One caution: `i386emu` contains `_uc_run` and `_ours_run`, which suggests it has been compared against a
third-party decoder. Confirm that before relying on it, rather than assuming.

**[fmtownskit and seeds](fmtownskit-and-seeds.md)** records what the toolkit already does.

**[Distance to reimplementation](reimplementation-gap.md)** **[Call graph](call-graph.md)** **[Plan](plan.md)**

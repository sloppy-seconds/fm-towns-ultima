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

## Stage 2: the port runs the entry on the machine, and the refusals were a frame error

`port/` plus `tools/port-build.sh` build the game's recompiled code against `fmt_towns` rather than
against the bare `x86.h` runtime. One command does the whole thing:

```
$ tools/port-build.sh
stripped  /var/tmp/u2-ENCHANT-stripped.bin (1071886 bytes, was 1072398)
seeds     532 in the runtime frame, plus the entry
game: 783 functions, 40902 instructions, 134170 bytes of code; 89 jump tables (86 bounded),
      20 indirect transfers unresolved, 0 refused, 0 conflicts
built     build/port/b/u2port
entry     000C:101a20  esp 0x11eac8  cs base 0x400000
the program returned from its entry
after     eax 0x00000008 ecx 0xfffffffe edx 0x00000000 ebx 0x0000ff00
          machine frames 0  guest clocks 757
```

**Two things happened that matter more than the run itself.**

**The 910 refusals were a 0x200 frame error, not the walk giving up.** The no-code ranges from
`tools/codelimits.js` are **file** offsets. Against the stripped image they are 0x200 out, so the walk
was refusing targets as "in a no-code range" when they were in code. Shifted into the runtime frame
the same walk refuses **0** and reports **0 conflicts**, and emits **783 functions instead of 699**. The
refusal count in every earlier write-up is measuring that mismatch.

**The machine handles the interrupts the bare runtime could not.** The start-up no longer dies at
`int 21h`: it runs **757 clocks**, past it, and then stops on named missing devices instead of stubs:

```
towns: write of linear 0051e000 (no device)
towns: load of selector 0024 (no descriptor)
towns: read of linear 00000000 (no device)
towns: read of linear 0051e000 (no device)
towns: write of linear 000df000 (no device)
```

Those are the next work items, and each names itself: a selector the program expects TownsOS to have
created, and linear addresses outside the RAM this program mapped. `townsos()` sets up the machine as
TownsOS hands it over, but the hand-off this program expects evidently includes descriptors and memory
this port does not yet create.

**Two of the three were supplied, and the third turned out to need the disc.** The low 2 MB is now mapped
(TownsOS leaves BIOS work areas there, and the program writes at `0xdf000`), the program's mapping was
widened by 256 KB past the image end (it writes at `0x51e000`), and descriptors exist for `0110`, `0024`
and `002C`. `0110` uses a **measured** base, `0x19EF4`, because live `STA` reported `CS=0110` there.
`0024` and `002C` are flat stand-ins and are marked as guesses in the source.

**With those in, the run reaches a different and more informative wall:**

```
fault at 0000:000000e3: no recompiled function at 0000:00000000 (eip 00101e76, frame 0)
  es 0014 cs 0000 ss 0014 ds 0014 fs 0110 gs 0014
```

Control went to `CS=0000`, which is not a program segment, from `eip 00101e76`. The registers show a
program that has been doing work: `edi 0x7a7d8` is the window record base this project measured.

**The likely cause, offered as a hypothesis and not as a fact.** The real-mode interrupt vector table at
linear 0 is zero-filled here, because nothing has populated it. A far call or an interrupt taken through
a zero vector lands on `0000:0000`, which is what the fault says. Filling it is what
`boot_towns(m, tbios)` does: low RAM plus **TBIOS composed from the disc's own modules** at `0x100000`.
That needs the disc image, a `cue` for the kit's `Disc::open`, and `compose_tbios` against the disc's
`TBIOS.INI`. It is the next step rather than a change of plan.

**What this does not mean.** It is not a running game. The entry runs and returns to nothing, there is no
video because nothing has drawn, and the three missing devices have to be supplied before the start-up can
finish. It is the difference between "the code does not run" and "the code runs until the machine is
missing something", which is the boundary worth having.

## Stage 1: make it execute one function

> **PARTLY DONE. It executes and returns. The three-way comparison with the save file has not been run.**

| address | result |
|---|---|
| `0xfdeb6` | **returns**, 14 clocks, `eax` = `0xff`, `eip` = the pushed sentinel. A getter for the int global at `0xdea40`, so the whole call/return path works. |
| `0xfdeb0` | returns, same shape, its twin one dword lower |
| `0x209` | executes 43 clocks and **stops at `int 0x90`**, which is exactly what its body is: `enter 0,0 / mov ah,0 / int 0x90 / movzx eax,ah / leave / ret` |
| `0xfe11c` | **not emitted**, so there is nothing to call |
| `0x101c20` | **the entry point**, and 73 clocks to `lsl` once it is in the seed list. `615` clocks to `int 21h` once `lsl` is answered, below |

The `0x209` result is the useful one: the code ran correctly and the stop is the *machine*, not the code.
The boundary of what `run1` can do is `int 0x90` and the port I/O that follows it, which is the TBIOS layer
`docs/display-context.md` already maps by name.

**The entry point is not emitted and that is the next fix, not a defect in the runtime.** Seeding the
recompilation with it is one added address in the seed list, in the module's frame: runtime `0x101a20` is
file **`0x101c20`**.

**Done, and it walks.** With `0x101c20` appended to the seed list the entry emits, and the start-up path
runs in two measurable stages:

```
$ tools/recomp-build.sh /var/tmp/recomp4 0x101c20      # before lsl
  ... 73 clocks, traps 0, stopped at "lsl"

$ tools/recomp-build.sh /var/tmp/recomp4 0x101c20      # after implementing LSL
  STOP  int 21h at eip 0x0 (the machine, not the code)
  eax 0x00003000  esi 0x00000081  edi 0x0011effc  clocks 615  traps 1
```

**`LSL` is not a guess and is now implemented.** It asks a selector for its limit, and under a flat model
with 4 GB segments the answer is `0xFFFFF`. That alone took the entry from 73 clocks to 615, because the
start-up code queries segment limits before it does anything else.

**The wall is now `int 21h`**, which is DOS rather than the game: the C runtime's start-up asking the
extender for memory. `runtime/towns_dos.cpp` exists in the kit and belongs to the larger `towns` library
rather than to `x86.h`, so the next decision is whether `run1` grows a DOS layer or links the kit's machine.
Either way the stop is named, and it is a boundary in the host, not a failure in the recompiled code.

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

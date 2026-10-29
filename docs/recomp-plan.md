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

1. **`set(FMT_RUNTIME .../fmtownskit/runtime)` points at a path that does not exist.** The toolkit now lives at
   `fmtownskit/` as a submodule. The build has never been attempted from this project, so nothing caught it.
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

**Done, and the hypothesis was right, and two more things came out of it.**

**This disc does not compose TBIOS, it ships it.** `compose_tbios()` wants `TBIOS.INI` and a set of `MQ`
modules, and the disc has neither. Its 140 catalogue entries include exactly two TBIOS files and **no
`.INI` at all**: a finished `TBIOS.BIN` of **81,920 bytes** and its loader `TBIOS.SYS`. So there is nothing
to compose and the image is loaded as a file. It is extracted with this repository's own `tools/cd.js`
rather than the kit's `Disc`, whose cue reader refuses this disc's `PREGAP` on the audio tracks with "a gap
not in the files is not read here", which is the same ambiguity the project already avoids by using `.ccd`.

With `boot_towns()` in place the far transfer goes to `CS=0110`, the TBIOS segment, instead of `CS=0000`.

**TBIOS is a module too, and the capture seeds it far better than the kit's table.** `towns_cpu` dispatches
by `CS:offset`, so TBIOS has to be recompiled as a second module at selector `0x110`. The kit's own ports
seed it from a far-pointer table near the start of the image (`@110:20-100`), which produced **6
functions** here and faulted on the first real call, at `0110:19b8`. Seeding instead from every distinct
offset that executed in segment `0110` in the live captures, via `tools/tbios-seeds.py`, produces **5,443
functions**.

**And that exposed the next coordinate-space error.** The recompiler applies `--no-code` to **every**
module, and those ranges are derived from `ENCHANT`'s zero fill. Applied to TBIOS they refuse its real
code:

```
fault at 0110:00000dd4: no code at this entry: in a no-code range 0xb91-0xe1c
```

`0xb91`-`0xe1c` is padding in the game image and ordinary TBIOS code. The fix is per-module ranges, which
means two recompilation passes and a `modules.cpp` naming both modules, since the emitter writes one
`modules.cpp` per run. That is the next step and it is plumbing, not research.

**Done, and it works. Two passes were the workaround, and they are gone.** `--no-code` now takes
`[NAME=]LO:HI`, so one pass compiles both modules with 67 ranges scoped to the game and 3 to TBIOS, and the
recompiler writes the `modules.cpp` that names both. The two-pass build described below was correct at the time
and is kept because the counts it produced are the acceptance test for the single pass: they are identical.

`tools/codelimits.js` grew `--file` so it can derive the ranges for any image rather than ENCHANT alone, and
TBIOS's own zero fill is **3 runs**. The result for both modules in that two-pass build:

```
game:  783 functions, 40902 instructions, 0 refused, 0 conflicts
tbios: 5573 functions, 15288 instructions, 0 refused, 0 conflicts
```

~~TBIOS went from 6 functions to **5,573**, and from 2,166 refusals to **none**.~~ **Both halves of that sentence
are wrong and the correction is below: 307 from the kit's own seed, 5,573 with the capture seeds, no refusals in
either.**

**CORRECTED, and the 6 was ours, not the kit's.** That figure was measured with the game's `--no-code` ranges
applied to TBIOS, which is the bug item 8a fixed. Run again with the ranges scoped per module, the kit's own
far-table seed `@110:20-100` gives **307** functions with 0 refused, and the capture seeds take it to **5,573**.
So the capture seeds are worth 5,266 functions, which is still 18 times the table, and the table was never as
useless as a contaminated measurement made it look. The lesson is the one this project keeps relearning: a
number produced while a known bug was in the pipeline is not a measurement of the thing being discussed. The
program now calls into
TBIOS, runs it, and comes back.

**The next wall names a service rather than a place.** The program's own start-up calls three BIOS
services and the third is not implemented:

```
int 21h AX=3000 EBX=0000000C            get the DOS version
int 90h AX=0000 EBX=00000004            succeeded
int 90h AX=0101 EBX=00000004            succeeded
int 90h AX=0400 EBX=00000004            fault: no service
```

Captured by `U2_TRACE_INT=1 build/port/b/u2port`, a trace knob added to the port for this. The call site is
`000C:00000054`, in the program's own low stub, and `ecx` is `0xFFFF` throughout.

**Why the kit cannot answer this one for us.** `Machine::int90()` implements `AH` 00, 01, 02, 05, 06, 09 and
0A, and its comment says those were read on the oracle with **no key ever pressed**. This program asks for
`AH=04`, which that recording never saw. So the behaviour of `AH=04` is not in the kit and must not be
guessed. Two honest routes: run the same oracle recording with U2 at this point, or check the FM Towns
databook for the function, and only then patch `int90()` and record the patch, since the kit is a vendored
clone and its changes are documented rather than made silently.

**Measured on the live machine, and it corrected the decode.** Recorded over the supervisor API rather than
by hand: `RESET`, `BP 000C:52`, then `u2flow.py --journey` inside the container, which stops at
`step 3: waiting for the splash`. The breakpoint fired **3.2 seconds** after the icon was double-clicked, in
the program's own start-up stub, which is the same place the port stops.

```
000C:00000052  CD 90        INT 90H (Keyboard)
  in:  EAX=00000400  EBX=0000002C  ECX=0000FFFF  EDX=00000000
  out: EAX=00000000        (breakpoint at 000C:54, the instruction after the int)
```

Three things came out of that, and one is a correction to this page. The function is `KYB_lock`, named in the
image itself at file `0x240`. **The stub returns in `AH`, not `AL`**: the instruction after the `int` is
`0F B6 C4`, which is `MOVZX EAX,AH`, and Tsugaru decodes it as such in the live dump. My earlier reading of
that byte pair as `movzx eax,al` was wrong. And the int is not answered by C code in the port: on the real
machine it goes through `CS=0008` at linear `0x5C12E`, which is TBIOS's own handler, and it comes back with
`EAX` fully zeroed.

**The patch, and it is one line.** `case 0x04:` joins the no-op list in `Machine::int90()`. The function's
closing `c.r[0] &= 0xFFFF00FF` already zeroes `AH`, which reproduces the measured `0x00000400` in and
`0x00000000` out exactly. One call was measured, with `AL=0`. `AL=1` was not, and this page does not claim
to know what it does.

**After the patch the port gets through start-up.** It needs one more thing the kit does not ask for by
default: the program opens its assets by DOS path, so the machine needs a disc. Without one the first
`int 21h` open segfaults inside `Disc::handle`. `tools/port-build.sh` now writes a one-track cue into the
build directory for the kit's reader, which refuses this disc's `PREGAP` and needs only track 1. That is not
a conversion and the `.ccd` stays authoritative for emulation. With it:

```
60 frames, 15,999,975 guest clocks, no fault, eip 0x000e56f8
```

That is start-up complete: DOS calls answered, TBIOS entered and returned, assets opened off the disc, and
the program in its own code.

**The next wall is an indirect transfer, and the walker missed it.** At 1,200 frames:

```
fault at 000c:00103620: no recompiled function at 000c:00103620 (eip 001037d0, frame 90)
```

`0x103620` is a runtime address inside the game module. It is one of the 20 indirect transfers the
recompiler reports as unresolved. Worth stating plainly: `node tools/cfgwalk.js --check 0x103620` and
`--check 0x103820` both refuse it as an instruction boundary, while the bytes at file `0x103820` are
`55 8b ec` or `push ebp / mov ebp,esp`. Those two statements cannot both be right, so the frame that
`--check` expects is itself now a question, and it has to be settled before seeding the address.

**Settled, and it was a third frame.** `cfgwalk.js` slices `0x20` off the file, so its addresses are
`file - 0x20`. The running program's addresses are `file - 0x200`. Those are `0x1e0` apart, and asking
`--check` in the guest frame is what produced two refusals for a real function head. In its own frame it
agrees: `--check 0x103800` reports a boundary with a prologue and calls it a function head. The full
measurement, and the fact that `docs/call-graph.md` writes the stripped frame while the pixel-writer page
writes the raw one, is in [two-frames-of-reference.md](two-frames-of-reference.md).

**The target is a callback, and there are only seven.** The dword `0x00103620` sits at file `0x1037f9`,
inside the code, so these addresses are immediates passed as arguments and called through
`call dword ptr [ebp+8]`. No call site points at them and the transfer scan cannot see them. A scan for
dwords whose value points at a `55 8b ec` prologue finds **7** in the whole image, **2** of which the
transfer scan already had, so `tools/seeds.js` now adds **5**. That took the module from 784 to **796**
functions without seeding anything by hand.

**The rule needed its own measurement, and it contradicts the one for call sites.** `looksLikeFunctionEntry`
rejects a prologue whose preceding byte is not a terminator, because a call operand can land on `55 8b ec`
by accident. Applied to callbacks it rejects three of the seven, including guest `0x103620`, which the
recompiled program transferred into and executed. The bytes before it are `42 4f 44 59 3e`, the string
"BODY>". This image interleaves string constants with code, so a real function head can follow a string, and
the callback scan tests the prologue alone.

**The next wall is `int 0`, and it is not a service this project has any record of.**

```
fault at 000c:0010241c: int 00h, AX=0220: no service (eip 0010241c, frame 164)
```

The instruction is `CD 00` at guest `0x10241a`, and it is preceded by a context save:

```
0x102415  8b 76 10   mov esi, [esi+0x10]
0x102418  eb 00      jmp 0x10241a
0x10241a  cd 00      int 0
0x10241c  57         push edi
0x10241d  8b 7d 10   mov edi, [ebp+0x10]
0x102420  89 07      mov [edi], eax
```

A save of `eax`/`ebx`/`ecx`/`edx` into a pointer passed on the stack, immediately after `int 0`. Nothing in
this repository documents `int 0` on the Towns, and the kit has no handler, so what it is supposed to do is
an open question rather than a missing case. The fault falls between machine frames 160 and 165, so it is
roughly 2.7 seconds of emulated time into start-up.

**Worked through, and the program patches its own `int` instruction.** The bytes at DS:0x10241A are `CD 00`
at program entry and `CD 93` at the moment of the call, read live with `MD` on both sides of the launch.
Tsugaru decodes the second as `INT 93H`. The other eleven `CD 00` in the image are still `CD 00` live
because they are never executed, and a scan for a `mov [mem], 0x93` finds nothing at all.

The writer is the routine the image names **`int86`**, at guest `0x1023f6`, found by disassembling backwards
from the faulting address:

```
1023fc  8a 45 08        mov al, [ebp+8]        the interrupt number is the first argument
1023ff  a2 1b241000     mov [0x10241b], al     written into the next instruction
102418  eb 00           jmp $+2
10241a  cd 00           int 0                  the slot it just filled
```

**So this is self-modifying code, and a recompiled module cannot see it.** The emitter compiles `int` from
the bytes on disk, so the port trapped vector 0 forever no matter what the program wrote. Patched in
`towns_cpu.cpp`: when the dispatched vector is 0, the vector is taken from the code immediately before the
instruction, which is where the program put it. One bug of mine hid this for a round: the first version
masked the offset to 16 bits and read `0x241b` instead of `0x10241b`, so it read the wrong byte while the
trace beside it showed DS holding `93` all along.

**The next two walls were ordinary services, and one of them is not measured.**

`int 93h AX=0x0220` faulted the kit's `int93`, which only accepts `AL=0xC0`, the CD-DA interface. The caller
at guest `0xe2445` is a CD probe: it makes that call, reads the returned `AH` out of its outregs at
DS:0x7a635, returns -1 when `AH==2`, consults two status bits at DS:0x7a640, and otherwise makes a second
call with `AH=0x07`. All of that is read off the code.

**And then measured, once the emulator was working again.** A breakpoint at `000C:0E244D`, the instruction
after the first call, with the outregs struct read at DS:0x7a634:

| in | EAX | EBX | ECX | EDX |
|---|---|---|---|---|
| `AX=0x0220` | `0x00000020` | 0 | 0 | **4** |
| `AX=0x0720` | `0x00000000` | 1 | 1 | 0 |

The second row was read from the same struct after start-up finished, because the second call is the last to
write it. So `AH` is 0 in both cases, which is the path the code takes when it is neither 2 nor flagged by
the two `0x7a640` bits.

**The port now reproduces that buffer.** `U2_DUMP=<linear hex>` on the port prints 32 bytes of guest memory
at the end, and after 3,000 frames the outregs struct reads `00 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00`,
which is the live value read after start-up, field for field. That is the first differential agreement
between the recompiled program and the machine on a buffer the program itself filled.

`int 21h AX=0x4300` is get file attributes, added to the kit's `int21` with `CX` reporting 0x10 for a
directory and 0x20 otherwise, from the disc reader's own directory flag, and DOS error 2 with `CF` set when
`find()` misses.

**With those in, start-up completes and the program keeps running.** No fault at 1,200 frames or at 3,000,
which is about 50 seconds of emulated time and 800 million guest clocks. It opens its real assets, in order,
from the disc:
```
Q:\GRAPH\HEADTTL.TIF   \SOUND\ULTIMA.FMB   Q:\GRAPH\MAP2_1.TIF   Q:\GRAPH\PLAYER.TIF
Q:\GRAPH\ENEMY2.TIF    Q:\GRAPH\EXTRA.TIF    Q:\GRAPH\DUNG1.TIF    Q:\GRAPH\DUNG2.TIF
Q:\GRAPH\CHEST.TIF    then the fourteen sound effects, then \UT2\MAP.MP2
```

1,098,593 BIOS calls go past in those 1,200 frames, which is the game polling rather than spinning.

**The patches, all in the vendored clone and all marked in place.** `towns_dos.cpp`: `case 0x04` in
`int90` (KYB_lock), `AL=0x20` in `int93` (the CD probe, with the measured returns above), `case 0x43` in
`int21`. `towns_cpu.cpp`: the self-patched `int` vector, which
[self-modifying-int.md](self-modifying-int.md) shows is needed by every Origins game on this disc and not just
this one. `towns_disc.cpp`: three null guards, because `data_` is null until a disc is opened and `read_data`
dereferenced it, which is what the crash that looked like `Disc::handle` really was. They were edits to the kit,
which is now a submodule at `fmtownskit/` on branch `mp-support` of the fork `paulczar/fmtownskit`, so they are
committed rather than held as local changes, and `patches/fmtownskit-mp-support.patch` mirrors them for a reader.

**The emulator trouble was mine, not the disc.** It stopped launching the game partway through this work:
`u2flow` reported `STOP: splash never animated` and the machine sat at the reset vector `F000:FFF0`. After
`BC *`, `BRKON OFF` and one `podman restart fmtowns`, the Towns menu came up in **5 seconds** and the full
journey ran, so the cause was a dozen accumulated `RESET`s, six duplicate breakpoints and a `BRKON MEMW`
monitor armed at a physical address that a later reset remapped. Clearing the debugger state is the fix, not
re-imaging anything.

**SUPERSEDED, and the paragraph below was true when it was written.** At that stage the entry ran and
returned to nothing, with no video and three missing devices. It now completes start-up, opens its real
assets and runs 24,000 frames.

**SUPERSEDED IN PART, see "7a, started" below.** The machine does not execute the loop the port settles into,
so this is a start-up that diverges rather than one that completes. The frame count was measuring the wrong
thing.

~~**What this does not mean.** It is not a running game. The entry runs and returns to nothing, there is no
video because nothing has drawn, and the three missing devices have to be supplied before the start-up can
finish.~~

## Two walls that are not walls

Once the port was left running longer than 3,000 frames, two more fault lines appeared, and both are functions
the static rules cannot classify rather than anything wrong with the emulation.

**The first was an interrupt handler.** At machine frame 4,026: `no recompiled function at 000c:000fdde8`,
reached from the timer handler's own code. Guest `0x0fdde8` opens `50 1e 66 b8`, that is `push eax`,
`push ds`, `mov ax,0x14`, which is not a High C prologue, so the callback rule skipped it. It is ordinary
32-bit code: the `0x66` prefixes are 16-bit segment and operand loads, not a 16-bit instruction stream. The
handler swaps the stack (`mov ss, eax`, `lea esp, [0xdee57]`), reads port `0x4e9`, and calls hook pointers out
of its data segment.

**The second was those hook pointers, and one live read gave all four.** With the game running,
`MD 14:dea3c` returned four dwords, every one a code address: `0x000ffb72`, `0x000e7238`, `0x000ffc90`,
`0x000fdf5f`. Two of them the address-taken rule already found, two it could not, so all four are written
down in `tools/runtime-seeds.txt` with the dump that produced them.

**The rule that came out of it is a compiler habit.** These functions are never called by name, so no call
site points at them. What the compiler does is take their address, and High C does that with
`lea reg, [disp32]` rather than a register immediate. Scanning for it: **23** targets land in the guest
address range, most are data or stack (the handler itself does `lea esp, [0xdee57]`), and excluding targets
inside a zero run leaves **6** code functions. `tools/seeds.js` now adds them, and `verify.js` asserts the
count.

**With those in, the port runs 24,000 frames:** 6,399,984,003 guest clocks, no fault, 818 functions in the
game module and 5,573 in TBIOS, 0 refused and 0 conflicts in both. How much of that is progress is a separate
question, answered in "7a, started" below.

## What the program patches, measured rather than assumed

`U2_DIFF_CODE=1` compares guest memory against the image at the end of a run, and `U2_COVERAGE=<file>` narrows
it to bytes the recompiler decoded as instructions, written by `tools/insncoverage.py` from the same walk and
the same seeds. Without the coverage file the diff is 522,674 bytes of the program filling its own zero-filled
data and the answer drowns.

With it, after 24,000 frames:

```
patched   guest 0x10241b  00 -> 93
patched   522674 bytes differ, of which 1 are inside a decoded instruction
```

**Exactly one instruction byte in the image changes at run time**, and it is the `int86` vector. That is a
narrower answer than the item expected and a better one: the self-modifying-code hazard is one site, not a
class. The scope is stated as measured: it is what the program did in 24,000 frames, and a site reached later
could still appear.

## 7a, started: the screen is empty, and that is a finding

`U2_VRAM=1` reports what the machine's own VRAM vector holds at the end of a run, plus the access counters the
kit keeps for exactly this. After 24,000 frames:

```
vram      0 of 524288 bytes are non-zero, first at -1
vram      0 writes and 0 reads to it, 0 sprite writes
```

**The program does not draw, and does not try to.** That distinction is the point of the counters: a memory
dump alone cannot tell "drew nothing" from "never touched the screen". Zero accesses means the drawing code
has not been reached at all.

**It is waiting for a key.** The last thousands of BIOS calls are the same one, repeated:

```
int 90h AX=0901 EBX=0011EA70 ECX=00000072 EDX=000CFFFF
```

`AH=09` is `KYB_read`, and `eip` sits at `0x000e25ae`, which is a loop read off the code:

```
0xe25ae  push 2
0xe25b0  call 0xe4b60
0xe25b5  movzx edi, al
0xe25bb  cmp edi, 1
0xe25be  je 0xe260b
0xe25c0  and edi, edi
0xe25c2  je 0xe25ae        while (f(2) == 0);
```

So the port is spinning where the machine waits for a keypress, which the port will never receive. **The open
question is whether that loop is before or after the title is drawn.**

**Settled, and it corrects the paragraph above.** Breakpoints at `000C:0E25AE` and, as a control,
`000C:10241A`, which is the `int86` stub the CD probe goes through and which therefore certainly executes.
A complete journey with both armed: the control fires after **6.0 seconds**, and `0x0e25ae` never fires at all,
while `u2flow` runs the whole sequence through to `in_ultima2=True` with a character loaded.

**The live machine does not execute guest `0x0e25ae` during a complete start-up.** The port is on a path the
real program never takes. The negative is not an artefact of the address or the frame: the control was armed
in the same run and fired, and the earlier breakpoints at `0x52`, `0x10241a` and `0xe244d` all hit in the same
way.

**What that does to the earlier claim.** "Start-up completes and the program keeps running" is measured but
misleading, and it is corrected here rather than left standing: the port completes a start-up that diverges,
then spends its frames in a keyboard wait the real game never reaches. The frame count was measuring the wrong
thing, and only the screen check could have shown it, because a spinning program is not a faulting one.

**Where the divergence is, and how to find it.** The kit supports an instruction trace: build with
`-DX86_TRACE_ON` and define `x86_trace(X86Cpu&, uint32_t)` in the port, and every instruction calls it with its
guest address. The machine's side of the same comparison already exists as a tool: `tools/cfgprobe.py capture
--journey` arms the recorder before boot and writes an ordered control-flow capture of a whole start-up. Two
sequences, one aligned comparison, and the first difference is the bug. `tools/divergence.py` is that
comparison, and it uses set subtraction rather than adjacency, because the port's trace records first executions
and therefore carries no adjacency at all.

## The second divergence, after the floppy: the allocator

With the `A:` drive in place the error dialog is gone, and `tools/divergence.py` names the next address. Same
capture, 600 frames, **6,464 of the port's 6,489 addresses match a machine record** and 25 do not. The first is
`0x10386b`, and it is not a function: it is the instruction a `jmp` two bytes earlier exists to skip.

```
0x1037c0  call 0x1035f0        malloc
0x1037c5  xchg esi, eax
0x1037c6  and esi, esi
0x1037c8  jne 0x1037d7
0x1037ca  push edi
0x1037cb  call 0x103718        add a chunk
0x1037d0  push edi
0x1037d1  call 0x1035f0        malloc again
0x1037d6  xchg esi, eax
0x1037d7  and esi, esi
0x1037d9  je 0x10386b          both attempts returned null
0x1037df  ...                  the machine goes here
0x10386b  mov dword [ebp-4], 0  the port goes here, and returns 0
```

Both sides execute `0x1037d9`. The machine then runs `0x1037df`; the port jumps. So the port's allocator returned
null and the machine's did not, at the same instruction, from the same call site.

**Measured on the port side with `U2_STOP_AT` and `U2_STOP_COUNT`:** the failing call is the **28th** execution
of `0x1037d9`. Hits 1 to 24 return a pointer, hit 28 returns zero, and every one of them asks for the same
`edi = 0x214` bytes. So it is not one absurd request, it is an allocator that runs out after about two dozen.

**And the heap is not out of address space.** At the failure, DS `0xdfd08` holds `0x0011EAC8` and DS `0xdfd10`
holds `0x02000000`, with the break DS `0x00E00FC` at `0x00169AE8`, so `top - break` is about 31 MB. The free-list
head DS `0x00E00F4` is zero, which is what the search walks.

**Two properties of this heap, both read from the emitted code rather than guessed.** The routine at `0x101f1c`,
which sysalloc calls to grow memory, is a stub in this binary: both of its branches jump past the growth code to
the epilogue. And sysalloc's own failure return at `0x1036e9` **never executes**, so sysalloc is not what fails.
The failure is therefore in the free-list search or in the chunk that add-a-chunk linked, not in running out of
memory.

That is where this stands. The next step is the emitted `f_00103478` (the search) against the chunk that
`f_00103718` links, or the same two globals read on the live machine at `0x1037d9` by breakpoint.

**Both sides were then read at the same instruction**, the machine by breakpoint at `000C:1037D9` (first hit,
4.0 s after the icon) and the port by `U2_STOP_AT=1037d9 U2_STOP_COUNT=1`:

| value | machine | port |
|---|---|---|
| `EDI` request | `0x214` | `0x214` |
| `ESI` returned | `0x0011EB20` | `0x0011EAD8` |
| heap base, DS `0xDFD08` | `0x0011EB10` | `0x0011EAC8` |
| heap limit, DS `0xDFD10` | **`0x00377FFF`** | **`0x02000000`** |
| free-list head, DS `0xE00F4` | `0x0011EB20` | `0x0011EAD8` |
| break, DS `0xE00FC` | `0x0011ED34` | `0x0011ECEC` |

**So the port invents its heap limits.** The base is `0x48` lower than the machine's, the returned pointer is
`0x48` lower with it, and the limit is `0x02000000` where the machine has `0x00377FFF`, which is nine times
larger. Both are values the program reads rather than computes, so the difference is something the port answers
differently at start-up, not a decode or a code fault.

**And the limit being larger does not explain a failure**, since a bigger heap should allocate more, not less.
The port's own sysalloc failure return (`0x1036e9`) never executes, so its break is never refused. That leaves
the free-list search, which returns zero at a moment when the machine's equivalent list is populated by a chunk
the same code had just linked in.

## The audit, and two values the port was inventing

Rather than chase that search, the faster question was the one the comparison suggested: **what does the program
read at start-up that the port fabricates?** Two values, both found in one pass, both measured by breakpoint on
the machine and by `U2_STOP_AT` on the port at the same instruction.

**1. The hand-off `ESP`.** The port used `0x11EAC8`. At `000C:101A20` the machine reports `ESP = 0x0011EB10`, and
the program's first instruction of its own start-up stores `esp` into DS `0xDFD08` as the heap base, so that
figure is the base the allocator uses. The old constant was `0x48` low, which put the heap base, the pointers
returned from it and the break `0x48` below the machine's. That earlier measurement was evidently taken after
the loader's frame had been popped, not at the entry.

**2. The `DS` descriptor limit.** Where the heap *top* comes from was not a constant at all:

```
0x101ae2  mov dword ptr [0xdfd08], esp    base = ESP
0x101ae8  mov eax, ds
0x101aea  lsl eax, eax                    the DS descriptor's limit
0x101aed  mov dword ptr [0xdfd10], eax    heap limit
```

The port had invented `0x2000000` for the code and data descriptor limits, so the program sized its heap nine
times larger than the machine's `0x00377FFF`. Both descriptors now use the measured value, and the port maps the
three megabytes above the image so the heap can actually grow into what it is promised.

**The result, measured.** Heap base `0x0011EB10` and limit `0x00377FFF` now match the machine byte for byte at
the first allocation, the allocator's failure path at `0x10386b` **is no longer taken**, and the number of
addresses the port executes that the machine has no record of fell from **25 to 4**:

| | before | after |
|---|---|---|
| port-only addresses in `000C` | 25 | 4 |
| first port-only address | `0x10386b` (allocator error path) | `0x0e07f6` |

**What is left.** The four remaining are all tight conditional branches, `0x0e07f4`, `0x0e07f6`, `0x0e081b` and
`0x0e081d`, the last two inside a loop that scans a table at DS `0x0CE0` for bytes with bit 7 clear. The first is
a `jge` comparing DS `0x0E1C` against a caller's argument. Either they are genuine branch differences or they are
artefacts of the machine's capture recording block boundaries rather than every instruction, which the tool
warns about; the way to tell is to read DS `0x0E1C` on both sides at `0x0e07f4`.

**All four were then read, and they are one cause, not four.** At `0x0e07f4`, the machine by breakpoint (7.6 s
after the icon) and the port by `U2_STOP_AT`:

| | machine | port |
|---|---|---|
| `EAX`, which is DS `0x0E1C` | **`0x00000007`** | **`0xFFFFFFFF`** |
| DS `0x0CE0`, the scanned table | `80 02 00 02 02 00 02 1A 00 05 1A 00 06 2D 00 ...` | all zero |
| `ESI` | `0x38` | `0x05` |

The file has `FF FF FF FF` at image `0xE1C` and zeros across `0xCE0`, so **both are filled at run time and the
port never fills them.** That accounts for all four addresses at once:

- `0x0e07f4` and its fall-through `0x0e07f6` compare DS `0x0E1C` against a caller's argument, so `-1` against `7`
  branches differently.
- `0x0e081b` and `0x0e081d` are the loop's exit test. The loop walks 99 three-byte records at DS `0x0CE0`
  counting those whose first byte has bit 7 clear, and stops early when the count reaches the argument. With an
  empty table every record counts, so the port runs all 99 and exits exhausted, while the machine stops early
  having matched.

So the four are not four bugs, and they are not capture artefacts either. They are the same class as the last
three walls: **start-up state the machine has and the port does not**. The next question is which routine fills
DS `0x0CE0` and DS `0x0E1C`, and which call it makes that the port answers differently. The table's shape, 99
records of three bytes with a flag bit, is the thing to identify first, because naming it says what fills it.

**The filler was caught on the machine.** Nothing in the module writes either global, and that is because the
address is computed: `MOV [EAX+EDX+0x150], CL` with `EAX = 0xB90`. `BRKON MEMW` on the physical address behind
DS `0x0CE0` gave the report from the emulator's own console log, which is the tool that finally worked:

```
Memory Write BYTE PTR PHYS:[00076CE0] (80)
000C:000E05B5  MOV [EAX+EDX+0x150],CL
```

So the table is built by the **game's own code**, at `0x0E0556` onwards, copying three bytes per record from
DS `0xB90 + 0x14` upward. The loop is legible:

```
0x0e059c  mov esi, 6
0x0e05a1  cmp edi, 0x63               99 records
0x0e05ab  lea edx, [edi+edi*2]        3 * index
0x0e05b1  mov cl, [eax+ecx+0x14]      read from DS 0xB90
0x0e05b5  mov [eax+edx+0x150], cl     write to DS 0xCE0
```

**And the source is where it stops being ordinary.** At the same instruction the machine has `0x80` in `ECX` and
the port has `0x00`, so the port writes zeros. DS `0xB90` holds code on the machine,
`73 80 3E 1F 28 01 74 12`, and `7F 00 00 00` followed by zeros in both the file and the port. That pattern is
in neither `ENCHANT.EXP` nor `TBIOS.BIN`, so it is not a copy of anything we can see: it is a *different
address space*, which means the machine's `DS` at that instruction is not the program's segment.

**The lead, and it is a good one.** Immediately before the loop the routine calls `0x102492`, which the image
names `intdosx` in the string right after it, with `AX=0x250F` and `EBX=0xBA4`. `250Fh` is Phar Lap's "make a
protected-mode address real", which returns a `seg:off` pair, and this program then reads through it. The kit
implements that call by mapping the linear address back into the program's real-mode image
(`lin - prog_base + prog_phys`), and if what it returns differs from what the machine returns, the program reads
a different physical area and gets zeros instead of the block it wanted.

**That lead was followed and the picture changed twice. Both corrections are below.**

The port's profile was the kit's own ports rather than this program: `prog_base 0x200000` and
`prog_phys 0x49000`, where the program is at linear `0x400000` and the machine's own `ADTR 14:0ce0` reported
`LINE 00400CE0` mapping to `PHYS 00076CE0`, so its physical base is `0x76000`. Both are now set from those
measurements. **This changed nothing in the failing path**, which means `250F` is not where this divergence is.

**The segment theory was wrong, and the earlier "code at DS 0xB90" reading with it.** At `000C:0E05B5`, with
`STA` run at the break, the machine reports

```
CS=000C(LIN:00400000)  DS=0014(LIN:00400000)  ES=0014(LIN:00400000)
EAX=00000B90  ECX=00000080  EDX=00000000
```

So `DS` is the program's segment on both sides, and the port's guess that its selector differed was wrong. The
`73 80 3E 1F ...` I read at DS `0xB90` came from a *different point in a different run*, and comparing across
different moments is exactly the mistake this project keeps making. At the same instruction the two agree for
the first six bytes and differ at the source byte: machine `7F 00 00 00 93 00 BA 76`, port
`7F 00 00 00 93 00 BA 00`. The machine has `0x80` at DS `0xBAA`, which is the byte the loop copies, and the port
has `0x00`.

**And that byte is never written.** A `BRKON MEMW` watch on the physical address behind DS `0xBAA`, armed before
the program launched and left for 30 seconds, caught nothing, while the value is non-zero. That suggests the
byte is **not written during this launch at all**, and the plausible explanation is that Tsugaru does not clear
RAM on `RESET`, so it is left over from a previous launch and the program reads it as if it were data. If that
is right then this divergence is not the port's fault and cannot be fixed by modelling anything: it is the
program reading uninitialised memory, and the machine's answer depends on what ran before it.

That is a hypothesis and it is written as one. The experiment that settles it is cheap and is the first thing to
do: cold-boot the container, read DS `0xBAA` before and after a launch, and see whether the value is present on
a freshly booted machine. If it is zero cold and non-zero after a launch, the program does write it and the
watch above missed the write for some reason. If it is non-zero cold, the value is RAM left over from an earlier
session and the port should be given the same starting bytes deliberately rather than left at zero.
sequences, one aligned comparison, and the first difference is the bug.

**Done, and it found a missing floppy drive.**

`tools/divergence.py` compares the two records. The port's trace logs each address the first time it executes,
which stays small however long the run, and the machine's capture gives block starts, block ends and branch
targets. After 600 frames the port had executed **4,216** distinct addresses in segment `000C` and **4,200 of
them exactly matched** a machine record, so the alignment is real rather than coincidental. Sixteen did not.

The first of those sixteen is `0x0e259b`, and the code either side of it is unambiguous:

```
0x0e2591  call 0xe23cc
0x0e2599  and eax, eax
0x0e259b  je 0xe2623        the machine takes this jump and skips all of it
0x0e25a1  push 0x1930       message 0x1930
0x0e25a6  call 0xe75f8      print it
0x0e25ae  push 2            then read a key, in a loop
```

**That is an error dialog.** The machine jumps over the message and the key wait, the port prints and waits.
And `0xe23cc` leads to the check in three hops, ending at guest `0x102317`:

```
0x102320  mov al, 0
0x102322  mov ah, 0x43
0x102325  int 0x21           get file attributes
0x102327  jb 0x102345       error
```

**It is `int 21h AX=4300`, get file attributes, and the path is `A:\ROSTER1.UT2`.** Instrumented in the kit and
run with `U2_TRACE_INT=1`, the only line it prints is:

```
  attributes: A:\ROSTER1.UT2 -> not found
```

So the whole picture falls out: the game probes for the save disk's roster file on drive `A:` at start-up, the
port has no `A:` drive at all, the probe fails, and the program shows "insert the disk" and waits for a keypress
that never comes. That is why nothing is drawn: the error path draws nothing. The 24,000 frames were spent in
an error dialog.

The machine has `saves/userdisk.hdm` mounted as drive `A:`, so its probe succeeds. **The port needs a floppy
drive, not a different return value.** Faking the attributes would get past the check and fail on the read that
follows, and it would be a lie about the machine rather than a model of it.

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

## The keyboard: the Towns does not use PC/AT scan codes

Found while chasing the missing text, and it explains three dead keys. The front-end translated SDL's scancodes as
PC/AT set 1. The Towns keyboard is a JIS keyboard with its own numbering, and the two disagree exactly where a player
notices first: **return is `0x1D` against PC's `0x1C`, space `0x35` against `0x39`, up `0x4D` against `0x48`, left
`0x4F` against `0x4B`, right `0x51` against `0x4D`, shift `0x53` against `0x2A`, ctrl `0x52` against `0x1D`**, and `Z`
is `0x2A` where PC has `0x2C`, which shifts the whole bottom letter row.

ENCHANT indexes a 114-entry table with `(BX >> 8) - 1`, so a code from the wrong set indexes the wrong entry and the
key reads as dead. That is the reported symptom exactly: space, return and up did nothing while `'a'` and down worked,
and those are the two codes the two sets happen to share.

`tools/portcheck.js` asserts the translation now, because a wrong scan code fails silently: the key is delivered, the
guest takes it, and nothing happens. Measured after the fix, `U2_KEYS=400:3520` (space) and `400:1D0D` (return) both
reach the game menu with 8,320 bytes of palette index 13, the same frame the letter `'a'` produces.

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

## Debug switches on the port

Set as environment variables. Each exists because something needed it and guessing was worse.

| switch | what it does |
|---|---|
| `U2_TRACE_FILE=<path>` | build with `-DU2_TRACE=ON` first. Writes each address the first time it executes, so the file stays bounded. |
| `U2_TRACE_LIMIT=<n>` | cap on those first executions, default 200000. |
| `U2_STOP_AT=<guest hex>` | stop when that instruction runs, print registers, exit. Needs a trace build. |
| `U2_STOP_COUNT=<n>` | stop on the Nth hit rather than the first, which is how "the 28th allocation fails" was measured. |
| `U2_STOP_DUMP=<linear hex>` | 64 bytes at that address when the stop fires. |
| `U2_VRAM=1` | at exit, how much of the machine's VRAM vector is non-zero, plus the kit's VRAM and sprite access counters. |
| `U2_DIFF_CODE=1` | at exit, every byte of the program's image that guest memory has changed, and how many are inside a decoded instruction when `U2_COVERAGE` is given. |
| `U2_COVERAGE=<file>` | the coverage file from `tools/insncoverage.py`. |
| `U2_DUMP=<linear hex>` | 32 bytes of guest memory at exit. |
| `U2_ENTRY`, `U2_STACK` | override the entry (default: the `MP` header field) and the hand-off `ESP`. |
| `U2_FLOPPY_LS=1` | list the `A:` image's root directory and exit. |
| `U2_WATCH=<linear>[:<len>]` | report every write into that linear range, with the instruction that made it. The port's answer to a physical `MEMW` watch, and it does not suffer that watch's blind spot: the machine's page tables move a linear address between physical pages, so a byte watch can miss the write it was armed for. |
| `U2_KEYS=<frame>:<scan><ascii>,...` | press keys on given frames, which is how the port is driven past a keyboard wait. Hex, two digits each: `60:1e61` is "at frame 60 press scan code 0x1E with ASCII 0x61", measured as the key 'a'. |
| `U2_SHOT=<path>` | write the frame the machine is showing when the run ends, with the kit's own renderer, so "it draws" is a picture rather than a byte count. |
| `U2_PALETTE=1` | print the sixteen palette entries per plane when the run ends, in `PRI PALETTE`'s own `RRGGBB` notation, so the port's table and the machine's can be compared by diff. |
| `U2_SCREEN=1` | print the frame as a luminance ramp, character for character the way `container/screen.js`'s `toAscii` does it. **Not** a usable comparison for 7a: the kit renders 704x525 of the CRTC's layers and the supervisor's capture is a 640x480 window with its title bar in it, so the two pictures are different objects. Kept because it is a readable view of a frame. |
| `U2_FONT=<path>` | the FM Towns font ROM, `FMT_FNT.ROM`, defaulting to that name in the working directory. The game fetches glyphs through segment selector `0138`, whose base on the machine is `0xC2100000`, and the kit maps that linear range onto `Machine::font`. With the vector empty every glyph read returns zero, which draws nothing: that was the copyright notice's empty box. A missing file is a printed warning and blank glyphs, not a hard failure, because the ROM is vendored rather than disc data. |
| `U2_FONT20=<path>` | the 20-dot font ROM, `FMT_F20.ROM`, defaulting to that name in the working directory, mapped at linear `0xC2180000` into `Machine::font20`. A second font with its own window, separate from the ANK ROM above. Measured on the copyright notice: mapping it changes nothing, the frame is byte-identical, so the game does not read it there. Kept because the emulator defines the window and a program that does use it would otherwise read zeroes. |
| `U2_TRACE_FAR=1` | print every distinct far call site into the TBIOS selector `0110`, once per site, with the caller's `CS:EIP` and the registers. The program reaches its system layer without any constant-selector far call and stores no far pointer to it, so the callers exist only at run time: this is what names them. Measured over the splash and the menu: 23 sites, all from `000C`, landing on `0110:00000280`, a dispatcher. |
| `U2_RDWATCH=<linear>[:<len>]` | count reads inside one linear range and print the total at the end. The counterpart to `U2_WATCH`, which can only see writes: a routine that looks a glyph up and then declines to draw writes nothing, and this is what separates that from a routine that never ran. Measured on the menu: the font ROM window `0xC2100000` takes 2,084 reads by frame 400 and 2,572 by frame 520, so the menu's own draw accounts for 488 of them. |
| `U2_MEM_DUMP=<lo>:<len>:<path>` | write a range of guest memory to a file, to diff against the same range read off the machine with `MD 0:<linear>`. Thirty-two bytes at a time (U2_DUMP) is enough to check one buffer and useless for finding an empty table. |
| `U2_TRACE_FAR_ALL=<n>` | print the first `n` transfers into the traced selector individually, with the frame number, instead of one line per call site. Every watched write also carries the `EAX` of the transfer in flight, which is the only way to pair a request with the pixels it produced: a dispatcher takes its function number as an argument. Measured with it, 587 calls over 520 frames carry 82 distinct `EAX` values and only eight of them write VRAM. |
| `U2_TRACE_FN=<cs>:<lo>:<hi>` | log every entry into one code-selector address range with the caller's site, the frame and the registers. A port whose functions are C++ calls performs no instruction fetches, so a read watch and a memory breakpoint both miss it and this is the only instrument that can answer "does this routine run". Measured with it: the port does call the TBIOS pixel writer `0110:0000659C`, at frame 404, and draws every menu label exactly one text row too high. |
| `U2_WATCH_AT=<frame>` | arm the linear watch at that frame instead of at start-up, so its hits are the operation under study rather than the fills that cleared the screen. Arm one frame early: the frame hook runs at the vsync **after** the frame it belongs to, so a key pressed at frame 700 is acted on during frame 701's execution and needs the watch armed at 699. |
| `U2_WATCH_MAX=<n>` | how many watch hits to print, default 64. The default is right for "what writes this one byte" and wrong for "what does this redraw write", where the fills come first. It prints `capped at N hits` when it stops, which the old silent 64 did not: four watches over four ranges each reported exactly 64 lines and all of them were the start-up fill. |
| `U2_PAD=<frame>:<bits>[:<hold>]` | press the Towns' game pad on a frame, `bits` decimal against the kit's `kPad*` enum (up 1, down 2, left 4, right 8, A 16, B 32, Run 64, Select 128), `hold` frames by default 8. The front-end maps SDL's arrows to this pad as well as to key scan codes, so a screen that reads the pad cannot be driven by `U2_KEYS` alone. |
| `U2_LAYER=<n>` | render one graphics layer alone by masking `layer_ctrl` before the renderer sees it, `0` for layer 0 and `1` for layer 1. A composed frame cannot say whether pixels are missing from VRAM or hidden under the other layer's opaque pixels, and that difference decides whether the fault is in the program or in the composition. It is the port masking one register for one shot, not a kit feature. |
| `U2_VIDEO=1` | print the display state that decides what is on screen: the CRTC registers, the two video output registers, the layer control byte, the display page and the sprite controller's page and registers. A page that is drawn but not enabled and a page that is enabled but never drawn look identical in a screenshot and different here. It is what showed that the notice's frame is layer 0 alone with the sprite engine idle. |
| `U2_VRAM_DUMP=<path>` | write the whole 524,288-byte VRAM array raw when the run ends, so two frames can be diffed byte by byte to find **where** a drawing went rather than whether the picture looks right. This is what established that the copyright notice's box and bars are drawn while no text is stored anywhere in the VRAM window. |
| `U2_VRAM_HASH=1` | the comparison that does work: non-zero count, an FNV-1a over all 524,288 VRAM bytes, and one hash per 16 KB block. The machine's VRAM is the same 512 KB through segment `0120`, read with `MD 120:<off>` (256 bytes a line, 17 s for the lot) and hashed the same way, so a difference can be named by region. Item 7a. |

### The command line

| flag | meaning |
|---|---|
| `--graphics=sdl\|none` | where the picture goes. **Default `sdl`**: a person running the port wants to see it, and the window paces the run from the sound like the kit's own ports do. `none` is pure headless and is what `tools/port-build.sh` and every measurement pass, so a run cannot change according to whether a display is reachable from the shell that started it. A backend is a name rather than a flag because more than one is plausible later: a frame dump, a remote viewer, a comparator against MAME. An unknown name is refused with the list, since a typo would otherwise look like a headless run that drew nothing. If `sdl` cannot open a display it says so and falls back to `none`, because a missing display should cost a picture and not a measurement. |
| `--frames=N` | stop after N frames. Without it the run ends when the window closes, or when the program returns. |
| `--scale=N`, `--fullscreen` | the window's integer scale (0 picks the largest that fits) and full screen. |

Positional arguments are unchanged: `<ENCHANT.EXP> [frames] <tbios.bin> <disc.cue> [floppy]`. The frame count is
treated as one only when it is all digits, so `ENCHANT.EXP 600 tbios cue` and `--frames=600 ENCHANT.EXP tbios cue`
both mean what they look like. The first version of the flag parsing indexed the positionals blindly and, under
`--frames`, read the TBIOS image as the cue sheet: the machine then reported `TBIOS 110 bytes` and the run was
meaningless. Deciding by shape rather than by position is what fixed it.

**In the window:** arrows are the Towns pad's directions, X and Z are A and B, Enter is Run, Right Shift or
Backspace is Select, F11 or Alt+Enter toggles full screen, Tab held runs unpaced, F5/F6/F7 set the CPU rate and
**Escape closes the window and ends the run**. Real keystrokes are also handed to the program as the Towns keyboard
would deliver them, which is what makes the game typable rather than only drivable (patch fourteen).

## Patch fourteen: the window's keystrokes as the Towns keyboard

**Tried:** to wire the kit's window (`fmtownskit`'s `SdlHost`) to the port. The interface is two calls,
`open()` and `vsync(m)` per frame, and `vsync` throws `Stop{0}` when the window is closed, so it drops into the
port's existing `on_vsync` without touching anything else.

**The gap:** the front-end maps host keys to the **Towns pad** only, which is right for the games it was built for
and useless here, because ENCHANT reads the keyboard through `int 90h` (patch eleven) and never looks at the pad.
A window would therefore have shown the picture and refused to accept a keypress.

**The patch** adds `std::function<void(uint8_t scan, uint8_t ascii)> SdlHost::on_key`, called from the existing
`SDL_EVENT_KEY_DOWN` case after the front-end's own keys, with a table from SDL's scancode to the Towns' PC/AT
scan code and SDL's own layout-aware keycode as the character (so shift+1 arrives as `!`). The scan codes are in
PC/AT set 1 because that is what was measured on the machine: `a` is `0x1E`, and ENCHANT indexes its 114-entry
table with it. Unmapped keys report nothing rather than a guess. Unset, behaviour is exactly as before, so no other
user of the kit is affected. Escape still quits, deliberately: a window needs a way out the guest cannot swallow.

**Measured:** with `--graphics=sdl` on the desktop display the port creates a 640x480 window (its title is
`Ultima II - FM Towns, recompiled`) and runs to its frame limit. With `SDL_VIDEODRIVER=dummy` and with
`--graphics=none` a 200-frame run gives `machine frames 200  guest clocks 53552100` in every case, so the window
adds a picture and paces the run without changing what the machine does.

## Patch thirteen: selector 0120, which is the screen

**This is the one that made the port draw.** After the keyboard worked, VRAM was still empty, and the reason was
not in the program at all.

**Tried:** to find where the drawing went. `U2_VRAM=1` on a 600-frame run: `0 of 524288 bytes are non-zero` and
`0 writes and 0 reads to it`. The renderer itself runs, so its output was going somewhere else.

**Measured, three steps.**

1. `0xe5654` is `print(plane, string)`: it calls `0xe6cb0`, which indexes a window structure at
   `0x7aee4 + plane * 0x2A`, reads its origin and size, and composes characters into buffers at `0xcda7e`,
   `0xcda78` and `0xcda7a` in low memory. So text is composed in the program's own memory first.
2. What copies it to the screen must use a selector, because the program's data segment is at linear
   `0x400000` and VRAM is not there. `STA` on the running game, at the character-creation screen, reports
   **`ES=0120(LIN:80000000)`**, and `towns_mem.cpp` maps VRAM at linear `0x80000000`. Selector `0x0120` is the
   screen.
3. `ADTR` confirmed the other two guesses were wrong rather than merely unmeasured: `ADTR 24:0` is linear
   `0x000BF870` and `ADTR 2c:0` is `0x000BF820`, fifty bytes apart, which is a pair of TownsOS structures and not
   a frame buffer.

**The port had no descriptor for `0x0120` at all.** Its `0x0024` and `0x002C` were flat stand-ins, honestly
labelled as guesses in a comment, and they were not the screen, so there was nowhere for the program to draw and
nothing to notice: a selector that resolves to the program's own memory is not a fault, it is a silent
no-op.

**The patch** is `m.set_desc(0x0120, 0x80000000, 0x7FFFF)`, with the measurement in the comment. The two
stand-ins stay flat on purpose: their real bases are TownsOS structures this port does not have, and the program
only reads them, so pointing them at their true addresses would replace readable nonsense with unmapped zeros.

**What it produced, on the same 600-frame run with three keypresses:**

```
vram      181402 of 524288 bytes are non-zero, first at 320
vram      386205 writes and 83173 reads to it, 0 sprite writes
```

and `U2_SHOT=/var/tmp/port-shot.png` renders the frame at 704x525. That picture is the Ultima II title screen:
read back with the vision model in `AGENTS.md`, it describes the title banner, the stylised "Ultima II" logo with
the sword through it, the robed figure before the castle, and the loading bar beneath. No palette work was done to
get there and the colours in it are the kit's, so this is the drawing chain proven, not the palette settled.

**Mistake worth recording.** The item was worked for a while in the wrong direction: the byte counts and the
divergence report were read as evidence about the game's logic, when the simplest explanation was that the machine
had never been given a screen. The `0x0024`/`0x002C` comment had said "if the program reads through them and gets
nonsense, this is the first place to look" and nobody looked, because nothing faulted.

## Patch eleven: a keyboard, because the kit's answers "no key" unconditionally

**Tried:** to find out why the port never draws. `U2_VRAM=1` was the instrument: after 600 frames it reported
`0 of 524288 bytes are non-zero` and `0 writes and 0 reads to it`. The program had never touched VRAM at all.
The run's last instruction was `000C:0E4B8D`, in this loop:

```
0x0e4b8d  lea ebx, [ebp - 4]
0x0e4b90  push ebx
0x0e4b91  push 1
0x0e4b93  call 0xa9              ; the KYB_read wrapper
0x0e4b9b  mov eax, [ebx]
0x0e4b9d  and eax, 0xff00
0x0e4ba2  cmp eax, 0xff00       ; 0xff00 is "no key"
0x0e4ba7  jne 0x0e4bb0          ; otherwise dispatch it
```

and `0xa9` is `mov ah,9 / mov al,[ebp+8] / int 90h`, the KYB_read BIOS call.

**Measured:** the kit's `int 90h` had no keyboard at all. `case 0x09` answered `DX=0xFFFF, BX=0xFF00`
unconditionally, because its recordings were taken with no key ever pressed, so a program waiting for a key
waited for ever. That is a missing device, not a recompilation fault, and it is the fourth of its kind after the
`A:` drive, the CD probe and the hand-off stack.

**The device contract, measured on the live machine** at `000C:000000B6`, the instruction after the `int 90h` in
the wrapper, with the break firing first and the key pressed at the break:

| key | `BX` | `DX` |
|---|---|---|
| none | `0xFF00` | `0xFFFF` |
| `a` | `0x1E00` | `0x0061` |

So the scan code is in BX's high byte and the ASCII in DX. ENCHANT reads the scan code: `(BX >> 8) - 1` indexes a
114-entry jump table at `0xE4BD1`, which contains a distinct handler for every letter, digit, arrow, ESC and
TAB and sends 56 of the 114 indices to the same "ignore" target. That table is why `DX` is a convenience and the
scan code is the datum.

**The patch.** `Machine` gains `keys` and `press_key(scan, ascii)`, and `int90`'s `case 0x09` pops one when the
queue is non-empty and answers "none" when it is not, so behaviour without a key is unchanged. `keys_served`
counts what was taken, because "the program did not react" and "the program never asked" look identical from
outside.

**What it produced.** With `U2_KEYS` pressing 27 keys between frames 60 and 580, the port reports
`keys 27 served, 0 still queued`, so input works end to end: queued, served, and dispatched. VRAM is still `0 of
524288`, so the keyboard was a real gap and not the whole of this one.

## Patch twelve: an unknown I/O port now names the instruction that wrote it

**Tried:** to identify the ports the program writes that the kit does not implement. `unknown("out %04x", port)`
gave a port number and nothing else, which is a lead that has to be found again by watching.

**The patch** reuses `g_x86_cur`, the pointer the write watch already added, so the message reads
`out 0e51 = 40 (at 000c:000ff744)`. `port/main.cpp` now sets that pointer on every run rather than only when
`U2_WATCH` is armed.

**What it named on its first use** is the next lead: the program probes four devices at ports `0x0E51`, `0x0E59`,
`0x0E61` and `0x0E69` from `0x0FF73A`, writing `0, 0, 0, 0x40, 0x4E, 0x37` and then reading back with `in al, dx`
and testing for `0xFF`, in a loop that walks two tables at `0xDF1F5` and `0xDF0F5` with strides `0x20` and
`0x40`. Those ports are not in the kit's map, so the read returns no device and the program marks all four absent.
Whether that matters for drawing is not established, and this paragraph is the record of the question rather
than an answer to it.

## Patch ten: a linear write watch in the kit, because a physical one has a blind spot

**Tried:** to find which instruction writes DS `0xBAA` on the machine, twice, with `BRKON MEMW` on the
physical address behind it. The first attempt armed before the program launched, so the watch was on TownsOS's
pre-load mapping, `PHYS:00077BAA`. The second armed at the entry, which is the method that worked for DS
`0xCE0`, and it did catch a write, but the wrong one: `CS=0256` (TownsOS) storing `0x00` through `ES:DI` at
`0256:0000246C`, which is the loader zeroing what it is about to fill. Neither caught the store that leaves
`0x80` there.

**Measured:** the reason is in the kit's own code. Writes into mapped RAM never reach `Machine::mem_write`;
they go straight through the inline `wr8`/`wr16`/`wr32` fast path in `x86.h`. A watch implemented in `mem_write`
would therefore miss exactly the writes worth seeing. Worse, on the machine the physical address behind a linear
one changes when the program installs its own page tables, so a physical watch is aimed at a page that may no
longer hold the byte.

**The patch, and it is a header plus one function.** `x86.h` gains `g_watch_lo`, `g_watch_hi`, `g_x86_cur`, a
`x86_watch_write` and an `X86_WATCH(a, v, n)` macro, called at the top of all three store fast paths. The test
is `(a) - lo < hi - lo`, which is one unsigned compare and handles the wrap case. `towns_mem.cpp` defines the
three globals at global scope and prints the hit with its caller, capped at 64 so a store in a loop cannot bury
the first one. Unarmed it is one predictable branch per store, and the 24,000-frame run is unchanged.

**What it found on its first use, which was worth the patch.** The port **never writes** linear `0x400BAA`:
600 frames, a watch over `[0x400B90, 0x400BC0)` and three addresses written in the whole block,
`0x400B94 = 0x93`, `0x400B96 = 0x76BA` and `0x400B9E = 0x54C0`, at `0x0e0c8e` and friends. Those are the same
bytes the machine has at the same offsets, so the block *is* built identically and the earlier reading of it as
zeros was another comparison across different moments. The byte the table loop copies at `0x0E05B5`, DS `0xBAA`,
is simply not written by anything in the recompiled program.

That makes the divergence a control-flow question rather than a data one, and it is now cheap to ask: the port's
`U2_STOP_AT` also prints eight dwords from the stack, so the call chain at any stop is visible without a
debugger, and the same stop on the machine gives its own chain from `STA`.

**The port switch** is `U2_WATCH=<linear>[:<length>]`, parsed in `port/main.cpp` beside the others, and it points
`g_x86_cur` at the running cpu so a hit names `cs:eip` as well as the address and value.

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

**Done, and it works.** Two passes now, each with its own ranges, merged into one build directory with a
hand-written `modules.cpp` naming both. `tools/codelimits.js` grew `--file` so it can derive the ranges for
any image rather than ENCHANT alone, and TBIOS's own zero fill is **3 runs**. The result for both modules:

```
game:  783 functions, 40902 instructions, 0 refused, 0 conflicts
tbios: 5573 functions, 15288 instructions, 0 refused, 0 conflicts
```

TBIOS went from 6 functions to **5,573**, and from 2,166 refusals to **none**. The program now calls into
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
`int21`. `towns_cpu.cpp`: the self-patched `int` vector. They are edits to `references/`, which is not
committed, so this paragraph is the record of them.

**The emulator trouble was mine, not the disc.** It stopped launching the game partway through this work:
`u2flow` reported `STOP: splash never animated` and the machine sat at the reset vector `F000:FFF0`. After
`BC *`, `BRKON OFF` and one `podman restart fmtowns`, the Towns menu came up in **5 seconds** and the full
journey ran, so the cause was a dozen accumulated `RESET`s, six duplicate breakpoints and a `BRKON MEMW`
monitor armed at a physical address that a later reset remapped. Clearing the debugger state is the fix, not
re-imaging anything.

**SUPERSEDED, and the paragraph below was true when it was written.** At that stage the entry ran and
returned to nothing, with no video and three missing devices. It now completes start-up, opens its real
assets and runs 24,000 frames.

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
game module and 5,573 in TBIOS, 0 refused and 0 conflicts in both.

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
question is whether that loop is before or after the title is drawn.** The live machine shows the splash
before any key is pressed, so if this wait is the same one, the port has skipped the drawing that precedes it,
and the next step is to find what gates that: a CRT mode read, the CD probe whose return values were only
partly measured, or a capability test that our stubs answer differently. That is where 7a stands.

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

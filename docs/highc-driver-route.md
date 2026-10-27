# The driver route: reaching it, and what the first test showed

**Verdict: the TownsOS driver route is reachable and is now reproducible from a written
command. The first `enter` test through it produced `push ebp; mov ebp, esp`, not `enter 0,0`,
but the test source was too weak to be conclusive.**

This page replaces an earlier one that recorded the route as "attempted, not reached". That
was true of the attempt, not of the route.

## Why hands-free does not work on this image, and does on the other

The recipe in `docs/compiling-on-fm-towns.md` appends a batch call to `AUTOEXEC.BAT`, and
that works there because it uses a **different image**. The two images differ in exactly the
thing that matters:

| image | boots to | `Q:` available at `AUTOEXEC` |
|---|---|---|
| `saves/dos62v6.hdm` (DOS floppy, `-BOOTKEY F0`) | DOS prompt | **yes** |
| `saves/scratch-tos11en.h0` (TownsOS HDD, no boot key) | DOS prompt | **no** |

Measured, from the two images' own configuration files:

`saves/dos62v6.hdm` `CONFIG.SYS` loads the CD drivers and its `AUTOEXEC.BAT` claims the drive:

```
DEVICE=A:\DOS\CDDRV.SYS /D:TOWNS_CD /U0:0
DEVICE=A:\DOS\CDISC.SYS
...
\DOS\MSCDEX /D:TOWNS_CD /K /M:8 /L:Q > NUL
```

`saves/scratch-tos11en.h0` `CONFIG.SYS` has no CD driver at all:

```
SHELL=C:\COMMAND.COM C:\ NUL /P
DEVICE=TBIOS.SYS /TBIOS.BIN
BUFFERS=8
FILES=20
```

An `AUTOEXEC` line calling `Q:\HC386\BIN\HC386.EXE` on the HDD image therefore creates an
empty log and no output, because `Q:` does not exist yet. On the floppy image the same line
works, and that is why the documented recipe is unattended and this one is not.

**This is a difference in the boot disk, not a limitation of the driver.** To make the HDD
image unattended, add a CD driver to its `CONFIG.SYS` and an `MSCDEX` line to its
`AUTOEXEC.BAT` before the build line. That has not been done.

## The exact host command

```bash
sudo podman run --name tosprobe --rm -d \
  -p 6082:6080 -p 5902:5900 -p 8099:8080 \
  -v "$PWD/vendor/emulator:/emulator:ro,z" \
  -v "$PWD/vendor/roms:/roms:ro,z" \
  -v "$PWD/saves:/data:z" \
  -e RESOLUTION=1024x768x24 -e ROM_DIR=/roms -e API_PORT=8080 \
  -e "TSUGARU_EXTRA=-CD /data/hc.ccd -HD0 /data/scratch-tos11en.h0" \
  localhost/fmtowns:latest
```

Verified from `/proc/<Tsugaru>/cmdline` inside the container:

```
Tsugaru_CUI /roms -CMOS /data/CMOS.BIN -CD /data/hc.ccd -HD0 /data/scratch-tos11en.h0
```

Then browse to `http://localhost:6082/vnc.html` and type at the prompt:

```
Q:\> d:
D:\> hc386 enter.c
```

## What made four earlier attempts fail

Each of these was an addition to the line above, and each one was wrong:

| added | result |
|---|---|
| `-BOOTKEY F0` | TownsOS desktop, no prompt |
| `-BOOTKEY CD` | TownsOS desktop, no prompt |
| `-HD0` pointed at `scratch-blank.h0` | wrong disk |
| `-e CMOS=/data/CMOS_HDD.bin` | wrong drive assignment |
| `-e CMOS=/data/CMOS_ONE.bin` | wrong route, that one is for the DOS floppy |

The default `CMOS=/data/CMOS.BIN` is correct and needs no flag. **The lesson is not to add
anything to a documented invocation without a reason.**

## Tests through the driver, all inconclusive for the same reason

**Test 1.** An inline callee, so the call was folded:

```c
int bios_out(int func, char c) { return func + c; }
int f(char c) { bios_out(0x46, c); return (unsigned char)c; }
```

```
0f b6 44 24 08 03 44 24 04 c3    bios_out, inlined
55 8b ec 8a 4d 08 51 6a 46 e8 e6 ff ff ff 0f b6 c1 83 c4 08 c9 c3    f
```

**Test 2.** A real external callee, so a genuine call was emitted:

```c
int trap(int sel, int fn, int arg);
trap(int sel, int fn, int arg) { return sel + fn + arg; }
char f(char c) { int r; r = c; return (char)trap(0x110, 0x46, r); }
```

```
8b 44 24 04 03 44 24 08 03 44 24 0c c3                        trap
55 8b ec 0f b6 4d 08 51 6a 46 68 10 01 00 00 e8 dc ff ff ff 83 c4 0c c9 c3   f
```

**None contains a `c8` byte.** Both use `55 8b ec`. That is the fact, and it is the same fact
from the real-mode generator and from the optimising driver.

### Why neither test is a controlled comparison

Put the target beside test 2:

```
target 0xfe211 : c8 00 00 00  53  8a 5d 08  b4 46      e8 3d 00 00 00  0f b6 c0  5b  c9 c3
ours (test 2)  : 55 8b ec    0f b6 4d 08  51 6a 46  68 10 01 00 00 e8 dc ff ff ff  83 c4 0c  c9 c3
```

Every structural detail differs:

| | target | ours |
|---|---|---|
| argument | `mov bl,[ebp+8]`, 8-bit | `movzx ecx,[ebp+8]`, 32-bit |
| register save | `push ebx` / `pop ebx` | none |
| function number | `mov ah,0x46` | `push 0x46` |
| stack cleanup | none | `83 c4 0c` |

**The target is not using the C argument convention.** It is a hand-shaped TBIOS wrapper: the
routine it calls, `0xfe25d`, decodes as `push fs; push ax; mov ax,0x110; mov fs,eax; pop ax;
call [0x80]; pop fs; ret`, which is a trap dispatcher, not compiled C.

So comparing the prologue of a program that pushes 12 bytes of arguments against one that
passes a single byte in `bl` says nothing about the compiler's frame choice. The two programs
are different in half their instructions. **Recording this as evidence about `enter` would be
the same error as the mask-too-narrow bug and the provenance claim: a correct measurement
applied to the wrong population.**

## Test 3: two modules, so the call is genuinely cross-module

```
E4.C    char trap(char c);
        char f(char c) { return trap(c); }
TRAP.C  char trap(char c) { return c + 1; }
```

`hc386 e4.c trap.c` linked both, confirmed by the map:

```
Input module(s):
"E4" from file "e4.obj".
"TRAP" from file "trap.obj".
```

Code at `0x200` of the resulting `P3`, which is the compiler's output for this source rather
than bytes from the game:

```
55 8b ec ff 75 08 e8 05 00 00 00 83 c4 04 c9 c3    f
8a 44 24 04 40 c3                                  trap
```

**Zero `c8`. One `push ebp; mov ebp, esp`.** The callee `trap` is frameless and reads its
argument off `esp`, so the optimiser is working and the modules are distinct.

### And it is still not like-for-like

```
target : c8 00 00 00  53  8a 5d 08  b4 46  e8 3d 00 00 00  0f b6 c0  5b  c9 c3
ours   : 55 8b ec     ff 75 08  e8 05 00 00 00  83 c4 04  c9 c3
```

The first line is the game's bytes at `0xfe211`. The second is what the compiler produced for
the source above.

The argument still travels on the stack, pushed and then cleaned by `83 c4 04`. The target
passes it in `bl` and saves `ebx` itself. **High C has no source construct that puts a
parameter in a specific register**, so a C source can never produce the target's call site no
matter how the modules are split. The map also shows both functions merged into one `E4`
segment, so "two modules" here means two object files, not two code regions.

## What the tests do establish

- The driver route works and is reproducible from the command above.
- For ordinary C with the normal argument convention, the driver emits `push ebp; mov ebp, esp`.
- The optimiser engages through this route where it did not through `HCD386.EXE`: the callees
  came out frameless and register-allocated, and both object files linked.
- **High C has no source construct that places a parameter in a specific register.** That is
  the reason no C source reaches the target's call site, and it is a property of the language
  and compiler rather than of any source shape that might still be tried.

## What it does not establish

That no C source produces `enter`. Three tests agree, but none is controlled, so the honest
statement is still the weaker one.

## Why this line of inquiry should now stop

Three attempts in, the pattern is consistent: every C source this compiler accepts pushes its
arguments, and the target passes one in `bl`. Reproducing the target's call site needs a
register convention the compiler does not offer, so **the prologue comparison can never be
made fair by writing more C**. Continuing to vary the source is repeating an angle that has
failed three times with the same cause, which is the trigger in `docs/overnight-run.md` for
treating something as a class rather than grinding it.

The two readings that remain are the ones `docs/enter-band-boundary.md` lists: the band was
assembled rather than compiled, or it came from a different release of the toolkit. Neither is
testable from the disc.

## What would have to be true for a fair test

A callee written in assembly, declaring the register convention, linked against C that calls
it. That is possible with the kit's assembler, and it is the only route left. It tests whether
the compiler's *frame* choice changes when the callee's convention is unusual, which is a
narrower question than the one this inquiry started with and may not be worth building.

## Related

- `docs/highc-authentic-toolchain.md`: the working invocation, now with the exact host command
- `docs/enter-not-emittable.md`: the real-mode generator measurement
- `docs/compiling-on-fm-towns.md`: the DOS floppy route, which is a different thing
- `docs/working-c-drive.md`: why `CMOS_ONE.bin` and `CMOS_HDD.bin` differ

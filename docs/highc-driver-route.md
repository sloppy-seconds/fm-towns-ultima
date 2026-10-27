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

## Two tests through the driver, both inconclusive for the same reason

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

**Neither contains a `c8` byte.** Both use `55 8b ec`. That is the fact, and it is the same fact
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

## What the two tests do establish

- The driver route works and is reproducible from the command above.
- For ordinary C with a normal argument convention, the driver emits `push ebp; mov ebp, esp`.
- The optimiser engages through this route where it did not through `HCD386.EXE`: the callee
  `trap` is emitted as `8b 44 24 04 03 44 24 08 03 44 24 0c c3`, frameless and fully
  register-allocated.

## What it does not establish

That no C source produces `enter`. The test source cannot reproduce the target's call shape,
so the prologue comparison is uncontrolled.

## The next test, which would be decisive

Match the target's **call shape** first, so the only remaining variable is the prologue. That
means a source where the argument reaches the callee in a byte register, which needs the
callee to be a real external symbol compiled with an 8-bit convention, or an assembly stub.
Two `.C` files on the same image is the simplest way to force a real call rather than an
inline.

Until that is done, `docs/enter-not-emittable.md` keeps its scope: the real-mode generator
does not emit `enter`, and the driver has not been shown to either on a like-for-like source.

## Related

- `docs/highc-authentic-toolchain.md`: the working invocation, now with the exact host command
- `docs/enter-not-emittable.md`: the real-mode generator measurement
- `docs/compiling-on-fm-towns.md`: the DOS floppy route, which is a different thing
- `docs/working-c-drive.md`: why `CMOS_ONE.bin` and `CMOS_HDD.bin` differ

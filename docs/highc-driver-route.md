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

## The first test, and why it is weak

Source put on the image:

```c
int bios_out(int func, char c) { return func + c; }
int f(char c) { bios_out(0x46, c); return (unsigned char)c; }
```

`hc386 enter.c` produced `ENTER.EXP` (548 bytes, `P3` signature) with code at `0x200`:

```
0f b6 44 24 08 03 44 24 04 c3   0f b6...        bios_out, inlined
8b c0                            (padding)
55 8b ec 8a 4d 08 51 6a 46 e8 e6 ff ff ff 0f b6 c1 83 c4 08 c9 c3    f
```

**Zero `c8` bytes in the code section. One `push ebp; mov ebp, esp`.**

So the driver does not emit `enter` for this source either. But compare against the target
this was modelled on:

```
target 0xfe211: c8 00 00 00 53 8a 5d 08 b4 46 e8 3d 00 00 00 0f b6 c0 5b c9 c3
ours          : 55 8b ec    8a 4d 08 51 6a 46 e8 e6 ff ff ff 0f b6 c1 83 c4 08 c9 c3
```

The differences are structural, not just the prologue:

- the target keeps the argument in `bl` behind `push ebx`, and sets `mov ah,0x46` as an
  8-bit BIOS function number
- ours pushes a 32-bit argument (`51 6a 46`) and cleans 8 bytes (`83 c4 08`)
- the target has no stack cleanup at all

**The target was not calling through the C argument convention.** It is a hand-shaped BIOS
wrapper. A C source that cannot reproduce the call shape cannot say anything reliable about
the prologue either, so this result is suggestive and not decisive.

## What it does establish

- The driver route works, and the command is above.
- For ordinary C with a normal argument convention, the driver emits `push ebp; mov ebp, esp`.
- The optimiser engages through this route where it did not through `HCD386.EXE`.

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

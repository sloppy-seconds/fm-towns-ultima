# High C compiled HELLO.C to a real .OBJ, and TownsMENU was never required

**Verdict: POSITIVE, proven twice.** The SDK CD's own High C 1.7 code generator
compiled `HELLO.C` to a 267-byte 80386 OMF object file inside Tsugaru, with the
output written to a writable volume and verified from both inside the guest and
from the host.

This closes `docs/compile-blocker.md` and corrects `docs/highc-dos-negative.md`.
The trilemma those pages describe is real, but it only blocks one of two routes
into the compiler. The route that works was sitting in the CD's own `DEMO.BAT`
the whole time.

Follow-up: the same route was used to compile the calibration function
`plot.c`. The result is `NOT byte-identical` to the game bytes, which reopens
the compiler-version question. See `docs/highc-plot-calibration.md`.

## The compile, exactly as it ran

Boot: the DOS 6.2 floppy `saves/dos62v6.hdm` in `FD0` with `-FD0UP`, the SDK CD
attached with `-CD` at power-on so `MSCDEX` in the floppy's `AUTOEXEC.BAT` finds
media and mounts `Q:`.

Command, run from a batch file on the floppy:

```
Q:\HC386\BIN\HCD386.EXE A:\HELLO.C -obj A:\HELLO.OBJ -dir Q:\HC386\INC
```

Source was a minimal hello program written for this test (the same seven lines
the CD ships in `HC386\DEMOS\HELLO.C`, re-typed rather than copied).

### Proof 1, from inside the guest

`DIR A:\*.OBJ` executed in the guest and captured to a file on the floppy:

```
 Volume in drive A is D62P3
 Directory of A:\

HELLO    OBJ           267 26-10-25    8:38
        1 file(s)              267 bytes
```

### Proof 2, from the host with mtools

```
$ mcopy -i saves/dos62v6.hdm ::HELLO.OBJ /var/tmp/compile-proof.obj
$ sha256sum /var/tmp/compile-proof.obj
da90cb99c00608501bada16f039e37d504268d0d1cda3c19cf87089a73749447
$ xxd /var/tmp/compile-proof.obj | head -4
00000000: 8007 0005 4845 4c4c 4f00 8808 0080 aa38  ....HELLO......8
00000010: 3033 3836 3d88 1400 8000 4869 6768 2043  0386=.....High C
00000020: 2031 2e37 2e20 534d 414c 4c84 8e04 0000   1.7. SMALL.....
```

The structure is a genuine OMF object: `THEADR` (0x80) naming `HELLO`, a
`COMENT` (0x88) declaring `80386=`, a `COMENT` identifying the producer as
`High C 1.7. SMALL`, `LNAMES`/`SEGDEF`/`GRPDEF` for `CODE`, `DATA`, `CGROUP`,
`DGROUP`, `LEDATA` carrying 32-bit x86 code, the string literal
`Hello, world.\n`, `LEXTDEF` for `main`, and a `MODEND` (0x8a) as the final
record. This is not incidental bytes, it is the compiler doing its job.

The object file itself is a derivative of disc-bundled material and stays out
of git, per the standing rule. `tools/compile-proof.sh` regenerates everything
from the disc plus a re-typed source file.

## Why this works when the RUN386 route was silent

The kit ships the code generator twice:

| file | format | needs |
|---|---|---|
| `HCD386P.EXP` | Phar Lap P3 flat image | `RUN386`, which needs a live Towns window system |
| `HCD386.EXE` | plain DOS `.EXE` | nothing beyond DOS 6.2 and the CD |

`docs/highc-dos-negative.md` established that `RUN386` is silent without
TownsMENU, and `docs/compile-blocker.md` established that TownsMENU cannot be
combined with a writable volume on any floppy or CD configuration tried. Both
findings stand. What was missed is that the driver is optional. The CD's own
`HC386\BIN\DEMO.BAT` contains the branch:

```
if exist bin\hcdriver.exe goto nodrv
...
:nodrv
hcd386 ..\demos\hello -on list asm
```

Fujitsu's own demo runs `HCD386.EXE` directly when the driver is not installed.
That is the supported no-Towns path, and it compiles.

## The input wall, which cost more than the compiler

Every earlier failure of this route was synthetic input corrupting the command
line, not the compiler. Measured on this container:

- The supervisor's `/api/keys` sends keys with `xdotool --window`, and on this
  stack a typed `:` arrives as `+`. A real colon is produced by `xdotool key
  semicolon` through XTEST (no `--window`), from inside the container's X
  display.
- `>` cannot be typed at all; it arrives as `\`. Redirection therefore has to
  live inside batch files written host-side with mtools, where the `>` byte is
  never typed. This is why the compile runs from `COMPILE.BAT`.
- `\` arrives as `¥`, which DOS accepts as a path separator, so paths are fine.
- `FD0LOAD` re-arms floppy write protection. Send `FD0UP` after every
  `FD0LOAD`, or every guest write silently fails. This single fact invalidated
  a long stretch of tracing work.
- The guest does not see files mcopy'd into an image that is already loaded.
  Files must be placed in the image before `FD0LOAD`.
- Screen reading works but is slow: the FM Towns text font is a proportional
  serif face, ASCII is 8x16 and Japanese messages are 16x16, and the existing
  `tools/ocr.py` templates do not match it. The reliable channel is the file
  system: have the guest write its output to the floppy and read it from the
  host.

## The boot-trace technique

Because the screen is hard to read and input is fragile, the boot was debugged
by making `AUTOEXEC.BAT` write evidence to the floppy:

```
ECHO BOOT >> A:\TRACE.TXT
Q:\HCOPY\COCO
ECHO COCO_RC=%ERRORLEVEL% >> A:\TRACE.TXT
```

`TRACE.TXT` then says exactly how far the boot got, with no OCR involved. This
is how the Towns bootstrap was measured: `COCO` runs and fails on the DOS 6.2
floppy (no Towns memory banks), and `SIDEWORK` then hangs the batch. That is
the `docs/compile-blocker.md` trilemma, confirmed, and it is why the TownsMENU
route stays parked.

## Corrections to the earlier negative results

`docs/highc-dos-negative.md` concluded the compiler question was a dead end
because `RUN386` produced nothing. That was correct about `RUN386` and wrong
about the compiler. The DOS-native generator was never tried there.

`docs/compile-blocker.md` concluded no single boot configuration satisfies
Towns drivers plus a full shell plus a writable volume. Still true, and now
moot for compilation: compiling does not need Towns drivers at all.

New measurement against the blocker's option list: `CTL.SYS` from the CD hangs
a DOS 6.2 boot before `AUTOEXEC` runs (tested twice, in two device orders,
traced via `TRACE.TXT`). The TownsOS 2.1 floppy boots with `CTL.SYS` because
its DOS is 3.10. So option 3 of the blocker page (make `CoCo` succeed) would
need `CTL.SYS` to work under DOS 6.2, and it does not.

## What is still unproven

- The `HC386.EXE` driver end to end. It stages `ARG0.TMP` files and invokes
  `RUN386 HCD386P.EXP`, so it needs the Towns route, so it needs TownsMENU.
- Linking with `386LINK.EXE` and running the resulting program. The link step
  is the one `docs/bootable-dos-hdd.md` saw fail on path resolution
  (`$TOOLSDIR$bin` mixed separators). Untouched here.
- The `RUN386`-launched generator itself. If it ever matters, the TownsOS HDD
  route in `docs/hdd-build-environment.md` is the place, with the caveat that
  the 15.9 GB image is now considered suspect hardware-emulator output.

## Reproducing

```
./tools/compile-proof.sh
```

The script copies the floppy image, places `HELLO.C` and `COMPILE.BAT` into it,
loads it, un-protects it, resets the VM, types the batch name (alphanumeric
only, no broken keys), waits, then prints the guest-side `DIR` and the
host-side extraction with size, sha256 and first bytes, and fails loudly if
the object file is missing or is not an OMF `THEADR`.

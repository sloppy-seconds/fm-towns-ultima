# The disc and the binaries

What the FM Towns release actually is: the platform, the disc layout, the
toolchain that built it, and the container the executables use.


## Platform identification

**Tried:** read the disc's first sector and the floppy image geometry.

**Measured:** disc sector 0 begins `49 50 4c 34` (`IPL4`). The filesystem holds
`RUN386.EXE`, `TBIOS.SYS`, `TBIOS.BIN`, `IO.SYS`, `AUTOEXEC.BAT`, `GAIJI2.COM`,
`OAK2USR.DIC`. The `.hdm` is 1,261,568 bytes = 1232 x 1024 = FM Towns 2HD.

**Verdict:** FM Towns, not X68000. An earlier reading of `GP0:3` in the
partition table as an X68000 marker was wrong. Confirmed independently by the
floppy geometry: X68000 2HD is 1,229,312 bytes, a different number.

---

## Disc image structure

**Tried:** parse the ISO 9660 PVD and walk the directory tree, then compare the
`.cue` and `.ccd` track maps.

**Measured:** volume label `TRILOGY`, 140 files. Track 1 = MODE1 data LBA
0-8999. Tracks 2-8 = CD-DA from LBA 9000. `(.cue)` declares
`PREGAP 00:02:00` before track 2. `(.ccd)` records track 1 ending at 8999 and
track 2 starting at 9000, with 450 zero sectors present in the image.

**Verdict:** use the CCD. Tsugaru's author documents PREGAP as ambiguous, so a
CUE cannot be interpreted reliably. Positive result.

**Tried:** reconcile the ISO 9660 volume space against the CCD track map.

**Measured:** PVD volume space size is 12,911 sectors (LE and BE agree). The
disc total is 60,225 sectors. Track 1 is claimed to end at 8999 and track 2 to
start at 9000.

**Verdict:** the two numbers do not match and are not supposed to. Volume space
covers the filesystem only, and the seven audio tracks sit outside it. But 12,911
is larger than the 9,000 sectors the track map assigns to track 1, which means
the ISO is declared as extending past where the CCD says audio begins. In
practice the data files all live below sector 6,000 so nothing is lost, and the
disc plays correctly in Tsugaru. Recorded because it is a real inconsistency in
the rip rather than something to assume away. *Open whether the CCD track
boundary or the PVD is the wrong one.*

**Tried:** confirm the audio tracks are real CD-DA.

**Measured:** 16-bit big-endian stereo, peaks around +/-15,000.

**Verdict:** positive. Seven Red Book tracks, lossless.

**Tried:** make `fmtownskit`'s cue reader open this disc's `.cue`, for item 8f.

**Measured:** it refuses at the `PREGAP` line, and the reason is the one above rather than a missing feature. The
cue has one `FILE` and eight tracks, `PREGAP 00:02:00` on track 2, and every `INDEX 01` still counted from that one
file, so whether the rip already contains the gap is not stated anywhere in the cue. Accepting it would shift every
later track by 150 sectors and read the wrong sectors without an error. The refusal now names the file, the line,
the track and the gap, and says what to do instead (item 8f, patch fifteen):

```
Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).cue:5: PREGAP 00:02:00 on track 2 cannot be decided from the cue.
The gap is not in the file that the track's INDEX 01 counts from, but whether the rip already contains it is a
property of the rip and the cue does not say, so accepting it would shift every later track by 00:02:00 and read
the wrong sectors silently. Use the .ccd, which states the layout, or a one-track cue for the data track if only
that is wanted.
```

**Verdict:** NEGATIVE for accepting `PREGAP`, POSITIVE for recording why. The 450 zero sectors this page measured in
the image are the gap, so the rip does contain it and the `.ccd` route stays the correct one. A one-track cue for
the data track is what the recompiled port uses, and it reads the disc correctly: 600 frames of the game load their
artwork from it and draw.

**Tried:** whether `boot_towns` needs a composed TBIOS, the second half of item 8f.

**Measured:** it does not. Its signature takes the finished image (`boot_towns(Machine&, const
std::vector<uint8_t>&)`) and copies it to `0x100000`; composition is a separate function, `compose_tbios`, which
callers may use or not. This disc ships `TBIOS.BIN` (81,920 bytes) and no `.INI` at all, so the port reads that file
from the disc and passes it, and the game boots and draws from it.

**Verdict:** POSITIVE, and it was already true: no change was needed, only the measurement to say so. The failure
the item warned about, composing from an absent `TBIOS.INI` and calling that a fault of the disc, is avoided by
taking the shipped image.

---

## Toolchain and language

**Tried:** string scan of every executable for compiler identity.

**Measured:**

| File | Evidence |
|---|---|
| `DARKNESS.EXP` | `High C Run-time Library Copyright (C) 1983-1988 MetaWare Incorporated.` |
| `ENCHANT.EXP` | same |
| `EXODUS.EXP` | same |
| `TMENU.EXP` | same, plus `Copyright(C) FUJITSU PERSONAL COMPUTER SYSTEMS LIMITED 1988-89` |
| `RUN386.EXE` | `Copyright (C) 1986, 1987 Phar Lap Software, Inc.` and `MetaWare High C Run-time Library ... 1983-1986` |

Also present in all: `TOWNS SOUND LIBRARY by Joe Mizuno1989 Copyright (C)
FUJITSU LIMITED`, `EUPHONY DRIVER FOR TOWNES by Joe Mizuno1989`,
`TOWNS MOUSE LIBRARY by Joe Mizuno1989`.

**Tried:** instruction-level corroboration.

**Measured:** `DARKNESS.EXP` contains 441 instances of `55 8b ec` (`push ebp`
then `mov ebp,esp`), 0 of the `55 89 e5` encoding, 548 `enter`, 462 `retn
imm16`. `ENCHANT.EXP` 366, `EXODUS.EXP` 392, `TMENU.EXP` 283.

**Verdict:** written in C, compiled by MetaWare High C for 32-bit protected
mode. Not Watcom, Borland/Turbo C, or Microsoft C. Positive result.

---

## Executable format

**Tried:** read the header of `DARKNESS.EXP`.

**Measured:** `4d 50` = `MP`. Code image begins at `0x75f`, where the bytes are
`22 0f a0 68 10 01 00 00 0f a1 64 ff` = `mov fs:[0x110],eax`, i.e. protected
mode 32-bit code.

**Verdict:** Phar Lap `MP` 386 executable, loaded by `RUN386.EXE`. Positive.

**Open:** the header layout is not the documented `MP` one. Words `0x1e`
through `0x3e` are all zero, and the segment count is not where the format
description says. A flat dump from `0x75f` works for disassembly but the true
segment table has not been located.

**Tried:** symbol recovery.

**Measured:** identifier-like strings per binary: `DARKNESS` 11, `ENCHANT` 11,
`EXODUS` 17. Of these, 10 per file are High C runtime (`_mwStdio1c`,
`_mwStdlib5`, `_mwFINIT`, `_mwARG`, `_mwStackDump`) and 5 are Fujitsu keyboard
stubs (`KYB_init`, `KYB_setbuf`, `KYB_lock`, `KYB_clic`, `KYB_clrbuf`,
`KYB_read`). `EXODUS` additionally has `Whirl_X`, `Whirl_Y`, `Whirl_d_X`,
`Whirl_d_Y`, `Gate_X`, `Gate_Y`. **These six are in `EXODUS` only.** An earlier
note claimed they were in `DARKNESS`/`ENCHANT` as well. They are not. `ENCHANT`
and `DARKNESS` carry only the runtime and keyboard stub names. Printable ASCII density 6-9%.

**Verdict:** binaries are stripped. Six genuine game symbols in the entire
trilogy. Negative result for source recovery, positive for the claim that
decompiled output would not resemble authored source.

---

---

**[The colour palette](palette.md)** **[Assets and graphics](assets-and-graphics.md)**

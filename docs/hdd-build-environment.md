# The TownsOS hard disk as a build environment

`disk/TownsHDD_V1.HDM` boots, has a writable `C:`, and carries a High C compiler. This page records how to reach
it and what makes it usable repeatedly rather than once.

## Booting it

```
-CMOS /data/CMOS_HDD.bin -HD0 /disk/TownsHDD_V1.HDM -BOOTKEY H0
```

**The CMOS is required.** Tsugaru reads the boot partition from CMOS rather than scanning; a fresh CMOS stops at the
IPL. `disk/CMOS.DAT` supplies the right assignment.

Verified: reaches the **Towns OS V2.1 L40 desktop**, with a file-manager window titled `G: TOWNSYSTEM` and an
`FM-DOSYS` icon that launches DOS.

## Savestates remove the GUI from the workflow

This is the answer to "must we use the GUI every time", and it is **no**.

```
SAVESTATE /data/hdd_dos.state     -> >Saved /data/hdd_dos.state
LOADSTATE /data/hdd_dos.state     -> >De-serializing FMTOWNS ... 486DX ... PIC ... DMAC ...
```

**A 6,345,691-byte state file is written and reloads.** So the GUI needs to be driven **once**. Get to a DOS prompt,
save the state, and every later run resumes at the prompt with no pointer input at all.

That converts a one-off manual step into a committed artefact, which is what makes the environment reproducible for
anyone else.

## The compiler is confirmed on the disk

A directory listing read directly from the image, in a `DEVELOPMENT` partition:

```
DEVELOPM.ENT   attr=0x28      volume label
HC386          attr=0x10      cluster 2      directory
AUTOEXEC.BAT   attr=0x20      cluster 3841   56 bytes
386ASM         attr=0x10      cluster 3842   directory
FB386.EXP      attr=0x20      cluster 4062   419,952 bytes
FB386M.EXP     attr=0x20      cluster 4165   611,216 bytes
```

## `COMMAND.COM` is not needed, and that was the mistake

A build-a-boot-disk plan was blocked on `COMMAND.COM` being absent from every medium, including a byte search across
all 15.9 GB of this disk. **That search was answering the wrong question.**

**TownsOS does not use `COMMAND.COM`.** It supplies its own command processor, `console.exe`, and `config.sys`
naming `SHELL=C:\COMMAND.COM` is satisfied by TownsOS's own arrangement. The patched SDK CD reaching `Q:\>` with no
`COMMAND.COM` present was already proof of this, and it was read as a curiosity rather than as the answer.

**Two consequences, both of which make the work simpler than it was being made.**

An interactive shell is not required at all. `AUTOEXEC.BAT` runs a program on boot, so a one-shot build needs no
prompt:

```
@ECHO OFF
C:\HC386\BIN\HC386.EXE C:\TEST_DIV.C C:\TEST_DIV.OBJ
```

And where a shell is wanted, `console.exe` is already running.

## What is still unproven

**A compile has not been completed on this environment.** The pieces are all present and independently verified:
writable `C:`, the compiler, TownsOS, savestates, and host tools to place a source file. What has not been done is
the single run that produces a `.OBJ`.

The remaining step is one of:

- reach a DOS prompt once, by the `FM-DOSYS` icon or a TownsOS keyboard route, then `SAVESTATE` and drive it with
  `TYPE` from then on
- or place the compile command in `AUTOEXEC.BAT` on the disk and boot straight into it

Both are cheap once the first prompt is reached. Neither requires building a new disk image, and the disk-image
route was abandoned for good reason: assembling one from the components available would use `console.exe`, and
therefore inherit the same shell limits that made the CD route fail.

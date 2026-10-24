# The MS-DOS 6.2 boot disk, which was the missing shell all along

`references/fmt-roms/FMT ROMs.7z` contains a set of FM Towns operating system and BIOS images that had not been
looked in. Among them:

```
[OS] MS-DOS 3.1 L24 (Disk 1 - System).hdm
[OS] MS-DOS 3.1 L24 (Disk 2 - Utility).hdm
[OS] MS-DOS 6.2 L10 (boot disk).hdm
[OS] Towns System Software v2.1 L51.hdm
[OS] Towns System Software v1.1 L30 (boot disk).hdm
```

**The MS-DOS 6.2 boot disk is a real DOS, and it boots to a DOS prompt.**

## What it contains

```
COMMAND.COM   55,136 bytes   Jan 1994
IO.SYS       135,168 bytes   Aug 1994
MSDOS.SYS     39,722 bytes   Jan 1994
CONFIG.SYS
AUTOEXEC.BAT
DOS/          HIMEM.SYS  OAK0.SYS  OAK1.SYS  CDDRV.SYS  CDISC.SYS  MSCDEX.EXE
```

`COMMAND.COM`, `IO.SYS` and `MSDOS.SYS` are present at the start of the disk image, which is what makes it bootable,
and every FM Towns floppy carries `IPL4` at offset 0 as this one does.

**Its `AUTOEXEC.BAT` mounts the CD as `Q:`:**

```
PROMPT $P$G
SET PATH=A:\DOS;A:\BIN
\DOS\MSCDEX /D:TOWNS_CD /K /M:8 /L:Q > NUL
```

which is the same drive letter the High C kit expects, arriving from a DOS rather than from TownsOS.

## It boots, and here is what it says

Booting it as a floppy with the CD attached reaches `A:\>`. The first attempt produced these, all informative:

```
XMS driver was not loaded.
Bad or not found: D:\DOS\OAK0.SYS
Error in CONFIG.SYS line 6
Bad or not found: D:\DOS\OAK1.SYS
Error in CONFIG.SYS line 7
HMA unavailable: loading MS-DOS in low memory.
SMARTDrive cannot load: HIMEM.SYS not loaded.
```

**The CD drivers failed only because the disk's `CONFIG.SYS` refers to `D:\DOS\`**, while the disk had booted as
`A:`. Every `DEVICE=\DOS\...` line that had a `D:` prefix therefore failed, including `HIMEM.SYS`, which cascaded
into the XMS and SMARTDrive complaints.

**Rewriting `D:\DOS\` to `A:\DOS\`** is the whole fix, and it is a one-line substitution on a copy of the image,
never on the archive.

## The drivers the disk was missing

The disk ships `CDDRV.SYS`, `CDISC.SYS` and `MSCDEX.EXE`, but **not `OAK0.SYS` or `OAK1.SYS`**, so the Oak CD driver
chain has a hole in it and `MSCDEX` has no device to mount. Its own `config.sys` expects them.

**They are on the SDK CD**, at `sys/oak0.sys` and `sys/oak1.sys`, 76,880 and 70,978 bytes. Copying them into the
disk's `DOS\` directory closes the chain.

**A 1,232 KB floppy is tight.** With MS-DOS 6.2 already on it there was 66 KB free and the two drivers need 128 KB,
so the copy failed with `No space left on device`. Removing `SETUP2.EXE` (213 KB, an installer for the full DOS, not
needed to boot) and `DBLSPACE.BIN` (64 KB, compression, not needed either) leaves 197 KB free and room for both.

**Path form matters at boot.** `DEVICE=\DOS\OAK0.SYS` with a leading backslash and no drive letter left the drivers
unloaded with `Bad or not found: :\DOS\OAK0.SYS`, note the empty drive, meaning the path resolved with no drive letter at all. An explicit `DEVICE=A:\DOS\OAK0.SYS` is
what a boot floppy needs, and the original disk used `D:\DOS\` for the same reason: an explicit letter rather than
a relative root.

## Why this matters

Every previous route to a scriptable shell failed:

| route | how it failed |
|---|---|
| patched SDK CD | `console.exe` cannot write files, has no redirection, stubbed `COPY` |
| TownsOS hard disk | boots to a GUI, DOS reachable only by pointer |
| CD plus HDD | the CD's `config.sys` has no disk driver, so the HDD has no letter |
| building a boot disk | `COMMAND.COM` was absent from every medium |

**A real MS-DOS supplies the shell that `console.exe` is not.** With `COMMAND.COM`: redirection works, `COPY` works,
drive letters can be switched, and `.EXE` files run.

**And the file whose absence blocked everything was `COMMAND.COM`, which this disk provides.**

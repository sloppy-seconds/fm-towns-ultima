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

**Rewriting `D:\DOS\` to `\DOS\`** is the whole fix, and it is a one-line substitution on a copy of the image, never
on the archive.

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

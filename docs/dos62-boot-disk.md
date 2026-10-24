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

## HIMEM.SYS fails, and the SDK shows what to use instead

`HIMEM.SYS` does not load on this machine:

```
Notice: high memory area is not available.
XMS driver was not installed.
SMARTDrive cannot load: HIMEM.SYS not loaded.
```

which cascades into no HMA and no disk cache. **The Oak driver errors are gone**, so the CD chain is a separate
matter and did improve.

**The SDK's own `config.sys` answers it.** It does not use `HIMEM.SYS` at all:

```
DEVICE=\SYS\CTL.SYS
DEVICE=\TBIOS\TBIOSLD.SYS
DEVICE=TOWNS.SYS
DEVICE=\SYS\OAK0.SYS
DEVICE=\SYS\OAK1.SYS /S0 /H1 /K0 /R0 /M3 /B1
```

`CTL.SYS` is the Fujitsu memory manager, and this matches what the project already knows about `CTL.SYS V1.1 L519`
from the hard disk. **On FM Towns, Microsoft's HIMEM is the wrong driver**; a Fujitsu-supplied one is expected.

**What that means for the compiler:** `hc386.exe` is a Phar Lap extender program and needs extended memory. If
`HIMEM.SYS` cannot provide it, `CTL.SYS` is the candidate, and it is on the SDK CD at `sys/ctl.sys` alongside the Oak
drivers that were copied across for the same reason.

## The keyboard: `;` is the colon, and `\` renders as `¥`

Two facts about typing into Japanese MS-DOS on Tsugaru, both established by experiment after a long series of
failures, and both worth stating first in future work.

**A colon must be sent as a plain semicolon.** `xdotool` typed into this machine arrives on a Japanese 106-key
layout, where the physical key labelled `;` on a US board produces `:`. Sending any of these produces a **plus sign**
instead:

```
/api/keys {"text":":"}      -> +
/api/key  {"keys":"colon"}  -> +
/api/key  {"keys":"Shift+semicolon"} -> +
```

while

```
/api/key  {"keys":"semicolon"} -> :
```

**This one substitution explains every failure in this line of work.** Every `Q:` typed as `Q+`, so:

- `MSCDEX /D+TOWNS_CD` was rejected as `不正なオプションです` (invalid option), not because the device was missing
- `DIR Q+` searched drive `A:` for a file called `Q` and reported `File not found`
- every `Q+:\HC386\BIN\HC386.EXE` was `コマンドまたはファイル名が違います`, bad command or file name

while the file sat at a **known extent on a known disc**, proved by walking the ISO directory tree on the host. Hours
went into drivers, partition tables, container configurations, memory managers and boot images for what was one
wrong keystroke.

**A backslash displays as `¥`.** Japanese MS-DOS renders the path separator as the yen sign. A path on screen reading
`Q:¥HC386¥BIN¥HC386.EXE` is correct and is not evidence of corruption.

## Two dead ends, recorded so they are not repeated

**`CTL.SYS` hangs the boot.** Swapping Microsoft's `HIMEM.SYS` for the Fujitsu `CTL.SYS`, on the reasoning that the
SDK's own `config.sys` uses it, produces a machine that prints

```
Starting MS-DOS...
日本語 MS-DOS(R) V6.2 L1.0 +3
COPYRIGHT FUJITSU LIMITED 1985-1994.
```

and then **stops before any prompt**. No error, no banner from the driver, no further output. That is worse than
`HIMEM.SYS` failing silently-then-visibly, because there is nothing to act on. `saves/dos62v5.hdm` is kept so the
attempt is traceable, but `saves/dos62v4.hdm` is the disk that boots.

**`DIR Q:` lists drive A: and says File not found.** Not `Invalid drive specification`. That distinction matters:

```
A:\>DIR Q:
Volume in drive A is D62P3
Directory of A:\
File not found
```

**`Q:` is not a drive.** DOS read `Q` as a filename pattern on the current drive and searched for it. So `MSCDEX`
did not mount the CD, and the drive letter in the disk's own `AUTOEXEC.BAT` was never created.

**And the disk's `AUTOEXEC.BAT` pipes `MSCDEX` output to `NUL`**, which is why the failure was invisible:

```
\DOS\MSCDEX /D:TOWNS_CD /K /M:8 /L:Q > NUL
```

The redirection hides exactly the message that would have explained it. Running `MSCDEX` bare reports what it
mounted, and that is the diagnostic to use.

**The device-name pairing does look right**, which makes the failure more interesting than a typo:

```
DEVICE=A:\DOS\OAK1.SYS /O1 /S0 /H1 /K0 /R1 /M2 /B1 /D:      <- declares device ":"
DEVICE=A:\DOS\CDDRV.SYS /D:TOWNS_CD /U0:0                    <- declares "TOWNS_CD"
MSCDEX /D:TOWNS_CD                                            <- looks for "TOWNS_CD"
```

`CDDRV.SYS` provides `TOWNS_CD` and `MSCDEX` asks for it, so the pair is consistent. `OAK1.SYS` declaring an empty
device name is suspicious and is the first thing to check.

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

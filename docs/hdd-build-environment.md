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

## The last blocker is text entry, not configuration

With the file's presence proved, the remaining failures are all the same shape:

```
Q:\>\Q:\HC386\BIN\HC386.EXE        <- a stray leading backslash
Q:\>Q+\HC386\DEMOS\HELLO.C          <- a colon arriving as a plus
```

**A stray leading `\` makes `\Q:\...` a root-relative path rather than a drive-qualified one**, which DOS rejects
identically to a missing file. And a `:` arriving as `+` corrupts the drive letter. Both produce
`Wrong Command or File Name.` and neither says anything about the file.

**This is a synthetic-input problem, and it is measurable.** A screenshot taken before Return shows exactly what the
line contains, and that has now been done. The facts it settles:

- the characters are legible and the font is crisp, so this is not an OCR ambiguity
- the stray characters are real in the guest, not in the transcription
- `Escape` followed by backspaces does not reliably clear a pending line

**The cheap fixes, in order:** type the path without the drive letter at all by first changing to the directory,
which needs a working `CD`; or accept the `Q:` prefix and send characters one at a time with a longer settle; or
avoid the shell entirely by putting the command in an `AUTOEXEC.BAT`, which is what the disk-partition work was for.

## The compiler's exact location on the patched disc, read from the ISO

The path `Q:\HC386\BIN\HC386.EXE` was queried rather than assumed, by walking the ISO9660 directory tree of the
image the emulator is actually booting, `saves/hc.img`. ISO9660 directories are readable on the host with no guest
involvement at all.

Volume `HC_MULTI_K`, root at extent 26. The chain resolves completely:

```
root  -> HC386            DIR   extent 23713
HC386 -> BIN              DIR   extent 23768
BIN   -> HC386.EXE;1      file  extent 24073   61,888 bytes
         HCD386.EXE;1     file  extent 24110  698,816 bytes   the code generator
         HC386.CNF;1      file  extent 24032   82,392 bytes   the driver config
         386LINK.EXE;1    file  extent 23769  192,192 bytes
         HCD386P.EXP;1    file  extent 24452  670,437 bytes
```

**So the file is on the disc, at that path, at that size.** Any `Wrong Command or File Name` from the guest is not a
missing file. It is either the guest's text entry corrupting the line, or the shell failing to resolve a
full path.

**Also worth recording, because it was not noticed before:** `RUN386.EXE` is at the **root** of the disc, extent 527,
alongside `CONSOLE.EXE` at 374. The extender the compiler needs is not buried in a subdirectory.

## Writing into the disk from the host: attempted, and it does not converge

The durable version of the plan was to place the compile command in the `DEVELOPMENT` partition's own
`AUTOEXEC.BAT`, from the host, with no guest interaction at all. That requires knowing where the partition begins.

**The directory is findable and the volume is not.** A real FAT directory entry for the compiler is at
`0x38b20e20`, preceded by a volume label:

```
DEVELOPMENT(          <- '(' is attribute 0x28, the volume-label bit
HC386          attr=0x10  cluster 2
AUTOEXEC.BAT   attr=0x20  cluster 3841  56 bytes
386ASM         attr=0x10  cluster 3842
FB386.EXP      attr=0x20  cluster 4062  419,952 bytes
FB386M.EXP     attr=0x20  cluster 4165  611,216 bytes
```

**Every attempt to locate the owning boot sector failed, in five different ways:**

- searching backwards for 2 GB finds nothing
- searching for the `FAT16` signature finds one volume, which does **not** contain the directory
- searching for `FAT12` finds three, none of them it
- a general jump-instruction scan finds four plausible boot sectors, two of which "contain" the target by offset
  arithmetic, and **both have garbage root directories** and no `HC386` entry

**The reason is scale.** A 15.9 GB image contains an enormous number of byte sequences that satisfy a loose FAT
boot-sector test. Every candidate that passes the signature check has to be discarded by reading its root
directory, and the scan is finding coincidences in data rather than volumes.

**So this route is parked rather than abandoned.** The information needed is known to exist, the entries are
readable, and a proper approach would be to parse the FM Towns partition table at `0x200` correctly. That table was
attempted several times and the layout is not the 16-byte record the documentation suggested, so it remains the
unfinished piece.

## The HDD is invisible to the CD's DOS, and `config.sys` says why

Attaching both media works, and the combination does what it was supposed to:

```
Tsugaru_CUI /roms -CD /disc/hc.ccd -CMOS /data/CMOS_HDD.bin -BOOTKEY CD -HD0 /disk/TownsHDD_V1.HDM
```

boots to a `Q:\>` prompt with the 15.9 GB disk attached underneath. **But no drive letter on that disk exists**,
and every attempt to reach one fails identically:

```
Q:\>C:
Wrong Command or File Name.
Q:\>E:
Wrong Command or File Name.
```

**The cause is in the CD's own `config.sys`.** It loads no hard disk driver at all:

```
SHELL=C:\COMMAND.COM C:\ /P
DEVICE=\SYS\CTL.SYS
DEVICE=\TBIOS\TBIOSLD.SYS
DEVICE=TOWNS.SYS
DEVICE=\SYS\OAK0.SYS
DEVICE=\SYS\OAK1.SYS /S0 /H1 /K0 /R0 /M3 /B1
DEVICE=\SYS\T_KANJI.SYS
DEVICE=\SYS\GDS.SYS
DEVICE=\SYS\MOUSE.SYS
```

There is nothing for SASI, SCSI or a hard disk, and none of the nine `.sys` files on the disc mentions them either.
`TOWNS.SYS` is the BIOS driver that would service them, and on the CD it is loaded bare with no drive assignment.

**So the disk is attached to the emulator and unknown to the operating system.** A drive letter cannot be switched
to because it was never assigned. This also explains why the earlier SRAM dump showed `C`, `Z`, `X` on one boot and
`E`, `Z` on another: those are BIOS defaults, not the presence of a usable volume.

**`MSCDEX ... /L:Q` works because the CD driver is separate**, and that is the only drive the patched boot
successfully provides.

## What this means for the plan

The combination of "prompt from the CD" and "storage from the HDD" needs one more thing than both media: **a DOS on
the hard disk itself**, where `config.sys` can assign the drives. The CD boot cannot be made to see a disk it has no
driver for.

That points back at the TownsOS hard disk boot, which does see its own partitions, and at the conclusion that a
savestate taken at its prompt is the way to use it.

## `FM-DOSYS` does not exist, and the vision reads invented it

The plan for reaching a DOS prompt was to double-click an icon the vision model read as **`FM-DOSYS`**. Clicking it
produced:

```
FM-OASYS起動コマンドE03V014
```

which is FMR-OASYS reporting a startup failure. **The icon is `FMR-OASYS`**, a Japanese word processor, not a DOS
launcher.

**A byte search of the entire 15.9 GB disk finds no occurrence of `FM-DOSYS`, `FMDOSYS`, or `DOSYS`.** The name
never existed on this machine. It was read from a screenshot, repeated across several vision transcriptions, and
built into a plan without ever being checked against the image.

**What is actually present** is a reference in a configuration structure:

```
Q:\RUN386.EXE
Q:\CONSOLE.EXE
```

so the console shell runs from `Q:`, the CD, through Phar Lap's extender, exactly as on the SDK disc.

**The lesson is about the instrument, and it is the sharpest instance yet.** A vision model reading a low-resolution
Japanese screenshot produced a plausible Latin-sounding name, and every later step inherited it. The check that would
have caught it is a byte search, and it takes one command.

## A container bug that invalidated every earlier observation

**The `hcd` container never had its own display.** It was launched with `--network host`, so it tried to bind VNC on
5900 and noVNC on 6080, both of which `fmtowns` already held. Xvfb then failed:

```
_XSERVTransMakeAllCOTSServerListeners: server already running
Fatal server error:
Cannot establish any listening sockets - Make sure an X server isn't already running
```

**Every screenshot taken from that container was of the game emulator's display, not the TownsOS hard disk.** The
desktop and windows read from those captures were `fmtowns`, and the conclusions drawn from them about drives and
icons were about the wrong machine.

**The same mistake in a second form:** `podman run ... >/dev/null 2>&1` swallowed

```
Error: pasta failed with exit code 1:
Listen failed for HOST TCP port */8090: Address already in use
```

so the container never started and produced no log, which read as a silent emulator failure. Redirecting a command's
output to /dev/null while debugging is how a clear error becomes a mystery.

**Fixed by** using port mappings rather than host networking, on ports confirmed free, and checking `X display
ready` in the log before trusting any capture.

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

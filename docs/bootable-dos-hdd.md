# A bootable DOS hard disk on FM Towns emulation

**Status: the recipe below produces a disk that boots once and then cannot be read.**
What this page can state is measured. What it cannot state is a working, reproducible
hard disk, and a previous version of this page claimed one. That claim is corrected
here rather than deleted, because the history of being wrong is the useful part.

## What is established

`-GENHD` creates a hard disk image, and its own help text is accurate: it writes a
file filled with zeros. The emulator has no formatter. MS-DOS 3.1 L24 Disk 1, from
the same ROM pack, carries `DISKPAT.EXE` as a plain DOS executable, and it runs from
an `A:\>` prompt.

The sequence that produced a readable `C:` was:

1. `-GENHD` a 64 MB image
2. Boot MS-DOS 3.1 Disk 1 with `-HD0 disk.img -CMOS CMOS_HDD.bin -BOOTKEY F0`
3. `DISKPAT` - select Unit 0, delete any existing partitions, create one with OS
   type `MS-DOS`, 起動 bootable, capacity `A`, then 登録 and 終了
4. `COPY A:*.* C:`

After that, `DIR C:` listed `COMMAND.COM` and 43 files and reported
`66,793,472` bytes free. **That observation is the only evidence of a working `C:`,
and it has not been reproduced.**

## Why it cannot be reproduced from the image

The saved image, `saves/dos-hdd-bootable.img`, sha256 beginning `0a5f80b0`, contains:

```
size            67,108,864 bytes
non-zero        1,007,669 bytes
sector 0        IPL4, then "HD IPL V1.1 89/01/14"
root directory  43 entries at byte 134,656, first IO.SYS, last README.DOC
file data       1.3 MB across bytes 261,632 to 1,500,532
```

**It contains no BPB and no FAT.** A scan for a plausible boot sector across the
whole image returns nothing. `fdisk` sees no partition table. Linux cannot mount it.
So there is no filesystem in the image for DOS to have read.

The inference is that Tsugaru served the directory and file contents from memory
during that boot, and the state was lost when the VM restarted. **That is an
inference, not a measurement,** and it is the reason the working `C:` has never
returned.

## The partition record, and what DISKPAT leaves out

Record at `0x230`, tail from `+0x20`. On the 15.9 GB disk, whose partitions mount:

```
0x250: ff 01 03 | 48 24 00 | 00 f8 03 | 00 00 00 | c4 cb 04 00
       flags     start      length                 length32
```

On the DISKPAT-made 64 MB disk:

```
0x250: 00 00 00  00 00 00  00 00 00  00 00 00  00 00 00 00
```

**DISKPAT wrote the partition name and type but no start sector and no length.**
The header at `0x220` differs too: working is `00 01 03 ...`, the 64 MB disk has
`ff 01 03 ... fe ff 01`.

Attempts to write the geometry by hand produced `Abort, Retry, Fail` on `DIR C:`, and
once caused `FORMAT` to report a 133,003,264-byte volume, which is neither the image
size nor any sensible fraction of it. **Hand-writing these fields is not a solved
problem.**

## The other failure modes, measured

**`FORMAT C:` reports "cannot format a ROM disk".** That message appears when the
target is not identifiable as writable media. `CMOS:DRIVE ASSIGNMENT TYPE` lists
`5:ROM` as a drive type, so a partition the BIOS cannot locate is plausibly presented
as ROM.

**A `mkfs.fat` image cannot substitute.** `mkfs.fat` puts a BPB at sector 0 and no
partition table, so the FM Towns IPL reads BPB bytes as boot code. A hybrid with
`IPL4` at 0, a table at `0x200` and `mkfs.fat` at sector 128 also fails, because the
BPB's `hidden sectors` field says 0 while the volume actually starts at 128.

**Drive letters do not follow the CMOS table.** With `CMOS_HDD.bin` declaring SCSI
unit 0 at slot 2, the disk should appear at `C:`. It appeared at `F:`. Three letters
ahead of it resolve to something that reports as ROM.

## TGDRV needs a DOS redirector

`TGDRV.COM` violates its own name: it is not a device driver but an `INT 2F` network
redirector client. Disassembling its first 200 bytes shows a probe of I/O port `2F10h`
testing `F0F0` and `AAAA`, then `mov ax,6809 / int 2f`, the redirector install call.

Without a redirector it prints `TGDRV has not been installed` and returns. Loading
`SHARE.EXE` first, from the MS-DOS 3.1 system disk, makes it work: it mounts the host
share, at whatever letter the CMOS table leaves free, observed as `E:`, `I:` and `R:`
on different boots.

## DOS quirks that cost real time

`COPY` rejects a trailing backslash on the destination, so `copy src\*.* C:\BIN\`
copies nothing while `copy src\*.* C:\BIN` works. A single-file copy to the root still
needs `C:\`.

`dir *.obj` reports "file not found" even when matching files exist. `*.OBJ` works.
Reading that output as an empty directory cost two rounds of work.

`COPY` can append a second directory entry instead of overwriting. Running the same
copy twice produced duplicate `HC386.CNF`, `HC386.EXE` and `HCD386P.EXP` entries, and
DOS resolves the first, which is the stale one.

## The High C directory layout, from the driver's own configuration

`HC386.CNF` line 105 sets `bin=/bin` and line 106 sets `inc=/inc`, both relative to
`HCDIR`. So `HCDIR=C:` puts the compiler at `C:/bin`, and the build prints that path
with forward slashes because the config builds it that way. `TOOLSDIR` receives the
same treatment: the linker search is `$TOOLSDIR$bin`.

## What was not achieved

**No object file was ever produced.** The High C driver ran, built its argument files
and invoked `C:\BIN\RUN386.EXE`. No `TESTDIV.OBJ` appeared on the TGDRV share, on a
floppy, or on a hard disk.

The last visible failure is the link step:
`/386linkp.exp/not found/in/TOOLSDIR/or/PATH`. In native mode the config appends
`.exp` to `ldname`, and the kit ships `386linkp.exp` but no `386link.exp`. Setting
`LINKNAME=386linkp` in the environment does not reach it, because `check_link_as`
takes `ldname` as a procedure parameter.

**And a hard disk cannot be relied on.** Every attempt to read a filesystem from a
64 MB image failed after the first boot.

## What survived, and how to get back to it

```
saves/dos-hdd-template.img   4 root entries, straight from DISKPAT
saves/dos-hdd-bootable.img   43 root entries, after COPY A:*.* C:
                             sha256 0a5f80b0d8b24c2acda7524452b6b534f63e291c2932c06b750fd527e58f813f
```

Both are reproductions of the emulator's own output, not of a working filesystem.
Neither can be mounted.

## Reproducing the inputs

```
[OS] MS-DOS 3.1 L24 (Disk 1 - System).hdm    DISKPAT.EXE, FORMAT.COM, SYS.EXE, SETUP.EXE
[OS] MS-DOS 3.1 L24 (Disk 2 - Utility).hdm   HDUTY.EXE, HDIST.EXE, CLNDSK.EXE
```

Both are in `references/fmt-roms/FMT ROMs.7z`. `CMOS_HDD.bin` is a copy of
`disk/CMOS.DAT`, shipped with the 15.9 GB TownsOS disk in `disk/HDD V1.rar`.

The disk images are not committed, because they contain DOS system files.

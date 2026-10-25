# The High C compiler does not run under DOS on this emulator

**Status: not solved.** Two working environments were built and both were reached. In
both of them `RUN386.EXE` produces no output. This page records what works, what was
measured, and why the compiler question is now a finding rather than an open
investigation.

Everything here was verified from bytes on disk or reported from the guest screen.

## What works

**A bootable, formatted 8 MB MS-DOS hard disk.** This is the first disk in the work
whose filesystem is sound. Measured from the image:

```
file            saves/hd8.img, 8,388,608 bytes
sector 0        IPL4
BPB at byte 1536
  bytes per sector     2048
  sectors per cluster  2
  reserved sectors     1
  FATs                 2
  root entries       512
  total sectors     4095
  sectors per FAT      3
  media             0xf9
  clusters          2040
```

**A full-file FAT chain check passes: 64 files, 0 wrong.** Every file's chain length
matches its declared size.

**A TownsOS 2.1 floppy that boots to a DOS prompt.** `saves/tos21-console.hdm` carries
`CONSOLE.EXE`, `COMMAND.COM` and `RUN386.EXE`, and its `CONFIG.SYS` loads the three
Towns drivers:

```
SHELL=C:\COMMAND.COM C:\ /P
DEVICE=\SYS\CTL.SYS
DEVICE=\TBIOS\TBIOSLD.SYS
DEVICE=\TOWNS.SYS
```

That is a TownsOS environment **and** a real DOS shell at the same time, which no
earlier configuration had.

## The finding

**`RUN386.EXE` produces no output in either environment.**

Verified on the 8 MB disk by reading the binaries back and checking their contents:

```
RUN386.EXE    83,904 bytes   MZ header, contains "Phar Lap"    complete
HCD386P.EXP  670,437 bytes   P3 header                          complete
HC386.EXE     61,888 bytes   MZ header                          complete
```

The files are intact. The FAT chains are correct. The extender is invoked from a path
that exists. And:

- `RUN386` alone prints nothing
- `RUN386 HCD386P.EXP -banner` prints nothing
- `RUN386 HCD386P.EXP HELLO.C -obj HELLO.OBJ -dir C:\INC` prints nothing and writes
  nothing

Earlier in the work, a different copy of the generator did print a banner and clear the
screen. That has not been reproduced.

## Why FAT12 cluster limits mattered, and how that was found

The 32 MB and 64 MB disks were unusable and the reason was arithmetic:

```
32 MB at 4096-byte clusters = 16,343 clusters
FAT12 can address           =  4,084 clusters
```

`FORMAT` on this DOS always writes FAT12 and sets `media=0xfa`, derived from the floppy
defaults, regardless of volume size. Cluster numbers above 4,084 wrap, so chains point
into other files. The symptoms were:

- `RUN386.EXE` declaring 83,904 bytes with a 3-cluster chain
- 9 of 26 files short-chained and 8 long-chained on the same volume
- programs that load, print nothing and exit

**An 8 MB disk gives 2,040 clusters and the same files are correct.** That is the
diagnosis, confirmed by the chain check.

## The two CMOS files, and why both are needed

| stage | CMOS | why |
|---|---|---|
| `DISKPAT` | `CMOS_HDD.bin` | the BIOS halts on a fixed disk CMOS does not declare |
| `FORMAT` and use | `CMOS_ONE.bin` | ten declared SCSI slots push the disk to `F:` |

With `CMOS_HDD.bin`, which declares ten SCSI units at `0x00f4`, only SCSI unit 0
exists but DOS still letters all ten. The real disk lands at `F:`, `C:` resolves to a
phantom reporting as `5:ROM`, and `FORMAT C:` answers **"cannot format a ROM disk"**.

## `SHARE.EXE` was load-bearing and invisible

`TGDRV.COM` is not a device driver. Disassembling its first 200 bytes shows a probe of
I/O port `2F10h` testing `F0F0` and `AAAA`, then `mov ax,6809 / int 2f`, the network
redirector install call. Without a redirector it prints `TGDRV has not been installed`
and returns. `SHARE.EXE`, from the MS-DOS 3.1 system disk, registers that interface.

## DOS quirks that cost real time

**`COPY` rejects a trailing backslash on the destination.** `copy src\*.* C:\BIN\`
copies nothing, `copy src\*.* C:\BIN` works, and a single file to the root still needs
`C:\`.

**`dir *.obj` reports "file not found" even when matches exist.** Use `*.OBJ`. Reading
that as an empty directory cost two rounds of work.

**`COPY` can append a duplicate directory entry instead of overwriting.** Repeated runs
left duplicate `HC386.CNF` and `HCD386P.EXP` entries, and DOS resolves the first, which
was the stale one.

**The High C driver's own path logic fights DOS.** `HC386.CNF` sets `bin=/bin`, so
`$TOOLSDIR$bin` becomes `C:\BIN/bin` and `checkpath` appends `\386link.exe`, giving
`C:\BIN/bin\386link.exe` with mixed separators. `checkpath`'s own comment warns that DOS
errors on exactly this. Setting `PATH=C:\BIN` and leaving `TOOLSDIR` for the fallback
search was what finally made the linker resolve.

## What is not established

**Whether `RUN386` can run under DOS at all with what is installed.** The extender is
the Fujitsu build, and its banner reads `Director: TownsOS, MS-DOS Extender staff`. It
may require a Towns service that neither DOS 6.2 nor the TownsOS floppy provides from a
plain command prompt.

**Whether the code generator can run.** With `RUN386` silent, the generator has never
been reached.

**The palette.** Unrelated to this page but still open, and the `SYM1` symbols in
`TMENU.EXP` remain the most promising route.

## The artefacts, with hashes

| file | size | sha256 (first 16) |
|---|---|---|
| `saves/hd8.img` | 8,388,608 | `dd271bed5f066479` |
| `saves/tos21-console.hdm` | 1,261,568 | `28e5780437dda2c3` |
| `saves/u2dev-formatted.img` | 67,108,864 | `15ce8692190c8801` |
| `saves/CMOS_ONE.bin` | 8,192 | `60747c6674a250bd` |
| `saves/CMOS_HDD.bin` | 8,192 | `e6ee5a95d8d1f7ee` |
| `saves/dos31.hdm` | 1,261,568 | `2af5c9431b9f326b` |
| `saves/dos62v6.hdm` | 1,261,568 | `ef97788bec0f4daf` |
| `saves/hc.ccd` | 556 | `7fafb0b140805736` |

## The working commands

Boot the formatted 8 MB disk with a DOS shell and the CD:

```
-CMOS /data/CMOS_ONE.bin -FD0 /data/dos62v6.hdm
-HD0 /data/hd8.img -CD /data/hc.ccd -BOOTKEY F0
```

Boot TownsOS 2.1 with a DOS prompt:

```
-FD0 /data/tos21-console.hdm -BOOTKEY F0
```

## Where a reimplementation of the compiler route would start

**Get `RUN386` to print anything.** Until it does, no compiler work is possible. The
cheapest untried test is `RUN386 COMMAND.COM`, which must answer
`Not a Phar Lap program` if the extender is running. A reply proves the extender lives
and moves the problem to the generator. Silence means the extender itself is the wall,
and the next question is what Towns service it needs.

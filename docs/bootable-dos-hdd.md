# A bootable DOS hard disk on FM Towns emulation

This records how to make a **blank, bootable 64 MB MS-DOS hard disk** that Tsugaru
will boot with no floppy attached, and the measurements behind each step. Every
number here was read back from the image, not inferred.

The artefact produced is `saves/dos-hdd-bootable.img`, sha256
`0a5f80b0d8b24c2acda7524452b6b534f63e291c2932c06b750fd527e58f813f`.

## Why this was hard

`-GENHD` creates a hard disk image, and its own help text is accurate: it writes a
file filled with zeros. It does **not** partition or format. The emulator has no
formatter at all. Formatting was therefore believed to require TownsOS, and TownsOS
was not reachable with a usable command line.

The breakthrough is that **MS-DOS 3.1 L24 Disk 1**, from the same ROM pack, carries
`DISKPAT.EXE` - the FM Towns partition editor - as a plain DOS executable. It runs
from an `A:\>` prompt. No Towns Shell, no `.EXG` launcher, no DLLs.

## The recipe

**1. Create the image.**

```
podman run --rm ... --entrypoint /emulator/Tsugaru_CUI localhost/fmtowns \
  /roms -GENHD /data/disk.img 64
```

Yields 67,108,864 zero bytes.

**2. Boot MS-DOS 3.1 Disk 1 with it attached.**

```
-FD0 dos31.hdm -HD0 disk.img -CMOS CMOS_HDD.bin -BOOTKEY F0
```

`CMOS_HDD.bin` is required. Without a CMOS that declares a SCSI disk, the BIOS halts
before the floppy boots. `CMOS_HDD.bin` declares ten SCSI units at offsets
`0x00f4` onward, as pairs of (type, unit) where type `0x00` is floppy and `0x02` is
SCSI.

**3. Run `DISKPAT`.**

At the `A:\>` prompt:

```
DISKPAT
```

It reports `ハードディスクの区画設定 第1.41版` (Hard Disk Partition Setup v1.41) and
lists units 0-4. Select **Unit 0**.

If the table already holds anything, delete those partitions first: select each,
choose 削除 (delete), confirm. The display reads
`区画情報に異常があります` (partition information error) when the entries are
inconsistent, and `設定可能容量 0.0 メガバイト` (0.0 MB available) means nothing can be
created until they are gone.

Then create one partition:

| prompt | answer |
|---|---|
| 区画名 (partition name) | any name, up to 16 characters |
| ＯＳ種別 (OS type) | **MS-DOS** - the only type `DISKPAT.EXE` knows |
| 起動 (bootable) | **起動** |
| 区画容量 (capacity) | **`A`** for all remaining space |

`登録` (register) saves the entry. `終了` (exit) writes it to the disk.

**4. Put the system files on it.**

```
COPY A:*.* C:
```

`DISKPAT` marks a partition bootable by copying system files itself, so `COMMAND.COM`
is present afterwards, but the full DOS toolset comes from this `COPY`.

**5. Boot it.**

```
-BOOTKEY H0 -HD0 disk.img
```

No floppy. It reaches a `C:\>` prompt.

## What is inside the finished image

Measured from the image file:

```
size            67,108,864 bytes (64 MiB)
sector 0        IPL4, then "HD IPL V1.1 89/01/14"
non-zero bytes  1,007,669
root            IO.SYS, MSDOS.SYS, COMMAND.COM, CONFIG.SYS, CTL.SYS,
                EMM.SYS, GDS.SYS, HCOPY.SYS, MOUSE.SYS, OAK0.SYS, ...
COMMAND.COM     dirent at 134,720, size 24,161, cluster 32
free space      66,793,472 bytes (63.7 MB) as reported by DIR C:
```

Sector 0's banner reads **`HD IPL V1.1 89/01/14`** - written by `DISKPAT`, not copied
from the 15.9 GB disk, whose banner reads `HD IPL V1.1 87/09/16`.

## The filesystem geometry, which tripped up every host-side scan

The FAT volume does **not** start at sector 0 and does not use 1024-byte sectors:

```
FAT boot sector at byte 247,808
bytes per sector   512
sectors per cluster 2   (so cluster = 1024 bytes)
reserved sectors    1
FATs                2
root entries        112
```

Several attempts to write files into this image from the host failed because the
scan assumed 1024-byte sectors, found a false-positive boot sector at 247,808, and
wrote over live data. **Do not write to this filesystem from the host.** Use the
guest's own `COPY`.

## DOS quirks that cost real time

**`COPY` rejects a trailing backslash on the destination.**
`copy src\*.* C:\BIN\` silently copies nothing, while `copy src\*.* C:\BIN` works. A
single-file copy to the root still needs `C:\`.

**`dir *.obj` reports "file not found" even when matches exist.** Use `*.OBJ`.
Reading that output as "the directory is empty" led to two rounds of wasted work.

**`COPY` can append a second directory entry instead of overwriting.** Running the
same copy twice produced duplicate `HC386.CNF`, `HC386.EXE` and `HCD386P.EXP` entries
in one directory. DOS resolves the first, which was the stale one. Run copy scripts
once, and verify with `DIR /W` before assuming a copy landed.

## TGDRV needs DOS 6.2, not DOS 3.1

`TGDRV.COM` from Tsugaru, version 20231115B, is a 2023 program. Under MS-DOS 3.1 it
prints `TGDRV has not been installed` and mounts nothing - it needs the INT 2F
network-redirector interface. Under MS-DOS 6.2 it installs and mounts the share.

It assigns a drive letter dynamically. Observed letters across boots: `E:`, `R:`,
`I:`. The letter depends on how many drives the CMOS declares, because each declared
SCSI slot consumes one. `CMOS_HDD.bin`'s ten SCSI units pushed the share to `R:`.

## The High C layout, from the driver's own configuration

`HC386.CNF` line 105 sets `bin=/bin` and line 106 sets `inc=/inc`, both relative to
`HCDIR`. So:

```
HCDIR=C:   ->  compiler at C:/bin/hcd386p
```

Setting `HCDIR=C:\HC` produces `C:\HC/bin`, which is not where the files are. The
build's own output confirms this: it prints `C:/bin/hcd386p` with forward slashes,
because the config builds the path that way.

`TOOLSDIR` receives the same treatment - the linker search is `$TOOLSDIR$bin` - so
`TOOLSDIR=C:` gives `C:/bin`. `TOOLSDIR=C:\BIN` would search `C:\BIN/bin`.

## What was not achieved

**No object file was ever produced.** The compiler driver ran, built its argument
files, and invoked `C:\BIN\RUN386.EXE`. No `TESTDIV.OBJ` appeared on any volume: not
the TGDRV share, not the floppy, not the hard disk.

The last visible failure is the link step:

```
C:\BIN\RUN386.EXE /386linkp.exp/not/found/in/TOOLSDIR/or/PATH @C:\48170000.tmp
```

That message is built by `hc386.cnf` itself, so the linker search failed. In native
mode the config appends `.exp` to `ldname`, and the kit ships `386linkp.exp` but no
`386link.exp`. Setting `LINKNAME=386linkp` in the environment did not resolve it,
because the procedure `check_link_as` takes `ldname` as a parameter and the
environment value does not reach it.

**Also unresolved:** running `C:\BIN\RUN386 C:\BIN\HCD386P.EXP -BANNER` by hand
returns silently. Earlier, a different copy of the same generator printed a banner
and cleared the screen. The two `HCD386P.EXP` directory entries in the image may be
why - the duplicate-entry problem again.

## Reproducing this from the zip alone

The two inputs are both in the archive.org zip and in
`references/fmt-roms/FMT ROMs.7z`:

```
[OS] MS-DOS 3.1 L24 (Disk 1 - System).hdm
[OS] MS-DOS 3.1 L24 (Disk 2 - Utility).hdm
```

Disk 1 carries `DISKPAT.EXE` (33,048 bytes), `FORMAT.COM`, `SYS.EXE` and
`SETUP.EXE`. Disk 2 carries `HDUTY.EXE`, `HDIST.EXE` and `CLNDSK.EXE`.

`CMOS_HDD.bin` is a copy of `disk/CMOS.DAT`, which ships with the 15.9 GB TownsOS disk
in `disk/HDD V1.rar`.

The finished image is not committed, because it contains DOS system files. The recipe
above regenerates it.

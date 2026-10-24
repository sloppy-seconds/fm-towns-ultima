# The working C: drive: exact configuration

**This page records a configuration that was confirmed working by the user**: a 64 MB
MS-DOS hard disk named `U2DEV`, present as `C:` under MS-DOS 3.1, reachable with
`DIR C:` and formatted with `FORMAT` from inside the guest.

It exists because the details were not written down when they were discovered, and
several hours were then spent rebuilding toward a configuration that had already
worked. Everything below was either measured from the images or reported from the
guest screen.

## The one variable that matters

**`CMOS_ONE.bin`, not `CMOS_HDD.bin`.**

`CMOS_HDD.bin` declares **ten SCSI units** in the drive assignment table at offset
`0x00f4`, as pairs of (type, unit) where `0x00` is floppy and `0x02` is SCSI:

```
slot  0: FD   unit 2   -> A:
slot  1: FD   unit 3   -> B:
slot  2: SCSI unit 0   -> C:
slot  3: SCSI unit 1   -> D:
...
slot 11: SCSI unit 9   -> L:
```

Only SCSI unit 0 exists. DOS still allocates a letter for every declared slot, so the
real disk ends up behind nine phantom drives. Observed symptoms with `CMOS_HDD.bin`:

- our disk appeared at **`F:`**, not `C:`
- `C:` resolved to a phantom that reported as **`5:ROM`**
- `FORMAT C:` answered **"cannot format a ROM disk"**
- `FORMAT F:` reported **133,003,264 bytes**, which is neither the image size nor any
  sensible fraction of it

`CMOS_ONE.bin` declares exactly two entries:

```
slot 0: FD   unit 2   -> A:
slot 1: SCSI unit 0   -> C:
slot 2-11: 0xff (unused)
```

With that, the disk is the only fixed disk and it is `C:`.

## The exact command

```
Tsugaru_CUI /roms \
  -CMOS /data/CMOS_ONE.bin \
  -FD0  /data/dos31.hdm \
  -HD0  /data/genhd2.img \
  -BOOTKEY F0
```

In the container this is set with:

```
-e CMOS=/data/CMOS_ONE.bin
-e FD0_IMAGE=/data/dos31.hdm
-e "TSUGARU_EXTRA=-BOOTKEY F0 -HD0 /data/genhd2.img"
```

## The artefacts, with hashes

| file | size | sha256 (first 16) |
|---|---|---|
| `saves/u2dev-formatted.img` | 67,108,864 | `15ce8692190c8801` |
| `saves/dos-hdd-bootable.img` | 67,108,864 | `0a5f80b0d8b24c2a` |
| `saves/dos-hdd-template.img` | 67,108,864 | `46c3ef1a7d21666d` |
| `saves/CMOS_ONE.bin` | 8,192 | `60747c6674a250bd` |
| `saves/dos31.hdm` | 1,261,568 | `2af5c9431b9f326b` |

`genhd2.img` is the working copy and is byte-identical to `u2dev-formatted.img` after
formatting, or to `dos-hdd-bootable.img` before it.

## How each artefact was made

**`dos31.hdm`** is `[OS] MS-DOS 3.1 L24 (Disk 1 - System).hdm` from
`references/fmt-roms/FMT ROMs.7z`, unmodified. It carries `DISKPAT.EXE`, `FORMAT.COM`,
`SYS.EXE` and `SETUP.EXE` as plain DOS executables.

**`dos-hdd-template.img`** is `-GENHD` (64 MB of zeros) after `DISKPAT` ran on it:
Unit 0, any existing partitions deleted, one created with OS type `MS-DOS`, 起動
bootable, capacity `A`, then 登録 and 終了. That wrote 4 root entries
(`IO.SYS`, `MSDOS.SYS`, `COMMAND.COM`, `TEST.SYS`) and an `IPL4` boot sector.

**`dos-hdd-bootable.img`** is that disk after `COPY A:*.* C:`, which put the full
DOS 3.1 toolset on it: 43 root entries, 1,007,669 non-zero bytes.

**`u2dev-formatted.img`** is that disk after `FORMAT C:` in the guest, named `U2DEV`.

## The formatted volume

`FORMAT` wrote a real filesystem. Measured from the image:

```
BPB at byte 1536 (sector 3)
  bytes per sector   2048
  sectors per cluster 2
  reserved sectors    1
  FATs                2
  root entries     1024
  total sectors   32767
  media            0xfa
  sectors per FAT     32
  volume bytes   67,106,816
```

**2048-byte sectors are why several host-side scans missed this volume entirely** -
they were written to look for 512, 1024 and 4096, and reported no BPB.

`mtools` refuses the image, because it insists on a BIOS partition table it
recognises and this disk uses the FM Towns table at `0x200` instead. **The guest is
the only reader that works.** Do not expect to mount this image on Linux.

## What a blank disk costs, and what it does not

`DISKPAT` creates the partition and copies system files, but it does **not** write a
BPB or a FAT. Before `FORMAT` ran, the image contained:

- `IPL4` and a partition table
- a root directory with 43 entries
- 1.3 MB of real file content

and **no filesystem**. `DIR C:` worked during one boot, then ARF'd after a restart,
because there was nothing on disk for DOS to read. The working reading was served
from emulator memory and was lost when the VM restarted.

**`FORMAT C:` is what makes the disk real.** Skipping it produces a disk that appears
to work once.

## Order of operations, which is not optional

```
1. -GENHD 64 MB
2. boot dos31.hdm with -CMOS CMOS_HDD.bin -HD0 disk.img     (DISKPAT needs a declared SCSI disk)
3. DISKPAT: unit 0, delete partitions, create one, MS-DOS, bootable, capacity A
4. COPY A:*.* C:                                            (system files onto the partition)
5. reboot with -CMOS CMOS_ONE.bin                           (so the disk is C:, not F:)
6. FORMAT C:  and give it a label
```

Step 2 needs `CMOS_HDD.bin` because the BIOS halts on an undeclared fixed disk.
Step 5 needs `CMOS_ONE.bin` because ten declared SCSI slots push the disk to `F:`.
Those two requirements pull in opposite directions, and that is the trap.

## DOS quirks that cost real time

`COPY` rejects a trailing backslash on the destination, so `copy src\*.* C:\BIN\`
copies nothing while `copy src\*.* C:\BIN` works. A single-file copy to the root still
needs `C:\`.

`dir *.obj` reports "file not found" even when matching files exist. `*.OBJ` works.

`COPY` can append a second directory entry instead of overwriting. Running the same
copy twice produced duplicate `HC386.CNF` and `HCD386P.EXP` entries, and DOS resolves
the first, which is the stale one. Run copy scripts once.

## Still open

**The High C compiler has never produced an object file.** The driver runs, builds its
argument files and invokes the extender, then the link step fails with
`/386linkp.exp/not found/in/TOOLSDIR/or/PATH`. That is a separate problem from the
disk and is not solved here.

See `bootable-dos-hdd.md` for the measurements behind the partition-table and BPB
findings.

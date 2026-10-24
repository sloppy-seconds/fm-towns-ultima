# The working set: DOS 6.2, a formatted C: and the SDK CD on Q:

**Confirmed working by the user: `DIR C:` and `DIR Q:` both succeed.** This is the
configuration that produced it, recorded with the hashes of every input so it can be
reconstructed rather than remembered.

This supersedes the DOS 3.1 configuration in `working-c-drive.md` as the one to use,
because DOS 6.2 is the only boot disk that carries both the CD driver stack and
`MSCDEX`.

## The exact launch

```
Tsugaru_CUI /roms \
  -CMOS /data/CMOS_ONE.bin \
  -FD0  /data/dos62v6.hdm \
  -HD0  /data/genhd2.img \
  -CD   /data/hc.ccd \
  -BOOTKEY F0
```

As container environment:

```
-e CMOS=/data/CMOS_ONE.bin
-e FD0_IMAGE=/data/dos62v6.hdm
-e "TSUGARU_EXTRA=-BOOTKEY F0 -HD0 /data/genhd2.img -CD /data/hc.ccd"
```

Note the entrypoint passes `-FD0UP` itself, so the floppy is writable.

## Inputs, with hashes

| file | size | sha256 (first 16) |
|---|---|---|
| `saves/genhd2.img` | 67,108,864 | `15ce8692190c8801` |
| `saves/u2dev-formatted.img` | 67,108,864 | `15ce8692190c8801` |
| `saves/CMOS_ONE.bin` | 8,192 | `60747c6674a250bd` |
| `saves/dos62v6.hdm` | 1,261,568 | `67cef7b1f74c9712` |
| `saves/hc.ccd` | 556 | `7fafb0b140805736` |
| `saves/hc.img` | 71,187,984 | `a513251ad300e1da` |

`genhd2.img` and `u2dev-formatted.img` are byte-identical: the live disk and the saved
copy of the formatted `U2DEV` volume.

## The three parts, and why each is needed

**`CMOS_ONE.bin`** declares exactly one floppy and one SCSI unit:

```
slot 0: FD   unit 2   -> A:
slot 1: SCSI unit 0   -> C:
slot 2-11: 0xff
```

With `CMOS_HDD.bin`, which declares ten SCSI units, the single attached disk lands at
`F:` behind nine phantom drives and `C:` resolves to a phantom reporting as `5:ROM`.
That is the difference between `DIR C:` working and `FORMAT C:` answering "cannot
format a ROM disk".

**`dos62v6.hdm`** is MS-DOS 6.2 L10 with the full Towns CD stack. Its `CONFIG.SYS`:

```
DEVICE=A:\DOS\HIMEM.SYS /LIM:NEW /TESTMEM:OFF
DOS=HIGH,UMB
DEVICEHIGH=A:\DOS\KKCFUNC.SYS
DEVICE=A:\DOS\OAK0.SYS
DEVICE=A:\DOS\OAK1.SYS /O1 /S0 /H1 /K0 /R1 /M2 /B1
DEVICE=A:\DOS\CDDRV.SYS /D:TOWNS_CD /U0:0
DEVICE=A:\DOS\CDISC.SYS
DEVICE=A:\DOS\TMICM.SYS /U0
FILES=30
LASTDRIVE=Z
```

and its `AUTOEXEC.BAT` mounts the CD and installs the redirector:

```
SET PATH=A:\DOS;A:\BIN
A:\SHARE.EXE
\DOS\MSCDEX /D:TOWNS_CD /K /M:8 /L:Q > NUL
\DOS\SMARTDRV  A B D+ F+ 2048
```

`/L:Q` is why the CD appears at `Q:`, not a dynamically chosen letter.

**`hc.ccd`** is the patched SDK CD, pointing at `hc.img`. Tsugaru takes `-CD` with the
`.ccd`, not the `.img`.

## `SHARE.EXE` is not optional

`A:\SHARE.EXE` in `AUTOEXEC.BAT` is load-bearing and was absent originally. `TGDRV.COM`
violates its name: it is not a device driver but an `INT 2F` network redirector client.

Disassembling its first 200 bytes shows:

```
mov dx,2f10     probe I/O port 2F10h
mov ax,0f0f     write
out dx,ax
cmp ax,f0f0     read back
jnz fail
mov ax,5555
out dx,ax
cmp ax,aaaa     VNDRV signature
jnz fail
mov ax,6809
int 2f          redirector install call
```

Without a redirector registered, `int 2F AX=6809` fails, and TGDRV prints
`TGDRV has not been installed` and returns. `SHARE.EXE`, from the MS-DOS 3.1 system
disk, registers that interface. With it loaded, TGDRV mounts the host share.

## The disk

`saves/u2dev-formatted.img` is a 64 MB MS-DOS hard disk, volume label `U2DEV`, created
by `FORMAT` running inside the guest. Its BPB is at byte 1536:

```
bytes per sector    2048
sectors per cluster 2
reserved sectors    1
FATs                2
root entries     1024
total sectors   32767
media            0xfa
sectors per FAT    32
volume bytes   67,106,816
```

**2048-byte sectors** is why host-side scans reported no BPB: they looked for 512, 1024
and 4096. `mtools` also refuses the image, because it requires a BIOS partition table
and this disk uses the FM Towns table at `0x200`. **The guest is the only reader.**

`FORMAT` is what made the disk real. `DISKPAT` created the partition and copied system
files but wrote no BPB and no FAT, so `DIR C:` worked once from emulator memory and
ARF'd after a restart.

## Order of operations, which is not optional

```
1. -GENHD 64 MB
2. boot dos31.hdm with -CMOS CMOS_HDD.bin -HD0 disk.img   DISKPAT needs a declared SCSI disk
3. DISKPAT: unit 0, delete partitions, create one, MS-DOS, bootable, capacity A
4. COPY A:*.* C:                                           system files onto the partition
5. boot dos62v6.hdm with -CMOS CMOS_ONE.bin                so the disk is C:, not F:
6. FORMAT C:  and give it a label (U2DEV)
```

Steps 2 and 5 need different CMOS files, and that is the trap. The BIOS halts on a
fixed disk that CMOS does not declare, so `DISKPAT` needs `CMOS_HDD.bin`. Ten declared
SCSI slots push the disk to `F:`, so `FORMAT` needs `CMOS_ONE.bin`.

## What this enables

`C:` is writable with roughly 63 MB free and `Q:` is the SDK CD. The compiler kit can
now be copied from the CD onto the disk with guest-side `COPY`, which is the one
operation known to work:

```
MD C:\BIN
COPY Q:\HC386\BIN\*.* C:\BIN
COPY Q:\HC386\SMALL\*.* C:\SMALL
COPY Q:\INC\*.* C:\INC
```

Recall that `COPY` rejects a trailing backslash on the destination.

## Still open

**The High C compiler has never produced an object file.** The driver runs, builds its
argument files, invokes the extender, and the link step fails with
`/386linkp.exp/not found/in/TOOLSDIR/or/PATH`. That is a separate problem, and having a
writable `C:` removes the last excuse for it.

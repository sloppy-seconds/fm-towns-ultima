# Two floppies instead of a CD: DOS on A:, the compiler on B:

`Q:` never works on the MS-DOS 6.2 boot disk, so the CD is not a usable place for the kit. **The replacement is a
second floppy.**

## Why a second floppy and not a hard disk

The kit is 5.2 MB and a 1,232 KB floppy cannot hold it. But **a compiler needs far less than the whole kit**:

| file | size | needed |
|---|---|---|
| `hc386.exe` | 61,888 | the driver |
| `hcd386p.exp` | 670,437 | the code generator |
| `hc386.cnf` | 82,392 | driver configuration |
| **total** | **814,717** | fits a 1,232 KB floppy with room for output |

Headers (`inc/`, 146,367 bytes) also fit. Libraries are only needed to link, not to compile.

## Building it

```
dd if=/dev/zero of=hckit.hdm bs=1024 count=1232
mkfs.fat -F 12 -n HCKIT hckit.hdm
mmd -i hckit.hdm ::BIN ::INC
mcopy -i hckit.hdm hc386/bin/hc386.exe   ::BIN/HC386.EXE
mcopy -i hckit.hdm hc386/bin/hcd386p.exp ::BIN/HCD386P.EXP
mcopy -i hckit.hdm hc386/bin/hc386.cnf   ::BIN/HC386.CNF
```

**210,944 bytes remain free**, which is enough for object files.

## Attaching it

**The container's entrypoint supports `FD0` only, not `FD1`.** Passing `FD1_IMAGE` as an environment variable does
nothing, and the launch line shows no second drive. The second floppy has to go through `TSUGARU_EXTRA`:

```
-e FD0_IMAGE=/data/dos62v6.hdm
-e "TSUGARU_EXTRA=-BOOTKEY F0 -FD1 /data/hckit.hdm"
```

which produces

```
Tsugaru_CUI /roms -CMOS /data/CMOS.BIN -FD0 /data/dos62v6.hdm -FD0UP -BOOTKEY F0 -FD1 /data/hckit.hdm
```

## Why this removes the whole CD problem

The DOS disk's `config.sys` can then drop every CD driver:

```
DEVICE \DOS\OAK0.SYS
DEVICE \DOS\OAK1.SYS ...
DEVICE \DOS\CDDRV.SYS /D:TOWNS_CD
DEVICE \DOS\CDISC.SYS
```

and its `autoexec` can drop `MSCDEX`. **No CD means no `Q:`, no `MSCDEX` failure, no device-name mismatch, and no
read-only filesystem.** Both floppies are writable and `B:` needs no driver at all, because DOS has supported two
floppy drives since 1.0.

## What this does not solve

**Extended memory.** `hc386.exe` is a Phar Lap extender and `HIMEM.SYS` does not load on this machine, while the
Fujitsu alternative `CTL.SYS` hangs the boot entirely. Whatever the compiler reports next, memory remains the
outstanding candidate.

**Not yet confirmed whether `B:` is writable.** `FD1` was passed without a write-enable equivalent of `FD0UP`, and
no object file appeared on the image after a compile attempt, so either the compile failed or the drive is mounted
read-only.

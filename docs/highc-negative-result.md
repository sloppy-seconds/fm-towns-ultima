# The High C escalation: a negative result, recorded

Three compilers were obtained and one was made to run. **None of them has produced a usable object file**, and the
reasons are now all known. This page is the conclusion of that line of work, so it is not repeated.

## What was proved, and it is still worth having

**v2.31 is not the compiler that built Ultima II.** The discrimination is division.

The game's own routine at `0xe6a58` contains two division forms in twelve bytes:

```
0x0e6a0f  lea eax,[esi-6] / cdq / sub / sar 1  x3     (esi-6)/8, three halvings
0x0e6a2c  sub eax,0x4 / cdq / mov ecx,0x10 / idiv ecx     (f-4)/16, hardware divide
```

v2.31 emits a bias-then-shift reciprocal for the same source, at `-O0`, `-O1`, `-O2`, `-O4` and `-O6` alike:

```
sar eax,2 / shr eax,0x1d / add eax,ecx / sar eax,3
```

And image-wide the counts settle it: **83 `idiv`/`imul` forms, 31 `cdq/sub/sar` chains, and exactly one
magic-multiply reciprocal in 1,071,886 bytes.** The game almost never uses the form v2.31 produces by default.

**The SDK's High C V1.7 needs TownsOS, and it runs there.** Under DOSBox it hangs with no output. Under the real
TownsOS reached by the patched CD it starts and prints its usage:

```
Q:\>Q:\HC386\BIN\HC386.EXE
(Q:\HC386\BIN\HC386:) No files specified.
```

That is the single most important finding in this line of work: the compiler is not broken, it needed its own OS.

## Why no object file was produced

**Four separate blockers, each found by eliminating the one before.**

**1. `hc386.exe` stages temporary files before it compiles.** From the binary's own strings:

```
TMP.ZZZ   SWAPTMP   TMPPREFIX   %sarg%-d.tmp   \tmp.xxx
```

`TMPPREFIX` names the scratch directory. Unset, and with every volume read-only, the driver has nowhere to stage a
pass and cannot start. **This single fact explains every silent failure**, and none of the earlier theories did:
running bare succeeded because it rejected the arguments before needing scratch space, and every attempt with a
source file failed because by then it did.

There is a flag for it: **`-Hbatchnotmp`**, alongside `-Hbatch`, `-Hkeep`, `-Hnoswap=` and `-Hon=`/`-Hoff=`.

**2. The `Q:\>` prompt is not a DOS shell.** Tested, not assumed:

| command | result |
|---|---|
| `CLS` | `Wrong Command or File Name.` |
| `A:` | `Wrong Command or File Name.` |
| `COPY` | **`COPY to be implemented`** |
| `ECHO X > FILE` | `Sorry, redirection and pipe are not supported yet.` |
| `Q:\...\HC386.EXE` | runs |

**The shell cannot write files by any means.** No redirection, `COPY` is a stub. So no plan involving `COPY CON` or
capturing output to a file could ever have worked.

**3. There are no drive letters beyond the CD.** The SRAM drive table, read on the host with `CMOSSAVE`, holds
exactly three letters: `0x569 'C'`, `0x573 'Z'`, `0x57e 'X'`. No `A`. `Q:` is assigned at runtime by
`MSCDEX /L:Q`. `FD0LOAD` reports `Loaded FD image` and then **changes no byte of the SRAM table**, because
`config.sys` contains no floppy driver.

**4. ISO9660 is read-only by design.** The container mounted the CD image read-only, which was a real mistake and
was corrected, but correcting it does not make a CD filesystem writable. **A `.OBJ` can never land on `Q:`.**

## What is missing, stated plainly

**One artefact: a writable volume.** Every other piece is in place and verified.

| need | status |
|---|---|
| the compiler | present, runs under TownsOS |
| the shell to launch it | present, `Q:\>` |
| a writable temp directory | **absent** |
| a writable output volume | **absent** |

A CD cannot supply either. A floppy image gives no drive letter without a driver in `config.sys`, and no hard disk
image exists in the project.

## The route that would work, and it was already on this machine

**A bootable, writable TownsOS hard disk with a High C compiler already on it.** `docs/save-disk.md` had documented
it all along, and nobody connected the two.

```
disk/TownsHDD_V1.HDM     15,931,539,456 bytes
disk/CMOS.DAT            8,192 bytes
```

The page records that this image boots to a **Towns OS V2.1 L40 desktop** when launched as

```
-CMOS /data/CMOS_HDD.bin -HD0 /disk/TownsHDD_V1.HDM -BOOTKEY H0
```

and, crucially, that it carries a High C compiler. Verified directly by searching the raw image:

```
find 'HC386'    -> 0xa2ece78
context         -> "-STACK 64000 / -LIB / \HC386\SMALL\SND / \HC386\SMALL\TBIOS
                    / \HC386\SMALL\CDRFRB / \HC386\SMALL\FMCFRB"
```

`\HC386\SMALL\` is the compiler's own library directory, named in a compiler invocation script inside the image.

**The CMOS is what makes it boot.** The same page records that Tsugaru does not scan for partitions: it reads the
drive assignment from CMOS, and a fresh CMOS finds no bootable partition and stops at the IPL. The supplied
`CMOS.DAT` is therefore not optional.

**So the missing artefact was never missing.** A writable volume with a working compiler has been sitting in
`disk/` for the whole of this work, and the reason it was not found is that the negative result was framed as "a CD
cannot be made writable" rather than "some writable volume is needed". The question that should have been asked
first is which writable volumes the project already has.

## The route that would work, untried

**A bootable hard disk image holding a copy of the kit.** Then `C:` is writable, the source is already on it, and
one command does the lot with no XMODEM, no `COPY CON` and no drive switching:

```
C:\HC386\BIN\HC386.EXE C:\TEST_DIV.C C:\TEST_DIV.OBJ
```

with `TMPPREFIX=C:\` and, if that is not enough, `-Hbatchnotmp`.

The obstacle is that `COMMAND.COM`, `MSDOS.SYS` and a floppy driver are not on the kit disc, so the image needs a
system from somewhere else. That is a sourcing problem rather than a puzzle.

## The method lesson, which is the real cost

**Every wrong turn came from inferring a requirement instead of measuring it.** `COMMAND.COM` absent from a listing
became "needs a boot disk". `q:\run386.exe` in `hc386.cnf` was patched to `C:` when `Q:` was correct all along.
`config.sys` naming `C:` became "needs a hard disk". A read-only mount was assumed read-write.

Each cost hours. Each was answerable in one command. **The findings that held were the ones read out of the binary
or counted from the image**, and the temp-file requirement, the division discriminator and the SRAM drive table were
all found that way.

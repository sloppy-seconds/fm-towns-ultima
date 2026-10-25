# The compile blocker: TownsMENU and a writable volume are mutually exclusive

**Correction, later the same day: this page is accurate but no longer load-
bearing.** The compiler was proven to work without TownsMENU at all, through the
kit's DOS-native generator `HCD386.EXE`. See [highc-compile-success.md](highc-compile-success.md).
The trilemma below only blocks the driver-plus-RUN386 route.

**Goal:** compile `HELLO.C` to a `.OBJ` with the SDK CD's own HC386, inside Tsugaru, with
TownsMENU running, writing output to a writable volume.

**Not achieved.** This page records precisely why, because the reason is now narrow and
fully characterised rather than vague.

## What was proven first

`docs/townsmenu-boots.md` established that TownsMENU runs, that the CD boots, that the
mouse works with a held button, and that `RUN386` was silent only because no Towns window
system was present. All of that still holds.

The compiler kit on the CD is complete and was confirmed by listing:

```
Q:\HC386\BIN     hc386.exe  hcd386.exe  hcd386p.exp  386link.exe  386linkp.exp
                 hc386.cnf  hc386set.cnf  config.exe  autocfig.exe  xref.exe
Q:\HC386\DEMOS   hello.c  analyze.c  dry.c  fbench.c  greycode.c  matmult.c  msieve.c
Q:\HC386\INC  Q:\HC386\LIB  Q:\HC386\SMALL  Q:\HC386\EXAMPLES
```

`hc386.exe` is a DOS `.EXE`. `hcd386p.exp` is the P3 image that needs `RUN386`. So the
chain is `hc386.exe` -> `RUN386 hcd386p.exp` -> Towns window, which is exactly why
TownsMENU is required.

## The blocker, stated exactly

**The CD's own DOS shell has no writable volume and no redirection.**

Booting the CD (`CDLOAD /data/hc.ccd` then `RESET CD`) reaches `Q:\>`. Probing every
drive letter in that shell:

```
Q:\>A:   Wrong Command or File Name.
Q:\>B:   Wrong Command or File Name.
Q:\>C:   Wrong Command or File Name.
Q:\>D:   Wrong Command or File Name.
Q:\>E:   Wrong Command or File Name.
Q:\>R:   Wrong Command or File Name.
```

**`Q:` is the only volume the CD's DOS exposes, and a CD-ROM is read-only.**

Worse, that shell is not a full `COMMAND.COM`. Attempting a redirect:

```
Q:\>ECHO TEST > B:\MARKER.TXT
Sorry, redirection and pipe are not supported yet.
JUST executing without redirection/pipe.
TEST
```

That message is from a stripped-down shell, not Microsoft `COMMAND.COM`. A C compiler
driver stages temporary files and relies on redirection, so it cannot run there even if a
writable volume existed.

**This explains the CD's own `AUTOEXEC.BAT`.** It contains:

```
SHELL=C:\COMMAND.COM C:\ /P      (in CONFIG.SYS)
C:MSCDEX /D:TOWNS_CD /M:8 /L:Q > NUL     (in AUTOEXEC.BAT)
```

Both reference `C:`. **The CD is designed to boot alongside a hard disk carrying a real
DOS.** The crippled shell is the fallback when there is no `C:`, and the fallback is not
usable for compilation.

## Why the hard disk did not supply C:

Three disks were tried with `-HD0` under `CMOS_ONE.bin`, and `C:` was unreachable in every
combination:

| disk | size | result |
|---|---|---|
| `saves/hd8.img` | 8 MB | `C:` bad command, from the CD boot and from the DOS 6.2 boot |
| `saves/genhd2.img` | 64 MB | `C:` bad command, from both boots |
| none attached | - | no `C:` |

`docs/working-set.md` records `genhd2.img` as giving a working `C:`. **That no longer
reproduces.** Neither image carries DOS system files, which was confirmed by reading their
root directories:

```
hd8.img      root entries 6,  no IO.SYS, no COMMAND.COM, no MSDOS.SYS
genhd2.img   root entries 5,  no IO.SYS, no COMMAND.COM, no MSDOS.SYS
```

So even when `C:` is visible it is a data volume, not a DOS one, and the CD's
`SHELL=C:\COMMAND.COM` cannot be satisfied by either.

## Why the DOS 6.2 floppy could not host TownsMENU instead

The reverse route was built and booted. A copy of the working DOS 6.2 floppy gained
`TOWNS.SYS`, `GDS.SYS` and `MOUSE.SYS` from the CD, plus three `DEVICE=` lines and the
CD's Towns bootstrap appended to `AUTOEXEC.BAT`. `HIMEM.SYS`, `DOS=HIGH` and `SMARTDRV`
were removed because the FM Towns has no XMS and `CoCo` reported
`CoCo が管理するメモリがありません` while they were present.

That boots to a genuine `A:\>` with DOS 6.2 and a writable floppy, which is the best
position reached. It fails on two independent counts:

**The CD will not mount.** `MSCDEX` initialises at boot before the disc is seated, reports
`MSCDEX Version 2.23 はすでに起動されています` when re-run, and never assigns `Q:`.
`CDLOAD` after boot does not retroactively mount, and `CDEJECT` plus `CDLOAD` plus a fresh
`MSCDEX /D:TOWNS_CD /K /M:8 /L:Q` answers `不正なオプションです`, invalid option. Without
`Q:` there is no compiler and no `CONTROL`.

**`CoCo` still fails**, so the Towns memory layer never initialises and `SIDEWORK` returns
an error immediately after it.

## Why the TownsOS 2.1 floppy could not host it either

That floppy boots to a real DOS prompt with all the Towns drivers, but its `COMMAND.COM`
is version 3.10, and `MSCDEX` 2.23 requires DOS 3.2 or later. Replacing `COMMAND.COM` with
the DOS 6.2 copy produces a boot that hangs immediately after the copyright banner:
**`COMMAND.COM` 6.20 cannot run on `IO.SYS` 3.10.** The two are a matched pair and cannot
be mixed.

## The constraint, in one paragraph

TownsMENU needs the Towns window drivers, which must load at boot from the boot volume.
A full DOS shell with redirection needs DOS 5 or later. `MSCDEX` needs DOS 3.2 or later.
The only image that boots TownsMENU is the CD, and the CD's own DOS is 3.10-era and
stripped of redirection. The only images with a modern DOS are the DOS 6.2 floppy and the
DOS 6.2 hard disk, and neither can bring up TownsMENU because `CoCo` fails and the CD will
not mount. **No single boot configuration satisfies all three requirements at once.**

## What would actually break it

Any one of these, in rough order of cost:

1. **A hard disk with DOS 6.2 installed on it**, so the CD's `SHELL=C:\COMMAND.COM` and
   `C:MSCDEX` both resolve. This is what the CD was built to expect. It needs `SYS C:` plus
   `COMMAND.COM` plus `MSCDEX.EXE` on `C:`, and it needs `C:` to be reachable at all, which
   today it is not.
2. **Getting `Q:` to mount from the DOS 6.2 floppy.** The blocker is MSCDEX ordering. A
   configuration where the disc is genuinely seated before `AUTOEXEC` runs would fix it,
   and `-CD` on the command line is not achieving that.
3. **Making `CoCo` succeed** on the DOS 6.2 plus Towns floppy. It reports no memory to
   manage even with the HMA free, which suggests it needs a Towns memory bank that the
   current CMOS or machine model is not providing.

Option 1 is the intended design and the most likely to work. Option 2 is closest to the
current best state.

## Artefacts produced

| file | what it is |
|---|---|
| `saves/towns62.hdm` | DOS 6.2 floppy plus `TOWNS.SYS`, `GDS.SYS`, `MOUSE.SYS`, Towns bootstrap. Boots to a writable `A:\>`. Best starting point. |
| `saves/towns-dos62.hdm` | TownsOS 2.1 floppy with DOS 6.2 `COMMAND.COM`. **Does not boot**, version mismatch, kept as a negative result. |
| `saves/work.hdm` | blank 1232 KB floppy from `-GENFD`, unformatted |

## Input handling, reconfirmed under load

The yen key is accepted by DOS as a path separator, which is the only way to type a path
into the guest today:

```
CD ¥DOS        works, lands as CD \DOS
```

`/api/keys` still drops backslashes. The `supervisor.js` mapping was added but
`intl_backslash` was never observed to land a `0x5C` in the guest, so treat the yen route
as the working one and the fix as unverified.

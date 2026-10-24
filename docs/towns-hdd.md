# The TownsOS hard disk already on this machine

`disk/TownsHDD_V1.HDM` is a **15,931,539,456-byte bootable FM Towns hard disk**, and it carries a **High C
compiler**. It has been in the repository for the whole of the compiler work and nobody connected the two. This
page records what it is and how to boot it.

## Why it matters

Every attempt to use the High C kit from the CD failed, and the conclusion was that a **writable volume** was
missing. That was wrong. The writable volume was already here.

| need | before | actually |
|---|---|---|
| the compiler | CD, read-only | **on this disk** |
| a writable volume | thought absent | **`C:` and friends, writable** |
| TownsOS | reached via a patched CD | **installed on the disk** |

## Booting it

```
-CMOS /data/CMOS_HDD.bin -HD0 /disk/TownsHDD_V1.HDM -BOOTKEY H0
```

**The CMOS is not optional.** `docs/save-disk.md` records that Tsugaru does not scan for partitions, it reads the
drive assignment from CMOS, and a fresh CMOS finds no bootable partition and stops at the IPL. `disk/CMOS.DAT` is the
file that makes it boot, copied here to `saves/CMOS_HDD.bin`.

Verified: the machine reaches the **Towns OS V2.1 L40 graphical desktop**, with the drive-selection window showing
drive icons and a file-manager window titled `G: TOWNSYSTEM` reporting `5,660/129,664 [KB]` used. That window also
offers an `FM-DOSYS` icon, which is the DOS environment launcher.

## The compiler is on it, and here is the proof

Searching the raw image for the compiler's own directory name finds a real FAT directory entry:

```
'HC386      '  attribute 0x10 (directory)   at 0x38b20e20
```

and a compiler invocation script nearby that names the library structure:

```
\\HC386\\USERLIB\\YS-11
\\HC386\\USERLIB\\YS3DG
\\HC386\\USERLIB\\YSHUD
\\HC386\\SMALL\\SND
\\HC386\\SMALL\\TBIOS
\\HC386\\SMALL\\CDRFRB
```

`\\HC386\\SMALL\\` and `\\HC386\\USERLIB\\` are the kit's own library directories, so this is the same product family
as the CD.

## What remains

**Reaching a command prompt on the hard disk build.** The desktop is graphical, as TownsOS always is, and the
`FM-DOSYS` icon is the route to DOS. Two ways in, neither yet done:

- the icon, which needs a pointer click, and the click geometry on this build has not been measured
- whatever keyboard route TownsOS offers to a console, which would avoid pointer input entirely

Once at a prompt the whole pipeline is one command, because `C:` is writable and the source can simply be placed
there from the host by writing into the image:

```
C:\HC386\BIN\HC386.EXE C:\TEST_DIV.C C:\TEST_DIV.OBJ
```

with `TMPPREFIX=C:\` and, if the driver still objects, `-Hbatchnotmp`.

## The lesson, which is now the fifth instance of the same one

The problem was posed as **"a CD cannot be made writable"**. It should have been posed as **"a writable volume is
needed"**, and the first question then answers itself by looking at what the project already has rather than at what
would have to be constructed.

The findings that held up in this line of work were read out of a binary or counted from an image. Every hour lost
was spent inferring a requirement from an incidental detail: a missing filename in a directory listing, a path string
in a config file, a mount flag.

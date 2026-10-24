# Building a minimal bootable build disk: what is present and what is missing

The proposal was to assemble a bootable disk containing only the SDK and a DOS prompt, from the FM Towns media
already on this machine. This page records the inventory that answers it, measured rather than assumed.

## What is available

**From the SDK CD** (`references/metaware/High C Compiler Multimedia Kaihatsu Kit V1.7 L13 (Japan).7z`):

| file | present |
|---|---|
| `io.sys` | **yes** |
| `towns.sys` | **yes** |
| `console.exe` | **yes** |
| `sys/ctl.sys`, `oak0.sys`, `oak1.sys`, `gds.sys`, `t_kanji.sys`, `mouse.sys`, `escp.sys`, `ticm.sys` | **yes** |
| `tbios/tbiosld.sys` plus 17 `.bin` firmwares | **yes** |
| `exe/mscdex.exe`, `exe/format.com` | **yes** |
| the whole `hc386/` kit | **yes**, 5.1 MB |

**Host tooling:** `mkfs.fat`, `mcopy`, `mmd`, `mdel`, `mtype`, `mdir` are all present.

**From the 15.9 GB TownsOS hard disk** (`disk/TownsHDD_V1.HDM`), a `DEVELOPMENT` partition was located and its
directory read directly:

```
DEVELOPM.ENT   attr=0x28      (volume label)
HC386          attr=0x10      cluster 2        directory
AUTOEXEC.BAT   attr=0x20      cluster 3841     56 bytes
386ASM         attr=0x10      cluster 3842     directory
FB386.EXP      attr=0x20      cluster 4062     419,952 bytes
FB386M.EXP     attr=0x20      cluster 4165     611,216 bytes
```

## What is missing, and it is the decisive one

**`COMMAND.COM` is not on any media this project holds.** A byte search across the entire 15.9 GB volume returns
nothing, and it is likewise absent from the SDK CD and the Trilogy CD.

**TownsOS does not use it.** It supplies its own command processor, `console.exe`, which is why the patched CD
reaches a `Q:\>` prompt with no `COMMAND.COM` present and why `config.sys` naming `SHELL=C:\COMMAND.COM` is
satisfied by something else.

## Why that stops the straightforward build

A minimal MS-DOS-style boot disk needs a shell whose behaviour is known. `console.exe` is the shell that actually
exists here, and it was measured earlier:

```
CLS                 Wrong Command or File Name.
COPY                COPY to be implemented
ECHO X > FILE       Sorry, redirection and pipe are not supported yet.
```

**That is not a DOS.** A disk built around it would inherit exactly the limitations that made the CD route fail:
no redirection, no file writing, no drive switching.

## What this means

**A disk built from what is on this machine would not be better than the TownsOS hard disk that already boots.** The
hard disk has the compiler, a working `C:` and a full GUI. What it lacks is a scriptable shell, and building a new
image from the same components does not supply one.

**The thing that would change the outcome is a real FM Towns MS-DOS**, which is the one artefact not present. With
`COMMAND.COM` and `MSDOS.SYS` from an FM Towns DOS disk, the rest of the assembly is already possible: every driver,
the TBIOS firmware, the kit, and the host tools are all here.

## The honest recommendation

Do not build a custom image yet. The components available would reproduce the limitations already encountered.

Either use the TownsOS hard disk as it stands, accepting that reaching DOS needs a GUI, or obtain an FM Towns DOS
disk to supply the shell. The second is a sourcing problem, and it is the only one left.

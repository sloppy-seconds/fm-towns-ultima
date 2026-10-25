# Compiling a C program on FM Towns: the whole recipe, frozen

**This page exists so nobody repeats the investigation.** It is the complete,
literal, copy-pasteable recipe for compiling a C file to an object file with
the FM Towns High C toolchain inside Tsugaru. Every command, every image, every
setting and every trap is here. `docs/highc-compile-success.md` explains *why*
this route works. `docs/highc-plot-calibration.md` records what the output is
worth. This page is the how.

If you only read one section, read **The one thing that matters** and **The
five-minute version**.

## The one thing that matters

The SDK CD ships the code generator twice:

| file | on the CD at | needs |
|---|---|---|
| `HCD386P.EXP` | `HC386\BIN\` | `RUN386`, which needs TownsMENU, which needs a boot config that cannot coexist with a writable volume |
| **`HCD386.EXE`** | `HC386\BIN\` | **nothing. Plain DOS. Use this one.** |

`HCD386.EXE` is the real-mode DOS code generator. It does not need
`RUN386`, does not need TownsMENU, does not need the Towns window system and
does not need a hard disk. It needs DOS with a writable volume and the CD
mounted. That is all.

The CD's own `HC386\BIN\DEMO.BAT` confirms this is supported: it branches to
`hcd386` when `bin\hcdriver.exe` is absent. Fujitsu shipped exactly this path.

**Ignore `HC386.EXE` too.** That is the *driver*. It stages `ARG0.TMP` files
and invokes `RUN386 HCD386P.EXP`, so it drags in the whole TownsMENU problem.
Call the generator directly.

## The five-minute version

From the repo root, with the emulator container already running (see
**Standing up the emulator** below):

```bash
./tools/compile-proof.sh
```

That is the whole thing. It places a source file into a copy of the DOS floppy,
boots it, compiles, and prints the object file twice: once from a `DIR` the
guest itself ran, once from the host with `mtools`. If it prints `PASS`, the
toolchain works.

For the calibration function:

```bash
./tools/plot-proof.sh
```

## Standing up the emulator

### What must be on disk

| thing | path | notes |
|---|---|---|
| Tsugaru binaries | `vendor/emulator/` | fetched by `./tools/vendor.sh`, gitignored |
| FM Towns ROMs | `vendor/roms/` | `./tools/vendor.sh --roms`, gitignored |
| SDK CD image | `saves/hc.img` + `saves/hc.ccd` | 71,187,984 and 556 bytes, gitignored |
| DOS 6.2 boot floppy | `saves/dos62v6.hdm` | 1,261,568 bytes, gitignored |
| CMOS | `saves/CMOS_HDD.bin` | 8,192 bytes, gitignored |

ROMs present and used: `FMT_DIC.ROM`, `FMT_DOS.ROM`, `FMT_F20.ROM`,
`FMT_FNT.ROM`, `FMT_SYS.ROM`.

Checksums of the images this recipe was verified against:

```
dos62v6.hdm   0e9dc55908021f4300bd081113d6695fdf4080f929f05b6ea371abeda81fa85f
hc.img        a513251ad300e1dadc76cd0aa724ea309319d0a8a760a8f1aed44919b7f42c8c
hc.ccd        7fafb0b140805736940701a525167787862c9909cec7712580a4b9578e955470
CMOS_HDD.bin  e6ee5a95d8d1f7eee77794a738297b8222af32d7b4080ea070329317459598db
```

**`dos62v6.hdm` must be the pristine image.** The scripts copy it before use.
If the guest was ever allowed to boot it read-write and write to it, restore a
clean copy, because `HELLO.OBJ` and other test files otherwise linger in every
directory listing and confuse later readings.

**`hc.img` must be the raw 2352-byte-per-sector disc image**, not a converted
ISO. See **The CD**, below, for why the sector offset matters.

### The container

The emulator runs in a rootless podman container that owns an Xvfb display, so
the game is drivable over HTTP with no monitor. Everything needed is in
`container/`.

```bash
./tools/container-run.sh start      # build if needed, start, print URLs
./tools/container-run.sh status
./tools/container-run.sh stop
```

The script handles three host quirks that each fail silently:
podman needs `sudo` here (user not in the `podman` group), SELinux is enforcing
so every bind mount needs `:z`, and the Tsugaru window is titled
`FM Towns Emulator - TSUGARU` at 640x496 so matching on 640x480 finds nothing.

**The container settings this recipe needs** are the ones the currently
running instance uses. Verified by `podman inspect dosboot`:

```
IMAGE   localhost/fmtowns:latest
MOUNTS  vendor/roms        -> /roms        (read only)
        vendor/emulator    -> /emulator    (read only)
        saves              -> /data        (read write)
ENV     ROM_DIR=/roms
        API_PORT=8080
        RESOLUTION=1024x768x24
        FD0_IMAGE=/data/dos62v6.hdm
        CMOS=/data/CMOS_HDD.bin
        TSUGARU_EXTRA=-BOOTKEY F0 -HD0 /data/genhd2.img -CD /data/hc.ccd
```

Which the entrypoint expands to:

```
Tsugaru_CUI /roms -CD /data/hc.ccd -CMOS /data/CMOS_HDD.bin \
    -FD0 /data/dos62v6.hdm -FD0UP \
    -BOOTKEY F0 -HD0 /data/genhd2.img -CD /data/hc.ccd
```

Points that are load bearing:

- **`-CD` at launch, not `CDLOAD` afterwards.** `MSCDEX` runs from
  `AUTOEXEC.BAT` at boot. If the disc is not seated at power-on, `MSCDEX`
  initialises with no media, assigns no drive letter, and `Q:` never appears.
  Loading the disc afterwards does not retroactively mount it. This is the
  ordering bug recorded in `docs/compile-blocker.md` and it is the single most
  common way this recipe fails.
- **`-FD0UP`.** Tsugaru write-protects floppies by default. Without it the
  emulator boots fine and every guest write silently does nothing.
- **`-BOOTKEY F0`** boots the floppy rather than the hard disk.
- **`-HD0 /data/genhd2.img`** is attached but not needed and not booted. It is
  harmless. It has no DOS system files, so do not expect it to boot.
- **`RESOLUTION=1024x768x24`.** The VM screen occupies a 640x496 region at
  `(2, 40)` in the capture. Screen reads are 1:1, so a VM coordinate `(x, y)`
  is capture `(x + 2, y + 40)`. The older note saying `(x+2, y+8)` measured a
  different window decoration and is wrong for this resolution.

If the container is not running:

```bash
sudo -v                                     # ask for the sudo ticket once
podman run -d --name dosboot --rm \
  -p 6080:6080 -p 5900:5900 -p 8096:8080 \
  -v "$PWD/vendor/emulator:/emulator:ro,z" \
  -v "$PWD/vendor/roms:/roms:ro,z" \
  -v "$PWD/saves:/data:z" \
  -e RESOLUTION=1024x768x24 \
  -e ROM_DIR=/roms \
  -e API_PORT=8080 \
  -e FD0_IMAGE=/data/dos62v6.hdm \
  -e CMOS=/data/CMOS_HDD.bin \
  -e "TSUGARU_EXTRA=-BOOTKEY F0 -HD0 /data/genhd2.img -CD /data/hc.ccd" \
  localhost/fmtowns:latest
```

`localhost/fmtowns:latest` is built by `tools/container-run.sh` from
`container/Containerfile`. Build it with
`podman build -t fmtowns -f container/Containerfile .` if it is missing.

**The API must be reached on `127.0.0.1` or `localhost`, never `[::1]`.**
`curl -s localhost:8096/api/status` works. An IPv6 resolution can fail or
silently return another service. The scripts always use `127.0.0.1`.

## The disks

### The boot floppy: `saves/dos62v6.hdm`

MS-DOS 6.20 on a 1,232 KB FM Towns 2HD floppy (1,261,568 bytes). FAT12, volume
label `D62P3`. Booting it gives `A:\>` with DOS 6.20 and the CD mounted.

`CONFIG.SYS`, the working one:

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

`AUTOEXEC.BAT`:

```
@ECHO OFF
PROMPT $P$G
SET PATH=A:\DOS;A:\BIN
A:\SHARE.EXE
\DOS\MSCDEX /D:TOWNS_CD /K /M:8 /L:Q > NUL
\DOS\SMARTDRV  A B D+ F+ 2048
```

`CDDRV.SYS` and `CDISC.SYS` own `TOWNS_CD`, `MSCDEX` claims it as `Q:`,
`OAK0/OAK1` provide the Towns SCSI/IDE layer. Nothing else is required to
compile.

**Do not add `CTL.SYS` from the CD to this `CONFIG.SYS`.** It hangs the boot
before `AUTOEXEC` runs, with no diagnostic. Tested twice, in two device orders.
`CTL.SYS` works on the TownsOS 2.1 floppy because that DOS is 3.10.

**Do not add `TOWNS.SYS`, `GDS.SYS` or `MOUSE.SYS` either.** They load and
boot, but they are for the TownsMENU route and they buy nothing here. Adding
them only widens what can break.

### The CD: `saves/hc.img` + `saves/hc.ccd`

The High C Compiler Multi Kit V17L13 SDK. Volume label
`HIGH_C_COMPILER_MULTI_KIT_V22L13_FUJITSU_LIMITED_1995_02_21`.

`hc.img` is **raw 2352-byte sectors with a 16-byte sync/header pre-gap per
sector**. The ISO payload starts 16 bytes into each sector, not 12 and not 0.
To extract the ISO contents on the host:

```bash
python3 - <<'EOF'
src=open('saves/hc.img','rb'); out=open('/var/tmp/hc_iso.iso','wb')
while True:
    s=src.read(2352)
    if len(s)<2352: break
    out.write(s[16:2064])
EOF
7z x -o/var/tmp/hciso /var/tmp/hc_iso.iso
```

That yields the CD tree, including `HC386\BIN\`, `HC386\INC\`,
`HC386\SMALL\`, `RUN386.EXE`, `AUTOEXEC.BAT`, `CONFIG.SYS`, `SYS\`,
`TBIOS\`, `HCOPY\`, `SIDEWORK\`, `SYSINIT\`, `NSDD\` and `CONTROL.EXE`.

That extraction is **read-only reference material**. Nothing in the working
recipe needs it. It is there so you can check what a file is without booting.

### Inside the guest, the relevant paths

```
Q:\HC386\BIN\HCD386.EXE      the code generator. This is the one to call.  698,816 bytes
Q:\HC386\BIN\HC386.EXE       the driver. Needs RUN386. Do not use.           61,888 bytes
Q:\HC386\BIN\HCD386P.EXP     the P3 generator. Needs RUN386. Do not use.   670,437 bytes
Q:\HC386\BIN\386LINK.EXE     the linker. Untested here.                    192,192 bytes
Q:\HC386\INC\                headers
Q:\HC386\SMALL\              libraries, used only at link time
Q:\HC386\DEMOS\HELLO.C       Fujitsu's own hello world
Q:\RUN386.EXE                at the disc root, not in BIN
Q:\CONTROL.EXE               at the disc root, the TownsMENU launcher
```

## The compile, step by step

### 1. Put your source on the floppy, from the host

The guest cannot see files written into an image that is already loaded. Put
everything in the image **before** `FD0LOAD`, and use CRLF line endings.

```bash
cp saves/dos62v6.hdm saves/mywork.hdm
printf 'extern int printf();\r\n\r\nvoid main () {\r\n   printf("Hello, world.\\n");\r\n   }\r\n' \
  > /var/tmp/hello.c
mcopy /var/tmp/hello.c -i saves/mywork.hdm ::HELLO.C
```

`mcopy`, `mdir`, `mtype`, `mdel` come from `mtools` and read the image with no
guest involvement.

### 2. Put the compile in a batch file

Do not type the command line. The batch file carries the redirection that the
guest keyboard cannot produce (see **Input traps**).

```
@ECHO OFF
CD \
SET HCDIR=Q:\HC386
SET TOOLSDIR=Q:\HC386
SET INCLUDE=Q:\HC386\INC
SET LIB=Q:\HC386\SMALL
Q:\HC386\BIN\HCD386.EXE A:\HELLO.C -obj A:\HELLO.OBJ -dir Q:\HC386\INC
DIR A:\*.OBJ > A:\DIROBJ.TXT
```

Write it with CRLF and copy it in:

```bash
cat > /var/tmp/compile.bat <<'BAT'
@ECHO OFF
CD \
SET HCDIR=Q:\HC386
SET TOOLSDIR=Q:\HC386
SET INCLUDE=Q:\HC386\INC
SET LIB=Q:\HC386\SMALL
Q:\HC386\BIN\HCD386.EXE A:\HELLO.C -obj A:\HELLO.OBJ -dir Q:\HC386\INC
DIR A:\*.OBJ > A:\DIROBJ.TXT
BAT
sed -i 's/\r*$/\r/' /var/tmp/compile.bat
mcopy /var/tmp/compile.bat -i saves/mywork.hdm ::COMPILE.BAT
```

The four `SET` lines are the environment the generator expects. `HCDIR` and
`TOOLSDIR` point at the directory **containing** `bin`, because
`HC386.CNF` sets `bin=/bin` relative to them. `INCLUDE` and `LIB` are only
needed if your source includes headers.

### 3. Make it run automatically on boot

Append the batch name to `AUTOEXEC.BAT` so nothing is typed at all:

```bash
mtype -i saves/mywork.hdm ::AUTOEXEC.BAT > /var/tmp/aue.bat
printf 'COMPILE.BAT\r\n' >> /var/tmp/aue.bat
mdel -i saves/mywork.hdm ::AUTOEXEC.BAT
mcopy /var/tmp/aue.bat -i saves/mywork.hdm ::AUTOEXEC.BAT
```

### 4. Load it and boot

```bash
API=http://127.0.0.1:8096
curl -s -X POST $API/api/cmd -H 'content-type: application/json' \
     -d '{"line":"FD0LOAD /data/mywork.hdm"}'
sleep 0.5
curl -s -X POST $API/api/cmd -H 'content-type: application/json' \
     -d '{"line":"FD0UP"}'
sleep 0.5
curl -s -X POST $API/api/cmd -H 'content-type: application/json' \
     -d '{"line":"RESET F0"}'
```

`/data/` inside the container is `saves/` on the host.

**`FD0UP` after every `FD0LOAD`.** `FD0LOAD` re-arms write protection on this
build. Skipping it produces a boot that looks completely normal and writes
nothing.

`RESET F0` answers `Write to CRTC-HST register.` and does not return a prompt.
That is normal. Wait 30 to 60 seconds.

### 5. Collect the result

```bash
# proof from inside the guest
mtype -i saves/mywork.hdm ::DIROBJ.TXT

# proof from the host
mcopy -i saves/mywork.hdm ::HELLO.OBJ /var/tmp/hello.obj
ls -la /var/tmp/hello.obj
xxd /var/tmp/hello.obj | head -4
```

## Reading the object file

High C 1.7 writes Intel OMF. `tools/omf_code.py` walks it:

```bash
python3 tools/omf_code.py /var/tmp/hello.obj
```

Important framing detail, measured: **the OMF length field counts the
checksum byte**, so a record is `3 + length` bytes, not `3 + length + 1`. Under
that framing the walk consumes the file exactly and every type is a valid OMF
record id. `LEDATA` (0xa0) bodies are `index u16, offset u16, group u8, data`.
Getting this wrong makes the parser read `len=32768` off the second record and
give up.

A healthy `HELLO.OBJ` is 267 bytes and starts:

```
8007 0005 4845 4c4c 4f00   THEADR "HELLO"
8808 0080 aa38 3033 3836   COMENT "80386="
8814 0080 0048 6967 6820   COMENT "High C 1.7. SMALL"
```

`THEADR`, `COMENT`, `LNAMES`, `SEGDEF`, `GRPDEF`, `LEDATA`, `MODEND`. Code
lands in the LEDATA for the `CODE` segment.

## Verifying the toolchain is sane

`./tools/compile-proof.sh` is the smoke test. It asserts the object exists, is
non-zero, and begins with `0x80` (`THEADR`). If that fails after a change to
the environment, the change broke the environment, not the compiler.

## Input traps, complete

Every one of these was hit and cost real time. They are in dependency order.

| symptom | cause | fix |
|---|---|---|
| Typed `:` arrives as `+`, `Q:\HC386` becomes `Q+\HC386`, `Wrong Command or File Name` | `/api/keys` sends through `xdotool --window`, which resolves characters via the Japanese 106 keymap | `xdotool key semicolon` via XTEST, from inside the container. Or avoid the character entirely. |
| Typed `>` arrives as `\` | same keymap problem, no keysym emits a usable `>` | Put the redirection in the batch file and type only the batch name. |
| Typed `\` arrives as `¥` | expected on a JP layout | harmless, DOS accepts `¥` as a path separator |
| Typed text lands with characters swapped or missing | typing races the DOS boot | run from `AUTOEXEC.BAT`, or wait for a stable prompt first |
| Guest writes nothing, no error | `FD0LOAD` re-armed write protection | `FD0UP` after every `FD0LOAD` |
| Newly mcopy'd file is `File not found` in the guest | the image was already loaded when mcopy ran | place files before `FD0LOAD`, then reload |
| Batch file runs as one long garbage line | LF endings | CRLF everywhere, `sed -i 's/\r*$/\r/'` |
| `RESET CD` looks like it worked but nothing boots | ROMs must be at the path given first on the command line | the container already passes `/roms` correctly |

There is no working `>` and no reliable `:` from the guest keyboard on this
stack. Design every command so it does not need them.

## Screen reading without a monitor

Screenshots are 1024x768 with the VM at `(2, 40)`, 640x496. Three tools, in
order of usefulness:

```bash
curl -s "http://127.0.0.1:8096/api/screen?mode=stats"   # colour census
curl -s "http://127.0.0.1:8096/api/screen?mode=text"    # thresholded text
python3 tools/readscreen.py --port 8096                 # region as ASCII
```

**The file system is a far better channel than the screen.** The technique that
worked was to have the guest write its own evidence and read it host-side:

```
ECHO BOOT >> A:\TRACE.TXT
Q:\HCOPY\COCO
ECHO COCO_RC=%ERRORLEVEL% >> A:\TRACE.TXT
```

`tools/ocr.py` does **not** work on this font. FM Towns DOS uses a proportional
serif face, ASCII is 8x16 and Japanese messages are 16x16, so its templates miss.
Do not spend time trying to make it match. Write to a file instead.

Screen state also tells you whether the guest is alive at all: capture, wait,
capture again and compare. Identical captures mean frozen.

## What still does not work

- **The driver plus `RUN386`.** `HC386.EXE` stages temp files and calls
  `RUN386 HCD386P.EXP`, which needs a Towns window system, which needs
  TownsMENU, which cannot coexist with a writable volume on any boot
  configuration tried. See `docs/compile-blocker.md`. It is not needed for
  compiling.
- **TownsMENU with a writable volume.** `COCO` fails on the DOS 6.2 floppy and
  `SIDEWORK` then hangs the batch. `CTL.SYS` does not fix it under DOS 6.2.
- **Linking.** `386LINK.EXE` was never driven. `docs/bootable-dos-hdd.md`
  recorded a path-resolution failure (`$TOOLSDIR$bin` producing mixed
  separators) that was not revisited.
- **`-O0`..`-O4` levels.** Those are a *driver* concept. The driver forwards a
  bare `-O` to the generator, so calling the generator directly means the
  digits are ignored. Bare `-O`, `-O1`..`-O9` and the `-on`/`-off` optimizer
  toggles all produce byte-identical output through this route.
- **The 15.9 GB `disk/TownsHDD_V1.HDM`.** Treat as suspect: it came from a
  hardware emulator. It is a read-only curiosity, not a boot target.

## Reproducing from nothing

```bash
./tools/vendor.sh                     # Tsugaru + ROMs
cp <sdk cd>.img  saves/hc.img         # 2352-byte raw sectors
cp <sdk cd>.ccd  saves/hc.ccd
cp <dos62 floppy>.hdm saves/dos62v6.hdm
cp disk/CMOS.DAT saves/CMOS_HDD.bin   # from the TownsOS HDD release
sudo -v
./tools/container-run.sh start
sleep 45
./tools/compile-proof.sh              # expect PASS
./tools/plot-proof.sh                 # expect NOT byte-identical
```

Both scripts are self contained: they copy the floppy, place everything,
boot, poll for the result, and print both proofs. They do not need a running
guest to start from and they do not type anything.

# Ultima Trilogy I-II-III (FM Towns, 1990)

Playing the Fujitsu FM Towns release of *Ultima Trilogy 1-3* on Linux.

Source of this copy: `archive.org/details/fmtownscdcollection`, file
`FM-Towns CD/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[+UserDisk].zip`.

## 0. Reproducing this work

Everything here can be reproduced from the archive.org zip alone.

1. Download
   `FM-Towns CD/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[+UserDisk].zip` from
   <https://archive.org/details/fmtownscdcollection>.
2. Unpack it into this directory. You should end up with the five files in
   section 1.
3. Run:

```bash
node tools/verify.js     # 89 assertions against the disc, exits 0 if all pass
node extract-u2.js       # writes extracted/u2/
```

`tools/verify.js` is the authority for what is established. It checks the rip
identity (sizes and MD5s), the disc structure, the executable headers, the
toolchain, the U2 asset inventory, every graphics claim, every sound claim, and
the negative results. A claim in `FINDINGS.md` that is not asserted there should
be treated as unverified.

Expected source file checksums, so you can confirm you have the same rip:

| File | Size | MD5 |
|---|---|---|
| `Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).img` | 141,649,200 | `1a0b01f4498b561878dbc49ffb9e1af6` |
| `Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).ccd` | 2,137 | `f89a0640f0a2e75beb3763e80b7be352` |
| `Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).cue` | 415 | `6f931bead286bac24c03ad687f40ac8d` |
| `Ultima Trilogy 1-3 (1990)(Origins)(Jp-En).sub` | 5,781,600 | `6ad09bf5dde849b1d3fa6b00f7ab6ee0` |
| `Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[UserDisk].hdm` | 1,261,568 | `5ae4dc119f990adde82a2b91c0b7feef` |

If the MD5s differ you have a different rip and results will legitimately
differ. `verify.js` will say so rather than failing silently.

**Nothing copyrighted is in this repository.** The game, its artwork, its audio
and its ROMs are commercial software still in copyright. All of it is
gitignored and a pre-commit hook blocks it. This repository is scripts, tests
and documentation. You supply the game, following this section.

Install the guard after cloning:

```bash
ln -sf ../../tools/precommit-guard.sh .git/hooks/pre-commit
```

## 1. What is in this directory

| File | Size | What it is |
|---|---|---|
| `*.img` | 141,649,200 B | Raw 2352-byte/sector CD dump, 60,225 sectors (13:25) |
| `*.cue` | 415 B | 8 tracks: track 1 data, tracks 2-8 CD audio |
| `*.ccd` | 2137 B | CloneCD TOC for the same disc |
| `*.sub` | 5,781,600 B | Subchannel data, 96 B per sector |
| `*[UserDisk].hdm` | 1,261,568 B | FM Towns 2HD floppy: the player save disk |
| `run.sh` | | Launcher (see section 4) |
| `extract-u2.js` | | Extracts Ultima II assets (see section 7) |

Facts confirmed by parsing the image, not assumed:

- Track 1 is ISO 9660, volume label `TRILOGY`, ~112 files across `\`, `\GRAPH`,
  `\SOUND`, `\UT1`, `\UT2`, `\UT3`.
- The game executables are `DARKNESS.EXP`, `ENCHANT.EXP`, `EXODUS.EXP`, Pharlap
  386|DOS-Extender images run through `RUN386.EXE`. The `.EXP` extension means
  "executable", not "export".
- `CONTROL.EXE` plus `TMENU.INF` form the boot menu that picks which of the
  three games to launch.
- The games are written in **C** and compiled with **MetaWare High C** for 386
  protected mode. Every game `.EXP` carries `High C Run-time Library Copyright
  (C) 1983-1988 MetaWare Incorporated`, plus Fujitsu's `TOWNS SOUND LIBRARY`
  and `EUPHONY DRIVER` by Joe Mizuno. `RUN386.EXE` is Phar Lap's DOS Extender,
  itself a High C build, so the toolchain is consistent across runtime and
  game. Compiled C codegen shows through as ~440 standard `push ebp` then `mov
  ebp,esp` function prologues in `DARKNESS.EXP`.
- Tracks 2-8 are CD audio, peaking around +/-15,000 in 16-bit signed stereo.
  Extracting the disc as a plain ISO discards all of it.
- The graphics are 16bpp art wrapped in TIFF headers whose geometry tags are
  wrong (they claim 257x169 while holding 512x169 of data). Only the game can
  read them meaningfully, which is expected rather than corruption.

`(Jp-En)` means the text is in English with Japanese produced only where the
machine needs it. No translation patch is required.

## 2. What you need to download

### The emulator: Tsugaru

FM Towns emulator by CaptainYS. BSD 3-clause, actively developed, roughly 97%
of the commercial catalogue runs.

1. Go to <https://github.com/captainys/TOWNSEMU/releases>.
2. Open the newest release that has assets. Releases are marked
   *pre-release* on GitHub, so **do not trust `/releases/latest`** or the
   green "Latest" badge, they will show nothing. Pick the newest dated tag
   (for example `v20260522`).
3. Download `ubuntu_binary_latest.zip`, about 4.3 MB.
4. Unpack it so that both executables sit directly inside `emulator/`:

```
emulator/Tsugaru_CUI
emulator/Tsugaru_GUI   (optional, needs Qt6)
```

   `Tsugaru_GUI` shells out to `Tsugaru_CUI` and will not start without it in
   the same directory.

Building from source is also fine:

```
git clone https://github.com/captainys/TOWNSEMU.git
cd TOWNSEMU/gui/src
git clone https://github.com/captainys/public.git
cd .. && mkdir build && cd build
cmake ../src && cmake --build . --parallel
```

You also need `xorg-xwayland` if you are on a Wayland session.

### The ROMs: FreeTowns, no copyright problem

Tsugaru needs FM Towns ROM images. You can extract them from real hardware, but
there is a free and legal replacement set built for exactly this purpose.

1. Download <https://ysflight.in.coocan.jp/FM/towns/FreeTOWNS/ROMS.zip>
2. Unpack the contents into `emulator/ROMS/`.
3. You should end up with at least `FMT_SYS.ROM` and `FMT_DOS.ROM` in there.

Background and the source for those ROMs: <https://github.com/captainys/TOWNSROM>
plus the project page at <http://ysflight.com/FM/towns/FreeTOWNS/e.html>.

If you use ROMs dumped from real hardware instead, the names differ
(`IPLROM.DAT`, `CGROM.DAT`, and so on). `run.sh` accepts either. Towns OS
software that depends on the Fujitsu font ROM may render text badly with the
free set. The Ultima games do not need Japanese input, so this is not a
blocker.

## 3. Use the CCD, not the CUE

This disc has `PREGAP 00:02:00` before track 2, and that is a trap.

Tsugaru's author documents the problem directly: a CUE file does not record
which of two incompatible PREGAP interpretations produced it. Alcohol 52%
treats PREGAP as affecting only its own track, ImgBurn as affecting every
later track, and the resulting track start times differ for the same disc. The
emulator has no way to tell which convention was used, so it cannot compensate.
The README's verdict is that CUE is "absolutely inappropriate" for preservation
and recommends `.MDS` or `.CCD`.

The CCD here records the unambiguous answer: track 1 ends at sector 8999 and
track 2 starts at 9000, with 450 real zero sectors in the image itself. So:

- Feed Tsugaru the **`.ccd`**. `run.sh` does this automatically.
- Keep the `.img` beside it, unmodified.
- Do **not** convert to `.bin`/`.cue` or extract an ISO. Both lose or mangling
  the audio track alignment.

## 4. Run it

```
./run.sh
```

Expected layout:

```
fm-family-ultima-trilogy/
├── emulator/
│   ├── Tsugaru_CUI
│   ├── Tsugaru_GUI          (optional)
│   └── ROMS/
│       ├── FMT_SYS.ROM
│       └── FMT_DOS.ROM
├── saves/                   created on first run
├── run.sh
├── *.img  *.cue  *.ccd  *.sub
└── *[UserDisk].hdm
```

Environment overrides, if you keep the pieces elsewhere:

```
EMU_DIR=/path/to/emulator ROM_DIR=/path/to/roms SAVE_DIR=/path/to/saves ./run.sh
```

Pass extra Tsugaru options with `EXTRA`:

```
EXTRA="-SCALE 200" ./run.sh
```

The script runs:

```
Tsugaru_CUI <ROM_DIR> -CD <disc>.ccd -CMOS saves/CMOS.BIN -FD0 <UserDisk>.hdm
```

## 5. Playing

**Quit properly.** Type `Q` then Enter in `Tsugaru_CUI`. Closing the window
skips the CMOS write, so BIOS settings and your save disk state are not flushed.

**Choosing a game.** The disc boots into the `CONTROL` menu. Pick 1, 2 or 3 for
*Ultima I*, *II* or *III*.

**Controls.** The FM Towns has no mouse for this game. It is keyboard driven.
`Tsugaru_CUI` maps host keys directly, so the commands match the on-screen
legend. If the party will not move, the arrow keys have been captured by the
emulator as a gamepad instead of passed through, so remap them in the GUI under
the gameport settings.

**First boot.** The game may write to the CMOS on start. That is normal and is
why `saves/CMOS.BIN` appears after the first clean exit. Delete that file to get
back to a clean BIOS state.

## 6. If it does not work

| Symptom | Cause |
|---|---|
| Boot screen freezes or "ROM not found" | `FMT_SYS.ROM` missing from `ROM_DIR`, or `ROM_DIR` points at the ROM files instead of the directory |
| Music missing but game runs | Wrong track map. Confirm you are on the `.ccd`, not a converted `.bin` |
| Audio offsets drift after track 1 | A CUE produced by a third-party tool was used. Use the CCD |
| Window never appears on Wayland | Install `xorg-xwayland` |
| Text renders incorrectly | Using real-hardware ROMs without `FONT.ROM`, or a partial free set |
| Party will not move | Arrow keys are mapped to the emulated gamepad. Remap in the GUI |

Emulator compatibility list, including Origin titles confirmed working:
<http://ysflight.com/FM/towns/FreeTOWNS/e.html>

## 7. Extracting Ultima II assets

```
node extract-u2.js
```

Writes `extracted/u2/` with `map/`, `sprites/`, `title/`, `sfx/` and a
`manifest.txt` recording what decoded and what did not. No dependencies, no
`sudo`. The disc is read in place and never modified.

The file list is not guesswork. `ENCHANT.EXP` contains its own asset paths as
literal strings (`Q:\GRAPH\MAP2_1.TIF`, `A:\ROSTER1.UT2`, and so on), so the
extractor uses exactly the set Ultima II opens. Confirmed from those strings:

- **3 maps**: `MAP2_1`, `MAP2_2`, `MAP2_3`
- **6 sheet/sprite files**: `PLAYER`, `ENEMY2`, `EXTRA`, `CHEST`, `DUNG1`, `DUNG2`
- **14 title and ending images**: `HEADTTL`, `U2TITLE1-4`, `U2END1-5`, `GAI`,
  `DUNMON1-3`
- **14 sound effects**, out of the 15 `.SND` files on the disc
- **3 save files** `ROSTER1.UT2` and `WORLD1-4.UT2`, which live on the UserDisk
  floppy and do not exist until you start a game

### Graphics

Two different layouts, both determined by exact byte counts rather than by the
TIFF headers, which on this disc are unreliable:

| Layout | Sizes | Rule |
|---|---|---|
| Sheet | 320x104 | 1 pixel per byte, high nibble only |
| Picture | 640x400, 256x200, 352x352, ... | 4bpp packed, 2 pixels per byte |

Maps decode as legible terrain (coastlines, rivers, mountain rows). Pictures
decode as legible title screens with readable text. Each picture is also
written with a `_planar.png` suffix holding the planar interpretation, so the
layout choice stays inspectable instead of being baked in silently.

Two honest caveats:

- **No palette.** These are 4-bit palette indices written as greyscale. The
  index-to-colour mapping is not stored in the image files, it is set by code,
  so the PNGs show structure and shapes but not original colours.
- **`U2TITLE1` is two screens stacked.** It is 640x400 of packed pixels, which
  is twice the 640x200 the visible title occupies. Row 200 is where the first
  screen ends. The decode is correct, the layout is just a stacked pair.
- **`DUNMON1-3` do not fit any layout.** 213504, 53760 and 13824 bytes against
  8192, 2048 and 512 expected for their declared sizes. They are emitted on a
  best-effort basis and should be treated as unresolved.

### Sound effects

`.SND` layout, verified against all 15 files on the disc. Every one satisfies
`filesize == 32 + u32@12` exactly:

```
 0   char[8]  name
 8   u32      flag (1 for most files, junk in FIRE and WHAT)
12   u32      payload length, authoritative
16   u32      payload length-1 for BUMP/FIRE/WHAT, else 0
20   u32      same as 12 for BUMP/FIRE/WHAT, else 0
24   u32      nominal sample rate, unreliable
28   u16      always 60
30   u16      always 0
32   bytes    payload, runs to end of file, no trailer
```

Field 24 is 1960 Hz for 13 of 15 files, but reads 2426302 for `BUMP`, 4292870291
for `FIRE` and 1568 for `WHAT`. The WAV header uses 1960 Hz as the
best-supported value and the manifest reports the raw field, so the guess stays
visible rather than being silently trusted. If an effect sounds wrong-pitched,
that field is the thing to revisit.

### What is not extracted

- **CD audio** (tracks 2-8): the trilogy soundtrack, not U2-specific. Extract
  with `bchunk` against the `.cue` if you want it.
- **`SOUND/ULTIMA.FMB`**: the FM instrument bank. It is shared by all three
  games and needs a YM2612 renderer to become audio, so there is nothing to
  convert here.
- **`.EUP` files**: EUPHONY driver preset tables, not audio. No waveform data.


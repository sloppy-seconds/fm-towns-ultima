# Ultima Trilogy I-II-III (FM Towns, 1990)

Playing the Fujitsu FM Towns release of *Ultima Trilogy 1-3* on Linux.

Source of this copy: `archive.org/details/fmtownscdcollection`, file
`FM-Towns CD/Ultima Trilogy 1-3 (1990)(Origins)(Jp-En)[+UserDisk].zip`.

## 1. What is in this directory

| File | Size | What it is |
|---|---|---|
| `*.img` | 141,649,200 B | Raw 2352-byte/sector CD dump, 60,225 sectors (13:25) |
| `*.cue` | 415 B | 8 tracks: track 1 data, tracks 2-8 CD audio |
| `*.ccd` | 2137 B | CloneCD TOC for the same disc |
| `*.sub` | 5,781,600 B | Subchannel data, 96 B per sector |
| `*[UserDisk].hdm` | 1,261,568 B | FM Towns 2HD floppy: the player save disk |
| `run.sh` | | Launcher (see section 4) |

Facts confirmed by parsing the image, not assumed:

- Track 1 is ISO 9660, volume label `TRILOGY`, ~112 files across `\`, `\GRAPH`,
  `\SOUND`, `\UT1`, `\UT2`, `\UT3`.
- The game executables are `DARKNESS.EXP`, `ENCHANT.EXP`, `EXODUS.EXP`, Pharlap
  386|DOS-Extender images run through `RUN386.EXE`. The `.EXP` extension means
  "executable", not "export".
- `CONTROL.EXE` plus `TMENU.INF` form the boot menu that picks which of the
  three games to launch.
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

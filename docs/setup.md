# Getting set up

What to download, how to confirm you have the same rip as everyone else, and how
to fetch the emulator and its ROMs.

The README covers this briefly. This page has the detail, including the
checksums and why the `.ccd` is used rather than the `.cue`.

## Reproducing the work

Everything about the disc can be reproduced from the archive.org zip alone.

1. Download the zip linked above.
2. Unpack it into this directory. You should end up with the five files in
   section 1.
3. Run:

```bash
node tools/verify.js     # every assertion about the disc, exits 0 if all pass
node extract-u2.js       # writes extracted/u2/
```

`tools/verify.js` is the authority for what is established, currently 107
assertions. It checks the rip identity (sizes and MD5s), the disc structure, the
executable headers, the toolchain, the U2 asset inventory, every graphics claim,
every sound claim, and the negative results. A claim in `FINDINGS.md` not
asserted there should be treated as unverified.

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

## Fetching the emulator and ROMs

### The emulator: Tsugaru

FM Towns emulator by CaptainYS. BSD 3-clause, actively developed, roughly 97%
of the commercial catalogue runs.

1. Go to <https://github.com/captainys/TOWNSEMU/releases>.
2. Open the newest release that has assets. Releases are marked
   *pre-release* on GitHub, so **do not trust `/releases/latest`** or the
   green "Latest" badge, they will show nothing. Pick the newest dated tag
   (for example `v20260522`).
3. Download `ubuntu_binary_latest.zip`, about 4.3 MB.
4. Unpack it so that both executables sit directly inside `vendor/emulator/`,
   which is where `tools/vendor.sh` puts them and where `run.sh` looks:

```
vendor/emulator/Tsugaru_CUI
vendor/emulator/Tsugaru_GUI   (optional, needs Qt6)
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

Tsugaru needs FM Towns ROM images. It emulates the hardware, and the hardware has
firmware, so there is no way around this.

Tsugaru's own readme puts it plainly: extract the ROMs from a real FM Towns if
you own one, which gives the best fidelity, or use the free set if you do not.
The free set is a clean-room reimplementation rather than a Fujitsu dump, and is
compatible with the UNZ emulator as well, so it is not tied to this project.

1. Download <https://ysflight.in.coocan.jp/FM/towns/FreeTOWNS/ROMS.zip>
2. Unpack the contents into `vendor/roms/`.
3. You should end up with `FMT_SYS.ROM`, `FMT_DOS.ROM`, `FMT_DIC.ROM`,
   `FMT_F20.ROM` and `FMT_FNT.ROM` in there.

Background and the source for those ROMs: <https://github.com/captainys/TOWNSROM>
plus the project page at <http://ysflight.com/FM/towns/FreeTOWNS/e.html>.

If you use ROMs dumped from real hardware instead, the names differ
(`IPLROM.DAT`, `CGROM.DAT`, and so on). `run.sh` accepts either. Towns OS
software that depends on the Fujitsu font ROM may render text badly with the
free set. The Ultima games do not need Japanese input, so this is not a
blocker.

## Use the CCD, not the CUE

This disc has `PREGAP 00:02:00` before track 2, and that is a trap.

Tsugaru's author documents the problem directly: a CUE file does not record
which of two incompatible PREGAP interpretations produced it. Alcohol 52%
treats PREGAP as affecting only its own track, ImgBurn as affecting every
later track, and the resulting track start times differ for the same disc. The
emulator has no way to tell which convention was used, so it cannot compensate.
The README's verdict is stronger than a preference: CUE is "absolutely
inappropriate" from a preservation point of view, and it highly recommends
`.MDS` wherever the disc has an audio track.

**This rip has no `.MDS`.** The archive.org download ships `.ccd` plus `.cue`,
`.img` and `.sub`. So `.ccd` is not the author's first choice, it is the best of
what is available here, and it is genuinely good: the CCD records track boundaries
unambiguously, which is exactly the thing CUE cannot do.

The CCD here records the unambiguous answer: track 1 ends at sector 8999 and
track 2 starts at 9000, with 450 real zero sectors in the image itself. So:

- Feed Tsugaru the **`.ccd`**. `run.sh` does this automatically.
- Keep the `.img` beside it, unmodified.
- Do **not** convert to `.bin`/`.cue` or extract an ISO. Both lose or mangling
  the audio track alignment.

---

**[Save disk](save-disk.md)** **[Docs index](index.md)**

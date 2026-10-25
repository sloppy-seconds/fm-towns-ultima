# TownsMENU boots from the SDK CD, and that is why RUN386 was silent

This closes the question left open by `docs/highc-dos-negative.md`. `RUN386.EXE` was
never broken. It launches programs into a Towns window, and with no Towns window system
running it has nowhere to put anything, so it exits silently.

**TownsMENU runs.** It is started from the SDK CD, and the CD is a complete, self-booting
Towns system.

## The CD is a self-booting Towns system

`references`/`saves/hc.ccd` (the High C SDK CD) carries its own `AUTOEXEC.BAT`,
`CONFIG.SYS`, `IO.SYS`, `TOWNS.SYS`, `RUN386.EXE`, `T_TOOL`, `SYS`, `TBIOS`, `HCOPY`,
`SIDEWORK`, `SYSINIT`, `NSDD` and `TMENU`. Its `AUTOEXEC.BAT` ends with the TownsMENU
launch line:

```
CONTROL -v -p -callbuf 32
```

`TMENU.BAT` on the same disc is the same bootstrap written out in full:

```
Q:\hcopy\coco
Q:\sidework\sidework -q
Q:\sysinit\sysinit -q
Q:\hcopy\coco_mem Q:\hcopy\forrbios.nsd Q:\nsdd\smsg.nsd
Q:\control -p -callbuf 32
```

**It boots from the CD.** From the Tsugaru console:

```
CDLOAD /data/hc.ccd
RESET CD
```

`RESET` accepts a boot key: `CD, F0, F1, F2, F3, H0..H4, ICM, DEBUG, PADA, PADB, PADAB`.
The guest comes up at a `Q:\>` prompt with the CD as its own boot volume.

**TownsMENU then starts** when `CONTROL -v -p -callbuf 32` is typed at that prompt. The
screen shows the `FM TOWNS` menu bar with `ファイル / ディスク / 設定`, a drive-selection
window, and a `Q:\HC_MULTI_K` window holding icons `このドモード`, `お知らせ`, `HC386`,
`EXLIB1`, `EXLIB2`, `VLIB`, `JEGLIB`, `LMLIB`, `SP386X`, `ADPCM`, `VOICE`.

**`HC386` is right there.** The compiler the whole exercise has been chasing is one icon.

## Why the earlier `CONTROL` test failed

On the TownsOS 2.1 floppy, bare `CONTROL` answered **「TownsMENUのディスクをセットしてください」**,
which means *please insert the TownsMENU disk*. That was not a failure. It was `CONTROL` correctly
reporting that no TownsMENU was present, and it is the clearest possible statement of why
`RUN386` had been silent in every DOS-only configuration.

## The input bug that cost most of the night

**`/api/keys` drops backslashes.** `container/supervisor.js` sends printable characters
through `xdotool type`, and on the Japanese 106-key layout the backslash key produces
`¥`, not `\`. Every path typed into the guest was silently losing its separators:

```
typed   DIR A:\DOS
reached DIR A:DOS          ->  Too many parameters. - DOS
```

This is the same class of defect already recorded for the colon, which needs the
`semicolon` keysym. The fix is `intl_backslash`, the X keysym whose purpose is to emit a
real `0x5C` on a Japanese keyboard. **Neither `backslash` nor `intl_backslash` was
confirmed working in the guest during this session**, so the practical workaround is to
avoid backslashes entirely:

```
CD ¥DOS        the yen key is accepted by DOS as a path separator
MSCDEX ...     run the program from the directory you are already in
```

`CD ¥DOS` followed by `MSCDEX /D:TOWNS_CD /M:8 /L:Q` is what finally got the CD driver
talking.

## MSCDEX reports already-running but assigns no letter

`MSCDEX` with no arguments answered `MSCDEX Version 2.23 はすでに起動されています`, *is
already running*, yet `Q:` was not available. The cause is ordering: `AUTOEXEC.BAT` runs
`MSCDEX` at boot, before any disc is in the drive, so it initialises with no media and
assigns nothing. Loading the disc afterwards with `CDLOAD` does not retroactively mount
it, and a warm restart via `ctrl-alt-Delete` did not take.

**The lesson is to load the disc before the guest boots**, which is what `RESET CD`
achieves, or to attach it with `-CD` on a configuration where the SCSI slot is free.

## Mouse clicks work, but only held down

`xdotool click 1` reaches the guest as motion but produces **no button event at all**:
no icon highlight, no window raise, no launch, even with `--repeat 2 --delay 120`.

**What works is an explicit press and release held long enough to be polled:**

```bash
xdotool mousemove 378 270
sleep 0.4
xdotool mousedown 1
sleep 0.6
xdotool mouseup 1
```

**Tsugaru polls the button state rather than consuming X button events**, so a press that
begins and ends between two polls is invisible to the guest. `xdotool click` is too fast.
A 600 ms hold is comfortably enough. This is the same class of problem as the colon and
backslash keysyms: the harness was producing input the emulator does not observe.

With that form, double-clicking the `HC386` icon **opened a `Q:\HC_MULTI_K\HC386` window**
containing `README.DOC`, `インストール` (install), `HC17UM.DOC`, `HC17LR.DOC`,
`HCK17UK.DOC`, `HCGR.DOC`, `CL21R.DOC` and `CL21RAD.DOC`. Clicking the `Q:` drive icon in
the drive-selection window opened a second window behind it.

**Coordinate mapping, established by measurement:** the Towns screen appears **1:1** in
the 1024x768 capture, not scaled. The window is 640x496 at position `(2,40)`, and
`screen = capture + (2, 8)`. Verified by moving to `(100,400)` and finding the cursor at
capture `(98,392)`.

**Window title bars carry three buttons at the right end.** Clicking them was not
confirmed to close a window during this session. The leftmost of the three is a zoom and
the exact roles were not established.

## What this changes

The compiler route is **not** dead, which `docs/highc-dos-negative.md` concluded. It needs
TownsMENU, TownsMENU is on the CD, the CD boots, and the mouse now works. Remaining steps:

- **browse the `Q:` drive window to `RUN386.EXE`** and double-click it, now that clicks land
- **`CONTROL /dQ /e\RUN386.EXE <program>`**, the second documented option, which launches
  a named program into a Towns window without any mouse at all
- a **DOS window inside TownsMENU**, then `\RUN386 [program name]`, the third option in the
  TownsOS `AUTOEXEC.BAT` comments

The `HC386` panel holds documentation and an installer rather than the compiler itself, so
the compiler is reached through `Q:\HC386\BIN` or by installing, not from that panel.

## Corrections

`docs/highc-dos-negative.md` stated the extender may require a Towns service that nothing
available provides. **That was too pessimistic.** The service exists, is called TownsMENU,
and is on the CD.

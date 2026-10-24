# Tsugaru as a build harness: what works, what was wrong, and what is needed

Two proposals for automating the Fujitsu High C V1.7 compile arrived. Both were checked against the emulator
rather than accepted, and both needed correcting in ways that change the design.

## The flags that do not exist

```
-FASTMODE  -AUTOTYPE  -QUITAT  -HOSTDIR
```

`HELP` over the Tsugaru console lists **282 commands** and none of these four is among them. A script written to
that spec would fail immediately with an unknown option and read as a broken emulator.

## What the console does have, verified

| need | command | status |
|---|---|---|
| type keystrokes | `TYPE characters` | present |
| host file into the VM | `XMODEMTOVM filename` | **verified**: replies `Ready to send /data/TEST_DIV.C` and `Start XMODEM in FM TOWNS!` |
| VM file back to host | `XMODEMFROMVM filename` | present |
| swap the CD | `CDLOAD`, `CDEJECT`, `CDOPENCLOSE` | present |
| run until something | `WAIT` | present |
| leave | `QUIT` | present |

**`XMODEMTOVM` is the real `-HOSTDIR`**, and it is a handshake rather than a shared folder, so it needs a receiver
started inside the guest. That means it needs a shell.

## The boot-to-DOS bypass WORKS

**This reaches a DOS prompt with no pointer input.** The CD's `AUTOEXEC.BAT` makes the GUI one identifiable line,
and patching three lines **in place, same length so no ISO sector moves**, is enough:

```
CONTROL -v -p -callbuf 32   ->  REM <24 spaces>
\T_TOOL\DELVDISK            ->  REM <13 spaces>
\T_TOOL\REIPL               ->  REM <10 spaces>
```

Verified on screen:

```
IF ERRORLEVEL 1 GOTO END
REM
GOTO EXIT
Entering Interactive Mode.
Q:\>
```

**`Q:\` is the CD, and `HC386.EXE` runs from it.** Typing the full path gives the compiler's own message:

```
Q:\>Q:\HC386\BIN\HC386.EXE
(Q:\HC386\BIN\HC386:) No files specified.
```

This is the same executable that **hung with no output under DOSBox**. Under real TownsOS DOS it starts and reports
usage. That is the single most important result in this line of work: the compiler works, and it needed TownsOS.

## The input method that actually works

**`POST /api/key {keys:"Return"}` is the real keypress.** `TYPE` through the console sends the characters `\` and `r`
literally, so a command typed with `TYPE ...\r` arrives as `DIRr` and the shell answers
`Wrong Command or File Name`. That cost several attempts.

The working sequence is:

```
POST /api/keys {text:"DIR"}      types D, I, R as characters
POST /api/key  {keys:"Return"}   submits the line as a real keypress
```

## `console.exe` is the shell, not `COMMAND.COM`

**The disc has no `COMMAND.COM`**, which made a build-a-boot-disk plan impossible as written. Verified absent:
`COMMAND.COM`, `MSDOS.SYS`, `XMODEM.EXE`. Present: `IO.SYS`, `tbios/TBIOSLD.SYS`, `exe/MSCDEX.EXE`,
`exe/FORMAT.COM`.

**But a shell exists: `console.exe`.** It is the TownsOS console command processor, and it is what supplies the
`Q:\>` prompt this CD reaches. That is why the patched CD works despite `config.sys` naming a `COMMAND.COM` that
is not present: TownsOS brings its own.

So the shell is not the problem, and **no MS-DOS boot disk is needed**. The problem is writable storage.

## The remaining constraint: the CD is read-only

A compile needs somewhere to write the `.obj`, and `Q:` is the CD. A writable floppy can be attached with
`FD0_IMAGE` at run time, and the container supports `FD0UP`. A source file can be placed on a 1,232 KB image with
`tools/addfile-fat12.js`, which is verified to write `TEST_DIV.C` onto a formatted save disk.

**`FD0LOAD` inserts a floppy at runtime, and it is verified:**

```
> FD0LOAD /data/workspace2.hdm
> Loaded FD image:/data/workspace2.hdm
```

That is better than `FD0_IMAGE` at launch, because it needs no restart and can be scripted from the console. What is
**not** yet confirmed is whether the guest then sees it as `A:`, and whether that drive is writable. An earlier
attempt with `FD0_IMAGE` saw `A:` rejected, but that was before `FD0LOAD`, and with a floppy image built by
`tools/makesave.js` plus `tools/addfile-fat12.js`, which is verified to write a file onto it.

**`COPY CON` is a viable way to get source in without XMODEM**, since the source is a few dozen bytes. The console
maps `\r` and `\n` to the Return key through `/api/key`, and any xdotool key name passes through, so `ctrl+z` is
available for the EOF that ends the `COPY CON` block.

**`console.exe` does not implement output redirection, and it says so:**

```
Q:\>ECHO HELLO > Q:\PROBE.TXT
Sorry, redirection and pipe are not supported yet.
Just executing without redirection/pipe.
HELLO
Q:\>TYPE Q:\PROBE.TXT
Wrong Command or File Name.
```

**That invalidates the obvious way to avoid screenshots.** Reading results by writing them to a file with `>` cannot
work here, because the shell drops the `>` and runs the command bare. Any plan of the form "run a command, redirect
its output, pull the file out" is dead on this shell.

A command that opens a file handle itself is a different matter, because that is not redirection. `COPY CON` is the
candidate, and whether this `console.exe` implements it is not yet tested.

**DOS output does NOT appear in the console log.** The supervisor mirrors Tsugaru's own output, which is CPU and
boot chatter; the DOS screen is only on the framebuffer. So the only way to read a result without a screenshot is to
get a **file** out, which is what `XMODEMFROMVM` is for, and which needs a writable drive to read from.

## The bypass does not need a hard disk, despite the `config.sys`

```
SHELL=C:\COMMAND.COM C:\ /P
```

names a shell on `C:`, and `COMMAND.COM` is not on the CD's 43 top-level entries. That looked like a hard
requirement for a bootable hard disk. **It is not**, because the CD carries `sys\`, `tbios\`, `towns.sys` and
`io.sys`, and TownsOS supplies its own shell. This is the third time in this work that a path string was mistaken
for a requirement.

## The superseded reading, kept because the reasoning error repeats

The suggestion was to stop TownsOS launching the GUI so the machine drops to a DOS prompt. The CD's
`AUTOEXEC.BAT` makes this easy to find, because the GUI is one identifiable line:

```
C:MSCDEX /D:TOWNS_CD /M:8 /L:Q > NUL
SET PATH=C:\;Q:\;Q:\HC386\BIN
SET IPATH=Q:\INC\
...
CONTROL -v -p -callbuf 32        <- this is the GUI
GOTO EXIT
:END
\T_TOOL\DELVDISK
\T_TOOL\REIPL
:EXIT
```

Patching those three lines **in place, same length so no ISO sector moves**, gives a CD that skips the GUI and the
reboot. The patch is mechanical and reproducible:

```
CONTROL -v -p -callbuf 32   ->  REM <25 spaces>
\T_TOOL\DELVDISK            ->  REM <13 spaces>
\T_TOOL\REIPL               ->  REM <10 spaces>
```

**It still does not reach a prompt, and the reason is decisive:**

```
SHELL=C:\COMMAND.COM C:\ /P
```

**`COMMAND.COM` is not on the CD.** It is not anywhere in the 43 top-level entries. So the CD's `config.sys` names
a shell on drive `C:`, and drive `C:` is a hard disk that must already contain a bootable DOS.

## So the hardware requirement is real, and it is a hard disk

The boot-to-DOS plan is correct in principle and incomplete in practice. What it needs is:

| drive | must contain | status |
|---|---|---|
| `C:` | a bootable TownsOS or MS-DOS with `COMMAND.COM`, and `AUTOEXEC.BAT` that sets `MSCDEX ... /L:Q` | **absent** |
| `Q:` | the High C CD | **present and verified bootable** |

**There is no hard disk image in the project.** `saves/` holds 1,232 KB floppy images (`.hdm`) only, and Tsugaru's
console exposes no command for attaching a hard disk, because that is a launch-time option.

## What that means for the next attempt

**One artefact is missing and it is not a flag or a patch: a bootable hard disk image.** With one, the sequence in
the proposal works, because every later step is verified present: `TYPE` to drive the prompt, `XMODEMTOVM` to send
the source, `TYPE` again to run the compiler, `XMODEMFROMVM` to retrieve the object, `QUIT`.

Producing that image is the whole task. Options, none yet tried:

- find a TownsOS hard disk image, which is the same class of artefact as the compiler CD
- build one: a TownsOS boot disk plus `COMMAND.COM` and `MSCDEX`, formatted as a Tsugaru-compatible `.nhd`
- use Tsugaru's own format utility if it can create and install a system disk

Until one exists, the GUI is the only way in, and the GUI needs pointer input, which is why the screenshot and
coordinate work was attempted at all.

## The geometry, measured, because it decides every click

```
Tsugaru window     640x496 at screen position (2,40)
desktop paints     the top-left 640x520 of a 1024x768 root capture
```

A screenshot is **not** a 1024x768 desktop, and treating it as one aims every synthetic click at the wrong pixel.
That is what went wrong repeatedly. A coordinate from a capture maps to a window coordinate by subtracting the
window origin, no scaling.

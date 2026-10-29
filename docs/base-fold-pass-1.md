## The first base-fold pass, through the DOS channel

Plan items 4j and 4k. This is the first pass run with the compile channel standing up, and it produced one authentic
flag, two bugs in this repository's own tools, and a named next lever. No routine is recovered yet, and this page says
exactly why.

### The channel came up and proved itself

`podman run` with the settings `docs/compile-route-dos.md` records, `tools/compile-proof.sh`, then `tools/cserve.js`
and `tools/cc.sh`. The proof's own verdict:

```
PASS: HELLO.OBJ is a 267-byte OMF object (first record 0x80 THEADR).
00000000: 8007 0005 4845 4c4c 4f00 8808 0080 aa38  ....HELLO......8
00000010: 3033 3836 3d88 1400 8000 4869 6768 2043  0386=.....High C
00000020: 2031 2e37 2e20 534d 414c 4c84 8e04 0000   1.7. SMALL.....
```

So the object itself names the compiler: **High C 1.7, SMALL model**. That is worth having as a measured fact rather
than a quoted one.

A first compile through the API, `int f(int a, int b) { return a + b; }`:

```
8b 44 24 04 03 44 24 08 c3        # 13612 ms, 10 records
```

`mov eax,[esp+4]; add eax,[esp+8]; ret`, and note the `esp`-relative arguments: **by default this generator does not
frame a leaf function at all.** That is the difference the rest of this page is about.

### Two bugs in our own tools, both frame bugs

- **`tools/cmpdisp.js` takes FILE-frame addresses** (`guest + 0x200`), not guest addresses. Asked for `0xe19f4` it
  decoded 335 bytes of unrelated code and started with `00 00 68 ...`; asked for `0xe1bf4` it decoded the real
  46-byte routine, `55 8b ec b8 f4 e3 00 00 ...`. Every tool that decodes the image this way has to be checked for the
  same thing, and the repository already knows it has three frames in play.
- **`tools/decompile-run.js` therefore mis-sizes routines**, because it calls the same decoder: it reported `0xe19f4`
  as 335 bytes and left all three supplied attempts at `needs-source`, since its key is `0x` plus hex and the
  attempt file's keys were bare hex. Both were mine, both were silent, and neither is a finding about the game.

### The authentic flag, measured on a real routine

`0xe19f4` is six stores into a static structure at `0xe3f4`, and the target is 46 bytes:

```
55 8b ec b8 f4e30000 8b 55 08 89 50 24 8b 55 0c 89 50 28 ... c9 c3
```

Four candidate sources were compiled against it. The shape is right in all of them; the differences are frames and
registers, and they separate cleanly:

| flags | first bytes of ours | result |
|---|---|---|
| none | `55 8b ec b9 f4e30000 8b 45 08 89 41 24` | 48 bytes, wrong length: no frame, `esp`-relative args |
| `-off optimize_fp` | `55 8b ec b9 f4e30000 8b 45 08 89 41 24` | **46 bytes, length agrees**, every instruction agrees, registers differ |
| `-off optimize_fp auto_reg_alloc` | `55 8b ec 50 b8 f4e30000 89 45 fc 8b 55 08 89 50 24` | value register becomes `edx`, matching the target, but the base spills to `[ebp-4]` |

**`-off optimize_fp` is confirmed on a second routine.** `docs/compiler-toggles.md` found it on `0xe52c8`; here it
converts a 48-byte `esp`-relative function into a 46-byte `ebp`-relative one, byte-length exact, with the frame, the
field order and the epilogue all agreeing.

### The lever that is left, and it is register allocation

Target: `mov eax,0xe3f4` then `mov edx,[ebp+8]` then `mov [eax+0x24],edx`.
Ours: `mov ecx,0xe3f4` then `mov eax,[ebp+8]` then `mov [ecx+0x24],eax`.

Same instructions, same count, same length, and the pointer and value registers are swapped. Three source shapes were
tried and two of them (`int *p` with indices, and a struct pointer) compile to the same bytes, so the source is not
what decides it. `auto_reg_alloc` off moves the value into `edx` correctly but spills the base, which adds four bytes.
So the target has register allocation **on** with a different preference order, and the toggle that sets that order is
not yet known.

**The sweep, and it is negative.** Five further combinations, each compiled and scored against the same 46 bytes:

| flags and source | ours | verdict |
|---|---|---|
| `-off optimize_fp -on auto_reg_alloc` | `55 8b ec b9 f4e30000 8b 45 08 89` | differs, `ecx`/`eax` |
| `-off optimize_fp -off postpone_arg_pops` | identical to the above | differs |
| `-off optimize_fp -on sched` | identical | differs |
| `-off optimize_fp -on cross_jump` | identical | differs |
| unsigned params and an `unsigned *` | identical | differs |

Every one of them is byte-identical to the plain `-off optimize_fp` result. So the register order is not reachable
from any of those names, and the source's signedness does not reach it either.

That matches what `docs/compiler-toggles.md` concluded on `0xe3c58`: of 43 real toggle names, none produced the
difference it needed, and the remaining explanations were "a different build of the compiler, or a hand-written
fragment" rather than a flag. The one lever this page has **not** tried is the other generator route: the driver,
`HC386.EXE` plus `RUN386`, where `docs/highc-authentic-toolchain.md` measured the optimiser engaging (`lea
eax,[ecx+ecx]` for a multiply by two). That path is the Towns one, which needs TownsMENU and cannot coexist with a
writable volume on the floppy-boot route, so it is a session of its own and not a flag to try.

### What this does not claim

No routine in `docs/queue.json` has changed status. The 31 parked routines are still parked, and this pass recovered
none of them: it established the flag, the toolchain's identity, and the one lever standing in the way, which is
strictly less than a recovery and more than nothing.

### A second routine refutes the single-flag reading

`0x104190` is the next one tried, a 36-byte flag toggle with no parameters, and it does not fit the same story:

```
target  80 3d 2f fd 0d 00 00 74 0b a1 f8 fd 0d 00 80 70 09 80 eb 0f a1 f8 fd 0d 00 80 78 0b 00 75 04 … c3
```

That begins with `cmp byte [0xdfd2f],0`: **no frame at all**, straight in. So the game frames `0xe19f4` (six
parameters) and does not frame `0x104190` (none), which is what a compiler does when it frames *only where it must*.
`-off optimize_fp` therefore cannot be the build flag: it framed `0x104190` wrongly (the `DIFFERS` row above), while
without it `0xe19f4` came out four bytes short.

Two reads are possible and the measurements do not separate them:

- the build used the default (`optimize_fp` on), and `0xe19f4` is framed because of something in its real source that
  my candidate lacks, such as an address-taken local or a call
- the build is genuinely a different compiler, which is what `docs/compiler-toggles.md` was left concluding on
  `0xe3c58`

What the pass does establish is the shape of the next test: **the flag is per-function behaviour, not a global switch**,
so the search has to move to why one function is framed, not to which flag frames everything. That is a reading
question about `0xe19f4`'s real source, and it is cheaper than another flag sweep.

### The cheap reading, done, and it closes the flag line

`0xe19f4` has **21 callers, in pairs**, at `0xe31d3` to `0xe33be`: `0xe1a24` then `0xe19f4`, over and over every
`0x30` bytes, eleven of each. So the pair are two setters for two six-word blocks of one structure at `0xe3f4`:
`0xe19f4` writes `+0x24` to `+0x38`, `0xe1a24` writes `+0x3c` to `+0x50`, and the block of calls is a table of
assignments with immediate arguments. That is a behavioural fact about the routine and it stands on its own, whatever
happens to the bytes.

The frame hypothesis was that a 24-byte parameter passed **by value** forces a frame with no locals, since six
consecutive dwords at `[ebp+8]` look exactly like a struct parameter. Two candidates tested:

| source | flags | ours | verdict |
|---|---|---|---|
| `struct S6` by value, field-by-field copy | none | `b9 f4e30000 8b 44 24 04 89 41 24` | 48 bytes, `esp`-relative |
| `struct S6` by value, field-by-field copy | `-off optimize_fp` | `55 8b ec b9 f4e30000 8b 45 08 89 41 24` | 46 bytes, still `ecx`/`eax` |
| `struct S6` by value, single assignment | either | `f3 a5` (`rep movsd`) | 27 bytes, wrong shape entirely |

So the parameter is **six separate ints**, not a struct: a by-value struct either collapses to `rep movsd` or compiles
to the same `ecx`/`eax` code as the six-argument version. Nothing about the source forces the frame.

**The flag line is therefore closed for this routine, and closed by measurement rather than by giving up.** Nine
combinations have now been tried, three of them named `-on`/`-off` toggles, one a signedness change, two a by-value
parameter, and every one either produces `ecx`/`eax` or a wrong shape. The difference that remains is the allocator's
preference order, and it is not reachable from any name this project can pass on the command line.

The two explanations left are the ones `docs/compiler-toggles.md` reached on `0xe3c58`: **a different build of the
compiler, or the optimiser-engaged driver route.** The driver route is the Towns one, needs `RUN386` and `TownsMENU`,
and cannot coexist with a writable volume on the floppy boot, so it is a session rather than a flag.

### The driver route: reachable, and not yet trustworthy

**One real unblock.** The route needs a source file inside the TownsOS hard disk image, and the documented method for
that is `mount -o loop,offset=1536`, which needs `sudo`. This host has no passwordless sudo, and the route works
without it: the image is a TOWNS**SYSTEM** filesystem at byte `1536` and mtools reads and writes it with
`MTOOLS_SKIP_CHECK=1`.

```
MTOOLS_SKIP_CHECK=1 mdir -i saves/scratch-tos11en.h0@@1536 ::
 Volume in drive : is TOWNSSYSTEM
 CONFIG   SYS        84 1989-11-21  19:01
```

Booting `localhost/fmtowns:latest` with `TSUGARU_EXTRA=-CD /data/hc.ccd -HD0 /data/<copy>.h0` and no `-BOOTKEY`
reaches the prompt, and `hc386 R1.C` under it writes `R1.EXP` beside the source.

**What is not established, and why it is written as a failure.** Two runs gave contradictory results and both are
suspect:

- the first returned a 560-byte `R1.EXP` holding the candidate compiled exactly as the DOS route's *default* produced
  it (`b9 f4e30000 8b 44 24 04 89 41 24 ...`, 48 bytes, unframed)
- the second returned a 536-byte `R1.EXP` holding **a different function entirely**, the `"="` scanner at `0xe9e2c`,
  which cannot come from this source. It was a **stale output left on the image by an earlier session**, and the
  read-back could not tell it from a new one
- a third run, with `R1.EXP` deleted from the image first, produced **no `R1.EXP` at all** under
  `hc386 R1.C -off optimize_fp`, so the command did not take effect

So the route is reachable and has produced nothing trustworthy. The defect is in the driving, not the toolchain: the
script sleeps and types blind, which is exactly the failure `tools/hc17-harness.sh` was written to avoid (it scrapes
the screen for the prompt). A driver-route measurement needs prompt detection and stale-output deletion before the
boot, and that is the next step rather than another flag.

**What it does say about the question asked.** The one run whose output was plausibly fresh matched the DOS route's
default byte for byte, so the first thing to test with a reliable driver is not the route but the route **with a
flag**, since the driver is where the optimiser engages.

### The second attempt at the driver route, and the three things it found

Four more boots, no marker, no compile. Three of the findings along the way are real and none of them is about the
game:

1. **The image does not boot to DOS.** `scratch-tos11en.h0`'s `AUTOEXEC.BAT` runs `CONTROL`, the TownsOS desktop:
   `set comspec=c:\command.com` / `set prompt=[$p]` / `:START` / `CONTROL` / `if errorlevel 1 GOTO OAK2ERR`. So no
   interpreter is there to type at, which is why "no prompt" kept happening. Patching `CONTROL` out of a copy is
   the technique `tools/hc17-harness.sh` already documents, and it was applied here (read back to confirm) without
   changing the outcome.
2. **The console's `TYPE` is known to be a no-op on this build, and it is recorded in this repository.**
   `container/supervisor.js` says: *"The console's TYPE command is unreliable here: it is accepted without error but
   does not move the game, verified by identical screenshots before and after. xdotool ... does work, so that is the
   default."* The first three attempts drove the guest with `TYPE` through `/api/cmd`, so their knocks were swallowed
   and every one of those runs tested nothing. `tools/hc17-harness.sh` uses `TYPE` because it was written against an
   older supervisor.
3. **A marker file is the detector that cannot lie**, and it is the one to keep: the guest writes `MARK.TXT` to the
   image and the host polls mtools for it. Screen scraping cannot do this job, because `/api/screen?mode=text`
   returns a coarse luminance character grid rather than OCR, so a DOS prompt is not recognisable in it at all.

**Where it is blocked.** With `CONTROL` patched out and keystrokes going through `/api/keys`, the marker still never
appeared within six minutes. That leaves two possibilities the attempts did not separate: `/api/keys` does not reach
this guest either, or the guest is not at a prompt even without `CONTROL`. **The next move is to watch the boot**,
over noVNC on the container or through a screenshot read with the vision model, rather than inferring the guest's state
from a marker that depends on the very thing being tested. That is cheaper than another blind boot and it is what four
failed runs say to do.

### Watched the boot, and it corrects the paragraph above

A screenshot of the boot, read with the vision model, shows the guest at a prompt:

```
window title: FM Towns Emulator - TSUGARU
IF ERRORLEVEL 1 GOTO END$
REMS
GOTO EXIT$
Entering Interactive Mode.
Q:\>_
```

Three things follow, and the first one is a correction to what this page said ten minutes earlier:

- **The guest does reach a prompt**, and it always did. What it does *not* do is boot the hard disk: the prompt is
  `Q:\>`, and the `IF ERRORLEVEL ... GOTO` lines above it are the **CD's** `AUTOEXEC.BAT` echoing. So the machine booted
  the CD, my `-HD0` image's `AUTOEXEC.BAT` was never executed, and patching `CONTROL` out of it could not have changed
  anything. The claim "the image does not boot to DOS" was wrong as stated; the right statement is "the CD wins the
  boot, so the image's AUTOEXEC never runs".
- **Every marker I asked for was being written to a read-only CD.** `echo x>MARK.TXT` at a `Q:\>` prompt cannot
  succeed, so the marker detector was guaranteed to see nothing regardless of whether the keystrokes arrived. Three
  marker-based runs therefore tested the writability of the CD, not the readiness of the guest.
- **The route the docs describe is therefore the right one and my vehicle was wrong.** `docs/highc-authentic-toolchain.md`
  says the HDD boot reaches DOS, and that requires the CD *not* to take the boot. The working invocation it records is
  exactly this container line with `-CD` seated, so either that page's run used an image that boots first or the CD's
  boot ordering differs from what it assumed.

**Two questions remain, and one boot answers both**: whether `/api/keys` reaches this guest at all, and which letters the
drives have when the CD is the boot device. The test is to boot, send `c:` then `dir`, and take a screenshot: the screen
then shows either the directory or `Invalid drive specification`, and either way it proves whether the keystrokes land.
That is the next step, and it is one boot rather than a flag or a guess.

### The test, run, and it answers both questions plus a third

A probe batch on the hard disk (`echo alive > C:\ALIVE.TXT` and a `dir` of each drive), one short command typed, and a
screenshot read back each time. The final screen, transcribed:

```
IF ERRORLEVEL 1 GOTO END$
REMS
GOTO EXIT$
Entering Interactive Mode.
Q:\>c:
Wrong Command or File Name.
Q:\>probe
Wrong Command or File Name.
Q:\>_
```

Three answers, in the order they were established:

- **The keystrokes land and Return submits.** An earlier run typed `c:\probe` and got `Wrong Command or File Name.`
  followed by a fresh prompt, which is only possible if the text arrived, was submitted, was executed and failed. So
  `/api/keys` plus a named `Return` works, and every earlier claim that typing might not reach the guest was wrong.
- **The supervisor's `xkey()` cannot type a backslash.** That run's command reached the guest as `c:probe`: the
  mapping in `container/supervisor.js` covers space, Return, Tab and the named keys, and has no entry for `\`, so the
  character is dropped. A DOS path therefore cannot be typed at all, and the workaround is two commands, not a path.
- **`c:` is not a command at this prompt.** With two short commands the guest answered `Wrong Command or File Name.`
  for `c:` itself. So the shell reached by booting this CD is **TownsOS's interactive mode**, not a DOS shell: drive
  letters are not commands there, and nothing on the hard disk can be run from it by typing DOS syntax. That is why the
  probe batch never ran, and it is the real reason every marker attempt failed.
**So the driver route cannot be driven from the CD's prompt.** It needs the shell that is reached by booting the hard
disk (`docs/highc-authentic-toolchain.md` describes that prompt as `Q:\>`, which is why the two were easy to confuse),
and the CD wins the boot whenever it is seated. The untried combination is the HDD boot **without** the CD seated, with
the compiler already installed on that disk, or the CD's own `AUTOEXEC` patched to run the compile (the
`tools/hc17-harness.sh` technique) with its output going to the hard disk.

**And a correction to the paragraph above**: the prompt does not prove the guest can be driven, only that it can be
reached. Typing works; the command language at that prompt does not match the one the scripts speak.

### Three corrections to the paragraphs above, all from the user's two remarks

**The backslash claim was wrong.** `container/supervisor.js` handles it, and says so in a comment at `xkey()`: the guest
keyboard is a Japanese 106 layout, `backslash` there is the yen key and yields `\u00a5`, so the map sends
`intl_backslash`, the X keysym whose purpose is to emit a real `0x5C` on that layout. The separator did reach the guest;
what made `c:probe` look separator-less was the **vision model's transcription** of the screenshot, which is not a
character-exact instrument and should not have been quoted as one.

**Forward slashes work, and the shell is DOS-like.** With `/` typed instead of `\`, `dir` executed and listed the CD's
root (`IMENU.IF2`, `TOWNS.ICO`, `TOWNS.SYS`, `T_FILE`, `T_TOOL`, `T_UTIL`, `VLIB`, `VOICE`). So the interpreter takes DOS
commands and slash-separated paths, and the earlier `c:` failure was about the drive, not the syntax.

**There is no writable drive at all in this configuration.** `dir a:/`, `dir c:/` and `dir d:/` each answered
`No such file or directory.` Booting from the CD means the hard disk mounted as `-HD0` is **not** a DOS drive, and no
floppy is attached, so the only volume is a read-only CD. That is why nothing could ever be written, why every marker
was impossible, and it agrees with the limitation `docs/decompiling-experiment.md` records as "GDS resident plus
writable volume plus DOS prompt is enough" being ruled out.

**What that means for the next attempt, concretely.** The driver route needs a boot that produces a writable drive. Two
candidates, in cost order: attach a floppy (`-FD0 /data/<image>.hdm -FD0UP`) to this same CD boot and see whether `A:`
appears, or boot the hard disk with the CD absent and the compiler installed on that disk. The first is one flag and one
`dir a:/`; the second needs the SDK on the disk.

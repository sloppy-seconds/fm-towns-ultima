## Driving the TownsOS prompt

Everything needed to type at this machine, gathered in one place. Four separate sessions re-derived parts of it, and
one of them (this page's own first pass) contradicted another, so the rules are here with their evidence rather than
scattered through experiment pages.

### Reaching it

Boot the **patched SDK CD**: three lines of its `AUTOEXEC.BAT` replaced in place at the same length, which is what
`tools/hc17-harness.sh` documents and `docs/tsugaru-headless.md` records as working. The machine prints
`Entering Interactive Mode.` and lands at `Q:\>`.

Booting the **hard disk** is a different prompt that also reads `Q:\>`, which is why the two are easy to confuse. When
a CD is seated the CD wins the boot, so a `-HD0` image's `AUTOEXEC.BAT` never runs at all and patching it changes
nothing.

### Typing into it

- **`POST /api/keys {"text":"..."}`** sends characters, and **`POST /api/key {"keys":"Return"}`** sends named keys. That
  is the route that works.
- **The console's `TYPE` command is a no-op on this build.** `container/supervisor.js` records it: accepted without
  error, does not move the guest, verified by identical screenshots. `tools/hc17-harness.sh` still uses `TYPE` because
  it was written against an older supervisor, so its technique transfers but its transport does not.
- **The keyboard is a Japanese 106 layout, and `xkey()` handles it.** `backslash` on that layout is the yen key and
  yields `¥`, so the map sends `intl_backslash`, the keysym that emits a real `0x5C`. Colon, and the other characters
  with no direct key, are handled the same way. So ASCII paths *can* be typed; a path that appears to have lost its
  separator in a screenshot has probably been mis-read, not mistyped.
- **A carriage return in the text does not reliably submit.** Send the line, then a named `Return`.
- **Build JSON with a JSON encoder, not `printf`.** Hand-building put a bare `\p` into a payload, which is an invalid
  JSON escape, and the command silently did not run.

### The command grammar, and the one rule that costs a session

**A drive letter alone is not a command.** `c:` answers `Wrong Command or File Name.` The form that works is
**`cd c:`** and then a separate **`dir`**. The same applies to a path: `dir c:/` is not how a drive is listed.

`dir` with no argument lists the current directory, and forward slashes are accepted in paths, so `cd q:/hc386/bin`
works and avoids the backslash question entirely.

**SUPERSEDED by the correction below: the hard disk IS mounted, as `D:`.** This paragraph was written from `dir a:/`,
`dir c:/` and `dir d:/` all answering `No such file or directory`, and concluded there was no writable volume. The
failures were the wrong command form, not missing drives. Keep the measurement (`docs/highc-negative-result.md` found
no extra letters in the SRAM drive table) and drop the conclusion: `cd d:` then `dir` reaches the hard disk.**The workaround, and it is the shape to use**: put the complex part in a `.bat` on a volume that exists and is
writable, and type one short command. That needs a floppy (`-FD0 <image> -FD0UP`) or an HDD boot, neither of which has
been tried with the CD also present.

### CORRECTION: the hard disk IS there, as `D:`, and it already holds compiles

> This page said "no writable volume at all" in the paragraph above. **That is wrong**, and it cost a session. The
> `-HD0` image is mounted and writable as **`D:`** when this CD boots. `dir d:/` failed because of the syntax rule two
> sections up, not because the drive was absent: **`cd d:` then `dir`**. The same mistake made `dir a:/` and `dir c:/`
> look like absent drives when they were the wrong form of the command.

What is actually on `D:`, read from the host with `MTOOLS_SKIP_CHECK=1 mdir -i saves/scratch-tos11en.h0@@1536 ::`:
the TownsOS system files, 98 directory entries, **and the previous session's compile work**:

```
R1  C      65 2026-10-26 18:19     char *f(char *p) { while (*p != '=' && *p) p++; p++; return p; }
R1  MAP   706 2026-10-26  8:20     386|LINK: 2.2dJ -- Copyright (C) 1986-90 Phar Lap Software, Inc.
R1  EXP   536 2026-10-26  8:20
```

Three things follow, and the first one means the driver route is **already known to work**:

- That `R1.MAP` is Phar Lap's linker map, so `hc386` compiled and linked on this image, through the driver, in an
  earlier session. The route does not need proving; it needs remembering.
- The source it built is the **`"="` scanner at `0xe9e2c`**, the routine `docs/routines.json` records as `matched`
  byte-exact through the DOS route. So on that routine the driver's output matched the DOS route's, which is the first
  real comparison between the two generators and it says **they agree by default**.
- The 536-byte `R1.EXP` is what a later run of mine read back and called "a stale output containing a different
  function". It was stale, but it was not mysterious: it was this file, from this compile.

**The correct shape for the next attempt**, with the drive letter right: at `Q:\>`, `cd d:`, then run the driver with a
source already on `D:` and its output landing there. No floppy is needed, and none of the four failing runs needed one.

### What this page does not claim

`cd c:` followed by `dir` is recorded from Paul, who knows this machine's shell, and the run that tested it could not
be read: the screenshot showed a scrolled directory listing and a clean prompt with no error line, which is consistent
with success but is not proof. The screenshot instrument is named as unreliable here for a reason: a vision model
transcribing a DOS screen garbled a path separator once and a claim was built on it.

### Why this page exists

The rules above were re-derived in four separate sessions, and one of them wrote "the supervisor cannot type a
backslash" into a page, which is false and was traced to a mis-read screenshot. `docs/hdd-build-environment.md` already
said to "type the path without the drive letter at all by first changing to the directory", and
`docs/highc-negative-result.md` already said there were no drive letters beyond the CD. Both were correct, both were
forgotten, and neither was where the work was happening. This page is that missing place.

# Overnight report

Written for the next session to resume from, and for Paul to read first in the morning. Timestamps are
deliberately absent because the machine clock and the session clock have disagreed before. The commit list is
the record of order.

## Setup, decided 2026-10-28

The queue was misaligned when this started and that is worth recording, because the fix is the reason the
rest of this page is ordered the way it is. `node tools/plancheck.js --todo` reported **13** startable items
and every one was Track A corpus work: the high bits of a map cell, the byte-match rate, the `ndisasm`
migration, the routine queue, and so on. There was **no port item in `plan.md` at all**, because the port work
has been running ad hoc in `recomp-plan.md`. Following the queue would have been the sidetrack it exists to
prevent.

So Phase 7 now exists in `plan.md`: 7a, 7c, 7d, 7e, and `overnight.md` says to work those first.

Three rules were settled with Paul before he went to bed:

- the emulator is allowed, with the discipline in `overnight.md` rule 6, because it now needs no hands
- commits stay local, nothing is pushed
- this page is the morning report

## Where the port is

`build/port/b/u2port`, built by `tools/port-build.sh`, on branch `fmt-towns-port`. It runs **24,000 frames and
6,399,984,003 guest clocks with no fault**, with 818 functions in the game module and 5,573 in the TBIOS module,
0 refused and 0 conflicts in both.

**But those frames were not progress at the time, and that is worth keeping on the page.** The machine was put
under breakpoints during a complete start-up and it **never executes guest `0x0e25ae`**, which is where the port
sat forever waiting for a key, while a control breakpoint at `0x10241a` fired after 6.0 seconds in the same
run. The port was on a path the real program does not take. A spinning program is not a faulting one, which is
why only a screen check could show it.

**That cause is now fixed.** The divergence was a missing `A:` drive: the program probes `A:\ROSTER1.UT2` before
it draws anything, the port had no floppy, and the probe failure put it in an "insert the disk" prompt. The port
now has a FAT12 reader over `saves/userdisk.hdm` and prints
`attributes: A:\ROSTER1.UT2 -> floppy, attr 20, 3701 bytes` followed by `handle 5 (floppy, 3701 bytes)`. The
prompt is gone. It still draws nothing, so there is a second divergence, and it is already named: `0x10386b`,
the first of 25 addresses the port executed that the machine has no record of.

Live measurements against the emulator agree with it on one buffer the program itself filled, the `int93`
outregs at DS:0x7a634.

## Item 7c, DONE

**What the item asked:** every byte of the code range that differs between the file and live memory, each
explained or recorded as unexplained, with the `int` vector at guest `0x10241b` recovered by the diff rather
than assumed to be alone.

**What was built.** `U2_DIFF_CODE=1` on the port compares guest memory against the image on disk at the end of
a run, and `U2_COVERAGE=<file>` narrows it to bytes the recompiler decoded as instructions, written by
`tools/insncoverage.py` from the same walk and the same seeds.

**The answer, after 24,000 frames:**

```
patched   guest 0x10241b  00 -> 93
patched   522674 bytes differ, of which 1 are inside a decoded instruction
```

Exactly one instruction byte in the image changes at run time, and it is the `int86` vector, recovered by the
diff rather than assumed. The self-modifying-code hazard is one site, not a class. The scope is 24,000 frames
of what the program actually executed.

## Item 7d, in progress

Two faults past frame 3,000 were functions the static rules could not classify, and both are now covered by a
rule rather than by hand:

- the timer interrupt handler at guest `0x0fdde8`, which has no High C prologue and which
  `lea reg, [disp32]` finds, because that is how this compiler takes a function's address
- the four hook pointers in its data segment, read live at DS:0xdea3c with `MD` and recorded in
  `tools/runtime-seeds.txt` with the dump that produced them

Frame 4,026 became **24,000 frames, 6,399,984,003 guest clocks, no fault**, 818 game functions and 5,573 TBIOS,
0 refused and 0 conflicts. What remains is the count: 30 unresolved indirect transfers in the game module and
67 in TBIOS.

## Item 7a, the answer: a missing floppy drive

The differential trace found it. `-DX86_TRACE_ON` plus `x86_trace` logs each address the first time the port
executes it, which stays bounded however long the run, `cfgprobe.py capture --journey` gives the machine's
block-level control flow, and `tools/divergence.py` compares them. After 600 frames the port executes **4,216**
distinct addresses in segment `000C` and **4,200 match a machine record exactly**. The first of the sixteen that
do not is `0x0e259b`, a `je` that the machine takes and the port does not:

```
0x0e2591  call 0xe23cc
0x0e2599  and eax, eax
0x0e259b  je 0xe2623      the machine jumps over everything below this
0x0e25a1  push 0x1930     message 0x1930
0x0e25a6  call 0xe75f8    print it
0x0e25ae  push 2          then read a key, in a loop
```

An error dialog. Three hops later the check is `int 21h AX=4300`, get file attributes, at guest `0x102317`, and
instrumenting it prints one line:

```
  attributes: A:\ROSTER1.UT2 -> not found
```

**So the port has been sitting in an "insert the save disk" prompt.** The machine mounts `saves/userdisk.hdm` as
`A:` and its probe succeeds. The port has no `A:` drive at all, so the probe fails and the program waits for a
key. That is why nothing is drawn: the error path draws nothing, and no amount of frame counting could see it.

The fix is a floppy drive, not a return value. Answering the attribute query without serving the reads that
follow would move the failure one call later and hide it. `saves/userdisk.hdm` is a real FM Towns floppy and
`tools/savedisk.js` already walks its FAT12.

## What to do next, in order

Paul's order for this morning, recorded because the reasoning matters as much as the list: **defects first, then
the new seeds through the recompiler to see what falls out, then the rest.** Findings before tidying.

Done since that was written: **8a, 8b, 8c, 8d, 8e**, **7d**, **7e**, **7f** and the second, third and fourth port
walls. Open: **7a** (the divergence is now control flow, not data), **8f**, **8g**.

**The port has a window now.** `--graphics=sdl` (the default) opens the kit's SDL front-end and runs paced by its
sound, and `--graphics=none` is the headless path every measurement uses. Patch fourteen bridges the host's
keystrokes to the Towns keyboard, so the game is typable in the window rather than only drivable, and the same run
under either backend gives identical clocks. A 200-frame run: `machine frames 200  guest clocks 53552100` on all
three paths.

**7f ends with the port drawing the title screen.** Three walls stood between the floppy reader and a picture, and
all three were machine state the port did not have: a keyboard (`int 90h` answered "no key" for ever, contract
measured and implemented as patch eleven), an unknown-port report that named nothing (patch twelve), and, the one
that mattered, **selector `0120`**, which `STA` reports at linear `0x80000000` and which is where the program draws.
The port had no descriptor for it, so there was nowhere to draw and nothing faulted. With it:
`181402 of 524288` VRAM bytes non-zero, `386205 writes`, and `U2_SHOT` renders a 704x525 frame that is the Ultima II
loading screen. Palette still unsettled.

1. **7a, and it is one byte.** The port and the machine now agree on the heap base, the heap limit, `ESP`, and the
   hand-off entry. The only remaining divergence is that the machine has `0x80` at DS `0xBAA`, the byte a
   table-building loop copies, and the port has `0x00`. See the last section of
   [recomp-plan.md](recomp-plan.md) for what was ruled out: Phar Lap `250F` (the profile was wrong, fixed, no
   change), a differing `DS` selector (it is `0014` base `0x400000` on both sides), and leftover RAM (the image
   load overwrites that region with the file's zeros, so something writes it afterwards)
2. **The next experiment is port-side, and the watch for it now exists.** `U2_WATCH=<linear>[:<len>]` reports every
   write into a linear range with the instruction that made it, which is patch ten in [recomp-plan.md](recomp-plan.md).
   Its first use answered the question behind 7a's byte: the port **never writes** `0x400BAA` in 600 frames, and
   the three bytes it does write in that block match the machine's, so this is a control-flow divergence, not a
   data one. `U2_STOP_AT` now also prints eight dwords of stack, so the call chain at a stop is visible on both
   sides without a debugger
3. then 7d, 7f, 8f, 8g as before. **7e is done**: `tools/portcheck.js` holds 17 checks, needs no emulator, no
   disc and no recompile, and was made to fail on purpose three ways before it was trusted

Under it all, the rule that has held for three sessions now: when the port and the machine disagree, read the same
instruction's inputs on both sides before reading any more code. Four walls in a row have been machine state the
port fabricates, not bad instructions.

## Standing hazards, written down because each one already cost time

- three frames of reference: raw file, stripped (`file - 0x20`), guest (`file - 0x200`). Item 6a exists
  because of it. Check the frame before believing an address.
- the emulator wedges if breakpoints and `BRKON` monitors are left armed. `BC *`, `BRKON OFF`, restart the
  container, and it recovers in five seconds.
- `references/` is not committed, so every patch to the kit must be recorded in `docs/`. There are four now:
  `int90` case 0x04, `int93` `AL=0x20`, `int21` case 0x43, and the self-patched `int` vector.

  > **Correction, superseded.** The kit is now a git submodule at `fmtownskit/`, on branch `mp-support` of the fork
  > `paulczar/fmtownskit`, so the changes are committed and pushed rather than kept as local edits. The record they
  > needed still exists and is now mechanical: `patches/fmtownskit-mp-support.patch` mirrors the branch and
  > `node tools/patchcheck.js` asserts it is exact. See [fmtownskit-patches.md](fmtownskit-patches.md).
- a python or shell script that rewrites a tracked file has already eaten a section of `plan.md` once in this
  project's history. Use `edit`.

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

**But those frames are not progress, and that is the most important thing on this page.** The machine was put
under breakpoints during a complete start-up and it **never executes guest `0x0e25ae`**, which is where the port
sits forever waiting for a key, while a control breakpoint at `0x10241a` fired after 6.0 seconds in the same
run. So the port is on a path the real program does not take. A spinning program is not a faulting one, which
is why only a screen check could show this.

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

1. **7f: give the port a floppy drive.** A FAT12 reader behind the interface the CD already uses, driven by
   `saves/userdisk.hdm`, translating `tools/savedisk.js`. Success is the port taking the `je` at `0x0e259b` the
   way the machine does and drawing something. Do not shim the attribute query
2. then re-run `tools/divergence.py` against the same capture: the next divergence is the next missing piece
3. 7d, the 30 and 67 unresolved indirect transfers
4. 7e, a port regression `checkall.js` can run without the emulator
5. 6a, one frame of reference per tool

## Standing hazards, written down because each one already cost time

- three frames of reference: raw file, stripped (`file - 0x20`), guest (`file - 0x200`). Item 6a exists
  because of it. Check the frame before believing an address.
- the emulator wedges if breakpoints and `BRKON` monitors are left armed. `BC *`, `BRKON OFF`, restart the
  container, and it recovers in five seconds.
- `references/` is not committed, so every patch to the kit must be recorded in `docs/`. There are four now:
  `int90` case 0x04, `int93` `AL=0x20`, `int21` case 0x43, and the self-patched `int` vector.
- a python or shell script that rewrites a tracked file has already eaten a section of `plan.md` once in this
  project's history. Use `edit`.

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

`build/port/b/u2port`, built by `tools/port-build.sh`, on branch `fmt-towns-port`. It completes start-up,
opens its real assets in order, and runs 3,000 frames and 799,998,234 guest clocks with no fault. 796 functions
in the game module, 5,573 in the TBIOS module, 0 refused and 0 conflicts in both.

Live measurements against the emulator agree with it on one buffer the program itself filled, the `int93`
outregs at DS:0x7a634.

## Item 7c, in progress

**What the item asks:** every byte of the code range that differs between the file and live memory, each
explained or recorded as unexplained, with the `int` vector at guest `0x10241b` recovered by the diff rather
than assumed to be alone.

**What was built.** `U2_DIFF_CODE=1` on the port compares guest memory against the image on disk at the end of
a run and prints every byte that changed. That is the whole mechanism, and it needs no emulator.

**What it found after 3,000 frames.** 522,596 of 1,071,886 bytes differ, which is the honest first result and
is not the answer to the question. The file's data region is zero-filled and the program fills it at run time,
so almost all of that volume is ordinary initialisation. Three things are worth naming:

- `guest 0x10241b  00 -> 93`, the known `int86` vector. The diff recovers it, which is the control.
- `guest 0x1023e6  00 -> 02` and `guest 0x1023ea  00 -> 82`, in the zero padding between the two `int86`
  stubs and their name strings. Unexplained.
- a cluster at `0x0e00c9` to `0x0e0101`, values `ee 04 14 46 02 d8 ea 11 ...`, which look like a pointer table
  the program builds. Unexplained.

**What is needed to finish it.** The raw diff cannot tell a data write from a patched instruction, and only the
second kind is a latent port fault. The filter is a coverage set: the instruction addresses and lengths the
recompiler already knows, so that a difference is reported only when it lands inside an instruction's bytes.
The recompiler has that set internally, and `tools/cfgwalk.js` has the boundaries but not the lengths. Either
one emits it, and then the answer is a short list instead of half a megabyte.

**Do not** re-run the raw diff hoping for a smaller number, and do not conclude from it that the program is
clean.

## What to do next, in order

1. finish 7c with the coverage filter, then
2. 7a, the port's screen against the machine's, which is the strongest validation available and has never been
   attempted
3. 7d, the 26 and 67 unresolved indirect transfers
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

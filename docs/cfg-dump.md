# A CFG dump from the emulator: what was added and what it cost

Tsugaru records the last 65,536 `CS:EIP` values in a ring buffer and `SAVEHIST` writes them out.
That is a list of **nodes**: it says where execution was, not how it got there. A control-flow graph
needs the **edge**, and the edge is only knowable at the moment the next instruction is fetched, so
`BeforeRunOneInstruction` cannot supply it.

This page records the change made to the emulator to add edges, and the limits of building it here.

## What was added

Branch `cfg-dump` on the clone at `references/TOWNSEMU`, commit `a5e5ffda`.

| command | effect |
|---|---|
| `CFGSTART` | clear the graph and begin recording |
| `CFGSTOP` | stop and report the distinct edge count |
| `SAVECFG file.txt` | write `src dst kind count`, one line per distinct edge |

### The kinds, and why they come from the source opcode

```
F  fall-through
J  jump or branch
C  call
R  return
S  segment change (far call, far return, interrupt)
```

**The destination is never used to classify an edge.** A jump to the next instruction and a
fall-through land at the same address but mean different things, and a branch over a one-byte
instruction is indistinguishable from a fall-through by address alone. Only the source opcode
knows, so the classifier switches on `inst.opCode` via `RealOpCode()` and checks the `0x70`-`0x7F`,
`0x0F80`-`0x0F8F` and `0xE0`-`0xE3` families explicitly. Anything that moved EIP somewhere other
than `src + numBytes` is still a branch even when its opcode is not one the switch names, which is
how indirect jumps are caught.

### Where the edge closes

`AfterRunOneInstruction`, not `BeforeRunOneInstruction`. At the before-hook EIP still points at the
instruction about to run, so the destination is unknown. Recording happens after, when EIP has
landed, and the instruction that just ran becomes the source of the next edge.

The last instruction of a capture has no destination, and `CFGFlush` drops it rather than inventing
one from the instruction length. That would be a guess for everything that is not a fall-through.

### Cost

One `std::vector` entry per distinct edge, keyed by `(src<<48) ^ (srcOffset<<24) ^ (dst<<12) ^ dstOffset`.
A busy loop costs one entry with a high count rather than one entry per iteration, so a graph of a
real program stays small. The hook runs once per instruction, in the same function that already
increments `instHist[opCode]`, so the added cost is one map lookup.

## What was built and verified

**The recorder runs and produces a graph.** From the `fmtowns` container, booting the disc:

```
>CFG capture stopped. 1427 distinct edges.
>Saved 1427 edges.
```

Edge kinds in a boot capture: `F 305, J 941, C 39, R 65, S 73`. From a state loaded into the game:
`F 649, J 2550, C 94, R 162, S 336`, 3,791 edges.

**The arithmetic check passes completely.** Every fall-through edge satisfies `dst == src + numBytes`:

| capture | F edges | correct |
|---|---|---|
| boot | 305 | **305** |
| in-game savestate | 649 | **649** |

The file also carries the source opcode, its length, the exception flag and the linear base of CS, so
a reader can re-derive every classification rather than trust it.

## Three defects found by running it

1. **`CFGSTART` recorded nothing at all**, reporting 0 edges on a busy machine. The hook lives on the
debugger and `i486runinstruction.h` guards its call with `nullptr!=debuggerPtr`, so a default CUI run
has no hook. `CFGSTART` now calls `EnableDebugger()` itself.
2. **`SAVECFG` wrote too little to audit.** Source opcode and length were added, which is what made
the next defect visible.
3. **The linear base was missing**, and without it a segment selector is not an identity: `CS 000C`
is boot code early and the game image later. That absence caused a long stretch of comparing
captured addresses against zero fill in `ENCHANT.EXP` and concluding wrongly.

A wrong fix was attempted and reverted: storing the source as `dst - numBytes` instead of `dst`.
That produced 1268 `J` edges and **zero** `F` edges, which is the worst failure this tool can have,
because an all-branches graph looks like data.

## Pre-execution EIP: measured, and it changes the picture

Recording the EIP from `BeforeRunOneInstruction` alongside the post-execution one was the stated next
step, and it was worth taking.

**`preEIP + preLen == src` for 405 of 415 fall-through edges (97.6 percent).** The EIP arithmetic is
sound. The recorder is storing the address the CPU actually held, and the length it actually used.

An earlier version of this measurement reported **0 of 305** and was wrong, because it paired the
pre-execution EIP with the edge's destination rather than its source. `pre + len` lands on `src`, not
on `dst`, because `src` is the address *after* the instruction whose start `preEIP` records. Getting
that pairing wrong makes a correct recorder look completely broken, which is the second time in this
investigation that a mis-specified comparison produced a confident false negative.

## The zero region is runtime-filled code, not padding

`ENCHANT.EXP` has `0x10000` to `0x20000` as **65,536 bytes of zeros**. An earlier reading of this
concluded that addresses there were not real code and that the recorder was at fault. That was
backwards.

The game **writes code into that region at runtime**. A boot capture has 413 of its 535 game-segment
edges sourcing from inside it, and none of them decode against the file, because the file is not what
the CPU is executing there. The emulator is right and the file comparison was the broken thing.

## The address mapping: found, and the mistake was which column to read

**`image offset = preEIP + 0x200`, where `preEIP` is the address of the instruction, for
segment `000C`.** Verified on 1,555 edges captured from a running game: **1,546 agree with the
emulator's instruction length, 9 differ, 99.42 percent.**

### The mistake

Every earlier attempt decoded at the edge's `src` column. That column is the address the CPU held
**after** the instruction ran, so it points at the *next* instruction. Decoding there compares the
wrong bytes with the right length, which cannot agree, and gave 33 percent however the offset was
chosen.

The record has carried a `preEIP` column since the pre-execution EIP was added, and it is the address
the instruction actually started at. The same decoder, the same `+0x200`, reading `preEIP` instead of
`src`, moves the figure from 33 percent to 99.42 percent.

A concrete pair from the capture:

| column | value | what it is |
|---|---|---|
| `src` | `0x000A9` | after the instruction |
| `preEIP` | `0x000A5` | where it started |
| image `0x000A5 + 0x200` | `c8 00 00 00 53 56` | `enter 0,0` then `push` |
| emulator length | 4 | matches `enter`, 4 bytes, at `preEIP` |

### The mapping

`ENCHANT.EXP` is the loaded image with its `MP` header stripped:

- `MD 000C:0` returns `4B 59 42 5F 69 6E 69 74` = `KYB_init`, which sits at image offset `0x200`
- `MD 000C:101A00` returns bytes at image offset `0x101C00`, a difference of `0x200` again
- checked at 29 block offsets: every one where the image had data agreed at `+0x200`, and every
  disagreement was a region where the image is zero

**`ENCHANT.EXP` is 82 percent zeros.** Only 196,725 of its 1,072,398 bytes are non-zero. The game
fills the rest at runtime, which is why a comparison against the file fails there and is not a mapping
error.

An earlier version of this page said 74 percent, from counting a 1 KB block as non-zero if any single
byte in it was. The `verify.js` assertion for the exact count caught that, which is the reason the
count is asserted rather than described.

### The offset is specific to the game segment

Applying `+0x200` to every segment shows it belongs to `000C` alone:

| segment | agree | differ | rate |
|---|---|---|---|
| `000C` | 1,546 | 9 | **99.4%** |
| `0110` | 261 | 851 | 23.5% |
| `5E88` | 30 | 190 | 13.6% |
| `0008` | 29 | 204 | 12.4% |
| `0092` | 28 | 86 | 24.6% |

The other segments are the BIOS and TownsOS, which are not derived from `ENCHANT.EXP` at all. A
number near 20 percent on those is what a wrong mapping scores by chance, and they should be read as
"not applicable" rather than as failures.

### The 9 that differ

Two are at addresses where the image is zero (`0x110C5`, `0x025AA`). The rest share `preEIP 0x002B2`,
an address the image holds `01 00 00 0F A1 64`, which is data. So the residuals are the same
runtime-filled or non-code regions, not a mapping fault.

### What this establishes

| claim | evidence |
|---|---|
| Game code maps to the image | `image = preEIP + 0x200`, 1,546 of 1,555 |
| The image is header-stripped | `KYB_init` at `0x200`, independent second address |
| The offset is `000C` only | other segments 12 to 28 percent, i.e. chance |
| Most of the image is zero | 196,725 non-zero of 1,072,398, so 82 percent zero |

A `J` edge for a `000C` address can now be read as a branch, because the bytes behind it are known.

## Why this instead of reading `SAVEHIST`

`tools/calltrace.py` already reads a `SAVEHIST` dump and can rank hot addresses. A dynamic CFG can be
approximated from it by taking consecutive pairs, and that approximation fails exactly where it
matters: consecutive entries tell you two addresses were adjacent in time, not whether the step
between them was a branch, a call or a fall-through, and they collapse repeated visits so a loop
body and a straight line through it look the same.

The distinction the edge recorder adds is the one that answers the project's open question about
the 24 unresolved indirect transfers: an indirect call still produces an edge to wherever it
actually went, and `kind` says it was a call.

## What to do with a dump

The format is deliberately flat so it can be diffed and grepped:

```
E8C0:00001A2B  E8C0:00001A40  F  17
```

Source, destination, kind, take count. Rebuilding a graph is grouping by source; finding the hot
path is sorting by count; finding what a function calls is filtering for `kind C`.

## Open

- **Not run.** See above.
- **No symbol names in the file.** `SAVEHIST` appends a symbol when the symtable has one. This does
  not, because the destination may be mid-instruction under an indirect branch and the source is
  the only address guaranteed to be an instruction boundary. A reader can join against
  `docs/globals.json` and the call graph.
- **No per-call argument capture.** An edge says control reached a function, not what it was given.
  That is the next question and it needs a different hook.

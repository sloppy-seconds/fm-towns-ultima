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

## The one measurement that does not close

**Captured source addresses are mostly not instruction boundaries.** Decoding the state linearly
from the lowest captured address in each segment and asking whether each captured source lands on a
boundary gives **210 of 3791, or 5.5 percent**.

A concrete case. `STA` reports `CS=0110(LIN:00019F34)`, and the recorder stores the same base, so
the two agree. At base + `0x9AEA` the bytes are `f6 d0 65 8a 95 22 02 00`, which decodes `not al`
(2 bytes), `mov` (7 bytes), landing at `9AF3`. The capture instead reports frequent edges at `9AF1`
and `9AF2`, with opcodes (`0x1A5`) that do not appear in that byte stream at all. `9AF1` is inside
the 7-byte `mov`.

So either the base being recorded is not the base EIP is relative to at that moment, or the
emulator is genuinely executing misaligned addresses. **This is not resolved.** The same 5.5 percent
appears from a normal boot and from a `LOADSTATE` boot, so it is not a savestate artefact.

**What it does not invalidate.** The fall-through arithmetic is self-consistent: `dst == src + len`
for every `F` edge in both captures. Whatever the addresses mean, the recorder is reporting them
faithfully. What cannot yet be claimed is that a `J` edge is a branch, because a third of them
point at `src+1` for multi-byte instructions.

## Where to look next

Add the **pre-execution EIP and `numBytes`** to the record (both available in
`BeforeRunOneInstruction`) and check that the before-EIP plus the after-EIP differ by `numBytes` for
`F` edges. If they do not, the fault is in which value is being read. If they do, the base is wrong
and the fix is to resolve the descriptor rather than read `baseLinearAddr`.

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

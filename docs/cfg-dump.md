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

## The address mapping: measured, and it is not a flat transform

Attempted to settle the mapping between a captured `segment:offset` and a byte in `ENCHANT.EXP`, which
is what stands between the graph and a usable result. It did not settle. The measurements narrow it.

**The running image is not the file.** `STA` at 40 seconds reports `000C:0001C4EE` executing `POP ECX`,
opcode `0x59`. `ENCHANT.EXP` at offset `0x1C4EE` is **sixteen zero bytes**. So the byte the CPU is
executing is not the byte at that offset in the file. Every mapping tried has to explain that before
it explains anything else.

Four mappings were tried and all fail:

| mapping | result on the 535 game-segment edges |
|---|---|
| file offset equals segment offset | 91 agree, 444 differ |
| linear address indexes the savestate | 169 agree, 344 differ |
| a single flat shift, swept over `+-0x2000` and powers of two | best 131 of 535, 24.5 percent |
| the three savestate rules already established for this project | none produce code at `0x1C4EE` |

A flat shift is the wrong model. The best sweep reached only a quarter of the edges, which is close to
what a wrong alignment scores by chance.

**One region is accounted for.** `ENCHANT.EXP` is `0x10000` to `0x20000` of zeros, 65,536 bytes, and
the savestate has `0x99` throughout that region at the same offsets. `0x99` is `cdq`, and the CPU
executes a loop there at 93,431 iterations per edge. That is the loaded image having been written
into uninitialised space, not padding and not a decoder fault. The earlier version of this page called
those addresses unreal; that was correct about the file and wrong about the running machine.

**What is established, and worth keeping.**

| claim | evidence |
|---|---|
| The recorder captures a graph | 2,063 edges over 12 segments |
| Fall-through arithmetic holds | 405 of 415, `pre + len == src` |
| The recorder reports what the CPU held | same check, plus `STA` agreeing on the base |
| The file is not the running image | `0x1C4EE` executes `POP ECX`, file is zeros |
| `0x10000`-`0x20000` is runtime-filled | `0x99` in the state where the file is zero |

**What this does not support.** A captured address cannot yet be turned into a file offset, so the
graph cannot be joined to the static analysis. Any `J` edge should still be read as an emulator
transition rather than as a branch, because the classification is only as good as the addresses it is
computed from and those cannot be cross-checked against the image.

**The narrow question left.** The 40-second `STA` proves the machine is in the game segment and
executing an opcode the file does not contain at that offset. So either the loader relocates or
patches the image, or `CS 000C` is not based at `0x400000` for the whole run. `LOADSTATE` uses a
different segment layout from a boot (`CS 0110` at base `0x19F34` against `CS 000C` at `0x400000`),
which is consistent with the base being set per launch rather than fixed. Reading the loader out of
`TMENU.EXP`, which has symbols, is the cheaper route than more captures.

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

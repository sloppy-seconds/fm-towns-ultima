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

## The address mapping: the contradiction was mine

Attempted to settle how a captured `segment:offset` maps to a byte in `ENCHANT.EXP`. It did not settle,
but the reason it looked impossible was a mistake in the measurement, and that mistake is now identified.

### The false contradiction

`STA` at 40 seconds reported `000C:0001C4EE` executing `POP ECX`, while `ENCHANT.EXP` holds sixteen zero
bytes at offset `0x1C4EE`. That looked like the running image not being the file, and it sent this
investigation looking for a loader that relocates or patches.

It was two different moments. The `STA` output and the instruction line that followed it came from
**separate console reads**, and in the interval the machine left segment `000C`. Re-running and
capturing only the `CS=` line gives:

```
CS=0092(LIN:00000920)  DS=683B(LIN:000683B0)  ES=0000(LIN:00000000)
```

At 40 seconds the machine is in segment `0092`, not `000C`. The `POP ECX` was real, and it was
somewhere later. Pairing an address with an instruction from a different sample is the third
mis-specified comparison in this investigation, and every one of them made working code look broken.

### What the savestate does show

Searching the state for known `ENCHANT.EXP` pages places the image in **several disjoint regions**, not
one:

| state offset minus image offset | pages |
|---|---|
| `+0x0762B2` | 12 |
| several smaller deltas | 1 each |
| not found at all | 3 |

`+0x0762B2` is the rule already recorded for this project (code below `0xd0000` maps as
`0x0762d2 + o`), here differing by the 0x20 header. So the established mapping is the dominant one, and
the image is paged into a handful of places rather than loaded contiguously. That is consistent with a
swap-file state format, not with the game relocating its own code.

### What this means for the graph

A capture and a savestate are **different moments**, so a page-by-page search of one cannot validate
addresses recorded in the other. Nothing here shows the recorder is wrong. What it shows is that the
cross-check was built on two samples that do not correspond.

**Established, and worth keeping.**

| claim | evidence |
|---|---|
| The recorder captures a graph | 2,063 edges over 12 segments |
| Fall-through arithmetic holds | 405 of 415, `pre + len == src` |
| The image is paged, not contiguous | page search finds `+0x0762B2` for 12 pages, 1 each for others |
| `0x10000`-`0x20000` is zero in the file | 65,536 bytes measured directly |
| A capture and a savestate are different moments | `CS=0092` at the `STA`, `000C` from the next read |

**Not established.** A captured address cannot yet be turned into a file offset, because no capture has
been taken at the same instant as a savestate. Any `J` edge should still be read as an emulator
transition rather than as a branch.

**The next step, and why it is cheap.** Take a savestate, then capture, then `STA` again, all from one
console session with no interval. If `CS` is the same before and after, the capture and the state
describe the same machine and the page search becomes a valid check. That is one run, and it removes
the condition that made three attempts fail.

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

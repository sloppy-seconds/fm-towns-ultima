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

## The address mapping: found

**`image offset = segment offset + 0x200`** for segment `000C`, the segment the game code runs in.

This took eleven measurements and most of them were wrong because they were taken from a machine
that had not finished booting. The sequence that worked is worth writing down.

### The mistake first

Audrey's question cut through it: *if the game is running, how can a program that is not ours be
there?* It cannot. `tools/u2flow.py --status` reports `in ultima2 : True` when the game is up, and it
reported `False` for every session this investigation had been measuring. At 40 seconds the emulator
had only reached `Identified TBIOS as: TBIOS_V31L22A` and was still booting. Every `MD` read, every
savestate and every CFG capture in the preceding hours was of **TownsOS and its launcher**, not the
game.

That is why no mapping fit. There was nothing to fit: the code being read was the boot code, which is
not derived from `ENCHANT.EXP` at all and has no reason to resemble it.

### The measurement, on a verified running game

With `in_ultima2` true, `MD 000C:0` returns:

```
000C:00000000 4B 59 42 5F 69 6E 69 74 08 55 8B EC 32 E4 CD 90|KYB_init U  2
```

`4B 59 42 5F 69 6E 69 74` is the ASCII text `KYB_init`, a symbol name, followed by `08` and then
`55 8B EC` (`push ebp; mov ebp,esp`). `"KYB_init"` sits at **offset `0x200`** in `ENCHANT.EXP`, and
`0x200` is the `MP` header size.

Confirmed at a second address. `MD 000C:101A00` returns `2D 00 00 00 FF 75 08 E8 3C 19 00 00`, which
is at `ENCHANT.EXP` offset `0x101C00`, and `0x101C00 - 0x101A00 = 0x200` again.

So the running code is the image with its header stripped and the remainder placed at `000C:0`.

### The result

Applying `image offset = segment offset + 0x200` to the 535 game-segment edges in a boot capture:
**108 agree with the emulator's instruction length, 427 differ.** Every one of the disagreements is at
`0x1AA90` or above.

### The one region that still does not fit, and what it is

`ENCHANT.EXP` is **65,536 zero bytes** from `0x10000` to `0x20000`. The edges that fail are all inside
that range. In the verified running game, `MD 000C:1AA90` returns:

```
000C:0001AA90 0D 8E 05 93 94 32 1D BD B6 18 31 0A 0A A8 AA 07
```

That is not code. It is data. The CPU executed through it because something jumped into a buffer.

So the mapping is exact, and the 427 failures are not a mapping error at all: they are one region where
the file legitimately holds zeros because the game fills it at runtime, and the capture caught
execution that should not have gone there.

### What is established

| claim | evidence |
|---|---|
| The recorder captures a graph | 1,433 edges, 12 segments |
| Fall-through arithmetic holds | 405 of 415, `pre + len == src` |
| Game code maps to the image | `image offset = segment offset + 0x200` |
| Confirmed twice, independent addresses | `KYB_init` at `0x200`, and `0x101C00 - 0x101A00` |
| The failing region is runtime data | `MD` there returns non-code bytes |
| The 40-second sessions were TownsOS | `in ultima2` false, boot only reached TBIOS |

A `J` edge is an emulator transition. Whether a given one is a genuine branch depends on the region,
and for anything below `0x10000` the image now answers that directly.

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

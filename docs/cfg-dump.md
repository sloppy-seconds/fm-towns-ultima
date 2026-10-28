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

### One session, one moment: what it settled

The next step on the previous version of this page was cheap and it was taken. One console session,
`STA`, `CFGSTART`, five seconds, `CFGSTOP`, then `PAU`, `SAVESTATE` and `STA` again, with no interval
between the capture and the state.

The two `STA` calls agree:

```
CS=000C(LIN:00400000)  DS=0014(LIN:00400000)  ES=0014(LIN:00400000)
CS=000C(LIN:00400000)  DS=0014(LIN:00400000)  ES=0014(LIN:00400000)
```

So the capture and the savestate describe the same machine, which is the condition that was missing
before. The capture is 1,433 edges, 373 of them in `000C`.

**The check still fails, and now for a reason that is not a sampling artefact.** Decoding the state at
`0x400000 + offset` agrees with the emulator's length on 14 of 200 `000C` edges. The disagreements read
`88 88 88 88 88 88` where the emulator reported a 1-byte, 3-byte or 6-byte instruction. `0x88` is
`mov`, and a run of it is fill.

The same address appears again: `000C:0001AA91`, and `ENCHANT.EXP` is zero there. Two sessions with
different fill bytes (`0x99` then `0x88`) both execute at that address.

### Why the savestate cannot answer this

Searching the 7.6 MB state for known `ENCHANT.EXP` pages finds **none of them**, at any offset tried
(`0x1000`, `0x100000`, and the intervening pages). The state is a structured serialisation, not a flat
image of guest memory, so indexing it with a linear address was a proxy that happened to work for the
player record and does not work here. The earlier claim that the image is paged across several state
regions was a pattern read out of that proxy and should not be relied on.

### `MD` through the emulator, and what it shows

`MD` reads guest memory by segment, which is exactly what the savestate is not. Three reads, each
compared against the same offset in `ENCHANT.EXP`:

| read | guest memory | `ENCHANT.EXP` at that offset |
|---|---|---|
| `MD 000C:0` | `11 20 20 89 11 17 0C 0C` | `4D 50 0E 01 2F 08 00 00` (`MP` header) |
| `MD 000C:101A00` | `00 00 00 00 00 00 00 00` | `66 89 45 F4 E8 DF 23 00` |
| `MD 000C:1AB50` | `B8 01 00 00 00 EB 02 33` | all zero |

**No offset in segment `000C` matches `ENCHANT.EXP` at the same offset.** One read has code where the
file has the header, one has zeros where the file has code, one has code where the file has zeros.

So `CS 000C` with base `0x400000` is **not a view of `ENCHANT.EXP` at offset = address**, in either
direction. The correspondence is neither shifted nor reversed; it is simply not that relation.

**The function at `000C:1AB50` is not on the disc.** `MD` shows a textbook High C prologue there,
`55 8B EC 1E 56 57 53` (`push ebp; mov ebp,esp; push ds; push esi; push edi; push ebx`), followed by
a call. That 17-byte sequence appears in **0 of the 140 files** on the disc, `ENCHANT.EXP` included.

**One hypothesis is refuted.** `docs/decompilation-experiment.md` establishes that `MP` is the
*unpacked* flat form and `P3` the packed one, so `ENCHANT.EXP` is not compressed and the running code
should be its own bytes. It is not, at these addresses. So the explanation is not packing, and the
region at `0x10000` to `0x20000` being zero in the file is not explained by a decompressor writing
there.

### What is established

| claim | evidence |
|---|---|
| The recorder captures a graph | 1,433 edges, 12 segments, one session |
| Capture and state describe one machine | `CS` identical before and after |
| Fall-through arithmetic holds | 405 of 415, `pre + len == src` |
| The savestate is not a guest memory image | image pages not present at any offset tried |
| `000C` is not `ENCHANT.EXP` at offset = address | three `MD` reads, none matching, both directions |
| Code executes that is on no disc file | `000C:1AB50` prologue, 0 of 140 files |

**Not established.** A captured address cannot be turned into a file offset. A `J` edge is an
emulator transition, not a proven branch.

**The question this actually leaves.** `CS 000C` is executing a High C program that is not the one on
the disc. That is either a different executable entirely, or `ENCHANT.EXP` is not what the running game
was launched from. Checking which executable is loaded, by reading the DOS file table through `MD` at
`DS`, is the next measurement and it needs no new tooling.

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

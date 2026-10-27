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

## What was built and what was not

**Both changed translation units compile clean:**

```
cpu/CMakeFiles/cpu.dir/i486debug.cpp.o                 148,016 bytes
main_cui/command/CMakeFiles/townscommand.dir/townscommand.cpp.o   691,664 bytes
```

**The full binary was not built here.** `Tsugaru_CUI` links `fssimplewindow_connection`, which
pulls `GL/gl.h` and `X11/Xlib.h`. This host has neither, `mesa-libGL-devel` and `libX11-devel` are
not installed, and installing them needs sudo. The CUI never opens a window, but the link
dependency is there regardless.

So the claim on this page is **"it compiles"**, tested per translation unit, and not **"it runs"**.
Do not upgrade that claim without building the executable somewhere that has the GL and X11
headers.

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

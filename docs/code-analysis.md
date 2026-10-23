# Reading the code

What can be extracted from `ENCHANT.EXP` without running the game, and what
cannot. All numbers here come from the disc image and `tools/expimage.js`.

## The image is mostly empty

A fact that invalidated two earlier measurements, so it goes first.

`ENCHANT.EXP` is 1,072,398 bytes with a 32-byte `MP` header, leaving a
1,072,366-byte flat image. Only **21.9% of that is real data** (234,736 bytes).
The rest is zero fill, in three large regions:

| offset | length |
|---|---|
| `0x07b557` | 337,645 |
| `0x04106e` | 233,598 |
| `0x00e5d2` | 207,322 |

Those are BSS: uninitialised globals, present in the file because a flat image has
no way to say "this range is zero". Any scan that treats the file as uniformly
populated will report counts inflated by padding, and will find instruction
patterns inside blank space.

**Any measurement of this binary needs to exclude the zero regions first.**

## The load address is 0

`EIP` in the `MP` header is `0x101a20`, which invites the assumption that the
image loads at `0x100000`. That assumption is wrong, and it produces plausible but
false results.

The disproof: the absolute displacement operands in the code take values like
`0x0e034b`. If the image began at `0x100020`, no in-image address could be that
small. With base 0 the image spans `0x20` to `0x105cee`, and every such operand
falls inside that range.

So the load address is **0**, and a file offset equals a virtual address. That is
convenient, and it is the opposite of what the header suggests.

## Dispatch is direct, unlike the DOS build

The 16-bit DOS release reaches its command handlers through `jmp *%bx` and a jump
table, which hides them from static analysis. This port does not do that.

| measure | count |
|---|---|
| `E8` call rel32 | 5,718 |
| `E9` jmp rel32 | 944 |
| indirect dispatch (`ff 24`, `ff 25`, `ff 14`, `ff 15`) | 114 |

Direct dispatch outnumbers indirect about 58 to 1. Further, all 86 `ff 24 95`
sites resolve to zero-filled regions, so they are dispatch stubs for a table that
is built at runtime rather than a static table of code pointers.

**Consequence: the call graph is recoverable statically for this port.** That is
the main practical difference between the FM Towns and DOS builds for this
purpose.

## Function boundaries are only partly recoverable

| measure | count |
|---|---|
| `55 8B EC` prologue (`push ebp; mov ebp,esp`) | 366 |
| `C3` ret | 1,024 |

More returns than prologues means **most functions are compiled without a frame
pointer**, which is normal for an optimising compiler such as High C. So prologue
scanning finds a minority of function starts and misses the rest.

This is the reason to seed a decompiler with an entry point and let it discover
reachability, rather than relying on pattern matching. It is also why "count the
prologues to count the functions" is not a valid method here.

## What the strings give you

214 printable runs of 12 characters or more, of which 53 are distinct asset paths
or format specifiers. The asset paths are the useful ones: each is an anchor that ties a
data file to the code which loads it. `\SOUND\BUMP.SND`, `Q:\GRAPH\MAP2_1.TIF` and
the rest are addresses in the data segment, and something must push them.

Finding the code that references those addresses is the cheapest route into the
game logic, and it needs no gameplay.

## Tooling

Two decompilers are available on this machine:

- **Reko** takes `--arch`, `--env`, `--base`, `--entry` as first-class options,
  which suits a flat image with a known entry point.
- **Ghidra** needs the same information entered by hand at import, and is the
  place the base-address mistake above would propagate silently into every
  address.

Prefer Reko for reading a single function, Ghidra for cross-function type
recovery. Neither is authoritative. A decompiler invents plausible C when
function boundaries are wrong, and the invented output looks exactly as
convincing as correct output.

## Limits to keep in mind

- **Byte-perfect reconstruction from a decompiler is not possible.** Names and
  types are not in the binary, an optimiser rewrites source shape, and inlining
  erases boundaries. Matching decompilations reach byte equality by writing C and
  recompiling it, not by decompiling.
- **Values that only exist at runtime still need one probe.** The palette needed
  `PRI PALETTE` after five static approaches failed. Static analysis finds the
  code, a targeted probe supplies the value.
- **Tokenised binary trees.** The image contains `High C` and `MetaWare` strings
  but no `SYM1` table, so there are no function names to start from.

---

**[Extraction](extraction.md)** **[Open questions](open-questions.md)**

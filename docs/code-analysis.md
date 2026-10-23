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

## Cross-referencing assets to code

The cheapest way into the game logic is to take an asset path and find the code
that loads it. `tools/coderefs.js` does that. The result is mostly negative, and
the negative is the finding.

**Measured:** 71 asset strings sit in the image. Exactly **5** are referenced by
an instruction. 66 are not.

| site | form | string | callee |
|---|---|---|---|
| `0x0e23d6` | `push imm32` | `Q:\SOUND\MAGIC2.SND` | `0xe5854` |
| `0x0e240a` | `push imm32` | `Q:\SOUND\BOMB2.SND` | `0xe5854` |
| `0x0e9c4a` | `push imm32` | `Q:\GRAPH\DUNG1.TIF` | `0xe77f8` |
| `0x0eb011` | `mov r32,imm32` | `Q:\GRAPH\U2TITLE4.TIF` | `0xe9e44` |
| `0x0f5485` | `push imm32` | `Q:\GRAPH\U2END4.TIF` | `0xe5854` |

Hand-verified against the bytes: at `0x0e23d6` the image reads
`68 2c 14 00 00 6a 0b e8 72 34 00 00`, which is `push 0x142c`, `push 11`,
`call 0xe5854`. `0x142c` is the address of `Q:\SOUND\MAGIC2.SND`. The address
in the instruction is the null-terminated string itself, and `11` is the channel.

**What this means.** Most asset paths are not compiled into the code. If they
were, each would appear as an immediate and we would see 71 sites, not 5. So the
loader does one of:

- builds a path from a name plus a drive and directory prefix at runtime,
- indexes a table of names held in writable memory,
- or receives them as parameters from somewhere that computes them.

Each of those is still findable, but not by looking for the string. That is why
the earlier plan, "find the push of the path and you have found the loader", was
too simple. It works for 5 assets and fails for the rest.

### Three false results this uncovered

Recorded because each looked convincing and each cost time.

**False positives inside Shift-JIS.** Searching for a string address as a bare
4-byte pattern matches the middle of Japanese text. `0x1328` reports as a string
start but is the tail of a two-byte-per-character string, and the code around it
turned out to be a menu routine pushing character codes, not paths. A string
address is only real if the preceding byte is null and the run is printable
ASCII. That one condition removed every false hit.

**The site address read 0x20 low.** The flat image begins 32 bytes into the file,
so an image offset plus `0x20` is the virtual address. Reporting the offset made
every site point at the previous instruction. The numbers still looked like
addresses, which is exactly why this kind of error survives review.

**The call target read 0x20 low, for the same reason.** A rel32 is measured from
the end of the instruction, and the end is in virtual space.

`tools/test-coderefs.js` pins all three against hand-decoded bytes, so the
arithmetic cannot drift again without a failure.

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

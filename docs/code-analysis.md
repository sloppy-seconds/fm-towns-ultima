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
| `0x07b577` | 337,645 |
| `0x04108e` | 233,598 |
| `0x00e5f2` | 207,322 |

**These are raw file offsets.** An earlier revision of this table gave `0x07b557`,
`0x04106e` and `0x00e5d2`, which are the same runs in the header-stripped frame, `0x20`
lower. The lengths were right in both. That is the two-frames confusion recorded in
[two-frames-of-reference.md](two-frames-of-reference.md), and it mattered here: the
regions are what a walker is told to avoid, and 32 bytes is enough to place a boundary
wrong. `tools/codelimits.js` now measures them each run and `node tools/checkall.js`
fails if this table and the bytes disagree.

Other pages cite the stripped value `0x7b557` and are correct as written, because the
record arithmetic they do is also in stripped offsets: `0x7aee4` plus 29 records of 57
bytes ends at `0x7b559`, two bytes before the boundary, and that holds in either frame
as long as one is used throughout. The distinction only bites a tool that measures the
file and compares against a figure from a page.

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

**`EIP` is also not a usable code entry.** Disassembling at `0x101a20` gives `add al,[ebx]`
then `rol dword [ebx],1`, which is not a prologue. Sweeping from the real prologue at
`0x101984` puts an instruction boundary at `0x101a1f`, so `0x101a20` is **one byte into a
real instruction**.

Treat the header `EIP` as unverified. The only entries this project trusts are `CALL` targets,
because the instruction that reaches them proves them. See
[entry-point-question.md](entry-point-question.md).

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

The cheap route into game logic is meant to be: take an asset path, find the code
that loads it, and you have the loader. `tools/coderefs.js` does the search. What
it found says the route does not work here, and the reasons are concrete.

**Measured:** 71 asset strings sit in the image. Five are referenced by an
instruction. 66 are not.

| site | form | string | callee |
|---|---|---|---|
| `0x0e23d6` | `push imm32` | `Q:\SOUND\MAGIC2.SND` | `0xe5854` |
| `0x0e240a` | `push imm32` | `Q:\SOUND\BOMB2.SND` | `0xe5854` |
| `0x0e9c4a` | `push imm32` | `Q:\GRAPH\DUNG1.TIF` | `0xe77f8` |
| `0x0eb011` | `mov r32,imm32` | `Q:\GRAPH\U2TITLE4.TIF` | `0xe9e44` |
| `0x0f5485` | `push imm32` | `Q:\GRAPH\U2END4.TIF` | `0xe5854` |

**And at least three of those five are not loads.** Disassembling `0xe5854`
shows a `strlen`-then-dispatch helper: it walks to the null, then calls
`0xe6eb0` with the length and the string. That callee takes `[ebp+8]` as an
index into a struct table at `0x7aee4` (`lea eax,[eax+eax*2]`, so stride 3 words).
The pushed argument `11` is that index. This is a **draw-a-string-in-window**
routine, so `push "Q:\SOUND\MAGIC2.SND"; push 11; call` is the game printing
the path as text, not opening it.

The searches a reader would try next, and their results:

| probe | result |
|---|---|
| `push imm32` of the exact path | 5 hits, mostly text printing |
| `mov r32,imm32` of the exact path | 1 hit |
| `lea reg,[disp32]` into the string pool | 0 |
| reference to any pool base (`0x1240`..`0x1300`) | 0 in code |
| same, assuming data loads at `0x100000` / `0x102000` / `0x200000` | 0 |
| pointer array of string addresses (3+ entries) | 0 |

**Verdict:** the paths are in the image but essentially nothing addresses them.
They are not dead, because the game loads those files, so the addressing is
computed at runtime in a form none of these probes sees. That is an OPEN problem,
not a solved one. What is ruled out is the easy version of it.

### The trap that produced five false answers first

Searching for a string address as a bare 4-byte pattern finds it in three places
that are not references:

- **Inside Shift-JIS text.** `0x1328` reads as a plausible string start but is the
  tail of a Japanese message, and the code around it is a menu pushing character
  codes. This alone accounted for most of the apparent hits in the boot function.
- **Inside tables of small integers.** A run like `00 14 00 00 00 00 25 00 00`
  contains `0x1400` as a value with no instruction behind it. All 54 apparent
  references to `0x1400` were of this kind, none preceded by `push`, `call` or
  `lea`.
- **Inside padding.** A pattern in the 337 KB zero region has zeros around it, so
  the "instruction" reads a nonsense operand and the result still looks like an
  address.

Requiring a null byte before the address and an all-printable run removed the
first. Requiring the opcode byte before the operand removed the second. The
padding mask removed the third.

### Two off-by-0x20 errors, which are the ones that matter

The flat image begins 32 bytes into the file, so an image offset is not a virtual
address. The site address and the call target were each reported `0x20` low. Both
still produced numbers of the right shape, and neither shows up as an error in the
output. `tools/test-coderefs.js` pins the arithmetic against hand-decoded bytes at
`0x0e23d6`, where the image reads `68 2c 14 00 00 6a 0b e8 72 34 00 00`, so this
cannot drift again quietly.

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

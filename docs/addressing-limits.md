# Why so much of this image is unreachable

A pattern has now appeared often enough to be worth naming. It is the single biggest
obstacle on this project and it is not a bug in the analysis.

## The observation

Repeatedly, something obviously exists in `ENCHANT.EXP` and cannot be found by looking for a
reference to it:

| thing | evidence it exists | references found |
|---|---|---|
| 66 of 71 asset path strings | the strings are in the image | 5 |
| the five debug mode names | in the image at `0x5501` | 0 |
| the 170-entry jump table at `0xd8f84` | clean ascending code pointers | 0 |
| the switch table at `0xe4086` | the `jmp` names it as its operand | data there is not a table |
| the `0xEB` glyph writer | 5,802 glyph occurrences | not found |
| the map index code | `MAP2_*.TIF` is loaded and drawn | not found |

## What is established

**The load address is 0.** `code-analysis.md` proves this from absolute operand values: the
image spans `0x20` to `0x105cee` and every such operand falls inside it. So a file offset
equals a virtual address, and a literal pointer should be findable as four little-endian
bytes.

**That test works for some things.** The five asset paths that *are* referenced, the string
literals found by `tools/msgcallers.js`, and the pointer table at `0x7a864` all resolve
normally.

**So the convention is right and these particular references are different.** That is the
puzzle.

## Candidate explanations, none proven

**1. Segment-relative addressing.** The BIOS gateway at `0x0c5d` switches `fs` to segment
`0x110`. If parts of the program run with a non-zero data segment, an absolute dword in a
table would be an *offset within that segment*, not a flat address, and the flat scan would
not match it.

This is the most likely explanation and it is consistent with a 16-bit heritage: Phar Lap
`MP` images can carry mixed 16/32-bit code, and this game was written for a 1990 machine with
a segmented architecture.

**2. The table base is loaded from a global.** If code does `mov eax,[0x7a7d0]` and then
indexes relative to `eax`, the table address appears once as a global's *contents*, not as an
immediate. `tools/strtab.js` found exactly this shape for strings.

**3. Runtime construction.** A table built at startup from a smaller descriptor list would
have no static form at all. Evidence for this is weak and it is listed last.

**4. Self-modifying or overlayed code.** Possible on a port of this era. No evidence.

## A specific test that would settle it

The jump table at `0xe4086` is the best test case, because the instruction that uses it is
known exactly:

```asm
0x0E425E  2E FF 24 95 86 40 0E 00    jmp dword near [cs:edx*4+0xe4086]
```

The `2E` prefix makes it `cs`-relative, and `0xe4086` is the displacement. If the operand
were flat, four-byte reads from `0xe4086` would give code addresses. They give
`76 a0 00 00`, `2d b9 e8`, ... which are instruction bytes.

**The table is therefore not at `0xe4086`.** Either the value is relative to something else,
or the image as loaded differs from the file at that address.

**A savestate would settle this in one read.** The captured image base is known
(`0x762d2` in `death.state`), so dumping memory at the equivalent of `0xe4086` shows what the
table looks like at runtime. If it is populated with code addresses there and not in the
file, then something relocates or builds it. That is a Track B task and it is cheap.

## What this means for planning

Every remaining Track A item that depends on finding a reference will hit this wall:
the map indexing code, the glyph writer, the message tables fetched by index.

The Track A items that do **not** depend on it are the ones that work by reading a function
whose entry point is already known. That is why reading the most-called functions was
productive and searching for tables was not.

## Recorded so it is not rediscovered

- Do not conclude that something is absent because a flat-address scan finds no reference.
  Six separate things in this image are unreachable that way.
- Do not trust a `jmp [table+index*4]` operand as a table address without reading the data
  at that address and checking it looks like code pointers.
- The flat-address convention is proven for *some* references and is not proven to be
  universal.

---

**[The code](code-analysis.md)** **[Finding functions](function-recovery.md)** **[Plan](plan.md)**

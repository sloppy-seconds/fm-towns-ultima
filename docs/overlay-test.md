# A8: the two-state diff

A second savestate was taken at a different screen, to distinguish "cleared once at
startup" from "cleared continuously", and to see whether the binary uses overlays.

## Method

State A: `death.state`, captured at the death screen.
State B: `title.state`, captured at the Ultima II title screen.

Both are 7,607,281 bytes, both from the same running machine, and the image base `0x762d2`
applies to both.

`tools/overlaymap.js` compares the file against each state, block by block, and classifies
every block as resident in both, resident in one, or absent. `tools/relocate.js` separately
searches each non-zero region of the image for its real runtime address, so a wrongly
assumed base cannot masquerade as an absent region.

## Result: no overlay swap

**Zero blocks are present in one state and absent from the other.** The resident set is
identical at the death screen and at the title screen.

So the overlay hypothesis, suggested by the first state, is **wrong**. Nothing is swapped
between those two screens.

## What the image looks like at runtime

`tools/relocate.js` gives the clean answer. Probing every non-zero region of the image:

| image region | implied base |
|---|---|
| `0x000000` to `0x0cc000` | `0x762d2`, every probe |
| `0x0d0000` to `0x105cee` | **NOT FOUND** |

Every region below `0x0d0000` that contains data resolves at the same base. **Nothing above
`0x0d0000` resolves at any address in either state.**

The image is *not* split or relocated. It is loaded contiguously at `0x762d2` up to about
`0x0d0000`, and the top **220 KB is not in memory at all**.

## Full accounting for `0x20` to `0x0d0000`

| category | bytes |
|---|---|
| matches the file in both states | 49,152 |
| zero in the file and zero at runtime (BSS) | 524,288 |
| file is zero but runtime holds data (loaded buffers) | 237,568 |
| file has data and runtime differs | 40,960 |

That is 851,968 bytes, which is the whole region.

**The first row is the surprising one.** Only 48 KB of the image is byte-identical to the
file at runtime. Everything else is either blank or overwritten.

## What the 48 KB that matches actually is

Concentrated at `0x2000` to `0x0e000`. Some of it is the string pool that the text renderer
reads, which is why the asset paths and debug mode names were found intact in both states.

So it is not that the image is unrecognisable. A specific, early region survives verbatim and
the rest does not.

## The 40 KB that is neither identical nor blank

Ten 4 KB blocks where the file has data and both states differ from it:

```
0x000000  0x001000  0x00e000  0x040000  0x041000
0x07a000  0x07b000  0x0cd000  0x0ce000  0x0cf000
```

Two of these are false positives in the block-level test, caught by inspection:

- `0x000000` is identical at the start and only appears different because a 4 KB block runs
  past the compared region.
- `0x00e000` is likewise identical at the start and diverges further into the block.

`0x001000` **is** a real difference:

```
file:    ff ff ff ff 00 00 00 00 00 00 00 00 ...
runtime: 00 00 00 00 ba 76 00 00 04 00 00 00 ...
```

The file holds a `0xFFFFFFFF` sentinel; at runtime that word is zero and the following words
hold `0x76ba` and `4`. This is in the MP header region and is most likely a loader-written
timestamp or handle, not game state.

## Corrections this forces

**`runtime-image.md` concluded the binary was probably overlayed.** That is now **wrong** and
has been corrected. The two-state test is exactly the experiment that was supposed to
distinguish the cases, and it says the resident set does not change.

**The earlier statement that the five asset-path call sites read as zeros at runtime is
true but was over-interpreted.** They read as zeros because they are above `0x0d0000`, which
is simply not loaded, not because an overlay happened to be swapped out.

## CORRECTION: the top region IS loaded

The conclusion below, that everything above `0x0d0000` is never loaded, is **wrong**. Further
probing with unaligned and smaller windows found the region at a different layout entirely.

**The top region is mirrored.** Its runtime address is `0x4392d2 - imageOffset`, verified at
five points. See [mirrored-region.md](mirrored-region.md).

What made the first probe fail was using 512-byte windows at aligned offsets and assuming one
base for the whole image. The base `0x762d2` holds below `0x0d0000` and nowhere above it.

## What survives from this test

The two-state comparison itself is sound and its result stands: **nothing is swapped between
the death screen and the title screen**, so there is no overlay system. That part was right.

The resident-set accounting below is also correct for the base `0x762d2`, and it usefully
shows that only 48 KB of the image is byte-identical at runtime while 238 KB of
file-zero region holds loaded graphics buffers.

## What is left standing (superseded in part)

The image decodes as **two parts under the single base `0x762d2`**:

| region | state at base `0x762d2` |
|---|---|
| `0x20` to about `0x0d0000` | loaded, mostly overwritten at runtime |
| `0x0d0000` to `0x105cee` | not at this base |

The second row is not absent, it is at the mirrored addresses. Both statements are true and
only the second had been measured when this section was written.

---

**[The runtime image](runtime-image.md)** **[Addressing limits](addressing-limits.md)** **[Plan](plan.md)**

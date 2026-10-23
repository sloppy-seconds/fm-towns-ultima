# The top region is loaded, and mirrored

This corrects [overlay-test.md](overlay-test.md), which concluded that everything above
`0x0d0000` is never loaded. **That was wrong**, and the two-state test it rested on was
measuring the wrong thing.

## What went wrong

`tools/relocate.js` probed each region of the image for its runtime address using 512-byte
windows at aligned offsets. For the top region it reported `NOT FOUND`.

The region *is* in memory. The probe failed because **the top region is not stored
contiguously**. It is mirrored.

## The mirror

Probing every `0x1000` of image offset above `0xd0000` gives this:

| image offset | implied base |
|---|---|
| `0x0d0000` | `0x2992d2` |
| `0x0d1000` | `0x2972d2` |
| `0x0d2000` | `0x2952d2` |
| ... | ... |
| `0x105000` | `0x22f2d2` |

The base decreases by exactly **`0x2000`** for every **`0x1000`** of image offset.

Solving that gives the state address directly:

```
stateAddress(o) = 0x4392d2 - o
```

**Verified at five points**, all exact:

| image offset | state address | match |
|---|---|---|
| `0xd0000` | `0x3692d2` | yes |
| `0xe7000` | `0x3522d2` | yes |
| `0xf7000` | `0x3422d2` | yes |
| `0x100000` | `0x3392d2` | yes |
| `0x105000` | `0x3342d2` | yes |

So the binary's top 220 KB is laid out in memory in **reverse block order**: as the image
offset rises, the memory address falls.

**This is why every contiguous-base assumption failed for the whole top half of the binary.**
`0x762d2 + o` is correct below `0xd0000` and completely wrong above it.

## Correcting the second error too

My first attempt at the formula used `0x2f92d2 - o`, which matched nothing, because I
dropped the `+o` term when combining `o + base(o)`. Recorded because it is the same class of
mistake as everything else on this project: an arithmetic slip inside a plausible-looking
derivation.

## What the mirrored region contains

At the mirrored addresses, **code is present**:

| known address | at `0x4392d2 - o` |
|---|---|
| `0xe4086` switch table | state `0x35524c` |
| `0xd8f84` 170-entry table | state `0x36034e` |
| `0xe6e90` text renderer | state `0x352442` |

The bytes are not identical to the file, and inspecting them shows **the same structure
with different values**:

```
0xd8f84  file:  40 bb 00 00   a0 bb 00 00   a4 bb 00 00   ec bb 00 00
         state: d8 c9 00 00   1c ca 00 00   64 ca 00 00   9c ca 00 00
```

Both are dense ascending 32-bit tables of the same shape. The state table is a real,
populated jump table. The values differ because the targets are at different addresses.

**The differences are not a uniform delta**: 0xe98, then 0xe7c, then 0xec0. So it is not one
relocation offset applied to everything. Different functions have been placed differently.

## Data in this region is cleared, code is not

Spot checks inside a `0x1000` block show the file's `0xEB` glyph strings zeroed at runtime
while the surrounding structure survives. That is consistent with
[runtime-image.md](runtime-image.md): data is cleared on startup, code is not.

## What this changes

**The image is fully loaded.** Nothing is dead weight. The earlier statement that the top
220 KB is "never mapped" was wrong.

**The addressing limit for the top region is solved.** A flat-address scan will never find a
reference above `0xd0000`, because the file layout and the memory layout differ there. To
locate anything in that region at runtime, apply `0x4392d2 - o`.

**The static analysis is unaffected.** Reading a function at file offset `0xe6e90` is still
correct, because the file is the authority for the file. What was wrong was the *runtime*
address, not the file address.

## A thing the mirror does not fix

`0xe4086`, the switch table target from `0xe425e`, reads as **instruction bytes** both in
the file and at its mirrored runtime address. Applying the mirror did not reveal a table
there.

```
state 0x35524c: 00 8d 14 80  8d 14 50  c1 e2 05  2b d0  ff b2 99 de ...
```

So that particular table is genuinely not where the `jmp` operand says it is, and the mirror
is not the explanation. That remains open, recorded in
[core-routines.md](core-routines.md).

Two explanations are ruled out by this: the table is not hidden by a wrong base, and it is
not absent from memory. It is something else, possibly a different operand encoding.

## A limit found later

The constant `0x4392d2` holds across the region when probed every `0x2000`, but **the tail of the
image does not obey it**. `0x104aa4` does not match at its mirrored address, and its bytes appear
2,744 bytes away under a different implied constant.

Neither constant covers the `0x104000`-to-end range: 2 of 462 probes at `0x4392d2`, 0 of 462 at
`0x43881a`. So the tail is either loaded under a mapping not yet derived, or relocated per block.

This does not invalidate the mapping for `0xd0000` to about `0x104000`, which is where every
finding on this page was measured. See [indirect-branches.md](indirect-branches.md).

## What is still open

Why the layout is mirrored at all. The most likely explanation is a loader that fills a
high memory block from a low file offset, walking downward, so the last file block ends up
first in memory. That is a guess and has not been shown.

What matters practically is that the mapping is now known and cheap to apply.

---

**[The two-state test](overlay-test.md)** **[The runtime image](runtime-image.md)** **[Addressing limits](addressing-limits.md)** **[Plan](plan.md)**

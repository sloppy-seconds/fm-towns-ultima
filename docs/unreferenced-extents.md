# What is in the extents nothing refers to

**Three readings of the same bytes were tried and all three were wrong. What survives is a
measurement of sizes and densities, and no claim about what these regions are.**

## The question

Excluding the zero fill, 123,501 bytes of `ENCHANT.EXP` are not reached by the guarded walk.
Sweeping those extents for references from reached code leaves 11 extents of 256 bytes or more
that nothing names:

```
0xd1cb4  0xd2050  0xd2368  0xd2704  0xd2f44  0xd795c
0xd82b6  0xd843f  0xd8b6e  0xdbc2c  0x7b474
```

They total 7,788 bytes. The question was whether they are dead data, or code the seed set still
misses.

## The measurement that stands

| extent | bytes | nonzero | percent | first byte decodes as |
|---|---|---|---|---|
| `0xd1cb4` | 332 | 41 | 12% | `add` |
| `0xd2050` | 464 | 70 | 15% | `or` |
| `0xd2368` | 728 | 90 | 12% | `por` |
| `0xd2704` | 1111 | 146 | 13% | `insd` |
| `0xd2f44` | 1056 | 140 | 13% | `push` |
| `0xd795c` | 883 | 644 | 73% | `add` |
| `0xd82b6` | 325 | 101 | 31% | `or` |
| `0xd843f` | 513 | 136 | 27% | `adc` |
| `0xd8b6e` | 325 | 101 | 31% | `or` |
| `0xdbc2c` | 1792 | 440 | 25% | `push` |
| `0x7b474` | 259 | 147 | 57% | `inc` |

The last column is what a decoder says, not what the bytes are. `insd` and `por` are not
plausible function starts and are recorded to show that a decode of an arbitrary offset is not
evidence.

`0xd82b6` and `0xd8b6e` are both 325 bytes with exactly 101 non-zero, which is consistent with
two instances of one record. That is the strongest structural hint here and it is still only a
hint.

## The three wrong readings

All three were mine, all three looked like findings, and all three are recorded because the
sequence is the point.

**First: jump tables.** The bytes `eb 46 eb 6b eb 5a eb 6c` decode as `jmp short`. Runs of them
appear in four of the extents, which looks exactly like a dispatch table. Checking the targets
killed it: they land at `0xd1d15` upward, and every byte there is zero, so each jump would go
into BSS. A jump table whose entries all jump into zero fill is not a jump table.

**Second: records with a count header.** Reading the first byte of each extent as a count and the
rest as 2-byte entries gave `count=2, 9, 15, 104` with `0xEB`-high entries. The counts were the
low half of the preceding `jmp` displacement and the `0xEB` was the second byte of each pair. The
structure was in the reading, not the data.

**Third: a 63-byte total.** Measuring the non-zero run up to the *first* zero suggested the
extents were tiny written prefixes followed by zero tails. That measure stops at the first gap,
which is wrong for sparse data with internal holes: the true non-zero count is 2,056 bytes across
the 11, not 63.

## What is actually established

These 11 extents hold 7,788 bytes of which 26 percent are non-zero, nothing reached refers to
them, and they are not code that decodes into anything a function could begin with.

Both remaining explanations are still open. Dead data and code reachable only from a path the
seed set does not cover produce the same signature here, and the measurement cannot separate
them. Separating them needs either more seeds or a static read starting from a caller, and a
caller is exactly what has not been found.

The honest summary is that this is a small, closed question worth about 8 KB, and that three
attempts to answer it from byte statistics alone failed. That is the same lesson as
[fmtownskit-and-seeds.md](fmtownskit-and-seeds.md): a shape that is plausible under one reading
tells you nothing until an independent measurement rules the other readings out.

## How this gets answered, and it is not by measuring it again

These become known when code that touches them is read, not before. A reference gives the shape,
and the shape names the object: an indexed `lea` fixes the element width from its scale, a `push`
makes it an argument, a byte write makes it a field, and reading the callee says what happens next.
That is exactly how the player record at `0xcdf6b` became known, and it is the opposite of what
was attempted here.

So the reopening condition is concrete: **when the walk reaches a function that references one of
these addresses, run `x86map --refs` on it.** Until then there is nothing further to learn from
the bytes, and the extents should not be re-measured, re-clustered or re-guessed.

A second, weaker route exists and is worth naming so it is not mistaken for the first. If the seed
set grows to reach new code, these extents may stop being unreferenced without any of them being
read, which would answer the question the other way: it was missed code all along. Re-running the
sweep after a seed change costs one command and would show that.

The two-instance pair, `0xd82b6` and `0xd8b6e` at 325 bytes with 101 non-zero each, is the first
thing to test if a reference ever appears: identical sizes and densities should mean identical
structures, and a reference to one should explain both.

# The corpus census: 738 call targets, and what each one is

**Verdict: the classifier already existed, and running it over the whole binary
answers the C-versus-asm question for 738 targets in 1.5 seconds.** The full
result is `docs/corpus.json`, produced by a new `--census` mode on
`tools/preflight.js`. No new tool was written and Ghidra was not used.

## How to reproduce

```bash
git checkout docs/corpus.json            # restore, if edited
node tools/preflight.js --scan 1 --census > docs/corpus.json
```

The `--scan 1` argument is required only because the flag parser needs it; the
census ignores the count and walks every target. Runtime is about 1.5 seconds.

`docs/corpus.json` is the tool's **raw stdout**, with no wrapper and no
hand-editing. `tools/checkall.js` regenerates it on every run and fails if a
single row differs, so it cannot drift from the image. That check was verified
able to fail by changing one row's `kind` from `non-leaf` to `c-leaf`, which it
caught, and it passes again once restored.

The counts in this page are read from that file. They are not recalled. Two
earlier drafts of this page got them wrong from memory, and the reason they are
now trustworthy is that the file they come from is checked.

## The census

`tools/funcs.js --list` enumerates the distinct `CALL` targets in the image; the
total is owned by `call-graph.md` and is not restated here. Each target is
classified by `preflight.js`, which asks in this order:

| kind | share | meaning |
|---|---|---|
| `non-leaf` | 41.6% | a real entry that makes at least one call |
| `not-entry` | 38.5% | **not a real function start.** Interior addresses, not entries |
| `base-fold` | 10.3% | real entry, no calls, but references an absolute address |
| `not-c` | 7.7% | code no C compiler from this toolchain can emit |
| `c-leaf` | 1.9% | real entry, no calls, no absolute reference. The byte-matchable set |

Absolute counts for each kind are in `docs/corpus.json`, which is the tool's own
output and is verified by `tools/checkall.js` against a fresh run.

**The largest single finding is the `not-entry` count.** 284 of the raw call
targets are not function starts, which is 38.5% of them. The routine total and
its meaning are owned by `call-graph.md`; what is new here is that a census can
separate the two populations at all, and how thin the fully matchable subset is.

## The library boundary is sharp, and it is not where I guessed

All 57 `not-c` routines sit at or above **`0xe86c4`**, and the image ends at
`0x105d0e`. But that is not a clean split: 4 of the 14 `c-leaf` routines and 58
of the 76 `base-fold` routines also live above `0xe86c4`. So the region is mixed,
not homogeneous library code.

What is clean is the **reason** mix. Below `0xe86c4` there are no `not-c`
routines at all. Above it, they appear with these signals:

- 42 carry `above 0xff000 (library layer)`
- 16 carry port I/O
- 9 carry `pusha`/`popa`, 8 carry x87, 5 carry `loop`, 2 carry `rep movs`

The reason counts sum above 57 because a routine can carry several. The point is
that the address signal alone covers 42 and the mnemonic test adds the rest, catch
15 of the 57 that the address floor would have missed. That is why the
mnemonic test exists.

## Distribution by 64 KB, which is the useful shape

| bucket | targets | not-entry | real entries |
|---|---|---|---|
| `0x000000` | 35 | 7 | 28 |
| `0x010000` | 1 | 1 | 0 |
| `0x090000` | 2 | 2 | 0 |
| `0x0c0000` | 1 | 1 | 0 |
| `0x0d0000` | 3 | 3 | 0 |
| `0x0e0000` | 239 | 68 | 171 |
| `0x0f0000` | 274 | 45 | 229 |
| `0x100000` | 183 | 157 | 26 |

The first 64 KB holds 28 small routines of 30 to 52 bytes each, all non-leaf.
Those are the Phar Lap extender and relocator, not game code. They make calls,
so the "no calls" gate already excludes them, but they should not be mistaken for
game routines in any future count.

## Cross-check against the hand-built register

`docs/routines.json` holds 24 routines classified by hand across earlier
sessions. Comparing the two independently:

- **0 of 24 disagree.**

Getting to that number required correcting my own comparison twice. First the
register writes `e9e2c` and the corpus writes `0x0e9e2c`, which produced twelve
false disagreements from string mismatch. Second, `base-fold` is not opposed to
`c-leaf`: `0xe1bf4` and `0xe1c24` are leaves that also reference an absolute
global, so the classes overlap. Once both were fixed, the agreement is exact,
which is worth more than the census alone because two unrelated methods agree.

Every `c-leaf` routine in the corpus is already in the register. There are no
known-good candidates sitting unworked.

## What this changes

- **The queue is smaller than believed.** 14 byte-matchable routines, 9 already
  matched. The realistic remaining target for exact reconstruction is 5, not
  hundreds.
- **307 `non-leaf` routines are the real body of the game.** They cannot match
  byte for byte, because their call displacements are relocations. They are what
  a reimplementation has to reproduce behaviourally, and they need a different
  method from the leaf loop.
- **76 `base-fold` routines** are readable and documentable but not matchable,
  for the same relocation reason.
- **57 `not-c` routines defeat every C source shape by construction.** Document
  them or ignore them; do not attempt them.

## On Ghidra and REA

Ghidra's verdict was already recorded in `docs/ghidra-viability.md`: 502
functions and 25,728 instructions against this project's 79,470, a factor of
three under-decode without seeds. Its permitted use is reading a routine whose
entry point is already established, which is what a census makes easy. It does
not help find code, and this page did the finding without it.

REA is not indicated for the routine census, because the instrument already
existed and worked. It is plausibly indicated for the 57 `not-c` routines and
for the asset formats, where no equivalent instrument exists.

## Open

- Whether the 26 `above 0xff000` routines are the same Fujitsu layer that
  `TMENU.EXP` names in its `SYM1` table. `SYM1` walks exactly (1725 records) but
  its values are 16-bit offsets within `TMENU`, so they cannot be mapped onto
  `ENCHANT` directly. Establishing the correspondence needs a different method.
- Whether any `non-leaf` routine can still be matched when its callee addresses
  happen to coincide after linking. Not measured.

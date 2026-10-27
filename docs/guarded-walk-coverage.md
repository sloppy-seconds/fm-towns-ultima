# What the walk reaches, now that the padding is excluded

**The first honest coverage figure for this binary, and the answer to whether the seeds are
enough. They were not: seeding 25 functions reached 28 percent of the code this project
believes exists, and seeding all 397 known-real ones reaches 110,778 bytes.**

Before this, every figure was inflated by zero fill. `docs/code-analysis.md` says to exclude the
zero regions first and the rule was not being applied, so a walk reported 354,904 instructions
of which most were `add [eax], al` decoding through 760 KB of BSS.

## The guard

`tools/codelimits.js` derives the runs from the bytes, `66` of them at the 64-byte threshold,
covering 821,284 bytes or 76.6 percent of the image. `--args` emits them as `--no-code` flags for
`fmtownskit`, which refuses a transfer into one rather than decoding it.

## The measurements

All four runs use the same seeds and the same image, and only the guard and the seed count differ.

| seeds | guard | functions | instructions | bytes of code |
|---|---|---|---|---|
| 25 | off | 163 | 354,904 | 716,067 |
| 25 | on | 163 | 8,043 | 22,317 |
| 397 | off | 604 | 539,581 | **1,119,103** |
| 397 | on | 603 | 35,644 | **110,778** |

The unguarded 397-seed run claims **1,119,103 bytes of code in a 1,072,398-byte file**. More
code than the file contains. That is not a subtle error and it read as a success.

## What the guarded numbers say

**With 25 seeds the walk reaches 22,317 bytes.** This project's corpus claims 397 real functions
totalling 80,578 bytes. So 25 seeds reached **28 percent** of the code we believe exists. The
seeds were not enough, and the earlier "354,904 instructions" hid that completely.

**With all 397 real corpus rows as seeds it reaches 110,778 bytes across 603 functions.** That
exceeds the corpus's own 80,578, so the walk is finding functions this project never named:
the seed set is now the limiting factor, not the walk.

**601 of the 738 corpus rows are reached.** The remainder are the ones already classified
`not-entry`, which is what that classification is for.

**Jump tables found rise from 7 to 64** with the wider seed set, 61 of them bounded by a `cmp`.
Every one of the 7 found from 25 seeds was verified real by `fmtownskit/tablecheck.py`, so this
is a measure of reach rather than of a looser detector.

## Raising the seed count

Feeding the walk its own discoveries back in converges at once: 603 seeds give 603 functions and
reseed with the function starts it found changes nothing. The ceiling was therefore the seed set,
not the walk, and the question was where better seeds could come from. Two candidates were
tested and one was rejected.

**Rejected: pointers found in the data.** Scanning the code band for dwords that point into it
yields 234 candidate function addresses, and they are not functions. 35 of them land inside a zero
region, and adding them raises conflicts faster than it raises functions:

| pointer seeds added | functions | conflicts added |
|---|---|---|
| 25 | +30 | +60 |
| 50 | +71 | +241 |
| 100 | +159 | +330 |

A seed that adds two conflicts for every function is decoding data. A dword in the code range is
not evidence of a function start, and this is the distinction `discover.py` makes when it says a
conflict means the descent has gone into data.

**Accepted: the rows this project had already classified `not-entry`.** Of the 284 such rows, 214
begin with `push` and 42 with `enter`, which is 256 of 284 looking like plausible prologues. They
were labelled `not-entry` for the reason "not a real function start" without a prologue test
having been recorded, so the label was treated as unproven.

Added one at a time, keeping a row only if it raised conflicts by no more than 2, **275 of the 284
were accepted and 9 rejected**. The result:

| seeds | functions | instructions | bytes of code | conflicts |
|---|---|---|---|---|
| 397 corpus rows | 603 | 35,644 | 110,778 | 362 |
| 672 after acceptance | 709 | 40,943 | **127,239** | 366 |

Four more conflicts for 105 more functions and 16,461 more bytes. That is a sound trade, and the
contrast with the pointer seeds is the whole point: the same method applied to the same binary
separates a real function start from a data value.

**Almost every corpus row is now reached**, 68 jump tables are found with 65 bounded, and 24
indirect transfers remain unresolved. The reached fraction is against the row count owned by
[call-graph.md](call-graph.md).

## What the not-entry label was doing

The label was right about 9 rows and wrong about 275. That is worth recording rather than quietly
fixing, because it changes what `docs/corpus.json` is for: a set of candidate starts to be tested,
not a set of established ones. Treating `not-entry` as a fact would have excluded a quarter of
the game's functions from every walk.

## What this does not say

The 127,239 is a floor, not a total. It is what is reachable from 672 seeds, and code reachable
only from an unresolved indirect transfer is still not in it, there being 24 such transfers in the
final run. Nor is every byte it counts necessarily a distinct function: bodies may share code, and
a jump into another function's middle copies that code into both, which is measured rather than
estimated away.

## Reproducing

```
node tools/codelimits.js --args > /var/tmp/ranges.txt
python3 -m fmtownskit.recomp.discover ENCHANT.EXP --seed "$(cat seeds.txt)" \
    $(sed 's/^/--no-code /' /var/tmp/ranges.txt | tr '\n' ' ')
```

`node tools/checkall.js` fails if the measured runs and the table in
[code-analysis.md](code-analysis.md) disagree, so a different rip of the disc is detected rather
than producing a merely larger count.

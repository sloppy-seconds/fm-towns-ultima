# Do the three games share an engine, and does the tooling work on all of them

**There is no shared engine at the binary level. There is a shared toolchain, and the tooling
transfers. Those are different findings and only the second is useful.**

## The binaries

All three are on the disc and all three extract cleanly. Measured, not assumed:

| binary | bytes | signature | pages | page arithmetic | relocations | header |
|---|---|---|---|---|---|---|
| `DARKNESS.EXP` | 965,986 | `MP` | 1887 | **matches** | 0 | `0x1e` |
| `ENCHANT.EXP` | 1,072,398 | `MP` | 2095 | **matches** | 0 | `0x1e` |
| `EXODUS.EXP` | 904,310 | `MP` | 1767 | **matches** | 0 | `0x1e` |

Every one is the same container variant, so the `MP` path added to `fmtownskit` opens all three.
`(pages - 1) * 512 + lastPage` reproduces the file size exactly in each case, which is the
arithmetic that identifies the variant.

## No shared engine

Naive byte comparison suggests otherwise and it is wrong:

| pair | bytes equal | equal **excluding bytes zero in both** |
|---|---|---|
| `DARKNESS` vs `ENCHANT` | 78.4% | **3.3%** |
| `DARKNESS` vs `EXODUS` | 73.6% | **3.5%** |
| `ENCHANT` vs `EXODUS` | 75.0% | **3.2%** |

The 75 to 78 percent is shared BSS. All three carry roughly the same zero-filled global layout, so
an offset-by-offset comparison counts the same emptiness three times. Removing it leaves 3 percent,
and that 3 percent is concentrated in one place:

| 4 KiB block | identical non-zero bytes, `DARKNESS` vs `ENCHANT` |
|---|---|
| `0x0000` | **99%** |
| `0x1000` to `0xffff` | 5 to 12% |
| `0xd0000` upward | 0% |

So the only substantial shared code is at the start of the image, which is the High C runtime
preamble, and the game code beyond `0x1000` is independently compiled with no byte-level overlap.

**These are three separately linked programs that share a compiler and a runtime library.** Nothing
can be lifted from one into another, and no common engine layer is exposed by the bytes.

## What is shared, and it is the toolchain

The compiler is the same, which is what makes one set of findings worth testing on another binary:

- MetaWare High C, established for `ENCHANT` by its own runtime strings (`_mwFINIT`,
  `_mwdos_interface1`, `_mwctop1`) and for the ports in `fmtownskit` by `_mwINIT` and the marker set
- the `MP` container with `relocCount = 0`, so file offset equals virtual address in all three
- the same `_mw*` runtime layer, which is why `0x0000` is 99 percent identical

## The tooling transfers, which is the finding worth keeping

Checked on `DARKNESS` and `EXODUS` with no U2-specific assumptions beyond the container:

| | `DARKNESS` | `EXODUS` |
|---|---|---|
| opens through the `MP` path | yes | yes |
| base 0, no entry point | yes | yes |
| zero regions derived | 56 runs, 74.8% | 59 runs, 68.3% |
| walks from a single seed | 445 instructions | 2,094 instructions |

So the zero mask, the no-code guard and the walk are properties of the format and the compiler,
not of one game. That is a real result and it is worth more than the engine question, because it
means a rule learned here can be checked there.

## The demos are not evidence and were excluded

`UT1DEMO.EXP`, `UT2DEMO.EXP` and `UT3DEMO.EXP` sit on the same disc at 618 to 619 KB each and are
91.8 percent byte-identical to one another, which looks like a shared engine. They are static
slideshows. 90.8 percent of each is zero fill, the identical part is the presentation shell, and
the game-specific content is one 44 KB region at `0x8b000` to `0x96000`. Nothing about the game
code can be concluded from them, and an early reading of their similarity as an engine was wrong.

## What this does not settle

The walk reaching code in `DARKNESS` and `EXODUS` from one arbitrary seed is not the same as the
walk being complete there. Neither has a seed set, so neither has a coverage figure, and the
`98.7 percent of the C-shaped corpus` result is specific to `ENCHANT` because the corpus is.

What it does establish is that a finding about the compiler's output, the container, or the
runtime layer can be tested on three binaries instead of one. That is worth having when a
conclusion about arithmetic or encoding is in doubt.

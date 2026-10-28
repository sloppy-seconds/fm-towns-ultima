# Name propagation from TMENU to ENCHANT: tried, and negative

References/UWReverseEngineering's FM Towns notes describe a method that named 113 functions in a
symbol-less build: probe the first 24 bytes of every function in a build that kept its symbols, keep
only probes that occur **exactly once** in the target, and the match names the function. It needs no
disassembly and no calling convention.

This disc has the same shape. `TMENU.EXP` carries a `SYM1` table naming 1,725 things, and
`ENCHANT.EXP` carries no symbols at all. The experiment is one command:

```
node tools/propnames.js [--shift N] [--list] [--tsv analysis/propnames.tsv]
```

**Tried:** parse the `SYM1` table, take a 24-byte probe at each symbol's value, drop probes with fewer
than 4 distinct byte values or fewer than 8 nonzero bytes, and count occurrences in `ENCHANT.EXP`. A
count of one is a candidate name.

**Measured, aligned probes:** 1,291 usable of 1,725 records, after 2 zero values and 432 degenerate
probes. **54 unique matches, 1,234 with no match, 3 matching more than once** (`EGB_connect` 35 times,
`MOS_setpos` 7, `MOS_type` 4). That is a 4.2 percent unique rate, and the landed offsets fall in two
blocks only, 27 in `0x000000-0x00ffff` and 27 in `0x100000-0x10ffff`.

## The control says the number is meaningless

Moving every probe N bytes into its function should destroy a real entry-identification signal, because
the bytes that identify a function begin at its entry. It does not:

| `--shift` | unique matches |
|---|---|
| 0 | 54 |
| 1 | 53 |
| 4 | 55 |
| 12 | 45 |

A flat rate under a shift is the answer: these matches are unique 24-byte sequences somewhere in the
file, not function starts.

## Auditing the 54 confirms it

Four landed offsets were read directly, and none is an instruction boundary in `ENCHANT.EXP`:

| landed | name claimed | what is actually there |
|---|---|---|
| `0x0003f2` | `EGB_sjisString` | `24 14 b4 06 0f a0 68 10 01 00 00 0f a1`, not a boundary |
| `0x000416` | `EGB_textSpace` | `0c 8b 54 24 10 b4 07 ...`, not a boundary |
| `0x000592` | `EGB_pset` | `57 8b 7c 24 08 8a 44 24 0c b4 11 ...`, not a boundary |
| `0x000e4c8` | `FW_sx` | `23 00` then the string `***Floating point stack`, not code at all |

`node tools/cfgwalk.js --check <offset - 0x20>` reported "NOT an instruction boundary" for every code
site tried. The recurring byte family is `b4 xx 0f a0 68 10 01 00 00 0f a1`, which is
`mov ah,N` / `push fs` / `push 0x110` / `pop fs`, a protected-mode check that this binary repeats in
several places. A repeating idiom is exactly what a 24-byte probe mistakes for a signature.

**Verdict: NEGATIVE. Zero names earned.** The method is sound and the implementation finds what it was
asked to find. What it was asked to find does not exist on this pair.

## Why it cannot work here, and what would

The reference case propagates between **two builds of the same source by the same compiler**: DOS
`UW2.EXE` and the FM Towns recompile. Byte identity is expected there, and they report 90.9 percent of
`e8` call targets landing on a named symbol as their check.

`TMENU.EXP` is Fujitsu's Towns OS launcher and `ENCHANT.EXP` is Origins' build. They share an API, not
an implementation: the Fujitsu library is statically linked into each program, so "the same library" is
two separately compiled copies, from two different compilers. There is no reason for their bytes to
agree, and they do not.

**What would work is a symbol-carrying sibling of the same build, and none exists on this disc.** That
is the same conclusion [fmtownskit-and-seeds.md](fmtownskit-and-seeds.md) reaches from the other
direction: this project has no linker-supplied seeds, because the one binary that kept its symbols is
not the game.

## A tool defect found on the way

`tools/sym1.js` read the record value as a `u16`. [palette.md](palette.md) 6.12 had already measured
that it is a `u32`, and the walk is **exact either way**, because the correctness test is the 6-byte
tail and not the field widths. So the table walked, printed a 16-bit value range, warned about a
"reserved field" that does not exist, and was wrong in every value it reported. It now reads
`[u32 value][u16 type]` and reports `0x238` to `0x33848`, which is the range 6.12 measured and which
falls inside TMENU's declared load image.

The lesson generalises: **an exact walk validates the stride, not the field widths**, and a table that
parses cleanly still needs its values checked against something independent.

---

**[References](references.md)** **[The control-flow walk](cfgwalk.md)** **[Plan](plan.md)**

# What fmtownskit already solved, and what our game lacks that his had

**A toolkit exists that does most of what this project has been building by hand, and the one thing it
needs that `ENCHANT.EXP` cannot supply is the thing that keeps going wrong here: authoritative seeds.**

The clone is at `references/vs-sr-dev/fmtownskit` on branch `mp-support` (not in git, `references/` is
ignored). What follows is measured against this project's binary and against his three FM Towns ports.

## The compiler is the same, so the comparison is fair

`docs/highc-authentic-toolchain.md` establishes High C 1.73 with serial 1-307000. `ENCHANT.EXP`
carries MetaWare's own strings:

```
$ strings -a ENCHANT.EXP | grep -E '_mw|High C'
High C Run-time Library Copyright (C) 1983-1988 MetaWare Incorporated.
_mwaprintf  _mwARG  _mwctop1  _mwdos_interface1  _mwdos_interface3
_mwexits    _mwFINIT  _mwheap1  _mwinit_buf  _mwstackdump
_mwStdio1c  _mwstdlib1  _mwStdlib5  _mwtime1  _mwfopen  _mwprintf
```

His `pc-4ddriving` is the closest of the three ports to that: `docs/00-sessions.md` there records
"MetaWare High C, `_mwINIT`", and `03-executables.md` lists the same marker family, `_mw387used`,
`_mw87only`, `_mw1167used`, `_mw3167used`, `_mwfltused`. **Same compiler family, same library layer**,
so its treatment of startup code, library routines and hand-written drawing code should transfer.

The one difference is decisive, and it is not the compiler.

## What his games have and ours does not

His executables are `P3` with symbol tables kept. `4DDFMT.EXP` carries **2,047 symbols**, and he lays
out the entire image from them:

```
0x00000-0x3A650   code: 1,218 symbols, game then MetaWare's library then the Towns layer
0x3A650-0x46D54   initialized data; _edata at 0x46D54
0x46D54-0x58490   uninitialized data, to _end
0x58490-0x6BD10   the stack
```

Two consequences that this project has been paying for:

**The entry point is in the header.** `4DDFMT.EXP`'s entry is `0x340A4`, the symbol `_mwINIT`. His
toolkit reads `e.eip` and walks. `ENCHANT.EXP` is `MP`, which has no EIP field at all, which is why
`Exp.eip` is `None` on the `mp-support` branch and every caller now needs a seed supplied.

**Function starts are linker-supplied.** `--symbol-seeds END` makes every symbol below the code end an
entry. That is not a heuristic. Our seeds are inferred by this project's own analysis, and a third of
the candidate set is already classified as not being real entries (the breakdown is owned by
[call-graph.md](call-graph.md)), so a share of the seeds is known to be wrong before it is used.

**And he never needed a zero-region guard**, because `_edata` and `_end` told him where data began.
There is no BSS-detection code anywhere in `fmtownskit`, only a "hole" in a jump table, which is a
different thing.

## The interleaving is the same, and he named it

`docs/03-executables.md` in `pc-4ddriving` records, of the drawing routines:

> *inferred* hand-written: they jump through tables placed right after the jump (`jmp cs:[ebx + table]`,
> the index already computed)

That is the `jmp cs:[ebx + table]` form with the table immediately after the instruction, which is
exactly the `2E FF 24 95 <disp32>` encoding measured in our binary at `0xE2F21`, `0xF0EE5` and
`0xFE4D5` on this branch. The `2E` prefix is what defeated the first version of `tablecheck.py`.

## What our image looks like instead

Density per 64 KiB block, measured on `ENCHANT.EXP`:

```
0x000000  nonzero 81.1%    header, startup, assets
0x010000  nonzero  0.0%    \
0x020000  nonzero  0.0%     |
0x030000  nonzero  0.0%     |  three zero regions, 778,565 bytes
0x040000  nonzero  0.1%     |  760 KB of which is one run
0x050000  nonzero  0.0%     |
0x060000  nonzero  0.0%     |
0x070000  nonzero  0.4%     |
0x080000  nonzero  0.0%     |
0x090000  nonzero  0.0%     |
0x0a0000  nonzero  0.0%     |
0x0b0000  nonzero  0.0%    /
0x0c0000  nonzero  2.4%
0x0d0000  nonzero 14.3%
0x0e0000  nonzero 84.1%    the game's code
0x0f0000  nonzero 86.4%
0x100000  nonzero 86.6%
```

The three runs, from the bytes rather than from the table in [code-analysis.md](code-analysis.md):

```
0x00e5f2..0x040fcc   207,322
0x04108e..0x07a10c   233,598
0x07b577..0x0cdc64   337,645
```

**810,474 bytes, 75.6% of the file, counting all 12 runs of 1 KiB or more.** The three above are 778,565
of that, and the remaining nine are between 1 and 10 KiB. The threshold barely matters: a minimum run
length from 64 to 4096 moves coverage only from 76.6% to 74.8%.

His layout is code then data. Ours is code, then 700 KB of zeros, then more code, and the zeros sit
between the low startup routines and the game proper. So a walk seeded from low addresses runs into
BSS, and zeros decode as `add [eax], al`, two bytes at a time, forever, without error.

## The measurement that this invalidates

An earlier run on this branch reported, and this project quoted:

```
354904 instructions reached: 354904 agree with capstone, 0 differ, 0 refused here
```

**That number is not a coverage figure.** Seeded from `0xf00b0`, the walk produced a single
152,933-byte extent from `0x1bb27` to `0x4108c`, and `0x1bb27` is all zeros. Two seeds, `0xf00b0` and
`0xe4948`, each drag in over 100,000 instructions of padding. Every one of them agreed with Capstone,
because both decoders were correctly decoding zero fill.

The same run reported `259 refused` and `284540 conflicts`, and the conflicts are the useful part: they
begin at `0x5`, `0x6`, `0x7`, inside the header, which is what a walk that has left its data structure
looks like.

[code-analysis.md](code-analysis.md) already said this: *"Any measurement of this binary needs to
exclude the zero regions first."* The rule was written down and then not applied.

## What follows for the seeds question

The seeds are **not** the fault. Every corpus row that starts inside a zero run is already classified
`not-entry`:

```
0x17509  not-entry
0x9b46b  not-entry
0x9849b  not-entry
```

The mask would refuse exactly what this project already doubts, which is the best available evidence
that it is calibrated rather than over-broad.

Whether the seeds are **sufficient** is still unmeasured, and cannot be measured until the inflation is
removed. With a guard in place the instruction count becomes a real number, and only then does
"instructions reached as a fraction of the 84 percent dense band" mean anything.

## What is worth taking from fmtownskit

| piece | verdict |
|---|---|
| `exp.py` `P3` parser | not applicable, so an `MP` path was added instead, see the branch |
| `i386.py` decoder | **agrees with Capstone on every routine checked** |
| `x86map.py` table detection | **7 sites reported, 7 real, 0 false positives** |
| `recomp` | **works**: the pixel writer recompiles and passes its self-test, 4 vectors 0 failures |
| `x86map` call/port/interrupt naming | **the large win**: names DOS, Phar Lap, CD BIOS, TBIOS far calls and `int 90h` traps in one pass |
| its zero-region handling | **absent, and never needed** |

The lesson is not that the toolkit is weaker for lacking a zero guard. It is that his seeds came from
the linker and ours do not, and a toolkit built on linker-supplied seeds never has to ask where the
code stops.

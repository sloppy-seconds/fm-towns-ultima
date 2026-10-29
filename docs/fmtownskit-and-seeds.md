# What fmtownskit already solved, and what our game lacks that his had

**A toolkit exists that does most of what this project has been building by hand, and the one thing it
needs that `ENCHANT.EXP` cannot supply is the thing that keeps going wrong here: authoritative seeds.**

The kit is a git submodule at `fmtownskit`, pinned to a published upstream commit with this project's MP support
applied as `patches/fmtownskit-mp-support.patch` (see [fmtownskit-patches.md](fmtownskit-patches.md)). What follows
is measured against this project's binary and against his three FM Towns ports.

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
toolkit reads `e.eip` and walks.

> **CORRECTION: `MP` does have an entry point, and it is the dword at `0x14`.** This section said
> `ENCHANT.EXP` "has no EIP field at all", which is why `Exp.eip` is `None` and every caller must
> supply a seed. The dword at `0x14` holds `0x00101A20`, and the loader is observed transferring
> control there. The claim came from `MP_FIELDS`, which has no entry at `0x14` and so never looks at
> it. See [the entry point `MP` does have](#the-entry-point-mp-does-have) below.

**Function starts are linker-supplied.** `--symbol-seeds END` makes every symbol below the code end an
entry. That is not a heuristic. Our seeds are inferred by this project's own analysis, and a third of
the candidate set is already classified as not being real entries (the breakdown is owned by
[call-graph.md](call-graph.md)), so a share of the seeds is known to be wrong before it is used.

**He never needed a zero-region guard for his own games**, because `_edata` and `_end` told him where
data began. Our branch had to add one: commit `05810fa` gives `x86map.py` a `no_code` parameter and
the CLI a `--no-code LO:HI` flag, so a descent cannot walk into zero fill and the refusal names
itself. The same guard now sits in this project's own walk, where it removed 40,113 instructions from
the count. See [cfgwalk.md](cfgwalk.md).
There is no BSS-detection code anywhere in `fmtownskit`, only a "hole" in a jump table, which is a
different thing.

## The entry point `MP` does have

`MP_FIELDS` reads ten fields from a flat `MP` header and not one of them is the entry. The dword is
there anyway, at `0x14`:

```
$ python3 -c "import struct;d=open('ENCHANT.EXP','rb').read(0x1e); \
    print(hex(struct.unpack_from('<I',d,0x14)[0]), hex(struct.unpack_from('<H',d,0x16)[0]))"
0x101a20 0x10
```

and the loader uses it. A `SAVEHIST` dump taken the instant the game's first library call was reached,
read from the oldest end, has the hand-off at step 46,254 of 65,536:

```
46253  0008:00003DD3     IRETD, the loader's last instruction
46254  000C:00101A20     the header's entry, first game instruction
46255  000C:00101A78     where its `jmp` goes
```

```
$ U 0008:3DD3      -> CF        IRETD
$ U 000C:101A20    -> EB 56     JMP 00101A78
```

So the transfer is an interrupt return that pops `CS:EIP = 000C:101A20` from a frame the loader built.
The header's `CS` word is `0x0010` and the runtime selector is `000C`, so **the loader takes the flat
dword and ignores `CS`**, which is what a 386 flat-model `MP` should do. The entry instruction is a
two-byte jump. See [entry-point-question.md](entry-point-question.md).

**Two conversions were being conflated, and there is only one.** The toolkit kept `image_offset = 0`, so it
treated a file offset as an address, and then the runtime address had to be recovered by subtracting `0x200` by
hand. At runtime the relation is `address = file offset - 0x200`, measured from `MD 000C:0` returning
`KYB_init`, which is at file `0x200`. The mistake was treating that as a conversion for the caller to make,
when it is a property of the container: **the image begins at file `0x200`, because that is where the loader
maps it.** File length confirms the header either way, since `pages*512 - 512 + last_page` is 1,072,398.

So `_read_mp` keeps no file offsets at all and converts nothing:

```python
self.image_offset = 0x200
self.image = data[0x200:]
self.base_offset = 0
self.eip = struct.unpack_from('<I', data, 0x14)[0]   # 0x101A20, an address already
```

**Measured, and the difference is the point.** Walking from that one seed, with no seed list at all:

| model | functions | instructions | refused | conflicts |
|---|---|---|---|---|
| image = whole file, no entry | n/a, refuses without a seed | | | |
| image = whole file, entry `+0x200` | 359 | 498,320 | 518 | 284,785 |
| **image at `0x200`, entry as read** | **622** | **38,486** | **0** | **0** |

The middle row is why the `+0x200` formula that this page used to recommend was wrong: it puts the walk's
starting bytes in the right place and leaves every immediate in the code pointing `0x200` past its target,
which is what 284,785 conflicts look like. With the image at `0x200`, one seed from the header gives a clean
walk of 622 functions.

One seed is not a seed list, so the open question about whether this project's inferred seeds are
sufficient is untouched. What changes is that the walk now has one anchor that the loader itself
proves, instead of only `CALL` targets that this project inferred.

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
that it is calibrated rather than over-broad. That is now measured rather than expected: the walk in
[cfgwalk.md](cfgwalk.md) refuses three seeds, and they are the three addresses listed above.

Whether the seeds are **sufficient** is still unmeasured, and cannot be measured until the inflation is
removed. With a guard in place the instruction count becomes a real number, and only then does
"instructions reached as a fraction of the 84 percent dense band" mean anything.

## What is worth taking from fmtownskit

| piece | verdict |
|---|---|
| `exp.py` `P3` parser | not applicable, so an `MP` path was added instead, see the branch |
| `exp.py` `MP` entry | **available but unused**: the dword at `0x14` is the entry, observed delivered |
| `i386.py` decoder | **agrees with Capstone on every routine checked** |
| `x86map.py` table detection | **7 sites reported, 7 real, 0 false positives** |
| `recomp` | **works**: the pixel writer recompiles and passes its self-test, 4 vectors 0 failures |
| `x86map` call/port/interrupt naming | **the large win**: names DOS, Phar Lap, CD BIOS, TBIOS far calls and `int 90h` traps in one pass |
| its zero-region handling | **added by our branch**, not absent: `05810fa`, `--no-code LO:HI`, refusals named |

The lesson is not that the toolkit is weaker for lacking a zero guard. It is that his seeds came from
the linker and ours do not, and a toolkit built on linker-supplied seeds never has to ask where the
code stops.

# The flag search for the base-register lea: negative

**Verdict: NEGATIVE for the flag sets that are demonstrably live. The `lea` encoding is
not a compiler flag in High C 1.73.** Forty flag sets were compiled against the
`0xe3c58` body, and none produced the target's `lea`.

This is the probe `docs/nobase-sib.md` asked for: "a flag search that is aimed at this
specific output". It has now been run, and the answer is no. The important part of the
result is not the zero, it is that the search was first shown capable of producing a
non-zero.

## The one instruction under test

`0xe3c58` is 41 bytes and 39 of them already reproduce. The two that do not are one
instruction:

```
target    8d b0 90 de 04 00    lea esi,[eax+0x4de90]      mod=10, base register present
ours      8d 34 05 <disp32>    lea esi,[eax*1+disp32]     mod=00, SIB base field = 101
```

Both compute the same address. The question is whether a flag chooses the encoding.

## The search

`tools/leasibflags.py`, 40 flag sets, one fixed source:

```
$ python3 tools/leasibflags.py
compiled: 39 of 40;  rejected: 1
emitted the base-register lea (8db0): 0
no exact match
```

Covered: the whole `-O` family (`-O`, `-O1`..`-O4`, `-OA`, `-Oa`, `-Od`, `-Oe`, `-Oi`,
`-Op`, `-Or`, `-Os`, `-Ou`, `-Ow`, `-Ox`, `-OT`, `-OTx`), the four toggles MetaWare
itself names in `hc386set.cnf` (`optimize_xjmp`, `optimize_fp`, `auto_reg_alloc`,
`postpone_arg_pops`), those same four combined, `-on` forms, and a set of plausible
addressing names.

## Why the zero means something: the positive control

A null result from a flag sweep is worthless if the flags never reach codegen. Two
checks were made.

**Flags do change output.** Two sets in the matrix changed the emitted bytes:

| flag set | effect |
|---|---|
| `-off optimize_xjmp` | different code, `53 56 57` prologue instead of `56 57` |
| `-off auto_reg_alloc` | different code, spills to `[ebp-0xc]` instead of registers |

So the pipeline is live and the sweep is not measuring a constant.

**But most toggle names are unobservable, and that limits the claim.** Testing each name
against a source it should affect:

```
-off optimize_xjmp        LIVE
-off auto_reg_alloc       LIVE
-off optimize_fp          no change on this source
-off postpone_arg_pops    no change on any source tried
-off opt_sib              no change
-off opt_addr             no change
-off peephole             no change
```

**An invented flag name is indistinguishable from a real one that does not affect this
source.** `-off this_flag_does_not_exist` compiles cleanly and produces byte-identical
output. So for the fourteen names that showed no change, the honest statement is not
"the toggle was tried and did nothing", it is "the toggle was accepted and this source
does not reveal whether it exists".

The negatives with weight behind them are therefore:

- every `-O` level, which are documented and all produce identical output here
- `optimize_xjmp` and `auto_reg_alloc`, which are proven live and do not fix the `lea`
- `optimize_fp` and `postpone_arg_pops`, which MetaWare names but which do not change
  these sources at all, so they remain untested rather than refuted

**The four speculative names (`opt_sib`, `opt_addr`, `opt_peephole`, `opt_cse` and the
like) are not evidence.** They were invented, the compiler accepted them without
complaint, and nothing distinguishes them from typos. Recorded as attempted, not as
tested.

## What this rules out and what it does not

**Ruled out:** the `lea` encoding is not chosen by an optimisation level, and it is not
one of the two toggles this project can prove are live.

**Not ruled out:** a toggle exists that this project does not know the name of, and that
changes only addressing. The way to settle that is not more invented names. It is
`config.exe` or `hc386set.cnf` on the kit, which list the real toggles, or the compiler's
own help output on the `Q:` drive. Neither has been read.

That is the next probe, and it is a documentation read rather than a compile sweep.

## Consequence for the parked routines

`0xe3c58` stays parked with the cause "the `lea` encoding is not reachable by a flag this
project can demonstrate", which is now a measured statement rather than a guess.

**Two routines left this class entirely.** Running the baseline as a control showed that
`0xe779c` and `0xe7784` were never mismatches at all: the plain source

```c
extern char arr[];
int f(int i) { return *(int*)(arr + i*57); }
```

compiles to `8b 82 <disp32>`, which is exactly the target. Both are now recovered with no
flags. The nobase-SIB class page had them listed as parked on the strength of a
different source shape, and the class is now one routine rather than three.

## Related

- `docs/nobase-sib.md`: the class this probe was aimed at, corrected by it
- `docs/compiler-generation.md`: the other encoding-level class
- `docs/decompilation-experiment.md` result 10: the earlier frame-flag negative
- `tools/leasibflags.py`: the probe, with its flag list and its controls

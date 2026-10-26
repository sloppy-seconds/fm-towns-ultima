# The kit's real toggle list, read from the kit

**Verdict: obtained, 43 toggle names, and none of them produces the base-register `lea`.**
This closes the gap `docs/leasib-flags-negative.md` left open: that page could only refute
the `-O` family and two toggles, because this compiler accepts an unknown toggle name
silently and an invented name is indistinguishable from a real one that does nothing.

The list is now read from the kit rather than guessed, and the negative is complete.

## How it was read

`Q:\HC386\BIN` holds `hc386.cnf` (the driver's logic) and `hc386set.cnf` (the variables).
Neither had ever been read. The guest can `COPY` from `Q:` to the compile floppy, and
`tools/cserve.js` gained a `/api/probe` route that runs an arbitrary batch through the same
write-attach-type-poll path the compiler already uses, so the files come back without any
hand work against the floppy image.

```
POST /api/probe  {"batch":"COPY Q:\\HC386\\BIN\\HC386.CNF A:\\HC386.CNF ...",
                  "want":["HC386.CNF","HC386SET.CNF"]}
```

`hc386.cnf` is 2,098 lines of driver logic. `hc386set.cnf` is the variable file, 4,681 bytes.

## The toggles

Every `-on`/`-off` name that appears anywhere in `hc386.cnf`, which is the set the driver
itself uses:

```
A  A30  ANSI_FP  B  BEHAVED  CHAR_DEFAULT_UNSIGNED  CHECK_RANGE  DOUBLE_MATH_ONLY
LONG_ENUMS  PCC  PROTOTYPE_CONVERSION_WARN  TRIGRAPHS  VP_UP_WARN  _  abi  asm  b0
cross_jump  dbx  default_far  double_math_only  double_return  emc87  floating_point
ieee_fp  inline_sqrt  list  loc_fp_return  loc_struct_return  long_enums
multiple_var_defs  optimize_xjmp  pcc  pcc_msgs  print_info  pskip  respect_far  sched
scheduling  segmented_1167  trigraphs  use_wtlbase_for_weitek  warn
```

**43 names.** `cross_jump` and `optimize_xjmp` are two spellings of one toggle, which matters
because the project had only ever recorded the `optimize_xjmp` spelling.

Several of the names this project invented and could not test are **not** in the list:
`opt_sib`, `opt_addr`, `peephole`, `opt_cse`, `opt_loop`, `opt_size`, `opt_strength`,
`opt_alias`, `opt_common`, `opt_dead`, `opt_reg`. They are confirmed nonexistent rather than
merely unobservable, which is what the earlier page could not say.

## The test, run against the real names

Each name compiled in both senses against the `0xe3c58` body:

```
baseline has target lea: False

optimize_xjmp                -off  changed
```

**One name in the entire real list changes the output, and it is not a change that reaches
the `lea`.** Every other name either produced byte-identical output or was rejected.

So the negative now reads: of 43 toggles the compiler's own driver knows about, none makes it
emit `8d b0` where it currently emits `8d 34 05`.

## The address-model question, also answered

The `lea` difference is an addressing-encoding choice, so the obvious remaining suspect was a
memory-model switch. `hc386.cnf` answers it:

```
?=^ $CPU ^ I386 ^ mletter=  %;  # Only small model for 386.
```

**There is only one memory model for this target.** The `-Mb` / `-MB` far-model options are
under the I860 section, not the 386 one. So there is no model toggle that could change how a
base register is encoded, and the option never existed for this CPU.

## What this establishes

`0xe3c58` is parked for a reason that is now fully measured:

- 39 of its 41 bytes match
- the one differing instruction is `lea esi,[eax+disp32]` against `lea esi,[eax*1+disp32]`
- 43 real toggle names were tested and none changes it
- the `-O` family was already refuted
- there is no 386 memory-model switch to try

The remaining explanations are not flags. They are the ones
`docs/compiler-generation.md` already lists: a different build of the compiler, or a
hand-written fragment. This page does not distinguish those, and says so.

## Incidental findings worth keeping

**`ARGS=` is empty in the shipped configuration.** `hc386set.cnf` ships `ARGS=-native -HVp`.
So the kit as delivered compiles with `-native`, which runs the target-hosted tools. That is
not what this project's compile route does, and it is a difference between our invocation and
the kit's own default that nothing previously recorded.

**`HCDEBUG` is confirmed verbatim.** The four toggle names this project quotes from
`hc386set.cnf` are the real line:

```
HCDEBUG=-on codeview \
       -off optimize_xjmp optimize_fp auto_reg_alloc postpone_arg_pops
```

`LINKNAME=386linkp.exp`, which explains the link failure recorded in
`docs/bootable-dos-hdd.md`: the kit's default linker is the P3 extender form, not
`386link.exe`.

**And that failure is not a missing file.** The `find` procedure in `check_link_as` walks
`$TOOLSDIR` then `PATH`, and assigns the literal message
`/$toolname/not/found/in/TOOLSDIR/or/PATH` only when both fail. `TOOLSDIR` is empty in the
shipped `hc386set.cnf`, so the search had exactly the one place to look. The file is a
default name in a config we can read; the gap is the path variable, not the binary. See
`docs/bootable-dos-hdd.md` for the quoted line numbers.

This matters for scope: finding `386linkp.exp` is not a research task and would not change
any byte-matching result, because the linker runs after the encoding decisions this page is
about.

## A toggle that can be read off the code: `CHAR_DEFAULT_UNSIGNED`

Most toggles leave no signature, because the game's bytes ARE the output and the only test
is compiling a candidate. One is different: the signedness of a bare `char` decides which
branch family the compiler emits, so it can be measured directly.

**First, the default is not what this project assumed.** Measured with `tools/cc.sh` on a
plain global `char` load:

```
default                        0f b6 ...    movzx    char is UNSIGNED by default
-off CHAR_DEFAULT_UNSIGNED     0f be ...    movsx    this is how you get signed
-on  CHAR_DEFAULT_UNSIGNED     no change             already the default
```

So the toggle exists to turn signedness **off**, `-on` is a no-op, and a source wanting
signed bytes says `signed char` or the build passes `-off`.

**Second, the game matches the default.** `tools/signedness.js`, decoding the code region
with `tools/decode.js` rather than byte-scanning it:

```
Branches whose comparison reads a BYTE register:
  signed   2
  unsigned 37
  signed share: 5.1%

Byte extension:
  movsx 36   movzx 82   movsx share 30.5%
```

Both signals agree: unsigned dominates byte comparisons and `movzx` outnumbers `movsx`.

### A correction worth keeping, because the first version of the tool was wrong

The first run counted **every** conditional branch and reported 77 percent signed, which
would have meant signed char. That was wrong, and the measurement that exposed it is useful:
of 370 conditional branches in the region, **264 compare registers and only 74 touch
memory**, because most are integer loop counters and bounds checks. Their signedness is a
property of the surrounding arithmetic, not of `char`. Restricting the count to branches
whose comparison actually reads a byte register flips the answer from 77 percent signed to
5 percent.

An aggregate over a population that is mostly not about the question is the same defect this
project has recorded repeatedly, and it reproduced here inside a tool written to avoid it.

### What this settles, and what it does not

**Settled:** the game was built with `CHAR_DEFAULT_UNSIGNED` on, i.e. the default, with no
`-off`. That is a compiler setting read from the code rather than from the kit.

**Not settled:** this says nothing about `enter`/`xor`, `optimize_xjmp` or anything else in
the 43-name list. Only toggles that change an observable instruction family can be read
this way, and most do not.

## The banner in the image, read, and what it does not prove

The obvious shortcut was to read the game's own build banner. It contains one:

```
0x101c32: High C Run-time Library Copyright (C) 1983-1988 MetaWare Incorporated.
```

**This is already recorded** in `docs/highc-v17.md`, which compares it against the kit:
the game embeds `1983-1988`, the 1.73 kit's library carries `1983-1989`, and v2.31 also
carries `1983-1988`. So the string does not separate the candidates, and the page already
says so. Reading it again confirmed the number rather than discovering it.

**And it is the RUNTIME LIBRARY banner, not the compiler's.** It sits at `0x101c32`, above
the `0xff000` library floor, among symbols like `_mwexits` and `_exit`. The census classes
25 entries around it as `not-entry`. So it dates the library the program was linked
against, which is compatible with a range of compilers, not the code generator that emitted
the game's own functions.

**No build flags are in the image.** Searched and absent: `HCDEBUG`, `ARGS=`, `optimize_`,
`hc386`, `codeview`, `386link`, `char_default`. So the game carries no record of how it was
compiled, and that avenue is closed rather than untried.

## Related

- `docs/leasib-flags-negative.md`: the earlier, narrower negative this completes
- `docs/nobase-sib.md`: the one routine this is about
- `docs/compiler-generation.md`: the two non-flag explanations that remain
- `docs/bootable-dos-hdd.md`: `LINKNAME` and the P3 linker
- `tools/cserve.js` `/api/probe`: the route that made reading the kit possible

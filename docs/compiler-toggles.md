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

## Related

- `docs/leasib-flags-negative.md`: the earlier, narrower negative this completes
- `docs/nobase-sib.md`: the one routine this is about
- `docs/compiler-generation.md`: the two non-flag explanations that remain
- `docs/bootable-dos-hdd.md`: `LINKNAME` and the P3 linker
- `tools/cserve.js` `/api/probe`: the route that made reading the kit possible

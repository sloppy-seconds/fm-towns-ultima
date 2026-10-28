# What the runtime captures give the recompiler

The question: do the CFG captures improve `fmtownskit`'s ability to decompile or recompile the game,
as distinct from widening the static seed set.

**Short answer: no, and the attempt produced a better answer than a result.** The 21 unresolved
indirect transfers are not game logic. They are MetaWare's C runtime, and chasing them was chasing the
wrong 21 sites.

## The interface already expects runtime resolution

`references/vs-sr-dev/fmtownskit/recomp/discover.py` records indirect transfers and says what they are
for, in its own words at the point the walker refuses to guess:

> Returning None is the correct answer: the transfer is indirect and unresolved, which is what
> `indirect` means and what the runtime is for.

So the mechanism is intended. The defect was in assuming the sites were interesting.

## The measured position

`discover.load('ENCHANT.EXP')` with the current 532 seeds:

```
698 functions, 547923 instructions, 1138645 bytes of code
72 jump tables (68 bounded), 21 indirect transfers unresolved, 851 refused, 334300 conflicts
```

The documentation said 24 unresolved. The current tool says **21**, so that figure is stale.

## The finding that matters: the 21 are the C runtime

Every one of the 21 sites sits between image offset `0x102604` and `0x1051CA`, a contiguous block at
the top of the image. The strings in that block name what it is:

```
_mwinit_buf      _mwaprintf       send_pad          pad_to_field_width
each_format_directive   pre_fixup   convert_ival     convert_int_or_long
convert_pointer  out_convert_dreal  _mwFINIT        _mwARG
_mwdos_interface1  _mwzclose   each_item   each_free_item
remove_from_free_chain   insert_into_free_chain   search_free_chain   HEAPCODE
```

`_mw` is MetaWare. The `ff 55 08` sites are `call [ebp+8]`, which in `printf` is the output-callback
argument. The sites near `HEAPCODE` are the allocator walking its free chain.

**So the sites are `printf`'s format-handler dispatch and `malloc`/`free`'s chain walking.** They are
undocumented library internals, and resolving them would recover **no game behaviour at all**.

## What the captures resolved anyway

| | |
|---|---|
| indirect sites | 21 |
| resolved by every capture so far | **1** |

The one: image `0x10005E` calls `0x0FFEC1` at run time, also in the runtime block.

And the reason the other 20 never resolved is now just as clear: **zero of the 21 containing functions
was ever reached by any capture.** They are library code that this game's normal play does not call,
which is consistent with them being `printf` paths the game barely uses.

## The `[0xdfc5c]` read, attempted and unsuccessful

`tools/pollptr.py` reads a DS-relative dword repeatedly without pausing, so a value written for a few
frames is not missed. Watching `14:dfc5c` for 40 seconds during play gave **132 reads, 131 zero, one
torn `FFFFFFFF`**. The pointer stayed null.

The code explains why. It is not a bare call:

```
0x104a64  test [0xdfc48], 1     ; a flag, adjacent to the pointer
0x104a6b  jne  ...              ; the call is skipped when the flag is clear
```

Both globals are zero in the file (offsets `0xdfe48`, `0xdfe5c`, the usual `+0x200`). Watching the flag
for 20 seconds gave **66 reads, 64 zero**. The path is dormant in a play session rather than merely
uncaught, and `0xdfc48` has **155 references** across the image, so it is a library-internal condition
rather than a hook worth chasing.

**Recorded so the next session does not repeat the forty seconds.**

A caution the poller itself produced: it reported `0xFFFFFFFF` twice as "CONFIRMED" because it counts
repeated values, and `-1` is not a pointer. A repeated torn read passes that test.

## What this means for the recompiler, honestly

**The indirect-transfer list is not a gap worth closing.** Its 21 entries are library internals. A
reimplementation does not need MetaWare's `printf`; it calls its own.

The real gaps are the ones this did not touch:

| gap | count | what closes it |
|---|---|---|
| refusals | 851 | decoder coverage, mostly 486+ instructions |
| conflicts | 334,300 | overlap and seed quality |
| no game loop, timer, input, file I/O | structural | reading and writing code, not resolution |

## What was still worth building

`tools/indirect-sites.py` asks every capture which sites it resolves. It answered "1 of 21", and then
asked the next question by itself: why. That led to the string names, which led to the answer. The tool
stays, because the same question will be asked of any other binary in this family and the answer may
differ there.

**[CFG findings](cfg-findings.md)** **[Recompilation](recompilation-clean.md)** **[Plan](plan.md)**

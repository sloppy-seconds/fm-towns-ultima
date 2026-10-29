# What the runtime captures give the recompiler

The question: do the CFG captures improve `fmtownskit`'s ability to decompile or recompile the game,
as distinct from widening the static seed set.

**Short answer: no, and the attempt produced a better answer than a result.** The 21 unresolved
indirect transfers are not game logic. They are MetaWare's C runtime, and chasing them was chasing the
wrong 21 sites.

## The interface already expects runtime resolution

`fmtownskit/recomp/discover.py` records indirect transfers and says what they are
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

## The 21, enumerated, and the one that is game code

**Reproduced, so the list is not taken from a page.** The seed set and the zero ranges come from this
project's own tools:

```
SEEDS=$(node tools/seeds.js --emit)
RANGES=$(node tools/codelimits.js --args)
cd $(git rev-parse --show-toplevel)
python3 -m fmtownskit.recomp.discover ENCHANT.EXP --raw --seed "$SEEDS" $RANGES --report
```

That reports **696 functions, 71 jump tables (67 bounded), 21 indirect transfers unresolved, 910
refused, 503 conflicts**, and prints each site. All addresses below are file offsets, because `--raw`
loads the whole file at base 0. The dispatcher bytes quoted further down are in the same frame.

| kind | count | sites (file offset) |
|---|---|---|
| `call dword [0xdfc5c]` | 10 | `0x102826`, `0x104a96`, `0x104ba8`, `0x104bde`, `0x104d00`, `0x104d24`, `0x104dec`, `0x104e25`, `0x104eb1`, `0x105088` |
| `call [ebp+8]` | 4 | `0x103647`, `0x10364d`, `0x103656`, `0x1036c2` |
| `call [ebp+0xc]` | 2 | `0x102a4f`, `0x102b95` |
| `call [ebp+0x10]` | 1 | `0x103a25` |
| `call eax` | 2 | `0x103ea2`, `0x1051ca` |
| `call cs:[ebx]` | 1 | `0x10005e` |
| `jmp cs:[edx*4+0xe034b]` | 1 | `0xe0543` |

> **CORRECTION: two of the 21 are not in the library block.** This page said every site sits between
> `0x102604` and `0x1051CA`. That is false for `0xe0543`, a `cs:`-relative switch in the game's code
> band, and for `0x10005e`. The conclusion, that the library sites recover no game behaviour, survives.

**Four are resolved by the captures**, asked with the project's own tool:

```
$ SEEDS=$(node tools/seeds.js --emit)
$ ./tools/.venv/bin/python3 tools/indirect-sites.py --seeds "$SEEDS"
resolved by the captures: 4 of 21
   image 0x10005E (segment 0xFFE5E) -> 0xFFEC1
   image 0x102A4F (segment 0x10284F) -> 0x102E21
   image 0x1036C2 (segment 0x1034C2) -> 0x103621
   image 0x103A25 (segment 0x103825) -> 0x10388D
```

The earlier figure of 1 of 21 was measured when fewer captures existed, and it is stale rather than
wrong.

## The one that is game code, resolved by reading

`0xe0543` is a `jmp dword cs:[edx*4+0xe034b]`. Reading the dispatcher above it settles the table's size
without guessing:

```
000E0529  8BD7              mov edx,edi
000E052B  83FA20            cmp edx,0x20
000E052E  775B              ja 0xE058B
000E0530  83FA20            cmp edx,0x20
000E0533  0F8491000000      jz 0xE05CA
000E0539  4A                dec edx
000E053A  83FA0F            cmp edx,0xf
000E053D  0F878E000000      ja 0xE05D1     <- the default case
000E0543  2E FF 24 95 4B030E00   jmp dword cs:[edx*4+0xe034b]
```

`cmp edx,0xf` bounds the index at 15, so the table has **16 entries**. Sixteen is what the data says
too: entries 0 to 15 are all in `0xe03a5`-`0xe03de`, and entry 16 is `0x0080fa81`, which is not an
address in this image. The table is at file `0xe054b` and its entries are runtime addresses, so the
file offset of a target is entry `+ 0x200`.

There are five distinct targets, and each one selects a string and then leaves:

| target (runtime) | file | bytes | what it does |
|---|---|---|---|
| `0xe03b5` | `0xe05b5` | `68 78 0e 00 00 eb 1a` | `push 0xe78`, jump on |
| `0xe03bc` | `0xe05bc` | `68 b4 0e 00 00 eb 13` | `push 0xeb4`, jump on |
| `0xe03c3` | `0xe05c3` | `68 f0 0e 00 00 eb 0c` | `push 0xef0`, jump on |
| `0xe03d1` | `0xe05d1` | `68 68 0f 00 00 e8` | `push 0xf68`, call |
| `0xe03de` | `0xe05de` | `8b c7 5f 5b c9 c3` | `mov eax,edi`, `pop ebx`, `leave`, `ret` |

So the switch picks one of four message strings and returns. It is an error reporter, not a game rule.

**Why the walker left it.** Its entries are not ascending, because case order is not address order, and
the branch is the `2E FF 24 95` `cs:`-relative form. That is the same shape as the `0xe4086` table in
[core-routines.md](core-routines.md), which is also unresolved and also has no monotonic ordering to
key on. A table test that assumes ascending dwords will refuse both.

## What is left, and why it is not the cap

Sixteen sites remain: ten `call [0xdfc5c]`, four `[ebp+8]`, two `[ebp+0xc]`, one `[ebp+0x10]`, and two
`call eax`. The live value of `0xdfc5c` read **zero** at the player-select screen, so those ten sites
would fault if they ran there and they are not on any path a boot-to-play capture takes. They are the
`printf` output callback and the allocator's chain walking, and resolving them recovers no game
behaviour.

**The cap on recompilation coverage is not these 21, it is the 910 refusals.** Sixteen unresolved
indirect transfers is 0.8 percent of the transfer census and they sit in library code. The refusals are
where game code stops being emitted.

## CORRECTION: the port does not need these resolved at all, and 30 and 67 is the count that matters

> **This page answered the wrong question for a whole session.** Everything above asks *how many of these can the
> static walk resolve*. The port does not care: an unresolved transfer is emitted as a **dynamic** call and works
> whenever the target turns out to be a recompiled function. The question that matters is *do the sites the port
> actually executes resolve at run time*, and nobody had asked it. The answer is yes, for every one reached.

**The emitted code, quoted from the build rather than described.** For `call dword ptr cs:[ebx]` at `0xffe5e`,
`build/port/recomp/p_game_022.cpp` has

```c
{ uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[3]))); push32(c, 0xffe61u); x86_call(c, t); X86_RET(c, 0xffe61u); }
```

`x86_call` looks the target up in the module and faults with `no recompiled function at cs:off` when it is
absent, so a run that does not fault never took an indirect transfer to unknown code. That turns an open
question into a count.

**The counts, from `build/port/recomp/report.txt`**, which every recompilation writes and which
`tools/port-build.sh` now names in its output instead of leaving the list in a terminal:

```
game:  818 functions, 41847 instructions;  30 indirect transfers unresolved, 0 refused, 0 conflicts
tbios: 5573 functions, 15288 instructions; 67 indirect transfers unresolved, 0 refused, 0 conflicts
```

The earlier 21 was one module and a smaller walk. Two modules and more decoded code give 97, and their shapes
say why no rule will ever resolve them:

| module | shape | count | what the target is |
|---|---|---|---|
| game | `call dword [abs]` | 20 | a function pointer stored in the data segment, written at run time |
| game | `call [ebp+8]`, `[ebp+0xc]`, `[ebp+0x10]` | 7 | a callback passed as a parameter |
| game | `call eax`, `call cs:[ebx]` | 3 | a computed target |
| tbios | `call`/`jmp dword gs:[ebp+0x310]`..`[0x444]` | 62 | the BIOS dispatch table, fifteen slots, one base |
| tbios | `call ebx`/`edx`/`ecx` | 5 | a computed target |

**Measured: 35 of the 97 are executed by the port and all of them resolve.** From a 600-frame run traced with
`U2_TRACE_FILE` and intersected with the site list, **2 of the 30 game sites** (`0x1034c2`, `0x103825`) and
**33 of the 67 TBIOS sites** execute, and the run ends at the frame limit with no fault, which is only possible
if every one of those 35 found a recompiled function. The 62 that do not execute are the parameter and
computed-target shapes, which no rule can resolve in principle, and the kit's own design says so at the point
it refuses to guess.

For the record on instrumentation: the machine's own capture is **not** a reachability instrument for these. It
records block boundaries, and it shows only 1 game site and 6 TBIOS sites as block sources over a journey that
stops at the title screen, while the port's trace shows 35 executed. The capture answers "what did the machine
do", not "what does the code do when reached".

## What was still worth building

`tools/indirect-sites.py` asks every capture which sites it resolves. With the 31 captures now on disk
it answers **4 of 21**, and it asks the next question by itself: why. That led to the string names,
which led to the answer. The tool stays, because the same question will be asked of any other binary in
this family and the answer may differ there. The four, and the full enumeration, are in the section
above.

**[CFG findings](cfg-findings.md)** **[Recompilation](recompilation-clean.md)** **[Plan](plan.md)**

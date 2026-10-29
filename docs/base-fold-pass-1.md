## The first base-fold pass, through the DOS channel

Plan items 4j and 4k. This is the first pass run with the compile channel standing up, and it produced one authentic
flag, two bugs in this repository's own tools, and a named next lever. No routine is recovered yet, and this page says
exactly why.

### The channel came up and proved itself

`podman run` with the settings `docs/compile-route-dos.md` records, `tools/compile-proof.sh`, then `tools/cserve.js`
and `tools/cc.sh`. The proof's own verdict:

```
PASS: HELLO.OBJ is a 267-byte OMF object (first record 0x80 THEADR).
00000000: 8007 0005 4845 4c4c 4f00 8808 0080 aa38  ....HELLO......8
00000010: 3033 3836 3d88 1400 8000 4869 6768 2043  0386=.....High C
00000020: 2031 2e37 2e20 534d 414c 4c84 8e04 0000   1.7. SMALL.....
```

So the object itself names the compiler: **High C 1.7, SMALL model**. That is worth having as a measured fact rather
than a quoted one.

A first compile through the API, `int f(int a, int b) { return a + b; }`:

```
8b 44 24 04 03 44 24 08 c3        # 13612 ms, 10 records
```

`mov eax,[esp+4]; add eax,[esp+8]; ret`, and note the `esp`-relative arguments: **by default this generator does not
frame a leaf function at all.** That is the difference the rest of this page is about.

### Two bugs in our own tools, both frame bugs

- **`tools/cmpdisp.js` takes FILE-frame addresses** (`guest + 0x200`), not guest addresses. Asked for `0xe19f4` it
  decoded 335 bytes of unrelated code and started with `00 00 68 ...`; asked for `0xe1bf4` it decoded the real
  46-byte routine, `55 8b ec b8 f4 e3 00 00 ...`. Every tool that decodes the image this way has to be checked for the
  same thing, and the repository already knows it has three frames in play.
- **`tools/decompile-run.js` therefore mis-sizes routines**, because it calls the same decoder: it reported `0xe19f4`
  as 335 bytes and left all three supplied attempts at `needs-source`, since its key is `0x` plus hex and the
  attempt file's keys were bare hex. Both were mine, both were silent, and neither is a finding about the game.

### The authentic flag, measured on a real routine

`0xe19f4` is six stores into a static structure at `0xe3f4`, and the target is 46 bytes:

```
55 8b ec b8 f4e30000 8b 55 08 89 50 24 8b 55 0c 89 50 28 ... c9 c3
```

Four candidate sources were compiled against it. The shape is right in all of them; the differences are frames and
registers, and they separate cleanly:

| flags | first bytes of ours | result |
|---|---|---|
| none | `55 8b ec b9 f4e30000 8b 45 08 89 41 24` | 48 bytes, wrong length: no frame, `esp`-relative args |
| `-off optimize_fp` | `55 8b ec b9 f4e30000 8b 45 08 89 41 24` | **46 bytes, length agrees**, every instruction agrees, registers differ |
| `-off optimize_fp auto_reg_alloc` | `55 8b ec 50 b8 f4e30000 89 45 fc 8b 55 08 89 50 24` | value register becomes `edx`, matching the target, but the base spills to `[ebp-4]` |

**`-off optimize_fp` is confirmed on a second routine.** `docs/compiler-toggles.md` found it on `0xe52c8`; here it
converts a 48-byte `esp`-relative function into a 46-byte `ebp`-relative one, byte-length exact, with the frame, the
field order and the epilogue all agreeing.

### The lever that is left, and it is register allocation

Target: `mov eax,0xe3f4` then `mov edx,[ebp+8]` then `mov [eax+0x24],edx`.
Ours: `mov ecx,0xe3f4` then `mov eax,[ebp+8]` then `mov [ecx+0x24],eax`.

Same instructions, same count, same length, and the pointer and value registers are swapped. Three source shapes were
tried and two of them (`int *p` with indices, and a struct pointer) compile to the same bytes, so the source is not
what decides it. `auto_reg_alloc` off moves the value into `edx` correctly but spills the base, which adds four bytes.
So the target has register allocation **on** with a different preference order, and the toggle that sets that order is
not yet known.

**The sweep, and it is negative.** Five further combinations, each compiled and scored against the same 46 bytes:

| flags and source | ours | verdict |
|---|---|---|
| `-off optimize_fp -on auto_reg_alloc` | `55 8b ec b9 f4e30000 8b 45 08 89` | differs, `ecx`/`eax` |
| `-off optimize_fp -off postpone_arg_pops` | identical to the above | differs |
| `-off optimize_fp -on sched` | identical | differs |
| `-off optimize_fp -on cross_jump` | identical | differs |
| unsigned params and an `unsigned *` | identical | differs |

Every one of them is byte-identical to the plain `-off optimize_fp` result. So the register order is not reachable
from any of those names, and the source's signedness does not reach it either.

That matches what `docs/compiler-toggles.md` concluded on `0xe3c58`: of 43 real toggle names, none produced the
difference it needed, and the remaining explanations were "a different build of the compiler, or a hand-written
fragment" rather than a flag. The one lever this page has **not** tried is the other generator route: the driver,
`HC386.EXE` plus `RUN386`, where `docs/highc-authentic-toolchain.md` measured the optimiser engaging (`lea
eax,[ecx+ecx]` for a multiply by two). That path is the Towns one, which needs TownsMENU and cannot coexist with a
writable volume on the floppy-boot route, so it is a session of its own and not a flag to try.

### What this does not claim

No routine in `docs/queue.json` has changed status. The 31 parked routines are still parked, and this pass recovered
none of them: it established the flag, the toolchain's identity, and the one lever standing in the way, which is
strictly less than a recovery and more than nothing.

### A second routine refutes the single-flag reading

`0x104190` is the next one tried, a 36-byte flag toggle with no parameters, and it does not fit the same story:

```
target  80 3d 2f fd 0d 00 00 74 0b a1 f8 fd 0d 00 80 70 09 80 eb 0f a1 f8 fd 0d 00 80 78 0b 00 75 04 … c3
```

That begins with `cmp byte [0xdfd2f],0`: **no frame at all**, straight in. So the game frames `0xe19f4` (six
parameters) and does not frame `0x104190` (none), which is what a compiler does when it frames *only where it must*.
`-off optimize_fp` therefore cannot be the build flag: it framed `0x104190` wrongly (the `DIFFERS` row above), while
without it `0xe19f4` came out four bytes short.

Two reads are possible and the measurements do not separate them:

- the build used the default (`optimize_fp` on), and `0xe19f4` is framed because of something in its real source that
  my candidate lacks, such as an address-taken local or a call
- the build is genuinely a different compiler, which is what `docs/compiler-toggles.md` was left concluding on
  `0xe3c58`

What the pass does establish is the shape of the next test: **the flag is per-function behaviour, not a global switch**,
so the search has to move to why one function is framed, not to which flag frames everything. That is a reading
question about `0xe19f4`'s real source, and it is cheaper than another flag sweep.

### The cheap reading, done, and it closes the flag line

`0xe19f4` has **21 callers, in pairs**, at `0xe31d3` to `0xe33be`: `0xe1a24` then `0xe19f4`, over and over every
`0x30` bytes, eleven of each. So the pair are two setters for two six-word blocks of one structure at `0xe3f4`:
`0xe19f4` writes `+0x24` to `+0x38`, `0xe1a24` writes `+0x3c` to `+0x50`, and the block of calls is a table of
assignments with immediate arguments. That is a behavioural fact about the routine and it stands on its own, whatever
happens to the bytes.

The frame hypothesis was that a 24-byte parameter passed **by value** forces a frame with no locals, since six
consecutive dwords at `[ebp+8]` look exactly like a struct parameter. Two candidates tested:

| source | flags | ours | verdict |
|---|---|---|---|
| `struct S6` by value, field-by-field copy | none | `b9 f4e30000 8b 44 24 04 89 41 24` | 48 bytes, `esp`-relative |
| `struct S6` by value, field-by-field copy | `-off optimize_fp` | `55 8b ec b9 f4e30000 8b 45 08 89 41 24` | 46 bytes, still `ecx`/`eax` |
| `struct S6` by value, single assignment | either | `f3 a5` (`rep movsd`) | 27 bytes, wrong shape entirely |

So the parameter is **six separate ints**, not a struct: a by-value struct either collapses to `rep movsd` or compiles
to the same `ecx`/`eax` code as the six-argument version. Nothing about the source forces the frame.

**The flag line is therefore closed for this routine, and closed by measurement rather than by giving up.** Nine
combinations have now been tried, three of them named `-on`/`-off` toggles, one a signedness change, two a by-value
parameter, and every one either produces `ecx`/`eax` or a wrong shape. The difference that remains is the allocator's
preference order, and it is not reachable from any name this project can pass on the command line.

The two explanations left are the ones `docs/compiler-toggles.md` reached on `0xe3c58`: **a different build of the
compiler, or the optimiser-engaged driver route.** The driver route is the Towns one, needs `RUN386` and `TownsMENU`,
and cannot coexist with a writable volume on the floppy boot, so it is a session rather than a flag.

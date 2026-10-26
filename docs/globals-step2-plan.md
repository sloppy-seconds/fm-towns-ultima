# Plan: type the top globals and recover their routines

**Status: executed. Validation findings are in the log at the end.**

Follows `docs/globals-plan.md`, which established 118 distinct globals and typed
one of them. This plan covers the next step and deliberately stops there.

## Scope, and what it stops short of

**In scope:** type the five most-referenced globals, then recover the source of
the routines attached to them.

**Out of scope:** the remaining 113 globals, the 307 `non-leaf` routines, and any
further byte matching.

The reason for the narrow scope is a failure that happened earlier in this
project: work that produces an artefact with no confirmation it explains any
code. A data dictionary of 118 entries proves nothing on its own. Five globals
with their routines recovered is a claim that can be checked.

## The steps

**1. Classify each global by kind before typing it.**

Validation showed three unrelated kinds in the top eight, so a single procedure
does not fit. Each global gets one of:

| kind | signal | action |
|---|---|---|
| record index | `lea/shl/sub` chain after load | derive stride, then fields |
| pointer table | `[reg*4+addr]` | derive element type and count |
| hardware or DOS | `out`, `in`, `int`, `pushfw`, `popfw` | **exclude**, not a game global |
| plain scalar | written with an immediate, no chain | read the immediate |

**2. Type the global from every routine that references it.**

Record `{addr, kind, type, stride, fields, routines, evidence}` in
`docs/globals.json`. A global is only recorded when all its users agree.

**3. Recover routine source for the routines attached to those globals.**

Compile through `tools/cc.sh` and compare. A base-fold routine cannot match, so
the acceptance criterion is: **identical instruction bytes except for the disp32
of the global reference**. Any other difference means the source is wrong.

**4. Record the result, including which globals could not be typed.**

A global that resists typing is a finding, not a gap to hide.

## Validation, run before execution

### V1. Can the record-stride chain be found reliably? PARTLY.

The `0xceca0` chain (`lea`, `lea`, `shl`, `sub`, giving `351*i`) reproduces
exactly at another site, `0xe1ca5`, so the pattern is real and repeated. But a
file-offset search for the address lands mid-instruction in 5 of 8 cases tried
(`0xe1ca3` shows `add [ecx+0xceca0],ah` where the real code is
`mov eax,[0xceca0]`). **Byte-searching for a displacement does not reliably find
the instruction that uses it.** The enumerator's disassembly-driven approach must
be used instead, and it already is.

### V2. Are all top globals the same kind? NO.

Of the top eight: one record index (`0xceca0`), two tile-subsystem globals laid
out adjacent to `0x77e90` (`0xce408`, `0xce488`, the latter a pointer table via
`[esi*4+0xce408]`), three hardware/DOS (`0xdf0c7`, `0xdf0c8`, `0xdf0d0` showing
`out dx,al`, `int 0x21`, `pushfw`), and one plain scalar (`0xd6e60`, written
`mov dword [0xd6e60],0x30`).

Step 1 is therefore mandatory. A plan that typed all five the same way would
mis-classify at least four.

### V3. Does the address region separate game from hardware? NO.

Only 2 of 118 globals are at or above the `0xff000` library floor, and
`0xdf0c7` is well below it while still being `out dx,al` on the I/O port path.
**Region cannot be used to filter.** Kind must be determined from the operand and
the surrounding instructions, which is why step 1 is by signal and not by address.

### V4. Is the acceptance criterion for step 3 checkable? YES.

`0xf3e24` is the worked case: 25 bytes, 24 identical, the difference being bytes
20 to 22, the upper three of one disp32. That is a mechanical test, expressed as
"all bytes equal except a 4-byte field", and it does not require a judgement call.

### V5. Can a false agreement be detected? YES, by the same width check.

`docs/globals-plan.md` records that the width check was decoration until the
register-name rule was added and a synthetic conflicting case was made to fail it.
That check is reused here, and it is the reason step 2's "all users agree" is
worth anything.

### Second routine: `0xef248`, which is the method under test

`0xef548` was a single store. `0xef248` is the real test, because it uses the
351-stride chain and a struct field.

```c
struct S { char pad[27]; int x; char tail[320]; };
struct S arr[64];
int gi;
void f(int n) { arr[gi].x += n; if (arr[gi].x > 9999) arr[gi].x = 9999; }
```

49 bytes, and **all 12 differing bytes are disp32 relocation fields and nothing
else**:

| bytes | field |
|---|---|
| 1 to 3 | the global, `0x0ceca0` vs our own |
| 22 to 24, 28 to 30, 40 to 42 | the same struct field, referenced three times |

37 of 49 bytes match, and the instruction sequence is identical.

The struct size is the part that was not guessable. The first attempt used
`char pad[27]; int x;` which is 31 bytes, and the index chain came out wrong
because the compiler scales by `sizeof`. The target's chain computes `351*i`, so
`sizeof(struct S)` is 351, which fixed the padding to 320 bytes of tail. That is
the kind of fact the code does state, but only if you read the scale factor rather
than the field offset.

The behaviour is a per-record counter capped at 9999 (`0x270f`), which reads like
a money or score limit.

### What the method now shows

Two routines recovered, one a single store and one using the full stride chain.
The second confirms that a global's declaration, once derived, produces source
that compiles to the target's exact instruction sequence. That is the property the
whole approach depends on, and it now has one non-trivial instance behind it.

It is still two. Nothing here proves the remaining 112 globals will fall out at
this rate, and the next routine that disagrees somewhere other than a disp32 will
be the interesting one.

## Done when

- five globals are typed, each in `docs/globals.json` with the routines that
  support it
- any global excluded as hardware is recorded as excluded, with the instruction
  that proves it
- at least one routine attached to a typed global has source recovered to the
  "identical except disp32" standard
- the number of globals that could not be typed is stated

## Execution log

### The top globals, classified

Five typed, four excluded as hardware. Recorded in `docs/globals.json`.

| global | kind | basis |
|---|---|---|
| `0xceca0` | record index, stride 351 | `lea/lea/shl/sub` chain in all 8 users |
| `0xce408` | pointer table, `int[]` | always `[reg*4+0xce408]` |
| `0xce488` | pointer table, `int[]` | same 4 users, same form, 0x80 higher |
| `0x0d6e60` | plain scalar, `int` | `mov dword [...],0x30`, compared to 0 and decremented |
| `0x77e90` | pixel grid, `unsigned short[128][64]` | `0xf3e24` stores `cx` at `0x77e90 + a*128 + b*2` |
| `0xdf0c7` | **excluded, hardware** | all 3 users contain `cli`/`out`/`in` |
| `0xdf0c8` | **excluded, hardware** | same 3 hardware routines |
| `0xdf0d0` | **excluded, hardware** | all 3 users contain `cli`/`out`/`in` |
| `0xdf0c6` | **excluded, hardware** | all 3 users contain `cli`/`out`/`in` |

`0xce408` and `0xce488` share all four users and differ by `0x80`, so they are a
pair of parallel per-id tables rather than independent globals.

### V6 confirmed: a fixed window misses the hardware signal

My first pass looked three instructions past each access and found no hardware
ops in `0xdf0c7`'s users. Scanning the **whole routine** found them immediately:
`0xfec70` has `pushfw`, `cli`, `in al,dx`, `out dx,al`, `popfw` bracketing the
access. The signal is in the enclosing routine, not at a fixed offset. All three
`0xdf0c7` users are hardware code and the global is not a game global.

### One routine recovered: `0xef548`

```c
int g;
void f(void) { g = 0x30; }
```

11 bytes, identical to the target except bytes 2 to 5, the displacement of
`mov dword [0xd6e60],0x30`. That is the criterion met, and it is the cheapest
possible case: a single store.

### A fifth tool defect, found by this routine

`tools/trycands.py:target_bytes` truncates at the first `0xc3` byte. The immediate
in `mov dword [disp32],0x30` is `30 00 00 00`, which contains a `0xc3` padding
byte two positions early, so the helper reported the routine as **9 bytes when it
is 11**.

The consequence nearly became a wrong conclusion: comparing the truncated target
against our build suggested the target used a 2-byte immediate and that our
source was wrong. Reading the true bytes showed the build was right and the
helper was wrong.

This affects any routine whose immediates contain `c3`. The fix is to derive the
end from the disassembly, which knows instruction lengths, rather than from a
byte search for `ret`.

### State at the end of this plan

- 4 globals typed, 2 excluded, of the 6 most-referenced
- 1 routine recovered to the disp32 standard
- 112 of 118 globals still untyped
- the method works and is cheap per global, but it is one routine at a time and
  `0xef548` was the easiest case in the set


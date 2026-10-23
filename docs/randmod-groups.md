# The `randMod` function groups, and two tooling bugs found grouping them

[A11 in the plan](plan.md) needs the 85 `randMod` call sites read. Grouping them by enclosing
function is the step that makes that tractable. Writing the grouping tool exposed two bugs, both
off by `0x20`, and then a third in the disassembler.

## The grouping

`tools/randgroups.js` finds every `CALL rel32` whose target is `randMod` and walks back to the
enclosing `push ebp / mov ebp,esp`.

**Measured: 85 sites, 35 distinct enclosing functions, 0 ungrouped.**

| entry | sites |
|---|---|
| `0xf2cc0` | 9 |
| `0xf9c8c` | 9 |
| `0xf3758` | 6 |
| `0xef898` | 4 |
| `0xf22f0` | 4 |
| `0xf94fc` | 4 |
| `0xfcabc` | 4 |
| `0xf5284` | 3 |
| `0xf87fc` | 3 |
| `0xf8944` | 3 |
| `0xf938c` | 3 |
| `0xf9fdc` | 3 |

Twelve functions hold 55 of the 85 sites. **Reading twelve functions covers two thirds of the
random-number logic in the game**, which is a much better shape than 85 separate reads.

## Bug 1: the address space, twice over

The image is the file with the `0x20` `MP` header stripped, so an offset in `img` **is** a virtual
address under base 0. A scan that indexes `img[a - 0x20]` when `a` is already a virtual address
reads `0x20` bytes early.

The first grouping attempt did exactly that. It found no prologue for many sites, and where it did
find one it reported an address `0x20` too high. That is why the shrine function was recorded as
`0xf2ce0` in [shrine-function.md](shrine-function.md) when its real entry is **`0xf2cc0`**.

This is the **third** time this project has hit an off-by-`0x20` between file offsets and virtual
addresses. The rule `tools/randgroups.js` now follows, and states in its header, is: every address
is a virtual address, every image access is `img[addr]`, never `img[addr - 0x20]`.

## Bug 2: a prologue scan that started too late

The first version scanned from `a - 0x20` downward. For a site at `0xf2558` that starts at `0xf2538`,
which is fine, but combined with bug 1 it compared the wrong bytes throughout and missed `0xf22f0`
entirely.

Fixed by scanning from the site address itself and indexing correctly.

## Bug 3: `ndisasm` mis-decodes `ff 34 bd <disp32>`

Reading `0xf22f0` cleanly until `0xf2341`, the disassembly then goes wrong:

```asm
0xF2341  cmp dword [0x7a6b4],0x0
0xF2348  jnz 0xf2353
0xF234A  db 0xff            <- should be push dword [edi*4+0xd8d5c]
0xF234B  xor al,0xbd
0xF234D  pop esp
0xF234E  db 0x8d
```

The raw bytes are:

```
0xf234a  ff 34 bd 5c 8d 0d 00    push dword [edi*4+0xd8d5c]      7 bytes
0xf2351  eb 07                   jmp short +7
0xf2353  ff 34 bd 70 8d 0d 00    push dword [edi*4+0xd8d70]      7 bytes
```

**`ff 34 bd <disp32>` is `push dword [index*4 + disp32]`, a 7-byte instruction with a SIB byte and a
32-bit displacement.** `ndisasm` splits it into a 1-byte `ff` and a misread remainder.

This form appears throughout this binary for array indexing, so **any disassembly that hits it
drifts from that point on**. `tools/sweep.js` reports a `db` ratio, and this is what a `0x0` drift
looks like before it becomes obvious.

**Fixed in `tools/sweep.js`.** A `repairPushSib` post-pass scans the image for `ff 34 bd`, and when
ndisasm's output has split that span it replaces the mangled lines with a single correct 7-byte
`push dword [index*4+disp32]` line.

**Verified:** `0xf22f0` now decodes end to end at `db 0.0%`, including both array-indexed pushes at
`0xf234a` and `0xf2353`, and the shrine function still reads identically. Before the fix the same
function reported `db 3.2%` and drifted from `0xf234a` onward.

The regression test is that both known-good functions still produce zero `db` bytes. Neither is
asserted in `verify.js` yet, because `verify.js` reads only the disc, not `ENCHANT.EXP`.

### Why this matters beyond one function

`sweep.js --funcs` reported all 247 strongly-called functions under a 15 percent `db` ratio, and
most at zero. That was taken as evidence the sweeps were clean. **It is not sufficient**: this
function showed `db 3.2%`, which passes the threshold, and yet its tail from `0xf234a` is
misaligned. A low `db` ratio does not certify the whole function.

## What the read produced

`0xf22f0` reads cleanly for its first 31 instructions:

```asm
0xF22F0  push ebp / mov ebp,esp / push edi
0xF22F4  mov edi,[ebp+0x8]
0xF22F7  dec edi
0xF22F8  mov eax,[0xceca0]           ; current character index
         ... *351 chain ...
0xF2308  cmp dword [edx+0xcde99],0xd ; field == 13?
0xF230F  jnz 0xf2337
0xF2311  cmp dword [edx+0xcdf57],0x3 ; and another field == 3?
0xF2318  jnz 0xf2337
0xF231A  and edi,edi / jnz 0xf2337   ; and the argument-1 result is zero
0xF231E  mov dword [edx+0xcdf8b],0x1
0xF2328  push 5 / call 0xe1b24
0xF232F  call 0xf0e50
0xF2337  push 0xb / call 0xe5928
0xF2341  cmp dword [0x7a6b4],0x0
```

A guard on three conditions, an action, then a dispatch on the global at `0x7a6b4` which
`function-recovery.md` already records as the flag that makes the string drawer scan for a NUL.

**The randMod calls in this function are after `0xf234a`, in the misaligned region**, so this
function's own random logic is not yet read.

## What to do about it

**Fix the disassembly first.** Reading the remaining 34 functions with a tool that silently drifts
on `ff 34 bd` would produce wrong formulas, which is the exact failure mode this project has spent
the most effort avoiding.

The cheapest fix is a `sweep.js` change: after `ndisasm` returns, scan for `db 0xff` lines whose
following bytes match `34 bd <4 bytes>`, and re-decode that span as a 7-byte `push`. Then re-emit.

That is bounded work and it makes every subsequent read trustworthy. It should happen before the
next function is read, not after.

---

**[The shrine function](shrine-function.md)** **[The randMod survey](randmod-survey.md)** **[The control-flow walk](cfgwalk.md)** **[Plan](plan.md)**

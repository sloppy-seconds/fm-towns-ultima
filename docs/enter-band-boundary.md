# The `enter` band: partly the TBIOS layer, and not only that

**Identity, established later, and it is a partial answer.** Many routines in this band are FM
Towns BIOS trap wrappers that `int 0x90` through the dispatcher at `0xfe13c`
(`docs/enter-tbios-stubs.md`). **But not all of them, and the split is measured:**

| inside the band `0xfdb9a`-`0xfe46e` | count |
|---|---|
| reach a TBIOS trap (inline `int 0x90`, or a call to `0xfe13c` or `0xfe25d`) | **15** |
| plain C with an `enter` frame and no trap at all | **12** |

And across the whole image, the same split over the 71 `enter` routines:
**20 trap, 51 do not.** For example `0xfdea0`, parked earlier as a compiler anomaly, is a plain
global setter:

```
enter 0,0
mov eax, [ebp+0x8]
mov [0xdea40], eax
xor eax, eax
leave
ret
```

So "the band is the BIOS interface layer" is too strong, and adopting it wholesale would be the
same over-claim this question has already produced three times. The accurate statement is that
the trap stubs are a large part of the band and the rest is ordinary C that happens to use the
same frame form.

The two measurements below were correct and remain so. The band was described as a build-unit
boundary; it is better called a layer boundary, but a layer the ordinary C routines also share.

**Verdict as measured: the band uses `enter` 100 percent and `push ebp` 0 percent, while the
rest of the image is the exact reverse. Both forms come from the same toolchain.**

This is steps 1 and 2 of the plan in `docs/enter-cluster.md`, run.

## Step 1: classify the band by kind

All 41 census entries in `0xfdb9a`-`0xfe46e`, classified by what they actually do:

| kind | count |
|---|---|
| C-shaped, frame reached through `[ebp+N]` | **26** |
| assembly stub (`int`, `pushal`, `in`/`out`, `cli`) | 3 |
| other (tiny accessors, no frame) | 12 |

**Every one of the 27 routines that starts with `enter` is C-shaped**, except `0xfdb9a`. None
of the `enter` routines is an assembly stub. The three stubs are `0xfdee8`, `0xfdfa2` and
`0xfe0f1`, and all three use `pushal`/`int`/`out` and **none** uses `enter`.

So the band is not "a pile of assembly". It is compiled C, plus a few stub routines that were
already classified `not-c`.

**The correction to that reading:** these are C *wrappers around assembly traps*. The frame is
compiler output and the leaf is a hardware instruction. `docs/enter-tbios-stubs.md` shows the
typical member is `enter 0,0 / mov ah,<fn> / mov al,[ebp+8] / int 0x90 / movzx eax,ah / leave /
ret`. So "C-shaped" and "assembly" were both partly true, and the useful statement is that the
band is the boundary between them.

## Step 2: the boundary, measured

Counting every census entry by prologue form:

| region | routines | `enter` | `push ebp; mov ebp, esp` |
|---|---|---|---|
| `0xfd000`-`0xfefff` | 69 | **27** | 2 |
| everywhere else | 385 | 2 | 175 |

**And both of those 2 `push ebp` routines in the `0xfd`-`0xfe` pages sit at `0xfd34c` and
`0xfd96c`, both *before* the band begins at `0xfdb9a`.** Inside the band itself the split is:

| inside `0xfdb9a`-`0xfe46e` | count |
|---|---|
| starts with `enter 0,0` | 27 |
| starts with `push ebp; mov ebp, esp` | **0** |

That is not a mix. It is one form for the whole block and the other form for the whole rest of
the image.

## The epilogue does not differ, so it is only the prologue

All 27 `enter` routines end in `leave; ret`. The first 40 `push ebp` routines sampled also end
in `leave; ret`. So the two blocks share a calling convention, an epilogue and a stack layout,
and differ **only** in how the frame is opened.

That matters: a different calling convention would have shown up here. It does not.

## What this establishes, and the one thing it does not

**Established:**

- The band is compiled C, from the same toolchain, with the same convention and epilogue.
- Inside it, `enter 0,0` is used every time and `push ebp` never.
- Outside it, `enter` appears 2 times in 385 and `push ebp` 175.

**Not established:** why two blocks from one toolchain differ in this one instruction. Three
readings remain, and this measurement does not separate them:

1. **Two compilation invocations with different settings**, where one setting is not in the 43
   toggle names. The `hc386set.cnf` `ARGS` line is per-installation, and a second pass run with
   a different config file would do exactly this.
2. **Two assembler passes.** The C compiler emits assembly, and if one block went through an
   assembler configured with a macro that rewrites `push ebp; mov ebp, esp` to `enter 0,0`,
   that is a build-step difference rather than a compiler difference.
3. **Code from a different release of the same toolkit**, which is the reading
   `docs/enter-is-platform.md` left the door open to after refuting "different compiler".

Reading 2 is the most interesting, because it explains the Fujitsu launcher too: Fujitsu's own
build could have used the same macro for part of its code, or not at all.

## What to test next, and what not to

**Worth trying:** recompile a known `enter` routine under a **second** config file. We control
`hc386.cnf` and `hc386set.cnf` on the kit and have never varied them. If `ARGS` or a toggle
inside the config file rather than on the command line changes the prologue, reading 1 is answered.
That is one experiment and we own the file.

**Not worth trying:** more source shapes. The prologue is not source-determined here, or the same
source would not appear in two forms in one image.

**Not worth trying:** a second compiler release. Both binaries carry the same `1983-1988`
runtime banner.

## Region split, measured 2026-11-13

`node tools/entercensus.js --file ENCHANT.EXP --base 0x20 --json` gives 739 validated entries. Split at `0xf0000`:

| region | entries | `enter` | `push ebp` | other |
|---|---|---|---|---|
| head, `0x20`-`0xeffff`, 983 KB | 282 | **4**, all `stub` kind, at `0x249`-`0x2a9` | 156 | 122 |
| tail, `0xf0000`-`0x105d0e`, 89 KB | 457 | **67**, of which 52 C-frame | 162 | 228 |

So the game's own 983 KB contains **no `enter`-framed C function at all**, and 67 of the 71 are in the last 89 KB. The four
early ones are assembly stubs in the startup area, not compiler frames.

The tail is not uniform either. A contiguous enter-only band runs `0xfdb33`-`0xfe46e`, and above it the two forms
alternate function by function. The string `High C Run-time Library Copyright (C) 1983-1988 MetaWare Incorporated.` sits at
`0x101c58`, inside the mixed zone, and all 22 nested-function static links in the image are above `0x102afd`
(`docs/idiom-atlas.md`).

That is a layer boundary with a date on it. The tail is where the linker put the runtime, the runtime is labelled
1983-1988, and the compiler is labelled 1983-1991. So the unexplained frame form belongs to the library's build, and the
question it raises is what built that 89 KB rather than what built the game.

**A count correction.** "220 `enter` prologues" has been quoted in this repository and is not reproducible: the raw count
of `0xC8` bytes in `ENCHANT.EXP` is 472, and the validated census is 71. The census is the number to use.

## Library-bytes test, 2026-11-13: the 1994 library does not explain the tail

The obvious candidate for the 89 KB is the runtime library the kit itself ships, so both were compared directly. Method:
read every `.LIB` on the V1.7 CD (34 of them), index each one's 16-byte windows, and ask how many of the game's entry
points land on a window that exists in that library. The 162 tail `push ebp` entries are the control.

| library | enter entries matched (of 71) | tail push-ebp matched (of 162) |
|---|---|---|
| `HC386/SMALL/HCE.LIB`, 248 KB | **8** | **24** |
| `HC386/SMALL/HCC.LIB`, 195 KB | 7 | 15 |
| `GUI.LIB`, `GUIDBG.LIB`, `LGPROC.LIB` | 0 | 1 each |
| the other 28 libraries | 0 | 0 |

The overlap is real but small, and it is verbatim code rather than a coincidence. Longest byte-identical spans between
the game and `HCE.LIB`:

| game | library | span |
|---|---|---|
| `0x1040a0` | `0x3cc0` | 253 B |
| `0x103fa7` | `0x396e` | 249 B |
| `0x105812` | `0x3add` | 199 B |
| `0x105c75` | `0x972c` | 153 B |

Every one of those spans begins `55 8b ec` (`push ebp; mov ebp, esp`), so the code that is *shared* with the 1994 library
is the push-ebp code. `HCE.LIB` does contain `enter`: 333 raw `0xC8` bytes. They are simply not where the game's enter
routines are.

**Verdict.** The 1994 runtime does not explain the game's enter-framed tail. The lineage is shared and the shared parts
are push-ebp, while the enter routines sit outside the overlap. That is what a runtime several years older than the kit
looks like, which agrees with the `1983-1988` string in the image and with the 1988 `386|LINK 2.0` that the MP container
points at. The test does not date the tail, and it does close the "the kit's own library explains it" hypothesis.

## Related

- `docs/enter-is-platform.md`: refutes the different-compiler reading
- `docs/enter-cluster.md`: the interleaving, and why a linked library was ruled out
- `docs/compiler-toggles.md`: the 43 command-line toggles, all of which are exhausted
- `docs/routines.json`: `0xfdea0`, `0xfde90`, `0xfdebc` remain parked on this

# High C 2.31: what it is, why it failed, and what version is actually needed

A forensic account. The compiler was obtained, made to run, and compared against the game. **It is not the
compiler that built Ultima II.** This page records the evidence for that conclusion, the mistakes made on the way,
and what a usable compiler would have to do differently.

## The identification, as far as it goes

| property | measured |
|---|---|
| archive | `references/metaware/MetaWare High C 386 v2.31 (1992) (5.25-1.2mb).7z` |
| contents | five 1,228,800-byte FAT12 images, plain files rather than an installer |
| driver | `BIN/HC386.EXE`, an `MZ` DOS executable, 59,952 bytes |
| version | **2.31, April 1991**, from `README` |
| libraries | `LIB/SRC` only, sources and no prebuilt `.LIB` |
| runs under | DOSBox-X in a podman container, `XMS` required |

It compiles. That much is settled and reproducible.

**And the dates alone rule it out, before a single line is compiled.** Ultima Trilogy shipped in **October 1990** (the
disc is dated 1990 in this repository's own record, `docs/meta-analysis-review.md`), while the 2.31 kit's `README` is
dated **April 1991** and its archive is labelled **1992**. A compiler released six months after the game cannot have
built it. That argument is independent of codegen, needs no emulator and no compile, and should have been made before
the kit was ever booted: it eliminates 2.31 as a candidate on chronology alone.

What the compile-and-diff below then establishes is a different and still useful thing: **which** differences, so that
any later candidate can be tested against them, and so that the shape of the game's arithmetic is recorded as arithmetic
rather than as a version number.

## The evidence that it is the wrong compiler

The method was compile-and-diff on a real routine. Two were tried, and they disagree in a way that identifies the
problem.

### `plot`, a leaf with a multiply: the bytes below are a paraphrase, not the image

> **Corrected.** The sequence quoted here does not exist in `ENCHANT.EXP`.
> The real pixel writer is at `0xf3e24`, is six instructions, and keeps the
> base in the store's displacement with a scaled index. See
> [pixel-writer-address-correction.md](pixel-writer-address-correction.md).
> The conclusion of this section (2.31 matches) was reached against the
> paraphrase and is not evidence either way.

```
game       mov ecx,[esp+0xc]  shl ecx,6  add ecx,[esp+0x8]
           mov ax,[esp+0x4]   mov [ecx*2+0x77e90],ax  ret
compiled   mov ecx,[esp+0xc]  shl ecx,6  add ecx,[esp+0x8]
           mov ax,[esp+0x4]   mov [ecx*2+0x77e90],ax  ret
```

Byte-identical *to each other*, and identical at `-O0`, `-O1`, `-O2`, `-O4`
and `-O6`. But both sides are the same hand-written paraphrase, so this
compares the compiler against itself.

### `0xe6a58`, a framed routine with division: DOES NOT MATCH

The same real function contains **two different division forms**, which is the finding that matters.

```
0x0e6a0f  lea eax,[esi-0x6]     ; (esi-6)
0x0e6a12  cdq
0x0e6a13  sub eax,edx
0x0e6a15  sar eax,1             ; /2
0x0e6a17  cdq / sub / sar eax,1 ; /4
0x0e6a1c  cdq / sub / sar eax,1 ; /8       <- naive, three halvings
...
0x0e6a2c  sub eax,0x4
0x0e6a2f  cdq
0x0e6a30  mov ecx,0x10          ; 16
0x0e6a35  idiv ecx              ; (f-4)/16   <- HARDWARE DIVIDE
```

**A compiler that strength-reduces division would never emit `idiv` for a constant power of two.** And a compiler
that does not strength-reduce would never emit the three-`sar` chain either. One function, two strategies, and
neither matches what High C 2.31 produces.

### What v2.31 produces for the same source

```
mov ecx,[esp+0x4]   add ecx,-6
mov eax,ecx   sar eax,2   shr eax,0x1d   add eax,ecx   sar eax,3
ret
```

That is a **bias-then-shift reciprocal**, the modern form. It appears at **every optimisation level including
`-O0`**, so no flag recovers the game's sequence.

## The image-wide count, which settles it

Counting instruction patterns across the whole 1,071,886-byte image:

| pattern | count |
|---|---|
| `idiv` / `imul` (`f7` group) | **83** |
| `cdq` / `sub eax,edx` / `sar` chains | **31**, all by 1 |
| magic-multiply reciprocals | **1** |

**One reciprocal multiply in a megabyte.** The game divides with hardware `idiv` and with repeated halving, and
almost never with the strength-reduced form. High C 2.31 produces that form *by default at every level*.

**Conclusion: v2.31 is not the compiler that built this code**, or not at the settings used. The difference is not
a flag, because `-O0` already shows it.

**Confirmed, later, against the FM Towns kit.** High C 1.7 from the SDK CD was
tested on exactly this discriminator and **does** emit hardware `idiv` and the
naive `cdq`/`sub`/`sar` halving chain, matching the game. So the family is
right, the version is not 2.31, and the FM Towns 1.7 kit is the leading
candidate. See [highc-plot-calibration.md](highc-plot-calibration.md) for the
side-by-side and [compiling-on-fm-towns.md](compiling-on-fm-towns.md) for the
recipe.

## What a usable compiler would have to do

**It must emit `idiv` for division by a constant power of two.** That is the single discriminating test, and it is
cheap: compile `int f(int x){return (x-4)/16;}` and look for `idiv`.

Secondary characteristics the game shows, all consistent with an older or less aggressive compiler:

- `cdq / sub eax,edx / sar eax,1` **repeated** for higher powers of two rather than one `sar 3`. That is naive
  strength reduction applied one power at a time.
- `imul` by a constant used in preference to reciprocal multiplication. The magic-multiply transform is absent.
- `lea`-chain multiplies for non-power-of-two constants, as `57i` and `20i` show, which is the *only* optimised
  arithmetic the image contains.

**So the target is an earlier High C, most likely 1988 to 1990**, which is where the runtime library string points
anyway (`1983-1988`).

**A cheap test exists for any candidate before doing anything with it**: compile the two-line division snippet and
count `idiv`. If the answer is zero, the compiler is too new, and no further work is worth doing.

## What went wrong, in order, and what each cost

**Assuming the toolchain did not exist.** It does. The claim was made from memory rather than checked, and it was
wrong in a way that stopped investigation.

**`sudo podman`.** Copied from the emulator's notes without checking. It put the image in a second store that
`podman images` cannot see, and the resulting registry-pull failure looked like a TLS certificate problem.

**`2>&1` in a DOS batch file.** Not valid DOS syntax, and it made the compiler invocation fail with no output and an
empty `ERRORLEVEL`. That empty `ERRORLEVEL` looked exactly like a DOS extender refusing to start, so several hours
went into `xms`, `umb`, `memsize` and DOS version theories. **The compiler never had a problem.**

**Reading logs instead of the screen.** DOS-era tooling reports visually. The compiler's own
`(C:\HC\BIN\HC386:) No files specified.` was on the screen the whole time and could not have appeared in a log.
Screenshots found in one step what several logs could not.

**Polling on a marker file.** DOS truncates to 8.3, so a batch writing `FLAGSDONE.TXT` creates `FLAGSDON.TXT` and a
poller waiting for the long name never fires. Two runs were read as silent failures. The fix is to wait on the
**object file**, which is the artefact that must exist.

**Chasing v3.04.** January 1993 against a 1991 build. It cannot have built the code on date alone, and it ships as an
interactive installer that fights every step. Recorded in [highc-v304-installer.md](highc-v304-installer.md) and
parked.

**Compiling a hypothesis that optimises away.** The first version of the constructor test compiled to
`mov eax,[esp+0x10]; ret` because the clamp had no observable side effect. A hypothesis that compiles to nothing is
not a failed match, it is a failed hypothesis, and the two are easy to confuse.

## What this leaves

**The compiler experiment has a negative result on its main goal and a positive one on its method.**

Positive: the container works, the pipeline works, `plot` matches byte for byte at any optimisation level, and the
idiom questions are answered (`lea`-then-shift is a multiply, `switch` emits a `cs:`-relative table, the caller pops
arguments).

Negative: **bulk compile-and-diff cannot proceed with v2.31**, because every routine containing a division will
mismatch for a reason that is not about the source.

The next useful step is not a bigger decompile attempt. It is **obtaining one older High C and running the two-line
`idiv` test**, which takes minutes and tells us whether the whole path is viable.

## The `idiv` test was run, and High C 1.73 passes it

> **RESOLVED 2026-11.** The test this page asked for has been run against the
> compiler now in the pipeline. High C 1.73 emits the hardware divide that 2.31
> does not, so the negative below is scoped to 2.31 and does not describe 1.73.

Source:

```c
int f(int a, int b) { int c = a / b; return c; }
```

High C 1.73 produces:

```
55 8b ec 50 8b 45 08 99 f7 7d 0c 89 45 fc c9 c3
```

which contains `99 f7 7d 0c`, that is `cdq` then `idiv dword [ebp+0xc]`. That is
the hardware-divide form present 83 times in `ENCHANT.EXP` and absent from 2.31 at
every optimisation level.

So the two compilers are cleanly distinguishable on this test, 2.31 fails it, 1.73
passes it, and **1.73 reproduces every shape this page measured.**

## But 1.7 is a 1993-94 kit, and the game is 1990

**Correction, from Paul, 2026-11-13.** The line above used to end "1.73 is the compiler", and that conclusion cannot
stand. The FM Towns High C release order is:

| when | what |
|---|---|
| 1990 | **V1.4 L10**, the 16-bit MS-DOS-hosted compiler |
| December 1990 | **V1.4 L20**, which introduced the 32-bit native Towns OS compiler and a bundled linker |
| 1991-1992 | incremental V1.5 and V1.6, plus the separate paid High C Extended Libraries |
| 1993-1994 | **V1.7**, L11 on floppy, then the Multimedia Kit L12 in June 1994 and L13 on CD-ROM |

The kit in `references/metaware/` is the **Multimedia Kaihatsu Kit V1.7 L13**, so it is a 1994 product. Ultima Trilogy
shipped in October 1990. **By the same chronological test that ruled out 2.31, 1.7 cannot be the compiler that built
this game.**

What survives, and what does not:

- **Survives: the observations.** `idiv` for a constant divisor, the `cdq`/`sub`/`sar` chain, `imul` over magic
  multiplies, `lea` chains. Those are properties of the code, measured on the code, and nothing about the kit's date
  changes them.
- **Survives, provisionally: the atlas.** `idiom-atlas.md` records what *a* High C emits. If MetaWare kept one code
  generator across 1.4 to 1.7, the entries may well be the same, and that is a testable assumption rather than a basis.
- **Does not survive: the attribution sentence.** "1.73 is the compiler" was an inference from matching output on a
  compiler that post-dates the binary by four years. A later sibling of the right compiler matching its shapes is weak
  evidence for the sibling rather than the ancestor.

### The kit's own binaries date it, in four strings

**Measured 2026-11-14 from `saves/hc.img`, the SDK CD, by reading the catalogue and extracting the tools.** These are
quoted from the binaries, not from the archive's filename:

| binary | what it says about itself |
|---|---|
| `HC386/BIN/HC386.EXE`, the driver, 61,888 bytes | `MetaWare Driver Version 1.08`, `(c) Copyright 1989-1990, MetaWare Incorporated` |
| `HC386/BIN/HC386.EXE`, its runtime banner | `MetaWare High C Run-time Library Copyright (C) 1983-1989` |
| `HC386/BIN/HCD386.EXE`, the compiler, 698,816 bytes | `MetaWare High C Compiler r.vm`, `Copyright (C) 1983-91 MetaWare Incorporated` |
| `HC386/BIN/HCD386P.EXP`, the protected-mode compiler | same `1983-91` banner |

**And the game's own runtime banner is earlier.** Every one of `ENCHANT.EXP`, `DARKNESS.EXP`, `EXODUS.EXP` and
`BRITISH.EXP` carries `High C Run-time Library Copyright (C) 1983-1988`. So the binary linked a **1988** runtime and the
kit on this CD ships a **1989** one, which is an independent confirmation of the date reasoning above: whatever built the
game, it is older than this CD.

**This gives a dating test that costs seconds and no compiler run.** Any candidate kit can be dated from the copyright
ranges in its own `HC386.EXE` and `HCD386.EXE` before it is installed, booted or bought. A V1.4-era compiler should read
`1983-88` or `1983-89` on the compiler banner and `1988` or so on its runtime, not `1983-91`. That is the first thing to
check on any kit that turns up, ahead of the `enter` prediction below.

### The decision: 1.7 is the stand-in, and it is labelled as one

**Decided 2026-11-13.** A V1.4 kit has not been found, and the search is not cheap: it is physical media from 1990. Two
facts make 1.7 a usable stand-in rather than a blocker. MetaWare's 386 code generator changed comparatively little
between the V1.4 line and V1.7, which is why people doing binary comparison on early FM Towns titles use V1.7 with the
same `-O`/`-On` and Phar Lap `386|LINK` settings as the closest available approximation. And the project's method does
not need an identified compiler to be sound: the equivalence rule only ever claims "this C, under this compiler, gives
these bytes".

So the project proceeds on 1.7, under three rules that keep the claim honest:

- **The ledger label stays `compiler-1.73-matched`.** It says which compiler was run, not which one built the game. Any
  widening of that label to "the original compiler" is the tolerance failure item 12a exists to prevent.
- **A match is strong evidence, a mismatch is weak.** If source plus 1.7 reproduces bytes exactly, the plausible reading
  is that the original was the same source under a code generator that agrees with 1.7 on this construct. A mismatch
  could be different C or a marginal version difference, and those remain indistinguishable.
- **One measured difference is on record and becomes the test.** The 220 `enter imm16, 0` prologues in `ENCHANT.EXP`
  are not something the 1.7 corpus emits, and `a41_nested` refuted the language-construct explanation for them. If a
  V1.4 kit ever turns up, the prediction to check first is that **1.4 emits `enter` frames where 1.7 emits
  `push ebp; mov ebp, esp`** for the same source. Confirming that would turn the largest unexplained family in the
  binary from a mystery into a version fingerprint, and it would also tell us that the stand-in has a known blind spot
  we can name rather than a general unreliability.

### The dates do not all fit, and that is the live question

The game is a 32-bit flat `MP` image that requires `RUN386`, so it was built with a **32-bit** compiler. The first
32-bit Towns OS compiler is V1.4 L20, in **December 1990**. An October 1990 release therefore cannot have been built
with it. At least one of these three is wrong:

1. the release date is later than October 1990,
2. L20 is not the first 32-bit option, or
3. the game was built with something outside this table.

Until that is resolved, the honest position is: the family is MetaWare High C, the candidate is the **V1.4 line**, and
**no kit that could have built this binary is on this machine.** `references/metaware/` holds V1.7 L13, High C 2.31 and
High CPP 3.04, all of which post-date the game.

### Backwards compatibility is the trap, not the reassurance

Paul's point, 2026-11-13, and it is the one that stops the wrong conclusion being drawn from a working build. A 1994
compiler accepts 1990 C perfectly well, so "1.7 compiles the game's source" proves nothing about which compiler built
the binary. What backwards compatibility guarantees is the **language**; what it does not guarantee is the **code
generator**. The same source through 1.4 and through 1.7 can differ in instruction selection, register allocation,
frame shape and scheduling while both being correct, and therefore in bytes.

Two consequences the project has to live with until item `0e` closes:

- **A match under 1.7 is evidence about High C's shapes, not about the tool.** Eleven routines matching is a real
  observation and it is why the atlas is worth having. It does not promote 1.7 to the compiler, because a later sibling
  of the right compiler emitting the same bytes for simple code is exactly what one would expect.
- **A mismatch under 1.7 is worth even less than before.** It used to mean "not this compiler or not this C". It now
  also means "this compiler, four years too late", and those are indistinguishable from the bytes.

**The one probe that could date the kit without source is the runtime library.** These binaries statically link the
kit's own library objects, which carry member names, and `docs/attribution-samples.md` has already walked 1,095 members
and 224,972 code bytes out of the V1.7 kit. Searching `ENCHANT.EXP` for those byte sequences asks a question the dates
cannot answer on their own: is this kit's runtime in the binary or not. A large overlap would mean the dates are wrong
somewhere. Little or no overlap would be consistent with a different kit and is the cheapest corroboration available
before a V1.4 kit is in hand.

What that does NOT establish is that bulk compile-and-diff is now practical. It
establishes that the specific mismatch this page identified, which would have
broken every routine containing a division, is not present in the compiler in
use. Whether the remaining work is tractable is a separate question with one
favourable data point so far, recorded in `docs/nonleaf-reopened.md`.

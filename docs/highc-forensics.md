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

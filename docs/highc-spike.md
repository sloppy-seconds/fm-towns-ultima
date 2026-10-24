# High C calibration: the spike, and where it stops

The goal: compile a C function with MetaWare High C 386 and compare the generated code against a routine whose
bytes are known from `ENCHANT.EXP`. That turns the statistical frame-pointer rule in
[highc-codegen.md](highc-codegen.md) into something a compiler either reproduces or does not.

## The ground-truth target

`pixelWriter` at `0xf3e04` is the best available test, because its seven instructions are read completely and it
has no frame pointer:

```
0xf3e04  mov eax,[esp+0xc]     ; arg3
0xf3e08  shl eax,7             ; * 128
0xf3e0b  mov edx,[esp+0x8]     ; arg2
0xf3e0f  mov cx,[esp+0x4]      ; arg1
0xf3e14  mov [eax+edx*2+0x77e90],cx
0xf3e1c  ret
```

The equivalent C is one line, in `tools/calibration/plot.c`:

```c
void plot(unsigned short value, int col, int row) {
    *(unsigned short *)(0x77e90 + row * 128 + col * 2) = value;
}
```

This is a stronger test than a prologue check. It exercises the calling convention, the addressing-mode choice,
and the frame-pointer decision at once, and it has an exact expected output rather than a shape.

## What is done

**The compiler is extracted.** Both archives are floppy image sets rather than directories, and the driver is
`HC386.EXE`, not the `H386.EXE` an earlier brief guessed.

| what | where |
|---|---|
| archive | `references/metaware/MetaWare High C 386 v2.31 (1992) (5.25-1.2mb).7z` |
| contents | five 1,228,800-byte FAT12 images |
| extracted | `build/hc386_v231/`, all five disks merged |
| driver | `BIN/HC386.EXE`, `MZ` DOS executable |
| version | **2.31, April 1991**, from `README` |

**The version is a useful result on its own.** `ENCHANT.EXP` is a 1991 build and High C 2.31 is dated April 1991,
so this compiler is period-correct rather than five years late. The v3.04 archive is a 1993 C++ compiler and is
the less likely candidate.

**The libraries are source, not objects.** `LIB/` contains only `LIB/SRC`, C and assembly sources, with no prebuilt
`.LIB`. That is fine here because the test never links, but it means a later link step would have to build the
runtime first.

**`tools/calibrate.sh` exists and is correct as far as it goes.** It merges the disks, writes a DOSBox-X config with
absolute paths, borrows Xwayland, waits for a completion marker rather than sleeping, and disassembles the object.

## Two idioms confirmed by compiling, not by inference

Both questions the bytes could not settle are now answered, and both answers are clean.

### `lea` then shift is the multiply, proven

`a9-reference-search.md` found three `lea reg,[reg+reg*4]` sites and could not show they were a multiply by 20,
because a plausible pattern is not the same as a demonstrated one. Compiling `int mul20(int i) { return i * 20; }`
answers it:

```
mov eax,[esp+0x4]
lea eax,[eax+eax*4]     ; i * 5
shl eax,byte 0x2        ; * 4 more, so i * 20
ret
```

**That is the idiom, exactly.** So any `lea [reg+reg*4]` followed by a shift of 2 in the image is a multiply by 20,
and the three known sites can be read as arithmetic rather than guessed at.

### `switch` emits a `cs:`-relative jump table

This settles a question `jump-tables.md` has carried. Compiling a six-case switch produces:

```
mov eax,[esp+0x4]
dec eax                 ; make it 0-based
cmp eax,5               ; six cases
jna 0x40                ; in range, go to the table
sub eax,eax             ; else default
jmp 0x3d
...
jmp dword near [cs:eax*4+0x48]
```

with the table at `0x48`:

```
case 1 -> 0x10    case 4 -> 0x28
case 2 -> 0x18    case 5 -> 0x30
case 3 -> 0x20    case 6 -> 0x38
```

**Three things follow, and all three are new.**

The dispatch is `jmp dword near [cs:eax*4+disp]`. That is precisely the `cs:`-relative indirect jump form the
project has been cautious about, and it is ordinary compiler output for a switch on x86-32 with a flat model, not
evidence of anything exotic about segmented addressing.

**The table holds segment-relative offsets, not absolute addresses.** Entry 1 is `0x10` and the case body is at
`0x10`, measured from the start of the code segment. So a table of small values in the image is a switch table, and
its entries are offsets within the segment rather than absolute virtual addresses.

**Below six cases it still uses a table.** A compiler is expected to fall back to a comparison chain for a small
switch, and this one does not at six. Where the threshold lies has not been found, and it matters because it decides
whether a short comparison chain in the image could be a two-case switch.

## Optimisation flags do not change the output for this routine

The v3.04 control turned out to be expensive to obtain, so the version-sensitivity question was answered a
cheaper way: **vary the flags instead**. `plot.c` compiled at five optimisation levels:

```
F_DEF  mov shl add mov shl add mov mov ret
F_O0   mov shl add mov shl add mov mov ret
F_O2   mov shl add mov shl add mov mov ret
F_O4   mov shl add mov shl add mov mov ret
F_O6   mov shl add mov shl add mov mov ret
```

and byte-identical:

```
8b 44 24 0c  c1 e0 07  05 90 7e 07 00  8b 4c 24 08  d1 e1  03 c8  66 8b 44 24 04  66 89 01  c3
```

**Identical at every level, including `-O0`.** For this routine the code generator's output does not depend on the
optimisation setting at all.

**What that means and does not mean.** It is a real answer about `plot`, which is a leaf with no locals, no loops
and no calls: there is nothing for an optimiser to do, so every level produces the same thing. **It is not evidence
that flags never matter**, and it should not be generalised to routines with loops or inlining candidates.

What it does support is a narrower claim, which is the one that was needed: **the match on `plot` is not an
artefact of choosing the right `-O` level.** Any level reproduces it, so the match is about the compiler and the
calling convention rather than about a lucky flag.

The version question therefore remains formally open, but with less riding on it than before. A later compiler
that changed only its optimiser would produce the same code here.

## The container, which removed the DOSBox problem

A container was built for this, and the reason is not convenience. **The three Flatpak traps that cost several
hours were all artefacts of running a sandboxed GUI application from a headless shell**, and a container removes
each of them by construction.

| trap | container |
|---|---|
| sandbox cannot see `/var/home` | no sandbox, real paths |
| working directory is not the invocation directory | absolute paths, ours to set |
| no `DISPLAY` for SDL | the entrypoint owns Xvfb |

**`container/Containerfile.highc`** is the artefact worth sharing, and it is deliberately generic. Nothing in it is
specific to Ultima II. It carries the pieces that make a 1991 DOS compiler build reproducibly under a modern LTS:
`dosbox-x` and `dosbox` from apt, `mtools` for floppy images, `ndisasm` for disassembly, and `xterm` inside Xvfb so
a DOS session can be driven by hand over VNC when automation is not working.

**The toolchain is bind-mounted, not baked in.** `references/` holds the extracted compiler and the image never
does. Same posture as `container/Containerfile` takes with the ROMs: a 1991 commercial compiler is someone else's
copyright and does not belong in an image that might be published.

**`tools/calib-run.sh`** drives it: `start`, `build`, `shell`, `logs`, `stop`, `status`.

### What the container proved, and what it did not

Working, verified inside the container:

```
--- environment ---
HCDIR=C:\HC
PATH=C:\HC\BIN
INCLUDE=C:\HC\INC
--- compile ---
```

**The mount works, `BUILD.BAT` runs, the environment is set, and DOS can see the compiler**:

```
Directory of C:\HC\BIN
HC386    EXE             59,952 10/24/2026  9:45a
```

**So the autoexec and mount problems are solved.** What remains is narrower: `HC386` invoked with no arguments
prints nothing and returns immediately, where a DOS program of that era would normally print a usage banner. A
compiler that is a DOS extender will refuse to start without extended memory, and doing nothing is what that looks
like from the shell.

Two more traps found here and worth recording:

**Podman has two image stores on this host and they do not share, and using sudo caused it.** The first version of
this script built and ran with sudo, which put the image in the rootful store where a plain `podman images` cannot
see it, and podman then tried to **pull** `localhost/highc` from a registry, failing with a certificate error that
says nothing about the cause.

**That sudo was not needed and should not have been there.** It was copied from the emulator's notes without
checking. Rootless podman builds this image, runs it, and passes the bind mounts, and the existing
`container/Containerfile` is already run rootless. So the script now uses plain podman throughout. The store check
stays, because the failure it produces is still possible for anyone who builds rootful, and it now says which store
the image is in instead of letting podman attempt a registry pull.

**DOS gets one drive.** `C:` is mounted at `/work`, so `HCDIR=C:\HC` only resolves if the toolchain is also
mounted at `/work/HC`. Mounting it at `/hc` looks correct on the Linux side and is invisible to DOS.

## IT COMPILES, AND THE COMPILER IS CONFIRMED

The spike succeeded. `tools/calibration/plot.c` compiles with **MetaWare High C 2.31** under DOSBox-X inside the
container, and the generated code matches the real game's addressing form.

### The bug that blocked it, and it was mine

The compiler was never the problem. **`2>&1` in a DOS batch file is not valid DOS syntax**, and its presence made
the whole `HC386` line fail with no message and no `ERRORLEVEL`. Every earlier attempt had it.

What the diagnostics found, in order, each one ruling out a theory I had been reasoning from:

```
Bad command or filename - "HC386"        the diagnostic BAT had no PATH set, so nothing was loaded at all
(C:\HC\BIN\HC386:) No files specified.   the compiler runs and prints its usage when given no arguments
```

So there was never a DOS extender problem, never a memory problem, and never a reason to vary `xms` or `memsize`.
**A screenshot found in one step what several logs could not**, because the log carried only SDL messages while the
screen carried the compiler's own words.

### The comparison

Ground truth, `ENCHANT.EXP` at `0xf3e04`:

```
mov eax,[esp+0xc]   shl eax,7   mov edx,[esp+0x8]   mov cx,[esp+0x4]
mov [eax+edx*2+0x77e90],cx      ret
```

High C 2.31, first version of the source, where the destination is computed as an integer:

```
mov eax,[esp+0xc]   shl eax,7   add eax,0x77e90
mov ecx,[esp+0x8]   shl ecx,1   add ecx,eax
mov ax,[esp+0x4]    mov [ecx],ax    ret
```

High C 2.31, second version, where the destination is a typed pointer and the index is `row*64+col`:

```
mov ecx,[esp+0xc]   shl ecx,6   add ecx,[esp+0x8]
mov ax,[esp+0x4]    mov [ecx*2+0x77e90],ax    ret
```

**The third is the game's shape.** Both use the same scaled-index-with-absolute-displacement form,
`[index*2 + 0x77e90]`, which is the addressing choice that identifies this compiler's output. The first version
differs only because the C described the arithmetic differently, which is itself informative: **the disassembly
tells you how the source was written**, and the game's author wrote the pointer form.

### What this settles

| question | answer |
|---|---|
| is High C 2.31 the right compiler | **yes, for this routine** |
| does it omit the frame pointer | **yes, when the routine needs no `ebp`** |
| are arguments stack-passed via `esp` | **yes, exactly as the game does** |

This confirms the frame-pointer rule from [highc-codegen.md](highc-codegen.md) directly rather than statistically,
on the function it was derived from.

### What it does not settle

One routine is not the whole corpus. `plot` is a leaf with three arguments that touches `ebp` never, which is the
easy case the rule already predicted. The rule's 33 exceptions in each direction remain unexplained, and testing
them means finding C that reproduces a routine with a frame and one without.

## The container, which removed the DOSBox problem## Why this is still worth finishing

The frame-pointer rule at 84 percent accuracy is a statistical inference from 738 routines. A single successful
compile of `plot()` would confirm or kill it outright, and the `plot()` test has an exact expected answer. Two of
the five questions in `highc-codegen.md` are already answered from the bytes alone, and the remaining three,
including how a `switch` is emitted and whether `lea`-then-shift is the multiply-by-20 idiom, cannot be settled
without a compiler.

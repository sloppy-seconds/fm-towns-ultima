# The self-patching `int`, in every game on the disc

The MetaWare High C library routine `int86` writes its argument into its own `int` instruction before
executing it. A recompiler compiles that instruction from the bytes on disk, so a recompiled module always
traps the vector that was in the file, which is zero. This page records how that was found, the byte
sequences involved, and the measurement that it is **not specific to Ultima II**.

## The routine

Named `int86` in the image itself, and found by disassembling backwards from a fault at guest `0x10241a`
in `ENCHANT.EXP`. Addresses here are the guest frame, meaning the image as loaded, which is file offset
minus `0x200`. See [two-frames-of-reference.md](two-frames-of-reference.md).

```
0x1023fc  mov al, byte ptr [ebp + 8]      the interrupt number is the first argument
0x1023ff  mov byte ptr [0x10241b], al     written into the instruction below
0x102404  mov esi, dword ptr [ebp + 0xc]  then the inregs are loaded
0x102418  jmp 0x10241a
0x10241a  int 0                           the slot it just filled
```

The slot is the *operand byte*. The file has `cd 00` there and the running machine has `cd 93` at the moment
of the call, which is how the mechanism was found: a breakpoint on the instruction during a live start-up,
with the bytes read either side of it.

## The measured bytes

Two sequences, both excluding the embedded address so they can be compared across binaries. The prologue,
which includes the name string and its length byte:

```
00 69 6e 74 38 36 05 55 8b ec 56 57 53 8a 45 08 a2
```

The body after the four-byte address:

```
8b 75 0c 8b 06 8b 5e 04 8b 4e 08 8b 56 0c 8b 7e 14 8b 76 10 eb 00 cd 00
```

## The measurement: seven binaries, one routine

Every Phar Lap `MP` executable on the disc carries it, and the two sequences above are **byte-identical**
in all of them. Only the address embedded in the store differs, because each binary's `int` slot is at its
own address:

| binary | store at | slot it writes | prologue same | body same |
|---|---|---|---|---|
| `ENCHANT.EXP` | `0x1025ff` | `0x10241b` | yes | yes |
| `DARKNESS.EXP` | `0x0e8653` | `0x0e846f` | yes | yes |
| `EXODUS.EXP` | `0x0d944f` | `0x0d926b` | yes | yes |
| `BRITISH.EXP` | `0x054887` | `0x0546a3` | yes | yes |
| `UT1DEMO.EXP` | `0x093827` | `0x093643` | yes | yes |
| `UT2DEMO.EXP` | `0x0939c7` | `0x0937e3` | yes | yes |
| `UT3DEMO.EXP` | `0x093b87` | `0x0939a3` | yes | yes |

No binary on the disc contains the `int86x` name without one of these stores. The non-Origins executables,
`TMENU.EXP`, `RUN386.EXE`, `CONTROL.EXE`, `T_OAK2.EXE`, `DISKCOPY.EXP`, `FORMAT.EXP` and `LABEL.EXP`, contain
neither. `FORMAT.EXP` has a store four bytes before an `int 0` with no `int86` anywhere, which is the
false positive the name check exists to exclude.

## What it means for a recompiler

The emitted module contains a fixed `int` with the vector from disk, so the program's own patch is invisible
to it and every such call traps vector zero. The fix that works is to take the vector from guest memory at
the instruction when the dispatched vector is zero:

```cpp
if (n == 0) {
    int live = (int)rd8(c.sbase[1] + (next - 1));   // the operand byte of the int just executed
    if (live != 0) n = live;
}
```

That is a patch to the vendored runtime, in `towns_cpu.cpp`, recorded in
[recomp-plan.md](recomp-plan.md) with the rest of the kit patches. It costs one read per `int 0`, and the
alternative, rewriting the emitted instruction, would need the module to notice every write to its own code.

## How to re-run the scan

For each `MP` executable on the disc, find `A2 <imm32>` where `imm32` is inside the image and an `int 0`
instruction follows within 48 bytes, then compare sixteen bytes before the store and the body after the
address with `ENCHANT.EXP`'s. `int86x` in the string table is a cheap pre-filter and `int86` alone is not,
because both names are present.

## What is not established

Whether the patched vector is ever anything other than what the caller passed. Every call observed so far
passes the vector it wants, the machine writes it, and the handler runs. A call that relied on the slot
already holding something would look identical from the outside, and none was seen.

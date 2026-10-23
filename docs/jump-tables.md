# Two jump tables, one real: the savestate settles it

`command-dispatch.md` said both `cs:`-relative jump tables resolve to code, and promoted segmented
addressing back to leading hypothesis on the strength of "two independent cases". A savestate settles it,
and **the claim was wrong.**

## What the savestate shows

Both table locations exist in the runtime state, found by searching for their exact bytes:

```
file 0xf6d65  ->  state 0x342037
file 0xf6a24  ->  state 0x341cf6
```

They are 3,137 bytes apart in the state and 3,137 apart in the file (`0xf6d65 - 0xf6a24 = 0x341`). So
both addresses are carried through to runtime unchanged, at an implied base of `0x24b2d2`.

**But the contents are not the same kind of thing.**

### Table 1 at `0xf6d65` is real

```
key 0x1 -> 0xf6bbc
key 0x2 -> 0xf6bcb
key 0x3 -> 0xf6bda
key 0x4 -> 0xf6cac
key 0x5 -> 0xf6cac
key 0x6 -> 0xf6cac
key 0x7 -> 0xf6be9
key 0x8 -> 0xf6cac
key 0x9 -> 0xf6bf8
key 0xa -> 0xf6c07
```

Ten entries, seven distinct handlers, `0xf6cac` serving as the default for keys 4, 5, 6 and 8. Every
entry disassembles as a valid instruction boundary. **This table is real, and it is the same in the file
and at runtime.**

### Table 2 at `0xf6a24` is code

```
raw bytes at 0xf6a24: 6a 07 e8 1d 04 ff ff 6a 07 e8 c6 0d ff ff 83 c4 08 e9 9f 00 00 00 ...
```

`6a 07` is `push 7`, `e8 1d 04 ff ff` is `call rel32`, `83 c4 08` is `add esp,8`. **It is a sequence of
instructions**, identical in the file and in the state. Reading it as nine dwords produces nine values
that all fail the boundary oracle, because they are not pointers.

So `jmp dword near [cs:edx*4+0xf6a24]` reads into a code region. **That cannot be a working jump table.**

## What I got wrong

`command-dispatch.md` recorded two things that the state contradicts:

**"Both `cs:`-relative jump tables resolve to addresses that hold code."** Table 1 does not. It holds
seven valid handler addresses. The page was written from the file alone, without checking whether a
table existed at the *runtime* address, and for table 1 the answer is that one plainly does.

**"Two cases make segmented addressing the leading hypothesis again."** There are not two cases. There is
one table that works and one instruction whose displacement points at code.

The `addressing-limits.md` demotion of segmented addressing should therefore **stand**. One bad
displacement is a single anomaly, not a class.

## The off-by-one that produced the confusion

The instruction form is:

```
2e          cs prefix
ff 24 95    jmp dword near [reg*4 + disp32]
dd dd dd dd disp32, starting at offset +4
```

**The disp32 starts four bytes into the instruction, not three.** Reading at `+3` gives `0xf6d6595` for
table 1 and `0xf6a2495` for table 2, both of which are absurd and both of which caused this project
real confusion across two sessions.

This is the **sixth** address-arithmetic error in this project and the third in this session. It belongs
in the method rules.

## Why table 2 still does not work, and what is actually true

The displacement `0xf6a24` is unambiguous and the bytes there are code. Three readings remain:

1. **The instruction is unreachable.** It sits in a branch that is never taken, and the compiler emitted a
   broken displacement for it. Unlikely for a compiler but possible if the function was patched.
2. **`cs` at runtime is not the game's code segment** for this instruction, so the effective address is
   `CS<<4 + 0xf6a24` and lands elsewhere. **This is testable and is the only remaining live theory.**
3. **`edx` is never in range 0..8** when this instruction is reached, so the table is never indexed.

Reading 2 is worth one check, and it was attempted. **It did not succeed in this session.**

Searched the state for any 16-bit value that, shifted by 4 or by 16, equals either candidate image base
(`0x24b2d2` or `0x762d2`). **Zero hits in the first 4,096 bytes.** The Tsugaru savestate does not expose
the segment registers in a form this search finds, and the CPU block was not located.

So the remaining question is **not answerable from the savestates already captured.** It needs either the
Tsugaru state format documented, or a `PRI` console command that dumps the segment registers, and both are
work rather than a lookup.

**Recommendation: stop here.** Table 1 is understood and is what the command dispatch actually uses.
Table 2 is one instruction in one branch whose behaviour is unverified and whose consequence is confined
to a second-level dispatch on the character's `KEY` stat. The cost of continuing has now exceeded the
value twice.

## What this page does not claim

- Not that `0xe4086` is explained. That stays in `indirect-branches.md` as open.
- Not that the command dispatch is understood end to end. Table 1 is understood. The second level is not.
- Not a per-CS-base answer for reading the image at runtime. The state holds the image at more than one
  effective offset and a flat `indexOf` cannot resolve it, which is the same conclusion
  `mirrored-region.md` reached by a different route.

---

**[Command dispatch](command-dispatch.md)** **[Addressing limits](addressing-limits.md)** **[Indirect branches](indirect-branches.md)**

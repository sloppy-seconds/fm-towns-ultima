# The command dispatcher, and a jump table that is still not found

`games-loop.md` establishes that a turn is one call to `0xf6ebc`. This page is what is inside the first
half of it, and one negative that matters.

## The command dispatcher

`0xf6ebc` reads a key and dispatches on it:

```
0xf6f19   push 0x7
0xf6f1b   call 0xe4928          ; read a key
0xf6f20   mov  [0xd460c],al     ; store it
0xf6f28   and  al,al
0xf6f2a   jz   0xf6f19          ; ignore key 0, read again
0xf6f2c   movzx edx,byte [0xd460c]
0xf6f33   dec  edx              ; index is key - 1
0xf6f34   cmp  edx,0x59         ; bound: 90
0xf6f37   ja   0xf71b6          ; out of range, bail
0xf6f3d   jmp  dword near [edx*4+0xf6d65]
```

The key is stored at **`0xd460c`**. The index is **key minus one**, so the table is 1-based on the key
code. `0x41` (`'A'`) is written into that same byte at `0xf7164` as a sentinel.

## The table has ten entries, not ninety

`cmp edx,0x59` is a **defensive bound**, not the table size. Reading the dwords at `0xf6d65` gives valid
code addresses until index 10, where `0x9984bf` appears and the run stops being pointers:

```
[0] 0xf6bbc
[1] 0xf6bcb
[2] 0xf6bda
[3] 0xf6cac     <- default
[4] 0xf6cac     <- default
[5] 0xf6cac     <- default
[6] 0xf6be9
[7] 0xf6cac     <- default
[8] 0xf6bf8
[9] 0xf6c07
[10] 0x9984bf   <- not a pointer, end of table
```

Seven distinct handlers, one of which (`0xf6cac`) is the default reached by keys 4, 5, 6 and 8. The
keys are **control codes 1 to 10**, not letters, which is consistent with cursor and function keys
rather than the `A`-`Z` movement commands documented in `docs/keys-*.md`.

## Two address errors in this page's own investigation

Recorded because this project has now made the same class of mistake five times, and both of these
happened while writing this page.

**First:** I read `2e ff 24 95 65 6d 0f 00` and took the displacement as `0xf6d65`, a five-digit
address. It is `0x0f6d65`, six digits, because the low bytes `65 6d` read as a single value. **Reading
a little-endian displacement by eye is how `0x20` errors happen.** Parse it, do not read it.

**Second:** `0xf6f3d` begins with `2e`, the `cs:` segment prefix. The displacement starts three bytes
in, not zero. My first attempt read from `0xf6f40` and produced `0xf6d6595`, which is out of range.

Both were caught by the arithmetic not working, which is the only reason they are in this page as
corrections rather than as errors in a table.

> **CORRECTION: the claim below that "both tables resolve to code" is wrong.** A savestate shows
> table 1 at `0xf6d65` holds seven valid handler addresses and is real in the file and at runtime.
> Only table 2 fails. See [jump-tables.md](jump-tables.md), which also records the off-by-one that
> produced the confusion: the `disp32` of `2e ff 24 95` starts at offset **+4**, not +3.

## The negative: the second table is not where the instruction says

`0xf6bcd` is a second dispatcher, on the character's **`KEY`** field at `0xcde99`:

```
0xf6bea   mov edx,[edx+0xcde99]
0xf6bf0   sub edx,0x5
0xf6bf3   cmp edx,0x8
0xf6bf6   ja  0xf6c67
0xf6bfc   jmp dword near [cs:edx*4+0xf6a24]
```

Nine entries, for `KEY` values 5 to 13. **There is no table at `0xf6a24`.** Reading nine dwords there
gives zero valid code addresses:

```
0x1de8076a 0x6affff04 0x0dc6e807 0xc483ffff 0x09fe908 ...
```

Those are instructions (`e8 07 6d 01` is a call, `83 c4 04` is an add), not pointers.

**RETRACTED.** This paragraph claimed both `cs:`-relative tables resolve to code and that two
independent cases made segmented addressing the leading hypothesis again. **Table 1 does not resolve to
code.** A savestate shows `0xf6d65` holds seven valid handler addresses and is identical in the file and
at runtime. Only table 2 fails.

So there are not two cases, `addressing-limits.md`'s demotion of segmented addressing **stands**, and the
"leading hypothesis again" sentence was wrong. See [jump-tables.md](jump-tables.md), which also records
the arithmetic error that produced the confusion: the `disp32` of `2e ff 24 95` begins at offset **+4**,
not +3.

A third such table exists at `0xe7020` (59 entries, target `0xe6e48`) and it also points at code, while
being reachable from six callers. **That one is unexplained and is recorded as open rather than guessed
at.**

## What is established, and usable for reimplementation

Despite the unresolved table, the per-turn structure is now concrete:

1. `0xf6ebc` is called once per loop iteration by `0xe97c0`.
2. It clears `0xcde48` to `-1`, sets up the display for pane 7, and checks `MAGIC` at `0xcde81`.
3. It checks `GATE_X` at `0xcdf9b` and jumps to `0xf71dc` if a gate is active.
4. It reads a key into `0xd460c` in a loop until the key is non-zero.
5. It dispatches on key minus one through a ten-entry table of control codes.
6. Several handlers fall through into a second dispatch on the character's `KEY` field.

**A reimplementation can be built against that skeleton.** The missing piece is which key is which
command, and that is a runtime question: pressing a key and seeing which entry runs answers it in one
session, while the static route has now failed twice.

## Recommendation

**Stop trying to find these tables statically.** Two independent cases both resolve to code. The
boundary oracle, the flat scan, the mirrored scan and direct displacement parsing have all been tried.
The answer is in the runtime segment registers.

`docs/debug-modes.md` and the savestate tooling already exist. A single savestate with `CS` and the
table base recorded settles both tables and costs one session.

---

**[The game loop](game-loop.md)** **[Indirect branches](indirect-branches.md)** **[Addressing limits](addressing-limits.md)**

# The random-consumption function at `0xef440`

The next of the 35 `randMod` functions, read end to end. It reads cleanly and does something
simple, and it exposed a problem with the field naming that has to be recorded before it spreads.

## What the function does

At `0xef499`:

```asm
0xEF499  push dword 0x20
0xEF49B  call 0xe1c5c              ; randMod(0x20) -> 0 to 32
0xEF4A0  add esp,0x4
0xEF4A3  and eax,eax
0xEF4A5  jnz 0xef525               ; anything non-zero: do nothing, return
```

**A 1-in-33 chance of continuing.** Then:

```asm
0xEF4AB  push dword 0x9
0xEF4AD  call 0xe1c5c              ; randMod(9) -> 0 to 9
0xEF4B5  cmp eax,0x5
0xEF4B8  jnl 0xef4e8               ; >= 5 takes the second branch

  ; branch A, 5 of 10
  0xEF4BA  ... *351 chain ...
  0xEF4CA  mov eax,[edx+0xcdeef]
  0xEF4D0  and eax,eax
  0xEF4D2  jng 0xef525             ; if the field is not > 0, nothing happens
  0xEF4D4  dec dword [edx+0xcdeef]
  0xEF4DA  push 0 / call 0xe1b24
  0xEF4E1  push dword 0x4674        ; message

  ; branch B, 5 of 10
  0xEF4E8  ... *351 chain ...
  0xEF4F8  mov eax,[edx+0xcdeeb]
  0xEF4FE  and eax,eax
  0xEF500  jng 0xef525
  0xEF502  dec dword [edx+0xcdeeb]
  0xEF508  push 0 / call 0xe1b24
  0xEF50F  ...
```

**One of two resources is decremented, each guarded by "only if greater than zero", with a
different message for each.** The distribution is even: 5 of 10 either way, and the whole thing only
fires 1 time in 33.

That shape is a **consumable being used up on a random tick**: two kinds, chosen evenly, each
refusing to go below zero and showing its own message.

## The field naming problem, which is not solved

`0xcdeef` and `0xcdeeb` are fields of the 351-byte character record. Naming them requires a mapping
from roster field index to record offset, and two attempts at deriving that mapping have failed.

**Attempt 1: fixed 4-byte fields from a base.** Using `MAP` (index 72) at `0xcdf57` and `PLAYER_X`
(index 77) at `0xcdf6b` gives a consistent 4-byte stride across indices 72 to 85, and `WORLD` (85)
at `0xcdf8b` checks out. Extrapolating backwards that way puts **`STRANGE_COIN` (index 58) at
`0xcdf1f`**, which is the address the shrine adds gold to.

**That is wrong.** The shrine's gold branch clamps at `999` (`0x3e7`), and no roster field caps at
999: `maxed_four.hdm` shows `HP`, `MHP` and `EXPERIENCE` at 9999, `GOLD` at 9999, `FOOD` at 999900.
So either `0xcdf1f` is not index 58, or the region above index 71 is not a plain 4-byte array.

**Attempt 2: half-integer indices.** Deriving a base from `PLAYER_X`/`PLAYER_Y` alone gives
`0xcde37`, which resolves `MAP` and `WORLD` correctly but produces half-integer indices for a dozen
other observed offsets. Half-integer means the base is wrong for those, which means the record is
not uniformly 4-byte aligned.

**The likely explanation, not established:** the roster is written as text with `%c`, `%d` and
string fields, and the in-memory record is a **struct with mixed field widths**, not a 4-byte array.
A `%c` field is one byte and a `%d` is four. Under that model a fixed stride cannot work and the
offsets have to be derived from the format string order and the field types, which has not been done.

## What that costs

**Every stat named in [shrine-function.md](shrine-function.md) is unnamed for the same reason**, and
that page attributed `0xcde5e` to gold on the strength of the 999 clamp. Given that no roster field
caps at 999, **that attribution is probably wrong too.**

The formulas are still exact. The offsets are still exact. Only the names are missing, and they were
missing before this page was written. What this page corrects is the impression that the naming
problem was nearly solved.

## The way to settle it

**Derive the record layout from the format string.** `roster-reference.md` says the field order was
read out of a `printf` format string in `ENCHANT.EXP`. That format string names each field and its
conversion, so concatenating them in order with their actual widths gives the in-memory layout if the
in-memory struct mirrors the serialised order. That is testable: build the layout from the format
string, predict where `MAP` and `PLAYER_X` land, and check against `0xcdf57` and `0xcdf6b`.

If the prediction holds, every field in the record is named for free. If it does not, the in-memory
order differs from the serialised order and that is worth knowing too.

**This should happen before another `randMod` function is read**, because every subsequent read will
produce field offsets that cannot be named, and naming them later means revisiting every page.

---

**[The shrine function](shrine-function.md)** **[The randMod groups](randmod-groups.md)** **[The roster reference](roster-reference.md)** **[Plan](plan.md)**

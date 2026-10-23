# The stat-gain routine at `0xf25b4`

Found by following the 85 call sites of the random helper `0xe1c5c`. This is the first piece of
game logic read end to end rather than inferred, and it settles a formula question with exact
arithmetic.

## The function

```asm
0x0F25B4  push dword 0x7              ; text window 7
0x0F25B6  call 0xe6b1c
0x0F25BB  push dword 0x9              ; n = 9
0x0F25BD  call 0xe1c5c                ; eax = rand % (9+1), so 0..9
0x0F25C2  add  esp,0x8
0x0F25C5  cmp  eax,0x2
0x0F25C8  jnl  0xf25e9                ; if roll >= 2, take the success branch

; failure branch
0x0F25CA  push 0x3 / call 0xe1b24     ; sprite slot 3
0x0F25D1  push dword 0x6408           ; message string
0x0F25D6  push 0x7 / call 0xe5834     ; draw in window 7
0x0F25DD  push 0x7 / call 0xe6e48
0x0F25E7  jmp  0xf262b                ; return

; success branch
0x0F25E9  push dword 0x6428           ; a different message
0x0F25EE  push 0x7 / call 0xe5834
0x0F25F5  mov  eax,[0xceca0]          ; current record index
0x0F25FA  lea  edx,[eax+eax*4]        ; 5i
0x0F25FD  lea  edx,[eax+edx*2]        ; i + 10i = 11i
0x0F2600  shl  edx,5                  ; 352i
0x0F2603  sub  edx,eax                ; 351i
0x0F2605  inc  dword [edx+0xcdf23]    ; field += 1
0x0F260E  cmp  dword [edx+0xcdf23],0x63
0x0F2615  jng  skip_clamp
0x0F2617  mov  dword [edx+0xcdf23],0x63   ; clamp to 99
skip_clamp:
0x0F2621  push 0x7 / call 0xe6e48
0x0F262B  ret
```

## The formula

**A 351-byte character record, indexed by the global at `0xceca0`, has a stat that gains one
point with a 2-in-10 chance and clamps at 99.**

```
roll = (rng % 10)          ; 0 to 9
if roll >= 2:              ; 8 outcomes out of 10, so 80 percent
    field += 1
    if field > 99: field = 99
```

The index arithmetic is worth recording because it is the same shape as elsewhere on this
project:

```
lea edx,[eax+eax*4]    ; 5i
lea edx,[eax+edx*2]    ; i + 10i = 11i
shl edx,5              ; 352i
sub edx,eax            ; 351i
```

**Stride 351, not 57.** The `shl 5` and `sub` is how this compiler builds `*351`, which is 11
times 32 minus 1. `tools/stride.js` looks for `lea` chains and would find the `*5` and `*11`
stages but not the shift-and-subtract finish, so this is a stride the tool misses. Recorded
here so the next search knows to look for it.

The base is `0xcdf23`, which means record N's field is at `0xcdf23 + N*351`. Other fields
reached in the same function are at `+0x40` and `+0x44`, so the record extends at least 0x48
into itself and starts at or below `0xcdf23`.

## The clamp at 99 is the important part

The comparison is `cmp ...,0x63` followed by `jng skip` and `mov ...,0x63`. So the value is
capped at **exactly 99**.

That matches the roster schema, where `STRENGTH`, `AGILITY`, `STAMINA`, `CHARISMA`, `WISDOM`
and `INTELLIGENCE` are all reported out of 99, and it matches `saves/maxed_four.hdm`, which has
every stat at 99, `HP` and `MHP` at 9999, and `TORCHES`, `KEY`, `TOOLS` at 99.

**So there are two separate caps:** stats at 99, and HP at 9999. The 9999 cap is not in this
function and has not been located.

## What this confirms about the record

A dump of nearby memory in `death.state` shows character-shaped values at these offsets:

| value | as ASCII |
|---|---|
| 65 | `'A'` |
| 55 | `'7'` |
| 400 | |
| 21 | |
| 470 | |

65 is `'A'`, and `R_ARMOUR` and `R_WEAPON` are reported as `%c` and read `A` in every save this
project has produced. Their presence as a dword in this neighbourhood is consistent with the
351-byte record holding the roster's fields, but it is **not proof**: the alignment has not been
matched field by field against the 92-field schema.

## What this does not establish

**Which stat this is.** The function increments one field and displays one of two messages, but
nothing in it says whether the field is strength, wisdom or anything else. Identifying it needs
either the message strings at `0x6408` and `0x6428` decoded, or the field offset matched against
a known character.

**When it is called.** The enclosing code at `0xf2472` stores coordinates and calls `0xfb3fc`
before branching on `cmp edi,0x4`, which is a different check. The call path into `0xf25b4` has
not been traced.

**The message text.** `0x6408` and `0x6428` are `EB` glyph runs, so they are the same
undecoded encoding as everywhere else. This is a case where the glyph mapping being unsolved
costs a real answer: the messages almost certainly say which stat increased.

## Why this matters

This is the first complete game formula read from the FM Towns binary with exact arithmetic,
including the random call and its inclusive range. Every previous attempt at a formula on this
project failed because the 6502 idioms did not survive the 32-bit compiler. This one survived
because the RNG helpers were identified first and the call chain followed from them.

The same method applies to the rest: find a helper, find its callers, read what they do with the
result.

---

**[The random number helpers](rng-helpers.md)** **[More core routines](more-routines.md)** **[Plan](plan.md)**

# The entry point, which the header was right about

> **CORRECTION: `0x101a20` is the entry point.** It is the `MP` header's `EIP` field, and it is an
> **address**, not a file offset. The code it names is at file offset `EIP + 0x200` = `0x101c20`,
> because the file's first 0x200 bytes are the header and stub and are not loaded into segment
> `000C`. Read as a file offset the field lands 0x200 early, on bytes that are not an instruction
> boundary, and that slip retracted a correct sentence. A live capture settles it: the loader's
> `IRETD` transfers control to `000C:101A20`, the first game instruction, which is `EB 56`.
>
> Two pages carry the wrong version and are corrected in the same commit as this one:
> [a12-design.md](a12-design.md), which withdrew a right answer, and
> [code-analysis.md](code-analysis.md), which strengthened the withdrawal into "not a usable code
> entry". The measurement underneath both was real. The arithmetic applied to it was 0x200 out.

## What the field is, and where it points

`EIP` is a dword at file offset `0x14` of the `MP` header. For `ENCHANT.EXP` it holds `0x101a20`.
The loader's contract, measured from `MD 000C:0` returning `KYB_init` (file offset `0x200`), is:

```
address  = file offset - 0x200
file off = address + 0x200
```

So the field has two readings, and they differ by exactly the header size:

| reading | address | file offset | bytes there |
|---|---|---|---|
| **as an address, which is what it is** | `000C:101A20` | `0x101c20` | `EB 56` = `jmp 101A78` |
| as a file offset, which is the error | `000C:101820` | `0x101a20` | `02 03 D1 03`, not an instruction start |

The second row is what an earlier session measured, correctly, and then misread: `0x101a20` as a
**file offset** really is one byte into a `7D 02` branch. The page drew "the header points into the
middle of an instruction" from a true byte-level fact about the wrong address.

## The loader's final jump, observed

A `SAVEHIST` dump taken the instant the game's first library call was reached, then read back from
the oldest end, contains 65,536 steps. The hand-off is at step 46,254:

```
46252  0008:00003DD2
46253  0008:00003DD3
46254  000C:00101A20     <- first game instruction
46255  000C:00101A78     <- the jmp's destination
46256  000C:00101A7A
```

The instruction that performs the transfer is the last one in the loader's segment:

```
$ U 0008:3DC8
0008:00003DC8 2667A19C1C    MOV EAX,ES:[1C9CH]
0008:00003DCD 678B1EA01C    MOV EBX,[1CA0H]
0008:00003DD2 1F            POP DS
0008:00003DD3 CF            IRETD
```

`IRETD` returns to a frame the loader built, and it pops `CS:EIP = 000C:101A20` off the stack. So
the "final jump" is an interrupt return, and its destination is the header's `EIP` used directly as
an address.

The entry code is a two-byte jump into the code that follows, and the destination is ordinary:

```
$ U 000C:101A20
000C:00101A20 EB56          JMP 00101A78
000C:00101A22 E8F5A2FEFF    CALL 000EBD1C
000C:00101A27 50            PUSH EAX
000C:00101A28 E8F71F0000    CALL 00103A24
```

and the file agrees with memory, which fixes the offset relationship:

```
$ xxd -s 0x101c20 -l 8 ENCHANT.EXP
00101c20: eb56 e8f5 a2fe ff50
```

## The capture already contained the answer

Both boot-to-game captures carry these two rows:

```
preEIP 0x101A20  kind J opcode 00EB length 2 -> 000C:00101A78
0008:00003DD3    -> 000C:00101A20  kind S
```

The check that appeared to rule the entry out searched for image offset `0x101a20`, which under the
`+0x200` mapping is address `0x101820`. It found nothing, and it was right, because nothing executes
there. **A correct measurement was applied to the wrong question**, which is this project's oldest
defect and now its most expensive one.

## What survives from the earlier page

Two things, and they are why the error was convincing.

**The `+0x200` mapping is real and unchanged.** Live reads at every site probed, from `000C:0` to
`000C:10518E`, match `ENCHANT.EXP` at `address + 0x200`. The mapping was never in doubt. What was in
doubt, wrongly, was which side of it the header field belongs to.

**A control-flow walk is still the right instrument for functions a `CALL` sweep cannot see.** The
entry point is now known, which is a better seed than a `CALL`-target list, but the unresolved
indirect edges are the same 5.5 percent and the same holes. See [cfgwalk.md](cfgwalk.md) for the walk
as built.

## Verdict

**The entry point is `000C:101A20`, which is file offset `0x101c20`, and it is `EB 56`, a jump to
`000C:101A78`.** The header was telling the truth. What that code does is the next question, and it
belongs to the init path rather than to this page.

---

**[The A12 design](a12-design.md)** **[The randMod survey](randmod-survey.md)** **[Plan](plan.md)**

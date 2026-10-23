# The shrine function at `0xf2cc0`

> **CORRECTION: this page names the wrong things.** The branches do not grant stats. They grant
> `GOLD`, `ERA`, `SPID`, and two inventory items (`RING` and `WAND`). The field offsets were
> unnamed when this was written; they are now solved in [record-layout.md](record-layout.md), and
> the corrected reading is there.
>
> Two consequences worth stating up front. **No branch grants a stat.** And the `0xf0` branch
> increments `SPID`, which is the sprite index, so it changes the character's appearance.
>
> The disassembly below is correct. The field names in it are wrong.


The largest cluster of `randMod` call sites, read end to end. Nine sites in one function, and it
turns out to be the **shrine** logic: four branches keyed on a tile value, three of which grant a
stat increase with a random chance and one of which grants gold.

This is the first complete piece of game logic recovered from the FM Towns binary, not just a
formula but a decision tree.

## A correction to the entry address

This page first gave the entry as `0xf2ce0`. The real entry is **`0xf2cc0`**, confirmed as an
instruction boundary by `tools/cfgwalk.js --check`. The `0x20` difference is the same
file-offset-versus-virtual-address confusion that has now bitten this project three times. The
disassembly quoted below is correct because it was produced by `tools/sweep.js` from the right
bytes; only the address label was wrong.

## Dispatch

```asm
0xF2D5A  movzx ebx,byte [edi+0xce3c8]    ; the tile the party is standing on
0xF2D61  mov edx,ebx
0xF2D63  cmp edx,0x60 / jz 0xf2d8d    ; 83 fa 60, imm8 form
0xF2D68  cmp edx,0xf0 / jz 0xf2eca    ; 81 fa f0000000, imm32 form
0xF2D74  cmp edx,0xf8 / jz 0xf2f8f
0xF2D80  cmp edx,0xfc / jz 0xf2dd6
0xF2D88  jmp 0xf300d                      ; anything else: no effect
```

Four shrine tiles. Each branch below is quoted from the disassembly, entered at a verified
instruction boundary.

## Shrine `0x60`: +2 to one stat, no roll

```asm
0xF2DB0  add dword [edx+0xcde95],0x2
0xF2DBA  cmp dword [edx+0xcde95],0x63
0xF2DC7  mov dword [edx+0xcde95],0x63     ; clamp 99
```

**Unconditional.** Two points, capped at 99. No random call.

## Shrine `0xfc`: +1 with a 4-in-15 chance, else +1 to a different stat with a 1-in-4 chance

```asm
0xF2DD6  push 0xf / call randMod          ; roll 0..15
0xF2DE0  cmp eax,0x4 / jnl 0xf2e2d        ; < 4 means four outcomes of sixteen

  ; success path, 4/16
  0xF2E08  inc dword [edx+0xcde9d]
  0xF2E11  cmp dword [edx+0xcde9d],0x63
  0xF2E1E  mov dword [edx+0xcde9d],0x63   ; clamp 99

  ; failure path, 12/16
  0xF2E2D  push 0xe / call randMod        ; roll 0..14
  0xF2E38  and esi,esi / jz 0xf300d       ; roll 0 means nothing happens
  0xF2E50  push 2 / call randMod          ; roll 0..2, plus 2
  0xF2E6B  add eax,0x2
  0xF2E71  add eax,[edx+esi*4+0xcdee7]    ; index a per-stat array by the first roll
  0xF2E78  mov [ecx+esi*4+0xcdee7],eax
  0xF2E82  cmp eax,0x63 ... clamp 99
```

That `[edx+esi*4+0xcdee7]` was described on this page as a "six-element stat array" with a possible
over-index. **Both parts were wrong and [record-layout.md](record-layout.md) corrects them.** The array is
the **item inventory**, fifteen consecutive `%d` fields from `QUICK_SWORD` at `0xcdee7` to
`STRANGE_COIN` at `0xcdf1f`. The roll of 0 to 14 is exactly the array length, so there was never an
over-index. **The value is `rand(0..2) + 2`, so 2 to 4 items**, added to a chosen item.

The index is turned into a letter for the message:

```asm
0xF2E96  mov eax,esi
0xF2E98  add al,0x41                       ; 'A' + index
```

So the message names the stat by letter.

## Shrine `0xf0`: a stat increase with a 4-in-15 chance, else gold

```asm
0xF2ECA  push 0xf / call randMod
0xF2ED4  cmp eax,0x4 / jnl 0xf2f21

  ; success, 4/16: +1 to [edx+0xcdefb], clamp 99
  ; failure, else:

0xF2F21  push 3 / call randMod             ; 0..3
0xF2F28  inc esi                            ; 1..4
0xF2F3A  add [edx+0xcde5e],esi             ; gold += 1..4
0xF2F70  cmp dword [edx+0xcde5e],0x3e7     ; vs 999
0xF2F80  mov dword [edx+0xcde5e],0x3e7     ; clamp at 999
```

**`0x3e7` is 999**, a different cap from the stat cap of 99. That is the gold limit.

## Shrine `0xf8`: one of two stats, chosen by a 5-in-10 roll

```asm
0xF2F8F  push 9 / call randMod             ; 0..9
0xF2F99  cmp eax,0x5 / jnl 0xf2fce

  ; roll < 5, five outcomes of ten: +1 to [edx+0xcdeeb], clamp 99, message 0x6810
  ; roll >= 5, five outcomes of ten: +1 to [edx+0xcdeef], clamp 99, message 0x6834
```

## The recovered structure

The character record is `351` bytes, indexed by `[0xceca0]`, computed each time with the
`lea *5 / lea *11 / shl 5 / sub` chain. Fields touched here:

| offset | use | cap |
|---|---|---|
| `+0xcde95` base | stat, +2 from shrine `0x60` | 99 |
| `+0xcde9d` base | stat, +1 at 4/16 from shrine `0xfc` | 99 |
| `+0xcdee7` base | **item inventory**, 15 slots, +2..4 items | 99 |
| `+0xcdeeb` base | stat, +1 at 5/10 from shrine `0xf8` | 99 |
| `+0xcdeef` base | stat, +1 at 5/10 from shrine `0xf8` | 99 |
| `+0xcdefb` base | stat, +1 at 4/16 from shrine `0xf0` | 99 |
| `+0xcde5e` base | **gold**, +1..4 | **999** |

Two cap values now established: **99 for stats, 999 for gold.** The 9999 `HP` cap recorded in
`save-files.md` is a third, and it is not in this function.

## Why this mattered

Every earlier attempt at a game formula on this project failed because the 6502 idioms did not
survive a 32-bit compiler. This one worked because of the tooling built over the last several
sessions, used in order:

1. `tools/funcs.js` found `randMod` and its 85 call sites.
2. `tools/cfgwalk.js` proved which of those sites are real, removing the false positives.
3. Grouping the sites by enclosing function reduced 85 sites to **35 functions** to read.
4. `tools/sweep.js` disassembled the largest of those from a verified boundary.

Without step 2 the site list contained garbage. Without step 3 the job looked like 85 separate
reads instead of 35. The tooling is now doing what it was built for.

## Verified byte for byte

The four dispatch comparisons, read directly rather than from disassembly output:

```
0xf2d63  83 fa 60              cmp edx,0x60    imm8 form
0xf2d68  81 fa f0 00 00 00     cmp edx,0xf0    imm32 form
0xf2d74  81 fa f8 00 00 00     cmp edx,0xf8
0xf2d80  81 fa fc 00 00 00     cmp edx,0xfc
```

Two different encodings for the same instruction, because 0x60 fits in a sign-extended byte and
0xf0 does not. Worth recording: a scanner looking only for `81 fa` would miss the first branch
entirely, and a scanner looking only for `83 fa` would miss the other three.

The two caps:

```
0xf2dba  83 ba 95 de 0c 00 63   cmp dword [edx+0xcde95],0x63   = 99
0xf2f70  81 ba 5e de 0c 00 e7 03 cmp dword [edx+0xcde5e],0x3e7 = 999
```

## What is not established

**Which stat each offset is.** The message strings that name them are at `0x66e4`, `0x672c`,
`0x674c`, `0x675c`, `0x6784`, `0x67b0`, `0x67bc`, `0x67ec`, `0x6810`, `0x6834` and are `EB` glyph
runs. **The unsolved glyph mapping blocks naming the stats**, which is the clearest demonstration
yet that one open item is costing another.

**Whether `+0xcdee7` really is six elements.** RESOLVED: it is not, it is fifteen. The roll allows 0 to 14 as an index, so either the
array is larger, or the code can over-index, or the roll is being reused for a purpose that
constrains it elsewhere. Recorded as an anomaly, not a conclusion.

**The shrine tile values.** `0x60`, `0xf0`, `0xf8` and `0xfc` are known from this function. How they
map to map cells is open, and depends on the cell encoding question.

---

**[The randMod survey](randmod-survey.md)** **[The stat-gain routine](stat-gain.md)** **[The control-flow walk](cfgwalk.md)** **[Plan](plan.md)**

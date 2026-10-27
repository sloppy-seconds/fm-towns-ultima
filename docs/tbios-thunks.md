# The TBIOS thunk library: 70 named entry points at `0x2d1`

**The game carries one small stub per TBIOS function it uses, laid out in AH order from `0x2d1`.
That gives 70 named anchors, and every `call` to one of them says exactly which system function is
being invoked.**

## The shape of a thunk

`0xabd` is one, and it is 36 bytes:

```
0xabd  push esi
0xabe  push edi
0xabf  mov edi, [esp+0xc]        ; first argument
0xac3  mov esi, [esp+0x10]       ; second argument
0xac7  mov ah, 0x46              ; the TBIOS function number
0xac9  push fs
0xacb  push 0x110                ; the TBIOS code selector
0xad0  pop fs
0xad2  call fs:[0x20]            ; the entry table
0xad9  pop fs
0xadb  movsx eax, ah             ; the result
0xade  pop edi
0xadf  pop esi
0xae0  ret
```

The distinguishing bytes are `b4 <AH> 0f a0 68 10 01 00 00`: `mov ah, <n>`, `push fs`, `push 0x110`.
`0x110` is the TBIOS code selector and `fs:[0x20]` is its entry table, both named by `fmtownskit`'s
`towns` module.

## The population, measured

**70 thunks, 69 distinct AH values**, from `0x2d1` to `0x66`:

| AH range | count |
|---|---|
| `0x00` to `0x1b` | 29 (two stubs share `0x01`) |
| `0x20` to `0x2f` | 16 |
| `0x40` to `0x51` | 18 |
| `0x60` to `0x66` | 7 |

They are laid out **in AH order**, contiguous, each 30 to 55 bytes:

```
0x2d1  ah=0x00      0x382  ah=0x03      0x441  ah=0x08
0x2f8  ah=0x01      0x3aa  ah=0x04      0x464  ah=0x09
0x32f  ah=0x01      0x3cd  ah=0x05      0x486  ah=0x0a
0x35e  ah=0x02      0x3f4  ah=0x06      0x4ac  ah=0x0b
                    0x41b  ah=0x07
```

The two `ah=0x01` stubs at `0x2f8` and `0x32f` are 55 bytes apart rather than the usual 34, so they
take different argument counts. Which is which is not established.

## Why this matters for the corpus

**Every `call` to an address in `0x2d1..0x71d` is a named system call.** That is 70 anchors, and
unlike a string anchor it cannot be ambiguous: the AH value in the stub is the function number and
the stub is one instruction away.

Before this, a graphics routine could only be recognised by its output. Now a function whose body
calls `0xabd` is known to call **TBIOS function 0x46** with two arguments, and the meaning of 0x46
is a property of the platform, documented in `fmtownskit`'s `towns.py`, not of this game.

## A worked example, and the reading that was wrong

**Correction first.** An earlier revision of this page called `0x7add8` a rectangle and TBIOS 0x46 a
rectangle fill. Reading the handler at `0x2d78` refutes that. What it does:

```
0x2d78  mov eax, [esi]
0x2d7a  mov gs:[ebp+0x1c4], eax     ; two dwords from the caller's block
0x2d81  mov eax, [esi+4]
0x2d84  mov gs:[ebp+0x1c8], eax
0x2d8b  mov al, gs:[ebp+0x108]      ; a mode byte
0x2d92  test al, 0xe
0x2d94  je  0x2e4c
0x2db9  call 0x28d8
0x2dc2  mov ecx, gs:[ebp+0xc]
0x2dd1  sub esp, ecx                ; allocate a work area on the stack
0x2dd3  mov edi, esp
0x2ddc  sub eax, eax
0x2dde  stosd                       ; zero it
0x2de8  call 0x36dc
0x2ded  call 0x6120
0x2df2  call 0x3d70
0x2df7  test word gs:[ebp+0x108], 0xe0
0x2e3a  add esp, gs:[ebp+0x200]     ; restore the stack it borrowed
0x2e41  ret
```

That is a **mode switch that borrows stack and calls three sub-handlers**, not a drawing primitive.
The two dwords it reads from `[esi]` become TBIOS work-area fields `0x1c4` and `0x1c8`.

So `0x7add8` is **not established to be a rectangle.** What is established is narrower: four
consecutive words there are filled from a function's four arguments and the block's address is
passed on with a second pointer. Whether the callee treats it as a rectangle is unread.

The lesson is the one this project keeps relearning: four arguments and a struct do not make a
rectangle, and the label came from the shape rather than from the callee.

Found by following the index. `0xe6058` is a function that takes four arguments and stores them:

```
0xe6072  mov ax, [ebp+0x8]        ; arg 1
0xe6076  mov [0x7add8], ax
0xe607c  mov ax, [ebp+0xc]        ; arg 2
0xe6080  mov [0x7adda], ax        ; note +2: a word, not a dword
0xe6086  mov ax, [ebp+0x10]       ; arg 3
0xe608a  mov [0x7addc], ax
0xe6090  mov ax, [ebp+0x14]       ; arg 4
0xe6094  mov [0x7adde], ax
0xe609a  push 0x7add8             ; the struct
0xe609f  push 0x7a7d8             ; a context
0xe60a4  call 0xabd               ; TBIOS function 0x46
```

**Four consecutive words at `0x7add8`, then a TBIOS 0x46 call with the block as an argument.**
Four arguments in, four words out, handed to one system call. What the block means is not
established, per the correction above.

The index also shows `0x7add8` referenced by **20 functions**, and its neighbours `0x7addc`,
`0x7adde`, `0x7ade0`, `0x7ade2`, `0x7ade4` by 11 to 20 each. A shared argument block, written by
many callers of the same system function.

## What this does not say

The meaning of TBIOS function `0x46` is **not established**, and `fmtownskit` does not supply it:
`towns.py` names the selector `0x110` and the entry table at `0`, and it has a table of interrupt
numbers (`INTS`) containing only `0x21` for DOS and `0x93` for the disk BIOS. There is no table of
TBIOS function numbers anywhere in the kit, so the AH values are names only once something else
supplies the mapping.

That correction is recorded because the first version of this page asserted the opposite. The
mapping is likely in `TBIOS.BIN` on the disc, which `tbiosld.py` in the kit already knows how to
lay out, and reading it is a separate piece of work rather than a lookup.

The thunks are also not a complete API: 70 of whatever the TBIOS offers. The game uses these and no
others, so a function calling one is identified, and a function doing graphics without a thunk is
not.

## Reproducing

```
node -e 'const b=require("fs").readFileSync("ENCHANT.EXP");
for (let i=0;i<b.length-16;i++)
  if (b[i]===0xb4 && b[i+2]===0x0f && b[i+3]===0xa0 && b[i+4]===0x68 && b[i+5]===0x10 && b[i+6]===0x01)
    console.log("0x"+i.toString(16), "ah=0x"+b[i+1].toString(16));'
```

That is the 70, and `grep -c` on the output gives the count above.

## The table behind the AH values, found in `TBIOS.BIN`

The AH numbers are now resolved to handlers. The chain, each link read from a file:

```
the game's thunk          mov ah,0x46 ... call fs:[0x20]
  fs:[0x20]               selector 0x110, offset 0x280
                          (the header's u32 at offset 0x20)
the dispatcher at 0x280   movzx edi, ah
                          call dword ptr cs:[edi*4 + 0x2b4]
the table at 0x2b4        u32 per AH value: the handler's offset in TBIOS.BIN
```

`TBIOS.BIN` is 81,920 bytes, signature `V31L22A`, dated `89/10/25`, modules `towns` and `tbios`.
`fmtownskit`'s `tbiosld.py` documents this layout for the modular variant used by other games,
while the first two discs carry TBIOS as one file, which is this one.

**The table has 220 non-zero entries over the full AH space, and every one of the 69 AH values the
game uses resolves.** Above AH `0x66` the entries are not all file offsets: the largest is
`0xff212444`, far outside an 81,920-byte file. So the table is only a dispatch table over the range
the game uses, and no claim is made about the rest.

Within `0x00` to `0x66` every non-zero entry is an offset inside the file, maximum `0x34fc`, and
the 34 zeros are exactly the gaps the game's thunks skip: `0x1c`-`0x1f`, `0x30`-`0x3f`, `0x52`-`0x5f`.

## What this still does not give

**A name.** The table says AH `0x46` dispatches to `0x2d78` in `TBIOS.BIN`. Reading that handler
establishes what it does mechanically, a mode switch that borrows stack and calls three
sub-handlers, and it does **not** give it a name: `0x36dc`, `0x6120` and `0x3d70` are three more
unread handlers, and the chain of unread code ends somewhere Fujitsu's documentation would settle
and this analysis does not.

`tools/tbios.js` prints the mapping, `--game` restricts it to the 69 values the game uses, and
`--check` asserts every link, including the two that are easy to get wrong: the header slot and the
dispatcher's `call cs:[edi*4 + 0x2b4]`, whose opcode is `FF /2` (`call`) and not `FF /4` (`jmp`).

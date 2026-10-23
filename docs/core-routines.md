# The core routines

Reading the most-called functions in `ENCHANT.EXP`, from real entry points. The top of the
call list is where the engine lives, and each one read completely is a piece of the engine
named.

Entries are found with `tools/funcs.js` (CALL targets) and read with
`node tools/funcs.js --at <entry> <len>`.

## The most-called functions

| entry | calls | role |
|---|---|---|
| `0xe6e48` | 616 | counter with limit, indexes the 57-byte array |
| `0xe5834` | 563 | strlen then renderer |
| `0xe6b1c` | 240 | object record access |
| `0xe7440` | 231 | object record bounds check |
| `0xe6e90` | 226 | **the text renderer** |
| `0xe1b24` | 171 | sprite/slot setup |
| `0xe5810` | 120 | string formatting wrapper |
| `0xf3e04` | 104 | **screen buffer pixel writer** |
| `0x10096c` | 94 | bounded string copy |
| `0x101928` | 93 | variadic printf forwarder |
| `0xe9e0c` | 91 | unread |
| `0x0c5d` | - | **TownsOS BIOS call gateway** |

## `0x0c5d`: the BIOS gateway

```asm
0x0C5D  push esi / push edi
0x0C5F  mov  edi,[esp+0xc]
0x0C63  mov  esi,[esp+0x10]
0x0C67  mov  ah,0x60
0x0C69  push fs
0x0C6B  push dword 0x110
0x0C70  pop  fs
0x0C72  call dword far [fs:0x20]
0x0C79  pop  fs
0x0C7B  movsx eax,ah
```

This is the **TownsOS system call interface**. `ah = 0x60` selects the service, the `fs`
register is switched to segment `0x110`, and the call goes through the far pointer at
`fs:0x20`. That is the documented FM Towns OS entry, and every draw in the game ultimately
reaches the screen through here.

This is the boundary between the game and the operating system. Below it is TownsOS and the
Fujitsu library, which the game does not ship.

## `0xf3e04`: the pixel writer

```asm
0x0F3E04  mov  eax,[esp+0xc]        ; arg3 = row
0x0F3E08  shl  eax,7                ; * 128
0x0F3E0B  mov  edx,[esp+0x8]        ; arg2 = column
0x0F3E0F  mov  cx,[esp+0x4]         ; arg1 = value
0x0F3E14  mov  [eax+edx*2+0x77e90],cx
0x0F3E1C  ret
```

A four-instruction leaf function that writes one 16-bit value into a plane at `0x77e90`.

**The arithmetic is the interesting part.** The row is multiplied by **128**, and the column
is scaled by **2** because the destination is 16-bit. So a row is 128 sixteen-bit words.

**This is a 128-wide screen buffer.** Recorded because 128 is the width every previous
attempt at `MAP2_*` geometry settled on, and this is the first kernel-level confirmation that
128 is a real stride in this game rather than a guess about map data.

Note the distinction: this is a **screen** buffer at `0x77e90`, not map data. The map is
`MAP2_*.TIF` loaded elsewhere. The agreement in width is suggestive and is **not** proof
that the map uses the same geometry.

## `0x10096c`: bounded string copy

```asm
0x10096C  push ebp / mov ebp,esp / push esi / push edi
0x100971  mov  edi,[ebp+0x8]      ; destination
0x100974  mov  esi,[ebp+0xc]      ; count
0x100977  cmp  esi,0x1
0x10097A  jl   short_zero
0x10097C  cmp  esi,0x1
0x10097F  jnz  recurse
0x100981  mov  byte [edi],0x0     ; write terminator
0x100984  mov  eax,edi / jmp done
0x100988  push 0x1
0x10098A  lea  eax,[esi-0x1]
0x10098D  push eax                ; recurse with count-1
```

A recursive copy that writes the terminator first. Not a `memcpy`, and the recursion is
unusual for a compiler to emit from an ordinary loop, which suggests the source was written
recursively.

## `0x101928`: the printf-family forwarder

```asm
0x101928  push ebp / mov ebp,esp
0x10192B  lea  eax,[ebp+0x10]     ; address of the variadic arguments
0x10192E  push eax
0x10192F  push dword [ebp+0xc]
0x101932  push dword [ebp+0x8]
0x101935  call 0x1018a8
```

Takes `(fmt, arg, va_list)` and forwards to `0x1018a8`, which is the real formatter. This is
the `va_start` shim, and it means `0x1018a8` is the formatting engine.

That is why the debug strings read `PLAYER_X = ` followed by a number: the value is formatted
by `0x1018a8` and the literal prefix is pushed to the renderer separately.

## `0xe5810`: the string wrapper

```asm
0x0E5810  push [ebp+0x10]
0x0E5813  push [ebp+0xc]
0x0E5819  call 0xe41d0        ; resolve something
0x0E581E  push eax
0x0E581F  call 0xe4238        ; resolve something else
0x0E5824  push eax
0x0E5825  push [ebp+0x8]
0x0E5828  call 0xe6e90        ; renderer
```

Chains two lookups and then draws. The two lookups take the caller's second and third
arguments and produce the renderer's two arguments, so this is the **"draw message number N
in window W"** entry point. That makes `0xe41d0` and `0xe4238` the message-index resolvers,
and they are the next thing to read for the message tables.

## `0xe5834`: draw a caller-supplied string

Read in [function-recovery.md](function-recovery.md). It scans forward to a NUL when the
global at `0x7a6b4` is set, then calls the renderer.

## `0xe1b24`: sprite slot setup

```asm
0x0E1B24  mov  edi,[ebp+0x8]        ; slot index
0x0E1B2B  call 0xe17c8
0x0E1B30  push 0x40 / push 0x47 / call 0xfdbd1
0x0E1B3B  mov  edx,[edi*4+0x40dcc]  ; table of pointers indexed by slot
0x0E1B42  mov  [edx+0x10],eax       ; zeroed
0x0E1B45  mov  [edx+0x14],eax       ; zeroed
0x0E1B4B  movzx eax,byte [edx+0x1c]
```

Indexes a **pointer table at `0x40dcc`** by slot and clears two dwords in the object. Byte
field `+0x1c` is read as a count or index. This is the function that initialises a sprite or
entity slot before drawing.

## Method note

Reading these from real entries took minutes each and none produced a wrong answer. The
earlier approach, scanning for byte patterns, produced three of this project's wrong
conclusions. The difference is alignment, as
[code-analysis.md](code-analysis.md) always said.

## Followed up: the message resolvers, and a dead end

`0xe5810` chains `0xe41d0` then `0xe4238` then the renderer, so those two are the message
resolvers.

**`0xe41d0`** takes `(value, width)` and formats a number into a buffer at `0x7a6ca`. When
the value is zero it writes the character `0x30` (`'0'`) and pads with spaces up to the
width. It is an **integer-to-string with padding**, not a message lookup.

**`0xe4238`** takes the buffer and applies a `switch` on each byte:

```asm
0x0E4238  mov  ecx,0x7a6cc
0x0E4245  mov  al,[edi]
0x0E4247  and  al,al
0x0E4249  jz   done
0x0E424F  movzx edx,al
0x0E4252  sub  edx,0x20
0x0E4255  cmp  edx,0x3a
0x0E4258  ja   default
0x0E425E  jmp  dword near [cs:edx*4+0xe4086]
```

So it is a **per-character transform** over the range `0x20` to `0x5A`, 59 cases.

**The jump table at `0xe4086` is not there.** Reading four-byte values from that address
produces instruction bytes, not code addresses, and it does not appear in the list of
maximal code-pointer runs found anywhere in the image (13 runs, the largest at `0x0d8f84`
with 170 entries). Rebasing by the header size in either direction does not fix it.

**Verdict: OPEN.** Either the displacement is not what it appears, or the table is built at
runtime, or this binary addresses that operand differently from the flat convention that
holds everywhere else. Recording it rather than guessing, because guessing at a jump table
is how the earlier false disassembly happened.

**What this means for the message tables.** `0xe5810` is not "draw message N in window W"
after all. It is "format a number with padding, transform it, draw it". That is the
debug readout path, not the dialogue path.

The dialogue strings are still reachable through the 123 literal call sites recorded in
[string-sources.md](string-sources.md), which remains the useful result.

## What this leaves

- `0xe9e0c` (91 calls), unread.
- `0xe17c8`, called by the sprite setup.
- `0x1018a8`, the real formatter.
- `0xe4086`, the switch table, which does not resolve as expected.

Also worth noting: `0x0d8f84` holds a **170-entry** table of code pointers. That is the
largest dispatch table in the image and it has not been examined.

---

**[Finding functions](function-recovery.md)** **[The text renderer](text-renderer.md)** **[Where the strings are](string-sources.md)** **[Plan](plan.md)**

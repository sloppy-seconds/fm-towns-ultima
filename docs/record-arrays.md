# Two 57-byte record arrays

There are **two** separate arrays with a 57-byte stride in the data segment, not one. They
were initially conflated because both are reached with the same `lea` chain.

The chain is identical in every function that uses either:

```asm
lea  edx,[edi+edi*2]      ; edx = i*3
lea  ecx,[edx+edx*8]      ; ecx = i*27
lea  ecx,[edx+ecx*2]      ; ecx = i*57
```

so the stride is 57 for both. Only the base differs.

| array | base | indexing form | fields found |
|---|---|---|---|
| text windows | `0x7aee4` | `[ebx+disp32]` | 14 |
| objects | `0x7a7d0` | `[eax+ecx+disp]` | 10 |

## The text-window array

Already documented in [text-renderer.md](text-renderer.md). 14 fields, origin, line width,
row limit, cursor, and 29 records ending two bytes before the BSS boundary at `0x7b557`.

## The object array at `0x7a7d0`

Reached with a different addressing shape, which is why the first field scan missed it. The
function loads the base into a register and then indexes it:

```asm
mov  eax,0x7a7d0
lea  edx,[edi+edi*2]
lea  ecx,[edx+edx*8]
lea  ecx,[edx+ecx*2]
mov  byte [eax+ecx+0x714],0xff
```

The `[eax+ecx+disp]` form puts a **raw offset into the array** in the displacement, unlike
the `[ebx+disp32]` form where the displacement is an absolute address.

### Fields

| disp | offset in record | width | refs |
|---|---|---|---|
| `0x714` | +20 | byte | 4 |
| `0x715` | +21 | dword | 1 |
| `0x719` | +25 | dword | 1 |
| `0x71d` | +29 | dword | 1 |
| `0x721` | +33 | dword | 1 |
| `0x725` | +37 | dword | 2 |
| `0x729` | +41 | dword | 2 |
| `0x72d` | +45 | dword | 2 |
| `0x731` | +49 | dword | 2 |
| `0x735` | +53 | dword | 1 |

Offsets `0x736` to `0x739` are touched too, at `+54`, `+37` and `+53` in the other
notation, and are listed in the constructor below.

### The constructor

At `0xe6a74` there is a function that fills an entire record from nine arguments. It is the
clearest description of what the record holds:

```asm
mov  eax,0x7a7d0
lea  edx,[edi+edi*2]
lea  ecx,[edx+edx*8]
lea  ecx,[edx+ecx*2]        ; ecx = i*57

mov  byte  [eax+ecx+0x714],0xff     ; +20 = 0xFF
mov  edx,[ebp+0xc]
mov  [eax+ecx+0x715],edx            ; +21 = arg2
mov  edx,[ebp+0x10]
mov  [eax+ecx+0x719],edx            ; +25 = arg3
mov  [eax+ecx+0x71d],esi            ; +29 = esi
mov  edx,[ebp+0x18]
mov  [eax+ecx+0x721],edx            ; +33 = arg5
mov  edx,[ebp+0x1c]
mov  [eax+ecx+0x725],edx            ; +37 = arg6
mov  [eax+ecx+0x729],ebx            ; +41 = ebx
sub  edx,edx
mov  [eax+ecx+0x72d],edx            ; +45 = 0
mov  [eax+ecx+0x731],edx            ; +49 = 0
mov  edx,0xffffffff
mov  [eax+ecx+0x735],edx            ; +53 = -1
mov  edx,[ebp+0x24]
mov  [eax+ecx+0x739],edx            ; +54 = arg9
mov  dword [eax+ecx+0x73d],0x0      ; +57  <- past 57
mov  edx,[ebp+0x28]
mov  [eax+ecx+0x741],edx            ; +61
mov  edx,[ebp+0x2c]
mov  [eax+ecx+0x745],edx            ; +65
mov  dword [eax+ecx+0x749],0xffffffff  ; +69
lea  eax,[eax+ecx+0x714]
```

**This contradicts the 57-byte stride.** The constructor writes up to offset **+69**, which
is 13 bytes past the end of a 57-byte record. So either the stride here is not 57, or these
later writes belong to the next record, or the record is larger and 57 belongs to something
else.

### Arithmetic performed before the store

Immediately before the stores:

```asm
sar  eax,1               ; halve
sar  eax,1               ; halve again
cmp  eax,[ebp+0x1c]
jnl  ...
mov  [ebp+0x1c],eax      ; clamp argument 6 to a quarter

mov  eax,[ebp+0x18]
sub  eax,4
cdq
mov  ecx,0x10
idiv ecx                 ; divide by 16
cmp  eax,ebx
```

So one argument is divided by four and used as a clamp, and another has four subtracted then
is divided by 16. Consistent with pixel coordinates and tile sizes.

## What this does not establish

**The record size for the object array is unresolved.** The `lea` chain says 57 and the
constructor writes to +69. Those cannot both be right for a packed array.

The most likely explanation is that the constructor writes past its own record into a
neighbouring structure field, which would happen if the array element is not 57 bytes and the
chain is computing something else. That has **not** been shown, only suggested.

**No caller of the constructor was found.** A scan for `CALL` targets equal to its entry
returns zero. It must be reached indirectly, or the entry is not where it appears to be. The
114 indirect calls already recorded in [code-analysis.md](code-analysis.md) make indirect
dispatch plausible.

## Method note

The first pass found three fields for this array, then nine, then ten, by changing the
addressing form searched for. The `[reg+disp32]` form and the `[base+index+disp]` SIB form
are different encodings and a scan for one does not find the other. `tools/structmap.js`
searches both, which is why the second run found more.

---

**[Finding functions](function-recovery.md)** **[The text renderer](text-renderer.md)** **[Plan](plan.md)**

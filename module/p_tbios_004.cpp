#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00000c63(X86Cpu& c) {
    X86_TICK(c, 25);
    // 000c63  and byte ptr gs:[ebp + 0x101], 0xdf
    X86_AT(c, 0xc63u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xDFu, 1)); }
    // 000c6b  or byte ptr gs:[ebp + 0x101], dl
    X86_AT(c, 0xc6bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 2), 1)); }
    // 000c72  mov ah, byte ptr gs:[ebp + 0x14]
    X86_AT(c, 0xc72u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u))));
    // 000c76  test ah, ah
    X86_AT(c, 0xc76u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000c78  je 0xc86
    X86_AT(c, 0xc78u);
    if (x86_cc(c, 4)) { goto L_c86; }
    X86_TICK(c, 7);
    // 000c7a  dec ah
    X86_AT(c, 0xc7au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c7c  je 0xc8c
    X86_AT(c, 0xc7cu);
    if (x86_cc(c, 4)) { goto L_c8c; }
    X86_TICK(c, 7);
    // 000c7e  dec ah
    X86_AT(c, 0xc7eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c80  je 0xce0
    X86_AT(c, 0xc80u);
    if (x86_cc(c, 4)) { goto L_ce0; }
    X86_TICK(c, 7);
    // 000c82  dec ah
    X86_AT(c, 0xc82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c84  je 0xc86
    X86_AT(c, 0xc84u);
    if (x86_cc(c, 4)) { goto L_c86; }
L_c86:
    X86_TICK(c, 7);
    // 000c86  jmp 0xe29
    X86_AT(c, 0xc86u);
    goto L_e29;
L_c8c:
    X86_TICK(c, 14);
    // 000c8c  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc8cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000c94  call 0xe29
    X86_AT(c, 0xc94u);
    push32(c, 0xc99u); f_00000e29(c); X86_RET(c, 0xc99u);
    X86_TICK(c, 7);
    // 000c99  call 0xcab
    X86_AT(c, 0xc99u);
    push32(c, 0xc9eu); f_00000cab(c); X86_RET(c, 0xc9eu);
    X86_TICK(c, 14);
    // 000c9e  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc9eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000ca6  call 0xe29
    X86_AT(c, 0xca6u);
    push32(c, 0xcabu); f_00000e29(c); X86_RET(c, 0xcabu);
    X86_TICK(c, 6);
    // 000cab  mov esi, 0xd52
    X86_AT(c, 0xcabu);
    c.r[6] = 0xD52u;
    // 000cb0  sub edi, edi
    X86_AT(c, 0xcb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000cb2  mov ecx, 0x10
    X86_AT(c, 0xcb2u);
    c.r[1] = 0x10u;
L_cb7:
    X86_TICK(c, 79);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
L_ce0:
    X86_TICK(c, 7);
    // 000ce0  call 0xe29
    X86_AT(c, 0xce0u);
    push32(c, 0xce5u); f_00000e29(c); X86_RET(c, 0xce5u);
    X86_TICK(c, 4);
    // 000ce5  sub edi, edi
    X86_AT(c, 0xce5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000ce7  mov ecx, 0x100
    X86_AT(c, 0xce7u);
    c.r[1] = 0x100u;
L_cec:
    X86_TICK(c, 33);
    // 000cec  mov dx, 0xfd90
    X86_AT(c, 0xcecu);
    s16(c, 2, 0xFD90u);
    // 000cf0  mov ax, di
    X86_AT(c, 0xcf0u);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cf3  out dx, al
    X86_AT(c, 0xcf3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cf4  push edi
    X86_AT(c, 0xcf4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000cf5  shld ax, di, 0xb
    X86_AT(c, 0xcf5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0xBu, 2, w); if (w) s16(c, 0, r); }
    // 000cfa  shl di, 0xb
    X86_AT(c, 0xcfau);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 2, w); if (w) s16(c, 7, r); }
    // 000cfe  xor bh, bh
    X86_AT(c, 0xcfeu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d00  test ax, 7
    X86_AT(c, 0xd00u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x7u, 2);
    // 000d04  je 0xd08
    X86_AT(c, 0xd04u);
    if (x86_cc(c, 4)) { goto L_d08; }
    X86_TICK(c, 2);
    // 000d06  not bh
    X86_AT(c, 0xd06u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d08:
    X86_TICK(c, 32);
    // 000d08  shld ax, bx, 5
    X86_AT(c, 0xd08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 000d0d  mov dx, 0xfd96
    X86_AT(c, 0xd0du);
    s16(c, 2, 0xFD96u);
    // 000d11  out dx, al
    X86_AT(c, 0xd11u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d12  shld ax, di, 3
    X86_AT(c, 0xd12u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0x3u, 2, w); if (w) s16(c, 0, r); }
    // 000d17  shl di, 3
    X86_AT(c, 0xd17u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 7, r); }
    // 000d1b  xor bh, bh
    X86_AT(c, 0xd1bu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d1d  test ax, 7
    X86_AT(c, 0xd1du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x7u, 2);
    // 000d21  je 0xd25
    X86_AT(c, 0xd21u);
    if (x86_cc(c, 4)) { goto L_d25; }
    X86_TICK(c, 2);
    // 000d23  not bh
    X86_AT(c, 0xd23u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d25:
    X86_TICK(c, 32);
    // 000d25  shld ax, bx, 5
    X86_AT(c, 0xd25u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 000d2a  mov dx, 0xfd94
    X86_AT(c, 0xd2au);
    s16(c, 2, 0xFD94u);
    // 000d2e  out dx, al
    X86_AT(c, 0xd2eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d2f  shld ax, di, 2
    X86_AT(c, 0xd2fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 000d34  shl di, 2
    X86_AT(c, 0xd34u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 7, r); }
    // 000d38  xor bh, bh
    X86_AT(c, 0xd38u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d3a  test ax, 3
    X86_AT(c, 0xd3au);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x3u, 2);
    // 000d3e  je 0xd42
    X86_AT(c, 0xd3eu);
    if (x86_cc(c, 4)) { goto L_d42; }
    X86_TICK(c, 2);
    // 000d40  not bh
    X86_AT(c, 0xd40u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d42:
    X86_TICK(c, 30);
    // 000d42  shld ax, bx, 6
    X86_AT(c, 0xd42u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x6u, 2, w); if (w) s16(c, 0, r); }
    // 000d47  mov dx, 0xfd92
    X86_AT(c, 0xd47u);
    s16(c, 2, 0xFD92u);
    // 000d4b  out dx, al
    X86_AT(c, 0xd4bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d4c  pop edi
    X86_AT(c, 0xd4cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000d4d  inc edi
    X86_AT(c, 0xd4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000d4e  dec ecx
    X86_AT(c, 0xd4eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000d4f  jne 0xcec
    X86_AT(c, 0xd4fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcecu); goto L_cec; }
    X86_TICK(c, 10);
    // 000d51  ret 
    X86_AT(c, 0xd51u);
    c.eip = pop32(c); return;
L_e29:
    X86_TICK(c, 78);
    // 000e29  mov bx, word ptr gs:[ebp + 0x100]
    X86_AT(c, 0xe29u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u))));
    // 000e31  mov dx, 0x448
    X86_AT(c, 0xe31u);
    s16(c, 2, 0x448u);
    // 000e35  mov al, 0
    X86_AT(c, 0xe35u);
    s8(c, 0, 0x0u);
    // 000e37  out dx, al
    X86_AT(c, 0xe37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc63u, "ran off the end of a function");
}
void f_00000c6b(X86Cpu& c) {
    X86_TICK(c, 18);
    // 000c6b  or byte ptr gs:[ebp + 0x101], dl
    X86_AT(c, 0xc6bu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 2), 1)); }
    // 000c72  mov ah, byte ptr gs:[ebp + 0x14]
    X86_AT(c, 0xc72u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u))));
    // 000c76  test ah, ah
    X86_AT(c, 0xc76u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000c78  je 0xc86
    X86_AT(c, 0xc78u);
    if (x86_cc(c, 4)) { goto L_c86; }
    X86_TICK(c, 7);
    // 000c7a  dec ah
    X86_AT(c, 0xc7au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c7c  je 0xc8c
    X86_AT(c, 0xc7cu);
    if (x86_cc(c, 4)) { goto L_c8c; }
    X86_TICK(c, 7);
    // 000c7e  dec ah
    X86_AT(c, 0xc7eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c80  je 0xce0
    X86_AT(c, 0xc80u);
    if (x86_cc(c, 4)) { goto L_ce0; }
    X86_TICK(c, 7);
    // 000c82  dec ah
    X86_AT(c, 0xc82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c84  je 0xc86
    X86_AT(c, 0xc84u);
    if (x86_cc(c, 4)) { goto L_c86; }
L_c86:
    X86_TICK(c, 7);
    // 000c86  jmp 0xe29
    X86_AT(c, 0xc86u);
    goto L_e29;
L_c8c:
    X86_TICK(c, 14);
    // 000c8c  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc8cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000c94  call 0xe29
    X86_AT(c, 0xc94u);
    push32(c, 0xc99u); f_00000e29(c); X86_RET(c, 0xc99u);
    X86_TICK(c, 7);
    // 000c99  call 0xcab
    X86_AT(c, 0xc99u);
    push32(c, 0xc9eu); f_00000cab(c); X86_RET(c, 0xc9eu);
    X86_TICK(c, 14);
    // 000c9e  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc9eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000ca6  call 0xe29
    X86_AT(c, 0xca6u);
    push32(c, 0xcabu); f_00000e29(c); X86_RET(c, 0xcabu);
    X86_TICK(c, 6);
    // 000cab  mov esi, 0xd52
    X86_AT(c, 0xcabu);
    c.r[6] = 0xD52u;
    // 000cb0  sub edi, edi
    X86_AT(c, 0xcb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000cb2  mov ecx, 0x10
    X86_AT(c, 0xcb2u);
    c.r[1] = 0x10u;
L_cb7:
    X86_TICK(c, 79);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
L_ce0:
    X86_TICK(c, 7);
    // 000ce0  call 0xe29
    X86_AT(c, 0xce0u);
    push32(c, 0xce5u); f_00000e29(c); X86_RET(c, 0xce5u);
    X86_TICK(c, 4);
    // 000ce5  sub edi, edi
    X86_AT(c, 0xce5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000ce7  mov ecx, 0x100
    X86_AT(c, 0xce7u);
    c.r[1] = 0x100u;
L_cec:
    X86_TICK(c, 33);
    // 000cec  mov dx, 0xfd90
    X86_AT(c, 0xcecu);
    s16(c, 2, 0xFD90u);
    // 000cf0  mov ax, di
    X86_AT(c, 0xcf0u);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cf3  out dx, al
    X86_AT(c, 0xcf3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cf4  push edi
    X86_AT(c, 0xcf4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000cf5  shld ax, di, 0xb
    X86_AT(c, 0xcf5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0xBu, 2, w); if (w) s16(c, 0, r); }
    // 000cfa  shl di, 0xb
    X86_AT(c, 0xcfau);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 2, w); if (w) s16(c, 7, r); }
    // 000cfe  xor bh, bh
    X86_AT(c, 0xcfeu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d00  test ax, 7
    X86_AT(c, 0xd00u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x7u, 2);
    // 000d04  je 0xd08
    X86_AT(c, 0xd04u);
    if (x86_cc(c, 4)) { goto L_d08; }
    X86_TICK(c, 2);
    // 000d06  not bh
    X86_AT(c, 0xd06u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d08:
    X86_TICK(c, 32);
    // 000d08  shld ax, bx, 5
    X86_AT(c, 0xd08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 000d0d  mov dx, 0xfd96
    X86_AT(c, 0xd0du);
    s16(c, 2, 0xFD96u);
    // 000d11  out dx, al
    X86_AT(c, 0xd11u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d12  shld ax, di, 3
    X86_AT(c, 0xd12u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0x3u, 2, w); if (w) s16(c, 0, r); }
    // 000d17  shl di, 3
    X86_AT(c, 0xd17u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 7, r); }
    // 000d1b  xor bh, bh
    X86_AT(c, 0xd1bu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d1d  test ax, 7
    X86_AT(c, 0xd1du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x7u, 2);
    // 000d21  je 0xd25
    X86_AT(c, 0xd21u);
    if (x86_cc(c, 4)) { goto L_d25; }
    X86_TICK(c, 2);
    // 000d23  not bh
    X86_AT(c, 0xd23u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d25:
    X86_TICK(c, 32);
    // 000d25  shld ax, bx, 5
    X86_AT(c, 0xd25u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 000d2a  mov dx, 0xfd94
    X86_AT(c, 0xd2au);
    s16(c, 2, 0xFD94u);
    // 000d2e  out dx, al
    X86_AT(c, 0xd2eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d2f  shld ax, di, 2
    X86_AT(c, 0xd2fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 000d34  shl di, 2
    X86_AT(c, 0xd34u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 7, r); }
    // 000d38  xor bh, bh
    X86_AT(c, 0xd38u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d3a  test ax, 3
    X86_AT(c, 0xd3au);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x3u, 2);
    // 000d3e  je 0xd42
    X86_AT(c, 0xd3eu);
    if (x86_cc(c, 4)) { goto L_d42; }
    X86_TICK(c, 2);
    // 000d40  not bh
    X86_AT(c, 0xd40u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d42:
    X86_TICK(c, 30);
    // 000d42  shld ax, bx, 6
    X86_AT(c, 0xd42u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x6u, 2, w); if (w) s16(c, 0, r); }
    // 000d47  mov dx, 0xfd92
    X86_AT(c, 0xd47u);
    s16(c, 2, 0xFD92u);
    // 000d4b  out dx, al
    X86_AT(c, 0xd4bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d4c  pop edi
    X86_AT(c, 0xd4cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000d4d  inc edi
    X86_AT(c, 0xd4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000d4e  dec ecx
    X86_AT(c, 0xd4eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000d4f  jne 0xcec
    X86_AT(c, 0xd4fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcecu); goto L_cec; }
    X86_TICK(c, 10);
    // 000d51  ret 
    X86_AT(c, 0xd51u);
    c.eip = pop32(c); return;
L_e29:
    X86_TICK(c, 78);
    // 000e29  mov bx, word ptr gs:[ebp + 0x100]
    X86_AT(c, 0xe29u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u))));
    // 000e31  mov dx, 0x448
    X86_AT(c, 0xe31u);
    s16(c, 2, 0x448u);
    // 000e35  mov al, 0
    X86_AT(c, 0xe35u);
    s8(c, 0, 0x0u);
    // 000e37  out dx, al
    X86_AT(c, 0xe37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc6bu, "ran off the end of a function");
}
void f_00000c72(X86Cpu& c) {
    X86_TICK(c, 11);
    // 000c72  mov ah, byte ptr gs:[ebp + 0x14]
    X86_AT(c, 0xc72u);
    s8(c, 4, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u))));
    // 000c76  test ah, ah
    X86_AT(c, 0xc76u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000c78  je 0xc86
    X86_AT(c, 0xc78u);
    if (x86_cc(c, 4)) { goto L_c86; }
    X86_TICK(c, 7);
    // 000c7a  dec ah
    X86_AT(c, 0xc7au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c7c  je 0xc8c
    X86_AT(c, 0xc7cu);
    if (x86_cc(c, 4)) { goto L_c8c; }
    X86_TICK(c, 7);
    // 000c7e  dec ah
    X86_AT(c, 0xc7eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c80  je 0xce0
    X86_AT(c, 0xc80u);
    if (x86_cc(c, 4)) { goto L_ce0; }
    X86_TICK(c, 7);
    // 000c82  dec ah
    X86_AT(c, 0xc82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c84  je 0xc86
    X86_AT(c, 0xc84u);
    if (x86_cc(c, 4)) { goto L_c86; }
L_c86:
    X86_TICK(c, 7);
    // 000c86  jmp 0xe29
    X86_AT(c, 0xc86u);
    goto L_e29;
L_c8c:
    X86_TICK(c, 14);
    // 000c8c  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc8cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000c94  call 0xe29
    X86_AT(c, 0xc94u);
    push32(c, 0xc99u); f_00000e29(c); X86_RET(c, 0xc99u);
    X86_TICK(c, 7);
    // 000c99  call 0xcab
    X86_AT(c, 0xc99u);
    push32(c, 0xc9eu); f_00000cab(c); X86_RET(c, 0xc9eu);
    X86_TICK(c, 14);
    // 000c9e  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc9eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000ca6  call 0xe29
    X86_AT(c, 0xca6u);
    push32(c, 0xcabu); f_00000e29(c); X86_RET(c, 0xcabu);
    X86_TICK(c, 6);
    // 000cab  mov esi, 0xd52
    X86_AT(c, 0xcabu);
    c.r[6] = 0xD52u;
    // 000cb0  sub edi, edi
    X86_AT(c, 0xcb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000cb2  mov ecx, 0x10
    X86_AT(c, 0xcb2u);
    c.r[1] = 0x10u;
L_cb7:
    X86_TICK(c, 79);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
L_ce0:
    X86_TICK(c, 7);
    // 000ce0  call 0xe29
    X86_AT(c, 0xce0u);
    push32(c, 0xce5u); f_00000e29(c); X86_RET(c, 0xce5u);
    X86_TICK(c, 4);
    // 000ce5  sub edi, edi
    X86_AT(c, 0xce5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000ce7  mov ecx, 0x100
    X86_AT(c, 0xce7u);
    c.r[1] = 0x100u;
L_cec:
    X86_TICK(c, 33);
    // 000cec  mov dx, 0xfd90
    X86_AT(c, 0xcecu);
    s16(c, 2, 0xFD90u);
    // 000cf0  mov ax, di
    X86_AT(c, 0xcf0u);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cf3  out dx, al
    X86_AT(c, 0xcf3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cf4  push edi
    X86_AT(c, 0xcf4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000cf5  shld ax, di, 0xb
    X86_AT(c, 0xcf5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0xBu, 2, w); if (w) s16(c, 0, r); }
    // 000cfa  shl di, 0xb
    X86_AT(c, 0xcfau);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 2, w); if (w) s16(c, 7, r); }
    // 000cfe  xor bh, bh
    X86_AT(c, 0xcfeu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d00  test ax, 7
    X86_AT(c, 0xd00u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x7u, 2);
    // 000d04  je 0xd08
    X86_AT(c, 0xd04u);
    if (x86_cc(c, 4)) { goto L_d08; }
    X86_TICK(c, 2);
    // 000d06  not bh
    X86_AT(c, 0xd06u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d08:
    X86_TICK(c, 32);
    // 000d08  shld ax, bx, 5
    X86_AT(c, 0xd08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 000d0d  mov dx, 0xfd96
    X86_AT(c, 0xd0du);
    s16(c, 2, 0xFD96u);
    // 000d11  out dx, al
    X86_AT(c, 0xd11u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d12  shld ax, di, 3
    X86_AT(c, 0xd12u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0x3u, 2, w); if (w) s16(c, 0, r); }
    // 000d17  shl di, 3
    X86_AT(c, 0xd17u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 7, r); }
    // 000d1b  xor bh, bh
    X86_AT(c, 0xd1bu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d1d  test ax, 7
    X86_AT(c, 0xd1du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x7u, 2);
    // 000d21  je 0xd25
    X86_AT(c, 0xd21u);
    if (x86_cc(c, 4)) { goto L_d25; }
    X86_TICK(c, 2);
    // 000d23  not bh
    X86_AT(c, 0xd23u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d25:
    X86_TICK(c, 32);
    // 000d25  shld ax, bx, 5
    X86_AT(c, 0xd25u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 000d2a  mov dx, 0xfd94
    X86_AT(c, 0xd2au);
    s16(c, 2, 0xFD94u);
    // 000d2e  out dx, al
    X86_AT(c, 0xd2eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d2f  shld ax, di, 2
    X86_AT(c, 0xd2fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 000d34  shl di, 2
    X86_AT(c, 0xd34u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 7, r); }
    // 000d38  xor bh, bh
    X86_AT(c, 0xd38u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d3a  test ax, 3
    X86_AT(c, 0xd3au);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x3u, 2);
    // 000d3e  je 0xd42
    X86_AT(c, 0xd3eu);
    if (x86_cc(c, 4)) { goto L_d42; }
    X86_TICK(c, 2);
    // 000d40  not bh
    X86_AT(c, 0xd40u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d42:
    X86_TICK(c, 30);
    // 000d42  shld ax, bx, 6
    X86_AT(c, 0xd42u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x6u, 2, w); if (w) s16(c, 0, r); }
    // 000d47  mov dx, 0xfd92
    X86_AT(c, 0xd47u);
    s16(c, 2, 0xFD92u);
    // 000d4b  out dx, al
    X86_AT(c, 0xd4bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d4c  pop edi
    X86_AT(c, 0xd4cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000d4d  inc edi
    X86_AT(c, 0xd4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000d4e  dec ecx
    X86_AT(c, 0xd4eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000d4f  jne 0xcec
    X86_AT(c, 0xd4fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcecu); goto L_cec; }
    X86_TICK(c, 10);
    // 000d51  ret 
    X86_AT(c, 0xd51u);
    c.eip = pop32(c); return;
L_e29:
    X86_TICK(c, 78);
    // 000e29  mov bx, word ptr gs:[ebp + 0x100]
    X86_AT(c, 0xe29u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u))));
    // 000e31  mov dx, 0x448
    X86_AT(c, 0xe31u);
    s16(c, 2, 0x448u);
    // 000e35  mov al, 0
    X86_AT(c, 0xe35u);
    s8(c, 0, 0x0u);
    // 000e37  out dx, al
    X86_AT(c, 0xe37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc72u, "ran off the end of a function");
}
void f_00000c76(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000c76  test ah, ah
    X86_AT(c, 0xc76u);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000c78  je 0xc86
    X86_AT(c, 0xc78u);
    if (x86_cc(c, 4)) { goto L_c86; }
    X86_TICK(c, 7);
    // 000c7a  dec ah
    X86_AT(c, 0xc7au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c7c  je 0xc8c
    X86_AT(c, 0xc7cu);
    if (x86_cc(c, 4)) { goto L_c8c; }
    X86_TICK(c, 7);
    // 000c7e  dec ah
    X86_AT(c, 0xc7eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c80  je 0xce0
    X86_AT(c, 0xc80u);
    if (x86_cc(c, 4)) { goto L_ce0; }
    X86_TICK(c, 7);
    // 000c82  dec ah
    X86_AT(c, 0xc82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c84  je 0xc86
    X86_AT(c, 0xc84u);
    if (x86_cc(c, 4)) { goto L_c86; }
L_c86:
    X86_TICK(c, 7);
    // 000c86  jmp 0xe29
    X86_AT(c, 0xc86u);
    goto L_e29;
L_c8c:
    X86_TICK(c, 14);
    // 000c8c  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc8cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000c94  call 0xe29
    X86_AT(c, 0xc94u);
    push32(c, 0xc99u); f_00000e29(c); X86_RET(c, 0xc99u);
    X86_TICK(c, 7);
    // 000c99  call 0xcab
    X86_AT(c, 0xc99u);
    push32(c, 0xc9eu); f_00000cab(c); X86_RET(c, 0xc9eu);
    X86_TICK(c, 14);
    // 000c9e  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc9eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000ca6  call 0xe29
    X86_AT(c, 0xca6u);
    push32(c, 0xcabu); f_00000e29(c); X86_RET(c, 0xcabu);
    X86_TICK(c, 6);
    // 000cab  mov esi, 0xd52
    X86_AT(c, 0xcabu);
    c.r[6] = 0xD52u;
    // 000cb0  sub edi, edi
    X86_AT(c, 0xcb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000cb2  mov ecx, 0x10
    X86_AT(c, 0xcb2u);
    c.r[1] = 0x10u;
L_cb7:
    X86_TICK(c, 79);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
L_ce0:
    X86_TICK(c, 7);
    // 000ce0  call 0xe29
    X86_AT(c, 0xce0u);
    push32(c, 0xce5u); f_00000e29(c); X86_RET(c, 0xce5u);
    X86_TICK(c, 4);
    // 000ce5  sub edi, edi
    X86_AT(c, 0xce5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000ce7  mov ecx, 0x100
    X86_AT(c, 0xce7u);
    c.r[1] = 0x100u;
L_cec:
    X86_TICK(c, 33);
    // 000cec  mov dx, 0xfd90
    X86_AT(c, 0xcecu);
    s16(c, 2, 0xFD90u);
    // 000cf0  mov ax, di
    X86_AT(c, 0xcf0u);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cf3  out dx, al
    X86_AT(c, 0xcf3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cf4  push edi
    X86_AT(c, 0xcf4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000cf5  shld ax, di, 0xb
    X86_AT(c, 0xcf5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0xBu, 2, w); if (w) s16(c, 0, r); }
    // 000cfa  shl di, 0xb
    X86_AT(c, 0xcfau);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 2, w); if (w) s16(c, 7, r); }
    // 000cfe  xor bh, bh
    X86_AT(c, 0xcfeu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d00  test ax, 7
    X86_AT(c, 0xd00u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x7u, 2);
    // 000d04  je 0xd08
    X86_AT(c, 0xd04u);
    if (x86_cc(c, 4)) { goto L_d08; }
    X86_TICK(c, 2);
    // 000d06  not bh
    X86_AT(c, 0xd06u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d08:
    X86_TICK(c, 32);
    // 000d08  shld ax, bx, 5
    X86_AT(c, 0xd08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 000d0d  mov dx, 0xfd96
    X86_AT(c, 0xd0du);
    s16(c, 2, 0xFD96u);
    // 000d11  out dx, al
    X86_AT(c, 0xd11u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d12  shld ax, di, 3
    X86_AT(c, 0xd12u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0x3u, 2, w); if (w) s16(c, 0, r); }
    // 000d17  shl di, 3
    X86_AT(c, 0xd17u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 7, r); }
    // 000d1b  xor bh, bh
    X86_AT(c, 0xd1bu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d1d  test ax, 7
    X86_AT(c, 0xd1du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x7u, 2);
    // 000d21  je 0xd25
    X86_AT(c, 0xd21u);
    if (x86_cc(c, 4)) { goto L_d25; }
    X86_TICK(c, 2);
    // 000d23  not bh
    X86_AT(c, 0xd23u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d25:
    X86_TICK(c, 32);
    // 000d25  shld ax, bx, 5
    X86_AT(c, 0xd25u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 000d2a  mov dx, 0xfd94
    X86_AT(c, 0xd2au);
    s16(c, 2, 0xFD94u);
    // 000d2e  out dx, al
    X86_AT(c, 0xd2eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d2f  shld ax, di, 2
    X86_AT(c, 0xd2fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 000d34  shl di, 2
    X86_AT(c, 0xd34u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 7, r); }
    // 000d38  xor bh, bh
    X86_AT(c, 0xd38u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d3a  test ax, 3
    X86_AT(c, 0xd3au);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x3u, 2);
    // 000d3e  je 0xd42
    X86_AT(c, 0xd3eu);
    if (x86_cc(c, 4)) { goto L_d42; }
    X86_TICK(c, 2);
    // 000d40  not bh
    X86_AT(c, 0xd40u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d42:
    X86_TICK(c, 30);
    // 000d42  shld ax, bx, 6
    X86_AT(c, 0xd42u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x6u, 2, w); if (w) s16(c, 0, r); }
    // 000d47  mov dx, 0xfd92
    X86_AT(c, 0xd47u);
    s16(c, 2, 0xFD92u);
    // 000d4b  out dx, al
    X86_AT(c, 0xd4bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d4c  pop edi
    X86_AT(c, 0xd4cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000d4d  inc edi
    X86_AT(c, 0xd4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000d4e  dec ecx
    X86_AT(c, 0xd4eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000d4f  jne 0xcec
    X86_AT(c, 0xd4fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcecu); goto L_cec; }
    X86_TICK(c, 10);
    // 000d51  ret 
    X86_AT(c, 0xd51u);
    c.eip = pop32(c); return;
L_e29:
    X86_TICK(c, 78);
    // 000e29  mov bx, word ptr gs:[ebp + 0x100]
    X86_AT(c, 0xe29u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u))));
    // 000e31  mov dx, 0x448
    X86_AT(c, 0xe31u);
    s16(c, 2, 0x448u);
    // 000e35  mov al, 0
    X86_AT(c, 0xe35u);
    s8(c, 0, 0x0u);
    // 000e37  out dx, al
    X86_AT(c, 0xe37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc76u, "ran off the end of a function");
}
void f_00000c78(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000c78  je 0xc86
    X86_AT(c, 0xc78u);
    if (x86_cc(c, 4)) { goto L_c86; }
    X86_TICK(c, 7);
    // 000c7a  dec ah
    X86_AT(c, 0xc7au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c7c  je 0xc8c
    X86_AT(c, 0xc7cu);
    if (x86_cc(c, 4)) { goto L_c8c; }
    X86_TICK(c, 7);
    // 000c7e  dec ah
    X86_AT(c, 0xc7eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c80  je 0xce0
    X86_AT(c, 0xc80u);
    if (x86_cc(c, 4)) { goto L_ce0; }
    X86_TICK(c, 7);
    // 000c82  dec ah
    X86_AT(c, 0xc82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c84  je 0xc86
    X86_AT(c, 0xc84u);
    if (x86_cc(c, 4)) { goto L_c86; }
L_c86:
    X86_TICK(c, 7);
    // 000c86  jmp 0xe29
    X86_AT(c, 0xc86u);
    goto L_e29;
L_c8c:
    X86_TICK(c, 14);
    // 000c8c  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc8cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000c94  call 0xe29
    X86_AT(c, 0xc94u);
    push32(c, 0xc99u); f_00000e29(c); X86_RET(c, 0xc99u);
    X86_TICK(c, 7);
    // 000c99  call 0xcab
    X86_AT(c, 0xc99u);
    push32(c, 0xc9eu); f_00000cab(c); X86_RET(c, 0xc9eu);
    X86_TICK(c, 14);
    // 000c9e  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc9eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000ca6  call 0xe29
    X86_AT(c, 0xca6u);
    push32(c, 0xcabu); f_00000e29(c); X86_RET(c, 0xcabu);
    X86_TICK(c, 6);
    // 000cab  mov esi, 0xd52
    X86_AT(c, 0xcabu);
    c.r[6] = 0xD52u;
    // 000cb0  sub edi, edi
    X86_AT(c, 0xcb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000cb2  mov ecx, 0x10
    X86_AT(c, 0xcb2u);
    c.r[1] = 0x10u;
L_cb7:
    X86_TICK(c, 79);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
L_ce0:
    X86_TICK(c, 7);
    // 000ce0  call 0xe29
    X86_AT(c, 0xce0u);
    push32(c, 0xce5u); f_00000e29(c); X86_RET(c, 0xce5u);
    X86_TICK(c, 4);
    // 000ce5  sub edi, edi
    X86_AT(c, 0xce5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000ce7  mov ecx, 0x100
    X86_AT(c, 0xce7u);
    c.r[1] = 0x100u;
L_cec:
    X86_TICK(c, 33);
    // 000cec  mov dx, 0xfd90
    X86_AT(c, 0xcecu);
    s16(c, 2, 0xFD90u);
    // 000cf0  mov ax, di
    X86_AT(c, 0xcf0u);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cf3  out dx, al
    X86_AT(c, 0xcf3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cf4  push edi
    X86_AT(c, 0xcf4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000cf5  shld ax, di, 0xb
    X86_AT(c, 0xcf5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0xBu, 2, w); if (w) s16(c, 0, r); }
    // 000cfa  shl di, 0xb
    X86_AT(c, 0xcfau);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 2, w); if (w) s16(c, 7, r); }
    // 000cfe  xor bh, bh
    X86_AT(c, 0xcfeu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d00  test ax, 7
    X86_AT(c, 0xd00u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x7u, 2);
    // 000d04  je 0xd08
    X86_AT(c, 0xd04u);
    if (x86_cc(c, 4)) { goto L_d08; }
    X86_TICK(c, 2);
    // 000d06  not bh
    X86_AT(c, 0xd06u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d08:
    X86_TICK(c, 32);
    // 000d08  shld ax, bx, 5
    X86_AT(c, 0xd08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 000d0d  mov dx, 0xfd96
    X86_AT(c, 0xd0du);
    s16(c, 2, 0xFD96u);
    // 000d11  out dx, al
    X86_AT(c, 0xd11u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d12  shld ax, di, 3
    X86_AT(c, 0xd12u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0x3u, 2, w); if (w) s16(c, 0, r); }
    // 000d17  shl di, 3
    X86_AT(c, 0xd17u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 7, r); }
    // 000d1b  xor bh, bh
    X86_AT(c, 0xd1bu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d1d  test ax, 7
    X86_AT(c, 0xd1du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x7u, 2);
    // 000d21  je 0xd25
    X86_AT(c, 0xd21u);
    if (x86_cc(c, 4)) { goto L_d25; }
    X86_TICK(c, 2);
    // 000d23  not bh
    X86_AT(c, 0xd23u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d25:
    X86_TICK(c, 32);
    // 000d25  shld ax, bx, 5
    X86_AT(c, 0xd25u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 000d2a  mov dx, 0xfd94
    X86_AT(c, 0xd2au);
    s16(c, 2, 0xFD94u);
    // 000d2e  out dx, al
    X86_AT(c, 0xd2eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d2f  shld ax, di, 2
    X86_AT(c, 0xd2fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 000d34  shl di, 2
    X86_AT(c, 0xd34u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 7, r); }
    // 000d38  xor bh, bh
    X86_AT(c, 0xd38u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d3a  test ax, 3
    X86_AT(c, 0xd3au);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x3u, 2);
    // 000d3e  je 0xd42
    X86_AT(c, 0xd3eu);
    if (x86_cc(c, 4)) { goto L_d42; }
    X86_TICK(c, 2);
    // 000d40  not bh
    X86_AT(c, 0xd40u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d42:
    X86_TICK(c, 30);
    // 000d42  shld ax, bx, 6
    X86_AT(c, 0xd42u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x6u, 2, w); if (w) s16(c, 0, r); }
    // 000d47  mov dx, 0xfd92
    X86_AT(c, 0xd47u);
    s16(c, 2, 0xFD92u);
    // 000d4b  out dx, al
    X86_AT(c, 0xd4bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d4c  pop edi
    X86_AT(c, 0xd4cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000d4d  inc edi
    X86_AT(c, 0xd4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000d4e  dec ecx
    X86_AT(c, 0xd4eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000d4f  jne 0xcec
    X86_AT(c, 0xd4fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcecu); goto L_cec; }
    X86_TICK(c, 10);
    // 000d51  ret 
    X86_AT(c, 0xd51u);
    c.eip = pop32(c); return;
L_e29:
    X86_TICK(c, 78);
    // 000e29  mov bx, word ptr gs:[ebp + 0x100]
    X86_AT(c, 0xe29u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u))));
    // 000e31  mov dx, 0x448
    X86_AT(c, 0xe31u);
    s16(c, 2, 0x448u);
    // 000e35  mov al, 0
    X86_AT(c, 0xe35u);
    s8(c, 0, 0x0u);
    // 000e37  out dx, al
    X86_AT(c, 0xe37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc78u, "ran off the end of a function");
}
void f_00000c7a(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000c7a  dec ah
    X86_AT(c, 0xc7au);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c7c  je 0xc8c
    X86_AT(c, 0xc7cu);
    if (x86_cc(c, 4)) { goto L_c8c; }
    X86_TICK(c, 7);
    // 000c7e  dec ah
    X86_AT(c, 0xc7eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c80  je 0xce0
    X86_AT(c, 0xc80u);
    if (x86_cc(c, 4)) { goto L_ce0; }
    X86_TICK(c, 7);
    // 000c82  dec ah
    X86_AT(c, 0xc82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c84  je 0xc86
    X86_AT(c, 0xc84u);
    if (x86_cc(c, 4)) { goto L_c86; }
L_c86:
    X86_TICK(c, 7);
    // 000c86  jmp 0xe29
    X86_AT(c, 0xc86u);
    goto L_e29;
L_c8c:
    X86_TICK(c, 14);
    // 000c8c  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc8cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000c94  call 0xe29
    X86_AT(c, 0xc94u);
    push32(c, 0xc99u); f_00000e29(c); X86_RET(c, 0xc99u);
    X86_TICK(c, 7);
    // 000c99  call 0xcab
    X86_AT(c, 0xc99u);
    push32(c, 0xc9eu); f_00000cab(c); X86_RET(c, 0xc9eu);
    X86_TICK(c, 14);
    // 000c9e  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc9eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000ca6  call 0xe29
    X86_AT(c, 0xca6u);
    push32(c, 0xcabu); f_00000e29(c); X86_RET(c, 0xcabu);
    X86_TICK(c, 6);
    // 000cab  mov esi, 0xd52
    X86_AT(c, 0xcabu);
    c.r[6] = 0xD52u;
    // 000cb0  sub edi, edi
    X86_AT(c, 0xcb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000cb2  mov ecx, 0x10
    X86_AT(c, 0xcb2u);
    c.r[1] = 0x10u;
L_cb7:
    X86_TICK(c, 79);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
L_ce0:
    X86_TICK(c, 7);
    // 000ce0  call 0xe29
    X86_AT(c, 0xce0u);
    push32(c, 0xce5u); f_00000e29(c); X86_RET(c, 0xce5u);
    X86_TICK(c, 4);
    // 000ce5  sub edi, edi
    X86_AT(c, 0xce5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000ce7  mov ecx, 0x100
    X86_AT(c, 0xce7u);
    c.r[1] = 0x100u;
L_cec:
    X86_TICK(c, 33);
    // 000cec  mov dx, 0xfd90
    X86_AT(c, 0xcecu);
    s16(c, 2, 0xFD90u);
    // 000cf0  mov ax, di
    X86_AT(c, 0xcf0u);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cf3  out dx, al
    X86_AT(c, 0xcf3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cf4  push edi
    X86_AT(c, 0xcf4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000cf5  shld ax, di, 0xb
    X86_AT(c, 0xcf5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0xBu, 2, w); if (w) s16(c, 0, r); }
    // 000cfa  shl di, 0xb
    X86_AT(c, 0xcfau);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 2, w); if (w) s16(c, 7, r); }
    // 000cfe  xor bh, bh
    X86_AT(c, 0xcfeu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d00  test ax, 7
    X86_AT(c, 0xd00u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x7u, 2);
    // 000d04  je 0xd08
    X86_AT(c, 0xd04u);
    if (x86_cc(c, 4)) { goto L_d08; }
    X86_TICK(c, 2);
    // 000d06  not bh
    X86_AT(c, 0xd06u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d08:
    X86_TICK(c, 32);
    // 000d08  shld ax, bx, 5
    X86_AT(c, 0xd08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 000d0d  mov dx, 0xfd96
    X86_AT(c, 0xd0du);
    s16(c, 2, 0xFD96u);
    // 000d11  out dx, al
    X86_AT(c, 0xd11u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d12  shld ax, di, 3
    X86_AT(c, 0xd12u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0x3u, 2, w); if (w) s16(c, 0, r); }
    // 000d17  shl di, 3
    X86_AT(c, 0xd17u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 7, r); }
    // 000d1b  xor bh, bh
    X86_AT(c, 0xd1bu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d1d  test ax, 7
    X86_AT(c, 0xd1du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x7u, 2);
    // 000d21  je 0xd25
    X86_AT(c, 0xd21u);
    if (x86_cc(c, 4)) { goto L_d25; }
    X86_TICK(c, 2);
    // 000d23  not bh
    X86_AT(c, 0xd23u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d25:
    X86_TICK(c, 32);
    // 000d25  shld ax, bx, 5
    X86_AT(c, 0xd25u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 000d2a  mov dx, 0xfd94
    X86_AT(c, 0xd2au);
    s16(c, 2, 0xFD94u);
    // 000d2e  out dx, al
    X86_AT(c, 0xd2eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d2f  shld ax, di, 2
    X86_AT(c, 0xd2fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 000d34  shl di, 2
    X86_AT(c, 0xd34u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 7, r); }
    // 000d38  xor bh, bh
    X86_AT(c, 0xd38u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d3a  test ax, 3
    X86_AT(c, 0xd3au);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x3u, 2);
    // 000d3e  je 0xd42
    X86_AT(c, 0xd3eu);
    if (x86_cc(c, 4)) { goto L_d42; }
    X86_TICK(c, 2);
    // 000d40  not bh
    X86_AT(c, 0xd40u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d42:
    X86_TICK(c, 30);
    // 000d42  shld ax, bx, 6
    X86_AT(c, 0xd42u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x6u, 2, w); if (w) s16(c, 0, r); }
    // 000d47  mov dx, 0xfd92
    X86_AT(c, 0xd47u);
    s16(c, 2, 0xFD92u);
    // 000d4b  out dx, al
    X86_AT(c, 0xd4bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d4c  pop edi
    X86_AT(c, 0xd4cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000d4d  inc edi
    X86_AT(c, 0xd4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000d4e  dec ecx
    X86_AT(c, 0xd4eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000d4f  jne 0xcec
    X86_AT(c, 0xd4fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcecu); goto L_cec; }
    X86_TICK(c, 10);
    // 000d51  ret 
    X86_AT(c, 0xd51u);
    c.eip = pop32(c); return;
L_e29:
    X86_TICK(c, 78);
    // 000e29  mov bx, word ptr gs:[ebp + 0x100]
    X86_AT(c, 0xe29u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u))));
    // 000e31  mov dx, 0x448
    X86_AT(c, 0xe31u);
    s16(c, 2, 0x448u);
    // 000e35  mov al, 0
    X86_AT(c, 0xe35u);
    s8(c, 0, 0x0u);
    // 000e37  out dx, al
    X86_AT(c, 0xe37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7au, "ran off the end of a function");
}
void f_00000c7c(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000c7c  je 0xc8c
    X86_AT(c, 0xc7cu);
    if (x86_cc(c, 4)) { goto L_c8c; }
    X86_TICK(c, 7);
    // 000c7e  dec ah
    X86_AT(c, 0xc7eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c80  je 0xce0
    X86_AT(c, 0xc80u);
    if (x86_cc(c, 4)) { goto L_ce0; }
    X86_TICK(c, 7);
    // 000c82  dec ah
    X86_AT(c, 0xc82u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_dec(c, v, 1)); }
    // 000c84  je 0xc86
    X86_AT(c, 0xc84u);
    if (x86_cc(c, 4)) { goto L_c86; }
L_c86:
    X86_TICK(c, 7);
    // 000c86  jmp 0xe29
    X86_AT(c, 0xc86u);
    goto L_e29;
L_c8c:
    X86_TICK(c, 14);
    // 000c8c  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc8cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000c94  call 0xe29
    X86_AT(c, 0xc94u);
    push32(c, 0xc99u); f_00000e29(c); X86_RET(c, 0xc99u);
    X86_TICK(c, 7);
    // 000c99  call 0xcab
    X86_AT(c, 0xc99u);
    push32(c, 0xc9eu); f_00000cab(c); X86_RET(c, 0xc9eu);
    X86_TICK(c, 14);
    // 000c9e  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc9eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000ca6  call 0xe29
    X86_AT(c, 0xca6u);
    push32(c, 0xcabu); f_00000e29(c); X86_RET(c, 0xcabu);
    X86_TICK(c, 6);
    // 000cab  mov esi, 0xd52
    X86_AT(c, 0xcabu);
    c.r[6] = 0xD52u;
    // 000cb0  sub edi, edi
    X86_AT(c, 0xcb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000cb2  mov ecx, 0x10
    X86_AT(c, 0xcb2u);
    c.r[1] = 0x10u;
L_cb7:
    X86_TICK(c, 79);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
L_ce0:
    X86_TICK(c, 7);
    // 000ce0  call 0xe29
    X86_AT(c, 0xce0u);
    push32(c, 0xce5u); f_00000e29(c); X86_RET(c, 0xce5u);
    X86_TICK(c, 4);
    // 000ce5  sub edi, edi
    X86_AT(c, 0xce5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000ce7  mov ecx, 0x100
    X86_AT(c, 0xce7u);
    c.r[1] = 0x100u;
L_cec:
    X86_TICK(c, 33);
    // 000cec  mov dx, 0xfd90
    X86_AT(c, 0xcecu);
    s16(c, 2, 0xFD90u);
    // 000cf0  mov ax, di
    X86_AT(c, 0xcf0u);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cf3  out dx, al
    X86_AT(c, 0xcf3u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cf4  push edi
    X86_AT(c, 0xcf4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 000cf5  shld ax, di, 0xb
    X86_AT(c, 0xcf5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0xBu, 2, w); if (w) s16(c, 0, r); }
    // 000cfa  shl di, 0xb
    X86_AT(c, 0xcfau);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 2, w); if (w) s16(c, 7, r); }
    // 000cfe  xor bh, bh
    X86_AT(c, 0xcfeu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d00  test ax, 7
    X86_AT(c, 0xd00u);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x7u, 2);
    // 000d04  je 0xd08
    X86_AT(c, 0xd04u);
    if (x86_cc(c, 4)) { goto L_d08; }
    X86_TICK(c, 2);
    // 000d06  not bh
    X86_AT(c, 0xd06u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d08:
    X86_TICK(c, 32);
    // 000d08  shld ax, bx, 5
    X86_AT(c, 0xd08u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 000d0d  mov dx, 0xfd96
    X86_AT(c, 0xd0du);
    s16(c, 2, 0xFD96u);
    // 000d11  out dx, al
    X86_AT(c, 0xd11u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d12  shld ax, di, 3
    X86_AT(c, 0xd12u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0x3u, 2, w); if (w) s16(c, 0, r); }
    // 000d17  shl di, 3
    X86_AT(c, 0xd17u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 7, r); }
    // 000d1b  xor bh, bh
    X86_AT(c, 0xd1bu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d1d  test ax, 7
    X86_AT(c, 0xd1du);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x7u, 2);
    // 000d21  je 0xd25
    X86_AT(c, 0xd21u);
    if (x86_cc(c, 4)) { goto L_d25; }
    X86_TICK(c, 2);
    // 000d23  not bh
    X86_AT(c, 0xd23u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d25:
    X86_TICK(c, 32);
    // 000d25  shld ax, bx, 5
    X86_AT(c, 0xd25u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x5u, 2, w); if (w) s16(c, 0, r); }
    // 000d2a  mov dx, 0xfd94
    X86_AT(c, 0xd2au);
    s16(c, 2, 0xFD94u);
    // 000d2e  out dx, al
    X86_AT(c, 0xd2eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d2f  shld ax, di, 2
    X86_AT(c, 0xd2fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[7] & 0xFFFFu), 0x2u, 2, w); if (w) s16(c, 0, r); }
    // 000d34  shl di, 2
    X86_AT(c, 0xd34u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 2, w); if (w) s16(c, 7, r); }
    // 000d38  xor bh, bh
    X86_AT(c, 0xd38u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000d3a  test ax, 3
    X86_AT(c, 0xd3au);
    (void)x86_logic(c, (c.r[0] & 0xFFFFu) & 0x3u, 2);
    // 000d3e  je 0xd42
    X86_AT(c, 0xd3eu);
    if (x86_cc(c, 4)) { goto L_d42; }
    X86_TICK(c, 2);
    // 000d40  not bh
    X86_AT(c, 0xd40u);
    { uint32_t v = g8(c, 7); s8(c, 7, ~v & 0xFFu); }
L_d42:
    X86_TICK(c, 30);
    // 000d42  shld ax, bx, 6
    X86_AT(c, 0xd42u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_double(c, true, v, (c.r[3] & 0xFFFFu), 0x6u, 2, w); if (w) s16(c, 0, r); }
    // 000d47  mov dx, 0xfd92
    X86_AT(c, 0xd47u);
    s16(c, 2, 0xFD92u);
    // 000d4b  out dx, al
    X86_AT(c, 0xd4bu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000d4c  pop edi
    X86_AT(c, 0xd4cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 000d4d  inc edi
    X86_AT(c, 0xd4du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000d4e  dec ecx
    X86_AT(c, 0xd4eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000d4f  jne 0xcec
    X86_AT(c, 0xd4fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcecu); goto L_cec; }
    X86_TICK(c, 10);
    // 000d51  ret 
    X86_AT(c, 0xd51u);
    c.eip = pop32(c); return;
L_e29:
    X86_TICK(c, 78);
    // 000e29  mov bx, word ptr gs:[ebp + 0x100]
    X86_AT(c, 0xe29u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u))));
    // 000e31  mov dx, 0x448
    X86_AT(c, 0xe31u);
    s16(c, 2, 0x448u);
    // 000e35  mov al, 0
    X86_AT(c, 0xe35u);
    s8(c, 0, 0x0u);
    // 000e37  out dx, al
    X86_AT(c, 0xe37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7cu, "ran off the end of a function");
}
void f_00000c8c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 000c8c  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc8cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000c94  call 0xe29
    X86_AT(c, 0xc94u);
    push32(c, 0xc99u); f_00000e29(c); X86_RET(c, 0xc99u);
    X86_TICK(c, 7);
    // 000c99  call 0xcab
    X86_AT(c, 0xc99u);
    push32(c, 0xc9eu); f_00000cab(c); X86_RET(c, 0xc9eu);
    X86_TICK(c, 14);
    // 000c9e  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc9eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000ca6  call 0xe29
    X86_AT(c, 0xca6u);
    push32(c, 0xcabu); f_00000e29(c); X86_RET(c, 0xcabu);
    X86_TICK(c, 6);
    // 000cab  mov esi, 0xd52
    X86_AT(c, 0xcabu);
    c.r[6] = 0xD52u;
    // 000cb0  sub edi, edi
    X86_AT(c, 0xcb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000cb2  mov ecx, 0x10
    X86_AT(c, 0xcb2u);
    c.r[1] = 0x10u;
L_cb7:
    X86_TICK(c, 79);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8cu, "ran off the end of a function");
}
void f_00000c94(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000c94  call 0xe29
    X86_AT(c, 0xc94u);
    push32(c, 0xc99u); f_00000e29(c); X86_RET(c, 0xc99u);
    X86_TICK(c, 7);
    // 000c99  call 0xcab
    X86_AT(c, 0xc99u);
    push32(c, 0xc9eu); f_00000cab(c); X86_RET(c, 0xc9eu);
    X86_TICK(c, 14);
    // 000c9e  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc9eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000ca6  call 0xe29
    X86_AT(c, 0xca6u);
    push32(c, 0xcabu); f_00000e29(c); X86_RET(c, 0xcabu);
    X86_TICK(c, 6);
    // 000cab  mov esi, 0xd52
    X86_AT(c, 0xcabu);
    c.r[6] = 0xD52u;
    // 000cb0  sub edi, edi
    X86_AT(c, 0xcb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000cb2  mov ecx, 0x10
    X86_AT(c, 0xcb2u);
    c.r[1] = 0x10u;
L_cb7:
    X86_TICK(c, 79);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc94u, "ran off the end of a function");
}
void f_00000c99(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000c99  call 0xcab
    X86_AT(c, 0xc99u);
    push32(c, 0xc9eu); f_00000cab(c); X86_RET(c, 0xc9eu);
    X86_TICK(c, 14);
    // 000c9e  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc9eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000ca6  call 0xe29
    X86_AT(c, 0xca6u);
    push32(c, 0xcabu); f_00000e29(c); X86_RET(c, 0xcabu);
    X86_TICK(c, 6);
    // 000cab  mov esi, 0xd52
    X86_AT(c, 0xcabu);
    c.r[6] = 0xD52u;
    // 000cb0  sub edi, edi
    X86_AT(c, 0xcb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000cb2  mov ecx, 0x10
    X86_AT(c, 0xcb2u);
    c.r[1] = 0x10u;
L_cb7:
    X86_TICK(c, 79);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc99u, "ran off the end of a function");
}
void f_00000c9e(X86Cpu& c) {
    X86_TICK(c, 14);
    // 000c9e  xor byte ptr gs:[ebp + 0x101], 0x20
    X86_AT(c, 0xc9eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x101u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x20u, 1)); }
    // 000ca6  call 0xe29
    X86_AT(c, 0xca6u);
    push32(c, 0xcabu); f_00000e29(c); X86_RET(c, 0xcabu);
    X86_TICK(c, 6);
    // 000cab  mov esi, 0xd52
    X86_AT(c, 0xcabu);
    c.r[6] = 0xD52u;
    // 000cb0  sub edi, edi
    X86_AT(c, 0xcb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000cb2  mov ecx, 0x10
    X86_AT(c, 0xcb2u);
    c.r[1] = 0x10u;
L_cb7:
    X86_TICK(c, 79);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9eu, "ran off the end of a function");
}
void f_00000ca6(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000ca6  call 0xe29
    X86_AT(c, 0xca6u);
    push32(c, 0xcabu); f_00000e29(c); X86_RET(c, 0xcabu);
    X86_TICK(c, 6);
    // 000cab  mov esi, 0xd52
    X86_AT(c, 0xcabu);
    c.r[6] = 0xD52u;
    // 000cb0  sub edi, edi
    X86_AT(c, 0xcb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000cb2  mov ecx, 0x10
    X86_AT(c, 0xcb2u);
    c.r[1] = 0x10u;
L_cb7:
    X86_TICK(c, 79);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xca6u, "ran off the end of a function");
}
void f_00000cab(X86Cpu& c) {
    X86_TICK(c, 6);
    // 000cab  mov esi, 0xd52
    X86_AT(c, 0xcabu);
    c.r[6] = 0xD52u;
    // 000cb0  sub edi, edi
    X86_AT(c, 0xcb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000cb2  mov ecx, 0x10
    X86_AT(c, 0xcb2u);
    c.r[1] = 0x10u;
L_cb7:
    X86_TICK(c, 79);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcabu, "ran off the end of a function");
}
void f_00000cb0(X86Cpu& c) {
    X86_TICK(c, 4);
    // 000cb0  sub edi, edi
    X86_AT(c, 0xcb0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 000cb2  mov ecx, 0x10
    X86_AT(c, 0xcb2u);
    c.r[1] = 0x10u;
L_cb7:
    X86_TICK(c, 79);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb0u, "ran off the end of a function");
}
void f_00000cb2(X86Cpu& c) {
    X86_TICK(c, 2);
    // 000cb2  mov ecx, 0x10
    X86_AT(c, 0xcb2u);
    c.r[1] = 0x10u;
L_cb7:
    X86_TICK(c, 79);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb2u, "ran off the end of a function");
}
void f_00000cb7(X86Cpu& c) {
L_cb7:
    X86_TICK(c, 79);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcb7u, "ran off the end of a function");
}
void f_00000cbb(X86Cpu& c) {
    goto L_cbb;
L_cb7:
    X86_TICK(c, 2);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
L_cbb:
    X86_TICK(c, 77);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcbbu, "ran off the end of a function");
}
void f_00000cbe(X86Cpu& c) {
    goto L_cbe;
L_cb7:
    X86_TICK(c, 4);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
L_cbe:
    X86_TICK(c, 75);
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcbeu, "ran off the end of a function");
}
void f_00000cbf(X86Cpu& c) {
    goto L_cbf;
L_cb7:
    X86_TICK(c, 16);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_cbf:
    X86_TICK(c, 63);
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcbfu, "ran off the end of a function");
}
void f_00000cc2(X86Cpu& c) {
    goto L_cc2;
L_cb7:
    X86_TICK(c, 20);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
L_cc2:
    X86_TICK(c, 59);
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc2u, "ran off the end of a function");
}
void f_00000cc6(X86Cpu& c) {
    goto L_cc6;
L_cb7:
    X86_TICK(c, 22);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
L_cc6:
    X86_TICK(c, 57);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc6u, "ran off the end of a function");
}
void f_00000cc7(X86Cpu& c) {
    goto L_cc7;
L_cb7:
    X86_TICK(c, 34);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_cc7:
    X86_TICK(c, 45);
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcc7u, "ran off the end of a function");
}
void f_00000cca(X86Cpu& c) {
    goto L_cca;
L_cb7:
    X86_TICK(c, 37);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
L_cca:
    X86_TICK(c, 42);
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xccau, "ran off the end of a function");
}
void f_00000cce(X86Cpu& c) {
    goto L_cce;
L_cb7:
    X86_TICK(c, 39);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
L_cce:
    X86_TICK(c, 40);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcceu, "ran off the end of a function");
}
void f_00000ccf(X86Cpu& c) {
    goto L_ccf;
L_cb7:
    X86_TICK(c, 51);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_ccf:
    X86_TICK(c, 28);
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xccfu, "ran off the end of a function");
}
void f_00000cd2(X86Cpu& c) {
    goto L_cd2;
L_cb7:
    X86_TICK(c, 54);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
L_cd2:
    X86_TICK(c, 25);
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd2u, "ran off the end of a function");
}
void f_00000cd6(X86Cpu& c) {
    goto L_cd6;
L_cb7:
    X86_TICK(c, 56);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
L_cd6:
    X86_TICK(c, 23);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd6u, "ran off the end of a function");
}
void f_00000cd7(X86Cpu& c) {
    goto L_cd7;
L_cb7:
    X86_TICK(c, 68);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_cd7:
    X86_TICK(c, 11);
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcd7u, "ran off the end of a function");
}
void f_00000cda(X86Cpu& c) {
    goto L_cda;
L_cb7:
    X86_TICK(c, 70);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_cda:
    X86_TICK(c, 9);
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdau, "ran off the end of a function");
}
void f_00000cdb(X86Cpu& c) {
    goto L_cdb;
L_cb7:
    X86_TICK(c, 72);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_cdb:
    X86_TICK(c, 7);
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdbu, "ran off the end of a function");
}
void f_00000cdc(X86Cpu& c) {
    goto L_cdc;
L_cb7:
    X86_TICK(c, 74);
    // 000cb7  mov dx, 0xfd90
    X86_AT(c, 0xcb7u);
    s16(c, 2, 0xFD90u);
    // 000cbb  mov ax, di
    X86_AT(c, 0xcbbu);
    s16(c, 0, (c.r[7] & 0xFFFFu));
    // 000cbe  out dx, al
    X86_AT(c, 0xcbeu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cbf  mov eax, dword ptr cs:[esi]
    X86_AT(c, 0xcbfu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[6])));
    // 000cc2  mov dx, 0xfd92
    X86_AT(c, 0xcc2u);
    s16(c, 2, 0xFD92u);
    // 000cc6  out dx, al
    X86_AT(c, 0xcc6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cc7  shr eax, 8
    X86_AT(c, 0xcc7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cca  mov dx, 0xfd94
    X86_AT(c, 0xccau);
    s16(c, 2, 0xFD94u);
    // 000cce  out dx, al
    X86_AT(c, 0xcceu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ccf  shr eax, 8
    X86_AT(c, 0xccfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000cd2  mov dx, 0xfd96
    X86_AT(c, 0xcd2u);
    s16(c, 2, 0xFD96u);
    // 000cd6  out dx, al
    X86_AT(c, 0xcd6u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000cd7  add esi, 4
    X86_AT(c, 0xcd7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000cda  inc edi
    X86_AT(c, 0xcdau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 000cdb  dec ecx
    X86_AT(c, 0xcdbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_cdc:
    X86_TICK(c, 5);
    // 000cdc  jne 0xcb7
    X86_AT(c, 0xcdcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xcb7u); goto L_cb7; }
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdcu, "ran off the end of a function");
}
void f_00000cde(X86Cpu& c) {
    X86_TICK(c, 10);
    // 000cde  ret 
    X86_AT(c, 0xcdeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xcdeu, "ran off the end of a function");
}
void f_00000d94(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000d94  call 0xda0
    X86_AT(c, 0xd94u);
    push32(c, 0xd99u); f_00000da0(c); X86_RET(c, 0xd99u);
    X86_TICK(c, 12);
    // 000d99  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0xd99u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 000d9d  ret 
    X86_AT(c, 0xd9du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd94u, "ran off the end of a function");
}
void f_00000d99(X86Cpu& c) {
    X86_TICK(c, 12);
    // 000d99  mov byte ptr [esp + 0x21], ah
    X86_AT(c, 0xd99u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), g8(c, 4));
    // 000d9d  ret 
    X86_AT(c, 0xd9du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd99u, "ran off the end of a function");
}
void f_00000d9d(X86Cpu& c) {
    X86_TICK(c, 10);
    // 000d9d  ret 
    X86_AT(c, 0xd9du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd9du, "ran off the end of a function");
}
void f_00000da0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000da0  cmp al, 1
    X86_AT(c, 0xda0u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 000da2  ja 0xdd0
    X86_AT(c, 0xda2u);
    if (x86_cc(c, 7)) { goto L_dd0; }
    X86_TICK(c, 14);
    // 000da4  mov ecx, 3
    X86_AT(c, 0xda4u);
    c.r[1] = 0x3u;
    // 000da9  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xda9u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000dae  jb 0xdb2
    X86_AT(c, 0xdaeu);
    if (x86_cc(c, 2)) { goto L_db2; }
    X86_TICK(c, 2);
    // 000db0  mov cl, 1
    X86_AT(c, 0xdb0u);
    s8(c, 1, 0x1u);
L_db2:
    X86_TICK(c, 7);
    // 000db2  cmp edx, ecx
    X86_AT(c, 0xdb2u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 000db4  ja 0xdd0
    X86_AT(c, 0xdb4u);
    if (x86_cc(c, 7)) { goto L_dd0; }
    X86_TICK(c, 11);
    // 000db6  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0xdb6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 000dba  mov dword ptr gs:[ebp + 0x38], edx
    X86_AT(c, 0xdbau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x38u)), c.r[2]);
    // 000dbe  call 0x17d8
    X86_AT(c, 0xdbeu);
    push32(c, 0xdc3u); f_000017d8(c); X86_RET(c, 0xdc3u);
    X86_TICK(c, 7);
    // 000dc3  call 0xe10
    X86_AT(c, 0xdc3u);
    push32(c, 0xdc8u); f_00000e10(c); X86_RET(c, 0xdc8u);
    X86_TICK(c, 7);
    // 000dc8  call 0xe50
    X86_AT(c, 0xdc8u);
    push32(c, 0xdcdu); f_00000e50(c); X86_RET(c, 0xdcdu);
    X86_TICK(c, 12);
    // 000dcd  sub ah, ah
    X86_AT(c, 0xdcdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 000dcf  ret 
    X86_AT(c, 0xdcfu);
    c.eip = pop32(c); return;
L_dd0:
    X86_TICK(c, 12);
    // 000dd0  mov ah, 0xff
    X86_AT(c, 0xdd0u);
    s8(c, 4, 0xFFu);
    // 000dd2  ret 
    X86_AT(c, 0xdd2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xda0u, "ran off the end of a function");
}
void f_00000da2(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000da2  ja 0xdd0
    X86_AT(c, 0xda2u);
    if (x86_cc(c, 7)) { goto L_dd0; }
    X86_TICK(c, 14);
    // 000da4  mov ecx, 3
    X86_AT(c, 0xda4u);
    c.r[1] = 0x3u;
    // 000da9  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xda9u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000dae  jb 0xdb2
    X86_AT(c, 0xdaeu);
    if (x86_cc(c, 2)) { goto L_db2; }
    X86_TICK(c, 2);
    // 000db0  mov cl, 1
    X86_AT(c, 0xdb0u);
    s8(c, 1, 0x1u);
L_db2:
    X86_TICK(c, 7);
    // 000db2  cmp edx, ecx
    X86_AT(c, 0xdb2u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 000db4  ja 0xdd0
    X86_AT(c, 0xdb4u);
    if (x86_cc(c, 7)) { goto L_dd0; }
    X86_TICK(c, 11);
    // 000db6  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0xdb6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 000dba  mov dword ptr gs:[ebp + 0x38], edx
    X86_AT(c, 0xdbau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x38u)), c.r[2]);
    // 000dbe  call 0x17d8
    X86_AT(c, 0xdbeu);
    push32(c, 0xdc3u); f_000017d8(c); X86_RET(c, 0xdc3u);
    X86_TICK(c, 7);
    // 000dc3  call 0xe10
    X86_AT(c, 0xdc3u);
    push32(c, 0xdc8u); f_00000e10(c); X86_RET(c, 0xdc8u);
    X86_TICK(c, 7);
    // 000dc8  call 0xe50
    X86_AT(c, 0xdc8u);
    push32(c, 0xdcdu); f_00000e50(c); X86_RET(c, 0xdcdu);
    X86_TICK(c, 12);
    // 000dcd  sub ah, ah
    X86_AT(c, 0xdcdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 000dcf  ret 
    X86_AT(c, 0xdcfu);
    c.eip = pop32(c); return;
L_dd0:
    X86_TICK(c, 12);
    // 000dd0  mov ah, 0xff
    X86_AT(c, 0xdd0u);
    s8(c, 4, 0xFFu);
    // 000dd2  ret 
    X86_AT(c, 0xdd2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xda2u, "ran off the end of a function");
}
void f_00000da4(X86Cpu& c) {
    X86_TICK(c, 14);
    // 000da4  mov ecx, 3
    X86_AT(c, 0xda4u);
    c.r[1] = 0x3u;
    // 000da9  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xda9u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000dae  jb 0xdb2
    X86_AT(c, 0xdaeu);
    if (x86_cc(c, 2)) { goto L_db2; }
    X86_TICK(c, 2);
    // 000db0  mov cl, 1
    X86_AT(c, 0xdb0u);
    s8(c, 1, 0x1u);
L_db2:
    X86_TICK(c, 7);
    // 000db2  cmp edx, ecx
    X86_AT(c, 0xdb2u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 000db4  ja 0xdd0
    X86_AT(c, 0xdb4u);
    if (x86_cc(c, 7)) { goto L_dd0; }
    X86_TICK(c, 11);
    // 000db6  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0xdb6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 000dba  mov dword ptr gs:[ebp + 0x38], edx
    X86_AT(c, 0xdbau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x38u)), c.r[2]);
    // 000dbe  call 0x17d8
    X86_AT(c, 0xdbeu);
    push32(c, 0xdc3u); f_000017d8(c); X86_RET(c, 0xdc3u);
    X86_TICK(c, 7);
    // 000dc3  call 0xe10
    X86_AT(c, 0xdc3u);
    push32(c, 0xdc8u); f_00000e10(c); X86_RET(c, 0xdc8u);
    X86_TICK(c, 7);
    // 000dc8  call 0xe50
    X86_AT(c, 0xdc8u);
    push32(c, 0xdcdu); f_00000e50(c); X86_RET(c, 0xdcdu);
    X86_TICK(c, 12);
    // 000dcd  sub ah, ah
    X86_AT(c, 0xdcdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 000dcf  ret 
    X86_AT(c, 0xdcfu);
    c.eip = pop32(c); return;
L_dd0:
    X86_TICK(c, 12);
    // 000dd0  mov ah, 0xff
    X86_AT(c, 0xdd0u);
    s8(c, 4, 0xFFu);
    // 000dd2  ret 
    X86_AT(c, 0xdd2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xda4u, "ran off the end of a function");
}
void f_00000da9(X86Cpu& c) {
    X86_TICK(c, 12);
    // 000da9  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xda9u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000dae  jb 0xdb2
    X86_AT(c, 0xdaeu);
    if (x86_cc(c, 2)) { goto L_db2; }
    X86_TICK(c, 2);
    // 000db0  mov cl, 1
    X86_AT(c, 0xdb0u);
    s8(c, 1, 0x1u);
L_db2:
    X86_TICK(c, 7);
    // 000db2  cmp edx, ecx
    X86_AT(c, 0xdb2u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 000db4  ja 0xdd0
    X86_AT(c, 0xdb4u);
    if (x86_cc(c, 7)) { goto L_dd0; }
    X86_TICK(c, 11);
    // 000db6  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0xdb6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 000dba  mov dword ptr gs:[ebp + 0x38], edx
    X86_AT(c, 0xdbau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x38u)), c.r[2]);
    // 000dbe  call 0x17d8
    X86_AT(c, 0xdbeu);
    push32(c, 0xdc3u); f_000017d8(c); X86_RET(c, 0xdc3u);
    X86_TICK(c, 7);
    // 000dc3  call 0xe10
    X86_AT(c, 0xdc3u);
    push32(c, 0xdc8u); f_00000e10(c); X86_RET(c, 0xdc8u);
    X86_TICK(c, 7);
    // 000dc8  call 0xe50
    X86_AT(c, 0xdc8u);
    push32(c, 0xdcdu); f_00000e50(c); X86_RET(c, 0xdcdu);
    X86_TICK(c, 12);
    // 000dcd  sub ah, ah
    X86_AT(c, 0xdcdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 000dcf  ret 
    X86_AT(c, 0xdcfu);
    c.eip = pop32(c); return;
L_dd0:
    X86_TICK(c, 12);
    // 000dd0  mov ah, 0xff
    X86_AT(c, 0xdd0u);
    s8(c, 4, 0xFFu);
    // 000dd2  ret 
    X86_AT(c, 0xdd2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xda9u, "ran off the end of a function");
}
void f_00000dae(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000dae  jb 0xdb2
    X86_AT(c, 0xdaeu);
    if (x86_cc(c, 2)) { goto L_db2; }
    X86_TICK(c, 2);
    // 000db0  mov cl, 1
    X86_AT(c, 0xdb0u);
    s8(c, 1, 0x1u);
L_db2:
    X86_TICK(c, 7);
    // 000db2  cmp edx, ecx
    X86_AT(c, 0xdb2u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 000db4  ja 0xdd0
    X86_AT(c, 0xdb4u);
    if (x86_cc(c, 7)) { goto L_dd0; }
    X86_TICK(c, 11);
    // 000db6  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0xdb6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 000dba  mov dword ptr gs:[ebp + 0x38], edx
    X86_AT(c, 0xdbau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x38u)), c.r[2]);
    // 000dbe  call 0x17d8
    X86_AT(c, 0xdbeu);
    push32(c, 0xdc3u); f_000017d8(c); X86_RET(c, 0xdc3u);
    X86_TICK(c, 7);
    // 000dc3  call 0xe10
    X86_AT(c, 0xdc3u);
    push32(c, 0xdc8u); f_00000e10(c); X86_RET(c, 0xdc8u);
    X86_TICK(c, 7);
    // 000dc8  call 0xe50
    X86_AT(c, 0xdc8u);
    push32(c, 0xdcdu); f_00000e50(c); X86_RET(c, 0xdcdu);
    X86_TICK(c, 12);
    // 000dcd  sub ah, ah
    X86_AT(c, 0xdcdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 000dcf  ret 
    X86_AT(c, 0xdcfu);
    c.eip = pop32(c); return;
L_dd0:
    X86_TICK(c, 12);
    // 000dd0  mov ah, 0xff
    X86_AT(c, 0xdd0u);
    s8(c, 4, 0xFFu);
    // 000dd2  ret 
    X86_AT(c, 0xdd2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdaeu, "ran off the end of a function");
}
void f_00000db2(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000db2  cmp edx, ecx
    X86_AT(c, 0xdb2u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 000db4  ja 0xdd0
    X86_AT(c, 0xdb4u);
    if (x86_cc(c, 7)) { goto L_dd0; }
    X86_TICK(c, 11);
    // 000db6  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0xdb6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 000dba  mov dword ptr gs:[ebp + 0x38], edx
    X86_AT(c, 0xdbau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x38u)), c.r[2]);
    // 000dbe  call 0x17d8
    X86_AT(c, 0xdbeu);
    push32(c, 0xdc3u); f_000017d8(c); X86_RET(c, 0xdc3u);
    X86_TICK(c, 7);
    // 000dc3  call 0xe10
    X86_AT(c, 0xdc3u);
    push32(c, 0xdc8u); f_00000e10(c); X86_RET(c, 0xdc8u);
    X86_TICK(c, 7);
    // 000dc8  call 0xe50
    X86_AT(c, 0xdc8u);
    push32(c, 0xdcdu); f_00000e50(c); X86_RET(c, 0xdcdu);
    X86_TICK(c, 12);
    // 000dcd  sub ah, ah
    X86_AT(c, 0xdcdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 000dcf  ret 
    X86_AT(c, 0xdcfu);
    c.eip = pop32(c); return;
L_dd0:
    X86_TICK(c, 12);
    // 000dd0  mov ah, 0xff
    X86_AT(c, 0xdd0u);
    s8(c, 4, 0xFFu);
    // 000dd2  ret 
    X86_AT(c, 0xdd2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb2u, "ran off the end of a function");
}
void f_00000db4(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000db4  ja 0xdd0
    X86_AT(c, 0xdb4u);
    if (x86_cc(c, 7)) { goto L_dd0; }
    X86_TICK(c, 11);
    // 000db6  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0xdb6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 000dba  mov dword ptr gs:[ebp + 0x38], edx
    X86_AT(c, 0xdbau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x38u)), c.r[2]);
    // 000dbe  call 0x17d8
    X86_AT(c, 0xdbeu);
    push32(c, 0xdc3u); f_000017d8(c); X86_RET(c, 0xdc3u);
    X86_TICK(c, 7);
    // 000dc3  call 0xe10
    X86_AT(c, 0xdc3u);
    push32(c, 0xdc8u); f_00000e10(c); X86_RET(c, 0xdc8u);
    X86_TICK(c, 7);
    // 000dc8  call 0xe50
    X86_AT(c, 0xdc8u);
    push32(c, 0xdcdu); f_00000e50(c); X86_RET(c, 0xdcdu);
    X86_TICK(c, 12);
    // 000dcd  sub ah, ah
    X86_AT(c, 0xdcdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 000dcf  ret 
    X86_AT(c, 0xdcfu);
    c.eip = pop32(c); return;
L_dd0:
    X86_TICK(c, 12);
    // 000dd0  mov ah, 0xff
    X86_AT(c, 0xdd0u);
    s8(c, 4, 0xFFu);
    // 000dd2  ret 
    X86_AT(c, 0xdd2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb4u, "ran off the end of a function");
}
void f_00000db6(X86Cpu& c) {
    X86_TICK(c, 11);
    // 000db6  mov byte ptr gs:[ebp + 0x3e], al
    X86_AT(c, 0xdb6u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu)), g8(c, 0));
    // 000dba  mov dword ptr gs:[ebp + 0x38], edx
    X86_AT(c, 0xdbau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x38u)), c.r[2]);
    // 000dbe  call 0x17d8
    X86_AT(c, 0xdbeu);
    push32(c, 0xdc3u); f_000017d8(c); X86_RET(c, 0xdc3u);
    X86_TICK(c, 7);
    // 000dc3  call 0xe10
    X86_AT(c, 0xdc3u);
    push32(c, 0xdc8u); f_00000e10(c); X86_RET(c, 0xdc8u);
    X86_TICK(c, 7);
    // 000dc8  call 0xe50
    X86_AT(c, 0xdc8u);
    push32(c, 0xdcdu); f_00000e50(c); X86_RET(c, 0xdcdu);
    X86_TICK(c, 12);
    // 000dcd  sub ah, ah
    X86_AT(c, 0xdcdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 000dcf  ret 
    X86_AT(c, 0xdcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdb6u, "ran off the end of a function");
}
void f_00000dba(X86Cpu& c) {
    X86_TICK(c, 9);
    // 000dba  mov dword ptr gs:[ebp + 0x38], edx
    X86_AT(c, 0xdbau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x38u)), c.r[2]);
    // 000dbe  call 0x17d8
    X86_AT(c, 0xdbeu);
    push32(c, 0xdc3u); f_000017d8(c); X86_RET(c, 0xdc3u);
    X86_TICK(c, 7);
    // 000dc3  call 0xe10
    X86_AT(c, 0xdc3u);
    push32(c, 0xdc8u); f_00000e10(c); X86_RET(c, 0xdc8u);
    X86_TICK(c, 7);
    // 000dc8  call 0xe50
    X86_AT(c, 0xdc8u);
    push32(c, 0xdcdu); f_00000e50(c); X86_RET(c, 0xdcdu);
    X86_TICK(c, 12);
    // 000dcd  sub ah, ah
    X86_AT(c, 0xdcdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 000dcf  ret 
    X86_AT(c, 0xdcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdbau, "ran off the end of a function");
}
void f_00000dbe(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000dbe  call 0x17d8
    X86_AT(c, 0xdbeu);
    push32(c, 0xdc3u); f_000017d8(c); X86_RET(c, 0xdc3u);
    X86_TICK(c, 7);
    // 000dc3  call 0xe10
    X86_AT(c, 0xdc3u);
    push32(c, 0xdc8u); f_00000e10(c); X86_RET(c, 0xdc8u);
    X86_TICK(c, 7);
    // 000dc8  call 0xe50
    X86_AT(c, 0xdc8u);
    push32(c, 0xdcdu); f_00000e50(c); X86_RET(c, 0xdcdu);
    X86_TICK(c, 12);
    // 000dcd  sub ah, ah
    X86_AT(c, 0xdcdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 000dcf  ret 
    X86_AT(c, 0xdcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdbeu, "ran off the end of a function");
}
void f_00000dc3(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000dc3  call 0xe10
    X86_AT(c, 0xdc3u);
    push32(c, 0xdc8u); f_00000e10(c); X86_RET(c, 0xdc8u);
    X86_TICK(c, 7);
    // 000dc8  call 0xe50
    X86_AT(c, 0xdc8u);
    push32(c, 0xdcdu); f_00000e50(c); X86_RET(c, 0xdcdu);
    X86_TICK(c, 12);
    // 000dcd  sub ah, ah
    X86_AT(c, 0xdcdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 000dcf  ret 
    X86_AT(c, 0xdcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc3u, "ran off the end of a function");
}
void f_00000dc8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000dc8  call 0xe50
    X86_AT(c, 0xdc8u);
    push32(c, 0xdcdu); f_00000e50(c); X86_RET(c, 0xdcdu);
    X86_TICK(c, 12);
    // 000dcd  sub ah, ah
    X86_AT(c, 0xdcdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 000dcf  ret 
    X86_AT(c, 0xdcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdc8u, "ran off the end of a function");
}
void f_00000dcd(X86Cpu& c) {
    X86_TICK(c, 12);
    // 000dcd  sub ah, ah
    X86_AT(c, 0xdcdu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 000dcf  ret 
    X86_AT(c, 0xdcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdcdu, "ran off the end of a function");
}
void f_00000dcf(X86Cpu& c) {
    X86_TICK(c, 10);
    // 000dcf  ret 
    X86_AT(c, 0xdcfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdcfu, "ran off the end of a function");
}
void f_00000dd4(X86Cpu& c) {
    X86_TICK(c, 11);
    // 000dd4  mov al, byte ptr gs:[ebp + 0x3c]
    X86_AT(c, 0xdd4u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))));
    // 000dd8  cmp al, 0xc
    X86_AT(c, 0xdd8u);
    (void)x86_sub(c, g8(c, 0), 0xCu, 0, 1);
    // 000dda  jb 0xdec
    X86_AT(c, 0xddau);
    if (x86_cc(c, 2)) { goto L_dec; }
    X86_TICK(c, 16);
    // 000ddc  sub al, 0xc
    X86_AT(c, 0xddcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0xCu, 0, 1)); }
    // 000dde  movzx eax, al
    X86_AT(c, 0xddeu);
    c.r[0] = g8(c, 0);
    // 000de1  mov al, byte ptr cs:[eax + 0xef0]
    X86_AT(c, 0xde1u);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xEF0u))));
    // 000de8  jmp 0xe09
    X86_AT(c, 0xde8u);
    goto L_e09;
L_dec:
    X86_TICK(c, 28);
    // 000dec  movzx eax, byte ptr gs:[ebp + 0x3d]
    X86_AT(c, 0xdecu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Du)));
    // 000df1  dec eax
    X86_AT(c, 0xdf1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 000df2  mov edx, eax
    X86_AT(c, 0xdf2u);
    c.r[2] = c.r[0];
    // 000df4  lea eax, [eax + eax*2]
    X86_AT(c, 0xdf4u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000df7  lea eax, [eax + edx*8]
    X86_AT(c, 0xdf7u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 000dfa  movzx edx, byte ptr gs:[ebp + 0x3c]
    X86_AT(c, 0xdfau);
    c.r[2] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)));
    // 000dff  dec edx
    X86_AT(c, 0xdffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 000e00  add eax, edx
    X86_AT(c, 0xe00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 000e02  mov al, byte ptr cs:[eax + 0xef7]
    X86_AT(c, 0xe02u);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xEF7u))));
L_e09:
    X86_TICK(c, 13);
    // 000e09  movzx eax, al
    X86_AT(c, 0xe09u);
    c.r[0] = g8(c, 0);
    // 000e0c  ret 
    X86_AT(c, 0xe0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdd4u, "ran off the end of a function");
}
void f_00000dd8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000dd8  cmp al, 0xc
    X86_AT(c, 0xdd8u);
    (void)x86_sub(c, g8(c, 0), 0xCu, 0, 1);
    // 000dda  jb 0xdec
    X86_AT(c, 0xddau);
    if (x86_cc(c, 2)) { goto L_dec; }
    X86_TICK(c, 16);
    // 000ddc  sub al, 0xc
    X86_AT(c, 0xddcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0xCu, 0, 1)); }
    // 000dde  movzx eax, al
    X86_AT(c, 0xddeu);
    c.r[0] = g8(c, 0);
    // 000de1  mov al, byte ptr cs:[eax + 0xef0]
    X86_AT(c, 0xde1u);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xEF0u))));
    // 000de8  jmp 0xe09
    X86_AT(c, 0xde8u);
    goto L_e09;
L_dec:
    X86_TICK(c, 28);
    // 000dec  movzx eax, byte ptr gs:[ebp + 0x3d]
    X86_AT(c, 0xdecu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Du)));
    // 000df1  dec eax
    X86_AT(c, 0xdf1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 000df2  mov edx, eax
    X86_AT(c, 0xdf2u);
    c.r[2] = c.r[0];
    // 000df4  lea eax, [eax + eax*2]
    X86_AT(c, 0xdf4u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000df7  lea eax, [eax + edx*8]
    X86_AT(c, 0xdf7u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 000dfa  movzx edx, byte ptr gs:[ebp + 0x3c]
    X86_AT(c, 0xdfau);
    c.r[2] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)));
    // 000dff  dec edx
    X86_AT(c, 0xdffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 000e00  add eax, edx
    X86_AT(c, 0xe00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 000e02  mov al, byte ptr cs:[eax + 0xef7]
    X86_AT(c, 0xe02u);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xEF7u))));
L_e09:
    X86_TICK(c, 13);
    // 000e09  movzx eax, al
    X86_AT(c, 0xe09u);
    c.r[0] = g8(c, 0);
    // 000e0c  ret 
    X86_AT(c, 0xe0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdd8u, "ran off the end of a function");
}
void f_00000dda(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000dda  jb 0xdec
    X86_AT(c, 0xddau);
    if (x86_cc(c, 2)) { goto L_dec; }
    X86_TICK(c, 16);
    // 000ddc  sub al, 0xc
    X86_AT(c, 0xddcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, 0xCu, 0, 1)); }
    // 000dde  movzx eax, al
    X86_AT(c, 0xddeu);
    c.r[0] = g8(c, 0);
    // 000de1  mov al, byte ptr cs:[eax + 0xef0]
    X86_AT(c, 0xde1u);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xEF0u))));
    // 000de8  jmp 0xe09
    X86_AT(c, 0xde8u);
    goto L_e09;
L_dec:
    X86_TICK(c, 28);
    // 000dec  movzx eax, byte ptr gs:[ebp + 0x3d]
    X86_AT(c, 0xdecu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Du)));
    // 000df1  dec eax
    X86_AT(c, 0xdf1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 000df2  mov edx, eax
    X86_AT(c, 0xdf2u);
    c.r[2] = c.r[0];
    // 000df4  lea eax, [eax + eax*2]
    X86_AT(c, 0xdf4u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000df7  lea eax, [eax + edx*8]
    X86_AT(c, 0xdf7u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 000dfa  movzx edx, byte ptr gs:[ebp + 0x3c]
    X86_AT(c, 0xdfau);
    c.r[2] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)));
    // 000dff  dec edx
    X86_AT(c, 0xdffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 000e00  add eax, edx
    X86_AT(c, 0xe00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 000e02  mov al, byte ptr cs:[eax + 0xef7]
    X86_AT(c, 0xe02u);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xEF7u))));
L_e09:
    X86_TICK(c, 13);
    // 000e09  movzx eax, al
    X86_AT(c, 0xe09u);
    c.r[0] = g8(c, 0);
    // 000e0c  ret 
    X86_AT(c, 0xe0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xddau, "ran off the end of a function");
}
void f_00000dec(X86Cpu& c) {
    X86_TICK(c, 41);
    // 000dec  movzx eax, byte ptr gs:[ebp + 0x3d]
    X86_AT(c, 0xdecu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Du)));
    // 000df1  dec eax
    X86_AT(c, 0xdf1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 000df2  mov edx, eax
    X86_AT(c, 0xdf2u);
    c.r[2] = c.r[0];
    // 000df4  lea eax, [eax + eax*2]
    X86_AT(c, 0xdf4u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000df7  lea eax, [eax + edx*8]
    X86_AT(c, 0xdf7u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 000dfa  movzx edx, byte ptr gs:[ebp + 0x3c]
    X86_AT(c, 0xdfau);
    c.r[2] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)));
    // 000dff  dec edx
    X86_AT(c, 0xdffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 000e00  add eax, edx
    X86_AT(c, 0xe00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 000e02  mov al, byte ptr cs:[eax + 0xef7]
    X86_AT(c, 0xe02u);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xEF7u))));
    // 000e09  movzx eax, al
    X86_AT(c, 0xe09u);
    c.r[0] = g8(c, 0);
    // 000e0c  ret 
    X86_AT(c, 0xe0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdecu, "ran off the end of a function");
}
void f_00000df1(X86Cpu& c) {
    X86_TICK(c, 35);
    // 000df1  dec eax
    X86_AT(c, 0xdf1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 000df2  mov edx, eax
    X86_AT(c, 0xdf2u);
    c.r[2] = c.r[0];
    // 000df4  lea eax, [eax + eax*2]
    X86_AT(c, 0xdf4u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000df7  lea eax, [eax + edx*8]
    X86_AT(c, 0xdf7u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 000dfa  movzx edx, byte ptr gs:[ebp + 0x3c]
    X86_AT(c, 0xdfau);
    c.r[2] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)));
    // 000dff  dec edx
    X86_AT(c, 0xdffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 000e00  add eax, edx
    X86_AT(c, 0xe00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 000e02  mov al, byte ptr cs:[eax + 0xef7]
    X86_AT(c, 0xe02u);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xEF7u))));
    // 000e09  movzx eax, al
    X86_AT(c, 0xe09u);
    c.r[0] = g8(c, 0);
    // 000e0c  ret 
    X86_AT(c, 0xe0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf1u, "ran off the end of a function");
}
void f_00000df2(X86Cpu& c) {
    X86_TICK(c, 33);
    // 000df2  mov edx, eax
    X86_AT(c, 0xdf2u);
    c.r[2] = c.r[0];
    // 000df4  lea eax, [eax + eax*2]
    X86_AT(c, 0xdf4u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000df7  lea eax, [eax + edx*8]
    X86_AT(c, 0xdf7u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 000dfa  movzx edx, byte ptr gs:[ebp + 0x3c]
    X86_AT(c, 0xdfau);
    c.r[2] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)));
    // 000dff  dec edx
    X86_AT(c, 0xdffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 000e00  add eax, edx
    X86_AT(c, 0xe00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 000e02  mov al, byte ptr cs:[eax + 0xef7]
    X86_AT(c, 0xe02u);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xEF7u))));
    // 000e09  movzx eax, al
    X86_AT(c, 0xe09u);
    c.r[0] = g8(c, 0);
    // 000e0c  ret 
    X86_AT(c, 0xe0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf2u, "ran off the end of a function");
}
void f_00000df4(X86Cpu& c) {
    X86_TICK(c, 31);
    // 000df4  lea eax, [eax + eax*2]
    X86_AT(c, 0xdf4u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 000df7  lea eax, [eax + edx*8]
    X86_AT(c, 0xdf7u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 000dfa  movzx edx, byte ptr gs:[ebp + 0x3c]
    X86_AT(c, 0xdfau);
    c.r[2] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)));
    // 000dff  dec edx
    X86_AT(c, 0xdffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 000e00  add eax, edx
    X86_AT(c, 0xe00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 000e02  mov al, byte ptr cs:[eax + 0xef7]
    X86_AT(c, 0xe02u);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xEF7u))));
    // 000e09  movzx eax, al
    X86_AT(c, 0xe09u);
    c.r[0] = g8(c, 0);
    // 000e0c  ret 
    X86_AT(c, 0xe0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf4u, "ran off the end of a function");
}
void f_00000df7(X86Cpu& c) {
    X86_TICK(c, 29);
    // 000df7  lea eax, [eax + edx*8]
    X86_AT(c, 0xdf7u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] * 8);
    // 000dfa  movzx edx, byte ptr gs:[ebp + 0x3c]
    X86_AT(c, 0xdfau);
    c.r[2] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)));
    // 000dff  dec edx
    X86_AT(c, 0xdffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 000e00  add eax, edx
    X86_AT(c, 0xe00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 000e02  mov al, byte ptr cs:[eax + 0xef7]
    X86_AT(c, 0xe02u);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xEF7u))));
    // 000e09  movzx eax, al
    X86_AT(c, 0xe09u);
    c.r[0] = g8(c, 0);
    // 000e0c  ret 
    X86_AT(c, 0xe0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdf7u, "ran off the end of a function");
}
void f_00000dfa(X86Cpu& c) {
    X86_TICK(c, 27);
    // 000dfa  movzx edx, byte ptr gs:[ebp + 0x3c]
    X86_AT(c, 0xdfau);
    c.r[2] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu)));
    // 000dff  dec edx
    X86_AT(c, 0xdffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 000e00  add eax, edx
    X86_AT(c, 0xe00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 000e02  mov al, byte ptr cs:[eax + 0xef7]
    X86_AT(c, 0xe02u);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xEF7u))));
    // 000e09  movzx eax, al
    X86_AT(c, 0xe09u);
    c.r[0] = g8(c, 0);
    // 000e0c  ret 
    X86_AT(c, 0xe0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdfau, "ran off the end of a function");
}
void f_00000dff(X86Cpu& c) {
    X86_TICK(c, 21);
    // 000dff  dec edx
    X86_AT(c, 0xdffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 000e00  add eax, edx
    X86_AT(c, 0xe00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 000e02  mov al, byte ptr cs:[eax + 0xef7]
    X86_AT(c, 0xe02u);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xEF7u))));
    // 000e09  movzx eax, al
    X86_AT(c, 0xe09u);
    c.r[0] = g8(c, 0);
    // 000e0c  ret 
    X86_AT(c, 0xe0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xdffu, "ran off the end of a function");
}
void f_00000e00(X86Cpu& c) {
    X86_TICK(c, 19);
    // 000e00  add eax, edx
    X86_AT(c, 0xe00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 000e02  mov al, byte ptr cs:[eax + 0xef7]
    X86_AT(c, 0xe02u);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xEF7u))));
    // 000e09  movzx eax, al
    X86_AT(c, 0xe09u);
    c.r[0] = g8(c, 0);
    // 000e0c  ret 
    X86_AT(c, 0xe0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe00u, "ran off the end of a function");
}
void f_00000e02(X86Cpu& c) {
    X86_TICK(c, 17);
    // 000e02  mov al, byte ptr cs:[eax + 0xef7]
    X86_AT(c, 0xe02u);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xEF7u))));
    // 000e09  movzx eax, al
    X86_AT(c, 0xe09u);
    c.r[0] = g8(c, 0);
    // 000e0c  ret 
    X86_AT(c, 0xe0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe02u, "ran off the end of a function");
}
void f_00000e09(X86Cpu& c) {
    X86_TICK(c, 13);
    // 000e09  movzx eax, al
    X86_AT(c, 0xe09u);
    c.r[0] = g8(c, 0);
    // 000e0c  ret 
    X86_AT(c, 0xe0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe09u, "ran off the end of a function");
}
void f_00000e0c(X86Cpu& c) {
    X86_TICK(c, 10);
    // 000e0c  ret 
    X86_AT(c, 0xe0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe0cu, "ran off the end of a function");
}
void f_00000e10(X86Cpu& c) {
    X86_TICK(c, 92);
    // 000e10  mov bx, word ptr gs:[ebp + 0x100]
    X86_AT(c, 0xe10u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u))));
    // 000e18  mov al, byte ptr gs:[ebp + 0x3e]
    X86_AT(c, 0xe18u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu))));
    // 000e1c  and bh, 0xfe
    X86_AT(c, 0xe1cu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & 0xFEu, 1)); }
    // 000e1f  or bh, al
    X86_AT(c, 0xe1fu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 0), 1)); }
    // 000e21  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0xe21u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000e29  mov bx, word ptr gs:[ebp + 0x100]
    X86_AT(c, 0xe29u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u))));
    // 000e31  mov dx, 0x448
    X86_AT(c, 0xe31u);
    s16(c, 2, 0x448u);
    // 000e35  mov al, 0
    X86_AT(c, 0xe35u);
    s8(c, 0, 0x0u);
    // 000e37  out dx, al
    X86_AT(c, 0xe37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe10u, "ran off the end of a function");
}
void f_00000e18(X86Cpu& c) {
    X86_TICK(c, 88);
    // 000e18  mov al, byte ptr gs:[ebp + 0x3e]
    X86_AT(c, 0xe18u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Eu))));
    // 000e1c  and bh, 0xfe
    X86_AT(c, 0xe1cu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & 0xFEu, 1)); }
    // 000e1f  or bh, al
    X86_AT(c, 0xe1fu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 0), 1)); }
    // 000e21  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0xe21u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000e29  mov bx, word ptr gs:[ebp + 0x100]
    X86_AT(c, 0xe29u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u))));
    // 000e31  mov dx, 0x448
    X86_AT(c, 0xe31u);
    s16(c, 2, 0x448u);
    // 000e35  mov al, 0
    X86_AT(c, 0xe35u);
    s8(c, 0, 0x0u);
    // 000e37  out dx, al
    X86_AT(c, 0xe37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe18u, "ran off the end of a function");
}
void f_00000e1c(X86Cpu& c) {
    X86_TICK(c, 84);
    // 000e1c  and bh, 0xfe
    X86_AT(c, 0xe1cu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & 0xFEu, 1)); }
    // 000e1f  or bh, al
    X86_AT(c, 0xe1fu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 0), 1)); }
    // 000e21  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0xe21u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000e29  mov bx, word ptr gs:[ebp + 0x100]
    X86_AT(c, 0xe29u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u))));
    // 000e31  mov dx, 0x448
    X86_AT(c, 0xe31u);
    s16(c, 2, 0x448u);
    // 000e35  mov al, 0
    X86_AT(c, 0xe35u);
    s8(c, 0, 0x0u);
    // 000e37  out dx, al
    X86_AT(c, 0xe37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1cu, "ran off the end of a function");
}
void f_00000e1f(X86Cpu& c) {
    X86_TICK(c, 82);
    // 000e1f  or bh, al
    X86_AT(c, 0xe1fu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 0), 1)); }
    // 000e21  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0xe21u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000e29  mov bx, word ptr gs:[ebp + 0x100]
    X86_AT(c, 0xe29u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u))));
    // 000e31  mov dx, 0x448
    X86_AT(c, 0xe31u);
    s16(c, 2, 0x448u);
    // 000e35  mov al, 0
    X86_AT(c, 0xe35u);
    s8(c, 0, 0x0u);
    // 000e37  out dx, al
    X86_AT(c, 0xe37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe1fu, "ran off the end of a function");
}
void f_00000e21(X86Cpu& c) {
    X86_TICK(c, 80);
    // 000e21  mov word ptr gs:[ebp + 0x100], bx
    X86_AT(c, 0xe21u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u)), (c.r[3] & 0xFFFFu));
    // 000e29  mov bx, word ptr gs:[ebp + 0x100]
    X86_AT(c, 0xe29u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u))));
    // 000e31  mov dx, 0x448
    X86_AT(c, 0xe31u);
    s16(c, 2, 0x448u);
    // 000e35  mov al, 0
    X86_AT(c, 0xe35u);
    s8(c, 0, 0x0u);
    // 000e37  out dx, al
    X86_AT(c, 0xe37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe21u, "ran off the end of a function");
}
void f_00000e29(X86Cpu& c) {
    X86_TICK(c, 78);
    // 000e29  mov bx, word ptr gs:[ebp + 0x100]
    X86_AT(c, 0xe29u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x100u))));
    // 000e31  mov dx, 0x448
    X86_AT(c, 0xe31u);
    s16(c, 2, 0x448u);
    // 000e35  mov al, 0
    X86_AT(c, 0xe35u);
    s8(c, 0, 0x0u);
    // 000e37  out dx, al
    X86_AT(c, 0xe37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe29u, "ran off the end of a function");
}
void f_00000e31(X86Cpu& c) {
    X86_TICK(c, 74);
    // 000e31  mov dx, 0x448
    X86_AT(c, 0xe31u);
    s16(c, 2, 0x448u);
    // 000e35  mov al, 0
    X86_AT(c, 0xe35u);
    s8(c, 0, 0x0u);
    // 000e37  out dx, al
    X86_AT(c, 0xe37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe31u, "ran off the end of a function");
}
void f_00000e35(X86Cpu& c) {
    X86_TICK(c, 72);
    // 000e35  mov al, 0
    X86_AT(c, 0xe35u);
    s8(c, 0, 0x0u);
    // 000e37  out dx, al
    X86_AT(c, 0xe37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe35u, "ran off the end of a function");
}
void f_00000e37(X86Cpu& c) {
    X86_TICK(c, 70);
    // 000e37  out dx, al
    X86_AT(c, 0xe37u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe37u, "ran off the end of a function");
}
void f_00000e38(X86Cpu& c) {
    X86_TICK(c, 58);
    // 000e38  mov dx, 0x44a
    X86_AT(c, 0xe38u);
    s16(c, 2, 0x44Au);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe38u, "ran off the end of a function");
}
void f_00000e3c(X86Cpu& c) {
    X86_TICK(c, 56);
    // 000e3c  mov al, bl
    X86_AT(c, 0xe3cu);
    s8(c, 0, g8(c, 3));
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3cu, "ran off the end of a function");
}
void f_00000e3e(X86Cpu& c) {
    X86_TICK(c, 54);
    // 000e3e  out dx, al
    X86_AT(c, 0xe3eu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3eu, "ran off the end of a function");
}
void f_00000e3f(X86Cpu& c) {
    X86_TICK(c, 42);
    // 000e3f  mov dx, 0x448
    X86_AT(c, 0xe3fu);
    s16(c, 2, 0x448u);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe3fu, "ran off the end of a function");
}
void f_00000e43(X86Cpu& c) {
    X86_TICK(c, 40);
    // 000e43  mov al, 1
    X86_AT(c, 0xe43u);
    s8(c, 0, 0x1u);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe43u, "ran off the end of a function");
}
void f_00000e45(X86Cpu& c) {
    X86_TICK(c, 38);
    // 000e45  out dx, al
    X86_AT(c, 0xe45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe45u, "ran off the end of a function");
}
void f_00000e46(X86Cpu& c) {
    X86_TICK(c, 26);
    // 000e46  mov dx, 0x44a
    X86_AT(c, 0xe46u);
    s16(c, 2, 0x44Au);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe46u, "ran off the end of a function");
}
void f_00000e4a(X86Cpu& c) {
    X86_TICK(c, 24);
    // 000e4a  mov al, bh
    X86_AT(c, 0xe4au);
    s8(c, 0, g8(c, 7));
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4au, "ran off the end of a function");
}
void f_00000e4c(X86Cpu& c) {
    X86_TICK(c, 22);
    // 000e4c  out dx, al
    X86_AT(c, 0xe4cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4cu, "ran off the end of a function");
}
void f_00000e4d(X86Cpu& c) {
    X86_TICK(c, 10);
    // 000e4d  ret 
    X86_AT(c, 0xe4du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe4du, "ran off the end of a function");
}
void f_00000e50(X86Cpu& c) {
    X86_TICK(c, 30);
    // 000e50  mov dx, 0xff82
    X86_AT(c, 0xe50u);
    s16(c, 2, 0xFF82u);
    // 000e54  mov al, 0x27
    X86_AT(c, 0xe54u);
    s8(c, 0, 0x27u);
    // 000e56  out dx, al
    X86_AT(c, 0xe56u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e57  mov edx, dword ptr gs:[ebp + 0x38]
    X86_AT(c, 0xe57u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x38u)));
    // 000e5b  xor al, al
    X86_AT(c, 0xe5bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 000e5d  shr edx, 1
    X86_AT(c, 0xe5du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 000e5f  jae 0xe63
    X86_AT(c, 0xe5fu);
    if (x86_cc(c, 3)) { goto L_e63; }
    X86_TICK(c, 2);
    // 000e61  or al, 0xc
    X86_AT(c, 0xe61u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xCu, 1)); }
L_e63:
    X86_TICK(c, 8);
    // 000e63  shr edx, 1
    X86_AT(c, 0xe63u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 000e65  jae 0xe69
    X86_AT(c, 0xe65u);
    if (x86_cc(c, 3)) { goto L_e69; }
    X86_TICK(c, 2);
    // 000e67  or al, 3
    X86_AT(c, 0xe67u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x3u, 1)); }
L_e69:
    X86_TICK(c, 24);
    // 000e69  mov dx, 0xfda0
    X86_AT(c, 0xe69u);
    s16(c, 2, 0xFDA0u);
    // 000e6d  out dx, al
    X86_AT(c, 0xe6du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e6e  ret 
    X86_AT(c, 0xe6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe50u, "ran off the end of a function");
}
void f_00000e54(X86Cpu& c) {
    X86_TICK(c, 28);
    // 000e54  mov al, 0x27
    X86_AT(c, 0xe54u);
    s8(c, 0, 0x27u);
    // 000e56  out dx, al
    X86_AT(c, 0xe56u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e57  mov edx, dword ptr gs:[ebp + 0x38]
    X86_AT(c, 0xe57u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x38u)));
    // 000e5b  xor al, al
    X86_AT(c, 0xe5bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 000e5d  shr edx, 1
    X86_AT(c, 0xe5du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 000e5f  jae 0xe63
    X86_AT(c, 0xe5fu);
    if (x86_cc(c, 3)) { goto L_e63; }
    X86_TICK(c, 2);
    // 000e61  or al, 0xc
    X86_AT(c, 0xe61u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xCu, 1)); }
L_e63:
    X86_TICK(c, 8);
    // 000e63  shr edx, 1
    X86_AT(c, 0xe63u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 000e65  jae 0xe69
    X86_AT(c, 0xe65u);
    if (x86_cc(c, 3)) { goto L_e69; }
    X86_TICK(c, 2);
    // 000e67  or al, 3
    X86_AT(c, 0xe67u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x3u, 1)); }
L_e69:
    X86_TICK(c, 24);
    // 000e69  mov dx, 0xfda0
    X86_AT(c, 0xe69u);
    s16(c, 2, 0xFDA0u);
    // 000e6d  out dx, al
    X86_AT(c, 0xe6du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e6e  ret 
    X86_AT(c, 0xe6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe54u, "ran off the end of a function");
}
void f_00000e56(X86Cpu& c) {
    X86_TICK(c, 26);
    // 000e56  out dx, al
    X86_AT(c, 0xe56u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e57  mov edx, dword ptr gs:[ebp + 0x38]
    X86_AT(c, 0xe57u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x38u)));
    // 000e5b  xor al, al
    X86_AT(c, 0xe5bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 000e5d  shr edx, 1
    X86_AT(c, 0xe5du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 000e5f  jae 0xe63
    X86_AT(c, 0xe5fu);
    if (x86_cc(c, 3)) { goto L_e63; }
    X86_TICK(c, 2);
    // 000e61  or al, 0xc
    X86_AT(c, 0xe61u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xCu, 1)); }
L_e63:
    X86_TICK(c, 8);
    // 000e63  shr edx, 1
    X86_AT(c, 0xe63u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 000e65  jae 0xe69
    X86_AT(c, 0xe65u);
    if (x86_cc(c, 3)) { goto L_e69; }
    X86_TICK(c, 2);
    // 000e67  or al, 3
    X86_AT(c, 0xe67u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x3u, 1)); }
L_e69:
    X86_TICK(c, 24);
    // 000e69  mov dx, 0xfda0
    X86_AT(c, 0xe69u);
    s16(c, 2, 0xFDA0u);
    // 000e6d  out dx, al
    X86_AT(c, 0xe6du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e6e  ret 
    X86_AT(c, 0xe6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe56u, "ran off the end of a function");
}
void f_00000e57(X86Cpu& c) {
    X86_TICK(c, 14);
    // 000e57  mov edx, dword ptr gs:[ebp + 0x38]
    X86_AT(c, 0xe57u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x38u)));
    // 000e5b  xor al, al
    X86_AT(c, 0xe5bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 000e5d  shr edx, 1
    X86_AT(c, 0xe5du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 000e5f  jae 0xe63
    X86_AT(c, 0xe5fu);
    if (x86_cc(c, 3)) { goto L_e63; }
    X86_TICK(c, 2);
    // 000e61  or al, 0xc
    X86_AT(c, 0xe61u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xCu, 1)); }
L_e63:
    X86_TICK(c, 8);
    // 000e63  shr edx, 1
    X86_AT(c, 0xe63u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 000e65  jae 0xe69
    X86_AT(c, 0xe65u);
    if (x86_cc(c, 3)) { goto L_e69; }
    X86_TICK(c, 2);
    // 000e67  or al, 3
    X86_AT(c, 0xe67u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x3u, 1)); }
L_e69:
    X86_TICK(c, 24);
    // 000e69  mov dx, 0xfda0
    X86_AT(c, 0xe69u);
    s16(c, 2, 0xFDA0u);
    // 000e6d  out dx, al
    X86_AT(c, 0xe6du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e6e  ret 
    X86_AT(c, 0xe6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe57u, "ran off the end of a function");
}
void f_00000e5b(X86Cpu& c) {
    X86_TICK(c, 10);
    // 000e5b  xor al, al
    X86_AT(c, 0xe5bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 000e5d  shr edx, 1
    X86_AT(c, 0xe5du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 000e5f  jae 0xe63
    X86_AT(c, 0xe5fu);
    if (x86_cc(c, 3)) { goto L_e63; }
    X86_TICK(c, 2);
    // 000e61  or al, 0xc
    X86_AT(c, 0xe61u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xCu, 1)); }
L_e63:
    X86_TICK(c, 8);
    // 000e63  shr edx, 1
    X86_AT(c, 0xe63u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 000e65  jae 0xe69
    X86_AT(c, 0xe65u);
    if (x86_cc(c, 3)) { goto L_e69; }
    X86_TICK(c, 2);
    // 000e67  or al, 3
    X86_AT(c, 0xe67u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x3u, 1)); }
L_e69:
    X86_TICK(c, 24);
    // 000e69  mov dx, 0xfda0
    X86_AT(c, 0xe69u);
    s16(c, 2, 0xFDA0u);
    // 000e6d  out dx, al
    X86_AT(c, 0xe6du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e6e  ret 
    X86_AT(c, 0xe6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5bu, "ran off the end of a function");
}
void f_00000e5d(X86Cpu& c) {
    X86_TICK(c, 8);
    // 000e5d  shr edx, 1
    X86_AT(c, 0xe5du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 000e5f  jae 0xe63
    X86_AT(c, 0xe5fu);
    if (x86_cc(c, 3)) { goto L_e63; }
    X86_TICK(c, 2);
    // 000e61  or al, 0xc
    X86_AT(c, 0xe61u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xCu, 1)); }
L_e63:
    X86_TICK(c, 8);
    // 000e63  shr edx, 1
    X86_AT(c, 0xe63u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 000e65  jae 0xe69
    X86_AT(c, 0xe65u);
    if (x86_cc(c, 3)) { goto L_e69; }
    X86_TICK(c, 2);
    // 000e67  or al, 3
    X86_AT(c, 0xe67u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x3u, 1)); }
L_e69:
    X86_TICK(c, 24);
    // 000e69  mov dx, 0xfda0
    X86_AT(c, 0xe69u);
    s16(c, 2, 0xFDA0u);
    // 000e6d  out dx, al
    X86_AT(c, 0xe6du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e6e  ret 
    X86_AT(c, 0xe6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5du, "ran off the end of a function");
}
void f_00000e5f(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000e5f  jae 0xe63
    X86_AT(c, 0xe5fu);
    if (x86_cc(c, 3)) { goto L_e63; }
    X86_TICK(c, 2);
    // 000e61  or al, 0xc
    X86_AT(c, 0xe61u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xCu, 1)); }
L_e63:
    X86_TICK(c, 8);
    // 000e63  shr edx, 1
    X86_AT(c, 0xe63u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 000e65  jae 0xe69
    X86_AT(c, 0xe65u);
    if (x86_cc(c, 3)) { goto L_e69; }
    X86_TICK(c, 2);
    // 000e67  or al, 3
    X86_AT(c, 0xe67u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x3u, 1)); }
L_e69:
    X86_TICK(c, 24);
    // 000e69  mov dx, 0xfda0
    X86_AT(c, 0xe69u);
    s16(c, 2, 0xFDA0u);
    // 000e6d  out dx, al
    X86_AT(c, 0xe6du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e6e  ret 
    X86_AT(c, 0xe6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe5fu, "ran off the end of a function");
}
void f_00000e61(X86Cpu& c) {
    X86_TICK(c, 10);
    // 000e61  or al, 0xc
    X86_AT(c, 0xe61u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xCu, 1)); }
    // 000e63  shr edx, 1
    X86_AT(c, 0xe63u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 000e65  jae 0xe69
    X86_AT(c, 0xe65u);
    if (x86_cc(c, 3)) { goto L_e69; }
    X86_TICK(c, 2);
    // 000e67  or al, 3
    X86_AT(c, 0xe67u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x3u, 1)); }
L_e69:
    X86_TICK(c, 24);
    // 000e69  mov dx, 0xfda0
    X86_AT(c, 0xe69u);
    s16(c, 2, 0xFDA0u);
    // 000e6d  out dx, al
    X86_AT(c, 0xe6du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e6e  ret 
    X86_AT(c, 0xe6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe61u, "ran off the end of a function");
}
void f_00000e63(X86Cpu& c) {
    X86_TICK(c, 8);
    // 000e63  shr edx, 1
    X86_AT(c, 0xe63u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 000e65  jae 0xe69
    X86_AT(c, 0xe65u);
    if (x86_cc(c, 3)) { goto L_e69; }
    X86_TICK(c, 2);
    // 000e67  or al, 3
    X86_AT(c, 0xe67u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x3u, 1)); }
L_e69:
    X86_TICK(c, 24);
    // 000e69  mov dx, 0xfda0
    X86_AT(c, 0xe69u);
    s16(c, 2, 0xFDA0u);
    // 000e6d  out dx, al
    X86_AT(c, 0xe6du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e6e  ret 
    X86_AT(c, 0xe6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe63u, "ran off the end of a function");
}
void f_00000e65(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000e65  jae 0xe69
    X86_AT(c, 0xe65u);
    if (x86_cc(c, 3)) { goto L_e69; }
    X86_TICK(c, 2);
    // 000e67  or al, 3
    X86_AT(c, 0xe67u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x3u, 1)); }
L_e69:
    X86_TICK(c, 24);
    // 000e69  mov dx, 0xfda0
    X86_AT(c, 0xe69u);
    s16(c, 2, 0xFDA0u);
    // 000e6d  out dx, al
    X86_AT(c, 0xe6du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e6e  ret 
    X86_AT(c, 0xe6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe65u, "ran off the end of a function");
}
void f_00000e67(X86Cpu& c) {
    X86_TICK(c, 26);
    // 000e67  or al, 3
    X86_AT(c, 0xe67u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x3u, 1)); }
    // 000e69  mov dx, 0xfda0
    X86_AT(c, 0xe69u);
    s16(c, 2, 0xFDA0u);
    // 000e6d  out dx, al
    X86_AT(c, 0xe6du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e6e  ret 
    X86_AT(c, 0xe6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe67u, "ran off the end of a function");
}
void f_00000e69(X86Cpu& c) {
    X86_TICK(c, 24);
    // 000e69  mov dx, 0xfda0
    X86_AT(c, 0xe69u);
    s16(c, 2, 0xFDA0u);
    // 000e6d  out dx, al
    X86_AT(c, 0xe6du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e6e  ret 
    X86_AT(c, 0xe6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe69u, "ran off the end of a function");
}
void f_00000e6d(X86Cpu& c) {
    X86_TICK(c, 22);
    // 000e6d  out dx, al
    X86_AT(c, 0xe6du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000e6e  ret 
    X86_AT(c, 0xe6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6du, "ran off the end of a function");
}
void f_00000e6e(X86Cpu& c) {
    X86_TICK(c, 10);
    // 000e6e  ret 
    X86_AT(c, 0xe6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6eu, "ran off the end of a function");
}
void f_00000e70(X86Cpu& c) {
    X86_TICK(c, 11);
    // 000e70  dec eax
    X86_AT(c, 0xe70u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 000e71  push eax
    X86_AT(c, 0xe71u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000e72  call 0xc60
    X86_AT(c, 0xe72u);
    push32(c, 0xe77u); f_00000c60(c); X86_RET(c, 0xe77u);
    X86_TICK(c, 62);
    // 000e77  pop eax
    X86_AT(c, 0xe77u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000e78  shl eax, 6
    X86_AT(c, 0xe78u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 000e7b  lea esi, [eax + 0xf70]
    X86_AT(c, 0xe7bu);
    c.r[6] = (uint32_t)(c.r[0] + 0xF70u);
    // 000e81  lea edi, [ebp + 0xc0]
    X86_AT(c, 0xe81u);
    c.r[7] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e87  push gs
    X86_AT(c, 0xe87u);
    push32(c, c.sreg[5]);
    // 000e89  pop es
    X86_AT(c, 0xe89u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 000e8a  mov ecx, 0x10
    X86_AT(c, 0xe8au);
    c.r[1] = 0x10u;
    // 000e8f  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0xe8fu);
    x86_string(c, 0, 4, 243, 4, 1);
    // 000e92  lea esi, [ebp + 0xc0]
    X86_AT(c, 0xe92u);
    c.r[6] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e98  xor bh, bh
    X86_AT(c, 0xe98u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000e9a  mov dx, 0x440
    X86_AT(c, 0xe9au);
    s16(c, 2, 0x440u);
    // 000e9e  mov al, 0x1c
    X86_AT(c, 0xe9eu);
    s8(c, 0, 0x1Cu);
    // 000ea0  out dx, al
    X86_AT(c, 0xea0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe70u, "ran off the end of a function");
}
void f_00000e71(X86Cpu& c) {
    X86_TICK(c, 9);
    // 000e71  push eax
    X86_AT(c, 0xe71u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 000e72  call 0xc60
    X86_AT(c, 0xe72u);
    push32(c, 0xe77u); f_00000c60(c); X86_RET(c, 0xe77u);
    X86_TICK(c, 62);
    // 000e77  pop eax
    X86_AT(c, 0xe77u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000e78  shl eax, 6
    X86_AT(c, 0xe78u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 000e7b  lea esi, [eax + 0xf70]
    X86_AT(c, 0xe7bu);
    c.r[6] = (uint32_t)(c.r[0] + 0xF70u);
    // 000e81  lea edi, [ebp + 0xc0]
    X86_AT(c, 0xe81u);
    c.r[7] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e87  push gs
    X86_AT(c, 0xe87u);
    push32(c, c.sreg[5]);
    // 000e89  pop es
    X86_AT(c, 0xe89u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 000e8a  mov ecx, 0x10
    X86_AT(c, 0xe8au);
    c.r[1] = 0x10u;
    // 000e8f  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0xe8fu);
    x86_string(c, 0, 4, 243, 4, 1);
    // 000e92  lea esi, [ebp + 0xc0]
    X86_AT(c, 0xe92u);
    c.r[6] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e98  xor bh, bh
    X86_AT(c, 0xe98u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000e9a  mov dx, 0x440
    X86_AT(c, 0xe9au);
    s16(c, 2, 0x440u);
    // 000e9e  mov al, 0x1c
    X86_AT(c, 0xe9eu);
    s8(c, 0, 0x1Cu);
    // 000ea0  out dx, al
    X86_AT(c, 0xea0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe71u, "ran off the end of a function");
}
void f_00000e72(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000e72  call 0xc60
    X86_AT(c, 0xe72u);
    push32(c, 0xe77u); f_00000c60(c); X86_RET(c, 0xe77u);
    X86_TICK(c, 62);
    // 000e77  pop eax
    X86_AT(c, 0xe77u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 000e78  shl eax, 6
    X86_AT(c, 0xe78u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 000e7b  lea esi, [eax + 0xf70]
    X86_AT(c, 0xe7bu);
    c.r[6] = (uint32_t)(c.r[0] + 0xF70u);
    // 000e81  lea edi, [ebp + 0xc0]
    X86_AT(c, 0xe81u);
    c.r[7] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e87  push gs
    X86_AT(c, 0xe87u);
    push32(c, c.sreg[5]);
    // 000e89  pop es
    X86_AT(c, 0xe89u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 000e8a  mov ecx, 0x10
    X86_AT(c, 0xe8au);
    c.r[1] = 0x10u;
    // 000e8f  movsd dword ptr es:[edi], dword ptr cs:[esi]
    X86_AT(c, 0xe8fu);
    x86_string(c, 0, 4, 243, 4, 1);
    // 000e92  lea esi, [ebp + 0xc0]
    X86_AT(c, 0xe92u);
    c.r[6] = (uint32_t)(c.r[5] + 0xC0u);
    // 000e98  xor bh, bh
    X86_AT(c, 0xe98u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v ^ g8(c, 7), 1)); }
    // 000e9a  mov dx, 0x440
    X86_AT(c, 0xe9au);
    s16(c, 2, 0x440u);
    // 000e9e  mov al, 0x1c
    X86_AT(c, 0xe9eu);
    s8(c, 0, 0x1Cu);
    // 000ea0  out dx, al
    X86_AT(c, 0xea0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ea1  mov dx, 0x442
    X86_AT(c, 0xea1u);
    s16(c, 2, 0x442u);
    // 000ea5  xor ax, ax
    X86_AT(c, 0xea5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 000ea8  out dx, ax
    X86_AT(c, 0xea8u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_eaa:
    X86_TICK(c, 19);
    // 000eaa  in ax, dx
    X86_AT(c, 0xeaau);
    s16(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 2));
    // 000eac  test ah, ah
    X86_AT(c, 0xeacu);
    (void)x86_logic(c, g8(c, 4) & g8(c, 4), 1);
    // 000eae  jl 0xeaa
    X86_AT(c, 0xeaeu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeaau); goto L_eaa; }
L_eb0:
    X86_TICK(c, 7);
    // 000eb0  cmp bh, 2
    X86_AT(c, 0xeb0u);
    (void)x86_sub(c, g8(c, 7), 0x2u, 0, 1);
    // 000eb3  je 0xecb
    X86_AT(c, 0xeb3u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 7);
    // 000eb5  cmp bh, 3
    X86_AT(c, 0xeb5u);
    (void)x86_sub(c, g8(c, 7), 0x3u, 0, 1);
    // 000eb8  je 0xecb
    X86_AT(c, 0xeb8u);
    if (x86_cc(c, 4)) { goto L_ecb; }
    X86_TICK(c, 34);
    // 000eba  mov dx, 0x440
    X86_AT(c, 0xebau);
    s16(c, 2, 0x440u);
    // 000ebe  mov al, bh
    X86_AT(c, 0xebeu);
    s8(c, 0, g8(c, 7));
    // 000ec0  out dx, al
    X86_AT(c, 0xec0u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ec1  mov dx, 0x442
    X86_AT(c, 0xec1u);
    s16(c, 2, 0x442u);
    // 000ec5  mov ax, word ptr gs:[esi]
    X86_AT(c, 0xec5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000ec9  out dx, ax
    X86_AT(c, 0xec9u);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_ecb:
    X86_TICK(c, 11);
    // 000ecb  add esi, 2
    X86_AT(c, 0xecbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 000ece  inc bh
    X86_AT(c, 0xeceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_inc(c, v, 1)); }
    // 000ed0  cmp bh, 0x20
    X86_AT(c, 0xed0u);
    (void)x86_sub(c, g8(c, 7), 0x20u, 0, 1);
    // 000ed3  jb 0xeb0
    X86_AT(c, 0xed3u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb0u); goto L_eb0; }
    X86_TICK(c, 48);
    // 000ed5  mov cx, word ptr gs:[esi - 8]
    X86_AT(c, 0xed5u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0xFFFFFFF8u))));
    // 000eda  or cx, 0x8000
    X86_AT(c, 0xedau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v | 0x8000u, 2)); }
    // 000edf  mov dx, 0x440
    X86_AT(c, 0xedfu);
    s16(c, 2, 0x440u);
    // 000ee3  mov al, 0x1c
    X86_AT(c, 0xee3u);
    s8(c, 0, 0x1Cu);
    // 000ee5  out dx, al
    X86_AT(c, 0xee5u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000ee6  mov dx, 0x442
    X86_AT(c, 0xee6u);
    s16(c, 2, 0x442u);
    // 000eea  mov ax, cx
    X86_AT(c, 0xeeau);
    s16(c, 0, (c.r[1] & 0xFFFFu));
    // 000eed  out dx, ax
    X86_AT(c, 0xeedu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 000eef  ret 
    X86_AT(c, 0xeefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe72u, "ran off the end of a function");
}
}

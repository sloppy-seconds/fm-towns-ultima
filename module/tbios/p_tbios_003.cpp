#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00000a4b(X86Cpu& c) {
    goto L_a4b;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a4b:
    X86_TICK(c, 34);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa4bu, "ran off the end of a function");
}
void f_00000a4e(X86Cpu& c) {
    goto L_a4e;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a4e:
    X86_TICK(c, 30);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa4eu, "ran off the end of a function");
}
void f_00000a51(X86Cpu& c) {
    goto L_a51;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a51:
    X86_TICK(c, 27);
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa51u, "ran off the end of a function");
}
void f_00000a54(X86Cpu& c) {
    goto L_a54;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a54:
    X86_TICK(c, 24);
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa54u, "ran off the end of a function");
}
void f_00000a56(X86Cpu& c) {
    goto L_a56;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a56:
    X86_TICK(c, 22);
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa56u, "ran off the end of a function");
}
void f_00000a5a(X86Cpu& c) {
    goto L_a5a;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a5a:
    X86_TICK(c, 19);
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa5au, "ran off the end of a function");
}
void f_00000a5d(X86Cpu& c) {
    goto L_a5d;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a5d:
    X86_TICK(c, 16);
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa5du, "ran off the end of a function");
}
void f_00000a60(X86Cpu& c) {
    goto L_a60;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a60:
    X86_TICK(c, 13);
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa60u, "ran off the end of a function");
}
void f_00000a62(X86Cpu& c) {
    goto L_a62;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a62:
    X86_TICK(c, 10);
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa62u, "ran off the end of a function");
}
void f_00000a65(X86Cpu& c) {
    goto L_a65;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a65:
    X86_TICK(c, 7);
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa65u, "ran off the end of a function");
}
void f_00000a68(X86Cpu& c) {
    goto L_a68;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a68:
    X86_TICK(c, 5);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa68u, "ran off the end of a function");
}
void f_00000a6e(X86Cpu& c) {
    goto L_a6e;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a6e:
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa6eu, "ran off the end of a function");
}
void f_00000a71(X86Cpu& c) {
    goto L_a71;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a71:
    X86_TICK(c, 7);
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa71u, "ran off the end of a function");
}
void f_00000a74(X86Cpu& c) {
    goto L_a74;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_a74:
    X86_TICK(c, 5);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa74u, "ran off the end of a function");
}
void f_00000a7a(X86Cpu& c) {
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa7au, "ran off the end of a function");
}
void f_00000a7d(X86Cpu& c) {
    X86_TICK(c, 21);
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa7du, "ran off the end of a function");
}
void f_00000a82(X86Cpu& c) {
    X86_TICK(c, 18);
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa82u, "ran off the end of a function");
}
void f_00000a86(X86Cpu& c) {
    X86_TICK(c, 15);
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa86u, "ran off the end of a function");
}
void f_00000a8a(X86Cpu& c) {
    X86_TICK(c, 13);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa8au, "ran off the end of a function");
}
void f_00000a8c(X86Cpu& c) {
    X86_TICK(c, 10);
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa8cu, "ran off the end of a function");
}
void f_00000a8f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa8fu, "ran off the end of a function");
}
void f_00000a91(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa91u, "ran off the end of a function");
}
void f_00000a97(X86Cpu& c) {
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa97u, "ran off the end of a function");
}
void f_00000a9f(X86Cpu& c) {
    X86_TICK(c, 16);
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xa9fu, "ran off the end of a function");
}
void f_00000aa7(X86Cpu& c) {
    X86_TICK(c, 9);
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xaa7u, "ran off the end of a function");
}
void f_00000ab2(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xab2u, "ran off the end of a function");
}
void f_00000ab4(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xab4u, "ran off the end of a function");
}
void f_00000ab6(X86Cpu& c) {
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xab6u, "ran off the end of a function");
}
void f_00000abb(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xabbu, "ran off the end of a function");
}
void f_00000ac0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xac0u, "ran off the end of a function");
}
void f_00000ad3(X86Cpu& c) {
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xad3u, "ran off the end of a function");
}
void f_00000ad5(X86Cpu& c) {
    X86_TICK(c, 11);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xad5u, "ran off the end of a function");
}
void f_00000ad7(X86Cpu& c) {
    X86_TICK(c, 9);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xad7u, "ran off the end of a function");
}
void f_00000add(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xaddu, "ran off the end of a function");
}
void f_00000ae2(X86Cpu& c) {
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xae2u, "ran off the end of a function");
}
void f_00000b0c(X86Cpu& c) {
    goto L_b0c;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_b0c:
    X86_TICK(c, 13);
    // 000b0c  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xb0cu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000b11  cmp al, 2
    X86_AT(c, 0xb11u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 000b13  jae 0x7d7
    X86_AT(c, 0xb13u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 20);
    // 000b19  mov esi, eax
    X86_AT(c, 0xb19u);
    c.r[6] = c.r[0];
    // 000b1b  movzx ecx, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xb1bu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000b21  cmp byte ptr cs:[ecx + 0x7dd], 0
    X86_AT(c, 0xb21u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x7DDu))), 0x0u, 0, 1);
    // 000b29  je 0x7d7
    X86_AT(c, 0xb29u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 16);
    // 000b2f  xchg al, cl
    X86_AT(c, 0xb2fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 1)); s8(c, 1, t); }
    // 000b31  lea edi, [eax + eax*4]
    X86_AT(c, 0xb31u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 000b34  cmp dx, word ptr cs:[edi*2 + 0x598]
    X86_AT(c, 0xb34u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x598u))), 0, 2);
    // 000b3d  ja 0x7d7
    X86_AT(c, 0xb3du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000b43  cmp bx, word ptr cs:[edi*2 + 0x59a]
    X86_AT(c, 0xb43u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x59Au))), 0, 2);
    // 000b4c  ja 0x7d7
    X86_AT(c, 0xb4cu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 94);
    // 000b52  mov edi, eax
    X86_AT(c, 0xb52u);
    c.r[7] = c.r[0];
    // 000b54  mov ax, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0xb54u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u))));
    // 000b5c  test cl, cl
    X86_AT(c, 0xb5cu);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000b5e  setne cl
    X86_AT(c, 0xb5eu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000b61  shl cl, 3
    X86_AT(c, 0xb61u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000b64  shr ax, cl
    X86_AT(c, 0xb64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000b67  xor ah, ah
    X86_AT(c, 0xb67u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000b69  shl ax, 4
    X86_AT(c, 0xb69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000b6d  shr al, 4
    X86_AT(c, 0xb6du);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000b70  add ax, 0x101
    X86_AT(c, 0xb70u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x101u, 0, 2)); }
    // 000b74  shl eax, 8
    X86_AT(c, 0xb74u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000b77  xchg al, ah
    X86_AT(c, 0xb77u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000b79  imul dx, ax
    X86_AT(c, 0xb79u);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b7d  rol eax, 0x10
    X86_AT(c, 0xb7du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000b80  add bx, bx
    X86_AT(c, 0xb80u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 000b83  imul bx, ax
    X86_AT(c, 0xb83u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b87  cmp dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb87u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2);
    // 000b90  jb 0xb9b
    X86_AT(c, 0xb90u);
    if (x86_cc(c, 2)) { goto L_b9b; }
    X86_TICK(c, 4);
    // 000b92  mov dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb92u);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))));
L_b9b:
    X86_TICK(c, 11);
    // 000b9b  cmp bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xb9bu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2);
    // 000ba4  jb 0xbaf
    X86_AT(c, 0xba4u);
    if (x86_cc(c, 2)) { goto L_baf; }
    X86_TICK(c, 4);
    // 000ba6  mov bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xba6u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))));
L_baf:
    X86_TICK(c, 25);
    // 000baf  mov ax, word ptr gs:[ebp + esi*4 + 0xd2]
    X86_AT(c, 0xbafu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD2u))));
    // 000bb8  add dx, ax
    X86_AT(c, 0xbb8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000bbb  sub ax, word ptr gs:[ebp + esi*4 + 0xa0]
    X86_AT(c, 0xbbbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA0u))), 0, 2)); }
    // 000bc4  add ax, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xbc4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2)); }
    // 000bcd  cmp dx, ax
    X86_AT(c, 0xbcdu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bd0  jb 0xbd5
    X86_AT(c, 0xbd0u);
    if (x86_cc(c, 2)) { goto L_bd5; }
    X86_TICK(c, 2);
    // 000bd2  mov dx, ax
    X86_AT(c, 0xbd2u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
L_bd5:
    X86_TICK(c, 25);
    // 000bd5  mov ax, word ptr gs:[ebp + esi*4 + 0xda]
    X86_AT(c, 0xbd5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDAu))));
    // 000bde  add bx, ax
    X86_AT(c, 0xbdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000be1  sub ax, word ptr gs:[ebp + esi*4 + 0xa2]
    X86_AT(c, 0xbe1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA2u))), 0, 2)); }
    // 000bea  add ax, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xbeau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2)); }
    // 000bf3  cmp bx, ax
    X86_AT(c, 0xbf3u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bf6  jb 0xbfb
    X86_AT(c, 0xbf6u);
    if (x86_cc(c, 2)) { goto L_bfb; }
    X86_TICK(c, 2);
    // 000bf8  mov bx, ax
    X86_AT(c, 0xbf8u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
L_bfb:
    X86_TICK(c, 17);
    // 000bfb  mov word ptr gs:[ebp + esi*4 + 0xd4], dx
    X86_AT(c, 0xbfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD4u)), (c.r[2] & 0xFFFFu));
    // 000c04  mov word ptr gs:[ebp + esi*4 + 0xdc], bx
    X86_AT(c, 0xc04u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDCu)), (c.r[3] & 0xFFFFu));
    // 000c0d  mov cl, 8
    X86_AT(c, 0xc0du);
    s8(c, 1, 0x8u);
    // 000c0f  mov bl, 9
    X86_AT(c, 0xc0fu);
    s8(c, 3, 0x9u);
    // 000c11  lea edi, [ebp + 0xd2]
    X86_AT(c, 0xc11u);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 000c17  call 0x658
    X86_AT(c, 0xc17u);
    push32(c, 0xc1cu); f_00000658(c); X86_RET(c, 0xc1cu);
    X86_TICK(c, 10);
    // 000c1c  ret 
    X86_AT(c, 0xc1cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb0cu, "ran off the end of a function");
}
void f_00000b11(X86Cpu& c) {
    goto L_b11;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_b11:
    X86_TICK(c, 7);
    // 000b11  cmp al, 2
    X86_AT(c, 0xb11u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 000b13  jae 0x7d7
    X86_AT(c, 0xb13u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 20);
    // 000b19  mov esi, eax
    X86_AT(c, 0xb19u);
    c.r[6] = c.r[0];
    // 000b1b  movzx ecx, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xb1bu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000b21  cmp byte ptr cs:[ecx + 0x7dd], 0
    X86_AT(c, 0xb21u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x7DDu))), 0x0u, 0, 1);
    // 000b29  je 0x7d7
    X86_AT(c, 0xb29u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 16);
    // 000b2f  xchg al, cl
    X86_AT(c, 0xb2fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 1)); s8(c, 1, t); }
    // 000b31  lea edi, [eax + eax*4]
    X86_AT(c, 0xb31u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 000b34  cmp dx, word ptr cs:[edi*2 + 0x598]
    X86_AT(c, 0xb34u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x598u))), 0, 2);
    // 000b3d  ja 0x7d7
    X86_AT(c, 0xb3du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000b43  cmp bx, word ptr cs:[edi*2 + 0x59a]
    X86_AT(c, 0xb43u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x59Au))), 0, 2);
    // 000b4c  ja 0x7d7
    X86_AT(c, 0xb4cu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 94);
    // 000b52  mov edi, eax
    X86_AT(c, 0xb52u);
    c.r[7] = c.r[0];
    // 000b54  mov ax, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0xb54u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u))));
    // 000b5c  test cl, cl
    X86_AT(c, 0xb5cu);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000b5e  setne cl
    X86_AT(c, 0xb5eu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000b61  shl cl, 3
    X86_AT(c, 0xb61u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000b64  shr ax, cl
    X86_AT(c, 0xb64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000b67  xor ah, ah
    X86_AT(c, 0xb67u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000b69  shl ax, 4
    X86_AT(c, 0xb69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000b6d  shr al, 4
    X86_AT(c, 0xb6du);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000b70  add ax, 0x101
    X86_AT(c, 0xb70u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x101u, 0, 2)); }
    // 000b74  shl eax, 8
    X86_AT(c, 0xb74u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000b77  xchg al, ah
    X86_AT(c, 0xb77u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000b79  imul dx, ax
    X86_AT(c, 0xb79u);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b7d  rol eax, 0x10
    X86_AT(c, 0xb7du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000b80  add bx, bx
    X86_AT(c, 0xb80u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 000b83  imul bx, ax
    X86_AT(c, 0xb83u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b87  cmp dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb87u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2);
    // 000b90  jb 0xb9b
    X86_AT(c, 0xb90u);
    if (x86_cc(c, 2)) { goto L_b9b; }
    X86_TICK(c, 4);
    // 000b92  mov dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb92u);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))));
L_b9b:
    X86_TICK(c, 11);
    // 000b9b  cmp bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xb9bu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2);
    // 000ba4  jb 0xbaf
    X86_AT(c, 0xba4u);
    if (x86_cc(c, 2)) { goto L_baf; }
    X86_TICK(c, 4);
    // 000ba6  mov bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xba6u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))));
L_baf:
    X86_TICK(c, 25);
    // 000baf  mov ax, word ptr gs:[ebp + esi*4 + 0xd2]
    X86_AT(c, 0xbafu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD2u))));
    // 000bb8  add dx, ax
    X86_AT(c, 0xbb8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000bbb  sub ax, word ptr gs:[ebp + esi*4 + 0xa0]
    X86_AT(c, 0xbbbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA0u))), 0, 2)); }
    // 000bc4  add ax, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xbc4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2)); }
    // 000bcd  cmp dx, ax
    X86_AT(c, 0xbcdu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bd0  jb 0xbd5
    X86_AT(c, 0xbd0u);
    if (x86_cc(c, 2)) { goto L_bd5; }
    X86_TICK(c, 2);
    // 000bd2  mov dx, ax
    X86_AT(c, 0xbd2u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
L_bd5:
    X86_TICK(c, 25);
    // 000bd5  mov ax, word ptr gs:[ebp + esi*4 + 0xda]
    X86_AT(c, 0xbd5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDAu))));
    // 000bde  add bx, ax
    X86_AT(c, 0xbdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000be1  sub ax, word ptr gs:[ebp + esi*4 + 0xa2]
    X86_AT(c, 0xbe1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA2u))), 0, 2)); }
    // 000bea  add ax, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xbeau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2)); }
    // 000bf3  cmp bx, ax
    X86_AT(c, 0xbf3u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bf6  jb 0xbfb
    X86_AT(c, 0xbf6u);
    if (x86_cc(c, 2)) { goto L_bfb; }
    X86_TICK(c, 2);
    // 000bf8  mov bx, ax
    X86_AT(c, 0xbf8u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
L_bfb:
    X86_TICK(c, 17);
    // 000bfb  mov word ptr gs:[ebp + esi*4 + 0xd4], dx
    X86_AT(c, 0xbfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD4u)), (c.r[2] & 0xFFFFu));
    // 000c04  mov word ptr gs:[ebp + esi*4 + 0xdc], bx
    X86_AT(c, 0xc04u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDCu)), (c.r[3] & 0xFFFFu));
    // 000c0d  mov cl, 8
    X86_AT(c, 0xc0du);
    s8(c, 1, 0x8u);
    // 000c0f  mov bl, 9
    X86_AT(c, 0xc0fu);
    s8(c, 3, 0x9u);
    // 000c11  lea edi, [ebp + 0xd2]
    X86_AT(c, 0xc11u);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 000c17  call 0x658
    X86_AT(c, 0xc17u);
    push32(c, 0xc1cu); f_00000658(c); X86_RET(c, 0xc1cu);
    X86_TICK(c, 10);
    // 000c1c  ret 
    X86_AT(c, 0xc1cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb11u, "ran off the end of a function");
}
void f_00000b13(X86Cpu& c) {
    goto L_b13;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_b13:
    X86_TICK(c, 5);
    // 000b13  jae 0x7d7
    X86_AT(c, 0xb13u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 20);
    // 000b19  mov esi, eax
    X86_AT(c, 0xb19u);
    c.r[6] = c.r[0];
    // 000b1b  movzx ecx, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xb1bu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000b21  cmp byte ptr cs:[ecx + 0x7dd], 0
    X86_AT(c, 0xb21u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x7DDu))), 0x0u, 0, 1);
    // 000b29  je 0x7d7
    X86_AT(c, 0xb29u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 16);
    // 000b2f  xchg al, cl
    X86_AT(c, 0xb2fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 1)); s8(c, 1, t); }
    // 000b31  lea edi, [eax + eax*4]
    X86_AT(c, 0xb31u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 000b34  cmp dx, word ptr cs:[edi*2 + 0x598]
    X86_AT(c, 0xb34u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x598u))), 0, 2);
    // 000b3d  ja 0x7d7
    X86_AT(c, 0xb3du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000b43  cmp bx, word ptr cs:[edi*2 + 0x59a]
    X86_AT(c, 0xb43u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x59Au))), 0, 2);
    // 000b4c  ja 0x7d7
    X86_AT(c, 0xb4cu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 94);
    // 000b52  mov edi, eax
    X86_AT(c, 0xb52u);
    c.r[7] = c.r[0];
    // 000b54  mov ax, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0xb54u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u))));
    // 000b5c  test cl, cl
    X86_AT(c, 0xb5cu);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000b5e  setne cl
    X86_AT(c, 0xb5eu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000b61  shl cl, 3
    X86_AT(c, 0xb61u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000b64  shr ax, cl
    X86_AT(c, 0xb64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000b67  xor ah, ah
    X86_AT(c, 0xb67u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000b69  shl ax, 4
    X86_AT(c, 0xb69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000b6d  shr al, 4
    X86_AT(c, 0xb6du);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000b70  add ax, 0x101
    X86_AT(c, 0xb70u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x101u, 0, 2)); }
    // 000b74  shl eax, 8
    X86_AT(c, 0xb74u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000b77  xchg al, ah
    X86_AT(c, 0xb77u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000b79  imul dx, ax
    X86_AT(c, 0xb79u);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b7d  rol eax, 0x10
    X86_AT(c, 0xb7du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000b80  add bx, bx
    X86_AT(c, 0xb80u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 000b83  imul bx, ax
    X86_AT(c, 0xb83u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b87  cmp dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb87u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2);
    // 000b90  jb 0xb9b
    X86_AT(c, 0xb90u);
    if (x86_cc(c, 2)) { goto L_b9b; }
    X86_TICK(c, 4);
    // 000b92  mov dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb92u);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))));
L_b9b:
    X86_TICK(c, 11);
    // 000b9b  cmp bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xb9bu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2);
    // 000ba4  jb 0xbaf
    X86_AT(c, 0xba4u);
    if (x86_cc(c, 2)) { goto L_baf; }
    X86_TICK(c, 4);
    // 000ba6  mov bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xba6u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))));
L_baf:
    X86_TICK(c, 25);
    // 000baf  mov ax, word ptr gs:[ebp + esi*4 + 0xd2]
    X86_AT(c, 0xbafu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD2u))));
    // 000bb8  add dx, ax
    X86_AT(c, 0xbb8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000bbb  sub ax, word ptr gs:[ebp + esi*4 + 0xa0]
    X86_AT(c, 0xbbbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA0u))), 0, 2)); }
    // 000bc4  add ax, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xbc4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2)); }
    // 000bcd  cmp dx, ax
    X86_AT(c, 0xbcdu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bd0  jb 0xbd5
    X86_AT(c, 0xbd0u);
    if (x86_cc(c, 2)) { goto L_bd5; }
    X86_TICK(c, 2);
    // 000bd2  mov dx, ax
    X86_AT(c, 0xbd2u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
L_bd5:
    X86_TICK(c, 25);
    // 000bd5  mov ax, word ptr gs:[ebp + esi*4 + 0xda]
    X86_AT(c, 0xbd5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDAu))));
    // 000bde  add bx, ax
    X86_AT(c, 0xbdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000be1  sub ax, word ptr gs:[ebp + esi*4 + 0xa2]
    X86_AT(c, 0xbe1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA2u))), 0, 2)); }
    // 000bea  add ax, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xbeau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2)); }
    // 000bf3  cmp bx, ax
    X86_AT(c, 0xbf3u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bf6  jb 0xbfb
    X86_AT(c, 0xbf6u);
    if (x86_cc(c, 2)) { goto L_bfb; }
    X86_TICK(c, 2);
    // 000bf8  mov bx, ax
    X86_AT(c, 0xbf8u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
L_bfb:
    X86_TICK(c, 17);
    // 000bfb  mov word ptr gs:[ebp + esi*4 + 0xd4], dx
    X86_AT(c, 0xbfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD4u)), (c.r[2] & 0xFFFFu));
    // 000c04  mov word ptr gs:[ebp + esi*4 + 0xdc], bx
    X86_AT(c, 0xc04u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDCu)), (c.r[3] & 0xFFFFu));
    // 000c0d  mov cl, 8
    X86_AT(c, 0xc0du);
    s8(c, 1, 0x8u);
    // 000c0f  mov bl, 9
    X86_AT(c, 0xc0fu);
    s8(c, 3, 0x9u);
    // 000c11  lea edi, [ebp + 0xd2]
    X86_AT(c, 0xc11u);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 000c17  call 0x658
    X86_AT(c, 0xc17u);
    push32(c, 0xc1cu); f_00000658(c); X86_RET(c, 0xc1cu);
    X86_TICK(c, 10);
    // 000c1c  ret 
    X86_AT(c, 0xc1cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb13u, "ran off the end of a function");
}
void f_00000b19(X86Cpu& c) {
    goto L_b19;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_b19:
    X86_TICK(c, 20);
    // 000b19  mov esi, eax
    X86_AT(c, 0xb19u);
    c.r[6] = c.r[0];
    // 000b1b  movzx ecx, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xb1bu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000b21  cmp byte ptr cs:[ecx + 0x7dd], 0
    X86_AT(c, 0xb21u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x7DDu))), 0x0u, 0, 1);
    // 000b29  je 0x7d7
    X86_AT(c, 0xb29u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 16);
    // 000b2f  xchg al, cl
    X86_AT(c, 0xb2fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 1)); s8(c, 1, t); }
    // 000b31  lea edi, [eax + eax*4]
    X86_AT(c, 0xb31u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 000b34  cmp dx, word ptr cs:[edi*2 + 0x598]
    X86_AT(c, 0xb34u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x598u))), 0, 2);
    // 000b3d  ja 0x7d7
    X86_AT(c, 0xb3du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000b43  cmp bx, word ptr cs:[edi*2 + 0x59a]
    X86_AT(c, 0xb43u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x59Au))), 0, 2);
    // 000b4c  ja 0x7d7
    X86_AT(c, 0xb4cu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 94);
    // 000b52  mov edi, eax
    X86_AT(c, 0xb52u);
    c.r[7] = c.r[0];
    // 000b54  mov ax, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0xb54u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u))));
    // 000b5c  test cl, cl
    X86_AT(c, 0xb5cu);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000b5e  setne cl
    X86_AT(c, 0xb5eu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000b61  shl cl, 3
    X86_AT(c, 0xb61u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000b64  shr ax, cl
    X86_AT(c, 0xb64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000b67  xor ah, ah
    X86_AT(c, 0xb67u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000b69  shl ax, 4
    X86_AT(c, 0xb69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000b6d  shr al, 4
    X86_AT(c, 0xb6du);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000b70  add ax, 0x101
    X86_AT(c, 0xb70u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x101u, 0, 2)); }
    // 000b74  shl eax, 8
    X86_AT(c, 0xb74u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000b77  xchg al, ah
    X86_AT(c, 0xb77u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000b79  imul dx, ax
    X86_AT(c, 0xb79u);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b7d  rol eax, 0x10
    X86_AT(c, 0xb7du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000b80  add bx, bx
    X86_AT(c, 0xb80u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 000b83  imul bx, ax
    X86_AT(c, 0xb83u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b87  cmp dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb87u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2);
    // 000b90  jb 0xb9b
    X86_AT(c, 0xb90u);
    if (x86_cc(c, 2)) { goto L_b9b; }
    X86_TICK(c, 4);
    // 000b92  mov dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb92u);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))));
L_b9b:
    X86_TICK(c, 11);
    // 000b9b  cmp bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xb9bu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2);
    // 000ba4  jb 0xbaf
    X86_AT(c, 0xba4u);
    if (x86_cc(c, 2)) { goto L_baf; }
    X86_TICK(c, 4);
    // 000ba6  mov bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xba6u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))));
L_baf:
    X86_TICK(c, 25);
    // 000baf  mov ax, word ptr gs:[ebp + esi*4 + 0xd2]
    X86_AT(c, 0xbafu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD2u))));
    // 000bb8  add dx, ax
    X86_AT(c, 0xbb8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000bbb  sub ax, word ptr gs:[ebp + esi*4 + 0xa0]
    X86_AT(c, 0xbbbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA0u))), 0, 2)); }
    // 000bc4  add ax, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xbc4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2)); }
    // 000bcd  cmp dx, ax
    X86_AT(c, 0xbcdu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bd0  jb 0xbd5
    X86_AT(c, 0xbd0u);
    if (x86_cc(c, 2)) { goto L_bd5; }
    X86_TICK(c, 2);
    // 000bd2  mov dx, ax
    X86_AT(c, 0xbd2u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
L_bd5:
    X86_TICK(c, 25);
    // 000bd5  mov ax, word ptr gs:[ebp + esi*4 + 0xda]
    X86_AT(c, 0xbd5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDAu))));
    // 000bde  add bx, ax
    X86_AT(c, 0xbdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000be1  sub ax, word ptr gs:[ebp + esi*4 + 0xa2]
    X86_AT(c, 0xbe1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA2u))), 0, 2)); }
    // 000bea  add ax, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xbeau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2)); }
    // 000bf3  cmp bx, ax
    X86_AT(c, 0xbf3u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bf6  jb 0xbfb
    X86_AT(c, 0xbf6u);
    if (x86_cc(c, 2)) { goto L_bfb; }
    X86_TICK(c, 2);
    // 000bf8  mov bx, ax
    X86_AT(c, 0xbf8u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
L_bfb:
    X86_TICK(c, 17);
    // 000bfb  mov word ptr gs:[ebp + esi*4 + 0xd4], dx
    X86_AT(c, 0xbfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD4u)), (c.r[2] & 0xFFFFu));
    // 000c04  mov word ptr gs:[ebp + esi*4 + 0xdc], bx
    X86_AT(c, 0xc04u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDCu)), (c.r[3] & 0xFFFFu));
    // 000c0d  mov cl, 8
    X86_AT(c, 0xc0du);
    s8(c, 1, 0x8u);
    // 000c0f  mov bl, 9
    X86_AT(c, 0xc0fu);
    s8(c, 3, 0x9u);
    // 000c11  lea edi, [ebp + 0xd2]
    X86_AT(c, 0xc11u);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 000c17  call 0x658
    X86_AT(c, 0xc17u);
    push32(c, 0xc1cu); f_00000658(c); X86_RET(c, 0xc1cu);
    X86_TICK(c, 10);
    // 000c1c  ret 
    X86_AT(c, 0xc1cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb19u, "ran off the end of a function");
}
void f_00000b1b(X86Cpu& c) {
    goto L_b1b;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_b1b:
    X86_TICK(c, 18);
    // 000b1b  movzx ecx, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xb1bu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000b21  cmp byte ptr cs:[ecx + 0x7dd], 0
    X86_AT(c, 0xb21u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x7DDu))), 0x0u, 0, 1);
    // 000b29  je 0x7d7
    X86_AT(c, 0xb29u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 16);
    // 000b2f  xchg al, cl
    X86_AT(c, 0xb2fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 1)); s8(c, 1, t); }
    // 000b31  lea edi, [eax + eax*4]
    X86_AT(c, 0xb31u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 000b34  cmp dx, word ptr cs:[edi*2 + 0x598]
    X86_AT(c, 0xb34u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x598u))), 0, 2);
    // 000b3d  ja 0x7d7
    X86_AT(c, 0xb3du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000b43  cmp bx, word ptr cs:[edi*2 + 0x59a]
    X86_AT(c, 0xb43u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x59Au))), 0, 2);
    // 000b4c  ja 0x7d7
    X86_AT(c, 0xb4cu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 94);
    // 000b52  mov edi, eax
    X86_AT(c, 0xb52u);
    c.r[7] = c.r[0];
    // 000b54  mov ax, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0xb54u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u))));
    // 000b5c  test cl, cl
    X86_AT(c, 0xb5cu);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000b5e  setne cl
    X86_AT(c, 0xb5eu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000b61  shl cl, 3
    X86_AT(c, 0xb61u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000b64  shr ax, cl
    X86_AT(c, 0xb64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000b67  xor ah, ah
    X86_AT(c, 0xb67u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000b69  shl ax, 4
    X86_AT(c, 0xb69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000b6d  shr al, 4
    X86_AT(c, 0xb6du);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000b70  add ax, 0x101
    X86_AT(c, 0xb70u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x101u, 0, 2)); }
    // 000b74  shl eax, 8
    X86_AT(c, 0xb74u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000b77  xchg al, ah
    X86_AT(c, 0xb77u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000b79  imul dx, ax
    X86_AT(c, 0xb79u);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b7d  rol eax, 0x10
    X86_AT(c, 0xb7du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000b80  add bx, bx
    X86_AT(c, 0xb80u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 000b83  imul bx, ax
    X86_AT(c, 0xb83u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b87  cmp dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb87u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2);
    // 000b90  jb 0xb9b
    X86_AT(c, 0xb90u);
    if (x86_cc(c, 2)) { goto L_b9b; }
    X86_TICK(c, 4);
    // 000b92  mov dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb92u);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))));
L_b9b:
    X86_TICK(c, 11);
    // 000b9b  cmp bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xb9bu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2);
    // 000ba4  jb 0xbaf
    X86_AT(c, 0xba4u);
    if (x86_cc(c, 2)) { goto L_baf; }
    X86_TICK(c, 4);
    // 000ba6  mov bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xba6u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))));
L_baf:
    X86_TICK(c, 25);
    // 000baf  mov ax, word ptr gs:[ebp + esi*4 + 0xd2]
    X86_AT(c, 0xbafu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD2u))));
    // 000bb8  add dx, ax
    X86_AT(c, 0xbb8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000bbb  sub ax, word ptr gs:[ebp + esi*4 + 0xa0]
    X86_AT(c, 0xbbbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA0u))), 0, 2)); }
    // 000bc4  add ax, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xbc4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2)); }
    // 000bcd  cmp dx, ax
    X86_AT(c, 0xbcdu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bd0  jb 0xbd5
    X86_AT(c, 0xbd0u);
    if (x86_cc(c, 2)) { goto L_bd5; }
    X86_TICK(c, 2);
    // 000bd2  mov dx, ax
    X86_AT(c, 0xbd2u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
L_bd5:
    X86_TICK(c, 25);
    // 000bd5  mov ax, word ptr gs:[ebp + esi*4 + 0xda]
    X86_AT(c, 0xbd5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDAu))));
    // 000bde  add bx, ax
    X86_AT(c, 0xbdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000be1  sub ax, word ptr gs:[ebp + esi*4 + 0xa2]
    X86_AT(c, 0xbe1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA2u))), 0, 2)); }
    // 000bea  add ax, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xbeau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2)); }
    // 000bf3  cmp bx, ax
    X86_AT(c, 0xbf3u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bf6  jb 0xbfb
    X86_AT(c, 0xbf6u);
    if (x86_cc(c, 2)) { goto L_bfb; }
    X86_TICK(c, 2);
    // 000bf8  mov bx, ax
    X86_AT(c, 0xbf8u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
L_bfb:
    X86_TICK(c, 17);
    // 000bfb  mov word ptr gs:[ebp + esi*4 + 0xd4], dx
    X86_AT(c, 0xbfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD4u)), (c.r[2] & 0xFFFFu));
    // 000c04  mov word ptr gs:[ebp + esi*4 + 0xdc], bx
    X86_AT(c, 0xc04u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDCu)), (c.r[3] & 0xFFFFu));
    // 000c0d  mov cl, 8
    X86_AT(c, 0xc0du);
    s8(c, 1, 0x8u);
    // 000c0f  mov bl, 9
    X86_AT(c, 0xc0fu);
    s8(c, 3, 0x9u);
    // 000c11  lea edi, [ebp + 0xd2]
    X86_AT(c, 0xc11u);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 000c17  call 0x658
    X86_AT(c, 0xc17u);
    push32(c, 0xc1cu); f_00000658(c); X86_RET(c, 0xc1cu);
    X86_TICK(c, 10);
    // 000c1c  ret 
    X86_AT(c, 0xc1cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb1bu, "ran off the end of a function");
}
void f_00000b21(X86Cpu& c) {
    goto L_b21;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_b21:
    X86_TICK(c, 12);
    // 000b21  cmp byte ptr cs:[ecx + 0x7dd], 0
    X86_AT(c, 0xb21u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x7DDu))), 0x0u, 0, 1);
    // 000b29  je 0x7d7
    X86_AT(c, 0xb29u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 16);
    // 000b2f  xchg al, cl
    X86_AT(c, 0xb2fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 1)); s8(c, 1, t); }
    // 000b31  lea edi, [eax + eax*4]
    X86_AT(c, 0xb31u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 000b34  cmp dx, word ptr cs:[edi*2 + 0x598]
    X86_AT(c, 0xb34u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x598u))), 0, 2);
    // 000b3d  ja 0x7d7
    X86_AT(c, 0xb3du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000b43  cmp bx, word ptr cs:[edi*2 + 0x59a]
    X86_AT(c, 0xb43u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x59Au))), 0, 2);
    // 000b4c  ja 0x7d7
    X86_AT(c, 0xb4cu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 94);
    // 000b52  mov edi, eax
    X86_AT(c, 0xb52u);
    c.r[7] = c.r[0];
    // 000b54  mov ax, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0xb54u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u))));
    // 000b5c  test cl, cl
    X86_AT(c, 0xb5cu);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000b5e  setne cl
    X86_AT(c, 0xb5eu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000b61  shl cl, 3
    X86_AT(c, 0xb61u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000b64  shr ax, cl
    X86_AT(c, 0xb64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000b67  xor ah, ah
    X86_AT(c, 0xb67u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000b69  shl ax, 4
    X86_AT(c, 0xb69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000b6d  shr al, 4
    X86_AT(c, 0xb6du);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000b70  add ax, 0x101
    X86_AT(c, 0xb70u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x101u, 0, 2)); }
    // 000b74  shl eax, 8
    X86_AT(c, 0xb74u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000b77  xchg al, ah
    X86_AT(c, 0xb77u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000b79  imul dx, ax
    X86_AT(c, 0xb79u);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b7d  rol eax, 0x10
    X86_AT(c, 0xb7du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000b80  add bx, bx
    X86_AT(c, 0xb80u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 000b83  imul bx, ax
    X86_AT(c, 0xb83u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b87  cmp dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb87u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2);
    // 000b90  jb 0xb9b
    X86_AT(c, 0xb90u);
    if (x86_cc(c, 2)) { goto L_b9b; }
    X86_TICK(c, 4);
    // 000b92  mov dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb92u);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))));
L_b9b:
    X86_TICK(c, 11);
    // 000b9b  cmp bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xb9bu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2);
    // 000ba4  jb 0xbaf
    X86_AT(c, 0xba4u);
    if (x86_cc(c, 2)) { goto L_baf; }
    X86_TICK(c, 4);
    // 000ba6  mov bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xba6u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))));
L_baf:
    X86_TICK(c, 25);
    // 000baf  mov ax, word ptr gs:[ebp + esi*4 + 0xd2]
    X86_AT(c, 0xbafu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD2u))));
    // 000bb8  add dx, ax
    X86_AT(c, 0xbb8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000bbb  sub ax, word ptr gs:[ebp + esi*4 + 0xa0]
    X86_AT(c, 0xbbbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA0u))), 0, 2)); }
    // 000bc4  add ax, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xbc4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2)); }
    // 000bcd  cmp dx, ax
    X86_AT(c, 0xbcdu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bd0  jb 0xbd5
    X86_AT(c, 0xbd0u);
    if (x86_cc(c, 2)) { goto L_bd5; }
    X86_TICK(c, 2);
    // 000bd2  mov dx, ax
    X86_AT(c, 0xbd2u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
L_bd5:
    X86_TICK(c, 25);
    // 000bd5  mov ax, word ptr gs:[ebp + esi*4 + 0xda]
    X86_AT(c, 0xbd5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDAu))));
    // 000bde  add bx, ax
    X86_AT(c, 0xbdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000be1  sub ax, word ptr gs:[ebp + esi*4 + 0xa2]
    X86_AT(c, 0xbe1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA2u))), 0, 2)); }
    // 000bea  add ax, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xbeau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2)); }
    // 000bf3  cmp bx, ax
    X86_AT(c, 0xbf3u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bf6  jb 0xbfb
    X86_AT(c, 0xbf6u);
    if (x86_cc(c, 2)) { goto L_bfb; }
    X86_TICK(c, 2);
    // 000bf8  mov bx, ax
    X86_AT(c, 0xbf8u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
L_bfb:
    X86_TICK(c, 17);
    // 000bfb  mov word ptr gs:[ebp + esi*4 + 0xd4], dx
    X86_AT(c, 0xbfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD4u)), (c.r[2] & 0xFFFFu));
    // 000c04  mov word ptr gs:[ebp + esi*4 + 0xdc], bx
    X86_AT(c, 0xc04u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDCu)), (c.r[3] & 0xFFFFu));
    // 000c0d  mov cl, 8
    X86_AT(c, 0xc0du);
    s8(c, 1, 0x8u);
    // 000c0f  mov bl, 9
    X86_AT(c, 0xc0fu);
    s8(c, 3, 0x9u);
    // 000c11  lea edi, [ebp + 0xd2]
    X86_AT(c, 0xc11u);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 000c17  call 0x658
    X86_AT(c, 0xc17u);
    push32(c, 0xc1cu); f_00000658(c); X86_RET(c, 0xc1cu);
    X86_TICK(c, 10);
    // 000c1c  ret 
    X86_AT(c, 0xc1cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb21u, "ran off the end of a function");
}
void f_00000b29(X86Cpu& c) {
    goto L_b29;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_b29:
    X86_TICK(c, 5);
    // 000b29  je 0x7d7
    X86_AT(c, 0xb29u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 16);
    // 000b2f  xchg al, cl
    X86_AT(c, 0xb2fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 1)); s8(c, 1, t); }
    // 000b31  lea edi, [eax + eax*4]
    X86_AT(c, 0xb31u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 000b34  cmp dx, word ptr cs:[edi*2 + 0x598]
    X86_AT(c, 0xb34u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x598u))), 0, 2);
    // 000b3d  ja 0x7d7
    X86_AT(c, 0xb3du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000b43  cmp bx, word ptr cs:[edi*2 + 0x59a]
    X86_AT(c, 0xb43u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x59Au))), 0, 2);
    // 000b4c  ja 0x7d7
    X86_AT(c, 0xb4cu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 94);
    // 000b52  mov edi, eax
    X86_AT(c, 0xb52u);
    c.r[7] = c.r[0];
    // 000b54  mov ax, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0xb54u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u))));
    // 000b5c  test cl, cl
    X86_AT(c, 0xb5cu);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000b5e  setne cl
    X86_AT(c, 0xb5eu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000b61  shl cl, 3
    X86_AT(c, 0xb61u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000b64  shr ax, cl
    X86_AT(c, 0xb64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000b67  xor ah, ah
    X86_AT(c, 0xb67u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000b69  shl ax, 4
    X86_AT(c, 0xb69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000b6d  shr al, 4
    X86_AT(c, 0xb6du);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000b70  add ax, 0x101
    X86_AT(c, 0xb70u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x101u, 0, 2)); }
    // 000b74  shl eax, 8
    X86_AT(c, 0xb74u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000b77  xchg al, ah
    X86_AT(c, 0xb77u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000b79  imul dx, ax
    X86_AT(c, 0xb79u);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b7d  rol eax, 0x10
    X86_AT(c, 0xb7du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000b80  add bx, bx
    X86_AT(c, 0xb80u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 000b83  imul bx, ax
    X86_AT(c, 0xb83u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b87  cmp dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb87u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2);
    // 000b90  jb 0xb9b
    X86_AT(c, 0xb90u);
    if (x86_cc(c, 2)) { goto L_b9b; }
    X86_TICK(c, 4);
    // 000b92  mov dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb92u);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))));
L_b9b:
    X86_TICK(c, 11);
    // 000b9b  cmp bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xb9bu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2);
    // 000ba4  jb 0xbaf
    X86_AT(c, 0xba4u);
    if (x86_cc(c, 2)) { goto L_baf; }
    X86_TICK(c, 4);
    // 000ba6  mov bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xba6u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))));
L_baf:
    X86_TICK(c, 25);
    // 000baf  mov ax, word ptr gs:[ebp + esi*4 + 0xd2]
    X86_AT(c, 0xbafu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD2u))));
    // 000bb8  add dx, ax
    X86_AT(c, 0xbb8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000bbb  sub ax, word ptr gs:[ebp + esi*4 + 0xa0]
    X86_AT(c, 0xbbbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA0u))), 0, 2)); }
    // 000bc4  add ax, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xbc4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2)); }
    // 000bcd  cmp dx, ax
    X86_AT(c, 0xbcdu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bd0  jb 0xbd5
    X86_AT(c, 0xbd0u);
    if (x86_cc(c, 2)) { goto L_bd5; }
    X86_TICK(c, 2);
    // 000bd2  mov dx, ax
    X86_AT(c, 0xbd2u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
L_bd5:
    X86_TICK(c, 25);
    // 000bd5  mov ax, word ptr gs:[ebp + esi*4 + 0xda]
    X86_AT(c, 0xbd5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDAu))));
    // 000bde  add bx, ax
    X86_AT(c, 0xbdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000be1  sub ax, word ptr gs:[ebp + esi*4 + 0xa2]
    X86_AT(c, 0xbe1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA2u))), 0, 2)); }
    // 000bea  add ax, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xbeau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2)); }
    // 000bf3  cmp bx, ax
    X86_AT(c, 0xbf3u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bf6  jb 0xbfb
    X86_AT(c, 0xbf6u);
    if (x86_cc(c, 2)) { goto L_bfb; }
    X86_TICK(c, 2);
    // 000bf8  mov bx, ax
    X86_AT(c, 0xbf8u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
L_bfb:
    X86_TICK(c, 17);
    // 000bfb  mov word ptr gs:[ebp + esi*4 + 0xd4], dx
    X86_AT(c, 0xbfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD4u)), (c.r[2] & 0xFFFFu));
    // 000c04  mov word ptr gs:[ebp + esi*4 + 0xdc], bx
    X86_AT(c, 0xc04u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDCu)), (c.r[3] & 0xFFFFu));
    // 000c0d  mov cl, 8
    X86_AT(c, 0xc0du);
    s8(c, 1, 0x8u);
    // 000c0f  mov bl, 9
    X86_AT(c, 0xc0fu);
    s8(c, 3, 0x9u);
    // 000c11  lea edi, [ebp + 0xd2]
    X86_AT(c, 0xc11u);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 000c17  call 0x658
    X86_AT(c, 0xc17u);
    push32(c, 0xc1cu); f_00000658(c); X86_RET(c, 0xc1cu);
    X86_TICK(c, 10);
    // 000c1c  ret 
    X86_AT(c, 0xc1cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xb29u, "ran off the end of a function");
}
void f_00000c20(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000c20  cmp al, 1
    X86_AT(c, 0xc20u);
    (void)x86_sub(c, g8(c, 0), 0x1u, 0, 1);
    // 000c22  ja 0xc5c
    X86_AT(c, 0xc22u);
    if (x86_cc(c, 7)) { goto L_c5c; }
    X86_TICK(c, 7);
    // 000c24  test al, al
    X86_AT(c, 0xc24u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000c26  je 0xc2d
    X86_AT(c, 0xc26u);
    if (x86_cc(c, 4)) { goto L_c2d; }
    X86_TICK(c, 7);
    // 000c28  call 0x17d8
    X86_AT(c, 0xc28u);
    push32(c, 0xc2du); f_000017d8(c); X86_RET(c, 0xc2du);
L_c2d:
    X86_TICK(c, 15);
    // 000c2d  movzx ecx, word ptr [esi]
    X86_AT(c, 0xc2du);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c30  add esi, 4
    X86_AT(c, 0xc30u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000c33  test ecx, ecx
    X86_AT(c, 0xc33u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 000c35  je 0xc5c
    X86_AT(c, 0xc35u);
    if (x86_cc(c, 4)) { goto L_c5c; }
L_c37:
    X86_TICK(c, 79);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
L_c5c:
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc20u, "ran off the end of a function");
}
void f_00000c22(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000c22  ja 0xc5c
    X86_AT(c, 0xc22u);
    if (x86_cc(c, 7)) { goto L_c5c; }
    X86_TICK(c, 7);
    // 000c24  test al, al
    X86_AT(c, 0xc24u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000c26  je 0xc2d
    X86_AT(c, 0xc26u);
    if (x86_cc(c, 4)) { goto L_c2d; }
    X86_TICK(c, 7);
    // 000c28  call 0x17d8
    X86_AT(c, 0xc28u);
    push32(c, 0xc2du); f_000017d8(c); X86_RET(c, 0xc2du);
L_c2d:
    X86_TICK(c, 15);
    // 000c2d  movzx ecx, word ptr [esi]
    X86_AT(c, 0xc2du);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c30  add esi, 4
    X86_AT(c, 0xc30u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000c33  test ecx, ecx
    X86_AT(c, 0xc33u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 000c35  je 0xc5c
    X86_AT(c, 0xc35u);
    if (x86_cc(c, 4)) { goto L_c5c; }
L_c37:
    X86_TICK(c, 79);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
L_c5c:
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc22u, "ran off the end of a function");
}
void f_00000c24(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000c24  test al, al
    X86_AT(c, 0xc24u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 000c26  je 0xc2d
    X86_AT(c, 0xc26u);
    if (x86_cc(c, 4)) { goto L_c2d; }
    X86_TICK(c, 7);
    // 000c28  call 0x17d8
    X86_AT(c, 0xc28u);
    push32(c, 0xc2du); f_000017d8(c); X86_RET(c, 0xc2du);
L_c2d:
    X86_TICK(c, 15);
    // 000c2d  movzx ecx, word ptr [esi]
    X86_AT(c, 0xc2du);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c30  add esi, 4
    X86_AT(c, 0xc30u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000c33  test ecx, ecx
    X86_AT(c, 0xc33u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 000c35  je 0xc5c
    X86_AT(c, 0xc35u);
    if (x86_cc(c, 4)) { goto L_c5c; }
L_c37:
    X86_TICK(c, 79);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
L_c5c:
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc24u, "ran off the end of a function");
}
void f_00000c26(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000c26  je 0xc2d
    X86_AT(c, 0xc26u);
    if (x86_cc(c, 4)) { goto L_c2d; }
    X86_TICK(c, 7);
    // 000c28  call 0x17d8
    X86_AT(c, 0xc28u);
    push32(c, 0xc2du); f_000017d8(c); X86_RET(c, 0xc2du);
L_c2d:
    X86_TICK(c, 15);
    // 000c2d  movzx ecx, word ptr [esi]
    X86_AT(c, 0xc2du);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c30  add esi, 4
    X86_AT(c, 0xc30u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000c33  test ecx, ecx
    X86_AT(c, 0xc33u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 000c35  je 0xc5c
    X86_AT(c, 0xc35u);
    if (x86_cc(c, 4)) { goto L_c5c; }
L_c37:
    X86_TICK(c, 79);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
L_c5c:
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc26u, "ran off the end of a function");
}
void f_00000c28(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000c28  call 0x17d8
    X86_AT(c, 0xc28u);
    push32(c, 0xc2du); f_000017d8(c); X86_RET(c, 0xc2du);
    X86_TICK(c, 15);
    // 000c2d  movzx ecx, word ptr [esi]
    X86_AT(c, 0xc2du);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c30  add esi, 4
    X86_AT(c, 0xc30u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000c33  test ecx, ecx
    X86_AT(c, 0xc33u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 000c35  je 0xc5c
    X86_AT(c, 0xc35u);
    if (x86_cc(c, 4)) { goto L_c5c; }
L_c37:
    X86_TICK(c, 79);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
L_c5c:
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc28u, "ran off the end of a function");
}
void f_00000c2d(X86Cpu& c) {
    X86_TICK(c, 15);
    // 000c2d  movzx ecx, word ptr [esi]
    X86_AT(c, 0xc2du);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c30  add esi, 4
    X86_AT(c, 0xc30u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000c33  test ecx, ecx
    X86_AT(c, 0xc33u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 000c35  je 0xc5c
    X86_AT(c, 0xc35u);
    if (x86_cc(c, 4)) { goto L_c5c; }
L_c37:
    X86_TICK(c, 79);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
L_c5c:
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc2du, "ran off the end of a function");
}
void f_00000c30(X86Cpu& c) {
    X86_TICK(c, 9);
    // 000c30  add esi, 4
    X86_AT(c, 0xc30u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 000c33  test ecx, ecx
    X86_AT(c, 0xc33u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 000c35  je 0xc5c
    X86_AT(c, 0xc35u);
    if (x86_cc(c, 4)) { goto L_c5c; }
L_c37:
    X86_TICK(c, 79);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
L_c5c:
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc30u, "ran off the end of a function");
}
void f_00000c33(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000c33  test ecx, ecx
    X86_AT(c, 0xc33u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 000c35  je 0xc5c
    X86_AT(c, 0xc35u);
    if (x86_cc(c, 4)) { goto L_c5c; }
L_c37:
    X86_TICK(c, 79);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
L_c5c:
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc33u, "ran off the end of a function");
}
void f_00000c35(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000c35  je 0xc5c
    X86_AT(c, 0xc35u);
    if (x86_cc(c, 4)) { goto L_c5c; }
L_c37:
    X86_TICK(c, 79);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
L_c5c:
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc35u, "ran off the end of a function");
}
void f_00000c37(X86Cpu& c) {
L_c37:
    X86_TICK(c, 79);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc37u, "ran off the end of a function");
}
void f_00000c39(X86Cpu& c) {
    goto L_c39;
L_c37:
    X86_TICK(c, 4);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_c39:
    X86_TICK(c, 75);
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc39u, "ran off the end of a function");
}
void f_00000c3d(X86Cpu& c) {
    goto L_c3d;
L_c37:
    X86_TICK(c, 6);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
L_c3d:
    X86_TICK(c, 73);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc3du, "ran off the end of a function");
}
void f_00000c3e(X86Cpu& c) {
    goto L_c3e;
L_c37:
    X86_TICK(c, 18);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_c3e:
    X86_TICK(c, 61);
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc3eu, "ran off the end of a function");
}
void f_00000c41(X86Cpu& c) {
    goto L_c41;
L_c37:
    X86_TICK(c, 22);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
L_c41:
    X86_TICK(c, 57);
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc41u, "ran off the end of a function");
}
void f_00000c45(X86Cpu& c) {
    goto L_c45;
L_c37:
    X86_TICK(c, 24);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
L_c45:
    X86_TICK(c, 55);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc45u, "ran off the end of a function");
}
void f_00000c46(X86Cpu& c) {
    goto L_c46;
L_c37:
    X86_TICK(c, 36);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_c46:
    X86_TICK(c, 43);
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc46u, "ran off the end of a function");
}
void f_00000c49(X86Cpu& c) {
    goto L_c49;
L_c37:
    X86_TICK(c, 39);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
L_c49:
    X86_TICK(c, 40);
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc49u, "ran off the end of a function");
}
void f_00000c4d(X86Cpu& c) {
    goto L_c4d;
L_c37:
    X86_TICK(c, 41);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
L_c4d:
    X86_TICK(c, 38);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc4du, "ran off the end of a function");
}
void f_00000c4e(X86Cpu& c) {
    goto L_c4e;
L_c37:
    X86_TICK(c, 53);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_c4e:
    X86_TICK(c, 26);
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc4eu, "ran off the end of a function");
}
void f_00000c51(X86Cpu& c) {
    goto L_c51;
L_c37:
    X86_TICK(c, 56);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
L_c51:
    X86_TICK(c, 23);
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc51u, "ran off the end of a function");
}
void f_00000c55(X86Cpu& c) {
    goto L_c55;
L_c37:
    X86_TICK(c, 58);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
L_c55:
    X86_TICK(c, 21);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc55u, "ran off the end of a function");
}
void f_00000c56(X86Cpu& c) {
    goto L_c56;
L_c37:
    X86_TICK(c, 70);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
L_c56:
    X86_TICK(c, 9);
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc56u, "ran off the end of a function");
}
void f_00000c59(X86Cpu& c) {
    goto L_c59;
L_c37:
    X86_TICK(c, 72);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
L_c59:
    X86_TICK(c, 7);
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc59u, "ran off the end of a function");
}
void f_00000c5a(X86Cpu& c) {
    goto L_c5a;
L_c37:
    X86_TICK(c, 74);
    // 000c37  mov eax, dword ptr [esi]
    X86_AT(c, 0xc37u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 000c39  mov dx, 0xfd90
    X86_AT(c, 0xc39u);
    s16(c, 2, 0xFD90u);
    // 000c3d  out dx, al
    X86_AT(c, 0xc3du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c3e  mov eax, dword ptr [esi + 4]
    X86_AT(c, 0xc3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 000c41  mov dx, 0xfd92
    X86_AT(c, 0xc41u);
    s16(c, 2, 0xFD92u);
    // 000c45  out dx, al
    X86_AT(c, 0xc45u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c46  shr eax, 8
    X86_AT(c, 0xc46u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c49  mov dx, 0xfd94
    X86_AT(c, 0xc49u);
    s16(c, 2, 0xFD94u);
    // 000c4d  out dx, al
    X86_AT(c, 0xc4du);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c4e  shr eax, 8
    X86_AT(c, 0xc4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000c51  mov dx, 0xfd96
    X86_AT(c, 0xc51u);
    s16(c, 2, 0xFD96u);
    // 000c55  out dx, al
    X86_AT(c, 0xc55u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000c56  add esi, 8
    X86_AT(c, 0xc56u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8u, 0, 4); }
    // 000c59  dec ecx
    X86_AT(c, 0xc59u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_c5a:
    X86_TICK(c, 5);
    // 000c5a  jne 0xc37
    X86_AT(c, 0xc5au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc37u); goto L_c37; }
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5au, "ran off the end of a function");
}
void f_00000c5c(X86Cpu& c) {
    X86_TICK(c, 10);
    // 000c5c  ret 
    X86_AT(c, 0xc5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc5cu, "ran off the end of a function");
}
void f_00000c60(X86Cpu& c) {
    X86_TICK(c, 28);
    // 000c60  shl dl, 5
    X86_AT(c, 0xc60u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 1, w); if (w) s8(c, 2, r); }
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
    x86_fault(c, 0xc60u, "ran off the end of a function");
}
}

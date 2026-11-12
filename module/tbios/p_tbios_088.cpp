#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00008d05(X86Cpu& c) {
    X86_TICK(c, 7);
    // 008d05  test bl, 1
    X86_AT(c, 0x8d05u);
    (void)x86_logic(c, g8(c, 3) & 0x1u, 1);
    // 008d08  jne 0x8dfd
    X86_AT(c, 0x8d08u);
    if (x86_cc(c, 5)) { goto L_8dfd; }
    X86_TICK(c, 65);
    // 008d0e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d0eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d16  mov edx, esi
    X86_AT(c, 0x8d16u);
    c.r[2] = c.r[6];
    // 008d18  mov eax, esi
    X86_AT(c, 0x8d18u);
    c.r[0] = c.r[6];
    // 008d1a  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8d1au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008d22  mov ebx, ecx
    X86_AT(c, 0x8d22u);
    c.r[3] = c.r[1];
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 29);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8dfd:
    X86_TICK(c, 10);
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d05u, "ran off the end of a function");
}
void f_00008d08(X86Cpu& c) {
    X86_TICK(c, 5);
    // 008d08  jne 0x8dfd
    X86_AT(c, 0x8d08u);
    if (x86_cc(c, 5)) { goto L_8dfd; }
    X86_TICK(c, 65);
    // 008d0e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d0eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d16  mov edx, esi
    X86_AT(c, 0x8d16u);
    c.r[2] = c.r[6];
    // 008d18  mov eax, esi
    X86_AT(c, 0x8d18u);
    c.r[0] = c.r[6];
    // 008d1a  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8d1au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008d22  mov ebx, ecx
    X86_AT(c, 0x8d22u);
    c.r[3] = c.r[1];
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 29);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_8dfd:
    X86_TICK(c, 10);
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d08u, "ran off the end of a function");
}
void f_00008d0e(X86Cpu& c) {
    X86_TICK(c, 65);
    // 008d0e  movzx esi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d0eu);
    c.r[6] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d16  mov edx, esi
    X86_AT(c, 0x8d16u);
    c.r[2] = c.r[6];
    // 008d18  mov eax, esi
    X86_AT(c, 0x8d18u);
    c.r[0] = c.r[6];
    // 008d1a  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8d1au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008d22  mov ebx, ecx
    X86_AT(c, 0x8d22u);
    c.r[3] = c.r[1];
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d0eu, "ran off the end of a function");
}
void f_00008d16(X86Cpu& c) {
    X86_TICK(c, 59);
    // 008d16  mov edx, esi
    X86_AT(c, 0x8d16u);
    c.r[2] = c.r[6];
    // 008d18  mov eax, esi
    X86_AT(c, 0x8d18u);
    c.r[0] = c.r[6];
    // 008d1a  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8d1au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008d22  mov ebx, ecx
    X86_AT(c, 0x8d22u);
    c.r[3] = c.r[1];
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d16u, "ran off the end of a function");
}
void f_00008d18(X86Cpu& c) {
    X86_TICK(c, 57);
    // 008d18  mov eax, esi
    X86_AT(c, 0x8d18u);
    c.r[0] = c.r[6];
    // 008d1a  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8d1au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008d22  mov ebx, ecx
    X86_AT(c, 0x8d22u);
    c.r[3] = c.r[1];
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d18u, "ran off the end of a function");
}
void f_00008d1a(X86Cpu& c) {
    X86_TICK(c, 55);
    // 008d1a  movsx ecx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8d1au);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u)));
    // 008d22  mov ebx, ecx
    X86_AT(c, 0x8d22u);
    c.r[3] = c.r[1];
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d1au, "ran off the end of a function");
}
void f_00008d22(X86Cpu& c) {
    X86_TICK(c, 49);
    // 008d22  mov ebx, ecx
    X86_AT(c, 0x8d22u);
    c.r[3] = c.r[1];
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d22u, "ran off the end of a function");
}
void f_00008d24(X86Cpu& c) {
    X86_TICK(c, 47);
    // 008d24  and ecx, 7
    X86_AT(c, 0x8d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x7u, 4); }
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d24u, "ran off the end of a function");
}
void f_00008d27(X86Cpu& c) {
    X86_TICK(c, 45);
    // 008d27  sub esi, ecx
    X86_AT(c, 0x8d27u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[1], 0, 4); }
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d27u, "ran off the end of a function");
}
void f_00008d29(X86Cpu& c) {
    X86_TICK(c, 43);
    // 008d29  and esi, 0xfffffff8
    X86_AT(c, 0x8d29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFF8u, 4); }
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d29u, "ran off the end of a function");
}
void f_00008d2c(X86Cpu& c) {
    X86_TICK(c, 41);
    // 008d2c  sar esi, 1
    X86_AT(c, 0x8d2cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d2cu, "ran off the end of a function");
}
void f_00008d2e(X86Cpu& c) {
    X86_TICK(c, 38);
    // 008d2e  sub eax, ebx
    X86_AT(c, 0x8d2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d2eu, "ran off the end of a function");
}
void f_00008d30(X86Cpu& c) {
    X86_TICK(c, 36);
    // 008d30  and eax, 0xfff8
    X86_AT(c, 0x8d30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFF8u, 4); }
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d30u, "ran off the end of a function");
}
void f_00008d35(X86Cpu& c) {
    X86_TICK(c, 34);
    // 008d35  shr eax, 1
    X86_AT(c, 0x8d35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d35u, "ran off the end of a function");
}
void f_00008d37(X86Cpu& c) {
    X86_TICK(c, 31);
    // 008d37  add edi, eax
    X86_AT(c, 0x8d37u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d37u, "ran off the end of a function");
}
void f_00008d39(X86Cpu& c) {
    X86_TICK(c, 29);
    // 008d39  movzx eax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8d39u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d39u, "ran off the end of a function");
}
void f_00008d41(X86Cpu& c) {
    X86_TICK(c, 23);
    // 008d41  sub eax, edx
    X86_AT(c, 0x8d41u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d41u, "ran off the end of a function");
}
void f_00008d43(X86Cpu& c) {
    X86_TICK(c, 21);
    // 008d43  sub edx, ebx
    X86_AT(c, 0x8d43u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[3], 0, 4); }
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d43u, "ran off the end of a function");
}
void f_00008d45(X86Cpu& c) {
    X86_TICK(c, 19);
    // 008d45  and edx, 7
    X86_AT(c, 0x8d45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d45u, "ran off the end of a function");
}
void f_00008d48(X86Cpu& c) {
    X86_TICK(c, 17);
    // 008d48  lea ebx, [eax + edx*1 + 8]
    X86_AT(c, 0x8d48u);
    c.r[3] = (uint32_t)(c.r[0] + c.r[2] + 0x8u);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d48u, "ran off the end of a function");
}
void f_00008d4c(X86Cpu& c) {
    X86_TICK(c, 15);
    // 008d4c  shr ebx, 3
    X86_AT(c, 0x8d4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d4cu, "ran off the end of a function");
}
void f_00008d4f(X86Cpu& c) {
    X86_TICK(c, 12);
    // 008d4f  push ecx
    X86_AT(c, 0x8d4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d4fu, "ran off the end of a function");
}
void f_00008d50(X86Cpu& c) {
    X86_TICK(c, 10);
    // 008d50  shl cl, 2
    X86_AT(c, 0x8d50u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d50u, "ran off the end of a function");
}
void f_00008d53(X86Cpu& c) {
    X86_TICK(c, 7);
    // 008d53  test esi, esi
    X86_AT(c, 0x8d53u);
    (void)x86_logic(c, c.r[6] & c.r[6], 4);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d53u, "ran off the end of a function");
}
void f_00008d55(X86Cpu& c) {
    X86_TICK(c, 5);
    // 008d55  jge 0x8d64
    X86_AT(c, 0x8d55u);
    if (x86_cc(c, 13)) { goto L_8d64; }
    X86_TICK(c, 13);
    // 008d57  mov esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d57u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 008d5e  sub eax, eax
    X86_AT(c, 0x8d5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 008d60  jmp 0x8d7f
    X86_AT(c, 0x8d60u);
    goto L_8d7f;
L_8d64:
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
L_8d7f:
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d55u, "ran off the end of a function");
}
void f_00008d64(X86Cpu& c) {
    X86_TICK(c, 31);
    // 008d64  add esi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8d64u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d64u, "ran off the end of a function");
}
void f_00008d6b(X86Cpu& c) {
    X86_TICK(c, 25);
    // 008d6b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8d6bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008d6c  mov dx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d6cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008d74  add dx, 8
    X86_AT(c, 0x8d74u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x8u, 0, 2)); }
    // 008d78  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8d78u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008d7d  jb 0x8d81
    X86_AT(c, 0x8d7du);
    if (x86_cc(c, 2)) { goto L_8d81; }
    X86_TICK(c, 4);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8d81:
    X86_TICK(c, 41);
    // 008d81  shrd eax, edx, cl
    X86_AT(c, 0x8d81u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008d84  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8d84u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008d8c  sub edx, dword ptr [esp]
    X86_AT(c, 0x8d8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008d8f  and edx, 7
    X86_AT(c, 0x8d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008d92  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x8d92u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 008d9a  not edx
    X86_AT(c, 0x8d9au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008d9c  and dword ptr es:[edi], edx
    X86_AT(c, 0x8d9cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 008d9f  not edx
    X86_AT(c, 0x8d9fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 008da1  and eax, edx
    X86_AT(c, 0x8da1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008da3  cmp ebx, 1
    X86_AT(c, 0x8da3u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008da6  je 0x8de3
    X86_AT(c, 0x8da6u);
    if (x86_cc(c, 4)) { goto L_8de3; }
    X86_TICK(c, 28);
    // 008da8  or dword ptr es:[edi], eax
    X86_AT(c, 0x8da8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 008dab  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8dabu);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008db3  lea edx, [edx + ebx*8]
    X86_AT(c, 0x8db3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[3] * 8);
    // 008db6  push edx
    X86_AT(c, 0x8db6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008db7  add edi, 4
    X86_AT(c, 0x8db7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dba  dec ebx
    X86_AT(c, 0x8dbau);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dbb  cmp ebx, 1
    X86_AT(c, 0x8dbbu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 008dbe  je 0x8dd2
    X86_AT(c, 0x8dbeu);
    if (x86_cc(c, 4)) { goto L_8dd2; }
    X86_TICK(c, 8);
    // 008dc0  dec ebx
    X86_AT(c, 0x8dc0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dc1  mov edx, dword ptr [esi]
    X86_AT(c, 0x8dc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008dc3  add esi, 4
    X86_AT(c, 0x8dc3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_8dc6:
    X86_TICK(c, 27);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 2);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
L_8dd2:
    X86_TICK(c, 25);
    // 008dd2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dd2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dd3  pop edx
    X86_AT(c, 0x8dd3u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008dd4  and dl, 0xf8
    X86_AT(c, 0x8dd4u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & 0xF8u, 1)); }
    // 008dd7  cmp word ptr gs:[ebp + 0x2c], dx
    X86_AT(c, 0x8dd7u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 3);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
L_8de3:
    X86_TICK(c, 39);
    // 008de3  movzx edx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8de3u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008deb  sub edx, dword ptr [esp]
    X86_AT(c, 0x8debu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0, 4); }
    // 008dee  and edx, 7
    X86_AT(c, 0x8deeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 008df1  and eax, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x8df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u))), 4); }
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
L_8dfe:
    X86_TICK(c, 9);
    // 008dfe  sub edx, edx
    X86_AT(c, 0x8dfeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008e00  jmp 0x8de0
    X86_AT(c, 0x8e00u);
    X86_POLL(c, 0x8de0u); goto L_8de0;
    x86_fault(c, 0x8d6bu, "ran off the end of a function");
}
}

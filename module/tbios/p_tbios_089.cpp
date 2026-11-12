#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00008d6c(X86Cpu& c) {
    X86_TICK(c, 18);
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
    x86_fault(c, 0x8d6cu, "ran off the end of a function");
}
void f_00008d74(X86Cpu& c) {
    X86_TICK(c, 14);
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
    x86_fault(c, 0x8d74u, "ran off the end of a function");
}
void f_00008d78(X86Cpu& c) {
    X86_TICK(c, 12);
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
    x86_fault(c, 0x8d78u, "ran off the end of a function");
}
void f_00008d7d(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0x8d7du, "ran off the end of a function");
}
void f_00008d7f(X86Cpu& c) {
    X86_TICK(c, 45);
    // 008d7f  mov edx, dword ptr [esi]
    X86_AT(c, 0x8d7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
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
    x86_fault(c, 0x8d7fu, "ran off the end of a function");
}
void f_00008d81(X86Cpu& c) {
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
    x86_fault(c, 0x8d81u, "ran off the end of a function");
}
void f_00008d84(X86Cpu& c) {
    X86_TICK(c, 38);
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
    x86_fault(c, 0x8d84u, "ran off the end of a function");
}
void f_00008d8c(X86Cpu& c) {
    X86_TICK(c, 32);
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
    x86_fault(c, 0x8d8cu, "ran off the end of a function");
}
void f_00008d8f(X86Cpu& c) {
    X86_TICK(c, 26);
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
    x86_fault(c, 0x8d8fu, "ran off the end of a function");
}
void f_00008d92(X86Cpu& c) {
    X86_TICK(c, 24);
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
    x86_fault(c, 0x8d92u, "ran off the end of a function");
}
void f_00008d9a(X86Cpu& c) {
    X86_TICK(c, 20);
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
    x86_fault(c, 0x8d9au, "ran off the end of a function");
}
void f_00008d9c(X86Cpu& c) {
    X86_TICK(c, 18);
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
    x86_fault(c, 0x8d9cu, "ran off the end of a function");
}
void f_00008d9f(X86Cpu& c) {
    X86_TICK(c, 11);
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
    x86_fault(c, 0x8d9fu, "ran off the end of a function");
}
void f_00008da1(X86Cpu& c) {
    X86_TICK(c, 9);
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
    x86_fault(c, 0x8da1u, "ran off the end of a function");
}
void f_00008da3(X86Cpu& c) {
    X86_TICK(c, 7);
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
    x86_fault(c, 0x8da3u, "ran off the end of a function");
}
void f_00008da6(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0x8da6u, "ran off the end of a function");
}
void f_00008da8(X86Cpu& c) {
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8da8u, "ran off the end of a function");
}
void f_00008dab(X86Cpu& c) {
    X86_TICK(c, 21);
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dabu, "ran off the end of a function");
}
void f_00008db3(X86Cpu& c) {
    X86_TICK(c, 15);
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8db3u, "ran off the end of a function");
}
void f_00008db6(X86Cpu& c) {
    X86_TICK(c, 13);
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8db6u, "ran off the end of a function");
}
void f_00008db7(X86Cpu& c) {
    X86_TICK(c, 11);
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8db7u, "ran off the end of a function");
}
void f_00008dba(X86Cpu& c) {
    X86_TICK(c, 9);
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dbau, "ran off the end of a function");
}
void f_00008dbb(X86Cpu& c) {
    X86_TICK(c, 7);
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dbbu, "ran off the end of a function");
}
void f_00008dbe(X86Cpu& c) {
    X86_TICK(c, 5);
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dbeu, "ran off the end of a function");
}
void f_00008dc0(X86Cpu& c) {
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
    X86_TICK(c, 27);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dc0u, "ran off the end of a function");
}
void f_00008dc1(X86Cpu& c) {
    X86_TICK(c, 6);
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
    X86_TICK(c, 27);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dc1u, "ran off the end of a function");
}
void f_00008dc3(X86Cpu& c) {
    X86_TICK(c, 2);
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
    X86_TICK(c, 27);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dc3u, "ran off the end of a function");
}
void f_00008dc6(X86Cpu& c) {
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
    X86_TICK(c, 27);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dc6u, "ran off the end of a function");
}
void f_00008dc7(X86Cpu& c) {
    goto L_8dc7;
L_8dc6:
    X86_TICK(c, 7);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
L_8dc7:
    X86_TICK(c, 20);
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
    X86_TICK(c, 27);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dc7u, "ran off the end of a function");
}
void f_00008dca(X86Cpu& c) {
    goto L_8dca;
L_8dc6:
    X86_TICK(c, 10);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
L_8dca:
    X86_TICK(c, 17);
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
    X86_TICK(c, 27);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dcau, "ran off the end of a function");
}
void f_00008dcb(X86Cpu& c) {
    goto L_8dcb;
L_8dc6:
    X86_TICK(c, 13);
    // 008dc6  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x8dc6u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 008dc7  shrd edx, eax, cl
    X86_AT(c, 0x8dc7u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 008dca  xchg edx, eax
    X86_AT(c, 0x8dcau);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_8dcb:
    X86_TICK(c, 14);
    // 008dcb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8dcbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 27);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dcbu, "ran off the end of a function");
}
void f_00008dcc(X86Cpu& c) {
    goto L_8dcc;
L_8dc6:
    X86_TICK(c, 20);
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
L_8dcc:
    X86_TICK(c, 7);
    // 008dcc  dec ebx
    X86_AT(c, 0x8dccu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 27);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dccu, "ran off the end of a function");
}
void f_00008dcd(X86Cpu& c) {
    goto L_8dcd;
L_8dc6:
    X86_TICK(c, 22);
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
L_8dcd:
    X86_TICK(c, 5);
    // 008dcd  jne 0x8dc6
    X86_AT(c, 0x8dcdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x8dc6u); goto L_8dc6; }
    X86_TICK(c, 27);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dcdu, "ran off the end of a function");
}
void f_00008dcf(X86Cpu& c) {
    X86_TICK(c, 27);
    // 008dcf  sub esi, 4
    X86_AT(c, 0x8dcfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x4u, 0, 4); }
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dcfu, "ran off the end of a function");
}
void f_00008dd2(X86Cpu& c) {
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dd2u, "ran off the end of a function");
}
void f_00008dd3(X86Cpu& c) {
    X86_TICK(c, 18);
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dd3u, "ran off the end of a function");
}
void f_00008dd4(X86Cpu& c) {
    X86_TICK(c, 14);
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dd4u, "ran off the end of a function");
}
void f_00008dd7(X86Cpu& c) {
    X86_TICK(c, 12);
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
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8dd7u, "ran off the end of a function");
}
void f_00008ddc(X86Cpu& c) {
    X86_TICK(c, 5);
    // 008ddc  jb 0x8dfe
    X86_AT(c, 0x8ddcu);
    if (x86_cc(c, 2)) { goto L_8dfe; }
    X86_TICK(c, 4);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
L_8de0:
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8ddcu, "ran off the end of a function");
}
void f_00008dde(X86Cpu& c) {
    X86_TICK(c, 46);
    // 008dde  mov edx, dword ptr [esi]
    X86_AT(c, 0x8ddeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8ddeu, "ran off the end of a function");
}
void f_00008de0(X86Cpu& c) {
    X86_TICK(c, 42);
    // 008de0  shrd eax, edx, cl
    X86_AT(c, 0x8de0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
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
    x86_fault(c, 0x8de0u, "ran off the end of a function");
}
void f_00008de3(X86Cpu& c) {
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
    x86_fault(c, 0x8de3u, "ran off the end of a function");
}
void f_00008deb(X86Cpu& c) {
    X86_TICK(c, 33);
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
    x86_fault(c, 0x8debu, "ran off the end of a function");
}
void f_00008dee(X86Cpu& c) {
    X86_TICK(c, 27);
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
    x86_fault(c, 0x8deeu, "ran off the end of a function");
}
void f_00008df1(X86Cpu& c) {
    X86_TICK(c, 25);
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
    x86_fault(c, 0x8df1u, "ran off the end of a function");
}
void f_00008df9(X86Cpu& c) {
    X86_TICK(c, 19);
    // 008df9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x8df9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8df9u, "ran off the end of a function");
}
void f_00008dfa(X86Cpu& c) {
    X86_TICK(c, 12);
    // 008dfa  add esp, 4
    X86_AT(c, 0x8dfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8dfau, "ran off the end of a function");
}
void f_00008dfd(X86Cpu& c) {
    X86_TICK(c, 10);
    // 008dfd  ret 
    X86_AT(c, 0x8dfdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8dfdu, "ran off the end of a function");
}
void f_00008ed7(X86Cpu& c) {
    goto L_8ed7;
L_8170:
    X86_TICK(c, 7);
    // 008170  call 0xb930
    X86_AT(c, 0x8170u);
    push32(c, 0x8175u); f_0000b930(c); X86_RET(c, 0x8175u);
    X86_TICK(c, 5);
    // 008175  jae 0x8180
    X86_AT(c, 0x8175u);
    if (x86_cc(c, 3)) { goto L_8180; }
    X86_TICK(c, 10);
    // 008177  ret 
    X86_AT(c, 0x8177u);
    c.eip = pop32(c); return;
L_8180:
    X86_TICK(c, 58);
    // 008180  mov es, word ptr gs:[ebp + 4]
    X86_AT(c, 0x8180u);
    x86_load_seg(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4u))) & 0xFFFFu);
    // 008184  movzx eax, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8184u);
    c.r[0] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u)));
    // 00818c  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x818cu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 008191  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x8191u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 008195  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x8195u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00819c  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x819cu);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0081a3  and bx, 0xffe0
    X86_AT(c, 0x81a3u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081a8  shld eax, ebx, 0x10
    X86_AT(c, 0x81a8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0081ac  and ax, 0xffe0
    X86_AT(c, 0x81acu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 0081b0  cmp bx, ax
    X86_AT(c, 0x81b0u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 0081b3  je 0x824c
    X86_AT(c, 0x81b3u);
    if (x86_cc(c, 4)) { goto L_824c; }
    X86_TICK(c, 25);
    // 0081b9  push eax
    X86_AT(c, 0x81b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0081ba  push ebx
    X86_AT(c, 0x81bau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0081bb  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x81bbu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0081c3  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x81c3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0081cb  and eax, 0x1f
    X86_AT(c, 0x81cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0081d0  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x81d0u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0081d8  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x81d8u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x81dfu); x86_call(c, t); X86_RET(c, 0x81dfu); }
    X86_TICK(c, 18);
    // 0081df  pop ebx
    X86_AT(c, 0x81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0081e0  add bx, 0x20
    X86_AT(c, 0x81e0u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 0081e4  cmp word ptr [esp], bx
    X86_AT(c, 0x81e4u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0081e8  je 0x821c
    X86_AT(c, 0x81e8u);
    if (x86_cc(c, 4)) { goto L_821c; }
    X86_TICK(c, 7);
    // 0081ea  jmp dword ptr gs:[ebp + 0x328]
    X86_AT(c, 0x81eau);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)))); return;
L_821c:
    X86_TICK(c, 23);
    // 00821c  add esp, 4
    X86_AT(c, 0x821cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00821f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x821fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008227  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8227u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00822f  and eax, 0x1f
    X86_AT(c, 0x822fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008234  mov eax, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8234u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 00823c  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x823cu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8243u); x86_call(c, t); X86_RET(c, 0x8243u); }
    X86_TICK(c, 17);
    // 008243  and byte ptr gs:[ebp + 0x10a], 0x7f
    X86_AT(c, 0x8243u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 00824b  ret 
    X86_AT(c, 0x824bu);
    c.eip = pop32(c); return;
L_824c:
    X86_TICK(c, 32);
    // 00824c  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x824cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008254  mov ecx, dword ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8254u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00825b  shld edx, ecx, 0x10
    X86_AT(c, 0x825bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00825f  and eax, 0x1f
    X86_AT(c, 0x825fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008264  mov eax, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8264u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 00826c  and ecx, 0x1f
    X86_AT(c, 0x826cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 00826f  and eax, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x826fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008277  jmp dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8277u);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)))); return;
L_8ed7:
    X86_TICK(c, 11);
    // 008ed7  mov ecx, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x8ed7u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 008edb  jmp dword ptr cs:[ecx*4 + 0x8ee4]
    X86_AT(c, 0x8edbu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8EE4u)));
      switch (t) {
      case 0x8f50u: goto L_8f50;
      case 0x99c8u: goto L_99c8;
      case 0xa598u: goto L_a598;
      case 0xa7e4u: goto L_a7e4;
      default: x86_jump(c, t); return; } }
L_8f50:
    X86_TICK(c, 63);
    // 008f50  mov esi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x8f50u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 008f57  movzx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8f57u);
    c.r[7] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008f5f  shr edi, 3
    X86_AT(c, 0x8f5fu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 008f62  mov eax, edi
    X86_AT(c, 0x8f62u);
    c.r[0] = c.r[7];
    // 008f64  mov edx, edi
    X86_AT(c, 0x8f64u);
    c.r[2] = c.r[7];
    // 008f66  add edi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x8f66u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 008f6d  mov bx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8f6du);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 008f75  mov cl, bl
    X86_AT(c, 0x8f75u);
    s8(c, 1, g8(c, 3));
    // 008f77  sar bx, 3
    X86_AT(c, 0x8f77u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 2, w); if (w) s16(c, 3, r); }
    // 008f7b  sub ax, bx
    X86_AT(c, 0x8f7bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 008f7e  add esi, eax
    X86_AT(c, 0x8f7eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 008f80  movzx ebx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8f80u);
    c.r[3] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 008f88  shr ebx, 3
    X86_AT(c, 0x8f88u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 008f8b  sub ebx, edx
    X86_AT(c, 0x8f8bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[2], 0, 4); }
    // 008f8d  inc ebx
    X86_AT(c, 0x8f8du);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 008f8e  and cl, 7
    X86_AT(c, 0x8f8eu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x7u, 1)); }
    // 008f91  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x8f91u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 008f99  je 0x8fc9
    X86_AT(c, 0x8f99u);
    if (x86_cc(c, 4)) { goto L_8fc9; }
    X86_TICK(c, 21);
    // 008f9b  push ebx
    X86_AT(c, 0x8f9bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008f9c  push ecx
    X86_AT(c, 0x8f9cu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 008f9d  push edi
    X86_AT(c, 0x8f9du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 008f9e  mov bx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8f9eu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008fa6  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8fa6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008fae  call 0x7f18
    X86_AT(c, 0x8faeu);
    push32(c, 0x8fb3u); f_00007f18(c); X86_RET(c, 0x8fb3u);
    X86_TICK(c, 22);
    // 008fb3  mov edx, edi
    X86_AT(c, 0x8fb3u);
    c.r[2] = c.r[7];
    // 008fb5  pop edi
    X86_AT(c, 0x8fb5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 008fb6  mov cl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8fb6u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 008fbd  and cl, 0x18
    X86_AT(c, 0x8fbdu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x18u, 1)); }
    // 008fc0  mov byte ptr gs:[ebp + 0x420], cl
    X86_AT(c, 0x8fc0u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x420u)), g8(c, 1));
    // 008fc7  pop ecx
    X86_AT(c, 0x8fc7u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 008fc8  pop ebx
    X86_AT(c, 0x8fc8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_8fc9:
    X86_TICK(c, 11);
    // 008fc9  mov eax, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x8fc9u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)));
    // 008fd0  jmp dword ptr cs:[eax*4 + 0x8fd8]
    X86_AT(c, 0x8fd0u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x8FD8u)));
      switch (t) {
      case 0x8170u: X86_POLL(c, 0x8170u); goto L_8170;
      case 0x9018u: goto L_9018;
      case 0x901cu: goto L_901c;
      case 0x91b8u: goto L_91b8;
      case 0x930cu: goto L_930c;
      case 0x94c8u: goto L_94c8;
      case 0x961cu: goto L_961c;
      case 0x97c4u: goto L_97c4;
      default: x86_jump(c, t); return; } }
L_9018:
    X86_TICK(c, 10);
    // 009018  ret 
    X86_AT(c, 0x9018u);
    c.eip = pop32(c); return;
L_901c:
    X86_TICK(c, 12);
    // 00901c  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x901cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009024  jne 0x90d4
    X86_AT(c, 0x9024u);
    if (x86_cc(c, 5)) { goto L_90d4; }
    X86_TICK(c, 7);
    // 00902a  cmp ebx, 1
    X86_AT(c, 0x902au);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00902d  je 0x9098
    X86_AT(c, 0x902du);
    if (x86_cc(c, 4)) { goto L_9098; }
    X86_TICK(c, 50);
    // 00902f  mov ax, word ptr [esi - 1]
    X86_AT(c, 0x902fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFFu))));
    // 009033  xchg al, ah
    X86_AT(c, 0x9033u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009035  shr ax, cl
    X86_AT(c, 0x9035u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 009038  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9038u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00903f  and edx, 7
    X86_AT(c, 0x903fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009042  mov dl, byte ptr cs:[edx + 0xc3dc]
    X86_AT(c, 0x9042u);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3DCu))));
    // 009049  not dl
    X86_AT(c, 0x9049u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 00904b  mov ah, byte ptr es:[edi]
    X86_AT(c, 0x904bu);
    s8(c, 4, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 00904e  and ah, dl
    X86_AT(c, 0x904eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & g8(c, 2), 1)); }
    // 009050  not dl
    X86_AT(c, 0x9050u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 009052  and al, dl
    X86_AT(c, 0x9052u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 009054  or al, ah
    X86_AT(c, 0x9054u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 4), 1)); }
    // 009056  stosb byte ptr es:[edi], al
    X86_AT(c, 0x9056u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 009057  dec ebx
    X86_AT(c, 0x9057u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009058  cmp ebx, 1
    X86_AT(c, 0x9058u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00905b  je 0x906b
    X86_AT(c, 0x905bu);
    if (x86_cc(c, 4)) { goto L_906b; }
    X86_TICK(c, 2);
    // 00905d  dec ebx
    X86_AT(c, 0x905du);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_905e:
    X86_TICK(c, 26);
    // 00905e  mov ax, word ptr [esi]
    X86_AT(c, 0x905eu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009061  xchg al, ah
    X86_AT(c, 0x9061u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009063  shr ax, cl
    X86_AT(c, 0x9063u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 009066  stosb byte ptr es:[edi], al
    X86_AT(c, 0x9066u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 009067  inc esi
    X86_AT(c, 0x9067u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 009068  dec ebx
    X86_AT(c, 0x9068u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009069  jne 0x905e
    X86_AT(c, 0x9069u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x905eu); goto L_905e; }
L_906b:
    X86_TICK(c, 46);
    // 00906b  mov ax, word ptr [esi]
    X86_AT(c, 0x906bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00906e  xchg al, ah
    X86_AT(c, 0x906eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009070  shr ax, cl
    X86_AT(c, 0x9070u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 009073  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9073u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00907a  and edx, 7
    X86_AT(c, 0x907au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 00907d  mov dl, byte ptr cs:[edx + 0xc3e4]
    X86_AT(c, 0x907du);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3E4u))));
    // 009084  not dl
    X86_AT(c, 0x9084u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 009086  mov ah, byte ptr es:[edi]
    X86_AT(c, 0x9086u);
    s8(c, 4, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 009089  and ah, dl
    X86_AT(c, 0x9089u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & g8(c, 2), 1)); }
    // 00908b  not dl
    X86_AT(c, 0x908bu);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 00908d  and al, dl
    X86_AT(c, 0x908du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 00908f  or ah, al
    X86_AT(c, 0x908fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | g8(c, 0), 1)); }
    // 009091  mov byte ptr es:[edi], ah
    X86_AT(c, 0x9091u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 009094  ret 
    X86_AT(c, 0x9094u);
    c.eip = pop32(c); return;
L_9098:
    X86_TICK(c, 57);
    // 009098  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9098u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00909f  shld ebx, eax, 0x10
    X86_AT(c, 0x909fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0090a3  and eax, 7
    X86_AT(c, 0x90a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0090a8  mov dl, byte ptr cs:[eax + 0xc3dc]
    X86_AT(c, 0x90a8u);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3DCu))));
    // 0090af  and ebx, 7
    X86_AT(c, 0x90afu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 0090b2  and dl, byte ptr cs:[ebx + 0xc3e4]
    X86_AT(c, 0x90b2u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3E4u))), 1)); }
    // 0090b9  mov ax, word ptr [esi]
    X86_AT(c, 0x90b9u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0090bc  xchg al, ah
    X86_AT(c, 0x90bcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0090be  shr ax, cl
    X86_AT(c, 0x90beu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 0090c1  not dl
    X86_AT(c, 0x90c1u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 0090c3  mov ah, byte ptr es:[edi]
    X86_AT(c, 0x90c3u);
    s8(c, 4, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 0090c6  and ah, dl
    X86_AT(c, 0x90c6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & g8(c, 2), 1)); }
    // 0090c8  not dl
    X86_AT(c, 0x90c8u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 0090ca  and al, dl
    X86_AT(c, 0x90cau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 0090cc  or ah, al
    X86_AT(c, 0x90ccu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | g8(c, 0), 1)); }
    // 0090ce  mov byte ptr es:[edi], ah
    X86_AT(c, 0x90ceu);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 0090d1  ret 
    X86_AT(c, 0x90d1u);
    c.eip = pop32(c); return;
L_90d4:
    X86_TICK(c, 7);
    // 0090d4  cmp ebx, 1
    X86_AT(c, 0x90d4u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0090d7  je 0x9170
    X86_AT(c, 0x90d7u);
    if (x86_cc(c, 4)) { goto L_9170; }
    X86_TICK(c, 19);
    // 0090dd  push ebx
    X86_AT(c, 0x90ddu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0090de  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x90deu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0090e5  and ebx, 7
    X86_AT(c, 0x90e5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 0090e8  mov bl, byte ptr cs:[ebx + 0xc3dc]
    X86_AT(c, 0x90e8u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3DCu))));
    // 0090ef  call 0x7f60
    X86_AT(c, 0x90efu);
    push32(c, 0x90f4u); f_00007f60(c); X86_RET(c, 0x90f4u);
    X86_TICK(c, 51);
    // 0090f4  and bl, al
    X86_AT(c, 0x90f4u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 0090f6  not bl
    X86_AT(c, 0x90f6u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 0090f8  mov bh, byte ptr es:[edi]
    X86_AT(c, 0x90f8u);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 0090fb  and bh, bl
    X86_AT(c, 0x90fbu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & g8(c, 3), 1)); }
    // 0090fd  mov ax, word ptr [esi - 1]
    X86_AT(c, 0x90fdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFFu))));
    // 009101  xchg al, ah
    X86_AT(c, 0x9101u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009103  shr ax, cl
    X86_AT(c, 0x9103u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 009106  not bl
    X86_AT(c, 0x9106u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 009108  and al, bl
    X86_AT(c, 0x9108u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 00910a  or al, bh
    X86_AT(c, 0x910au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 7), 1)); }
    // 00910c  stosb byte ptr es:[edi], al
    X86_AT(c, 0x910cu);
    x86_string(c, 2, 1, 0, 4, 3);
    // 00910d  dec dword ptr [esp]
    X86_AT(c, 0x910du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009110  cmp dword ptr [esp], 1
    X86_AT(c, 0x9110u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 009114  je 0x913c
    X86_AT(c, 0x9114u);
    if (x86_cc(c, 4)) { goto L_913c; }
    X86_TICK(c, 6);
    // 009116  dec dword ptr [esp]
    X86_AT(c, 0x9116u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_9119:
    X86_TICK(c, 7);
    // 009119  call 0x7f60
    X86_AT(c, 0x9119u);
    push32(c, 0x911eu); f_00007f60(c); X86_RET(c, 0x911eu);
    X86_TICK(c, 46);
    // 00911e  mov bl, al
    X86_AT(c, 0x911eu);
    s8(c, 3, g8(c, 0));
    // 009120  not bl
    X86_AT(c, 0x9120u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 009122  mov bh, byte ptr es:[edi]
    X86_AT(c, 0x9122u);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 009125  and bh, bl
    X86_AT(c, 0x9125u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & g8(c, 3), 1)); }
    // 009127  mov ax, word ptr [esi]
    X86_AT(c, 0x9127u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00912a  xchg al, ah
    X86_AT(c, 0x912au);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 00912c  shr ax, cl
    X86_AT(c, 0x912cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 00912f  not bl
    X86_AT(c, 0x912fu);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 009131  and al, bl
    X86_AT(c, 0x9131u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 009133  or al, bh
    X86_AT(c, 0x9133u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 7), 1)); }
    // 009135  stosb byte ptr es:[edi], al
    X86_AT(c, 0x9135u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 009136  inc esi
    X86_AT(c, 0x9136u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 009137  dec dword ptr [esp]
    X86_AT(c, 0x9137u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00913a  jne 0x9119
    X86_AT(c, 0x913au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9119u); goto L_9119; }
L_913c:
    X86_TICK(c, 17);
    // 00913c  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x913cu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009143  and ebx, 7
    X86_AT(c, 0x9143u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009146  mov bl, byte ptr cs:[ebx + 0xc3e4]
    X86_AT(c, 0x9146u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3E4u))));
    // 00914d  call 0x7f60
    X86_AT(c, 0x914du);
    push32(c, 0x9152u); f_00007f60(c); X86_RET(c, 0x9152u);
    X86_TICK(c, 42);
    // 009152  and bl, al
    X86_AT(c, 0x9152u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 009154  not bl
    X86_AT(c, 0x9154u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 009156  mov bh, byte ptr es:[edi]
    X86_AT(c, 0x9156u);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 009159  and bh, bl
    X86_AT(c, 0x9159u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & g8(c, 3), 1)); }
    // 00915b  mov ax, word ptr [esi]
    X86_AT(c, 0x915bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00915e  xchg al, ah
    X86_AT(c, 0x915eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009160  shr ax, cl
    X86_AT(c, 0x9160u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 009163  not bl
    X86_AT(c, 0x9163u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 009165  and al, bl
    X86_AT(c, 0x9165u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 009167  or bh, al
    X86_AT(c, 0x9167u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 0), 1)); }
    // 009169  mov byte ptr es:[edi], bh
    X86_AT(c, 0x9169u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 7));
    // 00916c  pop ebx
    X86_AT(c, 0x916cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00916d  ret 
    X86_AT(c, 0x916du);
    c.eip = pop32(c); return;
L_9170:
    X86_TICK(c, 29);
    // 009170  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9170u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009177  and eax, 7
    X86_AT(c, 0x9177u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00917c  mov bl, byte ptr cs:[eax + 0xc3dc]
    X86_AT(c, 0x917cu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3DCu))));
    // 009183  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9183u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00918a  and eax, 7
    X86_AT(c, 0x918au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00918f  and bl, byte ptr cs:[eax + 0xc3e4]
    X86_AT(c, 0x918fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3E4u))), 1)); }
    // 009196  call 0x7f60
    X86_AT(c, 0x9196u);
    push32(c, 0x919bu); f_00007f60(c); X86_RET(c, 0x919bu);
    X86_TICK(c, 38);
    // 00919b  and bl, al
    X86_AT(c, 0x919bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 00919d  mov ax, word ptr [esi]
    X86_AT(c, 0x919du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0091a0  xchg al, ah
    X86_AT(c, 0x91a0u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0091a2  shr ax, cl
    X86_AT(c, 0x91a2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 0091a5  not bl
    X86_AT(c, 0x91a5u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 0091a7  mov bh, byte ptr es:[edi]
    X86_AT(c, 0x91a7u);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 0091aa  and bh, bl
    X86_AT(c, 0x91aau);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & g8(c, 3), 1)); }
    // 0091ac  not bl
    X86_AT(c, 0x91acu);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 0091ae  and al, bl
    X86_AT(c, 0x91aeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 0091b0  or bh, al
    X86_AT(c, 0x91b0u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 0), 1)); }
    // 0091b2  mov byte ptr es:[edi], bh
    X86_AT(c, 0x91b2u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 7));
    // 0091b5  ret 
    X86_AT(c, 0x91b5u);
    c.eip = pop32(c); return;
L_91b8:
    X86_TICK(c, 12);
    // 0091b8  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x91b8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 0091c0  jne 0x9254
    X86_AT(c, 0x91c0u);
    if (x86_cc(c, 5)) { goto L_9254; }
    X86_TICK(c, 7);
    // 0091c6  cmp ebx, 1
    X86_AT(c, 0x91c6u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0091c9  je 0x9224
    X86_AT(c, 0x91c9u);
    if (x86_cc(c, 4)) { goto L_9224; }
    X86_TICK(c, 40);
    // 0091cb  mov ax, word ptr [esi - 1]
    X86_AT(c, 0x91cbu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFFu))));
    // 0091cf  xchg al, ah
    X86_AT(c, 0x91cfu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0091d1  shr ax, cl
    X86_AT(c, 0x91d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 0091d4  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x91d4u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0091db  and edx, 7
    X86_AT(c, 0x91dbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 0091de  mov dl, byte ptr cs:[edx + 0xc3dc]
    X86_AT(c, 0x91deu);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3DCu))));
    // 0091e5  and al, dl
    X86_AT(c, 0x91e5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 0091e7  or byte ptr es:[edi], al
    X86_AT(c, 0x91e7u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 0091ea  inc edi
    X86_AT(c, 0x91eau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0091eb  dec ebx
    X86_AT(c, 0x91ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0091ec  cmp ebx, 1
    X86_AT(c, 0x91ecu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0091ef  je 0x9202
    X86_AT(c, 0x91efu);
    if (x86_cc(c, 4)) { goto L_9202; }
    X86_TICK(c, 2);
    // 0091f1  dec ebx
    X86_AT(c, 0x91f1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_91f2:
    X86_TICK(c, 28);
    // 0091f2  mov ax, word ptr [esi]
    X86_AT(c, 0x91f2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0091f5  xchg al, ah
    X86_AT(c, 0x91f5u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0091f7  shr ax, cl
    X86_AT(c, 0x91f7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 0091fa  or byte ptr es:[edi], al
    X86_AT(c, 0x91fau);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 0091fd  inc esi
    X86_AT(c, 0x91fdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0091fe  inc edi
    X86_AT(c, 0x91feu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0091ff  dec ebx
    X86_AT(c, 0x91ffu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009200  jne 0x91f2
    X86_AT(c, 0x9200u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x91f2u); goto L_91f2; }
L_9202:
    X86_TICK(c, 39);
    // 009202  mov ax, word ptr [esi]
    X86_AT(c, 0x9202u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009205  xchg al, ah
    X86_AT(c, 0x9205u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009207  shr ax, cl
    X86_AT(c, 0x9207u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 00920a  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x920au);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009211  and edx, 7
    X86_AT(c, 0x9211u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009214  mov dl, byte ptr cs:[edx + 0xc3e4]
    X86_AT(c, 0x9214u);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3E4u))));
    // 00921b  and al, dl
    X86_AT(c, 0x921bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 00921d  or byte ptr es:[edi], al
    X86_AT(c, 0x921du);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 009220  ret 
    X86_AT(c, 0x9220u);
    c.eip = pop32(c); return;
L_9224:
    X86_TICK(c, 50);
    // 009224  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9224u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00922b  shld ebx, eax, 0x10
    X86_AT(c, 0x922bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00922f  and eax, 7
    X86_AT(c, 0x922fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009234  mov dl, byte ptr cs:[eax + 0xc3dc]
    X86_AT(c, 0x9234u);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3DCu))));
    // 00923b  and ebx, 7
    X86_AT(c, 0x923bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00923e  and dl, byte ptr cs:[ebx + 0xc3e4]
    X86_AT(c, 0x923eu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3E4u))), 1)); }
    // 009245  mov ax, word ptr [esi]
    X86_AT(c, 0x9245u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009248  xchg al, ah
    X86_AT(c, 0x9248u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 00924a  shr ax, cl
    X86_AT(c, 0x924au);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 00924d  and al, dl
    X86_AT(c, 0x924du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 00924f  or byte ptr es:[edi], al
    X86_AT(c, 0x924fu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 009252  ret 
    X86_AT(c, 0x9252u);
    c.eip = pop32(c); return;
L_9254:
    X86_TICK(c, 7);
    // 009254  cmp ebx, 1
    X86_AT(c, 0x9254u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009257  je 0x92d0
    X86_AT(c, 0x9257u);
    if (x86_cc(c, 4)) { goto L_92d0; }
    X86_TICK(c, 19);
    // 009259  push ebx
    X86_AT(c, 0x9259u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00925a  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x925au);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009261  and ebx, 7
    X86_AT(c, 0x9261u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009264  mov bl, byte ptr cs:[ebx + 0xc3dc]
    X86_AT(c, 0x9264u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3DCu))));
    // 00926b  call 0x7f60
    X86_AT(c, 0x926bu);
    push32(c, 0x9270u); f_00007f60(c); X86_RET(c, 0x9270u);
    X86_TICK(c, 41);
    // 009270  and bl, al
    X86_AT(c, 0x9270u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 009272  mov ax, word ptr [esi - 1]
    X86_AT(c, 0x9272u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFFu))));
    // 009276  xchg al, ah
    X86_AT(c, 0x9276u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009278  shr ax, cl
    X86_AT(c, 0x9278u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 00927b  and al, bl
    X86_AT(c, 0x927bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 00927d  or byte ptr es:[edi], al
    X86_AT(c, 0x927du);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 009280  inc edi
    X86_AT(c, 0x9280u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 009281  dec dword ptr [esp]
    X86_AT(c, 0x9281u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009284  cmp dword ptr [esp], 1
    X86_AT(c, 0x9284u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 009288  je 0x92a8
    X86_AT(c, 0x9288u);
    if (x86_cc(c, 4)) { goto L_92a8; }
    X86_TICK(c, 6);
    // 00928a  dec dword ptr [esp]
    X86_AT(c, 0x928au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_928d:
    X86_TICK(c, 7);
    // 00928d  call 0x7f60
    X86_AT(c, 0x928du);
    push32(c, 0x9292u); f_00007f60(c); X86_RET(c, 0x9292u);
    X86_TICK(c, 36);
    // 009292  mov bl, al
    X86_AT(c, 0x9292u);
    s8(c, 3, g8(c, 0));
    // 009294  mov ax, word ptr [esi]
    X86_AT(c, 0x9294u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009297  xchg al, ah
    X86_AT(c, 0x9297u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009299  shr ax, cl
    X86_AT(c, 0x9299u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 00929c  and al, bl
    X86_AT(c, 0x929cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 00929e  or byte ptr es:[edi], al
    X86_AT(c, 0x929eu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 0092a1  inc esi
    X86_AT(c, 0x92a1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0092a2  inc edi
    X86_AT(c, 0x92a2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0092a3  dec dword ptr [esp]
    X86_AT(c, 0x92a3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0092a6  jne 0x928d
    X86_AT(c, 0x92a6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x928du); goto L_928d; }
L_92a8:
    X86_TICK(c, 17);
    // 0092a8  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x92a8u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 0092af  and ebx, 7
    X86_AT(c, 0x92afu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 0092b2  mov bl, byte ptr cs:[ebx + 0xc3e4]
    X86_AT(c, 0x92b2u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3E4u))));
    // 0092b9  call 0x7f60
    X86_AT(c, 0x92b9u);
    push32(c, 0x92beu); f_00007f60(c); X86_RET(c, 0x92beu);
    X86_TICK(c, 35);
    // 0092be  and bl, al
    X86_AT(c, 0x92beu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 0092c0  mov ax, word ptr [esi]
    X86_AT(c, 0x92c0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0092c3  xchg al, ah
    X86_AT(c, 0x92c3u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0092c5  shr ax, cl
    X86_AT(c, 0x92c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 0092c8  and al, bl
    X86_AT(c, 0x92c8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 0092ca  or byte ptr es:[edi], al
    X86_AT(c, 0x92cau);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 0092cd  pop ebx
    X86_AT(c, 0x92cdu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0092ce  ret 
    X86_AT(c, 0x92ceu);
    c.eip = pop32(c); return;
L_92d0:
    X86_TICK(c, 29);
    // 0092d0  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x92d0u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0092d7  and eax, 7
    X86_AT(c, 0x92d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0092dc  mov bl, byte ptr cs:[eax + 0xc3dc]
    X86_AT(c, 0x92dcu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3DCu))));
    // 0092e3  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x92e3u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 0092ea  and eax, 7
    X86_AT(c, 0x92eau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0092ef  and bl, byte ptr cs:[eax + 0xc3e4]
    X86_AT(c, 0x92efu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3E4u))), 1)); }
    // 0092f6  call 0x7f60
    X86_AT(c, 0x92f6u);
    push32(c, 0x92fbu); f_00007f60(c); X86_RET(c, 0x92fbu);
    X86_TICK(c, 31);
    // 0092fb  and bl, al
    X86_AT(c, 0x92fbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 0092fd  mov ax, word ptr [esi]
    X86_AT(c, 0x92fdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009300  xchg al, ah
    X86_AT(c, 0x9300u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009302  shr ax, cl
    X86_AT(c, 0x9302u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 009305  and al, bl
    X86_AT(c, 0x9305u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 009307  or byte ptr es:[edi], al
    X86_AT(c, 0x9307u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 00930a  ret 
    X86_AT(c, 0x930au);
    c.eip = pop32(c); return;
L_930c:
    X86_TICK(c, 12);
    // 00930c  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x930cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009314  jne 0x93d0
    X86_AT(c, 0x9314u);
    if (x86_cc(c, 5)) { goto L_93d0; }
    X86_TICK(c, 7);
    // 00931a  cmp ebx, 1
    X86_AT(c, 0x931au);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00931d  je 0x9390
    X86_AT(c, 0x931du);
    if (x86_cc(c, 4)) { goto L_9390; }
    X86_TICK(c, 58);
    // 00931f  push ecx
    X86_AT(c, 0x931fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 009320  mov ax, word ptr [esi - 1]
    X86_AT(c, 0x9320u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFFu))));
    // 009324  xchg al, ah
    X86_AT(c, 0x9324u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009326  shr ax, cl
    X86_AT(c, 0x9326u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 009329  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9329u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009330  and edx, 7
    X86_AT(c, 0x9330u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009333  mov dl, byte ptr cs:[edx + 0xc3dc]
    X86_AT(c, 0x9333u);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3DCu))));
    // 00933a  mov cl, dl
    X86_AT(c, 0x933au);
    s8(c, 1, g8(c, 2));
    // 00933c  not dl
    X86_AT(c, 0x933cu);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 00933e  and cl, al
    X86_AT(c, 0x933eu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 0), 1)); }
    // 009340  mov al, byte ptr es:[edi]
    X86_AT(c, 0x9340u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 009343  and dl, al
    X86_AT(c, 0x9343u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 0), 1)); }
    // 009345  and al, cl
    X86_AT(c, 0x9345u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 009347  or al, dl
    X86_AT(c, 0x9347u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 2), 1)); }
    // 009349  stosb byte ptr es:[edi], al
    X86_AT(c, 0x9349u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 00934a  pop ecx
    X86_AT(c, 0x934au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00934b  dec ebx
    X86_AT(c, 0x934bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 00934c  cmp ebx, 1
    X86_AT(c, 0x934cu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00934f  je 0x9362
    X86_AT(c, 0x934fu);
    if (x86_cc(c, 4)) { goto L_9362; }
    X86_TICK(c, 2);
    // 009351  dec ebx
    X86_AT(c, 0x9351u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_9352:
    X86_TICK(c, 28);
    // 009352  mov ax, word ptr [esi]
    X86_AT(c, 0x9352u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009355  xchg al, ah
    X86_AT(c, 0x9355u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009357  shr ax, cl
    X86_AT(c, 0x9357u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 00935a  and byte ptr es:[edi], al
    X86_AT(c, 0x935au);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 0), 1)); }
    // 00935d  inc esi
    X86_AT(c, 0x935du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00935e  inc edi
    X86_AT(c, 0x935eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00935f  dec ebx
    X86_AT(c, 0x935fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009360  jne 0x9352
    X86_AT(c, 0x9360u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9352u); goto L_9352; }
L_9362:
    X86_TICK(c, 48);
    // 009362  mov ax, word ptr [esi]
    X86_AT(c, 0x9362u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009365  xchg al, ah
    X86_AT(c, 0x9365u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009367  shr ax, cl
    X86_AT(c, 0x9367u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 00936a  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x936au);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009371  and edx, 7
    X86_AT(c, 0x9371u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009374  mov dl, byte ptr cs:[edx + 0xc3e4]
    X86_AT(c, 0x9374u);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3E4u))));
    // 00937b  mov cl, dl
    X86_AT(c, 0x937bu);
    s8(c, 1, g8(c, 2));
    // 00937d  not dl
    X86_AT(c, 0x937du);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 00937f  and cl, al
    X86_AT(c, 0x937fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 0), 1)); }
    // 009381  mov al, byte ptr es:[edi]
    X86_AT(c, 0x9381u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 009384  and dl, al
    X86_AT(c, 0x9384u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 0), 1)); }
    // 009386  and al, cl
    X86_AT(c, 0x9386u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 009388  or al, dl
    X86_AT(c, 0x9388u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 2), 1)); }
    // 00938a  mov byte ptr es:[edi], al
    X86_AT(c, 0x938au);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 0));
    // 00938d  ret 
    X86_AT(c, 0x938du);
    c.eip = pop32(c); return;
L_9390:
    X86_TICK(c, 63);
    // 009390  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9390u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 009397  shld ebx, eax, 0x10
    X86_AT(c, 0x9397u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00939b  and eax, 7
    X86_AT(c, 0x939bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0093a0  mov dl, byte ptr cs:[eax + 0xc3dc]
    X86_AT(c, 0x93a0u);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3DCu))));
    // 0093a7  and ebx, 7
    X86_AT(c, 0x93a7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 0093aa  and dl, byte ptr cs:[ebx + 0xc3e4]
    X86_AT(c, 0x93aau);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3E4u))), 1)); }
    // 0093b1  mov cl, dl
    X86_AT(c, 0x93b1u);
    s8(c, 1, g8(c, 2));
    // 0093b3  not dl
    X86_AT(c, 0x93b3u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 0093b5  and dl, byte ptr es:[edi]
    X86_AT(c, 0x93b5u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & rd8((c.sbase[0] + (uint32_t)(c.r[7]))), 1)); }
    // 0093b8  mov ax, word ptr [esi]
    X86_AT(c, 0x93b8u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0093bb  xchg al, ah
    X86_AT(c, 0x93bbu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0093bd  shr ax, cl
    X86_AT(c, 0x93bdu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 0093c0  and cl, al
    X86_AT(c, 0x93c0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 0), 1)); }
    // 0093c2  mov al, byte ptr es:[edi]
    X86_AT(c, 0x93c2u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 0093c5  and al, cl
    X86_AT(c, 0x93c5u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0093c7  or al, dl
    X86_AT(c, 0x93c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 2), 1)); }
    // 0093c9  mov byte ptr es:[edi], al
    X86_AT(c, 0x93c9u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 0));
    // 0093cc  ret 
    X86_AT(c, 0x93ccu);
    c.eip = pop32(c); return;
L_93d0:
    X86_TICK(c, 7);
    // 0093d0  cmp ebx, 1
    X86_AT(c, 0x93d0u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0093d3  je 0x947c
    X86_AT(c, 0x93d3u);
    if (x86_cc(c, 4)) { goto L_947c; }
    X86_TICK(c, 33);
    // 0093d9  push ebx
    X86_AT(c, 0x93d9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0093da  push ecx
    X86_AT(c, 0x93dau);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0093db  mov ax, word ptr [esi - 1]
    X86_AT(c, 0x93dbu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFFu))));
    // 0093df  xchg al, ah
    X86_AT(c, 0x93dfu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0093e1  shr ax, cl
    X86_AT(c, 0x93e1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 0093e4  push eax
    X86_AT(c, 0x93e4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0093e5  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x93e5u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0093ec  and ebx, 7
    X86_AT(c, 0x93ecu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 0093ef  mov bl, byte ptr cs:[ebx + 0xc3dc]
    X86_AT(c, 0x93efu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3DCu))));
    // 0093f6  call 0x7f60
    X86_AT(c, 0x93f6u);
    push32(c, 0x93fbu); f_00007f60(c); X86_RET(c, 0x93fbu);
    X86_TICK(c, 51);
    // 0093fb  and bl, al
    X86_AT(c, 0x93fbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 0093fd  mov cl, bl
    X86_AT(c, 0x93fdu);
    s8(c, 1, g8(c, 3));
    // 0093ff  not bl
    X86_AT(c, 0x93ffu);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 009401  pop eax
    X86_AT(c, 0x9401u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009402  and cl, al
    X86_AT(c, 0x9402u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 0), 1)); }
    // 009404  mov al, byte ptr es:[edi]
    X86_AT(c, 0x9404u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 009407  and bl, al
    X86_AT(c, 0x9407u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 009409  and al, cl
    X86_AT(c, 0x9409u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 00940b  or al, bl
    X86_AT(c, 0x940bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 3), 1)); }
    // 00940d  stosb byte ptr es:[edi], al
    X86_AT(c, 0x940du);
    x86_string(c, 2, 1, 0, 4, 3);
    // 00940e  pop ecx
    X86_AT(c, 0x940eu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00940f  dec dword ptr [esp]
    X86_AT(c, 0x940fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009412  cmp dword ptr [esp], 1
    X86_AT(c, 0x9412u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 009416  je 0x9444
    X86_AT(c, 0x9416u);
    if (x86_cc(c, 4)) { goto L_9444; }
    X86_TICK(c, 6);
    // 009418  dec dword ptr [esp]
    X86_AT(c, 0x9418u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_941b:
    X86_TICK(c, 21);
    // 00941b  push ecx
    X86_AT(c, 0x941bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00941c  mov ax, word ptr [esi]
    X86_AT(c, 0x941cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00941f  xchg al, ah
    X86_AT(c, 0x941fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009421  shr ax, cl
    X86_AT(c, 0x9421u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 009424  push eax
    X86_AT(c, 0x9424u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009425  call 0x7f60
    X86_AT(c, 0x9425u);
    push32(c, 0x942au); f_00007f60(c); X86_RET(c, 0x942au);
    X86_TICK(c, 46);
    // 00942a  mov bl, al
    X86_AT(c, 0x942au);
    s8(c, 3, g8(c, 0));
    // 00942c  mov cl, bl
    X86_AT(c, 0x942cu);
    s8(c, 1, g8(c, 3));
    // 00942e  not bl
    X86_AT(c, 0x942eu);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 009430  pop eax
    X86_AT(c, 0x9430u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009431  and cl, al
    X86_AT(c, 0x9431u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 0), 1)); }
    // 009433  mov al, byte ptr es:[edi]
    X86_AT(c, 0x9433u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 009436  and bl, al
    X86_AT(c, 0x9436u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 009438  and al, cl
    X86_AT(c, 0x9438u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 00943a  or al, bl
    X86_AT(c, 0x943au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 3), 1)); }
    // 00943c  stosb byte ptr es:[edi], al
    X86_AT(c, 0x943cu);
    x86_string(c, 2, 1, 0, 4, 3);
    // 00943d  inc esi
    X86_AT(c, 0x943du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00943e  pop ecx
    X86_AT(c, 0x943eu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00943f  dec dword ptr [esp]
    X86_AT(c, 0x943fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009442  jne 0x941b
    X86_AT(c, 0x9442u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x941bu); goto L_941b; }
L_9444:
    X86_TICK(c, 29);
    // 009444  mov ax, word ptr [esi]
    X86_AT(c, 0x9444u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009447  xchg al, ah
    X86_AT(c, 0x9447u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009449  shr ax, cl
    X86_AT(c, 0x9449u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 00944c  push eax
    X86_AT(c, 0x944cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00944d  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x944du);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009454  and ebx, 7
    X86_AT(c, 0x9454u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009457  mov bl, byte ptr cs:[ebx + 0xc3e4]
    X86_AT(c, 0x9457u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3E4u))));
    // 00945e  call 0x7f60
    X86_AT(c, 0x945eu);
    push32(c, 0x9463u); f_00007f60(c); X86_RET(c, 0x9463u);
    X86_TICK(c, 34);
    // 009463  and bl, al
    X86_AT(c, 0x9463u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 009465  mov cl, bl
    X86_AT(c, 0x9465u);
    s8(c, 1, g8(c, 3));
    // 009467  not bl
    X86_AT(c, 0x9467u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 009469  pop eax
    X86_AT(c, 0x9469u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00946a  and cl, al
    X86_AT(c, 0x946au);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 0), 1)); }
    // 00946c  mov al, byte ptr es:[edi]
    X86_AT(c, 0x946cu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 00946f  and bl, al
    X86_AT(c, 0x946fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 009471  and al, cl
    X86_AT(c, 0x9471u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 009473  or al, bl
    X86_AT(c, 0x9473u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 3), 1)); }
    // 009475  mov byte ptr es:[edi], al
    X86_AT(c, 0x9475u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 0));
    // 009478  ret 
    X86_AT(c, 0x9478u);
    c.eip = pop32(c); return;
L_947c:
    X86_TICK(c, 41);
    // 00947c  mov ax, word ptr [esi]
    X86_AT(c, 0x947cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00947f  xchg al, ah
    X86_AT(c, 0x947fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009481  shr ax, cl
    X86_AT(c, 0x9481u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 009484  push eax
    X86_AT(c, 0x9484u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009485  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9485u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00948c  and eax, 7
    X86_AT(c, 0x948cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009491  mov bl, byte ptr cs:[eax + 0xc3dc]
    X86_AT(c, 0x9491u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3DCu))));
    // 009498  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9498u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00949f  and eax, 7
    X86_AT(c, 0x949fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0094a4  and bl, byte ptr cs:[eax + 0xc3e4]
    X86_AT(c, 0x94a4u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3E4u))), 1)); }
    // 0094ab  call 0x7f60
    X86_AT(c, 0x94abu);
    push32(c, 0x94b0u); f_00007f60(c); X86_RET(c, 0x94b0u);
    X86_TICK(c, 34);
    // 0094b0  and bl, al
    X86_AT(c, 0x94b0u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 0094b2  mov cl, bl
    X86_AT(c, 0x94b2u);
    s8(c, 1, g8(c, 3));
    // 0094b4  not bl
    X86_AT(c, 0x94b4u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 0094b6  pop eax
    X86_AT(c, 0x94b6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0094b7  and cl, al
    X86_AT(c, 0x94b7u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 0), 1)); }
    // 0094b9  mov al, byte ptr es:[edi]
    X86_AT(c, 0x94b9u);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 0094bc  and bl, al
    X86_AT(c, 0x94bcu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 0094be  and al, cl
    X86_AT(c, 0x94beu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 1), 1)); }
    // 0094c0  or al, bl
    X86_AT(c, 0x94c0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 3), 1)); }
    // 0094c2  mov byte ptr es:[edi], al
    X86_AT(c, 0x94c2u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 0));
    // 0094c5  ret 
    X86_AT(c, 0x94c5u);
    c.eip = pop32(c); return;
L_94c8:
    X86_TICK(c, 12);
    // 0094c8  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x94c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 0094d0  jne 0x9564
    X86_AT(c, 0x94d0u);
    if (x86_cc(c, 5)) { goto L_9564; }
    X86_TICK(c, 7);
    // 0094d6  cmp ebx, 1
    X86_AT(c, 0x94d6u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0094d9  je 0x9534
    X86_AT(c, 0x94d9u);
    if (x86_cc(c, 4)) { goto L_9534; }
    X86_TICK(c, 42);
    // 0094db  mov ax, word ptr [esi - 1]
    X86_AT(c, 0x94dbu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFFu))));
    // 0094df  xchg al, ah
    X86_AT(c, 0x94dfu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0094e1  shr ax, cl
    X86_AT(c, 0x94e1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 0094e4  movzx edx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x94e4u);
    c.r[2] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0094ec  and edx, 7
    X86_AT(c, 0x94ecu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 0094ef  mov dl, byte ptr cs:[edx + 0xc3dc]
    X86_AT(c, 0x94efu);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3DCu))));
    // 0094f6  and al, dl
    X86_AT(c, 0x94f6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 0094f8  xor byte ptr es:[edi], al
    X86_AT(c, 0x94f8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0094fb  inc edi
    X86_AT(c, 0x94fbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0094fc  dec ebx
    X86_AT(c, 0x94fcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0094fd  cmp ebx, 1
    X86_AT(c, 0x94fdu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009500  je 0x9513
    X86_AT(c, 0x9500u);
    if (x86_cc(c, 4)) { goto L_9513; }
    X86_TICK(c, 2);
    // 009502  dec ebx
    X86_AT(c, 0x9502u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_9503:
    X86_TICK(c, 28);
    // 009503  mov ax, word ptr [esi]
    X86_AT(c, 0x9503u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009506  xchg al, ah
    X86_AT(c, 0x9506u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009508  shr ax, cl
    X86_AT(c, 0x9508u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 00950b  xor byte ptr es:[edi], al
    X86_AT(c, 0x950bu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 00950e  inc esi
    X86_AT(c, 0x950eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00950f  inc edi
    X86_AT(c, 0x950fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 009510  dec ebx
    X86_AT(c, 0x9510u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009511  jne 0x9503
    X86_AT(c, 0x9511u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9503u); goto L_9503; }
L_9513:
    X86_TICK(c, 39);
    // 009513  mov ax, word ptr [esi]
    X86_AT(c, 0x9513u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009516  xchg al, ah
    X86_AT(c, 0x9516u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009518  shr ax, cl
    X86_AT(c, 0x9518u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 00951b  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x951bu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009522  and edx, 7
    X86_AT(c, 0x9522u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009525  mov dl, byte ptr cs:[edx + 0xc3e4]
    X86_AT(c, 0x9525u);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3E4u))));
    // 00952c  and al, dl
    X86_AT(c, 0x952cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 00952e  xor byte ptr es:[edi], al
    X86_AT(c, 0x952eu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 009531  ret 
    X86_AT(c, 0x9531u);
    c.eip = pop32(c); return;
L_9534:
    X86_TICK(c, 50);
    // 009534  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9534u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00953b  shld ebx, eax, 0x10
    X86_AT(c, 0x953bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00953f  and eax, 7
    X86_AT(c, 0x953fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009544  mov dl, byte ptr cs:[eax + 0xc3dc]
    X86_AT(c, 0x9544u);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3DCu))));
    // 00954b  and ebx, 7
    X86_AT(c, 0x954bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00954e  and dl, byte ptr cs:[ebx + 0xc3e4]
    X86_AT(c, 0x954eu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3E4u))), 1)); }
    // 009555  mov ax, word ptr [esi]
    X86_AT(c, 0x9555u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009558  xchg al, ah
    X86_AT(c, 0x9558u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 00955a  shr ax, cl
    X86_AT(c, 0x955au);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 00955d  and al, dl
    X86_AT(c, 0x955du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 00955f  xor byte ptr es:[edi], al
    X86_AT(c, 0x955fu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 009562  ret 
    X86_AT(c, 0x9562u);
    c.eip = pop32(c); return;
L_9564:
    X86_TICK(c, 7);
    // 009564  cmp ebx, 1
    X86_AT(c, 0x9564u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009567  je 0x95e0
    X86_AT(c, 0x9567u);
    if (x86_cc(c, 4)) { goto L_95e0; }
    X86_TICK(c, 19);
    // 009569  push ebx
    X86_AT(c, 0x9569u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00956a  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x956au);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009571  and ebx, 7
    X86_AT(c, 0x9571u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009574  mov bl, byte ptr cs:[ebx + 0xc3dc]
    X86_AT(c, 0x9574u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3DCu))));
    // 00957b  call 0x7f60
    X86_AT(c, 0x957bu);
    push32(c, 0x9580u); f_00007f60(c); X86_RET(c, 0x9580u);
    X86_TICK(c, 41);
    // 009580  and bl, al
    X86_AT(c, 0x9580u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 009582  mov ax, word ptr [esi - 1]
    X86_AT(c, 0x9582u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFFu))));
    // 009586  xchg al, ah
    X86_AT(c, 0x9586u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009588  shr ax, cl
    X86_AT(c, 0x9588u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 00958b  and al, bl
    X86_AT(c, 0x958bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 00958d  xor byte ptr es:[edi], al
    X86_AT(c, 0x958du);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 009590  inc edi
    X86_AT(c, 0x9590u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 009591  dec dword ptr [esp]
    X86_AT(c, 0x9591u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009594  cmp dword ptr [esp], 1
    X86_AT(c, 0x9594u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 009598  je 0x95b8
    X86_AT(c, 0x9598u);
    if (x86_cc(c, 4)) { goto L_95b8; }
    X86_TICK(c, 6);
    // 00959a  dec dword ptr [esp]
    X86_AT(c, 0x959au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_959d:
    X86_TICK(c, 7);
    // 00959d  call 0x7f60
    X86_AT(c, 0x959du);
    push32(c, 0x95a2u); f_00007f60(c); X86_RET(c, 0x95a2u);
    X86_TICK(c, 36);
    // 0095a2  mov bl, al
    X86_AT(c, 0x95a2u);
    s8(c, 3, g8(c, 0));
    // 0095a4  mov ax, word ptr [esi]
    X86_AT(c, 0x95a4u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0095a7  xchg al, ah
    X86_AT(c, 0x95a7u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0095a9  shr ax, cl
    X86_AT(c, 0x95a9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 0095ac  and al, bl
    X86_AT(c, 0x95acu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 0095ae  xor byte ptr es:[edi], al
    X86_AT(c, 0x95aeu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0095b1  inc esi
    X86_AT(c, 0x95b1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0095b2  inc edi
    X86_AT(c, 0x95b2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0095b3  dec dword ptr [esp]
    X86_AT(c, 0x95b3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0095b6  jne 0x959d
    X86_AT(c, 0x95b6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x959du); goto L_959d; }
L_95b8:
    X86_TICK(c, 17);
    // 0095b8  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x95b8u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 0095bf  and ebx, 7
    X86_AT(c, 0x95bfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 0095c2  mov bl, byte ptr cs:[ebx + 0xc3e4]
    X86_AT(c, 0x95c2u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3E4u))));
    // 0095c9  call 0x7f60
    X86_AT(c, 0x95c9u);
    push32(c, 0x95ceu); f_00007f60(c); X86_RET(c, 0x95ceu);
    X86_TICK(c, 35);
    // 0095ce  and bl, al
    X86_AT(c, 0x95ceu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 0095d0  mov ax, word ptr [esi]
    X86_AT(c, 0x95d0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0095d3  xchg al, ah
    X86_AT(c, 0x95d3u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0095d5  shr ax, cl
    X86_AT(c, 0x95d5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 0095d8  and al, bl
    X86_AT(c, 0x95d8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 0095da  xor byte ptr es:[edi], al
    X86_AT(c, 0x95dau);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0095dd  pop ebx
    X86_AT(c, 0x95ddu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0095de  ret 
    X86_AT(c, 0x95deu);
    c.eip = pop32(c); return;
L_95e0:
    X86_TICK(c, 29);
    // 0095e0  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x95e0u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0095e7  and eax, 7
    X86_AT(c, 0x95e7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0095ec  mov bl, byte ptr cs:[eax + 0xc3dc]
    X86_AT(c, 0x95ecu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3DCu))));
    // 0095f3  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x95f3u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 0095fa  and eax, 7
    X86_AT(c, 0x95fau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0095ff  and bl, byte ptr cs:[eax + 0xc3e4]
    X86_AT(c, 0x95ffu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3E4u))), 1)); }
    // 009606  call 0x7f60
    X86_AT(c, 0x9606u);
    push32(c, 0x960bu); f_00007f60(c); X86_RET(c, 0x960bu);
    X86_TICK(c, 31);
    // 00960b  and bl, al
    X86_AT(c, 0x960bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 00960d  mov ax, word ptr [esi]
    X86_AT(c, 0x960du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009610  xchg al, ah
    X86_AT(c, 0x9610u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009612  shr ax, cl
    X86_AT(c, 0x9612u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 009615  and al, bl
    X86_AT(c, 0x9615u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 009617  xor byte ptr es:[edi], al
    X86_AT(c, 0x9617u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 00961a  ret 
    X86_AT(c, 0x961au);
    c.eip = pop32(c); return;
L_961c:
    X86_TICK(c, 12);
    // 00961c  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x961cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009624  jne 0x96d8
    X86_AT(c, 0x9624u);
    if (x86_cc(c, 5)) { goto L_96d8; }
    X86_TICK(c, 7);
    // 00962a  cmp ebx, 1
    X86_AT(c, 0x962au);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00962d  je 0x969c
    X86_AT(c, 0x962du);
    if (x86_cc(c, 4)) { goto L_969c; }
    X86_TICK(c, 52);
    // 00962f  mov ax, word ptr [esi - 1]
    X86_AT(c, 0x962fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFFu))));
    // 009633  xchg al, ah
    X86_AT(c, 0x9633u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009635  shr ax, cl
    X86_AT(c, 0x9635u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 009638  not al
    X86_AT(c, 0x9638u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 00963a  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x963au);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009641  and edx, 7
    X86_AT(c, 0x9641u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009644  mov dl, byte ptr cs:[edx + 0xc3dc]
    X86_AT(c, 0x9644u);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3DCu))));
    // 00964b  not dl
    X86_AT(c, 0x964bu);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 00964d  mov ah, byte ptr es:[edi]
    X86_AT(c, 0x964du);
    s8(c, 4, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 009650  and ah, dl
    X86_AT(c, 0x9650u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & g8(c, 2), 1)); }
    // 009652  not dl
    X86_AT(c, 0x9652u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 009654  and al, dl
    X86_AT(c, 0x9654u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 009656  or al, ah
    X86_AT(c, 0x9656u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 4), 1)); }
    // 009658  stosb byte ptr es:[edi], al
    X86_AT(c, 0x9658u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 009659  dec ebx
    X86_AT(c, 0x9659u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 00965a  cmp ebx, 1
    X86_AT(c, 0x965au);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00965d  je 0x966f
    X86_AT(c, 0x965du);
    if (x86_cc(c, 4)) { goto L_966f; }
    X86_TICK(c, 2);
    // 00965f  dec ebx
    X86_AT(c, 0x965fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_9660:
    X86_TICK(c, 28);
    // 009660  mov ax, word ptr [esi]
    X86_AT(c, 0x9660u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009663  xchg al, ah
    X86_AT(c, 0x9663u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009665  shr ax, cl
    X86_AT(c, 0x9665u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 009668  not al
    X86_AT(c, 0x9668u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 00966a  stosb byte ptr es:[edi], al
    X86_AT(c, 0x966au);
    x86_string(c, 2, 1, 0, 4, 3);
    // 00966b  inc esi
    X86_AT(c, 0x966bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00966c  dec ebx
    X86_AT(c, 0x966cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 00966d  jne 0x9660
    X86_AT(c, 0x966du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9660u); goto L_9660; }
L_966f:
    X86_TICK(c, 48);
    // 00966f  mov ax, word ptr [esi]
    X86_AT(c, 0x966fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009672  xchg al, ah
    X86_AT(c, 0x9672u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009674  shr ax, cl
    X86_AT(c, 0x9674u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 009677  not al
    X86_AT(c, 0x9677u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 009679  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9679u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009680  and edx, 7
    X86_AT(c, 0x9680u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009683  mov dl, byte ptr cs:[edx + 0xc3e4]
    X86_AT(c, 0x9683u);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[2] + 0xC3E4u))));
    // 00968a  not dl
    X86_AT(c, 0x968au);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 00968c  mov ah, byte ptr es:[edi]
    X86_AT(c, 0x968cu);
    s8(c, 4, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 00968f  and ah, dl
    X86_AT(c, 0x968fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & g8(c, 2), 1)); }
    // 009691  not dl
    X86_AT(c, 0x9691u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 009693  and al, dl
    X86_AT(c, 0x9693u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 009695  or ah, al
    X86_AT(c, 0x9695u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | g8(c, 0), 1)); }
    // 009697  mov byte ptr es:[edi], ah
    X86_AT(c, 0x9697u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 00969a  ret 
    X86_AT(c, 0x969au);
    c.eip = pop32(c); return;
L_969c:
    X86_TICK(c, 59);
    // 00969c  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x969cu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 0096a3  shld ebx, eax, 0x10
    X86_AT(c, 0x96a3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 0096a7  and eax, 7
    X86_AT(c, 0x96a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 0096ac  mov dl, byte ptr cs:[eax + 0xc3dc]
    X86_AT(c, 0x96acu);
    s8(c, 2, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3DCu))));
    // 0096b3  and ebx, 7
    X86_AT(c, 0x96b3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 0096b6  and dl, byte ptr cs:[ebx + 0xc3e4]
    X86_AT(c, 0x96b6u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3E4u))), 1)); }
    // 0096bd  mov ax, word ptr [esi]
    X86_AT(c, 0x96bdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0096c0  xchg al, ah
    X86_AT(c, 0x96c0u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0096c2  shr ax, cl
    X86_AT(c, 0x96c2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 0096c5  not al
    X86_AT(c, 0x96c5u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 0096c7  not dl
    X86_AT(c, 0x96c7u);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 0096c9  mov ah, byte ptr es:[edi]
    X86_AT(c, 0x96c9u);
    s8(c, 4, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 0096cc  and ah, dl
    X86_AT(c, 0x96ccu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & g8(c, 2), 1)); }
    // 0096ce  not dl
    X86_AT(c, 0x96ceu);
    { uint32_t v = g8(c, 2); s8(c, 2, ~v & 0xFFu); }
    // 0096d0  and al, dl
    X86_AT(c, 0x96d0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 2), 1)); }
    // 0096d2  or ah, al
    X86_AT(c, 0x96d2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v | g8(c, 0), 1)); }
    // 0096d4  mov byte ptr es:[edi], ah
    X86_AT(c, 0x96d4u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 4));
    // 0096d7  ret 
    X86_AT(c, 0x96d7u);
    c.eip = pop32(c); return;
L_96d8:
    X86_TICK(c, 7);
    // 0096d8  cmp ebx, 1
    X86_AT(c, 0x96d8u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0096db  je 0x977c
    X86_AT(c, 0x96dbu);
    if (x86_cc(c, 4)) { goto L_977c; }
    X86_TICK(c, 19);
    // 0096e1  push ebx
    X86_AT(c, 0x96e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0096e2  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x96e2u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0096e9  and ebx, 7
    X86_AT(c, 0x96e9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 0096ec  mov bl, byte ptr cs:[ebx + 0xc3dc]
    X86_AT(c, 0x96ecu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3DCu))));
    // 0096f3  call 0x7f60
    X86_AT(c, 0x96f3u);
    push32(c, 0x96f8u); f_00007f60(c); X86_RET(c, 0x96f8u);
    X86_TICK(c, 53);
    // 0096f8  and bl, al
    X86_AT(c, 0x96f8u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 0096fa  not bl
    X86_AT(c, 0x96fau);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 0096fc  mov bh, byte ptr es:[edi]
    X86_AT(c, 0x96fcu);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 0096ff  and bh, bl
    X86_AT(c, 0x96ffu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & g8(c, 3), 1)); }
    // 009701  mov ax, word ptr [esi - 1]
    X86_AT(c, 0x9701u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFFu))));
    // 009705  xchg al, ah
    X86_AT(c, 0x9705u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009707  shr ax, cl
    X86_AT(c, 0x9707u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 00970a  not al
    X86_AT(c, 0x970au);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 00970c  not bl
    X86_AT(c, 0x970cu);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 00970e  and al, bl
    X86_AT(c, 0x970eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 009710  or al, bh
    X86_AT(c, 0x9710u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 7), 1)); }
    // 009712  stosb byte ptr es:[edi], al
    X86_AT(c, 0x9712u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 009713  dec dword ptr [esp]
    X86_AT(c, 0x9713u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009716  cmp dword ptr [esp], 1
    X86_AT(c, 0x9716u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00971a  je 0x9746
    X86_AT(c, 0x971au);
    if (x86_cc(c, 4)) { goto L_9746; }
    X86_TICK(c, 6);
    // 00971c  dec dword ptr [esp]
    X86_AT(c, 0x971cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_971f:
    X86_TICK(c, 21);
    // 00971f  mov ax, word ptr [esi]
    X86_AT(c, 0x971fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009722  xchg al, ah
    X86_AT(c, 0x9722u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009724  shr ax, cl
    X86_AT(c, 0x9724u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 009727  not al
    X86_AT(c, 0x9727u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 009729  push eax
    X86_AT(c, 0x9729u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00972a  call 0x7f60
    X86_AT(c, 0x972au);
    push32(c, 0x972fu); f_00007f60(c); X86_RET(c, 0x972fu);
    X86_TICK(c, 40);
    // 00972f  mov bl, al
    X86_AT(c, 0x972fu);
    s8(c, 3, g8(c, 0));
    // 009731  not bl
    X86_AT(c, 0x9731u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 009733  mov bh, byte ptr es:[edi]
    X86_AT(c, 0x9733u);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 009736  and bh, bl
    X86_AT(c, 0x9736u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & g8(c, 3), 1)); }
    // 009738  not bl
    X86_AT(c, 0x9738u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 00973a  pop eax
    X86_AT(c, 0x973au);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00973b  and al, bl
    X86_AT(c, 0x973bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 00973d  or al, bh
    X86_AT(c, 0x973du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 7), 1)); }
    // 00973f  stosb byte ptr es:[edi], al
    X86_AT(c, 0x973fu);
    x86_string(c, 2, 1, 0, 4, 3);
    // 009740  inc esi
    X86_AT(c, 0x9740u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 009741  dec dword ptr [esp]
    X86_AT(c, 0x9741u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009744  jne 0x971f
    X86_AT(c, 0x9744u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x971fu); goto L_971f; }
L_9746:
    X86_TICK(c, 31);
    // 009746  mov ax, word ptr [esi]
    X86_AT(c, 0x9746u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009749  xchg al, ah
    X86_AT(c, 0x9749u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 00974b  shr ax, cl
    X86_AT(c, 0x974bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 00974e  not al
    X86_AT(c, 0x974eu);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 009750  push eax
    X86_AT(c, 0x9750u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009751  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9751u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009758  and ebx, 7
    X86_AT(c, 0x9758u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00975b  mov bl, byte ptr cs:[ebx + 0xc3e4]
    X86_AT(c, 0x975bu);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3E4u))));
    // 009762  call 0x7f60
    X86_AT(c, 0x9762u);
    push32(c, 0x9767u); f_00007f60(c); X86_RET(c, 0x9767u);
    X86_TICK(c, 36);
    // 009767  and bl, al
    X86_AT(c, 0x9767u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 009769  not bl
    X86_AT(c, 0x9769u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 00976b  mov bh, byte ptr es:[edi]
    X86_AT(c, 0x976bu);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 00976e  and bh, bl
    X86_AT(c, 0x976eu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & g8(c, 3), 1)); }
    // 009770  not bl
    X86_AT(c, 0x9770u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 009772  pop eax
    X86_AT(c, 0x9772u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009773  and al, bl
    X86_AT(c, 0x9773u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 009775  or bh, al
    X86_AT(c, 0x9775u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 0), 1)); }
    // 009777  mov byte ptr es:[edi], bh
    X86_AT(c, 0x9777u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 7));
    // 00977a  pop ebx
    X86_AT(c, 0x977au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00977b  ret 
    X86_AT(c, 0x977bu);
    c.eip = pop32(c); return;
L_977c:
    X86_TICK(c, 29);
    // 00977c  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x977cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009783  and eax, 7
    X86_AT(c, 0x9783u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009788  mov bl, byte ptr cs:[eax + 0xc3dc]
    X86_AT(c, 0x9788u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3DCu))));
    // 00978f  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x978fu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009796  and eax, 7
    X86_AT(c, 0x9796u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00979b  and bl, byte ptr cs:[eax + 0xc3e4]
    X86_AT(c, 0x979bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3E4u))), 1)); }
    // 0097a2  call 0x7f60
    X86_AT(c, 0x97a2u);
    push32(c, 0x97a7u); f_00007f60(c); X86_RET(c, 0x97a7u);
    X86_TICK(c, 40);
    // 0097a7  and bl, al
    X86_AT(c, 0x97a7u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 0097a9  mov ax, word ptr [esi]
    X86_AT(c, 0x97a9u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 0097ac  xchg al, ah
    X86_AT(c, 0x97acu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0097ae  shr ax, cl
    X86_AT(c, 0x97aeu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 0097b1  not al
    X86_AT(c, 0x97b1u);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 0097b3  not bl
    X86_AT(c, 0x97b3u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 0097b5  mov bh, byte ptr es:[edi]
    X86_AT(c, 0x97b5u);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 0097b8  and bh, bl
    X86_AT(c, 0x97b8u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & g8(c, 3), 1)); }
    // 0097ba  not bl
    X86_AT(c, 0x97bau);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 0097bc  and al, bl
    X86_AT(c, 0x97bcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 0097be  or bh, al
    X86_AT(c, 0x97beu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 0), 1)); }
    // 0097c0  mov byte ptr es:[edi], bh
    X86_AT(c, 0x97c0u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 7));
    // 0097c3  ret 
    X86_AT(c, 0x97c3u);
    c.eip = pop32(c); return;
L_97c4:
    X86_TICK(c, 7);
    // 0097c4  cmp ebx, 1
    X86_AT(c, 0x97c4u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0097c7  je 0x986c
    X86_AT(c, 0x97c7u);
    if (x86_cc(c, 4)) { goto L_986c; }
    X86_TICK(c, 75);
    // 0097cd  push ebx
    X86_AT(c, 0x97cdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0097ce  mov ax, word ptr [esi - 1]
    X86_AT(c, 0x97ceu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFFu))));
    // 0097d2  xchg al, ah
    X86_AT(c, 0x97d2u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0097d4  shr ax, cl
    X86_AT(c, 0x97d4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 0097d7  push eax
    X86_AT(c, 0x97d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0097d8  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x97d8u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0097df  and ebx, 7
    X86_AT(c, 0x97dfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 0097e2  mov bl, byte ptr cs:[ebx + 0xc3dc]
    X86_AT(c, 0x97e2u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3DCu))));
    // 0097e9  xor al, byte ptr gs:[ebp + 0x11c]
    X86_AT(c, 0x97e9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 1)); }
    // 0097f0  and bl, al
    X86_AT(c, 0x97f0u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 0097f2  not bl
    X86_AT(c, 0x97f2u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 0097f4  mov bh, byte ptr es:[edi]
    X86_AT(c, 0x97f4u);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 0097f7  and bh, bl
    X86_AT(c, 0x97f7u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & g8(c, 3), 1)); }
    // 0097f9  not bl
    X86_AT(c, 0x97f9u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 0097fb  pop eax
    X86_AT(c, 0x97fbu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0097fc  and al, bl
    X86_AT(c, 0x97fcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 0097fe  or al, bh
    X86_AT(c, 0x97feu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 7), 1)); }
    // 009800  stosb byte ptr es:[edi], al
    X86_AT(c, 0x9800u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 009801  dec dword ptr [esp]
    X86_AT(c, 0x9801u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009804  cmp dword ptr [esp], 1
    X86_AT(c, 0x9804u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 009808  je 0x9834
    X86_AT(c, 0x9808u);
    if (x86_cc(c, 4)) { goto L_9834; }
    X86_TICK(c, 6);
    // 00980a  dec dword ptr [esp]
    X86_AT(c, 0x980au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_980d:
    X86_TICK(c, 58);
    // 00980d  mov ax, word ptr [esi]
    X86_AT(c, 0x980du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009810  xchg al, ah
    X86_AT(c, 0x9810u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009812  shr ax, cl
    X86_AT(c, 0x9812u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 009815  push eax
    X86_AT(c, 0x9815u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009816  xor al, byte ptr gs:[ebp + 0x11c]
    X86_AT(c, 0x9816u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 1)); }
    // 00981d  mov bl, al
    X86_AT(c, 0x981du);
    s8(c, 3, g8(c, 0));
    // 00981f  not bl
    X86_AT(c, 0x981fu);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 009821  mov bh, byte ptr es:[edi]
    X86_AT(c, 0x9821u);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 009824  and bh, bl
    X86_AT(c, 0x9824u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & g8(c, 3), 1)); }
    // 009826  not bl
    X86_AT(c, 0x9826u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 009828  pop eax
    X86_AT(c, 0x9828u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009829  and al, bl
    X86_AT(c, 0x9829u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 00982b  or al, bh
    X86_AT(c, 0x982bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | g8(c, 7), 1)); }
    // 00982d  stosb byte ptr es:[edi], al
    X86_AT(c, 0x982du);
    x86_string(c, 2, 1, 0, 4, 3);
    // 00982e  inc esi
    X86_AT(c, 0x982eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00982f  dec dword ptr [esp]
    X86_AT(c, 0x982fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009832  jne 0x980d
    X86_AT(c, 0x9832u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x980du); goto L_980d; }
L_9834:
    X86_TICK(c, 64);
    // 009834  mov ax, word ptr [esi]
    X86_AT(c, 0x9834u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 009837  xchg al, ah
    X86_AT(c, 0x9837u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009839  shr ax, cl
    X86_AT(c, 0x9839u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 00983c  push eax
    X86_AT(c, 0x983cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00983d  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x983du);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009844  and ebx, 7
    X86_AT(c, 0x9844u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009847  mov bl, byte ptr cs:[ebx + 0xc3e4]
    X86_AT(c, 0x9847u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0xC3E4u))));
    // 00984e  xor al, byte ptr gs:[ebp + 0x11c]
    X86_AT(c, 0x984eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 1)); }
    // 009855  and bl, al
    X86_AT(c, 0x9855u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 009857  not bl
    X86_AT(c, 0x9857u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 009859  mov bh, byte ptr es:[edi]
    X86_AT(c, 0x9859u);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 00985c  and bh, bl
    X86_AT(c, 0x985cu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & g8(c, 3), 1)); }
    // 00985e  not bl
    X86_AT(c, 0x985eu);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 009860  pop eax
    X86_AT(c, 0x9860u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009861  and al, bl
    X86_AT(c, 0x9861u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 009863  or bh, al
    X86_AT(c, 0x9863u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 0), 1)); }
    // 009865  mov byte ptr es:[edi], bh
    X86_AT(c, 0x9865u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 7));
    // 009868  pop ebx
    X86_AT(c, 0x9868u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009869  ret 
    X86_AT(c, 0x9869u);
    c.eip = pop32(c); return;
L_986c:
    X86_TICK(c, 78);
    // 00986c  mov ax, word ptr [esi]
    X86_AT(c, 0x986cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00986f  xchg al, ah
    X86_AT(c, 0x986fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 009871  shr ax, cl
    X86_AT(c, 0x9871u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 009874  push eax
    X86_AT(c, 0x9874u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009875  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9875u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00987c  and eax, 7
    X86_AT(c, 0x987cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009881  mov bl, byte ptr cs:[eax + 0xc3dc]
    X86_AT(c, 0x9881u);
    s8(c, 3, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3DCu))));
    // 009888  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9888u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00988f  and eax, 7
    X86_AT(c, 0x988fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009894  and bl, byte ptr cs:[eax + 0xc3e4]
    X86_AT(c, 0x9894u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0xC3E4u))), 1)); }
    // 00989b  pop eax
    X86_AT(c, 0x989bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00989c  push eax
    X86_AT(c, 0x989cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00989d  xor al, byte ptr gs:[ebp + 0x11c]
    X86_AT(c, 0x989du);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 1)); }
    // 0098a4  and bl, al
    X86_AT(c, 0x98a4u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 0), 1)); }
    // 0098a6  not bl
    X86_AT(c, 0x98a6u);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 0098a8  mov bh, byte ptr es:[edi]
    X86_AT(c, 0x98a8u);
    s8(c, 7, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 0098ab  and bh, bl
    X86_AT(c, 0x98abu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v & g8(c, 3), 1)); }
    // 0098ad  not bl
    X86_AT(c, 0x98adu);
    { uint32_t v = g8(c, 3); s8(c, 3, ~v & 0xFFu); }
    // 0098af  pop eax
    X86_AT(c, 0x98afu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0098b0  and al, bl
    X86_AT(c, 0x98b0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 3), 1)); }
    // 0098b2  or bh, al
    X86_AT(c, 0x98b2u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_logic(c, v | g8(c, 0), 1)); }
    // 0098b4  mov byte ptr es:[edi], bh
    X86_AT(c, 0x98b4u);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 7));
    // 0098b7  ret 
    X86_AT(c, 0x98b7u);
    c.eip = pop32(c); return;
L_99c8:
    X86_TICK(c, 68);
    // 0099c8  mov esi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0x99c8u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 0099cf  mov di, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x99cfu);
    s16(c, 7, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0099d7  and edi, 0xfff8
    X86_AT(c, 0x99d7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & 0xFFF8u, 4); }
    // 0099dd  mov eax, edi
    X86_AT(c, 0x99ddu);
    c.r[0] = c.r[7];
    // 0099df  mov edx, edi
    X86_AT(c, 0x99dfu);
    c.r[2] = c.r[7];
    // 0099e1  shr edi, 1
    X86_AT(c, 0x99e1u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[7] = r; }
    // 0099e3  add edi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0x99e3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 0099ea  mov bx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x99eau);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 0099f2  mov cl, bl
    X86_AT(c, 0x99f2u);
    s8(c, 1, g8(c, 3));
    // 0099f4  and bx, 0xfff8
    X86_AT(c, 0x99f4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFF8u, 2)); }
    // 0099f9  sub ax, bx
    X86_AT(c, 0x99f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0099fc  shr eax, 1
    X86_AT(c, 0x99fcu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0099fe  add esi, eax
    X86_AT(c, 0x99feu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 009a00  mov bx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9a00u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009a08  and ebx, 0xfff8
    X86_AT(c, 0x9a08u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0xFFF8u, 4); }
    // 009a0e  sub ebx, edx
    X86_AT(c, 0x9a0eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[2], 0, 4); }
    // 009a10  shr ebx, 3
    X86_AT(c, 0x9a10u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[3] = r; }
    // 009a13  inc ebx
    X86_AT(c, 0x9a13u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 009a14  and cl, 7
    X86_AT(c, 0x9a14u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x7u, 1)); }
    // 009a17  shl cl, 2
    X86_AT(c, 0x9a17u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 009a1a  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x9a1au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009a22  je 0x9a52
    X86_AT(c, 0x9a22u);
    if (x86_cc(c, 4)) { goto L_9a52; }
    X86_TICK(c, 21);
    // 009a24  push ebx
    X86_AT(c, 0x9a24u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009a25  push ecx
    X86_AT(c, 0x9a25u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 009a26  push edi
    X86_AT(c, 0x9a26u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 009a27  mov bx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9a27u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009a2f  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x9a2fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 009a37  call 0x7f18
    X86_AT(c, 0x9a37u);
    push32(c, 0x9a3cu); f_00007f18(c); X86_RET(c, 0x9a3cu);
    X86_TICK(c, 22);
    // 009a3c  mov edx, edi
    X86_AT(c, 0x9a3cu);
    c.r[2] = c.r[7];
    // 009a3e  pop edi
    X86_AT(c, 0x9a3eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 009a3f  mov cl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9a3fu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009a46  and cl, 0x18
    X86_AT(c, 0x9a46u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x18u, 1)); }
    // 009a49  mov byte ptr gs:[ebp + 0x420], cl
    X86_AT(c, 0x9a49u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x420u)), g8(c, 1));
    // 009a50  pop ecx
    X86_AT(c, 0x9a50u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 009a51  pop ebx
    X86_AT(c, 0x9a51u);
    { uint32_t v = pop32(c); c.r[3] = v; }
L_9a52:
    X86_TICK(c, 11);
    // 009a52  mov eax, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x9a52u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)));
    // 009a59  jmp dword ptr cs:[eax*4 + 0x9a64]
    X86_AT(c, 0x9a59u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x9A64u)));
      switch (t) {
      case 0x8170u: X86_POLL(c, 0x8170u); goto L_8170;
      case 0x9aa4u: goto L_9aa4;
      case 0x9aa8u: goto L_9aa8;
      case 0x9c4cu: goto L_9c4c;
      case 0x9db4u: goto L_9db4;
      case 0x9f74u: goto L_9f74;
      case 0xa0dcu: goto L_a0dc;
      case 0xa294u: goto L_a294;
      default: x86_jump(c, t); return; } }
L_9aa4:
    X86_TICK(c, 10);
    // 009aa4  ret 
    X86_AT(c, 0x9aa4u);
    c.eip = pop32(c); return;
L_9aa8:
    X86_TICK(c, 12);
    // 009aa8  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x9aa8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009ab0  jne 0x9b60
    X86_AT(c, 0x9ab0u);
    if (x86_cc(c, 5)) { goto L_9b60; }
    X86_TICK(c, 7);
    // 009ab6  cmp ebx, 1
    X86_AT(c, 0x9ab6u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009ab9  je 0x9b20
    X86_AT(c, 0x9ab9u);
    if (x86_cc(c, 4)) { goto L_9b20; }
    X86_TICK(c, 55);
    // 009abb  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9abbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009abe  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9abeu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009abf  shld eax, edx, cl
    X86_AT(c, 0x9abfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009ac2  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9ac2u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009ac9  and edx, 7
    X86_AT(c, 0x9ac9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009acc  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x9accu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 009ad4  not edx
    X86_AT(c, 0x9ad4u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009ad6  and dword ptr es:[edi], edx
    X86_AT(c, 0x9ad6u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 009ad9  not edx
    X86_AT(c, 0x9ad9u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009adb  and eax, edx
    X86_AT(c, 0x9adbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009add  or dword ptr es:[edi], eax
    X86_AT(c, 0x9addu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009ae0  add edi, 4
    X86_AT(c, 0x9ae0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009ae3  dec ebx
    X86_AT(c, 0x9ae3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009ae4  cmp ebx, 1
    X86_AT(c, 0x9ae4u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009ae7  je 0x9af5
    X86_AT(c, 0x9ae7u);
    if (x86_cc(c, 4)) { goto L_9af5; }
    X86_TICK(c, 2);
    // 009ae9  dec ebx
    X86_AT(c, 0x9ae9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_9aea:
    X86_TICK(c, 28);
    // 009aea  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9aeau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009aed  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9aedu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009aee  shld eax, edx, cl
    X86_AT(c, 0x9aeeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009af1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9af1u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 009af2  dec ebx
    X86_AT(c, 0x9af2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009af3  jne 0x9aea
    X86_AT(c, 0x9af3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9aeau); goto L_9aea; }
L_9af5:
    X86_TICK(c, 47);
    // 009af5  mov eax, dword ptr [esi]
    X86_AT(c, 0x9af5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009af7  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9af7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009afa  shld eax, edx, cl
    X86_AT(c, 0x9afau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009afd  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9afdu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009b04  and edx, 7
    X86_AT(c, 0x9b04u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009b07  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9b07u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009b0f  not edx
    X86_AT(c, 0x9b0fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b11  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b11u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b14  and ebx, edx
    X86_AT(c, 0x9b14u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b16  not edx
    X86_AT(c, 0x9b16u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b18  and eax, edx
    X86_AT(c, 0x9b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b1a  or ebx, eax
    X86_AT(c, 0x9b1au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b1c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b1cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b1f  ret 
    X86_AT(c, 0x9b1fu);
    c.eip = pop32(c); return;
L_9b20:
    X86_TICK(c, 64);
    // 009b20  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9b20u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 009b27  shld ebx, eax, 0x10
    X86_AT(c, 0x9b27u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 009b2b  and eax, 7
    X86_AT(c, 0x9b2bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009b30  mov edx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9b30u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009b38  and ebx, 7
    X86_AT(c, 0x9b38u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009b3b  and edx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9b3bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u))), 4); }
    // 009b43  push edx
    X86_AT(c, 0x9b43u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 009b44  mov eax, dword ptr [esi]
    X86_AT(c, 0x9b44u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009b46  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9b46u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009b49  shld eax, edx, cl
    X86_AT(c, 0x9b49u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009b4c  pop edx
    X86_AT(c, 0x9b4cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 009b4d  not edx
    X86_AT(c, 0x9b4du);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b4f  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0x9b4fu);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009b52  and ebx, edx
    X86_AT(c, 0x9b52u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 009b54  not edx
    X86_AT(c, 0x9b54u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009b56  and eax, edx
    X86_AT(c, 0x9b56u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009b58  or ebx, eax
    X86_AT(c, 0x9b58u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 009b5a  mov dword ptr es:[edi], ebx
    X86_AT(c, 0x9b5au);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 009b5d  ret 
    X86_AT(c, 0x9b5du);
    c.eip = pop32(c); return;
L_9b60:
    X86_TICK(c, 7);
    // 009b60  cmp ebx, 1
    X86_AT(c, 0x9b60u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009b63  je 0x9c00
    X86_AT(c, 0x9b63u);
    if (x86_cc(c, 4)) { goto L_9c00; }
    X86_TICK(c, 19);
    // 009b69  push ebx
    X86_AT(c, 0x9b69u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009b6a  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9b6au);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009b71  and ebx, 7
    X86_AT(c, 0x9b71u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009b74  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0x9b74u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 009b7c  call 0x7f8c
    X86_AT(c, 0x9b7cu);
    push32(c, 0x9b81u); f_00007f8c(c); X86_RET(c, 0x9b81u);
    X86_TICK(c, 62);
    // 009b81  and ebx, eax
    X86_AT(c, 0x9b81u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009b83  not ebx
    X86_AT(c, 0x9b83u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009b85  and dword ptr es:[edi], ebx
    X86_AT(c, 0x9b85u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 009b88  push ebx
    X86_AT(c, 0x9b88u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009b89  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9b89u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009b8c  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9b8cu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009b8d  shld eax, ebx, cl
    X86_AT(c, 0x9b8du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009b90  pop ebx
    X86_AT(c, 0x9b90u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009b91  not ebx
    X86_AT(c, 0x9b91u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009b93  and eax, ebx
    X86_AT(c, 0x9b93u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009b95  or dword ptr es:[edi], eax
    X86_AT(c, 0x9b95u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009b98  add edi, 4
    X86_AT(c, 0x9b98u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009b9b  dec dword ptr [esp]
    X86_AT(c, 0x9b9bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009b9e  cmp dword ptr [esp], 1
    X86_AT(c, 0x9b9eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 009ba2  je 0x9bcb
    X86_AT(c, 0x9ba2u);
    if (x86_cc(c, 4)) { goto L_9bcb; }
    X86_TICK(c, 6);
    // 009ba4  dec dword ptr [esp]
    X86_AT(c, 0x9ba4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_9ba7:
    X86_TICK(c, 23);
    // 009ba7  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9ba7u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009baa  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9baau);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009bab  shld eax, ebx, cl
    X86_AT(c, 0x9babu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009bae  push eax
    X86_AT(c, 0x9baeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009baf  call 0x7f8c
    X86_AT(c, 0x9bafu);
    push32(c, 0x9bb4u); f_00007f8c(c); X86_RET(c, 0x9bb4u);
    X86_TICK(c, 39);
    // 009bb4  mov ebx, eax
    X86_AT(c, 0x9bb4u);
    c.r[3] = c.r[0];
    // 009bb6  not ebx
    X86_AT(c, 0x9bb6u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009bb8  and dword ptr es:[edi], ebx
    X86_AT(c, 0x9bb8u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 009bbb  not ebx
    X86_AT(c, 0x9bbbu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009bbd  pop eax
    X86_AT(c, 0x9bbdu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009bbe  and eax, ebx
    X86_AT(c, 0x9bbeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009bc0  or dword ptr es:[edi], eax
    X86_AT(c, 0x9bc0u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009bc3  add edi, 4
    X86_AT(c, 0x9bc3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009bc6  dec dword ptr [esp]
    X86_AT(c, 0x9bc6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009bc9  jne 0x9ba7
    X86_AT(c, 0x9bc9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9ba7u); goto L_9ba7; }
L_9bcb:
    X86_TICK(c, 30);
    // 009bcb  mov eax, dword ptr [esi]
    X86_AT(c, 0x9bcbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009bcd  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9bcdu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009bd0  shld eax, ebx, cl
    X86_AT(c, 0x9bd0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009bd3  push eax
    X86_AT(c, 0x9bd3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009bd4  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9bd4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009bdb  and ebx, 7
    X86_AT(c, 0x9bdbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009bde  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9bdeu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 009be6  call 0x7f8c
    X86_AT(c, 0x9be6u);
    push32(c, 0x9bebu); f_00007f8c(c); X86_RET(c, 0x9bebu);
    X86_TICK(c, 36);
    // 009beb  and ebx, eax
    X86_AT(c, 0x9bebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009bed  not ebx
    X86_AT(c, 0x9bedu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009bef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0x9befu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009bf2  and edx, ebx
    X86_AT(c, 0x9bf2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 009bf4  not ebx
    X86_AT(c, 0x9bf4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009bf6  pop eax
    X86_AT(c, 0x9bf6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009bf7  and eax, ebx
    X86_AT(c, 0x9bf7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009bf9  or edx, eax
    X86_AT(c, 0x9bf9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 009bfb  mov dword ptr es:[edi], edx
    X86_AT(c, 0x9bfbu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 009bfe  pop ebx
    X86_AT(c, 0x9bfeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009bff  ret 
    X86_AT(c, 0x9bffu);
    c.eip = pop32(c); return;
L_9c00:
    X86_TICK(c, 29);
    // 009c00  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9c00u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009c07  and eax, 7
    X86_AT(c, 0x9c07u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009c0c  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9c0cu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009c14  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9c14u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009c1b  and eax, 7
    X86_AT(c, 0x9c1bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009c20  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0x9c20u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 009c28  call 0x7f8c
    X86_AT(c, 0x9c28u);
    push32(c, 0x9c2du); f_00007f8c(c); X86_RET(c, 0x9c2du);
    X86_TICK(c, 45);
    // 009c2d  and ebx, eax
    X86_AT(c, 0x9c2du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009c2f  push ebx
    X86_AT(c, 0x9c2fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009c30  mov eax, dword ptr [esi]
    X86_AT(c, 0x9c30u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009c32  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9c32u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009c35  shld eax, ebx, cl
    X86_AT(c, 0x9c35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009c38  pop ebx
    X86_AT(c, 0x9c38u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009c39  not ebx
    X86_AT(c, 0x9c39u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009c3b  mov edx, dword ptr es:[edi]
    X86_AT(c, 0x9c3bu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009c3e  and edx, ebx
    X86_AT(c, 0x9c3eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 009c40  not ebx
    X86_AT(c, 0x9c40u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009c42  and eax, ebx
    X86_AT(c, 0x9c42u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009c44  or edx, eax
    X86_AT(c, 0x9c44u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 009c46  mov dword ptr es:[edi], edx
    X86_AT(c, 0x9c46u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 009c49  ret 
    X86_AT(c, 0x9c49u);
    c.eip = pop32(c); return;
L_9c4c:
    X86_TICK(c, 12);
    // 009c4c  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x9c4cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009c54  jne 0x9cec
    X86_AT(c, 0x9c54u);
    if (x86_cc(c, 5)) { goto L_9cec; }
    X86_TICK(c, 7);
    // 009c5a  cmp ebx, 1
    X86_AT(c, 0x9c5au);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009c5d  je 0x9cb8
    X86_AT(c, 0x9c5du);
    if (x86_cc(c, 4)) { goto L_9cb8; }
    X86_TICK(c, 44);
    // 009c5f  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9c5fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009c62  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9c62u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009c63  shld eax, edx, cl
    X86_AT(c, 0x9c63u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009c66  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9c66u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009c6d  and edx, 7
    X86_AT(c, 0x9c6du);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009c70  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x9c70u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 009c78  and eax, edx
    X86_AT(c, 0x9c78u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009c7a  or dword ptr es:[edi], eax
    X86_AT(c, 0x9c7au);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009c7d  add edi, 4
    X86_AT(c, 0x9c7du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009c80  dec ebx
    X86_AT(c, 0x9c80u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009c81  cmp ebx, 1
    X86_AT(c, 0x9c81u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009c84  je 0x9c97
    X86_AT(c, 0x9c84u);
    if (x86_cc(c, 4)) { goto L_9c97; }
    X86_TICK(c, 2);
    // 009c86  dec ebx
    X86_AT(c, 0x9c86u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_9c87:
    X86_TICK(c, 30);
    // 009c87  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9c87u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009c8a  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9c8au);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009c8b  shld eax, edx, cl
    X86_AT(c, 0x9c8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009c8e  or dword ptr es:[edi], eax
    X86_AT(c, 0x9c8eu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009c91  add edi, 4
    X86_AT(c, 0x9c91u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009c94  dec ebx
    X86_AT(c, 0x9c94u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009c95  jne 0x9c87
    X86_AT(c, 0x9c95u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9c87u); goto L_9c87; }
L_9c97:
    X86_TICK(c, 40);
    // 009c97  mov eax, dword ptr [esi]
    X86_AT(c, 0x9c97u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009c99  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9c99u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009c9c  shld eax, edx, cl
    X86_AT(c, 0x9c9cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009c9f  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9c9fu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009ca6  and edx, 7
    X86_AT(c, 0x9ca6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009ca9  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9ca9u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009cb1  and eax, edx
    X86_AT(c, 0x9cb1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009cb3  or dword ptr es:[edi], eax
    X86_AT(c, 0x9cb3u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009cb6  ret 
    X86_AT(c, 0x9cb6u);
    c.eip = pop32(c); return;
L_9cb8:
    X86_TICK(c, 57);
    // 009cb8  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9cb8u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 009cbf  shld ebx, eax, 0x10
    X86_AT(c, 0x9cbfu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 009cc3  and eax, 7
    X86_AT(c, 0x9cc3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009cc8  mov edx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9cc8u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009cd0  and ebx, 7
    X86_AT(c, 0x9cd0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009cd3  and edx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9cd3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u))), 4); }
    // 009cdb  push edx
    X86_AT(c, 0x9cdbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 009cdc  mov eax, dword ptr [esi]
    X86_AT(c, 0x9cdcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009cde  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9cdeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009ce1  shld eax, edx, cl
    X86_AT(c, 0x9ce1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009ce4  pop edx
    X86_AT(c, 0x9ce4u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 009ce5  and eax, edx
    X86_AT(c, 0x9ce5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009ce7  or dword ptr es:[edi], eax
    X86_AT(c, 0x9ce7u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009cea  ret 
    X86_AT(c, 0x9ceau);
    c.eip = pop32(c); return;
L_9cec:
    X86_TICK(c, 7);
    // 009cec  cmp ebx, 1
    X86_AT(c, 0x9cecu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009cef  je 0x9d74
    X86_AT(c, 0x9cefu);
    if (x86_cc(c, 4)) { goto L_9d74; }
    X86_TICK(c, 19);
    // 009cf5  push ebx
    X86_AT(c, 0x9cf5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009cf6  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9cf6u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009cfd  and ebx, 7
    X86_AT(c, 0x9cfdu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009d00  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0x9d00u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 009d08  call 0x7f8c
    X86_AT(c, 0x9d08u);
    push32(c, 0x9d0du); f_00007f8c(c); X86_RET(c, 0x9d0du);
    X86_TICK(c, 51);
    // 009d0d  and ebx, eax
    X86_AT(c, 0x9d0du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009d0f  push ebx
    X86_AT(c, 0x9d0fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009d10  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9d10u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009d13  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9d13u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009d14  shld eax, ebx, cl
    X86_AT(c, 0x9d14u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009d17  pop ebx
    X86_AT(c, 0x9d17u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009d18  and eax, ebx
    X86_AT(c, 0x9d18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009d1a  or dword ptr es:[edi], eax
    X86_AT(c, 0x9d1au);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009d1d  add edi, 4
    X86_AT(c, 0x9d1du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009d20  dec dword ptr [esp]
    X86_AT(c, 0x9d20u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009d23  cmp dword ptr [esp], 1
    X86_AT(c, 0x9d23u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 009d27  je 0x9d49
    X86_AT(c, 0x9d27u);
    if (x86_cc(c, 4)) { goto L_9d49; }
    X86_TICK(c, 6);
    // 009d29  dec dword ptr [esp]
    X86_AT(c, 0x9d29u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_9d2c:
    X86_TICK(c, 23);
    // 009d2c  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9d2cu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009d2f  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9d2fu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009d30  shld eax, ebx, cl
    X86_AT(c, 0x9d30u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009d33  push eax
    X86_AT(c, 0x9d33u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009d34  call 0x7f8c
    X86_AT(c, 0x9d34u);
    push32(c, 0x9d39u); f_00007f8c(c); X86_RET(c, 0x9d39u);
    X86_TICK(c, 28);
    // 009d39  mov ebx, eax
    X86_AT(c, 0x9d39u);
    c.r[3] = c.r[0];
    // 009d3b  pop eax
    X86_AT(c, 0x9d3bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009d3c  and eax, ebx
    X86_AT(c, 0x9d3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009d3e  or dword ptr es:[edi], eax
    X86_AT(c, 0x9d3eu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009d41  add edi, 4
    X86_AT(c, 0x9d41u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009d44  dec dword ptr [esp]
    X86_AT(c, 0x9d44u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009d47  jne 0x9d2c
    X86_AT(c, 0x9d47u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9d2cu); goto L_9d2c; }
L_9d49:
    X86_TICK(c, 30);
    // 009d49  mov eax, dword ptr [esi]
    X86_AT(c, 0x9d49u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009d4b  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9d4bu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009d4e  shld eax, ebx, cl
    X86_AT(c, 0x9d4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009d51  push eax
    X86_AT(c, 0x9d51u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009d52  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9d52u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009d59  and ebx, 7
    X86_AT(c, 0x9d59u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009d5c  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9d5cu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 009d64  call 0x7f8c
    X86_AT(c, 0x9d64u);
    push32(c, 0x9d69u); f_00007f8c(c); X86_RET(c, 0x9d69u);
    X86_TICK(c, 29);
    // 009d69  and ebx, eax
    X86_AT(c, 0x9d69u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009d6b  pop eax
    X86_AT(c, 0x9d6bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009d6c  and eax, ebx
    X86_AT(c, 0x9d6cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009d6e  or dword ptr es:[edi], eax
    X86_AT(c, 0x9d6eu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009d71  pop ebx
    X86_AT(c, 0x9d71u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009d72  ret 
    X86_AT(c, 0x9d72u);
    c.eip = pop32(c); return;
L_9d74:
    X86_TICK(c, 29);
    // 009d74  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9d74u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009d7b  and eax, 7
    X86_AT(c, 0x9d7bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009d80  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9d80u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009d88  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9d88u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009d8f  and eax, 7
    X86_AT(c, 0x9d8fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009d94  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0x9d94u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 009d9c  call 0x7f8c
    X86_AT(c, 0x9d9cu);
    push32(c, 0x9da1u); f_00007f8c(c); X86_RET(c, 0x9da1u);
    X86_TICK(c, 38);
    // 009da1  and ebx, eax
    X86_AT(c, 0x9da1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009da3  push ebx
    X86_AT(c, 0x9da3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009da4  mov eax, dword ptr [esi]
    X86_AT(c, 0x9da4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009da6  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9da6u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009da9  shld eax, ebx, cl
    X86_AT(c, 0x9da9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009dac  pop ebx
    X86_AT(c, 0x9dacu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009dad  and eax, ebx
    X86_AT(c, 0x9dadu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 009daf  or dword ptr es:[edi], eax
    X86_AT(c, 0x9dafu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 009db2  ret 
    X86_AT(c, 0x9db2u);
    c.eip = pop32(c); return;
L_9db4:
    X86_TICK(c, 12);
    // 009db4  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x9db4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009dbc  jne 0x9e7c
    X86_AT(c, 0x9dbcu);
    if (x86_cc(c, 5)) { goto L_9e7c; }
    X86_TICK(c, 7);
    // 009dc2  cmp ebx, 1
    X86_AT(c, 0x9dc2u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009dc5  je 0x9e3c
    X86_AT(c, 0x9dc5u);
    if (x86_cc(c, 4)) { goto L_9e3c; }
    X86_TICK(c, 66);
    // 009dc7  push ecx
    X86_AT(c, 0x9dc7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 009dc8  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9dc8u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009dcb  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9dcbu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009dcc  shld eax, edx, cl
    X86_AT(c, 0x9dccu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009dcf  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9dcfu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009dd6  and edx, 7
    X86_AT(c, 0x9dd6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009dd9  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x9dd9u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 009de1  mov ecx, edx
    X86_AT(c, 0x9de1u);
    c.r[1] = c.r[2];
    // 009de3  not edx
    X86_AT(c, 0x9de3u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009de5  and edx, dword ptr es:[edi]
    X86_AT(c, 0x9de5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[0] + (uint32_t)(c.r[7]))), 4); }
    // 009de8  and ecx, eax
    X86_AT(c, 0x9de8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009dea  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9deau);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009ded  and eax, ecx
    X86_AT(c, 0x9dedu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009def  or eax, edx
    X86_AT(c, 0x9defu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 009df1  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9df1u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 009df2  pop ecx
    X86_AT(c, 0x9df2u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 009df3  dec ebx
    X86_AT(c, 0x9df3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009df4  cmp ebx, 1
    X86_AT(c, 0x9df4u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009df7  je 0x9e0a
    X86_AT(c, 0x9df7u);
    if (x86_cc(c, 4)) { goto L_9e0a; }
    X86_TICK(c, 2);
    // 009df9  dec ebx
    X86_AT(c, 0x9df9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_9dfa:
    X86_TICK(c, 30);
    // 009dfa  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9dfau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009dfd  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9dfdu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009dfe  shld eax, edx, cl
    X86_AT(c, 0x9dfeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009e01  and dword ptr es:[edi], eax
    X86_AT(c, 0x9e01u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[0], 4)); }
    // 009e04  add edi, 4
    X86_AT(c, 0x9e04u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009e07  dec ebx
    X86_AT(c, 0x9e07u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009e08  jne 0x9dfa
    X86_AT(c, 0x9e08u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9dfau); goto L_9dfa; }
L_9e0a:
    X86_TICK(c, 55);
    // 009e0a  mov eax, dword ptr [esi]
    X86_AT(c, 0x9e0au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009e0c  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9e0cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009e0f  shld eax, edx, cl
    X86_AT(c, 0x9e0fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009e12  push eax
    X86_AT(c, 0x9e12u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009e13  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9e13u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009e1a  and edx, 7
    X86_AT(c, 0x9e1au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009e1d  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9e1du);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009e25  mov ecx, edx
    X86_AT(c, 0x9e25u);
    c.r[1] = c.r[2];
    // 009e27  not edx
    X86_AT(c, 0x9e27u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009e29  pop eax
    X86_AT(c, 0x9e29u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009e2a  and ecx, eax
    X86_AT(c, 0x9e2au);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009e2c  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9e2cu);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009e2f  and edx, eax
    X86_AT(c, 0x9e2fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[0], 4); }
    // 009e31  and eax, ecx
    X86_AT(c, 0x9e31u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009e33  or eax, edx
    X86_AT(c, 0x9e33u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 009e35  mov dword ptr es:[edi], eax
    X86_AT(c, 0x9e35u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[0]);
    // 009e38  ret 
    X86_AT(c, 0x9e38u);
    c.eip = pop32(c); return;
L_9e3c:
    X86_TICK(c, 66);
    // 009e3c  mov eax, dword ptr [esi]
    X86_AT(c, 0x9e3cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009e3e  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9e3eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009e41  shld eax, edx, cl
    X86_AT(c, 0x9e41u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009e44  push eax
    X86_AT(c, 0x9e44u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009e45  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9e45u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 009e4c  shld ebx, eax, 0x10
    X86_AT(c, 0x9e4cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 009e50  and eax, 7
    X86_AT(c, 0x9e50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009e55  mov edx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9e55u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009e5d  and ebx, 7
    X86_AT(c, 0x9e5du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009e60  and edx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9e60u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u))), 4); }
    // 009e68  mov ecx, edx
    X86_AT(c, 0x9e68u);
    c.r[1] = c.r[2];
    // 009e6a  not edx
    X86_AT(c, 0x9e6au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 009e6c  pop eax
    X86_AT(c, 0x9e6cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009e6d  and ecx, eax
    X86_AT(c, 0x9e6du);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009e6f  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9e6fu);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009e72  and edx, eax
    X86_AT(c, 0x9e72u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[0], 4); }
    // 009e74  and eax, ecx
    X86_AT(c, 0x9e74u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009e76  or eax, edx
    X86_AT(c, 0x9e76u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 009e78  mov dword ptr es:[edi], eax
    X86_AT(c, 0x9e78u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[0]);
    // 009e7b  ret 
    X86_AT(c, 0x9e7bu);
    c.eip = pop32(c); return;
L_9e7c:
    X86_TICK(c, 7);
    // 009e7c  cmp ebx, 1
    X86_AT(c, 0x9e7cu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009e7f  je 0x9f28
    X86_AT(c, 0x9e7fu);
    if (x86_cc(c, 4)) { goto L_9f28; }
    X86_TICK(c, 37);
    // 009e85  push ebx
    X86_AT(c, 0x9e85u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 009e86  push ecx
    X86_AT(c, 0x9e86u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 009e87  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9e87u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009e8a  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9e8au);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009e8b  shld eax, ebx, cl
    X86_AT(c, 0x9e8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009e8e  push eax
    X86_AT(c, 0x9e8eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009e8f  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9e8fu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009e96  and ebx, 7
    X86_AT(c, 0x9e96u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009e99  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0x9e99u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 009ea1  call 0x7f8c
    X86_AT(c, 0x9ea1u);
    push32(c, 0x9ea6u); f_00007f8c(c); X86_RET(c, 0x9ea6u);
    X86_TICK(c, 55);
    // 009ea6  and ebx, eax
    X86_AT(c, 0x9ea6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009ea8  mov ecx, ebx
    X86_AT(c, 0x9ea8u);
    c.r[1] = c.r[3];
    // 009eaa  not ebx
    X86_AT(c, 0x9eaau);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009eac  and ebx, dword ptr es:[edi]
    X86_AT(c, 0x9eacu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[0] + (uint32_t)(c.r[7]))), 4); }
    // 009eaf  pop eax
    X86_AT(c, 0x9eafu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009eb0  and ecx, eax
    X86_AT(c, 0x9eb0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009eb2  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9eb2u);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009eb5  and eax, ecx
    X86_AT(c, 0x9eb5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009eb7  or eax, ebx
    X86_AT(c, 0x9eb7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[3], 4); }
    // 009eb9  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9eb9u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 009eba  pop ecx
    X86_AT(c, 0x9ebau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 009ebb  dec dword ptr [esp]
    X86_AT(c, 0x9ebbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009ebe  cmp dword ptr [esp], 1
    X86_AT(c, 0x9ebeu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 009ec2  je 0x9eef
    X86_AT(c, 0x9ec2u);
    if (x86_cc(c, 4)) { goto L_9eef; }
    X86_TICK(c, 6);
    // 009ec4  dec dword ptr [esp]
    X86_AT(c, 0x9ec4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_9ec7:
    X86_TICK(c, 25);
    // 009ec7  push ecx
    X86_AT(c, 0x9ec7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 009ec8  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9ec8u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009ecb  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9ecbu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009ecc  shld eax, ebx, cl
    X86_AT(c, 0x9eccu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009ecf  push eax
    X86_AT(c, 0x9ecfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009ed0  call 0x7f8c
    X86_AT(c, 0x9ed0u);
    push32(c, 0x9ed5u); f_00007f8c(c); X86_RET(c, 0x9ed5u);
    X86_TICK(c, 48);
    // 009ed5  mov ebx, eax
    X86_AT(c, 0x9ed5u);
    c.r[3] = c.r[0];
    // 009ed7  mov ecx, ebx
    X86_AT(c, 0x9ed7u);
    c.r[1] = c.r[3];
    // 009ed9  not ebx
    X86_AT(c, 0x9ed9u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009edb  and ebx, dword ptr es:[edi]
    X86_AT(c, 0x9edbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[0] + (uint32_t)(c.r[7]))), 4); }
    // 009ede  pop eax
    X86_AT(c, 0x9edeu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009edf  and ecx, eax
    X86_AT(c, 0x9edfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009ee1  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9ee1u);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009ee4  and eax, ecx
    X86_AT(c, 0x9ee4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009ee6  or eax, ebx
    X86_AT(c, 0x9ee6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[3], 4); }
    // 009ee8  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x9ee8u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 009ee9  pop ecx
    X86_AT(c, 0x9ee9u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 009eea  dec dword ptr [esp]
    X86_AT(c, 0x9eeau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 009eed  jne 0x9ec7
    X86_AT(c, 0x9eedu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9ec7u); goto L_9ec7; }
L_9eef:
    X86_TICK(c, 30);
    // 009eef  mov eax, dword ptr [esi]
    X86_AT(c, 0x9eefu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009ef1  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9ef1u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009ef4  shld eax, ebx, cl
    X86_AT(c, 0x9ef4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009ef7  push eax
    X86_AT(c, 0x9ef7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009ef8  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9ef8u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009eff  and ebx, 7
    X86_AT(c, 0x9effu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009f02  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9f02u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 009f0a  call 0x7f8c
    X86_AT(c, 0x9f0au);
    push32(c, 0x9f0fu); f_00007f8c(c); X86_RET(c, 0x9f0fu);
    X86_TICK(c, 38);
    // 009f0f  and ebx, eax
    X86_AT(c, 0x9f0fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009f11  mov ecx, ebx
    X86_AT(c, 0x9f11u);
    c.r[1] = c.r[3];
    // 009f13  not ebx
    X86_AT(c, 0x9f13u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009f15  pop eax
    X86_AT(c, 0x9f15u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009f16  and ecx, eax
    X86_AT(c, 0x9f16u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009f18  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9f18u);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009f1b  and ebx, eax
    X86_AT(c, 0x9f1bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009f1d  and eax, ecx
    X86_AT(c, 0x9f1du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009f1f  or eax, ebx
    X86_AT(c, 0x9f1fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[3], 4); }
    // 009f21  mov dword ptr es:[edi], eax
    X86_AT(c, 0x9f21u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[0]);
    // 009f24  pop ebx
    X86_AT(c, 0x9f24u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 009f25  ret 
    X86_AT(c, 0x9f25u);
    c.eip = pop32(c); return;
L_9f28:
    X86_TICK(c, 42);
    // 009f28  mov eax, dword ptr [esi]
    X86_AT(c, 0x9f28u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009f2a  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0x9f2au);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009f2d  shld eax, ebx, cl
    X86_AT(c, 0x9f2du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009f30  push eax
    X86_AT(c, 0x9f30u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 009f31  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9f31u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009f38  and eax, 7
    X86_AT(c, 0x9f38u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009f3d  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9f3du);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009f45  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9f45u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009f4c  and eax, 7
    X86_AT(c, 0x9f4cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009f51  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0x9f51u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 009f59  call 0x7f8c
    X86_AT(c, 0x9f59u);
    push32(c, 0x9f5eu); f_00007f8c(c); X86_RET(c, 0x9f5eu);
    X86_TICK(c, 34);
    // 009f5e  and ebx, eax
    X86_AT(c, 0x9f5eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009f60  mov ecx, ebx
    X86_AT(c, 0x9f60u);
    c.r[1] = c.r[3];
    // 009f62  not ebx
    X86_AT(c, 0x9f62u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 009f64  pop eax
    X86_AT(c, 0x9f64u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 009f65  and ecx, eax
    X86_AT(c, 0x9f65u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[0], 4); }
    // 009f67  mov eax, dword ptr es:[edi]
    X86_AT(c, 0x9f67u);
    c.r[0] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 009f6a  and ebx, eax
    X86_AT(c, 0x9f6au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 009f6c  and eax, ecx
    X86_AT(c, 0x9f6cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
    // 009f6e  or eax, ebx
    X86_AT(c, 0x9f6eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[3], 4); }
    // 009f70  mov dword ptr es:[edi], eax
    X86_AT(c, 0x9f70u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[0]);
    // 009f73  ret 
    X86_AT(c, 0x9f73u);
    c.eip = pop32(c); return;
L_9f74:
    X86_TICK(c, 12);
    // 009f74  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x9f74u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 009f7c  jne 0xa014
    X86_AT(c, 0x9f7cu);
    if (x86_cc(c, 5)) { goto L_a014; }
    X86_TICK(c, 7);
    // 009f82  cmp ebx, 1
    X86_AT(c, 0x9f82u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009f85  je 0x9fe0
    X86_AT(c, 0x9f85u);
    if (x86_cc(c, 4)) { goto L_9fe0; }
    X86_TICK(c, 44);
    // 009f87  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9f87u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009f8a  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9f8au);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009f8b  shld eax, edx, cl
    X86_AT(c, 0x9f8bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009f8e  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9f8eu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 009f95  and edx, 7
    X86_AT(c, 0x9f95u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009f98  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0x9f98u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 009fa0  and eax, edx
    X86_AT(c, 0x9fa0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009fa2  xor dword ptr es:[edi], eax
    X86_AT(c, 0x9fa2u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 009fa5  add edi, 4
    X86_AT(c, 0x9fa5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009fa8  dec ebx
    X86_AT(c, 0x9fa8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009fa9  cmp ebx, 1
    X86_AT(c, 0x9fa9u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 009fac  je 0x9fbf
    X86_AT(c, 0x9facu);
    if (x86_cc(c, 4)) { goto L_9fbf; }
    X86_TICK(c, 2);
    // 009fae  dec ebx
    X86_AT(c, 0x9faeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_9faf:
    X86_TICK(c, 30);
    // 009faf  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9fafu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009fb2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0x9fb2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 009fb3  shld eax, edx, cl
    X86_AT(c, 0x9fb3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009fb6  xor dword ptr es:[edi], eax
    X86_AT(c, 0x9fb6u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 009fb9  add edi, 4
    X86_AT(c, 0x9fb9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 009fbc  dec ebx
    X86_AT(c, 0x9fbcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 009fbd  jne 0x9faf
    X86_AT(c, 0x9fbdu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9fafu); goto L_9faf; }
L_9fbf:
    X86_TICK(c, 40);
    // 009fbf  mov eax, dword ptr [esi]
    X86_AT(c, 0x9fbfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 009fc1  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x9fc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 009fc4  shld eax, edx, cl
    X86_AT(c, 0x9fc4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 009fc7  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0x9fc7u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 009fce  and edx, 7
    X86_AT(c, 0x9fceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 009fd1  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0x9fd1u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 009fd9  and eax, edx
    X86_AT(c, 0x9fd9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 009fdb  xor dword ptr es:[edi], eax
    X86_AT(c, 0x9fdbu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 009fde  ret 
    X86_AT(c, 0x9fdeu);
    c.eip = pop32(c); return;
L_9fe0:
    X86_TICK(c, 57);
    // 009fe0  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x9fe0u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 009fe7  shld ebx, eax, 0x10
    X86_AT(c, 0x9fe7u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 009feb  and eax, 7
    X86_AT(c, 0x9febu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 009ff0  mov edx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0x9ff0u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 009ff8  and ebx, 7
    X86_AT(c, 0x9ff8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 009ffb  and edx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0x9ffbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u))), 4); }
    // 00a003  push edx
    X86_AT(c, 0xa003u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00a004  mov eax, dword ptr [esi]
    X86_AT(c, 0xa004u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a006  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0xa006u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a009  shld eax, edx, cl
    X86_AT(c, 0xa009u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a00c  pop edx
    X86_AT(c, 0xa00cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00a00d  and eax, edx
    X86_AT(c, 0xa00du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 00a00f  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa00fu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a012  ret 
    X86_AT(c, 0xa012u);
    c.eip = pop32(c); return;
L_a014:
    X86_TICK(c, 7);
    // 00a014  cmp ebx, 1
    X86_AT(c, 0xa014u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a017  je 0xa09c
    X86_AT(c, 0xa017u);
    if (x86_cc(c, 4)) { goto L_a09c; }
    X86_TICK(c, 19);
    // 00a01d  push ebx
    X86_AT(c, 0xa01du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a01e  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa01eu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a025  and ebx, 7
    X86_AT(c, 0xa025u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a028  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa028u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a030  call 0x7f8c
    X86_AT(c, 0xa030u);
    push32(c, 0xa035u); f_00007f8c(c); X86_RET(c, 0xa035u);
    X86_TICK(c, 51);
    // 00a035  and ebx, eax
    X86_AT(c, 0xa035u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a037  push ebx
    X86_AT(c, 0xa037u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a038  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa038u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a03b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa03bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a03c  shld eax, ebx, cl
    X86_AT(c, 0xa03cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a03f  pop ebx
    X86_AT(c, 0xa03fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a040  and eax, ebx
    X86_AT(c, 0xa040u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a042  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa042u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a045  add edi, 4
    X86_AT(c, 0xa045u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a048  dec dword ptr [esp]
    X86_AT(c, 0xa048u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a04b  cmp dword ptr [esp], 1
    X86_AT(c, 0xa04bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a04f  je 0xa071
    X86_AT(c, 0xa04fu);
    if (x86_cc(c, 4)) { goto L_a071; }
    X86_TICK(c, 6);
    // 00a051  dec dword ptr [esp]
    X86_AT(c, 0xa051u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a054:
    X86_TICK(c, 23);
    // 00a054  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa054u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a057  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa057u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a058  shld eax, ebx, cl
    X86_AT(c, 0xa058u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a05b  push eax
    X86_AT(c, 0xa05bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a05c  call 0x7f8c
    X86_AT(c, 0xa05cu);
    push32(c, 0xa061u); f_00007f8c(c); X86_RET(c, 0xa061u);
    X86_TICK(c, 28);
    // 00a061  mov ebx, eax
    X86_AT(c, 0xa061u);
    c.r[3] = c.r[0];
    // 00a063  pop eax
    X86_AT(c, 0xa063u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a064  and eax, ebx
    X86_AT(c, 0xa064u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a066  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa066u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a069  add edi, 4
    X86_AT(c, 0xa069u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a06c  dec dword ptr [esp]
    X86_AT(c, 0xa06cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a06f  jne 0xa054
    X86_AT(c, 0xa06fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa054u); goto L_a054; }
L_a071:
    X86_TICK(c, 30);
    // 00a071  mov eax, dword ptr [esi]
    X86_AT(c, 0xa071u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a073  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa073u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a076  shld eax, ebx, cl
    X86_AT(c, 0xa076u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a079  push eax
    X86_AT(c, 0xa079u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a07a  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa07au);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a081  and ebx, 7
    X86_AT(c, 0xa081u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a084  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa084u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a08c  call 0x7f8c
    X86_AT(c, 0xa08cu);
    push32(c, 0xa091u); f_00007f8c(c); X86_RET(c, 0xa091u);
    X86_TICK(c, 29);
    // 00a091  and ebx, eax
    X86_AT(c, 0xa091u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a093  pop eax
    X86_AT(c, 0xa093u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a094  and eax, ebx
    X86_AT(c, 0xa094u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a096  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa096u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a099  pop ebx
    X86_AT(c, 0xa099u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a09a  ret 
    X86_AT(c, 0xa09au);
    c.eip = pop32(c); return;
L_a09c:
    X86_TICK(c, 29);
    // 00a09c  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa09cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a0a3  and eax, 7
    X86_AT(c, 0xa0a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a0a8  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa0a8u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a0b0  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa0b0u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a0b7  and eax, 7
    X86_AT(c, 0xa0b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a0bc  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa0bcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a0c4  call 0x7f8c
    X86_AT(c, 0xa0c4u);
    push32(c, 0xa0c9u); f_00007f8c(c); X86_RET(c, 0xa0c9u);
    X86_TICK(c, 38);
    // 00a0c9  and ebx, eax
    X86_AT(c, 0xa0c9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a0cb  push ebx
    X86_AT(c, 0xa0cbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a0cc  mov eax, dword ptr [esi]
    X86_AT(c, 0xa0ccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a0ce  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa0ceu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a0d1  shld eax, ebx, cl
    X86_AT(c, 0xa0d1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a0d4  pop ebx
    X86_AT(c, 0xa0d4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a0d5  and eax, ebx
    X86_AT(c, 0xa0d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a0d7  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa0d7u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a0da  ret 
    X86_AT(c, 0xa0dau);
    c.eip = pop32(c); return;
L_a0dc:
    X86_TICK(c, 12);
    // 00a0dc  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa0dcu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a0e4  jne 0xa1a0
    X86_AT(c, 0xa0e4u);
    if (x86_cc(c, 5)) { goto L_a1a0; }
    X86_TICK(c, 7);
    // 00a0ea  cmp ebx, 1
    X86_AT(c, 0xa0eau);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a0ed  je 0xa160
    X86_AT(c, 0xa0edu);
    if (x86_cc(c, 4)) { goto L_a160; }
    X86_TICK(c, 57);
    // 00a0ef  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0xa0efu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a0f2  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa0f2u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a0f3  shld eax, edx, cl
    X86_AT(c, 0xa0f3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a0f6  not eax
    X86_AT(c, 0xa0f6u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a0f8  mov dl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa0f8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a0ff  and edx, 7
    X86_AT(c, 0xa0ffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 00a102  mov edx, dword ptr cs:[edx*4 + 0xc394]
    X86_AT(c, 0xa102u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC394u)));
    // 00a10a  not edx
    X86_AT(c, 0xa10au);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a10c  and dword ptr es:[edi], edx
    X86_AT(c, 0xa10cu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[2], 4)); }
    // 00a10f  not edx
    X86_AT(c, 0xa10fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a111  and eax, edx
    X86_AT(c, 0xa111u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 00a113  or dword ptr es:[edi], eax
    X86_AT(c, 0xa113u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a116  add edi, 4
    X86_AT(c, 0xa116u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a119  dec ebx
    X86_AT(c, 0xa119u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 00a11a  cmp ebx, 1
    X86_AT(c, 0xa11au);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a11d  je 0xa132
    X86_AT(c, 0xa11du);
    if (x86_cc(c, 4)) { goto L_a132; }
    X86_TICK(c, 2);
    // 00a11f  dec ebx
    X86_AT(c, 0xa11fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
L_a120:
    X86_TICK(c, 27);
    // 00a120  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0xa120u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a123  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa123u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a124  shld eax, edx, cl
    X86_AT(c, 0xa124u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a127  not eax
    X86_AT(c, 0xa127u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a129  mov dword ptr es:[edi], eax
    X86_AT(c, 0xa129u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[0]);
    // 00a12c  add edi, 4
    X86_AT(c, 0xa12cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a12f  dec ebx
    X86_AT(c, 0xa12fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 00a130  jne 0xa120
    X86_AT(c, 0xa130u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa120u); goto L_a120; }
L_a132:
    X86_TICK(c, 49);
    // 00a132  mov eax, dword ptr [esi]
    X86_AT(c, 0xa132u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a134  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0xa134u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a137  shld eax, edx, cl
    X86_AT(c, 0xa137u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a13a  not eax
    X86_AT(c, 0xa13au);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a13c  mov dl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa13cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a143  and edx, 7
    X86_AT(c, 0xa143u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7u, 4); }
    // 00a146  mov edx, dword ptr cs:[edx*4 + 0xc3b4]
    X86_AT(c, 0xa146u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC3B4u)));
    // 00a14e  not edx
    X86_AT(c, 0xa14eu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a150  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0xa150u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a153  and ebx, edx
    X86_AT(c, 0xa153u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 00a155  not edx
    X86_AT(c, 0xa155u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a157  and eax, edx
    X86_AT(c, 0xa157u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 00a159  or ebx, eax
    X86_AT(c, 0xa159u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 00a15b  mov dword ptr es:[edi], ebx
    X86_AT(c, 0xa15bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 00a15e  ret 
    X86_AT(c, 0xa15eu);
    c.eip = pop32(c); return;
L_a160:
    X86_TICK(c, 66);
    // 00a160  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa160u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00a167  shld ebx, eax, 0x10
    X86_AT(c, 0xa167u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00a16b  and eax, 7
    X86_AT(c, 0xa16bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a170  mov edx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa170u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a178  and ebx, 7
    X86_AT(c, 0xa178u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a17b  and edx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa17bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u))), 4); }
    // 00a183  push edx
    X86_AT(c, 0xa183u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 00a184  mov eax, dword ptr [esi]
    X86_AT(c, 0xa184u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a186  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0xa186u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a189  shld eax, edx, cl
    X86_AT(c, 0xa189u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a18c  pop edx
    X86_AT(c, 0xa18cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 00a18d  not eax
    X86_AT(c, 0xa18du);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a18f  not edx
    X86_AT(c, 0xa18fu);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a191  mov ebx, dword ptr es:[edi]
    X86_AT(c, 0xa191u);
    c.r[3] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a194  and ebx, edx
    X86_AT(c, 0xa194u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[2], 4); }
    // 00a196  not edx
    X86_AT(c, 0xa196u);
    { uint32_t v = c.r[2]; c.r[2] = ~v & 0xFFFFFFFFu; }
    // 00a198  and eax, edx
    X86_AT(c, 0xa198u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 00a19a  or ebx, eax
    X86_AT(c, 0xa19au);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v | c.r[0], 4); }
    // 00a19c  mov dword ptr es:[edi], ebx
    X86_AT(c, 0xa19cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[3]);
    // 00a19f  ret 
    X86_AT(c, 0xa19fu);
    c.eip = pop32(c); return;
L_a1a0:
    X86_TICK(c, 7);
    // 00a1a0  cmp ebx, 1
    X86_AT(c, 0xa1a0u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a1a3  je 0xa248
    X86_AT(c, 0xa1a3u);
    if (x86_cc(c, 4)) { goto L_a248; }
    X86_TICK(c, 19);
    // 00a1a9  push ebx
    X86_AT(c, 0xa1a9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a1aa  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa1aau);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a1b1  and ebx, 7
    X86_AT(c, 0xa1b1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a1b4  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa1b4u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a1bc  call 0x7f8c
    X86_AT(c, 0xa1bcu);
    push32(c, 0xa1c1u); f_00007f8c(c); X86_RET(c, 0xa1c1u);
    X86_TICK(c, 64);
    // 00a1c1  and ebx, eax
    X86_AT(c, 0xa1c1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a1c3  not ebx
    X86_AT(c, 0xa1c3u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a1c5  and dword ptr es:[edi], ebx
    X86_AT(c, 0xa1c5u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 00a1c8  push ebx
    X86_AT(c, 0xa1c8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a1c9  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa1c9u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a1cc  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa1ccu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a1cd  shld eax, ebx, cl
    X86_AT(c, 0xa1cdu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a1d0  pop ebx
    X86_AT(c, 0xa1d0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a1d1  not eax
    X86_AT(c, 0xa1d1u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a1d3  not ebx
    X86_AT(c, 0xa1d3u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a1d5  and eax, ebx
    X86_AT(c, 0xa1d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a1d7  or dword ptr es:[edi], eax
    X86_AT(c, 0xa1d7u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a1da  add edi, 4
    X86_AT(c, 0xa1dau);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a1dd  dec dword ptr [esp]
    X86_AT(c, 0xa1ddu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a1e0  cmp dword ptr [esp], 1
    X86_AT(c, 0xa1e0u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a1e4  je 0xa20f
    X86_AT(c, 0xa1e4u);
    if (x86_cc(c, 4)) { goto L_a20f; }
    X86_TICK(c, 6);
    // 00a1e6  dec dword ptr [esp]
    X86_AT(c, 0xa1e6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a1e9:
    X86_TICK(c, 25);
    // 00a1e9  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa1e9u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a1ec  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa1ecu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a1ed  shld eax, ebx, cl
    X86_AT(c, 0xa1edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a1f0  not eax
    X86_AT(c, 0xa1f0u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a1f2  push eax
    X86_AT(c, 0xa1f2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a1f3  call 0x7f8c
    X86_AT(c, 0xa1f3u);
    push32(c, 0xa1f8u); f_00007f8c(c); X86_RET(c, 0xa1f8u);
    X86_TICK(c, 39);
    // 00a1f8  mov ebx, eax
    X86_AT(c, 0xa1f8u);
    c.r[3] = c.r[0];
    // 00a1fa  not ebx
    X86_AT(c, 0xa1fau);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a1fc  and dword ptr es:[edi], ebx
    X86_AT(c, 0xa1fcu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 00a1ff  not ebx
    X86_AT(c, 0xa1ffu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a201  pop eax
    X86_AT(c, 0xa201u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a202  and eax, ebx
    X86_AT(c, 0xa202u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a204  or dword ptr es:[edi], eax
    X86_AT(c, 0xa204u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a207  add edi, 4
    X86_AT(c, 0xa207u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a20a  dec dword ptr [esp]
    X86_AT(c, 0xa20au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a20d  jne 0xa1e9
    X86_AT(c, 0xa20du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa1e9u); goto L_a1e9; }
L_a20f:
    X86_TICK(c, 32);
    // 00a20f  mov eax, dword ptr [esi]
    X86_AT(c, 0xa20fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a211  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa211u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a214  shld eax, ebx, cl
    X86_AT(c, 0xa214u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a217  not eax
    X86_AT(c, 0xa217u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a219  push eax
    X86_AT(c, 0xa219u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a21a  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa21au);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a221  and ebx, 7
    X86_AT(c, 0xa221u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a224  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa224u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a22c  call 0x7f8c
    X86_AT(c, 0xa22cu);
    push32(c, 0xa231u); f_00007f8c(c); X86_RET(c, 0xa231u);
    X86_TICK(c, 36);
    // 00a231  and ebx, eax
    X86_AT(c, 0xa231u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a233  not ebx
    X86_AT(c, 0xa233u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a235  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa235u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a238  and edx, ebx
    X86_AT(c, 0xa238u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a23a  not ebx
    X86_AT(c, 0xa23au);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a23c  pop eax
    X86_AT(c, 0xa23cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a23d  and eax, ebx
    X86_AT(c, 0xa23du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a23f  or edx, eax
    X86_AT(c, 0xa23fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a241  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa241u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a244  pop ebx
    X86_AT(c, 0xa244u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a245  ret 
    X86_AT(c, 0xa245u);
    c.eip = pop32(c); return;
L_a248:
    X86_TICK(c, 29);
    // 00a248  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa248u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a24f  and eax, 7
    X86_AT(c, 0xa24fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a254  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa254u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a25c  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa25cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a263  and eax, 7
    X86_AT(c, 0xa263u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a268  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa268u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a270  call 0x7f8c
    X86_AT(c, 0xa270u);
    push32(c, 0xa275u); f_00007f8c(c); X86_RET(c, 0xa275u);
    X86_TICK(c, 47);
    // 00a275  and ebx, eax
    X86_AT(c, 0xa275u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a277  push ebx
    X86_AT(c, 0xa277u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a278  mov eax, dword ptr [esi]
    X86_AT(c, 0xa278u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a27a  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa27au);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a27d  shld eax, ebx, cl
    X86_AT(c, 0xa27du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a280  pop ebx
    X86_AT(c, 0xa280u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a281  not eax
    X86_AT(c, 0xa281u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a283  not ebx
    X86_AT(c, 0xa283u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a285  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa285u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a288  and edx, ebx
    X86_AT(c, 0xa288u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a28a  not ebx
    X86_AT(c, 0xa28au);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a28c  and eax, ebx
    X86_AT(c, 0xa28cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a28e  or edx, eax
    X86_AT(c, 0xa28eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a290  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa290u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a293  ret 
    X86_AT(c, 0xa293u);
    c.eip = pop32(c); return;
L_a294:
    X86_TICK(c, 12);
    // 00a294  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa294u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a29c  jne 0xa40c
    X86_AT(c, 0xa29cu);
    if (x86_cc(c, 5)) { goto L_a40c; }
    X86_TICK(c, 7);
    // 00a2a2  cmp ebx, 1
    X86_AT(c, 0xa2a2u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a2a5  je 0xa3a0
    X86_AT(c, 0xa2a5u);
    if (x86_cc(c, 4)) { goto L_a3a0; }
    X86_TICK(c, 42);
    // 00a2ab  push ebx
    X86_AT(c, 0xa2abu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2ac  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa2acu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a2af  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa2afu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a2b0  shld eax, ebx, cl
    X86_AT(c, 0xa2b0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a2b3  push eax
    X86_AT(c, 0xa2b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a2b4  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa2b4u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a2bb  and ebx, 7
    X86_AT(c, 0xa2bbu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a2be  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa2beu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a2c6  push ecx
    X86_AT(c, 0xa2c6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a2c7  push ebx
    X86_AT(c, 0xa2c7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a2c8  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa2c8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a2cf  sub ebx, ebx
    X86_AT(c, 0xa2cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a2d1  mov cl, 8
    X86_AT(c, 0xa2d1u);
    s8(c, 1, 0x8u);
L_a2d3:
    X86_TICK(c, 10);
    // 00a2d3  shl ebx, 4
    X86_AT(c, 0xa2d3u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a2d6  test eax, 0xf0000000
    X86_AT(c, 0xa2d6u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a2db  je 0xa2e0
    X86_AT(c, 0xa2dbu);
    if (x86_cc(c, 4)) { goto L_a2e0; }
    X86_TICK(c, 2);
    // 00a2dd  or bl, 0xf
    X86_AT(c, 0xa2ddu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a2e0:
    X86_TICK(c, 10);
    // 00a2e0  shl eax, 4
    X86_AT(c, 0xa2e0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a2e3  dec cl
    X86_AT(c, 0xa2e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a2e5  jne 0xa2d3
    X86_AT(c, 0xa2e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa2d3u); goto L_a2d3; }
    X86_TICK(c, 55);
    // 00a2e7  mov eax, ebx
    X86_AT(c, 0xa2e7u);
    c.r[0] = c.r[3];
    // 00a2e9  pop ebx
    X86_AT(c, 0xa2e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a2ea  pop ecx
    X86_AT(c, 0xa2eau);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a2eb  and ebx, eax
    X86_AT(c, 0xa2ebu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a2ed  not ebx
    X86_AT(c, 0xa2edu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2ef  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa2efu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a2f2  and edx, ebx
    X86_AT(c, 0xa2f2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f4  not ebx
    X86_AT(c, 0xa2f4u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a2f6  pop eax
    X86_AT(c, 0xa2f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a2f7  and eax, ebx
    X86_AT(c, 0xa2f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a2f9  or eax, edx
    X86_AT(c, 0xa2f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a2fb  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa2fbu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a2fc  dec dword ptr [esp]
    X86_AT(c, 0xa2fcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a2ff  cmp dword ptr [esp], 1
    X86_AT(c, 0xa2ffu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a303  je 0xa34b
    X86_AT(c, 0xa303u);
    if (x86_cc(c, 4)) { goto L_a34b; }
    X86_TICK(c, 6);
    // 00a305  dec dword ptr [esp]
    X86_AT(c, 0xa305u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a308:
    X86_TICK(c, 30);
    // 00a308  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa308u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a30b  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa30bu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a30c  shld eax, ebx, cl
    X86_AT(c, 0xa30cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a30f  push eax
    X86_AT(c, 0xa30fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a310  push ecx
    X86_AT(c, 0xa310u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a311  push ebx
    X86_AT(c, 0xa311u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a312  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa312u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a319  sub ebx, ebx
    X86_AT(c, 0xa319u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a31b  mov cl, 8
    X86_AT(c, 0xa31bu);
    s8(c, 1, 0x8u);
L_a31d:
    X86_TICK(c, 10);
    // 00a31d  shl ebx, 4
    X86_AT(c, 0xa31du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a320  test eax, 0xf0000000
    X86_AT(c, 0xa320u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a325  je 0xa32a
    X86_AT(c, 0xa325u);
    if (x86_cc(c, 4)) { goto L_a32a; }
    X86_TICK(c, 2);
    // 00a327  or bl, 0xf
    X86_AT(c, 0xa327u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a32a:
    X86_TICK(c, 10);
    // 00a32a  shl eax, 4
    X86_AT(c, 0xa32au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a32d  dec cl
    X86_AT(c, 0xa32du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a32f  jne 0xa31d
    X86_AT(c, 0xa32fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa31du); goto L_a31d; }
    X86_TICK(c, 48);
    // 00a331  mov eax, ebx
    X86_AT(c, 0xa331u);
    c.r[0] = c.r[3];
    // 00a333  pop ebx
    X86_AT(c, 0xa333u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a334  pop ecx
    X86_AT(c, 0xa334u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a335  mov ebx, eax
    X86_AT(c, 0xa335u);
    c.r[3] = c.r[0];
    // 00a337  not ebx
    X86_AT(c, 0xa337u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a339  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa339u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a33c  and edx, ebx
    X86_AT(c, 0xa33cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a33e  not ebx
    X86_AT(c, 0xa33eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a340  pop eax
    X86_AT(c, 0xa340u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a341  and eax, ebx
    X86_AT(c, 0xa341u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a343  or eax, edx
    X86_AT(c, 0xa343u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[2], 4); }
    // 00a345  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa345u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a346  dec dword ptr [esp]
    X86_AT(c, 0xa346u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a349  jne 0xa308
    X86_AT(c, 0xa349u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa308u); goto L_a308; }
L_a34b:
    X86_TICK(c, 37);
    // 00a34b  mov eax, dword ptr [esi]
    X86_AT(c, 0xa34bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a34d  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa34du);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a350  shld eax, ebx, cl
    X86_AT(c, 0xa350u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a353  push eax
    X86_AT(c, 0xa353u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a354  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa354u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a35b  and ebx, 7
    X86_AT(c, 0xa35bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a35e  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa35eu);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a366  push ecx
    X86_AT(c, 0xa366u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a367  push ebx
    X86_AT(c, 0xa367u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a368  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa368u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a36f  sub ebx, ebx
    X86_AT(c, 0xa36fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a371  mov cl, 8
    X86_AT(c, 0xa371u);
    s8(c, 1, 0x8u);
L_a373:
    X86_TICK(c, 10);
    // 00a373  shl ebx, 4
    X86_AT(c, 0xa373u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a376  test eax, 0xf0000000
    X86_AT(c, 0xa376u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a37b  je 0xa380
    X86_AT(c, 0xa37bu);
    if (x86_cc(c, 4)) { goto L_a380; }
    X86_TICK(c, 2);
    // 00a37d  or bl, 0xf
    X86_AT(c, 0xa37du);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a380:
    X86_TICK(c, 10);
    // 00a380  shl eax, 4
    X86_AT(c, 0xa380u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a383  dec cl
    X86_AT(c, 0xa383u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a385  jne 0xa373
    X86_AT(c, 0xa385u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa373u); goto L_a373; }
    X86_TICK(c, 46);
    // 00a387  mov eax, ebx
    X86_AT(c, 0xa387u);
    c.r[0] = c.r[3];
    // 00a389  pop ebx
    X86_AT(c, 0xa389u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a38a  pop ecx
    X86_AT(c, 0xa38au);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a38b  and ebx, eax
    X86_AT(c, 0xa38bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a38d  not ebx
    X86_AT(c, 0xa38du);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a38f  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa38fu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a392  and edx, ebx
    X86_AT(c, 0xa392u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a394  not ebx
    X86_AT(c, 0xa394u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a396  pop eax
    X86_AT(c, 0xa396u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a397  and eax, ebx
    X86_AT(c, 0xa397u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a399  or edx, eax
    X86_AT(c, 0xa399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a39b  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa39bu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a39e  pop ebx
    X86_AT(c, 0xa39eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a39f  ret 
    X86_AT(c, 0xa39fu);
    c.eip = pop32(c); return;
L_a3a0:
    X86_TICK(c, 55);
    // 00a3a0  mov eax, dword ptr [esi]
    X86_AT(c, 0xa3a0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a3a2  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa3a2u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a3a5  shld eax, ebx, cl
    X86_AT(c, 0xa3a5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a3a8  push eax
    X86_AT(c, 0xa3a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a3a9  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa3a9u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a3b0  and eax, 7
    X86_AT(c, 0xa3b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a3b5  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa3b5u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a3bd  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa3bdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a3c4  and eax, 7
    X86_AT(c, 0xa3c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a3c9  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa3c9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a3d1  pop eax
    X86_AT(c, 0xa3d1u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a3d2  push eax
    X86_AT(c, 0xa3d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a3d3  push ecx
    X86_AT(c, 0xa3d3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a3d4  push ebx
    X86_AT(c, 0xa3d4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a3d5  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa3d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a3dc  sub ebx, ebx
    X86_AT(c, 0xa3dcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a3de  mov cl, 8
    X86_AT(c, 0xa3deu);
    s8(c, 1, 0x8u);
L_a3e0:
    X86_TICK(c, 10);
    // 00a3e0  shl ebx, 4
    X86_AT(c, 0xa3e0u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a3e3  test eax, 0xf0000000
    X86_AT(c, 0xa3e3u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a3e8  je 0xa3ed
    X86_AT(c, 0xa3e8u);
    if (x86_cc(c, 4)) { goto L_a3ed; }
    X86_TICK(c, 2);
    // 00a3ea  or bl, 0xf
    X86_AT(c, 0xa3eau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a3ed:
    X86_TICK(c, 10);
    // 00a3ed  shl eax, 4
    X86_AT(c, 0xa3edu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a3f0  dec cl
    X86_AT(c, 0xa3f0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a3f2  jne 0xa3e0
    X86_AT(c, 0xa3f2u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa3e0u); goto L_a3e0; }
    X86_TICK(c, 42);
    // 00a3f4  mov eax, ebx
    X86_AT(c, 0xa3f4u);
    c.r[0] = c.r[3];
    // 00a3f6  pop ebx
    X86_AT(c, 0xa3f6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a3f7  pop ecx
    X86_AT(c, 0xa3f7u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a3f8  and ebx, eax
    X86_AT(c, 0xa3f8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a3fa  not ebx
    X86_AT(c, 0xa3fau);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a3fc  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa3fcu);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a3ff  and edx, ebx
    X86_AT(c, 0xa3ffu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a401  not ebx
    X86_AT(c, 0xa401u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a403  pop eax
    X86_AT(c, 0xa403u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a404  and eax, ebx
    X86_AT(c, 0xa404u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a406  or edx, eax
    X86_AT(c, 0xa406u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a408  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa408u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a40b  ret 
    X86_AT(c, 0xa40bu);
    c.eip = pop32(c); return;
L_a40c:
    X86_TICK(c, 7);
    // 00a40c  cmp ebx, 1
    X86_AT(c, 0xa40cu);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 00a40f  je 0xa524
    X86_AT(c, 0xa40fu);
    if (x86_cc(c, 4)) { goto L_a524; }
    X86_TICK(c, 42);
    // 00a415  push ebx
    X86_AT(c, 0xa415u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a416  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa416u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a419  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa419u);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a41a  shld eax, ebx, cl
    X86_AT(c, 0xa41au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a41d  push eax
    X86_AT(c, 0xa41du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a41e  mov bl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa41eu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a425  and ebx, 7
    X86_AT(c, 0xa425u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a428  mov ebx, dword ptr cs:[ebx*4 + 0xc394]
    X86_AT(c, 0xa428u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC394u)));
    // 00a430  push ecx
    X86_AT(c, 0xa430u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a431  push ebx
    X86_AT(c, 0xa431u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a432  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa432u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a439  sub ebx, ebx
    X86_AT(c, 0xa439u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a43b  mov cl, 8
    X86_AT(c, 0xa43bu);
    s8(c, 1, 0x8u);
L_a43d:
    X86_TICK(c, 10);
    // 00a43d  shl ebx, 4
    X86_AT(c, 0xa43du);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a440  test eax, 0xf0000000
    X86_AT(c, 0xa440u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a445  je 0xa44a
    X86_AT(c, 0xa445u);
    if (x86_cc(c, 4)) { goto L_a44a; }
    X86_TICK(c, 2);
    // 00a447  or bl, 0xf
    X86_AT(c, 0xa447u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a44a:
    X86_TICK(c, 10);
    // 00a44a  shl eax, 4
    X86_AT(c, 0xa44au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a44d  dec cl
    X86_AT(c, 0xa44du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a44f  jne 0xa43d
    X86_AT(c, 0xa44fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa43du); goto L_a43d; }
    X86_TICK(c, 19);
    // 00a451  mov eax, ebx
    X86_AT(c, 0xa451u);
    c.r[0] = c.r[3];
    // 00a453  pop ebx
    X86_AT(c, 0xa453u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a454  pop ecx
    X86_AT(c, 0xa454u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a455  and ebx, eax
    X86_AT(c, 0xa455u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a457  call 0x7f8c
    X86_AT(c, 0xa457u);
    push32(c, 0xa45cu); f_00007f8c(c); X86_RET(c, 0xa45cu);
    X86_TICK(c, 46);
    // 00a45c  and ebx, eax
    X86_AT(c, 0xa45cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a45e  not ebx
    X86_AT(c, 0xa45eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a460  and dword ptr es:[edi], ebx
    X86_AT(c, 0xa460u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 00a463  not ebx
    X86_AT(c, 0xa463u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a465  pop eax
    X86_AT(c, 0xa465u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a466  and eax, ebx
    X86_AT(c, 0xa466u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a468  or dword ptr es:[edi], eax
    X86_AT(c, 0xa468u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a46b  add edi, 4
    X86_AT(c, 0xa46bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a46e  dec dword ptr [esp]
    X86_AT(c, 0xa46eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a471  cmp dword ptr [esp], 1
    X86_AT(c, 0xa471u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[4]))), 0x1u, 0, 4);
    // 00a475  je 0xa4c5
    X86_AT(c, 0xa475u);
    if (x86_cc(c, 4)) { goto L_a4c5; }
    X86_TICK(c, 6);
    // 00a477  dec dword ptr [esp]
    X86_AT(c, 0xa477u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_a47a:
    X86_TICK(c, 30);
    // 00a47a  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa47au);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a47d  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa47du);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a47e  shld eax, ebx, cl
    X86_AT(c, 0xa47eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a481  push eax
    X86_AT(c, 0xa481u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a482  push ecx
    X86_AT(c, 0xa482u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a483  push ebx
    X86_AT(c, 0xa483u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a484  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa484u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a48b  sub ebx, ebx
    X86_AT(c, 0xa48bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a48d  mov cl, 8
    X86_AT(c, 0xa48du);
    s8(c, 1, 0x8u);
L_a48f:
    X86_TICK(c, 10);
    // 00a48f  shl ebx, 4
    X86_AT(c, 0xa48fu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a492  test eax, 0xf0000000
    X86_AT(c, 0xa492u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a497  je 0xa49c
    X86_AT(c, 0xa497u);
    if (x86_cc(c, 4)) { goto L_a49c; }
    X86_TICK(c, 2);
    // 00a499  or bl, 0xf
    X86_AT(c, 0xa499u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a49c:
    X86_TICK(c, 10);
    // 00a49c  shl eax, 4
    X86_AT(c, 0xa49cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a49f  dec cl
    X86_AT(c, 0xa49fu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a4a1  jne 0xa48f
    X86_AT(c, 0xa4a1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa48fu); goto L_a48f; }
    X86_TICK(c, 19);
    // 00a4a3  mov eax, ebx
    X86_AT(c, 0xa4a3u);
    c.r[0] = c.r[3];
    // 00a4a5  pop ebx
    X86_AT(c, 0xa4a5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a4a6  pop ecx
    X86_AT(c, 0xa4a6u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a4a7  mov ebx, eax
    X86_AT(c, 0xa4a7u);
    c.r[3] = c.r[0];
    // 00a4a9  call 0x7f8c
    X86_AT(c, 0xa4a9u);
    push32(c, 0xa4aeu); f_00007f8c(c); X86_RET(c, 0xa4aeu);
    X86_TICK(c, 39);
    // 00a4ae  and ebx, eax
    X86_AT(c, 0xa4aeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a4b0  not ebx
    X86_AT(c, 0xa4b0u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a4b2  and dword ptr es:[edi], ebx
    X86_AT(c, 0xa4b2u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[3], 4)); }
    // 00a4b5  not ebx
    X86_AT(c, 0xa4b5u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a4b7  pop eax
    X86_AT(c, 0xa4b7u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a4b8  and eax, ebx
    X86_AT(c, 0xa4b8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a4ba  or dword ptr es:[edi], eax
    X86_AT(c, 0xa4bau);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a4bd  add edi, 4
    X86_AT(c, 0xa4bdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a4c0  dec dword ptr [esp]
    X86_AT(c, 0xa4c0u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a4c3  jne 0xa47a
    X86_AT(c, 0xa4c3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa47au); goto L_a47a; }
L_a4c5:
    X86_TICK(c, 37);
    // 00a4c5  mov eax, dword ptr [esi]
    X86_AT(c, 0xa4c5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a4c7  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa4c7u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a4ca  shld eax, ebx, cl
    X86_AT(c, 0xa4cau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a4cd  push eax
    X86_AT(c, 0xa4cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a4ce  mov bl, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa4ceu);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a4d5  and ebx, 7
    X86_AT(c, 0xa4d5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & 0x7u, 4); }
    // 00a4d8  mov ebx, dword ptr cs:[ebx*4 + 0xc3b4]
    X86_AT(c, 0xa4d8u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[3] * 4 + 0xC3B4u)));
    // 00a4e0  push ecx
    X86_AT(c, 0xa4e0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a4e1  push ebx
    X86_AT(c, 0xa4e1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a4e2  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa4e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a4e9  sub ebx, ebx
    X86_AT(c, 0xa4e9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a4eb  mov cl, 8
    X86_AT(c, 0xa4ebu);
    s8(c, 1, 0x8u);
L_a4ed:
    X86_TICK(c, 10);
    // 00a4ed  shl ebx, 4
    X86_AT(c, 0xa4edu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a4f0  test eax, 0xf0000000
    X86_AT(c, 0xa4f0u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a4f5  je 0xa4fa
    X86_AT(c, 0xa4f5u);
    if (x86_cc(c, 4)) { goto L_a4fa; }
    X86_TICK(c, 2);
    // 00a4f7  or bl, 0xf
    X86_AT(c, 0xa4f7u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a4fa:
    X86_TICK(c, 10);
    // 00a4fa  shl eax, 4
    X86_AT(c, 0xa4fau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a4fd  dec cl
    X86_AT(c, 0xa4fdu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a4ff  jne 0xa4ed
    X86_AT(c, 0xa4ffu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa4edu); goto L_a4ed; }
    X86_TICK(c, 19);
    // 00a501  mov eax, ebx
    X86_AT(c, 0xa501u);
    c.r[0] = c.r[3];
    // 00a503  pop ebx
    X86_AT(c, 0xa503u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a504  pop ecx
    X86_AT(c, 0xa504u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a505  and ebx, eax
    X86_AT(c, 0xa505u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a507  call 0x7f8c
    X86_AT(c, 0xa507u);
    push32(c, 0xa50cu); f_00007f8c(c); X86_RET(c, 0xa50cu);
    X86_TICK(c, 36);
    // 00a50c  and ebx, eax
    X86_AT(c, 0xa50cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a50e  not ebx
    X86_AT(c, 0xa50eu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a510  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa510u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a513  and edx, ebx
    X86_AT(c, 0xa513u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a515  not ebx
    X86_AT(c, 0xa515u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a517  pop eax
    X86_AT(c, 0xa517u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a518  and eax, ebx
    X86_AT(c, 0xa518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a51a  or edx, eax
    X86_AT(c, 0xa51au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a51c  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa51cu);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a51f  pop ebx
    X86_AT(c, 0xa51fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a520  ret 
    X86_AT(c, 0xa520u);
    c.eip = pop32(c); return;
L_a524:
    X86_TICK(c, 55);
    // 00a524  mov eax, dword ptr [esi]
    X86_AT(c, 0xa524u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 00a526  mov ebx, dword ptr [esi - 4]
    X86_AT(c, 0xa526u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 00a529  shld eax, ebx, cl
    X86_AT(c, 0xa529u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a52c  push eax
    X86_AT(c, 0xa52cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a52d  mov al, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa52du);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a534  and eax, 7
    X86_AT(c, 0xa534u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a539  mov ebx, dword ptr cs:[eax*4 + 0xc394]
    X86_AT(c, 0xa539u);
    c.r[3] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC394u)));
    // 00a541  mov al, byte ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa541u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 00a548  and eax, 7
    X86_AT(c, 0xa548u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 00a54d  and ebx, dword ptr cs:[eax*4 + 0xc3b4]
    X86_AT(c, 0xa54du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xC3B4u))), 4); }
    // 00a555  pop eax
    X86_AT(c, 0xa555u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a556  push eax
    X86_AT(c, 0xa556u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00a557  push ecx
    X86_AT(c, 0xa557u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a558  push ebx
    X86_AT(c, 0xa558u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00a559  xor eax, dword ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa559u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))), 4); }
    // 00a560  sub ebx, ebx
    X86_AT(c, 0xa560u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00a562  mov cl, 8
    X86_AT(c, 0xa562u);
    s8(c, 1, 0x8u);
L_a564:
    X86_TICK(c, 10);
    // 00a564  shl ebx, 4
    X86_AT(c, 0xa564u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 00a567  test eax, 0xf0000000
    X86_AT(c, 0xa567u);
    (void)x86_logic(c, c.r[0] & 0xF0000000u, 4);
    // 00a56c  je 0xa571
    X86_AT(c, 0xa56cu);
    if (x86_cc(c, 4)) { goto L_a571; }
    X86_TICK(c, 2);
    // 00a56e  or bl, 0xf
    X86_AT(c, 0xa56eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0xFu, 1)); }
L_a571:
    X86_TICK(c, 10);
    // 00a571  shl eax, 4
    X86_AT(c, 0xa571u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[0] = r; }
    // 00a574  dec cl
    X86_AT(c, 0xa574u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00a576  jne 0xa564
    X86_AT(c, 0xa576u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa564u); goto L_a564; }
    X86_TICK(c, 19);
    // 00a578  mov eax, ebx
    X86_AT(c, 0xa578u);
    c.r[0] = c.r[3];
    // 00a57a  pop ebx
    X86_AT(c, 0xa57au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00a57b  pop ecx
    X86_AT(c, 0xa57bu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00a57c  and ebx, eax
    X86_AT(c, 0xa57cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a57e  call 0x7f8c
    X86_AT(c, 0xa57eu);
    push32(c, 0xa583u); f_00007f8c(c); X86_RET(c, 0xa583u);
    X86_TICK(c, 32);
    // 00a583  and ebx, eax
    X86_AT(c, 0xa583u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[0], 4); }
    // 00a585  not ebx
    X86_AT(c, 0xa585u);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a587  mov edx, dword ptr es:[edi]
    X86_AT(c, 0xa587u);
    c.r[2] = rd32((c.sbase[0] + (uint32_t)(c.r[7])));
    // 00a58a  and edx, ebx
    X86_AT(c, 0xa58au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[3], 4); }
    // 00a58c  not ebx
    X86_AT(c, 0xa58cu);
    { uint32_t v = c.r[3]; c.r[3] = ~v & 0xFFFFFFFFu; }
    // 00a58e  pop eax
    X86_AT(c, 0xa58eu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00a58f  and eax, ebx
    X86_AT(c, 0xa58fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[3], 4); }
    // 00a591  or edx, eax
    X86_AT(c, 0xa591u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[0], 4); }
    // 00a593  mov dword ptr es:[edi], edx
    X86_AT(c, 0xa593u);
    wr32((c.sbase[0] + (uint32_t)(c.r[7])), c.r[2]);
    // 00a596  ret 
    X86_AT(c, 0xa596u);
    c.eip = pop32(c); return;
L_a598:
    X86_TICK(c, 48);
    // 00a598  mov esi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0xa598u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 00a59f  movzx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa59fu);
    c.r[7] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00a5a7  mov eax, edi
    X86_AT(c, 0xa5a7u);
    c.r[0] = c.r[7];
    // 00a5a9  add edi, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0xa5a9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu))), 0, 4); }
    // 00a5b0  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa5b0u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00a5b8  sub ecx, eax
    X86_AT(c, 0xa5b8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00a5ba  inc ecx
    X86_AT(c, 0xa5bau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00a5bb  sub ax, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0xa5bbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 00a5c3  add esi, eax
    X86_AT(c, 0xa5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 00a5c5  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa5c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a5cd  je 0xa602
    X86_AT(c, 0xa5cdu);
    if (x86_cc(c, 4)) { goto L_a602; }
    X86_TICK(c, 19);
    // 00a5cf  push ecx
    X86_AT(c, 0xa5cfu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a5d0  push edi
    X86_AT(c, 0xa5d0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00a5d1  mov bx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa5d1u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a5d9  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xa5d9u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00a5e1  call 0x7f18
    X86_AT(c, 0xa5e1u);
    push32(c, 0xa5e6u); f_00007f18(c); X86_RET(c, 0xa5e6u);
    X86_TICK(c, 23);
    // 00a5e6  mov edx, edi
    X86_AT(c, 0xa5e6u);
    c.r[2] = c.r[7];
    // 00a5e8  pop edi
    X86_AT(c, 0xa5e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00a5e9  mov cl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa5e9u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a5f0  and cl, 0x1f
    X86_AT(c, 0xa5f0u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 00a5f3  mov eax, 0x80000000
    X86_AT(c, 0xa5f3u);
    c.r[0] = 0x80000000u;
    // 00a5f8  shr eax, cl
    X86_AT(c, 0xa5f8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a5fa  mov dword ptr gs:[ebp + 0x41c], eax
    X86_AT(c, 0xa5fau);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), c.r[0]);
    // 00a601  pop ecx
    X86_AT(c, 0xa601u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_a602:
    X86_TICK(c, 11);
    // 00a602  mov eax, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0xa602u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)));
    // 00a609  jmp dword ptr cs:[eax*4 + 0xa614]
    X86_AT(c, 0xa609u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xA614u)));
      switch (t) {
      case 0x8170u: X86_POLL(c, 0x8170u); goto L_8170;
      case 0xa654u: goto L_a654;
      case 0xa658u: goto L_a658;
      case 0xa688u: goto L_a688;
      case 0xa6c0u: goto L_a6c0;
      case 0xa6f8u: goto L_a6f8;
      case 0xa730u: goto L_a730;
      case 0xa768u: goto L_a768;
      case 0xa7a8u: goto L_a7a8;
      default: x86_jump(c, t); return; } }
L_a654:
    X86_TICK(c, 10);
    // 00a654  ret 
    X86_AT(c, 0xa654u);
    c.eip = pop32(c); return;
L_a658:
    X86_TICK(c, 12);
    // 00a658  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa658u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a660  jne 0xa674
    X86_AT(c, 0xa660u);
    if (x86_cc(c, 5)) { goto L_a674; }
    X86_TICK(c, 33);
    // 00a662  mov eax, ecx
    X86_AT(c, 0xa662u);
    c.r[0] = c.r[1];
    // 00a664  shr ecx, 2
    X86_AT(c, 0xa664u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 00a667  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xa667u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00a669  mov ecx, eax
    X86_AT(c, 0xa669u);
    c.r[1] = c.r[0];
    // 00a66b  and ecx, 3
    X86_AT(c, 0xa66bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 00a66e  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xa66eu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 00a670  ret 
    X86_AT(c, 0xa670u);
    c.eip = pop32(c); return;
L_a674:
    X86_TICK(c, 7);
    // 00a674  call 0x7f38
    X86_AT(c, 0xa674u);
    push32(c, 0xa679u); f_00007f38(c); X86_RET(c, 0xa679u);
    X86_TICK(c, 5);
    // 00a679  jne 0xa680
    X86_AT(c, 0xa679u);
    if (x86_cc(c, 5)) { goto L_a680; }
    X86_TICK(c, 6);
    // 00a67b  mov al, byte ptr [esi]
    X86_AT(c, 0xa67bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a67d  mov byte ptr es:[edi], al
    X86_AT(c, 0xa67du);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 0));
L_a680:
    X86_TICK(c, 11);
    // 00a680  inc esi
    X86_AT(c, 0xa680u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00a681  inc edi
    X86_AT(c, 0xa681u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a682  dec ecx
    X86_AT(c, 0xa682u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a683  jne 0xa674
    X86_AT(c, 0xa683u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa674u); goto L_a674; }
    X86_TICK(c, 10);
    // 00a685  ret 
    X86_AT(c, 0xa685u);
    c.eip = pop32(c); return;
L_a688:
    X86_TICK(c, 12);
    // 00a688  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa688u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a690  jne 0xa6ac
    X86_AT(c, 0xa690u);
    if (x86_cc(c, 5)) { goto L_a6ac; }
    X86_TICK(c, 8);
    // 00a692  shr ecx, 1
    X86_AT(c, 0xa692u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a694  jae 0xa69f
    X86_AT(c, 0xa694u);
    if (x86_cc(c, 3)) { goto L_a69f; }
    X86_TICK(c, 23);
    // 00a696  lodsb al, byte ptr [esi]
    X86_AT(c, 0xa696u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00a697  or byte ptr es:[edi], al
    X86_AT(c, 0xa697u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
    // 00a69a  inc edi
    X86_AT(c, 0xa69au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a69b  test ecx, ecx
    X86_AT(c, 0xa69bu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00a69d  je 0xa6ab
    X86_AT(c, 0xa69du);
    if (x86_cc(c, 4)) { goto L_a6ab; }
L_a69f:
    X86_TICK(c, 23);
    // 00a69f  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa69fu);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a6a1  or word ptr es:[edi], ax
    X86_AT(c, 0xa6a1u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 00a6a5  add edi, 2
    X86_AT(c, 0xa6a5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a6a8  dec ecx
    X86_AT(c, 0xa6a8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a6a9  jne 0xa69f
    X86_AT(c, 0xa6a9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa69fu); goto L_a69f; }
L_a6ab:
    X86_TICK(c, 10);
    // 00a6ab  ret 
    X86_AT(c, 0xa6abu);
    c.eip = pop32(c); return;
L_a6ac:
    X86_TICK(c, 7);
    // 00a6ac  call 0x7f38
    X86_AT(c, 0xa6acu);
    push32(c, 0xa6b1u); f_00007f38(c); X86_RET(c, 0xa6b1u);
    X86_TICK(c, 5);
    // 00a6b1  jne 0xa6b8
    X86_AT(c, 0xa6b1u);
    if (x86_cc(c, 5)) { goto L_a6b8; }
    X86_TICK(c, 11);
    // 00a6b3  mov al, byte ptr [esi]
    X86_AT(c, 0xa6b3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a6b5  or byte ptr es:[edi], al
    X86_AT(c, 0xa6b5u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 0), 1)); }
L_a6b8:
    X86_TICK(c, 11);
    // 00a6b8  inc esi
    X86_AT(c, 0xa6b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00a6b9  inc edi
    X86_AT(c, 0xa6b9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a6ba  dec ecx
    X86_AT(c, 0xa6bau);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a6bb  jne 0xa6ac
    X86_AT(c, 0xa6bbu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa6acu); goto L_a6ac; }
    X86_TICK(c, 10);
    // 00a6bd  ret 
    X86_AT(c, 0xa6bdu);
    c.eip = pop32(c); return;
L_a6c0:
    X86_TICK(c, 12);
    // 00a6c0  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa6c0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a6c8  jne 0xa6e4
    X86_AT(c, 0xa6c8u);
    if (x86_cc(c, 5)) { goto L_a6e4; }
    X86_TICK(c, 8);
    // 00a6ca  shr ecx, 1
    X86_AT(c, 0xa6cau);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a6cc  jae 0xa6d7
    X86_AT(c, 0xa6ccu);
    if (x86_cc(c, 3)) { goto L_a6d7; }
    X86_TICK(c, 23);
    // 00a6ce  lodsb al, byte ptr [esi]
    X86_AT(c, 0xa6ceu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00a6cf  and byte ptr es:[edi], al
    X86_AT(c, 0xa6cfu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 0), 1)); }
    // 00a6d2  inc edi
    X86_AT(c, 0xa6d2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a6d3  test ecx, ecx
    X86_AT(c, 0xa6d3u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00a6d5  je 0xa6e3
    X86_AT(c, 0xa6d5u);
    if (x86_cc(c, 4)) { goto L_a6e3; }
L_a6d7:
    X86_TICK(c, 23);
    // 00a6d7  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa6d7u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a6d9  and word ptr es:[edi], ax
    X86_AT(c, 0xa6d9u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 00a6dd  add edi, 2
    X86_AT(c, 0xa6ddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a6e0  dec ecx
    X86_AT(c, 0xa6e0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a6e1  jne 0xa6d7
    X86_AT(c, 0xa6e1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa6d7u); goto L_a6d7; }
L_a6e3:
    X86_TICK(c, 10);
    // 00a6e3  ret 
    X86_AT(c, 0xa6e3u);
    c.eip = pop32(c); return;
L_a6e4:
    X86_TICK(c, 7);
    // 00a6e4  call 0x7f38
    X86_AT(c, 0xa6e4u);
    push32(c, 0xa6e9u); f_00007f38(c); X86_RET(c, 0xa6e9u);
    X86_TICK(c, 5);
    // 00a6e9  jne 0xa6f0
    X86_AT(c, 0xa6e9u);
    if (x86_cc(c, 5)) { goto L_a6f0; }
    X86_TICK(c, 11);
    // 00a6eb  mov al, byte ptr [esi]
    X86_AT(c, 0xa6ebu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a6ed  and byte ptr es:[edi], al
    X86_AT(c, 0xa6edu);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & g8(c, 0), 1)); }
L_a6f0:
    X86_TICK(c, 11);
    // 00a6f0  inc esi
    X86_AT(c, 0xa6f0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00a6f1  inc edi
    X86_AT(c, 0xa6f1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a6f2  dec ecx
    X86_AT(c, 0xa6f2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a6f3  jne 0xa6e4
    X86_AT(c, 0xa6f3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa6e4u); goto L_a6e4; }
    X86_TICK(c, 10);
    // 00a6f5  ret 
    X86_AT(c, 0xa6f5u);
    c.eip = pop32(c); return;
L_a6f8:
    X86_TICK(c, 12);
    // 00a6f8  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa6f8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a700  jne 0xa71c
    X86_AT(c, 0xa700u);
    if (x86_cc(c, 5)) { goto L_a71c; }
    X86_TICK(c, 8);
    // 00a702  shr ecx, 1
    X86_AT(c, 0xa702u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a704  jae 0xa70f
    X86_AT(c, 0xa704u);
    if (x86_cc(c, 3)) { goto L_a70f; }
    X86_TICK(c, 23);
    // 00a706  lodsb al, byte ptr [esi]
    X86_AT(c, 0xa706u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00a707  xor byte ptr es:[edi], al
    X86_AT(c, 0xa707u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 00a70a  inc edi
    X86_AT(c, 0xa70au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a70b  test ecx, ecx
    X86_AT(c, 0xa70bu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00a70d  je 0xa71b
    X86_AT(c, 0xa70du);
    if (x86_cc(c, 4)) { goto L_a71b; }
L_a70f:
    X86_TICK(c, 23);
    // 00a70f  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa70fu);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a711  xor word ptr es:[edi], ax
    X86_AT(c, 0xa711u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 00a715  add edi, 2
    X86_AT(c, 0xa715u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a718  dec ecx
    X86_AT(c, 0xa718u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a719  jne 0xa70f
    X86_AT(c, 0xa719u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa70fu); goto L_a70f; }
L_a71b:
    X86_TICK(c, 10);
    // 00a71b  ret 
    X86_AT(c, 0xa71bu);
    c.eip = pop32(c); return;
L_a71c:
    X86_TICK(c, 7);
    // 00a71c  call 0x7f38
    X86_AT(c, 0xa71cu);
    push32(c, 0xa721u); f_00007f38(c); X86_RET(c, 0xa721u);
    X86_TICK(c, 5);
    // 00a721  jne 0xa728
    X86_AT(c, 0xa721u);
    if (x86_cc(c, 5)) { goto L_a728; }
    X86_TICK(c, 11);
    // 00a723  mov al, byte ptr [esi]
    X86_AT(c, 0xa723u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a725  xor byte ptr es:[edi], al
    X86_AT(c, 0xa725u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ g8(c, 0), 1)); }
L_a728:
    X86_TICK(c, 11);
    // 00a728  inc esi
    X86_AT(c, 0xa728u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00a729  inc edi
    X86_AT(c, 0xa729u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a72a  dec ecx
    X86_AT(c, 0xa72au);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a72b  jne 0xa71c
    X86_AT(c, 0xa72bu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa71cu); goto L_a71c; }
    X86_TICK(c, 10);
    // 00a72d  ret 
    X86_AT(c, 0xa72du);
    c.eip = pop32(c); return;
L_a730:
    X86_TICK(c, 12);
    // 00a730  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa730u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a738  jne 0xa754
    X86_AT(c, 0xa738u);
    if (x86_cc(c, 5)) { goto L_a754; }
    X86_TICK(c, 8);
    // 00a73a  shr ecx, 1
    X86_AT(c, 0xa73au);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a73c  jae 0xa746
    X86_AT(c, 0xa73cu);
    if (x86_cc(c, 3)) { goto L_a746; }
    X86_TICK(c, 23);
    // 00a73e  lodsb al, byte ptr [esi]
    X86_AT(c, 0xa73eu);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00a73f  not al
    X86_AT(c, 0xa73fu);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 00a741  stosb byte ptr es:[edi], al
    X86_AT(c, 0xa741u);
    x86_string(c, 2, 1, 0, 4, 3);
    // 00a742  test ecx, ecx
    X86_AT(c, 0xa742u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00a744  je 0xa751
    X86_AT(c, 0xa744u);
    if (x86_cc(c, 4)) { goto L_a751; }
L_a746:
    X86_TICK(c, 23);
    // 00a746  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa746u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a748  not ax
    X86_AT(c, 0xa748u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, ~v & 0xFFFFu); }
    // 00a74b  stosw word ptr es:[edi], ax
    X86_AT(c, 0xa74bu);
    x86_string(c, 2, 2, 0, 4, 3);
    // 00a74d  dec ecx
    X86_AT(c, 0xa74du);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a74e  jne 0xa746
    X86_AT(c, 0xa74eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa746u); goto L_a746; }
    X86_TICK(c, 10);
    // 00a750  ret 
    X86_AT(c, 0xa750u);
    c.eip = pop32(c); return;
L_a751:
    X86_TICK(c, 10);
    // 00a751  ret 
    X86_AT(c, 0xa751u);
    c.eip = pop32(c); return;
L_a754:
    X86_TICK(c, 7);
    // 00a754  call 0x7f38
    X86_AT(c, 0xa754u);
    push32(c, 0xa759u); f_00007f38(c); X86_RET(c, 0xa759u);
    X86_TICK(c, 5);
    // 00a759  jne 0xa762
    X86_AT(c, 0xa759u);
    if (x86_cc(c, 5)) { goto L_a762; }
    X86_TICK(c, 8);
    // 00a75b  mov al, byte ptr [esi]
    X86_AT(c, 0xa75bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a75d  not al
    X86_AT(c, 0xa75du);
    { uint32_t v = g8(c, 0); s8(c, 0, ~v & 0xFFu); }
    // 00a75f  mov byte ptr es:[edi], al
    X86_AT(c, 0xa75fu);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 0));
L_a762:
    X86_TICK(c, 11);
    // 00a762  inc esi
    X86_AT(c, 0xa762u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00a763  inc edi
    X86_AT(c, 0xa763u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a764  dec ecx
    X86_AT(c, 0xa764u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a765  jne 0xa754
    X86_AT(c, 0xa765u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa754u); goto L_a754; }
    X86_TICK(c, 10);
    // 00a767  ret 
    X86_AT(c, 0xa767u);
    c.eip = pop32(c); return;
L_a768:
    X86_TICK(c, 12);
    // 00a768  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa768u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a770  jne 0xa788
    X86_AT(c, 0xa770u);
    if (x86_cc(c, 5)) { goto L_a788; }
    X86_TICK(c, 4);
    // 00a772  mov bl, byte ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa772u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))));
L_a779:
    X86_TICK(c, 14);
    // 00a779  lodsb al, byte ptr [esi]
    X86_AT(c, 0xa779u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00a77a  cmp al, bl
    X86_AT(c, 0xa77au);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 00a77c  je 0xa781
    X86_AT(c, 0xa77cu);
    if (x86_cc(c, 4)) { goto L_a781; }
    X86_TICK(c, 2);
    // 00a77e  mov byte ptr es:[edi], al
    X86_AT(c, 0xa77eu);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 0));
L_a781:
    X86_TICK(c, 9);
    // 00a781  inc edi
    X86_AT(c, 0xa781u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a782  dec ecx
    X86_AT(c, 0xa782u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a783  jne 0xa779
    X86_AT(c, 0xa783u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa779u); goto L_a779; }
    X86_TICK(c, 10);
    // 00a785  ret 
    X86_AT(c, 0xa785u);
    c.eip = pop32(c); return;
L_a788:
    X86_TICK(c, 4);
    // 00a788  mov bl, byte ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa788u);
    s8(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))));
L_a78f:
    X86_TICK(c, 7);
    // 00a78f  call 0x7f38
    X86_AT(c, 0xa78fu);
    push32(c, 0xa794u); f_00007f38(c); X86_RET(c, 0xa794u);
    X86_TICK(c, 5);
    // 00a794  jne 0xa79f
    X86_AT(c, 0xa794u);
    if (x86_cc(c, 5)) { goto L_a79f; }
    X86_TICK(c, 11);
    // 00a796  mov al, byte ptr [esi]
    X86_AT(c, 0xa796u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a798  cmp al, bl
    X86_AT(c, 0xa798u);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 00a79a  je 0xa79f
    X86_AT(c, 0xa79au);
    if (x86_cc(c, 4)) { goto L_a79f; }
    X86_TICK(c, 2);
    // 00a79c  mov byte ptr es:[edi], al
    X86_AT(c, 0xa79cu);
    wr8((c.sbase[0] + (uint32_t)(c.r[7])), g8(c, 0));
L_a79f:
    X86_TICK(c, 11);
    // 00a79f  inc esi
    X86_AT(c, 0xa79fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00a7a0  inc edi
    X86_AT(c, 0xa7a0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a7a1  dec ecx
    X86_AT(c, 0xa7a1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a7a2  jne 0xa78f
    X86_AT(c, 0xa7a2u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa78fu); goto L_a78f; }
    X86_TICK(c, 10);
    // 00a7a4  ret 
    X86_AT(c, 0xa7a4u);
    c.eip = pop32(c); return;
L_a7a8:
    X86_TICK(c, 12);
    // 00a7a8  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa7a8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a7b0  jne 0xa7c8
    X86_AT(c, 0xa7b0u);
    if (x86_cc(c, 5)) { goto L_a7c8; }
    X86_TICK(c, 2);
    // 00a7b2  push ecx
    X86_AT(c, 0xa7b2u);
    { uint32_t v = c.r[1]; push32(c, v); }
L_a7b3:
    X86_TICK(c, 11);
    // 00a7b3  mov cl, byte ptr [esi]
    X86_AT(c, 0xa7b3u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a7b5  call 0x7470
    X86_AT(c, 0xa7b5u);
    push32(c, 0xa7bau); f_00007470(c); X86_RET(c, 0xa7bau);
    X86_TICK(c, 15);
    // 00a7ba  inc edi
    X86_AT(c, 0xa7bau);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a7bb  inc esi
    X86_AT(c, 0xa7bbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00a7bc  dec dword ptr [esp]
    X86_AT(c, 0xa7bcu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a7bf  jne 0xa7b3
    X86_AT(c, 0xa7bfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa7b3u); goto L_a7b3; }
    X86_TICK(c, 12);
    // 00a7c1  add esp, 4
    X86_AT(c, 0xa7c1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a7c4  ret 
    X86_AT(c, 0xa7c4u);
    c.eip = pop32(c); return;
L_a7c8:
    X86_TICK(c, 2);
    // 00a7c8  push ecx
    X86_AT(c, 0xa7c8u);
    { uint32_t v = c.r[1]; push32(c, v); }
L_a7c9:
    X86_TICK(c, 7);
    // 00a7c9  call 0x7f38
    X86_AT(c, 0xa7c9u);
    push32(c, 0xa7ceu); f_00007f38(c); X86_RET(c, 0xa7ceu);
    X86_TICK(c, 5);
    // 00a7ce  jne 0xa7d7
    X86_AT(c, 0xa7ceu);
    if (x86_cc(c, 5)) { goto L_a7d7; }
    X86_TICK(c, 11);
    // 00a7d0  mov cl, byte ptr [esi]
    X86_AT(c, 0xa7d0u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a7d2  call 0x7470
    X86_AT(c, 0xa7d2u);
    push32(c, 0xa7d7u); f_00007470(c); X86_RET(c, 0xa7d7u);
L_a7d7:
    X86_TICK(c, 15);
    // 00a7d7  inc esi
    X86_AT(c, 0xa7d7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 00a7d8  inc edi
    X86_AT(c, 0xa7d8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 00a7d9  dec dword ptr [esp]
    X86_AT(c, 0xa7d9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00a7dc  jne 0xa7c9
    X86_AT(c, 0xa7dcu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa7c9u); goto L_a7c9; }
    X86_TICK(c, 12);
    // 00a7de  add esp, 4
    X86_AT(c, 0xa7deu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a7e1  ret 
    X86_AT(c, 0xa7e1u);
    c.eip = pop32(c); return;
L_a7e4:
    X86_TICK(c, 48);
    // 00a7e4  mov esi, dword ptr gs:[ebp + 0x400]
    X86_AT(c, 0xa7e4u);
    c.r[6] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x400u)));
    // 00a7eb  movzx edi, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa7ebu);
    c.r[7] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 00a7f3  mov eax, edi
    X86_AT(c, 0xa7f3u);
    c.r[0] = c.r[7];
    // 00a7f5  mov ebx, dword ptr gs:[ebp + 0x1cc]
    X86_AT(c, 0xa7f5u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)));
    // 00a7fc  lea edi, [ebx + edi*2]
    X86_AT(c, 0xa7fcu);
    c.r[7] = (uint32_t)(c.r[3] + c.r[7] * 2);
    // 00a7ff  movzx ecx, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0xa7ffu);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u)));
    // 00a807  sub ecx, eax
    X86_AT(c, 0xa807u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00a809  inc ecx
    X86_AT(c, 0xa809u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 00a80a  sub ax, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0xa80au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))), 0, 2)); }
    // 00a812  lea esi, [esi + eax*2]
    X86_AT(c, 0xa812u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[0] * 2);
    // 00a815  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa815u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a81d  je 0xa852
    X86_AT(c, 0xa81du);
    if (x86_cc(c, 4)) { goto L_a852; }
    X86_TICK(c, 19);
    // 00a81f  push ecx
    X86_AT(c, 0xa81fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00a820  push edi
    X86_AT(c, 0xa820u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00a821  mov bx, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa821u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a829  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0xa829u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 00a831  call 0x7f18
    X86_AT(c, 0xa831u);
    push32(c, 0xa836u); f_00007f18(c); X86_RET(c, 0xa836u);
    X86_TICK(c, 23);
    // 00a836  mov edx, edi
    X86_AT(c, 0xa836u);
    c.r[2] = c.r[7];
    // 00a838  pop edi
    X86_AT(c, 0xa838u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00a839  mov cl, byte ptr gs:[ebp + 0x222]
    X86_AT(c, 0xa839u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 00a840  and cl, 0x1f
    X86_AT(c, 0xa840u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 00a843  mov eax, 0x80000000
    X86_AT(c, 0xa843u);
    c.r[0] = 0x80000000u;
    // 00a848  shr eax, cl
    X86_AT(c, 0xa848u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 00a84a  mov dword ptr gs:[ebp + 0x41c], eax
    X86_AT(c, 0xa84au);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu)), c.r[0]);
    // 00a851  pop ecx
    X86_AT(c, 0xa851u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_a852:
    X86_TICK(c, 11);
    // 00a852  mov eax, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0xa852u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u)));
    // 00a859  jmp dword ptr cs:[eax*4 + 0xa864]
    X86_AT(c, 0xa859u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xA864u)));
      switch (t) {
      case 0x8170u: X86_POLL(c, 0x8170u); goto L_8170;
      case 0xa8a4u: goto L_a8a4;
      case 0xa8a8u: goto L_a8a8;
      case 0xa8d4u: goto L_a8d4;
      case 0xa914u: goto L_a914;
      case 0xa954u: goto L_a954;
      case 0xa994u: goto L_a994;
      case 0xa9d4u: goto L_a9d4;
      case 0xaa20u: goto L_aa20;
      default: x86_jump(c, t); return; } }
L_a8a4:
    X86_TICK(c, 10);
    // 00a8a4  ret 
    X86_AT(c, 0xa8a4u);
    c.eip = pop32(c); return;
L_a8a8:
    X86_TICK(c, 12);
    // 00a8a8  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa8a8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a8b0  jne 0xa8bc
    X86_AT(c, 0xa8b0u);
    if (x86_cc(c, 5)) { goto L_a8bc; }
    X86_TICK(c, 8);
    // 00a8b2  shr ecx, 1
    X86_AT(c, 0xa8b2u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a8b4  jae 0xa8b8
    X86_AT(c, 0xa8b4u);
    if (x86_cc(c, 3)) { goto L_a8b8; }
    X86_TICK(c, 7);
    // 00a8b6  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xa8b6u);
    x86_string(c, 0, 2, 0, 4, 3);
L_a8b8:
    X86_TICK(c, 17);
    // 00a8b8  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xa8b8u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 00a8ba  ret 
    X86_AT(c, 0xa8bau);
    c.eip = pop32(c); return;
L_a8bc:
    X86_TICK(c, 7);
    // 00a8bc  call 0x7f38
    X86_AT(c, 0xa8bcu);
    push32(c, 0xa8c1u); f_00007f38(c); X86_RET(c, 0xa8c1u);
    X86_TICK(c, 5);
    // 00a8c1  jne 0xa8ca
    X86_AT(c, 0xa8c1u);
    if (x86_cc(c, 5)) { goto L_a8ca; }
    X86_TICK(c, 6);
    // 00a8c3  mov ax, word ptr [esi]
    X86_AT(c, 0xa8c3u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a8c6  mov word ptr es:[edi], ax
    X86_AT(c, 0xa8c6u);
    wr16((c.sbase[0] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
L_a8ca:
    X86_TICK(c, 11);
    // 00a8ca  add esi, 2
    X86_AT(c, 0xa8cau);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a8cd  add edi, 2
    X86_AT(c, 0xa8cdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a8d0  dec ecx
    X86_AT(c, 0xa8d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a8d1  jne 0xa8bc
    X86_AT(c, 0xa8d1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa8bcu); goto L_a8bc; }
    X86_TICK(c, 10);
    // 00a8d3  ret 
    X86_AT(c, 0xa8d3u);
    c.eip = pop32(c); return;
L_a8d4:
    X86_TICK(c, 12);
    // 00a8d4  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa8d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a8dc  jne 0xa8fc
    X86_AT(c, 0xa8dcu);
    if (x86_cc(c, 5)) { goto L_a8fc; }
    X86_TICK(c, 8);
    // 00a8de  shr ecx, 1
    X86_AT(c, 0xa8deu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a8e0  jae 0xa8ef
    X86_AT(c, 0xa8e0u);
    if (x86_cc(c, 3)) { goto L_a8ef; }
    X86_TICK(c, 23);
    // 00a8e2  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa8e2u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a8e4  or word ptr es:[edi], ax
    X86_AT(c, 0xa8e4u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 00a8e8  add edi, 2
    X86_AT(c, 0xa8e8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a8eb  test ecx, ecx
    X86_AT(c, 0xa8ebu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00a8ed  je 0xa8f9
    X86_AT(c, 0xa8edu);
    if (x86_cc(c, 4)) { goto L_a8f9; }
L_a8ef:
    X86_TICK(c, 23);
    // 00a8ef  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa8efu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a8f0  or dword ptr es:[edi], eax
    X86_AT(c, 0xa8f0u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
    // 00a8f3  add edi, 4
    X86_AT(c, 0xa8f3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a8f6  dec ecx
    X86_AT(c, 0xa8f6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a8f7  jne 0xa8ef
    X86_AT(c, 0xa8f7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa8efu); goto L_a8ef; }
L_a8f9:
    X86_TICK(c, 10);
    // 00a8f9  ret 
    X86_AT(c, 0xa8f9u);
    c.eip = pop32(c); return;
L_a8fc:
    X86_TICK(c, 7);
    // 00a8fc  call 0x7f38
    X86_AT(c, 0xa8fcu);
    push32(c, 0xa901u); f_00007f38(c); X86_RET(c, 0xa901u);
    X86_TICK(c, 5);
    // 00a901  jne 0xa90a
    X86_AT(c, 0xa901u);
    if (x86_cc(c, 5)) { goto L_a90a; }
    X86_TICK(c, 11);
    // 00a903  mov ax, word ptr [esi]
    X86_AT(c, 0xa903u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a906  or word ptr es:[edi], ax
    X86_AT(c, 0xa906u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
L_a90a:
    X86_TICK(c, 11);
    // 00a90a  add esi, 2
    X86_AT(c, 0xa90au);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a90d  add edi, 2
    X86_AT(c, 0xa90du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a910  dec ecx
    X86_AT(c, 0xa910u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a911  jne 0xa8fc
    X86_AT(c, 0xa911u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa8fcu); goto L_a8fc; }
    X86_TICK(c, 10);
    // 00a913  ret 
    X86_AT(c, 0xa913u);
    c.eip = pop32(c); return;
L_a914:
    X86_TICK(c, 12);
    // 00a914  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa914u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a91c  jne 0xa93c
    X86_AT(c, 0xa91cu);
    if (x86_cc(c, 5)) { goto L_a93c; }
    X86_TICK(c, 8);
    // 00a91e  shr ecx, 1
    X86_AT(c, 0xa91eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a920  jae 0xa92f
    X86_AT(c, 0xa920u);
    if (x86_cc(c, 3)) { goto L_a92f; }
    X86_TICK(c, 23);
    // 00a922  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa922u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a924  and word ptr es:[edi], ax
    X86_AT(c, 0xa924u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 00a928  add edi, 2
    X86_AT(c, 0xa928u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a92b  test ecx, ecx
    X86_AT(c, 0xa92bu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00a92d  je 0xa939
    X86_AT(c, 0xa92du);
    if (x86_cc(c, 4)) { goto L_a939; }
L_a92f:
    X86_TICK(c, 23);
    // 00a92f  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa92fu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a930  and dword ptr es:[edi], eax
    X86_AT(c, 0xa930u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & c.r[0], 4)); }
    // 00a933  add edi, 4
    X86_AT(c, 0xa933u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a936  dec ecx
    X86_AT(c, 0xa936u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a937  jne 0xa92f
    X86_AT(c, 0xa937u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa92fu); goto L_a92f; }
L_a939:
    X86_TICK(c, 10);
    // 00a939  ret 
    X86_AT(c, 0xa939u);
    c.eip = pop32(c); return;
L_a93c:
    X86_TICK(c, 7);
    // 00a93c  call 0x7f38
    X86_AT(c, 0xa93cu);
    push32(c, 0xa941u); f_00007f38(c); X86_RET(c, 0xa941u);
    X86_TICK(c, 5);
    // 00a941  jne 0xa94a
    X86_AT(c, 0xa941u);
    if (x86_cc(c, 5)) { goto L_a94a; }
    X86_TICK(c, 11);
    // 00a943  mov ax, word ptr [esi]
    X86_AT(c, 0xa943u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a946  and word ptr es:[edi], ax
    X86_AT(c, 0xa946u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
L_a94a:
    X86_TICK(c, 11);
    // 00a94a  add esi, 2
    X86_AT(c, 0xa94au);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a94d  add edi, 2
    X86_AT(c, 0xa94du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a950  dec ecx
    X86_AT(c, 0xa950u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a951  jne 0xa93c
    X86_AT(c, 0xa951u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa93cu); goto L_a93c; }
    X86_TICK(c, 10);
    // 00a953  ret 
    X86_AT(c, 0xa953u);
    c.eip = pop32(c); return;
L_a954:
    X86_TICK(c, 12);
    // 00a954  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa954u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a95c  jne 0xa97c
    X86_AT(c, 0xa95cu);
    if (x86_cc(c, 5)) { goto L_a97c; }
    X86_TICK(c, 8);
    // 00a95e  shr ecx, 1
    X86_AT(c, 0xa95eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a960  jae 0xa96f
    X86_AT(c, 0xa960u);
    if (x86_cc(c, 3)) { goto L_a96f; }
    X86_TICK(c, 23);
    // 00a962  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa962u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a964  xor word ptr es:[edi], ax
    X86_AT(c, 0xa964u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
    // 00a968  add edi, 2
    X86_AT(c, 0xa968u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a96b  test ecx, ecx
    X86_AT(c, 0xa96bu);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00a96d  je 0xa979
    X86_AT(c, 0xa96du);
    if (x86_cc(c, 4)) { goto L_a979; }
L_a96f:
    X86_TICK(c, 23);
    // 00a96f  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa96fu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a970  xor dword ptr es:[edi], eax
    X86_AT(c, 0xa970u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v ^ c.r[0], 4)); }
    // 00a973  add edi, 4
    X86_AT(c, 0xa973u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00a976  dec ecx
    X86_AT(c, 0xa976u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a977  jne 0xa96f
    X86_AT(c, 0xa977u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa96fu); goto L_a96f; }
L_a979:
    X86_TICK(c, 10);
    // 00a979  ret 
    X86_AT(c, 0xa979u);
    c.eip = pop32(c); return;
L_a97c:
    X86_TICK(c, 7);
    // 00a97c  call 0x7f38
    X86_AT(c, 0xa97cu);
    push32(c, 0xa981u); f_00007f38(c); X86_RET(c, 0xa981u);
    X86_TICK(c, 5);
    // 00a981  jne 0xa98a
    X86_AT(c, 0xa981u);
    if (x86_cc(c, 5)) { goto L_a98a; }
    X86_TICK(c, 11);
    // 00a983  mov ax, word ptr [esi]
    X86_AT(c, 0xa983u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a986  xor word ptr es:[edi], ax
    X86_AT(c, 0xa986u);
    { uint32_t ea = (c.sbase[0] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v ^ (c.r[0] & 0xFFFFu), 2)); }
L_a98a:
    X86_TICK(c, 11);
    // 00a98a  add esi, 2
    X86_AT(c, 0xa98au);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a98d  add edi, 2
    X86_AT(c, 0xa98du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a990  dec ecx
    X86_AT(c, 0xa990u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a991  jne 0xa97c
    X86_AT(c, 0xa991u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa97cu); goto L_a97c; }
    X86_TICK(c, 10);
    // 00a993  ret 
    X86_AT(c, 0xa993u);
    c.eip = pop32(c); return;
L_a994:
    X86_TICK(c, 12);
    // 00a994  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa994u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a99c  jne 0xa9b8
    X86_AT(c, 0xa99cu);
    if (x86_cc(c, 5)) { goto L_a9b8; }
    X86_TICK(c, 8);
    // 00a99e  shr ecx, 1
    X86_AT(c, 0xa99eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 00a9a0  jae 0xa9ac
    X86_AT(c, 0xa9a0u);
    if (x86_cc(c, 3)) { goto L_a9ac; }
    X86_TICK(c, 23);
    // 00a9a2  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa9a2u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a9a4  not ax
    X86_AT(c, 0xa9a4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, ~v & 0xFFFFu); }
    // 00a9a7  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa9a7u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a9a8  test ecx, ecx
    X86_AT(c, 0xa9a8u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 00a9aa  je 0xa9b4
    X86_AT(c, 0xa9aau);
    if (x86_cc(c, 4)) { goto L_a9b4; }
L_a9ac:
    X86_TICK(c, 23);
    // 00a9ac  lodsd eax, dword ptr [esi]
    X86_AT(c, 0xa9acu);
    x86_string(c, 3, 4, 0, 4, 3);
    // 00a9ad  not eax
    X86_AT(c, 0xa9adu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 00a9af  stosd dword ptr es:[edi], eax
    X86_AT(c, 0xa9afu);
    x86_string(c, 2, 4, 0, 4, 3);
    // 00a9b0  dec ecx
    X86_AT(c, 0xa9b0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a9b1  jne 0xa9ac
    X86_AT(c, 0xa9b1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa9acu); goto L_a9ac; }
    X86_TICK(c, 10);
    // 00a9b3  ret 
    X86_AT(c, 0xa9b3u);
    c.eip = pop32(c); return;
L_a9b4:
    X86_TICK(c, 10);
    // 00a9b4  ret 
    X86_AT(c, 0xa9b4u);
    c.eip = pop32(c); return;
L_a9b8:
    X86_TICK(c, 7);
    // 00a9b8  call 0x7f38
    X86_AT(c, 0xa9b8u);
    push32(c, 0xa9bdu); f_00007f38(c); X86_RET(c, 0xa9bdu);
    X86_TICK(c, 5);
    // 00a9bd  jne 0xa9c9
    X86_AT(c, 0xa9bdu);
    if (x86_cc(c, 5)) { goto L_a9c9; }
    X86_TICK(c, 8);
    // 00a9bf  mov ax, word ptr [esi]
    X86_AT(c, 0xa9bfu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00a9c2  not ax
    X86_AT(c, 0xa9c2u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, ~v & 0xFFFFu); }
    // 00a9c5  mov word ptr es:[edi], ax
    X86_AT(c, 0xa9c5u);
    wr16((c.sbase[0] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
L_a9c9:
    X86_TICK(c, 11);
    // 00a9c9  add esi, 2
    X86_AT(c, 0xa9c9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a9cc  add edi, 2
    X86_AT(c, 0xa9ccu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a9cf  dec ecx
    X86_AT(c, 0xa9cfu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a9d0  jne 0xa9b8
    X86_AT(c, 0xa9d0u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa9b8u); goto L_a9b8; }
    X86_TICK(c, 10);
    // 00a9d2  ret 
    X86_AT(c, 0xa9d2u);
    c.eip = pop32(c); return;
L_a9d4:
    X86_TICK(c, 12);
    // 00a9d4  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xa9d4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00a9dc  jne 0xa9f8
    X86_AT(c, 0xa9dcu);
    if (x86_cc(c, 5)) { goto L_a9f8; }
    X86_TICK(c, 4);
    // 00a9de  mov bx, word ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa9deu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))));
L_a9e6:
    X86_TICK(c, 14);
    // 00a9e6  lodsw ax, word ptr [esi]
    X86_AT(c, 0xa9e6u);
    x86_string(c, 3, 2, 0, 4, 3);
    // 00a9e8  cmp ax, bx
    X86_AT(c, 0xa9e8u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00a9eb  je 0xa9f1
    X86_AT(c, 0xa9ebu);
    if (x86_cc(c, 4)) { goto L_a9f1; }
    X86_TICK(c, 2);
    // 00a9ed  mov word ptr es:[edi], ax
    X86_AT(c, 0xa9edu);
    wr16((c.sbase[0] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
L_a9f1:
    X86_TICK(c, 9);
    // 00a9f1  add edi, 2
    X86_AT(c, 0xa9f1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00a9f4  dec ecx
    X86_AT(c, 0xa9f4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00a9f5  jne 0xa9e6
    X86_AT(c, 0xa9f5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xa9e6u); goto L_a9e6; }
    X86_TICK(c, 10);
    // 00a9f7  ret 
    X86_AT(c, 0xa9f7u);
    c.eip = pop32(c); return;
L_a9f8:
    X86_TICK(c, 4);
    // 00a9f8  mov bx, word ptr gs:[ebp + 0x11c]
    X86_AT(c, 0xa9f8u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x11Cu))));
L_aa00:
    X86_TICK(c, 7);
    // 00aa00  call 0x7f38
    X86_AT(c, 0xaa00u);
    push32(c, 0xaa05u); f_00007f38(c); X86_RET(c, 0xaa05u);
    X86_TICK(c, 5);
    // 00aa05  jne 0xaa13
    X86_AT(c, 0xaa05u);
    if (x86_cc(c, 5)) { goto L_aa13; }
    X86_TICK(c, 11);
    // 00aa07  mov ax, word ptr [esi]
    X86_AT(c, 0xaa07u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00aa0a  cmp ax, bx
    X86_AT(c, 0xaa0au);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00aa0d  je 0xaa13
    X86_AT(c, 0xaa0du);
    if (x86_cc(c, 4)) { goto L_aa13; }
    X86_TICK(c, 2);
    // 00aa0f  mov word ptr es:[edi], ax
    X86_AT(c, 0xaa0fu);
    wr16((c.sbase[0] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
L_aa13:
    X86_TICK(c, 11);
    // 00aa13  add esi, 2
    X86_AT(c, 0xaa13u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00aa16  add edi, 2
    X86_AT(c, 0xaa16u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00aa19  dec ecx
    X86_AT(c, 0xaa19u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00aa1a  jne 0xaa00
    X86_AT(c, 0xaa1au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xaa00u); goto L_aa00; }
    X86_TICK(c, 10);
    // 00aa1c  ret 
    X86_AT(c, 0xaa1cu);
    c.eip = pop32(c); return;
L_aa20:
    X86_TICK(c, 12);
    // 00aa20  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0xaa20u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00aa28  jne 0xaa44
    X86_AT(c, 0xaa28u);
    if (x86_cc(c, 5)) { goto L_aa44; }
    X86_TICK(c, 2);
    // 00aa2a  push ecx
    X86_AT(c, 0xaa2au);
    { uint32_t v = c.r[1]; push32(c, v); }
L_aa2b:
    X86_TICK(c, 11);
    // 00aa2b  mov cx, word ptr [esi]
    X86_AT(c, 0xaa2bu);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00aa2e  call 0x78e0
    X86_AT(c, 0xaa2eu);
    push32(c, 0xaa33u); f_000078e0(c); X86_RET(c, 0xaa33u);
    X86_TICK(c, 15);
    // 00aa33  add edi, 2
    X86_AT(c, 0xaa33u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00aa36  add esi, 2
    X86_AT(c, 0xaa36u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00aa39  dec dword ptr [esp]
    X86_AT(c, 0xaa39u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00aa3c  jne 0xaa2b
    X86_AT(c, 0xaa3cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xaa2bu); goto L_aa2b; }
    X86_TICK(c, 12);
    // 00aa3e  add esp, 4
    X86_AT(c, 0xaa3eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00aa41  ret 
    X86_AT(c, 0xaa41u);
    c.eip = pop32(c); return;
L_aa44:
    X86_TICK(c, 2);
    // 00aa44  push ecx
    X86_AT(c, 0xaa44u);
    { uint32_t v = c.r[1]; push32(c, v); }
L_aa45:
    X86_TICK(c, 7);
    // 00aa45  call 0x7f38
    X86_AT(c, 0xaa45u);
    push32(c, 0xaa4au); f_00007f38(c); X86_RET(c, 0xaa4au);
    X86_TICK(c, 5);
    // 00aa4a  jne 0xaa54
    X86_AT(c, 0xaa4au);
    if (x86_cc(c, 5)) { goto L_aa54; }
    X86_TICK(c, 11);
    // 00aa4c  mov cx, word ptr [esi]
    X86_AT(c, 0xaa4cu);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[6]))));
    // 00aa4f  call 0x78e0
    X86_AT(c, 0xaa4fu);
    push32(c, 0xaa54u); f_000078e0(c); X86_RET(c, 0xaa54u);
L_aa54:
    X86_TICK(c, 15);
    // 00aa54  add esi, 2
    X86_AT(c, 0xaa54u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00aa57  add edi, 2
    X86_AT(c, 0xaa57u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 00aa5a  dec dword ptr [esp]
    X86_AT(c, 0xaa5au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 00aa5d  jne 0xaa45
    X86_AT(c, 0xaa5du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xaa45u); goto L_aa45; }
    X86_TICK(c, 12);
    // 00aa5f  add esp, 4
    X86_AT(c, 0xaa5fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 00aa62  ret 
    X86_AT(c, 0xaa62u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ed7u, "ran off the end of a function");
}
}

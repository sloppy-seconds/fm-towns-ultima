#include "p_game_funcs.h"
namespace p_game {
void f_000eea58(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0eea58  push ebp
    X86_AT(c, 0xeea58u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0eea59  mov ebp, esp
    X86_AT(c, 0xeea59u);
    c.r[5] = c.r[4];
    // 0eea5b  push esi
    X86_AT(c, 0xeea5bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eea5c  push edi
    X86_AT(c, 0xeea5cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eea5d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xeea5du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0eea60  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xeea60u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0eea63  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xeea63u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0eea66  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xeea66u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0eea69  dec edx
    X86_AT(c, 0xeea69u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0eea6a  cmp edx, 3
    X86_AT(c, 0xeea6au);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0eea6d  ja 0xeeabb
    X86_AT(c, 0xeea6du);
    if (x86_cc(c, 7)) { goto L_eeabb; }
    X86_TICK(c, 7);
    // 0eea6f  jmp dword ptr cs:[edx*4 + 0xeea77]
    X86_AT(c, 0xeea6fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xEEA77u)));
      switch (t) {
      case 0xeea87u: goto L_eea87;
      case 0xeea94u: goto L_eea94;
      case 0xeeaa2u: goto L_eeaa2;
      case 0xeeaafu: goto L_eeaaf;
      default: x86_jump(c, t); return; } }
L_eea87:
    X86_TICK(c, 18);
    // 0eea87  sub dword ptr [esi], ecx
    X86_AT(c, 0xeea87u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0eea89  mov eax, dword ptr [esi]
    X86_AT(c, 0xeea89u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0eea8b  and eax, eax
    X86_AT(c, 0xeea8bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0eea8d  jge 0xeeabb
    X86_AT(c, 0xeea8du);
    if (x86_cc(c, 13)) { goto L_eeabb; }
    X86_TICK(c, 14);
    // 0eea8f  add dword ptr [esi], 0x40
    X86_AT(c, 0xeea8fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x40u, 0, 4)); }
    // 0eea92  jmp 0xeeabb
    X86_AT(c, 0xeea92u);
    goto L_eeabb;
L_eea94:
    X86_TICK(c, 18);
    // 0eea94  add dword ptr [esi], ecx
    X86_AT(c, 0xeea94u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[1], 0, 4)); }
    // 0eea96  mov eax, dword ptr [esi]
    X86_AT(c, 0xeea96u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0eea98  cmp eax, 0x40
    X86_AT(c, 0xeea98u);
    (void)x86_sub(c, c.r[0], 0x40u, 0, 4);
    // 0eea9b  jl 0xeeabb
    X86_AT(c, 0xeea9bu);
    if (x86_cc(c, 12)) { goto L_eeabb; }
    X86_TICK(c, 14);
    // 0eea9d  sub dword ptr [esi], 0x40
    X86_AT(c, 0xeea9du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x40u, 0, 4)); }
    // 0eeaa0  jmp 0xeeabb
    X86_AT(c, 0xeeaa0u);
    goto L_eeabb;
L_eeaa2:
    X86_TICK(c, 18);
    // 0eeaa2  sub dword ptr [edi], ecx
    X86_AT(c, 0xeeaa2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
    // 0eeaa4  mov eax, dword ptr [edi]
    X86_AT(c, 0xeeaa4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0eeaa6  and eax, eax
    X86_AT(c, 0xeeaa6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0eeaa8  jge 0xeeabb
    X86_AT(c, 0xeeaa8u);
    if (x86_cc(c, 13)) { goto L_eeabb; }
    X86_TICK(c, 14);
    // 0eeaaa  add dword ptr [edi], 0x40
    X86_AT(c, 0xeeaaau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x40u, 0, 4)); }
    // 0eeaad  jmp 0xeeabb
    X86_AT(c, 0xeeaadu);
    goto L_eeabb;
L_eeaaf:
    X86_TICK(c, 18);
    // 0eeaaf  add dword ptr [edi], ecx
    X86_AT(c, 0xeeaafu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[1], 0, 4)); }
    // 0eeab1  mov eax, dword ptr [edi]
    X86_AT(c, 0xeeab1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0eeab3  cmp eax, 0x40
    X86_AT(c, 0xeeab3u);
    (void)x86_sub(c, c.r[0], 0x40u, 0, 4);
    // 0eeab6  jl 0xeeabb
    X86_AT(c, 0xeeab6u);
    if (x86_cc(c, 12)) { goto L_eeabb; }
    X86_TICK(c, 7);
    // 0eeab8  sub dword ptr [edi], 0x40
    X86_AT(c, 0xeeab8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, 0x40u, 0, 4)); }
L_eeabb:
    X86_TICK(c, 24);
    // 0eeabb  pop edi
    X86_AT(c, 0xeeabbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eeabc  pop esi
    X86_AT(c, 0xeeabcu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eeabd  leave 
    X86_AT(c, 0xeeabdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eeabe  ret 
    X86_AT(c, 0xeeabeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeea58u, "ran off the end of a function");
}
void f_000eeac0(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0eeac0  push ebp
    X86_AT(c, 0xeeac0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0eeac1  mov ebp, esp
    X86_AT(c, 0xeeac1u);
    c.r[5] = c.r[4];
    // 0eeac3  push edi
    X86_AT(c, 0xeeac3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eeac4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xeeac4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0eeac7  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xeeac7u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0eeaca  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xeeacau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0eeacd  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xeeacdu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0eead0  dec edx
    X86_AT(c, 0xeead0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0eead1  cmp edx, 3
    X86_AT(c, 0xeead1u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0eead4  ja 0xeeb28
    X86_AT(c, 0xeead4u);
    if (x86_cc(c, 7)) { goto L_eeb28; }
    X86_TICK(c, 7);
    // 0eead6  jmp dword ptr cs:[edx*4 + 0xeeade]
    X86_AT(c, 0xeead6u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xEEADEu)));
      switch (t) {
      case 0xeeaeeu: goto L_eeaee;
      case 0xeeafdu: goto L_eeafd;
      case 0xeeb0cu: goto L_eeb0c;
      case 0xeeb1bu: goto L_eeb1b;
      default: x86_jump(c, t); return; } }
L_eeaee:
    X86_TICK(c, 19);
    // 0eeaee  sub dword ptr [ecx], eax
    X86_AT(c, 0xeeaeeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0eeaf0  cmp dword ptr [ecx], 0
    X86_AT(c, 0xeeaf0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1]))), 0x0u, 0, 4);
    // 0eeaf3  jge 0xeeb28
    X86_AT(c, 0xeeaf3u);
    if (x86_cc(c, 13)) { goto L_eeb28; }
    X86_TICK(c, 9);
    // 0eeaf5  mov dword ptr [ecx], 0
    X86_AT(c, 0xeeaf5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
    // 0eeafb  jmp 0xeeb28
    X86_AT(c, 0xeeafbu);
    goto L_eeb28;
L_eeafd:
    X86_TICK(c, 19);
    // 0eeafd  add dword ptr [ecx], eax
    X86_AT(c, 0xeeafdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0eeaff  cmp dword ptr [ecx], 0xa
    X86_AT(c, 0xeeaffu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1]))), 0xAu, 0, 4);
    // 0eeb02  jle 0xeeb28
    X86_AT(c, 0xeeb02u);
    if (x86_cc(c, 14)) { goto L_eeb28; }
    X86_TICK(c, 9);
    // 0eeb04  mov dword ptr [ecx], 0xa
    X86_AT(c, 0xeeb04u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), 0xAu);
    // 0eeb0a  jmp 0xeeb28
    X86_AT(c, 0xeeb0au);
    goto L_eeb28;
L_eeb0c:
    X86_TICK(c, 19);
    // 0eeb0c  sub dword ptr [edi], eax
    X86_AT(c, 0xeeb0cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0eeb0e  cmp dword ptr [edi], 0
    X86_AT(c, 0xeeb0eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7]))), 0x0u, 0, 4);
    // 0eeb11  jge 0xeeb28
    X86_AT(c, 0xeeb11u);
    if (x86_cc(c, 13)) { goto L_eeb28; }
    X86_TICK(c, 9);
    // 0eeb13  mov dword ptr [edi], 0
    X86_AT(c, 0xeeb13u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0eeb19  jmp 0xeeb28
    X86_AT(c, 0xeeb19u);
    goto L_eeb28;
L_eeb1b:
    X86_TICK(c, 19);
    // 0eeb1b  add dword ptr [edi], eax
    X86_AT(c, 0xeeb1bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0eeb1d  cmp dword ptr [edi], 0xa
    X86_AT(c, 0xeeb1du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7]))), 0xAu, 0, 4);
    // 0eeb20  jle 0xeeb28
    X86_AT(c, 0xeeb20u);
    if (x86_cc(c, 14)) { goto L_eeb28; }
    X86_TICK(c, 2);
    // 0eeb22  mov dword ptr [edi], 0xa
    X86_AT(c, 0xeeb22u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), 0xAu);
L_eeb28:
    X86_TICK(c, 20);
    // 0eeb28  pop edi
    X86_AT(c, 0xeeb28u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eeb29  leave 
    X86_AT(c, 0xeeb29u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eeb2a  ret 
    X86_AT(c, 0xeeb2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeeac0u, "ran off the end of a function");
}
void f_000eeb6c(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0eeb6c  push ebp
    X86_AT(c, 0xeeb6cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0eeb6d  mov ebp, esp
    X86_AT(c, 0xeeb6du);
    c.r[5] = c.r[4];
    // 0eeb6f  push edi
    X86_AT(c, 0xeeb6fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eeb70  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xeeb70u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0eeb73  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xeeb73u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0eeb76  sub ecx, ecx
    X86_AT(c, 0xeeb76u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_eeb78:
    X86_TICK(c, 7);
    // 0eeb78  cmp ecx, 0x20
    X86_AT(c, 0xeeb78u);
    (void)x86_sub(c, c.r[1], 0x20u, 0, 4);
    // 0eeb7b  jge 0xeeb9f
    X86_AT(c, 0xeeb7bu);
    if (x86_cc(c, 13)) { goto L_eeb9f; }
    X86_TICK(c, 12);
    // 0eeb7d  cmp byte ptr [ecx + 0xce3c8], 0
    X86_AT(c, 0xeeb7du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCE3C8u))), 0x0u, 0, 1);
    // 0eeb84  je 0xeeb9c
    X86_AT(c, 0xeeb84u);
    if (x86_cc(c, 4)) { goto L_eeb9c; }
    X86_TICK(c, 11);
    // 0eeb86  cmp edi, dword ptr [ecx*4 + 0xce408]
    X86_AT(c, 0xeeb86u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xCE408u))), 0, 4);
    // 0eeb8d  jne 0xeeb9c
    X86_AT(c, 0xeeb8du);
    if (x86_cc(c, 5)) { goto L_eeb9c; }
    X86_TICK(c, 11);
    // 0eeb8f  cmp edx, dword ptr [ecx*4 + 0xce488]
    X86_AT(c, 0xeeb8fu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xCE488u))), 0, 4);
    // 0eeb96  jne 0xeeb9c
    X86_AT(c, 0xeeb96u);
    if (x86_cc(c, 5)) { goto L_eeb9c; }
    X86_TICK(c, 9);
    // 0eeb98  mov eax, ecx
    X86_AT(c, 0xeeb98u);
    c.r[0] = c.r[1];
    // 0eeb9a  jmp 0xeeba4
    X86_AT(c, 0xeeb9au);
    goto L_eeba4;
L_eeb9c:
    X86_TICK(c, 9);
    // 0eeb9c  inc ecx
    X86_AT(c, 0xeeb9cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0eeb9d  jmp 0xeeb78
    X86_AT(c, 0xeeb9du);
    X86_POLL(c, 0xeeb78u); goto L_eeb78;
L_eeb9f:
    X86_TICK(c, 2);
    // 0eeb9f  mov eax, 0xffffffff
    X86_AT(c, 0xeeb9fu);
    c.r[0] = 0xFFFFFFFFu;
L_eeba4:
    X86_TICK(c, 20);
    // 0eeba4  pop edi
    X86_AT(c, 0xeeba4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eeba5  leave 
    X86_AT(c, 0xeeba5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eeba6  ret 
    X86_AT(c, 0xeeba6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeeb6cu, "ran off the end of a function");
}
void f_000eeba8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0eeba8  push ebp
    X86_AT(c, 0xeeba8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0eeba9  mov ebp, esp
    X86_AT(c, 0xeeba9u);
    c.r[5] = c.r[4];
    // 0eebab  sub esp, 0x20
    X86_AT(c, 0xeebabu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x20u, 0, 4); }
    // 0eebae  push ebx
    X86_AT(c, 0xeebaeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eebaf  push esi
    X86_AT(c, 0xeebafu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eebb0  push edi
    X86_AT(c, 0xeebb0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eebb1  mov byte ptr [ebp - 0x1d], 0
    X86_AT(c, 0xeebb1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE3u)), 0x0u);
    // 0eebb5  push 7
    X86_AT(c, 0xeebb5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eebb7  call 0xe693c
    X86_AT(c, 0xeebb7u);
    push32(c, 0xeebbcu); f_000e693c(c); X86_RET(c, 0xeebbcu);
    X86_TICK(c, 11);
    // 0eebbc  push 0x42dc
    X86_AT(c, 0xeebbcu);
    { uint32_t v = 0x42DCu; push32(c, v); }
    // 0eebc1  push 7
    X86_AT(c, 0xeebc1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eebc3  call 0xe5654
    X86_AT(c, 0xeebc3u);
    push32(c, 0xeebc8u); f_000e5654(c); X86_RET(c, 0xeebc8u);
    X86_TICK(c, 27);
    // 0eebc8  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xeebc8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0eebcd  lea edx, [eax + eax*4]
    X86_AT(c, 0xeebcdu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eebd0  lea edx, [eax + edx*2]
    X86_AT(c, 0xeebd0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eebd3  shl edx, 5
    X86_AT(c, 0xeebd3u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eebd6  sub edx, eax
    X86_AT(c, 0xeebd6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eebd8  add esp, 0xc
    X86_AT(c, 0xeebd8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0eebdb  cmp dword ptr [edx + 0xcde56], 1
    X86_AT(c, 0xeebdbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x1u, 0, 4);
    // 0eebe2  je 0xeec20
    X86_AT(c, 0xeebe2u);
    if (x86_cc(c, 4)) { goto L_eec20; }
    X86_TICK(c, 9);
    // 0eebe4  push 7
    X86_AT(c, 0xeebe4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eebe6  call 0xe6c68
    X86_AT(c, 0xeebe6u);
    push32(c, 0xeebebu); f_000e6c68(c); X86_RET(c, 0xeebebu);
    X86_TICK(c, 9);
    // 0eebeb  push 1
    X86_AT(c, 0xeebebu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eebed  call 0xe1944
    X86_AT(c, 0xeebedu);
    push32(c, 0xeebf2u); f_000e1944(c); X86_RET(c, 0xeebf2u);
    X86_TICK(c, 11);
    // 0eebf2  push 0x42f4
    X86_AT(c, 0xeebf2u);
    { uint32_t v = 0x42F4u; push32(c, v); }
    // 0eebf7  push 7
    X86_AT(c, 0xeebf7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eebf9  call 0xe5654
    X86_AT(c, 0xeebf9u);
    push32(c, 0xeebfeu); f_000e5654(c); X86_RET(c, 0xeebfeu);
    X86_TICK(c, 9);
    // 0eebfe  push 7
    X86_AT(c, 0xeebfeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eec00  call 0xe6c68
    X86_AT(c, 0xeec00u);
    push32(c, 0xeec05u); f_000e6c68(c); X86_RET(c, 0xeec05u);
    X86_TICK(c, 11);
    // 0eec05  push 0x4308
    X86_AT(c, 0xeec05u);
    { uint32_t v = 0x4308u; push32(c, v); }
    // 0eec0a  push 7
    X86_AT(c, 0xeec0au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eec0c  call 0xe5654
    X86_AT(c, 0xeec0cu);
    push32(c, 0xeec11u); f_000e5654(c); X86_RET(c, 0xeec11u);
    X86_TICK(c, 9);
    // 0eec11  push 7
    X86_AT(c, 0xeec11u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eec13  call 0xe6c68
    X86_AT(c, 0xeec13u);
    push32(c, 0xeec18u); f_000e6c68(c); X86_RET(c, 0xeec18u);
    X86_TICK(c, 9);
    // 0eec18  add esp, 0x20
    X86_AT(c, 0xeec18u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0eec1b  jmp 0xeeec5
    X86_AT(c, 0xeec1bu);
    goto L_eeec5;
L_eec20:
    X86_TICK(c, 9);
    // 0eec20  push 7
    X86_AT(c, 0xeec20u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eec22  call 0xe26c8
    X86_AT(c, 0xeec22u);
    push32(c, 0xeec27u); f_000e26c8(c); X86_RET(c, 0xeec27u);
    X86_TICK(c, 11);
    // 0eec27  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xeec27u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0eec2a  add esp, 4
    X86_AT(c, 0xeec2au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0eec2d  inc eax
    X86_AT(c, 0xeec2du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0eec2e  jne 0xeec4b
    X86_AT(c, 0xeec2eu);
    if (x86_cc(c, 5)) { goto L_eec4b; }
    X86_TICK(c, 11);
    // 0eec30  push 0x4334
    X86_AT(c, 0xeec30u);
    { uint32_t v = 0x4334u; push32(c, v); }
    // 0eec35  push 7
    X86_AT(c, 0xeec35u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eec37  call 0xe5654
    X86_AT(c, 0xeec37u);
    push32(c, 0xeec3cu); f_000e5654(c); X86_RET(c, 0xeec3cu);
    X86_TICK(c, 9);
    // 0eec3c  push 7
    X86_AT(c, 0xeec3cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eec3e  call 0xe6c68
    X86_AT(c, 0xeec3eu);
    push32(c, 0xeec43u); f_000e6c68(c); X86_RET(c, 0xeec43u);
    X86_TICK(c, 9);
    // 0eec43  add esp, 0xc
    X86_AT(c, 0xeec43u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0eec46  jmp 0xeeec5
    X86_AT(c, 0xeec46u);
    goto L_eeec5;
L_eec4b:
    X86_TICK(c, 9);
    // 0eec4b  push 4
    X86_AT(c, 0xeec4bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eec4d  call 0xe1944
    X86_AT(c, 0xeec4du);
    push32(c, 0xeec52u); f_000e1944(c); X86_RET(c, 0xeec52u);
    X86_TICK(c, 50);
    // 0eec52  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xeec52u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0eec57  lea edx, [eax + eax*4]
    X86_AT(c, 0xeec57u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eec5a  lea edx, [eax + edx*2]
    X86_AT(c, 0xeec5au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eec5d  shl edx, 5
    X86_AT(c, 0xeec5du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eec60  sub edx, eax
    X86_AT(c, 0xeec60u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eec62  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xeec62u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0eec68  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xeec68u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0eec6b  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xeec6bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0eec71  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xeec71u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0eec74  mov eax, 5
    X86_AT(c, 0xeec74u);
    c.r[0] = 0x5u;
    // 0eec79  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xeec79u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0eec7c  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xeec7cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0eec7f  mov edx, 0xffffffff
    X86_AT(c, 0xeec7fu);
    c.r[2] = 0xFFFFFFFFu;
    // 0eec84  mov dword ptr [ebp - 0x1c], edx
    X86_AT(c, 0xeec84u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[2]);
    // 0eec87  push edx
    X86_AT(c, 0xeec87u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0eec88  push 0x7c
    X86_AT(c, 0xeec88u);
    { uint32_t v = 0x7Cu; push32(c, v); }
    // 0eec8a  push eax
    X86_AT(c, 0xeec8au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eec8b  push eax
    X86_AT(c, 0xeec8bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eec8c  call 0xe2e10
    X86_AT(c, 0xeec8cu);
    push32(c, 0xeec91u); f_000e2e10(c); X86_RET(c, 0xeec91u);
    X86_TICK(c, 7);
    // 0eec91  xchg ebx, eax
    X86_AT(c, 0xeec91u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0eec92  mov dword ptr [ebp - 0x18], 0
    X86_AT(c, 0xeec92u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0x0u);
    // 0eec99  add esp, 0x14
    X86_AT(c, 0xeec99u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_eec9c:
    X86_TICK(c, 12);
    // 0eec9c  cmp dword ptr [ebp - 0x18], 3
    X86_AT(c, 0xeec9cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0x3u, 0, 4);
    // 0eeca0  jge 0xeee5f
    X86_AT(c, 0xeeca0u);
    if (x86_cc(c, 13)) { goto L_eee5f; }
    X86_TICK(c, 22);
    // 0eeca6  push 1
    X86_AT(c, 0xeeca6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eeca8  push dword ptr [ebp - 4]
    X86_AT(c, 0xeeca8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0eecab  lea eax, [ebp - 0x14]
    X86_AT(c, 0xeecabu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0eecae  push eax
    X86_AT(c, 0xeecaeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eecaf  lea ecx, [ebp - 0x10]
    X86_AT(c, 0xeecafu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0eecb2  push ecx
    X86_AT(c, 0xeecb2u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0eecb3  call 0xeeac0
    X86_AT(c, 0xeecb3u);
    push32(c, 0xeecb8u); f_000eeac0(c); X86_RET(c, 0xeecb8u);
    X86_TICK(c, 19);
    // 0eecb8  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xeecb8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0eecbb  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xeecbbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0eecbe  push ebx
    X86_AT(c, 0xeecbeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eecbf  call 0xe2f00
    X86_AT(c, 0xeecbfu);
    push32(c, 0xeecc4u); f_000e2f00(c); X86_RET(c, 0xeecc4u);
    X86_TICK(c, 22);
    // 0eecc4  push 1
    X86_AT(c, 0xeecc4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eecc6  push dword ptr [ebp - 4]
    X86_AT(c, 0xeecc6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0eecc9  lea eax, [ebp - 0xc]
    X86_AT(c, 0xeecc9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0eeccc  push eax
    X86_AT(c, 0xeecccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eeccd  lea ecx, [ebp - 8]
    X86_AT(c, 0xeeccdu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0eecd0  push ecx
    X86_AT(c, 0xeecd0u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0eecd1  call 0xeea58
    X86_AT(c, 0xeecd1u);
    push32(c, 0xeecd6u); f_000eea58(c); X86_RET(c, 0xeecd6u);
    X86_TICK(c, 7);
    // 0eecd6  call 0xe2ea0
    X86_AT(c, 0xeecd6u);
    push32(c, 0xeecdbu); f_000e2ea0(c); X86_RET(c, 0xeecdbu);
    X86_TICK(c, 32);
    // 0eecdb  push 2
    X86_AT(c, 0xeecdbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eecdd  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xeecddu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0eece2  lea edx, [eax + eax*4]
    X86_AT(c, 0xeece2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eece5  lea edx, [eax + edx*2]
    X86_AT(c, 0xeece5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eece8  shl edx, 5
    X86_AT(c, 0xeece8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eeceb  sub edx, eax
    X86_AT(c, 0xeecebu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eeced  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xeecedu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0eecf3  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xeecf3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0eecf9  call 0xe7f60
    X86_AT(c, 0xeecf9u);
    push32(c, 0xeecfeu); f_000e7f60(c); X86_RET(c, 0xeecfeu);
    X86_TICK(c, 17);
    // 0eecfe  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xeecfeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0eed01  push dword ptr [ebp - 8]
    X86_AT(c, 0xeed01u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0eed04  call 0xef8f4
    X86_AT(c, 0xeed04u);
    push32(c, 0xeed09u); f_000ef8f4(c); X86_RET(c, 0xeed09u);
    X86_TICK(c, 9);
    // 0eed09  add esp, 0x40
    X86_AT(c, 0xeed09u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0eed0c  cmp eax, 5
    X86_AT(c, 0xeed0cu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0eed0f  je 0xeee5f
    X86_AT(c, 0xeed0fu);
    if (x86_cc(c, 4)) { goto L_eee5f; }
    X86_TICK(c, 17);
    // 0eed15  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xeed15u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0eed18  push dword ptr [ebp - 8]
    X86_AT(c, 0xeed18u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0eed1b  call 0xeeb6c
    X86_AT(c, 0xeed1bu);
    push32(c, 0xeed20u); f_000eeb6c(c); X86_RET(c, 0xeed20u);
    X86_TICK(c, 12);
    // 0eed20  xchg esi, eax
    X86_AT(c, 0xeed20u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0eed21  add esp, 8
    X86_AT(c, 0xeed21u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0eed24  cmp esi, 0xffffffff
    X86_AT(c, 0xeed24u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0eed27  je 0xeee57
    X86_AT(c, 0xeed27u);
    if (x86_cc(c, 4)) { goto L_eee57; }
    X86_TICK(c, 7);
    // 0eed2d  cmp esi, 0xff
    X86_AT(c, 0xeed2du);
    (void)x86_sub(c, c.r[6], 0xFFu, 0, 4);
    // 0eed33  jne 0xeed43
    X86_AT(c, 0xeed33u);
    if (x86_cc(c, 5)) { goto L_eed43; }
    X86_TICK(c, 9);
    // 0eed35  push ebx
    X86_AT(c, 0xeed35u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eed36  call 0xe2df4
    X86_AT(c, 0xeed36u);
    push32(c, 0xeed3bu); f_000e2df4(c); X86_RET(c, 0xeed3bu);
    X86_TICK(c, 9);
    // 0eed3b  add esp, 4
    X86_AT(c, 0xeed3bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0eed3e  jmp 0xeeec5
    X86_AT(c, 0xeed3eu);
    goto L_eeec5;
L_eed43:
    X86_TICK(c, 12);
    // 0eed43  cmp byte ptr [esi + 0xce3c8], 0x48
    X86_AT(c, 0xeed43u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xCE3C8u))), 0x48u, 0, 1);
    // 0eed4a  jne 0xeed5b
    X86_AT(c, 0xeed4au);
    if (x86_cc(c, 5)) { goto L_eed5b; }
    X86_TICK(c, 9);
    // 0eed4c  push 0x64
    X86_AT(c, 0xeed4cu);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0eed4e  call 0xe1a7c
    X86_AT(c, 0xeed4eu);
    push32(c, 0xeed53u); f_000e1a7c(c); X86_RET(c, 0xeed53u);
    X86_TICK(c, 11);
    // 0eed53  add esp, 4
    X86_AT(c, 0xeed53u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0eed56  cmp eax, 0x32
    X86_AT(c, 0xeed56u);
    (void)x86_sub(c, c.r[0], 0x32u, 0, 4);
    // 0eed59  jmp 0xeed68
    X86_AT(c, 0xeed59u);
    goto L_eed68;
L_eed5b:
    X86_TICK(c, 9);
    // 0eed5b  push 0x64
    X86_AT(c, 0xeed5bu);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0eed5d  call 0xe1a7c
    X86_AT(c, 0xeed5du);
    push32(c, 0xeed62u); f_000e1a7c(c); X86_RET(c, 0xeed62u);
    X86_TICK(c, 4);
    // 0eed62  add esp, 4
    X86_AT(c, 0xeed62u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0eed65  cmp eax, 0x4b
    X86_AT(c, 0xeed65u);
    (void)x86_sub(c, c.r[0], 0x4Bu, 0, 4);
L_eed68:
    X86_TICK(c, 5);
    // 0eed68  jl 0xeee5f
    X86_AT(c, 0xeed68u);
    if (x86_cc(c, 12)) { goto L_eee5f; }
    X86_TICK(c, 11);
    // 0eed6e  mov dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xeed6eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), 0x0u);
    // 0eed75  push 8
    X86_AT(c, 0xeed75u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0eed77  call 0xe1944
    X86_AT(c, 0xeed77u);
    push32(c, 0xeed7cu); f_000e1944(c); X86_RET(c, 0xeed7cu);
    X86_TICK(c, 4);
    // 0eed7c  sub edi, edi
    X86_AT(c, 0xeed7cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0eed7e  add esp, 4
    X86_AT(c, 0xeed7eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_eed81:
    X86_TICK(c, 7);
    // 0eed81  cmp edi, 6
    X86_AT(c, 0xeed81u);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0eed84  jge 0xeedc4
    X86_AT(c, 0xeed84u);
    if (x86_cc(c, 13)) { goto L_eedc4; }
    X86_TICK(c, 23);
    // 0eed86  lea eax, [edi + 0x7c]
    X86_AT(c, 0xeed86u);
    c.r[0] = (uint32_t)(c.r[7] + 0x7Cu);
    // 0eed89  push eax
    X86_AT(c, 0xeed89u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eed8a  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xeed8au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0eed8d  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xeed8du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0eed90  push ebx
    X86_AT(c, 0xeed90u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eed91  call 0xe2f48
    X86_AT(c, 0xeed91u);
    push32(c, 0xeed96u); f_000e2f48(c); X86_RET(c, 0xeed96u);
    X86_TICK(c, 7);
    // 0eed96  call 0xe2ea0
    X86_AT(c, 0xeed96u);
    push32(c, 0xeed9bu); f_000e2ea0(c); X86_RET(c, 0xeed9bu);
    X86_TICK(c, 32);
    // 0eed9b  push 2
    X86_AT(c, 0xeed9bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eed9d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xeed9du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0eeda2  lea edx, [eax + eax*4]
    X86_AT(c, 0xeeda2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eeda5  lea edx, [eax + edx*2]
    X86_AT(c, 0xeeda5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eeda8  shl edx, 5
    X86_AT(c, 0xeeda8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eedab  sub edx, eax
    X86_AT(c, 0xeedabu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eedad  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xeedadu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0eedb3  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xeedb3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0eedb9  call 0xe7f60
    X86_AT(c, 0xeedb9u);
    push32(c, 0xeedbeu); f_000e7f60(c); X86_RET(c, 0xeedbeu);
    X86_TICK(c, 11);
    // 0eedbe  inc edi
    X86_AT(c, 0xeedbeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0eedbf  add esp, 0x1c
    X86_AT(c, 0xeedbfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0eedc2  jmp 0xeed81
    X86_AT(c, 0xeedc2u);
    X86_POLL(c, 0xeed81u); goto L_eed81;
L_eedc4:
    X86_TICK(c, 9);
    // 0eedc4  push ebx
    X86_AT(c, 0xeedc4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eedc5  call 0xe2df4
    X86_AT(c, 0xeedc5u);
    push32(c, 0xeedcau); f_000e2df4(c); X86_RET(c, 0xeedcau);
    X86_TICK(c, 7);
    // 0eedca  call 0xe2ea0
    X86_AT(c, 0xeedcau);
    push32(c, 0xeedcfu); f_000e2ea0(c); X86_RET(c, 0xeedcfu);
    X86_TICK(c, 21);
    // 0eedcf  lea eax, [ebp - 0x1d]
    X86_AT(c, 0xeedcfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFE3u);
    // 0eedd2  push eax
    X86_AT(c, 0xeedd2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eedd3  mov dl, byte ptr [esi + 0xce3c8]
    X86_AT(c, 0xeedd3u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xCE3C8u))));
    // 0eedd9  push edx
    X86_AT(c, 0xeedd9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0eedda  push 0x39
    X86_AT(c, 0xeeddau);
    { uint32_t v = 0x39u; push32(c, v); }
    // 0eeddc  push 0xd19ac
    X86_AT(c, 0xeeddcu);
    { uint32_t v = 0xD19ACu; push32(c, v); }
    // 0eede1  call 0xe53e0
    X86_AT(c, 0xeede1u);
    push32(c, 0xeede6u); f_000e53e0(c); X86_RET(c, 0xeede6u);
    X86_TICK(c, 11);
    // 0eede6  push eax
    X86_AT(c, 0xeede6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eede7  push 7
    X86_AT(c, 0xeede7u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eede9  call 0xe6cb0
    X86_AT(c, 0xeede9u);
    push32(c, 0xeedeeu); f_000e6cb0(c); X86_RET(c, 0xeedeeu);
    X86_TICK(c, 14);
    // 0eedee  add esp, 0x1c
    X86_AT(c, 0xeedeeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0eedf1  cmp byte ptr [ebp - 0x1d], 1
    X86_AT(c, 0xeedf1u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE3u))), 0x1u, 0, 1);
    // 0eedf5  je 0xeedfe
    X86_AT(c, 0xeedf5u);
    if (x86_cc(c, 4)) { goto L_eedfe; }
    X86_TICK(c, 9);
    // 0eedf7  push 0x434c
    X86_AT(c, 0xeedf7u);
    { uint32_t v = 0x434Cu; push32(c, v); }
    // 0eedfc  jmp 0xeee03
    X86_AT(c, 0xeedfcu);
    goto L_eee03;
L_eedfe:
    X86_TICK(c, 2);
    // 0eedfe  push 0x4374
    X86_AT(c, 0xeedfeu);
    { uint32_t v = 0x4374u; push32(c, v); }
L_eee03:
    X86_TICK(c, 9);
    // 0eee03  push 7
    X86_AT(c, 0xeee03u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eee05  call 0xe5654
    X86_AT(c, 0xeee05u);
    push32(c, 0xeee0au); f_000e5654(c); X86_RET(c, 0xeee0au);
    X86_TICK(c, 11);
    // 0eee0a  add esp, 8
    X86_AT(c, 0xeee0au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0eee0d  push 7
    X86_AT(c, 0xeee0du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eee0f  call 0xe6c68
    X86_AT(c, 0xeee0fu);
    push32(c, 0xeee14u); f_000e6c68(c); X86_RET(c, 0xeee14u);
    X86_TICK(c, 19);
    // 0eee14  push dword ptr [esi*4 + 0xce488]
    X86_AT(c, 0xeee14u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCE488u))); push32(c, v); }
    // 0eee1b  push dword ptr [esi*4 + 0xce408]
    X86_AT(c, 0xeee1bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCE408u))); push32(c, v); }
    // 0eee22  push 0
    X86_AT(c, 0xeee22u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0eee24  call 0xf3c24
    X86_AT(c, 0xeee24u);
    push32(c, 0xeee29u); f_000f3c24(c); X86_RET(c, 0xeee29u);
    X86_TICK(c, 19);
    // 0eee29  mov eax, 0xffffffff
    X86_AT(c, 0xeee29u);
    c.r[0] = 0xFFFFFFFFu;
    // 0eee2e  mov dword ptr [esi*4 + 0xce408], eax
    X86_AT(c, 0xeee2eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCE408u)), c.r[0]);
    // 0eee35  mov dword ptr [esi*4 + 0xce488], eax
    X86_AT(c, 0xeee35u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCE488u)), c.r[0]);
    // 0eee3c  mov byte ptr [esi + 0xce3c8], 0
    X86_AT(c, 0xeee3cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xCE3C8u)), 0x0u);
    // 0eee43  mov byte ptr [esi + 0xce3e8], 0
    X86_AT(c, 0xeee43u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xCE3E8u)), 0x0u);
    // 0eee4a  mov dword ptr [esi*4 + 0xce608], 0
    X86_AT(c, 0xeee4au);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xCE608u)), 0x0u);
    // 0eee55  jmp 0xeeec2
    X86_AT(c, 0xeee55u);
    goto L_eeec2;
L_eee57:
    X86_TICK(c, 13);
    // 0eee57  inc dword ptr [ebp - 0x18]
    X86_AT(c, 0xeee57u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0eee5a  jmp 0xeec9c
    X86_AT(c, 0xeee5au);
    X86_POLL(c, 0xeec9cu); goto L_eec9c;
L_eee5f:
    X86_TICK(c, 2);
    // 0eee5f  sub edi, edi
    X86_AT(c, 0xeee5fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_eee61:
    X86_TICK(c, 7);
    // 0eee61  cmp edi, 3
    X86_AT(c, 0xeee61u);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0eee64  jge 0xeeea4
    X86_AT(c, 0xeee64u);
    if (x86_cc(c, 13)) { goto L_eeea4; }
    X86_TICK(c, 23);
    // 0eee66  lea eax, [edi + 0x7c]
    X86_AT(c, 0xeee66u);
    c.r[0] = (uint32_t)(c.r[7] + 0x7Cu);
    // 0eee69  push eax
    X86_AT(c, 0xeee69u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eee6a  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xeee6au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0eee6d  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xeee6du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0eee70  push ebx
    X86_AT(c, 0xeee70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eee71  call 0xe2f48
    X86_AT(c, 0xeee71u);
    push32(c, 0xeee76u); f_000e2f48(c); X86_RET(c, 0xeee76u);
    X86_TICK(c, 7);
    // 0eee76  call 0xe2ea0
    X86_AT(c, 0xeee76u);
    push32(c, 0xeee7bu); f_000e2ea0(c); X86_RET(c, 0xeee7bu);
    X86_TICK(c, 32);
    // 0eee7b  push 2
    X86_AT(c, 0xeee7bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eee7d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xeee7du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0eee82  lea edx, [eax + eax*4]
    X86_AT(c, 0xeee82u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eee85  lea edx, [eax + edx*2]
    X86_AT(c, 0xeee85u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eee88  shl edx, 5
    X86_AT(c, 0xeee88u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eee8b  sub edx, eax
    X86_AT(c, 0xeee8bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eee8d  push dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xeee8du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu))); push32(c, v); }
    // 0eee93  push dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xeee93u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu))); push32(c, v); }
    // 0eee99  call 0xe7f60
    X86_AT(c, 0xeee99u);
    push32(c, 0xeee9eu); f_000e7f60(c); X86_RET(c, 0xeee9eu);
    X86_TICK(c, 11);
    // 0eee9e  inc edi
    X86_AT(c, 0xeee9eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0eee9f  add esp, 0x1c
    X86_AT(c, 0xeee9fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0eeea2  jmp 0xeee61
    X86_AT(c, 0xeeea2u);
    X86_POLL(c, 0xeee61u); goto L_eee61;
L_eeea4:
    X86_TICK(c, 9);
    // 0eeea4  push ebx
    X86_AT(c, 0xeeea4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eeea5  call 0xe2df4
    X86_AT(c, 0xeeea5u);
    push32(c, 0xeeeaau); f_000e2df4(c); X86_RET(c, 0xeeeaau);
    X86_TICK(c, 7);
    // 0eeeaa  call 0xe2ea0
    X86_AT(c, 0xeeeaau);
    push32(c, 0xeeeafu); f_000e2ea0(c); X86_RET(c, 0xeeeafu);
    X86_TICK(c, 11);
    // 0eeeaf  push 0x4398
    X86_AT(c, 0xeeeafu);
    { uint32_t v = 0x4398u; push32(c, v); }
    // 0eeeb4  push 7
    X86_AT(c, 0xeeeb4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eeeb6  call 0xe5654
    X86_AT(c, 0xeeeb6u);
    push32(c, 0xeeebbu); f_000e5654(c); X86_RET(c, 0xeeebbu);
    X86_TICK(c, 9);
    // 0eeebb  push 7
    X86_AT(c, 0xeeebbu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eeebd  call 0xe6c68
    X86_AT(c, 0xeeebdu);
    push32(c, 0xeeec2u); f_000e6c68(c); X86_RET(c, 0xeeec2u);
L_eeec2:
    X86_TICK(c, 2);
    // 0eeec2  add esp, 0x10
    X86_AT(c, 0xeeec2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_eeec5:
    X86_TICK(c, 28);
    // 0eeec5  pop edi
    X86_AT(c, 0xeeec5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eeec6  pop esi
    X86_AT(c, 0xeeec6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eeec7  pop ebx
    X86_AT(c, 0xeeec7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0eeec8  leave 
    X86_AT(c, 0xeeec8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eeec9  ret 
    X86_AT(c, 0xeeec9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeeba8u, "ran off the end of a function");
}
void f_000eeec5(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0eeec5  pop edi
    X86_AT(c, 0xeeec5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eeec6  pop esi
    X86_AT(c, 0xeeec6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eeec7  pop ebx
    X86_AT(c, 0xeeec7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0eeec8  leave 
    X86_AT(c, 0xeeec8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eeec9  ret 
    X86_AT(c, 0xeeec9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeeec5u, "ran off the end of a function");
}
void f_000eeecc(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0eeecc  push 7
    X86_AT(c, 0xeeeccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eeece  call 0xe693c
    X86_AT(c, 0xeeeceu);
    push32(c, 0xeeed3u); f_000e693c(c); X86_RET(c, 0xeeed3u);
    X86_TICK(c, 11);
    // 0eeed3  push 0x43b0
    X86_AT(c, 0xeeed3u);
    { uint32_t v = 0x43B0u; push32(c, v); }
    // 0eeed8  push 7
    X86_AT(c, 0xeeed8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eeeda  call 0xe5654
    X86_AT(c, 0xeeedau);
    push32(c, 0xeeedfu); f_000e5654(c); X86_RET(c, 0xeeedfu);
    X86_TICK(c, 9);
    // 0eeedf  push 7
    X86_AT(c, 0xeeedfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eeee1  call 0xe6c68
    X86_AT(c, 0xeeee1u);
    push32(c, 0xeeee6u); f_000e6c68(c); X86_RET(c, 0xeeee6u);
    X86_TICK(c, 26);
    // 0eeee6  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xeeee6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0eeeeb  lea edx, [eax + eax*4]
    X86_AT(c, 0xeeeebu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eeeee  lea edx, [eax + edx*2]
    X86_AT(c, 0xeeeeeu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eeef1  shl edx, 5
    X86_AT(c, 0xeeef1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eeef4  sub edx, eax
    X86_AT(c, 0xeeef4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eeef6  add esp, 0x10
    X86_AT(c, 0xeeef6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0eeef9  mov eax, dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xeeef9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)));
    // 0eeeff  cmp eax, 5
    X86_AT(c, 0xeeeffu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0eef02  je 0xeef21
    X86_AT(c, 0xeef02u);
    if (x86_cc(c, 4)) { goto L_eef21; }
    X86_TICK(c, 7);
    // 0eef04  cmp eax, 4
    X86_AT(c, 0xeef04u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0eef07  je 0xeef21
    X86_AT(c, 0xeef07u);
    if (x86_cc(c, 4)) { goto L_eef21; }
    X86_TICK(c, 11);
    // 0eef09  push 0x43e0
    X86_AT(c, 0xeef09u);
    { uint32_t v = 0x43E0u; push32(c, v); }
    // 0eef0e  push 7
    X86_AT(c, 0xeef0eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eef10  call 0xe5654
    X86_AT(c, 0xeef10u);
    push32(c, 0xeef15u); f_000e5654(c); X86_RET(c, 0xeef15u);
    X86_TICK(c, 9);
    // 0eef15  push 7
    X86_AT(c, 0xeef15u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eef17  call 0xe6c68
    X86_AT(c, 0xeef17u);
    push32(c, 0xeef1cu); f_000e6c68(c); X86_RET(c, 0xeef1cu);
    X86_TICK(c, 9);
    // 0eef1c  add esp, 0xc
    X86_AT(c, 0xeef1cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0eef1f  jmp 0xeef79
    X86_AT(c, 0xeef1fu);
    goto L_eef79;
L_eef21:
    X86_TICK(c, 25);
    // 0eef21  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xeef21u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0eef26  lea edx, [eax + eax*4]
    X86_AT(c, 0xeef26u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eef29  lea edx, [eax + edx*2]
    X86_AT(c, 0xeef29u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eef2c  shl edx, 5
    X86_AT(c, 0xeef2cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eef2f  sub edx, eax
    X86_AT(c, 0xeef2fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eef31  cmp dword ptr [edx + 0xcde5e], 0
    X86_AT(c, 0xeef31u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Eu))), 0x0u, 0, 4);
    // 0eef38  jg 0xeef59
    X86_AT(c, 0xeef38u);
    if (x86_cc(c, 15)) { goto L_eef59; }
    X86_TICK(c, 9);
    // 0eef3a  push 0
    X86_AT(c, 0xeef3au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0eef3c  call 0xe1944
    X86_AT(c, 0xeef3cu);
    push32(c, 0xeef41u); f_000e1944(c); X86_RET(c, 0xeef41u);
    X86_TICK(c, 11);
    // 0eef41  push 0x4408
    X86_AT(c, 0xeef41u);
    { uint32_t v = 0x4408u; push32(c, v); }
    // 0eef46  push 7
    X86_AT(c, 0xeef46u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eef48  call 0xe5654
    X86_AT(c, 0xeef48u);
    push32(c, 0xeef4du); f_000e5654(c); X86_RET(c, 0xeef4du);
    X86_TICK(c, 9);
    // 0eef4d  push 7
    X86_AT(c, 0xeef4du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eef4f  call 0xe6c68
    X86_AT(c, 0xeef4fu);
    push32(c, 0xeef54u); f_000e6c68(c); X86_RET(c, 0xeef54u);
    X86_TICK(c, 9);
    // 0eef54  add esp, 0x10
    X86_AT(c, 0xeef54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0eef57  jmp 0xeef79
    X86_AT(c, 0xeef57u);
    goto L_eef79;
L_eef59:
    X86_TICK(c, 21);
    // 0eef59  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xeef59u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0eef5e  lea edx, [eax + eax*4]
    X86_AT(c, 0xeef5eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eef61  lea edx, [eax + edx*2]
    X86_AT(c, 0xeef61u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eef64  shl edx, 5
    X86_AT(c, 0xeef64u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eef67  sub edx, eax
    X86_AT(c, 0xeef67u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eef69  dec dword ptr [edx + 0xcde5e]
    X86_AT(c, 0xeef69u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE5Eu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0eef6f  mov dword ptr [0xd6e60], 0x30
    X86_AT(c, 0xeef6fu);
    wr32((c.sbase[3] + (uint32_t)(0xD6E60u)), 0x30u);
L_eef79:
    X86_TICK(c, 10);
    // 0eef79  ret 
    X86_AT(c, 0xeef79u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeeeccu, "ran off the end of a function");
}
void f_000eef7c(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0eef7c  push 7
    X86_AT(c, 0xeef7cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eef7e  call 0xe693c
    X86_AT(c, 0xeef7eu);
    push32(c, 0xeef83u); f_000e693c(c); X86_RET(c, 0xeef83u);
    X86_TICK(c, 11);
    // 0eef83  push 0x4448
    X86_AT(c, 0xeef83u);
    { uint32_t v = 0x4448u; push32(c, v); }
    // 0eef88  push 7
    X86_AT(c, 0xeef88u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eef8a  call 0xe5654
    X86_AT(c, 0xeef8au);
    push32(c, 0xeef8fu); f_000e5654(c); X86_RET(c, 0xeef8fu);
    X86_TICK(c, 9);
    // 0eef8f  push 7
    X86_AT(c, 0xeef8fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eef91  call 0xe6c68
    X86_AT(c, 0xeef91u);
    push32(c, 0xeef96u); f_000e6c68(c); X86_RET(c, 0xeef96u);
    X86_TICK(c, 27);
    // 0eef96  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xeef96u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0eef9b  lea edx, [eax + eax*4]
    X86_AT(c, 0xeef9bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eef9e  lea edx, [eax + edx*2]
    X86_AT(c, 0xeef9eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eefa1  shl edx, 5
    X86_AT(c, 0xeefa1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eefa4  sub edx, eax
    X86_AT(c, 0xeefa4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eefa6  add esp, 0x10
    X86_AT(c, 0xeefa6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0eefa9  cmp dword ptr [edx + 0xcdf1b], 0
    X86_AT(c, 0xeefa9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF1Bu))), 0x0u, 0, 4);
    // 0eefb0  jg 0xeefd1
    X86_AT(c, 0xeefb0u);
    if (x86_cc(c, 15)) { goto L_eefd1; }
    X86_TICK(c, 9);
    // 0eefb2  push 1
    X86_AT(c, 0xeefb2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eefb4  call 0xe1944
    X86_AT(c, 0xeefb4u);
    push32(c, 0xeefb9u); f_000e1944(c); X86_RET(c, 0xeefb9u);
    X86_TICK(c, 11);
    // 0eefb9  push 0x4478
    X86_AT(c, 0xeefb9u);
    { uint32_t v = 0x4478u; push32(c, v); }
    // 0eefbe  push 7
    X86_AT(c, 0xeefbeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eefc0  call 0xe5654
    X86_AT(c, 0xeefc0u);
    push32(c, 0xeefc5u); f_000e5654(c); X86_RET(c, 0xeefc5u);
    X86_TICK(c, 9);
    // 0eefc5  push 7
    X86_AT(c, 0xeefc5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eefc7  call 0xe6c68
    X86_AT(c, 0xeefc7u);
    push32(c, 0xeefccu); f_000e6c68(c); X86_RET(c, 0xeefccu);
    X86_TICK(c, 9);
    // 0eefcc  add esp, 0x10
    X86_AT(c, 0xeefccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0eefcf  jmp 0xef015
    X86_AT(c, 0xeefcfu);
    goto L_ef015;
L_eefd1:
    X86_TICK(c, 11);
    // 0eefd1  push 0x44d0
    X86_AT(c, 0xeefd1u);
    { uint32_t v = 0x44D0u; push32(c, v); }
    // 0eefd6  push 7
    X86_AT(c, 0xeefd6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eefd8  call 0xe5654
    X86_AT(c, 0xeefd8u);
    push32(c, 0xeefddu); f_000e5654(c); X86_RET(c, 0xeefddu);
    X86_TICK(c, 9);
    // 0eefdd  push 7
    X86_AT(c, 0xeefddu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0eefdf  call 0xe6c68
    X86_AT(c, 0xeefdfu);
    push32(c, 0xeefe4u); f_000e6c68(c); X86_RET(c, 0xeefe4u);
    X86_TICK(c, 9);
    // 0eefe4  push 5
    X86_AT(c, 0xeefe4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0eefe6  call 0xe1944
    X86_AT(c, 0xeefe6u);
    push32(c, 0xeefebu); f_000e1944(c); X86_RET(c, 0xeefebu);
    X86_TICK(c, 9);
    // 0eefeb  push 5
    X86_AT(c, 0xeefebu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0eefed  call 0xe9740
    X86_AT(c, 0xeefedu);
    push32(c, 0xeeff2u); f_000e9740(c); X86_RET(c, 0xeeff2u);
    X86_TICK(c, 23);
    // 0eeff2  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xeeff2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0eeff7  lea edx, [eax + eax*4]
    X86_AT(c, 0xeeff7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eeffa  lea edx, [eax + edx*2]
    X86_AT(c, 0xeeffau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eeffd  shl edx, 5
    X86_AT(c, 0xeeffdu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef000  sub edx, eax
    X86_AT(c, 0xef000u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef002  dec dword ptr [edx + 0xcdf1b]
    X86_AT(c, 0xef002u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF1Bu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ef008  mov dword ptr [0xd1424], 0xa
    X86_AT(c, 0xef008u);
    wr32((c.sbase[3] + (uint32_t)(0xD1424u)), 0xAu);
    // 0ef012  add esp, 0x14
    X86_AT(c, 0xef012u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_ef015:
    X86_TICK(c, 10);
    // 0ef015  ret 
    X86_AT(c, 0xef015u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeef7cu, "ran off the end of a function");
}
void f_000ef048(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0ef048  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef048u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef04d  lea edx, [eax + eax*4]
    X86_AT(c, 0xef04du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef050  lea edx, [eax + edx*2]
    X86_AT(c, 0xef050u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef053  shl edx, 5
    X86_AT(c, 0xef053u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef056  sub edx, eax
    X86_AT(c, 0xef056u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef058  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xef058u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0ef05c  add dword ptr [edx + 0xcde89], eax
    X86_AT(c, 0xef05cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE89u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0ef062  cmp dword ptr [edx + 0xcde89], 0x270f
    X86_AT(c, 0xef062u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE89u))), 0x270Fu, 0, 4);
    // 0ef06c  jle 0xef078
    X86_AT(c, 0xef06cu);
    if (x86_cc(c, 14)) { goto L_ef078; }
    X86_TICK(c, 2);
    // 0ef06e  mov dword ptr [edx + 0xcde89], 0x270f
    X86_AT(c, 0xef06eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE89u)), 0x270Fu);
L_ef078:
    X86_TICK(c, 10);
    // 0ef078  ret 
    X86_AT(c, 0xef078u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef048u, "ran off the end of a function");
}
void f_000ef07c(X86Cpu& c) {
    X86_TICK(c, 38);
    // 0ef07c  push ebp
    X86_AT(c, 0xef07cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ef07d  mov ebp, esp
    X86_AT(c, 0xef07du);
    c.r[5] = c.r[4];
    // 0ef07f  push edi
    X86_AT(c, 0xef07fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef080  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xef080u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ef083  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef083u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef088  lea edx, [eax + eax*4]
    X86_AT(c, 0xef088u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef08b  lea edx, [eax + edx*2]
    X86_AT(c, 0xef08bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef08e  shl edx, 5
    X86_AT(c, 0xef08eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef091  sub edx, eax
    X86_AT(c, 0xef091u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef093  mov eax, edi
    X86_AT(c, 0xef093u);
    c.r[0] = c.r[7];
    // 0ef095  add eax, dword ptr [edx + 0xcde91]
    X86_AT(c, 0xef095u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u))), 0, 4); }
    // 0ef09b  cmp eax, 0x270f
    X86_AT(c, 0xef09bu);
    (void)x86_sub(c, c.r[0], 0x270Fu, 0, 4);
    // 0ef0a0  jle 0xef0d7
    X86_AT(c, 0xef0a0u);
    if (x86_cc(c, 14)) { goto L_ef0d7; }
    X86_TICK(c, 11);
    // 0ef0a2  mov dword ptr [edx + 0xcde91], 0x270f
    X86_AT(c, 0xef0a2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u)), 0x270Fu);
    // 0ef0ac  push 7
    X86_AT(c, 0xef0acu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef0ae  call 0xe693c
    X86_AT(c, 0xef0aeu);
    push32(c, 0xef0b3u); f_000e693c(c); X86_RET(c, 0xef0b3u);
    X86_TICK(c, 9);
    // 0ef0b3  push 3
    X86_AT(c, 0xef0b3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ef0b5  call 0xe1944
    X86_AT(c, 0xef0b5u);
    push32(c, 0xef0bau); f_000e1944(c); X86_RET(c, 0xef0bau);
    X86_TICK(c, 11);
    // 0ef0ba  push 0x4510
    X86_AT(c, 0xef0bau);
    { uint32_t v = 0x4510u; push32(c, v); }
    // 0ef0bf  push 7
    X86_AT(c, 0xef0bfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef0c1  call 0xe5654
    X86_AT(c, 0xef0c1u);
    push32(c, 0xef0c6u); f_000e5654(c); X86_RET(c, 0xef0c6u);
    X86_TICK(c, 9);
    // 0ef0c6  push 7
    X86_AT(c, 0xef0c6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef0c8  call 0xe6c68
    X86_AT(c, 0xef0c8u);
    push32(c, 0xef0cdu); f_000e6c68(c); X86_RET(c, 0xef0cdu);
    X86_TICK(c, 11);
    // 0ef0cd  mov eax, 0xffffffff
    X86_AT(c, 0xef0cdu);
    c.r[0] = 0xFFFFFFFFu;
    // 0ef0d2  add esp, 0x14
    X86_AT(c, 0xef0d2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ef0d5  jmp 0xef0ef
    X86_AT(c, 0xef0d5u);
    goto L_ef0ef;
L_ef0d7:
    X86_TICK(c, 22);
    // 0ef0d7  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef0d7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef0dc  lea edx, [eax + eax*4]
    X86_AT(c, 0xef0dcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef0df  lea edx, [eax + edx*2]
    X86_AT(c, 0xef0dfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef0e2  shl edx, 5
    X86_AT(c, 0xef0e2u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef0e5  sub edx, eax
    X86_AT(c, 0xef0e5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef0e7  add dword ptr [edx + 0xcde91], edi
    X86_AT(c, 0xef0e7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE91u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0ef0ed  sub eax, eax
    X86_AT(c, 0xef0edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_ef0ef:
    X86_TICK(c, 20);
    // 0ef0ef  pop edi
    X86_AT(c, 0xef0efu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ef0f0  leave 
    X86_AT(c, 0xef0f0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ef0f1  ret 
    X86_AT(c, 0xef0f1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef07cu, "ran off the end of a function");
}
void f_000ef0f4(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0ef0f4  push ebp
    X86_AT(c, 0xef0f4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ef0f5  mov ebp, esp
    X86_AT(c, 0xef0f5u);
    c.r[5] = c.r[4];
    // 0ef0f7  push eax
    X86_AT(c, 0xef0f7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ef0f8  push edi
    X86_AT(c, 0xef0f8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef0f9  push 7
    X86_AT(c, 0xef0f9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef0fb  call 0xe693c
    X86_AT(c, 0xef0fbu);
    push32(c, 0xef100u); f_000e693c(c); X86_RET(c, 0xef100u);
    X86_TICK(c, 11);
    // 0ef100  push 0x4544
    X86_AT(c, 0xef100u);
    { uint32_t v = 0x4544u; push32(c, v); }
    // 0ef105  push 7
    X86_AT(c, 0xef105u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef107  call 0xe5654
    X86_AT(c, 0xef107u);
    push32(c, 0xef10cu); f_000e5654(c); X86_RET(c, 0xef10cu);
    X86_TICK(c, 26);
    // 0ef10c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef10cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef111  lea edx, [eax + eax*4]
    X86_AT(c, 0xef111u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef114  lea edx, [eax + edx*2]
    X86_AT(c, 0xef114u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef117  shl edx, 5
    X86_AT(c, 0xef117u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef11a  sub edx, eax
    X86_AT(c, 0xef11au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef11c  mov edi, dword ptr [edx + 0xcdf77]
    X86_AT(c, 0xef11cu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF77u)));
    // 0ef122  add esp, 0xc
    X86_AT(c, 0xef122u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ef125  and edi, edi
    X86_AT(c, 0xef125u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ef127  jne 0xef13a
    X86_AT(c, 0xef127u);
    if (x86_cc(c, 5)) { goto L_ef13a; }
    X86_TICK(c, 9);
    // 0ef129  push 7
    X86_AT(c, 0xef129u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef12b  call 0xe6c68
    X86_AT(c, 0xef12bu);
    push32(c, 0xef130u); f_000e6c68(c); X86_RET(c, 0xef130u);
    X86_TICK(c, 9);
    // 0ef130  push 0x4570
    X86_AT(c, 0xef130u);
    { uint32_t v = 0x4570u; push32(c, v); }
    // 0ef135  jmp 0xef334
    X86_AT(c, 0xef135u);
    goto L_ef334;
L_ef13a:
    X86_TICK(c, 21);
    // 0ef13a  lea eax, [ebp - 1]
    X86_AT(c, 0xef13au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0ef13d  push eax
    X86_AT(c, 0xef13du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ef13e  mov eax, edi
    X86_AT(c, 0xef13eu);
    c.r[0] = c.r[7];
    // 0ef140  add al, 0x41
    X86_AT(c, 0xef140u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0ef142  push eax
    X86_AT(c, 0xef142u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ef143  push 0xa
    X86_AT(c, 0xef143u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ef145  push 0xd1484
    X86_AT(c, 0xef145u);
    { uint32_t v = 0xD1484u; push32(c, v); }
    // 0ef14a  call 0xe53e0
    X86_AT(c, 0xef14au);
    push32(c, 0xef14fu); f_000e53e0(c); X86_RET(c, 0xef14fu);
    X86_TICK(c, 11);
    // 0ef14f  push eax
    X86_AT(c, 0xef14fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ef150  push 7
    X86_AT(c, 0xef150u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef152  call 0xe6cb0
    X86_AT(c, 0xef152u);
    push32(c, 0xef157u); f_000e6cb0(c); X86_RET(c, 0xef157u);
    X86_TICK(c, 9);
    // 0ef157  push 7
    X86_AT(c, 0xef157u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef159  call 0xe6c68
    X86_AT(c, 0xef159u);
    push32(c, 0xef15eu); f_000e6c68(c); X86_RET(c, 0xef15eu);
    X86_TICK(c, 27);
    // 0ef15e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef15eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef163  lea edx, [eax + eax*4]
    X86_AT(c, 0xef163u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef166  lea edx, [eax + edx*2]
    X86_AT(c, 0xef166u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef169  shl edx, 5
    X86_AT(c, 0xef169u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef16c  sub edx, eax
    X86_AT(c, 0xef16cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef16e  add esp, 0x1c
    X86_AT(c, 0xef16eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0ef171  cmp dword ptr [edx + 0xcdeeb], 0
    X86_AT(c, 0xef171u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEBu))), 0x0u, 0, 4);
    // 0ef178  jne 0xef194
    X86_AT(c, 0xef178u);
    if (x86_cc(c, 5)) { goto L_ef194; }
    X86_TICK(c, 12);
    // 0ef17a  cmp dword ptr [edx + 0xcdeef], 0
    X86_AT(c, 0xef17au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEFu))), 0x0u, 0, 4);
    // 0ef181  jne 0xef194
    X86_AT(c, 0xef181u);
    if (x86_cc(c, 5)) { goto L_ef194; }
    X86_TICK(c, 9);
    // 0ef183  push 3
    X86_AT(c, 0xef183u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ef185  call 0xe1944
    X86_AT(c, 0xef185u);
    push32(c, 0xef18au); f_000e1944(c); X86_RET(c, 0xef18au);
    X86_TICK(c, 9);
    // 0ef18a  push 0x45d8
    X86_AT(c, 0xef18au);
    { uint32_t v = 0x45D8u; push32(c, v); }
    // 0ef18f  jmp 0xef334
    X86_AT(c, 0xef18fu);
    goto L_ef334;
L_ef194:
    X86_TICK(c, 25);
    // 0ef194  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef194u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef199  lea edx, [eax + eax*4]
    X86_AT(c, 0xef199u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef19c  lea edx, [eax + edx*2]
    X86_AT(c, 0xef19cu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef19f  shl edx, 5
    X86_AT(c, 0xef19fu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef1a2  sub edx, eax
    X86_AT(c, 0xef1a2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef1a4  cmp dword ptr [edx + edi*4 + 0xcdf27], 0
    X86_AT(c, 0xef1a4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDF27u))), 0x0u, 0, 4);
    // 0ef1ac  jne 0xef1bf
    X86_AT(c, 0xef1acu);
    if (x86_cc(c, 5)) { goto L_ef1bf; }
    X86_TICK(c, 9);
    // 0ef1ae  push 0
    X86_AT(c, 0xef1aeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ef1b0  call 0xe1944
    X86_AT(c, 0xef1b0u);
    push32(c, 0xef1b5u); f_000e1944(c); X86_RET(c, 0xef1b5u);
    X86_TICK(c, 9);
    // 0ef1b5  push 0x4610
    X86_AT(c, 0xef1b5u);
    { uint32_t v = 0x4610u; push32(c, v); }
    // 0ef1ba  jmp 0xef334
    X86_AT(c, 0xef1bau);
    goto L_ef334;
L_ef1bf:
    X86_TICK(c, 9);
    // 0ef1bf  push 5
    X86_AT(c, 0xef1bfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ef1c1  call 0xe1944
    X86_AT(c, 0xef1c1u);
    push32(c, 0xef1c6u); f_000e1944(c); X86_RET(c, 0xef1c6u);
    X86_TICK(c, 9);
    // 0ef1c6  push 5
    X86_AT(c, 0xef1c6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ef1c8  call 0xe9740
    X86_AT(c, 0xef1c8u);
    push32(c, 0xef1cdu); f_000e9740(c); X86_RET(c, 0xef1cdu);
    X86_TICK(c, 32);
    // 0ef1cd  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef1cdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef1d2  lea edx, [eax + eax*4]
    X86_AT(c, 0xef1d2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef1d5  lea edx, [eax + edx*2]
    X86_AT(c, 0xef1d5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef1d8  shl edx, 5
    X86_AT(c, 0xef1d8u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef1db  sub edx, eax
    X86_AT(c, 0xef1dbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef1dd  dec dword ptr [edx + edi*4 + 0xcdf27]
    X86_AT(c, 0xef1ddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + c.r[7] * 4 + 0xCDF27u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ef1e4  add esp, 8
    X86_AT(c, 0xef1e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ef1e7  mov eax, dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xef1e7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)));
    // 0ef1ed  cmp eax, 4
    X86_AT(c, 0xef1edu);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0ef1f0  je 0xef20f
    X86_AT(c, 0xef1f0u);
    if (x86_cc(c, 4)) { goto L_ef20f; }
    X86_TICK(c, 7);
    // 0ef1f2  cmp eax, 5
    X86_AT(c, 0xef1f2u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0ef1f5  je 0xef20f
    X86_AT(c, 0xef1f5u);
    if (x86_cc(c, 4)) { goto L_ef20f; }
    X86_TICK(c, 9);
    // 0ef1f7  push 3
    X86_AT(c, 0xef1f7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ef1f9  call 0xe1944
    X86_AT(c, 0xef1f9u);
    push32(c, 0xef1feu); f_000e1944(c); X86_RET(c, 0xef1feu);
    X86_TICK(c, 9);
    // 0ef1fe  push 2
    X86_AT(c, 0xef1feu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ef200  call 0xe9740
    X86_AT(c, 0xef200u);
    push32(c, 0xef205u); f_000e9740(c); X86_RET(c, 0xef205u);
    X86_TICK(c, 9);
    // 0ef205  push 0x4634
    X86_AT(c, 0xef205u);
    { uint32_t v = 0x4634u; push32(c, v); }
    // 0ef20a  jmp 0xef2a3
    X86_AT(c, 0xef20au);
    goto L_ef2a3;
L_ef20f:
    X86_TICK(c, 9);
    // 0ef20f  push 7
    X86_AT(c, 0xef20fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef211  call 0xe693c
    X86_AT(c, 0xef211u);
    push32(c, 0xef216u); f_000e693c(c); X86_RET(c, 0xef216u);
    X86_TICK(c, 11);
    // 0ef216  add esp, 4
    X86_AT(c, 0xef216u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ef219  lea edx, [edi - 1]
    X86_AT(c, 0xef219u);
    c.r[2] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 0ef21c  cmp edx, 8
    X86_AT(c, 0xef21cu);
    (void)x86_sub(c, c.r[2], 0x8u, 0, 4);
    // 0ef21f  ja 0xef290
    X86_AT(c, 0xef21fu);
    if (x86_cc(c, 7)) { goto L_ef290; }
    X86_TICK(c, 7);
    // 0ef225  jmp dword ptr cs:[edx*4 + 0xef22d]
    X86_AT(c, 0xef225u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xEF22Du)));
      switch (t) {
      case 0xef251u: goto L_ef251;
      case 0xef258u: goto L_ef258;
      case 0xef25fu: goto L_ef25f;
      case 0xef266u: goto L_ef266;
      case 0xef26du: goto L_ef26d;
      case 0xef274u: goto L_ef274;
      case 0xef27bu: goto L_ef27b;
      case 0xef282u: goto L_ef282;
      case 0xef289u: goto L_ef289;
      default: x86_jump(c, t); return; } }
L_ef251:
    X86_TICK(c, 7);
    // 0ef251  call 0xef348
    X86_AT(c, 0xef251u);
    push32(c, 0xef256u); f_000ef348(c); X86_RET(c, 0xef256u);
    X86_TICK(c, 7);
    // 0ef256  jmp 0xef2b9
    X86_AT(c, 0xef256u);
    goto L_ef2b9;
L_ef258:
    X86_TICK(c, 7);
    // 0ef258  call 0xef354
    X86_AT(c, 0xef258u);
    push32(c, 0xef25du); f_000ef354(c); X86_RET(c, 0xef25du);
    X86_TICK(c, 7);
    // 0ef25d  jmp 0xef2b9
    X86_AT(c, 0xef25du);
    goto L_ef2b9;
L_ef25f:
    X86_TICK(c, 7);
    // 0ef25f  call 0xef384
    X86_AT(c, 0xef25fu);
    push32(c, 0xef264u); f_000ef384(c); X86_RET(c, 0xef264u);
    X86_TICK(c, 7);
    // 0ef264  jmp 0xef2b9
    X86_AT(c, 0xef264u);
    goto L_ef2b9;
L_ef266:
    X86_TICK(c, 7);
    // 0ef266  call 0xef3b4
    X86_AT(c, 0xef266u);
    push32(c, 0xef26bu); f_000ef3b4(c); X86_RET(c, 0xef26bu);
    X86_TICK(c, 7);
    // 0ef26b  jmp 0xef2b9
    X86_AT(c, 0xef26bu);
    goto L_ef2b9;
L_ef26d:
    X86_TICK(c, 7);
    // 0ef26d  call 0xefcd4
    X86_AT(c, 0xef26du);
    push32(c, 0xef272u); f_000efcd4(c); X86_RET(c, 0xef272u);
    X86_TICK(c, 7);
    // 0ef272  jmp 0xef2b9
    X86_AT(c, 0xef272u);
    goto L_ef2b9;
L_ef274:
    X86_TICK(c, 7);
    // 0ef274  call 0xef540
    X86_AT(c, 0xef274u);
    push32(c, 0xef279u); f_000ef540(c); X86_RET(c, 0xef279u);
    X86_TICK(c, 7);
    // 0ef279  jmp 0xef2b9
    X86_AT(c, 0xef279u);
    goto L_ef2b9;
L_ef27b:
    X86_TICK(c, 7);
    // 0ef27b  call 0xef594
    X86_AT(c, 0xef27bu);
    push32(c, 0xef280u); f_000ef594(c); X86_RET(c, 0xef280u);
    X86_TICK(c, 7);
    // 0ef280  jmp 0xef2b9
    X86_AT(c, 0xef280u);
    goto L_ef2b9;
L_ef282:
    X86_TICK(c, 7);
    // 0ef282  call 0xef65c
    X86_AT(c, 0xef282u);
    push32(c, 0xef287u); f_000ef65c(c); X86_RET(c, 0xef287u);
    X86_TICK(c, 7);
    // 0ef287  jmp 0xef2b9
    X86_AT(c, 0xef287u);
    goto L_ef2b9;
L_ef289:
    X86_TICK(c, 7);
    // 0ef289  call 0xef4a8
    X86_AT(c, 0xef289u);
    push32(c, 0xef28eu); f_000ef4a8(c); X86_RET(c, 0xef28eu);
    X86_TICK(c, 7);
    // 0ef28e  jmp 0xef2b9
    X86_AT(c, 0xef28eu);
    goto L_ef2b9;
L_ef290:
    X86_TICK(c, 9);
    // 0ef290  push 3
    X86_AT(c, 0xef290u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ef292  call 0xe1944
    X86_AT(c, 0xef292u);
    push32(c, 0xef297u); f_000e1944(c); X86_RET(c, 0xef297u);
    X86_TICK(c, 9);
    // 0ef297  push 3
    X86_AT(c, 0xef297u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ef299  call 0xe9740
    X86_AT(c, 0xef299u);
    push32(c, 0xef29eu); f_000e9740(c); X86_RET(c, 0xef29eu);
    X86_TICK(c, 2);
    // 0ef29e  push 0x4658
    X86_AT(c, 0xef29eu);
    { uint32_t v = 0x4658u; push32(c, v); }
L_ef2a3:
    X86_TICK(c, 9);
    // 0ef2a3  push 7
    X86_AT(c, 0xef2a3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef2a5  call 0xe5654
    X86_AT(c, 0xef2a5u);
    push32(c, 0xef2aau); f_000e5654(c); X86_RET(c, 0xef2aau);
    X86_TICK(c, 9);
    // 0ef2aa  push 7
    X86_AT(c, 0xef2aau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef2ac  call 0xe6c68
    X86_AT(c, 0xef2acu);
    push32(c, 0xef2b1u); f_000e6c68(c); X86_RET(c, 0xef2b1u);
    X86_TICK(c, 9);
    // 0ef2b1  add esp, 0x14
    X86_AT(c, 0xef2b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ef2b4  jmp 0xef345
    X86_AT(c, 0xef2b4u);
    goto L_ef345;
L_ef2b9:
    X86_TICK(c, 9);
    // 0ef2b9  push 0x20
    X86_AT(c, 0xef2b9u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0ef2bb  call 0xe1a7c
    X86_AT(c, 0xef2bbu);
    push32(c, 0xef2c0u); f_000e1a7c(c); X86_RET(c, 0xef2c0u);
    X86_TICK(c, 9);
    // 0ef2c0  add esp, 4
    X86_AT(c, 0xef2c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ef2c3  and eax, eax
    X86_AT(c, 0xef2c3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ef2c5  jne 0xef345
    X86_AT(c, 0xef2c5u);
    if (x86_cc(c, 5)) { goto L_ef345; }
    X86_TICK(c, 9);
    // 0ef2cb  push 9
    X86_AT(c, 0xef2cbu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ef2cd  call 0xe1a7c
    X86_AT(c, 0xef2cdu);
    push32(c, 0xef2d2u); f_000e1a7c(c); X86_RET(c, 0xef2d2u);
    X86_TICK(c, 9);
    // 0ef2d2  add esp, 4
    X86_AT(c, 0xef2d2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ef2d5  cmp eax, 5
    X86_AT(c, 0xef2d5u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0ef2d8  jge 0xef308
    X86_AT(c, 0xef2d8u);
    if (x86_cc(c, 13)) { goto L_ef308; }
    X86_TICK(c, 24);
    // 0ef2da  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef2dau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef2df  lea edx, [eax + eax*4]
    X86_AT(c, 0xef2dfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef2e2  lea edx, [eax + edx*2]
    X86_AT(c, 0xef2e2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef2e5  shl edx, 5
    X86_AT(c, 0xef2e5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef2e8  sub edx, eax
    X86_AT(c, 0xef2e8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef2ea  mov eax, dword ptr [edx + 0xcdeef]
    X86_AT(c, 0xef2eau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEFu)));
    // 0ef2f0  and eax, eax
    X86_AT(c, 0xef2f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ef2f2  jle 0xef345
    X86_AT(c, 0xef2f2u);
    if (x86_cc(c, 14)) { goto L_ef345; }
    X86_TICK(c, 15);
    // 0ef2f4  dec dword ptr [edx + 0xcdeef]
    X86_AT(c, 0xef2f4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEFu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ef2fa  push 0
    X86_AT(c, 0xef2fau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ef2fc  call 0xe1944
    X86_AT(c, 0xef2fcu);
    push32(c, 0xef301u); f_000e1944(c); X86_RET(c, 0xef301u);
    X86_TICK(c, 9);
    // 0ef301  push 0x4674
    X86_AT(c, 0xef301u);
    { uint32_t v = 0x4674u; push32(c, v); }
    // 0ef306  jmp 0xef334
    X86_AT(c, 0xef306u);
    goto L_ef334;
L_ef308:
    X86_TICK(c, 24);
    // 0ef308  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef308u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef30d  lea edx, [eax + eax*4]
    X86_AT(c, 0xef30du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef310  lea edx, [eax + edx*2]
    X86_AT(c, 0xef310u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef313  shl edx, 5
    X86_AT(c, 0xef313u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef316  sub edx, eax
    X86_AT(c, 0xef316u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef318  mov eax, dword ptr [edx + 0xcdeeb]
    X86_AT(c, 0xef318u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEBu)));
    // 0ef31e  and eax, eax
    X86_AT(c, 0xef31eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ef320  jle 0xef345
    X86_AT(c, 0xef320u);
    if (x86_cc(c, 14)) { goto L_ef345; }
    X86_TICK(c, 15);
    // 0ef322  dec dword ptr [edx + 0xcdeeb]
    X86_AT(c, 0xef322u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEEBu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ef328  push 0
    X86_AT(c, 0xef328u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ef32a  call 0xe1944
    X86_AT(c, 0xef32au);
    push32(c, 0xef32fu); f_000e1944(c); X86_RET(c, 0xef32fu);
    X86_TICK(c, 2);
    // 0ef32f  push 0x46a8
    X86_AT(c, 0xef32fu);
    { uint32_t v = 0x46A8u; push32(c, v); }
L_ef334:
    X86_TICK(c, 9);
    // 0ef334  push 7
    X86_AT(c, 0xef334u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef336  call 0xe5654
    X86_AT(c, 0xef336u);
    push32(c, 0xef33bu); f_000e5654(c); X86_RET(c, 0xef33bu);
    X86_TICK(c, 9);
    // 0ef33b  push 7
    X86_AT(c, 0xef33bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef33d  call 0xe6c68
    X86_AT(c, 0xef33du);
    push32(c, 0xef342u); f_000e6c68(c); X86_RET(c, 0xef342u);
    X86_TICK(c, 2);
    // 0ef342  add esp, 0x10
    X86_AT(c, 0xef342u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_ef345:
    X86_TICK(c, 20);
    // 0ef345  pop edi
    X86_AT(c, 0xef345u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ef346  leave 
    X86_AT(c, 0xef346u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ef347  ret 
    X86_AT(c, 0xef347u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef0f4u, "ran off the end of a function");
}
void f_000ef334(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ef334  push 7
    X86_AT(c, 0xef334u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef336  call 0xe5654
    X86_AT(c, 0xef336u);
    push32(c, 0xef33bu); f_000e5654(c); X86_RET(c, 0xef33bu);
    X86_TICK(c, 9);
    // 0ef33b  push 7
    X86_AT(c, 0xef33bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef33d  call 0xe6c68
    X86_AT(c, 0xef33du);
    push32(c, 0xef342u); f_000e6c68(c); X86_RET(c, 0xef342u);
    X86_TICK(c, 22);
    // 0ef342  add esp, 0x10
    X86_AT(c, 0xef342u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ef345  pop edi
    X86_AT(c, 0xef345u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ef346  leave 
    X86_AT(c, 0xef346u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ef347  ret 
    X86_AT(c, 0xef347u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef334u, "ran off the end of a function");
}
void f_000ef348(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0ef348  mov dword ptr [0xd6e60], 0x30
    X86_AT(c, 0xef348u);
    wr32((c.sbase[3] + (uint32_t)(0xD6E60u)), 0x30u);
    // 0ef352  ret 
    X86_AT(c, 0xef352u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef348u, "ran off the end of a function");
}
void f_000ef354(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ef354  push 7
    X86_AT(c, 0xef354u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef356  call 0xe693c
    X86_AT(c, 0xef356u);
    push32(c, 0xef35bu); f_000e693c(c); X86_RET(c, 0xef35bu);
    X86_TICK(c, 27);
    // 0ef35b  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef35bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef360  lea edx, [eax + eax*4]
    X86_AT(c, 0xef360u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef363  lea edx, [eax + edx*2]
    X86_AT(c, 0xef363u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef366  shl edx, 5
    X86_AT(c, 0xef366u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef369  sub edx, eax
    X86_AT(c, 0xef369u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef36b  add esp, 4
    X86_AT(c, 0xef36bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ef36e  cmp dword ptr [edx + 0xcdf57], 4
    X86_AT(c, 0xef36eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x4u, 0, 4);
    // 0ef375  jne 0xef37e
    X86_AT(c, 0xef375u);
    if (x86_cc(c, 5)) { goto L_ef37e; }
    X86_TICK(c, 7);
    // 0ef377  call 0xef7c4
    X86_AT(c, 0xef377u);
    push32(c, 0xef37cu); f_000ef7c4(c); X86_RET(c, 0xef37cu);
    X86_TICK(c, 7);
    // 0ef37c  jmp 0xef383
    X86_AT(c, 0xef37cu);
    goto L_ef383;
L_ef37e:
    X86_TICK(c, 7);
    // 0ef37e  call 0xef780
    X86_AT(c, 0xef37eu);
    push32(c, 0xef383u); f_000ef780(c); X86_RET(c, 0xef383u);
L_ef383:
    X86_TICK(c, 10);
    // 0ef383  ret 
    X86_AT(c, 0xef383u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef354u, "ran off the end of a function");
}
void f_000ef384(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ef384  push 7
    X86_AT(c, 0xef384u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef386  call 0xe693c
    X86_AT(c, 0xef386u);
    push32(c, 0xef38bu); f_000e693c(c); X86_RET(c, 0xef38bu);
    X86_TICK(c, 27);
    // 0ef38b  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef38bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef390  lea edx, [eax + eax*4]
    X86_AT(c, 0xef390u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef393  lea edx, [eax + edx*2]
    X86_AT(c, 0xef393u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef396  shl edx, 5
    X86_AT(c, 0xef396u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef399  sub edx, eax
    X86_AT(c, 0xef399u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef39b  add esp, 4
    X86_AT(c, 0xef39bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ef39e  cmp dword ptr [edx + 0xcdf57], 4
    X86_AT(c, 0xef39eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x4u, 0, 4);
    // 0ef3a5  jne 0xef3ae
    X86_AT(c, 0xef3a5u);
    if (x86_cc(c, 5)) { goto L_ef3ae; }
    X86_TICK(c, 7);
    // 0ef3a7  call 0xef780
    X86_AT(c, 0xef3a7u);
    push32(c, 0xef3acu); f_000ef780(c); X86_RET(c, 0xef3acu);
    X86_TICK(c, 7);
    // 0ef3ac  jmp 0xef3b3
    X86_AT(c, 0xef3acu);
    goto L_ef3b3;
L_ef3ae:
    X86_TICK(c, 7);
    // 0ef3ae  call 0xef7c4
    X86_AT(c, 0xef3aeu);
    push32(c, 0xef3b3u); f_000ef7c4(c); X86_RET(c, 0xef3b3u);
L_ef3b3:
    X86_TICK(c, 10);
    // 0ef3b3  ret 
    X86_AT(c, 0xef3b3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef384u, "ran off the end of a function");
}
void f_000ef3b4(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0ef3b4  push ebp
    X86_AT(c, 0xef3b4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ef3b5  mov ebp, esp
    X86_AT(c, 0xef3b5u);
    c.r[5] = c.r[4];
    // 0ef3b7  push eax
    X86_AT(c, 0xef3b7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ef3b8  push ebx
    X86_AT(c, 0xef3b8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ef3b9  push esi
    X86_AT(c, 0xef3b9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ef3ba  push edi
    X86_AT(c, 0xef3bau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef3bb  movsx edx, word ptr [0xd6e68]
    X86_AT(c, 0xef3bbu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xD6E68u)));
    // 0ef3c2  dec edx
    X86_AT(c, 0xef3c2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0ef3c3  cmp edx, 3
    X86_AT(c, 0xef3c3u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0ef3c6  ja 0xef409
    X86_AT(c, 0xef3c6u);
    if (x86_cc(c, 7)) { goto L_ef409; }
    X86_TICK(c, 7);
    // 0ef3c8  jmp dword ptr cs:[edx*4 + 0xef3d0]
    X86_AT(c, 0xef3c8u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xEF3D0u)));
      switch (t) {
      case 0xef3e0u: goto L_ef3e0;
      case 0xef3ebu: goto L_ef3eb;
      case 0xef3f6u: goto L_ef3f6;
      case 0xef3fdu: goto L_ef3fd;
      default: x86_jump(c, t); return; } }
L_ef3e0:
    X86_TICK(c, 11);
    // 0ef3e0  sub edi, edi
    X86_AT(c, 0xef3e0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0ef3e2  mov dword ptr [ebp - 4], 0xfffffffe
    X86_AT(c, 0xef3e2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFEu);
    // 0ef3e9  jmp 0xef409
    X86_AT(c, 0xef3e9u);
    goto L_ef409;
L_ef3eb:
    X86_TICK(c, 11);
    // 0ef3eb  sub edi, edi
    X86_AT(c, 0xef3ebu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0ef3ed  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xef3edu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0ef3f4  jmp 0xef409
    X86_AT(c, 0xef3f4u);
    goto L_ef409;
L_ef3f6:
    X86_TICK(c, 9);
    // 0ef3f6  mov edi, 0xfffffffe
    X86_AT(c, 0xef3f6u);
    c.r[7] = 0xFFFFFFFEu;
    // 0ef3fb  jmp 0xef402
    X86_AT(c, 0xef3fbu);
    goto L_ef402;
L_ef3fd:
    X86_TICK(c, 2);
    // 0ef3fd  mov edi, 2
    X86_AT(c, 0xef3fdu);
    c.r[7] = 0x2u;
L_ef402:
    X86_TICK(c, 2);
    // 0ef402  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xef402u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_ef409:
    X86_TICK(c, 38);
    // 0ef409  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef409u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef40e  lea edx, [eax + eax*4]
    X86_AT(c, 0xef40eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef411  lea edx, [eax + edx*2]
    X86_AT(c, 0xef411u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef414  shl edx, 5
    X86_AT(c, 0xef414u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef417  sub edx, eax
    X86_AT(c, 0xef417u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef419  mov esi, edi
    X86_AT(c, 0xef419u);
    c.r[6] = c.r[7];
    // 0ef41b  add esi, dword ptr [edx + 0xcdf63]
    X86_AT(c, 0xef41bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u))), 0, 4); }
    // 0ef421  mov ebx, dword ptr [edx + 0xcdf67]
    X86_AT(c, 0xef421u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u)));
    // 0ef427  add ebx, dword ptr [ebp - 4]
    X86_AT(c, 0xef427u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0ef42a  cmp esi, 0xf
    X86_AT(c, 0xef42au);
    (void)x86_sub(c, c.r[6], 0xFu, 0, 4);
    // 0ef42d  jle 0xef432
    X86_AT(c, 0xef42du);
    if (x86_cc(c, 14)) { goto L_ef432; }
    X86_TICK(c, 2);
    // 0ef42f  sub esi, 0x10
    X86_AT(c, 0xef42fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0x10u, 0, 4); }
L_ef432:
    X86_TICK(c, 7);
    // 0ef432  and esi, esi
    X86_AT(c, 0xef432u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ef434  jge 0xef439
    X86_AT(c, 0xef434u);
    if (x86_cc(c, 13)) { goto L_ef439; }
    X86_TICK(c, 2);
    // 0ef436  add esi, 0x10
    X86_AT(c, 0xef436u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x10u, 0, 4); }
L_ef439:
    X86_TICK(c, 7);
    // 0ef439  cmp ebx, 0xf
    X86_AT(c, 0xef439u);
    (void)x86_sub(c, c.r[3], 0xFu, 0, 4);
    // 0ef43c  jle 0xef441
    X86_AT(c, 0xef43cu);
    if (x86_cc(c, 14)) { goto L_ef441; }
    X86_TICK(c, 2);
    // 0ef43e  sub ebx, 0x10
    X86_AT(c, 0xef43eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0x10u, 0, 4); }
L_ef441:
    X86_TICK(c, 7);
    // 0ef441  and esi, esi
    X86_AT(c, 0xef441u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ef443  jge 0xef448
    X86_AT(c, 0xef443u);
    if (x86_cc(c, 13)) { goto L_ef448; }
    X86_TICK(c, 2);
    // 0ef445  add ebx, 0x10
    X86_AT(c, 0xef445u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x10u, 0, 4); }
L_ef448:
    X86_TICK(c, 16);
    // 0ef448  push ebx
    X86_AT(c, 0xef448u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ef449  push esi
    X86_AT(c, 0xef449u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ef44a  push dword ptr [0xd4a68]
    X86_AT(c, 0xef44au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD4A68u))); push32(c, v); }
    // 0ef450  call 0xfb21c
    X86_AT(c, 0xef450u);
    push32(c, 0xef455u); f_000fb21c(c); X86_RET(c, 0xef455u);
    X86_TICK(c, 9);
    // 0ef455  add esp, 0xc
    X86_AT(c, 0xef455u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ef458  and eax, eax
    X86_AT(c, 0xef458u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ef45a  je 0xef47b
    X86_AT(c, 0xef45au);
    if (x86_cc(c, 4)) { goto L_ef47b; }
    X86_TICK(c, 9);
    // 0ef45c  push 3
    X86_AT(c, 0xef45cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ef45e  call 0xe1944
    X86_AT(c, 0xef45eu);
    push32(c, 0xef463u); f_000e1944(c); X86_RET(c, 0xef463u);
    X86_TICK(c, 11);
    // 0ef463  push 0x46dc
    X86_AT(c, 0xef463u);
    { uint32_t v = 0x46DCu; push32(c, v); }
    // 0ef468  push 7
    X86_AT(c, 0xef468u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef46a  call 0xe5654
    X86_AT(c, 0xef46au);
    push32(c, 0xef46fu); f_000e5654(c); X86_RET(c, 0xef46fu);
    X86_TICK(c, 9);
    // 0ef46f  push 7
    X86_AT(c, 0xef46fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef471  call 0xe6c68
    X86_AT(c, 0xef471u);
    push32(c, 0xef476u); f_000e6c68(c); X86_RET(c, 0xef476u);
    X86_TICK(c, 9);
    // 0ef476  add esp, 0x10
    X86_AT(c, 0xef476u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ef479  jmp 0xef4a3
    X86_AT(c, 0xef479u);
    goto L_ef4a3;
L_ef47b:
    X86_TICK(c, 21);
    // 0ef47b  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef47bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef480  lea edx, [eax + eax*4]
    X86_AT(c, 0xef480u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef483  lea edx, [eax + edx*2]
    X86_AT(c, 0xef483u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef486  shl edx, 5
    X86_AT(c, 0xef486u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef489  sub edx, eax
    X86_AT(c, 0xef489u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef48b  mov dword ptr [edx + 0xcdf63], esi
    X86_AT(c, 0xef48bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u)), c.r[6]);
    // 0ef491  mov dword ptr [0xd4a4c], esi
    X86_AT(c, 0xef491u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A4Cu)), c.r[6]);
    // 0ef497  mov dword ptr [edx + 0xcdf67], ebx
    X86_AT(c, 0xef497u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u)), c.r[3]);
    // 0ef49d  mov dword ptr [0xd4a50], ebx
    X86_AT(c, 0xef49du);
    wr32((c.sbase[3] + (uint32_t)(0xD4A50u)), c.r[3]);
L_ef4a3:
    X86_TICK(c, 28);
    // 0ef4a3  pop edi
    X86_AT(c, 0xef4a3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ef4a4  pop esi
    X86_AT(c, 0xef4a4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ef4a5  pop ebx
    X86_AT(c, 0xef4a5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ef4a6  leave 
    X86_AT(c, 0xef4a6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ef4a7  ret 
    X86_AT(c, 0xef4a7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef3b4u, "ran off the end of a function");
}
void f_000ef4a8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0ef4a8  push edi
    X86_AT(c, 0xef4a8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef4a9  push 7
    X86_AT(c, 0xef4a9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef4ab  call 0xe693c
    X86_AT(c, 0xef4abu);
    push32(c, 0xef4b0u); f_000e693c(c); X86_RET(c, 0xef4b0u);
    X86_TICK(c, 9);
    // 0ef4b0  push 1
    X86_AT(c, 0xef4b0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ef4b2  call 0xfcc24
    X86_AT(c, 0xef4b2u);
    push32(c, 0xef4b7u); f_000fcc24(c); X86_RET(c, 0xef4b7u);
    X86_TICK(c, 12);
    // 0ef4b7  xchg edi, eax
    X86_AT(c, 0xef4b7u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ef4b8  add esp, 8
    X86_AT(c, 0xef4b8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ef4bb  cmp edi, 1
    X86_AT(c, 0xef4bbu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0ef4be  jge 0xef4df
    X86_AT(c, 0xef4beu);
    if (x86_cc(c, 13)) { goto L_ef4df; }
    X86_TICK(c, 9);
    // 0ef4c0  push 3
    X86_AT(c, 0xef4c0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ef4c2  call 0xe1944
    X86_AT(c, 0xef4c2u);
    push32(c, 0xef4c7u); f_000e1944(c); X86_RET(c, 0xef4c7u);
    X86_TICK(c, 11);
    // 0ef4c7  push 0x46f8
    X86_AT(c, 0xef4c7u);
    { uint32_t v = 0x46F8u; push32(c, v); }
    // 0ef4cc  push 7
    X86_AT(c, 0xef4ccu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef4ce  call 0xe5654
    X86_AT(c, 0xef4ceu);
    push32(c, 0xef4d3u); f_000e5654(c); X86_RET(c, 0xef4d3u);
    X86_TICK(c, 9);
    // 0ef4d3  push 7
    X86_AT(c, 0xef4d3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef4d5  call 0xe6c68
    X86_AT(c, 0xef4d5u);
    push32(c, 0xef4dau); f_000e6c68(c); X86_RET(c, 0xef4dau);
    X86_TICK(c, 9);
    // 0ef4da  add esp, 0x10
    X86_AT(c, 0xef4dau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ef4dd  jmp 0xef53b
    X86_AT(c, 0xef4ddu);
    goto L_ef53b;
L_ef4df:
    X86_TICK(c, 11);
    // 0ef4df  push 0x4718
    X86_AT(c, 0xef4dfu);
    { uint32_t v = 0x4718u; push32(c, v); }
    // 0ef4e4  push 7
    X86_AT(c, 0xef4e4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef4e6  call 0xe5654
    X86_AT(c, 0xef4e6u);
    push32(c, 0xef4ebu); f_000e5654(c); X86_RET(c, 0xef4ebu);
    X86_TICK(c, 9);
    // 0ef4eb  push 7
    X86_AT(c, 0xef4ebu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef4ed  call 0xe6c68
    X86_AT(c, 0xef4edu);
    push32(c, 0xef4f2u); f_000e6c68(c); X86_RET(c, 0xef4f2u);
    X86_TICK(c, 26);
    // 0ef4f2  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef4f2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef4f7  lea edx, [eax + eax*4]
    X86_AT(c, 0xef4f7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef4fa  lea edx, [eax + edx*2]
    X86_AT(c, 0xef4fau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef4fd  shl edx, 5
    X86_AT(c, 0xef4fdu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef500  sub edx, eax
    X86_AT(c, 0xef500u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef502  add esp, 0xc
    X86_AT(c, 0xef502u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ef505  mov eax, dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xef505u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)));
    // 0ef50b  cmp eax, 4
    X86_AT(c, 0xef50bu);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0ef50e  je 0xef515
    X86_AT(c, 0xef50eu);
    if (x86_cc(c, 4)) { goto L_ef515; }
    X86_TICK(c, 7);
    // 0ef510  cmp eax, 5
    X86_AT(c, 0xef510u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0ef513  jne 0xef53b
    X86_AT(c, 0xef513u);
    if (x86_cc(c, 5)) { goto L_ef53b; }
L_ef515:
    X86_TICK(c, 7);
    // 0ef515  call 0xfcf34
    X86_AT(c, 0xef515u);
    push32(c, 0xef51au); f_000fcf34(c); X86_RET(c, 0xef51au);
    X86_TICK(c, 15);
    // 0ef51a  add eax, dword ptr [0xd4a50]
    X86_AT(c, 0xef51au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xD4A50u))), 0, 4); }
    // 0ef520  push eax
    X86_AT(c, 0xef520u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ef521  call 0xfcf0c
    X86_AT(c, 0xef521u);
    push32(c, 0xef526u); f_000fcf0c(c); X86_RET(c, 0xef526u);
    X86_TICK(c, 21);
    // 0ef526  add eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xef526u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu))), 0, 4); }
    // 0ef52c  push eax
    X86_AT(c, 0xef52cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ef52d  push 0xffffffff
    X86_AT(c, 0xef52du);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0ef52f  push 0x64
    X86_AT(c, 0xef52fu);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0ef531  push 0xa
    X86_AT(c, 0xef531u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ef533  call 0xfc8dc
    X86_AT(c, 0xef533u);
    push32(c, 0xef538u); f_000fc8dc(c); X86_RET(c, 0xef538u);
    X86_TICK(c, 2);
    // 0ef538  add esp, 0x14
    X86_AT(c, 0xef538u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_ef53b:
    X86_TICK(c, 14);
    // 0ef53b  pop edi
    X86_AT(c, 0xef53bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ef53c  ret 
    X86_AT(c, 0xef53cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef4a8u, "ran off the end of a function");
}
void f_000ef540(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ef540  push 9
    X86_AT(c, 0xef540u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0ef542  call 0xe1a7c
    X86_AT(c, 0xef542u);
    push32(c, 0xef547u); f_000e1a7c(c); X86_RET(c, 0xef547u);
    X86_TICK(c, 9);
    // 0ef547  add esp, 4
    X86_AT(c, 0xef547u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ef54a  cmp eax, 5
    X86_AT(c, 0xef54au);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0ef54d  jge 0xef56e
    X86_AT(c, 0xef54du);
    if (x86_cc(c, 13)) { goto L_ef56e; }
    X86_TICK(c, 9);
    // 0ef54f  push 3
    X86_AT(c, 0xef54fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ef551  call 0xe1944
    X86_AT(c, 0xef551u);
    push32(c, 0xef556u); f_000e1944(c); X86_RET(c, 0xef556u);
    X86_TICK(c, 11);
    // 0ef556  push 0x4748
    X86_AT(c, 0xef556u);
    { uint32_t v = 0x4748u; push32(c, v); }
    // 0ef55b  push 7
    X86_AT(c, 0xef55bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef55d  call 0xe5654
    X86_AT(c, 0xef55du);
    push32(c, 0xef562u); f_000e5654(c); X86_RET(c, 0xef562u);
    X86_TICK(c, 9);
    // 0ef562  push 7
    X86_AT(c, 0xef562u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef564  call 0xe6c68
    X86_AT(c, 0xef564u);
    push32(c, 0xef569u); f_000e6c68(c); X86_RET(c, 0xef569u);
    X86_TICK(c, 9);
    // 0ef569  add esp, 0x10
    X86_AT(c, 0xef569u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ef56c  jmp 0xef593
    X86_AT(c, 0xef56cu);
    goto L_ef593;
L_ef56e:
    X86_TICK(c, 24);
    // 0ef56e  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef56eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef573  lea edx, [eax + eax*4]
    X86_AT(c, 0xef573u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef576  lea edx, [eax + edx*2]
    X86_AT(c, 0xef576u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef579  shl edx, 5
    X86_AT(c, 0xef579u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef57c  sub edx, eax
    X86_AT(c, 0xef57cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef57e  mov eax, dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xef57eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)));
    // 0ef584  cmp eax, 4
    X86_AT(c, 0xef584u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0ef587  je 0xef58e
    X86_AT(c, 0xef587u);
    if (x86_cc(c, 4)) { goto L_ef58e; }
    X86_TICK(c, 7);
    // 0ef589  cmp eax, 5
    X86_AT(c, 0xef589u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0ef58c  jne 0xef593
    X86_AT(c, 0xef58cu);
    if (x86_cc(c, 5)) { goto L_ef593; }
L_ef58e:
    X86_TICK(c, 7);
    // 0ef58e  call 0xef4a8
    X86_AT(c, 0xef58eu);
    push32(c, 0xef593u); f_000ef4a8(c); X86_RET(c, 0xef593u);
L_ef593:
    X86_TICK(c, 10);
    // 0ef593  ret 
    X86_AT(c, 0xef593u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef540u, "ran off the end of a function");
}
void f_000ef594(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0ef594  push edi
    X86_AT(c, 0xef594u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef595  push 7
    X86_AT(c, 0xef595u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef597  call 0xe693c
    X86_AT(c, 0xef597u);
    push32(c, 0xef59cu); f_000e693c(c); X86_RET(c, 0xef59cu);
    X86_TICK(c, 9);
    // 0ef59c  push 1
    X86_AT(c, 0xef59cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ef59e  call 0xfcc24
    X86_AT(c, 0xef59eu);
    push32(c, 0xef5a3u); f_000fcc24(c); X86_RET(c, 0xef5a3u);
    X86_TICK(c, 12);
    // 0ef5a3  xchg edi, eax
    X86_AT(c, 0xef5a3u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ef5a4  add esp, 8
    X86_AT(c, 0xef5a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ef5a7  cmp edi, 1
    X86_AT(c, 0xef5a7u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0ef5aa  jge 0xef5bd
    X86_AT(c, 0xef5aau);
    if (x86_cc(c, 13)) { goto L_ef5bd; }
    X86_TICK(c, 9);
    // 0ef5ac  push 3
    X86_AT(c, 0xef5acu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ef5ae  call 0xe1944
    X86_AT(c, 0xef5aeu);
    push32(c, 0xef5b3u); f_000e1944(c); X86_RET(c, 0xef5b3u);
    X86_TICK(c, 9);
    // 0ef5b3  push 0x4764
    X86_AT(c, 0xef5b3u);
    { uint32_t v = 0x4764u; push32(c, v); }
    // 0ef5b8  jmp 0xef647
    X86_AT(c, 0xef5b8u);
    goto L_ef647;
L_ef5bd:
    X86_TICK(c, 11);
    // 0ef5bd  push 0x4788
    X86_AT(c, 0xef5bdu);
    { uint32_t v = 0x4788u; push32(c, v); }
    // 0ef5c2  push 7
    X86_AT(c, 0xef5c2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef5c4  call 0xe5654
    X86_AT(c, 0xef5c4u);
    push32(c, 0xef5c9u); f_000e5654(c); X86_RET(c, 0xef5c9u);
    X86_TICK(c, 9);
    // 0ef5c9  push 7
    X86_AT(c, 0xef5c9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef5cb  call 0xe6c68
    X86_AT(c, 0xef5cbu);
    push32(c, 0xef5d0u); f_000e6c68(c); X86_RET(c, 0xef5d0u);
    X86_TICK(c, 26);
    // 0ef5d0  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef5d0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef5d5  lea edx, [eax + eax*4]
    X86_AT(c, 0xef5d5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef5d8  lea edx, [eax + edx*2]
    X86_AT(c, 0xef5d8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef5db  shl edx, 5
    X86_AT(c, 0xef5dbu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef5de  sub edx, eax
    X86_AT(c, 0xef5deu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef5e0  add esp, 0xc
    X86_AT(c, 0xef5e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ef5e3  mov eax, dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xef5e3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)));
    // 0ef5e9  cmp eax, 4
    X86_AT(c, 0xef5e9u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0ef5ec  je 0xef5f3
    X86_AT(c, 0xef5ecu);
    if (x86_cc(c, 4)) { goto L_ef5f3; }
    X86_TICK(c, 7);
    // 0ef5ee  cmp eax, 5
    X86_AT(c, 0xef5eeu);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0ef5f1  jne 0xef63b
    X86_AT(c, 0xef5f1u);
    if (x86_cc(c, 5)) { goto L_ef63b; }
L_ef5f3:
    X86_TICK(c, 7);
    // 0ef5f3  call 0xfcf34
    X86_AT(c, 0xef5f3u);
    push32(c, 0xef5f8u); f_000fcf34(c); X86_RET(c, 0xef5f8u);
    X86_TICK(c, 15);
    // 0ef5f8  add eax, dword ptr [0xd4a50]
    X86_AT(c, 0xef5f8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xD4A50u))), 0, 4); }
    // 0ef5fe  push eax
    X86_AT(c, 0xef5feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ef5ff  call 0xfcf0c
    X86_AT(c, 0xef5ffu);
    push32(c, 0xef604u); f_000fcf0c(c); X86_RET(c, 0xef604u);
    X86_TICK(c, 84);
    // 0ef604  add eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xef604u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu))), 0, 4); }
    // 0ef60a  push eax
    X86_AT(c, 0xef60au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ef60b  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef60bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef610  lea edx, [eax + eax*4]
    X86_AT(c, 0xef610u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef613  lea edx, [eax + edx*2]
    X86_AT(c, 0xef613u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef616  shl edx, 5
    X86_AT(c, 0xef616u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef619  sub edx, eax
    X86_AT(c, 0xef619u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef61b  mov eax, dword ptr [edx + 0xcde89]
    X86_AT(c, 0xef61bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE89u)));
    // 0ef621  cdq 
    X86_AT(c, 0xef621u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0ef622  mov ecx, 0x32
    X86_AT(c, 0xef622u);
    c.r[1] = 0x32u;
    // 0ef627  idiv ecx
    X86_AT(c, 0xef627u);
    x86_idiv(c, c.r[1], 4, 0xef627u);
    // 0ef629  add eax, 0x1e
    X86_AT(c, 0xef629u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1Eu, 0, 4); }
    // 0ef62c  push eax
    X86_AT(c, 0xef62cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ef62d  push 0x64
    X86_AT(c, 0xef62du);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0ef62f  push 0xa
    X86_AT(c, 0xef62fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ef631  call 0xfc8dc
    X86_AT(c, 0xef631u);
    push32(c, 0xef636u); f_000fc8dc(c); X86_RET(c, 0xef636u);
    X86_TICK(c, 9);
    // 0ef636  add esp, 0x14
    X86_AT(c, 0xef636u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ef639  jmp 0xef658
    X86_AT(c, 0xef639u);
    goto L_ef658;
L_ef63b:
    X86_TICK(c, 9);
    // 0ef63b  push 3
    X86_AT(c, 0xef63bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ef63d  call 0xe1944
    X86_AT(c, 0xef63du);
    push32(c, 0xef642u); f_000e1944(c); X86_RET(c, 0xef642u);
    X86_TICK(c, 2);
    // 0ef642  push 0x47b0
    X86_AT(c, 0xef642u);
    { uint32_t v = 0x47B0u; push32(c, v); }
L_ef647:
    X86_TICK(c, 9);
    // 0ef647  push 7
    X86_AT(c, 0xef647u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef649  call 0xe5654
    X86_AT(c, 0xef649u);
    push32(c, 0xef64eu); f_000e5654(c); X86_RET(c, 0xef64eu);
    X86_TICK(c, 9);
    // 0ef64e  push 7
    X86_AT(c, 0xef64eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef650  call 0xe6c68
    X86_AT(c, 0xef650u);
    push32(c, 0xef655u); f_000e6c68(c); X86_RET(c, 0xef655u);
    X86_TICK(c, 2);
    // 0ef655  add esp, 0x10
    X86_AT(c, 0xef655u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_ef658:
    X86_TICK(c, 14);
    // 0ef658  pop edi
    X86_AT(c, 0xef658u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ef659  ret 
    X86_AT(c, 0xef659u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef594u, "ran off the end of a function");
}
void f_000ef65c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0ef65c  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef65cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef661  lea edx, [eax + eax*4]
    X86_AT(c, 0xef661u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef664  lea edx, [eax + edx*2]
    X86_AT(c, 0xef664u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef667  shl edx, 5
    X86_AT(c, 0xef667u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef66a  sub edx, eax
    X86_AT(c, 0xef66au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef66c  mov eax, dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xef66cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)));
    // 0ef672  cmp eax, 4
    X86_AT(c, 0xef672u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0ef675  je 0xef67c
    X86_AT(c, 0xef675u);
    if (x86_cc(c, 4)) { goto L_ef67c; }
    X86_TICK(c, 7);
    // 0ef677  cmp eax, 5
    X86_AT(c, 0xef677u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0ef67a  jne 0xef683
    X86_AT(c, 0xef67au);
    if (x86_cc(c, 5)) { goto L_ef683; }
L_ef67c:
    X86_TICK(c, 7);
    // 0ef67c  call 0xef6b8
    X86_AT(c, 0xef67cu);
    push32(c, 0xef681u); f_000ef6b8(c); X86_RET(c, 0xef681u);
    X86_TICK(c, 7);
    // 0ef681  jmp 0xef6a0
    X86_AT(c, 0xef681u);
    goto L_ef6a0;
L_ef683:
    X86_TICK(c, 9);
    // 0ef683  push 3
    X86_AT(c, 0xef683u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0ef685  call 0xe1944
    X86_AT(c, 0xef685u);
    push32(c, 0xef68au); f_000e1944(c); X86_RET(c, 0xef68au);
    X86_TICK(c, 11);
    // 0ef68a  push 0x47cc
    X86_AT(c, 0xef68au);
    { uint32_t v = 0x47CCu; push32(c, v); }
    // 0ef68f  push 7
    X86_AT(c, 0xef68fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef691  call 0xe5654
    X86_AT(c, 0xef691u);
    push32(c, 0xef696u); f_000e5654(c); X86_RET(c, 0xef696u);
    X86_TICK(c, 9);
    // 0ef696  push 7
    X86_AT(c, 0xef696u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef698  call 0xe6c68
    X86_AT(c, 0xef698u);
    push32(c, 0xef69du); f_000e6c68(c); X86_RET(c, 0xef69du);
    X86_TICK(c, 2);
    // 0ef69d  add esp, 0x10
    X86_AT(c, 0xef69du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_ef6a0:
    X86_TICK(c, 10);
    // 0ef6a0  ret 
    X86_AT(c, 0xef6a0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef65cu, "ran off the end of a function");
}
void f_000ef6a4(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0ef6a4  push 2
    X86_AT(c, 0xef6a4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ef6a6  push 0x1f
    X86_AT(c, 0xef6a6u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0ef6a8  push 0
    X86_AT(c, 0xef6a8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ef6aa  push 0
    X86_AT(c, 0xef6aau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ef6ac  push 0xa
    X86_AT(c, 0xef6acu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ef6ae  call 0xe72ac
    X86_AT(c, 0xef6aeu);
    push32(c, 0xef6b3u); f_000e72ac(c); X86_RET(c, 0xef6b3u);
    X86_TICK(c, 12);
    // 0ef6b3  add esp, 0x14
    X86_AT(c, 0xef6b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ef6b6  ret 
    X86_AT(c, 0xef6b6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef6a4u, "ran off the end of a function");
}
void f_000ef6b8(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0ef6b8  push ebp
    X86_AT(c, 0xef6b8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ef6b9  mov ebp, esp
    X86_AT(c, 0xef6b9u);
    c.r[5] = c.r[4];
    // 0ef6bb  sub esp, 8
    X86_AT(c, 0xef6bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0ef6be  push esi
    X86_AT(c, 0xef6beu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ef6bf  push edi
    X86_AT(c, 0xef6bfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef6c0  call 0xfb83c
    X86_AT(c, 0xef6c0u);
    push32(c, 0xef6c5u); f_000fb83c(c); X86_RET(c, 0xef6c5u);
L_ef6c5:
    X86_TICK(c, 9);
    // 0ef6c5  push 0xa
    X86_AT(c, 0xef6c5u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ef6c7  call 0xe1a7c
    X86_AT(c, 0xef6c7u);
    push32(c, 0xef6ccu); f_000e1a7c(c); X86_RET(c, 0xef6ccu);
    X86_TICK(c, 12);
    // 0ef6cc  xchg edi, eax
    X86_AT(c, 0xef6ccu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ef6cd  push 0xa
    X86_AT(c, 0xef6cdu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0ef6cf  call 0xe1a7c
    X86_AT(c, 0xef6cfu);
    push32(c, 0xef6d4u); f_000e1a7c(c); X86_RET(c, 0xef6d4u);
    X86_TICK(c, 19);
    // 0ef6d4  xchg esi, eax
    X86_AT(c, 0xef6d4u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0ef6d5  push esi
    X86_AT(c, 0xef6d5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ef6d6  push edi
    X86_AT(c, 0xef6d6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef6d7  push dword ptr [0xd4a68]
    X86_AT(c, 0xef6d7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD4A68u))); push32(c, v); }
    // 0ef6dd  call 0xfb21c
    X86_AT(c, 0xef6ddu);
    push32(c, 0xef6e2u); f_000fb21c(c); X86_RET(c, 0xef6e2u);
    X86_TICK(c, 11);
    // 0ef6e2  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xef6e2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0ef6e5  add esp, 0x14
    X86_AT(c, 0xef6e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0ef6e8  and eax, eax
    X86_AT(c, 0xef6e8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ef6ea  je 0xef6fb
    X86_AT(c, 0xef6eau);
    if (x86_cc(c, 4)) { goto L_ef6fb; }
    X86_TICK(c, 7);
    // 0ef6ec  cmp eax, 0xf
    X86_AT(c, 0xef6ecu);
    (void)x86_sub(c, c.r[0], 0xFu, 0, 4);
    // 0ef6ef  je 0xef6fb
    X86_AT(c, 0xef6efu);
    if (x86_cc(c, 4)) { goto L_ef6fb; }
    X86_TICK(c, 7);
    // 0ef6f1  cmp eax, 0xe
    X86_AT(c, 0xef6f1u);
    (void)x86_sub(c, c.r[0], 0xEu, 0, 4);
    // 0ef6f4  je 0xef6fb
    X86_AT(c, 0xef6f4u);
    if (x86_cc(c, 4)) { goto L_ef6fb; }
    X86_TICK(c, 7);
    // 0ef6f6  cmp eax, 0xa
    X86_AT(c, 0xef6f6u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0ef6f9  jne 0xef6c5
    X86_AT(c, 0xef6f9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xef6c5u); goto L_ef6c5; }
L_ef6fb:
    X86_TICK(c, 39);
    // 0ef6fb  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef6fbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef700  lea edx, [eax + eax*4]
    X86_AT(c, 0xef700u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef703  lea edx, [eax + edx*2]
    X86_AT(c, 0xef703u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef706  shl edx, 5
    X86_AT(c, 0xef706u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef709  sub edx, eax
    X86_AT(c, 0xef709u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef70b  mov dword ptr [edx + 0xcdf63], edi
    X86_AT(c, 0xef70bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF63u)), c.r[7]);
    // 0ef711  mov dword ptr [0xd4a4c], edi
    X86_AT(c, 0xef711u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A4Cu)), c.r[7]);
    // 0ef717  mov dword ptr [edx + 0xcdf67], esi
    X86_AT(c, 0xef717u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF67u)), c.r[6]);
    // 0ef71d  mov dword ptr [0xd4a50], esi
    X86_AT(c, 0xef71du);
    wr32((c.sbase[3] + (uint32_t)(0xD4A50u)), c.r[6]);
    // 0ef723  push esi
    X86_AT(c, 0xef723u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ef724  push edi
    X86_AT(c, 0xef724u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef725  push dword ptr [0xd4a68]
    X86_AT(c, 0xef725u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xD4A68u))); push32(c, v); }
    // 0ef72b  push 0
    X86_AT(c, 0xef72bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0ef72d  call 0xfb2cc
    X86_AT(c, 0xef72du);
    push32(c, 0xef732u); f_000fb2cc(c); X86_RET(c, 0xef732u);
    X86_TICK(c, 37);
    // 0ef732  mov eax, dword ptr [0xd4a4c]
    X86_AT(c, 0xef732u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A4Cu)));
    // 0ef737  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xef737u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0ef73a  mov eax, dword ptr [0xd4a50]
    X86_AT(c, 0xef73au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xD4A50u)));
    // 0ef73f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xef73fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0ef742  lea eax, [ebp - 8]
    X86_AT(c, 0xef742u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0ef745  push eax
    X86_AT(c, 0xef745u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ef746  lea eax, [ebp - 4]
    X86_AT(c, 0xef746u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0ef749  push eax
    X86_AT(c, 0xef749u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ef74a  movsx eax, word ptr [0xd6e68]
    X86_AT(c, 0xef74au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0xD6E68u)));
    // 0ef751  push eax
    X86_AT(c, 0xef751u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ef752  push 0xd5a74
    X86_AT(c, 0xef752u);
    { uint32_t v = 0xD5A74u; push32(c, v); }
    // 0ef757  call 0xf9f30
    X86_AT(c, 0xef757u);
    push32(c, 0xef75cu); f_000f9f30(c); X86_RET(c, 0xef75cu);
    X86_TICK(c, 9);
    // 0ef75c  push 7
    X86_AT(c, 0xef75cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef75e  call 0xe693c
    X86_AT(c, 0xef75eu);
    push32(c, 0xef763u); f_000e693c(c); X86_RET(c, 0xef763u);
    X86_TICK(c, 11);
    // 0ef763  push 0x47e8
    X86_AT(c, 0xef763u);
    { uint32_t v = 0x47E8u; push32(c, v); }
    // 0ef768  push 7
    X86_AT(c, 0xef768u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef76a  call 0xe5654
    X86_AT(c, 0xef76au);
    push32(c, 0xef76fu); f_000e5654(c); X86_RET(c, 0xef76fu);
    X86_TICK(c, 9);
    // 0ef76f  push 7
    X86_AT(c, 0xef76fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef771  call 0xe6c68
    X86_AT(c, 0xef771u);
    push32(c, 0xef776u); f_000e6c68(c); X86_RET(c, 0xef776u);
    X86_TICK(c, 26);
    // 0ef776  add esp, 0x30
    X86_AT(c, 0xef776u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0ef779  pop edi
    X86_AT(c, 0xef779u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ef77a  pop esi
    X86_AT(c, 0xef77au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ef77b  leave 
    X86_AT(c, 0xef77bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ef77c  ret 
    X86_AT(c, 0xef77cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef6b8u, "ran off the end of a function");
}
void f_000ef780(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ef780  push 5
    X86_AT(c, 0xef780u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ef782  call 0xe1944
    X86_AT(c, 0xef782u);
    push32(c, 0xef787u); f_000e1944(c); X86_RET(c, 0xef787u);
    X86_TICK(c, 9);
    // 0ef787  push 2
    X86_AT(c, 0xef787u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ef789  call 0xe9740
    X86_AT(c, 0xef789u);
    push32(c, 0xef78eu); f_000e9740(c); X86_RET(c, 0xef78eu);
    X86_TICK(c, 14);
    // 0ef78e  add esp, 8
    X86_AT(c, 0xef78eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ef791  cmp dword ptr [0xd4a68], 0x10
    X86_AT(c, 0xef791u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4A68u))), 0x10u, 0, 4);
    // 0ef798  jl 0xef7b2
    X86_AT(c, 0xef798u);
    if (x86_cc(c, 12)) { goto L_ef7b2; }
    X86_TICK(c, 11);
    // 0ef79a  push 0x4810
    X86_AT(c, 0xef79au);
    { uint32_t v = 0x4810u; push32(c, v); }
    // 0ef79f  push 7
    X86_AT(c, 0xef79fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef7a1  call 0xe5654
    X86_AT(c, 0xef7a1u);
    push32(c, 0xef7a6u); f_000e5654(c); X86_RET(c, 0xef7a6u);
    X86_TICK(c, 9);
    // 0ef7a6  push 7
    X86_AT(c, 0xef7a6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef7a8  call 0xe6c68
    X86_AT(c, 0xef7a8u);
    push32(c, 0xef7adu); f_000e6c68(c); X86_RET(c, 0xef7adu);
    X86_TICK(c, 9);
    // 0ef7ad  add esp, 0xc
    X86_AT(c, 0xef7adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ef7b0  jmp 0xef7c2
    X86_AT(c, 0xef7b0u);
    goto L_ef7c2;
L_ef7b2:
    X86_TICK(c, 7);
    // 0ef7b2  call 0xfba20
    X86_AT(c, 0xef7b2u);
    push32(c, 0xef7b7u); f_000fba20(c); X86_RET(c, 0xef7b7u);
    X86_TICK(c, 13);
    // 0ef7b7  inc dword ptr [0xd4a68]
    X86_AT(c, 0xef7b7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xD4A68u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ef7bd  call 0xef6b8
    X86_AT(c, 0xef7bdu);
    push32(c, 0xef7c2u); f_000ef6b8(c); X86_RET(c, 0xef7c2u);
L_ef7c2:
    X86_TICK(c, 10);
    // 0ef7c2  ret 
    X86_AT(c, 0xef7c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef780u, "ran off the end of a function");
}
void f_000ef7c4(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ef7c4  push 5
    X86_AT(c, 0xef7c4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ef7c6  call 0xe1944
    X86_AT(c, 0xef7c6u);
    push32(c, 0xef7cbu); f_000e1944(c); X86_RET(c, 0xef7cbu);
    X86_TICK(c, 9);
    // 0ef7cb  push 2
    X86_AT(c, 0xef7cbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ef7cd  call 0xe9740
    X86_AT(c, 0xef7cdu);
    push32(c, 0xef7d2u); f_000e9740(c); X86_RET(c, 0xef7d2u);
    X86_TICK(c, 7);
    // 0ef7d2  call 0xfba20
    X86_AT(c, 0xef7d2u);
    push32(c, 0xef7d7u); f_000fba20(c); X86_RET(c, 0xef7d7u);
    X86_TICK(c, 20);
    // 0ef7d7  dec dword ptr [0xd4a68]
    X86_AT(c, 0xef7d7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xD4A68u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ef7dd  add esp, 8
    X86_AT(c, 0xef7ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ef7e0  cmp dword ptr [0xd4a68], 1
    X86_AT(c, 0xef7e0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xD4A68u))), 0x1u, 0, 4);
    // 0ef7e7  jge 0xef7f4
    X86_AT(c, 0xef7e7u);
    if (x86_cc(c, 13)) { goto L_ef7f4; }
    X86_TICK(c, 9);
    // 0ef7e9  mov word ptr [0xd4a48], 0
    X86_AT(c, 0xef7e9u);
    wr16((c.sbase[3] + (uint32_t)(0xD4A48u)), 0x0u);
    // 0ef7f2  jmp 0xef7f9
    X86_AT(c, 0xef7f2u);
    goto L_ef7f9;
L_ef7f4:
    X86_TICK(c, 7);
    // 0ef7f4  call 0xef6b8
    X86_AT(c, 0xef7f4u);
    push32(c, 0xef7f9u); f_000ef6b8(c); X86_RET(c, 0xef7f9u);
L_ef7f9:
    X86_TICK(c, 10);
    // 0ef7f9  ret 
    X86_AT(c, 0xef7f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef7c4u, "ran off the end of a function");
}
void f_000ef7fc(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0ef7fc  push ebx
    X86_AT(c, 0xef7fcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ef7fd  push esi
    X86_AT(c, 0xef7fdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ef7fe  push edi
    X86_AT(c, 0xef7feu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef7ff  push 2
    X86_AT(c, 0xef7ffu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0ef801  call 0xe1944
    X86_AT(c, 0xef801u);
    push32(c, 0xef806u); f_000e1944(c); X86_RET(c, 0xef806u);
    X86_TICK(c, 27);
    // 0ef806  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef806u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef80b  lea edx, [eax + eax*4]
    X86_AT(c, 0xef80bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef80e  lea edx, [eax + edx*2]
    X86_AT(c, 0xef80eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef811  shl edx, 5
    X86_AT(c, 0xef811u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef814  sub edx, eax
    X86_AT(c, 0xef814u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef816  add esp, 4
    X86_AT(c, 0xef816u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ef819  cmp dword ptr [edx + 0xcdf57], 0
    X86_AT(c, 0xef819u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u))), 0x0u, 0, 4);
    // 0ef820  jne 0xef82e
    X86_AT(c, 0xef820u);
    if (x86_cc(c, 5)) { goto L_ef82e; }
    X86_TICK(c, 12);
    // 0ef822  cmp dword ptr [edx + 0xcde56], 0xec
    X86_AT(c, 0xef822u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0xECu, 0, 4);
    // 0ef82c  je 0xef846
    X86_AT(c, 0xef82cu);
    if (x86_cc(c, 4)) { goto L_ef846; }
L_ef82e:
    X86_TICK(c, 11);
    // 0ef82e  push 0x482c
    X86_AT(c, 0xef82eu);
    { uint32_t v = 0x482Cu; push32(c, v); }
    // 0ef833  push 7
    X86_AT(c, 0xef833u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef835  call 0xe5654
    X86_AT(c, 0xef835u);
    push32(c, 0xef83au); f_000e5654(c); X86_RET(c, 0xef83au);
    X86_TICK(c, 9);
    // 0ef83a  push 7
    X86_AT(c, 0xef83au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0ef83c  call 0xe6c68
    X86_AT(c, 0xef83cu);
    push32(c, 0xef841u); f_000e6c68(c); X86_RET(c, 0xef841u);
    X86_TICK(c, 9);
    // 0ef841  add esp, 0xc
    X86_AT(c, 0xef841u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ef844  jmp 0xef8a7
    X86_AT(c, 0xef844u);
    goto L_ef8a7;
L_ef846:
    X86_TICK(c, 9);
    // 0ef846  push 0x3f
    X86_AT(c, 0xef846u);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0ef848  call 0xe1a7c
    X86_AT(c, 0xef848u);
    push32(c, 0xef84du); f_000e1a7c(c); X86_RET(c, 0xef84du);
    X86_TICK(c, 12);
    // 0ef84d  xchg edi, eax
    X86_AT(c, 0xef84du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ef84e  push 0x3f
    X86_AT(c, 0xef84eu);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0ef850  call 0xe1a7c
    X86_AT(c, 0xef850u);
    push32(c, 0xef855u); f_000e1a7c(c); X86_RET(c, 0xef855u);
    X86_TICK(c, 14);
    // 0ef855  xchg esi, eax
    X86_AT(c, 0xef855u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0ef856  push esi
    X86_AT(c, 0xef856u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ef857  push edi
    X86_AT(c, 0xef857u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef858  call 0xef8ac
    X86_AT(c, 0xef858u);
    push32(c, 0xef85du); f_000ef8ac(c); X86_RET(c, 0xef85du);
    X86_TICK(c, 12);
    // 0ef85d  xchg ebx, eax
    X86_AT(c, 0xef85du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ef85e  add esp, 0x10
    X86_AT(c, 0xef85eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0ef861  cmp ebx, 4
    X86_AT(c, 0xef861u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0ef864  je 0xef870
    X86_AT(c, 0xef864u);
    if (x86_cc(c, 4)) { goto L_ef870; }
    X86_TICK(c, 7);
    // 0ef866  cmp ebx, 3
    X86_AT(c, 0xef866u);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0ef869  je 0xef870
    X86_AT(c, 0xef869u);
    if (x86_cc(c, 4)) { goto L_ef870; }
    X86_TICK(c, 7);
    // 0ef86b  cmp ebx, 2
    X86_AT(c, 0xef86bu);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0ef86e  jne 0xef846
    X86_AT(c, 0xef86eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xef846u); goto L_ef846; }
L_ef870:
    X86_TICK(c, 7);
    // 0ef870  call 0xe2824
    X86_AT(c, 0xef870u);
    push32(c, 0xef875u); f_000e2824(c); X86_RET(c, 0xef875u);
    X86_TICK(c, 30);
    // 0ef875  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef875u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef87a  lea edx, [eax + eax*4]
    X86_AT(c, 0xef87au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef87d  lea edx, [eax + edx*2]
    X86_AT(c, 0xef87du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef880  shl edx, 5
    X86_AT(c, 0xef880u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef883  sub edx, eax
    X86_AT(c, 0xef883u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef885  mov dword ptr [edx + 0xcdf5b], edi
    X86_AT(c, 0xef885u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Bu)), c.r[7]);
    // 0ef88b  mov dword ptr [edx + 0xcdf6b], edi
    X86_AT(c, 0xef88bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)), c.r[7]);
    // 0ef891  mov dword ptr [edx + 0xcdf5f], esi
    X86_AT(c, 0xef891u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF5Fu)), c.r[6]);
    // 0ef897  mov dword ptr [edx + 0xcdf6f], esi
    X86_AT(c, 0xef897u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)), c.r[6]);
    // 0ef89d  push 1
    X86_AT(c, 0xef89du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ef89f  call 0xe1a9c
    X86_AT(c, 0xef89fu);
    push32(c, 0xef8a4u); f_000e1a9c(c); X86_RET(c, 0xef8a4u);
    X86_TICK(c, 2);
    // 0ef8a4  add esp, 4
    X86_AT(c, 0xef8a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_ef8a7:
    X86_TICK(c, 22);
    // 0ef8a7  pop edi
    X86_AT(c, 0xef8a7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ef8a8  pop esi
    X86_AT(c, 0xef8a8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ef8a9  pop ebx
    X86_AT(c, 0xef8a9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ef8aa  ret 
    X86_AT(c, 0xef8aau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef7fcu, "ran off the end of a function");
}
void f_000ef8ac(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0ef8ac  push ebp
    X86_AT(c, 0xef8acu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ef8ad  mov ebp, esp
    X86_AT(c, 0xef8adu);
    c.r[5] = c.r[4];
    // 0ef8af  push ebx
    X86_AT(c, 0xef8afu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ef8b0  push esi
    X86_AT(c, 0xef8b0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ef8b1  push edi
    X86_AT(c, 0xef8b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef8b2  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xef8b2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ef8b5  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xef8b5u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ef8b8  push esi
    X86_AT(c, 0xef8b8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ef8b9  push edi
    X86_AT(c, 0xef8b9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef8ba  call 0xeeb6c
    X86_AT(c, 0xef8bau);
    push32(c, 0xef8bfu); f_000eeb6c(c); X86_RET(c, 0xef8bfu);
    X86_TICK(c, 12);
    // 0ef8bf  xchg ebx, eax
    X86_AT(c, 0xef8bfu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ef8c0  add esp, 8
    X86_AT(c, 0xef8c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ef8c3  cmp ebx, 0xffffffff
    X86_AT(c, 0xef8c3u);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0ef8c6  je 0xef8d1
    X86_AT(c, 0xef8c6u);
    if (x86_cc(c, 4)) { goto L_ef8d1; }
    X86_TICK(c, 13);
    // 0ef8c8  movzx eax, byte ptr [ebx + 0xce3c8]
    X86_AT(c, 0xef8c8u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCE3C8u)));
    // 0ef8cf  jmp 0xef8ee
    X86_AT(c, 0xef8cfu);
    goto L_ef8ee;
L_ef8d1:
    X86_TICK(c, 11);
    // 0ef8d1  push esi
    X86_AT(c, 0xef8d1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ef8d2  push edi
    X86_AT(c, 0xef8d2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef8d3  call 0xef920
    X86_AT(c, 0xef8d3u);
    push32(c, 0xef8d8u); f_000ef920(c); X86_RET(c, 0xef8d8u);
    X86_TICK(c, 12);
    // 0ef8d8  xchg ebx, eax
    X86_AT(c, 0xef8d8u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0ef8d9  add esp, 8
    X86_AT(c, 0xef8d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ef8dc  and ebx, ebx
    X86_AT(c, 0xef8dcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0ef8de  je 0xef8e4
    X86_AT(c, 0xef8deu);
    if (x86_cc(c, 4)) { goto L_ef8e4; }
    X86_TICK(c, 9);
    // 0ef8e0  mov eax, ebx
    X86_AT(c, 0xef8e0u);
    c.r[0] = c.r[3];
    // 0ef8e2  jmp 0xef8ee
    X86_AT(c, 0xef8e2u);
    goto L_ef8ee;
L_ef8e4:
    X86_TICK(c, 11);
    // 0ef8e4  push esi
    X86_AT(c, 0xef8e4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ef8e5  push edi
    X86_AT(c, 0xef8e5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef8e6  call 0xef8f4
    X86_AT(c, 0xef8e6u);
    push32(c, 0xef8ebu); f_000ef8f4(c); X86_RET(c, 0xef8ebu);
    X86_TICK(c, 2);
    // 0ef8eb  add esp, 8
    X86_AT(c, 0xef8ebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_ef8ee:
    X86_TICK(c, 28);
    // 0ef8ee  pop edi
    X86_AT(c, 0xef8eeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ef8ef  pop esi
    X86_AT(c, 0xef8efu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ef8f0  pop ebx
    X86_AT(c, 0xef8f0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ef8f1  leave 
    X86_AT(c, 0xef8f1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ef8f2  ret 
    X86_AT(c, 0xef8f2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef8acu, "ran off the end of a function");
}
void f_000ef8f4(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0ef8f4  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0xef8f4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0ef8f8  shl eax, 6
    X86_AT(c, 0xef8f8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x6u, 4, w); if (w) c.r[0] = r; }
    // 0ef8fb  add eax, dword ptr [esp + 4]
    X86_AT(c, 0xef8fbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))), 0, 4); }
    // 0ef8ff  movzx ecx, byte ptr [eax + 0xbd578]
    X86_AT(c, 0xef8ffu);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBD578u)));
    // 0ef906  cmp ecx, 0x12
    X86_AT(c, 0xef906u);
    (void)x86_sub(c, c.r[1], 0x12u, 0, 4);
    // 0ef909  jl 0xef910
    X86_AT(c, 0xef909u);
    if (x86_cc(c, 12)) { goto L_ef910; }
    X86_TICK(c, 7);
    // 0ef90b  cmp ecx, 0x21
    X86_AT(c, 0xef90bu);
    (void)x86_sub(c, c.r[1], 0x21u, 0, 4);
    // 0ef90e  jl 0xef915
    X86_AT(c, 0xef90eu);
    if (x86_cc(c, 12)) { goto L_ef915; }
L_ef910:
    X86_TICK(c, 7);
    // 0ef910  cmp ecx, 0xa
    X86_AT(c, 0xef910u);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 0ef913  jne 0xef91a
    X86_AT(c, 0xef913u);
    if (x86_cc(c, 5)) { goto L_ef91a; }
L_ef915:
    X86_TICK(c, 2);
    // 0ef915  mov ecx, 1
    X86_AT(c, 0xef915u);
    c.r[1] = 0x1u;
L_ef91a:
    X86_TICK(c, 12);
    // 0ef91a  mov eax, ecx
    X86_AT(c, 0xef91au);
    c.r[0] = c.r[1];
    // 0ef91c  ret 
    X86_AT(c, 0xef91cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef8f4u, "ran off the end of a function");
}
void f_000ef920(X86Cpu& c) {
    X86_TICK(c, 51);
    // 0ef920  push ebp
    X86_AT(c, 0xef920u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ef921  mov ebp, esp
    X86_AT(c, 0xef921u);
    c.r[5] = c.r[4];
    // 0ef923  push esi
    X86_AT(c, 0xef923u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ef924  push edi
    X86_AT(c, 0xef924u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef925  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xef925u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ef928  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xef928u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ef92b  mov eax, esi
    X86_AT(c, 0xef92bu);
    c.r[0] = c.r[6];
    // 0ef92d  shl eax, 7
    X86_AT(c, 0xef92du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0ef930  movsx ecx, word ptr [eax + edi*2 + 0x77e90]
    X86_AT(c, 0xef930u);
    c.r[1] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] * 2 + 0x77E90u)));
    // 0ef938  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef938u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef93d  lea edx, [eax + eax*4]
    X86_AT(c, 0xef93du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef940  lea edx, [eax + edx*2]
    X86_AT(c, 0xef940u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef943  shl edx, 5
    X86_AT(c, 0xef943u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef946  sub edx, eax
    X86_AT(c, 0xef946u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef948  cmp edi, dword ptr [edx + 0xcdf9f]
    X86_AT(c, 0xef948u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF9Fu))), 0, 4);
    // 0ef94e  jne 0xef95f
    X86_AT(c, 0xef94eu);
    if (x86_cc(c, 5)) { goto L_ef95f; }
    X86_TICK(c, 11);
    // 0ef950  cmp esi, dword ptr [edx + 0xcdfa3]
    X86_AT(c, 0xef950u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDFA3u))), 0, 4);
    // 0ef956  jne 0xef95f
    X86_AT(c, 0xef956u);
    if (x86_cc(c, 5)) { goto L_ef95f; }
    X86_TICK(c, 9);
    // 0ef958  mov eax, 0x10
    X86_AT(c, 0xef958u);
    c.r[0] = 0x10u;
    // 0ef95d  jmp 0xef961
    X86_AT(c, 0xef95du);
    goto L_ef961;
L_ef95f:
    X86_TICK(c, 2);
    // 0ef95f  mov eax, ecx
    X86_AT(c, 0xef95fu);
    c.r[0] = c.r[1];
L_ef961:
    X86_TICK(c, 24);
    // 0ef961  pop edi
    X86_AT(c, 0xef961u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ef962  pop esi
    X86_AT(c, 0xef962u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ef963  leave 
    X86_AT(c, 0xef963u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ef964  ret 
    X86_AT(c, 0xef964u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef920u, "ran off the end of a function");
}
void f_000ef968(X86Cpu& c) {
    X86_TICK(c, 44);
    // 0ef968  push ebp
    X86_AT(c, 0xef968u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ef969  mov ebp, esp
    X86_AT(c, 0xef969u);
    c.r[5] = c.r[4];
    // 0ef96b  push esi
    X86_AT(c, 0xef96bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ef96c  push edi
    X86_AT(c, 0xef96cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef96d  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xef96du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0ef972  lea edx, [eax + eax*4]
    X86_AT(c, 0xef972u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0ef975  lea edx, [eax + edx*2]
    X86_AT(c, 0xef975u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0ef978  shl edx, 5
    X86_AT(c, 0xef978u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0ef97b  sub edx, eax
    X86_AT(c, 0xef97bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ef97d  mov edi, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xef97du);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0ef983  mov esi, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xef983u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0ef989  movzx edx, byte ptr [ebp + 8]
    X86_AT(c, 0xef989u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ef98d  sub edx, 3
    X86_AT(c, 0xef98du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0ef990  cmp edx, 4
    X86_AT(c, 0xef990u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0ef993  ja 0xef9db
    X86_AT(c, 0xef993u);
    if (x86_cc(c, 7)) { goto L_ef9db; }
    X86_TICK(c, 7);
    // 0ef995  jmp dword ptr cs:[edx*4 + 0xef99d]
    X86_AT(c, 0xef995u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xEF99Du)));
      switch (t) {
      case 0xef9b1u: goto L_ef9b1;
      case 0xef9bdu: goto L_ef9bd;
      case 0xef9c7u: goto L_ef9c7;
      case 0xef9d3u: goto L_ef9d3;
      case 0xef9dbu: goto L_ef9db;
      default: x86_jump(c, t); return; } }
L_ef9b1:
    X86_TICK(c, 9);
    // 0ef9b1  dec esi
    X86_AT(c, 0xef9b1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0ef9b2  and esi, esi
    X86_AT(c, 0xef9b2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ef9b4  jge 0xef9db
    X86_AT(c, 0xef9b4u);
    if (x86_cc(c, 13)) { goto L_ef9db; }
    X86_TICK(c, 9);
    // 0ef9b6  mov esi, 0x3f
    X86_AT(c, 0xef9b6u);
    c.r[6] = 0x3Fu;
    // 0ef9bb  jmp 0xef9db
    X86_AT(c, 0xef9bbu);
    goto L_ef9db;
L_ef9bd:
    X86_TICK(c, 9);
    // 0ef9bd  inc esi
    X86_AT(c, 0xef9bdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ef9be  cmp esi, 0x40
    X86_AT(c, 0xef9beu);
    (void)x86_sub(c, c.r[6], 0x40u, 0, 4);
    // 0ef9c1  jl 0xef9db
    X86_AT(c, 0xef9c1u);
    if (x86_cc(c, 12)) { goto L_ef9db; }
    X86_TICK(c, 9);
    // 0ef9c3  sub esi, esi
    X86_AT(c, 0xef9c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0ef9c5  jmp 0xef9db
    X86_AT(c, 0xef9c5u);
    goto L_ef9db;
L_ef9c7:
    X86_TICK(c, 9);
    // 0ef9c7  dec edi
    X86_AT(c, 0xef9c7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0ef9c8  and edi, edi
    X86_AT(c, 0xef9c8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0ef9ca  jge 0xef9db
    X86_AT(c, 0xef9cau);
    if (x86_cc(c, 13)) { goto L_ef9db; }
    X86_TICK(c, 9);
    // 0ef9cc  mov edi, 0x3f
    X86_AT(c, 0xef9ccu);
    c.r[7] = 0x3Fu;
    // 0ef9d1  jmp 0xef9db
    X86_AT(c, 0xef9d1u);
    goto L_ef9db;
L_ef9d3:
    X86_TICK(c, 9);
    // 0ef9d3  inc edi
    X86_AT(c, 0xef9d3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0ef9d4  cmp edi, 0x40
    X86_AT(c, 0xef9d4u);
    (void)x86_sub(c, c.r[7], 0x40u, 0, 4);
    // 0ef9d7  jl 0xef9db
    X86_AT(c, 0xef9d7u);
    if (x86_cc(c, 12)) { goto L_ef9db; }
    X86_TICK(c, 2);
    // 0ef9d9  sub edi, edi
    X86_AT(c, 0xef9d9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_ef9db:
    X86_TICK(c, 12);
    // 0ef9db  cmp dword ptr [0xcde44], 2
    X86_AT(c, 0xef9dbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x2u, 0, 4);
    // 0ef9e2  je 0xef9ed
    X86_AT(c, 0xef9e2u);
    if (x86_cc(c, 4)) { goto L_ef9ed; }
    X86_TICK(c, 11);
    // 0ef9e4  push esi
    X86_AT(c, 0xef9e4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ef9e5  push edi
    X86_AT(c, 0xef9e5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef9e6  call 0xefa00
    X86_AT(c, 0xef9e6u);
    push32(c, 0xef9ebu); f_000efa00(c); X86_RET(c, 0xef9ebu);
    X86_TICK(c, 7);
    // 0ef9eb  jmp 0xef9f6
    X86_AT(c, 0xef9ebu);
    goto L_ef9f6;
L_ef9ed:
    X86_TICK(c, 11);
    // 0ef9ed  push esi
    X86_AT(c, 0xef9edu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ef9ee  push edi
    X86_AT(c, 0xef9eeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ef9ef  call 0xefa00
    X86_AT(c, 0xef9efu);
    push32(c, 0xef9f4u); f_000efa00(c); X86_RET(c, 0xef9f4u);
    X86_TICK(c, 2);
    // 0ef9f4  sub eax, eax
    X86_AT(c, 0xef9f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_ef9f6:
    X86_TICK(c, 26);
    // 0ef9f6  add esp, 8
    X86_AT(c, 0xef9f6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ef9f9  pop edi
    X86_AT(c, 0xef9f9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ef9fa  pop esi
    X86_AT(c, 0xef9fau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ef9fb  leave 
    X86_AT(c, 0xef9fbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ef9fc  ret 
    X86_AT(c, 0xef9fcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xef968u, "ran off the end of a function");
}
void f_000efa00(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0efa00  push ebp
    X86_AT(c, 0xefa00u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0efa01  mov ebp, esp
    X86_AT(c, 0xefa01u);
    c.r[5] = c.r[4];
    // 0efa03  push eax
    X86_AT(c, 0xefa03u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0efa04  push ebx
    X86_AT(c, 0xefa04u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0efa05  push esi
    X86_AT(c, 0xefa05u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0efa06  push edi
    X86_AT(c, 0xefa06u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0efa07  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xefa07u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0efa0a  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xefa0au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0efa0d  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xefa0du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0efa14  push esi
    X86_AT(c, 0xefa14u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0efa15  push edi
    X86_AT(c, 0xefa15u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0efa16  call 0xef8ac
    X86_AT(c, 0xefa16u);
    push32(c, 0xefa1bu); f_000ef8ac(c); X86_RET(c, 0xefa1bu);
    X86_TICK(c, 12);
    // 0efa1b  xchg ebx, eax
    X86_AT(c, 0xefa1bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0efa1c  push 7
    X86_AT(c, 0xefa1cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efa1e  call 0xe693c
    X86_AT(c, 0xefa1eu);
    push32(c, 0xefa23u); f_000e693c(c); X86_RET(c, 0xefa23u);
    X86_TICK(c, 27);
    // 0efa23  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xefa23u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0efa28  lea edx, [eax + eax*4]
    X86_AT(c, 0xefa28u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0efa2b  lea edx, [eax + edx*2]
    X86_AT(c, 0xefa2bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0efa2e  shl edx, 5
    X86_AT(c, 0xefa2eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0efa31  sub edx, eax
    X86_AT(c, 0xefa31u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0efa33  add esp, 0xc
    X86_AT(c, 0xefa33u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0efa36  cmp dword ptr [edx + 0xcde56], 1
    X86_AT(c, 0xefa36u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x1u, 0, 4);
    // 0efa3d  jne 0xefa9a
    X86_AT(c, 0xefa3du);
    if (x86_cc(c, 5)) { goto L_efa9a; }
    X86_TICK(c, 7);
    // 0efa3f  cmp bl, 1
    X86_AT(c, 0xefa3fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0efa42  je 0xefa53
    X86_AT(c, 0xefa42u);
    if (x86_cc(c, 4)) { goto L_efa53; }
    X86_TICK(c, 7);
    // 0efa44  cmp bl, 0xa
    X86_AT(c, 0xefa44u);
    (void)x86_sub(c, g8(c, 3), 0xAu, 0, 1);
    // 0efa47  je 0xefa53
    X86_AT(c, 0xefa47u);
    if (x86_cc(c, 4)) { goto L_efa53; }
    X86_TICK(c, 7);
    // 0efa49  cmp bl, 0x11
    X86_AT(c, 0xefa49u);
    (void)x86_sub(c, g8(c, 3), 0x11u, 0, 1);
    // 0efa4c  jbe 0xefa5d
    X86_AT(c, 0xefa4cu);
    if (x86_cc(c, 6)) { goto L_efa5d; }
    X86_TICK(c, 7);
    // 0efa4e  cmp bl, 0x21
    X86_AT(c, 0xefa4eu);
    (void)x86_sub(c, g8(c, 3), 0x21u, 0, 1);
    // 0efa51  jae 0xefa5d
    X86_AT(c, 0xefa51u);
    if (x86_cc(c, 3)) { goto L_efa5d; }
L_efa53:
    X86_TICK(c, 9);
    // 0efa53  mov eax, 1
    X86_AT(c, 0xefa53u);
    c.r[0] = 0x1u;
    // 0efa58  jmp 0xefccd
    X86_AT(c, 0xefa58u);
    goto L_efccd;
L_efa5d:
    X86_TICK(c, 9);
    // 0efa5d  push 0
    X86_AT(c, 0xefa5du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0efa5f  call 0xe1944
    X86_AT(c, 0xefa5fu);
    push32(c, 0xefa64u); f_000e1944(c); X86_RET(c, 0xefa64u);
    X86_TICK(c, 13);
    // 0efa64  lea eax, [ebp - 4]
    X86_AT(c, 0xefa64u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0efa67  push eax
    X86_AT(c, 0xefa67u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0efa68  push ebx
    X86_AT(c, 0xefa68u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0efa69  call 0xefe68
    X86_AT(c, 0xefa69u);
    push32(c, 0xefa6eu); f_000efe68(c); X86_RET(c, 0xefa6eu);
    X86_TICK(c, 11);
    // 0efa6e  push eax
    X86_AT(c, 0xefa6eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0efa6f  push 7
    X86_AT(c, 0xefa6fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efa71  call 0xe6cb0
    X86_AT(c, 0xefa71u);
    push32(c, 0xefa76u); f_000e6cb0(c); X86_RET(c, 0xefa76u);
    X86_TICK(c, 9);
    // 0efa76  push 7
    X86_AT(c, 0xefa76u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efa78  call 0xe6c68
    X86_AT(c, 0xefa78u);
    push32(c, 0xefa7du); f_000e6c68(c); X86_RET(c, 0xefa7du);
    X86_TICK(c, 14);
    // 0efa7d  add esp, 0x18
    X86_AT(c, 0xefa7du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0efa80  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xefa80u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0efa84  jne 0xefa90
    X86_AT(c, 0xefa84u);
    if (x86_cc(c, 5)) { goto L_efa90; }
    X86_TICK(c, 9);
    // 0efa86  push 0x4850
    X86_AT(c, 0xefa86u);
    { uint32_t v = 0x4850u; push32(c, v); }
    // 0efa8b  jmp 0xefbce
    X86_AT(c, 0xefa8bu);
    goto L_efbce;
L_efa90:
    X86_TICK(c, 9);
    // 0efa90  push 0x487c
    X86_AT(c, 0xefa90u);
    { uint32_t v = 0x487Cu; push32(c, v); }
    // 0efa95  jmp 0xefbce
    X86_AT(c, 0xefa95u);
    goto L_efbce;
L_efa9a:
    X86_TICK(c, 11);
    // 0efa9a  push esi
    X86_AT(c, 0xefa9au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0efa9b  push edi
    X86_AT(c, 0xefa9bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0efa9c  call 0xeeb6c
    X86_AT(c, 0xefa9cu);
    push32(c, 0xefaa1u); f_000eeb6c(c); X86_RET(c, 0xefaa1u);
    X86_TICK(c, 11);
    // 0efaa1  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xefaa1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0efaa4  add esp, 8
    X86_AT(c, 0xefaa4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0efaa7  cmp eax, 0xffffffff
    X86_AT(c, 0xefaa7u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0efaaa  je 0xefb2f
    X86_AT(c, 0xefaaau);
    if (x86_cc(c, 4)) { goto L_efb2f; }
    X86_TICK(c, 11);
    // 0efab0  mov bl, byte ptr [eax + 0xce3c8]
    X86_AT(c, 0xefab0u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCE3C8u))));
    // 0efab6  cmp bl, 0xdd
    X86_AT(c, 0xefab6u);
    (void)x86_sub(c, g8(c, 3), 0xDDu, 0, 1);
    // 0efab9  jne 0xefac5
    X86_AT(c, 0xefab9u);
    if (x86_cc(c, 5)) { goto L_efac5; }
    X86_TICK(c, 9);
    // 0efabb  mov eax, 0xdd
    X86_AT(c, 0xefabbu);
    c.r[0] = 0xDDu;
    // 0efac0  jmp 0xefccd
    X86_AT(c, 0xefac0u);
    goto L_efccd;
L_efac5:
    X86_TICK(c, 7);
    // 0efac5  cmp bl, 0xdf
    X86_AT(c, 0xefac5u);
    (void)x86_sub(c, g8(c, 3), 0xDFu, 0, 1);
    // 0efac8  jne 0xefad4
    X86_AT(c, 0xefac8u);
    if (x86_cc(c, 5)) { goto L_efad4; }
    X86_TICK(c, 9);
    // 0efaca  mov eax, 0xdf
    X86_AT(c, 0xefacau);
    c.r[0] = 0xDFu;
    // 0efacf  jmp 0xefccd
    X86_AT(c, 0xefacfu);
    goto L_efccd;
L_efad4:
    X86_TICK(c, 7);
    // 0efad4  cmp bl, 0xde
    X86_AT(c, 0xefad4u);
    (void)x86_sub(c, g8(c, 3), 0xDEu, 0, 1);
    // 0efad7  jne 0xefae3
    X86_AT(c, 0xefad7u);
    if (x86_cc(c, 5)) { goto L_efae3; }
    X86_TICK(c, 9);
    // 0efad9  mov eax, 0xde
    X86_AT(c, 0xefad9u);
    c.r[0] = 0xDEu;
    // 0efade  jmp 0xefccd
    X86_AT(c, 0xefadeu);
    goto L_efccd;
L_efae3:
    X86_TICK(c, 7);
    // 0efae3  cmp bl, 0x48
    X86_AT(c, 0xefae3u);
    (void)x86_sub(c, g8(c, 3), 0x48u, 0, 1);
    // 0efae6  jne 0xefaf2
    X86_AT(c, 0xefae6u);
    if (x86_cc(c, 5)) { goto L_efaf2; }
    X86_TICK(c, 9);
    // 0efae8  mov eax, 0x48
    X86_AT(c, 0xefae8u);
    c.r[0] = 0x48u;
    // 0efaed  jmp 0xefccd
    X86_AT(c, 0xefaedu);
    goto L_efccd;
L_efaf2:
    X86_TICK(c, 9);
    // 0efaf2  push 0
    X86_AT(c, 0xefaf2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0efaf4  call 0xe1944
    X86_AT(c, 0xefaf4u);
    push32(c, 0xefaf9u); f_000e1944(c); X86_RET(c, 0xefaf9u);
    X86_TICK(c, 13);
    // 0efaf9  lea eax, [ebp - 4]
    X86_AT(c, 0xefaf9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0efafc  push eax
    X86_AT(c, 0xefafcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0efafd  push ebx
    X86_AT(c, 0xefafdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0efafe  call 0xefe68
    X86_AT(c, 0xefafeu);
    push32(c, 0xefb03u); f_000efe68(c); X86_RET(c, 0xefb03u);
    X86_TICK(c, 11);
    // 0efb03  push eax
    X86_AT(c, 0xefb03u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0efb04  push 7
    X86_AT(c, 0xefb04u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efb06  call 0xe6cb0
    X86_AT(c, 0xefb06u);
    push32(c, 0xefb0bu); f_000e6cb0(c); X86_RET(c, 0xefb0bu);
    X86_TICK(c, 9);
    // 0efb0b  push 7
    X86_AT(c, 0xefb0bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efb0d  call 0xe6c68
    X86_AT(c, 0xefb0du);
    push32(c, 0xefb12u); f_000e6c68(c); X86_RET(c, 0xefb12u);
    X86_TICK(c, 14);
    // 0efb12  add esp, 0x18
    X86_AT(c, 0xefb12u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0efb15  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xefb15u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0efb19  jne 0xefb25
    X86_AT(c, 0xefb19u);
    if (x86_cc(c, 5)) { goto L_efb25; }
    X86_TICK(c, 9);
    // 0efb1b  push 0x48a4
    X86_AT(c, 0xefb1bu);
    { uint32_t v = 0x48A4u; push32(c, v); }
    // 0efb20  jmp 0xefbce
    X86_AT(c, 0xefb20u);
    goto L_efbce;
L_efb25:
    X86_TICK(c, 9);
    // 0efb25  push 0x48d0
    X86_AT(c, 0xefb25u);
    { uint32_t v = 0x48D0u; push32(c, v); }
    // 0efb2a  jmp 0xefbce
    X86_AT(c, 0xefb2au);
    goto L_efbce;
L_efb2f:
    X86_TICK(c, 10);
    // 0efb2f  movzx edx, bl
    X86_AT(c, 0xefb2fu);
    c.r[2] = g8(c, 3);
    // 0efb32  cmp edx, 0x24
    X86_AT(c, 0xefb32u);
    (void)x86_sub(c, c.r[2], 0x24u, 0, 4);
    // 0efb35  je 0xefb92
    X86_AT(c, 0xefb35u);
    if (x86_cc(c, 4)) { goto L_efb92; }
    X86_TICK(c, 9);
    // 0efb37  dec edx
    X86_AT(c, 0xefb37u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0efb38  cmp edx, 0xb
    X86_AT(c, 0xefb38u);
    (void)x86_sub(c, c.r[2], 0xBu, 0, 4);
    // 0efb3b  ja 0xefbe9
    X86_AT(c, 0xefb3bu);
    if (x86_cc(c, 7)) { goto L_efbe9; }
    X86_TICK(c, 7);
    // 0efb41  jmp dword ptr cs:[edx*4 + 0xefb49]
    X86_AT(c, 0xefb41u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xEFB49u)));
      switch (t) {
      case 0xefb79u: goto L_efb79;
      case 0xefb92u: goto L_efb92;
      case 0xefbe9u: goto L_efbe9;
      default: x86_jump(c, t); return; } }
L_efb79:
    X86_TICK(c, 25);
    // 0efb79  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xefb79u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0efb7e  lea edx, [eax + eax*4]
    X86_AT(c, 0xefb7eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0efb81  lea edx, [eax + edx*2]
    X86_AT(c, 0xefb81u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0efb84  shl edx, 5
    X86_AT(c, 0xefb84u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0efb87  sub edx, eax
    X86_AT(c, 0xefb87u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0efb89  cmp dword ptr [edx + 0xcde56], 3
    X86_AT(c, 0xefb89u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE56u))), 0x3u, 0, 4);
    // 0efb90  jne 0xefbe9
    X86_AT(c, 0xefb90u);
    if (x86_cc(c, 5)) { goto L_efbe9; }
L_efb92:
    X86_TICK(c, 11);
    // 0efb92  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xefb92u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0efb99  push 0
    X86_AT(c, 0xefb99u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0efb9b  call 0xe1944
    X86_AT(c, 0xefb9bu);
    push32(c, 0xefba0u); f_000e1944(c); X86_RET(c, 0xefba0u);
    X86_TICK(c, 13);
    // 0efba0  lea eax, [ebp - 4]
    X86_AT(c, 0xefba0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0efba3  push eax
    X86_AT(c, 0xefba3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0efba4  push ebx
    X86_AT(c, 0xefba4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0efba5  call 0xefe68
    X86_AT(c, 0xefba5u);
    push32(c, 0xefbaau); f_000efe68(c); X86_RET(c, 0xefbaau);
    X86_TICK(c, 11);
    // 0efbaa  push eax
    X86_AT(c, 0xefbaau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0efbab  push 7
    X86_AT(c, 0xefbabu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efbad  call 0xe6cb0
    X86_AT(c, 0xefbadu);
    push32(c, 0xefbb2u); f_000e6cb0(c); X86_RET(c, 0xefbb2u);
    X86_TICK(c, 9);
    // 0efbb2  push 7
    X86_AT(c, 0xefbb2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efbb4  call 0xe6c68
    X86_AT(c, 0xefbb4u);
    push32(c, 0xefbb9u); f_000e6c68(c); X86_RET(c, 0xefbb9u);
    X86_TICK(c, 14);
    // 0efbb9  add esp, 0x18
    X86_AT(c, 0xefbb9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0efbbc  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xefbbcu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0efbc0  jne 0xefbc9
    X86_AT(c, 0xefbc0u);
    if (x86_cc(c, 5)) { goto L_efbc9; }
    X86_TICK(c, 9);
    // 0efbc2  push 0x48fc
    X86_AT(c, 0xefbc2u);
    { uint32_t v = 0x48FCu; push32(c, v); }
    // 0efbc7  jmp 0xefbce
    X86_AT(c, 0xefbc7u);
    goto L_efbce;
L_efbc9:
    X86_TICK(c, 2);
    // 0efbc9  push 0x4928
    X86_AT(c, 0xefbc9u);
    { uint32_t v = 0x4928u; push32(c, v); }
L_efbce:
    X86_TICK(c, 9);
    // 0efbce  push 7
    X86_AT(c, 0xefbceu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efbd0  call 0xe5654
    X86_AT(c, 0xefbd0u);
    push32(c, 0xefbd5u); f_000e5654(c); X86_RET(c, 0xefbd5u);
    X86_TICK(c, 11);
    // 0efbd5  add esp, 8
    X86_AT(c, 0xefbd5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0efbd8  push 7
    X86_AT(c, 0xefbd8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efbda  call 0xe6c68
    X86_AT(c, 0xefbdau);
    push32(c, 0xefbdfu); f_000e6c68(c); X86_RET(c, 0xefbdfu);
    X86_TICK(c, 9);
    // 0efbdf  mov eax, 0xffffffff
    X86_AT(c, 0xefbdfu);
    c.r[0] = 0xFFFFFFFFu;
    // 0efbe4  jmp 0xefcae
    X86_AT(c, 0xefbe4u);
    goto L_efcae;
L_efbe9:
    X86_TICK(c, 7);
    // 0efbe9  cmp bl, 0x25
    X86_AT(c, 0xefbe9u);
    (void)x86_sub(c, g8(c, 3), 0x25u, 0, 1);
    // 0efbec  jb 0xefc1a
    X86_AT(c, 0xefbecu);
    if (x86_cc(c, 2)) { goto L_efc1a; }
    X86_TICK(c, 7);
    // 0efbee  cmp bl, 0x3f
    X86_AT(c, 0xefbeeu);
    (void)x86_sub(c, g8(c, 3), 0x3Fu, 0, 1);
    // 0efbf1  ja 0xefc1a
    X86_AT(c, 0xefbf1u);
    if (x86_cc(c, 7)) { goto L_efc1a; }
    X86_TICK(c, 9);
    // 0efbf3  push 3
    X86_AT(c, 0xefbf3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0efbf5  call 0xe1944
    X86_AT(c, 0xefbf5u);
    push32(c, 0xefbfau); f_000e1944(c); X86_RET(c, 0xefbfau);
    X86_TICK(c, 11);
    // 0efbfa  push 0x4954
    X86_AT(c, 0xefbfau);
    { uint32_t v = 0x4954u; push32(c, v); }
    // 0efbff  push 7
    X86_AT(c, 0xefbffu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efc01  call 0xe5654
    X86_AT(c, 0xefc01u);
    push32(c, 0xefc06u); f_000e5654(c); X86_RET(c, 0xefc06u);
    X86_TICK(c, 9);
    // 0efc06  push 7
    X86_AT(c, 0xefc06u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efc08  call 0xe6c68
    X86_AT(c, 0xefc08u);
    push32(c, 0xefc0du); f_000e6c68(c); X86_RET(c, 0xefc0du);
    X86_TICK(c, 11);
    // 0efc0d  mov eax, 0xffffffff
    X86_AT(c, 0xefc0du);
    c.r[0] = 0xFFFFFFFFu;
    // 0efc12  add esp, 0x10
    X86_AT(c, 0xefc12u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0efc15  jmp 0xefccd
    X86_AT(c, 0xefc15u);
    goto L_efccd;
L_efc1a:
    X86_TICK(c, 7);
    // 0efc1a  cmp bl, 0x22
    X86_AT(c, 0xefc1au);
    (void)x86_sub(c, g8(c, 3), 0x22u, 0, 1);
    // 0efc1d  jne 0xefc9d
    X86_AT(c, 0xefc1du);
    if (x86_cc(c, 5)) { goto L_efc9d; }
    X86_TICK(c, 9);
    // 0efc23  push 8
    X86_AT(c, 0xefc23u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0efc25  call 0xe1944
    X86_AT(c, 0xefc25u);
    push32(c, 0xefc2au); f_000e1944(c); X86_RET(c, 0xefc2au);
    X86_TICK(c, 7);
    // 0efc2a  call 0xf0c70
    X86_AT(c, 0xefc2au);
    push32(c, 0xefc2fu); f_000f0c70(c); X86_RET(c, 0xefc2fu);
    X86_TICK(c, 27);
    // 0efc2f  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xefc2fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0efc34  lea edx, [eax + eax*4]
    X86_AT(c, 0xefc34u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0efc37  lea edx, [eax + edx*2]
    X86_AT(c, 0xefc37u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0efc3a  shl edx, 5
    X86_AT(c, 0xefc3au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0efc3d  sub edx, eax
    X86_AT(c, 0xefc3du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0efc3f  add esp, 4
    X86_AT(c, 0xefc3fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0efc42  cmp dword ptr [edx + 0xcdee7], 0
    X86_AT(c, 0xefc42u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDEE7u))), 0x0u, 0, 4);
    // 0efc49  jne 0xefc79
    X86_AT(c, 0xefc49u);
    if (x86_cc(c, 5)) { goto L_efc79; }
    X86_TICK(c, 9);
    // 0efc4b  push 0x3e8
    X86_AT(c, 0xefc4bu);
    { uint32_t v = 0x3E8u; push32(c, v); }
    // 0efc50  call 0xeff44
    X86_AT(c, 0xefc50u);
    push32(c, 0xefc55u); f_000eff44(c); X86_RET(c, 0xefc55u);
    X86_TICK(c, 7);
    // 0efc55  call 0xe9010
    X86_AT(c, 0xefc55u);
    push32(c, 0xefc5au); f_000e9010(c); X86_RET(c, 0xefc5au);
    X86_TICK(c, 9);
    // 0efc5a  push 7
    X86_AT(c, 0xefc5au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efc5c  call 0xe693c
    X86_AT(c, 0xefc5cu);
    push32(c, 0xefc61u); f_000e693c(c); X86_RET(c, 0xefc61u);
    X86_TICK(c, 11);
    // 0efc61  push 0x4988
    X86_AT(c, 0xefc61u);
    { uint32_t v = 0x4988u; push32(c, v); }
    // 0efc66  push 7
    X86_AT(c, 0xefc66u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efc68  call 0xe5654
    X86_AT(c, 0xefc68u);
    push32(c, 0xefc6du); f_000e5654(c); X86_RET(c, 0xefc6du);
    X86_TICK(c, 9);
    // 0efc6d  push 7
    X86_AT(c, 0xefc6du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efc6f  call 0xe6c68
    X86_AT(c, 0xefc6fu);
    push32(c, 0xefc74u); f_000e6c68(c); X86_RET(c, 0xefc74u);
    X86_TICK(c, 9);
    // 0efc74  add esp, 0x14
    X86_AT(c, 0xefc74u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0efc77  jmp 0xefc96
    X86_AT(c, 0xefc77u);
    goto L_efc96;
L_efc79:
    X86_TICK(c, 9);
    // 0efc79  push 7
    X86_AT(c, 0xefc79u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efc7b  call 0xe693c
    X86_AT(c, 0xefc7bu);
    push32(c, 0xefc80u); f_000e693c(c); X86_RET(c, 0xefc80u);
    X86_TICK(c, 11);
    // 0efc80  push 0x49e4
    X86_AT(c, 0xefc80u);
    { uint32_t v = 0x49E4u; push32(c, v); }
    // 0efc85  push 7
    X86_AT(c, 0xefc85u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efc87  call 0xe5654
    X86_AT(c, 0xefc87u);
    push32(c, 0xefc8cu); f_000e5654(c); X86_RET(c, 0xefc8cu);
    X86_TICK(c, 9);
    // 0efc8c  push 7
    X86_AT(c, 0xefc8cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efc8e  call 0xe6c68
    X86_AT(c, 0xefc8eu);
    push32(c, 0xefc93u); f_000e6c68(c); X86_RET(c, 0xefc93u);
    X86_TICK(c, 2);
    // 0efc93  add esp, 0x10
    X86_AT(c, 0xefc93u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_efc96:
    X86_TICK(c, 9);
    // 0efc96  mov eax, 0x22
    X86_AT(c, 0xefc96u);
    c.r[0] = 0x22u;
    // 0efc9b  jmp 0xefccd
    X86_AT(c, 0xefc9bu);
    goto L_efccd;
L_efc9d:
    X86_TICK(c, 7);
    // 0efc9d  cmp bl, 0x23
    X86_AT(c, 0xefc9du);
    (void)x86_sub(c, g8(c, 3), 0x23u, 0, 1);
    // 0efca0  jne 0xefcb3
    X86_AT(c, 0xefca0u);
    if (x86_cc(c, 5)) { goto L_efcb3; }
    X86_TICK(c, 9);
    // 0efca2  push 1
    X86_AT(c, 0xefca2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0efca4  call 0xeff44
    X86_AT(c, 0xefca4u);
    push32(c, 0xefca9u); f_000eff44(c); X86_RET(c, 0xefca9u);
    X86_TICK(c, 2);
    // 0efca9  mov eax, 0x23
    X86_AT(c, 0xefca9u);
    c.r[0] = 0x23u;
L_efcae:
    X86_TICK(c, 9);
    // 0efcae  add esp, 4
    X86_AT(c, 0xefcaeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0efcb1  jmp 0xefccd
    X86_AT(c, 0xefcb1u);
    goto L_efccd;
L_efcb3:
    X86_TICK(c, 11);
    // 0efcb3  cmp edi, dword ptr [0xce690]
    X86_AT(c, 0xefcb3u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xCE690u))), 0, 4);
    // 0efcb9  jne 0xefcca
    X86_AT(c, 0xefcb9u);
    if (x86_cc(c, 5)) { goto L_efcca; }
    X86_TICK(c, 11);
    // 0efcbb  cmp esi, dword ptr [0xce694]
    X86_AT(c, 0xefcbbu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xCE694u))), 0, 4);
    // 0efcc1  jne 0xefcca
    X86_AT(c, 0xefcc1u);
    if (x86_cc(c, 5)) { goto L_efcca; }
    X86_TICK(c, 9);
    // 0efcc3  mov eax, 0x10
    X86_AT(c, 0xefcc3u);
    c.r[0] = 0x10u;
    // 0efcc8  jmp 0xefccd
    X86_AT(c, 0xefcc8u);
    goto L_efccd;
L_efcca:
    X86_TICK(c, 3);
    // 0efcca  movzx eax, bl
    X86_AT(c, 0xefccau);
    c.r[0] = g8(c, 3);
L_efccd:
    X86_TICK(c, 28);
    // 0efccd  pop edi
    X86_AT(c, 0xefccdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0efcce  pop esi
    X86_AT(c, 0xefcceu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0efccf  pop ebx
    X86_AT(c, 0xefccfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0efcd0  leave 
    X86_AT(c, 0xefcd0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0efcd1  ret 
    X86_AT(c, 0xefcd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xefa00u, "ran off the end of a function");
}
void f_000efbce(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0efbce  push 7
    X86_AT(c, 0xefbceu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efbd0  call 0xe5654
    X86_AT(c, 0xefbd0u);
    push32(c, 0xefbd5u); f_000e5654(c); X86_RET(c, 0xefbd5u);
    X86_TICK(c, 11);
    // 0efbd5  add esp, 8
    X86_AT(c, 0xefbd5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0efbd8  push 7
    X86_AT(c, 0xefbd8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efbda  call 0xe6c68
    X86_AT(c, 0xefbdau);
    push32(c, 0xefbdfu); f_000e6c68(c); X86_RET(c, 0xefbdfu);
    X86_TICK(c, 9);
    // 0efbdf  mov eax, 0xffffffff
    X86_AT(c, 0xefbdfu);
    c.r[0] = 0xFFFFFFFFu;
    // 0efbe4  jmp 0xefcae
    X86_AT(c, 0xefbe4u);
    goto L_efcae;
L_efcae:
    X86_TICK(c, 9);
    // 0efcae  add esp, 4
    X86_AT(c, 0xefcaeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0efcb1  jmp 0xefccd
    X86_AT(c, 0xefcb1u);
    goto L_efccd;
L_efccd:
    X86_TICK(c, 28);
    // 0efccd  pop edi
    X86_AT(c, 0xefccdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0efcce  pop esi
    X86_AT(c, 0xefcceu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0efccf  pop ebx
    X86_AT(c, 0xefccfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0efcd0  leave 
    X86_AT(c, 0xefcd0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0efcd1  ret 
    X86_AT(c, 0xefcd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xefbceu, "ran off the end of a function");
}
void f_000efccd(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0efccd  pop edi
    X86_AT(c, 0xefccdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0efcce  pop esi
    X86_AT(c, 0xefcceu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0efccf  pop ebx
    X86_AT(c, 0xefccfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0efcd0  leave 
    X86_AT(c, 0xefcd0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0efcd1  ret 
    X86_AT(c, 0xefcd1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xefccdu, "ran off the end of a function");
}
void f_000efcd4(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0efcd4  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xefcd4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0efcd9  lea edx, [eax + eax*4]
    X86_AT(c, 0xefcd9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0efcdc  lea edx, [eax + edx*2]
    X86_AT(c, 0xefcdcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0efcdf  shl edx, 5
    X86_AT(c, 0xefcdfu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0efce2  sub edx, eax
    X86_AT(c, 0xefce2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0efce4  mov eax, dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xefce4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)));
    // 0efcea  cmp eax, 5
    X86_AT(c, 0xefceau);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0efced  je 0xefd21
    X86_AT(c, 0xefcedu);
    if (x86_cc(c, 4)) { goto L_efd21; }
    X86_TICK(c, 7);
    // 0efcef  cmp eax, 4
    X86_AT(c, 0xefcefu);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0efcf2  je 0xefd21
    X86_AT(c, 0xefcf2u);
    if (x86_cc(c, 4)) { goto L_efd21; }
    X86_TICK(c, 9);
    // 0efcf4  push 7
    X86_AT(c, 0xefcf4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efcf6  call 0xe693c
    X86_AT(c, 0xefcf6u);
    push32(c, 0xefcfbu); f_000e693c(c); X86_RET(c, 0xefcfbu);
    X86_TICK(c, 9);
    // 0efcfb  push 3
    X86_AT(c, 0xefcfbu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0efcfd  call 0xe1944
    X86_AT(c, 0xefcfdu);
    push32(c, 0xefd02u); f_000e1944(c); X86_RET(c, 0xefd02u);
    X86_TICK(c, 9);
    // 0efd02  push 2
    X86_AT(c, 0xefd02u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0efd04  call 0xe9740
    X86_AT(c, 0xefd04u);
    push32(c, 0xefd09u); f_000e9740(c); X86_RET(c, 0xefd09u);
    X86_TICK(c, 11);
    // 0efd09  push 0x4a3c
    X86_AT(c, 0xefd09u);
    { uint32_t v = 0x4A3Cu; push32(c, v); }
    // 0efd0e  push 7
    X86_AT(c, 0xefd0eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efd10  call 0xe5654
    X86_AT(c, 0xefd10u);
    push32(c, 0xefd15u); f_000e5654(c); X86_RET(c, 0xefd15u);
    X86_TICK(c, 9);
    // 0efd15  push 7
    X86_AT(c, 0xefd15u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efd17  call 0xe6c68
    X86_AT(c, 0xefd17u);
    push32(c, 0xefd1cu); f_000e6c68(c); X86_RET(c, 0xefd1cu);
    X86_TICK(c, 9);
    // 0efd1c  add esp, 0x18
    X86_AT(c, 0xefd1cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0efd1f  jmp 0xefd3f
    X86_AT(c, 0xefd1fu);
    goto L_efd3f;
L_efd21:
    X86_TICK(c, 9);
    // 0efd21  push 5
    X86_AT(c, 0xefd21u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0efd23  call 0xe1944
    X86_AT(c, 0xefd23u);
    push32(c, 0xefd28u); f_000e1944(c); X86_RET(c, 0xefd28u);
    X86_TICK(c, 9);
    // 0efd28  push 5
    X86_AT(c, 0xefd28u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0efd2a  call 0xe9740
    X86_AT(c, 0xefd2au);
    push32(c, 0xefd2fu); f_000e9740(c); X86_RET(c, 0xefd2fu);
    X86_TICK(c, 8);
    // 0efd2f  sub eax, eax
    X86_AT(c, 0xefd2fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0efd31  mov dword ptr [0xd4a68], eax
    X86_AT(c, 0xefd31u);
    wr32((c.sbase[3] + (uint32_t)(0xD4A68u)), c.r[0]);
    // 0efd36  mov word ptr [0xd4a48], ax
    X86_AT(c, 0xefd36u);
    wr16((c.sbase[3] + (uint32_t)(0xD4A48u)), (c.r[0] & 0xFFFFu));
    // 0efd3c  add esp, 8
    X86_AT(c, 0xefd3cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_efd3f:
    X86_TICK(c, 10);
    // 0efd3f  ret 
    X86_AT(c, 0xefd3fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xefcd4u, "ran off the end of a function");
}
void f_000efd94(X86Cpu& c) {
    X86_TICK(c, 48);
    // 0efd94  push ebp
    X86_AT(c, 0xefd94u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0efd95  mov ebp, esp
    X86_AT(c, 0xefd95u);
    c.r[5] = c.r[4];
    // 0efd97  push esi
    X86_AT(c, 0xefd97u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0efd98  push edi
    X86_AT(c, 0xefd98u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0efd99  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xefd99u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0efd9c  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xefd9cu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0efd9f  mov ecx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xefd9fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0efda2  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xefda2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0efda7  lea edx, [eax + eax*4]
    X86_AT(c, 0xefda7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0efdaa  lea edx, [eax + edx*2]
    X86_AT(c, 0xefdaau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0efdad  shl edx, 5
    X86_AT(c, 0xefdadu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0efdb0  sub edx, eax
    X86_AT(c, 0xefdb0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0efdb2  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xefdb2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0efdb8  cmp eax, dword ptr [edi*4 + 0xce408]
    X86_AT(c, 0xefdb8u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u))), 0, 4);
    // 0efdbf  jge 0xefdc8
    X86_AT(c, 0xefdbfu);
    if (x86_cc(c, 13)) { goto L_efdc8; }
    X86_TICK(c, 9);
    // 0efdc1  mov eax, 0xffffffff
    X86_AT(c, 0xefdc1u);
    c.r[0] = 0xFFFFFFFFu;
    // 0efdc6  jmp 0xefdcd
    X86_AT(c, 0xefdc6u);
    goto L_efdcd;
L_efdc8:
    X86_TICK(c, 2);
    // 0efdc8  mov eax, 1
    X86_AT(c, 0xefdc8u);
    c.r[0] = 0x1u;
L_efdcd:
    X86_TICK(c, 30);
    // 0efdcd  mov dword ptr [esi], eax
    X86_AT(c, 0xefdcdu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0efdcf  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xefdcfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0efdd4  lea edx, [eax + eax*4]
    X86_AT(c, 0xefdd4u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0efdd7  lea edx, [eax + edx*2]
    X86_AT(c, 0xefdd7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0efdda  shl edx, 5
    X86_AT(c, 0xefddau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0efddd  sub edx, eax
    X86_AT(c, 0xefdddu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0efddf  mov eax, dword ptr [edx + 0xcdf6b]
    X86_AT(c, 0xefddfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Bu)));
    // 0efde5  cmp eax, dword ptr [edi*4 + 0xce408]
    X86_AT(c, 0xefde5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u))), 0, 4);
    // 0efdec  jne 0xefdf4
    X86_AT(c, 0xefdecu);
    if (x86_cc(c, 5)) { goto L_efdf4; }
    X86_TICK(c, 2);
    // 0efdee  mov dword ptr [esi], 0
    X86_AT(c, 0xefdeeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), 0x0u);
L_efdf4:
    X86_TICK(c, 28);
    // 0efdf4  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xefdf4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0efdf9  lea edx, [eax + eax*4]
    X86_AT(c, 0xefdf9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0efdfc  lea edx, [eax + edx*2]
    X86_AT(c, 0xefdfcu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0efdff  shl edx, 5
    X86_AT(c, 0xefdffu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0efe02  sub edx, eax
    X86_AT(c, 0xefe02u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0efe04  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xefe04u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0efe0a  cmp eax, dword ptr [edi*4 + 0xce488]
    X86_AT(c, 0xefe0au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u))), 0, 4);
    // 0efe11  jge 0xefe1a
    X86_AT(c, 0xefe11u);
    if (x86_cc(c, 13)) { goto L_efe1a; }
    X86_TICK(c, 9);
    // 0efe13  mov eax, 0xffffffff
    X86_AT(c, 0xefe13u);
    c.r[0] = 0xFFFFFFFFu;
    // 0efe18  jmp 0xefe1f
    X86_AT(c, 0xefe18u);
    goto L_efe1f;
L_efe1a:
    X86_TICK(c, 2);
    // 0efe1a  mov eax, 1
    X86_AT(c, 0xefe1au);
    c.r[0] = 0x1u;
L_efe1f:
    X86_TICK(c, 30);
    // 0efe1f  mov dword ptr [ecx], eax
    X86_AT(c, 0xefe1fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 0efe21  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xefe21u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0efe26  lea edx, [eax + eax*4]
    X86_AT(c, 0xefe26u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0efe29  lea edx, [eax + edx*2]
    X86_AT(c, 0xefe29u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0efe2c  shl edx, 5
    X86_AT(c, 0xefe2cu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0efe2f  sub edx, eax
    X86_AT(c, 0xefe2fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0efe31  mov eax, dword ptr [edx + 0xcdf6f]
    X86_AT(c, 0xefe31u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF6Fu)));
    // 0efe37  cmp eax, dword ptr [edi*4 + 0xce488]
    X86_AT(c, 0xefe37u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u))), 0, 4);
    // 0efe3e  jne 0xefe46
    X86_AT(c, 0xefe3eu);
    if (x86_cc(c, 5)) { goto L_efe46; }
    X86_TICK(c, 2);
    // 0efe40  mov dword ptr [ecx], 0
    X86_AT(c, 0xefe40u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), 0x0u);
L_efe46:
    X86_TICK(c, 56);
    // 0efe46  mov eax, dword ptr [esi]
    X86_AT(c, 0xefe46u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0efe48  add eax, dword ptr [edi*4 + 0xce408]
    X86_AT(c, 0xefe48u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE408u))), 0, 4); }
    // 0efe4f  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xefe4fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0efe52  mov dword ptr [edx], eax
    X86_AT(c, 0xefe52u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0efe54  mov eax, dword ptr [ecx]
    X86_AT(c, 0xefe54u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1])));
    // 0efe56  add eax, dword ptr [edi*4 + 0xce488]
    X86_AT(c, 0xefe56u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xCE488u))), 0, 4); }
    // 0efe5d  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xefe5du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0efe60  mov dword ptr [edx], eax
    X86_AT(c, 0xefe60u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0efe62  pop edi
    X86_AT(c, 0xefe62u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0efe63  pop esi
    X86_AT(c, 0xefe63u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0efe64  leave 
    X86_AT(c, 0xefe64u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0efe65  ret 
    X86_AT(c, 0xefe65u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xefd94u, "ran off the end of a function");
}
void f_000efe68(X86Cpu& c) {
    X86_TICK(c, 38);
    // 0efe68  push ebp
    X86_AT(c, 0xefe68u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0efe69  mov ebp, esp
    X86_AT(c, 0xefe69u);
    c.r[5] = c.r[4];
    // 0efe6b  push eax
    X86_AT(c, 0xefe6bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0efe6c  push esi
    X86_AT(c, 0xefe6cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0efe6d  push edi
    X86_AT(c, 0xefe6du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0efe6e  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xefe6eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0efe71  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xefe71u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0efe75  mov dword ptr [edi], 0
    X86_AT(c, 0xefe75u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0efe7b  lea eax, [ebp - 1]
    X86_AT(c, 0xefe7bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0efe7e  push eax
    X86_AT(c, 0xefe7eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0efe7f  push dword ptr [ebp + 8]
    X86_AT(c, 0xefe7fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0efe82  push 0x39
    X86_AT(c, 0xefe82u);
    { uint32_t v = 0x39u; push32(c, v); }
    // 0efe84  push 0xd19ac
    X86_AT(c, 0xefe84u);
    { uint32_t v = 0xD19ACu; push32(c, v); }
    // 0efe89  call 0xe53e0
    X86_AT(c, 0xefe89u);
    push32(c, 0xefe8eu); f_000e53e0(c); X86_RET(c, 0xefe8eu);
    X86_TICK(c, 12);
    // 0efe8e  xchg esi, eax
    X86_AT(c, 0xefe8eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0efe8f  add esp, 0x10
    X86_AT(c, 0xefe8fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0efe92  and esi, esi
    X86_AT(c, 0xefe92u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0efe94  jne 0xefe9d
    X86_AT(c, 0xefe94u);
    if (x86_cc(c, 5)) { goto L_efe9d; }
    X86_TICK(c, 9);
    // 0efe96  mov eax, 0x4ab4
    X86_AT(c, 0xefe96u);
    c.r[0] = 0x4AB4u;
    // 0efe9b  jmp 0xefeab
    X86_AT(c, 0xefe9bu);
    goto L_efeab;
L_efe9d:
    X86_TICK(c, 12);
    // 0efe9d  cmp byte ptr [ebp - 1], 1
    X86_AT(c, 0xefe9du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x1u, 0, 1);
    // 0efea1  jne 0xefea9
    X86_AT(c, 0xefea1u);
    if (x86_cc(c, 5)) { goto L_efea9; }
    X86_TICK(c, 2);
    // 0efea3  mov dword ptr [edi], 1
    X86_AT(c, 0xefea3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), 0x1u);
L_efea9:
    X86_TICK(c, 2);
    // 0efea9  mov eax, esi
    X86_AT(c, 0xefea9u);
    c.r[0] = c.r[6];
L_efeab:
    X86_TICK(c, 24);
    // 0efeab  pop edi
    X86_AT(c, 0xefeabu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0efeac  pop esi
    X86_AT(c, 0xefeacu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0efead  leave 
    X86_AT(c, 0xefeadu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0efeae  ret 
    X86_AT(c, 0xefeaeu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xefe68u, "ran off the end of a function");
}
void f_000efeb0(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0efeb0  push ebp
    X86_AT(c, 0xefeb0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0efeb1  mov ebp, esp
    X86_AT(c, 0xefeb1u);
    c.r[5] = c.r[4];
    // 0efeb3  push ebx
    X86_AT(c, 0xefeb3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0efeb4  push edi
    X86_AT(c, 0xefeb4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0efeb5  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xefeb5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0efeb8  push 0x4abc
    X86_AT(c, 0xefeb8u);
    { uint32_t v = 0x4ABCu; push32(c, v); }
    // 0efebd  call 0xe75f8
    X86_AT(c, 0xefebdu);
    push32(c, 0xefec2u); f_000e75f8(c); X86_RET(c, 0xefec2u);
    X86_TICK(c, 2);
    // 0efec2  add esp, 4
    X86_AT(c, 0xefec2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_efec5:
    X86_TICK(c, 9);
    // 0efec5  push edi
    X86_AT(c, 0xefec5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0efec6  call 0xe4b60
    X86_AT(c, 0xefec6u);
    push32(c, 0xefecbu); f_000e4b60(c); X86_RET(c, 0xefecbu);
    X86_TICK(c, 12);
    // 0efecb  add esp, 4
    X86_AT(c, 0xefecbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0efece  xchg ebx, eax
    X86_AT(c, 0xefeceu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0efecf  and bl, bl
    X86_AT(c, 0xefecfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0efed1  je 0xefec5
    X86_AT(c, 0xefed1u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xefec5u); goto L_efec5; }
    X86_TICK(c, 9);
    // 0efed3  push 2
    X86_AT(c, 0xefed3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0efed5  call 0xe6c68
    X86_AT(c, 0xefed5u);
    push32(c, 0xefedau); f_000e6c68(c); X86_RET(c, 0xefedau);
    X86_TICK(c, 9);
    // 0efeda  push edi
    X86_AT(c, 0xefedau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0efedb  call 0xe693c
    X86_AT(c, 0xefedbu);
    push32(c, 0xefee0u); f_000e693c(c); X86_RET(c, 0xefee0u);
    X86_TICK(c, 9);
    // 0efee0  add esp, 8
    X86_AT(c, 0xefee0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0efee3  cmp bl, 1
    X86_AT(c, 0xefee3u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0efee6  jne 0xefeef
    X86_AT(c, 0xefee6u);
    if (x86_cc(c, 5)) { goto L_efeef; }
    X86_TICK(c, 9);
    // 0efee8  mov eax, 1
    X86_AT(c, 0xefee8u);
    c.r[0] = 0x1u;
    // 0efeed  jmp 0xefef1
    X86_AT(c, 0xefeedu);
    goto L_efef1;
L_efeef:
    X86_TICK(c, 2);
    // 0efeef  sub eax, eax
    X86_AT(c, 0xefeefu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_efef1:
    X86_TICK(c, 24);
    // 0efef1  pop edi
    X86_AT(c, 0xefef1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0efef2  pop ebx
    X86_AT(c, 0xefef2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0efef3  leave 
    X86_AT(c, 0xefef3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0efef4  ret 
    X86_AT(c, 0xefef4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xefeb0u, "ran off the end of a function");
}
void f_000efef8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0efef8  call 0xeb990
    X86_AT(c, 0xefef8u);
    push32(c, 0xefefdu); f_000eb990(c); X86_RET(c, 0xefefdu);
    X86_TICK(c, 12);
    // 0efefd  cmp dword ptr [0x7a6b4], 0
    X86_AT(c, 0xefefdu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x7A6B4u))), 0x0u, 0, 4);
    // 0eff04  jne 0xeff22
    X86_AT(c, 0xeff04u);
    if (x86_cc(c, 5)) { goto L_eff22; }
    X86_TICK(c, 22);
    // 0eff06  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xeff06u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0eff0b  lea edx, [eax + eax*4]
    X86_AT(c, 0xeff0bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eff0e  lea edx, [eax + edx*2]
    X86_AT(c, 0xeff0eu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eff11  shl edx, 5
    X86_AT(c, 0xeff11u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eff14  sub edx, eax
    X86_AT(c, 0xeff14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eff16  mov dword ptr [edx + 0xcdf83], 0
    X86_AT(c, 0xeff16u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF83u)), 0x0u);
    // 0eff20  jmp 0xeff3c
    X86_AT(c, 0xeff20u);
    goto L_eff3c;
L_eff22:
    X86_TICK(c, 15);
    // 0eff22  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xeff22u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0eff27  lea edx, [eax + eax*4]
    X86_AT(c, 0xeff27u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eff2a  lea edx, [eax + edx*2]
    X86_AT(c, 0xeff2au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eff2d  shl edx, 5
    X86_AT(c, 0xeff2du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eff30  sub edx, eax
    X86_AT(c, 0xeff30u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eff32  mov dword ptr [edx + 0xcdf83], 0xffffffff
    X86_AT(c, 0xeff32u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF83u)), 0xFFFFFFFFu);
L_eff3c:
    X86_TICK(c, 7);
    // 0eff3c  call 0xeb174
    X86_AT(c, 0xeff3cu);
    push32(c, 0xeff41u); f_000eb174(c); X86_RET(c, 0xeff41u);
    X86_TICK(c, 10);
    // 0eff41  ret 
    X86_AT(c, 0xeff41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xefef8u, "ran off the end of a function");
}
void f_000eff44(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0eff44  push ebp
    X86_AT(c, 0xeff44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0eff45  mov ebp, esp
    X86_AT(c, 0xeff45u);
    c.r[5] = c.r[4];
    // 0eff47  push edi
    X86_AT(c, 0xeff47u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eff48  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xeff48u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0eff4b  call 0xef6a4
    X86_AT(c, 0xeff4bu);
    push32(c, 0xeff50u); f_000ef6a4(c); X86_RET(c, 0xeff50u);
    X86_TICK(c, 9);
    // 0eff50  push 8
    X86_AT(c, 0xeff50u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0eff52  call 0xe1944
    X86_AT(c, 0xeff52u);
    push32(c, 0xeff57u); f_000e1944(c); X86_RET(c, 0xeff57u);
    X86_TICK(c, 7);
    // 0eff57  call 0xef6a4
    X86_AT(c, 0xeff57u);
    push32(c, 0xeff5cu); f_000ef6a4(c); X86_RET(c, 0xeff5cu);
    X86_TICK(c, 9);
    // 0eff5c  add esp, 4
    X86_AT(c, 0xeff5cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0eff5f  and edi, edi
    X86_AT(c, 0xeff5fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0eff61  jl 0xeff82
    X86_AT(c, 0xeff61u);
    if (x86_cc(c, 12)) { goto L_eff82; }
    X86_TICK(c, 32);
    // 0eff63  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xeff63u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0eff68  lea edx, [eax + eax*4]
    X86_AT(c, 0xeff68u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eff6b  lea edx, [eax + edx*2]
    X86_AT(c, 0xeff6bu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eff6e  shl edx, 5
    X86_AT(c, 0xeff6eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0eff71  sub edx, eax
    X86_AT(c, 0xeff71u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eff73  sub dword ptr [edx + 0xcde81], edi
    X86_AT(c, 0xeff73u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0eff79  cmp dword ptr [edx + 0xcde81], 0
    X86_AT(c, 0xeff79u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u))), 0x0u, 0, 4);
    // 0eff80  jge 0xeffb5
    X86_AT(c, 0xeff80u);
    if (x86_cc(c, 13)) { goto L_effb5; }
L_eff82:
    X86_TICK(c, 12);
    // 0eff82  cmp dword ptr [0xcde44], 1
    X86_AT(c, 0xeff82u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xCDE44u))), 0x1u, 0, 4);
    // 0eff89  jne 0xeff92
    X86_AT(c, 0xeff89u);
    if (x86_cc(c, 5)) { goto L_eff92; }
    X86_TICK(c, 7);
    // 0eff8b  call 0xf0cc4
    X86_AT(c, 0xeff8bu);
    push32(c, 0xeff90u); f_000f0cc4(c); X86_RET(c, 0xeff90u);
    X86_TICK(c, 7);
    // 0eff90  jmp 0xeffb5
    X86_AT(c, 0xeff90u);
    goto L_effb5;
L_eff92:
    X86_TICK(c, 22);
    // 0eff92  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xeff92u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0eff97  lea edx, [eax + eax*4]
    X86_AT(c, 0xeff97u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0eff9a  lea edx, [eax + edx*2]
    X86_AT(c, 0xeff9au);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0eff9d  shl edx, 5
    X86_AT(c, 0xeff9du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0effa0  sub edx, eax
    X86_AT(c, 0xeffa0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0effa2  mov dword ptr [edx + 0xcde81], 0
    X86_AT(c, 0xeffa2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE81u)), 0x0u);
    // 0effac  call 0xe9010
    X86_AT(c, 0xeffacu);
    push32(c, 0xeffb1u); f_000e9010(c); X86_RET(c, 0xeffb1u);
    X86_TICK(c, 9);
    // 0effb1  sub eax, eax
    X86_AT(c, 0xeffb1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0effb3  jmp 0xeffbf
    X86_AT(c, 0xeffb3u);
    goto L_effbf;
L_effb5:
    X86_TICK(c, 7);
    // 0effb5  call 0xe9010
    X86_AT(c, 0xeffb5u);
    push32(c, 0xeffbau); f_000e9010(c); X86_RET(c, 0xeffbau);
    X86_TICK(c, 2);
    // 0effba  mov eax, 0xffffffff
    X86_AT(c, 0xeffbau);
    c.r[0] = 0xFFFFFFFFu;
L_effbf:
    X86_TICK(c, 20);
    // 0effbf  pop edi
    X86_AT(c, 0xeffbfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0effc0  leave 
    X86_AT(c, 0xeffc0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0effc1  ret 
    X86_AT(c, 0xeffc1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeff44u, "ran off the end of a function");
}
void f_000effc4(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0effc4  push ebp
    X86_AT(c, 0xeffc4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0effc5  mov ebp, esp
    X86_AT(c, 0xeffc5u);
    c.r[5] = c.r[4];
    // 0effc7  push eax
    X86_AT(c, 0xeffc7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0effc8  sub eax, eax
    X86_AT(c, 0xeffc8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0effca  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xeffcau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0effcd  mov edx, dword ptr [0xceca0]
    X86_AT(c, 0xeffcdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0effd3  lea ecx, [edx + edx*4]
    X86_AT(c, 0xeffd3u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0effd6  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xeffd6u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0effd9  shl ecx, 5
    X86_AT(c, 0xeffd9u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0effdc  sub ecx, edx
    X86_AT(c, 0xeffdcu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0effde  cmp eax, dword ptr [ecx + 0xcde81]
    X86_AT(c, 0xeffdeu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE81u))), 0, 4);
    // 0effe4  jl 0xefff5
    X86_AT(c, 0xeffe4u);
    if (x86_cc(c, 12)) { goto L_efff5; }
    X86_TICK(c, 7);
    // 0effe6  call 0xe9010
    X86_AT(c, 0xeffe6u);
    push32(c, 0xeffebu); f_000e9010(c); X86_RET(c, 0xeffebu);
    X86_TICK(c, 7);
    // 0effeb  call 0xf0a80
    X86_AT(c, 0xeffebu);
    push32(c, 0xefff0u); f_000f0a80(c); X86_RET(c, 0xefff0u);
    X86_TICK(c, 2);
    // 0efff0  mov eax, 0xffffffff
    X86_AT(c, 0xefff0u);
    c.r[0] = 0xFFFFFFFFu;
L_efff5:
    X86_TICK(c, 16);
    // 0efff5  leave 
    X86_AT(c, 0xefff5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0efff6  ret 
    X86_AT(c, 0xefff6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeffc4u, "ran off the end of a function");
}
void f_000efff8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0efff8  push 7
    X86_AT(c, 0xefff8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0efffa  call 0xe693c
    X86_AT(c, 0xefffau);
    push32(c, 0xeffffu); f_000e693c(c); X86_RET(c, 0xeffffu);
    X86_TICK(c, 11);
    // 0effff  push 0x4b08
    X86_AT(c, 0xeffffu);
    { uint32_t v = 0x4B08u; push32(c, v); }
    // 0f0004  push 7
    X86_AT(c, 0xf0004u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0006  call 0xe5654
    X86_AT(c, 0xf0006u);
    push32(c, 0xf000bu); f_000e5654(c); X86_RET(c, 0xf000bu);
    X86_TICK(c, 9);
    // 0f000b  push 7
    X86_AT(c, 0xf000bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f000d  call 0xe6c68
    X86_AT(c, 0xf000du);
    push32(c, 0xf0012u); f_000e6c68(c); X86_RET(c, 0xf0012u);
    X86_TICK(c, 7);
    // 0f0012  call 0xe8470
    X86_AT(c, 0xf0012u);
    push32(c, 0xf0017u); f_000e8470(c); X86_RET(c, 0xf0017u);
    X86_TICK(c, 27);
    // 0f0017  push 0xa
    X86_AT(c, 0xf0017u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f0019  push 0xf
    X86_AT(c, 0xf0019u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f001b  push 0xf
    X86_AT(c, 0xf001bu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f001d  push 0x12
    X86_AT(c, 0xf001du);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0f001f  push 0x26
    X86_AT(c, 0xf001fu);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f0021  push 0x140
    X86_AT(c, 0xf0021u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0f0026  push 0x140
    X86_AT(c, 0xf0026u);
    { uint32_t v = 0x140u; push32(c, v); }
    // 0f002b  push 0x3f
    X86_AT(c, 0xf002bu);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0f002d  push 0x1a
    X86_AT(c, 0xf002du);
    { uint32_t v = 0x1Au; push32(c, v); }
    // 0f002f  push 6
    X86_AT(c, 0xf002fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0031  call 0xe6858
    X86_AT(c, 0xf0031u);
    push32(c, 0xf0036u); f_000e6858(c); X86_RET(c, 0xf0036u);
    X86_TICK(c, 9);
    // 0f0036  push 6
    X86_AT(c, 0xf0036u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0038  call 0xe693c
    X86_AT(c, 0xf0038u);
    push32(c, 0xf003du); f_000e693c(c); X86_RET(c, 0xf003du);
    X86_TICK(c, 11);
    // 0f003d  add esp, 0x3c
    X86_AT(c, 0xf003du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f0040  push 6
    X86_AT(c, 0xf0040u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0042  call 0xe699c
    X86_AT(c, 0xf0042u);
    push32(c, 0xf0047u); f_000e699c(c); X86_RET(c, 0xf0047u);
    X86_TICK(c, 13);
    // 0f0047  push 0
    X86_AT(c, 0xf0047u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f0049  push 2
    X86_AT(c, 0xf0049u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f004b  push 6
    X86_AT(c, 0xf004bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f004d  call 0xe7260
    X86_AT(c, 0xf004du);
    push32(c, 0xf0052u); f_000e7260(c); X86_RET(c, 0xf0052u);
    X86_TICK(c, 11);
    // 0f0052  push 0xd
    X86_AT(c, 0xf0052u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f0054  push 6
    X86_AT(c, 0xf0054u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0056  call 0xe74d8
    X86_AT(c, 0xf0056u);
    push32(c, 0xf005bu); f_000e74d8(c); X86_RET(c, 0xf005bu);
    X86_TICK(c, 11);
    // 0f005b  push 0x4b3c
    X86_AT(c, 0xf005bu);
    { uint32_t v = 0x4B3Cu; push32(c, v); }
    // 0f0060  push 6
    X86_AT(c, 0xf0060u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0062  call 0xe6cb0
    X86_AT(c, 0xf0062u);
    push32(c, 0xf0067u); f_000e6cb0(c); X86_RET(c, 0xf0067u);
    X86_TICK(c, 11);
    // 0f0067  push 0xb
    X86_AT(c, 0xf0067u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0f0069  push 6
    X86_AT(c, 0xf0069u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f006b  call 0xe74d8
    X86_AT(c, 0xf006bu);
    push32(c, 0xf0070u); f_000e74d8(c); X86_RET(c, 0xf0070u);
    X86_TICK(c, 11);
    // 0f0070  push 0x4b48
    X86_AT(c, 0xf0070u);
    { uint32_t v = 0x4B48u; push32(c, v); }
    // 0f0075  push 6
    X86_AT(c, 0xf0075u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0077  call 0xe5654
    X86_AT(c, 0xf0077u);
    push32(c, 0xf007cu); f_000e5654(c); X86_RET(c, 0xf007cu);
    X86_TICK(c, 11);
    // 0f007c  push 0xd
    X86_AT(c, 0xf007cu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0f007e  push 6
    X86_AT(c, 0xf007eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0080  call 0xe74d8
    X86_AT(c, 0xf0080u);
    push32(c, 0xf0085u); f_000e74d8(c); X86_RET(c, 0xf0085u);
    X86_TICK(c, 11);
    // 0f0085  push 0x4b74
    X86_AT(c, 0xf0085u);
    { uint32_t v = 0x4B74u; push32(c, v); }
    // 0f008a  push 6
    X86_AT(c, 0xf008au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f008c  call 0xe6cb0
    X86_AT(c, 0xf008cu);
    push32(c, 0xf0091u); f_000e6cb0(c); X86_RET(c, 0xf0091u);
    X86_TICK(c, 13);
    // 0f0091  add esp, 0x40
    X86_AT(c, 0xf0091u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f0094  push 0xf
    X86_AT(c, 0xf0094u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0f0096  push 6
    X86_AT(c, 0xf0096u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0098  call 0xe74d8
    X86_AT(c, 0xf0098u);
    push32(c, 0xf009du); f_000e74d8(c); X86_RET(c, 0xf009du);
    X86_TICK(c, 9);
    // 0f009d  push 6
    X86_AT(c, 0xf009du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f009f  call 0xe693c
    X86_AT(c, 0xf009fu);
    push32(c, 0xf00a4u); f_000e693c(c); X86_RET(c, 0xf00a4u);
    X86_TICK(c, 9);
    // 0f00a4  add esp, 0xc
    X86_AT(c, 0xf00a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0f00a7  call 0xf00e8
    X86_AT(c, 0xf00a7u);
    push32(c, 0xf00acu); f_000f00e8(c); X86_RET(c, 0xf00acu);
    X86_TICK(c, 11);
    // 0f00ac  push 0
    X86_AT(c, 0xf00acu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f00ae  push 6
    X86_AT(c, 0xf00aeu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f00b0  call 0xe6b70
    X86_AT(c, 0xf00b0u);
    push32(c, 0xf00b5u); f_000e6b70(c); X86_RET(c, 0xf00b5u);
    X86_TICK(c, 7);
    // 0f00b5  call 0xe8470
    X86_AT(c, 0xf00b5u);
    push32(c, 0xf00bau); f_000e8470(c); X86_RET(c, 0xf00bau);
    X86_TICK(c, 26);
    // 0f00ba  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf00bau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f00bf  lea edx, [eax + eax*4]
    X86_AT(c, 0xf00bfu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f00c2  lea edx, [eax + edx*2]
    X86_AT(c, 0xf00c2u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f00c5  shl edx, 5
    X86_AT(c, 0xf00c5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f00c8  sub edx, eax
    X86_AT(c, 0xf00c8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f00ca  add esp, 8
    X86_AT(c, 0xf00cau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f00cd  mov eax, dword ptr [edx + 0xcdf57]
    X86_AT(c, 0xf00cdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDF57u)));
    // 0f00d3  cmp eax, 5
    X86_AT(c, 0xf00d3u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0f00d6  je 0xf00e7
    X86_AT(c, 0xf00d6u);
    if (x86_cc(c, 4)) { goto L_f00e7; }
    X86_TICK(c, 7);
    // 0f00d8  cmp eax, 4
    X86_AT(c, 0xf00d8u);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0f00db  je 0xf00e7
    X86_AT(c, 0xf00dbu);
    if (x86_cc(c, 4)) { goto L_f00e7; }
    X86_TICK(c, 9);
    // 0f00dd  push 1
    X86_AT(c, 0xf00ddu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f00df  call 0xe1a9c
    X86_AT(c, 0xf00dfu);
    push32(c, 0xf00e4u); f_000e1a9c(c); X86_RET(c, 0xf00e4u);
    X86_TICK(c, 2);
    // 0f00e4  add esp, 4
    X86_AT(c, 0xf00e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_f00e7:
    X86_TICK(c, 10);
    // 0f00e7  ret 
    X86_AT(c, 0xf00e7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xefff8u, "ran off the end of a function");
}
void f_000f00e8(X86Cpu& c) {
    X86_TICK(c, 42);
    // 0f00e8  push ebp
    X86_AT(c, 0xf00e8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0f00e9  mov ebp, esp
    X86_AT(c, 0xf00e9u);
    c.r[5] = c.r[4];
    // 0f00eb  sub esp, 0xc
    X86_AT(c, 0xf00ebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0f00ee  push ebx
    X86_AT(c, 0xf00eeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0f00ef  push esi
    X86_AT(c, 0xf00efu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0f00f0  push edi
    X86_AT(c, 0xf00f0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f00f1  mov byte ptr [ebp - 6], 0
    X86_AT(c, 0xf00f1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), 0x0u);
    // 0f00f5  mov byte ptr [ebp - 5], 0
    X86_AT(c, 0xf00f5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), 0x0u);
    // 0f00f9  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xf00f9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0f0100  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf0100u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0105  lea edx, [eax + eax*4]
    X86_AT(c, 0xf0105u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0108  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0108u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f010b  shl edx, 5
    X86_AT(c, 0xf010bu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f010e  sub edx, eax
    X86_AT(c, 0xf010eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f0110  lea ebx, [edx*1 + 0xcde4c]
    X86_AT(c, 0xf0110u);
    c.r[3] = (uint32_t)(c.r[2] + 0xCDE4Cu);
    // 0f0117  push 2
    X86_AT(c, 0xf0117u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f0119  call 0xe6c68
    X86_AT(c, 0xf0119u);
    push32(c, 0xf011eu); f_000e6c68(c); X86_RET(c, 0xf011eu);
    X86_TICK(c, 9);
    // 0f011e  push 6
    X86_AT(c, 0xf011eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0120  call 0xe693c
    X86_AT(c, 0xf0120u);
    push32(c, 0xf0125u); f_000e693c(c); X86_RET(c, 0xf0125u);
    X86_TICK(c, 17);
    // 0f0125  mov edi, 2
    X86_AT(c, 0xf0125u);
    c.r[7] = 0x2u;
    // 0f012a  push edi
    X86_AT(c, 0xf012au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f012b  mov eax, 2
    X86_AT(c, 0xf012bu);
    c.r[0] = 0x2u;
    // 0f0130  push eax
    X86_AT(c, 0xf0130u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0131  push 6
    X86_AT(c, 0xf0131u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0133  call 0xe7260
    X86_AT(c, 0xf0133u);
    push32(c, 0xf0138u); f_000e7260(c); X86_RET(c, 0xf0138u);
    X86_TICK(c, 11);
    // 0f0138  push 0x4b7c
    X86_AT(c, 0xf0138u);
    { uint32_t v = 0x4B7Cu; push32(c, v); }
    // 0f013d  push 6
    X86_AT(c, 0xf013du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f013f  call 0xe5654
    X86_AT(c, 0xf013fu);
    push32(c, 0xf0144u); f_000e5654(c); X86_RET(c, 0xf0144u);
    X86_TICK(c, 13);
    // 0f0144  lea eax, [ebx + 1]
    X86_AT(c, 0xf0144u);
    c.r[0] = (uint32_t)(c.r[3] + 0x1u);
    // 0f0147  push eax
    X86_AT(c, 0xf0147u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0148  push 6
    X86_AT(c, 0xf0148u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f014a  call 0xe70ec
    X86_AT(c, 0xf014au);
    push32(c, 0xf014fu); f_000e70ec(c); X86_RET(c, 0xf014fu);
    X86_TICK(c, 9);
    // 0f014f  push 6
    X86_AT(c, 0xf014fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0151  call 0xe693c
    X86_AT(c, 0xf0151u);
    push32(c, 0xf0156u); f_000e693c(c); X86_RET(c, 0xf0156u);
    X86_TICK(c, 15);
    // 0f0156  mov edi, 3
    X86_AT(c, 0xf0156u);
    c.r[7] = 0x3u;
    // 0f015b  push edi
    X86_AT(c, 0xf015bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f015c  push 0
    X86_AT(c, 0xf015cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f015e  push 6
    X86_AT(c, 0xf015eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0160  call 0xe7260
    X86_AT(c, 0xf0160u);
    push32(c, 0xf0165u); f_000e7260(c); X86_RET(c, 0xf0165u);
    X86_TICK(c, 11);
    // 0f0165  push 0x4b94
    X86_AT(c, 0xf0165u);
    { uint32_t v = 0x4B94u; push32(c, v); }
    // 0f016a  push 6
    X86_AT(c, 0xf016au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f016c  call 0xe5654
    X86_AT(c, 0xf016cu);
    push32(c, 0xf0171u); f_000e5654(c); X86_RET(c, 0xf0171u);
    X86_TICK(c, 11);
    // 0f0171  add esp, 0x3c
    X86_AT(c, 0xf0171u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f0174  push 6
    X86_AT(c, 0xf0174u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0176  call 0xe6c68
    X86_AT(c, 0xf0176u);
    push32(c, 0xf017bu); f_000e6c68(c); X86_RET(c, 0xf017bu);
    X86_TICK(c, 15);
    // 0f017b  inc edi
    X86_AT(c, 0xf017bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f017c  push edi
    X86_AT(c, 0xf017cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f017d  push 1
    X86_AT(c, 0xf017du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f017f  push 6
    X86_AT(c, 0xf017fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0181  call 0xe7260
    X86_AT(c, 0xf0181u);
    push32(c, 0xf0186u); f_000e7260(c); X86_RET(c, 0xf0186u);
    X86_TICK(c, 11);
    // 0f0186  push 0x4bc0
    X86_AT(c, 0xf0186u);
    { uint32_t v = 0x4BC0u; push32(c, v); }
    // 0f018b  push 6
    X86_AT(c, 0xf018bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f018d  call 0xe5654
    X86_AT(c, 0xf018du);
    push32(c, 0xf0192u); f_000e5654(c); X86_RET(c, 0xf0192u);
    X86_TICK(c, 63);
    // 0f0192  push 3
    X86_AT(c, 0xf0192u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f0194  mov eax, dword ptr [ebx + 0x3d]
    X86_AT(c, 0xf0194u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x3Du)));
    // 0f0197  cdq 
    X86_AT(c, 0xf0197u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0f0198  mov ecx, 0x64
    X86_AT(c, 0xf0198u);
    c.r[1] = 0x64u;
    // 0f019d  idiv ecx
    X86_AT(c, 0xf019du);
    x86_idiv(c, c.r[1], 4, 0xf019du);
    // 0f019f  inc eax
    X86_AT(c, 0xf019fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0f01a0  push eax
    X86_AT(c, 0xf01a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f01a1  push 6
    X86_AT(c, 0xf01a1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f01a3  call 0xe5630
    X86_AT(c, 0xf01a3u);
    push32(c, 0xf01a8u); f_000e5630(c); X86_RET(c, 0xf01a8u);
    X86_TICK(c, 20);
    // 0f01a8  add esp, 0x24
    X86_AT(c, 0xf01a8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0f01ab  inc edi
    X86_AT(c, 0xf01abu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f01ac  push edi
    X86_AT(c, 0xf01acu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f01ad  push dword ptr [ebp - 4]
    X86_AT(c, 0xf01adu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f01b0  push 6
    X86_AT(c, 0xf01b0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f01b2  call 0xe7260
    X86_AT(c, 0xf01b2u);
    push32(c, 0xf01b7u); f_000e7260(c); X86_RET(c, 0xf01b7u);
    X86_TICK(c, 11);
    // 0f01b7  push 0x4bec
    X86_AT(c, 0xf01b7u);
    { uint32_t v = 0x4BECu; push32(c, v); }
    // 0f01bc  push 6
    X86_AT(c, 0xf01bcu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f01be  call 0xe5654
    X86_AT(c, 0xf01beu);
    push32(c, 0xf01c3u); f_000e5654(c); X86_RET(c, 0xf01c3u);
    X86_TICK(c, 34);
    // 0f01c3  lea eax, [ebp - 5]
    X86_AT(c, 0xf01c3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0f01c6  push eax
    X86_AT(c, 0xf01c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f01c7  mov edx, dword ptr [0xceca0]
    X86_AT(c, 0xf01c7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f01cd  lea ecx, [edx + edx*4]
    X86_AT(c, 0xf01cdu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0f01d0  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xf01d0u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0f01d3  shl ecx, 5
    X86_AT(c, 0xf01d3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0f01d6  sub ecx, edx
    X86_AT(c, 0xf01d6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f01d8  mov dl, byte ptr [ecx + 0xcde7c]
    X86_AT(c, 0xf01d8u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE7Cu))));
    // 0f01de  push edx
    X86_AT(c, 0xf01deu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f01df  push 3
    X86_AT(c, 0xf01dfu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f01e1  push 0xcf6c0
    X86_AT(c, 0xf01e1u);
    { uint32_t v = 0xCF6C0u; push32(c, v); }
    // 0f01e6  call 0xe53e0
    X86_AT(c, 0xf01e6u);
    push32(c, 0xf01ebu); f_000e53e0(c); X86_RET(c, 0xf01ebu);
    X86_TICK(c, 11);
    // 0f01eb  push eax
    X86_AT(c, 0xf01ebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f01ec  push 6
    X86_AT(c, 0xf01ecu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f01ee  call 0xe6cb0
    X86_AT(c, 0xf01eeu);
    push32(c, 0xf01f3u); f_000e6cb0(c); X86_RET(c, 0xf01f3u);
    X86_TICK(c, 18);
    // 0f01f3  inc edi
    X86_AT(c, 0xf01f3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f01f4  push edi
    X86_AT(c, 0xf01f4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f01f5  push dword ptr [ebp - 4]
    X86_AT(c, 0xf01f5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f01f8  push 6
    X86_AT(c, 0xf01f8u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f01fa  call 0xe7260
    X86_AT(c, 0xf01fau);
    push32(c, 0xf01ffu); f_000e7260(c); X86_RET(c, 0xf01ffu);
    X86_TICK(c, 11);
    // 0f01ff  push 0x4c10
    X86_AT(c, 0xf01ffu);
    { uint32_t v = 0x4C10u; push32(c, v); }
    // 0f0204  push 6
    X86_AT(c, 0xf0204u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0206  call 0xe5654
    X86_AT(c, 0xf0206u);
    push32(c, 0xf020bu); f_000e5654(c); X86_RET(c, 0xf020bu);
    X86_TICK(c, 36);
    // 0f020b  add esp, 0x40
    X86_AT(c, 0xf020bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f020e  lea eax, [ebp - 5]
    X86_AT(c, 0xf020eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0f0211  push eax
    X86_AT(c, 0xf0211u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0212  mov edx, dword ptr [0xceca0]
    X86_AT(c, 0xf0212u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f0218  lea ecx, [edx + edx*4]
    X86_AT(c, 0xf0218u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0f021b  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xf021bu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0f021e  shl ecx, 5
    X86_AT(c, 0xf021eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[1] = r; }
    // 0f0221  sub ecx, edx
    X86_AT(c, 0xf0221u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0f0223  mov dl, byte ptr [ecx + 0xcde7a]
    X86_AT(c, 0xf0223u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0xCDE7Au))));
    // 0f0229  push edx
    X86_AT(c, 0xf0229u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f022a  push 4
    X86_AT(c, 0xf022au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f022c  push 0xcf2a0
    X86_AT(c, 0xf022cu);
    { uint32_t v = 0xCF2A0u; push32(c, v); }
    // 0f0231  call 0xe53e0
    X86_AT(c, 0xf0231u);
    push32(c, 0xf0236u); f_000e53e0(c); X86_RET(c, 0xf0236u);
    X86_TICK(c, 11);
    // 0f0236  push eax
    X86_AT(c, 0xf0236u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0237  push 6
    X86_AT(c, 0xf0237u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0239  call 0xe6cb0
    X86_AT(c, 0xf0239u);
    push32(c, 0xf023eu); f_000e6cb0(c); X86_RET(c, 0xf023eu);
    X86_TICK(c, 18);
    // 0f023e  inc edi
    X86_AT(c, 0xf023eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f023f  push edi
    X86_AT(c, 0xf023fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f0240  push dword ptr [ebp - 4]
    X86_AT(c, 0xf0240u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f0243  push 6
    X86_AT(c, 0xf0243u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0245  call 0xe7260
    X86_AT(c, 0xf0245u);
    push32(c, 0xf024au); f_000e7260(c); X86_RET(c, 0xf024au);
    X86_TICK(c, 11);
    // 0f024a  push 0x4c34
    X86_AT(c, 0xf024au);
    { uint32_t v = 0x4C34u; push32(c, v); }
    // 0f024f  push 6
    X86_AT(c, 0xf024fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0251  call 0xe5654
    X86_AT(c, 0xf0251u);
    push32(c, 0xf0256u); f_000e5654(c); X86_RET(c, 0xf0256u);
    X86_TICK(c, 34);
    // 0f0256  lea eax, [ebp - 5]
    X86_AT(c, 0xf0256u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0f0259  push eax
    X86_AT(c, 0xf0259u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f025a  mov eax, dword ptr [0xceca0]
    X86_AT(c, 0xf025au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xCECA0u)));
    // 0f025f  lea edx, [eax + eax*4]
    X86_AT(c, 0xf025fu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0f0262  lea edx, [eax + edx*2]
    X86_AT(c, 0xf0262u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 2);
    // 0f0265  shl edx, 5
    X86_AT(c, 0xf0265u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0f0268  sub edx, eax
    X86_AT(c, 0xf0268u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0f026a  mov al, byte ptr [edx + 0xcde7b]
    X86_AT(c, 0xf026au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xCDE7Bu))));
    // 0f0270  push eax
    X86_AT(c, 0xf0270u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0271  push 4
    X86_AT(c, 0xf0271u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0f0273  push 0xcf4b0
    X86_AT(c, 0xf0273u);
    { uint32_t v = 0xCF4B0u; push32(c, v); }
    // 0f0278  call 0xe53e0
    X86_AT(c, 0xf0278u);
    push32(c, 0xf027du); f_000e53e0(c); X86_RET(c, 0xf027du);
    X86_TICK(c, 13);
    // 0f027d  add esp, 0x3c
    X86_AT(c, 0xf027du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f0280  push eax
    X86_AT(c, 0xf0280u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0281  push 6
    X86_AT(c, 0xf0281u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0283  call 0xe6cb0
    X86_AT(c, 0xf0283u);
    push32(c, 0xf0288u); f_000e6cb0(c); X86_RET(c, 0xf0288u);
    X86_TICK(c, 20);
    // 0f0288  add esp, 8
    X86_AT(c, 0xf0288u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f028b  inc edi
    X86_AT(c, 0xf028bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f028c  push edi
    X86_AT(c, 0xf028cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f028d  push dword ptr [ebp - 4]
    X86_AT(c, 0xf028du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f0290  push 6
    X86_AT(c, 0xf0290u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0292  call 0xe7260
    X86_AT(c, 0xf0292u);
    push32(c, 0xf0297u); f_000e7260(c); X86_RET(c, 0xf0297u);
    X86_TICK(c, 11);
    // 0f0297  push 0x4c58
    X86_AT(c, 0xf0297u);
    { uint32_t v = 0x4C58u; push32(c, v); }
    // 0f029c  push 6
    X86_AT(c, 0xf029cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f029e  call 0xe5654
    X86_AT(c, 0xf029eu);
    push32(c, 0xf02a3u); f_000e5654(c); X86_RET(c, 0xf02a3u);
    X86_TICK(c, 11);
    // 0f02a3  push 0x4c7c
    X86_AT(c, 0xf02a3u);
    { uint32_t v = 0x4C7Cu; push32(c, v); }
    // 0f02a8  push 6
    X86_AT(c, 0xf02a8u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f02aa  call 0xe6cb0
    X86_AT(c, 0xf02aau);
    push32(c, 0xf02afu); f_000e6cb0(c); X86_RET(c, 0xf02afu);
    X86_TICK(c, 16);
    // 0f02af  push 3
    X86_AT(c, 0xf02afu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f02b1  push dword ptr [ebx + 0x16]
    X86_AT(c, 0xf02b1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x16u))); push32(c, v); }
    // 0f02b4  push 6
    X86_AT(c, 0xf02b4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f02b6  call 0xe5630
    X86_AT(c, 0xf02b6u);
    push32(c, 0xf02bbu); f_000e5630(c); X86_RET(c, 0xf02bbu);
    X86_TICK(c, 18);
    // 0f02bb  inc edi
    X86_AT(c, 0xf02bbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f02bc  push edi
    X86_AT(c, 0xf02bcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f02bd  push dword ptr [ebp - 4]
    X86_AT(c, 0xf02bdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f02c0  push 6
    X86_AT(c, 0xf02c0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f02c2  call 0xe7260
    X86_AT(c, 0xf02c2u);
    push32(c, 0xf02c7u); f_000e7260(c); X86_RET(c, 0xf02c7u);
    X86_TICK(c, 11);
    // 0f02c7  push 0x4c84
    X86_AT(c, 0xf02c7u);
    { uint32_t v = 0x4C84u; push32(c, v); }
    // 0f02cc  push 6
    X86_AT(c, 0xf02ccu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f02ce  call 0xe5654
    X86_AT(c, 0xf02ceu);
    push32(c, 0xf02d3u); f_000e5654(c); X86_RET(c, 0xf02d3u);
    X86_TICK(c, 13);
    // 0f02d3  add esp, 0x3c
    X86_AT(c, 0xf02d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f02d6  push 0x4ca8
    X86_AT(c, 0xf02d6u);
    { uint32_t v = 0x4CA8u; push32(c, v); }
    // 0f02db  push 6
    X86_AT(c, 0xf02dbu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f02dd  call 0xe6cb0
    X86_AT(c, 0xf02ddu);
    push32(c, 0xf02e2u); f_000e6cb0(c); X86_RET(c, 0xf02e2u);
    X86_TICK(c, 16);
    // 0f02e2  push 3
    X86_AT(c, 0xf02e2u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f02e4  push dword ptr [ebx + 0x1a]
    X86_AT(c, 0xf02e4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Au))); push32(c, v); }
    // 0f02e7  push 6
    X86_AT(c, 0xf02e7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f02e9  call 0xe5630
    X86_AT(c, 0xf02e9u);
    push32(c, 0xf02eeu); f_000e5630(c); X86_RET(c, 0xf02eeu);
    X86_TICK(c, 18);
    // 0f02ee  inc edi
    X86_AT(c, 0xf02eeu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f02ef  push edi
    X86_AT(c, 0xf02efu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f02f0  push dword ptr [ebp - 4]
    X86_AT(c, 0xf02f0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f02f3  push 6
    X86_AT(c, 0xf02f3u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f02f5  call 0xe7260
    X86_AT(c, 0xf02f5u);
    push32(c, 0xf02fau); f_000e7260(c); X86_RET(c, 0xf02fau);
    X86_TICK(c, 11);
    // 0f02fa  push 0x4cb0
    X86_AT(c, 0xf02fau);
    { uint32_t v = 0x4CB0u; push32(c, v); }
    // 0f02ff  push 6
    X86_AT(c, 0xf02ffu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0301  call 0xe5654
    X86_AT(c, 0xf0301u);
    push32(c, 0xf0306u); f_000e5654(c); X86_RET(c, 0xf0306u);
    X86_TICK(c, 11);
    // 0f0306  push 0x4cd4
    X86_AT(c, 0xf0306u);
    { uint32_t v = 0x4CD4u; push32(c, v); }
    // 0f030b  push 6
    X86_AT(c, 0xf030bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f030d  call 0xe6cb0
    X86_AT(c, 0xf030du);
    push32(c, 0xf0312u); f_000e6cb0(c); X86_RET(c, 0xf0312u);
    X86_TICK(c, 16);
    // 0f0312  push 3
    X86_AT(c, 0xf0312u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f0314  push dword ptr [ebx + 0x2a]
    X86_AT(c, 0xf0314u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x2Au))); push32(c, v); }
    // 0f0317  push 6
    X86_AT(c, 0xf0317u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0319  call 0xe5630
    X86_AT(c, 0xf0319u);
    push32(c, 0xf031eu); f_000e5630(c); X86_RET(c, 0xf031eu);
    X86_TICK(c, 20);
    // 0f031e  add esp, 0x3c
    X86_AT(c, 0xf031eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f0321  inc edi
    X86_AT(c, 0xf0321u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f0322  push edi
    X86_AT(c, 0xf0322u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f0323  push dword ptr [ebp - 4]
    X86_AT(c, 0xf0323u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f0326  push 6
    X86_AT(c, 0xf0326u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0328  call 0xe7260
    X86_AT(c, 0xf0328u);
    push32(c, 0xf032du); f_000e7260(c); X86_RET(c, 0xf032du);
    X86_TICK(c, 11);
    // 0f032d  push 0x4cdc
    X86_AT(c, 0xf032du);
    { uint32_t v = 0x4CDCu; push32(c, v); }
    // 0f0332  push 6
    X86_AT(c, 0xf0332u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0334  call 0xe5654
    X86_AT(c, 0xf0334u);
    push32(c, 0xf0339u); f_000e5654(c); X86_RET(c, 0xf0339u);
    X86_TICK(c, 13);
    // 0f0339  add esp, 0x14
    X86_AT(c, 0xf0339u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f033c  push 0x4d00
    X86_AT(c, 0xf033cu);
    { uint32_t v = 0x4D00u; push32(c, v); }
    // 0f0341  push 6
    X86_AT(c, 0xf0341u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0343  call 0xe6cb0
    X86_AT(c, 0xf0343u);
    push32(c, 0xf0348u); f_000e6cb0(c); X86_RET(c, 0xf0348u);
    X86_TICK(c, 16);
    // 0f0348  push 3
    X86_AT(c, 0xf0348u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f034a  push dword ptr [ebx + 0x26]
    X86_AT(c, 0xf034au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x26u))); push32(c, v); }
    // 0f034d  push 6
    X86_AT(c, 0xf034du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f034f  call 0xe5630
    X86_AT(c, 0xf034fu);
    push32(c, 0xf0354u); f_000e5630(c); X86_RET(c, 0xf0354u);
    X86_TICK(c, 18);
    // 0f0354  inc edi
    X86_AT(c, 0xf0354u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f0355  push edi
    X86_AT(c, 0xf0355u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f0356  push dword ptr [ebp - 4]
    X86_AT(c, 0xf0356u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f0359  push 6
    X86_AT(c, 0xf0359u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f035b  call 0xe7260
    X86_AT(c, 0xf035bu);
    push32(c, 0xf0360u); f_000e7260(c); X86_RET(c, 0xf0360u);
    X86_TICK(c, 11);
    // 0f0360  push 0x4d08
    X86_AT(c, 0xf0360u);
    { uint32_t v = 0x4D08u; push32(c, v); }
    // 0f0365  push 6
    X86_AT(c, 0xf0365u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0367  call 0xe5654
    X86_AT(c, 0xf0367u);
    push32(c, 0xf036cu); f_000e5654(c); X86_RET(c, 0xf036cu);
    X86_TICK(c, 11);
    // 0f036c  push 0x4d2c
    X86_AT(c, 0xf036cu);
    { uint32_t v = 0x4D2Cu; push32(c, v); }
    // 0f0371  push 6
    X86_AT(c, 0xf0371u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0373  call 0xe6cb0
    X86_AT(c, 0xf0373u);
    push32(c, 0xf0378u); f_000e6cb0(c); X86_RET(c, 0xf0378u);
    X86_TICK(c, 16);
    // 0f0378  push 3
    X86_AT(c, 0xf0378u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f037a  push dword ptr [ebx + 0x22]
    X86_AT(c, 0xf037au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x22u))); push32(c, v); }
    // 0f037d  push 6
    X86_AT(c, 0xf037du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f037f  call 0xe5630
    X86_AT(c, 0xf037fu);
    push32(c, 0xf0384u); f_000e5630(c); X86_RET(c, 0xf0384u);
    X86_TICK(c, 20);
    // 0f0384  add esp, 0x3c
    X86_AT(c, 0xf0384u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f0387  inc edi
    X86_AT(c, 0xf0387u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f0388  push edi
    X86_AT(c, 0xf0388u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f0389  push dword ptr [ebp - 4]
    X86_AT(c, 0xf0389u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f038c  push 6
    X86_AT(c, 0xf038cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f038e  call 0xe7260
    X86_AT(c, 0xf038eu);
    push32(c, 0xf0393u); f_000e7260(c); X86_RET(c, 0xf0393u);
    X86_TICK(c, 11);
    // 0f0393  push 0x4d34
    X86_AT(c, 0xf0393u);
    { uint32_t v = 0x4D34u; push32(c, v); }
    // 0f0398  push 6
    X86_AT(c, 0xf0398u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f039a  call 0xe5654
    X86_AT(c, 0xf039au);
    push32(c, 0xf039fu); f_000e5654(c); X86_RET(c, 0xf039fu);
    X86_TICK(c, 11);
    // 0f039f  push 0x4d58
    X86_AT(c, 0xf039fu);
    { uint32_t v = 0x4D58u; push32(c, v); }
    // 0f03a4  push 6
    X86_AT(c, 0xf03a4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f03a6  call 0xe6cb0
    X86_AT(c, 0xf03a6u);
    push32(c, 0xf03abu); f_000e6cb0(c); X86_RET(c, 0xf03abu);
    X86_TICK(c, 16);
    // 0f03ab  push 3
    X86_AT(c, 0xf03abu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f03ad  push dword ptr [ebx + 0x1e]
    X86_AT(c, 0xf03adu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x1Eu))); push32(c, v); }
    // 0f03b0  push 6
    X86_AT(c, 0xf03b0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f03b2  call 0xe5630
    X86_AT(c, 0xf03b2u);
    push32(c, 0xf03b7u); f_000e5630(c); X86_RET(c, 0xf03b7u);
    X86_TICK(c, 9);
    // 0f03b7  push 6
    X86_AT(c, 0xf03b7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f03b9  call 0xefeb0
    X86_AT(c, 0xf03b9u);
    push32(c, 0xf03beu); f_000efeb0(c); X86_RET(c, 0xf03beu);
    X86_TICK(c, 9);
    // 0f03be  add esp, 0x2c
    X86_AT(c, 0xf03beu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0f03c1  dec eax
    X86_AT(c, 0xf03c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f03c2  je 0xf0903
    X86_AT(c, 0xf03c2u);
    if (x86_cc(c, 4)) { goto L_f0903; }
    X86_TICK(c, 17);
    // 0f03c8  push 0x12
    X86_AT(c, 0xf03c8u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0f03ca  push 0x26
    X86_AT(c, 0xf03cau);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f03cc  push 3
    X86_AT(c, 0xf03ccu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f03ce  push 0
    X86_AT(c, 0xf03ceu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f03d0  push 6
    X86_AT(c, 0xf03d0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f03d2  call 0xe739c
    X86_AT(c, 0xf03d2u);
    push32(c, 0xf03d7u); f_000e739c(c); X86_RET(c, 0xf03d7u);
    X86_TICK(c, 15);
    // 0f03d7  mov edi, 3
    X86_AT(c, 0xf03d7u);
    c.r[7] = 0x3u;
    // 0f03dc  push edi
    X86_AT(c, 0xf03dcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f03dd  push 0
    X86_AT(c, 0xf03ddu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f03df  push 6
    X86_AT(c, 0xf03dfu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f03e1  call 0xe7260
    X86_AT(c, 0xf03e1u);
    push32(c, 0xf03e6u); f_000e7260(c); X86_RET(c, 0xf03e6u);
    X86_TICK(c, 11);
    // 0f03e6  push 0x4d60
    X86_AT(c, 0xf03e6u);
    { uint32_t v = 0x4D60u; push32(c, v); }
    // 0f03eb  push 6
    X86_AT(c, 0xf03ebu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f03ed  call 0xe5654
    X86_AT(c, 0xf03edu);
    push32(c, 0xf03f2u); f_000e5654(c); X86_RET(c, 0xf03f2u);
    X86_TICK(c, 9);
    // 0f03f2  push 6
    X86_AT(c, 0xf03f2u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f03f4  call 0xe6c68
    X86_AT(c, 0xf03f4u);
    push32(c, 0xf03f9u); f_000e6c68(c); X86_RET(c, 0xf03f9u);
    X86_TICK(c, 18);
    // 0f03f9  inc edi
    X86_AT(c, 0xf03f9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f03fa  push edi
    X86_AT(c, 0xf03fau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f03fb  push dword ptr [ebp - 4]
    X86_AT(c, 0xf03fbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f03fe  push 6
    X86_AT(c, 0xf03feu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0400  call 0xe7260
    X86_AT(c, 0xf0400u);
    push32(c, 0xf0405u); f_000e7260(c); X86_RET(c, 0xf0405u);
    X86_TICK(c, 11);
    // 0f0405  push 0x4d88
    X86_AT(c, 0xf0405u);
    { uint32_t v = 0x4D88u; push32(c, v); }
    // 0f040a  push 6
    X86_AT(c, 0xf040au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f040c  call 0xe5654
    X86_AT(c, 0xf040cu);
    push32(c, 0xf0411u); f_000e5654(c); X86_RET(c, 0xf0411u);
    X86_TICK(c, 23);
    // 0f0411  add esp, 0x40
    X86_AT(c, 0xf0411u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f0414  lea eax, [ebp - 5]
    X86_AT(c, 0xf0414u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0f0417  push eax
    X86_AT(c, 0xf0417u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0418  mov dl, byte ptr [ebx + 0x72]
    X86_AT(c, 0xf0418u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x72u))));
    // 0f041b  push edx
    X86_AT(c, 0xf041bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f041c  push 0xa
    X86_AT(c, 0xf041cu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f041e  push 0xcfbe8
    X86_AT(c, 0xf041eu);
    { uint32_t v = 0xCFBE8u; push32(c, v); }
    // 0f0423  call 0xe53e0
    X86_AT(c, 0xf0423u);
    push32(c, 0xf0428u); f_000e53e0(c); X86_RET(c, 0xf0428u);
    X86_TICK(c, 11);
    // 0f0428  push eax
    X86_AT(c, 0xf0428u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0429  push 6
    X86_AT(c, 0xf0429u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f042b  call 0xe6cb0
    X86_AT(c, 0xf042bu);
    push32(c, 0xf0430u); f_000e6cb0(c); X86_RET(c, 0xf0430u);
    X86_TICK(c, 18);
    // 0f0430  inc edi
    X86_AT(c, 0xf0430u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f0431  push edi
    X86_AT(c, 0xf0431u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f0432  push dword ptr [ebp - 4]
    X86_AT(c, 0xf0432u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f0435  push 6
    X86_AT(c, 0xf0435u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0437  call 0xe7260
    X86_AT(c, 0xf0437u);
    push32(c, 0xf043cu); f_000e7260(c); X86_RET(c, 0xf043cu);
    X86_TICK(c, 11);
    // 0f043c  push 0x4dac
    X86_AT(c, 0xf043cu);
    { uint32_t v = 0x4DACu; push32(c, v); }
    // 0f0441  push 6
    X86_AT(c, 0xf0441u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0443  call 0xe5654
    X86_AT(c, 0xf0443u);
    push32(c, 0xf0448u); f_000e5654(c); X86_RET(c, 0xf0448u);
    X86_TICK(c, 21);
    // 0f0448  lea eax, [ebp - 5]
    X86_AT(c, 0xf0448u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0f044b  push eax
    X86_AT(c, 0xf044bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f044c  mov al, byte ptr [ebx + 0x55]
    X86_AT(c, 0xf044cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x55u))));
    // 0f044f  push eax
    X86_AT(c, 0xf044fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0450  push 7
    X86_AT(c, 0xf0450u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f0452  push 0xcf84c
    X86_AT(c, 0xf0452u);
    { uint32_t v = 0xCF84Cu; push32(c, v); }
    // 0f0457  call 0xe53e0
    X86_AT(c, 0xf0457u);
    push32(c, 0xf045cu); f_000e53e0(c); X86_RET(c, 0xf045cu);
    X86_TICK(c, 13);
    // 0f045c  add esp, 0x3c
    X86_AT(c, 0xf045cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f045f  push eax
    X86_AT(c, 0xf045fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0460  push 6
    X86_AT(c, 0xf0460u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0462  call 0xe6cb0
    X86_AT(c, 0xf0462u);
    push32(c, 0xf0467u); f_000e6cb0(c); X86_RET(c, 0xf0467u);
    X86_TICK(c, 18);
    // 0f0467  inc edi
    X86_AT(c, 0xf0467u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f0468  push edi
    X86_AT(c, 0xf0468u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f0469  push dword ptr [ebp - 4]
    X86_AT(c, 0xf0469u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f046c  push 6
    X86_AT(c, 0xf046cu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f046e  call 0xe7260
    X86_AT(c, 0xf046eu);
    push32(c, 0xf0473u); f_000e7260(c); X86_RET(c, 0xf0473u);
    X86_TICK(c, 13);
    // 0f0473  add esp, 0x14
    X86_AT(c, 0xf0473u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f0476  push 0x4dd0
    X86_AT(c, 0xf0476u);
    { uint32_t v = 0x4DD0u; push32(c, v); }
    // 0f047b  push 6
    X86_AT(c, 0xf047bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f047d  call 0xe5654
    X86_AT(c, 0xf047du);
    push32(c, 0xf0482u); f_000e5654(c); X86_RET(c, 0xf0482u);
    X86_TICK(c, 14);
    // 0f0482  add esp, 8
    X86_AT(c, 0xf0482u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f0485  cmp dword ptr [ebx + 0x12b], 7
    X86_AT(c, 0xf0485u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x12Bu))), 0x7u, 0, 4);
    // 0f048c  jne 0xf049f
    X86_AT(c, 0xf048cu);
    if (x86_cc(c, 5)) { goto L_f049f; }
    X86_TICK(c, 11);
    // 0f048e  push 0x4df4
    X86_AT(c, 0xf048eu);
    { uint32_t v = 0x4DF4u; push32(c, v); }
    // 0f0493  push 6
    X86_AT(c, 0xf0493u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0495  call 0xe5654
    X86_AT(c, 0xf0495u);
    push32(c, 0xf049au); f_000e5654(c); X86_RET(c, 0xf049au);
    X86_TICK(c, 9);
    // 0f049a  add esp, 8
    X86_AT(c, 0xf049au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f049d  jmp 0xf04c3
    X86_AT(c, 0xf049du);
    goto L_f04c3;
L_f049f:
    X86_TICK(c, 23);
    // 0f049f  lea eax, [ebp - 5]
    X86_AT(c, 0xf049fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0f04a2  push eax
    X86_AT(c, 0xf04a2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f04a3  mov al, byte ptr [ebx + 0x12b]
    X86_AT(c, 0xf04a3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0x12Bu))));
    // 0f04a9  add al, 0x41
    X86_AT(c, 0xf04a9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0f04ab  push eax
    X86_AT(c, 0xf04abu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f04ac  push 0xa
    X86_AT(c, 0xf04acu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f04ae  push 0xd0e78
    X86_AT(c, 0xf04aeu);
    { uint32_t v = 0xD0E78u; push32(c, v); }
    // 0f04b3  call 0xe53e0
    X86_AT(c, 0xf04b3u);
    push32(c, 0xf04b8u); f_000e53e0(c); X86_RET(c, 0xf04b8u);
    X86_TICK(c, 11);
    // 0f04b8  push eax
    X86_AT(c, 0xf04b8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f04b9  push 6
    X86_AT(c, 0xf04b9u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f04bb  call 0xe6cb0
    X86_AT(c, 0xf04bbu);
    push32(c, 0xf04c0u); f_000e6cb0(c); X86_RET(c, 0xf04c0u);
    X86_TICK(c, 2);
    // 0f04c0  add esp, 0x18
    X86_AT(c, 0xf04c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_f04c3:
    X86_TICK(c, 18);
    // 0f04c3  inc edi
    X86_AT(c, 0xf04c3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f04c4  push edi
    X86_AT(c, 0xf04c4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f04c5  push dword ptr [ebp - 4]
    X86_AT(c, 0xf04c5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f04c8  push 6
    X86_AT(c, 0xf04c8u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f04ca  call 0xe7260
    X86_AT(c, 0xf04cau);
    push32(c, 0xf04cfu); f_000e7260(c); X86_RET(c, 0xf04cfu);
    X86_TICK(c, 11);
    // 0f04cf  push 0x4e10
    X86_AT(c, 0xf04cfu);
    { uint32_t v = 0x4E10u; push32(c, v); }
    // 0f04d4  push 6
    X86_AT(c, 0xf04d4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f04d6  call 0xe5654
    X86_AT(c, 0xf04d6u);
    push32(c, 0xf04dbu); f_000e5654(c); X86_RET(c, 0xf04dbu);
    X86_TICK(c, 16);
    // 0f04db  push 5
    X86_AT(c, 0xf04dbu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f04dd  push dword ptr [ebx + 0x49]
    X86_AT(c, 0xf04ddu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x49u))); push32(c, v); }
    // 0f04e0  push 6
    X86_AT(c, 0xf04e0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f04e2  call 0xe5630
    X86_AT(c, 0xf04e2u);
    push32(c, 0xf04e7u); f_000e5630(c); X86_RET(c, 0xf04e7u);
    X86_TICK(c, 18);
    // 0f04e7  inc edi
    X86_AT(c, 0xf04e7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f04e8  push edi
    X86_AT(c, 0xf04e8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f04e9  push dword ptr [ebp - 4]
    X86_AT(c, 0xf04e9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f04ec  push 6
    X86_AT(c, 0xf04ecu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f04ee  call 0xe7260
    X86_AT(c, 0xf04eeu);
    push32(c, 0xf04f3u); f_000e7260(c); X86_RET(c, 0xf04f3u);
    X86_TICK(c, 11);
    // 0f04f3  push 0x4e34
    X86_AT(c, 0xf04f3u);
    { uint32_t v = 0x4E34u; push32(c, v); }
    // 0f04f8  push 6
    X86_AT(c, 0xf04f8u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f04fa  call 0xe5654
    X86_AT(c, 0xf04fau);
    push32(c, 0xf04ffu); f_000e5654(c); X86_RET(c, 0xf04ffu);
    X86_TICK(c, 16);
    // 0f04ff  push 5
    X86_AT(c, 0xf04ffu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f0501  push dword ptr [ebx + 0x12]
    X86_AT(c, 0xf0501u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x12u))); push32(c, v); }
    // 0f0504  push 6
    X86_AT(c, 0xf0504u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0506  call 0xe5630
    X86_AT(c, 0xf0506u);
    push32(c, 0xf050bu); f_000e5630(c); X86_RET(c, 0xf050bu);
    X86_TICK(c, 20);
    // 0f050b  add esp, 0x40
    X86_AT(c, 0xf050bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0f050e  inc edi
    X86_AT(c, 0xf050eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f050f  push edi
    X86_AT(c, 0xf050fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f0510  push dword ptr [ebp - 4]
    X86_AT(c, 0xf0510u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f0513  push 6
    X86_AT(c, 0xf0513u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0515  call 0xe7260
    X86_AT(c, 0xf0515u);
    push32(c, 0xf051au); f_000e7260(c); X86_RET(c, 0xf051au);
    X86_TICK(c, 11);
    // 0f051a  push 0x4e58
    X86_AT(c, 0xf051au);
    { uint32_t v = 0x4E58u; push32(c, v); }
    // 0f051f  push 6
    X86_AT(c, 0xf051fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0521  call 0xe5654
    X86_AT(c, 0xf0521u);
    push32(c, 0xf0526u); f_000e5654(c); X86_RET(c, 0xf0526u);
    X86_TICK(c, 16);
    // 0f0526  push 5
    X86_AT(c, 0xf0526u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0f0528  push dword ptr [ebx + 0x51]
    X86_AT(c, 0xf0528u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x51u))); push32(c, v); }
    // 0f052b  push 6
    X86_AT(c, 0xf052bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f052d  call 0xe5630
    X86_AT(c, 0xf052du);
    push32(c, 0xf0532u); f_000e5630(c); X86_RET(c, 0xf0532u);
    X86_TICK(c, 9);
    // 0f0532  push 6
    X86_AT(c, 0xf0532u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0534  call 0xefeb0
    X86_AT(c, 0xf0534u);
    push32(c, 0xf0539u); f_000efeb0(c); X86_RET(c, 0xf0539u);
    X86_TICK(c, 9);
    // 0f0539  add esp, 0x24
    X86_AT(c, 0xf0539u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0f053c  dec eax
    X86_AT(c, 0xf053cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f053d  je 0xf0903
    X86_AT(c, 0xf053du);
    if (x86_cc(c, 4)) { goto L_f0903; }
    X86_TICK(c, 17);
    // 0f0543  push 0x12
    X86_AT(c, 0xf0543u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0f0545  push 0x26
    X86_AT(c, 0xf0545u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f0547  push 3
    X86_AT(c, 0xf0547u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f0549  push 0
    X86_AT(c, 0xf0549u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f054b  push 6
    X86_AT(c, 0xf054bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f054d  call 0xe739c
    X86_AT(c, 0xf054du);
    push32(c, 0xf0552u); f_000e739c(c); X86_RET(c, 0xf0552u);
    X86_TICK(c, 19);
    // 0f0552  mov edi, 3
    X86_AT(c, 0xf0552u);
    c.r[7] = 0x3u;
    // 0f0557  mov eax, edi
    X86_AT(c, 0xf0557u);
    c.r[0] = c.r[7];
    // 0f0559  inc edi
    X86_AT(c, 0xf0559u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f055a  push eax
    X86_AT(c, 0xf055au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f055b  push 0
    X86_AT(c, 0xf055bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f055d  push 6
    X86_AT(c, 0xf055du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f055f  call 0xe7260
    X86_AT(c, 0xf055fu);
    push32(c, 0xf0564u); f_000e7260(c); X86_RET(c, 0xf0564u);
    X86_TICK(c, 11);
    // 0f0564  push 0x4e7c
    X86_AT(c, 0xf0564u);
    { uint32_t v = 0x4E7Cu; push32(c, v); }
    // 0f0569  push 6
    X86_AT(c, 0xf0569u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f056b  call 0xe5654
    X86_AT(c, 0xf056bu);
    push32(c, 0xf0570u); f_000e5654(c); X86_RET(c, 0xf0570u);
    X86_TICK(c, 9);
    // 0f0570  push 6
    X86_AT(c, 0xf0570u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0572  call 0xe6c68
    X86_AT(c, 0xf0572u);
    push32(c, 0xf0577u); f_000e6c68(c); X86_RET(c, 0xf0577u);
    X86_TICK(c, 4);
    // 0f0577  mov esi, 1
    X86_AT(c, 0xf0577u);
    c.r[6] = 0x1u;
    // 0f057c  add esp, 0x2c
    X86_AT(c, 0xf057cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_f057f:
    X86_TICK(c, 7);
    // 0f057f  cmp esi, 0xa
    X86_AT(c, 0xf057fu);
    (void)x86_sub(c, c.r[6], 0xAu, 0, 4);
    // 0f0582  jge 0xf063a
    X86_AT(c, 0xf0582u);
    if (x86_cc(c, 13)) { goto L_f063a; }
    X86_TICK(c, 12);
    // 0f0588  cmp dword ptr [ebx + esi*4 + 0x73], 0
    X86_AT(c, 0xf0588u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] * 4 + 0x73u))), 0x0u, 0, 4);
    // 0f058d  je 0xf0634
    X86_AT(c, 0xf058du);
    if (x86_cc(c, 4)) { goto L_f0634; }
    X86_TICK(c, 20);
    // 0f0593  mov eax, edi
    X86_AT(c, 0xf0593u);
    c.r[0] = c.r[7];
    // 0f0595  inc edi
    X86_AT(c, 0xf0595u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f0596  push eax
    X86_AT(c, 0xf0596u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0597  push dword ptr [ebp - 4]
    X86_AT(c, 0xf0597u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f059a  push 6
    X86_AT(c, 0xf059au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f059c  call 0xe7260
    X86_AT(c, 0xf059cu);
    push32(c, 0xf05a1u); f_000e7260(c); X86_RET(c, 0xf05a1u);
    X86_TICK(c, 21);
    // 0f05a1  mov eax, esi
    X86_AT(c, 0xf05a1u);
    c.r[0] = c.r[6];
    // 0f05a3  add al, 0x41
    X86_AT(c, 0xf05a3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0f05a5  mov byte ptr [ebp - 7], al
    X86_AT(c, 0xf05a5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u)), g8(c, 0));
    // 0f05a8  lea edx, [ebp - 7]
    X86_AT(c, 0xf05a8u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF9u);
    // 0f05ab  push edx
    X86_AT(c, 0xf05abu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f05ac  push 6
    X86_AT(c, 0xf05acu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f05ae  mov byte ptr [ebp - 0xc], al
    X86_AT(c, 0xf05aeu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), g8(c, 0));
    // 0f05b1  call 0xe70ec
    X86_AT(c, 0xf05b1u);
    push32(c, 0xf05b6u); f_000e70ec(c); X86_RET(c, 0xf05b6u);
    X86_TICK(c, 11);
    // 0f05b6  push 0x4ea6
    X86_AT(c, 0xf05b6u);
    { uint32_t v = 0x4EA6u; push32(c, v); }
    // 0f05bb  push 6
    X86_AT(c, 0xf05bbu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f05bd  call 0xe6cb0
    X86_AT(c, 0xf05bdu);
    push32(c, 0xf05c2u); f_000e6cb0(c); X86_RET(c, 0xf05c2u);
    X86_TICK(c, 20);
    // 0f05c2  lea eax, [ebp - 5]
    X86_AT(c, 0xf05c2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0f05c5  push eax
    X86_AT(c, 0xf05c5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f05c6  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xf05c6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0f05c9  push 0xa
    X86_AT(c, 0xf05c9u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f05cb  push 0xcfbe8
    X86_AT(c, 0xf05cbu);
    { uint32_t v = 0xCFBE8u; push32(c, v); }
    // 0f05d0  call 0xe53e0
    X86_AT(c, 0xf05d0u);
    push32(c, 0xf05d5u); f_000e53e0(c); X86_RET(c, 0xf05d5u);
    X86_TICK(c, 11);
    // 0f05d5  push eax
    X86_AT(c, 0xf05d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f05d6  push 6
    X86_AT(c, 0xf05d6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f05d8  call 0xe6cb0
    X86_AT(c, 0xf05d8u);
    push32(c, 0xf05ddu); f_000e6cb0(c); X86_RET(c, 0xf05ddu);
    X86_TICK(c, 11);
    // 0f05dd  push 0x4eac
    X86_AT(c, 0xf05ddu);
    { uint32_t v = 0x4EACu; push32(c, v); }
    // 0f05e2  push 6
    X86_AT(c, 0xf05e2u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f05e4  call 0xe6cb0
    X86_AT(c, 0xf05e4u);
    push32(c, 0xf05e9u); f_000e6cb0(c); X86_RET(c, 0xf05e9u);
    X86_TICK(c, 18);
    // 0f05e9  add esp, 0x3c
    X86_AT(c, 0xf05e9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f05ec  push 2
    X86_AT(c, 0xf05ecu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f05ee  push dword ptr [ebx + esi*4 + 0x73]
    X86_AT(c, 0xf05eeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] * 4 + 0x73u))); push32(c, v); }
    // 0f05f2  push 6
    X86_AT(c, 0xf05f2u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f05f4  call 0xe5630
    X86_AT(c, 0xf05f4u);
    push32(c, 0xf05f9u); f_000e5630(c); X86_RET(c, 0xf05f9u);
    X86_TICK(c, 11);
    // 0f05f9  push 0x4eb0
    X86_AT(c, 0xf05f9u);
    { uint32_t v = 0x4EB0u; push32(c, v); }
    // 0f05fe  push 6
    X86_AT(c, 0xf05feu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0600  call 0xe6cb0
    X86_AT(c, 0xf0600u);
    push32(c, 0xf0605u); f_000e6cb0(c); X86_RET(c, 0xf0605u);
    X86_TICK(c, 9);
    // 0f0605  add esp, 0x14
    X86_AT(c, 0xf0605u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f0608  cmp edi, 0xd
    X86_AT(c, 0xf0608u);
    (void)x86_sub(c, c.r[7], 0xDu, 0, 4);
    // 0f060b  jle 0xf0634
    X86_AT(c, 0xf060bu);
    if (x86_cc(c, 14)) { goto L_f0634; }
    X86_TICK(c, 9);
    // 0f060d  push 6
    X86_AT(c, 0xf060du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f060f  call 0xefeb0
    X86_AT(c, 0xf060fu);
    push32(c, 0xf0614u); f_000efeb0(c); X86_RET(c, 0xf0614u);
    X86_TICK(c, 9);
    // 0f0614  add esp, 4
    X86_AT(c, 0xf0614u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f0617  dec eax
    X86_AT(c, 0xf0617u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f0618  je 0xf0903
    X86_AT(c, 0xf0618u);
    if (x86_cc(c, 4)) { goto L_f0903; }
    X86_TICK(c, 19);
    // 0f061e  mov edi, 4
    X86_AT(c, 0xf061eu);
    c.r[7] = 0x4u;
    // 0f0623  push 0x12
    X86_AT(c, 0xf0623u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0f0625  push 0x26
    X86_AT(c, 0xf0625u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f0627  push edi
    X86_AT(c, 0xf0627u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f0628  push 0
    X86_AT(c, 0xf0628u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f062a  push 6
    X86_AT(c, 0xf062au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f062c  call 0xe739c
    X86_AT(c, 0xf062cu);
    push32(c, 0xf0631u); f_000e739c(c); X86_RET(c, 0xf0631u);
    X86_TICK(c, 2);
    // 0f0631  add esp, 0x14
    X86_AT(c, 0xf0631u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_f0634:
    X86_TICK(c, 9);
    // 0f0634  inc esi
    X86_AT(c, 0xf0634u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f0635  jmp 0xf057f
    X86_AT(c, 0xf0635u);
    X86_POLL(c, 0xf057fu); goto L_f057f;
L_f063a:
    X86_TICK(c, 9);
    // 0f063a  push 6
    X86_AT(c, 0xf063au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f063c  call 0xefeb0
    X86_AT(c, 0xf063cu);
    push32(c, 0xf0641u); f_000efeb0(c); X86_RET(c, 0xf0641u);
    X86_TICK(c, 9);
    // 0f0641  add esp, 4
    X86_AT(c, 0xf0641u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f0644  dec eax
    X86_AT(c, 0xf0644u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f0645  je 0xf0903
    X86_AT(c, 0xf0645u);
    if (x86_cc(c, 4)) { goto L_f0903; }
    X86_TICK(c, 17);
    // 0f064b  push 0x12
    X86_AT(c, 0xf064bu);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0f064d  push 0x26
    X86_AT(c, 0xf064du);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f064f  push 3
    X86_AT(c, 0xf064fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f0651  push 0
    X86_AT(c, 0xf0651u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f0653  push 6
    X86_AT(c, 0xf0653u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0655  call 0xe739c
    X86_AT(c, 0xf0655u);
    push32(c, 0xf065au); f_000e739c(c); X86_RET(c, 0xf065au);
    X86_TICK(c, 19);
    // 0f065a  mov edi, 3
    X86_AT(c, 0xf065au);
    c.r[7] = 0x3u;
    // 0f065f  mov eax, edi
    X86_AT(c, 0xf065fu);
    c.r[0] = c.r[7];
    // 0f0661  inc edi
    X86_AT(c, 0xf0661u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f0662  push eax
    X86_AT(c, 0xf0662u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0663  push 0
    X86_AT(c, 0xf0663u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f0665  push 6
    X86_AT(c, 0xf0665u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0667  call 0xe7260
    X86_AT(c, 0xf0667u);
    push32(c, 0xf066cu); f_000e7260(c); X86_RET(c, 0xf066cu);
    X86_TICK(c, 11);
    // 0f066c  push 0x4eb4
    X86_AT(c, 0xf066cu);
    { uint32_t v = 0x4EB4u; push32(c, v); }
    // 0f0671  push 6
    X86_AT(c, 0xf0671u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0673  call 0xe5654
    X86_AT(c, 0xf0673u);
    push32(c, 0xf0678u); f_000e5654(c); X86_RET(c, 0xf0678u);
    X86_TICK(c, 9);
    // 0f0678  push 6
    X86_AT(c, 0xf0678u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f067a  call 0xe6c68
    X86_AT(c, 0xf067au);
    push32(c, 0xf067fu); f_000e6c68(c); X86_RET(c, 0xf067fu);
    X86_TICK(c, 4);
    // 0f067f  mov esi, 1
    X86_AT(c, 0xf067fu);
    c.r[6] = 0x1u;
    // 0f0684  add esp, 0x2c
    X86_AT(c, 0xf0684u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_f0687:
    X86_TICK(c, 7);
    // 0f0687  cmp esi, 7
    X86_AT(c, 0xf0687u);
    (void)x86_sub(c, c.r[6], 0x7u, 0, 4);
    // 0f068a  jge 0xf0712
    X86_AT(c, 0xf068au);
    if (x86_cc(c, 13)) { goto L_f0712; }
    X86_TICK(c, 12);
    // 0f0690  cmp dword ptr [ebx + esi*4 + 0x56], 0
    X86_AT(c, 0xf0690u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] * 4 + 0x56u))), 0x0u, 0, 4);
    // 0f0695  jle 0xf070c
    X86_AT(c, 0xf0695u);
    if (x86_cc(c, 14)) { goto L_f070c; }
    X86_TICK(c, 20);
    // 0f0697  mov eax, edi
    X86_AT(c, 0xf0697u);
    c.r[0] = c.r[7];
    // 0f0699  inc edi
    X86_AT(c, 0xf0699u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f069a  push eax
    X86_AT(c, 0xf069au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f069b  push dword ptr [ebp - 4]
    X86_AT(c, 0xf069bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f069e  push 6
    X86_AT(c, 0xf069eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f06a0  call 0xe7260
    X86_AT(c, 0xf06a0u);
    push32(c, 0xf06a5u); f_000e7260(c); X86_RET(c, 0xf06a5u);
    X86_TICK(c, 21);
    // 0f06a5  mov eax, esi
    X86_AT(c, 0xf06a5u);
    c.r[0] = c.r[6];
    // 0f06a7  add al, 0x41
    X86_AT(c, 0xf06a7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0f06a9  mov byte ptr [ebp - 7], al
    X86_AT(c, 0xf06a9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u)), g8(c, 0));
    // 0f06ac  lea edx, [ebp - 7]
    X86_AT(c, 0xf06acu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF9u);
    // 0f06af  push edx
    X86_AT(c, 0xf06afu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f06b0  push 6
    X86_AT(c, 0xf06b0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f06b2  mov byte ptr [ebp - 0xc], al
    X86_AT(c, 0xf06b2u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), g8(c, 0));
    // 0f06b5  call 0xe70ec
    X86_AT(c, 0xf06b5u);
    push32(c, 0xf06bau); f_000e70ec(c); X86_RET(c, 0xf06bau);
    X86_TICK(c, 11);
    // 0f06ba  push 0x4ede
    X86_AT(c, 0xf06bau);
    { uint32_t v = 0x4EDEu; push32(c, v); }
    // 0f06bf  push 6
    X86_AT(c, 0xf06bfu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f06c1  call 0xe6cb0
    X86_AT(c, 0xf06c1u);
    push32(c, 0xf06c6u); f_000e6cb0(c); X86_RET(c, 0xf06c6u);
    X86_TICK(c, 20);
    // 0f06c6  lea eax, [ebp - 5]
    X86_AT(c, 0xf06c6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0f06c9  push eax
    X86_AT(c, 0xf06c9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f06ca  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xf06cau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0f06cd  push 7
    X86_AT(c, 0xf06cdu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0f06cf  push 0xcf84c
    X86_AT(c, 0xf06cfu);
    { uint32_t v = 0xCF84Cu; push32(c, v); }
    // 0f06d4  call 0xe53e0
    X86_AT(c, 0xf06d4u);
    push32(c, 0xf06d9u); f_000e53e0(c); X86_RET(c, 0xf06d9u);
    X86_TICK(c, 11);
    // 0f06d9  push eax
    X86_AT(c, 0xf06d9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f06da  push 6
    X86_AT(c, 0xf06dau);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f06dc  call 0xe6cb0
    X86_AT(c, 0xf06dcu);
    push32(c, 0xf06e1u); f_000e6cb0(c); X86_RET(c, 0xf06e1u);
    X86_TICK(c, 11);
    // 0f06e1  push 0x4ee4
    X86_AT(c, 0xf06e1u);
    { uint32_t v = 0x4EE4u; push32(c, v); }
    // 0f06e6  push 6
    X86_AT(c, 0xf06e6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f06e8  call 0xe6cb0
    X86_AT(c, 0xf06e8u);
    push32(c, 0xf06edu); f_000e6cb0(c); X86_RET(c, 0xf06edu);
    X86_TICK(c, 18);
    // 0f06ed  add esp, 0x3c
    X86_AT(c, 0xf06edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f06f0  push 2
    X86_AT(c, 0xf06f0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f06f2  push dword ptr [ebx + esi*4 + 0x56]
    X86_AT(c, 0xf06f2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] * 4 + 0x56u))); push32(c, v); }
    // 0f06f6  push 6
    X86_AT(c, 0xf06f6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f06f8  call 0xe5630
    X86_AT(c, 0xf06f8u);
    push32(c, 0xf06fdu); f_000e5630(c); X86_RET(c, 0xf06fdu);
    X86_TICK(c, 11);
    // 0f06fd  push 0x4ee8
    X86_AT(c, 0xf06fdu);
    { uint32_t v = 0x4EE8u; push32(c, v); }
    // 0f0702  push 6
    X86_AT(c, 0xf0702u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0704  call 0xe6cb0
    X86_AT(c, 0xf0704u);
    push32(c, 0xf0709u); f_000e6cb0(c); X86_RET(c, 0xf0709u);
    X86_TICK(c, 2);
    // 0f0709  add esp, 0x14
    X86_AT(c, 0xf0709u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_f070c:
    X86_TICK(c, 9);
    // 0f070c  inc esi
    X86_AT(c, 0xf070cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f070d  jmp 0xf0687
    X86_AT(c, 0xf070du);
    X86_POLL(c, 0xf0687u); goto L_f0687;
L_f0712:
    X86_TICK(c, 9);
    // 0f0712  push 6
    X86_AT(c, 0xf0712u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0714  call 0xefeb0
    X86_AT(c, 0xf0714u);
    push32(c, 0xf0719u); f_000efeb0(c); X86_RET(c, 0xf0719u);
    X86_TICK(c, 9);
    // 0f0719  add esp, 4
    X86_AT(c, 0xf0719u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f071c  dec eax
    X86_AT(c, 0xf071cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f071d  je 0xf0903
    X86_AT(c, 0xf071du);
    if (x86_cc(c, 4)) { goto L_f0903; }
    X86_TICK(c, 17);
    // 0f0723  push 0x12
    X86_AT(c, 0xf0723u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0f0725  push 0x26
    X86_AT(c, 0xf0725u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f0727  push 3
    X86_AT(c, 0xf0727u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f0729  push 0
    X86_AT(c, 0xf0729u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f072b  push 6
    X86_AT(c, 0xf072bu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f072d  call 0xe739c
    X86_AT(c, 0xf072du);
    push32(c, 0xf0732u); f_000e739c(c); X86_RET(c, 0xf0732u);
    X86_TICK(c, 19);
    // 0f0732  mov edi, 3
    X86_AT(c, 0xf0732u);
    c.r[7] = 0x3u;
    // 0f0737  mov eax, edi
    X86_AT(c, 0xf0737u);
    c.r[0] = c.r[7];
    // 0f0739  inc edi
    X86_AT(c, 0xf0739u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f073a  push eax
    X86_AT(c, 0xf073au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f073b  push 0
    X86_AT(c, 0xf073bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f073d  push 6
    X86_AT(c, 0xf073du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f073f  call 0xe7260
    X86_AT(c, 0xf073fu);
    push32(c, 0xf0744u); f_000e7260(c); X86_RET(c, 0xf0744u);
    X86_TICK(c, 11);
    // 0f0744  push 0x4eec
    X86_AT(c, 0xf0744u);
    { uint32_t v = 0x4EECu; push32(c, v); }
    // 0f0749  push 6
    X86_AT(c, 0xf0749u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f074b  call 0xe5654
    X86_AT(c, 0xf074bu);
    push32(c, 0xf0750u); f_000e5654(c); X86_RET(c, 0xf0750u);
    X86_TICK(c, 9);
    // 0f0750  push 6
    X86_AT(c, 0xf0750u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0752  call 0xe6c68
    X86_AT(c, 0xf0752u);
    push32(c, 0xf0757u); f_000e6c68(c); X86_RET(c, 0xf0757u);
    X86_TICK(c, 4);
    // 0f0757  mov esi, 1
    X86_AT(c, 0xf0757u);
    c.r[6] = 0x1u;
    // 0f075c  add esp, 0x2c
    X86_AT(c, 0xf075cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_f075f:
    X86_TICK(c, 7);
    // 0f075f  cmp esi, 0xa
    X86_AT(c, 0xf075fu);
    (void)x86_sub(c, c.r[6], 0xAu, 0, 4);
    // 0f0762  jge 0xf07ef
    X86_AT(c, 0xf0762u);
    if (x86_cc(c, 13)) { goto L_f07ef; }
    X86_TICK(c, 12);
    // 0f0768  cmp dword ptr [ebx + esi*4 + 0xdb], 0
    X86_AT(c, 0xf0768u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] * 4 + 0xDBu))), 0x0u, 0, 4);
    // 0f0770  jle 0xf07e9
    X86_AT(c, 0xf0770u);
    if (x86_cc(c, 14)) { goto L_f07e9; }
    X86_TICK(c, 17);
    // 0f0772  mov eax, edi
    X86_AT(c, 0xf0772u);
    c.r[0] = c.r[7];
    // 0f0774  inc edi
    X86_AT(c, 0xf0774u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f0775  push eax
    X86_AT(c, 0xf0775u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0776  push 0
    X86_AT(c, 0xf0776u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f0778  push 6
    X86_AT(c, 0xf0778u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f077a  call 0xe7260
    X86_AT(c, 0xf077au);
    push32(c, 0xf077fu); f_000e7260(c); X86_RET(c, 0xf077fu);
    X86_TICK(c, 21);
    // 0f077f  mov eax, esi
    X86_AT(c, 0xf077fu);
    c.r[0] = c.r[6];
    // 0f0781  add al, 0x41
    X86_AT(c, 0xf0781u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0f0783  mov byte ptr [ebp - 7], al
    X86_AT(c, 0xf0783u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u)), g8(c, 0));
    // 0f0786  lea edx, [ebp - 7]
    X86_AT(c, 0xf0786u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF9u);
    // 0f0789  push edx
    X86_AT(c, 0xf0789u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f078a  push 6
    X86_AT(c, 0xf078au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f078c  mov byte ptr [ebp - 0xc], al
    X86_AT(c, 0xf078cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), g8(c, 0));
    // 0f078f  call 0xe70ec
    X86_AT(c, 0xf078fu);
    push32(c, 0xf0794u); f_000e70ec(c); X86_RET(c, 0xf0794u);
    X86_TICK(c, 11);
    // 0f0794  push 0x4f14
    X86_AT(c, 0xf0794u);
    { uint32_t v = 0x4F14u; push32(c, v); }
    // 0f0799  push 6
    X86_AT(c, 0xf0799u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f079b  call 0xe6cb0
    X86_AT(c, 0xf079bu);
    push32(c, 0xf07a0u); f_000e6cb0(c); X86_RET(c, 0xf07a0u);
    X86_TICK(c, 20);
    // 0f07a0  lea eax, [ebp - 5]
    X86_AT(c, 0xf07a0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0f07a3  push eax
    X86_AT(c, 0xf07a3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f07a4  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xf07a4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0f07a7  push 0xa
    X86_AT(c, 0xf07a7u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0f07a9  push 0xd0e78
    X86_AT(c, 0xf07a9u);
    { uint32_t v = 0xD0E78u; push32(c, v); }
    // 0f07ae  call 0xe53e0
    X86_AT(c, 0xf07aeu);
    push32(c, 0xf07b3u); f_000e53e0(c); X86_RET(c, 0xf07b3u);
    X86_TICK(c, 11);
    // 0f07b3  push eax
    X86_AT(c, 0xf07b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f07b4  push 6
    X86_AT(c, 0xf07b4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f07b6  call 0xe6cb0
    X86_AT(c, 0xf07b6u);
    push32(c, 0xf07bbu); f_000e6cb0(c); X86_RET(c, 0xf07bbu);
    X86_TICK(c, 11);
    // 0f07bb  push 0x4f18
    X86_AT(c, 0xf07bbu);
    { uint32_t v = 0x4F18u; push32(c, v); }
    // 0f07c0  push 6
    X86_AT(c, 0xf07c0u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f07c2  call 0xe6cb0
    X86_AT(c, 0xf07c2u);
    push32(c, 0xf07c7u); f_000e6cb0(c); X86_RET(c, 0xf07c7u);
    X86_TICK(c, 18);
    // 0f07c7  add esp, 0x3c
    X86_AT(c, 0xf07c7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f07ca  push 2
    X86_AT(c, 0xf07cau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f07cc  push dword ptr [ebx + esi*4 + 0xdb]
    X86_AT(c, 0xf07ccu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] * 4 + 0xDBu))); push32(c, v); }
    // 0f07d3  push 6
    X86_AT(c, 0xf07d3u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f07d5  call 0xe5630
    X86_AT(c, 0xf07d5u);
    push32(c, 0xf07dau); f_000e5630(c); X86_RET(c, 0xf07dau);
    X86_TICK(c, 11);
    // 0f07da  push 0x4f1c
    X86_AT(c, 0xf07dau);
    { uint32_t v = 0x4F1Cu; push32(c, v); }
    // 0f07df  push 6
    X86_AT(c, 0xf07dfu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f07e1  call 0xe6cb0
    X86_AT(c, 0xf07e1u);
    push32(c, 0xf07e6u); f_000e6cb0(c); X86_RET(c, 0xf07e6u);
    X86_TICK(c, 2);
    // 0f07e6  add esp, 0x14
    X86_AT(c, 0xf07e6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_f07e9:
    X86_TICK(c, 9);
    // 0f07e9  inc esi
    X86_AT(c, 0xf07e9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f07ea  jmp 0xf075f
    X86_AT(c, 0xf07eau);
    X86_POLL(c, 0xf075fu); goto L_f075f;
L_f07ef:
    X86_TICK(c, 9);
    // 0f07ef  push 6
    X86_AT(c, 0xf07efu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f07f1  call 0xefeb0
    X86_AT(c, 0xf07f1u);
    push32(c, 0xf07f6u); f_000efeb0(c); X86_RET(c, 0xf07f6u);
    X86_TICK(c, 9);
    // 0f07f6  add esp, 4
    X86_AT(c, 0xf07f6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f07f9  dec eax
    X86_AT(c, 0xf07f9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f07fa  je 0xf0903
    X86_AT(c, 0xf07fau);
    if (x86_cc(c, 4)) { goto L_f0903; }
    X86_TICK(c, 17);
    // 0f0800  push 0x12
    X86_AT(c, 0xf0800u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0f0802  push 0x26
    X86_AT(c, 0xf0802u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f0804  push 3
    X86_AT(c, 0xf0804u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0f0806  push 0
    X86_AT(c, 0xf0806u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f0808  push 6
    X86_AT(c, 0xf0808u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f080a  call 0xe739c
    X86_AT(c, 0xf080au);
    push32(c, 0xf080fu); f_000e739c(c); X86_RET(c, 0xf080fu);
    X86_TICK(c, 19);
    // 0f080f  mov edi, 3
    X86_AT(c, 0xf080fu);
    c.r[7] = 0x3u;
    // 0f0814  mov eax, edi
    X86_AT(c, 0xf0814u);
    c.r[0] = c.r[7];
    // 0f0816  inc edi
    X86_AT(c, 0xf0816u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f0817  push eax
    X86_AT(c, 0xf0817u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0818  push 0
    X86_AT(c, 0xf0818u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f081a  push 6
    X86_AT(c, 0xf081au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f081c  call 0xe7260
    X86_AT(c, 0xf081cu);
    push32(c, 0xf0821u); f_000e7260(c); X86_RET(c, 0xf0821u);
    X86_TICK(c, 11);
    // 0f0821  push 0x4f20
    X86_AT(c, 0xf0821u);
    { uint32_t v = 0x4F20u; push32(c, v); }
    // 0f0826  push 6
    X86_AT(c, 0xf0826u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0828  call 0xe5654
    X86_AT(c, 0xf0828u);
    push32(c, 0xf082du); f_000e5654(c); X86_RET(c, 0xf082du);
    X86_TICK(c, 9);
    // 0f082d  push 6
    X86_AT(c, 0xf082du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f082f  call 0xe6c68
    X86_AT(c, 0xf082fu);
    push32(c, 0xf0834u); f_000e6c68(c); X86_RET(c, 0xf0834u);
    X86_TICK(c, 4);
    // 0f0834  sub esi, esi
    X86_AT(c, 0xf0834u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0f0836  add esp, 0x2c
    X86_AT(c, 0xf0836u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
L_f0839:
    X86_TICK(c, 7);
    // 0f0839  cmp esi, 0x10
    X86_AT(c, 0xf0839u);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0f083c  jge 0xf08f6
    X86_AT(c, 0xf083cu);
    if (x86_cc(c, 13)) { goto L_f08f6; }
    X86_TICK(c, 12);
    // 0f0842  cmp dword ptr [ebx + esi*4 + 0x9b], 0
    X86_AT(c, 0xf0842u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] * 4 + 0x9Bu))), 0x0u, 0, 4);
    // 0f084a  jle 0xf08f0
    X86_AT(c, 0xf084au);
    if (x86_cc(c, 14)) { goto L_f08f0; }
    X86_TICK(c, 20);
    // 0f0850  mov eax, edi
    X86_AT(c, 0xf0850u);
    c.r[0] = c.r[7];
    // 0f0852  inc edi
    X86_AT(c, 0xf0852u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0f0853  push eax
    X86_AT(c, 0xf0853u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0854  push dword ptr [ebp - 4]
    X86_AT(c, 0xf0854u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0f0857  push 6
    X86_AT(c, 0xf0857u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0859  call 0xe7260
    X86_AT(c, 0xf0859u);
    push32(c, 0xf085eu); f_000e7260(c); X86_RET(c, 0xf085eu);
    X86_TICK(c, 21);
    // 0f085e  mov eax, esi
    X86_AT(c, 0xf085eu);
    c.r[0] = c.r[6];
    // 0f0860  add al, 0x41
    X86_AT(c, 0xf0860u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x41u, 0, 1)); }
    // 0f0862  mov byte ptr [ebp - 7], al
    X86_AT(c, 0xf0862u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u)), g8(c, 0));
    // 0f0865  lea edx, [ebp - 7]
    X86_AT(c, 0xf0865u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF9u);
    // 0f0868  push edx
    X86_AT(c, 0xf0868u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0f0869  push 6
    X86_AT(c, 0xf0869u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f086b  mov byte ptr [ebp - 0xc], al
    X86_AT(c, 0xf086bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), g8(c, 0));
    // 0f086e  call 0xe70ec
    X86_AT(c, 0xf086eu);
    push32(c, 0xf0873u); f_000e70ec(c); X86_RET(c, 0xf0873u);
    X86_TICK(c, 11);
    // 0f0873  push 0x4f46
    X86_AT(c, 0xf0873u);
    { uint32_t v = 0x4F46u; push32(c, v); }
    // 0f0878  push 6
    X86_AT(c, 0xf0878u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f087a  call 0xe6cb0
    X86_AT(c, 0xf087au);
    push32(c, 0xf087fu); f_000e6cb0(c); X86_RET(c, 0xf087fu);
    X86_TICK(c, 20);
    // 0f087f  lea eax, [ebp - 5]
    X86_AT(c, 0xf087fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0f0882  push eax
    X86_AT(c, 0xf0882u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0883  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xf0883u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0f0886  push 0x10
    X86_AT(c, 0xf0886u);
    { uint32_t v = 0x10u; push32(c, v); }
    // 0f0888  push 0xd0638
    X86_AT(c, 0xf0888u);
    { uint32_t v = 0xD0638u; push32(c, v); }
    // 0f088d  call 0xe53e0
    X86_AT(c, 0xf088du);
    push32(c, 0xf0892u); f_000e53e0(c); X86_RET(c, 0xf0892u);
    X86_TICK(c, 11);
    // 0f0892  push eax
    X86_AT(c, 0xf0892u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0f0893  push 6
    X86_AT(c, 0xf0893u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0895  call 0xe6cb0
    X86_AT(c, 0xf0895u);
    push32(c, 0xf089au); f_000e6cb0(c); X86_RET(c, 0xf089au);
    X86_TICK(c, 11);
    // 0f089a  push 0x4f4c
    X86_AT(c, 0xf089au);
    { uint32_t v = 0x4F4Cu; push32(c, v); }
    // 0f089f  push 6
    X86_AT(c, 0xf089fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f08a1  call 0xe6cb0
    X86_AT(c, 0xf08a1u);
    push32(c, 0xf08a6u); f_000e6cb0(c); X86_RET(c, 0xf08a6u);
    X86_TICK(c, 18);
    // 0f08a6  add esp, 0x3c
    X86_AT(c, 0xf08a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0f08a9  push 2
    X86_AT(c, 0xf08a9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0f08ab  push dword ptr [ebx + esi*4 + 0x9b]
    X86_AT(c, 0xf08abu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[6] * 4 + 0x9Bu))); push32(c, v); }
    // 0f08b2  push 6
    X86_AT(c, 0xf08b2u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f08b4  call 0xe5630
    X86_AT(c, 0xf08b4u);
    push32(c, 0xf08b9u); f_000e5630(c); X86_RET(c, 0xf08b9u);
    X86_TICK(c, 11);
    // 0f08b9  push 0x4f50
    X86_AT(c, 0xf08b9u);
    { uint32_t v = 0x4F50u; push32(c, v); }
    // 0f08be  push 6
    X86_AT(c, 0xf08beu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f08c0  call 0xe6cb0
    X86_AT(c, 0xf08c0u);
    push32(c, 0xf08c5u); f_000e6cb0(c); X86_RET(c, 0xf08c5u);
    X86_TICK(c, 9);
    // 0f08c5  add esp, 0x14
    X86_AT(c, 0xf08c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0f08c8  cmp edi, 0xd
    X86_AT(c, 0xf08c8u);
    (void)x86_sub(c, c.r[7], 0xDu, 0, 4);
    // 0f08cb  jle 0xf08f0
    X86_AT(c, 0xf08cbu);
    if (x86_cc(c, 14)) { goto L_f08f0; }
    X86_TICK(c, 9);
    // 0f08cd  push 6
    X86_AT(c, 0xf08cdu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f08cf  call 0xefeb0
    X86_AT(c, 0xf08cfu);
    push32(c, 0xf08d4u); f_000efeb0(c); X86_RET(c, 0xf08d4u);
    X86_TICK(c, 9);
    // 0f08d4  add esp, 4
    X86_AT(c, 0xf08d4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f08d7  dec eax
    X86_AT(c, 0xf08d7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f08d8  je 0xf0903
    X86_AT(c, 0xf08d8u);
    if (x86_cc(c, 4)) { goto L_f0903; }
    X86_TICK(c, 19);
    // 0f08da  mov edi, 4
    X86_AT(c, 0xf08dau);
    c.r[7] = 0x4u;
    // 0f08df  push 0x12
    X86_AT(c, 0xf08dfu);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0f08e1  push 0x26
    X86_AT(c, 0xf08e1u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f08e3  push edi
    X86_AT(c, 0xf08e3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0f08e4  push 0
    X86_AT(c, 0xf08e4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f08e6  push 6
    X86_AT(c, 0xf08e6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f08e8  call 0xe739c
    X86_AT(c, 0xf08e8u);
    push32(c, 0xf08edu); f_000e739c(c); X86_RET(c, 0xf08edu);
    X86_TICK(c, 2);
    // 0f08ed  add esp, 0x14
    X86_AT(c, 0xf08edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_f08f0:
    X86_TICK(c, 9);
    // 0f08f0  inc esi
    X86_AT(c, 0xf08f0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0f08f1  jmp 0xf0839
    X86_AT(c, 0xf08f1u);
    X86_POLL(c, 0xf0839u); goto L_f0839;
L_f08f6:
    X86_TICK(c, 9);
    // 0f08f6  push 6
    X86_AT(c, 0xf08f6u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f08f8  call 0xefeb0
    X86_AT(c, 0xf08f8u);
    push32(c, 0xf08fdu); f_000efeb0(c); X86_RET(c, 0xf08fdu);
    X86_TICK(c, 9);
    // 0f08fd  add esp, 4
    X86_AT(c, 0xf08fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0f0900  dec eax
    X86_AT(c, 0xf0900u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0f0901  jne 0xf0911
    X86_AT(c, 0xf0901u);
    if (x86_cc(c, 5)) { goto L_f0911; }
L_f0903:
    X86_TICK(c, 11);
    // 0f0903  push 0
    X86_AT(c, 0xf0903u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f0905  push 6
    X86_AT(c, 0xf0905u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f0907  call 0xe6b70
    X86_AT(c, 0xf0907u);
    push32(c, 0xf090cu); f_000e6b70(c); X86_RET(c, 0xf090cu);
    X86_TICK(c, 9);
    // 0f090c  add esp, 8
    X86_AT(c, 0xf090cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0f090f  jmp 0xf0923
    X86_AT(c, 0xf090fu);
    goto L_f0923;
L_f0911:
    X86_TICK(c, 17);
    // 0f0911  push 0x12
    X86_AT(c, 0xf0911u);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0f0913  push 0x26
    X86_AT(c, 0xf0913u);
    { uint32_t v = 0x26u; push32(c, v); }
    // 0f0915  push 1
    X86_AT(c, 0xf0915u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0f0917  push 0
    X86_AT(c, 0xf0917u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0f0919  push 6
    X86_AT(c, 0xf0919u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0f091b  call 0xe739c
    X86_AT(c, 0xf091bu);
    push32(c, 0xf0920u); f_000e739c(c); X86_RET(c, 0xf0920u);
    X86_TICK(c, 2);
    // 0f0920  add esp, 0x14
    X86_AT(c, 0xf0920u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_f0923:
    X86_TICK(c, 28);
    // 0f0923  pop edi
    X86_AT(c, 0xf0923u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0f0924  pop esi
    X86_AT(c, 0xf0924u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0f0925  pop ebx
    X86_AT(c, 0xf0925u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0f0926  leave 
    X86_AT(c, 0xf0926u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0f0927  ret 
    X86_AT(c, 0xf0927u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf00e8u, "ran off the end of a function");
}
}

#include "p_game_funcs.h"
namespace p_game {
void f_00103cf3(X86Cpu& c) {
    X86_TICK(c, 13);
    // 103cf3  esc 8, byte ptr [esp + 4]
    X86_AT(c, 0x103cf3u);
    // 103cf7  ret 4
    X86_AT(c, 0x103cf7u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103cf3u, "ran off the end of a function");
}
void f_00103cfa(X86Cpu& c) {
    X86_TICK(c, 27);
    // 103cfa  esc 0x2b, byte ptr [0xe012a]
    X86_AT(c, 0x103cfau);
    // 103d00  wait 
    X86_AT(c, 0x103d00u);
    // 103d01  mov eax, dword ptr [0xe012a]
    X86_AT(c, 0x103d01u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE012Au)));
    // 103d06  mov edx, dword ptr [0xe012e]
    X86_AT(c, 0x103d06u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE012Eu)));
    // 103d0c  ret 
    X86_AT(c, 0x103d0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103cfau, "ran off the end of a function");
}
void f_00103d0d(X86Cpu& c) {
    X86_TICK(c, 13);
    // 103d0d  esc 0x28, byte ptr [esp + 4]
    X86_AT(c, 0x103d0du);
    // 103d11  ret 8
    X86_AT(c, 0x103d11u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x103d0du, "ran off the end of a function");
}
void f_00103d14(X86Cpu& c) {
    X86_TICK(c, 23);
    // 103d14  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x103d14u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 103d18  esc 0x1f, byte ptr [eax]
    X86_AT(c, 0x103d18u);
    // 103d1a  wait 
    X86_AT(c, 0x103d1au);
    // 103d1b  ret 4
    X86_AT(c, 0x103d1bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103d14u, "ran off the end of a function");
}
void f_00103d1e(X86Cpu& c) {
    X86_TICK(c, 17);
    // 103d1e  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x103d1eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 103d22  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0x103d22u);
    // 103d24  ret 4
    X86_AT(c, 0x103d24u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103d1eu, "ran off the end of a function");
}
void f_00103d27(X86Cpu& c) {
    X86_TICK(c, 13);
    // 103d27  esc 0x2b, al
    X86_AT(c, 0x103d27u);
    // 103d29  ret 
    X86_AT(c, 0x103d29u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103d27u, "ran off the end of a function");
}
void f_00103d2a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 103d2a  xor eax, eax
    X86_AT(c, 0x103d2au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 103d2c  call 0x103c64
    X86_AT(c, 0x103d2cu);
    push32(c, 0x103d31u); f_00103c64(c); X86_RET(c, 0x103d31u);
    X86_TICK(c, 5);
    // 103d31  je 0x103d38
    X86_AT(c, 0x103d31u);
    if (x86_cc(c, 4)) { goto L_103d38; }
    X86_TICK(c, 5);
    // 103d33  jb 0x103d37
    X86_AT(c, 0x103d33u);
    if (x86_cc(c, 2)) { goto L_103d37; }
    X86_TICK(c, 12);
    // 103d35  inc eax
    X86_AT(c, 0x103d35u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 103d36  ret 
    X86_AT(c, 0x103d36u);
    c.eip = pop32(c); return;
L_103d37:
    X86_TICK(c, 2);
    // 103d37  dec eax
    X86_AT(c, 0x103d37u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_103d38:
    X86_TICK(c, 10);
    // 103d38  ret 
    X86_AT(c, 0x103d38u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103d2au, "ran off the end of a function");
}
void f_00103d41(X86Cpu& c) {
    X86_TICK(c, 9);
    // 103d41  mov cx, 0xc00
    X86_AT(c, 0x103d41u);
    s16(c, 1, 0xC00u);
    // 103d45  call 0x103c44
    X86_AT(c, 0x103d45u);
    push32(c, 0x103d4au); f_00103c44(c); X86_RET(c, 0x103d4au);
    X86_TICK(c, 20);
    // 103d4a  esc 0x3f, byte ptr [0xe012a]
    X86_AT(c, 0x103d4au);
    // 103d50  esc 0xd, byte ptr [0xe0128]
    X86_AT(c, 0x103d50u);
    // 103d56  mov eax, dword ptr [0xe012a]
    X86_AT(c, 0x103d56u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE012Au)));
    // 103d5b  ret 
    X86_AT(c, 0x103d5bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103d41u, "ran off the end of a function");
}
void f_00103d5c(X86Cpu& c) {
    goto L_103d5c;
L_103d4a:
    X86_TICK(c, 20);
    // 103d4a  esc 0x3f, byte ptr [0xe012a]
    X86_AT(c, 0x103d4au);
    // 103d50  esc 0xd, byte ptr [0xe0128]
    X86_AT(c, 0x103d50u);
    // 103d56  mov eax, dword ptr [0xe012a]
    X86_AT(c, 0x103d56u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE012Au)));
    // 103d5b  ret 
    X86_AT(c, 0x103d5bu);
    c.eip = pop32(c); return;
L_103d5c:
    X86_TICK(c, 9);
    // 103d5c  mov cx, 0
    X86_AT(c, 0x103d5cu);
    s16(c, 1, 0x0u);
    // 103d60  call 0x103c44
    X86_AT(c, 0x103d60u);
    push32(c, 0x103d65u); f_00103c44(c); X86_RET(c, 0x103d65u);
    X86_TICK(c, 7);
    // 103d65  jmp 0x103d4a
    X86_AT(c, 0x103d65u);
    X86_POLL(c, 0x103d4au); goto L_103d4a;
    x86_fault(c, 0x103d5cu, "ran off the end of a function");
}
void f_00103d67(X86Cpu& c) {
    X86_TICK(c, 24);
    // 103d67  esc 0xc, ch
    X86_AT(c, 0x103d67u);
    // 103d69  xor eax, eax
    X86_AT(c, 0x103d69u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 103d6b  esc 0x3c, al
    X86_AT(c, 0x103d6bu);
    // 103d6d  wait 
    X86_AT(c, 0x103d6du);
    // 103d6e  ret 
    X86_AT(c, 0x103d6eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103d67u, "ran off the end of a function");
}
void f_00103d6f(X86Cpu& c) {
    X86_TICK(c, 23);
    // 103d6f  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x103d6fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 103d73  esc 0x3e, byte ptr [eax]
    X86_AT(c, 0x103d73u);
    // 103d75  wait 
    X86_AT(c, 0x103d75u);
    // 103d76  ret 4
    X86_AT(c, 0x103d76u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103d6fu, "ran off the end of a function");
}
void f_00103d79(X86Cpu& c) {
    X86_TICK(c, 23);
    // 103d79  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x103d79u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 103d7d  esc 0x3c, byte ptr [eax]
    X86_AT(c, 0x103d7du);
    // 103d7f  wait 
    X86_AT(c, 0x103d7fu);
    // 103d80  ret 4
    X86_AT(c, 0x103d80u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103d79u, "ran off the end of a function");
}
void f_00103d84(X86Cpu& c) {
    X86_TICK(c, 40);
    // 103d84  push ebp
    X86_AT(c, 0x103d84u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103d85  mov ebp, esp
    X86_AT(c, 0x103d85u);
    c.r[5] = c.r[4];
    // 103d87  push esi
    X86_AT(c, 0x103d87u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 103d88  push edi
    X86_AT(c, 0x103d88u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103d89  push ebx
    X86_AT(c, 0x103d89u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 103d8a  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x103d8au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 103d8d  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x103d8du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 103d90  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x103d90u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 103d94  sub eax, eax
    X86_AT(c, 0x103d94u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 103d96  cld 
    X86_AT(c, 0x103d96u);
    c.fl &= ~X86_DF;
    // 103d97  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0x103d97u);
    x86_string(c, 1, 1, 243, 4, 3);
    // 103d99  jb 0x103da0
    X86_AT(c, 0x103d99u);
    if (x86_cc(c, 2)) { goto L_103da0; }
    X86_TICK(c, 5);
    // 103d9b  je 0x103da1
    X86_AT(c, 0x103d9bu);
    if (x86_cc(c, 4)) { goto L_103da1; }
    X86_TICK(c, 9);
    // 103d9d  inc eax
    X86_AT(c, 0x103d9du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 103d9e  jmp 0x103da1
    X86_AT(c, 0x103d9eu);
    goto L_103da1;
L_103da0:
    X86_TICK(c, 2);
    // 103da0  dec eax
    X86_AT(c, 0x103da0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_103da1:
    X86_TICK(c, 26);
    // 103da1  pop ebx
    X86_AT(c, 0x103da1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 103da2  pop edi
    X86_AT(c, 0x103da2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 103da3  pop esi
    X86_AT(c, 0x103da3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 103da4  pop ebp
    X86_AT(c, 0x103da4u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 103da5  ret 0xc
    X86_AT(c, 0x103da5u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x103d84u, "ran off the end of a function");
}
void f_00103da8(X86Cpu& c) {
    X86_TICK(c, 36);
    // 103da8  push ebp
    X86_AT(c, 0x103da8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103da9  mov ebp, esp
    X86_AT(c, 0x103da9u);
    c.r[5] = c.r[4];
    // 103dab  push esi
    X86_AT(c, 0x103dabu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 103dac  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x103dacu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 103daf  mov edx, dword ptr [eax + 4]
    X86_AT(c, 0x103dafu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 103db2  mov esi, edx
    X86_AT(c, 0x103db2u);
    c.r[6] = c.r[2];
    // 103db4  shr esi, 0x14
    X86_AT(c, 0x103db4u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x14u, 4, w); if (w) c.r[6] = r; }
    // 103db7  mov ecx, dword ptr [eax]
    X86_AT(c, 0x103db7u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 103db9  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x103db9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 103dbc  and si, 0x7ff
    X86_AT(c, 0x103dbcu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & 0x7FFu, 2)); }
    // 103dc1  cmp si, 0x7ff
    X86_AT(c, 0x103dc1u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x7FFu, 0, 2);
    // 103dc6  je 0x103e0d
    X86_AT(c, 0x103dc6u);
    if (x86_cc(c, 4)) { goto L_103e0d; }
    X86_TICK(c, 7);
    // 103dc8  and si, si
    X86_AT(c, 0x103dc8u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 103dcb  je 0x103e17
    X86_AT(c, 0x103dcbu);
    if (x86_cc(c, 4)) { goto L_103e17; }
    X86_TICK(c, 6);
    // 103dcd  mov byte ptr [eax + 0xb], 0
    X86_AT(c, 0x103dcdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x0u);
    // 103dd1  sub si, 0x3ff
    X86_AT(c, 0x103dd1u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_sub(c, v, 0x3FFu, 0, 2)); }
    // 103dd6  add si, 0x3fff
    X86_AT(c, 0x103dd6u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x3FFFu, 0, 2)); }
L_103ddb:
    X86_TICK(c, 9);
    // 103ddb  mov word ptr [eax + 8], si
    X86_AT(c, 0x103ddbu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), (c.r[6] & 0xFFFFu));
    // 103ddf  test edx, 0x80000000
    X86_AT(c, 0x103ddfu);
    (void)x86_logic(c, c.r[2] & 0x80000000u, 4);
    // 103de5  je 0x103ded
    X86_AT(c, 0x103de5u);
    if (x86_cc(c, 4)) { goto L_103ded; }
    X86_TICK(c, 9);
    // 103de7  mov byte ptr [eax + 0xa], 1
    X86_AT(c, 0x103de7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x1u);
    // 103deb  jmp 0x103df1
    X86_AT(c, 0x103debu);
    goto L_103df1;
L_103ded:
    X86_TICK(c, 2);
    // 103ded  mov byte ptr [eax + 0xa], 0
    X86_AT(c, 0x103dedu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x0u);
L_103df1:
    X86_TICK(c, 13);
    // 103df1  shld edx, ecx, 0xb
    X86_AT(c, 0x103df1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0xBu, 4, w); if (w) c.r[2] = r; }
    // 103df5  shl ecx, 0xb
    X86_AT(c, 0x103df5u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 4, w); if (w) c.r[1] = r; }
    // 103df8  and si, si
    X86_AT(c, 0x103df8u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 103dfb  je 0x103e03
    X86_AT(c, 0x103dfbu);
    if (x86_cc(c, 4)) { goto L_103e03; }
    X86_TICK(c, 2);
    // 103dfd  or edx, 0x80000000
    X86_AT(c, 0x103dfdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | 0x80000000u, 4); }
L_103e03:
    X86_TICK(c, 22);
    // 103e03  mov dword ptr [eax + 4], edx
    X86_AT(c, 0x103e03u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), c.r[2]);
    // 103e06  mov dword ptr [eax], ecx
    X86_AT(c, 0x103e06u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[1]);
    // 103e08  pop esi
    X86_AT(c, 0x103e08u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 103e09  pop ebp
    X86_AT(c, 0x103e09u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 103e0a  ret 8
    X86_AT(c, 0x103e0au);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_103e0d:
    X86_TICK(c, 11);
    // 103e0d  mov si, 0x7fff
    X86_AT(c, 0x103e0du);
    s16(c, 6, 0x7FFFu);
    // 103e11  mov byte ptr [eax + 0xb], 0
    X86_AT(c, 0x103e11u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x0u);
    // 103e15  jmp 0x103ddb
    X86_AT(c, 0x103e15u);
    X86_POLL(c, 0x103ddbu); goto L_103ddb;
L_103e17:
    X86_TICK(c, 9);
    // 103e17  mov byte ptr [eax + 0xb], 1
    X86_AT(c, 0x103e17u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x1u);
    // 103e1b  jmp 0x103ddb
    X86_AT(c, 0x103e1bu);
    X86_POLL(c, 0x103ddbu); goto L_103ddb;
    x86_fault(c, 0x103da8u, "ran off the end of a function");
}
void f_00103e1d(X86Cpu& c) {
    X86_TICK(c, 33);
    // 103e1d  push ebp
    X86_AT(c, 0x103e1du);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103e1e  mov ebp, esp
    X86_AT(c, 0x103e1eu);
    c.r[5] = c.r[4];
    // 103e20  push esi
    X86_AT(c, 0x103e20u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 103e21  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x103e21u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 103e24  mov ecx, dword ptr [eax]
    X86_AT(c, 0x103e24u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 103e26  mov edx, dword ptr [eax + 4]
    X86_AT(c, 0x103e26u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 103e29  movzx esi, word ptr [eax + 8]
    X86_AT(c, 0x103e29u);
    c.r[6] = rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 103e2d  sub si, 0x3fff
    X86_AT(c, 0x103e2du);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 103e32  cmp si, 0xfc02
    X86_AT(c, 0x103e32u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0xFC02u, 0, 2);
    // 103e37  jl 0x103e9a
    X86_AT(c, 0x103e37u);
    if (x86_cc(c, 12)) { goto L_103e9a; }
    X86_TICK(c, 7);
    // 103e39  cmp si, 0x3ff
    X86_AT(c, 0x103e39u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x3FFu, 0, 2);
    // 103e3e  jg 0x103e93
    X86_AT(c, 0x103e3eu);
    if (x86_cc(c, 15)) { goto L_103e93; }
    X86_TICK(c, 27);
    // 103e40  add si, 0x3ff
    X86_AT(c, 0x103e40u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x3FFu, 0, 2)); }
    // 103e45  and edx, 0x7fffffff
    X86_AT(c, 0x103e45u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7FFFFFFFu, 4); }
    // 103e4b  shrd ecx, edx, 0xb
    X86_AT(c, 0x103e4bu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], 0xBu, 4, w); if (w) c.r[1] = r; }
    // 103e4f  pushf 
    X86_AT(c, 0x103e4fu);
    push16(c, c.fl & 0xFFFFu);
    // 103e51  shr edx, 0xb
    X86_AT(c, 0x103e51u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0xBu, 4, w); if (w) c.r[2] = r; }
    // 103e54  popf 
    X86_AT(c, 0x103e54u);
    x86_popfd(c, 2);
    // 103e56  jae 0x103e75
    X86_AT(c, 0x103e56u);
    if (x86_cc(c, 3)) { goto L_103e75; }
    X86_TICK(c, 11);
    // 103e58  add ecx, 1
    X86_AT(c, 0x103e58u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x1u, 0, 4); }
    // 103e5b  adc edx, 0
    X86_AT(c, 0x103e5bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 103e5e  test edx, 0x100000
    X86_AT(c, 0x103e5eu);
    (void)x86_logic(c, c.r[2] & 0x100000u, 4);
    // 103e64  je 0x103e75
    X86_AT(c, 0x103e64u);
    if (x86_cc(c, 4)) { goto L_103e75; }
    X86_TICK(c, 11);
    // 103e66  xor edx, 0x100000
    X86_AT(c, 0x103e66u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ 0x100000u, 4); }
    // 103e6c  inc si
    X86_AT(c, 0x103e6cu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 103e6e  cmp si, 0x7fe
    X86_AT(c, 0x103e6eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x7FEu, 0, 2);
    // 103e73  jg 0x103e93
    X86_AT(c, 0x103e73u);
    if (x86_cc(c, 15)) { goto L_103e93; }
L_103e75:
    X86_TICK(c, 15);
    // 103e75  shl esi, 0x14
    X86_AT(c, 0x103e75u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x14u, 4, w); if (w) c.r[6] = r; }
    // 103e78  test byte ptr [eax + 0xa], 1
    X86_AT(c, 0x103e78u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))) & 0x1u, 1);
    // 103e7c  je 0x103e84
    X86_AT(c, 0x103e7cu);
    if (x86_cc(c, 4)) { goto L_103e84; }
    X86_TICK(c, 2);
    // 103e7e  or edx, 0x80000000
    X86_AT(c, 0x103e7eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | 0x80000000u, 4); }
L_103e84:
    X86_TICK(c, 2);
    // 103e84  or edx, esi
    X86_AT(c, 0x103e84u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[6], 4); }
L_103e86:
    X86_TICK(c, 26);
    // 103e86  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x103e86u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 103e89  mov dword ptr [eax + 4], edx
    X86_AT(c, 0x103e89u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), c.r[2]);
    // 103e8c  mov dword ptr [eax], ecx
    X86_AT(c, 0x103e8cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[1]);
    // 103e8e  pop esi
    X86_AT(c, 0x103e8eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 103e8f  pop ebp
    X86_AT(c, 0x103e8fu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 103e90  ret 8
    X86_AT(c, 0x103e90u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_103e93:
    X86_TICK(c, 9);
    // 103e93  mov edx, 0x7ff00000
    X86_AT(c, 0x103e93u);
    c.r[2] = 0x7FF00000u;
    // 103e98  jmp 0x103e9c
    X86_AT(c, 0x103e98u);
    goto L_103e9c;
L_103e9a:
    X86_TICK(c, 2);
    // 103e9a  xor edx, edx
    X86_AT(c, 0x103e9au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
L_103e9c:
    X86_TICK(c, 9);
    // 103e9c  xor ecx, ecx
    X86_AT(c, 0x103e9cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
    // 103e9e  jmp 0x103e86
    X86_AT(c, 0x103e9eu);
    X86_POLL(c, 0x103e86u); goto L_103e86;
    x86_fault(c, 0x103e1du, "ran off the end of a function");
}
void f_00103ea0(X86Cpu& c) {
    X86_TICK(c, 31);
    // 103ea0  push ebp
    X86_AT(c, 0x103ea0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103ea1  mov ebp, esp
    X86_AT(c, 0x103ea1u);
    c.r[5] = c.r[4];
    // 103ea3  push esi
    X86_AT(c, 0x103ea3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 103ea4  push edi
    X86_AT(c, 0x103ea4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103ea5  push ebx
    X86_AT(c, 0x103ea5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 103ea6  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x103ea6u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 103ea9  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x103ea9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 103eac  xor edx, edx
    X86_AT(c, 0x103eacu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 103eae  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x103eaeu);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 103eb2  shr ecx, 1
    X86_AT(c, 0x103eb2u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 103eb4  clc 
    X86_AT(c, 0x103eb4u);
    c.fl &= ~X86_CF;
L_103eb5:
    X86_TICK(c, 24);
    // 103eb5  mov eax, dword ptr [edi + edx*4]
    X86_AT(c, 0x103eb5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 4)));
    // 103eb8  adc dword ptr [esi + edx*4], eax
    X86_AT(c, 0x103eb8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], c.fl & 1, 4)); }
    // 103ebb  inc edx
    X86_AT(c, 0x103ebbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 103ebc  loop 0x103eb5
    X86_AT(c, 0x103ebcu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x103eb5u); goto L_103eb5; }
    X86_TICK(c, 31);
    // 103ebe  mov al, 0
    X86_AT(c, 0x103ebeu);
    s8(c, 0, 0x0u);
    // 103ec0  rcl al, 1
    X86_AT(c, 0x103ec0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 103ec2  pop ebx
    X86_AT(c, 0x103ec2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 103ec3  pop edi
    X86_AT(c, 0x103ec3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 103ec4  pop esi
    X86_AT(c, 0x103ec4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 103ec5  pop ebp
    X86_AT(c, 0x103ec5u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 103ec6  ret 0xc
    X86_AT(c, 0x103ec6u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x103ea0u, "ran off the end of a function");
}
void f_00103ec9(X86Cpu& c) {
    X86_TICK(c, 28);
    // 103ec9  push ebp
    X86_AT(c, 0x103ec9u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103eca  mov ebp, esp
    X86_AT(c, 0x103ecau);
    c.r[5] = c.r[4];
    // 103ecc  push esi
    X86_AT(c, 0x103eccu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 103ecd  push edi
    X86_AT(c, 0x103ecdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103ece  push ebx
    X86_AT(c, 0x103eceu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 103ecf  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x103ecfu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 103ed2  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x103ed2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 103ed5  xor edx, edx
    X86_AT(c, 0x103ed5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 103ed7  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x103ed7u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 103edb  clc 
    X86_AT(c, 0x103edbu);
    c.fl &= ~X86_CF;
L_103edc:
    X86_TICK(c, 24);
    // 103edc  mov ax, word ptr [edi + edx*2]
    X86_AT(c, 0x103edcu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 2))));
    // 103ee0  sbb word ptr [esi + edx*2], ax
    X86_AT(c, 0x103ee0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), c.fl & 1, 2)); }
    // 103ee4  inc edx
    X86_AT(c, 0x103ee4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 103ee5  loop 0x103edc
    X86_AT(c, 0x103ee5u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x103edcu); goto L_103edc; }
    X86_TICK(c, 31);
    // 103ee7  mov al, 0
    X86_AT(c, 0x103ee7u);
    s8(c, 0, 0x0u);
    // 103ee9  rcl al, 1
    X86_AT(c, 0x103ee9u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 103eeb  pop ebx
    X86_AT(c, 0x103eebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 103eec  pop edi
    X86_AT(c, 0x103eecu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 103eed  pop esi
    X86_AT(c, 0x103eedu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 103eee  pop ebp
    X86_AT(c, 0x103eeeu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 103eef  ret 0xc
    X86_AT(c, 0x103eefu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x103ec9u, "ran off the end of a function");
}
void f_00103ef2(X86Cpu& c) {
    X86_TICK(c, 31);
    // 103ef2  push ebp
    X86_AT(c, 0x103ef2u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 103ef3  mov ebp, esp
    X86_AT(c, 0x103ef3u);
    c.r[5] = c.r[4];
    // 103ef5  push esi
    X86_AT(c, 0x103ef5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 103ef6  push edi
    X86_AT(c, 0x103ef6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103ef7  push ebx
    X86_AT(c, 0x103ef7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 103ef8  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x103ef8u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 103efb  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x103efbu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 103efe  xor edx, edx
    X86_AT(c, 0x103efeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 103f00  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x103f00u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 103f04  shr ecx, 1
    X86_AT(c, 0x103f04u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 103f06  clc 
    X86_AT(c, 0x103f06u);
    c.fl &= ~X86_CF;
L_103f07:
    X86_TICK(c, 25);
    // 103f07  mov eax, dword ptr [edi + edx*4]
    X86_AT(c, 0x103f07u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 4)));
    // 103f0a  sbb eax, dword ptr [esi + edx*4]
    X86_AT(c, 0x103f0au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4))), c.fl & 1, 4); }
    // 103f0d  mov dword ptr [esi + edx*4], eax
    X86_AT(c, 0x103f0du);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)), c.r[0]);
    // 103f10  inc edx
    X86_AT(c, 0x103f10u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 103f11  loop 0x103f07
    X86_AT(c, 0x103f11u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x103f07u); goto L_103f07; }
    X86_TICK(c, 31);
    // 103f13  mov al, 0
    X86_AT(c, 0x103f13u);
    s8(c, 0, 0x0u);
    // 103f15  rcl al, 1
    X86_AT(c, 0x103f15u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 103f17  pop ebx
    X86_AT(c, 0x103f17u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 103f18  pop edi
    X86_AT(c, 0x103f18u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 103f19  pop esi
    X86_AT(c, 0x103f19u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 103f1a  pop ebp
    X86_AT(c, 0x103f1au);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 103f1b  ret 0xc
    X86_AT(c, 0x103f1bu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x103ef2u, "ran off the end of a function");
}
void f_00103f1e(X86Cpu& c) {
    X86_TICK(c, 19);
    // 103f1e  push esi
    X86_AT(c, 0x103f1eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 103f1f  mov esi, dword ptr [esp + 8]
    X86_AT(c, 0x103f1fu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 103f23  movzx ecx, word ptr [esp + 0xc]
    X86_AT(c, 0x103f23u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 103f28  shr ecx, 1
    X86_AT(c, 0x103f28u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 103f2a  xor edx, edx
    X86_AT(c, 0x103f2au);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 103f2c  clc 
    X86_AT(c, 0x103f2cu);
    c.fl &= ~X86_CF;
L_103f2d:
    X86_TICK(c, 23);
    // 103f2d  mov eax, 0
    X86_AT(c, 0x103f2du);
    c.r[0] = 0x0u;
    // 103f32  sbb eax, dword ptr [esi + edx*4]
    X86_AT(c, 0x103f32u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4))), c.fl & 1, 4); }
    // 103f35  mov dword ptr [esi + edx*4], eax
    X86_AT(c, 0x103f35u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)), c.r[0]);
    // 103f38  inc edx
    X86_AT(c, 0x103f38u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 103f39  loop 0x103f2d
    X86_AT(c, 0x103f39u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x103f2du); goto L_103f2d; }
    X86_TICK(c, 19);
    // 103f3b  mov al, 0
    X86_AT(c, 0x103f3bu);
    s8(c, 0, 0x0u);
    // 103f3d  rcl al, 1
    X86_AT(c, 0x103f3du);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 103f3f  pop esi
    X86_AT(c, 0x103f3fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 103f40  ret 8
    X86_AT(c, 0x103f40u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x103f1eu, "ran off the end of a function");
}
void f_00103f43(X86Cpu& c) {
    X86_TICK(c, 18);
    // 103f43  push edi
    X86_AT(c, 0x103f43u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 103f44  push ebx
    X86_AT(c, 0x103f44u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 103f45  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x103f45u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 103f49  xor eax, eax
    X86_AT(c, 0x103f49u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 103f4b  mov ebx, dword ptr [edi + 4]
    X86_AT(c, 0x103f4bu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 103f4e  mov edx, dword ptr [edi]
    X86_AT(c, 0x103f4eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
L_103f50:
    X86_TICK(c, 7);
    // 103f50  and ebx, ebx
    X86_AT(c, 0x103f50u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 103f52  jne 0x103f5f
    X86_AT(c, 0x103f52u);
    if (x86_cc(c, 5)) { goto L_103f5f; }
    X86_TICK(c, 13);
    // 103f54  mov ebx, edx
    X86_AT(c, 0x103f54u);
    c.r[3] = c.r[2];
    // 103f56  xor edx, edx
    X86_AT(c, 0x103f56u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 103f58  add eax, 0x20
    X86_AT(c, 0x103f58u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x20u, 0, 4); }
    // 103f5d  jmp 0x103f50
    X86_AT(c, 0x103f5du);
    X86_POLL(c, 0x103f50u); goto L_103f50;
L_103f5f:
    X86_TICK(c, 44);
    // 103f5f  bsr ecx, ebx
    X86_AT(c, 0x103f5fu);
    c.r[1] = x86_bsr(c, c.r[3], c.r[1]);
    // 103f62  sub ecx, 0x1f
    X86_AT(c, 0x103f62u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x1Fu, 0, 4); }
    // 103f65  neg ecx
    X86_AT(c, 0x103f65u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 103f67  shld ebx, edx, cl
    X86_AT(c, 0x103f67u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 103f6a  shl edx, cl
    X86_AT(c, 0x103f6au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 103f6c  add eax, ecx
    X86_AT(c, 0x103f6cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 103f6e  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x103f6eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 103f71  mov dword ptr [edi], edx
    X86_AT(c, 0x103f71u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[2]);
    // 103f73  pop ebx
    X86_AT(c, 0x103f73u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 103f74  pop edi
    X86_AT(c, 0x103f74u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 103f75  ret 4
    X86_AT(c, 0x103f75u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103f43u, "ran off the end of a function");
}
void f_00103f78(X86Cpu& c) {
    X86_TICK(c, 33);
    // 103f78  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0x103f78u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 103f7c  shl dword ptr [edx], 1
    X86_AT(c, 0x103f7cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 103f7e  rcl dword ptr [edx + 4], 1
    X86_AT(c, 0x103f7eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 103f81  mov al, 0
    X86_AT(c, 0x103f81u);
    s8(c, 0, 0x0u);
    // 103f83  rcl al, 1
    X86_AT(c, 0x103f83u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 103f85  ret 4
    X86_AT(c, 0x103f85u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103f78u, "ran off the end of a function");
}
void f_00103f94(X86Cpu& c) {
    X86_TICK(c, 15);
    // 103f94  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0x103f94u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 103f98  movzx ecx, word ptr [esp + 8]
    X86_AT(c, 0x103f98u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 103f9d  jecxz 0x103fd4
    X86_AT(c, 0x103f9du);
    if (c.r[1] == 0) { goto L_103fd4; }
    X86_TICK(c, 7);
    // 103f9f  cmp ecx, 0x20
    X86_AT(c, 0x103f9fu);
    (void)x86_sub(c, c.r[1], 0x20u, 0, 4);
    // 103fa2  jl 0x103fbb
    X86_AT(c, 0x103fa2u);
    if (x86_cc(c, 12)) { goto L_103fbb; }
    X86_TICK(c, 14);
    // 103fa4  mov eax, dword ptr [edx + 4]
    X86_AT(c, 0x103fa4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)));
    // 103fa7  clc 
    X86_AT(c, 0x103fa7u);
    c.fl &= ~X86_CF;
    // 103fa8  shr eax, cl
    X86_AT(c, 0x103fa8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 103faa  jae 0x103fad
    X86_AT(c, 0x103faau);
    if (x86_cc(c, 3)) { goto L_103fad; }
    X86_TICK(c, 2);
    // 103fac  inc eax
    X86_AT(c, 0x103facu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_103fad:
    X86_TICK(c, 11);
    // 103fad  mov dword ptr [edx], eax
    X86_AT(c, 0x103fadu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 103faf  mov dword ptr [edx + 4], 0
    X86_AT(c, 0x103fafu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), 0x0u);
    // 103fb6  jmp 0x103fd4
    X86_AT(c, 0x103fb6u);
    goto L_103fd4;
L_103fbb:
    X86_TICK(c, 31);
    // 103fbb  mov eax, dword ptr [edx + 4]
    X86_AT(c, 0x103fbbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)));
    // 103fbe  shrd dword ptr [edx], eax, cl
    X86_AT(c, 0x103fbeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) wr32(ea, r); }
    // 103fc1  pushf 
    X86_AT(c, 0x103fc1u);
    push16(c, c.fl & 0xFFFFu);
    // 103fc3  shr eax, cl
    X86_AT(c, 0x103fc3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 103fc5  popf 
    X86_AT(c, 0x103fc5u);
    x86_popfd(c, 2);
    // 103fc7  jae 0x103fd1
    X86_AT(c, 0x103fc7u);
    if (x86_cc(c, 3)) { goto L_103fd1; }
    X86_TICK(c, 9);
    // 103fc9  add dword ptr [edx], 1
    X86_AT(c, 0x103fc9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x1u, 0, 4)); }
    // 103fcc  adc eax, 0
    X86_AT(c, 0x103fccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
L_103fd1:
    X86_TICK(c, 2);
    // 103fd1  mov dword ptr [edx + 4], eax
    X86_AT(c, 0x103fd1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[0]);
L_103fd4:
    X86_TICK(c, 10);
    // 103fd4  ret 8
    X86_AT(c, 0x103fd4u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x103f94u, "ran off the end of a function");
}
void f_00103fd7(X86Cpu& c) {
    X86_TICK(c, 42);
    // 103fd7  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0x103fd7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 103fdb  shl dword ptr [edx], 1
    X86_AT(c, 0x103fdbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 103fdd  rcl dword ptr [edx + 4], 1
    X86_AT(c, 0x103fddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 103fe0  rcl dword ptr [edx + 8], 1
    X86_AT(c, 0x103fe0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 103fe3  rcl dword ptr [edx + 0xc], 1
    X86_AT(c, 0x103fe3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCu)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 103fe6  ret 4
    X86_AT(c, 0x103fe6u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x103fd7u, "ran off the end of a function");
}
void f_00103fec(X86Cpu& c) {
    X86_TICK(c, 9);
    // 103fec  push 0xe2c8
    X86_AT(c, 0x103fecu);
    { uint32_t v = 0xE2C8u; push32(c, v); }
    // 103ff1  call 0x10507c
    X86_AT(c, 0x103ff1u);
    push32(c, 0x103ff6u); f_0010507c(c); X86_RET(c, 0x103ff6u);
    X86_TICK(c, 13);
    // 103ff6  mov ax, word ptr [0xe0144]
    X86_AT(c, 0x103ff6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE0144u))));
    // 103ffc  push eax
    X86_AT(c, 0x103ffcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 103ffd  call 0x105068
    X86_AT(c, 0x103ffdu);
    push32(c, 0x104002u); f_00105068(c); X86_RET(c, 0x104002u);
    X86_TICK(c, 9);
    // 104002  push 1
    X86_AT(c, 0x104002u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 104004  call 0x103a24
    X86_AT(c, 0x104004u);
    push32(c, 0x104009u); f_00103a24(c); X86_RET(c, 0x104009u);
    X86_TICK(c, 10);
    // 104009  ret 
    X86_AT(c, 0x104009u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x103fecu, "ran off the end of a function");
}
void f_0010400c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 10400c  mov eax, 0xdfdec
    X86_AT(c, 0x10400cu);
    c.r[0] = 0xDFDECu;
    // 104011  cmp eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x104011u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))), 0, 4);
    // 104017  ja 0x10401e
    X86_AT(c, 0x104017u);
    if (x86_cc(c, 7)) { goto L_10401e; }
    X86_TICK(c, 7);
    // 104019  call 0x103fec
    X86_AT(c, 0x104019u);
    push32(c, 0x10401eu); f_00103fec(c); X86_RET(c, 0x10401eu);
L_10401e:
    X86_TICK(c, 17);
    // 10401e  add dword ptr [0xdfdf8], 0xc
    X86_AT(c, 0x10401eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xCu, 0, 4)); }
    // 104025  ret 
    X86_AT(c, 0x104025u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10400cu, "ran off the end of a function");
}
void f_00104028(X86Cpu& c) {
    X86_TICK(c, 17);
    // 104028  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x104028u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 10402f  ret 
    X86_AT(c, 0x10402fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104028u, "ran off the end of a function");
}
void f_00104030(X86Cpu& c) {
    X86_TICK(c, 41);
    // 104030  push ebp
    X86_AT(c, 0x104030u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 104031  mov ebp, esp
    X86_AT(c, 0x104031u);
    c.r[5] = c.r[4];
    // 104033  push esi
    X86_AT(c, 0x104033u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 104034  push edi
    X86_AT(c, 0x104034u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 104035  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x104035u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 104038  mov ax, word ptr [edi]
    X86_AT(c, 0x104038u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 10403b  or ax, word ptr [edi + 2]
    X86_AT(c, 0x10403bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 2)); }
    // 10403f  or ax, word ptr [edi + 4]
    X86_AT(c, 0x10403fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 2)); }
    // 104043  or ax, word ptr [edi + 6]
    X86_AT(c, 0x104043u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))), 2)); }
    // 104047  and ax, ax
    X86_AT(c, 0x104047u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 10404a  jne 0x10405b
    X86_AT(c, 0x10404au);
    if (x86_cc(c, 5)) { goto L_10405b; }
    X86_TICK(c, 15);
    // 10404c  sub eax, eax
    X86_AT(c, 0x10404cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 10404e  mov word ptr [edi + 8], ax
    X86_AT(c, 0x10404eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 104052  mov byte ptr [edi + 0xb], 1
    X86_AT(c, 0x104052u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), 0x1u);
    // 104056  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0x104056u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 104059  jmp 0x1040b0
    X86_AT(c, 0x104059u);
    goto L_1040b0;
L_10405b:
    X86_TICK(c, 12);
    // 10405b  cmp word ptr [edi + 8], 0x7fff
    X86_AT(c, 0x10405bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0x7FFFu, 0, 2);
    // 104061  jb 0x10407f
    X86_AT(c, 0x104061u);
    if (x86_cc(c, 2)) { goto L_10407f; }
    X86_TICK(c, 25);
    // 104063  mov ax, word ptr [0xdfe28]
    X86_AT(c, 0x104063u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xDFE28u))));
    // 104069  mov word ptr [edi + 8], ax
    X86_AT(c, 0x104069u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 10406d  mov eax, dword ptr [0xdfe20]
    X86_AT(c, 0x10406du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFE20u)));
    // 104072  mov edx, dword ptr [0xdfe24]
    X86_AT(c, 0x104072u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDFE24u)));
    // 104078  mov dword ptr [edi], eax
    X86_AT(c, 0x104078u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 10407a  mov dword ptr [edi + 4], edx
    X86_AT(c, 0x10407au);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[2]);
    // 10407d  jmp 0x1040b0
    X86_AT(c, 0x10407du);
    goto L_1040b0;
L_10407f:
    X86_TICK(c, 12);
    // 10407f  cmp byte ptr [edi + 7], 0x80
    X86_AT(c, 0x10407fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x7u))), 0x80u, 0, 1);
    // 104083  jae 0x1040b0
    X86_AT(c, 0x104083u);
    if (x86_cc(c, 3)) { goto L_1040b0; }
    X86_TICK(c, 9);
    // 104085  push edi
    X86_AT(c, 0x104085u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 104086  call 0x103f43
    X86_AT(c, 0x104086u);
    push32(c, 0x10408bu); f_00103f43(c); X86_RET(c, 0x10408bu);
    X86_TICK(c, 19);
    // 10408b  xchg esi, eax
    X86_AT(c, 0x10408bu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 10408c  movsx eax, si
    X86_AT(c, 0x10408cu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[6] & 0xFFFFu);
    // 10408f  movzx edx, word ptr [edi + 8]
    X86_AT(c, 0x10408fu);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 104093  cmp edx, eax
    X86_AT(c, 0x104093u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 104095  jl 0x10409d
    X86_AT(c, 0x104095u);
    if (x86_cc(c, 12)) { goto L_10409d; }
    X86_TICK(c, 14);
    // 104097  sub word ptr [edi + 8], si
    X86_AT(c, 0x104097u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 10409b  jmp 0x1040b0
    X86_AT(c, 0x10409bu);
    goto L_1040b0;
L_10409d:
    X86_TICK(c, 19);
    // 10409d  mov eax, esi
    X86_AT(c, 0x10409du);
    c.r[0] = c.r[6];
    // 10409f  sub ax, word ptr [edi + 8]
    X86_AT(c, 0x10409fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0, 2)); }
    // 1040a3  push eax
    X86_AT(c, 0x1040a3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1040a4  push edi
    X86_AT(c, 0x1040a4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1040a5  call 0x103f94
    X86_AT(c, 0x1040a5u);
    push32(c, 0x1040aau); f_00103f94(c); X86_RET(c, 0x1040aau);
    X86_TICK(c, 2);
    // 1040aa  mov word ptr [edi + 8], 0
    X86_AT(c, 0x1040aau);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), 0x0u);
L_1040b0:
    X86_TICK(c, 24);
    // 1040b0  pop edi
    X86_AT(c, 0x1040b0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1040b1  pop esi
    X86_AT(c, 0x1040b1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1040b2  leave 
    X86_AT(c, 0x1040b2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1040b3  ret 4
    X86_AT(c, 0x1040b3u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x104030u, "ran off the end of a function");
}
void f_001040b8(X86Cpu& c) {
    X86_TICK(c, 15);
    // 1040b8  push ebp
    X86_AT(c, 0x1040b8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1040b9  mov ebp, esp
    X86_AT(c, 0x1040b9u);
    c.r[5] = c.r[4];
    // 1040bb  push esi
    X86_AT(c, 0x1040bbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1040bc  push edi
    X86_AT(c, 0x1040bcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1040bd  call 0x10400c
    X86_AT(c, 0x1040bdu);
    push32(c, 0x1040c2u); f_0010400c(c); X86_RET(c, 0x1040c2u);
    X86_TICK(c, 41);
    // 1040c2  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x1040c2u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 1040c5  mov edi, dword ptr [0xdfdf8]
    X86_AT(c, 0x1040c5u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1040cb  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x1040cbu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 1040cc  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x1040ccu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 1040cd  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x1040cdu);
    x86_string(c, 0, 2, 0, 4, 3);
    // 1040cf  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x1040cfu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 1040d6  jne 0x104110
    X86_AT(c, 0x1040d6u);
    if (x86_cc(c, 5)) { goto L_104110; }
    X86_TICK(c, 24);
    // 1040d8  mov edi, dword ptr [0xdfdf8]
    X86_AT(c, 0x1040d8u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1040de  test byte ptr [edi + 9], 0x80
    X86_AT(c, 0x1040deu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))) & 0x80u, 1);
    // 1040e2  setne al
    X86_AT(c, 0x1040e2u);
    s8(c, 0, x86_cc(c, 5) ? 1u : 0u);
    // 1040e5  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0x1040e5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 1040e8  and al, al
    X86_AT(c, 0x1040e8u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 1040ea  je 0x1040f0
    X86_AT(c, 0x1040eau);
    if (x86_cc(c, 4)) { goto L_1040f0; }
    X86_TICK(c, 7);
    // 1040ec  and byte ptr [edi + 9], 0x7f
    X86_AT(c, 0x1040ecu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
L_1040f0:
    X86_TICK(c, 37);
    // 1040f0  mov ax, word ptr [edi]
    X86_AT(c, 0x1040f0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 1040f3  or ax, word ptr [edi + 2]
    X86_AT(c, 0x1040f3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 2)); }
    // 1040f7  or ax, word ptr [edi + 4]
    X86_AT(c, 0x1040f7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 2)); }
    // 1040fb  or ax, word ptr [edi + 6]
    X86_AT(c, 0x1040fbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))), 2)); }
    // 1040ff  and ax, ax
    X86_AT(c, 0x1040ffu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 104102  sete al
    X86_AT(c, 0x104102u);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 104105  mov byte ptr [edi + 0xb], al
    X86_AT(c, 0x104105u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), g8(c, 0));
    // 104108  and al, al
    X86_AT(c, 0x104108u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 10410a  je 0x104110
    X86_AT(c, 0x10410au);
    if (x86_cc(c, 4)) { goto L_104110; }
    X86_TICK(c, 2);
    // 10410c  mov byte ptr [edi + 0xa], 0
    X86_AT(c, 0x10410cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), 0x0u);
L_104110:
    X86_TICK(c, 24);
    // 104110  pop edi
    X86_AT(c, 0x104110u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 104111  pop esi
    X86_AT(c, 0x104111u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 104112  leave 
    X86_AT(c, 0x104112u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 104113  ret 4
    X86_AT(c, 0x104113u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x1040b8u, "ran off the end of a function");
}
void f_00104118(X86Cpu& c) {
    X86_TICK(c, 49);
    // 104118  push ebp
    X86_AT(c, 0x104118u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 104119  mov ebp, esp
    X86_AT(c, 0x104119u);
    c.r[5] = c.r[4];
    // 10411b  push esi
    X86_AT(c, 0x10411bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10411c  push edi
    X86_AT(c, 0x10411cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10411d  mov esi, dword ptr [0xdfdf8]
    X86_AT(c, 0x10411du);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 104123  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x104123u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 104126  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x104126u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 104127  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x104127u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 104128  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x104128u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 10412a  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x10412au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 104131  jne 0x10414b
    X86_AT(c, 0x104131u);
    if (x86_cc(c, 5)) { goto L_10414b; }
    X86_TICK(c, 16);
    // 104133  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x104133u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 104138  cmp byte ptr [eax + 0xa], 0
    X86_AT(c, 0x104138u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))), 0x0u, 0, 1);
    // 10413c  je 0x10414b
    X86_AT(c, 0x10413cu);
    if (x86_cc(c, 4)) { goto L_10414b; }
    X86_TICK(c, 12);
    // 10413e  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x10413eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 104142  jne 0x10414b
    X86_AT(c, 0x104142u);
    if (x86_cc(c, 5)) { goto L_10414b; }
    X86_TICK(c, 11);
    // 104144  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x104144u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 104147  or byte ptr [eax + 9], 0x80
    X86_AT(c, 0x104147u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_10414b:
    X86_TICK(c, 31);
    // 10414b  add dword ptr [0xdfdf8], 0xfffffff4
    X86_AT(c, 0x10414bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 104152  pop edi
    X86_AT(c, 0x104152u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 104153  pop esi
    X86_AT(c, 0x104153u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 104154  leave 
    X86_AT(c, 0x104154u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 104155  ret 4
    X86_AT(c, 0x104155u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x104118u, "ran off the end of a function");
}
void f_00104158(X86Cpu& c) {
    X86_TICK(c, 83);
    // 104158  enter 0xc, 0
    X86_AT(c, 0x104158u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 10415c  push esi
    X86_AT(c, 0x10415cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10415d  push edi
    X86_AT(c, 0x10415du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10415e  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x10415eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 104163  lea esi, [eax - 0xc]
    X86_AT(c, 0x104163u);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 104166  lea edi, [ebp - 0xc]
    X86_AT(c, 0x104166u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 104169  mov ecx, 3
    X86_AT(c, 0x104169u);
    c.r[1] = 0x3u;
    // 10416e  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x10416eu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 104170  xchg esi, eax
    X86_AT(c, 0x104170u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 104171  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x104171u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 104176  lea edi, [eax - 0xc]
    X86_AT(c, 0x104176u);
    c.r[7] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 104179  mov ecx, 3
    X86_AT(c, 0x104179u);
    c.r[1] = 0x3u;
    // 10417e  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x10417eu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 104180  lea esi, [ebp - 0xc]
    X86_AT(c, 0x104180u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 104183  xchg edi, eax
    X86_AT(c, 0x104183u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 104184  mov ecx, 3
    X86_AT(c, 0x104184u);
    c.r[1] = 0x3u;
    // 104189  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x104189u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 10418b  pop edi
    X86_AT(c, 0x10418bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10418c  pop esi
    X86_AT(c, 0x10418cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 10418d  leave 
    X86_AT(c, 0x10418du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10418e  ret 
    X86_AT(c, 0x10418eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104158u, "ran off the end of a function");
}
void f_00104190(X86Cpu& c) {
    X86_TICK(c, 12);
    // 104190  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x104190u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 104197  je 0x1041a4
    X86_AT(c, 0x104197u);
    if (x86_cc(c, 4)) { goto L_1041a4; }
    X86_TICK(c, 18);
    // 104199  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x104199u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 10419e  xor byte ptr [eax + 9], 0x80
    X86_AT(c, 0x10419eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x80u, 1)); }
    // 1041a2  jmp 0x1041b3
    X86_AT(c, 0x1041a2u);
    goto L_1041b3;
L_1041a4:
    X86_TICK(c, 16);
    // 1041a4  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x1041a4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1041a9  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x1041a9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 1041ad  jne 0x1041b3
    X86_AT(c, 0x1041adu);
    if (x86_cc(c, 5)) { goto L_1041b3; }
    X86_TICK(c, 7);
    // 1041af  xor byte ptr [eax + 0xa], 1
    X86_AT(c, 0x1041afu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
L_1041b3:
    X86_TICK(c, 10);
    // 1041b3  ret 
    X86_AT(c, 0x1041b3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104190u, "ran off the end of a function");
}
void f_001041c0(X86Cpu& c) {
    X86_TICK(c, 12);
    // 1041c0  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x1041c0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 1041c7  je 0x1041d4
    X86_AT(c, 0x1041c7u);
    if (x86_cc(c, 4)) { goto L_1041d4; }
    X86_TICK(c, 18);
    // 1041c9  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x1041c9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1041ce  xor byte ptr [eax + 9], 0x80
    X86_AT(c, 0x1041ceu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x80u, 1)); }
    // 1041d2  jmp 0x1041e3
    X86_AT(c, 0x1041d2u);
    goto L_1041e3;
L_1041d4:
    X86_TICK(c, 16);
    // 1041d4  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x1041d4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1041d9  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x1041d9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 1041dd  jne 0x1041e3
    X86_AT(c, 0x1041ddu);
    if (x86_cc(c, 5)) { goto L_1041e3; }
    X86_TICK(c, 7);
    // 1041df  xor byte ptr [eax + 0xa], 1
    X86_AT(c, 0x1041dfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
L_1041e3:
    X86_TICK(c, 7);
    // 1041e3  call 0x101f70
    X86_AT(c, 0x1041e3u);
    push32(c, 0x1041e8u); f_00101f70(c); X86_RET(c, 0x1041e8u);
    X86_TICK(c, 10);
    // 1041e8  ret 
    X86_AT(c, 0x1041e8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1041c0u, "ran off the end of a function");
}
void f_001041ec(X86Cpu& c) {
    X86_TICK(c, 12);
    // 1041ec  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x1041ecu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 1041f3  je 0x104200
    X86_AT(c, 0x1041f3u);
    if (x86_cc(c, 4)) { goto L_104200; }
    X86_TICK(c, 18);
    // 1041f5  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x1041f5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 1041fa  and byte ptr [eax + 9], 0x7f
    X86_AT(c, 0x1041fau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 1041fe  jmp 0x104209
    X86_AT(c, 0x1041feu);
    goto L_104209;
L_104200:
    X86_TICK(c, 6);
    // 104200  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x104200u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 104205  mov byte ptr [eax + 0xa], 0
    X86_AT(c, 0x104205u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x0u);
L_104209:
    X86_TICK(c, 10);
    // 104209  ret 
    X86_AT(c, 0x104209u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1041ecu, "ran off the end of a function");
}
void f_0010420c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 10420c  push esi
    X86_AT(c, 0x10420cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10420d  push edi
    X86_AT(c, 0x10420du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10420e  call 0x10400c
    X86_AT(c, 0x10420eu);
    push32(c, 0x104213u); f_0010400c(c); X86_RET(c, 0x104213u);
    X86_TICK(c, 36);
    // 104213  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x104213u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 104218  lea esi, [eax - 0xc]
    X86_AT(c, 0x104218u);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 10421b  xchg edi, eax
    X86_AT(c, 0x10421bu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 10421c  mov ecx, 3
    X86_AT(c, 0x10421cu);
    c.r[1] = 0x3u;
    // 104221  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x104221u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 104223  pop edi
    X86_AT(c, 0x104223u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 104224  pop esi
    X86_AT(c, 0x104224u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 104225  ret 
    X86_AT(c, 0x104225u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10420cu, "ran off the end of a function");
}
void f_00104228(X86Cpu& c) {
    X86_TICK(c, 24);
    // 104228  enter 0x10, 0
    X86_AT(c, 0x104228u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 10422c  push ebx
    X86_AT(c, 0x10422cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 10422d  push esi
    X86_AT(c, 0x10422du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10422e  push edi
    X86_AT(c, 0x10422eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 10422f  cmp byte ptr [0xdfd2f], 0
    X86_AT(c, 0x10422fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFD2Fu))), 0x0u, 0, 1);
    // 104236  je 0x104251
    X86_AT(c, 0x104236u);
    if (x86_cc(c, 4)) { goto L_104251; }
    X86_TICK(c, 20);
    // 104238  push dword ptr [0xdfdf8]
    X86_AT(c, 0x104238u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u))); push32(c, v); }
    // 10423e  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x10423eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 104243  sub eax, 0xc
    X86_AT(c, 0x104243u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 104246  push eax
    X86_AT(c, 0x104246u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104247  call 0x103cb7
    X86_AT(c, 0x104247u);
    push32(c, 0x10424cu); f_00103cb7(c); X86_RET(c, 0x10424cu);
    X86_TICK(c, 7);
    // 10424c  jmp 0x1042be
    X86_AT(c, 0x10424cu);
    goto L_1042be;
L_104251:
    X86_TICK(c, 16);
    // 104251  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x104251u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 104256  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x104256u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 10425a  je 0x104262
    X86_AT(c, 0x10425au);
    if (x86_cc(c, 4)) { goto L_104262; }
    X86_TICK(c, 12);
    // 10425c  cmp byte ptr [eax - 1], 0
    X86_AT(c, 0x10425cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 104260  jne 0x10427a
    X86_AT(c, 0x104260u);
    if (x86_cc(c, 5)) { goto L_10427a; }
L_104262:
    X86_TICK(c, 24);
    // 104262  mov esi, dword ptr [0xdfdf8]
    X86_AT(c, 0x104262u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 104268  mov edi, dword ptr [0xdfdf8]
    X86_AT(c, 0x104268u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 10426e  sub edi, 0xc
    X86_AT(c, 0x10426eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0xCu, 0, 4); }
    // 104271  mov ecx, 0xc
    X86_AT(c, 0x104271u);
    c.r[1] = 0xCu;
    // 104276  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0x104276u);
    x86_string(c, 1, 1, 243, 4, 3);
    // 104278  jne 0x10427e
    X86_AT(c, 0x104278u);
    if (x86_cc(c, 5)) { goto L_10427e; }
L_10427a:
    X86_TICK(c, 9);
    // 10427a  sub eax, eax
    X86_AT(c, 0x10427au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 10427c  jmp 0x1042be
    X86_AT(c, 0x10427cu);
    goto L_1042be;
L_10427e:
    X86_TICK(c, 21);
    // 10427e  mov eax, dword ptr [0xdfdf8]
    X86_AT(c, 0x10427eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFDF8u)));
    // 104283  mov dl, byte ptr [eax + 0xa]
    X86_AT(c, 0x104283u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))));
    // 104286  mov byte ptr [ebp - 0xd], dl
    X86_AT(c, 0x104286u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 2));
    // 104289  mov bl, byte ptr [eax - 2]
    X86_AT(c, 0x104289u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu))));
    // 10428c  cmp dl, bl
    X86_AT(c, 0x10428cu);
    (void)x86_sub(c, g8(c, 2), g8(c, 3), 0, 1);
    // 10428e  jne 0x1042b1
    X86_AT(c, 0x10428eu);
    if (x86_cc(c, 5)) { goto L_1042b1; }
    X86_TICK(c, 28);
    // 104290  lea esi, [eax - 0xc]
    X86_AT(c, 0x104290u);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 104293  lea edi, [ebp - 0xc]
    X86_AT(c, 0x104293u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 104296  mov ecx, 3
    X86_AT(c, 0x104296u);
    c.r[1] = 0x3u;
    // 10429b  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x10429bu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 10429d  push 5
    X86_AT(c, 0x10429du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 10429f  push eax
    X86_AT(c, 0x10429fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1042a0  lea eax, [ebp - 0xc]
    X86_AT(c, 0x1042a0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 1042a3  push eax
    X86_AT(c, 0x1042a3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1042a4  call 0x103ec9
    X86_AT(c, 0x1042a4u);
    push32(c, 0x1042a9u); f_00103ec9(c); X86_RET(c, 0x1042a9u);
    X86_TICK(c, 14);
    // 1042a9  cmp al, bl
    X86_AT(c, 0x1042a9u);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 1042ab  setne byte ptr [ebp - 0xe]
    X86_AT(c, 0x1042abu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), x86_cc(c, 5) ? 1u : 0u);
    // 1042af  jmp 0x1042b4
    X86_AT(c, 0x1042afu);
    goto L_1042b4;
L_1042b1:
    X86_TICK(c, 2);
    // 1042b1  mov byte ptr [ebp - 0xe], bl
    X86_AT(c, 0x1042b1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), g8(c, 3));
L_1042b4:
    X86_TICK(c, 12);
    // 1042b4  mov al, byte ptr [ebp - 0xe]
    X86_AT(c, 0x1042b4u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 1042b7  add eax, eax
    X86_AT(c, 0x1042b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 1042b9  sub ah, ah
    X86_AT(c, 0x1042b9u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 1042bb  neg eax
    X86_AT(c, 0x1042bbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 1042bd  inc eax
    X86_AT(c, 0x1042bdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_1042be:
    X86_TICK(c, 28);
    // 1042be  pop edi
    X86_AT(c, 0x1042beu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1042bf  pop esi
    X86_AT(c, 0x1042bfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1042c0  pop ebx
    X86_AT(c, 0x1042c0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1042c1  leave 
    X86_AT(c, 0x1042c1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1042c2  ret 
    X86_AT(c, 0x1042c2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104228u, "ran off the end of a function");
}
void f_001042c4(X86Cpu& c) {
    X86_TICK(c, 13);
    // 1042c4  enter 4, 0
    X86_AT(c, 0x1042c4u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 1042c8  call 0x104228
    X86_AT(c, 0x1042c8u);
    push32(c, 0x1042cdu); f_00104228(c); X86_RET(c, 0x1042cdu);
    X86_TICK(c, 25);
    // 1042cd  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x1042cdu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 1042d1  add dword ptr [0xdfdf8], 0xffffffe8
    X86_AT(c, 0x1042d1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFDF8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFE8u, 0, 4)); }
    // 1042d8  leave 
    X86_AT(c, 0x1042d8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1042d9  ret 
    X86_AT(c, 0x1042d9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1042c4u, "ran off the end of a function");
}
void f_001042dc(X86Cpu& c) {
    X86_TICK(c, 19);
    // 1042dc  enter 4, 0
    X86_AT(c, 0x1042dcu);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 1042e0  push esi
    X86_AT(c, 0x1042e0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1042e1  push edi
    X86_AT(c, 0x1042e1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1042e2  mov si, 1
    X86_AT(c, 0x1042e2u);
    s16(c, 6, 0x1u);
    // 1042e6  call 0x1042c4
    X86_AT(c, 0x1042e6u);
    push32(c, 0x1042ebu); f_001042c4(c); X86_RET(c, 0x1042ebu);
    X86_TICK(c, 9);
    // 1042eb  lea edi, [esi + eax*1]
    X86_AT(c, 0x1042ebu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 1042ee  cmp di, si
    X86_AT(c, 0x1042eeu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 1042f1  jle 0x1042f7
    X86_AT(c, 0x1042f1u);
    if (x86_cc(c, 14)) { goto L_1042f7; }
    X86_TICK(c, 2);
    // 1042f3  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0x1042f3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
L_1042f7:
    X86_TICK(c, 24);
    // 1042f7  pop edi
    X86_AT(c, 0x1042f7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1042f8  pop esi
    X86_AT(c, 0x1042f8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1042f9  leave 
    X86_AT(c, 0x1042f9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1042fa  ret 
    X86_AT(c, 0x1042fau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1042dcu, "ran off the end of a function");
}
void f_00104318(X86Cpu& c) {
    X86_TICK(c, 48);
    // 104318  push ebp
    X86_AT(c, 0x104318u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 104319  mov ebp, esp
    X86_AT(c, 0x104319u);
    c.r[5] = c.r[4];
    // 10431b  push ecx
    X86_AT(c, 0x10431bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 10431c  sub esp, 0x28
    X86_AT(c, 0x10431cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x28u, 0, 4); }
    // 10431f  push ebx
    X86_AT(c, 0x10431fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 104320  push esi
    X86_AT(c, 0x104320u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 104321  push edi
    X86_AT(c, 0x104321u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 104322  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x104322u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104325  movzx edx, byte ptr [eax - 0x21]
    X86_AT(c, 0x104325u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFDFu)));
    // 104329  mov ecx, dword ptr [eax + 0x20]
    X86_AT(c, 0x104329u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)));
    // 10432c  sub ecx, edx
    X86_AT(c, 0x10432cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 10432e  mov dword ptr [ebp - 0x20], ecx
    X86_AT(c, 0x10432eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[1]);
    // 104331  push dword ptr [ebp - 0x20]
    X86_AT(c, 0x104331u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))); push32(c, v); }
    // 104334  lea ecx, [ebp - 0x10]
    X86_AT(c, 0x104334u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 104337  push ecx
    X86_AT(c, 0x104337u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 104338  call 0x1051c4
    X86_AT(c, 0x104338u);
    push32(c, 0x10433du); f_001051c4(c); X86_RET(c, 0x10433du);
    X86_TICK(c, 15);
    // 10433d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x10433du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104340  lea edx, [eax + 0xc]
    X86_AT(c, 0x104340u);
    c.r[2] = (uint32_t)(c.r[0] + 0xCu);
    // 104343  push edx
    X86_AT(c, 0x104343u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 104344  call 0x1040b8
    X86_AT(c, 0x104344u);
    push32(c, 0x104349u); f_001040b8(c); X86_RET(c, 0x104349u);
    X86_TICK(c, 11);
    // 104349  lea eax, [ebp - 0x10]
    X86_AT(c, 0x104349u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 10434c  push eax
    X86_AT(c, 0x10434cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10434d  call 0x1040b8
    X86_AT(c, 0x10434du);
    push32(c, 0x104352u); f_001040b8(c); X86_RET(c, 0x104352u);
    X86_TICK(c, 7);
    // 104352  call 0x105394
    X86_AT(c, 0x104352u);
    push32(c, 0x104357u); f_00105394(c); X86_RET(c, 0x104357u);
    X86_TICK(c, 11);
    // 104357  lea eax, [ebp - 0x10]
    X86_AT(c, 0x104357u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 10435a  push eax
    X86_AT(c, 0x10435au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10435b  call 0x104118
    X86_AT(c, 0x10435bu);
    push32(c, 0x104360u); f_00104118(c); X86_RET(c, 0x104360u);
    X86_TICK(c, 15);
    // 104360  lea eax, [ebp - 0x10]
    X86_AT(c, 0x104360u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 104363  push eax
    X86_AT(c, 0x104363u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104364  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x104364u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 104367  push eax
    X86_AT(c, 0x104367u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104368  call 0x105328
    X86_AT(c, 0x104368u);
    push32(c, 0x10436du); f_00105328(c); X86_RET(c, 0x10436du);
    X86_TICK(c, 47);
    // 10436d  push esi
    X86_AT(c, 0x10436du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10436e  lea esi, [ebp - 0x2c]
    X86_AT(c, 0x10436eu);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 104371  push edi
    X86_AT(c, 0x104371u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 104372  lea edi, [ebp - 0x1a]
    X86_AT(c, 0x104372u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFE6u);
    // 104375  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x104375u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 104376  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x104376u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 104377  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x104377u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 104379  pop edi
    X86_AT(c, 0x104379u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10437a  pop esi
    X86_AT(c, 0x10437au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 10437b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x10437bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 10437e  mov dword ptr [eax - 0x20], 0x13
    X86_AT(c, 0x10437eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)), 0x13u);
    // 104385  mov edi, 1
    X86_AT(c, 0x104385u);
    c.r[7] = 0x1u;
    // 10438a  mov esi, edi
    X86_AT(c, 0x10438au);
    c.r[6] = c.r[7];
L_10438c:
    X86_TICK(c, 14);
    // 10438c  mov bl, byte ptr [ebp + edi*1 - 0x1b]
    X86_AT(c, 0x10438cu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] + 0xFFFFFFE5u))));
    // 104390  mov eax, esi
    X86_AT(c, 0x104390u);
    c.r[0] = c.r[6];
    // 104392  rcr eax, 1
    X86_AT(c, 0x104392u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 104394  jae 0x10439e
    X86_AT(c, 0x104394u);
    if (x86_cc(c, 3)) { goto L_10439e; }
    X86_TICK(c, 13);
    // 104396  sub bh, bh
    X86_AT(c, 0x104396u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, g8(c, 7), 0, 1)); }
    // 104398  mov eax, ebx
    X86_AT(c, 0x104398u);
    c.r[0] = c.r[3];
    // 10439a  and al, 0xf
    X86_AT(c, 0x10439au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 10439c  jmp 0x1043a3
    X86_AT(c, 0x10439cu);
    goto L_1043a3;
L_10439e:
    X86_TICK(c, 5);
    // 10439e  mov eax, ebx
    X86_AT(c, 0x10439eu);
    c.r[0] = c.r[3];
    // 1043a0  shr al, 4
    X86_AT(c, 0x1043a0u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
L_1043a3:
    X86_TICK(c, 34);
    // 1043a3  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0x1043a3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
    // 1043a6  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x1043a6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1043a9  dec dword ptr [eax - 0x20]
    X86_AT(c, 0x1043a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 1043ac  mov dl, byte ptr [ebp - 0x21]
    X86_AT(c, 0x1043acu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu))));
    // 1043af  add dl, 0x30
    X86_AT(c, 0x1043afu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x30u, 0, 1)); }
    // 1043b2  mov ecx, dword ptr [eax - 0x20]
    X86_AT(c, 0x1043b2u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)));
    // 1043b5  mov byte ptr [eax + ecx*1 - 0x1c], dl
    X86_AT(c, 0x1043b5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0xFFFFFFE4u)), g8(c, 2));
    // 1043b9  mov eax, esi
    X86_AT(c, 0x1043b9u);
    c.r[0] = c.r[6];
    // 1043bb  rcr eax, 1
    X86_AT(c, 0x1043bbu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 1043bd  jb 0x1043c0
    X86_AT(c, 0x1043bdu);
    if (x86_cc(c, 2)) { goto L_1043c0; }
    X86_TICK(c, 2);
    // 1043bf  inc edi
    X86_AT(c, 0x1043bfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_1043c0:
    X86_TICK(c, 7);
    // 1043c0  cmp esi, 0x12
    X86_AT(c, 0x1043c0u);
    (void)x86_sub(c, c.r[6], 0x12u, 0, 4);
    // 1043c3  jge 0x1043ce
    X86_AT(c, 0x1043c3u);
    if (x86_cc(c, 13)) { goto L_1043ce; }
    X86_TICK(c, 9);
    // 1043c5  inc esi
    X86_AT(c, 0x1043c5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 1043c6  jmp 0x10438c
    X86_AT(c, 0x1043c6u);
    X86_POLL(c, 0x10438cu); goto L_10438c;
L_1043c8:
    X86_TICK(c, 10);
    // 1043c8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x1043c8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1043cb  inc dword ptr [eax - 0x20]
    X86_AT(c, 0x1043cbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_1043ce:
    X86_TICK(c, 20);
    // 1043ce  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x1043ceu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1043d1  mov edx, dword ptr [eax - 0x20]
    X86_AT(c, 0x1043d1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)));
    // 1043d4  cmp byte ptr [eax + edx*1 - 0x1c], 0x30
    X86_AT(c, 0x1043d4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFE4u))), 0x30u, 0, 1);
    // 1043d9  je 0x1043c8
    X86_AT(c, 0x1043d9u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x1043c8u); goto L_1043c8; }
    X86_TICK(c, 17);
    // 1043db  mov ecx, 0x12
    X86_AT(c, 0x1043dbu);
    c.r[1] = 0x12u;
    // 1043e0  sub ecx, dword ptr [ebp - 0x20]
    X86_AT(c, 0x1043e0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0, 4); }
    // 1043e3  inc ecx
    X86_AT(c, 0x1043e3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 1043e4  cmp edx, ecx
    X86_AT(c, 0x1043e4u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 1043e6  jge 0x1043eb
    X86_AT(c, 0x1043e6u);
    if (x86_cc(c, 13)) { goto L_1043eb; }
    X86_TICK(c, 6);
    // 1043e8  inc dword ptr [eax - 4]
    X86_AT(c, 0x1043e8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_1043eb:
    X86_TICK(c, 28);
    // 1043eb  pop edi
    X86_AT(c, 0x1043ebu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1043ec  pop esi
    X86_AT(c, 0x1043ecu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1043ed  pop ebx
    X86_AT(c, 0x1043edu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1043ee  leave 
    X86_AT(c, 0x1043eeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1043ef  ret 
    X86_AT(c, 0x1043efu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104318u, "ran off the end of a function");
}
void f_001043f8(X86Cpu& c) {
    X86_TICK(c, 33);
    // 1043f8  push ebp
    X86_AT(c, 0x1043f8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1043f9  mov ebp, esp
    X86_AT(c, 0x1043f9u);
    c.r[5] = c.r[4];
    // 1043fb  push ecx
    X86_AT(c, 0x1043fbu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 1043fc  sub esp, 0xc
    X86_AT(c, 0x1043fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 1043ff  push ebx
    X86_AT(c, 0x1043ffu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 104400  push esi
    X86_AT(c, 0x104400u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 104401  push edi
    X86_AT(c, 0x104401u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 104402  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x104402u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 104405  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x104405u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104408  cmp edi, dword ptr [eax + 0x20]
    X86_AT(c, 0x104408u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u))), 0, 4);
    // 10440b  jge 0x1044b1
    X86_AT(c, 0x10440bu);
    if (x86_cc(c, 13)) { goto L_1044b1; }
    X86_TICK(c, 17);
    // 104411  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x104411u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104414  add eax, 0xc
    X86_AT(c, 0x104414u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xCu, 0, 4); }
    // 104417  push eax
    X86_AT(c, 0x104417u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104418  mov ebx, eax
    X86_AT(c, 0x104418u);
    c.r[3] = c.r[0];
    // 10441a  call 0x1040b8
    X86_AT(c, 0x10441au);
    push32(c, 0x10441fu); f_001040b8(c); X86_RET(c, 0x10441fu);
    X86_TICK(c, 12);
    // 10441f  push dword ptr [0xe2f0]
    X86_AT(c, 0x10441fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE2F0u))); push32(c, v); }
    // 104425  call 0x105358
    X86_AT(c, 0x104425u);
    push32(c, 0x10442au); f_00105358(c); X86_RET(c, 0x10442au);
    X86_TICK(c, 7);
    // 10442a  call 0x1042dc
    X86_AT(c, 0x10442au);
    push32(c, 0x10442fu); f_001042dc(c); X86_RET(c, 0x10442fu);
    X86_TICK(c, 5);
    // 10442f  je 0x1044b1
    X86_AT(c, 0x10442fu);
    if (x86_cc(c, 4)) { goto L_1044b1; }
    X86_TICK(c, 15);
    // 104435  mov eax, edi
    X86_AT(c, 0x104435u);
    c.r[0] = c.r[7];
    // 104437  push eax
    X86_AT(c, 0x104437u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104438  lea ebx, [ebp - 0x10]
    X86_AT(c, 0x104438u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 10443b  push ebx
    X86_AT(c, 0x10443bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 10443c  call 0x1051c4
    X86_AT(c, 0x10443cu);
    push32(c, 0x104441u); f_001051c4(c); X86_RET(c, 0x104441u);
    X86_TICK(c, 9);
    // 104441  push ebx
    X86_AT(c, 0x104441u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 104442  call 0x1040b8
    X86_AT(c, 0x104442u);
    push32(c, 0x104447u); f_001040b8(c); X86_RET(c, 0x104447u);
    X86_TICK(c, 12);
    // 104447  push dword ptr [0xe2f4]
    X86_AT(c, 0x104447u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE2F4u))); push32(c, v); }
    // 10444d  call 0x105358
    X86_AT(c, 0x10444du);
    push32(c, 0x104452u); f_00105358(c); X86_RET(c, 0x104452u);
    X86_TICK(c, 7);
    // 104452  call 0x1054b8
    X86_AT(c, 0x104452u);
    push32(c, 0x104457u); f_001054b8(c); X86_RET(c, 0x104457u);
    X86_TICK(c, 19);
    // 104457  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x104457u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 10445a  lea edx, [eax + 0xc]
    X86_AT(c, 0x10445au);
    c.r[2] = (uint32_t)(c.r[0] + 0xCu);
    // 10445d  push edx
    X86_AT(c, 0x10445du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 10445e  mov ebx, eax
    X86_AT(c, 0x10445eu);
    c.r[3] = c.r[0];
    // 104460  mov esi, edx
    X86_AT(c, 0x104460u);
    c.r[6] = c.r[2];
    // 104462  call 0x1040b8
    X86_AT(c, 0x104462u);
    push32(c, 0x104467u); f_001040b8(c); X86_RET(c, 0x104467u);
    X86_TICK(c, 7);
    // 104467  call 0x101f70
    X86_AT(c, 0x104467u);
    push32(c, 0x10446cu); f_00101f70(c); X86_RET(c, 0x10446cu);
    X86_TICK(c, 9);
    // 10446c  push esi
    X86_AT(c, 0x10446cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 10446d  call 0x104118
    X86_AT(c, 0x10446du);
    push32(c, 0x104472u); f_00104118(c); X86_RET(c, 0x104472u);
    X86_TICK(c, 9);
    // 104472  push esi
    X86_AT(c, 0x104472u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 104473  call 0x1040b8
    X86_AT(c, 0x104473u);
    push32(c, 0x104478u); f_001040b8(c); X86_RET(c, 0x104478u);
    X86_TICK(c, 12);
    // 104478  push dword ptr [0xe2f8]
    X86_AT(c, 0x104478u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE2F8u))); push32(c, v); }
    // 10447e  call 0x105358
    X86_AT(c, 0x10447eu);
    push32(c, 0x104483u); f_00105358(c); X86_RET(c, 0x104483u);
    X86_TICK(c, 7);
    // 104483  call 0x1042dc
    X86_AT(c, 0x104483u);
    push32(c, 0x104488u); f_001042dc(c); X86_RET(c, 0x104488u);
    X86_TICK(c, 13);
    // 104488  setae al
    X86_AT(c, 0x104488u);
    s8(c, 0, x86_cc(c, 3) ? 1u : 0u);
    // 10448b  mov byte ptr [ebx - 0x21], al
    X86_AT(c, 0x10448bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFDFu)), g8(c, 0));
    // 10448e  and al, al
    X86_AT(c, 0x10448eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 104490  je 0x1044b1
    X86_AT(c, 0x104490u);
    if (x86_cc(c, 4)) { goto L_1044b1; }
    X86_TICK(c, 9);
    // 104492  push esi
    X86_AT(c, 0x104492u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 104493  call 0x1040b8
    X86_AT(c, 0x104493u);
    push32(c, 0x104498u); f_001040b8(c); X86_RET(c, 0x104498u);
    X86_TICK(c, 11);
    // 104498  mov eax, 0xe2fc
    X86_AT(c, 0x104498u);
    c.r[0] = 0xE2FCu;
    // 10449d  push eax
    X86_AT(c, 0x10449du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10449e  call 0x1040b8
    X86_AT(c, 0x10449eu);
    push32(c, 0x1044a3u); f_001040b8(c); X86_RET(c, 0x1044a3u);
    X86_TICK(c, 7);
    // 1044a3  call 0x105394
    X86_AT(c, 0x1044a3u);
    push32(c, 0x1044a8u); f_00105394(c); X86_RET(c, 0x1044a8u);
    X86_TICK(c, 9);
    // 1044a8  push esi
    X86_AT(c, 0x1044a8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1044a9  call 0x104118
    X86_AT(c, 0x1044a9u);
    push32(c, 0x1044aeu); f_00104118(c); X86_RET(c, 0x1044aeu);
    X86_TICK(c, 6);
    // 1044ae  inc dword ptr [ebx - 4]
    X86_AT(c, 0x1044aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_1044b1:
    X86_TICK(c, 28);
    // 1044b1  pop edi
    X86_AT(c, 0x1044b1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1044b2  pop esi
    X86_AT(c, 0x1044b2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1044b3  pop ebx
    X86_AT(c, 0x1044b3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1044b4  leave 
    X86_AT(c, 0x1044b4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1044b5  ret 4
    X86_AT(c, 0x1044b5u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x1043f8u, "ran off the end of a function");
}
void f_001044c8(X86Cpu& c) {
    X86_TICK(c, 35);
    // 1044c8  enter 0x38, 0
    X86_AT(c, 0x1044c8u);
    x86_enter(c, 0x38u, 0x0u, 4);
    // 1044cc  push ebx
    X86_AT(c, 0x1044ccu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1044cd  push esi
    X86_AT(c, 0x1044cdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1044ce  push edi
    X86_AT(c, 0x1044ceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1044cf  mov edi, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x1044cfu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 1044d2  mov esi, dword ptr [ebp + 0x24]
    X86_AT(c, 0x1044d2u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 1044d5  lea eax, [ebp + 0xc]
    X86_AT(c, 0x1044d5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 1044d8  push eax
    X86_AT(c, 0x1044d8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1044d9  lea eax, [ebp - 0x38]
    X86_AT(c, 0x1044d9u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC8u);
    // 1044dc  push eax
    X86_AT(c, 0x1044dcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1044dd  call 0x105244
    X86_AT(c, 0x1044ddu);
    push32(c, 0x1044e2u); f_00105244(c); X86_RET(c, 0x1044e2u);
    X86_TICK(c, 39);
    // 1044e2  lea eax, [ebp - 0x38]
    X86_AT(c, 0x1044e2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC8u);
    // 1044e5  push esi
    X86_AT(c, 0x1044e5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1044e6  push edi
    X86_AT(c, 0x1044e6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1044e7  mov edi, esi
    X86_AT(c, 0x1044e7u);
    c.r[7] = c.r[6];
    // 1044e9  mov esi, eax
    X86_AT(c, 0x1044e9u);
    c.r[6] = c.r[0];
    // 1044eb  mov ecx, 3
    X86_AT(c, 0x1044ebu);
    c.r[1] = 0x3u;
    // 1044f0  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x1044f0u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 1044f2  pop edi
    X86_AT(c, 0x1044f2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1044f3  pop esi
    X86_AT(c, 0x1044f3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1044f4  cmp word ptr [esi], 0
    X86_AT(c, 0x1044f4u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[6]))), 0x0u, 0, 2);
    // 1044f8  jne 0x1046b4
    X86_AT(c, 0x1044f8u);
    if (x86_cc(c, 5)) { goto L_1046b4; }
    X86_TICK(c, 11);
    // 1044fe  lea eax, [ebp + 0xc]
    X86_AT(c, 0x1044feu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 104501  push eax
    X86_AT(c, 0x104501u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104502  call 0x105304
    X86_AT(c, 0x104502u);
    push32(c, 0x104507u); f_00105304(c); X86_RET(c, 0x104507u);
    X86_TICK(c, 12);
    // 104507  movsx eax, ax
    X86_AT(c, 0x104507u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 10450a  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x10450au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 10450d  and eax, eax
    X86_AT(c, 0x10450du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 10450f  jl 0x1045a0
    X86_AT(c, 0x10450fu);
    if (x86_cc(c, 12)) { goto L_1045a0; }
    X86_TICK(c, 77);
    // 104515  imul eax, eax, 0x12a
    X86_AT(c, 0x104515u);
    c.r[0] = x86_imul2(c, c.r[0], 0x12Au, 4);
    // 10451b  cdq 
    X86_AT(c, 0x10451bu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 10451c  mov ecx, 0x3de
    X86_AT(c, 0x10451cu);
    c.r[1] = 0x3DEu;
    // 104521  idiv ecx
    X86_AT(c, 0x104521u);
    x86_idiv(c, c.r[1], 4, 0x104521u);
    // 104523  inc eax
    X86_AT(c, 0x104523u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 104524  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x104524u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 104527  and eax, eax
    X86_AT(c, 0x104527u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 104529  je 0x104557
    X86_AT(c, 0x104529u);
    if (x86_cc(c, 4)) { goto L_104557; }
    X86_TICK(c, 16);
    // 10452b  push dword ptr [ebp - 4]
    X86_AT(c, 0x10452bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 10452e  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x10452eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 104531  push eax
    X86_AT(c, 0x104531u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104532  call 0x1051c4
    X86_AT(c, 0x104532u);
    push32(c, 0x104537u); f_001051c4(c); X86_RET(c, 0x104537u);
    X86_TICK(c, 11);
    // 104537  lea eax, [ebp + 0xc]
    X86_AT(c, 0x104537u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 10453a  push eax
    X86_AT(c, 0x10453au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10453b  call 0x1040b8
    X86_AT(c, 0x10453bu);
    push32(c, 0x104540u); f_001040b8(c); X86_RET(c, 0x104540u);
    X86_TICK(c, 11);
    // 104540  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x104540u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 104543  push eax
    X86_AT(c, 0x104543u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104544  call 0x1040b8
    X86_AT(c, 0x104544u);
    push32(c, 0x104549u); f_001040b8(c); X86_RET(c, 0x104549u);
    X86_TICK(c, 7);
    // 104549  call 0x1054c4
    X86_AT(c, 0x104549u);
    push32(c, 0x10454eu); f_001054c4(c); X86_RET(c, 0x10454eu);
    X86_TICK(c, 11);
    // 10454e  lea eax, [ebp + 0xc]
    X86_AT(c, 0x10454eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 104551  push eax
    X86_AT(c, 0x104551u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104552  call 0x104118
    X86_AT(c, 0x104552u);
    push32(c, 0x104557u); f_00104118(c); X86_RET(c, 0x104557u);
L_104557:
    X86_TICK(c, 11);
    // 104557  lea eax, [ebp + 0xc]
    X86_AT(c, 0x104557u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 10455a  push eax
    X86_AT(c, 0x10455au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10455b  call 0x1040b8
    X86_AT(c, 0x10455bu);
    push32(c, 0x104560u); f_001040b8(c); X86_RET(c, 0x104560u);
    X86_TICK(c, 12);
    // 104560  push dword ptr [0xe2f8]
    X86_AT(c, 0x104560u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE2F8u))); push32(c, v); }
    // 104566  call 0x105358
    X86_AT(c, 0x104566u);
    push32(c, 0x10456bu); f_00105358(c); X86_RET(c, 0x10456bu);
    X86_TICK(c, 7);
    // 10456b  call 0x1042dc
    X86_AT(c, 0x10456bu);
    push32(c, 0x104570u); f_001042dc(c); X86_RET(c, 0x104570u);
    X86_TICK(c, 5);
    // 104570  jb 0x10462b
    X86_AT(c, 0x104570u);
    if (x86_cc(c, 2)) { goto L_10462b; }
    X86_TICK(c, 11);
    // 104576  lea eax, [ebp + 0xc]
    X86_AT(c, 0x104576u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 104579  push eax
    X86_AT(c, 0x104579u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10457a  call 0x1040b8
    X86_AT(c, 0x10457au);
    push32(c, 0x10457fu); f_001040b8(c); X86_RET(c, 0x10457fu);
    X86_TICK(c, 11);
    // 10457f  mov eax, 0xe2fc
    X86_AT(c, 0x10457fu);
    c.r[0] = 0xE2FCu;
    // 104584  push eax
    X86_AT(c, 0x104584u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104585  call 0x1040b8
    X86_AT(c, 0x104585u);
    push32(c, 0x10458au); f_001040b8(c); X86_RET(c, 0x10458au);
    X86_TICK(c, 7);
    // 10458a  call 0x105394
    X86_AT(c, 0x10458au);
    push32(c, 0x10458fu); f_00105394(c); X86_RET(c, 0x10458fu);
    X86_TICK(c, 11);
    // 10458f  lea eax, [ebp + 0xc]
    X86_AT(c, 0x10458fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 104592  push eax
    X86_AT(c, 0x104592u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104593  call 0x104118
    X86_AT(c, 0x104593u);
    push32(c, 0x104598u); f_00104118(c); X86_RET(c, 0x104598u);
    X86_TICK(c, 13);
    // 104598  inc dword ptr [ebp - 4]
    X86_AT(c, 0x104598u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 10459b  jmp 0x10462b
    X86_AT(c, 0x10459bu);
    goto L_10462b;
L_1045a0:
    X86_TICK(c, 77);
    // 1045a0  imul eax, dword ptr [ebp - 4], 0x12a
    X86_AT(c, 0x1045a0u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x12Au, 4);
    // 1045a7  add eax, 0x12a
    X86_AT(c, 0x1045a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x12Au, 0, 4); }
    // 1045ac  cdq 
    X86_AT(c, 0x1045acu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 1045ad  mov ecx, 0x3de
    X86_AT(c, 0x1045adu);
    c.r[1] = 0x3DEu;
    // 1045b2  idiv ecx
    X86_AT(c, 0x1045b2u);
    x86_idiv(c, c.r[1], 4, 0x1045b2u);
    // 1045b4  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x1045b4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 1045b7  and eax, eax
    X86_AT(c, 0x1045b7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 1045b9  je 0x1045eb
    X86_AT(c, 0x1045b9u);
    if (x86_cc(c, 4)) { goto L_1045eb; }
    X86_TICK(c, 19);
    // 1045bb  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x1045bbu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 1045bf  neg eax
    X86_AT(c, 0x1045bfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 1045c1  push eax
    X86_AT(c, 0x1045c1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1045c2  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x1045c2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 1045c5  push eax
    X86_AT(c, 0x1045c5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1045c6  call 0x1051c4
    X86_AT(c, 0x1045c6u);
    push32(c, 0x1045cbu); f_001051c4(c); X86_RET(c, 0x1045cbu);
    X86_TICK(c, 11);
    // 1045cb  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x1045cbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 1045ce  push eax
    X86_AT(c, 0x1045ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1045cf  call 0x1040b8
    X86_AT(c, 0x1045cfu);
    push32(c, 0x1045d4u); f_001040b8(c); X86_RET(c, 0x1045d4u);
    X86_TICK(c, 11);
    // 1045d4  lea eax, [ebp + 0xc]
    X86_AT(c, 0x1045d4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 1045d7  push eax
    X86_AT(c, 0x1045d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1045d8  call 0x1040b8
    X86_AT(c, 0x1045d8u);
    push32(c, 0x1045ddu); f_001040b8(c); X86_RET(c, 0x1045ddu);
    X86_TICK(c, 7);
    // 1045dd  call 0x105394
    X86_AT(c, 0x1045ddu);
    push32(c, 0x1045e2u); f_00105394(c); X86_RET(c, 0x1045e2u);
    X86_TICK(c, 11);
    // 1045e2  lea eax, [ebp + 0xc]
    X86_AT(c, 0x1045e2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 1045e5  push eax
    X86_AT(c, 0x1045e5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1045e6  call 0x104118
    X86_AT(c, 0x1045e6u);
    push32(c, 0x1045ebu); f_00104118(c); X86_RET(c, 0x1045ebu);
L_1045eb:
    X86_TICK(c, 11);
    // 1045eb  lea eax, [ebp + 0xc]
    X86_AT(c, 0x1045ebu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 1045ee  push eax
    X86_AT(c, 0x1045eeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1045ef  call 0x1040b8
    X86_AT(c, 0x1045efu);
    push32(c, 0x1045f4u); f_001040b8(c); X86_RET(c, 0x1045f4u);
    X86_TICK(c, 11);
    // 1045f4  mov eax, 0xe2fc
    X86_AT(c, 0x1045f4u);
    c.r[0] = 0xE2FCu;
    // 1045f9  push eax
    X86_AT(c, 0x1045f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1045fa  call 0x1040b8
    X86_AT(c, 0x1045fau);
    push32(c, 0x1045ffu); f_001040b8(c); X86_RET(c, 0x1045ffu);
    X86_TICK(c, 7);
    // 1045ff  call 0x1042dc
    X86_AT(c, 0x1045ffu);
    push32(c, 0x104604u); f_001042dc(c); X86_RET(c, 0x104604u);
    X86_TICK(c, 5);
    // 104604  jae 0x10462b
    X86_AT(c, 0x104604u);
    if (x86_cc(c, 3)) { goto L_10462b; }
    X86_TICK(c, 11);
    // 104606  lea eax, [ebp + 0xc]
    X86_AT(c, 0x104606u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 104609  push eax
    X86_AT(c, 0x104609u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10460a  call 0x1040b8
    X86_AT(c, 0x10460au);
    push32(c, 0x10460fu); f_001040b8(c); X86_RET(c, 0x10460fu);
    X86_TICK(c, 12);
    // 10460f  push dword ptr [0xe308]
    X86_AT(c, 0x10460fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE308u))); push32(c, v); }
    // 104615  call 0x105358
    X86_AT(c, 0x104615u);
    push32(c, 0x10461au); f_00105358(c); X86_RET(c, 0x10461au);
    X86_TICK(c, 7);
    // 10461a  call 0x105394
    X86_AT(c, 0x10461au);
    push32(c, 0x10461fu); f_00105394(c); X86_RET(c, 0x10461fu);
    X86_TICK(c, 11);
    // 10461f  lea eax, [ebp + 0xc]
    X86_AT(c, 0x10461fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 104622  push eax
    X86_AT(c, 0x104622u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104623  call 0x104118
    X86_AT(c, 0x104623u);
    push32(c, 0x104628u); f_00104118(c); X86_RET(c, 0x104628u);
    X86_TICK(c, 6);
    // 104628  dec dword ptr [ebp - 4]
    X86_AT(c, 0x104628u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_10462b:
    X86_TICK(c, 15);
    // 10462b  mov byte ptr [ebp - 0x21], 0
    X86_AT(c, 0x10462bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), 0x0u);
    // 10462f  movzx eax, byte ptr [ebp + 0x18]
    X86_AT(c, 0x10462fu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 104633  cmp eax, 0x45
    X86_AT(c, 0x104633u);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 104636  je 0x10465d
    X86_AT(c, 0x104636u);
    if (x86_cc(c, 4)) { goto L_10465d; }
    X86_TICK(c, 7);
    // 104638  cmp eax, 0x47
    X86_AT(c, 0x104638u);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 10463b  je 0x104662
    X86_AT(c, 0x10463bu);
    if (x86_cc(c, 4)) { goto L_104662; }
    X86_TICK(c, 7);
    // 10463d  cmp eax, 0x65
    X86_AT(c, 0x10463du);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 104640  je 0x10465d
    X86_AT(c, 0x104640u);
    if (x86_cc(c, 4)) { goto L_10465d; }
    X86_TICK(c, 7);
    // 104642  cmp eax, 0x66
    X86_AT(c, 0x104642u);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 104645  je 0x10464e
    X86_AT(c, 0x104645u);
    if (x86_cc(c, 4)) { goto L_10464e; }
    X86_TICK(c, 7);
    // 104647  cmp eax, 0x67
    X86_AT(c, 0x104647u);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 10464a  je 0x104662
    X86_AT(c, 0x10464au);
    if (x86_cc(c, 4)) { goto L_104662; }
    X86_TICK(c, 7);
    // 10464c  jmp 0x104673
    X86_AT(c, 0x10464cu);
    goto L_104673;
L_10464e:
    X86_TICK(c, 17);
    // 10464e  mov eax, edi
    X86_AT(c, 0x10464eu);
    c.r[0] = c.r[7];
    // 104650  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x104650u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 104653  sub edx, edx
    X86_AT(c, 0x104653u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 104655  cmp eax, edx
    X86_AT(c, 0x104655u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 104657  jl 0x10465a
    X86_AT(c, 0x104657u);
    if (x86_cc(c, 12)) { goto L_10465a; }
    X86_TICK(c, 3);
    // 104659  xchg edx, eax
    X86_AT(c, 0x104659u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_10465a:
    X86_TICK(c, 9);
    // 10465a  push edx
    X86_AT(c, 0x10465au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 10465b  jmp 0x10466c
    X86_AT(c, 0x10465bu);
    goto L_10466c;
L_10465d:
    X86_TICK(c, 9);
    // 10465d  lea eax, [edi + 1]
    X86_AT(c, 0x10465du);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 104660  jmp 0x10466b
    X86_AT(c, 0x104660u);
    goto L_10466b;
L_104662:
    X86_TICK(c, 11);
    // 104662  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x104662u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104665  cmp edi, eax
    X86_AT(c, 0x104665u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 104667  jl 0x10466b
    X86_AT(c, 0x104667u);
    if (x86_cc(c, 12)) { goto L_10466b; }
    X86_TICK(c, 2);
    // 104669  mov eax, edi
    X86_AT(c, 0x104669u);
    c.r[0] = c.r[7];
L_10466b:
    X86_TICK(c, 2);
    // 10466b  push eax
    X86_AT(c, 0x10466bu);
    { uint32_t v = c.r[0]; push32(c, v); }
L_10466c:
    X86_TICK(c, 9);
    // 10466c  mov ecx, ebp
    X86_AT(c, 0x10466cu);
    c.r[1] = c.r[5];
    // 10466e  call 0x1043f8
    X86_AT(c, 0x10466eu);
    push32(c, 0x104673u); f_001043f8(c); X86_RET(c, 0x104673u);
L_104673:
    X86_TICK(c, 9);
    // 104673  mov ecx, ebp
    X86_AT(c, 0x104673u);
    c.r[1] = c.r[5];
    // 104675  call 0x104318
    X86_AT(c, 0x104675u);
    push32(c, 0x10467au); f_00104318(c); X86_RET(c, 0x10467au);
    X86_TICK(c, 34);
    // 10467a  mov eax, 0x30303030
    X86_AT(c, 0x10467au);
    c.r[0] = 0x30303030u;
    // 10467f  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x10467fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 104682  add edx, 4
    X86_AT(c, 0x104682u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x4u, 0, 4); }
    // 104685  push edi
    X86_AT(c, 0x104685u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 104686  mov edi, edx
    X86_AT(c, 0x104686u);
    c.r[7] = c.r[2];
    // 104688  mov ecx, 0x12
    X86_AT(c, 0x104688u);
    c.r[1] = 0x12u;
    // 10468d  stosb byte ptr es:[edi], al
    X86_AT(c, 0x10468du);
    x86_string(c, 2, 1, 243, 4, 3);
    // 10468f  pop edi
    X86_AT(c, 0x10468fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 104690  sub ebx, ebx
    X86_AT(c, 0x104690u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 104692  jmp 0x1046a6
    X86_AT(c, 0x104692u);
    goto L_1046a6;
L_104694:
    X86_TICK(c, 22);
    // 104694  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0x104694u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 104697  mov dl, byte ptr [ebp + eax*1 - 0x1c]
    X86_AT(c, 0x104697u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFE4u))));
    // 10469b  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x10469bu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 10469e  mov byte ptr [ecx + ebx*1 + 4], dl
    X86_AT(c, 0x10469eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[3] + 0x4u)), g8(c, 2));
    // 1046a2  inc dword ptr [ebp - 0x20]
    X86_AT(c, 0x1046a2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 1046a5  inc ebx
    X86_AT(c, 0x1046a5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_1046a6:
    X86_TICK(c, 12);
    // 1046a6  cmp dword ptr [ebp - 0x20], 0x12
    X86_AT(c, 0x1046a6u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0x12u, 0, 4);
    // 1046aa  jle 0x104694
    X86_AT(c, 0x1046aau);
    if (x86_cc(c, 14)) { X86_POLL(c, 0x104694u); goto L_104694; }
    X86_TICK(c, 10);
    // 1046ac  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x1046acu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1046af  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x1046afu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 1046b2  mov dword ptr [edx], eax
    X86_AT(c, 0x1046b2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_1046b4:
    X86_TICK(c, 28);
    // 1046b4  pop edi
    X86_AT(c, 0x1046b4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1046b5  pop esi
    X86_AT(c, 0x1046b5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1046b6  pop ebx
    X86_AT(c, 0x1046b6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1046b7  leave 
    X86_AT(c, 0x1046b7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1046b8  ret 0x20
    X86_AT(c, 0x1046b8u);
    c.eip = pop32(c); c.r[4] += 0x20u; return;
    x86_fault(c, 0x1044c8u, "ran off the end of a function");
}
void f_001046d0(X86Cpu& c) {
    X86_TICK(c, 26);
    // 1046d0  push ebp
    X86_AT(c, 0x1046d0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1046d1  mov ebp, esp
    X86_AT(c, 0x1046d1u);
    c.r[5] = c.r[4];
    // 1046d3  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x1046d3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 1046d6  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x1046d6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 1046d9  push dword ptr [ebp + 8]
    X86_AT(c, 0x1046d9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 1046dc  call 0x10228c
    X86_AT(c, 0x1046dcu);
    push32(c, 0x1046e1u); f_0010228c(c); X86_RET(c, 0x1046e1u);
    X86_TICK(c, 11);
    // 1046e1  sub esp, 0xc
    X86_AT(c, 0x1046e1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 1046e4  push esp
    X86_AT(c, 0x1046e4u);
    { uint32_t v = c.r[4]; push32(c, v); }
    // 1046e5  call 0x104118
    X86_AT(c, 0x1046e5u);
    push32(c, 0x1046eau); f_00104118(c); X86_RET(c, 0x1046eau);
    X86_TICK(c, 7);
    // 1046ea  call 0x104dfc
    X86_AT(c, 0x1046eau);
    push32(c, 0x1046efu); f_00104dfc(c); X86_RET(c, 0x1046efu);
    X86_TICK(c, 16);
    // 1046ef  leave 
    X86_AT(c, 0x1046efu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1046f0  ret 0xc
    X86_AT(c, 0x1046f0u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x1046d0u, "ran off the end of a function");
}
void f_001046f8(X86Cpu& c) {
    X86_TICK(c, 17);
    // 1046f8  push ebp
    X86_AT(c, 0x1046f8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1046f9  mov ebp, esp
    X86_AT(c, 0x1046f9u);
    c.r[5] = c.r[4];
    // 1046fb  push ecx
    X86_AT(c, 0x1046fbu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 1046fc  mov eax, dword ptr [0xdfc4c]
    X86_AT(c, 0x1046fcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC4Cu)));
    // 104701  cmp eax, 0xffff
    X86_AT(c, 0x104701u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 104706  je 0x104718
    X86_AT(c, 0x104706u);
    if (x86_cc(c, 4)) { goto L_104718; }
    X86_TICK(c, 11);
    // 104708  mov edx, dword ptr [0xe0180]
    X86_AT(c, 0x104708u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE0180u)));
    // 10470e  cmp eax, edx
    X86_AT(c, 0x10470eu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 104710  jbe 0x104718
    X86_AT(c, 0x104710u);
    if (x86_cc(c, 6)) { goto L_104718; }
    X86_TICK(c, 9);
    // 104712  push edx
    X86_AT(c, 0x104712u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 104713  call 0x10264c
    X86_AT(c, 0x104713u);
    push32(c, 0x104718u); f_0010264c(c); X86_RET(c, 0x104718u);
L_104718:
    X86_TICK(c, 18);
    // 104718  mov byte ptr [0xe0178], 1
    X86_AT(c, 0x104718u);
    wr8((c.sbase[3] + (uint32_t)(0xE0178u)), 0x1u);
    // 10471f  leave 
    X86_AT(c, 0x10471fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 104720  ret 
    X86_AT(c, 0x104720u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1046f8u, "ran off the end of a function");
}
void f_0010472c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 10472c  push ebp
    X86_AT(c, 0x10472cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 10472d  mov ebp, esp
    X86_AT(c, 0x10472du);
    c.r[5] = c.r[4];
    // 10472f  push ecx
    X86_AT(c, 0x10472fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 104730  inc dword ptr [0xdfc58]
    X86_AT(c, 0x104730u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC58u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 104736  mov eax, dword ptr [0xdfc4c]
    X86_AT(c, 0x104736u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC4Cu)));
    // 10473b  cmp eax, 0xffff
    X86_AT(c, 0x10473bu);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 104740  je 0x10474d
    X86_AT(c, 0x104740u);
    if (x86_cc(c, 4)) { goto L_10474d; }
    X86_TICK(c, 7);
    // 104742  cmp eax, 1
    X86_AT(c, 0x104742u);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 104745  jb 0x10474d
    X86_AT(c, 0x104745u);
    if (x86_cc(c, 2)) { goto L_10474d; }
    X86_TICK(c, 6);
    // 104747  dec dword ptr [0xdfc4c]
    X86_AT(c, 0x104747u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC4Cu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_10474d:
    X86_TICK(c, 16);
    // 10474d  leave 
    X86_AT(c, 0x10474du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10474e  ret 
    X86_AT(c, 0x10474eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10472cu, "ran off the end of a function");
}
void f_0010475c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 10475c  push ebp
    X86_AT(c, 0x10475cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 10475d  mov ebp, esp
    X86_AT(c, 0x10475du);
    c.r[5] = c.r[4];
    // 10475f  push ecx
    X86_AT(c, 0x10475fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 104760  push ebx
    X86_AT(c, 0x104760u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 104761  mov dword ptr [0xe017c], 0
    X86_AT(c, 0x104761u);
    wr32((c.sbase[3] + (uint32_t)(0xE017Cu)), 0x0u);
    // 10476b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x10476bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 10476e  add eax, 8
    X86_AT(c, 0x10476eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 104771  push eax
    X86_AT(c, 0x104771u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104772  mov ebx, eax
    X86_AT(c, 0x104772u);
    c.r[3] = c.r[0];
    // 104774  call 0x1040b8
    X86_AT(c, 0x104774u);
    push32(c, 0x104779u); f_001040b8(c); X86_RET(c, 0x104779u);
    X86_TICK(c, 12);
    // 104779  push dword ptr [0xe2f0]
    X86_AT(c, 0x104779u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE2F0u))); push32(c, v); }
    // 10477f  call 0x105358
    X86_AT(c, 0x10477fu);
    push32(c, 0x104784u); f_00105358(c); X86_RET(c, 0x104784u);
    X86_TICK(c, 7);
    // 104784  call 0x1042dc
    X86_AT(c, 0x104784u);
    push32(c, 0x104789u); f_001042dc(c); X86_RET(c, 0x104789u);
    X86_TICK(c, 5);
    // 104789  jae 0x1047a5
    X86_AT(c, 0x104789u);
    if (x86_cc(c, 3)) { goto L_1047a5; }
    X86_TICK(c, 9);
    // 10478b  push ebx
    X86_AT(c, 0x10478bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 10478c  call 0x1040b8
    X86_AT(c, 0x10478cu);
    push32(c, 0x104791u); f_001040b8(c); X86_RET(c, 0x104791u);
    X86_TICK(c, 7);
    // 104791  call 0x104190
    X86_AT(c, 0x104791u);
    push32(c, 0x104796u); f_00104190(c); X86_RET(c, 0x104796u);
    X86_TICK(c, 9);
    // 104796  push ebx
    X86_AT(c, 0x104796u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 104797  call 0x104118
    X86_AT(c, 0x104797u);
    push32(c, 0x10479cu); f_00104118(c); X86_RET(c, 0x10479cu);
    X86_TICK(c, 9);
    // 10479c  mov byte ptr [0xe0174], 0x2d
    X86_AT(c, 0x10479cu);
    wr8((c.sbase[3] + (uint32_t)(0xE0174u)), 0x2Du);
    // 1047a3  jmp 0x1047c7
    X86_AT(c, 0x1047a3u);
    goto L_1047c7;
L_1047a5:
    X86_TICK(c, 12);
    // 1047a5  test byte ptr [0xdfc48], 2
    X86_AT(c, 0x1047a5u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x2u, 1);
    // 1047ac  je 0x1047b7
    X86_AT(c, 0x1047acu);
    if (x86_cc(c, 4)) { goto L_1047b7; }
    X86_TICK(c, 9);
    // 1047ae  mov byte ptr [0xe0174], 0x2b
    X86_AT(c, 0x1047aeu);
    wr8((c.sbase[3] + (uint32_t)(0xE0174u)), 0x2Bu);
    // 1047b5  jmp 0x1047c7
    X86_AT(c, 0x1047b5u);
    goto L_1047c7;
L_1047b7:
    X86_TICK(c, 12);
    // 1047b7  test byte ptr [0xdfc48], 4
    X86_AT(c, 0x1047b7u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x4u, 1);
    // 1047be  je 0x1047d8
    X86_AT(c, 0x1047beu);
    if (x86_cc(c, 4)) { goto L_1047d8; }
    X86_TICK(c, 2);
    // 1047c0  mov byte ptr [0xe0174], 0x20
    X86_AT(c, 0x1047c0u);
    wr8((c.sbase[3] + (uint32_t)(0xE0174u)), 0x20u);
L_1047c7:
    X86_TICK(c, 11);
    // 1047c7  mov dword ptr [0xe017c], 1
    X86_AT(c, 0x1047c7u);
    wr32((c.sbase[3] + (uint32_t)(0xE017Cu)), 0x1u);
    // 1047d1  mov ecx, ebp
    X86_AT(c, 0x1047d1u);
    c.r[1] = c.r[5];
    // 1047d3  call 0x10472c
    X86_AT(c, 0x1047d3u);
    push32(c, 0x1047d8u); f_0010472c(c); X86_RET(c, 0x1047d8u);
L_1047d8:
    X86_TICK(c, 20);
    // 1047d8  pop ebx
    X86_AT(c, 0x1047d8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 1047d9  leave 
    X86_AT(c, 0x1047d9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1047da  ret 
    X86_AT(c, 0x1047dau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10475cu, "ran off the end of a function");
}
void f_001047f4(X86Cpu& c) {
    X86_TICK(c, 27);
    // 1047f4  push ebp
    X86_AT(c, 0x1047f4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1047f5  mov ebp, esp
    X86_AT(c, 0x1047f5u);
    c.r[5] = c.r[4];
    // 1047f7  push ecx
    X86_AT(c, 0x1047f7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 1047f8  push esi
    X86_AT(c, 0x1047f8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1047f9  push edi
    X86_AT(c, 0x1047f9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1047fa  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x1047fau);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 1047fd  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x1047fdu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 104800  mov ecx, edi
    X86_AT(c, 0x104800u);
    c.r[1] = c.r[7];
    // 104802  jmp 0x104805
    X86_AT(c, 0x104802u);
    goto L_104805;
L_104804:
    X86_TICK(c, 2);
    // 104804  dec ecx
    X86_AT(c, 0x104804u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_104805:
    X86_TICK(c, 7);
    // 104805  cmp esi, ecx
    X86_AT(c, 0x104805u);
    (void)x86_sub(c, c.r[6], c.r[1], 0, 4);
    // 104807  jae 0x104812
    X86_AT(c, 0x104807u);
    if (x86_cc(c, 3)) { goto L_104812; }
    X86_TICK(c, 12);
    // 104809  cmp byte ptr [ecx + 0xe0152], 0x30
    X86_AT(c, 0x104809u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0xE0152u))), 0x30u, 0, 1);
    // 104810  je 0x104804
    X86_AT(c, 0x104810u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x104804u); goto L_104804; }
L_104812:
    X86_TICK(c, 9);
    // 104812  lea eax, [esi + 1]
    X86_AT(c, 0x104812u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 104815  cmp eax, ecx
    X86_AT(c, 0x104815u);
    (void)x86_sub(c, c.r[0], c.r[1], 0, 4);
    // 104817  jne 0x10482c
    X86_AT(c, 0x104817u);
    if (x86_cc(c, 5)) { goto L_10482c; }
    X86_TICK(c, 12);
    // 104819  test byte ptr [0xdfc48], 8
    X86_AT(c, 0x104819u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x8u, 1);
    // 104820  jne 0x10482c
    X86_AT(c, 0x104820u);
    if (x86_cc(c, 5)) { goto L_10482c; }
    X86_TICK(c, 12);
    // 104822  cmp byte ptr [esi + 0xe0153], 0x2e
    X86_AT(c, 0x104822u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xE0153u))), 0x2Eu, 0, 1);
    // 104829  jne 0x10482c
    X86_AT(c, 0x104829u);
    if (x86_cc(c, 5)) { goto L_10482c; }
    X86_TICK(c, 2);
    // 10482b  dec ecx
    X86_AT(c, 0x10482bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_10482c:
    X86_TICK(c, 43);
    // 10482c  lea eax, [ecx - 1]
    X86_AT(c, 0x10482cu);
    c.r[0] = (uint32_t)(c.r[1] + 0xFFFFFFFFu);
    // 10482f  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x10482fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104832  mov dword ptr [edx - 0x10], eax
    X86_AT(c, 0x104832u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[0]);
    // 104835  mov eax, edi
    X86_AT(c, 0x104835u);
    c.r[0] = c.r[7];
    // 104837  sub eax, ecx
    X86_AT(c, 0x104837u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 104839  sub dword ptr [0xe0180], eax
    X86_AT(c, 0x104839u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0180u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 10483f  pop edi
    X86_AT(c, 0x10483fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 104840  pop esi
    X86_AT(c, 0x104840u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 104841  leave 
    X86_AT(c, 0x104841u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 104842  ret 8
    X86_AT(c, 0x104842u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x1047f4u, "ran off the end of a function");
}
void f_00104860(X86Cpu& c) {
    X86_TICK(c, 18);
    // 104860  push ebp
    X86_AT(c, 0x104860u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 104861  mov ebp, esp
    X86_AT(c, 0x104861u);
    c.r[5] = c.r[4];
    // 104863  push ecx
    X86_AT(c, 0x104863u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 104864  test byte ptr [0xdfc48], 1
    X86_AT(c, 0x104864u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x1u, 1);
    // 10486b  jne 0x104881
    X86_AT(c, 0x10486bu);
    if (x86_cc(c, 5)) { goto L_104881; }
    X86_TICK(c, 12);
    // 10486d  test byte ptr [0xdfc48], 0x10
    X86_AT(c, 0x10486du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x10u, 1);
    // 104874  jne 0x104881
    X86_AT(c, 0x104874u);
    if (x86_cc(c, 5)) { goto L_104881; }
    X86_TICK(c, 15);
    // 104876  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x104876u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104879  mov ecx, dword ptr [eax - 4]
    X86_AT(c, 0x104879u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 10487c  call 0x1046f8
    X86_AT(c, 0x10487cu);
    push32(c, 0x104881u); f_001046f8(c); X86_RET(c, 0x104881u);
L_104881:
    X86_TICK(c, 11);
    // 104881  mov eax, dword ptr [0xe017c]
    X86_AT(c, 0x104881u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE017Cu)));
    // 104886  and eax, eax
    X86_AT(c, 0x104886u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 104888  je 0x10489c
    X86_AT(c, 0x104888u);
    if (x86_cc(c, 4)) { goto L_10489c; }
    X86_TICK(c, 15);
    // 10488a  push eax
    X86_AT(c, 0x10488au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10488b  push 0xe0174
    X86_AT(c, 0x10488bu);
    { uint32_t v = 0xE0174u; push32(c, v); }
    // 104890  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x104890u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 104896  call dword ptr [0xdfc5c]
    X86_AT(c, 0x104896u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x10489cu); x86_call(c, t); X86_RET(c, 0x10489cu); }
L_10489c:
    X86_TICK(c, 12);
    // 10489c  test byte ptr [0xdfc48], 1
    X86_AT(c, 0x10489cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x1u, 1);
    // 1048a3  jne 0x1048b9
    X86_AT(c, 0x1048a3u);
    if (x86_cc(c, 5)) { goto L_1048b9; }
    X86_TICK(c, 12);
    // 1048a5  cmp byte ptr [0xe0178], 0
    X86_AT(c, 0x1048a5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xE0178u))), 0x0u, 0, 1);
    // 1048ac  jne 0x1048b9
    X86_AT(c, 0x1048acu);
    if (x86_cc(c, 5)) { goto L_1048b9; }
    X86_TICK(c, 15);
    // 1048ae  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x1048aeu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1048b1  mov ecx, dword ptr [eax - 4]
    X86_AT(c, 0x1048b1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 1048b4  call 0x1046f8
    X86_AT(c, 0x1048b4u);
    push32(c, 0x1048b9u); f_001046f8(c); X86_RET(c, 0x1048b9u);
L_1048b9:
    X86_TICK(c, 16);
    // 1048b9  leave 
    X86_AT(c, 0x1048b9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1048ba  ret 
    X86_AT(c, 0x1048bau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104860u, "ran off the end of a function");
}
void f_001048c4(X86Cpu& c) {
    X86_TICK(c, 24);
    // 1048c4  push ebp
    X86_AT(c, 0x1048c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1048c5  mov ebp, esp
    X86_AT(c, 0x1048c5u);
    c.r[5] = c.r[4];
    // 1048c7  push ecx
    X86_AT(c, 0x1048c7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 1048c8  push ebx
    X86_AT(c, 0x1048c8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1048c9  push esi
    X86_AT(c, 0x1048c9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1048ca  push edi
    X86_AT(c, 0x1048cau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1048cb  cmp dword ptr [0xe0184], 0
    X86_AT(c, 0x1048cbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE0184u))), 0x0u, 0, 4);
    // 1048d2  jle 0x104a03
    X86_AT(c, 0x1048d2u);
    if (x86_cc(c, 14)) { goto L_104a03; }
    X86_TICK(c, 12);
    // 1048d8  cmp byte ptr [0xe019b], 0
    X86_AT(c, 0x1048d8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xE019Bu))), 0x0u, 0, 1);
    // 1048df  je 0x1048f2
    X86_AT(c, 0x1048dfu);
    if (x86_cc(c, 4)) { goto L_1048f2; }
    X86_TICK(c, 8);
    // 1048e1  mov byte ptr [0xe0154], 0x2e
    X86_AT(c, 0x1048e1u);
    wr8((c.sbase[3] + (uint32_t)(0xE0154u)), 0x2Eu);
    // 1048e8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x1048e8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1048eb  mov dword ptr [eax - 0x10], 1
    X86_AT(c, 0x1048ebu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)), 0x1u);
L_1048f2:
    X86_TICK(c, 11);
    // 1048f2  mov eax, dword ptr [0xdfc50]
    X86_AT(c, 0x1048f2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC50u)));
    // 1048f7  and eax, eax
    X86_AT(c, 0x1048f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 1048f9  je 0x104971
    X86_AT(c, 0x1048f9u);
    if (x86_cc(c, 4)) { goto L_104971; }
    X86_TICK(c, 19);
    // 1048ff  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x1048ffu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104902  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0x104902u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 104905  mov esi, dword ptr [0xe0184]
    X86_AT(c, 0x104905u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xE0184u)));
    // 10490b  cmp esi, ecx
    X86_AT(c, 0x10490bu);
    (void)x86_sub(c, c.r[6], c.r[1], 0, 4);
    // 10490d  jge 0x10494b
    X86_AT(c, 0x10490du);
    if (x86_cc(c, 13)) { goto L_10494b; }
    X86_TICK(c, 9);
    // 10490f  sub ecx, esi
    X86_AT(c, 0x10490fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 104911  cmp ecx, eax
    X86_AT(c, 0x104911u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 104913  jb 0x104917
    X86_AT(c, 0x104913u);
    if (x86_cc(c, 2)) { goto L_104917; }
    X86_TICK(c, 2);
    // 104915  mov ecx, eax
    X86_AT(c, 0x104915u);
    c.r[1] = c.r[0];
L_104917:
    X86_TICK(c, 44);
    // 104917  mov edi, ecx
    X86_AT(c, 0x104917u);
    c.r[7] = c.r[1];
    // 104919  add esi, 0xe0188
    X86_AT(c, 0x104919u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xE0188u, 0, 4); }
    // 10491f  mov ebx, 0xe0155
    X86_AT(c, 0x10491fu);
    c.r[3] = 0xE0155u;
    // 104924  push edi
    X86_AT(c, 0x104924u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 104925  mov edi, ebx
    X86_AT(c, 0x104925u);
    c.r[7] = c.r[3];
    // 104927  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x104927u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 104929  pop edi
    X86_AT(c, 0x104929u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10492a  lea ecx, [edi + 1]
    X86_AT(c, 0x10492au);
    c.r[1] = (uint32_t)(c.r[7] + 0x1u);
    // 10492d  mov dword ptr [edx - 0x10], ecx
    X86_AT(c, 0x10492du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[1]);
    // 104930  sub dword ptr [0xdfc50], edi
    X86_AT(c, 0x104930u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC50u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 104936  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x104936u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 10493a  je 0x104984
    X86_AT(c, 0x10493au);
    if (x86_cc(c, 4)) { goto L_104984; }
    X86_TICK(c, 15);
    // 10493c  push 1
    X86_AT(c, 0x10493cu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 10493e  lea eax, [edi + 2]
    X86_AT(c, 0x10493eu);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 104941  push eax
    X86_AT(c, 0x104941u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104942  mov ecx, edx
    X86_AT(c, 0x104942u);
    c.r[1] = c.r[2];
    // 104944  call 0x1047f4
    X86_AT(c, 0x104944u);
    push32(c, 0x104949u); f_001047f4(c); X86_RET(c, 0x104949u);
    X86_TICK(c, 7);
    // 104949  jmp 0x104984
    X86_AT(c, 0x104949u);
    goto L_104984;
L_10494b:
    X86_TICK(c, 16);
    // 10494b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x10494bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 10494e  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x10494eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 104952  je 0x104984
    X86_AT(c, 0x104952u);
    if (x86_cc(c, 4)) { goto L_104984; }
    X86_TICK(c, 12);
    // 104954  test byte ptr [0xdfc48], 8
    X86_AT(c, 0x104954u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x8u, 1);
    // 10495b  jne 0x104984
    X86_AT(c, 0x10495bu);
    if (x86_cc(c, 5)) { goto L_104984; }
    X86_TICK(c, 12);
    // 10495d  cmp dword ptr [0xdfc4c], 0xffff
    X86_AT(c, 0x10495du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDFC4Cu))), 0xFFFFu, 0, 4);
    // 104967  je 0x10497a
    X86_AT(c, 0x104967u);
    if (x86_cc(c, 4)) { goto L_10497a; }
    X86_TICK(c, 13);
    // 104969  dec dword ptr [0xe0180]
    X86_AT(c, 0x104969u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0180u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 10496f  jmp 0x10497a
    X86_AT(c, 0x10496fu);
    goto L_10497a;
L_104971:
    X86_TICK(c, 12);
    // 104971  test byte ptr [0xdfc48], 8
    X86_AT(c, 0x104971u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x8u, 1);
    // 104978  jne 0x104984
    X86_AT(c, 0x104978u);
    if (x86_cc(c, 5)) { goto L_104984; }
L_10497a:
    X86_TICK(c, 6);
    // 10497a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x10497au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 10497d  mov dword ptr [eax - 0x10], 0
    X86_AT(c, 0x10497du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)), 0x0u);
L_104984:
    X86_TICK(c, 13);
    // 104984  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x104984u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104987  mov ebx, ecx
    X86_AT(c, 0x104987u);
    c.r[3] = c.r[1];
    // 104989  call 0x104860
    X86_AT(c, 0x104989u);
    push32(c, 0x10498eu); f_00104860(c); X86_RET(c, 0x10498eu);
    X86_TICK(c, 15);
    // 10498e  mov eax, dword ptr [ebx - 8]
    X86_AT(c, 0x10498eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF8u)));
    // 104991  mov edx, dword ptr [0xe0184]
    X86_AT(c, 0x104991u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE0184u)));
    // 104997  cmp edx, eax
    X86_AT(c, 0x104997u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 104999  jl 0x10499c
    X86_AT(c, 0x104999u);
    if (x86_cc(c, 12)) { goto L_10499c; }
    X86_TICK(c, 3);
    // 10499b  xchg edx, eax
    X86_AT(c, 0x10499bu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_10499c:
    X86_TICK(c, 15);
    // 10499c  push edx
    X86_AT(c, 0x10499cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 10499d  push 0xe0188
    X86_AT(c, 0x10499du);
    { uint32_t v = 0xE0188u; push32(c, v); }
    // 1049a2  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x1049a2u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 1049a8  call dword ptr [0xdfc5c]
    X86_AT(c, 0x1049a8u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x1049aeu); x86_call(c, t); X86_RET(c, 0x1049aeu); }
    X86_TICK(c, 15);
    // 1049ae  mov eax, dword ptr [ebx - 8]
    X86_AT(c, 0x1049aeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF8u)));
    // 1049b1  mov edx, dword ptr [0xe0184]
    X86_AT(c, 0x1049b1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE0184u)));
    // 1049b7  cmp edx, eax
    X86_AT(c, 0x1049b7u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 1049b9  jle 0x1049c8
    X86_AT(c, 0x1049b9u);
    if (x86_cc(c, 14)) { goto L_1049c8; }
    X86_TICK(c, 13);
    // 1049bb  sub edx, eax
    X86_AT(c, 0x1049bbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 1049bd  push edx
    X86_AT(c, 0x1049bdu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 1049be  push 0xdfc64
    X86_AT(c, 0x1049beu);
    { uint32_t v = 0xDFC64u; push32(c, v); }
    // 1049c3  call 0x102604
    X86_AT(c, 0x1049c3u);
    push32(c, 0x1049c8u); f_00102604(c); X86_RET(c, 0x1049c8u);
L_1049c8:
    X86_TICK(c, 15);
    // 1049c8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x1049c8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1049cb  mov eax, dword ptr [eax - 0x10]
    X86_AT(c, 0x1049cbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)));
    // 1049ce  and eax, eax
    X86_AT(c, 0x1049ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 1049d0  je 0x1049e4
    X86_AT(c, 0x1049d0u);
    if (x86_cc(c, 4)) { goto L_1049e4; }
    X86_TICK(c, 15);
    // 1049d2  push eax
    X86_AT(c, 0x1049d2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1049d3  push 0xe0154
    X86_AT(c, 0x1049d3u);
    { uint32_t v = 0xE0154u; push32(c, v); }
    // 1049d8  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x1049d8u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 1049de  call dword ptr [0xdfc5c]
    X86_AT(c, 0x1049deu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x1049e4u); x86_call(c, t); X86_RET(c, 0x1049e4u); }
L_1049e4:
    X86_TICK(c, 11);
    // 1049e4  mov eax, dword ptr [0xdfc50]
    X86_AT(c, 0x1049e4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC50u)));
    // 1049e9  and eax, eax
    X86_AT(c, 0x1049e9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 1049eb  je 0x104b47
    X86_AT(c, 0x1049ebu);
    if (x86_cc(c, 4)) { goto L_104b47; }
    X86_TICK(c, 16);
    // 1049f1  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x1049f1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 1049f4  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x1049f4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 1049f8  jne 0x104b47
    X86_AT(c, 0x1049f8u);
    if (x86_cc(c, 5)) { goto L_104b47; }
    X86_TICK(c, 7);
    // 1049fe  jmp 0x104b3c
    X86_AT(c, 0x1049feu);
    goto L_104b3c;
L_104a03:
    X86_TICK(c, 11);
    // 104a03  mov eax, dword ptr [0xe0184]
    X86_AT(c, 0x104a03u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0184u)));
    // 104a08  and eax, eax
    X86_AT(c, 0x104a08u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 104a0a  jge 0x104a0e
    X86_AT(c, 0x104a0au);
    if (x86_cc(c, 13)) { goto L_104a0e; }
    X86_TICK(c, 2);
    // 104a0c  neg eax
    X86_AT(c, 0x104a0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_104a0e:
    X86_TICK(c, 13);
    // 104a0e  mov dword ptr [0xe0184], eax
    X86_AT(c, 0x104a0eu);
    wr32((c.sbase[3] + (uint32_t)(0xE0184u)), c.r[0]);
    // 104a13  mov edx, dword ptr [0xdfc50]
    X86_AT(c, 0x104a13u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDFC50u)));
    // 104a19  and edx, edx
    X86_AT(c, 0x104a19u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 104a1b  je 0x104a4d
    X86_AT(c, 0x104a1bu);
    if (x86_cc(c, 4)) { goto L_104a4d; }
    X86_TICK(c, 7);
    // 104a1d  cmp edx, eax
    X86_AT(c, 0x104a1du);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 104a1f  jle 0x104a44
    X86_AT(c, 0x104a1fu);
    if (x86_cc(c, 14)) { goto L_104a44; }
    X86_TICK(c, 21);
    // 104a21  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x104a21u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104a24  mov eax, dword ptr [eax - 4]
    X86_AT(c, 0x104a24u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 104a27  add eax, 8
    X86_AT(c, 0x104a27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 104a2a  push eax
    X86_AT(c, 0x104a2au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104a2b  mov ebx, eax
    X86_AT(c, 0x104a2bu);
    c.r[3] = c.r[0];
    // 104a2d  call 0x1040b8
    X86_AT(c, 0x104a2du);
    push32(c, 0x104a32u); f_001040b8(c); X86_RET(c, 0x104a32u);
    X86_TICK(c, 12);
    // 104a32  push dword ptr [0xe2f0]
    X86_AT(c, 0x104a32u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE2F0u))); push32(c, v); }
    // 104a38  call 0x105358
    X86_AT(c, 0x104a38u);
    push32(c, 0x104a3du); f_00105358(c); X86_RET(c, 0x104a3du);
    X86_TICK(c, 7);
    // 104a3d  call 0x1042dc
    X86_AT(c, 0x104a3du);
    push32(c, 0x104a42u); f_001042dc(c); X86_RET(c, 0x104a42u);
    X86_TICK(c, 5);
    // 104a42  jne 0x104aa1
    X86_AT(c, 0x104a42u);
    if (x86_cc(c, 5)) { goto L_104aa1; }
L_104a44:
    X86_TICK(c, 16);
    // 104a44  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x104a44u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104a47  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x104a47u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 104a4b  je 0x104a80
    X86_AT(c, 0x104a4bu);
    if (x86_cc(c, 4)) { goto L_104a80; }
L_104a4d:
    X86_TICK(c, 12);
    // 104a4d  test byte ptr [0xdfc48], 8
    X86_AT(c, 0x104a4du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x8u, 1);
    // 104a54  jne 0x104a74
    X86_AT(c, 0x104a54u);
    if (x86_cc(c, 5)) { goto L_104a74; }
    X86_TICK(c, 13);
    // 104a56  mov dword ptr [0xe0180], 1
    X86_AT(c, 0x104a56u);
    wr32((c.sbase[3] + (uint32_t)(0xE0180u)), 0x1u);
    // 104a60  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x104a60u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104a63  call 0x104860
    X86_AT(c, 0x104a63u);
    push32(c, 0x104a68u); f_00104860(c); X86_RET(c, 0x104a68u);
    X86_TICK(c, 11);
    // 104a68  push 1
    X86_AT(c, 0x104a68u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 104a6a  push 0xe30c
    X86_AT(c, 0x104a6au);
    { uint32_t v = 0xE30Cu; push32(c, v); }
    // 104a6f  jmp 0x104b1e
    X86_AT(c, 0x104a6fu);
    goto L_104b1e;
L_104a74:
    X86_TICK(c, 9);
    // 104a74  mov dword ptr [0xe0180], 2
    X86_AT(c, 0x104a74u);
    wr32((c.sbase[3] + (uint32_t)(0xE0180u)), 0x2u);
    // 104a7e  jmp 0x104a8d
    X86_AT(c, 0x104a7eu);
    goto L_104a8d;
L_104a80:
    X86_TICK(c, 8);
    // 104a80  mov eax, dword ptr [0xdfc50]
    X86_AT(c, 0x104a80u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC50u)));
    // 104a85  add eax, 2
    X86_AT(c, 0x104a85u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 104a88  mov dword ptr [0xe0180], eax
    X86_AT(c, 0x104a88u);
    wr32((c.sbase[3] + (uint32_t)(0xE0180u)), c.r[0]);
L_104a8d:
    X86_TICK(c, 11);
    // 104a8d  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x104a8du);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104a90  call 0x104860
    X86_AT(c, 0x104a90u);
    push32(c, 0x104a95u); f_00104860(c); X86_RET(c, 0x104a95u);
    X86_TICK(c, 11);
    // 104a95  push 2
    X86_AT(c, 0x104a95u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 104a97  push 0xe30e
    X86_AT(c, 0x104a97u);
    { uint32_t v = 0xE30Eu; push32(c, v); }
    // 104a9c  jmp 0x104b1e
    X86_AT(c, 0x104a9cu);
    goto L_104b1e;
L_104aa1:
    X86_TICK(c, 30);
    // 104aa1  mov eax, dword ptr [0xe0184]
    X86_AT(c, 0x104aa1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0184u)));
    // 104aa6  sub dword ptr [0xdfc50], eax
    X86_AT(c, 0x104aa6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC50u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 104aac  mov eax, dword ptr [0xdfc50]
    X86_AT(c, 0x104aacu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC50u)));
    // 104ab1  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x104ab1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104ab4  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0x104ab4u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 104ab7  cmp ecx, eax
    X86_AT(c, 0x104ab7u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 104ab9  jb 0x104abd
    X86_AT(c, 0x104ab9u);
    if (x86_cc(c, 2)) { goto L_104abd; }
    X86_TICK(c, 2);
    // 104abb  mov ecx, eax
    X86_AT(c, 0x104abbu);
    c.r[1] = c.r[0];
L_104abd:
    X86_TICK(c, 40);
    // 104abd  mov edi, ecx
    X86_AT(c, 0x104abdu);
    c.r[7] = c.r[1];
    // 104abf  mov esi, 0xe0188
    X86_AT(c, 0x104abfu);
    c.r[6] = 0xE0188u;
    // 104ac4  push edi
    X86_AT(c, 0x104ac4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 104ac5  mov edi, 0xe0154
    X86_AT(c, 0x104ac5u);
    c.r[7] = 0xE0154u;
    // 104aca  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x104acau);
    x86_string(c, 0, 1, 243, 4, 3);
    // 104acc  pop edi
    X86_AT(c, 0x104accu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 104acd  sub dword ptr [0xdfc50], edi
    X86_AT(c, 0x104acdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC50u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 104ad3  mov dword ptr [edx - 0x10], edi
    X86_AT(c, 0x104ad3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[7]);
    // 104ad6  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x104ad6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 104ada  je 0x104ae9
    X86_AT(c, 0x104adau);
    if (x86_cc(c, 4)) { goto L_104ae9; }
    X86_TICK(c, 15);
    // 104adc  push 1
    X86_AT(c, 0x104adcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 104ade  lea eax, [edi + 1]
    X86_AT(c, 0x104adeu);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 104ae1  push eax
    X86_AT(c, 0x104ae1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104ae2  mov ecx, edx
    X86_AT(c, 0x104ae2u);
    c.r[1] = c.r[2];
    // 104ae4  call 0x1047f4
    X86_AT(c, 0x104ae4u);
    push32(c, 0x104ae9u); f_001047f4(c); X86_RET(c, 0x104ae9u);
L_104ae9:
    X86_TICK(c, 13);
    // 104ae9  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x104ae9u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104aec  mov ebx, ecx
    X86_AT(c, 0x104aecu);
    c.r[3] = c.r[1];
    // 104aee  call 0x104860
    X86_AT(c, 0x104aeeu);
    push32(c, 0x104af3u); f_00104860(c); X86_RET(c, 0x104af3u);
    X86_TICK(c, 15);
    // 104af3  push 2
    X86_AT(c, 0x104af3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 104af5  push 0xe30e
    X86_AT(c, 0x104af5u);
    { uint32_t v = 0xE30Eu; push32(c, v); }
    // 104afa  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x104afau);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 104b00  call dword ptr [0xdfc5c]
    X86_AT(c, 0x104b00u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x104b06u); x86_call(c, t); X86_RET(c, 0x104b06u); }
    X86_TICK(c, 14);
    // 104b06  push dword ptr [0xe0184]
    X86_AT(c, 0x104b06u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE0184u))); push32(c, v); }
    // 104b0c  push 0xdfc64
    X86_AT(c, 0x104b0cu);
    { uint32_t v = 0xDFC64u; push32(c, v); }
    // 104b11  call 0x102604
    X86_AT(c, 0x104b11u);
    push32(c, 0x104b16u); f_00102604(c); X86_RET(c, 0x104b16u);
    X86_TICK(c, 7);
    // 104b16  push dword ptr [ebx - 0x10]
    X86_AT(c, 0x104b16u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF0u))); push32(c, v); }
    // 104b19  push 0xe0154
    X86_AT(c, 0x104b19u);
    { uint32_t v = 0xE0154u; push32(c, v); }
L_104b1e:
    X86_TICK(c, 11);
    // 104b1e  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x104b1eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 104b24  call dword ptr [0xdfc5c]
    X86_AT(c, 0x104b24u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x104b2au); x86_call(c, t); X86_RET(c, 0x104b2au); }
    X86_TICK(c, 16);
    // 104b2a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x104b2au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104b2d  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x104b2du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 104b31  jne 0x104b47
    X86_AT(c, 0x104b31u);
    if (x86_cc(c, 5)) { goto L_104b47; }
    X86_TICK(c, 11);
    // 104b33  mov eax, dword ptr [0xdfc50]
    X86_AT(c, 0x104b33u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC50u)));
    // 104b38  and eax, eax
    X86_AT(c, 0x104b38u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 104b3a  je 0x104b47
    X86_AT(c, 0x104b3au);
    if (x86_cc(c, 4)) { goto L_104b47; }
L_104b3c:
    X86_TICK(c, 11);
    // 104b3c  push eax
    X86_AT(c, 0x104b3cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104b3d  push 0xdfc64
    X86_AT(c, 0x104b3du);
    { uint32_t v = 0xDFC64u; push32(c, v); }
    // 104b42  call 0x102604
    X86_AT(c, 0x104b42u);
    push32(c, 0x104b47u); f_00102604(c); X86_RET(c, 0x104b47u);
L_104b47:
    X86_TICK(c, 28);
    // 104b47  pop edi
    X86_AT(c, 0x104b47u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 104b48  pop esi
    X86_AT(c, 0x104b48u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 104b49  pop ebx
    X86_AT(c, 0x104b49u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 104b4a  leave 
    X86_AT(c, 0x104b4au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 104b4b  ret 
    X86_AT(c, 0x104b4bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1048c4u, "ran off the end of a function");
}
void f_00104b1e(X86Cpu& c) {
    X86_TICK(c, 11);
    // 104b1e  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x104b1eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 104b24  call dword ptr [0xdfc5c]
    X86_AT(c, 0x104b24u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x104b2au); x86_call(c, t); X86_RET(c, 0x104b2au); }
    X86_TICK(c, 16);
    // 104b2a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x104b2au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104b2d  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x104b2du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 104b31  jne 0x104b47
    X86_AT(c, 0x104b31u);
    if (x86_cc(c, 5)) { goto L_104b47; }
    X86_TICK(c, 11);
    // 104b33  mov eax, dword ptr [0xdfc50]
    X86_AT(c, 0x104b33u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC50u)));
    // 104b38  and eax, eax
    X86_AT(c, 0x104b38u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 104b3a  je 0x104b47
    X86_AT(c, 0x104b3au);
    if (x86_cc(c, 4)) { goto L_104b47; }
    X86_TICK(c, 11);
    // 104b3c  push eax
    X86_AT(c, 0x104b3cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104b3d  push 0xdfc64
    X86_AT(c, 0x104b3du);
    { uint32_t v = 0xDFC64u; push32(c, v); }
    // 104b42  call 0x102604
    X86_AT(c, 0x104b42u);
    push32(c, 0x104b47u); f_00102604(c); X86_RET(c, 0x104b47u);
L_104b47:
    X86_TICK(c, 28);
    // 104b47  pop edi
    X86_AT(c, 0x104b47u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 104b48  pop esi
    X86_AT(c, 0x104b48u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 104b49  pop ebx
    X86_AT(c, 0x104b49u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 104b4a  leave 
    X86_AT(c, 0x104b4au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 104b4b  ret 
    X86_AT(c, 0x104b4bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104b1eu, "ran off the end of a function");
}
void f_00104b54(X86Cpu& c) {
    X86_TICK(c, 34);
    // 104b54  push ebp
    X86_AT(c, 0x104b54u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 104b55  mov ebp, esp
    X86_AT(c, 0x104b55u);
    c.r[5] = c.r[4];
    // 104b57  push ecx
    X86_AT(c, 0x104b57u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 104b58  sub esp, 0xc
    X86_AT(c, 0x104b58u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 104b5b  push ebx
    X86_AT(c, 0x104b5bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 104b5c  push esi
    X86_AT(c, 0x104b5cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 104b5d  push edi
    X86_AT(c, 0x104b5du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 104b5e  mov edi, 1
    X86_AT(c, 0x104b5eu);
    c.r[7] = 0x1u;
    // 104b63  mov al, byte ptr [0xe0188]
    X86_AT(c, 0x104b63u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE0188u))));
    // 104b68  mov byte ptr [edi + 0xe0153], al
    X86_AT(c, 0x104b68u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xE0153u)), g8(c, 0));
    // 104b6e  cmp byte ptr [0xe019b], 0
    X86_AT(c, 0x104b6eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xE019Bu))), 0x0u, 0, 1);
    // 104b75  je 0x104b84
    X86_AT(c, 0x104b75u);
    if (x86_cc(c, 4)) { goto L_104b84; }
    X86_TICK(c, 10);
    // 104b77  mov dword ptr [ebp - 0x10], edi
    X86_AT(c, 0x104b77u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[7]);
    // 104b7a  add edi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x104b7au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 104b7d  mov byte ptr [edi + 0xe0153], 0x2e
    X86_AT(c, 0x104b7du);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xE0153u)), 0x2Eu);
L_104b84:
    X86_TICK(c, 13);
    // 104b84  inc edi
    X86_AT(c, 0x104b84u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 104b85  mov eax, dword ptr [0xdfc50]
    X86_AT(c, 0x104b85u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC50u)));
    // 104b8a  and eax, eax
    X86_AT(c, 0x104b8au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 104b8c  je 0x104c0e
    X86_AT(c, 0x104b8cu);
    if (x86_cc(c, 4)) { goto L_104c0e; }
    X86_TICK(c, 15);
    // 104b92  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x104b92u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104b95  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0x104b95u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 104b98  cmp ecx, eax
    X86_AT(c, 0x104b98u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 104b9a  jb 0x104b9e
    X86_AT(c, 0x104b9au);
    if (x86_cc(c, 2)) { goto L_104b9e; }
    X86_TICK(c, 2);
    // 104b9c  mov ecx, eax
    X86_AT(c, 0x104b9cu);
    c.r[1] = c.r[0];
L_104b9e:
    X86_TICK(c, 54);
    // 104b9e  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0x104b9eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 104ba1  mov esi, 0xe0189
    X86_AT(c, 0x104ba1u);
    c.r[6] = 0xE0189u;
    // 104ba6  lea ebx, [edi + 0xe0153]
    X86_AT(c, 0x104ba6u);
    c.r[3] = (uint32_t)(c.r[7] + 0xE0153u);
    // 104bac  push edi
    X86_AT(c, 0x104bacu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 104bad  mov edi, ebx
    X86_AT(c, 0x104badu);
    c.r[7] = c.r[3];
    // 104baf  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x104bafu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 104bb1  pop edi
    X86_AT(c, 0x104bb1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 104bb2  add edi, dword ptr [ebp - 8]
    X86_AT(c, 0x104bb2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 104bb5  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x104bb5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 104bb8  sub dword ptr [0xdfc50], eax
    X86_AT(c, 0x104bb8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC50u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 104bbe  lea eax, [edi - 1]
    X86_AT(c, 0x104bbeu);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 104bc1  mov dword ptr [edx - 0x10], eax
    X86_AT(c, 0x104bc1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[0]);
    // 104bc4  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x104bc4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 104bc8  je 0x104bd4
    X86_AT(c, 0x104bc8u);
    if (x86_cc(c, 4)) { goto L_104bd4; }
    X86_TICK(c, 13);
    // 104bca  push 2
    X86_AT(c, 0x104bcau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 104bcc  push edi
    X86_AT(c, 0x104bccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 104bcd  mov ecx, edx
    X86_AT(c, 0x104bcdu);
    c.r[1] = c.r[2];
    // 104bcf  call 0x1047f4
    X86_AT(c, 0x104bcfu);
    push32(c, 0x104bd4u); f_001047f4(c); X86_RET(c, 0x104bd4u);
L_104bd4:
    X86_TICK(c, 13);
    // 104bd4  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x104bd4u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104bd7  mov ebx, ecx
    X86_AT(c, 0x104bd7u);
    c.r[3] = c.r[1];
    // 104bd9  call 0x104860
    X86_AT(c, 0x104bd9u);
    push32(c, 0x104bdeu); f_00104860(c); X86_RET(c, 0x104bdeu);
    X86_TICK(c, 18);
    // 104bde  push dword ptr [ebx - 0x10]
    X86_AT(c, 0x104bdeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF0u))); push32(c, v); }
    // 104be1  push 0xe0154
    X86_AT(c, 0x104be1u);
    { uint32_t v = 0xE0154u; push32(c, v); }
    // 104be6  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x104be6u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 104bec  call dword ptr [0xdfc5c]
    X86_AT(c, 0x104becu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x104bf2u); x86_call(c, t); X86_RET(c, 0x104bf2u); }
    X86_TICK(c, 12);
    // 104bf2  cmp byte ptr [ebx - 9], 0
    X86_AT(c, 0x104bf2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 104bf6  jne 0x104c2b
    X86_AT(c, 0x104bf6u);
    if (x86_cc(c, 5)) { goto L_104c2b; }
    X86_TICK(c, 11);
    // 104bf8  mov eax, dword ptr [0xdfc50]
    X86_AT(c, 0x104bf8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xDFC50u)));
    // 104bfd  and eax, eax
    X86_AT(c, 0x104bfdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 104bff  je 0x104c2b
    X86_AT(c, 0x104bffu);
    if (x86_cc(c, 4)) { goto L_104c2b; }
    X86_TICK(c, 11);
    // 104c01  push eax
    X86_AT(c, 0x104c01u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104c02  push 0xdfc64
    X86_AT(c, 0x104c02u);
    { uint32_t v = 0xDFC64u; push32(c, v); }
    // 104c07  call 0x102604
    X86_AT(c, 0x104c07u);
    push32(c, 0x104c0cu); f_00102604(c); X86_RET(c, 0x104c0cu);
    X86_TICK(c, 7);
    // 104c0c  jmp 0x104c2b
    X86_AT(c, 0x104c0cu);
    goto L_104c2b;
L_104c0e:
    X86_TICK(c, 11);
    // 104c0e  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x104c0eu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104c11  call 0x104860
    X86_AT(c, 0x104c11u);
    push32(c, 0x104c16u); f_00104860(c); X86_RET(c, 0x104c16u);
    X86_TICK(c, 17);
    // 104c16  lea eax, [edi - 1]
    X86_AT(c, 0x104c16u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 104c19  push eax
    X86_AT(c, 0x104c19u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104c1a  push 0xe0154
    X86_AT(c, 0x104c1au);
    { uint32_t v = 0xE0154u; push32(c, v); }
    // 104c1f  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x104c1fu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 104c25  call dword ptr [0xdfc5c]
    X86_AT(c, 0x104c25u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x104c2bu); x86_call(c, t); X86_RET(c, 0x104c2bu); }
L_104c2b:
    X86_TICK(c, 11);
    // 104c2b  mov eax, dword ptr [0xe0184]
    X86_AT(c, 0x104c2bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0184u)));
    // 104c30  and eax, eax
    X86_AT(c, 0x104c30u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 104c32  jg 0x104c46
    X86_AT(c, 0x104c32u);
    if (x86_cc(c, 15)) { goto L_104c46; }
    X86_TICK(c, 9);
    // 104c34  mov byte ptr [ebp - 9], 0x2d
    X86_AT(c, 0x104c34u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x2Du);
    // 104c38  and eax, eax
    X86_AT(c, 0x104c38u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 104c3a  jge 0x104c3e
    X86_AT(c, 0x104c3au);
    if (x86_cc(c, 13)) { goto L_104c3e; }
    X86_TICK(c, 2);
    // 104c3c  neg eax
    X86_AT(c, 0x104c3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_104c3e:
    X86_TICK(c, 11);
    // 104c3e  inc eax
    X86_AT(c, 0x104c3eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 104c3f  mov dword ptr [0xe0184], eax
    X86_AT(c, 0x104c3fu);
    wr32((c.sbase[3] + (uint32_t)(0xE0184u)), c.r[0]);
    // 104c44  jmp 0x104c50
    X86_AT(c, 0x104c44u);
    goto L_104c50;
L_104c46:
    X86_TICK(c, 8);
    // 104c46  mov byte ptr [ebp - 9], 0x2b
    X86_AT(c, 0x104c46u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x2Bu);
    // 104c4a  dec dword ptr [0xe0184]
    X86_AT(c, 0x104c4au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0184u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_104c50:
    X86_TICK(c, 11);
    // 104c50  mov ebx, 0x1f
    X86_AT(c, 0x104c50u);
    c.r[3] = 0x1Fu;
    // 104c55  sub esi, esi
    X86_AT(c, 0x104c55u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 104c57  jmp 0x104c7d
    X86_AT(c, 0x104c57u);
    goto L_104c7d;
L_104c59:
    X86_TICK(c, 55);
    // 104c59  mov eax, dword ptr [0xe0184]
    X86_AT(c, 0x104c59u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0184u)));
    // 104c5e  cdq 
    X86_AT(c, 0x104c5eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 104c5f  mov ecx, 0xa
    X86_AT(c, 0x104c5fu);
    c.r[1] = 0xAu;
    // 104c64  idiv ecx
    X86_AT(c, 0x104c64u);
    x86_idiv(c, c.r[1], 4, 0x104c64u);
    // 104c66  and edx, edx
    X86_AT(c, 0x104c66u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 104c68  jge 0x104c6c
    X86_AT(c, 0x104c68u);
    if (x86_cc(c, 13)) { goto L_104c6c; }
    X86_TICK(c, 2);
    // 104c6a  add edx, ecx
    X86_AT(c, 0x104c6au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
L_104c6c:
    X86_TICK(c, 10);
    // 104c6c  add dx, 0x30
    X86_AT(c, 0x104c6cu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x30u, 0, 2)); }
    // 104c70  mov byte ptr [ebx + 0xe0153], dl
    X86_AT(c, 0x104c70u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xE0153u)), g8(c, 2));
    // 104c76  mov dword ptr [0xe0184], eax
    X86_AT(c, 0x104c76u);
    wr32((c.sbase[3] + (uint32_t)(0xE0184u)), c.r[0]);
    // 104c7b  dec ebx
    X86_AT(c, 0x104c7bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 104c7c  inc esi
    X86_AT(c, 0x104c7cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_104c7d:
    X86_TICK(c, 12);
    // 104c7d  cmp dword ptr [0xe0184], 0
    X86_AT(c, 0x104c7du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xE0184u))), 0x0u, 0, 4);
    // 104c84  jg 0x104c59
    X86_AT(c, 0x104c84u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x104c59u); goto L_104c59; }
    X86_TICK(c, 7);
    // 104c86  cmp esi, 2
    X86_AT(c, 0x104c86u);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 104c89  jl 0x104c59
    X86_AT(c, 0x104c89u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x104c59u); goto L_104c59; }
    X86_TICK(c, 35);
    // 104c8b  mov al, byte ptr [ebp - 9]
    X86_AT(c, 0x104c8bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))));
    // 104c8e  mov byte ptr [ebx + 0xe0153], al
    X86_AT(c, 0x104c8eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xE0153u)), g8(c, 0));
    // 104c94  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x104c94u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 104c97  mov al, byte ptr [eax + 8]
    X86_AT(c, 0x104c97u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))));
    // 104c9a  mov byte ptr [ebx + 0xe0152], al
    X86_AT(c, 0x104c9au);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xE0152u)), g8(c, 0));
    // 104ca0  lea eax, [esi + 2]
    X86_AT(c, 0x104ca0u);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 104ca3  push eax
    X86_AT(c, 0x104ca3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104ca4  lea eax, [ebx + 0xe0152]
    X86_AT(c, 0x104ca4u);
    c.r[0] = (uint32_t)(c.r[3] + 0xE0152u);
    // 104caa  push eax
    X86_AT(c, 0x104caau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104cab  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x104cabu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 104cb1  call dword ptr [0xdfc5c]
    X86_AT(c, 0x104cb1u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x104cb7u); x86_call(c, t); X86_RET(c, 0x104cb7u); }
    X86_TICK(c, 28);
    // 104cb7  pop edi
    X86_AT(c, 0x104cb7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 104cb8  pop esi
    X86_AT(c, 0x104cb8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 104cb9  pop ebx
    X86_AT(c, 0x104cb9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 104cba  leave 
    X86_AT(c, 0x104cbau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 104cbb  ret 
    X86_AT(c, 0x104cbbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104b54u, "ran off the end of a function");
}
void f_00104cd4(X86Cpu& c) {
    X86_TICK(c, 22);
    // 104cd4  push ebp
    X86_AT(c, 0x104cd4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 104cd5  mov ebp, esp
    X86_AT(c, 0x104cd5u);
    c.r[5] = c.r[4];
    // 104cd7  push ecx
    X86_AT(c, 0x104cd7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 104cd8  sub esp, 0xc
    X86_AT(c, 0x104cd8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 104cdb  mov byte ptr [ebp - 9], 0
    X86_AT(c, 0x104cdbu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x0u);
    // 104cdf  cmp byte ptr [0xdfc54], 3
    X86_AT(c, 0x104cdfu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFC54u))), 0x3u, 0, 1);
    // 104ce6  jne 0x104cf1
    X86_AT(c, 0x104ce6u);
    if (x86_cc(c, 5)) { goto L_104cf1; }
    X86_TICK(c, 9);
    // 104ce8  mov dword ptr [ebp - 8], 0x12
    X86_AT(c, 0x104ce8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x12u);
    // 104cef  jmp 0x104cf8
    X86_AT(c, 0x104cefu);
    goto L_104cf8;
L_104cf1:
    X86_TICK(c, 2);
    // 104cf1  mov dword ptr [ebp - 8], 0x10
    X86_AT(c, 0x104cf1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x10u);
L_104cf8:
    X86_TICK(c, 13);
    // 104cf8  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x104cf8u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 104cfc  cmp eax, 0x45
    X86_AT(c, 0x104cfcu);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 104cff  je 0x104d50
    X86_AT(c, 0x104cffu);
    if (x86_cc(c, 4)) { goto L_104d50; }
    X86_TICK(c, 7);
    // 104d01  cmp eax, 0x47
    X86_AT(c, 0x104d01u);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 104d04  je 0x104d1d
    X86_AT(c, 0x104d04u);
    if (x86_cc(c, 4)) { goto L_104d1d; }
    X86_TICK(c, 7);
    // 104d06  cmp eax, 0x65
    X86_AT(c, 0x104d06u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 104d09  je 0x104d50
    X86_AT(c, 0x104d09u);
    if (x86_cc(c, 4)) { goto L_104d50; }
    X86_TICK(c, 7);
    // 104d0b  cmp eax, 0x66
    X86_AT(c, 0x104d0bu);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 104d0e  je 0x104d7f
    X86_AT(c, 0x104d0eu);
    if (x86_cc(c, 4)) { goto L_104d7f; }
    X86_TICK(c, 7);
    // 104d14  cmp eax, 0x67
    X86_AT(c, 0x104d14u);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 104d17  jne 0x104d86
    X86_AT(c, 0x104d17u);
    if (x86_cc(c, 5)) { goto L_104d86; }
L_104d1d:
    X86_TICK(c, 12);
    // 104d1d  cmp dword ptr [0xdfc50], 0
    X86_AT(c, 0x104d1du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDFC50u))), 0x0u, 0, 4);
    // 104d24  je 0x104d86
    X86_AT(c, 0x104d24u);
    if (x86_cc(c, 4)) { goto L_104d86; }
    X86_TICK(c, 12);
    // 104d26  test byte ptr [0xdfc48], 8
    X86_AT(c, 0x104d26u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x8u, 1);
    // 104d2d  jne 0x104d33
    X86_AT(c, 0x104d2du);
    if (x86_cc(c, 5)) { goto L_104d33; }
    X86_TICK(c, 2);
    // 104d2f  mov byte ptr [ebp - 9], 1
    X86_AT(c, 0x104d2fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x1u);
L_104d33:
    X86_TICK(c, 13);
    // 104d33  mov eax, dword ptr [0xe0184]
    X86_AT(c, 0x104d33u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0184u)));
    // 104d38  dec eax
    X86_AT(c, 0x104d38u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 104d39  cmp eax, 0xfffffffc
    X86_AT(c, 0x104d39u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFCu, 0, 4);
    // 104d3c  jl 0x104d46
    X86_AT(c, 0x104d3cu);
    if (x86_cc(c, 12)) { goto L_104d46; }
    X86_TICK(c, 11);
    // 104d3e  cmp eax, dword ptr [0xdfc50]
    X86_AT(c, 0x104d3eu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xDFC50u))), 0, 4);
    // 104d44  jle 0x104d59
    X86_AT(c, 0x104d44u);
    if (x86_cc(c, 14)) { goto L_104d59; }
L_104d46:
    X86_TICK(c, 13);
    // 104d46  sub byte ptr [ebp + 8], 2
    X86_AT(c, 0x104d46u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, 0x2u, 0, 1)); }
    // 104d4a  dec dword ptr [0xdfc50]
    X86_AT(c, 0x104d4au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC50u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_104d50:
    X86_TICK(c, 9);
    // 104d50  mov ecx, ebp
    X86_AT(c, 0x104d50u);
    c.r[1] = c.r[5];
    // 104d52  call 0x104b54
    X86_AT(c, 0x104d52u);
    push32(c, 0x104d57u); f_00104b54(c); X86_RET(c, 0x104d57u);
    X86_TICK(c, 7);
    // 104d57  jmp 0x104d86
    X86_AT(c, 0x104d57u);
    goto L_104d86;
L_104d59:
    X86_TICK(c, 13);
    // 104d59  mov byte ptr [ebp + 8], 0x66
    X86_AT(c, 0x104d59u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), 0x66u);
    // 104d5d  mov eax, dword ptr [0xe0184]
    X86_AT(c, 0x104d5du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0184u)));
    // 104d62  and eax, eax
    X86_AT(c, 0x104d62u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 104d64  jle 0x104d79
    X86_AT(c, 0x104d64u);
    if (x86_cc(c, 14)) { goto L_104d79; }
    X86_TICK(c, 11);
    // 104d66  mov edx, dword ptr [0xdfc50]
    X86_AT(c, 0x104d66u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xDFC50u)));
    // 104d6c  cmp edx, eax
    X86_AT(c, 0x104d6cu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 104d6e  jb 0x104d71
    X86_AT(c, 0x104d6eu);
    if (x86_cc(c, 2)) { goto L_104d71; }
    X86_TICK(c, 3);
    // 104d70  xchg edx, eax
    X86_AT(c, 0x104d70u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_104d71:
    X86_TICK(c, 14);
    // 104d71  sub dword ptr [0xdfc50], edx
    X86_AT(c, 0x104d71u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC50u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], 0, 4)); }
    // 104d77  jmp 0x104d7f
    X86_AT(c, 0x104d77u);
    goto L_104d7f;
L_104d79:
    X86_TICK(c, 6);
    // 104d79  dec dword ptr [0xdfc50]
    X86_AT(c, 0x104d79u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC50u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_104d7f:
    X86_TICK(c, 9);
    // 104d7f  mov ecx, ebp
    X86_AT(c, 0x104d7fu);
    c.r[1] = c.r[5];
    // 104d81  call 0x1048c4
    X86_AT(c, 0x104d81u);
    push32(c, 0x104d86u); f_001048c4(c); X86_RET(c, 0x104d86u);
L_104d86:
    X86_TICK(c, 16);
    // 104d86  leave 
    X86_AT(c, 0x104d86u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 104d87  ret 4
    X86_AT(c, 0x104d87u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x104cd4u, "ran off the end of a function");
}
void f_00104da8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 104da8  push ebp
    X86_AT(c, 0x104da8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 104da9  mov ebp, esp
    X86_AT(c, 0x104da9u);
    c.r[5] = c.r[4];
    // 104dab  push ecx
    X86_AT(c, 0x104dabu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 104dac  push esi
    X86_AT(c, 0x104dacu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 104dad  push edi
    X86_AT(c, 0x104dadu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 104dae  mov esi, dword ptr [0xe0184]
    X86_AT(c, 0x104daeu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xE0184u)));
    // 104db4  and esi, esi
    X86_AT(c, 0x104db4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 104db6  jge 0x104dba
    X86_AT(c, 0x104db6u);
    if (x86_cc(c, 13)) { goto L_104dba; }
    X86_TICK(c, 2);
    // 104db8  neg esi
    X86_AT(c, 0x104db8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_neg(c, v, 4); }
L_104dba:
    X86_TICK(c, 9);
    // 104dba  mov edi, 2
    X86_AT(c, 0x104dbau);
    c.r[7] = 0x2u;
    // 104dbf  jmp 0x104dcc
    X86_AT(c, 0x104dbfu);
    goto L_104dcc;
L_104dc1:
    X86_TICK(c, 52);
    // 104dc1  xchg esi, eax
    X86_AT(c, 0x104dc1u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 104dc2  cdq 
    X86_AT(c, 0x104dc2u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 104dc3  mov ecx, 0xa
    X86_AT(c, 0x104dc3u);
    c.r[1] = 0xAu;
    // 104dc8  idiv ecx
    X86_AT(c, 0x104dc8u);
    x86_idiv(c, c.r[1], 4, 0x104dc8u);
    // 104dca  xchg esi, eax
    X86_AT(c, 0x104dcau);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 104dcb  inc edi
    X86_AT(c, 0x104dcbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_104dcc:
    X86_TICK(c, 7);
    // 104dcc  cmp esi, 0x63
    X86_AT(c, 0x104dccu);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 104dcf  jg 0x104dc1
    X86_AT(c, 0x104dcfu);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x104dc1u); goto L_104dc1; }
    X86_TICK(c, 46);
    // 104dd1  mov al, byte ptr [0xe019b]
    X86_AT(c, 0x104dd1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE019Bu))));
    // 104dd6  inc eax
    X86_AT(c, 0x104dd6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 104dd7  movzx eax, al
    X86_AT(c, 0x104dd7u);
    c.r[0] = g8(c, 0);
    // 104dda  add eax, dword ptr [0xdfc50]
    X86_AT(c, 0x104ddau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xDFC50u))), 0, 4); }
    // 104de0  add eax, 2
    X86_AT(c, 0x104de0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 104de3  lea edx, [edi + eax*1]
    X86_AT(c, 0x104de3u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 104de6  xchg edx, eax
    X86_AT(c, 0x104de6u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 104de7  pop edi
    X86_AT(c, 0x104de7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 104de8  pop esi
    X86_AT(c, 0x104de8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 104de9  leave 
    X86_AT(c, 0x104de9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 104dea  ret 
    X86_AT(c, 0x104deau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104da8u, "ran off the end of a function");
}
void f_00104dfc(X86Cpu& c) {
    X86_TICK(c, 25);
    // 104dfc  enter 0x30, 0
    X86_AT(c, 0x104dfcu);
    x86_enter(c, 0x30u, 0x0u, 4);
    // 104e00  push ebx
    X86_AT(c, 0x104e00u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 104e01  push esi
    X86_AT(c, 0x104e01u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 104e02  push edi
    X86_AT(c, 0x104e02u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 104e03  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x104e03u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 104e06  mov ecx, ebp
    X86_AT(c, 0x104e06u);
    c.r[1] = c.r[5];
    // 104e08  call 0x10475c
    X86_AT(c, 0x104e08u);
    push32(c, 0x104e0du); f_0010475c(c); X86_RET(c, 0x104e0du);
    X86_TICK(c, 12);
    // 104e0d  cmp dword ptr [0xdfc50], 0xffff
    X86_AT(c, 0x104e0du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDFC50u))), 0xFFFFu, 0, 4);
    // 104e17  jne 0x104e23
    X86_AT(c, 0x104e17u);
    if (x86_cc(c, 5)) { goto L_104e23; }
    X86_TICK(c, 2);
    // 104e19  mov dword ptr [0xdfc50], 6
    X86_AT(c, 0x104e19u);
    wr32((c.sbase[3] + (uint32_t)(0xDFC50u)), 0x6u);
L_104e23:
    X86_TICK(c, 12);
    // 104e23  cmp byte ptr [0xdfc54], 3
    X86_AT(c, 0x104e23u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xDFC54u))), 0x3u, 0, 1);
    // 104e2a  jne 0x104e33
    X86_AT(c, 0x104e2au);
    if (x86_cc(c, 5)) { goto L_104e33; }
    X86_TICK(c, 9);
    // 104e2c  mov edi, 0x12
    X86_AT(c, 0x104e2cu);
    c.r[7] = 0x12u;
    // 104e31  jmp 0x104e38
    X86_AT(c, 0x104e31u);
    goto L_104e38;
L_104e33:
    X86_TICK(c, 2);
    // 104e33  mov edi, 0x10
    X86_AT(c, 0x104e33u);
    c.r[7] = 0x10u;
L_104e38:
    X86_TICK(c, 39);
    // 104e38  lea esi, [ebp - 0x18]
    X86_AT(c, 0x104e38u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFE8u);
    // 104e3b  push esi
    X86_AT(c, 0x104e3bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 104e3c  push edi
    X86_AT(c, 0x104e3cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 104e3d  push dword ptr [0xdfc50]
    X86_AT(c, 0x104e3du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xDFC50u))); push32(c, v); }
    // 104e43  push ebx
    X86_AT(c, 0x104e43u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 104e44  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x104e44u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 104e47  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x104e47u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 104e4a  push dword ptr [ebp + 8]
    X86_AT(c, 0x104e4au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 104e4d  lea eax, [ebp - 0x30]
    X86_AT(c, 0x104e4du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 104e50  push eax
    X86_AT(c, 0x104e50u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104e51  call 0x1044c8
    X86_AT(c, 0x104e51u);
    push32(c, 0x104e56u); f_001044c8(c); X86_RET(c, 0x104e56u);
    X86_TICK(c, 30);
    // 104e56  lea esi, [ebp - 0x30]
    X86_AT(c, 0x104e56u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 104e59  push edi
    X86_AT(c, 0x104e59u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 104e5a  mov edi, 0xe0184
    X86_AT(c, 0x104e5au);
    c.r[7] = 0xE0184u;
    // 104e5f  mov ecx, 0x17
    X86_AT(c, 0x104e5fu);
    c.r[1] = 0x17u;
    // 104e64  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x104e64u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 104e66  pop edi
    X86_AT(c, 0x104e66u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 104e67  mov ax, word ptr [ebp - 0x18]
    X86_AT(c, 0x104e67u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))));
    // 104e6b  and ax, ax
    X86_AT(c, 0x104e6bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 104e6e  je 0x104e93
    X86_AT(c, 0x104e6eu);
    if (x86_cc(c, 4)) { goto L_104e93; }
    X86_TICK(c, 12);
    // 104e70  movzx eax, ax
    X86_AT(c, 0x104e70u);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 104e73  push eax
    X86_AT(c, 0x104e73u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104e74  call 0x10264c
    X86_AT(c, 0x104e74u);
    push32(c, 0x104e79u); f_0010264c(c); X86_RET(c, 0x104e79u);
    X86_TICK(c, 23);
    // 104e79  movzx eax, word ptr [ebp - 0x18]
    X86_AT(c, 0x104e79u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 104e7d  push eax
    X86_AT(c, 0x104e7du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104e7e  lea eax, [ebp - 0x16]
    X86_AT(c, 0x104e7eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFEAu);
    // 104e81  push eax
    X86_AT(c, 0x104e81u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104e82  mov ecx, dword ptr [0xdfc60]
    X86_AT(c, 0x104e82u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC60u)));
    // 104e88  call dword ptr [0xdfc5c]
    X86_AT(c, 0x104e88u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xDFC5Cu))); push32(c, 0x104e8eu); x86_call(c, t); X86_RET(c, 0x104e8eu); }
    X86_TICK(c, 7);
    // 104e8e  jmp 0x104f97
    X86_AT(c, 0x104e8eu);
    goto L_104f97;
L_104e93:
    X86_TICK(c, 12);
    // 104e93  cmp dword ptr [0xdfc50], 0
    X86_AT(c, 0x104e93u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDFC50u))), 0x0u, 0, 4);
    // 104e9a  jne 0x104eab
    X86_AT(c, 0x104e9au);
    if (x86_cc(c, 5)) { goto L_104eab; }
    X86_TICK(c, 12);
    // 104e9c  test byte ptr [0xdfc48], 8
    X86_AT(c, 0x104e9cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xDFC48u))) & 0x8u, 1);
    // 104ea3  jne 0x104eab
    X86_AT(c, 0x104ea3u);
    if (x86_cc(c, 5)) { goto L_104eab; }
    X86_TICK(c, 9);
    // 104ea5  mov byte ptr [ebp - 0x19], 0
    X86_AT(c, 0x104ea5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u)), 0x0u);
    // 104ea9  jmp 0x104eaf
    X86_AT(c, 0x104ea9u);
    goto L_104eaf;
L_104eab:
    X86_TICK(c, 2);
    // 104eab  mov byte ptr [ebp - 0x19], 1
    X86_AT(c, 0x104eabu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u)), 0x1u);
L_104eaf:
    X86_TICK(c, 16);
    // 104eaf  mov al, byte ptr [ebp - 0x19]
    X86_AT(c, 0x104eafu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u))));
    // 104eb2  mov byte ptr [0xe019b], al
    X86_AT(c, 0x104eb2u);
    wr8((c.sbase[3] + (uint32_t)(0xE019Bu)), g8(c, 0));
    // 104eb7  movzx eax, bl
    X86_AT(c, 0x104eb7u);
    c.r[0] = g8(c, 3);
    // 104eba  cmp eax, 0x45
    X86_AT(c, 0x104ebau);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 104ebd  je 0x104ef9
    X86_AT(c, 0x104ebdu);
    if (x86_cc(c, 4)) { goto L_104ef9; }
    X86_TICK(c, 7);
    // 104ebf  cmp eax, 0x47
    X86_AT(c, 0x104ebfu);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 104ec2  je 0x104f02
    X86_AT(c, 0x104ec2u);
    if (x86_cc(c, 4)) { goto L_104f02; }
    X86_TICK(c, 7);
    // 104ec4  cmp eax, 0x65
    X86_AT(c, 0x104ec4u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 104ec7  je 0x104ef9
    X86_AT(c, 0x104ec7u);
    if (x86_cc(c, 4)) { goto L_104ef9; }
    X86_TICK(c, 7);
    // 104ec9  cmp eax, 0x66
    X86_AT(c, 0x104ec9u);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 104ecc  je 0x104ed8
    X86_AT(c, 0x104eccu);
    if (x86_cc(c, 4)) { goto L_104ed8; }
    X86_TICK(c, 7);
    // 104ece  cmp eax, 0x67
    X86_AT(c, 0x104eceu);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 104ed1  je 0x104f02
    X86_AT(c, 0x104ed1u);
    if (x86_cc(c, 4)) { goto L_104f02; }
    X86_TICK(c, 7);
    // 104ed3  jmp 0x104f78
    X86_AT(c, 0x104ed3u);
    goto L_104f78;
L_104ed8:
    X86_TICK(c, 13);
    // 104ed8  mov eax, 1
    X86_AT(c, 0x104ed8u);
    c.r[0] = 0x1u;
    // 104edd  mov edx, dword ptr [0xe0184]
    X86_AT(c, 0x104eddu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE0184u)));
    // 104ee3  cmp eax, edx
    X86_AT(c, 0x104ee3u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 104ee5  jl 0x104ee8
    X86_AT(c, 0x104ee5u);
    if (x86_cc(c, 12)) { goto L_104ee8; }
    X86_TICK(c, 3);
    // 104ee7  xchg edx, eax
    X86_AT(c, 0x104ee7u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_104ee8:
    X86_TICK(c, 21);
    // 104ee8  add edx, dword ptr [0xdfc50]
    X86_AT(c, 0x104ee8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xDFC50u))), 0, 4); }
    // 104eee  movzx eax, byte ptr [0xe019b]
    X86_AT(c, 0x104eeeu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xE019Bu)));
    // 104ef5  add eax, edx
    X86_AT(c, 0x104ef5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 104ef7  jmp 0x104f32
    X86_AT(c, 0x104ef7u);
    goto L_104f32;
L_104ef9:
    X86_TICK(c, 9);
    // 104ef9  mov ecx, ebp
    X86_AT(c, 0x104ef9u);
    c.r[1] = c.r[5];
    // 104efb  call 0x104da8
    X86_AT(c, 0x104efbu);
    push32(c, 0x104f00u); f_00104da8(c); X86_RET(c, 0x104f00u);
    X86_TICK(c, 7);
    // 104f00  jmp 0x104f32
    X86_AT(c, 0x104f00u);
    goto L_104f32;
L_104f02:
    X86_TICK(c, 12);
    // 104f02  cmp dword ptr [0xdfc50], 0
    X86_AT(c, 0x104f02u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xDFC50u))), 0x0u, 0, 4);
    // 104f09  jne 0x104f17
    X86_AT(c, 0x104f09u);
    if (x86_cc(c, 5)) { goto L_104f17; }
    X86_TICK(c, 9);
    // 104f0b  mov dword ptr [0xe0180], 0
    X86_AT(c, 0x104f0bu);
    wr32((c.sbase[3] + (uint32_t)(0xE0180u)), 0x0u);
    // 104f15  jmp 0x104f78
    X86_AT(c, 0x104f15u);
    goto L_104f78;
L_104f17:
    X86_TICK(c, 13);
    // 104f17  mov eax, dword ptr [0xe0184]
    X86_AT(c, 0x104f17u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0184u)));
    // 104f1c  dec eax
    X86_AT(c, 0x104f1cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 104f1d  cmp eax, 0xfffffffc
    X86_AT(c, 0x104f1du);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFCu, 0, 4);
    // 104f20  jl 0x104f2a
    X86_AT(c, 0x104f20u);
    if (x86_cc(c, 12)) { goto L_104f2a; }
    X86_TICK(c, 11);
    // 104f22  cmp eax, dword ptr [0xdfc50]
    X86_AT(c, 0x104f22u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xDFC50u))), 0, 4);
    // 104f28  jle 0x104f39
    X86_AT(c, 0x104f28u);
    if (x86_cc(c, 14)) { goto L_104f39; }
L_104f2a:
    X86_TICK(c, 9);
    // 104f2a  mov ecx, ebp
    X86_AT(c, 0x104f2au);
    c.r[1] = c.r[5];
    // 104f2c  call 0x104da8
    X86_AT(c, 0x104f2cu);
    push32(c, 0x104f31u); f_00104da8(c); X86_RET(c, 0x104f31u);
    X86_TICK(c, 2);
    // 104f31  dec eax
    X86_AT(c, 0x104f31u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_104f32:
    X86_TICK(c, 9);
    // 104f32  mov dword ptr [0xe0180], eax
    X86_AT(c, 0x104f32u);
    wr32((c.sbase[3] + (uint32_t)(0xE0180u)), c.r[0]);
    // 104f37  jmp 0x104f72
    X86_AT(c, 0x104f37u);
    goto L_104f72;
L_104f39:
    X86_TICK(c, 42);
    // 104f39  movzx eax, byte ptr [0xe019b]
    X86_AT(c, 0x104f39u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xE019Bu)));
    // 104f40  add eax, dword ptr [0xdfc50]
    X86_AT(c, 0x104f40u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xDFC50u))), 0, 4); }
    // 104f46  mov edx, dword ptr [0xe0184]
    X86_AT(c, 0x104f46u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE0184u)));
    // 104f4c  dec edx
    X86_AT(c, 0x104f4cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 104f4d  mov ecx, dword ptr [0xdfc50]
    X86_AT(c, 0x104f4du);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xDFC50u)));
    // 104f53  cmp edx, ecx
    X86_AT(c, 0x104f53u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 104f55  sete dl
    X86_AT(c, 0x104f55u);
    s8(c, 2, x86_cc(c, 4) ? 1u : 0u);
    // 104f58  movzx edx, dl
    X86_AT(c, 0x104f58u);
    c.r[2] = g8(c, 2);
    // 104f5b  add edx, eax
    X86_AT(c, 0x104f5bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 104f5d  mov dword ptr [0xe0180], edx
    X86_AT(c, 0x104f5du);
    wr32((c.sbase[3] + (uint32_t)(0xE0180u)), c.r[2]);
    // 104f63  and ecx, ecx
    X86_AT(c, 0x104f63u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 104f65  jne 0x104f6d
    X86_AT(c, 0x104f65u);
    if (x86_cc(c, 5)) { goto L_104f6d; }
    X86_TICK(c, 6);
    // 104f67  inc dword ptr [0xe0180]
    X86_AT(c, 0x104f67u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE0180u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_104f6d:
    X86_TICK(c, 4);
    // 104f6d  mov eax, dword ptr [0xe0180]
    X86_AT(c, 0x104f6du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE0180u)));
L_104f72:
    X86_TICK(c, 7);
    // 104f72  add dword ptr [0xdfc58], eax
    X86_AT(c, 0x104f72u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xDFC58u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_104f78:
    X86_TICK(c, 13);
    // 104f78  mov byte ptr [0xe0178], 0
    X86_AT(c, 0x104f78u);
    wr8((c.sbase[3] + (uint32_t)(0xE0178u)), 0x0u);
    // 104f7f  push ebx
    X86_AT(c, 0x104f7fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 104f80  mov ecx, ebp
    X86_AT(c, 0x104f80u);
    c.r[1] = c.r[5];
    // 104f82  call 0x104cd4
    X86_AT(c, 0x104f82u);
    push32(c, 0x104f87u); f_00104cd4(c); X86_RET(c, 0x104f87u);
    X86_TICK(c, 12);
    // 104f87  cmp byte ptr [0xe0178], 0
    X86_AT(c, 0x104f87u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xE0178u))), 0x0u, 0, 1);
    // 104f8e  jne 0x104f97
    X86_AT(c, 0x104f8eu);
    if (x86_cc(c, 5)) { goto L_104f97; }
    X86_TICK(c, 9);
    // 104f90  mov ecx, ebp
    X86_AT(c, 0x104f90u);
    c.r[1] = c.r[5];
    // 104f92  call 0x1046f8
    X86_AT(c, 0x104f92u);
    push32(c, 0x104f97u); f_001046f8(c); X86_RET(c, 0x104f97u);
L_104f97:
    X86_TICK(c, 28);
    // 104f97  pop edi
    X86_AT(c, 0x104f97u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 104f98  pop esi
    X86_AT(c, 0x104f98u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 104f99  pop ebx
    X86_AT(c, 0x104f99u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 104f9a  leave 
    X86_AT(c, 0x104f9au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 104f9b  ret 0x10
    X86_AT(c, 0x104f9bu);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0x104dfcu, "ran off the end of a function");
}
void f_00104fbc(X86Cpu& c) {
L_104fbc:
    X86_TICK(c, 13);
    // 104fbc  mov eax, dword ptr [0xe019c]
    X86_AT(c, 0x104fbcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE019Cu)));
    // 104fc1  mov edx, 0x104fa0
    X86_AT(c, 0x104fc1u);
    c.r[2] = 0x104FA0u;
    // 104fc6  cmp edx, eax
    X86_AT(c, 0x104fc6u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 104fc8  je 0x104fd3
    X86_AT(c, 0x104fc8u);
    if (x86_cc(c, 4)) { goto L_104fd3; }
    X86_TICK(c, 7);
    // 104fca  call eax
    X86_AT(c, 0x104fcau);
    { uint32_t t = c.r[0]; push32(c, 0x104fccu); x86_call(c, t); X86_RET(c, 0x104fccu); }
    X86_TICK(c, 9);
    // 104fcc  mov dword ptr [0xe019c], eax
    X86_AT(c, 0x104fccu);
    wr32((c.sbase[3] + (uint32_t)(0xE019Cu)), c.r[0]);
    // 104fd1  jmp 0x104fbc
    X86_AT(c, 0x104fd1u);
    X86_POLL(c, 0x104fbcu); goto L_104fbc;
L_104fd3:
    X86_TICK(c, 10);
    // 104fd3  ret 
    X86_AT(c, 0x104fd3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x104fbcu, "ran off the end of a function");
}
void f_00104fe4(X86Cpu& c) {
    X86_TICK(c, 23);
    // 104fe4  enter 4, 0
    X86_AT(c, 0x104fe4u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 104fe8  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x104fe8u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 104feb  add al, 0x30
    X86_AT(c, 0x104febu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x30u, 0, 1)); }
    // 104fed  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x104fedu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 104ff0  push 0xe310
    X86_AT(c, 0x104ff0u);
    { uint32_t v = 0xE310u; push32(c, v); }
    // 104ff5  call 0x105190
    X86_AT(c, 0x104ff5u);
    push32(c, 0x104ffau); f_00105190(c); X86_RET(c, 0x104ffau);
    X86_TICK(c, 11);
    // 104ffa  lea eax, [ebp - 4]
    X86_AT(c, 0x104ffau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 104ffd  push eax
    X86_AT(c, 0x104ffdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 104ffe  call 0x105190
    X86_AT(c, 0x104ffeu);
    push32(c, 0x105003u); f_00105190(c); X86_RET(c, 0x105003u);
    X86_TICK(c, 7);
    // 105003  call 0x1051ac
    X86_AT(c, 0x105003u);
    push32(c, 0x105008u); f_001051ac(c); X86_RET(c, 0x105008u);
    X86_TICK(c, 13);
    // 105008  mov ax, word ptr [0xe0144]
    X86_AT(c, 0x105008u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE0144u))));
    // 10500e  push eax
    X86_AT(c, 0x10500eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10500f  call 0x105068
    X86_AT(c, 0x10500fu);
    push32(c, 0x105014u); f_00105068(c); X86_RET(c, 0x105014u);
    X86_TICK(c, 9);
    // 105014  push 0xe32c
    X86_AT(c, 0x105014u);
    { uint32_t v = 0xE32Cu; push32(c, v); }
    // 105019  call 0x105190
    X86_AT(c, 0x105019u);
    push32(c, 0x10501eu); f_00105190(c); X86_RET(c, 0x10501eu);
    X86_TICK(c, 7);
    // 10501e  call 0x1051ac
    X86_AT(c, 0x10501eu);
    push32(c, 0x105023u); f_001051ac(c); X86_RET(c, 0x105023u);
    X86_TICK(c, 9);
    // 105023  push 0xffffffff
    X86_AT(c, 0x105023u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 105025  call 0x103a24
    X86_AT(c, 0x105025u);
    push32(c, 0x10502au); f_00103a24(c); X86_RET(c, 0x10502au);
    X86_TICK(c, 16);
    // 10502a  leave 
    X86_AT(c, 0x10502au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 10502b  ret 8
    X86_AT(c, 0x10502bu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x104fe4u, "ran off the end of a function");
}
void f_00105068(X86Cpu& c) {
    X86_TICK(c, 9);
    // 105068  push 0xe368
    X86_AT(c, 0x105068u);
    { uint32_t v = 0xE368u; push32(c, v); }
    // 10506d  call 0x105190
    X86_AT(c, 0x10506du);
    push32(c, 0x105072u); f_00105190(c); X86_RET(c, 0x105072u);
    X86_TICK(c, 7);
    // 105072  call 0x1051ac
    X86_AT(c, 0x105072u);
    push32(c, 0x105077u); f_001051ac(c); X86_RET(c, 0x105077u);
    X86_TICK(c, 10);
    // 105077  ret 4
    X86_AT(c, 0x105077u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x105068u, "ran off the end of a function");
}
void f_0010507c(X86Cpu& c) {
    X86_TICK(c, 31);
    // 10507c  push ebp
    X86_AT(c, 0x10507cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 10507d  mov ebp, esp
    X86_AT(c, 0x10507du);
    c.r[5] = c.r[4];
    // 10507f  push edi
    X86_AT(c, 0x10507fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 105080  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x105080u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 105083  movzx eax, word ptr [edi]
    X86_AT(c, 0x105083u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(c.r[7])));
    // 105086  push eax
    X86_AT(c, 0x105086u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 105087  lea eax, [edi + 2]
    X86_AT(c, 0x105087u);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 10508a  push eax
    X86_AT(c, 0x10508au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10508b  push 2
    X86_AT(c, 0x10508bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 10508d  call 0x103a84
    X86_AT(c, 0x10508du);
    push32(c, 0x105092u); f_00103a84(c); X86_RET(c, 0x105092u);
    X86_TICK(c, 19);
    // 105092  movzx eax, word ptr [0xdfc2c]
    X86_AT(c, 0x105092u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xDFC2Cu)));
    // 105099  push eax
    X86_AT(c, 0x105099u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10509a  push 0xdfc2e
    X86_AT(c, 0x10509au);
    { uint32_t v = 0xDFC2Eu; push32(c, v); }
    // 10509f  push 2
    X86_AT(c, 0x10509fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 1050a1  call 0x103a84
    X86_AT(c, 0x1050a1u);
    push32(c, 0x1050a6u); f_00103a84(c); X86_RET(c, 0x1050a6u);
    X86_TICK(c, 20);
    // 1050a6  pop edi
    X86_AT(c, 0x1050a6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1050a7  leave 
    X86_AT(c, 0x1050a7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1050a8  ret 4
    X86_AT(c, 0x1050a8u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x10507cu, "ran off the end of a function");
}
void f_001050ac(X86Cpu& c) {
    X86_TICK(c, 22);
    // 1050ac  push ebp
    X86_AT(c, 0x1050acu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 1050ad  mov ebp, esp
    X86_AT(c, 0x1050adu);
    c.r[5] = c.r[4];
    // 1050af  inc byte ptr [0xe01a1]
    X86_AT(c, 0x1050afu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xE01A1u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 1050b5  push dword ptr [ebp + 8]
    X86_AT(c, 0x1050b5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 1050b8  call 0x10507c
    X86_AT(c, 0x1050b8u);
    push32(c, 0x1050bdu); f_0010507c(c); X86_RET(c, 0x1050bdu);
    X86_TICK(c, 9);
    // 1050bd  push 0xe390
    X86_AT(c, 0x1050bdu);
    { uint32_t v = 0xE390u; push32(c, v); }
    // 1050c2  call 0x10507c
    X86_AT(c, 0x1050c2u);
    push32(c, 0x1050c7u); f_0010507c(c); X86_RET(c, 0x1050c7u);
    X86_TICK(c, 7);
    // 1050c7  call 0x103274
    X86_AT(c, 0x1050c7u);
    push32(c, 0x1050ccu); f_00103274(c); X86_RET(c, 0x1050ccu);
    X86_TICK(c, 7);
    // 1050cc  call 0x103130
    X86_AT(c, 0x1050ccu);
    push32(c, 0x1050d1u); f_00103130(c); X86_RET(c, 0x1050d1u);
    X86_TICK(c, 7);
    // 1050d1  call 0x101a31
    X86_AT(c, 0x1050d1u);
    push32(c, 0x1050d6u); f_00101a31(c); X86_RET(c, 0x1050d6u);
    X86_TICK(c, 13);
    // 1050d6  mov al, byte ptr [0xe01a0]
    X86_AT(c, 0x1050d6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xE01A0u))));
    // 1050db  push eax
    X86_AT(c, 0x1050dbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1050dc  call 0x103348
    X86_AT(c, 0x1050dcu);
    push32(c, 0x1050e1u); f_00103348(c); X86_RET(c, 0x1050e1u);
    X86_TICK(c, 16);
    // 1050e1  leave 
    X86_AT(c, 0x1050e1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1050e2  ret 8
    X86_AT(c, 0x1050e2u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x1050acu, "ran off the end of a function");
}
void f_001050e8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 1050e8  push 0xe3a8
    X86_AT(c, 0x1050e8u);
    { uint32_t v = 0xE3A8u; push32(c, v); }
    // 1050ed  call 0x10507c
    X86_AT(c, 0x1050edu);
    push32(c, 0x1050f2u); f_0010507c(c); X86_RET(c, 0x1050f2u);
    X86_TICK(c, 10);
    // 1050f2  ret 
    X86_AT(c, 0x1050f2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1050e8u, "ran off the end of a function");
}
void f_001050f4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 1050f4  call 0x1050e8
    X86_AT(c, 0x1050f4u);
    push32(c, 0x1050f9u); f_001050e8(c); X86_RET(c, 0x1050f9u);
    X86_TICK(c, 13);
    // 1050f9  mov ax, word ptr [0xe0144]
    X86_AT(c, 0x1050f9u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xE0144u))));
    // 1050ff  push eax
    X86_AT(c, 0x1050ffu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 105100  call 0x105068
    X86_AT(c, 0x105100u);
    push32(c, 0x105105u); f_00105068(c); X86_RET(c, 0x105105u);
    X86_TICK(c, 9);
    // 105105  push 0xfffffffd
    X86_AT(c, 0x105105u);
    { uint32_t v = 0xFFFFFFFDu; push32(c, v); }
    // 105107  call 0x103a24
    X86_AT(c, 0x105107u);
    push32(c, 0x10510cu); f_00103a24(c); X86_RET(c, 0x10510cu);
    X86_TICK(c, 10);
    // 10510c  ret 
    X86_AT(c, 0x10510cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1050f4u, "ran off the end of a function");
}
void f_00105110(X86Cpu& c) {
    X86_TICK(c, 95);
    // 105110  push esi
    X86_AT(c, 0x105110u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 105111  push edi
    X86_AT(c, 0x105111u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 105112  push ebx
    X86_AT(c, 0x105112u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 105113  push ebp
    X86_AT(c, 0x105113u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 105114  push ds
    X86_AT(c, 0x105114u);
    push32(c, c.sreg[3]);
    // 105115  push es
    X86_AT(c, 0x105115u);
    push32(c, c.sreg[0]);
    // 105116  mov eax, dword ptr [0xe00bc]
    X86_AT(c, 0x105116u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xE00BCu)));
    // 10511b  mov ebx, dword ptr [0xe00c0]
    X86_AT(c, 0x10511bu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xE00C0u)));
    // 105121  mov ecx, dword ptr [0xe00c4]
    X86_AT(c, 0x105121u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xE00C4u)));
    // 105127  mov edx, dword ptr [0xe00c8]
    X86_AT(c, 0x105127u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xE00C8u)));
    // 10512d  mov esi, dword ptr [0xe00cc]
    X86_AT(c, 0x10512du);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xE00CCu)));
    // 105133  mov edi, dword ptr [0xe00d0]
    X86_AT(c, 0x105133u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xE00D0u)));
    // 105139  push dword ptr [0xe00d8]
    X86_AT(c, 0x105139u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE00D8u))); push32(c, v); }
    // 10513f  pop es
    X86_AT(c, 0x10513fu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 105140  push ds
    X86_AT(c, 0x105140u);
    push32(c, c.sreg[3]);
    // 105141  push dword ptr [0xe00d4]
    X86_AT(c, 0x105141u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xE00D4u))); push32(c, v); }
    // 105147  pop ds
    X86_AT(c, 0x105147u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 105148  clc 
    X86_AT(c, 0x105148u);
    c.fl &= ~X86_CF;
    // 105149  int 0x21
    X86_AT(c, 0x105149u);
    x86_int(c, 0x21, 0x10514bu);
    X86_TICK(c, 77);
    // 10514b  pop ebp
    X86_AT(c, 0x10514bu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 10514c  push ds
    X86_AT(c, 0x10514cu);
    push32(c, c.sreg[3]);
    // 10514d  mov ds, ebp
    X86_AT(c, 0x10514du);
    x86_load_seg(c, 3, (c.r[5] & 0xFFFFu) & 0xFFFFu);
    // 10514f  pop dword ptr [0xe00d4]
    X86_AT(c, 0x10514fu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xE00D4u)), v); }
    // 105155  push es
    X86_AT(c, 0x105155u);
    push32(c, c.sreg[0]);
    // 105156  pop dword ptr [0xe00d8]
    X86_AT(c, 0x105156u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xE00D8u)), v); }
    // 10515c  mov dword ptr [0xe00bc], eax
    X86_AT(c, 0x10515cu);
    wr32((c.sbase[3] + (uint32_t)(0xE00BCu)), c.r[0]);
    // 105161  mov dword ptr [0xe00c0], ebx
    X86_AT(c, 0x105161u);
    wr32((c.sbase[3] + (uint32_t)(0xE00C0u)), c.r[3]);
    // 105167  mov dword ptr [0xe00c4], ecx
    X86_AT(c, 0x105167u);
    wr32((c.sbase[3] + (uint32_t)(0xE00C4u)), c.r[1]);
    // 10516d  mov dword ptr [0xe00c8], edx
    X86_AT(c, 0x10516du);
    wr32((c.sbase[3] + (uint32_t)(0xE00C8u)), c.r[2]);
    // 105173  mov dword ptr [0xe00cc], esi
    X86_AT(c, 0x105173u);
    wr32((c.sbase[3] + (uint32_t)(0xE00CCu)), c.r[6]);
    // 105179  mov dword ptr [0xe00d0], edi
    X86_AT(c, 0x105179u);
    wr32((c.sbase[3] + (uint32_t)(0xE00D0u)), c.r[7]);
    // 10517f  pushf 
    X86_AT(c, 0x10517fu);
    push16(c, c.fl & 0xFFFFu);
    // 105181  pop word ptr [0xe00dc]
    X86_AT(c, 0x105181u);
    { uint32_t v = pop16(c); wr16((c.sbase[3] + (uint32_t)(0xE00DCu)), v); }
    // 105188  pop es
    X86_AT(c, 0x105188u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 105189  pop ds
    X86_AT(c, 0x105189u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 10518a  pop ebp
    X86_AT(c, 0x10518au);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 10518b  pop ebx
    X86_AT(c, 0x10518bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 10518c  pop edi
    X86_AT(c, 0x10518cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10518d  pop esi
    X86_AT(c, 0x10518du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 10518e  ret 
    X86_AT(c, 0x10518eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x105110u, "ran off the end of a function");
}
void f_00105190(X86Cpu& c) {
    X86_TICK(c, 31);
    // 105190  push ebp
    X86_AT(c, 0x105190u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 105191  mov ebp, esp
    X86_AT(c, 0x105191u);
    c.r[5] = c.r[4];
    // 105193  push edi
    X86_AT(c, 0x105193u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 105194  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x105194u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 105197  movzx eax, word ptr [edi]
    X86_AT(c, 0x105197u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(c.r[7])));
    // 10519a  push eax
    X86_AT(c, 0x10519au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10519b  lea eax, [edi + 2]
    X86_AT(c, 0x10519bu);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 10519e  push eax
    X86_AT(c, 0x10519eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10519f  push 2
    X86_AT(c, 0x10519fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 1051a1  call 0x103a84
    X86_AT(c, 0x1051a1u);
    push32(c, 0x1051a6u); f_00103a84(c); X86_RET(c, 0x1051a6u);
    X86_TICK(c, 20);
    // 1051a6  pop edi
    X86_AT(c, 0x1051a6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1051a7  leave 
    X86_AT(c, 0x1051a7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1051a8  ret 4
    X86_AT(c, 0x1051a8u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x105190u, "ran off the end of a function");
}
void f_001051ac(X86Cpu& c) {
    X86_TICK(c, 19);
    // 1051ac  movzx eax, word ptr [0xdfc2c]
    X86_AT(c, 0x1051acu);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xDFC2Cu)));
    // 1051b3  push eax
    X86_AT(c, 0x1051b3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 1051b4  push 0xdfc2e
    X86_AT(c, 0x1051b4u);
    { uint32_t v = 0xDFC2Eu; push32(c, v); }
    // 1051b9  push 2
    X86_AT(c, 0x1051b9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 1051bb  call 0x103a84
    X86_AT(c, 0x1051bbu);
    push32(c, 0x1051c0u); f_00103a84(c); X86_RET(c, 0x1051c0u);
    X86_TICK(c, 10);
    // 1051c0  ret 
    X86_AT(c, 0x1051c0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1051acu, "ran off the end of a function");
}
void f_001051c4(X86Cpu& c) {
    X86_TICK(c, 55);
    // 1051c4  enter 0xc, 0
    X86_AT(c, 0x1051c4u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 1051c8  push ebx
    X86_AT(c, 0x1051c8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 1051c9  push esi
    X86_AT(c, 0x1051c9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1051ca  push edi
    X86_AT(c, 0x1051cau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1051cb  mov di, word ptr [ebp + 0xc]
    X86_AT(c, 0x1051cbu);
    s16(c, 7, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 1051cf  sub esi, esi
    X86_AT(c, 0x1051cfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 1051d1  push esi
    X86_AT(c, 0x1051d1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 1051d2  mov esi, 0xe3c4
    X86_AT(c, 0x1051d2u);
    c.r[6] = 0xE3C4u;
    // 1051d7  push edi
    X86_AT(c, 0x1051d7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1051d8  lea edi, [ebp - 0xc]
    X86_AT(c, 0x1051d8u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 1051db  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x1051dbu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 1051dc  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x1051dcu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 1051dd  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x1051ddu);
    x86_string(c, 0, 2, 0, 4, 3);
    // 1051df  pop edi
    X86_AT(c, 0x1051dfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1051e0  pop esi
    X86_AT(c, 0x1051e0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_1051e1:
    X86_TICK(c, 10);
    // 1051e1  mov eax, edi
    X86_AT(c, 0x1051e1u);
    c.r[0] = c.r[7];
    // 1051e3  rcr ax, 1
    X86_AT(c, 0x1051e3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 1051e6  jae 0x105222
    X86_AT(c, 0x1051e6u);
    if (x86_cc(c, 3)) { goto L_105222; }
    X86_TICK(c, 23);
    // 1051e8  movzx eax, si
    X86_AT(c, 0x1051e8u);
    c.r[0] = (c.r[6] & 0xFFFFu);
    // 1051eb  lea eax, [eax*4]
    X86_AT(c, 0x1051ebu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 1051f2  lea eax, [eax + eax*2]
    X86_AT(c, 0x1051f2u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 1051f5  movsx eax, ax
    X86_AT(c, 0x1051f5u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 1051f8  lea edx, [ebp - 0xc]
    X86_AT(c, 0x1051f8u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 1051fb  push edx
    X86_AT(c, 0x1051fbu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 1051fc  mov ebx, eax
    X86_AT(c, 0x1051fcu);
    c.r[3] = c.r[0];
    // 1051fe  call 0x1040b8
    X86_AT(c, 0x1051feu);
    push32(c, 0x105203u); f_001040b8(c); X86_RET(c, 0x105203u);
    X86_TICK(c, 13);
    // 105203  lea eax, [ebx*1 + 0xe01a4]
    X86_AT(c, 0x105203u);
    c.r[0] = (uint32_t)(c.r[3] + 0xE01A4u);
    // 10520a  push eax
    X86_AT(c, 0x10520au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10520b  mov ebx, eax
    X86_AT(c, 0x10520bu);
    c.r[3] = c.r[0];
    // 10520d  call 0x1040b8
    X86_AT(c, 0x10520du);
    push32(c, 0x105212u); f_001040b8(c); X86_RET(c, 0x105212u);
    X86_TICK(c, 7);
    // 105212  call 0x105394
    X86_AT(c, 0x105212u);
    push32(c, 0x105217u); f_00105394(c); X86_RET(c, 0x105217u);
    X86_TICK(c, 13);
    // 105217  lea eax, [ebp - 0xc]
    X86_AT(c, 0x105217u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 10521a  push eax
    X86_AT(c, 0x10521au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 10521b  mov ebx, eax
    X86_AT(c, 0x10521bu);
    c.r[3] = c.r[0];
    // 10521d  call 0x104118
    X86_AT(c, 0x10521du);
    push32(c, 0x105222u); f_00104118(c); X86_RET(c, 0x105222u);
L_105222:
    X86_TICK(c, 12);
    // 105222  shr di, 1
    X86_AT(c, 0x105222u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 7, r); }
    // 105225  inc esi
    X86_AT(c, 0x105225u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 105226  and di, di
    X86_AT(c, 0x105226u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 105229  jne 0x1051e1
    X86_AT(c, 0x105229u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x1051e1u); goto L_1051e1; }
    X86_TICK(c, 71);
    // 10522b  lea eax, [ebp - 0xc]
    X86_AT(c, 0x10522bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 10522e  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x10522eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 105231  push esi
    X86_AT(c, 0x105231u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 105232  push edi
    X86_AT(c, 0x105232u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 105233  mov esi, eax
    X86_AT(c, 0x105233u);
    c.r[6] = c.r[0];
    // 105235  mov edi, edx
    X86_AT(c, 0x105235u);
    c.r[7] = c.r[2];
    // 105237  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x105237u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 105238  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x105238u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 105239  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x105239u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 10523b  pop edi
    X86_AT(c, 0x10523bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10523c  pop esi
    X86_AT(c, 0x10523cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 10523d  pop edi
    X86_AT(c, 0x10523du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 10523e  pop esi
    X86_AT(c, 0x10523eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 10523f  pop ebx
    X86_AT(c, 0x10523fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 105240  leave 
    X86_AT(c, 0x105240u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 105241  ret 8
    X86_AT(c, 0x105241u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x1051c4u, "ran off the end of a function");
}
void f_00105244(X86Cpu& c) {
    X86_TICK(c, 20);
    // 105244  push ebp
    X86_AT(c, 0x105244u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 105245  mov ebp, esp
    X86_AT(c, 0x105245u);
    c.r[5] = c.r[4];
    // 105247  push esi
    X86_AT(c, 0x105247u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 105248  push edi
    X86_AT(c, 0x105248u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 105249  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x105249u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 10524c  call 0x1040b8
    X86_AT(c, 0x10524cu);
    push32(c, 0x105251u); f_001040b8(c); X86_RET(c, 0x105251u);
    X86_TICK(c, 7);
    // 105251  call 0x1056dc
    X86_AT(c, 0x105251u);
    push32(c, 0x105256u); f_001056dc(c); X86_RET(c, 0x105256u);
    X86_TICK(c, 15);
    // 105256  xchg edi, eax
    X86_AT(c, 0x105256u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 105257  and di, 0x4700
    X86_AT(c, 0x105257u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & 0x4700u, 2)); }
    // 10525c  shr di, 8
    X86_AT(c, 0x10525cu);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 7, r); }
    // 105260  call 0x104028
    X86_AT(c, 0x105260u);
    push32(c, 0x105265u); f_00104028(c); X86_RET(c, 0x105265u);
    X86_TICK(c, 7);
    // 105265  cmp di, 0x10
    X86_AT(c, 0x105265u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x10u, 0, 2);
    // 105269  jbe 0x105275
    X86_AT(c, 0x105269u);
    if (x86_cc(c, 6)) { goto L_105275; }
    X86_TICK(c, 4);
    // 10526b  and di, 7
    X86_AT(c, 0x10526bu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & 0x7u, 2)); }
    // 105270  or di, 8
    X86_AT(c, 0x105270u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v | 0x8u, 2)); }
L_105275:
    X86_TICK(c, 10);
    // 105275  movzx eax, di
    X86_AT(c, 0x105275u);
    c.r[0] = (c.r[7] & 0xFFFFu);
    // 105278  cmp eax, 0xe
    X86_AT(c, 0x105278u);
    (void)x86_sub(c, c.r[0], 0xEu, 0, 4);
    // 10527b  ja 0x1052f4
    X86_AT(c, 0x10527bu);
    if (x86_cc(c, 7)) { goto L_1052f4; }
    X86_TICK(c, 7);
    // 105281  jmp dword ptr cs:[eax*4 + 0x105289]
    X86_AT(c, 0x105281u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x105289u)));
      switch (t) {
      case 0x1052c5u: goto L_1052c5;
      case 0x1052ccu: goto L_1052cc;
      case 0x1052dbu: goto L_1052db;
      case 0x1052e2u: goto L_1052e2;
      case 0x1052f4u: goto L_1052f4;
      default: x86_jump(c, t); return; } }
L_1052c5:
    X86_TICK(c, 9);
    // 1052c5  mov esi, 0xe3d0
    X86_AT(c, 0x1052c5u);
    c.r[6] = 0xE3D0u;
    // 1052ca  jmp 0x1052e7
    X86_AT(c, 0x1052cau);
    goto L_1052e7;
L_1052cc:
    X86_TICK(c, 15);
    // 1052cc  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x1052ccu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 1052cf  mov dword ptr [eax], 0x414e0003
    X86_AT(c, 0x1052cfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x414E0003u);
    // 1052d5  mov byte ptr [eax + 4], 0x4e
    X86_AT(c, 0x1052d5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), 0x4Eu);
    // 1052d9  jmp 0x1052fc
    X86_AT(c, 0x1052d9u);
    goto L_1052fc;
L_1052db:
    X86_TICK(c, 9);
    // 1052db  mov esi, 0xe3dc
    X86_AT(c, 0x1052dbu);
    c.r[6] = 0xE3DCu;
    // 1052e0  jmp 0x1052e7
    X86_AT(c, 0x1052e0u);
    goto L_1052e7;
L_1052e2:
    X86_TICK(c, 2);
    // 1052e2  mov esi, 0xe3e8
    X86_AT(c, 0x1052e2u);
    c.r[6] = 0xE3E8u;
L_1052e7:
    X86_TICK(c, 40);
    // 1052e7  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x1052e7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 1052ea  push edi
    X86_AT(c, 0x1052eau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 1052eb  mov edi, eax
    X86_AT(c, 0x1052ebu);
    c.r[7] = c.r[0];
    // 1052ed  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x1052edu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 1052ee  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x1052eeu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 1052ef  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x1052efu);
    x86_string(c, 0, 2, 0, 4, 3);
    // 1052f1  pop edi
    X86_AT(c, 0x1052f1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1052f2  jmp 0x1052fc
    X86_AT(c, 0x1052f2u);
    goto L_1052fc;
L_1052f4:
    X86_TICK(c, 6);
    // 1052f4  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x1052f4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 1052f7  mov word ptr [eax], 0
    X86_AT(c, 0x1052f7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
L_1052fc:
    X86_TICK(c, 24);
    // 1052fc  pop edi
    X86_AT(c, 0x1052fcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 1052fd  pop esi
    X86_AT(c, 0x1052fdu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 1052fe  leave 
    X86_AT(c, 0x1052feu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 1052ff  ret 8
    X86_AT(c, 0x1052ffu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x105244u, "ran off the end of a function");
}
}

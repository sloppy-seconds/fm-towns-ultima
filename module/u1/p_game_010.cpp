#include "p_game_funcs.h"
namespace p_game {
void f_000d3f10(X86Cpu& c) {
    X86_TICK(c, 49);
    // 0d3f10  push ebp
    X86_AT(c, 0xd3f10u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d3f11  mov ebp, esp
    X86_AT(c, 0xd3f11u);
    c.r[5] = c.r[4];
    // 0d3f13  sub esp, 8
    X86_AT(c, 0xd3f13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0d3f16  push ebx
    X86_AT(c, 0xd3f16u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3f17  push esi
    X86_AT(c, 0xd3f17u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3f18  push edi
    X86_AT(c, 0xd3f18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3f19  sub ebx, ebx
    X86_AT(c, 0xd3f19u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0d3f1b  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd3f1bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d3f1e  lea eax, [eax + eax*4]
    X86_AT(c, 0xd3f1eu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d3f21  lea eax, [eax*4]
    X86_AT(c, 0xd3f21u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d3f28  mov edi, dword ptr [eax + 0xa1cc0]
    X86_AT(c, 0xd3f28u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC0u)));
    // 0d3f2e  sub edi, dword ptr [0xb033a]
    X86_AT(c, 0xd3f2eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Au))), 0, 4); }
    // 0d3f34  mov esi, dword ptr [eax + 0xa1cc4]
    X86_AT(c, 0xd3f34u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC4u)));
    // 0d3f3a  sub esi, dword ptr [0xb033e]
    X86_AT(c, 0xd3f3au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Eu))), 0, 4); }
    // 0d3f40  and edi, edi
    X86_AT(c, 0xd3f40u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d3f42  jl 0xd3f48
    X86_AT(c, 0xd3f42u);
    if (x86_cc(c, 12)) { goto L_d3f48; }
    X86_TICK(c, 9);
    // 0d3f44  mov eax, edi
    X86_AT(c, 0xd3f44u);
    c.r[0] = c.r[7];
    // 0d3f46  jmp 0xd3f4c
    X86_AT(c, 0xd3f46u);
    goto L_d3f4c;
L_d3f48:
    X86_TICK(c, 4);
    // 0d3f48  mov eax, edi
    X86_AT(c, 0xd3f48u);
    c.r[0] = c.r[7];
    // 0d3f4a  neg eax
    X86_AT(c, 0xd3f4au);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_d3f4c:
    X86_TICK(c, 9);
    // 0d3f4c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd3f4cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d3f4f  and esi, esi
    X86_AT(c, 0xd3f4fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d3f51  jl 0xd3f57
    X86_AT(c, 0xd3f51u);
    if (x86_cc(c, 12)) { goto L_d3f57; }
    X86_TICK(c, 9);
    // 0d3f53  mov eax, esi
    X86_AT(c, 0xd3f53u);
    c.r[0] = c.r[6];
    // 0d3f55  jmp 0xd3f5b
    X86_AT(c, 0xd3f55u);
    goto L_d3f5b;
L_d3f57:
    X86_TICK(c, 4);
    // 0d3f57  mov eax, esi
    X86_AT(c, 0xd3f57u);
    c.r[0] = c.r[6];
    // 0d3f59  neg eax
    X86_AT(c, 0xd3f59u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_d3f5b:
    X86_TICK(c, 14);
    // 0d3f5b  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd3f5bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d3f5e  cmp dword ptr [ebp - 4], 2
    X86_AT(c, 0xd3f5eu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x2u, 0, 4);
    // 0d3f62  jge 0xd3f6d
    X86_AT(c, 0xd3f62u);
    if (x86_cc(c, 13)) { goto L_d3f6d; }
    X86_TICK(c, 7);
    // 0d3f64  cmp eax, 2
    X86_AT(c, 0xd3f64u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0d3f67  jl 0xd3fd5
    X86_AT(c, 0xd3f67u);
    if (x86_cc(c, 12)) { goto L_d3fd5; }
L_d3f6d:
    X86_TICK(c, 17);
    // 0d3f6d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd3f6du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d3f70  add eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd3f70u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0d3f73  cmp eax, 0xd
    X86_AT(c, 0xd3f73u);
    (void)x86_sub(c, c.r[0], 0xDu, 0, 4);
    // 0d3f76  jge 0xd3fca
    X86_AT(c, 0xd3f76u);
    if (x86_cc(c, 13)) { goto L_d3fca; }
    X86_TICK(c, 7);
    // 0d3f78  and edi, edi
    X86_AT(c, 0xd3f78u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d3f7a  je 0xd3f8c
    X86_AT(c, 0xd3f7au);
    if (x86_cc(c, 4)) { goto L_d3f8c; }
    X86_TICK(c, 7);
    // 0d3f7c  and edi, edi
    X86_AT(c, 0xd3f7cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d3f7e  jle 0xd3f87
    X86_AT(c, 0xd3f7eu);
    if (x86_cc(c, 14)) { goto L_d3f87; }
    X86_TICK(c, 9);
    // 0d3f80  mov edi, 0xffffffff
    X86_AT(c, 0xd3f80u);
    c.r[7] = 0xFFFFFFFFu;
    // 0d3f85  jmp 0xd3f8c
    X86_AT(c, 0xd3f85u);
    goto L_d3f8c;
L_d3f87:
    X86_TICK(c, 2);
    // 0d3f87  mov edi, 1
    X86_AT(c, 0xd3f87u);
    c.r[7] = 0x1u;
L_d3f8c:
    X86_TICK(c, 7);
    // 0d3f8c  and esi, esi
    X86_AT(c, 0xd3f8cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d3f8e  je 0xd3fa0
    X86_AT(c, 0xd3f8eu);
    if (x86_cc(c, 4)) { goto L_d3fa0; }
    X86_TICK(c, 7);
    // 0d3f90  and esi, esi
    X86_AT(c, 0xd3f90u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d3f92  jle 0xd3f9b
    X86_AT(c, 0xd3f92u);
    if (x86_cc(c, 14)) { goto L_d3f9b; }
    X86_TICK(c, 9);
    // 0d3f94  mov esi, 0xffffffff
    X86_AT(c, 0xd3f94u);
    c.r[6] = 0xFFFFFFFFu;
    // 0d3f99  jmp 0xd3fa0
    X86_AT(c, 0xd3f99u);
    goto L_d3fa0;
L_d3f9b:
    X86_TICK(c, 2);
    // 0d3f9b  mov esi, 1
    X86_AT(c, 0xd3f9bu);
    c.r[6] = 0x1u;
L_d3fa0:
    X86_TICK(c, 7);
    // 0d3fa0  and edi, edi
    X86_AT(c, 0xd3fa0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d3fa2  je 0xd3fb3
    X86_AT(c, 0xd3fa2u);
    if (x86_cc(c, 4)) { goto L_d3fb3; }
    X86_TICK(c, 16);
    // 0d3fa4  push 0
    X86_AT(c, 0xd3fa4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3fa6  push edi
    X86_AT(c, 0xd3fa6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3fa7  push dword ptr [ebp + 8]
    X86_AT(c, 0xd3fa7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d3faa  call 0xd3dc0
    X86_AT(c, 0xd3faau);
    push32(c, 0xd3fafu); x86_call_known(c, 0xd3dc0u, f_000d3dc0); X86_RET(c, 0xd3fafu);
    X86_TICK(c, 5);
    // 0d3faf  xchg ebx, eax
    X86_AT(c, 0xd3fafu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d3fb0  add esp, 0xc
    X86_AT(c, 0xd3fb0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d3fb3:
    X86_TICK(c, 7);
    // 0d3fb3  and ebx, ebx
    X86_AT(c, 0xd3fb3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d3fb5  jne 0xd3fca
    X86_AT(c, 0xd3fb5u);
    if (x86_cc(c, 5)) { goto L_d3fca; }
    X86_TICK(c, 7);
    // 0d3fb7  and esi, esi
    X86_AT(c, 0xd3fb7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d3fb9  je 0xd3fca
    X86_AT(c, 0xd3fb9u);
    if (x86_cc(c, 4)) { goto L_d3fca; }
    X86_TICK(c, 16);
    // 0d3fbb  push esi
    X86_AT(c, 0xd3fbbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3fbc  push 0
    X86_AT(c, 0xd3fbcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3fbe  push dword ptr [ebp + 8]
    X86_AT(c, 0xd3fbeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0d3fc1  call 0xd3dc0
    X86_AT(c, 0xd3fc1u);
    push32(c, 0xd3fc6u); x86_call_known(c, 0xd3dc0u, f_000d3dc0); X86_RET(c, 0xd3fc6u);
    X86_TICK(c, 5);
    // 0d3fc6  xchg ebx, eax
    X86_AT(c, 0xd3fc6u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d3fc7  add esp, 0xc
    X86_AT(c, 0xd3fc7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d3fca:
    X86_TICK(c, 7);
    // 0d3fca  and ebx, ebx
    X86_AT(c, 0xd3fcau);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d3fcc  je 0xd3fd5
    X86_AT(c, 0xd3fccu);
    if (x86_cc(c, 4)) { goto L_d3fd5; }
    X86_TICK(c, 9);
    // 0d3fce  mov eax, 1
    X86_AT(c, 0xd3fceu);
    c.r[0] = 0x1u;
    // 0d3fd3  jmp 0xd3fd7
    X86_AT(c, 0xd3fd3u);
    goto L_d3fd7;
L_d3fd5:
    X86_TICK(c, 2);
    // 0d3fd5  sub eax, eax
    X86_AT(c, 0xd3fd5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_d3fd7:
    X86_TICK(c, 28);
    // 0d3fd7  pop edi
    X86_AT(c, 0xd3fd7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3fd8  pop esi
    X86_AT(c, 0xd3fd8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3fd9  pop ebx
    X86_AT(c, 0xd3fd9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3fda  leave 
    X86_AT(c, 0xd3fdau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3fdb  ret 
    X86_AT(c, 0xd3fdbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3f10u, "ran off the end of a function");
}
void f_000d3fdc(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0d3fdc  push ebp
    X86_AT(c, 0xd3fdcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d3fdd  mov ebp, esp
    X86_AT(c, 0xd3fddu);
    c.r[5] = c.r[4];
    // 0d3fdf  sub esp, 0xc
    X86_AT(c, 0xd3fdfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0d3fe2  push ebx
    X86_AT(c, 0xd3fe2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3fe3  push esi
    X86_AT(c, 0xd3fe3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3fe4  push edi
    X86_AT(c, 0xd3fe4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3fe5  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd3fe5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d3fe8  lea eax, [edi + edi*4]
    X86_AT(c, 0xd3fe8u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0d3feb  mov eax, dword ptr [eax*4 + 0xa1cc0]
    X86_AT(c, 0xd3febu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1CC0u)));
    // 0d3ff2  sub eax, dword ptr [0xb033a]
    X86_AT(c, 0xd3ff2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Au))), 0, 4); }
    // 0d3ff8  and eax, eax
    X86_AT(c, 0xd3ff8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d3ffa  jge 0xd400e
    X86_AT(c, 0xd3ffau);
    if (x86_cc(c, 13)) { goto L_d400e; }
    X86_TICK(c, 14);
    // 0d3ffc  lea eax, [edi + edi*4]
    X86_AT(c, 0xd3ffcu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0d3fff  mov eax, dword ptr [eax*4 + 0xa1cc0]
    X86_AT(c, 0xd3fffu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1CC0u)));
    // 0d4006  sub eax, dword ptr [0xb033a]
    X86_AT(c, 0xd4006u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Au))), 0, 4); }
    // 0d400c  neg eax
    X86_AT(c, 0xd400cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_d400e:
    X86_TICK(c, 22);
    // 0d400e  xchg esi, eax
    X86_AT(c, 0xd400eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d400f  lea eax, [edi + edi*4]
    X86_AT(c, 0xd400fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0d4012  mov eax, dword ptr [eax*4 + 0xa1cc4]
    X86_AT(c, 0xd4012u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1CC4u)));
    // 0d4019  sub eax, dword ptr [0xb033e]
    X86_AT(c, 0xd4019u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Eu))), 0, 4); }
    // 0d401f  and eax, eax
    X86_AT(c, 0xd401fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d4021  jge 0xd4035
    X86_AT(c, 0xd4021u);
    if (x86_cc(c, 13)) { goto L_d4035; }
    X86_TICK(c, 14);
    // 0d4023  lea eax, [edi + edi*4]
    X86_AT(c, 0xd4023u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0d4026  mov eax, dword ptr [eax*4 + 0xa1cc4]
    X86_AT(c, 0xd4026u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1CC4u)));
    // 0d402d  sub eax, dword ptr [0xb033e]
    X86_AT(c, 0xd402du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Eu))), 0, 4); }
    // 0d4033  neg eax
    X86_AT(c, 0xd4033u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_d4035:
    X86_TICK(c, 9);
    // 0d4035  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd4035u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d4038  cmp esi, 2
    X86_AT(c, 0xd4038u);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 0d403b  jge 0xd40de
    X86_AT(c, 0xd403bu);
    if (x86_cc(c, 13)) { goto L_d40de; }
    X86_TICK(c, 7);
    // 0d4041  cmp eax, 2
    X86_AT(c, 0xd4041u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0d4044  jge 0xd40de
    X86_AT(c, 0xd4044u);
    if (x86_cc(c, 13)) { goto L_d40de; }
    X86_TICK(c, 9);
    // 0d404a  push 0x8df8
    X86_AT(c, 0xd404au);
    { uint32_t v = 0x8DF8u; push32(c, v); }
    // 0d404f  call 0xcc7bc
    X86_AT(c, 0xd404fu);
    push32(c, 0xd4054u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd4054u);
    X86_TICK(c, 9);
    // 0d4054  push 0xa
    X86_AT(c, 0xd4054u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d4056  call 0xc5ca4
    X86_AT(c, 0xd4056u);
    push32(c, 0xd405bu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd405bu);
    X86_TICK(c, 11);
    // 0d405b  push 0xff
    X86_AT(c, 0xd405bu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0d4060  push 1
    X86_AT(c, 0xd4060u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d4062  call 0xc5df0
    X86_AT(c, 0xd4062u);
    push32(c, 0xd4067u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd4067u);
    X86_TICK(c, 37);
    // 0d4067  add esp, 0x10
    X86_AT(c, 0xd4067u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d406a  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd406au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d406d  mov eax, dword ptr [0xb030a]
    X86_AT(c, 0xd406du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB030Au)));
    // 0d4072  cdq 
    X86_AT(c, 0xd4072u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d4073  sub eax, edx
    X86_AT(c, 0xd4073u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d4075  sar eax, 1
    X86_AT(c, 0xd4075u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d4077  mov edx, dword ptr [0xb032e]
    X86_AT(c, 0xd4077u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB032Eu)));
    // 0d407d  shl edx, 3
    X86_AT(c, 0xd407du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0d4080  add edx, eax
    X86_AT(c, 0xd4080u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d4082  add edx, 0x38
    X86_AT(c, 0xd4082u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x38u, 0, 4); }
    // 0d4085  cmp edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd4085u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4);
    // 0d4088  jle 0xd4099
    X86_AT(c, 0xd4088u);
    if (x86_cc(c, 14)) { goto L_d4099; }
    X86_TICK(c, 9);
    // 0d408a  push 0x8e34
    X86_AT(c, 0xd408au);
    { uint32_t v = 0x8E34u; push32(c, v); }
    // 0d408f  call 0xcc7bc
    X86_AT(c, 0xd408fu);
    push32(c, 0xd4094u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd4094u);
    X86_TICK(c, 9);
    // 0d4094  add esp, 4
    X86_AT(c, 0xd4094u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d4097  jmp 0xd40de
    X86_AT(c, 0xd4097u);
    goto L_d40de;
L_d4099:
    X86_TICK(c, 63);
    // 0d4099  mov eax, dword ptr [0xb02fe]
    X86_AT(c, 0xd4099u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB02FEu)));
    // 0d409e  cdq 
    X86_AT(c, 0xd409eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d409f  mov ecx, 0x80
    X86_AT(c, 0xd409fu);
    c.r[1] = 0x80u;
    // 0d40a4  idiv ecx
    X86_AT(c, 0xd40a4u);
    x86_idiv(c, c.r[1], 4, 0xd40a4u);
    // 0d40a6  add eax, 0xf
    X86_AT(c, 0xd40a6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xFu, 0, 4); }
    // 0d40a9  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd40a9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d40ac  push eax
    X86_AT(c, 0xd40acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d40ad  push 2
    X86_AT(c, 0xd40adu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d40af  call 0xc5df0
    X86_AT(c, 0xd40afu);
    push32(c, 0xd40b4u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd40b4u);
    X86_TICK(c, 16);
    // 0d40b4  xchg ebx, eax
    X86_AT(c, 0xd40b4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d40b5  push 3
    X86_AT(c, 0xd40b5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d40b7  push ebx
    X86_AT(c, 0xd40b7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d40b8  push 7
    X86_AT(c, 0xd40b8u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d40ba  call 0xc8cb8
    X86_AT(c, 0xd40bau);
    push32(c, 0xd40bfu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd40bfu);
    X86_TICK(c, 9);
    // 0d40bf  push 0x8e50
    X86_AT(c, 0xd40bfu);
    { uint32_t v = 0x8E50u; push32(c, v); }
    // 0d40c4  call 0xcc7bc
    X86_AT(c, 0xd40c4u);
    push32(c, 0xd40c9u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd40c9u);
    X86_TICK(c, 9);
    // 0d40c9  push 8
    X86_AT(c, 0xd40c9u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d40cb  call 0xc5ca4
    X86_AT(c, 0xd40cbu);
    push32(c, 0xd40d0u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd40d0u);
    X86_TICK(c, 14);
    // 0d40d0  sub dword ptr [0xb02fe], ebx
    X86_AT(c, 0xd40d0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB02FEu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[3], 0, 4)); }
    // 0d40d6  call 0xcc628
    X86_AT(c, 0xd40d6u);
    push32(c, 0xd40dbu); x86_call_known(c, 0xcc628u, f_000cc628); X86_RET(c, 0xd40dbu);
    X86_TICK(c, 2);
    // 0d40db  add esp, 0x1c
    X86_AT(c, 0xd40dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_d40de:
    X86_TICK(c, 28);
    // 0d40de  pop edi
    X86_AT(c, 0xd40deu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d40df  pop esi
    X86_AT(c, 0xd40dfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d40e0  pop ebx
    X86_AT(c, 0xd40e0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d40e1  leave 
    X86_AT(c, 0xd40e1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d40e2  ret 
    X86_AT(c, 0xd40e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3fdcu, "ran off the end of a function");
}
void f_000d40e4(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0d40e4  push ebp
    X86_AT(c, 0xd40e4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d40e5  mov ebp, esp
    X86_AT(c, 0xd40e5u);
    c.r[5] = c.r[4];
    // 0d40e7  sub esp, 0x28
    X86_AT(c, 0xd40e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x28u, 0, 4); }
    // 0d40ea  push esi
    X86_AT(c, 0xd40eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d40eb  push edi
    X86_AT(c, 0xd40ebu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d40ec  sub esi, esi
    X86_AT(c, 0xd40ecu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d40ee  cmp esi, dword ptr [0xbef90]
    X86_AT(c, 0xd40eeu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xBEF90u))), 0, 4);
    // 0d40f4  je 0xd40fc
    X86_AT(c, 0xd40f4u);
    if (x86_cc(c, 4)) { goto L_d40fc; }
    X86_TICK(c, 2);
    // 0d40f6  mov dword ptr [0xbef90], esi
    X86_AT(c, 0xd40f6u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), c.r[6]);
L_d40fc:
    X86_TICK(c, 2);
    // 0d40fc  sub edi, edi
    X86_AT(c, 0xd40fcu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d40fe:
    X86_TICK(c, 7);
    // 0d40fe  cmp edi, 0xf
    X86_AT(c, 0xd40feu);
    (void)x86_sub(c, c.r[7], 0xFu, 0, 4);
    // 0d4101  jge 0xd418f
    X86_AT(c, 0xd4101u);
    if (x86_cc(c, 13)) { goto L_d418f; }
    X86_TICK(c, 16);
    // 0d4107  lea eax, [edi + edi*4]
    X86_AT(c, 0xd4107u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0d410a  lea eax, [eax*4]
    X86_AT(c, 0xd410au);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d4111  cmp dword ptr [eax + 0xa1cbc], 0x13
    X86_AT(c, 0xd4111u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CBCu))), 0x13u, 0, 4);
    // 0d4118  jne 0xd4122
    X86_AT(c, 0xd4118u);
    if (x86_cc(c, 5)) { goto L_d4122; }
    X86_TICK(c, 9);
    // 0d411a  push edi
    X86_AT(c, 0xd411au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d411b  call 0xd3c14
    X86_AT(c, 0xd411bu);
    push32(c, 0xd4120u); x86_call_known(c, 0xd3c14u, f_000d3c14); X86_RET(c, 0xd4120u);
    X86_TICK(c, 7);
    // 0d4120  jmp 0xd4156
    X86_AT(c, 0xd4120u);
    goto L_d4156;
L_d4122:
    X86_TICK(c, 16);
    // 0d4122  lea eax, [edi + edi*4]
    X86_AT(c, 0xd4122u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0d4125  lea eax, [eax*4]
    X86_AT(c, 0xd4125u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d412c  cmp dword ptr [eax + 0xa1cbc], 0x32
    X86_AT(c, 0xd412cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CBCu))), 0x32u, 0, 4);
    // 0d4133  jne 0xd413d
    X86_AT(c, 0xd4133u);
    if (x86_cc(c, 5)) { goto L_d413d; }
    X86_TICK(c, 9);
    // 0d4135  push edi
    X86_AT(c, 0xd4135u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d4136  call 0xd3d60
    X86_AT(c, 0xd4136u);
    push32(c, 0xd413bu); x86_call_known(c, 0xd3d60u, f_000d3d60); X86_RET(c, 0xd413bu);
    X86_TICK(c, 7);
    // 0d413b  jmp 0xd4156
    X86_AT(c, 0xd413bu);
    goto L_d4156;
L_d413d:
    X86_TICK(c, 16);
    // 0d413d  lea eax, [edi + edi*4]
    X86_AT(c, 0xd413du);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0d4140  lea eax, [eax*4]
    X86_AT(c, 0xd4140u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d4147  cmp dword ptr [eax + 0xa1cbc], 0x16
    X86_AT(c, 0xd4147u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CBCu))), 0x16u, 0, 4);
    // 0d414e  jne 0xd415b
    X86_AT(c, 0xd414eu);
    if (x86_cc(c, 5)) { goto L_d415b; }
    X86_TICK(c, 9);
    // 0d4150  push edi
    X86_AT(c, 0xd4150u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d4151  call 0xd3e3c
    X86_AT(c, 0xd4151u);
    push32(c, 0xd4156u); x86_call_known(c, 0xd3e3cu, f_000d3e3c); X86_RET(c, 0xd4156u);
L_d4156:
    X86_TICK(c, 9);
    // 0d4156  add esp, 4
    X86_AT(c, 0xd4156u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d4159  jmp 0xd4189
    X86_AT(c, 0xd4159u);
    goto L_d4189;
L_d415b:
    X86_TICK(c, 16);
    // 0d415b  lea eax, [edi + edi*4]
    X86_AT(c, 0xd415bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0d415e  lea eax, [eax*4]
    X86_AT(c, 0xd415eu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d4165  cmp dword ptr [eax + 0xa1cbc], 0x11
    X86_AT(c, 0xd4165u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CBCu))), 0x11u, 0, 4);
    // 0d416c  jne 0xd4189
    X86_AT(c, 0xd416cu);
    if (x86_cc(c, 5)) { goto L_d4189; }
    X86_TICK(c, 12);
    // 0d416e  cmp dword ptr [0xaae9c], 0
    X86_AT(c, 0xd416eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAAE9Cu))), 0x0u, 0, 4);
    // 0d4175  je 0xd4189
    X86_AT(c, 0xd4175u);
    if (x86_cc(c, 4)) { goto L_d4189; }
    X86_TICK(c, 9);
    // 0d4177  push edi
    X86_AT(c, 0xd4177u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d4178  call 0xd3f10
    X86_AT(c, 0xd4178u);
    push32(c, 0xd417du); x86_call_known(c, 0xd3f10u, f_000d3f10); X86_RET(c, 0xd417du);
    X86_TICK(c, 9);
    // 0d417d  add esp, 4
    X86_AT(c, 0xd417du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d4180  and eax, eax
    X86_AT(c, 0xd4180u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d4182  jne 0xd4189
    X86_AT(c, 0xd4182u);
    if (x86_cc(c, 5)) { goto L_d4189; }
    X86_TICK(c, 4);
    // 0d4184  inc esi
    X86_AT(c, 0xd4184u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d4185  mov dword ptr [ebp + esi*4 - 0x2c], edi
    X86_AT(c, 0xd4185u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xFFFFFFD4u)), c.r[7]);
L_d4189:
    X86_TICK(c, 9);
    // 0d4189  inc edi
    X86_AT(c, 0xd4189u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d418a  jmp 0xd40fe
    X86_AT(c, 0xd418au);
    X86_POLL(c, 0xd40feu); goto L_d40fe;
L_d418f:
    X86_TICK(c, 12);
    // 0d418f  cmp dword ptr [0xaae9c], 0
    X86_AT(c, 0xd418fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAAE9Cu))), 0x0u, 0, 4);
    // 0d4196  je 0xd41ba
    X86_AT(c, 0xd4196u);
    if (x86_cc(c, 4)) { goto L_d41ba; }
    X86_TICK(c, 7);
    // 0d4198  and esi, esi
    X86_AT(c, 0xd4198u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d419a  je 0xd41ba
    X86_AT(c, 0xd419au);
    if (x86_cc(c, 4)) { goto L_d41ba; }
    X86_TICK(c, 2);
    // 0d419c  sub edi, edi
    X86_AT(c, 0xd419cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d419e:
    X86_TICK(c, 7);
    // 0d419e  cmp esi, edi
    X86_AT(c, 0xd419eu);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0d41a0  jle 0xd41ba
    X86_AT(c, 0xd41a0u);
    if (x86_cc(c, 14)) { goto L_d41ba; }
    X86_TICK(c, 12);
    // 0d41a2  push dword ptr [ebp + edi*4 - 0x28]
    X86_AT(c, 0xd41a2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] * 4 + 0xFFFFFFD8u))); push32(c, v); }
    // 0d41a6  call 0xd3fdc
    X86_AT(c, 0xd41a6u);
    push32(c, 0xd41abu); x86_call_known(c, 0xd3fdcu, f_000d3fdc); X86_RET(c, 0xd41abu);
    X86_TICK(c, 14);
    // 0d41ab  add esp, 4
    X86_AT(c, 0xd41abu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d41ae  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xd41aeu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0d41b5  jle 0xd41ba
    X86_AT(c, 0xd41b5u);
    if (x86_cc(c, 14)) { goto L_d41ba; }
    X86_TICK(c, 9);
    // 0d41b7  inc edi
    X86_AT(c, 0xd41b7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d41b8  jmp 0xd419e
    X86_AT(c, 0xd41b8u);
    X86_POLL(c, 0xd419eu); goto L_d419e;
L_d41ba:
    X86_TICK(c, 24);
    // 0d41ba  pop edi
    X86_AT(c, 0xd41bau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d41bb  pop esi
    X86_AT(c, 0xd41bbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d41bc  leave 
    X86_AT(c, 0xd41bcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d41bd  ret 
    X86_AT(c, 0xd41bdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd40e4u, "ran off the end of a function");
}
void f_000d41c0(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0d41c0  push ebp
    X86_AT(c, 0xd41c0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d41c1  mov ebp, esp
    X86_AT(c, 0xd41c1u);
    c.r[5] = c.r[4];
    // 0d41c3  sub esp, 0x18
    X86_AT(c, 0xd41c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x18u, 0, 4); }
    // 0d41c6  push ebx
    X86_AT(c, 0xd41c6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d41c7  push esi
    X86_AT(c, 0xd41c7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d41c8  push edi
    X86_AT(c, 0xd41c8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d41c9  mov edi, 1
    X86_AT(c, 0xd41c9u);
    c.r[7] = 0x1u;
    // 0d41ce  mov dword ptr [ebp - 8], 7
    X86_AT(c, 0xd41ceu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x7u);
    // 0d41d5  push 0xa
    X86_AT(c, 0xd41d5u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d41d7  call 0xc5ca4
    X86_AT(c, 0xd41d7u);
    push32(c, 0xd41dcu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd41dcu);
    X86_TICK(c, 17);
    // 0d41dc  add esp, 4
    X86_AT(c, 0xd41dcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d41df  movzx edx, byte ptr [ebp + 8]
    X86_AT(c, 0xd41dfu);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d41e3  sub edx, 3
    X86_AT(c, 0xd41e3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0d41e6  cmp edx, 4
    X86_AT(c, 0xd41e6u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0d41e9  ja 0xd423e
    X86_AT(c, 0xd41e9u);
    if (x86_cc(c, 7)) { goto L_d423e; }
    X86_TICK(c, 7);
    // 0d41eb  jmp dword ptr cs:[edx*4 + 0xd41f3]
    X86_AT(c, 0xd41ebu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD41F3u)));
      switch (t) {
      case 0xd4207u: goto L_d4207;
      case 0xd4217u: goto L_d4217;
      case 0xd4227u: goto L_d4227;
      case 0xd4230u: goto L_d4230;
      case 0xd423eu: goto L_d423e;
      default: x86_jump(c, t); return; } }
L_d4207:
    X86_TICK(c, 11);
    // 0d4207  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xd4207u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 0d420e  mov dword ptr [ebp - 0x10], 0xffffffff
    X86_AT(c, 0xd420eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0xFFFFFFFFu);
    // 0d4215  jmp 0xd423e
    X86_AT(c, 0xd4215u);
    goto L_d423e;
L_d4217:
    X86_TICK(c, 11);
    // 0d4217  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xd4217u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 0d421e  mov dword ptr [ebp - 0x10], 1
    X86_AT(c, 0xd421eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x1u);
    // 0d4225  jmp 0xd423e
    X86_AT(c, 0xd4225u);
    goto L_d423e;
L_d4227:
    X86_TICK(c, 9);
    // 0d4227  mov dword ptr [ebp - 0xc], 1
    X86_AT(c, 0xd4227u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1u);
    // 0d422e  jmp 0xd4237
    X86_AT(c, 0xd422eu);
    goto L_d4237;
L_d4230:
    X86_TICK(c, 2);
    // 0d4230  mov dword ptr [ebp - 0xc], 0xffffffff
    X86_AT(c, 0xd4230u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0xFFFFFFFFu);
L_d4237:
    X86_TICK(c, 2);
    // 0d4237  mov dword ptr [ebp - 0x10], 0
    X86_AT(c, 0xd4237u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x0u);
L_d423e:
    X86_TICK(c, 75);
    // 0d423e  mov eax, edi
    X86_AT(c, 0xd423eu);
    c.r[0] = c.r[7];
    // 0d4240  imul eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd4240u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 4);
    // 0d4244  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd4244u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d4247  mov edx, edi
    X86_AT(c, 0xd4247u);
    c.r[2] = c.r[7];
    // 0d4249  imul edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xd4249u);
    c.r[2] = x86_imul2(c, c.r[2], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 0d424d  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0xd424du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
    // 0d4250  mov ecx, dword ptr [0xb033e]
    X86_AT(c, 0xd4250u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0d4256  add ecx, edx
    X86_AT(c, 0xd4256u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], 0, 4); }
    // 0d4258  push ecx
    X86_AT(c, 0xd4258u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d4259  mov ecx, dword ptr [0xb033a]
    X86_AT(c, 0xd4259u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0d425f  add ecx, eax
    X86_AT(c, 0xd425fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d4261  push ecx
    X86_AT(c, 0xd4261u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d4262  call 0xd3a2c
    X86_AT(c, 0xd4262u);
    push32(c, 0xd4267u); x86_call_known(c, 0xd3a2cu, f_000d3a2c); X86_RET(c, 0xd4267u);
    X86_TICK(c, 36);
    // 0d4267  xchg esi, eax
    X86_AT(c, 0xd4267u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d4268  inc edi
    X86_AT(c, 0xd4268u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d4269  mov eax, dword ptr [0xb033e]
    X86_AT(c, 0xd4269u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0d426e  add eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xd426eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0, 4); }
    // 0d4271  push eax
    X86_AT(c, 0xd4271u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4272  mov eax, dword ptr [0xb033a]
    X86_AT(c, 0xd4272u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0d4277  add eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4277u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 0d427a  push eax
    X86_AT(c, 0xd427au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d427b  call 0xd3ab4
    X86_AT(c, 0xd427bu);
    push32(c, 0xd4280u); x86_call_known(c, 0xd3ab4u, f_000d3ab4); X86_RET(c, 0xd4280u);
    X86_TICK(c, 12);
    // 0d4280  xchg ebx, eax
    X86_AT(c, 0xd4280u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d4281  add esp, 0x10
    X86_AT(c, 0xd4281u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d4284  cmp ebx, 0x3f
    X86_AT(c, 0xd4284u);
    (void)x86_sub(c, c.r[3], 0x3Fu, 0, 4);
    // 0d4287  jne 0xd428e
    X86_AT(c, 0xd4287u);
    if (x86_cc(c, 5)) { goto L_d428e; }
    X86_TICK(c, 2);
    // 0d4289  mov ebx, 0xffffffff
    X86_AT(c, 0xd4289u);
    c.r[3] = 0xFFFFFFFFu;
L_d428e:
    X86_TICK(c, 11);
    // 0d428e  cmp edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd428eu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4);
    // 0d4291  jg 0xd42b6
    X86_AT(c, 0xd4291u);
    if (x86_cc(c, 15)) { goto L_d42b6; }
    X86_TICK(c, 7);
    // 0d4293  cmp esi, 0x11
    X86_AT(c, 0xd4293u);
    (void)x86_sub(c, c.r[6], 0x11u, 0, 4);
    // 0d4296  je 0xd42b6
    X86_AT(c, 0xd4296u);
    if (x86_cc(c, 4)) { goto L_d42b6; }
    X86_TICK(c, 7);
    // 0d4298  cmp esi, 0x16
    X86_AT(c, 0xd4298u);
    (void)x86_sub(c, c.r[6], 0x16u, 0, 4);
    // 0d429b  je 0xd42b6
    X86_AT(c, 0xd429bu);
    if (x86_cc(c, 4)) { goto L_d42b6; }
    X86_TICK(c, 7);
    // 0d429d  cmp esi, 0x13
    X86_AT(c, 0xd429du);
    (void)x86_sub(c, c.r[6], 0x13u, 0, 4);
    // 0d42a0  je 0xd42b6
    X86_AT(c, 0xd42a0u);
    if (x86_cc(c, 4)) { goto L_d42b6; }
    X86_TICK(c, 7);
    // 0d42a2  cmp esi, 0x32
    X86_AT(c, 0xd42a2u);
    (void)x86_sub(c, c.r[6], 0x32u, 0, 4);
    // 0d42a5  je 0xd42b6
    X86_AT(c, 0xd42a5u);
    if (x86_cc(c, 4)) { goto L_d42b6; }
    X86_TICK(c, 7);
    // 0d42a7  cmp esi, 0x14
    X86_AT(c, 0xd42a7u);
    (void)x86_sub(c, c.r[6], 0x14u, 0, 4);
    // 0d42aa  je 0xd42b6
    X86_AT(c, 0xd42aau);
    if (x86_cc(c, 4)) { goto L_d42b6; }
    X86_TICK(c, 7);
    // 0d42ac  cmp esi, 0x15
    X86_AT(c, 0xd42acu);
    (void)x86_sub(c, c.r[6], 0x15u, 0, 4);
    // 0d42af  je 0xd42b6
    X86_AT(c, 0xd42afu);
    if (x86_cc(c, 4)) { goto L_d42b6; }
    X86_TICK(c, 7);
    // 0d42b1  cmp ebx, 0xffffffff
    X86_AT(c, 0xd42b1u);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0d42b4  je 0xd423e
    X86_AT(c, 0xd42b4u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd423eu); goto L_d423e; }
L_d42b6:
    X86_TICK(c, 31);
    // 0d42b6  mov eax, dword ptr [0xb033e]
    X86_AT(c, 0xd42b6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0d42bb  add eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xd42bbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0, 4); }
    // 0d42be  push eax
    X86_AT(c, 0xd42beu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d42bf  mov eax, dword ptr [0xb033a]
    X86_AT(c, 0xd42bfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0d42c4  add eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd42c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 0d42c7  push eax
    X86_AT(c, 0xd42c7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d42c8  call 0xd39d0
    X86_AT(c, 0xd42c8u);
    push32(c, 0xd42cdu); x86_call_known(c, 0xd39d0u, f_000d39d0); X86_RET(c, 0xd42cdu);
    X86_TICK(c, 11);
    // 0d42cd  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd42cdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d42d0  add esp, 8
    X86_AT(c, 0xd42d0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d42d3  inc eax
    X86_AT(c, 0xd42d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d42d4  je 0xd42e7
    X86_AT(c, 0xd42d4u);
    if (x86_cc(c, 4)) { goto L_d42e7; }
    X86_TICK(c, 11);
    // 0d42d6  push 0x64
    X86_AT(c, 0xd42d6u);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0d42d8  push 1
    X86_AT(c, 0xd42d8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d42da  call 0xc5df0
    X86_AT(c, 0xd42dau);
    push32(c, 0xd42dfu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd42dfu);
    X86_TICK(c, 13);
    // 0d42df  add esp, 8
    X86_AT(c, 0xd42dfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d42e2  cmp eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xd42e2u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 4);
    // 0d42e5  jle 0xd42f6
    X86_AT(c, 0xd42e5u);
    if (x86_cc(c, 14)) { goto L_d42f6; }
L_d42e7:
    X86_TICK(c, 9);
    // 0d42e7  push 0x8e78
    X86_AT(c, 0xd42e7u);
    { uint32_t v = 0x8E78u; push32(c, v); }
    // 0d42ec  call 0xcc7bc
    X86_AT(c, 0xd42ecu);
    push32(c, 0xd42f1u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd42f1u);
    X86_TICK(c, 7);
    // 0d42f1  jmp 0xd4443
    X86_AT(c, 0xd42f1u);
    goto L_d4443;
L_d42f6:
    X86_TICK(c, 11);
    // 0d42f6  push 0xf
    X86_AT(c, 0xd42f6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d42f8  push 0x8e94
    X86_AT(c, 0xd42f8u);
    { uint32_t v = 0x8E94u; push32(c, v); }
    // 0d42fd  call 0xcc830
    X86_AT(c, 0xd42fdu);
    push32(c, 0xd4302u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd4302u);
    X86_TICK(c, 11);
    // 0d4302  add esp, 8
    X86_AT(c, 0xd4302u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d4305  mov edx, esi
    X86_AT(c, 0xd4305u);
    c.r[2] = c.r[6];
    // 0d4307  cmp edx, 0x32
    X86_AT(c, 0xd4307u);
    (void)x86_sub(c, c.r[2], 0x32u, 0, 4);
    // 0d430a  je 0xd436b
    X86_AT(c, 0xd430au);
    if (x86_cc(c, 4)) { goto L_d436b; }
    X86_TICK(c, 9);
    // 0d430c  sub edx, 0x11
    X86_AT(c, 0xd430cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x11u, 0, 4); }
    // 0d430f  cmp edx, 5
    X86_AT(c, 0xd430fu);
    (void)x86_sub(c, c.r[2], 0x5u, 0, 4);
    // 0d4312  ja 0xd438b
    X86_AT(c, 0xd4312u);
    if (x86_cc(c, 7)) { goto L_d438b; }
    X86_TICK(c, 7);
    // 0d4318  jmp dword ptr cs:[edx*4 + 0xd4320]
    X86_AT(c, 0xd4318u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD4320u)));
      switch (t) {
      case 0xd4338u: goto L_d4338;
      case 0xd433fu: goto L_d433f;
      case 0xd4346u: goto L_d4346;
      case 0xd434du: goto L_d434d;
      case 0xd4354u: goto L_d4354;
      case 0xd438bu: goto L_d438b;
      default: x86_jump(c, t); return; } }
L_d4338:
    X86_TICK(c, 9);
    // 0d4338  push 0x8ea8
    X86_AT(c, 0xd4338u);
    { uint32_t v = 0x8EA8u; push32(c, v); }
    // 0d433d  jmp 0xd4380
    X86_AT(c, 0xd433du);
    goto L_d4380;
L_d433f:
    X86_TICK(c, 9);
    // 0d433f  push 0x8eb8
    X86_AT(c, 0xd433fu);
    { uint32_t v = 0x8EB8u; push32(c, v); }
    // 0d4344  jmp 0xd4380
    X86_AT(c, 0xd4344u);
    goto L_d4380;
L_d4346:
    X86_TICK(c, 9);
    // 0d4346  push 0x8ecc
    X86_AT(c, 0xd4346u);
    { uint32_t v = 0x8ECCu; push32(c, v); }
    // 0d434b  jmp 0xd4380
    X86_AT(c, 0xd434bu);
    goto L_d4380;
L_d434d:
    X86_TICK(c, 9);
    // 0d434d  push 0x8ee4
    X86_AT(c, 0xd434du);
    { uint32_t v = 0x8EE4u; push32(c, v); }
    // 0d4352  jmp 0xd4380
    X86_AT(c, 0xd4352u);
    goto L_d4380;
L_d4354:
    X86_TICK(c, 12);
    // 0d4354  cmp dword ptr [0xb52f8], 1
    X86_AT(c, 0xd4354u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x1u, 0, 4);
    // 0d435b  jne 0xd4364
    X86_AT(c, 0xd435bu);
    if (x86_cc(c, 5)) { goto L_d4364; }
    X86_TICK(c, 9);
    // 0d435d  push 0x8efc
    X86_AT(c, 0xd435du);
    { uint32_t v = 0x8EFCu; push32(c, v); }
    // 0d4362  jmp 0xd4380
    X86_AT(c, 0xd4362u);
    goto L_d4380;
L_d4364:
    X86_TICK(c, 9);
    // 0d4364  push 0x8f10
    X86_AT(c, 0xd4364u);
    { uint32_t v = 0x8F10u; push32(c, v); }
    // 0d4369  jmp 0xd4380
    X86_AT(c, 0xd4369u);
    goto L_d4380;
L_d436b:
    X86_TICK(c, 12);
    // 0d436b  cmp byte ptr [0xb02fd], 0
    X86_AT(c, 0xd436bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB02FDu))), 0x0u, 0, 1);
    // 0d4372  jne 0xd437b
    X86_AT(c, 0xd4372u);
    if (x86_cc(c, 5)) { goto L_d437b; }
    X86_TICK(c, 9);
    // 0d4374  push 0x8f28
    X86_AT(c, 0xd4374u);
    { uint32_t v = 0x8F28u; push32(c, v); }
    // 0d4379  jmp 0xd4380
    X86_AT(c, 0xd4379u);
    goto L_d4380;
L_d437b:
    X86_TICK(c, 2);
    // 0d437b  push 0x8f3c
    X86_AT(c, 0xd437bu);
    { uint32_t v = 0x8F3Cu; push32(c, v); }
L_d4380:
    X86_TICK(c, 12);
    // 0d4380  push dword ptr [ebp - 8]
    X86_AT(c, 0xd4380u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0d4383  call 0xc8cdc
    X86_AT(c, 0xd4383u);
    push32(c, 0xd4388u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4388u);
    X86_TICK(c, 2);
    // 0d4388  add esp, 8
    X86_AT(c, 0xd4388u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d438b:
    X86_TICK(c, 9);
    // 0d438b  push 0x8f54
    X86_AT(c, 0xd438bu);
    { uint32_t v = 0x8F54u; push32(c, v); }
    // 0d4390  call 0xcc7bc
    X86_AT(c, 0xd4390u);
    push32(c, 0xd4395u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd4395u);
    X86_TICK(c, 11);
    // 0d4395  mov dword ptr [0xaae9c], 1
    X86_AT(c, 0xd4395u);
    wr32((c.sbase[3] + (uint32_t)(0xAAE9Cu)), 0x1u);
    // 0d439f  push 8
    X86_AT(c, 0xd439fu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d43a1  call 0xc5ca4
    X86_AT(c, 0xd43a1u);
    push32(c, 0xd43a6u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd43a6u);
    X86_TICK(c, 25);
    // 0d43a6  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd43a6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d43a9  lea eax, [eax + eax*4]
    X86_AT(c, 0xd43a9u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d43ac  lea eax, [eax*4]
    X86_AT(c, 0xd43acu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d43b3  add esp, 8
    X86_AT(c, 0xd43b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d43b6  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd43b6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d43b9  cmp edx, dword ptr [eax + 0xa1cc8]
    X86_AT(c, 0xd43b9u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC8u))), 0, 4);
    // 0d43bf  jl 0xd4448
    X86_AT(c, 0xd43bfu);
    if (x86_cc(c, 12)) { goto L_d4448; }
    X86_TICK(c, 9);
    // 0d43c5  push 0x8f60
    X86_AT(c, 0xd43c5u);
    { uint32_t v = 0x8F60u; push32(c, v); }
    // 0d43ca  call 0xcc7bc
    X86_AT(c, 0xd43cau);
    push32(c, 0xd43cfu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd43cfu);
    X86_TICK(c, 9);
    // 0d43cf  add esp, 4
    X86_AT(c, 0xd43cfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d43d2  cmp esi, 0x16
    X86_AT(c, 0xd43d2u);
    (void)x86_sub(c, c.r[6], 0x16u, 0, 4);
    // 0d43d5  je 0xd43e4
    X86_AT(c, 0xd43d5u);
    if (x86_cc(c, 4)) { goto L_d43e4; }
    X86_TICK(c, 13);
    // 0d43d7  inc dword ptr [0xb031e]
    X86_AT(c, 0xd43d7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Eu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d43dd  call 0xcc6b0
    X86_AT(c, 0xd43ddu);
    push32(c, 0xd43e2u); x86_call_known(c, 0xcc6b0u, f_000cc6b0); X86_RET(c, 0xd43e2u);
    X86_TICK(c, 7);
    // 0d43e2  jmp 0xd43ee
    X86_AT(c, 0xd43e2u);
    goto L_d43ee;
L_d43e4:
    X86_TICK(c, 2);
    // 0d43e4  mov dword ptr [0xaa2cc], 0
    X86_AT(c, 0xd43e4u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2CCu)), 0x0u);
L_d43ee:
    X86_TICK(c, 25);
    // 0d43ee  mov eax, 0xa1cbc
    X86_AT(c, 0xd43eeu);
    c.r[0] = 0xA1CBCu;
    // 0d43f3  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xd43f3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d43f6  lea edx, [edx + edx*4]
    X86_AT(c, 0xd43f6u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0d43f9  lea edx, [edx*4]
    X86_AT(c, 0xd43f9u);
    c.r[2] = (uint32_t)(c.r[2] * 4);
    // 0d4400  mov ecx, 0xffffffff
    X86_AT(c, 0xd4400u);
    c.r[1] = 0xFFFFFFFFu;
    // 0d4405  mov dword ptr [eax + edx*1], ecx
    X86_AT(c, 0xd4405u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2])), c.r[1]);
    // 0d4408  mov dword ptr [eax + edx*1 + 4], ecx
    X86_AT(c, 0xd4408u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x4u)), c.r[1]);
    // 0d440c  mov dword ptr [eax + edx*1 + 8], ecx
    X86_AT(c, 0xd440cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x8u)), c.r[1]);
    // 0d4410  cmp esi, 0x11
    X86_AT(c, 0xd4410u);
    (void)x86_sub(c, c.r[6], 0x11u, 0, 4);
    // 0d4413  jne 0xd4421
    X86_AT(c, 0xd4413u);
    if (x86_cc(c, 5)) { goto L_d4421; }
    X86_TICK(c, 14);
    // 0d4415  add dword ptr [0xb031e], 0xe
    X86_AT(c, 0xd4415u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xEu, 0, 4)); }
    // 0d441c  call 0xcc6b0
    X86_AT(c, 0xd441cu);
    push32(c, 0xd4421u); x86_call_known(c, 0xcc6b0u, f_000cc6b0); X86_RET(c, 0xd4421u);
L_d4421:
    X86_TICK(c, 7);
    // 0d4421  cmp esi, 0x13
    X86_AT(c, 0xd4421u);
    (void)x86_sub(c, c.r[6], 0x13u, 0, 4);
    // 0d4424  jne 0xd4485
    X86_AT(c, 0xd4424u);
    if (x86_cc(c, 5)) { goto L_d4485; }
    X86_TICK(c, 12);
    // 0d4426  cmp dword ptr [0xb52f8], 2
    X86_AT(c, 0xd4426u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x2u, 0, 4);
    // 0d442d  jne 0xd4485
    X86_AT(c, 0xd442du);
    if (x86_cc(c, 5)) { goto L_d4485; }
    X86_TICK(c, 9);
    // 0d442f  push 0x8f80
    X86_AT(c, 0xd442fu);
    { uint32_t v = 0x8F80u; push32(c, v); }
    // 0d4434  call 0xcc7bc
    X86_AT(c, 0xd4434u);
    push32(c, 0xd4439u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd4439u);
    X86_TICK(c, 2);
    // 0d4439  mov dword ptr [0xaa2d0], 1
    X86_AT(c, 0xd4439u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2D0u)), 0x1u);
L_d4443:
    X86_TICK(c, 9);
    // 0d4443  add esp, 4
    X86_AT(c, 0xd4443u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d4446  jmp 0xd4485
    X86_AT(c, 0xd4446u);
    goto L_d4485;
L_d4448:
    X86_TICK(c, 7);
    // 0d4448  cmp esi, 0x14
    X86_AT(c, 0xd4448u);
    (void)x86_sub(c, c.r[6], 0x14u, 0, 4);
    // 0d444b  jne 0xd4456
    X86_AT(c, 0xd444bu);
    if (x86_cc(c, 5)) { goto L_d4456; }
    X86_TICK(c, 12);
    // 0d444d  cmp dword ptr [0xaa2d4], 0
    X86_AT(c, 0xd444du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2D4u))), 0x0u, 0, 4);
    // 0d4454  jne 0xd446c
    X86_AT(c, 0xd4454u);
    if (x86_cc(c, 5)) { goto L_d446c; }
L_d4456:
    X86_TICK(c, 19);
    // 0d4456  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd4456u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d4459  lea eax, [eax + eax*4]
    X86_AT(c, 0xd4459u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d445c  lea eax, [eax*4]
    X86_AT(c, 0xd445cu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d4463  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd4463u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d4466  sub dword ptr [eax + 0xa1cc8], edx
    X86_AT(c, 0xd4466u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC8u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], 0, 4)); }
L_d446c:
    X86_TICK(c, 16);
    // 0d446c  push 3
    X86_AT(c, 0xd446cu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d446e  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xd446eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0d4471  push 7
    X86_AT(c, 0xd4471u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4473  call 0xc8cb8
    X86_AT(c, 0xd4473u);
    push32(c, 0xd4478u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd4478u);
    X86_TICK(c, 9);
    // 0d4478  push 0x8fc8
    X86_AT(c, 0xd4478u);
    { uint32_t v = 0x8FC8u; push32(c, v); }
    // 0d447d  call 0xcc7bc
    X86_AT(c, 0xd447du);
    push32(c, 0xd4482u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd4482u);
    X86_TICK(c, 2);
    // 0d4482  add esp, 0x10
    X86_AT(c, 0xd4482u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d4485:
    X86_TICK(c, 28);
    // 0d4485  pop edi
    X86_AT(c, 0xd4485u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d4486  pop esi
    X86_AT(c, 0xd4486u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d4487  pop ebx
    X86_AT(c, 0xd4487u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d4488  leave 
    X86_AT(c, 0xd4488u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4489  ret 
    X86_AT(c, 0xd4489u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd41c0u, "ran off the end of a function");
}
void f_000d448c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d448c  push ebp
    X86_AT(c, 0xd448cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d448d  mov ebp, esp
    X86_AT(c, 0xd448du);
    c.r[5] = c.r[4];
    // 0d448f  push eax
    X86_AT(c, 0xd448fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4490  push ebx
    X86_AT(c, 0xd4490u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d4491  push esi
    X86_AT(c, 0xd4491u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d4492  push edi
    X86_AT(c, 0xd4492u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d4493  movzx edx, byte ptr [ebp + 8]
    X86_AT(c, 0xd4493u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d4497  sub edx, 3
    X86_AT(c, 0xd4497u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0d449a  cmp edx, 4
    X86_AT(c, 0xd449au);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0d449d  ja 0xd44e5
    X86_AT(c, 0xd449du);
    if (x86_cc(c, 7)) { goto L_d44e5; }
    X86_TICK(c, 7);
    // 0d449f  jmp dword ptr cs:[edx*4 + 0xd44a7]
    X86_AT(c, 0xd449fu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD44A7u)));
      switch (t) {
      case 0xd44bbu: goto L_d44bb;
      case 0xd44c6u: goto L_d44c6;
      case 0xd44d1u: goto L_d44d1;
      case 0xd44dcu: goto L_d44dc;
      case 0xd44e5u: goto L_d44e5;
      default: x86_jump(c, t); return; } }
L_d44bb:
    X86_TICK(c, 13);
    // 0d44bb  mov esi, 0xffffffff
    X86_AT(c, 0xd44bbu);
    c.r[6] = 0xFFFFFFFFu;
    // 0d44c0  sub edi, edi
    X86_AT(c, 0xd44c0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d44c2  mov bl, 5
    X86_AT(c, 0xd44c2u);
    s8(c, 3, 0x5u);
    // 0d44c4  jmp 0xd44e5
    X86_AT(c, 0xd44c4u);
    goto L_d44e5;
L_d44c6:
    X86_TICK(c, 13);
    // 0d44c6  mov esi, 1
    X86_AT(c, 0xd44c6u);
    c.r[6] = 0x1u;
    // 0d44cb  sub edi, edi
    X86_AT(c, 0xd44cbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d44cd  mov bl, 6
    X86_AT(c, 0xd44cdu);
    s8(c, 3, 0x6u);
    // 0d44cf  jmp 0xd44e5
    X86_AT(c, 0xd44cfu);
    goto L_d44e5;
L_d44d1:
    X86_TICK(c, 13);
    // 0d44d1  sub esi, esi
    X86_AT(c, 0xd44d1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d44d3  mov edi, 1
    X86_AT(c, 0xd44d3u);
    c.r[7] = 0x1u;
    // 0d44d8  mov bl, 7
    X86_AT(c, 0xd44d8u);
    s8(c, 3, 0x7u);
    // 0d44da  jmp 0xd44e5
    X86_AT(c, 0xd44dau);
    goto L_d44e5;
L_d44dc:
    X86_TICK(c, 6);
    // 0d44dc  sub esi, esi
    X86_AT(c, 0xd44dcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d44de  mov edi, 0xffffffff
    X86_AT(c, 0xd44deu);
    c.r[7] = 0xFFFFFFFFu;
    // 0d44e3  mov bl, 3
    X86_AT(c, 0xd44e3u);
    s8(c, 3, 0x3u);
L_d44e5:
    X86_TICK(c, 12);
    // 0d44e5  cmp dword ptr [0xb52f8], 2
    X86_AT(c, 0xd44e5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x2u, 0, 4);
    // 0d44ec  jne 0xd450b
    X86_AT(c, 0xd44ecu);
    if (x86_cc(c, 5)) { goto L_d450b; }
    X86_TICK(c, 7);
    // 0d44ee  call 0xd3b80
    X86_AT(c, 0xd44eeu);
    push32(c, 0xd44f3u); x86_call_known(c, 0xd3b80u, f_000d3b80); X86_RET(c, 0xd44f3u);
    X86_TICK(c, 7);
    // 0d44f3  and eax, eax
    X86_AT(c, 0xd44f3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d44f5  je 0xd450b
    X86_AT(c, 0xd44f5u);
    if (x86_cc(c, 4)) { goto L_d450b; }
    X86_TICK(c, 7);
    // 0d44f7  call 0xd48d4
    X86_AT(c, 0xd44f7u);
    push32(c, 0xd44fcu); x86_call_known(c, 0xd48d4u, f_000d48d4); X86_RET(c, 0xd44fcu);
    X86_TICK(c, 9);
    // 0d44fc  mov dword ptr [0xb52f8], 6
    X86_AT(c, 0xd44fcu);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x6u);
    // 0d4506  jmp 0xd4583
    X86_AT(c, 0xd4506u);
    goto L_d4583;
L_d450b:
    X86_TICK(c, 27);
    // 0d450b  mov eax, esi
    X86_AT(c, 0xd450bu);
    c.r[0] = c.r[6];
    // 0d450d  add eax, dword ptr [0xb033e]
    X86_AT(c, 0xd450du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Eu))), 0, 4); }
    // 0d4513  push eax
    X86_AT(c, 0xd4513u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4514  mov eax, edi
    X86_AT(c, 0xd4514u);
    c.r[0] = c.r[7];
    // 0d4516  add eax, dword ptr [0xb033a]
    X86_AT(c, 0xd4516u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Au))), 0, 4); }
    // 0d451c  push eax
    X86_AT(c, 0xd451cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d451d  call 0xd3ab4
    X86_AT(c, 0xd451du);
    push32(c, 0xd4522u); x86_call_known(c, 0xd3ab4u, f_000d3ab4); X86_RET(c, 0xd4522u);
    X86_TICK(c, 11);
    // 0d4522  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd4522u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d4525  add esp, 8
    X86_AT(c, 0xd4525u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d4528  cmp eax, 0xffffffff
    X86_AT(c, 0xd4528u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0d452b  je 0xd4532
    X86_AT(c, 0xd452bu);
    if (x86_cc(c, 4)) { goto L_d4532; }
    X86_TICK(c, 7);
    // 0d452d  cmp eax, 0x3f
    X86_AT(c, 0xd452du);
    (void)x86_sub(c, c.r[0], 0x3Fu, 0, 4);
    // 0d4530  jne 0xd456f
    X86_AT(c, 0xd4530u);
    if (x86_cc(c, 5)) { goto L_d456f; }
L_d4532:
    X86_TICK(c, 20);
    // 0d4532  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0xd4532u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d4536  push dword ptr [eax*4 + 0xaa274]
    X86_AT(c, 0xd4536u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAA274u))); push32(c, v); }
    // 0d453d  push 7
    X86_AT(c, 0xd453du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d453f  call 0xc8cdc
    X86_AT(c, 0xd453fu);
    push32(c, 0xd4544u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4544u);
    X86_TICK(c, 9);
    // 0d4544  push 0x8ff0
    X86_AT(c, 0xd4544u);
    { uint32_t v = 0x8FF0u; push32(c, v); }
    // 0d4549  call 0xcc7bc
    X86_AT(c, 0xd4549u);
    push32(c, 0xd454eu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd454eu);
    X86_TICK(c, 13);
    // 0d454e  push ebx
    X86_AT(c, 0xd454eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d454f  push 0xb033e
    X86_AT(c, 0xd454fu);
    { uint32_t v = 0xB033Eu; push32(c, v); }
    // 0d4554  push 0xb033a
    X86_AT(c, 0xd4554u);
    { uint32_t v = 0xB033Au; push32(c, v); }
    // 0d4559  call 0xcbda0
    X86_AT(c, 0xd4559u);
    push32(c, 0xd455eu); x86_call_known(c, 0xcbda0u, f_000cbda0); X86_RET(c, 0xd455eu);
    X86_TICK(c, 23);
    // 0d455e  add dword ptr [0xb2304], edi
    X86_AT(c, 0xd455eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB2304u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0d4564  add dword ptr [0xb2308], esi
    X86_AT(c, 0xd4564u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB2308u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d456a  add esp, 0x18
    X86_AT(c, 0xd456au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d456d  jmp 0xd4583
    X86_AT(c, 0xd456du);
    goto L_d4583;
L_d456f:
    X86_TICK(c, 9);
    // 0d456f  push 0x8ff8
    X86_AT(c, 0xd456fu);
    { uint32_t v = 0x8FF8u; push32(c, v); }
    // 0d4574  call 0xcc7bc
    X86_AT(c, 0xd4574u);
    push32(c, 0xd4579u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd4579u);
    X86_TICK(c, 9);
    // 0d4579  push 1
    X86_AT(c, 0xd4579u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d457b  call 0xc5ca4
    X86_AT(c, 0xd457bu);
    push32(c, 0xd4580u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd4580u);
    X86_TICK(c, 2);
    // 0d4580  add esp, 8
    X86_AT(c, 0xd4580u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d4583:
    X86_TICK(c, 28);
    // 0d4583  pop edi
    X86_AT(c, 0xd4583u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d4584  pop esi
    X86_AT(c, 0xd4584u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d4585  pop ebx
    X86_AT(c, 0xd4585u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d4586  leave 
    X86_AT(c, 0xd4586u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4587  ret 
    X86_AT(c, 0xd4587u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd448cu, "ran off the end of a function");
}
void f_000d4588(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d4588  push ebp
    X86_AT(c, 0xd4588u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d4589  mov ebp, esp
    X86_AT(c, 0xd4589u);
    c.r[5] = c.r[4];
    // 0d458b  push 3
    X86_AT(c, 0xd458bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d458d  call 0xca0a0
    X86_AT(c, 0xd458du);
    push32(c, 0xd4592u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd4592u);
    X86_TICK(c, 13);
    // 0d4592  add esp, 4
    X86_AT(c, 0xd4592u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d4595  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xd4595u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d4598  cmp edx, 7
    X86_AT(c, 0xd4598u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0d459b  ja 0xd462b
    X86_AT(c, 0xd459bu);
    if (x86_cc(c, 7)) { goto L_d462b; }
    X86_TICK(c, 7);
    // 0d45a1  jmp dword ptr cs:[edx*4 + 0xd45a9]
    X86_AT(c, 0xd45a1u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD45A9u)));
      switch (t) {
      case 0xd45c9u: goto L_d45c9;
      case 0xd45eau: goto L_d45ea;
      case 0xd45f1u: goto L_d45f1;
      case 0xd4602u: goto L_d4602;
      case 0xd462bu: goto L_d462b;
      default: x86_jump(c, t); return; } }
L_d45c9:
    X86_TICK(c, 11);
    // 0d45c9  push 0x9014
    X86_AT(c, 0xd45c9u);
    { uint32_t v = 0x9014u; push32(c, v); }
    // 0d45ce  push 3
    X86_AT(c, 0xd45ceu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d45d0  call 0xc8cdc
    X86_AT(c, 0xd45d0u);
    push32(c, 0xd45d5u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd45d5u);
    X86_TICK(c, 9);
    // 0d45d5  push 0x32
    X86_AT(c, 0xd45d5u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0d45d7  call 0xd6660
    X86_AT(c, 0xd45d7u);
    push32(c, 0xd45dcu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd45dcu);
    X86_TICK(c, 9);
    // 0d45dc  push 3
    X86_AT(c, 0xd45dcu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d45de  call 0xca3cc
    X86_AT(c, 0xd45deu);
    push32(c, 0xd45e3u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd45e3u);
    X86_TICK(c, 9);
    // 0d45e3  push 0x904c
    X86_AT(c, 0xd45e3u);
    { uint32_t v = 0x904Cu; push32(c, v); }
    // 0d45e8  jmp 0xd4621
    X86_AT(c, 0xd45e8u);
    goto L_d4621;
L_d45ea:
    X86_TICK(c, 9);
    // 0d45ea  push 0x907c
    X86_AT(c, 0xd45eau);
    { uint32_t v = 0x907Cu; push32(c, v); }
    // 0d45ef  jmp 0xd45f6
    X86_AT(c, 0xd45efu);
    goto L_d45f6;
L_d45f1:
    X86_TICK(c, 2);
    // 0d45f1  push 0x90b4
    X86_AT(c, 0xd45f1u);
    { uint32_t v = 0x90B4u; push32(c, v); }
L_d45f6:
    X86_TICK(c, 9);
    // 0d45f6  push 3
    X86_AT(c, 0xd45f6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d45f8  call 0xc8cdc
    X86_AT(c, 0xd45f8u);
    push32(c, 0xd45fdu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd45fdu);
    X86_TICK(c, 9);
    // 0d45fd  add esp, 8
    X86_AT(c, 0xd45fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d4600  jmp 0xd462b
    X86_AT(c, 0xd4600u);
    goto L_d462b;
L_d4602:
    X86_TICK(c, 11);
    // 0d4602  push 0x90f0
    X86_AT(c, 0xd4602u);
    { uint32_t v = 0x90F0u; push32(c, v); }
    // 0d4607  push 3
    X86_AT(c, 0xd4607u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4609  call 0xc8cdc
    X86_AT(c, 0xd4609u);
    push32(c, 0xd460eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd460eu);
    X86_TICK(c, 9);
    // 0d460e  push 0x32
    X86_AT(c, 0xd460eu);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0d4610  call 0xd6660
    X86_AT(c, 0xd4610u);
    push32(c, 0xd4615u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd4615u);
    X86_TICK(c, 9);
    // 0d4615  push 3
    X86_AT(c, 0xd4615u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4617  call 0xca3cc
    X86_AT(c, 0xd4617u);
    push32(c, 0xd461cu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd461cu);
    X86_TICK(c, 2);
    // 0d461c  push 0x912c
    X86_AT(c, 0xd461cu);
    { uint32_t v = 0x912Cu; push32(c, v); }
L_d4621:
    X86_TICK(c, 9);
    // 0d4621  push 3
    X86_AT(c, 0xd4621u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4623  call 0xc8cdc
    X86_AT(c, 0xd4623u);
    push32(c, 0xd4628u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4628u);
    X86_TICK(c, 2);
    // 0d4628  add esp, 0x18
    X86_AT(c, 0xd4628u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
L_d462b:
    X86_TICK(c, 18);
    // 0d462b  mov eax, 1
    X86_AT(c, 0xd462bu);
    c.r[0] = 0x1u;
    // 0d4630  leave 
    X86_AT(c, 0xd4630u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4631  ret 
    X86_AT(c, 0xd4631u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4588u, "ran off the end of a function");
}
void f_000d4634(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d4634  push ebp
    X86_AT(c, 0xd4634u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d4635  mov ebp, esp
    X86_AT(c, 0xd4635u);
    c.r[5] = c.r[4];
    // 0d4637  push 3
    X86_AT(c, 0xd4637u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4639  call 0xca0a0
    X86_AT(c, 0xd4639u);
    push32(c, 0xd463eu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd463eu);
    X86_TICK(c, 13);
    // 0d463e  add esp, 4
    X86_AT(c, 0xd463eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d4641  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xd4641u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d4644  cmp edx, 7
    X86_AT(c, 0xd4644u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0d4647  ja 0xd46cb
    X86_AT(c, 0xd4647u);
    if (x86_cc(c, 7)) { goto L_d46cb; }
    X86_TICK(c, 7);
    // 0d464d  jmp dword ptr cs:[edx*4 + 0xd4655]
    X86_AT(c, 0xd464du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD4655u)));
      switch (t) {
      case 0xd4675u: goto L_d4675;
      case 0xd46a0u: goto L_d46a0;
      case 0xd46a7u: goto L_d46a7;
      case 0xd46aeu: goto L_d46ae;
      case 0xd46b5u: goto L_d46b5;
      case 0xd46bcu: goto L_d46bc;
      case 0xd46cbu: goto L_d46cb;
      default: x86_jump(c, t); return; } }
L_d4675:
    X86_TICK(c, 11);
    // 0d4675  push 0x9158
    X86_AT(c, 0xd4675u);
    { uint32_t v = 0x9158u; push32(c, v); }
    // 0d467a  push 3
    X86_AT(c, 0xd467au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d467c  call 0xc8cdc
    X86_AT(c, 0xd467cu);
    push32(c, 0xd4681u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4681u);
    X86_TICK(c, 9);
    // 0d4681  push 0x32
    X86_AT(c, 0xd4681u);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0d4683  call 0xd6660
    X86_AT(c, 0xd4683u);
    push32(c, 0xd4688u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd4688u);
    X86_TICK(c, 9);
    // 0d4688  push 3
    X86_AT(c, 0xd4688u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d468a  call 0xca3cc
    X86_AT(c, 0xd468au);
    push32(c, 0xd468fu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd468fu);
    X86_TICK(c, 11);
    // 0d468f  push 0x918c
    X86_AT(c, 0xd468fu);
    { uint32_t v = 0x918Cu; push32(c, v); }
    // 0d4694  push 3
    X86_AT(c, 0xd4694u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4696  call 0xc8cdc
    X86_AT(c, 0xd4696u);
    push32(c, 0xd469bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd469bu);
    X86_TICK(c, 9);
    // 0d469b  add esp, 0x18
    X86_AT(c, 0xd469bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d469e  jmp 0xd46cb
    X86_AT(c, 0xd469eu);
    goto L_d46cb;
L_d46a0:
    X86_TICK(c, 9);
    // 0d46a0  push 0x91c8
    X86_AT(c, 0xd46a0u);
    { uint32_t v = 0x91C8u; push32(c, v); }
    // 0d46a5  jmp 0xd46c1
    X86_AT(c, 0xd46a5u);
    goto L_d46c1;
L_d46a7:
    X86_TICK(c, 9);
    // 0d46a7  push 0x91f8
    X86_AT(c, 0xd46a7u);
    { uint32_t v = 0x91F8u; push32(c, v); }
    // 0d46ac  jmp 0xd46c1
    X86_AT(c, 0xd46acu);
    goto L_d46c1;
L_d46ae:
    X86_TICK(c, 9);
    // 0d46ae  push 0x9228
    X86_AT(c, 0xd46aeu);
    { uint32_t v = 0x9228u; push32(c, v); }
    // 0d46b3  jmp 0xd46c1
    X86_AT(c, 0xd46b3u);
    goto L_d46c1;
L_d46b5:
    X86_TICK(c, 9);
    // 0d46b5  push 0x925c
    X86_AT(c, 0xd46b5u);
    { uint32_t v = 0x925Cu; push32(c, v); }
    // 0d46ba  jmp 0xd46c1
    X86_AT(c, 0xd46bau);
    goto L_d46c1;
L_d46bc:
    X86_TICK(c, 2);
    // 0d46bc  push 0x929c
    X86_AT(c, 0xd46bcu);
    { uint32_t v = 0x929Cu; push32(c, v); }
L_d46c1:
    X86_TICK(c, 9);
    // 0d46c1  push 3
    X86_AT(c, 0xd46c1u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d46c3  call 0xc8cdc
    X86_AT(c, 0xd46c3u);
    push32(c, 0xd46c8u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd46c8u);
    X86_TICK(c, 2);
    // 0d46c8  add esp, 8
    X86_AT(c, 0xd46c8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d46cb:
    X86_TICK(c, 16);
    // 0d46cb  leave 
    X86_AT(c, 0xd46cbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d46cc  ret 
    X86_AT(c, 0xd46ccu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4634u, "ran off the end of a function");
}
void f_000d46d0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d46d0  push ebp
    X86_AT(c, 0xd46d0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d46d1  mov ebp, esp
    X86_AT(c, 0xd46d1u);
    c.r[5] = c.r[4];
    // 0d46d3  push 3
    X86_AT(c, 0xd46d3u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d46d5  call 0xca0a0
    X86_AT(c, 0xd46d5u);
    push32(c, 0xd46dau); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd46dau);
    X86_TICK(c, 13);
    // 0d46da  add esp, 4
    X86_AT(c, 0xd46dau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d46dd  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xd46ddu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d46e0  cmp edx, 7
    X86_AT(c, 0xd46e0u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0d46e3  ja 0xd4775
    X86_AT(c, 0xd46e3u);
    if (x86_cc(c, 7)) { goto L_d4775; }
    X86_TICK(c, 7);
    // 0d46e9  jmp dword ptr cs:[edx*4 + 0xd46f1]
    X86_AT(c, 0xd46e9u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD46F1u)));
      switch (t) {
      case 0xd4711u: goto L_d4711;
      case 0xd473cu: goto L_d473c;
      case 0xd4743u: goto L_d4743;
      case 0xd474au: goto L_d474a;
      case 0xd4751u: goto L_d4751;
      case 0xd4758u: goto L_d4758;
      case 0xd475fu: goto L_d475f;
      case 0xd4766u: goto L_d4766;
      default: x86_jump(c, t); return; } }
L_d4711:
    X86_TICK(c, 11);
    // 0d4711  push 0x92d0
    X86_AT(c, 0xd4711u);
    { uint32_t v = 0x92D0u; push32(c, v); }
    // 0d4716  push 3
    X86_AT(c, 0xd4716u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4718  call 0xc8cdc
    X86_AT(c, 0xd4718u);
    push32(c, 0xd471du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd471du);
    X86_TICK(c, 9);
    // 0d471d  push 0x32
    X86_AT(c, 0xd471du);
    { uint32_t v = 0x32u; push32(c, v); }
    // 0d471f  call 0xd6660
    X86_AT(c, 0xd471fu);
    push32(c, 0xd4724u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd4724u);
    X86_TICK(c, 9);
    // 0d4724  push 3
    X86_AT(c, 0xd4724u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4726  call 0xca3cc
    X86_AT(c, 0xd4726u);
    push32(c, 0xd472bu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd472bu);
    X86_TICK(c, 11);
    // 0d472b  push 0x9304
    X86_AT(c, 0xd472bu);
    { uint32_t v = 0x9304u; push32(c, v); }
    // 0d4730  push 3
    X86_AT(c, 0xd4730u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4732  call 0xc8cdc
    X86_AT(c, 0xd4732u);
    push32(c, 0xd4737u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4737u);
    X86_TICK(c, 9);
    // 0d4737  add esp, 0x18
    X86_AT(c, 0xd4737u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d473a  jmp 0xd4775
    X86_AT(c, 0xd473au);
    goto L_d4775;
L_d473c:
    X86_TICK(c, 9);
    // 0d473c  push 0x9340
    X86_AT(c, 0xd473cu);
    { uint32_t v = 0x9340u; push32(c, v); }
    // 0d4741  jmp 0xd476b
    X86_AT(c, 0xd4741u);
    goto L_d476b;
L_d4743:
    X86_TICK(c, 9);
    // 0d4743  push 0x9374
    X86_AT(c, 0xd4743u);
    { uint32_t v = 0x9374u; push32(c, v); }
    // 0d4748  jmp 0xd476b
    X86_AT(c, 0xd4748u);
    goto L_d476b;
L_d474a:
    X86_TICK(c, 9);
    // 0d474a  push 0x93a8
    X86_AT(c, 0xd474au);
    { uint32_t v = 0x93A8u; push32(c, v); }
    // 0d474f  jmp 0xd476b
    X86_AT(c, 0xd474fu);
    goto L_d476b;
L_d4751:
    X86_TICK(c, 9);
    // 0d4751  push 0x93e0
    X86_AT(c, 0xd4751u);
    { uint32_t v = 0x93E0u; push32(c, v); }
    // 0d4756  jmp 0xd476b
    X86_AT(c, 0xd4756u);
    goto L_d476b;
L_d4758:
    X86_TICK(c, 9);
    // 0d4758  push 0x9414
    X86_AT(c, 0xd4758u);
    { uint32_t v = 0x9414u; push32(c, v); }
    // 0d475d  jmp 0xd476b
    X86_AT(c, 0xd475du);
    goto L_d476b;
L_d475f:
    X86_TICK(c, 9);
    // 0d475f  push 0x9444
    X86_AT(c, 0xd475fu);
    { uint32_t v = 0x9444u; push32(c, v); }
    // 0d4764  jmp 0xd476b
    X86_AT(c, 0xd4764u);
    goto L_d476b;
L_d4766:
    X86_TICK(c, 2);
    // 0d4766  push 0x9474
    X86_AT(c, 0xd4766u);
    { uint32_t v = 0x9474u; push32(c, v); }
L_d476b:
    X86_TICK(c, 9);
    // 0d476b  push 3
    X86_AT(c, 0xd476bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d476d  call 0xc8cdc
    X86_AT(c, 0xd476du);
    push32(c, 0xd4772u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4772u);
    X86_TICK(c, 2);
    // 0d4772  add esp, 8
    X86_AT(c, 0xd4772u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d4775:
    X86_TICK(c, 16);
    // 0d4775  leave 
    X86_AT(c, 0xd4775u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4776  ret 
    X86_AT(c, 0xd4776u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd46d0u, "ran off the end of a function");
}
void f_000d4778(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d4778  push ebp
    X86_AT(c, 0xd4778u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d4779  mov ebp, esp
    X86_AT(c, 0xd4779u);
    c.r[5] = c.r[4];
    // 0d477b  push 3
    X86_AT(c, 0xd477bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d477d  call 0xca0a0
    X86_AT(c, 0xd477du);
    push32(c, 0xd4782u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd4782u);
    X86_TICK(c, 13);
    // 0d4782  add esp, 4
    X86_AT(c, 0xd4782u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d4785  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xd4785u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d4788  cmp edx, 7
    X86_AT(c, 0xd4788u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0d478b  ja 0xd47e0
    X86_AT(c, 0xd478bu);
    if (x86_cc(c, 7)) { goto L_d47e0; }
    X86_TICK(c, 7);
    // 0d478d  jmp dword ptr cs:[edx*4 + 0xd4795]
    X86_AT(c, 0xd478du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD4795u)));
      switch (t) {
      case 0xd47b5u: goto L_d47b5;
      case 0xd47bcu: goto L_d47bc;
      case 0xd47c3u: goto L_d47c3;
      case 0xd47cau: goto L_d47ca;
      case 0xd47d1u: goto L_d47d1;
      case 0xd47e0u: goto L_d47e0;
      default: x86_jump(c, t); return; } }
L_d47b5:
    X86_TICK(c, 9);
    // 0d47b5  push 0x94ac
    X86_AT(c, 0xd47b5u);
    { uint32_t v = 0x94ACu; push32(c, v); }
    // 0d47ba  jmp 0xd47d6
    X86_AT(c, 0xd47bau);
    goto L_d47d6;
L_d47bc:
    X86_TICK(c, 9);
    // 0d47bc  push 0x94e4
    X86_AT(c, 0xd47bcu);
    { uint32_t v = 0x94E4u; push32(c, v); }
    // 0d47c1  jmp 0xd47d6
    X86_AT(c, 0xd47c1u);
    goto L_d47d6;
L_d47c3:
    X86_TICK(c, 9);
    // 0d47c3  push 0x9518
    X86_AT(c, 0xd47c3u);
    { uint32_t v = 0x9518u; push32(c, v); }
    // 0d47c8  jmp 0xd47d6
    X86_AT(c, 0xd47c8u);
    goto L_d47d6;
L_d47ca:
    X86_TICK(c, 9);
    // 0d47ca  push 0x9548
    X86_AT(c, 0xd47cau);
    { uint32_t v = 0x9548u; push32(c, v); }
    // 0d47cf  jmp 0xd47d6
    X86_AT(c, 0xd47cfu);
    goto L_d47d6;
L_d47d1:
    X86_TICK(c, 2);
    // 0d47d1  push 0x9588
    X86_AT(c, 0xd47d1u);
    { uint32_t v = 0x9588u; push32(c, v); }
L_d47d6:
    X86_TICK(c, 9);
    // 0d47d6  push 3
    X86_AT(c, 0xd47d6u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d47d8  call 0xc8cdc
    X86_AT(c, 0xd47d8u);
    push32(c, 0xd47ddu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd47ddu);
    X86_TICK(c, 2);
    // 0d47dd  add esp, 8
    X86_AT(c, 0xd47ddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d47e0:
    X86_TICK(c, 16);
    // 0d47e0  leave 
    X86_AT(c, 0xd47e0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d47e1  ret 
    X86_AT(c, 0xd47e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4778u, "ran off the end of a function");
}
void f_000d47e4(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d47e4  push ebp
    X86_AT(c, 0xd47e4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d47e5  mov ebp, esp
    X86_AT(c, 0xd47e5u);
    c.r[5] = c.r[4];
    // 0d47e7  push 3
    X86_AT(c, 0xd47e7u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d47e9  call 0xca0a0
    X86_AT(c, 0xd47e9u);
    push32(c, 0xd47eeu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd47eeu);
    X86_TICK(c, 13);
    // 0d47ee  add esp, 4
    X86_AT(c, 0xd47eeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d47f1  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xd47f1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d47f4  cmp edx, 7
    X86_AT(c, 0xd47f4u);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0d47f7  ja 0xd485a
    X86_AT(c, 0xd47f7u);
    if (x86_cc(c, 7)) { goto L_d485a; }
    X86_TICK(c, 7);
    // 0d47f9  jmp dword ptr cs:[edx*4 + 0xd4801]
    X86_AT(c, 0xd47f9u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD4801u)));
      switch (t) {
      case 0xd4821u: goto L_d4821;
      case 0xd4828u: goto L_d4828;
      case 0xd482fu: goto L_d482f;
      case 0xd4836u: goto L_d4836;
      case 0xd483du: goto L_d483d;
      case 0xd4844u: goto L_d4844;
      case 0xd484bu: goto L_d484b;
      case 0xd485au: goto L_d485a;
      default: x86_jump(c, t); return; } }
L_d4821:
    X86_TICK(c, 9);
    // 0d4821  push 0x95bc
    X86_AT(c, 0xd4821u);
    { uint32_t v = 0x95BCu; push32(c, v); }
    // 0d4826  jmp 0xd4850
    X86_AT(c, 0xd4826u);
    goto L_d4850;
L_d4828:
    X86_TICK(c, 9);
    // 0d4828  push 0x95fc
    X86_AT(c, 0xd4828u);
    { uint32_t v = 0x95FCu; push32(c, v); }
    // 0d482d  jmp 0xd4850
    X86_AT(c, 0xd482du);
    goto L_d4850;
L_d482f:
    X86_TICK(c, 9);
    // 0d482f  push 0x9638
    X86_AT(c, 0xd482fu);
    { uint32_t v = 0x9638u; push32(c, v); }
    // 0d4834  jmp 0xd4850
    X86_AT(c, 0xd4834u);
    goto L_d4850;
L_d4836:
    X86_TICK(c, 9);
    // 0d4836  push 0x9668
    X86_AT(c, 0xd4836u);
    { uint32_t v = 0x9668u; push32(c, v); }
    // 0d483b  jmp 0xd4850
    X86_AT(c, 0xd483bu);
    goto L_d4850;
L_d483d:
    X86_TICK(c, 9);
    // 0d483d  push 0x96a0
    X86_AT(c, 0xd483du);
    { uint32_t v = 0x96A0u; push32(c, v); }
    // 0d4842  jmp 0xd4850
    X86_AT(c, 0xd4842u);
    goto L_d4850;
L_d4844:
    X86_TICK(c, 9);
    // 0d4844  push 0x96d4
    X86_AT(c, 0xd4844u);
    { uint32_t v = 0x96D4u; push32(c, v); }
    // 0d4849  jmp 0xd4850
    X86_AT(c, 0xd4849u);
    goto L_d4850;
L_d484b:
    X86_TICK(c, 2);
    // 0d484b  push 0x9714
    X86_AT(c, 0xd484bu);
    { uint32_t v = 0x9714u; push32(c, v); }
L_d4850:
    X86_TICK(c, 9);
    // 0d4850  push 3
    X86_AT(c, 0xd4850u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4852  call 0xc8cdc
    X86_AT(c, 0xd4852u);
    push32(c, 0xd4857u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4857u);
    X86_TICK(c, 2);
    // 0d4857  add esp, 8
    X86_AT(c, 0xd4857u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d485a:
    X86_TICK(c, 16);
    // 0d485a  leave 
    X86_AT(c, 0xd485au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d485b  ret 
    X86_AT(c, 0xd485bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd47e4u, "ran off the end of a function");
}
void f_000d485c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d485c  push ebp
    X86_AT(c, 0xd485cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d485d  mov ebp, esp
    X86_AT(c, 0xd485du);
    c.r[5] = c.r[4];
    // 0d485f  push 3
    X86_AT(c, 0xd485fu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4861  call 0xca0a0
    X86_AT(c, 0xd4861u);
    push32(c, 0xd4866u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd4866u);
    X86_TICK(c, 13);
    // 0d4866  add esp, 4
    X86_AT(c, 0xd4866u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d4869  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xd4869u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d486c  cmp edx, 7
    X86_AT(c, 0xd486cu);
    (void)x86_sub(c, c.r[2], 0x7u, 0, 4);
    // 0d486f  ja 0xd48d2
    X86_AT(c, 0xd486fu);
    if (x86_cc(c, 7)) { goto L_d48d2; }
    X86_TICK(c, 7);
    // 0d4871  jmp dword ptr cs:[edx*4 + 0xd4879]
    X86_AT(c, 0xd4871u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD4879u)));
      switch (t) {
      case 0xd4899u: goto L_d4899;
      case 0xd48a0u: goto L_d48a0;
      case 0xd48a7u: goto L_d48a7;
      case 0xd48aeu: goto L_d48ae;
      case 0xd48b5u: goto L_d48b5;
      case 0xd48bcu: goto L_d48bc;
      case 0xd48c3u: goto L_d48c3;
      case 0xd48d2u: goto L_d48d2;
      default: x86_jump(c, t); return; } }
L_d4899:
    X86_TICK(c, 9);
    // 0d4899  push 0x9750
    X86_AT(c, 0xd4899u);
    { uint32_t v = 0x9750u; push32(c, v); }
    // 0d489e  jmp 0xd48c8
    X86_AT(c, 0xd489eu);
    goto L_d48c8;
L_d48a0:
    X86_TICK(c, 9);
    // 0d48a0  push 0x977c
    X86_AT(c, 0xd48a0u);
    { uint32_t v = 0x977Cu; push32(c, v); }
    // 0d48a5  jmp 0xd48c8
    X86_AT(c, 0xd48a5u);
    goto L_d48c8;
L_d48a7:
    X86_TICK(c, 9);
    // 0d48a7  push 0x97b0
    X86_AT(c, 0xd48a7u);
    { uint32_t v = 0x97B0u; push32(c, v); }
    // 0d48ac  jmp 0xd48c8
    X86_AT(c, 0xd48acu);
    goto L_d48c8;
L_d48ae:
    X86_TICK(c, 9);
    // 0d48ae  push 0x97e0
    X86_AT(c, 0xd48aeu);
    { uint32_t v = 0x97E0u; push32(c, v); }
    // 0d48b3  jmp 0xd48c8
    X86_AT(c, 0xd48b3u);
    goto L_d48c8;
L_d48b5:
    X86_TICK(c, 9);
    // 0d48b5  push 0x9810
    X86_AT(c, 0xd48b5u);
    { uint32_t v = 0x9810u; push32(c, v); }
    // 0d48ba  jmp 0xd48c8
    X86_AT(c, 0xd48bau);
    goto L_d48c8;
L_d48bc:
    X86_TICK(c, 9);
    // 0d48bc  push 0x9840
    X86_AT(c, 0xd48bcu);
    { uint32_t v = 0x9840u; push32(c, v); }
    // 0d48c1  jmp 0xd48c8
    X86_AT(c, 0xd48c1u);
    goto L_d48c8;
L_d48c3:
    X86_TICK(c, 2);
    // 0d48c3  push 0x9874
    X86_AT(c, 0xd48c3u);
    { uint32_t v = 0x9874u; push32(c, v); }
L_d48c8:
    X86_TICK(c, 9);
    // 0d48c8  push 3
    X86_AT(c, 0xd48c8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d48ca  call 0xc8cdc
    X86_AT(c, 0xd48cau);
    push32(c, 0xd48cfu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd48cfu);
    X86_TICK(c, 2);
    // 0d48cf  add esp, 8
    X86_AT(c, 0xd48cfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d48d2:
    X86_TICK(c, 16);
    // 0d48d2  leave 
    X86_AT(c, 0xd48d2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d48d3  ret 
    X86_AT(c, 0xd48d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd485cu, "ran off the end of a function");
}
void f_000d48d4(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0d48d4  push ebp
    X86_AT(c, 0xd48d4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d48d5  mov ebp, esp
    X86_AT(c, 0xd48d5u);
    c.r[5] = c.r[4];
    // 0d48d7  sub esp, 0x1c
    X86_AT(c, 0xd48d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x1Cu, 0, 4); }
    // 0d48da  push ebx
    X86_AT(c, 0xd48dau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d48db  push esi
    X86_AT(c, 0xd48dbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d48dc  push edi
    X86_AT(c, 0xd48dcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d48dd  sub eax, eax
    X86_AT(c, 0xd48ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d48df  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd48dfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d48e2  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xd48e2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0d48e5  mov dword ptr [ebp - 0x14], 4
    X86_AT(c, 0xd48e5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), 0x4u);
    // 0d48ec  cmp dword ptr [0xb041e], 0x14
    X86_AT(c, 0xd48ecu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB041Eu))), 0x14u, 0, 4);
    // 0d48f3  jl 0xd4905
    X86_AT(c, 0xd48f3u);
    if (x86_cc(c, 12)) { goto L_d4905; }
    X86_TICK(c, 12);
    // 0d48f5  cmp dword ptr [0xb031e], 0x1b58
    X86_AT(c, 0xd48f5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB031Eu))), 0x1B58u, 0, 4);
    // 0d48ff  jl 0xd4905
    X86_AT(c, 0xd48ffu);
    if (x86_cc(c, 12)) { goto L_d4905; }
    X86_TICK(c, 9);
    // 0d4901  mov al, 1
    X86_AT(c, 0xd4901u);
    s8(c, 0, 0x1u);
    // 0d4903  jmp 0xd4907
    X86_AT(c, 0xd4903u);
    goto L_d4907;
L_d4905:
    X86_TICK(c, 2);
    // 0d4905  sub eax, eax
    X86_AT(c, 0xd4905u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_d4907:
    X86_TICK(c, 12);
    // 0d4907  movzx eax, al
    X86_AT(c, 0xd4907u);
    c.r[0] = g8(c, 0);
    // 0d490a  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd490au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d490d  and eax, eax
    X86_AT(c, 0xd490du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d490f  jne 0xd4918
    X86_AT(c, 0xd490fu);
    if (x86_cc(c, 5)) { goto L_d4918; }
    X86_TICK(c, 2);
    // 0d4911  mov dword ptr [ebp - 0x10], 2
    X86_AT(c, 0xd4911u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x2u);
L_d4918:
    X86_TICK(c, 30);
    // 0d4918  push 0xa
    X86_AT(c, 0xd4918u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d491a  push 0xf
    X86_AT(c, 0xd491au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d491c  push 0xf
    X86_AT(c, 0xd491cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d491e  push 0xa
    X86_AT(c, 0xd491eu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d4920  push 0x1f
    X86_AT(c, 0xd4920u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0d4922  push 0xb6
    X86_AT(c, 0xd4922u);
    { uint32_t v = 0xB6u; push32(c, v); }
    // 0d4927  push 0x107
    X86_AT(c, 0xd4927u);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0d492c  push 0x6f
    X86_AT(c, 0xd492cu);
    { uint32_t v = 0x6Fu; push32(c, v); }
    // 0d492e  push 0x172
    X86_AT(c, 0xd492eu);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0d4933  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4933u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d4936  call 0xc9fbc
    X86_AT(c, 0xd4936u);
    push32(c, 0xd493bu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd493bu);
    X86_TICK(c, 9);
    // 0d493b  push 4
    X86_AT(c, 0xd493bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d493d  call 0xca100
    X86_AT(c, 0xd493du);
    push32(c, 0xd4942u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd4942u);
    X86_TICK(c, 9);
    // 0d4942  push 7
    X86_AT(c, 0xd4942u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4944  call 0xca0a0
    X86_AT(c, 0xd4944u);
    push32(c, 0xd4949u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd4949u);
    X86_TICK(c, 11);
    // 0d4949  push 2
    X86_AT(c, 0xd4949u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d494b  push 0
    X86_AT(c, 0xd494bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d494d  call 0xcc814
    X86_AT(c, 0xd494du);
    push32(c, 0xd4952u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd4952u);
    X86_TICK(c, 14);
    // 0d4952  push 0x98a8
    X86_AT(c, 0xd4952u);
    { uint32_t v = 0x98A8u; push32(c, v); }
    // 0d4957  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4957u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d495a  call 0xc8cdc
    X86_AT(c, 0xd495au);
    push32(c, 0xd495fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd495fu);
    X86_TICK(c, 13);
    // 0d495f  add esp, 0x40
    X86_AT(c, 0xd495fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d4962  push 3
    X86_AT(c, 0xd4962u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4964  push 0
    X86_AT(c, 0xd4964u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4966  call 0xcc814
    X86_AT(c, 0xd4966u);
    push32(c, 0xd496bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd496bu);
    X86_TICK(c, 14);
    // 0d496b  push 0x98e8
    X86_AT(c, 0xd496bu);
    { uint32_t v = 0x98E8u; push32(c, v); }
    // 0d4970  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4970u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d4973  call 0xc8cdc
    X86_AT(c, 0xd4973u);
    push32(c, 0xd4978u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4978u);
    X86_TICK(c, 11);
    // 0d4978  push 4
    X86_AT(c, 0xd4978u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d497a  push 0
    X86_AT(c, 0xd497au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d497c  call 0xcc814
    X86_AT(c, 0xd497cu);
    push32(c, 0xd4981u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd4981u);
    X86_TICK(c, 14);
    // 0d4981  push 0x9920
    X86_AT(c, 0xd4981u);
    { uint32_t v = 0x9920u; push32(c, v); }
    // 0d4986  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4986u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d4989  call 0xc8cdc
    X86_AT(c, 0xd4989u);
    push32(c, 0xd498eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd498eu);
    X86_TICK(c, 21);
    // 0d498e  mov eax, dword ptr [0xaaea4]
    X86_AT(c, 0xd498eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAAEA4u)));
    // 0d4993  push dword ptr [eax*4 + 0xafea4]
    X86_AT(c, 0xd4993u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAFEA4u))); push32(c, v); }
    // 0d499a  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd499au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d499d  call 0xc8cdc
    X86_AT(c, 0xd499du);
    push32(c, 0xd49a2u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd49a2u);
    X86_TICK(c, 14);
    // 0d49a2  push 0x9930
    X86_AT(c, 0xd49a2u);
    { uint32_t v = 0x9930u; push32(c, v); }
    // 0d49a7  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd49a7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d49aa  call 0xc8cdc
    X86_AT(c, 0xd49aau);
    push32(c, 0xd49afu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd49afu);
    X86_TICK(c, 11);
    // 0d49af  push 5
    X86_AT(c, 0xd49afu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d49b1  push 0
    X86_AT(c, 0xd49b1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d49b3  call 0xcc814
    X86_AT(c, 0xd49b3u);
    push32(c, 0xd49b8u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd49b8u);
    X86_TICK(c, 14);
    // 0d49b8  push 0x9938
    X86_AT(c, 0xd49b8u);
    { uint32_t v = 0x9938u; push32(c, v); }
    // 0d49bd  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd49bdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d49c0  call 0xc8cdc
    X86_AT(c, 0xd49c0u);
    push32(c, 0xd49c5u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd49c5u);
    X86_TICK(c, 13);
    // 0d49c5  add esp, 0x40
    X86_AT(c, 0xd49c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d49c8  push 6
    X86_AT(c, 0xd49c8u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d49ca  push 0
    X86_AT(c, 0xd49cau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d49cc  call 0xcc814
    X86_AT(c, 0xd49ccu);
    push32(c, 0xd49d1u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd49d1u);
    X86_TICK(c, 14);
    // 0d49d1  push 0x9978
    X86_AT(c, 0xd49d1u);
    { uint32_t v = 0x9978u; push32(c, v); }
    // 0d49d6  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd49d6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d49d9  call 0xc8cdc
    X86_AT(c, 0xd49d9u);
    push32(c, 0xd49deu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd49deu);
    X86_TICK(c, 11);
    // 0d49de  push 7
    X86_AT(c, 0xd49deu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d49e0  push 0
    X86_AT(c, 0xd49e0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d49e2  call 0xcc814
    X86_AT(c, 0xd49e2u);
    push32(c, 0xd49e7u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd49e7u);
    X86_TICK(c, 16);
    // 0d49e7  add esp, 0x18
    X86_AT(c, 0xd49e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d49ea  push 0x99b4
    X86_AT(c, 0xd49eau);
    { uint32_t v = 0x99B4u; push32(c, v); }
    // 0d49ef  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd49efu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d49f2  call 0xc8cdc
    X86_AT(c, 0xd49f2u);
    push32(c, 0xd49f7u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd49f7u);
    X86_TICK(c, 11);
    // 0d49f7  push 8
    X86_AT(c, 0xd49f7u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d49f9  push 0
    X86_AT(c, 0xd49f9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d49fb  call 0xcc814
    X86_AT(c, 0xd49fbu);
    push32(c, 0xd4a00u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd4a00u);
    X86_TICK(c, 14);
    // 0d4a00  push 0x99ec
    X86_AT(c, 0xd4a00u);
    { uint32_t v = 0x99ECu; push32(c, v); }
    // 0d4a05  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4a05u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d4a08  call 0xc8cdc
    X86_AT(c, 0xd4a08u);
    push32(c, 0xd4a0du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4a0du);
    X86_TICK(c, 11);
    // 0d4a0d  push 9
    X86_AT(c, 0xd4a0du);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d4a0f  push 0
    X86_AT(c, 0xd4a0fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4a11  call 0xcc814
    X86_AT(c, 0xd4a11u);
    push32(c, 0xd4a16u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd4a16u);
    X86_TICK(c, 14);
    // 0d4a16  push 0x9a08
    X86_AT(c, 0xd4a16u);
    { uint32_t v = 0x9A08u; push32(c, v); }
    // 0d4a1b  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4a1bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d4a1e  call 0xc8cdc
    X86_AT(c, 0xd4a1eu);
    push32(c, 0xd4a23u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4a23u);
    X86_TICK(c, 28);
    // 0d4a23  add dword ptr [0xb031a], 0x1f4
    X86_AT(c, 0xd4a23u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Au)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x1F4u, 0, 4)); }
    // 0d4a2d  add dword ptr [0xb02fe], 0x1f4
    X86_AT(c, 0xd4a2du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB02FEu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x1F4u, 0, 4)); }
    // 0d4a37  add dword ptr [0xb031e], 0x1f4
    X86_AT(c, 0xd4a37u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x1F4u, 0, 4)); }
    // 0d4a41  call 0xcc6cc
    X86_AT(c, 0xd4a41u);
    push32(c, 0xd4a46u); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xd4a46u);
    X86_TICK(c, 7);
    // 0d4a46  call 0xcc628
    X86_AT(c, 0xd4a46u);
    push32(c, 0xd4a4bu); x86_call_known(c, 0xcc628u, f_000cc628); X86_RET(c, 0xd4a4bu);
    X86_TICK(c, 7);
    // 0d4a4b  call 0xcc6b0
    X86_AT(c, 0xd4a4bu);
    push32(c, 0xd4a50u); x86_call_known(c, 0xcc6b0u, f_000cc6b0); X86_RET(c, 0xd4a50u);
    X86_TICK(c, 14);
    // 0d4a50  add esp, 0x28
    X86_AT(c, 0xd4a50u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0d4a53  cmp dword ptr [ebp - 8], 0
    X86_AT(c, 0xd4a53u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 4);
    // 0d4a57  je 0xd4bfc
    X86_AT(c, 0xd4a57u);
    if (x86_cc(c, 4)) { goto L_d4bfc; }
    X86_TICK(c, 7);
    // 0d4a5d  call 0xcf8e0
    X86_AT(c, 0xd4a5du);
    push32(c, 0xd4a62u); x86_call_known(c, 0xcf8e0u, f_000cf8e0); X86_RET(c, 0xd4a62u);
    X86_TICK(c, 9);
    // 0d4a62  push 0x1e
    X86_AT(c, 0xd4a62u);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 0d4a64  call 0xd6660
    X86_AT(c, 0xd4a64u);
    push32(c, 0xd4a69u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd4a69u);
    X86_TICK(c, 12);
    // 0d4a69  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4a69u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d4a6c  call 0xca254
    X86_AT(c, 0xd4a6cu);
    push32(c, 0xd4a71u); x86_call_known(c, 0xca254u, f_000ca254); X86_RET(c, 0xd4a71u);
    X86_TICK(c, 11);
    // 0d4a71  push 2
    X86_AT(c, 0xd4a71u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d4a73  push 0
    X86_AT(c, 0xd4a73u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4a75  call 0xcc814
    X86_AT(c, 0xd4a75u);
    push32(c, 0xd4a7au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd4a7au);
    X86_TICK(c, 14);
    // 0d4a7a  push 0x9a20
    X86_AT(c, 0xd4a7au);
    { uint32_t v = 0x9A20u; push32(c, v); }
    // 0d4a7f  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4a7fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d4a82  call 0xc8cdc
    X86_AT(c, 0xd4a82u);
    push32(c, 0xd4a87u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4a87u);
    X86_TICK(c, 11);
    // 0d4a87  push 3
    X86_AT(c, 0xd4a87u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4a89  push 0
    X86_AT(c, 0xd4a89u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4a8b  call 0xcc814
    X86_AT(c, 0xd4a8bu);
    push32(c, 0xd4a90u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd4a90u);
    X86_TICK(c, 14);
    // 0d4a90  push 0x9a40
    X86_AT(c, 0xd4a90u);
    { uint32_t v = 0x9A40u; push32(c, v); }
    // 0d4a95  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4a95u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d4a98  call 0xc8cdc
    X86_AT(c, 0xd4a98u);
    push32(c, 0xd4a9du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4a9du);
    X86_TICK(c, 11);
    // 0d4a9d  push 4
    X86_AT(c, 0xd4a9du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d4a9f  push 0
    X86_AT(c, 0xd4a9fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4aa1  call 0xcc814
    X86_AT(c, 0xd4aa1u);
    push32(c, 0xd4aa6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd4aa6u);
    X86_TICK(c, 14);
    // 0d4aa6  push 0x9a80
    X86_AT(c, 0xd4aa6u);
    { uint32_t v = 0x9A80u; push32(c, v); }
    // 0d4aab  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4aabu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d4aae  call 0xc8cdc
    X86_AT(c, 0xd4aaeu);
    push32(c, 0xd4ab3u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4ab3u);
    X86_TICK(c, 11);
    // 0d4ab3  push 5
    X86_AT(c, 0xd4ab3u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d4ab5  push 0
    X86_AT(c, 0xd4ab5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4ab7  call 0xcc814
    X86_AT(c, 0xd4ab7u);
    push32(c, 0xd4abcu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd4abcu);
    X86_TICK(c, 16);
    // 0d4abc  add esp, 0x40
    X86_AT(c, 0xd4abcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d4abf  push 0x9ab8
    X86_AT(c, 0xd4abfu);
    { uint32_t v = 0x9AB8u; push32(c, v); }
    // 0d4ac4  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4ac4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d4ac7  call 0xc8cdc
    X86_AT(c, 0xd4ac7u);
    push32(c, 0xd4accu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4accu);
    X86_TICK(c, 13);
    // 0d4acc  add esp, 8
    X86_AT(c, 0xd4accu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d4acf  push 6
    X86_AT(c, 0xd4acfu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d4ad1  push 0
    X86_AT(c, 0xd4ad1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4ad3  call 0xcc814
    X86_AT(c, 0xd4ad3u);
    push32(c, 0xd4ad8u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd4ad8u);
    X86_TICK(c, 14);
    // 0d4ad8  push 0x9af8
    X86_AT(c, 0xd4ad8u);
    { uint32_t v = 0x9AF8u; push32(c, v); }
    // 0d4add  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4addu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d4ae0  call 0xc8cdc
    X86_AT(c, 0xd4ae0u);
    push32(c, 0xd4ae5u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4ae5u);
    X86_TICK(c, 11);
    // 0d4ae5  push 7
    X86_AT(c, 0xd4ae5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4ae7  push 0
    X86_AT(c, 0xd4ae7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4ae9  call 0xcc814
    X86_AT(c, 0xd4ae9u);
    push32(c, 0xd4aeeu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd4aeeu);
    X86_TICK(c, 14);
    // 0d4aee  push 0x9b34
    X86_AT(c, 0xd4aeeu);
    { uint32_t v = 0x9B34u; push32(c, v); }
    // 0d4af3  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4af3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d4af6  call 0xc8cdc
    X86_AT(c, 0xd4af6u);
    push32(c, 0xd4afbu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4afbu);
    X86_TICK(c, 11);
    // 0d4afb  push 8
    X86_AT(c, 0xd4afbu);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d4afd  push 0
    X86_AT(c, 0xd4afdu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4aff  call 0xcc814
    X86_AT(c, 0xd4affu);
    push32(c, 0xd4b04u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd4b04u);
    X86_TICK(c, 14);
    // 0d4b04  push 0x9b68
    X86_AT(c, 0xd4b04u);
    { uint32_t v = 0x9B68u; push32(c, v); }
    // 0d4b09  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4b09u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d4b0c  call 0xc8cdc
    X86_AT(c, 0xd4b0cu);
    push32(c, 0xd4b11u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4b11u);
    X86_TICK(c, 11);
    // 0d4b11  push 9
    X86_AT(c, 0xd4b11u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d4b13  push 0
    X86_AT(c, 0xd4b13u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4b15  call 0xcc814
    X86_AT(c, 0xd4b15u);
    push32(c, 0xd4b1au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd4b1au);
    X86_TICK(c, 14);
    // 0d4b1a  push 0x9b88
    X86_AT(c, 0xd4b1au);
    { uint32_t v = 0x9B88u; push32(c, v); }
    // 0d4b1f  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xd4b1fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0d4b22  call 0xc8cdc
    X86_AT(c, 0xd4b22u);
    push32(c, 0xd4b27u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4b27u);
    X86_TICK(c, 13);
    // 0d4b27  add esp, 0x40
    X86_AT(c, 0xd4b27u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d4b2a  mov eax, dword ptr [0xb041a]
    X86_AT(c, 0xd4b2au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB041Au)));
    // 0d4b2f  cmp eax, 9
    X86_AT(c, 0xd4b2fu);
    (void)x86_sub(c, c.r[0], 0x9u, 0, 4);
    // 0d4b32  jge 0xd4bfc
    X86_AT(c, 0xd4b32u);
    if (x86_cc(c, 13)) { goto L_d4bfc; }
    X86_TICK(c, 23);
    // 0d4b38  inc dword ptr [0xb041a]
    X86_AT(c, 0xd4b38u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB041Au)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d4b3e  push dword ptr [0xb033e]
    X86_AT(c, 0xd4b3eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d4b44  push dword ptr [0xb033a]
    X86_AT(c, 0xd4b44u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d4b4a  call 0xcf89c
    X86_AT(c, 0xd4b4au);
    push32(c, 0xd4b4fu); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd4b4fu);
    X86_TICK(c, 12);
    // 0d4b4f  add esp, 8
    X86_AT(c, 0xd4b4fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d4b52  xchg edx, eax
    X86_AT(c, 0xd4b52u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0d4b53  cmp edx, 3
    X86_AT(c, 0xd4b53u);
    (void)x86_sub(c, c.r[2], 0x3u, 0, 4);
    // 0d4b56  ja 0xd4b96
    X86_AT(c, 0xd4b56u);
    if (x86_cc(c, 7)) { goto L_d4b96; }
    X86_TICK(c, 7);
    // 0d4b58  jmp dword ptr cs:[edx*4 + 0xd4b60]
    X86_AT(c, 0xd4b58u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD4B60u)));
      switch (t) {
      case 0xd4b70u: goto L_d4b70;
      case 0xd4b78u: goto L_d4b78;
      case 0xd4b86u: goto L_d4b86;
      case 0xd4b8au: goto L_d4b8a;
      default: x86_jump(c, t); return; } }
L_d4b70:
    X86_TICK(c, 14);
    // 0d4b70  sub eax, eax
    X86_AT(c, 0xd4b70u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d4b72  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd4b72u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d4b75  xchg ebx, eax
    X86_AT(c, 0xd4b75u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d4b76  jmp 0xd4b96
    X86_AT(c, 0xd4b76u);
    goto L_d4b96;
L_d4b78:
    X86_TICK(c, 11);
    // 0d4b78  mov ebx, 0x53
    X86_AT(c, 0xd4b78u);
    c.r[3] = 0x53u;
    // 0d4b7d  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd4b7du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d4b84  jmp 0xd4b96
    X86_AT(c, 0xd4b84u);
    goto L_d4b96;
L_d4b86:
    X86_TICK(c, 9);
    // 0d4b86  sub ebx, ebx
    X86_AT(c, 0xd4b86u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0d4b88  jmp 0xd4b8f
    X86_AT(c, 0xd4b88u);
    goto L_d4b8f;
L_d4b8a:
    X86_TICK(c, 2);
    // 0d4b8a  mov ebx, 0x53
    X86_AT(c, 0xd4b8au);
    c.r[3] = 0x53u;
L_d4b8f:
    X86_TICK(c, 2);
    // 0d4b8f  mov dword ptr [ebp - 4], 0x4d
    X86_AT(c, 0xd4b8fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4Du);
L_d4b96:
    X86_TICK(c, 11);
    // 0d4b96  push 0x15
    X86_AT(c, 0xd4b96u);
    { uint32_t v = 0x15u; push32(c, v); }
    // 0d4b98  push 0xc
    X86_AT(c, 0xd4b98u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d4b9a  call 0xc5df0
    X86_AT(c, 0xd4b9au);
    push32(c, 0xd4b9fu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd4b9fu);
    X86_TICK(c, 14);
    // 0d4b9f  xchg edi, eax
    X86_AT(c, 0xd4b9fu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d4ba0  push 0x19
    X86_AT(c, 0xd4ba0u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0d4ba2  push 0xb
    X86_AT(c, 0xd4ba2u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d4ba4  call 0xc5df0
    X86_AT(c, 0xd4ba4u);
    push32(c, 0xd4ba9u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd4ba9u);
    X86_TICK(c, 30);
    // 0d4ba9  xchg esi, eax
    X86_AT(c, 0xd4ba9u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d4baa  push 1
    X86_AT(c, 0xd4baau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d4bac  mov eax, esi
    X86_AT(c, 0xd4bacu);
    c.r[0] = c.r[6];
    // 0d4bae  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd4baeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d4bb1  push eax
    X86_AT(c, 0xd4bb1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4bb2  lea edx, [edi + ebx*1]
    X86_AT(c, 0xd4bb2u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[3]);
    // 0d4bb5  push edx
    X86_AT(c, 0xd4bb5u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d4bb6  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xd4bb6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0d4bb9  mov dword ptr [ebp - 0x1c], edx
    X86_AT(c, 0xd4bb9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[2]);
    // 0d4bbc  call 0xcc538
    X86_AT(c, 0xd4bbcu);
    push32(c, 0xd4bc1u); x86_call_known(c, 0xcc538u, f_000cc538); X86_RET(c, 0xd4bc1u);
    X86_TICK(c, 9);
    // 0d4bc1  add esp, 0x1c
    X86_AT(c, 0xd4bc1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d4bc4  cmp eax, 3
    X86_AT(c, 0xd4bc4u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0d4bc7  jne 0xd4bef
    X86_AT(c, 0xd4bc7u);
    if (x86_cc(c, 5)) { goto L_d4bef; }
    X86_TICK(c, 32);
    // 0d4bc9  mov dword ptr [ebp - 0xc], 0x1f4
    X86_AT(c, 0xd4bc9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1F4u);
    // 0d4bd0  push 0
    X86_AT(c, 0xd4bd0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4bd2  push 0x74
    X86_AT(c, 0xd4bd2u);
    { uint32_t v = 0x74u; push32(c, v); }
    // 0d4bd4  push dword ptr [0xb02fe]
    X86_AT(c, 0xd4bd4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB02FEu))); push32(c, v); }
    // 0d4bda  push dword ptr [ebp - 0x18]
    X86_AT(c, 0xd4bdau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 0d4bdd  push dword ptr [ebp - 0x1c]
    X86_AT(c, 0xd4bddu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))); push32(c, v); }
    // 0d4be0  push 3
    X86_AT(c, 0xd4be0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4be2  push 0xab
    X86_AT(c, 0xd4be2u);
    { uint32_t v = 0xABu; push32(c, v); }
    // 0d4be7  call 0xcf6b0
    X86_AT(c, 0xd4be7u);
    push32(c, 0xd4becu); x86_call_known(c, 0xcf6b0u, f_000cf6b0); X86_RET(c, 0xd4becu);
    X86_TICK(c, 2);
    // 0d4bec  add esp, 0x1c
    X86_AT(c, 0xd4becu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_d4bef:
    X86_TICK(c, 17);
    // 0d4bef  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd4befu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0d4bf2  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xd4bf2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d4bf5  cmp eax, 0x1f3
    X86_AT(c, 0xd4bf5u);
    (void)x86_sub(c, c.r[0], 0x1F3u, 0, 4);
    // 0d4bfa  jl 0xd4b96
    X86_AT(c, 0xd4bfau);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xd4b96u); goto L_d4b96; }
L_d4bfc:
    X86_TICK(c, 9);
    // 0d4bfc  push 5
    X86_AT(c, 0xd4bfcu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d4bfe  call 0xd6660
    X86_AT(c, 0xd4bfeu);
    push32(c, 0xd4c03u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd4c03u);
    X86_TICK(c, 7);
    // 0d4c03  call 0xcf604
    X86_AT(c, 0xd4c03u);
    push32(c, 0xd4c08u); x86_call_known(c, 0xcf604u, f_000cf604); X86_RET(c, 0xd4c08u);
    X86_TICK(c, 9);
    // 0d4c08  push 0x1e
    X86_AT(c, 0xd4c08u);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 0d4c0a  call 0xd6660
    X86_AT(c, 0xd4c0au);
    push32(c, 0xd4c0fu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd4c0fu);
    X86_TICK(c, 11);
    // 0d4c0f  push 0
    X86_AT(c, 0xd4c0fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4c11  push 4
    X86_AT(c, 0xd4c11u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d4c13  call 0xca2d4
    X86_AT(c, 0xd4c13u);
    push32(c, 0xd4c18u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd4c18u);
    X86_TICK(c, 7);
    // 0d4c18  call 0xd3370
    X86_AT(c, 0xd4c18u);
    push32(c, 0xd4c1du); x86_call_known(c, 0xd3370u, f_000d3370); X86_RET(c, 0xd4c1du);
    X86_TICK(c, 7);
    // 0d4c1d  call 0xd351c
    X86_AT(c, 0xd4c1du);
    push32(c, 0xd4c22u); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xd4c22u);
    X86_TICK(c, 7);
    // 0d4c22  call 0xcc700
    X86_AT(c, 0xd4c22u);
    push32(c, 0xd4c27u); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xd4c27u);
    X86_TICK(c, 30);
    // 0d4c27  add esp, 0x10
    X86_AT(c, 0xd4c27u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d4c2a  pop edi
    X86_AT(c, 0xd4c2au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d4c2b  pop esi
    X86_AT(c, 0xd4c2bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d4c2c  pop ebx
    X86_AT(c, 0xd4c2cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d4c2d  leave 
    X86_AT(c, 0xd4c2du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4c2e  ret 
    X86_AT(c, 0xd4c2eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd48d4u, "ran off the end of a function");
}
void f_000d4c30(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0d4c30  push ebp
    X86_AT(c, 0xd4c30u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d4c31  mov ebp, esp
    X86_AT(c, 0xd4c31u);
    c.r[5] = c.r[4];
    // 0d4c33  push eax
    X86_AT(c, 0xd4c33u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4c34  push ebx
    X86_AT(c, 0xd4c34u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d4c35  push esi
    X86_AT(c, 0xd4c35u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d4c36  push edi
    X86_AT(c, 0xd4c36u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d4c37  push dword ptr [0xb033e]
    X86_AT(c, 0xd4c37u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d4c3d  push dword ptr [0xb033a]
    X86_AT(c, 0xd4c3du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d4c43  call 0xd3304
    X86_AT(c, 0xd4c43u);
    push32(c, 0xd4c48u); x86_call_known(c, 0xd3304u, f_000d3304); X86_RET(c, 0xd4c48u);
    X86_TICK(c, 11);
    // 0d4c48  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd4c48u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d4c4b  add esp, 8
    X86_AT(c, 0xd4c4bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d4c4e  and eax, eax
    X86_AT(c, 0xd4c4eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d4c50  je 0xd4c5b
    X86_AT(c, 0xd4c50u);
    if (x86_cc(c, 4)) { goto L_d4c5b; }
    X86_TICK(c, 12);
    // 0d4c52  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xd4c52u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0d4c59  je 0xd4c62
    X86_AT(c, 0xd4c59u);
    if (x86_cc(c, 4)) { goto L_d4c62; }
L_d4c5b:
    X86_TICK(c, 9);
    // 0d4c5b  push 0x9ba8
    X86_AT(c, 0xd4c5bu);
    { uint32_t v = 0x9BA8u; push32(c, v); }
    // 0d4c60  jmp 0xd4c70
    X86_AT(c, 0xd4c60u);
    goto L_d4c70;
L_d4c62:
    X86_TICK(c, 12);
    // 0d4c62  cmp dword ptr [0xb0332], 0
    X86_AT(c, 0xd4c62u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0332u))), 0x0u, 0, 4);
    // 0d4c69  je 0xd4c84
    X86_AT(c, 0xd4c69u);
    if (x86_cc(c, 4)) { goto L_d4c84; }
    X86_TICK(c, 2);
    // 0d4c6b  push 0x9bbc
    X86_AT(c, 0xd4c6bu);
    { uint32_t v = 0x9BBCu; push32(c, v); }
L_d4c70:
    X86_TICK(c, 7);
    // 0d4c70  call 0xcc7bc
    X86_AT(c, 0xd4c70u);
    push32(c, 0xd4c75u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd4c75u);
    X86_TICK(c, 9);
    // 0d4c75  push 1
    X86_AT(c, 0xd4c75u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d4c77  call 0xc5ca4
    X86_AT(c, 0xd4c77u);
    push32(c, 0xd4c7cu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd4c7cu);
    X86_TICK(c, 9);
    // 0d4c7c  add esp, 8
    X86_AT(c, 0xd4c7cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d4c7f  jmp 0xd4de6
    X86_AT(c, 0xd4c7fu);
    goto L_d4de6;
L_d4c84:
    X86_TICK(c, 9);
    // 0d4c84  push 0x9c04
    X86_AT(c, 0xd4c84u);
    { uint32_t v = 0x9C04u; push32(c, v); }
    // 0d4c89  call 0xcc7bc
    X86_AT(c, 0xd4c89u);
    push32(c, 0xd4c8eu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd4c8eu);
    X86_TICK(c, 16);
    // 0d4c8e  sub eax, eax
    X86_AT(c, 0xd4c8eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d4c90  mov dword ptr [0xaa2b8], eax
    X86_AT(c, 0xd4c90u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2B8u)), c.r[0]);
    // 0d4c95  mov dword ptr [0xaa2b4], eax
    X86_AT(c, 0xd4c95u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2B4u)), c.r[0]);
    // 0d4c9a  mov dword ptr [0xaa2b0], eax
    X86_AT(c, 0xd4c9au);
    wr32((c.sbase[3] + (uint32_t)(0xAA2B0u)), c.r[0]);
    // 0d4c9f  mov dword ptr [0xaae9c], eax
    X86_AT(c, 0xd4c9fu);
    wr32((c.sbase[3] + (uint32_t)(0xAAE9Cu)), c.r[0]);
    // 0d4ca4  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xd4ca4u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0d4cae  mov edi, 0xffffffff
    X86_AT(c, 0xd4caeu);
    c.r[7] = 0xFFFFFFFFu;
    // 0d4cb3  add esp, 4
    X86_AT(c, 0xd4cb3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d4cb6:
    X86_TICK(c, 7);
    // 0d4cb6  cmp edi, 1
    X86_AT(c, 0xd4cb6u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0d4cb9  jg 0xd4d20
    X86_AT(c, 0xd4cb9u);
    if (x86_cc(c, 15)) { goto L_d4d20; }
    X86_TICK(c, 2);
    // 0d4cbf  mov esi, 0xffffffff
    X86_AT(c, 0xd4cbfu);
    c.r[6] = 0xFFFFFFFFu;
L_d4cc4:
    X86_TICK(c, 7);
    // 0d4cc4  cmp esi, 1
    X86_AT(c, 0xd4cc4u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0d4cc7  jg 0xd4d1d
    X86_AT(c, 0xd4cc7u);
    if (x86_cc(c, 15)) { goto L_d4d1d; }
    X86_TICK(c, 29);
    // 0d4cc9  push 1
    X86_AT(c, 0xd4cc9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d4ccb  mov eax, esi
    X86_AT(c, 0xd4ccbu);
    c.r[0] = c.r[6];
    // 0d4ccd  add eax, dword ptr [0xb033e]
    X86_AT(c, 0xd4ccdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Eu))), 0, 4); }
    // 0d4cd3  push eax
    X86_AT(c, 0xd4cd3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4cd4  mov eax, edi
    X86_AT(c, 0xd4cd4u);
    c.r[0] = c.r[7];
    // 0d4cd6  add eax, dword ptr [0xb033a]
    X86_AT(c, 0xd4cd6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Au))), 0, 4); }
    // 0d4cdc  push eax
    X86_AT(c, 0xd4cdcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4cdd  call 0xcc538
    X86_AT(c, 0xd4cddu);
    push32(c, 0xd4ce2u); x86_call_known(c, 0xcc538u, f_000cc538); X86_RET(c, 0xd4ce2u);
    X86_TICK(c, 12);
    // 0d4ce2  xchg ebx, eax
    X86_AT(c, 0xd4ce2u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d4ce3  add esp, 0xc
    X86_AT(c, 0xd4ce3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d4ce6  cmp ebx, 1
    X86_AT(c, 0xd4ce6u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0d4ce9  je 0xd4cfa
    X86_AT(c, 0xd4ce9u);
    if (x86_cc(c, 4)) { goto L_d4cfa; }
    X86_TICK(c, 7);
    // 0d4ceb  cmp ebx, 0xa
    X86_AT(c, 0xd4cebu);
    (void)x86_sub(c, c.r[3], 0xAu, 0, 4);
    // 0d4cee  je 0xd4cfa
    X86_AT(c, 0xd4ceeu);
    if (x86_cc(c, 4)) { goto L_d4cfa; }
    X86_TICK(c, 7);
    // 0d4cf0  cmp ebx, 0x11
    X86_AT(c, 0xd4cf0u);
    (void)x86_sub(c, c.r[3], 0x11u, 0, 4);
    // 0d4cf3  jle 0xd4d02
    X86_AT(c, 0xd4cf3u);
    if (x86_cc(c, 14)) { goto L_d4d02; }
    X86_TICK(c, 7);
    // 0d4cf5  cmp ebx, 0x21
    X86_AT(c, 0xd4cf5u);
    (void)x86_sub(c, c.r[3], 0x21u, 0, 4);
    // 0d4cf8  jge 0xd4d02
    X86_AT(c, 0xd4cf8u);
    if (x86_cc(c, 13)) { goto L_d4d02; }
L_d4cfa:
    X86_TICK(c, 13);
    // 0d4cfa  inc dword ptr [0xaa2b0]
    X86_AT(c, 0xd4cfau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2B0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d4d00  jmp 0xd4d1a
    X86_AT(c, 0xd4d00u);
    goto L_d4d1a;
L_d4d02:
    X86_TICK(c, 7);
    // 0d4d02  cmp ebx, 3
    X86_AT(c, 0xd4d02u);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0d4d05  jne 0xd4d0f
    X86_AT(c, 0xd4d05u);
    if (x86_cc(c, 5)) { goto L_d4d0f; }
    X86_TICK(c, 13);
    // 0d4d07  inc dword ptr [0xaa2b8]
    X86_AT(c, 0xd4d07u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2B8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d4d0d  jmp 0xd4d1a
    X86_AT(c, 0xd4d0du);
    goto L_d4d1a;
L_d4d0f:
    X86_TICK(c, 7);
    // 0d4d0f  cmp ebx, 2
    X86_AT(c, 0xd4d0fu);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0d4d12  jne 0xd4d1a
    X86_AT(c, 0xd4d12u);
    if (x86_cc(c, 5)) { goto L_d4d1a; }
    X86_TICK(c, 6);
    // 0d4d14  inc dword ptr [0xaa2b4]
    X86_AT(c, 0xd4d14u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2B4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_d4d1a:
    X86_TICK(c, 9);
    // 0d4d1a  inc esi
    X86_AT(c, 0xd4d1au);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d4d1b  jmp 0xd4cc4
    X86_AT(c, 0xd4d1bu);
    X86_POLL(c, 0xd4cc4u); goto L_d4cc4;
L_d4d1d:
    X86_TICK(c, 9);
    // 0d4d1d  inc edi
    X86_AT(c, 0xd4d1du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d4d1e  jmp 0xd4cb6
    X86_AT(c, 0xd4d1eu);
    X86_POLL(c, 0xd4cb6u); goto L_d4cb6;
L_d4d20:
    X86_TICK(c, 40);
    // 0d4d20  mov eax, dword ptr [0xaa2b0]
    X86_AT(c, 0xd4d20u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA2B0u)));
    // 0d4d25  mov dword ptr [0xaa2bc], eax
    X86_AT(c, 0xd4d25u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2BCu)), c.r[0]);
    // 0d4d2a  mov eax, dword ptr [0xaa2b4]
    X86_AT(c, 0xd4d2au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA2B4u)));
    // 0d4d2f  mov dword ptr [0xaa2c0], eax
    X86_AT(c, 0xd4d2fu);
    wr32((c.sbase[3] + (uint32_t)(0xAA2C0u)), c.r[0]);
    // 0d4d34  mov eax, dword ptr [0xaa2b8]
    X86_AT(c, 0xd4d34u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA2B8u)));
    // 0d4d39  mov dword ptr [0xaa2c4], eax
    X86_AT(c, 0xd4d39u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2C4u)), c.r[0]);
    // 0d4d3e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd4d3eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d4d41  cmp eax, 0x21
    X86_AT(c, 0xd4d41u);
    (void)x86_sub(c, c.r[0], 0x21u, 0, 4);
    // 0d4d44  sete dl
    X86_AT(c, 0xd4d44u);
    s8(c, 2, x86_cc(c, 4) ? 1u : 0u);
    // 0d4d47  movzx edx, dl
    X86_AT(c, 0xd4d47u);
    c.r[2] = g8(c, 2);
    // 0d4d4a  mov dword ptr [0xaa2d4], edx
    X86_AT(c, 0xd4d4au);
    wr32((c.sbase[3] + (uint32_t)(0xAA2D4u)), c.r[2]);
    // 0d4d50  cmp eax, 0x21
    X86_AT(c, 0xd4d50u);
    (void)x86_sub(c, c.r[0], 0x21u, 0, 4);
    // 0d4d53  jge 0xd4d6b
    X86_AT(c, 0xd4d53u);
    if (x86_cc(c, 13)) { goto L_d4d6b; }
    X86_TICK(c, 11);
    // 0d4d55  push 0x9c34
    X86_AT(c, 0xd4d55u);
    { uint32_t v = 0x9C34u; push32(c, v); }
    // 0d4d5a  push 7
    X86_AT(c, 0xd4d5au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4d5c  call 0xc8cdc
    X86_AT(c, 0xd4d5cu);
    push32(c, 0xd4d61u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4d61u);
    X86_TICK(c, 9);
    // 0d4d61  push 7
    X86_AT(c, 0xd4d61u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4d63  call 0xca3cc
    X86_AT(c, 0xd4d63u);
    push32(c, 0xd4d68u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd4d68u);
    X86_TICK(c, 2);
    // 0d4d68  add esp, 0xc
    X86_AT(c, 0xd4d68u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d4d6b:
    X86_TICK(c, 18);
    // 0d4d6b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd4d6bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d4d6e  push dword ptr [eax*4 + 0xaaeb0]
    X86_AT(c, 0xd4d6eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAAEB0u))); push32(c, v); }
    // 0d4d75  push 7
    X86_AT(c, 0xd4d75u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4d77  call 0xc8cdc
    X86_AT(c, 0xd4d77u);
    push32(c, 0xd4d7cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4d7cu);
    X86_TICK(c, 14);
    // 0d4d7c  add esp, 8
    X86_AT(c, 0xd4d7cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d4d7f  cmp dword ptr [ebp - 4], 0x21
    X86_AT(c, 0xd4d7fu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x21u, 0, 4);
    // 0d4d83  jge 0xd4d8c
    X86_AT(c, 0xd4d83u);
    if (x86_cc(c, 13)) { goto L_d4d8c; }
    X86_TICK(c, 9);
    // 0d4d85  push 0x9c4c
    X86_AT(c, 0xd4d85u);
    { uint32_t v = 0x9C4Cu; push32(c, v); }
    // 0d4d8a  jmp 0xd4d97
    X86_AT(c, 0xd4d8au);
    goto L_d4d97;
L_d4d8c:
    X86_TICK(c, 12);
    // 0d4d8c  cmp dword ptr [ebp - 4], 0x31
    X86_AT(c, 0xd4d8cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x31u, 0, 4);
    // 0d4d90  jl 0xd4da1
    X86_AT(c, 0xd4d90u);
    if (x86_cc(c, 12)) { goto L_d4da1; }
    X86_TICK(c, 2);
    // 0d4d92  push 0x9c54
    X86_AT(c, 0xd4d92u);
    { uint32_t v = 0x9C54u; push32(c, v); }
L_d4d97:
    X86_TICK(c, 9);
    // 0d4d97  push 7
    X86_AT(c, 0xd4d97u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4d99  call 0xc8cdc
    X86_AT(c, 0xd4d99u);
    push32(c, 0xd4d9eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4d9eu);
    X86_TICK(c, 2);
    // 0d4d9e  add esp, 8
    X86_AT(c, 0xd4d9eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d4da1:
    X86_TICK(c, 9);
    // 0d4da1  push 7
    X86_AT(c, 0xd4da1u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4da3  call 0xca3cc
    X86_AT(c, 0xd4da3u);
    push32(c, 0xd4da8u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd4da8u);
    X86_TICK(c, 13);
    // 0d4da8  add esp, 4
    X86_AT(c, 0xd4da8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d4dab  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd4dabu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d4dae  cmp eax, 0x21
    X86_AT(c, 0xd4daeu);
    (void)x86_sub(c, c.r[0], 0x21u, 0, 4);
    // 0d4db1  jge 0xd4dbb
    X86_AT(c, 0xd4db1u);
    if (x86_cc(c, 13)) { goto L_d4dbb; }
    X86_TICK(c, 9);
    // 0d4db3  push eax
    X86_AT(c, 0xd4db3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4db4  call 0xd5b80
    X86_AT(c, 0xd4db4u);
    push32(c, 0xd4db9u); x86_call_known(c, 0xd5b80u, f_000d5b80); X86_RET(c, 0xd4db9u);
    X86_TICK(c, 7);
    // 0d4db9  jmp 0xd4de3
    X86_AT(c, 0xd4db9u);
    goto L_d4de3;
L_d4dbb:
    X86_TICK(c, 11);
    // 0d4dbb  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd4dbbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d4dbe  cmp eax, 0x29
    X86_AT(c, 0xd4dbeu);
    (void)x86_sub(c, c.r[0], 0x29u, 0, 4);
    // 0d4dc1  jge 0xd4dcb
    X86_AT(c, 0xd4dc1u);
    if (x86_cc(c, 13)) { goto L_d4dcb; }
    X86_TICK(c, 9);
    // 0d4dc3  push eax
    X86_AT(c, 0xd4dc3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4dc4  call 0xd55b0
    X86_AT(c, 0xd4dc4u);
    push32(c, 0xd4dc9u); x86_call_known(c, 0xd55b0u, f_000d55b0); X86_RET(c, 0xd4dc9u);
    X86_TICK(c, 7);
    // 0d4dc9  jmp 0xd4de3
    X86_AT(c, 0xd4dc9u);
    goto L_d4de3;
L_d4dcb:
    X86_TICK(c, 11);
    // 0d4dcb  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd4dcbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d4dce  cmp eax, 0x31
    X86_AT(c, 0xd4dceu);
    (void)x86_sub(c, c.r[0], 0x31u, 0, 4);
    // 0d4dd1  jge 0xd4ddb
    X86_AT(c, 0xd4dd1u);
    if (x86_cc(c, 13)) { goto L_d4ddb; }
    X86_TICK(c, 9);
    // 0d4dd3  push eax
    X86_AT(c, 0xd4dd3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4dd4  call 0xd6480
    X86_AT(c, 0xd4dd4u);
    push32(c, 0xd4dd9u); x86_call_known(c, 0xd6480u, f_000d6480); X86_RET(c, 0xd4dd9u);
    X86_TICK(c, 7);
    // 0d4dd9  jmp 0xd4de3
    X86_AT(c, 0xd4dd9u);
    goto L_d4de3;
L_d4ddb:
    X86_TICK(c, 12);
    // 0d4ddb  push dword ptr [ebp - 4]
    X86_AT(c, 0xd4ddbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d4dde  call 0xdb97c
    X86_AT(c, 0xd4ddeu);
    push32(c, 0xd4de3u); x86_call_known(c, 0xdb97cu, f_000db97c); X86_RET(c, 0xd4de3u);
L_d4de3:
    X86_TICK(c, 2);
    // 0d4de3  add esp, 4
    X86_AT(c, 0xd4de3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d4de6:
    X86_TICK(c, 28);
    // 0d4de6  pop edi
    X86_AT(c, 0xd4de6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d4de7  pop esi
    X86_AT(c, 0xd4de7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d4de8  pop ebx
    X86_AT(c, 0xd4de8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d4de9  leave 
    X86_AT(c, 0xd4de9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4dea  ret 
    X86_AT(c, 0xd4deau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4c30u, "ran off the end of a function");
}
void f_000d4e04(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0d4e04  push ebp
    X86_AT(c, 0xd4e04u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d4e05  mov ebp, esp
    X86_AT(c, 0xd4e05u);
    c.r[5] = c.r[4];
    // 0d4e07  push ebx
    X86_AT(c, 0xd4e07u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d4e08  push edi
    X86_AT(c, 0xd4e08u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d4e09  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0xd4e09u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0d4e0c  push dword ptr [0xb033e]
    X86_AT(c, 0xd4e0cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d4e12  push dword ptr [0xb033a]
    X86_AT(c, 0xd4e12u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d4e18  call 0xcf89c
    X86_AT(c, 0xd4e18u);
    push32(c, 0xd4e1du); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd4e1du);
    X86_TICK(c, 20);
    // 0d4e1d  xchg edi, eax
    X86_AT(c, 0xd4e1du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d4e1e  movzx ebx, bl
    X86_AT(c, 0xd4e1eu);
    c.r[3] = g8(c, 3);
    // 0d4e21  push dword ptr [ebx*4 + 0xaa274]
    X86_AT(c, 0xd4e21u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] * 4 + 0xAA274u))); push32(c, v); }
    // 0d4e28  push 7
    X86_AT(c, 0xd4e28u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4e2a  call 0xc8cdc
    X86_AT(c, 0xd4e2au);
    push32(c, 0xd4e2fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd4e2fu);
    X86_TICK(c, 9);
    // 0d4e2f  push 0x9c70
    X86_AT(c, 0xd4e2fu);
    { uint32_t v = 0x9C70u; push32(c, v); }
    // 0d4e34  call 0xcc7bc
    X86_AT(c, 0xd4e34u);
    push32(c, 0xd4e39u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd4e39u);
    X86_TICK(c, 13);
    // 0d4e39  push ebx
    X86_AT(c, 0xd4e39u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d4e3a  push 0xb033e
    X86_AT(c, 0xd4e3au);
    { uint32_t v = 0xB033Eu; push32(c, v); }
    // 0d4e3f  push 0xb033a
    X86_AT(c, 0xd4e3fu);
    { uint32_t v = 0xB033Au; push32(c, v); }
    // 0d4e44  call 0xcbda0
    X86_AT(c, 0xd4e44u);
    push32(c, 0xd4e49u); x86_call_known(c, 0xcbda0u, f_000cbda0); X86_RET(c, 0xd4e49u);
    X86_TICK(c, 23);
    // 0d4e49  mov eax, dword ptr [0xb033a]
    X86_AT(c, 0xd4e49u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0d4e4e  mov dword ptr [0xbefd4], eax
    X86_AT(c, 0xd4e4eu);
    wr32((c.sbase[3] + (uint32_t)(0xBEFD4u)), c.r[0]);
    // 0d4e53  mov edx, dword ptr [0xb033e]
    X86_AT(c, 0xd4e53u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0d4e59  mov dword ptr [0xbefd8], edx
    X86_AT(c, 0xd4e59u);
    wr32((c.sbase[3] + (uint32_t)(0xBEFD8u)), c.r[2]);
    // 0d4e5f  push edx
    X86_AT(c, 0xd4e5fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d4e60  push eax
    X86_AT(c, 0xd4e60u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4e61  call 0xcf89c
    X86_AT(c, 0xd4e61u);
    push32(c, 0xd4e66u); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd4e66u);
    X86_TICK(c, 9);
    // 0d4e66  add esp, 0x28
    X86_AT(c, 0xd4e66u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0d4e69  cmp eax, edi
    X86_AT(c, 0xd4e69u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0d4e6b  je 0xd4e76
    X86_AT(c, 0xd4e6bu);
    if (x86_cc(c, 4)) { goto L_d4e76; }
    X86_TICK(c, 9);
    // 0d4e6d  push edi
    X86_AT(c, 0xd4e6du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d4e6e  call 0xd2e9c
    X86_AT(c, 0xd4e6eu);
    push32(c, 0xd4e73u); x86_call_known(c, 0xd2e9cu, f_000d2e9c); X86_RET(c, 0xd4e73u);
    X86_TICK(c, 2);
    // 0d4e73  add esp, 4
    X86_AT(c, 0xd4e73u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d4e76:
    X86_TICK(c, 24);
    // 0d4e76  pop edi
    X86_AT(c, 0xd4e76u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d4e77  pop ebx
    X86_AT(c, 0xd4e77u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d4e78  leave 
    X86_AT(c, 0xd4e78u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d4e79  ret 
    X86_AT(c, 0xd4e79u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4e04u, "ran off the end of a function");
}
void f_000d4e7c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0d4e7c  push ebp
    X86_AT(c, 0xd4e7cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d4e7d  mov ebp, esp
    X86_AT(c, 0xd4e7du);
    c.r[5] = c.r[4];
    // 0d4e7f  sub esp, 8
    X86_AT(c, 0xd4e7fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0d4e82  push ebx
    X86_AT(c, 0xd4e82u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d4e83  push esi
    X86_AT(c, 0xd4e83u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d4e84  push edi
    X86_AT(c, 0xd4e84u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d4e85  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd4e85u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d4e8c  mov dword ptr [0xaa134], 0
    X86_AT(c, 0xd4e8cu);
    wr32((c.sbase[3] + (uint32_t)(0xAA134u)), 0x0u);
    // 0d4e96  mov dword ptr [0xaa138], 0
    X86_AT(c, 0xd4e96u);
    wr32((c.sbase[3] + (uint32_t)(0xAA138u)), 0x0u);
    // 0d4ea0  call 0xc4ed4
    X86_AT(c, 0xd4ea0u);
    push32(c, 0xd4ea5u); x86_call_known(c, 0xc4ed4u, f_000c4ed4); X86_RET(c, 0xd4ea5u);
    X86_TICK(c, 9);
    // 0d4ea5  push 0x9c78
    X86_AT(c, 0xd4ea5u);
    { uint32_t v = 0x9C78u; push32(c, v); }
    // 0d4eaa  call 0xcba5c
    X86_AT(c, 0xd4eaau);
    push32(c, 0xd4eafu); x86_call_known(c, 0xcba5cu, f_000cba5c); X86_RET(c, 0xd4eafu);
    X86_TICK(c, 14);
    // 0d4eaf  add esp, 4
    X86_AT(c, 0xd4eafu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d4eb2  cmp dword ptr [0xb134c], 0
    X86_AT(c, 0xd4eb2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB134Cu))), 0x0u, 0, 4);
    // 0d4eb9  jne 0xd4ec2
    X86_AT(c, 0xd4eb9u);
    if (x86_cc(c, 5)) { goto L_d4ec2; }
    X86_TICK(c, 7);
    // 0d4ebb  call 0xdc8e8
    X86_AT(c, 0xd4ebbu);
    push32(c, 0xd4ec0u); x86_call_known(c, 0xdc8e8u, f_000dc8e8); X86_RET(c, 0xd4ec0u);
    X86_TICK(c, 7);
    // 0d4ec0  jmp 0xd4ecc
    X86_AT(c, 0xd4ec0u);
    goto L_d4ecc;
L_d4ec2:
    X86_TICK(c, 2);
    // 0d4ec2  mov dword ptr [0xb134c], 0
    X86_AT(c, 0xd4ec2u);
    wr32((c.sbase[3] + (uint32_t)(0xB134Cu)), 0x0u);
L_d4ecc:
    X86_TICK(c, 9);
    // 0d4ecc  push 3
    X86_AT(c, 0xd4eccu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d4ece  call 0xc8f54
    X86_AT(c, 0xd4eceu);
    push32(c, 0xd4ed3u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xd4ed3u);
    X86_TICK(c, 9);
    // 0d4ed3  push 1
    X86_AT(c, 0xd4ed3u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d4ed5  call 0xc8f40
    X86_AT(c, 0xd4ed5u);
    push32(c, 0xd4edau); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xd4edau);
    X86_TICK(c, 9);
    // 0d4eda  push 0
    X86_AT(c, 0xd4edau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4edc  call 0xc92e0
    X86_AT(c, 0xd4edcu);
    push32(c, 0xd4ee1u); x86_call_known(c, 0xc92e0u, f_000c92e0); X86_RET(c, 0xd4ee1u);
    X86_TICK(c, 9);
    // 0d4ee1  push 0
    X86_AT(c, 0xd4ee1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4ee3  call 0xc8f40
    X86_AT(c, 0xd4ee3u);
    push32(c, 0xd4ee8u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xd4ee8u);
    X86_TICK(c, 9);
    // 0d4ee8  push 0
    X86_AT(c, 0xd4ee8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4eea  call 0xc90b0
    X86_AT(c, 0xd4eeau);
    push32(c, 0xd4eefu); x86_call_known(c, 0xc90b0u, f_000c90b0); X86_RET(c, 0xd4eefu);
    X86_TICK(c, 9);
    // 0d4eef  push 0xd
    X86_AT(c, 0xd4eefu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d4ef1  call 0xd66ec
    X86_AT(c, 0xd4ef1u);
    push32(c, 0xd4ef6u); x86_call_known(c, 0xd66ecu, f_000d66ec); X86_RET(c, 0xd4ef6u);
    X86_TICK(c, 7);
    // 0d4ef6  call 0xd3370
    X86_AT(c, 0xd4ef6u);
    push32(c, 0xd4efbu); x86_call_known(c, 0xd3370u, f_000d3370); X86_RET(c, 0xd4efbu);
    X86_TICK(c, 7);
    // 0d4efb  call 0xd35c0
    X86_AT(c, 0xd4efbu);
    push32(c, 0xd4f00u); x86_call_known(c, 0xd35c0u, f_000d35c0); X86_RET(c, 0xd4f00u);
    X86_TICK(c, 9);
    // 0d4f00  push 2
    X86_AT(c, 0xd4f00u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d4f02  call 0xc8f54
    X86_AT(c, 0xd4f02u);
    push32(c, 0xd4f07u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xd4f07u);
    X86_TICK(c, 11);
    // 0d4f07  mov dword ptr [0xaa2c8], 0
    X86_AT(c, 0xd4f07u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2C8u)), 0x0u);
    // 0d4f11  mov dword ptr [0xb52f8], 0
    X86_AT(c, 0xd4f11u);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x0u);
    // 0d4f1b  call 0xcf660
    X86_AT(c, 0xd4f1bu);
    push32(c, 0xd4f20u); x86_call_known(c, 0xcf660u, f_000cf660); X86_RET(c, 0xd4f20u);
    X86_TICK(c, 46);
    // 0d4f20  sub esi, esi
    X86_AT(c, 0xd4f20u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d4f22  mov eax, dword ptr [0xb0402]
    X86_AT(c, 0xd4f22u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0402u)));
    // 0d4f27  add eax, dword ptr [0xb0406]
    X86_AT(c, 0xd4f27u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB0406u))), 0, 4); }
    // 0d4f2d  add eax, dword ptr [0xb040a]
    X86_AT(c, 0xd4f2du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB040Au))), 0, 4); }
    // 0d4f33  add eax, dword ptr [0xb040e]
    X86_AT(c, 0xd4f33u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB040Eu))), 0, 4); }
    // 0d4f39  add eax, dword ptr [0xb0412]
    X86_AT(c, 0xd4f39u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB0412u))), 0, 4); }
    // 0d4f3f  add eax, dword ptr [0xb0416]
    X86_AT(c, 0xd4f3fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB0416u))), 0, 4); }
    // 0d4f45  add eax, dword ptr [0xb041a]
    X86_AT(c, 0xd4f45u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB041Au))), 0, 4); }
    // 0d4f4b  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd4f4bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d4f4e  add esp, 0x1c
    X86_AT(c, 0xd4f4eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
L_d4f51:
    X86_TICK(c, 61);
    // 0d4f51  push 0
    X86_AT(c, 0xd4f51u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4f53  mov eax, dword ptr [esi*4 + 0xb0436]
    X86_AT(c, 0xd4f53u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB0436u)));
    // 0d4f5a  lea eax, [eax*4 - 0x238]
    X86_AT(c, 0xd4f5au);
    c.r[0] = (uint32_t)(c.r[0] * 4 + 0xFFFFFDC8u);
    // 0d4f61  push eax
    X86_AT(c, 0xd4f61u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4f62  push dword ptr [0xb02fe]
    X86_AT(c, 0xd4f62u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB02FEu))); push32(c, v); }
    // 0d4f68  push dword ptr [esi*4 + 0xb04be]
    X86_AT(c, 0xd4f68u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB04BEu))); push32(c, v); }
    // 0d4f6f  push dword ptr [esi*4 + 0xb047a]
    X86_AT(c, 0xd4f6fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB047Au))); push32(c, v); }
    // 0d4f76  mov eax, dword ptr [esi*4 + 0xb047a]
    X86_AT(c, 0xd4f76u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB047Au)));
    // 0d4f7d  lea eax, [eax*8]
    X86_AT(c, 0xd4f7du);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0d4f84  lea edx, [eax + eax*4]
    X86_AT(c, 0xd4f84u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d4f87  lea edx, [eax + edx*4]
    X86_AT(c, 0xd4f87u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0d4f8a  add edx, dword ptr [esi*4 + 0xb04be]
    X86_AT(c, 0xd4f8au);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB04BEu))), 0, 4); }
    // 0d4f91  movzx eax, byte ptr [edx + 0x8bdf8]
    X86_AT(c, 0xd4f91u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8BDF8u)));
    // 0d4f98  push eax
    X86_AT(c, 0xd4f98u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d4f99  push dword ptr [esi*4 + 0xb0436]
    X86_AT(c, 0xd4f99u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB0436u))); push32(c, v); }
    // 0d4fa0  call 0xcf6b0
    X86_AT(c, 0xd4fa0u);
    push32(c, 0xd4fa5u); x86_call_known(c, 0xcf6b0u, f_000cf6b0); X86_RET(c, 0xd4fa5u);
    X86_TICK(c, 22);
    // 0d4fa5  dec dword ptr [ebp - 8]
    X86_AT(c, 0xd4fa5u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d4fa8  inc esi
    X86_AT(c, 0xd4fa8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d4fa9  add esp, 0x1c
    X86_AT(c, 0xd4fa9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d4fac  cmp dword ptr [ebp - 8], 0
    X86_AT(c, 0xd4facu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 4);
    // 0d4fb0  jle 0xd4fb7
    X86_AT(c, 0xd4fb0u);
    if (x86_cc(c, 14)) { goto L_d4fb7; }
    X86_TICK(c, 7);
    // 0d4fb2  cmp esi, 0x10
    X86_AT(c, 0xd4fb2u);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0d4fb5  jle 0xd4f51
    X86_AT(c, 0xd4fb5u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd4f51u); goto L_d4f51; }
L_d4fb7:
    X86_TICK(c, 11);
    // 0d4fb7  mov dword ptr [0xaa13c], 1
    X86_AT(c, 0xd4fb7u);
    wr32((c.sbase[3] + (uint32_t)(0xAA13Cu)), 0x1u);
    // 0d4fc1  push 0
    X86_AT(c, 0xd4fc1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d4fc3  call 0xc71e0
    X86_AT(c, 0xd4fc3u);
    push32(c, 0xd4fc8u); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xd4fc8u);
    X86_TICK(c, 9);
    // 0d4fc8  push 0x42b8c
    X86_AT(c, 0xd4fc8u);
    { uint32_t v = 0x42B8Cu; push32(c, v); }
    // 0d4fcd  call 0xcbf54
    X86_AT(c, 0xd4fcdu);
    push32(c, 0xd4fd2u); x86_call_known(c, 0xcbf54u, f_000cbf54); X86_RET(c, 0xd4fd2u);
    X86_TICK(c, 7);
    // 0d4fd2  call 0xc6a28
    X86_AT(c, 0xd4fd2u);
    push32(c, 0xd4fd7u); x86_call_known(c, 0xc6a28u, f_000c6a28); X86_RET(c, 0xd4fd7u);
    X86_TICK(c, 9);
    // 0d4fd7  push 1
    X86_AT(c, 0xd4fd7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d4fd9  call 0xc5e44
    X86_AT(c, 0xd4fd9u);
    push32(c, 0xd4fdeu); x86_call_known(c, 0xc5e44u, f_000c5e44); X86_RET(c, 0xd4fdeu);
    X86_TICK(c, 9);
    // 0d4fde  push 7
    X86_AT(c, 0xd4fdeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4fe0  call 0xcacd4
    X86_AT(c, 0xd4fe0u);
    push32(c, 0xd4fe5u); x86_call_known(c, 0xcacd4u, f_000cacd4); X86_RET(c, 0xd4fe5u);
    X86_TICK(c, 9);
    // 0d4fe5  push 7
    X86_AT(c, 0xd4fe5u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d4fe7  call 0xca0a0
    X86_AT(c, 0xd4fe7u);
    push32(c, 0xd4fecu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd4fecu);
    X86_TICK(c, 17);
    // 0d4fec  mov eax, dword ptr [0xb042a]
    X86_AT(c, 0xd4fecu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB042Au)));
    // 0d4ff1  mov dword ptr [0xaa2dc], eax
    X86_AT(c, 0xd4ff1u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2DCu)), c.r[0]);
    // 0d4ff6  mov dword ptr [0xaa2a4], 1
    X86_AT(c, 0xd4ff6u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2A4u)), 0x1u);
    // 0d5000  mov dword ptr [0xbef90], 0
    X86_AT(c, 0xd5000u);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x0u);
    // 0d500a  call 0xcf804
    X86_AT(c, 0xd500au);
    push32(c, 0xd500fu); x86_call_known(c, 0xcf804u, f_000cf804); X86_RET(c, 0xd500fu);
    X86_TICK(c, 9);
    // 0d500f  mov dword ptr [0xaa2a8], eax
    X86_AT(c, 0xd500fu);
    wr32((c.sbase[3] + (uint32_t)(0xAA2A8u)), c.r[0]);
    // 0d5014  call 0xcf834
    X86_AT(c, 0xd5014u);
    push32(c, 0xd5019u); x86_call_known(c, 0xcf834u, f_000cf834); X86_RET(c, 0xd5019u);
    X86_TICK(c, 17);
    // 0d5019  mov dword ptr [0xaa2ac], eax
    X86_AT(c, 0xd5019u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2ACu)), c.r[0]);
    // 0d501e  add eax, dword ptr [0xb041a]
    X86_AT(c, 0xd501eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB041Au))), 0, 4); }
    // 0d5024  mov dword ptr [0xaa2a0], eax
    X86_AT(c, 0xd5024u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2A0u)), c.r[0]);
    // 0d5029  call 0xc5e0c
    X86_AT(c, 0xd5029u);
    push32(c, 0xd502eu); x86_call_known(c, 0xc5e0cu, f_000c5e0c); X86_RET(c, 0xd502eu);
    X86_TICK(c, 59);
    // 0d502e  cdq 
    X86_AT(c, 0xd502eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d502f  mov ecx, 0x3e7
    X86_AT(c, 0xd502fu);
    c.r[1] = 0x3E7u;
    // 0d5034  idiv ecx
    X86_AT(c, 0xd5034u);
    x86_idiv(c, c.r[1], 4, 0xd5034u);
    // 0d5036  add edx, dword ptr [0xb0336]
    X86_AT(c, 0xd5036u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB0336u))), 0, 4); }
    // 0d503c  push edx
    X86_AT(c, 0xd503cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d503d  call 0xe78dc
    X86_AT(c, 0xd503du);
    push32(c, 0xd5042u); x86_call_known(c, 0xe78dcu, f_000e78dc); X86_RET(c, 0xd5042u);
    X86_TICK(c, 14);
    // 0d5042  add esp, 0x18
    X86_AT(c, 0xd5042u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d5045  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xd5045u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0d504c  jle 0xd5057
    X86_AT(c, 0xd504cu);
    if (x86_cc(c, 14)) { goto L_d5057; }
    X86_TICK(c, 12);
    // 0d504e  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xd504eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0d5055  jg 0xd505e
    X86_AT(c, 0xd5055u);
    if (x86_cc(c, 15)) { goto L_d505e; }
L_d5057:
    X86_TICK(c, 7);
    // 0d5057  call 0xd2f10
    X86_AT(c, 0xd5057u);
    push32(c, 0xd505cu); x86_call_known(c, 0xd2f10u, f_000d2f10); X86_RET(c, 0xd505cu);
    X86_TICK(c, 7);
    // 0d505c  jmp 0xd5063
    X86_AT(c, 0xd505cu);
    goto L_d5063;
L_d505e:
    X86_TICK(c, 7);
    // 0d505e  call 0xcc6e8
    X86_AT(c, 0xd505eu);
    push32(c, 0xd5063u); x86_call_known(c, 0xcc6e8u, f_000cc6e8); X86_RET(c, 0xd5063u);
L_d5063:
    X86_TICK(c, 7);
    // 0d5063  call 0xcc700
    X86_AT(c, 0xd5063u);
    push32(c, 0xd5068u); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xd5068u);
L_d5068:
    X86_TICK(c, 12);
    // 0d5068  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xd5068u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0d506f  jle 0xd507a
    X86_AT(c, 0xd506fu);
    if (x86_cc(c, 14)) { goto L_d507a; }
    X86_TICK(c, 12);
    // 0d5071  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xd5071u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0d5078  jg 0xd507f
    X86_AT(c, 0xd5078u);
    if (x86_cc(c, 15)) { goto L_d507f; }
L_d507a:
    X86_TICK(c, 7);
    // 0d507a  call 0xd2f10
    X86_AT(c, 0xd507au);
    push32(c, 0xd507fu); x86_call_known(c, 0xd2f10u, f_000d2f10); X86_RET(c, 0xd507fu);
L_d507f:
    X86_TICK(c, 11);
    // 0d507f  sub edi, edi
    X86_AT(c, 0xd507fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d5081  push 7
    X86_AT(c, 0xd5081u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5083  call 0xca0a0
    X86_AT(c, 0xd5083u);
    push32(c, 0xd5088u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd5088u);
    X86_TICK(c, 2);
    // 0d5088  add esp, 4
    X86_AT(c, 0xd5088u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d508b:
    X86_TICK(c, 9);
    // 0d508b  push 7
    X86_AT(c, 0xd508bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d508d  call 0xcad80
    X86_AT(c, 0xd508du);
    push32(c, 0xd5092u); x86_call_known(c, 0xcad80u, f_000cad80); X86_RET(c, 0xd5092u);
    X86_TICK(c, 9);
    // 0d5092  push 7
    X86_AT(c, 0xd5092u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5094  call 0xc7dc8
    X86_AT(c, 0xd5094u);
    push32(c, 0xd5099u); x86_call_known(c, 0xc7dc8u, f_000c7dc8); X86_RET(c, 0xd5099u);
    X86_TICK(c, 14);
    // 0d5099  xchg ebx, eax
    X86_AT(c, 0xd5099u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d509a  inc edi
    X86_AT(c, 0xd509au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d509b  add esp, 8
    X86_AT(c, 0xd509bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d509e  and bl, bl
    X86_AT(c, 0xd509eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d50a0  jne 0xd50aa
    X86_AT(c, 0xd50a0u);
    if (x86_cc(c, 5)) { goto L_d50aa; }
    X86_TICK(c, 7);
    // 0d50a2  cmp edi, 0x5dc
    X86_AT(c, 0xd50a2u);
    (void)x86_sub(c, c.r[7], 0x5DCu, 0, 4);
    // 0d50a8  jl 0xd508b
    X86_AT(c, 0xd50a8u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xd508bu); goto L_d508b; }
L_d50aa:
    X86_TICK(c, 7);
    // 0d50aa  and bl, bl
    X86_AT(c, 0xd50aau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d50ac  jne 0xd50b0
    X86_AT(c, 0xd50acu);
    if (x86_cc(c, 5)) { goto L_d50b0; }
    X86_TICK(c, 2);
    // 0d50ae  mov bl, 0x20
    X86_AT(c, 0xd50aeu);
    s8(c, 3, 0x20u);
L_d50b0:
    X86_TICK(c, 12);
    // 0d50b0  movzx edx, bl
    X86_AT(c, 0xd50b0u);
    c.r[2] = g8(c, 3);
    // 0d50b3  dec edx
    X86_AT(c, 0xd50b3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d50b4  cmp edx, 0x59
    X86_AT(c, 0xd50b4u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0d50b7  ja 0xd53ee
    X86_AT(c, 0xd50b7u);
    if (x86_cc(c, 7)) { goto L_d53ee; }
    X86_TICK(c, 7);
    // 0d50bd  jmp dword ptr cs:[edx*4 + 0xd50c5]
    X86_AT(c, 0xd50bdu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD50C5u)));
      switch (t) {
      case 0xd522du: goto L_d522d;
      case 0xd527fu: goto L_d527f;
      case 0xd52cdu: goto L_d52cd;
      case 0xd52edu: goto L_d52ed;
      case 0xd5317u: goto L_d5317;
      case 0xd5326u: goto L_d5326;
      case 0xd5330u: goto L_d5330;
      case 0xd533au: goto L_d533a;
      case 0xd5344u: goto L_d5344;
      case 0xd534eu: goto L_d534e;
      case 0xd5358u: goto L_d5358;
      case 0xd5362u: goto L_d5362;
      case 0xd536cu: goto L_d536c;
      case 0xd5376u: goto L_d5376;
      case 0xd5380u: goto L_d5380;
      case 0xd538au: goto L_d538a;
      case 0xd5394u: goto L_d5394;
      case 0xd539eu: goto L_d539e;
      case 0xd53a5u: goto L_d53a5;
      case 0xd53acu: goto L_d53ac;
      case 0xd53b3u: goto L_d53b3;
      case 0xd53bau: goto L_d53ba;
      case 0xd53c1u: goto L_d53c1;
      case 0xd53c8u: goto L_d53c8;
      case 0xd53cfu: goto L_d53cf;
      case 0xd53d6u: goto L_d53d6;
      case 0xd53e7u: goto L_d53e7;
      case 0xd53eeu: goto L_d53ee;
      default: x86_jump(c, t); return; } }
L_d522d:
    X86_TICK(c, 9);
    // 0d522d  push ebx
    X86_AT(c, 0xd522du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d522e  call 0xd362c
    X86_AT(c, 0xd522eu);
    push32(c, 0xd5233u); x86_call_known(c, 0xd362cu, f_000d362c); X86_RET(c, 0xd5233u);
    X86_TICK(c, 9);
    // 0d5233  add esp, 4
    X86_AT(c, 0xd5233u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5236  dec eax
    X86_AT(c, 0xd5236u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5237  jne 0xd52e4
    X86_AT(c, 0xd5237u);
    if (x86_cc(c, 5)) { goto L_d52e4; }
    X86_TICK(c, 12);
    // 0d523d  movzx ebx, bl
    X86_AT(c, 0xd523du);
    c.r[3] = g8(c, 3);
    // 0d5240  push ebx
    X86_AT(c, 0xd5240u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5241  call 0xd4e04
    X86_AT(c, 0xd5241u);
    push32(c, 0xd5246u); x86_call_known(c, 0xd4e04u, f_000d4e04); X86_RET(c, 0xd5246u);
    X86_TICK(c, 13);
    // 0d5246  add esp, 4
    X86_AT(c, 0xd5246u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5249  mov eax, dword ptr [0xb0332]
    X86_AT(c, 0xd5249u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0332u)));
    // 0d524e  cmp eax, 1
    X86_AT(c, 0xd524eu);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0d5251  jl 0xd5402
    X86_AT(c, 0xd5251u);
    if (x86_cc(c, 12)) { goto L_d5402; }
    X86_TICK(c, 12);
    // 0d5257  cmp dword ptr [0xaa13c], 0
    X86_AT(c, 0xd5257u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA13Cu))), 0x0u, 0, 4);
    // 0d525e  je 0xd5402
    X86_AT(c, 0xd525eu);
    if (x86_cc(c, 4)) { goto L_d5402; }
    X86_TICK(c, 13);
    // 0d5264  lea eax, [eax*4 + 0x5a]
    X86_AT(c, 0xd5264u);
    c.r[0] = (uint32_t)(c.r[0] * 4 + 0x5Au);
    // 0d526b  mov dword ptr [0x4319c], eax
    X86_AT(c, 0xd526bu);
    wr32((c.sbase[3] + (uint32_t)(0x4319Cu)), c.r[0]);
    // 0d5270  mov dword ptr [0xaa13c], 0
    X86_AT(c, 0xd5270u);
    wr32((c.sbase[3] + (uint32_t)(0xAA13Cu)), 0x0u);
    // 0d527a  jmp 0xd5402
    X86_AT(c, 0xd527au);
    goto L_d5402;
L_d527f:
    X86_TICK(c, 9);
    // 0d527f  push ebx
    X86_AT(c, 0xd527fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5280  call 0xd362c
    X86_AT(c, 0xd5280u);
    push32(c, 0xd5285u); x86_call_known(c, 0xd362cu, f_000d362c); X86_RET(c, 0xd5285u);
    X86_TICK(c, 9);
    // 0d5285  add esp, 4
    X86_AT(c, 0xd5285u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5288  dec eax
    X86_AT(c, 0xd5288u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5289  jne 0xd52e4
    X86_AT(c, 0xd5289u);
    if (x86_cc(c, 5)) { goto L_d52e4; }
    X86_TICK(c, 12);
    // 0d528b  movzx ebx, bl
    X86_AT(c, 0xd528bu);
    c.r[3] = g8(c, 3);
    // 0d528e  push ebx
    X86_AT(c, 0xd528eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d528f  call 0xd4e04
    X86_AT(c, 0xd528fu);
    push32(c, 0xd5294u); x86_call_known(c, 0xd4e04u, f_000d4e04); X86_RET(c, 0xd5294u);
    X86_TICK(c, 13);
    // 0d5294  add esp, 4
    X86_AT(c, 0xd5294u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5297  mov eax, dword ptr [0xb0332]
    X86_AT(c, 0xd5297u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0332u)));
    // 0d529c  cmp eax, 1
    X86_AT(c, 0xd529cu);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0d529f  jl 0xd5402
    X86_AT(c, 0xd529fu);
    if (x86_cc(c, 12)) { goto L_d5402; }
    X86_TICK(c, 12);
    // 0d52a5  cmp dword ptr [0xaa13c], 0
    X86_AT(c, 0xd52a5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA13Cu))), 0x0u, 0, 4);
    // 0d52ac  jne 0xd5402
    X86_AT(c, 0xd52acu);
    if (x86_cc(c, 5)) { goto L_d5402; }
    X86_TICK(c, 13);
    // 0d52b2  lea eax, [eax*4 + 0x58]
    X86_AT(c, 0xd52b2u);
    c.r[0] = (uint32_t)(c.r[0] * 4 + 0x58u);
    // 0d52b9  mov dword ptr [0x4319c], eax
    X86_AT(c, 0xd52b9u);
    wr32((c.sbase[3] + (uint32_t)(0x4319Cu)), c.r[0]);
    // 0d52be  mov dword ptr [0xaa13c], 1
    X86_AT(c, 0xd52beu);
    wr32((c.sbase[3] + (uint32_t)(0xAA13Cu)), 0x1u);
    // 0d52c8  jmp 0xd5402
    X86_AT(c, 0xd52c8u);
    goto L_d5402;
L_d52cd:
    X86_TICK(c, 9);
    // 0d52cd  push ebx
    X86_AT(c, 0xd52cdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d52ce  call 0xd362c
    X86_AT(c, 0xd52ceu);
    push32(c, 0xd52d3u); x86_call_known(c, 0xd362cu, f_000d362c); X86_RET(c, 0xd52d3u);
    X86_TICK(c, 9);
    // 0d52d3  add esp, 4
    X86_AT(c, 0xd52d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d52d6  dec eax
    X86_AT(c, 0xd52d6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d52d7  jne 0xd52e4
    X86_AT(c, 0xd52d7u);
    if (x86_cc(c, 5)) { goto L_d52e4; }
    X86_TICK(c, 12);
    // 0d52d9  movzx ebx, bl
    X86_AT(c, 0xd52d9u);
    c.r[3] = g8(c, 3);
    // 0d52dc  push ebx
    X86_AT(c, 0xd52dcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d52dd  call 0xd4e04
    X86_AT(c, 0xd52ddu);
    push32(c, 0xd52e2u); x86_call_known(c, 0xd4e04u, f_000d4e04); X86_RET(c, 0xd52e2u);
    X86_TICK(c, 7);
    // 0d52e2  jmp 0xd531e
    X86_AT(c, 0xd52e2u);
    goto L_d531e;
L_d52e4:
    X86_TICK(c, 9);
    // 0d52e4  push 0
    X86_AT(c, 0xd52e4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d52e6  call 0xc5ca4
    X86_AT(c, 0xd52e6u);
    push32(c, 0xd52ebu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd52ebu);
    X86_TICK(c, 7);
    // 0d52eb  jmp 0xd531e
    X86_AT(c, 0xd52ebu);
    goto L_d531e;
L_d52ed:
    X86_TICK(c, 9);
    // 0d52ed  push ebx
    X86_AT(c, 0xd52edu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d52ee  call 0xd362c
    X86_AT(c, 0xd52eeu);
    push32(c, 0xd52f3u); x86_call_known(c, 0xd362cu, f_000d362c); X86_RET(c, 0xd52f3u);
    X86_TICK(c, 9);
    // 0d52f3  add esp, 4
    X86_AT(c, 0xd52f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d52f6  dec eax
    X86_AT(c, 0xd52f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d52f7  jne 0xd5304
    X86_AT(c, 0xd52f7u);
    if (x86_cc(c, 5)) { goto L_d5304; }
    X86_TICK(c, 12);
    // 0d52f9  movzx ebx, bl
    X86_AT(c, 0xd52f9u);
    c.r[3] = g8(c, 3);
    // 0d52fc  push ebx
    X86_AT(c, 0xd52fcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d52fd  call 0xd4e04
    X86_AT(c, 0xd52fdu);
    push32(c, 0xd5302u); x86_call_known(c, 0xd4e04u, f_000d4e04); X86_RET(c, 0xd5302u);
    X86_TICK(c, 7);
    // 0d5302  jmp 0xd530b
    X86_AT(c, 0xd5302u);
    goto L_d530b;
L_d5304:
    X86_TICK(c, 9);
    // 0d5304  push 0
    X86_AT(c, 0xd5304u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d5306  call 0xc5ca4
    X86_AT(c, 0xd5306u);
    push32(c, 0xd530bu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd530bu);
L_d530b:
    X86_TICK(c, 11);
    // 0d530b  add esp, 4
    X86_AT(c, 0xd530bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d530e  push 0
    X86_AT(c, 0xd530eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d5310  call 0xc60ac
    X86_AT(c, 0xd5310u);
    push32(c, 0xd5315u); x86_call_known(c, 0xc60acu, f_000c60ac); X86_RET(c, 0xd5315u);
    X86_TICK(c, 7);
    // 0d5315  jmp 0xd531e
    X86_AT(c, 0xd5315u);
    goto L_d531e;
L_d5317:
    X86_TICK(c, 9);
    // 0d5317  push 0xffffffff
    X86_AT(c, 0xd5317u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d5319  call 0xcf580
    X86_AT(c, 0xd5319u);
    push32(c, 0xd531eu); x86_call_known(c, 0xcf580u, f_000cf580); X86_RET(c, 0xd531eu);
L_d531e:
    X86_TICK(c, 9);
    // 0d531e  add esp, 4
    X86_AT(c, 0xd531eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5321  jmp 0xd5402
    X86_AT(c, 0xd5321u);
    goto L_d5402;
L_d5326:
    X86_TICK(c, 7);
    // 0d5326  call 0xcc9e0
    X86_AT(c, 0xd5326u);
    push32(c, 0xd532bu); x86_call_known(c, 0xcc9e0u, f_000cc9e0); X86_RET(c, 0xd532bu);
    X86_TICK(c, 7);
    // 0d532b  jmp 0xd5402
    X86_AT(c, 0xd532bu);
    goto L_d5402;
L_d5330:
    X86_TICK(c, 7);
    // 0d5330  call 0xcd1a8
    X86_AT(c, 0xd5330u);
    push32(c, 0xd5335u); x86_call_known(c, 0xcd1a8u, f_000cd1a8); X86_RET(c, 0xd5335u);
    X86_TICK(c, 7);
    // 0d5335  jmp 0xd5402
    X86_AT(c, 0xd5335u);
    goto L_d5402;
L_d533a:
    X86_TICK(c, 7);
    // 0d533a  call 0xcd824
    X86_AT(c, 0xd533au);
    push32(c, 0xd533fu); x86_call_known(c, 0xcd824u, f_000cd824); X86_RET(c, 0xd533fu);
    X86_TICK(c, 7);
    // 0d533f  jmp 0xd5402
    X86_AT(c, 0xd533fu);
    goto L_d5402;
L_d5344:
    X86_TICK(c, 7);
    // 0d5344  call 0xd4c30
    X86_AT(c, 0xd5344u);
    push32(c, 0xd5349u); x86_call_known(c, 0xd4c30u, f_000d4c30); X86_RET(c, 0xd5349u);
    X86_TICK(c, 7);
    // 0d5349  jmp 0xd5402
    X86_AT(c, 0xd5349u);
    goto L_d5402;
L_d534e:
    X86_TICK(c, 7);
    // 0d534e  call 0xcd8c0
    X86_AT(c, 0xd534eu);
    push32(c, 0xd5353u); x86_call_known(c, 0xcd8c0u, f_000cd8c0); X86_RET(c, 0xd5353u);
    X86_TICK(c, 7);
    // 0d5353  jmp 0xd5402
    X86_AT(c, 0xd5353u);
    goto L_d5402;
L_d5358:
    X86_TICK(c, 7);
    // 0d5358  call 0xcfa18
    X86_AT(c, 0xd5358u);
    push32(c, 0xd535du); x86_call_known(c, 0xcfa18u, f_000cfa18); X86_RET(c, 0xd535du);
    X86_TICK(c, 7);
    // 0d535d  jmp 0xd5402
    X86_AT(c, 0xd535du);
    goto L_d5402;
L_d5362:
    X86_TICK(c, 7);
    // 0d5362  call 0xcd938
    X86_AT(c, 0xd5362u);
    push32(c, 0xd5367u); x86_call_known(c, 0xcd938u, f_000cd938); X86_RET(c, 0xd5367u);
    X86_TICK(c, 7);
    // 0d5367  jmp 0xd5402
    X86_AT(c, 0xd5367u);
    goto L_d5402;
L_d536c:
    X86_TICK(c, 7);
    // 0d536c  call 0xcd9f0
    X86_AT(c, 0xd536cu);
    push32(c, 0xd5371u); x86_call_known(c, 0xcd9f0u, f_000cd9f0); X86_RET(c, 0xd5371u);
    X86_TICK(c, 7);
    // 0d5371  jmp 0xd5402
    X86_AT(c, 0xd5371u);
    goto L_d5402;
L_d5376:
    X86_TICK(c, 7);
    // 0d5376  call 0xce424
    X86_AT(c, 0xd5376u);
    push32(c, 0xd537bu); x86_call_known(c, 0xce424u, f_000ce424); X86_RET(c, 0xd537bu);
    X86_TICK(c, 7);
    // 0d537b  jmp 0xd5402
    X86_AT(c, 0xd537bu);
    goto L_d5402;
L_d5380:
    X86_TICK(c, 7);
    // 0d5380  call 0xdc4d4
    X86_AT(c, 0xd5380u);
    push32(c, 0xd5385u); x86_call_known(c, 0xdc4d4u, f_000dc4d4); X86_RET(c, 0xd5385u);
    X86_TICK(c, 7);
    // 0d5385  jmp 0xd5402
    X86_AT(c, 0xd5385u);
    goto L_d5402;
L_d538a:
    X86_TICK(c, 7);
    // 0d538a  call 0xcfa5c
    X86_AT(c, 0xd538au);
    push32(c, 0xd538fu); x86_call_known(c, 0xcfa5cu, f_000cfa5c); X86_RET(c, 0xd538fu);
    X86_TICK(c, 7);
    // 0d538f  jmp 0xd5402
    X86_AT(c, 0xd538fu);
    goto L_d5402;
L_d5394:
    X86_TICK(c, 7);
    // 0d5394  call 0xcdbe8
    X86_AT(c, 0xd5394u);
    push32(c, 0xd5399u); x86_call_known(c, 0xcdbe8u, f_000cdbe8); X86_RET(c, 0xd5399u);
    X86_TICK(c, 7);
    // 0d5399  jmp 0xd5402
    X86_AT(c, 0xd5399u);
    goto L_d5402;
L_d539e:
    X86_TICK(c, 7);
    // 0d539e  call 0xcdfdc
    X86_AT(c, 0xd539eu);
    push32(c, 0xd53a3u); x86_call_known(c, 0xcdfdcu, f_000cdfdc); X86_RET(c, 0xd53a3u);
    X86_TICK(c, 7);
    // 0d53a3  jmp 0xd5402
    X86_AT(c, 0xd53a3u);
    goto L_d5402;
L_d53a5:
    X86_TICK(c, 7);
    // 0d53a5  call 0xcfc24
    X86_AT(c, 0xd53a5u);
    push32(c, 0xd53aau); x86_call_known(c, 0xcfc24u, f_000cfc24); X86_RET(c, 0xd53aau);
    X86_TICK(c, 7);
    // 0d53aa  jmp 0xd5402
    X86_AT(c, 0xd53aau);
    goto L_d5402;
L_d53ac:
    X86_TICK(c, 7);
    // 0d53ac  call 0xcff4c
    X86_AT(c, 0xd53acu);
    push32(c, 0xd53b1u); x86_call_known(c, 0xcff4cu, f_000cff4c); X86_RET(c, 0xd53b1u);
    X86_TICK(c, 7);
    // 0d53b1  jmp 0xd5402
    X86_AT(c, 0xd53b1u);
    goto L_d5402;
L_d53b3:
    X86_TICK(c, 7);
    // 0d53b3  call 0xd20ec
    X86_AT(c, 0xd53b3u);
    push32(c, 0xd53b8u); x86_call_known(c, 0xd20ecu, f_000d20ec); X86_RET(c, 0xd53b8u);
    X86_TICK(c, 7);
    // 0d53b8  jmp 0xd5402
    X86_AT(c, 0xd53b8u);
    goto L_d5402;
L_d53ba:
    X86_TICK(c, 7);
    // 0d53ba  call 0xce1d0
    X86_AT(c, 0xd53bau);
    push32(c, 0xd53bfu); x86_call_known(c, 0xce1d0u, f_000ce1d0); X86_RET(c, 0xd53bfu);
    X86_TICK(c, 7);
    // 0d53bf  jmp 0xd5402
    X86_AT(c, 0xd53bfu);
    goto L_d5402;
L_d53c1:
    X86_TICK(c, 7);
    // 0d53c1  call 0xce258
    X86_AT(c, 0xd53c1u);
    push32(c, 0xd53c6u); x86_call_known(c, 0xce258u, f_000ce258); X86_RET(c, 0xd53c6u);
    X86_TICK(c, 7);
    // 0d53c6  jmp 0xd5402
    X86_AT(c, 0xd53c6u);
    goto L_d5402;
L_d53c8:
    X86_TICK(c, 7);
    // 0d53c8  call 0xce270
    X86_AT(c, 0xd53c8u);
    push32(c, 0xd53cdu); x86_call_known(c, 0xce270u, f_000ce270); X86_RET(c, 0xd53cdu);
    X86_TICK(c, 7);
    // 0d53cd  jmp 0xd5402
    X86_AT(c, 0xd53cdu);
    goto L_d5402;
L_d53cf:
    X86_TICK(c, 7);
    // 0d53cf  call 0xce57c
    X86_AT(c, 0xd53cfu);
    push32(c, 0xd53d4u); x86_call_known(c, 0xce57cu, f_000ce57c); X86_RET(c, 0xd53d4u);
    X86_TICK(c, 7);
    // 0d53d4  jmp 0xd5402
    X86_AT(c, 0xd53d4u);
    goto L_d5402;
L_d53d6:
    X86_TICK(c, 7);
    // 0d53d6  call 0xd238c
    X86_AT(c, 0xd53d6u);
    push32(c, 0xd53dbu); x86_call_known(c, 0xd238cu, f_000d238c); X86_RET(c, 0xd53dbu);
    X86_TICK(c, 9);
    // 0d53db  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xd53dbu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0d53e5  jmp 0xd5402
    X86_AT(c, 0xd53e5u);
    goto L_d5402;
L_d53e7:
    X86_TICK(c, 7);
    // 0d53e7  call 0xcdcf8
    X86_AT(c, 0xd53e7u);
    push32(c, 0xd53ecu); x86_call_known(c, 0xcdcf8u, f_000cdcf8); X86_RET(c, 0xd53ecu);
    X86_TICK(c, 7);
    // 0d53ec  jmp 0xd5402
    X86_AT(c, 0xd53ecu);
    goto L_d5402;
L_d53ee:
    X86_TICK(c, 9);
    // 0d53ee  push 0x9c88
    X86_AT(c, 0xd53eeu);
    { uint32_t v = 0x9C88u; push32(c, v); }
    // 0d53f3  call 0xcc7bc
    X86_AT(c, 0xd53f3u);
    push32(c, 0xd53f8u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd53f8u);
    X86_TICK(c, 9);
    // 0d53f8  push 1
    X86_AT(c, 0xd53f8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d53fa  call 0xc5ca4
    X86_AT(c, 0xd53fau);
    push32(c, 0xd53ffu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd53ffu);
    X86_TICK(c, 2);
    // 0d53ff  add esp, 8
    X86_AT(c, 0xd53ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d5402:
    X86_TICK(c, 12);
    // 0d5402  cmp dword ptr [0xb134c], 1
    X86_AT(c, 0xd5402u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB134Cu))), 0x1u, 0, 4);
    // 0d5409  je 0xd545c
    X86_AT(c, 0xd5409u);
    if (x86_cc(c, 4)) { goto L_d545c; }
    X86_TICK(c, 12);
    // 0d540b  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xd540bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0d5412  jne 0xd5422
    X86_AT(c, 0xd5412u);
    if (x86_cc(c, 5)) { goto L_d5422; }
    X86_TICK(c, 12);
    // 0d5414  cmp dword ptr [0xaa2a8], 0xa
    X86_AT(c, 0xd5414u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2A8u))), 0xAu, 0, 4);
    // 0d541b  jg 0xd5422
    X86_AT(c, 0xd541bu);
    if (x86_cc(c, 15)) { goto L_d5422; }
    X86_TICK(c, 7);
    // 0d541d  call 0xd26f0
    X86_AT(c, 0xd541du);
    push32(c, 0xd5422u); x86_call_known(c, 0xd26f0u, f_000d26f0); X86_RET(c, 0xd5422u);
L_d5422:
    X86_TICK(c, 13);
    // 0d5422  inc dword ptr [0xaa2dc]
    X86_AT(c, 0xd5422u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2DCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d5428  call 0xd32d4
    X86_AT(c, 0xd5428u);
    push32(c, 0xd542du); x86_call_known(c, 0xd32d4u, f_000d32d4); X86_RET(c, 0xd542du);
    X86_TICK(c, 7);
    // 0d542d  call 0xd3334
    X86_AT(c, 0xd542du);
    push32(c, 0xd5432u); x86_call_known(c, 0xd3334u, f_000d3334); X86_RET(c, 0xd5432u);
    X86_TICK(c, 18);
    // 0d5432  mov eax, dword ptr [0xb52f8]
    X86_AT(c, 0xd5432u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB52F8u)));
    // 0d5437  mov dword ptr [0xaa2c8], eax
    X86_AT(c, 0xd5437u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2C8u)), c.r[0]);
    // 0d543c  cmp dword ptr [0xb0332], 0
    X86_AT(c, 0xd543cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0332u))), 0x0u, 0, 4);
    // 0d5443  jne 0xd544a
    X86_AT(c, 0xd5443u);
    if (x86_cc(c, 5)) { goto L_d544a; }
    X86_TICK(c, 7);
    // 0d5445  call 0xc6a28
    X86_AT(c, 0xd5445u);
    push32(c, 0xd544au); x86_call_known(c, 0xc6a28u, f_000c6a28); X86_RET(c, 0xd544au);
L_d544a:
    X86_TICK(c, 7);
    // 0d544a  call 0xc6bb0
    X86_AT(c, 0xd544au);
    push32(c, 0xd544fu); x86_call_known(c, 0xc6bb0u, f_000c6bb0); X86_RET(c, 0xd544fu);
    X86_TICK(c, 12);
    // 0d544f  cmp dword ptr [0xb134c], 0
    X86_AT(c, 0xd544fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB134Cu))), 0x0u, 0, 4);
    // 0d5456  je 0xd5068
    X86_AT(c, 0xd5456u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd5068u); goto L_d5068; }
L_d545c:
    X86_TICK(c, 28);
    // 0d545c  pop edi
    X86_AT(c, 0xd545cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d545d  pop esi
    X86_AT(c, 0xd545du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d545e  pop ebx
    X86_AT(c, 0xd545eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d545f  leave 
    X86_AT(c, 0xd545fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d5460  ret 
    X86_AT(c, 0xd5460u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4e7cu, "ran off the end of a function");
}
void f_000d5402(X86Cpu& c) {
    goto L_d5402;
L_d5068:
    X86_TICK(c, 12);
    // 0d5068  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xd5068u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0d506f  jle 0xd507a
    X86_AT(c, 0xd506fu);
    if (x86_cc(c, 14)) { goto L_d507a; }
    X86_TICK(c, 12);
    // 0d5071  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xd5071u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0d5078  jg 0xd507f
    X86_AT(c, 0xd5078u);
    if (x86_cc(c, 15)) { goto L_d507f; }
L_d507a:
    X86_TICK(c, 7);
    // 0d507a  call 0xd2f10
    X86_AT(c, 0xd507au);
    push32(c, 0xd507fu); x86_call_known(c, 0xd2f10u, f_000d2f10); X86_RET(c, 0xd507fu);
L_d507f:
    X86_TICK(c, 11);
    // 0d507f  sub edi, edi
    X86_AT(c, 0xd507fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d5081  push 7
    X86_AT(c, 0xd5081u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5083  call 0xca0a0
    X86_AT(c, 0xd5083u);
    push32(c, 0xd5088u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd5088u);
    X86_TICK(c, 2);
    // 0d5088  add esp, 4
    X86_AT(c, 0xd5088u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d508b:
    X86_TICK(c, 9);
    // 0d508b  push 7
    X86_AT(c, 0xd508bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d508d  call 0xcad80
    X86_AT(c, 0xd508du);
    push32(c, 0xd5092u); x86_call_known(c, 0xcad80u, f_000cad80); X86_RET(c, 0xd5092u);
    X86_TICK(c, 9);
    // 0d5092  push 7
    X86_AT(c, 0xd5092u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5094  call 0xc7dc8
    X86_AT(c, 0xd5094u);
    push32(c, 0xd5099u); x86_call_known(c, 0xc7dc8u, f_000c7dc8); X86_RET(c, 0xd5099u);
    X86_TICK(c, 14);
    // 0d5099  xchg ebx, eax
    X86_AT(c, 0xd5099u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d509a  inc edi
    X86_AT(c, 0xd509au);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d509b  add esp, 8
    X86_AT(c, 0xd509bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d509e  and bl, bl
    X86_AT(c, 0xd509eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d50a0  jne 0xd50aa
    X86_AT(c, 0xd50a0u);
    if (x86_cc(c, 5)) { goto L_d50aa; }
    X86_TICK(c, 7);
    // 0d50a2  cmp edi, 0x5dc
    X86_AT(c, 0xd50a2u);
    (void)x86_sub(c, c.r[7], 0x5DCu, 0, 4);
    // 0d50a8  jl 0xd508b
    X86_AT(c, 0xd50a8u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xd508bu); goto L_d508b; }
L_d50aa:
    X86_TICK(c, 7);
    // 0d50aa  and bl, bl
    X86_AT(c, 0xd50aau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d50ac  jne 0xd50b0
    X86_AT(c, 0xd50acu);
    if (x86_cc(c, 5)) { goto L_d50b0; }
    X86_TICK(c, 2);
    // 0d50ae  mov bl, 0x20
    X86_AT(c, 0xd50aeu);
    s8(c, 3, 0x20u);
L_d50b0:
    X86_TICK(c, 12);
    // 0d50b0  movzx edx, bl
    X86_AT(c, 0xd50b0u);
    c.r[2] = g8(c, 3);
    // 0d50b3  dec edx
    X86_AT(c, 0xd50b3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d50b4  cmp edx, 0x59
    X86_AT(c, 0xd50b4u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0d50b7  ja 0xd53ee
    X86_AT(c, 0xd50b7u);
    if (x86_cc(c, 7)) { goto L_d53ee; }
    X86_TICK(c, 7);
    // 0d50bd  jmp dword ptr cs:[edx*4 + 0xd50c5]
    X86_AT(c, 0xd50bdu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD50C5u)));
      switch (t) {
      case 0xd522du: goto L_d522d;
      case 0xd527fu: goto L_d527f;
      case 0xd52cdu: goto L_d52cd;
      case 0xd52edu: goto L_d52ed;
      case 0xd5317u: goto L_d5317;
      case 0xd5326u: goto L_d5326;
      case 0xd5330u: goto L_d5330;
      case 0xd533au: goto L_d533a;
      case 0xd5344u: goto L_d5344;
      case 0xd534eu: goto L_d534e;
      case 0xd5358u: goto L_d5358;
      case 0xd5362u: goto L_d5362;
      case 0xd536cu: goto L_d536c;
      case 0xd5376u: goto L_d5376;
      case 0xd5380u: goto L_d5380;
      case 0xd538au: goto L_d538a;
      case 0xd5394u: goto L_d5394;
      case 0xd539eu: goto L_d539e;
      case 0xd53a5u: goto L_d53a5;
      case 0xd53acu: goto L_d53ac;
      case 0xd53b3u: goto L_d53b3;
      case 0xd53bau: goto L_d53ba;
      case 0xd53c1u: goto L_d53c1;
      case 0xd53c8u: goto L_d53c8;
      case 0xd53cfu: goto L_d53cf;
      case 0xd53d6u: goto L_d53d6;
      case 0xd53e7u: goto L_d53e7;
      case 0xd53eeu: goto L_d53ee;
      default: x86_jump(c, t); return; } }
L_d522d:
    X86_TICK(c, 9);
    // 0d522d  push ebx
    X86_AT(c, 0xd522du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d522e  call 0xd362c
    X86_AT(c, 0xd522eu);
    push32(c, 0xd5233u); x86_call_known(c, 0xd362cu, f_000d362c); X86_RET(c, 0xd5233u);
    X86_TICK(c, 9);
    // 0d5233  add esp, 4
    X86_AT(c, 0xd5233u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5236  dec eax
    X86_AT(c, 0xd5236u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5237  jne 0xd52e4
    X86_AT(c, 0xd5237u);
    if (x86_cc(c, 5)) { goto L_d52e4; }
    X86_TICK(c, 12);
    // 0d523d  movzx ebx, bl
    X86_AT(c, 0xd523du);
    c.r[3] = g8(c, 3);
    // 0d5240  push ebx
    X86_AT(c, 0xd5240u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5241  call 0xd4e04
    X86_AT(c, 0xd5241u);
    push32(c, 0xd5246u); x86_call_known(c, 0xd4e04u, f_000d4e04); X86_RET(c, 0xd5246u);
    X86_TICK(c, 13);
    // 0d5246  add esp, 4
    X86_AT(c, 0xd5246u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5249  mov eax, dword ptr [0xb0332]
    X86_AT(c, 0xd5249u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0332u)));
    // 0d524e  cmp eax, 1
    X86_AT(c, 0xd524eu);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0d5251  jl 0xd5402
    X86_AT(c, 0xd5251u);
    if (x86_cc(c, 12)) { goto L_d5402; }
    X86_TICK(c, 12);
    // 0d5257  cmp dword ptr [0xaa13c], 0
    X86_AT(c, 0xd5257u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA13Cu))), 0x0u, 0, 4);
    // 0d525e  je 0xd5402
    X86_AT(c, 0xd525eu);
    if (x86_cc(c, 4)) { goto L_d5402; }
    X86_TICK(c, 13);
    // 0d5264  lea eax, [eax*4 + 0x5a]
    X86_AT(c, 0xd5264u);
    c.r[0] = (uint32_t)(c.r[0] * 4 + 0x5Au);
    // 0d526b  mov dword ptr [0x4319c], eax
    X86_AT(c, 0xd526bu);
    wr32((c.sbase[3] + (uint32_t)(0x4319Cu)), c.r[0]);
    // 0d5270  mov dword ptr [0xaa13c], 0
    X86_AT(c, 0xd5270u);
    wr32((c.sbase[3] + (uint32_t)(0xAA13Cu)), 0x0u);
    // 0d527a  jmp 0xd5402
    X86_AT(c, 0xd527au);
    goto L_d5402;
L_d527f:
    X86_TICK(c, 9);
    // 0d527f  push ebx
    X86_AT(c, 0xd527fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5280  call 0xd362c
    X86_AT(c, 0xd5280u);
    push32(c, 0xd5285u); x86_call_known(c, 0xd362cu, f_000d362c); X86_RET(c, 0xd5285u);
    X86_TICK(c, 9);
    // 0d5285  add esp, 4
    X86_AT(c, 0xd5285u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5288  dec eax
    X86_AT(c, 0xd5288u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5289  jne 0xd52e4
    X86_AT(c, 0xd5289u);
    if (x86_cc(c, 5)) { goto L_d52e4; }
    X86_TICK(c, 12);
    // 0d528b  movzx ebx, bl
    X86_AT(c, 0xd528bu);
    c.r[3] = g8(c, 3);
    // 0d528e  push ebx
    X86_AT(c, 0xd528eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d528f  call 0xd4e04
    X86_AT(c, 0xd528fu);
    push32(c, 0xd5294u); x86_call_known(c, 0xd4e04u, f_000d4e04); X86_RET(c, 0xd5294u);
    X86_TICK(c, 13);
    // 0d5294  add esp, 4
    X86_AT(c, 0xd5294u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5297  mov eax, dword ptr [0xb0332]
    X86_AT(c, 0xd5297u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0332u)));
    // 0d529c  cmp eax, 1
    X86_AT(c, 0xd529cu);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0d529f  jl 0xd5402
    X86_AT(c, 0xd529fu);
    if (x86_cc(c, 12)) { goto L_d5402; }
    X86_TICK(c, 12);
    // 0d52a5  cmp dword ptr [0xaa13c], 0
    X86_AT(c, 0xd52a5u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA13Cu))), 0x0u, 0, 4);
    // 0d52ac  jne 0xd5402
    X86_AT(c, 0xd52acu);
    if (x86_cc(c, 5)) { goto L_d5402; }
    X86_TICK(c, 13);
    // 0d52b2  lea eax, [eax*4 + 0x58]
    X86_AT(c, 0xd52b2u);
    c.r[0] = (uint32_t)(c.r[0] * 4 + 0x58u);
    // 0d52b9  mov dword ptr [0x4319c], eax
    X86_AT(c, 0xd52b9u);
    wr32((c.sbase[3] + (uint32_t)(0x4319Cu)), c.r[0]);
    // 0d52be  mov dword ptr [0xaa13c], 1
    X86_AT(c, 0xd52beu);
    wr32((c.sbase[3] + (uint32_t)(0xAA13Cu)), 0x1u);
    // 0d52c8  jmp 0xd5402
    X86_AT(c, 0xd52c8u);
    goto L_d5402;
L_d52cd:
    X86_TICK(c, 9);
    // 0d52cd  push ebx
    X86_AT(c, 0xd52cdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d52ce  call 0xd362c
    X86_AT(c, 0xd52ceu);
    push32(c, 0xd52d3u); x86_call_known(c, 0xd362cu, f_000d362c); X86_RET(c, 0xd52d3u);
    X86_TICK(c, 9);
    // 0d52d3  add esp, 4
    X86_AT(c, 0xd52d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d52d6  dec eax
    X86_AT(c, 0xd52d6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d52d7  jne 0xd52e4
    X86_AT(c, 0xd52d7u);
    if (x86_cc(c, 5)) { goto L_d52e4; }
    X86_TICK(c, 12);
    // 0d52d9  movzx ebx, bl
    X86_AT(c, 0xd52d9u);
    c.r[3] = g8(c, 3);
    // 0d52dc  push ebx
    X86_AT(c, 0xd52dcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d52dd  call 0xd4e04
    X86_AT(c, 0xd52ddu);
    push32(c, 0xd52e2u); x86_call_known(c, 0xd4e04u, f_000d4e04); X86_RET(c, 0xd52e2u);
    X86_TICK(c, 7);
    // 0d52e2  jmp 0xd531e
    X86_AT(c, 0xd52e2u);
    goto L_d531e;
L_d52e4:
    X86_TICK(c, 9);
    // 0d52e4  push 0
    X86_AT(c, 0xd52e4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d52e6  call 0xc5ca4
    X86_AT(c, 0xd52e6u);
    push32(c, 0xd52ebu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd52ebu);
    X86_TICK(c, 7);
    // 0d52eb  jmp 0xd531e
    X86_AT(c, 0xd52ebu);
    goto L_d531e;
L_d52ed:
    X86_TICK(c, 9);
    // 0d52ed  push ebx
    X86_AT(c, 0xd52edu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d52ee  call 0xd362c
    X86_AT(c, 0xd52eeu);
    push32(c, 0xd52f3u); x86_call_known(c, 0xd362cu, f_000d362c); X86_RET(c, 0xd52f3u);
    X86_TICK(c, 9);
    // 0d52f3  add esp, 4
    X86_AT(c, 0xd52f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d52f6  dec eax
    X86_AT(c, 0xd52f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d52f7  jne 0xd5304
    X86_AT(c, 0xd52f7u);
    if (x86_cc(c, 5)) { goto L_d5304; }
    X86_TICK(c, 12);
    // 0d52f9  movzx ebx, bl
    X86_AT(c, 0xd52f9u);
    c.r[3] = g8(c, 3);
    // 0d52fc  push ebx
    X86_AT(c, 0xd52fcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d52fd  call 0xd4e04
    X86_AT(c, 0xd52fdu);
    push32(c, 0xd5302u); x86_call_known(c, 0xd4e04u, f_000d4e04); X86_RET(c, 0xd5302u);
    X86_TICK(c, 7);
    // 0d5302  jmp 0xd530b
    X86_AT(c, 0xd5302u);
    goto L_d530b;
L_d5304:
    X86_TICK(c, 9);
    // 0d5304  push 0
    X86_AT(c, 0xd5304u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d5306  call 0xc5ca4
    X86_AT(c, 0xd5306u);
    push32(c, 0xd530bu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd530bu);
L_d530b:
    X86_TICK(c, 11);
    // 0d530b  add esp, 4
    X86_AT(c, 0xd530bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d530e  push 0
    X86_AT(c, 0xd530eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d5310  call 0xc60ac
    X86_AT(c, 0xd5310u);
    push32(c, 0xd5315u); x86_call_known(c, 0xc60acu, f_000c60ac); X86_RET(c, 0xd5315u);
    X86_TICK(c, 7);
    // 0d5315  jmp 0xd531e
    X86_AT(c, 0xd5315u);
    goto L_d531e;
L_d5317:
    X86_TICK(c, 9);
    // 0d5317  push 0xffffffff
    X86_AT(c, 0xd5317u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d5319  call 0xcf580
    X86_AT(c, 0xd5319u);
    push32(c, 0xd531eu); x86_call_known(c, 0xcf580u, f_000cf580); X86_RET(c, 0xd531eu);
L_d531e:
    X86_TICK(c, 9);
    // 0d531e  add esp, 4
    X86_AT(c, 0xd531eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5321  jmp 0xd5402
    X86_AT(c, 0xd5321u);
    goto L_d5402;
L_d5326:
    X86_TICK(c, 7);
    // 0d5326  call 0xcc9e0
    X86_AT(c, 0xd5326u);
    push32(c, 0xd532bu); x86_call_known(c, 0xcc9e0u, f_000cc9e0); X86_RET(c, 0xd532bu);
    X86_TICK(c, 7);
    // 0d532b  jmp 0xd5402
    X86_AT(c, 0xd532bu);
    goto L_d5402;
L_d5330:
    X86_TICK(c, 7);
    // 0d5330  call 0xcd1a8
    X86_AT(c, 0xd5330u);
    push32(c, 0xd5335u); x86_call_known(c, 0xcd1a8u, f_000cd1a8); X86_RET(c, 0xd5335u);
    X86_TICK(c, 7);
    // 0d5335  jmp 0xd5402
    X86_AT(c, 0xd5335u);
    goto L_d5402;
L_d533a:
    X86_TICK(c, 7);
    // 0d533a  call 0xcd824
    X86_AT(c, 0xd533au);
    push32(c, 0xd533fu); x86_call_known(c, 0xcd824u, f_000cd824); X86_RET(c, 0xd533fu);
    X86_TICK(c, 7);
    // 0d533f  jmp 0xd5402
    X86_AT(c, 0xd533fu);
    goto L_d5402;
L_d5344:
    X86_TICK(c, 7);
    // 0d5344  call 0xd4c30
    X86_AT(c, 0xd5344u);
    push32(c, 0xd5349u); x86_call_known(c, 0xd4c30u, f_000d4c30); X86_RET(c, 0xd5349u);
    X86_TICK(c, 7);
    // 0d5349  jmp 0xd5402
    X86_AT(c, 0xd5349u);
    goto L_d5402;
L_d534e:
    X86_TICK(c, 7);
    // 0d534e  call 0xcd8c0
    X86_AT(c, 0xd534eu);
    push32(c, 0xd5353u); x86_call_known(c, 0xcd8c0u, f_000cd8c0); X86_RET(c, 0xd5353u);
    X86_TICK(c, 7);
    // 0d5353  jmp 0xd5402
    X86_AT(c, 0xd5353u);
    goto L_d5402;
L_d5358:
    X86_TICK(c, 7);
    // 0d5358  call 0xcfa18
    X86_AT(c, 0xd5358u);
    push32(c, 0xd535du); x86_call_known(c, 0xcfa18u, f_000cfa18); X86_RET(c, 0xd535du);
    X86_TICK(c, 7);
    // 0d535d  jmp 0xd5402
    X86_AT(c, 0xd535du);
    goto L_d5402;
L_d5362:
    X86_TICK(c, 7);
    // 0d5362  call 0xcd938
    X86_AT(c, 0xd5362u);
    push32(c, 0xd5367u); x86_call_known(c, 0xcd938u, f_000cd938); X86_RET(c, 0xd5367u);
    X86_TICK(c, 7);
    // 0d5367  jmp 0xd5402
    X86_AT(c, 0xd5367u);
    goto L_d5402;
L_d536c:
    X86_TICK(c, 7);
    // 0d536c  call 0xcd9f0
    X86_AT(c, 0xd536cu);
    push32(c, 0xd5371u); x86_call_known(c, 0xcd9f0u, f_000cd9f0); X86_RET(c, 0xd5371u);
    X86_TICK(c, 7);
    // 0d5371  jmp 0xd5402
    X86_AT(c, 0xd5371u);
    goto L_d5402;
L_d5376:
    X86_TICK(c, 7);
    // 0d5376  call 0xce424
    X86_AT(c, 0xd5376u);
    push32(c, 0xd537bu); x86_call_known(c, 0xce424u, f_000ce424); X86_RET(c, 0xd537bu);
    X86_TICK(c, 7);
    // 0d537b  jmp 0xd5402
    X86_AT(c, 0xd537bu);
    goto L_d5402;
L_d5380:
    X86_TICK(c, 7);
    // 0d5380  call 0xdc4d4
    X86_AT(c, 0xd5380u);
    push32(c, 0xd5385u); x86_call_known(c, 0xdc4d4u, f_000dc4d4); X86_RET(c, 0xd5385u);
    X86_TICK(c, 7);
    // 0d5385  jmp 0xd5402
    X86_AT(c, 0xd5385u);
    goto L_d5402;
L_d538a:
    X86_TICK(c, 7);
    // 0d538a  call 0xcfa5c
    X86_AT(c, 0xd538au);
    push32(c, 0xd538fu); x86_call_known(c, 0xcfa5cu, f_000cfa5c); X86_RET(c, 0xd538fu);
    X86_TICK(c, 7);
    // 0d538f  jmp 0xd5402
    X86_AT(c, 0xd538fu);
    goto L_d5402;
L_d5394:
    X86_TICK(c, 7);
    // 0d5394  call 0xcdbe8
    X86_AT(c, 0xd5394u);
    push32(c, 0xd5399u); x86_call_known(c, 0xcdbe8u, f_000cdbe8); X86_RET(c, 0xd5399u);
    X86_TICK(c, 7);
    // 0d5399  jmp 0xd5402
    X86_AT(c, 0xd5399u);
    goto L_d5402;
L_d539e:
    X86_TICK(c, 7);
    // 0d539e  call 0xcdfdc
    X86_AT(c, 0xd539eu);
    push32(c, 0xd53a3u); x86_call_known(c, 0xcdfdcu, f_000cdfdc); X86_RET(c, 0xd53a3u);
    X86_TICK(c, 7);
    // 0d53a3  jmp 0xd5402
    X86_AT(c, 0xd53a3u);
    goto L_d5402;
L_d53a5:
    X86_TICK(c, 7);
    // 0d53a5  call 0xcfc24
    X86_AT(c, 0xd53a5u);
    push32(c, 0xd53aau); x86_call_known(c, 0xcfc24u, f_000cfc24); X86_RET(c, 0xd53aau);
    X86_TICK(c, 7);
    // 0d53aa  jmp 0xd5402
    X86_AT(c, 0xd53aau);
    goto L_d5402;
L_d53ac:
    X86_TICK(c, 7);
    // 0d53ac  call 0xcff4c
    X86_AT(c, 0xd53acu);
    push32(c, 0xd53b1u); x86_call_known(c, 0xcff4cu, f_000cff4c); X86_RET(c, 0xd53b1u);
    X86_TICK(c, 7);
    // 0d53b1  jmp 0xd5402
    X86_AT(c, 0xd53b1u);
    goto L_d5402;
L_d53b3:
    X86_TICK(c, 7);
    // 0d53b3  call 0xd20ec
    X86_AT(c, 0xd53b3u);
    push32(c, 0xd53b8u); x86_call_known(c, 0xd20ecu, f_000d20ec); X86_RET(c, 0xd53b8u);
    X86_TICK(c, 7);
    // 0d53b8  jmp 0xd5402
    X86_AT(c, 0xd53b8u);
    goto L_d5402;
L_d53ba:
    X86_TICK(c, 7);
    // 0d53ba  call 0xce1d0
    X86_AT(c, 0xd53bau);
    push32(c, 0xd53bfu); x86_call_known(c, 0xce1d0u, f_000ce1d0); X86_RET(c, 0xd53bfu);
    X86_TICK(c, 7);
    // 0d53bf  jmp 0xd5402
    X86_AT(c, 0xd53bfu);
    goto L_d5402;
L_d53c1:
    X86_TICK(c, 7);
    // 0d53c1  call 0xce258
    X86_AT(c, 0xd53c1u);
    push32(c, 0xd53c6u); x86_call_known(c, 0xce258u, f_000ce258); X86_RET(c, 0xd53c6u);
    X86_TICK(c, 7);
    // 0d53c6  jmp 0xd5402
    X86_AT(c, 0xd53c6u);
    goto L_d5402;
L_d53c8:
    X86_TICK(c, 7);
    // 0d53c8  call 0xce270
    X86_AT(c, 0xd53c8u);
    push32(c, 0xd53cdu); x86_call_known(c, 0xce270u, f_000ce270); X86_RET(c, 0xd53cdu);
    X86_TICK(c, 7);
    // 0d53cd  jmp 0xd5402
    X86_AT(c, 0xd53cdu);
    goto L_d5402;
L_d53cf:
    X86_TICK(c, 7);
    // 0d53cf  call 0xce57c
    X86_AT(c, 0xd53cfu);
    push32(c, 0xd53d4u); x86_call_known(c, 0xce57cu, f_000ce57c); X86_RET(c, 0xd53d4u);
    X86_TICK(c, 7);
    // 0d53d4  jmp 0xd5402
    X86_AT(c, 0xd53d4u);
    goto L_d5402;
L_d53d6:
    X86_TICK(c, 7);
    // 0d53d6  call 0xd238c
    X86_AT(c, 0xd53d6u);
    push32(c, 0xd53dbu); x86_call_known(c, 0xd238cu, f_000d238c); X86_RET(c, 0xd53dbu);
    X86_TICK(c, 9);
    // 0d53db  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xd53dbu);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0d53e5  jmp 0xd5402
    X86_AT(c, 0xd53e5u);
    goto L_d5402;
L_d53e7:
    X86_TICK(c, 7);
    // 0d53e7  call 0xcdcf8
    X86_AT(c, 0xd53e7u);
    push32(c, 0xd53ecu); x86_call_known(c, 0xcdcf8u, f_000cdcf8); X86_RET(c, 0xd53ecu);
    X86_TICK(c, 7);
    // 0d53ec  jmp 0xd5402
    X86_AT(c, 0xd53ecu);
    goto L_d5402;
L_d53ee:
    X86_TICK(c, 9);
    // 0d53ee  push 0x9c88
    X86_AT(c, 0xd53eeu);
    { uint32_t v = 0x9C88u; push32(c, v); }
    // 0d53f3  call 0xcc7bc
    X86_AT(c, 0xd53f3u);
    push32(c, 0xd53f8u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd53f8u);
    X86_TICK(c, 9);
    // 0d53f8  push 1
    X86_AT(c, 0xd53f8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d53fa  call 0xc5ca4
    X86_AT(c, 0xd53fau);
    push32(c, 0xd53ffu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd53ffu);
    X86_TICK(c, 2);
    // 0d53ff  add esp, 8
    X86_AT(c, 0xd53ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d5402:
    X86_TICK(c, 12);
    // 0d5402  cmp dword ptr [0xb134c], 1
    X86_AT(c, 0xd5402u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB134Cu))), 0x1u, 0, 4);
    // 0d5409  je 0xd545c
    X86_AT(c, 0xd5409u);
    if (x86_cc(c, 4)) { goto L_d545c; }
    X86_TICK(c, 12);
    // 0d540b  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xd540bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0d5412  jne 0xd5422
    X86_AT(c, 0xd5412u);
    if (x86_cc(c, 5)) { goto L_d5422; }
    X86_TICK(c, 12);
    // 0d5414  cmp dword ptr [0xaa2a8], 0xa
    X86_AT(c, 0xd5414u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAA2A8u))), 0xAu, 0, 4);
    // 0d541b  jg 0xd5422
    X86_AT(c, 0xd541bu);
    if (x86_cc(c, 15)) { goto L_d5422; }
    X86_TICK(c, 7);
    // 0d541d  call 0xd26f0
    X86_AT(c, 0xd541du);
    push32(c, 0xd5422u); x86_call_known(c, 0xd26f0u, f_000d26f0); X86_RET(c, 0xd5422u);
L_d5422:
    X86_TICK(c, 13);
    // 0d5422  inc dword ptr [0xaa2dc]
    X86_AT(c, 0xd5422u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2DCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d5428  call 0xd32d4
    X86_AT(c, 0xd5428u);
    push32(c, 0xd542du); x86_call_known(c, 0xd32d4u, f_000d32d4); X86_RET(c, 0xd542du);
    X86_TICK(c, 7);
    // 0d542d  call 0xd3334
    X86_AT(c, 0xd542du);
    push32(c, 0xd5432u); x86_call_known(c, 0xd3334u, f_000d3334); X86_RET(c, 0xd5432u);
    X86_TICK(c, 18);
    // 0d5432  mov eax, dword ptr [0xb52f8]
    X86_AT(c, 0xd5432u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB52F8u)));
    // 0d5437  mov dword ptr [0xaa2c8], eax
    X86_AT(c, 0xd5437u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2C8u)), c.r[0]);
    // 0d543c  cmp dword ptr [0xb0332], 0
    X86_AT(c, 0xd543cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0332u))), 0x0u, 0, 4);
    // 0d5443  jne 0xd544a
    X86_AT(c, 0xd5443u);
    if (x86_cc(c, 5)) { goto L_d544a; }
    X86_TICK(c, 7);
    // 0d5445  call 0xc6a28
    X86_AT(c, 0xd5445u);
    push32(c, 0xd544au); x86_call_known(c, 0xc6a28u, f_000c6a28); X86_RET(c, 0xd544au);
L_d544a:
    X86_TICK(c, 7);
    // 0d544a  call 0xc6bb0
    X86_AT(c, 0xd544au);
    push32(c, 0xd544fu); x86_call_known(c, 0xc6bb0u, f_000c6bb0); X86_RET(c, 0xd544fu);
    X86_TICK(c, 12);
    // 0d544f  cmp dword ptr [0xb134c], 0
    X86_AT(c, 0xd544fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB134Cu))), 0x0u, 0, 4);
    // 0d5456  je 0xd5068
    X86_AT(c, 0xd5456u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd5068u); goto L_d5068; }
L_d545c:
    X86_TICK(c, 28);
    // 0d545c  pop edi
    X86_AT(c, 0xd545cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d545d  pop esi
    X86_AT(c, 0xd545du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d545e  pop ebx
    X86_AT(c, 0xd545eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d545f  leave 
    X86_AT(c, 0xd545fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d5460  ret 
    X86_AT(c, 0xd5460u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5402u, "ran off the end of a function");
}
void f_000d5464(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0d5464  push ebp
    X86_AT(c, 0xd5464u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d5465  mov ebp, esp
    X86_AT(c, 0xd5465u);
    c.r[5] = c.r[4];
    // 0d5467  push eax
    X86_AT(c, 0xd5467u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d5468  push ebx
    X86_AT(c, 0xd5468u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5469  push esi
    X86_AT(c, 0xd5469u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d546a  push edi
    X86_AT(c, 0xd546au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d546b  cmp dword ptr [ebp + 8], 2
    X86_AT(c, 0xd546bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x2u, 0, 4);
    // 0d546f  jg 0xd5489
    X86_AT(c, 0xd546fu);
    if (x86_cc(c, 15)) { goto L_d5489; }
    X86_TICK(c, 11);
    // 0d5471  mov eax, dword ptr [0xaa2c4]
    X86_AT(c, 0xd5471u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA2C4u)));
    // 0d5476  and eax, eax
    X86_AT(c, 0xd5476u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d5478  je 0xd5489
    X86_AT(c, 0xd5478u);
    if (x86_cc(c, 4)) { goto L_d5489; }
    X86_TICK(c, 15);
    // 0d547a  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xd547au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0d5481  dec dword ptr [0xaa2c4]
    X86_AT(c, 0xd5481u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2C4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d5487  jmp 0xd54b2
    X86_AT(c, 0xd5487u);
    goto L_d54b2;
L_d5489:
    X86_TICK(c, 11);
    // 0d5489  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd5489u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d548c  cmp eax, 4
    X86_AT(c, 0xd548cu);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0d548f  je 0xd5496
    X86_AT(c, 0xd548fu);
    if (x86_cc(c, 4)) { goto L_d5496; }
    X86_TICK(c, 7);
    // 0d5491  cmp eax, 3
    X86_AT(c, 0xd5491u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0d5494  jne 0xd54a5
    X86_AT(c, 0xd5494u);
    if (x86_cc(c, 5)) { goto L_d54a5; }
L_d5496:
    X86_TICK(c, 15);
    // 0d5496  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xd5496u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0d549d  dec dword ptr [0xaa2bc]
    X86_AT(c, 0xd549du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2BCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d54a3  jmp 0xd54b2
    X86_AT(c, 0xd54a3u);
    goto L_d54b2;
L_d54a5:
    X86_TICK(c, 8);
    // 0d54a5  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xd54a5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0d54ac  dec dword ptr [0xaa2c0]
    X86_AT(c, 0xd54acu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2C0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_d54b2:
    X86_TICK(c, 2);
    // 0d54b2  mov esi, 0xffffffff
    X86_AT(c, 0xd54b2u);
    c.r[6] = 0xFFFFFFFFu;
L_d54b7:
    X86_TICK(c, 2);
    // 0d54b7  mov edi, 0xffffffff
    X86_AT(c, 0xd54b7u);
    c.r[7] = 0xFFFFFFFFu;
L_d54bc:
    X86_TICK(c, 25);
    // 0d54bc  push 1
    X86_AT(c, 0xd54bcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d54be  mov eax, dword ptr [0xaa0e8]
    X86_AT(c, 0xd54beu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA0E8u)));
    // 0d54c3  add eax, esi
    X86_AT(c, 0xd54c3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0d54c5  push eax
    X86_AT(c, 0xd54c5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d54c6  mov eax, dword ptr [0xaa0e4]
    X86_AT(c, 0xd54c6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA0E4u)));
    // 0d54cb  add eax, edi
    X86_AT(c, 0xd54cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0d54cd  push eax
    X86_AT(c, 0xd54cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d54ce  call 0xcc538
    X86_AT(c, 0xd54ceu);
    push32(c, 0xd54d3u); x86_call_known(c, 0xcc538u, f_000cc538); X86_RET(c, 0xd54d3u);
    X86_TICK(c, 11);
    // 0d54d3  cmp eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd54d3u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0d54d6  je 0xd554b
    X86_AT(c, 0xd54d6u);
    if (x86_cc(c, 4)) { goto L_d554b; }
    X86_TICK(c, 11);
    // 0d54dc  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd54dcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d54df  cmp eax, 4
    X86_AT(c, 0xd54dfu);
    (void)x86_sub(c, c.r[0], 0x4u, 0, 4);
    // 0d54e2  je 0xd54e9
    X86_AT(c, 0xd54e2u);
    if (x86_cc(c, 4)) { goto L_d54e9; }
    X86_TICK(c, 7);
    // 0d54e4  cmp eax, 3
    X86_AT(c, 0xd54e4u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0d54e7  jne 0xd5547
    X86_AT(c, 0xd54e7u);
    if (x86_cc(c, 5)) { goto L_d5547; }
L_d54e9:
    X86_TICK(c, 25);
    // 0d54e9  push 1
    X86_AT(c, 0xd54e9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d54eb  mov eax, dword ptr [0xaa0e8]
    X86_AT(c, 0xd54ebu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA0E8u)));
    // 0d54f0  add eax, esi
    X86_AT(c, 0xd54f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0d54f2  push eax
    X86_AT(c, 0xd54f2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d54f3  mov eax, dword ptr [0xaa0e4]
    X86_AT(c, 0xd54f3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA0E4u)));
    // 0d54f8  add eax, edi
    X86_AT(c, 0xd54f8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0d54fa  push eax
    X86_AT(c, 0xd54fau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d54fb  call 0xcc538
    X86_AT(c, 0xd54fbu);
    push32(c, 0xd5500u); x86_call_known(c, 0xcc538u, f_000cc538); X86_RET(c, 0xd5500u);
    X86_TICK(c, 9);
    // 0d5500  add esp, 0xc
    X86_AT(c, 0xd5500u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d5503  cmp eax, 0xa
    X86_AT(c, 0xd5503u);
    (void)x86_sub(c, c.r[0], 0xAu, 0, 4);
    // 0d5506  je 0xd554b
    X86_AT(c, 0xd5506u);
    if (x86_cc(c, 4)) { goto L_d554b; }
    X86_TICK(c, 25);
    // 0d5508  push 1
    X86_AT(c, 0xd5508u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d550a  mov eax, dword ptr [0xaa0e8]
    X86_AT(c, 0xd550au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA0E8u)));
    // 0d550f  add eax, esi
    X86_AT(c, 0xd550fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0d5511  push eax
    X86_AT(c, 0xd5511u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d5512  mov eax, dword ptr [0xaa0e4]
    X86_AT(c, 0xd5512u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA0E4u)));
    // 0d5517  add eax, edi
    X86_AT(c, 0xd5517u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0d5519  push eax
    X86_AT(c, 0xd5519u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d551a  call 0xcc538
    X86_AT(c, 0xd551au);
    push32(c, 0xd551fu); x86_call_known(c, 0xcc538u, f_000cc538); X86_RET(c, 0xd551fu);
    X86_TICK(c, 9);
    // 0d551f  add esp, 0xc
    X86_AT(c, 0xd551fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d5522  cmp eax, 0x11
    X86_AT(c, 0xd5522u);
    (void)x86_sub(c, c.r[0], 0x11u, 0, 4);
    // 0d5525  jle 0xd5547
    X86_AT(c, 0xd5525u);
    if (x86_cc(c, 14)) { goto L_d5547; }
    X86_TICK(c, 27);
    // 0d5527  push 1
    X86_AT(c, 0xd5527u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d5529  mov eax, esi
    X86_AT(c, 0xd5529u);
    c.r[0] = c.r[6];
    // 0d552b  add eax, dword ptr [0xaa0e8]
    X86_AT(c, 0xd552bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xAA0E8u))), 0, 4); }
    // 0d5531  push eax
    X86_AT(c, 0xd5531u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d5532  mov eax, dword ptr [0xaa0e4]
    X86_AT(c, 0xd5532u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA0E4u)));
    // 0d5537  add eax, edi
    X86_AT(c, 0xd5537u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0d5539  push eax
    X86_AT(c, 0xd5539u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d553a  call 0xcc538
    X86_AT(c, 0xd553au);
    push32(c, 0xd553fu); x86_call_known(c, 0xcc538u, f_000cc538); X86_RET(c, 0xd553fu);
    X86_TICK(c, 9);
    // 0d553f  add esp, 0xc
    X86_AT(c, 0xd553fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d5542  cmp eax, 0x21
    X86_AT(c, 0xd5542u);
    (void)x86_sub(c, c.r[0], 0x21u, 0, 4);
    // 0d5545  jl 0xd554b
    X86_AT(c, 0xd5545u);
    if (x86_cc(c, 12)) { goto L_d554b; }
L_d5547:
    X86_TICK(c, 9);
    // 0d5547  sub eax, eax
    X86_AT(c, 0xd5547u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d5549  jmp 0xd554d
    X86_AT(c, 0xd5549u);
    goto L_d554d;
L_d554b:
    X86_TICK(c, 2);
    // 0d554b  mov al, 1
    X86_AT(c, 0xd554bu);
    s8(c, 0, 0x1u);
L_d554d:
    X86_TICK(c, 14);
    // 0d554d  movzx ebx, al
    X86_AT(c, 0xd554du);
    c.r[3] = g8(c, 0);
    // 0d5550  inc edi
    X86_AT(c, 0xd5550u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d5551  add esp, 0xc
    X86_AT(c, 0xd5551u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d5554  cmp edi, 2
    X86_AT(c, 0xd5554u);
    (void)x86_sub(c, c.r[7], 0x2u, 0, 4);
    // 0d5557  jge 0xd5561
    X86_AT(c, 0xd5557u);
    if (x86_cc(c, 13)) { goto L_d5561; }
    X86_TICK(c, 7);
    // 0d5559  and ebx, ebx
    X86_AT(c, 0xd5559u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d555b  je 0xd54bc
    X86_AT(c, 0xd555bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd54bcu); goto L_d54bc; }
L_d5561:
    X86_TICK(c, 7);
    // 0d5561  and ebx, ebx
    X86_AT(c, 0xd5561u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d5563  jne 0xd5568
    X86_AT(c, 0xd5563u);
    if (x86_cc(c, 5)) { goto L_d5568; }
    X86_TICK(c, 9);
    // 0d5565  inc esi
    X86_AT(c, 0xd5565u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d5566  jmp 0xd5569
    X86_AT(c, 0xd5566u);
    goto L_d5569;
L_d5568:
    X86_TICK(c, 2);
    // 0d5568  dec edi
    X86_AT(c, 0xd5568u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
L_d5569:
    X86_TICK(c, 7);
    // 0d5569  cmp esi, 2
    X86_AT(c, 0xd5569u);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 0d556c  jge 0xd5576
    X86_AT(c, 0xd556cu);
    if (x86_cc(c, 13)) { goto L_d5576; }
    X86_TICK(c, 7);
    // 0d556e  and ebx, ebx
    X86_AT(c, 0xd556eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d5570  je 0xd54b7
    X86_AT(c, 0xd5570u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd54b7u); goto L_d54b7; }
L_d5576:
    X86_TICK(c, 52);
    // 0d5576  push 0
    X86_AT(c, 0xd5576u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d5578  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd5578u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d557b  lea eax, [eax*4 + 0x58]
    X86_AT(c, 0xd557bu);
    c.r[0] = (uint32_t)(c.r[0] * 4 + 0x58u);
    // 0d5582  push eax
    X86_AT(c, 0xd5582u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d5583  push 0
    X86_AT(c, 0xd5583u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d5585  mov eax, esi
    X86_AT(c, 0xd5585u);
    c.r[0] = c.r[6];
    // 0d5587  add eax, dword ptr [0xaa0e8]
    X86_AT(c, 0xd5587u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xAA0E8u))), 0, 4); }
    // 0d558d  push eax
    X86_AT(c, 0xd558du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d558e  mov eax, edi
    X86_AT(c, 0xd558eu);
    c.r[0] = c.r[7];
    // 0d5590  add eax, dword ptr [0xaa0e4]
    X86_AT(c, 0xd5590u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xAA0E4u))), 0, 4); }
    // 0d5596  push eax
    X86_AT(c, 0xd5596u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d5597  push dword ptr [ebp - 4]
    X86_AT(c, 0xd5597u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d559a  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd559au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d559d  add eax, 0xa4
    X86_AT(c, 0xd559du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xA4u, 0, 4); }
    // 0d55a2  push eax
    X86_AT(c, 0xd55a2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d55a3  call 0xcf6b0
    X86_AT(c, 0xd55a3u);
    push32(c, 0xd55a8u); x86_call_known(c, 0xcf6b0u, f_000cf6b0); X86_RET(c, 0xd55a8u);
    X86_TICK(c, 30);
    // 0d55a8  add esp, 0x1c
    X86_AT(c, 0xd55a8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d55ab  pop edi
    X86_AT(c, 0xd55abu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d55ac  pop esi
    X86_AT(c, 0xd55acu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d55ad  pop ebx
    X86_AT(c, 0xd55adu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d55ae  leave 
    X86_AT(c, 0xd55aeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d55af  ret 
    X86_AT(c, 0xd55afu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5464u, "ran off the end of a function");
}
void f_000d55b0(X86Cpu& c) {
    X86_TICK(c, 47);
    // 0d55b0  push ebp
    X86_AT(c, 0xd55b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d55b1  mov ebp, esp
    X86_AT(c, 0xd55b1u);
    c.r[5] = c.r[4];
    // 0d55b3  sub esp, 8
    X86_AT(c, 0xd55b3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0d55b6  push ebx
    X86_AT(c, 0xd55b6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d55b7  push esi
    X86_AT(c, 0xd55b7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d55b8  push edi
    X86_AT(c, 0xd55b8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d55b9  sub eax, eax
    X86_AT(c, 0xd55b9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d55bb  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd55bbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d55be  mov edx, dword ptr [0xb033a]
    X86_AT(c, 0xd55beu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0d55c4  mov dword ptr [0xaa0e4], edx
    X86_AT(c, 0xd55c4u);
    wr32((c.sbase[3] + (uint32_t)(0xAA0E4u)), c.r[2]);
    // 0d55ca  mov edx, dword ptr [0xb033e]
    X86_AT(c, 0xd55cau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0d55d0  mov dword ptr [0xaa0e8], edx
    X86_AT(c, 0xd55d0u);
    wr32((c.sbase[3] + (uint32_t)(0xAA0E8u)), c.r[2]);
    // 0d55d6  mov dword ptr [0xb033a], 5
    X86_AT(c, 0xd55d6u);
    wr32((c.sbase[3] + (uint32_t)(0xB033Au)), 0x5u);
    // 0d55e0  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xd55e0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d55e3  dec edx
    X86_AT(c, 0xd55e3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d55e4  mov ecx, edx
    X86_AT(c, 0xd55e4u);
    c.r[1] = c.r[2];
    // 0d55e6  and edx, 1
    X86_AT(c, 0xd55e6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x1u, 4); }
    // 0d55ec  and ecx, ecx
    X86_AT(c, 0xd55ecu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0d55ee  jge 0xd55f3
    X86_AT(c, 0xd55eeu);
    if (x86_cc(c, 13)) { goto L_d55f3; }
    X86_TICK(c, 2);
    // 0d55f0  sub edx, 2
    X86_AT(c, 0xd55f0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x2u, 0, 4); }
L_d55f3:
    X86_TICK(c, 11);
    // 0d55f3  lea edx, [edx + edx*4]
    X86_AT(c, 0xd55f3u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0d55f6  lea edx, [edx + edx*2]
    X86_AT(c, 0xd55f6u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0d55f9  lea edx, [edx + edx*1 + 0xe]
    X86_AT(c, 0xd55f9u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] + 0xEu);
    // 0d55fd  mov dword ptr [0xb033e], edx
    X86_AT(c, 0xd55fdu);
    wr32((c.sbase[3] + (uint32_t)(0xB033Eu)), c.r[2]);
    // 0d5603  xchg esi, eax
    X86_AT(c, 0xd5603u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_d5604:
    X86_TICK(c, 7);
    // 0d5604  cmp esi, 0x10
    X86_AT(c, 0xd5604u);
    (void)x86_sub(c, c.r[6], 0x10u, 0, 4);
    // 0d5607  jg 0xd5617
    X86_AT(c, 0xd5607u);
    if (x86_cc(c, 15)) { goto L_d5617; }
    X86_TICK(c, 11);
    // 0d5609  mov dword ptr [esi*4 + 0xaa0f0], 0
    X86_AT(c, 0xd5609u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xAA0F0u)), 0x0u);
    // 0d5614  inc esi
    X86_AT(c, 0xd5614u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d5615  jmp 0xd5604
    X86_AT(c, 0xd5615u);
    X86_POLL(c, 0xd5604u); goto L_d5604;
L_d5617:
    X86_TICK(c, 27);
    // 0d5617  mov dword ptr [0xaa0ec], 0
    X86_AT(c, 0xd5617u);
    wr32((c.sbase[3] + (uint32_t)(0xAA0ECu)), 0x0u);
    // 0d5621  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd5621u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d5624  sub eax, 0x21
    X86_AT(c, 0xd5624u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x21u, 0, 4); }
    // 0d5627  mov dword ptr [0xaaea4], eax
    X86_AT(c, 0xd5627u);
    wr32((c.sbase[3] + (uint32_t)(0xAAEA4u)), c.r[0]);
    // 0d562c  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xd562cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d562f  dec edx
    X86_AT(c, 0xd562fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d5630  mov ecx, edx
    X86_AT(c, 0xd5630u);
    c.r[1] = c.r[2];
    // 0d5632  and edx, 1
    X86_AT(c, 0xd5632u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x1u, 4); }
    // 0d5638  and ecx, ecx
    X86_AT(c, 0xd5638u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0d563a  jge 0xd563f
    X86_AT(c, 0xd563au);
    if (x86_cc(c, 13)) { goto L_d563f; }
    X86_TICK(c, 2);
    // 0d563c  sub edx, 2
    X86_AT(c, 0xd563cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x2u, 0, 4); }
L_d563f:
    X86_TICK(c, 15);
    // 0d563f  mov dword ptr [0xaae98], edx
    X86_AT(c, 0xd563fu);
    wr32((c.sbase[3] + (uint32_t)(0xAAE98u)), c.r[2]);
    // 0d5645  inc eax
    X86_AT(c, 0xd5645u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d5646  mov dword ptr [0xaaeac], eax
    X86_AT(c, 0xd5646u);
    wr32((c.sbase[3] + (uint32_t)(0xAAEACu)), c.r[0]);
    // 0d564b  mov dword ptr [0xb52f8], 2
    X86_AT(c, 0xd564bu);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x2u);
    // 0d5655  call 0xd395c
    X86_AT(c, 0xd5655u);
    push32(c, 0xd565au); x86_call_known(c, 0xd395cu, f_000d395c); X86_RET(c, 0xd565au);
    X86_TICK(c, 23);
    // 0d565a  mov dword ptr [0xb2304], 0
    X86_AT(c, 0xd565au);
    wr32((c.sbase[3] + (uint32_t)(0xB2304u)), 0x0u);
    // 0d5664  mov dword ptr [0xb2308], 9
    X86_AT(c, 0xd5664u);
    wr32((c.sbase[3] + (uint32_t)(0xB2308u)), 0x9u);
    // 0d566e  mov dword ptr [0xaae9c], 0
    X86_AT(c, 0xd566eu);
    wr32((c.sbase[3] + (uint32_t)(0xAAE9Cu)), 0x0u);
    // 0d5678  sub eax, eax
    X86_AT(c, 0xd5678u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d567a  mov dword ptr [0xaa2d0], eax
    X86_AT(c, 0xd567au);
    wr32((c.sbase[3] + (uint32_t)(0xAA2D0u)), c.r[0]);
    // 0d567f  mov dword ptr [0xaa2cc], eax
    X86_AT(c, 0xd567fu);
    wr32((c.sbase[3] + (uint32_t)(0xAA2CCu)), c.r[0]);
    // 0d5684  mov dword ptr [0xaa2d8], 0
    X86_AT(c, 0xd5684u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2D8u)), 0x0u);
    // 0d568e  push 0x9c98
    X86_AT(c, 0xd568eu);
    { uint32_t v = 0x9C98u; push32(c, v); }
    // 0d5693  call 0xcba5c
    X86_AT(c, 0xd5693u);
    push32(c, 0xd5698u); x86_call_known(c, 0xcba5cu, f_000cba5c); X86_RET(c, 0xd5698u);
    X86_TICK(c, 9);
    // 0d5698  push 6
    X86_AT(c, 0xd5698u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d569a  call 0xc71e0
    X86_AT(c, 0xd569au);
    push32(c, 0xd569fu); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xd569fu);
    X86_TICK(c, 9);
    // 0d569f  push 0x42b8c
    X86_AT(c, 0xd569fu);
    { uint32_t v = 0x42B8Cu; push32(c, v); }
    // 0d56a4  call 0xcbf54
    X86_AT(c, 0xd56a4u);
    push32(c, 0xd56a9u); x86_call_known(c, 0xcbf54u, f_000cbf54); X86_RET(c, 0xd56a9u);
    X86_TICK(c, 7);
    // 0d56a9  call 0xc6a28
    X86_AT(c, 0xd56a9u);
    push32(c, 0xd56aeu); x86_call_known(c, 0xc6a28u, f_000c6a28); X86_RET(c, 0xd56aeu);
    X86_TICK(c, 9);
    // 0d56ae  push 1
    X86_AT(c, 0xd56aeu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d56b0  call 0xc5e44
    X86_AT(c, 0xd56b0u);
    push32(c, 0xd56b5u); x86_call_known(c, 0xc5e44u, f_000c5e44); X86_RET(c, 0xd56b5u);
    X86_TICK(c, 51);
    // 0d56b5  mov eax, dword ptr [0xaae98]
    X86_AT(c, 0xd56b5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAAE98u)));
    // 0d56ba  and eax, eax
    X86_AT(c, 0xd56bau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d56bc  sete dl
    X86_AT(c, 0xd56bcu);
    s8(c, 2, x86_cc(c, 4) ? 1u : 0u);
    // 0d56bf  movzx edx, dl
    X86_AT(c, 0xd56bfu);
    c.r[2] = g8(c, 2);
    // 0d56c2  lea edx, [edx + edx*4]
    X86_AT(c, 0xd56c2u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0d56c5  add edx, edx
    X86_AT(c, 0xd56c5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[2], 0, 4); }
    // 0d56c7  movzx edx, dx
    X86_AT(c, 0xd56c7u);
    c.r[2] = (c.r[2] & 0xFFFFu);
    // 0d56ca  lea eax, [eax + eax*4]
    X86_AT(c, 0xd56cau);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d56cd  lea eax, [eax + eax*2]
    X86_AT(c, 0xd56cdu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0d56d0  add eax, eax
    X86_AT(c, 0xd56d0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d56d2  add eax, edx
    X86_AT(c, 0xd56d2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0d56d4  lea eax, [eax*8]
    X86_AT(c, 0xd56d4u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0d56db  lea edx, [eax + eax*4]
    X86_AT(c, 0xd56dbu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d56de  lea edx, [eax + edx*4]
    X86_AT(c, 0xd56deu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0d56e1  mov al, 0xc
    X86_AT(c, 0xd56e1u);
    s8(c, 0, 0xCu);
    // 0d56e3  mov byte ptr [edx + 0x8c408], al
    X86_AT(c, 0xd56e3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8C408u)), g8(c, 0));
    // 0d56e9  mov byte ptr [edx + 0x8c404], al
    X86_AT(c, 0xd56e9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8C404u)), g8(c, 0));
    // 0d56ef  push 0xff
    X86_AT(c, 0xd56efu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0d56f4  push 1
    X86_AT(c, 0xd56f4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d56f6  call 0xc5df0
    X86_AT(c, 0xd56f6u);
    push32(c, 0xd56fbu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd56fbu);
    X86_TICK(c, 9);
    // 0d56fb  add esp, 0x18
    X86_AT(c, 0xd56fbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d56fe  test al, 1
    X86_AT(c, 0xd56feu);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0d5700  je 0xd570e
    X86_AT(c, 0xd5700u);
    if (x86_cc(c, 4)) { goto L_d570e; }
    X86_TICK(c, 9);
    // 0d5702  mov dword ptr [0xaaea8], 0x4a
    X86_AT(c, 0xd5702u);
    wr32((c.sbase[3] + (uint32_t)(0xAAEA8u)), 0x4Au);
    // 0d570c  jmp 0xd5718
    X86_AT(c, 0xd570cu);
    goto L_d5718;
L_d570e:
    X86_TICK(c, 2);
    // 0d570e  mov dword ptr [0xaaea8], 0x49
    X86_AT(c, 0xd570eu);
    wr32((c.sbase[3] + (uint32_t)(0xAAEA8u)), 0x49u);
L_d5718:
    X86_TICK(c, 9);
    // 0d5718  push 7
    X86_AT(c, 0xd5718u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d571a  call 0xcacd4
    X86_AT(c, 0xd571au);
    push32(c, 0xd571fu); x86_call_known(c, 0xcacd4u, f_000cacd4); X86_RET(c, 0xd571fu);
    X86_TICK(c, 2);
    // 0d571f  add esp, 4
    X86_AT(c, 0xd571fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d5722:
    X86_TICK(c, 12);
    // 0d5722  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xd5722u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0d5729  jle 0xd5ae0
    X86_AT(c, 0xd5729u);
    if (x86_cc(c, 14)) { goto L_d5ae0; }
    X86_TICK(c, 12);
    // 0d572f  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xd572fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0d5736  jle 0xd5ae0
    X86_AT(c, 0xd5736u);
    if (x86_cc(c, 14)) { goto L_d5ae0; }
    X86_TICK(c, 11);
    // 0d573c  sub edi, edi
    X86_AT(c, 0xd573cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d573e  push 7
    X86_AT(c, 0xd573eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5740  call 0xca0a0
    X86_AT(c, 0xd5740u);
    push32(c, 0xd5745u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd5745u);
    X86_TICK(c, 2);
    // 0d5745  add esp, 4
    X86_AT(c, 0xd5745u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d5748:
    X86_TICK(c, 9);
    // 0d5748  push 7
    X86_AT(c, 0xd5748u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d574a  call 0xcad80
    X86_AT(c, 0xd574au);
    push32(c, 0xd574fu); x86_call_known(c, 0xcad80u, f_000cad80); X86_RET(c, 0xd574fu);
    X86_TICK(c, 9);
    // 0d574f  push 7
    X86_AT(c, 0xd574fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5751  call 0xc7dc8
    X86_AT(c, 0xd5751u);
    push32(c, 0xd5756u); x86_call_known(c, 0xc7dc8u, f_000c7dc8); X86_RET(c, 0xd5756u);
    X86_TICK(c, 14);
    // 0d5756  xchg ebx, eax
    X86_AT(c, 0xd5756u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d5757  inc edi
    X86_AT(c, 0xd5757u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d5758  add esp, 8
    X86_AT(c, 0xd5758u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d575b  and bl, bl
    X86_AT(c, 0xd575bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d575d  jne 0xd5767
    X86_AT(c, 0xd575du);
    if (x86_cc(c, 5)) { goto L_d5767; }
    X86_TICK(c, 7);
    // 0d575f  cmp edi, 0x5dc
    X86_AT(c, 0xd575fu);
    (void)x86_sub(c, c.r[7], 0x5DCu, 0, 4);
    // 0d5765  jl 0xd5748
    X86_AT(c, 0xd5765u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xd5748u); goto L_d5748; }
L_d5767:
    X86_TICK(c, 7);
    // 0d5767  and bl, bl
    X86_AT(c, 0xd5767u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0d5769  jne 0xd576d
    X86_AT(c, 0xd5769u);
    if (x86_cc(c, 5)) { goto L_d576d; }
    X86_TICK(c, 2);
    // 0d576b  mov bl, 0x20
    X86_AT(c, 0xd576bu);
    s8(c, 3, 0x20u);
L_d576d:
    X86_TICK(c, 12);
    // 0d576d  movzx edx, bl
    X86_AT(c, 0xd576du);
    c.r[2] = g8(c, 3);
    // 0d5770  dec edx
    X86_AT(c, 0xd5770u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0d5771  cmp edx, 0x59
    X86_AT(c, 0xd5771u);
    (void)x86_sub(c, c.r[2], 0x59u, 0, 4);
    // 0d5774  ja 0xd5a90
    X86_AT(c, 0xd5774u);
    if (x86_cc(c, 7)) { goto L_d5a90; }
    X86_TICK(c, 7);
    // 0d577a  jmp dword ptr cs:[edx*4 + 0xd5782]
    X86_AT(c, 0xd577au);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD5782u)));
      switch (t) {
      case 0xd58eau: goto L_d58ea;
      case 0xd5915u: goto L_d5915;
      case 0xd593cu: goto L_d593c;
      case 0xd5977u: goto L_d5977;
      case 0xd59b9u: goto L_d59b9;
      case 0xd59c8u: goto L_d59c8;
      case 0xd59d2u: goto L_d59d2;
      case 0xd59dcu: goto L_d59dc;
      case 0xd59e6u: goto L_d59e6;
      case 0xd59f0u: goto L_d59f0;
      case 0xd59fau: goto L_d59fa;
      case 0xd5a04u: goto L_d5a04;
      case 0xd5a0eu: goto L_d5a0e;
      case 0xd5a18u: goto L_d5a18;
      case 0xd5a22u: goto L_d5a22;
      case 0xd5a2cu: goto L_d5a2c;
      case 0xd5a36u: goto L_d5a36;
      case 0xd5a40u: goto L_d5a40;
      case 0xd5a47u: goto L_d5a47;
      case 0xd5a4eu: goto L_d5a4e;
      case 0xd5a55u: goto L_d5a55;
      case 0xd5a5cu: goto L_d5a5c;
      case 0xd5a63u: goto L_d5a63;
      case 0xd5a6au: goto L_d5a6a;
      case 0xd5a71u: goto L_d5a71;
      case 0xd5a78u: goto L_d5a78;
      case 0xd5a89u: goto L_d5a89;
      case 0xd5a90u: goto L_d5a90;
      default: x86_jump(c, t); return; } }
L_d58ea:
    X86_TICK(c, 12);
    // 0d58ea  movzx ebx, bl
    X86_AT(c, 0xd58eau);
    c.r[3] = g8(c, 3);
    // 0d58ed  push ebx
    X86_AT(c, 0xd58edu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d58ee  call 0xd386c
    X86_AT(c, 0xd58eeu);
    push32(c, 0xd58f3u); x86_call_known(c, 0xd386cu, f_000d386c); X86_RET(c, 0xd58f3u);
    X86_TICK(c, 9);
    // 0d58f3  add esp, 4
    X86_AT(c, 0xd58f3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d58f6  dec eax
    X86_AT(c, 0xd58f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d58f7  jne 0xd596e
    X86_AT(c, 0xd58f7u);
    if (x86_cc(c, 5)) { goto L_d596e; }
    X86_TICK(c, 17);
    // 0d58fd  push dword ptr [0xb033e]
    X86_AT(c, 0xd58fdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d5903  push dword ptr [0xb033a]
    X86_AT(c, 0xd5903u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d5909  call 0xcf89c
    X86_AT(c, 0xd5909u);
    push32(c, 0xd590eu); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd590eu);
    X86_TICK(c, 11);
    // 0d590e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd590eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d5911  push 3
    X86_AT(c, 0xd5911u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d5913  jmp 0xd5961
    X86_AT(c, 0xd5913u);
    goto L_d5961;
L_d5915:
    X86_TICK(c, 12);
    // 0d5915  movzx ebx, bl
    X86_AT(c, 0xd5915u);
    c.r[3] = g8(c, 3);
    // 0d5918  push ebx
    X86_AT(c, 0xd5918u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5919  call 0xd386c
    X86_AT(c, 0xd5919u);
    push32(c, 0xd591eu); x86_call_known(c, 0xd386cu, f_000d386c); X86_RET(c, 0xd591eu);
    X86_TICK(c, 9);
    // 0d591e  add esp, 4
    X86_AT(c, 0xd591eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5921  dec eax
    X86_AT(c, 0xd5921u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5922  jne 0xd596e
    X86_AT(c, 0xd5922u);
    if (x86_cc(c, 5)) { goto L_d596e; }
    X86_TICK(c, 17);
    // 0d5924  push dword ptr [0xb033e]
    X86_AT(c, 0xd5924u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d592a  push dword ptr [0xb033a]
    X86_AT(c, 0xd592au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d5930  call 0xcf89c
    X86_AT(c, 0xd5930u);
    push32(c, 0xd5935u); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd5935u);
    X86_TICK(c, 11);
    // 0d5935  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd5935u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d5938  push 7
    X86_AT(c, 0xd5938u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d593a  jmp 0xd5961
    X86_AT(c, 0xd593au);
    goto L_d5961;
L_d593c:
    X86_TICK(c, 12);
    // 0d593c  movzx ebx, bl
    X86_AT(c, 0xd593cu);
    c.r[3] = g8(c, 3);
    // 0d593f  push ebx
    X86_AT(c, 0xd593fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d5940  call 0xd386c
    X86_AT(c, 0xd5940u);
    push32(c, 0xd5945u); x86_call_known(c, 0xd386cu, f_000d386c); X86_RET(c, 0xd5945u);
    X86_TICK(c, 9);
    // 0d5945  add esp, 4
    X86_AT(c, 0xd5945u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5948  dec eax
    X86_AT(c, 0xd5948u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5949  jne 0xd596e
    X86_AT(c, 0xd5949u);
    if (x86_cc(c, 5)) { goto L_d596e; }
    X86_TICK(c, 17);
    // 0d594b  push dword ptr [0xb033e]
    X86_AT(c, 0xd594bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d5951  push dword ptr [0xb033a]
    X86_AT(c, 0xd5951u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d5957  call 0xcf89c
    X86_AT(c, 0xd5957u);
    push32(c, 0xd595cu); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd595cu);
    X86_TICK(c, 4);
    // 0d595c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd595cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d595f  push 5
    X86_AT(c, 0xd595fu);
    { uint32_t v = 0x5u; push32(c, v); }
L_d5961:
    X86_TICK(c, 7);
    // 0d5961  call 0xd448c
    X86_AT(c, 0xd5961u);
    push32(c, 0xd5966u); x86_call_known(c, 0xd448cu, f_000d448c); X86_RET(c, 0xd5966u);
    X86_TICK(c, 9);
    // 0d5966  add esp, 0xc
    X86_AT(c, 0xd5966u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d5969  jmp 0xd5aa4
    X86_AT(c, 0xd5969u);
    goto L_d5aa4;
L_d596e:
    X86_TICK(c, 9);
    // 0d596e  push 0
    X86_AT(c, 0xd596eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d5970  call 0xc5ca4
    X86_AT(c, 0xd5970u);
    push32(c, 0xd5975u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd5975u);
    X86_TICK(c, 7);
    // 0d5975  jmp 0xd59c0
    X86_AT(c, 0xd5975u);
    goto L_d59c0;
L_d5977:
    X86_TICK(c, 12);
    // 0d5977  movzx ebx, bl
    X86_AT(c, 0xd5977u);
    c.r[3] = g8(c, 3);
    // 0d597a  push ebx
    X86_AT(c, 0xd597au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d597b  call 0xd386c
    X86_AT(c, 0xd597bu);
    push32(c, 0xd5980u); x86_call_known(c, 0xd386cu, f_000d386c); X86_RET(c, 0xd5980u);
    X86_TICK(c, 9);
    // 0d5980  add esp, 4
    X86_AT(c, 0xd5980u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5983  dec eax
    X86_AT(c, 0xd5983u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d5984  jne 0xd59a6
    X86_AT(c, 0xd5984u);
    if (x86_cc(c, 5)) { goto L_d59a6; }
    X86_TICK(c, 17);
    // 0d5986  push dword ptr [0xb033e]
    X86_AT(c, 0xd5986u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d598c  push dword ptr [0xb033a]
    X86_AT(c, 0xd598cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d5992  call 0xcf89c
    X86_AT(c, 0xd5992u);
    push32(c, 0xd5997u); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd5997u);
    X86_TICK(c, 11);
    // 0d5997  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd5997u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d599a  push 6
    X86_AT(c, 0xd599au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d599c  call 0xd448c
    X86_AT(c, 0xd599cu);
    push32(c, 0xd59a1u); x86_call_known(c, 0xd448cu, f_000d448c); X86_RET(c, 0xd59a1u);
    X86_TICK(c, 9);
    // 0d59a1  add esp, 0xc
    X86_AT(c, 0xd59a1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d59a4  jmp 0xd59b0
    X86_AT(c, 0xd59a4u);
    goto L_d59b0;
L_d59a6:
    X86_TICK(c, 9);
    // 0d59a6  push 0
    X86_AT(c, 0xd59a6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d59a8  call 0xc5ca4
    X86_AT(c, 0xd59a8u);
    push32(c, 0xd59adu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd59adu);
    X86_TICK(c, 2);
    // 0d59ad  add esp, 4
    X86_AT(c, 0xd59adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d59b0:
    X86_TICK(c, 9);
    // 0d59b0  push 0
    X86_AT(c, 0xd59b0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d59b2  call 0xc60ac
    X86_AT(c, 0xd59b2u);
    push32(c, 0xd59b7u); x86_call_known(c, 0xc60acu, f_000c60ac); X86_RET(c, 0xd59b7u);
    X86_TICK(c, 7);
    // 0d59b7  jmp 0xd59c0
    X86_AT(c, 0xd59b7u);
    goto L_d59c0;
L_d59b9:
    X86_TICK(c, 9);
    // 0d59b9  push 0xffffffff
    X86_AT(c, 0xd59b9u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d59bb  call 0xcf580
    X86_AT(c, 0xd59bbu);
    push32(c, 0xd59c0u); x86_call_known(c, 0xcf580u, f_000cf580); X86_RET(c, 0xd59c0u);
L_d59c0:
    X86_TICK(c, 9);
    // 0d59c0  add esp, 4
    X86_AT(c, 0xd59c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d59c3  jmp 0xd5aa4
    X86_AT(c, 0xd59c3u);
    goto L_d5aa4;
L_d59c8:
    X86_TICK(c, 7);
    // 0d59c8  call 0xcc9e0
    X86_AT(c, 0xd59c8u);
    push32(c, 0xd59cdu); x86_call_known(c, 0xcc9e0u, f_000cc9e0); X86_RET(c, 0xd59cdu);
    X86_TICK(c, 7);
    // 0d59cd  jmp 0xd5aa4
    X86_AT(c, 0xd59cdu);
    goto L_d5aa4;
L_d59d2:
    X86_TICK(c, 7);
    // 0d59d2  call 0xcd1a8
    X86_AT(c, 0xd59d2u);
    push32(c, 0xd59d7u); x86_call_known(c, 0xcd1a8u, f_000cd1a8); X86_RET(c, 0xd59d7u);
    X86_TICK(c, 7);
    // 0d59d7  jmp 0xd5aa4
    X86_AT(c, 0xd59d7u);
    goto L_d5aa4;
L_d59dc:
    X86_TICK(c, 7);
    // 0d59dc  call 0xcd824
    X86_AT(c, 0xd59dcu);
    push32(c, 0xd59e1u); x86_call_known(c, 0xcd824u, f_000cd824); X86_RET(c, 0xd59e1u);
    X86_TICK(c, 7);
    // 0d59e1  jmp 0xd5aa4
    X86_AT(c, 0xd59e1u);
    goto L_d5aa4;
L_d59e6:
    X86_TICK(c, 7);
    // 0d59e6  call 0xd4c30
    X86_AT(c, 0xd59e6u);
    push32(c, 0xd59ebu); x86_call_known(c, 0xd4c30u, f_000d4c30); X86_RET(c, 0xd59ebu);
    X86_TICK(c, 7);
    // 0d59eb  jmp 0xd5aa4
    X86_AT(c, 0xd59ebu);
    goto L_d5aa4;
L_d59f0:
    X86_TICK(c, 7);
    // 0d59f0  call 0xcd8c0
    X86_AT(c, 0xd59f0u);
    push32(c, 0xd59f5u); x86_call_known(c, 0xcd8c0u, f_000cd8c0); X86_RET(c, 0xd59f5u);
    X86_TICK(c, 7);
    // 0d59f5  jmp 0xd5aa4
    X86_AT(c, 0xd59f5u);
    goto L_d5aa4;
L_d59fa:
    X86_TICK(c, 7);
    // 0d59fa  call 0xcfa18
    X86_AT(c, 0xd59fau);
    push32(c, 0xd59ffu); x86_call_known(c, 0xcfa18u, f_000cfa18); X86_RET(c, 0xd59ffu);
    X86_TICK(c, 7);
    // 0d59ff  jmp 0xd5aa4
    X86_AT(c, 0xd59ffu);
    goto L_d5aa4;
L_d5a04:
    X86_TICK(c, 7);
    // 0d5a04  call 0xcd938
    X86_AT(c, 0xd5a04u);
    push32(c, 0xd5a09u); x86_call_known(c, 0xcd938u, f_000cd938); X86_RET(c, 0xd5a09u);
    X86_TICK(c, 7);
    // 0d5a09  jmp 0xd5aa4
    X86_AT(c, 0xd5a09u);
    goto L_d5aa4;
L_d5a0e:
    X86_TICK(c, 7);
    // 0d5a0e  call 0xcd9f0
    X86_AT(c, 0xd5a0eu);
    push32(c, 0xd5a13u); x86_call_known(c, 0xcd9f0u, f_000cd9f0); X86_RET(c, 0xd5a13u);
    X86_TICK(c, 7);
    // 0d5a13  jmp 0xd5aa4
    X86_AT(c, 0xd5a13u);
    goto L_d5aa4;
L_d5a18:
    X86_TICK(c, 7);
    // 0d5a18  call 0xce424
    X86_AT(c, 0xd5a18u);
    push32(c, 0xd5a1du); x86_call_known(c, 0xce424u, f_000ce424); X86_RET(c, 0xd5a1du);
    X86_TICK(c, 7);
    // 0d5a1d  jmp 0xd5aa4
    X86_AT(c, 0xd5a1du);
    goto L_d5aa4;
L_d5a22:
    X86_TICK(c, 7);
    // 0d5a22  call 0xdc4d4
    X86_AT(c, 0xd5a22u);
    push32(c, 0xd5a27u); x86_call_known(c, 0xdc4d4u, f_000dc4d4); X86_RET(c, 0xd5a27u);
    X86_TICK(c, 7);
    // 0d5a27  jmp 0xd5aa4
    X86_AT(c, 0xd5a27u);
    goto L_d5aa4;
L_d5a2c:
    X86_TICK(c, 7);
    // 0d5a2c  call 0xcfa5c
    X86_AT(c, 0xd5a2cu);
    push32(c, 0xd5a31u); x86_call_known(c, 0xcfa5cu, f_000cfa5c); X86_RET(c, 0xd5a31u);
    X86_TICK(c, 7);
    // 0d5a31  jmp 0xd5aa4
    X86_AT(c, 0xd5a31u);
    goto L_d5aa4;
L_d5a36:
    X86_TICK(c, 7);
    // 0d5a36  call 0xcdbe8
    X86_AT(c, 0xd5a36u);
    push32(c, 0xd5a3bu); x86_call_known(c, 0xcdbe8u, f_000cdbe8); X86_RET(c, 0xd5a3bu);
    X86_TICK(c, 7);
    // 0d5a3b  jmp 0xd5aa4
    X86_AT(c, 0xd5a3bu);
    goto L_d5aa4;
L_d5a40:
    X86_TICK(c, 7);
    // 0d5a40  call 0xcdfdc
    X86_AT(c, 0xd5a40u);
    push32(c, 0xd5a45u); x86_call_known(c, 0xcdfdcu, f_000cdfdc); X86_RET(c, 0xd5a45u);
    X86_TICK(c, 7);
    // 0d5a45  jmp 0xd5aa4
    X86_AT(c, 0xd5a45u);
    goto L_d5aa4;
L_d5a47:
    X86_TICK(c, 7);
    // 0d5a47  call 0xcfc24
    X86_AT(c, 0xd5a47u);
    push32(c, 0xd5a4cu); x86_call_known(c, 0xcfc24u, f_000cfc24); X86_RET(c, 0xd5a4cu);
    X86_TICK(c, 7);
    // 0d5a4c  jmp 0xd5aa4
    X86_AT(c, 0xd5a4cu);
    goto L_d5aa4;
L_d5a4e:
    X86_TICK(c, 7);
    // 0d5a4e  call 0xcff4c
    X86_AT(c, 0xd5a4eu);
    push32(c, 0xd5a53u); x86_call_known(c, 0xcff4cu, f_000cff4c); X86_RET(c, 0xd5a53u);
    X86_TICK(c, 7);
    // 0d5a53  jmp 0xd5aa4
    X86_AT(c, 0xd5a53u);
    goto L_d5aa4;
L_d5a55:
    X86_TICK(c, 7);
    // 0d5a55  call 0xd20ec
    X86_AT(c, 0xd5a55u);
    push32(c, 0xd5a5au); x86_call_known(c, 0xd20ecu, f_000d20ec); X86_RET(c, 0xd5a5au);
    X86_TICK(c, 7);
    // 0d5a5a  jmp 0xd5aa4
    X86_AT(c, 0xd5a5au);
    goto L_d5aa4;
L_d5a5c:
    X86_TICK(c, 7);
    // 0d5a5c  call 0xce1d0
    X86_AT(c, 0xd5a5cu);
    push32(c, 0xd5a61u); x86_call_known(c, 0xce1d0u, f_000ce1d0); X86_RET(c, 0xd5a61u);
    X86_TICK(c, 7);
    // 0d5a61  jmp 0xd5aa4
    X86_AT(c, 0xd5a61u);
    goto L_d5aa4;
L_d5a63:
    X86_TICK(c, 7);
    // 0d5a63  call 0xce258
    X86_AT(c, 0xd5a63u);
    push32(c, 0xd5a68u); x86_call_known(c, 0xce258u, f_000ce258); X86_RET(c, 0xd5a68u);
    X86_TICK(c, 7);
    // 0d5a68  jmp 0xd5aa4
    X86_AT(c, 0xd5a68u);
    goto L_d5aa4;
L_d5a6a:
    X86_TICK(c, 7);
    // 0d5a6a  call 0xce270
    X86_AT(c, 0xd5a6au);
    push32(c, 0xd5a6fu); x86_call_known(c, 0xce270u, f_000ce270); X86_RET(c, 0xd5a6fu);
    X86_TICK(c, 7);
    // 0d5a6f  jmp 0xd5aa4
    X86_AT(c, 0xd5a6fu);
    goto L_d5aa4;
L_d5a71:
    X86_TICK(c, 7);
    // 0d5a71  call 0xce57c
    X86_AT(c, 0xd5a71u);
    push32(c, 0xd5a76u); x86_call_known(c, 0xce57cu, f_000ce57c); X86_RET(c, 0xd5a76u);
    X86_TICK(c, 7);
    // 0d5a76  jmp 0xd5aa4
    X86_AT(c, 0xd5a76u);
    goto L_d5aa4;
L_d5a78:
    X86_TICK(c, 7);
    // 0d5a78  call 0xd238c
    X86_AT(c, 0xd5a78u);
    push32(c, 0xd5a7du); x86_call_known(c, 0xd238cu, f_000d238c); X86_RET(c, 0xd5a7du);
    X86_TICK(c, 9);
    // 0d5a7d  mov dword ptr [0xbef90], 1
    X86_AT(c, 0xd5a7du);
    wr32((c.sbase[3] + (uint32_t)(0xBEF90u)), 0x1u);
    // 0d5a87  jmp 0xd5aa4
    X86_AT(c, 0xd5a87u);
    goto L_d5aa4;
L_d5a89:
    X86_TICK(c, 7);
    // 0d5a89  call 0xcdcf8
    X86_AT(c, 0xd5a89u);
    push32(c, 0xd5a8eu); x86_call_known(c, 0xcdcf8u, f_000cdcf8); X86_RET(c, 0xd5a8eu);
    X86_TICK(c, 7);
    // 0d5a8e  jmp 0xd5aa4
    X86_AT(c, 0xd5a8eu);
    goto L_d5aa4;
L_d5a90:
    X86_TICK(c, 9);
    // 0d5a90  push 0x9cac
    X86_AT(c, 0xd5a90u);
    { uint32_t v = 0x9CACu; push32(c, v); }
    // 0d5a95  call 0xcc7bc
    X86_AT(c, 0xd5a95u);
    push32(c, 0xd5a9au); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd5a9au);
    X86_TICK(c, 9);
    // 0d5a9a  push 1
    X86_AT(c, 0xd5a9au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d5a9c  call 0xc5ca4
    X86_AT(c, 0xd5a9cu);
    push32(c, 0xd5aa1u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd5aa1u);
    X86_TICK(c, 2);
    // 0d5aa1  add esp, 8
    X86_AT(c, 0xd5aa1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d5aa4:
    X86_TICK(c, 9);
    // 0d5aa4  push 3
    X86_AT(c, 0xd5aa4u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d5aa6  call 0xca3cc
    X86_AT(c, 0xd5aa6u);
    push32(c, 0xd5aabu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd5aabu);
    X86_TICK(c, 14);
    // 0d5aab  add esp, 4
    X86_AT(c, 0xd5aabu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5aae  cmp byte ptr [0x92494], 0
    X86_AT(c, 0xd5aaeu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x92494u))), 0x0u, 0, 1);
    // 0d5ab5  jne 0xd5ac3
    X86_AT(c, 0xd5ab5u);
    if (x86_cc(c, 5)) { goto L_d5ac3; }
    X86_TICK(c, 9);
    // 0d5ab7  mov dword ptr [0xb52f8], 6
    X86_AT(c, 0xd5ab7u);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x6u);
    // 0d5ac1  jmp 0xd5ae0
    X86_AT(c, 0xd5ac1u);
    goto L_d5ae0;
L_d5ac3:
    X86_TICK(c, 13);
    // 0d5ac3  inc dword ptr [0xaa2dc]
    X86_AT(c, 0xd5ac3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2DCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d5ac9  call 0xd32d4
    X86_AT(c, 0xd5ac9u);
    push32(c, 0xd5aceu); x86_call_known(c, 0xd32d4u, f_000d32d4); X86_RET(c, 0xd5aceu);
    X86_TICK(c, 7);
    // 0d5ace  call 0xd3334
    X86_AT(c, 0xd5aceu);
    push32(c, 0xd5ad3u); x86_call_known(c, 0xd3334u, f_000d3334); X86_RET(c, 0xd5ad3u);
    X86_TICK(c, 12);
    // 0d5ad3  cmp dword ptr [0xb52f8], 2
    X86_AT(c, 0xd5ad3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x2u, 0, 4);
    // 0d5ada  je 0xd5722
    X86_AT(c, 0xd5adau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd5722u); goto L_d5722; }
L_d5ae0:
    X86_TICK(c, 23);
    // 0d5ae0  mov eax, dword ptr [0xaa0e4]
    X86_AT(c, 0xd5ae0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA0E4u)));
    // 0d5ae5  mov dword ptr [0xb033a], eax
    X86_AT(c, 0xd5ae5u);
    wr32((c.sbase[3] + (uint32_t)(0xB033Au)), c.r[0]);
    // 0d5aea  mov eax, dword ptr [0xaa0e8]
    X86_AT(c, 0xd5aeau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xAA0E8u)));
    // 0d5aef  mov dword ptr [0xb033e], eax
    X86_AT(c, 0xd5aefu);
    wr32((c.sbase[3] + (uint32_t)(0xB033Eu)), c.r[0]);
    // 0d5af4  mov dword ptr [0xb52f8], 0
    X86_AT(c, 0xd5af4u);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x0u);
    // 0d5afe  push 0x9cbc
    X86_AT(c, 0xd5afeu);
    { uint32_t v = 0x9CBCu; push32(c, v); }
    // 0d5b03  call 0xcba5c
    X86_AT(c, 0xd5b03u);
    push32(c, 0xd5b08u); x86_call_known(c, 0xcba5cu, f_000cba5c); X86_RET(c, 0xd5b08u);
    X86_TICK(c, 14);
    // 0d5b08  add esp, 4
    X86_AT(c, 0xd5b08u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5b0b  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xd5b0bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0d5b12  jle 0xd5b1d
    X86_AT(c, 0xd5b12u);
    if (x86_cc(c, 14)) { goto L_d5b1d; }
    X86_TICK(c, 12);
    // 0d5b14  cmp dword ptr [0xb0322], 0
    X86_AT(c, 0xd5b14u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0322u))), 0x0u, 0, 4);
    // 0d5b1b  jg 0xd5b24
    X86_AT(c, 0xd5b1bu);
    if (x86_cc(c, 15)) { goto L_d5b24; }
L_d5b1d:
    X86_TICK(c, 7);
    // 0d5b1d  call 0xd2f10
    X86_AT(c, 0xd5b1du);
    push32(c, 0xd5b22u); x86_call_known(c, 0xd2f10u, f_000d2f10); X86_RET(c, 0xd5b22u);
    X86_TICK(c, 7);
    // 0d5b22  jmp 0xd5b78
    X86_AT(c, 0xd5b22u);
    goto L_d5b78;
L_d5b24:
    X86_TICK(c, 9);
    // 0d5b24  push 0
    X86_AT(c, 0xd5b24u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d5b26  call 0xc71e0
    X86_AT(c, 0xd5b26u);
    push32(c, 0xd5b2bu); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xd5b2bu);
    X86_TICK(c, 9);
    // 0d5b2b  push 0x42b8c
    X86_AT(c, 0xd5b2bu);
    { uint32_t v = 0x42B8Cu; push32(c, v); }
    // 0d5b30  call 0xcbf54
    X86_AT(c, 0xd5b30u);
    push32(c, 0xd5b35u); x86_call_known(c, 0xcbf54u, f_000cbf54); X86_RET(c, 0xd5b35u);
    X86_TICK(c, 7);
    // 0d5b35  call 0xc6a28
    X86_AT(c, 0xd5b35u);
    push32(c, 0xd5b3au); x86_call_known(c, 0xc6a28u, f_000c6a28); X86_RET(c, 0xd5b3au);
    X86_TICK(c, 4);
    // 0d5b3a  sub esi, esi
    X86_AT(c, 0xd5b3au);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d5b3c  add esp, 8
    X86_AT(c, 0xd5b3cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d5b3f:
    X86_TICK(c, 11);
    // 0d5b3f  cmp esi, dword ptr [0xaa0ec]
    X86_AT(c, 0xd5b3fu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xAA0ECu))), 0, 4);
    // 0d5b45  jge 0xd5b59
    X86_AT(c, 0xd5b45u);
    if (x86_cc(c, 13)) { goto L_d5b59; }
    X86_TICK(c, 12);
    // 0d5b47  push dword ptr [esi*4 + 0xaa0f0]
    X86_AT(c, 0xd5b47u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xAA0F0u))); push32(c, v); }
    // 0d5b4e  call 0xd5464
    X86_AT(c, 0xd5b4eu);
    push32(c, 0xd5b53u); x86_call_known(c, 0xd5464u, f_000d5464); X86_RET(c, 0xd5b53u);
    X86_TICK(c, 11);
    // 0d5b53  inc esi
    X86_AT(c, 0xd5b53u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d5b54  add esp, 4
    X86_AT(c, 0xd5b54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d5b57  jmp 0xd5b3f
    X86_AT(c, 0xd5b57u);
    X86_POLL(c, 0xd5b3fu); goto L_d5b3f;
L_d5b59:
    X86_TICK(c, 9);
    // 0d5b59  push 1
    X86_AT(c, 0xd5b59u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d5b5b  call 0xc5e44
    X86_AT(c, 0xd5b5bu);
    push32(c, 0xd5b60u); x86_call_known(c, 0xc5e44u, f_000c5e44); X86_RET(c, 0xd5b60u);
    X86_TICK(c, 9);
    // 0d5b60  push 7
    X86_AT(c, 0xd5b60u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5b62  call 0xcacd4
    X86_AT(c, 0xd5b62u);
    push32(c, 0xd5b67u); x86_call_known(c, 0xcacd4u, f_000cacd4); X86_RET(c, 0xd5b67u);
    X86_TICK(c, 9);
    // 0d5b67  push 7
    X86_AT(c, 0xd5b67u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5b69  call 0xca0a0
    X86_AT(c, 0xd5b69u);
    push32(c, 0xd5b6eu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd5b6eu);
    X86_TICK(c, 9);
    // 0d5b6e  push 7
    X86_AT(c, 0xd5b6eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d5b70  call 0xcad80
    X86_AT(c, 0xd5b70u);
    push32(c, 0xd5b75u); x86_call_known(c, 0xcad80u, f_000cad80); X86_RET(c, 0xd5b75u);
    X86_TICK(c, 2);
    // 0d5b75  add esp, 0x10
    X86_AT(c, 0xd5b75u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d5b78:
    X86_TICK(c, 28);
    // 0d5b78  pop edi
    X86_AT(c, 0xd5b78u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d5b79  pop esi
    X86_AT(c, 0xd5b79u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d5b7a  pop ebx
    X86_AT(c, 0xd5b7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d5b7b  leave 
    X86_AT(c, 0xd5b7bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d5b7c  ret 
    X86_AT(c, 0xd5b7cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd55b0u, "ran off the end of a function");
}
}

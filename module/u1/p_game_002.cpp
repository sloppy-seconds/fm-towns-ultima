#include "p_game_funcs.h"
namespace p_game {
void f_000c7cfd(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0c7cfd  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xc7cfdu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0c7d00  cmp edx, 0x50
    X86_AT(c, 0xc7d00u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0c7d03  ja 0xc7d2c
    X86_AT(c, 0xc7d03u);
    if (x86_cc(c, 7)) { goto L_c7d2c; }
    X86_TICK(c, 7);
    // 0c7d05  cmp edx, 0x50
    X86_AT(c, 0xc7d05u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0c7d08  je 0xc7d4e
    X86_AT(c, 0xc7d08u);
    if (x86_cc(c, 4)) { goto L_c7d4e; }
    X86_TICK(c, 7);
    // 0c7d0a  cmp edx, 1
    X86_AT(c, 0xc7d0au);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0c7d0d  je 0xc7d63
    X86_AT(c, 0xc7d0du);
    if (x86_cc(c, 4)) { goto L_c7d63; }
    X86_TICK(c, 7);
    // 0c7d13  cmp edx, 0xf
    X86_AT(c, 0xc7d13u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0c7d16  je 0xc7d55
    X86_AT(c, 0xc7d16u);
    if (x86_cc(c, 4)) { goto L_c7d55; }
    X86_TICK(c, 7);
    // 0c7d18  cmp edx, 0x1d
    X86_AT(c, 0xc7d18u);
    (void)x86_sub(c, c.r[2], 0x1Du, 0, 4);
    // 0c7d1b  je 0xc7d5c
    X86_AT(c, 0xc7d1bu);
    if (x86_cc(c, 4)) { goto L_c7d5c; }
    X86_TICK(c, 7);
    // 0c7d1d  cmp edx, 0x4d
    X86_AT(c, 0xc7d1du);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0c7d20  je 0xc7d47
    X86_AT(c, 0xc7d20u);
    if (x86_cc(c, 4)) { goto L_c7d47; }
    X86_TICK(c, 7);
    // 0c7d22  cmp edx, 0x4f
    X86_AT(c, 0xc7d22u);
    (void)x86_sub(c, c.r[2], 0x4Fu, 0, 4);
    // 0c7d25  je 0xc7d55
    X86_AT(c, 0xc7d25u);
    if (x86_cc(c, 4)) { goto L_c7d55; }
    X86_TICK(c, 7);
    // 0c7d27  jmp 0xc7d8a
    X86_AT(c, 0xc7d27u);
    goto L_c7d8a;
L_c7d2c:
    X86_TICK(c, 7);
    // 0c7d2c  cmp edx, 0x51
    X86_AT(c, 0xc7d2cu);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
    // 0c7d2f  je 0xc7d6a
    X86_AT(c, 0xc7d2fu);
    if (x86_cc(c, 4)) { goto L_c7d6a; }
    X86_TICK(c, 7);
    // 0c7d31  cmp edx, 0x5d
    X86_AT(c, 0xc7d31u);
    (void)x86_sub(c, c.r[2], 0x5Du, 0, 4);
    // 0c7d34  je 0xc7d71
    X86_AT(c, 0xc7d34u);
    if (x86_cc(c, 4)) { goto L_c7d71; }
    X86_TICK(c, 7);
    // 0c7d36  cmp edx, 0x5e
    X86_AT(c, 0xc7d36u);
    (void)x86_sub(c, c.r[2], 0x5Eu, 0, 4);
    // 0c7d39  je 0xc7d83
    X86_AT(c, 0xc7d39u);
    if (x86_cc(c, 4)) { goto L_c7d83; }
    X86_TICK(c, 7);
    // 0c7d3b  cmp edx, 0x72
    X86_AT(c, 0xc7d3bu);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0c7d3e  je 0xc7d63
    X86_AT(c, 0xc7d3eu);
    if (x86_cc(c, 4)) { goto L_c7d63; }
    X86_TICK(c, 7);
    // 0c7d40  cmp edx, 0x73
    X86_AT(c, 0xc7d40u);
    (void)x86_sub(c, c.r[2], 0x73u, 0, 4);
    // 0c7d43  je 0xc7d5c
    X86_AT(c, 0xc7d43u);
    if (x86_cc(c, 4)) { goto L_c7d5c; }
    X86_TICK(c, 7);
    // 0c7d45  jmp 0xc7d8a
    X86_AT(c, 0xc7d45u);
    goto L_c7d8a;
L_c7d47:
    X86_TICK(c, 9);
    // 0c7d47  mov ebx, 5
    X86_AT(c, 0xc7d47u);
    c.r[3] = 0x5u;
    // 0c7d4c  jmp 0xc7d8a
    X86_AT(c, 0xc7d4cu);
    goto L_c7d8a;
L_c7d4e:
    X86_TICK(c, 9);
    // 0c7d4e  mov ebx, 6
    X86_AT(c, 0xc7d4eu);
    c.r[3] = 0x6u;
    // 0c7d53  jmp 0xc7d8a
    X86_AT(c, 0xc7d53u);
    goto L_c7d8a;
L_c7d55:
    X86_TICK(c, 9);
    // 0c7d55  mov ebx, 3
    X86_AT(c, 0xc7d55u);
    c.r[3] = 0x3u;
    // 0c7d5a  jmp 0xc7d8a
    X86_AT(c, 0xc7d5au);
    goto L_c7d8a;
L_c7d5c:
    X86_TICK(c, 9);
    // 0c7d5c  mov ebx, 4
    X86_AT(c, 0xc7d5cu);
    c.r[3] = 0x4u;
    // 0c7d61  jmp 0xc7d8a
    X86_AT(c, 0xc7d61u);
    goto L_c7d8a;
L_c7d63:
    X86_TICK(c, 9);
    // 0c7d63  mov ebx, 1
    X86_AT(c, 0xc7d63u);
    c.r[3] = 0x1u;
    // 0c7d68  jmp 0xc7d8a
    X86_AT(c, 0xc7d68u);
    goto L_c7d8a;
L_c7d6a:
    X86_TICK(c, 9);
    // 0c7d6a  mov ebx, 7
    X86_AT(c, 0xc7d6au);
    c.r[3] = 0x7u;
    // 0c7d6f  jmp 0xc7d8a
    X86_AT(c, 0xc7d6fu);
    goto L_c7d8a;
L_c7d71:
    X86_TICK(c, 9);
    // 0c7d71  sub ebx, ebx
    X86_AT(c, 0xc7d71u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c7d73  call 0xc8a00
    X86_AT(c, 0xc7d73u);
    push32(c, 0xc7d78u); x86_call_known(c, 0xc8a00u, f_000c8a00); X86_RET(c, 0xc7d78u);
    X86_TICK(c, 9);
    // 0c7d78  push edi
    X86_AT(c, 0xc7d78u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7d79  call 0xca0a0
    X86_AT(c, 0xc7d79u);
    push32(c, 0xc7d7eu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xc7d7eu);
    X86_TICK(c, 9);
    // 0c7d7e  add esp, 4
    X86_AT(c, 0xc7d7eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7d81  jmp 0xc7d8a
    X86_AT(c, 0xc7d81u);
    goto L_c7d8a;
L_c7d83:
    X86_TICK(c, 9);
    // 0c7d83  sub ebx, ebx
    X86_AT(c, 0xc7d83u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c7d85  call 0xc8a34
    X86_AT(c, 0xc7d85u);
    push32(c, 0xc7d8au); x86_call_known(c, 0xc8a34u, f_000c8a34); X86_RET(c, 0xc7d8au);
L_c7d8a:
    X86_TICK(c, 7);
    // 0c7d8a  cmp ebx, 0x20
    X86_AT(c, 0xc7d8au);
    (void)x86_sub(c, c.r[3], 0x20u, 0, 4);
    // 0c7d8d  jl 0xc7da4
    X86_AT(c, 0xc7d8du);
    if (x86_cc(c, 12)) { goto L_c7da4; }
    X86_TICK(c, 13);
    // 0c7d8f  mov eax, ebx
    X86_AT(c, 0xc7d8fu);
    c.r[0] = c.r[3];
    // 0c7d91  push eax
    X86_AT(c, 0xc7d91u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7d92  push edi
    X86_AT(c, 0xc7d92u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7d93  call 0xca58c
    X86_AT(c, 0xc7d93u);
    push32(c, 0xc7d98u); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xc7d98u);
    X86_TICK(c, 20);
    // 0c7d98  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xc7d98u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0c7d9b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc7d9bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c7d9e  add eax, 2
    X86_AT(c, 0xc7d9eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0c7da1  push eax
    X86_AT(c, 0xc7da1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7da2  jmp 0xc7db5
    X86_AT(c, 0xc7da2u);
    goto L_c7db5;
L_c7da4:
    X86_TICK(c, 11);
    // 0c7da4  push 0x2040
    X86_AT(c, 0xc7da4u);
    { uint32_t v = 0x2040u; push32(c, v); }
    // 0c7da9  push edi
    X86_AT(c, 0xc7da9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7daa  call 0xca414
    X86_AT(c, 0xc7daau);
    push32(c, 0xc7dafu); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xc7dafu);
    X86_TICK(c, 10);
    // 0c7daf  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xc7dafu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0c7db2  push dword ptr [ebp - 4]
    X86_AT(c, 0xc7db2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
L_c7db5:
    X86_TICK(c, 9);
    // 0c7db5  push edi
    X86_AT(c, 0xc7db5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7db6  call 0xca9c8
    X86_AT(c, 0xc7db6u);
    push32(c, 0xc7dbbu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xc7dbbu);
    X86_TICK(c, 32);
    // 0c7dbb  add esp, 0x14
    X86_AT(c, 0xc7dbbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c7dbe  mov eax, ebx
    X86_AT(c, 0xc7dbeu);
    c.r[0] = c.r[3];
    // 0c7dc0  pop edi
    X86_AT(c, 0xc7dc0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c7dc1  pop esi
    X86_AT(c, 0xc7dc1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c7dc2  pop ebx
    X86_AT(c, 0xc7dc2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c7dc3  leave 
    X86_AT(c, 0xc7dc3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c7dc4  ret 
    X86_AT(c, 0xc7dc4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7cfdu, "ran off the end of a function");
}
void f_000c7dc8(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0c7dc8  push ebp
    X86_AT(c, 0xc7dc8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c7dc9  mov ebp, esp
    X86_AT(c, 0xc7dc9u);
    c.r[5] = c.r[4];
    // 0c7dcb  sub esp, 0x14
    X86_AT(c, 0xc7dcbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x14u, 0, 4); }
    // 0c7dce  push ebx
    X86_AT(c, 0xc7dceu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c7dcf  push esi
    X86_AT(c, 0xc7dcfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c7dd0  push edi
    X86_AT(c, 0xc7dd0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7dd1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc7dd1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c7dd4  mov dword ptr [ebp - 0x14], 0
    X86_AT(c, 0xc7dd4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), 0x0u);
    // 0c7ddb  mov dword ptr [ebp - 0x10], 0
    X86_AT(c, 0xc7ddbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x0u);
    // 0c7de2  sub eax, eax
    X86_AT(c, 0xc7de2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c7de4  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc7de4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c7de7  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xc7de7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0c7dea  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc7deau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c7ded  lea eax, [ebp - 0x10]
    X86_AT(c, 0xc7dedu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0c7df0  push eax
    X86_AT(c, 0xc7df0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7df1  lea eax, [ebp - 8]
    X86_AT(c, 0xc7df1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c7df4  push eax
    X86_AT(c, 0xc7df4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7df5  push edi
    X86_AT(c, 0xc7df5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7df6  call 0xcaca8
    X86_AT(c, 0xc7df6u);
    push32(c, 0xc7dfbu); x86_call_known(c, 0xcaca8u, f_000caca8); X86_RET(c, 0xc7dfbu);
    X86_TICK(c, 17);
    // 0c7dfb  lea eax, [ebp - 0xc]
    X86_AT(c, 0xc7dfbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0c7dfe  push eax
    X86_AT(c, 0xc7dfeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7dff  lea eax, [ebp - 4]
    X86_AT(c, 0xc7dffu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0c7e02  push eax
    X86_AT(c, 0xc7e02u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7e03  push edi
    X86_AT(c, 0xc7e03u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7e04  call 0xcac7c
    X86_AT(c, 0xc7e04u);
    push32(c, 0xc7e09u); x86_call_known(c, 0xcac7cu, f_000cac7c); X86_RET(c, 0xc7e09u);
    X86_TICK(c, 23);
    // 0c7e09  mov esi, 0xffffffff
    X86_AT(c, 0xc7e09u);
    c.r[6] = 0xFFFFFFFFu;
    // 0c7e0e  sub ebx, ebx
    X86_AT(c, 0xc7e0eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c7e10  add esp, 0x18
    X86_AT(c, 0xc7e10u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c7e13  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc7e13u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c7e16  sub eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc7e16u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0c7e19  cmp eax, 3
    X86_AT(c, 0xc7e19u);
    (void)x86_sub(c, c.r[0], 0x3u, 0, 4);
    // 0c7e1c  jge 0xc7e25
    X86_AT(c, 0xc7e1cu);
    if (x86_cc(c, 13)) { goto L_c7e25; }
    X86_TICK(c, 7);
    // 0c7e1e  call 0x8b
    X86_AT(c, 0xc7e1eu);
    push32(c, 0xc7e23u); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xc7e23u);
    X86_TICK(c, 2);
    // 0c7e23  mov esi, ebx
    X86_AT(c, 0xc7e23u);
    c.r[6] = c.r[3];
L_c7e25:
    X86_TICK(c, 9);
    // 0c7e25  push edi
    X86_AT(c, 0xc7e25u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7e26  call 0xcad04
    X86_AT(c, 0xc7e26u);
    push32(c, 0xc7e2bu); x86_call_known(c, 0xcad04u, f_000cad04); X86_RET(c, 0xc7e2bu);
    X86_TICK(c, 9);
    // 0c7e2b  add esp, 4
    X86_AT(c, 0xc7e2bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c7e2e  and eax, eax
    X86_AT(c, 0xc7e2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c7e30  jne 0xc7e3b
    X86_AT(c, 0xc7e30u);
    if (x86_cc(c, 5)) { goto L_c7e3b; }
    X86_TICK(c, 9);
    // 0c7e32  push edi
    X86_AT(c, 0xc7e32u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7e33  call 0xca920
    X86_AT(c, 0xc7e33u);
    push32(c, 0xc7e38u); x86_call_known(c, 0xca920u, f_000ca920); X86_RET(c, 0xc7e38u);
    X86_TICK(c, 2);
    // 0c7e38  add esp, 4
    X86_AT(c, 0xc7e38u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c7e3b:
    X86_TICK(c, 12);
    // 0c7e3b  cmp word ptr [0xa1b74], 0
    X86_AT(c, 0xc7e3bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xA1B74u))), 0x0u, 0, 2);
    // 0c7e43  jne 0xc7e55
    X86_AT(c, 0xc7e43u);
    if (x86_cc(c, 5)) { goto L_c7e55; }
    X86_TICK(c, 9);
    // 0c7e45  push 0
    X86_AT(c, 0xc7e45u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c7e47  call 0xc5e44
    X86_AT(c, 0xc7e47u);
    push32(c, 0xc7e4cu); x86_call_known(c, 0xc5e44u, f_000c5e44); X86_RET(c, 0xc7e4cu);
    X86_TICK(c, 9);
    // 0c7e4c  push edi
    X86_AT(c, 0xc7e4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c7e4d  call 0xca0a0
    X86_AT(c, 0xc7e4du);
    push32(c, 0xc7e52u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xc7e52u);
    X86_TICK(c, 2);
    // 0c7e52  add esp, 8
    X86_AT(c, 0xc7e52u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c7e55:
    X86_TICK(c, 7);
    // 0c7e55  call 0xc5e3c
    X86_AT(c, 0xc7e55u);
    push32(c, 0xc7e5au); x86_call_known(c, 0xc5e3cu, f_000c5e3c); X86_RET(c, 0xc7e5au);
    X86_TICK(c, 7);
    // 0c7e5a  call 0xc56a4
    X86_AT(c, 0xc7e5au);
    push32(c, 0xc7e5fu); x86_call_known(c, 0xc56a4u, f_000c56a4); X86_RET(c, 0xc7e5fu);
    X86_TICK(c, 13);
    // 0c7e5f  lea eax, [ebp - 0x14]
    X86_AT(c, 0xc7e5fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0c7e62  push eax
    X86_AT(c, 0xc7e62u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c7e63  push 1
    X86_AT(c, 0xc7e63u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c7e65  call 0xa9
    X86_AT(c, 0xc7e65u);
    push32(c, 0xc7e6au); x86_call_known(c, 0xa9u, f_000000a9); X86_RET(c, 0xc7e6au);
    X86_TICK(c, 15);
    // 0c7e6a  add esp, 8
    X86_AT(c, 0xc7e6au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c7e6d  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xc7e6du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0c7e70  and eax, 0xff00
    X86_AT(c, 0xc7e70u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 0c7e75  cmp eax, 0xff00
    X86_AT(c, 0xc7e75u);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 0c7e7a  jne 0xc7e83
    X86_AT(c, 0xc7e7au);
    if (x86_cc(c, 5)) { goto L_c7e83; }
    X86_TICK(c, 9);
    // 0c7e7c  sub eax, eax
    X86_AT(c, 0xc7e7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c7e7e  jmp 0xc81dd
    X86_AT(c, 0xc7e7eu);
    goto L_c81dd;
L_c7e83:
    X86_TICK(c, 18);
    // 0c7e83  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xc7e83u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0c7e86  shr eax, 8
    X86_AT(c, 0xc7e86u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0c7e89  and eax, 0xff
    X86_AT(c, 0xc7e89u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFu, 4); }
    // 0c7e8e  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xc7e8eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0c7e91  cmp esi, 0xffffffff
    X86_AT(c, 0xc7e91u);
    (void)x86_sub(c, c.r[6], 0xFFFFFFFFu, 0, 4);
    // 0c7e94  jne 0xc8121
    X86_AT(c, 0xc7e94u);
    if (x86_cc(c, 5)) { goto L_c8121; }
    X86_TICK(c, 12);
    // 0c7e9a  xchg edx, eax
    X86_AT(c, 0xc7e9au);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0c7e9b  sub edx, 2
    X86_AT(c, 0xc7e9bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0c7e9e  cmp edx, 0x44
    X86_AT(c, 0xc7e9eu);
    (void)x86_sub(c, c.r[2], 0x44u, 0, 4);
    // 0c7ea1  ja 0xc8121
    X86_AT(c, 0xc7ea1u);
    if (x86_cc(c, 7)) { goto L_c8121; }
    X86_TICK(c, 7);
    // 0c7ea7  jmp dword ptr cs:[edx*4 + 0xc7eaf]
    X86_AT(c, 0xc7ea7u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC7EAFu)));
      switch (t) {
      case 0xc7fc3u: goto L_c7fc3;
      case 0xc7fcdu: goto L_c7fcd;
      case 0xc7fd7u: goto L_c7fd7;
      case 0xc7fe1u: goto L_c7fe1;
      case 0xc7febu: goto L_c7feb;
      case 0xc7ff5u: goto L_c7ff5;
      case 0xc7fffu: goto L_c7fff;
      case 0xc8009u: goto L_c8009;
      case 0xc8013u: goto L_c8013;
      case 0xc801du: goto L_c801d;
      case 0xc8027u: goto L_c8027;
      case 0xc8031u: goto L_c8031;
      case 0xc803bu: goto L_c803b;
      case 0xc8045u: goto L_c8045;
      case 0xc804fu: goto L_c804f;
      case 0xc8059u: goto L_c8059;
      case 0xc8063u: goto L_c8063;
      case 0xc806du: goto L_c806d;
      case 0xc8077u: goto L_c8077;
      case 0xc8081u: goto L_c8081;
      case 0xc808bu: goto L_c808b;
      case 0xc8095u: goto L_c8095;
      case 0xc809fu: goto L_c809f;
      case 0xc80a9u: goto L_c80a9;
      case 0xc80b3u: goto L_c80b3;
      case 0xc80bdu: goto L_c80bd;
      case 0xc80c4u: goto L_c80c4;
      case 0xc80cbu: goto L_c80cb;
      case 0xc80d2u: goto L_c80d2;
      case 0xc80d9u: goto L_c80d9;
      case 0xc80e0u: goto L_c80e0;
      case 0xc80e7u: goto L_c80e7;
      case 0xc80eeu: goto L_c80ee;
      case 0xc80f5u: goto L_c80f5;
      case 0xc80fcu: goto L_c80fc;
      case 0xc8103u: goto L_c8103;
      case 0xc810au: goto L_c810a;
      case 0xc811cu: goto L_c811c;
      case 0xc8121u: goto L_c8121;
      default: x86_jump(c, t); return; } }
L_c7fc3:
    X86_TICK(c, 9);
    // 0c7fc3  mov ebx, 0x31
    X86_AT(c, 0xc7fc3u);
    c.r[3] = 0x31u;
    // 0c7fc8  jmp 0xc8121
    X86_AT(c, 0xc7fc8u);
    goto L_c8121;
L_c7fcd:
    X86_TICK(c, 9);
    // 0c7fcd  mov ebx, 0x32
    X86_AT(c, 0xc7fcdu);
    c.r[3] = 0x32u;
    // 0c7fd2  jmp 0xc8121
    X86_AT(c, 0xc7fd2u);
    goto L_c8121;
L_c7fd7:
    X86_TICK(c, 9);
    // 0c7fd7  mov ebx, 0x33
    X86_AT(c, 0xc7fd7u);
    c.r[3] = 0x33u;
    // 0c7fdc  jmp 0xc8121
    X86_AT(c, 0xc7fdcu);
    goto L_c8121;
L_c7fe1:
    X86_TICK(c, 9);
    // 0c7fe1  mov ebx, 0x34
    X86_AT(c, 0xc7fe1u);
    c.r[3] = 0x34u;
    // 0c7fe6  jmp 0xc8121
    X86_AT(c, 0xc7fe6u);
    goto L_c8121;
L_c7feb:
    X86_TICK(c, 9);
    // 0c7feb  mov ebx, 0x35
    X86_AT(c, 0xc7febu);
    c.r[3] = 0x35u;
    // 0c7ff0  jmp 0xc8121
    X86_AT(c, 0xc7ff0u);
    goto L_c8121;
L_c7ff5:
    X86_TICK(c, 9);
    // 0c7ff5  mov ebx, 0x36
    X86_AT(c, 0xc7ff5u);
    c.r[3] = 0x36u;
    // 0c7ffa  jmp 0xc8121
    X86_AT(c, 0xc7ffau);
    goto L_c8121;
L_c7fff:
    X86_TICK(c, 9);
    // 0c7fff  mov ebx, 0x37
    X86_AT(c, 0xc7fffu);
    c.r[3] = 0x37u;
    // 0c8004  jmp 0xc8121
    X86_AT(c, 0xc8004u);
    goto L_c8121;
L_c8009:
    X86_TICK(c, 9);
    // 0c8009  mov ebx, 0x38
    X86_AT(c, 0xc8009u);
    c.r[3] = 0x38u;
    // 0c800e  jmp 0xc8121
    X86_AT(c, 0xc800eu);
    goto L_c8121;
L_c8013:
    X86_TICK(c, 9);
    // 0c8013  mov ebx, 0x39
    X86_AT(c, 0xc8013u);
    c.r[3] = 0x39u;
    // 0c8018  jmp 0xc8121
    X86_AT(c, 0xc8018u);
    goto L_c8121;
L_c801d:
    X86_TICK(c, 9);
    // 0c801d  mov ebx, 0x30
    X86_AT(c, 0xc801du);
    c.r[3] = 0x30u;
    // 0c8022  jmp 0xc8121
    X86_AT(c, 0xc8022u);
    goto L_c8121;
L_c8027:
    X86_TICK(c, 9);
    // 0c8027  mov ebx, 0x41
    X86_AT(c, 0xc8027u);
    c.r[3] = 0x41u;
    // 0c802c  jmp 0xc8121
    X86_AT(c, 0xc802cu);
    goto L_c8121;
L_c8031:
    X86_TICK(c, 9);
    // 0c8031  mov ebx, 0x42
    X86_AT(c, 0xc8031u);
    c.r[3] = 0x42u;
    // 0c8036  jmp 0xc8121
    X86_AT(c, 0xc8036u);
    goto L_c8121;
L_c803b:
    X86_TICK(c, 9);
    // 0c803b  mov ebx, 0x43
    X86_AT(c, 0xc803bu);
    c.r[3] = 0x43u;
    // 0c8040  jmp 0xc8121
    X86_AT(c, 0xc8040u);
    goto L_c8121;
L_c8045:
    X86_TICK(c, 9);
    // 0c8045  mov ebx, 0x44
    X86_AT(c, 0xc8045u);
    c.r[3] = 0x44u;
    // 0c804a  jmp 0xc8121
    X86_AT(c, 0xc804au);
    goto L_c8121;
L_c804f:
    X86_TICK(c, 9);
    // 0c804f  mov ebx, 0x45
    X86_AT(c, 0xc804fu);
    c.r[3] = 0x45u;
    // 0c8054  jmp 0xc8121
    X86_AT(c, 0xc8054u);
    goto L_c8121;
L_c8059:
    X86_TICK(c, 9);
    // 0c8059  mov ebx, 0x46
    X86_AT(c, 0xc8059u);
    c.r[3] = 0x46u;
    // 0c805e  jmp 0xc8121
    X86_AT(c, 0xc805eu);
    goto L_c8121;
L_c8063:
    X86_TICK(c, 9);
    // 0c8063  mov ebx, 0x47
    X86_AT(c, 0xc8063u);
    c.r[3] = 0x47u;
    // 0c8068  jmp 0xc8121
    X86_AT(c, 0xc8068u);
    goto L_c8121;
L_c806d:
    X86_TICK(c, 9);
    // 0c806d  mov ebx, 0x48
    X86_AT(c, 0xc806du);
    c.r[3] = 0x48u;
    // 0c8072  jmp 0xc8121
    X86_AT(c, 0xc8072u);
    goto L_c8121;
L_c8077:
    X86_TICK(c, 9);
    // 0c8077  mov ebx, 0x49
    X86_AT(c, 0xc8077u);
    c.r[3] = 0x49u;
    // 0c807c  jmp 0xc8121
    X86_AT(c, 0xc807cu);
    goto L_c8121;
L_c8081:
    X86_TICK(c, 9);
    // 0c8081  mov ebx, 0x4a
    X86_AT(c, 0xc8081u);
    c.r[3] = 0x4Au;
    // 0c8086  jmp 0xc8121
    X86_AT(c, 0xc8086u);
    goto L_c8121;
L_c808b:
    X86_TICK(c, 9);
    // 0c808b  mov ebx, 0x4b
    X86_AT(c, 0xc808bu);
    c.r[3] = 0x4Bu;
    // 0c8090  jmp 0xc8121
    X86_AT(c, 0xc8090u);
    goto L_c8121;
L_c8095:
    X86_TICK(c, 9);
    // 0c8095  mov ebx, 0x4c
    X86_AT(c, 0xc8095u);
    c.r[3] = 0x4Cu;
    // 0c809a  jmp 0xc8121
    X86_AT(c, 0xc809au);
    goto L_c8121;
L_c809f:
    X86_TICK(c, 9);
    // 0c809f  mov ebx, 0x4d
    X86_AT(c, 0xc809fu);
    c.r[3] = 0x4Du;
    // 0c80a4  jmp 0xc8121
    X86_AT(c, 0xc80a4u);
    goto L_c8121;
L_c80a9:
    X86_TICK(c, 9);
    // 0c80a9  mov ebx, 0x4e
    X86_AT(c, 0xc80a9u);
    c.r[3] = 0x4Eu;
    // 0c80ae  jmp 0xc8121
    X86_AT(c, 0xc80aeu);
    goto L_c8121;
L_c80b3:
    X86_TICK(c, 9);
    // 0c80b3  mov ebx, 0x4f
    X86_AT(c, 0xc80b3u);
    c.r[3] = 0x4Fu;
    // 0c80b8  jmp 0xc8121
    X86_AT(c, 0xc80b8u);
    goto L_c8121;
L_c80bd:
    X86_TICK(c, 9);
    // 0c80bd  mov ebx, 0x50
    X86_AT(c, 0xc80bdu);
    c.r[3] = 0x50u;
    // 0c80c2  jmp 0xc8121
    X86_AT(c, 0xc80c2u);
    goto L_c8121;
L_c80c4:
    X86_TICK(c, 9);
    // 0c80c4  mov ebx, 0x51
    X86_AT(c, 0xc80c4u);
    c.r[3] = 0x51u;
    // 0c80c9  jmp 0xc8121
    X86_AT(c, 0xc80c9u);
    goto L_c8121;
L_c80cb:
    X86_TICK(c, 9);
    // 0c80cb  mov ebx, 0x52
    X86_AT(c, 0xc80cbu);
    c.r[3] = 0x52u;
    // 0c80d0  jmp 0xc8121
    X86_AT(c, 0xc80d0u);
    goto L_c8121;
L_c80d2:
    X86_TICK(c, 9);
    // 0c80d2  mov ebx, 0x53
    X86_AT(c, 0xc80d2u);
    c.r[3] = 0x53u;
    // 0c80d7  jmp 0xc8121
    X86_AT(c, 0xc80d7u);
    goto L_c8121;
L_c80d9:
    X86_TICK(c, 9);
    // 0c80d9  mov ebx, 0x54
    X86_AT(c, 0xc80d9u);
    c.r[3] = 0x54u;
    // 0c80de  jmp 0xc8121
    X86_AT(c, 0xc80deu);
    goto L_c8121;
L_c80e0:
    X86_TICK(c, 9);
    // 0c80e0  mov ebx, 0x55
    X86_AT(c, 0xc80e0u);
    c.r[3] = 0x55u;
    // 0c80e5  jmp 0xc8121
    X86_AT(c, 0xc80e5u);
    goto L_c8121;
L_c80e7:
    X86_TICK(c, 9);
    // 0c80e7  mov ebx, 0x56
    X86_AT(c, 0xc80e7u);
    c.r[3] = 0x56u;
    // 0c80ec  jmp 0xc8121
    X86_AT(c, 0xc80ecu);
    goto L_c8121;
L_c80ee:
    X86_TICK(c, 9);
    // 0c80ee  mov ebx, 0x57
    X86_AT(c, 0xc80eeu);
    c.r[3] = 0x57u;
    // 0c80f3  jmp 0xc8121
    X86_AT(c, 0xc80f3u);
    goto L_c8121;
L_c80f5:
    X86_TICK(c, 9);
    // 0c80f5  mov ebx, 0x58
    X86_AT(c, 0xc80f5u);
    c.r[3] = 0x58u;
    // 0c80fa  jmp 0xc8121
    X86_AT(c, 0xc80fau);
    goto L_c8121;
L_c80fc:
    X86_TICK(c, 9);
    // 0c80fc  mov ebx, 0x59
    X86_AT(c, 0xc80fcu);
    c.r[3] = 0x59u;
    // 0c8101  jmp 0xc8121
    X86_AT(c, 0xc8101u);
    goto L_c8121;
L_c8103:
    X86_TICK(c, 9);
    // 0c8103  mov ebx, 0x5a
    X86_AT(c, 0xc8103u);
    c.r[3] = 0x5Au;
    // 0c8108  jmp 0xc8121
    X86_AT(c, 0xc8108u);
    goto L_c8121;
L_c810a:
    X86_TICK(c, 9);
    // 0c810a  sub ebx, ebx
    X86_AT(c, 0xc810au);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c810c  call 0xc60e0
    X86_AT(c, 0xc810cu);
    push32(c, 0xc8111u); x86_call_known(c, 0xc60e0u, f_000c60e0); X86_RET(c, 0xc8111u);
    X86_TICK(c, 9);
    // 0c8111  push edi
    X86_AT(c, 0xc8111u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8112  call 0xca0a0
    X86_AT(c, 0xc8112u);
    push32(c, 0xc8117u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xc8117u);
    X86_TICK(c, 9);
    // 0c8117  add esp, 4
    X86_AT(c, 0xc8117u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c811a  jmp 0xc8121
    X86_AT(c, 0xc811au);
    goto L_c8121;
L_c811c:
    X86_TICK(c, 2);
    // 0c811c  mov ebx, 0x20
    X86_AT(c, 0xc811cu);
    c.r[3] = 0x20u;
L_c8121:
    X86_TICK(c, 11);
    // 0c8121  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xc8121u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0c8124  cmp edx, 0x50
    X86_AT(c, 0xc8124u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0c8127  ja 0xc8150
    X86_AT(c, 0xc8127u);
    if (x86_cc(c, 7)) { goto L_c8150; }
    X86_TICK(c, 7);
    // 0c8129  cmp edx, 0x50
    X86_AT(c, 0xc8129u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0c812c  je 0xc8172
    X86_AT(c, 0xc812cu);
    if (x86_cc(c, 4)) { goto L_c8172; }
    X86_TICK(c, 7);
    // 0c812e  cmp edx, 1
    X86_AT(c, 0xc812eu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0c8131  je 0xc8187
    X86_AT(c, 0xc8131u);
    if (x86_cc(c, 4)) { goto L_c8187; }
    X86_TICK(c, 7);
    // 0c8137  cmp edx, 0xf
    X86_AT(c, 0xc8137u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0c813a  je 0xc8179
    X86_AT(c, 0xc813au);
    if (x86_cc(c, 4)) { goto L_c8179; }
    X86_TICK(c, 7);
    // 0c813c  cmp edx, 0x1d
    X86_AT(c, 0xc813cu);
    (void)x86_sub(c, c.r[2], 0x1Du, 0, 4);
    // 0c813f  je 0xc8180
    X86_AT(c, 0xc813fu);
    if (x86_cc(c, 4)) { goto L_c8180; }
    X86_TICK(c, 7);
    // 0c8141  cmp edx, 0x4d
    X86_AT(c, 0xc8141u);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0c8144  je 0xc816b
    X86_AT(c, 0xc8144u);
    if (x86_cc(c, 4)) { goto L_c816b; }
    X86_TICK(c, 7);
    // 0c8146  cmp edx, 0x4f
    X86_AT(c, 0xc8146u);
    (void)x86_sub(c, c.r[2], 0x4Fu, 0, 4);
    // 0c8149  je 0xc8179
    X86_AT(c, 0xc8149u);
    if (x86_cc(c, 4)) { goto L_c8179; }
    X86_TICK(c, 7);
    // 0c814b  jmp 0xc81ae
    X86_AT(c, 0xc814bu);
    goto L_c81ae;
L_c8150:
    X86_TICK(c, 7);
    // 0c8150  cmp edx, 0x51
    X86_AT(c, 0xc8150u);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
    // 0c8153  je 0xc818e
    X86_AT(c, 0xc8153u);
    if (x86_cc(c, 4)) { goto L_c818e; }
    X86_TICK(c, 7);
    // 0c8155  cmp edx, 0x5d
    X86_AT(c, 0xc8155u);
    (void)x86_sub(c, c.r[2], 0x5Du, 0, 4);
    // 0c8158  je 0xc8195
    X86_AT(c, 0xc8158u);
    if (x86_cc(c, 4)) { goto L_c8195; }
    X86_TICK(c, 7);
    // 0c815a  cmp edx, 0x5e
    X86_AT(c, 0xc815au);
    (void)x86_sub(c, c.r[2], 0x5Eu, 0, 4);
    // 0c815d  je 0xc81a7
    X86_AT(c, 0xc815du);
    if (x86_cc(c, 4)) { goto L_c81a7; }
    X86_TICK(c, 7);
    // 0c815f  cmp edx, 0x72
    X86_AT(c, 0xc815fu);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0c8162  je 0xc8187
    X86_AT(c, 0xc8162u);
    if (x86_cc(c, 4)) { goto L_c8187; }
    X86_TICK(c, 7);
    // 0c8164  cmp edx, 0x73
    X86_AT(c, 0xc8164u);
    (void)x86_sub(c, c.r[2], 0x73u, 0, 4);
    // 0c8167  je 0xc8180
    X86_AT(c, 0xc8167u);
    if (x86_cc(c, 4)) { goto L_c8180; }
    X86_TICK(c, 7);
    // 0c8169  jmp 0xc81ae
    X86_AT(c, 0xc8169u);
    goto L_c81ae;
L_c816b:
    X86_TICK(c, 9);
    // 0c816b  mov ebx, 5
    X86_AT(c, 0xc816bu);
    c.r[3] = 0x5u;
    // 0c8170  jmp 0xc81ae
    X86_AT(c, 0xc8170u);
    goto L_c81ae;
L_c8172:
    X86_TICK(c, 9);
    // 0c8172  mov ebx, 6
    X86_AT(c, 0xc8172u);
    c.r[3] = 0x6u;
    // 0c8177  jmp 0xc81ae
    X86_AT(c, 0xc8177u);
    goto L_c81ae;
L_c8179:
    X86_TICK(c, 9);
    // 0c8179  mov ebx, 3
    X86_AT(c, 0xc8179u);
    c.r[3] = 0x3u;
    // 0c817e  jmp 0xc81ae
    X86_AT(c, 0xc817eu);
    goto L_c81ae;
L_c8180:
    X86_TICK(c, 9);
    // 0c8180  mov ebx, 4
    X86_AT(c, 0xc8180u);
    c.r[3] = 0x4u;
    // 0c8185  jmp 0xc81ae
    X86_AT(c, 0xc8185u);
    goto L_c81ae;
L_c8187:
    X86_TICK(c, 9);
    // 0c8187  mov ebx, 1
    X86_AT(c, 0xc8187u);
    c.r[3] = 0x1u;
    // 0c818c  jmp 0xc81ae
    X86_AT(c, 0xc818cu);
    goto L_c81ae;
L_c818e:
    X86_TICK(c, 9);
    // 0c818e  mov ebx, 7
    X86_AT(c, 0xc818eu);
    c.r[3] = 0x7u;
    // 0c8193  jmp 0xc81ae
    X86_AT(c, 0xc8193u);
    goto L_c81ae;
L_c8195:
    X86_TICK(c, 9);
    // 0c8195  sub ebx, ebx
    X86_AT(c, 0xc8195u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c8197  call 0xc8a00
    X86_AT(c, 0xc8197u);
    push32(c, 0xc819cu); x86_call_known(c, 0xc8a00u, f_000c8a00); X86_RET(c, 0xc819cu);
    X86_TICK(c, 9);
    // 0c819c  push edi
    X86_AT(c, 0xc819cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c819d  call 0xca0a0
    X86_AT(c, 0xc819du);
    push32(c, 0xc81a2u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xc81a2u);
    X86_TICK(c, 9);
    // 0c81a2  add esp, 4
    X86_AT(c, 0xc81a2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c81a5  jmp 0xc81ae
    X86_AT(c, 0xc81a5u);
    goto L_c81ae;
L_c81a7:
    X86_TICK(c, 9);
    // 0c81a7  sub ebx, ebx
    X86_AT(c, 0xc81a7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c81a9  call 0xc8a34
    X86_AT(c, 0xc81a9u);
    push32(c, 0xc81aeu); x86_call_known(c, 0xc8a34u, f_000c8a34); X86_RET(c, 0xc81aeu);
L_c81ae:
    X86_TICK(c, 7);
    // 0c81ae  cmp ebx, 0x20
    X86_AT(c, 0xc81aeu);
    (void)x86_sub(c, c.r[3], 0x20u, 0, 4);
    // 0c81b1  jl 0xc81be
    X86_AT(c, 0xc81b1u);
    if (x86_cc(c, 12)) { goto L_c81be; }
    X86_TICK(c, 13);
    // 0c81b3  mov eax, ebx
    X86_AT(c, 0xc81b3u);
    c.r[0] = c.r[3];
    // 0c81b5  push eax
    X86_AT(c, 0xc81b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c81b6  push edi
    X86_AT(c, 0xc81b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c81b7  call 0xca58c
    X86_AT(c, 0xc81b7u);
    push32(c, 0xc81bcu); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xc81bcu);
    X86_TICK(c, 7);
    // 0c81bc  jmp 0xc81c9
    X86_AT(c, 0xc81bcu);
    goto L_c81c9;
L_c81be:
    X86_TICK(c, 11);
    // 0c81be  push 0x2044
    X86_AT(c, 0xc81beu);
    { uint32_t v = 0x2044u; push32(c, v); }
    // 0c81c3  push edi
    X86_AT(c, 0xc81c3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c81c4  call 0xca414
    X86_AT(c, 0xc81c4u);
    push32(c, 0xc81c9u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xc81c9u);
L_c81c9:
    X86_TICK(c, 21);
    // 0c81c9  add esp, 8
    X86_AT(c, 0xc81c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c81cc  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xc81ccu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0c81cf  push dword ptr [ebp - 4]
    X86_AT(c, 0xc81cfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c81d2  push edi
    X86_AT(c, 0xc81d2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c81d3  call 0xca9c8
    X86_AT(c, 0xc81d3u);
    push32(c, 0xc81d8u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xc81d8u);
    X86_TICK(c, 4);
    // 0c81d8  mov eax, ebx
    X86_AT(c, 0xc81d8u);
    c.r[0] = c.r[3];
    // 0c81da  add esp, 0xc
    X86_AT(c, 0xc81dau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c81dd:
    X86_TICK(c, 28);
    // 0c81dd  pop edi
    X86_AT(c, 0xc81ddu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c81de  pop esi
    X86_AT(c, 0xc81deu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c81df  pop ebx
    X86_AT(c, 0xc81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c81e0  leave 
    X86_AT(c, 0xc81e0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c81e1  ret 
    X86_AT(c, 0xc81e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc7dc8u, "ran off the end of a function");
}
void f_000c8121(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0c8121  mov edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xc8121u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0c8124  cmp edx, 0x50
    X86_AT(c, 0xc8124u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0c8127  ja 0xc8150
    X86_AT(c, 0xc8127u);
    if (x86_cc(c, 7)) { goto L_c8150; }
    X86_TICK(c, 7);
    // 0c8129  cmp edx, 0x50
    X86_AT(c, 0xc8129u);
    (void)x86_sub(c, c.r[2], 0x50u, 0, 4);
    // 0c812c  je 0xc8172
    X86_AT(c, 0xc812cu);
    if (x86_cc(c, 4)) { goto L_c8172; }
    X86_TICK(c, 7);
    // 0c812e  cmp edx, 1
    X86_AT(c, 0xc812eu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0c8131  je 0xc8187
    X86_AT(c, 0xc8131u);
    if (x86_cc(c, 4)) { goto L_c8187; }
    X86_TICK(c, 7);
    // 0c8137  cmp edx, 0xf
    X86_AT(c, 0xc8137u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0c813a  je 0xc8179
    X86_AT(c, 0xc813au);
    if (x86_cc(c, 4)) { goto L_c8179; }
    X86_TICK(c, 7);
    // 0c813c  cmp edx, 0x1d
    X86_AT(c, 0xc813cu);
    (void)x86_sub(c, c.r[2], 0x1Du, 0, 4);
    // 0c813f  je 0xc8180
    X86_AT(c, 0xc813fu);
    if (x86_cc(c, 4)) { goto L_c8180; }
    X86_TICK(c, 7);
    // 0c8141  cmp edx, 0x4d
    X86_AT(c, 0xc8141u);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0c8144  je 0xc816b
    X86_AT(c, 0xc8144u);
    if (x86_cc(c, 4)) { goto L_c816b; }
    X86_TICK(c, 7);
    // 0c8146  cmp edx, 0x4f
    X86_AT(c, 0xc8146u);
    (void)x86_sub(c, c.r[2], 0x4Fu, 0, 4);
    // 0c8149  je 0xc8179
    X86_AT(c, 0xc8149u);
    if (x86_cc(c, 4)) { goto L_c8179; }
    X86_TICK(c, 7);
    // 0c814b  jmp 0xc81ae
    X86_AT(c, 0xc814bu);
    goto L_c81ae;
L_c8150:
    X86_TICK(c, 7);
    // 0c8150  cmp edx, 0x51
    X86_AT(c, 0xc8150u);
    (void)x86_sub(c, c.r[2], 0x51u, 0, 4);
    // 0c8153  je 0xc818e
    X86_AT(c, 0xc8153u);
    if (x86_cc(c, 4)) { goto L_c818e; }
    X86_TICK(c, 7);
    // 0c8155  cmp edx, 0x5d
    X86_AT(c, 0xc8155u);
    (void)x86_sub(c, c.r[2], 0x5Du, 0, 4);
    // 0c8158  je 0xc8195
    X86_AT(c, 0xc8158u);
    if (x86_cc(c, 4)) { goto L_c8195; }
    X86_TICK(c, 7);
    // 0c815a  cmp edx, 0x5e
    X86_AT(c, 0xc815au);
    (void)x86_sub(c, c.r[2], 0x5Eu, 0, 4);
    // 0c815d  je 0xc81a7
    X86_AT(c, 0xc815du);
    if (x86_cc(c, 4)) { goto L_c81a7; }
    X86_TICK(c, 7);
    // 0c815f  cmp edx, 0x72
    X86_AT(c, 0xc815fu);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0c8162  je 0xc8187
    X86_AT(c, 0xc8162u);
    if (x86_cc(c, 4)) { goto L_c8187; }
    X86_TICK(c, 7);
    // 0c8164  cmp edx, 0x73
    X86_AT(c, 0xc8164u);
    (void)x86_sub(c, c.r[2], 0x73u, 0, 4);
    // 0c8167  je 0xc8180
    X86_AT(c, 0xc8167u);
    if (x86_cc(c, 4)) { goto L_c8180; }
    X86_TICK(c, 7);
    // 0c8169  jmp 0xc81ae
    X86_AT(c, 0xc8169u);
    goto L_c81ae;
L_c816b:
    X86_TICK(c, 9);
    // 0c816b  mov ebx, 5
    X86_AT(c, 0xc816bu);
    c.r[3] = 0x5u;
    // 0c8170  jmp 0xc81ae
    X86_AT(c, 0xc8170u);
    goto L_c81ae;
L_c8172:
    X86_TICK(c, 9);
    // 0c8172  mov ebx, 6
    X86_AT(c, 0xc8172u);
    c.r[3] = 0x6u;
    // 0c8177  jmp 0xc81ae
    X86_AT(c, 0xc8177u);
    goto L_c81ae;
L_c8179:
    X86_TICK(c, 9);
    // 0c8179  mov ebx, 3
    X86_AT(c, 0xc8179u);
    c.r[3] = 0x3u;
    // 0c817e  jmp 0xc81ae
    X86_AT(c, 0xc817eu);
    goto L_c81ae;
L_c8180:
    X86_TICK(c, 9);
    // 0c8180  mov ebx, 4
    X86_AT(c, 0xc8180u);
    c.r[3] = 0x4u;
    // 0c8185  jmp 0xc81ae
    X86_AT(c, 0xc8185u);
    goto L_c81ae;
L_c8187:
    X86_TICK(c, 9);
    // 0c8187  mov ebx, 1
    X86_AT(c, 0xc8187u);
    c.r[3] = 0x1u;
    // 0c818c  jmp 0xc81ae
    X86_AT(c, 0xc818cu);
    goto L_c81ae;
L_c818e:
    X86_TICK(c, 9);
    // 0c818e  mov ebx, 7
    X86_AT(c, 0xc818eu);
    c.r[3] = 0x7u;
    // 0c8193  jmp 0xc81ae
    X86_AT(c, 0xc8193u);
    goto L_c81ae;
L_c8195:
    X86_TICK(c, 9);
    // 0c8195  sub ebx, ebx
    X86_AT(c, 0xc8195u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c8197  call 0xc8a00
    X86_AT(c, 0xc8197u);
    push32(c, 0xc819cu); x86_call_known(c, 0xc8a00u, f_000c8a00); X86_RET(c, 0xc819cu);
    X86_TICK(c, 9);
    // 0c819c  push edi
    X86_AT(c, 0xc819cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c819d  call 0xca0a0
    X86_AT(c, 0xc819du);
    push32(c, 0xc81a2u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xc81a2u);
    X86_TICK(c, 9);
    // 0c81a2  add esp, 4
    X86_AT(c, 0xc81a2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c81a5  jmp 0xc81ae
    X86_AT(c, 0xc81a5u);
    goto L_c81ae;
L_c81a7:
    X86_TICK(c, 9);
    // 0c81a7  sub ebx, ebx
    X86_AT(c, 0xc81a7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c81a9  call 0xc8a34
    X86_AT(c, 0xc81a9u);
    push32(c, 0xc81aeu); x86_call_known(c, 0xc8a34u, f_000c8a34); X86_RET(c, 0xc81aeu);
L_c81ae:
    X86_TICK(c, 7);
    // 0c81ae  cmp ebx, 0x20
    X86_AT(c, 0xc81aeu);
    (void)x86_sub(c, c.r[3], 0x20u, 0, 4);
    // 0c81b1  jl 0xc81be
    X86_AT(c, 0xc81b1u);
    if (x86_cc(c, 12)) { goto L_c81be; }
    X86_TICK(c, 13);
    // 0c81b3  mov eax, ebx
    X86_AT(c, 0xc81b3u);
    c.r[0] = c.r[3];
    // 0c81b5  push eax
    X86_AT(c, 0xc81b5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c81b6  push edi
    X86_AT(c, 0xc81b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c81b7  call 0xca58c
    X86_AT(c, 0xc81b7u);
    push32(c, 0xc81bcu); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xc81bcu);
    X86_TICK(c, 7);
    // 0c81bc  jmp 0xc81c9
    X86_AT(c, 0xc81bcu);
    goto L_c81c9;
L_c81be:
    X86_TICK(c, 11);
    // 0c81be  push 0x2044
    X86_AT(c, 0xc81beu);
    { uint32_t v = 0x2044u; push32(c, v); }
    // 0c81c3  push edi
    X86_AT(c, 0xc81c3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c81c4  call 0xca414
    X86_AT(c, 0xc81c4u);
    push32(c, 0xc81c9u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xc81c9u);
L_c81c9:
    X86_TICK(c, 21);
    // 0c81c9  add esp, 8
    X86_AT(c, 0xc81c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c81cc  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xc81ccu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0c81cf  push dword ptr [ebp - 4]
    X86_AT(c, 0xc81cfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0c81d2  push edi
    X86_AT(c, 0xc81d2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c81d3  call 0xca9c8
    X86_AT(c, 0xc81d3u);
    push32(c, 0xc81d8u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xc81d8u);
    X86_TICK(c, 32);
    // 0c81d8  mov eax, ebx
    X86_AT(c, 0xc81d8u);
    c.r[0] = c.r[3];
    // 0c81da  add esp, 0xc
    X86_AT(c, 0xc81dau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c81dd  pop edi
    X86_AT(c, 0xc81ddu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c81de  pop esi
    X86_AT(c, 0xc81deu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c81df  pop ebx
    X86_AT(c, 0xc81dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c81e0  leave 
    X86_AT(c, 0xc81e0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c81e1  ret 
    X86_AT(c, 0xc81e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8121u, "ran off the end of a function");
}
void f_000c81e4(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0c81e4  push ebp
    X86_AT(c, 0xc81e4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c81e5  mov ebp, esp
    X86_AT(c, 0xc81e5u);
    c.r[5] = c.r[4];
    // 0c81e7  push eax
    X86_AT(c, 0xc81e7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c81e8  push ebx
    X86_AT(c, 0xc81e8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c81e9  push esi
    X86_AT(c, 0xc81e9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c81ea  push edi
    X86_AT(c, 0xc81eau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c81eb  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc81ebu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c81ee  sub eax, eax
    X86_AT(c, 0xc81eeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c81f0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc81f0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c81f3  xchg esi, eax
    X86_AT(c, 0xc81f3u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0c81f4  cmp si, word ptr [0xa1b74]
    X86_AT(c, 0xc81f4u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(0xA1B74u))), 0, 2);
    // 0c81fb  jne 0xc820c
    X86_AT(c, 0xc81fbu);
    if (x86_cc(c, 5)) { goto L_c820c; }
    X86_TICK(c, 9);
    // 0c81fd  push esi
    X86_AT(c, 0xc81fdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c81fe  call 0xc5e44
    X86_AT(c, 0xc81feu);
    push32(c, 0xc8203u); x86_call_known(c, 0xc5e44u, f_000c5e44); X86_RET(c, 0xc8203u);
    X86_TICK(c, 9);
    // 0c8203  push edi
    X86_AT(c, 0xc8203u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8204  call 0xca0a0
    X86_AT(c, 0xc8204u);
    push32(c, 0xc8209u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xc8209u);
    X86_TICK(c, 2);
    // 0c8209  add esp, 8
    X86_AT(c, 0xc8209u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c820c:
    X86_TICK(c, 7);
    // 0c820c  call 0xc5e3c
    X86_AT(c, 0xc820cu);
    push32(c, 0xc8211u); x86_call_known(c, 0xc5e3cu, f_000c5e3c); X86_RET(c, 0xc8211u);
    X86_TICK(c, 7);
    // 0c8211  call 0xc56a4
    X86_AT(c, 0xc8211u);
    push32(c, 0xc8216u); x86_call_known(c, 0xc56a4u, f_000c56a4); X86_RET(c, 0xc8216u);
    X86_TICK(c, 13);
    // 0c8216  lea ebx, [ebp - 4]
    X86_AT(c, 0xc8216u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0c8219  push ebx
    X86_AT(c, 0xc8219u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c821a  push 1
    X86_AT(c, 0xc821au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c821c  call 0xa9
    X86_AT(c, 0xc821cu);
    push32(c, 0xc8221u); x86_call_known(c, 0xa9u, f_000000a9); X86_RET(c, 0xc8221u);
    X86_TICK(c, 15);
    // 0c8221  add esp, 8
    X86_AT(c, 0xc8221u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c8224  mov eax, dword ptr [ebx]
    X86_AT(c, 0xc8224u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0c8226  and eax, 0xff00
    X86_AT(c, 0xc8226u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFF00u, 4); }
    // 0c822b  cmp eax, 0xff00
    X86_AT(c, 0xc822bu);
    (void)x86_sub(c, c.r[0], 0xFF00u, 0, 4);
    // 0c8230  jne 0xc8239
    X86_AT(c, 0xc8230u);
    if (x86_cc(c, 5)) { goto L_c8239; }
    X86_TICK(c, 9);
    // 0c8232  sub eax, eax
    X86_AT(c, 0xc8232u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c8234  jmp 0xc85dd
    X86_AT(c, 0xc8234u);
    goto L_c85dd;
L_c8239:
    X86_TICK(c, 23);
    // 0c8239  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc8239u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c823c  shr eax, 8
    X86_AT(c, 0xc823cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0c823f  and eax, 0xff
    X86_AT(c, 0xc823fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFu, 4); }
    // 0c8244  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc8244u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c8247  xchg edx, eax
    X86_AT(c, 0xc8247u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0c8248  dec edx
    X86_AT(c, 0xc8248u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c8249  cmp edx, 0x72
    X86_AT(c, 0xc8249u);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0c824c  ja 0xc85db
    X86_AT(c, 0xc824cu);
    if (x86_cc(c, 7)) { goto L_c85db; }
    X86_TICK(c, 7);
    // 0c8252  jmp dword ptr cs:[edx*4 + 0xc825a]
    X86_AT(c, 0xc8252u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xC825Au)));
      switch (t) {
      case 0xc8426u: goto L_c8426;
      case 0xc8430u: goto L_c8430;
      case 0xc843au: goto L_c843a;
      case 0xc8444u: goto L_c8444;
      case 0xc844eu: goto L_c844e;
      case 0xc8458u: goto L_c8458;
      case 0xc8462u: goto L_c8462;
      case 0xc846cu: goto L_c846c;
      case 0xc8476u: goto L_c8476;
      case 0xc8480u: goto L_c8480;
      case 0xc848au: goto L_c848a;
      case 0xc8494u: goto L_c8494;
      case 0xc849eu: goto L_c849e;
      case 0xc84a8u: goto L_c84a8;
      case 0xc84b2u: goto L_c84b2;
      case 0xc84bcu: goto L_c84bc;
      case 0xc84c6u: goto L_c84c6;
      case 0xc84d0u: goto L_c84d0;
      case 0xc84dau: goto L_c84da;
      case 0xc84e4u: goto L_c84e4;
      case 0xc84eeu: goto L_c84ee;
      case 0xc84f8u: goto L_c84f8;
      case 0xc8502u: goto L_c8502;
      case 0xc850cu: goto L_c850c;
      case 0xc8516u: goto L_c8516;
      case 0xc8520u: goto L_c8520;
      case 0xc852au: goto L_c852a;
      case 0xc8534u: goto L_c8534;
      case 0xc853eu: goto L_c853e;
      case 0xc8548u: goto L_c8548;
      case 0xc8552u: goto L_c8552;
      case 0xc855cu: goto L_c855c;
      case 0xc8566u: goto L_c8566;
      case 0xc8570u: goto L_c8570;
      case 0xc857au: goto L_c857a;
      case 0xc8581u: goto L_c8581;
      case 0xc8588u: goto L_c8588;
      case 0xc8591u: goto L_c8591;
      case 0xc8598u: goto L_c8598;
      case 0xc859fu: goto L_c859f;
      case 0xc85a6u: goto L_c85a6;
      case 0xc85adu: goto L_c85ad;
      case 0xc85b4u: goto L_c85b4;
      case 0xc85bbu: goto L_c85bb;
      case 0xc85c2u: goto L_c85c2;
      case 0xc85d4u: goto L_c85d4;
      case 0xc85dbu: goto L_c85db;
      default: x86_jump(c, t); return; } }
L_c8426:
    X86_TICK(c, 9);
    // 0c8426  mov esi, 0x31
    X86_AT(c, 0xc8426u);
    c.r[6] = 0x31u;
    // 0c842b  jmp 0xc85db
    X86_AT(c, 0xc842bu);
    goto L_c85db;
L_c8430:
    X86_TICK(c, 9);
    // 0c8430  mov esi, 0x32
    X86_AT(c, 0xc8430u);
    c.r[6] = 0x32u;
    // 0c8435  jmp 0xc85db
    X86_AT(c, 0xc8435u);
    goto L_c85db;
L_c843a:
    X86_TICK(c, 9);
    // 0c843a  mov esi, 0x33
    X86_AT(c, 0xc843au);
    c.r[6] = 0x33u;
    // 0c843f  jmp 0xc85db
    X86_AT(c, 0xc843fu);
    goto L_c85db;
L_c8444:
    X86_TICK(c, 9);
    // 0c8444  mov esi, 0x34
    X86_AT(c, 0xc8444u);
    c.r[6] = 0x34u;
    // 0c8449  jmp 0xc85db
    X86_AT(c, 0xc8449u);
    goto L_c85db;
L_c844e:
    X86_TICK(c, 9);
    // 0c844e  mov esi, 0x35
    X86_AT(c, 0xc844eu);
    c.r[6] = 0x35u;
    // 0c8453  jmp 0xc85db
    X86_AT(c, 0xc8453u);
    goto L_c85db;
L_c8458:
    X86_TICK(c, 9);
    // 0c8458  mov esi, 0x36
    X86_AT(c, 0xc8458u);
    c.r[6] = 0x36u;
    // 0c845d  jmp 0xc85db
    X86_AT(c, 0xc845du);
    goto L_c85db;
L_c8462:
    X86_TICK(c, 9);
    // 0c8462  mov esi, 0x37
    X86_AT(c, 0xc8462u);
    c.r[6] = 0x37u;
    // 0c8467  jmp 0xc85db
    X86_AT(c, 0xc8467u);
    goto L_c85db;
L_c846c:
    X86_TICK(c, 9);
    // 0c846c  mov esi, 0x38
    X86_AT(c, 0xc846cu);
    c.r[6] = 0x38u;
    // 0c8471  jmp 0xc85db
    X86_AT(c, 0xc8471u);
    goto L_c85db;
L_c8476:
    X86_TICK(c, 9);
    // 0c8476  mov esi, 0x39
    X86_AT(c, 0xc8476u);
    c.r[6] = 0x39u;
    // 0c847b  jmp 0xc85db
    X86_AT(c, 0xc847bu);
    goto L_c85db;
L_c8480:
    X86_TICK(c, 9);
    // 0c8480  mov esi, 0x30
    X86_AT(c, 0xc8480u);
    c.r[6] = 0x30u;
    // 0c8485  jmp 0xc85db
    X86_AT(c, 0xc8485u);
    goto L_c85db;
L_c848a:
    X86_TICK(c, 9);
    // 0c848a  mov esi, 0x41
    X86_AT(c, 0xc848au);
    c.r[6] = 0x41u;
    // 0c848f  jmp 0xc85db
    X86_AT(c, 0xc848fu);
    goto L_c85db;
L_c8494:
    X86_TICK(c, 9);
    // 0c8494  mov esi, 0x42
    X86_AT(c, 0xc8494u);
    c.r[6] = 0x42u;
    // 0c8499  jmp 0xc85db
    X86_AT(c, 0xc8499u);
    goto L_c85db;
L_c849e:
    X86_TICK(c, 9);
    // 0c849e  mov esi, 0x43
    X86_AT(c, 0xc849eu);
    c.r[6] = 0x43u;
    // 0c84a3  jmp 0xc85db
    X86_AT(c, 0xc84a3u);
    goto L_c85db;
L_c84a8:
    X86_TICK(c, 9);
    // 0c84a8  mov esi, 0x44
    X86_AT(c, 0xc84a8u);
    c.r[6] = 0x44u;
    // 0c84ad  jmp 0xc85db
    X86_AT(c, 0xc84adu);
    goto L_c85db;
L_c84b2:
    X86_TICK(c, 9);
    // 0c84b2  mov esi, 0x45
    X86_AT(c, 0xc84b2u);
    c.r[6] = 0x45u;
    // 0c84b7  jmp 0xc85db
    X86_AT(c, 0xc84b7u);
    goto L_c85db;
L_c84bc:
    X86_TICK(c, 9);
    // 0c84bc  mov esi, 0x46
    X86_AT(c, 0xc84bcu);
    c.r[6] = 0x46u;
    // 0c84c1  jmp 0xc85db
    X86_AT(c, 0xc84c1u);
    goto L_c85db;
L_c84c6:
    X86_TICK(c, 9);
    // 0c84c6  mov esi, 0x47
    X86_AT(c, 0xc84c6u);
    c.r[6] = 0x47u;
    // 0c84cb  jmp 0xc85db
    X86_AT(c, 0xc84cbu);
    goto L_c85db;
L_c84d0:
    X86_TICK(c, 9);
    // 0c84d0  mov esi, 0x48
    X86_AT(c, 0xc84d0u);
    c.r[6] = 0x48u;
    // 0c84d5  jmp 0xc85db
    X86_AT(c, 0xc84d5u);
    goto L_c85db;
L_c84da:
    X86_TICK(c, 9);
    // 0c84da  mov esi, 0x49
    X86_AT(c, 0xc84dau);
    c.r[6] = 0x49u;
    // 0c84df  jmp 0xc85db
    X86_AT(c, 0xc84dfu);
    goto L_c85db;
L_c84e4:
    X86_TICK(c, 9);
    // 0c84e4  mov esi, 0x4a
    X86_AT(c, 0xc84e4u);
    c.r[6] = 0x4Au;
    // 0c84e9  jmp 0xc85db
    X86_AT(c, 0xc84e9u);
    goto L_c85db;
L_c84ee:
    X86_TICK(c, 9);
    // 0c84ee  mov esi, 0x4b
    X86_AT(c, 0xc84eeu);
    c.r[6] = 0x4Bu;
    // 0c84f3  jmp 0xc85db
    X86_AT(c, 0xc84f3u);
    goto L_c85db;
L_c84f8:
    X86_TICK(c, 9);
    // 0c84f8  mov esi, 0x4c
    X86_AT(c, 0xc84f8u);
    c.r[6] = 0x4Cu;
    // 0c84fd  jmp 0xc85db
    X86_AT(c, 0xc84fdu);
    goto L_c85db;
L_c8502:
    X86_TICK(c, 9);
    // 0c8502  mov esi, 0x4d
    X86_AT(c, 0xc8502u);
    c.r[6] = 0x4Du;
    // 0c8507  jmp 0xc85db
    X86_AT(c, 0xc8507u);
    goto L_c85db;
L_c850c:
    X86_TICK(c, 9);
    // 0c850c  mov esi, 0x4e
    X86_AT(c, 0xc850cu);
    c.r[6] = 0x4Eu;
    // 0c8511  jmp 0xc85db
    X86_AT(c, 0xc8511u);
    goto L_c85db;
L_c8516:
    X86_TICK(c, 9);
    // 0c8516  mov esi, 0x4f
    X86_AT(c, 0xc8516u);
    c.r[6] = 0x4Fu;
    // 0c851b  jmp 0xc85db
    X86_AT(c, 0xc851bu);
    goto L_c85db;
L_c8520:
    X86_TICK(c, 9);
    // 0c8520  mov esi, 0x50
    X86_AT(c, 0xc8520u);
    c.r[6] = 0x50u;
    // 0c8525  jmp 0xc85db
    X86_AT(c, 0xc8525u);
    goto L_c85db;
L_c852a:
    X86_TICK(c, 9);
    // 0c852a  mov esi, 0x51
    X86_AT(c, 0xc852au);
    c.r[6] = 0x51u;
    // 0c852f  jmp 0xc85db
    X86_AT(c, 0xc852fu);
    goto L_c85db;
L_c8534:
    X86_TICK(c, 9);
    // 0c8534  mov esi, 0x52
    X86_AT(c, 0xc8534u);
    c.r[6] = 0x52u;
    // 0c8539  jmp 0xc85db
    X86_AT(c, 0xc8539u);
    goto L_c85db;
L_c853e:
    X86_TICK(c, 9);
    // 0c853e  mov esi, 0x53
    X86_AT(c, 0xc853eu);
    c.r[6] = 0x53u;
    // 0c8543  jmp 0xc85db
    X86_AT(c, 0xc8543u);
    goto L_c85db;
L_c8548:
    X86_TICK(c, 9);
    // 0c8548  mov esi, 0x54
    X86_AT(c, 0xc8548u);
    c.r[6] = 0x54u;
    // 0c854d  jmp 0xc85db
    X86_AT(c, 0xc854du);
    goto L_c85db;
L_c8552:
    X86_TICK(c, 9);
    // 0c8552  mov esi, 0x55
    X86_AT(c, 0xc8552u);
    c.r[6] = 0x55u;
    // 0c8557  jmp 0xc85db
    X86_AT(c, 0xc8557u);
    goto L_c85db;
L_c855c:
    X86_TICK(c, 9);
    // 0c855c  mov esi, 0x56
    X86_AT(c, 0xc855cu);
    c.r[6] = 0x56u;
    // 0c8561  jmp 0xc85db
    X86_AT(c, 0xc8561u);
    goto L_c85db;
L_c8566:
    X86_TICK(c, 9);
    // 0c8566  mov esi, 0x57
    X86_AT(c, 0xc8566u);
    c.r[6] = 0x57u;
    // 0c856b  jmp 0xc85db
    X86_AT(c, 0xc856bu);
    goto L_c85db;
L_c8570:
    X86_TICK(c, 9);
    // 0c8570  mov esi, 0x58
    X86_AT(c, 0xc8570u);
    c.r[6] = 0x58u;
    // 0c8575  jmp 0xc85db
    X86_AT(c, 0xc8575u);
    goto L_c85db;
L_c857a:
    X86_TICK(c, 9);
    // 0c857a  mov esi, 0x59
    X86_AT(c, 0xc857au);
    c.r[6] = 0x59u;
    // 0c857f  jmp 0xc85db
    X86_AT(c, 0xc857fu);
    goto L_c85db;
L_c8581:
    X86_TICK(c, 9);
    // 0c8581  mov esi, 0x5a
    X86_AT(c, 0xc8581u);
    c.r[6] = 0x5Au;
    // 0c8586  jmp 0xc85db
    X86_AT(c, 0xc8586u);
    goto L_c85db;
L_c8588:
    X86_TICK(c, 9);
    // 0c8588  sub esi, esi
    X86_AT(c, 0xc8588u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c858a  call 0xc60e0
    X86_AT(c, 0xc858au);
    push32(c, 0xc858fu); x86_call_known(c, 0xc60e0u, f_000c60e0); X86_RET(c, 0xc858fu);
    X86_TICK(c, 7);
    // 0c858f  jmp 0xc85c9
    X86_AT(c, 0xc858fu);
    goto L_c85c9;
L_c8591:
    X86_TICK(c, 9);
    // 0c8591  mov esi, 0x20
    X86_AT(c, 0xc8591u);
    c.r[6] = 0x20u;
    // 0c8596  jmp 0xc85db
    X86_AT(c, 0xc8596u);
    goto L_c85db;
L_c8598:
    X86_TICK(c, 9);
    // 0c8598  mov esi, 3
    X86_AT(c, 0xc8598u);
    c.r[6] = 0x3u;
    // 0c859d  jmp 0xc85db
    X86_AT(c, 0xc859du);
    goto L_c85db;
L_c859f:
    X86_TICK(c, 9);
    // 0c859f  mov esi, 4
    X86_AT(c, 0xc859fu);
    c.r[6] = 0x4u;
    // 0c85a4  jmp 0xc85db
    X86_AT(c, 0xc85a4u);
    goto L_c85db;
L_c85a6:
    X86_TICK(c, 9);
    // 0c85a6  mov esi, 1
    X86_AT(c, 0xc85a6u);
    c.r[6] = 0x1u;
    // 0c85ab  jmp 0xc85db
    X86_AT(c, 0xc85abu);
    goto L_c85db;
L_c85ad:
    X86_TICK(c, 9);
    // 0c85ad  mov esi, 5
    X86_AT(c, 0xc85adu);
    c.r[6] = 0x5u;
    // 0c85b2  jmp 0xc85db
    X86_AT(c, 0xc85b2u);
    goto L_c85db;
L_c85b4:
    X86_TICK(c, 9);
    // 0c85b4  mov esi, 6
    X86_AT(c, 0xc85b4u);
    c.r[6] = 0x6u;
    // 0c85b9  jmp 0xc85db
    X86_AT(c, 0xc85b9u);
    goto L_c85db;
L_c85bb:
    X86_TICK(c, 9);
    // 0c85bb  mov esi, 7
    X86_AT(c, 0xc85bbu);
    c.r[6] = 0x7u;
    // 0c85c0  jmp 0xc85db
    X86_AT(c, 0xc85c0u);
    goto L_c85db;
L_c85c2:
    X86_TICK(c, 9);
    // 0c85c2  sub esi, esi
    X86_AT(c, 0xc85c2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c85c4  call 0xc8a00
    X86_AT(c, 0xc85c4u);
    push32(c, 0xc85c9u); x86_call_known(c, 0xc8a00u, f_000c8a00); X86_RET(c, 0xc85c9u);
L_c85c9:
    X86_TICK(c, 9);
    // 0c85c9  push edi
    X86_AT(c, 0xc85c9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c85ca  call 0xca0a0
    X86_AT(c, 0xc85cau);
    push32(c, 0xc85cfu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xc85cfu);
    X86_TICK(c, 9);
    // 0c85cf  add esp, 4
    X86_AT(c, 0xc85cfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c85d2  jmp 0xc85db
    X86_AT(c, 0xc85d2u);
    goto L_c85db;
L_c85d4:
    X86_TICK(c, 9);
    // 0c85d4  sub esi, esi
    X86_AT(c, 0xc85d4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c85d6  call 0xc8a34
    X86_AT(c, 0xc85d6u);
    push32(c, 0xc85dbu); x86_call_known(c, 0xc8a34u, f_000c8a34); X86_RET(c, 0xc85dbu);
L_c85db:
    X86_TICK(c, 2);
    // 0c85db  mov eax, esi
    X86_AT(c, 0xc85dbu);
    c.r[0] = c.r[6];
L_c85dd:
    X86_TICK(c, 28);
    // 0c85dd  pop edi
    X86_AT(c, 0xc85ddu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c85de  pop esi
    X86_AT(c, 0xc85deu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c85df  pop ebx
    X86_AT(c, 0xc85dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c85e0  leave 
    X86_AT(c, 0xc85e0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c85e1  ret 
    X86_AT(c, 0xc85e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc81e4u, "ran off the end of a function");
}
void f_000c85db(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0c85db  mov eax, esi
    X86_AT(c, 0xc85dbu);
    c.r[0] = c.r[6];
    // 0c85dd  pop edi
    X86_AT(c, 0xc85ddu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c85de  pop esi
    X86_AT(c, 0xc85deu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c85df  pop ebx
    X86_AT(c, 0xc85dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c85e0  leave 
    X86_AT(c, 0xc85e0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c85e1  ret 
    X86_AT(c, 0xc85e1u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc85dbu, "ran off the end of a function");
}
void f_000c85e4(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0c85e4  push ebp
    X86_AT(c, 0xc85e4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c85e5  mov ebp, esp
    X86_AT(c, 0xc85e5u);
    c.r[5] = c.r[4];
    // 0c85e7  sub esp, 0x60
    X86_AT(c, 0xc85e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x60u, 0, 4); }
    // 0c85ea  push ebx
    X86_AT(c, 0xc85eau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c85eb  push esi
    X86_AT(c, 0xc85ebu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c85ec  push edi
    X86_AT(c, 0xc85ecu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c85ed  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc85edu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c85f0  push edi
    X86_AT(c, 0xc85f0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c85f1  call 0xca0a0
    X86_AT(c, 0xc85f1u);
    push32(c, 0xc85f6u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xc85f6u);
    X86_TICK(c, 20);
    // 0c85f6  sub eax, eax
    X86_AT(c, 0xc85f6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c85f8  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xc85f8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0c85fb  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xc85fbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0c85fe  add esp, 4
    X86_AT(c, 0xc85feu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c8601  cmp dword ptr [ebp + 0x10], 0x50
    X86_AT(c, 0xc8601u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x50u, 0, 4);
    // 0c8605  jle 0xc860e
    X86_AT(c, 0xc8605u);
    if (x86_cc(c, 14)) { goto L_c860e; }
    X86_TICK(c, 2);
    // 0c8607  mov dword ptr [ebp + 0x10], 0x51
    X86_AT(c, 0xc8607u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)), 0x51u);
L_c860e:
    X86_TICK(c, 2);
    // 0c860e  sub esi, esi
    X86_AT(c, 0xc860eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c8610:
    X86_TICK(c, 15);
    // 0c8610  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8610u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8613  mov al, byte ptr [eax + esi*1]
    X86_AT(c, 0xc8613u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6]))));
    // 0c8616  and al, al
    X86_AT(c, 0xc8616u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c8618  je 0xc8626
    X86_AT(c, 0xc8618u);
    if (x86_cc(c, 4)) { goto L_c8626; }
    X86_TICK(c, 11);
    // 0c861a  cmp esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc861au);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 0c861d  jge 0xc8626
    X86_AT(c, 0xc861du);
    if (x86_cc(c, 13)) { goto L_c8626; }
    X86_TICK(c, 11);
    // 0c861f  mov byte ptr [ebp + esi*1 - 0x60], al
    X86_AT(c, 0xc861fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFA0u)), g8(c, 0));
    // 0c8623  inc esi
    X86_AT(c, 0xc8623u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c8624  jmp 0xc8610
    X86_AT(c, 0xc8624u);
    X86_POLL(c, 0xc8610u); goto L_c8610;
L_c8626:
    X86_TICK(c, 12);
    // 0c8626  sub eax, eax
    X86_AT(c, 0xc8626u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c8628  mov byte ptr [ebp + esi*1 - 0x60], al
    X86_AT(c, 0xc8628u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFA0u)), g8(c, 0));
    // 0c862c  dec dword ptr [ebp + 0x10]
    X86_AT(c, 0xc862cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c862f  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc862fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_c8632:
    X86_TICK(c, 9);
    // 0c8632  push edi
    X86_AT(c, 0xc8632u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8633  call 0xc7dc8
    X86_AT(c, 0xc8633u);
    push32(c, 0xc8638u); x86_call_known(c, 0xc7dc8u, f_000c7dc8); X86_RET(c, 0xc8638u);
    X86_TICK(c, 12);
    // 0c8638  xchg ebx, eax
    X86_AT(c, 0xc8638u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c8639  add esp, 4
    X86_AT(c, 0xc8639u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c863c  cmp bl, 1
    X86_AT(c, 0xc863cu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c863f  jne 0xc8655
    X86_AT(c, 0xc863fu);
    if (x86_cc(c, 5)) { goto L_c8655; }
    X86_TICK(c, 7);
    // 0c8641  call 0x8b
    X86_AT(c, 0xc8641u);
    push32(c, 0xc8646u); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xc8646u);
    X86_TICK(c, 11);
    // 0c8646  push 0x20
    X86_AT(c, 0xc8646u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c8648  push edi
    X86_AT(c, 0xc8648u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8649  call 0xca58c
    X86_AT(c, 0xc8649u);
    push32(c, 0xc864eu); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xc864eu);
    X86_TICK(c, 9);
    // 0c864e  sub eax, eax
    X86_AT(c, 0xc864eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c8650  jmp 0xc86e5
    X86_AT(c, 0xc8650u);
    goto L_c86e5;
L_c8655:
    X86_TICK(c, 7);
    // 0c8655  cmp bl, 4
    X86_AT(c, 0xc8655u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c8658  jne 0xc868d
    X86_AT(c, 0xc8658u);
    if (x86_cc(c, 5)) { goto L_c868d; }
    X86_TICK(c, 7);
    // 0c865a  call 0x8b
    X86_AT(c, 0xc865au);
    push32(c, 0xc865fu); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xc865fu);
    X86_TICK(c, 11);
    // 0c865f  push 0x20
    X86_AT(c, 0xc865fu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c8661  push edi
    X86_AT(c, 0xc8661u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8662  call 0xca58c
    X86_AT(c, 0xc8662u);
    push32(c, 0xc8667u); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xc8667u);
    X86_TICK(c, 4);
    // 0c8667  sub esi, esi
    X86_AT(c, 0xc8667u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c8669  add esp, 8
    X86_AT(c, 0xc8669u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c866c:
    X86_TICK(c, 11);
    // 0c866c  cmp esi, dword ptr [ebp - 4]
    X86_AT(c, 0xc866cu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0c866f  jge 0xc867e
    X86_AT(c, 0xc866fu);
    if (x86_cc(c, 13)) { goto L_c867e; }
    X86_TICK(c, 19);
    // 0c8671  mov al, byte ptr [ebp + esi*1 - 0x60]
    X86_AT(c, 0xc8671u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFA0u))));
    // 0c8675  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8675u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8678  mov byte ptr [edx + esi*1], al
    X86_AT(c, 0xc8678u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6])), g8(c, 0));
    // 0c867b  inc esi
    X86_AT(c, 0xc867bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c867c  jmp 0xc866c
    X86_AT(c, 0xc867cu);
    X86_POLL(c, 0xc866cu); goto L_c866c;
L_c867e:
    X86_TICK(c, 17);
    // 0c867e  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc867eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8681  mov byte ptr [eax + esi*1], 0
    X86_AT(c, 0xc8681u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6])), 0x0u);
    // 0c8685  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc8685u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c8688  jmp 0xc8749
    X86_AT(c, 0xc8688u);
    goto L_c8749;
L_c868d:
    X86_TICK(c, 7);
    // 0c868d  cmp bl, 3
    X86_AT(c, 0xc868du);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0c8690  jne 0xc86ce
    X86_AT(c, 0xc8690u);
    if (x86_cc(c, 5)) { goto L_c86ce; }
    X86_TICK(c, 7);
    // 0c8692  call 0x8b
    X86_AT(c, 0xc8692u);
    push32(c, 0xc8697u); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xc8697u);
    X86_TICK(c, 12);
    // 0c8697  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xc8697u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0c869b  jle 0xc8632
    X86_AT(c, 0xc869bu);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xc8632u); goto L_c8632; }
    X86_TICK(c, 11);
    // 0c869d  push 0x20
    X86_AT(c, 0xc869du);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c869f  push edi
    X86_AT(c, 0xc869fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c86a0  call 0xca58c
    X86_AT(c, 0xc86a0u);
    push32(c, 0xc86a5u); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xc86a5u);
    X86_TICK(c, 17);
    // 0c86a5  lea eax, [ebp - 0xc]
    X86_AT(c, 0xc86a5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0c86a8  push eax
    X86_AT(c, 0xc86a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c86a9  lea ecx, [ebp - 8]
    X86_AT(c, 0xc86a9u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c86ac  push ecx
    X86_AT(c, 0xc86acu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c86ad  push edi
    X86_AT(c, 0xc86adu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c86ae  call 0xcac7c
    X86_AT(c, 0xc86aeu);
    push32(c, 0xc86b3u); x86_call_known(c, 0xcac7cu, f_000cac7c); X86_RET(c, 0xc86b3u);
    X86_TICK(c, 22);
    // 0c86b3  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xc86b3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0c86b6  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc86b6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c86b9  sub eax, 2
    X86_AT(c, 0xc86b9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0c86bc  push eax
    X86_AT(c, 0xc86bcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c86bd  push edi
    X86_AT(c, 0xc86bdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c86be  call 0xca9c8
    X86_AT(c, 0xc86beu);
    push32(c, 0xc86c3u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xc86c3u);
    X86_TICK(c, 15);
    // 0c86c3  dec dword ptr [ebp - 4]
    X86_AT(c, 0xc86c3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c86c6  add esp, 0x20
    X86_AT(c, 0xc86c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c86c9  jmp 0xc8632
    X86_AT(c, 0xc86c9u);
    X86_POLL(c, 0xc8632u); goto L_c8632;
L_c86ce:
    X86_TICK(c, 7);
    // 0c86ce  cmp bl, 0x3f
    X86_AT(c, 0xc86ceu);
    (void)x86_sub(c, g8(c, 3), 0x3Fu, 0, 1);
    // 0c86d1  jne 0xc86ea
    X86_AT(c, 0xc86d1u);
    if (x86_cc(c, 5)) { goto L_c86ea; }
    X86_TICK(c, 7);
    // 0c86d3  call 0x8b
    X86_AT(c, 0xc86d3u);
    push32(c, 0xc86d8u); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xc86d8u);
    X86_TICK(c, 11);
    // 0c86d8  push 0x20
    X86_AT(c, 0xc86d8u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c86da  push edi
    X86_AT(c, 0xc86dau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c86db  call 0xca58c
    X86_AT(c, 0xc86dbu);
    push32(c, 0xc86e0u); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xc86e0u);
    X86_TICK(c, 2);
    // 0c86e0  mov eax, 0xffffffff
    X86_AT(c, 0xc86e0u);
    c.r[0] = 0xFFFFFFFFu;
L_c86e5:
    X86_TICK(c, 9);
    // 0c86e5  add esp, 8
    X86_AT(c, 0xc86e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c86e8  jmp 0xc8749
    X86_AT(c, 0xc86e8u);
    goto L_c8749;
L_c86ea:
    X86_TICK(c, 7);
    // 0c86ea  cmp bl, 5
    X86_AT(c, 0xc86eau);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c86ed  je 0xc86f9
    X86_AT(c, 0xc86edu);
    if (x86_cc(c, 4)) { goto L_c86f9; }
    X86_TICK(c, 7);
    // 0c86ef  cmp bl, 6
    X86_AT(c, 0xc86efu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c86f2  je 0xc86f9
    X86_AT(c, 0xc86f2u);
    if (x86_cc(c, 4)) { goto L_c86f9; }
    X86_TICK(c, 7);
    // 0c86f4  cmp bl, 7
    X86_AT(c, 0xc86f4u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0c86f7  jne 0xc8708
    X86_AT(c, 0xc86f7u);
    if (x86_cc(c, 5)) { goto L_c8708; }
L_c86f9:
    X86_TICK(c, 9);
    // 0c86f9  push 1
    X86_AT(c, 0xc86f9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c86fb  call 0xc5ca4
    X86_AT(c, 0xc86fbu);
    push32(c, 0xc8700u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xc8700u);
    X86_TICK(c, 9);
    // 0c8700  add esp, 4
    X86_AT(c, 0xc8700u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c8703  jmp 0xc8632
    X86_AT(c, 0xc8703u);
    X86_POLL(c, 0xc8632u); goto L_c8632;
L_c8708:
    X86_TICK(c, 7);
    // 0c8708  and bl, bl
    X86_AT(c, 0xc8708u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0c870a  je 0xc8632
    X86_AT(c, 0xc870au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc8632u); goto L_c8632; }
    X86_TICK(c, 15);
    // 0c8710  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc8710u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c8713  cmp eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc8713u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 0c8716  jge 0xc8632
    X86_AT(c, 0xc8716u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xc8632u); goto L_c8632; }
    X86_TICK(c, 25);
    // 0c871c  mov byte ptr [ebp + eax*1 - 0x60], bl
    X86_AT(c, 0xc871cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFA0u)), g8(c, 3));
    // 0c8720  inc dword ptr [ebp - 4]
    X86_AT(c, 0xc8720u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c8723  lea eax, [ebp - 0xc]
    X86_AT(c, 0xc8723u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0c8726  push eax
    X86_AT(c, 0xc8726u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8727  lea ecx, [ebp - 8]
    X86_AT(c, 0xc8727u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c872a  push ecx
    X86_AT(c, 0xc872au);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c872b  push edi
    X86_AT(c, 0xc872bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c872c  call 0xcac7c
    X86_AT(c, 0xc872cu);
    push32(c, 0xc8731u); x86_call_known(c, 0xcac7cu, f_000cac7c); X86_RET(c, 0xc8731u);
    X86_TICK(c, 22);
    // 0c8731  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xc8731u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0c8734  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc8734u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c8737  add eax, 2
    X86_AT(c, 0xc8737u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0c873a  push eax
    X86_AT(c, 0xc873au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c873b  push edi
    X86_AT(c, 0xc873bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c873c  call 0xca9c8
    X86_AT(c, 0xc873cu);
    push32(c, 0xc8741u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xc8741u);
    X86_TICK(c, 9);
    // 0c8741  add esp, 0x18
    X86_AT(c, 0xc8741u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c8744  jmp 0xc8632
    X86_AT(c, 0xc8744u);
    X86_POLL(c, 0xc8632u); goto L_c8632;
L_c8749:
    X86_TICK(c, 28);
    // 0c8749  pop edi
    X86_AT(c, 0xc8749u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c874a  pop esi
    X86_AT(c, 0xc874au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c874b  pop ebx
    X86_AT(c, 0xc874bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c874c  leave 
    X86_AT(c, 0xc874cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c874d  ret 
    X86_AT(c, 0xc874du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc85e4u, "ran off the end of a function");
}
void f_000c8632(X86Cpu& c) {
L_c8632:
    X86_TICK(c, 9);
    // 0c8632  push edi
    X86_AT(c, 0xc8632u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8633  call 0xc7dc8
    X86_AT(c, 0xc8633u);
    push32(c, 0xc8638u); x86_call_known(c, 0xc7dc8u, f_000c7dc8); X86_RET(c, 0xc8638u);
    X86_TICK(c, 12);
    // 0c8638  xchg ebx, eax
    X86_AT(c, 0xc8638u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c8639  add esp, 4
    X86_AT(c, 0xc8639u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c863c  cmp bl, 1
    X86_AT(c, 0xc863cu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c863f  jne 0xc8655
    X86_AT(c, 0xc863fu);
    if (x86_cc(c, 5)) { goto L_c8655; }
    X86_TICK(c, 7);
    // 0c8641  call 0x8b
    X86_AT(c, 0xc8641u);
    push32(c, 0xc8646u); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xc8646u);
    X86_TICK(c, 11);
    // 0c8646  push 0x20
    X86_AT(c, 0xc8646u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c8648  push edi
    X86_AT(c, 0xc8648u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8649  call 0xca58c
    X86_AT(c, 0xc8649u);
    push32(c, 0xc864eu); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xc864eu);
    X86_TICK(c, 9);
    // 0c864e  sub eax, eax
    X86_AT(c, 0xc864eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c8650  jmp 0xc86e5
    X86_AT(c, 0xc8650u);
    goto L_c86e5;
L_c8655:
    X86_TICK(c, 7);
    // 0c8655  cmp bl, 4
    X86_AT(c, 0xc8655u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c8658  jne 0xc868d
    X86_AT(c, 0xc8658u);
    if (x86_cc(c, 5)) { goto L_c868d; }
    X86_TICK(c, 7);
    // 0c865a  call 0x8b
    X86_AT(c, 0xc865au);
    push32(c, 0xc865fu); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xc865fu);
    X86_TICK(c, 11);
    // 0c865f  push 0x20
    X86_AT(c, 0xc865fu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c8661  push edi
    X86_AT(c, 0xc8661u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8662  call 0xca58c
    X86_AT(c, 0xc8662u);
    push32(c, 0xc8667u); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xc8667u);
    X86_TICK(c, 4);
    // 0c8667  sub esi, esi
    X86_AT(c, 0xc8667u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c8669  add esp, 8
    X86_AT(c, 0xc8669u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c866c:
    X86_TICK(c, 11);
    // 0c866c  cmp esi, dword ptr [ebp - 4]
    X86_AT(c, 0xc866cu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0c866f  jge 0xc867e
    X86_AT(c, 0xc866fu);
    if (x86_cc(c, 13)) { goto L_c867e; }
    X86_TICK(c, 19);
    // 0c8671  mov al, byte ptr [ebp + esi*1 - 0x60]
    X86_AT(c, 0xc8671u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] + 0xFFFFFFA0u))));
    // 0c8675  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8675u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8678  mov byte ptr [edx + esi*1], al
    X86_AT(c, 0xc8678u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6])), g8(c, 0));
    // 0c867b  inc esi
    X86_AT(c, 0xc867bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c867c  jmp 0xc866c
    X86_AT(c, 0xc867cu);
    X86_POLL(c, 0xc866cu); goto L_c866c;
L_c867e:
    X86_TICK(c, 17);
    // 0c867e  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc867eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8681  mov byte ptr [eax + esi*1], 0
    X86_AT(c, 0xc8681u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6])), 0x0u);
    // 0c8685  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc8685u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c8688  jmp 0xc8749
    X86_AT(c, 0xc8688u);
    goto L_c8749;
L_c868d:
    X86_TICK(c, 7);
    // 0c868d  cmp bl, 3
    X86_AT(c, 0xc868du);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0c8690  jne 0xc86ce
    X86_AT(c, 0xc8690u);
    if (x86_cc(c, 5)) { goto L_c86ce; }
    X86_TICK(c, 7);
    // 0c8692  call 0x8b
    X86_AT(c, 0xc8692u);
    push32(c, 0xc8697u); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xc8697u);
    X86_TICK(c, 12);
    // 0c8697  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xc8697u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0c869b  jle 0xc8632
    X86_AT(c, 0xc869bu);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xc8632u); goto L_c8632; }
    X86_TICK(c, 11);
    // 0c869d  push 0x20
    X86_AT(c, 0xc869du);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c869f  push edi
    X86_AT(c, 0xc869fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c86a0  call 0xca58c
    X86_AT(c, 0xc86a0u);
    push32(c, 0xc86a5u); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xc86a5u);
    X86_TICK(c, 17);
    // 0c86a5  lea eax, [ebp - 0xc]
    X86_AT(c, 0xc86a5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0c86a8  push eax
    X86_AT(c, 0xc86a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c86a9  lea ecx, [ebp - 8]
    X86_AT(c, 0xc86a9u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c86ac  push ecx
    X86_AT(c, 0xc86acu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c86ad  push edi
    X86_AT(c, 0xc86adu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c86ae  call 0xcac7c
    X86_AT(c, 0xc86aeu);
    push32(c, 0xc86b3u); x86_call_known(c, 0xcac7cu, f_000cac7c); X86_RET(c, 0xc86b3u);
    X86_TICK(c, 22);
    // 0c86b3  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xc86b3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0c86b6  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc86b6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c86b9  sub eax, 2
    X86_AT(c, 0xc86b9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x2u, 0, 4); }
    // 0c86bc  push eax
    X86_AT(c, 0xc86bcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c86bd  push edi
    X86_AT(c, 0xc86bdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c86be  call 0xca9c8
    X86_AT(c, 0xc86beu);
    push32(c, 0xc86c3u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xc86c3u);
    X86_TICK(c, 15);
    // 0c86c3  dec dword ptr [ebp - 4]
    X86_AT(c, 0xc86c3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0c86c6  add esp, 0x20
    X86_AT(c, 0xc86c6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0c86c9  jmp 0xc8632
    X86_AT(c, 0xc86c9u);
    X86_POLL(c, 0xc8632u); goto L_c8632;
L_c86ce:
    X86_TICK(c, 7);
    // 0c86ce  cmp bl, 0x3f
    X86_AT(c, 0xc86ceu);
    (void)x86_sub(c, g8(c, 3), 0x3Fu, 0, 1);
    // 0c86d1  jne 0xc86ea
    X86_AT(c, 0xc86d1u);
    if (x86_cc(c, 5)) { goto L_c86ea; }
    X86_TICK(c, 7);
    // 0c86d3  call 0x8b
    X86_AT(c, 0xc86d3u);
    push32(c, 0xc86d8u); x86_call_known(c, 0x8bu, f_0000008b); X86_RET(c, 0xc86d8u);
    X86_TICK(c, 11);
    // 0c86d8  push 0x20
    X86_AT(c, 0xc86d8u);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0c86da  push edi
    X86_AT(c, 0xc86dau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c86db  call 0xca58c
    X86_AT(c, 0xc86dbu);
    push32(c, 0xc86e0u); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xc86e0u);
    X86_TICK(c, 2);
    // 0c86e0  mov eax, 0xffffffff
    X86_AT(c, 0xc86e0u);
    c.r[0] = 0xFFFFFFFFu;
L_c86e5:
    X86_TICK(c, 9);
    // 0c86e5  add esp, 8
    X86_AT(c, 0xc86e5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c86e8  jmp 0xc8749
    X86_AT(c, 0xc86e8u);
    goto L_c8749;
L_c86ea:
    X86_TICK(c, 7);
    // 0c86ea  cmp bl, 5
    X86_AT(c, 0xc86eau);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c86ed  je 0xc86f9
    X86_AT(c, 0xc86edu);
    if (x86_cc(c, 4)) { goto L_c86f9; }
    X86_TICK(c, 7);
    // 0c86ef  cmp bl, 6
    X86_AT(c, 0xc86efu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c86f2  je 0xc86f9
    X86_AT(c, 0xc86f2u);
    if (x86_cc(c, 4)) { goto L_c86f9; }
    X86_TICK(c, 7);
    // 0c86f4  cmp bl, 7
    X86_AT(c, 0xc86f4u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0c86f7  jne 0xc8708
    X86_AT(c, 0xc86f7u);
    if (x86_cc(c, 5)) { goto L_c8708; }
L_c86f9:
    X86_TICK(c, 9);
    // 0c86f9  push 1
    X86_AT(c, 0xc86f9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c86fb  call 0xc5ca4
    X86_AT(c, 0xc86fbu);
    push32(c, 0xc8700u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xc8700u);
    X86_TICK(c, 9);
    // 0c8700  add esp, 4
    X86_AT(c, 0xc8700u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c8703  jmp 0xc8632
    X86_AT(c, 0xc8703u);
    X86_POLL(c, 0xc8632u); goto L_c8632;
L_c8708:
    X86_TICK(c, 7);
    // 0c8708  and bl, bl
    X86_AT(c, 0xc8708u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0c870a  je 0xc8632
    X86_AT(c, 0xc870au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc8632u); goto L_c8632; }
    X86_TICK(c, 15);
    // 0c8710  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xc8710u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c8713  cmp eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc8713u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4);
    // 0c8716  jge 0xc8632
    X86_AT(c, 0xc8716u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xc8632u); goto L_c8632; }
    X86_TICK(c, 25);
    // 0c871c  mov byte ptr [ebp + eax*1 - 0x60], bl
    X86_AT(c, 0xc871cu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFA0u)), g8(c, 3));
    // 0c8720  inc dword ptr [ebp - 4]
    X86_AT(c, 0xc8720u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0c8723  lea eax, [ebp - 0xc]
    X86_AT(c, 0xc8723u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0c8726  push eax
    X86_AT(c, 0xc8726u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8727  lea ecx, [ebp - 8]
    X86_AT(c, 0xc8727u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0c872a  push ecx
    X86_AT(c, 0xc872au);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0c872b  push edi
    X86_AT(c, 0xc872bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c872c  call 0xcac7c
    X86_AT(c, 0xc872cu);
    push32(c, 0xc8731u); x86_call_known(c, 0xcac7cu, f_000cac7c); X86_RET(c, 0xc8731u);
    X86_TICK(c, 22);
    // 0c8731  push dword ptr [ebp - 0xc]
    X86_AT(c, 0xc8731u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))); push32(c, v); }
    // 0c8734  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xc8734u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0c8737  add eax, 2
    X86_AT(c, 0xc8737u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0c873a  push eax
    X86_AT(c, 0xc873au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c873b  push edi
    X86_AT(c, 0xc873bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c873c  call 0xca9c8
    X86_AT(c, 0xc873cu);
    push32(c, 0xc8741u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xc8741u);
    X86_TICK(c, 9);
    // 0c8741  add esp, 0x18
    X86_AT(c, 0xc8741u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0c8744  jmp 0xc8632
    X86_AT(c, 0xc8744u);
    X86_POLL(c, 0xc8632u); goto L_c8632;
L_c8749:
    X86_TICK(c, 28);
    // 0c8749  pop edi
    X86_AT(c, 0xc8749u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c874a  pop esi
    X86_AT(c, 0xc874au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c874b  pop ebx
    X86_AT(c, 0xc874bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c874c  leave 
    X86_AT(c, 0xc874cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c874d  ret 
    X86_AT(c, 0xc874du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8632u, "ran off the end of a function");
}
void f_000c8750(X86Cpu& c) {
    X86_TICK(c, 70);
    // 0c8750  push ebp
    X86_AT(c, 0xc8750u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8751  mov ebp, esp
    X86_AT(c, 0xc8751u);
    c.r[5] = c.r[4];
    // 0c8753  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xc8753u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8756  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8756u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8759  mov dword ptr [ecx], eax
    X86_AT(c, 0xc8759u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 0c875b  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc875bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c875e  mov dword ptr [ecx + 4], eax
    X86_AT(c, 0xc875eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x4u)), c.r[0]);
    // 0c8761  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc8761u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0c8764  mov dword ptr [ecx + 8], eax
    X86_AT(c, 0xc8764u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u)), c.r[0]);
    // 0c8767  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xc8767u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0c876a  mov dword ptr [ecx + 0xc], eax
    X86_AT(c, 0xc876au);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0xCu)), c.r[0]);
    // 0c876d  mov eax, dword ptr [ebp + 0x20]
    X86_AT(c, 0xc876du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 0c8770  mov dword ptr [ecx + 0x10], eax
    X86_AT(c, 0xc8770u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)), c.r[0]);
    // 0c8773  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0xc8773u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0c8776  mov dword ptr [ecx + 0x14], eax
    X86_AT(c, 0xc8776u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)), c.r[0]);
    // 0c8779  mov eax, dword ptr [ebp + 0x24]
    X86_AT(c, 0xc8779u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 0c877c  mov dword ptr [ecx + 0x1c], eax
    X86_AT(c, 0xc877cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x1Cu)), c.r[0]);
    // 0c877f  mov dword ptr [ecx + 0x18], 0
    X86_AT(c, 0xc877fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[1] + 0x18u)), 0x0u);
    // 0c8786  mov eax, ecx
    X86_AT(c, 0xc8786u);
    c.r[0] = c.r[1];
    // 0c8788  leave 
    X86_AT(c, 0xc8788u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8789  ret 
    X86_AT(c, 0xc8789u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8750u, "ran off the end of a function");
}
void f_000c878c(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0c878c  push ebp
    X86_AT(c, 0xc878cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c878d  mov ebp, esp
    X86_AT(c, 0xc878du);
    c.r[5] = c.r[4];
    // 0c878f  push ebx
    X86_AT(c, 0xc878fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c8790  push esi
    X86_AT(c, 0xc8790u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8791  push edi
    X86_AT(c, 0xc8791u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8792  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc8792u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8795  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8795u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8798  lea eax, [esi*4]
    X86_AT(c, 0xc8798u);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0c879f  lea edx, [eax*8]
    X86_AT(c, 0xc879fu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c87a6  lea edx, [eax + edx*4]
    X86_AT(c, 0xc87a6u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0c87a9  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xc87a9u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0c87ac  mov byte ptr [edi + edx*1], al
    X86_AT(c, 0xc87acu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2])), g8(c, 0));
    // 0c87af  sub ebx, ebx
    X86_AT(c, 0xc87afu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_c87b1:
    X86_TICK(c, 7);
    // 0c87b1  cmp ebx, 0x40
    X86_AT(c, 0xc87b1u);
    (void)x86_sub(c, c.r[3], 0x40u, 0, 4);
    // 0c87b4  jge 0xc87da
    X86_AT(c, 0xc87b4u);
    if (x86_cc(c, 13)) { goto L_c87da; }
    X86_TICK(c, 15);
    // 0c87b6  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc87b6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0c87b9  mov al, byte ptr [eax + ebx*1]
    X86_AT(c, 0xc87b9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3]))));
    // 0c87bc  and al, al
    X86_AT(c, 0xc87bcu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c87be  je 0xc87da
    X86_AT(c, 0xc87beu);
    if (x86_cc(c, 4)) { goto L_c87da; }
    X86_TICK(c, 19);
    // 0c87c0  lea edx, [esi*4]
    X86_AT(c, 0xc87c0u);
    c.r[2] = (uint32_t)(c.r[6] * 4);
    // 0c87c7  lea ecx, [edx*8]
    X86_AT(c, 0xc87c7u);
    c.r[1] = (uint32_t)(c.r[2] * 8);
    // 0c87ce  lea ecx, [edx + ecx*4]
    X86_AT(c, 0xc87ceu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 4);
    // 0c87d1  add ecx, ebx
    X86_AT(c, 0xc87d1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[3], 0, 4); }
    // 0c87d3  mov byte ptr [edi + ecx*1 + 0x42], al
    X86_AT(c, 0xc87d3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] + 0x42u)), g8(c, 0));
    // 0c87d7  inc ebx
    X86_AT(c, 0xc87d7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0c87d8  jmp 0xc87b1
    X86_AT(c, 0xc87d8u);
    X86_POLL(c, 0xc87b1u); goto L_c87b1;
L_c87da:
    X86_TICK(c, 14);
    // 0c87da  lea eax, [esi*4]
    X86_AT(c, 0xc87dau);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0c87e1  lea edx, [eax*8]
    X86_AT(c, 0xc87e1u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c87e8  lea edx, [eax + edx*4]
    X86_AT(c, 0xc87e8u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0c87eb  lea eax, [ebx + edx*1]
    X86_AT(c, 0xc87ebu);
    c.r[0] = (uint32_t)(c.r[3] + c.r[2]);
    // 0c87ee  sub edx, edx
    X86_AT(c, 0xc87eeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0c87f0  mov byte ptr [edi + eax*1 + 0x42], dl
    X86_AT(c, 0xc87f0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0] + 0x42u)), g8(c, 2));
    // 0c87f4  mov ebx, edx
    X86_AT(c, 0xc87f4u);
    c.r[3] = c.r[2];
L_c87f6:
    X86_TICK(c, 7);
    // 0c87f6  cmp ebx, 0x40
    X86_AT(c, 0xc87f6u);
    (void)x86_sub(c, c.r[3], 0x40u, 0, 4);
    // 0c87f9  jge 0xc881f
    X86_AT(c, 0xc87f9u);
    if (x86_cc(c, 13)) { goto L_c881f; }
    X86_TICK(c, 15);
    // 0c87fb  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0xc87fbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0c87fe  mov al, byte ptr [eax + ebx*1]
    X86_AT(c, 0xc87feu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[3]))));
    // 0c8801  and al, al
    X86_AT(c, 0xc8801u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0c8803  je 0xc881f
    X86_AT(c, 0xc8803u);
    if (x86_cc(c, 4)) { goto L_c881f; }
    X86_TICK(c, 19);
    // 0c8805  lea edx, [esi*4]
    X86_AT(c, 0xc8805u);
    c.r[2] = (uint32_t)(c.r[6] * 4);
    // 0c880c  lea ecx, [edx*8]
    X86_AT(c, 0xc880cu);
    c.r[1] = (uint32_t)(c.r[2] * 8);
    // 0c8813  lea ecx, [edx + ecx*4]
    X86_AT(c, 0xc8813u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 4);
    // 0c8816  add ecx, ebx
    X86_AT(c, 0xc8816u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[3], 0, 4); }
    // 0c8818  mov byte ptr [edi + ecx*1 + 1], al
    X86_AT(c, 0xc8818u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[1] + 0x1u)), g8(c, 0));
    // 0c881c  inc ebx
    X86_AT(c, 0xc881cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0c881d  jmp 0xc87f6
    X86_AT(c, 0xc881du);
    X86_POLL(c, 0xc87f6u); goto L_c87f6;
L_c881f:
    X86_TICK(c, 46);
    // 0c881f  lea eax, [esi*4]
    X86_AT(c, 0xc881fu);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0c8826  lea edx, [eax*8]
    X86_AT(c, 0xc8826u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c882d  lea edx, [eax + edx*4]
    X86_AT(c, 0xc882du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0c8830  lea eax, [ebx + edx*1]
    X86_AT(c, 0xc8830u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[2]);
    // 0c8833  mov byte ptr [edi + eax*1 + 1], 0
    X86_AT(c, 0xc8833u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[0] + 0x1u)), 0x0u);
    // 0c8838  mov al, byte ptr [ebp + 0x1c]
    X86_AT(c, 0xc8838u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))));
    // 0c883b  mov byte ptr [edi + edx*1 + 0x83], al
    X86_AT(c, 0xc883bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x83u)), g8(c, 0));
    // 0c8842  mov eax, edi
    X86_AT(c, 0xc8842u);
    c.r[0] = c.r[7];
    // 0c8844  pop edi
    X86_AT(c, 0xc8844u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c8845  pop esi
    X86_AT(c, 0xc8845u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c8846  pop ebx
    X86_AT(c, 0xc8846u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c8847  leave 
    X86_AT(c, 0xc8847u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8848  ret 
    X86_AT(c, 0xc8848u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc878cu, "ran off the end of a function");
}
void f_000c884c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0c884c  push ebp
    X86_AT(c, 0xc884cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c884d  mov ebp, esp
    X86_AT(c, 0xc884du);
    c.r[5] = c.r[4];
    // 0c884f  push esi
    X86_AT(c, 0xc884fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8850  push edi
    X86_AT(c, 0xc8850u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8851  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc8851u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8854  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8854u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8857  mov eax, dword ptr [edi + 4]
    X86_AT(c, 0xc8857u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0c885a  cmp esi, eax
    X86_AT(c, 0xc885au);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0c885c  jle 0xc885f
    X86_AT(c, 0xc885cu);
    if (x86_cc(c, 14)) { goto L_c885f; }
    X86_TICK(c, 3);
    // 0c885e  xchg esi, eax
    X86_AT(c, 0xc885eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_c885f:
    X86_TICK(c, 65);
    // 0c885f  mov eax, esi
    X86_AT(c, 0xc885fu);
    c.r[0] = c.r[6];
    // 0c8861  imul eax, dword ptr [edi + 0x14]
    X86_AT(c, 0xc8861u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u))), 4);
    // 0c8865  add eax, dword ptr [edi + 0x10]
    X86_AT(c, 0xc8865u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u))), 0, 4); }
    // 0c8868  push eax
    X86_AT(c, 0xc8868u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8869  mov edx, dword ptr [edi + 0xc]
    X86_AT(c, 0xc8869u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 0c886c  add edx, dword ptr [edi + 8]
    X86_AT(c, 0xc886cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0, 4); }
    // 0c886f  dec edx
    X86_AT(c, 0xc886fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c8870  push edx
    X86_AT(c, 0xc8870u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c8871  push eax
    X86_AT(c, 0xc8871u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8872  push dword ptr [edi + 0xc]
    X86_AT(c, 0xc8872u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))); push32(c, v); }
    // 0c8875  push dword ptr [edi]
    X86_AT(c, 0xc8875u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0c8877  call 0xcaa14
    X86_AT(c, 0xc8877u);
    push32(c, 0xc887cu); x86_call_known(c, 0xcaa14u, f_000caa14); X86_RET(c, 0xc887cu);
    X86_TICK(c, 13);
    // 0c887c  add esp, 0x14
    X86_AT(c, 0xc887cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c887f  mov eax, dword ptr [edi + 0x18]
    X86_AT(c, 0xc887fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)));
    // 0c8882  cmp esi, eax
    X86_AT(c, 0xc8882u);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0c8884  je 0xc88a7
    X86_AT(c, 0xc8884u);
    if (x86_cc(c, 4)) { goto L_c88a7; }
    X86_TICK(c, 63);
    // 0c8886  imul eax, dword ptr [edi + 0x14]
    X86_AT(c, 0xc8886u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u))), 4);
    // 0c888a  add eax, dword ptr [edi + 0x10]
    X86_AT(c, 0xc888au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u))), 0, 4); }
    // 0c888d  push eax
    X86_AT(c, 0xc888du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c888e  mov edx, dword ptr [edi + 0xc]
    X86_AT(c, 0xc888eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 0c8891  add edx, dword ptr [edi + 8]
    X86_AT(c, 0xc8891u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0, 4); }
    // 0c8894  dec edx
    X86_AT(c, 0xc8894u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0c8895  push edx
    X86_AT(c, 0xc8895u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0c8896  push eax
    X86_AT(c, 0xc8896u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8897  push dword ptr [edi + 0xc]
    X86_AT(c, 0xc8897u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))); push32(c, v); }
    // 0c889a  push dword ptr [edi]
    X86_AT(c, 0xc889au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0c889c  call 0xcaa14
    X86_AT(c, 0xc889cu);
    push32(c, 0xc88a1u); x86_call_known(c, 0xcaa14u, f_000caa14); X86_RET(c, 0xc88a1u);
    X86_TICK(c, 4);
    // 0c88a1  mov dword ptr [edi + 0x18], esi
    X86_AT(c, 0xc88a1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), c.r[6]);
    // 0c88a4  add esp, 0x14
    X86_AT(c, 0xc88a4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_c88a7:
    X86_TICK(c, 24);
    // 0c88a7  pop edi
    X86_AT(c, 0xc88a7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c88a8  pop esi
    X86_AT(c, 0xc88a8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c88a9  leave 
    X86_AT(c, 0xc88a9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c88aa  ret 
    X86_AT(c, 0xc88aau);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc884cu, "ran off the end of a function");
}
void f_000c88ac(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0c88ac  push ebp
    X86_AT(c, 0xc88acu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c88ad  mov ebp, esp
    X86_AT(c, 0xc88adu);
    c.r[5] = c.r[4];
    // 0c88af  push esi
    X86_AT(c, 0xc88afu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c88b0  push edi
    X86_AT(c, 0xc88b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c88b1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc88b1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c88b4  push dword ptr [edi]
    X86_AT(c, 0xc88b4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0c88b6  call 0xca0a0
    X86_AT(c, 0xc88b6u);
    push32(c, 0xc88bbu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xc88bbu);
    X86_TICK(c, 4);
    // 0c88bb  sub esi, esi
    X86_AT(c, 0xc88bbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c88bd  add esp, 4
    X86_AT(c, 0xc88bdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c88c0:
    X86_TICK(c, 11);
    // 0c88c0  cmp esi, dword ptr [edi + 4]
    X86_AT(c, 0xc88c0u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 0c88c3  jge 0xc8925
    X86_AT(c, 0xc88c3u);
    if (x86_cc(c, 13)) { goto L_c8925; }
    X86_TICK(c, 49);
    // 0c88c5  mov eax, esi
    X86_AT(c, 0xc88c5u);
    c.r[0] = c.r[6];
    // 0c88c7  imul eax, dword ptr [edi + 0x14]
    X86_AT(c, 0xc88c7u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u))), 4);
    // 0c88cb  add eax, dword ptr [edi + 0x10]
    X86_AT(c, 0xc88cbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u))), 0, 4); }
    // 0c88ce  push eax
    X86_AT(c, 0xc88ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c88cf  push dword ptr [edi + 0xc]
    X86_AT(c, 0xc88cfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))); push32(c, v); }
    // 0c88d2  push dword ptr [edi]
    X86_AT(c, 0xc88d2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0c88d4  call 0xca9c8
    X86_AT(c, 0xc88d4u);
    push32(c, 0xc88d9u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xc88d9u);
    X86_TICK(c, 14);
    // 0c88d9  add esp, 0xc
    X86_AT(c, 0xc88d9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c88dc  cmp dword ptr [0x43eb8], 0
    X86_AT(c, 0xc88dcu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x43EB8u))), 0x0u, 0, 4);
    // 0c88e3  jne 0xc88ff
    X86_AT(c, 0xc88e3u);
    if (x86_cc(c, 5)) { goto L_c88ff; }
    X86_TICK(c, 19);
    // 0c88e5  lea eax, [esi*4]
    X86_AT(c, 0xc88e5u);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0c88ec  lea edx, [eax*8]
    X86_AT(c, 0xc88ecu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c88f3  lea edx, [eax + edx*4]
    X86_AT(c, 0xc88f3u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0c88f6  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xc88f6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0c88f9  lea eax, [eax + edx*1 + 1]
    X86_AT(c, 0xc88f9u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x1u);
    // 0c88fd  jmp 0xc8917
    X86_AT(c, 0xc88fdu);
    goto L_c8917;
L_c88ff:
    X86_TICK(c, 12);
    // 0c88ff  lea eax, [esi*4]
    X86_AT(c, 0xc88ffu);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0c8906  lea edx, [eax*8]
    X86_AT(c, 0xc8906u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c890d  lea edx, [eax + edx*4]
    X86_AT(c, 0xc890du);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0c8910  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xc8910u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0c8913  lea eax, [eax + edx*1 + 0x42]
    X86_AT(c, 0xc8913u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x42u);
L_c8917:
    X86_TICK(c, 14);
    // 0c8917  push eax
    X86_AT(c, 0xc8917u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8918  push dword ptr [edi]
    X86_AT(c, 0xc8918u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0c891a  call 0xca414
    X86_AT(c, 0xc891au);
    push32(c, 0xc891fu); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xc891fu);
    X86_TICK(c, 11);
    // 0c891f  add esp, 8
    X86_AT(c, 0xc891fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c8922  inc esi
    X86_AT(c, 0xc8922u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c8923  jmp 0xc88c0
    X86_AT(c, 0xc8923u);
    X86_POLL(c, 0xc88c0u); goto L_c88c0;
L_c8925:
    X86_TICK(c, 26);
    // 0c8925  mov dword ptr [edi + 0x18], 0
    X86_AT(c, 0xc8925u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0x0u);
    // 0c892c  pop edi
    X86_AT(c, 0xc892cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c892d  pop esi
    X86_AT(c, 0xc892du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c892e  leave 
    X86_AT(c, 0xc892eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c892f  ret 
    X86_AT(c, 0xc892fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc88acu, "ran off the end of a function");
}
void f_000c8930(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0c8930  push ebp
    X86_AT(c, 0xc8930u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8931  mov ebp, esp
    X86_AT(c, 0xc8931u);
    c.r[5] = c.r[4];
    // 0c8933  push esi
    X86_AT(c, 0xc8933u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8934  push edi
    X86_AT(c, 0xc8934u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8935  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc8935u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8938  push dword ptr [edi]
    X86_AT(c, 0xc8938u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0c893a  call 0xca0a0
    X86_AT(c, 0xc893au);
    push32(c, 0xc893fu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xc893fu);
    X86_TICK(c, 4);
    // 0c893f  sub esi, esi
    X86_AT(c, 0xc893fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0c8941  add esp, 4
    X86_AT(c, 0xc8941u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_c8944:
    X86_TICK(c, 11);
    // 0c8944  cmp esi, dword ptr [edi + 4]
    X86_AT(c, 0xc8944u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 0c8947  jge 0xc89a9
    X86_AT(c, 0xc8947u);
    if (x86_cc(c, 13)) { goto L_c89a9; }
    X86_TICK(c, 49);
    // 0c8949  mov eax, esi
    X86_AT(c, 0xc8949u);
    c.r[0] = c.r[6];
    // 0c894b  imul eax, dword ptr [edi + 0x14]
    X86_AT(c, 0xc894bu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u))), 4);
    // 0c894f  add eax, dword ptr [edi + 0x10]
    X86_AT(c, 0xc894fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u))), 0, 4); }
    // 0c8952  push eax
    X86_AT(c, 0xc8952u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8953  push dword ptr [edi + 0xc]
    X86_AT(c, 0xc8953u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))); push32(c, v); }
    // 0c8956  push dword ptr [edi]
    X86_AT(c, 0xc8956u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0c8958  call 0xca9c8
    X86_AT(c, 0xc8958u);
    push32(c, 0xc895du); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xc895du);
    X86_TICK(c, 14);
    // 0c895d  add esp, 0xc
    X86_AT(c, 0xc895du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c8960  cmp dword ptr [0x43eb8], 0
    X86_AT(c, 0xc8960u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x43EB8u))), 0x0u, 0, 4);
    // 0c8967  jne 0xc8983
    X86_AT(c, 0xc8967u);
    if (x86_cc(c, 5)) { goto L_c8983; }
    X86_TICK(c, 19);
    // 0c8969  lea eax, [esi*4]
    X86_AT(c, 0xc8969u);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0c8970  lea edx, [eax*8]
    X86_AT(c, 0xc8970u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c8977  lea edx, [eax + edx*4]
    X86_AT(c, 0xc8977u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0c897a  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xc897au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0c897d  lea eax, [eax + edx*1 + 1]
    X86_AT(c, 0xc897du);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x1u);
    // 0c8981  jmp 0xc899b
    X86_AT(c, 0xc8981u);
    goto L_c899b;
L_c8983:
    X86_TICK(c, 12);
    // 0c8983  lea eax, [esi*4]
    X86_AT(c, 0xc8983u);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0c898a  lea edx, [eax*8]
    X86_AT(c, 0xc898au);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c8991  lea edx, [eax + edx*4]
    X86_AT(c, 0xc8991u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0c8994  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xc8994u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0c8997  lea eax, [eax + edx*1 + 0x42]
    X86_AT(c, 0xc8997u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x42u);
L_c899b:
    X86_TICK(c, 14);
    // 0c899b  push eax
    X86_AT(c, 0xc899bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c899c  push dword ptr [edi]
    X86_AT(c, 0xc899cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7]))); push32(c, v); }
    // 0c899e  call 0xca850
    X86_AT(c, 0xc899eu);
    push32(c, 0xc89a3u); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xc89a3u);
    X86_TICK(c, 11);
    // 0c89a3  add esp, 8
    X86_AT(c, 0xc89a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c89a6  inc esi
    X86_AT(c, 0xc89a6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c89a7  jmp 0xc8944
    X86_AT(c, 0xc89a7u);
    X86_POLL(c, 0xc8944u); goto L_c8944;
L_c89a9:
    X86_TICK(c, 26);
    // 0c89a9  mov dword ptr [edi + 0x18], 0
    X86_AT(c, 0xc89a9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), 0x0u);
    // 0c89b0  pop edi
    X86_AT(c, 0xc89b0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c89b1  pop esi
    X86_AT(c, 0xc89b1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c89b2  leave 
    X86_AT(c, 0xc89b2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c89b3  ret 
    X86_AT(c, 0xc89b3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8930u, "ran off the end of a function");
}
void f_000c89b4(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0c89b4  push ebp
    X86_AT(c, 0xc89b4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c89b5  mov ebp, esp
    X86_AT(c, 0xc89b5u);
    c.r[5] = c.r[4];
    // 0c89b7  push ebx
    X86_AT(c, 0xc89b7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c89b8  push esi
    X86_AT(c, 0xc89b8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c89b9  push edi
    X86_AT(c, 0xc89b9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c89ba  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc89bau);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c89bd  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc89bdu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c89c0  sub ebx, ebx
    X86_AT(c, 0xc89c0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_c89c2:
    X86_TICK(c, 11);
    // 0c89c2  cmp ebx, dword ptr [edi + 4]
    X86_AT(c, 0xc89c2u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 0c89c5  jge 0xc89f3
    X86_AT(c, 0xc89c5u);
    if (x86_cc(c, 13)) { goto L_c89f3; }
    X86_TICK(c, 25);
    // 0c89c7  lea eax, [ebx*4]
    X86_AT(c, 0xc89c7u);
    c.r[0] = (uint32_t)(c.r[3] * 4);
    // 0c89ce  lea edx, [eax*8]
    X86_AT(c, 0xc89ceu);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c89d5  lea edx, [eax + edx*4]
    X86_AT(c, 0xc89d5u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0c89d8  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xc89d8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0c89db  mov cl, byte ptr [eax + edx*1]
    X86_AT(c, 0xc89dbu);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2]))));
    // 0c89de  cmp cl, byte ptr [ebp + 0xc]
    X86_AT(c, 0xc89deu);
    (void)x86_sub(c, g8(c, 1), rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 1);
    // 0c89e1  jne 0xc89f0
    X86_AT(c, 0xc89e1u);
    if (x86_cc(c, 5)) { goto L_c89f0; }
    X86_TICK(c, 15);
    // 0c89e3  mov al, byte ptr [eax + edx*1 + 0x83]
    X86_AT(c, 0xc89e3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x83u))));
    // 0c89ea  mov byte ptr [esi], al
    X86_AT(c, 0xc89eau);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
    // 0c89ec  mov eax, ebx
    X86_AT(c, 0xc89ecu);
    c.r[0] = c.r[3];
    // 0c89ee  jmp 0xc89fb
    X86_AT(c, 0xc89eeu);
    goto L_c89fb;
L_c89f0:
    X86_TICK(c, 9);
    // 0c89f0  inc ebx
    X86_AT(c, 0xc89f0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0c89f1  jmp 0xc89c2
    X86_AT(c, 0xc89f1u);
    X86_POLL(c, 0xc89c2u); goto L_c89c2;
L_c89f3:
    X86_TICK(c, 4);
    // 0c89f3  mov byte ptr [esi], 0xff
    X86_AT(c, 0xc89f3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), 0xFFu);
    // 0c89f6  mov eax, 0xffffffff
    X86_AT(c, 0xc89f6u);
    c.r[0] = 0xFFFFFFFFu;
L_c89fb:
    X86_TICK(c, 28);
    // 0c89fb  pop edi
    X86_AT(c, 0xc89fbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c89fc  pop esi
    X86_AT(c, 0xc89fcu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c89fd  pop ebx
    X86_AT(c, 0xc89fdu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c89fe  leave 
    X86_AT(c, 0xc89feu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c89ff  ret 
    X86_AT(c, 0xc89ffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc89b4u, "ran off the end of a function");
}
void f_000c8a00(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c8a00  cmp dword ptr [0x43eb8], 0
    X86_AT(c, 0xc8a00u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x43EB8u))), 0x0u, 0, 4);
    // 0c8a07  jne 0xc8a1f
    X86_AT(c, 0xc8a07u);
    if (x86_cc(c, 5)) { goto L_c8a1f; }
    X86_TICK(c, 11);
    // 0c8a09  mov dword ptr [0x43eb8], 0xffffffff
    X86_AT(c, 0xc8a09u);
    wr32((c.sbase[3] + (uint32_t)(0x43EB8u)), 0xFFFFFFFFu);
    // 0c8a13  mov dword ptr [0x4cb74], 0x4ca74
    X86_AT(c, 0xc8a13u);
    wr32((c.sbase[3] + (uint32_t)(0x4CB74u)), 0x4CA74u);
    // 0c8a1d  jmp 0xc8a33
    X86_AT(c, 0xc8a1du);
    goto L_c8a33;
L_c8a1f:
    X86_TICK(c, 4);
    // 0c8a1f  mov dword ptr [0x43eb8], 0
    X86_AT(c, 0xc8a1fu);
    wr32((c.sbase[3] + (uint32_t)(0x43EB8u)), 0x0u);
    // 0c8a29  mov dword ptr [0x4cb74], 0x4caf4
    X86_AT(c, 0xc8a29u);
    wr32((c.sbase[3] + (uint32_t)(0x4CB74u)), 0x4CAF4u);
L_c8a33:
    X86_TICK(c, 10);
    // 0c8a33  ret 
    X86_AT(c, 0xc8a33u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8a00u, "ran off the end of a function");
}
void f_000c8a34(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0c8a34  cmp dword ptr [0x43fd0], 0xffffffff
    X86_AT(c, 0xc8a34u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x43FD0u))), 0xFFFFFFFFu, 0, 4);
    // 0c8a3b  je 0xc8a50
    X86_AT(c, 0xc8a3bu);
    if (x86_cc(c, 4)) { goto L_c8a50; }
    X86_TICK(c, 9);
    // 0c8a3d  push 1
    X86_AT(c, 0xc8a3du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c8a3f  call 0x69
    X86_AT(c, 0xc8a3fu);
    push32(c, 0xc8a44u); x86_call_known(c, 0x69u, f_00000069); X86_RET(c, 0xc8a44u);
    X86_TICK(c, 9);
    // 0c8a44  mov dword ptr [0x43fd0], 0xffffffff
    X86_AT(c, 0xc8a44u);
    wr32((c.sbase[3] + (uint32_t)(0x43FD0u)), 0xFFFFFFFFu);
    // 0c8a4e  jmp 0xc8a61
    X86_AT(c, 0xc8a4eu);
    goto L_c8a61;
L_c8a50:
    X86_TICK(c, 9);
    // 0c8a50  push 0
    X86_AT(c, 0xc8a50u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c8a52  call 0x69
    X86_AT(c, 0xc8a52u);
    push32(c, 0xc8a57u); x86_call_known(c, 0x69u, f_00000069); X86_RET(c, 0xc8a57u);
    X86_TICK(c, 2);
    // 0c8a57  mov dword ptr [0x43fd0], 1
    X86_AT(c, 0xc8a57u);
    wr32((c.sbase[3] + (uint32_t)(0x43FD0u)), 0x1u);
L_c8a61:
    X86_TICK(c, 12);
    // 0c8a61  add esp, 4
    X86_AT(c, 0xc8a61u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c8a64  ret 
    X86_AT(c, 0xc8a64u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8a34u, "ran off the end of a function");
}
void f_000c8a68(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0c8a68  push ebp
    X86_AT(c, 0xc8a68u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8a69  mov ebp, esp
    X86_AT(c, 0xc8a69u);
    c.r[5] = c.r[4];
    // 0c8a6b  push esi
    X86_AT(c, 0xc8a6bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8a6c  push edi
    X86_AT(c, 0xc8a6cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8a6d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc8a6du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8a70  mov esi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xc8a70u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0c8a73  sub ecx, ecx
    X86_AT(c, 0xc8a73u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_c8a75:
    X86_TICK(c, 11);
    // 0c8a75  cmp ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8a75u);
    (void)x86_sub(c, c.r[1], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4);
    // 0c8a78  jge 0xc8ac5
    X86_AT(c, 0xc8a78u);
    if (x86_cc(c, 13)) { goto L_c8ac5; }
    X86_TICK(c, 21);
    // 0c8a7a  lea eax, [ecx*4]
    X86_AT(c, 0xc8a7au);
    c.r[0] = (uint32_t)(c.r[1] * 4);
    // 0c8a81  lea edx, [eax*8]
    X86_AT(c, 0xc8a81u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c8a88  lea edx, [eax + edx*4]
    X86_AT(c, 0xc8a88u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0c8a8b  mov al, byte ptr [edi + edx*1]
    X86_AT(c, 0xc8a8bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2]))));
    // 0c8a8e  cmp al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xc8a8eu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 1);
    // 0c8a91  jne 0xc8ac2
    X86_AT(c, 0xc8a91u);
    if (x86_cc(c, 5)) { goto L_c8ac2; }
    X86_TICK(c, 18);
    // 0c8a93  mov al, byte ptr [edi + edx*1 + 0x83]
    X86_AT(c, 0xc8a93u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] + 0x83u))));
    // 0c8a9a  mov byte ptr [esi], al
    X86_AT(c, 0xc8a9au);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
    // 0c8a9c  cmp dword ptr [0x43eb8], 0
    X86_AT(c, 0xc8a9cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x43EB8u))), 0x0u, 0, 4);
    // 0c8aa3  jne 0xc8aab
    X86_AT(c, 0xc8aa3u);
    if (x86_cc(c, 5)) { goto L_c8aab; }
    X86_TICK(c, 9);
    // 0c8aa5  lea eax, [edi + edx*1 + 1]
    X86_AT(c, 0xc8aa5u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[2] + 0x1u);
    // 0c8aa9  jmp 0xc8aca
    X86_AT(c, 0xc8aa9u);
    goto L_c8aca;
L_c8aab:
    X86_TICK(c, 15);
    // 0c8aab  lea eax, [ecx*4]
    X86_AT(c, 0xc8aabu);
    c.r[0] = (uint32_t)(c.r[1] * 4);
    // 0c8ab2  lea edx, [eax*8]
    X86_AT(c, 0xc8ab2u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c8ab9  lea edx, [eax + edx*4]
    X86_AT(c, 0xc8ab9u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0c8abc  lea eax, [edi + edx*1 + 0x42]
    X86_AT(c, 0xc8abcu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[2] + 0x42u);
    // 0c8ac0  jmp 0xc8aca
    X86_AT(c, 0xc8ac0u);
    goto L_c8aca;
L_c8ac2:
    X86_TICK(c, 9);
    // 0c8ac2  inc ecx
    X86_AT(c, 0xc8ac2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0c8ac3  jmp 0xc8a75
    X86_AT(c, 0xc8ac3u);
    X86_POLL(c, 0xc8a75u); goto L_c8a75;
L_c8ac5:
    X86_TICK(c, 4);
    // 0c8ac5  mov byte ptr [esi], 0xff
    X86_AT(c, 0xc8ac5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), 0xFFu);
    // 0c8ac8  sub eax, eax
    X86_AT(c, 0xc8ac8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_c8aca:
    X86_TICK(c, 24);
    // 0c8aca  pop edi
    X86_AT(c, 0xc8acau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c8acb  pop esi
    X86_AT(c, 0xc8acbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c8acc  leave 
    X86_AT(c, 0xc8accu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8acd  ret 
    X86_AT(c, 0xc8acdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8a68u, "ran off the end of a function");
}
void f_000c8ad0(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0c8ad0  push ebp
    X86_AT(c, 0xc8ad0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8ad1  mov ebp, esp
    X86_AT(c, 0xc8ad1u);
    c.r[5] = c.r[4];
    // 0c8ad3  sub esp, 8
    X86_AT(c, 0xc8ad3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0c8ad6  push ebx
    X86_AT(c, 0xc8ad6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c8ad7  push esi
    X86_AT(c, 0xc8ad7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8ad8  push edi
    X86_AT(c, 0xc8ad8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8ad9  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8ad9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8adc  push edi
    X86_AT(c, 0xc8adcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8add  call 0xc88ac
    X86_AT(c, 0xc8addu);
    push32(c, 0xc8ae2u); x86_call_known(c, 0xc88acu, f_000c88ac); X86_RET(c, 0xc8ae2u);
    X86_TICK(c, 9);
    // 0c8ae2  sub ebx, ebx
    X86_AT(c, 0xc8ae2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c8ae4  call 0xc799c
    X86_AT(c, 0xc8ae4u);
    push32(c, 0xc8ae9u); x86_call_known(c, 0xc799cu, f_000c799c); X86_RET(c, 0xc8ae9u);
    X86_TICK(c, 17);
    // 0c8ae9  sub ebx, ebx
    X86_AT(c, 0xc8ae9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c8aeb  mov dword ptr [ebp - 4], ebx
    X86_AT(c, 0xc8aebu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[3]);
    // 0c8aee  mov esi, ebx
    X86_AT(c, 0xc8aeeu);
    c.r[6] = c.r[3];
    // 0c8af0  push esi
    X86_AT(c, 0xc8af0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8af1  push edi
    X86_AT(c, 0xc8af1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8af2  call 0xc884c
    X86_AT(c, 0xc8af2u);
    push32(c, 0xc8af7u); x86_call_known(c, 0xc884cu, f_000c884c); X86_RET(c, 0xc8af7u);
    X86_TICK(c, 2);
    // 0c8af7  add esp, 0xc
    X86_AT(c, 0xc8af7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c8afa:
    X86_TICK(c, 12);
    // 0c8afa  push dword ptr [ebp + 8]
    X86_AT(c, 0xc8afau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c8afd  call 0xc81e4
    X86_AT(c, 0xc8afdu);
    push32(c, 0xc8b02u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xc8b02u);
    X86_TICK(c, 12);
    // 0c8b02  xchg ebx, eax
    X86_AT(c, 0xc8b02u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c8b03  add esp, 4
    X86_AT(c, 0xc8b03u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c8b06  and bl, bl
    X86_AT(c, 0xc8b06u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0c8b08  je 0xc8afa
    X86_AT(c, 0xc8b08u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc8afau); goto L_c8afa; }
    X86_TICK(c, 7);
    // 0c8b0a  cmp bl, 4
    X86_AT(c, 0xc8b0au);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c8b0d  je 0xc8b90
    X86_AT(c, 0xc8b0du);
    if (x86_cc(c, 4)) { goto L_c8b90; }
    X86_TICK(c, 7);
    // 0c8b13  cmp bl, 5
    X86_AT(c, 0xc8b13u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c8b16  jne 0xc8b23
    X86_AT(c, 0xc8b16u);
    if (x86_cc(c, 5)) { goto L_c8b23; }
    X86_TICK(c, 9);
    // 0c8b18  dec esi
    X86_AT(c, 0xc8b18u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0c8b19  and esi, esi
    X86_AT(c, 0xc8b19u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c8b1b  jge 0xc8b30
    X86_AT(c, 0xc8b1bu);
    if (x86_cc(c, 13)) { goto L_c8b30; }
    X86_TICK(c, 13);
    // 0c8b1d  mov esi, dword ptr [edi + 4]
    X86_AT(c, 0xc8b1du);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0c8b20  dec esi
    X86_AT(c, 0xc8b20u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0c8b21  jmp 0xc8b30
    X86_AT(c, 0xc8b21u);
    goto L_c8b30;
L_c8b23:
    X86_TICK(c, 7);
    // 0c8b23  cmp bl, 6
    X86_AT(c, 0xc8b23u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c8b26  jne 0xc8b3c
    X86_AT(c, 0xc8b26u);
    if (x86_cc(c, 5)) { goto L_c8b3c; }
    X86_TICK(c, 13);
    // 0c8b28  inc esi
    X86_AT(c, 0xc8b28u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c8b29  cmp esi, dword ptr [edi + 4]
    X86_AT(c, 0xc8b29u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 0c8b2c  jl 0xc8b30
    X86_AT(c, 0xc8b2cu);
    if (x86_cc(c, 12)) { goto L_c8b30; }
    X86_TICK(c, 2);
    // 0c8b2e  sub esi, esi
    X86_AT(c, 0xc8b2eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c8b30:
    X86_TICK(c, 11);
    // 0c8b30  push esi
    X86_AT(c, 0xc8b30u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8b31  push edi
    X86_AT(c, 0xc8b31u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8b32  call 0xc884c
    X86_AT(c, 0xc8b32u);
    push32(c, 0xc8b37u); x86_call_known(c, 0xc884cu, f_000c884c); X86_RET(c, 0xc8b37u);
    X86_TICK(c, 9);
    // 0c8b37  add esp, 8
    X86_AT(c, 0xc8b37u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c8b3a  jmp 0xc8afa
    X86_AT(c, 0xc8b3au);
    X86_POLL(c, 0xc8afau); goto L_c8afa;
L_c8b3c:
    X86_TICK(c, 7);
    // 0c8b3c  cmp bl, 1
    X86_AT(c, 0xc8b3cu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c8b3f  jne 0xc8b6b
    X86_AT(c, 0xc8b3fu);
    if (x86_cc(c, 5)) { goto L_c8b6b; }
    X86_TICK(c, 18);
    // 0c8b41  lea eax, [ebp - 5]
    X86_AT(c, 0xc8b41u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0c8b44  push eax
    X86_AT(c, 0xc8b44u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8b45  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xc8b45u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0c8b48  push edi
    X86_AT(c, 0xc8b48u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8b49  call 0xc89b4
    X86_AT(c, 0xc8b49u);
    push32(c, 0xc8b4eu); x86_call_known(c, 0xc89b4u, f_000c89b4); X86_RET(c, 0xc8b4eu);
    X86_TICK(c, 11);
    // 0c8b4e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc8b4eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c8b51  add esp, 0xc
    X86_AT(c, 0xc8b51u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c8b54  inc eax
    X86_AT(c, 0xc8b54u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c8b55  jne 0xc8b66
    X86_AT(c, 0xc8b55u);
    if (x86_cc(c, 5)) { goto L_c8b66; }
    X86_TICK(c, 11);
    // 0c8b57  push esi
    X86_AT(c, 0xc8b57u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8b58  push edi
    X86_AT(c, 0xc8b58u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8b59  call 0xc884c
    X86_AT(c, 0xc8b59u);
    push32(c, 0xc8b5eu); x86_call_known(c, 0xc884cu, f_000c884c); X86_RET(c, 0xc8b5eu);
    X86_TICK(c, 13);
    // 0c8b5e  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xc8b5eu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0c8b61  add esp, 8
    X86_AT(c, 0xc8b61u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c8b64  jmp 0xc8bbc
    X86_AT(c, 0xc8b64u);
    goto L_c8bbc;
L_c8b66:
    X86_TICK(c, 11);
    // 0c8b66  mov esi, dword ptr [ebp - 4]
    X86_AT(c, 0xc8b66u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c8b69  jmp 0xc8b86
    X86_AT(c, 0xc8b69u);
    goto L_c8b86;
L_c8b6b:
    X86_TICK(c, 15);
    // 0c8b6b  lea eax, [ebp - 5]
    X86_AT(c, 0xc8b6bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0c8b6e  push eax
    X86_AT(c, 0xc8b6eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8b6f  push ebx
    X86_AT(c, 0xc8b6fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c8b70  push edi
    X86_AT(c, 0xc8b70u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8b71  call 0xc89b4
    X86_AT(c, 0xc8b71u);
    push32(c, 0xc8b76u); x86_call_known(c, 0xc89b4u, f_000c89b4); X86_RET(c, 0xc8b76u);
    X86_TICK(c, 11);
    // 0c8b76  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc8b76u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c8b79  add esp, 0xc
    X86_AT(c, 0xc8b79u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c8b7c  cmp eax, 0xffffffff
    X86_AT(c, 0xc8b7cu);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0c8b7f  je 0xc8afa
    X86_AT(c, 0xc8b7fu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc8afau); goto L_c8afa; }
    X86_TICK(c, 3);
    // 0c8b85  xchg esi, eax
    X86_AT(c, 0xc8b85u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_c8b86:
    X86_TICK(c, 11);
    // 0c8b86  push esi
    X86_AT(c, 0xc8b86u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8b87  push edi
    X86_AT(c, 0xc8b87u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8b88  call 0xc884c
    X86_AT(c, 0xc8b88u);
    push32(c, 0xc8b8du); x86_call_known(c, 0xc884cu, f_000c884c); X86_RET(c, 0xc8b8du);
    X86_TICK(c, 2);
    // 0c8b8d  add esp, 8
    X86_AT(c, 0xc8b8du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c8b90:
    X86_TICK(c, 9);
    // 0c8b90  push 2
    X86_AT(c, 0xc8b90u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c8b92  call 0xd6660
    X86_AT(c, 0xc8b92u);
    push32(c, 0xc8b97u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xc8b97u);
    X86_TICK(c, 11);
    // 0c8b97  push esi
    X86_AT(c, 0xc8b97u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8b98  push edi
    X86_AT(c, 0xc8b98u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8b99  call 0xc884c
    X86_AT(c, 0xc8b99u);
    push32(c, 0xc8b9eu); x86_call_known(c, 0xc884cu, f_000c884c); X86_RET(c, 0xc8b9eu);
    X86_TICK(c, 16);
    // 0c8b9e  lea eax, [esi*4]
    X86_AT(c, 0xc8b9eu);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0c8ba5  lea edx, [eax*8]
    X86_AT(c, 0xc8ba5u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c8bac  lea edx, [eax + edx*4]
    X86_AT(c, 0xc8bacu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0c8baf  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xc8bafu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0c8bb2  mov al, byte ptr [eax + edx*1 + 0x83]
    X86_AT(c, 0xc8bb2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x83u))));
    // 0c8bb9  add esp, 0xc
    X86_AT(c, 0xc8bb9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c8bbc:
    X86_TICK(c, 28);
    // 0c8bbc  pop edi
    X86_AT(c, 0xc8bbcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c8bbd  pop esi
    X86_AT(c, 0xc8bbdu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c8bbe  pop ebx
    X86_AT(c, 0xc8bbeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c8bbf  leave 
    X86_AT(c, 0xc8bbfu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8bc0  ret 
    X86_AT(c, 0xc8bc0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8ad0u, "ran off the end of a function");
}
void f_000c8bc4(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0c8bc4  push ebp
    X86_AT(c, 0xc8bc4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8bc5  mov ebp, esp
    X86_AT(c, 0xc8bc5u);
    c.r[5] = c.r[4];
    // 0c8bc7  sub esp, 8
    X86_AT(c, 0xc8bc7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0c8bca  push ebx
    X86_AT(c, 0xc8bcau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c8bcb  push esi
    X86_AT(c, 0xc8bcbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8bcc  push edi
    X86_AT(c, 0xc8bccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8bcd  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8bcdu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8bd0  push edi
    X86_AT(c, 0xc8bd0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8bd1  call 0xc8930
    X86_AT(c, 0xc8bd1u);
    push32(c, 0xc8bd6u); x86_call_known(c, 0xc8930u, f_000c8930); X86_RET(c, 0xc8bd6u);
    X86_TICK(c, 9);
    // 0c8bd6  sub ebx, ebx
    X86_AT(c, 0xc8bd6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c8bd8  call 0xc799c
    X86_AT(c, 0xc8bd8u);
    push32(c, 0xc8bddu); x86_call_known(c, 0xc799cu, f_000c799c); X86_RET(c, 0xc8bddu);
    X86_TICK(c, 17);
    // 0c8bdd  sub ebx, ebx
    X86_AT(c, 0xc8bddu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0c8bdf  mov dword ptr [ebp - 4], ebx
    X86_AT(c, 0xc8bdfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[3]);
    // 0c8be2  mov esi, ebx
    X86_AT(c, 0xc8be2u);
    c.r[6] = c.r[3];
    // 0c8be4  push esi
    X86_AT(c, 0xc8be4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8be5  push edi
    X86_AT(c, 0xc8be5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8be6  call 0xc884c
    X86_AT(c, 0xc8be6u);
    push32(c, 0xc8bebu); x86_call_known(c, 0xc884cu, f_000c884c); X86_RET(c, 0xc8bebu);
    X86_TICK(c, 2);
    // 0c8beb  add esp, 0xc
    X86_AT(c, 0xc8bebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c8bee:
    X86_TICK(c, 12);
    // 0c8bee  push dword ptr [ebp + 8]
    X86_AT(c, 0xc8beeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c8bf1  call 0xc81e4
    X86_AT(c, 0xc8bf1u);
    push32(c, 0xc8bf6u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xc8bf6u);
    X86_TICK(c, 12);
    // 0c8bf6  xchg ebx, eax
    X86_AT(c, 0xc8bf6u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0c8bf7  add esp, 4
    X86_AT(c, 0xc8bf7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0c8bfa  and bl, bl
    X86_AT(c, 0xc8bfau);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0c8bfc  je 0xc8bee
    X86_AT(c, 0xc8bfcu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc8beeu); goto L_c8bee; }
    X86_TICK(c, 7);
    // 0c8bfe  cmp bl, 4
    X86_AT(c, 0xc8bfeu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0c8c01  je 0xc8c84
    X86_AT(c, 0xc8c01u);
    if (x86_cc(c, 4)) { goto L_c8c84; }
    X86_TICK(c, 7);
    // 0c8c07  cmp bl, 5
    X86_AT(c, 0xc8c07u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0c8c0a  jne 0xc8c17
    X86_AT(c, 0xc8c0au);
    if (x86_cc(c, 5)) { goto L_c8c17; }
    X86_TICK(c, 9);
    // 0c8c0c  dec esi
    X86_AT(c, 0xc8c0cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0c8c0d  and esi, esi
    X86_AT(c, 0xc8c0du);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0c8c0f  jge 0xc8c24
    X86_AT(c, 0xc8c0fu);
    if (x86_cc(c, 13)) { goto L_c8c24; }
    X86_TICK(c, 13);
    // 0c8c11  mov esi, dword ptr [edi + 4]
    X86_AT(c, 0xc8c11u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0c8c14  dec esi
    X86_AT(c, 0xc8c14u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0c8c15  jmp 0xc8c24
    X86_AT(c, 0xc8c15u);
    goto L_c8c24;
L_c8c17:
    X86_TICK(c, 7);
    // 0c8c17  cmp bl, 6
    X86_AT(c, 0xc8c17u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0c8c1a  jne 0xc8c30
    X86_AT(c, 0xc8c1au);
    if (x86_cc(c, 5)) { goto L_c8c30; }
    X86_TICK(c, 13);
    // 0c8c1c  inc esi
    X86_AT(c, 0xc8c1cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0c8c1d  cmp esi, dword ptr [edi + 4]
    X86_AT(c, 0xc8c1du);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4);
    // 0c8c20  jl 0xc8c24
    X86_AT(c, 0xc8c20u);
    if (x86_cc(c, 12)) { goto L_c8c24; }
    X86_TICK(c, 2);
    // 0c8c22  sub esi, esi
    X86_AT(c, 0xc8c22u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
L_c8c24:
    X86_TICK(c, 11);
    // 0c8c24  push esi
    X86_AT(c, 0xc8c24u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8c25  push edi
    X86_AT(c, 0xc8c25u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8c26  call 0xc884c
    X86_AT(c, 0xc8c26u);
    push32(c, 0xc8c2bu); x86_call_known(c, 0xc884cu, f_000c884c); X86_RET(c, 0xc8c2bu);
    X86_TICK(c, 9);
    // 0c8c2b  add esp, 8
    X86_AT(c, 0xc8c2bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c8c2e  jmp 0xc8bee
    X86_AT(c, 0xc8c2eu);
    X86_POLL(c, 0xc8beeu); goto L_c8bee;
L_c8c30:
    X86_TICK(c, 7);
    // 0c8c30  cmp bl, 1
    X86_AT(c, 0xc8c30u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0c8c33  jne 0xc8c5f
    X86_AT(c, 0xc8c33u);
    if (x86_cc(c, 5)) { goto L_c8c5f; }
    X86_TICK(c, 18);
    // 0c8c35  lea eax, [ebp - 5]
    X86_AT(c, 0xc8c35u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0c8c38  push eax
    X86_AT(c, 0xc8c38u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8c39  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xc8c39u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0c8c3c  push edi
    X86_AT(c, 0xc8c3cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8c3d  call 0xc89b4
    X86_AT(c, 0xc8c3du);
    push32(c, 0xc8c42u); x86_call_known(c, 0xc89b4u, f_000c89b4); X86_RET(c, 0xc8c42u);
    X86_TICK(c, 11);
    // 0c8c42  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc8c42u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c8c45  add esp, 0xc
    X86_AT(c, 0xc8c45u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c8c48  inc eax
    X86_AT(c, 0xc8c48u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0c8c49  jne 0xc8c5a
    X86_AT(c, 0xc8c49u);
    if (x86_cc(c, 5)) { goto L_c8c5a; }
    X86_TICK(c, 11);
    // 0c8c4b  push esi
    X86_AT(c, 0xc8c4bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8c4c  push edi
    X86_AT(c, 0xc8c4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8c4d  call 0xc884c
    X86_AT(c, 0xc8c4du);
    push32(c, 0xc8c52u); x86_call_known(c, 0xc884cu, f_000c884c); X86_RET(c, 0xc8c52u);
    X86_TICK(c, 13);
    // 0c8c52  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xc8c52u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0c8c55  add esp, 8
    X86_AT(c, 0xc8c55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c8c58  jmp 0xc8cb0
    X86_AT(c, 0xc8c58u);
    goto L_c8cb0;
L_c8c5a:
    X86_TICK(c, 11);
    // 0c8c5a  mov esi, dword ptr [ebp - 4]
    X86_AT(c, 0xc8c5au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0c8c5d  jmp 0xc8c7a
    X86_AT(c, 0xc8c5du);
    goto L_c8c7a;
L_c8c5f:
    X86_TICK(c, 15);
    // 0c8c5f  lea eax, [ebp - 5]
    X86_AT(c, 0xc8c5fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0c8c62  push eax
    X86_AT(c, 0xc8c62u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8c63  push ebx
    X86_AT(c, 0xc8c63u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0c8c64  push edi
    X86_AT(c, 0xc8c64u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8c65  call 0xc89b4
    X86_AT(c, 0xc8c65u);
    push32(c, 0xc8c6au); x86_call_known(c, 0xc89b4u, f_000c89b4); X86_RET(c, 0xc8c6au);
    X86_TICK(c, 11);
    // 0c8c6a  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xc8c6au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0c8c6d  add esp, 0xc
    X86_AT(c, 0xc8c6du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c8c70  cmp eax, 0xffffffff
    X86_AT(c, 0xc8c70u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFFu, 0, 4);
    // 0c8c73  je 0xc8bee
    X86_AT(c, 0xc8c73u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xc8beeu); goto L_c8bee; }
    X86_TICK(c, 3);
    // 0c8c79  xchg esi, eax
    X86_AT(c, 0xc8c79u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_c8c7a:
    X86_TICK(c, 11);
    // 0c8c7a  push esi
    X86_AT(c, 0xc8c7au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8c7b  push edi
    X86_AT(c, 0xc8c7bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8c7c  call 0xc884c
    X86_AT(c, 0xc8c7cu);
    push32(c, 0xc8c81u); x86_call_known(c, 0xc884cu, f_000c884c); X86_RET(c, 0xc8c81u);
    X86_TICK(c, 2);
    // 0c8c81  add esp, 8
    X86_AT(c, 0xc8c81u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_c8c84:
    X86_TICK(c, 9);
    // 0c8c84  push 2
    X86_AT(c, 0xc8c84u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c8c86  call 0xd6660
    X86_AT(c, 0xc8c86u);
    push32(c, 0xc8c8bu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xc8c8bu);
    X86_TICK(c, 11);
    // 0c8c8b  push esi
    X86_AT(c, 0xc8c8bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0c8c8c  push edi
    X86_AT(c, 0xc8c8cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8c8d  call 0xc884c
    X86_AT(c, 0xc8c8du);
    push32(c, 0xc8c92u); x86_call_known(c, 0xc884cu, f_000c884c); X86_RET(c, 0xc8c92u);
    X86_TICK(c, 16);
    // 0c8c92  lea eax, [esi*4]
    X86_AT(c, 0xc8c92u);
    c.r[0] = (uint32_t)(c.r[6] * 4);
    // 0c8c99  lea edx, [eax*8]
    X86_AT(c, 0xc8c99u);
    c.r[2] = (uint32_t)(c.r[0] * 8);
    // 0c8ca0  lea edx, [eax + edx*4]
    X86_AT(c, 0xc8ca0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0c8ca3  mov eax, dword ptr [edi + 0x1c]
    X86_AT(c, 0xc8ca3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)));
    // 0c8ca6  mov al, byte ptr [eax + edx*1 + 0x83]
    X86_AT(c, 0xc8ca6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x83u))));
    // 0c8cad  add esp, 0xc
    X86_AT(c, 0xc8cadu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_c8cb0:
    X86_TICK(c, 28);
    // 0c8cb0  pop edi
    X86_AT(c, 0xc8cb0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c8cb1  pop esi
    X86_AT(c, 0xc8cb1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0c8cb2  pop ebx
    X86_AT(c, 0xc8cb2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0c8cb3  leave 
    X86_AT(c, 0xc8cb3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8cb4  ret 
    X86_AT(c, 0xc8cb4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8bc4u, "ran off the end of a function");
}
void f_000c8cb8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0c8cb8  push ebp
    X86_AT(c, 0xc8cb8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8cb9  mov ebp, esp
    X86_AT(c, 0xc8cb9u);
    c.r[5] = c.r[4];
    // 0c8cbb  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xc8cbbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0c8cbe  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8cbeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0c8cc1  call 0xc7650
    X86_AT(c, 0xc8cc1u);
    push32(c, 0xc8cc6u); x86_call_known(c, 0xc7650u, f_000c7650); X86_RET(c, 0xc8cc6u);
    X86_TICK(c, 9);
    // 0c8cc6  push eax
    X86_AT(c, 0xc8cc6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8cc7  call 0xc76b8
    X86_AT(c, 0xc8cc7u);
    push32(c, 0xc8cccu); x86_call_known(c, 0xc76b8u, f_000c76b8); X86_RET(c, 0xc8cccu);
    X86_TICK(c, 14);
    // 0c8ccc  push eax
    X86_AT(c, 0xc8cccu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8ccd  push dword ptr [ebp + 8]
    X86_AT(c, 0xc8ccdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c8cd0  call 0xca414
    X86_AT(c, 0xc8cd0u);
    push32(c, 0xc8cd5u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xc8cd5u);
    X86_TICK(c, 18);
    // 0c8cd5  add esp, 0x14
    X86_AT(c, 0xc8cd5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0c8cd8  leave 
    X86_AT(c, 0xc8cd8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8cd9  ret 
    X86_AT(c, 0xc8cd9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8cb8u, "ran off the end of a function");
}
void f_000c8cdc(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0c8cdc  push ebp
    X86_AT(c, 0xc8cdcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8cdd  mov ebp, esp
    X86_AT(c, 0xc8cddu);
    c.r[5] = c.r[4];
    // 0c8cdf  push edi
    X86_AT(c, 0xc8cdfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8ce0  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8ce0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8ce3  cmp dword ptr [0x43eb8], 0
    X86_AT(c, 0xc8ce3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x43EB8u))), 0x0u, 0, 4);
    // 0c8cea  je 0xc8cf3
    X86_AT(c, 0xc8ceau);
    if (x86_cc(c, 4)) { goto L_c8cf3; }
L_c8cec:
    X86_TICK(c, 14);
    // 0c8cec  inc edi
    X86_AT(c, 0xc8cecu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c8ced  cmp byte ptr [edi - 1], 0
    X86_AT(c, 0xc8cedu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0c8cf1  jne 0xc8cec
    X86_AT(c, 0xc8cf1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xc8cecu); goto L_c8cec; }
L_c8cf3:
    X86_TICK(c, 14);
    // 0c8cf3  push edi
    X86_AT(c, 0xc8cf3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8cf4  push dword ptr [ebp + 8]
    X86_AT(c, 0xc8cf4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c8cf7  call 0xca414
    X86_AT(c, 0xc8cf7u);
    push32(c, 0xc8cfcu); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xc8cfcu);
    X86_TICK(c, 22);
    // 0c8cfc  add esp, 8
    X86_AT(c, 0xc8cfcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c8cff  pop edi
    X86_AT(c, 0xc8cffu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c8d00  leave 
    X86_AT(c, 0xc8d00u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8d01  ret 
    X86_AT(c, 0xc8d01u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8cdcu, "ran off the end of a function");
}
void f_000c8d18(X86Cpu& c) {
    X86_TICK(c, 8);
    // 0c8d18  push edi
    X86_AT(c, 0xc8d18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8d19  mov dword ptr [0x4c5d8], 1
    X86_AT(c, 0xc8d19u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5D8u)), 0x1u);
    // 0c8d23  mov byte ptr [0x4c5e3], 0
    X86_AT(c, 0xc8d23u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E3u)), 0x0u);
    // 0c8d2a  mov edi, 1
    X86_AT(c, 0xc8d2au);
    c.r[7] = 0x1u;
L_c8d2f:
    X86_TICK(c, 7);
    // 0c8d2f  cmp edi, 0x10
    X86_AT(c, 0xc8d2fu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0c8d32  jge 0xc8d88
    X86_AT(c, 0xc8d32u);
    if (x86_cc(c, 13)) { goto L_c8d88; }
    X86_TICK(c, 41);
    // 0c8d34  mov dword ptr [0x4c5dc], edi
    X86_AT(c, 0xc8d34u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5DCu)), c.r[7]);
    // 0c8d3a  mov eax, 0x43fd4
    X86_AT(c, 0xc8d3au);
    c.r[0] = 0x43FD4u;
    // 0c8d3f  lea edx, [edi*4]
    X86_AT(c, 0xc8d3fu);
    c.r[2] = (uint32_t)(c.r[7] * 4);
    // 0c8d46  lea edx, [edx + edx*2]
    X86_AT(c, 0xc8d46u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 2);
    // 0c8d49  mov cl, byte ptr [eax + edx*1 + 0x8644]
    X86_AT(c, 0xc8d49u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x8644u))));
    // 0c8d50  mov byte ptr [0x4c5e0], cl
    X86_AT(c, 0xc8d50u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E0u)), g8(c, 1));
    // 0c8d56  mov cl, byte ptr [eax + edx*1 + 0x8648]
    X86_AT(c, 0xc8d56u);
    s8(c, 1, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x8648u))));
    // 0c8d5d  mov byte ptr [0x4c5e1], cl
    X86_AT(c, 0xc8d5du);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E1u)), g8(c, 1));
    // 0c8d63  mov dl, byte ptr [eax + edx*1 + 0x864c]
    X86_AT(c, 0xc8d63u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x864Cu))));
    // 0c8d6a  mov byte ptr [0x4c5e2], dl
    X86_AT(c, 0xc8d6au);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E2u)), g8(c, 2));
    // 0c8d70  push 0x4c5d8
    X86_AT(c, 0xc8d70u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c8d75  push 1
    X86_AT(c, 0xc8d75u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c8d77  add eax, 0x8004
    X86_AT(c, 0xc8d77u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8004u, 0, 4); }
    // 0c8d7c  push eax
    X86_AT(c, 0xc8d7cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8d7d  call 0x19c
    X86_AT(c, 0xc8d7du);
    push32(c, 0xc8d82u); x86_call_known(c, 0x19cu, f_0000019c); X86_RET(c, 0xc8d82u);
    X86_TICK(c, 11);
    // 0c8d82  inc edi
    X86_AT(c, 0xc8d82u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c8d83  add esp, 0xc
    X86_AT(c, 0xc8d83u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c8d86  jmp 0xc8d2f
    X86_AT(c, 0xc8d86u);
    X86_POLL(c, 0xc8d2fu); goto L_c8d2f;
L_c8d88:
    X86_TICK(c, 14);
    // 0c8d88  pop edi
    X86_AT(c, 0xc8d88u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c8d89  ret 
    X86_AT(c, 0xc8d89u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8d18u, "ran off the end of a function");
}
void f_000c8d8c(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0c8d8c  push ebp
    X86_AT(c, 0xc8d8cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8d8d  mov ebp, esp
    X86_AT(c, 0xc8d8du);
    c.r[5] = c.r[4];
    // 0c8d8f  mov dword ptr [0x4c5d8], 1
    X86_AT(c, 0xc8d8fu);
    wr32((c.sbase[3] + (uint32_t)(0x4C5D8u)), 0x1u);
    // 0c8d99  mov byte ptr [0x4c5e3], 0
    X86_AT(c, 0xc8d99u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E3u)), 0x0u);
    // 0c8da0  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xc8da0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8da3  mov dword ptr [0x4c5dc], eax
    X86_AT(c, 0xc8da3u);
    wr32((c.sbase[3] + (uint32_t)(0x4C5DCu)), c.r[0]);
    // 0c8da8  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0xc8da8u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0c8dab  mov byte ptr [0x4c5e0], al
    X86_AT(c, 0xc8dabu);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E0u)), g8(c, 0));
    // 0c8db0  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xc8db0u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0c8db3  mov byte ptr [0x4c5e1], al
    X86_AT(c, 0xc8db3u);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E1u)), g8(c, 0));
    // 0c8db8  mov al, byte ptr [ebp + 0x14]
    X86_AT(c, 0xc8db8u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0c8dbb  mov byte ptr [0x4c5e2], al
    X86_AT(c, 0xc8dbbu);
    wr8((c.sbase[3] + (uint32_t)(0x4C5E2u)), g8(c, 0));
    // 0c8dc0  push 0x4c5d8
    X86_AT(c, 0xc8dc0u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c8dc5  push 1
    X86_AT(c, 0xc8dc5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c8dc7  push 0x4bfd8
    X86_AT(c, 0xc8dc7u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c8dcc  call 0x19c
    X86_AT(c, 0xc8dccu);
    push32(c, 0xc8dd1u); x86_call_known(c, 0x19cu, f_0000019c); X86_RET(c, 0xc8dd1u);
    X86_TICK(c, 16);
    // 0c8dd1  leave 
    X86_AT(c, 0xc8dd1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8dd2  ret 
    X86_AT(c, 0xc8dd2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8d8cu, "ran off the end of a function");
}
void f_000c8dd4(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0c8dd4  push ebp
    X86_AT(c, 0xc8dd4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8dd5  mov ebp, esp
    X86_AT(c, 0xc8dd5u);
    c.r[5] = c.r[4];
    // 0c8dd7  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0xc8dd7u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8ddb  push eax
    X86_AT(c, 0xc8ddbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8ddc  push 0
    X86_AT(c, 0xc8ddcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c8dde  push 0x4bfd8
    X86_AT(c, 0xc8ddeu);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c8de3  call 0x20e
    X86_AT(c, 0xc8de3u);
    push32(c, 0xc8de8u); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xc8de8u);
    X86_TICK(c, 16);
    // 0c8de8  leave 
    X86_AT(c, 0xc8de8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8de9  ret 
    X86_AT(c, 0xc8de9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8dd4u, "ran off the end of a function");
}
void f_000c8dec(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0c8dec  push ebp
    X86_AT(c, 0xc8decu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8ded  mov ebp, esp
    X86_AT(c, 0xc8dedu);
    c.r[5] = c.r[4];
    // 0c8def  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0xc8defu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8df3  push eax
    X86_AT(c, 0xc8df3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8df4  push 1
    X86_AT(c, 0xc8df4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c8df6  push 0x4bfd8
    X86_AT(c, 0xc8df6u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c8dfb  call 0x20e
    X86_AT(c, 0xc8dfbu);
    push32(c, 0xc8e00u); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xc8e00u);
    X86_TICK(c, 16);
    // 0c8e00  leave 
    X86_AT(c, 0xc8e00u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8e01  ret 
    X86_AT(c, 0xc8e01u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8decu, "ran off the end of a function");
}
void f_000c8e04(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0c8e04  push ebp
    X86_AT(c, 0xc8e04u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8e05  mov ebp, esp
    X86_AT(c, 0xc8e05u);
    c.r[5] = c.r[4];
    // 0c8e07  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0xc8e07u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8e0b  push eax
    X86_AT(c, 0xc8e0bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8e0c  push 2
    X86_AT(c, 0xc8e0cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c8e0e  push 0x4bfd8
    X86_AT(c, 0xc8e0eu);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c8e13  call 0x20e
    X86_AT(c, 0xc8e13u);
    push32(c, 0xc8e18u); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xc8e18u);
    X86_TICK(c, 16);
    // 0c8e18  leave 
    X86_AT(c, 0xc8e18u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8e19  ret 
    X86_AT(c, 0xc8e19u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8e04u, "ran off the end of a function");
}
void f_000c8e1c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0c8e1c  push ebp
    X86_AT(c, 0xc8e1cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8e1d  mov ebp, esp
    X86_AT(c, 0xc8e1du);
    c.r[5] = c.r[4];
    // 0c8e1f  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0xc8e1fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8e23  push eax
    X86_AT(c, 0xc8e23u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c8e24  push 3
    X86_AT(c, 0xc8e24u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8e26  push 0x4bfd8
    X86_AT(c, 0xc8e26u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c8e2b  call 0x20e
    X86_AT(c, 0xc8e2bu);
    push32(c, 0xc8e30u); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xc8e30u);
    X86_TICK(c, 16);
    // 0c8e30  leave 
    X86_AT(c, 0xc8e30u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8e31  ret 
    X86_AT(c, 0xc8e31u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8e1cu, "ran off the end of a function");
}
void f_000c8e34(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0c8e34  push ebp
    X86_AT(c, 0xc8e34u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8e35  mov ebp, esp
    X86_AT(c, 0xc8e35u);
    c.r[5] = c.r[4];
    // 0c8e37  push edi
    X86_AT(c, 0xc8e37u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8e38  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xc8e38u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8e3b  sar eax, 3
    X86_AT(c, 0xc8e3bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0c8e3e  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8e3eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8e41  sar edx, 3
    X86_AT(c, 0xc8e41u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0c8e44  shl edx, 5
    X86_AT(c, 0xc8e44u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c8e47  add edx, eax
    X86_AT(c, 0xc8e47u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c8e49  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc8e49u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c8e4c  sar edi, 3
    X86_AT(c, 0xc8e4cu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 0c8e4f  shl edi, 0xa
    X86_AT(c, 0xc8e4fu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 0c8e52  add edi, edx
    X86_AT(c, 0xc8e52u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c8e54  push edi
    X86_AT(c, 0xc8e54u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8e55  push 0
    X86_AT(c, 0xc8e55u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c8e57  push 0x4bfd8
    X86_AT(c, 0xc8e57u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c8e5c  call 0x20e
    X86_AT(c, 0xc8e5cu);
    push32(c, 0xc8e61u); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xc8e61u);
    X86_TICK(c, 22);
    // 0c8e61  add esp, 0xc
    X86_AT(c, 0xc8e61u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c8e64  pop edi
    X86_AT(c, 0xc8e64u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c8e65  leave 
    X86_AT(c, 0xc8e65u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8e66  ret 
    X86_AT(c, 0xc8e66u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8e34u, "ran off the end of a function");
}
void f_000c8e68(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0c8e68  push ebp
    X86_AT(c, 0xc8e68u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8e69  mov ebp, esp
    X86_AT(c, 0xc8e69u);
    c.r[5] = c.r[4];
    // 0c8e6b  push edi
    X86_AT(c, 0xc8e6bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8e6c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xc8e6cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8e6f  sar eax, 3
    X86_AT(c, 0xc8e6fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0c8e72  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8e72u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8e75  sar edx, 3
    X86_AT(c, 0xc8e75u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0c8e78  shl edx, 5
    X86_AT(c, 0xc8e78u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c8e7b  add edx, eax
    X86_AT(c, 0xc8e7bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c8e7d  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc8e7du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c8e80  sar edi, 3
    X86_AT(c, 0xc8e80u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 0c8e83  shl edi, 0xa
    X86_AT(c, 0xc8e83u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 0c8e86  add edi, edx
    X86_AT(c, 0xc8e86u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c8e88  push edi
    X86_AT(c, 0xc8e88u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8e89  push 1
    X86_AT(c, 0xc8e89u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c8e8b  push 0x4bfd8
    X86_AT(c, 0xc8e8bu);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c8e90  call 0x20e
    X86_AT(c, 0xc8e90u);
    push32(c, 0xc8e95u); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xc8e95u);
    X86_TICK(c, 22);
    // 0c8e95  add esp, 0xc
    X86_AT(c, 0xc8e95u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c8e98  pop edi
    X86_AT(c, 0xc8e98u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c8e99  leave 
    X86_AT(c, 0xc8e99u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8e9a  ret 
    X86_AT(c, 0xc8e9au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8e68u, "ran off the end of a function");
}
void f_000c8e9c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0c8e9c  push ebp
    X86_AT(c, 0xc8e9cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8e9d  mov ebp, esp
    X86_AT(c, 0xc8e9du);
    c.r[5] = c.r[4];
    // 0c8e9f  push dword ptr [ebp + 8]
    X86_AT(c, 0xc8e9fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c8ea2  push 0x4bfd8
    X86_AT(c, 0xc8ea2u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c8ea7  call 0x4b1
    X86_AT(c, 0xc8ea7u);
    push32(c, 0xc8eacu); x86_call_known(c, 0x4b1u, f_000004b1); X86_RET(c, 0xc8eacu);
    X86_TICK(c, 16);
    // 0c8eac  leave 
    X86_AT(c, 0xc8eacu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8ead  ret 
    X86_AT(c, 0xc8eadu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8e9cu, "ran off the end of a function");
}
void f_000c8eb0(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0c8eb0  push ebp
    X86_AT(c, 0xc8eb0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8eb1  mov ebp, esp
    X86_AT(c, 0xc8eb1u);
    c.r[5] = c.r[4];
    // 0c8eb3  push edi
    X86_AT(c, 0xc8eb3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8eb4  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xc8eb4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8eb7  sar eax, 3
    X86_AT(c, 0xc8eb7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0c8eba  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8ebau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8ebd  sar edx, 3
    X86_AT(c, 0xc8ebdu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0c8ec0  shl edx, 5
    X86_AT(c, 0xc8ec0u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c8ec3  add edx, eax
    X86_AT(c, 0xc8ec3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c8ec5  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc8ec5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c8ec8  sar edi, 3
    X86_AT(c, 0xc8ec8u);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 0c8ecb  shl edi, 0xa
    X86_AT(c, 0xc8ecbu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 0c8ece  add edi, edx
    X86_AT(c, 0xc8eceu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c8ed0  push edi
    X86_AT(c, 0xc8ed0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8ed1  push 2
    X86_AT(c, 0xc8ed1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c8ed3  push 0x4bfd8
    X86_AT(c, 0xc8ed3u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c8ed8  call 0x20e
    X86_AT(c, 0xc8ed8u);
    push32(c, 0xc8eddu); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xc8eddu);
    X86_TICK(c, 22);
    // 0c8edd  add esp, 0xc
    X86_AT(c, 0xc8eddu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c8ee0  pop edi
    X86_AT(c, 0xc8ee0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c8ee1  leave 
    X86_AT(c, 0xc8ee1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8ee2  ret 
    X86_AT(c, 0xc8ee2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8eb0u, "ran off the end of a function");
}
void f_000c8ee4(X86Cpu& c) {
    X86_TICK(c, 50);
    // 0c8ee4  push ebp
    X86_AT(c, 0xc8ee4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8ee5  mov ebp, esp
    X86_AT(c, 0xc8ee5u);
    c.r[5] = c.r[4];
    // 0c8ee7  push edi
    X86_AT(c, 0xc8ee7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8ee8  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xc8ee8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8eeb  sar eax, 3
    X86_AT(c, 0xc8eebu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 0c8eee  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xc8eeeu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0c8ef1  sar edx, 3
    X86_AT(c, 0xc8ef1u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0c8ef4  shl edx, 5
    X86_AT(c, 0xc8ef4u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x5u, 4, w); if (w) c.r[2] = r; }
    // 0c8ef7  add edx, eax
    X86_AT(c, 0xc8ef7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0c8ef9  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xc8ef9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0c8efc  sar edi, 3
    X86_AT(c, 0xc8efcu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[7] = r; }
    // 0c8eff  shl edi, 0xa
    X86_AT(c, 0xc8effu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[7] = r; }
    // 0c8f02  add edi, edx
    X86_AT(c, 0xc8f02u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[2], 0, 4); }
    // 0c8f04  push edi
    X86_AT(c, 0xc8f04u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8f05  push 3
    X86_AT(c, 0xc8f05u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c8f07  push 0x4bfd8
    X86_AT(c, 0xc8f07u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c8f0c  call 0x20e
    X86_AT(c, 0xc8f0cu);
    push32(c, 0xc8f11u); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xc8f11u);
    X86_TICK(c, 22);
    // 0c8f11  add esp, 0xc
    X86_AT(c, 0xc8f11u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c8f14  pop edi
    X86_AT(c, 0xc8f14u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c8f15  leave 
    X86_AT(c, 0xc8f15u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8f16  ret 
    X86_AT(c, 0xc8f16u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8ee4u, "ran off the end of a function");
}
void f_000c8f2c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0c8f2c  push ebp
    X86_AT(c, 0xc8f2cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8f2d  mov ebp, esp
    X86_AT(c, 0xc8f2du);
    c.r[5] = c.r[4];
    // 0c8f2f  push dword ptr [ebp + 8]
    X86_AT(c, 0xc8f2fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c8f32  push 0x4bfd8
    X86_AT(c, 0xc8f32u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c8f37  call 0x27d
    X86_AT(c, 0xc8f37u);
    push32(c, 0xc8f3cu); x86_call_known(c, 0x27du, f_0000027d); X86_RET(c, 0xc8f3cu);
    X86_TICK(c, 16);
    // 0c8f3c  leave 
    X86_AT(c, 0xc8f3cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8f3d  ret 
    X86_AT(c, 0xc8f3du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8f2cu, "ran off the end of a function");
}
void f_000c8f40(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0c8f40  push ebp
    X86_AT(c, 0xc8f40u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8f41  mov ebp, esp
    X86_AT(c, 0xc8f41u);
    c.r[5] = c.r[4];
    // 0c8f43  push dword ptr [ebp + 8]
    X86_AT(c, 0xc8f43u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0c8f46  push 0x4bfd8
    X86_AT(c, 0xc8f46u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c8f4b  call 0x1c4
    X86_AT(c, 0xc8f4bu);
    push32(c, 0xc8f50u); x86_call_known(c, 0x1c4u, f_000001c4); X86_RET(c, 0xc8f50u);
    X86_TICK(c, 16);
    // 0c8f50  leave 
    X86_AT(c, 0xc8f50u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8f51  ret 
    X86_AT(c, 0xc8f51u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8f40u, "ran off the end of a function");
}
void f_000c8f54(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0c8f54  push ebp
    X86_AT(c, 0xc8f54u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c8f55  mov ebp, esp
    X86_AT(c, 0xc8f55u);
    c.r[5] = c.r[4];
    // 0c8f57  push edi
    X86_AT(c, 0xc8f57u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8f58  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc8f58u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c8f5b  inc edi
    X86_AT(c, 0xc8f5bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0c8f5c  cmp edi, 4
    X86_AT(c, 0xc8f5cu);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0c8f5f  jne 0xc8f63
    X86_AT(c, 0xc8f5fu);
    if (x86_cc(c, 5)) { goto L_c8f63; }
    X86_TICK(c, 2);
    // 0c8f61  sub edi, edi
    X86_AT(c, 0xc8f61u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_c8f63:
    X86_TICK(c, 13);
    // 0c8f63  push edi
    X86_AT(c, 0xc8f63u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c8f64  push 0
    X86_AT(c, 0xc8f64u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c8f66  push 0x4bfd8
    X86_AT(c, 0xc8f66u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c8f6b  call 0x1e6
    X86_AT(c, 0xc8f6bu);
    push32(c, 0xc8f70u); x86_call_known(c, 0x1e6u, f_000001e6); X86_RET(c, 0xc8f70u);
    X86_TICK(c, 22);
    // 0c8f70  add esp, 0xc
    X86_AT(c, 0xc8f70u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0c8f73  pop edi
    X86_AT(c, 0xc8f73u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c8f74  leave 
    X86_AT(c, 0xc8f74u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c8f75  ret 
    X86_AT(c, 0xc8f75u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc8f54u, "ran off the end of a function");
}
void f_000c90b0(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0c90b0  push ebp
    X86_AT(c, 0xc90b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c90b1  mov ebp, esp
    X86_AT(c, 0xc90b1u);
    c.r[5] = c.r[4];
    // 0c90b3  push edi
    X86_AT(c, 0xc90b3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c90b4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc90b4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c90b7  and edi, edi
    X86_AT(c, 0xc90b7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c90b9  jne 0xc90ce
    X86_AT(c, 0xc90b9u);
    if (x86_cc(c, 5)) { goto L_c90ce; }
    X86_TICK(c, 15);
    // 0c90bb  push 0
    X86_AT(c, 0xc90bbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c90bd  push 0
    X86_AT(c, 0xc90bdu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c90bf  push 1
    X86_AT(c, 0xc90bfu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c90c1  push 0x4bfd8
    X86_AT(c, 0xc90c1u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c90c6  call 0x14a
    X86_AT(c, 0xc90c6u);
    push32(c, 0xc90cbu); x86_call_known(c, 0x14au, f_0000014a); X86_RET(c, 0xc90cbu);
    X86_TICK(c, 2);
    // 0c90cb  add esp, 0x10
    X86_AT(c, 0xc90cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_c90ce:
    X86_TICK(c, 7);
    // 0c90ce  cmp edi, 1
    X86_AT(c, 0xc90ceu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c90d1  jne 0xc90e6
    X86_AT(c, 0xc90d1u);
    if (x86_cc(c, 5)) { goto L_c90e6; }
    X86_TICK(c, 15);
    // 0c90d3  push 0x31
    X86_AT(c, 0xc90d3u);
    { uint32_t v = 0x31u; push32(c, v); }
    // 0c90d5  push 0x36
    X86_AT(c, 0xc90d5u);
    { uint32_t v = 0x36u; push32(c, v); }
    // 0c90d7  push 1
    X86_AT(c, 0xc90d7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c90d9  push 0x4bfd8
    X86_AT(c, 0xc90d9u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c90de  call 0x14a
    X86_AT(c, 0xc90deu);
    push32(c, 0xc90e3u); x86_call_known(c, 0x14au, f_0000014a); X86_RET(c, 0xc90e3u);
    X86_TICK(c, 2);
    // 0c90e3  add esp, 0x10
    X86_AT(c, 0xc90e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_c90e6:
    X86_TICK(c, 20);
    // 0c90e6  pop edi
    X86_AT(c, 0xc90e6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c90e7  leave 
    X86_AT(c, 0xc90e7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c90e8  ret 
    X86_AT(c, 0xc90e8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc90b0u, "ran off the end of a function");
}
void f_000c9108(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0c9108  push ebp
    X86_AT(c, 0xc9108u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9109  mov ebp, esp
    X86_AT(c, 0xc9109u);
    c.r[5] = c.r[4];
    // 0c910b  push edi
    X86_AT(c, 0xc910bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c910c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xc910cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c910f  and edi, edi
    X86_AT(c, 0xc910fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0c9111  jne 0xc911e
    X86_AT(c, 0xc9111u);
    if (x86_cc(c, 5)) { goto L_c911e; }
    X86_TICK(c, 9);
    // 0c9113  mov word ptr [0x4c6d8], 3
    X86_AT(c, 0xc9113u);
    wr16((c.sbase[3] + (uint32_t)(0x4C6D8u)), 0x3u);
    // 0c911c  jmp 0xc9130
    X86_AT(c, 0xc911cu);
    goto L_c9130;
L_c911e:
    X86_TICK(c, 7);
    // 0c911e  cmp edi, 1
    X86_AT(c, 0xc911eu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0c9121  jne 0xc91ff
    X86_AT(c, 0xc9121u);
    if (x86_cc(c, 5)) { goto L_c91ff; }
    X86_TICK(c, 2);
    // 0c9127  mov word ptr [0x4c6da], 3
    X86_AT(c, 0xc9127u);
    wr16((c.sbase[3] + (uint32_t)(0x4C6DAu)), 0x3u);
L_c9130:
    X86_TICK(c, 13);
    // 0c9130  push 1
    X86_AT(c, 0xc9130u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c9132  push edi
    X86_AT(c, 0xc9132u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9133  push 0x4bfd8
    X86_AT(c, 0xc9133u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9138  call 0xea
    X86_AT(c, 0xc9138u);
    push32(c, 0xc913du); x86_call_known(c, 0xeau, f_000000ea); X86_RET(c, 0xc913du);
    X86_TICK(c, 13);
    // 0c913d  push 3
    X86_AT(c, 0xc913du);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c913f  push edi
    X86_AT(c, 0xc913fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c9140  push 0x4bfd8
    X86_AT(c, 0xc9140u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9145  call 0xea
    X86_AT(c, 0xc9145u);
    push32(c, 0xc914au); x86_call_known(c, 0xeau, f_000000ea); X86_RET(c, 0xc914au);
    X86_TICK(c, 9);
    // 0c914a  push edi
    X86_AT(c, 0xc914au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0c914b  call 0xc8f40
    X86_AT(c, 0xc914bu);
    push32(c, 0xc9150u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xc9150u);
    X86_TICK(c, 19);
    // 0c9150  mov word ptr [0x4c5d8], 0
    X86_AT(c, 0xc9150u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5D8u)), 0x0u);
    // 0c9159  mov word ptr [0x4c5da], 0
    X86_AT(c, 0xc9159u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DAu)), 0x0u);
    // 0c9162  mov word ptr [0x4c5dc], 0x2ff
    X86_AT(c, 0xc9162u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), 0x2FFu);
    // 0c916b  mov word ptr [0x4c5de], 0x1df
    X86_AT(c, 0xc916bu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), 0x1DFu);
    // 0c9174  push 0x4c5d8
    X86_AT(c, 0xc9174u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c9179  push 0x4bfd8
    X86_AT(c, 0xc9179u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c917e  call 0x178
    X86_AT(c, 0xc917eu);
    push32(c, 0xc9183u); x86_call_known(c, 0x178u, f_00000178); X86_RET(c, 0xc9183u);
    X86_TICK(c, 7);
    // 0c9183  call 0xc8d18
    X86_AT(c, 0xc9183u);
    push32(c, 0xc9188u); x86_call_known(c, 0xc8d18u, f_000c8d18); X86_RET(c, 0xc9188u);
    X86_TICK(c, 9);
    // 0c9188  push 0xf
    X86_AT(c, 0xc9188u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c918a  call 0xc8dd4
    X86_AT(c, 0xc918au);
    push32(c, 0xc918fu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc918fu);
    X86_TICK(c, 9);
    // 0c918f  push 0
    X86_AT(c, 0xc918fu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c9191  call 0xc8dec
    X86_AT(c, 0xc9191u);
    push32(c, 0xc9196u); x86_call_known(c, 0xc8decu, f_000c8dec); X86_RET(c, 0xc9196u);
    X86_TICK(c, 9);
    // 0c9196  push 0xd
    X86_AT(c, 0xc9196u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c9198  call 0xc8e04
    X86_AT(c, 0xc9198u);
    push32(c, 0xc919du); x86_call_known(c, 0xc8e04u, f_000c8e04); X86_RET(c, 0xc919du);
    X86_TICK(c, 9);
    // 0c919d  push 0
    X86_AT(c, 0xc919du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c919f  call 0xc8e1c
    X86_AT(c, 0xc919fu);
    push32(c, 0xc91a4u); x86_call_known(c, 0xc8e1cu, f_000c8e1c); X86_RET(c, 0xc91a4u);
    X86_TICK(c, 15);
    // 0c91a4  movsx eax, word ptr [0x4c6dc]
    X86_AT(c, 0xc91a4u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4C6DCu)));
    // 0c91ab  push eax
    X86_AT(c, 0xc91abu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c91ac  call 0xc8f2c
    X86_AT(c, 0xc91acu);
    push32(c, 0xc91b1u); x86_call_known(c, 0xc8f2cu, f_000c8f2c); X86_RET(c, 0xc91b1u);
    X86_TICK(c, 17);
    // 0c91b1  movsx eax, word ptr [0x4c6de]
    X86_AT(c, 0xc91b1u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4C6DEu)));
    // 0c91b8  push eax
    X86_AT(c, 0xc91b8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c91b9  push 0x4bfd8
    X86_AT(c, 0xc91b9u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c91be  call 0x2c5
    X86_AT(c, 0xc91beu);
    push32(c, 0xc91c3u); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xc91c3u);
    X86_TICK(c, 17);
    // 0c91c3  add esp, 0x40
    X86_AT(c, 0xc91c3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c91c6  push 0
    X86_AT(c, 0xc91c6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c91c8  push 0
    X86_AT(c, 0xc91c8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c91ca  push 0
    X86_AT(c, 0xc91cau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c91cc  push 0x4bfd8
    X86_AT(c, 0xc91ccu);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c91d1  call 0x14a
    X86_AT(c, 0xc91d1u);
    push32(c, 0xc91d6u); x86_call_known(c, 0x14au, f_0000014a); X86_RET(c, 0xc91d6u);
    X86_TICK(c, 15);
    // 0c91d6  push 1
    X86_AT(c, 0xc91d6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c91d8  push 1
    X86_AT(c, 0xc91d8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c91da  push 2
    X86_AT(c, 0xc91dau);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0c91dc  push 0x4bfd8
    X86_AT(c, 0xc91dcu);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c91e1  call 0x14a
    X86_AT(c, 0xc91e1u);
    push32(c, 0xc91e6u); x86_call_known(c, 0x14au, f_0000014a); X86_RET(c, 0xc91e6u);
    X86_TICK(c, 15);
    // 0c91e6  push 0x1e0
    X86_AT(c, 0xc91e6u);
    { uint32_t v = 0x1E0u; push32(c, v); }
    // 0c91eb  push 0x280
    X86_AT(c, 0xc91ebu);
    { uint32_t v = 0x280u; push32(c, v); }
    // 0c91f0  push 3
    X86_AT(c, 0xc91f0u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0c91f2  push 0x4bfd8
    X86_AT(c, 0xc91f2u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c91f7  call 0x14a
    X86_AT(c, 0xc91f7u);
    push32(c, 0xc91fcu); x86_call_known(c, 0x14au, f_0000014a); X86_RET(c, 0xc91fcu);
    X86_TICK(c, 2);
    // 0c91fc  add esp, 0x30
    X86_AT(c, 0xc91fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_c91ff:
    X86_TICK(c, 20);
    // 0c91ff  pop edi
    X86_AT(c, 0xc91ffu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0c9200  leave 
    X86_AT(c, 0xc9200u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9201  ret 
    X86_AT(c, 0xc9201u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9108u, "ran off the end of a function");
}
void f_000c9204(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0c9204  push 0x600
    X86_AT(c, 0xc9204u);
    { uint32_t v = 0x600u; push32(c, v); }
    // 0c9209  push 0x4bfd8
    X86_AT(c, 0xc9209u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c920e  call 0xc8
    X86_AT(c, 0xc920eu);
    push32(c, 0xc9213u); x86_call_known(c, 0xc8u, f_000000c8); X86_RET(c, 0xc9213u);
    X86_TICK(c, 9);
    // 0c9213  add esp, 8
    X86_AT(c, 0xc9213u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0c9216  and eax, eax
    X86_AT(c, 0xc9216u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0c9218  je 0xc9224
    X86_AT(c, 0xc9218u);
    if (x86_cc(c, 4)) { goto L_c9224; }
    X86_TICK(c, 9);
    // 0c921a  mov eax, 0xffffffff
    X86_AT(c, 0xc921au);
    c.r[0] = 0xFFFFFFFFu;
    // 0c921f  jmp 0xc92de
    X86_AT(c, 0xc921fu);
    goto L_c92de;
L_c9224:
    X86_TICK(c, 17);
    // 0c9224  mov word ptr [0x4c6d8], 3
    X86_AT(c, 0xc9224u);
    wr16((c.sbase[3] + (uint32_t)(0x4C6D8u)), 0x3u);
    // 0c922d  mov eax, 3
    X86_AT(c, 0xc922du);
    c.r[0] = 0x3u;
    // 0c9232  push eax
    X86_AT(c, 0xc9232u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9233  push 0
    X86_AT(c, 0xc9233u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c9235  push 0x4bfd8
    X86_AT(c, 0xc9235u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c923a  call 0xea
    X86_AT(c, 0xc923au);
    push32(c, 0xc923fu); x86_call_known(c, 0xeau, f_000000ea); X86_RET(c, 0xc923fu);
    X86_TICK(c, 19);
    // 0c923f  mov ax, 3
    X86_AT(c, 0xc923fu);
    s16(c, 0, 0x3u);
    // 0c9243  mov word ptr [0x4c6da], ax
    X86_AT(c, 0xc9243u);
    wr16((c.sbase[3] + (uint32_t)(0x4C6DAu)), (c.r[0] & 0xFFFFu));
    // 0c9249  mov eax, 3
    X86_AT(c, 0xc9249u);
    c.r[0] = 0x3u;
    // 0c924e  push eax
    X86_AT(c, 0xc924eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c924f  push 1
    X86_AT(c, 0xc924fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c9251  push 0x4bfd8
    X86_AT(c, 0xc9251u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9256  call 0xea
    X86_AT(c, 0xc9256u);
    push32(c, 0xc925bu); x86_call_known(c, 0xeau, f_000000ea); X86_RET(c, 0xc925bu);
    X86_TICK(c, 15);
    // 0c925b  mov ax, 9
    X86_AT(c, 0xc925bu);
    s16(c, 0, 0x9u);
    // 0c925f  mov word ptr [0x4c6dc], ax
    X86_AT(c, 0xc925fu);
    wr16((c.sbase[3] + (uint32_t)(0x4C6DCu)), (c.r[0] & 0xFFFFu));
    // 0c9265  mov eax, 9
    X86_AT(c, 0xc9265u);
    c.r[0] = 0x9u;
    // 0c926a  push eax
    X86_AT(c, 0xc926au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c926b  call 0xc8f2c
    X86_AT(c, 0xc926bu);
    push32(c, 0xc9270u); x86_call_known(c, 0xc8f2cu, f_000c8f2c); X86_RET(c, 0xc9270u);
    X86_TICK(c, 17);
    // 0c9270  mov ax, 0x22
    X86_AT(c, 0xc9270u);
    s16(c, 0, 0x22u);
    // 0c9274  mov word ptr [0x4c6de], ax
    X86_AT(c, 0xc9274u);
    wr16((c.sbase[3] + (uint32_t)(0x4C6DEu)), (c.r[0] & 0xFFFFu));
    // 0c927a  mov eax, 0x22
    X86_AT(c, 0xc927au);
    c.r[0] = 0x22u;
    // 0c927f  push eax
    X86_AT(c, 0xc927fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9280  push 0x4bfd8
    X86_AT(c, 0xc9280u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9285  call 0x2c5
    X86_AT(c, 0xc9285u);
    push32(c, 0xc928au); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xc928au);
    X86_TICK(c, 9);
    // 0c928a  push 0
    X86_AT(c, 0xc928au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c928c  call 0xc8f40
    X86_AT(c, 0xc928cu);
    push32(c, 0xc9291u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xc9291u);
    X86_TICK(c, 9);
    // 0c9291  push 0
    X86_AT(c, 0xc9291u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c9293  call 0xc8f54
    X86_AT(c, 0xc9293u);
    push32(c, 0xc9298u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xc9298u);
    X86_TICK(c, 7);
    // 0c9298  call 0xc8d18
    X86_AT(c, 0xc9298u);
    push32(c, 0xc929du); x86_call_known(c, 0xc8d18u, f_000c8d18); X86_RET(c, 0xc929du);
    X86_TICK(c, 9);
    // 0c929d  push 0xf
    X86_AT(c, 0xc929du);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0c929f  call 0xc8dd4
    X86_AT(c, 0xc929fu);
    push32(c, 0xc92a4u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc92a4u);
    X86_TICK(c, 9);
    // 0c92a4  push 0
    X86_AT(c, 0xc92a4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c92a6  call 0xc8dec
    X86_AT(c, 0xc92a6u);
    push32(c, 0xc92abu); x86_call_known(c, 0xc8decu, f_000c8dec); X86_RET(c, 0xc92abu);
    X86_TICK(c, 9);
    // 0c92ab  push 0xd
    X86_AT(c, 0xc92abu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0c92ad  call 0xc8e04
    X86_AT(c, 0xc92adu);
    push32(c, 0xc92b2u); x86_call_known(c, 0xc8e04u, f_000c8e04); X86_RET(c, 0xc92b2u);
    X86_TICK(c, 11);
    // 0c92b2  push 0
    X86_AT(c, 0xc92b2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c92b4  push 0x4bfd8
    X86_AT(c, 0xc92b4u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c92b9  call 0x41c
    X86_AT(c, 0xc92b9u);
    push32(c, 0xc92beu); x86_call_known(c, 0x41cu, f_0000041c); X86_RET(c, 0xc92beu);
    X86_TICK(c, 13);
    // 0c92be  add esp, 0x40
    X86_AT(c, 0xc92beu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0c92c1  push 0
    X86_AT(c, 0xc92c1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c92c3  push 0x4bfd8
    X86_AT(c, 0xc92c3u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c92c8  call 0x43e
    X86_AT(c, 0xc92c8u);
    push32(c, 0xc92cdu); x86_call_known(c, 0x43eu, f_0000043e); X86_RET(c, 0xc92cdu);
    X86_TICK(c, 11);
    // 0c92cd  push 0
    X86_AT(c, 0xc92cdu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0c92cf  push 0x4bfd8
    X86_AT(c, 0xc92cfu);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c92d4  call 0x460
    X86_AT(c, 0xc92d4u);
    push32(c, 0xc92d9u); x86_call_known(c, 0x460u, f_00000460); X86_RET(c, 0xc92d9u);
    X86_TICK(c, 4);
    // 0c92d9  sub eax, eax
    X86_AT(c, 0xc92d9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0c92db  add esp, 0x10
    X86_AT(c, 0xc92dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_c92de:
    X86_TICK(c, 10);
    // 0c92de  ret 
    X86_AT(c, 0xc92deu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9204u, "ran off the end of a function");
}
void f_000c92e0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0c92e0  push ebp
    X86_AT(c, 0xc92e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c92e1  mov ebp, esp
    X86_AT(c, 0xc92e1u);
    c.r[5] = c.r[4];
    // 0c92e3  movsx eax, word ptr [ebp + 8]
    X86_AT(c, 0xc92e3u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0c92e7  push eax
    X86_AT(c, 0xc92e7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c92e8  push 1
    X86_AT(c, 0xc92e8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0c92ea  push 0x4bfd8
    X86_AT(c, 0xc92eau);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c92ef  call 0x20e
    X86_AT(c, 0xc92efu);
    push32(c, 0xc92f4u); x86_call_known(c, 0x20eu, f_0000020e); X86_RET(c, 0xc92f4u);
    X86_TICK(c, 9);
    // 0c92f4  push 0x4bfd8
    X86_AT(c, 0xc92f4u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c92f9  call 0x518
    X86_AT(c, 0xc92f9u);
    push32(c, 0xc92feu); x86_call_known(c, 0x518u, f_00000518); X86_RET(c, 0xc92feu);
    X86_TICK(c, 16);
    // 0c92fe  leave 
    X86_AT(c, 0xc92feu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c92ff  ret 
    X86_AT(c, 0xc92ffu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc92e0u, "ran off the end of a function");
}
void f_000c9300(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0c9300  push ebp
    X86_AT(c, 0xc9300u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9301  mov ebp, esp
    X86_AT(c, 0xc9301u);
    c.r[5] = c.r[4];
    // 0c9303  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xc9303u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0c9306  call 0xc8dd4
    X86_AT(c, 0xc9306u);
    push32(c, 0xc930bu); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc930bu);
    X86_TICK(c, 25);
    // 0c930b  mov word ptr [0x4c5d8], 1
    X86_AT(c, 0xc930bu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5D8u)), 0x1u);
    // 0c9314  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xc9314u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0c9318  mov word ptr [0x4c5da], ax
    X86_AT(c, 0xc9318u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DAu)), (c.r[0] & 0xFFFFu));
    // 0c931e  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xc931eu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0c9322  mov word ptr [0x4c5dc], ax
    X86_AT(c, 0xc9322u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), (c.r[0] & 0xFFFFu));
    // 0c9328  push 0x4c5d8
    X86_AT(c, 0xc9328u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c932d  push 0x4bfd8
    X86_AT(c, 0xc932du);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c9332  call 0x7e5
    X86_AT(c, 0xc9332u);
    push32(c, 0xc9337u); x86_call_known(c, 0x7e5u, f_000007e5); X86_RET(c, 0xc9337u);
    X86_TICK(c, 16);
    // 0c9337  leave 
    X86_AT(c, 0xc9337u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9338  ret 
    X86_AT(c, 0xc9338u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9300u, "ran off the end of a function");
}
void f_000c9378(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0c9378  push ebp
    X86_AT(c, 0xc9378u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9379  mov ebp, esp
    X86_AT(c, 0xc9379u);
    c.r[5] = c.r[4];
    // 0c937b  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xc937bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0c937e  call 0xc8dd4
    X86_AT(c, 0xc937eu);
    push32(c, 0xc9383u); x86_call_known(c, 0xc8dd4u, f_000c8dd4); X86_RET(c, 0xc9383u);
    X86_TICK(c, 37);
    // 0c9383  mov word ptr [0x4c5d8], 2
    X86_AT(c, 0xc9383u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5D8u)), 0x2u);
    // 0c938c  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xc938cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0c9390  mov word ptr [0x4c5da], ax
    X86_AT(c, 0xc9390u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DAu)), (c.r[0] & 0xFFFFu));
    // 0c9396  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xc9396u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0c939a  mov word ptr [0x4c5dc], ax
    X86_AT(c, 0xc939au);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), (c.r[0] & 0xFFFFu));
    // 0c93a0  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xc93a0u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0c93a4  mov word ptr [0x4c5de], ax
    X86_AT(c, 0xc93a4u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), (c.r[0] & 0xFFFFu));
    // 0c93aa  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xc93aau);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0c93ae  mov word ptr [0x4c5e0], ax
    X86_AT(c, 0xc93aeu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E0u)), (c.r[0] & 0xFFFFu));
    // 0c93b4  push 0x4c5d8
    X86_AT(c, 0xc93b4u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c93b9  push 0x4bfd8
    X86_AT(c, 0xc93b9u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c93be  call 0x809
    X86_AT(c, 0xc93beu);
    push32(c, 0xc93c3u); x86_call_known(c, 0x809u, f_00000809); X86_RET(c, 0xc93c3u);
    X86_TICK(c, 16);
    // 0c93c3  leave 
    X86_AT(c, 0xc93c3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c93c4  ret 
    X86_AT(c, 0xc93c4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9378u, "ran off the end of a function");
}
void f_000c93c8(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0c93c8  push ebp
    X86_AT(c, 0xc93c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c93c9  mov ebp, esp
    X86_AT(c, 0xc93c9u);
    c.r[5] = c.r[4];
    // 0c93cb  push dword ptr [ebp + 0x18]
    X86_AT(c, 0xc93cbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))); push32(c, v); }
    // 0c93ce  call 0xc8e04
    X86_AT(c, 0xc93ceu);
    push32(c, 0xc93d3u); x86_call_known(c, 0xc8e04u, f_000c8e04); X86_RET(c, 0xc93d3u);
    X86_TICK(c, 20);
    // 0c93d3  mov ax, word ptr [0x4c6de]
    X86_AT(c, 0xc93d3u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4C6DEu))));
    // 0c93d9  or al, 0x20
    X86_AT(c, 0xc93d9u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 0c93db  movsx eax, ax
    X86_AT(c, 0xc93dbu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0c93de  push eax
    X86_AT(c, 0xc93deu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c93df  push 0x4bfd8
    X86_AT(c, 0xc93dfu);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c93e4  call 0x2c5
    X86_AT(c, 0xc93e4u);
    push32(c, 0xc93e9u); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xc93e9u);
    X86_TICK(c, 35);
    // 0c93e9  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xc93e9u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0c93ed  mov word ptr [0x4c5d8], ax
    X86_AT(c, 0xc93edu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5D8u)), (c.r[0] & 0xFFFFu));
    // 0c93f3  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xc93f3u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0c93f7  mov word ptr [0x4c5da], ax
    X86_AT(c, 0xc93f7u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DAu)), (c.r[0] & 0xFFFFu));
    // 0c93fd  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xc93fdu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0c9401  mov word ptr [0x4c5dc], ax
    X86_AT(c, 0xc9401u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), (c.r[0] & 0xFFFFu));
    // 0c9407  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xc9407u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0c940b  mov word ptr [0x4c5de], ax
    X86_AT(c, 0xc940bu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), (c.r[0] & 0xFFFFu));
    // 0c9411  push 0x4c5d8
    X86_AT(c, 0xc9411u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c9416  push 0x4bfd8
    X86_AT(c, 0xc9416u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c941b  call 0x8bd
    X86_AT(c, 0xc941bu);
    push32(c, 0xc9420u); x86_call_known(c, 0x8bdu, f_000008bd); X86_RET(c, 0xc9420u);
    X86_TICK(c, 17);
    // 0c9420  movsx eax, word ptr [0x4c6de]
    X86_AT(c, 0xc9420u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4C6DEu)));
    // 0c9427  push eax
    X86_AT(c, 0xc9427u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9428  push 0x4bfd8
    X86_AT(c, 0xc9428u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c942d  call 0x2c5
    X86_AT(c, 0xc942du);
    push32(c, 0xc9432u); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xc9432u);
    X86_TICK(c, 16);
    // 0c9432  leave 
    X86_AT(c, 0xc9432u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c9433  ret 
    X86_AT(c, 0xc9433u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc93c8u, "ran off the end of a function");
}
void f_000c9468(X86Cpu& c) {
    X86_TICK(c, 41);
    // 0c9468  push ebp
    X86_AT(c, 0xc9468u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9469  mov ebp, esp
    X86_AT(c, 0xc9469u);
    c.r[5] = c.r[4];
    // 0c946b  mov word ptr [0x4c5d8], 2
    X86_AT(c, 0xc946bu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5D8u)), 0x2u);
    // 0c9474  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xc9474u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0c9478  mov word ptr [0x4c5da], ax
    X86_AT(c, 0xc9478u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DAu)), (c.r[0] & 0xFFFFu));
    // 0c947e  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xc947eu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0c9482  mov word ptr [0x4c5dc], ax
    X86_AT(c, 0xc9482u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), (c.r[0] & 0xFFFFu));
    // 0c9488  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xc9488u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0c948c  mov word ptr [0x4c5de], ax
    X86_AT(c, 0xc948cu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), (c.r[0] & 0xFFFFu));
    // 0c9492  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xc9492u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0c9496  mov word ptr [0x4c5e0], ax
    X86_AT(c, 0xc9496u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5E0u)), (c.r[0] & 0xFFFFu));
    // 0c949c  push 0x4c5d8
    X86_AT(c, 0xc949cu);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c94a1  push 0x4bfd8
    X86_AT(c, 0xc94a1u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c94a6  call 0x809
    X86_AT(c, 0xc94a6u);
    push32(c, 0xc94abu); x86_call_known(c, 0x809u, f_00000809); X86_RET(c, 0xc94abu);
    X86_TICK(c, 16);
    // 0c94ab  leave 
    X86_AT(c, 0xc94abu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c94ac  ret 
    X86_AT(c, 0xc94acu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9468u, "ran off the end of a function");
}
void f_000c9588(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0c9588  push ebp
    X86_AT(c, 0xc9588u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0c9589  mov ebp, esp
    X86_AT(c, 0xc9589u);
    c.r[5] = c.r[4];
    // 0c958b  mov ax, word ptr [0x4c6de]
    X86_AT(c, 0xc958bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4C6DEu))));
    // 0c9591  or al, 0x20
    X86_AT(c, 0xc9591u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0x20u, 1)); }
    // 0c9593  movsx eax, ax
    X86_AT(c, 0xc9593u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0c9596  push eax
    X86_AT(c, 0xc9596u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c9597  push 0x4bfd8
    X86_AT(c, 0xc9597u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c959c  call 0x2c5
    X86_AT(c, 0xc959cu);
    push32(c, 0xc95a1u); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xc95a1u);
    X86_TICK(c, 35);
    // 0c95a1  mov ax, word ptr [ebp + 8]
    X86_AT(c, 0xc95a1u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0c95a5  mov word ptr [0x4c5d8], ax
    X86_AT(c, 0xc95a5u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5D8u)), (c.r[0] & 0xFFFFu));
    // 0c95ab  mov ax, word ptr [ebp + 0xc]
    X86_AT(c, 0xc95abu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0c95af  mov word ptr [0x4c5da], ax
    X86_AT(c, 0xc95afu);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DAu)), (c.r[0] & 0xFFFFu));
    // 0c95b5  mov ax, word ptr [ebp + 0x10]
    X86_AT(c, 0xc95b5u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0c95b9  mov word ptr [0x4c5dc], ax
    X86_AT(c, 0xc95b9u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DCu)), (c.r[0] & 0xFFFFu));
    // 0c95bf  mov ax, word ptr [ebp + 0x14]
    X86_AT(c, 0xc95bfu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0c95c3  mov word ptr [0x4c5de], ax
    X86_AT(c, 0xc95c3u);
    wr16((c.sbase[3] + (uint32_t)(0x4C5DEu)), (c.r[0] & 0xFFFFu));
    // 0c95c9  push 0x4c5d8
    X86_AT(c, 0xc95c9u);
    { uint32_t v = 0x4C5D8u; push32(c, v); }
    // 0c95ce  push 0x4bfd8
    X86_AT(c, 0xc95ceu);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c95d3  call 0x8bd
    X86_AT(c, 0xc95d3u);
    push32(c, 0xc95d8u); x86_call_known(c, 0x8bdu, f_000008bd); X86_RET(c, 0xc95d8u);
    X86_TICK(c, 17);
    // 0c95d8  movsx eax, word ptr [0x4c6de]
    X86_AT(c, 0xc95d8u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(0x4C6DEu)));
    // 0c95df  push eax
    X86_AT(c, 0xc95dfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0c95e0  push 0x4bfd8
    X86_AT(c, 0xc95e0u);
    { uint32_t v = 0x4BFD8u; push32(c, v); }
    // 0c95e5  call 0x2c5
    X86_AT(c, 0xc95e5u);
    push32(c, 0xc95eau); x86_call_known(c, 0x2c5u, f_000002c5); X86_RET(c, 0xc95eau);
    X86_TICK(c, 16);
    // 0c95ea  leave 
    X86_AT(c, 0xc95eau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0c95eb  ret 
    X86_AT(c, 0xc95ebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xc9588u, "ran off the end of a function");
}
}

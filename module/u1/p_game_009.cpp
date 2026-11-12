#include "p_game_funcs.h"
namespace p_game {
void f_000d29d0(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d29d0  push ebp
    X86_AT(c, 0xd29d0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d29d1  mov ebp, esp
    X86_AT(c, 0xd29d1u);
    c.r[5] = c.r[4];
    // 0d29d3  sub esp, 8
    X86_AT(c, 0xd29d3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0d29d6  push esi
    X86_AT(c, 0xd29d6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d29d7  push edi
    X86_AT(c, 0xd29d7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d29d8  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd29d8u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d29db  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd29dbu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d29de  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0xd29deu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 0d29e5  cmp edi, 0x8d
    X86_AT(c, 0xd29e5u);
    (void)x86_sub(c, c.r[7], 0x8Du, 0, 4);
    // 0d29eb  je 0xd2a05
    X86_AT(c, 0xd29ebu);
    if (x86_cc(c, 4)) { goto L_d2a05; }
    X86_TICK(c, 7);
    // 0d29ed  cmp edi, 0x8e
    X86_AT(c, 0xd29edu);
    (void)x86_sub(c, c.r[7], 0x8Eu, 0, 4);
    // 0d29f3  je 0xd2a05
    X86_AT(c, 0xd29f3u);
    if (x86_cc(c, 4)) { goto L_d2a05; }
    X86_TICK(c, 7);
    // 0d29f5  cmp edi, 0x91
    X86_AT(c, 0xd29f5u);
    (void)x86_sub(c, c.r[7], 0x91u, 0, 4);
    // 0d29fb  je 0xd2a05
    X86_AT(c, 0xd29fbu);
    if (x86_cc(c, 4)) { goto L_d2a05; }
    X86_TICK(c, 7);
    // 0d29fd  cmp edi, 0x99
    X86_AT(c, 0xd29fdu);
    (void)x86_sub(c, c.r[7], 0x99u, 0, 4);
    // 0d2a03  jne 0xd2a0c
    X86_AT(c, 0xd2a03u);
    if (x86_cc(c, 5)) { goto L_d2a0c; }
L_d2a05:
    X86_TICK(c, 2);
    // 0d2a05  mov dword ptr [ebp - 8], 3
    X86_AT(c, 0xd2a05u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x3u);
L_d2a0c:
    X86_TICK(c, 11);
    // 0d2a0c  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd2a0cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d2a0f  and eax, eax
    X86_AT(c, 0xd2a0fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d2a11  jge 0xd2a18
    X86_AT(c, 0xd2a11u);
    if (x86_cc(c, 13)) { goto L_d2a18; }
    X86_TICK(c, 6);
    // 0d2a13  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd2a13u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d2a16  neg eax
    X86_AT(c, 0xd2a16u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_d2a18:
    X86_TICK(c, 9);
    // 0d2a18  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd2a18u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d2a1b  and esi, esi
    X86_AT(c, 0xd2a1bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d2a1d  jl 0xd2a23
    X86_AT(c, 0xd2a1du);
    if (x86_cc(c, 12)) { goto L_d2a23; }
    X86_TICK(c, 9);
    // 0d2a1f  mov eax, esi
    X86_AT(c, 0xd2a1fu);
    c.r[0] = c.r[6];
    // 0d2a21  jmp 0xd2a27
    X86_AT(c, 0xd2a21u);
    goto L_d2a27;
L_d2a23:
    X86_TICK(c, 4);
    // 0d2a23  mov eax, esi
    X86_AT(c, 0xd2a23u);
    c.r[0] = c.r[6];
    // 0d2a25  neg eax
    X86_AT(c, 0xd2a25u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_d2a27:
    X86_TICK(c, 14);
    // 0d2a27  xchg ecx, eax
    X86_AT(c, 0xd2a27u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0d2a28  cmp ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xd2a28u);
    (void)x86_sub(c, c.r[1], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0d2a2b  jl 0xd2a31
    X86_AT(c, 0xd2a2bu);
    if (x86_cc(c, 12)) { goto L_d2a31; }
    X86_TICK(c, 9);
    // 0d2a2d  mov eax, ecx
    X86_AT(c, 0xd2a2du);
    c.r[0] = c.r[1];
    // 0d2a2f  jmp 0xd2a34
    X86_AT(c, 0xd2a2fu);
    goto L_d2a34;
L_d2a31:
    X86_TICK(c, 4);
    // 0d2a31  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd2a31u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_d2a34:
    X86_TICK(c, 11);
    // 0d2a34  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xd2a34u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d2a37  cmp eax, edx
    X86_AT(c, 0xd2a37u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0d2a39  jg 0xd2a3e
    X86_AT(c, 0xd2a39u);
    if (x86_cc(c, 15)) { goto L_d2a3e; }
    X86_TICK(c, 10);
    // 0d2a3b  xchg edx, eax
    X86_AT(c, 0xd2a3bu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0d2a3c  jmp 0xd2a40
    X86_AT(c, 0xd2a3cu);
    goto L_d2a40;
L_d2a3e:
    X86_TICK(c, 2);
    // 0d2a3e  sub eax, eax
    X86_AT(c, 0xd2a3eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_d2a40:
    X86_TICK(c, 24);
    // 0d2a40  pop edi
    X86_AT(c, 0xd2a40u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2a41  pop esi
    X86_AT(c, 0xd2a41u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2a42  leave 
    X86_AT(c, 0xd2a42u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d2a43  ret 
    X86_AT(c, 0xd2a43u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd29d0u, "ran off the end of a function");
}
void f_000d2a44(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0d2a44  push ebp
    X86_AT(c, 0xd2a44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d2a45  mov ebp, esp
    X86_AT(c, 0xd2a45u);
    c.r[5] = c.r[4];
    // 0d2a47  sub esp, 0x20
    X86_AT(c, 0xd2a47u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x20u, 0, 4); }
    // 0d2a4a  push ebx
    X86_AT(c, 0xd2a4au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2a4b  push esi
    X86_AT(c, 0xd2a4bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2a4c  push edi
    X86_AT(c, 0xd2a4cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2a4d  sub eax, eax
    X86_AT(c, 0xd2a4du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d2a4f  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xd2a4fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0d2a52  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd2a52u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d2a55  mov ebx, 1
    X86_AT(c, 0xd2a55u);
    c.r[3] = 0x1u;
    // 0d2a5a  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd2a5au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d2a5d  cmp eax, edx
    X86_AT(c, 0xd2a5du);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0d2a5f  je 0xd2a72
    X86_AT(c, 0xd2a5fu);
    if (x86_cc(c, 4)) { goto L_d2a72; }
    X86_TICK(c, 7);
    // 0d2a61  cmp eax, edx
    X86_AT(c, 0xd2a61u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0d2a63  jge 0xd2a6f
    X86_AT(c, 0xd2a63u);
    if (x86_cc(c, 13)) { goto L_d2a6f; }
    X86_TICK(c, 11);
    // 0d2a65  mov eax, 0xffffffff
    X86_AT(c, 0xd2a65u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d2a6a  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xd2a6au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0d2a6d  jmp 0xd2a72
    X86_AT(c, 0xd2a6du);
    goto L_d2a72;
L_d2a6f:
    X86_TICK(c, 6);
    // 0d2a6f  inc dword ptr [ebp - 0x10]
    X86_AT(c, 0xd2a6fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_d2a72:
    X86_TICK(c, 11);
    // 0d2a72  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd2a72u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d2a75  and eax, eax
    X86_AT(c, 0xd2a75u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d2a77  je 0xd2a84
    X86_AT(c, 0xd2a77u);
    if (x86_cc(c, 4)) { goto L_d2a84; }
    X86_TICK(c, 7);
    // 0d2a79  dec eax
    X86_AT(c, 0xd2a79u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0d2a7a  jl 0xd2a81
    X86_AT(c, 0xd2a7au);
    if (x86_cc(c, 12)) { goto L_d2a81; }
    X86_TICK(c, 13);
    // 0d2a7c  dec dword ptr [ebp - 0x14]
    X86_AT(c, 0xd2a7cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d2a7f  jmp 0xd2a84
    X86_AT(c, 0xd2a7fu);
    goto L_d2a84;
L_d2a81:
    X86_TICK(c, 6);
    // 0d2a81  inc dword ptr [ebp - 0x14]
    X86_AT(c, 0xd2a81u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_d2a84:
    X86_TICK(c, 20);
    // 0d2a84  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd2a84u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d2a87  lea eax, [eax*8]
    X86_AT(c, 0xd2a87u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0d2a8e  lea eax, [eax + eax*4]
    X86_AT(c, 0xd2a8eu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d2a91  push dword ptr [eax + 0xbefcc]
    X86_AT(c, 0xd2a91u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFCCu))); push32(c, v); }
    // 0d2a97  call 0xcc898
    X86_AT(c, 0xd2a97u);
    push32(c, 0xd2a9cu); x86_call_known(c, 0xcc898u, f_000cc898); X86_RET(c, 0xd2a9cu);
    X86_TICK(c, 11);
    // 0d2a9c  push eax
    X86_AT(c, 0xd2a9cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2a9d  push 7
    X86_AT(c, 0xd2a9du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2a9f  call 0xc8cdc
    X86_AT(c, 0xd2a9fu);
    push32(c, 0xd2aa4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd2aa4u);
    X86_TICK(c, 11);
    // 0d2aa4  push 0xf
    X86_AT(c, 0xd2aa4u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d2aa6  push 0x88d8
    X86_AT(c, 0xd2aa6u);
    { uint32_t v = 0x88D8u; push32(c, v); }
    // 0d2aab  call 0xcc830
    X86_AT(c, 0xd2aabu);
    push32(c, 0xd2ab0u); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd2ab0u);
    X86_TICK(c, 2);
    // 0d2ab0  add esp, 0x14
    X86_AT(c, 0xd2ab0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d2ab3:
    X86_TICK(c, 89);
    // 0d2ab3  mov eax, ebx
    X86_AT(c, 0xd2ab3u);
    c.r[0] = c.r[3];
    // 0d2ab5  imul eax, dword ptr [ebp - 0x10]
    X86_AT(c, 0xd2ab5u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 4);
    // 0d2ab9  xchg edi, eax
    X86_AT(c, 0xd2ab9u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d2aba  add edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd2abau);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0d2abd  mov eax, ebx
    X86_AT(c, 0xd2abdu);
    c.r[0] = c.r[3];
    // 0d2abf  imul eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd2abfu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 4);
    // 0d2ac3  xchg esi, eax
    X86_AT(c, 0xd2ac3u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d2ac4  add esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd2ac4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0d2ac7  push 0xffffffff
    X86_AT(c, 0xd2ac7u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d2ac9  push 0x45
    X86_AT(c, 0xd2ac9u);
    { uint32_t v = 0x45u; push32(c, v); }
    // 0d2acb  mov eax, 5
    X86_AT(c, 0xd2acbu);
    c.r[0] = 0x5u;
    // 0d2ad0  sub eax, esi
    X86_AT(c, 0xd2ad0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d2ad2  push eax
    X86_AT(c, 0xd2ad2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2ad3  mov eax, 5
    X86_AT(c, 0xd2ad3u);
    c.r[0] = 0x5u;
    // 0d2ad8  sub eax, edi
    X86_AT(c, 0xd2ad8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d2ada  push eax
    X86_AT(c, 0xd2adau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2adb  call 0xc6adc
    X86_AT(c, 0xd2adbu);
    push32(c, 0xd2ae0u); x86_call_known(c, 0xc6adcu, f_000c6adc); X86_RET(c, 0xd2ae0u);
    X86_TICK(c, 21);
    // 0d2ae0  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xd2ae0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0d2ae3  push 2
    X86_AT(c, 0xd2ae3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d2ae5  push dword ptr [0xb033e]
    X86_AT(c, 0xd2ae5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d2aeb  push dword ptr [0xb033a]
    X86_AT(c, 0xd2aebu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d2af1  call 0xcba8c
    X86_AT(c, 0xd2af1u);
    push32(c, 0xd2af6u); x86_call_known(c, 0xcba8cu, f_000cba8c); X86_RET(c, 0xd2af6u);
    X86_TICK(c, 9);
    // 0d2af6  add esp, 0x1c
    X86_AT(c, 0xd2af6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d2af9  cmp ebx, 1
    X86_AT(c, 0xd2af9u);
    (void)x86_sub(c, c.r[3], 0x1u, 0, 4);
    // 0d2afc  jne 0xd2b07
    X86_AT(c, 0xd2afcu);
    if (x86_cc(c, 5)) { goto L_d2b07; }
    X86_TICK(c, 9);
    // 0d2afe  push 7
    X86_AT(c, 0xd2afeu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2b00  call 0xc5ca4
    X86_AT(c, 0xd2b00u);
    push32(c, 0xd2b05u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd2b05u);
    X86_TICK(c, 7);
    // 0d2b05  jmp 0xd2b0e
    X86_AT(c, 0xd2b05u);
    goto L_d2b0e;
L_d2b07:
    X86_TICK(c, 9);
    // 0d2b07  push 2
    X86_AT(c, 0xd2b07u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d2b09  call 0xd6660
    X86_AT(c, 0xd2b09u);
    push32(c, 0xd2b0eu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd2b0eu);
L_d2b0e:
    X86_TICK(c, 27);
    // 0d2b0e  add esp, 4
    X86_AT(c, 0xd2b0eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d2b11  push 0
    X86_AT(c, 0xd2b11u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d2b13  mov eax, dword ptr [0xb033e]
    X86_AT(c, 0xd2b13u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0d2b18  sub eax, esi
    X86_AT(c, 0xd2b18u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d2b1a  push eax
    X86_AT(c, 0xd2b1au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2b1b  mov eax, dword ptr [0xb033a]
    X86_AT(c, 0xd2b1bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0d2b20  sub eax, edi
    X86_AT(c, 0xd2b20u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d2b22  push eax
    X86_AT(c, 0xd2b22u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2b23  call 0xcc538
    X86_AT(c, 0xd2b23u);
    push32(c, 0xd2b28u); x86_call_known(c, 0xcc538u, f_000cc538); X86_RET(c, 0xd2b28u);
    X86_TICK(c, 14);
    // 0d2b28  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd2b28u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d2b2b  push dword ptr [ebp - 0x18]
    X86_AT(c, 0xd2b2bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 0d2b2e  call 0xc6c3c
    X86_AT(c, 0xd2b2eu);
    push32(c, 0xd2b33u); x86_call_known(c, 0xc6c3cu, f_000c6c3c); X86_RET(c, 0xd2b33u);
    X86_TICK(c, 15);
    // 0d2b33  inc ebx
    X86_AT(c, 0xd2b33u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0d2b34  add esp, 0x10
    X86_AT(c, 0xd2b34u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d2b37  cmp ebx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xd2b37u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0, 4);
    // 0d2b3a  jg 0xd2b52
    X86_AT(c, 0xd2b3au);
    if (x86_cc(c, 15)) { goto L_d2b52; }
    X86_TICK(c, 12);
    // 0d2b3c  cmp dword ptr [ebp - 0xc], 5
    X86_AT(c, 0xd2b3cu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x5u, 0, 4);
    // 0d2b40  je 0xd2b52
    X86_AT(c, 0xd2b40u);
    if (x86_cc(c, 4)) { goto L_d2b52; }
    X86_TICK(c, 7);
    // 0d2b42  and edi, edi
    X86_AT(c, 0xd2b42u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d2b44  jne 0xd2ab3
    X86_AT(c, 0xd2b44u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd2ab3u); goto L_d2ab3; }
    X86_TICK(c, 7);
    // 0d2b4a  and esi, esi
    X86_AT(c, 0xd2b4au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d2b4c  jne 0xd2ab3
    X86_AT(c, 0xd2b4cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd2ab3u); goto L_d2ab3; }
L_d2b52:
    X86_TICK(c, 11);
    // 0d2b52  push 0xff
    X86_AT(c, 0xd2b52u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0d2b57  push 1
    X86_AT(c, 0xd2b57u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2b59  call 0xc5df0
    X86_AT(c, 0xd2b59u);
    push32(c, 0xd2b5eu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd2b5eu);
    X86_TICK(c, 56);
    // 0d2b5e  mov edx, dword ptr [0xb032e]
    X86_AT(c, 0xd2b5eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB032Eu)));
    // 0d2b64  shl edx, 3
    X86_AT(c, 0xd2b64u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 4, w); if (w) c.r[2] = r; }
    // 0d2b67  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xd2b67u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0d2b6a  mov eax, dword ptr [0xb030a]
    X86_AT(c, 0xd2b6au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB030Au)));
    // 0d2b6f  mov dword ptr [ebp - 0x20], edx
    X86_AT(c, 0xd2b6fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[2]);
    // 0d2b72  cdq 
    X86_AT(c, 0xd2b72u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d2b73  sub eax, edx
    X86_AT(c, 0xd2b73u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d2b75  sar eax, 1
    X86_AT(c, 0xd2b75u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d2b77  mov edx, 0xc8
    X86_AT(c, 0xd2b77u);
    c.r[2] = 0xC8u;
    // 0d2b7c  sub edx, eax
    X86_AT(c, 0xd2b7cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d2b7e  sub edx, dword ptr [ebp - 0x20]
    X86_AT(c, 0xd2b7eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0, 4); }
    // 0d2b81  cmp edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xd2b81u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0, 4);
    // 0d2b84  setg al
    X86_AT(c, 0xd2b84u);
    s8(c, 0, x86_cc(c, 15) ? 1u : 0u);
    // 0d2b87  movzx eax, al
    X86_AT(c, 0xd2b87u);
    c.r[0] = g8(c, 0);
    // 0d2b8a  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd2b8au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d2b8d  add esp, 8
    X86_AT(c, 0xd2b8du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d2b90  and edi, edi
    X86_AT(c, 0xd2b90u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d2b92  jne 0xd2b9c
    X86_AT(c, 0xd2b92u);
    if (x86_cc(c, 5)) { goto L_d2b9c; }
    X86_TICK(c, 7);
    // 0d2b94  and esi, esi
    X86_AT(c, 0xd2b94u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d2b96  jne 0xd2b9c
    X86_AT(c, 0xd2b96u);
    if (x86_cc(c, 5)) { goto L_d2b9c; }
    X86_TICK(c, 7);
    // 0d2b98  and eax, eax
    X86_AT(c, 0xd2b98u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d2b9a  jne 0xd2bae
    X86_AT(c, 0xd2b9au);
    if (x86_cc(c, 5)) { goto L_d2bae; }
L_d2b9c:
    X86_TICK(c, 9);
    // 0d2b9c  push 0x88f8
    X86_AT(c, 0xd2b9cu);
    { uint32_t v = 0x88F8u; push32(c, v); }
    // 0d2ba1  call 0xcc7bc
    X86_AT(c, 0xd2ba1u);
    push32(c, 0xd2ba6u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd2ba6u);
    X86_TICK(c, 9);
    // 0d2ba6  add esp, 4
    X86_AT(c, 0xd2ba6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d2ba9  jmp 0xd2c3d
    X86_AT(c, 0xd2ba9u);
    goto L_d2c3d;
L_d2bae:
    X86_TICK(c, 15);
    // 0d2bae  push 0xffffffff
    X86_AT(c, 0xd2baeu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d2bb0  push 0x47
    X86_AT(c, 0xd2bb0u);
    { uint32_t v = 0x47u; push32(c, v); }
    // 0d2bb2  push 5
    X86_AT(c, 0xd2bb2u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d2bb4  push 5
    X86_AT(c, 0xd2bb4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d2bb6  call 0xc6adc
    X86_AT(c, 0xd2bb6u);
    push32(c, 0xd2bbbu); x86_call_known(c, 0xc6adcu, f_000c6adc); X86_RET(c, 0xd2bbbu);
    X86_TICK(c, 21);
    // 0d2bbb  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xd2bbbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0d2bbe  push 2
    X86_AT(c, 0xd2bbeu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d2bc0  push dword ptr [0xb033e]
    X86_AT(c, 0xd2bc0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d2bc6  push dword ptr [0xb033a]
    X86_AT(c, 0xd2bc6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d2bcc  call 0xcba8c
    X86_AT(c, 0xd2bccu);
    push32(c, 0xd2bd1u); x86_call_known(c, 0xcba8cu, f_000cba8c); X86_RET(c, 0xd2bd1u);
    X86_TICK(c, 27);
    // 0d2bd1  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd2bd1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d2bd4  lea eax, [eax*8]
    X86_AT(c, 0xd2bd4u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0d2bdb  mov eax, dword ptr [eax + eax*4 + 0xbefcc]
    X86_AT(c, 0xd2bdbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[0] * 4 + 0xBEFCCu)));
    // 0d2be2  mov eax, dword ptr [eax*4 + 0xa9f14]
    X86_AT(c, 0xd2be2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA9F14u)));
    // 0d2be9  lea eax, [eax + eax*1 + 1]
    X86_AT(c, 0xd2be9u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] + 0x1u);
    // 0d2bed  push eax
    X86_AT(c, 0xd2bedu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2bee  push 1
    X86_AT(c, 0xd2beeu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2bf0  call 0xc5df0
    X86_AT(c, 0xd2bf0u);
    push32(c, 0xd2bf5u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd2bf5u);
    X86_TICK(c, 11);
    // 0d2bf5  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd2bf5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d2bf8  push 8
    X86_AT(c, 0xd2bf8u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d2bfa  call 0xc5ca4
    X86_AT(c, 0xd2bfau);
    push32(c, 0xd2bffu); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd2bffu);
    X86_TICK(c, 11);
    // 0d2bff  push 0xe
    X86_AT(c, 0xd2bffu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d2c01  push 0x8910
    X86_AT(c, 0xd2c01u);
    { uint32_t v = 0x8910u; push32(c, v); }
    // 0d2c06  call 0xcc830
    X86_AT(c, 0xd2c06u);
    push32(c, 0xd2c0bu); x86_call_known(c, 0xcc830u, f_000cc830); X86_RET(c, 0xd2c0bu);
    X86_TICK(c, 16);
    // 0d2c0b  push 3
    X86_AT(c, 0xd2c0bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d2c0d  push dword ptr [ebp - 4]
    X86_AT(c, 0xd2c0du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d2c10  push 7
    X86_AT(c, 0xd2c10u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2c12  call 0xc8cb8
    X86_AT(c, 0xd2c12u);
    push32(c, 0xd2c17u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd2c17u);
    X86_TICK(c, 11);
    // 0d2c17  add esp, 0x3c
    X86_AT(c, 0xd2c17u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d2c1a  push 0x8924
    X86_AT(c, 0xd2c1au);
    { uint32_t v = 0x8924u; push32(c, v); }
    // 0d2c1f  call 0xcc7bc
    X86_AT(c, 0xd2c1fu);
    push32(c, 0xd2c24u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd2c24u);
    X86_TICK(c, 12);
    // 0d2c24  push dword ptr [ebp - 0x18]
    X86_AT(c, 0xd2c24u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))); push32(c, v); }
    // 0d2c27  call 0xc6c3c
    X86_AT(c, 0xd2c27u);
    push32(c, 0xd2c2cu); x86_call_known(c, 0xc6c3cu, f_000c6c3c); X86_RET(c, 0xd2c2cu);
    X86_TICK(c, 18);
    // 0d2c2c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd2c2cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d2c2f  sub dword ptr [0xb02fe], eax
    X86_AT(c, 0xd2c2fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB02FEu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0d2c35  call 0xcc628
    X86_AT(c, 0xd2c35u);
    push32(c, 0xd2c3au); x86_call_known(c, 0xcc628u, f_000cc628); X86_RET(c, 0xd2c3au);
    X86_TICK(c, 2);
    // 0d2c3a  add esp, 8
    X86_AT(c, 0xd2c3au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d2c3d:
    X86_TICK(c, 28);
    // 0d2c3d  pop edi
    X86_AT(c, 0xd2c3du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2c3e  pop esi
    X86_AT(c, 0xd2c3eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2c3f  pop ebx
    X86_AT(c, 0xd2c3fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d2c40  leave 
    X86_AT(c, 0xd2c40u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d2c41  ret 
    X86_AT(c, 0xd2c41u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2a44u, "ran off the end of a function");
}
void f_000d2c44(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0d2c44  push ebp
    X86_AT(c, 0xd2c44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d2c45  mov ebp, esp
    X86_AT(c, 0xd2c45u);
    c.r[5] = c.r[4];
    // 0d2c47  push ebx
    X86_AT(c, 0xd2c47u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2c48  push esi
    X86_AT(c, 0xd2c48u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2c49  push edi
    X86_AT(c, 0xd2c49u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2c4a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd2c4au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d2c4d  mov eax, 5
    X86_AT(c, 0xd2c4du);
    c.r[0] = 0x5u;
    // 0d2c52  sub eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd2c52u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0d2c55  push eax
    X86_AT(c, 0xd2c55u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2c56  call 0xcc5ac
    X86_AT(c, 0xd2c56u);
    push32(c, 0xd2c5bu); x86_call_known(c, 0xcc5acu, f_000cc5ac); X86_RET(c, 0xd2c5bu);
    X86_TICK(c, 20);
    // 0d2c5b  xchg esi, eax
    X86_AT(c, 0xd2c5bu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d2c5c  mov eax, 5
    X86_AT(c, 0xd2c5cu);
    c.r[0] = 0x5u;
    // 0d2c61  sub eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd2c61u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0d2c64  push eax
    X86_AT(c, 0xd2c64u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2c65  call 0xcc5d8
    X86_AT(c, 0xd2c65u);
    push32(c, 0xd2c6au); x86_call_known(c, 0xcc5d8u, f_000cc5d8); X86_RET(c, 0xd2c6au);
    X86_TICK(c, 14);
    // 0d2c6a  xchg ebx, eax
    X86_AT(c, 0xd2c6au);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d2c6b  push ebx
    X86_AT(c, 0xd2c6bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2c6c  push esi
    X86_AT(c, 0xd2c6cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2c6d  call 0xcc518
    X86_AT(c, 0xd2c6du);
    push32(c, 0xd2c72u); x86_call_known(c, 0xcc518u, f_000cc518); X86_RET(c, 0xd2c72u);
    X86_TICK(c, 43);
    // 0d2c72  lea edx, [edi*8]
    X86_AT(c, 0xd2c72u);
    c.r[2] = (uint32_t)(c.r[7] * 8);
    // 0d2c79  lea edx, [edx + edx*4]
    X86_AT(c, 0xd2c79u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0d2c7c  movzx eax, al
    X86_AT(c, 0xd2c7cu);
    c.r[0] = g8(c, 0);
    // 0d2c7f  mov dword ptr [edx + 0xbefd0], eax
    X86_AT(c, 0xd2c7fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xBEFD0u)), c.r[0]);
    // 0d2c85  mov dword ptr [edx + 0xbefd4], esi
    X86_AT(c, 0xd2c85u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xBEFD4u)), c.r[6]);
    // 0d2c8b  mov dword ptr [edx + 0xbefd8], ebx
    X86_AT(c, 0xd2c8bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xBEFD8u)), c.r[3]);
    // 0d2c91  add esp, 0x10
    X86_AT(c, 0xd2c91u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d2c94  pop edi
    X86_AT(c, 0xd2c94u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2c95  pop esi
    X86_AT(c, 0xd2c95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2c96  pop ebx
    X86_AT(c, 0xd2c96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d2c97  leave 
    X86_AT(c, 0xd2c97u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d2c98  ret 
    X86_AT(c, 0xd2c98u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2c44u, "ran off the end of a function");
}
void f_000d2c9c(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0d2c9c  push ebp
    X86_AT(c, 0xd2c9cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d2c9d  mov ebp, esp
    X86_AT(c, 0xd2c9du);
    c.r[5] = c.r[4];
    // 0d2c9f  push eax
    X86_AT(c, 0xd2c9fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2ca0  push ebx
    X86_AT(c, 0xd2ca0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2ca1  push esi
    X86_AT(c, 0xd2ca1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2ca2  push edi
    X86_AT(c, 0xd2ca2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2ca3  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd2ca3u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d2ca6  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd2ca6u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d2ca9  sub ebx, ebx
    X86_AT(c, 0xd2ca9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0d2cab  cmp ebx, esi
    X86_AT(c, 0xd2cabu);
    (void)x86_sub(c, c.r[3], c.r[6], 0, 4);
    // 0d2cad  je 0xd2cbf
    X86_AT(c, 0xd2cadu);
    if (x86_cc(c, 4)) { goto L_d2cbf; }
    X86_TICK(c, 7);
    // 0d2caf  and esi, esi
    X86_AT(c, 0xd2cafu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d2cb1  jle 0xd2cba
    X86_AT(c, 0xd2cb1u);
    if (x86_cc(c, 14)) { goto L_d2cba; }
    X86_TICK(c, 9);
    // 0d2cb3  mov ebx, 0xffffffff
    X86_AT(c, 0xd2cb3u);
    c.r[3] = 0xFFFFFFFFu;
    // 0d2cb8  jmp 0xd2cbf
    X86_AT(c, 0xd2cb8u);
    goto L_d2cbf;
L_d2cba:
    X86_TICK(c, 2);
    // 0d2cba  mov ebx, 1
    X86_AT(c, 0xd2cbau);
    c.r[3] = 0x1u;
L_d2cbf:
    X86_TICK(c, 7);
    // 0d2cbf  and ebx, ebx
    X86_AT(c, 0xd2cbfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d2cc1  je 0xd2cf0
    X86_AT(c, 0xd2cc1u);
    if (x86_cc(c, 4)) { goto L_d2cf0; }
    X86_TICK(c, 20);
    // 0d2cc3  lea eax, [esi + ebx*1]
    X86_AT(c, 0xd2cc3u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[3]);
    // 0d2cc6  push eax
    X86_AT(c, 0xd2cc6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2cc7  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xd2cc7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0d2cca  push edi
    X86_AT(c, 0xd2ccau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2ccb  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd2ccbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d2cce  call 0xd28a0
    X86_AT(c, 0xd2cceu);
    push32(c, 0xd2cd3u); x86_call_known(c, 0xd28a0u, f_000d28a0); X86_RET(c, 0xd2cd3u);
    X86_TICK(c, 9);
    // 0d2cd3  add esp, 0xc
    X86_AT(c, 0xd2cd3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d2cd6  and eax, eax
    X86_AT(c, 0xd2cd6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d2cd8  je 0xd2cf0
    X86_AT(c, 0xd2cd8u);
    if (x86_cc(c, 4)) { goto L_d2cf0; }
    X86_TICK(c, 19);
    // 0d2cda  push dword ptr [ebp - 4]
    X86_AT(c, 0xd2cdau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d2cdd  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xd2cddu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0d2ce0  push edi
    X86_AT(c, 0xd2ce0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2ce1  call 0xd2c44
    X86_AT(c, 0xd2ce1u);
    push32(c, 0xd2ce6u); x86_call_known(c, 0xd2c44u, f_000d2c44); X86_RET(c, 0xd2ce6u);
    X86_TICK(c, 11);
    // 0d2ce6  mov eax, 1
    X86_AT(c, 0xd2ce6u);
    c.r[0] = 0x1u;
    // 0d2ceb  add esp, 0xc
    X86_AT(c, 0xd2cebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d2cee  jmp 0xd2cf2
    X86_AT(c, 0xd2ceeu);
    goto L_d2cf2;
L_d2cf0:
    X86_TICK(c, 2);
    // 0d2cf0  sub eax, eax
    X86_AT(c, 0xd2cf0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_d2cf2:
    X86_TICK(c, 28);
    // 0d2cf2  pop edi
    X86_AT(c, 0xd2cf2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2cf3  pop esi
    X86_AT(c, 0xd2cf3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2cf4  pop ebx
    X86_AT(c, 0xd2cf4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d2cf5  leave 
    X86_AT(c, 0xd2cf5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d2cf6  ret 
    X86_AT(c, 0xd2cf6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2c9cu, "ran off the end of a function");
}
void f_000d2cf8(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d2cf8  push ebp
    X86_AT(c, 0xd2cf8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d2cf9  mov ebp, esp
    X86_AT(c, 0xd2cf9u);
    c.r[5] = c.r[4];
    // 0d2cfb  push eax
    X86_AT(c, 0xd2cfbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2cfc  push ebx
    X86_AT(c, 0xd2cfcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2cfd  push esi
    X86_AT(c, 0xd2cfdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2cfe  push edi
    X86_AT(c, 0xd2cfeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2cff  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd2cffu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d2d02  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd2d02u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d2d05  and esi, esi
    X86_AT(c, 0xd2d05u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d2d07  jne 0xd2d0d
    X86_AT(c, 0xd2d07u);
    if (x86_cc(c, 5)) { goto L_d2d0d; }
    X86_TICK(c, 9);
    // 0d2d09  sub ebx, ebx
    X86_AT(c, 0xd2d09u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0d2d0b  jmp 0xd2d1d
    X86_AT(c, 0xd2d0bu);
    goto L_d2d1d;
L_d2d0d:
    X86_TICK(c, 7);
    // 0d2d0d  and esi, esi
    X86_AT(c, 0xd2d0du);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d2d0f  jle 0xd2d18
    X86_AT(c, 0xd2d0fu);
    if (x86_cc(c, 14)) { goto L_d2d18; }
    X86_TICK(c, 9);
    // 0d2d11  mov ebx, 0xffffffff
    X86_AT(c, 0xd2d11u);
    c.r[3] = 0xFFFFFFFFu;
    // 0d2d16  jmp 0xd2d1d
    X86_AT(c, 0xd2d16u);
    goto L_d2d1d;
L_d2d18:
    X86_TICK(c, 2);
    // 0d2d18  mov ebx, 1
    X86_AT(c, 0xd2d18u);
    c.r[3] = 0x1u;
L_d2d1d:
    X86_TICK(c, 7);
    // 0d2d1d  and ebx, ebx
    X86_AT(c, 0xd2d1du);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d2d1f  je 0xd2d4e
    X86_AT(c, 0xd2d1fu);
    if (x86_cc(c, 4)) { goto L_d2d4e; }
    X86_TICK(c, 20);
    // 0d2d21  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xd2d21u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0d2d24  lea eax, [ebx + esi*1]
    X86_AT(c, 0xd2d24u);
    c.r[0] = (uint32_t)(c.r[3] + c.r[6]);
    // 0d2d27  push eax
    X86_AT(c, 0xd2d27u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2d28  push edi
    X86_AT(c, 0xd2d28u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2d29  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd2d29u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d2d2c  call 0xd28a0
    X86_AT(c, 0xd2d2cu);
    push32(c, 0xd2d31u); x86_call_known(c, 0xd28a0u, f_000d28a0); X86_RET(c, 0xd2d31u);
    X86_TICK(c, 9);
    // 0d2d31  add esp, 0xc
    X86_AT(c, 0xd2d31u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d2d34  and eax, eax
    X86_AT(c, 0xd2d34u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d2d36  je 0xd2d4e
    X86_AT(c, 0xd2d36u);
    if (x86_cc(c, 4)) { goto L_d2d4e; }
    X86_TICK(c, 19);
    // 0d2d38  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xd2d38u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0d2d3b  push dword ptr [ebp - 4]
    X86_AT(c, 0xd2d3bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d2d3e  push edi
    X86_AT(c, 0xd2d3eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2d3f  call 0xd2c44
    X86_AT(c, 0xd2d3fu);
    push32(c, 0xd2d44u); x86_call_known(c, 0xd2c44u, f_000d2c44); X86_RET(c, 0xd2d44u);
    X86_TICK(c, 11);
    // 0d2d44  mov eax, 1
    X86_AT(c, 0xd2d44u);
    c.r[0] = 0x1u;
    // 0d2d49  add esp, 0xc
    X86_AT(c, 0xd2d49u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d2d4c  jmp 0xd2d50
    X86_AT(c, 0xd2d4cu);
    goto L_d2d50;
L_d2d4e:
    X86_TICK(c, 2);
    // 0d2d4e  sub eax, eax
    X86_AT(c, 0xd2d4eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_d2d50:
    X86_TICK(c, 28);
    // 0d2d50  pop edi
    X86_AT(c, 0xd2d50u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2d51  pop esi
    X86_AT(c, 0xd2d51u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2d52  pop ebx
    X86_AT(c, 0xd2d52u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d2d53  leave 
    X86_AT(c, 0xd2d53u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d2d54  ret 
    X86_AT(c, 0xd2d54u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2cf8u, "ran off the end of a function");
}
void f_000d2d58(X86Cpu& c) {
    X86_TICK(c, 37);
    // 0d2d58  push ebp
    X86_AT(c, 0xd2d58u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d2d59  mov ebp, esp
    X86_AT(c, 0xd2d59u);
    c.r[5] = c.r[4];
    // 0d2d5b  push eax
    X86_AT(c, 0xd2d5bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2d5c  push ebx
    X86_AT(c, 0xd2d5cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2d5d  push esi
    X86_AT(c, 0xd2d5du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2d5e  push edi
    X86_AT(c, 0xd2d5eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2d5f  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd2d5fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d2d62  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd2d62u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d2d65  mov ebx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd2d65u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d2d68  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xd2d68u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0d2d6f  push 0xa
    X86_AT(c, 0xd2d6fu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d2d71  push 1
    X86_AT(c, 0xd2d71u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2d73  call 0xc5df0
    X86_AT(c, 0xd2d73u);
    push32(c, 0xd2d78u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd2d78u);
    X86_TICK(c, 9);
    // 0d2d78  add esp, 8
    X86_AT(c, 0xd2d78u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d2d7b  test al, 1
    X86_AT(c, 0xd2d7bu);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 0d2d7d  je 0xd2d98
    X86_AT(c, 0xd2d7du);
    if (x86_cc(c, 4)) { goto L_d2d98; }
    X86_TICK(c, 13);
    // 0d2d7f  push ebx
    X86_AT(c, 0xd2d7fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2d80  push esi
    X86_AT(c, 0xd2d80u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2d81  push edi
    X86_AT(c, 0xd2d81u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2d82  call 0xd2c9c
    X86_AT(c, 0xd2d82u);
    push32(c, 0xd2d87u); x86_call_known(c, 0xd2c9cu, f_000d2c9c); X86_RET(c, 0xd2d87u);
    X86_TICK(c, 9);
    // 0d2d87  add esp, 0xc
    X86_AT(c, 0xd2d87u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d2d8a  and eax, eax
    X86_AT(c, 0xd2d8au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d2d8c  jne 0xd2db5
    X86_AT(c, 0xd2d8cu);
    if (x86_cc(c, 5)) { goto L_d2db5; }
    X86_TICK(c, 13);
    // 0d2d8e  push ebx
    X86_AT(c, 0xd2d8eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2d8f  push esi
    X86_AT(c, 0xd2d8fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2d90  push edi
    X86_AT(c, 0xd2d90u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2d91  call 0xd2cf8
    X86_AT(c, 0xd2d91u);
    push32(c, 0xd2d96u); x86_call_known(c, 0xd2cf8u, f_000d2cf8); X86_RET(c, 0xd2d96u);
    X86_TICK(c, 7);
    // 0d2d96  jmp 0xd2daf
    X86_AT(c, 0xd2d96u);
    goto L_d2daf;
L_d2d98:
    X86_TICK(c, 13);
    // 0d2d98  push ebx
    X86_AT(c, 0xd2d98u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2d99  push esi
    X86_AT(c, 0xd2d99u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2d9a  push edi
    X86_AT(c, 0xd2d9au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2d9b  call 0xd2cf8
    X86_AT(c, 0xd2d9bu);
    push32(c, 0xd2da0u); x86_call_known(c, 0xd2cf8u, f_000d2cf8); X86_RET(c, 0xd2da0u);
    X86_TICK(c, 9);
    // 0d2da0  add esp, 0xc
    X86_AT(c, 0xd2da0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d2da3  and eax, eax
    X86_AT(c, 0xd2da3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d2da5  jne 0xd2db5
    X86_AT(c, 0xd2da5u);
    if (x86_cc(c, 5)) { goto L_d2db5; }
    X86_TICK(c, 13);
    // 0d2da7  push ebx
    X86_AT(c, 0xd2da7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2da8  push esi
    X86_AT(c, 0xd2da8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2da9  push edi
    X86_AT(c, 0xd2da9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2daa  call 0xd2c9c
    X86_AT(c, 0xd2daau);
    push32(c, 0xd2dafu); x86_call_known(c, 0xd2c9cu, f_000d2c9c); X86_RET(c, 0xd2dafu);
L_d2daf:
    X86_TICK(c, 4);
    // 0d2daf  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd2dafu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d2db2  add esp, 0xc
    X86_AT(c, 0xd2db2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d2db5:
    X86_TICK(c, 28);
    // 0d2db5  pop edi
    X86_AT(c, 0xd2db5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2db6  pop esi
    X86_AT(c, 0xd2db6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2db7  pop ebx
    X86_AT(c, 0xd2db7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d2db8  leave 
    X86_AT(c, 0xd2db8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d2db9  ret 
    X86_AT(c, 0xd2db9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2d58u, "ran off the end of a function");
}
void f_000d2dbc(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0d2dbc  push ebp
    X86_AT(c, 0xd2dbcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d2dbd  mov ebp, esp
    X86_AT(c, 0xd2dbdu);
    c.r[5] = c.r[4];
    // 0d2dbf  sub esp, 0x30
    X86_AT(c, 0xd2dbfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x30u, 0, 4); }
    // 0d2dc2  push ebx
    X86_AT(c, 0xd2dc2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2dc3  push esi
    X86_AT(c, 0xd2dc3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2dc4  push edi
    X86_AT(c, 0xd2dc4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2dc5  mov dword ptr [ebp - 0x30], 0
    X86_AT(c, 0xd2dc5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u)), 0x0u);
    // 0d2dcc  mov ebx, 1
    X86_AT(c, 0xd2dccu);
    c.r[3] = 0x1u;
L_d2dd1:
    X86_TICK(c, 11);
    // 0d2dd1  cmp ebx, dword ptr [0xaa2a0]
    X86_AT(c, 0xd2dd1u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(0xAA2A0u))), 0, 4);
    // 0d2dd7  jg 0xd2e3d
    X86_AT(c, 0xd2dd7u);
    if (x86_cc(c, 15)) { goto L_d2e3d; }
    X86_TICK(c, 17);
    // 0d2dd9  lea eax, [ebx*8]
    X86_AT(c, 0xd2dd9u);
    c.r[0] = (uint32_t)(c.r[3] * 8);
    // 0d2de0  lea eax, [eax + eax*4]
    X86_AT(c, 0xd2de0u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d2de3  mov edx, dword ptr [eax + 0xbefcc]
    X86_AT(c, 0xd2de3u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFCCu)));
    // 0d2de9  mov dword ptr [ebp - 0x2c], edx
    X86_AT(c, 0xd2de9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[2]);
    // 0d2dec  cmp edx, 0x8b
    X86_AT(c, 0xd2decu);
    (void)x86_sub(c, c.r[2], 0x8Bu, 0, 4);
    // 0d2df2  jl 0xd2e3a
    X86_AT(c, 0xd2df2u);
    if (x86_cc(c, 12)) { goto L_d2e3a; }
    X86_TICK(c, 7);
    // 0d2df4  cmp edx, 0x99
    X86_AT(c, 0xd2df4u);
    (void)x86_sub(c, c.r[2], 0x99u, 0, 4);
    // 0d2dfa  jg 0xd2e3a
    X86_AT(c, 0xd2dfau);
    if (x86_cc(c, 15)) { goto L_d2e3a; }
    X86_TICK(c, 33);
    // 0d2dfc  mov edi, dword ptr [0xb033a]
    X86_AT(c, 0xd2dfcu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0d2e02  sub edi, dword ptr [eax + 0xbefd4]
    X86_AT(c, 0xd2e02u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD4u))), 0, 4); }
    // 0d2e08  mov esi, dword ptr [0xb033e]
    X86_AT(c, 0xd2e08u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0d2e0e  sub esi, dword ptr [eax + 0xbefd8]
    X86_AT(c, 0xd2e0eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD8u))), 0, 4); }
    // 0d2e14  push esi
    X86_AT(c, 0xd2e14u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2e15  push edi
    X86_AT(c, 0xd2e15u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2e16  push edx
    X86_AT(c, 0xd2e16u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d2e17  call 0xd29d0
    X86_AT(c, 0xd2e17u);
    push32(c, 0xd2e1cu); x86_call_known(c, 0xd29d0u, f_000d29d0); X86_RET(c, 0xd2e1cu);
    X86_TICK(c, 9);
    // 0d2e1c  add esp, 0xc
    X86_AT(c, 0xd2e1cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d2e1f  and eax, eax
    X86_AT(c, 0xd2e1fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d2e21  je 0xd2e2f
    X86_AT(c, 0xd2e21u);
    if (x86_cc(c, 4)) { goto L_d2e2f; }
    X86_TICK(c, 19);
    // 0d2e23  mov eax, dword ptr [ebp - 0x30]
    X86_AT(c, 0xd2e23u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u)));
    // 0d2e26  mov dword ptr [ebp + eax*4 - 0x28], ebx
    X86_AT(c, 0xd2e26u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xFFFFFFD8u)), c.r[3]);
    // 0d2e2a  inc dword ptr [ebp - 0x30]
    X86_AT(c, 0xd2e2au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d2e2d  jmp 0xd2e3a
    X86_AT(c, 0xd2e2du);
    goto L_d2e3a;
L_d2e2f:
    X86_TICK(c, 13);
    // 0d2e2f  push esi
    X86_AT(c, 0xd2e2fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2e30  push edi
    X86_AT(c, 0xd2e30u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2e31  push ebx
    X86_AT(c, 0xd2e31u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2e32  call 0xd2d58
    X86_AT(c, 0xd2e32u);
    push32(c, 0xd2e37u); x86_call_known(c, 0xd2d58u, f_000d2d58); X86_RET(c, 0xd2e37u);
    X86_TICK(c, 2);
    // 0d2e37  add esp, 0xc
    X86_AT(c, 0xd2e37u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d2e3a:
    X86_TICK(c, 9);
    // 0d2e3a  inc ebx
    X86_AT(c, 0xd2e3au);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0d2e3b  jmp 0xd2dd1
    X86_AT(c, 0xd2e3bu);
    X86_POLL(c, 0xd2dd1u); goto L_d2dd1;
L_d2e3d:
    X86_TICK(c, 17);
    // 0d2e3d  mov eax, dword ptr [ebp - 0x30]
    X86_AT(c, 0xd2e3du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u)));
    // 0d2e40  dec dword ptr [ebp - 0x30]
    X86_AT(c, 0xd2e40u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d2e43  and eax, eax
    X86_AT(c, 0xd2e43u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d2e45  je 0xd2e94
    X86_AT(c, 0xd2e45u);
    if (x86_cc(c, 4)) { goto L_d2e94; }
    X86_TICK(c, 12);
    // 0d2e47  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xd2e47u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0d2e4e  jle 0xd2e94
    X86_AT(c, 0xd2e4eu);
    if (x86_cc(c, 14)) { goto L_d2e94; }
    X86_TICK(c, 48);
    // 0d2e50  mov eax, dword ptr [ebp - 0x30]
    X86_AT(c, 0xd2e50u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD0u)));
    // 0d2e53  mov ebx, dword ptr [ebp + eax*4 - 0x28]
    X86_AT(c, 0xd2e53u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] * 4 + 0xFFFFFFD8u)));
    // 0d2e57  lea eax, [ebx*8]
    X86_AT(c, 0xd2e57u);
    c.r[0] = (uint32_t)(c.r[3] * 8);
    // 0d2e5e  lea eax, [eax + eax*4]
    X86_AT(c, 0xd2e5eu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d2e61  mov edi, dword ptr [0xb033a]
    X86_AT(c, 0xd2e61u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0d2e67  sub edi, dword ptr [eax + 0xbefd4]
    X86_AT(c, 0xd2e67u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD4u))), 0, 4); }
    // 0d2e6d  mov esi, dword ptr [0xb033e]
    X86_AT(c, 0xd2e6du);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0d2e73  sub esi, dword ptr [eax + 0xbefd8]
    X86_AT(c, 0xd2e73u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD8u))), 0, 4); }
    // 0d2e79  push esi
    X86_AT(c, 0xd2e79u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2e7a  push edi
    X86_AT(c, 0xd2e7au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2e7b  push dword ptr [eax + 0xbefcc]
    X86_AT(c, 0xd2e7bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFCCu))); push32(c, v); }
    // 0d2e81  call 0xd29d0
    X86_AT(c, 0xd2e81u);
    push32(c, 0xd2e86u); x86_call_known(c, 0xd29d0u, f_000d29d0); X86_RET(c, 0xd2e86u);
    X86_TICK(c, 15);
    // 0d2e86  push eax
    X86_AT(c, 0xd2e86u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2e87  push esi
    X86_AT(c, 0xd2e87u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2e88  push edi
    X86_AT(c, 0xd2e88u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2e89  push ebx
    X86_AT(c, 0xd2e89u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2e8a  call 0xd2a44
    X86_AT(c, 0xd2e8au);
    push32(c, 0xd2e8fu); x86_call_known(c, 0xd2a44u, f_000d2a44); X86_RET(c, 0xd2e8fu);
    X86_TICK(c, 9);
    // 0d2e8f  add esp, 0x1c
    X86_AT(c, 0xd2e8fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d2e92  jmp 0xd2e3d
    X86_AT(c, 0xd2e92u);
    X86_POLL(c, 0xd2e3du); goto L_d2e3d;
L_d2e94:
    X86_TICK(c, 28);
    // 0d2e94  pop edi
    X86_AT(c, 0xd2e94u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2e95  pop esi
    X86_AT(c, 0xd2e95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2e96  pop ebx
    X86_AT(c, 0xd2e96u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d2e97  leave 
    X86_AT(c, 0xd2e97u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d2e98  ret 
    X86_AT(c, 0xd2e98u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2dbcu, "ran off the end of a function");
}
void f_000d2e9c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0d2e9c  push ebp
    X86_AT(c, 0xd2e9cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d2e9d  mov ebp, esp
    X86_AT(c, 0xd2e9du);
    c.r[5] = c.r[4];
    // 0d2e9f  push esi
    X86_AT(c, 0xd2e9fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2ea0  push edi
    X86_AT(c, 0xd2ea0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2ea1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd2ea1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d2ea4  mov esi, 1
    X86_AT(c, 0xd2ea4u);
    c.r[6] = 0x1u;
L_d2ea9:
    X86_TICK(c, 11);
    // 0d2ea9  cmp esi, dword ptr [0xaa2a0]
    X86_AT(c, 0xd2ea9u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xAA2A0u))), 0, 4);
    // 0d2eaf  jg 0xd2f09
    X86_AT(c, 0xd2eafu);
    if (x86_cc(c, 15)) { goto L_d2f09; }
    X86_TICK(c, 15);
    // 0d2eb1  lea eax, [esi*8]
    X86_AT(c, 0xd2eb1u);
    c.r[0] = (uint32_t)(c.r[6] * 8);
    // 0d2eb8  lea eax, [eax + eax*4]
    X86_AT(c, 0xd2eb8u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d2ebb  mov edx, dword ptr [eax + 0xbefcc]
    X86_AT(c, 0xd2ebbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFCCu)));
    // 0d2ec1  cmp edx, 0x8b
    X86_AT(c, 0xd2ec1u);
    (void)x86_sub(c, c.r[2], 0x8Bu, 0, 4);
    // 0d2ec7  jl 0xd2f06
    X86_AT(c, 0xd2ec7u);
    if (x86_cc(c, 12)) { goto L_d2f06; }
    X86_TICK(c, 7);
    // 0d2ec9  cmp edx, 0x9e
    X86_AT(c, 0xd2ec9u);
    (void)x86_sub(c, c.r[2], 0x9Eu, 0, 4);
    // 0d2ecf  jg 0xd2f06
    X86_AT(c, 0xd2ecfu);
    if (x86_cc(c, 15)) { goto L_d2f06; }
    X86_TICK(c, 19);
    // 0d2ed1  push dword ptr [eax + 0xbefd8]
    X86_AT(c, 0xd2ed1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD8u))); push32(c, v); }
    // 0d2ed7  push dword ptr [eax + 0xbefd4]
    X86_AT(c, 0xd2ed7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xBEFD4u))); push32(c, v); }
    // 0d2edd  mov ecx, eax
    X86_AT(c, 0xd2eddu);
    c.r[1] = c.r[0];
    // 0d2edf  call 0xcf89c
    X86_AT(c, 0xd2edfu);
    push32(c, 0xd2ee4u); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd2ee4u);
    X86_TICK(c, 9);
    // 0d2ee4  add esp, 8
    X86_AT(c, 0xd2ee4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d2ee7  cmp edi, eax
    X86_AT(c, 0xd2ee7u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0d2ee9  jne 0xd2f06
    X86_AT(c, 0xd2ee9u);
    if (x86_cc(c, 5)) { goto L_d2f06; }
    X86_TICK(c, 17);
    // 0d2eeb  push dword ptr [ecx + 0xbefd8]
    X86_AT(c, 0xd2eebu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xBEFD8u))); push32(c, v); }
    // 0d2ef1  push dword ptr [ecx + 0xbefd4]
    X86_AT(c, 0xd2ef1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0xBEFD4u))); push32(c, v); }
    // 0d2ef7  call 0xcf758
    X86_AT(c, 0xd2ef7u);
    push32(c, 0xd2efcu); x86_call_known(c, 0xcf758u, f_000cf758); X86_RET(c, 0xd2efcu);
    X86_TICK(c, 10);
    // 0d2efc  dec dword ptr [0xaa2a8]
    X86_AT(c, 0xd2efcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2A8u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d2f02  dec esi
    X86_AT(c, 0xd2f02u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0d2f03  add esp, 8
    X86_AT(c, 0xd2f03u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d2f06:
    X86_TICK(c, 9);
    // 0d2f06  inc esi
    X86_AT(c, 0xd2f06u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d2f07  jmp 0xd2ea9
    X86_AT(c, 0xd2f07u);
    X86_POLL(c, 0xd2ea9u); goto L_d2ea9;
L_d2f09:
    X86_TICK(c, 24);
    // 0d2f09  pop edi
    X86_AT(c, 0xd2f09u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d2f0a  pop esi
    X86_AT(c, 0xd2f0au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d2f0b  leave 
    X86_AT(c, 0xd2f0bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d2f0c  ret 
    X86_AT(c, 0xd2f0cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2e9cu, "ran off the end of a function");
}
void f_000d2f10(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d2f10  push ebp
    X86_AT(c, 0xd2f10u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d2f11  mov ebp, esp
    X86_AT(c, 0xd2f11u);
    c.r[5] = c.r[4];
    // 0d2f13  push eax
    X86_AT(c, 0xd2f13u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d2f14  push ebx
    X86_AT(c, 0xd2f14u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d2f15  push esi
    X86_AT(c, 0xd2f15u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d2f16  push edi
    X86_AT(c, 0xd2f16u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d2f17  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xd2f17u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0d2f1e  call 0xc7638
    X86_AT(c, 0xd2f1eu);
    push32(c, 0xd2f23u); x86_call_known(c, 0xc7638u, f_000c7638); X86_RET(c, 0xd2f23u);
    X86_TICK(c, 37);
    // 0d2f23  mov word ptr [0xa1b74], 0xffff
    X86_AT(c, 0xd2f23u);
    wr16((c.sbase[3] + (uint32_t)(0xA1B74u)), 0xFFFFu);
    // 0d2f2c  mov dword ptr [0xb52f8], 0
    X86_AT(c, 0xd2f2cu);
    wr32((c.sbase[3] + (uint32_t)(0xB52F8u)), 0x0u);
    // 0d2f36  mov dword ptr [0xb0322], 0
    X86_AT(c, 0xd2f36u);
    wr32((c.sbase[3] + (uint32_t)(0xB0322u)), 0x0u);
    // 0d2f40  mov dword ptr [0xb02fe], 0
    X86_AT(c, 0xd2f40u);
    wr32((c.sbase[3] + (uint32_t)(0xB02FEu)), 0x0u);
    // 0d2f4a  mov eax, dword ptr [0xb031a]
    X86_AT(c, 0xd2f4au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB031Au)));
    // 0d2f4f  cdq 
    X86_AT(c, 0xd2f4fu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d2f50  sub eax, edx
    X86_AT(c, 0xd2f50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d2f52  sar eax, 1
    X86_AT(c, 0xd2f52u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d2f54  xchg esi, eax
    X86_AT(c, 0xd2f54u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d2f55  mov dword ptr [0xb031a], 0
    X86_AT(c, 0xd2f55u);
    wr32((c.sbase[3] + (uint32_t)(0xB031Au)), 0x0u);
    // 0d2f5f  mov ebx, dword ptr [0xb031e]
    X86_AT(c, 0xd2f5fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xB031Eu)));
    // 0d2f65  mov dword ptr [0xb031e], 0
    X86_AT(c, 0xd2f65u);
    wr32((c.sbase[3] + (uint32_t)(0xB031Eu)), 0x0u);
    // 0d2f6f  call 0xcc628
    X86_AT(c, 0xd2f6fu);
    push32(c, 0xd2f74u); x86_call_known(c, 0xcc628u, f_000cc628); X86_RET(c, 0xd2f74u);
    X86_TICK(c, 7);
    // 0d2f74  call 0xcc66c
    X86_AT(c, 0xd2f74u);
    push32(c, 0xd2f79u); x86_call_known(c, 0xcc66cu, f_000cc66c); X86_RET(c, 0xd2f79u);
    X86_TICK(c, 7);
    // 0d2f79  call 0xcc6cc
    X86_AT(c, 0xd2f79u);
    push32(c, 0xd2f7eu); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xd2f7eu);
    X86_TICK(c, 7);
    // 0d2f7e  call 0xcc6b0
    X86_AT(c, 0xd2f7eu);
    push32(c, 0xd2f83u); x86_call_known(c, 0xcc6b0u, f_000cc6b0); X86_RET(c, 0xd2f83u);
    X86_TICK(c, 9);
    // 0d2f83  push 8
    X86_AT(c, 0xd2f83u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d2f85  call 0xc5ca4
    X86_AT(c, 0xd2f85u);
    push32(c, 0xd2f8au); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd2f8au);
    X86_TICK(c, 9);
    // 0d2f8a  push 8
    X86_AT(c, 0xd2f8au);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d2f8c  call 0xc5ca4
    X86_AT(c, 0xd2f8cu);
    push32(c, 0xd2f91u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd2f91u);
    X86_TICK(c, 9);
    // 0d2f91  push 8
    X86_AT(c, 0xd2f91u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d2f93  call 0xc5ca4
    X86_AT(c, 0xd2f93u);
    push32(c, 0xd2f98u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd2f98u);
    X86_TICK(c, 11);
    // 0d2f98  push 0x8948
    X86_AT(c, 0xd2f98u);
    { uint32_t v = 0x8948u; push32(c, v); }
    // 0d2f9d  push 7
    X86_AT(c, 0xd2f9du);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2f9f  call 0xc8cdc
    X86_AT(c, 0xd2f9fu);
    push32(c, 0xd2fa4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd2fa4u);
    X86_TICK(c, 9);
    // 0d2fa4  push 7
    X86_AT(c, 0xd2fa4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d2fa6  call 0xca3cc
    X86_AT(c, 0xd2fa6u);
    push32(c, 0xd2fabu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd2fabu);
    X86_TICK(c, 9);
    // 0d2fab  push 0xb4
    X86_AT(c, 0xd2fabu);
    { uint32_t v = 0xB4u; push32(c, v); }
    // 0d2fb0  call 0xd6660
    X86_AT(c, 0xd2fb0u);
    push32(c, 0xd2fb5u); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd2fb5u);
    X86_TICK(c, 7);
    // 0d2fb5  call 0xcbd48
    X86_AT(c, 0xd2fb5u);
    push32(c, 0xd2fbau); x86_call_known(c, 0xcbd48u, f_000cbd48); X86_RET(c, 0xd2fbau);
    X86_TICK(c, 9);
    // 0d2fba  push 0
    X86_AT(c, 0xd2fbau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d2fbc  call 0xc8f54
    X86_AT(c, 0xd2fbcu);
    push32(c, 0xd2fc1u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xd2fc1u);
    X86_TICK(c, 9);
    // 0d2fc1  push 1
    X86_AT(c, 0xd2fc1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d2fc3  call 0xc8f40
    X86_AT(c, 0xd2fc3u);
    push32(c, 0xd2fc8u); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xd2fc8u);
    X86_TICK(c, 13);
    // 0d2fc8  push 0x40
    X86_AT(c, 0xd2fc8u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0d2fca  push 0x40
    X86_AT(c, 0xd2fcau);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0d2fcc  push 0x8964
    X86_AT(c, 0xd2fccu);
    { uint32_t v = 0x8964u; push32(c, v); }
    // 0d2fd1  call 0xc9cb4
    X86_AT(c, 0xd2fd1u);
    push32(c, 0xd2fd6u); x86_call_known(c, 0xc9cb4u, f_000c9cb4); X86_RET(c, 0xd2fd6u);
    X86_TICK(c, 9);
    // 0d2fd6  push 0
    X86_AT(c, 0xd2fd6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d2fd8  call 0xc8f40
    X86_AT(c, 0xd2fd8u);
    push32(c, 0xd2fddu); x86_call_known(c, 0xc8f40u, f_000c8f40); X86_RET(c, 0xd2fddu);
    X86_TICK(c, 9);
    // 0d2fdd  push 2
    X86_AT(c, 0xd2fddu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d2fdf  call 0xc8f54
    X86_AT(c, 0xd2fdfu);
    push32(c, 0xd2fe4u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xd2fe4u);
    X86_TICK(c, 9);
    // 0d2fe4  push 0x8974
    X86_AT(c, 0xd2fe4u);
    { uint32_t v = 0x8974u; push32(c, v); }
    // 0d2fe9  call 0xcba5c
    X86_AT(c, 0xd2fe9u);
    push32(c, 0xd2feeu); x86_call_known(c, 0xcba5cu, f_000cba5c); X86_RET(c, 0xd2feeu);
    X86_TICK(c, 29);
    // 0d2fee  add esp, 0x3c
    X86_AT(c, 0xd2feeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d2ff1  push 0
    X86_AT(c, 0xd2ff1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d2ff3  push 0xe
    X86_AT(c, 0xd2ff3u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d2ff5  push 0xb
    X86_AT(c, 0xd2ff5u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d2ff7  push 4
    X86_AT(c, 0xd2ff7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d2ff9  push 0x1f
    X86_AT(c, 0xd2ff9u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0d2ffb  push 0x20
    X86_AT(c, 0xd2ffbu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0d2ffd  push 0x100
    X86_AT(c, 0xd2ffdu);
    { uint32_t v = 0x100u; push32(c, v); }
    // 0d3002  push 0x14f
    X86_AT(c, 0xd3002u);
    { uint32_t v = 0x14Fu; push32(c, v); }
    // 0d3007  push 0x3a
    X86_AT(c, 0xd3007u);
    { uint32_t v = 0x3Au; push32(c, v); }
    // 0d3009  push 6
    X86_AT(c, 0xd3009u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d300b  call 0xc9fbc
    X86_AT(c, 0xd300bu);
    push32(c, 0xd3010u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd3010u);
    X86_TICK(c, 11);
    // 0d3010  add esp, 0x28
    X86_AT(c, 0xd3010u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
    // 0d3013  push 6
    X86_AT(c, 0xd3013u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d3015  call 0xca0a0
    X86_AT(c, 0xd3015u);
    push32(c, 0xd301au); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd301au);
    X86_TICK(c, 9);
    // 0d301a  push 6
    X86_AT(c, 0xd301au);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d301c  call 0xca100
    X86_AT(c, 0xd301cu);
    push32(c, 0xd3021u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd3021u);
    X86_TICK(c, 13);
    // 0d3021  push 2
    X86_AT(c, 0xd3021u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d3023  push 4
    X86_AT(c, 0xd3023u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d3025  push 6
    X86_AT(c, 0xd3025u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d3027  call 0xca9c8
    X86_AT(c, 0xd3027u);
    push32(c, 0xd302cu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd302cu);
    X86_TICK(c, 11);
    // 0d302c  push 0x8984
    X86_AT(c, 0xd302cu);
    { uint32_t v = 0x8984u; push32(c, v); }
    // 0d3031  push 6
    X86_AT(c, 0xd3031u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d3033  call 0xc8cdc
    X86_AT(c, 0xd3033u);
    push32(c, 0xd3038u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd3038u);
    X86_TICK(c, 7);
    // 0d3038  call 0xc799c
    X86_AT(c, 0xd3038u);
    push32(c, 0xd303du); x86_call_known(c, 0xc799cu, f_000c799c); X86_RET(c, 0xd303du);
    X86_TICK(c, 7);
    // 0d303d  call 0xc56dc
    X86_AT(c, 0xd303du);
    push32(c, 0xd3042u); x86_call_known(c, 0xc56dcu, f_000c56dc); X86_RET(c, 0xd3042u);
    X86_TICK(c, 9);
    // 0d3042  push 0x1f4
    X86_AT(c, 0xd3042u);
    { uint32_t v = 0x1F4u; push32(c, v); }
    // 0d3047  call 0xd6660
    X86_AT(c, 0xd3047u);
    push32(c, 0xd304cu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd304cu);
    X86_TICK(c, 9);
    // 0d304c  push 7
    X86_AT(c, 0xd304cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d304e  call 0xca3cc
    X86_AT(c, 0xd304eu);
    push32(c, 0xd3053u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd3053u);
    X86_TICK(c, 9);
    // 0d3053  push 0x89c0
    X86_AT(c, 0xd3053u);
    { uint32_t v = 0x89C0u; push32(c, v); }
    // 0d3058  call 0xcc7bc
    X86_AT(c, 0xd3058u);
    push32(c, 0xd305du); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd305du);
    X86_TICK(c, 4);
    // 0d305d  mov edi, 1
    X86_AT(c, 0xd305du);
    c.r[7] = 0x1u;
    // 0d3062  add esp, 0x28
    X86_AT(c, 0xd3062u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x28u, 0, 4); }
L_d3065:
    X86_TICK(c, 7);
    // 0d3065  cmp edi, 0x63
    X86_AT(c, 0xd3065u);
    (void)x86_sub(c, c.r[7], 0x63u, 0, 4);
    // 0d3068  jg 0xd3082
    X86_AT(c, 0xd3068u);
    if (x86_cc(c, 15)) { goto L_d3082; }
    X86_TICK(c, 13);
    // 0d306a  inc dword ptr [0xb02fe]
    X86_AT(c, 0xd306au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB02FEu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d3070  call 0xcc628
    X86_AT(c, 0xd3070u);
    push32(c, 0xd3075u); x86_call_known(c, 0xcc628u, f_000cc628); X86_RET(c, 0xd3075u);
    X86_TICK(c, 9);
    // 0d3075  push 1
    X86_AT(c, 0xd3075u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3077  call 0xd6660
    X86_AT(c, 0xd3077u);
    push32(c, 0xd307cu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd307cu);
    X86_TICK(c, 11);
    // 0d307c  inc edi
    X86_AT(c, 0xd307cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d307d  add esp, 4
    X86_AT(c, 0xd307du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d3080  jmp 0xd3065
    X86_AT(c, 0xd3080u);
    X86_POLL(c, 0xd3065u); goto L_d3065;
L_d3082:
    X86_TICK(c, 9);
    // 0d3082  push 0
    X86_AT(c, 0xd3082u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3084  call 0xd2e9c
    X86_AT(c, 0xd3084u);
    push32(c, 0xd3089u); x86_call_known(c, 0xd2e9cu, f_000d2e9c); X86_RET(c, 0xd3089u);
    X86_TICK(c, 9);
    // 0d3089  push 1
    X86_AT(c, 0xd3089u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d308b  call 0xd2e9c
    X86_AT(c, 0xd308bu);
    push32(c, 0xd3090u); x86_call_known(c, 0xd2e9cu, f_000d2e9c); X86_RET(c, 0xd3090u);
    X86_TICK(c, 9);
    // 0d3090  push 2
    X86_AT(c, 0xd3090u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d3092  call 0xd2e9c
    X86_AT(c, 0xd3092u);
    push32(c, 0xd3097u); x86_call_known(c, 0xd2e9cu, f_000d2e9c); X86_RET(c, 0xd3097u);
    X86_TICK(c, 9);
    // 0d3097  push 3
    X86_AT(c, 0xd3097u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d3099  call 0xd2e9c
    X86_AT(c, 0xd3099u);
    push32(c, 0xd309eu); x86_call_known(c, 0xd2e9cu, f_000d2e9c); X86_RET(c, 0xd309eu);
    X86_TICK(c, 4);
    // 0d309e  mov edi, 1
    X86_AT(c, 0xd309eu);
    c.r[7] = 0x1u;
    // 0d30a3  add esp, 0x10
    X86_AT(c, 0xd30a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d30a6:
    X86_TICK(c, 7);
    // 0d30a6  cmp edi, 0x63
    X86_AT(c, 0xd30a6u);
    (void)x86_sub(c, c.r[7], 0x63u, 0, 4);
    // 0d30a9  jg 0xd30c3
    X86_AT(c, 0xd30a9u);
    if (x86_cc(c, 15)) { goto L_d30c3; }
    X86_TICK(c, 13);
    // 0d30ab  inc dword ptr [0xb0322]
    X86_AT(c, 0xd30abu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB0322u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d30b1  call 0xcc66c
    X86_AT(c, 0xd30b1u);
    push32(c, 0xd30b6u); x86_call_known(c, 0xcc66cu, f_000cc66c); X86_RET(c, 0xd30b6u);
    X86_TICK(c, 9);
    // 0d30b6  push 1
    X86_AT(c, 0xd30b6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d30b8  call 0xd6660
    X86_AT(c, 0xd30b8u);
    push32(c, 0xd30bdu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd30bdu);
    X86_TICK(c, 11);
    // 0d30bd  inc edi
    X86_AT(c, 0xd30bdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d30be  add esp, 4
    X86_AT(c, 0xd30beu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d30c1  jmp 0xd30a6
    X86_AT(c, 0xd30c1u);
    X86_POLL(c, 0xd30a6u); goto L_d30a6;
L_d30c3:
    X86_TICK(c, 14);
    // 0d30c3  add dword ptr [0xb031a], 0xa
    X86_AT(c, 0xd30c3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Au)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xAu, 0, 4)); }
    // 0d30ca  call 0xcc6cc
    X86_AT(c, 0xd30cau);
    push32(c, 0xd30cfu); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xd30cfu);
    X86_TICK(c, 13);
    // 0d30cf  lea eax, [esi - 0xa]
    X86_AT(c, 0xd30cfu);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFF6u);
    // 0d30d2  cmp eax, dword ptr [0xb031a]
    X86_AT(c, 0xd30d2u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0, 4);
    // 0d30d8  jg 0xd30c3
    X86_AT(c, 0xd30d8u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xd30c3u); goto L_d30c3; }
L_d30da:
    X86_TICK(c, 13);
    // 0d30da  inc dword ptr [0xb031a]
    X86_AT(c, 0xd30dau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Au)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d30e0  call 0xcc6cc
    X86_AT(c, 0xd30e0u);
    push32(c, 0xd30e5u); x86_call_known(c, 0xcc6ccu, f_000cc6cc); X86_RET(c, 0xd30e5u);
    X86_TICK(c, 11);
    // 0d30e5  cmp esi, dword ptr [0xb031a]
    X86_AT(c, 0xd30e5u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xB031Au))), 0, 4);
    // 0d30eb  jg 0xd30da
    X86_AT(c, 0xd30ebu);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xd30dau); goto L_d30da; }
L_d30ed:
    X86_TICK(c, 14);
    // 0d30ed  add dword ptr [0xb031e], 0xa
    X86_AT(c, 0xd30edu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xAu, 0, 4)); }
    // 0d30f4  call 0xcc6b0
    X86_AT(c, 0xd30f4u);
    push32(c, 0xd30f9u); x86_call_known(c, 0xcc6b0u, f_000cc6b0); X86_RET(c, 0xd30f9u);
    X86_TICK(c, 13);
    // 0d30f9  lea eax, [ebx - 0xa]
    X86_AT(c, 0xd30f9u);
    c.r[0] = (uint32_t)(c.r[3] + 0xFFFFFFF6u);
    // 0d30fc  cmp eax, dword ptr [0xb031e]
    X86_AT(c, 0xd30fcu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xB031Eu))), 0, 4);
    // 0d3102  jg 0xd30ed
    X86_AT(c, 0xd3102u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xd30edu); goto L_d30ed; }
L_d3104:
    X86_TICK(c, 13);
    // 0d3104  inc dword ptr [0xb031e]
    X86_AT(c, 0xd3104u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB031Eu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d310a  call 0xcc6b0
    X86_AT(c, 0xd310au);
    push32(c, 0xd310fu); x86_call_known(c, 0xcc6b0u, f_000cc6b0); X86_RET(c, 0xd310fu);
    X86_TICK(c, 11);
    // 0d310f  cmp ebx, dword ptr [0xb031e]
    X86_AT(c, 0xd310fu);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(0xB031Eu))), 0, 4);
    // 0d3115  jg 0xd3104
    X86_AT(c, 0xd3115u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xd3104u); goto L_d3104; }
    X86_TICK(c, 11);
    // 0d3117  mov eax, dword ptr [0xb0332]
    X86_AT(c, 0xd3117u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0332u)));
    // 0d311c  and eax, eax
    X86_AT(c, 0xd311cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d311e  je 0xd3141
    X86_AT(c, 0xd311eu);
    if (x86_cc(c, 4)) { goto L_d3141; }
    X86_TICK(c, 20);
    // 0d3120  dec dword ptr [eax*4 + 0xb03fe]
    X86_AT(c, 0xd3120u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xB03FEu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d3127  mov dword ptr [0xb0332], 0
    X86_AT(c, 0xd3127u);
    wr32((c.sbase[3] + (uint32_t)(0xB0332u)), 0x0u);
    // 0d3131  mov eax, dword ptr [0x42b80]
    X86_AT(c, 0xd3131u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x42B80u)));
    // 0d3136  mov dword ptr [0xbefcc], eax
    X86_AT(c, 0xd3136u);
    wr32((c.sbase[3] + (uint32_t)(0xBEFCCu)), c.r[0]);
    // 0d313b  dec dword ptr [0xaa2ac]
    X86_AT(c, 0xd313bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2ACu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_d3141:
    X86_TICK(c, 2);
    // 0d3141  mov edi, 1
    X86_AT(c, 0xd3141u);
    c.r[7] = 0x1u;
L_d3146:
    X86_TICK(c, 7);
    // 0d3146  cmp edi, 0xf
    X86_AT(c, 0xd3146u);
    (void)x86_sub(c, c.r[7], 0xFu, 0, 4);
    // 0d3149  jg 0xd3161
    X86_AT(c, 0xd3149u);
    if (x86_cc(c, 15)) { goto L_d3161; }
    X86_TICK(c, 22);
    // 0d314b  mov eax, dword ptr [edi*4 + 0xb0392]
    X86_AT(c, 0xd314bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB0392u)));
    // 0d3152  cdq 
    X86_AT(c, 0xd3152u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d3153  sub eax, edx
    X86_AT(c, 0xd3153u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d3155  sar eax, 1
    X86_AT(c, 0xd3155u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 7, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0d3157  mov dword ptr [edi*4 + 0xb0392], eax
    X86_AT(c, 0xd3157u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0xB0392u)), c.r[0]);
    // 0d315e  inc edi
    X86_AT(c, 0xd315eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d315f  jmp 0xd3146
    X86_AT(c, 0xd315fu);
    X86_POLL(c, 0xd3146u); goto L_d3146;
L_d3161:
    X86_TICK(c, 15);
    // 0d3161  mov dword ptr [0xb0326], 0
    X86_AT(c, 0xd3161u);
    wr32((c.sbase[3] + (uint32_t)(0xB0326u)), 0x0u);
    // 0d316b  mov dword ptr [0xb032e], 0
    X86_AT(c, 0xd316bu);
    wr32((c.sbase[3] + (uint32_t)(0xB032Eu)), 0x0u);
    // 0d3175  mov dword ptr [0xb032a], 0
    X86_AT(c, 0xd3175u);
    wr32((c.sbase[3] + (uint32_t)(0xB032Au)), 0x0u);
    // 0d317f  push 5
    X86_AT(c, 0xd317fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d3181  call 0xc5ca4
    X86_AT(c, 0xd3181u);
    push32(c, 0xd3186u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd3186u);
    X86_TICK(c, 7);
    // 0d3186  call 0xcc85c
    X86_AT(c, 0xd3186u);
    push32(c, 0xd318bu); x86_call_known(c, 0xcc85cu, f_000cc85c); X86_RET(c, 0xd318bu);
    X86_TICK(c, 11);
    // 0d318b  push 0
    X86_AT(c, 0xd318bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d318d  push 6
    X86_AT(c, 0xd318du);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d318f  call 0xca2d4
    X86_AT(c, 0xd318fu);
    push32(c, 0xd3194u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd3194u);
    X86_TICK(c, 7);
    // 0d3194  call 0xcbd48
    X86_AT(c, 0xd3194u);
    push32(c, 0xd3199u); x86_call_known(c, 0xcbd48u, f_000cbd48); X86_RET(c, 0xd3199u);
    X86_TICK(c, 9);
    // 0d3199  push 7
    X86_AT(c, 0xd3199u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d319b  call 0xca254
    X86_AT(c, 0xd319bu);
    push32(c, 0xd31a0u); x86_call_known(c, 0xca254u, f_000ca254); X86_RET(c, 0xd31a0u);
    X86_TICK(c, 9);
    // 0d31a0  push 0
    X86_AT(c, 0xd31a0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d31a2  call 0xc71e0
    X86_AT(c, 0xd31a2u);
    push32(c, 0xd31a7u); x86_call_known(c, 0xc71e0u, f_000c71e0); X86_RET(c, 0xd31a7u);
    X86_TICK(c, 7);
    // 0d31a7  call 0xd351c
    X86_AT(c, 0xd31a7u);
    push32(c, 0xd31acu); x86_call_known(c, 0xd351cu, f_000d351c); X86_RET(c, 0xd31acu);
    X86_TICK(c, 7);
    // 0d31ac  call 0xcc700
    X86_AT(c, 0xd31acu);
    push32(c, 0xd31b1u); x86_call_known(c, 0xcc700u, f_000cc700); X86_RET(c, 0xd31b1u);
    X86_TICK(c, 9);
    // 0d31b1  push 0x42b8c
    X86_AT(c, 0xd31b1u);
    { uint32_t v = 0x42B8Cu; push32(c, v); }
    // 0d31b6  call 0xcbf54
    X86_AT(c, 0xd31b6u);
    push32(c, 0xd31bbu); x86_call_known(c, 0xcbf54u, f_000cbf54); X86_RET(c, 0xd31bbu);
    X86_TICK(c, 7);
    // 0d31bb  call 0xd3214
    X86_AT(c, 0xd31bbu);
    push32(c, 0xd31c0u); x86_call_known(c, 0xd3214u, f_000d3214); X86_RET(c, 0xd31c0u);
    X86_TICK(c, 9);
    // 0d31c0  push 1
    X86_AT(c, 0xd31c0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d31c2  call 0xc5e44
    X86_AT(c, 0xd31c2u);
    push32(c, 0xd31c7u); x86_call_known(c, 0xc5e44u, f_000c5e44); X86_RET(c, 0xd31c7u);
    X86_TICK(c, 9);
    // 0d31c7  push 8
    X86_AT(c, 0xd31c7u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d31c9  call 0xca3cc
    X86_AT(c, 0xd31c9u);
    push32(c, 0xd31ceu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd31ceu);
    X86_TICK(c, 7);
    // 0d31ce  call 0xc799c
    X86_AT(c, 0xd31ceu);
    push32(c, 0xd31d3u); x86_call_known(c, 0xc799cu, f_000c799c); X86_RET(c, 0xd31d3u);
    X86_TICK(c, 9);
    // 0d31d3  push 7
    X86_AT(c, 0xd31d3u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d31d5  call 0xca0a0
    X86_AT(c, 0xd31d5u);
    push32(c, 0xd31dau); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd31dau);
    X86_TICK(c, 11);
    // 0d31da  push 0x8a14
    X86_AT(c, 0xd31dau);
    { uint32_t v = 0x8A14u; push32(c, v); }
    // 0d31df  push 7
    X86_AT(c, 0xd31dfu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d31e1  call 0xc8cdc
    X86_AT(c, 0xd31e1u);
    push32(c, 0xd31e6u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd31e6u);
    X86_TICK(c, 9);
    // 0d31e6  push 7
    X86_AT(c, 0xd31e6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d31e8  call 0xca3cc
    X86_AT(c, 0xd31e8u);
    push32(c, 0xd31edu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd31edu);
    X86_TICK(c, 17);
    // 0d31ed  push 0xd
    X86_AT(c, 0xd31edu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d31ef  push 0x2c
    X86_AT(c, 0xd31efu);
    { uint32_t v = 0x2Cu; push32(c, v); }
    // 0d31f1  push 0xdc
    X86_AT(c, 0xd31f1u);
    { uint32_t v = 0xDCu; push32(c, v); }
    // 0d31f6  push 0x19
    X86_AT(c, 0xd31f6u);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0d31f8  push 0x98
    X86_AT(c, 0xd31f8u);
    { uint32_t v = 0x98u; push32(c, v); }
    // 0d31fd  call 0xc95ec
    X86_AT(c, 0xd31fdu);
    push32(c, 0xd3202u); x86_call_known(c, 0xc95ecu, f_000c95ec); X86_RET(c, 0xd3202u);
    X86_TICK(c, 11);
    // 0d3202  add esp, 0x44
    X86_AT(c, 0xd3202u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0d3205  push 7
    X86_AT(c, 0xd3205u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3207  call 0xca0a0
    X86_AT(c, 0xd3207u);
    push32(c, 0xd320cu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd320cu);
    X86_TICK(c, 30);
    // 0d320c  add esp, 4
    X86_AT(c, 0xd320cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d320f  pop edi
    X86_AT(c, 0xd320fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3210  pop esi
    X86_AT(c, 0xd3210u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3211  pop ebx
    X86_AT(c, 0xd3211u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3212  leave 
    X86_AT(c, 0xd3212u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3213  ret 
    X86_AT(c, 0xd3213u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2f10u, "ran off the end of a function");
}
void f_000d3214(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0d3214  push ebp
    X86_AT(c, 0xd3214u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d3215  mov ebp, esp
    X86_AT(c, 0xd3215u);
    c.r[5] = c.r[4];
    // 0d3217  push eax
    X86_AT(c, 0xd3217u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d3218  push ebx
    X86_AT(c, 0xd3218u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3219  push esi
    X86_AT(c, 0xd3219u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d321a  push edi
    X86_AT(c, 0xd321au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d321b  push dword ptr [0xb033e]
    X86_AT(c, 0xd321bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Eu))); push32(c, v); }
    // 0d3221  push dword ptr [0xb033a]
    X86_AT(c, 0xd3221u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB033Au))); push32(c, v); }
    // 0d3227  call 0xcf89c
    X86_AT(c, 0xd3227u);
    push32(c, 0xd322cu); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd322cu);
    X86_TICK(c, 4);
    // 0d322c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd322cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d322f  add esp, 8
    X86_AT(c, 0xd322fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d3232:
    X86_TICK(c, 11);
    // 0d3232  push 0x17
    X86_AT(c, 0xd3232u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0d3234  push 3
    X86_AT(c, 0xd3234u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d3236  call 0xc5df0
    X86_AT(c, 0xd3236u);
    push32(c, 0xd323bu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd323bu);
    X86_TICK(c, 22);
    // 0d323b  xchg esi, eax
    X86_AT(c, 0xd323bu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d323c  add esi, dword ptr [0xb033a]
    X86_AT(c, 0xd323cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Au))), 0, 4); }
    // 0d3242  sub esi, 0xd
    X86_AT(c, 0xd3242u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0xDu, 0, 4); }
    // 0d3245  push 0x17
    X86_AT(c, 0xd3245u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0d3247  push 3
    X86_AT(c, 0xd3247u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d3249  call 0xc5df0
    X86_AT(c, 0xd3249u);
    push32(c, 0xd324eu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd324eu);
    X86_TICK(c, 20);
    // 0d324e  xchg ebx, eax
    X86_AT(c, 0xd324eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d324f  add ebx, dword ptr [0xb033e]
    X86_AT(c, 0xd324fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Eu))), 0, 4); }
    // 0d3255  sub ebx, 0xd
    X86_AT(c, 0xd3255u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, 0xDu, 0, 4); }
    // 0d3258  add esp, 0x10
    X86_AT(c, 0xd3258u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d325b  cmp esi, 2
    X86_AT(c, 0xd325bu);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 0d325e  jl 0xd3268
    X86_AT(c, 0xd325eu);
    if (x86_cc(c, 12)) { goto L_d3268; }
    X86_TICK(c, 7);
    // 0d3260  cmp esi, 0xa5
    X86_AT(c, 0xd3260u);
    (void)x86_sub(c, c.r[6], 0xA5u, 0, 4);
    // 0d3266  jle 0xd326e
    X86_AT(c, 0xd3266u);
    if (x86_cc(c, 14)) { goto L_d326e; }
L_d3268:
    X86_TICK(c, 4);
    // 0d3268  mov esi, dword ptr [0xb033a]
    X86_AT(c, 0xd3268u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
L_d326e:
    X86_TICK(c, 7);
    // 0d326e  cmp ebx, 2
    X86_AT(c, 0xd326eu);
    (void)x86_sub(c, c.r[3], 0x2u, 0, 4);
    // 0d3271  jl 0xd327b
    X86_AT(c, 0xd3271u);
    if (x86_cc(c, 12)) { goto L_d327b; }
    X86_TICK(c, 7);
    // 0d3273  cmp ebx, 0x99
    X86_AT(c, 0xd3273u);
    (void)x86_sub(c, c.r[3], 0x99u, 0, 4);
    // 0d3279  jle 0xd3281
    X86_AT(c, 0xd3279u);
    if (x86_cc(c, 14)) { goto L_d3281; }
L_d327b:
    X86_TICK(c, 4);
    // 0d327b  mov ebx, dword ptr [0xb033e]
    X86_AT(c, 0xd327bu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
L_d3281:
    X86_TICK(c, 11);
    // 0d3281  push ebx
    X86_AT(c, 0xd3281u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3282  push esi
    X86_AT(c, 0xd3282u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3283  call 0xcf89c
    X86_AT(c, 0xd3283u);
    push32(c, 0xd3288u); x86_call_known(c, 0xcf89cu, f_000cf89c); X86_RET(c, 0xd3288u);
    X86_TICK(c, 13);
    // 0d3288  add esp, 8
    X86_AT(c, 0xd3288u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d328b  cmp eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd328bu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4);
    // 0d328e  jne 0xd3232
    X86_AT(c, 0xd328eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd3232u); goto L_d3232; }
    X86_TICK(c, 13);
    // 0d3290  push 1
    X86_AT(c, 0xd3290u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3292  push ebx
    X86_AT(c, 0xd3292u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3293  push esi
    X86_AT(c, 0xd3293u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3294  call 0xcc538
    X86_AT(c, 0xd3294u);
    push32(c, 0xd3299u); x86_call_known(c, 0xcc538u, f_000cc538); X86_RET(c, 0xd3299u);
    X86_TICK(c, 12);
    // 0d3299  xchg edi, eax
    X86_AT(c, 0xd3299u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d329a  add esp, 0xc
    X86_AT(c, 0xd329au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d329d  cmp edi, 2
    X86_AT(c, 0xd329du);
    (void)x86_sub(c, c.r[7], 0x2u, 0, 4);
    // 0d32a0  je 0xd32a7
    X86_AT(c, 0xd32a0u);
    if (x86_cc(c, 4)) { goto L_d32a7; }
    X86_TICK(c, 7);
    // 0d32a2  cmp edi, 3
    X86_AT(c, 0xd32a2u);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0d32a5  jne 0xd3232
    X86_AT(c, 0xd32a5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd3232u); goto L_d3232; }
L_d32a7:
    X86_TICK(c, 44);
    // 0d32a7  mov dword ptr [0xb033a], esi
    X86_AT(c, 0xd32a7u);
    wr32((c.sbase[3] + (uint32_t)(0xB033Au)), c.r[6]);
    // 0d32ad  mov dword ptr [0xb033e], ebx
    X86_AT(c, 0xd32adu);
    wr32((c.sbase[3] + (uint32_t)(0xB033Eu)), c.r[3]);
    // 0d32b3  mov eax, dword ptr [0x42b80]
    X86_AT(c, 0xd32b3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x42B80u)));
    // 0d32b8  mov dword ptr [0xbefcc], eax
    X86_AT(c, 0xd32b8u);
    wr32((c.sbase[3] + (uint32_t)(0xBEFCCu)), c.r[0]);
    // 0d32bd  mov dword ptr [0xbefd0], edi
    X86_AT(c, 0xd32bdu);
    wr32((c.sbase[3] + (uint32_t)(0xBEFD0u)), c.r[7]);
    // 0d32c3  mov dword ptr [0xbefd4], esi
    X86_AT(c, 0xd32c3u);
    wr32((c.sbase[3] + (uint32_t)(0xBEFD4u)), c.r[6]);
    // 0d32c9  mov dword ptr [0xbefd8], ebx
    X86_AT(c, 0xd32c9u);
    wr32((c.sbase[3] + (uint32_t)(0xBEFD8u)), c.r[3]);
    // 0d32cf  pop edi
    X86_AT(c, 0xd32cfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d32d0  pop esi
    X86_AT(c, 0xd32d0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d32d1  pop ebx
    X86_AT(c, 0xd32d1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d32d2  leave 
    X86_AT(c, 0xd32d2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d32d3  ret 
    X86_AT(c, 0xd32d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3214u, "ran off the end of a function");
}
void f_000d32d4(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d32d4  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xd32d4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0d32db  jne 0xd32e4
    X86_AT(c, 0xd32dbu);
    if (x86_cc(c, 5)) { goto L_d32e4; }
    X86_TICK(c, 7);
    // 0d32dd  call 0xd2dbc
    X86_AT(c, 0xd32ddu);
    push32(c, 0xd32e2u); x86_call_known(c, 0xd2dbcu, f_000d2dbc); X86_RET(c, 0xd32e2u);
    X86_TICK(c, 7);
    // 0d32e2  jmp 0xd3301
    X86_AT(c, 0xd32e2u);
    goto L_d3301;
L_d32e4:
    X86_TICK(c, 12);
    // 0d32e4  cmp dword ptr [0xb52f8], 3
    X86_AT(c, 0xd32e4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x3u, 0, 4);
    // 0d32eb  je 0xd3301
    X86_AT(c, 0xd32ebu);
    if (x86_cc(c, 4)) { goto L_d3301; }
    X86_TICK(c, 11);
    // 0d32ed  mov eax, dword ptr [0xb52f8]
    X86_AT(c, 0xd32edu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB52F8u)));
    // 0d32f2  cmp eax, 1
    X86_AT(c, 0xd32f2u);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0d32f5  je 0xd32fc
    X86_AT(c, 0xd32f5u);
    if (x86_cc(c, 4)) { goto L_d32fc; }
    X86_TICK(c, 7);
    // 0d32f7  cmp eax, 2
    X86_AT(c, 0xd32f7u);
    (void)x86_sub(c, c.r[0], 0x2u, 0, 4);
    // 0d32fa  jne 0xd3301
    X86_AT(c, 0xd32fau);
    if (x86_cc(c, 5)) { goto L_d3301; }
L_d32fc:
    X86_TICK(c, 7);
    // 0d32fc  call 0xd40e4
    X86_AT(c, 0xd32fcu);
    push32(c, 0xd3301u); x86_call_known(c, 0xd40e4u, f_000d40e4); X86_RET(c, 0xd3301u);
L_d3301:
    X86_TICK(c, 10);
    // 0d3301  ret 
    X86_AT(c, 0xd3301u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd32d4u, "ran off the end of a function");
}
void f_000d3304(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0d3304  push ebp
    X86_AT(c, 0xd3304u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d3305  mov ebp, esp
    X86_AT(c, 0xd3305u);
    c.r[5] = c.r[4];
    // 0d3307  push edi
    X86_AT(c, 0xd3307u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3308  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd3308u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d330b  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd330bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d330e  sub ecx, ecx
    X86_AT(c, 0xd330eu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
L_d3310:
    X86_TICK(c, 7);
    // 0d3310  cmp ecx, 0x54
    X86_AT(c, 0xd3310u);
    (void)x86_sub(c, c.r[1], 0x54u, 0, 4);
    // 0d3313  jge 0xd332f
    X86_AT(c, 0xd3313u);
    if (x86_cc(c, 13)) { goto L_d332f; }
    X86_TICK(c, 11);
    // 0d3315  cmp edi, dword ptr [ecx*4 + 0xaff00]
    X86_AT(c, 0xd3315u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xAFF00u))), 0, 4);
    // 0d331c  jne 0xd332c
    X86_AT(c, 0xd331cu);
    if (x86_cc(c, 5)) { goto L_d332c; }
    X86_TICK(c, 11);
    // 0d331e  cmp edx, dword ptr [ecx*4 + 0xb0050]
    X86_AT(c, 0xd331eu);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[1] * 4 + 0xB0050u))), 0, 4);
    // 0d3325  jne 0xd332c
    X86_AT(c, 0xd3325u);
    if (x86_cc(c, 5)) { goto L_d332c; }
    X86_TICK(c, 11);
    // 0d3327  inc ecx
    X86_AT(c, 0xd3327u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d3328  mov eax, ecx
    X86_AT(c, 0xd3328u);
    c.r[0] = c.r[1];
    // 0d332a  jmp 0xd3331
    X86_AT(c, 0xd332au);
    goto L_d3331;
L_d332c:
    X86_TICK(c, 9);
    // 0d332c  inc ecx
    X86_AT(c, 0xd332cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0d332d  jmp 0xd3310
    X86_AT(c, 0xd332du);
    X86_POLL(c, 0xd3310u); goto L_d3310;
L_d332f:
    X86_TICK(c, 2);
    // 0d332f  sub eax, eax
    X86_AT(c, 0xd332fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_d3331:
    X86_TICK(c, 20);
    // 0d3331  pop edi
    X86_AT(c, 0xd3331u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3332  leave 
    X86_AT(c, 0xd3332u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3333  ret 
    X86_AT(c, 0xd3333u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3304u, "ran off the end of a function");
}
void f_000d3334(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0d3334  cmp dword ptr [0xb52f8], 0
    X86_AT(c, 0xd3334u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x0u, 0, 4);
    // 0d333b  jne 0xd336c
    X86_AT(c, 0xd333bu);
    if (x86_cc(c, 5)) { goto L_d336c; }
    X86_TICK(c, 19);
    // 0d333d  mov eax, dword ptr [0xb0332]
    X86_AT(c, 0xd333du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0332u)));
    // 0d3342  mov edx, dword ptr [0xaa2a4]
    X86_AT(c, 0xd3342u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xAA2A4u)));
    // 0d3348  cmp edx, dword ptr [eax*4 + 0xaa218]
    X86_AT(c, 0xd3348u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAA218u))), 0, 4);
    // 0d334f  jl 0xd3366
    X86_AT(c, 0xd334fu);
    if (x86_cc(c, 12)) { goto L_d3366; }
    X86_TICK(c, 15);
    // 0d3351  mov dword ptr [0xaa2a4], 0
    X86_AT(c, 0xd3351u);
    wr32((c.sbase[3] + (uint32_t)(0xAA2A4u)), 0x0u);
    // 0d335b  dec dword ptr [0xb0322]
    X86_AT(c, 0xd335bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xB0322u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d3361  call 0xcc66c
    X86_AT(c, 0xd3361u);
    push32(c, 0xd3366u); x86_call_known(c, 0xcc66cu, f_000cc66c); X86_RET(c, 0xd3366u);
L_d3366:
    X86_TICK(c, 6);
    // 0d3366  inc dword ptr [0xaa2a4]
    X86_AT(c, 0xd3366u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xAA2A4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_d336c:
    X86_TICK(c, 10);
    // 0d336c  ret 
    X86_AT(c, 0xd336cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3334u, "ran off the end of a function");
}
void f_000d3370(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0d3370  push edi
    X86_AT(c, 0xd3370u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3371  push 0
    X86_AT(c, 0xd3371u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3373  push 0xf
    X86_AT(c, 0xd3373u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d3375  push 0xf
    X86_AT(c, 0xd3375u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d3377  push 2
    X86_AT(c, 0xd3377u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d3379  push 0x1f
    X86_AT(c, 0xd3379u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0d337b  push 0x34
    X86_AT(c, 0xd337bu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d337d  push 0x107
    X86_AT(c, 0xd337du);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0d3382  push 0x2f
    X86_AT(c, 0xd3382u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0d3384  push 0x172
    X86_AT(c, 0xd3384u);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0d3389  push 0xa
    X86_AT(c, 0xd3389u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d338b  call 0xc9fbc
    X86_AT(c, 0xd338bu);
    push32(c, 0xd3390u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd3390u);
    X86_TICK(c, 9);
    // 0d3390  push 0xa
    X86_AT(c, 0xd3390u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d3392  call 0xca0a0
    X86_AT(c, 0xd3392u);
    push32(c, 0xd3397u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd3397u);
    X86_TICK(c, 9);
    // 0d3397  push 0xa
    X86_AT(c, 0xd3397u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d3399  call 0xca100
    X86_AT(c, 0xd3399u);
    push32(c, 0xd339eu); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd339eu);
    X86_TICK(c, 15);
    // 0d339e  mov edi, 0xb02ec
    X86_AT(c, 0xd339eu);
    c.r[7] = 0xB02ECu;
    // 0d33a3  push 0
    X86_AT(c, 0xd33a3u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d33a5  push 2
    X86_AT(c, 0xd33a5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d33a7  push 0xa
    X86_AT(c, 0xd33a7u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d33a9  call 0xca9c8
    X86_AT(c, 0xd33a9u);
    push32(c, 0xd33aeu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd33aeu);
    X86_TICK(c, 13);
    // 0d33ae  add esp, 0x3c
    X86_AT(c, 0xd33aeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d33b1  push edi
    X86_AT(c, 0xd33b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d33b2  push 0xa
    X86_AT(c, 0xd33b2u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d33b4  call 0xca850
    X86_AT(c, 0xd33b4u);
    push32(c, 0xd33b9u); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xd33b9u);
    X86_TICK(c, 13);
    // 0d33b9  push 1
    X86_AT(c, 0xd33b9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d33bb  push 2
    X86_AT(c, 0xd33bbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d33bd  push 0xa
    X86_AT(c, 0xd33bdu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d33bf  call 0xca9c8
    X86_AT(c, 0xd33bfu);
    push32(c, 0xd33c4u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd33c4u);
    X86_TICK(c, 11);
    // 0d33c4  push 0x8a68
    X86_AT(c, 0xd33c4u);
    { uint32_t v = 0x8A68u; push32(c, v); }
    // 0d33c9  push 0xa
    X86_AT(c, 0xd33c9u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d33cb  call 0xca414
    X86_AT(c, 0xd33cbu);
    push32(c, 0xd33d0u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd33d0u);
    X86_TICK(c, 13);
    // 0d33d0  push 2
    X86_AT(c, 0xd33d0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d33d2  push 2
    X86_AT(c, 0xd33d2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d33d4  push 0xa
    X86_AT(c, 0xd33d4u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d33d6  call 0xca9c8
    X86_AT(c, 0xd33d6u);
    push32(c, 0xd33dbu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd33dbu);
    X86_TICK(c, 11);
    // 0d33db  push 0x8a80
    X86_AT(c, 0xd33dbu);
    { uint32_t v = 0x8A80u; push32(c, v); }
    // 0d33e0  push 0xa
    X86_AT(c, 0xd33e0u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d33e2  call 0xca414
    X86_AT(c, 0xd33e2u);
    push32(c, 0xd33e7u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd33e7u);
    X86_TICK(c, 27);
    // 0d33e7  push 0
    X86_AT(c, 0xd33e7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d33e9  push 0xf
    X86_AT(c, 0xd33e9u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d33eb  push 0xf
    X86_AT(c, 0xd33ebu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d33ed  push 0xa
    X86_AT(c, 0xd33edu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d33ef  push 0x1f
    X86_AT(c, 0xd33efu);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0d33f1  push 0xb6
    X86_AT(c, 0xd33f1u);
    { uint32_t v = 0xB6u; push32(c, v); }
    // 0d33f6  push 0x107
    X86_AT(c, 0xd33f6u);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0d33fb  push 0x6f
    X86_AT(c, 0xd33fbu);
    { uint32_t v = 0x6Fu; push32(c, v); }
    // 0d33fd  push 0x172
    X86_AT(c, 0xd33fdu);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0d3402  push 0xb
    X86_AT(c, 0xd3402u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d3404  call 0xc9fbc
    X86_AT(c, 0xd3404u);
    push32(c, 0xd3409u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd3409u);
    X86_TICK(c, 11);
    // 0d3409  add esp, 0x58
    X86_AT(c, 0xd3409u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x58u, 0, 4); }
    // 0d340c  push 0xb
    X86_AT(c, 0xd340cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d340e  call 0xca0a0
    X86_AT(c, 0xd340eu);
    push32(c, 0xd3413u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd3413u);
    X86_TICK(c, 9);
    // 0d3413  push 0xb
    X86_AT(c, 0xd3413u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d3415  call 0xca100
    X86_AT(c, 0xd3415u);
    push32(c, 0xd341au); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd341au);
    X86_TICK(c, 13);
    // 0d341a  push 1
    X86_AT(c, 0xd341au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d341c  push 0
    X86_AT(c, 0xd341cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d341e  push 0xb
    X86_AT(c, 0xd341eu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d3420  call 0xca9c8
    X86_AT(c, 0xd3420u);
    push32(c, 0xd3425u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd3425u);
    X86_TICK(c, 13);
    // 0d3425  add esp, 0x14
    X86_AT(c, 0xd3425u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d3428  push 0x8a98
    X86_AT(c, 0xd3428u);
    { uint32_t v = 0x8A98u; push32(c, v); }
    // 0d342d  push 0xb
    X86_AT(c, 0xd342du);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d342f  call 0xc8cdc
    X86_AT(c, 0xd342fu);
    push32(c, 0xd3434u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd3434u);
    X86_TICK(c, 13);
    // 0d3434  push 2
    X86_AT(c, 0xd3434u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d3436  push 0
    X86_AT(c, 0xd3436u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3438  push 0xb
    X86_AT(c, 0xd3438u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d343a  call 0xca9c8
    X86_AT(c, 0xd343au);
    push32(c, 0xd343fu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd343fu);
    X86_TICK(c, 11);
    // 0d343f  push 0x8acc
    X86_AT(c, 0xd343fu);
    { uint32_t v = 0x8ACCu; push32(c, v); }
    // 0d3444  push 0xb
    X86_AT(c, 0xd3444u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d3446  call 0xc8cdc
    X86_AT(c, 0xd3446u);
    push32(c, 0xd344bu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd344bu);
    X86_TICK(c, 13);
    // 0d344b  push 3
    X86_AT(c, 0xd344bu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d344d  push 0
    X86_AT(c, 0xd344du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d344f  push 0xb
    X86_AT(c, 0xd344fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d3451  call 0xca9c8
    X86_AT(c, 0xd3451u);
    push32(c, 0xd3456u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd3456u);
    X86_TICK(c, 11);
    // 0d3456  push 0x8b00
    X86_AT(c, 0xd3456u);
    { uint32_t v = 0x8B00u; push32(c, v); }
    // 0d345b  push 0xb
    X86_AT(c, 0xd345bu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d345d  call 0xc8cdc
    X86_AT(c, 0xd345du);
    push32(c, 0xd3462u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd3462u);
    X86_TICK(c, 13);
    // 0d3462  push 4
    X86_AT(c, 0xd3462u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d3464  push 0
    X86_AT(c, 0xd3464u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3466  push 0xb
    X86_AT(c, 0xd3466u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d3468  call 0xca9c8
    X86_AT(c, 0xd3468u);
    push32(c, 0xd346du); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd346du);
    X86_TICK(c, 13);
    // 0d346d  add esp, 0x3c
    X86_AT(c, 0xd346du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d3470  push 0x8b34
    X86_AT(c, 0xd3470u);
    { uint32_t v = 0x8B34u; push32(c, v); }
    // 0d3475  push 0xb
    X86_AT(c, 0xd3475u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d3477  call 0xc8cdc
    X86_AT(c, 0xd3477u);
    push32(c, 0xd347cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd347cu);
    X86_TICK(c, 13);
    // 0d347c  push 5
    X86_AT(c, 0xd347cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d347e  push 0
    X86_AT(c, 0xd347eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3480  push 0xb
    X86_AT(c, 0xd3480u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d3482  call 0xca9c8
    X86_AT(c, 0xd3482u);
    push32(c, 0xd3487u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd3487u);
    X86_TICK(c, 11);
    // 0d3487  push 0x8b68
    X86_AT(c, 0xd3487u);
    { uint32_t v = 0x8B68u; push32(c, v); }
    // 0d348c  push 0xb
    X86_AT(c, 0xd348cu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d348e  call 0xc8cdc
    X86_AT(c, 0xd348eu);
    push32(c, 0xd3493u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd3493u);
    X86_TICK(c, 13);
    // 0d3493  push 6
    X86_AT(c, 0xd3493u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d3495  push 0
    X86_AT(c, 0xd3495u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3497  push 0xb
    X86_AT(c, 0xd3497u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d3499  call 0xca9c8
    X86_AT(c, 0xd3499u);
    push32(c, 0xd349eu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd349eu);
    X86_TICK(c, 11);
    // 0d349e  push 0x8b9c
    X86_AT(c, 0xd349eu);
    { uint32_t v = 0x8B9Cu; push32(c, v); }
    // 0d34a3  push 0xb
    X86_AT(c, 0xd34a3u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d34a5  call 0xc8cdc
    X86_AT(c, 0xd34a5u);
    push32(c, 0xd34aau); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd34aau);
    X86_TICK(c, 13);
    // 0d34aa  push 8
    X86_AT(c, 0xd34aau);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d34ac  push 0
    X86_AT(c, 0xd34acu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d34ae  push 0xb
    X86_AT(c, 0xd34aeu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d34b0  call 0xca9c8
    X86_AT(c, 0xd34b0u);
    push32(c, 0xd34b5u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd34b5u);
    X86_TICK(c, 13);
    // 0d34b5  add esp, 0x3c
    X86_AT(c, 0xd34b5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d34b8  push 0x8bd0
    X86_AT(c, 0xd34b8u);
    { uint32_t v = 0x8BD0u; push32(c, v); }
    // 0d34bd  push 0xb
    X86_AT(c, 0xd34bdu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d34bf  call 0xc8cdc
    X86_AT(c, 0xd34bfu);
    push32(c, 0xd34c4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd34c4u);
    X86_TICK(c, 13);
    // 0d34c4  push 9
    X86_AT(c, 0xd34c4u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d34c6  push 0
    X86_AT(c, 0xd34c6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d34c8  push 0xb
    X86_AT(c, 0xd34c8u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d34ca  call 0xca9c8
    X86_AT(c, 0xd34cau);
    push32(c, 0xd34cfu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd34cfu);
    X86_TICK(c, 11);
    // 0d34cf  push 0x8bec
    X86_AT(c, 0xd34cfu);
    { uint32_t v = 0x8BECu; push32(c, v); }
    // 0d34d4  push 0xb
    X86_AT(c, 0xd34d4u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d34d6  call 0xc8cdc
    X86_AT(c, 0xd34d6u);
    push32(c, 0xd34dbu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd34dbu);
    X86_TICK(c, 27);
    // 0d34db  push 0
    X86_AT(c, 0xd34dbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d34dd  push 0xf
    X86_AT(c, 0xd34ddu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d34df  push 0xf
    X86_AT(c, 0xd34dfu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d34e1  push 6
    X86_AT(c, 0xd34e1u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d34e3  push 0x1f
    X86_AT(c, 0xd34e3u);
    { uint32_t v = 0x1Fu; push32(c, v); }
    // 0d34e5  push 0x75
    X86_AT(c, 0xd34e5u);
    { uint32_t v = 0x75u; push32(c, v); }
    // 0d34e7  push 0x107
    X86_AT(c, 0xd34e7u);
    { uint32_t v = 0x107u; push32(c, v); }
    // 0d34ec  push 0x12f
    X86_AT(c, 0xd34ecu);
    { uint32_t v = 0x12Fu; push32(c, v); }
    // 0d34f1  push 0x172
    X86_AT(c, 0xd34f1u);
    { uint32_t v = 0x172u; push32(c, v); }
    // 0d34f6  push 7
    X86_AT(c, 0xd34f6u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d34f8  call 0xc9fbc
    X86_AT(c, 0xd34f8u);
    push32(c, 0xd34fdu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd34fdu);
    X86_TICK(c, 11);
    // 0d34fd  add esp, 0x44
    X86_AT(c, 0xd34fdu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x44u, 0, 4); }
    // 0d3500  push 7
    X86_AT(c, 0xd3500u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3502  call 0xca0a0
    X86_AT(c, 0xd3502u);
    push32(c, 0xd3507u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd3507u);
    X86_TICK(c, 9);
    // 0d3507  push 7
    X86_AT(c, 0xd3507u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3509  call 0xca100
    X86_AT(c, 0xd3509u);
    push32(c, 0xd350eu); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd350eu);
    X86_TICK(c, 9);
    // 0d350e  push 7
    X86_AT(c, 0xd350eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3510  call 0xcacd4
    X86_AT(c, 0xd3510u);
    push32(c, 0xd3515u); x86_call_known(c, 0xcacd4u, f_000cacd4); X86_RET(c, 0xd3515u);
    X86_TICK(c, 16);
    // 0d3515  add esp, 0xc
    X86_AT(c, 0xd3515u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d3518  pop edi
    X86_AT(c, 0xd3518u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3519  ret 
    X86_AT(c, 0xd3519u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3370u, "ran off the end of a function");
}
void f_000d351c(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0d351c  push edi
    X86_AT(c, 0xd351cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d351d  mov edi, 0xa
    X86_AT(c, 0xd351du);
    c.r[7] = 0xAu;
    // 0d3522  cmp dword ptr [0xb02fe], 0
    X86_AT(c, 0xd3522u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x0u, 0, 4);
    // 0d3529  jne 0xd352f
    X86_AT(c, 0xd3529u);
    if (x86_cc(c, 5)) { goto L_d352f; }
    X86_TICK(c, 9);
    // 0d352b  push 0xe
    X86_AT(c, 0xd352bu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d352d  jmp 0xd353e
    X86_AT(c, 0xd352du);
    goto L_d353e;
L_d352f:
    X86_TICK(c, 12);
    // 0d352f  cmp dword ptr [0xb02fe], 0x32
    X86_AT(c, 0xd352fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB02FEu))), 0x32u, 0, 4);
    // 0d3536  jge 0xd353c
    X86_AT(c, 0xd3536u);
    if (x86_cc(c, 13)) { goto L_d353c; }
    X86_TICK(c, 9);
    // 0d3538  push 0xb
    X86_AT(c, 0xd3538u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d353a  jmp 0xd353e
    X86_AT(c, 0xd353au);
    goto L_d353e;
L_d353c:
    X86_TICK(c, 2);
    // 0d353c  push 0xf
    X86_AT(c, 0xd353cu);
    { uint32_t v = 0xFu; push32(c, v); }
L_d353e:
    X86_TICK(c, 9);
    // 0d353e  push edi
    X86_AT(c, 0xd353eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d353f  call 0xcac40
    X86_AT(c, 0xd353fu);
    push32(c, 0xd3544u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd3544u);
    X86_TICK(c, 11);
    // 0d3544  add esp, 8
    X86_AT(c, 0xd3544u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3547  push edi
    X86_AT(c, 0xd3547u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3548  call 0xca0a0
    X86_AT(c, 0xd3548u);
    push32(c, 0xd354du); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd354du);
    X86_TICK(c, 13);
    // 0d354d  push 1
    X86_AT(c, 0xd354du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d354f  push 7
    X86_AT(c, 0xd354fu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3551  push edi
    X86_AT(c, 0xd3551u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3552  call 0xca9c8
    X86_AT(c, 0xd3552u);
    push32(c, 0xd3557u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd3557u);
    X86_TICK(c, 16);
    // 0d3557  push 4
    X86_AT(c, 0xd3557u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d3559  push dword ptr [0xb02fe]
    X86_AT(c, 0xd3559u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB02FEu))); push32(c, v); }
    // 0d355f  push edi
    X86_AT(c, 0xd355fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3560  call 0xc8cb8
    X86_AT(c, 0xd3560u);
    push32(c, 0xd3565u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd3565u);
    X86_TICK(c, 13);
    // 0d3565  push 2
    X86_AT(c, 0xd3565u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d3567  push 7
    X86_AT(c, 0xd3567u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3569  push edi
    X86_AT(c, 0xd3569u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d356a  call 0xca9c8
    X86_AT(c, 0xd356au);
    push32(c, 0xd356fu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd356fu);
    X86_TICK(c, 16);
    // 0d356f  push 4
    X86_AT(c, 0xd356fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d3571  push dword ptr [0xb0322]
    X86_AT(c, 0xd3571u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB0322u))); push32(c, v); }
    // 0d3577  push edi
    X86_AT(c, 0xd3577u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3578  call 0xc8cb8
    X86_AT(c, 0xd3578u);
    push32(c, 0xd357du); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd357du);
    X86_TICK(c, 13);
    // 0d357d  push 1
    X86_AT(c, 0xd357du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d357f  push 0x16
    X86_AT(c, 0xd357fu);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0d3581  push edi
    X86_AT(c, 0xd3581u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3582  call 0xca9c8
    X86_AT(c, 0xd3582u);
    push32(c, 0xd3587u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd3587u);
    X86_TICK(c, 18);
    // 0d3587  add esp, 0x40
    X86_AT(c, 0xd3587u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d358a  push 4
    X86_AT(c, 0xd358au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d358c  push dword ptr [0xb031e]
    X86_AT(c, 0xd358cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB031Eu))); push32(c, v); }
    // 0d3592  push edi
    X86_AT(c, 0xd3592u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3593  call 0xc8cb8
    X86_AT(c, 0xd3593u);
    push32(c, 0xd3598u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd3598u);
    X86_TICK(c, 13);
    // 0d3598  push 2
    X86_AT(c, 0xd3598u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d359a  push 0x16
    X86_AT(c, 0xd359au);
    { uint32_t v = 0x16u; push32(c, v); }
    // 0d359c  push edi
    X86_AT(c, 0xd359cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d359d  call 0xca9c8
    X86_AT(c, 0xd359du);
    push32(c, 0xd35a2u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd35a2u);
    X86_TICK(c, 16);
    // 0d35a2  push 4
    X86_AT(c, 0xd35a2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d35a4  push dword ptr [0xb031a]
    X86_AT(c, 0xd35a4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xB031Au))); push32(c, v); }
    // 0d35aa  push edi
    X86_AT(c, 0xd35aau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d35ab  call 0xc8cb8
    X86_AT(c, 0xd35abu);
    push32(c, 0xd35b0u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd35b0u);
    X86_TICK(c, 11);
    // 0d35b0  push 0xf
    X86_AT(c, 0xd35b0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d35b2  push edi
    X86_AT(c, 0xd35b2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d35b3  call 0xcac40
    X86_AT(c, 0xd35b3u);
    push32(c, 0xd35b8u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd35b8u);
    X86_TICK(c, 16);
    // 0d35b8  add esp, 0x2c
    X86_AT(c, 0xd35b8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d35bb  pop edi
    X86_AT(c, 0xd35bbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d35bc  ret 
    X86_AT(c, 0xd35bcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd351cu, "ran off the end of a function");
}
void f_000d35c0(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d35c0  push 0xa
    X86_AT(c, 0xd35c0u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d35c2  push 0xf
    X86_AT(c, 0xd35c2u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d35c4  push 0xf
    X86_AT(c, 0xd35c4u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d35c6  push 0
    X86_AT(c, 0xd35c6u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d35c8  push 0x1e
    X86_AT(c, 0xd35c8u);
    { uint32_t v = 0x1Eu; push32(c, v); }
    // 0d35ca  push 0x14
    X86_AT(c, 0xd35cau);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0d35cc  push 0x100
    X86_AT(c, 0xd35ccu);
    { uint32_t v = 0x100u; push32(c, v); }
    // 0d35d1  push 0x191
    X86_AT(c, 0xd35d1u);
    { uint32_t v = 0x191u; push32(c, v); }
    // 0d35d6  push 0x3a
    X86_AT(c, 0xd35d6u);
    { uint32_t v = 0x3Au; push32(c, v); }
    // 0d35d8  push 3
    X86_AT(c, 0xd35d8u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d35da  call 0xc9fbc
    X86_AT(c, 0xd35dau);
    push32(c, 0xd35dfu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd35dfu);
    X86_TICK(c, 9);
    // 0d35df  push 3
    X86_AT(c, 0xd35dfu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d35e1  call 0xca100
    X86_AT(c, 0xd35e1u);
    push32(c, 0xd35e6u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd35e6u);
    X86_TICK(c, 12);
    // 0d35e6  add esp, 0x2c
    X86_AT(c, 0xd35e6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d35e9  ret 
    X86_AT(c, 0xd35e9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd35c0u, "ran off the end of a function");
}
void f_000d35ec(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0d35ec  push 9
    X86_AT(c, 0xd35ecu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d35ee  push 0xe
    X86_AT(c, 0xd35eeu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d35f0  push 0xf
    X86_AT(c, 0xd35f0u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d35f2  push 0
    X86_AT(c, 0xd35f2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d35f4  push 7
    X86_AT(c, 0xd35f4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d35f6  push 0x14
    X86_AT(c, 0xd35f6u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0d35f8  push 0x44
    X86_AT(c, 0xd35f8u);
    { uint32_t v = 0x44u; push32(c, v); }
    // 0d35fa  push 0x19
    X86_AT(c, 0xd35fau);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0d35fc  push 0x98
    X86_AT(c, 0xd35fcu);
    { uint32_t v = 0x98u; push32(c, v); }
    // 0d3601  push 8
    X86_AT(c, 0xd3601u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d3603  call 0xc9fbc
    X86_AT(c, 0xd3603u);
    push32(c, 0xd3608u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd3608u);
    X86_TICK(c, 9);
    // 0d3608  push 8
    X86_AT(c, 0xd3608u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d360a  call 0xca100
    X86_AT(c, 0xd360au);
    push32(c, 0xd360fu); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd360fu);
    X86_TICK(c, 12);
    // 0d360f  add esp, 0x2c
    X86_AT(c, 0xd360fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d3612  ret 
    X86_AT(c, 0xd3612u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd35ecu, "ran off the end of a function");
}
void f_000d362c(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0d362c  push ebp
    X86_AT(c, 0xd362cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d362d  mov ebp, esp
    X86_AT(c, 0xd362du);
    c.r[5] = c.r[4];
    // 0d362f  sub esp, 0xc
    X86_AT(c, 0xd362fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0d3632  push ebx
    X86_AT(c, 0xd3632u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3633  push esi
    X86_AT(c, 0xd3633u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3634  push edi
    X86_AT(c, 0xd3634u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3635  sub eax, eax
    X86_AT(c, 0xd3635u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d3637  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd3637u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d363a  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd363au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d363d  movzx edx, byte ptr [ebp + 8]
    X86_AT(c, 0xd363du);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d3641  sub edx, 3
    X86_AT(c, 0xd3641u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0d3644  cmp edx, 4
    X86_AT(c, 0xd3644u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0d3647  ja 0xd3687
    X86_AT(c, 0xd3647u);
    if (x86_cc(c, 7)) { goto L_d3687; }
    X86_TICK(c, 7);
    // 0d3649  jmp dword ptr cs:[edx*4 + 0xd3651]
    X86_AT(c, 0xd3649u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD3651u)));
      switch (t) {
      case 0xd3665u: goto L_d3665;
      case 0xd366eu: goto L_d366e;
      case 0xd3677u: goto L_d3677;
      case 0xd3680u: goto L_d3680;
      case 0xd3687u: goto L_d3687;
      default: x86_jump(c, t); return; } }
L_d3665:
    X86_TICK(c, 9);
    // 0d3665  mov dword ptr [ebp - 8], 0xffffffff
    X86_AT(c, 0xd3665u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFFFFFu);
    // 0d366c  jmp 0xd3687
    X86_AT(c, 0xd366cu);
    goto L_d3687;
L_d366e:
    X86_TICK(c, 9);
    // 0d366e  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0xd366eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 0d3675  jmp 0xd3687
    X86_AT(c, 0xd3675u);
    goto L_d3687;
L_d3677:
    X86_TICK(c, 9);
    // 0d3677  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xd3677u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0d367e  jmp 0xd3687
    X86_AT(c, 0xd367eu);
    goto L_d3687;
L_d3680:
    X86_TICK(c, 2);
    // 0d3680  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0xd3680u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
L_d3687:
    X86_TICK(c, 17);
    // 0d3687  push 1
    X86_AT(c, 0xd3687u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3689  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd3689u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d368c  add eax, 5
    X86_AT(c, 0xd368cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x5u, 0, 4); }
    // 0d368f  push eax
    X86_AT(c, 0xd368fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d3690  call 0xcc5d8
    X86_AT(c, 0xd3690u);
    push32(c, 0xd3695u); x86_call_known(c, 0xcc5d8u, f_000cc5d8); X86_RET(c, 0xd3695u);
    X86_TICK(c, 19);
    // 0d3695  add esp, 4
    X86_AT(c, 0xd3695u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d3698  push eax
    X86_AT(c, 0xd3698u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d3699  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd3699u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d369c  add eax, 5
    X86_AT(c, 0xd369cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x5u, 0, 4); }
    // 0d369f  push eax
    X86_AT(c, 0xd369fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d36a0  call 0xcc5ac
    X86_AT(c, 0xd36a0u);
    push32(c, 0xd36a5u); x86_call_known(c, 0xcc5acu, f_000cc5ac); X86_RET(c, 0xd36a5u);
    X86_TICK(c, 11);
    // 0d36a5  add esp, 4
    X86_AT(c, 0xd36a5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d36a8  push eax
    X86_AT(c, 0xd36a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d36a9  call 0xcc538
    X86_AT(c, 0xd36a9u);
    push32(c, 0xd36aeu); x86_call_known(c, 0xcc538u, f_000cc538); X86_RET(c, 0xd36aeu);
    X86_TICK(c, 18);
    // 0d36ae  xchg edi, eax
    X86_AT(c, 0xd36aeu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d36af  mov esi, 1
    X86_AT(c, 0xd36afu);
    c.r[6] = 0x1u;
    // 0d36b4  mov ebx, dword ptr [0xb0332]
    X86_AT(c, 0xd36b4u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xB0332u)));
    // 0d36ba  add esp, 0xc
    X86_AT(c, 0xd36bau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d36bd  cmp edi, 0x8b
    X86_AT(c, 0xd36bdu);
    (void)x86_sub(c, c.r[7], 0x8Bu, 0, 4);
    // 0d36c3  jl 0xd3769
    X86_AT(c, 0xd36c3u);
    if (x86_cc(c, 12)) { goto L_d3769; }
    X86_TICK(c, 7);
    // 0d36c9  cmp edi, 0x99
    X86_AT(c, 0xd36c9u);
    (void)x86_sub(c, c.r[7], 0x99u, 0, 4);
    // 0d36cf  jg 0xd3769
    X86_AT(c, 0xd36cfu);
    if (x86_cc(c, 15)) { goto L_d3769; }
    X86_TICK(c, 18);
    // 0d36d5  lea eax, [edi - 0x8b]
    X86_AT(c, 0xd36d5u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFF75u);
    // 0d36db  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd36dbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d36de  push dword ptr [0xaa26c]
    X86_AT(c, 0xd36deu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xAA26Cu))); push32(c, v); }
    // 0d36e4  push 7
    X86_AT(c, 0xd36e4u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d36e6  call 0xc8cdc
    X86_AT(c, 0xd36e6u);
    push32(c, 0xd36ebu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd36ebu);
    X86_TICK(c, 23);
    // 0d36eb  sub esi, esi
    X86_AT(c, 0xd36ebu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d36ed  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd36edu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0d36f0  mov eax, dword ptr [eax*4 + 0xab108]
    X86_AT(c, 0xd36f0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAB108u)));
    // 0d36f7  mov al, byte ptr [eax]
    X86_AT(c, 0xd36f7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0d36f9  push eax
    X86_AT(c, 0xd36f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d36fa  call 0xcf864
    X86_AT(c, 0xd36fau);
    push32(c, 0xd36ffu); x86_call_known(c, 0xcf864u, f_000cf864); X86_RET(c, 0xd36ffu);
    X86_TICK(c, 9);
    // 0d36ff  add esp, 0xc
    X86_AT(c, 0xd36ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d3702  cmp esi, eax
    X86_AT(c, 0xd3702u);
    (void)x86_sub(c, c.r[6], c.r[0], 0, 4);
    // 0d3704  je 0xd3715
    X86_AT(c, 0xd3704u);
    if (x86_cc(c, 4)) { goto L_d3715; }
    X86_TICK(c, 11);
    // 0d3706  push 0x8c08
    X86_AT(c, 0xd3706u);
    { uint32_t v = 0x8C08u; push32(c, v); }
    // 0d370b  push 7
    X86_AT(c, 0xd370bu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d370d  call 0xc8cdc
    X86_AT(c, 0xd370du);
    push32(c, 0xd3712u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd3712u);
    X86_TICK(c, 2);
    // 0d3712  add esp, 8
    X86_AT(c, 0xd3712u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d3715:
    X86_TICK(c, 11);
    // 0d3715  push 0x8c0c
    X86_AT(c, 0xd3715u);
    { uint32_t v = 0x8C0Cu; push32(c, v); }
    // 0d371a  push 7
    X86_AT(c, 0xd371au);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d371c  call 0xc8cdc
    X86_AT(c, 0xd371cu);
    push32(c, 0xd3721u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd3721u);
    X86_TICK(c, 9);
    // 0d3721  add esp, 8
    X86_AT(c, 0xd3721u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3724  cmp edi, 0x99
    X86_AT(c, 0xd3724u);
    (void)x86_sub(c, c.r[7], 0x99u, 0, 4);
    // 0d372a  jne 0xd3736
    X86_AT(c, 0xd372au);
    if (x86_cc(c, 5)) { goto L_d3736; }
    X86_TICK(c, 9);
    // 0d372c  push 7
    X86_AT(c, 0xd372cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d372e  call 0xca3cc
    X86_AT(c, 0xd372eu);
    push32(c, 0xd3733u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd3733u);
    X86_TICK(c, 2);
    // 0d3733  add esp, 4
    X86_AT(c, 0xd3733u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d3736:
    X86_TICK(c, 18);
    // 0d3736  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd3736u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0d3739  push dword ptr [eax*4 + 0xab108]
    X86_AT(c, 0xd3739u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xAB108u))); push32(c, v); }
    // 0d3740  push 7
    X86_AT(c, 0xd3740u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3742  call 0xc8cdc
    X86_AT(c, 0xd3742u);
    push32(c, 0xd3747u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd3747u);
    X86_TICK(c, 11);
    // 0d3747  push 0x8c14
    X86_AT(c, 0xd3747u);
    { uint32_t v = 0x8C14u; push32(c, v); }
    // 0d374c  push 7
    X86_AT(c, 0xd374cu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d374e  call 0xc8cdc
    X86_AT(c, 0xd374eu);
    push32(c, 0xd3753u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd3753u);
    X86_TICK(c, 9);
    // 0d3753  push 7
    X86_AT(c, 0xd3753u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d3755  call 0xca3cc
    X86_AT(c, 0xd3755u);
    push32(c, 0xd375au); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd375au);
    X86_TICK(c, 9);
    // 0d375a  push 0
    X86_AT(c, 0xd375au);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d375c  call 0xc5ca4
    X86_AT(c, 0xd375cu);
    push32(c, 0xd3761u); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd3761u);
    X86_TICK(c, 9);
    // 0d3761  add esp, 0x18
    X86_AT(c, 0xd3761u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x18u, 0, 4); }
    // 0d3764  jmp 0xd3864
    X86_AT(c, 0xd3764u);
    goto L_d3864;
L_d3769:
    X86_TICK(c, 7);
    // 0d3769  cmp edi, 5
    X86_AT(c, 0xd3769u);
    (void)x86_sub(c, c.r[7], 0x5u, 0, 4);
    // 0d376c  jne 0xd3775
    X86_AT(c, 0xd376cu);
    if (x86_cc(c, 5)) { goto L_d3775; }
    X86_TICK(c, 9);
    // 0d376e  push 1
    X86_AT(c, 0xd376eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3770  jmp 0xd37fa
    X86_AT(c, 0xd3770u);
    goto L_d37fa;
L_d3775:
    X86_TICK(c, 7);
    // 0d3775  cmp edi, 1
    X86_AT(c, 0xd3775u);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0d3778  je 0xd3789
    X86_AT(c, 0xd3778u);
    if (x86_cc(c, 4)) { goto L_d3789; }
    X86_TICK(c, 7);
    // 0d377a  cmp edi, 0xa
    X86_AT(c, 0xd377au);
    (void)x86_sub(c, c.r[7], 0xAu, 0, 4);
    // 0d377d  je 0xd3789
    X86_AT(c, 0xd377du);
    if (x86_cc(c, 4)) { goto L_d3789; }
    X86_TICK(c, 7);
    // 0d377f  cmp edi, 0x11
    X86_AT(c, 0xd377fu);
    (void)x86_sub(c, c.r[7], 0x11u, 0, 4);
    // 0d3782  jle 0xd37ab
    X86_AT(c, 0xd3782u);
    if (x86_cc(c, 14)) { goto L_d37ab; }
    X86_TICK(c, 7);
    // 0d3784  cmp edi, 0x21
    X86_AT(c, 0xd3784u);
    (void)x86_sub(c, c.r[7], 0x21u, 0, 4);
    // 0d3787  jge 0xd37ab
    X86_AT(c, 0xd3787u);
    if (x86_cc(c, 13)) { goto L_d37ab; }
L_d3789:
    X86_TICK(c, 7);
    // 0d3789  cmp ebx, 4
    X86_AT(c, 0xd3789u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0d378c  je 0xd3864
    X86_AT(c, 0xd378cu);
    if (x86_cc(c, 4)) { goto L_d3864; }
    X86_TICK(c, 7);
    // 0d3792  cmp ebx, 3
    X86_AT(c, 0xd3792u);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0d3795  je 0xd3864
    X86_AT(c, 0xd3795u);
    if (x86_cc(c, 4)) { goto L_d3864; }
    X86_TICK(c, 7);
    // 0d379b  cmp ebx, 5
    X86_AT(c, 0xd379bu);
    (void)x86_sub(c, c.r[3], 0x5u, 0, 4);
    // 0d379e  je 0xd3864
    X86_AT(c, 0xd379eu);
    if (x86_cc(c, 4)) { goto L_d3864; }
    X86_TICK(c, 9);
    // 0d37a4  push 0
    X86_AT(c, 0xd37a4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d37a6  jmp 0xd37fa
    X86_AT(c, 0xd37a6u);
    goto L_d37fa;
L_d37ab:
    X86_TICK(c, 7);
    // 0d37ab  cmp edi, 3
    X86_AT(c, 0xd37abu);
    (void)x86_sub(c, c.r[7], 0x3u, 0, 4);
    // 0d37ae  jne 0xd37b9
    X86_AT(c, 0xd37aeu);
    if (x86_cc(c, 5)) { goto L_d37b9; }
    X86_TICK(c, 7);
    // 0d37b0  cmp ebx, 5
    X86_AT(c, 0xd37b0u);
    (void)x86_sub(c, c.r[3], 0x5u, 0, 4);
    // 0d37b3  jne 0xd37b9
    X86_AT(c, 0xd37b3u);
    if (x86_cc(c, 5)) { goto L_d37b9; }
    X86_TICK(c, 9);
    // 0d37b5  push 2
    X86_AT(c, 0xd37b5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d37b7  jmp 0xd37fa
    X86_AT(c, 0xd37b7u);
    goto L_d37fa;
L_d37b9:
    X86_TICK(c, 7);
    // 0d37b9  cmp ebx, 4
    X86_AT(c, 0xd37b9u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0d37bc  jne 0xd37d6
    X86_AT(c, 0xd37bcu);
    if (x86_cc(c, 5)) { goto L_d37d6; }
    X86_TICK(c, 7);
    // 0d37be  cmp edi, 1
    X86_AT(c, 0xd37beu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0d37c1  jne 0xd37d2
    X86_AT(c, 0xd37c1u);
    if (x86_cc(c, 5)) { goto L_d37d2; }
    X86_TICK(c, 7);
    // 0d37c3  cmp edi, 0xa
    X86_AT(c, 0xd37c3u);
    (void)x86_sub(c, c.r[7], 0xAu, 0, 4);
    // 0d37c6  jne 0xd37d2
    X86_AT(c, 0xd37c6u);
    if (x86_cc(c, 5)) { goto L_d37d2; }
    X86_TICK(c, 7);
    // 0d37c8  cmp edi, 0x11
    X86_AT(c, 0xd37c8u);
    (void)x86_sub(c, c.r[7], 0x11u, 0, 4);
    // 0d37cb  jg 0xd37d6
    X86_AT(c, 0xd37cbu);
    if (x86_cc(c, 15)) { goto L_d37d6; }
    X86_TICK(c, 7);
    // 0d37cd  cmp edi, 0x21
    X86_AT(c, 0xd37cdu);
    (void)x86_sub(c, c.r[7], 0x21u, 0, 4);
    // 0d37d0  jl 0xd37d6
    X86_AT(c, 0xd37d0u);
    if (x86_cc(c, 12)) { goto L_d37d6; }
L_d37d2:
    X86_TICK(c, 9);
    // 0d37d2  push 3
    X86_AT(c, 0xd37d2u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d37d4  jmp 0xd37fa
    X86_AT(c, 0xd37d4u);
    goto L_d37fa;
L_d37d6:
    X86_TICK(c, 7);
    // 0d37d6  cmp ebx, 3
    X86_AT(c, 0xd37d6u);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0d37d9  jne 0xd37f3
    X86_AT(c, 0xd37d9u);
    if (x86_cc(c, 5)) { goto L_d37f3; }
    X86_TICK(c, 7);
    // 0d37db  cmp edi, 1
    X86_AT(c, 0xd37dbu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0d37de  jne 0xd37ef
    X86_AT(c, 0xd37deu);
    if (x86_cc(c, 5)) { goto L_d37ef; }
    X86_TICK(c, 7);
    // 0d37e0  cmp edi, 0xa
    X86_AT(c, 0xd37e0u);
    (void)x86_sub(c, c.r[7], 0xAu, 0, 4);
    // 0d37e3  jne 0xd37ef
    X86_AT(c, 0xd37e3u);
    if (x86_cc(c, 5)) { goto L_d37ef; }
    X86_TICK(c, 7);
    // 0d37e5  cmp edi, 0x11
    X86_AT(c, 0xd37e5u);
    (void)x86_sub(c, c.r[7], 0x11u, 0, 4);
    // 0d37e8  jg 0xd37f3
    X86_AT(c, 0xd37e8u);
    if (x86_cc(c, 15)) { goto L_d37f3; }
    X86_TICK(c, 7);
    // 0d37ea  cmp edi, 0x21
    X86_AT(c, 0xd37eau);
    (void)x86_sub(c, c.r[7], 0x21u, 0, 4);
    // 0d37ed  jl 0xd37f3
    X86_AT(c, 0xd37edu);
    if (x86_cc(c, 12)) { goto L_d37f3; }
L_d37ef:
    X86_TICK(c, 9);
    // 0d37ef  push 4
    X86_AT(c, 0xd37efu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d37f1  jmp 0xd37fa
    X86_AT(c, 0xd37f1u);
    goto L_d37fa;
L_d37f3:
    X86_TICK(c, 7);
    // 0d37f3  cmp ebx, 6
    X86_AT(c, 0xd37f3u);
    (void)x86_sub(c, c.r[3], 0x6u, 0, 4);
    // 0d37f6  jl 0xd3808
    X86_AT(c, 0xd37f6u);
    if (x86_cc(c, 12)) { goto L_d3808; }
    X86_TICK(c, 2);
    // 0d37f8  push 6
    X86_AT(c, 0xd37f8u);
    { uint32_t v = 0x6u; push32(c, v); }
L_d37fa:
    X86_TICK(c, 7);
    // 0d37fa  call 0xcf8fc
    X86_AT(c, 0xd37fau);
    push32(c, 0xd37ffu); x86_call_known(c, 0xcf8fcu, f_000cf8fc); X86_RET(c, 0xd37ffu);
    X86_TICK(c, 12);
    // 0d37ff  xchg esi, eax
    X86_AT(c, 0xd37ffu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d3800  add esp, 4
    X86_AT(c, 0xd3800u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d3803  jmp 0xd3864
    X86_AT(c, 0xd3803u);
    goto L_d3864;
L_d3808:
    X86_TICK(c, 12);
    // 0d3808  cmp dword ptr [0xb0332], 1
    X86_AT(c, 0xd3808u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0332u))), 0x1u, 0, 4);
    // 0d380f  je 0xd3864
    X86_AT(c, 0xd380fu);
    if (x86_cc(c, 4)) { goto L_d3864; }
    X86_TICK(c, 12);
    // 0d3815  cmp dword ptr [0xb0332], 3
    X86_AT(c, 0xd3815u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB0332u))), 0x3u, 0, 4);
    // 0d381c  jne 0xd3839
    X86_AT(c, 0xd381cu);
    if (x86_cc(c, 5)) { goto L_d3839; }
    X86_TICK(c, 7);
    // 0d381e  cmp edi, 1
    X86_AT(c, 0xd381eu);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0d3821  je 0xd3832
    X86_AT(c, 0xd3821u);
    if (x86_cc(c, 4)) { goto L_d3832; }
    X86_TICK(c, 7);
    // 0d3823  cmp edi, 0xa
    X86_AT(c, 0xd3823u);
    (void)x86_sub(c, c.r[7], 0xAu, 0, 4);
    // 0d3826  je 0xd3832
    X86_AT(c, 0xd3826u);
    if (x86_cc(c, 4)) { goto L_d3832; }
    X86_TICK(c, 7);
    // 0d3828  cmp edi, 0x11
    X86_AT(c, 0xd3828u);
    (void)x86_sub(c, c.r[7], 0x11u, 0, 4);
    // 0d382b  jle 0xd3860
    X86_AT(c, 0xd382bu);
    if (x86_cc(c, 14)) { goto L_d3860; }
    X86_TICK(c, 7);
    // 0d382d  cmp edi, 0x21
    X86_AT(c, 0xd382du);
    (void)x86_sub(c, c.r[7], 0x21u, 0, 4);
    // 0d3830  jge 0xd3860
    X86_AT(c, 0xd3830u);
    if (x86_cc(c, 13)) { goto L_d3860; }
L_d3832:
    X86_TICK(c, 9);
    // 0d3832  mov eax, 1
    X86_AT(c, 0xd3832u);
    c.r[0] = 0x1u;
    // 0d3837  jmp 0xd3866
    X86_AT(c, 0xd3837u);
    goto L_d3866;
L_d3839:
    X86_TICK(c, 9);
    // 0d3839  mov edx, edi
    X86_AT(c, 0xd3839u);
    c.r[2] = c.r[7];
    // 0d383b  cmp edx, 0x10
    X86_AT(c, 0xd383bu);
    (void)x86_sub(c, c.r[2], 0x10u, 0, 4);
    // 0d383e  je 0xd3860
    X86_AT(c, 0xd383eu);
    if (x86_cc(c, 4)) { goto L_d3860; }
    X86_TICK(c, 7);
    // 0d3840  cmp edx, 0x11
    X86_AT(c, 0xd3840u);
    (void)x86_sub(c, c.r[2], 0x11u, 0, 4);
    // 0d3843  je 0xd3860
    X86_AT(c, 0xd3843u);
    if (x86_cc(c, 4)) { goto L_d3860; }
    X86_TICK(c, 7);
    // 0d3845  cmp edx, 0x24
    X86_AT(c, 0xd3845u);
    (void)x86_sub(c, c.r[2], 0x24u, 0, 4);
    // 0d3848  je 0xd3860
    X86_AT(c, 0xd3848u);
    if (x86_cc(c, 4)) { goto L_d3860; }
    X86_TICK(c, 9);
    // 0d384a  mov edx, edi
    X86_AT(c, 0xd384au);
    c.r[2] = c.r[7];
    // 0d384c  cmp edx, 0xc
    X86_AT(c, 0xd384cu);
    (void)x86_sub(c, c.r[2], 0xCu, 0, 4);
    // 0d384f  je 0xd3860
    X86_AT(c, 0xd384fu);
    if (x86_cc(c, 4)) { goto L_d3860; }
    X86_TICK(c, 7);
    // 0d3851  cmp edx, 0xf
    X86_AT(c, 0xd3851u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0d3854  je 0xd3860
    X86_AT(c, 0xd3854u);
    if (x86_cc(c, 4)) { goto L_d3860; }
    X86_TICK(c, 7);
    // 0d3856  cmp edi, 0x25
    X86_AT(c, 0xd3856u);
    (void)x86_sub(c, c.r[7], 0x25u, 0, 4);
    // 0d3859  jl 0xd3864
    X86_AT(c, 0xd3859u);
    if (x86_cc(c, 12)) { goto L_d3864; }
    X86_TICK(c, 7);
    // 0d385b  cmp edi, 0x3f
    X86_AT(c, 0xd385bu);
    (void)x86_sub(c, c.r[7], 0x3Fu, 0, 4);
    // 0d385e  jg 0xd3864
    X86_AT(c, 0xd385eu);
    if (x86_cc(c, 15)) { goto L_d3864; }
L_d3860:
    X86_TICK(c, 9);
    // 0d3860  sub eax, eax
    X86_AT(c, 0xd3860u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d3862  jmp 0xd3866
    X86_AT(c, 0xd3862u);
    goto L_d3866;
L_d3864:
    X86_TICK(c, 2);
    // 0d3864  mov eax, esi
    X86_AT(c, 0xd3864u);
    c.r[0] = c.r[6];
L_d3866:
    X86_TICK(c, 28);
    // 0d3866  pop edi
    X86_AT(c, 0xd3866u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3867  pop esi
    X86_AT(c, 0xd3867u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3868  pop ebx
    X86_AT(c, 0xd3868u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3869  leave 
    X86_AT(c, 0xd3869u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d386a  ret 
    X86_AT(c, 0xd386au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd362cu, "ran off the end of a function");
}
void f_000d37fa(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0d37fa  call 0xcf8fc
    X86_AT(c, 0xd37fau);
    push32(c, 0xd37ffu); x86_call_known(c, 0xcf8fcu, f_000cf8fc); X86_RET(c, 0xd37ffu);
    X86_TICK(c, 12);
    // 0d37ff  xchg esi, eax
    X86_AT(c, 0xd37ffu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d3800  add esp, 4
    X86_AT(c, 0xd3800u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d3803  jmp 0xd3864
    X86_AT(c, 0xd3803u);
    goto L_d3864;
L_d3864:
    X86_TICK(c, 30);
    // 0d3864  mov eax, esi
    X86_AT(c, 0xd3864u);
    c.r[0] = c.r[6];
    // 0d3866  pop edi
    X86_AT(c, 0xd3866u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3867  pop esi
    X86_AT(c, 0xd3867u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3868  pop ebx
    X86_AT(c, 0xd3868u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3869  leave 
    X86_AT(c, 0xd3869u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d386a  ret 
    X86_AT(c, 0xd386au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd37fau, "ran off the end of a function");
}
void f_000d3864(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0d3864  mov eax, esi
    X86_AT(c, 0xd3864u);
    c.r[0] = c.r[6];
    // 0d3866  pop edi
    X86_AT(c, 0xd3866u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3867  pop esi
    X86_AT(c, 0xd3867u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3868  pop ebx
    X86_AT(c, 0xd3868u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3869  leave 
    X86_AT(c, 0xd3869u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d386a  ret 
    X86_AT(c, 0xd386au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3864u, "ran off the end of a function");
}
void f_000d386c(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0d386c  push ebp
    X86_AT(c, 0xd386cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d386d  mov ebp, esp
    X86_AT(c, 0xd386du);
    c.r[5] = c.r[4];
    // 0d386f  sub esp, 8
    X86_AT(c, 0xd386fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0d3872  push ebx
    X86_AT(c, 0xd3872u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3873  push esi
    X86_AT(c, 0xd3873u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3874  push edi
    X86_AT(c, 0xd3874u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3875  sub edi, edi
    X86_AT(c, 0xd3875u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d3877  mov dword ptr [ebp - 4], edi
    X86_AT(c, 0xd3877u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[7]);
    // 0d387a  movzx edx, byte ptr [ebp + 8]
    X86_AT(c, 0xd387au);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d387e  sub edx, 3
    X86_AT(c, 0xd387eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x3u, 0, 4); }
    // 0d3881  cmp edx, 4
    X86_AT(c, 0xd3881u);
    (void)x86_sub(c, c.r[2], 0x4u, 0, 4);
    // 0d3884  ja 0xd38c0
    X86_AT(c, 0xd3884u);
    if (x86_cc(c, 7)) { goto L_d38c0; }
    X86_TICK(c, 7);
    // 0d3886  jmp dword ptr cs:[edx*4 + 0xd388e]
    X86_AT(c, 0xd3886u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD388Eu)));
      switch (t) {
      case 0xd38a2u: goto L_d38a2;
      case 0xd38a9u: goto L_d38a9;
      case 0xd38b0u: goto L_d38b0;
      case 0xd38b9u: goto L_d38b9;
      case 0xd38c0u: goto L_d38c0;
      default: x86_jump(c, t); return; } }
L_d38a2:
    X86_TICK(c, 9);
    // 0d38a2  mov edi, 0xffffffff
    X86_AT(c, 0xd38a2u);
    c.r[7] = 0xFFFFFFFFu;
    // 0d38a7  jmp 0xd38c0
    X86_AT(c, 0xd38a7u);
    goto L_d38c0;
L_d38a9:
    X86_TICK(c, 9);
    // 0d38a9  mov edi, 1
    X86_AT(c, 0xd38a9u);
    c.r[7] = 0x1u;
    // 0d38ae  jmp 0xd38c0
    X86_AT(c, 0xd38aeu);
    goto L_d38c0;
L_d38b0:
    X86_TICK(c, 9);
    // 0d38b0  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xd38b0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0d38b7  jmp 0xd38c0
    X86_AT(c, 0xd38b7u);
    goto L_d38c0;
L_d38b9:
    X86_TICK(c, 2);
    // 0d38b9  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0xd38b9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
L_d38c0:
    X86_TICK(c, 13);
    // 0d38c0  push 1
    X86_AT(c, 0xd38c0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d38c2  lea eax, [edi + 5]
    X86_AT(c, 0xd38c2u);
    c.r[0] = (uint32_t)(c.r[7] + 0x5u);
    // 0d38c5  push eax
    X86_AT(c, 0xd38c5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d38c6  call 0xcc5d8
    X86_AT(c, 0xd38c6u);
    push32(c, 0xd38cbu); x86_call_known(c, 0xcc5d8u, f_000cc5d8); X86_RET(c, 0xd38cbu);
    X86_TICK(c, 19);
    // 0d38cb  add esp, 4
    X86_AT(c, 0xd38cbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d38ce  push eax
    X86_AT(c, 0xd38ceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d38cf  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd38cfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d38d2  add eax, 5
    X86_AT(c, 0xd38d2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x5u, 0, 4); }
    // 0d38d5  push eax
    X86_AT(c, 0xd38d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d38d6  call 0xcc5ac
    X86_AT(c, 0xd38d6u);
    push32(c, 0xd38dbu); x86_call_known(c, 0xcc5acu, f_000cc5ac); X86_RET(c, 0xd38dbu);
    X86_TICK(c, 11);
    // 0d38db  add esp, 4
    X86_AT(c, 0xd38dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d38de  push eax
    X86_AT(c, 0xd38deu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d38df  call 0xcc538
    X86_AT(c, 0xd38dfu);
    push32(c, 0xd38e4u); x86_call_known(c, 0xcc538u, f_000cc538); X86_RET(c, 0xd38e4u);
    X86_TICK(c, 18);
    // 0d38e4  xchg esi, eax
    X86_AT(c, 0xd38e4u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d38e5  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0xd38e5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 0d38ec  mov ebx, dword ptr [0xb0332]
    X86_AT(c, 0xd38ecu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xB0332u)));
    // 0d38f2  add esp, 0xc
    X86_AT(c, 0xd38f2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d38f5  cmp esi, 1
    X86_AT(c, 0xd38f5u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0d38f8  je 0xd3909
    X86_AT(c, 0xd38f8u);
    if (x86_cc(c, 4)) { goto L_d3909; }
    X86_TICK(c, 7);
    // 0d38fa  cmp esi, 0xa
    X86_AT(c, 0xd38fau);
    (void)x86_sub(c, c.r[6], 0xAu, 0, 4);
    // 0d38fd  je 0xd3909
    X86_AT(c, 0xd38fdu);
    if (x86_cc(c, 4)) { goto L_d3909; }
    X86_TICK(c, 7);
    // 0d38ff  cmp esi, 0x11
    X86_AT(c, 0xd38ffu);
    (void)x86_sub(c, c.r[6], 0x11u, 0, 4);
    // 0d3902  jle 0xd3927
    X86_AT(c, 0xd3902u);
    if (x86_cc(c, 14)) { goto L_d3927; }
    X86_TICK(c, 7);
    // 0d3904  cmp esi, 0x21
    X86_AT(c, 0xd3904u);
    (void)x86_sub(c, c.r[6], 0x21u, 0, 4);
    // 0d3907  jge 0xd3927
    X86_AT(c, 0xd3907u);
    if (x86_cc(c, 13)) { goto L_d3927; }
L_d3909:
    X86_TICK(c, 7);
    // 0d3909  cmp ebx, 4
    X86_AT(c, 0xd3909u);
    (void)x86_sub(c, c.r[3], 0x4u, 0, 4);
    // 0d390c  je 0xd3952
    X86_AT(c, 0xd390cu);
    if (x86_cc(c, 4)) { goto L_d3952; }
    X86_TICK(c, 7);
    // 0d390e  cmp ebx, 3
    X86_AT(c, 0xd390eu);
    (void)x86_sub(c, c.r[3], 0x3u, 0, 4);
    // 0d3911  je 0xd3952
    X86_AT(c, 0xd3911u);
    if (x86_cc(c, 4)) { goto L_d3952; }
    X86_TICK(c, 7);
    // 0d3913  cmp ebx, 5
    X86_AT(c, 0xd3913u);
    (void)x86_sub(c, c.r[3], 0x5u, 0, 4);
    // 0d3916  je 0xd3952
    X86_AT(c, 0xd3916u);
    if (x86_cc(c, 4)) { goto L_d3952; }
    X86_TICK(c, 9);
    // 0d3918  push 0
    X86_AT(c, 0xd3918u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d391a  call 0xcf8fc
    X86_AT(c, 0xd391au);
    push32(c, 0xd391fu); x86_call_known(c, 0xcf8fcu, f_000cf8fc); X86_RET(c, 0xd391fu);
    X86_TICK(c, 11);
    // 0d391f  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd391fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d3922  add esp, 4
    X86_AT(c, 0xd3922u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d3925  jmp 0xd3952
    X86_AT(c, 0xd3925u);
    goto L_d3952;
L_d3927:
    X86_TICK(c, 9);
    // 0d3927  mov edx, esi
    X86_AT(c, 0xd3927u);
    c.r[2] = c.r[6];
    // 0d3929  cmp edx, 0x10
    X86_AT(c, 0xd3929u);
    (void)x86_sub(c, c.r[2], 0x10u, 0, 4);
    // 0d392c  je 0xd394e
    X86_AT(c, 0xd392cu);
    if (x86_cc(c, 4)) { goto L_d394e; }
    X86_TICK(c, 7);
    // 0d392e  cmp edx, 0x11
    X86_AT(c, 0xd392eu);
    (void)x86_sub(c, c.r[2], 0x11u, 0, 4);
    // 0d3931  je 0xd394e
    X86_AT(c, 0xd3931u);
    if (x86_cc(c, 4)) { goto L_d394e; }
    X86_TICK(c, 7);
    // 0d3933  cmp edx, 0x24
    X86_AT(c, 0xd3933u);
    (void)x86_sub(c, c.r[2], 0x24u, 0, 4);
    // 0d3936  je 0xd394e
    X86_AT(c, 0xd3936u);
    if (x86_cc(c, 4)) { goto L_d394e; }
    X86_TICK(c, 9);
    // 0d3938  mov edx, esi
    X86_AT(c, 0xd3938u);
    c.r[2] = c.r[6];
    // 0d393a  cmp edx, 0xc
    X86_AT(c, 0xd393au);
    (void)x86_sub(c, c.r[2], 0xCu, 0, 4);
    // 0d393d  je 0xd394e
    X86_AT(c, 0xd393du);
    if (x86_cc(c, 4)) { goto L_d394e; }
    X86_TICK(c, 7);
    // 0d393f  cmp edx, 0xf
    X86_AT(c, 0xd393fu);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0d3942  je 0xd394e
    X86_AT(c, 0xd3942u);
    if (x86_cc(c, 4)) { goto L_d394e; }
    X86_TICK(c, 7);
    // 0d3944  cmp esi, 0x25
    X86_AT(c, 0xd3944u);
    (void)x86_sub(c, c.r[6], 0x25u, 0, 4);
    // 0d3947  jl 0xd3952
    X86_AT(c, 0xd3947u);
    if (x86_cc(c, 12)) { goto L_d3952; }
    X86_TICK(c, 7);
    // 0d3949  cmp esi, 0x3f
    X86_AT(c, 0xd3949u);
    (void)x86_sub(c, c.r[6], 0x3Fu, 0, 4);
    // 0d394c  jg 0xd3952
    X86_AT(c, 0xd394cu);
    if (x86_cc(c, 15)) { goto L_d3952; }
L_d394e:
    X86_TICK(c, 9);
    // 0d394e  sub eax, eax
    X86_AT(c, 0xd394eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d3950  jmp 0xd3955
    X86_AT(c, 0xd3950u);
    goto L_d3955;
L_d3952:
    X86_TICK(c, 4);
    // 0d3952  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd3952u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
L_d3955:
    X86_TICK(c, 28);
    // 0d3955  pop edi
    X86_AT(c, 0xd3955u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3956  pop esi
    X86_AT(c, 0xd3956u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3957  pop ebx
    X86_AT(c, 0xd3957u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3958  leave 
    X86_AT(c, 0xd3958u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3959  ret 
    X86_AT(c, 0xd3959u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd386cu, "ran off the end of a function");
}
void f_000d395c(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0d395c  push esi
    X86_AT(c, 0xd395cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d395d  push edi
    X86_AT(c, 0xd395du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d395e  sub edi, edi
    X86_AT(c, 0xd395eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d3960:
    X86_TICK(c, 7);
    // 0d3960  cmp edi, 0xf
    X86_AT(c, 0xd3960u);
    (void)x86_sub(c, c.r[7], 0xFu, 0, 4);
    // 0d3963  jge 0xd399c
    X86_AT(c, 0xd3963u);
    if (x86_cc(c, 13)) { goto L_d399c; }
    X86_TICK(c, 49);
    // 0d3965  lea eax, [edi + edi*4]
    X86_AT(c, 0xd3965u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0d3968  lea eax, [eax*4]
    X86_AT(c, 0xd3968u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d396f  mov edx, dword ptr [0xaae98]
    X86_AT(c, 0xd396fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xAAE98u)));
    // 0d3975  lea ecx, [edx + edx*8]
    X86_AT(c, 0xd3975u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[2] * 8);
    // 0d3978  lea ecx, [edx + ecx*4]
    X86_AT(c, 0xd3978u);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 4);
    // 0d397b  lea ecx, [edx + ecx*2]
    X86_AT(c, 0xd397bu);
    c.r[1] = (uint32_t)(c.r[2] + c.r[1] * 2);
    // 0d397e  shl ecx, 2
    X86_AT(c, 0xd397eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 0d3981  add ecx, eax
    X86_AT(c, 0xd3981u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d3983  lea esi, [ecx + 0xaa2e0]
    X86_AT(c, 0xd3983u);
    c.r[6] = (uint32_t)(c.r[1] + 0xAA2E0u);
    // 0d3989  add eax, 0xa1cbc
    X86_AT(c, 0xd3989u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xA1CBCu, 0, 4); }
    // 0d398e  push edi
    X86_AT(c, 0xd398eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d398f  mov edi, eax
    X86_AT(c, 0xd398fu);
    c.r[7] = c.r[0];
    // 0d3991  mov ecx, 5
    X86_AT(c, 0xd3991u);
    c.r[1] = 0x5u;
    // 0d3996  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xd3996u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0d3998  pop edi
    X86_AT(c, 0xd3998u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3999  inc edi
    X86_AT(c, 0xd3999u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d399a  jmp 0xd3960
    X86_AT(c, 0xd399au);
    X86_POLL(c, 0xd3960u); goto L_d3960;
L_d399c:
    X86_TICK(c, 18);
    // 0d399c  pop edi
    X86_AT(c, 0xd399cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d399d  pop esi
    X86_AT(c, 0xd399du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d399e  ret 
    X86_AT(c, 0xd399eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd395cu, "ran off the end of a function");
}
void f_000d39a0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0d39a0  push edi
    X86_AT(c, 0xd39a0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d39a1  push 0xd7
    X86_AT(c, 0xd39a1u);
    { uint32_t v = 0xD7u; push32(c, v); }
    // 0d39a6  push 1
    X86_AT(c, 0xd39a6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d39a8  call 0xc5df0
    X86_AT(c, 0xd39a8u);
    push32(c, 0xd39adu); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd39adu);
    X86_TICK(c, 55);
    // 0d39ad  cdq 
    X86_AT(c, 0xd39adu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0d39ae  mov ecx, 3
    X86_AT(c, 0xd39aeu);
    c.r[1] = 0x3u;
    // 0d39b3  idiv ecx
    X86_AT(c, 0xd39b3u);
    x86_idiv(c, c.r[1], 4, 0xd39b3u);
    // 0d39b5  mov edi, edx
    X86_AT(c, 0xd39b5u);
    c.r[7] = c.r[2];
    // 0d39b7  add esp, 8
    X86_AT(c, 0xd39b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d39ba  cmp edi, 2
    X86_AT(c, 0xd39bau);
    (void)x86_sub(c, c.r[7], 0x2u, 0, 4);
    // 0d39bd  jne 0xd39c4
    X86_AT(c, 0xd39bdu);
    if (x86_cc(c, 5)) { goto L_d39c4; }
    X86_TICK(c, 2);
    // 0d39bf  mov edi, 0xffffffff
    X86_AT(c, 0xd39bfu);
    c.r[7] = 0xFFFFFFFFu;
L_d39c4:
    X86_TICK(c, 16);
    // 0d39c4  mov eax, edi
    X86_AT(c, 0xd39c4u);
    c.r[0] = c.r[7];
    // 0d39c6  pop edi
    X86_AT(c, 0xd39c6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d39c7  ret 
    X86_AT(c, 0xd39c7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd39a0u, "ran off the end of a function");
}
void f_000d39d0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0d39d0  push ebp
    X86_AT(c, 0xd39d0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d39d1  mov ebp, esp
    X86_AT(c, 0xd39d1u);
    c.r[5] = c.r[4];
    // 0d39d3  push edi
    X86_AT(c, 0xd39d3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d39d4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd39d4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d39d7  sub edx, edx
    X86_AT(c, 0xd39d7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0d39d9  mov ecx, 0xffffffff
    X86_AT(c, 0xd39d9u);
    c.r[1] = 0xFFFFFFFFu;
L_d39de:
    X86_TICK(c, 15);
    // 0d39de  lea eax, [edx + edx*4]
    X86_AT(c, 0xd39deu);
    c.r[0] = (uint32_t)(c.r[2] + c.r[2] * 4);
    // 0d39e1  lea eax, [eax*4]
    X86_AT(c, 0xd39e1u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d39e8  cmp edi, dword ptr [eax + 0xa1cc0]
    X86_AT(c, 0xd39e8u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC0u))), 0, 4);
    // 0d39ee  jne 0xd39fd
    X86_AT(c, 0xd39eeu);
    if (x86_cc(c, 5)) { goto L_d39fd; }
    X86_TICK(c, 15);
    // 0d39f0  mov eax, dword ptr [eax + 0xa1cc4]
    X86_AT(c, 0xd39f0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC4u)));
    // 0d39f6  cmp eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd39f6u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4);
    // 0d39f9  jne 0xd39fd
    X86_AT(c, 0xd39f9u);
    if (x86_cc(c, 5)) { goto L_d39fd; }
    X86_TICK(c, 2);
    // 0d39fb  mov ecx, edx
    X86_AT(c, 0xd39fbu);
    c.r[1] = c.r[2];
L_d39fd:
    X86_TICK(c, 9);
    // 0d39fd  inc edx
    X86_AT(c, 0xd39fdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0d39fe  cmp ecx, 0xffffffff
    X86_AT(c, 0xd39feu);
    (void)x86_sub(c, c.r[1], 0xFFFFFFFFu, 0, 4);
    // 0d3a01  jne 0xd3a08
    X86_AT(c, 0xd3a01u);
    if (x86_cc(c, 5)) { goto L_d3a08; }
    X86_TICK(c, 7);
    // 0d3a03  cmp edx, 0xf
    X86_AT(c, 0xd3a03u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0d3a06  jl 0xd39de
    X86_AT(c, 0xd3a06u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xd39deu); goto L_d39de; }
L_d3a08:
    X86_TICK(c, 7);
    // 0d3a08  cmp ecx, 0xffffffff
    X86_AT(c, 0xd3a08u);
    (void)x86_sub(c, c.r[1], 0xFFFFFFFFu, 0, 4);
    // 0d3a0b  je 0xd3a25
    X86_AT(c, 0xd3a0bu);
    if (x86_cc(c, 4)) { goto L_d3a25; }
    X86_TICK(c, 16);
    // 0d3a0d  lea eax, [ecx + ecx*4]
    X86_AT(c, 0xd3a0du);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0d3a10  lea eax, [eax*4]
    X86_AT(c, 0xd3a10u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d3a17  cmp dword ptr [eax + 0xa1cbc], 0xffffffff
    X86_AT(c, 0xd3a17u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CBCu))), 0xFFFFFFFFu, 0, 4);
    // 0d3a1e  jne 0xd3a25
    X86_AT(c, 0xd3a1eu);
    if (x86_cc(c, 5)) { goto L_d3a25; }
    X86_TICK(c, 2);
    // 0d3a20  mov ecx, 0xffffffff
    X86_AT(c, 0xd3a20u);
    c.r[1] = 0xFFFFFFFFu;
L_d3a25:
    X86_TICK(c, 22);
    // 0d3a25  mov eax, ecx
    X86_AT(c, 0xd3a25u);
    c.r[0] = c.r[1];
    // 0d3a27  pop edi
    X86_AT(c, 0xd3a27u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3a28  leave 
    X86_AT(c, 0xd3a28u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3a29  ret 
    X86_AT(c, 0xd3a29u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd39d0u, "ran off the end of a function");
}
void f_000d3a2c(X86Cpu& c) {
    X86_TICK(c, 43);
    // 0d3a2c  push ebp
    X86_AT(c, 0xd3a2cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d3a2d  mov ebp, esp
    X86_AT(c, 0xd3a2du);
    c.r[5] = c.r[4];
    // 0d3a2f  push ebx
    X86_AT(c, 0xd3a2fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3a30  push esi
    X86_AT(c, 0xd3a30u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3a31  push edi
    X86_AT(c, 0xd3a31u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3a32  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd3a32u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d3a35  sub esi, esi
    X86_AT(c, 0xd3a35u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d3a37  mov ebx, esi
    X86_AT(c, 0xd3a37u);
    c.r[3] = c.r[6];
    // 0d3a39  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd3a39u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d3a3c  lea eax, [eax*8]
    X86_AT(c, 0xd3a3cu);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0d3a43  lea edx, [eax + eax*4]
    X86_AT(c, 0xd3a43u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d3a46  lea edx, [eax + edx*4]
    X86_AT(c, 0xd3a46u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0d3a49  lea eax, [edi + edx*1]
    X86_AT(c, 0xd3a49u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[2]);
    // 0d3a4c  mov edx, esi
    X86_AT(c, 0xd3a4cu);
    c.r[2] = c.r[6];
    // 0d3a4e  cmp dl, byte ptr [eax + 0x8bdf8]
    X86_AT(c, 0xd3a4eu);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8BDF8u))), 0, 1);
    // 0d3a54  jne 0xd3a5d
    X86_AT(c, 0xd3a54u);
    if (x86_cc(c, 5)) { goto L_d3a5d; }
    X86_TICK(c, 9);
    // 0d3a56  mov eax, 0xffffffff
    X86_AT(c, 0xd3a56u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d3a5b  jmp 0xd3aac
    X86_AT(c, 0xd3a5bu);
    goto L_d3aac;
L_d3a5d:
    X86_TICK(c, 11);
    // 0d3a5d  cmp edi, dword ptr [0xb033a]
    X86_AT(c, 0xd3a5du);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xB033Au))), 0, 4);
    // 0d3a63  jne 0xd3a76
    X86_AT(c, 0xd3a63u);
    if (x86_cc(c, 5)) { goto L_d3a76; }
    X86_TICK(c, 15);
    // 0d3a65  mov eax, dword ptr [0xb033e]
    X86_AT(c, 0xd3a65u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0d3a6a  cmp eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd3a6au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4);
    // 0d3a6d  jne 0xd3a76
    X86_AT(c, 0xd3a6du);
    if (x86_cc(c, 5)) { goto L_d3a76; }
    X86_TICK(c, 9);
    // 0d3a6f  mov ebx, 0x12
    X86_AT(c, 0xd3a6fu);
    c.r[3] = 0x12u;
    // 0d3a74  jmp 0xd3aa1
    X86_AT(c, 0xd3a74u);
    goto L_d3aa1;
L_d3a76:
    X86_TICK(c, 17);
    // 0d3a76  mov eax, 0xa1cbc
    X86_AT(c, 0xd3a76u);
    c.r[0] = 0xA1CBCu;
    // 0d3a7b  lea edx, [esi + esi*4]
    X86_AT(c, 0xd3a7bu);
    c.r[2] = (uint32_t)(c.r[6] + c.r[6] * 4);
    // 0d3a7e  lea edx, [edx*4]
    X86_AT(c, 0xd3a7eu);
    c.r[2] = (uint32_t)(c.r[2] * 4);
    // 0d3a85  cmp edi, dword ptr [eax + edx*1 + 4]
    X86_AT(c, 0xd3a85u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x4u))), 0, 4);
    // 0d3a89  jne 0xd3a97
    X86_AT(c, 0xd3a89u);
    if (x86_cc(c, 5)) { goto L_d3a97; }
    X86_TICK(c, 15);
    // 0d3a8b  mov ecx, dword ptr [eax + edx*1 + 8]
    X86_AT(c, 0xd3a8bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x8u)));
    // 0d3a8f  cmp ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd3a8fu);
    (void)x86_sub(c, c.r[1], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4);
    // 0d3a92  jne 0xd3a97
    X86_AT(c, 0xd3a92u);
    if (x86_cc(c, 5)) { goto L_d3a97; }
    X86_TICK(c, 4);
    // 0d3a94  mov ebx, dword ptr [eax + edx*1]
    X86_AT(c, 0xd3a94u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2])));
L_d3a97:
    X86_TICK(c, 9);
    // 0d3a97  inc esi
    X86_AT(c, 0xd3a97u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d3a98  and ebx, ebx
    X86_AT(c, 0xd3a98u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d3a9a  jne 0xd3aa1
    X86_AT(c, 0xd3a9au);
    if (x86_cc(c, 5)) { goto L_d3aa1; }
    X86_TICK(c, 7);
    // 0d3a9c  cmp esi, 0xf
    X86_AT(c, 0xd3a9cu);
    (void)x86_sub(c, c.r[6], 0xFu, 0, 4);
    // 0d3a9f  jl 0xd3a76
    X86_AT(c, 0xd3a9fu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xd3a76u); goto L_d3a76; }
L_d3aa1:
    X86_TICK(c, 7);
    // 0d3aa1  and ebx, ebx
    X86_AT(c, 0xd3aa1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d3aa3  jne 0xd3aaa
    X86_AT(c, 0xd3aa3u);
    if (x86_cc(c, 5)) { goto L_d3aaa; }
    X86_TICK(c, 2);
    // 0d3aa5  mov ebx, 0xffffffff
    X86_AT(c, 0xd3aa5u);
    c.r[3] = 0xFFFFFFFFu;
L_d3aaa:
    X86_TICK(c, 2);
    // 0d3aaa  mov eax, ebx
    X86_AT(c, 0xd3aaau);
    c.r[0] = c.r[3];
L_d3aac:
    X86_TICK(c, 28);
    // 0d3aac  pop edi
    X86_AT(c, 0xd3aacu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3aad  pop esi
    X86_AT(c, 0xd3aadu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3aae  pop ebx
    X86_AT(c, 0xd3aaeu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3aaf  leave 
    X86_AT(c, 0xd3aafu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3ab0  ret 
    X86_AT(c, 0xd3ab0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3a2cu, "ran off the end of a function");
}
void f_000d3ab4(X86Cpu& c) {
    X86_TICK(c, 38);
    // 0d3ab4  push ebp
    X86_AT(c, 0xd3ab4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d3ab5  mov ebp, esp
    X86_AT(c, 0xd3ab5u);
    c.r[5] = c.r[4];
    // 0d3ab7  push ebx
    X86_AT(c, 0xd3ab7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3ab8  push esi
    X86_AT(c, 0xd3ab8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3ab9  push edi
    X86_AT(c, 0xd3ab9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3aba  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd3abau);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d3abd  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd3abdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d3ac0  lea eax, [eax*8]
    X86_AT(c, 0xd3ac0u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0d3ac7  lea edx, [eax + eax*4]
    X86_AT(c, 0xd3ac7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d3aca  lea edx, [eax + edx*4]
    X86_AT(c, 0xd3acau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0d3acd  lea eax, [edi + edx*1]
    X86_AT(c, 0xd3acdu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[2]);
    // 0d3ad0  cmp byte ptr [eax + 0x8bdf8], 0
    X86_AT(c, 0xd3ad0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8BDF8u))), 0x0u, 0, 1);
    // 0d3ad7  je 0xd3b45
    X86_AT(c, 0xd3ad7u);
    if (x86_cc(c, 4)) { goto L_d3b45; }
    X86_TICK(c, 32);
    // 0d3add  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd3addu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d3ae0  lea eax, [eax*8]
    X86_AT(c, 0xd3ae0u);
    c.r[0] = (uint32_t)(c.r[0] * 8);
    // 0d3ae7  lea edx, [eax + eax*4]
    X86_AT(c, 0xd3ae7u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d3aea  lea edx, [eax + edx*4]
    X86_AT(c, 0xd3aeau);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0d3aed  add edx, edi
    X86_AT(c, 0xd3aedu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[7], 0, 4); }
    // 0d3aef  movzx esi, byte ptr [edx + 0x8bdf8]
    X86_AT(c, 0xd3aefu);
    c.r[6] = rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8BDF8u)));
    // 0d3af6  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xd3af6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0d3af9  push edi
    X86_AT(c, 0xd3af9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3afa  call 0xd3a2c
    X86_AT(c, 0xd3afau);
    push32(c, 0xd3affu); x86_call_known(c, 0xd3a2cu, f_000d3a2c); X86_RET(c, 0xd3affu);
    X86_TICK(c, 12);
    // 0d3aff  xchg ebx, eax
    X86_AT(c, 0xd3affu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d3b00  add esp, 8
    X86_AT(c, 0xd3b00u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3b03  cmp ebx, 0xffffffff
    X86_AT(c, 0xd3b03u);
    (void)x86_sub(c, c.r[3], 0xFFFFFFFFu, 0, 4);
    // 0d3b06  je 0xd3b0c
    X86_AT(c, 0xd3b06u);
    if (x86_cc(c, 4)) { goto L_d3b0c; }
    X86_TICK(c, 9);
    // 0d3b08  mov eax, ebx
    X86_AT(c, 0xd3b08u);
    c.r[0] = c.r[3];
    // 0d3b0a  jmp 0xd3b51
    X86_AT(c, 0xd3b0au);
    goto L_d3b51;
L_d3b0c:
    X86_TICK(c, 7);
    // 0d3b0c  cmp esi, 1
    X86_AT(c, 0xd3b0cu);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0d3b0f  je 0xd3b45
    X86_AT(c, 0xd3b0fu);
    if (x86_cc(c, 4)) { goto L_d3b45; }
    X86_TICK(c, 7);
    // 0d3b11  cmp esi, 0xa
    X86_AT(c, 0xd3b11u);
    (void)x86_sub(c, c.r[6], 0xAu, 0, 4);
    // 0d3b14  je 0xd3b45
    X86_AT(c, 0xd3b14u);
    if (x86_cc(c, 4)) { goto L_d3b45; }
    X86_TICK(c, 7);
    // 0d3b16  cmp esi, 0x11
    X86_AT(c, 0xd3b16u);
    (void)x86_sub(c, c.r[6], 0x11u, 0, 4);
    // 0d3b19  jle 0xd3b20
    X86_AT(c, 0xd3b19u);
    if (x86_cc(c, 14)) { goto L_d3b20; }
    X86_TICK(c, 7);
    // 0d3b1b  cmp esi, 0x21
    X86_AT(c, 0xd3b1bu);
    (void)x86_sub(c, c.r[6], 0x21u, 0, 4);
    // 0d3b1e  jl 0xd3b45
    X86_AT(c, 0xd3b1eu);
    if (x86_cc(c, 12)) { goto L_d3b45; }
L_d3b20:
    X86_TICK(c, 9);
    // 0d3b20  mov edx, esi
    X86_AT(c, 0xd3b20u);
    c.r[2] = c.r[6];
    // 0d3b22  cmp edx, 0xc
    X86_AT(c, 0xd3b22u);
    (void)x86_sub(c, c.r[2], 0xCu, 0, 4);
    // 0d3b25  je 0xd3b45
    X86_AT(c, 0xd3b25u);
    if (x86_cc(c, 4)) { goto L_d3b45; }
    X86_TICK(c, 7);
    // 0d3b27  cmp edx, 0xf
    X86_AT(c, 0xd3b27u);
    (void)x86_sub(c, c.r[2], 0xFu, 0, 4);
    // 0d3b2a  je 0xd3b45
    X86_AT(c, 0xd3b2au);
    if (x86_cc(c, 4)) { goto L_d3b45; }
    X86_TICK(c, 7);
    // 0d3b2c  cmp edx, 0x10
    X86_AT(c, 0xd3b2cu);
    (void)x86_sub(c, c.r[2], 0x10u, 0, 4);
    // 0d3b2f  je 0xd3b45
    X86_AT(c, 0xd3b2fu);
    if (x86_cc(c, 4)) { goto L_d3b45; }
    X86_TICK(c, 7);
    // 0d3b31  cmp edx, 0x11
    X86_AT(c, 0xd3b31u);
    (void)x86_sub(c, c.r[2], 0x11u, 0, 4);
    // 0d3b34  je 0xd3b45
    X86_AT(c, 0xd3b34u);
    if (x86_cc(c, 4)) { goto L_d3b45; }
    X86_TICK(c, 7);
    // 0d3b36  cmp edx, 0x24
    X86_AT(c, 0xd3b36u);
    (void)x86_sub(c, c.r[2], 0x24u, 0, 4);
    // 0d3b39  je 0xd3b45
    X86_AT(c, 0xd3b39u);
    if (x86_cc(c, 4)) { goto L_d3b45; }
    X86_TICK(c, 7);
    // 0d3b3b  cmp esi, 0x25
    X86_AT(c, 0xd3b3bu);
    (void)x86_sub(c, c.r[6], 0x25u, 0, 4);
    // 0d3b3e  jl 0xd3b4c
    X86_AT(c, 0xd3b3eu);
    if (x86_cc(c, 12)) { goto L_d3b4c; }
    X86_TICK(c, 7);
    // 0d3b40  cmp esi, 0x3f
    X86_AT(c, 0xd3b40u);
    (void)x86_sub(c, c.r[6], 0x3Fu, 0, 4);
    // 0d3b43  jg 0xd3b4c
    X86_AT(c, 0xd3b43u);
    if (x86_cc(c, 15)) { goto L_d3b4c; }
L_d3b45:
    X86_TICK(c, 9);
    // 0d3b45  mov eax, 0x3f
    X86_AT(c, 0xd3b45u);
    c.r[0] = 0x3Fu;
    // 0d3b4a  jmp 0xd3b51
    X86_AT(c, 0xd3b4au);
    goto L_d3b51;
L_d3b4c:
    X86_TICK(c, 2);
    // 0d3b4c  mov eax, 0xffffffff
    X86_AT(c, 0xd3b4cu);
    c.r[0] = 0xFFFFFFFFu;
L_d3b51:
    X86_TICK(c, 28);
    // 0d3b51  pop edi
    X86_AT(c, 0xd3b51u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3b52  pop esi
    X86_AT(c, 0xd3b52u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3b53  pop ebx
    X86_AT(c, 0xd3b53u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3b54  leave 
    X86_AT(c, 0xd3b54u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3b55  ret 
    X86_AT(c, 0xd3b55u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3ab4u, "ran off the end of a function");
}
void f_000d3b58(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0d3b58  push ebp
    X86_AT(c, 0xd3b58u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d3b59  mov ebp, esp
    X86_AT(c, 0xd3b59u);
    c.r[5] = c.r[4];
    // 0d3b5b  mov eax, dword ptr [0xb033e]
    X86_AT(c, 0xd3b5bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Eu)));
    // 0d3b60  add eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd3b60u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0d3b63  push eax
    X86_AT(c, 0xd3b63u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d3b64  mov eax, dword ptr [0xb033a]
    X86_AT(c, 0xd3b64u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB033Au)));
    // 0d3b69  add eax, dword ptr [ebp + 8]
    X86_AT(c, 0xd3b69u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 0d3b6c  push eax
    X86_AT(c, 0xd3b6cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d3b6d  call 0xd3a2c
    X86_AT(c, 0xd3b6du);
    push32(c, 0xd3b72u); x86_call_known(c, 0xd3a2cu, f_000d3a2c); X86_RET(c, 0xd3b72u);
    X86_TICK(c, 27);
    // 0d3b72  cmp eax, 0x16
    X86_AT(c, 0xd3b72u);
    (void)x86_sub(c, c.r[0], 0x16u, 0, 4);
    // 0d3b75  sete al
    X86_AT(c, 0xd3b75u);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 0d3b78  movzx eax, al
    X86_AT(c, 0xd3b78u);
    c.r[0] = g8(c, 0);
    // 0d3b7b  add esp, 8
    X86_AT(c, 0xd3b7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3b7e  leave 
    X86_AT(c, 0xd3b7eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3b7f  ret 
    X86_AT(c, 0xd3b7fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3b58u, "ran off the end of a function");
}
void f_000d3b80(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0d3b80  push 1
    X86_AT(c, 0xd3b80u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3b82  push 0xffffffff
    X86_AT(c, 0xd3b82u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d3b84  call 0xd3b58
    X86_AT(c, 0xd3b84u);
    push32(c, 0xd3b89u); x86_call_known(c, 0xd3b58u, f_000d3b58); X86_RET(c, 0xd3b89u);
    X86_TICK(c, 7);
    // 0d3b89  and eax, eax
    X86_AT(c, 0xd3b89u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d3b8b  jne 0xd3c09
    X86_AT(c, 0xd3b8bu);
    if (x86_cc(c, 5)) { goto L_d3c09; }
    X86_TICK(c, 11);
    // 0d3b91  push 0
    X86_AT(c, 0xd3b91u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3b93  push 0xffffffff
    X86_AT(c, 0xd3b93u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d3b95  call 0xd3b58
    X86_AT(c, 0xd3b95u);
    push32(c, 0xd3b9au); x86_call_known(c, 0xd3b58u, f_000d3b58); X86_RET(c, 0xd3b9au);
    X86_TICK(c, 9);
    // 0d3b9a  add esp, 8
    X86_AT(c, 0xd3b9au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3b9d  and eax, eax
    X86_AT(c, 0xd3b9du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d3b9f  jne 0xd3c09
    X86_AT(c, 0xd3b9fu);
    if (x86_cc(c, 5)) { goto L_d3c09; }
    X86_TICK(c, 11);
    // 0d3ba5  push 0xffffffff
    X86_AT(c, 0xd3ba5u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d3ba7  push 0xffffffff
    X86_AT(c, 0xd3ba7u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d3ba9  call 0xd3b58
    X86_AT(c, 0xd3ba9u);
    push32(c, 0xd3baeu); x86_call_known(c, 0xd3b58u, f_000d3b58); X86_RET(c, 0xd3baeu);
    X86_TICK(c, 9);
    // 0d3bae  add esp, 8
    X86_AT(c, 0xd3baeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3bb1  and eax, eax
    X86_AT(c, 0xd3bb1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d3bb3  jne 0xd3c09
    X86_AT(c, 0xd3bb3u);
    if (x86_cc(c, 5)) { goto L_d3c09; }
    X86_TICK(c, 11);
    // 0d3bb5  push 1
    X86_AT(c, 0xd3bb5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3bb7  push 0
    X86_AT(c, 0xd3bb7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3bb9  call 0xd3b58
    X86_AT(c, 0xd3bb9u);
    push32(c, 0xd3bbeu); x86_call_known(c, 0xd3b58u, f_000d3b58); X86_RET(c, 0xd3bbeu);
    X86_TICK(c, 9);
    // 0d3bbe  add esp, 8
    X86_AT(c, 0xd3bbeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3bc1  and eax, eax
    X86_AT(c, 0xd3bc1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d3bc3  jne 0xd3c09
    X86_AT(c, 0xd3bc3u);
    if (x86_cc(c, 5)) { goto L_d3c09; }
    X86_TICK(c, 11);
    // 0d3bc5  push 0xffffffff
    X86_AT(c, 0xd3bc5u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d3bc7  push 0
    X86_AT(c, 0xd3bc7u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3bc9  call 0xd3b58
    X86_AT(c, 0xd3bc9u);
    push32(c, 0xd3bceu); x86_call_known(c, 0xd3b58u, f_000d3b58); X86_RET(c, 0xd3bceu);
    X86_TICK(c, 9);
    // 0d3bce  add esp, 8
    X86_AT(c, 0xd3bceu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3bd1  and eax, eax
    X86_AT(c, 0xd3bd1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d3bd3  jne 0xd3c09
    X86_AT(c, 0xd3bd3u);
    if (x86_cc(c, 5)) { goto L_d3c09; }
    X86_TICK(c, 11);
    // 0d3bd5  push 0
    X86_AT(c, 0xd3bd5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3bd7  push 0xffffffff
    X86_AT(c, 0xd3bd7u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0d3bd9  call 0xd3b58
    X86_AT(c, 0xd3bd9u);
    push32(c, 0xd3bdeu); x86_call_known(c, 0xd3b58u, f_000d3b58); X86_RET(c, 0xd3bdeu);
    X86_TICK(c, 9);
    // 0d3bde  add esp, 8
    X86_AT(c, 0xd3bdeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3be1  and eax, eax
    X86_AT(c, 0xd3be1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d3be3  jne 0xd3c09
    X86_AT(c, 0xd3be3u);
    if (x86_cc(c, 5)) { goto L_d3c09; }
    X86_TICK(c, 11);
    // 0d3be5  push 1
    X86_AT(c, 0xd3be5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3be7  push 1
    X86_AT(c, 0xd3be7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3be9  call 0xd3b58
    X86_AT(c, 0xd3be9u);
    push32(c, 0xd3beeu); x86_call_known(c, 0xd3b58u, f_000d3b58); X86_RET(c, 0xd3beeu);
    X86_TICK(c, 9);
    // 0d3bee  add esp, 8
    X86_AT(c, 0xd3beeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3bf1  and eax, eax
    X86_AT(c, 0xd3bf1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d3bf3  jne 0xd3c09
    X86_AT(c, 0xd3bf3u);
    if (x86_cc(c, 5)) { goto L_d3c09; }
    X86_TICK(c, 11);
    // 0d3bf5  push 0
    X86_AT(c, 0xd3bf5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3bf7  push 1
    X86_AT(c, 0xd3bf7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3bf9  call 0xd3b58
    X86_AT(c, 0xd3bf9u);
    push32(c, 0xd3bfeu); x86_call_known(c, 0xd3b58u, f_000d3b58); X86_RET(c, 0xd3bfeu);
    X86_TICK(c, 9);
    // 0d3bfe  add esp, 8
    X86_AT(c, 0xd3bfeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3c01  and eax, eax
    X86_AT(c, 0xd3c01u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d3c03  jne 0xd3c09
    X86_AT(c, 0xd3c03u);
    if (x86_cc(c, 5)) { goto L_d3c09; }
    X86_TICK(c, 9);
    // 0d3c05  sub eax, eax
    X86_AT(c, 0xd3c05u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d3c07  jmp 0xd3c0b
    X86_AT(c, 0xd3c07u);
    goto L_d3c0b;
L_d3c09:
    X86_TICK(c, 2);
    // 0d3c09  mov al, 1
    X86_AT(c, 0xd3c09u);
    s8(c, 0, 0x1u);
L_d3c0b:
    X86_TICK(c, 15);
    // 0d3c0b  movzx eax, al
    X86_AT(c, 0xd3c0bu);
    c.r[0] = g8(c, 0);
    // 0d3c0e  add esp, 8
    X86_AT(c, 0xd3c0eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3c11  ret 
    X86_AT(c, 0xd3c11u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3b80u, "ran off the end of a function");
}
void f_000d3c14(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0d3c14  push ebp
    X86_AT(c, 0xd3c14u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d3c15  mov ebp, esp
    X86_AT(c, 0xd3c15u);
    c.r[5] = c.r[4];
    // 0d3c17  sub esp, 0x10
    X86_AT(c, 0xd3c17u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x10u, 0, 4); }
    // 0d3c1a  push ebx
    X86_AT(c, 0xd3c1au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3c1b  push esi
    X86_AT(c, 0xd3c1bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3c1c  push edi
    X86_AT(c, 0xd3c1cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3c1d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd3c1du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d3c20  mov esi, 0xf
    X86_AT(c, 0xd3c20u);
    c.r[6] = 0xFu;
    // 0d3c25  sub ebx, ebx
    X86_AT(c, 0xd3c25u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0d3c27  cmp ebx, dword ptr [0xaae9c]
    X86_AT(c, 0xd3c27u);
    (void)x86_sub(c, c.r[3], rd32((c.sbase[3] + (uint32_t)(0xAAE9Cu))), 0, 4);
    // 0d3c2d  jne 0xd3d58
    X86_AT(c, 0xd3c2du);
    if (x86_cc(c, 5)) { goto L_d3d58; }
    X86_TICK(c, 7);
    // 0d3c33  call 0xd39a0
    X86_AT(c, 0xd3c33u);
    push32(c, 0xd3c38u); x86_call_known(c, 0xd39a0u, f_000d39a0); X86_RET(c, 0xd3c38u);
    X86_TICK(c, 9);
    // 0d3c38  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd3c38u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d3c3b  call 0xd39a0
    X86_AT(c, 0xd3c3bu);
    push32(c, 0xd3c40u); x86_call_known(c, 0xd39a0u, f_000d39a0); X86_RET(c, 0xd3c40u);
    X86_TICK(c, 35);
    // 0d3c40  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd3c40u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0d3c43  lea edx, [edi + edi*4]
    X86_AT(c, 0xd3c43u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0d3c46  lea edx, [edx*4]
    X86_AT(c, 0xd3c46u);
    c.r[2] = (uint32_t)(c.r[2] * 4);
    // 0d3c4d  mov ecx, dword ptr [edx + 0xa1cc4]
    X86_AT(c, 0xd3c4du);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA1CC4u)));
    // 0d3c53  add ecx, eax
    X86_AT(c, 0xd3c53u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 0d3c55  push ecx
    X86_AT(c, 0xd3c55u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d3c56  mov ecx, dword ptr [edx + 0xa1cc0]
    X86_AT(c, 0xd3c56u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xA1CC0u)));
    // 0d3c5c  add ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xd3c5cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0d3c5f  push ecx
    X86_AT(c, 0xd3c5fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d3c60  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xd3c60u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0d3c63  call 0xd3ab4
    X86_AT(c, 0xd3c63u);
    push32(c, 0xd3c68u); x86_call_known(c, 0xd3ab4u, f_000d3ab4); X86_RET(c, 0xd3c68u);
    X86_TICK(c, 11);
    // 0d3c68  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xd3c68u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0d3c6b  add esp, 8
    X86_AT(c, 0xd3c6bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3c6e  inc eax
    X86_AT(c, 0xd3c6eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d3c6f  jne 0xd3c8b
    X86_AT(c, 0xd3c6fu);
    if (x86_cc(c, 5)) { goto L_d3c8b; }
    X86_TICK(c, 33);
    // 0d3c71  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd3c71u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d3c74  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xd3c74u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0d3c77  add dword ptr [edx + 0xa1cc0], eax
    X86_AT(c, 0xd3c77u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA1CC0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d3c7d  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd3c7du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d3c80  add dword ptr [edx + 0xa1cc4], eax
    X86_AT(c, 0xd3c80u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xA1CC4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0d3c86  jmp 0xd3cfd
    X86_AT(c, 0xd3c86u);
    goto L_d3cfd;
L_d3c8b:
    X86_TICK(c, 12);
    // 0d3c8b  cmp dword ptr [ebp - 0xc], 0x12
    X86_AT(c, 0xd3c8bu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x12u, 0, 4);
    // 0d3c8f  jne 0xd3cfd
    X86_AT(c, 0xd3c8fu);
    if (x86_cc(c, 5)) { goto L_d3cfd; }
L_d3c95:
    X86_TICK(c, 11);
    // 0d3c95  mov eax, dword ptr [esi*4 + 0xb0392]
    X86_AT(c, 0xd3c95u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB0392u)));
    // 0d3c9c  and eax, eax
    X86_AT(c, 0xd3c9cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d3c9e  je 0xd3cb4
    X86_AT(c, 0xd3c9eu);
    if (x86_cc(c, 4)) { goto L_d3cb4; }
    X86_TICK(c, 11);
    // 0d3ca0  cmp esi, dword ptr [0xb0326]
    X86_AT(c, 0xd3ca0u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xB0326u))), 0, 4);
    // 0d3ca6  je 0xd3cb4
    X86_AT(c, 0xd3ca6u);
    if (x86_cc(c, 4)) { goto L_d3cb4; }
    X86_TICK(c, 8);
    // 0d3ca8  dec dword ptr [esi*4 + 0xb0392]
    X86_AT(c, 0xd3ca8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] * 4 + 0xB0392u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d3caf  mov ebx, 1
    X86_AT(c, 0xd3cafu);
    c.r[3] = 0x1u;
L_d3cb4:
    X86_TICK(c, 9);
    // 0d3cb4  dec esi
    X86_AT(c, 0xd3cb4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0d3cb5  and esi, esi
    X86_AT(c, 0xd3cb5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d3cb7  jle 0xd3cbd
    X86_AT(c, 0xd3cb7u);
    if (x86_cc(c, 14)) { goto L_d3cbd; }
    X86_TICK(c, 7);
    // 0d3cb9  and ebx, ebx
    X86_AT(c, 0xd3cb9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d3cbb  je 0xd3c95
    X86_AT(c, 0xd3cbbu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd3c95u); goto L_d3c95; }
L_d3cbd:
    X86_TICK(c, 11);
    // 0d3cbd  push 0xff
    X86_AT(c, 0xd3cbdu);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0d3cc2  push 1
    X86_AT(c, 0xd3cc2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3cc4  call 0xc5df0
    X86_AT(c, 0xd3cc4u);
    push32(c, 0xd3cc9u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd3cc9u);
    X86_TICK(c, 15);
    // 0d3cc9  add esp, 8
    X86_AT(c, 0xd3cc9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3ccc  mov edx, dword ptr [0xb0306]
    X86_AT(c, 0xd3cccu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xB0306u)));
    // 0d3cd2  add edx, 0x80
    X86_AT(c, 0xd3cd2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x80u, 0, 4); }
    // 0d3cd8  cmp edx, eax
    X86_AT(c, 0xd3cd8u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0d3cda  jle 0xd3cfd
    X86_AT(c, 0xd3cdau);
    if (x86_cc(c, 14)) { goto L_d3cfd; }
    X86_TICK(c, 7);
    // 0d3cdc  and ebx, ebx
    X86_AT(c, 0xd3cdcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d3cde  je 0xd3cfd
    X86_AT(c, 0xd3cdeu);
    if (x86_cc(c, 4)) { goto L_d3cfd; }
    X86_TICK(c, 12);
    // 0d3ce0  cmp dword ptr [0xb52f8], 1
    X86_AT(c, 0xd3ce0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x1u, 0, 4);
    // 0d3ce7  jne 0xd3cf0
    X86_AT(c, 0xd3ce7u);
    if (x86_cc(c, 5)) { goto L_d3cf0; }
    X86_TICK(c, 9);
    // 0d3ce9  push 0x8c1c
    X86_AT(c, 0xd3ce9u);
    { uint32_t v = 0x8C1Cu; push32(c, v); }
    // 0d3cee  jmp 0xd3cf5
    X86_AT(c, 0xd3ceeu);
    goto L_d3cf5;
L_d3cf0:
    X86_TICK(c, 2);
    // 0d3cf0  push 0x8c68
    X86_AT(c, 0xd3cf0u);
    { uint32_t v = 0x8C68u; push32(c, v); }
L_d3cf5:
    X86_TICK(c, 7);
    // 0d3cf5  call 0xcc7bc
    X86_AT(c, 0xd3cf5u);
    push32(c, 0xd3cfau); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd3cfau);
    X86_TICK(c, 2);
    // 0d3cfa  add esp, 4
    X86_AT(c, 0xd3cfau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d3cfd:
    X86_TICK(c, 7);
    // 0d3cfd  and ebx, ebx
    X86_AT(c, 0xd3cfdu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d3cff  jne 0xd3d58
    X86_AT(c, 0xd3cffu);
    if (x86_cc(c, 5)) { goto L_d3d58; }
    X86_TICK(c, 11);
    // 0d3d01  push 0xff
    X86_AT(c, 0xd3d01u);
    { uint32_t v = 0xFFu; push32(c, v); }
    // 0d3d06  push 1
    X86_AT(c, 0xd3d06u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3d08  call 0xc5df0
    X86_AT(c, 0xd3d08u);
    push32(c, 0xd3d0du); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd3d0du);
    X86_TICK(c, 9);
    // 0d3d0d  add esp, 8
    X86_AT(c, 0xd3d0du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3d10  cmp eax, 5
    X86_AT(c, 0xd3d10u);
    (void)x86_sub(c, c.r[0], 0x5u, 0, 4);
    // 0d3d13  jge 0xd3d58
    X86_AT(c, 0xd3d13u);
    if (x86_cc(c, 13)) { goto L_d3d58; }
    X86_TICK(c, 12);
    // 0d3d15  cmp dword ptr [0xb52f8], 1
    X86_AT(c, 0xd3d15u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xB52F8u))), 0x1u, 0, 4);
    // 0d3d1c  jne 0xd3d37
    X86_AT(c, 0xd3d1cu);
    if (x86_cc(c, 5)) { goto L_d3d37; }
    X86_TICK(c, 9);
    // 0d3d1e  push 0x8cbc
    X86_AT(c, 0xd3d1eu);
    { uint32_t v = 0x8CBCu; push32(c, v); }
    // 0d3d23  call 0xcc7bc
    X86_AT(c, 0xd3d23u);
    push32(c, 0xd3d28u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd3d28u);
    X86_TICK(c, 9);
    // 0d3d28  push 0x8d0c
    X86_AT(c, 0xd3d28u);
    { uint32_t v = 0x8D0Cu; push32(c, v); }
    // 0d3d2d  call 0xcc7bc
    X86_AT(c, 0xd3d2du);
    push32(c, 0xd3d32u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd3d32u);
    X86_TICK(c, 9);
    // 0d3d32  add esp, 8
    X86_AT(c, 0xd3d32u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3d35  jmp 0xd3d58
    X86_AT(c, 0xd3d35u);
    goto L_d3d58;
L_d3d37:
    X86_TICK(c, 9);
    // 0d3d37  push 0x8d50
    X86_AT(c, 0xd3d37u);
    { uint32_t v = 0x8D50u; push32(c, v); }
    // 0d3d3c  call 0xcc7bc
    X86_AT(c, 0xd3d3cu);
    push32(c, 0xd3d41u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd3d41u);
    X86_TICK(c, 9);
    // 0d3d41  push 0x8d8c
    X86_AT(c, 0xd3d41u);
    { uint32_t v = 0x8D8Cu; push32(c, v); }
    // 0d3d46  call 0xcc7bc
    X86_AT(c, 0xd3d46u);
    push32(c, 0xd3d4bu); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd3d4bu);
    X86_TICK(c, 9);
    // 0d3d4b  push 0x8dc0
    X86_AT(c, 0xd3d4bu);
    { uint32_t v = 0x8DC0u; push32(c, v); }
    // 0d3d50  call 0xcc7bc
    X86_AT(c, 0xd3d50u);
    push32(c, 0xd3d55u); x86_call_known(c, 0xcc7bcu, f_000cc7bc); X86_RET(c, 0xd3d55u);
    X86_TICK(c, 2);
    // 0d3d55  add esp, 0xc
    X86_AT(c, 0xd3d55u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d3d58:
    X86_TICK(c, 28);
    // 0d3d58  pop edi
    X86_AT(c, 0xd3d58u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3d59  pop esi
    X86_AT(c, 0xd3d59u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3d5a  pop ebx
    X86_AT(c, 0xd3d5au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3d5b  leave 
    X86_AT(c, 0xd3d5bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3d5c  ret 
    X86_AT(c, 0xd3d5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3c14u, "ran off the end of a function");
}
void f_000d3d60(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0d3d60  push ebp
    X86_AT(c, 0xd3d60u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d3d61  mov ebp, esp
    X86_AT(c, 0xd3d61u);
    c.r[5] = c.r[4];
    // 0d3d63  push eax
    X86_AT(c, 0xd3d63u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d3d64  push ebx
    X86_AT(c, 0xd3d64u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3d65  push esi
    X86_AT(c, 0xd3d65u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3d66  push edi
    X86_AT(c, 0xd3d66u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3d67  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd3d67u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d3d6a  cmp dword ptr [0xaae9c], 0
    X86_AT(c, 0xd3d6au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xAAE9Cu))), 0x0u, 0, 4);
    // 0d3d71  jne 0xd3db8
    X86_AT(c, 0xd3d71u);
    if (x86_cc(c, 5)) { goto L_d3db8; }
    X86_TICK(c, 7);
    // 0d3d73  call 0xd39a0
    X86_AT(c, 0xd3d73u);
    push32(c, 0xd3d78u); x86_call_known(c, 0xd39a0u, f_000d39a0); X86_RET(c, 0xd3d78u);
    X86_TICK(c, 10);
    // 0d3d78  xchg esi, eax
    X86_AT(c, 0xd3d78u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d3d79  call 0xd39a0
    X86_AT(c, 0xd3d79u);
    push32(c, 0xd3d7eu); x86_call_known(c, 0xd39a0u, f_000d39a0); X86_RET(c, 0xd3d7eu);
    X86_TICK(c, 32);
    // 0d3d7e  xchg ebx, eax
    X86_AT(c, 0xd3d7eu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d3d7f  lea eax, [edi + edi*4]
    X86_AT(c, 0xd3d7fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0d3d82  lea eax, [eax*4]
    X86_AT(c, 0xd3d82u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d3d89  mov edx, dword ptr [eax + 0xa1cc4]
    X86_AT(c, 0xd3d89u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC4u)));
    // 0d3d8f  add edx, ebx
    X86_AT(c, 0xd3d8fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[3], 0, 4); }
    // 0d3d91  push edx
    X86_AT(c, 0xd3d91u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d3d92  mov edx, dword ptr [eax + 0xa1cc0]
    X86_AT(c, 0xd3d92u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC0u)));
    // 0d3d98  add edx, esi
    X86_AT(c, 0xd3d98u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[6], 0, 4); }
    // 0d3d9a  push edx
    X86_AT(c, 0xd3d9au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d3d9b  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd3d9bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d3d9e  call 0xd3ab4
    X86_AT(c, 0xd3d9eu);
    push32(c, 0xd3da3u); x86_call_known(c, 0xd3ab4u, f_000d3ab4); X86_RET(c, 0xd3da3u);
    X86_TICK(c, 9);
    // 0d3da3  add esp, 8
    X86_AT(c, 0xd3da3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3da6  inc eax
    X86_AT(c, 0xd3da6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d3da7  jne 0xd3db8
    X86_AT(c, 0xd3da7u);
    if (x86_cc(c, 5)) { goto L_d3db8; }
    X86_TICK(c, 18);
    // 0d3da9  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd3da9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d3dac  add dword ptr [eax + 0xa1cc0], esi
    X86_AT(c, 0xd3dacu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0d3db2  add dword ptr [eax + 0xa1cc4], ebx
    X86_AT(c, 0xd3db2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[3], 0, 4)); }
L_d3db8:
    X86_TICK(c, 28);
    // 0d3db8  pop edi
    X86_AT(c, 0xd3db8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3db9  pop esi
    X86_AT(c, 0xd3db9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3dba  pop ebx
    X86_AT(c, 0xd3dbau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3dbb  leave 
    X86_AT(c, 0xd3dbbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3dbc  ret 
    X86_AT(c, 0xd3dbcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3d60u, "ran off the end of a function");
}
void f_000d3dc0(X86Cpu& c) {
    X86_TICK(c, 60);
    // 0d3dc0  push ebp
    X86_AT(c, 0xd3dc0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d3dc1  mov ebp, esp
    X86_AT(c, 0xd3dc1u);
    c.r[5] = c.r[4];
    // 0d3dc3  push eax
    X86_AT(c, 0xd3dc3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d3dc4  push ebx
    X86_AT(c, 0xd3dc4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3dc5  push esi
    X86_AT(c, 0xd3dc5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3dc6  push edi
    X86_AT(c, 0xd3dc6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3dc7  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd3dc7u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d3dca  lea eax, [edi + edi*4]
    X86_AT(c, 0xd3dcau);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0d3dcd  lea eax, [eax*4]
    X86_AT(c, 0xd3dcdu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d3dd4  mov esi, dword ptr [eax + 0xa1cc0]
    X86_AT(c, 0xd3dd4u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC0u)));
    // 0d3dda  add esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd3ddau);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0d3ddd  mov ebx, dword ptr [eax + 0xa1cc4]
    X86_AT(c, 0xd3dddu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC4u)));
    // 0d3de3  add ebx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd3de3u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0, 4); }
    // 0d3de6  lea eax, [ebx*8]
    X86_AT(c, 0xd3de6u);
    c.r[0] = (uint32_t)(c.r[3] * 8);
    // 0d3ded  lea edx, [eax + eax*4]
    X86_AT(c, 0xd3dedu);
    c.r[2] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0d3df0  lea edx, [eax + edx*4]
    X86_AT(c, 0xd3df0u);
    c.r[2] = (uint32_t)(c.r[0] + c.r[2] * 4);
    // 0d3df3  lea eax, [esi + edx*1]
    X86_AT(c, 0xd3df3u);
    c.r[0] = (uint32_t)(c.r[6] + c.r[2]);
    // 0d3df6  cmp byte ptr [eax + 0x8bdf8], 0
    X86_AT(c, 0xd3df6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8BDF8u))), 0x0u, 0, 1);
    // 0d3dfd  je 0xd3e32
    X86_AT(c, 0xd3dfdu);
    if (x86_cc(c, 4)) { goto L_d3e32; }
    X86_TICK(c, 11);
    // 0d3dff  push ebx
    X86_AT(c, 0xd3dffu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3e00  push esi
    X86_AT(c, 0xd3e00u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3e01  call 0xd3ab4
    X86_AT(c, 0xd3e01u);
    push32(c, 0xd3e06u); x86_call_known(c, 0xd3ab4u, f_000d3ab4); X86_RET(c, 0xd3e06u);
    X86_TICK(c, 11);
    // 0d3e06  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd3e06u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d3e09  add esp, 8
    X86_AT(c, 0xd3e09u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3e0c  inc eax
    X86_AT(c, 0xd3e0cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d3e0d  jne 0xd3e32
    X86_AT(c, 0xd3e0du);
    if (x86_cc(c, 5)) { goto L_d3e32; }
    X86_TICK(c, 35);
    // 0d3e0f  lea eax, [edi + edi*4]
    X86_AT(c, 0xd3e0fu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0d3e12  lea eax, [eax*4]
    X86_AT(c, 0xd3e12u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d3e19  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd3e19u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d3e1c  add dword ptr [eax + 0xa1cc0], edx
    X86_AT(c, 0xd3e1cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0d3e22  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xd3e22u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0d3e25  add dword ptr [eax + 0xa1cc4], edx
    X86_AT(c, 0xd3e25u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0d3e2b  mov eax, 1
    X86_AT(c, 0xd3e2bu);
    c.r[0] = 0x1u;
    // 0d3e30  jmp 0xd3e34
    X86_AT(c, 0xd3e30u);
    goto L_d3e34;
L_d3e32:
    X86_TICK(c, 2);
    // 0d3e32  sub eax, eax
    X86_AT(c, 0xd3e32u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
L_d3e34:
    X86_TICK(c, 28);
    // 0d3e34  pop edi
    X86_AT(c, 0xd3e34u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3e35  pop esi
    X86_AT(c, 0xd3e35u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3e36  pop ebx
    X86_AT(c, 0xd3e36u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3e37  leave 
    X86_AT(c, 0xd3e37u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3e38  ret 
    X86_AT(c, 0xd3e38u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3dc0u, "ran off the end of a function");
}
void f_000d3e3c(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0d3e3c  push ebp
    X86_AT(c, 0xd3e3cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d3e3d  mov ebp, esp
    X86_AT(c, 0xd3e3du);
    c.r[5] = c.r[4];
    // 0d3e3f  push eax
    X86_AT(c, 0xd3e3fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d3e40  push ebx
    X86_AT(c, 0xd3e40u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3e41  push esi
    X86_AT(c, 0xd3e41u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3e42  push edi
    X86_AT(c, 0xd3e42u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3e43  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd3e43u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d3e46  sub eax, eax
    X86_AT(c, 0xd3e46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d3e48  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd3e48u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d3e4b  cmp eax, dword ptr [0xaae9c]
    X86_AT(c, 0xd3e4bu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xAAE9Cu))), 0, 4);
    // 0d3e51  jne 0xd3e61
    X86_AT(c, 0xd3e51u);
    if (x86_cc(c, 5)) { goto L_d3e61; }
    X86_TICK(c, 9);
    // 0d3e53  push edi
    X86_AT(c, 0xd3e53u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3e54  call 0xd3d60
    X86_AT(c, 0xd3e54u);
    push32(c, 0xd3e59u); x86_call_known(c, 0xd3d60u, f_000d3d60); X86_RET(c, 0xd3e59u);
    X86_TICK(c, 9);
    // 0d3e59  add esp, 4
    X86_AT(c, 0xd3e59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d3e5c  jmp 0xd3f0a
    X86_AT(c, 0xd3e5cu);
    goto L_d3f0a;
L_d3e61:
    X86_TICK(c, 31);
    // 0d3e61  lea eax, [edi + edi*4]
    X86_AT(c, 0xd3e61u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0d3e64  lea eax, [eax*4]
    X86_AT(c, 0xd3e64u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0d3e6b  mov esi, dword ptr [eax + 0xa1cc0]
    X86_AT(c, 0xd3e6bu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC0u)));
    // 0d3e71  sub esi, dword ptr [0xb033a]
    X86_AT(c, 0xd3e71u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Au))), 0, 4); }
    // 0d3e77  mov ebx, dword ptr [eax + 0xa1cc4]
    X86_AT(c, 0xd3e77u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xA1CC4u)));
    // 0d3e7d  sub ebx, dword ptr [0xb033e]
    X86_AT(c, 0xd3e7du);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xB033Eu))), 0, 4); }
    // 0d3e83  and esi, esi
    X86_AT(c, 0xd3e83u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d3e85  je 0xd3e97
    X86_AT(c, 0xd3e85u);
    if (x86_cc(c, 4)) { goto L_d3e97; }
    X86_TICK(c, 7);
    // 0d3e87  and esi, esi
    X86_AT(c, 0xd3e87u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d3e89  jle 0xd3e92
    X86_AT(c, 0xd3e89u);
    if (x86_cc(c, 14)) { goto L_d3e92; }
    X86_TICK(c, 9);
    // 0d3e8b  mov esi, 0xffffffff
    X86_AT(c, 0xd3e8bu);
    c.r[6] = 0xFFFFFFFFu;
    // 0d3e90  jmp 0xd3e97
    X86_AT(c, 0xd3e90u);
    goto L_d3e97;
L_d3e92:
    X86_TICK(c, 2);
    // 0d3e92  mov esi, 1
    X86_AT(c, 0xd3e92u);
    c.r[6] = 0x1u;
L_d3e97:
    X86_TICK(c, 7);
    // 0d3e97  and ebx, ebx
    X86_AT(c, 0xd3e97u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d3e99  je 0xd3eab
    X86_AT(c, 0xd3e99u);
    if (x86_cc(c, 4)) { goto L_d3eab; }
    X86_TICK(c, 7);
    // 0d3e9b  and ebx, ebx
    X86_AT(c, 0xd3e9bu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d3e9d  jle 0xd3ea6
    X86_AT(c, 0xd3e9du);
    if (x86_cc(c, 14)) { goto L_d3ea6; }
    X86_TICK(c, 9);
    // 0d3e9f  mov ebx, 0xffffffff
    X86_AT(c, 0xd3e9fu);
    c.r[3] = 0xFFFFFFFFu;
    // 0d3ea4  jmp 0xd3eab
    X86_AT(c, 0xd3ea4u);
    goto L_d3eab;
L_d3ea6:
    X86_TICK(c, 2);
    // 0d3ea6  mov ebx, 1
    X86_AT(c, 0xd3ea6u);
    c.r[3] = 0x1u;
L_d3eab:
    X86_TICK(c, 11);
    // 0d3eab  push 0x64
    X86_AT(c, 0xd3eabu);
    { uint32_t v = 0x64u; push32(c, v); }
    // 0d3ead  push 1
    X86_AT(c, 0xd3eadu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d3eaf  call 0xc5df0
    X86_AT(c, 0xd3eafu);
    push32(c, 0xd3eb4u); x86_call_known(c, 0xc5df0u, f_000c5df0); X86_RET(c, 0xd3eb4u);
    X86_TICK(c, 9);
    // 0d3eb4  add esp, 8
    X86_AT(c, 0xd3eb4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d3eb7  cmp eax, 0x32
    X86_AT(c, 0xd3eb7u);
    (void)x86_sub(c, c.r[0], 0x32u, 0, 4);
    // 0d3eba  jge 0xd3ede
    X86_AT(c, 0xd3ebau);
    if (x86_cc(c, 13)) { goto L_d3ede; }
    X86_TICK(c, 7);
    // 0d3ebc  and ebx, ebx
    X86_AT(c, 0xd3ebcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d3ebe  je 0xd3ecf
    X86_AT(c, 0xd3ebeu);
    if (x86_cc(c, 4)) { goto L_d3ecf; }
    X86_TICK(c, 13);
    // 0d3ec0  push ebx
    X86_AT(c, 0xd3ec0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3ec1  push 0
    X86_AT(c, 0xd3ec1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3ec3  push edi
    X86_AT(c, 0xd3ec3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3ec4  call 0xd3dc0
    X86_AT(c, 0xd3ec4u);
    push32(c, 0xd3ec9u); x86_call_known(c, 0xd3dc0u, f_000d3dc0); X86_RET(c, 0xd3ec9u);
    X86_TICK(c, 4);
    // 0d3ec9  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd3ec9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d3ecc  add esp, 0xc
    X86_AT(c, 0xd3eccu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d3ecf:
    X86_TICK(c, 12);
    // 0d3ecf  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xd3ecfu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0d3ed3  jne 0xd3f0a
    X86_AT(c, 0xd3ed3u);
    if (x86_cc(c, 5)) { goto L_d3f0a; }
    X86_TICK(c, 7);
    // 0d3ed5  and esi, esi
    X86_AT(c, 0xd3ed5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d3ed7  je 0xd3f0a
    X86_AT(c, 0xd3ed7u);
    if (x86_cc(c, 4)) { goto L_d3f0a; }
    X86_TICK(c, 11);
    // 0d3ed9  push 0
    X86_AT(c, 0xd3ed9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3edb  push esi
    X86_AT(c, 0xd3edbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3edc  jmp 0xd3efe
    X86_AT(c, 0xd3edcu);
    goto L_d3efe;
L_d3ede:
    X86_TICK(c, 7);
    // 0d3ede  and esi, esi
    X86_AT(c, 0xd3edeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d3ee0  je 0xd3ef1
    X86_AT(c, 0xd3ee0u);
    if (x86_cc(c, 4)) { goto L_d3ef1; }
    X86_TICK(c, 13);
    // 0d3ee2  push 0
    X86_AT(c, 0xd3ee2u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d3ee4  push esi
    X86_AT(c, 0xd3ee4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d3ee5  push edi
    X86_AT(c, 0xd3ee5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3ee6  call 0xd3dc0
    X86_AT(c, 0xd3ee6u);
    push32(c, 0xd3eebu); x86_call_known(c, 0xd3dc0u, f_000d3dc0); X86_RET(c, 0xd3eebu);
    X86_TICK(c, 4);
    // 0d3eeb  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd3eebu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d3eee  add esp, 0xc
    X86_AT(c, 0xd3eeeu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d3ef1:
    X86_TICK(c, 12);
    // 0d3ef1  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xd3ef1u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0d3ef5  jne 0xd3f0a
    X86_AT(c, 0xd3ef5u);
    if (x86_cc(c, 5)) { goto L_d3f0a; }
    X86_TICK(c, 7);
    // 0d3ef7  and ebx, ebx
    X86_AT(c, 0xd3ef7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0d3ef9  je 0xd3f0a
    X86_AT(c, 0xd3ef9u);
    if (x86_cc(c, 4)) { goto L_d3f0a; }
    X86_TICK(c, 4);
    // 0d3efb  push ebx
    X86_AT(c, 0xd3efbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d3efc  push 0
    X86_AT(c, 0xd3efcu);
    { uint32_t v = 0x0u; push32(c, v); }
L_d3efe:
    X86_TICK(c, 9);
    // 0d3efe  push edi
    X86_AT(c, 0xd3efeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d3eff  call 0xd3dc0
    X86_AT(c, 0xd3effu);
    push32(c, 0xd3f04u); x86_call_known(c, 0xd3dc0u, f_000d3dc0); X86_RET(c, 0xd3f04u);
    X86_TICK(c, 4);
    // 0d3f04  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd3f04u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d3f07  add esp, 0xc
    X86_AT(c, 0xd3f07u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d3f0a:
    X86_TICK(c, 28);
    // 0d3f0a  pop edi
    X86_AT(c, 0xd3f0au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d3f0b  pop esi
    X86_AT(c, 0xd3f0bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d3f0c  pop ebx
    X86_AT(c, 0xd3f0cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d3f0d  leave 
    X86_AT(c, 0xd3f0du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d3f0e  ret 
    X86_AT(c, 0xd3f0eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3e3cu, "ran off the end of a function");
}
}

#include "p_game_funcs.h"
namespace p_game {
void f_000d79c8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0d79c8  push ebp
    X86_AT(c, 0xd79c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d79c9  mov ebp, esp
    X86_AT(c, 0xd79c9u);
    c.r[5] = c.r[4];
    // 0d79cb  push eax
    X86_AT(c, 0xd79cbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d79cc  push ebx
    X86_AT(c, 0xd79ccu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d79cd  push esi
    X86_AT(c, 0xd79cdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d79ce  push edi
    X86_AT(c, 0xd79ceu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d79cf  push 0xa6a8
    X86_AT(c, 0xd79cfu);
    { uint32_t v = 0xA6A8u; push32(c, v); }
    // 0d79d4  call 0xcad60
    X86_AT(c, 0xd79d4u);
    push32(c, 0xd79d9u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xd79d9u);
    X86_TICK(c, 9);
    // 0d79d9  push 7
    X86_AT(c, 0xd79d9u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d79db  call 0xca0a0
    X86_AT(c, 0xd79dbu);
    push32(c, 0xd79e0u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd79e0u);
    X86_TICK(c, 4);
    // 0d79e0  sub edi, edi
    X86_AT(c, 0xd79e0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d79e2  add esp, 8
    X86_AT(c, 0xd79e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d79e5:
    X86_TICK(c, 7);
    // 0d79e5  cmp edi, 6
    X86_AT(c, 0xd79e5u);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0d79e8  jge 0xd7a07
    X86_AT(c, 0xd79e8u);
    if (x86_cc(c, 13)) { goto L_d7a07; }
    X86_TICK(c, 9);
    // 0d79ea  push 0
    X86_AT(c, 0xd79eau);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d79ec  call 0xc6210
    X86_AT(c, 0xd79ecu);
    push32(c, 0xd79f1u); x86_call_known(c, 0xc6210u, f_000c6210); X86_RET(c, 0xd79f1u);
    X86_TICK(c, 9);
    // 0d79f1  add esp, 4
    X86_AT(c, 0xd79f1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d79f4  and eax, eax
    X86_AT(c, 0xd79f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d79f6  jne 0xd7a04
    X86_AT(c, 0xd79f6u);
    if (x86_cc(c, 5)) { goto L_d7a04; }
    X86_TICK(c, 9);
    // 0d79f8  push 2
    X86_AT(c, 0xd79f8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d79fa  call 0xca3cc
    X86_AT(c, 0xd79fau);
    push32(c, 0xd79ffu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd79ffu);
    X86_TICK(c, 9);
    // 0d79ff  add esp, 4
    X86_AT(c, 0xd79ffu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d7a02  jmp 0xd7a07
    X86_AT(c, 0xd7a02u);
    goto L_d7a07;
L_d7a04:
    X86_TICK(c, 9);
    // 0d7a04  inc edi
    X86_AT(c, 0xd7a04u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d7a05  jmp 0xd79e5
    X86_AT(c, 0xd7a05u);
    X86_POLL(c, 0xd79e5u); goto L_d79e5;
L_d7a07:
    X86_TICK(c, 7);
    // 0d7a07  cmp edi, 6
    X86_AT(c, 0xd7a07u);
    (void)x86_sub(c, c.r[7], 0x6u, 0, 4);
    // 0d7a0a  jl 0xd7a13
    X86_AT(c, 0xd7a0au);
    if (x86_cc(c, 12)) { goto L_d7a13; }
    X86_TICK(c, 9);
    // 0d7a0c  push 0xa6f0
    X86_AT(c, 0xd7a0cu);
    { uint32_t v = 0xA6F0u; push32(c, v); }
    // 0d7a11  jmp 0xd7a2f
    X86_AT(c, 0xd7a11u);
    goto L_d7a2f;
L_d7a13:
    X86_TICK(c, 11);
    // 0d7a13  push 0xa738
    X86_AT(c, 0xd7a13u);
    { uint32_t v = 0xA738u; push32(c, v); }
    // 0d7a18  push 0xa73c
    X86_AT(c, 0xd7a18u);
    { uint32_t v = 0xA73Cu; push32(c, v); }
    // 0d7a1d  call 0xe6e04
    X86_AT(c, 0xd7a1du);
    push32(c, 0xd7a22u); x86_call_known(c, 0xe6e04u, f_000e6e04); X86_RET(c, 0xd7a22u);
    X86_TICK(c, 12);
    // 0d7a22  add esp, 8
    X86_AT(c, 0xd7a22u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d7a25  xchg esi, eax
    X86_AT(c, 0xd7a25u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d7a26  and esi, esi
    X86_AT(c, 0xd7a26u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d7a28  jne 0xd7a4a
    X86_AT(c, 0xd7a28u);
    if (x86_cc(c, 5)) { goto L_d7a4a; }
    X86_TICK(c, 2);
    // 0d7a2a  push 0xa74c
    X86_AT(c, 0xd7a2au);
    { uint32_t v = 0xA74Cu; push32(c, v); }
L_d7a2f:
    X86_TICK(c, 7);
    // 0d7a2f  call 0xcad60
    X86_AT(c, 0xd7a2fu);
    push32(c, 0xd7a34u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xd7a34u);
    X86_TICK(c, 9);
    // 0d7a34  push 0x14
    X86_AT(c, 0xd7a34u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0d7a36  call 0xd6660
    X86_AT(c, 0xd7a36u);
    push32(c, 0xd7a3bu); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd7a3bu);
    X86_TICK(c, 9);
    // 0d7a3b  push 2
    X86_AT(c, 0xd7a3bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d7a3d  call 0xca3cc
    X86_AT(c, 0xd7a3du);
    push32(c, 0xd7a42u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd7a42u);
    X86_TICK(c, 9);
    // 0d7a42  add esp, 0xc
    X86_AT(c, 0xd7a42u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d7a45  jmp 0xd8499
    X86_AT(c, 0xd7a45u);
    goto L_d8499;
L_d7a4a:
    X86_TICK(c, 11);
    // 0d7a4a  push 0xa7a0
    X86_AT(c, 0xd7a4au);
    { uint32_t v = 0xA7A0u; push32(c, v); }
    // 0d7a4f  push esi
    X86_AT(c, 0xd7a4fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7a50  call 0xe779c
    X86_AT(c, 0xd7a50u);
    push32(c, 0xd7a55u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7a55u);
    X86_TICK(c, 12);
    // 0d7a55  cmp dword ptr [0x43eb8], 0
    X86_AT(c, 0xd7a55u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x43EB8u))), 0x0u, 0, 4);
    // 0d7a5c  je 0xd7a65
    X86_AT(c, 0xd7a5cu);
    if (x86_cc(c, 4)) { goto L_d7a65; }
    X86_TICK(c, 9);
    // 0d7a5e  mov eax, 0x4a
    X86_AT(c, 0xd7a5eu);
    c.r[0] = 0x4Au;
    // 0d7a63  jmp 0xd7a6a
    X86_AT(c, 0xd7a63u);
    goto L_d7a6a;
L_d7a65:
    X86_TICK(c, 2);
    // 0d7a65  mov eax, 0x45
    X86_AT(c, 0xd7a65u);
    c.r[0] = 0x45u;
L_d7a6a:
    X86_TICK(c, 13);
    // 0d7a6a  push eax
    X86_AT(c, 0xd7a6au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7a6b  push 0xa7c4
    X86_AT(c, 0xd7a6bu);
    { uint32_t v = 0xA7C4u; push32(c, v); }
    // 0d7a70  push esi
    X86_AT(c, 0xd7a70u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7a71  call 0xe779c
    X86_AT(c, 0xd7a71u);
    push32(c, 0xd7a76u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7a76u);
    X86_TICK(c, 4);
    // 0d7a76  sub edi, edi
    X86_AT(c, 0xd7a76u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0d7a78  add esp, 0x14
    X86_AT(c, 0xd7a78u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d7a7b:
    X86_TICK(c, 7);
    // 0d7a7b  cmp edi, 4
    X86_AT(c, 0xd7a7bu);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0d7a7e  jge 0xd8490
    X86_AT(c, 0xd7a7eu);
    if (x86_cc(c, 13)) { goto L_d8490; }
    X86_TICK(c, 34);
    // 0d7a84  imul eax, edi, 0x21a
    X86_AT(c, 0xd7a84u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d7a8a  cmp byte ptr [eax + 0xb0508], 0
    X86_AT(c, 0xd7a8au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0508u))), 0x0u, 0, 1);
    // 0d7a91  jne 0xd7aa8
    X86_AT(c, 0xd7a91u);
    if (x86_cc(c, 5)) { goto L_d7aa8; }
    X86_TICK(c, 17);
    // 0d7a93  push 0
    X86_AT(c, 0xd7a93u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d7a95  push 0
    X86_AT(c, 0xd7a95u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d7a97  push edi
    X86_AT(c, 0xd7a97u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7a98  push 0xa7d0
    X86_AT(c, 0xd7a98u);
    { uint32_t v = 0xA7D0u; push32(c, v); }
    // 0d7a9d  push esi
    X86_AT(c, 0xd7a9du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7a9e  call 0xe779c
    X86_AT(c, 0xd7a9eu);
    push32(c, 0xd7aa3u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7aa3u);
    X86_TICK(c, 9);
    // 0d7aa3  add esp, 0x14
    X86_AT(c, 0xd7aa3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d7aa6  jmp 0xd7ac3
    X86_AT(c, 0xd7aa6u);
    goto L_d7ac3;
L_d7aa8:
    X86_TICK(c, 39);
    // 0d7aa8  imul eax, edi, 0x21a
    X86_AT(c, 0xd7aa8u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d7aae  add eax, 0xb0508
    X86_AT(c, 0xd7aaeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xB0508u, 0, 4); }
    // 0d7ab3  push eax
    X86_AT(c, 0xd7ab3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d7ab4  push edi
    X86_AT(c, 0xd7ab4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d7ab5  push 0xa7e4
    X86_AT(c, 0xd7ab5u);
    { uint32_t v = 0xA7E4u; push32(c, v); }
    // 0d7aba  push esi
    X86_AT(c, 0xd7abau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7abb  call 0xe779c
    X86_AT(c, 0xd7abbu);
    push32(c, 0xd7ac0u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7ac0u);
    X86_TICK(c, 2);
    // 0d7ac0  add esp, 0x10
    X86_AT(c, 0xd7ac0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d7ac3:
    X86_TICK(c, 47);
    // 0d7ac3  mov eax, 0xb01a8
    X86_AT(c, 0xd7ac3u);
    c.r[0] = 0xB01A8u;
    // 0d7ac8  imul edx, edi, 0x21a
    X86_AT(c, 0xd7ac8u);
    c.r[2] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d7ace  movzx ecx, byte ptr [eax + edx*1 + 0x36f]
    X86_AT(c, 0xd7aceu);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0x36Fu)));
    // 0d7ad6  push ecx
    X86_AT(c, 0xd7ad6u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0d7ad7  push 0xa7f8
    X86_AT(c, 0xd7ad7u);
    { uint32_t v = 0xA7F8u; push32(c, v); }
    // 0d7adc  push esi
    X86_AT(c, 0xd7adcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7add  mov ebx, eax
    X86_AT(c, 0xd7addu);
    c.r[3] = c.r[0];
    // 0d7adf  mov dword ptr [ebp - 4], edx
    X86_AT(c, 0xd7adfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[2]);
    // 0d7ae2  call 0xe779c
    X86_AT(c, 0xd7ae2u);
    push32(c, 0xd7ae7u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7ae7u);
    X86_TICK(c, 23);
    // 0d7ae7  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7ae7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7aea  movzx edx, byte ptr [ebx + eax*1 + 0x370]
    X86_AT(c, 0xd7aeau);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x370u)));
    // 0d7af2  push edx
    X86_AT(c, 0xd7af2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d7af3  push 0xa80c
    X86_AT(c, 0xd7af3u);
    { uint32_t v = 0xA80Cu; push32(c, v); }
    // 0d7af8  push esi
    X86_AT(c, 0xd7af8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7af9  call 0xe779c
    X86_AT(c, 0xd7af9u);
    push32(c, 0xd7afeu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7afeu);
    X86_TICK(c, 23);
    // 0d7afe  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7afeu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7b01  movzx edx, byte ptr [ebx + eax*1 + 0x371]
    X86_AT(c, 0xd7b01u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x371u)));
    // 0d7b09  push edx
    X86_AT(c, 0xd7b09u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d7b0a  push 0xa820
    X86_AT(c, 0xd7b0au);
    { uint32_t v = 0xA820u; push32(c, v); }
    // 0d7b0f  push esi
    X86_AT(c, 0xd7b0fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7b10  call 0xe779c
    X86_AT(c, 0xd7b10u);
    push32(c, 0xd7b15u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7b15u);
    X86_TICK(c, 20);
    // 0d7b15  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7b15u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7b18  push dword ptr [ebx + eax*1 + 0x372]
    X86_AT(c, 0xd7b18u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x372u))); push32(c, v); }
    // 0d7b1f  push 0xa834
    X86_AT(c, 0xd7b1fu);
    { uint32_t v = 0xA834u; push32(c, v); }
    // 0d7b24  push esi
    X86_AT(c, 0xd7b24u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7b25  call 0xe779c
    X86_AT(c, 0xd7b25u);
    push32(c, 0xd7b2au); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7b2au);
    X86_TICK(c, 20);
    // 0d7b2a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7b2au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7b2d  push dword ptr [ebx + eax*1 + 0x376]
    X86_AT(c, 0xd7b2du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x376u))); push32(c, v); }
    // 0d7b34  push 0xa848
    X86_AT(c, 0xd7b34u);
    { uint32_t v = 0xA848u; push32(c, v); }
    // 0d7b39  push esi
    X86_AT(c, 0xd7b39u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7b3a  call 0xe779c
    X86_AT(c, 0xd7b3au);
    push32(c, 0xd7b3fu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7b3fu);
    X86_TICK(c, 22);
    // 0d7b3f  add esp, 0x3c
    X86_AT(c, 0xd7b3fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7b42  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7b42u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7b45  push dword ptr [ebx + eax*1 + 0x37a]
    X86_AT(c, 0xd7b45u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x37Au))); push32(c, v); }
    // 0d7b4c  push 0xa85c
    X86_AT(c, 0xd7b4cu);
    { uint32_t v = 0xA85Cu; push32(c, v); }
    // 0d7b51  push esi
    X86_AT(c, 0xd7b51u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7b52  call 0xe779c
    X86_AT(c, 0xd7b52u);
    push32(c, 0xd7b57u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7b57u);
    X86_TICK(c, 20);
    // 0d7b57  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7b57u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7b5a  push dword ptr [ebx + eax*1 + 0x37e]
    X86_AT(c, 0xd7b5au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x37Eu))); push32(c, v); }
    // 0d7b61  push 0xa870
    X86_AT(c, 0xd7b61u);
    { uint32_t v = 0xA870u; push32(c, v); }
    // 0d7b66  push esi
    X86_AT(c, 0xd7b66u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7b67  call 0xe779c
    X86_AT(c, 0xd7b67u);
    push32(c, 0xd7b6cu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7b6cu);
    X86_TICK(c, 20);
    // 0d7b6c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7b6cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7b6f  push dword ptr [ebx + eax*1 + 0x382]
    X86_AT(c, 0xd7b6fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x382u))); push32(c, v); }
    // 0d7b76  push 0xa884
    X86_AT(c, 0xd7b76u);
    { uint32_t v = 0xA884u; push32(c, v); }
    // 0d7b7b  push esi
    X86_AT(c, 0xd7b7bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7b7c  call 0xe779c
    X86_AT(c, 0xd7b7cu);
    push32(c, 0xd7b81u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7b81u);
    X86_TICK(c, 20);
    // 0d7b81  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7b81u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7b84  push dword ptr [ebx + eax*1 + 0x386]
    X86_AT(c, 0xd7b84u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x386u))); push32(c, v); }
    // 0d7b8b  push 0xa898
    X86_AT(c, 0xd7b8bu);
    { uint32_t v = 0xA898u; push32(c, v); }
    // 0d7b90  push esi
    X86_AT(c, 0xd7b90u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7b91  call 0xe779c
    X86_AT(c, 0xd7b91u);
    push32(c, 0xd7b96u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7b96u);
    X86_TICK(c, 20);
    // 0d7b96  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7b96u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7b99  push dword ptr [ebx + eax*1 + 0x38a]
    X86_AT(c, 0xd7b99u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x38Au))); push32(c, v); }
    // 0d7ba0  push 0xa8ac
    X86_AT(c, 0xd7ba0u);
    { uint32_t v = 0xA8ACu; push32(c, v); }
    // 0d7ba5  push esi
    X86_AT(c, 0xd7ba5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7ba6  call 0xe779c
    X86_AT(c, 0xd7ba6u);
    push32(c, 0xd7babu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7babu);
    X86_TICK(c, 22);
    // 0d7bab  add esp, 0x3c
    X86_AT(c, 0xd7babu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7bae  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd7baeu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d7bb1  push dword ptr [ebx + eax*1 + 0x38e]
    X86_AT(c, 0xd7bb1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x38Eu))); push32(c, v); }
    // 0d7bb8  push 0xa8c0
    X86_AT(c, 0xd7bb8u);
    { uint32_t v = 0xA8C0u; push32(c, v); }
    // 0d7bbd  push esi
    X86_AT(c, 0xd7bbdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7bbe  call 0xe779c
    X86_AT(c, 0xd7bbeu);
    push32(c, 0xd7bc3u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7bc3u);
    X86_TICK(c, 42);
    // 0d7bc3  add esp, 0xc
    X86_AT(c, 0xd7bc3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d7bc6  imul eax, edi, 0x21a
    X86_AT(c, 0xd7bc6u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d7bcc  push dword ptr [eax + 0xb053a]
    X86_AT(c, 0xd7bccu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB053Au))); push32(c, v); }
    // 0d7bd2  push 0xa8d4
    X86_AT(c, 0xd7bd2u);
    { uint32_t v = 0xA8D4u; push32(c, v); }
    // 0d7bd7  push esi
    X86_AT(c, 0xd7bd7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7bd8  mov ebx, eax
    X86_AT(c, 0xd7bd8u);
    c.r[3] = c.r[0];
    // 0d7bda  call 0xe779c
    X86_AT(c, 0xd7bdau);
    push32(c, 0xd7bdfu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7bdfu);
    X86_TICK(c, 16);
    // 0d7bdf  push dword ptr [ebx + 0xb053e]
    X86_AT(c, 0xd7bdfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB053Eu))); push32(c, v); }
    // 0d7be5  push 0xa8e8
    X86_AT(c, 0xd7be5u);
    { uint32_t v = 0xA8E8u; push32(c, v); }
    // 0d7bea  push esi
    X86_AT(c, 0xd7beau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7beb  call 0xe779c
    X86_AT(c, 0xd7bebu);
    push32(c, 0xd7bf0u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7bf0u);
    X86_TICK(c, 16);
    // 0d7bf0  push dword ptr [ebx + 0xb0542]
    X86_AT(c, 0xd7bf0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0542u))); push32(c, v); }
    // 0d7bf6  push 0xa8fc
    X86_AT(c, 0xd7bf6u);
    { uint32_t v = 0xA8FCu; push32(c, v); }
    // 0d7bfb  push esi
    X86_AT(c, 0xd7bfbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7bfc  call 0xe779c
    X86_AT(c, 0xd7bfcu);
    push32(c, 0xd7c01u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7c01u);
    X86_TICK(c, 16);
    // 0d7c01  push dword ptr [ebx + 0xb0546]
    X86_AT(c, 0xd7c01u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0546u))); push32(c, v); }
    // 0d7c07  push 0xa910
    X86_AT(c, 0xd7c07u);
    { uint32_t v = 0xA910u; push32(c, v); }
    // 0d7c0c  push esi
    X86_AT(c, 0xd7c0cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7c0d  call 0xe779c
    X86_AT(c, 0xd7c0du);
    push32(c, 0xd7c12u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7c12u);
    X86_TICK(c, 16);
    // 0d7c12  push dword ptr [ebx + 0xb054a]
    X86_AT(c, 0xd7c12u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB054Au))); push32(c, v); }
    // 0d7c18  push 0xa924
    X86_AT(c, 0xd7c18u);
    { uint32_t v = 0xA924u; push32(c, v); }
    // 0d7c1d  push esi
    X86_AT(c, 0xd7c1du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7c1e  call 0xe779c
    X86_AT(c, 0xd7c1eu);
    push32(c, 0xd7c23u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7c23u);
    X86_TICK(c, 18);
    // 0d7c23  add esp, 0x3c
    X86_AT(c, 0xd7c23u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7c26  push dword ptr [ebx + 0xb054e]
    X86_AT(c, 0xd7c26u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB054Eu))); push32(c, v); }
    // 0d7c2c  push 0xa938
    X86_AT(c, 0xd7c2cu);
    { uint32_t v = 0xA938u; push32(c, v); }
    // 0d7c31  push esi
    X86_AT(c, 0xd7c31u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7c32  call 0xe779c
    X86_AT(c, 0xd7c32u);
    push32(c, 0xd7c37u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7c37u);
    X86_TICK(c, 16);
    // 0d7c37  push dword ptr [ebx + 0xb0552]
    X86_AT(c, 0xd7c37u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0552u))); push32(c, v); }
    // 0d7c3d  push 0xa94c
    X86_AT(c, 0xd7c3du);
    { uint32_t v = 0xA94Cu; push32(c, v); }
    // 0d7c42  push esi
    X86_AT(c, 0xd7c42u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7c43  call 0xe779c
    X86_AT(c, 0xd7c43u);
    push32(c, 0xd7c48u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7c48u);
    X86_TICK(c, 16);
    // 0d7c48  push dword ptr [ebx + 0xb0556]
    X86_AT(c, 0xd7c48u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0556u))); push32(c, v); }
    // 0d7c4e  push 0xa960
    X86_AT(c, 0xd7c4eu);
    { uint32_t v = 0xA960u; push32(c, v); }
    // 0d7c53  push esi
    X86_AT(c, 0xd7c53u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7c54  call 0xe779c
    X86_AT(c, 0xd7c54u);
    push32(c, 0xd7c59u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7c59u);
    X86_TICK(c, 16);
    // 0d7c59  push dword ptr [ebx + 0xb055a]
    X86_AT(c, 0xd7c59u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB055Au))); push32(c, v); }
    // 0d7c5f  push 0xa974
    X86_AT(c, 0xd7c5fu);
    { uint32_t v = 0xA974u; push32(c, v); }
    // 0d7c64  push esi
    X86_AT(c, 0xd7c64u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7c65  call 0xe779c
    X86_AT(c, 0xd7c65u);
    push32(c, 0xd7c6au); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7c6au);
    X86_TICK(c, 16);
    // 0d7c6a  push dword ptr [ebx + 0xb055e]
    X86_AT(c, 0xd7c6au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB055Eu))); push32(c, v); }
    // 0d7c70  push 0xa988
    X86_AT(c, 0xd7c70u);
    { uint32_t v = 0xA988u; push32(c, v); }
    // 0d7c75  push esi
    X86_AT(c, 0xd7c75u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7c76  call 0xe779c
    X86_AT(c, 0xd7c76u);
    push32(c, 0xd7c7bu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7c7bu);
    X86_TICK(c, 18);
    // 0d7c7b  add esp, 0x3c
    X86_AT(c, 0xd7c7bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7c7e  push dword ptr [ebx + 0xb0566]
    X86_AT(c, 0xd7c7eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0566u))); push32(c, v); }
    // 0d7c84  push 0xa99c
    X86_AT(c, 0xd7c84u);
    { uint32_t v = 0xA99Cu; push32(c, v); }
    // 0d7c89  push esi
    X86_AT(c, 0xd7c89u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7c8a  call 0xe779c
    X86_AT(c, 0xd7c8au);
    push32(c, 0xd7c8fu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7c8fu);
    X86_TICK(c, 42);
    // 0d7c8f  add esp, 0xc
    X86_AT(c, 0xd7c8fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d7c92  imul eax, edi, 0x21a
    X86_AT(c, 0xd7c92u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d7c98  push dword ptr [eax + 0xb056a]
    X86_AT(c, 0xd7c98u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB056Au))); push32(c, v); }
    // 0d7c9e  push 0xa9b0
    X86_AT(c, 0xd7c9eu);
    { uint32_t v = 0xA9B0u; push32(c, v); }
    // 0d7ca3  push esi
    X86_AT(c, 0xd7ca3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7ca4  mov ebx, eax
    X86_AT(c, 0xd7ca4u);
    c.r[3] = c.r[0];
    // 0d7ca6  call 0xe779c
    X86_AT(c, 0xd7ca6u);
    push32(c, 0xd7cabu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7cabu);
    X86_TICK(c, 16);
    // 0d7cab  push dword ptr [ebx + 0xb056e]
    X86_AT(c, 0xd7cabu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB056Eu))); push32(c, v); }
    // 0d7cb1  push 0xa9c4
    X86_AT(c, 0xd7cb1u);
    { uint32_t v = 0xA9C4u; push32(c, v); }
    // 0d7cb6  push esi
    X86_AT(c, 0xd7cb6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7cb7  call 0xe779c
    X86_AT(c, 0xd7cb7u);
    push32(c, 0xd7cbcu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7cbcu);
    X86_TICK(c, 16);
    // 0d7cbc  push dword ptr [ebx + 0xb0572]
    X86_AT(c, 0xd7cbcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0572u))); push32(c, v); }
    // 0d7cc2  push 0xa9d8
    X86_AT(c, 0xd7cc2u);
    { uint32_t v = 0xA9D8u; push32(c, v); }
    // 0d7cc7  push esi
    X86_AT(c, 0xd7cc7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7cc8  call 0xe779c
    X86_AT(c, 0xd7cc8u);
    push32(c, 0xd7ccdu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7ccdu);
    X86_TICK(c, 16);
    // 0d7ccd  push dword ptr [ebx + 0xb0576]
    X86_AT(c, 0xd7ccdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0576u))); push32(c, v); }
    // 0d7cd3  push 0xa9ec
    X86_AT(c, 0xd7cd3u);
    { uint32_t v = 0xA9ECu; push32(c, v); }
    // 0d7cd8  push esi
    X86_AT(c, 0xd7cd8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7cd9  call 0xe779c
    X86_AT(c, 0xd7cd9u);
    push32(c, 0xd7cdeu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7cdeu);
    X86_TICK(c, 16);
    // 0d7cde  push dword ptr [ebx + 0xb057a]
    X86_AT(c, 0xd7cdeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB057Au))); push32(c, v); }
    // 0d7ce4  push 0xaa00
    X86_AT(c, 0xd7ce4u);
    { uint32_t v = 0xAA00u; push32(c, v); }
    // 0d7ce9  push esi
    X86_AT(c, 0xd7ce9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7cea  call 0xe779c
    X86_AT(c, 0xd7ceau);
    push32(c, 0xd7cefu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7cefu);
    X86_TICK(c, 18);
    // 0d7cef  add esp, 0x3c
    X86_AT(c, 0xd7cefu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7cf2  push dword ptr [ebx + 0xb057e]
    X86_AT(c, 0xd7cf2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB057Eu))); push32(c, v); }
    // 0d7cf8  push 0xaa14
    X86_AT(c, 0xd7cf8u);
    { uint32_t v = 0xAA14u; push32(c, v); }
    // 0d7cfd  push esi
    X86_AT(c, 0xd7cfdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7cfe  call 0xe779c
    X86_AT(c, 0xd7cfeu);
    push32(c, 0xd7d03u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7d03u);
    X86_TICK(c, 16);
    // 0d7d03  push dword ptr [ebx + 0xb0582]
    X86_AT(c, 0xd7d03u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0582u))); push32(c, v); }
    // 0d7d09  push 0xaa28
    X86_AT(c, 0xd7d09u);
    { uint32_t v = 0xAA28u; push32(c, v); }
    // 0d7d0e  push esi
    X86_AT(c, 0xd7d0eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7d0f  call 0xe779c
    X86_AT(c, 0xd7d0fu);
    push32(c, 0xd7d14u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7d14u);
    X86_TICK(c, 16);
    // 0d7d14  push dword ptr [ebx + 0xb0586]
    X86_AT(c, 0xd7d14u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0586u))); push32(c, v); }
    // 0d7d1a  push 0xaa3c
    X86_AT(c, 0xd7d1au);
    { uint32_t v = 0xAA3Cu; push32(c, v); }
    // 0d7d1f  push esi
    X86_AT(c, 0xd7d1fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7d20  call 0xe779c
    X86_AT(c, 0xd7d20u);
    push32(c, 0xd7d25u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7d25u);
    X86_TICK(c, 16);
    // 0d7d25  push dword ptr [ebx + 0xb058a]
    X86_AT(c, 0xd7d25u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB058Au))); push32(c, v); }
    // 0d7d2b  push 0xaa50
    X86_AT(c, 0xd7d2bu);
    { uint32_t v = 0xAA50u; push32(c, v); }
    // 0d7d30  push esi
    X86_AT(c, 0xd7d30u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7d31  call 0xe779c
    X86_AT(c, 0xd7d31u);
    push32(c, 0xd7d36u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7d36u);
    X86_TICK(c, 16);
    // 0d7d36  push dword ptr [ebx + 0xb058e]
    X86_AT(c, 0xd7d36u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB058Eu))); push32(c, v); }
    // 0d7d3c  push 0xaa64
    X86_AT(c, 0xd7d3cu);
    { uint32_t v = 0xAA64u; push32(c, v); }
    // 0d7d41  push esi
    X86_AT(c, 0xd7d41u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7d42  call 0xe779c
    X86_AT(c, 0xd7d42u);
    push32(c, 0xd7d47u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7d47u);
    X86_TICK(c, 18);
    // 0d7d47  add esp, 0x3c
    X86_AT(c, 0xd7d47u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7d4a  push dword ptr [ebx + 0xb0592]
    X86_AT(c, 0xd7d4au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0592u))); push32(c, v); }
    // 0d7d50  push 0xaa78
    X86_AT(c, 0xd7d50u);
    { uint32_t v = 0xAA78u; push32(c, v); }
    // 0d7d55  push esi
    X86_AT(c, 0xd7d55u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7d56  call 0xe779c
    X86_AT(c, 0xd7d56u);
    push32(c, 0xd7d5bu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7d5bu);
    X86_TICK(c, 42);
    // 0d7d5b  add esp, 0xc
    X86_AT(c, 0xd7d5bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d7d5e  imul eax, edi, 0x21a
    X86_AT(c, 0xd7d5eu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d7d64  push dword ptr [eax + 0xb0596]
    X86_AT(c, 0xd7d64u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0596u))); push32(c, v); }
    // 0d7d6a  push 0xaa8c
    X86_AT(c, 0xd7d6au);
    { uint32_t v = 0xAA8Cu; push32(c, v); }
    // 0d7d6f  push esi
    X86_AT(c, 0xd7d6fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7d70  mov ebx, eax
    X86_AT(c, 0xd7d70u);
    c.r[3] = c.r[0];
    // 0d7d72  call 0xe779c
    X86_AT(c, 0xd7d72u);
    push32(c, 0xd7d77u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7d77u);
    X86_TICK(c, 16);
    // 0d7d77  push dword ptr [ebx + 0xb059a]
    X86_AT(c, 0xd7d77u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB059Au))); push32(c, v); }
    // 0d7d7d  push 0xaaa0
    X86_AT(c, 0xd7d7du);
    { uint32_t v = 0xAAA0u; push32(c, v); }
    // 0d7d82  push esi
    X86_AT(c, 0xd7d82u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7d83  call 0xe779c
    X86_AT(c, 0xd7d83u);
    push32(c, 0xd7d88u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7d88u);
    X86_TICK(c, 16);
    // 0d7d88  push dword ptr [ebx + 0xb059e]
    X86_AT(c, 0xd7d88u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB059Eu))); push32(c, v); }
    // 0d7d8e  push 0xaab4
    X86_AT(c, 0xd7d8eu);
    { uint32_t v = 0xAAB4u; push32(c, v); }
    // 0d7d93  push esi
    X86_AT(c, 0xd7d93u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7d94  call 0xe779c
    X86_AT(c, 0xd7d94u);
    push32(c, 0xd7d99u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7d99u);
    X86_TICK(c, 16);
    // 0d7d99  push dword ptr [ebx + 0xb05a2]
    X86_AT(c, 0xd7d99u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05A2u))); push32(c, v); }
    // 0d7d9f  push 0xaac8
    X86_AT(c, 0xd7d9fu);
    { uint32_t v = 0xAAC8u; push32(c, v); }
    // 0d7da4  push esi
    X86_AT(c, 0xd7da4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7da5  call 0xe779c
    X86_AT(c, 0xd7da5u);
    push32(c, 0xd7daau); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7daau);
    X86_TICK(c, 16);
    // 0d7daa  push dword ptr [ebx + 0xb05a6]
    X86_AT(c, 0xd7daau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05A6u))); push32(c, v); }
    // 0d7db0  push 0xaadc
    X86_AT(c, 0xd7db0u);
    { uint32_t v = 0xAADCu; push32(c, v); }
    // 0d7db5  push esi
    X86_AT(c, 0xd7db5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7db6  call 0xe779c
    X86_AT(c, 0xd7db6u);
    push32(c, 0xd7dbbu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7dbbu);
    X86_TICK(c, 18);
    // 0d7dbb  add esp, 0x3c
    X86_AT(c, 0xd7dbbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7dbe  push dword ptr [ebx + 0xb05aa]
    X86_AT(c, 0xd7dbeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05AAu))); push32(c, v); }
    // 0d7dc4  push 0xaaf0
    X86_AT(c, 0xd7dc4u);
    { uint32_t v = 0xAAF0u; push32(c, v); }
    // 0d7dc9  push esi
    X86_AT(c, 0xd7dc9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7dca  call 0xe779c
    X86_AT(c, 0xd7dcau);
    push32(c, 0xd7dcfu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7dcfu);
    X86_TICK(c, 16);
    // 0d7dcf  push dword ptr [ebx + 0xb05ae]
    X86_AT(c, 0xd7dcfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05AEu))); push32(c, v); }
    // 0d7dd5  push 0xab04
    X86_AT(c, 0xd7dd5u);
    { uint32_t v = 0xAB04u; push32(c, v); }
    // 0d7dda  push esi
    X86_AT(c, 0xd7ddau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7ddb  call 0xe779c
    X86_AT(c, 0xd7ddbu);
    push32(c, 0xd7de0u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7de0u);
    X86_TICK(c, 16);
    // 0d7de0  push dword ptr [ebx + 0xb05b2]
    X86_AT(c, 0xd7de0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05B2u))); push32(c, v); }
    // 0d7de6  push 0xab18
    X86_AT(c, 0xd7de6u);
    { uint32_t v = 0xAB18u; push32(c, v); }
    // 0d7deb  push esi
    X86_AT(c, 0xd7debu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7dec  call 0xe779c
    X86_AT(c, 0xd7decu);
    push32(c, 0xd7df1u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7df1u);
    X86_TICK(c, 16);
    // 0d7df1  push dword ptr [ebx + 0xb05b6]
    X86_AT(c, 0xd7df1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05B6u))); push32(c, v); }
    // 0d7df7  push 0xab2c
    X86_AT(c, 0xd7df7u);
    { uint32_t v = 0xAB2Cu; push32(c, v); }
    // 0d7dfc  push esi
    X86_AT(c, 0xd7dfcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7dfd  call 0xe779c
    X86_AT(c, 0xd7dfdu);
    push32(c, 0xd7e02u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7e02u);
    X86_TICK(c, 16);
    // 0d7e02  push dword ptr [ebx + 0xb05ba]
    X86_AT(c, 0xd7e02u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05BAu))); push32(c, v); }
    // 0d7e08  push 0xab40
    X86_AT(c, 0xd7e08u);
    { uint32_t v = 0xAB40u; push32(c, v); }
    // 0d7e0d  push esi
    X86_AT(c, 0xd7e0du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7e0e  call 0xe779c
    X86_AT(c, 0xd7e0eu);
    push32(c, 0xd7e13u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7e13u);
    X86_TICK(c, 18);
    // 0d7e13  add esp, 0x3c
    X86_AT(c, 0xd7e13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7e16  push dword ptr [ebx + 0xb05be]
    X86_AT(c, 0xd7e16u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05BEu))); push32(c, v); }
    // 0d7e1c  push 0xab54
    X86_AT(c, 0xd7e1cu);
    { uint32_t v = 0xAB54u; push32(c, v); }
    // 0d7e21  push esi
    X86_AT(c, 0xd7e21u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7e22  call 0xe779c
    X86_AT(c, 0xd7e22u);
    push32(c, 0xd7e27u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7e27u);
    X86_TICK(c, 42);
    // 0d7e27  add esp, 0xc
    X86_AT(c, 0xd7e27u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d7e2a  imul eax, edi, 0x21a
    X86_AT(c, 0xd7e2au);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d7e30  push dword ptr [eax + 0xb05c2]
    X86_AT(c, 0xd7e30u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB05C2u))); push32(c, v); }
    // 0d7e36  push 0xab68
    X86_AT(c, 0xd7e36u);
    { uint32_t v = 0xAB68u; push32(c, v); }
    // 0d7e3b  push esi
    X86_AT(c, 0xd7e3bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7e3c  mov ebx, eax
    X86_AT(c, 0xd7e3cu);
    c.r[3] = c.r[0];
    // 0d7e3e  call 0xe779c
    X86_AT(c, 0xd7e3eu);
    push32(c, 0xd7e43u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7e43u);
    X86_TICK(c, 16);
    // 0d7e43  push dword ptr [ebx + 0xb05c6]
    X86_AT(c, 0xd7e43u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05C6u))); push32(c, v); }
    // 0d7e49  push 0xab7c
    X86_AT(c, 0xd7e49u);
    { uint32_t v = 0xAB7Cu; push32(c, v); }
    // 0d7e4e  push esi
    X86_AT(c, 0xd7e4eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7e4f  call 0xe779c
    X86_AT(c, 0xd7e4fu);
    push32(c, 0xd7e54u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7e54u);
    X86_TICK(c, 16);
    // 0d7e54  push dword ptr [ebx + 0xb05ca]
    X86_AT(c, 0xd7e54u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05CAu))); push32(c, v); }
    // 0d7e5a  push 0xab90
    X86_AT(c, 0xd7e5au);
    { uint32_t v = 0xAB90u; push32(c, v); }
    // 0d7e5f  push esi
    X86_AT(c, 0xd7e5fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7e60  call 0xe779c
    X86_AT(c, 0xd7e60u);
    push32(c, 0xd7e65u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7e65u);
    X86_TICK(c, 16);
    // 0d7e65  push dword ptr [ebx + 0xb05ce]
    X86_AT(c, 0xd7e65u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05CEu))); push32(c, v); }
    // 0d7e6b  push 0xaba4
    X86_AT(c, 0xd7e6bu);
    { uint32_t v = 0xABA4u; push32(c, v); }
    // 0d7e70  push esi
    X86_AT(c, 0xd7e70u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7e71  call 0xe779c
    X86_AT(c, 0xd7e71u);
    push32(c, 0xd7e76u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7e76u);
    X86_TICK(c, 16);
    // 0d7e76  push dword ptr [ebx + 0xb05d2]
    X86_AT(c, 0xd7e76u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05D2u))); push32(c, v); }
    // 0d7e7c  push 0xabb8
    X86_AT(c, 0xd7e7cu);
    { uint32_t v = 0xABB8u; push32(c, v); }
    // 0d7e81  push esi
    X86_AT(c, 0xd7e81u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7e82  call 0xe779c
    X86_AT(c, 0xd7e82u);
    push32(c, 0xd7e87u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7e87u);
    X86_TICK(c, 18);
    // 0d7e87  add esp, 0x3c
    X86_AT(c, 0xd7e87u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7e8a  push dword ptr [ebx + 0xb05d6]
    X86_AT(c, 0xd7e8au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05D6u))); push32(c, v); }
    // 0d7e90  push 0xabcc
    X86_AT(c, 0xd7e90u);
    { uint32_t v = 0xABCCu; push32(c, v); }
    // 0d7e95  push esi
    X86_AT(c, 0xd7e95u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7e96  call 0xe779c
    X86_AT(c, 0xd7e96u);
    push32(c, 0xd7e9bu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7e9bu);
    X86_TICK(c, 16);
    // 0d7e9b  push dword ptr [ebx + 0xb05da]
    X86_AT(c, 0xd7e9bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05DAu))); push32(c, v); }
    // 0d7ea1  push 0xabe0
    X86_AT(c, 0xd7ea1u);
    { uint32_t v = 0xABE0u; push32(c, v); }
    // 0d7ea6  push esi
    X86_AT(c, 0xd7ea6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7ea7  call 0xe779c
    X86_AT(c, 0xd7ea7u);
    push32(c, 0xd7eacu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7eacu);
    X86_TICK(c, 16);
    // 0d7eac  push dword ptr [ebx + 0xb05de]
    X86_AT(c, 0xd7eacu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05DEu))); push32(c, v); }
    // 0d7eb2  push 0xabf4
    X86_AT(c, 0xd7eb2u);
    { uint32_t v = 0xABF4u; push32(c, v); }
    // 0d7eb7  push esi
    X86_AT(c, 0xd7eb7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7eb8  call 0xe779c
    X86_AT(c, 0xd7eb8u);
    push32(c, 0xd7ebdu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7ebdu);
    X86_TICK(c, 16);
    // 0d7ebd  push dword ptr [ebx + 0xb05e2]
    X86_AT(c, 0xd7ebdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05E2u))); push32(c, v); }
    // 0d7ec3  push 0xac08
    X86_AT(c, 0xd7ec3u);
    { uint32_t v = 0xAC08u; push32(c, v); }
    // 0d7ec8  push esi
    X86_AT(c, 0xd7ec8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7ec9  call 0xe779c
    X86_AT(c, 0xd7ec9u);
    push32(c, 0xd7eceu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7eceu);
    X86_TICK(c, 16);
    // 0d7ece  push dword ptr [ebx + 0xb05e6]
    X86_AT(c, 0xd7eceu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05E6u))); push32(c, v); }
    // 0d7ed4  push 0xac1c
    X86_AT(c, 0xd7ed4u);
    { uint32_t v = 0xAC1Cu; push32(c, v); }
    // 0d7ed9  push esi
    X86_AT(c, 0xd7ed9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7eda  call 0xe779c
    X86_AT(c, 0xd7edau);
    push32(c, 0xd7edfu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7edfu);
    X86_TICK(c, 18);
    // 0d7edf  add esp, 0x3c
    X86_AT(c, 0xd7edfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7ee2  push dword ptr [ebx + 0xb05ea]
    X86_AT(c, 0xd7ee2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05EAu))); push32(c, v); }
    // 0d7ee8  push 0xac30
    X86_AT(c, 0xd7ee8u);
    { uint32_t v = 0xAC30u; push32(c, v); }
    // 0d7eed  push esi
    X86_AT(c, 0xd7eedu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7eee  call 0xe779c
    X86_AT(c, 0xd7eeeu);
    push32(c, 0xd7ef3u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7ef3u);
    X86_TICK(c, 42);
    // 0d7ef3  add esp, 0xc
    X86_AT(c, 0xd7ef3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d7ef6  imul eax, edi, 0x21a
    X86_AT(c, 0xd7ef6u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d7efc  push dword ptr [eax + 0xb05ee]
    X86_AT(c, 0xd7efcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB05EEu))); push32(c, v); }
    // 0d7f02  push 0xac44
    X86_AT(c, 0xd7f02u);
    { uint32_t v = 0xAC44u; push32(c, v); }
    // 0d7f07  push esi
    X86_AT(c, 0xd7f07u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7f08  mov ebx, eax
    X86_AT(c, 0xd7f08u);
    c.r[3] = c.r[0];
    // 0d7f0a  call 0xe779c
    X86_AT(c, 0xd7f0au);
    push32(c, 0xd7f0fu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7f0fu);
    X86_TICK(c, 16);
    // 0d7f0f  push dword ptr [ebx + 0xb05f2]
    X86_AT(c, 0xd7f0fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05F2u))); push32(c, v); }
    // 0d7f15  push 0xac58
    X86_AT(c, 0xd7f15u);
    { uint32_t v = 0xAC58u; push32(c, v); }
    // 0d7f1a  push esi
    X86_AT(c, 0xd7f1au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7f1b  call 0xe779c
    X86_AT(c, 0xd7f1bu);
    push32(c, 0xd7f20u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7f20u);
    X86_TICK(c, 16);
    // 0d7f20  push dword ptr [ebx + 0xb05f6]
    X86_AT(c, 0xd7f20u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05F6u))); push32(c, v); }
    // 0d7f26  push 0xac6c
    X86_AT(c, 0xd7f26u);
    { uint32_t v = 0xAC6Cu; push32(c, v); }
    // 0d7f2b  push esi
    X86_AT(c, 0xd7f2bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7f2c  call 0xe779c
    X86_AT(c, 0xd7f2cu);
    push32(c, 0xd7f31u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7f31u);
    X86_TICK(c, 16);
    // 0d7f31  push dword ptr [ebx + 0xb05fa]
    X86_AT(c, 0xd7f31u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05FAu))); push32(c, v); }
    // 0d7f37  push 0xac80
    X86_AT(c, 0xd7f37u);
    { uint32_t v = 0xAC80u; push32(c, v); }
    // 0d7f3c  push esi
    X86_AT(c, 0xd7f3cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7f3d  call 0xe779c
    X86_AT(c, 0xd7f3du);
    push32(c, 0xd7f42u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7f42u);
    X86_TICK(c, 16);
    // 0d7f42  push dword ptr [ebx + 0xb05fe]
    X86_AT(c, 0xd7f42u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB05FEu))); push32(c, v); }
    // 0d7f48  push 0xac94
    X86_AT(c, 0xd7f48u);
    { uint32_t v = 0xAC94u; push32(c, v); }
    // 0d7f4d  push esi
    X86_AT(c, 0xd7f4du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7f4e  call 0xe779c
    X86_AT(c, 0xd7f4eu);
    push32(c, 0xd7f53u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7f53u);
    X86_TICK(c, 18);
    // 0d7f53  add esp, 0x3c
    X86_AT(c, 0xd7f53u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7f56  push dword ptr [ebx + 0xb0602]
    X86_AT(c, 0xd7f56u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0602u))); push32(c, v); }
    // 0d7f5c  push 0xaca8
    X86_AT(c, 0xd7f5cu);
    { uint32_t v = 0xACA8u; push32(c, v); }
    // 0d7f61  push esi
    X86_AT(c, 0xd7f61u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7f62  call 0xe779c
    X86_AT(c, 0xd7f62u);
    push32(c, 0xd7f67u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7f67u);
    X86_TICK(c, 16);
    // 0d7f67  push dword ptr [ebx + 0xb0606]
    X86_AT(c, 0xd7f67u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0606u))); push32(c, v); }
    // 0d7f6d  push 0xacbc
    X86_AT(c, 0xd7f6du);
    { uint32_t v = 0xACBCu; push32(c, v); }
    // 0d7f72  push esi
    X86_AT(c, 0xd7f72u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7f73  call 0xe779c
    X86_AT(c, 0xd7f73u);
    push32(c, 0xd7f78u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7f78u);
    X86_TICK(c, 16);
    // 0d7f78  push dword ptr [ebx + 0xb060a]
    X86_AT(c, 0xd7f78u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB060Au))); push32(c, v); }
    // 0d7f7e  push 0xacd0
    X86_AT(c, 0xd7f7eu);
    { uint32_t v = 0xACD0u; push32(c, v); }
    // 0d7f83  push esi
    X86_AT(c, 0xd7f83u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7f84  call 0xe779c
    X86_AT(c, 0xd7f84u);
    push32(c, 0xd7f89u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7f89u);
    X86_TICK(c, 16);
    // 0d7f89  push dword ptr [ebx + 0xb060e]
    X86_AT(c, 0xd7f89u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB060Eu))); push32(c, v); }
    // 0d7f8f  push 0xace4
    X86_AT(c, 0xd7f8fu);
    { uint32_t v = 0xACE4u; push32(c, v); }
    // 0d7f94  push esi
    X86_AT(c, 0xd7f94u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7f95  call 0xe779c
    X86_AT(c, 0xd7f95u);
    push32(c, 0xd7f9au); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7f9au);
    X86_TICK(c, 16);
    // 0d7f9a  push dword ptr [ebx + 0xb0612]
    X86_AT(c, 0xd7f9au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0612u))); push32(c, v); }
    // 0d7fa0  push 0xacf8
    X86_AT(c, 0xd7fa0u);
    { uint32_t v = 0xACF8u; push32(c, v); }
    // 0d7fa5  push esi
    X86_AT(c, 0xd7fa5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7fa6  call 0xe779c
    X86_AT(c, 0xd7fa6u);
    push32(c, 0xd7fabu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7fabu);
    X86_TICK(c, 18);
    // 0d7fab  add esp, 0x3c
    X86_AT(c, 0xd7fabu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d7fae  push dword ptr [ebx + 0xb0616]
    X86_AT(c, 0xd7faeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0616u))); push32(c, v); }
    // 0d7fb4  push 0xad0c
    X86_AT(c, 0xd7fb4u);
    { uint32_t v = 0xAD0Cu; push32(c, v); }
    // 0d7fb9  push esi
    X86_AT(c, 0xd7fb9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7fba  call 0xe779c
    X86_AT(c, 0xd7fbau);
    push32(c, 0xd7fbfu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7fbfu);
    X86_TICK(c, 42);
    // 0d7fbf  add esp, 0xc
    X86_AT(c, 0xd7fbfu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d7fc2  imul eax, edi, 0x21a
    X86_AT(c, 0xd7fc2u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d7fc8  push dword ptr [eax + 0xb061a]
    X86_AT(c, 0xd7fc8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB061Au))); push32(c, v); }
    // 0d7fce  push 0xad20
    X86_AT(c, 0xd7fceu);
    { uint32_t v = 0xAD20u; push32(c, v); }
    // 0d7fd3  push esi
    X86_AT(c, 0xd7fd3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7fd4  mov ebx, eax
    X86_AT(c, 0xd7fd4u);
    c.r[3] = c.r[0];
    // 0d7fd6  call 0xe779c
    X86_AT(c, 0xd7fd6u);
    push32(c, 0xd7fdbu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7fdbu);
    X86_TICK(c, 16);
    // 0d7fdb  push dword ptr [ebx + 0xb061e]
    X86_AT(c, 0xd7fdbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB061Eu))); push32(c, v); }
    // 0d7fe1  push 0xad34
    X86_AT(c, 0xd7fe1u);
    { uint32_t v = 0xAD34u; push32(c, v); }
    // 0d7fe6  push esi
    X86_AT(c, 0xd7fe6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7fe7  call 0xe779c
    X86_AT(c, 0xd7fe7u);
    push32(c, 0xd7fecu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7fecu);
    X86_TICK(c, 16);
    // 0d7fec  push dword ptr [ebx + 0xb0622]
    X86_AT(c, 0xd7fecu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0622u))); push32(c, v); }
    // 0d7ff2  push 0xad48
    X86_AT(c, 0xd7ff2u);
    { uint32_t v = 0xAD48u; push32(c, v); }
    // 0d7ff7  push esi
    X86_AT(c, 0xd7ff7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d7ff8  call 0xe779c
    X86_AT(c, 0xd7ff8u);
    push32(c, 0xd7ffdu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd7ffdu);
    X86_TICK(c, 16);
    // 0d7ffd  push dword ptr [ebx + 0xb0626]
    X86_AT(c, 0xd7ffdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0626u))); push32(c, v); }
    // 0d8003  push 0xad5c
    X86_AT(c, 0xd8003u);
    { uint32_t v = 0xAD5Cu; push32(c, v); }
    // 0d8008  push esi
    X86_AT(c, 0xd8008u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8009  call 0xe779c
    X86_AT(c, 0xd8009u);
    push32(c, 0xd800eu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd800eu);
    X86_TICK(c, 16);
    // 0d800e  push dword ptr [ebx + 0xb062a]
    X86_AT(c, 0xd800eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB062Au))); push32(c, v); }
    // 0d8014  push 0xad70
    X86_AT(c, 0xd8014u);
    { uint32_t v = 0xAD70u; push32(c, v); }
    // 0d8019  push esi
    X86_AT(c, 0xd8019u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d801a  call 0xe779c
    X86_AT(c, 0xd801au);
    push32(c, 0xd801fu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd801fu);
    X86_TICK(c, 18);
    // 0d801f  add esp, 0x3c
    X86_AT(c, 0xd801fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d8022  push dword ptr [ebx + 0xb062e]
    X86_AT(c, 0xd8022u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB062Eu))); push32(c, v); }
    // 0d8028  push 0xad84
    X86_AT(c, 0xd8028u);
    { uint32_t v = 0xAD84u; push32(c, v); }
    // 0d802d  push esi
    X86_AT(c, 0xd802du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d802e  call 0xe779c
    X86_AT(c, 0xd802eu);
    push32(c, 0xd8033u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8033u);
    X86_TICK(c, 16);
    // 0d8033  push dword ptr [ebx + 0xb0632]
    X86_AT(c, 0xd8033u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0632u))); push32(c, v); }
    // 0d8039  push 0xad98
    X86_AT(c, 0xd8039u);
    { uint32_t v = 0xAD98u; push32(c, v); }
    // 0d803e  push esi
    X86_AT(c, 0xd803eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d803f  call 0xe779c
    X86_AT(c, 0xd803fu);
    push32(c, 0xd8044u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8044u);
    X86_TICK(c, 16);
    // 0d8044  push dword ptr [ebx + 0xb0636]
    X86_AT(c, 0xd8044u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0636u))); push32(c, v); }
    // 0d804a  push 0xadac
    X86_AT(c, 0xd804au);
    { uint32_t v = 0xADACu; push32(c, v); }
    // 0d804f  push esi
    X86_AT(c, 0xd804fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8050  call 0xe779c
    X86_AT(c, 0xd8050u);
    push32(c, 0xd8055u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8055u);
    X86_TICK(c, 16);
    // 0d8055  push dword ptr [ebx + 0xb063a]
    X86_AT(c, 0xd8055u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB063Au))); push32(c, v); }
    // 0d805b  push 0xadc0
    X86_AT(c, 0xd805bu);
    { uint32_t v = 0xADC0u; push32(c, v); }
    // 0d8060  push esi
    X86_AT(c, 0xd8060u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8061  call 0xe779c
    X86_AT(c, 0xd8061u);
    push32(c, 0xd8066u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8066u);
    X86_TICK(c, 16);
    // 0d8066  push dword ptr [ebx + 0xb063e]
    X86_AT(c, 0xd8066u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB063Eu))); push32(c, v); }
    // 0d806c  push 0xadd4
    X86_AT(c, 0xd806cu);
    { uint32_t v = 0xADD4u; push32(c, v); }
    // 0d8071  push esi
    X86_AT(c, 0xd8071u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8072  call 0xe779c
    X86_AT(c, 0xd8072u);
    push32(c, 0xd8077u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8077u);
    X86_TICK(c, 18);
    // 0d8077  add esp, 0x3c
    X86_AT(c, 0xd8077u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d807a  push dword ptr [ebx + 0xb0642]
    X86_AT(c, 0xd807au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0642u))); push32(c, v); }
    // 0d8080  push 0xade8
    X86_AT(c, 0xd8080u);
    { uint32_t v = 0xADE8u; push32(c, v); }
    // 0d8085  push esi
    X86_AT(c, 0xd8085u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8086  call 0xe779c
    X86_AT(c, 0xd8086u);
    push32(c, 0xd808bu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd808bu);
    X86_TICK(c, 42);
    // 0d808b  add esp, 0xc
    X86_AT(c, 0xd808bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d808e  imul eax, edi, 0x21a
    X86_AT(c, 0xd808eu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8094  push dword ptr [eax + 0xb0646]
    X86_AT(c, 0xd8094u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0646u))); push32(c, v); }
    // 0d809a  push 0xadfc
    X86_AT(c, 0xd809au);
    { uint32_t v = 0xADFCu; push32(c, v); }
    // 0d809f  push esi
    X86_AT(c, 0xd809fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d80a0  mov ebx, eax
    X86_AT(c, 0xd80a0u);
    c.r[3] = c.r[0];
    // 0d80a2  call 0xe779c
    X86_AT(c, 0xd80a2u);
    push32(c, 0xd80a7u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd80a7u);
    X86_TICK(c, 16);
    // 0d80a7  push dword ptr [ebx + 0xb064a]
    X86_AT(c, 0xd80a7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB064Au))); push32(c, v); }
    // 0d80ad  push 0xae10
    X86_AT(c, 0xd80adu);
    { uint32_t v = 0xAE10u; push32(c, v); }
    // 0d80b2  push esi
    X86_AT(c, 0xd80b2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d80b3  call 0xe779c
    X86_AT(c, 0xd80b3u);
    push32(c, 0xd80b8u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd80b8u);
    X86_TICK(c, 16);
    // 0d80b8  push dword ptr [ebx + 0xb064e]
    X86_AT(c, 0xd80b8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB064Eu))); push32(c, v); }
    // 0d80be  push 0xae24
    X86_AT(c, 0xd80beu);
    { uint32_t v = 0xAE24u; push32(c, v); }
    // 0d80c3  push esi
    X86_AT(c, 0xd80c3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d80c4  call 0xe779c
    X86_AT(c, 0xd80c4u);
    push32(c, 0xd80c9u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd80c9u);
    X86_TICK(c, 16);
    // 0d80c9  push dword ptr [ebx + 0xb0652]
    X86_AT(c, 0xd80c9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0652u))); push32(c, v); }
    // 0d80cf  push 0xae38
    X86_AT(c, 0xd80cfu);
    { uint32_t v = 0xAE38u; push32(c, v); }
    // 0d80d4  push esi
    X86_AT(c, 0xd80d4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d80d5  call 0xe779c
    X86_AT(c, 0xd80d5u);
    push32(c, 0xd80dau); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd80dau);
    X86_TICK(c, 16);
    // 0d80da  push dword ptr [ebx + 0xb0656]
    X86_AT(c, 0xd80dau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0656u))); push32(c, v); }
    // 0d80e0  push 0xae4c
    X86_AT(c, 0xd80e0u);
    { uint32_t v = 0xAE4Cu; push32(c, v); }
    // 0d80e5  push esi
    X86_AT(c, 0xd80e5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d80e6  call 0xe779c
    X86_AT(c, 0xd80e6u);
    push32(c, 0xd80ebu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd80ebu);
    X86_TICK(c, 18);
    // 0d80eb  add esp, 0x3c
    X86_AT(c, 0xd80ebu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d80ee  push dword ptr [ebx + 0xb065a]
    X86_AT(c, 0xd80eeu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB065Au))); push32(c, v); }
    // 0d80f4  push 0xae60
    X86_AT(c, 0xd80f4u);
    { uint32_t v = 0xAE60u; push32(c, v); }
    // 0d80f9  push esi
    X86_AT(c, 0xd80f9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d80fa  call 0xe779c
    X86_AT(c, 0xd80fau);
    push32(c, 0xd80ffu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd80ffu);
    X86_TICK(c, 16);
    // 0d80ff  push dword ptr [ebx + 0xb065e]
    X86_AT(c, 0xd80ffu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB065Eu))); push32(c, v); }
    // 0d8105  push 0xae74
    X86_AT(c, 0xd8105u);
    { uint32_t v = 0xAE74u; push32(c, v); }
    // 0d810a  push esi
    X86_AT(c, 0xd810au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d810b  call 0xe779c
    X86_AT(c, 0xd810bu);
    push32(c, 0xd8110u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8110u);
    X86_TICK(c, 16);
    // 0d8110  push dword ptr [ebx + 0xb0662]
    X86_AT(c, 0xd8110u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0662u))); push32(c, v); }
    // 0d8116  push 0xae88
    X86_AT(c, 0xd8116u);
    { uint32_t v = 0xAE88u; push32(c, v); }
    // 0d811b  push esi
    X86_AT(c, 0xd811bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d811c  call 0xe779c
    X86_AT(c, 0xd811cu);
    push32(c, 0xd8121u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8121u);
    X86_TICK(c, 16);
    // 0d8121  push dword ptr [ebx + 0xb0666]
    X86_AT(c, 0xd8121u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0666u))); push32(c, v); }
    // 0d8127  push 0xae9c
    X86_AT(c, 0xd8127u);
    { uint32_t v = 0xAE9Cu; push32(c, v); }
    // 0d812c  push esi
    X86_AT(c, 0xd812cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d812d  call 0xe779c
    X86_AT(c, 0xd812du);
    push32(c, 0xd8132u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8132u);
    X86_TICK(c, 16);
    // 0d8132  push dword ptr [ebx + 0xb066a]
    X86_AT(c, 0xd8132u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB066Au))); push32(c, v); }
    // 0d8138  push 0xaeb0
    X86_AT(c, 0xd8138u);
    { uint32_t v = 0xAEB0u; push32(c, v); }
    // 0d813d  push esi
    X86_AT(c, 0xd813du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d813e  call 0xe779c
    X86_AT(c, 0xd813eu);
    push32(c, 0xd8143u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8143u);
    X86_TICK(c, 18);
    // 0d8143  add esp, 0x3c
    X86_AT(c, 0xd8143u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d8146  push dword ptr [ebx + 0xb066e]
    X86_AT(c, 0xd8146u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB066Eu))); push32(c, v); }
    // 0d814c  push 0xaec4
    X86_AT(c, 0xd814cu);
    { uint32_t v = 0xAEC4u; push32(c, v); }
    // 0d8151  push esi
    X86_AT(c, 0xd8151u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8152  call 0xe779c
    X86_AT(c, 0xd8152u);
    push32(c, 0xd8157u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8157u);
    X86_TICK(c, 42);
    // 0d8157  add esp, 0xc
    X86_AT(c, 0xd8157u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d815a  imul eax, edi, 0x21a
    X86_AT(c, 0xd815au);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8160  push dword ptr [eax + 0xb0672]
    X86_AT(c, 0xd8160u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0672u))); push32(c, v); }
    // 0d8166  push 0xaed8
    X86_AT(c, 0xd8166u);
    { uint32_t v = 0xAED8u; push32(c, v); }
    // 0d816b  push esi
    X86_AT(c, 0xd816bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d816c  mov ebx, eax
    X86_AT(c, 0xd816cu);
    c.r[3] = c.r[0];
    // 0d816e  call 0xe779c
    X86_AT(c, 0xd816eu);
    push32(c, 0xd8173u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8173u);
    X86_TICK(c, 16);
    // 0d8173  push dword ptr [ebx + 0xb0676]
    X86_AT(c, 0xd8173u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0676u))); push32(c, v); }
    // 0d8179  push 0xaeec
    X86_AT(c, 0xd8179u);
    { uint32_t v = 0xAEECu; push32(c, v); }
    // 0d817e  push esi
    X86_AT(c, 0xd817eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d817f  call 0xe779c
    X86_AT(c, 0xd817fu);
    push32(c, 0xd8184u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8184u);
    X86_TICK(c, 16);
    // 0d8184  push dword ptr [ebx + 0xb067a]
    X86_AT(c, 0xd8184u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB067Au))); push32(c, v); }
    // 0d818a  push 0xaf00
    X86_AT(c, 0xd818au);
    { uint32_t v = 0xAF00u; push32(c, v); }
    // 0d818f  push esi
    X86_AT(c, 0xd818fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8190  call 0xe779c
    X86_AT(c, 0xd8190u);
    push32(c, 0xd8195u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8195u);
    X86_TICK(c, 16);
    // 0d8195  push dword ptr [ebx + 0xb067e]
    X86_AT(c, 0xd8195u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB067Eu))); push32(c, v); }
    // 0d819b  push 0xaf14
    X86_AT(c, 0xd819bu);
    { uint32_t v = 0xAF14u; push32(c, v); }
    // 0d81a0  push esi
    X86_AT(c, 0xd81a0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d81a1  call 0xe779c
    X86_AT(c, 0xd81a1u);
    push32(c, 0xd81a6u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd81a6u);
    X86_TICK(c, 16);
    // 0d81a6  push dword ptr [ebx + 0xb0682]
    X86_AT(c, 0xd81a6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0682u))); push32(c, v); }
    // 0d81ac  push 0xaf28
    X86_AT(c, 0xd81acu);
    { uint32_t v = 0xAF28u; push32(c, v); }
    // 0d81b1  push esi
    X86_AT(c, 0xd81b1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d81b2  call 0xe779c
    X86_AT(c, 0xd81b2u);
    push32(c, 0xd81b7u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd81b7u);
    X86_TICK(c, 18);
    // 0d81b7  add esp, 0x3c
    X86_AT(c, 0xd81b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d81ba  push dword ptr [ebx + 0xb0686]
    X86_AT(c, 0xd81bau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0686u))); push32(c, v); }
    // 0d81c0  push 0xaf3c
    X86_AT(c, 0xd81c0u);
    { uint32_t v = 0xAF3Cu; push32(c, v); }
    // 0d81c5  push esi
    X86_AT(c, 0xd81c5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d81c6  call 0xe779c
    X86_AT(c, 0xd81c6u);
    push32(c, 0xd81cbu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd81cbu);
    X86_TICK(c, 16);
    // 0d81cb  push dword ptr [ebx + 0xb068a]
    X86_AT(c, 0xd81cbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB068Au))); push32(c, v); }
    // 0d81d1  push 0xaf50
    X86_AT(c, 0xd81d1u);
    { uint32_t v = 0xAF50u; push32(c, v); }
    // 0d81d6  push esi
    X86_AT(c, 0xd81d6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d81d7  call 0xe779c
    X86_AT(c, 0xd81d7u);
    push32(c, 0xd81dcu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd81dcu);
    X86_TICK(c, 16);
    // 0d81dc  push dword ptr [ebx + 0xb068e]
    X86_AT(c, 0xd81dcu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB068Eu))); push32(c, v); }
    // 0d81e2  push 0xaf64
    X86_AT(c, 0xd81e2u);
    { uint32_t v = 0xAF64u; push32(c, v); }
    // 0d81e7  push esi
    X86_AT(c, 0xd81e7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d81e8  call 0xe779c
    X86_AT(c, 0xd81e8u);
    push32(c, 0xd81edu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd81edu);
    X86_TICK(c, 16);
    // 0d81ed  push dword ptr [ebx + 0xb0692]
    X86_AT(c, 0xd81edu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0692u))); push32(c, v); }
    // 0d81f3  push 0xaf78
    X86_AT(c, 0xd81f3u);
    { uint32_t v = 0xAF78u; push32(c, v); }
    // 0d81f8  push esi
    X86_AT(c, 0xd81f8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d81f9  call 0xe779c
    X86_AT(c, 0xd81f9u);
    push32(c, 0xd81feu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd81feu);
    X86_TICK(c, 16);
    // 0d81fe  push dword ptr [ebx + 0xb0696]
    X86_AT(c, 0xd81feu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0696u))); push32(c, v); }
    // 0d8204  push 0xaf8c
    X86_AT(c, 0xd8204u);
    { uint32_t v = 0xAF8Cu; push32(c, v); }
    // 0d8209  push esi
    X86_AT(c, 0xd8209u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d820a  call 0xe779c
    X86_AT(c, 0xd820au);
    push32(c, 0xd820fu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd820fu);
    X86_TICK(c, 18);
    // 0d820f  add esp, 0x3c
    X86_AT(c, 0xd820fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d8212  push dword ptr [ebx + 0xb069a]
    X86_AT(c, 0xd8212u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB069Au))); push32(c, v); }
    // 0d8218  push 0xafa0
    X86_AT(c, 0xd8218u);
    { uint32_t v = 0xAFA0u; push32(c, v); }
    // 0d821d  push esi
    X86_AT(c, 0xd821du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d821e  call 0xe779c
    X86_AT(c, 0xd821eu);
    push32(c, 0xd8223u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8223u);
    X86_TICK(c, 42);
    // 0d8223  add esp, 0xc
    X86_AT(c, 0xd8223u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d8226  imul eax, edi, 0x21a
    X86_AT(c, 0xd8226u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d822c  push dword ptr [eax + 0xb069e]
    X86_AT(c, 0xd822cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB069Eu))); push32(c, v); }
    // 0d8232  push 0xafb4
    X86_AT(c, 0xd8232u);
    { uint32_t v = 0xAFB4u; push32(c, v); }
    // 0d8237  push esi
    X86_AT(c, 0xd8237u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8238  mov ebx, eax
    X86_AT(c, 0xd8238u);
    c.r[3] = c.r[0];
    // 0d823a  call 0xe779c
    X86_AT(c, 0xd823au);
    push32(c, 0xd823fu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd823fu);
    X86_TICK(c, 16);
    // 0d823f  push dword ptr [ebx + 0xb06a2]
    X86_AT(c, 0xd823fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06A2u))); push32(c, v); }
    // 0d8245  push 0xafc8
    X86_AT(c, 0xd8245u);
    { uint32_t v = 0xAFC8u; push32(c, v); }
    // 0d824a  push esi
    X86_AT(c, 0xd824au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d824b  call 0xe779c
    X86_AT(c, 0xd824bu);
    push32(c, 0xd8250u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8250u);
    X86_TICK(c, 16);
    // 0d8250  push dword ptr [ebx + 0xb06a6]
    X86_AT(c, 0xd8250u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06A6u))); push32(c, v); }
    // 0d8256  push 0xafdc
    X86_AT(c, 0xd8256u);
    { uint32_t v = 0xAFDCu; push32(c, v); }
    // 0d825b  push esi
    X86_AT(c, 0xd825bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d825c  call 0xe779c
    X86_AT(c, 0xd825cu);
    push32(c, 0xd8261u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8261u);
    X86_TICK(c, 16);
    // 0d8261  push dword ptr [ebx + 0xb06aa]
    X86_AT(c, 0xd8261u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06AAu))); push32(c, v); }
    // 0d8267  push 0xaff0
    X86_AT(c, 0xd8267u);
    { uint32_t v = 0xAFF0u; push32(c, v); }
    // 0d826c  push esi
    X86_AT(c, 0xd826cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d826d  call 0xe779c
    X86_AT(c, 0xd826du);
    push32(c, 0xd8272u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8272u);
    X86_TICK(c, 16);
    // 0d8272  push dword ptr [ebx + 0xb06ae]
    X86_AT(c, 0xd8272u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06AEu))); push32(c, v); }
    // 0d8278  push 0xb004
    X86_AT(c, 0xd8278u);
    { uint32_t v = 0xB004u; push32(c, v); }
    // 0d827d  push esi
    X86_AT(c, 0xd827du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d827e  call 0xe779c
    X86_AT(c, 0xd827eu);
    push32(c, 0xd8283u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8283u);
    X86_TICK(c, 18);
    // 0d8283  add esp, 0x3c
    X86_AT(c, 0xd8283u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d8286  push dword ptr [ebx + 0xb06b2]
    X86_AT(c, 0xd8286u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06B2u))); push32(c, v); }
    // 0d828c  push 0xb018
    X86_AT(c, 0xd828cu);
    { uint32_t v = 0xB018u; push32(c, v); }
    // 0d8291  push esi
    X86_AT(c, 0xd8291u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8292  call 0xe779c
    X86_AT(c, 0xd8292u);
    push32(c, 0xd8297u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8297u);
    X86_TICK(c, 16);
    // 0d8297  push dword ptr [ebx + 0xb06b6]
    X86_AT(c, 0xd8297u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06B6u))); push32(c, v); }
    // 0d829d  push 0xb02c
    X86_AT(c, 0xd829du);
    { uint32_t v = 0xB02Cu; push32(c, v); }
    // 0d82a2  push esi
    X86_AT(c, 0xd82a2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d82a3  call 0xe779c
    X86_AT(c, 0xd82a3u);
    push32(c, 0xd82a8u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd82a8u);
    X86_TICK(c, 16);
    // 0d82a8  push dword ptr [ebx + 0xb06ba]
    X86_AT(c, 0xd82a8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06BAu))); push32(c, v); }
    // 0d82ae  push 0xb040
    X86_AT(c, 0xd82aeu);
    { uint32_t v = 0xB040u; push32(c, v); }
    // 0d82b3  push esi
    X86_AT(c, 0xd82b3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d82b4  call 0xe779c
    X86_AT(c, 0xd82b4u);
    push32(c, 0xd82b9u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd82b9u);
    X86_TICK(c, 16);
    // 0d82b9  push dword ptr [ebx + 0xb06be]
    X86_AT(c, 0xd82b9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06BEu))); push32(c, v); }
    // 0d82bf  push 0xb054
    X86_AT(c, 0xd82bfu);
    { uint32_t v = 0xB054u; push32(c, v); }
    // 0d82c4  push esi
    X86_AT(c, 0xd82c4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d82c5  call 0xe779c
    X86_AT(c, 0xd82c5u);
    push32(c, 0xd82cau); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd82cau);
    X86_TICK(c, 16);
    // 0d82ca  push dword ptr [ebx + 0xb06c2]
    X86_AT(c, 0xd82cau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06C2u))); push32(c, v); }
    // 0d82d0  push 0xb068
    X86_AT(c, 0xd82d0u);
    { uint32_t v = 0xB068u; push32(c, v); }
    // 0d82d5  push esi
    X86_AT(c, 0xd82d5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d82d6  call 0xe779c
    X86_AT(c, 0xd82d6u);
    push32(c, 0xd82dbu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd82dbu);
    X86_TICK(c, 18);
    // 0d82db  add esp, 0x3c
    X86_AT(c, 0xd82dbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d82de  push dword ptr [ebx + 0xb06c6]
    X86_AT(c, 0xd82deu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06C6u))); push32(c, v); }
    // 0d82e4  push 0xb07c
    X86_AT(c, 0xd82e4u);
    { uint32_t v = 0xB07Cu; push32(c, v); }
    // 0d82e9  push esi
    X86_AT(c, 0xd82e9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d82ea  call 0xe779c
    X86_AT(c, 0xd82eau);
    push32(c, 0xd82efu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd82efu);
    X86_TICK(c, 42);
    // 0d82ef  add esp, 0xc
    X86_AT(c, 0xd82efu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d82f2  imul eax, edi, 0x21a
    X86_AT(c, 0xd82f2u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d82f8  push dword ptr [eax + 0xb06ca]
    X86_AT(c, 0xd82f8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB06CAu))); push32(c, v); }
    // 0d82fe  push 0xb090
    X86_AT(c, 0xd82feu);
    { uint32_t v = 0xB090u; push32(c, v); }
    // 0d8303  push esi
    X86_AT(c, 0xd8303u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8304  mov ebx, eax
    X86_AT(c, 0xd8304u);
    c.r[3] = c.r[0];
    // 0d8306  call 0xe779c
    X86_AT(c, 0xd8306u);
    push32(c, 0xd830bu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd830bu);
    X86_TICK(c, 16);
    // 0d830b  push dword ptr [ebx + 0xb06ce]
    X86_AT(c, 0xd830bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06CEu))); push32(c, v); }
    // 0d8311  push 0xb0a4
    X86_AT(c, 0xd8311u);
    { uint32_t v = 0xB0A4u; push32(c, v); }
    // 0d8316  push esi
    X86_AT(c, 0xd8316u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8317  call 0xe779c
    X86_AT(c, 0xd8317u);
    push32(c, 0xd831cu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd831cu);
    X86_TICK(c, 16);
    // 0d831c  push dword ptr [ebx + 0xb06d2]
    X86_AT(c, 0xd831cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06D2u))); push32(c, v); }
    // 0d8322  push 0xb0b8
    X86_AT(c, 0xd8322u);
    { uint32_t v = 0xB0B8u; push32(c, v); }
    // 0d8327  push esi
    X86_AT(c, 0xd8327u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8328  call 0xe779c
    X86_AT(c, 0xd8328u);
    push32(c, 0xd832du); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd832du);
    X86_TICK(c, 16);
    // 0d832d  push dword ptr [ebx + 0xb06d6]
    X86_AT(c, 0xd832du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06D6u))); push32(c, v); }
    // 0d8333  push 0xb0cc
    X86_AT(c, 0xd8333u);
    { uint32_t v = 0xB0CCu; push32(c, v); }
    // 0d8338  push esi
    X86_AT(c, 0xd8338u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8339  call 0xe779c
    X86_AT(c, 0xd8339u);
    push32(c, 0xd833eu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd833eu);
    X86_TICK(c, 16);
    // 0d833e  push dword ptr [ebx + 0xb06da]
    X86_AT(c, 0xd833eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06DAu))); push32(c, v); }
    // 0d8344  push 0xb0e0
    X86_AT(c, 0xd8344u);
    { uint32_t v = 0xB0E0u; push32(c, v); }
    // 0d8349  push esi
    X86_AT(c, 0xd8349u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d834a  call 0xe779c
    X86_AT(c, 0xd834au);
    push32(c, 0xd834fu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd834fu);
    X86_TICK(c, 18);
    // 0d834f  add esp, 0x3c
    X86_AT(c, 0xd834fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d8352  push dword ptr [ebx + 0xb06de]
    X86_AT(c, 0xd8352u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06DEu))); push32(c, v); }
    // 0d8358  push 0xb0f4
    X86_AT(c, 0xd8358u);
    { uint32_t v = 0xB0F4u; push32(c, v); }
    // 0d835d  push esi
    X86_AT(c, 0xd835du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d835e  call 0xe779c
    X86_AT(c, 0xd835eu);
    push32(c, 0xd8363u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8363u);
    X86_TICK(c, 16);
    // 0d8363  push dword ptr [ebx + 0xb06e2]
    X86_AT(c, 0xd8363u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06E2u))); push32(c, v); }
    // 0d8369  push 0xb108
    X86_AT(c, 0xd8369u);
    { uint32_t v = 0xB108u; push32(c, v); }
    // 0d836e  push esi
    X86_AT(c, 0xd836eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d836f  call 0xe779c
    X86_AT(c, 0xd836fu);
    push32(c, 0xd8374u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8374u);
    X86_TICK(c, 16);
    // 0d8374  push dword ptr [ebx + 0xb06e6]
    X86_AT(c, 0xd8374u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06E6u))); push32(c, v); }
    // 0d837a  push 0xb11c
    X86_AT(c, 0xd837au);
    { uint32_t v = 0xB11Cu; push32(c, v); }
    // 0d837f  push esi
    X86_AT(c, 0xd837fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8380  call 0xe779c
    X86_AT(c, 0xd8380u);
    push32(c, 0xd8385u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8385u);
    X86_TICK(c, 16);
    // 0d8385  push dword ptr [ebx + 0xb06ea]
    X86_AT(c, 0xd8385u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06EAu))); push32(c, v); }
    // 0d838b  push 0xb130
    X86_AT(c, 0xd838bu);
    { uint32_t v = 0xB130u; push32(c, v); }
    // 0d8390  push esi
    X86_AT(c, 0xd8390u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8391  call 0xe779c
    X86_AT(c, 0xd8391u);
    push32(c, 0xd8396u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8396u);
    X86_TICK(c, 16);
    // 0d8396  push dword ptr [ebx + 0xb06ee]
    X86_AT(c, 0xd8396u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06EEu))); push32(c, v); }
    // 0d839c  push 0xb144
    X86_AT(c, 0xd839cu);
    { uint32_t v = 0xB144u; push32(c, v); }
    // 0d83a1  push esi
    X86_AT(c, 0xd83a1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d83a2  call 0xe779c
    X86_AT(c, 0xd83a2u);
    push32(c, 0xd83a7u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd83a7u);
    X86_TICK(c, 18);
    // 0d83a7  add esp, 0x3c
    X86_AT(c, 0xd83a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d83aa  push dword ptr [ebx + 0xb06f2]
    X86_AT(c, 0xd83aau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06F2u))); push32(c, v); }
    // 0d83b0  push 0xb158
    X86_AT(c, 0xd83b0u);
    { uint32_t v = 0xB158u; push32(c, v); }
    // 0d83b5  push esi
    X86_AT(c, 0xd83b5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d83b6  call 0xe779c
    X86_AT(c, 0xd83b6u);
    push32(c, 0xd83bbu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd83bbu);
    X86_TICK(c, 42);
    // 0d83bb  add esp, 0xc
    X86_AT(c, 0xd83bbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d83be  imul eax, edi, 0x21a
    X86_AT(c, 0xd83beu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d83c4  push dword ptr [eax + 0xb06f6]
    X86_AT(c, 0xd83c4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB06F6u))); push32(c, v); }
    // 0d83ca  push 0xb16c
    X86_AT(c, 0xd83cau);
    { uint32_t v = 0xB16Cu; push32(c, v); }
    // 0d83cf  push esi
    X86_AT(c, 0xd83cfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d83d0  mov ebx, eax
    X86_AT(c, 0xd83d0u);
    c.r[3] = c.r[0];
    // 0d83d2  call 0xe779c
    X86_AT(c, 0xd83d2u);
    push32(c, 0xd83d7u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd83d7u);
    X86_TICK(c, 16);
    // 0d83d7  push dword ptr [ebx + 0xb06fa]
    X86_AT(c, 0xd83d7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06FAu))); push32(c, v); }
    // 0d83dd  push 0xb180
    X86_AT(c, 0xd83ddu);
    { uint32_t v = 0xB180u; push32(c, v); }
    // 0d83e2  push esi
    X86_AT(c, 0xd83e2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d83e3  call 0xe779c
    X86_AT(c, 0xd83e3u);
    push32(c, 0xd83e8u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd83e8u);
    X86_TICK(c, 16);
    // 0d83e8  push dword ptr [ebx + 0xb06fe]
    X86_AT(c, 0xd83e8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB06FEu))); push32(c, v); }
    // 0d83ee  push 0xb194
    X86_AT(c, 0xd83eeu);
    { uint32_t v = 0xB194u; push32(c, v); }
    // 0d83f3  push esi
    X86_AT(c, 0xd83f3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d83f4  call 0xe779c
    X86_AT(c, 0xd83f4u);
    push32(c, 0xd83f9u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd83f9u);
    X86_TICK(c, 16);
    // 0d83f9  push dword ptr [ebx + 0xb0702]
    X86_AT(c, 0xd83f9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0702u))); push32(c, v); }
    // 0d83ff  push 0xb1a8
    X86_AT(c, 0xd83ffu);
    { uint32_t v = 0xB1A8u; push32(c, v); }
    // 0d8404  push esi
    X86_AT(c, 0xd8404u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8405  call 0xe779c
    X86_AT(c, 0xd8405u);
    push32(c, 0xd840au); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd840au);
    X86_TICK(c, 16);
    // 0d840a  push dword ptr [ebx + 0xb0706]
    X86_AT(c, 0xd840au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0706u))); push32(c, v); }
    // 0d8410  push 0xb1bc
    X86_AT(c, 0xd8410u);
    { uint32_t v = 0xB1BCu; push32(c, v); }
    // 0d8415  push esi
    X86_AT(c, 0xd8415u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8416  call 0xe779c
    X86_AT(c, 0xd8416u);
    push32(c, 0xd841bu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd841bu);
    X86_TICK(c, 18);
    // 0d841b  add esp, 0x3c
    X86_AT(c, 0xd841bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d841e  push dword ptr [ebx + 0xb070a]
    X86_AT(c, 0xd841eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB070Au))); push32(c, v); }
    // 0d8424  push 0xb1d0
    X86_AT(c, 0xd8424u);
    { uint32_t v = 0xB1D0u; push32(c, v); }
    // 0d8429  push esi
    X86_AT(c, 0xd8429u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d842a  call 0xe779c
    X86_AT(c, 0xd842au);
    push32(c, 0xd842fu); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd842fu);
    X86_TICK(c, 16);
    // 0d842f  push dword ptr [ebx + 0xb070e]
    X86_AT(c, 0xd842fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB070Eu))); push32(c, v); }
    // 0d8435  push 0xb1e4
    X86_AT(c, 0xd8435u);
    { uint32_t v = 0xB1E4u; push32(c, v); }
    // 0d843a  push esi
    X86_AT(c, 0xd843au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d843b  call 0xe779c
    X86_AT(c, 0xd843bu);
    push32(c, 0xd8440u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8440u);
    X86_TICK(c, 16);
    // 0d8440  push dword ptr [ebx + 0xb0712]
    X86_AT(c, 0xd8440u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0712u))); push32(c, v); }
    // 0d8446  push 0xb1f8
    X86_AT(c, 0xd8446u);
    { uint32_t v = 0xB1F8u; push32(c, v); }
    // 0d844b  push esi
    X86_AT(c, 0xd844bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d844c  call 0xe779c
    X86_AT(c, 0xd844cu);
    push32(c, 0xd8451u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8451u);
    X86_TICK(c, 16);
    // 0d8451  push dword ptr [ebx + 0xb0716]
    X86_AT(c, 0xd8451u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB0716u))); push32(c, v); }
    // 0d8457  push 0xb20c
    X86_AT(c, 0xd8457u);
    { uint32_t v = 0xB20Cu; push32(c, v); }
    // 0d845c  push esi
    X86_AT(c, 0xd845cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d845d  call 0xe779c
    X86_AT(c, 0xd845du);
    push32(c, 0xd8462u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8462u);
    X86_TICK(c, 16);
    // 0d8462  push dword ptr [ebx + 0xb071a]
    X86_AT(c, 0xd8462u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB071Au))); push32(c, v); }
    // 0d8468  push 0xb220
    X86_AT(c, 0xd8468u);
    { uint32_t v = 0xB220u; push32(c, v); }
    // 0d846d  push esi
    X86_AT(c, 0xd846du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d846e  call 0xe779c
    X86_AT(c, 0xd846eu);
    push32(c, 0xd8473u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8473u);
    X86_TICK(c, 18);
    // 0d8473  add esp, 0x3c
    X86_AT(c, 0xd8473u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d8476  push dword ptr [ebx + 0xb071e]
    X86_AT(c, 0xd8476u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xB071Eu))); push32(c, v); }
    // 0d847c  push 0xb234
    X86_AT(c, 0xd847cu);
    { uint32_t v = 0xB234u; push32(c, v); }
    // 0d8481  push esi
    X86_AT(c, 0xd8481u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8482  call 0xe779c
    X86_AT(c, 0xd8482u);
    push32(c, 0xd8487u); x86_call_known(c, 0xe779cu, f_000e779c); X86_RET(c, 0xd8487u);
    X86_TICK(c, 11);
    // 0d8487  inc edi
    X86_AT(c, 0xd8487u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d8488  add esp, 0xc
    X86_AT(c, 0xd8488u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d848b  jmp 0xd7a7b
    X86_AT(c, 0xd848bu);
    X86_POLL(c, 0xd7a7bu); goto L_d7a7b;
L_d8490:
    X86_TICK(c, 9);
    // 0d8490  push esi
    X86_AT(c, 0xd8490u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8491  call 0xe7300
    X86_AT(c, 0xd8491u);
    push32(c, 0xd8496u); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xd8496u);
    X86_TICK(c, 2);
    // 0d8496  add esp, 4
    X86_AT(c, 0xd8496u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d8499:
    X86_TICK(c, 28);
    // 0d8499  pop edi
    X86_AT(c, 0xd8499u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d849a  pop esi
    X86_AT(c, 0xd849au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d849b  pop ebx
    X86_AT(c, 0xd849bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d849c  leave 
    X86_AT(c, 0xd849cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d849d  ret 
    X86_AT(c, 0xd849du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd79c8u, "ran off the end of a function");
}
void f_000d84a0(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0d84a0  push ebp
    X86_AT(c, 0xd84a0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d84a1  mov ebp, esp
    X86_AT(c, 0xd84a1u);
    c.r[5] = c.r[4];
    // 0d84a3  sub esp, 0x24
    X86_AT(c, 0xd84a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x24u, 0, 4); }
    // 0d84a6  push ebx
    X86_AT(c, 0xd84a6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d84a7  push esi
    X86_AT(c, 0xd84a7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d84a8  push 2
    X86_AT(c, 0xd84a8u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d84aa  call 0xc8f54
    X86_AT(c, 0xd84aau);
    push32(c, 0xd84afu); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xd84afu);
    X86_TICK(c, 27);
    // 0d84af  push 0xd
    X86_AT(c, 0xd84afu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d84b1  push 0xf
    X86_AT(c, 0xd84b1u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d84b3  push 0xb
    X86_AT(c, 0xd84b3u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d84b5  push 3
    X86_AT(c, 0xd84b5u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d84b7  push 0x27
    X86_AT(c, 0xd84b7u);
    { uint32_t v = 0x27u; push32(c, v); }
    // 0d84b9  push 0x46
    X86_AT(c, 0xd84b9u);
    { uint32_t v = 0x46u; push32(c, v); }
    // 0d84bb  push 0x146
    X86_AT(c, 0xd84bbu);
    { uint32_t v = 0x146u; push32(c, v); }
    // 0d84c0  push 0x13a
    X86_AT(c, 0xd84c0u);
    { uint32_t v = 0x13Au; push32(c, v); }
    // 0d84c5  push 0x15
    X86_AT(c, 0xd84c5u);
    { uint32_t v = 0x15u; push32(c, v); }
    // 0d84c7  push 1
    X86_AT(c, 0xd84c7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d84c9  call 0xc9fbc
    X86_AT(c, 0xd84c9u);
    push32(c, 0xd84ceu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd84ceu);
    X86_TICK(c, 9);
    // 0d84ce  push 1
    X86_AT(c, 0xd84ceu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d84d0  call 0xca100
    X86_AT(c, 0xd84d0u);
    push32(c, 0xd84d5u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd84d5u);
    X86_TICK(c, 9);
    // 0d84d5  push 1
    X86_AT(c, 0xd84d5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d84d7  call 0xca0a0
    X86_AT(c, 0xd84d7u);
    push32(c, 0xd84dcu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd84dcu);
    X86_TICK(c, 13);
    // 0d84dc  push 0
    X86_AT(c, 0xd84dcu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d84de  push 4
    X86_AT(c, 0xd84deu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d84e0  push 1
    X86_AT(c, 0xd84e0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d84e2  call 0xca9c8
    X86_AT(c, 0xd84e2u);
    push32(c, 0xd84e7u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd84e7u);
    X86_TICK(c, 13);
    // 0d84e7  add esp, 0x40
    X86_AT(c, 0xd84e7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d84ea  push 0xb248
    X86_AT(c, 0xd84eau);
    { uint32_t v = 0xB248u; push32(c, v); }
    // 0d84ef  push 1
    X86_AT(c, 0xd84efu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d84f1  call 0xc8cdc
    X86_AT(c, 0xd84f1u);
    push32(c, 0xd84f6u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd84f6u);
    X86_TICK(c, 25);
    // 0d84f6  push 0xb0e3c
    X86_AT(c, 0xd84f6u);
    { uint32_t v = 0xB0E3Cu; push32(c, v); }
    // 0d84fb  push 1
    X86_AT(c, 0xd84fbu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d84fd  push 2
    X86_AT(c, 0xd84fdu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d84ff  push 1
    X86_AT(c, 0xd84ffu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d8501  push 0x24
    X86_AT(c, 0xd8501u);
    { uint32_t v = 0x24u; push32(c, v); }
    // 0d8503  push 3
    X86_AT(c, 0xd8503u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d8505  push 1
    X86_AT(c, 0xd8505u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d8507  lea esi, [ebp - 0x24]
    X86_AT(c, 0xd8507u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0d850a  push esi
    X86_AT(c, 0xd850au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d850b  call 0xc8750
    X86_AT(c, 0xd850bu);
    push32(c, 0xd8510u); x86_call_known(c, 0xc8750u, f_000c8750); X86_RET(c, 0xd8510u);
    X86_TICK(c, 13);
    // 0d8510  push 0x52
    X86_AT(c, 0xd8510u);
    { uint32_t v = 0x52u; push32(c, v); }
    // 0d8512  push esi
    X86_AT(c, 0xd8512u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8513  push 1
    X86_AT(c, 0xd8513u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d8515  call 0xc8ad0
    X86_AT(c, 0xd8515u);
    push32(c, 0xd851au); x86_call_known(c, 0xc8ad0u, f_000c8ad0); X86_RET(c, 0xd851au);
    X86_TICK(c, 16);
    // 0d851a  xchg ebx, eax
    X86_AT(c, 0xd851au);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d851b  push 0
    X86_AT(c, 0xd851bu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d851d  push 0x12
    X86_AT(c, 0xd851du);
    { uint32_t v = 0x12u; push32(c, v); }
    // 0d851f  push 1
    X86_AT(c, 0xd851fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d8521  call 0xca9c8
    X86_AT(c, 0xd8521u);
    push32(c, 0xd8526u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd8526u);
    X86_TICK(c, 21);
    // 0d8526  add esp, 0x40
    X86_AT(c, 0xd8526u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d8529  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xd8529u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
    // 0d852d  lea eax, [ebp - 1]
    X86_AT(c, 0xd852du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0d8530  push eax
    X86_AT(c, 0xd8530u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8531  push ebx
    X86_AT(c, 0xd8531u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d8532  push 3
    X86_AT(c, 0xd8532u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d8534  push 0xb0fc8
    X86_AT(c, 0xd8534u);
    { uint32_t v = 0xB0FC8u; push32(c, v); }
    // 0d8539  call 0xc8a68
    X86_AT(c, 0xd8539u);
    push32(c, 0xd853eu); x86_call_known(c, 0xc8a68u, f_000c8a68); X86_RET(c, 0xd853eu);
    X86_TICK(c, 11);
    // 0d853e  push eax
    X86_AT(c, 0xd853eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d853f  push 1
    X86_AT(c, 0xd853fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d8541  call 0xca414
    X86_AT(c, 0xd8541u);
    push32(c, 0xd8546u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd8546u);
    X86_TICK(c, 9);
    // 0d8546  push 0x14
    X86_AT(c, 0xd8546u);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0d8548  call 0xd6660
    X86_AT(c, 0xd8548u);
    push32(c, 0xd854du); x86_call_known(c, 0xd6660u, f_000d6660); X86_RET(c, 0xd854du);
    X86_TICK(c, 13);
    // 0d854d  add esp, 0x1c
    X86_AT(c, 0xd854du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d8550  push 0
    X86_AT(c, 0xd8550u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d8552  push 1
    X86_AT(c, 0xd8552u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d8554  call 0xca2d4
    X86_AT(c, 0xd8554u);
    push32(c, 0xd8559u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd8559u);
    X86_TICK(c, 30);
    // 0d8559  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xd8559u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0d855c  add esp, 8
    X86_AT(c, 0xd855cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d855f  pop esi
    X86_AT(c, 0xd855fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d8560  pop ebx
    X86_AT(c, 0xd8560u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d8561  leave 
    X86_AT(c, 0xd8561u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d8562  ret 
    X86_AT(c, 0xd8562u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd84a0u, "ran off the end of a function");
}
void f_000d8564(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0d8564  push edi
    X86_AT(c, 0xd8564u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8565  sub eax, eax
    X86_AT(c, 0xd8565u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d8567  mov dword ptr [0xb134c], eax
    X86_AT(c, 0xd8567u);
    wr32((c.sbase[3] + (uint32_t)(0xB134Cu)), c.r[0]);
    // 0d856c  push eax
    X86_AT(c, 0xd856cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d856d  call 0xd6708
    X86_AT(c, 0xd856du);
    push32(c, 0xd8572u); x86_call_known(c, 0xd6708u, f_000d6708); X86_RET(c, 0xd8572u);
    X86_TICK(c, 9);
    // 0d8572  push 0xb268
    X86_AT(c, 0xd8572u);
    { uint32_t v = 0xB268u; push32(c, v); }
    // 0d8577  call 0xcad60
    X86_AT(c, 0xd8577u);
    push32(c, 0xd857cu); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xd857cu);
    X86_TICK(c, 7);
    // 0d857c  call 0xc4ed4
    X86_AT(c, 0xd857cu);
    push32(c, 0xd8581u); x86_call_known(c, 0xc4ed4u, f_000c4ed4); X86_RET(c, 0xd8581u);
    X86_TICK(c, 7);
    // 0d8581  call 0xcb914
    X86_AT(c, 0xd8581u);
    push32(c, 0xd8586u); x86_call_known(c, 0xcb914u, f_000cb914); X86_RET(c, 0xd8586u);
    X86_TICK(c, 7);
    // 0d8586  call 0xc5af4
    X86_AT(c, 0xd8586u);
    push32(c, 0xd858bu); x86_call_known(c, 0xc5af4u, f_000c5af4); X86_RET(c, 0xd858bu);
    X86_TICK(c, 7);
    // 0d858b  call 0xd6b54
    X86_AT(c, 0xd858bu);
    push32(c, 0xd8590u); x86_call_known(c, 0xd6b54u, f_000d6b54); X86_RET(c, 0xd8590u);
    X86_TICK(c, 7);
    // 0d8590  call 0xd8702
    X86_AT(c, 0xd8590u);
    push32(c, 0xd8595u); x86_call_known(c, 0xd8702u, f_000d8702); X86_RET(c, 0xd8595u);
    X86_TICK(c, 7);
    // 0d8595  call 0xc4ed4
    X86_AT(c, 0xd8595u);
    push32(c, 0xd859au); x86_call_known(c, 0xc4ed4u, f_000c4ed4); X86_RET(c, 0xd859au);
    X86_TICK(c, 9);
    // 0d859a  push 2
    X86_AT(c, 0xd859au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d859c  call 0xca3cc
    X86_AT(c, 0xd859cu);
    push32(c, 0xd85a1u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd85a1u);
    X86_TICK(c, 7);
    // 0d85a1  call 0xd67c4
    X86_AT(c, 0xd85a1u);
    push32(c, 0xd85a6u); x86_call_known(c, 0xd67c4u, f_000d67c4); X86_RET(c, 0xd85a6u);
    X86_TICK(c, 2);
    // 0d85a6  add esp, 0xc
    X86_AT(c, 0xd85a6u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
L_d85a9:
    X86_TICK(c, 9);
    // 0d85a9  push 2
    X86_AT(c, 0xd85a9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d85ab  call 0xca3cc
    X86_AT(c, 0xd85abu);
    push32(c, 0xd85b0u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd85b0u);
    X86_TICK(c, 7);
    // 0d85b0  call 0xd84a0
    X86_AT(c, 0xd85b0u);
    push32(c, 0xd85b5u); x86_call_known(c, 0xd84a0u, f_000d84a0); X86_RET(c, 0xd85b5u);
    X86_TICK(c, 12);
    // 0d85b5  add esp, 4
    X86_AT(c, 0xd85b5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d85b8  movzx edx, al
    X86_AT(c, 0xd85b8u);
    c.r[2] = g8(c, 0);
    // 0d85bb  and edx, edx
    X86_AT(c, 0xd85bbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0d85bd  je 0xd85cb
    X86_AT(c, 0xd85bdu);
    if (x86_cc(c, 4)) { goto L_d85cb; }
    X86_TICK(c, 7);
    // 0d85bf  cmp edx, 1
    X86_AT(c, 0xd85bfu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0d85c2  je 0xd85d9
    X86_AT(c, 0xd85c2u);
    if (x86_cc(c, 4)) { goto L_d85d9; }
    X86_TICK(c, 7);
    // 0d85c4  cmp edx, 2
    X86_AT(c, 0xd85c4u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0d85c7  jne 0xd85a9
    X86_AT(c, 0xd85c7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd85a9u); goto L_d85a9; }
    X86_TICK(c, 7);
    // 0d85c9  jmp 0xd85e7
    X86_AT(c, 0xd85c9u);
    goto L_d85e7;
L_d85cb:
    X86_TICK(c, 7);
    // 0d85cb  call 0xd6790
    X86_AT(c, 0xd85cbu);
    push32(c, 0xd85d0u); x86_call_known(c, 0xd6790u, f_000d6790); X86_RET(c, 0xd85d0u);
    X86_TICK(c, 9);
    // 0d85d0  push 0
    X86_AT(c, 0xd85d0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d85d2  call 0xe7a38
    X86_AT(c, 0xd85d2u);
    push32(c, 0xd85d7u); x86_call_known(c, 0xe7a38u, f_000e7a38); X86_RET(c, 0xd85d7u);
    X86_TICK(c, 7);
    // 0d85d7  jmp 0xd863c
    X86_AT(c, 0xd85d7u);
    goto L_d863c;
L_d85d9:
    X86_TICK(c, 9);
    // 0d85d9  push 6
    X86_AT(c, 0xd85d9u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d85db  call 0xc7588
    X86_AT(c, 0xd85dbu);
    push32(c, 0xd85e0u); x86_call_known(c, 0xc7588u, f_000c7588); X86_RET(c, 0xd85e0u);
    X86_TICK(c, 7);
    // 0d85e0  call 0xda934
    X86_AT(c, 0xd85e0u);
    push32(c, 0xd85e5u); x86_call_known(c, 0xda934u, f_000da934); X86_RET(c, 0xd85e5u);
    X86_TICK(c, 7);
    // 0d85e5  jmp 0xd863c
    X86_AT(c, 0xd85e5u);
    goto L_d863c;
L_d85e7:
    X86_TICK(c, 7);
    // 0d85e7  call 0xd6b54
    X86_AT(c, 0xd85e7u);
    push32(c, 0xd85ecu); x86_call_known(c, 0xd6b54u, f_000d6b54); X86_RET(c, 0xd85ecu);
    X86_TICK(c, 7);
    // 0d85ec  inc eax
    X86_AT(c, 0xd85ecu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d85ed  je 0xd85a9
    X86_AT(c, 0xd85edu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd85a9u); goto L_d85a9; }
    X86_TICK(c, 12);
    // 0d85ef  cmp byte ptr [0xb0508], 0
    X86_AT(c, 0xd85efu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB0508u))), 0x0u, 0, 1);
    // 0d85f6  jne 0xd8644
    X86_AT(c, 0xd85f6u);
    if (x86_cc(c, 5)) { goto L_d8644; }
    X86_TICK(c, 12);
    // 0d85f8  cmp byte ptr [0xb0722], 0
    X86_AT(c, 0xd85f8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB0722u))), 0x0u, 0, 1);
    // 0d85ff  jne 0xd8644
    X86_AT(c, 0xd85ffu);
    if (x86_cc(c, 5)) { goto L_d8644; }
    X86_TICK(c, 12);
    // 0d8601  cmp byte ptr [0xb093c], 0
    X86_AT(c, 0xd8601u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB093Cu))), 0x0u, 0, 1);
    // 0d8608  jne 0xd8644
    X86_AT(c, 0xd8608u);
    if (x86_cc(c, 5)) { goto L_d8644; }
    X86_TICK(c, 12);
    // 0d860a  cmp byte ptr [0xb0b56], 0
    X86_AT(c, 0xd860au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB0B56u))), 0x0u, 0, 1);
    // 0d8611  jne 0xd8644
    X86_AT(c, 0xd8611u);
    if (x86_cc(c, 5)) { goto L_d8644; }
    X86_TICK(c, 9);
    // 0d8613  push 3
    X86_AT(c, 0xd8613u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d8615  call 0xc5ca4
    X86_AT(c, 0xd8615u);
    push32(c, 0xd861au); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd861au);
    X86_TICK(c, 9);
    // 0d861a  push 0xb2d4
    X86_AT(c, 0xd861au);
    { uint32_t v = 0xB2D4u; push32(c, v); }
    // 0d861f  call 0xcad60
    X86_AT(c, 0xd861fu);
    push32(c, 0xd8624u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xd8624u);
    X86_TICK(c, 2);
    // 0d8624  add esp, 8
    X86_AT(c, 0xd8624u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8627:
    X86_TICK(c, 9);
    // 0d8627  push 4
    X86_AT(c, 0xd8627u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8629  call 0xc81e4
    X86_AT(c, 0xd8629u);
    push32(c, 0xd862eu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd862eu);
    X86_TICK(c, 9);
    // 0d862e  add esp, 4
    X86_AT(c, 0xd862eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d8631  and al, al
    X86_AT(c, 0xd8631u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d8633  je 0xd8627
    X86_AT(c, 0xd8633u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8627u); goto L_d8627; }
    X86_TICK(c, 9);
    // 0d8635  push 4
    X86_AT(c, 0xd8635u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8637  call 0xca0a0
    X86_AT(c, 0xd8637u);
    push32(c, 0xd863cu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd863cu);
L_d863c:
    X86_TICK(c, 9);
    // 0d863c  add esp, 4
    X86_AT(c, 0xd863cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d863f  jmp 0xd85a9
    X86_AT(c, 0xd863fu);
    X86_POLL(c, 0xd85a9u); goto L_d85a9;
L_d8644:
    X86_TICK(c, 11);
    // 0d8644  push 0xb340
    X86_AT(c, 0xd8644u);
    { uint32_t v = 0xB340u; push32(c, v); }
    // 0d8649  push 0
    X86_AT(c, 0xd8649u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d864b  call 0xc628c
    X86_AT(c, 0xd864bu);
    push32(c, 0xd8650u); x86_call_known(c, 0xc628cu, f_000c628c); X86_RET(c, 0xd8650u);
    X86_TICK(c, 12);
    // 0d8650  xchg edi, eax
    X86_AT(c, 0xd8650u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d8651  add esp, 8
    X86_AT(c, 0xd8651u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d8654  cmp edi, 0xffffffff
    X86_AT(c, 0xd8654u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d8657  je 0xd8662
    X86_AT(c, 0xd8657u);
    if (x86_cc(c, 4)) { goto L_d8662; }
    X86_TICK(c, 7);
    // 0d8659  and edi, edi
    X86_AT(c, 0xd8659u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d865b  je 0xd8662
    X86_AT(c, 0xd865bu);
    if (x86_cc(c, 4)) { goto L_d8662; }
    X86_TICK(c, 7);
    // 0d865d  cmp edi, 1
    X86_AT(c, 0xd865du);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0d8660  jne 0xd8644
    X86_AT(c, 0xd8660u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8644u); goto L_d8644; }
L_d8662:
    X86_TICK(c, 7);
    // 0d8662  and edi, edi
    X86_AT(c, 0xd8662u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d8664  jne 0xd85a9
    X86_AT(c, 0xd8664u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd85a9u); goto L_d85a9; }
    X86_TICK(c, 7);
    // 0d866a  call 0xd6b54
    X86_AT(c, 0xd866au);
    push32(c, 0xd866fu); x86_call_known(c, 0xd6b54u, f_000d6b54); X86_RET(c, 0xd866fu);
    X86_TICK(c, 7);
    // 0d866f  call 0xdab10
    X86_AT(c, 0xd866fu);
    push32(c, 0xd8674u); x86_call_known(c, 0xdab10u, f_000dab10); X86_RET(c, 0xd8674u);
    X86_TICK(c, 10);
    // 0d8674  xchg edi, eax
    X86_AT(c, 0xd8674u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d8675  cmp edi, 0xffffffff
    X86_AT(c, 0xd8675u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d8678  je 0xd85a9
    X86_AT(c, 0xd8678u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd85a9u); goto L_d85a9; }
    X86_TICK(c, 35);
    // 0d867e  push 0xb02ec
    X86_AT(c, 0xd867eu);
    { uint32_t v = 0xB02ECu; push32(c, v); }
    // 0d8683  imul eax, edi, 0x21a
    X86_AT(c, 0xd8683u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8689  add eax, 0xb0508
    X86_AT(c, 0xd8689u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xB0508u, 0, 4); }
    // 0d868e  push eax
    X86_AT(c, 0xd868eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d868f  call 0xd87bc
    X86_AT(c, 0xd868fu);
    push32(c, 0xd8694u); x86_call_known(c, 0xd87bcu, f_000d87bc); X86_RET(c, 0xd8694u);
    X86_TICK(c, 13);
    // 0d8694  mov eax, dword ptr [0xb0502]
    X86_AT(c, 0xd8694u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0502u)));
    // 0d8699  mov dword ptr [0xb0e38], eax
    X86_AT(c, 0xd8699u);
    wr32((c.sbase[3] + (uint32_t)(0xB0E38u)), c.r[0]);
    // 0d869e  call 0xd4e7c
    X86_AT(c, 0xd869eu);
    push32(c, 0xd86a3u); x86_call_known(c, 0xd4e7cu, f_000d4e7c); X86_RET(c, 0xd86a3u);
    X86_TICK(c, 7);
    // 0d86a3  call 0xc56dc
    X86_AT(c, 0xd86a3u);
    push32(c, 0xd86a8u); x86_call_known(c, 0xc56dcu, f_000c56dc); X86_RET(c, 0xd86a8u);
    X86_TICK(c, 7);
    // 0d86a8  call 0xcbd48
    X86_AT(c, 0xd86a8u);
    push32(c, 0xd86adu); x86_call_known(c, 0xcbd48u, f_000cbd48); X86_RET(c, 0xd86adu);
    X86_TICK(c, 11);
    // 0d86ad  push 0xd
    X86_AT(c, 0xd86adu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d86af  push 3
    X86_AT(c, 0xd86afu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d86b1  call 0xca2d4
    X86_AT(c, 0xd86b1u);
    push32(c, 0xd86b6u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd86b6u);
    X86_TICK(c, 11);
    // 0d86b6  push 0xd
    X86_AT(c, 0xd86b6u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d86b8  push 0xa
    X86_AT(c, 0xd86b8u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d86ba  call 0xca2d4
    X86_AT(c, 0xd86bau);
    push32(c, 0xd86bfu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd86bfu);
    X86_TICK(c, 11);
    // 0d86bf  push 0xd
    X86_AT(c, 0xd86bfu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d86c1  push 0xb
    X86_AT(c, 0xd86c1u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d86c3  call 0xca2d4
    X86_AT(c, 0xd86c3u);
    push32(c, 0xd86c8u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd86c8u);
    X86_TICK(c, 11);
    // 0d86c8  push 0xd
    X86_AT(c, 0xd86c8u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d86ca  push 7
    X86_AT(c, 0xd86cau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d86cc  call 0xca2d4
    X86_AT(c, 0xd86ccu);
    push32(c, 0xd86d1u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd86d1u);
    X86_TICK(c, 9);
    // 0d86d1  push 3
    X86_AT(c, 0xd86d1u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d86d3  call 0xc8f54
    X86_AT(c, 0xd86d3u);
    push32(c, 0xd86d8u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xd86d8u);
    X86_TICK(c, 9);
    // 0d86d8  push 0
    X86_AT(c, 0xd86d8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d86da  call 0xd66ec
    X86_AT(c, 0xd86dau);
    push32(c, 0xd86dfu); x86_call_known(c, 0xd66ecu, f_000d66ec); X86_RET(c, 0xd86dfu);
    X86_TICK(c, 9);
    // 0d86df  push 2
    X86_AT(c, 0xd86dfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d86e1  call 0xc8f54
    X86_AT(c, 0xd86e1u);
    push32(c, 0xd86e6u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xd86e6u);
    X86_TICK(c, 7);
    // 0d86e6  call 0xc4ed4
    X86_AT(c, 0xd86e6u);
    push32(c, 0xd86ebu); x86_call_known(c, 0xc4ed4u, f_000c4ed4); X86_RET(c, 0xd86ebu);
    X86_TICK(c, 9);
    // 0d86eb  mov dword ptr [0xb1344], 0xffffffff
    X86_AT(c, 0xd86ebu);
    wr32((c.sbase[3] + (uint32_t)(0xB1344u)), 0xFFFFFFFFu);
    // 0d86f5  call 0xd67c4
    X86_AT(c, 0xd86f5u);
    push32(c, 0xd86fau); x86_call_known(c, 0xd67c4u, f_000d67c4); X86_RET(c, 0xd86fau);
    X86_TICK(c, 9);
    // 0d86fa  add esp, 0x34
    X86_AT(c, 0xd86fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0d86fd  jmp 0xd85a9
    X86_AT(c, 0xd86fdu);
    X86_POLL(c, 0xd85a9u); goto L_d85a9;
    x86_fault(c, 0xd8564u, "ran off the end of a function");
}
void f_000d85a9(X86Cpu& c) {
L_d85a9:
    X86_TICK(c, 9);
    // 0d85a9  push 2
    X86_AT(c, 0xd85a9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d85ab  call 0xca3cc
    X86_AT(c, 0xd85abu);
    push32(c, 0xd85b0u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd85b0u);
    X86_TICK(c, 7);
    // 0d85b0  call 0xd84a0
    X86_AT(c, 0xd85b0u);
    push32(c, 0xd85b5u); x86_call_known(c, 0xd84a0u, f_000d84a0); X86_RET(c, 0xd85b5u);
    X86_TICK(c, 12);
    // 0d85b5  add esp, 4
    X86_AT(c, 0xd85b5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d85b8  movzx edx, al
    X86_AT(c, 0xd85b8u);
    c.r[2] = g8(c, 0);
    // 0d85bb  and edx, edx
    X86_AT(c, 0xd85bbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0d85bd  je 0xd85cb
    X86_AT(c, 0xd85bdu);
    if (x86_cc(c, 4)) { goto L_d85cb; }
    X86_TICK(c, 7);
    // 0d85bf  cmp edx, 1
    X86_AT(c, 0xd85bfu);
    (void)x86_sub(c, c.r[2], 0x1u, 0, 4);
    // 0d85c2  je 0xd85d9
    X86_AT(c, 0xd85c2u);
    if (x86_cc(c, 4)) { goto L_d85d9; }
    X86_TICK(c, 7);
    // 0d85c4  cmp edx, 2
    X86_AT(c, 0xd85c4u);
    (void)x86_sub(c, c.r[2], 0x2u, 0, 4);
    // 0d85c7  jne 0xd85a9
    X86_AT(c, 0xd85c7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd85a9u); goto L_d85a9; }
    X86_TICK(c, 7);
    // 0d85c9  jmp 0xd85e7
    X86_AT(c, 0xd85c9u);
    goto L_d85e7;
L_d85cb:
    X86_TICK(c, 7);
    // 0d85cb  call 0xd6790
    X86_AT(c, 0xd85cbu);
    push32(c, 0xd85d0u); x86_call_known(c, 0xd6790u, f_000d6790); X86_RET(c, 0xd85d0u);
    X86_TICK(c, 9);
    // 0d85d0  push 0
    X86_AT(c, 0xd85d0u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d85d2  call 0xe7a38
    X86_AT(c, 0xd85d2u);
    push32(c, 0xd85d7u); x86_call_known(c, 0xe7a38u, f_000e7a38); X86_RET(c, 0xd85d7u);
    X86_TICK(c, 7);
    // 0d85d7  jmp 0xd863c
    X86_AT(c, 0xd85d7u);
    goto L_d863c;
L_d85d9:
    X86_TICK(c, 9);
    // 0d85d9  push 6
    X86_AT(c, 0xd85d9u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d85db  call 0xc7588
    X86_AT(c, 0xd85dbu);
    push32(c, 0xd85e0u); x86_call_known(c, 0xc7588u, f_000c7588); X86_RET(c, 0xd85e0u);
    X86_TICK(c, 7);
    // 0d85e0  call 0xda934
    X86_AT(c, 0xd85e0u);
    push32(c, 0xd85e5u); x86_call_known(c, 0xda934u, f_000da934); X86_RET(c, 0xd85e5u);
    X86_TICK(c, 7);
    // 0d85e5  jmp 0xd863c
    X86_AT(c, 0xd85e5u);
    goto L_d863c;
L_d85e7:
    X86_TICK(c, 7);
    // 0d85e7  call 0xd6b54
    X86_AT(c, 0xd85e7u);
    push32(c, 0xd85ecu); x86_call_known(c, 0xd6b54u, f_000d6b54); X86_RET(c, 0xd85ecu);
    X86_TICK(c, 7);
    // 0d85ec  inc eax
    X86_AT(c, 0xd85ecu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0d85ed  je 0xd85a9
    X86_AT(c, 0xd85edu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd85a9u); goto L_d85a9; }
    X86_TICK(c, 12);
    // 0d85ef  cmp byte ptr [0xb0508], 0
    X86_AT(c, 0xd85efu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB0508u))), 0x0u, 0, 1);
    // 0d85f6  jne 0xd8644
    X86_AT(c, 0xd85f6u);
    if (x86_cc(c, 5)) { goto L_d8644; }
    X86_TICK(c, 12);
    // 0d85f8  cmp byte ptr [0xb0722], 0
    X86_AT(c, 0xd85f8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB0722u))), 0x0u, 0, 1);
    // 0d85ff  jne 0xd8644
    X86_AT(c, 0xd85ffu);
    if (x86_cc(c, 5)) { goto L_d8644; }
    X86_TICK(c, 12);
    // 0d8601  cmp byte ptr [0xb093c], 0
    X86_AT(c, 0xd8601u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB093Cu))), 0x0u, 0, 1);
    // 0d8608  jne 0xd8644
    X86_AT(c, 0xd8608u);
    if (x86_cc(c, 5)) { goto L_d8644; }
    X86_TICK(c, 12);
    // 0d860a  cmp byte ptr [0xb0b56], 0
    X86_AT(c, 0xd860au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xB0B56u))), 0x0u, 0, 1);
    // 0d8611  jne 0xd8644
    X86_AT(c, 0xd8611u);
    if (x86_cc(c, 5)) { goto L_d8644; }
    X86_TICK(c, 9);
    // 0d8613  push 3
    X86_AT(c, 0xd8613u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d8615  call 0xc5ca4
    X86_AT(c, 0xd8615u);
    push32(c, 0xd861au); x86_call_known(c, 0xc5ca4u, f_000c5ca4); X86_RET(c, 0xd861au);
    X86_TICK(c, 9);
    // 0d861a  push 0xb2d4
    X86_AT(c, 0xd861au);
    { uint32_t v = 0xB2D4u; push32(c, v); }
    // 0d861f  call 0xcad60
    X86_AT(c, 0xd861fu);
    push32(c, 0xd8624u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xd8624u);
    X86_TICK(c, 2);
    // 0d8624  add esp, 8
    X86_AT(c, 0xd8624u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8627:
    X86_TICK(c, 9);
    // 0d8627  push 4
    X86_AT(c, 0xd8627u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8629  call 0xc81e4
    X86_AT(c, 0xd8629u);
    push32(c, 0xd862eu); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd862eu);
    X86_TICK(c, 9);
    // 0d862e  add esp, 4
    X86_AT(c, 0xd862eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d8631  and al, al
    X86_AT(c, 0xd8631u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d8633  je 0xd8627
    X86_AT(c, 0xd8633u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8627u); goto L_d8627; }
    X86_TICK(c, 9);
    // 0d8635  push 4
    X86_AT(c, 0xd8635u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8637  call 0xca0a0
    X86_AT(c, 0xd8637u);
    push32(c, 0xd863cu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd863cu);
L_d863c:
    X86_TICK(c, 9);
    // 0d863c  add esp, 4
    X86_AT(c, 0xd863cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d863f  jmp 0xd85a9
    X86_AT(c, 0xd863fu);
    X86_POLL(c, 0xd85a9u); goto L_d85a9;
L_d8644:
    X86_TICK(c, 11);
    // 0d8644  push 0xb340
    X86_AT(c, 0xd8644u);
    { uint32_t v = 0xB340u; push32(c, v); }
    // 0d8649  push 0
    X86_AT(c, 0xd8649u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d864b  call 0xc628c
    X86_AT(c, 0xd864bu);
    push32(c, 0xd8650u); x86_call_known(c, 0xc628cu, f_000c628c); X86_RET(c, 0xd8650u);
    X86_TICK(c, 12);
    // 0d8650  xchg edi, eax
    X86_AT(c, 0xd8650u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d8651  add esp, 8
    X86_AT(c, 0xd8651u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d8654  cmp edi, 0xffffffff
    X86_AT(c, 0xd8654u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d8657  je 0xd8662
    X86_AT(c, 0xd8657u);
    if (x86_cc(c, 4)) { goto L_d8662; }
    X86_TICK(c, 7);
    // 0d8659  and edi, edi
    X86_AT(c, 0xd8659u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d865b  je 0xd8662
    X86_AT(c, 0xd865bu);
    if (x86_cc(c, 4)) { goto L_d8662; }
    X86_TICK(c, 7);
    // 0d865d  cmp edi, 1
    X86_AT(c, 0xd865du);
    (void)x86_sub(c, c.r[7], 0x1u, 0, 4);
    // 0d8660  jne 0xd8644
    X86_AT(c, 0xd8660u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8644u); goto L_d8644; }
L_d8662:
    X86_TICK(c, 7);
    // 0d8662  and edi, edi
    X86_AT(c, 0xd8662u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0d8664  jne 0xd85a9
    X86_AT(c, 0xd8664u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd85a9u); goto L_d85a9; }
    X86_TICK(c, 7);
    // 0d866a  call 0xd6b54
    X86_AT(c, 0xd866au);
    push32(c, 0xd866fu); x86_call_known(c, 0xd6b54u, f_000d6b54); X86_RET(c, 0xd866fu);
    X86_TICK(c, 7);
    // 0d866f  call 0xdab10
    X86_AT(c, 0xd866fu);
    push32(c, 0xd8674u); x86_call_known(c, 0xdab10u, f_000dab10); X86_RET(c, 0xd8674u);
    X86_TICK(c, 10);
    // 0d8674  xchg edi, eax
    X86_AT(c, 0xd8674u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0d8675  cmp edi, 0xffffffff
    X86_AT(c, 0xd8675u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFFFu, 0, 4);
    // 0d8678  je 0xd85a9
    X86_AT(c, 0xd8678u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd85a9u); goto L_d85a9; }
    X86_TICK(c, 35);
    // 0d867e  push 0xb02ec
    X86_AT(c, 0xd867eu);
    { uint32_t v = 0xB02ECu; push32(c, v); }
    // 0d8683  imul eax, edi, 0x21a
    X86_AT(c, 0xd8683u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8689  add eax, 0xb0508
    X86_AT(c, 0xd8689u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xB0508u, 0, 4); }
    // 0d868e  push eax
    X86_AT(c, 0xd868eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d868f  call 0xd87bc
    X86_AT(c, 0xd868fu);
    push32(c, 0xd8694u); x86_call_known(c, 0xd87bcu, f_000d87bc); X86_RET(c, 0xd8694u);
    X86_TICK(c, 13);
    // 0d8694  mov eax, dword ptr [0xb0502]
    X86_AT(c, 0xd8694u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xB0502u)));
    // 0d8699  mov dword ptr [0xb0e38], eax
    X86_AT(c, 0xd8699u);
    wr32((c.sbase[3] + (uint32_t)(0xB0E38u)), c.r[0]);
    // 0d869e  call 0xd4e7c
    X86_AT(c, 0xd869eu);
    push32(c, 0xd86a3u); x86_call_known(c, 0xd4e7cu, f_000d4e7c); X86_RET(c, 0xd86a3u);
    X86_TICK(c, 7);
    // 0d86a3  call 0xc56dc
    X86_AT(c, 0xd86a3u);
    push32(c, 0xd86a8u); x86_call_known(c, 0xc56dcu, f_000c56dc); X86_RET(c, 0xd86a8u);
    X86_TICK(c, 7);
    // 0d86a8  call 0xcbd48
    X86_AT(c, 0xd86a8u);
    push32(c, 0xd86adu); x86_call_known(c, 0xcbd48u, f_000cbd48); X86_RET(c, 0xd86adu);
    X86_TICK(c, 11);
    // 0d86ad  push 0xd
    X86_AT(c, 0xd86adu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d86af  push 3
    X86_AT(c, 0xd86afu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d86b1  call 0xca2d4
    X86_AT(c, 0xd86b1u);
    push32(c, 0xd86b6u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd86b6u);
    X86_TICK(c, 11);
    // 0d86b6  push 0xd
    X86_AT(c, 0xd86b6u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d86b8  push 0xa
    X86_AT(c, 0xd86b8u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d86ba  call 0xca2d4
    X86_AT(c, 0xd86bau);
    push32(c, 0xd86bfu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd86bfu);
    X86_TICK(c, 11);
    // 0d86bf  push 0xd
    X86_AT(c, 0xd86bfu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d86c1  push 0xb
    X86_AT(c, 0xd86c1u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d86c3  call 0xca2d4
    X86_AT(c, 0xd86c3u);
    push32(c, 0xd86c8u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd86c8u);
    X86_TICK(c, 11);
    // 0d86c8  push 0xd
    X86_AT(c, 0xd86c8u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d86ca  push 7
    X86_AT(c, 0xd86cau);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d86cc  call 0xca2d4
    X86_AT(c, 0xd86ccu);
    push32(c, 0xd86d1u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd86d1u);
    X86_TICK(c, 9);
    // 0d86d1  push 3
    X86_AT(c, 0xd86d1u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d86d3  call 0xc8f54
    X86_AT(c, 0xd86d3u);
    push32(c, 0xd86d8u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xd86d8u);
    X86_TICK(c, 9);
    // 0d86d8  push 0
    X86_AT(c, 0xd86d8u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d86da  call 0xd66ec
    X86_AT(c, 0xd86dau);
    push32(c, 0xd86dfu); x86_call_known(c, 0xd66ecu, f_000d66ec); X86_RET(c, 0xd86dfu);
    X86_TICK(c, 9);
    // 0d86df  push 2
    X86_AT(c, 0xd86dfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d86e1  call 0xc8f54
    X86_AT(c, 0xd86e1u);
    push32(c, 0xd86e6u); x86_call_known(c, 0xc8f54u, f_000c8f54); X86_RET(c, 0xd86e6u);
    X86_TICK(c, 7);
    // 0d86e6  call 0xc4ed4
    X86_AT(c, 0xd86e6u);
    push32(c, 0xd86ebu); x86_call_known(c, 0xc4ed4u, f_000c4ed4); X86_RET(c, 0xd86ebu);
    X86_TICK(c, 9);
    // 0d86eb  mov dword ptr [0xb1344], 0xffffffff
    X86_AT(c, 0xd86ebu);
    wr32((c.sbase[3] + (uint32_t)(0xB1344u)), 0xFFFFFFFFu);
    // 0d86f5  call 0xd67c4
    X86_AT(c, 0xd86f5u);
    push32(c, 0xd86fau); x86_call_known(c, 0xd67c4u, f_000d67c4); X86_RET(c, 0xd86fau);
    X86_TICK(c, 9);
    // 0d86fa  add esp, 0x34
    X86_AT(c, 0xd86fau);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
    // 0d86fd  jmp 0xd85a9
    X86_AT(c, 0xd86fdu);
    X86_POLL(c, 0xd85a9u); goto L_d85a9;
    x86_fault(c, 0xd85a9u, "ran off the end of a function");
}
void f_000d8702(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0d8702  push ebp
    X86_AT(c, 0xd8702u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d8703  mov ebp, esp
    X86_AT(c, 0xd8703u);
    c.r[5] = c.r[4];
    // 0d8705  sub esp, 0x54
    X86_AT(c, 0xd8705u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x54u, 0, 4); }
    // 0d8708  push ebx
    X86_AT(c, 0xd8708u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d8709  push esi
    X86_AT(c, 0xd8709u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d870a  push edi
    X86_AT(c, 0xd870au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d870b  push 0xb34e
    X86_AT(c, 0xd870bu);
    { uint32_t v = 0xB34Eu; push32(c, v); }
    // 0d8710  push 0xb354
    X86_AT(c, 0xd8710u);
    { uint32_t v = 0xB354u; push32(c, v); }
    // 0d8715  call 0xe6e04
    X86_AT(c, 0xd8715u);
    push32(c, 0xd871au); x86_call_known(c, 0xe6e04u, f_000e6e04); X86_RET(c, 0xd871au);
    X86_TICK(c, 11);
    // 0d871a  add esp, 8
    X86_AT(c, 0xd871au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d871d  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd871du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d8720  and eax, eax
    X86_AT(c, 0xd8720u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d8722  jne 0xd872e
    X86_AT(c, 0xd8722u);
    if (x86_cc(c, 5)) { goto L_d872e; }
    X86_TICK(c, 9);
    // 0d8724  mov eax, 0xffffffff
    X86_AT(c, 0xd8724u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d8729  jmp 0xd87b4
    X86_AT(c, 0xd8729u);
    goto L_d87b4;
L_d872e:
    X86_TICK(c, 18);
    // 0d872e  push dword ptr [ebp - 4]
    X86_AT(c, 0xd872eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d8731  push 0x4f
    X86_AT(c, 0xd8731u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d8733  lea eax, [ebp - 0x54]
    X86_AT(c, 0xd8733u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFACu);
    // 0d8736  push eax
    X86_AT(c, 0xd8736u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8737  call 0xe665c
    X86_AT(c, 0xd8737u);
    push32(c, 0xd873cu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd873cu);
    X86_TICK(c, 14);
    // 0d873c  add esp, 0xc
    X86_AT(c, 0xd873cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d873f  cmp byte ptr [ebp - 0x54], 0x43
    X86_AT(c, 0xd873fu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFACu))), 0x43u, 0, 1);
    // 0d8743  jne 0xd874b
    X86_AT(c, 0xd8743u);
    if (x86_cc(c, 5)) { goto L_d874b; }
    X86_TICK(c, 12);
    // 0d8745  cmp byte ptr [ebp - 0x53], 0x44
    X86_AT(c, 0xd8745u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFADu))), 0x44u, 0, 1);
    // 0d8749  je 0xd875d
    X86_AT(c, 0xd8749u);
    if (x86_cc(c, 4)) { goto L_d875d; }
L_d874b:
    X86_TICK(c, 12);
    // 0d874b  push dword ptr [ebp - 4]
    X86_AT(c, 0xd874bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d874e  call 0xe7300
    X86_AT(c, 0xd874eu);
    push32(c, 0xd8753u); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xd8753u);
    X86_TICK(c, 11);
    // 0d8753  mov eax, 0xffffffff
    X86_AT(c, 0xd8753u);
    c.r[0] = 0xFFFFFFFFu;
    // 0d8758  add esp, 4
    X86_AT(c, 0xd8758u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d875b  jmp 0xd87b4
    X86_AT(c, 0xd875bu);
    goto L_d87b4;
L_d875d:
    X86_TICK(c, 18);
    // 0d875d  push dword ptr [ebp - 4]
    X86_AT(c, 0xd875du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d8760  push 0x4f
    X86_AT(c, 0xd8760u);
    { uint32_t v = 0x4Fu; push32(c, v); }
    // 0d8762  lea eax, [ebp - 0x54]
    X86_AT(c, 0xd8762u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFACu);
    // 0d8765  push eax
    X86_AT(c, 0xd8765u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8766  call 0xe665c
    X86_AT(c, 0xd8766u);
    push32(c, 0xd876bu); x86_call_known(c, 0xe665cu, f_000e665c); X86_RET(c, 0xd876bu);
    X86_TICK(c, 12);
    // 0d876b  push dword ptr [ebp - 4]
    X86_AT(c, 0xd876bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0d876e  call 0xe7300
    X86_AT(c, 0xd876eu);
    push32(c, 0xd8773u); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xd8773u);
    X86_TICK(c, 8);
    // 0d8773  lea ebx, [ebp - 0x54]
    X86_AT(c, 0xd8773u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFACu);
    // 0d8776  sub esi, esi
    X86_AT(c, 0xd8776u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d8778  mov edi, esi
    X86_AT(c, 0xd8778u);
    c.r[7] = c.r[6];
    // 0d877a  add esp, 0x10
    X86_AT(c, 0xd877au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d877d:
    X86_TICK(c, 11);
    // 0d877d  mov al, byte ptr [ebx]
    X86_AT(c, 0xd877du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0d877f  cmp al, 0x30
    X86_AT(c, 0xd877fu);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 0d8781  jb 0xd8787
    X86_AT(c, 0xd8781u);
    if (x86_cc(c, 2)) { goto L_d8787; }
    X86_TICK(c, 7);
    // 0d8783  cmp al, 0x39
    X86_AT(c, 0xd8783u);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 0d8785  jbe 0xd878c
    X86_AT(c, 0xd8785u);
    if (x86_cc(c, 6)) { goto L_d878c; }
L_d8787:
    X86_TICK(c, 12);
    // 0d8787  cmp byte ptr [ebx], 0x2c
    X86_AT(c, 0xd8787u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0x2Cu, 0, 1);
    // 0d878a  jne 0xd87b4
    X86_AT(c, 0xd878au);
    if (x86_cc(c, 5)) { goto L_d87b4; }
L_d878c:
    X86_TICK(c, 11);
    // 0d878c  mov al, byte ptr [ebx]
    X86_AT(c, 0xd878cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3]))));
    // 0d878e  cmp al, 0x2c
    X86_AT(c, 0xd878eu);
    (void)x86_sub(c, g8(c, 0), 0x2Cu, 0, 1);
    // 0d8790  je 0xd87a2
    X86_AT(c, 0xd8790u);
    if (x86_cc(c, 4)) { goto L_d87a2; }
    X86_TICK(c, 21);
    // 0d8792  lea esi, [esi + esi*4]
    X86_AT(c, 0xd8792u);
    c.r[6] = (uint32_t)(c.r[6] + c.r[6] * 4);
    // 0d8795  add esi, esi
    X86_AT(c, 0xd8795u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[6], 0, 4); }
    // 0d8797  movzx eax, al
    X86_AT(c, 0xd8797u);
    c.r[0] = g8(c, 0);
    // 0d879a  sub eax, 0x30
    X86_AT(c, 0xd879au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x30u, 0, 4); }
    // 0d879d  add eax, esi
    X86_AT(c, 0xd879du);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[6], 0, 4); }
    // 0d879f  xchg esi, eax
    X86_AT(c, 0xd879fu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0d87a0  jmp 0xd87b1
    X86_AT(c, 0xd87a0u);
    goto L_d87b1;
L_d87a2:
    X86_TICK(c, 13);
    // 0d87a2  mov dword ptr [edi*4 + 0x43d94], esi
    X86_AT(c, 0xd87a2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] * 4 + 0x43D94u)), c.r[6]);
    // 0d87a9  sub esi, esi
    X86_AT(c, 0xd87a9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0d87ab  inc edi
    X86_AT(c, 0xd87abu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d87ac  cmp edi, 0x10
    X86_AT(c, 0xd87acu);
    (void)x86_sub(c, c.r[7], 0x10u, 0, 4);
    // 0d87af  jge 0xd87b4
    X86_AT(c, 0xd87afu);
    if (x86_cc(c, 13)) { goto L_d87b4; }
L_d87b1:
    X86_TICK(c, 9);
    // 0d87b1  inc ebx
    X86_AT(c, 0xd87b1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0d87b2  jmp 0xd877d
    X86_AT(c, 0xd87b2u);
    X86_POLL(c, 0xd877du); goto L_d877d;
L_d87b4:
    X86_TICK(c, 28);
    // 0d87b4  pop edi
    X86_AT(c, 0xd87b4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d87b5  pop esi
    X86_AT(c, 0xd87b5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d87b6  pop ebx
    X86_AT(c, 0xd87b6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d87b7  leave 
    X86_AT(c, 0xd87b7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d87b8  ret 
    X86_AT(c, 0xd87b8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8702u, "ran off the end of a function");
}
void f_000d87bc(X86Cpu& c) {
    X86_TICK(c, 56);
    // 0d87bc  push ebp
    X86_AT(c, 0xd87bcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d87bd  mov ebp, esp
    X86_AT(c, 0xd87bdu);
    c.r[5] = c.r[4];
    // 0d87bf  push esi
    X86_AT(c, 0xd87bfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d87c0  push edi
    X86_AT(c, 0xd87c0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d87c1  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xd87c1u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d87c4  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xd87c4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0d87c7  mov ecx, 0x86
    X86_AT(c, 0xd87c7u);
    c.r[1] = 0x86u;
    // 0d87cc  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xd87ccu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0d87ce  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xd87ceu);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0d87d0  pop edi
    X86_AT(c, 0xd87d0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d87d1  pop esi
    X86_AT(c, 0xd87d1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d87d2  leave 
    X86_AT(c, 0xd87d2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d87d3  ret 
    X86_AT(c, 0xd87d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd87bcu, "ran off the end of a function");
}
void f_000d87d4(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0d87d4  push ebp
    X86_AT(c, 0xd87d4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d87d5  mov ebp, esp
    X86_AT(c, 0xd87d5u);
    c.r[5] = c.r[4];
    // 0d87d7  push eax
    X86_AT(c, 0xd87d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d87d8  push ebx
    X86_AT(c, 0xd87d8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d87d9  push esi
    X86_AT(c, 0xd87d9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d87da  push edi
    X86_AT(c, 0xd87dau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d87db  push 9
    X86_AT(c, 0xd87dbu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d87dd  push 0x38
    X86_AT(c, 0xd87ddu);
    { uint32_t v = 0x38u; push32(c, v); }
    // 0d87df  push 3
    X86_AT(c, 0xd87dfu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d87e1  push 2
    X86_AT(c, 0xd87e1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d87e3  push 4
    X86_AT(c, 0xd87e3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d87e5  call 0xcab04
    X86_AT(c, 0xd87e5u);
    push32(c, 0xd87eau); x86_call_known(c, 0xcab04u, f_000cab04); X86_RET(c, 0xd87eau);
    X86_TICK(c, 11);
    // 0d87ea  push 3
    X86_AT(c, 0xd87eau);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d87ec  push 2
    X86_AT(c, 0xd87ecu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d87ee  call 0xcc814
    X86_AT(c, 0xd87eeu);
    push32(c, 0xd87f3u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd87f3u);
    X86_TICK(c, 11);
    // 0d87f3  push 0xe
    X86_AT(c, 0xd87f3u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d87f5  push 4
    X86_AT(c, 0xd87f5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d87f7  call 0xcac40
    X86_AT(c, 0xd87f7u);
    push32(c, 0xd87fcu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd87fcu);
    X86_TICK(c, 9);
    // 0d87fc  push 4
    X86_AT(c, 0xd87fcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d87fe  call 0xca0a0
    X86_AT(c, 0xd87feu);
    push32(c, 0xd8803u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd8803u);
    X86_TICK(c, 11);
    // 0d8803  push 0xb360
    X86_AT(c, 0xd8803u);
    { uint32_t v = 0xB360u; push32(c, v); }
    // 0d8808  push 4
    X86_AT(c, 0xd8808u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d880a  call 0xc8cdc
    X86_AT(c, 0xd880au);
    push32(c, 0xd880fu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd880fu);
    X86_TICK(c, 11);
    // 0d880f  push 0xb
    X86_AT(c, 0xd880fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8811  push 4
    X86_AT(c, 0xd8811u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8813  call 0xcac40
    X86_AT(c, 0xd8813u);
    push32(c, 0xd8818u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8818u);
    X86_TICK(c, 9);
    // 0d8818  push 4
    X86_AT(c, 0xd8818u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d881a  call 0xca0a0
    X86_AT(c, 0xd881au);
    push32(c, 0xd881fu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd881fu);
    X86_TICK(c, 4);
    // 0d881f  add esp, 0x3c
    X86_AT(c, 0xd881fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d8822  sub edi, edi
    X86_AT(c, 0xd8822u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d8824:
    X86_TICK(c, 7);
    // 0d8824  cmp edi, 4
    X86_AT(c, 0xd8824u);
    (void)x86_sub(c, c.r[7], 0x4u, 0, 4);
    // 0d8827  jge 0xd891d
    X86_AT(c, 0xd8827u);
    if (x86_cc(c, 13)) { goto L_d891d; }
    X86_TICK(c, 17);
    // 0d882d  mov esi, 0xffffffff
    X86_AT(c, 0xd882du);
    c.r[6] = 0xFFFFFFFFu;
    // 0d8832  lea eax, [edi + edi*1 + 4]
    X86_AT(c, 0xd8832u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] + 0x4u);
    // 0d8836  push eax
    X86_AT(c, 0xd8836u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8837  push 1
    X86_AT(c, 0xd8837u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d8839  mov ebx, eax
    X86_AT(c, 0xd8839u);
    c.r[3] = c.r[0];
    // 0d883b  call 0xcc814
    X86_AT(c, 0xd883bu);
    push32(c, 0xd8840u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8840u);
    X86_TICK(c, 15);
    // 0d8840  push 2
    X86_AT(c, 0xd8840u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8842  lea eax, [edi + 1]
    X86_AT(c, 0xd8842u);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0d8845  push eax
    X86_AT(c, 0xd8845u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d8846  push 4
    X86_AT(c, 0xd8846u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8848  call 0xc8cb8
    X86_AT(c, 0xd8848u);
    push32(c, 0xd884du); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd884du);
    X86_TICK(c, 11);
    // 0d884d  push 0xb382
    X86_AT(c, 0xd884du);
    { uint32_t v = 0xB382u; push32(c, v); }
    // 0d8852  push 4
    X86_AT(c, 0xd8852u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8854  call 0xca414
    X86_AT(c, 0xd8854u);
    push32(c, 0xd8859u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd8859u);
    X86_TICK(c, 11);
    // 0d8859  push ebx
    X86_AT(c, 0xd8859u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d885a  push 8
    X86_AT(c, 0xd885au);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d885c  call 0xcc814
    X86_AT(c, 0xd885cu);
    push32(c, 0xd8861u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8861u);
    X86_TICK(c, 36);
    // 0d8861  imul eax, edi, 0x21a
    X86_AT(c, 0xd8861u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8867  add esp, 0x24
    X86_AT(c, 0xd8867u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0d886a  cmp byte ptr [eax + 0xb0508], 0
    X86_AT(c, 0xd886au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0508u))), 0x0u, 0, 1);
    // 0d8871  je 0xd8887
    X86_AT(c, 0xd8871u);
    if (x86_cc(c, 4)) { goto L_d8887; }
    X86_TICK(c, 13);
    // 0d8873  lea edx, [eax*1 + 0xb0508]
    X86_AT(c, 0xd8873u);
    c.r[2] = (uint32_t)(c.r[0] + 0xB0508u);
    // 0d887a  push edx
    X86_AT(c, 0xd887au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d887b  push 4
    X86_AT(c, 0xd887bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d887d  call 0xca850
    X86_AT(c, 0xd887du);
    push32(c, 0xd8882u); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xd8882u);
    X86_TICK(c, 9);
    // 0d8882  add esp, 8
    X86_AT(c, 0xd8882u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d8885  jmp 0xd88a8
    X86_AT(c, 0xd8885u);
    goto L_d88a8;
L_d8887:
    X86_TICK(c, 11);
    // 0d8887  push 0xb388
    X86_AT(c, 0xd8887u);
    { uint32_t v = 0xB388u; push32(c, v); }
    // 0d888c  push 4
    X86_AT(c, 0xd888cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d888e  call 0xc8cdc
    X86_AT(c, 0xd888eu);
    push32(c, 0xd8893u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd8893u);
    X86_TICK(c, 11);
    // 0d8893  push 0xb
    X86_AT(c, 0xd8893u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8895  push 4
    X86_AT(c, 0xd8895u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8897  call 0xcac40
    X86_AT(c, 0xd8897u);
    push32(c, 0xd889cu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd889cu);
    X86_TICK(c, 9);
    // 0d889c  push 4
    X86_AT(c, 0xd889cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d889e  call 0xca0a0
    X86_AT(c, 0xd889eu);
    push32(c, 0xd88a3u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd88a3u);
    X86_TICK(c, 9);
    // 0d88a3  add esp, 0x14
    X86_AT(c, 0xd88a3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d88a6  jmp 0xd8917
    X86_AT(c, 0xd88a6u);
    goto L_d8917;
L_d88a8:
    X86_TICK(c, 15);
    // 0d88a8  lea eax, [edi + edi*1 + 5]
    X86_AT(c, 0xd88a8u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] + 0x5u);
    // 0d88ac  push eax
    X86_AT(c, 0xd88acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d88ad  push 0x14
    X86_AT(c, 0xd88adu);
    { uint32_t v = 0x14u; push32(c, v); }
    // 0d88af  mov ebx, eax
    X86_AT(c, 0xd88afu);
    c.r[3] = c.r[0];
    // 0d88b1  call 0xcc814
    X86_AT(c, 0xd88b1u);
    push32(c, 0xd88b6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd88b6u);
    X86_TICK(c, 44);
    // 0d88b6  imul eax, edi, 0x21a
    X86_AT(c, 0xd88b6u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d88bc  movzx edx, byte ptr [eax + 0xb0519]
    X86_AT(c, 0xd88bcu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u)));
    // 0d88c3  push dword ptr [edx*4 + 0xa1e28]
    X86_AT(c, 0xd88c3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xA1E28u))); push32(c, v); }
    // 0d88ca  push 4
    X86_AT(c, 0xd88cau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d88cc  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd88ccu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d88cf  call 0xc8cdc
    X86_AT(c, 0xd88cfu);
    push32(c, 0xd88d4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd88d4u);
    X86_TICK(c, 11);
    // 0d88d4  push ebx
    X86_AT(c, 0xd88d4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d88d5  push 0x28
    X86_AT(c, 0xd88d5u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d88d7  call 0xcc814
    X86_AT(c, 0xd88d7u);
    push32(c, 0xd88dcu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd88dcu);
    X86_TICK(c, 24);
    // 0d88dc  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd88dcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d88df  movzx edx, byte ptr [eax + 0xb0517]
    X86_AT(c, 0xd88dfu);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u)));
    // 0d88e6  push dword ptr [edx*4 + 0xa1e34]
    X86_AT(c, 0xd88e6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[2] * 4 + 0xA1E34u))); push32(c, v); }
    // 0d88ed  push 4
    X86_AT(c, 0xd88edu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d88ef  call 0xc8cdc
    X86_AT(c, 0xd88efu);
    push32(c, 0xd88f4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd88f4u);
    X86_TICK(c, 11);
    // 0d88f4  push ebx
    X86_AT(c, 0xd88f4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d88f5  push 0x3a
    X86_AT(c, 0xd88f5u);
    { uint32_t v = 0x3Au; push32(c, v); }
    // 0d88f7  call 0xcc814
    X86_AT(c, 0xd88f7u);
    push32(c, 0xd88fcu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd88fcu);
    X86_TICK(c, 24);
    // 0d88fc  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xd88fcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d88ff  movzx eax, byte ptr [eax + 0xb0518]
    X86_AT(c, 0xd88ffu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u)));
    // 0d8906  push dword ptr [eax*4 + 0xa1ed4]
    X86_AT(c, 0xd8906u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1ED4u))); push32(c, v); }
    // 0d890d  push 4
    X86_AT(c, 0xd890du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d890f  call 0xc8cdc
    X86_AT(c, 0xd890fu);
    push32(c, 0xd8914u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd8914u);
    X86_TICK(c, 2);
    // 0d8914  add esp, 0x30
    X86_AT(c, 0xd8914u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
L_d8917:
    X86_TICK(c, 9);
    // 0d8917  inc edi
    X86_AT(c, 0xd8917u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0d8918  jmp 0xd8824
    X86_AT(c, 0xd8918u);
    X86_POLL(c, 0xd8824u); goto L_d8824;
L_d891d:
    X86_TICK(c, 9);
    // 0d891d  push 0xb3a4
    X86_AT(c, 0xd891du);
    { uint32_t v = 0xB3A4u; push32(c, v); }
    // 0d8922  call 0xcad60
    X86_AT(c, 0xd8922u);
    push32(c, 0xd8927u); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xd8927u);
    X86_TICK(c, 2);
    // 0d8927  add esp, 4
    X86_AT(c, 0xd8927u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
L_d892a:
    X86_TICK(c, 9);
    // 0d892a  push 4
    X86_AT(c, 0xd892au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d892c  call 0xc81e4
    X86_AT(c, 0xd892cu);
    push32(c, 0xd8931u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8931u);
    X86_TICK(c, 9);
    // 0d8931  add esp, 4
    X86_AT(c, 0xd8931u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d8934  and al, al
    X86_AT(c, 0xd8934u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0d8936  je 0xd892a
    X86_AT(c, 0xd8936u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd892au); goto L_d892a; }
    X86_TICK(c, 9);
    // 0d8938  push 2
    X86_AT(c, 0xd8938u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d893a  call 0xca3cc
    X86_AT(c, 0xd893au);
    push32(c, 0xd893fu); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd893fu);
    X86_TICK(c, 9);
    // 0d893f  push 4
    X86_AT(c, 0xd893fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8941  call 0xca0a0
    X86_AT(c, 0xd8941u);
    push32(c, 0xd8946u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd8946u);
    X86_TICK(c, 17);
    // 0d8946  push 0x17
    X86_AT(c, 0xd8946u);
    { uint32_t v = 0x17u; push32(c, v); }
    // 0d8948  push 0x4d
    X86_AT(c, 0xd8948u);
    { uint32_t v = 0x4Du; push32(c, v); }
    // 0d894a  push 3
    X86_AT(c, 0xd894au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d894c  push 0
    X86_AT(c, 0xd894cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d894e  push 4
    X86_AT(c, 0xd894eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8950  call 0xcab04
    X86_AT(c, 0xd8950u);
    push32(c, 0xd8955u); x86_call_known(c, 0xcab04u, f_000cab04); X86_RET(c, 0xd8955u);
    X86_TICK(c, 30);
    // 0d8955  add esp, 0x1c
    X86_AT(c, 0xd8955u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x1Cu, 0, 4); }
    // 0d8958  pop edi
    X86_AT(c, 0xd8958u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d8959  pop esi
    X86_AT(c, 0xd8959u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d895a  pop ebx
    X86_AT(c, 0xd895au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d895b  leave 
    X86_AT(c, 0xd895bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d895c  ret 
    X86_AT(c, 0xd895cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd87d4u, "ran off the end of a function");
}
void f_000d8960(X86Cpu& c) {
    X86_TICK(c, 80);
    // 0d8960  push ebp
    X86_AT(c, 0xd8960u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0d8961  mov ebp, esp
    X86_AT(c, 0xd8961u);
    c.r[5] = c.r[4];
    // 0d8963  sub esp, 0x4c
    X86_AT(c, 0xd8963u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x4Cu, 0, 4); }
    // 0d8966  push ebx
    X86_AT(c, 0xd8966u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d8967  push esi
    X86_AT(c, 0xd8967u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8968  push edi
    X86_AT(c, 0xd8968u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0d8969  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xd8969u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0d896c  sub eax, eax
    X86_AT(c, 0xd896cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d896e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd896eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d8971  mov esi, 0x1e
    X86_AT(c, 0xd8971u);
    c.r[6] = 0x1Eu;
    // 0d8976  imul edx, edi, 0x21a
    X86_AT(c, 0xd8976u);
    c.r[2] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d897c  mov ecx, 0xa
    X86_AT(c, 0xd897cu);
    c.r[1] = 0xAu;
    // 0d8981  mov dword ptr [edx + 0xb051e], ecx
    X86_AT(c, 0xd8981u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB051Eu)), c.r[1]);
    // 0d8987  mov dword ptr [edx + 0xb0522], ecx
    X86_AT(c, 0xd8987u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0522u)), c.r[1]);
    // 0d898d  mov dword ptr [edx + 0xb0526], ecx
    X86_AT(c, 0xd898du);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0526u)), c.r[1]);
    // 0d8993  mov dword ptr [edx + 0xb052a], ecx
    X86_AT(c, 0xd8993u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB052Au)), c.r[1]);
    // 0d8999  mov dword ptr [edx + 0xb052e], ecx
    X86_AT(c, 0xd8999u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB052Eu)), c.r[1]);
    // 0d899f  mov dword ptr [edx + 0xb0532], ecx
    X86_AT(c, 0xd899fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0532u)), c.r[1]);
    // 0d89a5  mov cl, 4
    X86_AT(c, 0xd89a5u);
    s8(c, 1, 0x4u);
    // 0d89a7  mov byte ptr [edx + 0xb0517], cl
    X86_AT(c, 0xd89a7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0517u)), g8(c, 1));
    // 0d89ad  mov byte ptr [edx + 0xb0518], cl
    X86_AT(c, 0xd89adu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0518u)), g8(c, 1));
    // 0d89b3  mov byte ptr [edx + 0xb0519], cl
    X86_AT(c, 0xd89b3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0519u)), g8(c, 1));
    // 0d89b9  mov dword ptr [edx + 0xb0542], eax
    X86_AT(c, 0xd89b9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0542u)), c.r[0]);
    // 0d89bf  mov dword ptr [edx + 0xb0546], eax
    X86_AT(c, 0xd89bfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0546u)), c.r[0]);
    // 0d89c5  mov dword ptr [edx + 0xb054a], eax
    X86_AT(c, 0xd89c5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB054Au)), c.r[0]);
    // 0d89cb  mov dword ptr [edx + 0xb054e], eax
    X86_AT(c, 0xd89cbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB054Eu)), c.r[0]);
    // 0d89d1  mov dword ptr [edx + 0xb0556], eax
    X86_AT(c, 0xd89d1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB0556u)), c.r[0]);
    // 0d89d7  mov dword ptr [edx + 0xb055a], eax
    X86_AT(c, 0xd89d7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xB055Au)), c.r[0]);
    // 0d89dd  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xd89ddu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_d89e0:
    X86_TICK(c, 11);
    // 0d89e0  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd89e0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d89e3  cmp eax, 0xf
    X86_AT(c, 0xd89e3u);
    (void)x86_sub(c, c.r[0], 0xFu, 0, 4);
    // 0d89e6  jge 0xd89f2
    X86_AT(c, 0xd89e6u);
    if (x86_cc(c, 13)) { goto L_d89f2; }
    X86_TICK(c, 15);
    // 0d89e8  mov byte ptr [ebp + eax*1 - 0x3c], 0x20
    X86_AT(c, 0xd89e8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFC4u)), 0x20u);
    // 0d89ed  inc dword ptr [ebp - 8]
    X86_AT(c, 0xd89edu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d89f0  jmp 0xd89e0
    X86_AT(c, 0xd89f0u);
    X86_POLL(c, 0xd89e0u); goto L_d89e0;
L_d89f2:
    X86_TICK(c, 6);
    // 0d89f2  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd89f2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d89f5  mov byte ptr [ebp + eax*1 - 0x3c], 0
    X86_AT(c, 0xd89f5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFC4u)), 0x0u);
L_d89fa:
    X86_TICK(c, 11);
    // 0d89fa  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xd89fau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0d89fd  cmp edx, 0xa
    X86_AT(c, 0xd89fdu);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8a00  ja 0xd89fa
    X86_AT(c, 0xd8a00u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d8a02  jmp dword ptr cs:[edx*4 + 0xd8a0a]
    X86_AT(c, 0xd8a02u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD8A0Au)));
      switch (t) {
      case 0xd8a36u: goto L_d8a36;
      case 0xd8b3fu: goto L_d8b3f;
      case 0xd8c59u: goto L_d8c59;
      case 0xd8d73u: goto L_d8d73;
      case 0xd8e8du: goto L_d8e8d;
      case 0xd8faau: goto L_d8faa;
      case 0xd90c4u: goto L_d90c4;
      case 0xd9345u: goto L_d9345;
      case 0xd952du: goto L_d952d;
      case 0xd982cu: goto L_d982c;
      case 0xd98ddu: goto L_d98dd;
      default: x86_jump(c, t); return; } }
L_d8a36:
    X86_TICK(c, 11);
    // 0d8a36  push 0xe
    X86_AT(c, 0xd8a36u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8a38  push 4
    X86_AT(c, 0xd8a38u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8a3a  call 0xcac40
    X86_AT(c, 0xd8a3au);
    push32(c, 0xd8a3fu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8a3fu);
    X86_TICK(c, 2);
    // 0d8a3f  add esp, 8
    X86_AT(c, 0xd8a3fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8a42:
    X86_TICK(c, 11);
    // 0d8a42  push 5
    X86_AT(c, 0xd8a42u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8a44  push 0x28
    X86_AT(c, 0xd8a44u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8a46  call 0xcc814
    X86_AT(c, 0xd8a46u);
    push32(c, 0xd8a4bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8a4bu);
    X86_TICK(c, 13);
    // 0d8a4b  push 2
    X86_AT(c, 0xd8a4bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8a4d  push esi
    X86_AT(c, 0xd8a4du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8a4e  push 4
    X86_AT(c, 0xd8a4eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8a50  call 0xc8cb8
    X86_AT(c, 0xd8a50u);
    push32(c, 0xd8a55u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8a55u);
    X86_TICK(c, 11);
    // 0d8a55  push 6
    X86_AT(c, 0xd8a55u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d8a57  push 0x34
    X86_AT(c, 0xd8a57u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8a59  call 0xcc814
    X86_AT(c, 0xd8a59u);
    push32(c, 0xd8a5eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8a5eu);
    X86_TICK(c, 40);
    // 0d8a5e  push 2
    X86_AT(c, 0xd8a5eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8a60  imul eax, edi, 0x21a
    X86_AT(c, 0xd8a60u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8a66  push dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8a66u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu))); push32(c, v); }
    // 0d8a6c  push 4
    X86_AT(c, 0xd8a6cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8a6e  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8a6eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8a71  call 0xc8cb8
    X86_AT(c, 0xd8a71u);
    push32(c, 0xd8a76u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8a76u);
    X86_TICK(c, 9);
    // 0d8a76  push 4
    X86_AT(c, 0xd8a76u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8a78  call 0xc81e4
    X86_AT(c, 0xd8a78u);
    push32(c, 0xd8a7du); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8a7du);
    X86_TICK(c, 12);
    // 0d8a7d  xchg ebx, eax
    X86_AT(c, 0xd8a7du);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8a7e  add esp, 0x2c
    X86_AT(c, 0xd8a7eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8a81  cmp bl, 5
    X86_AT(c, 0xd8a81u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8a84  je 0xd8ae2
    X86_AT(c, 0xd8a84u);
    if (x86_cc(c, 4)) { goto L_d8ae2; }
    X86_TICK(c, 7);
    // 0d8a86  cmp bl, 6
    X86_AT(c, 0xd8a86u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8a89  je 0xd8ae2
    X86_AT(c, 0xd8a89u);
    if (x86_cc(c, 4)) { goto L_d8ae2; }
    X86_TICK(c, 7);
    // 0d8a8b  cmp bl, 4
    X86_AT(c, 0xd8a8bu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8a8e  je 0xd8ae2
    X86_AT(c, 0xd8a8eu);
    if (x86_cc(c, 4)) { goto L_d8ae2; }
    X86_TICK(c, 7);
    // 0d8a90  cmp bl, 1
    X86_AT(c, 0xd8a90u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8a93  je 0xd8ae2
    X86_AT(c, 0xd8a93u);
    if (x86_cc(c, 4)) { goto L_d8ae2; }
    X86_TICK(c, 7);
    // 0d8a95  cmp bl, 7
    X86_AT(c, 0xd8a95u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d8a98  jne 0xd8ab3
    X86_AT(c, 0xd8a98u);
    if (x86_cc(c, 5)) { goto L_d8ab3; }
    X86_TICK(c, 15);
    // 0d8a9a  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd8a9au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d8a9d  mov edx, dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8a9du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu)));
    // 0d8aa3  cmp edx, 0x19
    X86_AT(c, 0xd8aa3u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d8aa6  je 0xd8a42
    X86_AT(c, 0xd8aa6u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8a42u); goto L_d8a42; }
    X86_TICK(c, 7);
    // 0d8aa8  and esi, esi
    X86_AT(c, 0xd8aa8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d8aaa  je 0xd8a42
    X86_AT(c, 0xd8aaau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8a42u); goto L_d8a42; }
    X86_TICK(c, 8);
    // 0d8aac  inc dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8aacu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8ab2  dec esi
    X86_AT(c, 0xd8ab2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d8ab3:
    X86_TICK(c, 7);
    // 0d8ab3  cmp bl, 3
    X86_AT(c, 0xd8ab3u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d8ab6  jne 0xd8a42
    X86_AT(c, 0xd8ab6u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8a42u); goto L_d8a42; }
    X86_TICK(c, 33);
    // 0d8ab8  imul eax, edi, 0x21a
    X86_AT(c, 0xd8ab8u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8abe  mov edx, dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8abeu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu)));
    // 0d8ac4  cmp edx, 0xa
    X86_AT(c, 0xd8ac4u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8ac7  je 0xd8a42
    X86_AT(c, 0xd8ac7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8a42u); goto L_d8a42; }
    X86_TICK(c, 7);
    // 0d8acd  cmp esi, 0x1e
    X86_AT(c, 0xd8acdu);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d8ad0  je 0xd8a42
    X86_AT(c, 0xd8ad0u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8a42u); goto L_d8a42; }
    X86_TICK(c, 15);
    // 0d8ad6  dec dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8ad6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d8adc  inc esi
    X86_AT(c, 0xd8adcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d8add  jmp 0xd8a42
    X86_AT(c, 0xd8addu);
    X86_POLL(c, 0xd8a42u); goto L_d8a42;
L_d8ae2:
    X86_TICK(c, 11);
    // 0d8ae2  push 0xb
    X86_AT(c, 0xd8ae2u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8ae4  push 4
    X86_AT(c, 0xd8ae4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8ae6  call 0xcac40
    X86_AT(c, 0xd8ae6u);
    push32(c, 0xd8aebu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8aebu);
    X86_TICK(c, 11);
    // 0d8aeb  push 5
    X86_AT(c, 0xd8aebu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8aed  push 0x28
    X86_AT(c, 0xd8aedu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8aef  call 0xcc814
    X86_AT(c, 0xd8aefu);
    push32(c, 0xd8af4u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8af4u);
    X86_TICK(c, 13);
    // 0d8af4  push 2
    X86_AT(c, 0xd8af4u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8af6  push esi
    X86_AT(c, 0xd8af6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8af7  push 4
    X86_AT(c, 0xd8af7u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8af9  call 0xc8cb8
    X86_AT(c, 0xd8af9u);
    push32(c, 0xd8afeu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8afeu);
    X86_TICK(c, 11);
    // 0d8afe  push 6
    X86_AT(c, 0xd8afeu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d8b00  push 0x34
    X86_AT(c, 0xd8b00u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8b02  call 0xcc814
    X86_AT(c, 0xd8b02u);
    push32(c, 0xd8b07u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8b07u);
    X86_TICK(c, 38);
    // 0d8b07  push 2
    X86_AT(c, 0xd8b07u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8b09  imul eax, edi, 0x21a
    X86_AT(c, 0xd8b09u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8b0f  push dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd8b0fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu))); push32(c, v); }
    // 0d8b15  push 4
    X86_AT(c, 0xd8b15u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8b17  call 0xc8cb8
    X86_AT(c, 0xd8b17u);
    push32(c, 0xd8b1cu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8b1cu);
    X86_TICK(c, 9);
    // 0d8b1c  add esp, 0x30
    X86_AT(c, 0xd8b1cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d8b1f  cmp bl, 1
    X86_AT(c, 0xd8b1fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8b22  je 0xd985e
    X86_AT(c, 0xd8b22u);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d8b28  cmp bl, 6
    X86_AT(c, 0xd8b28u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8b2b  je 0xd8d47
    X86_AT(c, 0xd8b2bu);
    if (x86_cc(c, 4)) { goto L_d8d47; }
    X86_TICK(c, 7);
    // 0d8b31  cmp bl, 4
    X86_AT(c, 0xd8b31u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8b34  jne 0xd89fa
    X86_AT(c, 0xd8b34u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d8b3a  jmp 0xd8d47
    X86_AT(c, 0xd8b3au);
    goto L_d8d47;
L_d8b3f:
    X86_TICK(c, 11);
    // 0d8b3f  push 0xe
    X86_AT(c, 0xd8b3fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8b41  push 4
    X86_AT(c, 0xd8b41u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8b43  call 0xcac40
    X86_AT(c, 0xd8b43u);
    push32(c, 0xd8b48u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8b48u);
    X86_TICK(c, 2);
    // 0d8b48  add esp, 8
    X86_AT(c, 0xd8b48u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8b4b:
    X86_TICK(c, 11);
    // 0d8b4b  push 5
    X86_AT(c, 0xd8b4bu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8b4d  push 0x28
    X86_AT(c, 0xd8b4du);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8b4f  call 0xcc814
    X86_AT(c, 0xd8b4fu);
    push32(c, 0xd8b54u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8b54u);
    X86_TICK(c, 13);
    // 0d8b54  push 2
    X86_AT(c, 0xd8b54u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8b56  push esi
    X86_AT(c, 0xd8b56u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8b57  push 4
    X86_AT(c, 0xd8b57u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8b59  call 0xc8cb8
    X86_AT(c, 0xd8b59u);
    push32(c, 0xd8b5eu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8b5eu);
    X86_TICK(c, 11);
    // 0d8b5e  push 7
    X86_AT(c, 0xd8b5eu);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d8b60  push 0x34
    X86_AT(c, 0xd8b60u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8b62  call 0xcc814
    X86_AT(c, 0xd8b62u);
    push32(c, 0xd8b67u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8b67u);
    X86_TICK(c, 40);
    // 0d8b67  push 2
    X86_AT(c, 0xd8b67u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8b69  imul eax, edi, 0x21a
    X86_AT(c, 0xd8b69u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8b6f  push dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8b6fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u))); push32(c, v); }
    // 0d8b75  push 4
    X86_AT(c, 0xd8b75u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8b77  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8b77u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8b7a  call 0xc8cb8
    X86_AT(c, 0xd8b7au);
    push32(c, 0xd8b7fu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8b7fu);
    X86_TICK(c, 9);
    // 0d8b7f  push 4
    X86_AT(c, 0xd8b7fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8b81  call 0xc81e4
    X86_AT(c, 0xd8b81u);
    push32(c, 0xd8b86u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8b86u);
    X86_TICK(c, 12);
    // 0d8b86  xchg ebx, eax
    X86_AT(c, 0xd8b86u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8b87  add esp, 0x2c
    X86_AT(c, 0xd8b87u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8b8a  cmp bl, 5
    X86_AT(c, 0xd8b8au);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8b8d  je 0xd8beb
    X86_AT(c, 0xd8b8du);
    if (x86_cc(c, 4)) { goto L_d8beb; }
    X86_TICK(c, 7);
    // 0d8b8f  cmp bl, 6
    X86_AT(c, 0xd8b8fu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8b92  je 0xd8beb
    X86_AT(c, 0xd8b92u);
    if (x86_cc(c, 4)) { goto L_d8beb; }
    X86_TICK(c, 7);
    // 0d8b94  cmp bl, 4
    X86_AT(c, 0xd8b94u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8b97  je 0xd8beb
    X86_AT(c, 0xd8b97u);
    if (x86_cc(c, 4)) { goto L_d8beb; }
    X86_TICK(c, 7);
    // 0d8b99  cmp bl, 1
    X86_AT(c, 0xd8b99u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8b9c  je 0xd8beb
    X86_AT(c, 0xd8b9cu);
    if (x86_cc(c, 4)) { goto L_d8beb; }
    X86_TICK(c, 7);
    // 0d8b9e  cmp bl, 7
    X86_AT(c, 0xd8b9eu);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d8ba1  jne 0xd8bbc
    X86_AT(c, 0xd8ba1u);
    if (x86_cc(c, 5)) { goto L_d8bbc; }
    X86_TICK(c, 15);
    // 0d8ba3  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd8ba3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d8ba6  mov edx, dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8ba6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u)));
    // 0d8bac  cmp edx, 0x19
    X86_AT(c, 0xd8bacu);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d8baf  je 0xd8b4b
    X86_AT(c, 0xd8bafu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8b4bu); goto L_d8b4b; }
    X86_TICK(c, 7);
    // 0d8bb1  and esi, esi
    X86_AT(c, 0xd8bb1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d8bb3  je 0xd8b4b
    X86_AT(c, 0xd8bb3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8b4bu); goto L_d8b4b; }
    X86_TICK(c, 8);
    // 0d8bb5  inc dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8bb5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8bbb  dec esi
    X86_AT(c, 0xd8bbbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d8bbc:
    X86_TICK(c, 7);
    // 0d8bbc  cmp bl, 3
    X86_AT(c, 0xd8bbcu);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d8bbf  jne 0xd8b4b
    X86_AT(c, 0xd8bbfu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8b4bu); goto L_d8b4b; }
    X86_TICK(c, 33);
    // 0d8bc1  imul eax, edi, 0x21a
    X86_AT(c, 0xd8bc1u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8bc7  mov edx, dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8bc7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u)));
    // 0d8bcd  cmp edx, 0xa
    X86_AT(c, 0xd8bcdu);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8bd0  je 0xd8b4b
    X86_AT(c, 0xd8bd0u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8b4bu); goto L_d8b4b; }
    X86_TICK(c, 7);
    // 0d8bd6  cmp esi, 0x1e
    X86_AT(c, 0xd8bd6u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d8bd9  je 0xd8b4b
    X86_AT(c, 0xd8bd9u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8b4bu); goto L_d8b4b; }
    X86_TICK(c, 15);
    // 0d8bdf  dec dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8bdfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d8be5  inc esi
    X86_AT(c, 0xd8be5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d8be6  jmp 0xd8b4b
    X86_AT(c, 0xd8be6u);
    X86_POLL(c, 0xd8b4bu); goto L_d8b4b;
L_d8beb:
    X86_TICK(c, 11);
    // 0d8beb  push 0xb
    X86_AT(c, 0xd8bebu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8bed  push 4
    X86_AT(c, 0xd8bedu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8bef  call 0xcac40
    X86_AT(c, 0xd8befu);
    push32(c, 0xd8bf4u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8bf4u);
    X86_TICK(c, 11);
    // 0d8bf4  push 5
    X86_AT(c, 0xd8bf4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8bf6  push 0x28
    X86_AT(c, 0xd8bf6u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8bf8  call 0xcc814
    X86_AT(c, 0xd8bf8u);
    push32(c, 0xd8bfdu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8bfdu);
    X86_TICK(c, 13);
    // 0d8bfd  push 2
    X86_AT(c, 0xd8bfdu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8bff  push esi
    X86_AT(c, 0xd8bffu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8c00  push 4
    X86_AT(c, 0xd8c00u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c02  call 0xc8cb8
    X86_AT(c, 0xd8c02u);
    push32(c, 0xd8c07u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8c07u);
    X86_TICK(c, 11);
    // 0d8c07  push 7
    X86_AT(c, 0xd8c07u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d8c09  push 0x34
    X86_AT(c, 0xd8c09u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8c0b  call 0xcc814
    X86_AT(c, 0xd8c0bu);
    push32(c, 0xd8c10u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8c10u);
    X86_TICK(c, 38);
    // 0d8c10  push 2
    X86_AT(c, 0xd8c10u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8c12  imul eax, edi, 0x21a
    X86_AT(c, 0xd8c12u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8c18  push dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd8c18u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u))); push32(c, v); }
    // 0d8c1e  push 4
    X86_AT(c, 0xd8c1eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c20  call 0xc8cb8
    X86_AT(c, 0xd8c20u);
    push32(c, 0xd8c25u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8c25u);
    X86_TICK(c, 9);
    // 0d8c25  add esp, 0x30
    X86_AT(c, 0xd8c25u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d8c28  cmp bl, 5
    X86_AT(c, 0xd8c28u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8c2b  jne 0xd8c39
    X86_AT(c, 0xd8c2bu);
    if (x86_cc(c, 5)) { goto L_d8c39; }
    X86_TICK(c, 9);
    // 0d8c2d  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xd8c2du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0d8c34  jmp 0xd89fa
    X86_AT(c, 0xd8c34u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d8c39:
    X86_TICK(c, 7);
    // 0d8c39  cmp bl, 1
    X86_AT(c, 0xd8c39u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8c3c  je 0xd985e
    X86_AT(c, 0xd8c3cu);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d8c42  cmp bl, 6
    X86_AT(c, 0xd8c42u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8c45  je 0xd8e61
    X86_AT(c, 0xd8c45u);
    if (x86_cc(c, 4)) { goto L_d8e61; }
    X86_TICK(c, 7);
    // 0d8c4b  cmp bl, 4
    X86_AT(c, 0xd8c4bu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8c4e  jne 0xd89fa
    X86_AT(c, 0xd8c4eu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d8c54  jmp 0xd8e61
    X86_AT(c, 0xd8c54u);
    goto L_d8e61;
L_d8c59:
    X86_TICK(c, 11);
    // 0d8c59  push 0xe
    X86_AT(c, 0xd8c59u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8c5b  push 4
    X86_AT(c, 0xd8c5bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c5d  call 0xcac40
    X86_AT(c, 0xd8c5du);
    push32(c, 0xd8c62u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8c62u);
    X86_TICK(c, 2);
    // 0d8c62  add esp, 8
    X86_AT(c, 0xd8c62u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8c65:
    X86_TICK(c, 11);
    // 0d8c65  push 5
    X86_AT(c, 0xd8c65u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8c67  push 0x28
    X86_AT(c, 0xd8c67u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8c69  call 0xcc814
    X86_AT(c, 0xd8c69u);
    push32(c, 0xd8c6eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8c6eu);
    X86_TICK(c, 13);
    // 0d8c6e  push 2
    X86_AT(c, 0xd8c6eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8c70  push esi
    X86_AT(c, 0xd8c70u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8c71  push 4
    X86_AT(c, 0xd8c71u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c73  call 0xc8cb8
    X86_AT(c, 0xd8c73u);
    push32(c, 0xd8c78u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8c78u);
    X86_TICK(c, 11);
    // 0d8c78  push 8
    X86_AT(c, 0xd8c78u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d8c7a  push 0x34
    X86_AT(c, 0xd8c7au);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8c7c  call 0xcc814
    X86_AT(c, 0xd8c7cu);
    push32(c, 0xd8c81u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8c81u);
    X86_TICK(c, 40);
    // 0d8c81  push 2
    X86_AT(c, 0xd8c81u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8c83  imul eax, edi, 0x21a
    X86_AT(c, 0xd8c83u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8c89  push dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8c89u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u))); push32(c, v); }
    // 0d8c8f  push 4
    X86_AT(c, 0xd8c8fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c91  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8c91u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8c94  call 0xc8cb8
    X86_AT(c, 0xd8c94u);
    push32(c, 0xd8c99u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8c99u);
    X86_TICK(c, 9);
    // 0d8c99  push 4
    X86_AT(c, 0xd8c99u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8c9b  call 0xc81e4
    X86_AT(c, 0xd8c9bu);
    push32(c, 0xd8ca0u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8ca0u);
    X86_TICK(c, 12);
    // 0d8ca0  xchg ebx, eax
    X86_AT(c, 0xd8ca0u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8ca1  add esp, 0x2c
    X86_AT(c, 0xd8ca1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8ca4  cmp bl, 5
    X86_AT(c, 0xd8ca4u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8ca7  je 0xd8d05
    X86_AT(c, 0xd8ca7u);
    if (x86_cc(c, 4)) { goto L_d8d05; }
    X86_TICK(c, 7);
    // 0d8ca9  cmp bl, 6
    X86_AT(c, 0xd8ca9u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8cac  je 0xd8d05
    X86_AT(c, 0xd8cacu);
    if (x86_cc(c, 4)) { goto L_d8d05; }
    X86_TICK(c, 7);
    // 0d8cae  cmp bl, 4
    X86_AT(c, 0xd8caeu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8cb1  je 0xd8d05
    X86_AT(c, 0xd8cb1u);
    if (x86_cc(c, 4)) { goto L_d8d05; }
    X86_TICK(c, 7);
    // 0d8cb3  cmp bl, 1
    X86_AT(c, 0xd8cb3u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8cb6  je 0xd8d05
    X86_AT(c, 0xd8cb6u);
    if (x86_cc(c, 4)) { goto L_d8d05; }
    X86_TICK(c, 7);
    // 0d8cb8  cmp bl, 7
    X86_AT(c, 0xd8cb8u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d8cbb  jne 0xd8cd6
    X86_AT(c, 0xd8cbbu);
    if (x86_cc(c, 5)) { goto L_d8cd6; }
    X86_TICK(c, 15);
    // 0d8cbd  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd8cbdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d8cc0  mov edx, dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8cc0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u)));
    // 0d8cc6  cmp edx, 0x19
    X86_AT(c, 0xd8cc6u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d8cc9  je 0xd8c65
    X86_AT(c, 0xd8cc9u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8c65u); goto L_d8c65; }
    X86_TICK(c, 7);
    // 0d8ccb  and esi, esi
    X86_AT(c, 0xd8ccbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d8ccd  je 0xd8c65
    X86_AT(c, 0xd8ccdu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8c65u); goto L_d8c65; }
    X86_TICK(c, 8);
    // 0d8ccf  inc dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8ccfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8cd5  dec esi
    X86_AT(c, 0xd8cd5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d8cd6:
    X86_TICK(c, 7);
    // 0d8cd6  cmp bl, 3
    X86_AT(c, 0xd8cd6u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d8cd9  jne 0xd8c65
    X86_AT(c, 0xd8cd9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8c65u); goto L_d8c65; }
    X86_TICK(c, 33);
    // 0d8cdb  imul eax, edi, 0x21a
    X86_AT(c, 0xd8cdbu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8ce1  mov edx, dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8ce1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u)));
    // 0d8ce7  cmp edx, 0xa
    X86_AT(c, 0xd8ce7u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8cea  je 0xd8c65
    X86_AT(c, 0xd8ceau);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8c65u); goto L_d8c65; }
    X86_TICK(c, 7);
    // 0d8cf0  cmp esi, 0x1e
    X86_AT(c, 0xd8cf0u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d8cf3  je 0xd8c65
    X86_AT(c, 0xd8cf3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8c65u); goto L_d8c65; }
    X86_TICK(c, 15);
    // 0d8cf9  dec dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8cf9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d8cff  inc esi
    X86_AT(c, 0xd8cffu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d8d00  jmp 0xd8c65
    X86_AT(c, 0xd8d00u);
    X86_POLL(c, 0xd8c65u); goto L_d8c65;
L_d8d05:
    X86_TICK(c, 11);
    // 0d8d05  push 0xb
    X86_AT(c, 0xd8d05u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8d07  push 4
    X86_AT(c, 0xd8d07u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8d09  call 0xcac40
    X86_AT(c, 0xd8d09u);
    push32(c, 0xd8d0eu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8d0eu);
    X86_TICK(c, 11);
    // 0d8d0e  push 5
    X86_AT(c, 0xd8d0eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8d10  push 0x28
    X86_AT(c, 0xd8d10u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8d12  call 0xcc814
    X86_AT(c, 0xd8d12u);
    push32(c, 0xd8d17u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8d17u);
    X86_TICK(c, 13);
    // 0d8d17  push 2
    X86_AT(c, 0xd8d17u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8d19  push esi
    X86_AT(c, 0xd8d19u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8d1a  push 4
    X86_AT(c, 0xd8d1au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8d1c  call 0xc8cb8
    X86_AT(c, 0xd8d1cu);
    push32(c, 0xd8d21u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8d21u);
    X86_TICK(c, 11);
    // 0d8d21  push 8
    X86_AT(c, 0xd8d21u);
    { uint32_t v = 0x8u; push32(c, v); }
    // 0d8d23  push 0x34
    X86_AT(c, 0xd8d23u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8d25  call 0xcc814
    X86_AT(c, 0xd8d25u);
    push32(c, 0xd8d2au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8d2au);
    X86_TICK(c, 38);
    // 0d8d2a  push 2
    X86_AT(c, 0xd8d2au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8d2c  imul eax, edi, 0x21a
    X86_AT(c, 0xd8d2cu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8d32  push dword ptr [eax + 0xb0526]
    X86_AT(c, 0xd8d32u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0526u))); push32(c, v); }
    // 0d8d38  push 4
    X86_AT(c, 0xd8d38u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8d3a  call 0xc8cb8
    X86_AT(c, 0xd8d3au);
    push32(c, 0xd8d3fu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8d3fu);
    X86_TICK(c, 9);
    // 0d8d3f  add esp, 0x30
    X86_AT(c, 0xd8d3fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d8d42  cmp bl, 5
    X86_AT(c, 0xd8d42u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8d45  jne 0xd8d53
    X86_AT(c, 0xd8d45u);
    if (x86_cc(c, 5)) { goto L_d8d53; }
L_d8d47:
    X86_TICK(c, 9);
    // 0d8d47  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xd8d47u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0d8d4e  jmp 0xd89fa
    X86_AT(c, 0xd8d4eu);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d8d53:
    X86_TICK(c, 7);
    // 0d8d53  cmp bl, 1
    X86_AT(c, 0xd8d53u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8d56  je 0xd985e
    X86_AT(c, 0xd8d56u);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d8d5c  cmp bl, 6
    X86_AT(c, 0xd8d5cu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8d5f  je 0xd8f7b
    X86_AT(c, 0xd8d5fu);
    if (x86_cc(c, 4)) { goto L_d8f7b; }
    X86_TICK(c, 7);
    // 0d8d65  cmp bl, 4
    X86_AT(c, 0xd8d65u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8d68  jne 0xd89fa
    X86_AT(c, 0xd8d68u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d8d6e  jmp 0xd8f7b
    X86_AT(c, 0xd8d6eu);
    goto L_d8f7b;
L_d8d73:
    X86_TICK(c, 11);
    // 0d8d73  push 0xe
    X86_AT(c, 0xd8d73u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8d75  push 4
    X86_AT(c, 0xd8d75u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8d77  call 0xcac40
    X86_AT(c, 0xd8d77u);
    push32(c, 0xd8d7cu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8d7cu);
    X86_TICK(c, 2);
    // 0d8d7c  add esp, 8
    X86_AT(c, 0xd8d7cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8d7f:
    X86_TICK(c, 11);
    // 0d8d7f  push 5
    X86_AT(c, 0xd8d7fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8d81  push 0x28
    X86_AT(c, 0xd8d81u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8d83  call 0xcc814
    X86_AT(c, 0xd8d83u);
    push32(c, 0xd8d88u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8d88u);
    X86_TICK(c, 13);
    // 0d8d88  push 2
    X86_AT(c, 0xd8d88u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8d8a  push esi
    X86_AT(c, 0xd8d8au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8d8b  push 4
    X86_AT(c, 0xd8d8bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8d8d  call 0xc8cb8
    X86_AT(c, 0xd8d8du);
    push32(c, 0xd8d92u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8d92u);
    X86_TICK(c, 11);
    // 0d8d92  push 9
    X86_AT(c, 0xd8d92u);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d8d94  push 0x34
    X86_AT(c, 0xd8d94u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8d96  call 0xcc814
    X86_AT(c, 0xd8d96u);
    push32(c, 0xd8d9bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8d9bu);
    X86_TICK(c, 40);
    // 0d8d9b  push 2
    X86_AT(c, 0xd8d9bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8d9d  imul eax, edi, 0x21a
    X86_AT(c, 0xd8d9du);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8da3  push dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8da3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au))); push32(c, v); }
    // 0d8da9  push 4
    X86_AT(c, 0xd8da9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8dab  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8dabu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8dae  call 0xc8cb8
    X86_AT(c, 0xd8daeu);
    push32(c, 0xd8db3u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8db3u);
    X86_TICK(c, 9);
    // 0d8db3  push 4
    X86_AT(c, 0xd8db3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8db5  call 0xc81e4
    X86_AT(c, 0xd8db5u);
    push32(c, 0xd8dbau); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8dbau);
    X86_TICK(c, 12);
    // 0d8dba  xchg ebx, eax
    X86_AT(c, 0xd8dbau);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8dbb  add esp, 0x2c
    X86_AT(c, 0xd8dbbu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8dbe  cmp bl, 5
    X86_AT(c, 0xd8dbeu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8dc1  je 0xd8e1f
    X86_AT(c, 0xd8dc1u);
    if (x86_cc(c, 4)) { goto L_d8e1f; }
    X86_TICK(c, 7);
    // 0d8dc3  cmp bl, 6
    X86_AT(c, 0xd8dc3u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8dc6  je 0xd8e1f
    X86_AT(c, 0xd8dc6u);
    if (x86_cc(c, 4)) { goto L_d8e1f; }
    X86_TICK(c, 7);
    // 0d8dc8  cmp bl, 4
    X86_AT(c, 0xd8dc8u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8dcb  je 0xd8e1f
    X86_AT(c, 0xd8dcbu);
    if (x86_cc(c, 4)) { goto L_d8e1f; }
    X86_TICK(c, 7);
    // 0d8dcd  cmp bl, 1
    X86_AT(c, 0xd8dcdu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8dd0  je 0xd8e1f
    X86_AT(c, 0xd8dd0u);
    if (x86_cc(c, 4)) { goto L_d8e1f; }
    X86_TICK(c, 7);
    // 0d8dd2  cmp bl, 7
    X86_AT(c, 0xd8dd2u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d8dd5  jne 0xd8df0
    X86_AT(c, 0xd8dd5u);
    if (x86_cc(c, 5)) { goto L_d8df0; }
    X86_TICK(c, 15);
    // 0d8dd7  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd8dd7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d8dda  mov edx, dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8ddau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au)));
    // 0d8de0  cmp edx, 0x19
    X86_AT(c, 0xd8de0u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d8de3  je 0xd8d7f
    X86_AT(c, 0xd8de3u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8d7fu); goto L_d8d7f; }
    X86_TICK(c, 7);
    // 0d8de5  and esi, esi
    X86_AT(c, 0xd8de5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d8de7  je 0xd8d7f
    X86_AT(c, 0xd8de7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8d7fu); goto L_d8d7f; }
    X86_TICK(c, 8);
    // 0d8de9  inc dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8de9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8def  dec esi
    X86_AT(c, 0xd8defu);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d8df0:
    X86_TICK(c, 7);
    // 0d8df0  cmp bl, 3
    X86_AT(c, 0xd8df0u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d8df3  jne 0xd8d7f
    X86_AT(c, 0xd8df3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8d7fu); goto L_d8d7f; }
    X86_TICK(c, 33);
    // 0d8df5  imul eax, edi, 0x21a
    X86_AT(c, 0xd8df5u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8dfb  mov edx, dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8dfbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au)));
    // 0d8e01  cmp edx, 0xa
    X86_AT(c, 0xd8e01u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8e04  je 0xd8d7f
    X86_AT(c, 0xd8e04u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8d7fu); goto L_d8d7f; }
    X86_TICK(c, 7);
    // 0d8e0a  cmp esi, 0x1e
    X86_AT(c, 0xd8e0au);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d8e0d  je 0xd8d7f
    X86_AT(c, 0xd8e0du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8d7fu); goto L_d8d7f; }
    X86_TICK(c, 15);
    // 0d8e13  dec dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8e13u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d8e19  inc esi
    X86_AT(c, 0xd8e19u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d8e1a  jmp 0xd8d7f
    X86_AT(c, 0xd8e1au);
    X86_POLL(c, 0xd8d7fu); goto L_d8d7f;
L_d8e1f:
    X86_TICK(c, 11);
    // 0d8e1f  push 0xb
    X86_AT(c, 0xd8e1fu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8e21  push 4
    X86_AT(c, 0xd8e21u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8e23  call 0xcac40
    X86_AT(c, 0xd8e23u);
    push32(c, 0xd8e28u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8e28u);
    X86_TICK(c, 11);
    // 0d8e28  push 5
    X86_AT(c, 0xd8e28u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8e2a  push 0x28
    X86_AT(c, 0xd8e2au);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8e2c  call 0xcc814
    X86_AT(c, 0xd8e2cu);
    push32(c, 0xd8e31u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8e31u);
    X86_TICK(c, 13);
    // 0d8e31  push 2
    X86_AT(c, 0xd8e31u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8e33  push esi
    X86_AT(c, 0xd8e33u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8e34  push 4
    X86_AT(c, 0xd8e34u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8e36  call 0xc8cb8
    X86_AT(c, 0xd8e36u);
    push32(c, 0xd8e3bu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8e3bu);
    X86_TICK(c, 11);
    // 0d8e3b  push 9
    X86_AT(c, 0xd8e3bu);
    { uint32_t v = 0x9u; push32(c, v); }
    // 0d8e3d  push 0x34
    X86_AT(c, 0xd8e3du);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8e3f  call 0xcc814
    X86_AT(c, 0xd8e3fu);
    push32(c, 0xd8e44u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8e44u);
    X86_TICK(c, 38);
    // 0d8e44  push 2
    X86_AT(c, 0xd8e44u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8e46  imul eax, edi, 0x21a
    X86_AT(c, 0xd8e46u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8e4c  push dword ptr [eax + 0xb052a]
    X86_AT(c, 0xd8e4cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Au))); push32(c, v); }
    // 0d8e52  push 4
    X86_AT(c, 0xd8e52u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8e54  call 0xc8cb8
    X86_AT(c, 0xd8e54u);
    push32(c, 0xd8e59u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8e59u);
    X86_TICK(c, 9);
    // 0d8e59  add esp, 0x30
    X86_AT(c, 0xd8e59u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d8e5c  cmp bl, 5
    X86_AT(c, 0xd8e5cu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8e5f  jne 0xd8e6d
    X86_AT(c, 0xd8e5fu);
    if (x86_cc(c, 5)) { goto L_d8e6d; }
L_d8e61:
    X86_TICK(c, 9);
    // 0d8e61  mov dword ptr [ebp - 4], 2
    X86_AT(c, 0xd8e61u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x2u);
    // 0d8e68  jmp 0xd89fa
    X86_AT(c, 0xd8e68u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d8e6d:
    X86_TICK(c, 7);
    // 0d8e6d  cmp bl, 1
    X86_AT(c, 0xd8e6du);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8e70  je 0xd985e
    X86_AT(c, 0xd8e70u);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d8e76  cmp bl, 6
    X86_AT(c, 0xd8e76u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8e79  je 0xd9098
    X86_AT(c, 0xd8e79u);
    if (x86_cc(c, 4)) { goto L_d9098; }
    X86_TICK(c, 7);
    // 0d8e7f  cmp bl, 4
    X86_AT(c, 0xd8e7fu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8e82  jne 0xd89fa
    X86_AT(c, 0xd8e82u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d8e88  jmp 0xd9098
    X86_AT(c, 0xd8e88u);
    goto L_d9098;
L_d8e8d:
    X86_TICK(c, 11);
    // 0d8e8d  push 0xe
    X86_AT(c, 0xd8e8du);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8e8f  push 4
    X86_AT(c, 0xd8e8fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8e91  call 0xcac40
    X86_AT(c, 0xd8e91u);
    push32(c, 0xd8e96u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8e96u);
    X86_TICK(c, 2);
    // 0d8e96  add esp, 8
    X86_AT(c, 0xd8e96u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8e99:
    X86_TICK(c, 11);
    // 0d8e99  push 5
    X86_AT(c, 0xd8e99u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8e9b  push 0x28
    X86_AT(c, 0xd8e9bu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8e9d  call 0xcc814
    X86_AT(c, 0xd8e9du);
    push32(c, 0xd8ea2u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8ea2u);
    X86_TICK(c, 13);
    // 0d8ea2  push 2
    X86_AT(c, 0xd8ea2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8ea4  push esi
    X86_AT(c, 0xd8ea4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8ea5  push 4
    X86_AT(c, 0xd8ea5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8ea7  call 0xc8cb8
    X86_AT(c, 0xd8ea7u);
    push32(c, 0xd8eacu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8eacu);
    X86_TICK(c, 11);
    // 0d8eac  push 0xa
    X86_AT(c, 0xd8eacu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d8eae  push 0x34
    X86_AT(c, 0xd8eaeu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8eb0  call 0xcc814
    X86_AT(c, 0xd8eb0u);
    push32(c, 0xd8eb5u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8eb5u);
    X86_TICK(c, 40);
    // 0d8eb5  push 2
    X86_AT(c, 0xd8eb5u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8eb7  imul eax, edi, 0x21a
    X86_AT(c, 0xd8eb7u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8ebd  push dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8ebdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu))); push32(c, v); }
    // 0d8ec3  push 4
    X86_AT(c, 0xd8ec3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8ec5  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8ec5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8ec8  call 0xc8cb8
    X86_AT(c, 0xd8ec8u);
    push32(c, 0xd8ecdu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8ecdu);
    X86_TICK(c, 9);
    // 0d8ecd  push 4
    X86_AT(c, 0xd8ecdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8ecf  call 0xc81e4
    X86_AT(c, 0xd8ecfu);
    push32(c, 0xd8ed4u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8ed4u);
    X86_TICK(c, 12);
    // 0d8ed4  xchg ebx, eax
    X86_AT(c, 0xd8ed4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8ed5  add esp, 0x2c
    X86_AT(c, 0xd8ed5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8ed8  cmp bl, 5
    X86_AT(c, 0xd8ed8u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8edb  je 0xd8f39
    X86_AT(c, 0xd8edbu);
    if (x86_cc(c, 4)) { goto L_d8f39; }
    X86_TICK(c, 7);
    // 0d8edd  cmp bl, 6
    X86_AT(c, 0xd8eddu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8ee0  je 0xd8f39
    X86_AT(c, 0xd8ee0u);
    if (x86_cc(c, 4)) { goto L_d8f39; }
    X86_TICK(c, 7);
    // 0d8ee2  cmp bl, 4
    X86_AT(c, 0xd8ee2u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8ee5  je 0xd8f39
    X86_AT(c, 0xd8ee5u);
    if (x86_cc(c, 4)) { goto L_d8f39; }
    X86_TICK(c, 7);
    // 0d8ee7  cmp bl, 1
    X86_AT(c, 0xd8ee7u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8eea  je 0xd8f39
    X86_AT(c, 0xd8eeau);
    if (x86_cc(c, 4)) { goto L_d8f39; }
    X86_TICK(c, 7);
    // 0d8eec  cmp bl, 7
    X86_AT(c, 0xd8eecu);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d8eef  jne 0xd8f0a
    X86_AT(c, 0xd8eefu);
    if (x86_cc(c, 5)) { goto L_d8f0a; }
    X86_TICK(c, 15);
    // 0d8ef1  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd8ef1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d8ef4  mov edx, dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8ef4u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu)));
    // 0d8efa  cmp edx, 0x19
    X86_AT(c, 0xd8efau);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d8efd  je 0xd8e99
    X86_AT(c, 0xd8efdu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8e99u); goto L_d8e99; }
    X86_TICK(c, 7);
    // 0d8eff  and esi, esi
    X86_AT(c, 0xd8effu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d8f01  je 0xd8e99
    X86_AT(c, 0xd8f01u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8e99u); goto L_d8e99; }
    X86_TICK(c, 8);
    // 0d8f03  inc dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8f03u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d8f09  dec esi
    X86_AT(c, 0xd8f09u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d8f0a:
    X86_TICK(c, 7);
    // 0d8f0a  cmp bl, 3
    X86_AT(c, 0xd8f0au);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d8f0d  jne 0xd8e99
    X86_AT(c, 0xd8f0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8e99u); goto L_d8e99; }
    X86_TICK(c, 33);
    // 0d8f0f  imul eax, edi, 0x21a
    X86_AT(c, 0xd8f0fu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8f15  mov edx, dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8f15u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu)));
    // 0d8f1b  cmp edx, 0xa
    X86_AT(c, 0xd8f1bu);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d8f1e  je 0xd8e99
    X86_AT(c, 0xd8f1eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8e99u); goto L_d8e99; }
    X86_TICK(c, 7);
    // 0d8f24  cmp esi, 0x1e
    X86_AT(c, 0xd8f24u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d8f27  je 0xd8e99
    X86_AT(c, 0xd8f27u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8e99u); goto L_d8e99; }
    X86_TICK(c, 15);
    // 0d8f2d  dec dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8f2du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d8f33  inc esi
    X86_AT(c, 0xd8f33u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d8f34  jmp 0xd8e99
    X86_AT(c, 0xd8f34u);
    X86_POLL(c, 0xd8e99u); goto L_d8e99;
L_d8f39:
    X86_TICK(c, 11);
    // 0d8f39  push 0xb
    X86_AT(c, 0xd8f39u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8f3b  push 4
    X86_AT(c, 0xd8f3bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8f3d  call 0xcac40
    X86_AT(c, 0xd8f3du);
    push32(c, 0xd8f42u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8f42u);
    X86_TICK(c, 11);
    // 0d8f42  push 5
    X86_AT(c, 0xd8f42u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8f44  push 0x28
    X86_AT(c, 0xd8f44u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8f46  call 0xcc814
    X86_AT(c, 0xd8f46u);
    push32(c, 0xd8f4bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8f4bu);
    X86_TICK(c, 13);
    // 0d8f4b  push 2
    X86_AT(c, 0xd8f4bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8f4d  push esi
    X86_AT(c, 0xd8f4du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8f4e  push 4
    X86_AT(c, 0xd8f4eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8f50  call 0xc8cb8
    X86_AT(c, 0xd8f50u);
    push32(c, 0xd8f55u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8f55u);
    X86_TICK(c, 11);
    // 0d8f55  push 0xa
    X86_AT(c, 0xd8f55u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d8f57  push 0x34
    X86_AT(c, 0xd8f57u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8f59  call 0xcc814
    X86_AT(c, 0xd8f59u);
    push32(c, 0xd8f5eu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8f5eu);
    X86_TICK(c, 38);
    // 0d8f5e  push 2
    X86_AT(c, 0xd8f5eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8f60  imul eax, edi, 0x21a
    X86_AT(c, 0xd8f60u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8f66  push dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd8f66u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu))); push32(c, v); }
    // 0d8f6c  push 4
    X86_AT(c, 0xd8f6cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8f6e  call 0xc8cb8
    X86_AT(c, 0xd8f6eu);
    push32(c, 0xd8f73u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8f73u);
    X86_TICK(c, 9);
    // 0d8f73  add esp, 0x30
    X86_AT(c, 0xd8f73u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d8f76  cmp bl, 5
    X86_AT(c, 0xd8f76u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8f79  jne 0xd8f87
    X86_AT(c, 0xd8f79u);
    if (x86_cc(c, 5)) { goto L_d8f87; }
L_d8f7b:
    X86_TICK(c, 9);
    // 0d8f7b  mov dword ptr [ebp - 4], 3
    X86_AT(c, 0xd8f7bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x3u);
    // 0d8f82  jmp 0xd89fa
    X86_AT(c, 0xd8f82u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d8f87:
    X86_TICK(c, 7);
    // 0d8f87  cmp bl, 1
    X86_AT(c, 0xd8f87u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d8f8a  je 0xd985e
    X86_AT(c, 0xd8f8au);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d8f90  cmp bl, 6
    X86_AT(c, 0xd8f90u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8f93  je 0xd8f9e
    X86_AT(c, 0xd8f93u);
    if (x86_cc(c, 4)) { goto L_d8f9e; }
    X86_TICK(c, 7);
    // 0d8f95  cmp bl, 4
    X86_AT(c, 0xd8f95u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d8f98  jne 0xd89fa
    X86_AT(c, 0xd8f98u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
L_d8f9e:
    X86_TICK(c, 9);
    // 0d8f9e  mov dword ptr [ebp - 4], 5
    X86_AT(c, 0xd8f9eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x5u);
    // 0d8fa5  jmp 0xd89fa
    X86_AT(c, 0xd8fa5u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d8faa:
    X86_TICK(c, 11);
    // 0d8faa  push 0xe
    X86_AT(c, 0xd8faau);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d8fac  push 4
    X86_AT(c, 0xd8facu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8fae  call 0xcac40
    X86_AT(c, 0xd8faeu);
    push32(c, 0xd8fb3u); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd8fb3u);
    X86_TICK(c, 2);
    // 0d8fb3  add esp, 8
    X86_AT(c, 0xd8fb3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d8fb6:
    X86_TICK(c, 11);
    // 0d8fb6  push 5
    X86_AT(c, 0xd8fb6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d8fb8  push 0x28
    X86_AT(c, 0xd8fb8u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d8fba  call 0xcc814
    X86_AT(c, 0xd8fbau);
    push32(c, 0xd8fbfu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8fbfu);
    X86_TICK(c, 13);
    // 0d8fbf  push 2
    X86_AT(c, 0xd8fbfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8fc1  push esi
    X86_AT(c, 0xd8fc1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d8fc2  push 4
    X86_AT(c, 0xd8fc2u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8fc4  call 0xc8cb8
    X86_AT(c, 0xd8fc4u);
    push32(c, 0xd8fc9u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8fc9u);
    X86_TICK(c, 11);
    // 0d8fc9  push 0xb
    X86_AT(c, 0xd8fc9u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d8fcb  push 0x34
    X86_AT(c, 0xd8fcbu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d8fcd  call 0xcc814
    X86_AT(c, 0xd8fcdu);
    push32(c, 0xd8fd2u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd8fd2u);
    X86_TICK(c, 40);
    // 0d8fd2  push 2
    X86_AT(c, 0xd8fd2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d8fd4  imul eax, edi, 0x21a
    X86_AT(c, 0xd8fd4u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d8fda  push dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd8fdau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u))); push32(c, v); }
    // 0d8fe0  push 4
    X86_AT(c, 0xd8fe0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8fe2  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd8fe2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d8fe5  call 0xc8cb8
    X86_AT(c, 0xd8fe5u);
    push32(c, 0xd8feau); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd8feau);
    X86_TICK(c, 9);
    // 0d8fea  push 4
    X86_AT(c, 0xd8feau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d8fec  call 0xc81e4
    X86_AT(c, 0xd8fecu);
    push32(c, 0xd8ff1u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd8ff1u);
    X86_TICK(c, 12);
    // 0d8ff1  xchg ebx, eax
    X86_AT(c, 0xd8ff1u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d8ff2  add esp, 0x2c
    X86_AT(c, 0xd8ff2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2Cu, 0, 4); }
    // 0d8ff5  cmp bl, 5
    X86_AT(c, 0xd8ff5u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d8ff8  je 0xd9056
    X86_AT(c, 0xd8ff8u);
    if (x86_cc(c, 4)) { goto L_d9056; }
    X86_TICK(c, 7);
    // 0d8ffa  cmp bl, 6
    X86_AT(c, 0xd8ffau);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d8ffd  je 0xd9056
    X86_AT(c, 0xd8ffdu);
    if (x86_cc(c, 4)) { goto L_d9056; }
    X86_TICK(c, 7);
    // 0d8fff  cmp bl, 4
    X86_AT(c, 0xd8fffu);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d9002  je 0xd9056
    X86_AT(c, 0xd9002u);
    if (x86_cc(c, 4)) { goto L_d9056; }
    X86_TICK(c, 7);
    // 0d9004  cmp bl, 1
    X86_AT(c, 0xd9004u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d9007  je 0xd9056
    X86_AT(c, 0xd9007u);
    if (x86_cc(c, 4)) { goto L_d9056; }
    X86_TICK(c, 7);
    // 0d9009  cmp bl, 7
    X86_AT(c, 0xd9009u);
    (void)x86_sub(c, g8(c, 3), 0x7u, 0, 1);
    // 0d900c  jne 0xd9027
    X86_AT(c, 0xd900cu);
    if (x86_cc(c, 5)) { goto L_d9027; }
    X86_TICK(c, 15);
    // 0d900e  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd900eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d9011  mov edx, dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd9011u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u)));
    // 0d9017  cmp edx, 0x19
    X86_AT(c, 0xd9017u);
    (void)x86_sub(c, c.r[2], 0x19u, 0, 4);
    // 0d901a  je 0xd8fb6
    X86_AT(c, 0xd901au);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8fb6u); goto L_d8fb6; }
    X86_TICK(c, 7);
    // 0d901c  and esi, esi
    X86_AT(c, 0xd901cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0d901e  je 0xd8fb6
    X86_AT(c, 0xd901eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8fb6u); goto L_d8fb6; }
    X86_TICK(c, 8);
    // 0d9020  inc dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd9020u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d9026  dec esi
    X86_AT(c, 0xd9026u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_d9027:
    X86_TICK(c, 7);
    // 0d9027  cmp bl, 3
    X86_AT(c, 0xd9027u);
    (void)x86_sub(c, g8(c, 3), 0x3u, 0, 1);
    // 0d902a  jne 0xd8fb6
    X86_AT(c, 0xd902au);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd8fb6u); goto L_d8fb6; }
    X86_TICK(c, 33);
    // 0d902c  imul eax, edi, 0x21a
    X86_AT(c, 0xd902cu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9032  mov edx, dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd9032u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u)));
    // 0d9038  cmp edx, 0xa
    X86_AT(c, 0xd9038u);
    (void)x86_sub(c, c.r[2], 0xAu, 0, 4);
    // 0d903b  je 0xd8fb6
    X86_AT(c, 0xd903bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8fb6u); goto L_d8fb6; }
    X86_TICK(c, 7);
    // 0d9041  cmp esi, 0x1e
    X86_AT(c, 0xd9041u);
    (void)x86_sub(c, c.r[6], 0x1Eu, 0, 4);
    // 0d9044  je 0xd8fb6
    X86_AT(c, 0xd9044u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd8fb6u); goto L_d8fb6; }
    X86_TICK(c, 15);
    // 0d904a  dec dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd904au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0d9050  inc esi
    X86_AT(c, 0xd9050u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0d9051  jmp 0xd8fb6
    X86_AT(c, 0xd9051u);
    X86_POLL(c, 0xd8fb6u); goto L_d8fb6;
L_d9056:
    X86_TICK(c, 11);
    // 0d9056  push 0xb
    X86_AT(c, 0xd9056u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d9058  push 4
    X86_AT(c, 0xd9058u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d905a  call 0xcac40
    X86_AT(c, 0xd905au);
    push32(c, 0xd905fu); x86_call_known(c, 0xcac40u, f_000cac40); X86_RET(c, 0xd905fu);
    X86_TICK(c, 11);
    // 0d905f  push 5
    X86_AT(c, 0xd905fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9061  push 0x28
    X86_AT(c, 0xd9061u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9063  call 0xcc814
    X86_AT(c, 0xd9063u);
    push32(c, 0xd9068u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9068u);
    X86_TICK(c, 13);
    // 0d9068  push 2
    X86_AT(c, 0xd9068u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d906a  push esi
    X86_AT(c, 0xd906au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0d906b  push 4
    X86_AT(c, 0xd906bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d906d  call 0xc8cb8
    X86_AT(c, 0xd906du);
    push32(c, 0xd9072u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd9072u);
    X86_TICK(c, 11);
    // 0d9072  push 0xb
    X86_AT(c, 0xd9072u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d9074  push 0x34
    X86_AT(c, 0xd9074u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d9076  call 0xcc814
    X86_AT(c, 0xd9076u);
    push32(c, 0xd907bu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd907bu);
    X86_TICK(c, 38);
    // 0d907b  push 2
    X86_AT(c, 0xd907bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d907d  imul eax, edi, 0x21a
    X86_AT(c, 0xd907du);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9083  push dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd9083u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u))); push32(c, v); }
    // 0d9089  push 4
    X86_AT(c, 0xd9089u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d908b  call 0xc8cb8
    X86_AT(c, 0xd908bu);
    push32(c, 0xd9090u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd9090u);
    X86_TICK(c, 9);
    // 0d9090  add esp, 0x30
    X86_AT(c, 0xd9090u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x30u, 0, 4); }
    // 0d9093  cmp bl, 5
    X86_AT(c, 0xd9093u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d9096  jne 0xd90a4
    X86_AT(c, 0xd9096u);
    if (x86_cc(c, 5)) { goto L_d90a4; }
L_d9098:
    X86_TICK(c, 9);
    // 0d9098  mov dword ptr [ebp - 4], 4
    X86_AT(c, 0xd9098u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x4u);
    // 0d909f  jmp 0xd89fa
    X86_AT(c, 0xd909fu);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d90a4:
    X86_TICK(c, 7);
    // 0d90a4  cmp bl, 1
    X86_AT(c, 0xd90a4u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d90a7  je 0xd985e
    X86_AT(c, 0xd90a7u);
    if (x86_cc(c, 4)) { goto L_d985e; }
    X86_TICK(c, 7);
    // 0d90ad  cmp bl, 6
    X86_AT(c, 0xd90adu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d90b0  je 0xd9962
    X86_AT(c, 0xd90b0u);
    if (x86_cc(c, 4)) { goto L_d9962; }
    X86_TICK(c, 7);
    // 0d90b6  cmp bl, 4
    X86_AT(c, 0xd90b6u);
    (void)x86_sub(c, g8(c, 3), 0x4u, 0, 1);
    // 0d90b9  jne 0xd89fa
    X86_AT(c, 0xd90b9u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd89fau); goto L_d89fa; }
    X86_TICK(c, 7);
    // 0d90bf  jmp 0xd9962
    X86_AT(c, 0xd90bfu);
    goto L_d9962;
L_d90c4:
    X86_TICK(c, 27);
    // 0d90c4  push 0xa
    X86_AT(c, 0xd90c4u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d90c6  push 0xf
    X86_AT(c, 0xd90c6u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d90c8  push 0xb
    X86_AT(c, 0xd90c8u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d90ca  push 5
    X86_AT(c, 0xd90cau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d90cc  push 0x19
    X86_AT(c, 0xd90ccu);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0d90ce  push 0x54
    X86_AT(c, 0xd90ceu);
    { uint32_t v = 0x54u; push32(c, v); }
    // 0d90d0  push 0xd0
    X86_AT(c, 0xd90d0u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d90d5  push 0x128
    X86_AT(c, 0xd90d5u);
    { uint32_t v = 0x128u; push32(c, v); }
    // 0d90da  push 0xd0
    X86_AT(c, 0xd90dau);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d90df  push 5
    X86_AT(c, 0xd90dfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d90e1  call 0xc9fbc
    X86_AT(c, 0xd90e1u);
    push32(c, 0xd90e6u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd90e6u);
    X86_TICK(c, 9);
    // 0d90e6  push 5
    X86_AT(c, 0xd90e6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d90e8  call 0xca0a0
    X86_AT(c, 0xd90e8u);
    push32(c, 0xd90edu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd90edu);
    X86_TICK(c, 9);
    // 0d90ed  push 5
    X86_AT(c, 0xd90edu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d90ef  call 0xca100
    X86_AT(c, 0xd90efu);
    push32(c, 0xd90f4u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd90f4u);
    X86_TICK(c, 9);
    // 0d90f4  push 5
    X86_AT(c, 0xd90f4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d90f6  call 0xca0a0
    X86_AT(c, 0xd90f6u);
    push32(c, 0xd90fbu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd90fbu);
    X86_TICK(c, 13);
    // 0d90fb  push 0
    X86_AT(c, 0xd90fbu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d90fd  push 4
    X86_AT(c, 0xd90fdu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d90ff  push 5
    X86_AT(c, 0xd90ffu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9101  call 0xca9c8
    X86_AT(c, 0xd9101u);
    push32(c, 0xd9106u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9106u);
    X86_TICK(c, 13);
    // 0d9106  add esp, 0x40
    X86_AT(c, 0xd9106u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d9109  push 0xb3d8
    X86_AT(c, 0xd9109u);
    { uint32_t v = 0xB3D8u; push32(c, v); }
    // 0d910e  push 5
    X86_AT(c, 0xd910eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9110  call 0xc8cdc
    X86_AT(c, 0xd9110u);
    push32(c, 0xd9115u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9115u);
    X86_TICK(c, 13);
    // 0d9115  push 1
    X86_AT(c, 0xd9115u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d9117  push 6
    X86_AT(c, 0xd9117u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d9119  push 5
    X86_AT(c, 0xd9119u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d911b  call 0xca9c8
    X86_AT(c, 0xd911bu);
    push32(c, 0xd9120u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9120u);
    X86_TICK(c, 11);
    // 0d9120  push 0xb3f4
    X86_AT(c, 0xd9120u);
    { uint32_t v = 0xB3F4u; push32(c, v); }
    // 0d9125  push 5
    X86_AT(c, 0xd9125u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9127  call 0xc8cdc
    X86_AT(c, 0xd9127u);
    push32(c, 0xd912cu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd912cu);
    X86_TICK(c, 13);
    // 0d912c  push 2
    X86_AT(c, 0xd912cu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d912e  push 6
    X86_AT(c, 0xd912eu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d9130  push 5
    X86_AT(c, 0xd9130u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9132  call 0xca9c8
    X86_AT(c, 0xd9132u);
    push32(c, 0xd9137u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9137u);
    X86_TICK(c, 11);
    // 0d9137  push 0xb40c
    X86_AT(c, 0xd9137u);
    { uint32_t v = 0xB40Cu; push32(c, v); }
    // 0d913c  push 5
    X86_AT(c, 0xd913cu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d913e  call 0xc8cdc
    X86_AT(c, 0xd913eu);
    push32(c, 0xd9143u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9143u);
    X86_TICK(c, 13);
    // 0d9143  push 3
    X86_AT(c, 0xd9143u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d9145  push 6
    X86_AT(c, 0xd9145u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d9147  push 5
    X86_AT(c, 0xd9147u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9149  call 0xca9c8
    X86_AT(c, 0xd9149u);
    push32(c, 0xd914eu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd914eu);
    X86_TICK(c, 13);
    // 0d914e  add esp, 0x3c
    X86_AT(c, 0xd914eu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d9151  push 0xb424
    X86_AT(c, 0xd9151u);
    { uint32_t v = 0xB424u; push32(c, v); }
    // 0d9156  push 5
    X86_AT(c, 0xd9156u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9158  call 0xc8cdc
    X86_AT(c, 0xd9158u);
    push32(c, 0xd915du); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd915du);
    X86_TICK(c, 13);
    // 0d915d  push 4
    X86_AT(c, 0xd915du);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d915f  push 6
    X86_AT(c, 0xd915fu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d9161  push 5
    X86_AT(c, 0xd9161u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9163  call 0xca9c8
    X86_AT(c, 0xd9163u);
    push32(c, 0xd9168u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9168u);
    X86_TICK(c, 11);
    // 0d9168  push 0xb440
    X86_AT(c, 0xd9168u);
    { uint32_t v = 0xB440u; push32(c, v); }
    // 0d916d  push 5
    X86_AT(c, 0xd916du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d916f  call 0xc8cdc
    X86_AT(c, 0xd916fu);
    push32(c, 0xd9174u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9174u);
    X86_TICK(c, 9);
    // 0d9174  push 4
    X86_AT(c, 0xd9174u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9176  call 0xca0a0
    X86_AT(c, 0xd9176u);
    push32(c, 0xd917bu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd917bu);
    X86_TICK(c, 13);
    // 0d917b  add esp, 0x20
    X86_AT(c, 0xd917bu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d917e  push 0xc
    X86_AT(c, 0xd917eu);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d9180  push 0x28
    X86_AT(c, 0xd9180u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9182  call 0xcc814
    X86_AT(c, 0xd9182u);
    push32(c, 0xd9187u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9187u);
    X86_TICK(c, 11);
    // 0d9187  push 0xb45c
    X86_AT(c, 0xd9187u);
    { uint32_t v = 0xB45Cu; push32(c, v); }
    // 0d918c  push 4
    X86_AT(c, 0xd918cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d918e  call 0xca414
    X86_AT(c, 0xd918eu);
    push32(c, 0xd9193u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd9193u);
    X86_TICK(c, 2);
    // 0d9193  add esp, 0x10
    X86_AT(c, 0xd9193u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d9196:
    X86_TICK(c, 11);
    // 0d9196  push 0xc
    X86_AT(c, 0xd9196u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d9198  push 0x28
    X86_AT(c, 0xd9198u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d919a  call 0xcc814
    X86_AT(c, 0xd919au);
    push32(c, 0xd919fu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd919fu);
    X86_TICK(c, 9);
    // 0d919f  push 4
    X86_AT(c, 0xd919fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d91a1  call 0xc79a4
    X86_AT(c, 0xd91a1u);
    push32(c, 0xd91a6u); x86_call_known(c, 0xc79a4u, f_000c79a4); X86_RET(c, 0xd91a6u);
    X86_TICK(c, 12);
    // 0d91a6  xchg ebx, eax
    X86_AT(c, 0xd91a6u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d91a7  add esp, 0xc
    X86_AT(c, 0xd91a7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d91aa  cmp bl, 5
    X86_AT(c, 0xd91aau);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d91ad  je 0xd929e
    X86_AT(c, 0xd91adu);
    if (x86_cc(c, 4)) { goto L_d929e; }
    X86_TICK(c, 7);
    // 0d91b3  cmp bl, 6
    X86_AT(c, 0xd91b3u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d91b6  je 0xd929e
    X86_AT(c, 0xd91b6u);
    if (x86_cc(c, 4)) { goto L_d929e; }
    X86_TICK(c, 7);
    // 0d91bc  cmp bl, 1
    X86_AT(c, 0xd91bcu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d91bf  je 0xd929e
    X86_AT(c, 0xd91bfu);
    if (x86_cc(c, 4)) { goto L_d929e; }
    X86_TICK(c, 17);
    // 0d91c5  lea eax, [ebp - 0x2d]
    X86_AT(c, 0xd91c5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD3u);
    // 0d91c8  push eax
    X86_AT(c, 0xd91c8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d91c9  push ebx
    X86_AT(c, 0xd91c9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d91ca  push 4
    X86_AT(c, 0xd91cau);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d91cc  push 0xb1568
    X86_AT(c, 0xd91ccu);
    { uint32_t v = 0xB1568u; push32(c, v); }
    // 0d91d1  call 0xc8a68
    X86_AT(c, 0xd91d1u);
    push32(c, 0xd91d6u); x86_call_known(c, 0xc8a68u, f_000c8a68); X86_RET(c, 0xd91d6u);
    X86_TICK(c, 11);
    // 0d91d6  mov dword ptr [ebp - 0x40], eax
    X86_AT(c, 0xd91d6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u)), c.r[0]);
    // 0d91d9  push 4
    X86_AT(c, 0xd91d9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d91db  call 0xca0a0
    X86_AT(c, 0xd91dbu);
    push32(c, 0xd91e0u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd91e0u);
    X86_TICK(c, 14);
    // 0d91e0  add esp, 0x14
    X86_AT(c, 0xd91e0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d91e3  cmp dword ptr [ebp - 0x40], 0
    X86_AT(c, 0xd91e3u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u))), 0x0u, 0, 4);
    // 0d91e7  je 0xd9196
    X86_AT(c, 0xd91e7u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd9196u); goto L_d9196; }
    X86_TICK(c, 11);
    // 0d91e9  push 0xc
    X86_AT(c, 0xd91e9u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d91eb  push 0x28
    X86_AT(c, 0xd91ebu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d91ed  call 0xcc814
    X86_AT(c, 0xd91edu);
    push32(c, 0xd91f2u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd91f2u);
    X86_TICK(c, 14);
    // 0d91f2  push dword ptr [ebp - 0x40]
    X86_AT(c, 0xd91f2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFC0u))); push32(c, v); }
    // 0d91f5  push 4
    X86_AT(c, 0xd91f5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d91f7  call 0xca414
    X86_AT(c, 0xd91f7u);
    push32(c, 0xd91fcu); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd91fcu);
    X86_TICK(c, 27);
    // 0d91fc  sub eax, eax
    X86_AT(c, 0xd91fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d91fe  mov dword ptr [ebp - 0x28], eax
    X86_AT(c, 0xd91feu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), c.r[0]);
    // 0d9201  mov dword ptr [ebp - 0x20], eax
    X86_AT(c, 0xd9201u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[0]);
    // 0d9204  mov dword ptr [ebp - 0x18], eax
    X86_AT(c, 0xd9204u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[0]);
    // 0d9207  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xd9207u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0d920a  add esp, 0x10
    X86_AT(c, 0xd920au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d920d  movzx edx, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xd920du);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)));
    // 0d9211  sub edx, 0x42
    X86_AT(c, 0xd9211u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, 0x42u, 0, 4); }
    // 0d9214  cmp edx, 6
    X86_AT(c, 0xd9214u);
    (void)x86_sub(c, c.r[2], 0x6u, 0, 4);
    // 0d9217  ja 0xd929e
    X86_AT(c, 0xd9217u);
    if (x86_cc(c, 7)) { goto L_d929e; }
    X86_TICK(c, 7);
    // 0d921d  jmp dword ptr cs:[edx*4 + 0xd9225]
    X86_AT(c, 0xd921du);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[2] * 4 + 0xD9225u)));
      switch (t) {
      case 0xd9241u: goto L_d9241;
      case 0xd9257u: goto L_d9257;
      case 0xd926du: goto L_d926d;
      case 0xd9283u: goto L_d9283;
      case 0xd929eu: goto L_d929e;
      default: x86_jump(c, t); return; } }
L_d9241:
    X86_TICK(c, 33);
    // 0d9241  imul eax, edi, 0x21a
    X86_AT(c, 0xd9241u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9247  mov byte ptr [eax + 0xb0517], 0
    X86_AT(c, 0xd9247u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u)), 0x0u);
    // 0d924e  mov dword ptr [ebp - 0x28], 5
    X86_AT(c, 0xd924eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)), 0x5u);
    // 0d9255  jmp 0xd929e
    X86_AT(c, 0xd9255u);
    goto L_d929e;
L_d9257:
    X86_TICK(c, 33);
    // 0d9257  imul eax, edi, 0x21a
    X86_AT(c, 0xd9257u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d925d  mov byte ptr [eax + 0xb0517], 1
    X86_AT(c, 0xd925du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u)), 0x1u);
    // 0d9264  mov dword ptr [ebp - 0x18], 5
    X86_AT(c, 0xd9264u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), 0x5u);
    // 0d926b  jmp 0xd929e
    X86_AT(c, 0xd926bu);
    goto L_d929e;
L_d926d:
    X86_TICK(c, 33);
    // 0d926d  imul eax, edi, 0x21a
    X86_AT(c, 0xd926du);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9273  mov byte ptr [eax + 0xb0517], 2
    X86_AT(c, 0xd9273u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u)), 0x2u);
    // 0d927a  mov dword ptr [ebp - 0x10], 5
    X86_AT(c, 0xd927au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0x5u);
    // 0d9281  jmp 0xd929e
    X86_AT(c, 0xd9281u);
    goto L_d929e;
L_d9283:
    X86_TICK(c, 28);
    // 0d9283  imul eax, edi, 0x21a
    X86_AT(c, 0xd9283u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9289  mov byte ptr [eax + 0xb0517], 3
    X86_AT(c, 0xd9289u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u)), 0x3u);
    // 0d9290  mov dword ptr [ebp - 0x10], 0xfffffffb
    X86_AT(c, 0xd9290u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), 0xFFFFFFFBu);
    // 0d9297  mov dword ptr [ebp - 0x20], 0xa
    X86_AT(c, 0xd9297u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), 0xAu);
L_d929e:
    X86_TICK(c, 7);
    // 0d929e  cmp bl, 5
    X86_AT(c, 0xd929eu);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d92a1  jne 0xd92dc
    X86_AT(c, 0xd92a1u);
    if (x86_cc(c, 5)) { goto L_d92dc; }
    X86_TICK(c, 15);
    // 0d92a3  mov eax, 5
    X86_AT(c, 0xd92a3u);
    c.r[0] = 0x5u;
    // 0d92a8  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xd92a8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0d92ab  push 0xd
    X86_AT(c, 0xd92abu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d92ad  push eax
    X86_AT(c, 0xd92adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d92ae  call 0xca2d4
    X86_AT(c, 0xd92aeu);
    push32(c, 0xd92b3u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd92b3u);
    X86_TICK(c, 9);
    // 0d92b3  push 4
    X86_AT(c, 0xd92b3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d92b5  call 0xca0a0
    X86_AT(c, 0xd92b5u);
    push32(c, 0xd92bau); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd92bau);
    X86_TICK(c, 11);
    // 0d92ba  push 0xc
    X86_AT(c, 0xd92bau);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d92bc  push 0x28
    X86_AT(c, 0xd92bcu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d92be  call 0xcc814
    X86_AT(c, 0xd92beu);
    push32(c, 0xd92c3u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd92c3u);
    X86_TICK(c, 35);
    // 0d92c3  imul eax, edi, 0x21a
    X86_AT(c, 0xd92c3u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d92c9  add esp, 0x14
    X86_AT(c, 0xd92c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d92cc  mov al, byte ptr [eax + 0xb0517]
    X86_AT(c, 0xd92ccu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u))));
    // 0d92d2  cmp al, 3
    X86_AT(c, 0xd92d2u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0d92d4  ja 0xd972f
    X86_AT(c, 0xd92d4u);
    if (x86_cc(c, 7)) { goto L_d972f; }
    X86_TICK(c, 7);
    // 0d92da  jmp 0xd9318
    X86_AT(c, 0xd92dau);
    goto L_d9318;
L_d92dc:
    X86_TICK(c, 7);
    // 0d92dc  cmp bl, 6
    X86_AT(c, 0xd92dcu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d92df  jne 0xd9327
    X86_AT(c, 0xd92dfu);
    if (x86_cc(c, 5)) { goto L_d9327; }
    X86_TICK(c, 13);
    // 0d92e1  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xd92e1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0d92e8  push 0xd
    X86_AT(c, 0xd92e8u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d92ea  push 5
    X86_AT(c, 0xd92eau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d92ec  call 0xca2d4
    X86_AT(c, 0xd92ecu);
    push32(c, 0xd92f1u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd92f1u);
    X86_TICK(c, 9);
    // 0d92f1  push 4
    X86_AT(c, 0xd92f1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d92f3  call 0xca0a0
    X86_AT(c, 0xd92f3u);
    push32(c, 0xd92f8u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd92f8u);
    X86_TICK(c, 11);
    // 0d92f8  push 0xc
    X86_AT(c, 0xd92f8u);
    { uint32_t v = 0xCu; push32(c, v); }
    // 0d92fa  push 0x28
    X86_AT(c, 0xd92fau);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d92fc  call 0xcc814
    X86_AT(c, 0xd92fcu);
    push32(c, 0xd9301u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9301u);
    X86_TICK(c, 35);
    // 0d9301  imul eax, edi, 0x21a
    X86_AT(c, 0xd9301u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9307  add esp, 0x14
    X86_AT(c, 0xd9307u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d930a  mov al, byte ptr [eax + 0xb0517]
    X86_AT(c, 0xd930au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u))));
    // 0d9310  cmp al, 3
    X86_AT(c, 0xd9310u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0d9312  ja 0xd9962
    X86_AT(c, 0xd9312u);
    if (x86_cc(c, 7)) { goto L_d9962; }
L_d9318:
    X86_TICK(c, 15);
    // 0d9318  movzx eax, al
    X86_AT(c, 0xd9318u);
    c.r[0] = g8(c, 0);
    // 0d931b  push dword ptr [eax*4 + 0xa1e34]
    X86_AT(c, 0xd931bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E34u))); push32(c, v); }
    // 0d9322  jmp 0xd9723
    X86_AT(c, 0xd9322u);
    goto L_d9723;
L_d9327:
    X86_TICK(c, 7);
    // 0d9327  cmp bl, 1
    X86_AT(c, 0xd9327u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d932a  je 0xd97b2
    X86_AT(c, 0xd932au);
    if (x86_cc(c, 4)) { goto L_d97b2; }
    X86_TICK(c, 11);
    // 0d9330  push 0xd
    X86_AT(c, 0xd9330u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d9332  push 5
    X86_AT(c, 0xd9332u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9334  call 0xca2d4
    X86_AT(c, 0xd9334u);
    push32(c, 0xd9339u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd9339u);
    X86_TICK(c, 9);
    // 0d9339  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xd9339u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0d9340  jmp 0xd97a5
    X86_AT(c, 0xd9340u);
    goto L_d97a5;
L_d9345:
    X86_TICK(c, 27);
    // 0d9345  push 0xa
    X86_AT(c, 0xd9345u);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d9347  push 0xf
    X86_AT(c, 0xd9347u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d9349  push 0xb
    X86_AT(c, 0xd9349u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d934b  push 2
    X86_AT(c, 0xd934bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d934d  push 0x19
    X86_AT(c, 0xd934du);
    { uint32_t v = 0x19u; push32(c, v); }
    // 0d934f  push 0x34
    X86_AT(c, 0xd934fu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d9351  push 0xd0
    X86_AT(c, 0xd9351u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d9356  push 0x128
    X86_AT(c, 0xd9356u);
    { uint32_t v = 0x128u; push32(c, v); }
    // 0d935b  push 0xd0
    X86_AT(c, 0xd935bu);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d9360  push 5
    X86_AT(c, 0xd9360u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9362  call 0xc9fbc
    X86_AT(c, 0xd9362u);
    push32(c, 0xd9367u); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd9367u);
    X86_TICK(c, 9);
    // 0d9367  push 5
    X86_AT(c, 0xd9367u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9369  call 0xca0a0
    X86_AT(c, 0xd9369u);
    push32(c, 0xd936eu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd936eu);
    X86_TICK(c, 9);
    // 0d936e  push 5
    X86_AT(c, 0xd936eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9370  call 0xca100
    X86_AT(c, 0xd9370u);
    push32(c, 0xd9375u); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd9375u);
    X86_TICK(c, 9);
    // 0d9375  push 5
    X86_AT(c, 0xd9375u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9377  call 0xca0a0
    X86_AT(c, 0xd9377u);
    push32(c, 0xd937cu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd937cu);
    X86_TICK(c, 13);
    // 0d937c  push 0
    X86_AT(c, 0xd937cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d937e  push 4
    X86_AT(c, 0xd937eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9380  push 5
    X86_AT(c, 0xd9380u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9382  call 0xca9c8
    X86_AT(c, 0xd9382u);
    push32(c, 0xd9387u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9387u);
    X86_TICK(c, 13);
    // 0d9387  add esp, 0x40
    X86_AT(c, 0xd9387u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d938a  push 0xb470
    X86_AT(c, 0xd938au);
    { uint32_t v = 0xB470u; push32(c, v); }
    // 0d938f  push 5
    X86_AT(c, 0xd938fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9391  call 0xc8cdc
    X86_AT(c, 0xd9391u);
    push32(c, 0xd9396u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9396u);
    X86_TICK(c, 13);
    // 0d9396  push 1
    X86_AT(c, 0xd9396u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d9398  push 6
    X86_AT(c, 0xd9398u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d939a  push 5
    X86_AT(c, 0xd939au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d939c  call 0xca9c8
    X86_AT(c, 0xd939cu);
    push32(c, 0xd93a1u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd93a1u);
    X86_TICK(c, 11);
    // 0d93a1  push 0xb488
    X86_AT(c, 0xd93a1u);
    { uint32_t v = 0xB488u; push32(c, v); }
    // 0d93a6  push 5
    X86_AT(c, 0xd93a6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d93a8  call 0xc8cdc
    X86_AT(c, 0xd93a8u);
    push32(c, 0xd93adu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd93adu);
    X86_TICK(c, 13);
    // 0d93ad  push 2
    X86_AT(c, 0xd93adu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d93af  push 6
    X86_AT(c, 0xd93afu);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d93b1  push 5
    X86_AT(c, 0xd93b1u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d93b3  call 0xca9c8
    X86_AT(c, 0xd93b3u);
    push32(c, 0xd93b8u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd93b8u);
    X86_TICK(c, 11);
    // 0d93b8  push 0xb4a0
    X86_AT(c, 0xd93b8u);
    { uint32_t v = 0xB4A0u; push32(c, v); }
    // 0d93bd  push 5
    X86_AT(c, 0xd93bdu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d93bf  call 0xc8cdc
    X86_AT(c, 0xd93bfu);
    push32(c, 0xd93c4u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd93c4u);
    X86_TICK(c, 9);
    // 0d93c4  push 4
    X86_AT(c, 0xd93c4u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d93c6  call 0xca0a0
    X86_AT(c, 0xd93c6u);
    push32(c, 0xd93cbu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd93cbu);
    X86_TICK(c, 11);
    // 0d93cb  push 0xd
    X86_AT(c, 0xd93cbu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d93cd  push 0x28
    X86_AT(c, 0xd93cdu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d93cf  call 0xcc814
    X86_AT(c, 0xd93cfu);
    push32(c, 0xd93d4u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd93d4u);
    X86_TICK(c, 13);
    // 0d93d4  add esp, 0x3c
    X86_AT(c, 0xd93d4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d93d7  push 0xb4bc
    X86_AT(c, 0xd93d7u);
    { uint32_t v = 0xB4BCu; push32(c, v); }
    // 0d93dc  push 4
    X86_AT(c, 0xd93dcu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d93de  call 0xca414
    X86_AT(c, 0xd93deu);
    push32(c, 0xd93e3u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd93e3u);
    X86_TICK(c, 2);
    // 0d93e3  add esp, 8
    X86_AT(c, 0xd93e3u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d93e6:
    X86_TICK(c, 11);
    // 0d93e6  push 0xd
    X86_AT(c, 0xd93e6u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d93e8  push 0x28
    X86_AT(c, 0xd93e8u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d93ea  call 0xcc814
    X86_AT(c, 0xd93eau);
    push32(c, 0xd93efu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd93efu);
    X86_TICK(c, 9);
    // 0d93ef  push 4
    X86_AT(c, 0xd93efu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d93f1  call 0xc79a4
    X86_AT(c, 0xd93f1u);
    push32(c, 0xd93f6u); x86_call_known(c, 0xc79a4u, f_000c79a4); X86_RET(c, 0xd93f6u);
    X86_TICK(c, 12);
    // 0d93f6  xchg ebx, eax
    X86_AT(c, 0xd93f6u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d93f7  add esp, 0xc
    X86_AT(c, 0xd93f7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d93fa  cmp bl, 5
    X86_AT(c, 0xd93fau);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d93fd  je 0xd9486
    X86_AT(c, 0xd93fdu);
    if (x86_cc(c, 4)) { goto L_d9486; }
    X86_TICK(c, 7);
    // 0d9403  cmp bl, 6
    X86_AT(c, 0xd9403u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d9406  je 0xd9486
    X86_AT(c, 0xd9406u);
    if (x86_cc(c, 4)) { goto L_d9486; }
    X86_TICK(c, 7);
    // 0d940c  cmp bl, 1
    X86_AT(c, 0xd940cu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d940f  je 0xd9486
    X86_AT(c, 0xd940fu);
    if (x86_cc(c, 4)) { goto L_d9486; }
    X86_TICK(c, 17);
    // 0d9415  lea eax, [ebp - 0x2d]
    X86_AT(c, 0xd9415u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD3u);
    // 0d9418  push eax
    X86_AT(c, 0xd9418u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9419  push ebx
    X86_AT(c, 0xd9419u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d941a  push 3
    X86_AT(c, 0xd941au);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d941c  push 0xb1988
    X86_AT(c, 0xd941cu);
    { uint32_t v = 0xB1988u; push32(c, v); }
    // 0d9421  call 0xc8a68
    X86_AT(c, 0xd9421u);
    push32(c, 0xd9426u); x86_call_known(c, 0xc8a68u, f_000c8a68); X86_RET(c, 0xd9426u);
    X86_TICK(c, 11);
    // 0d9426  mov dword ptr [ebp - 0x44], eax
    X86_AT(c, 0xd9426u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFBCu)), c.r[0]);
    // 0d9429  add esp, 0x10
    X86_AT(c, 0xd9429u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d942c  and eax, eax
    X86_AT(c, 0xd942cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d942e  je 0xd93e6
    X86_AT(c, 0xd942eu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd93e6u); goto L_d93e6; }
    X86_TICK(c, 11);
    // 0d9430  push 0xd
    X86_AT(c, 0xd9430u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d9432  push 0x28
    X86_AT(c, 0xd9432u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9434  call 0xcc814
    X86_AT(c, 0xd9434u);
    push32(c, 0xd9439u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9439u);
    X86_TICK(c, 14);
    // 0d9439  push dword ptr [ebp - 0x44]
    X86_AT(c, 0xd9439u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFBCu))); push32(c, v); }
    // 0d943c  push 4
    X86_AT(c, 0xd943cu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d943e  call 0xca414
    X86_AT(c, 0xd943eu);
    push32(c, 0xd9443u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd9443u);
    X86_TICK(c, 15);
    // 0d9443  add esp, 0x10
    X86_AT(c, 0xd9443u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d9446  movzx edx, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xd9446u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)));
    // 0d944a  cmp edx, 0x46
    X86_AT(c, 0xd944au);
    (void)x86_sub(c, c.r[2], 0x46u, 0, 4);
    // 0d944d  je 0xd946a
    X86_AT(c, 0xd944du);
    if (x86_cc(c, 4)) { goto L_d946a; }
    X86_TICK(c, 7);
    // 0d944f  cmp edx, 0x4d
    X86_AT(c, 0xd944fu);
    (void)x86_sub(c, c.r[2], 0x4Du, 0, 4);
    // 0d9452  je 0xd945b
    X86_AT(c, 0xd9452u);
    if (x86_cc(c, 4)) { goto L_d945b; }
    X86_TICK(c, 7);
    // 0d9454  cmp edx, 0x4f
    X86_AT(c, 0xd9454u);
    (void)x86_sub(c, c.r[2], 0x4Fu, 0, 4);
    // 0d9457  je 0xd9479
    X86_AT(c, 0xd9457u);
    if (x86_cc(c, 4)) { goto L_d9479; }
    X86_TICK(c, 7);
    // 0d9459  jmp 0xd9486
    X86_AT(c, 0xd9459u);
    goto L_d9486;
L_d945b:
    X86_TICK(c, 31);
    // 0d945b  imul eax, edi, 0x21a
    X86_AT(c, 0xd945bu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9461  mov byte ptr [eax + 0xb0519], 0
    X86_AT(c, 0xd9461u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u)), 0x0u);
    // 0d9468  jmp 0xd9486
    X86_AT(c, 0xd9468u);
    goto L_d9486;
L_d946a:
    X86_TICK(c, 31);
    // 0d946a  imul eax, edi, 0x21a
    X86_AT(c, 0xd946au);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9470  mov byte ptr [eax + 0xb0519], 1
    X86_AT(c, 0xd9470u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u)), 0x1u);
    // 0d9477  jmp 0xd9486
    X86_AT(c, 0xd9477u);
    goto L_d9486;
L_d9479:
    X86_TICK(c, 24);
    // 0d9479  imul eax, edi, 0x21a
    X86_AT(c, 0xd9479u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d947f  mov byte ptr [eax + 0xb0519], 2
    X86_AT(c, 0xd947fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u)), 0x2u);
L_d9486:
    X86_TICK(c, 7);
    // 0d9486  cmp bl, 5
    X86_AT(c, 0xd9486u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d9489  jne 0xd94d1
    X86_AT(c, 0xd9489u);
    if (x86_cc(c, 5)) { goto L_d94d1; }
    X86_TICK(c, 13);
    // 0d948b  mov dword ptr [ebp - 4], 6
    X86_AT(c, 0xd948bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x6u);
    // 0d9492  push 0xd
    X86_AT(c, 0xd9492u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d9494  push 5
    X86_AT(c, 0xd9494u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9496  call 0xca2d4
    X86_AT(c, 0xd9496u);
    push32(c, 0xd949bu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd949bu);
    X86_TICK(c, 9);
    // 0d949b  push 4
    X86_AT(c, 0xd949bu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d949d  call 0xca0a0
    X86_AT(c, 0xd949du);
    push32(c, 0xd94a2u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd94a2u);
    X86_TICK(c, 11);
    // 0d94a2  push 0xd
    X86_AT(c, 0xd94a2u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d94a4  push 0x28
    X86_AT(c, 0xd94a4u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d94a6  call 0xcc814
    X86_AT(c, 0xd94a6u);
    push32(c, 0xd94abu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd94abu);
    X86_TICK(c, 35);
    // 0d94ab  imul eax, edi, 0x21a
    X86_AT(c, 0xd94abu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d94b1  add esp, 0x14
    X86_AT(c, 0xd94b1u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d94b4  mov al, byte ptr [eax + 0xb0519]
    X86_AT(c, 0xd94b4u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u))));
    // 0d94ba  cmp al, 2
    X86_AT(c, 0xd94bau);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0d94bc  ja 0xd972f
    X86_AT(c, 0xd94bcu);
    if (x86_cc(c, 7)) { goto L_d972f; }
L_d94c2:
    X86_TICK(c, 15);
    // 0d94c2  movzx eax, al
    X86_AT(c, 0xd94c2u);
    c.r[0] = g8(c, 0);
    // 0d94c5  push dword ptr [eax*4 + 0xa1e28]
    X86_AT(c, 0xd94c5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1E28u))); push32(c, v); }
    // 0d94cc  jmp 0xd9723
    X86_AT(c, 0xd94ccu);
    goto L_d9723;
L_d94d1:
    X86_TICK(c, 7);
    // 0d94d1  cmp bl, 6
    X86_AT(c, 0xd94d1u);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d94d4  jne 0xd950f
    X86_AT(c, 0xd94d4u);
    if (x86_cc(c, 5)) { goto L_d950f; }
    X86_TICK(c, 13);
    // 0d94d6  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xd94d6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0d94dd  push 0xd
    X86_AT(c, 0xd94ddu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d94df  push 5
    X86_AT(c, 0xd94dfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d94e1  call 0xca2d4
    X86_AT(c, 0xd94e1u);
    push32(c, 0xd94e6u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd94e6u);
    X86_TICK(c, 9);
    // 0d94e6  push 4
    X86_AT(c, 0xd94e6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d94e8  call 0xca0a0
    X86_AT(c, 0xd94e8u);
    push32(c, 0xd94edu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd94edu);
    X86_TICK(c, 11);
    // 0d94ed  push 0xd
    X86_AT(c, 0xd94edu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d94ef  push 0x28
    X86_AT(c, 0xd94efu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d94f1  call 0xcc814
    X86_AT(c, 0xd94f1u);
    push32(c, 0xd94f6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd94f6u);
    X86_TICK(c, 35);
    // 0d94f6  imul eax, edi, 0x21a
    X86_AT(c, 0xd94f6u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d94fc  add esp, 0x14
    X86_AT(c, 0xd94fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d94ff  mov al, byte ptr [eax + 0xb0519]
    X86_AT(c, 0xd94ffu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u))));
    // 0d9505  cmp al, 2
    X86_AT(c, 0xd9505u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0d9507  ja 0xd97e4
    X86_AT(c, 0xd9507u);
    if (x86_cc(c, 7)) { goto L_d97e4; }
    X86_TICK(c, 7);
    // 0d950d  jmp 0xd94c2
    X86_AT(c, 0xd950du);
    X86_POLL(c, 0xd94c2u); goto L_d94c2;
L_d950f:
    X86_TICK(c, 7);
    // 0d950f  cmp bl, 1
    X86_AT(c, 0xd950fu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d9512  je 0xd97b2
    X86_AT(c, 0xd9512u);
    if (x86_cc(c, 4)) { goto L_d97b2; }
    X86_TICK(c, 11);
    // 0d9518  push 0xd
    X86_AT(c, 0xd9518u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d951a  push 5
    X86_AT(c, 0xd951au);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d951c  call 0xca2d4
    X86_AT(c, 0xd951cu);
    push32(c, 0xd9521u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd9521u);
    X86_TICK(c, 9);
    // 0d9521  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xd9521u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0d9528  jmp 0xd97a5
    X86_AT(c, 0xd9528u);
    goto L_d97a5;
L_d952d:
    X86_TICK(c, 27);
    // 0d952d  push 0xa
    X86_AT(c, 0xd952du);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d952f  push 0xf
    X86_AT(c, 0xd952fu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d9531  push 0xb
    X86_AT(c, 0xd9531u);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d9533  push 7
    X86_AT(c, 0xd9533u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d9535  push 0x2f
    X86_AT(c, 0xd9535u);
    { uint32_t v = 0x2Fu; push32(c, v); }
    // 0d9537  push 0x54
    X86_AT(c, 0xd9537u);
    { uint32_t v = 0x54u; push32(c, v); }
    // 0d9539  push 0xd0
    X86_AT(c, 0xd9539u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d953e  push 0x128
    X86_AT(c, 0xd953eu);
    { uint32_t v = 0x128u; push32(c, v); }
    // 0d9543  push 0xd0
    X86_AT(c, 0xd9543u);
    { uint32_t v = 0xD0u; push32(c, v); }
    // 0d9548  push 5
    X86_AT(c, 0xd9548u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d954a  call 0xc9fbc
    X86_AT(c, 0xd954au);
    push32(c, 0xd954fu); x86_call_known(c, 0xc9fbcu, f_000c9fbc); X86_RET(c, 0xd954fu);
    X86_TICK(c, 9);
    // 0d954f  push 5
    X86_AT(c, 0xd954fu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9551  call 0xca0a0
    X86_AT(c, 0xd9551u);
    push32(c, 0xd9556u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd9556u);
    X86_TICK(c, 9);
    // 0d9556  push 5
    X86_AT(c, 0xd9556u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9558  call 0xca100
    X86_AT(c, 0xd9558u);
    push32(c, 0xd955du); x86_call_known(c, 0xca100u, f_000ca100); X86_RET(c, 0xd955du);
    X86_TICK(c, 9);
    // 0d955d  push 5
    X86_AT(c, 0xd955du);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d955f  call 0xca0a0
    X86_AT(c, 0xd955fu);
    push32(c, 0xd9564u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd9564u);
    X86_TICK(c, 13);
    // 0d9564  push 0
    X86_AT(c, 0xd9564u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0d9566  push 4
    X86_AT(c, 0xd9566u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9568  push 5
    X86_AT(c, 0xd9568u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d956a  call 0xca9c8
    X86_AT(c, 0xd956au);
    push32(c, 0xd956fu); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd956fu);
    X86_TICK(c, 13);
    // 0d956f  add esp, 0x40
    X86_AT(c, 0xd956fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x40u, 0, 4); }
    // 0d9572  push 0xb4d0
    X86_AT(c, 0xd9572u);
    { uint32_t v = 0xB4D0u; push32(c, v); }
    // 0d9577  push 5
    X86_AT(c, 0xd9577u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9579  call 0xc8cdc
    X86_AT(c, 0xd9579u);
    push32(c, 0xd957eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd957eu);
    X86_TICK(c, 13);
    // 0d957e  push 1
    X86_AT(c, 0xd957eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0d9580  push 5
    X86_AT(c, 0xd9580u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9582  push 5
    X86_AT(c, 0xd9582u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9584  call 0xca9c8
    X86_AT(c, 0xd9584u);
    push32(c, 0xd9589u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd9589u);
    X86_TICK(c, 11);
    // 0d9589  push 0xb4ec
    X86_AT(c, 0xd9589u);
    { uint32_t v = 0xB4ECu; push32(c, v); }
    // 0d958e  push 5
    X86_AT(c, 0xd958eu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9590  call 0xc8cdc
    X86_AT(c, 0xd9590u);
    push32(c, 0xd9595u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9595u);
    X86_TICK(c, 13);
    // 0d9595  push 2
    X86_AT(c, 0xd9595u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d9597  push 5
    X86_AT(c, 0xd9597u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9599  push 5
    X86_AT(c, 0xd9599u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d959b  call 0xca9c8
    X86_AT(c, 0xd959bu);
    push32(c, 0xd95a0u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd95a0u);
    X86_TICK(c, 11);
    // 0d95a0  push 0xb514
    X86_AT(c, 0xd95a0u);
    { uint32_t v = 0xB514u; push32(c, v); }
    // 0d95a5  push 5
    X86_AT(c, 0xd95a5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95a7  call 0xc8cdc
    X86_AT(c, 0xd95a7u);
    push32(c, 0xd95acu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd95acu);
    X86_TICK(c, 13);
    // 0d95ac  push 3
    X86_AT(c, 0xd95acu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d95ae  push 5
    X86_AT(c, 0xd95aeu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95b0  push 5
    X86_AT(c, 0xd95b0u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95b2  call 0xca9c8
    X86_AT(c, 0xd95b2u);
    push32(c, 0xd95b7u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd95b7u);
    X86_TICK(c, 13);
    // 0d95b7  add esp, 0x3c
    X86_AT(c, 0xd95b7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d95ba  push 0xb53c
    X86_AT(c, 0xd95bau);
    { uint32_t v = 0xB53Cu; push32(c, v); }
    // 0d95bf  push 5
    X86_AT(c, 0xd95bfu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95c1  call 0xc8cdc
    X86_AT(c, 0xd95c1u);
    push32(c, 0xd95c6u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd95c6u);
    X86_TICK(c, 13);
    // 0d95c6  push 4
    X86_AT(c, 0xd95c6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d95c8  push 5
    X86_AT(c, 0xd95c8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95ca  push 5
    X86_AT(c, 0xd95cau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95cc  call 0xca9c8
    X86_AT(c, 0xd95ccu);
    push32(c, 0xd95d1u); x86_call_known(c, 0xca9c8u, f_000ca9c8); X86_RET(c, 0xd95d1u);
    X86_TICK(c, 11);
    // 0d95d1  push 0xb564
    X86_AT(c, 0xd95d1u);
    { uint32_t v = 0xB564u; push32(c, v); }
    // 0d95d6  push 5
    X86_AT(c, 0xd95d6u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d95d8  call 0xc8cdc
    X86_AT(c, 0xd95d8u);
    push32(c, 0xd95ddu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd95ddu);
    X86_TICK(c, 9);
    // 0d95dd  push 4
    X86_AT(c, 0xd95ddu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d95df  call 0xca0a0
    X86_AT(c, 0xd95dfu);
    push32(c, 0xd95e4u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd95e4u);
    X86_TICK(c, 13);
    // 0d95e4  add esp, 0x20
    X86_AT(c, 0xd95e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
    // 0d95e7  push 0xe
    X86_AT(c, 0xd95e7u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d95e9  push 0x28
    X86_AT(c, 0xd95e9u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d95eb  call 0xcc814
    X86_AT(c, 0xd95ebu);
    push32(c, 0xd95f0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd95f0u);
    X86_TICK(c, 11);
    // 0d95f0  push 0xb58c
    X86_AT(c, 0xd95f0u);
    { uint32_t v = 0xB58Cu; push32(c, v); }
    // 0d95f5  push 4
    X86_AT(c, 0xd95f5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d95f7  call 0xca414
    X86_AT(c, 0xd95f7u);
    push32(c, 0xd95fcu); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd95fcu);
    X86_TICK(c, 2);
    // 0d95fc  add esp, 0x10
    X86_AT(c, 0xd95fcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
L_d95ff:
    X86_TICK(c, 11);
    // 0d95ff  push 0xe
    X86_AT(c, 0xd95ffu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d9601  push 0x28
    X86_AT(c, 0xd9601u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9603  call 0xcc814
    X86_AT(c, 0xd9603u);
    push32(c, 0xd9608u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9608u);
    X86_TICK(c, 9);
    // 0d9608  push 4
    X86_AT(c, 0xd9608u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d960a  call 0xc79a4
    X86_AT(c, 0xd960au);
    push32(c, 0xd960fu); x86_call_known(c, 0xc79a4u, f_000c79a4); X86_RET(c, 0xd960fu);
    X86_TICK(c, 12);
    // 0d960f  xchg ebx, eax
    X86_AT(c, 0xd960fu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0d9610  add esp, 0xc
    X86_AT(c, 0xd9610u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 0d9613  cmp bl, 5
    X86_AT(c, 0xd9613u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d9616  je 0xd96e1
    X86_AT(c, 0xd9616u);
    if (x86_cc(c, 4)) { goto L_d96e1; }
    X86_TICK(c, 7);
    // 0d961c  cmp bl, 6
    X86_AT(c, 0xd961cu);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d961f  je 0xd96e1
    X86_AT(c, 0xd961fu);
    if (x86_cc(c, 4)) { goto L_d96e1; }
    X86_TICK(c, 7);
    // 0d9625  cmp bl, 1
    X86_AT(c, 0xd9625u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d9628  je 0xd96e1
    X86_AT(c, 0xd9628u);
    if (x86_cc(c, 4)) { goto L_d96e1; }
    X86_TICK(c, 17);
    // 0d962e  lea eax, [ebp - 0x2d]
    X86_AT(c, 0xd962eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD3u);
    // 0d9631  push eax
    X86_AT(c, 0xd9631u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9632  push ebx
    X86_AT(c, 0xd9632u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0d9633  push 4
    X86_AT(c, 0xd9633u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9635  push 0xb1778
    X86_AT(c, 0xd9635u);
    { uint32_t v = 0xB1778u; push32(c, v); }
    // 0d963a  call 0xc8a68
    X86_AT(c, 0xd963au);
    push32(c, 0xd963fu); x86_call_known(c, 0xc8a68u, f_000c8a68); X86_RET(c, 0xd963fu);
    X86_TICK(c, 11);
    // 0d963f  mov dword ptr [ebp - 0x48], eax
    X86_AT(c, 0xd963fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)), c.r[0]);
    // 0d9642  add esp, 0x10
    X86_AT(c, 0xd9642u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d9645  and eax, eax
    X86_AT(c, 0xd9645u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d9647  je 0xd95ff
    X86_AT(c, 0xd9647u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xd95ffu); goto L_d95ff; }
    X86_TICK(c, 11);
    // 0d9649  push 0xe
    X86_AT(c, 0xd9649u);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d964b  push 0x28
    X86_AT(c, 0xd964bu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d964d  call 0xcc814
    X86_AT(c, 0xd964du);
    push32(c, 0xd9652u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9652u);
    X86_TICK(c, 14);
    // 0d9652  push dword ptr [ebp - 0x48]
    X86_AT(c, 0xd9652u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u))); push32(c, v); }
    // 0d9655  push 4
    X86_AT(c, 0xd9655u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9657  call 0xca414
    X86_AT(c, 0xd9657u);
    push32(c, 0xd965cu); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd965cu);
    X86_TICK(c, 25);
    // 0d965c  sub eax, eax
    X86_AT(c, 0xd965cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d965e  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0xd965eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 0d9661  mov dword ptr [ebp - 0x24], eax
    X86_AT(c, 0xd9661u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), c.r[0]);
    // 0d9664  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xd9664u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0d9667  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd9667u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d966a  add esp, 0x10
    X86_AT(c, 0xd966au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d966d  movzx edx, byte ptr [ebp - 0x2d]
    X86_AT(c, 0xd966du);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)));
    // 0d9671  cmp edx, 0x43
    X86_AT(c, 0xd9671u);
    (void)x86_sub(c, c.r[2], 0x43u, 0, 4);
    // 0d9674  je 0xd96a1
    X86_AT(c, 0xd9674u);
    if (x86_cc(c, 4)) { goto L_d96a1; }
    X86_TICK(c, 7);
    // 0d9676  cmp edx, 0x46
    X86_AT(c, 0xd9676u);
    (void)x86_sub(c, c.r[2], 0x46u, 0, 4);
    // 0d9679  je 0xd9687
    X86_AT(c, 0xd9679u);
    if (x86_cc(c, 4)) { goto L_d9687; }
    X86_TICK(c, 7);
    // 0d967b  cmp edx, 0x54
    X86_AT(c, 0xd967bu);
    (void)x86_sub(c, c.r[2], 0x54u, 0, 4);
    // 0d967e  je 0xd96cd
    X86_AT(c, 0xd967eu);
    if (x86_cc(c, 4)) { goto L_d96cd; }
    X86_TICK(c, 7);
    // 0d9680  cmp edx, 0x57
    X86_AT(c, 0xd9680u);
    (void)x86_sub(c, c.r[2], 0x57u, 0, 4);
    // 0d9683  je 0xd96b7
    X86_AT(c, 0xd9683u);
    if (x86_cc(c, 4)) { goto L_d96b7; }
    X86_TICK(c, 7);
    // 0d9685  jmp 0xd96e1
    X86_AT(c, 0xd9685u);
    goto L_d96e1;
L_d9687:
    X86_TICK(c, 37);
    // 0d9687  imul eax, edi, 0x21a
    X86_AT(c, 0xd9687u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d968d  mov byte ptr [eax + 0xb0518], 0
    X86_AT(c, 0xd968du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u)), 0x0u);
    // 0d9694  mov eax, 0xa
    X86_AT(c, 0xd9694u);
    c.r[0] = 0xAu;
    // 0d9699  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xd9699u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0d969c  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xd969cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0d969f  jmp 0xd96e1
    X86_AT(c, 0xd969fu);
    goto L_d96e1;
L_d96a1:
    X86_TICK(c, 33);
    // 0d96a1  imul eax, edi, 0x21a
    X86_AT(c, 0xd96a1u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d96a7  mov byte ptr [eax + 0xb0518], 1
    X86_AT(c, 0xd96a7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u)), 0x1u);
    // 0d96ae  mov dword ptr [ebp - 0x24], 0xa
    X86_AT(c, 0xd96aeu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)), 0xAu);
    // 0d96b5  jmp 0xd96e1
    X86_AT(c, 0xd96b5u);
    goto L_d96e1;
L_d96b7:
    X86_TICK(c, 33);
    // 0d96b7  imul eax, edi, 0x21a
    X86_AT(c, 0xd96b7u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d96bd  mov byte ptr [eax + 0xb0518], 2
    X86_AT(c, 0xd96bdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u)), 0x2u);
    // 0d96c4  mov dword ptr [ebp - 0x2c], 0xa
    X86_AT(c, 0xd96c4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), 0xAu);
    // 0d96cb  jmp 0xd96e1
    X86_AT(c, 0xd96cbu);
    goto L_d96e1;
L_d96cd:
    X86_TICK(c, 26);
    // 0d96cd  imul eax, edi, 0x21a
    X86_AT(c, 0xd96cdu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d96d3  mov byte ptr [eax + 0xb0518], 3
    X86_AT(c, 0xd96d3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u)), 0x3u);
    // 0d96da  mov dword ptr [ebp - 0x1c], 0xa
    X86_AT(c, 0xd96dau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), 0xAu);
L_d96e1:
    X86_TICK(c, 7);
    // 0d96e1  cmp bl, 5
    X86_AT(c, 0xd96e1u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d96e4  jne 0xd973a
    X86_AT(c, 0xd96e4u);
    if (x86_cc(c, 5)) { goto L_d973a; }
    X86_TICK(c, 13);
    // 0d96e6  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xd96e6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0d96ed  push 0xd
    X86_AT(c, 0xd96edu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d96ef  push 5
    X86_AT(c, 0xd96efu);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d96f1  call 0xca2d4
    X86_AT(c, 0xd96f1u);
    push32(c, 0xd96f6u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd96f6u);
    X86_TICK(c, 9);
    // 0d96f6  push 4
    X86_AT(c, 0xd96f6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d96f8  call 0xca0a0
    X86_AT(c, 0xd96f8u);
    push32(c, 0xd96fdu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd96fdu);
    X86_TICK(c, 11);
    // 0d96fd  push 0xe
    X86_AT(c, 0xd96fdu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d96ff  push 0x28
    X86_AT(c, 0xd96ffu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9701  call 0xcc814
    X86_AT(c, 0xd9701u);
    push32(c, 0xd9706u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9706u);
    X86_TICK(c, 35);
    // 0d9706  imul eax, edi, 0x21a
    X86_AT(c, 0xd9706u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d970c  add esp, 0x14
    X86_AT(c, 0xd970cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d970f  mov al, byte ptr [eax + 0xb0518]
    X86_AT(c, 0xd970fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u))));
    // 0d9715  cmp al, 3
    X86_AT(c, 0xd9715u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0d9717  ja 0xd972f
    X86_AT(c, 0xd9717u);
    if (x86_cc(c, 7)) { goto L_d972f; }
    X86_TICK(c, 8);
    // 0d9719  movzx eax, al
    X86_AT(c, 0xd9719u);
    c.r[0] = g8(c, 0);
    // 0d971c  push dword ptr [eax*4 + 0xa1ed4]
    X86_AT(c, 0xd971cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1ED4u))); push32(c, v); }
L_d9723:
    X86_TICK(c, 9);
    // 0d9723  push 4
    X86_AT(c, 0xd9723u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9725  call 0xc8cdc
    X86_AT(c, 0xd9725u);
    push32(c, 0xd972au); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd972au);
    X86_TICK(c, 7);
    // 0d972a  jmp 0xd97a5
    X86_AT(c, 0xd972au);
    goto L_d97a5;
L_d972f:
    X86_TICK(c, 11);
    // 0d972f  push 0x20
    X86_AT(c, 0xd972fu);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0d9731  push 4
    X86_AT(c, 0xd9731u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9733  call 0xca58c
    X86_AT(c, 0xd9733u);
    push32(c, 0xd9738u); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xd9738u);
    X86_TICK(c, 7);
    // 0d9738  jmp 0xd97a5
    X86_AT(c, 0xd9738u);
    goto L_d97a5;
L_d973a:
    X86_TICK(c, 7);
    // 0d973a  cmp bl, 6
    X86_AT(c, 0xd973au);
    (void)x86_sub(c, g8(c, 3), 0x6u, 0, 1);
    // 0d973d  jne 0xd97ad
    X86_AT(c, 0xd973du);
    if (x86_cc(c, 5)) { goto L_d97ad; }
    X86_TICK(c, 11);
    // 0d973f  push 0xd
    X86_AT(c, 0xd973fu);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d9741  push 5
    X86_AT(c, 0xd9741u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d9743  call 0xca2d4
    X86_AT(c, 0xd9743u);
    push32(c, 0xd9748u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd9748u);
    X86_TICK(c, 9);
    // 0d9748  push 4
    X86_AT(c, 0xd9748u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d974a  call 0xca0a0
    X86_AT(c, 0xd974au);
    push32(c, 0xd974fu); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd974fu);
    X86_TICK(c, 11);
    // 0d974f  push 0xe
    X86_AT(c, 0xd974fu);
    { uint32_t v = 0xEu; push32(c, v); }
    // 0d9751  push 0x28
    X86_AT(c, 0xd9751u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9753  call 0xcc814
    X86_AT(c, 0xd9753u);
    push32(c, 0xd9758u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9758u);
    X86_TICK(c, 13);
    // 0d9758  add esp, 0x14
    X86_AT(c, 0xd9758u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
    // 0d975b  mov eax, dword ptr [ebp - 0x48]
    X86_AT(c, 0xd975bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB8u)));
    // 0d975e  and eax, eax
    X86_AT(c, 0xd975eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d9760  je 0xd976d
    X86_AT(c, 0xd9760u);
    if (x86_cc(c, 4)) { goto L_d976d; }
    X86_TICK(c, 11);
    // 0d9762  push eax
    X86_AT(c, 0xd9762u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9763  push 4
    X86_AT(c, 0xd9763u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9765  call 0xca414
    X86_AT(c, 0xd9765u);
    push32(c, 0xd976au); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd976au);
    X86_TICK(c, 2);
    // 0d976a  add esp, 8
    X86_AT(c, 0xd976au);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
L_d976d:
    X86_TICK(c, 11);
    // 0d976d  push 0x20
    X86_AT(c, 0xd976du);
    { uint32_t v = 0x20u; push32(c, v); }
    // 0d976f  push 4
    X86_AT(c, 0xd976fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9771  call 0xca58c
    X86_AT(c, 0xd9771u);
    push32(c, 0xd9776u); x86_call_known(c, 0xca58cu, f_000ca58c); X86_RET(c, 0xd9776u);
    X86_TICK(c, 35);
    // 0d9776  imul eax, edi, 0x21a
    X86_AT(c, 0xd9776u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d977c  add esp, 8
    X86_AT(c, 0xd977cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d977f  mov al, byte ptr [eax + 0xb0518]
    X86_AT(c, 0xd977fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u))));
    // 0d9785  cmp al, 3
    X86_AT(c, 0xd9785u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0d9787  ja 0xd9814
    X86_AT(c, 0xd9787u);
    if (x86_cc(c, 7)) { goto L_d9814; }
    X86_TICK(c, 17);
    // 0d978d  movzx eax, al
    X86_AT(c, 0xd978du);
    c.r[0] = g8(c, 0);
    // 0d9790  push dword ptr [eax*4 + 0xa1ed4]
    X86_AT(c, 0xd9790u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] * 4 + 0xA1ED4u))); push32(c, v); }
    // 0d9797  push 4
    X86_AT(c, 0xd9797u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9799  call 0xc8cdc
    X86_AT(c, 0xd9799u);
    push32(c, 0xd979eu); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd979eu);
    X86_TICK(c, 2);
    // 0d979e  mov dword ptr [ebp - 4], 9
    X86_AT(c, 0xd979eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x9u);
L_d97a5:
    X86_TICK(c, 9);
    // 0d97a5  add esp, 8
    X86_AT(c, 0xd97a5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d97a8  jmp 0xd89fa
    X86_AT(c, 0xd97a8u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d97ad:
    X86_TICK(c, 7);
    // 0d97ad  cmp bl, 1
    X86_AT(c, 0xd97adu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0d97b0  jne 0xd97c8
    X86_AT(c, 0xd97b0u);
    if (x86_cc(c, 5)) { goto L_d97c8; }
L_d97b2:
    X86_TICK(c, 11);
    // 0d97b2  push 0xd
    X86_AT(c, 0xd97b2u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d97b4  push 5
    X86_AT(c, 0xd97b4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d97b6  call 0xca2d4
    X86_AT(c, 0xd97b6u);
    push32(c, 0xd97bbu); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd97bbu);
    X86_TICK(c, 11);
    // 0d97bb  mov eax, 0xffffffff
    X86_AT(c, 0xd97bbu);
    c.r[0] = 0xFFFFFFFFu;
    // 0d97c0  add esp, 8
    X86_AT(c, 0xd97c0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d97c3  jmp 0xd9a1b
    X86_AT(c, 0xd97c3u);
    goto L_d9a1b;
L_d97c8:
    X86_TICK(c, 11);
    // 0d97c8  push 0xd
    X86_AT(c, 0xd97c8u);
    { uint32_t v = 0xDu; push32(c, v); }
    // 0d97ca  push 5
    X86_AT(c, 0xd97cau);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0d97cc  call 0xca2d4
    X86_AT(c, 0xd97ccu);
    push32(c, 0xd97d1u); x86_call_known(c, 0xca2d4u, f_000ca2d4); X86_RET(c, 0xd97d1u);
    X86_TICK(c, 35);
    // 0d97d1  imul eax, edi, 0x21a
    X86_AT(c, 0xd97d1u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d97d7  add esp, 8
    X86_AT(c, 0xd97d7u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d97da  mov al, byte ptr [eax + 0xb0519]
    X86_AT(c, 0xd97dau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0519u))));
    // 0d97e0  cmp al, 3
    X86_AT(c, 0xd97e0u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 0d97e2  jbe 0xd97f0
    X86_AT(c, 0xd97e2u);
    if (x86_cc(c, 6)) { goto L_d97f0; }
L_d97e4:
    X86_TICK(c, 9);
    // 0d97e4  mov dword ptr [ebp - 4], 7
    X86_AT(c, 0xd97e4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x7u);
    // 0d97eb  jmp 0xd89fa
    X86_AT(c, 0xd97ebu);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d97f0:
    X86_TICK(c, 33);
    // 0d97f0  imul eax, edi, 0x21a
    X86_AT(c, 0xd97f0u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d97f6  mov al, byte ptr [eax + 0xb0517]
    X86_AT(c, 0xd97f6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0517u))));
    // 0d97fc  cmp al, 4
    X86_AT(c, 0xd97fcu);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 0d97fe  ja 0xd9962
    X86_AT(c, 0xd97feu);
    if (x86_cc(c, 7)) { goto L_d9962; }
    X86_TICK(c, 33);
    // 0d9804  imul eax, edi, 0x21a
    X86_AT(c, 0xd9804u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d980a  mov al, byte ptr [eax + 0xb0518]
    X86_AT(c, 0xd980au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0518u))));
    // 0d9810  cmp al, 4
    X86_AT(c, 0xd9810u);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 0d9812  jbe 0xd9820
    X86_AT(c, 0xd9812u);
    if (x86_cc(c, 6)) { goto L_d9820; }
L_d9814:
    X86_TICK(c, 9);
    // 0d9814  mov dword ptr [ebp - 4], 8
    X86_AT(c, 0xd9814u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x8u);
    // 0d981b  jmp 0xd89fa
    X86_AT(c, 0xd981bu);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d9820:
    X86_TICK(c, 9);
    // 0d9820  mov dword ptr [ebp - 4], 9
    X86_AT(c, 0xd9820u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x9u);
    // 0d9827  jmp 0xd89fa
    X86_AT(c, 0xd9827u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d982c:
    X86_TICK(c, 11);
    // 0d982c  push 0xf
    X86_AT(c, 0xd982cu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d982e  push 0x28
    X86_AT(c, 0xd982eu);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9830  call 0xcc814
    X86_AT(c, 0xd9830u);
    push32(c, 0xd9835u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9835u);
    X86_TICK(c, 11);
    // 0d9835  push 0xb5a4
    X86_AT(c, 0xd9835u);
    { uint32_t v = 0xB5A4u; push32(c, v); }
    // 0d983a  push 4
    X86_AT(c, 0xd983au);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d983c  call 0xca414
    X86_AT(c, 0xd983cu);
    push32(c, 0xd9841u); x86_call_known(c, 0xca414u, f_000ca414); X86_RET(c, 0xd9841u);
    X86_TICK(c, 11);
    // 0d9841  push 0xf
    X86_AT(c, 0xd9841u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d9843  push 0x28
    X86_AT(c, 0xd9843u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d9845  call 0xcc814
    X86_AT(c, 0xd9845u);
    push32(c, 0xd984au); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd984au);
    X86_TICK(c, 15);
    // 0d984a  push 0xf
    X86_AT(c, 0xd984au);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d984c  lea eax, [ebp - 0x3c]
    X86_AT(c, 0xd984cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC4u);
    // 0d984f  push eax
    X86_AT(c, 0xd984fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0d9850  push 4
    X86_AT(c, 0xd9850u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9852  call 0xc85e4
    X86_AT(c, 0xd9852u);
    push32(c, 0xd9857u); x86_call_known(c, 0xc85e4u, f_000c85e4); X86_RET(c, 0xd9857u);
    X86_TICK(c, 9);
    // 0d9857  add esp, 0x24
    X86_AT(c, 0xd9857u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x24u, 0, 4); }
    // 0d985a  and eax, eax
    X86_AT(c, 0xd985au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0d985c  jne 0xd9868
    X86_AT(c, 0xd985cu);
    if (x86_cc(c, 5)) { goto L_d9868; }
L_d985e:
    X86_TICK(c, 9);
    // 0d985e  mov eax, 0xffffffff
    X86_AT(c, 0xd985eu);
    c.r[0] = 0xFFFFFFFFu;
    // 0d9863  jmp 0xd9a1b
    X86_AT(c, 0xd9863u);
    goto L_d9a1b;
L_d9868:
    X86_TICK(c, 2);
    // 0d9868  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xd9868u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_d986f:
    X86_TICK(c, 16);
    // 0d986f  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xd986fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d9872  cmp byte ptr [ebp + eax*1 - 0x3c], 0x20
    X86_AT(c, 0xd9872u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFC4u))), 0x20u, 0, 1);
    // 0d9877  jne 0xd987e
    X86_AT(c, 0xd9877u);
    if (x86_cc(c, 5)) { goto L_d987e; }
    X86_TICK(c, 13);
    // 0d9879  inc dword ptr [ebp - 8]
    X86_AT(c, 0xd9879u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d987c  jmp 0xd986f
    X86_AT(c, 0xd987cu);
    X86_POLL(c, 0xd986fu); goto L_d986f;
L_d987e:
    X86_TICK(c, 2);
    // 0d987e  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xd987eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_d9885:
    X86_TICK(c, 45);
    // 0d9885  imul eax, edi, 0x21a
    X86_AT(c, 0xd9885u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d988b  add eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xd988bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
    // 0d988e  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xd988eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0d9891  mov cl, byte ptr [ebp + edx*1 - 0x3c]
    X86_AT(c, 0xd9891u);
    s8(c, 1, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[2] + 0xFFFFFFC4u))));
    // 0d9895  mov byte ptr [eax + 0xb0508], cl
    X86_AT(c, 0xd9895u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0508u)), g8(c, 1));
    // 0d989b  and cl, cl
    X86_AT(c, 0xd989bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0d989d  je 0xd98a7
    X86_AT(c, 0xd989du);
    if (x86_cc(c, 4)) { goto L_d98a7; }
    X86_TICK(c, 19);
    // 0d989f  inc dword ptr [ebp - 8]
    X86_AT(c, 0xd989fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d98a2  inc dword ptr [ebp - 0xc]
    X86_AT(c, 0xd98a2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0d98a5  jmp 0xd9885
    X86_AT(c, 0xd98a5u);
    X86_POLL(c, 0xd9885u); goto L_d9885;
L_d98a7:
    X86_TICK(c, 11);
    // 0d98a7  push 0xf
    X86_AT(c, 0xd98a7u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d98a9  push 0x28
    X86_AT(c, 0xd98a9u);
    { uint32_t v = 0x28u; push32(c, v); }
    // 0d98ab  call 0xcc814
    X86_AT(c, 0xd98abu);
    push32(c, 0xd98b0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd98b0u);
    X86_TICK(c, 35);
    // 0d98b0  imul eax, edi, 0x21a
    X86_AT(c, 0xd98b0u);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d98b6  lea edx, [eax*1 + 0xb0508]
    X86_AT(c, 0xd98b6u);
    c.r[2] = (uint32_t)(c.r[0] + 0xB0508u);
    // 0d98bd  push edx
    X86_AT(c, 0xd98bdu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d98be  push 4
    X86_AT(c, 0xd98beu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d98c0  call 0xca850
    X86_AT(c, 0xd98c0u);
    push32(c, 0xd98c5u); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xd98c5u);
    X86_TICK(c, 9);
    // 0d98c5  add esp, 0x10
    X86_AT(c, 0xd98c5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0d98c8  cmp bl, 5
    X86_AT(c, 0xd98c8u);
    (void)x86_sub(c, g8(c, 3), 0x5u, 0, 1);
    // 0d98cb  je 0xd9962
    X86_AT(c, 0xd98cbu);
    if (x86_cc(c, 4)) { goto L_d9962; }
    X86_TICK(c, 9);
    // 0d98d1  mov dword ptr [ebp - 4], 0xa
    X86_AT(c, 0xd98d1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xAu);
    // 0d98d8  jmp 0xd89fa
    X86_AT(c, 0xd98d8u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d98dd:
    X86_TICK(c, 11);
    // 0d98dd  push 3
    X86_AT(c, 0xd98ddu);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d98df  push 0xf
    X86_AT(c, 0xd98dfu);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d98e1  call 0xcc814
    X86_AT(c, 0xd98e1u);
    push32(c, 0xd98e6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd98e6u);
    X86_TICK(c, 11);
    // 0d98e6  push 0xb5c4
    X86_AT(c, 0xd98e6u);
    { uint32_t v = 0xB5C4u; push32(c, v); }
    // 0d98eb  push 4
    X86_AT(c, 0xd98ebu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d98ed  call 0xc8cdc
    X86_AT(c, 0xd98edu);
    push32(c, 0xd98f2u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd98f2u);
    X86_TICK(c, 11);
    // 0d98f2  push 3
    X86_AT(c, 0xd98f2u);
    { uint32_t v = 0x3u; push32(c, v); }
    // 0d98f4  push 0xf
    X86_AT(c, 0xd98f4u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d98f6  call 0xcc814
    X86_AT(c, 0xd98f6u);
    push32(c, 0xd98fbu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd98fbu);
    X86_TICK(c, 35);
    // 0d98fb  imul eax, edi, 0x21a
    X86_AT(c, 0xd98fbu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9901  lea edx, [eax*1 + 0xb0508]
    X86_AT(c, 0xd9901u);
    c.r[2] = (uint32_t)(c.r[0] + 0xB0508u);
    // 0d9908  push edx
    X86_AT(c, 0xd9908u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0d9909  push 4
    X86_AT(c, 0xd9909u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d990b  call 0xca850
    X86_AT(c, 0xd990bu);
    push32(c, 0xd9910u); x86_call_known(c, 0xca850u, f_000ca850); X86_RET(c, 0xd9910u);
    X86_TICK(c, 11);
    // 0d9910  push 4
    X86_AT(c, 0xd9910u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9912  push 0xf
    X86_AT(c, 0xd9912u);
    { uint32_t v = 0xFu; push32(c, v); }
    // 0d9914  call 0xcc814
    X86_AT(c, 0xd9914u);
    push32(c, 0xd9919u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9919u);
    X86_TICK(c, 11);
    // 0d9919  push 0xb600
    X86_AT(c, 0xd9919u);
    { uint32_t v = 0xB600u; push32(c, v); }
    // 0d991e  push 4
    X86_AT(c, 0xd991eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9920  call 0xc8cdc
    X86_AT(c, 0xd9920u);
    push32(c, 0xd9925u); x86_call_known(c, 0xc8cdcu, f_000c8cdc); X86_RET(c, 0xd9925u);
    X86_TICK(c, 9);
    // 0d9925  push 0xb640
    X86_AT(c, 0xd9925u);
    { uint32_t v = 0xB640u; push32(c, v); }
    // 0d992a  call 0xcad60
    X86_AT(c, 0xd992au);
    push32(c, 0xd992fu); x86_call_known(c, 0xcad60u, f_000cad60); X86_RET(c, 0xd992fu);
    X86_TICK(c, 2);
    // 0d992f  add esp, 0x34
    X86_AT(c, 0xd992fu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x34u, 0, 4); }
L_d9932:
    X86_TICK(c, 9);
    // 0d9932  push 4
    X86_AT(c, 0xd9932u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9934  call 0xc81e4
    X86_AT(c, 0xd9934u);
    push32(c, 0xd9939u); x86_call_known(c, 0xc81e4u, f_000c81e4); X86_RET(c, 0xd9939u);
    X86_TICK(c, 11);
    // 0d9939  mov byte ptr [ebp - 0x2d], al
    X86_AT(c, 0xd9939u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u)), g8(c, 0));
    // 0d993c  add esp, 4
    X86_AT(c, 0xd993cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x4u, 0, 4); }
    // 0d993f  cmp al, 0x59
    X86_AT(c, 0xd993fu);
    (void)x86_sub(c, g8(c, 0), 0x59u, 0, 1);
    // 0d9941  je 0xd994b
    X86_AT(c, 0xd9941u);
    if (x86_cc(c, 4)) { goto L_d994b; }
    X86_TICK(c, 7);
    // 0d9943  cmp al, 0x4e
    X86_AT(c, 0xd9943u);
    (void)x86_sub(c, g8(c, 0), 0x4Eu, 0, 1);
    // 0d9945  je 0xd994b
    X86_AT(c, 0xd9945u);
    if (x86_cc(c, 4)) { goto L_d994b; }
    X86_TICK(c, 7);
    // 0d9947  dec al
    X86_AT(c, 0xd9947u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0d9949  jne 0xd9932
    X86_AT(c, 0xd9949u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xd9932u); goto L_d9932; }
L_d994b:
    X86_TICK(c, 9);
    // 0d994b  push 2
    X86_AT(c, 0xd994bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d994d  call 0xca3cc
    X86_AT(c, 0xd994du);
    push32(c, 0xd9952u); x86_call_known(c, 0xca3ccu, f_000ca3cc); X86_RET(c, 0xd9952u);
    X86_TICK(c, 9);
    // 0d9952  push 4
    X86_AT(c, 0xd9952u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9954  call 0xca0a0
    X86_AT(c, 0xd9954u);
    push32(c, 0xd9959u); x86_call_known(c, 0xca0a0u, f_000ca0a0); X86_RET(c, 0xd9959u);
    X86_TICK(c, 14);
    // 0d9959  add esp, 8
    X86_AT(c, 0xd9959u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 0d995c  cmp byte ptr [ebp - 0x2d], 0x59
    X86_AT(c, 0xd995cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD3u))), 0x59u, 0, 1);
    // 0d9960  je 0xd996e
    X86_AT(c, 0xd9960u);
    if (x86_cc(c, 4)) { goto L_d996e; }
L_d9962:
    X86_TICK(c, 9);
    // 0d9962  mov dword ptr [ebp - 4], 6
    X86_AT(c, 0xd9962u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x6u);
    // 0d9969  jmp 0xd89fa
    X86_AT(c, 0xd9969u);
    X86_POLL(c, 0xd89fau); goto L_d89fa;
L_d996e:
    X86_TICK(c, 103);
    // 0d996e  imul eax, edi, 0x21a
    X86_AT(c, 0xd996eu);
    c.r[0] = x86_imul2(c, c.r[7], 0x21Au, 4);
    // 0d9974  mov edx, dword ptr [ebp - 0x10]
    X86_AT(c, 0xd9974u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)));
    // 0d9977  add edx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xd9977u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))), 0, 4); }
    // 0d997a  add dword ptr [eax + 0xb051e], edx
    X86_AT(c, 0xd997au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0d9980  mov edx, dword ptr [ebp - 0x18]
    X86_AT(c, 0xd9980u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0d9983  add edx, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xd9983u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0, 4); }
    // 0d9986  add dword ptr [eax + 0xb0522], edx
    X86_AT(c, 0xd9986u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0d998c  mov edx, dword ptr [ebp - 0x20]
    X86_AT(c, 0xd998cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0d998f  add edx, dword ptr [ebp - 0x24]
    X86_AT(c, 0xd998fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu))), 0, 4); }
    // 0d9992  add dword ptr [eax + 0xb052e], edx
    X86_AT(c, 0xd9992u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0d9998  mov edx, dword ptr [ebp - 0x28]
    X86_AT(c, 0xd9998u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD8u)));
    // 0d999b  add edx, dword ptr [ebp - 0x2c]
    X86_AT(c, 0xd999bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u))), 0, 4); }
    // 0d999e  add dword ptr [eax + 0xb0532], edx
    X86_AT(c, 0xd999eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0d99a4  push 6
    X86_AT(c, 0xd99a4u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0d99a6  push 0x34
    X86_AT(c, 0xd99a6u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d99a8  mov dword ptr [ebp - 0x4c], eax
    X86_AT(c, 0xd99a8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)), c.r[0]);
    // 0d99ab  call 0xcc814
    X86_AT(c, 0xd99abu);
    push32(c, 0xd99b0u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd99b0u);
    X86_TICK(c, 20);
    // 0d99b0  push 2
    X86_AT(c, 0xd99b0u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d99b2  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd99b2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d99b5  push dword ptr [eax + 0xb051e]
    X86_AT(c, 0xd99b5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB051Eu))); push32(c, v); }
    // 0d99bb  push 4
    X86_AT(c, 0xd99bbu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d99bd  call 0xc8cb8
    X86_AT(c, 0xd99bdu);
    push32(c, 0xd99c2u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd99c2u);
    X86_TICK(c, 11);
    // 0d99c2  push 7
    X86_AT(c, 0xd99c2u);
    { uint32_t v = 0x7u; push32(c, v); }
    // 0d99c4  push 0x34
    X86_AT(c, 0xd99c4u);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d99c6  call 0xcc814
    X86_AT(c, 0xd99c6u);
    push32(c, 0xd99cbu); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd99cbu);
    X86_TICK(c, 20);
    // 0d99cb  push 2
    X86_AT(c, 0xd99cbu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d99cd  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd99cdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d99d0  push dword ptr [eax + 0xb0522]
    X86_AT(c, 0xd99d0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0522u))); push32(c, v); }
    // 0d99d6  push 4
    X86_AT(c, 0xd99d6u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d99d8  call 0xc8cb8
    X86_AT(c, 0xd99d8u);
    push32(c, 0xd99ddu); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd99ddu);
    X86_TICK(c, 11);
    // 0d99dd  push 0xa
    X86_AT(c, 0xd99ddu);
    { uint32_t v = 0xAu; push32(c, v); }
    // 0d99df  push 0x34
    X86_AT(c, 0xd99dfu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d99e1  call 0xcc814
    X86_AT(c, 0xd99e1u);
    push32(c, 0xd99e6u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd99e6u);
    X86_TICK(c, 20);
    // 0d99e6  push 2
    X86_AT(c, 0xd99e6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d99e8  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd99e8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d99eb  push dword ptr [eax + 0xb052e]
    X86_AT(c, 0xd99ebu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB052Eu))); push32(c, v); }
    // 0d99f1  push 4
    X86_AT(c, 0xd99f1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d99f3  call 0xc8cb8
    X86_AT(c, 0xd99f3u);
    push32(c, 0xd99f8u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd99f8u);
    X86_TICK(c, 13);
    // 0d99f8  add esp, 0x3c
    X86_AT(c, 0xd99f8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x3Cu, 0, 4); }
    // 0d99fb  push 0xb
    X86_AT(c, 0xd99fbu);
    { uint32_t v = 0xBu; push32(c, v); }
    // 0d99fd  push 0x34
    X86_AT(c, 0xd99fdu);
    { uint32_t v = 0x34u; push32(c, v); }
    // 0d99ff  call 0xcc814
    X86_AT(c, 0xd99ffu);
    push32(c, 0xd9a04u); x86_call_known(c, 0xcc814u, f_000cc814); X86_RET(c, 0xd9a04u);
    X86_TICK(c, 20);
    // 0d9a04  push 2
    X86_AT(c, 0xd9a04u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0d9a06  mov eax, dword ptr [ebp - 0x4c]
    X86_AT(c, 0xd9a06u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFB4u)));
    // 0d9a09  push dword ptr [eax + 0xb0532]
    X86_AT(c, 0xd9a09u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xB0532u))); push32(c, v); }
    // 0d9a0f  push 4
    X86_AT(c, 0xd9a0fu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0d9a11  call 0xc8cb8
    X86_AT(c, 0xd9a11u);
    push32(c, 0xd9a16u); x86_call_known(c, 0xc8cb8u, f_000c8cb8); X86_RET(c, 0xd9a16u);
    X86_TICK(c, 4);
    // 0d9a16  sub eax, eax
    X86_AT(c, 0xd9a16u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0d9a18  add esp, 0x14
    X86_AT(c, 0xd9a18u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x14u, 0, 4); }
L_d9a1b:
    X86_TICK(c, 28);
    // 0d9a1b  pop edi
    X86_AT(c, 0xd9a1bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0d9a1c  pop esi
    X86_AT(c, 0xd9a1cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0d9a1d  pop ebx
    X86_AT(c, 0xd9a1du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0d9a1e  leave 
    X86_AT(c, 0xd9a1eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0d9a1f  ret 
    X86_AT(c, 0xd9a1fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd8960u, "ran off the end of a function");
}
}

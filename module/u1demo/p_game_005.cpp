#include "p_game_funcs.h"
namespace p_game {
void f_00093d15(X86Cpu& c) {
    X86_TICK(c, 16);
    // 093d15  leave 
    X86_AT(c, 0x93d15u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093d16  ret 
    X86_AT(c, 0x93d16u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x93d15u, "ran off the end of a function");
}
void f_00093d20(X86Cpu& c) {
    X86_TICK(c, 17);
    // 093d20  push ebp
    X86_AT(c, 0x93d20u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093d21  mov ebp, esp
    X86_AT(c, 0x93d21u);
    c.r[5] = c.r[4];
    // 093d23  push ecx
    X86_AT(c, 0x93d23u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093d24  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x93d24u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093d27  cmp ecx, 0xa
    X86_AT(c, 0x93d27u);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 093d2a  jge 0x93d31
    X86_AT(c, 0x93d2au);
    if (x86_cc(c, 13)) { goto L_93d31; }
    X86_TICK(c, 9);
    // 093d2c  add ecx, 0x30
    X86_AT(c, 0x93d2cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x30u, 0, 4); }
    // 093d2f  jmp 0x93d45
    X86_AT(c, 0x93d2fu);
    goto L_93d45;
L_93d31:
    X86_TICK(c, 20);
    // 093d31  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x93d31u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093d34  mov eax, dword ptr [eax - 4]
    X86_AT(c, 0x93d34u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 093d37  cmp byte ptr [eax + 0xc], 0x78
    X86_AT(c, 0x93d37u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))), 0x78u, 0, 1);
    // 093d3b  jne 0x93d42
    X86_AT(c, 0x93d3bu);
    if (x86_cc(c, 5)) { goto L_93d42; }
    X86_TICK(c, 9);
    // 093d3d  add ecx, 0x57
    X86_AT(c, 0x93d3du);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x57u, 0, 4); }
    // 093d40  jmp 0x93d45
    X86_AT(c, 0x93d40u);
    goto L_93d45;
L_93d42:
    X86_TICK(c, 2);
    // 093d42  add ecx, 0x37
    X86_AT(c, 0x93d42u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x37u, 0, 4); }
L_93d45:
    X86_TICK(c, 30);
    // 093d45  mov eax, ecx
    X86_AT(c, 0x93d45u);
    c.r[0] = c.r[1];
    // 093d47  mov edx, dword ptr [0x8a7c0]
    X86_AT(c, 0x93d47u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A7C0u)));
    // 093d4d  mov byte ptr [edx + 0x8a79f], al
    X86_AT(c, 0x93d4du);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8A79Fu)), g8(c, 0));
    // 093d53  dec dword ptr [0x8a7c0]
    X86_AT(c, 0x93d53u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A7C0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 093d59  leave 
    X86_AT(c, 0x93d59u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093d5a  ret 4
    X86_AT(c, 0x93d5au);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x93d20u, "ran off the end of a function");
}
void f_00093d6c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 093d6c  push ebp
    X86_AT(c, 0x93d6cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093d6d  mov ebp, esp
    X86_AT(c, 0x93d6du);
    c.r[5] = c.r[4];
    // 093d6f  push ecx
    X86_AT(c, 0x93d6fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093d70  push ebx
    X86_AT(c, 0x93d70u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093d71  push edi
    X86_AT(c, 0x93d71u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093d72  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x93d72u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093d75  mov edi, dword ptr [eax + 8]
    X86_AT(c, 0x93d75u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 093d78  mov dword ptr [0x8a7c0], 0x1e
    X86_AT(c, 0x93d78u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7C0u)), 0x1Eu);
    // 093d82  and edi, edi
    X86_AT(c, 0x93d82u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 093d84  jbe 0x93da9
    X86_AT(c, 0x93d84u);
    if (x86_cc(c, 6)) { goto L_93da9; }
    X86_TICK(c, 7);
    // 093d86  jmp 0x93da3
    X86_AT(c, 0x93d86u);
    goto L_93da3;
L_93d88:
    X86_TICK(c, 69);
    // 093d88  movzx ecx, byte ptr [0x8a7c8]
    X86_AT(c, 0x93d88u);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(0x8A7C8u)));
    // 093d8f  mov eax, edi
    X86_AT(c, 0x93d8fu);
    c.r[0] = c.r[7];
    // 093d91  sub edx, edx
    X86_AT(c, 0x93d91u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 093d93  div ecx
    X86_AT(c, 0x93d93u);
    x86_div(c, c.r[1], 4, 0x93d93u);
    // 093d95  mov ebx, edx
    X86_AT(c, 0x93d95u);
    c.r[3] = c.r[2];
    // 093d97  xchg edi, eax
    X86_AT(c, 0x93d97u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 093d98  movzx ebx, bl
    X86_AT(c, 0x93d98u);
    c.r[3] = g8(c, 3);
    // 093d9b  push ebx
    X86_AT(c, 0x93d9bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093d9c  mov ecx, ebp
    X86_AT(c, 0x93d9cu);
    c.r[1] = c.r[5];
    // 093d9e  call 0x93d20
    X86_AT(c, 0x93d9eu);
    push32(c, 0x93da3u); x86_call_known(c, 0x93d20u, f_00093d20); X86_RET(c, 0x93da3u);
L_93da3:
    X86_TICK(c, 7);
    // 093da3  and edi, edi
    X86_AT(c, 0x93da3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 093da5  ja 0x93d88
    X86_AT(c, 0x93da5u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x93d88u); goto L_93d88; }
    X86_TICK(c, 7);
    // 093da7  jmp 0x93dbb
    X86_AT(c, 0x93da7u);
    goto L_93dbb;
L_93da9:
    X86_TICK(c, 12);
    // 093da9  mov eax, dword ptr [0x8a7c0]
    X86_AT(c, 0x93da9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A7C0u)));
    // 093dae  mov byte ptr [eax + 0x8a79f], 0x30
    X86_AT(c, 0x93daeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8A79Fu)), 0x30u);
    // 093db5  dec dword ptr [0x8a7c0]
    X86_AT(c, 0x93db5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A7C0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_93dbb:
    X86_TICK(c, 40);
    // 093dbb  inc dword ptr [0x8a7c0]
    X86_AT(c, 0x93dbbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A7C0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 093dc1  mov eax, 0x1f
    X86_AT(c, 0x93dc1u);
    c.r[0] = 0x1Fu;
    // 093dc6  sub eax, dword ptr [0x8a7c0]
    X86_AT(c, 0x93dc6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A7C0u))), 0, 4); }
    // 093dcc  mov dword ptr [0x8a7c4], eax
    X86_AT(c, 0x93dccu);
    wr32((c.sbase[3] + (uint32_t)(0x8A7C4u)), c.r[0]);
    // 093dd1  pop edi
    X86_AT(c, 0x93dd1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093dd2  pop ebx
    X86_AT(c, 0x93dd2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093dd3  leave 
    X86_AT(c, 0x93dd3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093dd4  ret 
    X86_AT(c, 0x93dd4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x93d6cu, "ran off the end of a function");
}
void f_00093ddc(X86Cpu& c) {
    X86_TICK(c, 18);
    // 093ddc  push ebp
    X86_AT(c, 0x93ddcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093ddd  mov ebp, esp
    X86_AT(c, 0x93dddu);
    c.r[5] = c.r[4];
    // 093ddf  push ecx
    X86_AT(c, 0x93ddfu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093de0  push dword ptr [0x8a7d0]
    X86_AT(c, 0x93de0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A7D0u))); push32(c, v); }
    // 093de6  call 0x93874
    X86_AT(c, 0x93de6u);
    push32(c, 0x93debu); x86_call_known(c, 0x93874u, f_00093874); X86_RET(c, 0x93debu);
    X86_TICK(c, 22);
    // 093deb  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x93debu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093dee  mov byte ptr [eax - 5], 0
    X86_AT(c, 0x93deeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFBu)), 0x0u);
    // 093df2  leave 
    X86_AT(c, 0x93df2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093df3  ret 
    X86_AT(c, 0x93df3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x93ddcu, "ran off the end of a function");
}
void f_00093e08(X86Cpu& c) {
    X86_TICK(c, 24);
    // 093e08  push ebp
    X86_AT(c, 0x93e08u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093e09  mov ebp, esp
    X86_AT(c, 0x93e09u);
    c.r[5] = c.r[4];
    // 093e0b  push ecx
    X86_AT(c, 0x93e0bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093e0c  push eax
    X86_AT(c, 0x93e0cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 093e0d  push ebx
    X86_AT(c, 0x93e0du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093e0e  push edi
    X86_AT(c, 0x93e0eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093e0f  cmp dword ptr [0x8a474], 0
    X86_AT(c, 0x93e0fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A474u))), 0x0u, 0, 4);
    // 093e16  jne 0x93e2a
    X86_AT(c, 0x93e16u);
    if (x86_cc(c, 5)) { goto L_93e2a; }
    X86_TICK(c, 12);
    // 093e18  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0x93e18u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 093e1c  jne 0x93e2a
    X86_AT(c, 0x93e1cu);
    if (x86_cc(c, 5)) { goto L_93e2a; }
    X86_TICK(c, 9);
    // 093e1e  push 0
    X86_AT(c, 0x93e1eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 093e20  call 0x93874
    X86_AT(c, 0x93e20u);
    push32(c, 0x93e25u); x86_call_known(c, 0x93874u, f_00093874); X86_RET(c, 0x93e25u);
    X86_TICK(c, 7);
    // 093e25  jmp 0x93f50
    X86_AT(c, 0x93e25u);
    goto L_93f50;
L_93e2a:
    X86_TICK(c, 9);
    // 093e2a  mov ecx, ebp
    X86_AT(c, 0x93e2au);
    c.r[1] = c.r[5];
    // 093e2c  call 0x93c28
    X86_AT(c, 0x93e2cu);
    push32(c, 0x93e31u); x86_call_known(c, 0x93c28u, f_00093c28); X86_RET(c, 0x93e31u);
    X86_TICK(c, 9);
    // 093e31  mov ecx, ebp
    X86_AT(c, 0x93e31u);
    c.r[1] = c.r[5];
    // 093e33  call 0x93d6c
    X86_AT(c, 0x93e33u);
    push32(c, 0x93e38u); x86_call_known(c, 0x93d6cu, f_00093d6c); X86_RET(c, 0x93e38u);
    X86_TICK(c, 12);
    // 093e38  cmp dword ptr [0x8a474], 0xffff
    X86_AT(c, 0x93e38u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A474u))), 0xFFFFu, 0, 4);
    // 093e42  jne 0x93e50
    X86_AT(c, 0x93e42u);
    if (x86_cc(c, 5)) { goto L_93e50; }
    X86_TICK(c, 13);
    // 093e44  mov eax, dword ptr [0x8a7c4]
    X86_AT(c, 0x93e44u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A7C4u)));
    // 093e49  mov dword ptr [0x8a7d0], eax
    X86_AT(c, 0x93e49u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7D0u)), c.r[0]);
    // 093e4e  jmp 0x93e66
    X86_AT(c, 0x93e4eu);
    goto L_93e66;
L_93e50:
    X86_TICK(c, 15);
    // 093e50  mov eax, dword ptr [0x8a474]
    X86_AT(c, 0x93e50u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A474u)));
    // 093e55  mov edx, dword ptr [0x8a7c4]
    X86_AT(c, 0x93e55u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A7C4u)));
    // 093e5b  cmp eax, edx
    X86_AT(c, 0x93e5bu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 093e5d  jb 0x93e60
    X86_AT(c, 0x93e5du);
    if (x86_cc(c, 2)) { goto L_93e60; }
    X86_TICK(c, 3);
    // 093e5f  xchg edx, eax
    X86_AT(c, 0x93e5fu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_93e60:
    X86_TICK(c, 2);
    // 093e60  mov dword ptr [0x8a7d0], edx
    X86_AT(c, 0x93e60u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7D0u)), c.r[2]);
L_93e66:
    X86_TICK(c, 11);
    // 093e66  mov eax, dword ptr [0x8a470]
    X86_AT(c, 0x93e66u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A470u)));
    // 093e6b  cmp eax, 0xffff
    X86_AT(c, 0x93e6bu);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 093e70  je 0x93e7e
    X86_AT(c, 0x93e70u);
    if (x86_cc(c, 4)) { goto L_93e7e; }
    X86_TICK(c, 11);
    // 093e72  cmp eax, dword ptr [0x8a7d0]
    X86_AT(c, 0x93e72u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A7D0u))), 0, 4);
    // 093e78  jbe 0x93e7e
    X86_AT(c, 0x93e78u);
    if (x86_cc(c, 6)) { goto L_93e7e; }
    X86_TICK(c, 9);
    // 093e7a  mov bl, 1
    X86_AT(c, 0x93e7au);
    s8(c, 3, 0x1u);
    // 093e7c  jmp 0x93e80
    X86_AT(c, 0x93e7cu);
    goto L_93e80;
L_93e7e:
    X86_TICK(c, 2);
    // 093e7e  sub ebx, ebx
    X86_AT(c, 0x93e7eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_93e80:
    X86_TICK(c, 9);
    // 093e80  mov byte ptr [ebp - 5], bl
    X86_AT(c, 0x93e80u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 3));
    // 093e83  and bl, bl
    X86_AT(c, 0x93e83u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 093e85  je 0x93ea0
    X86_AT(c, 0x93e85u);
    if (x86_cc(c, 4)) { goto L_93ea0; }
    X86_TICK(c, 12);
    // 093e87  test byte ptr [0x8a46c], 1
    X86_AT(c, 0x93e87u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x1u, 1);
    // 093e8e  jne 0x93ea0
    X86_AT(c, 0x93e8eu);
    if (x86_cc(c, 5)) { goto L_93ea0; }
    X86_TICK(c, 12);
    // 093e90  test byte ptr [0x8a46c], 0x10
    X86_AT(c, 0x93e90u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x10u, 1);
    // 093e97  jne 0x93ea0
    X86_AT(c, 0x93e97u);
    if (x86_cc(c, 5)) { goto L_93ea0; }
    X86_TICK(c, 9);
    // 093e99  mov ecx, ebp
    X86_AT(c, 0x93e99u);
    c.r[1] = c.r[5];
    // 093e9b  call 0x93ddc
    X86_AT(c, 0x93e9bu);
    push32(c, 0x93ea0u); x86_call_known(c, 0x93ddcu, f_00093ddc); X86_RET(c, 0x93ea0u);
L_93ea0:
    X86_TICK(c, 11);
    // 093ea0  mov eax, dword ptr [0x8a7d4]
    X86_AT(c, 0x93ea0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A7D4u)));
    // 093ea5  and eax, eax
    X86_AT(c, 0x93ea5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 093ea7  je 0x93ebb
    X86_AT(c, 0x93ea7u);
    if (x86_cc(c, 4)) { goto L_93ebb; }
    X86_TICK(c, 15);
    // 093ea9  push eax
    X86_AT(c, 0x93ea9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 093eaa  push 0x8a7ca
    X86_AT(c, 0x93eaau);
    { uint32_t v = 0x8A7CAu; push32(c, v); }
    // 093eaf  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x93eafu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 093eb5  call dword ptr [0x8a480]
    X86_AT(c, 0x93eb5u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x93ebbu); x86_call(c, t); X86_RET(c, 0x93ebbu); }
L_93ebb:
    X86_TICK(c, 12);
    // 093ebb  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0x93ebbu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 093ebf  je 0x93ed1
    X86_AT(c, 0x93ebfu);
    if (x86_cc(c, 4)) { goto L_93ed1; }
    X86_TICK(c, 12);
    // 093ec1  test byte ptr [0x8a46c], 1
    X86_AT(c, 0x93ec1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x1u, 1);
    // 093ec8  jne 0x93ed1
    X86_AT(c, 0x93ec8u);
    if (x86_cc(c, 5)) { goto L_93ed1; }
    X86_TICK(c, 9);
    // 093eca  mov ecx, ebp
    X86_AT(c, 0x93ecau);
    c.r[1] = c.r[5];
    // 093ecc  call 0x93ddc
    X86_AT(c, 0x93eccu);
    push32(c, 0x93ed1u); x86_call_known(c, 0x93ddcu, f_00093ddc); X86_RET(c, 0x93ed1u);
L_93ed1:
    X86_TICK(c, 11);
    // 093ed1  mov eax, dword ptr [0x8a474]
    X86_AT(c, 0x93ed1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A474u)));
    // 093ed6  cmp eax, 0xffff
    X86_AT(c, 0x93ed6u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 093edb  je 0x93efd
    X86_AT(c, 0x93edbu);
    if (x86_cc(c, 4)) { goto L_93efd; }
    X86_TICK(c, 11);
    // 093edd  mov edx, dword ptr [0x8a7c4]
    X86_AT(c, 0x93eddu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A7C4u)));
    // 093ee3  cmp eax, edx
    X86_AT(c, 0x93ee3u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 093ee5  jbe 0x93efd
    X86_AT(c, 0x93ee5u);
    if (x86_cc(c, 6)) { goto L_93efd; }
    X86_TICK(c, 23);
    // 093ee7  xchg edi, eax
    X86_AT(c, 0x93ee7u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 093ee8  sub edi, edx
    X86_AT(c, 0x93ee8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[2], 0, 4); }
    // 093eea  add dword ptr [0x8a47c], edi
    X86_AT(c, 0x93eeau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A47Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 093ef0  push edi
    X86_AT(c, 0x93ef0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093ef1  push 0x8a488
    X86_AT(c, 0x93ef1u);
    { uint32_t v = 0x8A488u; push32(c, v); }
    // 093ef6  call 0x9382c
    X86_AT(c, 0x93ef6u);
    push32(c, 0x93efbu); x86_call_known(c, 0x9382cu, f_0009382c); X86_RET(c, 0x93efbu);
    X86_TICK(c, 7);
    // 093efb  jmp 0x93f20
    X86_AT(c, 0x93efbu);
    goto L_93f20;
L_93efd:
    X86_TICK(c, 12);
    // 093efd  cmp dword ptr [0x8a474], 0
    X86_AT(c, 0x93efdu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A474u))), 0x0u, 0, 4);
    // 093f04  jne 0x93f20
    X86_AT(c, 0x93f04u);
    if (x86_cc(c, 5)) { goto L_93f20; }
    X86_TICK(c, 12);
    // 093f06  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0x93f06u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 093f0a  jne 0x93f20
    X86_AT(c, 0x93f0au);
    if (x86_cc(c, 5)) { goto L_93f20; }
    X86_TICK(c, 4);
    // 093f0c  mov dword ptr [0x8a7c0], 0x1f
    X86_AT(c, 0x93f0cu);
    wr32((c.sbase[3] + (uint32_t)(0x8A7C0u)), 0x1Fu);
    // 093f16  mov dword ptr [0x8a7c4], 0
    X86_AT(c, 0x93f16u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7C4u)), 0x0u);
L_93f20:
    X86_TICK(c, 32);
    // 093f20  mov eax, dword ptr [0x8a7c4]
    X86_AT(c, 0x93f20u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A7C4u)));
    // 093f25  add dword ptr [0x8a47c], eax
    X86_AT(c, 0x93f25u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A47Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 093f2b  push eax
    X86_AT(c, 0x93f2bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 093f2c  mov eax, dword ptr [0x8a7c0]
    X86_AT(c, 0x93f2cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A7C0u)));
    // 093f31  add eax, 0x8a79f
    X86_AT(c, 0x93f31u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8A79Fu, 0, 4); }
    // 093f36  push eax
    X86_AT(c, 0x93f36u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 093f37  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x93f37u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 093f3d  call dword ptr [0x8a480]
    X86_AT(c, 0x93f3du);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x93f43u); x86_call(c, t); X86_RET(c, 0x93f43u); }
    X86_TICK(c, 12);
    // 093f43  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0x93f43u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 093f47  je 0x93f50
    X86_AT(c, 0x93f47u);
    if (x86_cc(c, 4)) { goto L_93f50; }
    X86_TICK(c, 9);
    // 093f49  mov ecx, ebp
    X86_AT(c, 0x93f49u);
    c.r[1] = c.r[5];
    // 093f4b  call 0x93ddc
    X86_AT(c, 0x93f4bu);
    push32(c, 0x93f50u); x86_call_known(c, 0x93ddcu, f_00093ddc); X86_RET(c, 0x93f50u);
L_93f50:
    X86_TICK(c, 24);
    // 093f50  pop edi
    X86_AT(c, 0x93f50u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093f51  pop ebx
    X86_AT(c, 0x93f51u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093f52  leave 
    X86_AT(c, 0x93f52u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093f53  ret 8
    X86_AT(c, 0x93f53u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x93e08u, "ran off the end of a function");
}
void f_00093f64(X86Cpu& c) {
    X86_TICK(c, 25);
    // 093f64  push ebp
    X86_AT(c, 0x93f64u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093f65  mov ebp, esp
    X86_AT(c, 0x93f65u);
    c.r[5] = c.r[4];
    // 093f67  push ecx
    X86_AT(c, 0x93f67u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093f68  push esi
    X86_AT(c, 0x93f68u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093f69  push edi
    X86_AT(c, 0x93f69u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093f6a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x93f6au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093f6d  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x93f6du);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 093f70  jmp 0x93f92
    X86_AT(c, 0x93f70u);
    goto L_93f92;
L_93f72:
    X86_TICK(c, 14);
    // 093f72  mov ecx, edi
    X86_AT(c, 0x93f72u);
    c.r[1] = c.r[7];
    // 093f74  and ecx, 0xf
    X86_AT(c, 0x93f74u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0xFu, 4); }
    // 093f7a  shr edi, 4
    X86_AT(c, 0x93f7au);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[7] = r; }
    // 093f7d  cmp ecx, 0xa
    X86_AT(c, 0x93f7du);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 093f80  jae 0x93f87
    X86_AT(c, 0x93f80u);
    if (x86_cc(c, 3)) { goto L_93f87; }
    X86_TICK(c, 9);
    // 093f82  lea eax, [ecx + 0x30]
    X86_AT(c, 0x93f82u);
    c.r[0] = (uint32_t)(c.r[1] + 0x30u);
    // 093f85  jmp 0x93f8a
    X86_AT(c, 0x93f85u);
    goto L_93f8a;
L_93f87:
    X86_TICK(c, 2);
    // 093f87  lea eax, [ecx + 0x57]
    X86_AT(c, 0x93f87u);
    c.r[0] = (uint32_t)(c.r[1] + 0x57u);
L_93f8a:
    X86_TICK(c, 8);
    // 093f8a  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x93f8au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093f8d  mov byte ptr [edx + esi*1 - 0xf], al
    X86_AT(c, 0x93f8du);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] + 0xFFFFFFF1u)), g8(c, 0));
    // 093f91  dec esi
    X86_AT(c, 0x93f91u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_93f92:
    X86_TICK(c, 7);
    // 093f92  and edi, edi
    X86_AT(c, 0x93f92u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 093f94  ja 0x93f72
    X86_AT(c, 0x93f94u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x93f72u); goto L_93f72; }
    X86_TICK(c, 24);
    // 093f96  pop edi
    X86_AT(c, 0x93f96u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093f97  pop esi
    X86_AT(c, 0x93f97u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093f98  leave 
    X86_AT(c, 0x93f98u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093f99  ret 8
    X86_AT(c, 0x93f99u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x93f64u, "ran off the end of a function");
}
void f_00093fac(X86Cpu& c) {
    X86_TICK(c, 66);
    // 093fac  push ebp
    X86_AT(c, 0x93facu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093fad  mov ebp, esp
    X86_AT(c, 0x93fadu);
    c.r[5] = c.r[4];
    // 093faf  push ecx
    X86_AT(c, 0x93fafu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093fb0  sub esp, 0xc
    X86_AT(c, 0x93fb0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 093fb3  push ebx
    X86_AT(c, 0x93fb3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093fb4  push esi
    X86_AT(c, 0x93fb4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093fb5  push edi
    X86_AT(c, 0x93fb5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093fb6  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x93fb6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093fb9  mov eax, 0x30303030
    X86_AT(c, 0x93fb9u);
    c.r[0] = 0x30303030u;
    // 093fbe  lea ecx, [ebp - 0xe]
    X86_AT(c, 0x93fbeu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 093fc1  push edi
    X86_AT(c, 0x93fc1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093fc2  mov edi, ecx
    X86_AT(c, 0x93fc2u);
    c.r[7] = c.r[1];
    // 093fc4  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x93fc4u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 093fc5  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x93fc5u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 093fc6  stosw word ptr es:[edi], ax
    X86_AT(c, 0x93fc6u);
    x86_string(c, 2, 2, 0, 4, 3);
    // 093fc8  pop edi
    X86_AT(c, 0x93fc8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093fc9  mov ebx, 8
    X86_AT(c, 0x93fc9u);
    c.r[3] = 0x8u;
    // 093fce  push ebx
    X86_AT(c, 0x93fceu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093fcf  push edi
    X86_AT(c, 0x93fcfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093fd0  mov ecx, ebp
    X86_AT(c, 0x93fd0u);
    c.r[1] = c.r[5];
    // 093fd2  call 0x93f64
    X86_AT(c, 0x93fd2u);
    push32(c, 0x93fd7u); x86_call_known(c, 0x93f64u, f_00093f64); X86_RET(c, 0x93fd7u);
    X86_TICK(c, 24);
    // 093fd7  add dword ptr [0x8a47c], ebx
    X86_AT(c, 0x93fd7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A47Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[3], 0, 4)); }
    // 093fdd  push ebx
    X86_AT(c, 0x93fddu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093fde  lea eax, [ebp - 0xe]
    X86_AT(c, 0x93fdeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 093fe1  push eax
    X86_AT(c, 0x93fe1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 093fe2  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x93fe2u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 093fe8  call dword ptr [0x8a480]
    X86_AT(c, 0x93fe8u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x93feeu); x86_call(c, t); X86_RET(c, 0x93feeu); }
    X86_TICK(c, 28);
    // 093fee  pop edi
    X86_AT(c, 0x93feeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093fef  pop esi
    X86_AT(c, 0x93fefu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093ff0  pop ebx
    X86_AT(c, 0x93ff0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093ff1  leave 
    X86_AT(c, 0x93ff1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093ff2  ret 4
    X86_AT(c, 0x93ff2u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x93facu, "ran off the end of a function");
}
void f_00094000(X86Cpu& c) {
    X86_TICK(c, 32);
    // 094000  push ebp
    X86_AT(c, 0x94000u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094001  mov ebp, esp
    X86_AT(c, 0x94001u);
    c.r[5] = c.r[4];
    // 094003  push edi
    X86_AT(c, 0x94003u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094004  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x94004u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094007  sub eax, eax
    X86_AT(c, 0x94007u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094009  mov dword ptr [0x8a47c], eax
    X86_AT(c, 0x94009u);
    wr32((c.sbase[3] + (uint32_t)(0x8A47Cu)), c.r[0]);
    // 09400e  mov edx, 0x7fffffff
    X86_AT(c, 0x9400eu);
    c.r[2] = 0x7FFFFFFFu;
    // 094013  push edi
    X86_AT(c, 0x94013u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094014  mov ecx, edx
    X86_AT(c, 0x94014u);
    c.r[1] = c.r[2];
    // 094016  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x94016u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 094018  jne 0x9401d
    X86_AT(c, 0x94018u);
    if (x86_cc(c, 5)) { goto L_9401d; }
    X86_TICK(c, 4);
    // 09401a  inc ecx
    X86_AT(c, 0x9401au);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 09401b  sub edx, ecx
    X86_AT(c, 0x9401bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_9401d:
    X86_TICK(c, 27);
    // 09401d  pop edi
    X86_AT(c, 0x9401du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09401e  mov dword ptr [0x8a794], edx
    X86_AT(c, 0x9401eu);
    wr32((c.sbase[3] + (uint32_t)(0x8A794u)), c.r[2]);
    // 094024  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x94024u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 094027  mov dword ptr [0x8a788], eax
    X86_AT(c, 0x94027u);
    wr32((c.sbase[3] + (uint32_t)(0x8A788u)), c.r[0]);
    // 09402c  push ebp
    X86_AT(c, 0x9402cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09402d  push 0x94048
    X86_AT(c, 0x9402du);
    { uint32_t v = 0x94048u; push32(c, v); }
    // 094032  push edi
    X86_AT(c, 0x94032u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094033  mov ecx, ebp
    X86_AT(c, 0x94033u);
    c.r[1] = c.r[5];
    // 094035  call 0x939f0
    X86_AT(c, 0x94035u);
    push32(c, 0x9403au); x86_call_known(c, 0x939f0u, f_000939f0); X86_RET(c, 0x9403au);
    X86_TICK(c, 20);
    // 09403a  pop edi
    X86_AT(c, 0x9403au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09403b  leave 
    X86_AT(c, 0x9403bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09403c  ret 8
    X86_AT(c, 0x9403cu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x94000u, "ran off the end of a function");
}
void f_00094048(X86Cpu& c) {
    X86_TICK(c, 28);
    // 094048  push ebp
    X86_AT(c, 0x94048u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094049  mov ebp, esp
    X86_AT(c, 0x94049u);
    c.r[5] = c.r[4];
    // 09404b  push ecx
    X86_AT(c, 0x9404bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 09404c  sub esp, 8
    X86_AT(c, 0x9404cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 09404f  push ebx
    X86_AT(c, 0x9404fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094050  push esi
    X86_AT(c, 0x94050u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094051  push edi
    X86_AT(c, 0x94051u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094052  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x94052u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 094055  movzx eax, bl
    X86_AT(c, 0x94055u);
    c.r[0] = g8(c, 3);
    // 094058  cmp eax, 0x25
    X86_AT(c, 0x94058u);
    (void)x86_sub(c, c.r[0], 0x25u, 0, 4);
    // 09405b  je 0x94221
    X86_AT(c, 0x9405bu);
    if (x86_cc(c, 4)) { goto L_94221; }
    X86_TICK(c, 7);
    // 094061  cmp eax, 0x30
    X86_AT(c, 0x94061u);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 094064  je 0x9414e
    X86_AT(c, 0x94064u);
    if (x86_cc(c, 4)) { goto L_9414e; }
    X86_TICK(c, 9);
    // 09406a  sub eax, 0x45
    X86_AT(c, 0x9406au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x45u, 0, 4); }
    // 09406d  cmp eax, 0x33
    X86_AT(c, 0x9406du);
    (void)x86_sub(c, c.r[0], 0x33u, 0, 4);
    // 094070  ja 0x942de
    X86_AT(c, 0x94070u);
    if (x86_cc(c, 7)) { goto L_942de; }
    X86_TICK(c, 7);
    // 094076  jmp dword ptr cs:[eax*4 + 0x9407e]
    X86_AT(c, 0x94076u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x9407Eu)));
      switch (t) {
      case 0x94171u: goto L_94171;
      case 0x941a0u: goto L_941a0;
      case 0x941e4u: goto L_941e4;
      case 0x94206u: goto L_94206;
      case 0x94261u: goto L_94261;
      case 0x94274u: goto L_94274;
      case 0x942deu: goto L_942de;
      default: x86_jump(c, t); return; } }
L_9414e:
    X86_TICK(c, 29);
    // 09414e  mov eax, dword ptr [0x8a790]
    X86_AT(c, 0x9414eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A790u)));
    // 094153  add dword ptr [0x8a47c], eax
    X86_AT(c, 0x94153u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A47Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 094159  push eax
    X86_AT(c, 0x94159u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09415a  push dword ptr [0x8a78c]
    X86_AT(c, 0x9415au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A78Cu))); push32(c, v); }
    // 094160  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x94160u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 094166  call dword ptr [0x8a480]
    X86_AT(c, 0x94166u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x9416cu); x86_call(c, t); X86_RET(c, 0x9416cu); }
    X86_TICK(c, 7);
    // 09416c  jmp 0x942e7
    X86_AT(c, 0x9416cu);
    goto L_942e7;
L_94171:
    X86_TICK(c, 42);
    // 094171  cmp byte ptr [0x8a478], 2
    X86_AT(c, 0x94171u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A478u))), 0x2u, 0, 1);
    // 094178  mov eax, dword ptr [0x8a788]
    X86_AT(c, 0x94178u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A788u)));
    // 09417d  mov edx, dword ptr [eax]
    X86_AT(c, 0x9417du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 09417f  mov dword ptr [0x8a798], edx
    X86_AT(c, 0x9417fu);
    wr32((c.sbase[3] + (uint32_t)(0x8A798u)), c.r[2]);
    // 094185  add dword ptr [0x8a788], 4
    X86_AT(c, 0x94185u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A788u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 09418c  push ebx
    X86_AT(c, 0x9418cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09418d  push dword ptr [0x8a798]
    X86_AT(c, 0x9418du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A798u))); push32(c, v); }
    // 094193  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x94193u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094196  call 0x93e08
    X86_AT(c, 0x94196u);
    push32(c, 0x9419bu); x86_call_known(c, 0x93e08u, f_00093e08); X86_RET(c, 0x9419bu);
    X86_TICK(c, 7);
    // 09419b  jmp 0x942e7
    X86_AT(c, 0x9419bu);
    goto L_942e7;
L_941a0:
    X86_TICK(c, 12);
    // 0941a0  cmp byte ptr [0x8a478], 3
    X86_AT(c, 0x941a0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A478u))), 0x3u, 0, 1);
    // 0941a7  jne 0x941c8
    X86_AT(c, 0x941a7u);
    if (x86_cc(c, 5)) { goto L_941c8; }
    X86_TICK(c, 28);
    // 0941a9  push ebx
    X86_AT(c, 0x941a9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0941aa  mov eax, dword ptr [0x8a788]
    X86_AT(c, 0x941aau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A788u)));
    // 0941af  push dword ptr [eax + 8]
    X86_AT(c, 0x941afu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))); push32(c, v); }
    // 0941b2  push dword ptr [eax + 4]
    X86_AT(c, 0x941b2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 0941b5  push dword ptr [eax]
    X86_AT(c, 0x941b5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 0941b7  call 0x958c8
    X86_AT(c, 0x941b7u);
    push32(c, 0x941bcu); x86_call_known(c, 0x958c8u, f_000958c8); X86_RET(c, 0x941bcu);
    X86_TICK(c, 14);
    // 0941bc  add dword ptr [0x8a788], 0xa
    X86_AT(c, 0x941bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A788u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xAu, 0, 4)); }
    // 0941c3  jmp 0x942e7
    X86_AT(c, 0x941c3u);
    goto L_942e7;
L_941c8:
    X86_TICK(c, 23);
    // 0941c8  push ebx
    X86_AT(c, 0x941c8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0941c9  mov eax, dword ptr [0x8a788]
    X86_AT(c, 0x941c9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A788u)));
    // 0941ce  push dword ptr [eax + 4]
    X86_AT(c, 0x941ceu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 0941d1  push dword ptr [eax]
    X86_AT(c, 0x941d1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 0941d3  call 0x9519c
    X86_AT(c, 0x941d3u);
    push32(c, 0x941d8u); x86_call_known(c, 0x9519cu, f_0009519c); X86_RET(c, 0x941d8u);
    X86_TICK(c, 14);
    // 0941d8  add dword ptr [0x8a788], 8
    X86_AT(c, 0x941d8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A788u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x8u, 0, 4)); }
    // 0941df  jmp 0x942e7
    X86_AT(c, 0x941dfu);
    goto L_942e7;
L_941e4:
    X86_TICK(c, 30);
    // 0941e4  mov eax, dword ptr [0x8a788]
    X86_AT(c, 0x941e4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A788u)));
    // 0941e9  mov edx, dword ptr [eax]
    X86_AT(c, 0x941e9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0941eb  mov dword ptr [0x8a798], edx
    X86_AT(c, 0x941ebu);
    wr32((c.sbase[3] + (uint32_t)(0x8A798u)), c.r[2]);
    // 0941f1  add dword ptr [0x8a788], 4
    X86_AT(c, 0x941f1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A788u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0941f8  push edx
    X86_AT(c, 0x941f8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0941f9  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x941f9u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0941fc  call 0x93fac
    X86_AT(c, 0x941fcu);
    push32(c, 0x94201u); x86_call_known(c, 0x93facu, f_00093fac); X86_RET(c, 0x94201u);
    X86_TICK(c, 7);
    // 094201  jmp 0x942e7
    X86_AT(c, 0x94201u);
    goto L_942e7;
L_94206:
    X86_TICK(c, 28);
    // 094206  mov eax, dword ptr [0x8a47c]
    X86_AT(c, 0x94206u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A47Cu)));
    // 09420b  mov edx, dword ptr [0x8a788]
    X86_AT(c, 0x9420bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A788u)));
    // 094211  mov ecx, dword ptr [edx]
    X86_AT(c, 0x94211u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 094213  mov dword ptr [ecx], eax
    X86_AT(c, 0x94213u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 094215  add dword ptr [0x8a788], 4
    X86_AT(c, 0x94215u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A788u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 09421c  jmp 0x942e7
    X86_AT(c, 0x9421cu);
    goto L_942e7;
L_94221:
    X86_TICK(c, 2);
    // 094221  mov byte ptr [ebp - 6], 0x25
    X86_AT(c, 0x94221u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), 0x25u);
L_94225:
    X86_TICK(c, 18);
    // 094225  inc dword ptr [0x8a47c]
    X86_AT(c, 0x94225u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A47Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 09422b  test byte ptr [0x8a46c], 1
    X86_AT(c, 0x9422bu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x1u, 1);
    // 094232  jne 0x9423b
    X86_AT(c, 0x94232u);
    if (x86_cc(c, 5)) { goto L_9423b; }
    X86_TICK(c, 9);
    // 094234  push 1
    X86_AT(c, 0x94234u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 094236  call 0x93874
    X86_AT(c, 0x94236u);
    push32(c, 0x9423bu); x86_call_known(c, 0x93874u, f_00093874); X86_RET(c, 0x9423bu);
L_9423b:
    X86_TICK(c, 17);
    // 09423b  push 1
    X86_AT(c, 0x9423bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 09423d  lea eax, [ebp - 6]
    X86_AT(c, 0x9423du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFAu);
    // 094240  push eax
    X86_AT(c, 0x94240u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094241  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x94241u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 094247  call dword ptr [0x8a480]
    X86_AT(c, 0x94247u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x9424du); x86_call(c, t); X86_RET(c, 0x9424du); }
    X86_TICK(c, 12);
    // 09424d  test byte ptr [0x8a46c], 1
    X86_AT(c, 0x9424du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x1u, 1);
    // 094254  je 0x942e7
    X86_AT(c, 0x94254u);
    if (x86_cc(c, 4)) { goto L_942e7; }
    X86_TICK(c, 9);
    // 09425a  push 1
    X86_AT(c, 0x9425au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 09425c  jmp 0x942d7
    X86_AT(c, 0x9425cu);
    goto L_942d7;
L_94261:
    X86_TICK(c, 24);
    // 094261  mov eax, dword ptr [0x8a788]
    X86_AT(c, 0x94261u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A788u)));
    // 094266  mov dl, byte ptr [eax]
    X86_AT(c, 0x94266u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 094268  mov byte ptr [ebp - 6], dl
    X86_AT(c, 0x94268u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 2));
    // 09426b  add dword ptr [0x8a788], 4
    X86_AT(c, 0x9426bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A788u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 094272  jmp 0x94225
    X86_AT(c, 0x94272u);
    X86_POLL(c, 0x94225u); goto L_94225;
L_94274:
    X86_TICK(c, 22);
    // 094274  mov eax, dword ptr [0x8a788]
    X86_AT(c, 0x94274u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A788u)));
    // 094279  mov edi, dword ptr [eax]
    X86_AT(c, 0x94279u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 09427b  add dword ptr [0x8a788], 4
    X86_AT(c, 0x9427bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A788u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 094282  and edi, edi
    X86_AT(c, 0x94282u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 094284  je 0x942e7
    X86_AT(c, 0x94284u);
    if (x86_cc(c, 4)) { goto L_942e7; }
    X86_TICK(c, 22);
    // 094286  mov edx, dword ptr [0x8a474]
    X86_AT(c, 0x94286u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A474u)));
    // 09428c  sub eax, eax
    X86_AT(c, 0x9428cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 09428e  push edi
    X86_AT(c, 0x9428eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09428f  mov ecx, edx
    X86_AT(c, 0x9428fu);
    c.r[1] = c.r[2];
    // 094291  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x94291u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 094293  jne 0x94298
    X86_AT(c, 0x94293u);
    if (x86_cc(c, 5)) { goto L_94298; }
    X86_TICK(c, 4);
    // 094295  inc ecx
    X86_AT(c, 0x94295u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 094296  sub edx, ecx
    X86_AT(c, 0x94296u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_94298:
    X86_TICK(c, 17);
    // 094298  pop edi
    X86_AT(c, 0x94298u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094299  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0x94299u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 09429c  mov ecx, dword ptr [0x8a474]
    X86_AT(c, 0x9429cu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A474u)));
    // 0942a2  cmp edx, ecx
    X86_AT(c, 0x942a2u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0942a4  jb 0x942a8
    X86_AT(c, 0x942a4u);
    if (x86_cc(c, 2)) { goto L_942a8; }
    X86_TICK(c, 2);
    // 0942a6  mov edx, ecx
    X86_AT(c, 0x942a6u);
    c.r[2] = c.r[1];
L_942a8:
    X86_TICK(c, 21);
    // 0942a8  mov esi, edx
    X86_AT(c, 0x942a8u);
    c.r[6] = c.r[2];
    // 0942aa  add dword ptr [0x8a47c], esi
    X86_AT(c, 0x942aau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A47Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0942b0  test byte ptr [0x8a46c], 1
    X86_AT(c, 0x942b0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x1u, 1);
    // 0942b7  jne 0x942bf
    X86_AT(c, 0x942b7u);
    if (x86_cc(c, 5)) { goto L_942bf; }
    X86_TICK(c, 9);
    // 0942b9  push esi
    X86_AT(c, 0x942b9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0942ba  call 0x93874
    X86_AT(c, 0x942bau);
    push32(c, 0x942bfu); x86_call_known(c, 0x93874u, f_00093874); X86_RET(c, 0x942bfu);
L_942bf:
    X86_TICK(c, 15);
    // 0942bf  push esi
    X86_AT(c, 0x942bfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0942c0  push edi
    X86_AT(c, 0x942c0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0942c1  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x942c1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 0942c7  call dword ptr [0x8a480]
    X86_AT(c, 0x942c7u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x942cdu); x86_call(c, t); X86_RET(c, 0x942cdu); }
    X86_TICK(c, 12);
    // 0942cd  test byte ptr [0x8a46c], 1
    X86_AT(c, 0x942cdu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x1u, 1);
    // 0942d4  je 0x942e7
    X86_AT(c, 0x942d4u);
    if (x86_cc(c, 4)) { goto L_942e7; }
    X86_TICK(c, 2);
    // 0942d6  push esi
    X86_AT(c, 0x942d6u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_942d7:
    X86_TICK(c, 7);
    // 0942d7  call 0x93874
    X86_AT(c, 0x942d7u);
    push32(c, 0x942dcu); x86_call_known(c, 0x93874u, f_00093874); X86_RET(c, 0x942dcu);
    X86_TICK(c, 7);
    // 0942dc  jmp 0x942e7
    X86_AT(c, 0x942dcu);
    goto L_942e7;
L_942de:
    X86_TICK(c, 2);
    // 0942de  mov word ptr [0x8a7de], 1
    X86_AT(c, 0x942deu);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), 0x1u);
L_942e7:
    X86_TICK(c, 28);
    // 0942e7  pop edi
    X86_AT(c, 0x942e7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0942e8  pop esi
    X86_AT(c, 0x942e8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0942e9  pop ebx
    X86_AT(c, 0x942e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0942ea  leave 
    X86_AT(c, 0x942eau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0942eb  ret 4
    X86_AT(c, 0x942ebu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94048u, "ran off the end of a function");
}
void f_000942e7(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0942e7  pop edi
    X86_AT(c, 0x942e7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0942e8  pop esi
    X86_AT(c, 0x942e8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0942e9  pop ebx
    X86_AT(c, 0x942e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0942ea  leave 
    X86_AT(c, 0x942eau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0942eb  ret 4
    X86_AT(c, 0x942ebu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x942e7u, "ran off the end of a function");
}
void f_00094304(X86Cpu& c) {
    X86_TICK(c, 12);
    // 094304  test byte ptr [0x8a80c], 2
    X86_AT(c, 0x94304u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A80Cu))) & 0x2u, 1);
    // 09430b  je 0x94321
    X86_AT(c, 0x9430bu);
    if (x86_cc(c, 4)) { goto L_94321; }
    X86_TICK(c, 29);
    // 09430d  mov eax, dword ptr [0x8a454]
    X86_AT(c, 0x9430du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A454u)));
    // 094312  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0x94312u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 094316  mov eax, dword ptr [0x8a458]
    X86_AT(c, 0x94316u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A458u)));
    // 09431b  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0x9431bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 09431f  jmp 0x94333
    X86_AT(c, 0x9431fu);
    goto L_94333;
L_94321:
    X86_TICK(c, 22);
    // 094321  mov eax, dword ptr [0x8a454]
    X86_AT(c, 0x94321u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A454u)));
    // 094326  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0x94326u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
    // 09432a  mov eax, dword ptr [0x8a458]
    X86_AT(c, 0x9432au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A458u)));
    // 09432f  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0x9432fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_94333:
    X86_TICK(c, 12);
    // 094333  test byte ptr [0x8a80c], 4
    X86_AT(c, 0x94333u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A80Cu))) & 0x4u, 1);
    // 09433a  je 0x94347
    X86_AT(c, 0x9433au);
    if (x86_cc(c, 4)) { goto L_94347; }
    X86_TICK(c, 18);
    // 09433c  mov eax, dword ptr [0x8a45c]
    X86_AT(c, 0x9433cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A45Cu)));
    // 094341  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0x94341u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 094345  jmp 0x94350
    X86_AT(c, 0x94345u);
    goto L_94350;
L_94347:
    X86_TICK(c, 11);
    // 094347  mov eax, dword ptr [0x8a45c]
    X86_AT(c, 0x94347u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A45Cu)));
    // 09434c  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0x9434cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_94350:
    X86_TICK(c, 10);
    // 094350  ret 
    X86_AT(c, 0x94350u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94304u, "ran off the end of a function");
}
void f_00094358(X86Cpu& c) {
    X86_TICK(c, 9);
    // 094358  push edi
    X86_AT(c, 0x94358u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094359  call 0x92a18
    X86_AT(c, 0x94359u);
    push32(c, 0x9435eu); x86_call_known(c, 0x92a18u, f_00092a18); X86_RET(c, 0x9435eu);
    X86_TICK(c, 7);
    // 09435e  jmp 0x94380
    X86_AT(c, 0x9435eu);
    goto L_94380;
L_94360:
    X86_TICK(c, 12);
    // 094360  push dword ptr [0x8a460]
    X86_AT(c, 0x94360u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A460u))); push32(c, v); }
    // 094366  call 0x94620
    X86_AT(c, 0x94366u);
    push32(c, 0x9436bu); x86_call_known(c, 0x94620u, f_00094620); X86_RET(c, 0x9436bu);
    X86_TICK(c, 19);
    // 09436b  mov edi, dword ptr [0x8a460]
    X86_AT(c, 0x9436bu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8A460u)));
    // 094371  mov eax, dword ptr [edi + 0xc]
    X86_AT(c, 0x94371u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 094374  mov dword ptr [0x8a460], eax
    X86_AT(c, 0x94374u);
    wr32((c.sbase[3] + (uint32_t)(0x8A460u)), c.r[0]);
    // 094379  push edi
    X86_AT(c, 0x94379u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09437a  call 0x92e3c
    X86_AT(c, 0x9437au);
    push32(c, 0x9437fu); x86_call_known(c, 0x92e3cu, f_00092e3c); X86_RET(c, 0x9437fu);
    X86_TICK(c, 4);
    // 09437f  pop ecx
    X86_AT(c, 0x9437fu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_94380:
    X86_TICK(c, 12);
    // 094380  cmp dword ptr [0x8a460], 0
    X86_AT(c, 0x94380u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A460u))), 0x0u, 0, 4);
    // 094387  jne 0x94360
    X86_AT(c, 0x94387u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x94360u); goto L_94360; }
    X86_TICK(c, 14);
    // 094389  pop edi
    X86_AT(c, 0x94389u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09438a  ret 
    X86_AT(c, 0x9438au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94358u, "ran off the end of a function");
}
void f_000943a0(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0943a0  enter 0xc, 0
    X86_AT(c, 0x943a0u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 0943a4  push ebx
    X86_AT(c, 0x943a4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0943a5  push esi
    X86_AT(c, 0x943a5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0943a6  push edi
    X86_AT(c, 0x943a6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0943a7  sub eax, eax
    X86_AT(c, 0x943a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0943a9  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x943a9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0943ac  xchg edi, eax
    X86_AT(c, 0x943acu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0943ad  mov esi, 1
    X86_AT(c, 0x943adu);
    c.r[6] = 0x1u;
    // 0943b2  mov dword ptr [ebp - 8], edi
    X86_AT(c, 0x943b2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[7]);
    // 0943b5  mov eax, dword ptr [0x8a55c]
    X86_AT(c, 0x943b5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A55Cu)));
    // 0943ba  mov edx, dword ptr [0x8a542]
    X86_AT(c, 0x943bau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A542u)));
    // 0943c0  mov dword ptr [edx], eax
    X86_AT(c, 0x943c0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_943c2:
    X86_TICK(c, 8);
    // 0943c2  sub eax, eax
    X86_AT(c, 0x943c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0943c4  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x943c4u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0943c7  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x943c7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0943ca  mov dword ptr [ebp - 0xc], edi
    X86_AT(c, 0x943cau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[7]);
L_943cd:
    X86_TICK(c, 11);
    // 0943cd  cmp esi, dword ptr [0x8a548]
    X86_AT(c, 0x943cdu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8A548u))), 0, 4);
    // 0943d3  ja 0x94451
    X86_AT(c, 0x943d3u);
    if (x86_cc(c, 7)) { goto L_94451; }
    X86_TICK(c, 17);
    // 0943d9  mov eax, dword ptr [0x8a53c]
    X86_AT(c, 0x943d9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A53Cu)));
    // 0943de  mov bl, byte ptr [eax + esi*1 - 1]
    X86_AT(c, 0x943deu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] + 0xFFFFFFFFu))));
    // 0943e2  inc esi
    X86_AT(c, 0x943e2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0943e3  cmp bl, 9
    X86_AT(c, 0x943e3u);
    (void)x86_sub(c, g8(c, 3), 0x9u, 0, 1);
    // 0943e6  je 0x943ed
    X86_AT(c, 0x943e6u);
    if (x86_cc(c, 4)) { goto L_943ed; }
    X86_TICK(c, 7);
    // 0943e8  cmp bl, 0x20
    X86_AT(c, 0x943e8u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0943eb  jne 0x943fb
    X86_AT(c, 0x943ebu);
    if (x86_cc(c, 5)) { goto L_943fb; }
L_943ed:
    X86_TICK(c, 12);
    // 0943ed  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0x943edu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0943f1  je 0x943cd
    X86_AT(c, 0x943f1u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x943cdu); goto L_943cd; }
    X86_TICK(c, 12);
    // 0943f3  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x943f3u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0943f7  jne 0x9443e
    X86_AT(c, 0x943f7u);
    if (x86_cc(c, 5)) { goto L_9443e; }
    X86_TICK(c, 7);
    // 0943f9  jmp 0x94451
    X86_AT(c, 0x943f9u);
    goto L_94451;
L_943fb:
    X86_TICK(c, 7);
    // 0943fb  cmp bl, 0x22
    X86_AT(c, 0x943fbu);
    (void)x86_sub(c, g8(c, 3), 0x22u, 0, 1);
    // 0943fe  jne 0x9441c
    X86_AT(c, 0x943feu);
    if (x86_cc(c, 5)) { goto L_9441c; }
    X86_TICK(c, 12);
    // 094400  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x94400u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 094404  jne 0x9440c
    X86_AT(c, 0x94404u);
    if (x86_cc(c, 5)) { goto L_9440c; }
    X86_TICK(c, 12);
    // 094406  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0x94406u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 09440a  jne 0x9441c
    X86_AT(c, 0x9440au);
    if (x86_cc(c, 5)) { goto L_9441c; }
L_9440c:
    X86_TICK(c, 12);
    // 09440c  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x9440cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 094410  jne 0x94451
    X86_AT(c, 0x94410u);
    if (x86_cc(c, 5)) { goto L_94451; }
    X86_TICK(c, 13);
    // 094412  mov al, 1
    X86_AT(c, 0x94412u);
    s8(c, 0, 0x1u);
    // 094414  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x94414u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 094417  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x94417u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 09441a  jmp 0x943cd
    X86_AT(c, 0x9441au);
    X86_POLL(c, 0x943cdu); goto L_943cd;
L_9441c:
    X86_TICK(c, 7);
    // 09441c  cmp bl, 0x5c
    X86_AT(c, 0x9441cu);
    (void)x86_sub(c, g8(c, 3), 0x5Cu, 0, 1);
    // 09441f  jne 0x9443e
    X86_AT(c, 0x9441fu);
    if (x86_cc(c, 5)) { goto L_9443e; }
    X86_TICK(c, 12);
    // 094421  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x94421u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 094425  je 0x9443e
    X86_AT(c, 0x94425u);
    if (x86_cc(c, 4)) { goto L_9443e; }
    X86_TICK(c, 11);
    // 094427  cmp esi, dword ptr [0x8a548]
    X86_AT(c, 0x94427u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8A548u))), 0, 4);
    // 09442d  ja 0x9443e
    X86_AT(c, 0x9442du);
    if (x86_cc(c, 7)) { goto L_9443e; }
    X86_TICK(c, 16);
    // 09442f  mov eax, dword ptr [0x8a53c]
    X86_AT(c, 0x9442fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A53Cu)));
    // 094434  cmp byte ptr [eax + esi*1 - 1], 0x22
    X86_AT(c, 0x94434u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] + 0xFFFFFFFFu))), 0x22u, 0, 1);
    // 094439  jne 0x9443e
    X86_AT(c, 0x94439u);
    if (x86_cc(c, 5)) { goto L_9443e; }
    X86_TICK(c, 4);
    // 09443b  mov bl, 0x22
    X86_AT(c, 0x9443bu);
    s8(c, 3, 0x22u);
    // 09443d  inc esi
    X86_AT(c, 0x9443du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_9443e:
    X86_TICK(c, 17);
    // 09443e  mov eax, dword ptr [0x8a53c]
    X86_AT(c, 0x9443eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A53Cu)));
    // 094443  mov byte ptr [eax + edi*1 - 1], bl
    X86_AT(c, 0x94443u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] + 0xFFFFFFFFu)), g8(c, 3));
    // 094447  inc edi
    X86_AT(c, 0x94447u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 094448  mov byte ptr [ebp - 1], 1
    X86_AT(c, 0x94448u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x1u);
    // 09444c  jmp 0x943cd
    X86_AT(c, 0x9444cu);
    X86_POLL(c, 0x943cdu); goto L_943cd;
L_94451:
    X86_TICK(c, 12);
    // 094451  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0x94451u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 094455  je 0x94478
    X86_AT(c, 0x94455u);
    if (x86_cc(c, 4)) { goto L_94478; }
    X86_TICK(c, 30);
    // 094457  mov eax, dword ptr [0x8a53c]
    X86_AT(c, 0x94457u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A53Cu)));
    // 09445c  mov byte ptr [eax + edi*1 - 1], 0
    X86_AT(c, 0x9445cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] + 0xFFFFFFFFu)), 0x0u);
    // 094461  inc edi
    X86_AT(c, 0x94461u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 094462  inc dword ptr [ebp - 8]
    X86_AT(c, 0x94462u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 094465  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0x94465u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 094468  lea eax, [eax + edx*1 - 1]
    X86_AT(c, 0x94468u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFFu);
    // 09446c  mov edx, dword ptr [0x8a542]
    X86_AT(c, 0x9446cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A542u)));
    // 094472  mov ecx, dword ptr [ebp - 8]
    X86_AT(c, 0x94472u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 094475  mov dword ptr [edx + ecx*4], eax
    X86_AT(c, 0x94475u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] * 4)), c.r[0]);
L_94478:
    X86_TICK(c, 11);
    // 094478  cmp esi, dword ptr [0x8a548]
    X86_AT(c, 0x94478u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8A548u))), 0, 4);
    // 09447e  jbe 0x943c2
    X86_AT(c, 0x9447eu);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x943c2u); goto L_943c2; }
    X86_TICK(c, 43);
    // 094484  mov eax, dword ptr [0x8a542]
    X86_AT(c, 0x94484u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A542u)));
    // 094489  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0x94489u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 09448c  mov dword ptr [eax + edx*4 + 4], 0
    X86_AT(c, 0x9448cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x4u)), 0x0u);
    // 094494  xchg edx, eax
    X86_AT(c, 0x94494u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 094495  inc eax
    X86_AT(c, 0x94495u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 094496  pop edi
    X86_AT(c, 0x94496u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094497  pop esi
    X86_AT(c, 0x94497u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094498  pop ebx
    X86_AT(c, 0x94498u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094499  leave 
    X86_AT(c, 0x94499u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09449a  ret 
    X86_AT(c, 0x9449au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x943a0u, "ran off the end of a function");
}
void f_0009449c(X86Cpu& c) {
    X86_TICK(c, 10);
    // 09449c  ret 
    X86_AT(c, 0x9449cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9449cu, "ran off the end of a function");
}
void f_000944b8(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0944b8  mov al, byte ptr [esp + 4]
    X86_AT(c, 0x944b8u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))));
    // 0944bc  mov byte ptr [0x8a7e5], al
    X86_AT(c, 0x944bcu);
    wr8((c.sbase[3] + (uint32_t)(0x8A7E5u)), g8(c, 0));
    // 0944c1  call 0x95b18
    X86_AT(c, 0x944c1u);
    push32(c, 0x944c6u); x86_call_known(c, 0x95b18u, f_00095b18); X86_RET(c, 0x944c6u);
    X86_TICK(c, 12);
    // 0944c6  mov eax, dword ptr [0x8a804]
    X86_AT(c, 0x944c6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A804u)));
    // 0944cb  rcr eax, 1
    X86_AT(c, 0x944cbu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0944cd  jae 0x944ec
    X86_AT(c, 0x944cdu);
    if (x86_cc(c, 3)) { goto L_944ec; }
    X86_TICK(c, 14);
    // 0944cf  mov ax, word ptr [0x8a7e4]
    X86_AT(c, 0x944cfu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A7E4u))));
    // 0944d5  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x944d5u);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
    // 0944db  sub eax, eax
    X86_AT(c, 0x944dbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0944dd  mov dword ptr [0x8a7e4], eax
    X86_AT(c, 0x944ddu);
    wr32((c.sbase[3] + (uint32_t)(0x8A7E4u)), c.r[0]);
    // 0944e2  mov dword ptr [0x8a7ec], eax
    X86_AT(c, 0x944e2u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7ECu)), c.r[0]);
    // 0944e7  mov dword ptr [0x8a7f0], eax
    X86_AT(c, 0x944e7u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7F0u)), c.r[0]);
L_944ec:
    X86_TICK(c, 10);
    // 0944ec  ret 4
    X86_AT(c, 0x944ecu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x944b8u, "ran off the end of a function");
}
void f_000944f8(X86Cpu& c) {
    X86_TICK(c, 52);
    // 0944f8  enter 0x10, 0
    X86_AT(c, 0x944f8u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 0944fc  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x944fcu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0944ff  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x944ffu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 094502  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x94502u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 094505  mov edx, 0x8a7e4
    X86_AT(c, 0x94505u);
    c.r[2] = 0x8A7E4u;
    // 09450a  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0x9450au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 09450d  mov word ptr [ebp - 0xc], ds
    X86_AT(c, 0x9450du);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (uint32_t)c.sreg[3]);
    // 094510  movzx edx, word ptr [ebp - 0xc]
    X86_AT(c, 0x94510u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 094514  mov dword ptr [ecx], edx
    X86_AT(c, 0x94514u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[2]);
    // 094516  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x94516u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 094519  mov dword ptr [edx], eax
    X86_AT(c, 0x94519u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 09451b  leave 
    X86_AT(c, 0x9451bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09451c  ret 0xc
    X86_AT(c, 0x9451cu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x944f8u, "ran off the end of a function");
}
void f_0009452c(X86Cpu& c) {
    X86_TICK(c, 20);
    // 09452c  push ebp
    X86_AT(c, 0x9452cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09452d  mov ebp, esp
    X86_AT(c, 0x9452du);
    c.r[5] = c.r[4];
    // 09452f  push dword ptr [ebp + 8]
    X86_AT(c, 0x9452fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 094532  push 0x8a7f0
    X86_AT(c, 0x94532u);
    { uint32_t v = 0x8A7F0u; push32(c, v); }
    // 094537  push 0x8a7fc
    X86_AT(c, 0x94537u);
    { uint32_t v = 0x8A7FCu; push32(c, v); }
    // 09453c  call 0x944f8
    X86_AT(c, 0x9453cu);
    push32(c, 0x94541u); x86_call_known(c, 0x944f8u, f_000944f8); X86_RET(c, 0x94541u);
    X86_TICK(c, 16);
    // 094541  leave 
    X86_AT(c, 0x94541u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094542  ret 4
    X86_AT(c, 0x94542u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x9452cu, "ran off the end of a function");
}
void f_00094550(X86Cpu& c) {
    X86_TICK(c, 21);
    // 094550  push ebp
    X86_AT(c, 0x94550u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094551  mov ebp, esp
    X86_AT(c, 0x94551u);
    c.r[5] = c.r[4];
    // 094553  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x94553u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094557  mov dword ptr [0x8a7e8], eax
    X86_AT(c, 0x94557u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7E8u)), c.r[0]);
    // 09455c  push 0x3e
    X86_AT(c, 0x9455cu);
    { uint32_t v = 0x3Eu; push32(c, v); }
    // 09455e  call 0x944b8
    X86_AT(c, 0x9455eu);
    push32(c, 0x94563u); x86_call_known(c, 0x944b8u, f_000944b8); X86_RET(c, 0x94563u);
    X86_TICK(c, 16);
    // 094563  leave 
    X86_AT(c, 0x94563u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094564  ret 4
    X86_AT(c, 0x94564u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94550u, "ran off the end of a function");
}
void f_00094570(X86Cpu& c) {
    X86_TICK(c, 19);
    // 094570  push ebp
    X86_AT(c, 0x94570u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094571  mov ebp, esp
    X86_AT(c, 0x94571u);
    c.r[5] = c.r[4];
    // 094573  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x94573u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 094576  mov byte ptr [0x8a7e4], al
    X86_AT(c, 0x94576u);
    wr8((c.sbase[3] + (uint32_t)(0x8A7E4u)), g8(c, 0));
    // 09457b  push 0x4c
    X86_AT(c, 0x9457bu);
    { uint32_t v = 0x4Cu; push32(c, v); }
    // 09457d  call 0x944b8
    X86_AT(c, 0x9457du);
    push32(c, 0x94582u); x86_call_known(c, 0x944b8u, f_000944b8); X86_RET(c, 0x94582u);
    X86_TICK(c, 16);
    // 094582  leave 
    X86_AT(c, 0x94582u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094583  ret 4
    X86_AT(c, 0x94583u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94570u, "ran off the end of a function");
}
void f_000945a8(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0945a8  push ebp
    X86_AT(c, 0x945a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0945a9  mov ebp, esp
    X86_AT(c, 0x945a9u);
    c.r[5] = c.r[4];
    // 0945ab  push dword ptr [ebp + 8]
    X86_AT(c, 0x945abu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0945ae  call 0x9452c
    X86_AT(c, 0x945aeu);
    push32(c, 0x945b3u); x86_call_known(c, 0x9452cu, f_0009452c); X86_RET(c, 0x945b3u);
    X86_TICK(c, 12);
    // 0945b3  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x945b3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0945b6  call 0x944b8
    X86_AT(c, 0x945b6u);
    push32(c, 0x945bbu); x86_call_known(c, 0x944b8u, f_000944b8); X86_RET(c, 0x945bbu);
    X86_TICK(c, 16);
    // 0945bb  leave 
    X86_AT(c, 0x945bbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0945bc  ret 8
    X86_AT(c, 0x945bcu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x945a8u, "ran off the end of a function");
}
void f_000945c8(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0945c8  push ebp
    X86_AT(c, 0x945c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0945c9  mov ebp, esp
    X86_AT(c, 0x945c9u);
    c.r[5] = c.r[4];
    // 0945cb  movzx eax, byte ptr [ebp + 0xc]
    X86_AT(c, 0x945cbu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0945cf  mov dword ptr [0x8a7ec], eax
    X86_AT(c, 0x945cfu);
    wr32((c.sbase[3] + (uint32_t)(0x8A7ECu)), c.r[0]);
    // 0945d4  push 0x3c
    X86_AT(c, 0x945d4u);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 0945d6  push dword ptr [ebp + 8]
    X86_AT(c, 0x945d6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0945d9  call 0x945a8
    X86_AT(c, 0x945d9u);
    push32(c, 0x945deu); x86_call_known(c, 0x945a8u, f_000945a8); X86_RET(c, 0x945deu);
    X86_TICK(c, 20);
    // 0945de  mov al, byte ptr [0x8a7e4]
    X86_AT(c, 0x945deu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A7E4u))));
    // 0945e3  leave 
    X86_AT(c, 0x945e3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0945e4  ret 8
    X86_AT(c, 0x945e4u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x945c8u, "ran off the end of a function");
}
void f_000945f0(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0945f0  push ebp
    X86_AT(c, 0x945f0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0945f1  mov ebp, esp
    X86_AT(c, 0x945f1u);
    c.r[5] = c.r[4];
    // 0945f3  mov al, byte ptr [0x8a808]
    X86_AT(c, 0x945f3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A808u))));
    // 0945f8  shl al, 4
    X86_AT(c, 0x945f8u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 0945fb  or al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x945fbu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 1)); }
    // 0945fe  mov byte ptr [0x8a7e4], al
    X86_AT(c, 0x945feu);
    wr8((c.sbase[3] + (uint32_t)(0x8A7E4u)), g8(c, 0));
    // 094603  push 0x3d
    X86_AT(c, 0x94603u);
    { uint32_t v = 0x3Du; push32(c, v); }
    // 094605  push dword ptr [ebp + 8]
    X86_AT(c, 0x94605u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 094608  call 0x945a8
    X86_AT(c, 0x94608u);
    push32(c, 0x9460du); x86_call_known(c, 0x945a8u, f_000945a8); X86_RET(c, 0x9460du);
    X86_TICK(c, 20);
    // 09460d  mov al, byte ptr [0x8a7e4]
    X86_AT(c, 0x9460du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A7E4u))));
    // 094612  leave 
    X86_AT(c, 0x94612u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094613  ret 8
    X86_AT(c, 0x94613u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x945f0u, "ran off the end of a function");
}
void f_00094620(X86Cpu& c) {
    X86_TICK(c, 18);
    // 094620  push ebp
    X86_AT(c, 0x94620u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094621  mov ebp, esp
    X86_AT(c, 0x94621u);
    c.r[5] = c.r[4];
    // 094623  push 0x41
    X86_AT(c, 0x94623u);
    { uint32_t v = 0x41u; push32(c, v); }
    // 094625  push dword ptr [ebp + 8]
    X86_AT(c, 0x94625u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 094628  call 0x945a8
    X86_AT(c, 0x94628u);
    push32(c, 0x9462du); x86_call_known(c, 0x945a8u, f_000945a8); X86_RET(c, 0x9462du);
    X86_TICK(c, 16);
    // 09462d  leave 
    X86_AT(c, 0x9462du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09462e  ret 4
    X86_AT(c, 0x9462eu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94620u, "ran off the end of a function");
}
void f_00094648(X86Cpu& c) {
    X86_TICK(c, 21);
    // 094648  push ebp
    X86_AT(c, 0x94648u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094649  mov ebp, esp
    X86_AT(c, 0x94649u);
    c.r[5] = c.r[4];
    // 09464b  push ebx
    X86_AT(c, 0x9464bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09464c  push esi
    X86_AT(c, 0x9464cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09464d  push edi
    X86_AT(c, 0x9464du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09464e  mov edi, dword ptr [0x8a81c]
    X86_AT(c, 0x9464eu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8A81Cu)));
    // 094654  jmp 0x94683
    X86_AT(c, 0x94654u);
    goto L_94683;
L_94656:
    X86_TICK(c, 11);
    // 094656  mov esi, dword ptr [edi]
    X86_AT(c, 0x94656u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 094658  and esi, esi
    X86_AT(c, 0x94658u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 09465a  je 0x9467a
    X86_AT(c, 0x9465au);
    if (x86_cc(c, 4)) { goto L_9467a; }
    X86_TICK(c, 11);
    // 09465c  cmp edi, dword ptr [esi + 4]
    X86_AT(c, 0x9465cu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))), 0, 4);
    // 09465f  je 0x9467a
    X86_AT(c, 0x9465fu);
    if (x86_cc(c, 4)) { goto L_9467a; }
    X86_TICK(c, 11);
    // 094661  push edi
    X86_AT(c, 0x94661u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094662  push 1
    X86_AT(c, 0x94662u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 094664  call 0x95ab0
    X86_AT(c, 0x94664u);
    push32(c, 0x94669u); x86_call_known(c, 0x95ab0u, f_00095ab0); X86_RET(c, 0x94669u);
    X86_TICK(c, 15);
    // 094669  push edi
    X86_AT(c, 0x94669u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09466a  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9466au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09466d  mov ebx, ecx
    X86_AT(c, 0x9466du);
    c.r[3] = c.r[1];
    // 09466f  call dword ptr [ebp + 8]
    X86_AT(c, 0x9466fu);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x94672u); x86_call(c, t); X86_RET(c, 0x94672u); }
    X86_TICK(c, 11);
    // 094672  push esi
    X86_AT(c, 0x94672u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094673  mov ecx, ebx
    X86_AT(c, 0x94673u);
    c.r[1] = c.r[3];
    // 094675  call dword ptr [ebp + 8]
    X86_AT(c, 0x94675u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x94678u); x86_call(c, t); X86_RET(c, 0x94678u); }
    X86_TICK(c, 7);
    // 094678  jmp 0x94687
    X86_AT(c, 0x94678u);
    goto L_94687;
L_9467a:
    X86_TICK(c, 13);
    // 09467a  push edi
    X86_AT(c, 0x9467au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09467b  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9467bu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09467e  call dword ptr [ebp + 8]
    X86_AT(c, 0x9467eu);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x94681u); x86_call(c, t); X86_RET(c, 0x94681u); }
    X86_TICK(c, 2);
    // 094681  mov edi, esi
    X86_AT(c, 0x94681u);
    c.r[7] = c.r[6];
L_94683:
    X86_TICK(c, 7);
    // 094683  and edi, edi
    X86_AT(c, 0x94683u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 094685  jne 0x94656
    X86_AT(c, 0x94685u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x94656u); goto L_94656; }
L_94687:
    X86_TICK(c, 28);
    // 094687  pop edi
    X86_AT(c, 0x94687u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094688  pop esi
    X86_AT(c, 0x94688u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094689  pop ebx
    X86_AT(c, 0x94689u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09468a  leave 
    X86_AT(c, 0x9468au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09468b  ret 8
    X86_AT(c, 0x9468bu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x94648u, "ran off the end of a function");
}
void f_000946a0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0946a0  push ebp
    X86_AT(c, 0x946a0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0946a1  mov ebp, esp
    X86_AT(c, 0x946a1u);
    c.r[5] = c.r[4];
    // 0946a3  push ebx
    X86_AT(c, 0x946a3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0946a4  push esi
    X86_AT(c, 0x946a4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0946a5  push edi
    X86_AT(c, 0x946a5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0946a6  mov edi, dword ptr [0x8a818]
    X86_AT(c, 0x946a6u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8A818u)));
    // 0946ac  sub esi, esi
    X86_AT(c, 0x946acu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0946ae  jmp 0x946f2
    X86_AT(c, 0x946aeu);
    goto L_946f2;
L_946b0:
    X86_TICK(c, 14);
    // 0946b0  mov ebx, edi
    X86_AT(c, 0x946b0u);
    c.r[3] = c.r[7];
    // 0946b2  cmp byte ptr [ebx + 0xf], 0x55
    X86_AT(c, 0x946b2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFu))), 0x55u, 0, 1);
    // 0946b6  je 0x946c2
    X86_AT(c, 0x946b6u);
    if (x86_cc(c, 4)) { goto L_946c2; }
    X86_TICK(c, 11);
    // 0946b8  push edi
    X86_AT(c, 0x946b8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0946b9  push 4
    X86_AT(c, 0x946b9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0946bb  call 0x95ab0
    X86_AT(c, 0x946bbu);
    push32(c, 0x946c0u); x86_call_known(c, 0x95ab0u, f_00095ab0); X86_RET(c, 0x946c0u);
    X86_TICK(c, 7);
    // 0946c0  jmp 0x946f2
    X86_AT(c, 0x946c0u);
    goto L_946f2;
L_946c2:
    X86_TICK(c, 11);
    // 0946c2  cmp esi, dword ptr [ebx + 0x14]
    X86_AT(c, 0x946c2u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))), 0, 4);
    // 0946c5  je 0x946d3
    X86_AT(c, 0x946c5u);
    if (x86_cc(c, 4)) { goto L_946d3; }
    X86_TICK(c, 11);
    // 0946c7  push edi
    X86_AT(c, 0x946c7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0946c8  push 5
    X86_AT(c, 0x946c8u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0946ca  call 0x95ab0
    X86_AT(c, 0x946cau);
    push32(c, 0x946cfu); x86_call_known(c, 0x95ab0u, f_00095ab0); X86_RET(c, 0x946cfu);
    X86_TICK(c, 9);
    // 0946cf  sub edi, edi
    X86_AT(c, 0x946cfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0946d1  jmp 0x946f2
    X86_AT(c, 0x946d1u);
    goto L_946f2;
L_946d3:
    X86_TICK(c, 11);
    // 0946d3  mov eax, dword ptr [edi]
    X86_AT(c, 0x946d3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0946d5  and eax, eax
    X86_AT(c, 0x946d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0946d7  je 0x946e6
    X86_AT(c, 0x946d7u);
    if (x86_cc(c, 4)) { goto L_946e6; }
    X86_TICK(c, 11);
    // 0946d9  cmp edi, dword ptr [eax + 4]
    X86_AT(c, 0x946d9u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 0, 4);
    // 0946dc  je 0x946e6
    X86_AT(c, 0x946dcu);
    if (x86_cc(c, 4)) { goto L_946e6; }
    X86_TICK(c, 11);
    // 0946de  push edi
    X86_AT(c, 0x946deu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0946df  push 1
    X86_AT(c, 0x946dfu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0946e1  call 0x95ab0
    X86_AT(c, 0x946e1u);
    push32(c, 0x946e6u); x86_call_known(c, 0x95ab0u, f_00095ab0); X86_RET(c, 0x946e6u);
L_946e6:
    X86_TICK(c, 13);
    // 0946e6  push edi
    X86_AT(c, 0x946e6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0946e7  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x946e7u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0946ea  call dword ptr [ebp + 8]
    X86_AT(c, 0x946eau);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x946edu); x86_call(c, t); X86_RET(c, 0x946edu); }
    X86_TICK(c, 6);
    // 0946ed  mov esi, edi
    X86_AT(c, 0x946edu);
    c.r[6] = c.r[7];
    // 0946ef  mov edi, dword ptr [ebx + 0x10]
    X86_AT(c, 0x946efu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
L_946f2:
    X86_TICK(c, 7);
    // 0946f2  and edi, edi
    X86_AT(c, 0x946f2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0946f4  jne 0x946b0
    X86_AT(c, 0x946f4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x946b0u); goto L_946b0; }
    X86_TICK(c, 28);
    // 0946f6  pop edi
    X86_AT(c, 0x946f6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0946f7  pop esi
    X86_AT(c, 0x946f7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0946f8  pop ebx
    X86_AT(c, 0x946f8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0946f9  leave 
    X86_AT(c, 0x946f9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0946fa  ret 8
    X86_AT(c, 0x946fau);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x946a0u, "ran off the end of a function");
}
void f_00094714(X86Cpu& c) {
    X86_TICK(c, 16);
    // 094714  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x94714u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 094718  cmp dword ptr [ecx + 8], 0x18
    X86_AT(c, 0x94718u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u))), 0x18u, 0, 4);
    // 09471c  jb 0x94744
    X86_AT(c, 0x9471cu);
    if (x86_cc(c, 2)) { goto L_94744; }
    X86_TICK(c, 12);
    // 09471e  cmp dword ptr [ecx + 0x14], 0
    X86_AT(c, 0x9471eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u))), 0x0u, 0, 4);
    // 094722  jne 0x9472e
    X86_AT(c, 0x94722u);
    if (x86_cc(c, 5)) { goto L_9472e; }
    X86_TICK(c, 13);
    // 094724  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0x94724u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 094727  mov dword ptr [0x8a818], eax
    X86_AT(c, 0x94727u);
    wr32((c.sbase[3] + (uint32_t)(0x8A818u)), c.r[0]);
    // 09472c  jmp 0x94737
    X86_AT(c, 0x9472cu);
    goto L_94737;
L_9472e:
    X86_TICK(c, 10);
    // 09472e  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0x9472eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 094731  mov edx, dword ptr [ecx + 0x14]
    X86_AT(c, 0x94731u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)));
    // 094734  mov dword ptr [edx + 0x10], eax
    X86_AT(c, 0x94734u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)), c.r[0]);
L_94737:
    X86_TICK(c, 11);
    // 094737  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0x94737u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 09473a  and eax, eax
    X86_AT(c, 0x9473au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 09473c  je 0x94744
    X86_AT(c, 0x9473cu);
    if (x86_cc(c, 4)) { goto L_94744; }
    X86_TICK(c, 6);
    // 09473e  mov edx, dword ptr [ecx + 0x14]
    X86_AT(c, 0x9473eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)));
    // 094741  mov dword ptr [eax + 0x14], edx
    X86_AT(c, 0x94741u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)), c.r[2]);
L_94744:
    X86_TICK(c, 10);
    // 094744  ret 4
    X86_AT(c, 0x94744u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94714u, "ran off the end of a function");
}
void f_00094768(X86Cpu& c) {
    X86_TICK(c, 23);
    // 094768  push ebp
    X86_AT(c, 0x94768u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094769  mov ebp, esp
    X86_AT(c, 0x94769u);
    c.r[5] = c.r[4];
    // 09476b  push esi
    X86_AT(c, 0x9476bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09476c  push edi
    X86_AT(c, 0x9476cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09476d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x9476du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094770  mov esi, dword ptr [edi]
    X86_AT(c, 0x94770u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 094772  and esi, esi
    X86_AT(c, 0x94772u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 094774  je 0x9479d
    X86_AT(c, 0x94774u);
    if (x86_cc(c, 4)) { goto L_9479d; }
    X86_TICK(c, 12);
    // 094776  cmp byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0x94776u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu))), 0x55u, 0, 1);
    // 09477a  jne 0x9479d
    X86_AT(c, 0x9477au);
    if (x86_cc(c, 5)) { goto L_9479d; }
    X86_TICK(c, 11);
    // 09477c  cmp esi, dword ptr [0x8a820]
    X86_AT(c, 0x9477cu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8A820u))), 0, 4);
    // 094782  jne 0x9478a
    X86_AT(c, 0x94782u);
    if (x86_cc(c, 5)) { goto L_9478a; }
    X86_TICK(c, 2);
    // 094784  mov dword ptr [0x8a820], edi
    X86_AT(c, 0x94784u);
    wr32((c.sbase[3] + (uint32_t)(0x8A820u)), c.r[7]);
L_9478a:
    X86_TICK(c, 9);
    // 09478a  push esi
    X86_AT(c, 0x9478au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09478b  call 0x94714
    X86_AT(c, 0x9478bu);
    push32(c, 0x94790u); x86_call_known(c, 0x94714u, f_00094714); X86_RET(c, 0x94790u);
    X86_TICK(c, 27);
    // 094790  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x94790u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 094793  add dword ptr [edi + 8], eax
    X86_AT(c, 0x94793u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 094796  mov eax, dword ptr [esi]
    X86_AT(c, 0x94796u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 094798  mov dword ptr [edi], eax
    X86_AT(c, 0x94798u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 09479a  xchg esi, eax
    X86_AT(c, 0x9479au);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 09479b  jmp 0x947d0
    X86_AT(c, 0x9479bu);
    goto L_947d0;
L_9479d:
    X86_TICK(c, 11);
    // 09479d  mov eax, dword ptr [edi + 4]
    X86_AT(c, 0x9479du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0947a0  and eax, eax
    X86_AT(c, 0x947a0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0947a2  je 0x947db
    X86_AT(c, 0x947a2u);
    if (x86_cc(c, 4)) { goto L_947db; }
    X86_TICK(c, 15);
    // 0947a4  xchg esi, eax
    X86_AT(c, 0x947a4u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0947a5  cmp byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0x947a5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu))), 0x55u, 0, 1);
    // 0947a9  jne 0x947db
    X86_AT(c, 0x947a9u);
    if (x86_cc(c, 5)) { goto L_947db; }
    X86_TICK(c, 11);
    // 0947ab  cmp edi, dword ptr [0x8a820]
    X86_AT(c, 0x947abu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x8A820u))), 0, 4);
    // 0947b1  jne 0x947b9
    X86_AT(c, 0x947b1u);
    if (x86_cc(c, 5)) { goto L_947b9; }
    X86_TICK(c, 2);
    // 0947b3  mov dword ptr [0x8a820], esi
    X86_AT(c, 0x947b3u);
    wr32((c.sbase[3] + (uint32_t)(0x8A820u)), c.r[6]);
L_947b9:
    X86_TICK(c, 9);
    // 0947b9  push esi
    X86_AT(c, 0x947b9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0947ba  call 0x94714
    X86_AT(c, 0x947bau);
    push32(c, 0x947bfu); x86_call_known(c, 0x94714u, f_00094714); X86_RET(c, 0x947bfu);
    X86_TICK(c, 29);
    // 0947bf  mov eax, dword ptr [edi + 8]
    X86_AT(c, 0x947bfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 0947c2  add dword ptr [esi + 8], eax
    X86_AT(c, 0x947c2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0947c5  mov eax, dword ptr [edi]
    X86_AT(c, 0x947c5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0947c7  mov dword ptr [esi], eax
    X86_AT(c, 0x947c7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0947c9  mov edi, esi
    X86_AT(c, 0x947c9u);
    c.r[7] = c.r[6];
    // 0947cb  xchg esi, eax
    X86_AT(c, 0x947cbu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0947cc  and esi, esi
    X86_AT(c, 0x947ccu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0947ce  je 0x947d3
    X86_AT(c, 0x947ceu);
    if (x86_cc(c, 4)) { goto L_947d3; }
L_947d0:
    X86_TICK(c, 2);
    // 0947d0  mov dword ptr [esi + 4], edi
    X86_AT(c, 0x947d0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[7]);
L_947d3:
    X86_TICK(c, 9);
    // 0947d3  push edi
    X86_AT(c, 0x947d3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0947d4  call 0x94768
    X86_AT(c, 0x947d4u);
    push32(c, 0x947d9u); x86_call_known(c, 0x94768u, f_00094768); X86_RET(c, 0x947d9u);
    X86_TICK(c, 7);
    // 0947d9  jmp 0x947fe
    X86_AT(c, 0x947d9u);
    goto L_947fe;
L_947db:
    X86_TICK(c, 12);
    // 0947db  cmp dword ptr [edi + 8], 0x18
    X86_AT(c, 0x947dbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0x18u, 0, 4);
    // 0947df  jb 0x947fe
    X86_AT(c, 0x947dfu);
    if (x86_cc(c, 2)) { goto L_947fe; }
    X86_TICK(c, 13);
    // 0947e1  mov esi, dword ptr [0x8a818]
    X86_AT(c, 0x947e1u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8A818u)));
    // 0947e7  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0x947e7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 0947ea  and esi, esi
    X86_AT(c, 0x947eau);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0947ec  je 0x947f1
    X86_AT(c, 0x947ecu);
    if (x86_cc(c, 4)) { goto L_947f1; }
    X86_TICK(c, 2);
    // 0947ee  mov dword ptr [esi + 0x14], edi
    X86_AT(c, 0x947eeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), c.r[7]);
L_947f1:
    X86_TICK(c, 4);
    // 0947f1  mov dword ptr [edi + 0x14], 0
    X86_AT(c, 0x947f1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), 0x0u);
    // 0947f8  mov dword ptr [0x8a818], edi
    X86_AT(c, 0x947f8u);
    wr32((c.sbase[3] + (uint32_t)(0x8A818u)), c.r[7]);
L_947fe:
    X86_TICK(c, 24);
    // 0947fe  pop edi
    X86_AT(c, 0x947feu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0947ff  pop esi
    X86_AT(c, 0x947ffu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094800  leave 
    X86_AT(c, 0x94800u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094801  ret 4
    X86_AT(c, 0x94801u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94768u, "ran off the end of a function");
}
void f_00094818(X86Cpu& c) {
    X86_TICK(c, 23);
    // 094818  enter 4, 0
    X86_AT(c, 0x94818u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 09481c  push ebx
    X86_AT(c, 0x9481cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09481d  push esi
    X86_AT(c, 0x9481du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09481e  push edi
    X86_AT(c, 0x9481eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09481f  push ebp
    X86_AT(c, 0x9481fu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094820  push 0x94848
    X86_AT(c, 0x94820u);
    { uint32_t v = 0x94848u; push32(c, v); }
    // 094825  call 0x946a0
    X86_AT(c, 0x94825u);
    push32(c, 0x9482au); x86_call_known(c, 0x946a0u, f_000946a0); X86_RET(c, 0x9482au);
    X86_TICK(c, 36);
    // 09482a  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x9482au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 094831  lea esp, [ebp - 0x10]
    X86_AT(c, 0x94831u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 094834  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94834u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094837  pop edi
    X86_AT(c, 0x94837u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094838  pop esi
    X86_AT(c, 0x94838u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094839  pop ebx
    X86_AT(c, 0x94839u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09483a  leave 
    X86_AT(c, 0x9483au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09483b  ret 4
    X86_AT(c, 0x9483bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94818u, "ran off the end of a function");
}
void f_00094848(X86Cpu& c) {
    goto L_94848;
L_94831:
    X86_TICK(c, 34);
    // 094831  lea esp, [ebp - 0x10]
    X86_AT(c, 0x94831u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 094834  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94834u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094837  pop edi
    X86_AT(c, 0x94837u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094838  pop esi
    X86_AT(c, 0x94838u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094839  pop ebx
    X86_AT(c, 0x94839u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09483a  leave 
    X86_AT(c, 0x9483au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09483b  ret 4
    X86_AT(c, 0x9483bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
L_94848:
    X86_TICK(c, 29);
    // 094848  push ebp
    X86_AT(c, 0x94848u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094849  mov ebp, esp
    X86_AT(c, 0x94849u);
    c.r[5] = c.r[4];
    // 09484b  push ecx
    X86_AT(c, 0x9484bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 09484c  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x9484cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09484f  mov eax, dword ptr [ecx + 8]
    X86_AT(c, 0x9484fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u)));
    // 094852  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x94852u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094855  cmp eax, dword ptr [edx + 8]
    X86_AT(c, 0x94855u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u))), 0, 4);
    // 094858  jb 0x94861
    X86_AT(c, 0x94858u);
    if (x86_cc(c, 2)) { goto L_94861; }
    X86_TICK(c, 11);
    // 09485a  mov dword ptr [edx - 4], ecx
    X86_AT(c, 0x9485au);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFFCu)), c.r[1]);
    // 09485d  mov ebp, edx
    X86_AT(c, 0x9485du);
    c.r[5] = c.r[2];
    // 09485f  jmp 0x94831
    X86_AT(c, 0x9485fu);
    X86_POLL(c, 0x94831u); goto L_94831;
L_94861:
    X86_TICK(c, 16);
    // 094861  leave 
    X86_AT(c, 0x94861u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094862  ret 4
    X86_AT(c, 0x94862u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94848u, "ran off the end of a function");
}
void f_00094870(X86Cpu& c) {
    X86_TICK(c, 23);
    // 094870  mov eax, dword ptr [0x8a824]
    X86_AT(c, 0x94870u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A824u)));
    // 094875  add eax, 0x200
    X86_AT(c, 0x94875u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x200u, 0, 4); }
    // 09487a  push eax
    X86_AT(c, 0x9487au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09487b  mov eax, dword ptr [0x8a824]
    X86_AT(c, 0x9487bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A824u)));
    // 094880  add eax, 0x100
    X86_AT(c, 0x94880u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x100u, 0, 4); }
    // 094885  push eax
    X86_AT(c, 0x94885u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094886  call 0x93579
    X86_AT(c, 0x94886u);
    push32(c, 0x9488bu); x86_call_known(c, 0x93579u, f_00093579); X86_RET(c, 0x9488bu);
    X86_TICK(c, 10);
    // 09488b  ret 
    X86_AT(c, 0x9488bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94870u, "ran off the end of a function");
}
void f_00094898(X86Cpu& c) {
    X86_TICK(c, 28);
    // 094898  enter 4, 0
    X86_AT(c, 0x94898u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 09489c  push ebx
    X86_AT(c, 0x9489cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09489d  push esi
    X86_AT(c, 0x9489du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09489e  push edi
    X86_AT(c, 0x9489eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09489f  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x9489fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0948a2  cmp dword ptr [0x8a824], 0
    X86_AT(c, 0x948a2u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A824u))), 0x0u, 0, 4);
    // 0948a9  jne 0x948b5
    X86_AT(c, 0x948a9u);
    if (x86_cc(c, 5)) { goto L_948b5; }
    X86_TICK(c, 7);
    // 0948ab  call 0x9351e
    X86_AT(c, 0x948abu);
    push32(c, 0x948b0u); x86_call_known(c, 0x9351eu, f_0009351e); X86_RET(c, 0x948b0u);
    X86_TICK(c, 2);
    // 0948b0  mov dword ptr [0x8a824], eax
    X86_AT(c, 0x948b0u);
    wr32((c.sbase[3] + (uint32_t)(0x8A824u)), c.r[0]);
L_948b5:
    X86_TICK(c, 7);
    // 0948b5  call 0x9352a
    X86_AT(c, 0x948b5u);
    push32(c, 0x948bau); x86_call_known(c, 0x9352au, f_0009352a); X86_RET(c, 0x948bau);
    X86_TICK(c, 16);
    // 0948ba  xchg esi, eax
    X86_AT(c, 0x948bau);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0948bb  sub esi, dword ptr [0x8a824]
    X86_AT(c, 0x948bbu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A824u))), 0, 4); }
    // 0948c1  cmp esi, edi
    X86_AT(c, 0x948c1u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0948c3  jb 0x948d0
    X86_AT(c, 0x948c3u);
    if (x86_cc(c, 2)) { goto L_948d0; }
    X86_TICK(c, 11);
    // 0948c5  mov eax, esi
    X86_AT(c, 0x948c5u);
    c.r[0] = c.r[6];
    // 0948c7  sub eax, edi
    X86_AT(c, 0x948c7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0948c9  cmp eax, 0x200
    X86_AT(c, 0x948c9u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 0948ce  jge 0x94915
    X86_AT(c, 0x948ceu);
    if (x86_cc(c, 13)) { goto L_94915; }
L_948d0:
    X86_TICK(c, 7);
    // 0948d0  cmp esi, edi
    X86_AT(c, 0x948d0u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0948d2  jae 0x948eb
    X86_AT(c, 0x948d2u);
    if (x86_cc(c, 3)) { goto L_948eb; }
    X86_TICK(c, 63);
    // 0948d4  mov eax, edi
    X86_AT(c, 0x948d4u);
    c.r[0] = c.r[7];
    // 0948d6  sub eax, esi
    X86_AT(c, 0x948d6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0948d8  add eax, 0xfff
    X86_AT(c, 0x948d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xFFFu, 0, 4); }
    // 0948dd  cdq 
    X86_AT(c, 0x948ddu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0948de  mov ecx, 0x1000
    X86_AT(c, 0x948deu);
    c.r[1] = 0x1000u;
    // 0948e3  idiv ecx
    X86_AT(c, 0x948e3u);
    x86_idiv(c, c.r[1], 4, 0x948e3u);
    // 0948e5  xchg ebx, eax
    X86_AT(c, 0x948e5u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0948e6  shl ebx, 0xc
    X86_AT(c, 0x948e6u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[3] = r; }
    // 0948e9  jmp 0x948f0
    X86_AT(c, 0x948e9u);
    goto L_948f0;
L_948eb:
    X86_TICK(c, 2);
    // 0948eb  mov ebx, 0x1000
    X86_AT(c, 0x948ebu);
    c.r[3] = 0x1000u;
L_948f0:
    X86_TICK(c, 9);
    // 0948f0  push ebx
    X86_AT(c, 0x948f0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0948f1  call 0x93530
    X86_AT(c, 0x948f1u);
    push32(c, 0x948f6u); x86_call_known(c, 0x93530u, f_00093530); X86_RET(c, 0x948f6u);
    X86_TICK(c, 7);
    // 0948f6  call 0x9352a
    X86_AT(c, 0x948f6u);
    push32(c, 0x948fbu); x86_call_known(c, 0x9352au, f_0009352a); X86_RET(c, 0x948fbu);
    X86_TICK(c, 16);
    // 0948fb  xchg esi, eax
    X86_AT(c, 0x948fbu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0948fc  sub esi, dword ptr [0x8a824]
    X86_AT(c, 0x948fcu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A824u))), 0, 4); }
    // 094902  cmp esi, edi
    X86_AT(c, 0x94902u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 094904  jb 0x94911
    X86_AT(c, 0x94904u);
    if (x86_cc(c, 2)) { goto L_94911; }
    X86_TICK(c, 11);
    // 094906  mov eax, esi
    X86_AT(c, 0x94906u);
    c.r[0] = c.r[6];
    // 094908  sub eax, edi
    X86_AT(c, 0x94908u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 09490a  cmp eax, 0x200
    X86_AT(c, 0x9490au);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 09490f  jge 0x94915
    X86_AT(c, 0x9490fu);
    if (x86_cc(c, 13)) { goto L_94915; }
L_94911:
    X86_TICK(c, 9);
    // 094911  sub eax, eax
    X86_AT(c, 0x94911u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094913  jmp 0x9492a
    X86_AT(c, 0x94913u);
    goto L_9492a;
L_94915:
    X86_TICK(c, 20);
    // 094915  mov ebx, dword ptr [0x8a824]
    X86_AT(c, 0x94915u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x8A824u)));
    // 09491b  mov dword ptr [ebp - 4], ebx
    X86_AT(c, 0x9491bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[3]);
    // 09491e  add dword ptr [0x8a824], edi
    X86_AT(c, 0x9491eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A824u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 094924  call 0x94870
    X86_AT(c, 0x94924u);
    push32(c, 0x94929u); x86_call_known(c, 0x94870u, f_00094870); X86_RET(c, 0x94929u);
    X86_TICK(c, 3);
    // 094929  xchg ebx, eax
    X86_AT(c, 0x94929u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
L_9492a:
    X86_TICK(c, 28);
    // 09492a  pop edi
    X86_AT(c, 0x9492au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09492b  pop esi
    X86_AT(c, 0x9492bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09492c  pop ebx
    X86_AT(c, 0x9492cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09492d  leave 
    X86_AT(c, 0x9492du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09492e  ret 4
    X86_AT(c, 0x9492eu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94898u, "ran off the end of a function");
}
void f_00094940(X86Cpu& c) {
    X86_TICK(c, 21);
    // 094940  push ebp
    X86_AT(c, 0x94940u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094941  mov ebp, esp
    X86_AT(c, 0x94941u);
    c.r[5] = c.r[4];
    // 094943  push esi
    X86_AT(c, 0x94943u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094944  push edi
    X86_AT(c, 0x94944u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094945  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x94945u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094948  mov eax, 0x18
    X86_AT(c, 0x94948u);
    c.r[0] = 0x18u;
    // 09494d  cmp eax, edi
    X86_AT(c, 0x9494du);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 09494f  jb 0x94952
    X86_AT(c, 0x9494fu);
    if (x86_cc(c, 2)) { goto L_94952; }
    X86_TICK(c, 3);
    // 094951  xchg edi, eax
    X86_AT(c, 0x94951u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_94952:
    X86_TICK(c, 7);
    // 094952  cmp edi, 0x7fffffff
    X86_AT(c, 0x94952u);
    (void)x86_sub(c, c.r[7], 0x7FFFFFFFu, 0, 4);
    // 094958  ja 0x9499d
    X86_AT(c, 0x94958u);
    if (x86_cc(c, 7)) { goto L_9499d; }
    X86_TICK(c, 9);
    // 09495a  push edi
    X86_AT(c, 0x9495au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09495b  call 0x94898
    X86_AT(c, 0x9495bu);
    push32(c, 0x94960u); x86_call_known(c, 0x94898u, f_00094898); X86_RET(c, 0x94960u);
    X86_TICK(c, 10);
    // 094960  xchg esi, eax
    X86_AT(c, 0x94960u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 094961  and esi, esi
    X86_AT(c, 0x94961u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 094963  je 0x9499d
    X86_AT(c, 0x94963u);
    if (x86_cc(c, 4)) { goto L_9499d; }
    X86_TICK(c, 23);
    // 094965  sub eax, eax
    X86_AT(c, 0x94965u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094967  mov dword ptr [esi], eax
    X86_AT(c, 0x94967u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 094969  mov edx, dword ptr [0x8a820]
    X86_AT(c, 0x94969u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A820u)));
    // 09496f  mov dword ptr [esi + 4], edx
    X86_AT(c, 0x9496fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[2]);
    // 094972  mov byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0x94972u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu)), 0x55u);
    // 094976  mov dword ptr [esi + 8], edi
    X86_AT(c, 0x94976u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[7]);
    // 094979  mov byte ptr [esi + 0xe], al
    X86_AT(c, 0x94979u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu)), g8(c, 0));
    // 09497c  cmp eax, edx
    X86_AT(c, 0x9497cu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 09497e  je 0x94982
    X86_AT(c, 0x9497eu);
    if (x86_cc(c, 4)) { goto L_94982; }
    X86_TICK(c, 2);
    // 094980  mov dword ptr [edx], esi
    X86_AT(c, 0x94980u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[6]);
L_94982:
    X86_TICK(c, 14);
    // 094982  mov dword ptr [0x8a820], esi
    X86_AT(c, 0x94982u);
    wr32((c.sbase[3] + (uint32_t)(0x8A820u)), c.r[6]);
    // 094988  cmp dword ptr [0x8a81c], 0
    X86_AT(c, 0x94988u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A81Cu))), 0x0u, 0, 4);
    // 09498f  jne 0x94997
    X86_AT(c, 0x9498fu);
    if (x86_cc(c, 5)) { goto L_94997; }
    X86_TICK(c, 2);
    // 094991  mov dword ptr [0x8a81c], esi
    X86_AT(c, 0x94991u);
    wr32((c.sbase[3] + (uint32_t)(0x8A81Cu)), c.r[6]);
L_94997:
    X86_TICK(c, 9);
    // 094997  push esi
    X86_AT(c, 0x94997u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094998  call 0x94768
    X86_AT(c, 0x94998u);
    push32(c, 0x9499du); x86_call_known(c, 0x94768u, f_00094768); X86_RET(c, 0x9499du);
L_9499d:
    X86_TICK(c, 24);
    // 09499d  pop edi
    X86_AT(c, 0x9499du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09499e  pop esi
    X86_AT(c, 0x9499eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09499f  leave 
    X86_AT(c, 0x9499fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0949a0  ret 4
    X86_AT(c, 0x949a0u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94940u, "ran off the end of a function");
}
void f_000949ac(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0949ac  enter 8, 0
    X86_AT(c, 0x949acu);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 0949b0  push ebx
    X86_AT(c, 0x949b0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0949b1  push esi
    X86_AT(c, 0x949b1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0949b2  push edi
    X86_AT(c, 0x949b2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0949b3  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x949b3u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0949b6  cmp byte ptr [0x8a810], 0
    X86_AT(c, 0x949b6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A810u))), 0x0u, 0, 1);
    // 0949bd  je 0x949c4
    X86_AT(c, 0x949bdu);
    if (x86_cc(c, 4)) { goto L_949c4; }
    X86_TICK(c, 7);
    // 0949bf  call 0x94c04
    X86_AT(c, 0x949bfu);
    push32(c, 0x949c4u); x86_call_known(c, 0x94c04u, f_00094c04); X86_RET(c, 0x949c4u);
L_949c4:
    X86_TICK(c, 7);
    // 0949c4  cmp edi, 0x7fffffec
    X86_AT(c, 0x949c4u);
    (void)x86_sub(c, c.r[7], 0x7FFFFFECu, 0, 4);
    // 0949ca  jbe 0x949d3
    X86_AT(c, 0x949cau);
    if (x86_cc(c, 6)) { goto L_949d3; }
    X86_TICK(c, 9);
    // 0949cc  sub eax, eax
    X86_AT(c, 0x949ccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0949ce  jmp 0x94aab
    X86_AT(c, 0x949ceu);
    goto L_94aab;
L_949d3:
    X86_TICK(c, 10);
    // 0949d3  mov eax, edi
    X86_AT(c, 0x949d3u);
    c.r[0] = c.r[7];
    // 0949d5  rcr eax, 1
    X86_AT(c, 0x949d5u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0949d7  jae 0x949da
    X86_AT(c, 0x949d7u);
    if (x86_cc(c, 3)) { goto L_949da; }
    X86_TICK(c, 2);
    // 0949d9  inc edi
    X86_AT(c, 0x949d9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_949da:
    X86_TICK(c, 7);
    // 0949da  test di, 3
    X86_AT(c, 0x949dau);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & 0x3u, 2);
    // 0949df  je 0x949e4
    X86_AT(c, 0x949dfu);
    if (x86_cc(c, 4)) { goto L_949e4; }
    X86_TICK(c, 2);
    // 0949e1  add edi, 2
    X86_AT(c, 0x949e1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
L_949e4:
    X86_TICK(c, 11);
    // 0949e4  add edi, 0x10
    X86_AT(c, 0x949e4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x10u, 0, 4); }
    // 0949e7  push edi
    X86_AT(c, 0x949e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0949e8  call 0x94818
    X86_AT(c, 0x949e8u);
    push32(c, 0x949edu); x86_call_known(c, 0x94818u, f_00094818); X86_RET(c, 0x949edu);
    X86_TICK(c, 10);
    // 0949ed  xchg esi, eax
    X86_AT(c, 0x949edu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0949ee  and esi, esi
    X86_AT(c, 0x949eeu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0949f0  jne 0x949ff
    X86_AT(c, 0x949f0u);
    if (x86_cc(c, 5)) { goto L_949ff; }
    X86_TICK(c, 9);
    // 0949f2  push edi
    X86_AT(c, 0x949f2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0949f3  call 0x94940
    X86_AT(c, 0x949f3u);
    push32(c, 0x949f8u); x86_call_known(c, 0x94940u, f_00094940); X86_RET(c, 0x949f8u);
    X86_TICK(c, 9);
    // 0949f8  push edi
    X86_AT(c, 0x949f8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0949f9  call 0x94818
    X86_AT(c, 0x949f9u);
    push32(c, 0x949feu); x86_call_known(c, 0x94818u, f_00094818); X86_RET(c, 0x949feu);
    X86_TICK(c, 3);
    // 0949fe  xchg esi, eax
    X86_AT(c, 0x949feu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_949ff:
    X86_TICK(c, 7);
    // 0949ff  and esi, esi
    X86_AT(c, 0x949ffu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 094a01  je 0x94a93
    X86_AT(c, 0x94a01u);
    if (x86_cc(c, 4)) { goto L_94a93; }
    X86_TICK(c, 9);
    // 094a07  push esi
    X86_AT(c, 0x94a07u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094a08  call 0x94714
    X86_AT(c, 0x94a08u);
    push32(c, 0x94a0du); x86_call_known(c, 0x94714u, f_00094714); X86_RET(c, 0x94a0du);
    X86_TICK(c, 15);
    // 094a0d  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x94a0du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 094a10  sub eax, edi
    X86_AT(c, 0x94a10u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 094a12  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x94a12u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 094a15  cmp eax, 0x10
    X86_AT(c, 0x94a15u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 094a18  ja 0x94a24
    X86_AT(c, 0x94a18u);
    if (x86_cc(c, 7)) { goto L_94a24; }
    X86_TICK(c, 6);
    // 094a1a  mov edi, dword ptr [esi + 8]
    X86_AT(c, 0x94a1au);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 094a1d  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0x94a1du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_94a24:
    X86_TICK(c, 37);
    // 094a24  mov dword ptr [esi + 8], edi
    X86_AT(c, 0x94a24u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[7]);
    // 094a27  lea eax, [edi - 0x10]
    X86_AT(c, 0x94a27u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFF0u);
    // 094a2a  mov dword ptr [0x8a828], eax
    X86_AT(c, 0x94a2au);
    wr32((c.sbase[3] + (uint32_t)(0x8A828u)), c.r[0]);
    // 094a2f  mov byte ptr [esi + 0xf], 0x44
    X86_AT(c, 0x94a2fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu)), 0x44u);
    // 094a33  mov ax, word ptr [0x8a844]
    X86_AT(c, 0x94a33u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A844u))));
    // 094a39  mov word ptr [esi + 0xc], ax
    X86_AT(c, 0x94a39u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[0] & 0xFFFFu));
    // 094a3d  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x94a3du);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 094a40  mov byte ptr [esi + 0xe], al
    X86_AT(c, 0x94a40u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu)), g8(c, 0));
    // 094a43  lea eax, [esi + 0x10]
    X86_AT(c, 0x94a43u);
    c.r[0] = (uint32_t)(c.r[6] + 0x10u);
    // 094a46  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x94a46u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 094a49  push eax
    X86_AT(c, 0x94a49u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094a4a  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0x94a4au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 094a4d  call dword ptr [ebp + 0x10]
    X86_AT(c, 0x94a4du);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, 0x94a50u); x86_call(c, t); X86_RET(c, 0x94a50u); }
    X86_TICK(c, 11);
    // 094a50  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x94a50u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 094a53  and eax, eax
    X86_AT(c, 0x94a53u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094a55  jbe 0x94a9a
    X86_AT(c, 0x94a55u);
    if (x86_cc(c, 6)) { goto L_94a9a; }
    X86_TICK(c, 37);
    // 094a57  lea ebx, [edi + esi*1]
    X86_AT(c, 0x94a57u);
    c.r[3] = (uint32_t)(c.r[7] + c.r[6]);
    // 094a5a  mov edx, dword ptr [esi]
    X86_AT(c, 0x94a5au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 094a5c  mov dword ptr [ebx], edx
    X86_AT(c, 0x94a5cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 094a5e  mov dword ptr [esi], ebx
    X86_AT(c, 0x94a5eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[3]);
    // 094a60  mov dword ptr [ebx + 4], esi
    X86_AT(c, 0x94a60u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[6]);
    // 094a63  mov dword ptr [ebx + 8], eax
    X86_AT(c, 0x94a63u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[0]);
    // 094a66  mov byte ptr [ebx + 0xf], 0x55
    X86_AT(c, 0x94a66u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFu)), 0x55u);
    // 094a6a  mov byte ptr [ebx + 0xe], 0
    X86_AT(c, 0x94a6au);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu)), 0x0u);
    // 094a6e  mov dx, word ptr [0x8a844]
    X86_AT(c, 0x94a6eu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0x8A844u))));
    // 094a75  mov word ptr [ebx + 0xc], dx
    X86_AT(c, 0x94a75u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), (c.r[2] & 0xFFFFu));
    // 094a79  mov dword ptr [ebx + eax*1 + 4], ebx
    X86_AT(c, 0x94a79u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x4u)), c.r[3]);
    // 094a7d  cmp esi, dword ptr [0x8a820]
    X86_AT(c, 0x94a7du);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8A820u))), 0, 4);
    // 094a83  jne 0x94a8b
    X86_AT(c, 0x94a83u);
    if (x86_cc(c, 5)) { goto L_94a8b; }
    X86_TICK(c, 2);
    // 094a85  mov dword ptr [0x8a820], ebx
    X86_AT(c, 0x94a85u);
    wr32((c.sbase[3] + (uint32_t)(0x8A820u)), c.r[3]);
L_94a8b:
    X86_TICK(c, 9);
    // 094a8b  push ebx
    X86_AT(c, 0x94a8bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094a8c  call 0x94768
    X86_AT(c, 0x94a8cu);
    push32(c, 0x94a91u); x86_call_known(c, 0x94768u, f_00094768); X86_RET(c, 0x94a91u);
    X86_TICK(c, 7);
    // 094a91  jmp 0x94a9a
    X86_AT(c, 0x94a91u);
    goto L_94a9a;
L_94a93:
    X86_TICK(c, 2);
    // 094a93  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x94a93u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_94a9a:
    X86_TICK(c, 12);
    // 094a9a  cmp byte ptr [0x8a810], 0
    X86_AT(c, 0x94a9au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A810u))), 0x0u, 0, 1);
    // 094aa1  je 0x94aa8
    X86_AT(c, 0x94aa1u);
    if (x86_cc(c, 4)) { goto L_94aa8; }
    X86_TICK(c, 7);
    // 094aa3  call 0x94c04
    X86_AT(c, 0x94aa3u);
    push32(c, 0x94aa8u); x86_call_known(c, 0x94c04u, f_00094c04); X86_RET(c, 0x94aa8u);
L_94aa8:
    X86_TICK(c, 4);
    // 094aa8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94aa8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_94aab:
    X86_TICK(c, 28);
    // 094aab  pop edi
    X86_AT(c, 0x94aabu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094aac  pop esi
    X86_AT(c, 0x94aacu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094aad  pop ebx
    X86_AT(c, 0x94aadu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094aae  leave 
    X86_AT(c, 0x94aaeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094aaf  ret 0x10
    X86_AT(c, 0x94aafu);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0x949acu, "ran off the end of a function");
}
void f_00094ab4(X86Cpu& c) {
    X86_TICK(c, 22);
    // 094ab4  push ebp
    X86_AT(c, 0x94ab4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094ab5  mov ebp, esp
    X86_AT(c, 0x94ab5u);
    c.r[5] = c.r[4];
    // 094ab7  push ecx
    X86_AT(c, 0x94ab7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094ab8  leave 
    X86_AT(c, 0x94ab8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094ab9  ret 4
    X86_AT(c, 0x94ab9u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94ab4u, "ran off the end of a function");
}
void f_00094ac4(X86Cpu& c) {
    X86_TICK(c, 29);
    // 094ac4  enter 4, 0
    X86_AT(c, 0x94ac4u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 094ac8  push edi
    X86_AT(c, 0x94ac8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094ac9  push ebp
    X86_AT(c, 0x94ac9u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094aca  push 0x94ab4
    X86_AT(c, 0x94acau);
    { uint32_t v = 0x94AB4u; push32(c, v); }
    // 094acf  push dword ptr [ebp + 8]
    X86_AT(c, 0x94acfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 094ad2  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x94ad2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 094ad5  call 0x949ac
    X86_AT(c, 0x94ad5u);
    push32(c, 0x94adau); x86_call_known(c, 0x949acu, f_000949ac); X86_RET(c, 0x94adau);
    X86_TICK(c, 14);
    // 094ada  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x94adau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 094add  cmp byte ptr [0x8a812], 0
    X86_AT(c, 0x94addu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A812u))), 0x0u, 0, 1);
    // 094ae4  je 0x94b00
    X86_AT(c, 0x94ae4u);
    if (x86_cc(c, 4)) { goto L_94b00; }
    X86_TICK(c, 7);
    // 094ae6  and eax, eax
    X86_AT(c, 0x94ae6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094ae8  je 0x94b00
    X86_AT(c, 0x94ae8u);
    if (x86_cc(c, 4)) { goto L_94b00; }
    X86_TICK(c, 11);
    // 094aea  mov edx, dword ptr [0x8a828]
    X86_AT(c, 0x94aeau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A828u)));
    // 094af0  and edx, edx
    X86_AT(c, 0x94af0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 094af2  jbe 0x94b00
    X86_AT(c, 0x94af2u);
    if (x86_cc(c, 6)) { goto L_94b00; }
    X86_TICK(c, 17);
    // 094af4  mov al, byte ptr [0x8a811]
    X86_AT(c, 0x94af4u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A811u))));
    // 094af9  mov ecx, edx
    X86_AT(c, 0x94af9u);
    c.r[1] = c.r[2];
    // 094afb  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x94afbu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094afe  stosb byte ptr es:[edi], al
    X86_AT(c, 0x94afeu);
    x86_string(c, 2, 1, 243, 4, 3);
L_94b00:
    X86_TICK(c, 24);
    // 094b00  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94b00u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094b03  pop edi
    X86_AT(c, 0x94b03u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094b04  leave 
    X86_AT(c, 0x94b04u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094b05  ret 8
    X86_AT(c, 0x94b05u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x94ac4u, "ran off the end of a function");
}
void f_00094b10(X86Cpu& c) {
    X86_TICK(c, 22);
    // 094b10  push ebp
    X86_AT(c, 0x94b10u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094b11  mov ebp, esp
    X86_AT(c, 0x94b11u);
    c.r[5] = c.r[4];
    // 094b13  push dword ptr [ebp + 8]
    X86_AT(c, 0x94b13u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 094b16  mov ax, word ptr [0x8a814]
    X86_AT(c, 0x94b16u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A814u))));
    // 094b1c  push eax
    X86_AT(c, 0x94b1cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094b1d  call 0x94ac4
    X86_AT(c, 0x94b1du);
    push32(c, 0x94b22u); x86_call_known(c, 0x94ac4u, f_00094ac4); X86_RET(c, 0x94b22u);
    X86_TICK(c, 16);
    // 094b22  leave 
    X86_AT(c, 0x94b22u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094b23  ret 4
    X86_AT(c, 0x94b23u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94b10u, "ran off the end of a function");
}
void f_00094b2c(X86Cpu& c) {
    X86_TICK(c, 26);
    // 094b2c  push ebp
    X86_AT(c, 0x94b2cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094b2d  mov ebp, esp
    X86_AT(c, 0x94b2du);
    c.r[5] = c.r[4];
    // 094b2f  push ecx
    X86_AT(c, 0x94b2fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094b30  push ebx
    X86_AT(c, 0x94b30u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094b31  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0x94b31u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094b34  push dword ptr [ebx + 8]
    X86_AT(c, 0x94b34u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 094b37  push 6
    X86_AT(c, 0x94b37u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 094b39  call 0x95ab0
    X86_AT(c, 0x94b39u);
    push32(c, 0x94b3eu); x86_call_known(c, 0x95ab0u, f_00095ab0); X86_RET(c, 0x94b3eu);
    X86_TICK(c, 9);
    // 094b3e  mov ebp, ebx
    X86_AT(c, 0x94b3eu);
    c.r[5] = c.r[3];
    // 094b40  jmp 0x94be4
    X86_AT(c, 0x94b40u);
    goto L_94be4;
L_94be4:
    X86_TICK(c, 30);
    // 094be4  lea esp, [ebp - 0x10]
    X86_AT(c, 0x94be4u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 094be7  pop edi
    X86_AT(c, 0x94be7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094be8  pop esi
    X86_AT(c, 0x94be8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094be9  pop ebx
    X86_AT(c, 0x94be9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094bea  leave 
    X86_AT(c, 0x94beau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094beb  ret 4
    X86_AT(c, 0x94bebu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94b2cu, "ran off the end of a function");
}
void f_00094b4a(X86Cpu& c) {
    X86_TICK(c, 24);
    // 094b4a  enter 4, 0
    X86_AT(c, 0x94b4au);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 094b4e  push ebx
    X86_AT(c, 0x94b4eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094b4f  push esi
    X86_AT(c, 0x94b4fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094b50  push edi
    X86_AT(c, 0x94b50u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094b51  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0x94b51u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 094b55  je 0x94be7
    X86_AT(c, 0x94b55u);
    if (x86_cc(c, 4)) { goto L_94be7; }
    X86_TICK(c, 25);
    // 094b5b  add dword ptr [ebp + 8], 0xfffffff0
    X86_AT(c, 0x94b5bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF0u, 0, 4)); }
    // 094b5f  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x94b5fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094b62  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x94b62u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 094b65  cmp byte ptr [0x8a810], 0
    X86_AT(c, 0x94b65u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A810u))), 0x0u, 0, 1);
    // 094b6c  je 0x94b73
    X86_AT(c, 0x94b6cu);
    if (x86_cc(c, 4)) { goto L_94b73; }
    X86_TICK(c, 7);
    // 094b6e  call 0x94c04
    X86_AT(c, 0x94b6eu);
    push32(c, 0x94b73u); x86_call_known(c, 0x94c04u, f_00094c04); X86_RET(c, 0x94b73u);
L_94b73:
    X86_TICK(c, 16);
    // 094b73  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94b73u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094b76  cmp byte ptr [eax + 0xf], 0x44
    X86_AT(c, 0x94b76u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu))), 0x44u, 0, 1);
    // 094b7a  jne 0x94b8a
    X86_AT(c, 0x94b7au);
    if (x86_cc(c, 5)) { goto L_94b8a; }
    X86_TICK(c, 15);
    // 094b7c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94b7cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094b7f  mov edx, dword ptr [eax]
    X86_AT(c, 0x94b7fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 094b81  and edx, edx
    X86_AT(c, 0x94b81u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 094b83  je 0x94b91
    X86_AT(c, 0x94b83u);
    if (x86_cc(c, 4)) { goto L_94b91; }
    X86_TICK(c, 11);
    // 094b85  cmp eax, dword ptr [edx + 4]
    X86_AT(c, 0x94b85u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u))), 0, 4);
    // 094b88  je 0x94b91
    X86_AT(c, 0x94b88u);
    if (x86_cc(c, 4)) { goto L_94b91; }
L_94b8a:
    X86_TICK(c, 9);
    // 094b8a  mov ecx, ebp
    X86_AT(c, 0x94b8au);
    c.r[1] = c.r[5];
    // 094b8c  call 0x94b2c
    X86_AT(c, 0x94b8cu);
    push32(c, 0x94b91u); x86_call_known(c, 0x94b2cu, f_00094b2c); X86_RET(c, 0x94b91u);
L_94b91:
    X86_TICK(c, 15);
    // 094b91  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94b91u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094b94  mov byte ptr [eax + 0xf], 0x55
    X86_AT(c, 0x94b94u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu)), 0x55u);
    // 094b98  push eax
    X86_AT(c, 0x94b98u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094b99  call 0x94768
    X86_AT(c, 0x94b99u);
    push32(c, 0x94b9eu); x86_call_known(c, 0x94768u, f_00094768); X86_RET(c, 0x94b9eu);
    X86_TICK(c, 16);
    // 094b9e  mov eax, dword ptr [0x8a820]
    X86_AT(c, 0x94b9eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A820u)));
    // 094ba3  cmp byte ptr [eax + 0xf], 0x55
    X86_AT(c, 0x94ba3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu))), 0x55u, 0, 1);
    // 094ba7  jne 0x94bd6
    X86_AT(c, 0x94ba7u);
    if (x86_cc(c, 5)) { goto L_94bd6; }
    X86_TICK(c, 28);
    // 094ba9  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x94ba9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 094bac  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x94bacu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 094baf  neg edx
    X86_AT(c, 0x94bafu);
    { uint32_t v = c.r[2]; c.r[2] = x86_neg(c, v, 4); }
    // 094bb1  add dword ptr [0x8a824], edx
    X86_AT(c, 0x94bb1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A824u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 094bb7  mov eax, dword ptr [eax + 4]
    X86_AT(c, 0x94bb7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 094bba  mov dword ptr [0x8a820], eax
    X86_AT(c, 0x94bbau);
    wr32((c.sbase[3] + (uint32_t)(0x8A820u)), c.r[0]);
    // 094bbf  and eax, eax
    X86_AT(c, 0x94bbfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094bc1  je 0x94bc9
    X86_AT(c, 0x94bc1u);
    if (x86_cc(c, 4)) { goto L_94bc9; }
    X86_TICK(c, 2);
    // 094bc3  mov dword ptr [eax], 0
    X86_AT(c, 0x94bc3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
L_94bc9:
    X86_TICK(c, 12);
    // 094bc9  push dword ptr [ebp - 4]
    X86_AT(c, 0x94bc9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 094bcc  call 0x94714
    X86_AT(c, 0x94bccu);
    push32(c, 0x94bd1u); x86_call_known(c, 0x94714u, f_00094714); X86_RET(c, 0x94bd1u);
    X86_TICK(c, 7);
    // 094bd1  call 0x94870
    X86_AT(c, 0x94bd1u);
    push32(c, 0x94bd6u); x86_call_known(c, 0x94870u, f_00094870); X86_RET(c, 0x94bd6u);
L_94bd6:
    X86_TICK(c, 12);
    // 094bd6  cmp byte ptr [0x8a810], 0
    X86_AT(c, 0x94bd6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A810u))), 0x0u, 0, 1);
    // 094bdd  je 0x94be4
    X86_AT(c, 0x94bddu);
    if (x86_cc(c, 4)) { goto L_94be4; }
    X86_TICK(c, 7);
    // 094bdf  call 0x94c04
    X86_AT(c, 0x94bdfu);
    push32(c, 0x94be4u); x86_call_known(c, 0x94c04u, f_00094c04); X86_RET(c, 0x94be4u);
L_94be4:
    X86_TICK(c, 2);
    // 094be4  lea esp, [ebp - 0x10]
    X86_AT(c, 0x94be4u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
L_94be7:
    X86_TICK(c, 28);
    // 094be7  pop edi
    X86_AT(c, 0x94be7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094be8  pop esi
    X86_AT(c, 0x94be8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094be9  pop ebx
    X86_AT(c, 0x94be9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094bea  leave 
    X86_AT(c, 0x94beau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094beb  ret 4
    X86_AT(c, 0x94bebu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94b4au, "ran off the end of a function");
}
void f_00094c04(X86Cpu& c) {
    X86_TICK(c, 15);
    // 094c04  push ebp
    X86_AT(c, 0x94c04u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094c05  mov ebp, esp
    X86_AT(c, 0x94c05u);
    c.r[5] = c.r[4];
    // 094c07  push ebp
    X86_AT(c, 0x94c07u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094c08  push 0x94c1c
    X86_AT(c, 0x94c08u);
    { uint32_t v = 0x94C1Cu; push32(c, v); }
    // 094c0d  call 0x94648
    X86_AT(c, 0x94c0du);
    push32(c, 0x94c12u); x86_call_known(c, 0x94648u, f_00094648); X86_RET(c, 0x94c12u);
    X86_TICK(c, 16);
    // 094c12  leave 
    X86_AT(c, 0x94c12u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094c13  ret 
    X86_AT(c, 0x94c13u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94c04u, "ran off the end of a function");
}
void f_00094c1c(X86Cpu& c) {
    X86_TICK(c, 22);
    // 094c1c  push ebp
    X86_AT(c, 0x94c1cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094c1d  mov ebp, esp
    X86_AT(c, 0x94c1du);
    c.r[5] = c.r[4];
    // 094c1f  push ecx
    X86_AT(c, 0x94c1fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094c20  leave 
    X86_AT(c, 0x94c20u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094c21  ret 4
    X86_AT(c, 0x94c21u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94c1cu, "ran off the end of a function");
}
void f_00094c24(X86Cpu& c) {
    X86_TICK(c, 13);
    // 094c24  inc byte ptr [0x8a849]
    X86_AT(c, 0x94c24u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A849u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 094c2a  call 0x95a88
    X86_AT(c, 0x94c2au);
    push32(c, 0x94c2fu); x86_call_known(c, 0x95a88u, f_00095a88); X86_RET(c, 0x94c2fu);
    X86_TICK(c, 7);
    // 094c2f  call 0x9449c
    X86_AT(c, 0x94c2fu);
    push32(c, 0x94c34u); x86_call_known(c, 0x9449cu, f_0009449c); X86_RET(c, 0x94c34u);
    X86_TICK(c, 7);
    // 094c34  call 0x94358
    X86_AT(c, 0x94c34u);
    push32(c, 0x94c39u); x86_call_known(c, 0x94358u, f_00094358); X86_RET(c, 0x94c39u);
    X86_TICK(c, 7);
    // 094c39  call 0x93045
    X86_AT(c, 0x94c39u);
    push32(c, 0x94c3eu); x86_call_known(c, 0x93045u, f_00093045); X86_RET(c, 0x94c3eu);
    X86_TICK(c, 13);
    // 094c3e  mov al, byte ptr [0x8a848]
    X86_AT(c, 0x94c3eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A848u))));
    // 094c43  push eax
    X86_AT(c, 0x94c43u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094c44  call 0x94570
    X86_AT(c, 0x94c44u);
    push32(c, 0x94c49u); x86_call_known(c, 0x94570u, f_00094570); X86_RET(c, 0x94c49u);
    X86_TICK(c, 10);
    // 094c49  ret 
    X86_AT(c, 0x94c49u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94c24u, "ran off the end of a function");
}
void f_00094c4c(X86Cpu& c) {
    X86_TICK(c, 16);
    // 094c4c  push ebp
    X86_AT(c, 0x94c4cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094c4d  mov ebp, esp
    X86_AT(c, 0x94c4du);
    c.r[5] = c.r[4];
    // 094c4f  cmp byte ptr [0x8a84a], 0
    X86_AT(c, 0x94c4fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A84Au))), 0x0u, 0, 1);
    // 094c56  je 0x94c65
    X86_AT(c, 0x94c56u);
    if (x86_cc(c, 4)) { goto L_94c65; }
    X86_TICK(c, 13);
    // 094c58  mov al, byte ptr [0x8a848]
    X86_AT(c, 0x94c58u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A848u))));
    // 094c5d  push eax
    X86_AT(c, 0x94c5du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094c5e  call 0x94570
    X86_AT(c, 0x94c5eu);
    push32(c, 0x94c63u); x86_call_known(c, 0x94570u, f_00094570); X86_RET(c, 0x94c63u);
    X86_TICK(c, 7);
    // 094c63  jmp 0x94c6c
    X86_AT(c, 0x94c63u);
    goto L_94c6c;
L_94c65:
    X86_TICK(c, 2);
    // 094c65  mov byte ptr [0x8a84a], 1
    X86_AT(c, 0x94c65u);
    wr8((c.sbase[3] + (uint32_t)(0x8A84Au)), 0x1u);
L_94c6c:
    X86_TICK(c, 13);
    // 094c6c  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x94c6cu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 094c6f  mov byte ptr [0x8a848], al
    X86_AT(c, 0x94c6fu);
    wr8((c.sbase[3] + (uint32_t)(0x8A848u)), g8(c, 0));
    // 094c74  call 0x94c24
    X86_AT(c, 0x94c74u);
    push32(c, 0x94c79u); x86_call_known(c, 0x94c24u, f_00094c24); X86_RET(c, 0x94c79u);
    X86_TICK(c, 16);
    // 094c79  leave 
    X86_AT(c, 0x94c79u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094c7a  ret 4
    X86_AT(c, 0x94c7au);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94c4cu, "ran off the end of a function");
}
void f_00094c80(X86Cpu& c) {
    X86_TICK(c, 16);
    // 094c80  push ebp
    X86_AT(c, 0x94c80u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094c81  mov ebp, esp
    X86_AT(c, 0x94c81u);
    c.r[5] = c.r[4];
    // 094c83  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x94c83u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 094c86  call 0x9452c
    X86_AT(c, 0x94c86u);
    push32(c, 0x94c8bu); x86_call_known(c, 0x9452cu, f_0009452c); X86_RET(c, 0x94c8bu);
    X86_TICK(c, 23);
    // 094c8b  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x94c8bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 094c8e  mov dword ptr [0x8a7ec], eax
    X86_AT(c, 0x94c8eu);
    wr32((c.sbase[3] + (uint32_t)(0x8A7ECu)), c.r[0]);
    // 094c93  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x94c93u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094c97  mov dword ptr [0x8a7e8], eax
    X86_AT(c, 0x94c97u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7E8u)), c.r[0]);
    // 094c9c  push 0x3f
    X86_AT(c, 0x94c9cu);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 094c9e  call 0x944b8
    X86_AT(c, 0x94c9eu);
    push32(c, 0x94ca3u); x86_call_known(c, 0x944b8u, f_000944b8); X86_RET(c, 0x94ca3u);
    X86_TICK(c, 20);
    // 094ca3  mov eax, dword ptr [0x8a7e4]
    X86_AT(c, 0x94ca3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A7E4u)));
    // 094ca8  leave 
    X86_AT(c, 0x94ca8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094ca9  ret 0xc
    X86_AT(c, 0x94ca9u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x94c80u, "ran off the end of a function");
}
void f_00094cac(X86Cpu& c) {
    X86_TICK(c, 22);
    // 094cac  push ebp
    X86_AT(c, 0x94cacu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094cad  mov ebp, esp
    X86_AT(c, 0x94cadu);
    c.r[5] = c.r[4];
    // 094caf  push edi
    X86_AT(c, 0x94cafu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094cb0  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x94cb0u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 094cb3  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x94cb3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 094cb6  call 0x9452c
    X86_AT(c, 0x94cb6u);
    push32(c, 0x94cbbu); x86_call_known(c, 0x9452cu, f_0009452c); X86_RET(c, 0x94cbbu);
    X86_TICK(c, 19);
    // 094cbb  mov dword ptr [0x8a7ec], edi
    X86_AT(c, 0x94cbbu);
    wr32((c.sbase[3] + (uint32_t)(0x8A7ECu)), c.r[7]);
    // 094cc1  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x94cc1u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094cc5  mov dword ptr [0x8a7e8], eax
    X86_AT(c, 0x94cc5u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7E8u)), c.r[0]);
    // 094cca  push 0x40
    X86_AT(c, 0x94ccau);
    { uint32_t v = 0x40u; push32(c, v); }
    // 094ccc  call 0x944b8
    X86_AT(c, 0x94cccu);
    push32(c, 0x94cd1u); x86_call_known(c, 0x944b8u, f_000944b8); X86_RET(c, 0x94cd1u);
    X86_TICK(c, 11);
    // 094cd1  cmp edi, dword ptr [0x8a7e4]
    X86_AT(c, 0x94cd1u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x8A7E4u))), 0, 4);
    // 094cd7  jbe 0x94cec
    X86_AT(c, 0x94cd7u);
    if (x86_cc(c, 6)) { goto L_94cec; }
    X86_TICK(c, 12);
    // 094cd9  cmp word ptr [0x8a7de], 0
    X86_AT(c, 0x94cd9u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A7DEu))), 0x0u, 0, 2);
    // 094ce1  jne 0x94cec
    X86_AT(c, 0x94ce1u);
    if (x86_cc(c, 5)) { goto L_94cec; }
    X86_TICK(c, 2);
    // 094ce3  mov word ptr [0x8a7de], 0x15
    X86_AT(c, 0x94ce3u);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), 0x15u);
L_94cec:
    X86_TICK(c, 24);
    // 094cec  mov eax, dword ptr [0x8a7e4]
    X86_AT(c, 0x94cecu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A7E4u)));
    // 094cf1  pop edi
    X86_AT(c, 0x94cf1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094cf2  leave 
    X86_AT(c, 0x94cf2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094cf3  ret 0xc
    X86_AT(c, 0x94cf3u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x94cacu, "ran off the end of a function");
}
void f_00094d10(X86Cpu& c) {
    X86_TICK(c, 23);
    // 094d10  push ebp
    X86_AT(c, 0x94d10u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094d11  mov ebp, esp
    X86_AT(c, 0x94d11u);
    c.r[5] = c.r[4];
    // 094d13  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x94d13u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094d17  mov dword ptr [0x8a7e8], eax
    X86_AT(c, 0x94d17u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7E8u)), c.r[0]);
    // 094d1c  mov byte ptr [0x8a7e4], 0
    X86_AT(c, 0x94d1cu);
    wr8((c.sbase[3] + (uint32_t)(0x8A7E4u)), 0x0u);
    // 094d23  push 0x44
    X86_AT(c, 0x94d23u);
    { uint32_t v = 0x44u; push32(c, v); }
    // 094d25  call 0x944b8
    X86_AT(c, 0x94d25u);
    push32(c, 0x94d2au); x86_call_known(c, 0x944b8u, f_000944b8); X86_RET(c, 0x94d2au);
    X86_TICK(c, 12);
    // 094d2a  test byte ptr [0x8a7f0], 0x80
    X86_AT(c, 0x94d2au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A7F0u))) & 0x80u, 1);
    // 094d31  jne 0x94d37
    X86_AT(c, 0x94d31u);
    if (x86_cc(c, 5)) { goto L_94d37; }
    X86_TICK(c, 9);
    // 094d33  sub eax, eax
    X86_AT(c, 0x94d33u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094d35  jmp 0x94d53
    X86_AT(c, 0x94d35u);
    goto L_94d53;
L_94d37:
    X86_TICK(c, 12);
    // 094d37  test byte ptr [0x8a7f0], 2
    X86_AT(c, 0x94d37u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A7F0u))) & 0x2u, 1);
    // 094d3e  je 0x94d44
    X86_AT(c, 0x94d3eu);
    if (x86_cc(c, 4)) { goto L_94d44; }
    X86_TICK(c, 9);
    // 094d40  mov al, 2
    X86_AT(c, 0x94d40u);
    s8(c, 0, 0x2u);
    // 094d42  jmp 0x94d53
    X86_AT(c, 0x94d42u);
    goto L_94d53;
L_94d44:
    X86_TICK(c, 12);
    // 094d44  test byte ptr [0x8a7f0], 1
    X86_AT(c, 0x94d44u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A7F0u))) & 0x1u, 1);
    // 094d4b  je 0x94d51
    X86_AT(c, 0x94d4bu);
    if (x86_cc(c, 4)) { goto L_94d51; }
    X86_TICK(c, 9);
    // 094d4d  mov al, 1
    X86_AT(c, 0x94d4du);
    s8(c, 0, 0x1u);
    // 094d4f  jmp 0x94d53
    X86_AT(c, 0x94d4fu);
    goto L_94d53;
L_94d51:
    X86_TICK(c, 2);
    // 094d51  mov al, 4
    X86_AT(c, 0x94d51u);
    s8(c, 0, 0x4u);
L_94d53:
    X86_TICK(c, 16);
    // 094d53  leave 
    X86_AT(c, 0x94d53u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094d54  ret 4
    X86_AT(c, 0x94d54u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94d10u, "ran off the end of a function");
}
void f_00094d58(X86Cpu& c) {
    X86_TICK(c, 45);
    // 094d58  enter 4, 0
    X86_AT(c, 0x94d58u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 094d5c  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x94d5cu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094d60  mov dword ptr [0x8a7e8], eax
    X86_AT(c, 0x94d60u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7E8u)), c.r[0]);
    // 094d65  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0x94d65u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 094d68  mov byte ptr [0x8a7e4], al
    X86_AT(c, 0x94d68u);
    wr8((c.sbase[3] + (uint32_t)(0x8A7E4u)), g8(c, 0));
    // 094d6d  movzx eax, word ptr [ebp + 0xe]
    X86_AT(c, 0x94d6du);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xEu)));
    // 094d71  mov dword ptr [0x8a7ec], eax
    X86_AT(c, 0x94d71u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7ECu)), c.r[0]);
    // 094d76  movzx eax, word ptr [ebp + 0xc]
    X86_AT(c, 0x94d76u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 094d7a  mov dword ptr [0x8a7f0], eax
    X86_AT(c, 0x94d7au);
    wr32((c.sbase[3] + (uint32_t)(0x8A7F0u)), c.r[0]);
    // 094d7f  push 0x42
    X86_AT(c, 0x94d7fu);
    { uint32_t v = 0x42u; push32(c, v); }
    // 094d81  call 0x944b8
    X86_AT(c, 0x94d81u);
    push32(c, 0x94d86u); x86_call_known(c, 0x944b8u, f_000944b8); X86_RET(c, 0x94d86u);
    X86_TICK(c, 32);
    // 094d86  mov ax, word ptr [0x8a7f0]
    X86_AT(c, 0x94d86u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A7F0u))));
    // 094d8c  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x94d8cu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 094d90  mov ax, word ptr [0x8a7e4]
    X86_AT(c, 0x94d90u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A7E4u))));
    // 094d96  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x94d96u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 094d9a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94d9au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094d9d  leave 
    X86_AT(c, 0x94d9du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094d9e  ret 0xc
    X86_AT(c, 0x94d9eu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x94d58u, "ran off the end of a function");
}
void f_00094da4(X86Cpu& c) {
    X86_TICK(c, 40);
    // 094da4  push ebp
    X86_AT(c, 0x94da4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094da5  mov ebp, esp
    X86_AT(c, 0x94da5u);
    c.r[5] = c.r[4];
    // 094da7  push esi
    X86_AT(c, 0x94da7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094da8  push edi
    X86_AT(c, 0x94da8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094da9  push ebx
    X86_AT(c, 0x94da9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094daa  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x94daau);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094dad  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x94dadu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 094db0  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x94db0u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 094db4  sub eax, eax
    X86_AT(c, 0x94db4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094db6  cld 
    X86_AT(c, 0x94db6u);
    c.fl &= ~X86_DF;
    // 094db7  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0x94db7u);
    x86_string(c, 1, 1, 243, 4, 3);
    // 094db9  jb 0x94dc0
    X86_AT(c, 0x94db9u);
    if (x86_cc(c, 2)) { goto L_94dc0; }
    X86_TICK(c, 5);
    // 094dbb  je 0x94dc1
    X86_AT(c, 0x94dbbu);
    if (x86_cc(c, 4)) { goto L_94dc1; }
    X86_TICK(c, 9);
    // 094dbd  inc eax
    X86_AT(c, 0x94dbdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 094dbe  jmp 0x94dc1
    X86_AT(c, 0x94dbeu);
    goto L_94dc1;
L_94dc0:
    X86_TICK(c, 2);
    // 094dc0  dec eax
    X86_AT(c, 0x94dc0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_94dc1:
    X86_TICK(c, 26);
    // 094dc1  pop ebx
    X86_AT(c, 0x94dc1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094dc2  pop edi
    X86_AT(c, 0x94dc2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094dc3  pop esi
    X86_AT(c, 0x94dc3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094dc4  pop ebp
    X86_AT(c, 0x94dc4u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 094dc5  ret 0xc
    X86_AT(c, 0x94dc5u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x94da4u, "ran off the end of a function");
}
void f_00094de4(X86Cpu& c) {
    X86_TICK(c, 48);
    // 094de4  push ebp
    X86_AT(c, 0x94de4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094de5  mov ebp, esp
    X86_AT(c, 0x94de5u);
    c.r[5] = c.r[4];
    // 094de7  push ecx
    X86_AT(c, 0x94de7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094de8  sub esp, 0x28
    X86_AT(c, 0x94de8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x28u, 0, 4); }
    // 094deb  push ebx
    X86_AT(c, 0x94debu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094dec  push esi
    X86_AT(c, 0x94decu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094ded  push edi
    X86_AT(c, 0x94dedu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094dee  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94deeu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094df1  movzx edx, byte ptr [eax - 0x21]
    X86_AT(c, 0x94df1u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFDFu)));
    // 094df5  mov ecx, dword ptr [eax + 0x20]
    X86_AT(c, 0x94df5u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)));
    // 094df8  sub ecx, edx
    X86_AT(c, 0x94df8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 094dfa  mov dword ptr [ebp - 0x20], ecx
    X86_AT(c, 0x94dfau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[1]);
    // 094dfd  push dword ptr [ebp - 0x20]
    X86_AT(c, 0x94dfdu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))); push32(c, v); }
    // 094e00  lea ecx, [ebp - 0x10]
    X86_AT(c, 0x94e00u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 094e03  push ecx
    X86_AT(c, 0x94e03u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094e04  call 0x95bfc
    X86_AT(c, 0x94e04u);
    push32(c, 0x94e09u); x86_call_known(c, 0x95bfcu, f_00095bfc); X86_RET(c, 0x94e09u);
    X86_TICK(c, 15);
    // 094e09  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94e09u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094e0c  lea edx, [eax + 0xc]
    X86_AT(c, 0x94e0cu);
    c.r[2] = (uint32_t)(c.r[0] + 0xCu);
    // 094e0f  push edx
    X86_AT(c, 0x94e0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 094e10  call 0x95f20
    X86_AT(c, 0x94e10u);
    push32(c, 0x94e15u); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x94e15u);
    X86_TICK(c, 11);
    // 094e15  lea eax, [ebp - 0x10]
    X86_AT(c, 0x94e15u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 094e18  push eax
    X86_AT(c, 0x94e18u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094e19  call 0x95f20
    X86_AT(c, 0x94e19u);
    push32(c, 0x94e1eu); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x94e1eu);
    X86_TICK(c, 7);
    // 094e1e  call 0x96090
    X86_AT(c, 0x94e1eu);
    push32(c, 0x94e23u); x86_call_known(c, 0x96090u, f_00096090); X86_RET(c, 0x94e23u);
    X86_TICK(c, 11);
    // 094e23  lea eax, [ebp - 0x10]
    X86_AT(c, 0x94e23u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 094e26  push eax
    X86_AT(c, 0x94e26u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094e27  call 0x95f80
    X86_AT(c, 0x94e27u);
    push32(c, 0x94e2cu); x86_call_known(c, 0x95f80u, f_00095f80); X86_RET(c, 0x94e2cu);
    X86_TICK(c, 15);
    // 094e2c  lea eax, [ebp - 0x10]
    X86_AT(c, 0x94e2cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 094e2f  push eax
    X86_AT(c, 0x94e2fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094e30  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x94e30u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 094e33  push eax
    X86_AT(c, 0x94e33u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094e34  call 0x95d60
    X86_AT(c, 0x94e34u);
    push32(c, 0x94e39u); x86_call_known(c, 0x95d60u, f_00095d60); X86_RET(c, 0x94e39u);
    X86_TICK(c, 47);
    // 094e39  push esi
    X86_AT(c, 0x94e39u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094e3a  lea esi, [ebp - 0x2c]
    X86_AT(c, 0x94e3au);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 094e3d  push edi
    X86_AT(c, 0x94e3du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094e3e  lea edi, [ebp - 0x1a]
    X86_AT(c, 0x94e3eu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFE6u);
    // 094e41  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x94e41u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 094e42  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x94e42u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 094e43  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x94e43u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 094e45  pop edi
    X86_AT(c, 0x94e45u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094e46  pop esi
    X86_AT(c, 0x94e46u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094e47  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94e47u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094e4a  mov dword ptr [eax - 0x20], 0x13
    X86_AT(c, 0x94e4au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)), 0x13u);
    // 094e51  mov edi, 1
    X86_AT(c, 0x94e51u);
    c.r[7] = 0x1u;
    // 094e56  mov esi, edi
    X86_AT(c, 0x94e56u);
    c.r[6] = c.r[7];
L_94e58:
    X86_TICK(c, 14);
    // 094e58  mov bl, byte ptr [ebp + edi*1 - 0x1b]
    X86_AT(c, 0x94e58u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] + 0xFFFFFFE5u))));
    // 094e5c  mov eax, esi
    X86_AT(c, 0x94e5cu);
    c.r[0] = c.r[6];
    // 094e5e  rcr eax, 1
    X86_AT(c, 0x94e5eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 094e60  jae 0x94e6a
    X86_AT(c, 0x94e60u);
    if (x86_cc(c, 3)) { goto L_94e6a; }
    X86_TICK(c, 13);
    // 094e62  sub bh, bh
    X86_AT(c, 0x94e62u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, g8(c, 7), 0, 1)); }
    // 094e64  mov eax, ebx
    X86_AT(c, 0x94e64u);
    c.r[0] = c.r[3];
    // 094e66  and al, 0xf
    X86_AT(c, 0x94e66u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 094e68  jmp 0x94e6f
    X86_AT(c, 0x94e68u);
    goto L_94e6f;
L_94e6a:
    X86_TICK(c, 5);
    // 094e6a  mov eax, ebx
    X86_AT(c, 0x94e6au);
    c.r[0] = c.r[3];
    // 094e6c  shr al, 4
    X86_AT(c, 0x94e6cu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
L_94e6f:
    X86_TICK(c, 34);
    // 094e6f  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0x94e6fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
    // 094e72  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94e72u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094e75  dec dword ptr [eax - 0x20]
    X86_AT(c, 0x94e75u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 094e78  mov dl, byte ptr [ebp - 0x21]
    X86_AT(c, 0x94e78u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu))));
    // 094e7b  add dl, 0x30
    X86_AT(c, 0x94e7bu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x30u, 0, 1)); }
    // 094e7e  mov ecx, dword ptr [eax - 0x20]
    X86_AT(c, 0x94e7eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)));
    // 094e81  mov byte ptr [eax + ecx*1 - 0x1c], dl
    X86_AT(c, 0x94e81u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0xFFFFFFE4u)), g8(c, 2));
    // 094e85  mov eax, esi
    X86_AT(c, 0x94e85u);
    c.r[0] = c.r[6];
    // 094e87  rcr eax, 1
    X86_AT(c, 0x94e87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 094e89  jb 0x94e8c
    X86_AT(c, 0x94e89u);
    if (x86_cc(c, 2)) { goto L_94e8c; }
    X86_TICK(c, 2);
    // 094e8b  inc edi
    X86_AT(c, 0x94e8bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_94e8c:
    X86_TICK(c, 7);
    // 094e8c  cmp esi, 0x12
    X86_AT(c, 0x94e8cu);
    (void)x86_sub(c, c.r[6], 0x12u, 0, 4);
    // 094e8f  jge 0x94e9a
    X86_AT(c, 0x94e8fu);
    if (x86_cc(c, 13)) { goto L_94e9a; }
    X86_TICK(c, 9);
    // 094e91  inc esi
    X86_AT(c, 0x94e91u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 094e92  jmp 0x94e58
    X86_AT(c, 0x94e92u);
    X86_POLL(c, 0x94e58u); goto L_94e58;
L_94e94:
    X86_TICK(c, 10);
    // 094e94  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94e94u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094e97  inc dword ptr [eax - 0x20]
    X86_AT(c, 0x94e97u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_94e9a:
    X86_TICK(c, 20);
    // 094e9a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94e9au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094e9d  mov edx, dword ptr [eax - 0x20]
    X86_AT(c, 0x94e9du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)));
    // 094ea0  cmp byte ptr [eax + edx*1 - 0x1c], 0x30
    X86_AT(c, 0x94ea0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFE4u))), 0x30u, 0, 1);
    // 094ea5  je 0x94e94
    X86_AT(c, 0x94ea5u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x94e94u); goto L_94e94; }
    X86_TICK(c, 17);
    // 094ea7  mov ecx, 0x12
    X86_AT(c, 0x94ea7u);
    c.r[1] = 0x12u;
    // 094eac  sub ecx, dword ptr [ebp - 0x20]
    X86_AT(c, 0x94eacu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0, 4); }
    // 094eaf  inc ecx
    X86_AT(c, 0x94eafu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 094eb0  cmp edx, ecx
    X86_AT(c, 0x94eb0u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 094eb2  jge 0x94eb7
    X86_AT(c, 0x94eb2u);
    if (x86_cc(c, 13)) { goto L_94eb7; }
    X86_TICK(c, 6);
    // 094eb4  inc dword ptr [eax - 4]
    X86_AT(c, 0x94eb4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_94eb7:
    X86_TICK(c, 28);
    // 094eb7  pop edi
    X86_AT(c, 0x94eb7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094eb8  pop esi
    X86_AT(c, 0x94eb8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094eb9  pop ebx
    X86_AT(c, 0x94eb9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094eba  leave 
    X86_AT(c, 0x94ebau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094ebb  ret 
    X86_AT(c, 0x94ebbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94de4u, "ran off the end of a function");
}
void f_00094ec4(X86Cpu& c) {
    X86_TICK(c, 33);
    // 094ec4  push ebp
    X86_AT(c, 0x94ec4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094ec5  mov ebp, esp
    X86_AT(c, 0x94ec5u);
    c.r[5] = c.r[4];
    // 094ec7  push ecx
    X86_AT(c, 0x94ec7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094ec8  sub esp, 0xc
    X86_AT(c, 0x94ec8u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 094ecb  push ebx
    X86_AT(c, 0x94ecbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094ecc  push esi
    X86_AT(c, 0x94eccu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094ecd  push edi
    X86_AT(c, 0x94ecdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094ece  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x94eceu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094ed1  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94ed1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094ed4  cmp edi, dword ptr [eax + 0x20]
    X86_AT(c, 0x94ed4u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u))), 0, 4);
    // 094ed7  jge 0x94f7d
    X86_AT(c, 0x94ed7u);
    if (x86_cc(c, 13)) { goto L_94f7d; }
    X86_TICK(c, 17);
    // 094edd  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94eddu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094ee0  add eax, 0xc
    X86_AT(c, 0x94ee0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xCu, 0, 4); }
    // 094ee3  push eax
    X86_AT(c, 0x94ee3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094ee4  mov ebx, eax
    X86_AT(c, 0x94ee4u);
    c.r[3] = c.r[0];
    // 094ee6  call 0x95f20
    X86_AT(c, 0x94ee6u);
    push32(c, 0x94eebu); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x94eebu);
    X86_TICK(c, 12);
    // 094eeb  push dword ptr [0x18d0]
    X86_AT(c, 0x94eebu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18D0u))); push32(c, v); }
    // 094ef1  call 0x95ea8
    X86_AT(c, 0x94ef1u);
    push32(c, 0x94ef6u); x86_call_known(c, 0x95ea8u, f_00095ea8); X86_RET(c, 0x94ef6u);
    X86_TICK(c, 7);
    // 094ef6  call 0x963c4
    X86_AT(c, 0x94ef6u);
    push32(c, 0x94efbu); x86_call_known(c, 0x963c4u, f_000963c4); X86_RET(c, 0x94efbu);
    X86_TICK(c, 5);
    // 094efb  je 0x94f7d
    X86_AT(c, 0x94efbu);
    if (x86_cc(c, 4)) { goto L_94f7d; }
    X86_TICK(c, 15);
    // 094f01  mov eax, edi
    X86_AT(c, 0x94f01u);
    c.r[0] = c.r[7];
    // 094f03  push eax
    X86_AT(c, 0x94f03u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094f04  lea ebx, [ebp - 0x10]
    X86_AT(c, 0x94f04u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 094f07  push ebx
    X86_AT(c, 0x94f07u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094f08  call 0x95bfc
    X86_AT(c, 0x94f08u);
    push32(c, 0x94f0du); x86_call_known(c, 0x95bfcu, f_00095bfc); X86_RET(c, 0x94f0du);
    X86_TICK(c, 9);
    // 094f0d  push ebx
    X86_AT(c, 0x94f0du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094f0e  call 0x95f20
    X86_AT(c, 0x94f0eu);
    push32(c, 0x94f13u); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x94f13u);
    X86_TICK(c, 12);
    // 094f13  push dword ptr [0x18d4]
    X86_AT(c, 0x94f13u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18D4u))); push32(c, v); }
    // 094f19  call 0x95ea8
    X86_AT(c, 0x94f19u);
    push32(c, 0x94f1eu); x86_call_known(c, 0x95ea8u, f_00095ea8); X86_RET(c, 0x94f1eu);
    X86_TICK(c, 7);
    // 094f1e  call 0x961b4
    X86_AT(c, 0x94f1eu);
    push32(c, 0x94f23u); x86_call_known(c, 0x961b4u, f_000961b4); X86_RET(c, 0x94f23u);
    X86_TICK(c, 19);
    // 094f23  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94f23u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094f26  lea edx, [eax + 0xc]
    X86_AT(c, 0x94f26u);
    c.r[2] = (uint32_t)(c.r[0] + 0xCu);
    // 094f29  push edx
    X86_AT(c, 0x94f29u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 094f2a  mov ebx, eax
    X86_AT(c, 0x94f2au);
    c.r[3] = c.r[0];
    // 094f2c  mov esi, edx
    X86_AT(c, 0x94f2cu);
    c.r[6] = c.r[2];
    // 094f2e  call 0x95f20
    X86_AT(c, 0x94f2eu);
    push32(c, 0x94f33u); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x94f33u);
    X86_TICK(c, 7);
    // 094f33  call 0x95d90
    X86_AT(c, 0x94f33u);
    push32(c, 0x94f38u); x86_call_known(c, 0x95d90u, f_00095d90); X86_RET(c, 0x94f38u);
    X86_TICK(c, 9);
    // 094f38  push esi
    X86_AT(c, 0x94f38u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094f39  call 0x95f80
    X86_AT(c, 0x94f39u);
    push32(c, 0x94f3eu); x86_call_known(c, 0x95f80u, f_00095f80); X86_RET(c, 0x94f3eu);
    X86_TICK(c, 9);
    // 094f3e  push esi
    X86_AT(c, 0x94f3eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094f3f  call 0x95f20
    X86_AT(c, 0x94f3fu);
    push32(c, 0x94f44u); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x94f44u);
    X86_TICK(c, 12);
    // 094f44  push dword ptr [0x18d8]
    X86_AT(c, 0x94f44u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18D8u))); push32(c, v); }
    // 094f4a  call 0x95ea8
    X86_AT(c, 0x94f4au);
    push32(c, 0x94f4fu); x86_call_known(c, 0x95ea8u, f_00095ea8); X86_RET(c, 0x94f4fu);
    X86_TICK(c, 7);
    // 094f4f  call 0x963c4
    X86_AT(c, 0x94f4fu);
    push32(c, 0x94f54u); x86_call_known(c, 0x963c4u, f_000963c4); X86_RET(c, 0x94f54u);
    X86_TICK(c, 13);
    // 094f54  setae al
    X86_AT(c, 0x94f54u);
    s8(c, 0, x86_cc(c, 3) ? 1u : 0u);
    // 094f57  mov byte ptr [ebx - 0x21], al
    X86_AT(c, 0x94f57u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFDFu)), g8(c, 0));
    // 094f5a  and al, al
    X86_AT(c, 0x94f5au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 094f5c  je 0x94f7d
    X86_AT(c, 0x94f5cu);
    if (x86_cc(c, 4)) { goto L_94f7d; }
    X86_TICK(c, 9);
    // 094f5e  push esi
    X86_AT(c, 0x94f5eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094f5f  call 0x95f20
    X86_AT(c, 0x94f5fu);
    push32(c, 0x94f64u); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x94f64u);
    X86_TICK(c, 11);
    // 094f64  mov eax, 0x18dc
    X86_AT(c, 0x94f64u);
    c.r[0] = 0x18DCu;
    // 094f69  push eax
    X86_AT(c, 0x94f69u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094f6a  call 0x95f20
    X86_AT(c, 0x94f6au);
    push32(c, 0x94f6fu); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x94f6fu);
    X86_TICK(c, 7);
    // 094f6f  call 0x96090
    X86_AT(c, 0x94f6fu);
    push32(c, 0x94f74u); x86_call_known(c, 0x96090u, f_00096090); X86_RET(c, 0x94f74u);
    X86_TICK(c, 9);
    // 094f74  push esi
    X86_AT(c, 0x94f74u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094f75  call 0x95f80
    X86_AT(c, 0x94f75u);
    push32(c, 0x94f7au); x86_call_known(c, 0x95f80u, f_00095f80); X86_RET(c, 0x94f7au);
    X86_TICK(c, 6);
    // 094f7a  inc dword ptr [ebx - 4]
    X86_AT(c, 0x94f7au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_94f7d:
    X86_TICK(c, 28);
    // 094f7d  pop edi
    X86_AT(c, 0x94f7du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094f7e  pop esi
    X86_AT(c, 0x94f7eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094f7f  pop ebx
    X86_AT(c, 0x94f7fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094f80  leave 
    X86_AT(c, 0x94f80u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094f81  ret 4
    X86_AT(c, 0x94f81u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94ec4u, "ran off the end of a function");
}
void f_00094f94(X86Cpu& c) {
    X86_TICK(c, 35);
    // 094f94  enter 0x38, 0
    X86_AT(c, 0x94f94u);
    x86_enter(c, 0x38u, 0x0u, 4);
    // 094f98  push ebx
    X86_AT(c, 0x94f98u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094f99  push esi
    X86_AT(c, 0x94f99u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094f9a  push edi
    X86_AT(c, 0x94f9au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094f9b  mov edi, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x94f9bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 094f9e  mov esi, dword ptr [ebp + 0x24]
    X86_AT(c, 0x94f9eu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 094fa1  lea eax, [ebp + 0xc]
    X86_AT(c, 0x94fa1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 094fa4  push eax
    X86_AT(c, 0x94fa4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094fa5  lea eax, [ebp - 0x38]
    X86_AT(c, 0x94fa5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC8u);
    // 094fa8  push eax
    X86_AT(c, 0x94fa8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094fa9  call 0x95c7c
    X86_AT(c, 0x94fa9u);
    push32(c, 0x94faeu); x86_call_known(c, 0x95c7cu, f_00095c7c); X86_RET(c, 0x94faeu);
    X86_TICK(c, 39);
    // 094fae  lea eax, [ebp - 0x38]
    X86_AT(c, 0x94faeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC8u);
    // 094fb1  push esi
    X86_AT(c, 0x94fb1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094fb2  push edi
    X86_AT(c, 0x94fb2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094fb3  mov edi, esi
    X86_AT(c, 0x94fb3u);
    c.r[7] = c.r[6];
    // 094fb5  mov esi, eax
    X86_AT(c, 0x94fb5u);
    c.r[6] = c.r[0];
    // 094fb7  mov ecx, 3
    X86_AT(c, 0x94fb7u);
    c.r[1] = 0x3u;
    // 094fbc  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x94fbcu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 094fbe  pop edi
    X86_AT(c, 0x94fbeu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094fbf  pop esi
    X86_AT(c, 0x94fbfu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094fc0  cmp word ptr [esi], 0
    X86_AT(c, 0x94fc0u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[6]))), 0x0u, 0, 2);
    // 094fc4  jne 0x95180
    X86_AT(c, 0x94fc4u);
    if (x86_cc(c, 5)) { goto L_95180; }
    X86_TICK(c, 11);
    // 094fca  lea eax, [ebp + 0xc]
    X86_AT(c, 0x94fcau);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 094fcd  push eax
    X86_AT(c, 0x94fcdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094fce  call 0x95d3c
    X86_AT(c, 0x94fceu);
    push32(c, 0x94fd3u); x86_call_known(c, 0x95d3cu, f_00095d3c); X86_RET(c, 0x94fd3u);
    X86_TICK(c, 12);
    // 094fd3  movsx eax, ax
    X86_AT(c, 0x94fd3u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 094fd6  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x94fd6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 094fd9  and eax, eax
    X86_AT(c, 0x94fd9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094fdb  jl 0x9506c
    X86_AT(c, 0x94fdbu);
    if (x86_cc(c, 12)) { goto L_9506c; }
    X86_TICK(c, 77);
    // 094fe1  imul eax, eax, 0x12a
    X86_AT(c, 0x94fe1u);
    c.r[0] = x86_imul2(c, c.r[0], 0x12Au, 4);
    // 094fe7  cdq 
    X86_AT(c, 0x94fe7u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 094fe8  mov ecx, 0x3de
    X86_AT(c, 0x94fe8u);
    c.r[1] = 0x3DEu;
    // 094fed  idiv ecx
    X86_AT(c, 0x94fedu);
    x86_idiv(c, c.r[1], 4, 0x94fedu);
    // 094fef  inc eax
    X86_AT(c, 0x94fefu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 094ff0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x94ff0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 094ff3  and eax, eax
    X86_AT(c, 0x94ff3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094ff5  je 0x95023
    X86_AT(c, 0x94ff5u);
    if (x86_cc(c, 4)) { goto L_95023; }
    X86_TICK(c, 16);
    // 094ff7  push dword ptr [ebp - 4]
    X86_AT(c, 0x94ff7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 094ffa  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x94ffau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 094ffd  push eax
    X86_AT(c, 0x94ffdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094ffe  call 0x95bfc
    X86_AT(c, 0x94ffeu);
    push32(c, 0x95003u); x86_call_known(c, 0x95bfcu, f_00095bfc); X86_RET(c, 0x95003u);
    X86_TICK(c, 11);
    // 095003  lea eax, [ebp + 0xc]
    X86_AT(c, 0x95003u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 095006  push eax
    X86_AT(c, 0x95006u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095007  call 0x95f20
    X86_AT(c, 0x95007u);
    push32(c, 0x9500cu); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x9500cu);
    X86_TICK(c, 11);
    // 09500c  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x9500cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 09500f  push eax
    X86_AT(c, 0x9500fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095010  call 0x95f20
    X86_AT(c, 0x95010u);
    push32(c, 0x95015u); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x95015u);
    X86_TICK(c, 7);
    // 095015  call 0x961c0
    X86_AT(c, 0x95015u);
    push32(c, 0x9501au); x86_call_known(c, 0x961c0u, f_000961c0); X86_RET(c, 0x9501au);
    X86_TICK(c, 11);
    // 09501a  lea eax, [ebp + 0xc]
    X86_AT(c, 0x9501au);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 09501d  push eax
    X86_AT(c, 0x9501du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09501e  call 0x95f80
    X86_AT(c, 0x9501eu);
    push32(c, 0x95023u); x86_call_known(c, 0x95f80u, f_00095f80); X86_RET(c, 0x95023u);
L_95023:
    X86_TICK(c, 11);
    // 095023  lea eax, [ebp + 0xc]
    X86_AT(c, 0x95023u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 095026  push eax
    X86_AT(c, 0x95026u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095027  call 0x95f20
    X86_AT(c, 0x95027u);
    push32(c, 0x9502cu); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x9502cu);
    X86_TICK(c, 12);
    // 09502c  push dword ptr [0x18d8]
    X86_AT(c, 0x9502cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18D8u))); push32(c, v); }
    // 095032  call 0x95ea8
    X86_AT(c, 0x95032u);
    push32(c, 0x95037u); x86_call_known(c, 0x95ea8u, f_00095ea8); X86_RET(c, 0x95037u);
    X86_TICK(c, 7);
    // 095037  call 0x963c4
    X86_AT(c, 0x95037u);
    push32(c, 0x9503cu); x86_call_known(c, 0x963c4u, f_000963c4); X86_RET(c, 0x9503cu);
    X86_TICK(c, 5);
    // 09503c  jb 0x950f7
    X86_AT(c, 0x9503cu);
    if (x86_cc(c, 2)) { goto L_950f7; }
    X86_TICK(c, 11);
    // 095042  lea eax, [ebp + 0xc]
    X86_AT(c, 0x95042u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 095045  push eax
    X86_AT(c, 0x95045u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095046  call 0x95f20
    X86_AT(c, 0x95046u);
    push32(c, 0x9504bu); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x9504bu);
    X86_TICK(c, 11);
    // 09504b  mov eax, 0x18dc
    X86_AT(c, 0x9504bu);
    c.r[0] = 0x18DCu;
    // 095050  push eax
    X86_AT(c, 0x95050u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095051  call 0x95f20
    X86_AT(c, 0x95051u);
    push32(c, 0x95056u); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x95056u);
    X86_TICK(c, 7);
    // 095056  call 0x96090
    X86_AT(c, 0x95056u);
    push32(c, 0x9505bu); x86_call_known(c, 0x96090u, f_00096090); X86_RET(c, 0x9505bu);
    X86_TICK(c, 11);
    // 09505b  lea eax, [ebp + 0xc]
    X86_AT(c, 0x9505bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 09505e  push eax
    X86_AT(c, 0x9505eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09505f  call 0x95f80
    X86_AT(c, 0x9505fu);
    push32(c, 0x95064u); x86_call_known(c, 0x95f80u, f_00095f80); X86_RET(c, 0x95064u);
    X86_TICK(c, 13);
    // 095064  inc dword ptr [ebp - 4]
    X86_AT(c, 0x95064u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 095067  jmp 0x950f7
    X86_AT(c, 0x95067u);
    goto L_950f7;
L_9506c:
    X86_TICK(c, 77);
    // 09506c  imul eax, dword ptr [ebp - 4], 0x12a
    X86_AT(c, 0x9506cu);
    c.r[0] = x86_imul2(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x12Au, 4);
    // 095073  add eax, 0x12a
    X86_AT(c, 0x95073u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x12Au, 0, 4); }
    // 095078  cdq 
    X86_AT(c, 0x95078u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 095079  mov ecx, 0x3de
    X86_AT(c, 0x95079u);
    c.r[1] = 0x3DEu;
    // 09507e  idiv ecx
    X86_AT(c, 0x9507eu);
    x86_idiv(c, c.r[1], 4, 0x9507eu);
    // 095080  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x95080u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 095083  and eax, eax
    X86_AT(c, 0x95083u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095085  je 0x950b7
    X86_AT(c, 0x95085u);
    if (x86_cc(c, 4)) { goto L_950b7; }
    X86_TICK(c, 19);
    // 095087  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x95087u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 09508b  neg eax
    X86_AT(c, 0x9508bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 09508d  push eax
    X86_AT(c, 0x9508du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09508e  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x9508eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 095091  push eax
    X86_AT(c, 0x95091u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095092  call 0x95bfc
    X86_AT(c, 0x95092u);
    push32(c, 0x95097u); x86_call_known(c, 0x95bfcu, f_00095bfc); X86_RET(c, 0x95097u);
    X86_TICK(c, 11);
    // 095097  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x95097u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 09509a  push eax
    X86_AT(c, 0x9509au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09509b  call 0x95f20
    X86_AT(c, 0x9509bu);
    push32(c, 0x950a0u); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x950a0u);
    X86_TICK(c, 11);
    // 0950a0  lea eax, [ebp + 0xc]
    X86_AT(c, 0x950a0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0950a3  push eax
    X86_AT(c, 0x950a3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0950a4  call 0x95f20
    X86_AT(c, 0x950a4u);
    push32(c, 0x950a9u); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x950a9u);
    X86_TICK(c, 7);
    // 0950a9  call 0x96090
    X86_AT(c, 0x950a9u);
    push32(c, 0x950aeu); x86_call_known(c, 0x96090u, f_00096090); X86_RET(c, 0x950aeu);
    X86_TICK(c, 11);
    // 0950ae  lea eax, [ebp + 0xc]
    X86_AT(c, 0x950aeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0950b1  push eax
    X86_AT(c, 0x950b1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0950b2  call 0x95f80
    X86_AT(c, 0x950b2u);
    push32(c, 0x950b7u); x86_call_known(c, 0x95f80u, f_00095f80); X86_RET(c, 0x950b7u);
L_950b7:
    X86_TICK(c, 11);
    // 0950b7  lea eax, [ebp + 0xc]
    X86_AT(c, 0x950b7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0950ba  push eax
    X86_AT(c, 0x950bau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0950bb  call 0x95f20
    X86_AT(c, 0x950bbu);
    push32(c, 0x950c0u); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x950c0u);
    X86_TICK(c, 11);
    // 0950c0  mov eax, 0x18dc
    X86_AT(c, 0x950c0u);
    c.r[0] = 0x18DCu;
    // 0950c5  push eax
    X86_AT(c, 0x950c5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0950c6  call 0x95f20
    X86_AT(c, 0x950c6u);
    push32(c, 0x950cbu); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x950cbu);
    X86_TICK(c, 7);
    // 0950cb  call 0x963c4
    X86_AT(c, 0x950cbu);
    push32(c, 0x950d0u); x86_call_known(c, 0x963c4u, f_000963c4); X86_RET(c, 0x950d0u);
    X86_TICK(c, 5);
    // 0950d0  jae 0x950f7
    X86_AT(c, 0x950d0u);
    if (x86_cc(c, 3)) { goto L_950f7; }
    X86_TICK(c, 11);
    // 0950d2  lea eax, [ebp + 0xc]
    X86_AT(c, 0x950d2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0950d5  push eax
    X86_AT(c, 0x950d5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0950d6  call 0x95f20
    X86_AT(c, 0x950d6u);
    push32(c, 0x950dbu); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x950dbu);
    X86_TICK(c, 12);
    // 0950db  push dword ptr [0x18e8]
    X86_AT(c, 0x950dbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18E8u))); push32(c, v); }
    // 0950e1  call 0x95ea8
    X86_AT(c, 0x950e1u);
    push32(c, 0x950e6u); x86_call_known(c, 0x95ea8u, f_00095ea8); X86_RET(c, 0x950e6u);
    X86_TICK(c, 7);
    // 0950e6  call 0x96090
    X86_AT(c, 0x950e6u);
    push32(c, 0x950ebu); x86_call_known(c, 0x96090u, f_00096090); X86_RET(c, 0x950ebu);
    X86_TICK(c, 11);
    // 0950eb  lea eax, [ebp + 0xc]
    X86_AT(c, 0x950ebu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0950ee  push eax
    X86_AT(c, 0x950eeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0950ef  call 0x95f80
    X86_AT(c, 0x950efu);
    push32(c, 0x950f4u); x86_call_known(c, 0x95f80u, f_00095f80); X86_RET(c, 0x950f4u);
    X86_TICK(c, 6);
    // 0950f4  dec dword ptr [ebp - 4]
    X86_AT(c, 0x950f4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_950f7:
    X86_TICK(c, 15);
    // 0950f7  mov byte ptr [ebp - 0x21], 0
    X86_AT(c, 0x950f7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), 0x0u);
    // 0950fb  movzx eax, byte ptr [ebp + 0x18]
    X86_AT(c, 0x950fbu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0950ff  cmp eax, 0x45
    X86_AT(c, 0x950ffu);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 095102  je 0x95129
    X86_AT(c, 0x95102u);
    if (x86_cc(c, 4)) { goto L_95129; }
    X86_TICK(c, 7);
    // 095104  cmp eax, 0x47
    X86_AT(c, 0x95104u);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 095107  je 0x9512e
    X86_AT(c, 0x95107u);
    if (x86_cc(c, 4)) { goto L_9512e; }
    X86_TICK(c, 7);
    // 095109  cmp eax, 0x65
    X86_AT(c, 0x95109u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 09510c  je 0x95129
    X86_AT(c, 0x9510cu);
    if (x86_cc(c, 4)) { goto L_95129; }
    X86_TICK(c, 7);
    // 09510e  cmp eax, 0x66
    X86_AT(c, 0x9510eu);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 095111  je 0x9511a
    X86_AT(c, 0x95111u);
    if (x86_cc(c, 4)) { goto L_9511a; }
    X86_TICK(c, 7);
    // 095113  cmp eax, 0x67
    X86_AT(c, 0x95113u);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 095116  je 0x9512e
    X86_AT(c, 0x95116u);
    if (x86_cc(c, 4)) { goto L_9512e; }
    X86_TICK(c, 7);
    // 095118  jmp 0x9513f
    X86_AT(c, 0x95118u);
    goto L_9513f;
L_9511a:
    X86_TICK(c, 17);
    // 09511a  mov eax, edi
    X86_AT(c, 0x9511au);
    c.r[0] = c.r[7];
    // 09511c  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x9511cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 09511f  sub edx, edx
    X86_AT(c, 0x9511fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 095121  cmp eax, edx
    X86_AT(c, 0x95121u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 095123  jl 0x95126
    X86_AT(c, 0x95123u);
    if (x86_cc(c, 12)) { goto L_95126; }
    X86_TICK(c, 3);
    // 095125  xchg edx, eax
    X86_AT(c, 0x95125u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_95126:
    X86_TICK(c, 9);
    // 095126  push edx
    X86_AT(c, 0x95126u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 095127  jmp 0x95138
    X86_AT(c, 0x95127u);
    goto L_95138;
L_95129:
    X86_TICK(c, 9);
    // 095129  lea eax, [edi + 1]
    X86_AT(c, 0x95129u);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 09512c  jmp 0x95137
    X86_AT(c, 0x9512cu);
    goto L_95137;
L_9512e:
    X86_TICK(c, 11);
    // 09512e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x9512eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095131  cmp edi, eax
    X86_AT(c, 0x95131u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 095133  jl 0x95137
    X86_AT(c, 0x95133u);
    if (x86_cc(c, 12)) { goto L_95137; }
    X86_TICK(c, 2);
    // 095135  mov eax, edi
    X86_AT(c, 0x95135u);
    c.r[0] = c.r[7];
L_95137:
    X86_TICK(c, 2);
    // 095137  push eax
    X86_AT(c, 0x95137u);
    { uint32_t v = c.r[0]; push32(c, v); }
L_95138:
    X86_TICK(c, 9);
    // 095138  mov ecx, ebp
    X86_AT(c, 0x95138u);
    c.r[1] = c.r[5];
    // 09513a  call 0x94ec4
    X86_AT(c, 0x9513au);
    push32(c, 0x9513fu); x86_call_known(c, 0x94ec4u, f_00094ec4); X86_RET(c, 0x9513fu);
L_9513f:
    X86_TICK(c, 9);
    // 09513f  mov ecx, ebp
    X86_AT(c, 0x9513fu);
    c.r[1] = c.r[5];
    // 095141  call 0x94de4
    X86_AT(c, 0x95141u);
    push32(c, 0x95146u); x86_call_known(c, 0x94de4u, f_00094de4); X86_RET(c, 0x95146u);
    X86_TICK(c, 34);
    // 095146  mov eax, 0x30303030
    X86_AT(c, 0x95146u);
    c.r[0] = 0x30303030u;
    // 09514b  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x9514bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09514e  add edx, 4
    X86_AT(c, 0x9514eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x4u, 0, 4); }
    // 095151  push edi
    X86_AT(c, 0x95151u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095152  mov edi, edx
    X86_AT(c, 0x95152u);
    c.r[7] = c.r[2];
    // 095154  mov ecx, 0x12
    X86_AT(c, 0x95154u);
    c.r[1] = 0x12u;
    // 095159  stosb byte ptr es:[edi], al
    X86_AT(c, 0x95159u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 09515b  pop edi
    X86_AT(c, 0x9515bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09515c  sub ebx, ebx
    X86_AT(c, 0x9515cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 09515e  jmp 0x95172
    X86_AT(c, 0x9515eu);
    goto L_95172;
L_95160:
    X86_TICK(c, 22);
    // 095160  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0x95160u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 095163  mov dl, byte ptr [ebp + eax*1 - 0x1c]
    X86_AT(c, 0x95163u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFE4u))));
    // 095167  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x95167u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09516a  mov byte ptr [ecx + ebx*1 + 4], dl
    X86_AT(c, 0x9516au);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[3] + 0x4u)), g8(c, 2));
    // 09516e  inc dword ptr [ebp - 0x20]
    X86_AT(c, 0x9516eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 095171  inc ebx
    X86_AT(c, 0x95171u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_95172:
    X86_TICK(c, 12);
    // 095172  cmp dword ptr [ebp - 0x20], 0x12
    X86_AT(c, 0x95172u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0x12u, 0, 4);
    // 095176  jle 0x95160
    X86_AT(c, 0x95176u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0x95160u); goto L_95160; }
    X86_TICK(c, 10);
    // 095178  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95178u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09517b  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x9517bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09517e  mov dword ptr [edx], eax
    X86_AT(c, 0x9517eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_95180:
    X86_TICK(c, 28);
    // 095180  pop edi
    X86_AT(c, 0x95180u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095181  pop esi
    X86_AT(c, 0x95181u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095182  pop ebx
    X86_AT(c, 0x95182u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095183  leave 
    X86_AT(c, 0x95183u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095184  ret 0x20
    X86_AT(c, 0x95184u);
    c.eip = pop32(c); c.r[4] += 0x20u; return;
    x86_fault(c, 0x94f94u, "ran off the end of a function");
}
void f_0009519c(X86Cpu& c) {
    X86_TICK(c, 26);
    // 09519c  push ebp
    X86_AT(c, 0x9519cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09519d  mov ebp, esp
    X86_AT(c, 0x9519du);
    c.r[5] = c.r[4];
    // 09519f  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x9519fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0951a2  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x951a2u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0951a5  push dword ptr [ebp + 8]
    X86_AT(c, 0x951a5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0951a8  call 0x95ee4
    X86_AT(c, 0x951a8u);
    push32(c, 0x951adu); x86_call_known(c, 0x95ee4u, f_00095ee4); X86_RET(c, 0x951adu);
    X86_TICK(c, 11);
    // 0951ad  sub esp, 0xc
    X86_AT(c, 0x951adu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0951b0  push esp
    X86_AT(c, 0x951b0u);
    { uint32_t v = c.r[4]; push32(c, v); }
    // 0951b1  call 0x95f80
    X86_AT(c, 0x951b1u);
    push32(c, 0x951b6u); x86_call_known(c, 0x95f80u, f_00095f80); X86_RET(c, 0x951b6u);
    X86_TICK(c, 7);
    // 0951b6  call 0x958c8
    X86_AT(c, 0x951b6u);
    push32(c, 0x951bbu); x86_call_known(c, 0x958c8u, f_000958c8); X86_RET(c, 0x951bbu);
    X86_TICK(c, 16);
    // 0951bb  leave 
    X86_AT(c, 0x951bbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0951bc  ret 0xc
    X86_AT(c, 0x951bcu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x9519cu, "ran off the end of a function");
}
void f_000951c4(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0951c4  push ebp
    X86_AT(c, 0x951c4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0951c5  mov ebp, esp
    X86_AT(c, 0x951c5u);
    c.r[5] = c.r[4];
    // 0951c7  push ecx
    X86_AT(c, 0x951c7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0951c8  mov eax, dword ptr [0x8a470]
    X86_AT(c, 0x951c8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A470u)));
    // 0951cd  cmp eax, 0xffff
    X86_AT(c, 0x951cdu);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 0951d2  je 0x951e4
    X86_AT(c, 0x951d2u);
    if (x86_cc(c, 4)) { goto L_951e4; }
    X86_TICK(c, 11);
    // 0951d4  mov edx, dword ptr [0x8a878]
    X86_AT(c, 0x951d4u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A878u)));
    // 0951da  cmp eax, edx
    X86_AT(c, 0x951dau);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0951dc  jbe 0x951e4
    X86_AT(c, 0x951dcu);
    if (x86_cc(c, 6)) { goto L_951e4; }
    X86_TICK(c, 9);
    // 0951de  push edx
    X86_AT(c, 0x951deu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0951df  call 0x93874
    X86_AT(c, 0x951dfu);
    push32(c, 0x951e4u); x86_call_known(c, 0x93874u, f_00093874); X86_RET(c, 0x951e4u);
L_951e4:
    X86_TICK(c, 18);
    // 0951e4  mov byte ptr [0x8a870], 1
    X86_AT(c, 0x951e4u);
    wr8((c.sbase[3] + (uint32_t)(0x8A870u)), 0x1u);
    // 0951eb  leave 
    X86_AT(c, 0x951ebu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0951ec  ret 
    X86_AT(c, 0x951ecu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x951c4u, "ran off the end of a function");
}
void f_000951f8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0951f8  push ebp
    X86_AT(c, 0x951f8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0951f9  mov ebp, esp
    X86_AT(c, 0x951f9u);
    c.r[5] = c.r[4];
    // 0951fb  push ecx
    X86_AT(c, 0x951fbu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0951fc  inc dword ptr [0x8a47c]
    X86_AT(c, 0x951fcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A47Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 095202  mov eax, dword ptr [0x8a470]
    X86_AT(c, 0x95202u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A470u)));
    // 095207  cmp eax, 0xffff
    X86_AT(c, 0x95207u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 09520c  je 0x95219
    X86_AT(c, 0x9520cu);
    if (x86_cc(c, 4)) { goto L_95219; }
    X86_TICK(c, 7);
    // 09520e  cmp eax, 1
    X86_AT(c, 0x9520eu);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 095211  jb 0x95219
    X86_AT(c, 0x95211u);
    if (x86_cc(c, 2)) { goto L_95219; }
    X86_TICK(c, 6);
    // 095213  dec dword ptr [0x8a470]
    X86_AT(c, 0x95213u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A470u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_95219:
    X86_TICK(c, 16);
    // 095219  leave 
    X86_AT(c, 0x95219u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09521a  ret 
    X86_AT(c, 0x9521au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x951f8u, "ran off the end of a function");
}
void f_00095228(X86Cpu& c) {
    X86_TICK(c, 27);
    // 095228  push ebp
    X86_AT(c, 0x95228u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095229  mov ebp, esp
    X86_AT(c, 0x95229u);
    c.r[5] = c.r[4];
    // 09522b  push ecx
    X86_AT(c, 0x9522bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 09522c  push ebx
    X86_AT(c, 0x9522cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09522d  mov dword ptr [0x8a874], 0
    X86_AT(c, 0x9522du);
    wr32((c.sbase[3] + (uint32_t)(0x8A874u)), 0x0u);
    // 095237  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95237u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09523a  add eax, 8
    X86_AT(c, 0x9523au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 09523d  push eax
    X86_AT(c, 0x9523du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09523e  mov ebx, eax
    X86_AT(c, 0x9523eu);
    c.r[3] = c.r[0];
    // 095240  call 0x95f20
    X86_AT(c, 0x95240u);
    push32(c, 0x95245u); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x95245u);
    X86_TICK(c, 12);
    // 095245  push dword ptr [0x18d0]
    X86_AT(c, 0x95245u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18D0u))); push32(c, v); }
    // 09524b  call 0x95ea8
    X86_AT(c, 0x9524bu);
    push32(c, 0x95250u); x86_call_known(c, 0x95ea8u, f_00095ea8); X86_RET(c, 0x95250u);
    X86_TICK(c, 7);
    // 095250  call 0x963c4
    X86_AT(c, 0x95250u);
    push32(c, 0x95255u); x86_call_known(c, 0x963c4u, f_000963c4); X86_RET(c, 0x95255u);
    X86_TICK(c, 5);
    // 095255  jae 0x95271
    X86_AT(c, 0x95255u);
    if (x86_cc(c, 3)) { goto L_95271; }
    X86_TICK(c, 9);
    // 095257  push ebx
    X86_AT(c, 0x95257u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095258  call 0x95f20
    X86_AT(c, 0x95258u);
    push32(c, 0x9525du); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x9525du);
    X86_TICK(c, 7);
    // 09525d  call 0x95ff8
    X86_AT(c, 0x9525du);
    push32(c, 0x95262u); x86_call_known(c, 0x95ff8u, f_00095ff8); X86_RET(c, 0x95262u);
    X86_TICK(c, 9);
    // 095262  push ebx
    X86_AT(c, 0x95262u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095263  call 0x95f80
    X86_AT(c, 0x95263u);
    push32(c, 0x95268u); x86_call_known(c, 0x95f80u, f_00095f80); X86_RET(c, 0x95268u);
    X86_TICK(c, 9);
    // 095268  mov byte ptr [0x8a86c], 0x2d
    X86_AT(c, 0x95268u);
    wr8((c.sbase[3] + (uint32_t)(0x8A86Cu)), 0x2Du);
    // 09526f  jmp 0x95293
    X86_AT(c, 0x9526fu);
    goto L_95293;
L_95271:
    X86_TICK(c, 12);
    // 095271  test byte ptr [0x8a46c], 2
    X86_AT(c, 0x95271u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x2u, 1);
    // 095278  je 0x95283
    X86_AT(c, 0x95278u);
    if (x86_cc(c, 4)) { goto L_95283; }
    X86_TICK(c, 9);
    // 09527a  mov byte ptr [0x8a86c], 0x2b
    X86_AT(c, 0x9527au);
    wr8((c.sbase[3] + (uint32_t)(0x8A86Cu)), 0x2Bu);
    // 095281  jmp 0x95293
    X86_AT(c, 0x95281u);
    goto L_95293;
L_95283:
    X86_TICK(c, 12);
    // 095283  test byte ptr [0x8a46c], 4
    X86_AT(c, 0x95283u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x4u, 1);
    // 09528a  je 0x952a4
    X86_AT(c, 0x9528au);
    if (x86_cc(c, 4)) { goto L_952a4; }
    X86_TICK(c, 2);
    // 09528c  mov byte ptr [0x8a86c], 0x20
    X86_AT(c, 0x9528cu);
    wr8((c.sbase[3] + (uint32_t)(0x8A86Cu)), 0x20u);
L_95293:
    X86_TICK(c, 11);
    // 095293  mov dword ptr [0x8a874], 1
    X86_AT(c, 0x95293u);
    wr32((c.sbase[3] + (uint32_t)(0x8A874u)), 0x1u);
    // 09529d  mov ecx, ebp
    X86_AT(c, 0x9529du);
    c.r[1] = c.r[5];
    // 09529f  call 0x951f8
    X86_AT(c, 0x9529fu);
    push32(c, 0x952a4u); x86_call_known(c, 0x951f8u, f_000951f8); X86_RET(c, 0x952a4u);
L_952a4:
    X86_TICK(c, 20);
    // 0952a4  pop ebx
    X86_AT(c, 0x952a4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0952a5  leave 
    X86_AT(c, 0x952a5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0952a6  ret 
    X86_AT(c, 0x952a6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95228u, "ran off the end of a function");
}
void f_000952c0(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0952c0  push ebp
    X86_AT(c, 0x952c0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0952c1  mov ebp, esp
    X86_AT(c, 0x952c1u);
    c.r[5] = c.r[4];
    // 0952c3  push ecx
    X86_AT(c, 0x952c3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0952c4  push esi
    X86_AT(c, 0x952c4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0952c5  push edi
    X86_AT(c, 0x952c5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0952c6  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x952c6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0952c9  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x952c9u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0952cc  mov ecx, edi
    X86_AT(c, 0x952ccu);
    c.r[1] = c.r[7];
    // 0952ce  jmp 0x952d1
    X86_AT(c, 0x952ceu);
    goto L_952d1;
L_952d0:
    X86_TICK(c, 2);
    // 0952d0  dec ecx
    X86_AT(c, 0x952d0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_952d1:
    X86_TICK(c, 7);
    // 0952d1  cmp esi, ecx
    X86_AT(c, 0x952d1u);
    (void)x86_sub(c, c.r[6], c.r[1], 0, 4);
    // 0952d3  jae 0x952de
    X86_AT(c, 0x952d3u);
    if (x86_cc(c, 3)) { goto L_952de; }
    X86_TICK(c, 12);
    // 0952d5  cmp byte ptr [ecx + 0x8a84a], 0x30
    X86_AT(c, 0x952d5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0x8A84Au))), 0x30u, 0, 1);
    // 0952dc  je 0x952d0
    X86_AT(c, 0x952dcu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x952d0u); goto L_952d0; }
L_952de:
    X86_TICK(c, 9);
    // 0952de  lea eax, [esi + 1]
    X86_AT(c, 0x952deu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0952e1  cmp eax, ecx
    X86_AT(c, 0x952e1u);
    (void)x86_sub(c, c.r[0], c.r[1], 0, 4);
    // 0952e3  jne 0x952f8
    X86_AT(c, 0x952e3u);
    if (x86_cc(c, 5)) { goto L_952f8; }
    X86_TICK(c, 12);
    // 0952e5  test byte ptr [0x8a46c], 8
    X86_AT(c, 0x952e5u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x8u, 1);
    // 0952ec  jne 0x952f8
    X86_AT(c, 0x952ecu);
    if (x86_cc(c, 5)) { goto L_952f8; }
    X86_TICK(c, 12);
    // 0952ee  cmp byte ptr [esi + 0x8a84b], 0x2e
    X86_AT(c, 0x952eeu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x8A84Bu))), 0x2Eu, 0, 1);
    // 0952f5  jne 0x952f8
    X86_AT(c, 0x952f5u);
    if (x86_cc(c, 5)) { goto L_952f8; }
    X86_TICK(c, 2);
    // 0952f7  dec ecx
    X86_AT(c, 0x952f7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_952f8:
    X86_TICK(c, 43);
    // 0952f8  lea eax, [ecx - 1]
    X86_AT(c, 0x952f8u);
    c.r[0] = (uint32_t)(c.r[1] + 0xFFFFFFFFu);
    // 0952fb  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x952fbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0952fe  mov dword ptr [edx - 0x10], eax
    X86_AT(c, 0x952feu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[0]);
    // 095301  mov eax, edi
    X86_AT(c, 0x95301u);
    c.r[0] = c.r[7];
    // 095303  sub eax, ecx
    X86_AT(c, 0x95303u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 095305  sub dword ptr [0x8a878], eax
    X86_AT(c, 0x95305u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A878u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 09530b  pop edi
    X86_AT(c, 0x9530bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09530c  pop esi
    X86_AT(c, 0x9530cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09530d  leave 
    X86_AT(c, 0x9530du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09530e  ret 8
    X86_AT(c, 0x9530eu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x952c0u, "ran off the end of a function");
}
void f_0009532c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 09532c  push ebp
    X86_AT(c, 0x9532cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09532d  mov ebp, esp
    X86_AT(c, 0x9532du);
    c.r[5] = c.r[4];
    // 09532f  push ecx
    X86_AT(c, 0x9532fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095330  test byte ptr [0x8a46c], 1
    X86_AT(c, 0x95330u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x1u, 1);
    // 095337  jne 0x9534d
    X86_AT(c, 0x95337u);
    if (x86_cc(c, 5)) { goto L_9534d; }
    X86_TICK(c, 12);
    // 095339  test byte ptr [0x8a46c], 0x10
    X86_AT(c, 0x95339u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x10u, 1);
    // 095340  jne 0x9534d
    X86_AT(c, 0x95340u);
    if (x86_cc(c, 5)) { goto L_9534d; }
    X86_TICK(c, 15);
    // 095342  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95342u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095345  mov ecx, dword ptr [eax - 4]
    X86_AT(c, 0x95345u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 095348  call 0x951c4
    X86_AT(c, 0x95348u);
    push32(c, 0x9534du); x86_call_known(c, 0x951c4u, f_000951c4); X86_RET(c, 0x9534du);
L_9534d:
    X86_TICK(c, 11);
    // 09534d  mov eax, dword ptr [0x8a874]
    X86_AT(c, 0x9534du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A874u)));
    // 095352  and eax, eax
    X86_AT(c, 0x95352u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095354  je 0x95368
    X86_AT(c, 0x95354u);
    if (x86_cc(c, 4)) { goto L_95368; }
    X86_TICK(c, 15);
    // 095356  push eax
    X86_AT(c, 0x95356u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095357  push 0x8a86c
    X86_AT(c, 0x95357u);
    { uint32_t v = 0x8A86Cu; push32(c, v); }
    // 09535c  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x9535cu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 095362  call dword ptr [0x8a480]
    X86_AT(c, 0x95362u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x95368u); x86_call(c, t); X86_RET(c, 0x95368u); }
L_95368:
    X86_TICK(c, 12);
    // 095368  test byte ptr [0x8a46c], 1
    X86_AT(c, 0x95368u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x1u, 1);
    // 09536f  jne 0x95385
    X86_AT(c, 0x9536fu);
    if (x86_cc(c, 5)) { goto L_95385; }
    X86_TICK(c, 12);
    // 095371  cmp byte ptr [0x8a870], 0
    X86_AT(c, 0x95371u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A870u))), 0x0u, 0, 1);
    // 095378  jne 0x95385
    X86_AT(c, 0x95378u);
    if (x86_cc(c, 5)) { goto L_95385; }
    X86_TICK(c, 15);
    // 09537a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x9537au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09537d  mov ecx, dword ptr [eax - 4]
    X86_AT(c, 0x9537du);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 095380  call 0x951c4
    X86_AT(c, 0x95380u);
    push32(c, 0x95385u); x86_call_known(c, 0x951c4u, f_000951c4); X86_RET(c, 0x95385u);
L_95385:
    X86_TICK(c, 16);
    // 095385  leave 
    X86_AT(c, 0x95385u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095386  ret 
    X86_AT(c, 0x95386u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9532cu, "ran off the end of a function");
}
void f_00095390(X86Cpu& c) {
    X86_TICK(c, 24);
    // 095390  push ebp
    X86_AT(c, 0x95390u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095391  mov ebp, esp
    X86_AT(c, 0x95391u);
    c.r[5] = c.r[4];
    // 095393  push ecx
    X86_AT(c, 0x95393u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095394  push ebx
    X86_AT(c, 0x95394u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095395  push esi
    X86_AT(c, 0x95395u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095396  push edi
    X86_AT(c, 0x95396u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095397  cmp dword ptr [0x8a87c], 0
    X86_AT(c, 0x95397u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A87Cu))), 0x0u, 0, 4);
    // 09539e  jle 0x954cf
    X86_AT(c, 0x9539eu);
    if (x86_cc(c, 14)) { goto L_954cf; }
    X86_TICK(c, 12);
    // 0953a4  cmp byte ptr [0x8a893], 0
    X86_AT(c, 0x953a4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A893u))), 0x0u, 0, 1);
    // 0953ab  je 0x953be
    X86_AT(c, 0x953abu);
    if (x86_cc(c, 4)) { goto L_953be; }
    X86_TICK(c, 8);
    // 0953ad  mov byte ptr [0x8a84c], 0x2e
    X86_AT(c, 0x953adu);
    wr8((c.sbase[3] + (uint32_t)(0x8A84Cu)), 0x2Eu);
    // 0953b4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x953b4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0953b7  mov dword ptr [eax - 0x10], 1
    X86_AT(c, 0x953b7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)), 0x1u);
L_953be:
    X86_TICK(c, 11);
    // 0953be  mov eax, dword ptr [0x8a474]
    X86_AT(c, 0x953beu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A474u)));
    // 0953c3  and eax, eax
    X86_AT(c, 0x953c3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0953c5  je 0x9543d
    X86_AT(c, 0x953c5u);
    if (x86_cc(c, 4)) { goto L_9543d; }
    X86_TICK(c, 19);
    // 0953cb  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x953cbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0953ce  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0x953ceu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 0953d1  mov esi, dword ptr [0x8a87c]
    X86_AT(c, 0x953d1u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8A87Cu)));
    // 0953d7  cmp esi, ecx
    X86_AT(c, 0x953d7u);
    (void)x86_sub(c, c.r[6], c.r[1], 0, 4);
    // 0953d9  jge 0x95417
    X86_AT(c, 0x953d9u);
    if (x86_cc(c, 13)) { goto L_95417; }
    X86_TICK(c, 9);
    // 0953db  sub ecx, esi
    X86_AT(c, 0x953dbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0953dd  cmp ecx, eax
    X86_AT(c, 0x953ddu);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 0953df  jb 0x953e3
    X86_AT(c, 0x953dfu);
    if (x86_cc(c, 2)) { goto L_953e3; }
    X86_TICK(c, 2);
    // 0953e1  mov ecx, eax
    X86_AT(c, 0x953e1u);
    c.r[1] = c.r[0];
L_953e3:
    X86_TICK(c, 44);
    // 0953e3  mov edi, ecx
    X86_AT(c, 0x953e3u);
    c.r[7] = c.r[1];
    // 0953e5  add esi, 0x8a880
    X86_AT(c, 0x953e5u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8A880u, 0, 4); }
    // 0953eb  mov ebx, 0x8a84d
    X86_AT(c, 0x953ebu);
    c.r[3] = 0x8A84Du;
    // 0953f0  push edi
    X86_AT(c, 0x953f0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0953f1  mov edi, ebx
    X86_AT(c, 0x953f1u);
    c.r[7] = c.r[3];
    // 0953f3  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x953f3u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0953f5  pop edi
    X86_AT(c, 0x953f5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0953f6  lea ecx, [edi + 1]
    X86_AT(c, 0x953f6u);
    c.r[1] = (uint32_t)(c.r[7] + 0x1u);
    // 0953f9  mov dword ptr [edx - 0x10], ecx
    X86_AT(c, 0x953f9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[1]);
    // 0953fc  sub dword ptr [0x8a474], edi
    X86_AT(c, 0x953fcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A474u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 095402  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x95402u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 095406  je 0x95450
    X86_AT(c, 0x95406u);
    if (x86_cc(c, 4)) { goto L_95450; }
    X86_TICK(c, 15);
    // 095408  push 1
    X86_AT(c, 0x95408u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 09540a  lea eax, [edi + 2]
    X86_AT(c, 0x9540au);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 09540d  push eax
    X86_AT(c, 0x9540du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09540e  mov ecx, edx
    X86_AT(c, 0x9540eu);
    c.r[1] = c.r[2];
    // 095410  call 0x952c0
    X86_AT(c, 0x95410u);
    push32(c, 0x95415u); x86_call_known(c, 0x952c0u, f_000952c0); X86_RET(c, 0x95415u);
    X86_TICK(c, 7);
    // 095415  jmp 0x95450
    X86_AT(c, 0x95415u);
    goto L_95450;
L_95417:
    X86_TICK(c, 16);
    // 095417  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95417u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09541a  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x9541au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 09541e  je 0x95450
    X86_AT(c, 0x9541eu);
    if (x86_cc(c, 4)) { goto L_95450; }
    X86_TICK(c, 12);
    // 095420  test byte ptr [0x8a46c], 8
    X86_AT(c, 0x95420u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x8u, 1);
    // 095427  jne 0x95450
    X86_AT(c, 0x95427u);
    if (x86_cc(c, 5)) { goto L_95450; }
    X86_TICK(c, 12);
    // 095429  cmp dword ptr [0x8a470], 0xffff
    X86_AT(c, 0x95429u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A470u))), 0xFFFFu, 0, 4);
    // 095433  je 0x95446
    X86_AT(c, 0x95433u);
    if (x86_cc(c, 4)) { goto L_95446; }
    X86_TICK(c, 13);
    // 095435  dec dword ptr [0x8a878]
    X86_AT(c, 0x95435u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A878u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 09543b  jmp 0x95446
    X86_AT(c, 0x9543bu);
    goto L_95446;
L_9543d:
    X86_TICK(c, 12);
    // 09543d  test byte ptr [0x8a46c], 8
    X86_AT(c, 0x9543du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x8u, 1);
    // 095444  jne 0x95450
    X86_AT(c, 0x95444u);
    if (x86_cc(c, 5)) { goto L_95450; }
L_95446:
    X86_TICK(c, 6);
    // 095446  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95446u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095449  mov dword ptr [eax - 0x10], 0
    X86_AT(c, 0x95449u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)), 0x0u);
L_95450:
    X86_TICK(c, 13);
    // 095450  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x95450u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095453  mov ebx, ecx
    X86_AT(c, 0x95453u);
    c.r[3] = c.r[1];
    // 095455  call 0x9532c
    X86_AT(c, 0x95455u);
    push32(c, 0x9545au); x86_call_known(c, 0x9532cu, f_0009532c); X86_RET(c, 0x9545au);
    X86_TICK(c, 15);
    // 09545a  mov eax, dword ptr [ebx - 8]
    X86_AT(c, 0x9545au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF8u)));
    // 09545d  mov edx, dword ptr [0x8a87c]
    X86_AT(c, 0x9545du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A87Cu)));
    // 095463  cmp edx, eax
    X86_AT(c, 0x95463u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 095465  jl 0x95468
    X86_AT(c, 0x95465u);
    if (x86_cc(c, 12)) { goto L_95468; }
    X86_TICK(c, 3);
    // 095467  xchg edx, eax
    X86_AT(c, 0x95467u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_95468:
    X86_TICK(c, 15);
    // 095468  push edx
    X86_AT(c, 0x95468u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 095469  push 0x8a880
    X86_AT(c, 0x95469u);
    { uint32_t v = 0x8A880u; push32(c, v); }
    // 09546e  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x9546eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 095474  call dword ptr [0x8a480]
    X86_AT(c, 0x95474u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x9547au); x86_call(c, t); X86_RET(c, 0x9547au); }
    X86_TICK(c, 15);
    // 09547a  mov eax, dword ptr [ebx - 8]
    X86_AT(c, 0x9547au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF8u)));
    // 09547d  mov edx, dword ptr [0x8a87c]
    X86_AT(c, 0x9547du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A87Cu)));
    // 095483  cmp edx, eax
    X86_AT(c, 0x95483u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 095485  jle 0x95494
    X86_AT(c, 0x95485u);
    if (x86_cc(c, 14)) { goto L_95494; }
    X86_TICK(c, 13);
    // 095487  sub edx, eax
    X86_AT(c, 0x95487u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 095489  push edx
    X86_AT(c, 0x95489u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 09548a  push 0x8a488
    X86_AT(c, 0x9548au);
    { uint32_t v = 0x8A488u; push32(c, v); }
    // 09548f  call 0x9382c
    X86_AT(c, 0x9548fu);
    push32(c, 0x95494u); x86_call_known(c, 0x9382cu, f_0009382c); X86_RET(c, 0x95494u);
L_95494:
    X86_TICK(c, 15);
    // 095494  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95494u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095497  mov eax, dword ptr [eax - 0x10]
    X86_AT(c, 0x95497u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)));
    // 09549a  and eax, eax
    X86_AT(c, 0x9549au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 09549c  je 0x954b0
    X86_AT(c, 0x9549cu);
    if (x86_cc(c, 4)) { goto L_954b0; }
    X86_TICK(c, 15);
    // 09549e  push eax
    X86_AT(c, 0x9549eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09549f  push 0x8a84c
    X86_AT(c, 0x9549fu);
    { uint32_t v = 0x8A84Cu; push32(c, v); }
    // 0954a4  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x954a4u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 0954aa  call dword ptr [0x8a480]
    X86_AT(c, 0x954aau);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x954b0u); x86_call(c, t); X86_RET(c, 0x954b0u); }
L_954b0:
    X86_TICK(c, 11);
    // 0954b0  mov eax, dword ptr [0x8a474]
    X86_AT(c, 0x954b0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A474u)));
    // 0954b5  and eax, eax
    X86_AT(c, 0x954b5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0954b7  je 0x95613
    X86_AT(c, 0x954b7u);
    if (x86_cc(c, 4)) { goto L_95613; }
    X86_TICK(c, 16);
    // 0954bd  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x954bdu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0954c0  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x954c0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0954c4  jne 0x95613
    X86_AT(c, 0x954c4u);
    if (x86_cc(c, 5)) { goto L_95613; }
    X86_TICK(c, 7);
    // 0954ca  jmp 0x95608
    X86_AT(c, 0x954cau);
    goto L_95608;
L_954cf:
    X86_TICK(c, 11);
    // 0954cf  mov eax, dword ptr [0x8a87c]
    X86_AT(c, 0x954cfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A87Cu)));
    // 0954d4  and eax, eax
    X86_AT(c, 0x954d4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0954d6  jge 0x954da
    X86_AT(c, 0x954d6u);
    if (x86_cc(c, 13)) { goto L_954da; }
    X86_TICK(c, 2);
    // 0954d8  neg eax
    X86_AT(c, 0x954d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_954da:
    X86_TICK(c, 13);
    // 0954da  mov dword ptr [0x8a87c], eax
    X86_AT(c, 0x954dau);
    wr32((c.sbase[3] + (uint32_t)(0x8A87Cu)), c.r[0]);
    // 0954df  mov edx, dword ptr [0x8a474]
    X86_AT(c, 0x954dfu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A474u)));
    // 0954e5  and edx, edx
    X86_AT(c, 0x954e5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0954e7  je 0x95519
    X86_AT(c, 0x954e7u);
    if (x86_cc(c, 4)) { goto L_95519; }
    X86_TICK(c, 7);
    // 0954e9  cmp edx, eax
    X86_AT(c, 0x954e9u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0954eb  jle 0x95510
    X86_AT(c, 0x954ebu);
    if (x86_cc(c, 14)) { goto L_95510; }
    X86_TICK(c, 21);
    // 0954ed  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x954edu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0954f0  mov eax, dword ptr [eax - 4]
    X86_AT(c, 0x954f0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 0954f3  add eax, 8
    X86_AT(c, 0x954f3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0954f6  push eax
    X86_AT(c, 0x954f6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0954f7  mov ebx, eax
    X86_AT(c, 0x954f7u);
    c.r[3] = c.r[0];
    // 0954f9  call 0x95f20
    X86_AT(c, 0x954f9u);
    push32(c, 0x954feu); x86_call_known(c, 0x95f20u, f_00095f20); X86_RET(c, 0x954feu);
    X86_TICK(c, 12);
    // 0954fe  push dword ptr [0x18d0]
    X86_AT(c, 0x954feu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x18D0u))); push32(c, v); }
    // 095504  call 0x95ea8
    X86_AT(c, 0x95504u);
    push32(c, 0x95509u); x86_call_known(c, 0x95ea8u, f_00095ea8); X86_RET(c, 0x95509u);
    X86_TICK(c, 7);
    // 095509  call 0x963c4
    X86_AT(c, 0x95509u);
    push32(c, 0x9550eu); x86_call_known(c, 0x963c4u, f_000963c4); X86_RET(c, 0x9550eu);
    X86_TICK(c, 5);
    // 09550e  jne 0x9556d
    X86_AT(c, 0x9550eu);
    if (x86_cc(c, 5)) { goto L_9556d; }
L_95510:
    X86_TICK(c, 16);
    // 095510  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95510u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095513  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x95513u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 095517  je 0x9554c
    X86_AT(c, 0x95517u);
    if (x86_cc(c, 4)) { goto L_9554c; }
L_95519:
    X86_TICK(c, 12);
    // 095519  test byte ptr [0x8a46c], 8
    X86_AT(c, 0x95519u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x8u, 1);
    // 095520  jne 0x95540
    X86_AT(c, 0x95520u);
    if (x86_cc(c, 5)) { goto L_95540; }
    X86_TICK(c, 13);
    // 095522  mov dword ptr [0x8a878], 1
    X86_AT(c, 0x95522u);
    wr32((c.sbase[3] + (uint32_t)(0x8A878u)), 0x1u);
    // 09552c  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x9552cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09552f  call 0x9532c
    X86_AT(c, 0x9552fu);
    push32(c, 0x95534u); x86_call_known(c, 0x9532cu, f_0009532c); X86_RET(c, 0x95534u);
    X86_TICK(c, 11);
    // 095534  push 1
    X86_AT(c, 0x95534u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 095536  push 0x18ec
    X86_AT(c, 0x95536u);
    { uint32_t v = 0x18ECu; push32(c, v); }
    // 09553b  jmp 0x955ea
    X86_AT(c, 0x9553bu);
    goto L_955ea;
L_95540:
    X86_TICK(c, 9);
    // 095540  mov dword ptr [0x8a878], 2
    X86_AT(c, 0x95540u);
    wr32((c.sbase[3] + (uint32_t)(0x8A878u)), 0x2u);
    // 09554a  jmp 0x95559
    X86_AT(c, 0x9554au);
    goto L_95559;
L_9554c:
    X86_TICK(c, 8);
    // 09554c  mov eax, dword ptr [0x8a474]
    X86_AT(c, 0x9554cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A474u)));
    // 095551  add eax, 2
    X86_AT(c, 0x95551u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 095554  mov dword ptr [0x8a878], eax
    X86_AT(c, 0x95554u);
    wr32((c.sbase[3] + (uint32_t)(0x8A878u)), c.r[0]);
L_95559:
    X86_TICK(c, 11);
    // 095559  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x95559u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09555c  call 0x9532c
    X86_AT(c, 0x9555cu);
    push32(c, 0x95561u); x86_call_known(c, 0x9532cu, f_0009532c); X86_RET(c, 0x95561u);
    X86_TICK(c, 11);
    // 095561  push 2
    X86_AT(c, 0x95561u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 095563  push 0x18ee
    X86_AT(c, 0x95563u);
    { uint32_t v = 0x18EEu; push32(c, v); }
    // 095568  jmp 0x955ea
    X86_AT(c, 0x95568u);
    goto L_955ea;
L_9556d:
    X86_TICK(c, 30);
    // 09556d  mov eax, dword ptr [0x8a87c]
    X86_AT(c, 0x9556du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A87Cu)));
    // 095572  sub dword ptr [0x8a474], eax
    X86_AT(c, 0x95572u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A474u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 095578  mov eax, dword ptr [0x8a474]
    X86_AT(c, 0x95578u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A474u)));
    // 09557d  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x9557du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095580  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0x95580u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 095583  cmp ecx, eax
    X86_AT(c, 0x95583u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 095585  jb 0x95589
    X86_AT(c, 0x95585u);
    if (x86_cc(c, 2)) { goto L_95589; }
    X86_TICK(c, 2);
    // 095587  mov ecx, eax
    X86_AT(c, 0x95587u);
    c.r[1] = c.r[0];
L_95589:
    X86_TICK(c, 40);
    // 095589  mov edi, ecx
    X86_AT(c, 0x95589u);
    c.r[7] = c.r[1];
    // 09558b  mov esi, 0x8a880
    X86_AT(c, 0x9558bu);
    c.r[6] = 0x8A880u;
    // 095590  push edi
    X86_AT(c, 0x95590u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095591  mov edi, 0x8a84c
    X86_AT(c, 0x95591u);
    c.r[7] = 0x8A84Cu;
    // 095596  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x95596u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 095598  pop edi
    X86_AT(c, 0x95598u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095599  sub dword ptr [0x8a474], edi
    X86_AT(c, 0x95599u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A474u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 09559f  mov dword ptr [edx - 0x10], edi
    X86_AT(c, 0x9559fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[7]);
    // 0955a2  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x955a2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0955a6  je 0x955b5
    X86_AT(c, 0x955a6u);
    if (x86_cc(c, 4)) { goto L_955b5; }
    X86_TICK(c, 15);
    // 0955a8  push 1
    X86_AT(c, 0x955a8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0955aa  lea eax, [edi + 1]
    X86_AT(c, 0x955aau);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0955ad  push eax
    X86_AT(c, 0x955adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0955ae  mov ecx, edx
    X86_AT(c, 0x955aeu);
    c.r[1] = c.r[2];
    // 0955b0  call 0x952c0
    X86_AT(c, 0x955b0u);
    push32(c, 0x955b5u); x86_call_known(c, 0x952c0u, f_000952c0); X86_RET(c, 0x955b5u);
L_955b5:
    X86_TICK(c, 13);
    // 0955b5  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x955b5u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0955b8  mov ebx, ecx
    X86_AT(c, 0x955b8u);
    c.r[3] = c.r[1];
    // 0955ba  call 0x9532c
    X86_AT(c, 0x955bau);
    push32(c, 0x955bfu); x86_call_known(c, 0x9532cu, f_0009532c); X86_RET(c, 0x955bfu);
    X86_TICK(c, 15);
    // 0955bf  push 2
    X86_AT(c, 0x955bfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0955c1  push 0x18ee
    X86_AT(c, 0x955c1u);
    { uint32_t v = 0x18EEu; push32(c, v); }
    // 0955c6  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x955c6u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 0955cc  call dword ptr [0x8a480]
    X86_AT(c, 0x955ccu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x955d2u); x86_call(c, t); X86_RET(c, 0x955d2u); }
    X86_TICK(c, 14);
    // 0955d2  push dword ptr [0x8a87c]
    X86_AT(c, 0x955d2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A87Cu))); push32(c, v); }
    // 0955d8  push 0x8a488
    X86_AT(c, 0x955d8u);
    { uint32_t v = 0x8A488u; push32(c, v); }
    // 0955dd  call 0x9382c
    X86_AT(c, 0x955ddu);
    push32(c, 0x955e2u); x86_call_known(c, 0x9382cu, f_0009382c); X86_RET(c, 0x955e2u);
    X86_TICK(c, 7);
    // 0955e2  push dword ptr [ebx - 0x10]
    X86_AT(c, 0x955e2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF0u))); push32(c, v); }
    // 0955e5  push 0x8a84c
    X86_AT(c, 0x955e5u);
    { uint32_t v = 0x8A84Cu; push32(c, v); }
L_955ea:
    X86_TICK(c, 11);
    // 0955ea  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x955eau);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 0955f0  call dword ptr [0x8a480]
    X86_AT(c, 0x955f0u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x955f6u); x86_call(c, t); X86_RET(c, 0x955f6u); }
    X86_TICK(c, 16);
    // 0955f6  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x955f6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0955f9  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x955f9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0955fd  jne 0x95613
    X86_AT(c, 0x955fdu);
    if (x86_cc(c, 5)) { goto L_95613; }
    X86_TICK(c, 11);
    // 0955ff  mov eax, dword ptr [0x8a474]
    X86_AT(c, 0x955ffu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A474u)));
    // 095604  and eax, eax
    X86_AT(c, 0x95604u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095606  je 0x95613
    X86_AT(c, 0x95606u);
    if (x86_cc(c, 4)) { goto L_95613; }
L_95608:
    X86_TICK(c, 11);
    // 095608  push eax
    X86_AT(c, 0x95608u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095609  push 0x8a488
    X86_AT(c, 0x95609u);
    { uint32_t v = 0x8A488u; push32(c, v); }
    // 09560e  call 0x9382c
    X86_AT(c, 0x9560eu);
    push32(c, 0x95613u); x86_call_known(c, 0x9382cu, f_0009382c); X86_RET(c, 0x95613u);
L_95613:
    X86_TICK(c, 28);
    // 095613  pop edi
    X86_AT(c, 0x95613u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095614  pop esi
    X86_AT(c, 0x95614u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095615  pop ebx
    X86_AT(c, 0x95615u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095616  leave 
    X86_AT(c, 0x95616u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095617  ret 
    X86_AT(c, 0x95617u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95390u, "ran off the end of a function");
}
}

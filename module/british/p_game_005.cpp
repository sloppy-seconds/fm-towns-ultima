#include "p_game_funcs.h"
namespace p_game {
void f_00054d75(X86Cpu& c) {
    X86_TICK(c, 16);
    // 054d75  leave 
    X86_AT(c, 0x54d75u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 054d76  ret 
    X86_AT(c, 0x54d76u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x54d75u, "ran off the end of a function");
}
void f_00054d80(X86Cpu& c) {
    X86_TICK(c, 17);
    // 054d80  push ebp
    X86_AT(c, 0x54d80u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 054d81  mov ebp, esp
    X86_AT(c, 0x54d81u);
    c.r[5] = c.r[4];
    // 054d83  push ecx
    X86_AT(c, 0x54d83u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 054d84  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x54d84u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 054d87  cmp ecx, 0xa
    X86_AT(c, 0x54d87u);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 054d8a  jge 0x54d91
    X86_AT(c, 0x54d8au);
    if (x86_cc(c, 13)) { goto L_54d91; }
    X86_TICK(c, 9);
    // 054d8c  add ecx, 0x30
    X86_AT(c, 0x54d8cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x30u, 0, 4); }
    // 054d8f  jmp 0x54da5
    X86_AT(c, 0x54d8fu);
    goto L_54da5;
L_54d91:
    X86_TICK(c, 20);
    // 054d91  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x54d91u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 054d94  mov eax, dword ptr [eax - 4]
    X86_AT(c, 0x54d94u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 054d97  cmp byte ptr [eax + 0xc], 0x78
    X86_AT(c, 0x54d97u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))), 0x78u, 0, 1);
    // 054d9b  jne 0x54da2
    X86_AT(c, 0x54d9bu);
    if (x86_cc(c, 5)) { goto L_54da2; }
    X86_TICK(c, 9);
    // 054d9d  add ecx, 0x57
    X86_AT(c, 0x54d9du);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x57u, 0, 4); }
    // 054da0  jmp 0x54da5
    X86_AT(c, 0x54da0u);
    goto L_54da5;
L_54da2:
    X86_TICK(c, 2);
    // 054da2  add ecx, 0x37
    X86_AT(c, 0x54da2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x37u, 0, 4); }
L_54da5:
    X86_TICK(c, 30);
    // 054da5  mov eax, ecx
    X86_AT(c, 0x54da5u);
    c.r[0] = c.r[1];
    // 054da7  mov edx, dword ptr [0x4b800]
    X86_AT(c, 0x54da7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B800u)));
    // 054dad  mov byte ptr [edx + 0x4b7df], al
    X86_AT(c, 0x54dadu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x4B7DFu)), g8(c, 0));
    // 054db3  dec dword ptr [0x4b800]
    X86_AT(c, 0x54db3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B800u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 054db9  leave 
    X86_AT(c, 0x54db9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 054dba  ret 4
    X86_AT(c, 0x54dbau);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x54d80u, "ran off the end of a function");
}
void f_00054dcc(X86Cpu& c) {
    X86_TICK(c, 27);
    // 054dcc  push ebp
    X86_AT(c, 0x54dccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 054dcd  mov ebp, esp
    X86_AT(c, 0x54dcdu);
    c.r[5] = c.r[4];
    // 054dcf  push ecx
    X86_AT(c, 0x54dcfu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 054dd0  push ebx
    X86_AT(c, 0x54dd0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 054dd1  push edi
    X86_AT(c, 0x54dd1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 054dd2  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x54dd2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 054dd5  mov edi, dword ptr [eax + 8]
    X86_AT(c, 0x54dd5u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 054dd8  mov dword ptr [0x4b800], 0x1e
    X86_AT(c, 0x54dd8u);
    wr32((c.sbase[3] + (uint32_t)(0x4B800u)), 0x1Eu);
    // 054de2  and edi, edi
    X86_AT(c, 0x54de2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 054de4  jbe 0x54e09
    X86_AT(c, 0x54de4u);
    if (x86_cc(c, 6)) { goto L_54e09; }
    X86_TICK(c, 7);
    // 054de6  jmp 0x54e03
    X86_AT(c, 0x54de6u);
    goto L_54e03;
L_54de8:
    X86_TICK(c, 69);
    // 054de8  movzx ecx, byte ptr [0x4b808]
    X86_AT(c, 0x54de8u);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(0x4B808u)));
    // 054def  mov eax, edi
    X86_AT(c, 0x54defu);
    c.r[0] = c.r[7];
    // 054df1  sub edx, edx
    X86_AT(c, 0x54df1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 054df3  div ecx
    X86_AT(c, 0x54df3u);
    x86_div(c, c.r[1], 4, 0x54df3u);
    // 054df5  mov ebx, edx
    X86_AT(c, 0x54df5u);
    c.r[3] = c.r[2];
    // 054df7  xchg edi, eax
    X86_AT(c, 0x54df7u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 054df8  movzx ebx, bl
    X86_AT(c, 0x54df8u);
    c.r[3] = g8(c, 3);
    // 054dfb  push ebx
    X86_AT(c, 0x54dfbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 054dfc  mov ecx, ebp
    X86_AT(c, 0x54dfcu);
    c.r[1] = c.r[5];
    // 054dfe  call 0x54d80
    X86_AT(c, 0x54dfeu);
    push32(c, 0x54e03u); x86_call_known(c, 0x54d80u, f_00054d80); X86_RET(c, 0x54e03u);
L_54e03:
    X86_TICK(c, 7);
    // 054e03  and edi, edi
    X86_AT(c, 0x54e03u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 054e05  ja 0x54de8
    X86_AT(c, 0x54e05u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x54de8u); goto L_54de8; }
    X86_TICK(c, 7);
    // 054e07  jmp 0x54e1b
    X86_AT(c, 0x54e07u);
    goto L_54e1b;
L_54e09:
    X86_TICK(c, 12);
    // 054e09  mov eax, dword ptr [0x4b800]
    X86_AT(c, 0x54e09u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B800u)));
    // 054e0e  mov byte ptr [eax + 0x4b7df], 0x30
    X86_AT(c, 0x54e0eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x4B7DFu)), 0x30u);
    // 054e15  dec dword ptr [0x4b800]
    X86_AT(c, 0x54e15u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B800u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_54e1b:
    X86_TICK(c, 40);
    // 054e1b  inc dword ptr [0x4b800]
    X86_AT(c, 0x54e1bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B800u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 054e21  mov eax, 0x1f
    X86_AT(c, 0x54e21u);
    c.r[0] = 0x1Fu;
    // 054e26  sub eax, dword ptr [0x4b800]
    X86_AT(c, 0x54e26u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0x4B800u))), 0, 4); }
    // 054e2c  mov dword ptr [0x4b804], eax
    X86_AT(c, 0x54e2cu);
    wr32((c.sbase[3] + (uint32_t)(0x4B804u)), c.r[0]);
    // 054e31  pop edi
    X86_AT(c, 0x54e31u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 054e32  pop ebx
    X86_AT(c, 0x54e32u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 054e33  leave 
    X86_AT(c, 0x54e33u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 054e34  ret 
    X86_AT(c, 0x54e34u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x54dccu, "ran off the end of a function");
}
void f_00054e3c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 054e3c  push ebp
    X86_AT(c, 0x54e3cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 054e3d  mov ebp, esp
    X86_AT(c, 0x54e3du);
    c.r[5] = c.r[4];
    // 054e3f  push ecx
    X86_AT(c, 0x54e3fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 054e40  push dword ptr [0x4b810]
    X86_AT(c, 0x54e40u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4B810u))); push32(c, v); }
    // 054e46  call 0x548d4
    X86_AT(c, 0x54e46u);
    push32(c, 0x54e4bu); x86_call_known(c, 0x548d4u, f_000548d4); X86_RET(c, 0x54e4bu);
    X86_TICK(c, 22);
    // 054e4b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x54e4bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 054e4e  mov byte ptr [eax - 5], 0
    X86_AT(c, 0x54e4eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFBu)), 0x0u);
    // 054e52  leave 
    X86_AT(c, 0x54e52u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 054e53  ret 
    X86_AT(c, 0x54e53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x54e3cu, "ran off the end of a function");
}
void f_00054e68(X86Cpu& c) {
    X86_TICK(c, 24);
    // 054e68  push ebp
    X86_AT(c, 0x54e68u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 054e69  mov ebp, esp
    X86_AT(c, 0x54e69u);
    c.r[5] = c.r[4];
    // 054e6b  push ecx
    X86_AT(c, 0x54e6bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 054e6c  push eax
    X86_AT(c, 0x54e6cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 054e6d  push ebx
    X86_AT(c, 0x54e6du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 054e6e  push edi
    X86_AT(c, 0x54e6eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 054e6f  cmp dword ptr [0x4b4b4], 0
    X86_AT(c, 0x54e6fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x4B4B4u))), 0x0u, 0, 4);
    // 054e76  jne 0x54e8a
    X86_AT(c, 0x54e76u);
    if (x86_cc(c, 5)) { goto L_54e8a; }
    X86_TICK(c, 12);
    // 054e78  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0x54e78u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 054e7c  jne 0x54e8a
    X86_AT(c, 0x54e7cu);
    if (x86_cc(c, 5)) { goto L_54e8a; }
    X86_TICK(c, 9);
    // 054e7e  push 0
    X86_AT(c, 0x54e7eu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 054e80  call 0x548d4
    X86_AT(c, 0x54e80u);
    push32(c, 0x54e85u); x86_call_known(c, 0x548d4u, f_000548d4); X86_RET(c, 0x54e85u);
    X86_TICK(c, 7);
    // 054e85  jmp 0x54fb0
    X86_AT(c, 0x54e85u);
    goto L_54fb0;
L_54e8a:
    X86_TICK(c, 9);
    // 054e8a  mov ecx, ebp
    X86_AT(c, 0x54e8au);
    c.r[1] = c.r[5];
    // 054e8c  call 0x54c88
    X86_AT(c, 0x54e8cu);
    push32(c, 0x54e91u); x86_call_known(c, 0x54c88u, f_00054c88); X86_RET(c, 0x54e91u);
    X86_TICK(c, 9);
    // 054e91  mov ecx, ebp
    X86_AT(c, 0x54e91u);
    c.r[1] = c.r[5];
    // 054e93  call 0x54dcc
    X86_AT(c, 0x54e93u);
    push32(c, 0x54e98u); x86_call_known(c, 0x54dccu, f_00054dcc); X86_RET(c, 0x54e98u);
    X86_TICK(c, 12);
    // 054e98  cmp dword ptr [0x4b4b4], 0xffff
    X86_AT(c, 0x54e98u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x4B4B4u))), 0xFFFFu, 0, 4);
    // 054ea2  jne 0x54eb0
    X86_AT(c, 0x54ea2u);
    if (x86_cc(c, 5)) { goto L_54eb0; }
    X86_TICK(c, 13);
    // 054ea4  mov eax, dword ptr [0x4b804]
    X86_AT(c, 0x54ea4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B804u)));
    // 054ea9  mov dword ptr [0x4b810], eax
    X86_AT(c, 0x54ea9u);
    wr32((c.sbase[3] + (uint32_t)(0x4B810u)), c.r[0]);
    // 054eae  jmp 0x54ec6
    X86_AT(c, 0x54eaeu);
    goto L_54ec6;
L_54eb0:
    X86_TICK(c, 15);
    // 054eb0  mov eax, dword ptr [0x4b4b4]
    X86_AT(c, 0x54eb0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B4B4u)));
    // 054eb5  mov edx, dword ptr [0x4b804]
    X86_AT(c, 0x54eb5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B804u)));
    // 054ebb  cmp eax, edx
    X86_AT(c, 0x54ebbu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 054ebd  jb 0x54ec0
    X86_AT(c, 0x54ebdu);
    if (x86_cc(c, 2)) { goto L_54ec0; }
    X86_TICK(c, 3);
    // 054ebf  xchg edx, eax
    X86_AT(c, 0x54ebfu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_54ec0:
    X86_TICK(c, 2);
    // 054ec0  mov dword ptr [0x4b810], edx
    X86_AT(c, 0x54ec0u);
    wr32((c.sbase[3] + (uint32_t)(0x4B810u)), c.r[2]);
L_54ec6:
    X86_TICK(c, 11);
    // 054ec6  mov eax, dword ptr [0x4b4b0]
    X86_AT(c, 0x54ec6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B4B0u)));
    // 054ecb  cmp eax, 0xffff
    X86_AT(c, 0x54ecbu);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 054ed0  je 0x54ede
    X86_AT(c, 0x54ed0u);
    if (x86_cc(c, 4)) { goto L_54ede; }
    X86_TICK(c, 11);
    // 054ed2  cmp eax, dword ptr [0x4b810]
    X86_AT(c, 0x54ed2u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x4B810u))), 0, 4);
    // 054ed8  jbe 0x54ede
    X86_AT(c, 0x54ed8u);
    if (x86_cc(c, 6)) { goto L_54ede; }
    X86_TICK(c, 9);
    // 054eda  mov bl, 1
    X86_AT(c, 0x54edau);
    s8(c, 3, 0x1u);
    // 054edc  jmp 0x54ee0
    X86_AT(c, 0x54edcu);
    goto L_54ee0;
L_54ede:
    X86_TICK(c, 2);
    // 054ede  sub ebx, ebx
    X86_AT(c, 0x54edeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_54ee0:
    X86_TICK(c, 9);
    // 054ee0  mov byte ptr [ebp - 5], bl
    X86_AT(c, 0x54ee0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 3));
    // 054ee3  and bl, bl
    X86_AT(c, 0x54ee3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 054ee5  je 0x54f00
    X86_AT(c, 0x54ee5u);
    if (x86_cc(c, 4)) { goto L_54f00; }
    X86_TICK(c, 12);
    // 054ee7  test byte ptr [0x4b4ac], 1
    X86_AT(c, 0x54ee7u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x1u, 1);
    // 054eee  jne 0x54f00
    X86_AT(c, 0x54eeeu);
    if (x86_cc(c, 5)) { goto L_54f00; }
    X86_TICK(c, 12);
    // 054ef0  test byte ptr [0x4b4ac], 0x10
    X86_AT(c, 0x54ef0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x10u, 1);
    // 054ef7  jne 0x54f00
    X86_AT(c, 0x54ef7u);
    if (x86_cc(c, 5)) { goto L_54f00; }
    X86_TICK(c, 9);
    // 054ef9  mov ecx, ebp
    X86_AT(c, 0x54ef9u);
    c.r[1] = c.r[5];
    // 054efb  call 0x54e3c
    X86_AT(c, 0x54efbu);
    push32(c, 0x54f00u); x86_call_known(c, 0x54e3cu, f_00054e3c); X86_RET(c, 0x54f00u);
L_54f00:
    X86_TICK(c, 11);
    // 054f00  mov eax, dword ptr [0x4b814]
    X86_AT(c, 0x54f00u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B814u)));
    // 054f05  and eax, eax
    X86_AT(c, 0x54f05u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 054f07  je 0x54f1b
    X86_AT(c, 0x54f07u);
    if (x86_cc(c, 4)) { goto L_54f1b; }
    X86_TICK(c, 15);
    // 054f09  push eax
    X86_AT(c, 0x54f09u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 054f0a  push 0x4b80a
    X86_AT(c, 0x54f0au);
    { uint32_t v = 0x4B80Au; push32(c, v); }
    // 054f0f  mov ecx, dword ptr [0x4b4c4]
    X86_AT(c, 0x54f0fu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4C4u)));
    // 054f15  call dword ptr [0x4b4c0]
    X86_AT(c, 0x54f15u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4B4C0u))); push32(c, 0x54f1bu); x86_call(c, t); X86_RET(c, 0x54f1bu); }
L_54f1b:
    X86_TICK(c, 12);
    // 054f1b  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0x54f1bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 054f1f  je 0x54f31
    X86_AT(c, 0x54f1fu);
    if (x86_cc(c, 4)) { goto L_54f31; }
    X86_TICK(c, 12);
    // 054f21  test byte ptr [0x4b4ac], 1
    X86_AT(c, 0x54f21u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x1u, 1);
    // 054f28  jne 0x54f31
    X86_AT(c, 0x54f28u);
    if (x86_cc(c, 5)) { goto L_54f31; }
    X86_TICK(c, 9);
    // 054f2a  mov ecx, ebp
    X86_AT(c, 0x54f2au);
    c.r[1] = c.r[5];
    // 054f2c  call 0x54e3c
    X86_AT(c, 0x54f2cu);
    push32(c, 0x54f31u); x86_call_known(c, 0x54e3cu, f_00054e3c); X86_RET(c, 0x54f31u);
L_54f31:
    X86_TICK(c, 11);
    // 054f31  mov eax, dword ptr [0x4b4b4]
    X86_AT(c, 0x54f31u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B4B4u)));
    // 054f36  cmp eax, 0xffff
    X86_AT(c, 0x54f36u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 054f3b  je 0x54f5d
    X86_AT(c, 0x54f3bu);
    if (x86_cc(c, 4)) { goto L_54f5d; }
    X86_TICK(c, 11);
    // 054f3d  mov edx, dword ptr [0x4b804]
    X86_AT(c, 0x54f3du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B804u)));
    // 054f43  cmp eax, edx
    X86_AT(c, 0x54f43u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 054f45  jbe 0x54f5d
    X86_AT(c, 0x54f45u);
    if (x86_cc(c, 6)) { goto L_54f5d; }
    X86_TICK(c, 23);
    // 054f47  xchg edi, eax
    X86_AT(c, 0x54f47u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 054f48  sub edi, edx
    X86_AT(c, 0x54f48u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[2], 0, 4); }
    // 054f4a  add dword ptr [0x4b4bc], edi
    X86_AT(c, 0x54f4au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4BCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 054f50  push edi
    X86_AT(c, 0x54f50u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 054f51  push 0x4b4c8
    X86_AT(c, 0x54f51u);
    { uint32_t v = 0x4B4C8u; push32(c, v); }
    // 054f56  call 0x5488c
    X86_AT(c, 0x54f56u);
    push32(c, 0x54f5bu); x86_call_known(c, 0x5488cu, f_0005488c); X86_RET(c, 0x54f5bu);
    X86_TICK(c, 7);
    // 054f5b  jmp 0x54f80
    X86_AT(c, 0x54f5bu);
    goto L_54f80;
L_54f5d:
    X86_TICK(c, 12);
    // 054f5d  cmp dword ptr [0x4b4b4], 0
    X86_AT(c, 0x54f5du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x4B4B4u))), 0x0u, 0, 4);
    // 054f64  jne 0x54f80
    X86_AT(c, 0x54f64u);
    if (x86_cc(c, 5)) { goto L_54f80; }
    X86_TICK(c, 12);
    // 054f66  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0x54f66u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 054f6a  jne 0x54f80
    X86_AT(c, 0x54f6au);
    if (x86_cc(c, 5)) { goto L_54f80; }
    X86_TICK(c, 4);
    // 054f6c  mov dword ptr [0x4b800], 0x1f
    X86_AT(c, 0x54f6cu);
    wr32((c.sbase[3] + (uint32_t)(0x4B800u)), 0x1Fu);
    // 054f76  mov dword ptr [0x4b804], 0
    X86_AT(c, 0x54f76u);
    wr32((c.sbase[3] + (uint32_t)(0x4B804u)), 0x0u);
L_54f80:
    X86_TICK(c, 32);
    // 054f80  mov eax, dword ptr [0x4b804]
    X86_AT(c, 0x54f80u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B804u)));
    // 054f85  add dword ptr [0x4b4bc], eax
    X86_AT(c, 0x54f85u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4BCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 054f8b  push eax
    X86_AT(c, 0x54f8bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 054f8c  mov eax, dword ptr [0x4b800]
    X86_AT(c, 0x54f8cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B800u)));
    // 054f91  add eax, 0x4b7df
    X86_AT(c, 0x54f91u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4B7DFu, 0, 4); }
    // 054f96  push eax
    X86_AT(c, 0x54f96u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 054f97  mov ecx, dword ptr [0x4b4c4]
    X86_AT(c, 0x54f97u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4C4u)));
    // 054f9d  call dword ptr [0x4b4c0]
    X86_AT(c, 0x54f9du);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4B4C0u))); push32(c, 0x54fa3u); x86_call(c, t); X86_RET(c, 0x54fa3u); }
    X86_TICK(c, 12);
    // 054fa3  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0x54fa3u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 054fa7  je 0x54fb0
    X86_AT(c, 0x54fa7u);
    if (x86_cc(c, 4)) { goto L_54fb0; }
    X86_TICK(c, 9);
    // 054fa9  mov ecx, ebp
    X86_AT(c, 0x54fa9u);
    c.r[1] = c.r[5];
    // 054fab  call 0x54e3c
    X86_AT(c, 0x54fabu);
    push32(c, 0x54fb0u); x86_call_known(c, 0x54e3cu, f_00054e3c); X86_RET(c, 0x54fb0u);
L_54fb0:
    X86_TICK(c, 24);
    // 054fb0  pop edi
    X86_AT(c, 0x54fb0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 054fb1  pop ebx
    X86_AT(c, 0x54fb1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 054fb2  leave 
    X86_AT(c, 0x54fb2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 054fb3  ret 8
    X86_AT(c, 0x54fb3u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x54e68u, "ran off the end of a function");
}
void f_00054fc4(X86Cpu& c) {
    X86_TICK(c, 25);
    // 054fc4  push ebp
    X86_AT(c, 0x54fc4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 054fc5  mov ebp, esp
    X86_AT(c, 0x54fc5u);
    c.r[5] = c.r[4];
    // 054fc7  push ecx
    X86_AT(c, 0x54fc7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 054fc8  push esi
    X86_AT(c, 0x54fc8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 054fc9  push edi
    X86_AT(c, 0x54fc9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 054fca  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x54fcau);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 054fcd  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x54fcdu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 054fd0  jmp 0x54ff2
    X86_AT(c, 0x54fd0u);
    goto L_54ff2;
L_54fd2:
    X86_TICK(c, 14);
    // 054fd2  mov ecx, edi
    X86_AT(c, 0x54fd2u);
    c.r[1] = c.r[7];
    // 054fd4  and ecx, 0xf
    X86_AT(c, 0x54fd4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0xFu, 4); }
    // 054fda  shr edi, 4
    X86_AT(c, 0x54fdau);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[7] = r; }
    // 054fdd  cmp ecx, 0xa
    X86_AT(c, 0x54fddu);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 054fe0  jae 0x54fe7
    X86_AT(c, 0x54fe0u);
    if (x86_cc(c, 3)) { goto L_54fe7; }
    X86_TICK(c, 9);
    // 054fe2  lea eax, [ecx + 0x30]
    X86_AT(c, 0x54fe2u);
    c.r[0] = (uint32_t)(c.r[1] + 0x30u);
    // 054fe5  jmp 0x54fea
    X86_AT(c, 0x54fe5u);
    goto L_54fea;
L_54fe7:
    X86_TICK(c, 2);
    // 054fe7  lea eax, [ecx + 0x57]
    X86_AT(c, 0x54fe7u);
    c.r[0] = (uint32_t)(c.r[1] + 0x57u);
L_54fea:
    X86_TICK(c, 8);
    // 054fea  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x54feau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 054fed  mov byte ptr [edx + esi*1 - 0xf], al
    X86_AT(c, 0x54fedu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] + 0xFFFFFFF1u)), g8(c, 0));
    // 054ff1  dec esi
    X86_AT(c, 0x54ff1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_54ff2:
    X86_TICK(c, 7);
    // 054ff2  and edi, edi
    X86_AT(c, 0x54ff2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 054ff4  ja 0x54fd2
    X86_AT(c, 0x54ff4u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x54fd2u); goto L_54fd2; }
    X86_TICK(c, 24);
    // 054ff6  pop edi
    X86_AT(c, 0x54ff6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 054ff7  pop esi
    X86_AT(c, 0x54ff7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 054ff8  leave 
    X86_AT(c, 0x54ff8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 054ff9  ret 8
    X86_AT(c, 0x54ff9u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x54fc4u, "ran off the end of a function");
}
void f_0005500c(X86Cpu& c) {
    X86_TICK(c, 66);
    // 05500c  push ebp
    X86_AT(c, 0x5500cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 05500d  mov ebp, esp
    X86_AT(c, 0x5500du);
    c.r[5] = c.r[4];
    // 05500f  push ecx
    X86_AT(c, 0x5500fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 055010  sub esp, 0xc
    X86_AT(c, 0x55010u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 055013  push ebx
    X86_AT(c, 0x55013u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 055014  push esi
    X86_AT(c, 0x55014u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 055015  push edi
    X86_AT(c, 0x55015u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055016  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x55016u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 055019  mov eax, 0x30303030
    X86_AT(c, 0x55019u);
    c.r[0] = 0x30303030u;
    // 05501e  lea ecx, [ebp - 0xe]
    X86_AT(c, 0x5501eu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 055021  push edi
    X86_AT(c, 0x55021u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055022  mov edi, ecx
    X86_AT(c, 0x55022u);
    c.r[7] = c.r[1];
    // 055024  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x55024u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 055025  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x55025u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 055026  stosw word ptr es:[edi], ax
    X86_AT(c, 0x55026u);
    x86_string(c, 2, 2, 0, 4, 3);
    // 055028  pop edi
    X86_AT(c, 0x55028u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 055029  mov ebx, 8
    X86_AT(c, 0x55029u);
    c.r[3] = 0x8u;
    // 05502e  push ebx
    X86_AT(c, 0x5502eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 05502f  push edi
    X86_AT(c, 0x5502fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055030  mov ecx, ebp
    X86_AT(c, 0x55030u);
    c.r[1] = c.r[5];
    // 055032  call 0x54fc4
    X86_AT(c, 0x55032u);
    push32(c, 0x55037u); x86_call_known(c, 0x54fc4u, f_00054fc4); X86_RET(c, 0x55037u);
    X86_TICK(c, 24);
    // 055037  add dword ptr [0x4b4bc], ebx
    X86_AT(c, 0x55037u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4BCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[3], 0, 4)); }
    // 05503d  push ebx
    X86_AT(c, 0x5503du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 05503e  lea eax, [ebp - 0xe]
    X86_AT(c, 0x5503eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 055041  push eax
    X86_AT(c, 0x55041u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 055042  mov ecx, dword ptr [0x4b4c4]
    X86_AT(c, 0x55042u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4C4u)));
    // 055048  call dword ptr [0x4b4c0]
    X86_AT(c, 0x55048u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4B4C0u))); push32(c, 0x5504eu); x86_call(c, t); X86_RET(c, 0x5504eu); }
    X86_TICK(c, 28);
    // 05504e  pop edi
    X86_AT(c, 0x5504eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05504f  pop esi
    X86_AT(c, 0x5504fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 055050  pop ebx
    X86_AT(c, 0x55050u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 055051  leave 
    X86_AT(c, 0x55051u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055052  ret 4
    X86_AT(c, 0x55052u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x5500cu, "ran off the end of a function");
}
void f_00055060(X86Cpu& c) {
    X86_TICK(c, 32);
    // 055060  push ebp
    X86_AT(c, 0x55060u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055061  mov ebp, esp
    X86_AT(c, 0x55061u);
    c.r[5] = c.r[4];
    // 055063  push edi
    X86_AT(c, 0x55063u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055064  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x55064u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 055067  sub eax, eax
    X86_AT(c, 0x55067u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 055069  mov dword ptr [0x4b4bc], eax
    X86_AT(c, 0x55069u);
    wr32((c.sbase[3] + (uint32_t)(0x4B4BCu)), c.r[0]);
    // 05506e  mov edx, 0x7fffffff
    X86_AT(c, 0x5506eu);
    c.r[2] = 0x7FFFFFFFu;
    // 055073  push edi
    X86_AT(c, 0x55073u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055074  mov ecx, edx
    X86_AT(c, 0x55074u);
    c.r[1] = c.r[2];
    // 055076  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x55076u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 055078  jne 0x5507d
    X86_AT(c, 0x55078u);
    if (x86_cc(c, 5)) { goto L_5507d; }
    X86_TICK(c, 4);
    // 05507a  inc ecx
    X86_AT(c, 0x5507au);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 05507b  sub edx, ecx
    X86_AT(c, 0x5507bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_5507d:
    X86_TICK(c, 27);
    // 05507d  pop edi
    X86_AT(c, 0x5507du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05507e  mov dword ptr [0x4b7d4], edx
    X86_AT(c, 0x5507eu);
    wr32((c.sbase[3] + (uint32_t)(0x4B7D4u)), c.r[2]);
    // 055084  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x55084u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 055087  mov dword ptr [0x4b7c8], eax
    X86_AT(c, 0x55087u);
    wr32((c.sbase[3] + (uint32_t)(0x4B7C8u)), c.r[0]);
    // 05508c  push ebp
    X86_AT(c, 0x5508cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 05508d  push 0x550a8
    X86_AT(c, 0x5508du);
    { uint32_t v = 0x550A8u; push32(c, v); }
    // 055092  push edi
    X86_AT(c, 0x55092u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055093  mov ecx, ebp
    X86_AT(c, 0x55093u);
    c.r[1] = c.r[5];
    // 055095  call 0x54a50
    X86_AT(c, 0x55095u);
    push32(c, 0x5509au); x86_call_known(c, 0x54a50u, f_00054a50); X86_RET(c, 0x5509au);
    X86_TICK(c, 20);
    // 05509a  pop edi
    X86_AT(c, 0x5509au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05509b  leave 
    X86_AT(c, 0x5509bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05509c  ret 8
    X86_AT(c, 0x5509cu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x55060u, "ran off the end of a function");
}
void f_000550a8(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0550a8  push ebp
    X86_AT(c, 0x550a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0550a9  mov ebp, esp
    X86_AT(c, 0x550a9u);
    c.r[5] = c.r[4];
    // 0550ab  push ecx
    X86_AT(c, 0x550abu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0550ac  sub esp, 8
    X86_AT(c, 0x550acu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0550af  push ebx
    X86_AT(c, 0x550afu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0550b0  push esi
    X86_AT(c, 0x550b0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0550b1  push edi
    X86_AT(c, 0x550b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0550b2  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x550b2u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0550b5  movzx eax, bl
    X86_AT(c, 0x550b5u);
    c.r[0] = g8(c, 3);
    // 0550b8  cmp eax, 0x25
    X86_AT(c, 0x550b8u);
    (void)x86_sub(c, c.r[0], 0x25u, 0, 4);
    // 0550bb  je 0x55281
    X86_AT(c, 0x550bbu);
    if (x86_cc(c, 4)) { goto L_55281; }
    X86_TICK(c, 7);
    // 0550c1  cmp eax, 0x30
    X86_AT(c, 0x550c1u);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 0550c4  je 0x551ae
    X86_AT(c, 0x550c4u);
    if (x86_cc(c, 4)) { goto L_551ae; }
    X86_TICK(c, 9);
    // 0550ca  sub eax, 0x45
    X86_AT(c, 0x550cau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x45u, 0, 4); }
    // 0550cd  cmp eax, 0x33
    X86_AT(c, 0x550cdu);
    (void)x86_sub(c, c.r[0], 0x33u, 0, 4);
    // 0550d0  ja 0x5533e
    X86_AT(c, 0x550d0u);
    if (x86_cc(c, 7)) { goto L_5533e; }
    X86_TICK(c, 7);
    // 0550d6  jmp dword ptr cs:[eax*4 + 0x550de]
    X86_AT(c, 0x550d6u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x550DEu)));
      switch (t) {
      case 0x551d1u: goto L_551d1;
      case 0x55200u: goto L_55200;
      case 0x55244u: goto L_55244;
      case 0x55266u: goto L_55266;
      case 0x552c1u: goto L_552c1;
      case 0x552d4u: goto L_552d4;
      case 0x5533eu: goto L_5533e;
      default: x86_jump(c, t); return; } }
L_551ae:
    X86_TICK(c, 29);
    // 0551ae  mov eax, dword ptr [0x4b7d0]
    X86_AT(c, 0x551aeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7D0u)));
    // 0551b3  add dword ptr [0x4b4bc], eax
    X86_AT(c, 0x551b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4BCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0551b9  push eax
    X86_AT(c, 0x551b9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0551ba  push dword ptr [0x4b7cc]
    X86_AT(c, 0x551bau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4B7CCu))); push32(c, v); }
    // 0551c0  mov ecx, dword ptr [0x4b4c4]
    X86_AT(c, 0x551c0u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4C4u)));
    // 0551c6  call dword ptr [0x4b4c0]
    X86_AT(c, 0x551c6u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4B4C0u))); push32(c, 0x551ccu); x86_call(c, t); X86_RET(c, 0x551ccu); }
    X86_TICK(c, 7);
    // 0551cc  jmp 0x55347
    X86_AT(c, 0x551ccu);
    goto L_55347;
L_551d1:
    X86_TICK(c, 42);
    // 0551d1  cmp byte ptr [0x4b4b8], 2
    X86_AT(c, 0x551d1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B4B8u))), 0x2u, 0, 1);
    // 0551d8  mov eax, dword ptr [0x4b7c8]
    X86_AT(c, 0x551d8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7C8u)));
    // 0551dd  mov edx, dword ptr [eax]
    X86_AT(c, 0x551ddu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0551df  mov dword ptr [0x4b7d8], edx
    X86_AT(c, 0x551dfu);
    wr32((c.sbase[3] + (uint32_t)(0x4B7D8u)), c.r[2]);
    // 0551e5  add dword ptr [0x4b7c8], 4
    X86_AT(c, 0x551e5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7C8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0551ec  push ebx
    X86_AT(c, 0x551ecu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0551ed  push dword ptr [0x4b7d8]
    X86_AT(c, 0x551edu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4B7D8u))); push32(c, v); }
    // 0551f3  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x551f3u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0551f6  call 0x54e68
    X86_AT(c, 0x551f6u);
    push32(c, 0x551fbu); x86_call_known(c, 0x54e68u, f_00054e68); X86_RET(c, 0x551fbu);
    X86_TICK(c, 7);
    // 0551fb  jmp 0x55347
    X86_AT(c, 0x551fbu);
    goto L_55347;
L_55200:
    X86_TICK(c, 12);
    // 055200  cmp byte ptr [0x4b4b8], 3
    X86_AT(c, 0x55200u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B4B8u))), 0x3u, 0, 1);
    // 055207  jne 0x55228
    X86_AT(c, 0x55207u);
    if (x86_cc(c, 5)) { goto L_55228; }
    X86_TICK(c, 28);
    // 055209  push ebx
    X86_AT(c, 0x55209u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 05520a  mov eax, dword ptr [0x4b7c8]
    X86_AT(c, 0x5520au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7C8u)));
    // 05520f  push dword ptr [eax + 8]
    X86_AT(c, 0x5520fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))); push32(c, v); }
    // 055212  push dword ptr [eax + 4]
    X86_AT(c, 0x55212u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 055215  push dword ptr [eax]
    X86_AT(c, 0x55215u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 055217  call 0x56928
    X86_AT(c, 0x55217u);
    push32(c, 0x5521cu); x86_call_known(c, 0x56928u, f_00056928); X86_RET(c, 0x5521cu);
    X86_TICK(c, 14);
    // 05521c  add dword ptr [0x4b7c8], 0xa
    X86_AT(c, 0x5521cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7C8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xAu, 0, 4)); }
    // 055223  jmp 0x55347
    X86_AT(c, 0x55223u);
    goto L_55347;
L_55228:
    X86_TICK(c, 23);
    // 055228  push ebx
    X86_AT(c, 0x55228u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 055229  mov eax, dword ptr [0x4b7c8]
    X86_AT(c, 0x55229u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7C8u)));
    // 05522e  push dword ptr [eax + 4]
    X86_AT(c, 0x5522eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 055231  push dword ptr [eax]
    X86_AT(c, 0x55231u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 055233  call 0x561fc
    X86_AT(c, 0x55233u);
    push32(c, 0x55238u); x86_call_known(c, 0x561fcu, f_000561fc); X86_RET(c, 0x55238u);
    X86_TICK(c, 14);
    // 055238  add dword ptr [0x4b7c8], 8
    X86_AT(c, 0x55238u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7C8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x8u, 0, 4)); }
    // 05523f  jmp 0x55347
    X86_AT(c, 0x5523fu);
    goto L_55347;
L_55244:
    X86_TICK(c, 30);
    // 055244  mov eax, dword ptr [0x4b7c8]
    X86_AT(c, 0x55244u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7C8u)));
    // 055249  mov edx, dword ptr [eax]
    X86_AT(c, 0x55249u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 05524b  mov dword ptr [0x4b7d8], edx
    X86_AT(c, 0x5524bu);
    wr32((c.sbase[3] + (uint32_t)(0x4B7D8u)), c.r[2]);
    // 055251  add dword ptr [0x4b7c8], 4
    X86_AT(c, 0x55251u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7C8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 055258  push edx
    X86_AT(c, 0x55258u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 055259  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x55259u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 05525c  call 0x5500c
    X86_AT(c, 0x5525cu);
    push32(c, 0x55261u); x86_call_known(c, 0x5500cu, f_0005500c); X86_RET(c, 0x55261u);
    X86_TICK(c, 7);
    // 055261  jmp 0x55347
    X86_AT(c, 0x55261u);
    goto L_55347;
L_55266:
    X86_TICK(c, 28);
    // 055266  mov eax, dword ptr [0x4b4bc]
    X86_AT(c, 0x55266u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B4BCu)));
    // 05526b  mov edx, dword ptr [0x4b7c8]
    X86_AT(c, 0x5526bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B7C8u)));
    // 055271  mov ecx, dword ptr [edx]
    X86_AT(c, 0x55271u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 055273  mov dword ptr [ecx], eax
    X86_AT(c, 0x55273u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 055275  add dword ptr [0x4b7c8], 4
    X86_AT(c, 0x55275u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7C8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 05527c  jmp 0x55347
    X86_AT(c, 0x5527cu);
    goto L_55347;
L_55281:
    X86_TICK(c, 2);
    // 055281  mov byte ptr [ebp - 6], 0x25
    X86_AT(c, 0x55281u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), 0x25u);
L_55285:
    X86_TICK(c, 18);
    // 055285  inc dword ptr [0x4b4bc]
    X86_AT(c, 0x55285u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4BCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 05528b  test byte ptr [0x4b4ac], 1
    X86_AT(c, 0x5528bu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x1u, 1);
    // 055292  jne 0x5529b
    X86_AT(c, 0x55292u);
    if (x86_cc(c, 5)) { goto L_5529b; }
    X86_TICK(c, 9);
    // 055294  push 1
    X86_AT(c, 0x55294u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 055296  call 0x548d4
    X86_AT(c, 0x55296u);
    push32(c, 0x5529bu); x86_call_known(c, 0x548d4u, f_000548d4); X86_RET(c, 0x5529bu);
L_5529b:
    X86_TICK(c, 17);
    // 05529b  push 1
    X86_AT(c, 0x5529bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 05529d  lea eax, [ebp - 6]
    X86_AT(c, 0x5529du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFAu);
    // 0552a0  push eax
    X86_AT(c, 0x552a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0552a1  mov ecx, dword ptr [0x4b4c4]
    X86_AT(c, 0x552a1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4C4u)));
    // 0552a7  call dword ptr [0x4b4c0]
    X86_AT(c, 0x552a7u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4B4C0u))); push32(c, 0x552adu); x86_call(c, t); X86_RET(c, 0x552adu); }
    X86_TICK(c, 12);
    // 0552ad  test byte ptr [0x4b4ac], 1
    X86_AT(c, 0x552adu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x1u, 1);
    // 0552b4  je 0x55347
    X86_AT(c, 0x552b4u);
    if (x86_cc(c, 4)) { goto L_55347; }
    X86_TICK(c, 9);
    // 0552ba  push 1
    X86_AT(c, 0x552bau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0552bc  jmp 0x55337
    X86_AT(c, 0x552bcu);
    goto L_55337;
L_552c1:
    X86_TICK(c, 24);
    // 0552c1  mov eax, dword ptr [0x4b7c8]
    X86_AT(c, 0x552c1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7C8u)));
    // 0552c6  mov dl, byte ptr [eax]
    X86_AT(c, 0x552c6u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0552c8  mov byte ptr [ebp - 6], dl
    X86_AT(c, 0x552c8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 2));
    // 0552cb  add dword ptr [0x4b7c8], 4
    X86_AT(c, 0x552cbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7C8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0552d2  jmp 0x55285
    X86_AT(c, 0x552d2u);
    X86_POLL(c, 0x55285u); goto L_55285;
L_552d4:
    X86_TICK(c, 22);
    // 0552d4  mov eax, dword ptr [0x4b7c8]
    X86_AT(c, 0x552d4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7C8u)));
    // 0552d9  mov edi, dword ptr [eax]
    X86_AT(c, 0x552d9u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0552db  add dword ptr [0x4b7c8], 4
    X86_AT(c, 0x552dbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7C8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0552e2  and edi, edi
    X86_AT(c, 0x552e2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0552e4  je 0x55347
    X86_AT(c, 0x552e4u);
    if (x86_cc(c, 4)) { goto L_55347; }
    X86_TICK(c, 22);
    // 0552e6  mov edx, dword ptr [0x4b4b4]
    X86_AT(c, 0x552e6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B4B4u)));
    // 0552ec  sub eax, eax
    X86_AT(c, 0x552ecu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0552ee  push edi
    X86_AT(c, 0x552eeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0552ef  mov ecx, edx
    X86_AT(c, 0x552efu);
    c.r[1] = c.r[2];
    // 0552f1  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x552f1u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0552f3  jne 0x552f8
    X86_AT(c, 0x552f3u);
    if (x86_cc(c, 5)) { goto L_552f8; }
    X86_TICK(c, 4);
    // 0552f5  inc ecx
    X86_AT(c, 0x552f5u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0552f6  sub edx, ecx
    X86_AT(c, 0x552f6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_552f8:
    X86_TICK(c, 17);
    // 0552f8  pop edi
    X86_AT(c, 0x552f8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0552f9  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0x552f9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 0552fc  mov ecx, dword ptr [0x4b4b4]
    X86_AT(c, 0x552fcu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4B4u)));
    // 055302  cmp edx, ecx
    X86_AT(c, 0x55302u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 055304  jb 0x55308
    X86_AT(c, 0x55304u);
    if (x86_cc(c, 2)) { goto L_55308; }
    X86_TICK(c, 2);
    // 055306  mov edx, ecx
    X86_AT(c, 0x55306u);
    c.r[2] = c.r[1];
L_55308:
    X86_TICK(c, 21);
    // 055308  mov esi, edx
    X86_AT(c, 0x55308u);
    c.r[6] = c.r[2];
    // 05530a  add dword ptr [0x4b4bc], esi
    X86_AT(c, 0x5530au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4BCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 055310  test byte ptr [0x4b4ac], 1
    X86_AT(c, 0x55310u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x1u, 1);
    // 055317  jne 0x5531f
    X86_AT(c, 0x55317u);
    if (x86_cc(c, 5)) { goto L_5531f; }
    X86_TICK(c, 9);
    // 055319  push esi
    X86_AT(c, 0x55319u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 05531a  call 0x548d4
    X86_AT(c, 0x5531au);
    push32(c, 0x5531fu); x86_call_known(c, 0x548d4u, f_000548d4); X86_RET(c, 0x5531fu);
L_5531f:
    X86_TICK(c, 15);
    // 05531f  push esi
    X86_AT(c, 0x5531fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 055320  push edi
    X86_AT(c, 0x55320u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055321  mov ecx, dword ptr [0x4b4c4]
    X86_AT(c, 0x55321u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4C4u)));
    // 055327  call dword ptr [0x4b4c0]
    X86_AT(c, 0x55327u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4B4C0u))); push32(c, 0x5532du); x86_call(c, t); X86_RET(c, 0x5532du); }
    X86_TICK(c, 12);
    // 05532d  test byte ptr [0x4b4ac], 1
    X86_AT(c, 0x5532du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x1u, 1);
    // 055334  je 0x55347
    X86_AT(c, 0x55334u);
    if (x86_cc(c, 4)) { goto L_55347; }
    X86_TICK(c, 2);
    // 055336  push esi
    X86_AT(c, 0x55336u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_55337:
    X86_TICK(c, 7);
    // 055337  call 0x548d4
    X86_AT(c, 0x55337u);
    push32(c, 0x5533cu); x86_call_known(c, 0x548d4u, f_000548d4); X86_RET(c, 0x5533cu);
    X86_TICK(c, 7);
    // 05533c  jmp 0x55347
    X86_AT(c, 0x5533cu);
    goto L_55347;
L_5533e:
    X86_TICK(c, 2);
    // 05533e  mov word ptr [0x4b81e], 1
    X86_AT(c, 0x5533eu);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), 0x1u);
L_55347:
    X86_TICK(c, 28);
    // 055347  pop edi
    X86_AT(c, 0x55347u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 055348  pop esi
    X86_AT(c, 0x55348u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 055349  pop ebx
    X86_AT(c, 0x55349u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 05534a  leave 
    X86_AT(c, 0x5534au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05534b  ret 4
    X86_AT(c, 0x5534bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x550a8u, "ran off the end of a function");
}
void f_00055347(X86Cpu& c) {
    X86_TICK(c, 28);
    // 055347  pop edi
    X86_AT(c, 0x55347u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 055348  pop esi
    X86_AT(c, 0x55348u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 055349  pop ebx
    X86_AT(c, 0x55349u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 05534a  leave 
    X86_AT(c, 0x5534au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05534b  ret 4
    X86_AT(c, 0x5534bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x55347u, "ran off the end of a function");
}
void f_00055364(X86Cpu& c) {
    X86_TICK(c, 12);
    // 055364  test byte ptr [0x4b84c], 2
    X86_AT(c, 0x55364u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B84Cu))) & 0x2u, 1);
    // 05536b  je 0x55381
    X86_AT(c, 0x5536bu);
    if (x86_cc(c, 4)) { goto L_55381; }
    X86_TICK(c, 29);
    // 05536d  mov eax, dword ptr [0x4b494]
    X86_AT(c, 0x5536du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B494u)));
    // 055372  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0x55372u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 055376  mov eax, dword ptr [0x4b498]
    X86_AT(c, 0x55376u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B498u)));
    // 05537b  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0x5537bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 05537f  jmp 0x55393
    X86_AT(c, 0x5537fu);
    goto L_55393;
L_55381:
    X86_TICK(c, 22);
    // 055381  mov eax, dword ptr [0x4b494]
    X86_AT(c, 0x55381u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B494u)));
    // 055386  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0x55386u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
    // 05538a  mov eax, dword ptr [0x4b498]
    X86_AT(c, 0x5538au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B498u)));
    // 05538f  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0x5538fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_55393:
    X86_TICK(c, 12);
    // 055393  test byte ptr [0x4b84c], 4
    X86_AT(c, 0x55393u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B84Cu))) & 0x4u, 1);
    // 05539a  je 0x553a7
    X86_AT(c, 0x5539au);
    if (x86_cc(c, 4)) { goto L_553a7; }
    X86_TICK(c, 18);
    // 05539c  mov eax, dword ptr [0x4b49c]
    X86_AT(c, 0x5539cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B49Cu)));
    // 0553a1  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0x553a1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 0553a5  jmp 0x553b0
    X86_AT(c, 0x553a5u);
    goto L_553b0;
L_553a7:
    X86_TICK(c, 11);
    // 0553a7  mov eax, dword ptr [0x4b49c]
    X86_AT(c, 0x553a7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B49Cu)));
    // 0553ac  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0x553acu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_553b0:
    X86_TICK(c, 10);
    // 0553b0  ret 
    X86_AT(c, 0x553b0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x55364u, "ran off the end of a function");
}
void f_000553b8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0553b8  push edi
    X86_AT(c, 0x553b8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0553b9  call 0x53a78
    X86_AT(c, 0x553b9u);
    push32(c, 0x553beu); x86_call_known(c, 0x53a78u, f_00053a78); X86_RET(c, 0x553beu);
    X86_TICK(c, 7);
    // 0553be  jmp 0x553e0
    X86_AT(c, 0x553beu);
    goto L_553e0;
L_553c0:
    X86_TICK(c, 12);
    // 0553c0  push dword ptr [0x4b4a0]
    X86_AT(c, 0x553c0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4B4A0u))); push32(c, v); }
    // 0553c6  call 0x55680
    X86_AT(c, 0x553c6u);
    push32(c, 0x553cbu); x86_call_known(c, 0x55680u, f_00055680); X86_RET(c, 0x553cbu);
    X86_TICK(c, 19);
    // 0553cb  mov edi, dword ptr [0x4b4a0]
    X86_AT(c, 0x553cbu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x4B4A0u)));
    // 0553d1  mov eax, dword ptr [edi + 0xc]
    X86_AT(c, 0x553d1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 0553d4  mov dword ptr [0x4b4a0], eax
    X86_AT(c, 0x553d4u);
    wr32((c.sbase[3] + (uint32_t)(0x4B4A0u)), c.r[0]);
    // 0553d9  push edi
    X86_AT(c, 0x553d9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0553da  call 0x53e9c
    X86_AT(c, 0x553dau);
    push32(c, 0x553dfu); x86_call_known(c, 0x53e9cu, f_00053e9c); X86_RET(c, 0x553dfu);
    X86_TICK(c, 4);
    // 0553df  pop ecx
    X86_AT(c, 0x553dfu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_553e0:
    X86_TICK(c, 12);
    // 0553e0  cmp dword ptr [0x4b4a0], 0
    X86_AT(c, 0x553e0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x4B4A0u))), 0x0u, 0, 4);
    // 0553e7  jne 0x553c0
    X86_AT(c, 0x553e7u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x553c0u); goto L_553c0; }
    X86_TICK(c, 14);
    // 0553e9  pop edi
    X86_AT(c, 0x553e9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0553ea  ret 
    X86_AT(c, 0x553eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x553b8u, "ran off the end of a function");
}
void f_00055400(X86Cpu& c) {
    X86_TICK(c, 33);
    // 055400  enter 0xc, 0
    X86_AT(c, 0x55400u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 055404  push ebx
    X86_AT(c, 0x55404u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 055405  push esi
    X86_AT(c, 0x55405u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 055406  push edi
    X86_AT(c, 0x55406u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055407  sub eax, eax
    X86_AT(c, 0x55407u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 055409  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x55409u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 05540c  xchg edi, eax
    X86_AT(c, 0x5540cu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 05540d  mov esi, 1
    X86_AT(c, 0x5540du);
    c.r[6] = 0x1u;
    // 055412  mov dword ptr [ebp - 8], edi
    X86_AT(c, 0x55412u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[7]);
    // 055415  mov eax, dword ptr [0x4b59c]
    X86_AT(c, 0x55415u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B59Cu)));
    // 05541a  mov edx, dword ptr [0x4b582]
    X86_AT(c, 0x5541au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B582u)));
    // 055420  mov dword ptr [edx], eax
    X86_AT(c, 0x55420u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_55422:
    X86_TICK(c, 8);
    // 055422  sub eax, eax
    X86_AT(c, 0x55422u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 055424  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x55424u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 055427  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x55427u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 05542a  mov dword ptr [ebp - 0xc], edi
    X86_AT(c, 0x5542au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[7]);
L_5542d:
    X86_TICK(c, 11);
    // 05542d  cmp esi, dword ptr [0x4b588]
    X86_AT(c, 0x5542du);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x4B588u))), 0, 4);
    // 055433  ja 0x554b1
    X86_AT(c, 0x55433u);
    if (x86_cc(c, 7)) { goto L_554b1; }
    X86_TICK(c, 17);
    // 055439  mov eax, dword ptr [0x4b57c]
    X86_AT(c, 0x55439u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B57Cu)));
    // 05543e  mov bl, byte ptr [eax + esi*1 - 1]
    X86_AT(c, 0x5543eu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] + 0xFFFFFFFFu))));
    // 055442  inc esi
    X86_AT(c, 0x55442u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 055443  cmp bl, 9
    X86_AT(c, 0x55443u);
    (void)x86_sub(c, g8(c, 3), 0x9u, 0, 1);
    // 055446  je 0x5544d
    X86_AT(c, 0x55446u);
    if (x86_cc(c, 4)) { goto L_5544d; }
    X86_TICK(c, 7);
    // 055448  cmp bl, 0x20
    X86_AT(c, 0x55448u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 05544b  jne 0x5545b
    X86_AT(c, 0x5544bu);
    if (x86_cc(c, 5)) { goto L_5545b; }
L_5544d:
    X86_TICK(c, 12);
    // 05544d  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0x5544du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 055451  je 0x5542d
    X86_AT(c, 0x55451u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x5542du); goto L_5542d; }
    X86_TICK(c, 12);
    // 055453  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x55453u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 055457  jne 0x5549e
    X86_AT(c, 0x55457u);
    if (x86_cc(c, 5)) { goto L_5549e; }
    X86_TICK(c, 7);
    // 055459  jmp 0x554b1
    X86_AT(c, 0x55459u);
    goto L_554b1;
L_5545b:
    X86_TICK(c, 7);
    // 05545b  cmp bl, 0x22
    X86_AT(c, 0x5545bu);
    (void)x86_sub(c, g8(c, 3), 0x22u, 0, 1);
    // 05545e  jne 0x5547c
    X86_AT(c, 0x5545eu);
    if (x86_cc(c, 5)) { goto L_5547c; }
    X86_TICK(c, 12);
    // 055460  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x55460u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 055464  jne 0x5546c
    X86_AT(c, 0x55464u);
    if (x86_cc(c, 5)) { goto L_5546c; }
    X86_TICK(c, 12);
    // 055466  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0x55466u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 05546a  jne 0x5547c
    X86_AT(c, 0x5546au);
    if (x86_cc(c, 5)) { goto L_5547c; }
L_5546c:
    X86_TICK(c, 12);
    // 05546c  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x5546cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 055470  jne 0x554b1
    X86_AT(c, 0x55470u);
    if (x86_cc(c, 5)) { goto L_554b1; }
    X86_TICK(c, 13);
    // 055472  mov al, 1
    X86_AT(c, 0x55472u);
    s8(c, 0, 0x1u);
    // 055474  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x55474u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 055477  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x55477u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 05547a  jmp 0x5542d
    X86_AT(c, 0x5547au);
    X86_POLL(c, 0x5542du); goto L_5542d;
L_5547c:
    X86_TICK(c, 7);
    // 05547c  cmp bl, 0x5c
    X86_AT(c, 0x5547cu);
    (void)x86_sub(c, g8(c, 3), 0x5Cu, 0, 1);
    // 05547f  jne 0x5549e
    X86_AT(c, 0x5547fu);
    if (x86_cc(c, 5)) { goto L_5549e; }
    X86_TICK(c, 12);
    // 055481  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x55481u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 055485  je 0x5549e
    X86_AT(c, 0x55485u);
    if (x86_cc(c, 4)) { goto L_5549e; }
    X86_TICK(c, 11);
    // 055487  cmp esi, dword ptr [0x4b588]
    X86_AT(c, 0x55487u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x4B588u))), 0, 4);
    // 05548d  ja 0x5549e
    X86_AT(c, 0x5548du);
    if (x86_cc(c, 7)) { goto L_5549e; }
    X86_TICK(c, 16);
    // 05548f  mov eax, dword ptr [0x4b57c]
    X86_AT(c, 0x5548fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B57Cu)));
    // 055494  cmp byte ptr [eax + esi*1 - 1], 0x22
    X86_AT(c, 0x55494u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] + 0xFFFFFFFFu))), 0x22u, 0, 1);
    // 055499  jne 0x5549e
    X86_AT(c, 0x55499u);
    if (x86_cc(c, 5)) { goto L_5549e; }
    X86_TICK(c, 4);
    // 05549b  mov bl, 0x22
    X86_AT(c, 0x5549bu);
    s8(c, 3, 0x22u);
    // 05549d  inc esi
    X86_AT(c, 0x5549du);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_5549e:
    X86_TICK(c, 17);
    // 05549e  mov eax, dword ptr [0x4b57c]
    X86_AT(c, 0x5549eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B57Cu)));
    // 0554a3  mov byte ptr [eax + edi*1 - 1], bl
    X86_AT(c, 0x554a3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] + 0xFFFFFFFFu)), g8(c, 3));
    // 0554a7  inc edi
    X86_AT(c, 0x554a7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0554a8  mov byte ptr [ebp - 1], 1
    X86_AT(c, 0x554a8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x1u);
    // 0554ac  jmp 0x5542d
    X86_AT(c, 0x554acu);
    X86_POLL(c, 0x5542du); goto L_5542d;
L_554b1:
    X86_TICK(c, 12);
    // 0554b1  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0x554b1u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0554b5  je 0x554d8
    X86_AT(c, 0x554b5u);
    if (x86_cc(c, 4)) { goto L_554d8; }
    X86_TICK(c, 30);
    // 0554b7  mov eax, dword ptr [0x4b57c]
    X86_AT(c, 0x554b7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B57Cu)));
    // 0554bc  mov byte ptr [eax + edi*1 - 1], 0
    X86_AT(c, 0x554bcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] + 0xFFFFFFFFu)), 0x0u);
    // 0554c1  inc edi
    X86_AT(c, 0x554c1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0554c2  inc dword ptr [ebp - 8]
    X86_AT(c, 0x554c2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0554c5  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0x554c5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0554c8  lea eax, [eax + edx*1 - 1]
    X86_AT(c, 0x554c8u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFFu);
    // 0554cc  mov edx, dword ptr [0x4b582]
    X86_AT(c, 0x554ccu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B582u)));
    // 0554d2  mov ecx, dword ptr [ebp - 8]
    X86_AT(c, 0x554d2u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0554d5  mov dword ptr [edx + ecx*4], eax
    X86_AT(c, 0x554d5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] * 4)), c.r[0]);
L_554d8:
    X86_TICK(c, 11);
    // 0554d8  cmp esi, dword ptr [0x4b588]
    X86_AT(c, 0x554d8u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x4B588u))), 0, 4);
    // 0554de  jbe 0x55422
    X86_AT(c, 0x554deu);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x55422u); goto L_55422; }
    X86_TICK(c, 43);
    // 0554e4  mov eax, dword ptr [0x4b582]
    X86_AT(c, 0x554e4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B582u)));
    // 0554e9  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0x554e9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0554ec  mov dword ptr [eax + edx*4 + 4], 0
    X86_AT(c, 0x554ecu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x4u)), 0x0u);
    // 0554f4  xchg edx, eax
    X86_AT(c, 0x554f4u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0554f5  inc eax
    X86_AT(c, 0x554f5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0554f6  pop edi
    X86_AT(c, 0x554f6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0554f7  pop esi
    X86_AT(c, 0x554f7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0554f8  pop ebx
    X86_AT(c, 0x554f8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0554f9  leave 
    X86_AT(c, 0x554f9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0554fa  ret 
    X86_AT(c, 0x554fau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x55400u, "ran off the end of a function");
}
void f_000554fc(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0554fc  ret 
    X86_AT(c, 0x554fcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x554fcu, "ran off the end of a function");
}
void f_00055518(X86Cpu& c) {
    X86_TICK(c, 13);
    // 055518  mov al, byte ptr [esp + 4]
    X86_AT(c, 0x55518u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))));
    // 05551c  mov byte ptr [0x4b825], al
    X86_AT(c, 0x5551cu);
    wr8((c.sbase[3] + (uint32_t)(0x4B825u)), g8(c, 0));
    // 055521  call 0x56b78
    X86_AT(c, 0x55521u);
    push32(c, 0x55526u); x86_call_known(c, 0x56b78u, f_00056b78); X86_RET(c, 0x55526u);
    X86_TICK(c, 12);
    // 055526  mov eax, dword ptr [0x4b844]
    X86_AT(c, 0x55526u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B844u)));
    // 05552b  rcr eax, 1
    X86_AT(c, 0x5552bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 05552d  jae 0x5554c
    X86_AT(c, 0x5552du);
    if (x86_cc(c, 3)) { goto L_5554c; }
    X86_TICK(c, 14);
    // 05552f  mov ax, word ptr [0x4b824]
    X86_AT(c, 0x5552fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4B824u))));
    // 055535  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x55535u);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
    // 05553b  sub eax, eax
    X86_AT(c, 0x5553bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 05553d  mov dword ptr [0x4b824], eax
    X86_AT(c, 0x5553du);
    wr32((c.sbase[3] + (uint32_t)(0x4B824u)), c.r[0]);
    // 055542  mov dword ptr [0x4b82c], eax
    X86_AT(c, 0x55542u);
    wr32((c.sbase[3] + (uint32_t)(0x4B82Cu)), c.r[0]);
    // 055547  mov dword ptr [0x4b830], eax
    X86_AT(c, 0x55547u);
    wr32((c.sbase[3] + (uint32_t)(0x4B830u)), c.r[0]);
L_5554c:
    X86_TICK(c, 10);
    // 05554c  ret 4
    X86_AT(c, 0x5554cu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x55518u, "ran off the end of a function");
}
void f_00055558(X86Cpu& c) {
    X86_TICK(c, 52);
    // 055558  enter 0x10, 0
    X86_AT(c, 0x55558u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 05555c  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x5555cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 05555f  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x5555fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 055562  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x55562u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 055565  mov edx, 0x4b824
    X86_AT(c, 0x55565u);
    c.r[2] = 0x4B824u;
    // 05556a  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0x5556au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 05556d  mov word ptr [ebp - 0xc], ds
    X86_AT(c, 0x5556du);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (uint32_t)c.sreg[3]);
    // 055570  movzx edx, word ptr [ebp - 0xc]
    X86_AT(c, 0x55570u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 055574  mov dword ptr [ecx], edx
    X86_AT(c, 0x55574u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[2]);
    // 055576  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x55576u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 055579  mov dword ptr [edx], eax
    X86_AT(c, 0x55579u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 05557b  leave 
    X86_AT(c, 0x5557bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05557c  ret 0xc
    X86_AT(c, 0x5557cu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x55558u, "ran off the end of a function");
}
void f_0005558c(X86Cpu& c) {
    X86_TICK(c, 20);
    // 05558c  push ebp
    X86_AT(c, 0x5558cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 05558d  mov ebp, esp
    X86_AT(c, 0x5558du);
    c.r[5] = c.r[4];
    // 05558f  push dword ptr [ebp + 8]
    X86_AT(c, 0x5558fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 055592  push 0x4b830
    X86_AT(c, 0x55592u);
    { uint32_t v = 0x4B830u; push32(c, v); }
    // 055597  push 0x4b83c
    X86_AT(c, 0x55597u);
    { uint32_t v = 0x4B83Cu; push32(c, v); }
    // 05559c  call 0x55558
    X86_AT(c, 0x5559cu);
    push32(c, 0x555a1u); x86_call_known(c, 0x55558u, f_00055558); X86_RET(c, 0x555a1u);
    X86_TICK(c, 16);
    // 0555a1  leave 
    X86_AT(c, 0x555a1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0555a2  ret 4
    X86_AT(c, 0x555a2u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x5558cu, "ran off the end of a function");
}
void f_000555b0(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0555b0  push ebp
    X86_AT(c, 0x555b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0555b1  mov ebp, esp
    X86_AT(c, 0x555b1u);
    c.r[5] = c.r[4];
    // 0555b3  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x555b3u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0555b7  mov dword ptr [0x4b828], eax
    X86_AT(c, 0x555b7u);
    wr32((c.sbase[3] + (uint32_t)(0x4B828u)), c.r[0]);
    // 0555bc  push 0x3e
    X86_AT(c, 0x555bcu);
    { uint32_t v = 0x3Eu; push32(c, v); }
    // 0555be  call 0x55518
    X86_AT(c, 0x555beu);
    push32(c, 0x555c3u); x86_call_known(c, 0x55518u, f_00055518); X86_RET(c, 0x555c3u);
    X86_TICK(c, 16);
    // 0555c3  leave 
    X86_AT(c, 0x555c3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0555c4  ret 4
    X86_AT(c, 0x555c4u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x555b0u, "ran off the end of a function");
}
void f_000555d0(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0555d0  push ebp
    X86_AT(c, 0x555d0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0555d1  mov ebp, esp
    X86_AT(c, 0x555d1u);
    c.r[5] = c.r[4];
    // 0555d3  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x555d3u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0555d6  mov byte ptr [0x4b824], al
    X86_AT(c, 0x555d6u);
    wr8((c.sbase[3] + (uint32_t)(0x4B824u)), g8(c, 0));
    // 0555db  push 0x4c
    X86_AT(c, 0x555dbu);
    { uint32_t v = 0x4Cu; push32(c, v); }
    // 0555dd  call 0x55518
    X86_AT(c, 0x555ddu);
    push32(c, 0x555e2u); x86_call_known(c, 0x55518u, f_00055518); X86_RET(c, 0x555e2u);
    X86_TICK(c, 16);
    // 0555e2  leave 
    X86_AT(c, 0x555e2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0555e3  ret 4
    X86_AT(c, 0x555e3u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x555d0u, "ran off the end of a function");
}
void f_00055608(X86Cpu& c) {
    X86_TICK(c, 16);
    // 055608  push ebp
    X86_AT(c, 0x55608u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055609  mov ebp, esp
    X86_AT(c, 0x55609u);
    c.r[5] = c.r[4];
    // 05560b  push dword ptr [ebp + 8]
    X86_AT(c, 0x5560bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 05560e  call 0x5558c
    X86_AT(c, 0x5560eu);
    push32(c, 0x55613u); x86_call_known(c, 0x5558cu, f_0005558c); X86_RET(c, 0x55613u);
    X86_TICK(c, 12);
    // 055613  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x55613u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 055616  call 0x55518
    X86_AT(c, 0x55616u);
    push32(c, 0x5561bu); x86_call_known(c, 0x55518u, f_00055518); X86_RET(c, 0x5561bu);
    X86_TICK(c, 16);
    // 05561b  leave 
    X86_AT(c, 0x5561bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05561c  ret 8
    X86_AT(c, 0x5561cu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x55608u, "ran off the end of a function");
}
void f_00055628(X86Cpu& c) {
    X86_TICK(c, 26);
    // 055628  push ebp
    X86_AT(c, 0x55628u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055629  mov ebp, esp
    X86_AT(c, 0x55629u);
    c.r[5] = c.r[4];
    // 05562b  movzx eax, byte ptr [ebp + 0xc]
    X86_AT(c, 0x5562bu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 05562f  mov dword ptr [0x4b82c], eax
    X86_AT(c, 0x5562fu);
    wr32((c.sbase[3] + (uint32_t)(0x4B82Cu)), c.r[0]);
    // 055634  push 0x3c
    X86_AT(c, 0x55634u);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 055636  push dword ptr [ebp + 8]
    X86_AT(c, 0x55636u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 055639  call 0x55608
    X86_AT(c, 0x55639u);
    push32(c, 0x5563eu); x86_call_known(c, 0x55608u, f_00055608); X86_RET(c, 0x5563eu);
    X86_TICK(c, 20);
    // 05563e  mov al, byte ptr [0x4b824]
    X86_AT(c, 0x5563eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B824u))));
    // 055643  leave 
    X86_AT(c, 0x55643u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055644  ret 8
    X86_AT(c, 0x55644u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x55628u, "ran off the end of a function");
}
void f_00055650(X86Cpu& c) {
    X86_TICK(c, 33);
    // 055650  push ebp
    X86_AT(c, 0x55650u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055651  mov ebp, esp
    X86_AT(c, 0x55651u);
    c.r[5] = c.r[4];
    // 055653  mov al, byte ptr [0x4b848]
    X86_AT(c, 0x55653u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B848u))));
    // 055658  shl al, 4
    X86_AT(c, 0x55658u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 05565b  or al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x5565bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 1)); }
    // 05565e  mov byte ptr [0x4b824], al
    X86_AT(c, 0x5565eu);
    wr8((c.sbase[3] + (uint32_t)(0x4B824u)), g8(c, 0));
    // 055663  push 0x3d
    X86_AT(c, 0x55663u);
    { uint32_t v = 0x3Du; push32(c, v); }
    // 055665  push dword ptr [ebp + 8]
    X86_AT(c, 0x55665u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 055668  call 0x55608
    X86_AT(c, 0x55668u);
    push32(c, 0x5566du); x86_call_known(c, 0x55608u, f_00055608); X86_RET(c, 0x5566du);
    X86_TICK(c, 20);
    // 05566d  mov al, byte ptr [0x4b824]
    X86_AT(c, 0x5566du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B824u))));
    // 055672  leave 
    X86_AT(c, 0x55672u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055673  ret 8
    X86_AT(c, 0x55673u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x55650u, "ran off the end of a function");
}
void f_00055680(X86Cpu& c) {
    X86_TICK(c, 18);
    // 055680  push ebp
    X86_AT(c, 0x55680u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055681  mov ebp, esp
    X86_AT(c, 0x55681u);
    c.r[5] = c.r[4];
    // 055683  push 0x41
    X86_AT(c, 0x55683u);
    { uint32_t v = 0x41u; push32(c, v); }
    // 055685  push dword ptr [ebp + 8]
    X86_AT(c, 0x55685u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 055688  call 0x55608
    X86_AT(c, 0x55688u);
    push32(c, 0x5568du); x86_call_known(c, 0x55608u, f_00055608); X86_RET(c, 0x5568du);
    X86_TICK(c, 16);
    // 05568d  leave 
    X86_AT(c, 0x5568du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05568e  ret 4
    X86_AT(c, 0x5568eu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x55680u, "ran off the end of a function");
}
void f_000556a8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0556a8  push ebp
    X86_AT(c, 0x556a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0556a9  mov ebp, esp
    X86_AT(c, 0x556a9u);
    c.r[5] = c.r[4];
    // 0556ab  push ebx
    X86_AT(c, 0x556abu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0556ac  push esi
    X86_AT(c, 0x556acu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0556ad  push edi
    X86_AT(c, 0x556adu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0556ae  mov edi, dword ptr [0x4b85c]
    X86_AT(c, 0x556aeu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x4B85Cu)));
    // 0556b4  jmp 0x556e3
    X86_AT(c, 0x556b4u);
    goto L_556e3;
L_556b6:
    X86_TICK(c, 11);
    // 0556b6  mov esi, dword ptr [edi]
    X86_AT(c, 0x556b6u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0556b8  and esi, esi
    X86_AT(c, 0x556b8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0556ba  je 0x556da
    X86_AT(c, 0x556bau);
    if (x86_cc(c, 4)) { goto L_556da; }
    X86_TICK(c, 11);
    // 0556bc  cmp edi, dword ptr [esi + 4]
    X86_AT(c, 0x556bcu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))), 0, 4);
    // 0556bf  je 0x556da
    X86_AT(c, 0x556bfu);
    if (x86_cc(c, 4)) { goto L_556da; }
    X86_TICK(c, 11);
    // 0556c1  push edi
    X86_AT(c, 0x556c1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0556c2  push 1
    X86_AT(c, 0x556c2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0556c4  call 0x56b10
    X86_AT(c, 0x556c4u);
    push32(c, 0x556c9u); x86_call_known(c, 0x56b10u, f_00056b10); X86_RET(c, 0x556c9u);
    X86_TICK(c, 15);
    // 0556c9  push edi
    X86_AT(c, 0x556c9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0556ca  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x556cau);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0556cd  mov ebx, ecx
    X86_AT(c, 0x556cdu);
    c.r[3] = c.r[1];
    // 0556cf  call dword ptr [ebp + 8]
    X86_AT(c, 0x556cfu);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x556d2u); x86_call(c, t); X86_RET(c, 0x556d2u); }
    X86_TICK(c, 11);
    // 0556d2  push esi
    X86_AT(c, 0x556d2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0556d3  mov ecx, ebx
    X86_AT(c, 0x556d3u);
    c.r[1] = c.r[3];
    // 0556d5  call dword ptr [ebp + 8]
    X86_AT(c, 0x556d5u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x556d8u); x86_call(c, t); X86_RET(c, 0x556d8u); }
    X86_TICK(c, 7);
    // 0556d8  jmp 0x556e7
    X86_AT(c, 0x556d8u);
    goto L_556e7;
L_556da:
    X86_TICK(c, 13);
    // 0556da  push edi
    X86_AT(c, 0x556dau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0556db  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x556dbu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0556de  call dword ptr [ebp + 8]
    X86_AT(c, 0x556deu);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x556e1u); x86_call(c, t); X86_RET(c, 0x556e1u); }
    X86_TICK(c, 2);
    // 0556e1  mov edi, esi
    X86_AT(c, 0x556e1u);
    c.r[7] = c.r[6];
L_556e3:
    X86_TICK(c, 7);
    // 0556e3  and edi, edi
    X86_AT(c, 0x556e3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0556e5  jne 0x556b6
    X86_AT(c, 0x556e5u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x556b6u); goto L_556b6; }
L_556e7:
    X86_TICK(c, 28);
    // 0556e7  pop edi
    X86_AT(c, 0x556e7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0556e8  pop esi
    X86_AT(c, 0x556e8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0556e9  pop ebx
    X86_AT(c, 0x556e9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0556ea  leave 
    X86_AT(c, 0x556eau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0556eb  ret 8
    X86_AT(c, 0x556ebu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x556a8u, "ran off the end of a function");
}
void f_00055700(X86Cpu& c) {
    X86_TICK(c, 23);
    // 055700  push ebp
    X86_AT(c, 0x55700u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055701  mov ebp, esp
    X86_AT(c, 0x55701u);
    c.r[5] = c.r[4];
    // 055703  push ebx
    X86_AT(c, 0x55703u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 055704  push esi
    X86_AT(c, 0x55704u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 055705  push edi
    X86_AT(c, 0x55705u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055706  mov edi, dword ptr [0x4b858]
    X86_AT(c, 0x55706u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x4B858u)));
    // 05570c  sub esi, esi
    X86_AT(c, 0x5570cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 05570e  jmp 0x55752
    X86_AT(c, 0x5570eu);
    goto L_55752;
L_55710:
    X86_TICK(c, 14);
    // 055710  mov ebx, edi
    X86_AT(c, 0x55710u);
    c.r[3] = c.r[7];
    // 055712  cmp byte ptr [ebx + 0xf], 0x55
    X86_AT(c, 0x55712u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFu))), 0x55u, 0, 1);
    // 055716  je 0x55722
    X86_AT(c, 0x55716u);
    if (x86_cc(c, 4)) { goto L_55722; }
    X86_TICK(c, 11);
    // 055718  push edi
    X86_AT(c, 0x55718u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055719  push 4
    X86_AT(c, 0x55719u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 05571b  call 0x56b10
    X86_AT(c, 0x5571bu);
    push32(c, 0x55720u); x86_call_known(c, 0x56b10u, f_00056b10); X86_RET(c, 0x55720u);
    X86_TICK(c, 7);
    // 055720  jmp 0x55752
    X86_AT(c, 0x55720u);
    goto L_55752;
L_55722:
    X86_TICK(c, 11);
    // 055722  cmp esi, dword ptr [ebx + 0x14]
    X86_AT(c, 0x55722u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))), 0, 4);
    // 055725  je 0x55733
    X86_AT(c, 0x55725u);
    if (x86_cc(c, 4)) { goto L_55733; }
    X86_TICK(c, 11);
    // 055727  push edi
    X86_AT(c, 0x55727u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055728  push 5
    X86_AT(c, 0x55728u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 05572a  call 0x56b10
    X86_AT(c, 0x5572au);
    push32(c, 0x5572fu); x86_call_known(c, 0x56b10u, f_00056b10); X86_RET(c, 0x5572fu);
    X86_TICK(c, 9);
    // 05572f  sub edi, edi
    X86_AT(c, 0x5572fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 055731  jmp 0x55752
    X86_AT(c, 0x55731u);
    goto L_55752;
L_55733:
    X86_TICK(c, 11);
    // 055733  mov eax, dword ptr [edi]
    X86_AT(c, 0x55733u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 055735  and eax, eax
    X86_AT(c, 0x55735u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 055737  je 0x55746
    X86_AT(c, 0x55737u);
    if (x86_cc(c, 4)) { goto L_55746; }
    X86_TICK(c, 11);
    // 055739  cmp edi, dword ptr [eax + 4]
    X86_AT(c, 0x55739u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 0, 4);
    // 05573c  je 0x55746
    X86_AT(c, 0x5573cu);
    if (x86_cc(c, 4)) { goto L_55746; }
    X86_TICK(c, 11);
    // 05573e  push edi
    X86_AT(c, 0x5573eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05573f  push 1
    X86_AT(c, 0x5573fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 055741  call 0x56b10
    X86_AT(c, 0x55741u);
    push32(c, 0x55746u); x86_call_known(c, 0x56b10u, f_00056b10); X86_RET(c, 0x55746u);
L_55746:
    X86_TICK(c, 13);
    // 055746  push edi
    X86_AT(c, 0x55746u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055747  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x55747u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 05574a  call dword ptr [ebp + 8]
    X86_AT(c, 0x5574au);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x5574du); x86_call(c, t); X86_RET(c, 0x5574du); }
    X86_TICK(c, 6);
    // 05574d  mov esi, edi
    X86_AT(c, 0x5574du);
    c.r[6] = c.r[7];
    // 05574f  mov edi, dword ptr [ebx + 0x10]
    X86_AT(c, 0x5574fu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
L_55752:
    X86_TICK(c, 7);
    // 055752  and edi, edi
    X86_AT(c, 0x55752u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 055754  jne 0x55710
    X86_AT(c, 0x55754u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x55710u); goto L_55710; }
    X86_TICK(c, 28);
    // 055756  pop edi
    X86_AT(c, 0x55756u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 055757  pop esi
    X86_AT(c, 0x55757u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 055758  pop ebx
    X86_AT(c, 0x55758u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 055759  leave 
    X86_AT(c, 0x55759u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05575a  ret 8
    X86_AT(c, 0x5575au);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x55700u, "ran off the end of a function");
}
void f_00055774(X86Cpu& c) {
    X86_TICK(c, 16);
    // 055774  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x55774u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 055778  cmp dword ptr [ecx + 8], 0x18
    X86_AT(c, 0x55778u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u))), 0x18u, 0, 4);
    // 05577c  jb 0x557a4
    X86_AT(c, 0x5577cu);
    if (x86_cc(c, 2)) { goto L_557a4; }
    X86_TICK(c, 12);
    // 05577e  cmp dword ptr [ecx + 0x14], 0
    X86_AT(c, 0x5577eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u))), 0x0u, 0, 4);
    // 055782  jne 0x5578e
    X86_AT(c, 0x55782u);
    if (x86_cc(c, 5)) { goto L_5578e; }
    X86_TICK(c, 13);
    // 055784  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0x55784u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 055787  mov dword ptr [0x4b858], eax
    X86_AT(c, 0x55787u);
    wr32((c.sbase[3] + (uint32_t)(0x4B858u)), c.r[0]);
    // 05578c  jmp 0x55797
    X86_AT(c, 0x5578cu);
    goto L_55797;
L_5578e:
    X86_TICK(c, 10);
    // 05578e  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0x5578eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 055791  mov edx, dword ptr [ecx + 0x14]
    X86_AT(c, 0x55791u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)));
    // 055794  mov dword ptr [edx + 0x10], eax
    X86_AT(c, 0x55794u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)), c.r[0]);
L_55797:
    X86_TICK(c, 11);
    // 055797  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0x55797u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 05579a  and eax, eax
    X86_AT(c, 0x5579au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 05579c  je 0x557a4
    X86_AT(c, 0x5579cu);
    if (x86_cc(c, 4)) { goto L_557a4; }
    X86_TICK(c, 6);
    // 05579e  mov edx, dword ptr [ecx + 0x14]
    X86_AT(c, 0x5579eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)));
    // 0557a1  mov dword ptr [eax + 0x14], edx
    X86_AT(c, 0x557a1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)), c.r[2]);
L_557a4:
    X86_TICK(c, 10);
    // 0557a4  ret 4
    X86_AT(c, 0x557a4u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x55774u, "ran off the end of a function");
}
void f_000557c8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0557c8  push ebp
    X86_AT(c, 0x557c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0557c9  mov ebp, esp
    X86_AT(c, 0x557c9u);
    c.r[5] = c.r[4];
    // 0557cb  push esi
    X86_AT(c, 0x557cbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0557cc  push edi
    X86_AT(c, 0x557ccu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0557cd  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x557cdu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0557d0  mov esi, dword ptr [edi]
    X86_AT(c, 0x557d0u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0557d2  and esi, esi
    X86_AT(c, 0x557d2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0557d4  je 0x557fd
    X86_AT(c, 0x557d4u);
    if (x86_cc(c, 4)) { goto L_557fd; }
    X86_TICK(c, 12);
    // 0557d6  cmp byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0x557d6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu))), 0x55u, 0, 1);
    // 0557da  jne 0x557fd
    X86_AT(c, 0x557dau);
    if (x86_cc(c, 5)) { goto L_557fd; }
    X86_TICK(c, 11);
    // 0557dc  cmp esi, dword ptr [0x4b860]
    X86_AT(c, 0x557dcu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x4B860u))), 0, 4);
    // 0557e2  jne 0x557ea
    X86_AT(c, 0x557e2u);
    if (x86_cc(c, 5)) { goto L_557ea; }
    X86_TICK(c, 2);
    // 0557e4  mov dword ptr [0x4b860], edi
    X86_AT(c, 0x557e4u);
    wr32((c.sbase[3] + (uint32_t)(0x4B860u)), c.r[7]);
L_557ea:
    X86_TICK(c, 9);
    // 0557ea  push esi
    X86_AT(c, 0x557eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0557eb  call 0x55774
    X86_AT(c, 0x557ebu);
    push32(c, 0x557f0u); x86_call_known(c, 0x55774u, f_00055774); X86_RET(c, 0x557f0u);
    X86_TICK(c, 27);
    // 0557f0  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x557f0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0557f3  add dword ptr [edi + 8], eax
    X86_AT(c, 0x557f3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0557f6  mov eax, dword ptr [esi]
    X86_AT(c, 0x557f6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0557f8  mov dword ptr [edi], eax
    X86_AT(c, 0x557f8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0557fa  xchg esi, eax
    X86_AT(c, 0x557fau);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0557fb  jmp 0x55830
    X86_AT(c, 0x557fbu);
    goto L_55830;
L_557fd:
    X86_TICK(c, 11);
    // 0557fd  mov eax, dword ptr [edi + 4]
    X86_AT(c, 0x557fdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 055800  and eax, eax
    X86_AT(c, 0x55800u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 055802  je 0x5583b
    X86_AT(c, 0x55802u);
    if (x86_cc(c, 4)) { goto L_5583b; }
    X86_TICK(c, 15);
    // 055804  xchg esi, eax
    X86_AT(c, 0x55804u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 055805  cmp byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0x55805u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu))), 0x55u, 0, 1);
    // 055809  jne 0x5583b
    X86_AT(c, 0x55809u);
    if (x86_cc(c, 5)) { goto L_5583b; }
    X86_TICK(c, 11);
    // 05580b  cmp edi, dword ptr [0x4b860]
    X86_AT(c, 0x5580bu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x4B860u))), 0, 4);
    // 055811  jne 0x55819
    X86_AT(c, 0x55811u);
    if (x86_cc(c, 5)) { goto L_55819; }
    X86_TICK(c, 2);
    // 055813  mov dword ptr [0x4b860], esi
    X86_AT(c, 0x55813u);
    wr32((c.sbase[3] + (uint32_t)(0x4B860u)), c.r[6]);
L_55819:
    X86_TICK(c, 9);
    // 055819  push esi
    X86_AT(c, 0x55819u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 05581a  call 0x55774
    X86_AT(c, 0x5581au);
    push32(c, 0x5581fu); x86_call_known(c, 0x55774u, f_00055774); X86_RET(c, 0x5581fu);
    X86_TICK(c, 29);
    // 05581f  mov eax, dword ptr [edi + 8]
    X86_AT(c, 0x5581fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 055822  add dword ptr [esi + 8], eax
    X86_AT(c, 0x55822u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 055825  mov eax, dword ptr [edi]
    X86_AT(c, 0x55825u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 055827  mov dword ptr [esi], eax
    X86_AT(c, 0x55827u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 055829  mov edi, esi
    X86_AT(c, 0x55829u);
    c.r[7] = c.r[6];
    // 05582b  xchg esi, eax
    X86_AT(c, 0x5582bu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 05582c  and esi, esi
    X86_AT(c, 0x5582cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 05582e  je 0x55833
    X86_AT(c, 0x5582eu);
    if (x86_cc(c, 4)) { goto L_55833; }
L_55830:
    X86_TICK(c, 2);
    // 055830  mov dword ptr [esi + 4], edi
    X86_AT(c, 0x55830u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[7]);
L_55833:
    X86_TICK(c, 9);
    // 055833  push edi
    X86_AT(c, 0x55833u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055834  call 0x557c8
    X86_AT(c, 0x55834u);
    push32(c, 0x55839u); x86_call_known(c, 0x557c8u, f_000557c8); X86_RET(c, 0x55839u);
    X86_TICK(c, 7);
    // 055839  jmp 0x5585e
    X86_AT(c, 0x55839u);
    goto L_5585e;
L_5583b:
    X86_TICK(c, 12);
    // 05583b  cmp dword ptr [edi + 8], 0x18
    X86_AT(c, 0x5583bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0x18u, 0, 4);
    // 05583f  jb 0x5585e
    X86_AT(c, 0x5583fu);
    if (x86_cc(c, 2)) { goto L_5585e; }
    X86_TICK(c, 13);
    // 055841  mov esi, dword ptr [0x4b858]
    X86_AT(c, 0x55841u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x4B858u)));
    // 055847  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0x55847u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 05584a  and esi, esi
    X86_AT(c, 0x5584au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 05584c  je 0x55851
    X86_AT(c, 0x5584cu);
    if (x86_cc(c, 4)) { goto L_55851; }
    X86_TICK(c, 2);
    // 05584e  mov dword ptr [esi + 0x14], edi
    X86_AT(c, 0x5584eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), c.r[7]);
L_55851:
    X86_TICK(c, 4);
    // 055851  mov dword ptr [edi + 0x14], 0
    X86_AT(c, 0x55851u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), 0x0u);
    // 055858  mov dword ptr [0x4b858], edi
    X86_AT(c, 0x55858u);
    wr32((c.sbase[3] + (uint32_t)(0x4B858u)), c.r[7]);
L_5585e:
    X86_TICK(c, 24);
    // 05585e  pop edi
    X86_AT(c, 0x5585eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05585f  pop esi
    X86_AT(c, 0x5585fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 055860  leave 
    X86_AT(c, 0x55860u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055861  ret 4
    X86_AT(c, 0x55861u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x557c8u, "ran off the end of a function");
}
void f_00055878(X86Cpu& c) {
    X86_TICK(c, 23);
    // 055878  enter 4, 0
    X86_AT(c, 0x55878u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 05587c  push ebx
    X86_AT(c, 0x5587cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 05587d  push esi
    X86_AT(c, 0x5587du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 05587e  push edi
    X86_AT(c, 0x5587eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05587f  push ebp
    X86_AT(c, 0x5587fu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055880  push 0x558a8
    X86_AT(c, 0x55880u);
    { uint32_t v = 0x558A8u; push32(c, v); }
    // 055885  call 0x55700
    X86_AT(c, 0x55885u);
    push32(c, 0x5588au); x86_call_known(c, 0x55700u, f_00055700); X86_RET(c, 0x5588au);
    X86_TICK(c, 36);
    // 05588a  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x5588au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 055891  lea esp, [ebp - 0x10]
    X86_AT(c, 0x55891u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 055894  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55894u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055897  pop edi
    X86_AT(c, 0x55897u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 055898  pop esi
    X86_AT(c, 0x55898u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 055899  pop ebx
    X86_AT(c, 0x55899u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 05589a  leave 
    X86_AT(c, 0x5589au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05589b  ret 4
    X86_AT(c, 0x5589bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x55878u, "ran off the end of a function");
}
void f_000558a8(X86Cpu& c) {
    goto L_558a8;
L_55891:
    X86_TICK(c, 34);
    // 055891  lea esp, [ebp - 0x10]
    X86_AT(c, 0x55891u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 055894  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55894u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055897  pop edi
    X86_AT(c, 0x55897u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 055898  pop esi
    X86_AT(c, 0x55898u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 055899  pop ebx
    X86_AT(c, 0x55899u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 05589a  leave 
    X86_AT(c, 0x5589au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05589b  ret 4
    X86_AT(c, 0x5589bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
L_558a8:
    X86_TICK(c, 29);
    // 0558a8  push ebp
    X86_AT(c, 0x558a8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0558a9  mov ebp, esp
    X86_AT(c, 0x558a9u);
    c.r[5] = c.r[4];
    // 0558ab  push ecx
    X86_AT(c, 0x558abu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0558ac  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x558acu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0558af  mov eax, dword ptr [ecx + 8]
    X86_AT(c, 0x558afu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u)));
    // 0558b2  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x558b2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0558b5  cmp eax, dword ptr [edx + 8]
    X86_AT(c, 0x558b5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u))), 0, 4);
    // 0558b8  jb 0x558c1
    X86_AT(c, 0x558b8u);
    if (x86_cc(c, 2)) { goto L_558c1; }
    X86_TICK(c, 11);
    // 0558ba  mov dword ptr [edx - 4], ecx
    X86_AT(c, 0x558bau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFFCu)), c.r[1]);
    // 0558bd  mov ebp, edx
    X86_AT(c, 0x558bdu);
    c.r[5] = c.r[2];
    // 0558bf  jmp 0x55891
    X86_AT(c, 0x558bfu);
    X86_POLL(c, 0x55891u); goto L_55891;
L_558c1:
    X86_TICK(c, 16);
    // 0558c1  leave 
    X86_AT(c, 0x558c1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0558c2  ret 4
    X86_AT(c, 0x558c2u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x558a8u, "ran off the end of a function");
}
void f_000558d0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0558d0  mov eax, dword ptr [0x4b864]
    X86_AT(c, 0x558d0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B864u)));
    // 0558d5  add eax, 0x200
    X86_AT(c, 0x558d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x200u, 0, 4); }
    // 0558da  push eax
    X86_AT(c, 0x558dau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0558db  mov eax, dword ptr [0x4b864]
    X86_AT(c, 0x558dbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B864u)));
    // 0558e0  add eax, 0x100
    X86_AT(c, 0x558e0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x100u, 0, 4); }
    // 0558e5  push eax
    X86_AT(c, 0x558e5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0558e6  call 0x545d9
    X86_AT(c, 0x558e6u);
    push32(c, 0x558ebu); x86_call_known(c, 0x545d9u, f_000545d9); X86_RET(c, 0x558ebu);
    X86_TICK(c, 10);
    // 0558eb  ret 
    X86_AT(c, 0x558ebu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x558d0u, "ran off the end of a function");
}
void f_000558f8(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0558f8  enter 4, 0
    X86_AT(c, 0x558f8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0558fc  push ebx
    X86_AT(c, 0x558fcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0558fd  push esi
    X86_AT(c, 0x558fdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0558fe  push edi
    X86_AT(c, 0x558feu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0558ff  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x558ffu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 055902  cmp dword ptr [0x4b864], 0
    X86_AT(c, 0x55902u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x4B864u))), 0x0u, 0, 4);
    // 055909  jne 0x55915
    X86_AT(c, 0x55909u);
    if (x86_cc(c, 5)) { goto L_55915; }
    X86_TICK(c, 7);
    // 05590b  call 0x5457e
    X86_AT(c, 0x5590bu);
    push32(c, 0x55910u); x86_call_known(c, 0x5457eu, f_0005457e); X86_RET(c, 0x55910u);
    X86_TICK(c, 2);
    // 055910  mov dword ptr [0x4b864], eax
    X86_AT(c, 0x55910u);
    wr32((c.sbase[3] + (uint32_t)(0x4B864u)), c.r[0]);
L_55915:
    X86_TICK(c, 7);
    // 055915  call 0x5458a
    X86_AT(c, 0x55915u);
    push32(c, 0x5591au); x86_call_known(c, 0x5458au, f_0005458a); X86_RET(c, 0x5591au);
    X86_TICK(c, 16);
    // 05591a  xchg esi, eax
    X86_AT(c, 0x5591au);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 05591b  sub esi, dword ptr [0x4b864]
    X86_AT(c, 0x5591bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0x4B864u))), 0, 4); }
    // 055921  cmp esi, edi
    X86_AT(c, 0x55921u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 055923  jb 0x55930
    X86_AT(c, 0x55923u);
    if (x86_cc(c, 2)) { goto L_55930; }
    X86_TICK(c, 11);
    // 055925  mov eax, esi
    X86_AT(c, 0x55925u);
    c.r[0] = c.r[6];
    // 055927  sub eax, edi
    X86_AT(c, 0x55927u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 055929  cmp eax, 0x200
    X86_AT(c, 0x55929u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 05592e  jge 0x55975
    X86_AT(c, 0x5592eu);
    if (x86_cc(c, 13)) { goto L_55975; }
L_55930:
    X86_TICK(c, 7);
    // 055930  cmp esi, edi
    X86_AT(c, 0x55930u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 055932  jae 0x5594b
    X86_AT(c, 0x55932u);
    if (x86_cc(c, 3)) { goto L_5594b; }
    X86_TICK(c, 63);
    // 055934  mov eax, edi
    X86_AT(c, 0x55934u);
    c.r[0] = c.r[7];
    // 055936  sub eax, esi
    X86_AT(c, 0x55936u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 055938  add eax, 0xfff
    X86_AT(c, 0x55938u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xFFFu, 0, 4); }
    // 05593d  cdq 
    X86_AT(c, 0x5593du);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 05593e  mov ecx, 0x1000
    X86_AT(c, 0x5593eu);
    c.r[1] = 0x1000u;
    // 055943  idiv ecx
    X86_AT(c, 0x55943u);
    x86_idiv(c, c.r[1], 4, 0x55943u);
    // 055945  xchg ebx, eax
    X86_AT(c, 0x55945u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 055946  shl ebx, 0xc
    X86_AT(c, 0x55946u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[3] = r; }
    // 055949  jmp 0x55950
    X86_AT(c, 0x55949u);
    goto L_55950;
L_5594b:
    X86_TICK(c, 2);
    // 05594b  mov ebx, 0x1000
    X86_AT(c, 0x5594bu);
    c.r[3] = 0x1000u;
L_55950:
    X86_TICK(c, 9);
    // 055950  push ebx
    X86_AT(c, 0x55950u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 055951  call 0x54590
    X86_AT(c, 0x55951u);
    push32(c, 0x55956u); x86_call_known(c, 0x54590u, f_00054590); X86_RET(c, 0x55956u);
    X86_TICK(c, 7);
    // 055956  call 0x5458a
    X86_AT(c, 0x55956u);
    push32(c, 0x5595bu); x86_call_known(c, 0x5458au, f_0005458a); X86_RET(c, 0x5595bu);
    X86_TICK(c, 16);
    // 05595b  xchg esi, eax
    X86_AT(c, 0x5595bu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 05595c  sub esi, dword ptr [0x4b864]
    X86_AT(c, 0x5595cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0x4B864u))), 0, 4); }
    // 055962  cmp esi, edi
    X86_AT(c, 0x55962u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 055964  jb 0x55971
    X86_AT(c, 0x55964u);
    if (x86_cc(c, 2)) { goto L_55971; }
    X86_TICK(c, 11);
    // 055966  mov eax, esi
    X86_AT(c, 0x55966u);
    c.r[0] = c.r[6];
    // 055968  sub eax, edi
    X86_AT(c, 0x55968u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 05596a  cmp eax, 0x200
    X86_AT(c, 0x5596au);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 05596f  jge 0x55975
    X86_AT(c, 0x5596fu);
    if (x86_cc(c, 13)) { goto L_55975; }
L_55971:
    X86_TICK(c, 9);
    // 055971  sub eax, eax
    X86_AT(c, 0x55971u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 055973  jmp 0x5598a
    X86_AT(c, 0x55973u);
    goto L_5598a;
L_55975:
    X86_TICK(c, 20);
    // 055975  mov ebx, dword ptr [0x4b864]
    X86_AT(c, 0x55975u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x4B864u)));
    // 05597b  mov dword ptr [ebp - 4], ebx
    X86_AT(c, 0x5597bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[3]);
    // 05597e  add dword ptr [0x4b864], edi
    X86_AT(c, 0x5597eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B864u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 055984  call 0x558d0
    X86_AT(c, 0x55984u);
    push32(c, 0x55989u); x86_call_known(c, 0x558d0u, f_000558d0); X86_RET(c, 0x55989u);
    X86_TICK(c, 3);
    // 055989  xchg ebx, eax
    X86_AT(c, 0x55989u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
L_5598a:
    X86_TICK(c, 28);
    // 05598a  pop edi
    X86_AT(c, 0x5598au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05598b  pop esi
    X86_AT(c, 0x5598bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 05598c  pop ebx
    X86_AT(c, 0x5598cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 05598d  leave 
    X86_AT(c, 0x5598du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05598e  ret 4
    X86_AT(c, 0x5598eu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x558f8u, "ran off the end of a function");
}
void f_000559a0(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0559a0  push ebp
    X86_AT(c, 0x559a0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0559a1  mov ebp, esp
    X86_AT(c, 0x559a1u);
    c.r[5] = c.r[4];
    // 0559a3  push esi
    X86_AT(c, 0x559a3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0559a4  push edi
    X86_AT(c, 0x559a4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0559a5  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x559a5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0559a8  mov eax, 0x18
    X86_AT(c, 0x559a8u);
    c.r[0] = 0x18u;
    // 0559ad  cmp eax, edi
    X86_AT(c, 0x559adu);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0559af  jb 0x559b2
    X86_AT(c, 0x559afu);
    if (x86_cc(c, 2)) { goto L_559b2; }
    X86_TICK(c, 3);
    // 0559b1  xchg edi, eax
    X86_AT(c, 0x559b1u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_559b2:
    X86_TICK(c, 7);
    // 0559b2  cmp edi, 0x7fffffff
    X86_AT(c, 0x559b2u);
    (void)x86_sub(c, c.r[7], 0x7FFFFFFFu, 0, 4);
    // 0559b8  ja 0x559fd
    X86_AT(c, 0x559b8u);
    if (x86_cc(c, 7)) { goto L_559fd; }
    X86_TICK(c, 9);
    // 0559ba  push edi
    X86_AT(c, 0x559bau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0559bb  call 0x558f8
    X86_AT(c, 0x559bbu);
    push32(c, 0x559c0u); x86_call_known(c, 0x558f8u, f_000558f8); X86_RET(c, 0x559c0u);
    X86_TICK(c, 10);
    // 0559c0  xchg esi, eax
    X86_AT(c, 0x559c0u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0559c1  and esi, esi
    X86_AT(c, 0x559c1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0559c3  je 0x559fd
    X86_AT(c, 0x559c3u);
    if (x86_cc(c, 4)) { goto L_559fd; }
    X86_TICK(c, 23);
    // 0559c5  sub eax, eax
    X86_AT(c, 0x559c5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0559c7  mov dword ptr [esi], eax
    X86_AT(c, 0x559c7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0559c9  mov edx, dword ptr [0x4b860]
    X86_AT(c, 0x559c9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B860u)));
    // 0559cf  mov dword ptr [esi + 4], edx
    X86_AT(c, 0x559cfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[2]);
    // 0559d2  mov byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0x559d2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu)), 0x55u);
    // 0559d6  mov dword ptr [esi + 8], edi
    X86_AT(c, 0x559d6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[7]);
    // 0559d9  mov byte ptr [esi + 0xe], al
    X86_AT(c, 0x559d9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu)), g8(c, 0));
    // 0559dc  cmp eax, edx
    X86_AT(c, 0x559dcu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0559de  je 0x559e2
    X86_AT(c, 0x559deu);
    if (x86_cc(c, 4)) { goto L_559e2; }
    X86_TICK(c, 2);
    // 0559e0  mov dword ptr [edx], esi
    X86_AT(c, 0x559e0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[6]);
L_559e2:
    X86_TICK(c, 14);
    // 0559e2  mov dword ptr [0x4b860], esi
    X86_AT(c, 0x559e2u);
    wr32((c.sbase[3] + (uint32_t)(0x4B860u)), c.r[6]);
    // 0559e8  cmp dword ptr [0x4b85c], 0
    X86_AT(c, 0x559e8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x4B85Cu))), 0x0u, 0, 4);
    // 0559ef  jne 0x559f7
    X86_AT(c, 0x559efu);
    if (x86_cc(c, 5)) { goto L_559f7; }
    X86_TICK(c, 2);
    // 0559f1  mov dword ptr [0x4b85c], esi
    X86_AT(c, 0x559f1u);
    wr32((c.sbase[3] + (uint32_t)(0x4B85Cu)), c.r[6]);
L_559f7:
    X86_TICK(c, 9);
    // 0559f7  push esi
    X86_AT(c, 0x559f7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0559f8  call 0x557c8
    X86_AT(c, 0x559f8u);
    push32(c, 0x559fdu); x86_call_known(c, 0x557c8u, f_000557c8); X86_RET(c, 0x559fdu);
L_559fd:
    X86_TICK(c, 24);
    // 0559fd  pop edi
    X86_AT(c, 0x559fdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0559fe  pop esi
    X86_AT(c, 0x559feu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0559ff  leave 
    X86_AT(c, 0x559ffu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055a00  ret 4
    X86_AT(c, 0x55a00u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x559a0u, "ran off the end of a function");
}
void f_00055a0c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 055a0c  enter 8, 0
    X86_AT(c, 0x55a0cu);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 055a10  push ebx
    X86_AT(c, 0x55a10u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 055a11  push esi
    X86_AT(c, 0x55a11u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 055a12  push edi
    X86_AT(c, 0x55a12u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055a13  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x55a13u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 055a16  cmp byte ptr [0x4b850], 0
    X86_AT(c, 0x55a16u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B850u))), 0x0u, 0, 1);
    // 055a1d  je 0x55a24
    X86_AT(c, 0x55a1du);
    if (x86_cc(c, 4)) { goto L_55a24; }
    X86_TICK(c, 7);
    // 055a1f  call 0x55c64
    X86_AT(c, 0x55a1fu);
    push32(c, 0x55a24u); x86_call_known(c, 0x55c64u, f_00055c64); X86_RET(c, 0x55a24u);
L_55a24:
    X86_TICK(c, 7);
    // 055a24  cmp edi, 0x7fffffec
    X86_AT(c, 0x55a24u);
    (void)x86_sub(c, c.r[7], 0x7FFFFFECu, 0, 4);
    // 055a2a  jbe 0x55a33
    X86_AT(c, 0x55a2au);
    if (x86_cc(c, 6)) { goto L_55a33; }
    X86_TICK(c, 9);
    // 055a2c  sub eax, eax
    X86_AT(c, 0x55a2cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 055a2e  jmp 0x55b0b
    X86_AT(c, 0x55a2eu);
    goto L_55b0b;
L_55a33:
    X86_TICK(c, 10);
    // 055a33  mov eax, edi
    X86_AT(c, 0x55a33u);
    c.r[0] = c.r[7];
    // 055a35  rcr eax, 1
    X86_AT(c, 0x55a35u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 055a37  jae 0x55a3a
    X86_AT(c, 0x55a37u);
    if (x86_cc(c, 3)) { goto L_55a3a; }
    X86_TICK(c, 2);
    // 055a39  inc edi
    X86_AT(c, 0x55a39u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_55a3a:
    X86_TICK(c, 7);
    // 055a3a  test di, 3
    X86_AT(c, 0x55a3au);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & 0x3u, 2);
    // 055a3f  je 0x55a44
    X86_AT(c, 0x55a3fu);
    if (x86_cc(c, 4)) { goto L_55a44; }
    X86_TICK(c, 2);
    // 055a41  add edi, 2
    X86_AT(c, 0x55a41u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
L_55a44:
    X86_TICK(c, 11);
    // 055a44  add edi, 0x10
    X86_AT(c, 0x55a44u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x10u, 0, 4); }
    // 055a47  push edi
    X86_AT(c, 0x55a47u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055a48  call 0x55878
    X86_AT(c, 0x55a48u);
    push32(c, 0x55a4du); x86_call_known(c, 0x55878u, f_00055878); X86_RET(c, 0x55a4du);
    X86_TICK(c, 10);
    // 055a4d  xchg esi, eax
    X86_AT(c, 0x55a4du);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 055a4e  and esi, esi
    X86_AT(c, 0x55a4eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 055a50  jne 0x55a5f
    X86_AT(c, 0x55a50u);
    if (x86_cc(c, 5)) { goto L_55a5f; }
    X86_TICK(c, 9);
    // 055a52  push edi
    X86_AT(c, 0x55a52u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055a53  call 0x559a0
    X86_AT(c, 0x55a53u);
    push32(c, 0x55a58u); x86_call_known(c, 0x559a0u, f_000559a0); X86_RET(c, 0x55a58u);
    X86_TICK(c, 9);
    // 055a58  push edi
    X86_AT(c, 0x55a58u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055a59  call 0x55878
    X86_AT(c, 0x55a59u);
    push32(c, 0x55a5eu); x86_call_known(c, 0x55878u, f_00055878); X86_RET(c, 0x55a5eu);
    X86_TICK(c, 3);
    // 055a5e  xchg esi, eax
    X86_AT(c, 0x55a5eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_55a5f:
    X86_TICK(c, 7);
    // 055a5f  and esi, esi
    X86_AT(c, 0x55a5fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 055a61  je 0x55af3
    X86_AT(c, 0x55a61u);
    if (x86_cc(c, 4)) { goto L_55af3; }
    X86_TICK(c, 9);
    // 055a67  push esi
    X86_AT(c, 0x55a67u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 055a68  call 0x55774
    X86_AT(c, 0x55a68u);
    push32(c, 0x55a6du); x86_call_known(c, 0x55774u, f_00055774); X86_RET(c, 0x55a6du);
    X86_TICK(c, 15);
    // 055a6d  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x55a6du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 055a70  sub eax, edi
    X86_AT(c, 0x55a70u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 055a72  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x55a72u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 055a75  cmp eax, 0x10
    X86_AT(c, 0x55a75u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 055a78  ja 0x55a84
    X86_AT(c, 0x55a78u);
    if (x86_cc(c, 7)) { goto L_55a84; }
    X86_TICK(c, 6);
    // 055a7a  mov edi, dword ptr [esi + 8]
    X86_AT(c, 0x55a7au);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 055a7d  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0x55a7du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_55a84:
    X86_TICK(c, 37);
    // 055a84  mov dword ptr [esi + 8], edi
    X86_AT(c, 0x55a84u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[7]);
    // 055a87  lea eax, [edi - 0x10]
    X86_AT(c, 0x55a87u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFF0u);
    // 055a8a  mov dword ptr [0x4b868], eax
    X86_AT(c, 0x55a8au);
    wr32((c.sbase[3] + (uint32_t)(0x4B868u)), c.r[0]);
    // 055a8f  mov byte ptr [esi + 0xf], 0x44
    X86_AT(c, 0x55a8fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu)), 0x44u);
    // 055a93  mov ax, word ptr [0x4b884]
    X86_AT(c, 0x55a93u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4B884u))));
    // 055a99  mov word ptr [esi + 0xc], ax
    X86_AT(c, 0x55a99u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[0] & 0xFFFFu));
    // 055a9d  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x55a9du);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 055aa0  mov byte ptr [esi + 0xe], al
    X86_AT(c, 0x55aa0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu)), g8(c, 0));
    // 055aa3  lea eax, [esi + 0x10]
    X86_AT(c, 0x55aa3u);
    c.r[0] = (uint32_t)(c.r[6] + 0x10u);
    // 055aa6  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x55aa6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 055aa9  push eax
    X86_AT(c, 0x55aa9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 055aaa  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0x55aaau);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 055aad  call dword ptr [ebp + 0x10]
    X86_AT(c, 0x55aadu);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, 0x55ab0u); x86_call(c, t); X86_RET(c, 0x55ab0u); }
    X86_TICK(c, 11);
    // 055ab0  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x55ab0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 055ab3  and eax, eax
    X86_AT(c, 0x55ab3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 055ab5  jbe 0x55afa
    X86_AT(c, 0x55ab5u);
    if (x86_cc(c, 6)) { goto L_55afa; }
    X86_TICK(c, 37);
    // 055ab7  lea ebx, [edi + esi*1]
    X86_AT(c, 0x55ab7u);
    c.r[3] = (uint32_t)(c.r[7] + c.r[6]);
    // 055aba  mov edx, dword ptr [esi]
    X86_AT(c, 0x55abau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 055abc  mov dword ptr [ebx], edx
    X86_AT(c, 0x55abcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 055abe  mov dword ptr [esi], ebx
    X86_AT(c, 0x55abeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[3]);
    // 055ac0  mov dword ptr [ebx + 4], esi
    X86_AT(c, 0x55ac0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[6]);
    // 055ac3  mov dword ptr [ebx + 8], eax
    X86_AT(c, 0x55ac3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[0]);
    // 055ac6  mov byte ptr [ebx + 0xf], 0x55
    X86_AT(c, 0x55ac6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFu)), 0x55u);
    // 055aca  mov byte ptr [ebx + 0xe], 0
    X86_AT(c, 0x55acau);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu)), 0x0u);
    // 055ace  mov dx, word ptr [0x4b884]
    X86_AT(c, 0x55aceu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0x4B884u))));
    // 055ad5  mov word ptr [ebx + 0xc], dx
    X86_AT(c, 0x55ad5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), (c.r[2] & 0xFFFFu));
    // 055ad9  mov dword ptr [ebx + eax*1 + 4], ebx
    X86_AT(c, 0x55ad9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x4u)), c.r[3]);
    // 055add  cmp esi, dword ptr [0x4b860]
    X86_AT(c, 0x55addu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x4B860u))), 0, 4);
    // 055ae3  jne 0x55aeb
    X86_AT(c, 0x55ae3u);
    if (x86_cc(c, 5)) { goto L_55aeb; }
    X86_TICK(c, 2);
    // 055ae5  mov dword ptr [0x4b860], ebx
    X86_AT(c, 0x55ae5u);
    wr32((c.sbase[3] + (uint32_t)(0x4B860u)), c.r[3]);
L_55aeb:
    X86_TICK(c, 9);
    // 055aeb  push ebx
    X86_AT(c, 0x55aebu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 055aec  call 0x557c8
    X86_AT(c, 0x55aecu);
    push32(c, 0x55af1u); x86_call_known(c, 0x557c8u, f_000557c8); X86_RET(c, 0x55af1u);
    X86_TICK(c, 7);
    // 055af1  jmp 0x55afa
    X86_AT(c, 0x55af1u);
    goto L_55afa;
L_55af3:
    X86_TICK(c, 2);
    // 055af3  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x55af3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_55afa:
    X86_TICK(c, 12);
    // 055afa  cmp byte ptr [0x4b850], 0
    X86_AT(c, 0x55afau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B850u))), 0x0u, 0, 1);
    // 055b01  je 0x55b08
    X86_AT(c, 0x55b01u);
    if (x86_cc(c, 4)) { goto L_55b08; }
    X86_TICK(c, 7);
    // 055b03  call 0x55c64
    X86_AT(c, 0x55b03u);
    push32(c, 0x55b08u); x86_call_known(c, 0x55c64u, f_00055c64); X86_RET(c, 0x55b08u);
L_55b08:
    X86_TICK(c, 4);
    // 055b08  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55b08u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_55b0b:
    X86_TICK(c, 28);
    // 055b0b  pop edi
    X86_AT(c, 0x55b0bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 055b0c  pop esi
    X86_AT(c, 0x55b0cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 055b0d  pop ebx
    X86_AT(c, 0x55b0du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 055b0e  leave 
    X86_AT(c, 0x55b0eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055b0f  ret 0x10
    X86_AT(c, 0x55b0fu);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0x55a0cu, "ran off the end of a function");
}
void f_00055b14(X86Cpu& c) {
    X86_TICK(c, 22);
    // 055b14  push ebp
    X86_AT(c, 0x55b14u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055b15  mov ebp, esp
    X86_AT(c, 0x55b15u);
    c.r[5] = c.r[4];
    // 055b17  push ecx
    X86_AT(c, 0x55b17u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 055b18  leave 
    X86_AT(c, 0x55b18u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055b19  ret 4
    X86_AT(c, 0x55b19u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x55b14u, "ran off the end of a function");
}
void f_00055b24(X86Cpu& c) {
    X86_TICK(c, 29);
    // 055b24  enter 4, 0
    X86_AT(c, 0x55b24u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 055b28  push edi
    X86_AT(c, 0x55b28u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055b29  push ebp
    X86_AT(c, 0x55b29u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055b2a  push 0x55b14
    X86_AT(c, 0x55b2au);
    { uint32_t v = 0x55B14u; push32(c, v); }
    // 055b2f  push dword ptr [ebp + 8]
    X86_AT(c, 0x55b2fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 055b32  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x55b32u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 055b35  call 0x55a0c
    X86_AT(c, 0x55b35u);
    push32(c, 0x55b3au); x86_call_known(c, 0x55a0cu, f_00055a0c); X86_RET(c, 0x55b3au);
    X86_TICK(c, 14);
    // 055b3a  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x55b3au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 055b3d  cmp byte ptr [0x4b852], 0
    X86_AT(c, 0x55b3du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B852u))), 0x0u, 0, 1);
    // 055b44  je 0x55b60
    X86_AT(c, 0x55b44u);
    if (x86_cc(c, 4)) { goto L_55b60; }
    X86_TICK(c, 7);
    // 055b46  and eax, eax
    X86_AT(c, 0x55b46u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 055b48  je 0x55b60
    X86_AT(c, 0x55b48u);
    if (x86_cc(c, 4)) { goto L_55b60; }
    X86_TICK(c, 11);
    // 055b4a  mov edx, dword ptr [0x4b868]
    X86_AT(c, 0x55b4au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B868u)));
    // 055b50  and edx, edx
    X86_AT(c, 0x55b50u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 055b52  jbe 0x55b60
    X86_AT(c, 0x55b52u);
    if (x86_cc(c, 6)) { goto L_55b60; }
    X86_TICK(c, 17);
    // 055b54  mov al, byte ptr [0x4b851]
    X86_AT(c, 0x55b54u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B851u))));
    // 055b59  mov ecx, edx
    X86_AT(c, 0x55b59u);
    c.r[1] = c.r[2];
    // 055b5b  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x55b5bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055b5e  stosb byte ptr es:[edi], al
    X86_AT(c, 0x55b5eu);
    x86_string(c, 2, 1, 243, 4, 3);
L_55b60:
    X86_TICK(c, 24);
    // 055b60  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55b60u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055b63  pop edi
    X86_AT(c, 0x55b63u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 055b64  leave 
    X86_AT(c, 0x55b64u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055b65  ret 8
    X86_AT(c, 0x55b65u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x55b24u, "ran off the end of a function");
}
void f_00055b70(X86Cpu& c) {
    X86_TICK(c, 22);
    // 055b70  push ebp
    X86_AT(c, 0x55b70u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055b71  mov ebp, esp
    X86_AT(c, 0x55b71u);
    c.r[5] = c.r[4];
    // 055b73  push dword ptr [ebp + 8]
    X86_AT(c, 0x55b73u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 055b76  mov ax, word ptr [0x4b854]
    X86_AT(c, 0x55b76u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4B854u))));
    // 055b7c  push eax
    X86_AT(c, 0x55b7cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 055b7d  call 0x55b24
    X86_AT(c, 0x55b7du);
    push32(c, 0x55b82u); x86_call_known(c, 0x55b24u, f_00055b24); X86_RET(c, 0x55b82u);
    X86_TICK(c, 16);
    // 055b82  leave 
    X86_AT(c, 0x55b82u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055b83  ret 4
    X86_AT(c, 0x55b83u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x55b70u, "ran off the end of a function");
}
void f_00055b8c(X86Cpu& c) {
    X86_TICK(c, 26);
    // 055b8c  push ebp
    X86_AT(c, 0x55b8cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055b8d  mov ebp, esp
    X86_AT(c, 0x55b8du);
    c.r[5] = c.r[4];
    // 055b8f  push ecx
    X86_AT(c, 0x55b8fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 055b90  push ebx
    X86_AT(c, 0x55b90u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 055b91  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0x55b91u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055b94  push dword ptr [ebx + 8]
    X86_AT(c, 0x55b94u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 055b97  push 6
    X86_AT(c, 0x55b97u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 055b99  call 0x56b10
    X86_AT(c, 0x55b99u);
    push32(c, 0x55b9eu); x86_call_known(c, 0x56b10u, f_00056b10); X86_RET(c, 0x55b9eu);
    X86_TICK(c, 9);
    // 055b9e  mov ebp, ebx
    X86_AT(c, 0x55b9eu);
    c.r[5] = c.r[3];
    // 055ba0  jmp 0x55c44
    X86_AT(c, 0x55ba0u);
    goto L_55c44;
L_55c44:
    X86_TICK(c, 30);
    // 055c44  lea esp, [ebp - 0x10]
    X86_AT(c, 0x55c44u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 055c47  pop edi
    X86_AT(c, 0x55c47u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 055c48  pop esi
    X86_AT(c, 0x55c48u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 055c49  pop ebx
    X86_AT(c, 0x55c49u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 055c4a  leave 
    X86_AT(c, 0x55c4au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055c4b  ret 4
    X86_AT(c, 0x55c4bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x55b8cu, "ran off the end of a function");
}
void f_00055baa(X86Cpu& c) {
    X86_TICK(c, 24);
    // 055baa  enter 4, 0
    X86_AT(c, 0x55baau);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 055bae  push ebx
    X86_AT(c, 0x55baeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 055baf  push esi
    X86_AT(c, 0x55bafu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 055bb0  push edi
    X86_AT(c, 0x55bb0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055bb1  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0x55bb1u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 055bb5  je 0x55c47
    X86_AT(c, 0x55bb5u);
    if (x86_cc(c, 4)) { goto L_55c47; }
    X86_TICK(c, 25);
    // 055bbb  add dword ptr [ebp + 8], 0xfffffff0
    X86_AT(c, 0x55bbbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF0u, 0, 4)); }
    // 055bbf  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x55bbfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 055bc2  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x55bc2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 055bc5  cmp byte ptr [0x4b850], 0
    X86_AT(c, 0x55bc5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B850u))), 0x0u, 0, 1);
    // 055bcc  je 0x55bd3
    X86_AT(c, 0x55bccu);
    if (x86_cc(c, 4)) { goto L_55bd3; }
    X86_TICK(c, 7);
    // 055bce  call 0x55c64
    X86_AT(c, 0x55bceu);
    push32(c, 0x55bd3u); x86_call_known(c, 0x55c64u, f_00055c64); X86_RET(c, 0x55bd3u);
L_55bd3:
    X86_TICK(c, 16);
    // 055bd3  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55bd3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055bd6  cmp byte ptr [eax + 0xf], 0x44
    X86_AT(c, 0x55bd6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu))), 0x44u, 0, 1);
    // 055bda  jne 0x55bea
    X86_AT(c, 0x55bdau);
    if (x86_cc(c, 5)) { goto L_55bea; }
    X86_TICK(c, 15);
    // 055bdc  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55bdcu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055bdf  mov edx, dword ptr [eax]
    X86_AT(c, 0x55bdfu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 055be1  and edx, edx
    X86_AT(c, 0x55be1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 055be3  je 0x55bf1
    X86_AT(c, 0x55be3u);
    if (x86_cc(c, 4)) { goto L_55bf1; }
    X86_TICK(c, 11);
    // 055be5  cmp eax, dword ptr [edx + 4]
    X86_AT(c, 0x55be5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u))), 0, 4);
    // 055be8  je 0x55bf1
    X86_AT(c, 0x55be8u);
    if (x86_cc(c, 4)) { goto L_55bf1; }
L_55bea:
    X86_TICK(c, 9);
    // 055bea  mov ecx, ebp
    X86_AT(c, 0x55beau);
    c.r[1] = c.r[5];
    // 055bec  call 0x55b8c
    X86_AT(c, 0x55becu);
    push32(c, 0x55bf1u); x86_call_known(c, 0x55b8cu, f_00055b8c); X86_RET(c, 0x55bf1u);
L_55bf1:
    X86_TICK(c, 15);
    // 055bf1  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55bf1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055bf4  mov byte ptr [eax + 0xf], 0x55
    X86_AT(c, 0x55bf4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu)), 0x55u);
    // 055bf8  push eax
    X86_AT(c, 0x55bf8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 055bf9  call 0x557c8
    X86_AT(c, 0x55bf9u);
    push32(c, 0x55bfeu); x86_call_known(c, 0x557c8u, f_000557c8); X86_RET(c, 0x55bfeu);
    X86_TICK(c, 16);
    // 055bfe  mov eax, dword ptr [0x4b860]
    X86_AT(c, 0x55bfeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B860u)));
    // 055c03  cmp byte ptr [eax + 0xf], 0x55
    X86_AT(c, 0x55c03u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu))), 0x55u, 0, 1);
    // 055c07  jne 0x55c36
    X86_AT(c, 0x55c07u);
    if (x86_cc(c, 5)) { goto L_55c36; }
    X86_TICK(c, 28);
    // 055c09  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x55c09u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 055c0c  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x55c0cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 055c0f  neg edx
    X86_AT(c, 0x55c0fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_neg(c, v, 4); }
    // 055c11  add dword ptr [0x4b864], edx
    X86_AT(c, 0x55c11u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B864u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 055c17  mov eax, dword ptr [eax + 4]
    X86_AT(c, 0x55c17u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 055c1a  mov dword ptr [0x4b860], eax
    X86_AT(c, 0x55c1au);
    wr32((c.sbase[3] + (uint32_t)(0x4B860u)), c.r[0]);
    // 055c1f  and eax, eax
    X86_AT(c, 0x55c1fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 055c21  je 0x55c29
    X86_AT(c, 0x55c21u);
    if (x86_cc(c, 4)) { goto L_55c29; }
    X86_TICK(c, 2);
    // 055c23  mov dword ptr [eax], 0
    X86_AT(c, 0x55c23u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
L_55c29:
    X86_TICK(c, 12);
    // 055c29  push dword ptr [ebp - 4]
    X86_AT(c, 0x55c29u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 055c2c  call 0x55774
    X86_AT(c, 0x55c2cu);
    push32(c, 0x55c31u); x86_call_known(c, 0x55774u, f_00055774); X86_RET(c, 0x55c31u);
    X86_TICK(c, 7);
    // 055c31  call 0x558d0
    X86_AT(c, 0x55c31u);
    push32(c, 0x55c36u); x86_call_known(c, 0x558d0u, f_000558d0); X86_RET(c, 0x55c36u);
L_55c36:
    X86_TICK(c, 12);
    // 055c36  cmp byte ptr [0x4b850], 0
    X86_AT(c, 0x55c36u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B850u))), 0x0u, 0, 1);
    // 055c3d  je 0x55c44
    X86_AT(c, 0x55c3du);
    if (x86_cc(c, 4)) { goto L_55c44; }
    X86_TICK(c, 7);
    // 055c3f  call 0x55c64
    X86_AT(c, 0x55c3fu);
    push32(c, 0x55c44u); x86_call_known(c, 0x55c64u, f_00055c64); X86_RET(c, 0x55c44u);
L_55c44:
    X86_TICK(c, 2);
    // 055c44  lea esp, [ebp - 0x10]
    X86_AT(c, 0x55c44u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
L_55c47:
    X86_TICK(c, 28);
    // 055c47  pop edi
    X86_AT(c, 0x55c47u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 055c48  pop esi
    X86_AT(c, 0x55c48u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 055c49  pop ebx
    X86_AT(c, 0x55c49u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 055c4a  leave 
    X86_AT(c, 0x55c4au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055c4b  ret 4
    X86_AT(c, 0x55c4bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x55baau, "ran off the end of a function");
}
void f_00055c64(X86Cpu& c) {
    X86_TICK(c, 15);
    // 055c64  push ebp
    X86_AT(c, 0x55c64u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055c65  mov ebp, esp
    X86_AT(c, 0x55c65u);
    c.r[5] = c.r[4];
    // 055c67  push ebp
    X86_AT(c, 0x55c67u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055c68  push 0x55c7c
    X86_AT(c, 0x55c68u);
    { uint32_t v = 0x55C7Cu; push32(c, v); }
    // 055c6d  call 0x556a8
    X86_AT(c, 0x55c6du);
    push32(c, 0x55c72u); x86_call_known(c, 0x556a8u, f_000556a8); X86_RET(c, 0x55c72u);
    X86_TICK(c, 16);
    // 055c72  leave 
    X86_AT(c, 0x55c72u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055c73  ret 
    X86_AT(c, 0x55c73u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x55c64u, "ran off the end of a function");
}
void f_00055c7c(X86Cpu& c) {
    X86_TICK(c, 22);
    // 055c7c  push ebp
    X86_AT(c, 0x55c7cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055c7d  mov ebp, esp
    X86_AT(c, 0x55c7du);
    c.r[5] = c.r[4];
    // 055c7f  push ecx
    X86_AT(c, 0x55c7fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 055c80  leave 
    X86_AT(c, 0x55c80u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055c81  ret 4
    X86_AT(c, 0x55c81u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x55c7cu, "ran off the end of a function");
}
void f_00055c84(X86Cpu& c) {
    X86_TICK(c, 13);
    // 055c84  inc byte ptr [0x4b889]
    X86_AT(c, 0x55c84u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B889u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 055c8a  call 0x56ae8
    X86_AT(c, 0x55c8au);
    push32(c, 0x55c8fu); x86_call_known(c, 0x56ae8u, f_00056ae8); X86_RET(c, 0x55c8fu);
    X86_TICK(c, 7);
    // 055c8f  call 0x554fc
    X86_AT(c, 0x55c8fu);
    push32(c, 0x55c94u); x86_call_known(c, 0x554fcu, f_000554fc); X86_RET(c, 0x55c94u);
    X86_TICK(c, 7);
    // 055c94  call 0x553b8
    X86_AT(c, 0x55c94u);
    push32(c, 0x55c99u); x86_call_known(c, 0x553b8u, f_000553b8); X86_RET(c, 0x55c99u);
    X86_TICK(c, 7);
    // 055c99  call 0x540a5
    X86_AT(c, 0x55c99u);
    push32(c, 0x55c9eu); x86_call_known(c, 0x540a5u, f_000540a5); X86_RET(c, 0x55c9eu);
    X86_TICK(c, 13);
    // 055c9e  mov al, byte ptr [0x4b888]
    X86_AT(c, 0x55c9eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B888u))));
    // 055ca3  push eax
    X86_AT(c, 0x55ca3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 055ca4  call 0x555d0
    X86_AT(c, 0x55ca4u);
    push32(c, 0x55ca9u); x86_call_known(c, 0x555d0u, f_000555d0); X86_RET(c, 0x55ca9u);
    X86_TICK(c, 10);
    // 055ca9  ret 
    X86_AT(c, 0x55ca9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x55c84u, "ran off the end of a function");
}
void f_00055cac(X86Cpu& c) {
    X86_TICK(c, 16);
    // 055cac  push ebp
    X86_AT(c, 0x55cacu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055cad  mov ebp, esp
    X86_AT(c, 0x55cadu);
    c.r[5] = c.r[4];
    // 055caf  cmp byte ptr [0x4b88a], 0
    X86_AT(c, 0x55cafu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B88Au))), 0x0u, 0, 1);
    // 055cb6  je 0x55cc5
    X86_AT(c, 0x55cb6u);
    if (x86_cc(c, 4)) { goto L_55cc5; }
    X86_TICK(c, 13);
    // 055cb8  mov al, byte ptr [0x4b888]
    X86_AT(c, 0x55cb8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B888u))));
    // 055cbd  push eax
    X86_AT(c, 0x55cbdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 055cbe  call 0x555d0
    X86_AT(c, 0x55cbeu);
    push32(c, 0x55cc3u); x86_call_known(c, 0x555d0u, f_000555d0); X86_RET(c, 0x55cc3u);
    X86_TICK(c, 7);
    // 055cc3  jmp 0x55ccc
    X86_AT(c, 0x55cc3u);
    goto L_55ccc;
L_55cc5:
    X86_TICK(c, 2);
    // 055cc5  mov byte ptr [0x4b88a], 1
    X86_AT(c, 0x55cc5u);
    wr8((c.sbase[3] + (uint32_t)(0x4B88Au)), 0x1u);
L_55ccc:
    X86_TICK(c, 13);
    // 055ccc  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x55cccu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 055ccf  mov byte ptr [0x4b888], al
    X86_AT(c, 0x55ccfu);
    wr8((c.sbase[3] + (uint32_t)(0x4B888u)), g8(c, 0));
    // 055cd4  call 0x55c84
    X86_AT(c, 0x55cd4u);
    push32(c, 0x55cd9u); x86_call_known(c, 0x55c84u, f_00055c84); X86_RET(c, 0x55cd9u);
    X86_TICK(c, 16);
    // 055cd9  leave 
    X86_AT(c, 0x55cd9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055cda  ret 4
    X86_AT(c, 0x55cdau);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x55cacu, "ran off the end of a function");
}
void f_00055ce0(X86Cpu& c) {
    X86_TICK(c, 16);
    // 055ce0  push ebp
    X86_AT(c, 0x55ce0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055ce1  mov ebp, esp
    X86_AT(c, 0x55ce1u);
    c.r[5] = c.r[4];
    // 055ce3  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x55ce3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 055ce6  call 0x5558c
    X86_AT(c, 0x55ce6u);
    push32(c, 0x55cebu); x86_call_known(c, 0x5558cu, f_0005558c); X86_RET(c, 0x55cebu);
    X86_TICK(c, 23);
    // 055ceb  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x55cebu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 055cee  mov dword ptr [0x4b82c], eax
    X86_AT(c, 0x55ceeu);
    wr32((c.sbase[3] + (uint32_t)(0x4B82Cu)), c.r[0]);
    // 055cf3  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x55cf3u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 055cf7  mov dword ptr [0x4b828], eax
    X86_AT(c, 0x55cf7u);
    wr32((c.sbase[3] + (uint32_t)(0x4B828u)), c.r[0]);
    // 055cfc  push 0x3f
    X86_AT(c, 0x55cfcu);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 055cfe  call 0x55518
    X86_AT(c, 0x55cfeu);
    push32(c, 0x55d03u); x86_call_known(c, 0x55518u, f_00055518); X86_RET(c, 0x55d03u);
    X86_TICK(c, 20);
    // 055d03  mov eax, dword ptr [0x4b824]
    X86_AT(c, 0x55d03u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B824u)));
    // 055d08  leave 
    X86_AT(c, 0x55d08u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055d09  ret 0xc
    X86_AT(c, 0x55d09u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x55ce0u, "ran off the end of a function");
}
void f_00055d0c(X86Cpu& c) {
    X86_TICK(c, 22);
    // 055d0c  push ebp
    X86_AT(c, 0x55d0cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055d0d  mov ebp, esp
    X86_AT(c, 0x55d0du);
    c.r[5] = c.r[4];
    // 055d0f  push edi
    X86_AT(c, 0x55d0fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055d10  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x55d10u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 055d13  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x55d13u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 055d16  call 0x5558c
    X86_AT(c, 0x55d16u);
    push32(c, 0x55d1bu); x86_call_known(c, 0x5558cu, f_0005558c); X86_RET(c, 0x55d1bu);
    X86_TICK(c, 19);
    // 055d1b  mov dword ptr [0x4b82c], edi
    X86_AT(c, 0x55d1bu);
    wr32((c.sbase[3] + (uint32_t)(0x4B82Cu)), c.r[7]);
    // 055d21  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x55d21u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 055d25  mov dword ptr [0x4b828], eax
    X86_AT(c, 0x55d25u);
    wr32((c.sbase[3] + (uint32_t)(0x4B828u)), c.r[0]);
    // 055d2a  push 0x40
    X86_AT(c, 0x55d2au);
    { uint32_t v = 0x40u; push32(c, v); }
    // 055d2c  call 0x55518
    X86_AT(c, 0x55d2cu);
    push32(c, 0x55d31u); x86_call_known(c, 0x55518u, f_00055518); X86_RET(c, 0x55d31u);
    X86_TICK(c, 11);
    // 055d31  cmp edi, dword ptr [0x4b824]
    X86_AT(c, 0x55d31u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x4B824u))), 0, 4);
    // 055d37  jbe 0x55d4c
    X86_AT(c, 0x55d37u);
    if (x86_cc(c, 6)) { goto L_55d4c; }
    X86_TICK(c, 12);
    // 055d39  cmp word ptr [0x4b81e], 0
    X86_AT(c, 0x55d39u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4B81Eu))), 0x0u, 0, 2);
    // 055d41  jne 0x55d4c
    X86_AT(c, 0x55d41u);
    if (x86_cc(c, 5)) { goto L_55d4c; }
    X86_TICK(c, 2);
    // 055d43  mov word ptr [0x4b81e], 0x15
    X86_AT(c, 0x55d43u);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), 0x15u);
L_55d4c:
    X86_TICK(c, 24);
    // 055d4c  mov eax, dword ptr [0x4b824]
    X86_AT(c, 0x55d4cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B824u)));
    // 055d51  pop edi
    X86_AT(c, 0x55d51u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 055d52  leave 
    X86_AT(c, 0x55d52u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055d53  ret 0xc
    X86_AT(c, 0x55d53u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x55d0cu, "ran off the end of a function");
}
void f_00055d70(X86Cpu& c) {
    X86_TICK(c, 23);
    // 055d70  push ebp
    X86_AT(c, 0x55d70u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055d71  mov ebp, esp
    X86_AT(c, 0x55d71u);
    c.r[5] = c.r[4];
    // 055d73  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x55d73u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 055d77  mov dword ptr [0x4b828], eax
    X86_AT(c, 0x55d77u);
    wr32((c.sbase[3] + (uint32_t)(0x4B828u)), c.r[0]);
    // 055d7c  mov byte ptr [0x4b824], 0
    X86_AT(c, 0x55d7cu);
    wr8((c.sbase[3] + (uint32_t)(0x4B824u)), 0x0u);
    // 055d83  push 0x44
    X86_AT(c, 0x55d83u);
    { uint32_t v = 0x44u; push32(c, v); }
    // 055d85  call 0x55518
    X86_AT(c, 0x55d85u);
    push32(c, 0x55d8au); x86_call_known(c, 0x55518u, f_00055518); X86_RET(c, 0x55d8au);
    X86_TICK(c, 12);
    // 055d8a  test byte ptr [0x4b830], 0x80
    X86_AT(c, 0x55d8au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B830u))) & 0x80u, 1);
    // 055d91  jne 0x55d97
    X86_AT(c, 0x55d91u);
    if (x86_cc(c, 5)) { goto L_55d97; }
    X86_TICK(c, 9);
    // 055d93  sub eax, eax
    X86_AT(c, 0x55d93u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 055d95  jmp 0x55db3
    X86_AT(c, 0x55d95u);
    goto L_55db3;
L_55d97:
    X86_TICK(c, 12);
    // 055d97  test byte ptr [0x4b830], 2
    X86_AT(c, 0x55d97u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B830u))) & 0x2u, 1);
    // 055d9e  je 0x55da4
    X86_AT(c, 0x55d9eu);
    if (x86_cc(c, 4)) { goto L_55da4; }
    X86_TICK(c, 9);
    // 055da0  mov al, 2
    X86_AT(c, 0x55da0u);
    s8(c, 0, 0x2u);
    // 055da2  jmp 0x55db3
    X86_AT(c, 0x55da2u);
    goto L_55db3;
L_55da4:
    X86_TICK(c, 12);
    // 055da4  test byte ptr [0x4b830], 1
    X86_AT(c, 0x55da4u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B830u))) & 0x1u, 1);
    // 055dab  je 0x55db1
    X86_AT(c, 0x55dabu);
    if (x86_cc(c, 4)) { goto L_55db1; }
    X86_TICK(c, 9);
    // 055dad  mov al, 1
    X86_AT(c, 0x55dadu);
    s8(c, 0, 0x1u);
    // 055daf  jmp 0x55db3
    X86_AT(c, 0x55dafu);
    goto L_55db3;
L_55db1:
    X86_TICK(c, 2);
    // 055db1  mov al, 4
    X86_AT(c, 0x55db1u);
    s8(c, 0, 0x4u);
L_55db3:
    X86_TICK(c, 16);
    // 055db3  leave 
    X86_AT(c, 0x55db3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055db4  ret 4
    X86_AT(c, 0x55db4u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x55d70u, "ran off the end of a function");
}
void f_00055db8(X86Cpu& c) {
    X86_TICK(c, 45);
    // 055db8  enter 4, 0
    X86_AT(c, 0x55db8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 055dbc  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x55dbcu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 055dc0  mov dword ptr [0x4b828], eax
    X86_AT(c, 0x55dc0u);
    wr32((c.sbase[3] + (uint32_t)(0x4B828u)), c.r[0]);
    // 055dc5  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0x55dc5u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 055dc8  mov byte ptr [0x4b824], al
    X86_AT(c, 0x55dc8u);
    wr8((c.sbase[3] + (uint32_t)(0x4B824u)), g8(c, 0));
    // 055dcd  movzx eax, word ptr [ebp + 0xe]
    X86_AT(c, 0x55dcdu);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xEu)));
    // 055dd1  mov dword ptr [0x4b82c], eax
    X86_AT(c, 0x55dd1u);
    wr32((c.sbase[3] + (uint32_t)(0x4B82Cu)), c.r[0]);
    // 055dd6  movzx eax, word ptr [ebp + 0xc]
    X86_AT(c, 0x55dd6u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 055dda  mov dword ptr [0x4b830], eax
    X86_AT(c, 0x55ddau);
    wr32((c.sbase[3] + (uint32_t)(0x4B830u)), c.r[0]);
    // 055ddf  push 0x42
    X86_AT(c, 0x55ddfu);
    { uint32_t v = 0x42u; push32(c, v); }
    // 055de1  call 0x55518
    X86_AT(c, 0x55de1u);
    push32(c, 0x55de6u); x86_call_known(c, 0x55518u, f_00055518); X86_RET(c, 0x55de6u);
    X86_TICK(c, 32);
    // 055de6  mov ax, word ptr [0x4b830]
    X86_AT(c, 0x55de6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4B830u))));
    // 055dec  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x55decu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 055df0  mov ax, word ptr [0x4b824]
    X86_AT(c, 0x55df0u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4B824u))));
    // 055df6  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x55df6u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 055dfa  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55dfau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055dfd  leave 
    X86_AT(c, 0x55dfdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055dfe  ret 0xc
    X86_AT(c, 0x55dfeu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x55db8u, "ran off the end of a function");
}
void f_00055e04(X86Cpu& c) {
    X86_TICK(c, 40);
    // 055e04  push ebp
    X86_AT(c, 0x55e04u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055e05  mov ebp, esp
    X86_AT(c, 0x55e05u);
    c.r[5] = c.r[4];
    // 055e07  push esi
    X86_AT(c, 0x55e07u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 055e08  push edi
    X86_AT(c, 0x55e08u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055e09  push ebx
    X86_AT(c, 0x55e09u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 055e0a  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x55e0au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 055e0d  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x55e0du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 055e10  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x55e10u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 055e14  sub eax, eax
    X86_AT(c, 0x55e14u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 055e16  cld 
    X86_AT(c, 0x55e16u);
    c.fl &= ~X86_DF;
    // 055e17  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0x55e17u);
    x86_string(c, 1, 1, 243, 4, 3);
    // 055e19  jb 0x55e20
    X86_AT(c, 0x55e19u);
    if (x86_cc(c, 2)) { goto L_55e20; }
    X86_TICK(c, 5);
    // 055e1b  je 0x55e21
    X86_AT(c, 0x55e1bu);
    if (x86_cc(c, 4)) { goto L_55e21; }
    X86_TICK(c, 9);
    // 055e1d  inc eax
    X86_AT(c, 0x55e1du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 055e1e  jmp 0x55e21
    X86_AT(c, 0x55e1eu);
    goto L_55e21;
L_55e20:
    X86_TICK(c, 2);
    // 055e20  dec eax
    X86_AT(c, 0x55e20u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_55e21:
    X86_TICK(c, 26);
    // 055e21  pop ebx
    X86_AT(c, 0x55e21u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 055e22  pop edi
    X86_AT(c, 0x55e22u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 055e23  pop esi
    X86_AT(c, 0x55e23u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 055e24  pop ebp
    X86_AT(c, 0x55e24u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 055e25  ret 0xc
    X86_AT(c, 0x55e25u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x55e04u, "ran off the end of a function");
}
void f_00055e44(X86Cpu& c) {
    X86_TICK(c, 48);
    // 055e44  push ebp
    X86_AT(c, 0x55e44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055e45  mov ebp, esp
    X86_AT(c, 0x55e45u);
    c.r[5] = c.r[4];
    // 055e47  push ecx
    X86_AT(c, 0x55e47u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 055e48  sub esp, 0x28
    X86_AT(c, 0x55e48u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x28u, 0, 4); }
    // 055e4b  push ebx
    X86_AT(c, 0x55e4bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 055e4c  push esi
    X86_AT(c, 0x55e4cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 055e4d  push edi
    X86_AT(c, 0x55e4du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055e4e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55e4eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055e51  movzx edx, byte ptr [eax - 0x21]
    X86_AT(c, 0x55e51u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFDFu)));
    // 055e55  mov ecx, dword ptr [eax + 0x20]
    X86_AT(c, 0x55e55u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)));
    // 055e58  sub ecx, edx
    X86_AT(c, 0x55e58u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 055e5a  mov dword ptr [ebp - 0x20], ecx
    X86_AT(c, 0x55e5au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[1]);
    // 055e5d  push dword ptr [ebp - 0x20]
    X86_AT(c, 0x55e5du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))); push32(c, v); }
    // 055e60  lea ecx, [ebp - 0x10]
    X86_AT(c, 0x55e60u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 055e63  push ecx
    X86_AT(c, 0x55e63u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 055e64  call 0x56c5c
    X86_AT(c, 0x55e64u);
    push32(c, 0x55e69u); x86_call_known(c, 0x56c5cu, f_00056c5c); X86_RET(c, 0x55e69u);
    X86_TICK(c, 15);
    // 055e69  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55e69u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055e6c  lea edx, [eax + 0xc]
    X86_AT(c, 0x55e6cu);
    c.r[2] = (uint32_t)(c.r[0] + 0xCu);
    // 055e6f  push edx
    X86_AT(c, 0x55e6fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 055e70  call 0x56f80
    X86_AT(c, 0x55e70u);
    push32(c, 0x55e75u); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x55e75u);
    X86_TICK(c, 11);
    // 055e75  lea eax, [ebp - 0x10]
    X86_AT(c, 0x55e75u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 055e78  push eax
    X86_AT(c, 0x55e78u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 055e79  call 0x56f80
    X86_AT(c, 0x55e79u);
    push32(c, 0x55e7eu); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x55e7eu);
    X86_TICK(c, 7);
    // 055e7e  call 0x570f0
    X86_AT(c, 0x55e7eu);
    push32(c, 0x55e83u); x86_call_known(c, 0x570f0u, f_000570f0); X86_RET(c, 0x55e83u);
    X86_TICK(c, 11);
    // 055e83  lea eax, [ebp - 0x10]
    X86_AT(c, 0x55e83u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 055e86  push eax
    X86_AT(c, 0x55e86u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 055e87  call 0x56fe0
    X86_AT(c, 0x55e87u);
    push32(c, 0x55e8cu); x86_call_known(c, 0x56fe0u, f_00056fe0); X86_RET(c, 0x55e8cu);
    X86_TICK(c, 15);
    // 055e8c  lea eax, [ebp - 0x10]
    X86_AT(c, 0x55e8cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 055e8f  push eax
    X86_AT(c, 0x55e8fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 055e90  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x55e90u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 055e93  push eax
    X86_AT(c, 0x55e93u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 055e94  call 0x56dc0
    X86_AT(c, 0x55e94u);
    push32(c, 0x55e99u); x86_call_known(c, 0x56dc0u, f_00056dc0); X86_RET(c, 0x55e99u);
    X86_TICK(c, 47);
    // 055e99  push esi
    X86_AT(c, 0x55e99u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 055e9a  lea esi, [ebp - 0x2c]
    X86_AT(c, 0x55e9au);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 055e9d  push edi
    X86_AT(c, 0x55e9du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055e9e  lea edi, [ebp - 0x1a]
    X86_AT(c, 0x55e9eu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFE6u);
    // 055ea1  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x55ea1u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 055ea2  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x55ea2u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 055ea3  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x55ea3u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 055ea5  pop edi
    X86_AT(c, 0x55ea5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 055ea6  pop esi
    X86_AT(c, 0x55ea6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 055ea7  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55ea7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055eaa  mov dword ptr [eax - 0x20], 0x13
    X86_AT(c, 0x55eaau);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)), 0x13u);
    // 055eb1  mov edi, 1
    X86_AT(c, 0x55eb1u);
    c.r[7] = 0x1u;
    // 055eb6  mov esi, edi
    X86_AT(c, 0x55eb6u);
    c.r[6] = c.r[7];
L_55eb8:
    X86_TICK(c, 14);
    // 055eb8  mov bl, byte ptr [ebp + edi*1 - 0x1b]
    X86_AT(c, 0x55eb8u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] + 0xFFFFFFE5u))));
    // 055ebc  mov eax, esi
    X86_AT(c, 0x55ebcu);
    c.r[0] = c.r[6];
    // 055ebe  rcr eax, 1
    X86_AT(c, 0x55ebeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 055ec0  jae 0x55eca
    X86_AT(c, 0x55ec0u);
    if (x86_cc(c, 3)) { goto L_55eca; }
    X86_TICK(c, 13);
    // 055ec2  sub bh, bh
    X86_AT(c, 0x55ec2u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, g8(c, 7), 0, 1)); }
    // 055ec4  mov eax, ebx
    X86_AT(c, 0x55ec4u);
    c.r[0] = c.r[3];
    // 055ec6  and al, 0xf
    X86_AT(c, 0x55ec6u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 055ec8  jmp 0x55ecf
    X86_AT(c, 0x55ec8u);
    goto L_55ecf;
L_55eca:
    X86_TICK(c, 5);
    // 055eca  mov eax, ebx
    X86_AT(c, 0x55ecau);
    c.r[0] = c.r[3];
    // 055ecc  shr al, 4
    X86_AT(c, 0x55eccu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
L_55ecf:
    X86_TICK(c, 34);
    // 055ecf  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0x55ecfu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
    // 055ed2  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55ed2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055ed5  dec dword ptr [eax - 0x20]
    X86_AT(c, 0x55ed5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 055ed8  mov dl, byte ptr [ebp - 0x21]
    X86_AT(c, 0x55ed8u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu))));
    // 055edb  add dl, 0x30
    X86_AT(c, 0x55edbu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x30u, 0, 1)); }
    // 055ede  mov ecx, dword ptr [eax - 0x20]
    X86_AT(c, 0x55edeu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)));
    // 055ee1  mov byte ptr [eax + ecx*1 - 0x1c], dl
    X86_AT(c, 0x55ee1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0xFFFFFFE4u)), g8(c, 2));
    // 055ee5  mov eax, esi
    X86_AT(c, 0x55ee5u);
    c.r[0] = c.r[6];
    // 055ee7  rcr eax, 1
    X86_AT(c, 0x55ee7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 055ee9  jb 0x55eec
    X86_AT(c, 0x55ee9u);
    if (x86_cc(c, 2)) { goto L_55eec; }
    X86_TICK(c, 2);
    // 055eeb  inc edi
    X86_AT(c, 0x55eebu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_55eec:
    X86_TICK(c, 7);
    // 055eec  cmp esi, 0x12
    X86_AT(c, 0x55eecu);
    (void)x86_sub(c, c.r[6], 0x12u, 0, 4);
    // 055eef  jge 0x55efa
    X86_AT(c, 0x55eefu);
    if (x86_cc(c, 13)) { goto L_55efa; }
    X86_TICK(c, 9);
    // 055ef1  inc esi
    X86_AT(c, 0x55ef1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 055ef2  jmp 0x55eb8
    X86_AT(c, 0x55ef2u);
    X86_POLL(c, 0x55eb8u); goto L_55eb8;
L_55ef4:
    X86_TICK(c, 10);
    // 055ef4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55ef4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055ef7  inc dword ptr [eax - 0x20]
    X86_AT(c, 0x55ef7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_55efa:
    X86_TICK(c, 20);
    // 055efa  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55efau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055efd  mov edx, dword ptr [eax - 0x20]
    X86_AT(c, 0x55efdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)));
    // 055f00  cmp byte ptr [eax + edx*1 - 0x1c], 0x30
    X86_AT(c, 0x55f00u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFE4u))), 0x30u, 0, 1);
    // 055f05  je 0x55ef4
    X86_AT(c, 0x55f05u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x55ef4u); goto L_55ef4; }
    X86_TICK(c, 17);
    // 055f07  mov ecx, 0x12
    X86_AT(c, 0x55f07u);
    c.r[1] = 0x12u;
    // 055f0c  sub ecx, dword ptr [ebp - 0x20]
    X86_AT(c, 0x55f0cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0, 4); }
    // 055f0f  inc ecx
    X86_AT(c, 0x55f0fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 055f10  cmp edx, ecx
    X86_AT(c, 0x55f10u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 055f12  jge 0x55f17
    X86_AT(c, 0x55f12u);
    if (x86_cc(c, 13)) { goto L_55f17; }
    X86_TICK(c, 6);
    // 055f14  inc dword ptr [eax - 4]
    X86_AT(c, 0x55f14u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_55f17:
    X86_TICK(c, 28);
    // 055f17  pop edi
    X86_AT(c, 0x55f17u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 055f18  pop esi
    X86_AT(c, 0x55f18u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 055f19  pop ebx
    X86_AT(c, 0x55f19u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 055f1a  leave 
    X86_AT(c, 0x55f1au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055f1b  ret 
    X86_AT(c, 0x55f1bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x55e44u, "ran off the end of a function");
}
void f_00055f24(X86Cpu& c) {
    X86_TICK(c, 33);
    // 055f24  push ebp
    X86_AT(c, 0x55f24u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 055f25  mov ebp, esp
    X86_AT(c, 0x55f25u);
    c.r[5] = c.r[4];
    // 055f27  push ecx
    X86_AT(c, 0x55f27u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 055f28  sub esp, 0xc
    X86_AT(c, 0x55f28u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 055f2b  push ebx
    X86_AT(c, 0x55f2bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 055f2c  push esi
    X86_AT(c, 0x55f2cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 055f2d  push edi
    X86_AT(c, 0x55f2du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055f2e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x55f2eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 055f31  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55f31u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055f34  cmp edi, dword ptr [eax + 0x20]
    X86_AT(c, 0x55f34u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u))), 0, 4);
    // 055f37  jge 0x55fdd
    X86_AT(c, 0x55f37u);
    if (x86_cc(c, 13)) { goto L_55fdd; }
    X86_TICK(c, 17);
    // 055f3d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55f3du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055f40  add eax, 0xc
    X86_AT(c, 0x55f40u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xCu, 0, 4); }
    // 055f43  push eax
    X86_AT(c, 0x55f43u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 055f44  mov ebx, eax
    X86_AT(c, 0x55f44u);
    c.r[3] = c.r[0];
    // 055f46  call 0x56f80
    X86_AT(c, 0x55f46u);
    push32(c, 0x55f4bu); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x55f4bu);
    X86_TICK(c, 12);
    // 055f4b  push dword ptr [0x1718]
    X86_AT(c, 0x55f4bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1718u))); push32(c, v); }
    // 055f51  call 0x56f08
    X86_AT(c, 0x55f51u);
    push32(c, 0x55f56u); x86_call_known(c, 0x56f08u, f_00056f08); X86_RET(c, 0x55f56u);
    X86_TICK(c, 7);
    // 055f56  call 0x57424
    X86_AT(c, 0x55f56u);
    push32(c, 0x55f5bu); x86_call_known(c, 0x57424u, f_00057424); X86_RET(c, 0x55f5bu);
    X86_TICK(c, 5);
    // 055f5b  je 0x55fdd
    X86_AT(c, 0x55f5bu);
    if (x86_cc(c, 4)) { goto L_55fdd; }
    X86_TICK(c, 15);
    // 055f61  mov eax, edi
    X86_AT(c, 0x55f61u);
    c.r[0] = c.r[7];
    // 055f63  push eax
    X86_AT(c, 0x55f63u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 055f64  lea ebx, [ebp - 0x10]
    X86_AT(c, 0x55f64u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 055f67  push ebx
    X86_AT(c, 0x55f67u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 055f68  call 0x56c5c
    X86_AT(c, 0x55f68u);
    push32(c, 0x55f6du); x86_call_known(c, 0x56c5cu, f_00056c5c); X86_RET(c, 0x55f6du);
    X86_TICK(c, 9);
    // 055f6d  push ebx
    X86_AT(c, 0x55f6du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 055f6e  call 0x56f80
    X86_AT(c, 0x55f6eu);
    push32(c, 0x55f73u); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x55f73u);
    X86_TICK(c, 12);
    // 055f73  push dword ptr [0x171c]
    X86_AT(c, 0x55f73u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x171Cu))); push32(c, v); }
    // 055f79  call 0x56f08
    X86_AT(c, 0x55f79u);
    push32(c, 0x55f7eu); x86_call_known(c, 0x56f08u, f_00056f08); X86_RET(c, 0x55f7eu);
    X86_TICK(c, 7);
    // 055f7e  call 0x57214
    X86_AT(c, 0x55f7eu);
    push32(c, 0x55f83u); x86_call_known(c, 0x57214u, f_00057214); X86_RET(c, 0x55f83u);
    X86_TICK(c, 19);
    // 055f83  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x55f83u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 055f86  lea edx, [eax + 0xc]
    X86_AT(c, 0x55f86u);
    c.r[2] = (uint32_t)(c.r[0] + 0xCu);
    // 055f89  push edx
    X86_AT(c, 0x55f89u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 055f8a  mov ebx, eax
    X86_AT(c, 0x55f8au);
    c.r[3] = c.r[0];
    // 055f8c  mov esi, edx
    X86_AT(c, 0x55f8cu);
    c.r[6] = c.r[2];
    // 055f8e  call 0x56f80
    X86_AT(c, 0x55f8eu);
    push32(c, 0x55f93u); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x55f93u);
    X86_TICK(c, 7);
    // 055f93  call 0x56df0
    X86_AT(c, 0x55f93u);
    push32(c, 0x55f98u); x86_call_known(c, 0x56df0u, f_00056df0); X86_RET(c, 0x55f98u);
    X86_TICK(c, 9);
    // 055f98  push esi
    X86_AT(c, 0x55f98u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 055f99  call 0x56fe0
    X86_AT(c, 0x55f99u);
    push32(c, 0x55f9eu); x86_call_known(c, 0x56fe0u, f_00056fe0); X86_RET(c, 0x55f9eu);
    X86_TICK(c, 9);
    // 055f9e  push esi
    X86_AT(c, 0x55f9eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 055f9f  call 0x56f80
    X86_AT(c, 0x55f9fu);
    push32(c, 0x55fa4u); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x55fa4u);
    X86_TICK(c, 12);
    // 055fa4  push dword ptr [0x1720]
    X86_AT(c, 0x55fa4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1720u))); push32(c, v); }
    // 055faa  call 0x56f08
    X86_AT(c, 0x55faau);
    push32(c, 0x55fafu); x86_call_known(c, 0x56f08u, f_00056f08); X86_RET(c, 0x55fafu);
    X86_TICK(c, 7);
    // 055faf  call 0x57424
    X86_AT(c, 0x55fafu);
    push32(c, 0x55fb4u); x86_call_known(c, 0x57424u, f_00057424); X86_RET(c, 0x55fb4u);
    X86_TICK(c, 13);
    // 055fb4  setae al
    X86_AT(c, 0x55fb4u);
    s8(c, 0, x86_cc(c, 3) ? 1u : 0u);
    // 055fb7  mov byte ptr [ebx - 0x21], al
    X86_AT(c, 0x55fb7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFDFu)), g8(c, 0));
    // 055fba  and al, al
    X86_AT(c, 0x55fbau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 055fbc  je 0x55fdd
    X86_AT(c, 0x55fbcu);
    if (x86_cc(c, 4)) { goto L_55fdd; }
    X86_TICK(c, 9);
    // 055fbe  push esi
    X86_AT(c, 0x55fbeu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 055fbf  call 0x56f80
    X86_AT(c, 0x55fbfu);
    push32(c, 0x55fc4u); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x55fc4u);
    X86_TICK(c, 11);
    // 055fc4  mov eax, 0x1724
    X86_AT(c, 0x55fc4u);
    c.r[0] = 0x1724u;
    // 055fc9  push eax
    X86_AT(c, 0x55fc9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 055fca  call 0x56f80
    X86_AT(c, 0x55fcau);
    push32(c, 0x55fcfu); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x55fcfu);
    X86_TICK(c, 7);
    // 055fcf  call 0x570f0
    X86_AT(c, 0x55fcfu);
    push32(c, 0x55fd4u); x86_call_known(c, 0x570f0u, f_000570f0); X86_RET(c, 0x55fd4u);
    X86_TICK(c, 9);
    // 055fd4  push esi
    X86_AT(c, 0x55fd4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 055fd5  call 0x56fe0
    X86_AT(c, 0x55fd5u);
    push32(c, 0x55fdau); x86_call_known(c, 0x56fe0u, f_00056fe0); X86_RET(c, 0x55fdau);
    X86_TICK(c, 6);
    // 055fda  inc dword ptr [ebx - 4]
    X86_AT(c, 0x55fdau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_55fdd:
    X86_TICK(c, 28);
    // 055fdd  pop edi
    X86_AT(c, 0x55fddu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 055fde  pop esi
    X86_AT(c, 0x55fdeu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 055fdf  pop ebx
    X86_AT(c, 0x55fdfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 055fe0  leave 
    X86_AT(c, 0x55fe0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 055fe1  ret 4
    X86_AT(c, 0x55fe1u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x55f24u, "ran off the end of a function");
}
void f_00055ff4(X86Cpu& c) {
    X86_TICK(c, 35);
    // 055ff4  enter 0x38, 0
    X86_AT(c, 0x55ff4u);
    x86_enter(c, 0x38u, 0x0u, 4);
    // 055ff8  push ebx
    X86_AT(c, 0x55ff8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 055ff9  push esi
    X86_AT(c, 0x55ff9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 055ffa  push edi
    X86_AT(c, 0x55ffau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 055ffb  mov edi, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x55ffbu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 055ffe  mov esi, dword ptr [ebp + 0x24]
    X86_AT(c, 0x55ffeu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 056001  lea eax, [ebp + 0xc]
    X86_AT(c, 0x56001u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 056004  push eax
    X86_AT(c, 0x56004u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056005  lea eax, [ebp - 0x38]
    X86_AT(c, 0x56005u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC8u);
    // 056008  push eax
    X86_AT(c, 0x56008u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056009  call 0x56cdc
    X86_AT(c, 0x56009u);
    push32(c, 0x5600eu); x86_call_known(c, 0x56cdcu, f_00056cdc); X86_RET(c, 0x5600eu);
    X86_TICK(c, 39);
    // 05600e  lea eax, [ebp - 0x38]
    X86_AT(c, 0x5600eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC8u);
    // 056011  push esi
    X86_AT(c, 0x56011u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056012  push edi
    X86_AT(c, 0x56012u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056013  mov edi, esi
    X86_AT(c, 0x56013u);
    c.r[7] = c.r[6];
    // 056015  mov esi, eax
    X86_AT(c, 0x56015u);
    c.r[6] = c.r[0];
    // 056017  mov ecx, 3
    X86_AT(c, 0x56017u);
    c.r[1] = 0x3u;
    // 05601c  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x5601cu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 05601e  pop edi
    X86_AT(c, 0x5601eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05601f  pop esi
    X86_AT(c, 0x5601fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 056020  cmp word ptr [esi], 0
    X86_AT(c, 0x56020u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[6]))), 0x0u, 0, 2);
    // 056024  jne 0x561e0
    X86_AT(c, 0x56024u);
    if (x86_cc(c, 5)) { goto L_561e0; }
    X86_TICK(c, 11);
    // 05602a  lea eax, [ebp + 0xc]
    X86_AT(c, 0x5602au);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 05602d  push eax
    X86_AT(c, 0x5602du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05602e  call 0x56d9c
    X86_AT(c, 0x5602eu);
    push32(c, 0x56033u); x86_call_known(c, 0x56d9cu, f_00056d9c); X86_RET(c, 0x56033u);
    X86_TICK(c, 12);
    // 056033  movsx eax, ax
    X86_AT(c, 0x56033u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 056036  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x56036u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 056039  and eax, eax
    X86_AT(c, 0x56039u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 05603b  jl 0x560cc
    X86_AT(c, 0x5603bu);
    if (x86_cc(c, 12)) { goto L_560cc; }
    X86_TICK(c, 77);
    // 056041  imul eax, eax, 0x12a
    X86_AT(c, 0x56041u);
    c.r[0] = x86_imul2(c, c.r[0], 0x12Au, 4);
    // 056047  cdq 
    X86_AT(c, 0x56047u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 056048  mov ecx, 0x3de
    X86_AT(c, 0x56048u);
    c.r[1] = 0x3DEu;
    // 05604d  idiv ecx
    X86_AT(c, 0x5604du);
    x86_idiv(c, c.r[1], 4, 0x5604du);
    // 05604f  inc eax
    X86_AT(c, 0x5604fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 056050  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x56050u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 056053  and eax, eax
    X86_AT(c, 0x56053u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 056055  je 0x56083
    X86_AT(c, 0x56055u);
    if (x86_cc(c, 4)) { goto L_56083; }
    X86_TICK(c, 16);
    // 056057  push dword ptr [ebp - 4]
    X86_AT(c, 0x56057u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 05605a  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x5605au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 05605d  push eax
    X86_AT(c, 0x5605du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05605e  call 0x56c5c
    X86_AT(c, 0x5605eu);
    push32(c, 0x56063u); x86_call_known(c, 0x56c5cu, f_00056c5c); X86_RET(c, 0x56063u);
    X86_TICK(c, 11);
    // 056063  lea eax, [ebp + 0xc]
    X86_AT(c, 0x56063u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 056066  push eax
    X86_AT(c, 0x56066u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056067  call 0x56f80
    X86_AT(c, 0x56067u);
    push32(c, 0x5606cu); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x5606cu);
    X86_TICK(c, 11);
    // 05606c  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x5606cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 05606f  push eax
    X86_AT(c, 0x5606fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056070  call 0x56f80
    X86_AT(c, 0x56070u);
    push32(c, 0x56075u); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x56075u);
    X86_TICK(c, 7);
    // 056075  call 0x57220
    X86_AT(c, 0x56075u);
    push32(c, 0x5607au); x86_call_known(c, 0x57220u, f_00057220); X86_RET(c, 0x5607au);
    X86_TICK(c, 11);
    // 05607a  lea eax, [ebp + 0xc]
    X86_AT(c, 0x5607au);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 05607d  push eax
    X86_AT(c, 0x5607du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05607e  call 0x56fe0
    X86_AT(c, 0x5607eu);
    push32(c, 0x56083u); x86_call_known(c, 0x56fe0u, f_00056fe0); X86_RET(c, 0x56083u);
L_56083:
    X86_TICK(c, 11);
    // 056083  lea eax, [ebp + 0xc]
    X86_AT(c, 0x56083u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 056086  push eax
    X86_AT(c, 0x56086u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056087  call 0x56f80
    X86_AT(c, 0x56087u);
    push32(c, 0x5608cu); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x5608cu);
    X86_TICK(c, 12);
    // 05608c  push dword ptr [0x1720]
    X86_AT(c, 0x5608cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1720u))); push32(c, v); }
    // 056092  call 0x56f08
    X86_AT(c, 0x56092u);
    push32(c, 0x56097u); x86_call_known(c, 0x56f08u, f_00056f08); X86_RET(c, 0x56097u);
    X86_TICK(c, 7);
    // 056097  call 0x57424
    X86_AT(c, 0x56097u);
    push32(c, 0x5609cu); x86_call_known(c, 0x57424u, f_00057424); X86_RET(c, 0x5609cu);
    X86_TICK(c, 5);
    // 05609c  jb 0x56157
    X86_AT(c, 0x5609cu);
    if (x86_cc(c, 2)) { goto L_56157; }
    X86_TICK(c, 11);
    // 0560a2  lea eax, [ebp + 0xc]
    X86_AT(c, 0x560a2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0560a5  push eax
    X86_AT(c, 0x560a5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0560a6  call 0x56f80
    X86_AT(c, 0x560a6u);
    push32(c, 0x560abu); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x560abu);
    X86_TICK(c, 11);
    // 0560ab  mov eax, 0x1724
    X86_AT(c, 0x560abu);
    c.r[0] = 0x1724u;
    // 0560b0  push eax
    X86_AT(c, 0x560b0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0560b1  call 0x56f80
    X86_AT(c, 0x560b1u);
    push32(c, 0x560b6u); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x560b6u);
    X86_TICK(c, 7);
    // 0560b6  call 0x570f0
    X86_AT(c, 0x560b6u);
    push32(c, 0x560bbu); x86_call_known(c, 0x570f0u, f_000570f0); X86_RET(c, 0x560bbu);
    X86_TICK(c, 11);
    // 0560bb  lea eax, [ebp + 0xc]
    X86_AT(c, 0x560bbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0560be  push eax
    X86_AT(c, 0x560beu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0560bf  call 0x56fe0
    X86_AT(c, 0x560bfu);
    push32(c, 0x560c4u); x86_call_known(c, 0x56fe0u, f_00056fe0); X86_RET(c, 0x560c4u);
    X86_TICK(c, 13);
    // 0560c4  inc dword ptr [ebp - 4]
    X86_AT(c, 0x560c4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0560c7  jmp 0x56157
    X86_AT(c, 0x560c7u);
    goto L_56157;
L_560cc:
    X86_TICK(c, 77);
    // 0560cc  imul eax, dword ptr [ebp - 4], 0x12a
    X86_AT(c, 0x560ccu);
    c.r[0] = x86_imul2(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x12Au, 4);
    // 0560d3  add eax, 0x12a
    X86_AT(c, 0x560d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x12Au, 0, 4); }
    // 0560d8  cdq 
    X86_AT(c, 0x560d8u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0560d9  mov ecx, 0x3de
    X86_AT(c, 0x560d9u);
    c.r[1] = 0x3DEu;
    // 0560de  idiv ecx
    X86_AT(c, 0x560deu);
    x86_idiv(c, c.r[1], 4, 0x560deu);
    // 0560e0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x560e0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0560e3  and eax, eax
    X86_AT(c, 0x560e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0560e5  je 0x56117
    X86_AT(c, 0x560e5u);
    if (x86_cc(c, 4)) { goto L_56117; }
    X86_TICK(c, 19);
    // 0560e7  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x560e7u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 0560eb  neg eax
    X86_AT(c, 0x560ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0560ed  push eax
    X86_AT(c, 0x560edu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0560ee  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x560eeu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0560f1  push eax
    X86_AT(c, 0x560f1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0560f2  call 0x56c5c
    X86_AT(c, 0x560f2u);
    push32(c, 0x560f7u); x86_call_known(c, 0x56c5cu, f_00056c5c); X86_RET(c, 0x560f7u);
    X86_TICK(c, 11);
    // 0560f7  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x560f7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0560fa  push eax
    X86_AT(c, 0x560fau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0560fb  call 0x56f80
    X86_AT(c, 0x560fbu);
    push32(c, 0x56100u); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x56100u);
    X86_TICK(c, 11);
    // 056100  lea eax, [ebp + 0xc]
    X86_AT(c, 0x56100u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 056103  push eax
    X86_AT(c, 0x56103u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056104  call 0x56f80
    X86_AT(c, 0x56104u);
    push32(c, 0x56109u); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x56109u);
    X86_TICK(c, 7);
    // 056109  call 0x570f0
    X86_AT(c, 0x56109u);
    push32(c, 0x5610eu); x86_call_known(c, 0x570f0u, f_000570f0); X86_RET(c, 0x5610eu);
    X86_TICK(c, 11);
    // 05610e  lea eax, [ebp + 0xc]
    X86_AT(c, 0x5610eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 056111  push eax
    X86_AT(c, 0x56111u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056112  call 0x56fe0
    X86_AT(c, 0x56112u);
    push32(c, 0x56117u); x86_call_known(c, 0x56fe0u, f_00056fe0); X86_RET(c, 0x56117u);
L_56117:
    X86_TICK(c, 11);
    // 056117  lea eax, [ebp + 0xc]
    X86_AT(c, 0x56117u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 05611a  push eax
    X86_AT(c, 0x5611au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05611b  call 0x56f80
    X86_AT(c, 0x5611bu);
    push32(c, 0x56120u); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x56120u);
    X86_TICK(c, 11);
    // 056120  mov eax, 0x1724
    X86_AT(c, 0x56120u);
    c.r[0] = 0x1724u;
    // 056125  push eax
    X86_AT(c, 0x56125u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056126  call 0x56f80
    X86_AT(c, 0x56126u);
    push32(c, 0x5612bu); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x5612bu);
    X86_TICK(c, 7);
    // 05612b  call 0x57424
    X86_AT(c, 0x5612bu);
    push32(c, 0x56130u); x86_call_known(c, 0x57424u, f_00057424); X86_RET(c, 0x56130u);
    X86_TICK(c, 5);
    // 056130  jae 0x56157
    X86_AT(c, 0x56130u);
    if (x86_cc(c, 3)) { goto L_56157; }
    X86_TICK(c, 11);
    // 056132  lea eax, [ebp + 0xc]
    X86_AT(c, 0x56132u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 056135  push eax
    X86_AT(c, 0x56135u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056136  call 0x56f80
    X86_AT(c, 0x56136u);
    push32(c, 0x5613bu); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x5613bu);
    X86_TICK(c, 12);
    // 05613b  push dword ptr [0x1730]
    X86_AT(c, 0x5613bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1730u))); push32(c, v); }
    // 056141  call 0x56f08
    X86_AT(c, 0x56141u);
    push32(c, 0x56146u); x86_call_known(c, 0x56f08u, f_00056f08); X86_RET(c, 0x56146u);
    X86_TICK(c, 7);
    // 056146  call 0x570f0
    X86_AT(c, 0x56146u);
    push32(c, 0x5614bu); x86_call_known(c, 0x570f0u, f_000570f0); X86_RET(c, 0x5614bu);
    X86_TICK(c, 11);
    // 05614b  lea eax, [ebp + 0xc]
    X86_AT(c, 0x5614bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 05614e  push eax
    X86_AT(c, 0x5614eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05614f  call 0x56fe0
    X86_AT(c, 0x5614fu);
    push32(c, 0x56154u); x86_call_known(c, 0x56fe0u, f_00056fe0); X86_RET(c, 0x56154u);
    X86_TICK(c, 6);
    // 056154  dec dword ptr [ebp - 4]
    X86_AT(c, 0x56154u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_56157:
    X86_TICK(c, 15);
    // 056157  mov byte ptr [ebp - 0x21], 0
    X86_AT(c, 0x56157u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), 0x0u);
    // 05615b  movzx eax, byte ptr [ebp + 0x18]
    X86_AT(c, 0x5615bu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 05615f  cmp eax, 0x45
    X86_AT(c, 0x5615fu);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 056162  je 0x56189
    X86_AT(c, 0x56162u);
    if (x86_cc(c, 4)) { goto L_56189; }
    X86_TICK(c, 7);
    // 056164  cmp eax, 0x47
    X86_AT(c, 0x56164u);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 056167  je 0x5618e
    X86_AT(c, 0x56167u);
    if (x86_cc(c, 4)) { goto L_5618e; }
    X86_TICK(c, 7);
    // 056169  cmp eax, 0x65
    X86_AT(c, 0x56169u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 05616c  je 0x56189
    X86_AT(c, 0x5616cu);
    if (x86_cc(c, 4)) { goto L_56189; }
    X86_TICK(c, 7);
    // 05616e  cmp eax, 0x66
    X86_AT(c, 0x5616eu);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 056171  je 0x5617a
    X86_AT(c, 0x56171u);
    if (x86_cc(c, 4)) { goto L_5617a; }
    X86_TICK(c, 7);
    // 056173  cmp eax, 0x67
    X86_AT(c, 0x56173u);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 056176  je 0x5618e
    X86_AT(c, 0x56176u);
    if (x86_cc(c, 4)) { goto L_5618e; }
    X86_TICK(c, 7);
    // 056178  jmp 0x5619f
    X86_AT(c, 0x56178u);
    goto L_5619f;
L_5617a:
    X86_TICK(c, 17);
    // 05617a  mov eax, edi
    X86_AT(c, 0x5617au);
    c.r[0] = c.r[7];
    // 05617c  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x5617cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 05617f  sub edx, edx
    X86_AT(c, 0x5617fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 056181  cmp eax, edx
    X86_AT(c, 0x56181u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 056183  jl 0x56186
    X86_AT(c, 0x56183u);
    if (x86_cc(c, 12)) { goto L_56186; }
    X86_TICK(c, 3);
    // 056185  xchg edx, eax
    X86_AT(c, 0x56185u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_56186:
    X86_TICK(c, 9);
    // 056186  push edx
    X86_AT(c, 0x56186u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 056187  jmp 0x56198
    X86_AT(c, 0x56187u);
    goto L_56198;
L_56189:
    X86_TICK(c, 9);
    // 056189  lea eax, [edi + 1]
    X86_AT(c, 0x56189u);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 05618c  jmp 0x56197
    X86_AT(c, 0x5618cu);
    goto L_56197;
L_5618e:
    X86_TICK(c, 11);
    // 05618e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x5618eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 056191  cmp edi, eax
    X86_AT(c, 0x56191u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 056193  jl 0x56197
    X86_AT(c, 0x56193u);
    if (x86_cc(c, 12)) { goto L_56197; }
    X86_TICK(c, 2);
    // 056195  mov eax, edi
    X86_AT(c, 0x56195u);
    c.r[0] = c.r[7];
L_56197:
    X86_TICK(c, 2);
    // 056197  push eax
    X86_AT(c, 0x56197u);
    { uint32_t v = c.r[0]; push32(c, v); }
L_56198:
    X86_TICK(c, 9);
    // 056198  mov ecx, ebp
    X86_AT(c, 0x56198u);
    c.r[1] = c.r[5];
    // 05619a  call 0x55f24
    X86_AT(c, 0x5619au);
    push32(c, 0x5619fu); x86_call_known(c, 0x55f24u, f_00055f24); X86_RET(c, 0x5619fu);
L_5619f:
    X86_TICK(c, 9);
    // 05619f  mov ecx, ebp
    X86_AT(c, 0x5619fu);
    c.r[1] = c.r[5];
    // 0561a1  call 0x55e44
    X86_AT(c, 0x561a1u);
    push32(c, 0x561a6u); x86_call_known(c, 0x55e44u, f_00055e44); X86_RET(c, 0x561a6u);
    X86_TICK(c, 34);
    // 0561a6  mov eax, 0x30303030
    X86_AT(c, 0x561a6u);
    c.r[0] = 0x30303030u;
    // 0561ab  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x561abu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0561ae  add edx, 4
    X86_AT(c, 0x561aeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x4u, 0, 4); }
    // 0561b1  push edi
    X86_AT(c, 0x561b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0561b2  mov edi, edx
    X86_AT(c, 0x561b2u);
    c.r[7] = c.r[2];
    // 0561b4  mov ecx, 0x12
    X86_AT(c, 0x561b4u);
    c.r[1] = 0x12u;
    // 0561b9  stosb byte ptr es:[edi], al
    X86_AT(c, 0x561b9u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0561bb  pop edi
    X86_AT(c, 0x561bbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0561bc  sub ebx, ebx
    X86_AT(c, 0x561bcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0561be  jmp 0x561d2
    X86_AT(c, 0x561beu);
    goto L_561d2;
L_561c0:
    X86_TICK(c, 22);
    // 0561c0  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0x561c0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0561c3  mov dl, byte ptr [ebp + eax*1 - 0x1c]
    X86_AT(c, 0x561c3u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFE4u))));
    // 0561c7  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x561c7u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0561ca  mov byte ptr [ecx + ebx*1 + 4], dl
    X86_AT(c, 0x561cau);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[3] + 0x4u)), g8(c, 2));
    // 0561ce  inc dword ptr [ebp - 0x20]
    X86_AT(c, 0x561ceu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0561d1  inc ebx
    X86_AT(c, 0x561d1u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_561d2:
    X86_TICK(c, 12);
    // 0561d2  cmp dword ptr [ebp - 0x20], 0x12
    X86_AT(c, 0x561d2u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0x12u, 0, 4);
    // 0561d6  jle 0x561c0
    X86_AT(c, 0x561d6u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0x561c0u); goto L_561c0; }
    X86_TICK(c, 10);
    // 0561d8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x561d8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0561db  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x561dbu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0561de  mov dword ptr [edx], eax
    X86_AT(c, 0x561deu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_561e0:
    X86_TICK(c, 28);
    // 0561e0  pop edi
    X86_AT(c, 0x561e0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0561e1  pop esi
    X86_AT(c, 0x561e1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0561e2  pop ebx
    X86_AT(c, 0x561e2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0561e3  leave 
    X86_AT(c, 0x561e3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0561e4  ret 0x20
    X86_AT(c, 0x561e4u);
    c.eip = pop32(c); c.r[4] += 0x20u; return;
    x86_fault(c, 0x55ff4u, "ran off the end of a function");
}
void f_000561fc(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0561fc  push ebp
    X86_AT(c, 0x561fcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0561fd  mov ebp, esp
    X86_AT(c, 0x561fdu);
    c.r[5] = c.r[4];
    // 0561ff  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x561ffu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 056202  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x56202u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 056205  push dword ptr [ebp + 8]
    X86_AT(c, 0x56205u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 056208  call 0x56f44
    X86_AT(c, 0x56208u);
    push32(c, 0x5620du); x86_call_known(c, 0x56f44u, f_00056f44); X86_RET(c, 0x5620du);
    X86_TICK(c, 11);
    // 05620d  sub esp, 0xc
    X86_AT(c, 0x5620du);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 056210  push esp
    X86_AT(c, 0x56210u);
    { uint32_t v = c.r[4]; push32(c, v); }
    // 056211  call 0x56fe0
    X86_AT(c, 0x56211u);
    push32(c, 0x56216u); x86_call_known(c, 0x56fe0u, f_00056fe0); X86_RET(c, 0x56216u);
    X86_TICK(c, 7);
    // 056216  call 0x56928
    X86_AT(c, 0x56216u);
    push32(c, 0x5621bu); x86_call_known(c, 0x56928u, f_00056928); X86_RET(c, 0x5621bu);
    X86_TICK(c, 16);
    // 05621b  leave 
    X86_AT(c, 0x5621bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05621c  ret 0xc
    X86_AT(c, 0x5621cu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x561fcu, "ran off the end of a function");
}
void f_00056224(X86Cpu& c) {
    X86_TICK(c, 17);
    // 056224  push ebp
    X86_AT(c, 0x56224u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 056225  mov ebp, esp
    X86_AT(c, 0x56225u);
    c.r[5] = c.r[4];
    // 056227  push ecx
    X86_AT(c, 0x56227u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 056228  mov eax, dword ptr [0x4b4b0]
    X86_AT(c, 0x56228u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B4B0u)));
    // 05622d  cmp eax, 0xffff
    X86_AT(c, 0x5622du);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 056232  je 0x56244
    X86_AT(c, 0x56232u);
    if (x86_cc(c, 4)) { goto L_56244; }
    X86_TICK(c, 11);
    // 056234  mov edx, dword ptr [0x4b8b8]
    X86_AT(c, 0x56234u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B8B8u)));
    // 05623a  cmp eax, edx
    X86_AT(c, 0x5623au);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 05623c  jbe 0x56244
    X86_AT(c, 0x5623cu);
    if (x86_cc(c, 6)) { goto L_56244; }
    X86_TICK(c, 9);
    // 05623e  push edx
    X86_AT(c, 0x5623eu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 05623f  call 0x548d4
    X86_AT(c, 0x5623fu);
    push32(c, 0x56244u); x86_call_known(c, 0x548d4u, f_000548d4); X86_RET(c, 0x56244u);
L_56244:
    X86_TICK(c, 18);
    // 056244  mov byte ptr [0x4b8b0], 1
    X86_AT(c, 0x56244u);
    wr8((c.sbase[3] + (uint32_t)(0x4B8B0u)), 0x1u);
    // 05624b  leave 
    X86_AT(c, 0x5624bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05624c  ret 
    X86_AT(c, 0x5624cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x56224u, "ran off the end of a function");
}
void f_00056258(X86Cpu& c) {
    X86_TICK(c, 23);
    // 056258  push ebp
    X86_AT(c, 0x56258u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 056259  mov ebp, esp
    X86_AT(c, 0x56259u);
    c.r[5] = c.r[4];
    // 05625b  push ecx
    X86_AT(c, 0x5625bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 05625c  inc dword ptr [0x4b4bc]
    X86_AT(c, 0x5625cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4BCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 056262  mov eax, dword ptr [0x4b4b0]
    X86_AT(c, 0x56262u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B4B0u)));
    // 056267  cmp eax, 0xffff
    X86_AT(c, 0x56267u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 05626c  je 0x56279
    X86_AT(c, 0x5626cu);
    if (x86_cc(c, 4)) { goto L_56279; }
    X86_TICK(c, 7);
    // 05626e  cmp eax, 1
    X86_AT(c, 0x5626eu);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 056271  jb 0x56279
    X86_AT(c, 0x56271u);
    if (x86_cc(c, 2)) { goto L_56279; }
    X86_TICK(c, 6);
    // 056273  dec dword ptr [0x4b4b0]
    X86_AT(c, 0x56273u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4B0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_56279:
    X86_TICK(c, 16);
    // 056279  leave 
    X86_AT(c, 0x56279u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05627a  ret 
    X86_AT(c, 0x5627au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x56258u, "ran off the end of a function");
}
void f_00056288(X86Cpu& c) {
    X86_TICK(c, 27);
    // 056288  push ebp
    X86_AT(c, 0x56288u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 056289  mov ebp, esp
    X86_AT(c, 0x56289u);
    c.r[5] = c.r[4];
    // 05628b  push ecx
    X86_AT(c, 0x5628bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 05628c  push ebx
    X86_AT(c, 0x5628cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 05628d  mov dword ptr [0x4b8b4], 0
    X86_AT(c, 0x5628du);
    wr32((c.sbase[3] + (uint32_t)(0x4B8B4u)), 0x0u);
    // 056297  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x56297u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 05629a  add eax, 8
    X86_AT(c, 0x5629au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 05629d  push eax
    X86_AT(c, 0x5629du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05629e  mov ebx, eax
    X86_AT(c, 0x5629eu);
    c.r[3] = c.r[0];
    // 0562a0  call 0x56f80
    X86_AT(c, 0x562a0u);
    push32(c, 0x562a5u); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x562a5u);
    X86_TICK(c, 12);
    // 0562a5  push dword ptr [0x1718]
    X86_AT(c, 0x562a5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1718u))); push32(c, v); }
    // 0562ab  call 0x56f08
    X86_AT(c, 0x562abu);
    push32(c, 0x562b0u); x86_call_known(c, 0x56f08u, f_00056f08); X86_RET(c, 0x562b0u);
    X86_TICK(c, 7);
    // 0562b0  call 0x57424
    X86_AT(c, 0x562b0u);
    push32(c, 0x562b5u); x86_call_known(c, 0x57424u, f_00057424); X86_RET(c, 0x562b5u);
    X86_TICK(c, 5);
    // 0562b5  jae 0x562d1
    X86_AT(c, 0x562b5u);
    if (x86_cc(c, 3)) { goto L_562d1; }
    X86_TICK(c, 9);
    // 0562b7  push ebx
    X86_AT(c, 0x562b7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0562b8  call 0x56f80
    X86_AT(c, 0x562b8u);
    push32(c, 0x562bdu); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x562bdu);
    X86_TICK(c, 7);
    // 0562bd  call 0x57058
    X86_AT(c, 0x562bdu);
    push32(c, 0x562c2u); x86_call_known(c, 0x57058u, f_00057058); X86_RET(c, 0x562c2u);
    X86_TICK(c, 9);
    // 0562c2  push ebx
    X86_AT(c, 0x562c2u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0562c3  call 0x56fe0
    X86_AT(c, 0x562c3u);
    push32(c, 0x562c8u); x86_call_known(c, 0x56fe0u, f_00056fe0); X86_RET(c, 0x562c8u);
    X86_TICK(c, 9);
    // 0562c8  mov byte ptr [0x4b8ac], 0x2d
    X86_AT(c, 0x562c8u);
    wr8((c.sbase[3] + (uint32_t)(0x4B8ACu)), 0x2Du);
    // 0562cf  jmp 0x562f3
    X86_AT(c, 0x562cfu);
    goto L_562f3;
L_562d1:
    X86_TICK(c, 12);
    // 0562d1  test byte ptr [0x4b4ac], 2
    X86_AT(c, 0x562d1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x2u, 1);
    // 0562d8  je 0x562e3
    X86_AT(c, 0x562d8u);
    if (x86_cc(c, 4)) { goto L_562e3; }
    X86_TICK(c, 9);
    // 0562da  mov byte ptr [0x4b8ac], 0x2b
    X86_AT(c, 0x562dau);
    wr8((c.sbase[3] + (uint32_t)(0x4B8ACu)), 0x2Bu);
    // 0562e1  jmp 0x562f3
    X86_AT(c, 0x562e1u);
    goto L_562f3;
L_562e3:
    X86_TICK(c, 12);
    // 0562e3  test byte ptr [0x4b4ac], 4
    X86_AT(c, 0x562e3u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x4u, 1);
    // 0562ea  je 0x56304
    X86_AT(c, 0x562eau);
    if (x86_cc(c, 4)) { goto L_56304; }
    X86_TICK(c, 2);
    // 0562ec  mov byte ptr [0x4b8ac], 0x20
    X86_AT(c, 0x562ecu);
    wr8((c.sbase[3] + (uint32_t)(0x4B8ACu)), 0x20u);
L_562f3:
    X86_TICK(c, 11);
    // 0562f3  mov dword ptr [0x4b8b4], 1
    X86_AT(c, 0x562f3u);
    wr32((c.sbase[3] + (uint32_t)(0x4B8B4u)), 0x1u);
    // 0562fd  mov ecx, ebp
    X86_AT(c, 0x562fdu);
    c.r[1] = c.r[5];
    // 0562ff  call 0x56258
    X86_AT(c, 0x562ffu);
    push32(c, 0x56304u); x86_call_known(c, 0x56258u, f_00056258); X86_RET(c, 0x56304u);
L_56304:
    X86_TICK(c, 20);
    // 056304  pop ebx
    X86_AT(c, 0x56304u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 056305  leave 
    X86_AT(c, 0x56305u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 056306  ret 
    X86_AT(c, 0x56306u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x56288u, "ran off the end of a function");
}
void f_00056320(X86Cpu& c) {
    X86_TICK(c, 27);
    // 056320  push ebp
    X86_AT(c, 0x56320u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 056321  mov ebp, esp
    X86_AT(c, 0x56321u);
    c.r[5] = c.r[4];
    // 056323  push ecx
    X86_AT(c, 0x56323u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 056324  push esi
    X86_AT(c, 0x56324u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056325  push edi
    X86_AT(c, 0x56325u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056326  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x56326u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 056329  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x56329u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 05632c  mov ecx, edi
    X86_AT(c, 0x5632cu);
    c.r[1] = c.r[7];
    // 05632e  jmp 0x56331
    X86_AT(c, 0x5632eu);
    goto L_56331;
L_56330:
    X86_TICK(c, 2);
    // 056330  dec ecx
    X86_AT(c, 0x56330u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_56331:
    X86_TICK(c, 7);
    // 056331  cmp esi, ecx
    X86_AT(c, 0x56331u);
    (void)x86_sub(c, c.r[6], c.r[1], 0, 4);
    // 056333  jae 0x5633e
    X86_AT(c, 0x56333u);
    if (x86_cc(c, 3)) { goto L_5633e; }
    X86_TICK(c, 12);
    // 056335  cmp byte ptr [ecx + 0x4b88a], 0x30
    X86_AT(c, 0x56335u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0x4B88Au))), 0x30u, 0, 1);
    // 05633c  je 0x56330
    X86_AT(c, 0x5633cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x56330u); goto L_56330; }
L_5633e:
    X86_TICK(c, 9);
    // 05633e  lea eax, [esi + 1]
    X86_AT(c, 0x5633eu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 056341  cmp eax, ecx
    X86_AT(c, 0x56341u);
    (void)x86_sub(c, c.r[0], c.r[1], 0, 4);
    // 056343  jne 0x56358
    X86_AT(c, 0x56343u);
    if (x86_cc(c, 5)) { goto L_56358; }
    X86_TICK(c, 12);
    // 056345  test byte ptr [0x4b4ac], 8
    X86_AT(c, 0x56345u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x8u, 1);
    // 05634c  jne 0x56358
    X86_AT(c, 0x5634cu);
    if (x86_cc(c, 5)) { goto L_56358; }
    X86_TICK(c, 12);
    // 05634e  cmp byte ptr [esi + 0x4b88b], 0x2e
    X86_AT(c, 0x5634eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x4B88Bu))), 0x2Eu, 0, 1);
    // 056355  jne 0x56358
    X86_AT(c, 0x56355u);
    if (x86_cc(c, 5)) { goto L_56358; }
    X86_TICK(c, 2);
    // 056357  dec ecx
    X86_AT(c, 0x56357u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_56358:
    X86_TICK(c, 43);
    // 056358  lea eax, [ecx - 1]
    X86_AT(c, 0x56358u);
    c.r[0] = (uint32_t)(c.r[1] + 0xFFFFFFFFu);
    // 05635b  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x5635bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 05635e  mov dword ptr [edx - 0x10], eax
    X86_AT(c, 0x5635eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[0]);
    // 056361  mov eax, edi
    X86_AT(c, 0x56361u);
    c.r[0] = c.r[7];
    // 056363  sub eax, ecx
    X86_AT(c, 0x56363u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 056365  sub dword ptr [0x4b8b8], eax
    X86_AT(c, 0x56365u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B8B8u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 05636b  pop edi
    X86_AT(c, 0x5636bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05636c  pop esi
    X86_AT(c, 0x5636cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 05636d  leave 
    X86_AT(c, 0x5636du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05636e  ret 8
    X86_AT(c, 0x5636eu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x56320u, "ran off the end of a function");
}
void f_0005638c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 05638c  push ebp
    X86_AT(c, 0x5638cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 05638d  mov ebp, esp
    X86_AT(c, 0x5638du);
    c.r[5] = c.r[4];
    // 05638f  push ecx
    X86_AT(c, 0x5638fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 056390  test byte ptr [0x4b4ac], 1
    X86_AT(c, 0x56390u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x1u, 1);
    // 056397  jne 0x563ad
    X86_AT(c, 0x56397u);
    if (x86_cc(c, 5)) { goto L_563ad; }
    X86_TICK(c, 12);
    // 056399  test byte ptr [0x4b4ac], 0x10
    X86_AT(c, 0x56399u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x10u, 1);
    // 0563a0  jne 0x563ad
    X86_AT(c, 0x563a0u);
    if (x86_cc(c, 5)) { goto L_563ad; }
    X86_TICK(c, 15);
    // 0563a2  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x563a2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0563a5  mov ecx, dword ptr [eax - 4]
    X86_AT(c, 0x563a5u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 0563a8  call 0x56224
    X86_AT(c, 0x563a8u);
    push32(c, 0x563adu); x86_call_known(c, 0x56224u, f_00056224); X86_RET(c, 0x563adu);
L_563ad:
    X86_TICK(c, 11);
    // 0563ad  mov eax, dword ptr [0x4b8b4]
    X86_AT(c, 0x563adu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B8B4u)));
    // 0563b2  and eax, eax
    X86_AT(c, 0x563b2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0563b4  je 0x563c8
    X86_AT(c, 0x563b4u);
    if (x86_cc(c, 4)) { goto L_563c8; }
    X86_TICK(c, 15);
    // 0563b6  push eax
    X86_AT(c, 0x563b6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0563b7  push 0x4b8ac
    X86_AT(c, 0x563b7u);
    { uint32_t v = 0x4B8ACu; push32(c, v); }
    // 0563bc  mov ecx, dword ptr [0x4b4c4]
    X86_AT(c, 0x563bcu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4C4u)));
    // 0563c2  call dword ptr [0x4b4c0]
    X86_AT(c, 0x563c2u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4B4C0u))); push32(c, 0x563c8u); x86_call(c, t); X86_RET(c, 0x563c8u); }
L_563c8:
    X86_TICK(c, 12);
    // 0563c8  test byte ptr [0x4b4ac], 1
    X86_AT(c, 0x563c8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x1u, 1);
    // 0563cf  jne 0x563e5
    X86_AT(c, 0x563cfu);
    if (x86_cc(c, 5)) { goto L_563e5; }
    X86_TICK(c, 12);
    // 0563d1  cmp byte ptr [0x4b8b0], 0
    X86_AT(c, 0x563d1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B8B0u))), 0x0u, 0, 1);
    // 0563d8  jne 0x563e5
    X86_AT(c, 0x563d8u);
    if (x86_cc(c, 5)) { goto L_563e5; }
    X86_TICK(c, 15);
    // 0563da  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x563dau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0563dd  mov ecx, dword ptr [eax - 4]
    X86_AT(c, 0x563ddu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 0563e0  call 0x56224
    X86_AT(c, 0x563e0u);
    push32(c, 0x563e5u); x86_call_known(c, 0x56224u, f_00056224); X86_RET(c, 0x563e5u);
L_563e5:
    X86_TICK(c, 16);
    // 0563e5  leave 
    X86_AT(c, 0x563e5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0563e6  ret 
    X86_AT(c, 0x563e6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5638cu, "ran off the end of a function");
}
void f_000563f0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0563f0  push ebp
    X86_AT(c, 0x563f0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0563f1  mov ebp, esp
    X86_AT(c, 0x563f1u);
    c.r[5] = c.r[4];
    // 0563f3  push ecx
    X86_AT(c, 0x563f3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0563f4  push ebx
    X86_AT(c, 0x563f4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0563f5  push esi
    X86_AT(c, 0x563f5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0563f6  push edi
    X86_AT(c, 0x563f6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0563f7  cmp dword ptr [0x4b8bc], 0
    X86_AT(c, 0x563f7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x4B8BCu))), 0x0u, 0, 4);
    // 0563fe  jle 0x5652f
    X86_AT(c, 0x563feu);
    if (x86_cc(c, 14)) { goto L_5652f; }
    X86_TICK(c, 12);
    // 056404  cmp byte ptr [0x4b8d3], 0
    X86_AT(c, 0x56404u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B8D3u))), 0x0u, 0, 1);
    // 05640b  je 0x5641e
    X86_AT(c, 0x5640bu);
    if (x86_cc(c, 4)) { goto L_5641e; }
    X86_TICK(c, 8);
    // 05640d  mov byte ptr [0x4b88c], 0x2e
    X86_AT(c, 0x5640du);
    wr8((c.sbase[3] + (uint32_t)(0x4B88Cu)), 0x2Eu);
    // 056414  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x56414u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 056417  mov dword ptr [eax - 0x10], 1
    X86_AT(c, 0x56417u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)), 0x1u);
L_5641e:
    X86_TICK(c, 11);
    // 05641e  mov eax, dword ptr [0x4b4b4]
    X86_AT(c, 0x5641eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B4B4u)));
    // 056423  and eax, eax
    X86_AT(c, 0x56423u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 056425  je 0x5649d
    X86_AT(c, 0x56425u);
    if (x86_cc(c, 4)) { goto L_5649d; }
    X86_TICK(c, 19);
    // 05642b  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x5642bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 05642e  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0x5642eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 056431  mov esi, dword ptr [0x4b8bc]
    X86_AT(c, 0x56431u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x4B8BCu)));
    // 056437  cmp esi, ecx
    X86_AT(c, 0x56437u);
    (void)x86_sub(c, c.r[6], c.r[1], 0, 4);
    // 056439  jge 0x56477
    X86_AT(c, 0x56439u);
    if (x86_cc(c, 13)) { goto L_56477; }
    X86_TICK(c, 9);
    // 05643b  sub ecx, esi
    X86_AT(c, 0x5643bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 05643d  cmp ecx, eax
    X86_AT(c, 0x5643du);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 05643f  jb 0x56443
    X86_AT(c, 0x5643fu);
    if (x86_cc(c, 2)) { goto L_56443; }
    X86_TICK(c, 2);
    // 056441  mov ecx, eax
    X86_AT(c, 0x56441u);
    c.r[1] = c.r[0];
L_56443:
    X86_TICK(c, 44);
    // 056443  mov edi, ecx
    X86_AT(c, 0x56443u);
    c.r[7] = c.r[1];
    // 056445  add esi, 0x4b8c0
    X86_AT(c, 0x56445u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4B8C0u, 0, 4); }
    // 05644b  mov ebx, 0x4b88d
    X86_AT(c, 0x5644bu);
    c.r[3] = 0x4B88Du;
    // 056450  push edi
    X86_AT(c, 0x56450u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056451  mov edi, ebx
    X86_AT(c, 0x56451u);
    c.r[7] = c.r[3];
    // 056453  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x56453u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 056455  pop edi
    X86_AT(c, 0x56455u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 056456  lea ecx, [edi + 1]
    X86_AT(c, 0x56456u);
    c.r[1] = (uint32_t)(c.r[7] + 0x1u);
    // 056459  mov dword ptr [edx - 0x10], ecx
    X86_AT(c, 0x56459u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[1]);
    // 05645c  sub dword ptr [0x4b4b4], edi
    X86_AT(c, 0x5645cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4B4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 056462  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x56462u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 056466  je 0x564b0
    X86_AT(c, 0x56466u);
    if (x86_cc(c, 4)) { goto L_564b0; }
    X86_TICK(c, 15);
    // 056468  push 1
    X86_AT(c, 0x56468u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 05646a  lea eax, [edi + 2]
    X86_AT(c, 0x5646au);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 05646d  push eax
    X86_AT(c, 0x5646du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05646e  mov ecx, edx
    X86_AT(c, 0x5646eu);
    c.r[1] = c.r[2];
    // 056470  call 0x56320
    X86_AT(c, 0x56470u);
    push32(c, 0x56475u); x86_call_known(c, 0x56320u, f_00056320); X86_RET(c, 0x56475u);
    X86_TICK(c, 7);
    // 056475  jmp 0x564b0
    X86_AT(c, 0x56475u);
    goto L_564b0;
L_56477:
    X86_TICK(c, 16);
    // 056477  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x56477u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 05647a  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x5647au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 05647e  je 0x564b0
    X86_AT(c, 0x5647eu);
    if (x86_cc(c, 4)) { goto L_564b0; }
    X86_TICK(c, 12);
    // 056480  test byte ptr [0x4b4ac], 8
    X86_AT(c, 0x56480u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x8u, 1);
    // 056487  jne 0x564b0
    X86_AT(c, 0x56487u);
    if (x86_cc(c, 5)) { goto L_564b0; }
    X86_TICK(c, 12);
    // 056489  cmp dword ptr [0x4b4b0], 0xffff
    X86_AT(c, 0x56489u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x4B4B0u))), 0xFFFFu, 0, 4);
    // 056493  je 0x564a6
    X86_AT(c, 0x56493u);
    if (x86_cc(c, 4)) { goto L_564a6; }
    X86_TICK(c, 13);
    // 056495  dec dword ptr [0x4b8b8]
    X86_AT(c, 0x56495u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B8B8u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 05649b  jmp 0x564a6
    X86_AT(c, 0x5649bu);
    goto L_564a6;
L_5649d:
    X86_TICK(c, 12);
    // 05649d  test byte ptr [0x4b4ac], 8
    X86_AT(c, 0x5649du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x8u, 1);
    // 0564a4  jne 0x564b0
    X86_AT(c, 0x564a4u);
    if (x86_cc(c, 5)) { goto L_564b0; }
L_564a6:
    X86_TICK(c, 6);
    // 0564a6  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x564a6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0564a9  mov dword ptr [eax - 0x10], 0
    X86_AT(c, 0x564a9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)), 0x0u);
L_564b0:
    X86_TICK(c, 13);
    // 0564b0  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x564b0u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0564b3  mov ebx, ecx
    X86_AT(c, 0x564b3u);
    c.r[3] = c.r[1];
    // 0564b5  call 0x5638c
    X86_AT(c, 0x564b5u);
    push32(c, 0x564bau); x86_call_known(c, 0x5638cu, f_0005638c); X86_RET(c, 0x564bau);
    X86_TICK(c, 15);
    // 0564ba  mov eax, dword ptr [ebx - 8]
    X86_AT(c, 0x564bau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF8u)));
    // 0564bd  mov edx, dword ptr [0x4b8bc]
    X86_AT(c, 0x564bdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B8BCu)));
    // 0564c3  cmp edx, eax
    X86_AT(c, 0x564c3u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0564c5  jl 0x564c8
    X86_AT(c, 0x564c5u);
    if (x86_cc(c, 12)) { goto L_564c8; }
    X86_TICK(c, 3);
    // 0564c7  xchg edx, eax
    X86_AT(c, 0x564c7u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_564c8:
    X86_TICK(c, 15);
    // 0564c8  push edx
    X86_AT(c, 0x564c8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0564c9  push 0x4b8c0
    X86_AT(c, 0x564c9u);
    { uint32_t v = 0x4B8C0u; push32(c, v); }
    // 0564ce  mov ecx, dword ptr [0x4b4c4]
    X86_AT(c, 0x564ceu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4C4u)));
    // 0564d4  call dword ptr [0x4b4c0]
    X86_AT(c, 0x564d4u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4B4C0u))); push32(c, 0x564dau); x86_call(c, t); X86_RET(c, 0x564dau); }
    X86_TICK(c, 15);
    // 0564da  mov eax, dword ptr [ebx - 8]
    X86_AT(c, 0x564dau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF8u)));
    // 0564dd  mov edx, dword ptr [0x4b8bc]
    X86_AT(c, 0x564ddu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B8BCu)));
    // 0564e3  cmp edx, eax
    X86_AT(c, 0x564e3u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0564e5  jle 0x564f4
    X86_AT(c, 0x564e5u);
    if (x86_cc(c, 14)) { goto L_564f4; }
    X86_TICK(c, 13);
    // 0564e7  sub edx, eax
    X86_AT(c, 0x564e7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0564e9  push edx
    X86_AT(c, 0x564e9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0564ea  push 0x4b4c8
    X86_AT(c, 0x564eau);
    { uint32_t v = 0x4B4C8u; push32(c, v); }
    // 0564ef  call 0x5488c
    X86_AT(c, 0x564efu);
    push32(c, 0x564f4u); x86_call_known(c, 0x5488cu, f_0005488c); X86_RET(c, 0x564f4u);
L_564f4:
    X86_TICK(c, 15);
    // 0564f4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x564f4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0564f7  mov eax, dword ptr [eax - 0x10]
    X86_AT(c, 0x564f7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)));
    // 0564fa  and eax, eax
    X86_AT(c, 0x564fau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0564fc  je 0x56510
    X86_AT(c, 0x564fcu);
    if (x86_cc(c, 4)) { goto L_56510; }
    X86_TICK(c, 15);
    // 0564fe  push eax
    X86_AT(c, 0x564feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0564ff  push 0x4b88c
    X86_AT(c, 0x564ffu);
    { uint32_t v = 0x4B88Cu; push32(c, v); }
    // 056504  mov ecx, dword ptr [0x4b4c4]
    X86_AT(c, 0x56504u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4C4u)));
    // 05650a  call dword ptr [0x4b4c0]
    X86_AT(c, 0x5650au);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4B4C0u))); push32(c, 0x56510u); x86_call(c, t); X86_RET(c, 0x56510u); }
L_56510:
    X86_TICK(c, 11);
    // 056510  mov eax, dword ptr [0x4b4b4]
    X86_AT(c, 0x56510u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B4B4u)));
    // 056515  and eax, eax
    X86_AT(c, 0x56515u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 056517  je 0x56673
    X86_AT(c, 0x56517u);
    if (x86_cc(c, 4)) { goto L_56673; }
    X86_TICK(c, 16);
    // 05651d  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x5651du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 056520  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x56520u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 056524  jne 0x56673
    X86_AT(c, 0x56524u);
    if (x86_cc(c, 5)) { goto L_56673; }
    X86_TICK(c, 7);
    // 05652a  jmp 0x56668
    X86_AT(c, 0x5652au);
    goto L_56668;
L_5652f:
    X86_TICK(c, 11);
    // 05652f  mov eax, dword ptr [0x4b8bc]
    X86_AT(c, 0x5652fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B8BCu)));
    // 056534  and eax, eax
    X86_AT(c, 0x56534u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 056536  jge 0x5653a
    X86_AT(c, 0x56536u);
    if (x86_cc(c, 13)) { goto L_5653a; }
    X86_TICK(c, 2);
    // 056538  neg eax
    X86_AT(c, 0x56538u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_5653a:
    X86_TICK(c, 13);
    // 05653a  mov dword ptr [0x4b8bc], eax
    X86_AT(c, 0x5653au);
    wr32((c.sbase[3] + (uint32_t)(0x4B8BCu)), c.r[0]);
    // 05653f  mov edx, dword ptr [0x4b4b4]
    X86_AT(c, 0x5653fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B4B4u)));
    // 056545  and edx, edx
    X86_AT(c, 0x56545u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 056547  je 0x56579
    X86_AT(c, 0x56547u);
    if (x86_cc(c, 4)) { goto L_56579; }
    X86_TICK(c, 7);
    // 056549  cmp edx, eax
    X86_AT(c, 0x56549u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 05654b  jle 0x56570
    X86_AT(c, 0x5654bu);
    if (x86_cc(c, 14)) { goto L_56570; }
    X86_TICK(c, 21);
    // 05654d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x5654du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 056550  mov eax, dword ptr [eax - 4]
    X86_AT(c, 0x56550u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 056553  add eax, 8
    X86_AT(c, 0x56553u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 056556  push eax
    X86_AT(c, 0x56556u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056557  mov ebx, eax
    X86_AT(c, 0x56557u);
    c.r[3] = c.r[0];
    // 056559  call 0x56f80
    X86_AT(c, 0x56559u);
    push32(c, 0x5655eu); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x5655eu);
    X86_TICK(c, 12);
    // 05655e  push dword ptr [0x1718]
    X86_AT(c, 0x5655eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1718u))); push32(c, v); }
    // 056564  call 0x56f08
    X86_AT(c, 0x56564u);
    push32(c, 0x56569u); x86_call_known(c, 0x56f08u, f_00056f08); X86_RET(c, 0x56569u);
    X86_TICK(c, 7);
    // 056569  call 0x57424
    X86_AT(c, 0x56569u);
    push32(c, 0x5656eu); x86_call_known(c, 0x57424u, f_00057424); X86_RET(c, 0x5656eu);
    X86_TICK(c, 5);
    // 05656e  jne 0x565cd
    X86_AT(c, 0x5656eu);
    if (x86_cc(c, 5)) { goto L_565cd; }
L_56570:
    X86_TICK(c, 16);
    // 056570  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x56570u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 056573  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x56573u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 056577  je 0x565ac
    X86_AT(c, 0x56577u);
    if (x86_cc(c, 4)) { goto L_565ac; }
L_56579:
    X86_TICK(c, 12);
    // 056579  test byte ptr [0x4b4ac], 8
    X86_AT(c, 0x56579u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x8u, 1);
    // 056580  jne 0x565a0
    X86_AT(c, 0x56580u);
    if (x86_cc(c, 5)) { goto L_565a0; }
    X86_TICK(c, 13);
    // 056582  mov dword ptr [0x4b8b8], 1
    X86_AT(c, 0x56582u);
    wr32((c.sbase[3] + (uint32_t)(0x4B8B8u)), 0x1u);
    // 05658c  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x5658cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 05658f  call 0x5638c
    X86_AT(c, 0x5658fu);
    push32(c, 0x56594u); x86_call_known(c, 0x5638cu, f_0005638c); X86_RET(c, 0x56594u);
    X86_TICK(c, 11);
    // 056594  push 1
    X86_AT(c, 0x56594u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 056596  push 0x1734
    X86_AT(c, 0x56596u);
    { uint32_t v = 0x1734u; push32(c, v); }
    // 05659b  jmp 0x5664a
    X86_AT(c, 0x5659bu);
    goto L_5664a;
L_565a0:
    X86_TICK(c, 9);
    // 0565a0  mov dword ptr [0x4b8b8], 2
    X86_AT(c, 0x565a0u);
    wr32((c.sbase[3] + (uint32_t)(0x4B8B8u)), 0x2u);
    // 0565aa  jmp 0x565b9
    X86_AT(c, 0x565aau);
    goto L_565b9;
L_565ac:
    X86_TICK(c, 8);
    // 0565ac  mov eax, dword ptr [0x4b4b4]
    X86_AT(c, 0x565acu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B4B4u)));
    // 0565b1  add eax, 2
    X86_AT(c, 0x565b1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0565b4  mov dword ptr [0x4b8b8], eax
    X86_AT(c, 0x565b4u);
    wr32((c.sbase[3] + (uint32_t)(0x4B8B8u)), c.r[0]);
L_565b9:
    X86_TICK(c, 11);
    // 0565b9  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x565b9u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0565bc  call 0x5638c
    X86_AT(c, 0x565bcu);
    push32(c, 0x565c1u); x86_call_known(c, 0x5638cu, f_0005638c); X86_RET(c, 0x565c1u);
    X86_TICK(c, 11);
    // 0565c1  push 2
    X86_AT(c, 0x565c1u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0565c3  push 0x1736
    X86_AT(c, 0x565c3u);
    { uint32_t v = 0x1736u; push32(c, v); }
    // 0565c8  jmp 0x5664a
    X86_AT(c, 0x565c8u);
    goto L_5664a;
L_565cd:
    X86_TICK(c, 30);
    // 0565cd  mov eax, dword ptr [0x4b8bc]
    X86_AT(c, 0x565cdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B8BCu)));
    // 0565d2  sub dword ptr [0x4b4b4], eax
    X86_AT(c, 0x565d2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4B4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0565d8  mov eax, dword ptr [0x4b4b4]
    X86_AT(c, 0x565d8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B4B4u)));
    // 0565dd  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x565ddu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0565e0  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0x565e0u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 0565e3  cmp ecx, eax
    X86_AT(c, 0x565e3u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 0565e5  jb 0x565e9
    X86_AT(c, 0x565e5u);
    if (x86_cc(c, 2)) { goto L_565e9; }
    X86_TICK(c, 2);
    // 0565e7  mov ecx, eax
    X86_AT(c, 0x565e7u);
    c.r[1] = c.r[0];
L_565e9:
    X86_TICK(c, 40);
    // 0565e9  mov edi, ecx
    X86_AT(c, 0x565e9u);
    c.r[7] = c.r[1];
    // 0565eb  mov esi, 0x4b8c0
    X86_AT(c, 0x565ebu);
    c.r[6] = 0x4B8C0u;
    // 0565f0  push edi
    X86_AT(c, 0x565f0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0565f1  mov edi, 0x4b88c
    X86_AT(c, 0x565f1u);
    c.r[7] = 0x4B88Cu;
    // 0565f6  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x565f6u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0565f8  pop edi
    X86_AT(c, 0x565f8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0565f9  sub dword ptr [0x4b4b4], edi
    X86_AT(c, 0x565f9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4B4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0565ff  mov dword ptr [edx - 0x10], edi
    X86_AT(c, 0x565ffu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[7]);
    // 056602  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x56602u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 056606  je 0x56615
    X86_AT(c, 0x56606u);
    if (x86_cc(c, 4)) { goto L_56615; }
    X86_TICK(c, 15);
    // 056608  push 1
    X86_AT(c, 0x56608u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 05660a  lea eax, [edi + 1]
    X86_AT(c, 0x5660au);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 05660d  push eax
    X86_AT(c, 0x5660du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05660e  mov ecx, edx
    X86_AT(c, 0x5660eu);
    c.r[1] = c.r[2];
    // 056610  call 0x56320
    X86_AT(c, 0x56610u);
    push32(c, 0x56615u); x86_call_known(c, 0x56320u, f_00056320); X86_RET(c, 0x56615u);
L_56615:
    X86_TICK(c, 13);
    // 056615  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x56615u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 056618  mov ebx, ecx
    X86_AT(c, 0x56618u);
    c.r[3] = c.r[1];
    // 05661a  call 0x5638c
    X86_AT(c, 0x5661au);
    push32(c, 0x5661fu); x86_call_known(c, 0x5638cu, f_0005638c); X86_RET(c, 0x5661fu);
    X86_TICK(c, 15);
    // 05661f  push 2
    X86_AT(c, 0x5661fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 056621  push 0x1736
    X86_AT(c, 0x56621u);
    { uint32_t v = 0x1736u; push32(c, v); }
    // 056626  mov ecx, dword ptr [0x4b4c4]
    X86_AT(c, 0x56626u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4C4u)));
    // 05662c  call dword ptr [0x4b4c0]
    X86_AT(c, 0x5662cu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4B4C0u))); push32(c, 0x56632u); x86_call(c, t); X86_RET(c, 0x56632u); }
    X86_TICK(c, 14);
    // 056632  push dword ptr [0x4b8bc]
    X86_AT(c, 0x56632u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4B8BCu))); push32(c, v); }
    // 056638  push 0x4b4c8
    X86_AT(c, 0x56638u);
    { uint32_t v = 0x4B4C8u; push32(c, v); }
    // 05663d  call 0x5488c
    X86_AT(c, 0x5663du);
    push32(c, 0x56642u); x86_call_known(c, 0x5488cu, f_0005488c); X86_RET(c, 0x56642u);
    X86_TICK(c, 7);
    // 056642  push dword ptr [ebx - 0x10]
    X86_AT(c, 0x56642u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF0u))); push32(c, v); }
    // 056645  push 0x4b88c
    X86_AT(c, 0x56645u);
    { uint32_t v = 0x4B88Cu; push32(c, v); }
L_5664a:
    X86_TICK(c, 11);
    // 05664a  mov ecx, dword ptr [0x4b4c4]
    X86_AT(c, 0x5664au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4C4u)));
    // 056650  call dword ptr [0x4b4c0]
    X86_AT(c, 0x56650u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4B4C0u))); push32(c, 0x56656u); x86_call(c, t); X86_RET(c, 0x56656u); }
    X86_TICK(c, 16);
    // 056656  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x56656u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 056659  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x56659u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 05665d  jne 0x56673
    X86_AT(c, 0x5665du);
    if (x86_cc(c, 5)) { goto L_56673; }
    X86_TICK(c, 11);
    // 05665f  mov eax, dword ptr [0x4b4b4]
    X86_AT(c, 0x5665fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B4B4u)));
    // 056664  and eax, eax
    X86_AT(c, 0x56664u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 056666  je 0x56673
    X86_AT(c, 0x56666u);
    if (x86_cc(c, 4)) { goto L_56673; }
L_56668:
    X86_TICK(c, 11);
    // 056668  push eax
    X86_AT(c, 0x56668u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056669  push 0x4b4c8
    X86_AT(c, 0x56669u);
    { uint32_t v = 0x4B4C8u; push32(c, v); }
    // 05666e  call 0x5488c
    X86_AT(c, 0x5666eu);
    push32(c, 0x56673u); x86_call_known(c, 0x5488cu, f_0005488c); X86_RET(c, 0x56673u);
L_56673:
    X86_TICK(c, 28);
    // 056673  pop edi
    X86_AT(c, 0x56673u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 056674  pop esi
    X86_AT(c, 0x56674u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 056675  pop ebx
    X86_AT(c, 0x56675u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 056676  leave 
    X86_AT(c, 0x56676u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 056677  ret 
    X86_AT(c, 0x56677u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x563f0u, "ran off the end of a function");
}
}

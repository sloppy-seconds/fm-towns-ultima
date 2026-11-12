#include "p_game_funcs.h"
namespace p_game {
void f_00093eb5(X86Cpu& c) {
    X86_TICK(c, 16);
    // 093eb5  leave 
    X86_AT(c, 0x93eb5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093eb6  ret 
    X86_AT(c, 0x93eb6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x93eb5u, "ran off the end of a function");
}
void f_00093ec0(X86Cpu& c) {
    X86_TICK(c, 17);
    // 093ec0  push ebp
    X86_AT(c, 0x93ec0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093ec1  mov ebp, esp
    X86_AT(c, 0x93ec1u);
    c.r[5] = c.r[4];
    // 093ec3  push ecx
    X86_AT(c, 0x93ec3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093ec4  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x93ec4u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093ec7  cmp ecx, 0xa
    X86_AT(c, 0x93ec7u);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 093eca  jge 0x93ed1
    X86_AT(c, 0x93ecau);
    if (x86_cc(c, 13)) { goto L_93ed1; }
    X86_TICK(c, 9);
    // 093ecc  add ecx, 0x30
    X86_AT(c, 0x93eccu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x30u, 0, 4); }
    // 093ecf  jmp 0x93ee5
    X86_AT(c, 0x93ecfu);
    goto L_93ee5;
L_93ed1:
    X86_TICK(c, 20);
    // 093ed1  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x93ed1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093ed4  mov eax, dword ptr [eax - 4]
    X86_AT(c, 0x93ed4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 093ed7  cmp byte ptr [eax + 0xc], 0x78
    X86_AT(c, 0x93ed7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))), 0x78u, 0, 1);
    // 093edb  jne 0x93ee2
    X86_AT(c, 0x93edbu);
    if (x86_cc(c, 5)) { goto L_93ee2; }
    X86_TICK(c, 9);
    // 093edd  add ecx, 0x57
    X86_AT(c, 0x93eddu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x57u, 0, 4); }
    // 093ee0  jmp 0x93ee5
    X86_AT(c, 0x93ee0u);
    goto L_93ee5;
L_93ee2:
    X86_TICK(c, 2);
    // 093ee2  add ecx, 0x37
    X86_AT(c, 0x93ee2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x37u, 0, 4); }
L_93ee5:
    X86_TICK(c, 30);
    // 093ee5  mov eax, ecx
    X86_AT(c, 0x93ee5u);
    c.r[0] = c.r[1];
    // 093ee7  mov edx, dword ptr [0x8a950]
    X86_AT(c, 0x93ee7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A950u)));
    // 093eed  mov byte ptr [edx + 0x8a92f], al
    X86_AT(c, 0x93eedu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0x8A92Fu)), g8(c, 0));
    // 093ef3  dec dword ptr [0x8a950]
    X86_AT(c, 0x93ef3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A950u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 093ef9  leave 
    X86_AT(c, 0x93ef9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093efa  ret 4
    X86_AT(c, 0x93efau);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x93ec0u, "ran off the end of a function");
}
void f_00093f0c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 093f0c  push ebp
    X86_AT(c, 0x93f0cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093f0d  mov ebp, esp
    X86_AT(c, 0x93f0du);
    c.r[5] = c.r[4];
    // 093f0f  push ecx
    X86_AT(c, 0x93f0fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093f10  push ebx
    X86_AT(c, 0x93f10u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093f11  push edi
    X86_AT(c, 0x93f11u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093f12  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x93f12u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093f15  mov edi, dword ptr [eax + 8]
    X86_AT(c, 0x93f15u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 093f18  mov dword ptr [0x8a950], 0x1e
    X86_AT(c, 0x93f18u);
    wr32((c.sbase[3] + (uint32_t)(0x8A950u)), 0x1Eu);
    // 093f22  and edi, edi
    X86_AT(c, 0x93f22u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 093f24  jbe 0x93f49
    X86_AT(c, 0x93f24u);
    if (x86_cc(c, 6)) { goto L_93f49; }
    X86_TICK(c, 7);
    // 093f26  jmp 0x93f43
    X86_AT(c, 0x93f26u);
    goto L_93f43;
L_93f28:
    X86_TICK(c, 69);
    // 093f28  movzx ecx, byte ptr [0x8a958]
    X86_AT(c, 0x93f28u);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(0x8A958u)));
    // 093f2f  mov eax, edi
    X86_AT(c, 0x93f2fu);
    c.r[0] = c.r[7];
    // 093f31  sub edx, edx
    X86_AT(c, 0x93f31u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 093f33  div ecx
    X86_AT(c, 0x93f33u);
    x86_div(c, c.r[1], 4, 0x93f33u);
    // 093f35  mov ebx, edx
    X86_AT(c, 0x93f35u);
    c.r[3] = c.r[2];
    // 093f37  xchg edi, eax
    X86_AT(c, 0x93f37u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 093f38  movzx ebx, bl
    X86_AT(c, 0x93f38u);
    c.r[3] = g8(c, 3);
    // 093f3b  push ebx
    X86_AT(c, 0x93f3bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093f3c  mov ecx, ebp
    X86_AT(c, 0x93f3cu);
    c.r[1] = c.r[5];
    // 093f3e  call 0x93ec0
    X86_AT(c, 0x93f3eu);
    push32(c, 0x93f43u); x86_call_known(c, 0x93ec0u, f_00093ec0); X86_RET(c, 0x93f43u);
L_93f43:
    X86_TICK(c, 7);
    // 093f43  and edi, edi
    X86_AT(c, 0x93f43u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 093f45  ja 0x93f28
    X86_AT(c, 0x93f45u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x93f28u); goto L_93f28; }
    X86_TICK(c, 7);
    // 093f47  jmp 0x93f5b
    X86_AT(c, 0x93f47u);
    goto L_93f5b;
L_93f49:
    X86_TICK(c, 12);
    // 093f49  mov eax, dword ptr [0x8a950]
    X86_AT(c, 0x93f49u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A950u)));
    // 093f4e  mov byte ptr [eax + 0x8a92f], 0x30
    X86_AT(c, 0x93f4eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8A92Fu)), 0x30u);
    // 093f55  dec dword ptr [0x8a950]
    X86_AT(c, 0x93f55u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A950u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_93f5b:
    X86_TICK(c, 40);
    // 093f5b  inc dword ptr [0x8a950]
    X86_AT(c, 0x93f5bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A950u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 093f61  mov eax, 0x1f
    X86_AT(c, 0x93f61u);
    c.r[0] = 0x1Fu;
    // 093f66  sub eax, dword ptr [0x8a950]
    X86_AT(c, 0x93f66u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A950u))), 0, 4); }
    // 093f6c  mov dword ptr [0x8a954], eax
    X86_AT(c, 0x93f6cu);
    wr32((c.sbase[3] + (uint32_t)(0x8A954u)), c.r[0]);
    // 093f71  pop edi
    X86_AT(c, 0x93f71u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093f72  pop ebx
    X86_AT(c, 0x93f72u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093f73  leave 
    X86_AT(c, 0x93f73u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093f74  ret 
    X86_AT(c, 0x93f74u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x93f0cu, "ran off the end of a function");
}
void f_00093f7c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 093f7c  push ebp
    X86_AT(c, 0x93f7cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093f7d  mov ebp, esp
    X86_AT(c, 0x93f7du);
    c.r[5] = c.r[4];
    // 093f7f  push ecx
    X86_AT(c, 0x93f7fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093f80  push dword ptr [0x8a960]
    X86_AT(c, 0x93f80u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A960u))); push32(c, v); }
    // 093f86  call 0x93a14
    X86_AT(c, 0x93f86u);
    push32(c, 0x93f8bu); x86_call_known(c, 0x93a14u, f_00093a14); X86_RET(c, 0x93f8bu);
    X86_TICK(c, 22);
    // 093f8b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x93f8bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093f8e  mov byte ptr [eax - 5], 0
    X86_AT(c, 0x93f8eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFBu)), 0x0u);
    // 093f92  leave 
    X86_AT(c, 0x93f92u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093f93  ret 
    X86_AT(c, 0x93f93u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x93f7cu, "ran off the end of a function");
}
void f_00093fa8(X86Cpu& c) {
    X86_TICK(c, 24);
    // 093fa8  push ebp
    X86_AT(c, 0x93fa8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093fa9  mov ebp, esp
    X86_AT(c, 0x93fa9u);
    c.r[5] = c.r[4];
    // 093fab  push ecx
    X86_AT(c, 0x93fabu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093fac  push eax
    X86_AT(c, 0x93facu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 093fad  push ebx
    X86_AT(c, 0x93fadu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093fae  push edi
    X86_AT(c, 0x93faeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093faf  cmp dword ptr [0x8a604], 0
    X86_AT(c, 0x93fafu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A604u))), 0x0u, 0, 4);
    // 093fb6  jne 0x93fca
    X86_AT(c, 0x93fb6u);
    if (x86_cc(c, 5)) { goto L_93fca; }
    X86_TICK(c, 12);
    // 093fb8  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0x93fb8u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 093fbc  jne 0x93fca
    X86_AT(c, 0x93fbcu);
    if (x86_cc(c, 5)) { goto L_93fca; }
    X86_TICK(c, 9);
    // 093fbe  push 0
    X86_AT(c, 0x93fbeu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 093fc0  call 0x93a14
    X86_AT(c, 0x93fc0u);
    push32(c, 0x93fc5u); x86_call_known(c, 0x93a14u, f_00093a14); X86_RET(c, 0x93fc5u);
    X86_TICK(c, 7);
    // 093fc5  jmp 0x940f0
    X86_AT(c, 0x93fc5u);
    goto L_940f0;
L_93fca:
    X86_TICK(c, 9);
    // 093fca  mov ecx, ebp
    X86_AT(c, 0x93fcau);
    c.r[1] = c.r[5];
    // 093fcc  call 0x93dc8
    X86_AT(c, 0x93fccu);
    push32(c, 0x93fd1u); x86_call_known(c, 0x93dc8u, f_00093dc8); X86_RET(c, 0x93fd1u);
    X86_TICK(c, 9);
    // 093fd1  mov ecx, ebp
    X86_AT(c, 0x93fd1u);
    c.r[1] = c.r[5];
    // 093fd3  call 0x93f0c
    X86_AT(c, 0x93fd3u);
    push32(c, 0x93fd8u); x86_call_known(c, 0x93f0cu, f_00093f0c); X86_RET(c, 0x93fd8u);
    X86_TICK(c, 12);
    // 093fd8  cmp dword ptr [0x8a604], 0xffff
    X86_AT(c, 0x93fd8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A604u))), 0xFFFFu, 0, 4);
    // 093fe2  jne 0x93ff0
    X86_AT(c, 0x93fe2u);
    if (x86_cc(c, 5)) { goto L_93ff0; }
    X86_TICK(c, 13);
    // 093fe4  mov eax, dword ptr [0x8a954]
    X86_AT(c, 0x93fe4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A954u)));
    // 093fe9  mov dword ptr [0x8a960], eax
    X86_AT(c, 0x93fe9u);
    wr32((c.sbase[3] + (uint32_t)(0x8A960u)), c.r[0]);
    // 093fee  jmp 0x94006
    X86_AT(c, 0x93feeu);
    goto L_94006;
L_93ff0:
    X86_TICK(c, 15);
    // 093ff0  mov eax, dword ptr [0x8a604]
    X86_AT(c, 0x93ff0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A604u)));
    // 093ff5  mov edx, dword ptr [0x8a954]
    X86_AT(c, 0x93ff5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A954u)));
    // 093ffb  cmp eax, edx
    X86_AT(c, 0x93ffbu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 093ffd  jb 0x94000
    X86_AT(c, 0x93ffdu);
    if (x86_cc(c, 2)) { goto L_94000; }
    X86_TICK(c, 3);
    // 093fff  xchg edx, eax
    X86_AT(c, 0x93fffu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_94000:
    X86_TICK(c, 2);
    // 094000  mov dword ptr [0x8a960], edx
    X86_AT(c, 0x94000u);
    wr32((c.sbase[3] + (uint32_t)(0x8A960u)), c.r[2]);
L_94006:
    X86_TICK(c, 11);
    // 094006  mov eax, dword ptr [0x8a600]
    X86_AT(c, 0x94006u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A600u)));
    // 09400b  cmp eax, 0xffff
    X86_AT(c, 0x9400bu);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 094010  je 0x9401e
    X86_AT(c, 0x94010u);
    if (x86_cc(c, 4)) { goto L_9401e; }
    X86_TICK(c, 11);
    // 094012  cmp eax, dword ptr [0x8a960]
    X86_AT(c, 0x94012u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A960u))), 0, 4);
    // 094018  jbe 0x9401e
    X86_AT(c, 0x94018u);
    if (x86_cc(c, 6)) { goto L_9401e; }
    X86_TICK(c, 9);
    // 09401a  mov bl, 1
    X86_AT(c, 0x9401au);
    s8(c, 3, 0x1u);
    // 09401c  jmp 0x94020
    X86_AT(c, 0x9401cu);
    goto L_94020;
L_9401e:
    X86_TICK(c, 2);
    // 09401e  sub ebx, ebx
    X86_AT(c, 0x9401eu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_94020:
    X86_TICK(c, 9);
    // 094020  mov byte ptr [ebp - 5], bl
    X86_AT(c, 0x94020u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 3));
    // 094023  and bl, bl
    X86_AT(c, 0x94023u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 094025  je 0x94040
    X86_AT(c, 0x94025u);
    if (x86_cc(c, 4)) { goto L_94040; }
    X86_TICK(c, 12);
    // 094027  test byte ptr [0x8a5fc], 1
    X86_AT(c, 0x94027u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x1u, 1);
    // 09402e  jne 0x94040
    X86_AT(c, 0x9402eu);
    if (x86_cc(c, 5)) { goto L_94040; }
    X86_TICK(c, 12);
    // 094030  test byte ptr [0x8a5fc], 0x10
    X86_AT(c, 0x94030u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x10u, 1);
    // 094037  jne 0x94040
    X86_AT(c, 0x94037u);
    if (x86_cc(c, 5)) { goto L_94040; }
    X86_TICK(c, 9);
    // 094039  mov ecx, ebp
    X86_AT(c, 0x94039u);
    c.r[1] = c.r[5];
    // 09403b  call 0x93f7c
    X86_AT(c, 0x9403bu);
    push32(c, 0x94040u); x86_call_known(c, 0x93f7cu, f_00093f7c); X86_RET(c, 0x94040u);
L_94040:
    X86_TICK(c, 11);
    // 094040  mov eax, dword ptr [0x8a964]
    X86_AT(c, 0x94040u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A964u)));
    // 094045  and eax, eax
    X86_AT(c, 0x94045u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094047  je 0x9405b
    X86_AT(c, 0x94047u);
    if (x86_cc(c, 4)) { goto L_9405b; }
    X86_TICK(c, 15);
    // 094049  push eax
    X86_AT(c, 0x94049u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09404a  push 0x8a95a
    X86_AT(c, 0x9404au);
    { uint32_t v = 0x8A95Au; push32(c, v); }
    // 09404f  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x9404fu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 094055  call dword ptr [0x8a610]
    X86_AT(c, 0x94055u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x9405bu); x86_call(c, t); X86_RET(c, 0x9405bu); }
L_9405b:
    X86_TICK(c, 12);
    // 09405b  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0x9405bu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 09405f  je 0x94071
    X86_AT(c, 0x9405fu);
    if (x86_cc(c, 4)) { goto L_94071; }
    X86_TICK(c, 12);
    // 094061  test byte ptr [0x8a5fc], 1
    X86_AT(c, 0x94061u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x1u, 1);
    // 094068  jne 0x94071
    X86_AT(c, 0x94068u);
    if (x86_cc(c, 5)) { goto L_94071; }
    X86_TICK(c, 9);
    // 09406a  mov ecx, ebp
    X86_AT(c, 0x9406au);
    c.r[1] = c.r[5];
    // 09406c  call 0x93f7c
    X86_AT(c, 0x9406cu);
    push32(c, 0x94071u); x86_call_known(c, 0x93f7cu, f_00093f7c); X86_RET(c, 0x94071u);
L_94071:
    X86_TICK(c, 11);
    // 094071  mov eax, dword ptr [0x8a604]
    X86_AT(c, 0x94071u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A604u)));
    // 094076  cmp eax, 0xffff
    X86_AT(c, 0x94076u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 09407b  je 0x9409d
    X86_AT(c, 0x9407bu);
    if (x86_cc(c, 4)) { goto L_9409d; }
    X86_TICK(c, 11);
    // 09407d  mov edx, dword ptr [0x8a954]
    X86_AT(c, 0x9407du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A954u)));
    // 094083  cmp eax, edx
    X86_AT(c, 0x94083u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 094085  jbe 0x9409d
    X86_AT(c, 0x94085u);
    if (x86_cc(c, 6)) { goto L_9409d; }
    X86_TICK(c, 23);
    // 094087  xchg edi, eax
    X86_AT(c, 0x94087u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 094088  sub edi, edx
    X86_AT(c, 0x94088u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[2], 0, 4); }
    // 09408a  add dword ptr [0x8a60c], edi
    X86_AT(c, 0x9408au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A60Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 094090  push edi
    X86_AT(c, 0x94090u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094091  push 0x8a618
    X86_AT(c, 0x94091u);
    { uint32_t v = 0x8A618u; push32(c, v); }
    // 094096  call 0x939cc
    X86_AT(c, 0x94096u);
    push32(c, 0x9409bu); x86_call_known(c, 0x939ccu, f_000939cc); X86_RET(c, 0x9409bu);
    X86_TICK(c, 7);
    // 09409b  jmp 0x940c0
    X86_AT(c, 0x9409bu);
    goto L_940c0;
L_9409d:
    X86_TICK(c, 12);
    // 09409d  cmp dword ptr [0x8a604], 0
    X86_AT(c, 0x9409du);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A604u))), 0x0u, 0, 4);
    // 0940a4  jne 0x940c0
    X86_AT(c, 0x940a4u);
    if (x86_cc(c, 5)) { goto L_940c0; }
    X86_TICK(c, 12);
    // 0940a6  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0x940a6u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 0940aa  jne 0x940c0
    X86_AT(c, 0x940aau);
    if (x86_cc(c, 5)) { goto L_940c0; }
    X86_TICK(c, 4);
    // 0940ac  mov dword ptr [0x8a950], 0x1f
    X86_AT(c, 0x940acu);
    wr32((c.sbase[3] + (uint32_t)(0x8A950u)), 0x1Fu);
    // 0940b6  mov dword ptr [0x8a954], 0
    X86_AT(c, 0x940b6u);
    wr32((c.sbase[3] + (uint32_t)(0x8A954u)), 0x0u);
L_940c0:
    X86_TICK(c, 32);
    // 0940c0  mov eax, dword ptr [0x8a954]
    X86_AT(c, 0x940c0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A954u)));
    // 0940c5  add dword ptr [0x8a60c], eax
    X86_AT(c, 0x940c5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A60Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0940cb  push eax
    X86_AT(c, 0x940cbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0940cc  mov eax, dword ptr [0x8a950]
    X86_AT(c, 0x940ccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A950u)));
    // 0940d1  add eax, 0x8a92f
    X86_AT(c, 0x940d1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8A92Fu, 0, 4); }
    // 0940d6  push eax
    X86_AT(c, 0x940d6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0940d7  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x940d7u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 0940dd  call dword ptr [0x8a610]
    X86_AT(c, 0x940ddu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x940e3u); x86_call(c, t); X86_RET(c, 0x940e3u); }
    X86_TICK(c, 12);
    // 0940e3  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0x940e3u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 0940e7  je 0x940f0
    X86_AT(c, 0x940e7u);
    if (x86_cc(c, 4)) { goto L_940f0; }
    X86_TICK(c, 9);
    // 0940e9  mov ecx, ebp
    X86_AT(c, 0x940e9u);
    c.r[1] = c.r[5];
    // 0940eb  call 0x93f7c
    X86_AT(c, 0x940ebu);
    push32(c, 0x940f0u); x86_call_known(c, 0x93f7cu, f_00093f7c); X86_RET(c, 0x940f0u);
L_940f0:
    X86_TICK(c, 24);
    // 0940f0  pop edi
    X86_AT(c, 0x940f0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0940f1  pop ebx
    X86_AT(c, 0x940f1u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0940f2  leave 
    X86_AT(c, 0x940f2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0940f3  ret 8
    X86_AT(c, 0x940f3u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x93fa8u, "ran off the end of a function");
}
void f_00094104(X86Cpu& c) {
    X86_TICK(c, 25);
    // 094104  push ebp
    X86_AT(c, 0x94104u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094105  mov ebp, esp
    X86_AT(c, 0x94105u);
    c.r[5] = c.r[4];
    // 094107  push ecx
    X86_AT(c, 0x94107u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094108  push esi
    X86_AT(c, 0x94108u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094109  push edi
    X86_AT(c, 0x94109u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09410a  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x9410au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09410d  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9410du);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 094110  jmp 0x94132
    X86_AT(c, 0x94110u);
    goto L_94132;
L_94112:
    X86_TICK(c, 14);
    // 094112  mov ecx, edi
    X86_AT(c, 0x94112u);
    c.r[1] = c.r[7];
    // 094114  and ecx, 0xf
    X86_AT(c, 0x94114u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0xFu, 4); }
    // 09411a  shr edi, 4
    X86_AT(c, 0x9411au);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[7] = r; }
    // 09411d  cmp ecx, 0xa
    X86_AT(c, 0x9411du);
    (void)x86_sub(c, c.r[1], 0xAu, 0, 4);
    // 094120  jae 0x94127
    X86_AT(c, 0x94120u);
    if (x86_cc(c, 3)) { goto L_94127; }
    X86_TICK(c, 9);
    // 094122  lea eax, [ecx + 0x30]
    X86_AT(c, 0x94122u);
    c.r[0] = (uint32_t)(c.r[1] + 0x30u);
    // 094125  jmp 0x9412a
    X86_AT(c, 0x94125u);
    goto L_9412a;
L_94127:
    X86_TICK(c, 2);
    // 094127  lea eax, [ecx + 0x57]
    X86_AT(c, 0x94127u);
    c.r[0] = (uint32_t)(c.r[1] + 0x57u);
L_9412a:
    X86_TICK(c, 8);
    // 09412a  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x9412au);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09412d  mov byte ptr [edx + esi*1 - 0xf], al
    X86_AT(c, 0x9412du);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[6] + 0xFFFFFFF1u)), g8(c, 0));
    // 094131  dec esi
    X86_AT(c, 0x94131u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
L_94132:
    X86_TICK(c, 7);
    // 094132  and edi, edi
    X86_AT(c, 0x94132u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 094134  ja 0x94112
    X86_AT(c, 0x94134u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x94112u); goto L_94112; }
    X86_TICK(c, 24);
    // 094136  pop edi
    X86_AT(c, 0x94136u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094137  pop esi
    X86_AT(c, 0x94137u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094138  leave 
    X86_AT(c, 0x94138u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094139  ret 8
    X86_AT(c, 0x94139u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x94104u, "ran off the end of a function");
}
void f_0009414c(X86Cpu& c) {
    X86_TICK(c, 66);
    // 09414c  push ebp
    X86_AT(c, 0x9414cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09414d  mov ebp, esp
    X86_AT(c, 0x9414du);
    c.r[5] = c.r[4];
    // 09414f  push ecx
    X86_AT(c, 0x9414fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094150  sub esp, 0xc
    X86_AT(c, 0x94150u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 094153  push ebx
    X86_AT(c, 0x94153u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094154  push esi
    X86_AT(c, 0x94154u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094155  push edi
    X86_AT(c, 0x94155u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094156  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x94156u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094159  mov eax, 0x30303030
    X86_AT(c, 0x94159u);
    c.r[0] = 0x30303030u;
    // 09415e  lea ecx, [ebp - 0xe]
    X86_AT(c, 0x9415eu);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 094161  push edi
    X86_AT(c, 0x94161u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094162  mov edi, ecx
    X86_AT(c, 0x94162u);
    c.r[7] = c.r[1];
    // 094164  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x94164u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 094165  stosd dword ptr es:[edi], eax
    X86_AT(c, 0x94165u);
    x86_string(c, 2, 4, 0, 4, 3);
    // 094166  stosw word ptr es:[edi], ax
    X86_AT(c, 0x94166u);
    x86_string(c, 2, 2, 0, 4, 3);
    // 094168  pop edi
    X86_AT(c, 0x94168u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094169  mov ebx, 8
    X86_AT(c, 0x94169u);
    c.r[3] = 0x8u;
    // 09416e  push ebx
    X86_AT(c, 0x9416eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09416f  push edi
    X86_AT(c, 0x9416fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094170  mov ecx, ebp
    X86_AT(c, 0x94170u);
    c.r[1] = c.r[5];
    // 094172  call 0x94104
    X86_AT(c, 0x94172u);
    push32(c, 0x94177u); x86_call_known(c, 0x94104u, f_00094104); X86_RET(c, 0x94177u);
    X86_TICK(c, 24);
    // 094177  add dword ptr [0x8a60c], ebx
    X86_AT(c, 0x94177u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A60Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[3], 0, 4)); }
    // 09417d  push ebx
    X86_AT(c, 0x9417du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09417e  lea eax, [ebp - 0xe]
    X86_AT(c, 0x9417eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF2u);
    // 094181  push eax
    X86_AT(c, 0x94181u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094182  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x94182u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 094188  call dword ptr [0x8a610]
    X86_AT(c, 0x94188u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x9418eu); x86_call(c, t); X86_RET(c, 0x9418eu); }
    X86_TICK(c, 28);
    // 09418e  pop edi
    X86_AT(c, 0x9418eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09418f  pop esi
    X86_AT(c, 0x9418fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094190  pop ebx
    X86_AT(c, 0x94190u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094191  leave 
    X86_AT(c, 0x94191u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094192  ret 4
    X86_AT(c, 0x94192u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x9414cu, "ran off the end of a function");
}
void f_000941a0(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0941a0  push ebp
    X86_AT(c, 0x941a0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0941a1  mov ebp, esp
    X86_AT(c, 0x941a1u);
    c.r[5] = c.r[4];
    // 0941a3  push edi
    X86_AT(c, 0x941a3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0941a4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x941a4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0941a7  sub eax, eax
    X86_AT(c, 0x941a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0941a9  mov dword ptr [0x8a60c], eax
    X86_AT(c, 0x941a9u);
    wr32((c.sbase[3] + (uint32_t)(0x8A60Cu)), c.r[0]);
    // 0941ae  mov edx, 0x7fffffff
    X86_AT(c, 0x941aeu);
    c.r[2] = 0x7FFFFFFFu;
    // 0941b3  push edi
    X86_AT(c, 0x941b3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0941b4  mov ecx, edx
    X86_AT(c, 0x941b4u);
    c.r[1] = c.r[2];
    // 0941b6  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x941b6u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0941b8  jne 0x941bd
    X86_AT(c, 0x941b8u);
    if (x86_cc(c, 5)) { goto L_941bd; }
    X86_TICK(c, 4);
    // 0941ba  inc ecx
    X86_AT(c, 0x941bau);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0941bb  sub edx, ecx
    X86_AT(c, 0x941bbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_941bd:
    X86_TICK(c, 27);
    // 0941bd  pop edi
    X86_AT(c, 0x941bdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0941be  mov dword ptr [0x8a924], edx
    X86_AT(c, 0x941beu);
    wr32((c.sbase[3] + (uint32_t)(0x8A924u)), c.r[2]);
    // 0941c4  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x941c4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0941c7  mov dword ptr [0x8a918], eax
    X86_AT(c, 0x941c7u);
    wr32((c.sbase[3] + (uint32_t)(0x8A918u)), c.r[0]);
    // 0941cc  push ebp
    X86_AT(c, 0x941ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0941cd  push 0x941e8
    X86_AT(c, 0x941cdu);
    { uint32_t v = 0x941E8u; push32(c, v); }
    // 0941d2  push edi
    X86_AT(c, 0x941d2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0941d3  mov ecx, ebp
    X86_AT(c, 0x941d3u);
    c.r[1] = c.r[5];
    // 0941d5  call 0x93b90
    X86_AT(c, 0x941d5u);
    push32(c, 0x941dau); x86_call_known(c, 0x93b90u, f_00093b90); X86_RET(c, 0x941dau);
    X86_TICK(c, 20);
    // 0941da  pop edi
    X86_AT(c, 0x941dau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0941db  leave 
    X86_AT(c, 0x941dbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0941dc  ret 8
    X86_AT(c, 0x941dcu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x941a0u, "ran off the end of a function");
}
void f_000941e8(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0941e8  push ebp
    X86_AT(c, 0x941e8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0941e9  mov ebp, esp
    X86_AT(c, 0x941e9u);
    c.r[5] = c.r[4];
    // 0941eb  push ecx
    X86_AT(c, 0x941ebu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0941ec  sub esp, 8
    X86_AT(c, 0x941ecu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0941ef  push ebx
    X86_AT(c, 0x941efu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0941f0  push esi
    X86_AT(c, 0x941f0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0941f1  push edi
    X86_AT(c, 0x941f1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0941f2  mov bl, byte ptr [ebp + 8]
    X86_AT(c, 0x941f2u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0941f5  movzx eax, bl
    X86_AT(c, 0x941f5u);
    c.r[0] = g8(c, 3);
    // 0941f8  cmp eax, 0x25
    X86_AT(c, 0x941f8u);
    (void)x86_sub(c, c.r[0], 0x25u, 0, 4);
    // 0941fb  je 0x943c1
    X86_AT(c, 0x941fbu);
    if (x86_cc(c, 4)) { goto L_943c1; }
    X86_TICK(c, 7);
    // 094201  cmp eax, 0x30
    X86_AT(c, 0x94201u);
    (void)x86_sub(c, c.r[0], 0x30u, 0, 4);
    // 094204  je 0x942ee
    X86_AT(c, 0x94204u);
    if (x86_cc(c, 4)) { goto L_942ee; }
    X86_TICK(c, 9);
    // 09420a  sub eax, 0x45
    X86_AT(c, 0x9420au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x45u, 0, 4); }
    // 09420d  cmp eax, 0x33
    X86_AT(c, 0x9420du);
    (void)x86_sub(c, c.r[0], 0x33u, 0, 4);
    // 094210  ja 0x9447e
    X86_AT(c, 0x94210u);
    if (x86_cc(c, 7)) { goto L_9447e; }
    X86_TICK(c, 7);
    // 094216  jmp dword ptr cs:[eax*4 + 0x9421e]
    X86_AT(c, 0x94216u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x9421Eu)));
      switch (t) {
      case 0x94311u: goto L_94311;
      case 0x94340u: goto L_94340;
      case 0x94384u: goto L_94384;
      case 0x943a6u: goto L_943a6;
      case 0x94401u: goto L_94401;
      case 0x94414u: goto L_94414;
      case 0x9447eu: goto L_9447e;
      default: x86_jump(c, t); return; } }
L_942ee:
    X86_TICK(c, 29);
    // 0942ee  mov eax, dword ptr [0x8a920]
    X86_AT(c, 0x942eeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A920u)));
    // 0942f3  add dword ptr [0x8a60c], eax
    X86_AT(c, 0x942f3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A60Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0942f9  push eax
    X86_AT(c, 0x942f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0942fa  push dword ptr [0x8a91c]
    X86_AT(c, 0x942fau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A91Cu))); push32(c, v); }
    // 094300  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x94300u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 094306  call dword ptr [0x8a610]
    X86_AT(c, 0x94306u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x9430cu); x86_call(c, t); X86_RET(c, 0x9430cu); }
    X86_TICK(c, 7);
    // 09430c  jmp 0x94487
    X86_AT(c, 0x9430cu);
    goto L_94487;
L_94311:
    X86_TICK(c, 42);
    // 094311  cmp byte ptr [0x8a608], 2
    X86_AT(c, 0x94311u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A608u))), 0x2u, 0, 1);
    // 094318  mov eax, dword ptr [0x8a918]
    X86_AT(c, 0x94318u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A918u)));
    // 09431d  mov edx, dword ptr [eax]
    X86_AT(c, 0x9431du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 09431f  mov dword ptr [0x8a928], edx
    X86_AT(c, 0x9431fu);
    wr32((c.sbase[3] + (uint32_t)(0x8A928u)), c.r[2]);
    // 094325  add dword ptr [0x8a918], 4
    X86_AT(c, 0x94325u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A918u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 09432c  push ebx
    X86_AT(c, 0x9432cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09432d  push dword ptr [0x8a928]
    X86_AT(c, 0x9432du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A928u))); push32(c, v); }
    // 094333  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x94333u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094336  call 0x93fa8
    X86_AT(c, 0x94336u);
    push32(c, 0x9433bu); x86_call_known(c, 0x93fa8u, f_00093fa8); X86_RET(c, 0x9433bu);
    X86_TICK(c, 7);
    // 09433b  jmp 0x94487
    X86_AT(c, 0x9433bu);
    goto L_94487;
L_94340:
    X86_TICK(c, 12);
    // 094340  cmp byte ptr [0x8a608], 3
    X86_AT(c, 0x94340u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A608u))), 0x3u, 0, 1);
    // 094347  jne 0x94368
    X86_AT(c, 0x94347u);
    if (x86_cc(c, 5)) { goto L_94368; }
    X86_TICK(c, 28);
    // 094349  push ebx
    X86_AT(c, 0x94349u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09434a  mov eax, dword ptr [0x8a918]
    X86_AT(c, 0x9434au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A918u)));
    // 09434f  push dword ptr [eax + 8]
    X86_AT(c, 0x9434fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))); push32(c, v); }
    // 094352  push dword ptr [eax + 4]
    X86_AT(c, 0x94352u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 094355  push dword ptr [eax]
    X86_AT(c, 0x94355u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 094357  call 0x95a68
    X86_AT(c, 0x94357u);
    push32(c, 0x9435cu); x86_call_known(c, 0x95a68u, f_00095a68); X86_RET(c, 0x9435cu);
    X86_TICK(c, 14);
    // 09435c  add dword ptr [0x8a918], 0xa
    X86_AT(c, 0x9435cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A918u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xAu, 0, 4)); }
    // 094363  jmp 0x94487
    X86_AT(c, 0x94363u);
    goto L_94487;
L_94368:
    X86_TICK(c, 23);
    // 094368  push ebx
    X86_AT(c, 0x94368u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094369  mov eax, dword ptr [0x8a918]
    X86_AT(c, 0x94369u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A918u)));
    // 09436e  push dword ptr [eax + 4]
    X86_AT(c, 0x9436eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 094371  push dword ptr [eax]
    X86_AT(c, 0x94371u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 094373  call 0x9533c
    X86_AT(c, 0x94373u);
    push32(c, 0x94378u); x86_call_known(c, 0x9533cu, f_0009533c); X86_RET(c, 0x94378u);
    X86_TICK(c, 14);
    // 094378  add dword ptr [0x8a918], 8
    X86_AT(c, 0x94378u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A918u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x8u, 0, 4)); }
    // 09437f  jmp 0x94487
    X86_AT(c, 0x9437fu);
    goto L_94487;
L_94384:
    X86_TICK(c, 30);
    // 094384  mov eax, dword ptr [0x8a918]
    X86_AT(c, 0x94384u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A918u)));
    // 094389  mov edx, dword ptr [eax]
    X86_AT(c, 0x94389u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 09438b  mov dword ptr [0x8a928], edx
    X86_AT(c, 0x9438bu);
    wr32((c.sbase[3] + (uint32_t)(0x8A928u)), c.r[2]);
    // 094391  add dword ptr [0x8a918], 4
    X86_AT(c, 0x94391u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A918u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 094398  push edx
    X86_AT(c, 0x94398u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 094399  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x94399u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09439c  call 0x9414c
    X86_AT(c, 0x9439cu);
    push32(c, 0x943a1u); x86_call_known(c, 0x9414cu, f_0009414c); X86_RET(c, 0x943a1u);
    X86_TICK(c, 7);
    // 0943a1  jmp 0x94487
    X86_AT(c, 0x943a1u);
    goto L_94487;
L_943a6:
    X86_TICK(c, 28);
    // 0943a6  mov eax, dword ptr [0x8a60c]
    X86_AT(c, 0x943a6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A60Cu)));
    // 0943ab  mov edx, dword ptr [0x8a918]
    X86_AT(c, 0x943abu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A918u)));
    // 0943b1  mov ecx, dword ptr [edx]
    X86_AT(c, 0x943b1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0943b3  mov dword ptr [ecx], eax
    X86_AT(c, 0x943b3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[0]);
    // 0943b5  add dword ptr [0x8a918], 4
    X86_AT(c, 0x943b5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A918u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0943bc  jmp 0x94487
    X86_AT(c, 0x943bcu);
    goto L_94487;
L_943c1:
    X86_TICK(c, 2);
    // 0943c1  mov byte ptr [ebp - 6], 0x25
    X86_AT(c, 0x943c1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), 0x25u);
L_943c5:
    X86_TICK(c, 18);
    // 0943c5  inc dword ptr [0x8a60c]
    X86_AT(c, 0x943c5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A60Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0943cb  test byte ptr [0x8a5fc], 1
    X86_AT(c, 0x943cbu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x1u, 1);
    // 0943d2  jne 0x943db
    X86_AT(c, 0x943d2u);
    if (x86_cc(c, 5)) { goto L_943db; }
    X86_TICK(c, 9);
    // 0943d4  push 1
    X86_AT(c, 0x943d4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0943d6  call 0x93a14
    X86_AT(c, 0x943d6u);
    push32(c, 0x943dbu); x86_call_known(c, 0x93a14u, f_00093a14); X86_RET(c, 0x943dbu);
L_943db:
    X86_TICK(c, 17);
    // 0943db  push 1
    X86_AT(c, 0x943dbu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0943dd  lea eax, [ebp - 6]
    X86_AT(c, 0x943ddu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFAu);
    // 0943e0  push eax
    X86_AT(c, 0x943e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0943e1  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x943e1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 0943e7  call dword ptr [0x8a610]
    X86_AT(c, 0x943e7u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x943edu); x86_call(c, t); X86_RET(c, 0x943edu); }
    X86_TICK(c, 12);
    // 0943ed  test byte ptr [0x8a5fc], 1
    X86_AT(c, 0x943edu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x1u, 1);
    // 0943f4  je 0x94487
    X86_AT(c, 0x943f4u);
    if (x86_cc(c, 4)) { goto L_94487; }
    X86_TICK(c, 9);
    // 0943fa  push 1
    X86_AT(c, 0x943fau);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0943fc  jmp 0x94477
    X86_AT(c, 0x943fcu);
    goto L_94477;
L_94401:
    X86_TICK(c, 24);
    // 094401  mov eax, dword ptr [0x8a918]
    X86_AT(c, 0x94401u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A918u)));
    // 094406  mov dl, byte ptr [eax]
    X86_AT(c, 0x94406u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 094408  mov byte ptr [ebp - 6], dl
    X86_AT(c, 0x94408u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), g8(c, 2));
    // 09440b  add dword ptr [0x8a918], 4
    X86_AT(c, 0x9440bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A918u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 094412  jmp 0x943c5
    X86_AT(c, 0x94412u);
    X86_POLL(c, 0x943c5u); goto L_943c5;
L_94414:
    X86_TICK(c, 22);
    // 094414  mov eax, dword ptr [0x8a918]
    X86_AT(c, 0x94414u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A918u)));
    // 094419  mov edi, dword ptr [eax]
    X86_AT(c, 0x94419u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 09441b  add dword ptr [0x8a918], 4
    X86_AT(c, 0x9441bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A918u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 094422  and edi, edi
    X86_AT(c, 0x94422u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 094424  je 0x94487
    X86_AT(c, 0x94424u);
    if (x86_cc(c, 4)) { goto L_94487; }
    X86_TICK(c, 22);
    // 094426  mov edx, dword ptr [0x8a604]
    X86_AT(c, 0x94426u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A604u)));
    // 09442c  sub eax, eax
    X86_AT(c, 0x9442cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 09442e  push edi
    X86_AT(c, 0x9442eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09442f  mov ecx, edx
    X86_AT(c, 0x9442fu);
    c.r[1] = c.r[2];
    // 094431  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x94431u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 094433  jne 0x94438
    X86_AT(c, 0x94433u);
    if (x86_cc(c, 5)) { goto L_94438; }
    X86_TICK(c, 4);
    // 094435  inc ecx
    X86_AT(c, 0x94435u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 094436  sub edx, ecx
    X86_AT(c, 0x94436u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_94438:
    X86_TICK(c, 17);
    // 094438  pop edi
    X86_AT(c, 0x94438u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094439  mov dword ptr [ebp - 0xc], edx
    X86_AT(c, 0x94439u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[2]);
    // 09443c  mov ecx, dword ptr [0x8a604]
    X86_AT(c, 0x9443cu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A604u)));
    // 094442  cmp edx, ecx
    X86_AT(c, 0x94442u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 094444  jb 0x94448
    X86_AT(c, 0x94444u);
    if (x86_cc(c, 2)) { goto L_94448; }
    X86_TICK(c, 2);
    // 094446  mov edx, ecx
    X86_AT(c, 0x94446u);
    c.r[2] = c.r[1];
L_94448:
    X86_TICK(c, 21);
    // 094448  mov esi, edx
    X86_AT(c, 0x94448u);
    c.r[6] = c.r[2];
    // 09444a  add dword ptr [0x8a60c], esi
    X86_AT(c, 0x9444au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A60Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 094450  test byte ptr [0x8a5fc], 1
    X86_AT(c, 0x94450u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x1u, 1);
    // 094457  jne 0x9445f
    X86_AT(c, 0x94457u);
    if (x86_cc(c, 5)) { goto L_9445f; }
    X86_TICK(c, 9);
    // 094459  push esi
    X86_AT(c, 0x94459u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09445a  call 0x93a14
    X86_AT(c, 0x9445au);
    push32(c, 0x9445fu); x86_call_known(c, 0x93a14u, f_00093a14); X86_RET(c, 0x9445fu);
L_9445f:
    X86_TICK(c, 15);
    // 09445f  push esi
    X86_AT(c, 0x9445fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094460  push edi
    X86_AT(c, 0x94460u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094461  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x94461u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 094467  call dword ptr [0x8a610]
    X86_AT(c, 0x94467u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x9446du); x86_call(c, t); X86_RET(c, 0x9446du); }
    X86_TICK(c, 12);
    // 09446d  test byte ptr [0x8a5fc], 1
    X86_AT(c, 0x9446du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x1u, 1);
    // 094474  je 0x94487
    X86_AT(c, 0x94474u);
    if (x86_cc(c, 4)) { goto L_94487; }
    X86_TICK(c, 2);
    // 094476  push esi
    X86_AT(c, 0x94476u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_94477:
    X86_TICK(c, 7);
    // 094477  call 0x93a14
    X86_AT(c, 0x94477u);
    push32(c, 0x9447cu); x86_call_known(c, 0x93a14u, f_00093a14); X86_RET(c, 0x9447cu);
    X86_TICK(c, 7);
    // 09447c  jmp 0x94487
    X86_AT(c, 0x9447cu);
    goto L_94487;
L_9447e:
    X86_TICK(c, 2);
    // 09447e  mov word ptr [0x8a96e], 1
    X86_AT(c, 0x9447eu);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), 0x1u);
L_94487:
    X86_TICK(c, 28);
    // 094487  pop edi
    X86_AT(c, 0x94487u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094488  pop esi
    X86_AT(c, 0x94488u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094489  pop ebx
    X86_AT(c, 0x94489u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09448a  leave 
    X86_AT(c, 0x9448au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09448b  ret 4
    X86_AT(c, 0x9448bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x941e8u, "ran off the end of a function");
}
void f_00094487(X86Cpu& c) {
    X86_TICK(c, 28);
    // 094487  pop edi
    X86_AT(c, 0x94487u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094488  pop esi
    X86_AT(c, 0x94488u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094489  pop ebx
    X86_AT(c, 0x94489u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09448a  leave 
    X86_AT(c, 0x9448au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09448b  ret 4
    X86_AT(c, 0x9448bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94487u, "ran off the end of a function");
}
void f_000944a4(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0944a4  test byte ptr [0x8a99c], 2
    X86_AT(c, 0x944a4u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A99Cu))) & 0x2u, 1);
    // 0944ab  je 0x944c1
    X86_AT(c, 0x944abu);
    if (x86_cc(c, 4)) { goto L_944c1; }
    X86_TICK(c, 29);
    // 0944ad  mov eax, dword ptr [0x8a5e4]
    X86_AT(c, 0x944adu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A5E4u)));
    // 0944b2  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0x944b2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 0944b6  mov eax, dword ptr [0x8a5e8]
    X86_AT(c, 0x944b6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A5E8u)));
    // 0944bb  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0x944bbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 0944bf  jmp 0x944d3
    X86_AT(c, 0x944bfu);
    goto L_944d3;
L_944c1:
    X86_TICK(c, 22);
    // 0944c1  mov eax, dword ptr [0x8a5e4]
    X86_AT(c, 0x944c1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A5E4u)));
    // 0944c6  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0x944c6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
    // 0944ca  mov eax, dword ptr [0x8a5e8]
    X86_AT(c, 0x944cau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A5E8u)));
    // 0944cf  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0x944cfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_944d3:
    X86_TICK(c, 12);
    // 0944d3  test byte ptr [0x8a99c], 4
    X86_AT(c, 0x944d3u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A99Cu))) & 0x4u, 1);
    // 0944da  je 0x944e7
    X86_AT(c, 0x944dau);
    if (x86_cc(c, 4)) { goto L_944e7; }
    X86_TICK(c, 18);
    // 0944dc  mov eax, dword ptr [0x8a5ec]
    X86_AT(c, 0x944dcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A5ECu)));
    // 0944e1  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0x944e1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 0944e5  jmp 0x944f0
    X86_AT(c, 0x944e5u);
    goto L_944f0;
L_944e7:
    X86_TICK(c, 11);
    // 0944e7  mov eax, dword ptr [0x8a5ec]
    X86_AT(c, 0x944e7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A5ECu)));
    // 0944ec  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0x944ecu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_944f0:
    X86_TICK(c, 10);
    // 0944f0  ret 
    X86_AT(c, 0x944f0u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x944a4u, "ran off the end of a function");
}
void f_000944f8(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0944f8  push edi
    X86_AT(c, 0x944f8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0944f9  call 0x92bb8
    X86_AT(c, 0x944f9u);
    push32(c, 0x944feu); x86_call_known(c, 0x92bb8u, f_00092bb8); X86_RET(c, 0x944feu);
    X86_TICK(c, 7);
    // 0944fe  jmp 0x94520
    X86_AT(c, 0x944feu);
    goto L_94520;
L_94500:
    X86_TICK(c, 12);
    // 094500  push dword ptr [0x8a5f0]
    X86_AT(c, 0x94500u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A5F0u))); push32(c, v); }
    // 094506  call 0x947c0
    X86_AT(c, 0x94506u);
    push32(c, 0x9450bu); x86_call_known(c, 0x947c0u, f_000947c0); X86_RET(c, 0x9450bu);
    X86_TICK(c, 19);
    // 09450b  mov edi, dword ptr [0x8a5f0]
    X86_AT(c, 0x9450bu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8A5F0u)));
    // 094511  mov eax, dword ptr [edi + 0xc]
    X86_AT(c, 0x94511u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 094514  mov dword ptr [0x8a5f0], eax
    X86_AT(c, 0x94514u);
    wr32((c.sbase[3] + (uint32_t)(0x8A5F0u)), c.r[0]);
    // 094519  push edi
    X86_AT(c, 0x94519u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09451a  call 0x92fdc
    X86_AT(c, 0x9451au);
    push32(c, 0x9451fu); x86_call_known(c, 0x92fdcu, f_00092fdc); X86_RET(c, 0x9451fu);
    X86_TICK(c, 4);
    // 09451f  pop ecx
    X86_AT(c, 0x9451fu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_94520:
    X86_TICK(c, 12);
    // 094520  cmp dword ptr [0x8a5f0], 0
    X86_AT(c, 0x94520u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A5F0u))), 0x0u, 0, 4);
    // 094527  jne 0x94500
    X86_AT(c, 0x94527u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x94500u); goto L_94500; }
    X86_TICK(c, 14);
    // 094529  pop edi
    X86_AT(c, 0x94529u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09452a  ret 
    X86_AT(c, 0x9452au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x944f8u, "ran off the end of a function");
}
void f_00094540(X86Cpu& c) {
    X86_TICK(c, 33);
    // 094540  enter 0xc, 0
    X86_AT(c, 0x94540u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 094544  push ebx
    X86_AT(c, 0x94544u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094545  push esi
    X86_AT(c, 0x94545u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094546  push edi
    X86_AT(c, 0x94546u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094547  sub eax, eax
    X86_AT(c, 0x94547u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094549  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x94549u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 09454c  xchg edi, eax
    X86_AT(c, 0x9454cu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 09454d  mov esi, 1
    X86_AT(c, 0x9454du);
    c.r[6] = 0x1u;
    // 094552  mov dword ptr [ebp - 8], edi
    X86_AT(c, 0x94552u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[7]);
    // 094555  mov eax, dword ptr [0x8a6ec]
    X86_AT(c, 0x94555u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A6ECu)));
    // 09455a  mov edx, dword ptr [0x8a6d2]
    X86_AT(c, 0x9455au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A6D2u)));
    // 094560  mov dword ptr [edx], eax
    X86_AT(c, 0x94560u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_94562:
    X86_TICK(c, 8);
    // 094562  sub eax, eax
    X86_AT(c, 0x94562u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094564  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x94564u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 094567  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x94567u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 09456a  mov dword ptr [ebp - 0xc], edi
    X86_AT(c, 0x9456au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[7]);
L_9456d:
    X86_TICK(c, 11);
    // 09456d  cmp esi, dword ptr [0x8a6d8]
    X86_AT(c, 0x9456du);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8A6D8u))), 0, 4);
    // 094573  ja 0x945f1
    X86_AT(c, 0x94573u);
    if (x86_cc(c, 7)) { goto L_945f1; }
    X86_TICK(c, 17);
    // 094579  mov eax, dword ptr [0x8a6cc]
    X86_AT(c, 0x94579u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A6CCu)));
    // 09457e  mov bl, byte ptr [eax + esi*1 - 1]
    X86_AT(c, 0x9457eu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] + 0xFFFFFFFFu))));
    // 094582  inc esi
    X86_AT(c, 0x94582u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 094583  cmp bl, 9
    X86_AT(c, 0x94583u);
    (void)x86_sub(c, g8(c, 3), 0x9u, 0, 1);
    // 094586  je 0x9458d
    X86_AT(c, 0x94586u);
    if (x86_cc(c, 4)) { goto L_9458d; }
    X86_TICK(c, 7);
    // 094588  cmp bl, 0x20
    X86_AT(c, 0x94588u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 09458b  jne 0x9459b
    X86_AT(c, 0x9458bu);
    if (x86_cc(c, 5)) { goto L_9459b; }
L_9458d:
    X86_TICK(c, 12);
    // 09458d  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0x9458du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 094591  je 0x9456d
    X86_AT(c, 0x94591u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x9456du); goto L_9456d; }
    X86_TICK(c, 12);
    // 094593  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x94593u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 094597  jne 0x945de
    X86_AT(c, 0x94597u);
    if (x86_cc(c, 5)) { goto L_945de; }
    X86_TICK(c, 7);
    // 094599  jmp 0x945f1
    X86_AT(c, 0x94599u);
    goto L_945f1;
L_9459b:
    X86_TICK(c, 7);
    // 09459b  cmp bl, 0x22
    X86_AT(c, 0x9459bu);
    (void)x86_sub(c, g8(c, 3), 0x22u, 0, 1);
    // 09459e  jne 0x945bc
    X86_AT(c, 0x9459eu);
    if (x86_cc(c, 5)) { goto L_945bc; }
    X86_TICK(c, 12);
    // 0945a0  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x945a0u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0945a4  jne 0x945ac
    X86_AT(c, 0x945a4u);
    if (x86_cc(c, 5)) { goto L_945ac; }
    X86_TICK(c, 12);
    // 0945a6  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0x945a6u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0945aa  jne 0x945bc
    X86_AT(c, 0x945aau);
    if (x86_cc(c, 5)) { goto L_945bc; }
L_945ac:
    X86_TICK(c, 12);
    // 0945ac  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x945acu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0945b0  jne 0x945f1
    X86_AT(c, 0x945b0u);
    if (x86_cc(c, 5)) { goto L_945f1; }
    X86_TICK(c, 13);
    // 0945b2  mov al, 1
    X86_AT(c, 0x945b2u);
    s8(c, 0, 0x1u);
    // 0945b4  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x945b4u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0945b7  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x945b7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0945ba  jmp 0x9456d
    X86_AT(c, 0x945bau);
    X86_POLL(c, 0x9456du); goto L_9456d;
L_945bc:
    X86_TICK(c, 7);
    // 0945bc  cmp bl, 0x5c
    X86_AT(c, 0x945bcu);
    (void)x86_sub(c, g8(c, 3), 0x5Cu, 0, 1);
    // 0945bf  jne 0x945de
    X86_AT(c, 0x945bfu);
    if (x86_cc(c, 5)) { goto L_945de; }
    X86_TICK(c, 12);
    // 0945c1  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x945c1u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0945c5  je 0x945de
    X86_AT(c, 0x945c5u);
    if (x86_cc(c, 4)) { goto L_945de; }
    X86_TICK(c, 11);
    // 0945c7  cmp esi, dword ptr [0x8a6d8]
    X86_AT(c, 0x945c7u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8A6D8u))), 0, 4);
    // 0945cd  ja 0x945de
    X86_AT(c, 0x945cdu);
    if (x86_cc(c, 7)) { goto L_945de; }
    X86_TICK(c, 16);
    // 0945cf  mov eax, dword ptr [0x8a6cc]
    X86_AT(c, 0x945cfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A6CCu)));
    // 0945d4  cmp byte ptr [eax + esi*1 - 1], 0x22
    X86_AT(c, 0x945d4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] + 0xFFFFFFFFu))), 0x22u, 0, 1);
    // 0945d9  jne 0x945de
    X86_AT(c, 0x945d9u);
    if (x86_cc(c, 5)) { goto L_945de; }
    X86_TICK(c, 4);
    // 0945db  mov bl, 0x22
    X86_AT(c, 0x945dbu);
    s8(c, 3, 0x22u);
    // 0945dd  inc esi
    X86_AT(c, 0x945ddu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_945de:
    X86_TICK(c, 17);
    // 0945de  mov eax, dword ptr [0x8a6cc]
    X86_AT(c, 0x945deu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A6CCu)));
    // 0945e3  mov byte ptr [eax + edi*1 - 1], bl
    X86_AT(c, 0x945e3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] + 0xFFFFFFFFu)), g8(c, 3));
    // 0945e7  inc edi
    X86_AT(c, 0x945e7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0945e8  mov byte ptr [ebp - 1], 1
    X86_AT(c, 0x945e8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x1u);
    // 0945ec  jmp 0x9456d
    X86_AT(c, 0x945ecu);
    X86_POLL(c, 0x9456du); goto L_9456d;
L_945f1:
    X86_TICK(c, 12);
    // 0945f1  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0x945f1u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0945f5  je 0x94618
    X86_AT(c, 0x945f5u);
    if (x86_cc(c, 4)) { goto L_94618; }
    X86_TICK(c, 30);
    // 0945f7  mov eax, dword ptr [0x8a6cc]
    X86_AT(c, 0x945f7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A6CCu)));
    // 0945fc  mov byte ptr [eax + edi*1 - 1], 0
    X86_AT(c, 0x945fcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] + 0xFFFFFFFFu)), 0x0u);
    // 094601  inc edi
    X86_AT(c, 0x94601u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 094602  inc dword ptr [ebp - 8]
    X86_AT(c, 0x94602u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 094605  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0x94605u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 094608  lea eax, [eax + edx*1 - 1]
    X86_AT(c, 0x94608u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFFu);
    // 09460c  mov edx, dword ptr [0x8a6d2]
    X86_AT(c, 0x9460cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A6D2u)));
    // 094612  mov ecx, dword ptr [ebp - 8]
    X86_AT(c, 0x94612u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 094615  mov dword ptr [edx + ecx*4], eax
    X86_AT(c, 0x94615u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] * 4)), c.r[0]);
L_94618:
    X86_TICK(c, 11);
    // 094618  cmp esi, dword ptr [0x8a6d8]
    X86_AT(c, 0x94618u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8A6D8u))), 0, 4);
    // 09461e  jbe 0x94562
    X86_AT(c, 0x9461eu);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x94562u); goto L_94562; }
    X86_TICK(c, 43);
    // 094624  mov eax, dword ptr [0x8a6d2]
    X86_AT(c, 0x94624u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A6D2u)));
    // 094629  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0x94629u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 09462c  mov dword ptr [eax + edx*4 + 4], 0
    X86_AT(c, 0x9462cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x4u)), 0x0u);
    // 094634  xchg edx, eax
    X86_AT(c, 0x94634u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 094635  inc eax
    X86_AT(c, 0x94635u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 094636  pop edi
    X86_AT(c, 0x94636u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094637  pop esi
    X86_AT(c, 0x94637u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094638  pop ebx
    X86_AT(c, 0x94638u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094639  leave 
    X86_AT(c, 0x94639u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09463a  ret 
    X86_AT(c, 0x9463au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94540u, "ran off the end of a function");
}
void f_0009463c(X86Cpu& c) {
    X86_TICK(c, 10);
    // 09463c  ret 
    X86_AT(c, 0x9463cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9463cu, "ran off the end of a function");
}
void f_00094658(X86Cpu& c) {
    X86_TICK(c, 13);
    // 094658  mov al, byte ptr [esp + 4]
    X86_AT(c, 0x94658u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))));
    // 09465c  mov byte ptr [0x8a975], al
    X86_AT(c, 0x9465cu);
    wr8((c.sbase[3] + (uint32_t)(0x8A975u)), g8(c, 0));
    // 094661  call 0x95cb8
    X86_AT(c, 0x94661u);
    push32(c, 0x94666u); x86_call_known(c, 0x95cb8u, f_00095cb8); X86_RET(c, 0x94666u);
    X86_TICK(c, 12);
    // 094666  mov eax, dword ptr [0x8a994]
    X86_AT(c, 0x94666u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A994u)));
    // 09466b  rcr eax, 1
    X86_AT(c, 0x9466bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 09466d  jae 0x9468c
    X86_AT(c, 0x9466du);
    if (x86_cc(c, 3)) { goto L_9468c; }
    X86_TICK(c, 14);
    // 09466f  mov ax, word ptr [0x8a974]
    X86_AT(c, 0x9466fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A974u))));
    // 094675  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x94675u);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
    // 09467b  sub eax, eax
    X86_AT(c, 0x9467bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 09467d  mov dword ptr [0x8a974], eax
    X86_AT(c, 0x9467du);
    wr32((c.sbase[3] + (uint32_t)(0x8A974u)), c.r[0]);
    // 094682  mov dword ptr [0x8a97c], eax
    X86_AT(c, 0x94682u);
    wr32((c.sbase[3] + (uint32_t)(0x8A97Cu)), c.r[0]);
    // 094687  mov dword ptr [0x8a980], eax
    X86_AT(c, 0x94687u);
    wr32((c.sbase[3] + (uint32_t)(0x8A980u)), c.r[0]);
L_9468c:
    X86_TICK(c, 10);
    // 09468c  ret 4
    X86_AT(c, 0x9468cu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94658u, "ran off the end of a function");
}
void f_00094698(X86Cpu& c) {
    X86_TICK(c, 52);
    // 094698  enter 0x10, 0
    X86_AT(c, 0x94698u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 09469c  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x9469cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09469f  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x9469fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0946a2  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x946a2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0946a5  mov edx, 0x8a974
    X86_AT(c, 0x946a5u);
    c.r[2] = 0x8A974u;
    // 0946aa  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0x946aau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0946ad  mov word ptr [ebp - 0xc], ds
    X86_AT(c, 0x946adu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (uint32_t)c.sreg[3]);
    // 0946b0  movzx edx, word ptr [ebp - 0xc]
    X86_AT(c, 0x946b0u);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0946b4  mov dword ptr [ecx], edx
    X86_AT(c, 0x946b4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[2]);
    // 0946b6  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x946b6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0946b9  mov dword ptr [edx], eax
    X86_AT(c, 0x946b9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0946bb  leave 
    X86_AT(c, 0x946bbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0946bc  ret 0xc
    X86_AT(c, 0x946bcu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x94698u, "ran off the end of a function");
}
void f_000946cc(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0946cc  push ebp
    X86_AT(c, 0x946ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0946cd  mov ebp, esp
    X86_AT(c, 0x946cdu);
    c.r[5] = c.r[4];
    // 0946cf  push dword ptr [ebp + 8]
    X86_AT(c, 0x946cfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0946d2  push 0x8a980
    X86_AT(c, 0x946d2u);
    { uint32_t v = 0x8A980u; push32(c, v); }
    // 0946d7  push 0x8a98c
    X86_AT(c, 0x946d7u);
    { uint32_t v = 0x8A98Cu; push32(c, v); }
    // 0946dc  call 0x94698
    X86_AT(c, 0x946dcu);
    push32(c, 0x946e1u); x86_call_known(c, 0x94698u, f_00094698); X86_RET(c, 0x946e1u);
    X86_TICK(c, 16);
    // 0946e1  leave 
    X86_AT(c, 0x946e1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0946e2  ret 4
    X86_AT(c, 0x946e2u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x946ccu, "ran off the end of a function");
}
void f_000946f0(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0946f0  push ebp
    X86_AT(c, 0x946f0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0946f1  mov ebp, esp
    X86_AT(c, 0x946f1u);
    c.r[5] = c.r[4];
    // 0946f3  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x946f3u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0946f7  mov dword ptr [0x8a978], eax
    X86_AT(c, 0x946f7u);
    wr32((c.sbase[3] + (uint32_t)(0x8A978u)), c.r[0]);
    // 0946fc  push 0x3e
    X86_AT(c, 0x946fcu);
    { uint32_t v = 0x3Eu; push32(c, v); }
    // 0946fe  call 0x94658
    X86_AT(c, 0x946feu);
    push32(c, 0x94703u); x86_call_known(c, 0x94658u, f_00094658); X86_RET(c, 0x94703u);
    X86_TICK(c, 16);
    // 094703  leave 
    X86_AT(c, 0x94703u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094704  ret 4
    X86_AT(c, 0x94704u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x946f0u, "ran off the end of a function");
}
void f_00094710(X86Cpu& c) {
    X86_TICK(c, 19);
    // 094710  push ebp
    X86_AT(c, 0x94710u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094711  mov ebp, esp
    X86_AT(c, 0x94711u);
    c.r[5] = c.r[4];
    // 094713  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x94713u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 094716  mov byte ptr [0x8a974], al
    X86_AT(c, 0x94716u);
    wr8((c.sbase[3] + (uint32_t)(0x8A974u)), g8(c, 0));
    // 09471b  push 0x4c
    X86_AT(c, 0x9471bu);
    { uint32_t v = 0x4Cu; push32(c, v); }
    // 09471d  call 0x94658
    X86_AT(c, 0x9471du);
    push32(c, 0x94722u); x86_call_known(c, 0x94658u, f_00094658); X86_RET(c, 0x94722u);
    X86_TICK(c, 16);
    // 094722  leave 
    X86_AT(c, 0x94722u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094723  ret 4
    X86_AT(c, 0x94723u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94710u, "ran off the end of a function");
}
void f_00094748(X86Cpu& c) {
    X86_TICK(c, 16);
    // 094748  push ebp
    X86_AT(c, 0x94748u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094749  mov ebp, esp
    X86_AT(c, 0x94749u);
    c.r[5] = c.r[4];
    // 09474b  push dword ptr [ebp + 8]
    X86_AT(c, 0x9474bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 09474e  call 0x946cc
    X86_AT(c, 0x9474eu);
    push32(c, 0x94753u); x86_call_known(c, 0x946ccu, f_000946cc); X86_RET(c, 0x94753u);
    X86_TICK(c, 12);
    // 094753  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x94753u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 094756  call 0x94658
    X86_AT(c, 0x94756u);
    push32(c, 0x9475bu); x86_call_known(c, 0x94658u, f_00094658); X86_RET(c, 0x9475bu);
    X86_TICK(c, 16);
    // 09475b  leave 
    X86_AT(c, 0x9475bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09475c  ret 8
    X86_AT(c, 0x9475cu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x94748u, "ran off the end of a function");
}
void f_00094768(X86Cpu& c) {
    X86_TICK(c, 26);
    // 094768  push ebp
    X86_AT(c, 0x94768u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094769  mov ebp, esp
    X86_AT(c, 0x94769u);
    c.r[5] = c.r[4];
    // 09476b  movzx eax, byte ptr [ebp + 0xc]
    X86_AT(c, 0x9476bu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09476f  mov dword ptr [0x8a97c], eax
    X86_AT(c, 0x9476fu);
    wr32((c.sbase[3] + (uint32_t)(0x8A97Cu)), c.r[0]);
    // 094774  push 0x3c
    X86_AT(c, 0x94774u);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 094776  push dword ptr [ebp + 8]
    X86_AT(c, 0x94776u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 094779  call 0x94748
    X86_AT(c, 0x94779u);
    push32(c, 0x9477eu); x86_call_known(c, 0x94748u, f_00094748); X86_RET(c, 0x9477eu);
    X86_TICK(c, 20);
    // 09477e  mov al, byte ptr [0x8a974]
    X86_AT(c, 0x9477eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A974u))));
    // 094783  leave 
    X86_AT(c, 0x94783u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094784  ret 8
    X86_AT(c, 0x94784u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x94768u, "ran off the end of a function");
}
void f_00094790(X86Cpu& c) {
    X86_TICK(c, 33);
    // 094790  push ebp
    X86_AT(c, 0x94790u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094791  mov ebp, esp
    X86_AT(c, 0x94791u);
    c.r[5] = c.r[4];
    // 094793  mov al, byte ptr [0x8a998]
    X86_AT(c, 0x94793u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A998u))));
    // 094798  shl al, 4
    X86_AT(c, 0x94798u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 09479b  or al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x9479bu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 1)); }
    // 09479e  mov byte ptr [0x8a974], al
    X86_AT(c, 0x9479eu);
    wr8((c.sbase[3] + (uint32_t)(0x8A974u)), g8(c, 0));
    // 0947a3  push 0x3d
    X86_AT(c, 0x947a3u);
    { uint32_t v = 0x3Du; push32(c, v); }
    // 0947a5  push dword ptr [ebp + 8]
    X86_AT(c, 0x947a5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0947a8  call 0x94748
    X86_AT(c, 0x947a8u);
    push32(c, 0x947adu); x86_call_known(c, 0x94748u, f_00094748); X86_RET(c, 0x947adu);
    X86_TICK(c, 20);
    // 0947ad  mov al, byte ptr [0x8a974]
    X86_AT(c, 0x947adu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A974u))));
    // 0947b2  leave 
    X86_AT(c, 0x947b2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0947b3  ret 8
    X86_AT(c, 0x947b3u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x94790u, "ran off the end of a function");
}
void f_000947c0(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0947c0  push ebp
    X86_AT(c, 0x947c0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0947c1  mov ebp, esp
    X86_AT(c, 0x947c1u);
    c.r[5] = c.r[4];
    // 0947c3  push 0x41
    X86_AT(c, 0x947c3u);
    { uint32_t v = 0x41u; push32(c, v); }
    // 0947c5  push dword ptr [ebp + 8]
    X86_AT(c, 0x947c5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0947c8  call 0x94748
    X86_AT(c, 0x947c8u);
    push32(c, 0x947cdu); x86_call_known(c, 0x94748u, f_00094748); X86_RET(c, 0x947cdu);
    X86_TICK(c, 16);
    // 0947cd  leave 
    X86_AT(c, 0x947cdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0947ce  ret 4
    X86_AT(c, 0x947ceu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x947c0u, "ran off the end of a function");
}
void f_000947e8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0947e8  push ebp
    X86_AT(c, 0x947e8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0947e9  mov ebp, esp
    X86_AT(c, 0x947e9u);
    c.r[5] = c.r[4];
    // 0947eb  push ebx
    X86_AT(c, 0x947ebu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0947ec  push esi
    X86_AT(c, 0x947ecu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0947ed  push edi
    X86_AT(c, 0x947edu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0947ee  mov edi, dword ptr [0x8a9ac]
    X86_AT(c, 0x947eeu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8A9ACu)));
    // 0947f4  jmp 0x94823
    X86_AT(c, 0x947f4u);
    goto L_94823;
L_947f6:
    X86_TICK(c, 11);
    // 0947f6  mov esi, dword ptr [edi]
    X86_AT(c, 0x947f6u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0947f8  and esi, esi
    X86_AT(c, 0x947f8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0947fa  je 0x9481a
    X86_AT(c, 0x947fau);
    if (x86_cc(c, 4)) { goto L_9481a; }
    X86_TICK(c, 11);
    // 0947fc  cmp edi, dword ptr [esi + 4]
    X86_AT(c, 0x947fcu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))), 0, 4);
    // 0947ff  je 0x9481a
    X86_AT(c, 0x947ffu);
    if (x86_cc(c, 4)) { goto L_9481a; }
    X86_TICK(c, 11);
    // 094801  push edi
    X86_AT(c, 0x94801u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094802  push 1
    X86_AT(c, 0x94802u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 094804  call 0x95c50
    X86_AT(c, 0x94804u);
    push32(c, 0x94809u); x86_call_known(c, 0x95c50u, f_00095c50); X86_RET(c, 0x94809u);
    X86_TICK(c, 15);
    // 094809  push edi
    X86_AT(c, 0x94809u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09480a  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9480au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09480d  mov ebx, ecx
    X86_AT(c, 0x9480du);
    c.r[3] = c.r[1];
    // 09480f  call dword ptr [ebp + 8]
    X86_AT(c, 0x9480fu);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x94812u); x86_call(c, t); X86_RET(c, 0x94812u); }
    X86_TICK(c, 11);
    // 094812  push esi
    X86_AT(c, 0x94812u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094813  mov ecx, ebx
    X86_AT(c, 0x94813u);
    c.r[1] = c.r[3];
    // 094815  call dword ptr [ebp + 8]
    X86_AT(c, 0x94815u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x94818u); x86_call(c, t); X86_RET(c, 0x94818u); }
    X86_TICK(c, 7);
    // 094818  jmp 0x94827
    X86_AT(c, 0x94818u);
    goto L_94827;
L_9481a:
    X86_TICK(c, 13);
    // 09481a  push edi
    X86_AT(c, 0x9481au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09481b  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9481bu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09481e  call dword ptr [ebp + 8]
    X86_AT(c, 0x9481eu);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x94821u); x86_call(c, t); X86_RET(c, 0x94821u); }
    X86_TICK(c, 2);
    // 094821  mov edi, esi
    X86_AT(c, 0x94821u);
    c.r[7] = c.r[6];
L_94823:
    X86_TICK(c, 7);
    // 094823  and edi, edi
    X86_AT(c, 0x94823u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 094825  jne 0x947f6
    X86_AT(c, 0x94825u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x947f6u); goto L_947f6; }
L_94827:
    X86_TICK(c, 28);
    // 094827  pop edi
    X86_AT(c, 0x94827u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094828  pop esi
    X86_AT(c, 0x94828u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094829  pop ebx
    X86_AT(c, 0x94829u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09482a  leave 
    X86_AT(c, 0x9482au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09482b  ret 8
    X86_AT(c, 0x9482bu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x947e8u, "ran off the end of a function");
}
void f_00094840(X86Cpu& c) {
    X86_TICK(c, 23);
    // 094840  push ebp
    X86_AT(c, 0x94840u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094841  mov ebp, esp
    X86_AT(c, 0x94841u);
    c.r[5] = c.r[4];
    // 094843  push ebx
    X86_AT(c, 0x94843u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094844  push esi
    X86_AT(c, 0x94844u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094845  push edi
    X86_AT(c, 0x94845u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094846  mov edi, dword ptr [0x8a9a8]
    X86_AT(c, 0x94846u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x8A9A8u)));
    // 09484c  sub esi, esi
    X86_AT(c, 0x9484cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 09484e  jmp 0x94892
    X86_AT(c, 0x9484eu);
    goto L_94892;
L_94850:
    X86_TICK(c, 14);
    // 094850  mov ebx, edi
    X86_AT(c, 0x94850u);
    c.r[3] = c.r[7];
    // 094852  cmp byte ptr [ebx + 0xf], 0x55
    X86_AT(c, 0x94852u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFu))), 0x55u, 0, 1);
    // 094856  je 0x94862
    X86_AT(c, 0x94856u);
    if (x86_cc(c, 4)) { goto L_94862; }
    X86_TICK(c, 11);
    // 094858  push edi
    X86_AT(c, 0x94858u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094859  push 4
    X86_AT(c, 0x94859u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 09485b  call 0x95c50
    X86_AT(c, 0x9485bu);
    push32(c, 0x94860u); x86_call_known(c, 0x95c50u, f_00095c50); X86_RET(c, 0x94860u);
    X86_TICK(c, 7);
    // 094860  jmp 0x94892
    X86_AT(c, 0x94860u);
    goto L_94892;
L_94862:
    X86_TICK(c, 11);
    // 094862  cmp esi, dword ptr [ebx + 0x14]
    X86_AT(c, 0x94862u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))), 0, 4);
    // 094865  je 0x94873
    X86_AT(c, 0x94865u);
    if (x86_cc(c, 4)) { goto L_94873; }
    X86_TICK(c, 11);
    // 094867  push edi
    X86_AT(c, 0x94867u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094868  push 5
    X86_AT(c, 0x94868u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 09486a  call 0x95c50
    X86_AT(c, 0x9486au);
    push32(c, 0x9486fu); x86_call_known(c, 0x95c50u, f_00095c50); X86_RET(c, 0x9486fu);
    X86_TICK(c, 9);
    // 09486f  sub edi, edi
    X86_AT(c, 0x9486fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 094871  jmp 0x94892
    X86_AT(c, 0x94871u);
    goto L_94892;
L_94873:
    X86_TICK(c, 11);
    // 094873  mov eax, dword ptr [edi]
    X86_AT(c, 0x94873u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 094875  and eax, eax
    X86_AT(c, 0x94875u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094877  je 0x94886
    X86_AT(c, 0x94877u);
    if (x86_cc(c, 4)) { goto L_94886; }
    X86_TICK(c, 11);
    // 094879  cmp edi, dword ptr [eax + 4]
    X86_AT(c, 0x94879u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 0, 4);
    // 09487c  je 0x94886
    X86_AT(c, 0x9487cu);
    if (x86_cc(c, 4)) { goto L_94886; }
    X86_TICK(c, 11);
    // 09487e  push edi
    X86_AT(c, 0x9487eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09487f  push 1
    X86_AT(c, 0x9487fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 094881  call 0x95c50
    X86_AT(c, 0x94881u);
    push32(c, 0x94886u); x86_call_known(c, 0x95c50u, f_00095c50); X86_RET(c, 0x94886u);
L_94886:
    X86_TICK(c, 13);
    // 094886  push edi
    X86_AT(c, 0x94886u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094887  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x94887u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09488a  call dword ptr [ebp + 8]
    X86_AT(c, 0x9488au);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0x9488du); x86_call(c, t); X86_RET(c, 0x9488du); }
    X86_TICK(c, 6);
    // 09488d  mov esi, edi
    X86_AT(c, 0x9488du);
    c.r[6] = c.r[7];
    // 09488f  mov edi, dword ptr [ebx + 0x10]
    X86_AT(c, 0x9488fu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
L_94892:
    X86_TICK(c, 7);
    // 094892  and edi, edi
    X86_AT(c, 0x94892u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 094894  jne 0x94850
    X86_AT(c, 0x94894u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x94850u); goto L_94850; }
    X86_TICK(c, 28);
    // 094896  pop edi
    X86_AT(c, 0x94896u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094897  pop esi
    X86_AT(c, 0x94897u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094898  pop ebx
    X86_AT(c, 0x94898u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094899  leave 
    X86_AT(c, 0x94899u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09489a  ret 8
    X86_AT(c, 0x9489au);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x94840u, "ran off the end of a function");
}
void f_000948b4(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0948b4  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x948b4u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0948b8  cmp dword ptr [ecx + 8], 0x18
    X86_AT(c, 0x948b8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u))), 0x18u, 0, 4);
    // 0948bc  jb 0x948e4
    X86_AT(c, 0x948bcu);
    if (x86_cc(c, 2)) { goto L_948e4; }
    X86_TICK(c, 12);
    // 0948be  cmp dword ptr [ecx + 0x14], 0
    X86_AT(c, 0x948beu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u))), 0x0u, 0, 4);
    // 0948c2  jne 0x948ce
    X86_AT(c, 0x948c2u);
    if (x86_cc(c, 5)) { goto L_948ce; }
    X86_TICK(c, 13);
    // 0948c4  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0x948c4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 0948c7  mov dword ptr [0x8a9a8], eax
    X86_AT(c, 0x948c7u);
    wr32((c.sbase[3] + (uint32_t)(0x8A9A8u)), c.r[0]);
    // 0948cc  jmp 0x948d7
    X86_AT(c, 0x948ccu);
    goto L_948d7;
L_948ce:
    X86_TICK(c, 10);
    // 0948ce  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0x948ceu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 0948d1  mov edx, dword ptr [ecx + 0x14]
    X86_AT(c, 0x948d1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)));
    // 0948d4  mov dword ptr [edx + 0x10], eax
    X86_AT(c, 0x948d4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)), c.r[0]);
L_948d7:
    X86_TICK(c, 11);
    // 0948d7  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0x948d7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 0948da  and eax, eax
    X86_AT(c, 0x948dau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0948dc  je 0x948e4
    X86_AT(c, 0x948dcu);
    if (x86_cc(c, 4)) { goto L_948e4; }
    X86_TICK(c, 6);
    // 0948de  mov edx, dword ptr [ecx + 0x14]
    X86_AT(c, 0x948deu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)));
    // 0948e1  mov dword ptr [eax + 0x14], edx
    X86_AT(c, 0x948e1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)), c.r[2]);
L_948e4:
    X86_TICK(c, 10);
    // 0948e4  ret 4
    X86_AT(c, 0x948e4u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x948b4u, "ran off the end of a function");
}
void f_00094908(X86Cpu& c) {
    X86_TICK(c, 23);
    // 094908  push ebp
    X86_AT(c, 0x94908u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094909  mov ebp, esp
    X86_AT(c, 0x94909u);
    c.r[5] = c.r[4];
    // 09490b  push esi
    X86_AT(c, 0x9490bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09490c  push edi
    X86_AT(c, 0x9490cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09490d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x9490du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094910  mov esi, dword ptr [edi]
    X86_AT(c, 0x94910u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 094912  and esi, esi
    X86_AT(c, 0x94912u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 094914  je 0x9493d
    X86_AT(c, 0x94914u);
    if (x86_cc(c, 4)) { goto L_9493d; }
    X86_TICK(c, 12);
    // 094916  cmp byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0x94916u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu))), 0x55u, 0, 1);
    // 09491a  jne 0x9493d
    X86_AT(c, 0x9491au);
    if (x86_cc(c, 5)) { goto L_9493d; }
    X86_TICK(c, 11);
    // 09491c  cmp esi, dword ptr [0x8a9b0]
    X86_AT(c, 0x9491cu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8A9B0u))), 0, 4);
    // 094922  jne 0x9492a
    X86_AT(c, 0x94922u);
    if (x86_cc(c, 5)) { goto L_9492a; }
    X86_TICK(c, 2);
    // 094924  mov dword ptr [0x8a9b0], edi
    X86_AT(c, 0x94924u);
    wr32((c.sbase[3] + (uint32_t)(0x8A9B0u)), c.r[7]);
L_9492a:
    X86_TICK(c, 9);
    // 09492a  push esi
    X86_AT(c, 0x9492au);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09492b  call 0x948b4
    X86_AT(c, 0x9492bu);
    push32(c, 0x94930u); x86_call_known(c, 0x948b4u, f_000948b4); X86_RET(c, 0x94930u);
    X86_TICK(c, 27);
    // 094930  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x94930u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 094933  add dword ptr [edi + 8], eax
    X86_AT(c, 0x94933u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 094936  mov eax, dword ptr [esi]
    X86_AT(c, 0x94936u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 094938  mov dword ptr [edi], eax
    X86_AT(c, 0x94938u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 09493a  xchg esi, eax
    X86_AT(c, 0x9493au);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 09493b  jmp 0x94970
    X86_AT(c, 0x9493bu);
    goto L_94970;
L_9493d:
    X86_TICK(c, 11);
    // 09493d  mov eax, dword ptr [edi + 4]
    X86_AT(c, 0x9493du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 094940  and eax, eax
    X86_AT(c, 0x94940u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094942  je 0x9497b
    X86_AT(c, 0x94942u);
    if (x86_cc(c, 4)) { goto L_9497b; }
    X86_TICK(c, 15);
    // 094944  xchg esi, eax
    X86_AT(c, 0x94944u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 094945  cmp byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0x94945u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu))), 0x55u, 0, 1);
    // 094949  jne 0x9497b
    X86_AT(c, 0x94949u);
    if (x86_cc(c, 5)) { goto L_9497b; }
    X86_TICK(c, 11);
    // 09494b  cmp edi, dword ptr [0x8a9b0]
    X86_AT(c, 0x9494bu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x8A9B0u))), 0, 4);
    // 094951  jne 0x94959
    X86_AT(c, 0x94951u);
    if (x86_cc(c, 5)) { goto L_94959; }
    X86_TICK(c, 2);
    // 094953  mov dword ptr [0x8a9b0], esi
    X86_AT(c, 0x94953u);
    wr32((c.sbase[3] + (uint32_t)(0x8A9B0u)), c.r[6]);
L_94959:
    X86_TICK(c, 9);
    // 094959  push esi
    X86_AT(c, 0x94959u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09495a  call 0x948b4
    X86_AT(c, 0x9495au);
    push32(c, 0x9495fu); x86_call_known(c, 0x948b4u, f_000948b4); X86_RET(c, 0x9495fu);
    X86_TICK(c, 29);
    // 09495f  mov eax, dword ptr [edi + 8]
    X86_AT(c, 0x9495fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 094962  add dword ptr [esi + 8], eax
    X86_AT(c, 0x94962u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 094965  mov eax, dword ptr [edi]
    X86_AT(c, 0x94965u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 094967  mov dword ptr [esi], eax
    X86_AT(c, 0x94967u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 094969  mov edi, esi
    X86_AT(c, 0x94969u);
    c.r[7] = c.r[6];
    // 09496b  xchg esi, eax
    X86_AT(c, 0x9496bu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 09496c  and esi, esi
    X86_AT(c, 0x9496cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 09496e  je 0x94973
    X86_AT(c, 0x9496eu);
    if (x86_cc(c, 4)) { goto L_94973; }
L_94970:
    X86_TICK(c, 2);
    // 094970  mov dword ptr [esi + 4], edi
    X86_AT(c, 0x94970u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[7]);
L_94973:
    X86_TICK(c, 9);
    // 094973  push edi
    X86_AT(c, 0x94973u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094974  call 0x94908
    X86_AT(c, 0x94974u);
    push32(c, 0x94979u); x86_call_known(c, 0x94908u, f_00094908); X86_RET(c, 0x94979u);
    X86_TICK(c, 7);
    // 094979  jmp 0x9499e
    X86_AT(c, 0x94979u);
    goto L_9499e;
L_9497b:
    X86_TICK(c, 12);
    // 09497b  cmp dword ptr [edi + 8], 0x18
    X86_AT(c, 0x9497bu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0x18u, 0, 4);
    // 09497f  jb 0x9499e
    X86_AT(c, 0x9497fu);
    if (x86_cc(c, 2)) { goto L_9499e; }
    X86_TICK(c, 13);
    // 094981  mov esi, dword ptr [0x8a9a8]
    X86_AT(c, 0x94981u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8A9A8u)));
    // 094987  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0x94987u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 09498a  and esi, esi
    X86_AT(c, 0x9498au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 09498c  je 0x94991
    X86_AT(c, 0x9498cu);
    if (x86_cc(c, 4)) { goto L_94991; }
    X86_TICK(c, 2);
    // 09498e  mov dword ptr [esi + 0x14], edi
    X86_AT(c, 0x9498eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), c.r[7]);
L_94991:
    X86_TICK(c, 4);
    // 094991  mov dword ptr [edi + 0x14], 0
    X86_AT(c, 0x94991u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), 0x0u);
    // 094998  mov dword ptr [0x8a9a8], edi
    X86_AT(c, 0x94998u);
    wr32((c.sbase[3] + (uint32_t)(0x8A9A8u)), c.r[7]);
L_9499e:
    X86_TICK(c, 24);
    // 09499e  pop edi
    X86_AT(c, 0x9499eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09499f  pop esi
    X86_AT(c, 0x9499fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0949a0  leave 
    X86_AT(c, 0x949a0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0949a1  ret 4
    X86_AT(c, 0x949a1u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94908u, "ran off the end of a function");
}
void f_000949b8(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0949b8  enter 4, 0
    X86_AT(c, 0x949b8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0949bc  push ebx
    X86_AT(c, 0x949bcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0949bd  push esi
    X86_AT(c, 0x949bdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0949be  push edi
    X86_AT(c, 0x949beu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0949bf  push ebp
    X86_AT(c, 0x949bfu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0949c0  push 0x949e8
    X86_AT(c, 0x949c0u);
    { uint32_t v = 0x949E8u; push32(c, v); }
    // 0949c5  call 0x94840
    X86_AT(c, 0x949c5u);
    push32(c, 0x949cau); x86_call_known(c, 0x94840u, f_00094840); X86_RET(c, 0x949cau);
    X86_TICK(c, 36);
    // 0949ca  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x949cau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0949d1  lea esp, [ebp - 0x10]
    X86_AT(c, 0x949d1u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0949d4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x949d4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0949d7  pop edi
    X86_AT(c, 0x949d7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0949d8  pop esi
    X86_AT(c, 0x949d8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0949d9  pop ebx
    X86_AT(c, 0x949d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0949da  leave 
    X86_AT(c, 0x949dau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0949db  ret 4
    X86_AT(c, 0x949dbu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x949b8u, "ran off the end of a function");
}
void f_000949e8(X86Cpu& c) {
    goto L_949e8;
L_949d1:
    X86_TICK(c, 34);
    // 0949d1  lea esp, [ebp - 0x10]
    X86_AT(c, 0x949d1u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0949d4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x949d4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0949d7  pop edi
    X86_AT(c, 0x949d7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0949d8  pop esi
    X86_AT(c, 0x949d8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0949d9  pop ebx
    X86_AT(c, 0x949d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0949da  leave 
    X86_AT(c, 0x949dau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0949db  ret 4
    X86_AT(c, 0x949dbu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
L_949e8:
    X86_TICK(c, 29);
    // 0949e8  push ebp
    X86_AT(c, 0x949e8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0949e9  mov ebp, esp
    X86_AT(c, 0x949e9u);
    c.r[5] = c.r[4];
    // 0949eb  push ecx
    X86_AT(c, 0x949ebu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0949ec  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x949ecu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0949ef  mov eax, dword ptr [ecx + 8]
    X86_AT(c, 0x949efu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u)));
    // 0949f2  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x949f2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0949f5  cmp eax, dword ptr [edx + 8]
    X86_AT(c, 0x949f5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u))), 0, 4);
    // 0949f8  jb 0x94a01
    X86_AT(c, 0x949f8u);
    if (x86_cc(c, 2)) { goto L_94a01; }
    X86_TICK(c, 11);
    // 0949fa  mov dword ptr [edx - 4], ecx
    X86_AT(c, 0x949fau);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFFCu)), c.r[1]);
    // 0949fd  mov ebp, edx
    X86_AT(c, 0x949fdu);
    c.r[5] = c.r[2];
    // 0949ff  jmp 0x949d1
    X86_AT(c, 0x949ffu);
    X86_POLL(c, 0x949d1u); goto L_949d1;
L_94a01:
    X86_TICK(c, 16);
    // 094a01  leave 
    X86_AT(c, 0x94a01u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094a02  ret 4
    X86_AT(c, 0x94a02u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x949e8u, "ran off the end of a function");
}
void f_00094a10(X86Cpu& c) {
    X86_TICK(c, 23);
    // 094a10  mov eax, dword ptr [0x8a9b4]
    X86_AT(c, 0x94a10u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9B4u)));
    // 094a15  add eax, 0x200
    X86_AT(c, 0x94a15u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x200u, 0, 4); }
    // 094a1a  push eax
    X86_AT(c, 0x94a1au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094a1b  mov eax, dword ptr [0x8a9b4]
    X86_AT(c, 0x94a1bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9B4u)));
    // 094a20  add eax, 0x100
    X86_AT(c, 0x94a20u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x100u, 0, 4); }
    // 094a25  push eax
    X86_AT(c, 0x94a25u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094a26  call 0x93719
    X86_AT(c, 0x94a26u);
    push32(c, 0x94a2bu); x86_call_known(c, 0x93719u, f_00093719); X86_RET(c, 0x94a2bu);
    X86_TICK(c, 10);
    // 094a2b  ret 
    X86_AT(c, 0x94a2bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94a10u, "ran off the end of a function");
}
void f_00094a38(X86Cpu& c) {
    X86_TICK(c, 28);
    // 094a38  enter 4, 0
    X86_AT(c, 0x94a38u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 094a3c  push ebx
    X86_AT(c, 0x94a3cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094a3d  push esi
    X86_AT(c, 0x94a3du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094a3e  push edi
    X86_AT(c, 0x94a3eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094a3f  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x94a3fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094a42  cmp dword ptr [0x8a9b4], 0
    X86_AT(c, 0x94a42u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A9B4u))), 0x0u, 0, 4);
    // 094a49  jne 0x94a55
    X86_AT(c, 0x94a49u);
    if (x86_cc(c, 5)) { goto L_94a55; }
    X86_TICK(c, 7);
    // 094a4b  call 0x936be
    X86_AT(c, 0x94a4bu);
    push32(c, 0x94a50u); x86_call_known(c, 0x936beu, f_000936be); X86_RET(c, 0x94a50u);
    X86_TICK(c, 2);
    // 094a50  mov dword ptr [0x8a9b4], eax
    X86_AT(c, 0x94a50u);
    wr32((c.sbase[3] + (uint32_t)(0x8A9B4u)), c.r[0]);
L_94a55:
    X86_TICK(c, 7);
    // 094a55  call 0x936ca
    X86_AT(c, 0x94a55u);
    push32(c, 0x94a5au); x86_call_known(c, 0x936cau, f_000936ca); X86_RET(c, 0x94a5au);
    X86_TICK(c, 16);
    // 094a5a  xchg esi, eax
    X86_AT(c, 0x94a5au);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 094a5b  sub esi, dword ptr [0x8a9b4]
    X86_AT(c, 0x94a5bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A9B4u))), 0, 4); }
    // 094a61  cmp esi, edi
    X86_AT(c, 0x94a61u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 094a63  jb 0x94a70
    X86_AT(c, 0x94a63u);
    if (x86_cc(c, 2)) { goto L_94a70; }
    X86_TICK(c, 11);
    // 094a65  mov eax, esi
    X86_AT(c, 0x94a65u);
    c.r[0] = c.r[6];
    // 094a67  sub eax, edi
    X86_AT(c, 0x94a67u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 094a69  cmp eax, 0x200
    X86_AT(c, 0x94a69u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 094a6e  jge 0x94ab5
    X86_AT(c, 0x94a6eu);
    if (x86_cc(c, 13)) { goto L_94ab5; }
L_94a70:
    X86_TICK(c, 7);
    // 094a70  cmp esi, edi
    X86_AT(c, 0x94a70u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 094a72  jae 0x94a8b
    X86_AT(c, 0x94a72u);
    if (x86_cc(c, 3)) { goto L_94a8b; }
    X86_TICK(c, 63);
    // 094a74  mov eax, edi
    X86_AT(c, 0x94a74u);
    c.r[0] = c.r[7];
    // 094a76  sub eax, esi
    X86_AT(c, 0x94a76u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 094a78  add eax, 0xfff
    X86_AT(c, 0x94a78u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xFFFu, 0, 4); }
    // 094a7d  cdq 
    X86_AT(c, 0x94a7du);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 094a7e  mov ecx, 0x1000
    X86_AT(c, 0x94a7eu);
    c.r[1] = 0x1000u;
    // 094a83  idiv ecx
    X86_AT(c, 0x94a83u);
    x86_idiv(c, c.r[1], 4, 0x94a83u);
    // 094a85  xchg ebx, eax
    X86_AT(c, 0x94a85u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 094a86  shl ebx, 0xc
    X86_AT(c, 0x94a86u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[3] = r; }
    // 094a89  jmp 0x94a90
    X86_AT(c, 0x94a89u);
    goto L_94a90;
L_94a8b:
    X86_TICK(c, 2);
    // 094a8b  mov ebx, 0x1000
    X86_AT(c, 0x94a8bu);
    c.r[3] = 0x1000u;
L_94a90:
    X86_TICK(c, 9);
    // 094a90  push ebx
    X86_AT(c, 0x94a90u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094a91  call 0x936d0
    X86_AT(c, 0x94a91u);
    push32(c, 0x94a96u); x86_call_known(c, 0x936d0u, f_000936d0); X86_RET(c, 0x94a96u);
    X86_TICK(c, 7);
    // 094a96  call 0x936ca
    X86_AT(c, 0x94a96u);
    push32(c, 0x94a9bu); x86_call_known(c, 0x936cau, f_000936ca); X86_RET(c, 0x94a9bu);
    X86_TICK(c, 16);
    // 094a9b  xchg esi, eax
    X86_AT(c, 0x94a9bu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 094a9c  sub esi, dword ptr [0x8a9b4]
    X86_AT(c, 0x94a9cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0x8A9B4u))), 0, 4); }
    // 094aa2  cmp esi, edi
    X86_AT(c, 0x94aa2u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 094aa4  jb 0x94ab1
    X86_AT(c, 0x94aa4u);
    if (x86_cc(c, 2)) { goto L_94ab1; }
    X86_TICK(c, 11);
    // 094aa6  mov eax, esi
    X86_AT(c, 0x94aa6u);
    c.r[0] = c.r[6];
    // 094aa8  sub eax, edi
    X86_AT(c, 0x94aa8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 094aaa  cmp eax, 0x200
    X86_AT(c, 0x94aaau);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 094aaf  jge 0x94ab5
    X86_AT(c, 0x94aafu);
    if (x86_cc(c, 13)) { goto L_94ab5; }
L_94ab1:
    X86_TICK(c, 9);
    // 094ab1  sub eax, eax
    X86_AT(c, 0x94ab1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094ab3  jmp 0x94aca
    X86_AT(c, 0x94ab3u);
    goto L_94aca;
L_94ab5:
    X86_TICK(c, 20);
    // 094ab5  mov ebx, dword ptr [0x8a9b4]
    X86_AT(c, 0x94ab5u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x8A9B4u)));
    // 094abb  mov dword ptr [ebp - 4], ebx
    X86_AT(c, 0x94abbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[3]);
    // 094abe  add dword ptr [0x8a9b4], edi
    X86_AT(c, 0x94abeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A9B4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 094ac4  call 0x94a10
    X86_AT(c, 0x94ac4u);
    push32(c, 0x94ac9u); x86_call_known(c, 0x94a10u, f_00094a10); X86_RET(c, 0x94ac9u);
    X86_TICK(c, 3);
    // 094ac9  xchg ebx, eax
    X86_AT(c, 0x94ac9u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
L_94aca:
    X86_TICK(c, 28);
    // 094aca  pop edi
    X86_AT(c, 0x94acau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094acb  pop esi
    X86_AT(c, 0x94acbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094acc  pop ebx
    X86_AT(c, 0x94accu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094acd  leave 
    X86_AT(c, 0x94acdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094ace  ret 4
    X86_AT(c, 0x94aceu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94a38u, "ran off the end of a function");
}
void f_00094ae0(X86Cpu& c) {
    X86_TICK(c, 21);
    // 094ae0  push ebp
    X86_AT(c, 0x94ae0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094ae1  mov ebp, esp
    X86_AT(c, 0x94ae1u);
    c.r[5] = c.r[4];
    // 094ae3  push esi
    X86_AT(c, 0x94ae3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094ae4  push edi
    X86_AT(c, 0x94ae4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094ae5  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x94ae5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094ae8  mov eax, 0x18
    X86_AT(c, 0x94ae8u);
    c.r[0] = 0x18u;
    // 094aed  cmp eax, edi
    X86_AT(c, 0x94aedu);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 094aef  jb 0x94af2
    X86_AT(c, 0x94aefu);
    if (x86_cc(c, 2)) { goto L_94af2; }
    X86_TICK(c, 3);
    // 094af1  xchg edi, eax
    X86_AT(c, 0x94af1u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_94af2:
    X86_TICK(c, 7);
    // 094af2  cmp edi, 0x7fffffff
    X86_AT(c, 0x94af2u);
    (void)x86_sub(c, c.r[7], 0x7FFFFFFFu, 0, 4);
    // 094af8  ja 0x94b3d
    X86_AT(c, 0x94af8u);
    if (x86_cc(c, 7)) { goto L_94b3d; }
    X86_TICK(c, 9);
    // 094afa  push edi
    X86_AT(c, 0x94afau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094afb  call 0x94a38
    X86_AT(c, 0x94afbu);
    push32(c, 0x94b00u); x86_call_known(c, 0x94a38u, f_00094a38); X86_RET(c, 0x94b00u);
    X86_TICK(c, 10);
    // 094b00  xchg esi, eax
    X86_AT(c, 0x94b00u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 094b01  and esi, esi
    X86_AT(c, 0x94b01u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 094b03  je 0x94b3d
    X86_AT(c, 0x94b03u);
    if (x86_cc(c, 4)) { goto L_94b3d; }
    X86_TICK(c, 23);
    // 094b05  sub eax, eax
    X86_AT(c, 0x94b05u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094b07  mov dword ptr [esi], eax
    X86_AT(c, 0x94b07u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 094b09  mov edx, dword ptr [0x8a9b0]
    X86_AT(c, 0x94b09u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A9B0u)));
    // 094b0f  mov dword ptr [esi + 4], edx
    X86_AT(c, 0x94b0fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[2]);
    // 094b12  mov byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0x94b12u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu)), 0x55u);
    // 094b16  mov dword ptr [esi + 8], edi
    X86_AT(c, 0x94b16u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[7]);
    // 094b19  mov byte ptr [esi + 0xe], al
    X86_AT(c, 0x94b19u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu)), g8(c, 0));
    // 094b1c  cmp eax, edx
    X86_AT(c, 0x94b1cu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 094b1e  je 0x94b22
    X86_AT(c, 0x94b1eu);
    if (x86_cc(c, 4)) { goto L_94b22; }
    X86_TICK(c, 2);
    // 094b20  mov dword ptr [edx], esi
    X86_AT(c, 0x94b20u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[6]);
L_94b22:
    X86_TICK(c, 14);
    // 094b22  mov dword ptr [0x8a9b0], esi
    X86_AT(c, 0x94b22u);
    wr32((c.sbase[3] + (uint32_t)(0x8A9B0u)), c.r[6]);
    // 094b28  cmp dword ptr [0x8a9ac], 0
    X86_AT(c, 0x94b28u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A9ACu))), 0x0u, 0, 4);
    // 094b2f  jne 0x94b37
    X86_AT(c, 0x94b2fu);
    if (x86_cc(c, 5)) { goto L_94b37; }
    X86_TICK(c, 2);
    // 094b31  mov dword ptr [0x8a9ac], esi
    X86_AT(c, 0x94b31u);
    wr32((c.sbase[3] + (uint32_t)(0x8A9ACu)), c.r[6]);
L_94b37:
    X86_TICK(c, 9);
    // 094b37  push esi
    X86_AT(c, 0x94b37u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094b38  call 0x94908
    X86_AT(c, 0x94b38u);
    push32(c, 0x94b3du); x86_call_known(c, 0x94908u, f_00094908); X86_RET(c, 0x94b3du);
L_94b3d:
    X86_TICK(c, 24);
    // 094b3d  pop edi
    X86_AT(c, 0x94b3du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094b3e  pop esi
    X86_AT(c, 0x94b3eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094b3f  leave 
    X86_AT(c, 0x94b3fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094b40  ret 4
    X86_AT(c, 0x94b40u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94ae0u, "ran off the end of a function");
}
void f_00094b4c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 094b4c  enter 8, 0
    X86_AT(c, 0x94b4cu);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 094b50  push ebx
    X86_AT(c, 0x94b50u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094b51  push esi
    X86_AT(c, 0x94b51u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094b52  push edi
    X86_AT(c, 0x94b52u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094b53  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x94b53u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094b56  cmp byte ptr [0x8a9a0], 0
    X86_AT(c, 0x94b56u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A9A0u))), 0x0u, 0, 1);
    // 094b5d  je 0x94b64
    X86_AT(c, 0x94b5du);
    if (x86_cc(c, 4)) { goto L_94b64; }
    X86_TICK(c, 7);
    // 094b5f  call 0x94da4
    X86_AT(c, 0x94b5fu);
    push32(c, 0x94b64u); x86_call_known(c, 0x94da4u, f_00094da4); X86_RET(c, 0x94b64u);
L_94b64:
    X86_TICK(c, 7);
    // 094b64  cmp edi, 0x7fffffec
    X86_AT(c, 0x94b64u);
    (void)x86_sub(c, c.r[7], 0x7FFFFFECu, 0, 4);
    // 094b6a  jbe 0x94b73
    X86_AT(c, 0x94b6au);
    if (x86_cc(c, 6)) { goto L_94b73; }
    X86_TICK(c, 9);
    // 094b6c  sub eax, eax
    X86_AT(c, 0x94b6cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094b6e  jmp 0x94c4b
    X86_AT(c, 0x94b6eu);
    goto L_94c4b;
L_94b73:
    X86_TICK(c, 10);
    // 094b73  mov eax, edi
    X86_AT(c, 0x94b73u);
    c.r[0] = c.r[7];
    // 094b75  rcr eax, 1
    X86_AT(c, 0x94b75u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 094b77  jae 0x94b7a
    X86_AT(c, 0x94b77u);
    if (x86_cc(c, 3)) { goto L_94b7a; }
    X86_TICK(c, 2);
    // 094b79  inc edi
    X86_AT(c, 0x94b79u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_94b7a:
    X86_TICK(c, 7);
    // 094b7a  test di, 3
    X86_AT(c, 0x94b7au);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & 0x3u, 2);
    // 094b7f  je 0x94b84
    X86_AT(c, 0x94b7fu);
    if (x86_cc(c, 4)) { goto L_94b84; }
    X86_TICK(c, 2);
    // 094b81  add edi, 2
    X86_AT(c, 0x94b81u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
L_94b84:
    X86_TICK(c, 11);
    // 094b84  add edi, 0x10
    X86_AT(c, 0x94b84u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x10u, 0, 4); }
    // 094b87  push edi
    X86_AT(c, 0x94b87u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094b88  call 0x949b8
    X86_AT(c, 0x94b88u);
    push32(c, 0x94b8du); x86_call_known(c, 0x949b8u, f_000949b8); X86_RET(c, 0x94b8du);
    X86_TICK(c, 10);
    // 094b8d  xchg esi, eax
    X86_AT(c, 0x94b8du);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 094b8e  and esi, esi
    X86_AT(c, 0x94b8eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 094b90  jne 0x94b9f
    X86_AT(c, 0x94b90u);
    if (x86_cc(c, 5)) { goto L_94b9f; }
    X86_TICK(c, 9);
    // 094b92  push edi
    X86_AT(c, 0x94b92u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094b93  call 0x94ae0
    X86_AT(c, 0x94b93u);
    push32(c, 0x94b98u); x86_call_known(c, 0x94ae0u, f_00094ae0); X86_RET(c, 0x94b98u);
    X86_TICK(c, 9);
    // 094b98  push edi
    X86_AT(c, 0x94b98u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094b99  call 0x949b8
    X86_AT(c, 0x94b99u);
    push32(c, 0x94b9eu); x86_call_known(c, 0x949b8u, f_000949b8); X86_RET(c, 0x94b9eu);
    X86_TICK(c, 3);
    // 094b9e  xchg esi, eax
    X86_AT(c, 0x94b9eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_94b9f:
    X86_TICK(c, 7);
    // 094b9f  and esi, esi
    X86_AT(c, 0x94b9fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 094ba1  je 0x94c33
    X86_AT(c, 0x94ba1u);
    if (x86_cc(c, 4)) { goto L_94c33; }
    X86_TICK(c, 9);
    // 094ba7  push esi
    X86_AT(c, 0x94ba7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094ba8  call 0x948b4
    X86_AT(c, 0x94ba8u);
    push32(c, 0x94badu); x86_call_known(c, 0x948b4u, f_000948b4); X86_RET(c, 0x94badu);
    X86_TICK(c, 15);
    // 094bad  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x94badu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 094bb0  sub eax, edi
    X86_AT(c, 0x94bb0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 094bb2  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x94bb2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 094bb5  cmp eax, 0x10
    X86_AT(c, 0x94bb5u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 094bb8  ja 0x94bc4
    X86_AT(c, 0x94bb8u);
    if (x86_cc(c, 7)) { goto L_94bc4; }
    X86_TICK(c, 6);
    // 094bba  mov edi, dword ptr [esi + 8]
    X86_AT(c, 0x94bbau);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 094bbd  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0x94bbdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_94bc4:
    X86_TICK(c, 37);
    // 094bc4  mov dword ptr [esi + 8], edi
    X86_AT(c, 0x94bc4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[7]);
    // 094bc7  lea eax, [edi - 0x10]
    X86_AT(c, 0x94bc7u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFF0u);
    // 094bca  mov dword ptr [0x8a9b8], eax
    X86_AT(c, 0x94bcau);
    wr32((c.sbase[3] + (uint32_t)(0x8A9B8u)), c.r[0]);
    // 094bcf  mov byte ptr [esi + 0xf], 0x44
    X86_AT(c, 0x94bcfu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu)), 0x44u);
    // 094bd3  mov ax, word ptr [0x8a9d4]
    X86_AT(c, 0x94bd3u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A9D4u))));
    // 094bd9  mov word ptr [esi + 0xc], ax
    X86_AT(c, 0x94bd9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[0] & 0xFFFFu));
    // 094bdd  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x94bddu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 094be0  mov byte ptr [esi + 0xe], al
    X86_AT(c, 0x94be0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu)), g8(c, 0));
    // 094be3  lea eax, [esi + 0x10]
    X86_AT(c, 0x94be3u);
    c.r[0] = (uint32_t)(c.r[6] + 0x10u);
    // 094be6  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x94be6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 094be9  push eax
    X86_AT(c, 0x94be9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094bea  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0x94beau);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 094bed  call dword ptr [ebp + 0x10]
    X86_AT(c, 0x94bedu);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, 0x94bf0u); x86_call(c, t); X86_RET(c, 0x94bf0u); }
    X86_TICK(c, 11);
    // 094bf0  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x94bf0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 094bf3  and eax, eax
    X86_AT(c, 0x94bf3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094bf5  jbe 0x94c3a
    X86_AT(c, 0x94bf5u);
    if (x86_cc(c, 6)) { goto L_94c3a; }
    X86_TICK(c, 37);
    // 094bf7  lea ebx, [edi + esi*1]
    X86_AT(c, 0x94bf7u);
    c.r[3] = (uint32_t)(c.r[7] + c.r[6]);
    // 094bfa  mov edx, dword ptr [esi]
    X86_AT(c, 0x94bfau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 094bfc  mov dword ptr [ebx], edx
    X86_AT(c, 0x94bfcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 094bfe  mov dword ptr [esi], ebx
    X86_AT(c, 0x94bfeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[3]);
    // 094c00  mov dword ptr [ebx + 4], esi
    X86_AT(c, 0x94c00u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[6]);
    // 094c03  mov dword ptr [ebx + 8], eax
    X86_AT(c, 0x94c03u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[0]);
    // 094c06  mov byte ptr [ebx + 0xf], 0x55
    X86_AT(c, 0x94c06u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFu)), 0x55u);
    // 094c0a  mov byte ptr [ebx + 0xe], 0
    X86_AT(c, 0x94c0au);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu)), 0x0u);
    // 094c0e  mov dx, word ptr [0x8a9d4]
    X86_AT(c, 0x94c0eu);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0x8A9D4u))));
    // 094c15  mov word ptr [ebx + 0xc], dx
    X86_AT(c, 0x94c15u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), (c.r[2] & 0xFFFFu));
    // 094c19  mov dword ptr [ebx + eax*1 + 4], ebx
    X86_AT(c, 0x94c19u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x4u)), c.r[3]);
    // 094c1d  cmp esi, dword ptr [0x8a9b0]
    X86_AT(c, 0x94c1du);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0x8A9B0u))), 0, 4);
    // 094c23  jne 0x94c2b
    X86_AT(c, 0x94c23u);
    if (x86_cc(c, 5)) { goto L_94c2b; }
    X86_TICK(c, 2);
    // 094c25  mov dword ptr [0x8a9b0], ebx
    X86_AT(c, 0x94c25u);
    wr32((c.sbase[3] + (uint32_t)(0x8A9B0u)), c.r[3]);
L_94c2b:
    X86_TICK(c, 9);
    // 094c2b  push ebx
    X86_AT(c, 0x94c2bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094c2c  call 0x94908
    X86_AT(c, 0x94c2cu);
    push32(c, 0x94c31u); x86_call_known(c, 0x94908u, f_00094908); X86_RET(c, 0x94c31u);
    X86_TICK(c, 7);
    // 094c31  jmp 0x94c3a
    X86_AT(c, 0x94c31u);
    goto L_94c3a;
L_94c33:
    X86_TICK(c, 2);
    // 094c33  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x94c33u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_94c3a:
    X86_TICK(c, 12);
    // 094c3a  cmp byte ptr [0x8a9a0], 0
    X86_AT(c, 0x94c3au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A9A0u))), 0x0u, 0, 1);
    // 094c41  je 0x94c48
    X86_AT(c, 0x94c41u);
    if (x86_cc(c, 4)) { goto L_94c48; }
    X86_TICK(c, 7);
    // 094c43  call 0x94da4
    X86_AT(c, 0x94c43u);
    push32(c, 0x94c48u); x86_call_known(c, 0x94da4u, f_00094da4); X86_RET(c, 0x94c48u);
L_94c48:
    X86_TICK(c, 4);
    // 094c48  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94c48u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_94c4b:
    X86_TICK(c, 28);
    // 094c4b  pop edi
    X86_AT(c, 0x94c4bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094c4c  pop esi
    X86_AT(c, 0x94c4cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094c4d  pop ebx
    X86_AT(c, 0x94c4du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094c4e  leave 
    X86_AT(c, 0x94c4eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094c4f  ret 0x10
    X86_AT(c, 0x94c4fu);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0x94b4cu, "ran off the end of a function");
}
void f_00094c54(X86Cpu& c) {
    X86_TICK(c, 22);
    // 094c54  push ebp
    X86_AT(c, 0x94c54u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094c55  mov ebp, esp
    X86_AT(c, 0x94c55u);
    c.r[5] = c.r[4];
    // 094c57  push ecx
    X86_AT(c, 0x94c57u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094c58  leave 
    X86_AT(c, 0x94c58u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094c59  ret 4
    X86_AT(c, 0x94c59u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94c54u, "ran off the end of a function");
}
void f_00094c64(X86Cpu& c) {
    X86_TICK(c, 29);
    // 094c64  enter 4, 0
    X86_AT(c, 0x94c64u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 094c68  push edi
    X86_AT(c, 0x94c68u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094c69  push ebp
    X86_AT(c, 0x94c69u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094c6a  push 0x94c54
    X86_AT(c, 0x94c6au);
    { uint32_t v = 0x94C54u; push32(c, v); }
    // 094c6f  push dword ptr [ebp + 8]
    X86_AT(c, 0x94c6fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 094c72  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x94c72u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 094c75  call 0x94b4c
    X86_AT(c, 0x94c75u);
    push32(c, 0x94c7au); x86_call_known(c, 0x94b4cu, f_00094b4c); X86_RET(c, 0x94c7au);
    X86_TICK(c, 14);
    // 094c7a  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x94c7au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 094c7d  cmp byte ptr [0x8a9a2], 0
    X86_AT(c, 0x94c7du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A9A2u))), 0x0u, 0, 1);
    // 094c84  je 0x94ca0
    X86_AT(c, 0x94c84u);
    if (x86_cc(c, 4)) { goto L_94ca0; }
    X86_TICK(c, 7);
    // 094c86  and eax, eax
    X86_AT(c, 0x94c86u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094c88  je 0x94ca0
    X86_AT(c, 0x94c88u);
    if (x86_cc(c, 4)) { goto L_94ca0; }
    X86_TICK(c, 11);
    // 094c8a  mov edx, dword ptr [0x8a9b8]
    X86_AT(c, 0x94c8au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A9B8u)));
    // 094c90  and edx, edx
    X86_AT(c, 0x94c90u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 094c92  jbe 0x94ca0
    X86_AT(c, 0x94c92u);
    if (x86_cc(c, 6)) { goto L_94ca0; }
    X86_TICK(c, 17);
    // 094c94  mov al, byte ptr [0x8a9a1]
    X86_AT(c, 0x94c94u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A9A1u))));
    // 094c99  mov ecx, edx
    X86_AT(c, 0x94c99u);
    c.r[1] = c.r[2];
    // 094c9b  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0x94c9bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094c9e  stosb byte ptr es:[edi], al
    X86_AT(c, 0x94c9eu);
    x86_string(c, 2, 1, 243, 4, 3);
L_94ca0:
    X86_TICK(c, 24);
    // 094ca0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94ca0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094ca3  pop edi
    X86_AT(c, 0x94ca3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094ca4  leave 
    X86_AT(c, 0x94ca4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094ca5  ret 8
    X86_AT(c, 0x94ca5u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x94c64u, "ran off the end of a function");
}
void f_00094cb0(X86Cpu& c) {
    X86_TICK(c, 22);
    // 094cb0  push ebp
    X86_AT(c, 0x94cb0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094cb1  mov ebp, esp
    X86_AT(c, 0x94cb1u);
    c.r[5] = c.r[4];
    // 094cb3  push dword ptr [ebp + 8]
    X86_AT(c, 0x94cb3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 094cb6  mov ax, word ptr [0x8a9a4]
    X86_AT(c, 0x94cb6u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A9A4u))));
    // 094cbc  push eax
    X86_AT(c, 0x94cbcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094cbd  call 0x94c64
    X86_AT(c, 0x94cbdu);
    push32(c, 0x94cc2u); x86_call_known(c, 0x94c64u, f_00094c64); X86_RET(c, 0x94cc2u);
    X86_TICK(c, 16);
    // 094cc2  leave 
    X86_AT(c, 0x94cc2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094cc3  ret 4
    X86_AT(c, 0x94cc3u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94cb0u, "ran off the end of a function");
}
void f_00094ccc(X86Cpu& c) {
    X86_TICK(c, 26);
    // 094ccc  push ebp
    X86_AT(c, 0x94cccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094ccd  mov ebp, esp
    X86_AT(c, 0x94ccdu);
    c.r[5] = c.r[4];
    // 094ccf  push ecx
    X86_AT(c, 0x94ccfu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094cd0  push ebx
    X86_AT(c, 0x94cd0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094cd1  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0x94cd1u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094cd4  push dword ptr [ebx + 8]
    X86_AT(c, 0x94cd4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 094cd7  push 6
    X86_AT(c, 0x94cd7u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 094cd9  call 0x95c50
    X86_AT(c, 0x94cd9u);
    push32(c, 0x94cdeu); x86_call_known(c, 0x95c50u, f_00095c50); X86_RET(c, 0x94cdeu);
    X86_TICK(c, 9);
    // 094cde  mov ebp, ebx
    X86_AT(c, 0x94cdeu);
    c.r[5] = c.r[3];
    // 094ce0  jmp 0x94d84
    X86_AT(c, 0x94ce0u);
    goto L_94d84;
L_94d84:
    X86_TICK(c, 30);
    // 094d84  lea esp, [ebp - 0x10]
    X86_AT(c, 0x94d84u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 094d87  pop edi
    X86_AT(c, 0x94d87u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094d88  pop esi
    X86_AT(c, 0x94d88u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094d89  pop ebx
    X86_AT(c, 0x94d89u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094d8a  leave 
    X86_AT(c, 0x94d8au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094d8b  ret 4
    X86_AT(c, 0x94d8bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94cccu, "ran off the end of a function");
}
void f_00094cea(X86Cpu& c) {
    X86_TICK(c, 24);
    // 094cea  enter 4, 0
    X86_AT(c, 0x94ceau);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 094cee  push ebx
    X86_AT(c, 0x94ceeu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094cef  push esi
    X86_AT(c, 0x94cefu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094cf0  push edi
    X86_AT(c, 0x94cf0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094cf1  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0x94cf1u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 094cf5  je 0x94d87
    X86_AT(c, 0x94cf5u);
    if (x86_cc(c, 4)) { goto L_94d87; }
    X86_TICK(c, 25);
    // 094cfb  add dword ptr [ebp + 8], 0xfffffff0
    X86_AT(c, 0x94cfbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF0u, 0, 4)); }
    // 094cff  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x94cffu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094d02  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x94d02u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 094d05  cmp byte ptr [0x8a9a0], 0
    X86_AT(c, 0x94d05u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A9A0u))), 0x0u, 0, 1);
    // 094d0c  je 0x94d13
    X86_AT(c, 0x94d0cu);
    if (x86_cc(c, 4)) { goto L_94d13; }
    X86_TICK(c, 7);
    // 094d0e  call 0x94da4
    X86_AT(c, 0x94d0eu);
    push32(c, 0x94d13u); x86_call_known(c, 0x94da4u, f_00094da4); X86_RET(c, 0x94d13u);
L_94d13:
    X86_TICK(c, 16);
    // 094d13  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94d13u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094d16  cmp byte ptr [eax + 0xf], 0x44
    X86_AT(c, 0x94d16u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu))), 0x44u, 0, 1);
    // 094d1a  jne 0x94d2a
    X86_AT(c, 0x94d1au);
    if (x86_cc(c, 5)) { goto L_94d2a; }
    X86_TICK(c, 15);
    // 094d1c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94d1cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094d1f  mov edx, dword ptr [eax]
    X86_AT(c, 0x94d1fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 094d21  and edx, edx
    X86_AT(c, 0x94d21u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 094d23  je 0x94d31
    X86_AT(c, 0x94d23u);
    if (x86_cc(c, 4)) { goto L_94d31; }
    X86_TICK(c, 11);
    // 094d25  cmp eax, dword ptr [edx + 4]
    X86_AT(c, 0x94d25u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u))), 0, 4);
    // 094d28  je 0x94d31
    X86_AT(c, 0x94d28u);
    if (x86_cc(c, 4)) { goto L_94d31; }
L_94d2a:
    X86_TICK(c, 9);
    // 094d2a  mov ecx, ebp
    X86_AT(c, 0x94d2au);
    c.r[1] = c.r[5];
    // 094d2c  call 0x94ccc
    X86_AT(c, 0x94d2cu);
    push32(c, 0x94d31u); x86_call_known(c, 0x94cccu, f_00094ccc); X86_RET(c, 0x94d31u);
L_94d31:
    X86_TICK(c, 15);
    // 094d31  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94d31u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094d34  mov byte ptr [eax + 0xf], 0x55
    X86_AT(c, 0x94d34u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu)), 0x55u);
    // 094d38  push eax
    X86_AT(c, 0x94d38u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094d39  call 0x94908
    X86_AT(c, 0x94d39u);
    push32(c, 0x94d3eu); x86_call_known(c, 0x94908u, f_00094908); X86_RET(c, 0x94d3eu);
    X86_TICK(c, 16);
    // 094d3e  mov eax, dword ptr [0x8a9b0]
    X86_AT(c, 0x94d3eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A9B0u)));
    // 094d43  cmp byte ptr [eax + 0xf], 0x55
    X86_AT(c, 0x94d43u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu))), 0x55u, 0, 1);
    // 094d47  jne 0x94d76
    X86_AT(c, 0x94d47u);
    if (x86_cc(c, 5)) { goto L_94d76; }
    X86_TICK(c, 28);
    // 094d49  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x94d49u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 094d4c  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x94d4cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 094d4f  neg edx
    X86_AT(c, 0x94d4fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_neg(c, v, 4); }
    // 094d51  add dword ptr [0x8a9b4], edx
    X86_AT(c, 0x94d51u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A9B4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 094d57  mov eax, dword ptr [eax + 4]
    X86_AT(c, 0x94d57u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 094d5a  mov dword ptr [0x8a9b0], eax
    X86_AT(c, 0x94d5au);
    wr32((c.sbase[3] + (uint32_t)(0x8A9B0u)), c.r[0]);
    // 094d5f  and eax, eax
    X86_AT(c, 0x94d5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 094d61  je 0x94d69
    X86_AT(c, 0x94d61u);
    if (x86_cc(c, 4)) { goto L_94d69; }
    X86_TICK(c, 2);
    // 094d63  mov dword ptr [eax], 0
    X86_AT(c, 0x94d63u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
L_94d69:
    X86_TICK(c, 12);
    // 094d69  push dword ptr [ebp - 4]
    X86_AT(c, 0x94d69u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 094d6c  call 0x948b4
    X86_AT(c, 0x94d6cu);
    push32(c, 0x94d71u); x86_call_known(c, 0x948b4u, f_000948b4); X86_RET(c, 0x94d71u);
    X86_TICK(c, 7);
    // 094d71  call 0x94a10
    X86_AT(c, 0x94d71u);
    push32(c, 0x94d76u); x86_call_known(c, 0x94a10u, f_00094a10); X86_RET(c, 0x94d76u);
L_94d76:
    X86_TICK(c, 12);
    // 094d76  cmp byte ptr [0x8a9a0], 0
    X86_AT(c, 0x94d76u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A9A0u))), 0x0u, 0, 1);
    // 094d7d  je 0x94d84
    X86_AT(c, 0x94d7du);
    if (x86_cc(c, 4)) { goto L_94d84; }
    X86_TICK(c, 7);
    // 094d7f  call 0x94da4
    X86_AT(c, 0x94d7fu);
    push32(c, 0x94d84u); x86_call_known(c, 0x94da4u, f_00094da4); X86_RET(c, 0x94d84u);
L_94d84:
    X86_TICK(c, 2);
    // 094d84  lea esp, [ebp - 0x10]
    X86_AT(c, 0x94d84u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
L_94d87:
    X86_TICK(c, 28);
    // 094d87  pop edi
    X86_AT(c, 0x94d87u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094d88  pop esi
    X86_AT(c, 0x94d88u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094d89  pop ebx
    X86_AT(c, 0x94d89u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094d8a  leave 
    X86_AT(c, 0x94d8au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094d8b  ret 4
    X86_AT(c, 0x94d8bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94ceau, "ran off the end of a function");
}
void f_00094da4(X86Cpu& c) {
    X86_TICK(c, 15);
    // 094da4  push ebp
    X86_AT(c, 0x94da4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094da5  mov ebp, esp
    X86_AT(c, 0x94da5u);
    c.r[5] = c.r[4];
    // 094da7  push ebp
    X86_AT(c, 0x94da7u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094da8  push 0x94dbc
    X86_AT(c, 0x94da8u);
    { uint32_t v = 0x94DBCu; push32(c, v); }
    // 094dad  call 0x947e8
    X86_AT(c, 0x94dadu);
    push32(c, 0x94db2u); x86_call_known(c, 0x947e8u, f_000947e8); X86_RET(c, 0x94db2u);
    X86_TICK(c, 16);
    // 094db2  leave 
    X86_AT(c, 0x94db2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094db3  ret 
    X86_AT(c, 0x94db3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94da4u, "ran off the end of a function");
}
void f_00094dbc(X86Cpu& c) {
    X86_TICK(c, 22);
    // 094dbc  push ebp
    X86_AT(c, 0x94dbcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094dbd  mov ebp, esp
    X86_AT(c, 0x94dbdu);
    c.r[5] = c.r[4];
    // 094dbf  push ecx
    X86_AT(c, 0x94dbfu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094dc0  leave 
    X86_AT(c, 0x94dc0u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094dc1  ret 4
    X86_AT(c, 0x94dc1u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94dbcu, "ran off the end of a function");
}
void f_00094dc4(X86Cpu& c) {
    X86_TICK(c, 13);
    // 094dc4  inc byte ptr [0x8a9d9]
    X86_AT(c, 0x94dc4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A9D9u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 094dca  call 0x95c28
    X86_AT(c, 0x94dcau);
    push32(c, 0x94dcfu); x86_call_known(c, 0x95c28u, f_00095c28); X86_RET(c, 0x94dcfu);
    X86_TICK(c, 7);
    // 094dcf  call 0x9463c
    X86_AT(c, 0x94dcfu);
    push32(c, 0x94dd4u); x86_call_known(c, 0x9463cu, f_0009463c); X86_RET(c, 0x94dd4u);
    X86_TICK(c, 7);
    // 094dd4  call 0x944f8
    X86_AT(c, 0x94dd4u);
    push32(c, 0x94dd9u); x86_call_known(c, 0x944f8u, f_000944f8); X86_RET(c, 0x94dd9u);
    X86_TICK(c, 7);
    // 094dd9  call 0x931e5
    X86_AT(c, 0x94dd9u);
    push32(c, 0x94ddeu); x86_call_known(c, 0x931e5u, f_000931e5); X86_RET(c, 0x94ddeu);
    X86_TICK(c, 13);
    // 094dde  mov al, byte ptr [0x8a9d8]
    X86_AT(c, 0x94ddeu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A9D8u))));
    // 094de3  push eax
    X86_AT(c, 0x94de3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094de4  call 0x94710
    X86_AT(c, 0x94de4u);
    push32(c, 0x94de9u); x86_call_known(c, 0x94710u, f_00094710); X86_RET(c, 0x94de9u);
    X86_TICK(c, 10);
    // 094de9  ret 
    X86_AT(c, 0x94de9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94dc4u, "ran off the end of a function");
}
void f_00094dec(X86Cpu& c) {
    X86_TICK(c, 16);
    // 094dec  push ebp
    X86_AT(c, 0x94decu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094ded  mov ebp, esp
    X86_AT(c, 0x94dedu);
    c.r[5] = c.r[4];
    // 094def  cmp byte ptr [0x8a9da], 0
    X86_AT(c, 0x94defu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A9DAu))), 0x0u, 0, 1);
    // 094df6  je 0x94e05
    X86_AT(c, 0x94df6u);
    if (x86_cc(c, 4)) { goto L_94e05; }
    X86_TICK(c, 13);
    // 094df8  mov al, byte ptr [0x8a9d8]
    X86_AT(c, 0x94df8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x8A9D8u))));
    // 094dfd  push eax
    X86_AT(c, 0x94dfdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094dfe  call 0x94710
    X86_AT(c, 0x94dfeu);
    push32(c, 0x94e03u); x86_call_known(c, 0x94710u, f_00094710); X86_RET(c, 0x94e03u);
    X86_TICK(c, 7);
    // 094e03  jmp 0x94e0c
    X86_AT(c, 0x94e03u);
    goto L_94e0c;
L_94e05:
    X86_TICK(c, 2);
    // 094e05  mov byte ptr [0x8a9da], 1
    X86_AT(c, 0x94e05u);
    wr8((c.sbase[3] + (uint32_t)(0x8A9DAu)), 0x1u);
L_94e0c:
    X86_TICK(c, 13);
    // 094e0c  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x94e0cu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 094e0f  mov byte ptr [0x8a9d8], al
    X86_AT(c, 0x94e0fu);
    wr8((c.sbase[3] + (uint32_t)(0x8A9D8u)), g8(c, 0));
    // 094e14  call 0x94dc4
    X86_AT(c, 0x94e14u);
    push32(c, 0x94e19u); x86_call_known(c, 0x94dc4u, f_00094dc4); X86_RET(c, 0x94e19u);
    X86_TICK(c, 16);
    // 094e19  leave 
    X86_AT(c, 0x94e19u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094e1a  ret 4
    X86_AT(c, 0x94e1au);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94decu, "ran off the end of a function");
}
void f_00094e20(X86Cpu& c) {
    X86_TICK(c, 16);
    // 094e20  push ebp
    X86_AT(c, 0x94e20u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094e21  mov ebp, esp
    X86_AT(c, 0x94e21u);
    c.r[5] = c.r[4];
    // 094e23  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x94e23u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 094e26  call 0x946cc
    X86_AT(c, 0x94e26u);
    push32(c, 0x94e2bu); x86_call_known(c, 0x946ccu, f_000946cc); X86_RET(c, 0x94e2bu);
    X86_TICK(c, 23);
    // 094e2b  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x94e2bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 094e2e  mov dword ptr [0x8a97c], eax
    X86_AT(c, 0x94e2eu);
    wr32((c.sbase[3] + (uint32_t)(0x8A97Cu)), c.r[0]);
    // 094e33  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x94e33u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094e37  mov dword ptr [0x8a978], eax
    X86_AT(c, 0x94e37u);
    wr32((c.sbase[3] + (uint32_t)(0x8A978u)), c.r[0]);
    // 094e3c  push 0x3f
    X86_AT(c, 0x94e3cu);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 094e3e  call 0x94658
    X86_AT(c, 0x94e3eu);
    push32(c, 0x94e43u); x86_call_known(c, 0x94658u, f_00094658); X86_RET(c, 0x94e43u);
    X86_TICK(c, 20);
    // 094e43  mov eax, dword ptr [0x8a974]
    X86_AT(c, 0x94e43u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A974u)));
    // 094e48  leave 
    X86_AT(c, 0x94e48u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094e49  ret 0xc
    X86_AT(c, 0x94e49u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x94e20u, "ran off the end of a function");
}
void f_00094e4c(X86Cpu& c) {
    X86_TICK(c, 22);
    // 094e4c  push ebp
    X86_AT(c, 0x94e4cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094e4d  mov ebp, esp
    X86_AT(c, 0x94e4du);
    c.r[5] = c.r[4];
    // 094e4f  push edi
    X86_AT(c, 0x94e4fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094e50  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x94e50u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 094e53  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x94e53u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 094e56  call 0x946cc
    X86_AT(c, 0x94e56u);
    push32(c, 0x94e5bu); x86_call_known(c, 0x946ccu, f_000946cc); X86_RET(c, 0x94e5bu);
    X86_TICK(c, 19);
    // 094e5b  mov dword ptr [0x8a97c], edi
    X86_AT(c, 0x94e5bu);
    wr32((c.sbase[3] + (uint32_t)(0x8A97Cu)), c.r[7]);
    // 094e61  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x94e61u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094e65  mov dword ptr [0x8a978], eax
    X86_AT(c, 0x94e65u);
    wr32((c.sbase[3] + (uint32_t)(0x8A978u)), c.r[0]);
    // 094e6a  push 0x40
    X86_AT(c, 0x94e6au);
    { uint32_t v = 0x40u; push32(c, v); }
    // 094e6c  call 0x94658
    X86_AT(c, 0x94e6cu);
    push32(c, 0x94e71u); x86_call_known(c, 0x94658u, f_00094658); X86_RET(c, 0x94e71u);
    X86_TICK(c, 11);
    // 094e71  cmp edi, dword ptr [0x8a974]
    X86_AT(c, 0x94e71u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0x8A974u))), 0, 4);
    // 094e77  jbe 0x94e8c
    X86_AT(c, 0x94e77u);
    if (x86_cc(c, 6)) { goto L_94e8c; }
    X86_TICK(c, 12);
    // 094e79  cmp word ptr [0x8a96e], 0
    X86_AT(c, 0x94e79u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A96Eu))), 0x0u, 0, 2);
    // 094e81  jne 0x94e8c
    X86_AT(c, 0x94e81u);
    if (x86_cc(c, 5)) { goto L_94e8c; }
    X86_TICK(c, 2);
    // 094e83  mov word ptr [0x8a96e], 0x15
    X86_AT(c, 0x94e83u);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), 0x15u);
L_94e8c:
    X86_TICK(c, 24);
    // 094e8c  mov eax, dword ptr [0x8a974]
    X86_AT(c, 0x94e8cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A974u)));
    // 094e91  pop edi
    X86_AT(c, 0x94e91u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094e92  leave 
    X86_AT(c, 0x94e92u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094e93  ret 0xc
    X86_AT(c, 0x94e93u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x94e4cu, "ran off the end of a function");
}
void f_00094eb0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 094eb0  push ebp
    X86_AT(c, 0x94eb0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094eb1  mov ebp, esp
    X86_AT(c, 0x94eb1u);
    c.r[5] = c.r[4];
    // 094eb3  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x94eb3u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094eb7  mov dword ptr [0x8a978], eax
    X86_AT(c, 0x94eb7u);
    wr32((c.sbase[3] + (uint32_t)(0x8A978u)), c.r[0]);
    // 094ebc  mov byte ptr [0x8a974], 0
    X86_AT(c, 0x94ebcu);
    wr8((c.sbase[3] + (uint32_t)(0x8A974u)), 0x0u);
    // 094ec3  push 0x44
    X86_AT(c, 0x94ec3u);
    { uint32_t v = 0x44u; push32(c, v); }
    // 094ec5  call 0x94658
    X86_AT(c, 0x94ec5u);
    push32(c, 0x94ecau); x86_call_known(c, 0x94658u, f_00094658); X86_RET(c, 0x94ecau);
    X86_TICK(c, 12);
    // 094eca  test byte ptr [0x8a980], 0x80
    X86_AT(c, 0x94ecau);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A980u))) & 0x80u, 1);
    // 094ed1  jne 0x94ed7
    X86_AT(c, 0x94ed1u);
    if (x86_cc(c, 5)) { goto L_94ed7; }
    X86_TICK(c, 9);
    // 094ed3  sub eax, eax
    X86_AT(c, 0x94ed3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094ed5  jmp 0x94ef3
    X86_AT(c, 0x94ed5u);
    goto L_94ef3;
L_94ed7:
    X86_TICK(c, 12);
    // 094ed7  test byte ptr [0x8a980], 2
    X86_AT(c, 0x94ed7u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A980u))) & 0x2u, 1);
    // 094ede  je 0x94ee4
    X86_AT(c, 0x94edeu);
    if (x86_cc(c, 4)) { goto L_94ee4; }
    X86_TICK(c, 9);
    // 094ee0  mov al, 2
    X86_AT(c, 0x94ee0u);
    s8(c, 0, 0x2u);
    // 094ee2  jmp 0x94ef3
    X86_AT(c, 0x94ee2u);
    goto L_94ef3;
L_94ee4:
    X86_TICK(c, 12);
    // 094ee4  test byte ptr [0x8a980], 1
    X86_AT(c, 0x94ee4u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A980u))) & 0x1u, 1);
    // 094eeb  je 0x94ef1
    X86_AT(c, 0x94eebu);
    if (x86_cc(c, 4)) { goto L_94ef1; }
    X86_TICK(c, 9);
    // 094eed  mov al, 1
    X86_AT(c, 0x94eedu);
    s8(c, 0, 0x1u);
    // 094eef  jmp 0x94ef3
    X86_AT(c, 0x94eefu);
    goto L_94ef3;
L_94ef1:
    X86_TICK(c, 2);
    // 094ef1  mov al, 4
    X86_AT(c, 0x94ef1u);
    s8(c, 0, 0x4u);
L_94ef3:
    X86_TICK(c, 16);
    // 094ef3  leave 
    X86_AT(c, 0x94ef3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094ef4  ret 4
    X86_AT(c, 0x94ef4u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x94eb0u, "ran off the end of a function");
}
void f_00094ef8(X86Cpu& c) {
    X86_TICK(c, 45);
    // 094ef8  enter 4, 0
    X86_AT(c, 0x94ef8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 094efc  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x94efcu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094f00  mov dword ptr [0x8a978], eax
    X86_AT(c, 0x94f00u);
    wr32((c.sbase[3] + (uint32_t)(0x8A978u)), c.r[0]);
    // 094f05  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0x94f05u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 094f08  mov byte ptr [0x8a974], al
    X86_AT(c, 0x94f08u);
    wr8((c.sbase[3] + (uint32_t)(0x8A974u)), g8(c, 0));
    // 094f0d  movzx eax, word ptr [ebp + 0xe]
    X86_AT(c, 0x94f0du);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xEu)));
    // 094f11  mov dword ptr [0x8a97c], eax
    X86_AT(c, 0x94f11u);
    wr32((c.sbase[3] + (uint32_t)(0x8A97Cu)), c.r[0]);
    // 094f16  movzx eax, word ptr [ebp + 0xc]
    X86_AT(c, 0x94f16u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 094f1a  mov dword ptr [0x8a980], eax
    X86_AT(c, 0x94f1au);
    wr32((c.sbase[3] + (uint32_t)(0x8A980u)), c.r[0]);
    // 094f1f  push 0x42
    X86_AT(c, 0x94f1fu);
    { uint32_t v = 0x42u; push32(c, v); }
    // 094f21  call 0x94658
    X86_AT(c, 0x94f21u);
    push32(c, 0x94f26u); x86_call_known(c, 0x94658u, f_00094658); X86_RET(c, 0x94f26u);
    X86_TICK(c, 32);
    // 094f26  mov ax, word ptr [0x8a980]
    X86_AT(c, 0x94f26u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A980u))));
    // 094f2c  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x94f2cu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 094f30  mov ax, word ptr [0x8a974]
    X86_AT(c, 0x94f30u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A974u))));
    // 094f36  mov word ptr [ebp - 4], ax
    X86_AT(c, 0x94f36u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 094f3a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94f3au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094f3d  leave 
    X86_AT(c, 0x94f3du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094f3e  ret 0xc
    X86_AT(c, 0x94f3eu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x94ef8u, "ran off the end of a function");
}
void f_00094f44(X86Cpu& c) {
    X86_TICK(c, 40);
    // 094f44  push ebp
    X86_AT(c, 0x94f44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094f45  mov ebp, esp
    X86_AT(c, 0x94f45u);
    c.r[5] = c.r[4];
    // 094f47  push esi
    X86_AT(c, 0x94f47u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094f48  push edi
    X86_AT(c, 0x94f48u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094f49  push ebx
    X86_AT(c, 0x94f49u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094f4a  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x94f4au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 094f4d  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x94f4du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 094f50  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x94f50u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 094f54  sub eax, eax
    X86_AT(c, 0x94f54u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 094f56  cld 
    X86_AT(c, 0x94f56u);
    c.fl &= ~X86_DF;
    // 094f57  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0x94f57u);
    x86_string(c, 1, 1, 243, 4, 3);
    // 094f59  jb 0x94f60
    X86_AT(c, 0x94f59u);
    if (x86_cc(c, 2)) { goto L_94f60; }
    X86_TICK(c, 5);
    // 094f5b  je 0x94f61
    X86_AT(c, 0x94f5bu);
    if (x86_cc(c, 4)) { goto L_94f61; }
    X86_TICK(c, 9);
    // 094f5d  inc eax
    X86_AT(c, 0x94f5du);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 094f5e  jmp 0x94f61
    X86_AT(c, 0x94f5eu);
    goto L_94f61;
L_94f60:
    X86_TICK(c, 2);
    // 094f60  dec eax
    X86_AT(c, 0x94f60u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_94f61:
    X86_TICK(c, 26);
    // 094f61  pop ebx
    X86_AT(c, 0x94f61u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 094f62  pop edi
    X86_AT(c, 0x94f62u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094f63  pop esi
    X86_AT(c, 0x94f63u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094f64  pop ebp
    X86_AT(c, 0x94f64u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 094f65  ret 0xc
    X86_AT(c, 0x94f65u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x94f44u, "ran off the end of a function");
}
void f_00094f84(X86Cpu& c) {
    X86_TICK(c, 48);
    // 094f84  push ebp
    X86_AT(c, 0x94f84u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 094f85  mov ebp, esp
    X86_AT(c, 0x94f85u);
    c.r[5] = c.r[4];
    // 094f87  push ecx
    X86_AT(c, 0x94f87u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094f88  sub esp, 0x28
    X86_AT(c, 0x94f88u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x28u, 0, 4); }
    // 094f8b  push ebx
    X86_AT(c, 0x94f8bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 094f8c  push esi
    X86_AT(c, 0x94f8cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094f8d  push edi
    X86_AT(c, 0x94f8du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094f8e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94f8eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094f91  movzx edx, byte ptr [eax - 0x21]
    X86_AT(c, 0x94f91u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFDFu)));
    // 094f95  mov ecx, dword ptr [eax + 0x20]
    X86_AT(c, 0x94f95u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)));
    // 094f98  sub ecx, edx
    X86_AT(c, 0x94f98u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 094f9a  mov dword ptr [ebp - 0x20], ecx
    X86_AT(c, 0x94f9au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[1]);
    // 094f9d  push dword ptr [ebp - 0x20]
    X86_AT(c, 0x94f9du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))); push32(c, v); }
    // 094fa0  lea ecx, [ebp - 0x10]
    X86_AT(c, 0x94fa0u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 094fa3  push ecx
    X86_AT(c, 0x94fa3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 094fa4  call 0x95d9c
    X86_AT(c, 0x94fa4u);
    push32(c, 0x94fa9u); x86_call_known(c, 0x95d9cu, f_00095d9c); X86_RET(c, 0x94fa9u);
    X86_TICK(c, 15);
    // 094fa9  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94fa9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094fac  lea edx, [eax + 0xc]
    X86_AT(c, 0x94facu);
    c.r[2] = (uint32_t)(c.r[0] + 0xCu);
    // 094faf  push edx
    X86_AT(c, 0x94fafu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 094fb0  call 0x960c0
    X86_AT(c, 0x94fb0u);
    push32(c, 0x94fb5u); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x94fb5u);
    X86_TICK(c, 11);
    // 094fb5  lea eax, [ebp - 0x10]
    X86_AT(c, 0x94fb5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 094fb8  push eax
    X86_AT(c, 0x94fb8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094fb9  call 0x960c0
    X86_AT(c, 0x94fb9u);
    push32(c, 0x94fbeu); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x94fbeu);
    X86_TICK(c, 7);
    // 094fbe  call 0x96230
    X86_AT(c, 0x94fbeu);
    push32(c, 0x94fc3u); x86_call_known(c, 0x96230u, f_00096230); X86_RET(c, 0x94fc3u);
    X86_TICK(c, 11);
    // 094fc3  lea eax, [ebp - 0x10]
    X86_AT(c, 0x94fc3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 094fc6  push eax
    X86_AT(c, 0x94fc6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094fc7  call 0x96120
    X86_AT(c, 0x94fc7u);
    push32(c, 0x94fccu); x86_call_known(c, 0x96120u, f_00096120); X86_RET(c, 0x94fccu);
    X86_TICK(c, 15);
    // 094fcc  lea eax, [ebp - 0x10]
    X86_AT(c, 0x94fccu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 094fcf  push eax
    X86_AT(c, 0x94fcfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094fd0  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x94fd0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 094fd3  push eax
    X86_AT(c, 0x94fd3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 094fd4  call 0x95f00
    X86_AT(c, 0x94fd4u);
    push32(c, 0x94fd9u); x86_call_known(c, 0x95f00u, f_00095f00); X86_RET(c, 0x94fd9u);
    X86_TICK(c, 47);
    // 094fd9  push esi
    X86_AT(c, 0x94fd9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 094fda  lea esi, [ebp - 0x2c]
    X86_AT(c, 0x94fdau);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 094fdd  push edi
    X86_AT(c, 0x94fddu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 094fde  lea edi, [ebp - 0x1a]
    X86_AT(c, 0x94fdeu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFE6u);
    // 094fe1  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x94fe1u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 094fe2  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x94fe2u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 094fe3  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x94fe3u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 094fe5  pop edi
    X86_AT(c, 0x94fe5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 094fe6  pop esi
    X86_AT(c, 0x94fe6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 094fe7  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94fe7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 094fea  mov dword ptr [eax - 0x20], 0x13
    X86_AT(c, 0x94feau);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)), 0x13u);
    // 094ff1  mov edi, 1
    X86_AT(c, 0x94ff1u);
    c.r[7] = 0x1u;
    // 094ff6  mov esi, edi
    X86_AT(c, 0x94ff6u);
    c.r[6] = c.r[7];
L_94ff8:
    X86_TICK(c, 14);
    // 094ff8  mov bl, byte ptr [ebp + edi*1 - 0x1b]
    X86_AT(c, 0x94ff8u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] + 0xFFFFFFE5u))));
    // 094ffc  mov eax, esi
    X86_AT(c, 0x94ffcu);
    c.r[0] = c.r[6];
    // 094ffe  rcr eax, 1
    X86_AT(c, 0x94ffeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 095000  jae 0x9500a
    X86_AT(c, 0x95000u);
    if (x86_cc(c, 3)) { goto L_9500a; }
    X86_TICK(c, 13);
    // 095002  sub bh, bh
    X86_AT(c, 0x95002u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, g8(c, 7), 0, 1)); }
    // 095004  mov eax, ebx
    X86_AT(c, 0x95004u);
    c.r[0] = c.r[3];
    // 095006  and al, 0xf
    X86_AT(c, 0x95006u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 095008  jmp 0x9500f
    X86_AT(c, 0x95008u);
    goto L_9500f;
L_9500a:
    X86_TICK(c, 5);
    // 09500a  mov eax, ebx
    X86_AT(c, 0x9500au);
    c.r[0] = c.r[3];
    // 09500c  shr al, 4
    X86_AT(c, 0x9500cu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
L_9500f:
    X86_TICK(c, 34);
    // 09500f  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0x9500fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
    // 095012  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95012u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095015  dec dword ptr [eax - 0x20]
    X86_AT(c, 0x95015u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 095018  mov dl, byte ptr [ebp - 0x21]
    X86_AT(c, 0x95018u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu))));
    // 09501b  add dl, 0x30
    X86_AT(c, 0x9501bu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x30u, 0, 1)); }
    // 09501e  mov ecx, dword ptr [eax - 0x20]
    X86_AT(c, 0x9501eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)));
    // 095021  mov byte ptr [eax + ecx*1 - 0x1c], dl
    X86_AT(c, 0x95021u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0xFFFFFFE4u)), g8(c, 2));
    // 095025  mov eax, esi
    X86_AT(c, 0x95025u);
    c.r[0] = c.r[6];
    // 095027  rcr eax, 1
    X86_AT(c, 0x95027u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 095029  jb 0x9502c
    X86_AT(c, 0x95029u);
    if (x86_cc(c, 2)) { goto L_9502c; }
    X86_TICK(c, 2);
    // 09502b  inc edi
    X86_AT(c, 0x9502bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_9502c:
    X86_TICK(c, 7);
    // 09502c  cmp esi, 0x12
    X86_AT(c, 0x9502cu);
    (void)x86_sub(c, c.r[6], 0x12u, 0, 4);
    // 09502f  jge 0x9503a
    X86_AT(c, 0x9502fu);
    if (x86_cc(c, 13)) { goto L_9503a; }
    X86_TICK(c, 9);
    // 095031  inc esi
    X86_AT(c, 0x95031u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 095032  jmp 0x94ff8
    X86_AT(c, 0x95032u);
    X86_POLL(c, 0x94ff8u); goto L_94ff8;
L_95034:
    X86_TICK(c, 10);
    // 095034  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95034u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095037  inc dword ptr [eax - 0x20]
    X86_AT(c, 0x95037u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_9503a:
    X86_TICK(c, 20);
    // 09503a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x9503au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09503d  mov edx, dword ptr [eax - 0x20]
    X86_AT(c, 0x9503du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)));
    // 095040  cmp byte ptr [eax + edx*1 - 0x1c], 0x30
    X86_AT(c, 0x95040u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFE4u))), 0x30u, 0, 1);
    // 095045  je 0x95034
    X86_AT(c, 0x95045u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x95034u); goto L_95034; }
    X86_TICK(c, 17);
    // 095047  mov ecx, 0x12
    X86_AT(c, 0x95047u);
    c.r[1] = 0x12u;
    // 09504c  sub ecx, dword ptr [ebp - 0x20]
    X86_AT(c, 0x9504cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0, 4); }
    // 09504f  inc ecx
    X86_AT(c, 0x9504fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 095050  cmp edx, ecx
    X86_AT(c, 0x95050u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 095052  jge 0x95057
    X86_AT(c, 0x95052u);
    if (x86_cc(c, 13)) { goto L_95057; }
    X86_TICK(c, 6);
    // 095054  inc dword ptr [eax - 4]
    X86_AT(c, 0x95054u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_95057:
    X86_TICK(c, 28);
    // 095057  pop edi
    X86_AT(c, 0x95057u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095058  pop esi
    X86_AT(c, 0x95058u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095059  pop ebx
    X86_AT(c, 0x95059u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09505a  leave 
    X86_AT(c, 0x9505au);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09505b  ret 
    X86_AT(c, 0x9505bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x94f84u, "ran off the end of a function");
}
void f_00095064(X86Cpu& c) {
    X86_TICK(c, 33);
    // 095064  push ebp
    X86_AT(c, 0x95064u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095065  mov ebp, esp
    X86_AT(c, 0x95065u);
    c.r[5] = c.r[4];
    // 095067  push ecx
    X86_AT(c, 0x95067u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095068  sub esp, 0xc
    X86_AT(c, 0x95068u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 09506b  push ebx
    X86_AT(c, 0x9506bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09506c  push esi
    X86_AT(c, 0x9506cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09506d  push edi
    X86_AT(c, 0x9506du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09506e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x9506eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095071  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95071u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095074  cmp edi, dword ptr [eax + 0x20]
    X86_AT(c, 0x95074u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u))), 0, 4);
    // 095077  jge 0x9511d
    X86_AT(c, 0x95077u);
    if (x86_cc(c, 13)) { goto L_9511d; }
    X86_TICK(c, 17);
    // 09507d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x9507du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095080  add eax, 0xc
    X86_AT(c, 0x95080u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xCu, 0, 4); }
    // 095083  push eax
    X86_AT(c, 0x95083u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095084  mov ebx, eax
    X86_AT(c, 0x95084u);
    c.r[3] = c.r[0];
    // 095086  call 0x960c0
    X86_AT(c, 0x95086u);
    push32(c, 0x9508bu); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x9508bu);
    X86_TICK(c, 12);
    // 09508b  push dword ptr [0x1a64]
    X86_AT(c, 0x9508bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 095091  call 0x96048
    X86_AT(c, 0x95091u);
    push32(c, 0x95096u); x86_call_known(c, 0x96048u, f_00096048); X86_RET(c, 0x95096u);
    X86_TICK(c, 7);
    // 095096  call 0x96564
    X86_AT(c, 0x95096u);
    push32(c, 0x9509bu); x86_call_known(c, 0x96564u, f_00096564); X86_RET(c, 0x9509bu);
    X86_TICK(c, 5);
    // 09509b  je 0x9511d
    X86_AT(c, 0x9509bu);
    if (x86_cc(c, 4)) { goto L_9511d; }
    X86_TICK(c, 15);
    // 0950a1  mov eax, edi
    X86_AT(c, 0x950a1u);
    c.r[0] = c.r[7];
    // 0950a3  push eax
    X86_AT(c, 0x950a3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0950a4  lea ebx, [ebp - 0x10]
    X86_AT(c, 0x950a4u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0950a7  push ebx
    X86_AT(c, 0x950a7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0950a8  call 0x95d9c
    X86_AT(c, 0x950a8u);
    push32(c, 0x950adu); x86_call_known(c, 0x95d9cu, f_00095d9c); X86_RET(c, 0x950adu);
    X86_TICK(c, 9);
    // 0950ad  push ebx
    X86_AT(c, 0x950adu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0950ae  call 0x960c0
    X86_AT(c, 0x950aeu);
    push32(c, 0x950b3u); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x950b3u);
    X86_TICK(c, 12);
    // 0950b3  push dword ptr [0x1a68]
    X86_AT(c, 0x950b3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A68u))); push32(c, v); }
    // 0950b9  call 0x96048
    X86_AT(c, 0x950b9u);
    push32(c, 0x950beu); x86_call_known(c, 0x96048u, f_00096048); X86_RET(c, 0x950beu);
    X86_TICK(c, 7);
    // 0950be  call 0x96354
    X86_AT(c, 0x950beu);
    push32(c, 0x950c3u); x86_call_known(c, 0x96354u, f_00096354); X86_RET(c, 0x950c3u);
    X86_TICK(c, 19);
    // 0950c3  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x950c3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0950c6  lea edx, [eax + 0xc]
    X86_AT(c, 0x950c6u);
    c.r[2] = (uint32_t)(c.r[0] + 0xCu);
    // 0950c9  push edx
    X86_AT(c, 0x950c9u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0950ca  mov ebx, eax
    X86_AT(c, 0x950cau);
    c.r[3] = c.r[0];
    // 0950cc  mov esi, edx
    X86_AT(c, 0x950ccu);
    c.r[6] = c.r[2];
    // 0950ce  call 0x960c0
    X86_AT(c, 0x950ceu);
    push32(c, 0x950d3u); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x950d3u);
    X86_TICK(c, 7);
    // 0950d3  call 0x95f30
    X86_AT(c, 0x950d3u);
    push32(c, 0x950d8u); x86_call_known(c, 0x95f30u, f_00095f30); X86_RET(c, 0x950d8u);
    X86_TICK(c, 9);
    // 0950d8  push esi
    X86_AT(c, 0x950d8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0950d9  call 0x96120
    X86_AT(c, 0x950d9u);
    push32(c, 0x950deu); x86_call_known(c, 0x96120u, f_00096120); X86_RET(c, 0x950deu);
    X86_TICK(c, 9);
    // 0950de  push esi
    X86_AT(c, 0x950deu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0950df  call 0x960c0
    X86_AT(c, 0x950dfu);
    push32(c, 0x950e4u); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x950e4u);
    X86_TICK(c, 12);
    // 0950e4  push dword ptr [0x1a6c]
    X86_AT(c, 0x950e4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A6Cu))); push32(c, v); }
    // 0950ea  call 0x96048
    X86_AT(c, 0x950eau);
    push32(c, 0x950efu); x86_call_known(c, 0x96048u, f_00096048); X86_RET(c, 0x950efu);
    X86_TICK(c, 7);
    // 0950ef  call 0x96564
    X86_AT(c, 0x950efu);
    push32(c, 0x950f4u); x86_call_known(c, 0x96564u, f_00096564); X86_RET(c, 0x950f4u);
    X86_TICK(c, 13);
    // 0950f4  setae al
    X86_AT(c, 0x950f4u);
    s8(c, 0, x86_cc(c, 3) ? 1u : 0u);
    // 0950f7  mov byte ptr [ebx - 0x21], al
    X86_AT(c, 0x950f7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFDFu)), g8(c, 0));
    // 0950fa  and al, al
    X86_AT(c, 0x950fau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0950fc  je 0x9511d
    X86_AT(c, 0x950fcu);
    if (x86_cc(c, 4)) { goto L_9511d; }
    X86_TICK(c, 9);
    // 0950fe  push esi
    X86_AT(c, 0x950feu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0950ff  call 0x960c0
    X86_AT(c, 0x950ffu);
    push32(c, 0x95104u); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x95104u);
    X86_TICK(c, 11);
    // 095104  mov eax, 0x1a70
    X86_AT(c, 0x95104u);
    c.r[0] = 0x1A70u;
    // 095109  push eax
    X86_AT(c, 0x95109u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09510a  call 0x960c0
    X86_AT(c, 0x9510au);
    push32(c, 0x9510fu); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x9510fu);
    X86_TICK(c, 7);
    // 09510f  call 0x96230
    X86_AT(c, 0x9510fu);
    push32(c, 0x95114u); x86_call_known(c, 0x96230u, f_00096230); X86_RET(c, 0x95114u);
    X86_TICK(c, 9);
    // 095114  push esi
    X86_AT(c, 0x95114u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095115  call 0x96120
    X86_AT(c, 0x95115u);
    push32(c, 0x9511au); x86_call_known(c, 0x96120u, f_00096120); X86_RET(c, 0x9511au);
    X86_TICK(c, 6);
    // 09511a  inc dword ptr [ebx - 4]
    X86_AT(c, 0x9511au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_9511d:
    X86_TICK(c, 28);
    // 09511d  pop edi
    X86_AT(c, 0x9511du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09511e  pop esi
    X86_AT(c, 0x9511eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09511f  pop ebx
    X86_AT(c, 0x9511fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095120  leave 
    X86_AT(c, 0x95120u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095121  ret 4
    X86_AT(c, 0x95121u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x95064u, "ran off the end of a function");
}
void f_00095134(X86Cpu& c) {
    X86_TICK(c, 35);
    // 095134  enter 0x38, 0
    X86_AT(c, 0x95134u);
    x86_enter(c, 0x38u, 0x0u, 4);
    // 095138  push ebx
    X86_AT(c, 0x95138u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095139  push esi
    X86_AT(c, 0x95139u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09513a  push edi
    X86_AT(c, 0x9513au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09513b  mov edi, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x9513bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 09513e  mov esi, dword ptr [ebp + 0x24]
    X86_AT(c, 0x9513eu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 095141  lea eax, [ebp + 0xc]
    X86_AT(c, 0x95141u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 095144  push eax
    X86_AT(c, 0x95144u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095145  lea eax, [ebp - 0x38]
    X86_AT(c, 0x95145u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC8u);
    // 095148  push eax
    X86_AT(c, 0x95148u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095149  call 0x95e1c
    X86_AT(c, 0x95149u);
    push32(c, 0x9514eu); x86_call_known(c, 0x95e1cu, f_00095e1c); X86_RET(c, 0x9514eu);
    X86_TICK(c, 39);
    // 09514e  lea eax, [ebp - 0x38]
    X86_AT(c, 0x9514eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC8u);
    // 095151  push esi
    X86_AT(c, 0x95151u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095152  push edi
    X86_AT(c, 0x95152u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095153  mov edi, esi
    X86_AT(c, 0x95153u);
    c.r[7] = c.r[6];
    // 095155  mov esi, eax
    X86_AT(c, 0x95155u);
    c.r[6] = c.r[0];
    // 095157  mov ecx, 3
    X86_AT(c, 0x95157u);
    c.r[1] = 0x3u;
    // 09515c  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x9515cu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 09515e  pop edi
    X86_AT(c, 0x9515eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09515f  pop esi
    X86_AT(c, 0x9515fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095160  cmp word ptr [esi], 0
    X86_AT(c, 0x95160u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[6]))), 0x0u, 0, 2);
    // 095164  jne 0x95320
    X86_AT(c, 0x95164u);
    if (x86_cc(c, 5)) { goto L_95320; }
    X86_TICK(c, 11);
    // 09516a  lea eax, [ebp + 0xc]
    X86_AT(c, 0x9516au);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 09516d  push eax
    X86_AT(c, 0x9516du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09516e  call 0x95edc
    X86_AT(c, 0x9516eu);
    push32(c, 0x95173u); x86_call_known(c, 0x95edcu, f_00095edc); X86_RET(c, 0x95173u);
    X86_TICK(c, 12);
    // 095173  movsx eax, ax
    X86_AT(c, 0x95173u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 095176  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x95176u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 095179  and eax, eax
    X86_AT(c, 0x95179u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 09517b  jl 0x9520c
    X86_AT(c, 0x9517bu);
    if (x86_cc(c, 12)) { goto L_9520c; }
    X86_TICK(c, 77);
    // 095181  imul eax, eax, 0x12a
    X86_AT(c, 0x95181u);
    c.r[0] = x86_imul2(c, c.r[0], 0x12Au, 4);
    // 095187  cdq 
    X86_AT(c, 0x95187u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 095188  mov ecx, 0x3de
    X86_AT(c, 0x95188u);
    c.r[1] = 0x3DEu;
    // 09518d  idiv ecx
    X86_AT(c, 0x9518du);
    x86_idiv(c, c.r[1], 4, 0x9518du);
    // 09518f  inc eax
    X86_AT(c, 0x9518fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 095190  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x95190u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 095193  and eax, eax
    X86_AT(c, 0x95193u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095195  je 0x951c3
    X86_AT(c, 0x95195u);
    if (x86_cc(c, 4)) { goto L_951c3; }
    X86_TICK(c, 16);
    // 095197  push dword ptr [ebp - 4]
    X86_AT(c, 0x95197u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 09519a  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x9519au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 09519d  push eax
    X86_AT(c, 0x9519du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09519e  call 0x95d9c
    X86_AT(c, 0x9519eu);
    push32(c, 0x951a3u); x86_call_known(c, 0x95d9cu, f_00095d9c); X86_RET(c, 0x951a3u);
    X86_TICK(c, 11);
    // 0951a3  lea eax, [ebp + 0xc]
    X86_AT(c, 0x951a3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0951a6  push eax
    X86_AT(c, 0x951a6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0951a7  call 0x960c0
    X86_AT(c, 0x951a7u);
    push32(c, 0x951acu); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x951acu);
    X86_TICK(c, 11);
    // 0951ac  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x951acu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0951af  push eax
    X86_AT(c, 0x951afu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0951b0  call 0x960c0
    X86_AT(c, 0x951b0u);
    push32(c, 0x951b5u); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x951b5u);
    X86_TICK(c, 7);
    // 0951b5  call 0x96360
    X86_AT(c, 0x951b5u);
    push32(c, 0x951bau); x86_call_known(c, 0x96360u, f_00096360); X86_RET(c, 0x951bau);
    X86_TICK(c, 11);
    // 0951ba  lea eax, [ebp + 0xc]
    X86_AT(c, 0x951bau);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0951bd  push eax
    X86_AT(c, 0x951bdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0951be  call 0x96120
    X86_AT(c, 0x951beu);
    push32(c, 0x951c3u); x86_call_known(c, 0x96120u, f_00096120); X86_RET(c, 0x951c3u);
L_951c3:
    X86_TICK(c, 11);
    // 0951c3  lea eax, [ebp + 0xc]
    X86_AT(c, 0x951c3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0951c6  push eax
    X86_AT(c, 0x951c6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0951c7  call 0x960c0
    X86_AT(c, 0x951c7u);
    push32(c, 0x951ccu); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x951ccu);
    X86_TICK(c, 12);
    // 0951cc  push dword ptr [0x1a6c]
    X86_AT(c, 0x951ccu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A6Cu))); push32(c, v); }
    // 0951d2  call 0x96048
    X86_AT(c, 0x951d2u);
    push32(c, 0x951d7u); x86_call_known(c, 0x96048u, f_00096048); X86_RET(c, 0x951d7u);
    X86_TICK(c, 7);
    // 0951d7  call 0x96564
    X86_AT(c, 0x951d7u);
    push32(c, 0x951dcu); x86_call_known(c, 0x96564u, f_00096564); X86_RET(c, 0x951dcu);
    X86_TICK(c, 5);
    // 0951dc  jb 0x95297
    X86_AT(c, 0x951dcu);
    if (x86_cc(c, 2)) { goto L_95297; }
    X86_TICK(c, 11);
    // 0951e2  lea eax, [ebp + 0xc]
    X86_AT(c, 0x951e2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0951e5  push eax
    X86_AT(c, 0x951e5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0951e6  call 0x960c0
    X86_AT(c, 0x951e6u);
    push32(c, 0x951ebu); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x951ebu);
    X86_TICK(c, 11);
    // 0951eb  mov eax, 0x1a70
    X86_AT(c, 0x951ebu);
    c.r[0] = 0x1A70u;
    // 0951f0  push eax
    X86_AT(c, 0x951f0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0951f1  call 0x960c0
    X86_AT(c, 0x951f1u);
    push32(c, 0x951f6u); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x951f6u);
    X86_TICK(c, 7);
    // 0951f6  call 0x96230
    X86_AT(c, 0x951f6u);
    push32(c, 0x951fbu); x86_call_known(c, 0x96230u, f_00096230); X86_RET(c, 0x951fbu);
    X86_TICK(c, 11);
    // 0951fb  lea eax, [ebp + 0xc]
    X86_AT(c, 0x951fbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0951fe  push eax
    X86_AT(c, 0x951feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0951ff  call 0x96120
    X86_AT(c, 0x951ffu);
    push32(c, 0x95204u); x86_call_known(c, 0x96120u, f_00096120); X86_RET(c, 0x95204u);
    X86_TICK(c, 13);
    // 095204  inc dword ptr [ebp - 4]
    X86_AT(c, 0x95204u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 095207  jmp 0x95297
    X86_AT(c, 0x95207u);
    goto L_95297;
L_9520c:
    X86_TICK(c, 77);
    // 09520c  imul eax, dword ptr [ebp - 4], 0x12a
    X86_AT(c, 0x9520cu);
    c.r[0] = x86_imul2(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x12Au, 4);
    // 095213  add eax, 0x12a
    X86_AT(c, 0x95213u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x12Au, 0, 4); }
    // 095218  cdq 
    X86_AT(c, 0x95218u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 095219  mov ecx, 0x3de
    X86_AT(c, 0x95219u);
    c.r[1] = 0x3DEu;
    // 09521e  idiv ecx
    X86_AT(c, 0x9521eu);
    x86_idiv(c, c.r[1], 4, 0x9521eu);
    // 095220  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x95220u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 095223  and eax, eax
    X86_AT(c, 0x95223u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095225  je 0x95257
    X86_AT(c, 0x95225u);
    if (x86_cc(c, 4)) { goto L_95257; }
    X86_TICK(c, 19);
    // 095227  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x95227u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 09522b  neg eax
    X86_AT(c, 0x9522bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 09522d  push eax
    X86_AT(c, 0x9522du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09522e  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x9522eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 095231  push eax
    X86_AT(c, 0x95231u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095232  call 0x95d9c
    X86_AT(c, 0x95232u);
    push32(c, 0x95237u); x86_call_known(c, 0x95d9cu, f_00095d9c); X86_RET(c, 0x95237u);
    X86_TICK(c, 11);
    // 095237  lea eax, [ebp - 0x2c]
    X86_AT(c, 0x95237u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 09523a  push eax
    X86_AT(c, 0x9523au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09523b  call 0x960c0
    X86_AT(c, 0x9523bu);
    push32(c, 0x95240u); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x95240u);
    X86_TICK(c, 11);
    // 095240  lea eax, [ebp + 0xc]
    X86_AT(c, 0x95240u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 095243  push eax
    X86_AT(c, 0x95243u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095244  call 0x960c0
    X86_AT(c, 0x95244u);
    push32(c, 0x95249u); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x95249u);
    X86_TICK(c, 7);
    // 095249  call 0x96230
    X86_AT(c, 0x95249u);
    push32(c, 0x9524eu); x86_call_known(c, 0x96230u, f_00096230); X86_RET(c, 0x9524eu);
    X86_TICK(c, 11);
    // 09524e  lea eax, [ebp + 0xc]
    X86_AT(c, 0x9524eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 095251  push eax
    X86_AT(c, 0x95251u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095252  call 0x96120
    X86_AT(c, 0x95252u);
    push32(c, 0x95257u); x86_call_known(c, 0x96120u, f_00096120); X86_RET(c, 0x95257u);
L_95257:
    X86_TICK(c, 11);
    // 095257  lea eax, [ebp + 0xc]
    X86_AT(c, 0x95257u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 09525a  push eax
    X86_AT(c, 0x9525au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09525b  call 0x960c0
    X86_AT(c, 0x9525bu);
    push32(c, 0x95260u); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x95260u);
    X86_TICK(c, 11);
    // 095260  mov eax, 0x1a70
    X86_AT(c, 0x95260u);
    c.r[0] = 0x1A70u;
    // 095265  push eax
    X86_AT(c, 0x95265u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095266  call 0x960c0
    X86_AT(c, 0x95266u);
    push32(c, 0x9526bu); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x9526bu);
    X86_TICK(c, 7);
    // 09526b  call 0x96564
    X86_AT(c, 0x9526bu);
    push32(c, 0x95270u); x86_call_known(c, 0x96564u, f_00096564); X86_RET(c, 0x95270u);
    X86_TICK(c, 5);
    // 095270  jae 0x95297
    X86_AT(c, 0x95270u);
    if (x86_cc(c, 3)) { goto L_95297; }
    X86_TICK(c, 11);
    // 095272  lea eax, [ebp + 0xc]
    X86_AT(c, 0x95272u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 095275  push eax
    X86_AT(c, 0x95275u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095276  call 0x960c0
    X86_AT(c, 0x95276u);
    push32(c, 0x9527bu); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x9527bu);
    X86_TICK(c, 12);
    // 09527b  push dword ptr [0x1a7c]
    X86_AT(c, 0x9527bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A7Cu))); push32(c, v); }
    // 095281  call 0x96048
    X86_AT(c, 0x95281u);
    push32(c, 0x95286u); x86_call_known(c, 0x96048u, f_00096048); X86_RET(c, 0x95286u);
    X86_TICK(c, 7);
    // 095286  call 0x96230
    X86_AT(c, 0x95286u);
    push32(c, 0x9528bu); x86_call_known(c, 0x96230u, f_00096230); X86_RET(c, 0x9528bu);
    X86_TICK(c, 11);
    // 09528b  lea eax, [ebp + 0xc]
    X86_AT(c, 0x9528bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 09528e  push eax
    X86_AT(c, 0x9528eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09528f  call 0x96120
    X86_AT(c, 0x9528fu);
    push32(c, 0x95294u); x86_call_known(c, 0x96120u, f_00096120); X86_RET(c, 0x95294u);
    X86_TICK(c, 6);
    // 095294  dec dword ptr [ebp - 4]
    X86_AT(c, 0x95294u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_95297:
    X86_TICK(c, 15);
    // 095297  mov byte ptr [ebp - 0x21], 0
    X86_AT(c, 0x95297u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), 0x0u);
    // 09529b  movzx eax, byte ptr [ebp + 0x18]
    X86_AT(c, 0x9529bu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 09529f  cmp eax, 0x45
    X86_AT(c, 0x9529fu);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 0952a2  je 0x952c9
    X86_AT(c, 0x952a2u);
    if (x86_cc(c, 4)) { goto L_952c9; }
    X86_TICK(c, 7);
    // 0952a4  cmp eax, 0x47
    X86_AT(c, 0x952a4u);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 0952a7  je 0x952ce
    X86_AT(c, 0x952a7u);
    if (x86_cc(c, 4)) { goto L_952ce; }
    X86_TICK(c, 7);
    // 0952a9  cmp eax, 0x65
    X86_AT(c, 0x952a9u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 0952ac  je 0x952c9
    X86_AT(c, 0x952acu);
    if (x86_cc(c, 4)) { goto L_952c9; }
    X86_TICK(c, 7);
    // 0952ae  cmp eax, 0x66
    X86_AT(c, 0x952aeu);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 0952b1  je 0x952ba
    X86_AT(c, 0x952b1u);
    if (x86_cc(c, 4)) { goto L_952ba; }
    X86_TICK(c, 7);
    // 0952b3  cmp eax, 0x67
    X86_AT(c, 0x952b3u);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 0952b6  je 0x952ce
    X86_AT(c, 0x952b6u);
    if (x86_cc(c, 4)) { goto L_952ce; }
    X86_TICK(c, 7);
    // 0952b8  jmp 0x952df
    X86_AT(c, 0x952b8u);
    goto L_952df;
L_952ba:
    X86_TICK(c, 17);
    // 0952ba  mov eax, edi
    X86_AT(c, 0x952bau);
    c.r[0] = c.r[7];
    // 0952bc  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0x952bcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0952bf  sub edx, edx
    X86_AT(c, 0x952bfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0952c1  cmp eax, edx
    X86_AT(c, 0x952c1u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0952c3  jl 0x952c6
    X86_AT(c, 0x952c3u);
    if (x86_cc(c, 12)) { goto L_952c6; }
    X86_TICK(c, 3);
    // 0952c5  xchg edx, eax
    X86_AT(c, 0x952c5u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_952c6:
    X86_TICK(c, 9);
    // 0952c6  push edx
    X86_AT(c, 0x952c6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0952c7  jmp 0x952d8
    X86_AT(c, 0x952c7u);
    goto L_952d8;
L_952c9:
    X86_TICK(c, 9);
    // 0952c9  lea eax, [edi + 1]
    X86_AT(c, 0x952c9u);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0952cc  jmp 0x952d7
    X86_AT(c, 0x952ccu);
    goto L_952d7;
L_952ce:
    X86_TICK(c, 11);
    // 0952ce  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x952ceu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0952d1  cmp edi, eax
    X86_AT(c, 0x952d1u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0952d3  jl 0x952d7
    X86_AT(c, 0x952d3u);
    if (x86_cc(c, 12)) { goto L_952d7; }
    X86_TICK(c, 2);
    // 0952d5  mov eax, edi
    X86_AT(c, 0x952d5u);
    c.r[0] = c.r[7];
L_952d7:
    X86_TICK(c, 2);
    // 0952d7  push eax
    X86_AT(c, 0x952d7u);
    { uint32_t v = c.r[0]; push32(c, v); }
L_952d8:
    X86_TICK(c, 9);
    // 0952d8  mov ecx, ebp
    X86_AT(c, 0x952d8u);
    c.r[1] = c.r[5];
    // 0952da  call 0x95064
    X86_AT(c, 0x952dau);
    push32(c, 0x952dfu); x86_call_known(c, 0x95064u, f_00095064); X86_RET(c, 0x952dfu);
L_952df:
    X86_TICK(c, 9);
    // 0952df  mov ecx, ebp
    X86_AT(c, 0x952dfu);
    c.r[1] = c.r[5];
    // 0952e1  call 0x94f84
    X86_AT(c, 0x952e1u);
    push32(c, 0x952e6u); x86_call_known(c, 0x94f84u, f_00094f84); X86_RET(c, 0x952e6u);
    X86_TICK(c, 34);
    // 0952e6  mov eax, 0x30303030
    X86_AT(c, 0x952e6u);
    c.r[0] = 0x30303030u;
    // 0952eb  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x952ebu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0952ee  add edx, 4
    X86_AT(c, 0x952eeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x4u, 0, 4); }
    // 0952f1  push edi
    X86_AT(c, 0x952f1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0952f2  mov edi, edx
    X86_AT(c, 0x952f2u);
    c.r[7] = c.r[2];
    // 0952f4  mov ecx, 0x12
    X86_AT(c, 0x952f4u);
    c.r[1] = 0x12u;
    // 0952f9  stosb byte ptr es:[edi], al
    X86_AT(c, 0x952f9u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0952fb  pop edi
    X86_AT(c, 0x952fbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0952fc  sub ebx, ebx
    X86_AT(c, 0x952fcu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0952fe  jmp 0x95312
    X86_AT(c, 0x952feu);
    goto L_95312;
L_95300:
    X86_TICK(c, 22);
    // 095300  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0x95300u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 095303  mov dl, byte ptr [ebp + eax*1 - 0x1c]
    X86_AT(c, 0x95303u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFE4u))));
    // 095307  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x95307u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09530a  mov byte ptr [ecx + ebx*1 + 4], dl
    X86_AT(c, 0x9530au);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[3] + 0x4u)), g8(c, 2));
    // 09530e  inc dword ptr [ebp - 0x20]
    X86_AT(c, 0x9530eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 095311  inc ebx
    X86_AT(c, 0x95311u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_95312:
    X86_TICK(c, 12);
    // 095312  cmp dword ptr [ebp - 0x20], 0x12
    X86_AT(c, 0x95312u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0x12u, 0, 4);
    // 095316  jle 0x95300
    X86_AT(c, 0x95316u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0x95300u); goto L_95300; }
    X86_TICK(c, 10);
    // 095318  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95318u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09531b  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x9531bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09531e  mov dword ptr [edx], eax
    X86_AT(c, 0x9531eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_95320:
    X86_TICK(c, 28);
    // 095320  pop edi
    X86_AT(c, 0x95320u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095321  pop esi
    X86_AT(c, 0x95321u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 095322  pop ebx
    X86_AT(c, 0x95322u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095323  leave 
    X86_AT(c, 0x95323u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095324  ret 0x20
    X86_AT(c, 0x95324u);
    c.eip = pop32(c); c.r[4] += 0x20u; return;
    x86_fault(c, 0x95134u, "ran off the end of a function");
}
void f_0009533c(X86Cpu& c) {
    X86_TICK(c, 26);
    // 09533c  push ebp
    X86_AT(c, 0x9533cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09533d  mov ebp, esp
    X86_AT(c, 0x9533du);
    c.r[5] = c.r[4];
    // 09533f  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x9533fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 095342  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x95342u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 095345  push dword ptr [ebp + 8]
    X86_AT(c, 0x95345u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 095348  call 0x96084
    X86_AT(c, 0x95348u);
    push32(c, 0x9534du); x86_call_known(c, 0x96084u, f_00096084); X86_RET(c, 0x9534du);
    X86_TICK(c, 11);
    // 09534d  sub esp, 0xc
    X86_AT(c, 0x9534du);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 095350  push esp
    X86_AT(c, 0x95350u);
    { uint32_t v = c.r[4]; push32(c, v); }
    // 095351  call 0x96120
    X86_AT(c, 0x95351u);
    push32(c, 0x95356u); x86_call_known(c, 0x96120u, f_00096120); X86_RET(c, 0x95356u);
    X86_TICK(c, 7);
    // 095356  call 0x95a68
    X86_AT(c, 0x95356u);
    push32(c, 0x9535bu); x86_call_known(c, 0x95a68u, f_00095a68); X86_RET(c, 0x9535bu);
    X86_TICK(c, 16);
    // 09535b  leave 
    X86_AT(c, 0x9535bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09535c  ret 0xc
    X86_AT(c, 0x9535cu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x9533cu, "ran off the end of a function");
}
void f_00095364(X86Cpu& c) {
    X86_TICK(c, 17);
    // 095364  push ebp
    X86_AT(c, 0x95364u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095365  mov ebp, esp
    X86_AT(c, 0x95365u);
    c.r[5] = c.r[4];
    // 095367  push ecx
    X86_AT(c, 0x95367u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095368  mov eax, dword ptr [0x8a600]
    X86_AT(c, 0x95368u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A600u)));
    // 09536d  cmp eax, 0xffff
    X86_AT(c, 0x9536du);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 095372  je 0x95384
    X86_AT(c, 0x95372u);
    if (x86_cc(c, 4)) { goto L_95384; }
    X86_TICK(c, 11);
    // 095374  mov edx, dword ptr [0x8aa08]
    X86_AT(c, 0x95374u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AA08u)));
    // 09537a  cmp eax, edx
    X86_AT(c, 0x9537au);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 09537c  jbe 0x95384
    X86_AT(c, 0x9537cu);
    if (x86_cc(c, 6)) { goto L_95384; }
    X86_TICK(c, 9);
    // 09537e  push edx
    X86_AT(c, 0x9537eu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 09537f  call 0x93a14
    X86_AT(c, 0x9537fu);
    push32(c, 0x95384u); x86_call_known(c, 0x93a14u, f_00093a14); X86_RET(c, 0x95384u);
L_95384:
    X86_TICK(c, 18);
    // 095384  mov byte ptr [0x8aa00], 1
    X86_AT(c, 0x95384u);
    wr8((c.sbase[3] + (uint32_t)(0x8AA00u)), 0x1u);
    // 09538b  leave 
    X86_AT(c, 0x9538bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09538c  ret 
    X86_AT(c, 0x9538cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95364u, "ran off the end of a function");
}
void f_00095398(X86Cpu& c) {
    X86_TICK(c, 23);
    // 095398  push ebp
    X86_AT(c, 0x95398u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095399  mov ebp, esp
    X86_AT(c, 0x95399u);
    c.r[5] = c.r[4];
    // 09539b  push ecx
    X86_AT(c, 0x9539bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 09539c  inc dword ptr [0x8a60c]
    X86_AT(c, 0x9539cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A60Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0953a2  mov eax, dword ptr [0x8a600]
    X86_AT(c, 0x953a2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A600u)));
    // 0953a7  cmp eax, 0xffff
    X86_AT(c, 0x953a7u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 0953ac  je 0x953b9
    X86_AT(c, 0x953acu);
    if (x86_cc(c, 4)) { goto L_953b9; }
    X86_TICK(c, 7);
    // 0953ae  cmp eax, 1
    X86_AT(c, 0x953aeu);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0953b1  jb 0x953b9
    X86_AT(c, 0x953b1u);
    if (x86_cc(c, 2)) { goto L_953b9; }
    X86_TICK(c, 6);
    // 0953b3  dec dword ptr [0x8a600]
    X86_AT(c, 0x953b3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A600u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_953b9:
    X86_TICK(c, 16);
    // 0953b9  leave 
    X86_AT(c, 0x953b9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0953ba  ret 
    X86_AT(c, 0x953bau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95398u, "ran off the end of a function");
}
void f_000953c8(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0953c8  push ebp
    X86_AT(c, 0x953c8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0953c9  mov ebp, esp
    X86_AT(c, 0x953c9u);
    c.r[5] = c.r[4];
    // 0953cb  push ecx
    X86_AT(c, 0x953cbu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0953cc  push ebx
    X86_AT(c, 0x953ccu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0953cd  mov dword ptr [0x8aa04], 0
    X86_AT(c, 0x953cdu);
    wr32((c.sbase[3] + (uint32_t)(0x8AA04u)), 0x0u);
    // 0953d7  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x953d7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0953da  add eax, 8
    X86_AT(c, 0x953dau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0953dd  push eax
    X86_AT(c, 0x953ddu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0953de  mov ebx, eax
    X86_AT(c, 0x953deu);
    c.r[3] = c.r[0];
    // 0953e0  call 0x960c0
    X86_AT(c, 0x953e0u);
    push32(c, 0x953e5u); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x953e5u);
    X86_TICK(c, 12);
    // 0953e5  push dword ptr [0x1a64]
    X86_AT(c, 0x953e5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 0953eb  call 0x96048
    X86_AT(c, 0x953ebu);
    push32(c, 0x953f0u); x86_call_known(c, 0x96048u, f_00096048); X86_RET(c, 0x953f0u);
    X86_TICK(c, 7);
    // 0953f0  call 0x96564
    X86_AT(c, 0x953f0u);
    push32(c, 0x953f5u); x86_call_known(c, 0x96564u, f_00096564); X86_RET(c, 0x953f5u);
    X86_TICK(c, 5);
    // 0953f5  jae 0x95411
    X86_AT(c, 0x953f5u);
    if (x86_cc(c, 3)) { goto L_95411; }
    X86_TICK(c, 9);
    // 0953f7  push ebx
    X86_AT(c, 0x953f7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0953f8  call 0x960c0
    X86_AT(c, 0x953f8u);
    push32(c, 0x953fdu); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x953fdu);
    X86_TICK(c, 7);
    // 0953fd  call 0x96198
    X86_AT(c, 0x953fdu);
    push32(c, 0x95402u); x86_call_known(c, 0x96198u, f_00096198); X86_RET(c, 0x95402u);
    X86_TICK(c, 9);
    // 095402  push ebx
    X86_AT(c, 0x95402u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095403  call 0x96120
    X86_AT(c, 0x95403u);
    push32(c, 0x95408u); x86_call_known(c, 0x96120u, f_00096120); X86_RET(c, 0x95408u);
    X86_TICK(c, 9);
    // 095408  mov byte ptr [0x8a9fc], 0x2d
    X86_AT(c, 0x95408u);
    wr8((c.sbase[3] + (uint32_t)(0x8A9FCu)), 0x2Du);
    // 09540f  jmp 0x95433
    X86_AT(c, 0x9540fu);
    goto L_95433;
L_95411:
    X86_TICK(c, 12);
    // 095411  test byte ptr [0x8a5fc], 2
    X86_AT(c, 0x95411u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x2u, 1);
    // 095418  je 0x95423
    X86_AT(c, 0x95418u);
    if (x86_cc(c, 4)) { goto L_95423; }
    X86_TICK(c, 9);
    // 09541a  mov byte ptr [0x8a9fc], 0x2b
    X86_AT(c, 0x9541au);
    wr8((c.sbase[3] + (uint32_t)(0x8A9FCu)), 0x2Bu);
    // 095421  jmp 0x95433
    X86_AT(c, 0x95421u);
    goto L_95433;
L_95423:
    X86_TICK(c, 12);
    // 095423  test byte ptr [0x8a5fc], 4
    X86_AT(c, 0x95423u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x4u, 1);
    // 09542a  je 0x95444
    X86_AT(c, 0x9542au);
    if (x86_cc(c, 4)) { goto L_95444; }
    X86_TICK(c, 2);
    // 09542c  mov byte ptr [0x8a9fc], 0x20
    X86_AT(c, 0x9542cu);
    wr8((c.sbase[3] + (uint32_t)(0x8A9FCu)), 0x20u);
L_95433:
    X86_TICK(c, 11);
    // 095433  mov dword ptr [0x8aa04], 1
    X86_AT(c, 0x95433u);
    wr32((c.sbase[3] + (uint32_t)(0x8AA04u)), 0x1u);
    // 09543d  mov ecx, ebp
    X86_AT(c, 0x9543du);
    c.r[1] = c.r[5];
    // 09543f  call 0x95398
    X86_AT(c, 0x9543fu);
    push32(c, 0x95444u); x86_call_known(c, 0x95398u, f_00095398); X86_RET(c, 0x95444u);
L_95444:
    X86_TICK(c, 20);
    // 095444  pop ebx
    X86_AT(c, 0x95444u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 095445  leave 
    X86_AT(c, 0x95445u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095446  ret 
    X86_AT(c, 0x95446u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x953c8u, "ran off the end of a function");
}
void f_00095460(X86Cpu& c) {
    X86_TICK(c, 27);
    // 095460  push ebp
    X86_AT(c, 0x95460u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095461  mov ebp, esp
    X86_AT(c, 0x95461u);
    c.r[5] = c.r[4];
    // 095463  push ecx
    X86_AT(c, 0x95463u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095464  push esi
    X86_AT(c, 0x95464u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095465  push edi
    X86_AT(c, 0x95465u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095466  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x95466u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 095469  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x95469u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09546c  mov ecx, edi
    X86_AT(c, 0x9546cu);
    c.r[1] = c.r[7];
    // 09546e  jmp 0x95471
    X86_AT(c, 0x9546eu);
    goto L_95471;
L_95470:
    X86_TICK(c, 2);
    // 095470  dec ecx
    X86_AT(c, 0x95470u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_95471:
    X86_TICK(c, 7);
    // 095471  cmp esi, ecx
    X86_AT(c, 0x95471u);
    (void)x86_sub(c, c.r[6], c.r[1], 0, 4);
    // 095473  jae 0x9547e
    X86_AT(c, 0x95473u);
    if (x86_cc(c, 3)) { goto L_9547e; }
    X86_TICK(c, 12);
    // 095475  cmp byte ptr [ecx + 0x8a9da], 0x30
    X86_AT(c, 0x95475u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0x8A9DAu))), 0x30u, 0, 1);
    // 09547c  je 0x95470
    X86_AT(c, 0x9547cu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x95470u); goto L_95470; }
L_9547e:
    X86_TICK(c, 9);
    // 09547e  lea eax, [esi + 1]
    X86_AT(c, 0x9547eu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 095481  cmp eax, ecx
    X86_AT(c, 0x95481u);
    (void)x86_sub(c, c.r[0], c.r[1], 0, 4);
    // 095483  jne 0x95498
    X86_AT(c, 0x95483u);
    if (x86_cc(c, 5)) { goto L_95498; }
    X86_TICK(c, 12);
    // 095485  test byte ptr [0x8a5fc], 8
    X86_AT(c, 0x95485u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x8u, 1);
    // 09548c  jne 0x95498
    X86_AT(c, 0x9548cu);
    if (x86_cc(c, 5)) { goto L_95498; }
    X86_TICK(c, 12);
    // 09548e  cmp byte ptr [esi + 0x8a9db], 0x2e
    X86_AT(c, 0x9548eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0x8A9DBu))), 0x2Eu, 0, 1);
    // 095495  jne 0x95498
    X86_AT(c, 0x95495u);
    if (x86_cc(c, 5)) { goto L_95498; }
    X86_TICK(c, 2);
    // 095497  dec ecx
    X86_AT(c, 0x95497u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_95498:
    X86_TICK(c, 43);
    // 095498  lea eax, [ecx - 1]
    X86_AT(c, 0x95498u);
    c.r[0] = (uint32_t)(c.r[1] + 0xFFFFFFFFu);
    // 09549b  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x9549bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09549e  mov dword ptr [edx - 0x10], eax
    X86_AT(c, 0x9549eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[0]);
    // 0954a1  mov eax, edi
    X86_AT(c, 0x954a1u);
    c.r[0] = c.r[7];
    // 0954a3  sub eax, ecx
    X86_AT(c, 0x954a3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0954a5  sub dword ptr [0x8aa08], eax
    X86_AT(c, 0x954a5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA08u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0954ab  pop edi
    X86_AT(c, 0x954abu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0954ac  pop esi
    X86_AT(c, 0x954acu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0954ad  leave 
    X86_AT(c, 0x954adu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0954ae  ret 8
    X86_AT(c, 0x954aeu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x95460u, "ran off the end of a function");
}
void f_000954cc(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0954cc  push ebp
    X86_AT(c, 0x954ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0954cd  mov ebp, esp
    X86_AT(c, 0x954cdu);
    c.r[5] = c.r[4];
    // 0954cf  push ecx
    X86_AT(c, 0x954cfu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0954d0  test byte ptr [0x8a5fc], 1
    X86_AT(c, 0x954d0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x1u, 1);
    // 0954d7  jne 0x954ed
    X86_AT(c, 0x954d7u);
    if (x86_cc(c, 5)) { goto L_954ed; }
    X86_TICK(c, 12);
    // 0954d9  test byte ptr [0x8a5fc], 0x10
    X86_AT(c, 0x954d9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x10u, 1);
    // 0954e0  jne 0x954ed
    X86_AT(c, 0x954e0u);
    if (x86_cc(c, 5)) { goto L_954ed; }
    X86_TICK(c, 15);
    // 0954e2  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x954e2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0954e5  mov ecx, dword ptr [eax - 4]
    X86_AT(c, 0x954e5u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 0954e8  call 0x95364
    X86_AT(c, 0x954e8u);
    push32(c, 0x954edu); x86_call_known(c, 0x95364u, f_00095364); X86_RET(c, 0x954edu);
L_954ed:
    X86_TICK(c, 11);
    // 0954ed  mov eax, dword ptr [0x8aa04]
    X86_AT(c, 0x954edu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA04u)));
    // 0954f2  and eax, eax
    X86_AT(c, 0x954f2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0954f4  je 0x95508
    X86_AT(c, 0x954f4u);
    if (x86_cc(c, 4)) { goto L_95508; }
    X86_TICK(c, 15);
    // 0954f6  push eax
    X86_AT(c, 0x954f6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0954f7  push 0x8a9fc
    X86_AT(c, 0x954f7u);
    { uint32_t v = 0x8A9FCu; push32(c, v); }
    // 0954fc  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x954fcu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 095502  call dword ptr [0x8a610]
    X86_AT(c, 0x95502u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x95508u); x86_call(c, t); X86_RET(c, 0x95508u); }
L_95508:
    X86_TICK(c, 12);
    // 095508  test byte ptr [0x8a5fc], 1
    X86_AT(c, 0x95508u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x1u, 1);
    // 09550f  jne 0x95525
    X86_AT(c, 0x9550fu);
    if (x86_cc(c, 5)) { goto L_95525; }
    X86_TICK(c, 12);
    // 095511  cmp byte ptr [0x8aa00], 0
    X86_AT(c, 0x95511u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8AA00u))), 0x0u, 0, 1);
    // 095518  jne 0x95525
    X86_AT(c, 0x95518u);
    if (x86_cc(c, 5)) { goto L_95525; }
    X86_TICK(c, 15);
    // 09551a  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x9551au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09551d  mov ecx, dword ptr [eax - 4]
    X86_AT(c, 0x9551du);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 095520  call 0x95364
    X86_AT(c, 0x95520u);
    push32(c, 0x95525u); x86_call_known(c, 0x95364u, f_00095364); X86_RET(c, 0x95525u);
L_95525:
    X86_TICK(c, 16);
    // 095525  leave 
    X86_AT(c, 0x95525u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 095526  ret 
    X86_AT(c, 0x95526u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x954ccu, "ran off the end of a function");
}
void f_00095530(X86Cpu& c) {
    X86_TICK(c, 24);
    // 095530  push ebp
    X86_AT(c, 0x95530u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 095531  mov ebp, esp
    X86_AT(c, 0x95531u);
    c.r[5] = c.r[4];
    // 095533  push ecx
    X86_AT(c, 0x95533u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 095534  push ebx
    X86_AT(c, 0x95534u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 095535  push esi
    X86_AT(c, 0x95535u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 095536  push edi
    X86_AT(c, 0x95536u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095537  cmp dword ptr [0x8aa0c], 0
    X86_AT(c, 0x95537u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu))), 0x0u, 0, 4);
    // 09553e  jle 0x9566f
    X86_AT(c, 0x9553eu);
    if (x86_cc(c, 14)) { goto L_9566f; }
    X86_TICK(c, 12);
    // 095544  cmp byte ptr [0x8aa23], 0
    X86_AT(c, 0x95544u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8AA23u))), 0x0u, 0, 1);
    // 09554b  je 0x9555e
    X86_AT(c, 0x9554bu);
    if (x86_cc(c, 4)) { goto L_9555e; }
    X86_TICK(c, 8);
    // 09554d  mov byte ptr [0x8a9dc], 0x2e
    X86_AT(c, 0x9554du);
    wr8((c.sbase[3] + (uint32_t)(0x8A9DCu)), 0x2Eu);
    // 095554  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95554u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095557  mov dword ptr [eax - 0x10], 1
    X86_AT(c, 0x95557u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)), 0x1u);
L_9555e:
    X86_TICK(c, 11);
    // 09555e  mov eax, dword ptr [0x8a604]
    X86_AT(c, 0x9555eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A604u)));
    // 095563  and eax, eax
    X86_AT(c, 0x95563u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095565  je 0x955dd
    X86_AT(c, 0x95565u);
    if (x86_cc(c, 4)) { goto L_955dd; }
    X86_TICK(c, 19);
    // 09556b  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x9556bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09556e  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0x9556eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 095571  mov esi, dword ptr [0x8aa0c]
    X86_AT(c, 0x95571u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu)));
    // 095577  cmp esi, ecx
    X86_AT(c, 0x95577u);
    (void)x86_sub(c, c.r[6], c.r[1], 0, 4);
    // 095579  jge 0x955b7
    X86_AT(c, 0x95579u);
    if (x86_cc(c, 13)) { goto L_955b7; }
    X86_TICK(c, 9);
    // 09557b  sub ecx, esi
    X86_AT(c, 0x9557bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 09557d  cmp ecx, eax
    X86_AT(c, 0x9557du);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 09557f  jb 0x95583
    X86_AT(c, 0x9557fu);
    if (x86_cc(c, 2)) { goto L_95583; }
    X86_TICK(c, 2);
    // 095581  mov ecx, eax
    X86_AT(c, 0x95581u);
    c.r[1] = c.r[0];
L_95583:
    X86_TICK(c, 44);
    // 095583  mov edi, ecx
    X86_AT(c, 0x95583u);
    c.r[7] = c.r[1];
    // 095585  add esi, 0x8aa10
    X86_AT(c, 0x95585u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x8AA10u, 0, 4); }
    // 09558b  mov ebx, 0x8a9dd
    X86_AT(c, 0x9558bu);
    c.r[3] = 0x8A9DDu;
    // 095590  push edi
    X86_AT(c, 0x95590u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095591  mov edi, ebx
    X86_AT(c, 0x95591u);
    c.r[7] = c.r[3];
    // 095593  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x95593u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 095595  pop edi
    X86_AT(c, 0x95595u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095596  lea ecx, [edi + 1]
    X86_AT(c, 0x95596u);
    c.r[1] = (uint32_t)(c.r[7] + 0x1u);
    // 095599  mov dword ptr [edx - 0x10], ecx
    X86_AT(c, 0x95599u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[1]);
    // 09559c  sub dword ptr [0x8a604], edi
    X86_AT(c, 0x9559cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A604u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0955a2  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x955a2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0955a6  je 0x955f0
    X86_AT(c, 0x955a6u);
    if (x86_cc(c, 4)) { goto L_955f0; }
    X86_TICK(c, 15);
    // 0955a8  push 1
    X86_AT(c, 0x955a8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0955aa  lea eax, [edi + 2]
    X86_AT(c, 0x955aau);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 0955ad  push eax
    X86_AT(c, 0x955adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0955ae  mov ecx, edx
    X86_AT(c, 0x955aeu);
    c.r[1] = c.r[2];
    // 0955b0  call 0x95460
    X86_AT(c, 0x955b0u);
    push32(c, 0x955b5u); x86_call_known(c, 0x95460u, f_00095460); X86_RET(c, 0x955b5u);
    X86_TICK(c, 7);
    // 0955b5  jmp 0x955f0
    X86_AT(c, 0x955b5u);
    goto L_955f0;
L_955b7:
    X86_TICK(c, 16);
    // 0955b7  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x955b7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0955ba  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x955bau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0955be  je 0x955f0
    X86_AT(c, 0x955beu);
    if (x86_cc(c, 4)) { goto L_955f0; }
    X86_TICK(c, 12);
    // 0955c0  test byte ptr [0x8a5fc], 8
    X86_AT(c, 0x955c0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x8u, 1);
    // 0955c7  jne 0x955f0
    X86_AT(c, 0x955c7u);
    if (x86_cc(c, 5)) { goto L_955f0; }
    X86_TICK(c, 12);
    // 0955c9  cmp dword ptr [0x8a600], 0xffff
    X86_AT(c, 0x955c9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x8A600u))), 0xFFFFu, 0, 4);
    // 0955d3  je 0x955e6
    X86_AT(c, 0x955d3u);
    if (x86_cc(c, 4)) { goto L_955e6; }
    X86_TICK(c, 13);
    // 0955d5  dec dword ptr [0x8aa08]
    X86_AT(c, 0x955d5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA08u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0955db  jmp 0x955e6
    X86_AT(c, 0x955dbu);
    goto L_955e6;
L_955dd:
    X86_TICK(c, 12);
    // 0955dd  test byte ptr [0x8a5fc], 8
    X86_AT(c, 0x955ddu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x8u, 1);
    // 0955e4  jne 0x955f0
    X86_AT(c, 0x955e4u);
    if (x86_cc(c, 5)) { goto L_955f0; }
L_955e6:
    X86_TICK(c, 6);
    // 0955e6  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x955e6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0955e9  mov dword ptr [eax - 0x10], 0
    X86_AT(c, 0x955e9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)), 0x0u);
L_955f0:
    X86_TICK(c, 13);
    // 0955f0  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x955f0u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0955f3  mov ebx, ecx
    X86_AT(c, 0x955f3u);
    c.r[3] = c.r[1];
    // 0955f5  call 0x954cc
    X86_AT(c, 0x955f5u);
    push32(c, 0x955fau); x86_call_known(c, 0x954ccu, f_000954cc); X86_RET(c, 0x955fau);
    X86_TICK(c, 15);
    // 0955fa  mov eax, dword ptr [ebx - 8]
    X86_AT(c, 0x955fau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF8u)));
    // 0955fd  mov edx, dword ptr [0x8aa0c]
    X86_AT(c, 0x955fdu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu)));
    // 095603  cmp edx, eax
    X86_AT(c, 0x95603u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 095605  jl 0x95608
    X86_AT(c, 0x95605u);
    if (x86_cc(c, 12)) { goto L_95608; }
    X86_TICK(c, 3);
    // 095607  xchg edx, eax
    X86_AT(c, 0x95607u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_95608:
    X86_TICK(c, 15);
    // 095608  push edx
    X86_AT(c, 0x95608u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 095609  push 0x8aa10
    X86_AT(c, 0x95609u);
    { uint32_t v = 0x8AA10u; push32(c, v); }
    // 09560e  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x9560eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 095614  call dword ptr [0x8a610]
    X86_AT(c, 0x95614u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x9561au); x86_call(c, t); X86_RET(c, 0x9561au); }
    X86_TICK(c, 15);
    // 09561a  mov eax, dword ptr [ebx - 8]
    X86_AT(c, 0x9561au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF8u)));
    // 09561d  mov edx, dword ptr [0x8aa0c]
    X86_AT(c, 0x9561du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu)));
    // 095623  cmp edx, eax
    X86_AT(c, 0x95623u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 095625  jle 0x95634
    X86_AT(c, 0x95625u);
    if (x86_cc(c, 14)) { goto L_95634; }
    X86_TICK(c, 13);
    // 095627  sub edx, eax
    X86_AT(c, 0x95627u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 095629  push edx
    X86_AT(c, 0x95629u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 09562a  push 0x8a618
    X86_AT(c, 0x9562au);
    { uint32_t v = 0x8A618u; push32(c, v); }
    // 09562f  call 0x939cc
    X86_AT(c, 0x9562fu);
    push32(c, 0x95634u); x86_call_known(c, 0x939ccu, f_000939cc); X86_RET(c, 0x95634u);
L_95634:
    X86_TICK(c, 15);
    // 095634  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95634u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095637  mov eax, dword ptr [eax - 0x10]
    X86_AT(c, 0x95637u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)));
    // 09563a  and eax, eax
    X86_AT(c, 0x9563au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 09563c  je 0x95650
    X86_AT(c, 0x9563cu);
    if (x86_cc(c, 4)) { goto L_95650; }
    X86_TICK(c, 15);
    // 09563e  push eax
    X86_AT(c, 0x9563eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09563f  push 0x8a9dc
    X86_AT(c, 0x9563fu);
    { uint32_t v = 0x8A9DCu; push32(c, v); }
    // 095644  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x95644u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 09564a  call dword ptr [0x8a610]
    X86_AT(c, 0x9564au);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x95650u); x86_call(c, t); X86_RET(c, 0x95650u); }
L_95650:
    X86_TICK(c, 11);
    // 095650  mov eax, dword ptr [0x8a604]
    X86_AT(c, 0x95650u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A604u)));
    // 095655  and eax, eax
    X86_AT(c, 0x95655u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095657  je 0x957b3
    X86_AT(c, 0x95657u);
    if (x86_cc(c, 4)) { goto L_957b3; }
    X86_TICK(c, 16);
    // 09565d  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x9565du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095660  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x95660u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 095664  jne 0x957b3
    X86_AT(c, 0x95664u);
    if (x86_cc(c, 5)) { goto L_957b3; }
    X86_TICK(c, 7);
    // 09566a  jmp 0x957a8
    X86_AT(c, 0x9566au);
    goto L_957a8;
L_9566f:
    X86_TICK(c, 11);
    // 09566f  mov eax, dword ptr [0x8aa0c]
    X86_AT(c, 0x9566fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu)));
    // 095674  and eax, eax
    X86_AT(c, 0x95674u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 095676  jge 0x9567a
    X86_AT(c, 0x95676u);
    if (x86_cc(c, 13)) { goto L_9567a; }
    X86_TICK(c, 2);
    // 095678  neg eax
    X86_AT(c, 0x95678u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_9567a:
    X86_TICK(c, 13);
    // 09567a  mov dword ptr [0x8aa0c], eax
    X86_AT(c, 0x9567au);
    wr32((c.sbase[3] + (uint32_t)(0x8AA0Cu)), c.r[0]);
    // 09567f  mov edx, dword ptr [0x8a604]
    X86_AT(c, 0x9567fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A604u)));
    // 095685  and edx, edx
    X86_AT(c, 0x95685u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 095687  je 0x956b9
    X86_AT(c, 0x95687u);
    if (x86_cc(c, 4)) { goto L_956b9; }
    X86_TICK(c, 7);
    // 095689  cmp edx, eax
    X86_AT(c, 0x95689u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 09568b  jle 0x956b0
    X86_AT(c, 0x9568bu);
    if (x86_cc(c, 14)) { goto L_956b0; }
    X86_TICK(c, 21);
    // 09568d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x9568du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095690  mov eax, dword ptr [eax - 4]
    X86_AT(c, 0x95690u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 095693  add eax, 8
    X86_AT(c, 0x95693u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 095696  push eax
    X86_AT(c, 0x95696u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 095697  mov ebx, eax
    X86_AT(c, 0x95697u);
    c.r[3] = c.r[0];
    // 095699  call 0x960c0
    X86_AT(c, 0x95699u);
    push32(c, 0x9569eu); x86_call_known(c, 0x960c0u, f_000960c0); X86_RET(c, 0x9569eu);
    X86_TICK(c, 12);
    // 09569e  push dword ptr [0x1a64]
    X86_AT(c, 0x9569eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x1A64u))); push32(c, v); }
    // 0956a4  call 0x96048
    X86_AT(c, 0x956a4u);
    push32(c, 0x956a9u); x86_call_known(c, 0x96048u, f_00096048); X86_RET(c, 0x956a9u);
    X86_TICK(c, 7);
    // 0956a9  call 0x96564
    X86_AT(c, 0x956a9u);
    push32(c, 0x956aeu); x86_call_known(c, 0x96564u, f_00096564); X86_RET(c, 0x956aeu);
    X86_TICK(c, 5);
    // 0956ae  jne 0x9570d
    X86_AT(c, 0x956aeu);
    if (x86_cc(c, 5)) { goto L_9570d; }
L_956b0:
    X86_TICK(c, 16);
    // 0956b0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x956b0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0956b3  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x956b3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0956b7  je 0x956ec
    X86_AT(c, 0x956b7u);
    if (x86_cc(c, 4)) { goto L_956ec; }
L_956b9:
    X86_TICK(c, 12);
    // 0956b9  test byte ptr [0x8a5fc], 8
    X86_AT(c, 0x956b9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x8u, 1);
    // 0956c0  jne 0x956e0
    X86_AT(c, 0x956c0u);
    if (x86_cc(c, 5)) { goto L_956e0; }
    X86_TICK(c, 13);
    // 0956c2  mov dword ptr [0x8aa08], 1
    X86_AT(c, 0x956c2u);
    wr32((c.sbase[3] + (uint32_t)(0x8AA08u)), 0x1u);
    // 0956cc  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x956ccu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0956cf  call 0x954cc
    X86_AT(c, 0x956cfu);
    push32(c, 0x956d4u); x86_call_known(c, 0x954ccu, f_000954cc); X86_RET(c, 0x956d4u);
    X86_TICK(c, 11);
    // 0956d4  push 1
    X86_AT(c, 0x956d4u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0956d6  push 0x1a80
    X86_AT(c, 0x956d6u);
    { uint32_t v = 0x1A80u; push32(c, v); }
    // 0956db  jmp 0x9578a
    X86_AT(c, 0x956dbu);
    goto L_9578a;
L_956e0:
    X86_TICK(c, 9);
    // 0956e0  mov dword ptr [0x8aa08], 2
    X86_AT(c, 0x956e0u);
    wr32((c.sbase[3] + (uint32_t)(0x8AA08u)), 0x2u);
    // 0956ea  jmp 0x956f9
    X86_AT(c, 0x956eau);
    goto L_956f9;
L_956ec:
    X86_TICK(c, 8);
    // 0956ec  mov eax, dword ptr [0x8a604]
    X86_AT(c, 0x956ecu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A604u)));
    // 0956f1  add eax, 2
    X86_AT(c, 0x956f1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0956f4  mov dword ptr [0x8aa08], eax
    X86_AT(c, 0x956f4u);
    wr32((c.sbase[3] + (uint32_t)(0x8AA08u)), c.r[0]);
L_956f9:
    X86_TICK(c, 11);
    // 0956f9  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x956f9u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0956fc  call 0x954cc
    X86_AT(c, 0x956fcu);
    push32(c, 0x95701u); x86_call_known(c, 0x954ccu, f_000954cc); X86_RET(c, 0x95701u);
    X86_TICK(c, 11);
    // 095701  push 2
    X86_AT(c, 0x95701u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 095703  push 0x1a82
    X86_AT(c, 0x95703u);
    { uint32_t v = 0x1A82u; push32(c, v); }
    // 095708  jmp 0x9578a
    X86_AT(c, 0x95708u);
    goto L_9578a;
L_9570d:
    X86_TICK(c, 30);
    // 09570d  mov eax, dword ptr [0x8aa0c]
    X86_AT(c, 0x9570du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu)));
    // 095712  sub dword ptr [0x8a604], eax
    X86_AT(c, 0x95712u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A604u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 095718  mov eax, dword ptr [0x8a604]
    X86_AT(c, 0x95718u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A604u)));
    // 09571d  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x9571du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095720  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0x95720u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 095723  cmp ecx, eax
    X86_AT(c, 0x95723u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 095725  jb 0x95729
    X86_AT(c, 0x95725u);
    if (x86_cc(c, 2)) { goto L_95729; }
    X86_TICK(c, 2);
    // 095727  mov ecx, eax
    X86_AT(c, 0x95727u);
    c.r[1] = c.r[0];
L_95729:
    X86_TICK(c, 40);
    // 095729  mov edi, ecx
    X86_AT(c, 0x95729u);
    c.r[7] = c.r[1];
    // 09572b  mov esi, 0x8aa10
    X86_AT(c, 0x9572bu);
    c.r[6] = 0x8AA10u;
    // 095730  push edi
    X86_AT(c, 0x95730u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 095731  mov edi, 0x8a9dc
    X86_AT(c, 0x95731u);
    c.r[7] = 0x8A9DCu;
    // 095736  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x95736u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 095738  pop edi
    X86_AT(c, 0x95738u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 095739  sub dword ptr [0x8a604], edi
    X86_AT(c, 0x95739u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A604u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 09573f  mov dword ptr [edx - 0x10], edi
    X86_AT(c, 0x9573fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[7]);
    // 095742  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x95742u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 095746  je 0x95755
    X86_AT(c, 0x95746u);
    if (x86_cc(c, 4)) { goto L_95755; }
    X86_TICK(c, 15);
    // 095748  push 1
    X86_AT(c, 0x95748u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 09574a  lea eax, [edi + 1]
    X86_AT(c, 0x9574au);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 09574d  push eax
    X86_AT(c, 0x9574du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09574e  mov ecx, edx
    X86_AT(c, 0x9574eu);
    c.r[1] = c.r[2];
    // 095750  call 0x95460
    X86_AT(c, 0x95750u);
    push32(c, 0x95755u); x86_call_known(c, 0x95460u, f_00095460); X86_RET(c, 0x95755u);
L_95755:
    X86_TICK(c, 13);
    // 095755  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x95755u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095758  mov ebx, ecx
    X86_AT(c, 0x95758u);
    c.r[3] = c.r[1];
    // 09575a  call 0x954cc
    X86_AT(c, 0x9575au);
    push32(c, 0x9575fu); x86_call_known(c, 0x954ccu, f_000954cc); X86_RET(c, 0x9575fu);
    X86_TICK(c, 15);
    // 09575f  push 2
    X86_AT(c, 0x9575fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 095761  push 0x1a82
    X86_AT(c, 0x95761u);
    { uint32_t v = 0x1A82u; push32(c, v); }
    // 095766  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x95766u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 09576c  call dword ptr [0x8a610]
    X86_AT(c, 0x9576cu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x95772u); x86_call(c, t); X86_RET(c, 0x95772u); }
    X86_TICK(c, 14);
    // 095772  push dword ptr [0x8aa0c]
    X86_AT(c, 0x95772u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8AA0Cu))); push32(c, v); }
    // 095778  push 0x8a618
    X86_AT(c, 0x95778u);
    { uint32_t v = 0x8A618u; push32(c, v); }
    // 09577d  call 0x939cc
    X86_AT(c, 0x9577du);
    push32(c, 0x95782u); x86_call_known(c, 0x939ccu, f_000939cc); X86_RET(c, 0x95782u);
    X86_TICK(c, 7);
    // 095782  push dword ptr [ebx - 0x10]
    X86_AT(c, 0x95782u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF0u))); push32(c, v); }
    // 095785  push 0x8a9dc
    X86_AT(c, 0x95785u);
    { uint32_t v = 0x8A9DCu; push32(c, v); }
L_9578a:
    X86_TICK(c, 11);
    // 09578a  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x9578au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 095790  call dword ptr [0x8a610]
    X86_AT(c, 0x95790u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x95796u); x86_call(c, t); X86_RET(c, 0x95796u); }
    X86_TICK(c, 16);
    // 095796  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x95796u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 095799  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0x95799u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 09579d  jne 0x957b3
    X86_AT(c, 0x9579du);
    if (x86_cc(c, 5)) { goto L_957b3; }
    X86_TICK(c, 11);
    // 09579f  mov eax, dword ptr [0x8a604]
    X86_AT(c, 0x9579fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A604u)));
    // 0957a4  and eax, eax
    X86_AT(c, 0x957a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0957a6  je 0x957b3
    X86_AT(c, 0x957a6u);
    if (x86_cc(c, 4)) { goto L_957b3; }
L_957a8:
    X86_TICK(c, 11);
    // 0957a8  push eax
    X86_AT(c, 0x957a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0957a9  push 0x8a618
    X86_AT(c, 0x957a9u);
    { uint32_t v = 0x8A618u; push32(c, v); }
    // 0957ae  call 0x939cc
    X86_AT(c, 0x957aeu);
    push32(c, 0x957b3u); x86_call_known(c, 0x939ccu, f_000939cc); X86_RET(c, 0x957b3u);
L_957b3:
    X86_TICK(c, 28);
    // 0957b3  pop edi
    X86_AT(c, 0x957b3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0957b4  pop esi
    X86_AT(c, 0x957b4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0957b5  pop ebx
    X86_AT(c, 0x957b5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0957b6  leave 
    X86_AT(c, 0x957b6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0957b7  ret 
    X86_AT(c, 0x957b7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x95530u, "ran off the end of a function");
}
}

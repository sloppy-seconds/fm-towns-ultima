#include "p_game_funcs.h"
namespace p_game {
void f_000ea724(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0ea724  push ebp
    X86_AT(c, 0xea724u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ea725  mov ebp, esp
    X86_AT(c, 0xea725u);
    c.r[5] = c.r[4];
    // 0ea727  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xea727u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0ea72a  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xea72au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0ea72d  push dword ptr [ebp + 8]
    X86_AT(c, 0xea72du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0ea730  call 0xe82e0
    X86_AT(c, 0xea730u);
    push32(c, 0xea735u); x86_call_known(c, 0xe82e0u, f_000e82e0); X86_RET(c, 0xea735u);
    X86_TICK(c, 11);
    // 0ea735  sub esp, 0xc
    X86_AT(c, 0xea735u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0ea738  push esp
    X86_AT(c, 0xea738u);
    { uint32_t v = c.r[4]; push32(c, v); }
    // 0ea739  call 0xea16c
    X86_AT(c, 0xea739u);
    push32(c, 0xea73eu); x86_call_known(c, 0xea16cu, f_000ea16c); X86_RET(c, 0xea73eu);
    X86_TICK(c, 7);
    // 0ea73e  call 0xeae50
    X86_AT(c, 0xea73eu);
    push32(c, 0xea743u); x86_call_known(c, 0xeae50u, f_000eae50); X86_RET(c, 0xea743u);
    X86_TICK(c, 16);
    // 0ea743  leave 
    X86_AT(c, 0xea743u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ea744  ret 0xc
    X86_AT(c, 0xea744u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xea724u, "ran off the end of a function");
}
void f_000ea74c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0ea74c  push ebp
    X86_AT(c, 0xea74cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ea74d  mov ebp, esp
    X86_AT(c, 0xea74du);
    c.r[5] = c.r[4];
    // 0ea74f  push ecx
    X86_AT(c, 0xea74fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0ea750  mov eax, dword ptr [0xc40d0]
    X86_AT(c, 0xea750u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40D0u)));
    // 0ea755  cmp eax, 0xffff
    X86_AT(c, 0xea755u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 0ea75a  je 0xea76c
    X86_AT(c, 0xea75au);
    if (x86_cc(c, 4)) { goto L_ea76c; }
    X86_TICK(c, 11);
    // 0ea75c  mov edx, dword ptr [0xc4604]
    X86_AT(c, 0xea75cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC4604u)));
    // 0ea762  cmp eax, edx
    X86_AT(c, 0xea762u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0ea764  jbe 0xea76c
    X86_AT(c, 0xea764u);
    if (x86_cc(c, 6)) { goto L_ea76c; }
    X86_TICK(c, 9);
    // 0ea766  push edx
    X86_AT(c, 0xea766u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ea767  call 0xe86a0
    X86_AT(c, 0xea767u);
    push32(c, 0xea76cu); x86_call_known(c, 0xe86a0u, f_000e86a0); X86_RET(c, 0xea76cu);
L_ea76c:
    X86_TICK(c, 18);
    // 0ea76c  mov byte ptr [0xc45fc], 1
    X86_AT(c, 0xea76cu);
    wr8((c.sbase[3] + (uint32_t)(0xC45FCu)), 0x1u);
    // 0ea773  leave 
    X86_AT(c, 0xea773u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ea774  ret 
    X86_AT(c, 0xea774u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea74cu, "ran off the end of a function");
}
void f_000ea780(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0ea780  push ebp
    X86_AT(c, 0xea780u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ea781  mov ebp, esp
    X86_AT(c, 0xea781u);
    c.r[5] = c.r[4];
    // 0ea783  push ecx
    X86_AT(c, 0xea783u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0ea784  inc dword ptr [0xc40dc]
    X86_AT(c, 0xea784u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40DCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ea78a  mov eax, dword ptr [0xc40d0]
    X86_AT(c, 0xea78au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40D0u)));
    // 0ea78f  cmp eax, 0xffff
    X86_AT(c, 0xea78fu);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 0ea794  je 0xea7a1
    X86_AT(c, 0xea794u);
    if (x86_cc(c, 4)) { goto L_ea7a1; }
    X86_TICK(c, 7);
    // 0ea796  cmp eax, 1
    X86_AT(c, 0xea796u);
    (void)x86_sub(c, c.r[0], 0x1u, 0, 4);
    // 0ea799  jb 0xea7a1
    X86_AT(c, 0xea799u);
    if (x86_cc(c, 2)) { goto L_ea7a1; }
    X86_TICK(c, 6);
    // 0ea79b  dec dword ptr [0xc40d0]
    X86_AT(c, 0xea79bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40D0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_ea7a1:
    X86_TICK(c, 16);
    // 0ea7a1  leave 
    X86_AT(c, 0xea7a1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ea7a2  ret 
    X86_AT(c, 0xea7a2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea780u, "ran off the end of a function");
}
void f_000ea7b0(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0ea7b0  push ebp
    X86_AT(c, 0xea7b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ea7b1  mov ebp, esp
    X86_AT(c, 0xea7b1u);
    c.r[5] = c.r[4];
    // 0ea7b3  push ecx
    X86_AT(c, 0xea7b3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0ea7b4  push ebx
    X86_AT(c, 0xea7b4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ea7b5  mov dword ptr [0xc4600], 0
    X86_AT(c, 0xea7b5u);
    wr32((c.sbase[3] + (uint32_t)(0xC4600u)), 0x0u);
    // 0ea7bf  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea7bfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea7c2  add eax, 8
    X86_AT(c, 0xea7c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0ea7c5  push eax
    X86_AT(c, 0xea7c5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea7c6  mov ebx, eax
    X86_AT(c, 0xea7c6u);
    c.r[3] = c.r[0];
    // 0ea7c8  call 0xea10c
    X86_AT(c, 0xea7c8u);
    push32(c, 0xea7cdu); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea7cdu);
    X86_TICK(c, 12);
    // 0ea7cd  push dword ptr [0xffe8]
    X86_AT(c, 0xea7cdu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xFFE8u))); push32(c, v); }
    // 0ea7d3  call 0xeb3ac
    X86_AT(c, 0xea7d3u);
    push32(c, 0xea7d8u); x86_call_known(c, 0xeb3acu, f_000eb3ac); X86_RET(c, 0xea7d8u);
    X86_TICK(c, 7);
    // 0ea7d8  call 0xea330
    X86_AT(c, 0xea7d8u);
    push32(c, 0xea7ddu); x86_call_known(c, 0xea330u, f_000ea330); X86_RET(c, 0xea7ddu);
    X86_TICK(c, 5);
    // 0ea7dd  jae 0xea7f9
    X86_AT(c, 0xea7ddu);
    if (x86_cc(c, 3)) { goto L_ea7f9; }
    X86_TICK(c, 9);
    // 0ea7df  push ebx
    X86_AT(c, 0xea7dfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ea7e0  call 0xea10c
    X86_AT(c, 0xea7e0u);
    push32(c, 0xea7e5u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea7e5u);
    X86_TICK(c, 7);
    // 0ea7e5  call 0xea1e4
    X86_AT(c, 0xea7e5u);
    push32(c, 0xea7eau); x86_call_known(c, 0xea1e4u, f_000ea1e4); X86_RET(c, 0xea7eau);
    X86_TICK(c, 9);
    // 0ea7ea  push ebx
    X86_AT(c, 0xea7eau);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ea7eb  call 0xea16c
    X86_AT(c, 0xea7ebu);
    push32(c, 0xea7f0u); x86_call_known(c, 0xea16cu, f_000ea16c); X86_RET(c, 0xea7f0u);
    X86_TICK(c, 9);
    // 0ea7f0  mov byte ptr [0xc45f8], 0x2d
    X86_AT(c, 0xea7f0u);
    wr8((c.sbase[3] + (uint32_t)(0xC45F8u)), 0x2Du);
    // 0ea7f7  jmp 0xea81b
    X86_AT(c, 0xea7f7u);
    goto L_ea81b;
L_ea7f9:
    X86_TICK(c, 12);
    // 0ea7f9  test byte ptr [0xc40cc], 2
    X86_AT(c, 0xea7f9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x2u, 1);
    // 0ea800  je 0xea80b
    X86_AT(c, 0xea800u);
    if (x86_cc(c, 4)) { goto L_ea80b; }
    X86_TICK(c, 9);
    // 0ea802  mov byte ptr [0xc45f8], 0x2b
    X86_AT(c, 0xea802u);
    wr8((c.sbase[3] + (uint32_t)(0xC45F8u)), 0x2Bu);
    // 0ea809  jmp 0xea81b
    X86_AT(c, 0xea809u);
    goto L_ea81b;
L_ea80b:
    X86_TICK(c, 12);
    // 0ea80b  test byte ptr [0xc40cc], 4
    X86_AT(c, 0xea80bu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x4u, 1);
    // 0ea812  je 0xea82c
    X86_AT(c, 0xea812u);
    if (x86_cc(c, 4)) { goto L_ea82c; }
    X86_TICK(c, 2);
    // 0ea814  mov byte ptr [0xc45f8], 0x20
    X86_AT(c, 0xea814u);
    wr8((c.sbase[3] + (uint32_t)(0xC45F8u)), 0x20u);
L_ea81b:
    X86_TICK(c, 11);
    // 0ea81b  mov dword ptr [0xc4600], 1
    X86_AT(c, 0xea81bu);
    wr32((c.sbase[3] + (uint32_t)(0xC4600u)), 0x1u);
    // 0ea825  mov ecx, ebp
    X86_AT(c, 0xea825u);
    c.r[1] = c.r[5];
    // 0ea827  call 0xea780
    X86_AT(c, 0xea827u);
    push32(c, 0xea82cu); x86_call_known(c, 0xea780u, f_000ea780); X86_RET(c, 0xea82cu);
L_ea82c:
    X86_TICK(c, 20);
    // 0ea82c  pop ebx
    X86_AT(c, 0xea82cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ea82d  leave 
    X86_AT(c, 0xea82du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ea82e  ret 
    X86_AT(c, 0xea82eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea7b0u, "ran off the end of a function");
}
void f_000ea848(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0ea848  push ebp
    X86_AT(c, 0xea848u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ea849  mov ebp, esp
    X86_AT(c, 0xea849u);
    c.r[5] = c.r[4];
    // 0ea84b  push ecx
    X86_AT(c, 0xea84bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0ea84c  push esi
    X86_AT(c, 0xea84cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea84d  push edi
    X86_AT(c, 0xea84du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea84e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xea84eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ea851  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xea851u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ea854  mov ecx, edi
    X86_AT(c, 0xea854u);
    c.r[1] = c.r[7];
    // 0ea856  jmp 0xea859
    X86_AT(c, 0xea856u);
    goto L_ea859;
L_ea858:
    X86_TICK(c, 2);
    // 0ea858  dec ecx
    X86_AT(c, 0xea858u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_ea859:
    X86_TICK(c, 7);
    // 0ea859  cmp esi, ecx
    X86_AT(c, 0xea859u);
    (void)x86_sub(c, c.r[6], c.r[1], 0, 4);
    // 0ea85b  jae 0xea866
    X86_AT(c, 0xea85bu);
    if (x86_cc(c, 3)) { goto L_ea866; }
    X86_TICK(c, 12);
    // 0ea85d  cmp byte ptr [ecx + 0xc45d6], 0x30
    X86_AT(c, 0xea85du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[1] + 0xC45D6u))), 0x30u, 0, 1);
    // 0ea864  je 0xea858
    X86_AT(c, 0xea864u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xea858u); goto L_ea858; }
L_ea866:
    X86_TICK(c, 9);
    // 0ea866  lea eax, [esi + 1]
    X86_AT(c, 0xea866u);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0ea869  cmp eax, ecx
    X86_AT(c, 0xea869u);
    (void)x86_sub(c, c.r[0], c.r[1], 0, 4);
    // 0ea86b  jne 0xea880
    X86_AT(c, 0xea86bu);
    if (x86_cc(c, 5)) { goto L_ea880; }
    X86_TICK(c, 12);
    // 0ea86d  test byte ptr [0xc40cc], 8
    X86_AT(c, 0xea86du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x8u, 1);
    // 0ea874  jne 0xea880
    X86_AT(c, 0xea874u);
    if (x86_cc(c, 5)) { goto L_ea880; }
    X86_TICK(c, 12);
    // 0ea876  cmp byte ptr [esi + 0xc45d7], 0x2e
    X86_AT(c, 0xea876u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xC45D7u))), 0x2Eu, 0, 1);
    // 0ea87d  jne 0xea880
    X86_AT(c, 0xea87du);
    if (x86_cc(c, 5)) { goto L_ea880; }
    X86_TICK(c, 2);
    // 0ea87f  dec ecx
    X86_AT(c, 0xea87fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
L_ea880:
    X86_TICK(c, 43);
    // 0ea880  lea eax, [ecx - 1]
    X86_AT(c, 0xea880u);
    c.r[0] = (uint32_t)(c.r[1] + 0xFFFFFFFFu);
    // 0ea883  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xea883u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea886  mov dword ptr [edx - 0x10], eax
    X86_AT(c, 0xea886u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[0]);
    // 0ea889  mov eax, edi
    X86_AT(c, 0xea889u);
    c.r[0] = c.r[7];
    // 0ea88b  sub eax, ecx
    X86_AT(c, 0xea88bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0ea88d  sub dword ptr [0xc4604], eax
    X86_AT(c, 0xea88du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC4604u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0ea893  pop edi
    X86_AT(c, 0xea893u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ea894  pop esi
    X86_AT(c, 0xea894u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ea895  leave 
    X86_AT(c, 0xea895u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ea896  ret 8
    X86_AT(c, 0xea896u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xea848u, "ran off the end of a function");
}
void f_000ea8b4(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0ea8b4  push ebp
    X86_AT(c, 0xea8b4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ea8b5  mov ebp, esp
    X86_AT(c, 0xea8b5u);
    c.r[5] = c.r[4];
    // 0ea8b7  push ecx
    X86_AT(c, 0xea8b7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0ea8b8  test byte ptr [0xc40cc], 1
    X86_AT(c, 0xea8b8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x1u, 1);
    // 0ea8bf  jne 0xea8d5
    X86_AT(c, 0xea8bfu);
    if (x86_cc(c, 5)) { goto L_ea8d5; }
    X86_TICK(c, 12);
    // 0ea8c1  test byte ptr [0xc40cc], 0x10
    X86_AT(c, 0xea8c1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x10u, 1);
    // 0ea8c8  jne 0xea8d5
    X86_AT(c, 0xea8c8u);
    if (x86_cc(c, 5)) { goto L_ea8d5; }
    X86_TICK(c, 15);
    // 0ea8ca  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea8cau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea8cd  mov ecx, dword ptr [eax - 4]
    X86_AT(c, 0xea8cdu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 0ea8d0  call 0xea74c
    X86_AT(c, 0xea8d0u);
    push32(c, 0xea8d5u); x86_call_known(c, 0xea74cu, f_000ea74c); X86_RET(c, 0xea8d5u);
L_ea8d5:
    X86_TICK(c, 11);
    // 0ea8d5  mov eax, dword ptr [0xc4600]
    X86_AT(c, 0xea8d5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4600u)));
    // 0ea8da  and eax, eax
    X86_AT(c, 0xea8dau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ea8dc  je 0xea8f0
    X86_AT(c, 0xea8dcu);
    if (x86_cc(c, 4)) { goto L_ea8f0; }
    X86_TICK(c, 15);
    // 0ea8de  push eax
    X86_AT(c, 0xea8deu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea8df  push 0xc45f8
    X86_AT(c, 0xea8dfu);
    { uint32_t v = 0xC45F8u; push32(c, v); }
    // 0ea8e4  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xea8e4u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0ea8ea  call dword ptr [0xc40e0]
    X86_AT(c, 0xea8eau);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xea8f0u); x86_call(c, t); X86_RET(c, 0xea8f0u); }
L_ea8f0:
    X86_TICK(c, 12);
    // 0ea8f0  test byte ptr [0xc40cc], 1
    X86_AT(c, 0xea8f0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x1u, 1);
    // 0ea8f7  jne 0xea90d
    X86_AT(c, 0xea8f7u);
    if (x86_cc(c, 5)) { goto L_ea90d; }
    X86_TICK(c, 12);
    // 0ea8f9  cmp byte ptr [0xc45fc], 0
    X86_AT(c, 0xea8f9u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC45FCu))), 0x0u, 0, 1);
    // 0ea900  jne 0xea90d
    X86_AT(c, 0xea900u);
    if (x86_cc(c, 5)) { goto L_ea90d; }
    X86_TICK(c, 15);
    // 0ea902  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea902u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea905  mov ecx, dword ptr [eax - 4]
    X86_AT(c, 0xea905u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 0ea908  call 0xea74c
    X86_AT(c, 0xea908u);
    push32(c, 0xea90du); x86_call_known(c, 0xea74cu, f_000ea74c); X86_RET(c, 0xea90du);
L_ea90d:
    X86_TICK(c, 16);
    // 0ea90d  leave 
    X86_AT(c, 0xea90du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ea90e  ret 
    X86_AT(c, 0xea90eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea8b4u, "ran off the end of a function");
}
void f_000ea918(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0ea918  push ebp
    X86_AT(c, 0xea918u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ea919  mov ebp, esp
    X86_AT(c, 0xea919u);
    c.r[5] = c.r[4];
    // 0ea91b  push ecx
    X86_AT(c, 0xea91bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0ea91c  push ebx
    X86_AT(c, 0xea91cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ea91d  push esi
    X86_AT(c, 0xea91du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea91e  push edi
    X86_AT(c, 0xea91eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea91f  cmp dword ptr [0xc4608], 0
    X86_AT(c, 0xea91fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC4608u))), 0x0u, 0, 4);
    // 0ea926  jle 0xeaa57
    X86_AT(c, 0xea926u);
    if (x86_cc(c, 14)) { goto L_eaa57; }
    X86_TICK(c, 12);
    // 0ea92c  cmp byte ptr [0xc461f], 0
    X86_AT(c, 0xea92cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC461Fu))), 0x0u, 0, 1);
    // 0ea933  je 0xea946
    X86_AT(c, 0xea933u);
    if (x86_cc(c, 4)) { goto L_ea946; }
    X86_TICK(c, 8);
    // 0ea935  mov byte ptr [0xc45d8], 0x2e
    X86_AT(c, 0xea935u);
    wr8((c.sbase[3] + (uint32_t)(0xC45D8u)), 0x2Eu);
    // 0ea93c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea93cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea93f  mov dword ptr [eax - 0x10], 1
    X86_AT(c, 0xea93fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)), 0x1u);
L_ea946:
    X86_TICK(c, 11);
    // 0ea946  mov eax, dword ptr [0xc40d4]
    X86_AT(c, 0xea946u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40D4u)));
    // 0ea94b  and eax, eax
    X86_AT(c, 0xea94bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ea94d  je 0xea9c5
    X86_AT(c, 0xea94du);
    if (x86_cc(c, 4)) { goto L_ea9c5; }
    X86_TICK(c, 19);
    // 0ea953  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xea953u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea956  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0xea956u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 0ea959  mov esi, dword ptr [0xc4608]
    X86_AT(c, 0xea959u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xC4608u)));
    // 0ea95f  cmp esi, ecx
    X86_AT(c, 0xea95fu);
    (void)x86_sub(c, c.r[6], c.r[1], 0, 4);
    // 0ea961  jge 0xea99f
    X86_AT(c, 0xea961u);
    if (x86_cc(c, 13)) { goto L_ea99f; }
    X86_TICK(c, 9);
    // 0ea963  sub ecx, esi
    X86_AT(c, 0xea963u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0ea965  cmp ecx, eax
    X86_AT(c, 0xea965u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 0ea967  jb 0xea96b
    X86_AT(c, 0xea967u);
    if (x86_cc(c, 2)) { goto L_ea96b; }
    X86_TICK(c, 2);
    // 0ea969  mov ecx, eax
    X86_AT(c, 0xea969u);
    c.r[1] = c.r[0];
L_ea96b:
    X86_TICK(c, 44);
    // 0ea96b  mov edi, ecx
    X86_AT(c, 0xea96bu);
    c.r[7] = c.r[1];
    // 0ea96d  add esi, 0xc460c
    X86_AT(c, 0xea96du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0xC460Cu, 0, 4); }
    // 0ea973  mov ebx, 0xc45d9
    X86_AT(c, 0xea973u);
    c.r[3] = 0xC45D9u;
    // 0ea978  push edi
    X86_AT(c, 0xea978u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea979  mov edi, ebx
    X86_AT(c, 0xea979u);
    c.r[7] = c.r[3];
    // 0ea97b  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xea97bu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0ea97d  pop edi
    X86_AT(c, 0xea97du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ea97e  lea ecx, [edi + 1]
    X86_AT(c, 0xea97eu);
    c.r[1] = (uint32_t)(c.r[7] + 0x1u);
    // 0ea981  mov dword ptr [edx - 0x10], ecx
    X86_AT(c, 0xea981u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[1]);
    // 0ea984  sub dword ptr [0xc40d4], edi
    X86_AT(c, 0xea984u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40D4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0ea98a  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0xea98au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0ea98e  je 0xea9d8
    X86_AT(c, 0xea98eu);
    if (x86_cc(c, 4)) { goto L_ea9d8; }
    X86_TICK(c, 15);
    // 0ea990  push 1
    X86_AT(c, 0xea990u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ea992  lea eax, [edi + 2]
    X86_AT(c, 0xea992u);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 0ea995  push eax
    X86_AT(c, 0xea995u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea996  mov ecx, edx
    X86_AT(c, 0xea996u);
    c.r[1] = c.r[2];
    // 0ea998  call 0xea848
    X86_AT(c, 0xea998u);
    push32(c, 0xea99du); x86_call_known(c, 0xea848u, f_000ea848); X86_RET(c, 0xea99du);
    X86_TICK(c, 7);
    // 0ea99d  jmp 0xea9d8
    X86_AT(c, 0xea99du);
    goto L_ea9d8;
L_ea99f:
    X86_TICK(c, 16);
    // 0ea99f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea99fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea9a2  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0xea9a2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0ea9a6  je 0xea9d8
    X86_AT(c, 0xea9a6u);
    if (x86_cc(c, 4)) { goto L_ea9d8; }
    X86_TICK(c, 12);
    // 0ea9a8  test byte ptr [0xc40cc], 8
    X86_AT(c, 0xea9a8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x8u, 1);
    // 0ea9af  jne 0xea9d8
    X86_AT(c, 0xea9afu);
    if (x86_cc(c, 5)) { goto L_ea9d8; }
    X86_TICK(c, 12);
    // 0ea9b1  cmp dword ptr [0xc40d0], 0xffff
    X86_AT(c, 0xea9b1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC40D0u))), 0xFFFFu, 0, 4);
    // 0ea9bb  je 0xea9ce
    X86_AT(c, 0xea9bbu);
    if (x86_cc(c, 4)) { goto L_ea9ce; }
    X86_TICK(c, 13);
    // 0ea9bd  dec dword ptr [0xc4604]
    X86_AT(c, 0xea9bdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC4604u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ea9c3  jmp 0xea9ce
    X86_AT(c, 0xea9c3u);
    goto L_ea9ce;
L_ea9c5:
    X86_TICK(c, 12);
    // 0ea9c5  test byte ptr [0xc40cc], 8
    X86_AT(c, 0xea9c5u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x8u, 1);
    // 0ea9cc  jne 0xea9d8
    X86_AT(c, 0xea9ccu);
    if (x86_cc(c, 5)) { goto L_ea9d8; }
L_ea9ce:
    X86_TICK(c, 6);
    // 0ea9ce  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea9ceu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea9d1  mov dword ptr [eax - 0x10], 0
    X86_AT(c, 0xea9d1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)), 0x0u);
L_ea9d8:
    X86_TICK(c, 13);
    // 0ea9d8  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xea9d8u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea9db  mov ebx, ecx
    X86_AT(c, 0xea9dbu);
    c.r[3] = c.r[1];
    // 0ea9dd  call 0xea8b4
    X86_AT(c, 0xea9ddu);
    push32(c, 0xea9e2u); x86_call_known(c, 0xea8b4u, f_000ea8b4); X86_RET(c, 0xea9e2u);
    X86_TICK(c, 15);
    // 0ea9e2  mov eax, dword ptr [ebx - 8]
    X86_AT(c, 0xea9e2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF8u)));
    // 0ea9e5  mov edx, dword ptr [0xc4608]
    X86_AT(c, 0xea9e5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC4608u)));
    // 0ea9eb  cmp edx, eax
    X86_AT(c, 0xea9ebu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0ea9ed  jl 0xea9f0
    X86_AT(c, 0xea9edu);
    if (x86_cc(c, 12)) { goto L_ea9f0; }
    X86_TICK(c, 3);
    // 0ea9ef  xchg edx, eax
    X86_AT(c, 0xea9efu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_ea9f0:
    X86_TICK(c, 15);
    // 0ea9f0  push edx
    X86_AT(c, 0xea9f0u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ea9f1  push 0xc460c
    X86_AT(c, 0xea9f1u);
    { uint32_t v = 0xC460Cu; push32(c, v); }
    // 0ea9f6  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xea9f6u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0ea9fc  call dword ptr [0xc40e0]
    X86_AT(c, 0xea9fcu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xeaa02u); x86_call(c, t); X86_RET(c, 0xeaa02u); }
    X86_TICK(c, 15);
    // 0eaa02  mov eax, dword ptr [ebx - 8]
    X86_AT(c, 0xeaa02u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF8u)));
    // 0eaa05  mov edx, dword ptr [0xc4608]
    X86_AT(c, 0xeaa05u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC4608u)));
    // 0eaa0b  cmp edx, eax
    X86_AT(c, 0xeaa0bu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0eaa0d  jle 0xeaa1c
    X86_AT(c, 0xeaa0du);
    if (x86_cc(c, 14)) { goto L_eaa1c; }
    X86_TICK(c, 13);
    // 0eaa0f  sub edx, eax
    X86_AT(c, 0xeaa0fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eaa11  push edx
    X86_AT(c, 0xeaa11u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0eaa12  push 0xc40e8
    X86_AT(c, 0xeaa12u);
    { uint32_t v = 0xC40E8u; push32(c, v); }
    // 0eaa17  call 0xe8658
    X86_AT(c, 0xeaa17u);
    push32(c, 0xeaa1cu); x86_call_known(c, 0xe8658u, f_000e8658); X86_RET(c, 0xeaa1cu);
L_eaa1c:
    X86_TICK(c, 15);
    // 0eaa1c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xeaa1cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eaa1f  mov eax, dword ptr [eax - 0x10]
    X86_AT(c, 0xeaa1fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF0u)));
    // 0eaa22  and eax, eax
    X86_AT(c, 0xeaa22u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0eaa24  je 0xeaa38
    X86_AT(c, 0xeaa24u);
    if (x86_cc(c, 4)) { goto L_eaa38; }
    X86_TICK(c, 15);
    // 0eaa26  push eax
    X86_AT(c, 0xeaa26u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaa27  push 0xc45d8
    X86_AT(c, 0xeaa27u);
    { uint32_t v = 0xC45D8u; push32(c, v); }
    // 0eaa2c  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xeaa2cu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0eaa32  call dword ptr [0xc40e0]
    X86_AT(c, 0xeaa32u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xeaa38u); x86_call(c, t); X86_RET(c, 0xeaa38u); }
L_eaa38:
    X86_TICK(c, 11);
    // 0eaa38  mov eax, dword ptr [0xc40d4]
    X86_AT(c, 0xeaa38u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40D4u)));
    // 0eaa3d  and eax, eax
    X86_AT(c, 0xeaa3du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0eaa3f  je 0xeab9b
    X86_AT(c, 0xeaa3fu);
    if (x86_cc(c, 4)) { goto L_eab9b; }
    X86_TICK(c, 16);
    // 0eaa45  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xeaa45u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eaa48  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0xeaa48u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0eaa4c  jne 0xeab9b
    X86_AT(c, 0xeaa4cu);
    if (x86_cc(c, 5)) { goto L_eab9b; }
    X86_TICK(c, 7);
    // 0eaa52  jmp 0xeab90
    X86_AT(c, 0xeaa52u);
    goto L_eab90;
L_eaa57:
    X86_TICK(c, 11);
    // 0eaa57  mov eax, dword ptr [0xc4608]
    X86_AT(c, 0xeaa57u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4608u)));
    // 0eaa5c  and eax, eax
    X86_AT(c, 0xeaa5cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0eaa5e  jge 0xeaa62
    X86_AT(c, 0xeaa5eu);
    if (x86_cc(c, 13)) { goto L_eaa62; }
    X86_TICK(c, 2);
    // 0eaa60  neg eax
    X86_AT(c, 0xeaa60u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_eaa62:
    X86_TICK(c, 13);
    // 0eaa62  mov dword ptr [0xc4608], eax
    X86_AT(c, 0xeaa62u);
    wr32((c.sbase[3] + (uint32_t)(0xC4608u)), c.r[0]);
    // 0eaa67  mov edx, dword ptr [0xc40d4]
    X86_AT(c, 0xeaa67u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC40D4u)));
    // 0eaa6d  and edx, edx
    X86_AT(c, 0xeaa6du);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0eaa6f  je 0xeaaa1
    X86_AT(c, 0xeaa6fu);
    if (x86_cc(c, 4)) { goto L_eaaa1; }
    X86_TICK(c, 7);
    // 0eaa71  cmp edx, eax
    X86_AT(c, 0xeaa71u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0eaa73  jle 0xeaa98
    X86_AT(c, 0xeaa73u);
    if (x86_cc(c, 14)) { goto L_eaa98; }
    X86_TICK(c, 21);
    // 0eaa75  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xeaa75u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eaa78  mov eax, dword ptr [eax - 4]
    X86_AT(c, 0xeaa78u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)));
    // 0eaa7b  add eax, 8
    X86_AT(c, 0xeaa7bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8u, 0, 4); }
    // 0eaa7e  push eax
    X86_AT(c, 0xeaa7eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaa7f  mov ebx, eax
    X86_AT(c, 0xeaa7fu);
    c.r[3] = c.r[0];
    // 0eaa81  call 0xea10c
    X86_AT(c, 0xeaa81u);
    push32(c, 0xeaa86u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xeaa86u);
    X86_TICK(c, 12);
    // 0eaa86  push dword ptr [0xffe8]
    X86_AT(c, 0xeaa86u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xFFE8u))); push32(c, v); }
    // 0eaa8c  call 0xeb3ac
    X86_AT(c, 0xeaa8cu);
    push32(c, 0xeaa91u); x86_call_known(c, 0xeb3acu, f_000eb3ac); X86_RET(c, 0xeaa91u);
    X86_TICK(c, 7);
    // 0eaa91  call 0xea330
    X86_AT(c, 0xeaa91u);
    push32(c, 0xeaa96u); x86_call_known(c, 0xea330u, f_000ea330); X86_RET(c, 0xeaa96u);
    X86_TICK(c, 5);
    // 0eaa96  jne 0xeaaf5
    X86_AT(c, 0xeaa96u);
    if (x86_cc(c, 5)) { goto L_eaaf5; }
L_eaa98:
    X86_TICK(c, 16);
    // 0eaa98  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xeaa98u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eaa9b  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0xeaa9bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0eaa9f  je 0xeaad4
    X86_AT(c, 0xeaa9fu);
    if (x86_cc(c, 4)) { goto L_eaad4; }
L_eaaa1:
    X86_TICK(c, 12);
    // 0eaaa1  test byte ptr [0xc40cc], 8
    X86_AT(c, 0xeaaa1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x8u, 1);
    // 0eaaa8  jne 0xeaac8
    X86_AT(c, 0xeaaa8u);
    if (x86_cc(c, 5)) { goto L_eaac8; }
    X86_TICK(c, 13);
    // 0eaaaa  mov dword ptr [0xc4604], 1
    X86_AT(c, 0xeaaaau);
    wr32((c.sbase[3] + (uint32_t)(0xC4604u)), 0x1u);
    // 0eaab4  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xeaab4u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eaab7  call 0xea8b4
    X86_AT(c, 0xeaab7u);
    push32(c, 0xeaabcu); x86_call_known(c, 0xea8b4u, f_000ea8b4); X86_RET(c, 0xeaabcu);
    X86_TICK(c, 11);
    // 0eaabc  push 1
    X86_AT(c, 0xeaabcu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eaabe  push 0x10004
    X86_AT(c, 0xeaabeu);
    { uint32_t v = 0x10004u; push32(c, v); }
    // 0eaac3  jmp 0xeab72
    X86_AT(c, 0xeaac3u);
    goto L_eab72;
L_eaac8:
    X86_TICK(c, 9);
    // 0eaac8  mov dword ptr [0xc4604], 2
    X86_AT(c, 0xeaac8u);
    wr32((c.sbase[3] + (uint32_t)(0xC4604u)), 0x2u);
    // 0eaad2  jmp 0xeaae1
    X86_AT(c, 0xeaad2u);
    goto L_eaae1;
L_eaad4:
    X86_TICK(c, 8);
    // 0eaad4  mov eax, dword ptr [0xc40d4]
    X86_AT(c, 0xeaad4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40D4u)));
    // 0eaad9  add eax, 2
    X86_AT(c, 0xeaad9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0eaadc  mov dword ptr [0xc4604], eax
    X86_AT(c, 0xeaadcu);
    wr32((c.sbase[3] + (uint32_t)(0xC4604u)), c.r[0]);
L_eaae1:
    X86_TICK(c, 11);
    // 0eaae1  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xeaae1u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eaae4  call 0xea8b4
    X86_AT(c, 0xeaae4u);
    push32(c, 0xeaae9u); x86_call_known(c, 0xea8b4u, f_000ea8b4); X86_RET(c, 0xeaae9u);
    X86_TICK(c, 11);
    // 0eaae9  push 2
    X86_AT(c, 0xeaae9u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eaaeb  push 0x10006
    X86_AT(c, 0xeaaebu);
    { uint32_t v = 0x10006u; push32(c, v); }
    // 0eaaf0  jmp 0xeab72
    X86_AT(c, 0xeaaf0u);
    goto L_eab72;
L_eaaf5:
    X86_TICK(c, 30);
    // 0eaaf5  mov eax, dword ptr [0xc4608]
    X86_AT(c, 0xeaaf5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4608u)));
    // 0eaafa  sub dword ptr [0xc40d4], eax
    X86_AT(c, 0xeaafau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40D4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0eab00  mov eax, dword ptr [0xc40d4]
    X86_AT(c, 0xeab00u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40D4u)));
    // 0eab05  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xeab05u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eab08  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0xeab08u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 0eab0b  cmp ecx, eax
    X86_AT(c, 0xeab0bu);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 0eab0d  jb 0xeab11
    X86_AT(c, 0xeab0du);
    if (x86_cc(c, 2)) { goto L_eab11; }
    X86_TICK(c, 2);
    // 0eab0f  mov ecx, eax
    X86_AT(c, 0xeab0fu);
    c.r[1] = c.r[0];
L_eab11:
    X86_TICK(c, 40);
    // 0eab11  mov edi, ecx
    X86_AT(c, 0xeab11u);
    c.r[7] = c.r[1];
    // 0eab13  mov esi, 0xc460c
    X86_AT(c, 0xeab13u);
    c.r[6] = 0xC460Cu;
    // 0eab18  push edi
    X86_AT(c, 0xeab18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eab19  mov edi, 0xc45d8
    X86_AT(c, 0xeab19u);
    c.r[7] = 0xC45D8u;
    // 0eab1e  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xeab1eu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0eab20  pop edi
    X86_AT(c, 0xeab20u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eab21  sub dword ptr [0xc40d4], edi
    X86_AT(c, 0xeab21u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40D4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0eab27  mov dword ptr [edx - 0x10], edi
    X86_AT(c, 0xeab27u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[7]);
    // 0eab2a  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0xeab2au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0eab2e  je 0xeab3d
    X86_AT(c, 0xeab2eu);
    if (x86_cc(c, 4)) { goto L_eab3d; }
    X86_TICK(c, 15);
    // 0eab30  push 1
    X86_AT(c, 0xeab30u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0eab32  lea eax, [edi + 1]
    X86_AT(c, 0xeab32u);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0eab35  push eax
    X86_AT(c, 0xeab35u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eab36  mov ecx, edx
    X86_AT(c, 0xeab36u);
    c.r[1] = c.r[2];
    // 0eab38  call 0xea848
    X86_AT(c, 0xeab38u);
    push32(c, 0xeab3du); x86_call_known(c, 0xea848u, f_000ea848); X86_RET(c, 0xeab3du);
L_eab3d:
    X86_TICK(c, 13);
    // 0eab3d  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xeab3du);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eab40  mov ebx, ecx
    X86_AT(c, 0xeab40u);
    c.r[3] = c.r[1];
    // 0eab42  call 0xea8b4
    X86_AT(c, 0xeab42u);
    push32(c, 0xeab47u); x86_call_known(c, 0xea8b4u, f_000ea8b4); X86_RET(c, 0xeab47u);
    X86_TICK(c, 15);
    // 0eab47  push 2
    X86_AT(c, 0xeab47u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eab49  push 0x10006
    X86_AT(c, 0xeab49u);
    { uint32_t v = 0x10006u; push32(c, v); }
    // 0eab4e  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xeab4eu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0eab54  call dword ptr [0xc40e0]
    X86_AT(c, 0xeab54u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xeab5au); x86_call(c, t); X86_RET(c, 0xeab5au); }
    X86_TICK(c, 14);
    // 0eab5a  push dword ptr [0xc4608]
    X86_AT(c, 0xeab5au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC4608u))); push32(c, v); }
    // 0eab60  push 0xc40e8
    X86_AT(c, 0xeab60u);
    { uint32_t v = 0xC40E8u; push32(c, v); }
    // 0eab65  call 0xe8658
    X86_AT(c, 0xeab65u);
    push32(c, 0xeab6au); x86_call_known(c, 0xe8658u, f_000e8658); X86_RET(c, 0xeab6au);
    X86_TICK(c, 7);
    // 0eab6a  push dword ptr [ebx - 0x10]
    X86_AT(c, 0xeab6au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF0u))); push32(c, v); }
    // 0eab6d  push 0xc45d8
    X86_AT(c, 0xeab6du);
    { uint32_t v = 0xC45D8u; push32(c, v); }
L_eab72:
    X86_TICK(c, 11);
    // 0eab72  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xeab72u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0eab78  call dword ptr [0xc40e0]
    X86_AT(c, 0xeab78u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xeab7eu); x86_call(c, t); X86_RET(c, 0xeab7eu); }
    X86_TICK(c, 16);
    // 0eab7e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xeab7eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eab81  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0xeab81u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0eab85  jne 0xeab9b
    X86_AT(c, 0xeab85u);
    if (x86_cc(c, 5)) { goto L_eab9b; }
    X86_TICK(c, 11);
    // 0eab87  mov eax, dword ptr [0xc40d4]
    X86_AT(c, 0xeab87u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40D4u)));
    // 0eab8c  and eax, eax
    X86_AT(c, 0xeab8cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0eab8e  je 0xeab9b
    X86_AT(c, 0xeab8eu);
    if (x86_cc(c, 4)) { goto L_eab9b; }
L_eab90:
    X86_TICK(c, 11);
    // 0eab90  push eax
    X86_AT(c, 0xeab90u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eab91  push 0xc40e8
    X86_AT(c, 0xeab91u);
    { uint32_t v = 0xC40E8u; push32(c, v); }
    // 0eab96  call 0xe8658
    X86_AT(c, 0xeab96u);
    push32(c, 0xeab9bu); x86_call_known(c, 0xe8658u, f_000e8658); X86_RET(c, 0xeab9bu);
L_eab9b:
    X86_TICK(c, 28);
    // 0eab9b  pop edi
    X86_AT(c, 0xeab9bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eab9c  pop esi
    X86_AT(c, 0xeab9cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eab9d  pop ebx
    X86_AT(c, 0xeab9du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0eab9e  leave 
    X86_AT(c, 0xeab9eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eab9f  ret 
    X86_AT(c, 0xeab9fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea918u, "ran off the end of a function");
}
void f_000eab72(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0eab72  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xeab72u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0eab78  call dword ptr [0xc40e0]
    X86_AT(c, 0xeab78u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xeab7eu); x86_call(c, t); X86_RET(c, 0xeab7eu); }
    X86_TICK(c, 16);
    // 0eab7e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xeab7eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eab81  cmp byte ptr [eax - 9], 0
    X86_AT(c, 0xeab81u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0eab85  jne 0xeab9b
    X86_AT(c, 0xeab85u);
    if (x86_cc(c, 5)) { goto L_eab9b; }
    X86_TICK(c, 11);
    // 0eab87  mov eax, dword ptr [0xc40d4]
    X86_AT(c, 0xeab87u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40D4u)));
    // 0eab8c  and eax, eax
    X86_AT(c, 0xeab8cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0eab8e  je 0xeab9b
    X86_AT(c, 0xeab8eu);
    if (x86_cc(c, 4)) { goto L_eab9b; }
    X86_TICK(c, 11);
    // 0eab90  push eax
    X86_AT(c, 0xeab90u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eab91  push 0xc40e8
    X86_AT(c, 0xeab91u);
    { uint32_t v = 0xC40E8u; push32(c, v); }
    // 0eab96  call 0xe8658
    X86_AT(c, 0xeab96u);
    push32(c, 0xeab9bu); x86_call_known(c, 0xe8658u, f_000e8658); X86_RET(c, 0xeab9bu);
L_eab9b:
    X86_TICK(c, 28);
    // 0eab9b  pop edi
    X86_AT(c, 0xeab9bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eab9c  pop esi
    X86_AT(c, 0xeab9cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eab9d  pop ebx
    X86_AT(c, 0xeab9du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0eab9e  leave 
    X86_AT(c, 0xeab9eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eab9f  ret 
    X86_AT(c, 0xeab9fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeab72u, "ran off the end of a function");
}
void f_000eaba8(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0eaba8  push ebp
    X86_AT(c, 0xeaba8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0eaba9  mov ebp, esp
    X86_AT(c, 0xeaba9u);
    c.r[5] = c.r[4];
    // 0eabab  push ecx
    X86_AT(c, 0xeababu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0eabac  sub esp, 0xc
    X86_AT(c, 0xeabacu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0eabaf  push ebx
    X86_AT(c, 0xeabafu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eabb0  push esi
    X86_AT(c, 0xeabb0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eabb1  push edi
    X86_AT(c, 0xeabb1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eabb2  mov edi, 1
    X86_AT(c, 0xeabb2u);
    c.r[7] = 0x1u;
    // 0eabb7  mov al, byte ptr [0xc460c]
    X86_AT(c, 0xeabb7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC460Cu))));
    // 0eabbc  mov byte ptr [edi + 0xc45d7], al
    X86_AT(c, 0xeabbcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xC45D7u)), g8(c, 0));
    // 0eabc2  cmp byte ptr [0xc461f], 0
    X86_AT(c, 0xeabc2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC461Fu))), 0x0u, 0, 1);
    // 0eabc9  je 0xeabd8
    X86_AT(c, 0xeabc9u);
    if (x86_cc(c, 4)) { goto L_eabd8; }
    X86_TICK(c, 10);
    // 0eabcb  mov dword ptr [ebp - 0x10], edi
    X86_AT(c, 0xeabcbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[7]);
    // 0eabce  add edi, dword ptr [ebp - 0x10]
    X86_AT(c, 0xeabceu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 0eabd1  mov byte ptr [edi + 0xc45d7], 0x2e
    X86_AT(c, 0xeabd1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xC45D7u)), 0x2Eu);
L_eabd8:
    X86_TICK(c, 13);
    // 0eabd8  inc edi
    X86_AT(c, 0xeabd8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0eabd9  mov eax, dword ptr [0xc40d4]
    X86_AT(c, 0xeabd9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40D4u)));
    // 0eabde  and eax, eax
    X86_AT(c, 0xeabdeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0eabe0  je 0xeac62
    X86_AT(c, 0xeabe0u);
    if (x86_cc(c, 4)) { goto L_eac62; }
    X86_TICK(c, 15);
    // 0eabe6  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xeabe6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eabe9  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0xeabe9u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 0eabec  cmp ecx, eax
    X86_AT(c, 0xeabecu);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 0eabee  jb 0xeabf2
    X86_AT(c, 0xeabeeu);
    if (x86_cc(c, 2)) { goto L_eabf2; }
    X86_TICK(c, 2);
    // 0eabf0  mov ecx, eax
    X86_AT(c, 0xeabf0u);
    c.r[1] = c.r[0];
L_eabf2:
    X86_TICK(c, 54);
    // 0eabf2  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0xeabf2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 0eabf5  mov esi, 0xc460d
    X86_AT(c, 0xeabf5u);
    c.r[6] = 0xC460Du;
    // 0eabfa  lea ebx, [edi + 0xc45d7]
    X86_AT(c, 0xeabfau);
    c.r[3] = (uint32_t)(c.r[7] + 0xC45D7u);
    // 0eac00  push edi
    X86_AT(c, 0xeac00u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eac01  mov edi, ebx
    X86_AT(c, 0xeac01u);
    c.r[7] = c.r[3];
    // 0eac03  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xeac03u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0eac05  pop edi
    X86_AT(c, 0xeac05u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eac06  add edi, dword ptr [ebp - 8]
    X86_AT(c, 0xeac06u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0eac09  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xeac09u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0eac0c  sub dword ptr [0xc40d4], eax
    X86_AT(c, 0xeac0cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40D4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0eac12  lea eax, [edi - 1]
    X86_AT(c, 0xeac12u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 0eac15  mov dword ptr [edx - 0x10], eax
    X86_AT(c, 0xeac15u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[0]);
    // 0eac18  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0xeac18u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0eac1c  je 0xeac28
    X86_AT(c, 0xeac1cu);
    if (x86_cc(c, 4)) { goto L_eac28; }
    X86_TICK(c, 13);
    // 0eac1e  push 2
    X86_AT(c, 0xeac1eu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eac20  push edi
    X86_AT(c, 0xeac20u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eac21  mov ecx, edx
    X86_AT(c, 0xeac21u);
    c.r[1] = c.r[2];
    // 0eac23  call 0xea848
    X86_AT(c, 0xeac23u);
    push32(c, 0xeac28u); x86_call_known(c, 0xea848u, f_000ea848); X86_RET(c, 0xeac28u);
L_eac28:
    X86_TICK(c, 13);
    // 0eac28  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xeac28u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eac2b  mov ebx, ecx
    X86_AT(c, 0xeac2bu);
    c.r[3] = c.r[1];
    // 0eac2d  call 0xea8b4
    X86_AT(c, 0xeac2du);
    push32(c, 0xeac32u); x86_call_known(c, 0xea8b4u, f_000ea8b4); X86_RET(c, 0xeac32u);
    X86_TICK(c, 18);
    // 0eac32  push dword ptr [ebx - 0x10]
    X86_AT(c, 0xeac32u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF0u))); push32(c, v); }
    // 0eac35  push 0xc45d8
    X86_AT(c, 0xeac35u);
    { uint32_t v = 0xC45D8u; push32(c, v); }
    // 0eac3a  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xeac3au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0eac40  call dword ptr [0xc40e0]
    X86_AT(c, 0xeac40u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xeac46u); x86_call(c, t); X86_RET(c, 0xeac46u); }
    X86_TICK(c, 12);
    // 0eac46  cmp byte ptr [ebx - 9], 0
    X86_AT(c, 0xeac46u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0eac4a  jne 0xeac7f
    X86_AT(c, 0xeac4au);
    if (x86_cc(c, 5)) { goto L_eac7f; }
    X86_TICK(c, 11);
    // 0eac4c  mov eax, dword ptr [0xc40d4]
    X86_AT(c, 0xeac4cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40D4u)));
    // 0eac51  and eax, eax
    X86_AT(c, 0xeac51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0eac53  je 0xeac7f
    X86_AT(c, 0xeac53u);
    if (x86_cc(c, 4)) { goto L_eac7f; }
    X86_TICK(c, 11);
    // 0eac55  push eax
    X86_AT(c, 0xeac55u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eac56  push 0xc40e8
    X86_AT(c, 0xeac56u);
    { uint32_t v = 0xC40E8u; push32(c, v); }
    // 0eac5b  call 0xe8658
    X86_AT(c, 0xeac5bu);
    push32(c, 0xeac60u); x86_call_known(c, 0xe8658u, f_000e8658); X86_RET(c, 0xeac60u);
    X86_TICK(c, 7);
    // 0eac60  jmp 0xeac7f
    X86_AT(c, 0xeac60u);
    goto L_eac7f;
L_eac62:
    X86_TICK(c, 11);
    // 0eac62  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0xeac62u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eac65  call 0xea8b4
    X86_AT(c, 0xeac65u);
    push32(c, 0xeac6au); x86_call_known(c, 0xea8b4u, f_000ea8b4); X86_RET(c, 0xeac6au);
    X86_TICK(c, 17);
    // 0eac6a  lea eax, [edi - 1]
    X86_AT(c, 0xeac6au);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 0eac6d  push eax
    X86_AT(c, 0xeac6du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eac6e  push 0xc45d8
    X86_AT(c, 0xeac6eu);
    { uint32_t v = 0xC45D8u; push32(c, v); }
    // 0eac73  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xeac73u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0eac79  call dword ptr [0xc40e0]
    X86_AT(c, 0xeac79u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xeac7fu); x86_call(c, t); X86_RET(c, 0xeac7fu); }
L_eac7f:
    X86_TICK(c, 11);
    // 0eac7f  mov eax, dword ptr [0xc4608]
    X86_AT(c, 0xeac7fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4608u)));
    // 0eac84  and eax, eax
    X86_AT(c, 0xeac84u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0eac86  jg 0xeac9a
    X86_AT(c, 0xeac86u);
    if (x86_cc(c, 15)) { goto L_eac9a; }
    X86_TICK(c, 9);
    // 0eac88  mov byte ptr [ebp - 9], 0x2d
    X86_AT(c, 0xeac88u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x2Du);
    // 0eac8c  and eax, eax
    X86_AT(c, 0xeac8cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0eac8e  jge 0xeac92
    X86_AT(c, 0xeac8eu);
    if (x86_cc(c, 13)) { goto L_eac92; }
    X86_TICK(c, 2);
    // 0eac90  neg eax
    X86_AT(c, 0xeac90u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_eac92:
    X86_TICK(c, 11);
    // 0eac92  inc eax
    X86_AT(c, 0xeac92u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0eac93  mov dword ptr [0xc4608], eax
    X86_AT(c, 0xeac93u);
    wr32((c.sbase[3] + (uint32_t)(0xC4608u)), c.r[0]);
    // 0eac98  jmp 0xeaca4
    X86_AT(c, 0xeac98u);
    goto L_eaca4;
L_eac9a:
    X86_TICK(c, 8);
    // 0eac9a  mov byte ptr [ebp - 9], 0x2b
    X86_AT(c, 0xeac9au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x2Bu);
    // 0eac9e  dec dword ptr [0xc4608]
    X86_AT(c, 0xeac9eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC4608u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_eaca4:
    X86_TICK(c, 11);
    // 0eaca4  mov ebx, 0x1f
    X86_AT(c, 0xeaca4u);
    c.r[3] = 0x1Fu;
    // 0eaca9  sub esi, esi
    X86_AT(c, 0xeaca9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0eacab  jmp 0xeacd1
    X86_AT(c, 0xeacabu);
    goto L_eacd1;
L_eacad:
    X86_TICK(c, 55);
    // 0eacad  mov eax, dword ptr [0xc4608]
    X86_AT(c, 0xeacadu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4608u)));
    // 0eacb2  cdq 
    X86_AT(c, 0xeacb2u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0eacb3  mov ecx, 0xa
    X86_AT(c, 0xeacb3u);
    c.r[1] = 0xAu;
    // 0eacb8  idiv ecx
    X86_AT(c, 0xeacb8u);
    x86_idiv(c, c.r[1], 4, 0xeacb8u);
    // 0eacba  and edx, edx
    X86_AT(c, 0xeacbau);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0eacbc  jge 0xeacc0
    X86_AT(c, 0xeacbcu);
    if (x86_cc(c, 13)) { goto L_eacc0; }
    X86_TICK(c, 2);
    // 0eacbe  add edx, ecx
    X86_AT(c, 0xeacbeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
L_eacc0:
    X86_TICK(c, 10);
    // 0eacc0  add dx, 0x30
    X86_AT(c, 0xeacc0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x30u, 0, 2)); }
    // 0eacc4  mov byte ptr [ebx + 0xc45d7], dl
    X86_AT(c, 0xeacc4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xC45D7u)), g8(c, 2));
    // 0eacca  mov dword ptr [0xc4608], eax
    X86_AT(c, 0xeaccau);
    wr32((c.sbase[3] + (uint32_t)(0xC4608u)), c.r[0]);
    // 0eaccf  dec ebx
    X86_AT(c, 0xeaccfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0eacd0  inc esi
    X86_AT(c, 0xeacd0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_eacd1:
    X86_TICK(c, 12);
    // 0eacd1  cmp dword ptr [0xc4608], 0
    X86_AT(c, 0xeacd1u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC4608u))), 0x0u, 0, 4);
    // 0eacd8  jg 0xeacad
    X86_AT(c, 0xeacd8u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xeacadu); goto L_eacad; }
    X86_TICK(c, 7);
    // 0eacda  cmp esi, 2
    X86_AT(c, 0xeacdau);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 0eacdd  jl 0xeacad
    X86_AT(c, 0xeacddu);
    if (x86_cc(c, 12)) { X86_POLL(c, 0xeacadu); goto L_eacad; }
    X86_TICK(c, 35);
    // 0eacdf  mov al, byte ptr [ebp - 9]
    X86_AT(c, 0xeacdfu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))));
    // 0eace2  mov byte ptr [ebx + 0xc45d7], al
    X86_AT(c, 0xeace2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xC45D7u)), g8(c, 0));
    // 0eace8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xeace8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0eaceb  mov al, byte ptr [eax + 8]
    X86_AT(c, 0xeacebu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))));
    // 0eacee  mov byte ptr [ebx + 0xc45d6], al
    X86_AT(c, 0xeaceeu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xC45D6u)), g8(c, 0));
    // 0eacf4  lea eax, [esi + 2]
    X86_AT(c, 0xeacf4u);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 0eacf7  push eax
    X86_AT(c, 0xeacf7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eacf8  lea eax, [ebx + 0xc45d6]
    X86_AT(c, 0xeacf8u);
    c.r[0] = (uint32_t)(c.r[3] + 0xC45D6u);
    // 0eacfe  push eax
    X86_AT(c, 0xeacfeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eacff  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xeacffu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0ead05  call dword ptr [0xc40e0]
    X86_AT(c, 0xead05u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xead0bu); x86_call(c, t); X86_RET(c, 0xead0bu); }
    X86_TICK(c, 28);
    // 0ead0b  pop edi
    X86_AT(c, 0xead0bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ead0c  pop esi
    X86_AT(c, 0xead0cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ead0d  pop ebx
    X86_AT(c, 0xead0du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ead0e  leave 
    X86_AT(c, 0xead0eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ead0f  ret 
    X86_AT(c, 0xead0fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeaba8u, "ran off the end of a function");
}
void f_000ead28(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0ead28  push ebp
    X86_AT(c, 0xead28u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ead29  mov ebp, esp
    X86_AT(c, 0xead29u);
    c.r[5] = c.r[4];
    // 0ead2b  push ecx
    X86_AT(c, 0xead2bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0ead2c  sub esp, 0xc
    X86_AT(c, 0xead2cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0ead2f  mov byte ptr [ebp - 9], 0
    X86_AT(c, 0xead2fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x0u);
    // 0ead33  cmp byte ptr [0xc40d8], 3
    X86_AT(c, 0xead33u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC40D8u))), 0x3u, 0, 1);
    // 0ead3a  jne 0xead45
    X86_AT(c, 0xead3au);
    if (x86_cc(c, 5)) { goto L_ead45; }
    X86_TICK(c, 9);
    // 0ead3c  mov dword ptr [ebp - 8], 0x12
    X86_AT(c, 0xead3cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x12u);
    // 0ead43  jmp 0xead4c
    X86_AT(c, 0xead43u);
    goto L_ead4c;
L_ead45:
    X86_TICK(c, 2);
    // 0ead45  mov dword ptr [ebp - 8], 0x10
    X86_AT(c, 0xead45u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x10u);
L_ead4c:
    X86_TICK(c, 13);
    // 0ead4c  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0xead4cu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ead50  cmp eax, 0x45
    X86_AT(c, 0xead50u);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 0ead53  je 0xeada4
    X86_AT(c, 0xead53u);
    if (x86_cc(c, 4)) { goto L_eada4; }
    X86_TICK(c, 7);
    // 0ead55  cmp eax, 0x47
    X86_AT(c, 0xead55u);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 0ead58  je 0xead71
    X86_AT(c, 0xead58u);
    if (x86_cc(c, 4)) { goto L_ead71; }
    X86_TICK(c, 7);
    // 0ead5a  cmp eax, 0x65
    X86_AT(c, 0xead5au);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 0ead5d  je 0xeada4
    X86_AT(c, 0xead5du);
    if (x86_cc(c, 4)) { goto L_eada4; }
    X86_TICK(c, 7);
    // 0ead5f  cmp eax, 0x66
    X86_AT(c, 0xead5fu);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 0ead62  je 0xeadd3
    X86_AT(c, 0xead62u);
    if (x86_cc(c, 4)) { goto L_eadd3; }
    X86_TICK(c, 7);
    // 0ead68  cmp eax, 0x67
    X86_AT(c, 0xead68u);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 0ead6b  jne 0xeadda
    X86_AT(c, 0xead6bu);
    if (x86_cc(c, 5)) { goto L_eadda; }
L_ead71:
    X86_TICK(c, 12);
    // 0ead71  cmp dword ptr [0xc40d4], 0
    X86_AT(c, 0xead71u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC40D4u))), 0x0u, 0, 4);
    // 0ead78  je 0xeadda
    X86_AT(c, 0xead78u);
    if (x86_cc(c, 4)) { goto L_eadda; }
    X86_TICK(c, 12);
    // 0ead7a  test byte ptr [0xc40cc], 8
    X86_AT(c, 0xead7au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x8u, 1);
    // 0ead81  jne 0xead87
    X86_AT(c, 0xead81u);
    if (x86_cc(c, 5)) { goto L_ead87; }
    X86_TICK(c, 2);
    // 0ead83  mov byte ptr [ebp - 9], 1
    X86_AT(c, 0xead83u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x1u);
L_ead87:
    X86_TICK(c, 13);
    // 0ead87  mov eax, dword ptr [0xc4608]
    X86_AT(c, 0xead87u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4608u)));
    // 0ead8c  dec eax
    X86_AT(c, 0xead8cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0ead8d  cmp eax, 0xfffffffc
    X86_AT(c, 0xead8du);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFCu, 0, 4);
    // 0ead90  jl 0xead9a
    X86_AT(c, 0xead90u);
    if (x86_cc(c, 12)) { goto L_ead9a; }
    X86_TICK(c, 11);
    // 0ead92  cmp eax, dword ptr [0xc40d4]
    X86_AT(c, 0xead92u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xC40D4u))), 0, 4);
    // 0ead98  jle 0xeadad
    X86_AT(c, 0xead98u);
    if (x86_cc(c, 14)) { goto L_eadad; }
L_ead9a:
    X86_TICK(c, 13);
    // 0ead9a  sub byte ptr [ebp + 8], 2
    X86_AT(c, 0xead9au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, 0x2u, 0, 1)); }
    // 0ead9e  dec dword ptr [0xc40d4]
    X86_AT(c, 0xead9eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40D4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_eada4:
    X86_TICK(c, 9);
    // 0eada4  mov ecx, ebp
    X86_AT(c, 0xeada4u);
    c.r[1] = c.r[5];
    // 0eada6  call 0xeaba8
    X86_AT(c, 0xeada6u);
    push32(c, 0xeadabu); x86_call_known(c, 0xeaba8u, f_000eaba8); X86_RET(c, 0xeadabu);
    X86_TICK(c, 7);
    // 0eadab  jmp 0xeadda
    X86_AT(c, 0xeadabu);
    goto L_eadda;
L_eadad:
    X86_TICK(c, 13);
    // 0eadad  mov byte ptr [ebp + 8], 0x66
    X86_AT(c, 0xeadadu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), 0x66u);
    // 0eadb1  mov eax, dword ptr [0xc4608]
    X86_AT(c, 0xeadb1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4608u)));
    // 0eadb6  and eax, eax
    X86_AT(c, 0xeadb6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0eadb8  jle 0xeadcd
    X86_AT(c, 0xeadb8u);
    if (x86_cc(c, 14)) { goto L_eadcd; }
    X86_TICK(c, 11);
    // 0eadba  mov edx, dword ptr [0xc40d4]
    X86_AT(c, 0xeadbau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC40D4u)));
    // 0eadc0  cmp edx, eax
    X86_AT(c, 0xeadc0u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0eadc2  jb 0xeadc5
    X86_AT(c, 0xeadc2u);
    if (x86_cc(c, 2)) { goto L_eadc5; }
    X86_TICK(c, 3);
    // 0eadc4  xchg edx, eax
    X86_AT(c, 0xeadc4u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_eadc5:
    X86_TICK(c, 14);
    // 0eadc5  sub dword ptr [0xc40d4], edx
    X86_AT(c, 0xeadc5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40D4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], 0, 4)); }
    // 0eadcb  jmp 0xeadd3
    X86_AT(c, 0xeadcbu);
    goto L_eadd3;
L_eadcd:
    X86_TICK(c, 6);
    // 0eadcd  dec dword ptr [0xc40d4]
    X86_AT(c, 0xeadcdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40D4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_eadd3:
    X86_TICK(c, 9);
    // 0eadd3  mov ecx, ebp
    X86_AT(c, 0xeadd3u);
    c.r[1] = c.r[5];
    // 0eadd5  call 0xea918
    X86_AT(c, 0xeadd5u);
    push32(c, 0xeaddau); x86_call_known(c, 0xea918u, f_000ea918); X86_RET(c, 0xeaddau);
L_eadda:
    X86_TICK(c, 16);
    // 0eadda  leave 
    X86_AT(c, 0xeaddau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eaddb  ret 4
    X86_AT(c, 0xeaddbu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xead28u, "ran off the end of a function");
}
void f_000eadfc(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0eadfc  push ebp
    X86_AT(c, 0xeadfcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0eadfd  mov ebp, esp
    X86_AT(c, 0xeadfdu);
    c.r[5] = c.r[4];
    // 0eadff  push ecx
    X86_AT(c, 0xeadffu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0eae00  push esi
    X86_AT(c, 0xeae00u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eae01  push edi
    X86_AT(c, 0xeae01u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eae02  mov esi, dword ptr [0xc4608]
    X86_AT(c, 0xeae02u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xC4608u)));
    // 0eae08  and esi, esi
    X86_AT(c, 0xeae08u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0eae0a  jge 0xeae0e
    X86_AT(c, 0xeae0au);
    if (x86_cc(c, 13)) { goto L_eae0e; }
    X86_TICK(c, 2);
    // 0eae0c  neg esi
    X86_AT(c, 0xeae0cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_neg(c, v, 4); }
L_eae0e:
    X86_TICK(c, 9);
    // 0eae0e  mov edi, 2
    X86_AT(c, 0xeae0eu);
    c.r[7] = 0x2u;
    // 0eae13  jmp 0xeae20
    X86_AT(c, 0xeae13u);
    goto L_eae20;
L_eae15:
    X86_TICK(c, 52);
    // 0eae15  xchg esi, eax
    X86_AT(c, 0xeae15u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0eae16  cdq 
    X86_AT(c, 0xeae16u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0eae17  mov ecx, 0xa
    X86_AT(c, 0xeae17u);
    c.r[1] = 0xAu;
    // 0eae1c  idiv ecx
    X86_AT(c, 0xeae1cu);
    x86_idiv(c, c.r[1], 4, 0xeae1cu);
    // 0eae1e  xchg esi, eax
    X86_AT(c, 0xeae1eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0eae1f  inc edi
    X86_AT(c, 0xeae1fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_eae20:
    X86_TICK(c, 7);
    // 0eae20  cmp esi, 0x63
    X86_AT(c, 0xeae20u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 0eae23  jg 0xeae15
    X86_AT(c, 0xeae23u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xeae15u); goto L_eae15; }
    X86_TICK(c, 46);
    // 0eae25  mov al, byte ptr [0xc461f]
    X86_AT(c, 0xeae25u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC461Fu))));
    // 0eae2a  inc eax
    X86_AT(c, 0xeae2au);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0eae2b  movzx eax, al
    X86_AT(c, 0xeae2bu);
    c.r[0] = g8(c, 0);
    // 0eae2e  add eax, dword ptr [0xc40d4]
    X86_AT(c, 0xeae2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC40D4u))), 0, 4); }
    // 0eae34  add eax, 2
    X86_AT(c, 0xeae34u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 0eae37  lea edx, [edi + eax*1]
    X86_AT(c, 0xeae37u);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 0eae3a  xchg edx, eax
    X86_AT(c, 0xeae3au);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0eae3b  pop edi
    X86_AT(c, 0xeae3bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eae3c  pop esi
    X86_AT(c, 0xeae3cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eae3d  leave 
    X86_AT(c, 0xeae3du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eae3e  ret 
    X86_AT(c, 0xeae3eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeadfcu, "ran off the end of a function");
}
void f_000eae50(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0eae50  enter 0x30, 0
    X86_AT(c, 0xeae50u);
    x86_enter(c, 0x30u, 0x0u, 4);
    // 0eae54  push ebx
    X86_AT(c, 0xeae54u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eae55  push esi
    X86_AT(c, 0xeae55u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eae56  push edi
    X86_AT(c, 0xeae56u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eae57  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0xeae57u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 0eae5a  mov ecx, ebp
    X86_AT(c, 0xeae5au);
    c.r[1] = c.r[5];
    // 0eae5c  call 0xea7b0
    X86_AT(c, 0xeae5cu);
    push32(c, 0xeae61u); x86_call_known(c, 0xea7b0u, f_000ea7b0); X86_RET(c, 0xeae61u);
    X86_TICK(c, 12);
    // 0eae61  cmp dword ptr [0xc40d4], 0xffff
    X86_AT(c, 0xeae61u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC40D4u))), 0xFFFFu, 0, 4);
    // 0eae6b  jne 0xeae77
    X86_AT(c, 0xeae6bu);
    if (x86_cc(c, 5)) { goto L_eae77; }
    X86_TICK(c, 2);
    // 0eae6d  mov dword ptr [0xc40d4], 6
    X86_AT(c, 0xeae6du);
    wr32((c.sbase[3] + (uint32_t)(0xC40D4u)), 0x6u);
L_eae77:
    X86_TICK(c, 12);
    // 0eae77  cmp byte ptr [0xc40d8], 3
    X86_AT(c, 0xeae77u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC40D8u))), 0x3u, 0, 1);
    // 0eae7e  jne 0xeae87
    X86_AT(c, 0xeae7eu);
    if (x86_cc(c, 5)) { goto L_eae87; }
    X86_TICK(c, 9);
    // 0eae80  mov edi, 0x12
    X86_AT(c, 0xeae80u);
    c.r[7] = 0x12u;
    // 0eae85  jmp 0xeae8c
    X86_AT(c, 0xeae85u);
    goto L_eae8c;
L_eae87:
    X86_TICK(c, 2);
    // 0eae87  mov edi, 0x10
    X86_AT(c, 0xeae87u);
    c.r[7] = 0x10u;
L_eae8c:
    X86_TICK(c, 39);
    // 0eae8c  lea esi, [ebp - 0x18]
    X86_AT(c, 0xeae8cu);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFE8u);
    // 0eae8f  push esi
    X86_AT(c, 0xeae8fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eae90  push edi
    X86_AT(c, 0xeae90u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eae91  push dword ptr [0xc40d4]
    X86_AT(c, 0xeae91u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC40D4u))); push32(c, v); }
    // 0eae97  push ebx
    X86_AT(c, 0xeae97u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eae98  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xeae98u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0eae9b  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xeae9bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0eae9e  push dword ptr [ebp + 8]
    X86_AT(c, 0xeae9eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0eaea1  lea eax, [ebp - 0x30]
    X86_AT(c, 0xeaea1u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 0eaea4  push eax
    X86_AT(c, 0xeaea4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaea5  call 0xea51c
    X86_AT(c, 0xeaea5u);
    push32(c, 0xeaeaau); x86_call_known(c, 0xea51cu, f_000ea51c); X86_RET(c, 0xeaeaau);
    X86_TICK(c, 30);
    // 0eaeaa  lea esi, [ebp - 0x30]
    X86_AT(c, 0xeaeaau);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 0eaead  push edi
    X86_AT(c, 0xeaeadu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eaeae  mov edi, 0xc4608
    X86_AT(c, 0xeaeaeu);
    c.r[7] = 0xC4608u;
    // 0eaeb3  mov ecx, 0x17
    X86_AT(c, 0xeaeb3u);
    c.r[1] = 0x17u;
    // 0eaeb8  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xeaeb8u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0eaeba  pop edi
    X86_AT(c, 0xeaebau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eaebb  mov ax, word ptr [ebp - 0x18]
    X86_AT(c, 0xeaebbu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))));
    // 0eaebf  and ax, ax
    X86_AT(c, 0xeaebfu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0eaec2  je 0xeaee7
    X86_AT(c, 0xeaec2u);
    if (x86_cc(c, 4)) { goto L_eaee7; }
    X86_TICK(c, 12);
    // 0eaec4  movzx eax, ax
    X86_AT(c, 0xeaec4u);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 0eaec7  push eax
    X86_AT(c, 0xeaec7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaec8  call 0xe86a0
    X86_AT(c, 0xeaec8u);
    push32(c, 0xeaecdu); x86_call_known(c, 0xe86a0u, f_000e86a0); X86_RET(c, 0xeaecdu);
    X86_TICK(c, 23);
    // 0eaecd  movzx eax, word ptr [ebp - 0x18]
    X86_AT(c, 0xeaecdu);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0eaed1  push eax
    X86_AT(c, 0xeaed1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaed2  lea eax, [ebp - 0x16]
    X86_AT(c, 0xeaed2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFEAu);
    // 0eaed5  push eax
    X86_AT(c, 0xeaed5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eaed6  mov ecx, dword ptr [0xc40e4]
    X86_AT(c, 0xeaed6u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40E4u)));
    // 0eaedc  call dword ptr [0xc40e0]
    X86_AT(c, 0xeaedcu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0xC40E0u))); push32(c, 0xeaee2u); x86_call(c, t); X86_RET(c, 0xeaee2u); }
    X86_TICK(c, 7);
    // 0eaee2  jmp 0xeafeb
    X86_AT(c, 0xeaee2u);
    goto L_eafeb;
L_eaee7:
    X86_TICK(c, 12);
    // 0eaee7  cmp dword ptr [0xc40d4], 0
    X86_AT(c, 0xeaee7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC40D4u))), 0x0u, 0, 4);
    // 0eaeee  jne 0xeaeff
    X86_AT(c, 0xeaeeeu);
    if (x86_cc(c, 5)) { goto L_eaeff; }
    X86_TICK(c, 12);
    // 0eaef0  test byte ptr [0xc40cc], 8
    X86_AT(c, 0xeaef0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC40CCu))) & 0x8u, 1);
    // 0eaef7  jne 0xeaeff
    X86_AT(c, 0xeaef7u);
    if (x86_cc(c, 5)) { goto L_eaeff; }
    X86_TICK(c, 9);
    // 0eaef9  mov byte ptr [ebp - 0x19], 0
    X86_AT(c, 0xeaef9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u)), 0x0u);
    // 0eaefd  jmp 0xeaf03
    X86_AT(c, 0xeaefdu);
    goto L_eaf03;
L_eaeff:
    X86_TICK(c, 2);
    // 0eaeff  mov byte ptr [ebp - 0x19], 1
    X86_AT(c, 0xeaeffu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u)), 0x1u);
L_eaf03:
    X86_TICK(c, 16);
    // 0eaf03  mov al, byte ptr [ebp - 0x19]
    X86_AT(c, 0xeaf03u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u))));
    // 0eaf06  mov byte ptr [0xc461f], al
    X86_AT(c, 0xeaf06u);
    wr8((c.sbase[3] + (uint32_t)(0xC461Fu)), g8(c, 0));
    // 0eaf0b  movzx eax, bl
    X86_AT(c, 0xeaf0bu);
    c.r[0] = g8(c, 3);
    // 0eaf0e  cmp eax, 0x45
    X86_AT(c, 0xeaf0eu);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 0eaf11  je 0xeaf4d
    X86_AT(c, 0xeaf11u);
    if (x86_cc(c, 4)) { goto L_eaf4d; }
    X86_TICK(c, 7);
    // 0eaf13  cmp eax, 0x47
    X86_AT(c, 0xeaf13u);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 0eaf16  je 0xeaf56
    X86_AT(c, 0xeaf16u);
    if (x86_cc(c, 4)) { goto L_eaf56; }
    X86_TICK(c, 7);
    // 0eaf18  cmp eax, 0x65
    X86_AT(c, 0xeaf18u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 0eaf1b  je 0xeaf4d
    X86_AT(c, 0xeaf1bu);
    if (x86_cc(c, 4)) { goto L_eaf4d; }
    X86_TICK(c, 7);
    // 0eaf1d  cmp eax, 0x66
    X86_AT(c, 0xeaf1du);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 0eaf20  je 0xeaf2c
    X86_AT(c, 0xeaf20u);
    if (x86_cc(c, 4)) { goto L_eaf2c; }
    X86_TICK(c, 7);
    // 0eaf22  cmp eax, 0x67
    X86_AT(c, 0xeaf22u);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 0eaf25  je 0xeaf56
    X86_AT(c, 0xeaf25u);
    if (x86_cc(c, 4)) { goto L_eaf56; }
    X86_TICK(c, 7);
    // 0eaf27  jmp 0xeafcc
    X86_AT(c, 0xeaf27u);
    goto L_eafcc;
L_eaf2c:
    X86_TICK(c, 13);
    // 0eaf2c  mov eax, 1
    X86_AT(c, 0xeaf2cu);
    c.r[0] = 0x1u;
    // 0eaf31  mov edx, dword ptr [0xc4608]
    X86_AT(c, 0xeaf31u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC4608u)));
    // 0eaf37  cmp eax, edx
    X86_AT(c, 0xeaf37u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0eaf39  jl 0xeaf3c
    X86_AT(c, 0xeaf39u);
    if (x86_cc(c, 12)) { goto L_eaf3c; }
    X86_TICK(c, 3);
    // 0eaf3b  xchg edx, eax
    X86_AT(c, 0xeaf3bu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_eaf3c:
    X86_TICK(c, 21);
    // 0eaf3c  add edx, dword ptr [0xc40d4]
    X86_AT(c, 0xeaf3cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC40D4u))), 0, 4); }
    // 0eaf42  movzx eax, byte ptr [0xc461f]
    X86_AT(c, 0xeaf42u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xC461Fu)));
    // 0eaf49  add eax, edx
    X86_AT(c, 0xeaf49u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 0eaf4b  jmp 0xeaf86
    X86_AT(c, 0xeaf4bu);
    goto L_eaf86;
L_eaf4d:
    X86_TICK(c, 9);
    // 0eaf4d  mov ecx, ebp
    X86_AT(c, 0xeaf4du);
    c.r[1] = c.r[5];
    // 0eaf4f  call 0xeadfc
    X86_AT(c, 0xeaf4fu);
    push32(c, 0xeaf54u); x86_call_known(c, 0xeadfcu, f_000eadfc); X86_RET(c, 0xeaf54u);
    X86_TICK(c, 7);
    // 0eaf54  jmp 0xeaf86
    X86_AT(c, 0xeaf54u);
    goto L_eaf86;
L_eaf56:
    X86_TICK(c, 12);
    // 0eaf56  cmp dword ptr [0xc40d4], 0
    X86_AT(c, 0xeaf56u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC40D4u))), 0x0u, 0, 4);
    // 0eaf5d  jne 0xeaf6b
    X86_AT(c, 0xeaf5du);
    if (x86_cc(c, 5)) { goto L_eaf6b; }
    X86_TICK(c, 9);
    // 0eaf5f  mov dword ptr [0xc4604], 0
    X86_AT(c, 0xeaf5fu);
    wr32((c.sbase[3] + (uint32_t)(0xC4604u)), 0x0u);
    // 0eaf69  jmp 0xeafcc
    X86_AT(c, 0xeaf69u);
    goto L_eafcc;
L_eaf6b:
    X86_TICK(c, 13);
    // 0eaf6b  mov eax, dword ptr [0xc4608]
    X86_AT(c, 0xeaf6bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4608u)));
    // 0eaf70  dec eax
    X86_AT(c, 0xeaf70u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0eaf71  cmp eax, 0xfffffffc
    X86_AT(c, 0xeaf71u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFCu, 0, 4);
    // 0eaf74  jl 0xeaf7e
    X86_AT(c, 0xeaf74u);
    if (x86_cc(c, 12)) { goto L_eaf7e; }
    X86_TICK(c, 11);
    // 0eaf76  cmp eax, dword ptr [0xc40d4]
    X86_AT(c, 0xeaf76u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xC40D4u))), 0, 4);
    // 0eaf7c  jle 0xeaf8d
    X86_AT(c, 0xeaf7cu);
    if (x86_cc(c, 14)) { goto L_eaf8d; }
L_eaf7e:
    X86_TICK(c, 9);
    // 0eaf7e  mov ecx, ebp
    X86_AT(c, 0xeaf7eu);
    c.r[1] = c.r[5];
    // 0eaf80  call 0xeadfc
    X86_AT(c, 0xeaf80u);
    push32(c, 0xeaf85u); x86_call_known(c, 0xeadfcu, f_000eadfc); X86_RET(c, 0xeaf85u);
    X86_TICK(c, 2);
    // 0eaf85  dec eax
    X86_AT(c, 0xeaf85u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_eaf86:
    X86_TICK(c, 9);
    // 0eaf86  mov dword ptr [0xc4604], eax
    X86_AT(c, 0xeaf86u);
    wr32((c.sbase[3] + (uint32_t)(0xC4604u)), c.r[0]);
    // 0eaf8b  jmp 0xeafc6
    X86_AT(c, 0xeaf8bu);
    goto L_eafc6;
L_eaf8d:
    X86_TICK(c, 42);
    // 0eaf8d  movzx eax, byte ptr [0xc461f]
    X86_AT(c, 0xeaf8du);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xC461Fu)));
    // 0eaf94  add eax, dword ptr [0xc40d4]
    X86_AT(c, 0xeaf94u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC40D4u))), 0, 4); }
    // 0eaf9a  mov edx, dword ptr [0xc4608]
    X86_AT(c, 0xeaf9au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC4608u)));
    // 0eafa0  dec edx
    X86_AT(c, 0xeafa0u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0eafa1  mov ecx, dword ptr [0xc40d4]
    X86_AT(c, 0xeafa1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC40D4u)));
    // 0eafa7  cmp edx, ecx
    X86_AT(c, 0xeafa7u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0eafa9  sete dl
    X86_AT(c, 0xeafa9u);
    s8(c, 2, x86_cc(c, 4) ? 1u : 0u);
    // 0eafac  movzx edx, dl
    X86_AT(c, 0xeafacu);
    c.r[2] = g8(c, 2);
    // 0eafaf  add edx, eax
    X86_AT(c, 0xeafafu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 0eafb1  mov dword ptr [0xc4604], edx
    X86_AT(c, 0xeafb1u);
    wr32((c.sbase[3] + (uint32_t)(0xC4604u)), c.r[2]);
    // 0eafb7  and ecx, ecx
    X86_AT(c, 0xeafb7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 0eafb9  jne 0xeafc1
    X86_AT(c, 0xeafb9u);
    if (x86_cc(c, 5)) { goto L_eafc1; }
    X86_TICK(c, 6);
    // 0eafbb  inc dword ptr [0xc4604]
    X86_AT(c, 0xeafbbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC4604u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_eafc1:
    X86_TICK(c, 4);
    // 0eafc1  mov eax, dword ptr [0xc4604]
    X86_AT(c, 0xeafc1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4604u)));
L_eafc6:
    X86_TICK(c, 7);
    // 0eafc6  add dword ptr [0xc40dc], eax
    X86_AT(c, 0xeafc6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40DCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_eafcc:
    X86_TICK(c, 13);
    // 0eafcc  mov byte ptr [0xc45fc], 0
    X86_AT(c, 0xeafccu);
    wr8((c.sbase[3] + (uint32_t)(0xC45FCu)), 0x0u);
    // 0eafd3  push ebx
    X86_AT(c, 0xeafd3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eafd4  mov ecx, ebp
    X86_AT(c, 0xeafd4u);
    c.r[1] = c.r[5];
    // 0eafd6  call 0xead28
    X86_AT(c, 0xeafd6u);
    push32(c, 0xeafdbu); x86_call_known(c, 0xead28u, f_000ead28); X86_RET(c, 0xeafdbu);
    X86_TICK(c, 12);
    // 0eafdb  cmp byte ptr [0xc45fc], 0
    X86_AT(c, 0xeafdbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC45FCu))), 0x0u, 0, 1);
    // 0eafe2  jne 0xeafeb
    X86_AT(c, 0xeafe2u);
    if (x86_cc(c, 5)) { goto L_eafeb; }
    X86_TICK(c, 9);
    // 0eafe4  mov ecx, ebp
    X86_AT(c, 0xeafe4u);
    c.r[1] = c.r[5];
    // 0eafe6  call 0xea74c
    X86_AT(c, 0xeafe6u);
    push32(c, 0xeafebu); x86_call_known(c, 0xea74cu, f_000ea74c); X86_RET(c, 0xeafebu);
L_eafeb:
    X86_TICK(c, 28);
    // 0eafeb  pop edi
    X86_AT(c, 0xeafebu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eafec  pop esi
    X86_AT(c, 0xeafecu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eafed  pop ebx
    X86_AT(c, 0xeafedu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0eafee  leave 
    X86_AT(c, 0xeafeeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eafef  ret 0x10
    X86_AT(c, 0xeafefu);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0xeae50u, "ran off the end of a function");
}
void f_000eb010(X86Cpu& c) {
L_eb010:
    X86_TICK(c, 13);
    // 0eb010  mov eax, dword ptr [0xc4620]
    X86_AT(c, 0xeb010u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4620u)));
    // 0eb015  mov edx, 0xeaff4
    X86_AT(c, 0xeb015u);
    c.r[2] = 0xEAFF4u;
    // 0eb01a  cmp edx, eax
    X86_AT(c, 0xeb01au);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0eb01c  je 0xeb027
    X86_AT(c, 0xeb01cu);
    if (x86_cc(c, 4)) { goto L_eb027; }
    X86_TICK(c, 7);
    // 0eb01e  call eax
    X86_AT(c, 0xeb01eu);
    { uint32_t t = c.r[0]; push32(c, 0xeb020u); x86_call(c, t); X86_RET(c, 0xeb020u); }
    X86_TICK(c, 9);
    // 0eb020  mov dword ptr [0xc4620], eax
    X86_AT(c, 0xeb020u);
    wr32((c.sbase[3] + (uint32_t)(0xC4620u)), c.r[0]);
    // 0eb025  jmp 0xeb010
    X86_AT(c, 0xeb025u);
    X86_POLL(c, 0xeb010u); goto L_eb010;
L_eb027:
    X86_TICK(c, 10);
    // 0eb027  ret 
    X86_AT(c, 0xeb027u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeb010u, "ran off the end of a function");
}
void f_000eb038(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0eb038  enter 4, 0
    X86_AT(c, 0xeb038u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0eb03c  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0xeb03cu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0eb03f  add al, 0x30
    X86_AT(c, 0xeb03fu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x30u, 0, 1)); }
    // 0eb041  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xeb041u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0eb044  push 0x10008
    X86_AT(c, 0xeb044u);
    { uint32_t v = 0x10008u; push32(c, v); }
    // 0eb049  call 0xeb1e4
    X86_AT(c, 0xeb049u);
    push32(c, 0xeb04eu); x86_call_known(c, 0xeb1e4u, f_000eb1e4); X86_RET(c, 0xeb04eu);
    X86_TICK(c, 11);
    // 0eb04e  lea eax, [ebp - 4]
    X86_AT(c, 0xeb04eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 0eb051  push eax
    X86_AT(c, 0xeb051u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb052  call 0xeb1e4
    X86_AT(c, 0xeb052u);
    push32(c, 0xeb057u); x86_call_known(c, 0xeb1e4u, f_000eb1e4); X86_RET(c, 0xeb057u);
    X86_TICK(c, 7);
    // 0eb057  call 0xeb200
    X86_AT(c, 0xeb057u);
    push32(c, 0xeb05cu); x86_call_known(c, 0xeb200u, f_000eb200); X86_RET(c, 0xeb05cu);
    X86_TICK(c, 13);
    // 0eb05c  mov ax, word ptr [0xc45c8]
    X86_AT(c, 0xeb05cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC45C8u))));
    // 0eb062  push eax
    X86_AT(c, 0xeb062u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb063  call 0xeb0bc
    X86_AT(c, 0xeb063u);
    push32(c, 0xeb068u); x86_call_known(c, 0xeb0bcu, f_000eb0bc); X86_RET(c, 0xeb068u);
    X86_TICK(c, 9);
    // 0eb068  push 0x10024
    X86_AT(c, 0xeb068u);
    { uint32_t v = 0x10024u; push32(c, v); }
    // 0eb06d  call 0xeb1e4
    X86_AT(c, 0xeb06du);
    push32(c, 0xeb072u); x86_call_known(c, 0xeb1e4u, f_000eb1e4); X86_RET(c, 0xeb072u);
    X86_TICK(c, 7);
    // 0eb072  call 0xeb200
    X86_AT(c, 0xeb072u);
    push32(c, 0xeb077u); x86_call_known(c, 0xeb200u, f_000eb200); X86_RET(c, 0xeb077u);
    X86_TICK(c, 9);
    // 0eb077  push 0xffffffff
    X86_AT(c, 0xeb077u);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0eb079  call 0xe9a78
    X86_AT(c, 0xeb079u);
    push32(c, 0xeb07eu); x86_call_known(c, 0xe9a78u, f_000e9a78); X86_RET(c, 0xeb07eu);
    X86_TICK(c, 16);
    // 0eb07e  leave 
    X86_AT(c, 0xeb07eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eb07f  ret 8
    X86_AT(c, 0xeb07fu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xeb038u, "ran off the end of a function");
}
void f_000eb0bc(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0eb0bc  push 0x10060
    X86_AT(c, 0xeb0bcu);
    { uint32_t v = 0x10060u; push32(c, v); }
    // 0eb0c1  call 0xeb1e4
    X86_AT(c, 0xeb0c1u);
    push32(c, 0xeb0c6u); x86_call_known(c, 0xeb1e4u, f_000eb1e4); X86_RET(c, 0xeb0c6u);
    X86_TICK(c, 7);
    // 0eb0c6  call 0xeb200
    X86_AT(c, 0xeb0c6u);
    push32(c, 0xeb0cbu); x86_call_known(c, 0xeb200u, f_000eb200); X86_RET(c, 0xeb0cbu);
    X86_TICK(c, 10);
    // 0eb0cb  ret 4
    X86_AT(c, 0xeb0cbu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xeb0bcu, "ran off the end of a function");
}
void f_000eb0d0(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0eb0d0  push ebp
    X86_AT(c, 0xeb0d0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0eb0d1  mov ebp, esp
    X86_AT(c, 0xeb0d1u);
    c.r[5] = c.r[4];
    // 0eb0d3  push edi
    X86_AT(c, 0xeb0d3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb0d4  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xeb0d4u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0eb0d7  movzx eax, word ptr [edi]
    X86_AT(c, 0xeb0d7u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0eb0da  push eax
    X86_AT(c, 0xeb0dau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb0db  lea eax, [edi + 2]
    X86_AT(c, 0xeb0dbu);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 0eb0de  push eax
    X86_AT(c, 0xeb0deu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb0df  push 2
    X86_AT(c, 0xeb0dfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eb0e1  call 0xe9ad8
    X86_AT(c, 0xeb0e1u);
    push32(c, 0xeb0e6u); x86_call_known(c, 0xe9ad8u, f_000e9ad8); X86_RET(c, 0xeb0e6u);
    X86_TICK(c, 19);
    // 0eb0e6  movzx eax, word ptr [0xc40ac]
    X86_AT(c, 0xeb0e6u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xC40ACu)));
    // 0eb0ed  push eax
    X86_AT(c, 0xeb0edu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb0ee  push 0xc40ae
    X86_AT(c, 0xeb0eeu);
    { uint32_t v = 0xC40AEu; push32(c, v); }
    // 0eb0f3  push 2
    X86_AT(c, 0xeb0f3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eb0f5  call 0xe9ad8
    X86_AT(c, 0xeb0f5u);
    push32(c, 0xeb0fau); x86_call_known(c, 0xe9ad8u, f_000e9ad8); X86_RET(c, 0xeb0fau);
    X86_TICK(c, 20);
    // 0eb0fa  pop edi
    X86_AT(c, 0xeb0fau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb0fb  leave 
    X86_AT(c, 0xeb0fbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eb0fc  ret 4
    X86_AT(c, 0xeb0fcu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xeb0d0u, "ran off the end of a function");
}
void f_000eb164(X86Cpu& c) {
    X86_TICK(c, 95);
    // 0eb164  push esi
    X86_AT(c, 0xeb164u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb165  push edi
    X86_AT(c, 0xeb165u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb166  push ebx
    X86_AT(c, 0xeb166u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eb167  push ebp
    X86_AT(c, 0xeb167u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0eb168  push ds
    X86_AT(c, 0xeb168u);
    push32(c, c.sreg[3]);
    // 0eb169  push es
    X86_AT(c, 0xeb169u);
    push32(c, c.sreg[0]);
    // 0eb16a  mov eax, dword ptr [0xc4540]
    X86_AT(c, 0xeb16au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4540u)));
    // 0eb16f  mov ebx, dword ptr [0xc4544]
    X86_AT(c, 0xeb16fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xC4544u)));
    // 0eb175  mov ecx, dword ptr [0xc4548]
    X86_AT(c, 0xeb175u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC4548u)));
    // 0eb17b  mov edx, dword ptr [0xc454c]
    X86_AT(c, 0xeb17bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC454Cu)));
    // 0eb181  mov esi, dword ptr [0xc4550]
    X86_AT(c, 0xeb181u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xC4550u)));
    // 0eb187  mov edi, dword ptr [0xc4554]
    X86_AT(c, 0xeb187u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xC4554u)));
    // 0eb18d  push dword ptr [0xc455c]
    X86_AT(c, 0xeb18du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC455Cu))); push32(c, v); }
    // 0eb193  pop es
    X86_AT(c, 0xeb193u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0eb194  push ds
    X86_AT(c, 0xeb194u);
    push32(c, c.sreg[3]);
    // 0eb195  push dword ptr [0xc4558]
    X86_AT(c, 0xeb195u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC4558u))); push32(c, v); }
    // 0eb19b  pop ds
    X86_AT(c, 0xeb19bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0eb19c  clc 
    X86_AT(c, 0xeb19cu);
    c.fl &= ~X86_CF;
    // 0eb19d  int 0x21
    X86_AT(c, 0xeb19du);
    x86_int(c, 0x21, 0xeb19fu);
    X86_TICK(c, 77);
    // 0eb19f  pop ebp
    X86_AT(c, 0xeb19fu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0eb1a0  push ds
    X86_AT(c, 0xeb1a0u);
    push32(c, c.sreg[3]);
    // 0eb1a1  mov ds, ebp
    X86_AT(c, 0xeb1a1u);
    x86_load_seg(c, 3, (c.r[5] & 0xFFFFu) & 0xFFFFu);
    // 0eb1a3  pop dword ptr [0xc4558]
    X86_AT(c, 0xeb1a3u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xC4558u)), v); }
    // 0eb1a9  push es
    X86_AT(c, 0xeb1a9u);
    push32(c, c.sreg[0]);
    // 0eb1aa  pop dword ptr [0xc455c]
    X86_AT(c, 0xeb1aau);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xC455Cu)), v); }
    // 0eb1b0  mov dword ptr [0xc4540], eax
    X86_AT(c, 0xeb1b0u);
    wr32((c.sbase[3] + (uint32_t)(0xC4540u)), c.r[0]);
    // 0eb1b5  mov dword ptr [0xc4544], ebx
    X86_AT(c, 0xeb1b5u);
    wr32((c.sbase[3] + (uint32_t)(0xC4544u)), c.r[3]);
    // 0eb1bb  mov dword ptr [0xc4548], ecx
    X86_AT(c, 0xeb1bbu);
    wr32((c.sbase[3] + (uint32_t)(0xC4548u)), c.r[1]);
    // 0eb1c1  mov dword ptr [0xc454c], edx
    X86_AT(c, 0xeb1c1u);
    wr32((c.sbase[3] + (uint32_t)(0xC454Cu)), c.r[2]);
    // 0eb1c7  mov dword ptr [0xc4550], esi
    X86_AT(c, 0xeb1c7u);
    wr32((c.sbase[3] + (uint32_t)(0xC4550u)), c.r[6]);
    // 0eb1cd  mov dword ptr [0xc4554], edi
    X86_AT(c, 0xeb1cdu);
    wr32((c.sbase[3] + (uint32_t)(0xC4554u)), c.r[7]);
    // 0eb1d3  pushf 
    X86_AT(c, 0xeb1d3u);
    push16(c, c.fl & 0xFFFFu);
    // 0eb1d5  pop word ptr [0xc4560]
    X86_AT(c, 0xeb1d5u);
    { uint32_t v = pop16(c); wr16((c.sbase[3] + (uint32_t)(0xC4560u)), v); }
    // 0eb1dc  pop es
    X86_AT(c, 0xeb1dcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0eb1dd  pop ds
    X86_AT(c, 0xeb1ddu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0eb1de  pop ebp
    X86_AT(c, 0xeb1deu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0eb1df  pop ebx
    X86_AT(c, 0xeb1dfu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0eb1e0  pop edi
    X86_AT(c, 0xeb1e0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb1e1  pop esi
    X86_AT(c, 0xeb1e1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eb1e2  ret 
    X86_AT(c, 0xeb1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeb164u, "ran off the end of a function");
}
void f_000eb1e4(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0eb1e4  push ebp
    X86_AT(c, 0xeb1e4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0eb1e5  mov ebp, esp
    X86_AT(c, 0xeb1e5u);
    c.r[5] = c.r[4];
    // 0eb1e7  push edi
    X86_AT(c, 0xeb1e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb1e8  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xeb1e8u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0eb1eb  movzx eax, word ptr [edi]
    X86_AT(c, 0xeb1ebu);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0eb1ee  push eax
    X86_AT(c, 0xeb1eeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb1ef  lea eax, [edi + 2]
    X86_AT(c, 0xeb1efu);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 0eb1f2  push eax
    X86_AT(c, 0xeb1f2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb1f3  push 2
    X86_AT(c, 0xeb1f3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eb1f5  call 0xe9ad8
    X86_AT(c, 0xeb1f5u);
    push32(c, 0xeb1fau); x86_call_known(c, 0xe9ad8u, f_000e9ad8); X86_RET(c, 0xeb1fau);
    X86_TICK(c, 20);
    // 0eb1fa  pop edi
    X86_AT(c, 0xeb1fau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb1fb  leave 
    X86_AT(c, 0xeb1fbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eb1fc  ret 4
    X86_AT(c, 0xeb1fcu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xeb1e4u, "ran off the end of a function");
}
void f_000eb200(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0eb200  movzx eax, word ptr [0xc40ac]
    X86_AT(c, 0xeb200u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xC40ACu)));
    // 0eb207  push eax
    X86_AT(c, 0xeb207u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb208  push 0xc40ae
    X86_AT(c, 0xeb208u);
    { uint32_t v = 0xC40AEu; push32(c, v); }
    // 0eb20d  push 2
    X86_AT(c, 0xeb20du);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0eb20f  call 0xe9ad8
    X86_AT(c, 0xeb20fu);
    push32(c, 0xeb214u); x86_call_known(c, 0xe9ad8u, f_000e9ad8); X86_RET(c, 0xeb214u);
    X86_TICK(c, 10);
    // 0eb214  ret 
    X86_AT(c, 0xeb214u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeb200u, "ran off the end of a function");
}
void f_000eb218(X86Cpu& c) {
    X86_TICK(c, 55);
    // 0eb218  enter 0xc, 0
    X86_AT(c, 0xeb218u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 0eb21c  push ebx
    X86_AT(c, 0xeb21cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eb21d  push esi
    X86_AT(c, 0xeb21du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb21e  push edi
    X86_AT(c, 0xeb21eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb21f  mov di, word ptr [ebp + 0xc]
    X86_AT(c, 0xeb21fu);
    s16(c, 7, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0eb223  sub esi, esi
    X86_AT(c, 0xeb223u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0eb225  push esi
    X86_AT(c, 0xeb225u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb226  mov esi, 0x100bc
    X86_AT(c, 0xeb226u);
    c.r[6] = 0x100BCu;
    // 0eb22b  push edi
    X86_AT(c, 0xeb22bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb22c  lea edi, [ebp - 0xc]
    X86_AT(c, 0xeb22cu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0eb22f  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xeb22fu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0eb230  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xeb230u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0eb231  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xeb231u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0eb233  pop edi
    X86_AT(c, 0xeb233u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb234  pop esi
    X86_AT(c, 0xeb234u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_eb235:
    X86_TICK(c, 10);
    // 0eb235  mov eax, edi
    X86_AT(c, 0xeb235u);
    c.r[0] = c.r[7];
    // 0eb237  rcr ax, 1
    X86_AT(c, 0xeb237u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 0eb23a  jae 0xeb276
    X86_AT(c, 0xeb23au);
    if (x86_cc(c, 3)) { goto L_eb276; }
    X86_TICK(c, 23);
    // 0eb23c  movzx eax, si
    X86_AT(c, 0xeb23cu);
    c.r[0] = (c.r[6] & 0xFFFFu);
    // 0eb23f  lea eax, [eax*4]
    X86_AT(c, 0xeb23fu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0eb246  lea eax, [eax + eax*2]
    X86_AT(c, 0xeb246u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0eb249  movsx eax, ax
    X86_AT(c, 0xeb249u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0eb24c  lea edx, [ebp - 0xc]
    X86_AT(c, 0xeb24cu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0eb24f  push edx
    X86_AT(c, 0xeb24fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0eb250  mov ebx, eax
    X86_AT(c, 0xeb250u);
    c.r[3] = c.r[0];
    // 0eb252  call 0xea10c
    X86_AT(c, 0xeb252u);
    push32(c, 0xeb257u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xeb257u);
    X86_TICK(c, 13);
    // 0eb257  lea eax, [ebx*1 + 0xc4628]
    X86_AT(c, 0xeb257u);
    c.r[0] = (uint32_t)(c.r[3] + 0xC4628u);
    // 0eb25e  push eax
    X86_AT(c, 0xeb25eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb25f  mov ebx, eax
    X86_AT(c, 0xeb25fu);
    c.r[3] = c.r[0];
    // 0eb261  call 0xea10c
    X86_AT(c, 0xeb261u);
    push32(c, 0xeb266u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xeb266u);
    X86_TICK(c, 7);
    // 0eb266  call 0xeb3e8
    X86_AT(c, 0xeb266u);
    push32(c, 0xeb26bu); x86_call_known(c, 0xeb3e8u, f_000eb3e8); X86_RET(c, 0xeb26bu);
    X86_TICK(c, 13);
    // 0eb26b  lea eax, [ebp - 0xc]
    X86_AT(c, 0xeb26bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0eb26e  push eax
    X86_AT(c, 0xeb26eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb26f  mov ebx, eax
    X86_AT(c, 0xeb26fu);
    c.r[3] = c.r[0];
    // 0eb271  call 0xea16c
    X86_AT(c, 0xeb271u);
    push32(c, 0xeb276u); x86_call_known(c, 0xea16cu, f_000ea16c); X86_RET(c, 0xeb276u);
L_eb276:
    X86_TICK(c, 12);
    // 0eb276  shr di, 1
    X86_AT(c, 0xeb276u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 7, r); }
    // 0eb279  inc esi
    X86_AT(c, 0xeb279u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0eb27a  and di, di
    X86_AT(c, 0xeb27au);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 0eb27d  jne 0xeb235
    X86_AT(c, 0xeb27du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xeb235u); goto L_eb235; }
    X86_TICK(c, 71);
    // 0eb27f  lea eax, [ebp - 0xc]
    X86_AT(c, 0xeb27fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0eb282  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xeb282u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0eb285  push esi
    X86_AT(c, 0xeb285u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb286  push edi
    X86_AT(c, 0xeb286u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb287  mov esi, eax
    X86_AT(c, 0xeb287u);
    c.r[6] = c.r[0];
    // 0eb289  mov edi, edx
    X86_AT(c, 0xeb289u);
    c.r[7] = c.r[2];
    // 0eb28b  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xeb28bu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0eb28c  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xeb28cu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0eb28d  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xeb28du);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0eb28f  pop edi
    X86_AT(c, 0xeb28fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb290  pop esi
    X86_AT(c, 0xeb290u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eb291  pop edi
    X86_AT(c, 0xeb291u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb292  pop esi
    X86_AT(c, 0xeb292u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eb293  pop ebx
    X86_AT(c, 0xeb293u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0eb294  leave 
    X86_AT(c, 0xeb294u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eb295  ret 8
    X86_AT(c, 0xeb295u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xeb218u, "ran off the end of a function");
}
void f_000eb298(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0eb298  push ebp
    X86_AT(c, 0xeb298u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0eb299  mov ebp, esp
    X86_AT(c, 0xeb299u);
    c.r[5] = c.r[4];
    // 0eb29b  push esi
    X86_AT(c, 0xeb29bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb29c  push edi
    X86_AT(c, 0xeb29cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb29d  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xeb29du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0eb2a0  call 0xea10c
    X86_AT(c, 0xeb2a0u);
    push32(c, 0xeb2a5u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xeb2a5u);
    X86_TICK(c, 7);
    // 0eb2a5  call 0xeb730
    X86_AT(c, 0xeb2a5u);
    push32(c, 0xeb2aau); x86_call_known(c, 0xeb730u, f_000eb730); X86_RET(c, 0xeb2aau);
    X86_TICK(c, 15);
    // 0eb2aa  xchg edi, eax
    X86_AT(c, 0xeb2aau);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0eb2ab  and di, 0x4700
    X86_AT(c, 0xeb2abu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & 0x4700u, 2)); }
    // 0eb2b0  shr di, 8
    X86_AT(c, 0xeb2b0u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 7, r); }
    // 0eb2b4  call 0xea07c
    X86_AT(c, 0xeb2b4u);
    push32(c, 0xeb2b9u); x86_call_known(c, 0xea07cu, f_000ea07c); X86_RET(c, 0xeb2b9u);
    X86_TICK(c, 7);
    // 0eb2b9  cmp di, 0x10
    X86_AT(c, 0xeb2b9u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x10u, 0, 2);
    // 0eb2bd  jbe 0xeb2c9
    X86_AT(c, 0xeb2bdu);
    if (x86_cc(c, 6)) { goto L_eb2c9; }
    X86_TICK(c, 4);
    // 0eb2bf  and di, 7
    X86_AT(c, 0xeb2bfu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & 0x7u, 2)); }
    // 0eb2c4  or di, 8
    X86_AT(c, 0xeb2c4u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v | 0x8u, 2)); }
L_eb2c9:
    X86_TICK(c, 10);
    // 0eb2c9  movzx eax, di
    X86_AT(c, 0xeb2c9u);
    c.r[0] = (c.r[7] & 0xFFFFu);
    // 0eb2cc  cmp eax, 0xe
    X86_AT(c, 0xeb2ccu);
    (void)x86_sub(c, c.r[0], 0xEu, 0, 4);
    // 0eb2cf  ja 0xeb348
    X86_AT(c, 0xeb2cfu);
    if (x86_cc(c, 7)) { goto L_eb348; }
    X86_TICK(c, 7);
    // 0eb2d5  jmp dword ptr cs:[eax*4 + 0xeb2dd]
    X86_AT(c, 0xeb2d5u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xEB2DDu)));
      switch (t) {
      case 0xeb319u: goto L_eb319;
      case 0xeb320u: goto L_eb320;
      case 0xeb32fu: goto L_eb32f;
      case 0xeb336u: goto L_eb336;
      case 0xeb348u: goto L_eb348;
      default: x86_jump(c, t); return; } }
L_eb319:
    X86_TICK(c, 9);
    // 0eb319  mov esi, 0x100c8
    X86_AT(c, 0xeb319u);
    c.r[6] = 0x100C8u;
    // 0eb31e  jmp 0xeb33b
    X86_AT(c, 0xeb31eu);
    goto L_eb33b;
L_eb320:
    X86_TICK(c, 15);
    // 0eb320  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xeb320u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0eb323  mov dword ptr [eax], 0x414e0003
    X86_AT(c, 0xeb323u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x414E0003u);
    // 0eb329  mov byte ptr [eax + 4], 0x4e
    X86_AT(c, 0xeb329u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), 0x4Eu);
    // 0eb32d  jmp 0xeb350
    X86_AT(c, 0xeb32du);
    goto L_eb350;
L_eb32f:
    X86_TICK(c, 9);
    // 0eb32f  mov esi, 0x100d4
    X86_AT(c, 0xeb32fu);
    c.r[6] = 0x100D4u;
    // 0eb334  jmp 0xeb33b
    X86_AT(c, 0xeb334u);
    goto L_eb33b;
L_eb336:
    X86_TICK(c, 2);
    // 0eb336  mov esi, 0x100e0
    X86_AT(c, 0xeb336u);
    c.r[6] = 0x100E0u;
L_eb33b:
    X86_TICK(c, 40);
    // 0eb33b  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xeb33bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0eb33e  push edi
    X86_AT(c, 0xeb33eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb33f  mov edi, eax
    X86_AT(c, 0xeb33fu);
    c.r[7] = c.r[0];
    // 0eb341  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xeb341u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0eb342  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xeb342u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0eb343  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xeb343u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0eb345  pop edi
    X86_AT(c, 0xeb345u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb346  jmp 0xeb350
    X86_AT(c, 0xeb346u);
    goto L_eb350;
L_eb348:
    X86_TICK(c, 6);
    // 0eb348  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xeb348u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0eb34b  mov word ptr [eax], 0
    X86_AT(c, 0xeb34bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
L_eb350:
    X86_TICK(c, 24);
    // 0eb350  pop edi
    X86_AT(c, 0xeb350u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb351  pop esi
    X86_AT(c, 0xeb351u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eb352  leave 
    X86_AT(c, 0xeb352u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eb353  ret 8
    X86_AT(c, 0xeb353u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xeb298u, "ran off the end of a function");
}
void f_000eb358(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0eb358  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xeb358u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0eb35c  mov edx, dword ptr [eax]
    X86_AT(c, 0xeb35cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0eb35e  or edx, dword ptr [eax + 4]
    X86_AT(c, 0xeb35eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 4); }
    // 0eb361  and edx, edx
    X86_AT(c, 0xeb361u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0eb363  jne 0xeb369
    X86_AT(c, 0xeb363u);
    if (x86_cc(c, 5)) { goto L_eb369; }
    X86_TICK(c, 9);
    // 0eb365  sub eax, eax
    X86_AT(c, 0xeb365u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eb367  jmp 0xeb378
    X86_AT(c, 0xeb367u);
    goto L_eb378;
L_eb369:
    X86_TICK(c, 12);
    // 0eb369  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xeb369u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0eb36d  mov ax, word ptr [eax + 8]
    X86_AT(c, 0xeb36du);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))));
    // 0eb371  and ah, 0x7f
    X86_AT(c, 0xeb371u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x7Fu, 1)); }
    // 0eb374  sub ax, 0x3fff
    X86_AT(c, 0xeb374u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
L_eb378:
    X86_TICK(c, 10);
    // 0eb378  ret 4
    X86_AT(c, 0xeb378u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xeb358u, "ran off the end of a function");
}
void f_000eb37c(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0eb37c  push ebp
    X86_AT(c, 0xeb37cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0eb37d  mov ebp, esp
    X86_AT(c, 0xeb37du);
    c.r[5] = c.r[4];
    // 0eb37f  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xeb37fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0eb382  call 0xea10c
    X86_AT(c, 0xeb382u);
    push32(c, 0xeb387u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xeb387u);
    X86_TICK(c, 12);
    // 0eb387  push dword ptr [ebp + 8]
    X86_AT(c, 0xeb387u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0eb38a  call 0xeb8e8
    X86_AT(c, 0xeb38au);
    push32(c, 0xeb38fu); x86_call_known(c, 0xeb8e8u, f_000eb8e8); X86_RET(c, 0xeb38fu);
    X86_TICK(c, 16);
    // 0eb38f  leave 
    X86_AT(c, 0xeb38fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eb390  ret 8
    X86_AT(c, 0xeb390u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xeb37cu, "ran off the end of a function");
}
void f_000eb3ac(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0eb3ac  enter 0x14, 0
    X86_AT(c, 0xeb3acu);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 0eb3b0  call 0xea060
    X86_AT(c, 0xeb3b0u);
    push32(c, 0xeb3b5u); x86_call_known(c, 0xea060u, f_000ea060); X86_RET(c, 0xeb3b5u);
    X86_TICK(c, 12);
    // 0eb3b5  cmp byte ptr [0xc41b3], 0
    X86_AT(c, 0xeb3b5u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x0u, 0, 1);
    // 0eb3bc  je 0xeb3d3
    X86_AT(c, 0xeb3bcu);
    if (x86_cc(c, 4)) { goto L_eb3d3; }
    X86_TICK(c, 12);
    // 0eb3be  push dword ptr [ebp + 8]
    X86_AT(c, 0xeb3beu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0eb3c1  call 0xe9d47
    X86_AT(c, 0xeb3c1u);
    push32(c, 0xeb3c6u); x86_call_known(c, 0xe9d47u, f_000e9d47); X86_RET(c, 0xeb3c6u);
    X86_TICK(c, 12);
    // 0eb3c6  push dword ptr [0xc427c]
    X86_AT(c, 0xeb3c6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0eb3cc  call 0xe9d68
    X86_AT(c, 0xeb3ccu);
    push32(c, 0xeb3d1u); x86_call_known(c, 0xe9d68u, f_000e9d68); X86_RET(c, 0xeb3d1u);
    X86_TICK(c, 7);
    // 0eb3d1  jmp 0xeb3e1
    X86_AT(c, 0xeb3d1u);
    goto L_eb3e1;
L_eb3d3:
    X86_TICK(c, 17);
    // 0eb3d3  push dword ptr [ebp + 8]
    X86_AT(c, 0xeb3d3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0eb3d6  push dword ptr [0xc427c]
    X86_AT(c, 0xeb3d6u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0eb3dc  call 0xeb668
    X86_AT(c, 0xeb3dcu);
    push32(c, 0xeb3e1u); x86_call_known(c, 0xeb668u, f_000eb668); X86_RET(c, 0xeb3e1u);
L_eb3e1:
    X86_TICK(c, 16);
    // 0eb3e1  leave 
    X86_AT(c, 0xeb3e1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eb3e2  ret 4
    X86_AT(c, 0xeb3e2u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xeb3acu, "ran off the end of a function");
}
void f_000eb3e8(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0eb3e8  enter 0x24, 0
    X86_AT(c, 0xeb3e8u);
    x86_enter(c, 0x24u, 0x0u, 4);
    // 0eb3ec  push esi
    X86_AT(c, 0xeb3ecu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb3ed  push edi
    X86_AT(c, 0xeb3edu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb3ee  cmp byte ptr [0xc41b3], 0
    X86_AT(c, 0xeb3eeu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x0u, 0, 1);
    // 0eb3f5  je 0xeb417
    X86_AT(c, 0xeb3f5u);
    if (x86_cc(c, 4)) { goto L_eb417; }
    X86_TICK(c, 20);
    // 0eb3f7  push dword ptr [0xc427c]
    X86_AT(c, 0xeb3f7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0eb3fd  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xeb3fdu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb402  sub eax, 0xc
    X86_AT(c, 0xeb402u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0eb405  push eax
    X86_AT(c, 0xeb405u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb406  call 0xe9cfd
    X86_AT(c, 0xeb406u);
    push32(c, 0xeb40bu); x86_call_known(c, 0xe9cfdu, f_000e9cfd); X86_RET(c, 0xeb40bu);
    X86_TICK(c, 14);
    // 0eb40b  add dword ptr [0xc427c], 0xfffffff4
    X86_AT(c, 0xeb40bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0eb412  jmp 0xeb506
    X86_AT(c, 0xeb412u);
    goto L_eb506;
L_eb417:
    X86_TICK(c, 48);
    // 0eb417  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xeb417u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb41c  lea edx, [ebp - 0x14]
    X86_AT(c, 0xeb41cu);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0eb41f  push esi
    X86_AT(c, 0xeb41fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb420  push edi
    X86_AT(c, 0xeb420u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb421  mov esi, eax
    X86_AT(c, 0xeb421u);
    c.r[6] = c.r[0];
    // 0eb423  mov edi, edx
    X86_AT(c, 0xeb423u);
    c.r[7] = c.r[2];
    // 0eb425  mov ecx, 3
    X86_AT(c, 0xeb425u);
    c.r[1] = 0x3u;
    // 0eb42a  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xeb42au);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0eb42c  pop edi
    X86_AT(c, 0xeb42cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb42d  pop esi
    X86_AT(c, 0xeb42du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eb42e  xchg esi, eax
    X86_AT(c, 0xeb42eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0eb42f  sub esi, 0xc
    X86_AT(c, 0xeb42fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0eb432  cmp byte ptr [ebp - 9], 0
    X86_AT(c, 0xeb432u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0eb436  jne 0xeb43e
    X86_AT(c, 0xeb436u);
    if (x86_cc(c, 5)) { goto L_eb43e; }
    X86_TICK(c, 12);
    // 0eb438  cmp byte ptr [esi + 0xb], 0
    X86_AT(c, 0xeb438u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xBu))), 0x0u, 0, 1);
    // 0eb43c  je 0xeb464
    X86_AT(c, 0xeb43cu);
    if (x86_cc(c, 4)) { goto L_eb464; }
L_eb43e:
    X86_TICK(c, 45);
    // 0eb43e  add dword ptr [0xc427c], 0xfffffff4
    X86_AT(c, 0xeb43eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0eb445  mov eax, 0xc428c
    X86_AT(c, 0xeb445u);
    c.r[0] = 0xC428Cu;
    // 0eb44a  mov edx, dword ptr [0xc427c]
    X86_AT(c, 0xeb44au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb450  push esi
    X86_AT(c, 0xeb450u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb451  push edi
    X86_AT(c, 0xeb451u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb452  mov esi, eax
    X86_AT(c, 0xeb452u);
    c.r[6] = c.r[0];
    // 0eb454  mov edi, edx
    X86_AT(c, 0xeb454u);
    c.r[7] = c.r[2];
    // 0eb456  mov ecx, 3
    X86_AT(c, 0xeb456u);
    c.r[1] = 0x3u;
    // 0eb45b  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xeb45bu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0eb45d  pop edi
    X86_AT(c, 0xeb45du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb45e  pop esi
    X86_AT(c, 0xeb45eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eb45f  jmp 0xeb506
    X86_AT(c, 0xeb45fu);
    goto L_eb506;
L_eb464:
    X86_TICK(c, 69);
    // 0eb464  add dword ptr [0xc427c], 0xfffffff4
    X86_AT(c, 0xeb464u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0eb46b  mov al, byte ptr [ebp - 0xa]
    X86_AT(c, 0xeb46bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 0eb46e  cmp al, byte ptr [esi + 0xa]
    X86_AT(c, 0xeb46eu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu))), 0, 1);
    // 0eb471  setne byte ptr [ebp - 0xa]
    X86_AT(c, 0xeb471u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), x86_cc(c, 5) ? 1u : 0u);
    // 0eb475  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0xeb475u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 0eb479  sub ax, 0x3fff
    X86_AT(c, 0xeb479u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 0eb47d  add ax, word ptr [esi + 8]
    X86_AT(c, 0xeb47du);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 0eb481  inc eax
    X86_AT(c, 0xeb481u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0eb482  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0xeb482u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 0eb486  push dword ptr [esi + 4]
    X86_AT(c, 0xeb486u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))); push32(c, v); }
    // 0eb489  push dword ptr [esi]
    X86_AT(c, 0xeb489u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 0eb48b  push dword ptr [ebp - 0x10]
    X86_AT(c, 0xeb48bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 0eb48e  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xeb48eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0eb491  lea eax, [ebp - 0x24]
    X86_AT(c, 0xeb491u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0eb494  push eax
    X86_AT(c, 0xeb494u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb495  call 0xeba80
    X86_AT(c, 0xeb495u);
    push32(c, 0xeb49au); x86_call_known(c, 0xeba80u, f_000eba80); X86_RET(c, 0xeb49au);
    X86_TICK(c, 9);
    // 0eb49a  mov di, 0x80
    X86_AT(c, 0xeb49au);
    s16(c, 7, 0x80u);
    // 0eb49e  jmp 0xeb4ae
    X86_AT(c, 0xeb49eu);
    goto L_eb4ae;
L_eb4a0:
    X86_TICK(c, 19);
    // 0eb4a0  dec word ptr [ebp - 0xc]
    X86_AT(c, 0xeb4a0u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0eb4a4  dec edi
    X86_AT(c, 0xeb4a4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0eb4a5  lea eax, [ebp - 0x24]
    X86_AT(c, 0xeb4a5u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0eb4a8  push eax
    X86_AT(c, 0xeb4a8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb4a9  call 0xea02b
    X86_AT(c, 0xeb4a9u);
    push32(c, 0xeb4aeu); x86_call_known(c, 0xea02bu, f_000ea02b); X86_RET(c, 0xeb4aeu);
L_eb4ae:
    X86_TICK(c, 12);
    // 0eb4ae  cmp byte ptr [ebp - 0x15], 0x80
    X86_AT(c, 0xeb4aeu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEBu))), 0x80u, 0, 1);
    // 0eb4b2  jae 0xeb4b9
    X86_AT(c, 0xeb4b2u);
    if (x86_cc(c, 3)) { goto L_eb4b9; }
    X86_TICK(c, 7);
    // 0eb4b4  and di, di
    X86_AT(c, 0xeb4b4u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 0eb4b7  ja 0xeb4a0
    X86_AT(c, 0xeb4b7u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xeb4a0u); goto L_eb4a0; }
L_eb4b9:
    X86_TICK(c, 24);
    // 0eb4b9  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xeb4b9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0eb4bc  mov edx, dword ptr [ebp - 0x18]
    X86_AT(c, 0xeb4bcu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0eb4bf  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xeb4bfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0eb4c2  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xeb4c2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0eb4c5  cmp byte ptr [ebp - 0x1d], 0x80
    X86_AT(c, 0xeb4c5u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE3u))), 0x80u, 0, 1);
    // 0eb4c9  jb 0xeb4e8
    X86_AT(c, 0xeb4c9u);
    if (x86_cc(c, 2)) { goto L_eb4e8; }
    X86_TICK(c, 21);
    // 0eb4cb  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xeb4cbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0eb4d2  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0xeb4d2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 0eb4d9  push 4
    X86_AT(c, 0xeb4d9u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0eb4db  lea eax, [ebp - 8]
    X86_AT(c, 0xeb4dbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0eb4de  push eax
    X86_AT(c, 0xeb4deu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb4df  lea eax, [ebp - 0x14]
    X86_AT(c, 0xeb4dfu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0eb4e2  push eax
    X86_AT(c, 0xeb4e2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb4e3  call 0xe9ef4
    X86_AT(c, 0xeb4e3u);
    push32(c, 0xeb4e8u); x86_call_known(c, 0xe9ef4u, f_000e9ef4); X86_RET(c, 0xeb4e8u);
L_eb4e8:
    X86_TICK(c, 40);
    // 0eb4e8  lea eax, [ebp - 0x14]
    X86_AT(c, 0xeb4e8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0eb4eb  mov edx, dword ptr [0xc427c]
    X86_AT(c, 0xeb4ebu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb4f1  push esi
    X86_AT(c, 0xeb4f1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb4f2  push edi
    X86_AT(c, 0xeb4f2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb4f3  mov esi, eax
    X86_AT(c, 0xeb4f3u);
    c.r[6] = c.r[0];
    // 0eb4f5  mov edi, edx
    X86_AT(c, 0xeb4f5u);
    c.r[7] = c.r[2];
    // 0eb4f7  mov ecx, 3
    X86_AT(c, 0xeb4f7u);
    c.r[1] = 0x3u;
    // 0eb4fc  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xeb4fcu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0eb4fe  pop edi
    X86_AT(c, 0xeb4feu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb4ff  pop esi
    X86_AT(c, 0xeb4ffu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eb500  push edx
    X86_AT(c, 0xeb500u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0eb501  call 0xea084
    X86_AT(c, 0xeb501u);
    push32(c, 0xeb506u); x86_call_known(c, 0xea084u, f_000ea084); X86_RET(c, 0xeb506u);
L_eb506:
    X86_TICK(c, 24);
    // 0eb506  pop edi
    X86_AT(c, 0xeb506u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb507  pop esi
    X86_AT(c, 0xeb507u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eb508  leave 
    X86_AT(c, 0xeb508u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eb509  ret 
    X86_AT(c, 0xeb509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeb3e8u, "ran off the end of a function");
}
void f_000eb506(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0eb506  pop edi
    X86_AT(c, 0xeb506u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb507  pop esi
    X86_AT(c, 0xeb507u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eb508  leave 
    X86_AT(c, 0xeb508u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eb509  ret 
    X86_AT(c, 0xeb509u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeb506u, "ran off the end of a function");
}
void f_000eb50c(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0eb50c  call 0xea1ac
    X86_AT(c, 0xeb50cu);
    push32(c, 0xeb511u); x86_call_known(c, 0xea1acu, f_000ea1ac); X86_RET(c, 0xeb511u);
    X86_TICK(c, 7);
    // 0eb511  call 0xeb518
    X86_AT(c, 0xeb511u);
    push32(c, 0xeb516u); x86_call_known(c, 0xeb518u, f_000eb518); X86_RET(c, 0xeb516u);
    X86_TICK(c, 10);
    // 0eb516  ret 
    X86_AT(c, 0xeb516u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeb50cu, "ran off the end of a function");
}
void f_000eb518(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0eb518  push ebx
    X86_AT(c, 0xeb518u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eb519  push esi
    X86_AT(c, 0xeb519u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb51a  push edi
    X86_AT(c, 0xeb51au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb51b  cmp byte ptr [0xc41b3], 0
    X86_AT(c, 0xeb51bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x0u, 0, 1);
    // 0eb522  je 0xeb53a
    X86_AT(c, 0xeb522u);
    if (x86_cc(c, 4)) { goto L_eb53a; }
    X86_TICK(c, 20);
    // 0eb524  push dword ptr [0xc427c]
    X86_AT(c, 0xeb524u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0eb52a  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xeb52au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb52f  sub eax, 0xc
    X86_AT(c, 0xeb52fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0eb532  push eax
    X86_AT(c, 0xeb532u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb533  call 0xe9d04
    X86_AT(c, 0xeb533u);
    push32(c, 0xeb538u); x86_call_known(c, 0xe9d04u, f_000e9d04); X86_RET(c, 0xeb538u);
    X86_TICK(c, 7);
    // 0eb538  jmp 0xeb58b
    X86_AT(c, 0xeb538u);
    goto L_eb58b;
L_eb53a:
    X86_TICK(c, 35);
    // 0eb53a  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xeb53au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb53f  mov dl, byte ptr [eax + 0xa]
    X86_AT(c, 0xeb53fu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))));
    // 0eb542  cmp dl, byte ptr [eax - 2]
    X86_AT(c, 0xeb542u);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu))), 0, 1);
    // 0eb545  setne byte ptr [eax - 2]
    X86_AT(c, 0xeb545u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu)), x86_cc(c, 5) ? 1u : 0u);
    // 0eb549  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xeb549u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb54e  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0xeb54eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 0eb552  je 0xeb580
    X86_AT(c, 0xeb552u);
    if (x86_cc(c, 4)) { goto L_eb580; }
    X86_TICK(c, 36);
    // 0eb554  add dword ptr [0xc427c], 0xfffffff4
    X86_AT(c, 0xeb554u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0eb55b  mov ax, word ptr [0xc42ac]
    X86_AT(c, 0xeb55bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC42ACu))));
    // 0eb561  mov edx, dword ptr [0xc427c]
    X86_AT(c, 0xeb561u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb567  mov word ptr [edx + 8], ax
    X86_AT(c, 0xeb567u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 0eb56b  mov eax, dword ptr [0xc42a4]
    X86_AT(c, 0xeb56bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC42A4u)));
    // 0eb570  mov ecx, dword ptr [0xc42a8]
    X86_AT(c, 0xeb570u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0xC42A8u)));
    // 0eb576  mov dword ptr [edx], eax
    X86_AT(c, 0xeb576u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0eb578  mov dword ptr [edx + 4], ecx
    X86_AT(c, 0xeb578u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[1]);
    // 0eb57b  jmp 0xeb662
    X86_AT(c, 0xeb57bu);
    goto L_eb662;
L_eb580:
    X86_TICK(c, 16);
    // 0eb580  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xeb580u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb585  cmp byte ptr [eax - 1], 0
    X86_AT(c, 0xeb585u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0eb589  je 0xeb5ae
    X86_AT(c, 0xeb589u);
    if (x86_cc(c, 4)) { goto L_eb5ae; }
L_eb58b:
    X86_TICK(c, 14);
    // 0eb58b  add dword ptr [0xc427c], 0xfffffff4
    X86_AT(c, 0xeb58bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0eb592  jmp 0xeb662
    X86_AT(c, 0xeb592u);
    goto L_eb662;
L_eb597:
    X86_TICK(c, 15);
    // 0eb597  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xeb597u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb59c  sub eax, 0xc
    X86_AT(c, 0xeb59cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0eb59f  push eax
    X86_AT(c, 0xeb59fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb5a0  call 0xe9fcc
    X86_AT(c, 0xeb5a0u);
    push32(c, 0xeb5a5u); x86_call_known(c, 0xe9fccu, f_000e9fcc); X86_RET(c, 0xeb5a5u);
    X86_TICK(c, 10);
    // 0eb5a5  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xeb5a5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb5aa  dec word ptr [eax - 4]
    X86_AT(c, 0xeb5aau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_eb5ae:
    X86_TICK(c, 16);
    // 0eb5ae  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xeb5aeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb5b3  cmp byte ptr [eax - 5], 0x80
    X86_AT(c, 0xeb5b3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFBu))), 0x80u, 0, 1);
    // 0eb5b7  jb 0xeb597
    X86_AT(c, 0xeb5b7u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb597u); goto L_eb597; }
    X86_TICK(c, 7);
    // 0eb5b9  jmp 0xeb5cf
    X86_AT(c, 0xeb5b9u);
    goto L_eb5cf;
L_eb5bb:
    X86_TICK(c, 12);
    // 0eb5bb  push dword ptr [0xc427c]
    X86_AT(c, 0xeb5bbu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0eb5c1  call 0xe9fcc
    X86_AT(c, 0xeb5c1u);
    push32(c, 0xeb5c6u); x86_call_known(c, 0xe9fccu, f_000e9fcc); X86_RET(c, 0xeb5c6u);
    X86_TICK(c, 10);
    // 0eb5c6  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xeb5c6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb5cb  dec word ptr [eax + 8]
    X86_AT(c, 0xeb5cbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_eb5cf:
    X86_TICK(c, 16);
    // 0eb5cf  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xeb5cfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb5d4  cmp byte ptr [eax + 7], 0x80
    X86_AT(c, 0xeb5d4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x7u))), 0x80u, 0, 1);
    // 0eb5d8  jb 0xeb5bb
    X86_AT(c, 0xeb5d8u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xeb5bbu); goto L_eb5bb; }
    X86_TICK(c, 35);
    // 0eb5da  push dword ptr [eax + 4]
    X86_AT(c, 0xeb5dau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 0eb5dd  push dword ptr [eax]
    X86_AT(c, 0xeb5ddu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 0eb5df  push dword ptr [eax - 8]
    X86_AT(c, 0xeb5dfu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF8u))); push32(c, v); }
    // 0eb5e2  push dword ptr [eax - 0xc]
    X86_AT(c, 0xeb5e2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF4u))); push32(c, v); }
    // 0eb5e5  lea edx, [eax - 0xc]
    X86_AT(c, 0xeb5e5u);
    c.r[2] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 0eb5e8  push edx
    X86_AT(c, 0xeb5e8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0eb5e9  mov ebx, eax
    X86_AT(c, 0xeb5e9u);
    c.r[3] = c.r[0];
    // 0eb5eb  mov esi, edx
    X86_AT(c, 0xeb5ebu);
    c.r[6] = c.r[2];
    // 0eb5ed  call 0xebacc
    X86_AT(c, 0xeb5edu);
    push32(c, 0xeb5f2u); x86_call_known(c, 0xebaccu, f_000ebacc); X86_RET(c, 0xeb5f2u);
    X86_TICK(c, 35);
    // 0eb5f2  movzx eax, ax
    X86_AT(c, 0xeb5f2u);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 0eb5f5  movzx edx, word ptr [ebx + 8]
    X86_AT(c, 0xeb5f5u);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0eb5f9  movzx edi, word ptr [esi + 8]
    X86_AT(c, 0xeb5f9u);
    c.r[7] = rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0eb5fd  sub edi, edx
    X86_AT(c, 0xeb5fdu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0eb5ff  add edi, 0x403e
    X86_AT(c, 0xeb5ffu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x403Eu, 0, 4); }
    // 0eb605  sub edi, eax
    X86_AT(c, 0xeb605u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eb607  add dword ptr [0xc427c], 0xfffffff4
    X86_AT(c, 0xeb607u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0eb60e  and edi, edi
    X86_AT(c, 0xeb60eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0eb610  jge 0xeb64b
    X86_AT(c, 0xeb610u);
    if (x86_cc(c, 13)) { goto L_eb64b; }
    X86_TICK(c, 7);
    // 0eb612  cmp edi, 0xffffffc1
    X86_AT(c, 0xeb612u);
    (void)x86_sub(c, c.r[7], 0xFFFFFFC1u, 0, 4);
    // 0eb615  jl 0xeb634
    X86_AT(c, 0xeb615u);
    if (x86_cc(c, 12)) { goto L_eb634; }
    X86_TICK(c, 18);
    // 0eb617  mov eax, edi
    X86_AT(c, 0xeb617u);
    c.r[0] = c.r[7];
    // 0eb619  neg eax
    X86_AT(c, 0xeb619u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0eb61b  push eax
    X86_AT(c, 0xeb61bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb61c  push dword ptr [0xc427c]
    X86_AT(c, 0xeb61cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0eb622  call 0xe9fe8
    X86_AT(c, 0xeb622u);
    push32(c, 0xeb627u); x86_call_known(c, 0xe9fe8u, f_000e9fe8); X86_RET(c, 0xeb627u);
    X86_TICK(c, 13);
    // 0eb627  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xeb627u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb62c  mov word ptr [eax + 8], 0
    X86_AT(c, 0xeb62cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), 0x0u);
    // 0eb632  jmp 0xeb657
    X86_AT(c, 0xeb632u);
    goto L_eb657;
L_eb634:
    X86_TICK(c, 30);
    // 0eb634  mov esi, 0xc428c
    X86_AT(c, 0xeb634u);
    c.r[6] = 0xC428Cu;
    // 0eb639  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xeb639u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb63e  push edi
    X86_AT(c, 0xeb63eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb63f  mov edi, eax
    X86_AT(c, 0xeb63fu);
    c.r[7] = c.r[0];
    // 0eb641  mov ecx, 3
    X86_AT(c, 0xeb641u);
    c.r[1] = 0x3u;
    // 0eb646  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xeb646u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0eb648  pop edi
    X86_AT(c, 0xeb648u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb649  jmp 0xeb657
    X86_AT(c, 0xeb649u);
    goto L_eb657;
L_eb64b:
    X86_TICK(c, 8);
    // 0eb64b  mov eax, edi
    X86_AT(c, 0xeb64bu);
    c.r[0] = c.r[7];
    // 0eb64d  mov edx, dword ptr [0xc427c]
    X86_AT(c, 0xeb64du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb653  mov word ptr [edx + 8], ax
    X86_AT(c, 0xeb653u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[0] & 0xFFFFu));
L_eb657:
    X86_TICK(c, 12);
    // 0eb657  push dword ptr [0xc427c]
    X86_AT(c, 0xeb657u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0eb65d  call 0xea084
    X86_AT(c, 0xeb65du);
    push32(c, 0xeb662u); x86_call_known(c, 0xea084u, f_000ea084); X86_RET(c, 0xeb662u);
L_eb662:
    X86_TICK(c, 22);
    // 0eb662  pop edi
    X86_AT(c, 0xeb662u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb663  pop esi
    X86_AT(c, 0xeb663u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eb664  pop ebx
    X86_AT(c, 0xeb664u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0eb665  ret 
    X86_AT(c, 0xeb665u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeb518u, "ran off the end of a function");
}
void f_000eb662(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0eb662  pop edi
    X86_AT(c, 0xeb662u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb663  pop esi
    X86_AT(c, 0xeb663u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eb664  pop ebx
    X86_AT(c, 0xeb664u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0eb665  ret 
    X86_AT(c, 0xeb665u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeb662u, "ran off the end of a function");
}
void f_000eb668(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0eb668  push ebp
    X86_AT(c, 0xeb668u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0eb669  mov ebp, esp
    X86_AT(c, 0xeb669u);
    c.r[5] = c.r[4];
    // 0eb66b  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xeb66bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0eb66e  mov ecx, eax
    X86_AT(c, 0xeb66eu);
    c.r[1] = c.r[0];
    // 0eb670  shl ecx, 1
    X86_AT(c, 0xeb670u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 0eb672  shr ecx, 0x18
    X86_AT(c, 0xeb672u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[1] = r; }
    // 0eb675  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xeb675u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0eb678  cmp cl, 0xff
    X86_AT(c, 0xeb678u);
    (void)x86_sub(c, g8(c, 1), 0xFFu, 0, 1);
    // 0eb67b  je 0xeb6bd
    X86_AT(c, 0xeb67bu);
    if (x86_cc(c, 4)) { goto L_eb6bd; }
    X86_TICK(c, 7);
    // 0eb67d  and cl, cl
    X86_AT(c, 0xeb67du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 0eb67f  je 0xeb6c7
    X86_AT(c, 0xeb67fu);
    if (x86_cc(c, 4)) { goto L_eb6c7; }
    X86_TICK(c, 6);
    // 0eb681  mov byte ptr [edx + 0xb], 0
    X86_AT(c, 0xeb681u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x0u);
    // 0eb685  sub cx, 0x7f
    X86_AT(c, 0xeb685u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x7Fu, 0, 2)); }
    // 0eb689  add cx, 0x3fff
    X86_AT(c, 0xeb689u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x3FFFu, 0, 2)); }
L_eb68e:
    X86_TICK(c, 9);
    // 0eb68e  mov word ptr [edx + 8], cx
    X86_AT(c, 0xeb68eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[1] & 0xFFFFu));
    // 0eb692  test eax, 0x80000000
    X86_AT(c, 0xeb692u);
    (void)x86_logic(c, c.r[0] & 0x80000000u, 4);
    // 0eb697  je 0xeb69f
    X86_AT(c, 0xeb697u);
    if (x86_cc(c, 4)) { goto L_eb69f; }
    X86_TICK(c, 9);
    // 0eb699  mov byte ptr [edx + 0xa], 1
    X86_AT(c, 0xeb699u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xAu)), 0x1u);
    // 0eb69d  jmp 0xeb6a3
    X86_AT(c, 0xeb69du);
    goto L_eb6a3;
L_eb69f:
    X86_TICK(c, 2);
    // 0eb69f  mov byte ptr [edx + 0xa], 0
    X86_AT(c, 0xeb69fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xAu)), 0x0u);
L_eb6a3:
    X86_TICK(c, 10);
    // 0eb6a3  shl eax, 8
    X86_AT(c, 0xeb6a3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0eb6a6  and cx, cx
    X86_AT(c, 0xeb6a6u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & (c.r[1] & 0xFFFFu), 2)); }
    // 0eb6a9  je 0xeb6b0
    X86_AT(c, 0xeb6a9u);
    if (x86_cc(c, 4)) { goto L_eb6b0; }
    X86_TICK(c, 2);
    // 0eb6ab  or eax, 0x80000000
    X86_AT(c, 0xeb6abu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | 0x80000000u, 4); }
L_eb6b0:
    X86_TICK(c, 18);
    // 0eb6b0  mov dword ptr [edx + 4], eax
    X86_AT(c, 0xeb6b0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[0]);
    // 0eb6b3  mov dword ptr [edx], 0
    X86_AT(c, 0xeb6b3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), 0x0u);
    // 0eb6b9  pop ebp
    X86_AT(c, 0xeb6b9u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0eb6ba  ret 8
    X86_AT(c, 0xeb6bau);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_eb6bd:
    X86_TICK(c, 11);
    // 0eb6bd  mov cx, 0x7fff
    X86_AT(c, 0xeb6bdu);
    s16(c, 1, 0x7FFFu);
    // 0eb6c1  mov byte ptr [edx + 0xb], 0
    X86_AT(c, 0xeb6c1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x0u);
    // 0eb6c5  jmp 0xeb68e
    X86_AT(c, 0xeb6c5u);
    X86_POLL(c, 0xeb68eu); goto L_eb68e;
L_eb6c7:
    X86_TICK(c, 9);
    // 0eb6c7  mov byte ptr [edx + 0xb], 1
    X86_AT(c, 0xeb6c7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x1u);
    // 0eb6cb  jmp 0xeb68e
    X86_AT(c, 0xeb6cbu);
    X86_POLL(c, 0xeb68eu); goto L_eb68e;
    x86_fault(c, 0xeb668u, "ran off the end of a function");
}
void f_000eb730(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0eb730  enter 0x10, 0
    X86_AT(c, 0xeb730u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 0eb734  push ebx
    X86_AT(c, 0xeb734u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eb735  push esi
    X86_AT(c, 0xeb735u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb736  push edi
    X86_AT(c, 0xeb736u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb737  cmp byte ptr [0xc41b3], 0
    X86_AT(c, 0xeb737u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x0u, 0, 1);
    // 0eb73e  je 0xeb75e
    X86_AT(c, 0xeb73eu);
    if (x86_cc(c, 4)) { goto L_eb75e; }
    X86_TICK(c, 12);
    // 0eb740  push dword ptr [0xc427c]
    X86_AT(c, 0xeb740u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0eb746  call 0xe9d72
    X86_AT(c, 0xeb746u);
    push32(c, 0xeb74bu); x86_call_known(c, 0xe9d72u, f_000e9d72); X86_RET(c, 0xeb74bu);
    X86_TICK(c, 7);
    // 0eb74b  call 0xe9dbb
    X86_AT(c, 0xeb74bu);
    push32(c, 0xeb750u); x86_call_known(c, 0xe9dbbu, f_000e9dbb); X86_RET(c, 0xeb750u);
    X86_TICK(c, 9);
    // 0eb750  mov word ptr [ebp - 2], ax
    X86_AT(c, 0xeb750u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 0eb754  call 0xe9d7b
    X86_AT(c, 0xeb754u);
    push32(c, 0xeb759u); x86_call_known(c, 0xe9d7bu, f_000e9d7b); X86_RET(c, 0xeb759u);
    X86_TICK(c, 7);
    // 0eb759  jmp 0xeb7e5
    X86_AT(c, 0xeb759u);
    goto L_eb7e5;
L_eb75e:
    X86_TICK(c, 13);
    // 0eb75e  mov eax, 0xc41e0
    X86_AT(c, 0xeb75eu);
    c.r[0] = 0xC41E0u;
    // 0eb763  cmp eax, dword ptr [0xc427c]
    X86_AT(c, 0xeb763u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xC427Cu))), 0, 4);
    // 0eb769  jne 0xeb76f
    X86_AT(c, 0xeb769u);
    if (x86_cc(c, 5)) { goto L_eb76f; }
    X86_TICK(c, 9);
    // 0eb76b  mov bl, 0x41
    X86_AT(c, 0xeb76bu);
    s8(c, 3, 0x41u);
    // 0eb76d  jmp 0xeb7c7
    X86_AT(c, 0xeb76du);
    goto L_eb7c7;
L_eb76f:
    X86_TICK(c, 33);
    // 0eb76f  mov esi, dword ptr [0xc427c]
    X86_AT(c, 0xeb76fu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb775  lea edi, [ebp - 0x10]
    X86_AT(c, 0xeb775u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0eb778  mov ecx, 3
    X86_AT(c, 0xeb778u);
    c.r[1] = 0x3u;
    // 0eb77d  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xeb77du);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0eb77f  mov bl, byte ptr [ebp - 6]
    X86_AT(c, 0xeb77fu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))));
    // 0eb782  add ebx, ebx
    X86_AT(c, 0xeb782u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[3], 0, 4); }
    // 0eb784  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0xeb784u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 0eb788  je 0xeb78f
    X86_AT(c, 0xeb788u);
    if (x86_cc(c, 4)) { goto L_eb78f; }
    X86_TICK(c, 9);
    // 0eb78a  or bl, 0x40
    X86_AT(c, 0xeb78au);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x40u, 1)); }
    // 0eb78d  jmp 0xeb7c7
    X86_AT(c, 0xeb78du);
    goto L_eb7c7;
L_eb78f:
    X86_TICK(c, 12);
    // 0eb78f  cmp word ptr [ebp - 8], 0x7fff
    X86_AT(c, 0xeb78fu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x7FFFu, 0, 2);
    // 0eb795  jne 0xeb7b2
    X86_AT(c, 0xeb795u);
    if (x86_cc(c, 5)) { goto L_eb7b2; }
    X86_TICK(c, 18);
    // 0eb797  lea esi, [ebp - 0x10]
    X86_AT(c, 0xeb797u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0eb79a  mov edi, 0xc42a4
    X86_AT(c, 0xeb79au);
    c.r[7] = 0xC42A4u;
    // 0eb79f  mov ecx, 8
    X86_AT(c, 0xeb79fu);
    c.r[1] = 0x8u;
    // 0eb7a4  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0xeb7a4u);
    x86_string(c, 1, 1, 243, 4, 3);
    // 0eb7a6  jne 0xeb7ad
    X86_AT(c, 0xeb7a6u);
    if (x86_cc(c, 5)) { goto L_eb7ad; }
    X86_TICK(c, 9);
    // 0eb7a8  or bl, 5
    X86_AT(c, 0xeb7a8u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x5u, 1)); }
    // 0eb7ab  jmp 0xeb7c7
    X86_AT(c, 0xeb7abu);
    goto L_eb7c7;
L_eb7ad:
    X86_TICK(c, 9);
    // 0eb7ad  or bl, 1
    X86_AT(c, 0xeb7adu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x1u, 1)); }
    // 0eb7b0  jmp 0xeb7c7
    X86_AT(c, 0xeb7b0u);
    goto L_eb7c7;
L_eb7b2:
    X86_TICK(c, 12);
    // 0eb7b2  cmp word ptr [ebp - 8], 0
    X86_AT(c, 0xeb7b2u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 2);
    // 0eb7b7  jne 0xeb7be
    X86_AT(c, 0xeb7b7u);
    if (x86_cc(c, 5)) { goto L_eb7be; }
    X86_TICK(c, 9);
    // 0eb7b9  or bl, 0x44
    X86_AT(c, 0xeb7b9u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x44u, 1)); }
    // 0eb7bc  jmp 0xeb7c7
    X86_AT(c, 0xeb7bcu);
    goto L_eb7c7;
L_eb7be:
    X86_TICK(c, 12);
    // 0eb7be  cmp byte ptr [ebp - 9], 0x80
    X86_AT(c, 0xeb7beu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x80u, 0, 1);
    // 0eb7c2  jb 0xeb7c7
    X86_AT(c, 0xeb7c2u);
    if (x86_cc(c, 2)) { goto L_eb7c7; }
    X86_TICK(c, 2);
    // 0eb7c4  or bl, 4
    X86_AT(c, 0xeb7c4u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x4u, 1)); }
L_eb7c7:
    X86_TICK(c, 27);
    // 0eb7c7  mov ax, word ptr [0xc4280]
    X86_AT(c, 0xeb7c7u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC4280u))));
    // 0eb7cd  and ax, 0xb800
    X86_AT(c, 0xeb7cdu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xB800u, 2)); }
    // 0eb7d1  sub bh, bh
    X86_AT(c, 0xeb7d1u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, g8(c, 7), 0, 1)); }
    // 0eb7d3  mov edx, ebx
    X86_AT(c, 0xeb7d3u);
    c.r[2] = c.r[3];
    // 0eb7d5  shl edx, 8
    X86_AT(c, 0xeb7d5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 0eb7d8  or dx, ax
    X86_AT(c, 0xeb7d8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 0eb7db  mov word ptr [0xc4280], dx
    X86_AT(c, 0xeb7dbu);
    wr16((c.sbase[3] + (uint32_t)(0xC4280u)), (c.r[2] & 0xFFFFu));
    // 0eb7e2  xchg edx, eax
    X86_AT(c, 0xeb7e2u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0eb7e3  jmp 0xeb7e9
    X86_AT(c, 0xeb7e3u);
    goto L_eb7e9;
L_eb7e5:
    X86_TICK(c, 4);
    // 0eb7e5  mov ax, word ptr [ebp - 2]
    X86_AT(c, 0xeb7e5u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
L_eb7e9:
    X86_TICK(c, 28);
    // 0eb7e9  pop edi
    X86_AT(c, 0xeb7e9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eb7ea  pop esi
    X86_AT(c, 0xeb7eau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eb7eb  pop ebx
    X86_AT(c, 0xeb7ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0eb7ec  leave 
    X86_AT(c, 0xeb7ecu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eb7ed  ret 
    X86_AT(c, 0xeb7edu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xeb730u, "ran off the end of a function");
}
void f_000eb8e8(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0eb8e8  enter 0x2c, 0
    X86_AT(c, 0xeb8e8u);
    x86_enter(c, 0x2Cu, 0x0u, 4);
    // 0eb8ec  push ebx
    X86_AT(c, 0xeb8ecu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eb8ed  push esi
    X86_AT(c, 0xeb8edu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0eb8ee  push edi
    X86_AT(c, 0xeb8eeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eb8ef  cmp byte ptr [0xc41b3], 0
    X86_AT(c, 0xeb8efu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x0u, 0, 1);
    // 0eb8f6  je 0xeb910
    X86_AT(c, 0xeb8f6u);
    if (x86_cc(c, 4)) { goto L_eb910; }
    X86_TICK(c, 12);
    // 0eb8f8  push dword ptr [0xc427c]
    X86_AT(c, 0xeb8f8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0eb8fe  call 0xe9d72
    X86_AT(c, 0xeb8feu);
    push32(c, 0xeb903u); x86_call_known(c, 0xe9d72u, f_000e9d72); X86_RET(c, 0xeb903u);
    X86_TICK(c, 12);
    // 0eb903  push dword ptr [ebp + 8]
    X86_AT(c, 0xeb903u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0eb906  call 0xe9dc3
    X86_AT(c, 0xeb906u);
    push32(c, 0xeb90bu); x86_call_known(c, 0xe9dc3u, f_000e9dc3); X86_RET(c, 0xeb90bu);
    X86_TICK(c, 7);
    // 0eb90b  jmp 0xeba71
    X86_AT(c, 0xeb90bu);
    goto L_eba71;
L_eb910:
    X86_TICK(c, 35);
    // 0eb910  mov esi, dword ptr [0xc427c]
    X86_AT(c, 0xeb910u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0eb916  lea edi, [ebp - 0xc]
    X86_AT(c, 0xeb916u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0eb919  mov ecx, 3
    X86_AT(c, 0xeb919u);
    c.r[1] = 0x3u;
    // 0eb91e  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xeb91eu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0eb920  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0xeb920u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 0eb924  sub ax, 0x3fff
    X86_AT(c, 0xeb924u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 0eb928  mov word ptr [ebp - 0x10], ax
    X86_AT(c, 0xeb928u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[0] & 0xFFFFu));
    // 0eb92c  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xeb92cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0eb930  je 0xeb93b
    X86_AT(c, 0xeb930u);
    if (x86_cc(c, 4)) { goto L_eb93b; }
    X86_TICK(c, 13);
    // 0eb932  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xeb932u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0eb935  mov byte ptr [eax + 9], 0x80
    X86_AT(c, 0xeb935u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)), 0x80u);
    // 0eb939  jmp 0xeb942
    X86_AT(c, 0xeb939u);
    goto L_eb942;
L_eb93b:
    X86_TICK(c, 6);
    // 0eb93b  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xeb93bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0eb93e  mov byte ptr [eax + 9], 0
    X86_AT(c, 0xeb93eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)), 0x0u);
L_eb942:
    X86_TICK(c, 12);
    // 0eb942  cmp word ptr [ebp - 0x10], 0x3f
    X86_AT(c, 0xeb942u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x3Fu, 0, 2);
    // 0eb947  jle 0xeb94f
    X86_AT(c, 0xeb947u);
    if (x86_cc(c, 14)) { goto L_eb94f; }
    X86_TICK(c, 9);
    // 0eb949  mov byte ptr [ebp - 0xd], 0x99
    X86_AT(c, 0xeb949u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x99u);
    // 0eb94d  jmp 0xeb953
    X86_AT(c, 0xeb94du);
    goto L_eb953;
L_eb94f:
    X86_TICK(c, 2);
    // 0eb94f  mov byte ptr [ebp - 0xd], 0
    X86_AT(c, 0xeb94fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x0u);
L_eb953:
    X86_TICK(c, 2);
    // 0eb953  mov word ptr [ebp - 0x12], 1
    X86_AT(c, 0xeb953u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)), 0x1u);
L_eb959:
    X86_TICK(c, 23);
    // 0eb959  movzx eax, word ptr [ebp - 0x12]
    X86_AT(c, 0xeb959u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)));
    // 0eb95d  mov dl, byte ptr [ebp - 0xd]
    X86_AT(c, 0xeb95du);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 0eb960  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xeb960u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0eb963  mov byte ptr [ecx + eax*1 - 1], dl
    X86_AT(c, 0xeb963u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0] + 0xFFFFFFFFu)), g8(c, 2));
    // 0eb967  cmp ax, 9
    X86_AT(c, 0xeb967u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x9u, 0, 2);
    // 0eb96b  jae 0xeb973
    X86_AT(c, 0xeb96bu);
    if (x86_cc(c, 3)) { goto L_eb973; }
    X86_TICK(c, 13);
    // 0eb96d  inc word ptr [ebp - 0x12]
    X86_AT(c, 0xeb96du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0eb971  jmp 0xeb959
    X86_AT(c, 0xeb971u);
    X86_POLL(c, 0xeb959u); goto L_eb959;
L_eb973:
    X86_TICK(c, 11);
    // 0eb973  mov ax, word ptr [ebp - 0x10]
    X86_AT(c, 0xeb973u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))));
    // 0eb977  and ax, ax
    X86_AT(c, 0xeb977u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0eb97a  jl 0xeba71
    X86_AT(c, 0xeb97au);
    if (x86_cc(c, 12)) { goto L_eba71; }
    X86_TICK(c, 7);
    // 0eb980  cmp ax, 0x3f
    X86_AT(c, 0xeb980u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x3Fu, 0, 2);
    // 0eb984  jg 0xeba71
    X86_AT(c, 0xeb984u);
    if (x86_cc(c, 15)) { goto L_eba71; }
    X86_TICK(c, 17);
    // 0eb98a  mov dx, 0x3f
    X86_AT(c, 0xeb98au);
    s16(c, 2, 0x3Fu);
    // 0eb98e  sub edx, eax
    X86_AT(c, 0xeb98eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0eb990  push edx
    X86_AT(c, 0xeb990u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0eb991  lea eax, [ebp - 0xc]
    X86_AT(c, 0xeb991u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0eb994  push eax
    X86_AT(c, 0xeb994u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eb995  call 0xe9fe8
    X86_AT(c, 0xeb995u);
    push32(c, 0xeb99au); x86_call_known(c, 0xe9fe8u, f_000e9fe8); X86_RET(c, 0xeb99au);
    X86_TICK(c, 26);
    // 0eb99a  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0xeb99au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0eb99d  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xeb99du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0eb9a0  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xeb9a0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0eb9a3  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0xeb9a3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
    // 0eb9a6  cmp dword ptr [ebp - 0x18], 0
    X86_AT(c, 0xeb9a6u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0x0u, 0, 4);
    // 0eb9aa  sete byte ptr [ebp - 0x26]
    X86_AT(c, 0xeb9aau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDAu)), x86_cc(c, 4) ? 1u : 0u);
    // 0eb9ae  mov byte ptr [ebp - 0x25], 0
    X86_AT(c, 0xeb9aeu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu)), 0x0u);
L_eb9b2:
    X86_TICK(c, 12);
    // 0eb9b2  cmp byte ptr [ebp - 0x26], 0
    X86_AT(c, 0xeb9b2u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDAu))), 0x0u, 0, 1);
    // 0eb9b6  je 0xeb9d8
    X86_AT(c, 0xeb9b6u);
    if (x86_cc(c, 4)) { goto L_eb9d8; }
    X86_TICK(c, 12);
    // 0eb9b8  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0xeb9b8u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 0eb9bc  je 0xeba71
    X86_AT(c, 0xeb9bcu);
    if (x86_cc(c, 4)) { goto L_eba71; }
    X86_TICK(c, 61);
    // 0eb9c2  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xeb9c2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0eb9c5  sub edx, edx
    X86_AT(c, 0xeb9c5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0eb9c7  mov ecx, 0xa
    X86_AT(c, 0xeb9c7u);
    c.r[1] = 0xAu;
    // 0eb9cc  div ecx
    X86_AT(c, 0xeb9ccu);
    x86_div(c, c.r[1], 4, 0xeb9ccu);
    // 0eb9ce  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0xeb9ceu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 0eb9d1  mov ebx, edx
    X86_AT(c, 0xeb9d1u);
    c.r[3] = c.r[2];
    // 0eb9d3  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xeb9d3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0eb9d6  jmp 0xeba38
    X86_AT(c, 0xeb9d6u);
    goto L_eba38;
L_eb9d8:
    X86_TICK(c, 17);
    // 0eb9d8  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0xeb9d8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0eb9db  or eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0xeb9dbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 4); }
    // 0eb9de  and eax, eax
    X86_AT(c, 0xeb9deu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0eb9e0  je 0xeba71
    X86_AT(c, 0xeb9e0u);
    if (x86_cc(c, 4)) { goto L_eba71; }
    X86_TICK(c, 4);
    // 0eb9e6  sub edi, edi
    X86_AT(c, 0xeb9e6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0eb9e8  mov si, 3
    X86_AT(c, 0xeb9e8u);
    s16(c, 6, 0x3u);
L_eb9ec:
    X86_TICK(c, 24);
    // 0eb9ec  movzx esi, si
    X86_AT(c, 0xeb9ecu);
    c.r[6] = (c.r[6] & 0xFFFFu);
    // 0eb9ef  shl edi, 0x10
    X86_AT(c, 0xeb9efu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[7] = r; }
    // 0eb9f2  movzx eax, word ptr [ebp + esi*2 - 0x1c]
    X86_AT(c, 0xeb9f2u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFE4u)));
    // 0eb9f7  or eax, edi
    X86_AT(c, 0xeb9f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[7], 4); }
    // 0eb9f9  xchg edi, eax
    X86_AT(c, 0xeb9f9u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0eb9fa  and edi, edi
    X86_AT(c, 0xeb9fau);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0eb9fc  jne 0xeba0a
    X86_AT(c, 0xeb9fcu);
    if (x86_cc(c, 5)) { goto L_eba0a; }
    X86_TICK(c, 13);
    // 0eb9fe  sub ebx, ebx
    X86_AT(c, 0xeb9feu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0eba00  sub bx, bx
    X86_AT(c, 0xeba00u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0eba03  mov word ptr [ebp + esi*2 - 0x24], bx
    X86_AT(c, 0xeba03u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFDCu)), (c.r[3] & 0xFFFFu));
    // 0eba08  jmp 0xeba24
    X86_AT(c, 0xeba08u);
    goto L_eba24;
L_eba0a:
    X86_TICK(c, 57);
    // 0eba0a  movzx esi, si
    X86_AT(c, 0xeba0au);
    c.r[6] = (c.r[6] & 0xFFFFu);
    // 0eba0d  mov eax, edi
    X86_AT(c, 0xeba0du);
    c.r[0] = c.r[7];
    // 0eba0f  sub edx, edx
    X86_AT(c, 0xeba0fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0eba11  mov ecx, 0xa
    X86_AT(c, 0xeba11u);
    c.r[1] = 0xAu;
    // 0eba16  div ecx
    X86_AT(c, 0xeba16u);
    x86_div(c, c.r[1], 4, 0xeba16u);
    // 0eba18  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0xeba18u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 0eba1b  mov word ptr [ebp + esi*2 - 0x24], ax
    X86_AT(c, 0xeba1bu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFDCu)), (c.r[0] & 0xFFFFu));
    // 0eba20  mov edi, edx
    X86_AT(c, 0xeba20u);
    c.r[7] = c.r[2];
    // 0eba22  mov ebx, edi
    X86_AT(c, 0xeba22u);
    c.r[3] = c.r[7];
L_eba24:
    X86_TICK(c, 7);
    // 0eba24  and si, si
    X86_AT(c, 0xeba24u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0eba27  jbe 0xeba2c
    X86_AT(c, 0xeba27u);
    if (x86_cc(c, 6)) { goto L_eba2c; }
    X86_TICK(c, 9);
    // 0eba29  dec esi
    X86_AT(c, 0xeba29u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0eba2a  jmp 0xeb9ec
    X86_AT(c, 0xeba2au);
    X86_POLL(c, 0xeb9ecu); goto L_eb9ec;
L_eba2c:
    X86_TICK(c, 12);
    // 0eba2c  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0xeba2cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 0eba2f  mov edx, dword ptr [ebp - 0x20]
    X86_AT(c, 0xeba2fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0eba32  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0xeba32u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 0eba35  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0xeba35u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
L_eba38:
    X86_TICK(c, 12);
    // 0eba38  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0xeba38u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 0eba3b  rcr al, 1
    X86_AT(c, 0xeba3bu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0eba3d  jb 0xeba4f
    X86_AT(c, 0xeba3du);
    if (x86_cc(c, 2)) { goto L_eba4f; }
    X86_TICK(c, 23);
    // 0eba3f  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0xeba3fu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 0eba42  shr al, 1
    X86_AT(c, 0xeba42u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0eba44  movzx eax, al
    X86_AT(c, 0xeba44u);
    c.r[0] = g8(c, 0);
    // 0eba47  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xeba47u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0eba4a  mov byte ptr [edx + eax*1], bl
    X86_AT(c, 0xeba4au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0])), g8(c, 3));
    // 0eba4d  jmp 0xeba62
    X86_AT(c, 0xeba4du);
    goto L_eba62;
L_eba4f:
    X86_TICK(c, 26);
    // 0eba4f  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0xeba4fu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 0eba52  shr al, 1
    X86_AT(c, 0xeba52u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0eba54  movzx eax, al
    X86_AT(c, 0xeba54u);
    c.r[0] = g8(c, 0);
    // 0eba57  mov edx, ebx
    X86_AT(c, 0xeba57u);
    c.r[2] = c.r[3];
    // 0eba59  shl dl, 4
    X86_AT(c, 0xeba59u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 2, r); }
    // 0eba5c  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xeba5cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0eba5f  add byte ptr [ecx + eax*1], dl
    X86_AT(c, 0xeba5fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1] + c.r[0])); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, g8(c, 2), 0, 1)); }
L_eba62:
    X86_TICK(c, 11);
    // 0eba62  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0xeba62u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 0eba65  cmp al, 0x11
    X86_AT(c, 0xeba65u);
    (void)x86_sub(c, g8(c, 0), 0x11u, 0, 1);
    // 0eba67  jae 0xeba71
    X86_AT(c, 0xeba67u);
    if (x86_cc(c, 3)) { goto L_eba71; }
    X86_TICK(c, 13);
    // 0eba69  inc byte ptr [ebp - 0x25]
    X86_AT(c, 0xeba69u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0eba6c  jmp 0xeb9b2
    X86_AT(c, 0xeba6cu);
    X86_POLL(c, 0xeb9b2u); goto L_eb9b2;
L_eba71:
    X86_TICK(c, 35);
    // 0eba71  add dword ptr [0xc427c], 0xfffffff4
    X86_AT(c, 0xeba71u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0eba78  pop edi
    X86_AT(c, 0xeba78u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0eba79  pop esi
    X86_AT(c, 0xeba79u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0eba7a  pop ebx
    X86_AT(c, 0xeba7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0eba7b  leave 
    X86_AT(c, 0xeba7bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0eba7c  ret 4
    X86_AT(c, 0xeba7cu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xeb8e8u, "ran off the end of a function");
}
void f_000eba80(X86Cpu& c) {
    X86_TICK(c, 173);
    // 0eba80  push ebp
    X86_AT(c, 0xeba80u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0eba81  mov ebp, esp
    X86_AT(c, 0xeba81u);
    c.r[5] = c.r[4];
    // 0eba83  push edi
    X86_AT(c, 0xeba83u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0eba84  push ebx
    X86_AT(c, 0xeba84u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0eba85  xor ecx, ecx
    X86_AT(c, 0xeba85u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
    // 0eba87  mov ebx, ecx
    X86_AT(c, 0xeba87u);
    c.r[3] = c.r[1];
    // 0eba89  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xeba89u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0eba8c  mul dword ptr [ebp + 0x14]
    X86_AT(c, 0xeba8cu);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 4);
    // 0eba8f  push eax
    X86_AT(c, 0xeba8fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0eba90  mov edi, edx
    X86_AT(c, 0xeba90u);
    c.r[7] = c.r[2];
    // 0eba92  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xeba92u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0eba95  mul dword ptr [ebp + 0x18]
    X86_AT(c, 0xeba95u);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 4);
    // 0eba98  add edi, eax
    X86_AT(c, 0xeba98u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 0eba9a  adc ecx, edx
    X86_AT(c, 0xeba9au);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 0eba9c  adc ebx, 0
    X86_AT(c, 0xeba9cu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 0eba9f  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0xeba9fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0ebaa2  mul dword ptr [ebp + 0x10]
    X86_AT(c, 0xebaa2u);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 0ebaa5  add edi, eax
    X86_AT(c, 0xebaa5u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ebaa7  adc ecx, edx
    X86_AT(c, 0xebaa7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 0ebaa9  adc ebx, 0
    X86_AT(c, 0xebaa9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 0ebaac  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0xebaacu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0ebaaf  mul dword ptr [ebp + 0x10]
    X86_AT(c, 0xebaafu);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 0ebab2  add ecx, eax
    X86_AT(c, 0xebab2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ebab4  adc ebx, edx
    X86_AT(c, 0xebab4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 0ebab6  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xebab6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ebab9  mov dword ptr [edx + 0xc], ebx
    X86_AT(c, 0xebab9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCu)), c.r[3]);
    // 0ebabc  mov dword ptr [edx + 8], ecx
    X86_AT(c, 0xebabcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), c.r[1]);
    // 0ebabf  mov dword ptr [edx + 4], edi
    X86_AT(c, 0xebabfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[7]);
    // 0ebac2  pop dword ptr [edx]
    X86_AT(c, 0xebac2u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[2])), v); }
    // 0ebac4  pop ebx
    X86_AT(c, 0xebac4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ebac5  pop edi
    X86_AT(c, 0xebac5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ebac6  pop ebp
    X86_AT(c, 0xebac6u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0ebac7  ret 0x14
    X86_AT(c, 0xebac7u);
    c.eip = pop32(c); c.r[4] += 0x14u; return;
    x86_fault(c, 0xeba80u, "ran off the end of a function");
}
void f_000ebacc(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0ebacc  push ebp
    X86_AT(c, 0xebaccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ebacd  mov ebp, esp
    X86_AT(c, 0xebacdu);
    c.r[5] = c.r[4];
    // 0ebacf  push esi
    X86_AT(c, 0xebacfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ebad0  push edi
    X86_AT(c, 0xebad0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ebad1  push ebx
    X86_AT(c, 0xebad1u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ebad2  sub ebx, ebx
    X86_AT(c, 0xebad2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0ebad4  mov eax, ebx
    X86_AT(c, 0xebad4u);
    c.r[0] = c.r[3];
    // 0ebad6  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xebad6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0ebad9  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xebad9u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0ebadc  mov ecx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xebadcu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0ebadf  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xebadfu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0ebae2  push ebp
    X86_AT(c, 0xebae2u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ebae3  xor ebp, ebp
    X86_AT(c, 0xebae3u);
    { uint32_t v = c.r[5]; c.r[5] = x86_logic(c, v ^ c.r[5], 4); }
L_ebae5:
    X86_TICK(c, 7);
    // 0ebae5  cmp edx, ecx
    X86_AT(c, 0xebae5u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0ebae7  ja 0xebaef
    X86_AT(c, 0xebae7u);
    if (x86_cc(c, 7)) { goto L_ebaef; }
    X86_TICK(c, 5);
    // 0ebae9  jb 0xebafa
    X86_AT(c, 0xebae9u);
    if (x86_cc(c, 2)) { goto L_ebafa; }
    X86_TICK(c, 7);
    // 0ebaeb  cmp esi, edi
    X86_AT(c, 0xebaebu);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0ebaed  jb 0xebafa
    X86_AT(c, 0xebaedu);
    if (x86_cc(c, 2)) { goto L_ebafa; }
L_ebaef:
    X86_TICK(c, 19);
    // 0ebaef  sub esi, edi
    X86_AT(c, 0xebaefu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0ebaf1  sbb edx, ecx
    X86_AT(c, 0xebaf1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], c.fl & 1, 4); }
    // 0ebaf3  stc 
    X86_AT(c, 0xebaf3u);
    c.fl |= X86_CF;
    // 0ebaf4  rcl eax, 1
    X86_AT(c, 0xebaf4u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0ebaf6  rcl ebx, 1
    X86_AT(c, 0xebaf6u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[3] = r; }
    // 0ebaf8  jmp 0xebafe
    X86_AT(c, 0xebaf8u);
    goto L_ebafe;
L_ebafa:
    X86_TICK(c, 6);
    // 0ebafa  shl eax, 1
    X86_AT(c, 0xebafau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0ebafc  rcl ebx, 1
    X86_AT(c, 0xebafcu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[3] = r; }
L_ebafe:
    X86_TICK(c, 7);
    // 0ebafe  test ebx, 0x80000000
    X86_AT(c, 0xebafeu);
    (void)x86_logic(c, c.r[3] & 0x80000000u, 4);
    // 0ebb04  jne 0xebb10
    X86_AT(c, 0xebb04u);
    if (x86_cc(c, 5)) { goto L_ebb10; }
    X86_TICK(c, 7);
    // 0ebb06  and edx, edx
    X86_AT(c, 0xebb06u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0ebb08  jne 0xebb2a
    X86_AT(c, 0xebb08u);
    if (x86_cc(c, 5)) { goto L_ebb2a; }
    X86_TICK(c, 7);
    // 0ebb0a  and esi, esi
    X86_AT(c, 0xebb0au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0ebb0c  jne 0xebb2a
    X86_AT(c, 0xebb0cu);
    if (x86_cc(c, 5)) { goto L_ebb2a; }
    X86_TICK(c, 7);
    // 0ebb0e  jmp 0xebb33
    X86_AT(c, 0xebb0eu);
    goto L_ebb33;
L_ebb10:
    X86_TICK(c, 11);
    // 0ebb10  shl esi, 1
    X86_AT(c, 0xebb10u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 0ebb12  rcl edx, 1
    X86_AT(c, 0xebb12u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 0ebb14  jb 0xebb20
    X86_AT(c, 0xebb14u);
    if (x86_cc(c, 2)) { goto L_ebb20; }
    X86_TICK(c, 7);
    // 0ebb16  cmp edx, ecx
    X86_AT(c, 0xebb16u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0ebb18  ja 0xebb20
    X86_AT(c, 0xebb18u);
    if (x86_cc(c, 7)) { goto L_ebb20; }
    X86_TICK(c, 5);
    // 0ebb1a  jb 0xebb4f
    X86_AT(c, 0xebb1au);
    if (x86_cc(c, 2)) { goto L_ebb4f; }
    X86_TICK(c, 7);
    // 0ebb1c  cmp esi, edi
    X86_AT(c, 0xebb1cu);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0ebb1e  jb 0xebb4f
    X86_AT(c, 0xebb1eu);
    if (x86_cc(c, 2)) { goto L_ebb4f; }
L_ebb20:
    X86_TICK(c, 11);
    // 0ebb20  add eax, 1
    X86_AT(c, 0xebb20u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 0ebb25  adc ebx, 0
    X86_AT(c, 0xebb25u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 0ebb28  jmp 0xebb4f
    X86_AT(c, 0xebb28u);
    goto L_ebb4f;
L_ebb2a:
    X86_TICK(c, 13);
    // 0ebb2a  inc ebp
    X86_AT(c, 0xebb2au);
    { uint32_t v = c.r[5]; c.r[5] = x86_inc(c, v, 4); }
    // 0ebb2b  shl esi, 1
    X86_AT(c, 0xebb2bu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 0ebb2d  rcl edx, 1
    X86_AT(c, 0xebb2du);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 0ebb2f  jb 0xebaef
    X86_AT(c, 0xebb2fu);
    if (x86_cc(c, 2)) { X86_POLL(c, 0xebaefu); goto L_ebaef; }
    X86_TICK(c, 7);
    // 0ebb31  jmp 0xebae5
    X86_AT(c, 0xebb31u);
    X86_POLL(c, 0xebae5u); goto L_ebae5;
L_ebb33:
    X86_TICK(c, 7);
    // 0ebb33  and ebx, ebx
    X86_AT(c, 0xebb33u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0ebb35  jne 0xebb40
    X86_AT(c, 0xebb35u);
    if (x86_cc(c, 5)) { goto L_ebb40; }
    X86_TICK(c, 13);
    // 0ebb37  add ebp, 0x20
    X86_AT(c, 0xebb37u);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, 0x20u, 0, 4); }
    // 0ebb3a  mov ebx, eax
    X86_AT(c, 0xebb3au);
    c.r[3] = c.r[0];
    // 0ebb3c  xor eax, eax
    X86_AT(c, 0xebb3cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0ebb3e  jmp 0xebb33
    X86_AT(c, 0xebb3eu);
    X86_POLL(c, 0xebb33u); goto L_ebb33;
L_ebb40:
    X86_TICK(c, 22);
    // 0ebb40  bsr ecx, ebx
    X86_AT(c, 0xebb40u);
    c.r[1] = x86_bsr(c, c.r[3], c.r[1]);
    // 0ebb43  sub ecx, 0x1f
    X86_AT(c, 0xebb43u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x1Fu, 0, 4); }
    // 0ebb46  neg ecx
    X86_AT(c, 0xebb46u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 0ebb48  shld ebx, eax, cl
    X86_AT(c, 0xebb48u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 0ebb4b  shl eax, cl
    X86_AT(c, 0xebb4bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0ebb4d  add ebp, ecx
    X86_AT(c, 0xebb4du);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, c.r[1], 0, 4); }
L_ebb4f:
    X86_TICK(c, 44);
    // 0ebb4f  pop ecx
    X86_AT(c, 0xebb4fu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0ebb50  xchg ebp, ecx
    X86_AT(c, 0xebb50u);
    { uint32_t t = c.r[5]; c.r[5] = c.r[1]; c.r[1] = t; }
    // 0ebb52  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xebb52u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ebb55  mov dword ptr [edi], eax
    X86_AT(c, 0xebb55u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0ebb57  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0xebb57u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 0ebb5a  xchg ecx, eax
    X86_AT(c, 0xebb5au);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0ebb5b  pop ebx
    X86_AT(c, 0xebb5bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ebb5c  pop edi
    X86_AT(c, 0xebb5cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ebb5d  pop esi
    X86_AT(c, 0xebb5du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ebb5e  pop ebp
    X86_AT(c, 0xebb5eu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0ebb5f  ret 0x14
    X86_AT(c, 0xebb5fu);
    c.eip = pop32(c); c.r[4] += 0x14u; return;
    x86_fault(c, 0xebaccu, "ran off the end of a function");
}
}

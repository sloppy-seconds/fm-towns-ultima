#include "p_game_funcs.h"
namespace p_game {
void f_000e9113(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e9113  pop edi
    X86_AT(c, 0xe9113u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9114  pop esi
    X86_AT(c, 0xe9114u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e9115  pop ebx
    X86_AT(c, 0xe9115u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e9116  leave 
    X86_AT(c, 0xe9116u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9117  ret 4
    X86_AT(c, 0xe9117u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9113u, "ran off the end of a function");
}
void f_000e9130(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e9130  test byte ptr [0xc4568], 2
    X86_AT(c, 0xe9130u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC4568u))) & 0x2u, 1);
    // 0e9137  je 0xe914d
    X86_AT(c, 0xe9137u);
    if (x86_cc(c, 4)) { goto L_e914d; }
    X86_TICK(c, 29);
    // 0e9139  mov eax, dword ptr [0xc40b0]
    X86_AT(c, 0xe9139u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40B0u)));
    // 0e913e  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0xe913eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 0e9142  mov eax, dword ptr [0xc40b4]
    X86_AT(c, 0xe9142u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40B4u)));
    // 0e9147  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0xe9147u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 0e914b  jmp 0xe915f
    X86_AT(c, 0xe914bu);
    goto L_e915f;
L_e914d:
    X86_TICK(c, 22);
    // 0e914d  mov eax, dword ptr [0xc40b0]
    X86_AT(c, 0xe914du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40B0u)));
    // 0e9152  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0xe9152u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
    // 0e9156  mov eax, dword ptr [0xc40b4]
    X86_AT(c, 0xe9156u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40B4u)));
    // 0e915b  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0xe915bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_e915f:
    X86_TICK(c, 12);
    // 0e915f  test byte ptr [0xc4568], 4
    X86_AT(c, 0xe915fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC4568u))) & 0x4u, 1);
    // 0e9166  je 0xe9173
    X86_AT(c, 0xe9166u);
    if (x86_cc(c, 4)) { goto L_e9173; }
    X86_TICK(c, 18);
    // 0e9168  mov eax, dword ptr [0xc40b8]
    X86_AT(c, 0xe9168u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40B8u)));
    // 0e916d  and byte ptr [eax + 0xc], 0xbf
    X86_AT(c, 0xe916du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xBFu, 1)); }
    // 0e9171  jmp 0xe917c
    X86_AT(c, 0xe9171u);
    goto L_e917c;
L_e9173:
    X86_TICK(c, 11);
    // 0e9173  mov eax, dword ptr [0xc40b8]
    X86_AT(c, 0xe9173u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40B8u)));
    // 0e9178  or byte ptr [eax + 0xc], 0x40
    X86_AT(c, 0xe9178u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_e917c:
    X86_TICK(c, 10);
    // 0e917c  ret 
    X86_AT(c, 0xe917cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9130u, "ran off the end of a function");
}
void f_000e9184(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e9184  push edi
    X86_AT(c, 0xe9184u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9185  call 0xe73a0
    X86_AT(c, 0xe9185u);
    push32(c, 0xe918au); x86_call_known(c, 0xe73a0u, f_000e73a0); X86_RET(c, 0xe918au);
    X86_TICK(c, 7);
    // 0e918a  jmp 0xe91ac
    X86_AT(c, 0xe918au);
    goto L_e91ac;
L_e918c:
    X86_TICK(c, 12);
    // 0e918c  push dword ptr [0xc40bc]
    X86_AT(c, 0xe918cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC40BCu))); push32(c, v); }
    // 0e9192  call 0xe944c
    X86_AT(c, 0xe9192u);
    push32(c, 0xe9197u); x86_call_known(c, 0xe944cu, f_000e944c); X86_RET(c, 0xe9197u);
    X86_TICK(c, 19);
    // 0e9197  mov edi, dword ptr [0xc40bc]
    X86_AT(c, 0xe9197u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xC40BCu)));
    // 0e919d  mov eax, dword ptr [edi + 0xc]
    X86_AT(c, 0xe919du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)));
    // 0e91a0  mov dword ptr [0xc40bc], eax
    X86_AT(c, 0xe91a0u);
    wr32((c.sbase[3] + (uint32_t)(0xC40BCu)), c.r[0]);
    // 0e91a5  push edi
    X86_AT(c, 0xe91a5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e91a6  call 0xe77c4
    X86_AT(c, 0xe91a6u);
    push32(c, 0xe91abu); x86_call_known(c, 0xe77c4u, f_000e77c4); X86_RET(c, 0xe91abu);
    X86_TICK(c, 4);
    // 0e91ab  pop ecx
    X86_AT(c, 0xe91abu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_e91ac:
    X86_TICK(c, 12);
    // 0e91ac  cmp dword ptr [0xc40bc], 0
    X86_AT(c, 0xe91acu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC40BCu))), 0x0u, 0, 4);
    // 0e91b3  jne 0xe918c
    X86_AT(c, 0xe91b3u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe918cu); goto L_e918c; }
    X86_TICK(c, 14);
    // 0e91b5  pop edi
    X86_AT(c, 0xe91b5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e91b6  ret 
    X86_AT(c, 0xe91b6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9184u, "ran off the end of a function");
}
void f_000e91cc(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0e91cc  enter 0xc, 0
    X86_AT(c, 0xe91ccu);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 0e91d0  push ebx
    X86_AT(c, 0xe91d0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e91d1  push esi
    X86_AT(c, 0xe91d1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e91d2  push edi
    X86_AT(c, 0xe91d2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e91d3  sub eax, eax
    X86_AT(c, 0xe91d3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e91d5  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe91d5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e91d8  xchg edi, eax
    X86_AT(c, 0xe91d8u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e91d9  mov esi, 1
    X86_AT(c, 0xe91d9u);
    c.r[6] = 0x1u;
    // 0e91de  mov dword ptr [ebp - 8], edi
    X86_AT(c, 0xe91deu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[7]);
    // 0e91e1  mov eax, dword ptr [0xc41bc]
    X86_AT(c, 0xe91e1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC41BCu)));
    // 0e91e6  mov edx, dword ptr [0xc41a2]
    X86_AT(c, 0xe91e6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC41A2u)));
    // 0e91ec  mov dword ptr [edx], eax
    X86_AT(c, 0xe91ecu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_e91ee:
    X86_TICK(c, 8);
    // 0e91ee  sub eax, eax
    X86_AT(c, 0xe91eeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e91f0  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xe91f0u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0e91f3  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xe91f3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0e91f6  mov dword ptr [ebp - 0xc], edi
    X86_AT(c, 0xe91f6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[7]);
L_e91f9:
    X86_TICK(c, 11);
    // 0e91f9  cmp esi, dword ptr [0xc41a8]
    X86_AT(c, 0xe91f9u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xC41A8u))), 0, 4);
    // 0e91ff  ja 0xe927d
    X86_AT(c, 0xe91ffu);
    if (x86_cc(c, 7)) { goto L_e927d; }
    X86_TICK(c, 17);
    // 0e9205  mov eax, dword ptr [0xc419c]
    X86_AT(c, 0xe9205u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC419Cu)));
    // 0e920a  mov bl, byte ptr [eax + esi*1 - 1]
    X86_AT(c, 0xe920au);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] + 0xFFFFFFFFu))));
    // 0e920e  inc esi
    X86_AT(c, 0xe920eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e920f  cmp bl, 9
    X86_AT(c, 0xe920fu);
    (void)x86_sub(c, g8(c, 3), 0x9u, 0, 1);
    // 0e9212  je 0xe9219
    X86_AT(c, 0xe9212u);
    if (x86_cc(c, 4)) { goto L_e9219; }
    X86_TICK(c, 7);
    // 0e9214  cmp bl, 0x20
    X86_AT(c, 0xe9214u);
    (void)x86_sub(c, g8(c, 3), 0x20u, 0, 1);
    // 0e9217  jne 0xe9227
    X86_AT(c, 0xe9217u);
    if (x86_cc(c, 5)) { goto L_e9227; }
L_e9219:
    X86_TICK(c, 12);
    // 0e9219  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0xe9219u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0e921d  je 0xe91f9
    X86_AT(c, 0xe921du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xe91f9u); goto L_e91f9; }
    X86_TICK(c, 12);
    // 0e921f  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xe921fu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0e9223  jne 0xe926a
    X86_AT(c, 0xe9223u);
    if (x86_cc(c, 5)) { goto L_e926a; }
    X86_TICK(c, 7);
    // 0e9225  jmp 0xe927d
    X86_AT(c, 0xe9225u);
    goto L_e927d;
L_e9227:
    X86_TICK(c, 7);
    // 0e9227  cmp bl, 0x22
    X86_AT(c, 0xe9227u);
    (void)x86_sub(c, g8(c, 3), 0x22u, 0, 1);
    // 0e922a  jne 0xe9248
    X86_AT(c, 0xe922au);
    if (x86_cc(c, 5)) { goto L_e9248; }
    X86_TICK(c, 12);
    // 0e922c  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xe922cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0e9230  jne 0xe9238
    X86_AT(c, 0xe9230u);
    if (x86_cc(c, 5)) { goto L_e9238; }
    X86_TICK(c, 12);
    // 0e9232  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0xe9232u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0e9236  jne 0xe9248
    X86_AT(c, 0xe9236u);
    if (x86_cc(c, 5)) { goto L_e9248; }
L_e9238:
    X86_TICK(c, 12);
    // 0e9238  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xe9238u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0e923c  jne 0xe927d
    X86_AT(c, 0xe923cu);
    if (x86_cc(c, 5)) { goto L_e927d; }
    X86_TICK(c, 13);
    // 0e923e  mov al, 1
    X86_AT(c, 0xe923eu);
    s8(c, 0, 0x1u);
    // 0e9240  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xe9240u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
    // 0e9243  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xe9243u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0e9246  jmp 0xe91f9
    X86_AT(c, 0xe9246u);
    X86_POLL(c, 0xe91f9u); goto L_e91f9;
L_e9248:
    X86_TICK(c, 7);
    // 0e9248  cmp bl, 0x5c
    X86_AT(c, 0xe9248u);
    (void)x86_sub(c, g8(c, 3), 0x5Cu, 0, 1);
    // 0e924b  jne 0xe926a
    X86_AT(c, 0xe924bu);
    if (x86_cc(c, 5)) { goto L_e926a; }
    X86_TICK(c, 12);
    // 0e924d  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xe924du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0e9251  je 0xe926a
    X86_AT(c, 0xe9251u);
    if (x86_cc(c, 4)) { goto L_e926a; }
    X86_TICK(c, 11);
    // 0e9253  cmp esi, dword ptr [0xc41a8]
    X86_AT(c, 0xe9253u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xC41A8u))), 0, 4);
    // 0e9259  ja 0xe926a
    X86_AT(c, 0xe9259u);
    if (x86_cc(c, 7)) { goto L_e926a; }
    X86_TICK(c, 16);
    // 0e925b  mov eax, dword ptr [0xc419c]
    X86_AT(c, 0xe925bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC419Cu)));
    // 0e9260  cmp byte ptr [eax + esi*1 - 1], 0x22
    X86_AT(c, 0xe9260u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[6] + 0xFFFFFFFFu))), 0x22u, 0, 1);
    // 0e9265  jne 0xe926a
    X86_AT(c, 0xe9265u);
    if (x86_cc(c, 5)) { goto L_e926a; }
    X86_TICK(c, 4);
    // 0e9267  mov bl, 0x22
    X86_AT(c, 0xe9267u);
    s8(c, 3, 0x22u);
    // 0e9269  inc esi
    X86_AT(c, 0xe9269u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_e926a:
    X86_TICK(c, 17);
    // 0e926a  mov eax, dword ptr [0xc419c]
    X86_AT(c, 0xe926au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC419Cu)));
    // 0e926f  mov byte ptr [eax + edi*1 - 1], bl
    X86_AT(c, 0xe926fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] + 0xFFFFFFFFu)), g8(c, 3));
    // 0e9273  inc edi
    X86_AT(c, 0xe9273u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e9274  mov byte ptr [ebp - 1], 1
    X86_AT(c, 0xe9274u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x1u);
    // 0e9278  jmp 0xe91f9
    X86_AT(c, 0xe9278u);
    X86_POLL(c, 0xe91f9u); goto L_e91f9;
L_e927d:
    X86_TICK(c, 12);
    // 0e927d  cmp byte ptr [ebp - 1], 0
    X86_AT(c, 0xe927du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0e9281  je 0xe92a4
    X86_AT(c, 0xe9281u);
    if (x86_cc(c, 4)) { goto L_e92a4; }
    X86_TICK(c, 30);
    // 0e9283  mov eax, dword ptr [0xc419c]
    X86_AT(c, 0xe9283u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC419Cu)));
    // 0e9288  mov byte ptr [eax + edi*1 - 1], 0
    X86_AT(c, 0xe9288u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7] + 0xFFFFFFFFu)), 0x0u);
    // 0e928d  inc edi
    X86_AT(c, 0xe928du);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e928e  inc dword ptr [ebp - 8]
    X86_AT(c, 0xe928eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e9291  mov edx, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe9291u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e9294  lea eax, [eax + edx*1 - 1]
    X86_AT(c, 0xe9294u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFFFu);
    // 0e9298  mov edx, dword ptr [0xc41a2]
    X86_AT(c, 0xe9298u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC41A2u)));
    // 0e929e  mov ecx, dword ptr [ebp - 8]
    X86_AT(c, 0xe929eu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e92a1  mov dword ptr [edx + ecx*4], eax
    X86_AT(c, 0xe92a1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + c.r[1] * 4)), c.r[0]);
L_e92a4:
    X86_TICK(c, 11);
    // 0e92a4  cmp esi, dword ptr [0xc41a8]
    X86_AT(c, 0xe92a4u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xC41A8u))), 0, 4);
    // 0e92aa  jbe 0xe91ee
    X86_AT(c, 0xe92aau);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xe91eeu); goto L_e91ee; }
    X86_TICK(c, 43);
    // 0e92b0  mov eax, dword ptr [0xc41a2]
    X86_AT(c, 0xe92b0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC41A2u)));
    // 0e92b5  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0xe92b5u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e92b8  mov dword ptr [eax + edx*4 + 4], 0
    X86_AT(c, 0xe92b8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] * 4 + 0x4u)), 0x0u);
    // 0e92c0  xchg edx, eax
    X86_AT(c, 0xe92c0u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0e92c1  inc eax
    X86_AT(c, 0xe92c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e92c2  pop edi
    X86_AT(c, 0xe92c2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e92c3  pop esi
    X86_AT(c, 0xe92c3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e92c4  pop ebx
    X86_AT(c, 0xe92c4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e92c5  leave 
    X86_AT(c, 0xe92c5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e92c6  ret 
    X86_AT(c, 0xe92c6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe91ccu, "ran off the end of a function");
}
void f_000e92c8(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0e92c8  ret 
    X86_AT(c, 0xe92c8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe92c8u, "ran off the end of a function");
}
void f_000e92e4(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e92e4  mov al, byte ptr [esp + 4]
    X86_AT(c, 0xe92e4u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u))));
    // 0e92e8  mov byte ptr [0xc4541], al
    X86_AT(c, 0xe92e8u);
    wr8((c.sbase[3] + (uint32_t)(0xC4541u)), g8(c, 0));
    // 0e92ed  call 0xeb164
    X86_AT(c, 0xe92edu);
    push32(c, 0xe92f2u); x86_call_known(c, 0xeb164u, f_000eb164); X86_RET(c, 0xe92f2u);
    X86_TICK(c, 12);
    // 0e92f2  mov eax, dword ptr [0xc4560]
    X86_AT(c, 0xe92f2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4560u)));
    // 0e92f7  rcr eax, 1
    X86_AT(c, 0xe92f7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e92f9  jae 0xe9318
    X86_AT(c, 0xe92f9u);
    if (x86_cc(c, 3)) { goto L_e9318; }
    X86_TICK(c, 14);
    // 0e92fb  mov ax, word ptr [0xc4540]
    X86_AT(c, 0xe92fbu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC4540u))));
    // 0e9301  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe9301u);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
    // 0e9307  sub eax, eax
    X86_AT(c, 0xe9307u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9309  mov dword ptr [0xc4540], eax
    X86_AT(c, 0xe9309u);
    wr32((c.sbase[3] + (uint32_t)(0xC4540u)), c.r[0]);
    // 0e930e  mov dword ptr [0xc4548], eax
    X86_AT(c, 0xe930eu);
    wr32((c.sbase[3] + (uint32_t)(0xC4548u)), c.r[0]);
    // 0e9313  mov dword ptr [0xc454c], eax
    X86_AT(c, 0xe9313u);
    wr32((c.sbase[3] + (uint32_t)(0xC454Cu)), c.r[0]);
L_e9318:
    X86_TICK(c, 10);
    // 0e9318  ret 4
    X86_AT(c, 0xe9318u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe92e4u, "ran off the end of a function");
}
void f_000e9324(X86Cpu& c) {
    X86_TICK(c, 52);
    // 0e9324  enter 0x10, 0
    X86_AT(c, 0xe9324u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 0e9328  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xe9328u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e932b  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe932bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e932e  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe932eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e9331  mov edx, 0xc4540
    X86_AT(c, 0xe9331u);
    c.r[2] = 0xC4540u;
    // 0e9336  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0xe9336u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0e9339  mov word ptr [ebp - 0xc], ds
    X86_AT(c, 0xe9339u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (uint32_t)c.sreg[3]);
    // 0e933c  movzx edx, word ptr [ebp - 0xc]
    X86_AT(c, 0xe933cu);
    c.r[2] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 0e9340  mov dword ptr [ecx], edx
    X86_AT(c, 0xe9340u);
    wr32((c.sbase[3] + (uint32_t)(c.r[1])), c.r[2]);
    // 0e9342  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe9342u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e9345  mov dword ptr [edx], eax
    X86_AT(c, 0xe9345u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0e9347  leave 
    X86_AT(c, 0xe9347u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9348  ret 0xc
    X86_AT(c, 0xe9348u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xe9324u, "ran off the end of a function");
}
void f_000e9358(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0e9358  push ebp
    X86_AT(c, 0xe9358u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9359  mov ebp, esp
    X86_AT(c, 0xe9359u);
    c.r[5] = c.r[4];
    // 0e935b  push dword ptr [ebp + 8]
    X86_AT(c, 0xe935bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e935e  push 0xc454c
    X86_AT(c, 0xe935eu);
    { uint32_t v = 0xC454Cu; push32(c, v); }
    // 0e9363  push 0xc4558
    X86_AT(c, 0xe9363u);
    { uint32_t v = 0xC4558u; push32(c, v); }
    // 0e9368  call 0xe9324
    X86_AT(c, 0xe9368u);
    push32(c, 0xe936du); x86_call_known(c, 0xe9324u, f_000e9324); X86_RET(c, 0xe936du);
    X86_TICK(c, 16);
    // 0e936d  leave 
    X86_AT(c, 0xe936du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e936e  ret 4
    X86_AT(c, 0xe936eu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9358u, "ran off the end of a function");
}
void f_000e937c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e937c  push ebp
    X86_AT(c, 0xe937cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e937d  mov ebp, esp
    X86_AT(c, 0xe937du);
    c.r[5] = c.r[4];
    // 0e937f  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0xe937fu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e9383  mov dword ptr [0xc4544], eax
    X86_AT(c, 0xe9383u);
    wr32((c.sbase[3] + (uint32_t)(0xC4544u)), c.r[0]);
    // 0e9388  push 0x3e
    X86_AT(c, 0xe9388u);
    { uint32_t v = 0x3Eu; push32(c, v); }
    // 0e938a  call 0xe92e4
    X86_AT(c, 0xe938au);
    push32(c, 0xe938fu); x86_call_known(c, 0xe92e4u, f_000e92e4); X86_RET(c, 0xe938fu);
    X86_TICK(c, 16);
    // 0e938f  leave 
    X86_AT(c, 0xe938fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9390  ret 4
    X86_AT(c, 0xe9390u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe937cu, "ran off the end of a function");
}
void f_000e939c(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0e939c  push ebp
    X86_AT(c, 0xe939cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e939d  mov ebp, esp
    X86_AT(c, 0xe939du);
    c.r[5] = c.r[4];
    // 0e939f  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0xe939fu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e93a2  mov byte ptr [0xc4540], al
    X86_AT(c, 0xe93a2u);
    wr8((c.sbase[3] + (uint32_t)(0xC4540u)), g8(c, 0));
    // 0e93a7  push 0x4c
    X86_AT(c, 0xe93a7u);
    { uint32_t v = 0x4Cu; push32(c, v); }
    // 0e93a9  call 0xe92e4
    X86_AT(c, 0xe93a9u);
    push32(c, 0xe93aeu); x86_call_known(c, 0xe92e4u, f_000e92e4); X86_RET(c, 0xe93aeu);
    X86_TICK(c, 16);
    // 0e93ae  leave 
    X86_AT(c, 0xe93aeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e93af  ret 4
    X86_AT(c, 0xe93afu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe939cu, "ran off the end of a function");
}
void f_000e93d4(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e93d4  push ebp
    X86_AT(c, 0xe93d4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e93d5  mov ebp, esp
    X86_AT(c, 0xe93d5u);
    c.r[5] = c.r[4];
    // 0e93d7  push dword ptr [ebp + 8]
    X86_AT(c, 0xe93d7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e93da  call 0xe9358
    X86_AT(c, 0xe93dau);
    push32(c, 0xe93dfu); x86_call_known(c, 0xe9358u, f_000e9358); X86_RET(c, 0xe93dfu);
    X86_TICK(c, 12);
    // 0e93df  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe93dfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e93e2  call 0xe92e4
    X86_AT(c, 0xe93e2u);
    push32(c, 0xe93e7u); x86_call_known(c, 0xe92e4u, f_000e92e4); X86_RET(c, 0xe93e7u);
    X86_TICK(c, 16);
    // 0e93e7  leave 
    X86_AT(c, 0xe93e7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e93e8  ret 8
    X86_AT(c, 0xe93e8u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe93d4u, "ran off the end of a function");
}
void f_000e93f4(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0e93f4  push ebp
    X86_AT(c, 0xe93f4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e93f5  mov ebp, esp
    X86_AT(c, 0xe93f5u);
    c.r[5] = c.r[4];
    // 0e93f7  movzx eax, byte ptr [ebp + 0xc]
    X86_AT(c, 0xe93f7u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e93fb  mov dword ptr [0xc4548], eax
    X86_AT(c, 0xe93fbu);
    wr32((c.sbase[3] + (uint32_t)(0xC4548u)), c.r[0]);
    // 0e9400  push 0x3c
    X86_AT(c, 0xe9400u);
    { uint32_t v = 0x3Cu; push32(c, v); }
    // 0e9402  push dword ptr [ebp + 8]
    X86_AT(c, 0xe9402u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e9405  call 0xe93d4
    X86_AT(c, 0xe9405u);
    push32(c, 0xe940au); x86_call_known(c, 0xe93d4u, f_000e93d4); X86_RET(c, 0xe940au);
    X86_TICK(c, 20);
    // 0e940a  mov al, byte ptr [0xc4540]
    X86_AT(c, 0xe940au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC4540u))));
    // 0e940f  leave 
    X86_AT(c, 0xe940fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9410  ret 8
    X86_AT(c, 0xe9410u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe93f4u, "ran off the end of a function");
}
void f_000e941c(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0e941c  push ebp
    X86_AT(c, 0xe941cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e941d  mov ebp, esp
    X86_AT(c, 0xe941du);
    c.r[5] = c.r[4];
    // 0e941f  mov al, byte ptr [0xc4564]
    X86_AT(c, 0xe941fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC4564u))));
    // 0e9424  shl al, 4
    X86_AT(c, 0xe9424u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 0e9427  or al, byte ptr [ebp + 0xc]
    X86_AT(c, 0xe9427u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 1)); }
    // 0e942a  mov byte ptr [0xc4540], al
    X86_AT(c, 0xe942au);
    wr8((c.sbase[3] + (uint32_t)(0xC4540u)), g8(c, 0));
    // 0e942f  push 0x3d
    X86_AT(c, 0xe942fu);
    { uint32_t v = 0x3Du; push32(c, v); }
    // 0e9431  push dword ptr [ebp + 8]
    X86_AT(c, 0xe9431u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e9434  call 0xe93d4
    X86_AT(c, 0xe9434u);
    push32(c, 0xe9439u); x86_call_known(c, 0xe93d4u, f_000e93d4); X86_RET(c, 0xe9439u);
    X86_TICK(c, 20);
    // 0e9439  mov al, byte ptr [0xc4540]
    X86_AT(c, 0xe9439u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC4540u))));
    // 0e943e  leave 
    X86_AT(c, 0xe943eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e943f  ret 8
    X86_AT(c, 0xe943fu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe941cu, "ran off the end of a function");
}
void f_000e944c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e944c  push ebp
    X86_AT(c, 0xe944cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e944d  mov ebp, esp
    X86_AT(c, 0xe944du);
    c.r[5] = c.r[4];
    // 0e944f  push 0x41
    X86_AT(c, 0xe944fu);
    { uint32_t v = 0x41u; push32(c, v); }
    // 0e9451  push dword ptr [ebp + 8]
    X86_AT(c, 0xe9451u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e9454  call 0xe93d4
    X86_AT(c, 0xe9454u);
    push32(c, 0xe9459u); x86_call_known(c, 0xe93d4u, f_000e93d4); X86_RET(c, 0xe9459u);
    X86_TICK(c, 16);
    // 0e9459  leave 
    X86_AT(c, 0xe9459u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e945a  ret 4
    X86_AT(c, 0xe945au);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe944cu, "ran off the end of a function");
}
void f_000e9474(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e9474  push ebp
    X86_AT(c, 0xe9474u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9475  mov ebp, esp
    X86_AT(c, 0xe9475u);
    c.r[5] = c.r[4];
    // 0e9477  push ebx
    X86_AT(c, 0xe9477u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e9478  push esi
    X86_AT(c, 0xe9478u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e9479  push edi
    X86_AT(c, 0xe9479u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e947a  mov edi, dword ptr [0xc4578]
    X86_AT(c, 0xe947au);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xC4578u)));
    // 0e9480  jmp 0xe94af
    X86_AT(c, 0xe9480u);
    goto L_e94af;
L_e9482:
    X86_TICK(c, 11);
    // 0e9482  mov esi, dword ptr [edi]
    X86_AT(c, 0xe9482u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0e9484  and esi, esi
    X86_AT(c, 0xe9484u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e9486  je 0xe94a6
    X86_AT(c, 0xe9486u);
    if (x86_cc(c, 4)) { goto L_e94a6; }
    X86_TICK(c, 11);
    // 0e9488  cmp edi, dword ptr [esi + 4]
    X86_AT(c, 0xe9488u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))), 0, 4);
    // 0e948b  je 0xe94a6
    X86_AT(c, 0xe948bu);
    if (x86_cc(c, 4)) { goto L_e94a6; }
    X86_TICK(c, 11);
    // 0e948d  push edi
    X86_AT(c, 0xe948du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e948e  push 1
    X86_AT(c, 0xe948eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e9490  call 0xeb038
    X86_AT(c, 0xe9490u);
    push32(c, 0xe9495u); x86_call_known(c, 0xeb038u, f_000eb038); X86_RET(c, 0xe9495u);
    X86_TICK(c, 15);
    // 0e9495  push edi
    X86_AT(c, 0xe9495u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9496  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe9496u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e9499  mov ebx, ecx
    X86_AT(c, 0xe9499u);
    c.r[3] = c.r[1];
    // 0e949b  call dword ptr [ebp + 8]
    X86_AT(c, 0xe949bu);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0xe949eu); x86_call(c, t); X86_RET(c, 0xe949eu); }
    X86_TICK(c, 11);
    // 0e949e  push esi
    X86_AT(c, 0xe949eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e949f  mov ecx, ebx
    X86_AT(c, 0xe949fu);
    c.r[1] = c.r[3];
    // 0e94a1  call dword ptr [ebp + 8]
    X86_AT(c, 0xe94a1u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0xe94a4u); x86_call(c, t); X86_RET(c, 0xe94a4u); }
    X86_TICK(c, 7);
    // 0e94a4  jmp 0xe94b3
    X86_AT(c, 0xe94a4u);
    goto L_e94b3;
L_e94a6:
    X86_TICK(c, 13);
    // 0e94a6  push edi
    X86_AT(c, 0xe94a6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e94a7  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe94a7u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e94aa  call dword ptr [ebp + 8]
    X86_AT(c, 0xe94aau);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0xe94adu); x86_call(c, t); X86_RET(c, 0xe94adu); }
    X86_TICK(c, 2);
    // 0e94ad  mov edi, esi
    X86_AT(c, 0xe94adu);
    c.r[7] = c.r[6];
L_e94af:
    X86_TICK(c, 7);
    // 0e94af  and edi, edi
    X86_AT(c, 0xe94afu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e94b1  jne 0xe9482
    X86_AT(c, 0xe94b1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe9482u); goto L_e9482; }
L_e94b3:
    X86_TICK(c, 28);
    // 0e94b3  pop edi
    X86_AT(c, 0xe94b3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e94b4  pop esi
    X86_AT(c, 0xe94b4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e94b5  pop ebx
    X86_AT(c, 0xe94b5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e94b6  leave 
    X86_AT(c, 0xe94b6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e94b7  ret 8
    X86_AT(c, 0xe94b7u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe9474u, "ran off the end of a function");
}
void f_000e94cc(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e94cc  push ebp
    X86_AT(c, 0xe94ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e94cd  mov ebp, esp
    X86_AT(c, 0xe94cdu);
    c.r[5] = c.r[4];
    // 0e94cf  push ebx
    X86_AT(c, 0xe94cfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e94d0  push esi
    X86_AT(c, 0xe94d0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e94d1  push edi
    X86_AT(c, 0xe94d1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e94d2  mov edi, dword ptr [0xc4574]
    X86_AT(c, 0xe94d2u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xC4574u)));
    // 0e94d8  sub esi, esi
    X86_AT(c, 0xe94d8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e94da  jmp 0xe951e
    X86_AT(c, 0xe94dau);
    goto L_e951e;
L_e94dc:
    X86_TICK(c, 14);
    // 0e94dc  mov ebx, edi
    X86_AT(c, 0xe94dcu);
    c.r[3] = c.r[7];
    // 0e94de  cmp byte ptr [ebx + 0xf], 0x55
    X86_AT(c, 0xe94deu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFu))), 0x55u, 0, 1);
    // 0e94e2  je 0xe94ee
    X86_AT(c, 0xe94e2u);
    if (x86_cc(c, 4)) { goto L_e94ee; }
    X86_TICK(c, 11);
    // 0e94e4  push edi
    X86_AT(c, 0xe94e4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e94e5  push 4
    X86_AT(c, 0xe94e5u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0e94e7  call 0xeb038
    X86_AT(c, 0xe94e7u);
    push32(c, 0xe94ecu); x86_call_known(c, 0xeb038u, f_000eb038); X86_RET(c, 0xe94ecu);
    X86_TICK(c, 7);
    // 0e94ec  jmp 0xe951e
    X86_AT(c, 0xe94ecu);
    goto L_e951e;
L_e94ee:
    X86_TICK(c, 11);
    // 0e94ee  cmp esi, dword ptr [ebx + 0x14]
    X86_AT(c, 0xe94eeu);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x14u))), 0, 4);
    // 0e94f1  je 0xe94ff
    X86_AT(c, 0xe94f1u);
    if (x86_cc(c, 4)) { goto L_e94ff; }
    X86_TICK(c, 11);
    // 0e94f3  push edi
    X86_AT(c, 0xe94f3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e94f4  push 5
    X86_AT(c, 0xe94f4u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0e94f6  call 0xeb038
    X86_AT(c, 0xe94f6u);
    push32(c, 0xe94fbu); x86_call_known(c, 0xeb038u, f_000eb038); X86_RET(c, 0xe94fbu);
    X86_TICK(c, 9);
    // 0e94fb  sub edi, edi
    X86_AT(c, 0xe94fbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e94fd  jmp 0xe951e
    X86_AT(c, 0xe94fdu);
    goto L_e951e;
L_e94ff:
    X86_TICK(c, 11);
    // 0e94ff  mov eax, dword ptr [edi]
    X86_AT(c, 0xe94ffu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0e9501  and eax, eax
    X86_AT(c, 0xe9501u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e9503  je 0xe9512
    X86_AT(c, 0xe9503u);
    if (x86_cc(c, 4)) { goto L_e9512; }
    X86_TICK(c, 11);
    // 0e9505  cmp edi, dword ptr [eax + 4]
    X86_AT(c, 0xe9505u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 0, 4);
    // 0e9508  je 0xe9512
    X86_AT(c, 0xe9508u);
    if (x86_cc(c, 4)) { goto L_e9512; }
    X86_TICK(c, 11);
    // 0e950a  push edi
    X86_AT(c, 0xe950au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e950b  push 1
    X86_AT(c, 0xe950bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e950d  call 0xeb038
    X86_AT(c, 0xe950du);
    push32(c, 0xe9512u); x86_call_known(c, 0xeb038u, f_000eb038); X86_RET(c, 0xe9512u);
L_e9512:
    X86_TICK(c, 13);
    // 0e9512  push edi
    X86_AT(c, 0xe9512u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9513  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe9513u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e9516  call dword ptr [ebp + 8]
    X86_AT(c, 0xe9516u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, 0xe9519u); x86_call(c, t); X86_RET(c, 0xe9519u); }
    X86_TICK(c, 6);
    // 0e9519  mov esi, edi
    X86_AT(c, 0xe9519u);
    c.r[6] = c.r[7];
    // 0e951b  mov edi, dword ptr [ebx + 0x10]
    X86_AT(c, 0xe951bu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
L_e951e:
    X86_TICK(c, 7);
    // 0e951e  and edi, edi
    X86_AT(c, 0xe951eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e9520  jne 0xe94dc
    X86_AT(c, 0xe9520u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe94dcu); goto L_e94dc; }
    X86_TICK(c, 28);
    // 0e9522  pop edi
    X86_AT(c, 0xe9522u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9523  pop esi
    X86_AT(c, 0xe9523u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e9524  pop ebx
    X86_AT(c, 0xe9524u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e9525  leave 
    X86_AT(c, 0xe9525u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9526  ret 8
    X86_AT(c, 0xe9526u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe94ccu, "ran off the end of a function");
}
void f_000e9540(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e9540  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xe9540u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e9544  cmp dword ptr [ecx + 8], 0x18
    X86_AT(c, 0xe9544u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u))), 0x18u, 0, 4);
    // 0e9548  jb 0xe9570
    X86_AT(c, 0xe9548u);
    if (x86_cc(c, 2)) { goto L_e9570; }
    X86_TICK(c, 12);
    // 0e954a  cmp dword ptr [ecx + 0x14], 0
    X86_AT(c, 0xe954au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u))), 0x0u, 0, 4);
    // 0e954e  jne 0xe955a
    X86_AT(c, 0xe954eu);
    if (x86_cc(c, 5)) { goto L_e955a; }
    X86_TICK(c, 13);
    // 0e9550  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0xe9550u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 0e9553  mov dword ptr [0xc4574], eax
    X86_AT(c, 0xe9553u);
    wr32((c.sbase[3] + (uint32_t)(0xC4574u)), c.r[0]);
    // 0e9558  jmp 0xe9563
    X86_AT(c, 0xe9558u);
    goto L_e9563;
L_e955a:
    X86_TICK(c, 10);
    // 0e955a  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0xe955au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 0e955d  mov edx, dword ptr [ecx + 0x14]
    X86_AT(c, 0xe955du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)));
    // 0e9560  mov dword ptr [edx + 0x10], eax
    X86_AT(c, 0xe9560u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)), c.r[0]);
L_e9563:
    X86_TICK(c, 11);
    // 0e9563  mov eax, dword ptr [ecx + 0x10]
    X86_AT(c, 0xe9563u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x10u)));
    // 0e9566  and eax, eax
    X86_AT(c, 0xe9566u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e9568  je 0xe9570
    X86_AT(c, 0xe9568u);
    if (x86_cc(c, 4)) { goto L_e9570; }
    X86_TICK(c, 6);
    // 0e956a  mov edx, dword ptr [ecx + 0x14]
    X86_AT(c, 0xe956au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x14u)));
    // 0e956d  mov dword ptr [eax + 0x14], edx
    X86_AT(c, 0xe956du);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x14u)), c.r[2]);
L_e9570:
    X86_TICK(c, 10);
    // 0e9570  ret 4
    X86_AT(c, 0xe9570u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9540u, "ran off the end of a function");
}
void f_000e9594(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e9594  push ebp
    X86_AT(c, 0xe9594u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9595  mov ebp, esp
    X86_AT(c, 0xe9595u);
    c.r[5] = c.r[4];
    // 0e9597  push esi
    X86_AT(c, 0xe9597u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e9598  push edi
    X86_AT(c, 0xe9598u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9599  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe9599u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e959c  mov esi, dword ptr [edi]
    X86_AT(c, 0xe959cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0e959e  and esi, esi
    X86_AT(c, 0xe959eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e95a0  je 0xe95c9
    X86_AT(c, 0xe95a0u);
    if (x86_cc(c, 4)) { goto L_e95c9; }
    X86_TICK(c, 12);
    // 0e95a2  cmp byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0xe95a2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu))), 0x55u, 0, 1);
    // 0e95a6  jne 0xe95c9
    X86_AT(c, 0xe95a6u);
    if (x86_cc(c, 5)) { goto L_e95c9; }
    X86_TICK(c, 11);
    // 0e95a8  cmp esi, dword ptr [0xc457c]
    X86_AT(c, 0xe95a8u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xC457Cu))), 0, 4);
    // 0e95ae  jne 0xe95b6
    X86_AT(c, 0xe95aeu);
    if (x86_cc(c, 5)) { goto L_e95b6; }
    X86_TICK(c, 2);
    // 0e95b0  mov dword ptr [0xc457c], edi
    X86_AT(c, 0xe95b0u);
    wr32((c.sbase[3] + (uint32_t)(0xC457Cu)), c.r[7]);
L_e95b6:
    X86_TICK(c, 9);
    // 0e95b6  push esi
    X86_AT(c, 0xe95b6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e95b7  call 0xe9540
    X86_AT(c, 0xe95b7u);
    push32(c, 0xe95bcu); x86_call_known(c, 0xe9540u, f_000e9540); X86_RET(c, 0xe95bcu);
    X86_TICK(c, 27);
    // 0e95bc  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0xe95bcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0e95bf  add dword ptr [edi + 8], eax
    X86_AT(c, 0xe95bfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e95c2  mov eax, dword ptr [esi]
    X86_AT(c, 0xe95c2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0e95c4  mov dword ptr [edi], eax
    X86_AT(c, 0xe95c4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0e95c6  xchg esi, eax
    X86_AT(c, 0xe95c6u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e95c7  jmp 0xe95fc
    X86_AT(c, 0xe95c7u);
    goto L_e95fc;
L_e95c9:
    X86_TICK(c, 11);
    // 0e95c9  mov eax, dword ptr [edi + 4]
    X86_AT(c, 0xe95c9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0e95cc  and eax, eax
    X86_AT(c, 0xe95ccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e95ce  je 0xe9607
    X86_AT(c, 0xe95ceu);
    if (x86_cc(c, 4)) { goto L_e9607; }
    X86_TICK(c, 15);
    // 0e95d0  xchg esi, eax
    X86_AT(c, 0xe95d0u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e95d1  cmp byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0xe95d1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu))), 0x55u, 0, 1);
    // 0e95d5  jne 0xe9607
    X86_AT(c, 0xe95d5u);
    if (x86_cc(c, 5)) { goto L_e9607; }
    X86_TICK(c, 11);
    // 0e95d7  cmp edi, dword ptr [0xc457c]
    X86_AT(c, 0xe95d7u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xC457Cu))), 0, 4);
    // 0e95dd  jne 0xe95e5
    X86_AT(c, 0xe95ddu);
    if (x86_cc(c, 5)) { goto L_e95e5; }
    X86_TICK(c, 2);
    // 0e95df  mov dword ptr [0xc457c], esi
    X86_AT(c, 0xe95dfu);
    wr32((c.sbase[3] + (uint32_t)(0xC457Cu)), c.r[6]);
L_e95e5:
    X86_TICK(c, 9);
    // 0e95e5  push esi
    X86_AT(c, 0xe95e5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e95e6  call 0xe9540
    X86_AT(c, 0xe95e6u);
    push32(c, 0xe95ebu); x86_call_known(c, 0xe9540u, f_000e9540); X86_RET(c, 0xe95ebu);
    X86_TICK(c, 29);
    // 0e95eb  mov eax, dword ptr [edi + 8]
    X86_AT(c, 0xe95ebu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 0e95ee  add dword ptr [esi + 8], eax
    X86_AT(c, 0xe95eeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e95f1  mov eax, dword ptr [edi]
    X86_AT(c, 0xe95f1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
    // 0e95f3  mov dword ptr [esi], eax
    X86_AT(c, 0xe95f3u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0e95f5  mov edi, esi
    X86_AT(c, 0xe95f5u);
    c.r[7] = c.r[6];
    // 0e95f7  xchg esi, eax
    X86_AT(c, 0xe95f7u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e95f8  and esi, esi
    X86_AT(c, 0xe95f8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e95fa  je 0xe95ff
    X86_AT(c, 0xe95fau);
    if (x86_cc(c, 4)) { goto L_e95ff; }
L_e95fc:
    X86_TICK(c, 2);
    // 0e95fc  mov dword ptr [esi + 4], edi
    X86_AT(c, 0xe95fcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[7]);
L_e95ff:
    X86_TICK(c, 9);
    // 0e95ff  push edi
    X86_AT(c, 0xe95ffu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9600  call 0xe9594
    X86_AT(c, 0xe9600u);
    push32(c, 0xe9605u); x86_call_known(c, 0xe9594u, f_000e9594); X86_RET(c, 0xe9605u);
    X86_TICK(c, 7);
    // 0e9605  jmp 0xe962a
    X86_AT(c, 0xe9605u);
    goto L_e962a;
L_e9607:
    X86_TICK(c, 12);
    // 0e9607  cmp dword ptr [edi + 8], 0x18
    X86_AT(c, 0xe9607u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0x18u, 0, 4);
    // 0e960b  jb 0xe962a
    X86_AT(c, 0xe960bu);
    if (x86_cc(c, 2)) { goto L_e962a; }
    X86_TICK(c, 13);
    // 0e960d  mov esi, dword ptr [0xc4574]
    X86_AT(c, 0xe960du);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xC4574u)));
    // 0e9613  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0xe9613u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 0e9616  and esi, esi
    X86_AT(c, 0xe9616u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e9618  je 0xe961d
    X86_AT(c, 0xe9618u);
    if (x86_cc(c, 4)) { goto L_e961d; }
    X86_TICK(c, 2);
    // 0e961a  mov dword ptr [esi + 0x14], edi
    X86_AT(c, 0xe961au);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)), c.r[7]);
L_e961d:
    X86_TICK(c, 4);
    // 0e961d  mov dword ptr [edi + 0x14], 0
    X86_AT(c, 0xe961du);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), 0x0u);
    // 0e9624  mov dword ptr [0xc4574], edi
    X86_AT(c, 0xe9624u);
    wr32((c.sbase[3] + (uint32_t)(0xC4574u)), c.r[7]);
L_e962a:
    X86_TICK(c, 24);
    // 0e962a  pop edi
    X86_AT(c, 0xe962au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e962b  pop esi
    X86_AT(c, 0xe962bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e962c  leave 
    X86_AT(c, 0xe962cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e962d  ret 4
    X86_AT(c, 0xe962du);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9594u, "ran off the end of a function");
}
void f_000e9644(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e9644  enter 4, 0
    X86_AT(c, 0xe9644u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0e9648  push ebx
    X86_AT(c, 0xe9648u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e9649  push esi
    X86_AT(c, 0xe9649u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e964a  push edi
    X86_AT(c, 0xe964au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e964b  push ebp
    X86_AT(c, 0xe964bu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e964c  push 0xe9674
    X86_AT(c, 0xe964cu);
    { uint32_t v = 0xE9674u; push32(c, v); }
    // 0e9651  call 0xe94cc
    X86_AT(c, 0xe9651u);
    push32(c, 0xe9656u); x86_call_known(c, 0xe94ccu, f_000e94cc); X86_RET(c, 0xe9656u);
    X86_TICK(c, 36);
    // 0e9656  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe9656u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0e965d  lea esp, [ebp - 0x10]
    X86_AT(c, 0xe965du);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0e9660  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe9660u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e9663  pop edi
    X86_AT(c, 0xe9663u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9664  pop esi
    X86_AT(c, 0xe9664u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e9665  pop ebx
    X86_AT(c, 0xe9665u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e9666  leave 
    X86_AT(c, 0xe9666u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9667  ret 4
    X86_AT(c, 0xe9667u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9644u, "ran off the end of a function");
}
void f_000e9674(X86Cpu& c) {
    goto L_e9674;
L_e965d:
    X86_TICK(c, 34);
    // 0e965d  lea esp, [ebp - 0x10]
    X86_AT(c, 0xe965du);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0e9660  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe9660u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e9663  pop edi
    X86_AT(c, 0xe9663u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9664  pop esi
    X86_AT(c, 0xe9664u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e9665  pop ebx
    X86_AT(c, 0xe9665u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e9666  leave 
    X86_AT(c, 0xe9666u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9667  ret 4
    X86_AT(c, 0xe9667u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
L_e9674:
    X86_TICK(c, 29);
    // 0e9674  push ebp
    X86_AT(c, 0xe9674u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9675  mov ebp, esp
    X86_AT(c, 0xe9675u);
    c.r[5] = c.r[4];
    // 0e9677  push ecx
    X86_AT(c, 0xe9677u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e9678  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xe9678u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e967b  mov eax, dword ptr [ecx + 8]
    X86_AT(c, 0xe967bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[1] + 0x8u)));
    // 0e967e  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0xe967eu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e9681  cmp eax, dword ptr [edx + 8]
    X86_AT(c, 0xe9681u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u))), 0, 4);
    // 0e9684  jb 0xe968d
    X86_AT(c, 0xe9684u);
    if (x86_cc(c, 2)) { goto L_e968d; }
    X86_TICK(c, 11);
    // 0e9686  mov dword ptr [edx - 4], ecx
    X86_AT(c, 0xe9686u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFFCu)), c.r[1]);
    // 0e9689  mov ebp, edx
    X86_AT(c, 0xe9689u);
    c.r[5] = c.r[2];
    // 0e968b  jmp 0xe965d
    X86_AT(c, 0xe968bu);
    X86_POLL(c, 0xe965du); goto L_e965d;
L_e968d:
    X86_TICK(c, 16);
    // 0e968d  leave 
    X86_AT(c, 0xe968du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e968e  ret 4
    X86_AT(c, 0xe968eu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9674u, "ran off the end of a function");
}
void f_000e969c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e969c  mov eax, dword ptr [0xc4580]
    X86_AT(c, 0xe969cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4580u)));
    // 0e96a1  add eax, 0x200
    X86_AT(c, 0xe96a1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x200u, 0, 4); }
    // 0e96a6  push eax
    X86_AT(c, 0xe96a6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e96a7  mov eax, dword ptr [0xc4580]
    X86_AT(c, 0xe96a7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4580u)));
    // 0e96ac  add eax, 0x100
    X86_AT(c, 0xe96acu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x100u, 0, 4); }
    // 0e96b1  push eax
    X86_AT(c, 0xe96b1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e96b2  call 0xe7fb9
    X86_AT(c, 0xe96b2u);
    push32(c, 0xe96b7u); x86_call_known(c, 0xe7fb9u, f_000e7fb9); X86_RET(c, 0xe96b7u);
    X86_TICK(c, 10);
    // 0e96b7  ret 
    X86_AT(c, 0xe96b7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe969cu, "ran off the end of a function");
}
void f_000e96c4(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e96c4  enter 4, 0
    X86_AT(c, 0xe96c4u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0e96c8  push ebx
    X86_AT(c, 0xe96c8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e96c9  push esi
    X86_AT(c, 0xe96c9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e96ca  push edi
    X86_AT(c, 0xe96cau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e96cb  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe96cbu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e96ce  cmp dword ptr [0xc4580], 0
    X86_AT(c, 0xe96ceu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC4580u))), 0x0u, 0, 4);
    // 0e96d5  jne 0xe96e1
    X86_AT(c, 0xe96d5u);
    if (x86_cc(c, 5)) { goto L_e96e1; }
    X86_TICK(c, 7);
    // 0e96d7  call 0xe7f5e
    X86_AT(c, 0xe96d7u);
    push32(c, 0xe96dcu); x86_call_known(c, 0xe7f5eu, f_000e7f5e); X86_RET(c, 0xe96dcu);
    X86_TICK(c, 2);
    // 0e96dc  mov dword ptr [0xc4580], eax
    X86_AT(c, 0xe96dcu);
    wr32((c.sbase[3] + (uint32_t)(0xC4580u)), c.r[0]);
L_e96e1:
    X86_TICK(c, 7);
    // 0e96e1  call 0xe7f6a
    X86_AT(c, 0xe96e1u);
    push32(c, 0xe96e6u); x86_call_known(c, 0xe7f6au, f_000e7f6a); X86_RET(c, 0xe96e6u);
    X86_TICK(c, 16);
    // 0e96e6  xchg esi, eax
    X86_AT(c, 0xe96e6u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e96e7  sub esi, dword ptr [0xc4580]
    X86_AT(c, 0xe96e7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xC4580u))), 0, 4); }
    // 0e96ed  cmp esi, edi
    X86_AT(c, 0xe96edu);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0e96ef  jb 0xe96fc
    X86_AT(c, 0xe96efu);
    if (x86_cc(c, 2)) { goto L_e96fc; }
    X86_TICK(c, 11);
    // 0e96f1  mov eax, esi
    X86_AT(c, 0xe96f1u);
    c.r[0] = c.r[6];
    // 0e96f3  sub eax, edi
    X86_AT(c, 0xe96f3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e96f5  cmp eax, 0x200
    X86_AT(c, 0xe96f5u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 0e96fa  jge 0xe9741
    X86_AT(c, 0xe96fau);
    if (x86_cc(c, 13)) { goto L_e9741; }
L_e96fc:
    X86_TICK(c, 7);
    // 0e96fc  cmp esi, edi
    X86_AT(c, 0xe96fcu);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0e96fe  jae 0xe9717
    X86_AT(c, 0xe96feu);
    if (x86_cc(c, 3)) { goto L_e9717; }
    X86_TICK(c, 63);
    // 0e9700  mov eax, edi
    X86_AT(c, 0xe9700u);
    c.r[0] = c.r[7];
    // 0e9702  sub eax, esi
    X86_AT(c, 0xe9702u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e9704  add eax, 0xfff
    X86_AT(c, 0xe9704u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xFFFu, 0, 4); }
    // 0e9709  cdq 
    X86_AT(c, 0xe9709u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e970a  mov ecx, 0x1000
    X86_AT(c, 0xe970au);
    c.r[1] = 0x1000u;
    // 0e970f  idiv ecx
    X86_AT(c, 0xe970fu);
    x86_idiv(c, c.r[1], 4, 0xe970fu);
    // 0e9711  xchg ebx, eax
    X86_AT(c, 0xe9711u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e9712  shl ebx, 0xc
    X86_AT(c, 0xe9712u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[3] = r; }
    // 0e9715  jmp 0xe971c
    X86_AT(c, 0xe9715u);
    goto L_e971c;
L_e9717:
    X86_TICK(c, 2);
    // 0e9717  mov ebx, 0x1000
    X86_AT(c, 0xe9717u);
    c.r[3] = 0x1000u;
L_e971c:
    X86_TICK(c, 9);
    // 0e971c  push ebx
    X86_AT(c, 0xe971cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e971d  call 0xe7f70
    X86_AT(c, 0xe971du);
    push32(c, 0xe9722u); x86_call_known(c, 0xe7f70u, f_000e7f70); X86_RET(c, 0xe9722u);
    X86_TICK(c, 7);
    // 0e9722  call 0xe7f6a
    X86_AT(c, 0xe9722u);
    push32(c, 0xe9727u); x86_call_known(c, 0xe7f6au, f_000e7f6a); X86_RET(c, 0xe9727u);
    X86_TICK(c, 16);
    // 0e9727  xchg esi, eax
    X86_AT(c, 0xe9727u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e9728  sub esi, dword ptr [0xc4580]
    X86_AT(c, 0xe9728u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(0xC4580u))), 0, 4); }
    // 0e972e  cmp esi, edi
    X86_AT(c, 0xe972eu);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 0e9730  jb 0xe973d
    X86_AT(c, 0xe9730u);
    if (x86_cc(c, 2)) { goto L_e973d; }
    X86_TICK(c, 11);
    // 0e9732  mov eax, esi
    X86_AT(c, 0xe9732u);
    c.r[0] = c.r[6];
    // 0e9734  sub eax, edi
    X86_AT(c, 0xe9734u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e9736  cmp eax, 0x200
    X86_AT(c, 0xe9736u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 0e973b  jge 0xe9741
    X86_AT(c, 0xe973bu);
    if (x86_cc(c, 13)) { goto L_e9741; }
L_e973d:
    X86_TICK(c, 9);
    // 0e973d  sub eax, eax
    X86_AT(c, 0xe973du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e973f  jmp 0xe9756
    X86_AT(c, 0xe973fu);
    goto L_e9756;
L_e9741:
    X86_TICK(c, 20);
    // 0e9741  mov ebx, dword ptr [0xc4580]
    X86_AT(c, 0xe9741u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0xC4580u)));
    // 0e9747  mov dword ptr [ebp - 4], ebx
    X86_AT(c, 0xe9747u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[3]);
    // 0e974a  add dword ptr [0xc4580], edi
    X86_AT(c, 0xe974au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC4580u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0e9750  call 0xe969c
    X86_AT(c, 0xe9750u);
    push32(c, 0xe9755u); x86_call_known(c, 0xe969cu, f_000e969c); X86_RET(c, 0xe9755u);
    X86_TICK(c, 3);
    // 0e9755  xchg ebx, eax
    X86_AT(c, 0xe9755u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
L_e9756:
    X86_TICK(c, 28);
    // 0e9756  pop edi
    X86_AT(c, 0xe9756u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9757  pop esi
    X86_AT(c, 0xe9757u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e9758  pop ebx
    X86_AT(c, 0xe9758u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e9759  leave 
    X86_AT(c, 0xe9759u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e975a  ret 4
    X86_AT(c, 0xe975au);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe96c4u, "ran off the end of a function");
}
void f_000e976c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0e976c  push ebp
    X86_AT(c, 0xe976cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e976d  mov ebp, esp
    X86_AT(c, 0xe976du);
    c.r[5] = c.r[4];
    // 0e976f  push esi
    X86_AT(c, 0xe976fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e9770  push edi
    X86_AT(c, 0xe9770u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9771  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe9771u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e9774  mov eax, 0x18
    X86_AT(c, 0xe9774u);
    c.r[0] = 0x18u;
    // 0e9779  cmp eax, edi
    X86_AT(c, 0xe9779u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0e977b  jb 0xe977e
    X86_AT(c, 0xe977bu);
    if (x86_cc(c, 2)) { goto L_e977e; }
    X86_TICK(c, 3);
    // 0e977d  xchg edi, eax
    X86_AT(c, 0xe977du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
L_e977e:
    X86_TICK(c, 7);
    // 0e977e  cmp edi, 0x7fffffff
    X86_AT(c, 0xe977eu);
    (void)x86_sub(c, c.r[7], 0x7FFFFFFFu, 0, 4);
    // 0e9784  ja 0xe97c9
    X86_AT(c, 0xe9784u);
    if (x86_cc(c, 7)) { goto L_e97c9; }
    X86_TICK(c, 9);
    // 0e9786  push edi
    X86_AT(c, 0xe9786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9787  call 0xe96c4
    X86_AT(c, 0xe9787u);
    push32(c, 0xe978cu); x86_call_known(c, 0xe96c4u, f_000e96c4); X86_RET(c, 0xe978cu);
    X86_TICK(c, 10);
    // 0e978c  xchg esi, eax
    X86_AT(c, 0xe978cu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e978d  and esi, esi
    X86_AT(c, 0xe978du);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e978f  je 0xe97c9
    X86_AT(c, 0xe978fu);
    if (x86_cc(c, 4)) { goto L_e97c9; }
    X86_TICK(c, 23);
    // 0e9791  sub eax, eax
    X86_AT(c, 0xe9791u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9793  mov dword ptr [esi], eax
    X86_AT(c, 0xe9793u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0e9795  mov edx, dword ptr [0xc457c]
    X86_AT(c, 0xe9795u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC457Cu)));
    // 0e979b  mov dword ptr [esi + 4], edx
    X86_AT(c, 0xe979bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), c.r[2]);
    // 0e979e  mov byte ptr [esi + 0xf], 0x55
    X86_AT(c, 0xe979eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu)), 0x55u);
    // 0e97a2  mov dword ptr [esi + 8], edi
    X86_AT(c, 0xe97a2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[7]);
    // 0e97a5  mov byte ptr [esi + 0xe], al
    X86_AT(c, 0xe97a5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu)), g8(c, 0));
    // 0e97a8  cmp eax, edx
    X86_AT(c, 0xe97a8u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0e97aa  je 0xe97ae
    X86_AT(c, 0xe97aau);
    if (x86_cc(c, 4)) { goto L_e97ae; }
    X86_TICK(c, 2);
    // 0e97ac  mov dword ptr [edx], esi
    X86_AT(c, 0xe97acu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[6]);
L_e97ae:
    X86_TICK(c, 14);
    // 0e97ae  mov dword ptr [0xc457c], esi
    X86_AT(c, 0xe97aeu);
    wr32((c.sbase[3] + (uint32_t)(0xC457Cu)), c.r[6]);
    // 0e97b4  cmp dword ptr [0xc4578], 0
    X86_AT(c, 0xe97b4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC4578u))), 0x0u, 0, 4);
    // 0e97bb  jne 0xe97c3
    X86_AT(c, 0xe97bbu);
    if (x86_cc(c, 5)) { goto L_e97c3; }
    X86_TICK(c, 2);
    // 0e97bd  mov dword ptr [0xc4578], esi
    X86_AT(c, 0xe97bdu);
    wr32((c.sbase[3] + (uint32_t)(0xC4578u)), c.r[6]);
L_e97c3:
    X86_TICK(c, 9);
    // 0e97c3  push esi
    X86_AT(c, 0xe97c3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e97c4  call 0xe9594
    X86_AT(c, 0xe97c4u);
    push32(c, 0xe97c9u); x86_call_known(c, 0xe9594u, f_000e9594); X86_RET(c, 0xe97c9u);
L_e97c9:
    X86_TICK(c, 24);
    // 0e97c9  pop edi
    X86_AT(c, 0xe97c9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e97ca  pop esi
    X86_AT(c, 0xe97cau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e97cb  leave 
    X86_AT(c, 0xe97cbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e97cc  ret 4
    X86_AT(c, 0xe97ccu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe976cu, "ran off the end of a function");
}
void f_000e97d8(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e97d8  enter 8, 0
    X86_AT(c, 0xe97d8u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 0e97dc  push ebx
    X86_AT(c, 0xe97dcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e97dd  push esi
    X86_AT(c, 0xe97ddu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e97de  push edi
    X86_AT(c, 0xe97deu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e97df  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe97dfu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e97e2  cmp byte ptr [0xc456c], 0
    X86_AT(c, 0xe97e2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC456Cu))), 0x0u, 0, 1);
    // 0e97e9  je 0xe97f0
    X86_AT(c, 0xe97e9u);
    if (x86_cc(c, 4)) { goto L_e97f0; }
    X86_TICK(c, 7);
    // 0e97eb  call 0xe9a30
    X86_AT(c, 0xe97ebu);
    push32(c, 0xe97f0u); x86_call_known(c, 0xe9a30u, f_000e9a30); X86_RET(c, 0xe97f0u);
L_e97f0:
    X86_TICK(c, 7);
    // 0e97f0  cmp edi, 0x7fffffec
    X86_AT(c, 0xe97f0u);
    (void)x86_sub(c, c.r[7], 0x7FFFFFECu, 0, 4);
    // 0e97f6  jbe 0xe97ff
    X86_AT(c, 0xe97f6u);
    if (x86_cc(c, 6)) { goto L_e97ff; }
    X86_TICK(c, 9);
    // 0e97f8  sub eax, eax
    X86_AT(c, 0xe97f8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e97fa  jmp 0xe98d7
    X86_AT(c, 0xe97fau);
    goto L_e98d7;
L_e97ff:
    X86_TICK(c, 10);
    // 0e97ff  mov eax, edi
    X86_AT(c, 0xe97ffu);
    c.r[0] = c.r[7];
    // 0e9801  rcr eax, 1
    X86_AT(c, 0xe9801u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0e9803  jae 0xe9806
    X86_AT(c, 0xe9803u);
    if (x86_cc(c, 3)) { goto L_e9806; }
    X86_TICK(c, 2);
    // 0e9805  inc edi
    X86_AT(c, 0xe9805u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_e9806:
    X86_TICK(c, 7);
    // 0e9806  test di, 3
    X86_AT(c, 0xe9806u);
    (void)x86_logic(c, (c.r[7] & 0xFFFFu) & 0x3u, 2);
    // 0e980b  je 0xe9810
    X86_AT(c, 0xe980bu);
    if (x86_cc(c, 4)) { goto L_e9810; }
    X86_TICK(c, 2);
    // 0e980d  add edi, 2
    X86_AT(c, 0xe980du);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
L_e9810:
    X86_TICK(c, 11);
    // 0e9810  add edi, 0x10
    X86_AT(c, 0xe9810u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e9813  push edi
    X86_AT(c, 0xe9813u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9814  call 0xe9644
    X86_AT(c, 0xe9814u);
    push32(c, 0xe9819u); x86_call_known(c, 0xe9644u, f_000e9644); X86_RET(c, 0xe9819u);
    X86_TICK(c, 10);
    // 0e9819  xchg esi, eax
    X86_AT(c, 0xe9819u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e981a  and esi, esi
    X86_AT(c, 0xe981au);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e981c  jne 0xe982b
    X86_AT(c, 0xe981cu);
    if (x86_cc(c, 5)) { goto L_e982b; }
    X86_TICK(c, 9);
    // 0e981e  push edi
    X86_AT(c, 0xe981eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e981f  call 0xe976c
    X86_AT(c, 0xe981fu);
    push32(c, 0xe9824u); x86_call_known(c, 0xe976cu, f_000e976c); X86_RET(c, 0xe9824u);
    X86_TICK(c, 9);
    // 0e9824  push edi
    X86_AT(c, 0xe9824u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9825  call 0xe9644
    X86_AT(c, 0xe9825u);
    push32(c, 0xe982au); x86_call_known(c, 0xe9644u, f_000e9644); X86_RET(c, 0xe982au);
    X86_TICK(c, 3);
    // 0e982a  xchg esi, eax
    X86_AT(c, 0xe982au);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
L_e982b:
    X86_TICK(c, 7);
    // 0e982b  and esi, esi
    X86_AT(c, 0xe982bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e982d  je 0xe98bf
    X86_AT(c, 0xe982du);
    if (x86_cc(c, 4)) { goto L_e98bf; }
    X86_TICK(c, 9);
    // 0e9833  push esi
    X86_AT(c, 0xe9833u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e9834  call 0xe9540
    X86_AT(c, 0xe9834u);
    push32(c, 0xe9839u); x86_call_known(c, 0xe9540u, f_000e9540); X86_RET(c, 0xe9839u);
    X86_TICK(c, 15);
    // 0e9839  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0xe9839u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0e983c  sub eax, edi
    X86_AT(c, 0xe983cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0e983e  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe983eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e9841  cmp eax, 0x10
    X86_AT(c, 0xe9841u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 0e9844  ja 0xe9850
    X86_AT(c, 0xe9844u);
    if (x86_cc(c, 7)) { goto L_e9850; }
    X86_TICK(c, 6);
    // 0e9846  mov edi, dword ptr [esi + 8]
    X86_AT(c, 0xe9846u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0e9849  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0xe9849u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
L_e9850:
    X86_TICK(c, 37);
    // 0e9850  mov dword ptr [esi + 8], edi
    X86_AT(c, 0xe9850u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[7]);
    // 0e9853  lea eax, [edi - 0x10]
    X86_AT(c, 0xe9853u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFF0u);
    // 0e9856  mov dword ptr [0xc4584], eax
    X86_AT(c, 0xe9856u);
    wr32((c.sbase[3] + (uint32_t)(0xC4584u)), c.r[0]);
    // 0e985b  mov byte ptr [esi + 0xf], 0x44
    X86_AT(c, 0xe985bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xFu)), 0x44u);
    // 0e985f  mov ax, word ptr [0xc45a0]
    X86_AT(c, 0xe985fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC45A0u))));
    // 0e9865  mov word ptr [esi + 0xc], ax
    X86_AT(c, 0xe9865u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)), (c.r[0] & 0xFFFFu));
    // 0e9869  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0xe9869u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e986c  mov byte ptr [esi + 0xe], al
    X86_AT(c, 0xe986cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu)), g8(c, 0));
    // 0e986f  lea eax, [esi + 0x10]
    X86_AT(c, 0xe986fu);
    c.r[0] = (uint32_t)(c.r[6] + 0x10u);
    // 0e9872  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe9872u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e9875  push eax
    X86_AT(c, 0xe9875u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9876  mov ecx, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe9876u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e9879  call dword ptr [ebp + 0x10]
    X86_AT(c, 0xe9879u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, 0xe987cu); x86_call(c, t); X86_RET(c, 0xe987cu); }
    X86_TICK(c, 11);
    // 0e987c  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe987cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e987f  and eax, eax
    X86_AT(c, 0xe987fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e9881  jbe 0xe98c6
    X86_AT(c, 0xe9881u);
    if (x86_cc(c, 6)) { goto L_e98c6; }
    X86_TICK(c, 37);
    // 0e9883  lea ebx, [edi + esi*1]
    X86_AT(c, 0xe9883u);
    c.r[3] = (uint32_t)(c.r[7] + c.r[6]);
    // 0e9886  mov edx, dword ptr [esi]
    X86_AT(c, 0xe9886u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0e9888  mov dword ptr [ebx], edx
    X86_AT(c, 0xe9888u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[2]);
    // 0e988a  mov dword ptr [esi], ebx
    X86_AT(c, 0xe988au);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[3]);
    // 0e988c  mov dword ptr [ebx + 4], esi
    X86_AT(c, 0xe988cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[6]);
    // 0e988f  mov dword ptr [ebx + 8], eax
    X86_AT(c, 0xe988fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)), c.r[0]);
    // 0e9892  mov byte ptr [ebx + 0xf], 0x55
    X86_AT(c, 0xe9892u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFu)), 0x55u);
    // 0e9896  mov byte ptr [ebx + 0xe], 0
    X86_AT(c, 0xe9896u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu)), 0x0u);
    // 0e989a  mov dx, word ptr [0xc45a0]
    X86_AT(c, 0xe989au);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0xC45A0u))));
    // 0e98a1  mov word ptr [ebx + 0xc], dx
    X86_AT(c, 0xe98a1u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), (c.r[2] & 0xFFFFu));
    // 0e98a5  mov dword ptr [ebx + eax*1 + 4], ebx
    X86_AT(c, 0xe98a5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + c.r[0] + 0x4u)), c.r[3]);
    // 0e98a9  cmp esi, dword ptr [0xc457c]
    X86_AT(c, 0xe98a9u);
    (void)x86_sub(c, c.r[6], rd32((c.sbase[3] + (uint32_t)(0xC457Cu))), 0, 4);
    // 0e98af  jne 0xe98b7
    X86_AT(c, 0xe98afu);
    if (x86_cc(c, 5)) { goto L_e98b7; }
    X86_TICK(c, 2);
    // 0e98b1  mov dword ptr [0xc457c], ebx
    X86_AT(c, 0xe98b1u);
    wr32((c.sbase[3] + (uint32_t)(0xC457Cu)), c.r[3]);
L_e98b7:
    X86_TICK(c, 9);
    // 0e98b7  push ebx
    X86_AT(c, 0xe98b7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e98b8  call 0xe9594
    X86_AT(c, 0xe98b8u);
    push32(c, 0xe98bdu); x86_call_known(c, 0xe9594u, f_000e9594); X86_RET(c, 0xe98bdu);
    X86_TICK(c, 7);
    // 0e98bd  jmp 0xe98c6
    X86_AT(c, 0xe98bdu);
    goto L_e98c6;
L_e98bf:
    X86_TICK(c, 2);
    // 0e98bf  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe98bfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_e98c6:
    X86_TICK(c, 12);
    // 0e98c6  cmp byte ptr [0xc456c], 0
    X86_AT(c, 0xe98c6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC456Cu))), 0x0u, 0, 1);
    // 0e98cd  je 0xe98d4
    X86_AT(c, 0xe98cdu);
    if (x86_cc(c, 4)) { goto L_e98d4; }
    X86_TICK(c, 7);
    // 0e98cf  call 0xe9a30
    X86_AT(c, 0xe98cfu);
    push32(c, 0xe98d4u); x86_call_known(c, 0xe9a30u, f_000e9a30); X86_RET(c, 0xe98d4u);
L_e98d4:
    X86_TICK(c, 4);
    // 0e98d4  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe98d4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_e98d7:
    X86_TICK(c, 28);
    // 0e98d7  pop edi
    X86_AT(c, 0xe98d7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e98d8  pop esi
    X86_AT(c, 0xe98d8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e98d9  pop ebx
    X86_AT(c, 0xe98d9u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e98da  leave 
    X86_AT(c, 0xe98dau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e98db  ret 0x10
    X86_AT(c, 0xe98dbu);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0xe97d8u, "ran off the end of a function");
}
void f_000e98e0(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0e98e0  push ebp
    X86_AT(c, 0xe98e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e98e1  mov ebp, esp
    X86_AT(c, 0xe98e1u);
    c.r[5] = c.r[4];
    // 0e98e3  push ecx
    X86_AT(c, 0xe98e3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e98e4  leave 
    X86_AT(c, 0xe98e4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e98e5  ret 4
    X86_AT(c, 0xe98e5u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe98e0u, "ran off the end of a function");
}
void f_000e98f0(X86Cpu& c) {
    X86_TICK(c, 29);
    // 0e98f0  enter 4, 0
    X86_AT(c, 0xe98f0u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0e98f4  push edi
    X86_AT(c, 0xe98f4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e98f5  push ebp
    X86_AT(c, 0xe98f5u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e98f6  push 0xe98e0
    X86_AT(c, 0xe98f6u);
    { uint32_t v = 0xE98E0u; push32(c, v); }
    // 0e98fb  push dword ptr [ebp + 8]
    X86_AT(c, 0xe98fbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e98fe  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe98feu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e9901  call 0xe97d8
    X86_AT(c, 0xe9901u);
    push32(c, 0xe9906u); x86_call_known(c, 0xe97d8u, f_000e97d8); X86_RET(c, 0xe9906u);
    X86_TICK(c, 14);
    // 0e9906  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe9906u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e9909  cmp byte ptr [0xc456e], 0
    X86_AT(c, 0xe9909u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC456Eu))), 0x0u, 0, 1);
    // 0e9910  je 0xe992c
    X86_AT(c, 0xe9910u);
    if (x86_cc(c, 4)) { goto L_e992c; }
    X86_TICK(c, 7);
    // 0e9912  and eax, eax
    X86_AT(c, 0xe9912u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e9914  je 0xe992c
    X86_AT(c, 0xe9914u);
    if (x86_cc(c, 4)) { goto L_e992c; }
    X86_TICK(c, 11);
    // 0e9916  mov edx, dword ptr [0xc4584]
    X86_AT(c, 0xe9916u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC4584u)));
    // 0e991c  and edx, edx
    X86_AT(c, 0xe991cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0e991e  jbe 0xe992c
    X86_AT(c, 0xe991eu);
    if (x86_cc(c, 6)) { goto L_e992c; }
    X86_TICK(c, 17);
    // 0e9920  mov al, byte ptr [0xc456d]
    X86_AT(c, 0xe9920u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC456Du))));
    // 0e9925  mov ecx, edx
    X86_AT(c, 0xe9925u);
    c.r[1] = c.r[2];
    // 0e9927  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0xe9927u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e992a  stosb byte ptr es:[edi], al
    X86_AT(c, 0xe992au);
    x86_string(c, 2, 1, 243, 4, 3);
L_e992c:
    X86_TICK(c, 24);
    // 0e992c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe992cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e992f  pop edi
    X86_AT(c, 0xe992fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9930  leave 
    X86_AT(c, 0xe9930u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9931  ret 8
    X86_AT(c, 0xe9931u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe98f0u, "ran off the end of a function");
}
void f_000e993c(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0e993c  push ebp
    X86_AT(c, 0xe993cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e993d  mov ebp, esp
    X86_AT(c, 0xe993du);
    c.r[5] = c.r[4];
    // 0e993f  push dword ptr [ebp + 8]
    X86_AT(c, 0xe993fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e9942  mov ax, word ptr [0xc4570]
    X86_AT(c, 0xe9942u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC4570u))));
    // 0e9948  push eax
    X86_AT(c, 0xe9948u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9949  call 0xe98f0
    X86_AT(c, 0xe9949u);
    push32(c, 0xe994eu); x86_call_known(c, 0xe98f0u, f_000e98f0); X86_RET(c, 0xe994eu);
    X86_TICK(c, 16);
    // 0e994e  leave 
    X86_AT(c, 0xe994eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e994f  ret 4
    X86_AT(c, 0xe994fu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe993cu, "ran off the end of a function");
}
void f_000e9958(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0e9958  push ebp
    X86_AT(c, 0xe9958u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9959  mov ebp, esp
    X86_AT(c, 0xe9959u);
    c.r[5] = c.r[4];
    // 0e995b  push ecx
    X86_AT(c, 0xe995bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e995c  push ebx
    X86_AT(c, 0xe995cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e995d  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0xe995du);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e9960  push dword ptr [ebx + 8]
    X86_AT(c, 0xe9960u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0e9963  push 6
    X86_AT(c, 0xe9963u);
    { uint32_t v = 0x6u; push32(c, v); }
    // 0e9965  call 0xeb038
    X86_AT(c, 0xe9965u);
    push32(c, 0xe996au); x86_call_known(c, 0xeb038u, f_000eb038); X86_RET(c, 0xe996au);
    X86_TICK(c, 9);
    // 0e996a  mov ebp, ebx
    X86_AT(c, 0xe996au);
    c.r[5] = c.r[3];
    // 0e996c  jmp 0xe9a10
    X86_AT(c, 0xe996cu);
    goto L_e9a10;
L_e9a10:
    X86_TICK(c, 30);
    // 0e9a10  lea esp, [ebp - 0x10]
    X86_AT(c, 0xe9a10u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0e9a13  pop edi
    X86_AT(c, 0xe9a13u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9a14  pop esi
    X86_AT(c, 0xe9a14u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e9a15  pop ebx
    X86_AT(c, 0xe9a15u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e9a16  leave 
    X86_AT(c, 0xe9a16u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9a17  ret 4
    X86_AT(c, 0xe9a17u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9958u, "ran off the end of a function");
}
void f_000e9976(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e9976  enter 4, 0
    X86_AT(c, 0xe9976u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0e997a  push ebx
    X86_AT(c, 0xe997au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e997b  push esi
    X86_AT(c, 0xe997bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e997c  push edi
    X86_AT(c, 0xe997cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e997d  cmp dword ptr [ebp + 8], 0
    X86_AT(c, 0xe997du);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x0u, 0, 4);
    // 0e9981  je 0xe9a13
    X86_AT(c, 0xe9981u);
    if (x86_cc(c, 4)) { goto L_e9a13; }
    X86_TICK(c, 25);
    // 0e9987  add dword ptr [ebp + 8], 0xfffffff0
    X86_AT(c, 0xe9987u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF0u, 0, 4)); }
    // 0e998b  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe998bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e998e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe998eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e9991  cmp byte ptr [0xc456c], 0
    X86_AT(c, 0xe9991u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC456Cu))), 0x0u, 0, 1);
    // 0e9998  je 0xe999f
    X86_AT(c, 0xe9998u);
    if (x86_cc(c, 4)) { goto L_e999f; }
    X86_TICK(c, 7);
    // 0e999a  call 0xe9a30
    X86_AT(c, 0xe999au);
    push32(c, 0xe999fu); x86_call_known(c, 0xe9a30u, f_000e9a30); X86_RET(c, 0xe999fu);
L_e999f:
    X86_TICK(c, 16);
    // 0e999f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe999fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e99a2  cmp byte ptr [eax + 0xf], 0x44
    X86_AT(c, 0xe99a2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu))), 0x44u, 0, 1);
    // 0e99a6  jne 0xe99b6
    X86_AT(c, 0xe99a6u);
    if (x86_cc(c, 5)) { goto L_e99b6; }
    X86_TICK(c, 15);
    // 0e99a8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe99a8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e99ab  mov edx, dword ptr [eax]
    X86_AT(c, 0xe99abu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e99ad  and edx, edx
    X86_AT(c, 0xe99adu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 0e99af  je 0xe99bd
    X86_AT(c, 0xe99afu);
    if (x86_cc(c, 4)) { goto L_e99bd; }
    X86_TICK(c, 11);
    // 0e99b1  cmp eax, dword ptr [edx + 4]
    X86_AT(c, 0xe99b1u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u))), 0, 4);
    // 0e99b4  je 0xe99bd
    X86_AT(c, 0xe99b4u);
    if (x86_cc(c, 4)) { goto L_e99bd; }
L_e99b6:
    X86_TICK(c, 9);
    // 0e99b6  mov ecx, ebp
    X86_AT(c, 0xe99b6u);
    c.r[1] = c.r[5];
    // 0e99b8  call 0xe9958
    X86_AT(c, 0xe99b8u);
    push32(c, 0xe99bdu); x86_call_known(c, 0xe9958u, f_000e9958); X86_RET(c, 0xe99bdu);
L_e99bd:
    X86_TICK(c, 15);
    // 0e99bd  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe99bdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e99c0  mov byte ptr [eax + 0xf], 0x55
    X86_AT(c, 0xe99c0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu)), 0x55u);
    // 0e99c4  push eax
    X86_AT(c, 0xe99c4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e99c5  call 0xe9594
    X86_AT(c, 0xe99c5u);
    push32(c, 0xe99cau); x86_call_known(c, 0xe9594u, f_000e9594); X86_RET(c, 0xe99cau);
    X86_TICK(c, 16);
    // 0e99ca  mov eax, dword ptr [0xc457c]
    X86_AT(c, 0xe99cau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC457Cu)));
    // 0e99cf  cmp byte ptr [eax + 0xf], 0x55
    X86_AT(c, 0xe99cfu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFu))), 0x55u, 0, 1);
    // 0e99d3  jne 0xe9a02
    X86_AT(c, 0xe99d3u);
    if (x86_cc(c, 5)) { goto L_e9a02; }
    X86_TICK(c, 28);
    // 0e99d5  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe99d5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e99d8  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0xe99d8u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0e99db  neg edx
    X86_AT(c, 0xe99dbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_neg(c, v, 4); }
    // 0e99dd  add dword ptr [0xc4580], edx
    X86_AT(c, 0xe99ddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC4580u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[2], 0, 4)); }
    // 0e99e3  mov eax, dword ptr [eax + 4]
    X86_AT(c, 0xe99e3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 0e99e6  mov dword ptr [0xc457c], eax
    X86_AT(c, 0xe99e6u);
    wr32((c.sbase[3] + (uint32_t)(0xC457Cu)), c.r[0]);
    // 0e99eb  and eax, eax
    X86_AT(c, 0xe99ebu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e99ed  je 0xe99f5
    X86_AT(c, 0xe99edu);
    if (x86_cc(c, 4)) { goto L_e99f5; }
    X86_TICK(c, 2);
    // 0e99ef  mov dword ptr [eax], 0
    X86_AT(c, 0xe99efu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
L_e99f5:
    X86_TICK(c, 12);
    // 0e99f5  push dword ptr [ebp - 4]
    X86_AT(c, 0xe99f5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0e99f8  call 0xe9540
    X86_AT(c, 0xe99f8u);
    push32(c, 0xe99fdu); x86_call_known(c, 0xe9540u, f_000e9540); X86_RET(c, 0xe99fdu);
    X86_TICK(c, 7);
    // 0e99fd  call 0xe969c
    X86_AT(c, 0xe99fdu);
    push32(c, 0xe9a02u); x86_call_known(c, 0xe969cu, f_000e969c); X86_RET(c, 0xe9a02u);
L_e9a02:
    X86_TICK(c, 12);
    // 0e9a02  cmp byte ptr [0xc456c], 0
    X86_AT(c, 0xe9a02u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC456Cu))), 0x0u, 0, 1);
    // 0e9a09  je 0xe9a10
    X86_AT(c, 0xe9a09u);
    if (x86_cc(c, 4)) { goto L_e9a10; }
    X86_TICK(c, 7);
    // 0e9a0b  call 0xe9a30
    X86_AT(c, 0xe9a0bu);
    push32(c, 0xe9a10u); x86_call_known(c, 0xe9a30u, f_000e9a30); X86_RET(c, 0xe9a10u);
L_e9a10:
    X86_TICK(c, 2);
    // 0e9a10  lea esp, [ebp - 0x10]
    X86_AT(c, 0xe9a10u);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
L_e9a13:
    X86_TICK(c, 28);
    // 0e9a13  pop edi
    X86_AT(c, 0xe9a13u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9a14  pop esi
    X86_AT(c, 0xe9a14u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e9a15  pop ebx
    X86_AT(c, 0xe9a15u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e9a16  leave 
    X86_AT(c, 0xe9a16u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9a17  ret 4
    X86_AT(c, 0xe9a17u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9976u, "ran off the end of a function");
}
void f_000e9a30(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e9a30  push ebp
    X86_AT(c, 0xe9a30u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9a31  mov ebp, esp
    X86_AT(c, 0xe9a31u);
    c.r[5] = c.r[4];
    // 0e9a33  push ebp
    X86_AT(c, 0xe9a33u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9a34  push 0xe9a48
    X86_AT(c, 0xe9a34u);
    { uint32_t v = 0xE9A48u; push32(c, v); }
    // 0e9a39  call 0xe9474
    X86_AT(c, 0xe9a39u);
    push32(c, 0xe9a3eu); x86_call_known(c, 0xe9474u, f_000e9474); X86_RET(c, 0xe9a3eu);
    X86_TICK(c, 16);
    // 0e9a3e  leave 
    X86_AT(c, 0xe9a3eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9a3f  ret 
    X86_AT(c, 0xe9a3fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9a30u, "ran off the end of a function");
}
void f_000e9a48(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0e9a48  push ebp
    X86_AT(c, 0xe9a48u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9a49  mov ebp, esp
    X86_AT(c, 0xe9a49u);
    c.r[5] = c.r[4];
    // 0e9a4b  push ecx
    X86_AT(c, 0xe9a4bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0e9a4c  leave 
    X86_AT(c, 0xe9a4cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9a4d  ret 4
    X86_AT(c, 0xe9a4du);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9a48u, "ran off the end of a function");
}
void f_000e9a50(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e9a50  inc byte ptr [0xc45a5]
    X86_AT(c, 0xe9a50u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC45A5u)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 0e9a56  call 0xeb010
    X86_AT(c, 0xe9a56u);
    push32(c, 0xe9a5bu); x86_call_known(c, 0xeb010u, f_000eb010); X86_RET(c, 0xe9a5bu);
    X86_TICK(c, 7);
    // 0e9a5b  call 0xe92c8
    X86_AT(c, 0xe9a5bu);
    push32(c, 0xe9a60u); x86_call_known(c, 0xe92c8u, f_000e92c8); X86_RET(c, 0xe9a60u);
    X86_TICK(c, 7);
    // 0e9a60  call 0xe9184
    X86_AT(c, 0xe9a60u);
    push32(c, 0xe9a65u); x86_call_known(c, 0xe9184u, f_000e9184); X86_RET(c, 0xe9a65u);
    X86_TICK(c, 7);
    // 0e9a65  call 0xe7a85
    X86_AT(c, 0xe9a65u);
    push32(c, 0xe9a6au); x86_call_known(c, 0xe7a85u, f_000e7a85); X86_RET(c, 0xe9a6au);
    X86_TICK(c, 13);
    // 0e9a6a  mov al, byte ptr [0xc45a4]
    X86_AT(c, 0xe9a6au);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC45A4u))));
    // 0e9a6f  push eax
    X86_AT(c, 0xe9a6fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9a70  call 0xe939c
    X86_AT(c, 0xe9a70u);
    push32(c, 0xe9a75u); x86_call_known(c, 0xe939cu, f_000e939c); X86_RET(c, 0xe9a75u);
    X86_TICK(c, 10);
    // 0e9a75  ret 
    X86_AT(c, 0xe9a75u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9a50u, "ran off the end of a function");
}
void f_000e9a78(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e9a78  push ebp
    X86_AT(c, 0xe9a78u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9a79  mov ebp, esp
    X86_AT(c, 0xe9a79u);
    c.r[5] = c.r[4];
    // 0e9a7b  cmp byte ptr [0xc45a6], 0
    X86_AT(c, 0xe9a7bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC45A6u))), 0x0u, 0, 1);
    // 0e9a82  je 0xe9a91
    X86_AT(c, 0xe9a82u);
    if (x86_cc(c, 4)) { goto L_e9a91; }
    X86_TICK(c, 13);
    // 0e9a84  mov al, byte ptr [0xc45a4]
    X86_AT(c, 0xe9a84u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC45A4u))));
    // 0e9a89  push eax
    X86_AT(c, 0xe9a89u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9a8a  call 0xe939c
    X86_AT(c, 0xe9a8au);
    push32(c, 0xe9a8fu); x86_call_known(c, 0xe939cu, f_000e939c); X86_RET(c, 0xe9a8fu);
    X86_TICK(c, 7);
    // 0e9a8f  jmp 0xe9a98
    X86_AT(c, 0xe9a8fu);
    goto L_e9a98;
L_e9a91:
    X86_TICK(c, 2);
    // 0e9a91  mov byte ptr [0xc45a6], 1
    X86_AT(c, 0xe9a91u);
    wr8((c.sbase[3] + (uint32_t)(0xC45A6u)), 0x1u);
L_e9a98:
    X86_TICK(c, 13);
    // 0e9a98  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0xe9a98u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0e9a9b  mov byte ptr [0xc45a4], al
    X86_AT(c, 0xe9a9bu);
    wr8((c.sbase[3] + (uint32_t)(0xC45A4u)), g8(c, 0));
    // 0e9aa0  call 0xe9a50
    X86_AT(c, 0xe9aa0u);
    push32(c, 0xe9aa5u); x86_call_known(c, 0xe9a50u, f_000e9a50); X86_RET(c, 0xe9aa5u);
    X86_TICK(c, 16);
    // 0e9aa5  leave 
    X86_AT(c, 0xe9aa5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9aa6  ret 4
    X86_AT(c, 0xe9aa6u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9a78u, "ran off the end of a function");
}
void f_000e9aac(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0e9aac  push ebp
    X86_AT(c, 0xe9aacu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9aad  mov ebp, esp
    X86_AT(c, 0xe9aadu);
    c.r[5] = c.r[4];
    // 0e9aaf  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe9aafu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e9ab2  call 0xe9358
    X86_AT(c, 0xe9ab2u);
    push32(c, 0xe9ab7u); x86_call_known(c, 0xe9358u, f_000e9358); X86_RET(c, 0xe9ab7u);
    X86_TICK(c, 23);
    // 0e9ab7  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe9ab7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e9aba  mov dword ptr [0xc4548], eax
    X86_AT(c, 0xe9abau);
    wr32((c.sbase[3] + (uint32_t)(0xC4548u)), c.r[0]);
    // 0e9abf  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0xe9abfu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e9ac3  mov dword ptr [0xc4544], eax
    X86_AT(c, 0xe9ac3u);
    wr32((c.sbase[3] + (uint32_t)(0xC4544u)), c.r[0]);
    // 0e9ac8  push 0x3f
    X86_AT(c, 0xe9ac8u);
    { uint32_t v = 0x3Fu; push32(c, v); }
    // 0e9aca  call 0xe92e4
    X86_AT(c, 0xe9acau);
    push32(c, 0xe9acfu); x86_call_known(c, 0xe92e4u, f_000e92e4); X86_RET(c, 0xe9acfu);
    X86_TICK(c, 20);
    // 0e9acf  mov eax, dword ptr [0xc4540]
    X86_AT(c, 0xe9acfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4540u)));
    // 0e9ad4  leave 
    X86_AT(c, 0xe9ad4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9ad5  ret 0xc
    X86_AT(c, 0xe9ad5u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xe9aacu, "ran off the end of a function");
}
void f_000e9ad8(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0e9ad8  push ebp
    X86_AT(c, 0xe9ad8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9ad9  mov ebp, esp
    X86_AT(c, 0xe9ad9u);
    c.r[5] = c.r[4];
    // 0e9adb  push edi
    X86_AT(c, 0xe9adbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9adc  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe9adcu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e9adf  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe9adfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e9ae2  call 0xe9358
    X86_AT(c, 0xe9ae2u);
    push32(c, 0xe9ae7u); x86_call_known(c, 0xe9358u, f_000e9358); X86_RET(c, 0xe9ae7u);
    X86_TICK(c, 19);
    // 0e9ae7  mov dword ptr [0xc4548], edi
    X86_AT(c, 0xe9ae7u);
    wr32((c.sbase[3] + (uint32_t)(0xC4548u)), c.r[7]);
    // 0e9aed  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0xe9aedu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e9af1  mov dword ptr [0xc4544], eax
    X86_AT(c, 0xe9af1u);
    wr32((c.sbase[3] + (uint32_t)(0xC4544u)), c.r[0]);
    // 0e9af6  push 0x40
    X86_AT(c, 0xe9af6u);
    { uint32_t v = 0x40u; push32(c, v); }
    // 0e9af8  call 0xe92e4
    X86_AT(c, 0xe9af8u);
    push32(c, 0xe9afdu); x86_call_known(c, 0xe92e4u, f_000e92e4); X86_RET(c, 0xe9afdu);
    X86_TICK(c, 11);
    // 0e9afd  cmp edi, dword ptr [0xc4540]
    X86_AT(c, 0xe9afdu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xC4540u))), 0, 4);
    // 0e9b03  jbe 0xe9b18
    X86_AT(c, 0xe9b03u);
    if (x86_cc(c, 6)) { goto L_e9b18; }
    X86_TICK(c, 12);
    // 0e9b05  cmp word ptr [0xc453a], 0
    X86_AT(c, 0xe9b05u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC453Au))), 0x0u, 0, 2);
    // 0e9b0d  jne 0xe9b18
    X86_AT(c, 0xe9b0du);
    if (x86_cc(c, 5)) { goto L_e9b18; }
    X86_TICK(c, 2);
    // 0e9b0f  mov word ptr [0xc453a], 0x15
    X86_AT(c, 0xe9b0fu);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), 0x15u);
L_e9b18:
    X86_TICK(c, 24);
    // 0e9b18  mov eax, dword ptr [0xc4540]
    X86_AT(c, 0xe9b18u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC4540u)));
    // 0e9b1d  pop edi
    X86_AT(c, 0xe9b1du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9b1e  leave 
    X86_AT(c, 0xe9b1eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9b1f  ret 0xc
    X86_AT(c, 0xe9b1fu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xe9ad8u, "ran off the end of a function");
}
void f_000e9b3c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e9b3c  push ebp
    X86_AT(c, 0xe9b3cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9b3d  mov ebp, esp
    X86_AT(c, 0xe9b3du);
    c.r[5] = c.r[4];
    // 0e9b3f  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0xe9b3fu);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e9b43  mov dword ptr [0xc4544], eax
    X86_AT(c, 0xe9b43u);
    wr32((c.sbase[3] + (uint32_t)(0xC4544u)), c.r[0]);
    // 0e9b48  mov byte ptr [0xc4540], 0
    X86_AT(c, 0xe9b48u);
    wr8((c.sbase[3] + (uint32_t)(0xC4540u)), 0x0u);
    // 0e9b4f  push 0x44
    X86_AT(c, 0xe9b4fu);
    { uint32_t v = 0x44u; push32(c, v); }
    // 0e9b51  call 0xe92e4
    X86_AT(c, 0xe9b51u);
    push32(c, 0xe9b56u); x86_call_known(c, 0xe92e4u, f_000e92e4); X86_RET(c, 0xe9b56u);
    X86_TICK(c, 12);
    // 0e9b56  test byte ptr [0xc454c], 0x80
    X86_AT(c, 0xe9b56u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC454Cu))) & 0x80u, 1);
    // 0e9b5d  jne 0xe9b63
    X86_AT(c, 0xe9b5du);
    if (x86_cc(c, 5)) { goto L_e9b63; }
    X86_TICK(c, 9);
    // 0e9b5f  sub eax, eax
    X86_AT(c, 0xe9b5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9b61  jmp 0xe9b7f
    X86_AT(c, 0xe9b61u);
    goto L_e9b7f;
L_e9b63:
    X86_TICK(c, 12);
    // 0e9b63  test byte ptr [0xc454c], 2
    X86_AT(c, 0xe9b63u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC454Cu))) & 0x2u, 1);
    // 0e9b6a  je 0xe9b70
    X86_AT(c, 0xe9b6au);
    if (x86_cc(c, 4)) { goto L_e9b70; }
    X86_TICK(c, 9);
    // 0e9b6c  mov al, 2
    X86_AT(c, 0xe9b6cu);
    s8(c, 0, 0x2u);
    // 0e9b6e  jmp 0xe9b7f
    X86_AT(c, 0xe9b6eu);
    goto L_e9b7f;
L_e9b70:
    X86_TICK(c, 12);
    // 0e9b70  test byte ptr [0xc454c], 1
    X86_AT(c, 0xe9b70u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC454Cu))) & 0x1u, 1);
    // 0e9b77  je 0xe9b7d
    X86_AT(c, 0xe9b77u);
    if (x86_cc(c, 4)) { goto L_e9b7d; }
    X86_TICK(c, 9);
    // 0e9b79  mov al, 1
    X86_AT(c, 0xe9b79u);
    s8(c, 0, 0x1u);
    // 0e9b7b  jmp 0xe9b7f
    X86_AT(c, 0xe9b7bu);
    goto L_e9b7f;
L_e9b7d:
    X86_TICK(c, 2);
    // 0e9b7d  mov al, 4
    X86_AT(c, 0xe9b7du);
    s8(c, 0, 0x4u);
L_e9b7f:
    X86_TICK(c, 16);
    // 0e9b7f  leave 
    X86_AT(c, 0xe9b7fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9b80  ret 4
    X86_AT(c, 0xe9b80u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9b3cu, "ran off the end of a function");
}
void f_000e9b84(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0e9b84  enter 4, 0
    X86_AT(c, 0xe9b84u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0e9b88  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0xe9b88u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e9b8c  mov dword ptr [0xc4544], eax
    X86_AT(c, 0xe9b8cu);
    wr32((c.sbase[3] + (uint32_t)(0xC4544u)), c.r[0]);
    // 0e9b91  mov al, byte ptr [ebp + 0x10]
    X86_AT(c, 0xe9b91u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))));
    // 0e9b94  mov byte ptr [0xc4540], al
    X86_AT(c, 0xe9b94u);
    wr8((c.sbase[3] + (uint32_t)(0xC4540u)), g8(c, 0));
    // 0e9b99  movzx eax, word ptr [ebp + 0xe]
    X86_AT(c, 0xe9b99u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xEu)));
    // 0e9b9d  mov dword ptr [0xc4548], eax
    X86_AT(c, 0xe9b9du);
    wr32((c.sbase[3] + (uint32_t)(0xC4548u)), c.r[0]);
    // 0e9ba2  movzx eax, word ptr [ebp + 0xc]
    X86_AT(c, 0xe9ba2u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e9ba6  mov dword ptr [0xc454c], eax
    X86_AT(c, 0xe9ba6u);
    wr32((c.sbase[3] + (uint32_t)(0xC454Cu)), c.r[0]);
    // 0e9bab  push 0x42
    X86_AT(c, 0xe9babu);
    { uint32_t v = 0x42u; push32(c, v); }
    // 0e9bad  call 0xe92e4
    X86_AT(c, 0xe9badu);
    push32(c, 0xe9bb2u); x86_call_known(c, 0xe92e4u, f_000e92e4); X86_RET(c, 0xe9bb2u);
    X86_TICK(c, 32);
    // 0e9bb2  mov ax, word ptr [0xc454c]
    X86_AT(c, 0xe9bb2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC454Cu))));
    // 0e9bb8  mov word ptr [ebp - 2], ax
    X86_AT(c, 0xe9bb8u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 0e9bbc  mov ax, word ptr [0xc4540]
    X86_AT(c, 0xe9bbcu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC4540u))));
    // 0e9bc2  mov word ptr [ebp - 4], ax
    X86_AT(c, 0xe9bc2u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), (c.r[0] & 0xFFFFu));
    // 0e9bc6  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe9bc6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e9bc9  leave 
    X86_AT(c, 0xe9bc9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9bca  ret 0xc
    X86_AT(c, 0xe9bcau);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xe9b84u, "ran off the end of a function");
}
void f_000e9bd0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e9bd0  push ebp
    X86_AT(c, 0xe9bd0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9bd1  mov ebp, esp
    X86_AT(c, 0xe9bd1u);
    c.r[5] = c.r[4];
    // 0e9bd3  push 0x2a
    X86_AT(c, 0xe9bd3u);
    { uint32_t v = 0x2Au; push32(c, v); }
    // 0e9bd5  call 0xe92e4
    X86_AT(c, 0xe9bd5u);
    push32(c, 0xe9bdau); x86_call_known(c, 0xe92e4u, f_000e92e4); X86_RET(c, 0xe9bdau);
    X86_TICK(c, 50);
    // 0e9bda  mov ax, word ptr [0xc4548]
    X86_AT(c, 0xe9bdau);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC4548u))));
    // 0e9be0  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe9be0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e9be3  mov word ptr [edx], ax
    X86_AT(c, 0xe9be3u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 0e9be6  movzx eax, byte ptr [0xc454c]
    X86_AT(c, 0xe9be6u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xC454Cu)));
    // 0e9bed  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xe9bedu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e9bf0  mov word ptr [edx], ax
    X86_AT(c, 0xe9bf0u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 0e9bf3  movzx eax, byte ptr [0xc454d]
    X86_AT(c, 0xe9bf3u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xC454Du)));
    // 0e9bfa  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe9bfau);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e9bfd  mov word ptr [edx], ax
    X86_AT(c, 0xe9bfdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 0e9c00  leave 
    X86_AT(c, 0xe9c00u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9c01  ret 0xc
    X86_AT(c, 0xe9c01u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xe9bd0u, "ran off the end of a function");
}
void f_000e9c04(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e9c04  push ebp
    X86_AT(c, 0xe9c04u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9c05  mov ebp, esp
    X86_AT(c, 0xe9c05u);
    c.r[5] = c.r[4];
    // 0e9c07  push 0x2c
    X86_AT(c, 0xe9c07u);
    { uint32_t v = 0x2Cu; push32(c, v); }
    // 0e9c09  call 0xe92e4
    X86_AT(c, 0xe9c09u);
    push32(c, 0xe9c0eu); x86_call_known(c, 0xe92e4u, f_000e92e4); X86_RET(c, 0xe9c0eu);
    X86_TICK(c, 52);
    // 0e9c0e  movzx eax, byte ptr [0xc4549]
    X86_AT(c, 0xe9c0eu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xC4549u)));
    // 0e9c15  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xe9c15u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e9c18  mov word ptr [edx], ax
    X86_AT(c, 0xe9c18u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 0e9c1b  movzx eax, byte ptr [0xc4548]
    X86_AT(c, 0xe9c1bu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xC4548u)));
    // 0e9c22  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe9c22u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e9c25  mov word ptr [edx], ax
    X86_AT(c, 0xe9c25u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 0e9c28  movzx eax, byte ptr [0xc454d]
    X86_AT(c, 0xe9c28u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xC454Du)));
    // 0e9c2f  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe9c2fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e9c32  mov word ptr [edx], ax
    X86_AT(c, 0xe9c32u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2])), (c.r[0] & 0xFFFFu));
    // 0e9c35  leave 
    X86_AT(c, 0xe9c35u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9c36  ret 0xc
    X86_AT(c, 0xe9c36u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xe9c04u, "ran off the end of a function");
}
void f_000e9c3c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e9c3c  enter 4, 0
    X86_AT(c, 0xe9c3cu);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0e9c40  push edi
    X86_AT(c, 0xe9c40u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9c41  push 0x2c
    X86_AT(c, 0xe9c41u);
    { uint32_t v = 0x2Cu; push32(c, v); }
    // 0e9c43  call 0xe92e4
    X86_AT(c, 0xe9c43u);
    push32(c, 0xe9c48u); x86_call_known(c, 0xe92e4u, f_000e92e4); X86_RET(c, 0xe9c48u);
    X86_TICK(c, 96);
    // 0e9c48  mov edi, 0xe10
    X86_AT(c, 0xe9c48u);
    c.r[7] = 0xE10u;
    // 0e9c4d  movzx ecx, byte ptr [0xc4549]
    X86_AT(c, 0xe9c4du);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(0xC4549u)));
    // 0e9c54  imul edi, ecx
    X86_AT(c, 0xe9c54u);
    c.r[7] = x86_imul2(c, c.r[7], c.r[1], 4);
    // 0e9c57  movzx eax, byte ptr [0xc4548]
    X86_AT(c, 0xe9c57u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xC4548u)));
    // 0e9c5e  lea eax, [eax + eax*4]
    X86_AT(c, 0xe9c5eu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 0e9c61  lea eax, [eax*4]
    X86_AT(c, 0xe9c61u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0e9c68  lea eax, [eax + eax*2]
    X86_AT(c, 0xe9c68u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 0e9c6b  add eax, edi
    X86_AT(c, 0xe9c6bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0e9c6d  xchg edi, eax
    X86_AT(c, 0xe9c6du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e9c6e  movzx eax, byte ptr [0xc454d]
    X86_AT(c, 0xe9c6eu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xC454Du)));
    // 0e9c75  add edi, eax
    X86_AT(c, 0xe9c75u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e9c77  lea edi, [edi + edi*4]
    X86_AT(c, 0xe9c77u);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0e9c7a  lea edi, [edi + edi*4]
    X86_AT(c, 0xe9c7au);
    c.r[7] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0e9c7d  lea edi, [edi*4]
    X86_AT(c, 0xe9c7du);
    c.r[7] = (uint32_t)(c.r[7] * 4);
    // 0e9c84  movzx eax, byte ptr [0xc454c]
    X86_AT(c, 0xe9c84u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0xC454Cu)));
    // 0e9c8b  add eax, edi
    X86_AT(c, 0xe9c8bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[7], 0, 4); }
    // 0e9c8d  xchg edi, eax
    X86_AT(c, 0xe9c8du);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0e9c8e  mov dword ptr [ebp - 4], edi
    X86_AT(c, 0xe9c8eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[7]);
    // 0e9c91  mov eax, edi
    X86_AT(c, 0xe9c91u);
    c.r[0] = c.r[7];
    // 0e9c93  pop edi
    X86_AT(c, 0xe9c93u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9c94  leave 
    X86_AT(c, 0xe9c94u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e9c95  ret 
    X86_AT(c, 0xe9c95u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9c3cu, "ran off the end of a function");
}
void f_000e9c98(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0e9c98  esc 0xf, byte ptr [0xc45ac]
    X86_AT(c, 0xe9c98u);
    // 0e9c9e  wait 
    X86_AT(c, 0xe9c9eu);
    // 0e9c9f  mov ax, word ptr [0xc45ac]
    X86_AT(c, 0xe9c9fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC45ACu))));
    // 0e9ca5  and ax, 0xf3ff
    X86_AT(c, 0xe9ca5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xF3FFu, 2)); }
    // 0e9ca9  or eax, ecx
    X86_AT(c, 0xe9ca9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[1], 4); }
    // 0e9cab  mov word ptr [0xc45aa], ax
    X86_AT(c, 0xe9cabu);
    wr16((c.sbase[3] + (uint32_t)(0xC45AAu)), (c.r[0] & 0xFFFFu));
    // 0e9cb1  esc 0xd, byte ptr [0xc45aa]
    X86_AT(c, 0xe9cb1u);
    // 0e9cb7  ret 
    X86_AT(c, 0xe9cb7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9c98u, "ran off the end of a function");
}
void f_000e9cb8(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0e9cb8  push eax
    X86_AT(c, 0xe9cb8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e9cb9  esc 0x3c, al
    X86_AT(c, 0xe9cb9u);
    // 0e9cbb  wait 
    X86_AT(c, 0xe9cbbu);
    // 0e9cbc  and ax, 0x4100
    X86_AT(c, 0xe9cbcu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x4100u, 2)); }
    // 0e9cc0  cmp ax, 0x4000
    X86_AT(c, 0xe9cc0u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x4000u, 0, 2);
    // 0e9cc4  je 0xe9cca
    X86_AT(c, 0xe9cc4u);
    if (x86_cc(c, 4)) { goto L_e9cca; }
    X86_TICK(c, 2);
    // 0e9cc6  cmp ax, 1
    X86_AT(c, 0xe9cc6u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x1u, 0, 2);
L_e9cca:
    X86_TICK(c, 14);
    // 0e9cca  pop eax
    X86_AT(c, 0xe9ccau);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0e9ccb  ret 
    X86_AT(c, 0xe9ccbu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9cb8u, "ran off the end of a function");
}
void f_000e9ce1(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e9ce1  xor edx, edx
    X86_AT(c, 0xe9ce1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0e9ce3  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0xe9ce3u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0e9ce7  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0xe9ce7u);
    // 0e9ce9  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xe9ce9u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e9ced  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0xe9cedu);
    // 0e9cef  mov eax, dword ptr cs:[edx + 0xe9cd5]
    X86_AT(c, 0xe9cefu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0xE9CD5u)));
    // 0e9cf6  call eax
    X86_AT(c, 0xe9cf6u);
    { uint32_t t = c.r[0]; push32(c, 0xe9cf8u); x86_call(c, t); X86_RET(c, 0xe9cf8u); }
    X86_TICK(c, 13);
    // 0e9cf8  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0xe9cf8u);
    // 0e9cfa  ret 8
    X86_AT(c, 0xe9cfau);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe9ce1u, "ran off the end of a function");
}
void f_000e9cfd(X86Cpu& c) {
    goto L_e9cfd;
L_e9ce3:
    X86_TICK(c, 25);
    // 0e9ce3  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0xe9ce3u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0e9ce7  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0xe9ce7u);
    // 0e9ce9  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xe9ce9u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e9ced  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0xe9cedu);
    // 0e9cef  mov eax, dword ptr cs:[edx + 0xe9cd5]
    X86_AT(c, 0xe9cefu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0xE9CD5u)));
    // 0e9cf6  call eax
    X86_AT(c, 0xe9cf6u);
    { uint32_t t = c.r[0]; push32(c, 0xe9cf8u); x86_call(c, t); X86_RET(c, 0xe9cf8u); }
    X86_TICK(c, 13);
    // 0e9cf8  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0xe9cf8u);
    // 0e9cfa  ret 8
    X86_AT(c, 0xe9cfau);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_e9cfd:
    X86_TICK(c, 9);
    // 0e9cfd  mov edx, 4
    X86_AT(c, 0xe9cfdu);
    c.r[2] = 0x4u;
    // 0e9d02  jmp 0xe9ce3
    X86_AT(c, 0xe9d02u);
    X86_POLL(c, 0xe9ce3u); goto L_e9ce3;
    x86_fault(c, 0xe9cfdu, "ran off the end of a function");
}
void f_000e9d04(X86Cpu& c) {
    goto L_e9d04;
L_e9ce3:
    X86_TICK(c, 25);
    // 0e9ce3  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0xe9ce3u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0e9ce7  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0xe9ce7u);
    // 0e9ce9  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0xe9ce9u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e9ced  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0xe9cedu);
    // 0e9cef  mov eax, dword ptr cs:[edx + 0xe9cd5]
    X86_AT(c, 0xe9cefu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0xE9CD5u)));
    // 0e9cf6  call eax
    X86_AT(c, 0xe9cf6u);
    { uint32_t t = c.r[0]; push32(c, 0xe9cf8u); x86_call(c, t); X86_RET(c, 0xe9cf8u); }
    X86_TICK(c, 13);
    // 0e9cf8  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0xe9cf8u);
    // 0e9cfa  ret 8
    X86_AT(c, 0xe9cfau);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_e9d04:
    X86_TICK(c, 9);
    // 0e9d04  mov edx, 8
    X86_AT(c, 0xe9d04u);
    c.r[2] = 0x8u;
    // 0e9d09  jmp 0xe9ce3
    X86_AT(c, 0xe9d09u);
    X86_POLL(c, 0xe9ce3u); goto L_e9ce3;
    x86_fault(c, 0xe9d04u, "ran off the end of a function");
}
void f_000e9d0b(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e9d0b  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xe9d0bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e9d0f  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0xe9d0fu);
    // 0e9d11  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0xe9d11u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0e9d15  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0xe9d15u);
    // 0e9d17  esc 0x33, cl
    X86_AT(c, 0xe9d17u);
    // 0e9d19  call 0xe9d7e
    X86_AT(c, 0xe9d19u);
    push32(c, 0xe9d1eu); x86_call_known(c, 0xe9d7eu, f_000e9d7e); X86_RET(c, 0xe9d1eu);
    X86_TICK(c, 10);
    // 0e9d1e  ret 8
    X86_AT(c, 0xe9d1eu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe9d0bu, "ran off the end of a function");
}
void f_000e9d21(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e9d21  esc 0x18, byte ptr [esp + 4]
    X86_AT(c, 0xe9d21u);
    // 0e9d25  ret 4
    X86_AT(c, 0xe9d25u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9d21u, "ran off the end of a function");
}
void f_000e9d47(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e9d47  esc 8, byte ptr [esp + 4]
    X86_AT(c, 0xe9d47u);
    // 0e9d4b  ret 4
    X86_AT(c, 0xe9d4bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9d47u, "ran off the end of a function");
}
void f_000e9d4e(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e9d4e  esc 0x2b, byte ptr [0xc45ae]
    X86_AT(c, 0xe9d4eu);
    // 0e9d54  wait 
    X86_AT(c, 0xe9d54u);
    // 0e9d55  mov eax, dword ptr [0xc45ae]
    X86_AT(c, 0xe9d55u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC45AEu)));
    // 0e9d5a  mov edx, dword ptr [0xc45b2]
    X86_AT(c, 0xe9d5au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC45B2u)));
    // 0e9d60  ret 
    X86_AT(c, 0xe9d60u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9d4eu, "ran off the end of a function");
}
void f_000e9d61(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e9d61  esc 0x28, byte ptr [esp + 4]
    X86_AT(c, 0xe9d61u);
    // 0e9d65  ret 8
    X86_AT(c, 0xe9d65u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe9d61u, "ran off the end of a function");
}
void f_000e9d68(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e9d68  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xe9d68u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e9d6c  esc 0x1f, byte ptr [eax]
    X86_AT(c, 0xe9d6cu);
    // 0e9d6e  wait 
    X86_AT(c, 0xe9d6eu);
    // 0e9d6f  ret 4
    X86_AT(c, 0xe9d6fu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9d68u, "ran off the end of a function");
}
void f_000e9d72(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0e9d72  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xe9d72u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e9d76  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0xe9d76u);
    // 0e9d78  ret 4
    X86_AT(c, 0xe9d78u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9d72u, "ran off the end of a function");
}
void f_000e9d7b(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0e9d7b  esc 0x2b, al
    X86_AT(c, 0xe9d7bu);
    // 0e9d7d  ret 
    X86_AT(c, 0xe9d7du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9d7bu, "ran off the end of a function");
}
void f_000e9d7e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e9d7e  xor eax, eax
    X86_AT(c, 0xe9d7eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e9d80  call 0xe9cb8
    X86_AT(c, 0xe9d80u);
    push32(c, 0xe9d85u); x86_call_known(c, 0xe9cb8u, f_000e9cb8); X86_RET(c, 0xe9d85u);
    X86_TICK(c, 5);
    // 0e9d85  je 0xe9d8c
    X86_AT(c, 0xe9d85u);
    if (x86_cc(c, 4)) { goto L_e9d8c; }
    X86_TICK(c, 5);
    // 0e9d87  jb 0xe9d8b
    X86_AT(c, 0xe9d87u);
    if (x86_cc(c, 2)) { goto L_e9d8b; }
    X86_TICK(c, 12);
    // 0e9d89  inc eax
    X86_AT(c, 0xe9d89u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e9d8a  ret 
    X86_AT(c, 0xe9d8au);
    c.eip = pop32(c); return;
L_e9d8b:
    X86_TICK(c, 2);
    // 0e9d8b  dec eax
    X86_AT(c, 0xe9d8bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_e9d8c:
    X86_TICK(c, 10);
    // 0e9d8c  ret 
    X86_AT(c, 0xe9d8cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9d7eu, "ran off the end of a function");
}
void f_000e9d95(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0e9d95  mov cx, 0xc00
    X86_AT(c, 0xe9d95u);
    s16(c, 1, 0xC00u);
    // 0e9d99  call 0xe9c98
    X86_AT(c, 0xe9d99u);
    push32(c, 0xe9d9eu); x86_call_known(c, 0xe9c98u, f_000e9c98); X86_RET(c, 0xe9d9eu);
    X86_TICK(c, 20);
    // 0e9d9e  esc 0x3f, byte ptr [0xc45ae]
    X86_AT(c, 0xe9d9eu);
    // 0e9da4  esc 0xd, byte ptr [0xc45ac]
    X86_AT(c, 0xe9da4u);
    // 0e9daa  mov eax, dword ptr [0xc45ae]
    X86_AT(c, 0xe9daau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC45AEu)));
    // 0e9daf  ret 
    X86_AT(c, 0xe9dafu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9d95u, "ran off the end of a function");
}
void f_000e9dbb(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e9dbb  esc 0xc, ch
    X86_AT(c, 0xe9dbbu);
    // 0e9dbd  xor eax, eax
    X86_AT(c, 0xe9dbdu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e9dbf  esc 0x3c, al
    X86_AT(c, 0xe9dbfu);
    // 0e9dc1  wait 
    X86_AT(c, 0xe9dc1u);
    // 0e9dc2  ret 
    X86_AT(c, 0xe9dc2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe9dbbu, "ran off the end of a function");
}
void f_000e9dc3(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e9dc3  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0xe9dc3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e9dc7  esc 0x3e, byte ptr [eax]
    X86_AT(c, 0xe9dc7u);
    // 0e9dc9  wait 
    X86_AT(c, 0xe9dc9u);
    // 0e9dca  ret 4
    X86_AT(c, 0xe9dcau);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9dc3u, "ran off the end of a function");
}
void f_000e9dd8(X86Cpu& c) {
    X86_TICK(c, 40);
    // 0e9dd8  push ebp
    X86_AT(c, 0xe9dd8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9dd9  mov ebp, esp
    X86_AT(c, 0xe9dd9u);
    c.r[5] = c.r[4];
    // 0e9ddb  push esi
    X86_AT(c, 0xe9ddbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e9ddc  push edi
    X86_AT(c, 0xe9ddcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9ddd  push ebx
    X86_AT(c, 0xe9dddu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e9dde  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xe9ddeu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e9de1  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe9de1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e9de4  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0xe9de4u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e9de8  sub eax, eax
    X86_AT(c, 0xe9de8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e9dea  cld 
    X86_AT(c, 0xe9deau);
    c.fl &= ~X86_DF;
    // 0e9deb  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0xe9debu);
    x86_string(c, 1, 1, 243, 4, 3);
    // 0e9ded  jb 0xe9df4
    X86_AT(c, 0xe9dedu);
    if (x86_cc(c, 2)) { goto L_e9df4; }
    X86_TICK(c, 5);
    // 0e9def  je 0xe9df5
    X86_AT(c, 0xe9defu);
    if (x86_cc(c, 4)) { goto L_e9df5; }
    X86_TICK(c, 9);
    // 0e9df1  inc eax
    X86_AT(c, 0xe9df1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e9df2  jmp 0xe9df5
    X86_AT(c, 0xe9df2u);
    goto L_e9df5;
L_e9df4:
    X86_TICK(c, 2);
    // 0e9df4  dec eax
    X86_AT(c, 0xe9df4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_e9df5:
    X86_TICK(c, 26);
    // 0e9df5  pop ebx
    X86_AT(c, 0xe9df5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e9df6  pop edi
    X86_AT(c, 0xe9df6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9df7  pop esi
    X86_AT(c, 0xe9df7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e9df8  pop ebp
    X86_AT(c, 0xe9df8u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0e9df9  ret 0xc
    X86_AT(c, 0xe9df9u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xe9dd8u, "ran off the end of a function");
}
void f_000e9dfc(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0e9dfc  push ebp
    X86_AT(c, 0xe9dfcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9dfd  mov ebp, esp
    X86_AT(c, 0xe9dfdu);
    c.r[5] = c.r[4];
    // 0e9dff  push esi
    X86_AT(c, 0xe9dffu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e9e00  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe9e00u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e9e03  mov edx, dword ptr [eax + 4]
    X86_AT(c, 0xe9e03u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 0e9e06  mov esi, edx
    X86_AT(c, 0xe9e06u);
    c.r[6] = c.r[2];
    // 0e9e08  shr esi, 0x14
    X86_AT(c, 0xe9e08u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x14u, 4, w); if (w) c.r[6] = r; }
    // 0e9e0b  mov ecx, dword ptr [eax]
    X86_AT(c, 0xe9e0bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e9e0d  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe9e0du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e9e10  and si, 0x7ff
    X86_AT(c, 0xe9e10u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & 0x7FFu, 2)); }
    // 0e9e15  cmp si, 0x7ff
    X86_AT(c, 0xe9e15u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x7FFu, 0, 2);
    // 0e9e1a  je 0xe9e61
    X86_AT(c, 0xe9e1au);
    if (x86_cc(c, 4)) { goto L_e9e61; }
    X86_TICK(c, 7);
    // 0e9e1c  and si, si
    X86_AT(c, 0xe9e1cu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0e9e1f  je 0xe9e6b
    X86_AT(c, 0xe9e1fu);
    if (x86_cc(c, 4)) { goto L_e9e6b; }
    X86_TICK(c, 6);
    // 0e9e21  mov byte ptr [eax + 0xb], 0
    X86_AT(c, 0xe9e21u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x0u);
    // 0e9e25  sub si, 0x3ff
    X86_AT(c, 0xe9e25u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_sub(c, v, 0x3FFu, 0, 2)); }
    // 0e9e2a  add si, 0x3fff
    X86_AT(c, 0xe9e2au);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x3FFFu, 0, 2)); }
L_e9e2f:
    X86_TICK(c, 9);
    // 0e9e2f  mov word ptr [eax + 8], si
    X86_AT(c, 0xe9e2fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), (c.r[6] & 0xFFFFu));
    // 0e9e33  test edx, 0x80000000
    X86_AT(c, 0xe9e33u);
    (void)x86_logic(c, c.r[2] & 0x80000000u, 4);
    // 0e9e39  je 0xe9e41
    X86_AT(c, 0xe9e39u);
    if (x86_cc(c, 4)) { goto L_e9e41; }
    X86_TICK(c, 9);
    // 0e9e3b  mov byte ptr [eax + 0xa], 1
    X86_AT(c, 0xe9e3bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x1u);
    // 0e9e3f  jmp 0xe9e45
    X86_AT(c, 0xe9e3fu);
    goto L_e9e45;
L_e9e41:
    X86_TICK(c, 2);
    // 0e9e41  mov byte ptr [eax + 0xa], 0
    X86_AT(c, 0xe9e41u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x0u);
L_e9e45:
    X86_TICK(c, 13);
    // 0e9e45  shld edx, ecx, 0xb
    X86_AT(c, 0xe9e45u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0xBu, 4, w); if (w) c.r[2] = r; }
    // 0e9e49  shl ecx, 0xb
    X86_AT(c, 0xe9e49u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 4, w); if (w) c.r[1] = r; }
    // 0e9e4c  and si, si
    X86_AT(c, 0xe9e4cu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0e9e4f  je 0xe9e57
    X86_AT(c, 0xe9e4fu);
    if (x86_cc(c, 4)) { goto L_e9e57; }
    X86_TICK(c, 2);
    // 0e9e51  or edx, 0x80000000
    X86_AT(c, 0xe9e51u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | 0x80000000u, 4); }
L_e9e57:
    X86_TICK(c, 22);
    // 0e9e57  mov dword ptr [eax + 4], edx
    X86_AT(c, 0xe9e57u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), c.r[2]);
    // 0e9e5a  mov dword ptr [eax], ecx
    X86_AT(c, 0xe9e5au);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[1]);
    // 0e9e5c  pop esi
    X86_AT(c, 0xe9e5cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e9e5d  pop ebp
    X86_AT(c, 0xe9e5du);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0e9e5e  ret 8
    X86_AT(c, 0xe9e5eu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_e9e61:
    X86_TICK(c, 11);
    // 0e9e61  mov si, 0x7fff
    X86_AT(c, 0xe9e61u);
    s16(c, 6, 0x7FFFu);
    // 0e9e65  mov byte ptr [eax + 0xb], 0
    X86_AT(c, 0xe9e65u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x0u);
    // 0e9e69  jmp 0xe9e2f
    X86_AT(c, 0xe9e69u);
    X86_POLL(c, 0xe9e2fu); goto L_e9e2f;
L_e9e6b:
    X86_TICK(c, 9);
    // 0e9e6b  mov byte ptr [eax + 0xb], 1
    X86_AT(c, 0xe9e6bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x1u);
    // 0e9e6f  jmp 0xe9e2f
    X86_AT(c, 0xe9e6fu);
    X86_POLL(c, 0xe9e2fu); goto L_e9e2f;
    x86_fault(c, 0xe9dfcu, "ran off the end of a function");
}
void f_000e9e71(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0e9e71  push ebp
    X86_AT(c, 0xe9e71u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9e72  mov ebp, esp
    X86_AT(c, 0xe9e72u);
    c.r[5] = c.r[4];
    // 0e9e74  push esi
    X86_AT(c, 0xe9e74u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e9e75  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe9e75u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e9e78  mov ecx, dword ptr [eax]
    X86_AT(c, 0xe9e78u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0e9e7a  mov edx, dword ptr [eax + 4]
    X86_AT(c, 0xe9e7au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 0e9e7d  movzx esi, word ptr [eax + 8]
    X86_AT(c, 0xe9e7du);
    c.r[6] = rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 0e9e81  sub si, 0x3fff
    X86_AT(c, 0xe9e81u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 0e9e86  cmp si, 0xfc02
    X86_AT(c, 0xe9e86u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0xFC02u, 0, 2);
    // 0e9e8b  jl 0xe9eee
    X86_AT(c, 0xe9e8bu);
    if (x86_cc(c, 12)) { goto L_e9eee; }
    X86_TICK(c, 7);
    // 0e9e8d  cmp si, 0x3ff
    X86_AT(c, 0xe9e8du);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x3FFu, 0, 2);
    // 0e9e92  jg 0xe9ee7
    X86_AT(c, 0xe9e92u);
    if (x86_cc(c, 15)) { goto L_e9ee7; }
    X86_TICK(c, 27);
    // 0e9e94  add si, 0x3ff
    X86_AT(c, 0xe9e94u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x3FFu, 0, 2)); }
    // 0e9e99  and edx, 0x7fffffff
    X86_AT(c, 0xe9e99u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & 0x7FFFFFFFu, 4); }
    // 0e9e9f  shrd ecx, edx, 0xb
    X86_AT(c, 0xe9e9fu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], 0xBu, 4, w); if (w) c.r[1] = r; }
    // 0e9ea3  pushf 
    X86_AT(c, 0xe9ea3u);
    push16(c, c.fl & 0xFFFFu);
    // 0e9ea5  shr edx, 0xb
    X86_AT(c, 0xe9ea5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 5, v, 0xBu, 4, w); if (w) c.r[2] = r; }
    // 0e9ea8  popf 
    X86_AT(c, 0xe9ea8u);
    x86_popfd(c, 2);
    // 0e9eaa  jae 0xe9ec9
    X86_AT(c, 0xe9eaau);
    if (x86_cc(c, 3)) { goto L_e9ec9; }
    X86_TICK(c, 11);
    // 0e9eac  add ecx, 1
    X86_AT(c, 0xe9eacu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x1u, 0, 4); }
    // 0e9eaf  adc edx, 0
    X86_AT(c, 0xe9eafu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 0e9eb2  test edx, 0x100000
    X86_AT(c, 0xe9eb2u);
    (void)x86_logic(c, c.r[2] & 0x100000u, 4);
    // 0e9eb8  je 0xe9ec9
    X86_AT(c, 0xe9eb8u);
    if (x86_cc(c, 4)) { goto L_e9ec9; }
    X86_TICK(c, 11);
    // 0e9eba  xor edx, 0x100000
    X86_AT(c, 0xe9ebau);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ 0x100000u, 4); }
    // 0e9ec0  inc si
    X86_AT(c, 0xe9ec0u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_inc(c, v, 2)); }
    // 0e9ec2  cmp si, 0x7fe
    X86_AT(c, 0xe9ec2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x7FEu, 0, 2);
    // 0e9ec7  jg 0xe9ee7
    X86_AT(c, 0xe9ec7u);
    if (x86_cc(c, 15)) { goto L_e9ee7; }
L_e9ec9:
    X86_TICK(c, 15);
    // 0e9ec9  shl esi, 0x14
    X86_AT(c, 0xe9ec9u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x14u, 4, w); if (w) c.r[6] = r; }
    // 0e9ecc  test byte ptr [eax + 0xa], 1
    X86_AT(c, 0xe9eccu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))) & 0x1u, 1);
    // 0e9ed0  je 0xe9ed8
    X86_AT(c, 0xe9ed0u);
    if (x86_cc(c, 4)) { goto L_e9ed8; }
    X86_TICK(c, 2);
    // 0e9ed2  or edx, 0x80000000
    X86_AT(c, 0xe9ed2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | 0x80000000u, 4); }
L_e9ed8:
    X86_TICK(c, 2);
    // 0e9ed8  or edx, esi
    X86_AT(c, 0xe9ed8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | c.r[6], 4); }
L_e9eda:
    X86_TICK(c, 26);
    // 0e9eda  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xe9edau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e9edd  mov dword ptr [eax + 4], edx
    X86_AT(c, 0xe9eddu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), c.r[2]);
    // 0e9ee0  mov dword ptr [eax], ecx
    X86_AT(c, 0xe9ee0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[1]);
    // 0e9ee2  pop esi
    X86_AT(c, 0xe9ee2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e9ee3  pop ebp
    X86_AT(c, 0xe9ee3u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0e9ee4  ret 8
    X86_AT(c, 0xe9ee4u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_e9ee7:
    X86_TICK(c, 9);
    // 0e9ee7  mov edx, 0x7ff00000
    X86_AT(c, 0xe9ee7u);
    c.r[2] = 0x7FF00000u;
    // 0e9eec  jmp 0xe9ef0
    X86_AT(c, 0xe9eecu);
    goto L_e9ef0;
L_e9eee:
    X86_TICK(c, 2);
    // 0e9eee  xor edx, edx
    X86_AT(c, 0xe9eeeu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
L_e9ef0:
    X86_TICK(c, 9);
    // 0e9ef0  xor ecx, ecx
    X86_AT(c, 0xe9ef0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
    // 0e9ef2  jmp 0xe9eda
    X86_AT(c, 0xe9ef2u);
    X86_POLL(c, 0xe9edau); goto L_e9eda;
    x86_fault(c, 0xe9e71u, "ran off the end of a function");
}
void f_000e9ef4(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0e9ef4  push ebp
    X86_AT(c, 0xe9ef4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9ef5  mov ebp, esp
    X86_AT(c, 0xe9ef5u);
    c.r[5] = c.r[4];
    // 0e9ef7  push esi
    X86_AT(c, 0xe9ef7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e9ef8  push edi
    X86_AT(c, 0xe9ef8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9ef9  push ebx
    X86_AT(c, 0xe9ef9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e9efa  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xe9efau);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e9efd  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe9efdu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e9f00  xor edx, edx
    X86_AT(c, 0xe9f00u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0e9f02  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0xe9f02u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e9f06  shr ecx, 1
    X86_AT(c, 0xe9f06u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 0e9f08  clc 
    X86_AT(c, 0xe9f08u);
    c.fl &= ~X86_CF;
L_e9f09:
    X86_TICK(c, 24);
    // 0e9f09  mov eax, dword ptr [edi + edx*4]
    X86_AT(c, 0xe9f09u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 4)));
    // 0e9f0c  adc dword ptr [esi + edx*4], eax
    X86_AT(c, 0xe9f0cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], c.fl & 1, 4)); }
    // 0e9f0f  inc edx
    X86_AT(c, 0xe9f0fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e9f10  loop 0xe9f09
    X86_AT(c, 0xe9f10u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe9f09u); goto L_e9f09; }
    X86_TICK(c, 31);
    // 0e9f12  mov al, 0
    X86_AT(c, 0xe9f12u);
    s8(c, 0, 0x0u);
    // 0e9f14  rcl al, 1
    X86_AT(c, 0xe9f14u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0e9f16  pop ebx
    X86_AT(c, 0xe9f16u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e9f17  pop edi
    X86_AT(c, 0xe9f17u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9f18  pop esi
    X86_AT(c, 0xe9f18u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e9f19  pop ebp
    X86_AT(c, 0xe9f19u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0e9f1a  ret 0xc
    X86_AT(c, 0xe9f1au);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xe9ef4u, "ran off the end of a function");
}
void f_000e9f1d(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0e9f1d  push ebp
    X86_AT(c, 0xe9f1du);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9f1e  mov ebp, esp
    X86_AT(c, 0xe9f1eu);
    c.r[5] = c.r[4];
    // 0e9f20  push esi
    X86_AT(c, 0xe9f20u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e9f21  push edi
    X86_AT(c, 0xe9f21u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9f22  push ebx
    X86_AT(c, 0xe9f22u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e9f23  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xe9f23u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e9f26  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe9f26u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e9f29  xor edx, edx
    X86_AT(c, 0xe9f29u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0e9f2b  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0xe9f2bu);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e9f2f  clc 
    X86_AT(c, 0xe9f2fu);
    c.fl &= ~X86_CF;
L_e9f30:
    X86_TICK(c, 24);
    // 0e9f30  mov ax, word ptr [edi + edx*2]
    X86_AT(c, 0xe9f30u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 2))));
    // 0e9f34  sbb word ptr [esi + edx*2], ax
    X86_AT(c, 0xe9f34u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), c.fl & 1, 2)); }
    // 0e9f38  inc edx
    X86_AT(c, 0xe9f38u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e9f39  loop 0xe9f30
    X86_AT(c, 0xe9f39u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe9f30u); goto L_e9f30; }
    X86_TICK(c, 31);
    // 0e9f3b  mov al, 0
    X86_AT(c, 0xe9f3bu);
    s8(c, 0, 0x0u);
    // 0e9f3d  rcl al, 1
    X86_AT(c, 0xe9f3du);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0e9f3f  pop ebx
    X86_AT(c, 0xe9f3fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e9f40  pop edi
    X86_AT(c, 0xe9f40u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9f41  pop esi
    X86_AT(c, 0xe9f41u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e9f42  pop ebp
    X86_AT(c, 0xe9f42u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0e9f43  ret 0xc
    X86_AT(c, 0xe9f43u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xe9f1du, "ran off the end of a function");
}
void f_000e9f46(X86Cpu& c) {
    X86_TICK(c, 31);
    // 0e9f46  push ebp
    X86_AT(c, 0xe9f46u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e9f47  mov ebp, esp
    X86_AT(c, 0xe9f47u);
    c.r[5] = c.r[4];
    // 0e9f49  push esi
    X86_AT(c, 0xe9f49u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e9f4a  push edi
    X86_AT(c, 0xe9f4au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9f4b  push ebx
    X86_AT(c, 0xe9f4bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e9f4c  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xe9f4cu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e9f4f  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe9f4fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e9f52  xor edx, edx
    X86_AT(c, 0xe9f52u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0e9f54  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0xe9f54u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e9f58  shr ecx, 1
    X86_AT(c, 0xe9f58u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 0e9f5a  clc 
    X86_AT(c, 0xe9f5au);
    c.fl &= ~X86_CF;
L_e9f5b:
    X86_TICK(c, 25);
    // 0e9f5b  mov eax, dword ptr [edi + edx*4]
    X86_AT(c, 0xe9f5bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 4)));
    // 0e9f5e  sbb eax, dword ptr [esi + edx*4]
    X86_AT(c, 0xe9f5eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4))), c.fl & 1, 4); }
    // 0e9f61  mov dword ptr [esi + edx*4], eax
    X86_AT(c, 0xe9f61u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)), c.r[0]);
    // 0e9f64  inc edx
    X86_AT(c, 0xe9f64u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e9f65  loop 0xe9f5b
    X86_AT(c, 0xe9f65u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe9f5bu); goto L_e9f5b; }
    X86_TICK(c, 31);
    // 0e9f67  mov al, 0
    X86_AT(c, 0xe9f67u);
    s8(c, 0, 0x0u);
    // 0e9f69  rcl al, 1
    X86_AT(c, 0xe9f69u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0e9f6b  pop ebx
    X86_AT(c, 0xe9f6bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e9f6c  pop edi
    X86_AT(c, 0xe9f6cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9f6d  pop esi
    X86_AT(c, 0xe9f6du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e9f6e  pop ebp
    X86_AT(c, 0xe9f6eu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0e9f6f  ret 0xc
    X86_AT(c, 0xe9f6fu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xe9f46u, "ran off the end of a function");
}
void f_000e9f72(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0e9f72  push esi
    X86_AT(c, 0xe9f72u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e9f73  mov esi, dword ptr [esp + 8]
    X86_AT(c, 0xe9f73u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0e9f77  movzx ecx, word ptr [esp + 0xc]
    X86_AT(c, 0xe9f77u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0e9f7c  shr ecx, 1
    X86_AT(c, 0xe9f7cu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 0e9f7e  xor edx, edx
    X86_AT(c, 0xe9f7eu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0e9f80  clc 
    X86_AT(c, 0xe9f80u);
    c.fl &= ~X86_CF;
L_e9f81:
    X86_TICK(c, 23);
    // 0e9f81  mov eax, 0
    X86_AT(c, 0xe9f81u);
    c.r[0] = 0x0u;
    // 0e9f86  sbb eax, dword ptr [esi + edx*4]
    X86_AT(c, 0xe9f86u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4))), c.fl & 1, 4); }
    // 0e9f89  mov dword ptr [esi + edx*4], eax
    X86_AT(c, 0xe9f89u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)), c.r[0]);
    // 0e9f8c  inc edx
    X86_AT(c, 0xe9f8cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e9f8d  loop 0xe9f81
    X86_AT(c, 0xe9f8du);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0xe9f81u); goto L_e9f81; }
    X86_TICK(c, 19);
    // 0e9f8f  mov al, 0
    X86_AT(c, 0xe9f8fu);
    s8(c, 0, 0x0u);
    // 0e9f91  rcl al, 1
    X86_AT(c, 0xe9f91u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0e9f93  pop esi
    X86_AT(c, 0xe9f93u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e9f94  ret 8
    X86_AT(c, 0xe9f94u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe9f72u, "ran off the end of a function");
}
void f_000e9f97(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0e9f97  push edi
    X86_AT(c, 0xe9f97u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e9f98  push ebx
    X86_AT(c, 0xe9f98u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e9f99  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0xe9f99u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0e9f9d  xor eax, eax
    X86_AT(c, 0xe9f9du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0e9f9f  mov ebx, dword ptr [edi + 4]
    X86_AT(c, 0xe9f9fu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0e9fa2  mov edx, dword ptr [edi]
    X86_AT(c, 0xe9fa2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
L_e9fa4:
    X86_TICK(c, 7);
    // 0e9fa4  and ebx, ebx
    X86_AT(c, 0xe9fa4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0e9fa6  jne 0xe9fb3
    X86_AT(c, 0xe9fa6u);
    if (x86_cc(c, 5)) { goto L_e9fb3; }
    X86_TICK(c, 13);
    // 0e9fa8  mov ebx, edx
    X86_AT(c, 0xe9fa8u);
    c.r[3] = c.r[2];
    // 0e9faa  xor edx, edx
    X86_AT(c, 0xe9faau);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0e9fac  add eax, 0x20
    X86_AT(c, 0xe9facu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x20u, 0, 4); }
    // 0e9fb1  jmp 0xe9fa4
    X86_AT(c, 0xe9fb1u);
    X86_POLL(c, 0xe9fa4u); goto L_e9fa4;
L_e9fb3:
    X86_TICK(c, 44);
    // 0e9fb3  bsr ecx, ebx
    X86_AT(c, 0xe9fb3u);
    c.r[1] = x86_bsr(c, c.r[3], c.r[1]);
    // 0e9fb6  sub ecx, 0x1f
    X86_AT(c, 0xe9fb6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x1Fu, 0, 4); }
    // 0e9fb9  neg ecx
    X86_AT(c, 0xe9fb9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 0e9fbb  shld ebx, edx, cl
    X86_AT(c, 0xe9fbbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 0e9fbe  shl edx, cl
    X86_AT(c, 0xe9fbeu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 0e9fc0  add eax, ecx
    X86_AT(c, 0xe9fc0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 0e9fc2  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0xe9fc2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 0e9fc5  mov dword ptr [edi], edx
    X86_AT(c, 0xe9fc5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[2]);
    // 0e9fc7  pop ebx
    X86_AT(c, 0xe9fc7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e9fc8  pop edi
    X86_AT(c, 0xe9fc8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e9fc9  ret 4
    X86_AT(c, 0xe9fc9u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9f97u, "ran off the end of a function");
}
void f_000e9fcc(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0e9fcc  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0xe9fccu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e9fd0  shl dword ptr [edx], 1
    X86_AT(c, 0xe9fd0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0e9fd2  rcl dword ptr [edx + 4], 1
    X86_AT(c, 0xe9fd2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0e9fd5  mov al, 0
    X86_AT(c, 0xe9fd5u);
    s8(c, 0, 0x0u);
    // 0e9fd7  rcl al, 1
    X86_AT(c, 0xe9fd7u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0e9fd9  ret 4
    X86_AT(c, 0xe9fd9u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xe9fccu, "ran off the end of a function");
}
void f_000e9fe8(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e9fe8  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0xe9fe8u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0e9fec  movzx ecx, word ptr [esp + 8]
    X86_AT(c, 0xe9fecu);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0e9ff1  jecxz 0xea028
    X86_AT(c, 0xe9ff1u);
    if (c.r[1] == 0) { goto L_ea028; }
    X86_TICK(c, 7);
    // 0e9ff3  cmp ecx, 0x20
    X86_AT(c, 0xe9ff3u);
    (void)x86_sub(c, c.r[1], 0x20u, 0, 4);
    // 0e9ff6  jl 0xea00f
    X86_AT(c, 0xe9ff6u);
    if (x86_cc(c, 12)) { goto L_ea00f; }
    X86_TICK(c, 14);
    // 0e9ff8  mov eax, dword ptr [edx + 4]
    X86_AT(c, 0xe9ff8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)));
    // 0e9ffb  clc 
    X86_AT(c, 0xe9ffbu);
    c.fl &= ~X86_CF;
    // 0e9ffc  shr eax, cl
    X86_AT(c, 0xe9ffcu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0e9ffe  jae 0xea001
    X86_AT(c, 0xe9ffeu);
    if (x86_cc(c, 3)) { goto L_ea001; }
    X86_TICK(c, 2);
    // 0ea000  inc eax
    X86_AT(c, 0xea000u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_ea001:
    X86_TICK(c, 11);
    // 0ea001  mov dword ptr [edx], eax
    X86_AT(c, 0xea001u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 0ea003  mov dword ptr [edx + 4], 0
    X86_AT(c, 0xea003u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), 0x0u);
    // 0ea00a  jmp 0xea028
    X86_AT(c, 0xea00au);
    goto L_ea028;
L_ea00f:
    X86_TICK(c, 31);
    // 0ea00f  mov eax, dword ptr [edx + 4]
    X86_AT(c, 0xea00fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)));
    // 0ea012  shrd dword ptr [edx], eax, cl
    X86_AT(c, 0xea012u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) wr32(ea, r); }
    // 0ea015  pushf 
    X86_AT(c, 0xea015u);
    push16(c, c.fl & 0xFFFFu);
    // 0ea017  shr eax, cl
    X86_AT(c, 0xea017u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0ea019  popf 
    X86_AT(c, 0xea019u);
    x86_popfd(c, 2);
    // 0ea01b  jae 0xea025
    X86_AT(c, 0xea01bu);
    if (x86_cc(c, 3)) { goto L_ea025; }
    X86_TICK(c, 9);
    // 0ea01d  add dword ptr [edx], 1
    X86_AT(c, 0xea01du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x1u, 0, 4)); }
    // 0ea020  adc eax, 0
    X86_AT(c, 0xea020u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
L_ea025:
    X86_TICK(c, 2);
    // 0ea025  mov dword ptr [edx + 4], eax
    X86_AT(c, 0xea025u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[0]);
L_ea028:
    X86_TICK(c, 10);
    // 0ea028  ret 8
    X86_AT(c, 0xea028u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0xe9fe8u, "ran off the end of a function");
}
void f_000ea02b(X86Cpu& c) {
    X86_TICK(c, 42);
    // 0ea02b  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0xea02bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0ea02f  shl dword ptr [edx], 1
    X86_AT(c, 0xea02fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0ea031  rcl dword ptr [edx + 4], 1
    X86_AT(c, 0xea031u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0ea034  rcl dword ptr [edx + 8], 1
    X86_AT(c, 0xea034u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0ea037  rcl dword ptr [edx + 0xc], 1
    X86_AT(c, 0xea037u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCu)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 0ea03a  ret 4
    X86_AT(c, 0xea03au);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xea02bu, "ran off the end of a function");
}
void f_000ea040(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0ea040  push 0xffc0
    X86_AT(c, 0xea040u);
    { uint32_t v = 0xFFC0u; push32(c, v); }
    // 0ea045  call 0xeb0d0
    X86_AT(c, 0xea045u);
    push32(c, 0xea04au); x86_call_known(c, 0xeb0d0u, f_000eb0d0); X86_RET(c, 0xea04au);
    X86_TICK(c, 13);
    // 0ea04a  mov ax, word ptr [0xc45c8]
    X86_AT(c, 0xea04au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC45C8u))));
    // 0ea050  push eax
    X86_AT(c, 0xea050u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea051  call 0xeb0bc
    X86_AT(c, 0xea051u);
    push32(c, 0xea056u); x86_call_known(c, 0xeb0bcu, f_000eb0bc); X86_RET(c, 0xea056u);
    X86_TICK(c, 9);
    // 0ea056  push 1
    X86_AT(c, 0xea056u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0ea058  call 0xe9a78
    X86_AT(c, 0xea058u);
    push32(c, 0xea05du); x86_call_known(c, 0xe9a78u, f_000e9a78); X86_RET(c, 0xea05du);
    X86_TICK(c, 10);
    // 0ea05d  ret 
    X86_AT(c, 0xea05du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea040u, "ran off the end of a function");
}
void f_000ea060(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0ea060  mov eax, 0xc4270
    X86_AT(c, 0xea060u);
    c.r[0] = 0xC4270u;
    // 0ea065  cmp eax, dword ptr [0xc427c]
    X86_AT(c, 0xea065u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xC427Cu))), 0, 4);
    // 0ea06b  ja 0xea072
    X86_AT(c, 0xea06bu);
    if (x86_cc(c, 7)) { goto L_ea072; }
    X86_TICK(c, 7);
    // 0ea06d  call 0xea040
    X86_AT(c, 0xea06du);
    push32(c, 0xea072u); x86_call_known(c, 0xea040u, f_000ea040); X86_RET(c, 0xea072u);
L_ea072:
    X86_TICK(c, 17);
    // 0ea072  add dword ptr [0xc427c], 0xc
    X86_AT(c, 0xea072u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xCu, 0, 4)); }
    // 0ea079  ret 
    X86_AT(c, 0xea079u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea060u, "ran off the end of a function");
}
void f_000ea07c(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0ea07c  add dword ptr [0xc427c], 0xfffffff4
    X86_AT(c, 0xea07cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0ea083  ret 
    X86_AT(c, 0xea083u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea07cu, "ran off the end of a function");
}
void f_000ea084(X86Cpu& c) {
    X86_TICK(c, 41);
    // 0ea084  push ebp
    X86_AT(c, 0xea084u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ea085  mov ebp, esp
    X86_AT(c, 0xea085u);
    c.r[5] = c.r[4];
    // 0ea087  push esi
    X86_AT(c, 0xea087u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea088  push edi
    X86_AT(c, 0xea088u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea089  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xea089u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ea08c  mov ax, word ptr [edi]
    X86_AT(c, 0xea08cu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0ea08f  or ax, word ptr [edi + 2]
    X86_AT(c, 0xea08fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 2)); }
    // 0ea093  or ax, word ptr [edi + 4]
    X86_AT(c, 0xea093u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 2)); }
    // 0ea097  or ax, word ptr [edi + 6]
    X86_AT(c, 0xea097u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))), 2)); }
    // 0ea09b  and ax, ax
    X86_AT(c, 0xea09bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0ea09e  jne 0xea0af
    X86_AT(c, 0xea09eu);
    if (x86_cc(c, 5)) { goto L_ea0af; }
    X86_TICK(c, 15);
    // 0ea0a0  sub eax, eax
    X86_AT(c, 0xea0a0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ea0a2  mov word ptr [edi + 8], ax
    X86_AT(c, 0xea0a2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 0ea0a6  mov byte ptr [edi + 0xb], 1
    X86_AT(c, 0xea0a6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), 0x1u);
    // 0ea0aa  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0xea0aau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 0ea0ad  jmp 0xea104
    X86_AT(c, 0xea0adu);
    goto L_ea104;
L_ea0af:
    X86_TICK(c, 12);
    // 0ea0af  cmp word ptr [edi + 8], 0x7fff
    X86_AT(c, 0xea0afu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0x7FFFu, 0, 2);
    // 0ea0b5  jb 0xea0d3
    X86_AT(c, 0xea0b5u);
    if (x86_cc(c, 2)) { goto L_ea0d3; }
    X86_TICK(c, 25);
    // 0ea0b7  mov ax, word ptr [0xc42ac]
    X86_AT(c, 0xea0b7u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC42ACu))));
    // 0ea0bd  mov word ptr [edi + 8], ax
    X86_AT(c, 0xea0bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 0ea0c1  mov eax, dword ptr [0xc42a4]
    X86_AT(c, 0xea0c1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC42A4u)));
    // 0ea0c6  mov edx, dword ptr [0xc42a8]
    X86_AT(c, 0xea0c6u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0xC42A8u)));
    // 0ea0cc  mov dword ptr [edi], eax
    X86_AT(c, 0xea0ccu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0ea0ce  mov dword ptr [edi + 4], edx
    X86_AT(c, 0xea0ceu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[2]);
    // 0ea0d1  jmp 0xea104
    X86_AT(c, 0xea0d1u);
    goto L_ea104;
L_ea0d3:
    X86_TICK(c, 12);
    // 0ea0d3  cmp byte ptr [edi + 7], 0x80
    X86_AT(c, 0xea0d3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x7u))), 0x80u, 0, 1);
    // 0ea0d7  jae 0xea104
    X86_AT(c, 0xea0d7u);
    if (x86_cc(c, 3)) { goto L_ea104; }
    X86_TICK(c, 9);
    // 0ea0d9  push edi
    X86_AT(c, 0xea0d9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea0da  call 0xe9f97
    X86_AT(c, 0xea0dau);
    push32(c, 0xea0dfu); x86_call_known(c, 0xe9f97u, f_000e9f97); X86_RET(c, 0xea0dfu);
    X86_TICK(c, 19);
    // 0ea0df  xchg esi, eax
    X86_AT(c, 0xea0dfu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0ea0e0  movsx eax, si
    X86_AT(c, 0xea0e0u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[6] & 0xFFFFu);
    // 0ea0e3  movzx edx, word ptr [edi + 8]
    X86_AT(c, 0xea0e3u);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 0ea0e7  cmp edx, eax
    X86_AT(c, 0xea0e7u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0ea0e9  jl 0xea0f1
    X86_AT(c, 0xea0e9u);
    if (x86_cc(c, 12)) { goto L_ea0f1; }
    X86_TICK(c, 14);
    // 0ea0eb  sub word ptr [edi + 8], si
    X86_AT(c, 0xea0ebu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 0ea0ef  jmp 0xea104
    X86_AT(c, 0xea0efu);
    goto L_ea104;
L_ea0f1:
    X86_TICK(c, 19);
    // 0ea0f1  mov eax, esi
    X86_AT(c, 0xea0f1u);
    c.r[0] = c.r[6];
    // 0ea0f3  sub ax, word ptr [edi + 8]
    X86_AT(c, 0xea0f3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0, 2)); }
    // 0ea0f7  push eax
    X86_AT(c, 0xea0f7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea0f8  push edi
    X86_AT(c, 0xea0f8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea0f9  call 0xe9fe8
    X86_AT(c, 0xea0f9u);
    push32(c, 0xea0feu); x86_call_known(c, 0xe9fe8u, f_000e9fe8); X86_RET(c, 0xea0feu);
    X86_TICK(c, 2);
    // 0ea0fe  mov word ptr [edi + 8], 0
    X86_AT(c, 0xea0feu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), 0x0u);
L_ea104:
    X86_TICK(c, 24);
    // 0ea104  pop edi
    X86_AT(c, 0xea104u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ea105  pop esi
    X86_AT(c, 0xea105u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ea106  leave 
    X86_AT(c, 0xea106u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ea107  ret 4
    X86_AT(c, 0xea107u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xea084u, "ran off the end of a function");
}
void f_000ea10c(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0ea10c  push ebp
    X86_AT(c, 0xea10cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ea10d  mov ebp, esp
    X86_AT(c, 0xea10du);
    c.r[5] = c.r[4];
    // 0ea10f  push esi
    X86_AT(c, 0xea10fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea110  push edi
    X86_AT(c, 0xea110u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea111  call 0xea060
    X86_AT(c, 0xea111u);
    push32(c, 0xea116u); x86_call_known(c, 0xea060u, f_000ea060); X86_RET(c, 0xea116u);
    X86_TICK(c, 41);
    // 0ea116  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0xea116u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ea119  mov edi, dword ptr [0xc427c]
    X86_AT(c, 0xea119u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0ea11f  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xea11fu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0ea120  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xea120u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0ea121  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xea121u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0ea123  cmp byte ptr [0xc41b3], 0
    X86_AT(c, 0xea123u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x0u, 0, 1);
    // 0ea12a  jne 0xea164
    X86_AT(c, 0xea12au);
    if (x86_cc(c, 5)) { goto L_ea164; }
    X86_TICK(c, 24);
    // 0ea12c  mov edi, dword ptr [0xc427c]
    X86_AT(c, 0xea12cu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0ea132  test byte ptr [edi + 9], 0x80
    X86_AT(c, 0xea132u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))) & 0x80u, 1);
    // 0ea136  setne al
    X86_AT(c, 0xea136u);
    s8(c, 0, x86_cc(c, 5) ? 1u : 0u);
    // 0ea139  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0xea139u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 0ea13c  and al, al
    X86_AT(c, 0xea13cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ea13e  je 0xea144
    X86_AT(c, 0xea13eu);
    if (x86_cc(c, 4)) { goto L_ea144; }
    X86_TICK(c, 7);
    // 0ea140  and byte ptr [edi + 9], 0x7f
    X86_AT(c, 0xea140u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
L_ea144:
    X86_TICK(c, 37);
    // 0ea144  mov ax, word ptr [edi]
    X86_AT(c, 0xea144u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0ea147  or ax, word ptr [edi + 2]
    X86_AT(c, 0xea147u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 2)); }
    // 0ea14b  or ax, word ptr [edi + 4]
    X86_AT(c, 0xea14bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 2)); }
    // 0ea14f  or ax, word ptr [edi + 6]
    X86_AT(c, 0xea14fu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))), 2)); }
    // 0ea153  and ax, ax
    X86_AT(c, 0xea153u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0ea156  sete al
    X86_AT(c, 0xea156u);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 0ea159  mov byte ptr [edi + 0xb], al
    X86_AT(c, 0xea159u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), g8(c, 0));
    // 0ea15c  and al, al
    X86_AT(c, 0xea15cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ea15e  je 0xea164
    X86_AT(c, 0xea15eu);
    if (x86_cc(c, 4)) { goto L_ea164; }
    X86_TICK(c, 2);
    // 0ea160  mov byte ptr [edi + 0xa], 0
    X86_AT(c, 0xea160u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), 0x0u);
L_ea164:
    X86_TICK(c, 24);
    // 0ea164  pop edi
    X86_AT(c, 0xea164u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ea165  pop esi
    X86_AT(c, 0xea165u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ea166  leave 
    X86_AT(c, 0xea166u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ea167  ret 4
    X86_AT(c, 0xea167u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xea10cu, "ran off the end of a function");
}
void f_000ea16c(X86Cpu& c) {
    X86_TICK(c, 49);
    // 0ea16c  push ebp
    X86_AT(c, 0xea16cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ea16d  mov ebp, esp
    X86_AT(c, 0xea16du);
    c.r[5] = c.r[4];
    // 0ea16f  push esi
    X86_AT(c, 0xea16fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea170  push edi
    X86_AT(c, 0xea170u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea171  mov esi, dword ptr [0xc427c]
    X86_AT(c, 0xea171u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0ea177  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xea177u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ea17a  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xea17au);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0ea17b  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xea17bu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0ea17c  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xea17cu);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0ea17e  cmp byte ptr [0xc41b3], 0
    X86_AT(c, 0xea17eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x0u, 0, 1);
    // 0ea185  jne 0xea19f
    X86_AT(c, 0xea185u);
    if (x86_cc(c, 5)) { goto L_ea19f; }
    X86_TICK(c, 16);
    // 0ea187  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xea187u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0ea18c  cmp byte ptr [eax + 0xa], 0
    X86_AT(c, 0xea18cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))), 0x0u, 0, 1);
    // 0ea190  je 0xea19f
    X86_AT(c, 0xea190u);
    if (x86_cc(c, 4)) { goto L_ea19f; }
    X86_TICK(c, 12);
    // 0ea192  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0xea192u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 0ea196  jne 0xea19f
    X86_AT(c, 0xea196u);
    if (x86_cc(c, 5)) { goto L_ea19f; }
    X86_TICK(c, 11);
    // 0ea198  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0xea198u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ea19b  or byte ptr [eax + 9], 0x80
    X86_AT(c, 0xea19bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_ea19f:
    X86_TICK(c, 31);
    // 0ea19f  add dword ptr [0xc427c], 0xfffffff4
    X86_AT(c, 0xea19fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0ea1a6  pop edi
    X86_AT(c, 0xea1a6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ea1a7  pop esi
    X86_AT(c, 0xea1a7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ea1a8  leave 
    X86_AT(c, 0xea1a8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ea1a9  ret 4
    X86_AT(c, 0xea1a9u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xea16cu, "ran off the end of a function");
}
void f_000ea1ac(X86Cpu& c) {
    X86_TICK(c, 83);
    // 0ea1ac  enter 0xc, 0
    X86_AT(c, 0xea1acu);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 0ea1b0  push esi
    X86_AT(c, 0xea1b0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea1b1  push edi
    X86_AT(c, 0xea1b1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea1b2  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xea1b2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0ea1b7  lea esi, [eax - 0xc]
    X86_AT(c, 0xea1b7u);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 0ea1ba  lea edi, [ebp - 0xc]
    X86_AT(c, 0xea1bau);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ea1bd  mov ecx, 3
    X86_AT(c, 0xea1bdu);
    c.r[1] = 0x3u;
    // 0ea1c2  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xea1c2u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0ea1c4  xchg esi, eax
    X86_AT(c, 0xea1c4u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0ea1c5  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xea1c5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0ea1ca  lea edi, [eax - 0xc]
    X86_AT(c, 0xea1cau);
    c.r[7] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 0ea1cd  mov ecx, 3
    X86_AT(c, 0xea1cdu);
    c.r[1] = 0x3u;
    // 0ea1d2  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xea1d2u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0ea1d4  lea esi, [ebp - 0xc]
    X86_AT(c, 0xea1d4u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ea1d7  xchg edi, eax
    X86_AT(c, 0xea1d7u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 0ea1d8  mov ecx, 3
    X86_AT(c, 0xea1d8u);
    c.r[1] = 0x3u;
    // 0ea1dd  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xea1ddu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0ea1df  pop edi
    X86_AT(c, 0xea1dfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ea1e0  pop esi
    X86_AT(c, 0xea1e0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ea1e1  leave 
    X86_AT(c, 0xea1e1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ea1e2  ret 
    X86_AT(c, 0xea1e2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea1acu, "ran off the end of a function");
}
void f_000ea1e4(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0ea1e4  cmp byte ptr [0xc41b3], 0
    X86_AT(c, 0xea1e4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x0u, 0, 1);
    // 0ea1eb  je 0xea1f8
    X86_AT(c, 0xea1ebu);
    if (x86_cc(c, 4)) { goto L_ea1f8; }
    X86_TICK(c, 18);
    // 0ea1ed  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xea1edu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0ea1f2  xor byte ptr [eax + 9], 0x80
    X86_AT(c, 0xea1f2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x80u, 1)); }
    // 0ea1f6  jmp 0xea207
    X86_AT(c, 0xea1f6u);
    goto L_ea207;
L_ea1f8:
    X86_TICK(c, 16);
    // 0ea1f8  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xea1f8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0ea1fd  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0xea1fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 0ea201  jne 0xea207
    X86_AT(c, 0xea201u);
    if (x86_cc(c, 5)) { goto L_ea207; }
    X86_TICK(c, 7);
    // 0ea203  xor byte ptr [eax + 0xa], 1
    X86_AT(c, 0xea203u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
L_ea207:
    X86_TICK(c, 10);
    // 0ea207  ret 
    X86_AT(c, 0xea207u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea1e4u, "ran off the end of a function");
}
void f_000ea214(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0ea214  cmp byte ptr [0xc41b3], 0
    X86_AT(c, 0xea214u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x0u, 0, 1);
    // 0ea21b  je 0xea228
    X86_AT(c, 0xea21bu);
    if (x86_cc(c, 4)) { goto L_ea228; }
    X86_TICK(c, 18);
    // 0ea21d  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xea21du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0ea222  xor byte ptr [eax + 9], 0x80
    X86_AT(c, 0xea222u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x80u, 1)); }
    // 0ea226  jmp 0xea237
    X86_AT(c, 0xea226u);
    goto L_ea237;
L_ea228:
    X86_TICK(c, 16);
    // 0ea228  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xea228u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0ea22d  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0xea22du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 0ea231  jne 0xea237
    X86_AT(c, 0xea231u);
    if (x86_cc(c, 5)) { goto L_ea237; }
    X86_TICK(c, 7);
    // 0ea233  xor byte ptr [eax + 0xa], 1
    X86_AT(c, 0xea233u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
L_ea237:
    X86_TICK(c, 7);
    // 0ea237  call 0xe7fc4
    X86_AT(c, 0xea237u);
    push32(c, 0xea23cu); x86_call_known(c, 0xe7fc4u, f_000e7fc4); X86_RET(c, 0xea23cu);
    X86_TICK(c, 10);
    // 0ea23c  ret 
    X86_AT(c, 0xea23cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea214u, "ran off the end of a function");
}
void f_000ea27c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0ea27c  enter 0x10, 0
    X86_AT(c, 0xea27cu);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 0ea280  push ebx
    X86_AT(c, 0xea280u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ea281  push esi
    X86_AT(c, 0xea281u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea282  push edi
    X86_AT(c, 0xea282u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea283  cmp byte ptr [0xc41b3], 0
    X86_AT(c, 0xea283u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0xC41B3u))), 0x0u, 0, 1);
    // 0ea28a  je 0xea2a5
    X86_AT(c, 0xea28au);
    if (x86_cc(c, 4)) { goto L_ea2a5; }
    X86_TICK(c, 20);
    // 0ea28c  push dword ptr [0xc427c]
    X86_AT(c, 0xea28cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC427Cu))); push32(c, v); }
    // 0ea292  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xea292u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0ea297  sub eax, 0xc
    X86_AT(c, 0xea297u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0ea29a  push eax
    X86_AT(c, 0xea29au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea29b  call 0xe9d0b
    X86_AT(c, 0xea29bu);
    push32(c, 0xea2a0u); x86_call_known(c, 0xe9d0bu, f_000e9d0b); X86_RET(c, 0xea2a0u);
    X86_TICK(c, 7);
    // 0ea2a0  jmp 0xea312
    X86_AT(c, 0xea2a0u);
    goto L_ea312;
L_ea2a5:
    X86_TICK(c, 16);
    // 0ea2a5  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xea2a5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0ea2aa  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0xea2aau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 0ea2ae  je 0xea2b6
    X86_AT(c, 0xea2aeu);
    if (x86_cc(c, 4)) { goto L_ea2b6; }
    X86_TICK(c, 12);
    // 0ea2b0  cmp byte ptr [eax - 1], 0
    X86_AT(c, 0xea2b0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0ea2b4  jne 0xea2ce
    X86_AT(c, 0xea2b4u);
    if (x86_cc(c, 5)) { goto L_ea2ce; }
L_ea2b6:
    X86_TICK(c, 24);
    // 0ea2b6  mov esi, dword ptr [0xc427c]
    X86_AT(c, 0xea2b6u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0ea2bc  mov edi, dword ptr [0xc427c]
    X86_AT(c, 0xea2bcu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0ea2c2  sub edi, 0xc
    X86_AT(c, 0xea2c2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0ea2c5  mov ecx, 0xc
    X86_AT(c, 0xea2c5u);
    c.r[1] = 0xCu;
    // 0ea2ca  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0xea2cau);
    x86_string(c, 1, 1, 243, 4, 3);
    // 0ea2cc  jne 0xea2d2
    X86_AT(c, 0xea2ccu);
    if (x86_cc(c, 5)) { goto L_ea2d2; }
L_ea2ce:
    X86_TICK(c, 9);
    // 0ea2ce  sub eax, eax
    X86_AT(c, 0xea2ceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0ea2d0  jmp 0xea312
    X86_AT(c, 0xea2d0u);
    goto L_ea312;
L_ea2d2:
    X86_TICK(c, 21);
    // 0ea2d2  mov eax, dword ptr [0xc427c]
    X86_AT(c, 0xea2d2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC427Cu)));
    // 0ea2d7  mov dl, byte ptr [eax + 0xa]
    X86_AT(c, 0xea2d7u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))));
    // 0ea2da  mov byte ptr [ebp - 0xd], dl
    X86_AT(c, 0xea2dau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 2));
    // 0ea2dd  mov bl, byte ptr [eax - 2]
    X86_AT(c, 0xea2ddu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu))));
    // 0ea2e0  cmp dl, bl
    X86_AT(c, 0xea2e0u);
    (void)x86_sub(c, g8(c, 2), g8(c, 3), 0, 1);
    // 0ea2e2  jne 0xea305
    X86_AT(c, 0xea2e2u);
    if (x86_cc(c, 5)) { goto L_ea305; }
    X86_TICK(c, 28);
    // 0ea2e4  lea esi, [eax - 0xc]
    X86_AT(c, 0xea2e4u);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 0ea2e7  lea edi, [ebp - 0xc]
    X86_AT(c, 0xea2e7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ea2ea  mov ecx, 3
    X86_AT(c, 0xea2eau);
    c.r[1] = 0x3u;
    // 0ea2ef  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xea2efu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0ea2f1  push 5
    X86_AT(c, 0xea2f1u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0ea2f3  push eax
    X86_AT(c, 0xea2f3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea2f4  lea eax, [ebp - 0xc]
    X86_AT(c, 0xea2f4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0ea2f7  push eax
    X86_AT(c, 0xea2f7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea2f8  call 0xe9f1d
    X86_AT(c, 0xea2f8u);
    push32(c, 0xea2fdu); x86_call_known(c, 0xe9f1du, f_000e9f1d); X86_RET(c, 0xea2fdu);
    X86_TICK(c, 14);
    // 0ea2fd  cmp al, bl
    X86_AT(c, 0xea2fdu);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0ea2ff  setne byte ptr [ebp - 0xe]
    X86_AT(c, 0xea2ffu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), x86_cc(c, 5) ? 1u : 0u);
    // 0ea303  jmp 0xea308
    X86_AT(c, 0xea303u);
    goto L_ea308;
L_ea305:
    X86_TICK(c, 2);
    // 0ea305  mov byte ptr [ebp - 0xe], bl
    X86_AT(c, 0xea305u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), g8(c, 3));
L_ea308:
    X86_TICK(c, 12);
    // 0ea308  mov al, byte ptr [ebp - 0xe]
    X86_AT(c, 0xea308u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 0ea30b  add eax, eax
    X86_AT(c, 0xea30bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 0ea30d  sub ah, ah
    X86_AT(c, 0xea30du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 0ea30f  neg eax
    X86_AT(c, 0xea30fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0ea311  inc eax
    X86_AT(c, 0xea311u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_ea312:
    X86_TICK(c, 28);
    // 0ea312  pop edi
    X86_AT(c, 0xea312u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ea313  pop esi
    X86_AT(c, 0xea313u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ea314  pop ebx
    X86_AT(c, 0xea314u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ea315  leave 
    X86_AT(c, 0xea315u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ea316  ret 
    X86_AT(c, 0xea316u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea27cu, "ran off the end of a function");
}
void f_000ea318(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0ea318  enter 4, 0
    X86_AT(c, 0xea318u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0ea31c  call 0xea27c
    X86_AT(c, 0xea31cu);
    push32(c, 0xea321u); x86_call_known(c, 0xea27cu, f_000ea27c); X86_RET(c, 0xea321u);
    X86_TICK(c, 25);
    // 0ea321  mov word ptr [ebp - 2], ax
    X86_AT(c, 0xea321u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 0ea325  add dword ptr [0xc427c], 0xffffffe8
    X86_AT(c, 0xea325u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC427Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFE8u, 0, 4)); }
    // 0ea32c  leave 
    X86_AT(c, 0xea32cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ea32d  ret 
    X86_AT(c, 0xea32du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea318u, "ran off the end of a function");
}
void f_000ea330(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0ea330  enter 4, 0
    X86_AT(c, 0xea330u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0ea334  push esi
    X86_AT(c, 0xea334u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea335  push edi
    X86_AT(c, 0xea335u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea336  mov si, 1
    X86_AT(c, 0xea336u);
    s16(c, 6, 0x1u);
    // 0ea33a  call 0xea318
    X86_AT(c, 0xea33au);
    push32(c, 0xea33fu); x86_call_known(c, 0xea318u, f_000ea318); X86_RET(c, 0xea33fu);
    X86_TICK(c, 9);
    // 0ea33f  lea edi, [esi + eax*1]
    X86_AT(c, 0xea33fu);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 0ea342  cmp di, si
    X86_AT(c, 0xea342u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 0ea345  jle 0xea34b
    X86_AT(c, 0xea345u);
    if (x86_cc(c, 14)) { goto L_ea34b; }
    X86_TICK(c, 2);
    // 0ea347  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0xea347u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
L_ea34b:
    X86_TICK(c, 24);
    // 0ea34b  pop edi
    X86_AT(c, 0xea34bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ea34c  pop esi
    X86_AT(c, 0xea34cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ea34d  leave 
    X86_AT(c, 0xea34du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ea34e  ret 
    X86_AT(c, 0xea34eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea330u, "ran off the end of a function");
}
void f_000ea36c(X86Cpu& c) {
    X86_TICK(c, 48);
    // 0ea36c  push ebp
    X86_AT(c, 0xea36cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ea36d  mov ebp, esp
    X86_AT(c, 0xea36du);
    c.r[5] = c.r[4];
    // 0ea36f  push ecx
    X86_AT(c, 0xea36fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0ea370  sub esp, 0x28
    X86_AT(c, 0xea370u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x28u, 0, 4); }
    // 0ea373  push ebx
    X86_AT(c, 0xea373u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ea374  push esi
    X86_AT(c, 0xea374u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea375  push edi
    X86_AT(c, 0xea375u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea376  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea376u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea379  movzx edx, byte ptr [eax - 0x21]
    X86_AT(c, 0xea379u);
    c.r[2] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFDFu)));
    // 0ea37d  mov ecx, dword ptr [eax + 0x20]
    X86_AT(c, 0xea37du);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u)));
    // 0ea380  sub ecx, edx
    X86_AT(c, 0xea380u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ea382  mov dword ptr [ebp - 0x20], ecx
    X86_AT(c, 0xea382u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)), c.r[1]);
    // 0ea385  push dword ptr [ebp - 0x20]
    X86_AT(c, 0xea385u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))); push32(c, v); }
    // 0ea388  lea ecx, [ebp - 0x10]
    X86_AT(c, 0xea388u);
    c.r[1] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0ea38b  push ecx
    X86_AT(c, 0xea38bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0ea38c  call 0xeb218
    X86_AT(c, 0xea38cu);
    push32(c, 0xea391u); x86_call_known(c, 0xeb218u, f_000eb218); X86_RET(c, 0xea391u);
    X86_TICK(c, 15);
    // 0ea391  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea391u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea394  lea edx, [eax + 0xc]
    X86_AT(c, 0xea394u);
    c.r[2] = (uint32_t)(c.r[0] + 0xCu);
    // 0ea397  push edx
    X86_AT(c, 0xea397u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ea398  call 0xea10c
    X86_AT(c, 0xea398u);
    push32(c, 0xea39du); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea39du);
    X86_TICK(c, 11);
    // 0ea39d  lea eax, [ebp - 0x10]
    X86_AT(c, 0xea39du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0ea3a0  push eax
    X86_AT(c, 0xea3a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea3a1  call 0xea10c
    X86_AT(c, 0xea3a1u);
    push32(c, 0xea3a6u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea3a6u);
    X86_TICK(c, 7);
    // 0ea3a6  call 0xeb3e8
    X86_AT(c, 0xea3a6u);
    push32(c, 0xea3abu); x86_call_known(c, 0xeb3e8u, f_000eb3e8); X86_RET(c, 0xea3abu);
    X86_TICK(c, 11);
    // 0ea3ab  lea eax, [ebp - 0x10]
    X86_AT(c, 0xea3abu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0ea3ae  push eax
    X86_AT(c, 0xea3aeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea3af  call 0xea16c
    X86_AT(c, 0xea3afu);
    push32(c, 0xea3b4u); x86_call_known(c, 0xea16cu, f_000ea16c); X86_RET(c, 0xea3b4u);
    X86_TICK(c, 15);
    // 0ea3b4  lea eax, [ebp - 0x10]
    X86_AT(c, 0xea3b4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0ea3b7  push eax
    X86_AT(c, 0xea3b7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea3b8  lea eax, [ebp - 0x2c]
    X86_AT(c, 0xea3b8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0ea3bb  push eax
    X86_AT(c, 0xea3bbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea3bc  call 0xeb37c
    X86_AT(c, 0xea3bcu);
    push32(c, 0xea3c1u); x86_call_known(c, 0xeb37cu, f_000eb37c); X86_RET(c, 0xea3c1u);
    X86_TICK(c, 47);
    // 0ea3c1  push esi
    X86_AT(c, 0xea3c1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea3c2  lea esi, [ebp - 0x2c]
    X86_AT(c, 0xea3c2u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0ea3c5  push edi
    X86_AT(c, 0xea3c5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea3c6  lea edi, [ebp - 0x1a]
    X86_AT(c, 0xea3c6u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFE6u);
    // 0ea3c9  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xea3c9u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0ea3ca  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xea3cau);
    x86_string(c, 0, 4, 0, 4, 3);
    // 0ea3cb  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0xea3cbu);
    x86_string(c, 0, 2, 0, 4, 3);
    // 0ea3cd  pop edi
    X86_AT(c, 0xea3cdu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ea3ce  pop esi
    X86_AT(c, 0xea3ceu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ea3cf  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea3cfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea3d2  mov dword ptr [eax - 0x20], 0x13
    X86_AT(c, 0xea3d2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)), 0x13u);
    // 0ea3d9  mov edi, 1
    X86_AT(c, 0xea3d9u);
    c.r[7] = 0x1u;
    // 0ea3de  mov esi, edi
    X86_AT(c, 0xea3deu);
    c.r[6] = c.r[7];
L_ea3e0:
    X86_TICK(c, 14);
    // 0ea3e0  mov bl, byte ptr [ebp + edi*1 - 0x1b]
    X86_AT(c, 0xea3e0u);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[7] + 0xFFFFFFE5u))));
    // 0ea3e4  mov eax, esi
    X86_AT(c, 0xea3e4u);
    c.r[0] = c.r[6];
    // 0ea3e6  rcr eax, 1
    X86_AT(c, 0xea3e6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0ea3e8  jae 0xea3f2
    X86_AT(c, 0xea3e8u);
    if (x86_cc(c, 3)) { goto L_ea3f2; }
    X86_TICK(c, 13);
    // 0ea3ea  sub bh, bh
    X86_AT(c, 0xea3eau);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, g8(c, 7), 0, 1)); }
    // 0ea3ec  mov eax, ebx
    X86_AT(c, 0xea3ecu);
    c.r[0] = c.r[3];
    // 0ea3ee  and al, 0xf
    X86_AT(c, 0xea3eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFu, 1)); }
    // 0ea3f0  jmp 0xea3f7
    X86_AT(c, 0xea3f0u);
    goto L_ea3f7;
L_ea3f2:
    X86_TICK(c, 5);
    // 0ea3f2  mov eax, ebx
    X86_AT(c, 0xea3f2u);
    c.r[0] = c.r[3];
    // 0ea3f4  shr al, 4
    X86_AT(c, 0xea3f4u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
L_ea3f7:
    X86_TICK(c, 34);
    // 0ea3f7  mov byte ptr [ebp - 0x21], al
    X86_AT(c, 0xea3f7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), g8(c, 0));
    // 0ea3fa  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea3fau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea3fd  dec dword ptr [eax - 0x20]
    X86_AT(c, 0xea3fdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
    // 0ea400  mov dl, byte ptr [ebp - 0x21]
    X86_AT(c, 0xea400u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu))));
    // 0ea403  add dl, 0x30
    X86_AT(c, 0xea403u);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x30u, 0, 1)); }
    // 0ea406  mov ecx, dword ptr [eax - 0x20]
    X86_AT(c, 0xea406u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)));
    // 0ea409  mov byte ptr [eax + ecx*1 - 0x1c], dl
    X86_AT(c, 0xea409u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[1] + 0xFFFFFFE4u)), g8(c, 2));
    // 0ea40d  mov eax, esi
    X86_AT(c, 0xea40du);
    c.r[0] = c.r[6];
    // 0ea40f  rcr eax, 1
    X86_AT(c, 0xea40fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0ea411  jb 0xea414
    X86_AT(c, 0xea411u);
    if (x86_cc(c, 2)) { goto L_ea414; }
    X86_TICK(c, 2);
    // 0ea413  inc edi
    X86_AT(c, 0xea413u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_ea414:
    X86_TICK(c, 7);
    // 0ea414  cmp esi, 0x12
    X86_AT(c, 0xea414u);
    (void)x86_sub(c, c.r[6], 0x12u, 0, 4);
    // 0ea417  jge 0xea422
    X86_AT(c, 0xea417u);
    if (x86_cc(c, 13)) { goto L_ea422; }
    X86_TICK(c, 9);
    // 0ea419  inc esi
    X86_AT(c, 0xea419u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0ea41a  jmp 0xea3e0
    X86_AT(c, 0xea41au);
    X86_POLL(c, 0xea3e0u); goto L_ea3e0;
L_ea41c:
    X86_TICK(c, 10);
    // 0ea41c  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea41cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea41f  inc dword ptr [eax - 0x20]
    X86_AT(c, 0xea41fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_ea422:
    X86_TICK(c, 20);
    // 0ea422  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea422u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea425  mov edx, dword ptr [eax - 0x20]
    X86_AT(c, 0xea425u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFE0u)));
    // 0ea428  cmp byte ptr [eax + edx*1 - 0x1c], 0x30
    X86_AT(c, 0xea428u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[2] + 0xFFFFFFE4u))), 0x30u, 0, 1);
    // 0ea42d  je 0xea41c
    X86_AT(c, 0xea42du);
    if (x86_cc(c, 4)) { X86_POLL(c, 0xea41cu); goto L_ea41c; }
    X86_TICK(c, 17);
    // 0ea42f  mov ecx, 0x12
    X86_AT(c, 0xea42fu);
    c.r[1] = 0x12u;
    // 0ea434  sub ecx, dword ptr [ebp - 0x20]
    X86_AT(c, 0xea434u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0, 4); }
    // 0ea437  inc ecx
    X86_AT(c, 0xea437u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0ea438  cmp edx, ecx
    X86_AT(c, 0xea438u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 0ea43a  jge 0xea43f
    X86_AT(c, 0xea43au);
    if (x86_cc(c, 13)) { goto L_ea43f; }
    X86_TICK(c, 6);
    // 0ea43c  inc dword ptr [eax - 4]
    X86_AT(c, 0xea43cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_ea43f:
    X86_TICK(c, 28);
    // 0ea43f  pop edi
    X86_AT(c, 0xea43fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ea440  pop esi
    X86_AT(c, 0xea440u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ea441  pop ebx
    X86_AT(c, 0xea441u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ea442  leave 
    X86_AT(c, 0xea442u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ea443  ret 
    X86_AT(c, 0xea443u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xea36cu, "ran off the end of a function");
}
void f_000ea44c(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0ea44c  push ebp
    X86_AT(c, 0xea44cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0ea44d  mov ebp, esp
    X86_AT(c, 0xea44du);
    c.r[5] = c.r[4];
    // 0ea44f  push ecx
    X86_AT(c, 0xea44fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0ea450  sub esp, 0xc
    X86_AT(c, 0xea450u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0ea453  push ebx
    X86_AT(c, 0xea453u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ea454  push esi
    X86_AT(c, 0xea454u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea455  push edi
    X86_AT(c, 0xea455u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea456  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xea456u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ea459  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea459u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea45c  cmp edi, dword ptr [eax + 0x20]
    X86_AT(c, 0xea45cu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x20u))), 0, 4);
    // 0ea45f  jge 0xea505
    X86_AT(c, 0xea45fu);
    if (x86_cc(c, 13)) { goto L_ea505; }
    X86_TICK(c, 17);
    // 0ea465  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea465u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea468  add eax, 0xc
    X86_AT(c, 0xea468u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xCu, 0, 4); }
    // 0ea46b  push eax
    X86_AT(c, 0xea46bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea46c  mov ebx, eax
    X86_AT(c, 0xea46cu);
    c.r[3] = c.r[0];
    // 0ea46e  call 0xea10c
    X86_AT(c, 0xea46eu);
    push32(c, 0xea473u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea473u);
    X86_TICK(c, 12);
    // 0ea473  push dword ptr [0xffe8]
    X86_AT(c, 0xea473u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xFFE8u))); push32(c, v); }
    // 0ea479  call 0xeb3ac
    X86_AT(c, 0xea479u);
    push32(c, 0xea47eu); x86_call_known(c, 0xeb3acu, f_000eb3ac); X86_RET(c, 0xea47eu);
    X86_TICK(c, 7);
    // 0ea47e  call 0xea330
    X86_AT(c, 0xea47eu);
    push32(c, 0xea483u); x86_call_known(c, 0xea330u, f_000ea330); X86_RET(c, 0xea483u);
    X86_TICK(c, 5);
    // 0ea483  je 0xea505
    X86_AT(c, 0xea483u);
    if (x86_cc(c, 4)) { goto L_ea505; }
    X86_TICK(c, 15);
    // 0ea489  mov eax, edi
    X86_AT(c, 0xea489u);
    c.r[0] = c.r[7];
    // 0ea48b  push eax
    X86_AT(c, 0xea48bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea48c  lea ebx, [ebp - 0x10]
    X86_AT(c, 0xea48cu);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0ea48f  push ebx
    X86_AT(c, 0xea48fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ea490  call 0xeb218
    X86_AT(c, 0xea490u);
    push32(c, 0xea495u); x86_call_known(c, 0xeb218u, f_000eb218); X86_RET(c, 0xea495u);
    X86_TICK(c, 9);
    // 0ea495  push ebx
    X86_AT(c, 0xea495u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ea496  call 0xea10c
    X86_AT(c, 0xea496u);
    push32(c, 0xea49bu); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea49bu);
    X86_TICK(c, 12);
    // 0ea49b  push dword ptr [0xffec]
    X86_AT(c, 0xea49bu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xFFECu))); push32(c, v); }
    // 0ea4a1  call 0xeb3ac
    X86_AT(c, 0xea4a1u);
    push32(c, 0xea4a6u); x86_call_known(c, 0xeb3acu, f_000eb3ac); X86_RET(c, 0xea4a6u);
    X86_TICK(c, 7);
    // 0ea4a6  call 0xeb50c
    X86_AT(c, 0xea4a6u);
    push32(c, 0xea4abu); x86_call_known(c, 0xeb50cu, f_000eb50c); X86_RET(c, 0xea4abu);
    X86_TICK(c, 19);
    // 0ea4ab  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea4abu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea4ae  lea edx, [eax + 0xc]
    X86_AT(c, 0xea4aeu);
    c.r[2] = (uint32_t)(c.r[0] + 0xCu);
    // 0ea4b1  push edx
    X86_AT(c, 0xea4b1u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ea4b2  mov ebx, eax
    X86_AT(c, 0xea4b2u);
    c.r[3] = c.r[0];
    // 0ea4b4  mov esi, edx
    X86_AT(c, 0xea4b4u);
    c.r[6] = c.r[2];
    // 0ea4b6  call 0xea10c
    X86_AT(c, 0xea4b6u);
    push32(c, 0xea4bbu); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea4bbu);
    X86_TICK(c, 7);
    // 0ea4bb  call 0xe7fc4
    X86_AT(c, 0xea4bbu);
    push32(c, 0xea4c0u); x86_call_known(c, 0xe7fc4u, f_000e7fc4); X86_RET(c, 0xea4c0u);
    X86_TICK(c, 9);
    // 0ea4c0  push esi
    X86_AT(c, 0xea4c0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea4c1  call 0xea16c
    X86_AT(c, 0xea4c1u);
    push32(c, 0xea4c6u); x86_call_known(c, 0xea16cu, f_000ea16c); X86_RET(c, 0xea4c6u);
    X86_TICK(c, 9);
    // 0ea4c6  push esi
    X86_AT(c, 0xea4c6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea4c7  call 0xea10c
    X86_AT(c, 0xea4c7u);
    push32(c, 0xea4ccu); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea4ccu);
    X86_TICK(c, 12);
    // 0ea4cc  push dword ptr [0xfff0]
    X86_AT(c, 0xea4ccu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xFFF0u))); push32(c, v); }
    // 0ea4d2  call 0xeb3ac
    X86_AT(c, 0xea4d2u);
    push32(c, 0xea4d7u); x86_call_known(c, 0xeb3acu, f_000eb3ac); X86_RET(c, 0xea4d7u);
    X86_TICK(c, 7);
    // 0ea4d7  call 0xea330
    X86_AT(c, 0xea4d7u);
    push32(c, 0xea4dcu); x86_call_known(c, 0xea330u, f_000ea330); X86_RET(c, 0xea4dcu);
    X86_TICK(c, 13);
    // 0ea4dc  setae al
    X86_AT(c, 0xea4dcu);
    s8(c, 0, x86_cc(c, 3) ? 1u : 0u);
    // 0ea4df  mov byte ptr [ebx - 0x21], al
    X86_AT(c, 0xea4dfu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFDFu)), g8(c, 0));
    // 0ea4e2  and al, al
    X86_AT(c, 0xea4e2u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 0ea4e4  je 0xea505
    X86_AT(c, 0xea4e4u);
    if (x86_cc(c, 4)) { goto L_ea505; }
    X86_TICK(c, 9);
    // 0ea4e6  push esi
    X86_AT(c, 0xea4e6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea4e7  call 0xea10c
    X86_AT(c, 0xea4e7u);
    push32(c, 0xea4ecu); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea4ecu);
    X86_TICK(c, 11);
    // 0ea4ec  mov eax, 0xfff4
    X86_AT(c, 0xea4ecu);
    c.r[0] = 0xFFF4u;
    // 0ea4f1  push eax
    X86_AT(c, 0xea4f1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea4f2  call 0xea10c
    X86_AT(c, 0xea4f2u);
    push32(c, 0xea4f7u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea4f7u);
    X86_TICK(c, 7);
    // 0ea4f7  call 0xeb3e8
    X86_AT(c, 0xea4f7u);
    push32(c, 0xea4fcu); x86_call_known(c, 0xeb3e8u, f_000eb3e8); X86_RET(c, 0xea4fcu);
    X86_TICK(c, 9);
    // 0ea4fc  push esi
    X86_AT(c, 0xea4fcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea4fd  call 0xea16c
    X86_AT(c, 0xea4fdu);
    push32(c, 0xea502u); x86_call_known(c, 0xea16cu, f_000ea16c); X86_RET(c, 0xea502u);
    X86_TICK(c, 6);
    // 0ea502  inc dword ptr [ebx - 4]
    X86_AT(c, 0xea502u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_ea505:
    X86_TICK(c, 28);
    // 0ea505  pop edi
    X86_AT(c, 0xea505u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ea506  pop esi
    X86_AT(c, 0xea506u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ea507  pop ebx
    X86_AT(c, 0xea507u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ea508  leave 
    X86_AT(c, 0xea508u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ea509  ret 4
    X86_AT(c, 0xea509u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0xea44cu, "ran off the end of a function");
}
void f_000ea51c(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0ea51c  enter 0x38, 0
    X86_AT(c, 0xea51cu);
    x86_enter(c, 0x38u, 0x0u, 4);
    // 0ea520  push ebx
    X86_AT(c, 0xea520u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0ea521  push esi
    X86_AT(c, 0xea521u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea522  push edi
    X86_AT(c, 0xea522u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea523  mov edi, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xea523u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0ea526  mov esi, dword ptr [ebp + 0x24]
    X86_AT(c, 0xea526u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x24u)));
    // 0ea529  lea eax, [ebp + 0xc]
    X86_AT(c, 0xea529u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0ea52c  push eax
    X86_AT(c, 0xea52cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea52d  lea eax, [ebp - 0x38]
    X86_AT(c, 0xea52du);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC8u);
    // 0ea530  push eax
    X86_AT(c, 0xea530u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea531  call 0xeb298
    X86_AT(c, 0xea531u);
    push32(c, 0xea536u); x86_call_known(c, 0xeb298u, f_000eb298); X86_RET(c, 0xea536u);
    X86_TICK(c, 39);
    // 0ea536  lea eax, [ebp - 0x38]
    X86_AT(c, 0xea536u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFC8u);
    // 0ea539  push esi
    X86_AT(c, 0xea539u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0ea53a  push edi
    X86_AT(c, 0xea53au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea53b  mov edi, esi
    X86_AT(c, 0xea53bu);
    c.r[7] = c.r[6];
    // 0ea53d  mov esi, eax
    X86_AT(c, 0xea53du);
    c.r[6] = c.r[0];
    // 0ea53f  mov ecx, 3
    X86_AT(c, 0xea53fu);
    c.r[1] = 0x3u;
    // 0ea544  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0xea544u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0ea546  pop edi
    X86_AT(c, 0xea546u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ea547  pop esi
    X86_AT(c, 0xea547u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ea548  cmp word ptr [esi], 0
    X86_AT(c, 0xea548u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[6]))), 0x0u, 0, 2);
    // 0ea54c  jne 0xea708
    X86_AT(c, 0xea54cu);
    if (x86_cc(c, 5)) { goto L_ea708; }
    X86_TICK(c, 11);
    // 0ea552  lea eax, [ebp + 0xc]
    X86_AT(c, 0xea552u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0ea555  push eax
    X86_AT(c, 0xea555u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea556  call 0xeb358
    X86_AT(c, 0xea556u);
    push32(c, 0xea55bu); x86_call_known(c, 0xeb358u, f_000eb358); X86_RET(c, 0xea55bu);
    X86_TICK(c, 12);
    // 0ea55b  movsx eax, ax
    X86_AT(c, 0xea55bu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0ea55e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xea55eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0ea561  and eax, eax
    X86_AT(c, 0xea561u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ea563  jl 0xea5f4
    X86_AT(c, 0xea563u);
    if (x86_cc(c, 12)) { goto L_ea5f4; }
    X86_TICK(c, 77);
    // 0ea569  imul eax, eax, 0x12a
    X86_AT(c, 0xea569u);
    c.r[0] = x86_imul2(c, c.r[0], 0x12Au, 4);
    // 0ea56f  cdq 
    X86_AT(c, 0xea56fu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0ea570  mov ecx, 0x3de
    X86_AT(c, 0xea570u);
    c.r[1] = 0x3DEu;
    // 0ea575  idiv ecx
    X86_AT(c, 0xea575u);
    x86_idiv(c, c.r[1], 4, 0xea575u);
    // 0ea577  inc eax
    X86_AT(c, 0xea577u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0ea578  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xea578u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0ea57b  and eax, eax
    X86_AT(c, 0xea57bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ea57d  je 0xea5ab
    X86_AT(c, 0xea57du);
    if (x86_cc(c, 4)) { goto L_ea5ab; }
    X86_TICK(c, 16);
    // 0ea57f  push dword ptr [ebp - 4]
    X86_AT(c, 0xea57fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0ea582  lea eax, [ebp - 0x2c]
    X86_AT(c, 0xea582u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0ea585  push eax
    X86_AT(c, 0xea585u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea586  call 0xeb218
    X86_AT(c, 0xea586u);
    push32(c, 0xea58bu); x86_call_known(c, 0xeb218u, f_000eb218); X86_RET(c, 0xea58bu);
    X86_TICK(c, 11);
    // 0ea58b  lea eax, [ebp + 0xc]
    X86_AT(c, 0xea58bu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0ea58e  push eax
    X86_AT(c, 0xea58eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea58f  call 0xea10c
    X86_AT(c, 0xea58fu);
    push32(c, 0xea594u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea594u);
    X86_TICK(c, 11);
    // 0ea594  lea eax, [ebp - 0x2c]
    X86_AT(c, 0xea594u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0ea597  push eax
    X86_AT(c, 0xea597u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea598  call 0xea10c
    X86_AT(c, 0xea598u);
    push32(c, 0xea59du); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea59du);
    X86_TICK(c, 7);
    // 0ea59d  call 0xeb518
    X86_AT(c, 0xea59du);
    push32(c, 0xea5a2u); x86_call_known(c, 0xeb518u, f_000eb518); X86_RET(c, 0xea5a2u);
    X86_TICK(c, 11);
    // 0ea5a2  lea eax, [ebp + 0xc]
    X86_AT(c, 0xea5a2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0ea5a5  push eax
    X86_AT(c, 0xea5a5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea5a6  call 0xea16c
    X86_AT(c, 0xea5a6u);
    push32(c, 0xea5abu); x86_call_known(c, 0xea16cu, f_000ea16c); X86_RET(c, 0xea5abu);
L_ea5ab:
    X86_TICK(c, 11);
    // 0ea5ab  lea eax, [ebp + 0xc]
    X86_AT(c, 0xea5abu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0ea5ae  push eax
    X86_AT(c, 0xea5aeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea5af  call 0xea10c
    X86_AT(c, 0xea5afu);
    push32(c, 0xea5b4u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea5b4u);
    X86_TICK(c, 12);
    // 0ea5b4  push dword ptr [0xfff0]
    X86_AT(c, 0xea5b4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xFFF0u))); push32(c, v); }
    // 0ea5ba  call 0xeb3ac
    X86_AT(c, 0xea5bau);
    push32(c, 0xea5bfu); x86_call_known(c, 0xeb3acu, f_000eb3ac); X86_RET(c, 0xea5bfu);
    X86_TICK(c, 7);
    // 0ea5bf  call 0xea330
    X86_AT(c, 0xea5bfu);
    push32(c, 0xea5c4u); x86_call_known(c, 0xea330u, f_000ea330); X86_RET(c, 0xea5c4u);
    X86_TICK(c, 5);
    // 0ea5c4  jb 0xea67f
    X86_AT(c, 0xea5c4u);
    if (x86_cc(c, 2)) { goto L_ea67f; }
    X86_TICK(c, 11);
    // 0ea5ca  lea eax, [ebp + 0xc]
    X86_AT(c, 0xea5cau);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0ea5cd  push eax
    X86_AT(c, 0xea5cdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea5ce  call 0xea10c
    X86_AT(c, 0xea5ceu);
    push32(c, 0xea5d3u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea5d3u);
    X86_TICK(c, 11);
    // 0ea5d3  mov eax, 0xfff4
    X86_AT(c, 0xea5d3u);
    c.r[0] = 0xFFF4u;
    // 0ea5d8  push eax
    X86_AT(c, 0xea5d8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea5d9  call 0xea10c
    X86_AT(c, 0xea5d9u);
    push32(c, 0xea5deu); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea5deu);
    X86_TICK(c, 7);
    // 0ea5de  call 0xeb3e8
    X86_AT(c, 0xea5deu);
    push32(c, 0xea5e3u); x86_call_known(c, 0xeb3e8u, f_000eb3e8); X86_RET(c, 0xea5e3u);
    X86_TICK(c, 11);
    // 0ea5e3  lea eax, [ebp + 0xc]
    X86_AT(c, 0xea5e3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0ea5e6  push eax
    X86_AT(c, 0xea5e6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea5e7  call 0xea16c
    X86_AT(c, 0xea5e7u);
    push32(c, 0xea5ecu); x86_call_known(c, 0xea16cu, f_000ea16c); X86_RET(c, 0xea5ecu);
    X86_TICK(c, 13);
    // 0ea5ec  inc dword ptr [ebp - 4]
    X86_AT(c, 0xea5ecu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ea5ef  jmp 0xea67f
    X86_AT(c, 0xea5efu);
    goto L_ea67f;
L_ea5f4:
    X86_TICK(c, 77);
    // 0ea5f4  imul eax, dword ptr [ebp - 4], 0x12a
    X86_AT(c, 0xea5f4u);
    c.r[0] = x86_imul2(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x12Au, 4);
    // 0ea5fb  add eax, 0x12a
    X86_AT(c, 0xea5fbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x12Au, 0, 4); }
    // 0ea600  cdq 
    X86_AT(c, 0xea600u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0ea601  mov ecx, 0x3de
    X86_AT(c, 0xea601u);
    c.r[1] = 0x3DEu;
    // 0ea606  idiv ecx
    X86_AT(c, 0xea606u);
    x86_idiv(c, c.r[1], 4, 0xea606u);
    // 0ea608  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xea608u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0ea60b  and eax, eax
    X86_AT(c, 0xea60bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0ea60d  je 0xea63f
    X86_AT(c, 0xea60du);
    if (x86_cc(c, 4)) { goto L_ea63f; }
    X86_TICK(c, 19);
    // 0ea60f  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0xea60fu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 0ea613  neg eax
    X86_AT(c, 0xea613u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0ea615  push eax
    X86_AT(c, 0xea615u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea616  lea eax, [ebp - 0x2c]
    X86_AT(c, 0xea616u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0ea619  push eax
    X86_AT(c, 0xea619u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea61a  call 0xeb218
    X86_AT(c, 0xea61au);
    push32(c, 0xea61fu); x86_call_known(c, 0xeb218u, f_000eb218); X86_RET(c, 0xea61fu);
    X86_TICK(c, 11);
    // 0ea61f  lea eax, [ebp - 0x2c]
    X86_AT(c, 0xea61fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD4u);
    // 0ea622  push eax
    X86_AT(c, 0xea622u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea623  call 0xea10c
    X86_AT(c, 0xea623u);
    push32(c, 0xea628u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea628u);
    X86_TICK(c, 11);
    // 0ea628  lea eax, [ebp + 0xc]
    X86_AT(c, 0xea628u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0ea62b  push eax
    X86_AT(c, 0xea62bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea62c  call 0xea10c
    X86_AT(c, 0xea62cu);
    push32(c, 0xea631u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea631u);
    X86_TICK(c, 7);
    // 0ea631  call 0xeb3e8
    X86_AT(c, 0xea631u);
    push32(c, 0xea636u); x86_call_known(c, 0xeb3e8u, f_000eb3e8); X86_RET(c, 0xea636u);
    X86_TICK(c, 11);
    // 0ea636  lea eax, [ebp + 0xc]
    X86_AT(c, 0xea636u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0ea639  push eax
    X86_AT(c, 0xea639u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea63a  call 0xea16c
    X86_AT(c, 0xea63au);
    push32(c, 0xea63fu); x86_call_known(c, 0xea16cu, f_000ea16c); X86_RET(c, 0xea63fu);
L_ea63f:
    X86_TICK(c, 11);
    // 0ea63f  lea eax, [ebp + 0xc]
    X86_AT(c, 0xea63fu);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0ea642  push eax
    X86_AT(c, 0xea642u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea643  call 0xea10c
    X86_AT(c, 0xea643u);
    push32(c, 0xea648u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea648u);
    X86_TICK(c, 11);
    // 0ea648  mov eax, 0xfff4
    X86_AT(c, 0xea648u);
    c.r[0] = 0xFFF4u;
    // 0ea64d  push eax
    X86_AT(c, 0xea64du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea64e  call 0xea10c
    X86_AT(c, 0xea64eu);
    push32(c, 0xea653u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea653u);
    X86_TICK(c, 7);
    // 0ea653  call 0xea330
    X86_AT(c, 0xea653u);
    push32(c, 0xea658u); x86_call_known(c, 0xea330u, f_000ea330); X86_RET(c, 0xea658u);
    X86_TICK(c, 5);
    // 0ea658  jae 0xea67f
    X86_AT(c, 0xea658u);
    if (x86_cc(c, 3)) { goto L_ea67f; }
    X86_TICK(c, 11);
    // 0ea65a  lea eax, [ebp + 0xc]
    X86_AT(c, 0xea65au);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0ea65d  push eax
    X86_AT(c, 0xea65du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea65e  call 0xea10c
    X86_AT(c, 0xea65eu);
    push32(c, 0xea663u); x86_call_known(c, 0xea10cu, f_000ea10c); X86_RET(c, 0xea663u);
    X86_TICK(c, 12);
    // 0ea663  push dword ptr [0x10000]
    X86_AT(c, 0xea663u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x10000u))); push32(c, v); }
    // 0ea669  call 0xeb3ac
    X86_AT(c, 0xea669u);
    push32(c, 0xea66eu); x86_call_known(c, 0xeb3acu, f_000eb3ac); X86_RET(c, 0xea66eu);
    X86_TICK(c, 7);
    // 0ea66e  call 0xeb3e8
    X86_AT(c, 0xea66eu);
    push32(c, 0xea673u); x86_call_known(c, 0xeb3e8u, f_000eb3e8); X86_RET(c, 0xea673u);
    X86_TICK(c, 11);
    // 0ea673  lea eax, [ebp + 0xc]
    X86_AT(c, 0xea673u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 0ea676  push eax
    X86_AT(c, 0xea676u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0ea677  call 0xea16c
    X86_AT(c, 0xea677u);
    push32(c, 0xea67cu); x86_call_known(c, 0xea16cu, f_000ea16c); X86_RET(c, 0xea67cu);
    X86_TICK(c, 6);
    // 0ea67c  dec dword ptr [ebp - 4]
    X86_AT(c, 0xea67cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_ea67f:
    X86_TICK(c, 15);
    // 0ea67f  mov byte ptr [ebp - 0x21], 0
    X86_AT(c, 0xea67fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDFu)), 0x0u);
    // 0ea683  movzx eax, byte ptr [ebp + 0x18]
    X86_AT(c, 0xea683u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0ea687  cmp eax, 0x45
    X86_AT(c, 0xea687u);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 0ea68a  je 0xea6b1
    X86_AT(c, 0xea68au);
    if (x86_cc(c, 4)) { goto L_ea6b1; }
    X86_TICK(c, 7);
    // 0ea68c  cmp eax, 0x47
    X86_AT(c, 0xea68cu);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 0ea68f  je 0xea6b6
    X86_AT(c, 0xea68fu);
    if (x86_cc(c, 4)) { goto L_ea6b6; }
    X86_TICK(c, 7);
    // 0ea691  cmp eax, 0x65
    X86_AT(c, 0xea691u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 0ea694  je 0xea6b1
    X86_AT(c, 0xea694u);
    if (x86_cc(c, 4)) { goto L_ea6b1; }
    X86_TICK(c, 7);
    // 0ea696  cmp eax, 0x66
    X86_AT(c, 0xea696u);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 0ea699  je 0xea6a2
    X86_AT(c, 0xea699u);
    if (x86_cc(c, 4)) { goto L_ea6a2; }
    X86_TICK(c, 7);
    // 0ea69b  cmp eax, 0x67
    X86_AT(c, 0xea69bu);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 0ea69e  je 0xea6b6
    X86_AT(c, 0xea69eu);
    if (x86_cc(c, 4)) { goto L_ea6b6; }
    X86_TICK(c, 7);
    // 0ea6a0  jmp 0xea6c7
    X86_AT(c, 0xea6a0u);
    goto L_ea6c7;
L_ea6a2:
    X86_TICK(c, 17);
    // 0ea6a2  mov eax, edi
    X86_AT(c, 0xea6a2u);
    c.r[0] = c.r[7];
    // 0ea6a4  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea6a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0ea6a7  sub edx, edx
    X86_AT(c, 0xea6a7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0ea6a9  cmp eax, edx
    X86_AT(c, 0xea6a9u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0ea6ab  jl 0xea6ae
    X86_AT(c, 0xea6abu);
    if (x86_cc(c, 12)) { goto L_ea6ae; }
    X86_TICK(c, 3);
    // 0ea6ad  xchg edx, eax
    X86_AT(c, 0xea6adu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_ea6ae:
    X86_TICK(c, 9);
    // 0ea6ae  push edx
    X86_AT(c, 0xea6aeu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0ea6af  jmp 0xea6c0
    X86_AT(c, 0xea6afu);
    goto L_ea6c0;
L_ea6b1:
    X86_TICK(c, 9);
    // 0ea6b1  lea eax, [edi + 1]
    X86_AT(c, 0xea6b1u);
    c.r[0] = (uint32_t)(c.r[7] + 0x1u);
    // 0ea6b4  jmp 0xea6bf
    X86_AT(c, 0xea6b4u);
    goto L_ea6bf;
L_ea6b6:
    X86_TICK(c, 11);
    // 0ea6b6  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea6b6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea6b9  cmp edi, eax
    X86_AT(c, 0xea6b9u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0ea6bb  jl 0xea6bf
    X86_AT(c, 0xea6bbu);
    if (x86_cc(c, 12)) { goto L_ea6bf; }
    X86_TICK(c, 2);
    // 0ea6bd  mov eax, edi
    X86_AT(c, 0xea6bdu);
    c.r[0] = c.r[7];
L_ea6bf:
    X86_TICK(c, 2);
    // 0ea6bf  push eax
    X86_AT(c, 0xea6bfu);
    { uint32_t v = c.r[0]; push32(c, v); }
L_ea6c0:
    X86_TICK(c, 9);
    // 0ea6c0  mov ecx, ebp
    X86_AT(c, 0xea6c0u);
    c.r[1] = c.r[5];
    // 0ea6c2  call 0xea44c
    X86_AT(c, 0xea6c2u);
    push32(c, 0xea6c7u); x86_call_known(c, 0xea44cu, f_000ea44c); X86_RET(c, 0xea6c7u);
L_ea6c7:
    X86_TICK(c, 9);
    // 0ea6c7  mov ecx, ebp
    X86_AT(c, 0xea6c7u);
    c.r[1] = c.r[5];
    // 0ea6c9  call 0xea36c
    X86_AT(c, 0xea6c9u);
    push32(c, 0xea6ceu); x86_call_known(c, 0xea36cu, f_000ea36c); X86_RET(c, 0xea6ceu);
    X86_TICK(c, 34);
    // 0ea6ce  mov eax, 0x30303030
    X86_AT(c, 0xea6ceu);
    c.r[0] = 0x30303030u;
    // 0ea6d3  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xea6d3u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ea6d6  add edx, 4
    X86_AT(c, 0xea6d6u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0x4u, 0, 4); }
    // 0ea6d9  push edi
    X86_AT(c, 0xea6d9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0ea6da  mov edi, edx
    X86_AT(c, 0xea6dau);
    c.r[7] = c.r[2];
    // 0ea6dc  mov ecx, 0x12
    X86_AT(c, 0xea6dcu);
    c.r[1] = 0x12u;
    // 0ea6e1  stosb byte ptr es:[edi], al
    X86_AT(c, 0xea6e1u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 0ea6e3  pop edi
    X86_AT(c, 0xea6e3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ea6e4  sub ebx, ebx
    X86_AT(c, 0xea6e4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0ea6e6  jmp 0xea6fa
    X86_AT(c, 0xea6e6u);
    goto L_ea6fa;
L_ea6e8:
    X86_TICK(c, 22);
    // 0ea6e8  mov eax, dword ptr [ebp - 0x20]
    X86_AT(c, 0xea6e8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 0ea6eb  mov dl, byte ptr [ebp + eax*1 - 0x1c]
    X86_AT(c, 0xea6ebu);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + c.r[0] + 0xFFFFFFE4u))));
    // 0ea6ef  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0xea6efu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ea6f2  mov byte ptr [ecx + ebx*1 + 4], dl
    X86_AT(c, 0xea6f2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[3] + 0x4u)), g8(c, 2));
    // 0ea6f6  inc dword ptr [ebp - 0x20]
    X86_AT(c, 0xea6f6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0ea6f9  inc ebx
    X86_AT(c, 0xea6f9u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
L_ea6fa:
    X86_TICK(c, 12);
    // 0ea6fa  cmp dword ptr [ebp - 0x20], 0x12
    X86_AT(c, 0xea6fau);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u))), 0x12u, 0, 4);
    // 0ea6fe  jle 0xea6e8
    X86_AT(c, 0xea6feu);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xea6e8u); goto L_ea6e8; }
    X86_TICK(c, 10);
    // 0ea700  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xea700u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0ea703  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0xea703u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0ea706  mov dword ptr [edx], eax
    X86_AT(c, 0xea706u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
L_ea708:
    X86_TICK(c, 28);
    // 0ea708  pop edi
    X86_AT(c, 0xea708u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0ea709  pop esi
    X86_AT(c, 0xea709u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0ea70a  pop ebx
    X86_AT(c, 0xea70au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0ea70b  leave 
    X86_AT(c, 0xea70bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0ea70c  ret 0x20
    X86_AT(c, 0xea70cu);
    c.eip = pop32(c); c.r[4] += 0x20u; return;
    x86_fault(c, 0xea51cu, "ran off the end of a function");
}
}

#include "p_game_funcs.h"
namespace p_game {
void f_0005664a(X86Cpu& c) {
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
    x86_fault(c, 0x5664au, "ran off the end of a function");
}
void f_00056680(X86Cpu& c) {
    X86_TICK(c, 34);
    // 056680  push ebp
    X86_AT(c, 0x56680u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 056681  mov ebp, esp
    X86_AT(c, 0x56681u);
    c.r[5] = c.r[4];
    // 056683  push ecx
    X86_AT(c, 0x56683u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 056684  sub esp, 0xc
    X86_AT(c, 0x56684u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 056687  push ebx
    X86_AT(c, 0x56687u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 056688  push esi
    X86_AT(c, 0x56688u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056689  push edi
    X86_AT(c, 0x56689u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05668a  mov edi, 1
    X86_AT(c, 0x5668au);
    c.r[7] = 0x1u;
    // 05668f  mov al, byte ptr [0x4b8c0]
    X86_AT(c, 0x5668fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B8C0u))));
    // 056694  mov byte ptr [edi + 0x4b88b], al
    X86_AT(c, 0x56694u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4B88Bu)), g8(c, 0));
    // 05669a  cmp byte ptr [0x4b8d3], 0
    X86_AT(c, 0x5669au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B8D3u))), 0x0u, 0, 1);
    // 0566a1  je 0x566b0
    X86_AT(c, 0x566a1u);
    if (x86_cc(c, 4)) { goto L_566b0; }
    X86_TICK(c, 10);
    // 0566a3  mov dword ptr [ebp - 0x10], edi
    X86_AT(c, 0x566a3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[7]);
    // 0566a6  add edi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x566a6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 0566a9  mov byte ptr [edi + 0x4b88b], 0x2e
    X86_AT(c, 0x566a9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x4B88Bu)), 0x2Eu);
L_566b0:
    X86_TICK(c, 13);
    // 0566b0  inc edi
    X86_AT(c, 0x566b0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0566b1  mov eax, dword ptr [0x4b4b4]
    X86_AT(c, 0x566b1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B4B4u)));
    // 0566b6  and eax, eax
    X86_AT(c, 0x566b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0566b8  je 0x5673a
    X86_AT(c, 0x566b8u);
    if (x86_cc(c, 4)) { goto L_5673a; }
    X86_TICK(c, 15);
    // 0566be  mov edx, dword ptr [ebp - 4]
    X86_AT(c, 0x566beu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0566c1  mov ecx, dword ptr [edx - 8]
    X86_AT(c, 0x566c1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF8u)));
    // 0566c4  cmp ecx, eax
    X86_AT(c, 0x566c4u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 0566c6  jb 0x566ca
    X86_AT(c, 0x566c6u);
    if (x86_cc(c, 2)) { goto L_566ca; }
    X86_TICK(c, 2);
    // 0566c8  mov ecx, eax
    X86_AT(c, 0x566c8u);
    c.r[1] = c.r[0];
L_566ca:
    X86_TICK(c, 54);
    // 0566ca  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0x566cau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 0566cd  mov esi, 0x4b8c1
    X86_AT(c, 0x566cdu);
    c.r[6] = 0x4B8C1u;
    // 0566d2  lea ebx, [edi + 0x4b88b]
    X86_AT(c, 0x566d2u);
    c.r[3] = (uint32_t)(c.r[7] + 0x4B88Bu);
    // 0566d8  push edi
    X86_AT(c, 0x566d8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0566d9  mov edi, ebx
    X86_AT(c, 0x566d9u);
    c.r[7] = c.r[3];
    // 0566db  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x566dbu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0566dd  pop edi
    X86_AT(c, 0x566ddu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0566de  add edi, dword ptr [ebp - 8]
    X86_AT(c, 0x566deu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4); }
    // 0566e1  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x566e1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0566e4  sub dword ptr [0x4b4b4], eax
    X86_AT(c, 0x566e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4B4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0566ea  lea eax, [edi - 1]
    X86_AT(c, 0x566eau);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 0566ed  mov dword ptr [edx - 0x10], eax
    X86_AT(c, 0x566edu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF0u)), c.r[0]);
    // 0566f0  cmp byte ptr [edx - 9], 0
    X86_AT(c, 0x566f0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0566f4  je 0x56700
    X86_AT(c, 0x566f4u);
    if (x86_cc(c, 4)) { goto L_56700; }
    X86_TICK(c, 13);
    // 0566f6  push 2
    X86_AT(c, 0x566f6u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0566f8  push edi
    X86_AT(c, 0x566f8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0566f9  mov ecx, edx
    X86_AT(c, 0x566f9u);
    c.r[1] = c.r[2];
    // 0566fb  call 0x56320
    X86_AT(c, 0x566fbu);
    push32(c, 0x56700u); x86_call_known(c, 0x56320u, f_00056320); X86_RET(c, 0x56700u);
L_56700:
    X86_TICK(c, 13);
    // 056700  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x56700u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 056703  mov ebx, ecx
    X86_AT(c, 0x56703u);
    c.r[3] = c.r[1];
    // 056705  call 0x5638c
    X86_AT(c, 0x56705u);
    push32(c, 0x5670au); x86_call_known(c, 0x5638cu, f_0005638c); X86_RET(c, 0x5670au);
    X86_TICK(c, 18);
    // 05670a  push dword ptr [ebx - 0x10]
    X86_AT(c, 0x5670au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF0u))); push32(c, v); }
    // 05670d  push 0x4b88c
    X86_AT(c, 0x5670du);
    { uint32_t v = 0x4B88Cu; push32(c, v); }
    // 056712  mov ecx, dword ptr [0x4b4c4]
    X86_AT(c, 0x56712u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4C4u)));
    // 056718  call dword ptr [0x4b4c0]
    X86_AT(c, 0x56718u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4B4C0u))); push32(c, 0x5671eu); x86_call(c, t); X86_RET(c, 0x5671eu); }
    X86_TICK(c, 12);
    // 05671e  cmp byte ptr [ebx - 9], 0
    X86_AT(c, 0x5671eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 056722  jne 0x56757
    X86_AT(c, 0x56722u);
    if (x86_cc(c, 5)) { goto L_56757; }
    X86_TICK(c, 11);
    // 056724  mov eax, dword ptr [0x4b4b4]
    X86_AT(c, 0x56724u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B4B4u)));
    // 056729  and eax, eax
    X86_AT(c, 0x56729u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 05672b  je 0x56757
    X86_AT(c, 0x5672bu);
    if (x86_cc(c, 4)) { goto L_56757; }
    X86_TICK(c, 11);
    // 05672d  push eax
    X86_AT(c, 0x5672du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05672e  push 0x4b4c8
    X86_AT(c, 0x5672eu);
    { uint32_t v = 0x4B4C8u; push32(c, v); }
    // 056733  call 0x5488c
    X86_AT(c, 0x56733u);
    push32(c, 0x56738u); x86_call_known(c, 0x5488cu, f_0005488c); X86_RET(c, 0x56738u);
    X86_TICK(c, 7);
    // 056738  jmp 0x56757
    X86_AT(c, 0x56738u);
    goto L_56757;
L_5673a:
    X86_TICK(c, 11);
    // 05673a  mov ecx, dword ptr [ebp - 4]
    X86_AT(c, 0x5673au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 05673d  call 0x5638c
    X86_AT(c, 0x5673du);
    push32(c, 0x56742u); x86_call_known(c, 0x5638cu, f_0005638c); X86_RET(c, 0x56742u);
    X86_TICK(c, 17);
    // 056742  lea eax, [edi - 1]
    X86_AT(c, 0x56742u);
    c.r[0] = (uint32_t)(c.r[7] + 0xFFFFFFFFu);
    // 056745  push eax
    X86_AT(c, 0x56745u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056746  push 0x4b88c
    X86_AT(c, 0x56746u);
    { uint32_t v = 0x4B88Cu; push32(c, v); }
    // 05674b  mov ecx, dword ptr [0x4b4c4]
    X86_AT(c, 0x5674bu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4C4u)));
    // 056751  call dword ptr [0x4b4c0]
    X86_AT(c, 0x56751u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4B4C0u))); push32(c, 0x56757u); x86_call(c, t); X86_RET(c, 0x56757u); }
L_56757:
    X86_TICK(c, 11);
    // 056757  mov eax, dword ptr [0x4b8bc]
    X86_AT(c, 0x56757u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B8BCu)));
    // 05675c  and eax, eax
    X86_AT(c, 0x5675cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 05675e  jg 0x56772
    X86_AT(c, 0x5675eu);
    if (x86_cc(c, 15)) { goto L_56772; }
    X86_TICK(c, 9);
    // 056760  mov byte ptr [ebp - 9], 0x2d
    X86_AT(c, 0x56760u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x2Du);
    // 056764  and eax, eax
    X86_AT(c, 0x56764u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 056766  jge 0x5676a
    X86_AT(c, 0x56766u);
    if (x86_cc(c, 13)) { goto L_5676a; }
    X86_TICK(c, 2);
    // 056768  neg eax
    X86_AT(c, 0x56768u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
L_5676a:
    X86_TICK(c, 11);
    // 05676a  inc eax
    X86_AT(c, 0x5676au);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 05676b  mov dword ptr [0x4b8bc], eax
    X86_AT(c, 0x5676bu);
    wr32((c.sbase[3] + (uint32_t)(0x4B8BCu)), c.r[0]);
    // 056770  jmp 0x5677c
    X86_AT(c, 0x56770u);
    goto L_5677c;
L_56772:
    X86_TICK(c, 8);
    // 056772  mov byte ptr [ebp - 9], 0x2b
    X86_AT(c, 0x56772u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x2Bu);
    // 056776  dec dword ptr [0x4b8bc]
    X86_AT(c, 0x56776u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B8BCu)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_5677c:
    X86_TICK(c, 11);
    // 05677c  mov ebx, 0x1f
    X86_AT(c, 0x5677cu);
    c.r[3] = 0x1Fu;
    // 056781  sub esi, esi
    X86_AT(c, 0x56781u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 056783  jmp 0x567a9
    X86_AT(c, 0x56783u);
    goto L_567a9;
L_56785:
    X86_TICK(c, 55);
    // 056785  mov eax, dword ptr [0x4b8bc]
    X86_AT(c, 0x56785u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B8BCu)));
    // 05678a  cdq 
    X86_AT(c, 0x5678au);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 05678b  mov ecx, 0xa
    X86_AT(c, 0x5678bu);
    c.r[1] = 0xAu;
    // 056790  idiv ecx
    X86_AT(c, 0x56790u);
    x86_idiv(c, c.r[1], 4, 0x56790u);
    // 056792  and edx, edx
    X86_AT(c, 0x56792u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 056794  jge 0x56798
    X86_AT(c, 0x56794u);
    if (x86_cc(c, 13)) { goto L_56798; }
    X86_TICK(c, 2);
    // 056796  add edx, ecx
    X86_AT(c, 0x56796u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[1], 0, 4); }
L_56798:
    X86_TICK(c, 10);
    // 056798  add dx, 0x30
    X86_AT(c, 0x56798u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x30u, 0, 2)); }
    // 05679c  mov byte ptr [ebx + 0x4b88b], dl
    X86_AT(c, 0x5679cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x4B88Bu)), g8(c, 2));
    // 0567a2  mov dword ptr [0x4b8bc], eax
    X86_AT(c, 0x567a2u);
    wr32((c.sbase[3] + (uint32_t)(0x4B8BCu)), c.r[0]);
    // 0567a7  dec ebx
    X86_AT(c, 0x567a7u);
    { uint32_t v = c.r[3]; c.r[3] = x86_dec(c, v, 4); }
    // 0567a8  inc esi
    X86_AT(c, 0x567a8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
L_567a9:
    X86_TICK(c, 12);
    // 0567a9  cmp dword ptr [0x4b8bc], 0
    X86_AT(c, 0x567a9u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x4B8BCu))), 0x0u, 0, 4);
    // 0567b0  jg 0x56785
    X86_AT(c, 0x567b0u);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x56785u); goto L_56785; }
    X86_TICK(c, 7);
    // 0567b2  cmp esi, 2
    X86_AT(c, 0x567b2u);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 0567b5  jl 0x56785
    X86_AT(c, 0x567b5u);
    if (x86_cc(c, 12)) { X86_POLL(c, 0x56785u); goto L_56785; }
    X86_TICK(c, 35);
    // 0567b7  mov al, byte ptr [ebp - 9]
    X86_AT(c, 0x567b7u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))));
    // 0567ba  mov byte ptr [ebx + 0x4b88b], al
    X86_AT(c, 0x567bau);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x4B88Bu)), g8(c, 0));
    // 0567c0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x567c0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0567c3  mov al, byte ptr [eax + 8]
    X86_AT(c, 0x567c3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))));
    // 0567c6  mov byte ptr [ebx + 0x4b88a], al
    X86_AT(c, 0x567c6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[3] + 0x4B88Au)), g8(c, 0));
    // 0567cc  lea eax, [esi + 2]
    X86_AT(c, 0x567ccu);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 0567cf  push eax
    X86_AT(c, 0x567cfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0567d0  lea eax, [ebx + 0x4b88a]
    X86_AT(c, 0x567d0u);
    c.r[0] = (uint32_t)(c.r[3] + 0x4B88Au);
    // 0567d6  push eax
    X86_AT(c, 0x567d6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0567d7  mov ecx, dword ptr [0x4b4c4]
    X86_AT(c, 0x567d7u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4C4u)));
    // 0567dd  call dword ptr [0x4b4c0]
    X86_AT(c, 0x567ddu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4B4C0u))); push32(c, 0x567e3u); x86_call(c, t); X86_RET(c, 0x567e3u); }
    X86_TICK(c, 28);
    // 0567e3  pop edi
    X86_AT(c, 0x567e3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0567e4  pop esi
    X86_AT(c, 0x567e4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0567e5  pop ebx
    X86_AT(c, 0x567e5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0567e6  leave 
    X86_AT(c, 0x567e6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0567e7  ret 
    X86_AT(c, 0x567e7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x56680u, "ran off the end of a function");
}
void f_00056800(X86Cpu& c) {
    X86_TICK(c, 22);
    // 056800  push ebp
    X86_AT(c, 0x56800u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 056801  mov ebp, esp
    X86_AT(c, 0x56801u);
    c.r[5] = c.r[4];
    // 056803  push ecx
    X86_AT(c, 0x56803u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 056804  sub esp, 0xc
    X86_AT(c, 0x56804u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0xCu, 0, 4); }
    // 056807  mov byte ptr [ebp - 9], 0
    X86_AT(c, 0x56807u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x0u);
    // 05680b  cmp byte ptr [0x4b4b8], 3
    X86_AT(c, 0x5680bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B4B8u))), 0x3u, 0, 1);
    // 056812  jne 0x5681d
    X86_AT(c, 0x56812u);
    if (x86_cc(c, 5)) { goto L_5681d; }
    X86_TICK(c, 9);
    // 056814  mov dword ptr [ebp - 8], 0x12
    X86_AT(c, 0x56814u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x12u);
    // 05681b  jmp 0x56824
    X86_AT(c, 0x5681bu);
    goto L_56824;
L_5681d:
    X86_TICK(c, 2);
    // 05681d  mov dword ptr [ebp - 8], 0x10
    X86_AT(c, 0x5681du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x10u);
L_56824:
    X86_TICK(c, 13);
    // 056824  movzx eax, byte ptr [ebp + 8]
    X86_AT(c, 0x56824u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 056828  cmp eax, 0x45
    X86_AT(c, 0x56828u);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 05682b  je 0x5687c
    X86_AT(c, 0x5682bu);
    if (x86_cc(c, 4)) { goto L_5687c; }
    X86_TICK(c, 7);
    // 05682d  cmp eax, 0x47
    X86_AT(c, 0x5682du);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 056830  je 0x56849
    X86_AT(c, 0x56830u);
    if (x86_cc(c, 4)) { goto L_56849; }
    X86_TICK(c, 7);
    // 056832  cmp eax, 0x65
    X86_AT(c, 0x56832u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 056835  je 0x5687c
    X86_AT(c, 0x56835u);
    if (x86_cc(c, 4)) { goto L_5687c; }
    X86_TICK(c, 7);
    // 056837  cmp eax, 0x66
    X86_AT(c, 0x56837u);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 05683a  je 0x568ab
    X86_AT(c, 0x5683au);
    if (x86_cc(c, 4)) { goto L_568ab; }
    X86_TICK(c, 7);
    // 056840  cmp eax, 0x67
    X86_AT(c, 0x56840u);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 056843  jne 0x568b2
    X86_AT(c, 0x56843u);
    if (x86_cc(c, 5)) { goto L_568b2; }
L_56849:
    X86_TICK(c, 12);
    // 056849  cmp dword ptr [0x4b4b4], 0
    X86_AT(c, 0x56849u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x4B4B4u))), 0x0u, 0, 4);
    // 056850  je 0x568b2
    X86_AT(c, 0x56850u);
    if (x86_cc(c, 4)) { goto L_568b2; }
    X86_TICK(c, 12);
    // 056852  test byte ptr [0x4b4ac], 8
    X86_AT(c, 0x56852u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x8u, 1);
    // 056859  jne 0x5685f
    X86_AT(c, 0x56859u);
    if (x86_cc(c, 5)) { goto L_5685f; }
    X86_TICK(c, 2);
    // 05685b  mov byte ptr [ebp - 9], 1
    X86_AT(c, 0x5685bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), 0x1u);
L_5685f:
    X86_TICK(c, 13);
    // 05685f  mov eax, dword ptr [0x4b8bc]
    X86_AT(c, 0x5685fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B8BCu)));
    // 056864  dec eax
    X86_AT(c, 0x56864u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 056865  cmp eax, 0xfffffffc
    X86_AT(c, 0x56865u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFCu, 0, 4);
    // 056868  jl 0x56872
    X86_AT(c, 0x56868u);
    if (x86_cc(c, 12)) { goto L_56872; }
    X86_TICK(c, 11);
    // 05686a  cmp eax, dword ptr [0x4b4b4]
    X86_AT(c, 0x5686au);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x4B4B4u))), 0, 4);
    // 056870  jle 0x56885
    X86_AT(c, 0x56870u);
    if (x86_cc(c, 14)) { goto L_56885; }
L_56872:
    X86_TICK(c, 13);
    // 056872  sub byte ptr [ebp + 8], 2
    X86_AT(c, 0x56872u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)); uint32_t v = rd8(ea); wr8(ea, x86_sub(c, v, 0x2u, 0, 1)); }
    // 056876  dec dword ptr [0x4b4b4]
    X86_AT(c, 0x56876u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4B4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_5687c:
    X86_TICK(c, 9);
    // 05687c  mov ecx, ebp
    X86_AT(c, 0x5687cu);
    c.r[1] = c.r[5];
    // 05687e  call 0x56680
    X86_AT(c, 0x5687eu);
    push32(c, 0x56883u); x86_call_known(c, 0x56680u, f_00056680); X86_RET(c, 0x56883u);
    X86_TICK(c, 7);
    // 056883  jmp 0x568b2
    X86_AT(c, 0x56883u);
    goto L_568b2;
L_56885:
    X86_TICK(c, 13);
    // 056885  mov byte ptr [ebp + 8], 0x66
    X86_AT(c, 0x56885u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)), 0x66u);
    // 056889  mov eax, dword ptr [0x4b8bc]
    X86_AT(c, 0x56889u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B8BCu)));
    // 05688e  and eax, eax
    X86_AT(c, 0x5688eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 056890  jle 0x568a5
    X86_AT(c, 0x56890u);
    if (x86_cc(c, 14)) { goto L_568a5; }
    X86_TICK(c, 11);
    // 056892  mov edx, dword ptr [0x4b4b4]
    X86_AT(c, 0x56892u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B4B4u)));
    // 056898  cmp edx, eax
    X86_AT(c, 0x56898u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 05689a  jb 0x5689d
    X86_AT(c, 0x5689au);
    if (x86_cc(c, 2)) { goto L_5689d; }
    X86_TICK(c, 3);
    // 05689c  xchg edx, eax
    X86_AT(c, 0x5689cu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_5689d:
    X86_TICK(c, 14);
    // 05689d  sub dword ptr [0x4b4b4], edx
    X86_AT(c, 0x5689du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4B4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[2], 0, 4)); }
    // 0568a3  jmp 0x568ab
    X86_AT(c, 0x568a3u);
    goto L_568ab;
L_568a5:
    X86_TICK(c, 6);
    // 0568a5  dec dword ptr [0x4b4b4]
    X86_AT(c, 0x568a5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4B4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_568ab:
    X86_TICK(c, 9);
    // 0568ab  mov ecx, ebp
    X86_AT(c, 0x568abu);
    c.r[1] = c.r[5];
    // 0568ad  call 0x563f0
    X86_AT(c, 0x568adu);
    push32(c, 0x568b2u); x86_call_known(c, 0x563f0u, f_000563f0); X86_RET(c, 0x568b2u);
L_568b2:
    X86_TICK(c, 16);
    // 0568b2  leave 
    X86_AT(c, 0x568b2u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0568b3  ret 4
    X86_AT(c, 0x568b3u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x56800u, "ran off the end of a function");
}
void f_000568d4(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0568d4  push ebp
    X86_AT(c, 0x568d4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0568d5  mov ebp, esp
    X86_AT(c, 0x568d5u);
    c.r[5] = c.r[4];
    // 0568d7  push ecx
    X86_AT(c, 0x568d7u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0568d8  push esi
    X86_AT(c, 0x568d8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0568d9  push edi
    X86_AT(c, 0x568d9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0568da  mov esi, dword ptr [0x4b8bc]
    X86_AT(c, 0x568dau);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x4B8BCu)));
    // 0568e0  and esi, esi
    X86_AT(c, 0x568e0u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0568e2  jge 0x568e6
    X86_AT(c, 0x568e2u);
    if (x86_cc(c, 13)) { goto L_568e6; }
    X86_TICK(c, 2);
    // 0568e4  neg esi
    X86_AT(c, 0x568e4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_neg(c, v, 4); }
L_568e6:
    X86_TICK(c, 9);
    // 0568e6  mov edi, 2
    X86_AT(c, 0x568e6u);
    c.r[7] = 0x2u;
    // 0568eb  jmp 0x568f8
    X86_AT(c, 0x568ebu);
    goto L_568f8;
L_568ed:
    X86_TICK(c, 52);
    // 0568ed  xchg esi, eax
    X86_AT(c, 0x568edu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0568ee  cdq 
    X86_AT(c, 0x568eeu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0568ef  mov ecx, 0xa
    X86_AT(c, 0x568efu);
    c.r[1] = 0xAu;
    // 0568f4  idiv ecx
    X86_AT(c, 0x568f4u);
    x86_idiv(c, c.r[1], 4, 0x568f4u);
    // 0568f6  xchg esi, eax
    X86_AT(c, 0x568f6u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0568f7  inc edi
    X86_AT(c, 0x568f7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
L_568f8:
    X86_TICK(c, 7);
    // 0568f8  cmp esi, 0x63
    X86_AT(c, 0x568f8u);
    (void)x86_sub(c, c.r[6], 0x63u, 0, 4);
    // 0568fb  jg 0x568ed
    X86_AT(c, 0x568fbu);
    if (x86_cc(c, 15)) { X86_POLL(c, 0x568edu); goto L_568ed; }
    X86_TICK(c, 46);
    // 0568fd  mov al, byte ptr [0x4b8d3]
    X86_AT(c, 0x568fdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0x4B8D3u))));
    // 056902  inc eax
    X86_AT(c, 0x56902u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 056903  movzx eax, al
    X86_AT(c, 0x56903u);
    c.r[0] = g8(c, 0);
    // 056906  add eax, dword ptr [0x4b4b4]
    X86_AT(c, 0x56906u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x4B4B4u))), 0, 4); }
    // 05690c  add eax, 2
    X86_AT(c, 0x5690cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x2u, 0, 4); }
    // 05690f  lea edx, [edi + eax*1]
    X86_AT(c, 0x5690fu);
    c.r[2] = (uint32_t)(c.r[7] + c.r[0]);
    // 056912  xchg edx, eax
    X86_AT(c, 0x56912u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 056913  pop edi
    X86_AT(c, 0x56913u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 056914  pop esi
    X86_AT(c, 0x56914u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 056915  leave 
    X86_AT(c, 0x56915u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 056916  ret 
    X86_AT(c, 0x56916u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x568d4u, "ran off the end of a function");
}
void f_00056928(X86Cpu& c) {
    X86_TICK(c, 25);
    // 056928  enter 0x30, 0
    X86_AT(c, 0x56928u);
    x86_enter(c, 0x30u, 0x0u, 4);
    // 05692c  push ebx
    X86_AT(c, 0x5692cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 05692d  push esi
    X86_AT(c, 0x5692du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 05692e  push edi
    X86_AT(c, 0x5692eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05692f  mov bl, byte ptr [ebp + 0x14]
    X86_AT(c, 0x5692fu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))));
    // 056932  mov ecx, ebp
    X86_AT(c, 0x56932u);
    c.r[1] = c.r[5];
    // 056934  call 0x56288
    X86_AT(c, 0x56934u);
    push32(c, 0x56939u); x86_call_known(c, 0x56288u, f_00056288); X86_RET(c, 0x56939u);
    X86_TICK(c, 12);
    // 056939  cmp dword ptr [0x4b4b4], 0xffff
    X86_AT(c, 0x56939u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x4B4B4u))), 0xFFFFu, 0, 4);
    // 056943  jne 0x5694f
    X86_AT(c, 0x56943u);
    if (x86_cc(c, 5)) { goto L_5694f; }
    X86_TICK(c, 2);
    // 056945  mov dword ptr [0x4b4b4], 6
    X86_AT(c, 0x56945u);
    wr32((c.sbase[3] + (uint32_t)(0x4B4B4u)), 0x6u);
L_5694f:
    X86_TICK(c, 12);
    // 05694f  cmp byte ptr [0x4b4b8], 3
    X86_AT(c, 0x5694fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B4B8u))), 0x3u, 0, 1);
    // 056956  jne 0x5695f
    X86_AT(c, 0x56956u);
    if (x86_cc(c, 5)) { goto L_5695f; }
    X86_TICK(c, 9);
    // 056958  mov edi, 0x12
    X86_AT(c, 0x56958u);
    c.r[7] = 0x12u;
    // 05695d  jmp 0x56964
    X86_AT(c, 0x5695du);
    goto L_56964;
L_5695f:
    X86_TICK(c, 2);
    // 05695f  mov edi, 0x10
    X86_AT(c, 0x5695fu);
    c.r[7] = 0x10u;
L_56964:
    X86_TICK(c, 39);
    // 056964  lea esi, [ebp - 0x18]
    X86_AT(c, 0x56964u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFE8u);
    // 056967  push esi
    X86_AT(c, 0x56967u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056968  push edi
    X86_AT(c, 0x56968u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056969  push dword ptr [0x4b4b4]
    X86_AT(c, 0x56969u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4B4B4u))); push32(c, v); }
    // 05696f  push ebx
    X86_AT(c, 0x5696fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 056970  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x56970u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 056973  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x56973u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 056976  push dword ptr [ebp + 8]
    X86_AT(c, 0x56976u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 056979  lea eax, [ebp - 0x30]
    X86_AT(c, 0x56979u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 05697c  push eax
    X86_AT(c, 0x5697cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05697d  call 0x55ff4
    X86_AT(c, 0x5697du);
    push32(c, 0x56982u); x86_call_known(c, 0x55ff4u, f_00055ff4); X86_RET(c, 0x56982u);
    X86_TICK(c, 30);
    // 056982  lea esi, [ebp - 0x30]
    X86_AT(c, 0x56982u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFD0u);
    // 056985  push edi
    X86_AT(c, 0x56985u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056986  mov edi, 0x4b8bc
    X86_AT(c, 0x56986u);
    c.r[7] = 0x4B8BCu;
    // 05698b  mov ecx, 0x17
    X86_AT(c, 0x5698bu);
    c.r[1] = 0x17u;
    // 056990  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x56990u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 056992  pop edi
    X86_AT(c, 0x56992u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 056993  mov ax, word ptr [ebp - 0x18]
    X86_AT(c, 0x56993u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))));
    // 056997  and ax, ax
    X86_AT(c, 0x56997u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 05699a  je 0x569bf
    X86_AT(c, 0x5699au);
    if (x86_cc(c, 4)) { goto L_569bf; }
    X86_TICK(c, 12);
    // 05699c  movzx eax, ax
    X86_AT(c, 0x5699cu);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 05699f  push eax
    X86_AT(c, 0x5699fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0569a0  call 0x548d4
    X86_AT(c, 0x569a0u);
    push32(c, 0x569a5u); x86_call_known(c, 0x548d4u, f_000548d4); X86_RET(c, 0x569a5u);
    X86_TICK(c, 23);
    // 0569a5  movzx eax, word ptr [ebp - 0x18]
    X86_AT(c, 0x569a5u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0569a9  push eax
    X86_AT(c, 0x569a9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0569aa  lea eax, [ebp - 0x16]
    X86_AT(c, 0x569aau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFEAu);
    // 0569ad  push eax
    X86_AT(c, 0x569adu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0569ae  mov ecx, dword ptr [0x4b4c4]
    X86_AT(c, 0x569aeu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4C4u)));
    // 0569b4  call dword ptr [0x4b4c0]
    X86_AT(c, 0x569b4u);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4B4C0u))); push32(c, 0x569bau); x86_call(c, t); X86_RET(c, 0x569bau); }
    X86_TICK(c, 7);
    // 0569ba  jmp 0x56ac3
    X86_AT(c, 0x569bau);
    goto L_56ac3;
L_569bf:
    X86_TICK(c, 12);
    // 0569bf  cmp dword ptr [0x4b4b4], 0
    X86_AT(c, 0x569bfu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x4B4B4u))), 0x0u, 0, 4);
    // 0569c6  jne 0x569d7
    X86_AT(c, 0x569c6u);
    if (x86_cc(c, 5)) { goto L_569d7; }
    X86_TICK(c, 12);
    // 0569c8  test byte ptr [0x4b4ac], 8
    X86_AT(c, 0x569c8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x8u, 1);
    // 0569cf  jne 0x569d7
    X86_AT(c, 0x569cfu);
    if (x86_cc(c, 5)) { goto L_569d7; }
    X86_TICK(c, 9);
    // 0569d1  mov byte ptr [ebp - 0x19], 0
    X86_AT(c, 0x569d1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u)), 0x0u);
    // 0569d5  jmp 0x569db
    X86_AT(c, 0x569d5u);
    goto L_569db;
L_569d7:
    X86_TICK(c, 2);
    // 0569d7  mov byte ptr [ebp - 0x19], 1
    X86_AT(c, 0x569d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u)), 0x1u);
L_569db:
    X86_TICK(c, 16);
    // 0569db  mov al, byte ptr [ebp - 0x19]
    X86_AT(c, 0x569dbu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE7u))));
    // 0569de  mov byte ptr [0x4b8d3], al
    X86_AT(c, 0x569deu);
    wr8((c.sbase[3] + (uint32_t)(0x4B8D3u)), g8(c, 0));
    // 0569e3  movzx eax, bl
    X86_AT(c, 0x569e3u);
    c.r[0] = g8(c, 3);
    // 0569e6  cmp eax, 0x45
    X86_AT(c, 0x569e6u);
    (void)x86_sub(c, c.r[0], 0x45u, 0, 4);
    // 0569e9  je 0x56a25
    X86_AT(c, 0x569e9u);
    if (x86_cc(c, 4)) { goto L_56a25; }
    X86_TICK(c, 7);
    // 0569eb  cmp eax, 0x47
    X86_AT(c, 0x569ebu);
    (void)x86_sub(c, c.r[0], 0x47u, 0, 4);
    // 0569ee  je 0x56a2e
    X86_AT(c, 0x569eeu);
    if (x86_cc(c, 4)) { goto L_56a2e; }
    X86_TICK(c, 7);
    // 0569f0  cmp eax, 0x65
    X86_AT(c, 0x569f0u);
    (void)x86_sub(c, c.r[0], 0x65u, 0, 4);
    // 0569f3  je 0x56a25
    X86_AT(c, 0x569f3u);
    if (x86_cc(c, 4)) { goto L_56a25; }
    X86_TICK(c, 7);
    // 0569f5  cmp eax, 0x66
    X86_AT(c, 0x569f5u);
    (void)x86_sub(c, c.r[0], 0x66u, 0, 4);
    // 0569f8  je 0x56a04
    X86_AT(c, 0x569f8u);
    if (x86_cc(c, 4)) { goto L_56a04; }
    X86_TICK(c, 7);
    // 0569fa  cmp eax, 0x67
    X86_AT(c, 0x569fau);
    (void)x86_sub(c, c.r[0], 0x67u, 0, 4);
    // 0569fd  je 0x56a2e
    X86_AT(c, 0x569fdu);
    if (x86_cc(c, 4)) { goto L_56a2e; }
    X86_TICK(c, 7);
    // 0569ff  jmp 0x56aa4
    X86_AT(c, 0x569ffu);
    goto L_56aa4;
L_56a04:
    X86_TICK(c, 13);
    // 056a04  mov eax, 1
    X86_AT(c, 0x56a04u);
    c.r[0] = 0x1u;
    // 056a09  mov edx, dword ptr [0x4b8bc]
    X86_AT(c, 0x56a09u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B8BCu)));
    // 056a0f  cmp eax, edx
    X86_AT(c, 0x56a0fu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 056a11  jl 0x56a14
    X86_AT(c, 0x56a11u);
    if (x86_cc(c, 12)) { goto L_56a14; }
    X86_TICK(c, 3);
    // 056a13  xchg edx, eax
    X86_AT(c, 0x56a13u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_56a14:
    X86_TICK(c, 21);
    // 056a14  add edx, dword ptr [0x4b4b4]
    X86_AT(c, 0x56a14u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x4B4B4u))), 0, 4); }
    // 056a1a  movzx eax, byte ptr [0x4b8d3]
    X86_AT(c, 0x56a1au);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0x4B8D3u)));
    // 056a21  add eax, edx
    X86_AT(c, 0x56a21u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[2], 0, 4); }
    // 056a23  jmp 0x56a5e
    X86_AT(c, 0x56a23u);
    goto L_56a5e;
L_56a25:
    X86_TICK(c, 9);
    // 056a25  mov ecx, ebp
    X86_AT(c, 0x56a25u);
    c.r[1] = c.r[5];
    // 056a27  call 0x568d4
    X86_AT(c, 0x56a27u);
    push32(c, 0x56a2cu); x86_call_known(c, 0x568d4u, f_000568d4); X86_RET(c, 0x56a2cu);
    X86_TICK(c, 7);
    // 056a2c  jmp 0x56a5e
    X86_AT(c, 0x56a2cu);
    goto L_56a5e;
L_56a2e:
    X86_TICK(c, 12);
    // 056a2e  cmp dword ptr [0x4b4b4], 0
    X86_AT(c, 0x56a2eu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0x4B4B4u))), 0x0u, 0, 4);
    // 056a35  jne 0x56a43
    X86_AT(c, 0x56a35u);
    if (x86_cc(c, 5)) { goto L_56a43; }
    X86_TICK(c, 9);
    // 056a37  mov dword ptr [0x4b8b8], 0
    X86_AT(c, 0x56a37u);
    wr32((c.sbase[3] + (uint32_t)(0x4B8B8u)), 0x0u);
    // 056a41  jmp 0x56aa4
    X86_AT(c, 0x56a41u);
    goto L_56aa4;
L_56a43:
    X86_TICK(c, 13);
    // 056a43  mov eax, dword ptr [0x4b8bc]
    X86_AT(c, 0x56a43u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B8BCu)));
    // 056a48  dec eax
    X86_AT(c, 0x56a48u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 056a49  cmp eax, 0xfffffffc
    X86_AT(c, 0x56a49u);
    (void)x86_sub(c, c.r[0], 0xFFFFFFFCu, 0, 4);
    // 056a4c  jl 0x56a56
    X86_AT(c, 0x56a4cu);
    if (x86_cc(c, 12)) { goto L_56a56; }
    X86_TICK(c, 11);
    // 056a4e  cmp eax, dword ptr [0x4b4b4]
    X86_AT(c, 0x56a4eu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x4B4B4u))), 0, 4);
    // 056a54  jle 0x56a65
    X86_AT(c, 0x56a54u);
    if (x86_cc(c, 14)) { goto L_56a65; }
L_56a56:
    X86_TICK(c, 9);
    // 056a56  mov ecx, ebp
    X86_AT(c, 0x56a56u);
    c.r[1] = c.r[5];
    // 056a58  call 0x568d4
    X86_AT(c, 0x56a58u);
    push32(c, 0x56a5du); x86_call_known(c, 0x568d4u, f_000568d4); X86_RET(c, 0x56a5du);
    X86_TICK(c, 2);
    // 056a5d  dec eax
    X86_AT(c, 0x56a5du);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_56a5e:
    X86_TICK(c, 9);
    // 056a5e  mov dword ptr [0x4b8b8], eax
    X86_AT(c, 0x56a5eu);
    wr32((c.sbase[3] + (uint32_t)(0x4B8B8u)), c.r[0]);
    // 056a63  jmp 0x56a9e
    X86_AT(c, 0x56a63u);
    goto L_56a9e;
L_56a65:
    X86_TICK(c, 42);
    // 056a65  movzx eax, byte ptr [0x4b8d3]
    X86_AT(c, 0x56a65u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(0x4B8D3u)));
    // 056a6c  add eax, dword ptr [0x4b4b4]
    X86_AT(c, 0x56a6cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0x4B4B4u))), 0, 4); }
    // 056a72  mov edx, dword ptr [0x4b8bc]
    X86_AT(c, 0x56a72u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B8BCu)));
    // 056a78  dec edx
    X86_AT(c, 0x56a78u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 056a79  mov ecx, dword ptr [0x4b4b4]
    X86_AT(c, 0x56a79u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4B4u)));
    // 056a7f  cmp edx, ecx
    X86_AT(c, 0x56a7fu);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 056a81  sete dl
    X86_AT(c, 0x56a81u);
    s8(c, 2, x86_cc(c, 4) ? 1u : 0u);
    // 056a84  movzx edx, dl
    X86_AT(c, 0x56a84u);
    c.r[2] = g8(c, 2);
    // 056a87  add edx, eax
    X86_AT(c, 0x56a87u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, c.r[0], 0, 4); }
    // 056a89  mov dword ptr [0x4b8b8], edx
    X86_AT(c, 0x56a89u);
    wr32((c.sbase[3] + (uint32_t)(0x4B8B8u)), c.r[2]);
    // 056a8f  and ecx, ecx
    X86_AT(c, 0x56a8fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & c.r[1], 4); }
    // 056a91  jne 0x56a99
    X86_AT(c, 0x56a91u);
    if (x86_cc(c, 5)) { goto L_56a99; }
    X86_TICK(c, 6);
    // 056a93  inc dword ptr [0x4b8b8]
    X86_AT(c, 0x56a93u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B8B8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_56a99:
    X86_TICK(c, 4);
    // 056a99  mov eax, dword ptr [0x4b8b8]
    X86_AT(c, 0x56a99u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B8B8u)));
L_56a9e:
    X86_TICK(c, 7);
    // 056a9e  add dword ptr [0x4b4bc], eax
    X86_AT(c, 0x56a9eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4BCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_56aa4:
    X86_TICK(c, 13);
    // 056aa4  mov byte ptr [0x4b8b0], 0
    X86_AT(c, 0x56aa4u);
    wr8((c.sbase[3] + (uint32_t)(0x4B8B0u)), 0x0u);
    // 056aab  push ebx
    X86_AT(c, 0x56aabu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 056aac  mov ecx, ebp
    X86_AT(c, 0x56aacu);
    c.r[1] = c.r[5];
    // 056aae  call 0x56800
    X86_AT(c, 0x56aaeu);
    push32(c, 0x56ab3u); x86_call_known(c, 0x56800u, f_00056800); X86_RET(c, 0x56ab3u);
    X86_TICK(c, 12);
    // 056ab3  cmp byte ptr [0x4b8b0], 0
    X86_AT(c, 0x56ab3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B8B0u))), 0x0u, 0, 1);
    // 056aba  jne 0x56ac3
    X86_AT(c, 0x56abau);
    if (x86_cc(c, 5)) { goto L_56ac3; }
    X86_TICK(c, 9);
    // 056abc  mov ecx, ebp
    X86_AT(c, 0x56abcu);
    c.r[1] = c.r[5];
    // 056abe  call 0x56224
    X86_AT(c, 0x56abeu);
    push32(c, 0x56ac3u); x86_call_known(c, 0x56224u, f_00056224); X86_RET(c, 0x56ac3u);
L_56ac3:
    X86_TICK(c, 28);
    // 056ac3  pop edi
    X86_AT(c, 0x56ac3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 056ac4  pop esi
    X86_AT(c, 0x56ac4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 056ac5  pop ebx
    X86_AT(c, 0x56ac5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 056ac6  leave 
    X86_AT(c, 0x56ac6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 056ac7  ret 0x10
    X86_AT(c, 0x56ac7u);
    c.eip = pop32(c); c.r[4] += 0x10u; return;
    x86_fault(c, 0x56928u, "ran off the end of a function");
}
void f_00056ae8(X86Cpu& c) {
L_56ae8:
    X86_TICK(c, 13);
    // 056ae8  mov eax, dword ptr [0x4b8d4]
    X86_AT(c, 0x56ae8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B8D4u)));
    // 056aed  mov edx, 0x56acc
    X86_AT(c, 0x56aedu);
    c.r[2] = 0x56ACCu;
    // 056af2  cmp edx, eax
    X86_AT(c, 0x56af2u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 056af4  je 0x56aff
    X86_AT(c, 0x56af4u);
    if (x86_cc(c, 4)) { goto L_56aff; }
    X86_TICK(c, 7);
    // 056af6  call eax
    X86_AT(c, 0x56af6u);
    { uint32_t t = c.r[0]; push32(c, 0x56af8u); x86_call(c, t); X86_RET(c, 0x56af8u); }
    X86_TICK(c, 9);
    // 056af8  mov dword ptr [0x4b8d4], eax
    X86_AT(c, 0x56af8u);
    wr32((c.sbase[3] + (uint32_t)(0x4B8D4u)), c.r[0]);
    // 056afd  jmp 0x56ae8
    X86_AT(c, 0x56afdu);
    X86_POLL(c, 0x56ae8u); goto L_56ae8;
L_56aff:
    X86_TICK(c, 10);
    // 056aff  ret 
    X86_AT(c, 0x56affu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x56ae8u, "ran off the end of a function");
}
void f_00056b10(X86Cpu& c) {
    X86_TICK(c, 23);
    // 056b10  enter 4, 0
    X86_AT(c, 0x56b10u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 056b14  mov al, byte ptr [ebp + 8]
    X86_AT(c, 0x56b14u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 056b17  add al, 0x30
    X86_AT(c, 0x56b17u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, 0x30u, 0, 1)); }
    // 056b19  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x56b19u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 056b1c  push 0x1738
    X86_AT(c, 0x56b1cu);
    { uint32_t v = 0x1738u; push32(c, v); }
    // 056b21  call 0x56c28
    X86_AT(c, 0x56b21u);
    push32(c, 0x56b26u); x86_call_known(c, 0x56c28u, f_00056c28); X86_RET(c, 0x56b26u);
    X86_TICK(c, 11);
    // 056b26  lea eax, [ebp - 4]
    X86_AT(c, 0x56b26u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFCu);
    // 056b29  push eax
    X86_AT(c, 0x56b29u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056b2a  call 0x56c28
    X86_AT(c, 0x56b2au);
    push32(c, 0x56b2fu); x86_call_known(c, 0x56c28u, f_00056c28); X86_RET(c, 0x56b2fu);
    X86_TICK(c, 7);
    // 056b2f  call 0x56c44
    X86_AT(c, 0x56b2fu);
    push32(c, 0x56b34u); x86_call_known(c, 0x56c44u, f_00056c44); X86_RET(c, 0x56b34u);
    X86_TICK(c, 13);
    // 056b34  mov ax, word ptr [0x4b8dc]
    X86_AT(c, 0x56b34u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4B8DCu))));
    // 056b3a  push eax
    X86_AT(c, 0x56b3au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056b3b  call 0x56c14
    X86_AT(c, 0x56b3bu);
    push32(c, 0x56b40u); x86_call_known(c, 0x56c14u, f_00056c14); X86_RET(c, 0x56b40u);
    X86_TICK(c, 9);
    // 056b40  push 0x1754
    X86_AT(c, 0x56b40u);
    { uint32_t v = 0x1754u; push32(c, v); }
    // 056b45  call 0x56c28
    X86_AT(c, 0x56b45u);
    push32(c, 0x56b4au); x86_call_known(c, 0x56c28u, f_00056c28); X86_RET(c, 0x56b4au);
    X86_TICK(c, 7);
    // 056b4a  call 0x56c44
    X86_AT(c, 0x56b4au);
    push32(c, 0x56b4fu); x86_call_known(c, 0x56c44u, f_00056c44); X86_RET(c, 0x56b4fu);
    X86_TICK(c, 9);
    // 056b4f  push 0xffffffff
    X86_AT(c, 0x56b4fu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 056b51  call 0x55cac
    X86_AT(c, 0x56b51u);
    push32(c, 0x56b56u); x86_call_known(c, 0x55cacu, f_00055cac); X86_RET(c, 0x56b56u);
    X86_TICK(c, 16);
    // 056b56  leave 
    X86_AT(c, 0x56b56u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 056b57  ret 8
    X86_AT(c, 0x56b57u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x56b10u, "ran off the end of a function");
}
void f_00056b78(X86Cpu& c) {
    X86_TICK(c, 95);
    // 056b78  push esi
    X86_AT(c, 0x56b78u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056b79  push edi
    X86_AT(c, 0x56b79u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056b7a  push ebx
    X86_AT(c, 0x56b7au);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 056b7b  push ebp
    X86_AT(c, 0x56b7bu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 056b7c  push ds
    X86_AT(c, 0x56b7cu);
    push32(c, c.sreg[3]);
    // 056b7d  push es
    X86_AT(c, 0x56b7du);
    push32(c, c.sreg[0]);
    // 056b7e  mov eax, dword ptr [0x4b824]
    X86_AT(c, 0x56b7eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B824u)));
    // 056b83  mov ebx, dword ptr [0x4b828]
    X86_AT(c, 0x56b83u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x4B828u)));
    // 056b89  mov ecx, dword ptr [0x4b82c]
    X86_AT(c, 0x56b89u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B82Cu)));
    // 056b8f  mov edx, dword ptr [0x4b830]
    X86_AT(c, 0x56b8fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B830u)));
    // 056b95  mov esi, dword ptr [0x4b834]
    X86_AT(c, 0x56b95u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x4B834u)));
    // 056b9b  mov edi, dword ptr [0x4b838]
    X86_AT(c, 0x56b9bu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x4B838u)));
    // 056ba1  push dword ptr [0x4b840]
    X86_AT(c, 0x56ba1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4B840u))); push32(c, v); }
    // 056ba7  pop es
    X86_AT(c, 0x56ba7u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 056ba8  push ds
    X86_AT(c, 0x56ba8u);
    push32(c, c.sreg[3]);
    // 056ba9  push dword ptr [0x4b83c]
    X86_AT(c, 0x56ba9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4B83Cu))); push32(c, v); }
    // 056baf  pop ds
    X86_AT(c, 0x56bafu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 056bb0  clc 
    X86_AT(c, 0x56bb0u);
    c.fl &= ~X86_CF;
    // 056bb1  int 0x21
    X86_AT(c, 0x56bb1u);
    x86_int(c, 0x21, 0x56bb3u);
    X86_TICK(c, 77);
    // 056bb3  pop ebp
    X86_AT(c, 0x56bb3u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 056bb4  push ds
    X86_AT(c, 0x56bb4u);
    push32(c, c.sreg[3]);
    // 056bb5  mov ds, ebp
    X86_AT(c, 0x56bb5u);
    x86_load_seg(c, 3, (c.r[5] & 0xFFFFu) & 0xFFFFu);
    // 056bb7  pop dword ptr [0x4b83c]
    X86_AT(c, 0x56bb7u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0x4B83Cu)), v); }
    // 056bbd  push es
    X86_AT(c, 0x56bbdu);
    push32(c, c.sreg[0]);
    // 056bbe  pop dword ptr [0x4b840]
    X86_AT(c, 0x56bbeu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0x4B840u)), v); }
    // 056bc4  mov dword ptr [0x4b824], eax
    X86_AT(c, 0x56bc4u);
    wr32((c.sbase[3] + (uint32_t)(0x4B824u)), c.r[0]);
    // 056bc9  mov dword ptr [0x4b828], ebx
    X86_AT(c, 0x56bc9u);
    wr32((c.sbase[3] + (uint32_t)(0x4B828u)), c.r[3]);
    // 056bcf  mov dword ptr [0x4b82c], ecx
    X86_AT(c, 0x56bcfu);
    wr32((c.sbase[3] + (uint32_t)(0x4B82Cu)), c.r[1]);
    // 056bd5  mov dword ptr [0x4b830], edx
    X86_AT(c, 0x56bd5u);
    wr32((c.sbase[3] + (uint32_t)(0x4B830u)), c.r[2]);
    // 056bdb  mov dword ptr [0x4b834], esi
    X86_AT(c, 0x56bdbu);
    wr32((c.sbase[3] + (uint32_t)(0x4B834u)), c.r[6]);
    // 056be1  mov dword ptr [0x4b838], edi
    X86_AT(c, 0x56be1u);
    wr32((c.sbase[3] + (uint32_t)(0x4B838u)), c.r[7]);
    // 056be7  pushf 
    X86_AT(c, 0x56be7u);
    push16(c, c.fl & 0xFFFFu);
    // 056be9  pop word ptr [0x4b844]
    X86_AT(c, 0x56be9u);
    { uint32_t v = pop16(c); wr16((c.sbase[3] + (uint32_t)(0x4B844u)), v); }
    // 056bf0  pop es
    X86_AT(c, 0x56bf0u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 056bf1  pop ds
    X86_AT(c, 0x56bf1u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 056bf2  pop ebp
    X86_AT(c, 0x56bf2u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 056bf3  pop ebx
    X86_AT(c, 0x56bf3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 056bf4  pop edi
    X86_AT(c, 0x56bf4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 056bf5  pop esi
    X86_AT(c, 0x56bf5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 056bf6  ret 
    X86_AT(c, 0x56bf6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x56b78u, "ran off the end of a function");
}
void f_00056c14(X86Cpu& c) {
    X86_TICK(c, 9);
    // 056c14  push 0x1790
    X86_AT(c, 0x56c14u);
    { uint32_t v = 0x1790u; push32(c, v); }
    // 056c19  call 0x56c28
    X86_AT(c, 0x56c19u);
    push32(c, 0x56c1eu); x86_call_known(c, 0x56c28u, f_00056c28); X86_RET(c, 0x56c1eu);
    X86_TICK(c, 7);
    // 056c1e  call 0x56c44
    X86_AT(c, 0x56c1eu);
    push32(c, 0x56c23u); x86_call_known(c, 0x56c44u, f_00056c44); X86_RET(c, 0x56c23u);
    X86_TICK(c, 10);
    // 056c23  ret 4
    X86_AT(c, 0x56c23u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x56c14u, "ran off the end of a function");
}
void f_00056c28(X86Cpu& c) {
    X86_TICK(c, 31);
    // 056c28  push ebp
    X86_AT(c, 0x56c28u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 056c29  mov ebp, esp
    X86_AT(c, 0x56c29u);
    c.r[5] = c.r[4];
    // 056c2b  push edi
    X86_AT(c, 0x56c2bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056c2c  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x56c2cu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 056c2f  movzx eax, word ptr [edi]
    X86_AT(c, 0x56c2fu);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(c.r[7])));
    // 056c32  push eax
    X86_AT(c, 0x56c32u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056c33  lea eax, [edi + 2]
    X86_AT(c, 0x56c33u);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 056c36  push eax
    X86_AT(c, 0x56c36u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056c37  push 2
    X86_AT(c, 0x56c37u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 056c39  call 0x55d0c
    X86_AT(c, 0x56c39u);
    push32(c, 0x56c3eu); x86_call_known(c, 0x55d0cu, f_00055d0c); X86_RET(c, 0x56c3eu);
    X86_TICK(c, 20);
    // 056c3e  pop edi
    X86_AT(c, 0x56c3eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 056c3f  leave 
    X86_AT(c, 0x56c3fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 056c40  ret 4
    X86_AT(c, 0x56c40u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x56c28u, "ran off the end of a function");
}
void f_00056c44(X86Cpu& c) {
    X86_TICK(c, 19);
    // 056c44  movzx eax, word ptr [0x4b48c]
    X86_AT(c, 0x56c44u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x4B48Cu)));
    // 056c4b  push eax
    X86_AT(c, 0x56c4bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056c4c  push 0x4b48e
    X86_AT(c, 0x56c4cu);
    { uint32_t v = 0x4B48Eu; push32(c, v); }
    // 056c51  push 2
    X86_AT(c, 0x56c51u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 056c53  call 0x55d0c
    X86_AT(c, 0x56c53u);
    push32(c, 0x56c58u); x86_call_known(c, 0x55d0cu, f_00055d0c); X86_RET(c, 0x56c58u);
    X86_TICK(c, 10);
    // 056c58  ret 
    X86_AT(c, 0x56c58u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x56c44u, "ran off the end of a function");
}
void f_00056c5c(X86Cpu& c) {
    X86_TICK(c, 55);
    // 056c5c  enter 0xc, 0
    X86_AT(c, 0x56c5cu);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 056c60  push ebx
    X86_AT(c, 0x56c60u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 056c61  push esi
    X86_AT(c, 0x56c61u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056c62  push edi
    X86_AT(c, 0x56c62u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056c63  mov di, word ptr [ebp + 0xc]
    X86_AT(c, 0x56c63u);
    s16(c, 7, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 056c67  sub esi, esi
    X86_AT(c, 0x56c67u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 056c69  push esi
    X86_AT(c, 0x56c69u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056c6a  mov esi, 0x17b8
    X86_AT(c, 0x56c6au);
    c.r[6] = 0x17B8u;
    // 056c6f  push edi
    X86_AT(c, 0x56c6fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056c70  lea edi, [ebp - 0xc]
    X86_AT(c, 0x56c70u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 056c73  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x56c73u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 056c74  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x56c74u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 056c75  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x56c75u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 056c77  pop edi
    X86_AT(c, 0x56c77u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 056c78  pop esi
    X86_AT(c, 0x56c78u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_56c79:
    X86_TICK(c, 10);
    // 056c79  mov eax, edi
    X86_AT(c, 0x56c79u);
    c.r[0] = c.r[7];
    // 056c7b  rcr ax, 1
    X86_AT(c, 0x56c7bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 056c7e  jae 0x56cba
    X86_AT(c, 0x56c7eu);
    if (x86_cc(c, 3)) { goto L_56cba; }
    X86_TICK(c, 23);
    // 056c80  movzx eax, si
    X86_AT(c, 0x56c80u);
    c.r[0] = (c.r[6] & 0xFFFFu);
    // 056c83  lea eax, [eax*4]
    X86_AT(c, 0x56c83u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 056c8a  lea eax, [eax + eax*2]
    X86_AT(c, 0x56c8au);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 2);
    // 056c8d  movsx eax, ax
    X86_AT(c, 0x56c8du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 056c90  lea edx, [ebp - 0xc]
    X86_AT(c, 0x56c90u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 056c93  push edx
    X86_AT(c, 0x56c93u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 056c94  mov ebx, eax
    X86_AT(c, 0x56c94u);
    c.r[3] = c.r[0];
    // 056c96  call 0x56f80
    X86_AT(c, 0x56c96u);
    push32(c, 0x56c9bu); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x56c9bu);
    X86_TICK(c, 13);
    // 056c9b  lea eax, [ebx*1 + 0x4b8ec]
    X86_AT(c, 0x56c9bu);
    c.r[0] = (uint32_t)(c.r[3] + 0x4B8ECu);
    // 056ca2  push eax
    X86_AT(c, 0x56ca2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056ca3  mov ebx, eax
    X86_AT(c, 0x56ca3u);
    c.r[3] = c.r[0];
    // 056ca5  call 0x56f80
    X86_AT(c, 0x56ca5u);
    push32(c, 0x56caau); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x56caau);
    X86_TICK(c, 7);
    // 056caa  call 0x570f0
    X86_AT(c, 0x56caau);
    push32(c, 0x56cafu); x86_call_known(c, 0x570f0u, f_000570f0); X86_RET(c, 0x56cafu);
    X86_TICK(c, 13);
    // 056caf  lea eax, [ebp - 0xc]
    X86_AT(c, 0x56cafu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 056cb2  push eax
    X86_AT(c, 0x56cb2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056cb3  mov ebx, eax
    X86_AT(c, 0x56cb3u);
    c.r[3] = c.r[0];
    // 056cb5  call 0x56fe0
    X86_AT(c, 0x56cb5u);
    push32(c, 0x56cbau); x86_call_known(c, 0x56fe0u, f_00056fe0); X86_RET(c, 0x56cbau);
L_56cba:
    X86_TICK(c, 12);
    // 056cba  shr di, 1
    X86_AT(c, 0x56cbau);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 7, r); }
    // 056cbd  inc esi
    X86_AT(c, 0x56cbdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 056cbe  and di, di
    X86_AT(c, 0x56cbeu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 056cc1  jne 0x56c79
    X86_AT(c, 0x56cc1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x56c79u); goto L_56c79; }
    X86_TICK(c, 71);
    // 056cc3  lea eax, [ebp - 0xc]
    X86_AT(c, 0x56cc3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 056cc6  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x56cc6u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 056cc9  push esi
    X86_AT(c, 0x56cc9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056cca  push edi
    X86_AT(c, 0x56ccau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056ccb  mov esi, eax
    X86_AT(c, 0x56ccbu);
    c.r[6] = c.r[0];
    // 056ccd  mov edi, edx
    X86_AT(c, 0x56ccdu);
    c.r[7] = c.r[2];
    // 056ccf  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x56ccfu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 056cd0  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x56cd0u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 056cd1  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x56cd1u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 056cd3  pop edi
    X86_AT(c, 0x56cd3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 056cd4  pop esi
    X86_AT(c, 0x56cd4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 056cd5  pop edi
    X86_AT(c, 0x56cd5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 056cd6  pop esi
    X86_AT(c, 0x56cd6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 056cd7  pop ebx
    X86_AT(c, 0x56cd7u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 056cd8  leave 
    X86_AT(c, 0x56cd8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 056cd9  ret 8
    X86_AT(c, 0x56cd9u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x56c5cu, "ran off the end of a function");
}
void f_00056cdc(X86Cpu& c) {
    X86_TICK(c, 20);
    // 056cdc  push ebp
    X86_AT(c, 0x56cdcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 056cdd  mov ebp, esp
    X86_AT(c, 0x56cddu);
    c.r[5] = c.r[4];
    // 056cdf  push esi
    X86_AT(c, 0x56cdfu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056ce0  push edi
    X86_AT(c, 0x56ce0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056ce1  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x56ce1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 056ce4  call 0x56f80
    X86_AT(c, 0x56ce4u);
    push32(c, 0x56ce9u); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x56ce9u);
    X86_TICK(c, 7);
    // 056ce9  call 0x5795c
    X86_AT(c, 0x56ce9u);
    push32(c, 0x56ceeu); x86_call_known(c, 0x5795cu, f_0005795c); X86_RET(c, 0x56ceeu);
    X86_TICK(c, 15);
    // 056cee  xchg edi, eax
    X86_AT(c, 0x56ceeu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 056cef  and di, 0x4700
    X86_AT(c, 0x56cefu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & 0x4700u, 2)); }
    // 056cf4  shr di, 8
    X86_AT(c, 0x56cf4u);
    { uint32_t v = (c.r[7] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 7, r); }
    // 056cf8  call 0x578cc
    X86_AT(c, 0x56cf8u);
    push32(c, 0x56cfdu); x86_call_known(c, 0x578ccu, f_000578cc); X86_RET(c, 0x56cfdu);
    X86_TICK(c, 7);
    // 056cfd  cmp di, 0x10
    X86_AT(c, 0x56cfdu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x10u, 0, 2);
    // 056d01  jbe 0x56d0d
    X86_AT(c, 0x56d01u);
    if (x86_cc(c, 6)) { goto L_56d0d; }
    X86_TICK(c, 4);
    // 056d03  and di, 7
    X86_AT(c, 0x56d03u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & 0x7u, 2)); }
    // 056d08  or di, 8
    X86_AT(c, 0x56d08u);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v | 0x8u, 2)); }
L_56d0d:
    X86_TICK(c, 10);
    // 056d0d  movzx eax, di
    X86_AT(c, 0x56d0du);
    c.r[0] = (c.r[7] & 0xFFFFu);
    // 056d10  cmp eax, 0xe
    X86_AT(c, 0x56d10u);
    (void)x86_sub(c, c.r[0], 0xEu, 0, 4);
    // 056d13  ja 0x56d8c
    X86_AT(c, 0x56d13u);
    if (x86_cc(c, 7)) { goto L_56d8c; }
    X86_TICK(c, 7);
    // 056d19  jmp dword ptr cs:[eax*4 + 0x56d21]
    X86_AT(c, 0x56d19u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x56D21u)));
      switch (t) {
      case 0x56d5du: goto L_56d5d;
      case 0x56d64u: goto L_56d64;
      case 0x56d73u: goto L_56d73;
      case 0x56d7au: goto L_56d7a;
      case 0x56d8cu: goto L_56d8c;
      default: x86_jump(c, t); return; } }
L_56d5d:
    X86_TICK(c, 9);
    // 056d5d  mov esi, 0x17c4
    X86_AT(c, 0x56d5du);
    c.r[6] = 0x17C4u;
    // 056d62  jmp 0x56d7f
    X86_AT(c, 0x56d62u);
    goto L_56d7f;
L_56d64:
    X86_TICK(c, 15);
    // 056d64  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x56d64u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 056d67  mov dword ptr [eax], 0x414e0003
    X86_AT(c, 0x56d67u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), 0x414E0003u);
    // 056d6d  mov byte ptr [eax + 4], 0x4e
    X86_AT(c, 0x56d6du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), 0x4Eu);
    // 056d71  jmp 0x56d94
    X86_AT(c, 0x56d71u);
    goto L_56d94;
L_56d73:
    X86_TICK(c, 9);
    // 056d73  mov esi, 0x17d0
    X86_AT(c, 0x56d73u);
    c.r[6] = 0x17D0u;
    // 056d78  jmp 0x56d7f
    X86_AT(c, 0x56d78u);
    goto L_56d7f;
L_56d7a:
    X86_TICK(c, 2);
    // 056d7a  mov esi, 0x17dc
    X86_AT(c, 0x56d7au);
    c.r[6] = 0x17DCu;
L_56d7f:
    X86_TICK(c, 40);
    // 056d7f  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x56d7fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 056d82  push edi
    X86_AT(c, 0x56d82u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056d83  mov edi, eax
    X86_AT(c, 0x56d83u);
    c.r[7] = c.r[0];
    // 056d85  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x56d85u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 056d86  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x56d86u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 056d87  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x56d87u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 056d89  pop edi
    X86_AT(c, 0x56d89u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 056d8a  jmp 0x56d94
    X86_AT(c, 0x56d8au);
    goto L_56d94;
L_56d8c:
    X86_TICK(c, 6);
    // 056d8c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x56d8cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 056d8f  mov word ptr [eax], 0
    X86_AT(c, 0x56d8fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
L_56d94:
    X86_TICK(c, 24);
    // 056d94  pop edi
    X86_AT(c, 0x56d94u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 056d95  pop esi
    X86_AT(c, 0x56d95u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 056d96  leave 
    X86_AT(c, 0x56d96u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 056d97  ret 8
    X86_AT(c, 0x56d97u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x56cdcu, "ran off the end of a function");
}
void f_00056d9c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 056d9c  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x56d9cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 056da0  mov edx, dword ptr [eax]
    X86_AT(c, 0x56da0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 056da2  or edx, dword ptr [eax + 4]
    X86_AT(c, 0x56da2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))), 4); }
    // 056da5  and edx, edx
    X86_AT(c, 0x56da5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 056da7  jne 0x56dad
    X86_AT(c, 0x56da7u);
    if (x86_cc(c, 5)) { goto L_56dad; }
    X86_TICK(c, 9);
    // 056da9  sub eax, eax
    X86_AT(c, 0x56da9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 056dab  jmp 0x56dbc
    X86_AT(c, 0x56dabu);
    goto L_56dbc;
L_56dad:
    X86_TICK(c, 12);
    // 056dad  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x56dadu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 056db1  mov ax, word ptr [eax + 8]
    X86_AT(c, 0x56db1u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u))));
    // 056db5  and ah, 0x7f
    X86_AT(c, 0x56db5u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x7Fu, 1)); }
    // 056db8  sub ax, 0x3fff
    X86_AT(c, 0x56db8u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
L_56dbc:
    X86_TICK(c, 10);
    // 056dbc  ret 4
    X86_AT(c, 0x56dbcu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x56d9cu, "ran off the end of a function");
}
void f_00056dc0(X86Cpu& c) {
    X86_TICK(c, 16);
    // 056dc0  push ebp
    X86_AT(c, 0x56dc0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 056dc1  mov ebp, esp
    X86_AT(c, 0x56dc1u);
    c.r[5] = c.r[4];
    // 056dc3  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x56dc3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 056dc6  call 0x56f80
    X86_AT(c, 0x56dc6u);
    push32(c, 0x56dcbu); x86_call_known(c, 0x56f80u, f_00056f80); X86_RET(c, 0x56dcbu);
    X86_TICK(c, 12);
    // 056dcb  push dword ptr [ebp + 8]
    X86_AT(c, 0x56dcbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 056dce  call 0x57b14
    X86_AT(c, 0x56dceu);
    push32(c, 0x56dd3u); x86_call_known(c, 0x57b14u, f_00057b14); X86_RET(c, 0x56dd3u);
    X86_TICK(c, 16);
    // 056dd3  leave 
    X86_AT(c, 0x56dd3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 056dd4  ret 8
    X86_AT(c, 0x56dd4u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x56dc0u, "ran off the end of a function");
}
void f_00056df0(X86Cpu& c) {
    X86_TICK(c, 24);
    // 056df0  enter 8, 0
    X86_AT(c, 0x56df0u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 056df4  push ebx
    X86_AT(c, 0x56df4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 056df5  push esi
    X86_AT(c, 0x56df5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056df6  push edi
    X86_AT(c, 0x56df6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056df7  cmp byte ptr [0x4b593], 0
    X86_AT(c, 0x56df7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B593u))), 0x0u, 0, 1);
    // 056dfe  je 0x56e16
    X86_AT(c, 0x56dfeu);
    if (x86_cc(c, 4)) { goto L_56e16; }
    X86_TICK(c, 20);
    // 056e00  push dword ptr [0x4ba24]
    X86_AT(c, 0x56e00u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4BA24u))); push32(c, v); }
    // 056e06  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x56e06u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 056e0b  sub eax, 0xc
    X86_AT(c, 0x56e0bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 056e0e  push eax
    X86_AT(c, 0x56e0eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056e0f  call 0x5748d
    X86_AT(c, 0x56e0fu);
    push32(c, 0x56e14u); x86_call_known(c, 0x5748du, f_0005748d); X86_RET(c, 0x56e14u);
    X86_TICK(c, 7);
    // 056e14  jmp 0x56e6a
    X86_AT(c, 0x56e14u);
    goto L_56e6a;
L_56e16:
    X86_TICK(c, 33);
    // 056e16  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x56e16u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 056e1b  lea esi, [eax - 0xc]
    X86_AT(c, 0x56e1bu);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 056e1e  xchg edi, eax
    X86_AT(c, 0x56e1eu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 056e1f  mov ax, word ptr [edi + 8]
    X86_AT(c, 0x56e1fu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))));
    // 056e23  cmp ax, word ptr [esi + 8]
    X86_AT(c, 0x56e23u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2);
    // 056e27  setb al
    X86_AT(c, 0x56e27u);
    s8(c, 0, x86_cc(c, 2) ? 1u : 0u);
    // 056e2a  xchg ebx, eax
    X86_AT(c, 0x56e2au);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 056e2b  and bl, bl
    X86_AT(c, 0x56e2bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 056e2d  je 0x56e37
    X86_AT(c, 0x56e2du);
    if (x86_cc(c, 4)) { goto L_56e37; }
    X86_TICK(c, 8);
    // 056e2f  mov dword ptr [ebp - 8], esi
    X86_AT(c, 0x56e2fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[6]);
    // 056e32  mov esi, edi
    X86_AT(c, 0x56e32u);
    c.r[6] = c.r[7];
    // 056e34  mov edi, dword ptr [ebp - 8]
    X86_AT(c, 0x56e34u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
L_56e37:
    X86_TICK(c, 19);
    // 056e37  mov ax, word ptr [edi + 8]
    X86_AT(c, 0x56e37u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))));
    // 056e3b  sub ax, word ptr [esi + 8]
    X86_AT(c, 0x56e3bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 056e3f  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x56e3fu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 056e43  cmp ax, 0x40
    X86_AT(c, 0x56e43u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x40u, 0, 2);
    // 056e47  jg 0x56e4f
    X86_AT(c, 0x56e47u);
    if (x86_cc(c, 15)) { goto L_56e4f; }
    X86_TICK(c, 12);
    // 056e49  cmp byte ptr [esi + 0xb], 0
    X86_AT(c, 0x56e49u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xBu))), 0x0u, 0, 1);
    // 056e4d  je 0x56e76
    X86_AT(c, 0x56e4du);
    if (x86_cc(c, 4)) { goto L_56e76; }
L_56e4f:
    X86_TICK(c, 7);
    // 056e4f  and bl, bl
    X86_AT(c, 0x56e4fu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 056e51  jne 0x56e6a
    X86_AT(c, 0x56e51u);
    if (x86_cc(c, 5)) { goto L_56e6a; }
    X86_TICK(c, 31);
    // 056e53  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x56e53u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 056e58  lea edx, [eax - 0xc]
    X86_AT(c, 0x56e58u);
    c.r[2] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 056e5b  push esi
    X86_AT(c, 0x56e5bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056e5c  push edi
    X86_AT(c, 0x56e5cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056e5d  mov esi, eax
    X86_AT(c, 0x56e5du);
    c.r[6] = c.r[0];
    // 056e5f  mov edi, edx
    X86_AT(c, 0x56e5fu);
    c.r[7] = c.r[2];
    // 056e61  mov ecx, 3
    X86_AT(c, 0x56e61u);
    c.r[1] = 0x3u;
    // 056e66  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x56e66u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 056e68  pop edi
    X86_AT(c, 0x56e68u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 056e69  pop esi
    X86_AT(c, 0x56e69u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_56e6a:
    X86_TICK(c, 14);
    // 056e6a  add dword ptr [0x4ba24], 0xfffffff4
    X86_AT(c, 0x56e6au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4BA24u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 056e71  jmp 0x56f02
    X86_AT(c, 0x56e71u);
    goto L_56f02;
L_56e76:
    X86_TICK(c, 11);
    // 056e76  mov ax, word ptr [ebp - 2]
    X86_AT(c, 0x56e76u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
    // 056e7a  and ax, ax
    X86_AT(c, 0x56e7au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 056e7d  je 0x56e86
    X86_AT(c, 0x56e7du);
    if (x86_cc(c, 4)) { goto L_56e86; }
    X86_TICK(c, 11);
    // 056e7f  push eax
    X86_AT(c, 0x56e7fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056e80  push esi
    X86_AT(c, 0x56e80u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056e81  call 0x57838
    X86_AT(c, 0x56e81u);
    push32(c, 0x56e86u); x86_call_known(c, 0x57838u, f_00057838); X86_RET(c, 0x56e86u);
L_56e86:
    X86_TICK(c, 15);
    // 056e86  mov al, byte ptr [edi + 0xa]
    X86_AT(c, 0x56e86u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))));
    // 056e89  cmp al, byte ptr [esi + 0xa]
    X86_AT(c, 0x56e89u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu))), 0, 1);
    // 056e8c  jne 0x56ead
    X86_AT(c, 0x56e8cu);
    if (x86_cc(c, 5)) { goto L_56ead; }
    X86_TICK(c, 13);
    // 056e8e  push 4
    X86_AT(c, 0x56e8eu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 056e90  push esi
    X86_AT(c, 0x56e90u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056e91  push edi
    X86_AT(c, 0x56e91u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056e92  call 0x57744
    X86_AT(c, 0x56e92u);
    push32(c, 0x56e97u); x86_call_known(c, 0x57744u, f_00057744); X86_RET(c, 0x56e97u);
    X86_TICK(c, 7);
    // 056e97  and al, al
    X86_AT(c, 0x56e97u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 056e99  je 0x56ed8
    X86_AT(c, 0x56e99u);
    if (x86_cc(c, 4)) { goto L_56ed8; }
    X86_TICK(c, 11);
    // 056e9b  push 1
    X86_AT(c, 0x56e9bu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 056e9d  push edi
    X86_AT(c, 0x56e9du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056e9e  call 0x57838
    X86_AT(c, 0x56e9eu);
    push32(c, 0x56ea3u); x86_call_known(c, 0x57838u, f_00057838); X86_RET(c, 0x56ea3u);
    X86_TICK(c, 20);
    // 056ea3  or byte ptr [edi + 7], 0x80
    X86_AT(c, 0x56ea3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x7u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 056ea7  inc word ptr [edi + 8]
    X86_AT(c, 0x56ea7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 056eab  jmp 0x56ed8
    X86_AT(c, 0x56eabu);
    goto L_56ed8;
L_56ead:
    X86_TICK(c, 12);
    // 056ead  cmp byte ptr [edi + 0xa], 0
    X86_AT(c, 0x56eadu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))), 0x0u, 0, 1);
    // 056eb1  je 0x56ebe
    X86_AT(c, 0x56eb1u);
    if (x86_cc(c, 4)) { goto L_56ebe; }
    X86_TICK(c, 13);
    // 056eb3  push 4
    X86_AT(c, 0x56eb3u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 056eb5  push esi
    X86_AT(c, 0x56eb5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056eb6  push edi
    X86_AT(c, 0x56eb6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056eb7  call 0x57796
    X86_AT(c, 0x56eb7u);
    push32(c, 0x56ebcu); x86_call_known(c, 0x57796u, f_00057796); X86_RET(c, 0x56ebcu);
    X86_TICK(c, 7);
    // 056ebc  jmp 0x56ec7
    X86_AT(c, 0x56ebcu);
    goto L_56ec7;
L_56ebe:
    X86_TICK(c, 13);
    // 056ebe  push 4
    X86_AT(c, 0x56ebeu);
    { uint32_t v = 0x4u; push32(c, v); }
    // 056ec0  push esi
    X86_AT(c, 0x56ec0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056ec1  push edi
    X86_AT(c, 0x56ec1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056ec2  call 0x5776d
    X86_AT(c, 0x56ec2u);
    push32(c, 0x56ec7u); x86_call_known(c, 0x5776du, f_0005776d); X86_RET(c, 0x56ec7u);
L_56ec7:
    X86_TICK(c, 14);
    // 056ec7  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0x56ec7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 056eca  cmp byte ptr [edi + 0xa], 0
    X86_AT(c, 0x56ecau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu))), 0x0u, 0, 1);
    // 056ece  je 0x56ed8
    X86_AT(c, 0x56eceu);
    if (x86_cc(c, 4)) { goto L_56ed8; }
    X86_TICK(c, 11);
    // 056ed0  push 4
    X86_AT(c, 0x56ed0u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 056ed2  push edi
    X86_AT(c, 0x56ed2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056ed3  call 0x577c2
    X86_AT(c, 0x56ed3u);
    push32(c, 0x56ed8u); x86_call_known(c, 0x577c2u, f_000577c2); X86_RET(c, 0x56ed8u);
L_56ed8:
    X86_TICK(c, 14);
    // 056ed8  add dword ptr [0x4ba24], 0xfffffff4
    X86_AT(c, 0x56ed8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4BA24u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 056edf  and bl, bl
    X86_AT(c, 0x56edfu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 056ee1  jne 0x56ef7
    X86_AT(c, 0x56ee1u);
    if (x86_cc(c, 5)) { goto L_56ef7; }
    X86_TICK(c, 29);
    // 056ee3  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x56ee3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 056ee8  push esi
    X86_AT(c, 0x56ee8u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056ee9  push edi
    X86_AT(c, 0x56ee9u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056eea  mov esi, edi
    X86_AT(c, 0x56eeau);
    c.r[6] = c.r[7];
    // 056eec  mov edi, eax
    X86_AT(c, 0x56eecu);
    c.r[7] = c.r[0];
    // 056eee  mov ecx, 3
    X86_AT(c, 0x56eeeu);
    c.r[1] = 0x3u;
    // 056ef3  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x56ef3u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 056ef5  pop edi
    X86_AT(c, 0x56ef5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 056ef6  pop esi
    X86_AT(c, 0x56ef6u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_56ef7:
    X86_TICK(c, 12);
    // 056ef7  push dword ptr [0x4ba24]
    X86_AT(c, 0x56ef7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4BA24u))); push32(c, v); }
    // 056efd  call 0x578d4
    X86_AT(c, 0x56efdu);
    push32(c, 0x56f02u); x86_call_known(c, 0x578d4u, f_000578d4); X86_RET(c, 0x56f02u);
L_56f02:
    X86_TICK(c, 28);
    // 056f02  pop edi
    X86_AT(c, 0x56f02u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 056f03  pop esi
    X86_AT(c, 0x56f03u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 056f04  pop ebx
    X86_AT(c, 0x56f04u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 056f05  leave 
    X86_AT(c, 0x56f05u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 056f06  ret 
    X86_AT(c, 0x56f06u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x56df0u, "ran off the end of a function");
}
void f_00056f08(X86Cpu& c) {
    X86_TICK(c, 13);
    // 056f08  enter 0x14, 0
    X86_AT(c, 0x56f08u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 056f0c  call 0x578b0
    X86_AT(c, 0x56f0cu);
    push32(c, 0x56f11u); x86_call_known(c, 0x578b0u, f_000578b0); X86_RET(c, 0x56f11u);
    X86_TICK(c, 12);
    // 056f11  cmp byte ptr [0x4b593], 0
    X86_AT(c, 0x56f11u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B593u))), 0x0u, 0, 1);
    // 056f18  je 0x56f2f
    X86_AT(c, 0x56f18u);
    if (x86_cc(c, 4)) { goto L_56f2f; }
    X86_TICK(c, 12);
    // 056f1a  push dword ptr [ebp + 8]
    X86_AT(c, 0x56f1au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 056f1d  call 0x574f3
    X86_AT(c, 0x56f1du);
    push32(c, 0x56f22u); x86_call_known(c, 0x574f3u, f_000574f3); X86_RET(c, 0x56f22u);
    X86_TICK(c, 12);
    // 056f22  push dword ptr [0x4ba24]
    X86_AT(c, 0x56f22u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4BA24u))); push32(c, v); }
    // 056f28  call 0x57514
    X86_AT(c, 0x56f28u);
    push32(c, 0x56f2du); x86_call_known(c, 0x57514u, f_00057514); X86_RET(c, 0x56f2du);
    X86_TICK(c, 7);
    // 056f2d  jmp 0x56f3d
    X86_AT(c, 0x56f2du);
    goto L_56f3d;
L_56f2f:
    X86_TICK(c, 17);
    // 056f2f  push dword ptr [ebp + 8]
    X86_AT(c, 0x56f2fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 056f32  push dword ptr [0x4ba24]
    X86_AT(c, 0x56f32u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4BA24u))); push32(c, v); }
    // 056f38  call 0x5767c
    X86_AT(c, 0x56f38u);
    push32(c, 0x56f3du); x86_call_known(c, 0x5767cu, f_0005767c); X86_RET(c, 0x56f3du);
L_56f3d:
    X86_TICK(c, 16);
    // 056f3d  leave 
    X86_AT(c, 0x56f3du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 056f3e  ret 4
    X86_AT(c, 0x56f3eu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x56f08u, "ran off the end of a function");
}
void f_00056f44(X86Cpu& c) {
    X86_TICK(c, 11);
    // 056f44  push ebp
    X86_AT(c, 0x56f44u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 056f45  mov ebp, esp
    X86_AT(c, 0x56f45u);
    c.r[5] = c.r[4];
    // 056f47  call 0x578b0
    X86_AT(c, 0x56f47u);
    push32(c, 0x56f4cu); x86_call_known(c, 0x578b0u, f_000578b0); X86_RET(c, 0x56f4cu);
    X86_TICK(c, 12);
    // 056f4c  cmp byte ptr [0x4b593], 0
    X86_AT(c, 0x56f4cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B593u))), 0x0u, 0, 1);
    // 056f53  je 0x56f6d
    X86_AT(c, 0x56f53u);
    if (x86_cc(c, 4)) { goto L_56f6d; }
    X86_TICK(c, 17);
    // 056f55  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x56f55u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 056f58  push dword ptr [ebp + 8]
    X86_AT(c, 0x56f58u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 056f5b  call 0x5750d
    X86_AT(c, 0x56f5bu);
    push32(c, 0x56f60u); x86_call_known(c, 0x5750du, f_0005750d); X86_RET(c, 0x56f60u);
    X86_TICK(c, 12);
    // 056f60  push dword ptr [0x4ba24]
    X86_AT(c, 0x56f60u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4BA24u))); push32(c, v); }
    // 056f66  call 0x57514
    X86_AT(c, 0x56f66u);
    push32(c, 0x56f6bu); x86_call_known(c, 0x57514u, f_00057514); X86_RET(c, 0x56f6bu);
    X86_TICK(c, 7);
    // 056f6b  jmp 0x56f7c
    X86_AT(c, 0x56f6bu);
    goto L_56f7c;
L_56f6d:
    X86_TICK(c, 16);
    // 056f6d  lea eax, [ebp + 8]
    X86_AT(c, 0x56f6du);
    c.r[0] = (uint32_t)(c.r[5] + 0x8u);
    // 056f70  push eax
    X86_AT(c, 0x56f70u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 056f71  push dword ptr [0x4ba24]
    X86_AT(c, 0x56f71u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4BA24u))); push32(c, v); }
    // 056f77  call 0x57584
    X86_AT(c, 0x56f77u);
    push32(c, 0x56f7cu); x86_call_known(c, 0x57584u, f_00057584); X86_RET(c, 0x56f7cu);
L_56f7c:
    X86_TICK(c, 16);
    // 056f7c  leave 
    X86_AT(c, 0x56f7cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 056f7d  ret 8
    X86_AT(c, 0x56f7du);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x56f44u, "ran off the end of a function");
}
void f_00056f80(X86Cpu& c) {
    X86_TICK(c, 15);
    // 056f80  push ebp
    X86_AT(c, 0x56f80u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 056f81  mov ebp, esp
    X86_AT(c, 0x56f81u);
    c.r[5] = c.r[4];
    // 056f83  push esi
    X86_AT(c, 0x56f83u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056f84  push edi
    X86_AT(c, 0x56f84u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056f85  call 0x578b0
    X86_AT(c, 0x56f85u);
    push32(c, 0x56f8au); x86_call_known(c, 0x578b0u, f_000578b0); X86_RET(c, 0x56f8au);
    X86_TICK(c, 41);
    // 056f8a  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x56f8au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 056f8d  mov edi, dword ptr [0x4ba24]
    X86_AT(c, 0x56f8du);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 056f93  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x56f93u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 056f94  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x56f94u);
    x86_string(c, 0, 4, 0, 4, 3);
    // 056f95  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x56f95u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 056f97  cmp byte ptr [0x4b593], 0
    X86_AT(c, 0x56f97u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B593u))), 0x0u, 0, 1);
    // 056f9e  jne 0x56fd8
    X86_AT(c, 0x56f9eu);
    if (x86_cc(c, 5)) { goto L_56fd8; }
    X86_TICK(c, 24);
    // 056fa0  mov edi, dword ptr [0x4ba24]
    X86_AT(c, 0x56fa0u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 056fa6  test byte ptr [edi + 9], 0x80
    X86_AT(c, 0x56fa6u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))) & 0x80u, 1);
    // 056faa  setne al
    X86_AT(c, 0x56faau);
    s8(c, 0, x86_cc(c, 5) ? 1u : 0u);
    // 056fad  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0x56fadu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 056fb0  and al, al
    X86_AT(c, 0x56fb0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 056fb2  je 0x56fb8
    X86_AT(c, 0x56fb2u);
    if (x86_cc(c, 4)) { goto L_56fb8; }
    X86_TICK(c, 7);
    // 056fb4  and byte ptr [edi + 9], 0x7f
    X86_AT(c, 0x56fb4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
L_56fb8:
    X86_TICK(c, 37);
    // 056fb8  mov ax, word ptr [edi]
    X86_AT(c, 0x56fb8u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 056fbb  or ax, word ptr [edi + 2]
    X86_AT(c, 0x56fbbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 2)); }
    // 056fbf  or ax, word ptr [edi + 4]
    X86_AT(c, 0x56fbfu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 2)); }
    // 056fc3  or ax, word ptr [edi + 6]
    X86_AT(c, 0x56fc3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))), 2)); }
    // 056fc7  and ax, ax
    X86_AT(c, 0x56fc7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 056fca  sete al
    X86_AT(c, 0x56fcau);
    s8(c, 0, x86_cc(c, 4) ? 1u : 0u);
    // 056fcd  mov byte ptr [edi + 0xb], al
    X86_AT(c, 0x56fcdu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), g8(c, 0));
    // 056fd0  and al, al
    X86_AT(c, 0x56fd0u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & g8(c, 0), 1)); }
    // 056fd2  je 0x56fd8
    X86_AT(c, 0x56fd2u);
    if (x86_cc(c, 4)) { goto L_56fd8; }
    X86_TICK(c, 2);
    // 056fd4  mov byte ptr [edi + 0xa], 0
    X86_AT(c, 0x56fd4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), 0x0u);
L_56fd8:
    X86_TICK(c, 24);
    // 056fd8  pop edi
    X86_AT(c, 0x56fd8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 056fd9  pop esi
    X86_AT(c, 0x56fd9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 056fda  leave 
    X86_AT(c, 0x56fdau);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 056fdb  ret 4
    X86_AT(c, 0x56fdbu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x56f80u, "ran off the end of a function");
}
void f_00056fe0(X86Cpu& c) {
    X86_TICK(c, 49);
    // 056fe0  push ebp
    X86_AT(c, 0x56fe0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 056fe1  mov ebp, esp
    X86_AT(c, 0x56fe1u);
    c.r[5] = c.r[4];
    // 056fe3  push esi
    X86_AT(c, 0x56fe3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 056fe4  push edi
    X86_AT(c, 0x56fe4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 056fe5  mov esi, dword ptr [0x4ba24]
    X86_AT(c, 0x56fe5u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 056feb  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x56febu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 056fee  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x56feeu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 056fef  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x56fefu);
    x86_string(c, 0, 4, 0, 4, 3);
    // 056ff0  movsw word ptr es:[edi], word ptr [esi]
    X86_AT(c, 0x56ff0u);
    x86_string(c, 0, 2, 0, 4, 3);
    // 056ff2  cmp byte ptr [0x4b593], 0
    X86_AT(c, 0x56ff2u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B593u))), 0x0u, 0, 1);
    // 056ff9  jne 0x57013
    X86_AT(c, 0x56ff9u);
    if (x86_cc(c, 5)) { goto L_57013; }
    X86_TICK(c, 16);
    // 056ffb  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x56ffbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 057000  cmp byte ptr [eax + 0xa], 0
    X86_AT(c, 0x57000u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))), 0x0u, 0, 1);
    // 057004  je 0x57013
    X86_AT(c, 0x57004u);
    if (x86_cc(c, 4)) { goto L_57013; }
    X86_TICK(c, 12);
    // 057006  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x57006u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 05700a  jne 0x57013
    X86_AT(c, 0x5700au);
    if (x86_cc(c, 5)) { goto L_57013; }
    X86_TICK(c, 11);
    // 05700c  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x5700cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 05700f  or byte ptr [eax + 9], 0x80
    X86_AT(c, 0x5700fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
L_57013:
    X86_TICK(c, 31);
    // 057013  add dword ptr [0x4ba24], 0xfffffff4
    X86_AT(c, 0x57013u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4BA24u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 05701a  pop edi
    X86_AT(c, 0x5701au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05701b  pop esi
    X86_AT(c, 0x5701bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 05701c  leave 
    X86_AT(c, 0x5701cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05701d  ret 4
    X86_AT(c, 0x5701du);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x56fe0u, "ran off the end of a function");
}
void f_00057020(X86Cpu& c) {
    X86_TICK(c, 83);
    // 057020  enter 0xc, 0
    X86_AT(c, 0x57020u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 057024  push esi
    X86_AT(c, 0x57024u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 057025  push edi
    X86_AT(c, 0x57025u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 057026  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x57026u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 05702b  lea esi, [eax - 0xc]
    X86_AT(c, 0x5702bu);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 05702e  lea edi, [ebp - 0xc]
    X86_AT(c, 0x5702eu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 057031  mov ecx, 3
    X86_AT(c, 0x57031u);
    c.r[1] = 0x3u;
    // 057036  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x57036u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 057038  xchg esi, eax
    X86_AT(c, 0x57038u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 057039  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x57039u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 05703e  lea edi, [eax - 0xc]
    X86_AT(c, 0x5703eu);
    c.r[7] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 057041  mov ecx, 3
    X86_AT(c, 0x57041u);
    c.r[1] = 0x3u;
    // 057046  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x57046u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 057048  lea esi, [ebp - 0xc]
    X86_AT(c, 0x57048u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 05704b  xchg edi, eax
    X86_AT(c, 0x5704bu);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 05704c  mov ecx, 3
    X86_AT(c, 0x5704cu);
    c.r[1] = 0x3u;
    // 057051  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x57051u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 057053  pop edi
    X86_AT(c, 0x57053u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 057054  pop esi
    X86_AT(c, 0x57054u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 057055  leave 
    X86_AT(c, 0x57055u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 057056  ret 
    X86_AT(c, 0x57056u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57020u, "ran off the end of a function");
}
void f_00057058(X86Cpu& c) {
    X86_TICK(c, 12);
    // 057058  cmp byte ptr [0x4b593], 0
    X86_AT(c, 0x57058u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B593u))), 0x0u, 0, 1);
    // 05705f  je 0x5706c
    X86_AT(c, 0x5705fu);
    if (x86_cc(c, 4)) { goto L_5706c; }
    X86_TICK(c, 18);
    // 057061  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x57061u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 057066  xor byte ptr [eax + 9], 0x80
    X86_AT(c, 0x57066u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x80u, 1)); }
    // 05706a  jmp 0x5707b
    X86_AT(c, 0x5706au);
    goto L_5707b;
L_5706c:
    X86_TICK(c, 16);
    // 05706c  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x5706cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 057071  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x57071u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 057075  jne 0x5707b
    X86_AT(c, 0x57075u);
    if (x86_cc(c, 5)) { goto L_5707b; }
    X86_TICK(c, 7);
    // 057077  xor byte ptr [eax + 0xa], 1
    X86_AT(c, 0x57077u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v ^ 0x1u, 1)); }
L_5707b:
    X86_TICK(c, 10);
    // 05707b  ret 
    X86_AT(c, 0x5707bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57058u, "ran off the end of a function");
}
void f_000570f0(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0570f0  enter 0x24, 0
    X86_AT(c, 0x570f0u);
    x86_enter(c, 0x24u, 0x0u, 4);
    // 0570f4  push esi
    X86_AT(c, 0x570f4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0570f5  push edi
    X86_AT(c, 0x570f5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0570f6  cmp byte ptr [0x4b593], 0
    X86_AT(c, 0x570f6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B593u))), 0x0u, 0, 1);
    // 0570fd  je 0x5711f
    X86_AT(c, 0x570fdu);
    if (x86_cc(c, 4)) { goto L_5711f; }
    X86_TICK(c, 20);
    // 0570ff  push dword ptr [0x4ba24]
    X86_AT(c, 0x570ffu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4BA24u))); push32(c, v); }
    // 057105  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x57105u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 05710a  sub eax, 0xc
    X86_AT(c, 0x5710au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 05710d  push eax
    X86_AT(c, 0x5710du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05710e  call 0x574a9
    X86_AT(c, 0x5710eu);
    push32(c, 0x57113u); x86_call_known(c, 0x574a9u, f_000574a9); X86_RET(c, 0x57113u);
    X86_TICK(c, 14);
    // 057113  add dword ptr [0x4ba24], 0xfffffff4
    X86_AT(c, 0x57113u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4BA24u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 05711a  jmp 0x5720e
    X86_AT(c, 0x5711au);
    goto L_5720e;
L_5711f:
    X86_TICK(c, 48);
    // 05711f  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x5711fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 057124  lea edx, [ebp - 0x14]
    X86_AT(c, 0x57124u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 057127  push esi
    X86_AT(c, 0x57127u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 057128  push edi
    X86_AT(c, 0x57128u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 057129  mov esi, eax
    X86_AT(c, 0x57129u);
    c.r[6] = c.r[0];
    // 05712b  mov edi, edx
    X86_AT(c, 0x5712bu);
    c.r[7] = c.r[2];
    // 05712d  mov ecx, 3
    X86_AT(c, 0x5712du);
    c.r[1] = 0x3u;
    // 057132  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x57132u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 057134  pop edi
    X86_AT(c, 0x57134u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 057135  pop esi
    X86_AT(c, 0x57135u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 057136  xchg esi, eax
    X86_AT(c, 0x57136u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 057137  sub esi, 0xc
    X86_AT(c, 0x57137u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, 0xCu, 0, 4); }
    // 05713a  cmp byte ptr [ebp - 9], 0
    X86_AT(c, 0x5713au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 05713e  jne 0x57146
    X86_AT(c, 0x5713eu);
    if (x86_cc(c, 5)) { goto L_57146; }
    X86_TICK(c, 12);
    // 057140  cmp byte ptr [esi + 0xb], 0
    X86_AT(c, 0x57140u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xBu))), 0x0u, 0, 1);
    // 057144  je 0x5716c
    X86_AT(c, 0x57144u);
    if (x86_cc(c, 4)) { goto L_5716c; }
L_57146:
    X86_TICK(c, 45);
    // 057146  add dword ptr [0x4ba24], 0xfffffff4
    X86_AT(c, 0x57146u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4BA24u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 05714d  mov eax, 0x4ba34
    X86_AT(c, 0x5714du);
    c.r[0] = 0x4BA34u;
    // 057152  mov edx, dword ptr [0x4ba24]
    X86_AT(c, 0x57152u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 057158  push esi
    X86_AT(c, 0x57158u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 057159  push edi
    X86_AT(c, 0x57159u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05715a  mov esi, eax
    X86_AT(c, 0x5715au);
    c.r[6] = c.r[0];
    // 05715c  mov edi, edx
    X86_AT(c, 0x5715cu);
    c.r[7] = c.r[2];
    // 05715e  mov ecx, 3
    X86_AT(c, 0x5715eu);
    c.r[1] = 0x3u;
    // 057163  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x57163u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 057165  pop edi
    X86_AT(c, 0x57165u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 057166  pop esi
    X86_AT(c, 0x57166u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 057167  jmp 0x5720e
    X86_AT(c, 0x57167u);
    goto L_5720e;
L_5716c:
    X86_TICK(c, 69);
    // 05716c  add dword ptr [0x4ba24], 0xfffffff4
    X86_AT(c, 0x5716cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4BA24u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 057173  mov al, byte ptr [ebp - 0xa]
    X86_AT(c, 0x57173u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 057176  cmp al, byte ptr [esi + 0xa]
    X86_AT(c, 0x57176u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xAu))), 0, 1);
    // 057179  setne byte ptr [ebp - 0xa]
    X86_AT(c, 0x57179u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), x86_cc(c, 5) ? 1u : 0u);
    // 05717d  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0x5717du);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 057181  sub ax, 0x3fff
    X86_AT(c, 0x57181u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 057185  add ax, word ptr [esi + 8]
    X86_AT(c, 0x57185u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u))), 0, 2)); }
    // 057189  inc eax
    X86_AT(c, 0x57189u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 05718a  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0x5718au);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 05718e  push dword ptr [esi + 4]
    X86_AT(c, 0x5718eu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u))); push32(c, v); }
    // 057191  push dword ptr [esi]
    X86_AT(c, 0x57191u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[6]))); push32(c, v); }
    // 057193  push dword ptr [ebp - 0x10]
    X86_AT(c, 0x57193u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))); push32(c, v); }
    // 057196  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x57196u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 057199  lea eax, [ebp - 0x24]
    X86_AT(c, 0x57199u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 05719c  push eax
    X86_AT(c, 0x5719cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05719d  call 0x57cac
    X86_AT(c, 0x5719du);
    push32(c, 0x571a2u); x86_call_known(c, 0x57cacu, f_00057cac); X86_RET(c, 0x571a2u);
    X86_TICK(c, 9);
    // 0571a2  mov di, 0x80
    X86_AT(c, 0x571a2u);
    s16(c, 7, 0x80u);
    // 0571a6  jmp 0x571b6
    X86_AT(c, 0x571a6u);
    goto L_571b6;
L_571a8:
    X86_TICK(c, 19);
    // 0571a8  dec word ptr [ebp - 0xc]
    X86_AT(c, 0x571a8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
    // 0571ac  dec edi
    X86_AT(c, 0x571acu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0571ad  lea eax, [ebp - 0x24]
    X86_AT(c, 0x571adu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFDCu);
    // 0571b0  push eax
    X86_AT(c, 0x571b0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0571b1  call 0x5787b
    X86_AT(c, 0x571b1u);
    push32(c, 0x571b6u); x86_call_known(c, 0x5787bu, f_0005787b); X86_RET(c, 0x571b6u);
L_571b6:
    X86_TICK(c, 12);
    // 0571b6  cmp byte ptr [ebp - 0x15], 0x80
    X86_AT(c, 0x571b6u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEBu))), 0x80u, 0, 1);
    // 0571ba  jae 0x571c1
    X86_AT(c, 0x571bau);
    if (x86_cc(c, 3)) { goto L_571c1; }
    X86_TICK(c, 7);
    // 0571bc  and di, di
    X86_AT(c, 0x571bcu);
    { uint32_t v = (c.r[7] & 0xFFFFu); s16(c, 7, x86_logic(c, v & (c.r[7] & 0xFFFFu), 2)); }
    // 0571bf  ja 0x571a8
    X86_AT(c, 0x571bfu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x571a8u); goto L_571a8; }
L_571c1:
    X86_TICK(c, 24);
    // 0571c1  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0x571c1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 0571c4  mov edx, dword ptr [ebp - 0x18]
    X86_AT(c, 0x571c4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)));
    // 0571c7  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0x571c7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0571ca  mov dword ptr [ebp - 0x10], edx
    X86_AT(c, 0x571cau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[2]);
    // 0571cd  cmp byte ptr [ebp - 0x1d], 0x80
    X86_AT(c, 0x571cdu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE3u))), 0x80u, 0, 1);
    // 0571d1  jb 0x571f0
    X86_AT(c, 0x571d1u);
    if (x86_cc(c, 2)) { goto L_571f0; }
    X86_TICK(c, 21);
    // 0571d3  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x571d3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0571da  mov dword ptr [ebp - 8], 1
    X86_AT(c, 0x571dau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x1u);
    // 0571e1  push 4
    X86_AT(c, 0x571e1u);
    { uint32_t v = 0x4u; push32(c, v); }
    // 0571e3  lea eax, [ebp - 8]
    X86_AT(c, 0x571e3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0571e6  push eax
    X86_AT(c, 0x571e6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0571e7  lea eax, [ebp - 0x14]
    X86_AT(c, 0x571e7u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0571ea  push eax
    X86_AT(c, 0x571eau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0571eb  call 0x57744
    X86_AT(c, 0x571ebu);
    push32(c, 0x571f0u); x86_call_known(c, 0x57744u, f_00057744); X86_RET(c, 0x571f0u);
L_571f0:
    X86_TICK(c, 40);
    // 0571f0  lea eax, [ebp - 0x14]
    X86_AT(c, 0x571f0u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFECu);
    // 0571f3  mov edx, dword ptr [0x4ba24]
    X86_AT(c, 0x571f3u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 0571f9  push esi
    X86_AT(c, 0x571f9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0571fa  push edi
    X86_AT(c, 0x571fau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0571fb  mov esi, eax
    X86_AT(c, 0x571fbu);
    c.r[6] = c.r[0];
    // 0571fd  mov edi, edx
    X86_AT(c, 0x571fdu);
    c.r[7] = c.r[2];
    // 0571ff  mov ecx, 3
    X86_AT(c, 0x571ffu);
    c.r[1] = 0x3u;
    // 057204  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x57204u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 057206  pop edi
    X86_AT(c, 0x57206u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 057207  pop esi
    X86_AT(c, 0x57207u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 057208  push edx
    X86_AT(c, 0x57208u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 057209  call 0x578d4
    X86_AT(c, 0x57209u);
    push32(c, 0x5720eu); x86_call_known(c, 0x578d4u, f_000578d4); X86_RET(c, 0x5720eu);
L_5720e:
    X86_TICK(c, 24);
    // 05720e  pop edi
    X86_AT(c, 0x5720eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05720f  pop esi
    X86_AT(c, 0x5720fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 057210  leave 
    X86_AT(c, 0x57210u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 057211  ret 
    X86_AT(c, 0x57211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x570f0u, "ran off the end of a function");
}
void f_0005720e(X86Cpu& c) {
    X86_TICK(c, 24);
    // 05720e  pop edi
    X86_AT(c, 0x5720eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05720f  pop esi
    X86_AT(c, 0x5720fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 057210  leave 
    X86_AT(c, 0x57210u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 057211  ret 
    X86_AT(c, 0x57211u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5720eu, "ran off the end of a function");
}
void f_00057214(X86Cpu& c) {
    X86_TICK(c, 7);
    // 057214  call 0x57020
    X86_AT(c, 0x57214u);
    push32(c, 0x57219u); x86_call_known(c, 0x57020u, f_00057020); X86_RET(c, 0x57219u);
    X86_TICK(c, 7);
    // 057219  call 0x57220
    X86_AT(c, 0x57219u);
    push32(c, 0x5721eu); x86_call_known(c, 0x57220u, f_00057220); X86_RET(c, 0x5721eu);
    X86_TICK(c, 10);
    // 05721e  ret 
    X86_AT(c, 0x5721eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57214u, "ran off the end of a function");
}
void f_00057220(X86Cpu& c) {
    X86_TICK(c, 18);
    // 057220  push ebx
    X86_AT(c, 0x57220u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 057221  push esi
    X86_AT(c, 0x57221u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 057222  push edi
    X86_AT(c, 0x57222u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 057223  cmp byte ptr [0x4b593], 0
    X86_AT(c, 0x57223u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B593u))), 0x0u, 0, 1);
    // 05722a  je 0x57242
    X86_AT(c, 0x5722au);
    if (x86_cc(c, 4)) { goto L_57242; }
    X86_TICK(c, 20);
    // 05722c  push dword ptr [0x4ba24]
    X86_AT(c, 0x5722cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4BA24u))); push32(c, v); }
    // 057232  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x57232u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 057237  sub eax, 0xc
    X86_AT(c, 0x57237u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 05723a  push eax
    X86_AT(c, 0x5723au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05723b  call 0x574b0
    X86_AT(c, 0x5723bu);
    push32(c, 0x57240u); x86_call_known(c, 0x574b0u, f_000574b0); X86_RET(c, 0x57240u);
    X86_TICK(c, 7);
    // 057240  jmp 0x57293
    X86_AT(c, 0x57240u);
    goto L_57293;
L_57242:
    X86_TICK(c, 35);
    // 057242  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x57242u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 057247  mov dl, byte ptr [eax + 0xa]
    X86_AT(c, 0x57247u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))));
    // 05724a  cmp dl, byte ptr [eax - 2]
    X86_AT(c, 0x5724au);
    (void)x86_sub(c, g8(c, 2), rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu))), 0, 1);
    // 05724d  setne byte ptr [eax - 2]
    X86_AT(c, 0x5724du);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu)), x86_cc(c, 5) ? 1u : 0u);
    // 057251  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x57251u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 057256  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x57256u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 05725a  je 0x57288
    X86_AT(c, 0x5725au);
    if (x86_cc(c, 4)) { goto L_57288; }
    X86_TICK(c, 36);
    // 05725c  add dword ptr [0x4ba24], 0xfffffff4
    X86_AT(c, 0x5725cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4BA24u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 057263  mov ax, word ptr [0x4ba54]
    X86_AT(c, 0x57263u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4BA54u))));
    // 057269  mov edx, dword ptr [0x4ba24]
    X86_AT(c, 0x57269u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 05726f  mov word ptr [edx + 8], ax
    X86_AT(c, 0x5726fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 057273  mov eax, dword ptr [0x4ba4c]
    X86_AT(c, 0x57273u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA4Cu)));
    // 057278  mov ecx, dword ptr [0x4ba50]
    X86_AT(c, 0x57278u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4BA50u)));
    // 05727e  mov dword ptr [edx], eax
    X86_AT(c, 0x5727eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 057280  mov dword ptr [edx + 4], ecx
    X86_AT(c, 0x57280u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[1]);
    // 057283  jmp 0x5736a
    X86_AT(c, 0x57283u);
    goto L_5736a;
L_57288:
    X86_TICK(c, 16);
    // 057288  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x57288u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 05728d  cmp byte ptr [eax - 1], 0
    X86_AT(c, 0x5728du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 057291  je 0x572b6
    X86_AT(c, 0x57291u);
    if (x86_cc(c, 4)) { goto L_572b6; }
L_57293:
    X86_TICK(c, 14);
    // 057293  add dword ptr [0x4ba24], 0xfffffff4
    X86_AT(c, 0x57293u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4BA24u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 05729a  jmp 0x5736a
    X86_AT(c, 0x5729au);
    goto L_5736a;
L_5729f:
    X86_TICK(c, 15);
    // 05729f  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x5729fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 0572a4  sub eax, 0xc
    X86_AT(c, 0x572a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0572a7  push eax
    X86_AT(c, 0x572a7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0572a8  call 0x5781c
    X86_AT(c, 0x572a8u);
    push32(c, 0x572adu); x86_call_known(c, 0x5781cu, f_0005781c); X86_RET(c, 0x572adu);
    X86_TICK(c, 10);
    // 0572ad  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x572adu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 0572b2  dec word ptr [eax - 4]
    X86_AT(c, 0x572b2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFCu)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_572b6:
    X86_TICK(c, 16);
    // 0572b6  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x572b6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 0572bb  cmp byte ptr [eax - 5], 0x80
    X86_AT(c, 0x572bbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFBu))), 0x80u, 0, 1);
    // 0572bf  jb 0x5729f
    X86_AT(c, 0x572bfu);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x5729fu); goto L_5729f; }
    X86_TICK(c, 7);
    // 0572c1  jmp 0x572d7
    X86_AT(c, 0x572c1u);
    goto L_572d7;
L_572c3:
    X86_TICK(c, 12);
    // 0572c3  push dword ptr [0x4ba24]
    X86_AT(c, 0x572c3u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4BA24u))); push32(c, v); }
    // 0572c9  call 0x5781c
    X86_AT(c, 0x572c9u);
    push32(c, 0x572ceu); x86_call_known(c, 0x5781cu, f_0005781c); X86_RET(c, 0x572ceu);
    X86_TICK(c, 10);
    // 0572ce  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x572ceu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 0572d3  dec word ptr [eax + 8]
    X86_AT(c, 0x572d3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_dec(c, v, 2)); }
L_572d7:
    X86_TICK(c, 16);
    // 0572d7  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x572d7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 0572dc  cmp byte ptr [eax + 7], 0x80
    X86_AT(c, 0x572dcu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x7u))), 0x80u, 0, 1);
    // 0572e0  jb 0x572c3
    X86_AT(c, 0x572e0u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x572c3u); goto L_572c3; }
    X86_TICK(c, 35);
    // 0572e2  push dword ptr [eax + 4]
    X86_AT(c, 0x572e2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u))); push32(c, v); }
    // 0572e5  push dword ptr [eax]
    X86_AT(c, 0x572e5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0]))); push32(c, v); }
    // 0572e7  push dword ptr [eax - 8]
    X86_AT(c, 0x572e7u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF8u))); push32(c, v); }
    // 0572ea  push dword ptr [eax - 0xc]
    X86_AT(c, 0x572eau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFF4u))); push32(c, v); }
    // 0572ed  lea edx, [eax - 0xc]
    X86_AT(c, 0x572edu);
    c.r[2] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 0572f0  push edx
    X86_AT(c, 0x572f0u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0572f1  mov ebx, eax
    X86_AT(c, 0x572f1u);
    c.r[3] = c.r[0];
    // 0572f3  mov esi, edx
    X86_AT(c, 0x572f3u);
    c.r[6] = c.r[2];
    // 0572f5  call 0x57cf8
    X86_AT(c, 0x572f5u);
    push32(c, 0x572fau); x86_call_known(c, 0x57cf8u, f_00057cf8); X86_RET(c, 0x572fau);
    X86_TICK(c, 35);
    // 0572fa  movzx eax, ax
    X86_AT(c, 0x572fau);
    c.r[0] = (c.r[0] & 0xFFFFu);
    // 0572fd  movzx edx, word ptr [ebx + 8]
    X86_AT(c, 0x572fdu);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 057301  movzx edi, word ptr [esi + 8]
    X86_AT(c, 0x57301u);
    c.r[7] = rd16((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 057305  sub edi, edx
    X86_AT(c, 0x57305u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[2], 0, 4); }
    // 057307  add edi, 0x403e
    X86_AT(c, 0x57307u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x403Eu, 0, 4); }
    // 05730d  sub edi, eax
    X86_AT(c, 0x5730du);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 05730f  add dword ptr [0x4ba24], 0xfffffff4
    X86_AT(c, 0x5730fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4BA24u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 057316  and edi, edi
    X86_AT(c, 0x57316u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 057318  jge 0x57353
    X86_AT(c, 0x57318u);
    if (x86_cc(c, 13)) { goto L_57353; }
    X86_TICK(c, 7);
    // 05731a  cmp edi, 0xffffffc1
    X86_AT(c, 0x5731au);
    (void)x86_sub(c, c.r[7], 0xFFFFFFC1u, 0, 4);
    // 05731d  jl 0x5733c
    X86_AT(c, 0x5731du);
    if (x86_cc(c, 12)) { goto L_5733c; }
    X86_TICK(c, 18);
    // 05731f  mov eax, edi
    X86_AT(c, 0x5731fu);
    c.r[0] = c.r[7];
    // 057321  neg eax
    X86_AT(c, 0x57321u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 057323  push eax
    X86_AT(c, 0x57323u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 057324  push dword ptr [0x4ba24]
    X86_AT(c, 0x57324u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4BA24u))); push32(c, v); }
    // 05732a  call 0x57838
    X86_AT(c, 0x5732au);
    push32(c, 0x5732fu); x86_call_known(c, 0x57838u, f_00057838); X86_RET(c, 0x5732fu);
    X86_TICK(c, 13);
    // 05732f  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x5732fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 057334  mov word ptr [eax + 8], 0
    X86_AT(c, 0x57334u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), 0x0u);
    // 05733a  jmp 0x5735f
    X86_AT(c, 0x5733au);
    goto L_5735f;
L_5733c:
    X86_TICK(c, 30);
    // 05733c  mov esi, 0x4ba34
    X86_AT(c, 0x5733cu);
    c.r[6] = 0x4BA34u;
    // 057341  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x57341u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 057346  push edi
    X86_AT(c, 0x57346u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 057347  mov edi, eax
    X86_AT(c, 0x57347u);
    c.r[7] = c.r[0];
    // 057349  mov ecx, 3
    X86_AT(c, 0x57349u);
    c.r[1] = 0x3u;
    // 05734e  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x5734eu);
    x86_string(c, 0, 4, 243, 4, 3);
    // 057350  pop edi
    X86_AT(c, 0x57350u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 057351  jmp 0x5735f
    X86_AT(c, 0x57351u);
    goto L_5735f;
L_57353:
    X86_TICK(c, 8);
    // 057353  mov eax, edi
    X86_AT(c, 0x57353u);
    c.r[0] = c.r[7];
    // 057355  mov edx, dword ptr [0x4ba24]
    X86_AT(c, 0x57355u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 05735b  mov word ptr [edx + 8], ax
    X86_AT(c, 0x5735bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[0] & 0xFFFFu));
L_5735f:
    X86_TICK(c, 12);
    // 05735f  push dword ptr [0x4ba24]
    X86_AT(c, 0x5735fu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4BA24u))); push32(c, v); }
    // 057365  call 0x578d4
    X86_AT(c, 0x57365u);
    push32(c, 0x5736au); x86_call_known(c, 0x578d4u, f_000578d4); X86_RET(c, 0x5736au);
L_5736a:
    X86_TICK(c, 22);
    // 05736a  pop edi
    X86_AT(c, 0x5736au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05736b  pop esi
    X86_AT(c, 0x5736bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 05736c  pop ebx
    X86_AT(c, 0x5736cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 05736d  ret 
    X86_AT(c, 0x5736du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57220u, "ran off the end of a function");
}
void f_0005736a(X86Cpu& c) {
    X86_TICK(c, 22);
    // 05736a  pop edi
    X86_AT(c, 0x5736au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05736b  pop esi
    X86_AT(c, 0x5736bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 05736c  pop ebx
    X86_AT(c, 0x5736cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 05736d  ret 
    X86_AT(c, 0x5736du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5736au, "ran off the end of a function");
}
void f_00057370(X86Cpu& c) {
    X86_TICK(c, 24);
    // 057370  enter 0x10, 0
    X86_AT(c, 0x57370u);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 057374  push ebx
    X86_AT(c, 0x57374u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 057375  push esi
    X86_AT(c, 0x57375u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 057376  push edi
    X86_AT(c, 0x57376u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 057377  cmp byte ptr [0x4b593], 0
    X86_AT(c, 0x57377u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B593u))), 0x0u, 0, 1);
    // 05737e  je 0x57399
    X86_AT(c, 0x5737eu);
    if (x86_cc(c, 4)) { goto L_57399; }
    X86_TICK(c, 20);
    // 057380  push dword ptr [0x4ba24]
    X86_AT(c, 0x57380u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4BA24u))); push32(c, v); }
    // 057386  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x57386u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 05738b  sub eax, 0xc
    X86_AT(c, 0x5738bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0xCu, 0, 4); }
    // 05738e  push eax
    X86_AT(c, 0x5738eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05738f  call 0x574b7
    X86_AT(c, 0x5738fu);
    push32(c, 0x57394u); x86_call_known(c, 0x574b7u, f_000574b7); X86_RET(c, 0x57394u);
    X86_TICK(c, 7);
    // 057394  jmp 0x57406
    X86_AT(c, 0x57394u);
    goto L_57406;
L_57399:
    X86_TICK(c, 16);
    // 057399  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x57399u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 05739e  cmp byte ptr [eax + 0xb], 0
    X86_AT(c, 0x5739eu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu))), 0x0u, 0, 1);
    // 0573a2  je 0x573aa
    X86_AT(c, 0x573a2u);
    if (x86_cc(c, 4)) { goto L_573aa; }
    X86_TICK(c, 12);
    // 0573a4  cmp byte ptr [eax - 1], 0
    X86_AT(c, 0x573a4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFFu))), 0x0u, 0, 1);
    // 0573a8  jne 0x573c2
    X86_AT(c, 0x573a8u);
    if (x86_cc(c, 5)) { goto L_573c2; }
L_573aa:
    X86_TICK(c, 24);
    // 0573aa  mov esi, dword ptr [0x4ba24]
    X86_AT(c, 0x573aau);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 0573b0  mov edi, dword ptr [0x4ba24]
    X86_AT(c, 0x573b0u);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 0573b6  sub edi, 0xc
    X86_AT(c, 0x573b6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, 0xCu, 0, 4); }
    // 0573b9  mov ecx, 0xc
    X86_AT(c, 0x573b9u);
    c.r[1] = 0xCu;
    // 0573be  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0x573beu);
    x86_string(c, 1, 1, 243, 4, 3);
    // 0573c0  jne 0x573c6
    X86_AT(c, 0x573c0u);
    if (x86_cc(c, 5)) { goto L_573c6; }
L_573c2:
    X86_TICK(c, 9);
    // 0573c2  sub eax, eax
    X86_AT(c, 0x573c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0573c4  jmp 0x57406
    X86_AT(c, 0x573c4u);
    goto L_57406;
L_573c6:
    X86_TICK(c, 21);
    // 0573c6  mov eax, dword ptr [0x4ba24]
    X86_AT(c, 0x573c6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 0573cb  mov dl, byte ptr [eax + 0xa]
    X86_AT(c, 0x573cbu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu))));
    // 0573ce  mov byte ptr [ebp - 0xd], dl
    X86_AT(c, 0x573ceu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), g8(c, 2));
    // 0573d1  mov bl, byte ptr [eax - 2]
    X86_AT(c, 0x573d1u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xFFFFFFFEu))));
    // 0573d4  cmp dl, bl
    X86_AT(c, 0x573d4u);
    (void)x86_sub(c, g8(c, 2), g8(c, 3), 0, 1);
    // 0573d6  jne 0x573f9
    X86_AT(c, 0x573d6u);
    if (x86_cc(c, 5)) { goto L_573f9; }
    X86_TICK(c, 28);
    // 0573d8  lea esi, [eax - 0xc]
    X86_AT(c, 0x573d8u);
    c.r[6] = (uint32_t)(c.r[0] + 0xFFFFFFF4u);
    // 0573db  lea edi, [ebp - 0xc]
    X86_AT(c, 0x573dbu);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0573de  mov ecx, 3
    X86_AT(c, 0x573deu);
    c.r[1] = 0x3u;
    // 0573e3  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x573e3u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0573e5  push 5
    X86_AT(c, 0x573e5u);
    { uint32_t v = 0x5u; push32(c, v); }
    // 0573e7  push eax
    X86_AT(c, 0x573e7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0573e8  lea eax, [ebp - 0xc]
    X86_AT(c, 0x573e8u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 0573eb  push eax
    X86_AT(c, 0x573ebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0573ec  call 0x5776d
    X86_AT(c, 0x573ecu);
    push32(c, 0x573f1u); x86_call_known(c, 0x5776du, f_0005776d); X86_RET(c, 0x573f1u);
    X86_TICK(c, 14);
    // 0573f1  cmp al, bl
    X86_AT(c, 0x573f1u);
    (void)x86_sub(c, g8(c, 0), g8(c, 3), 0, 1);
    // 0573f3  setne byte ptr [ebp - 0xe]
    X86_AT(c, 0x573f3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), x86_cc(c, 5) ? 1u : 0u);
    // 0573f7  jmp 0x573fc
    X86_AT(c, 0x573f7u);
    goto L_573fc;
L_573f9:
    X86_TICK(c, 2);
    // 0573f9  mov byte ptr [ebp - 0xe], bl
    X86_AT(c, 0x573f9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), g8(c, 3));
L_573fc:
    X86_TICK(c, 12);
    // 0573fc  mov al, byte ptr [ebp - 0xe]
    X86_AT(c, 0x573fcu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 0573ff  add eax, eax
    X86_AT(c, 0x573ffu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 057401  sub ah, ah
    X86_AT(c, 0x57401u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, g8(c, 4), 0, 1)); }
    // 057403  neg eax
    X86_AT(c, 0x57403u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 057405  inc eax
    X86_AT(c, 0x57405u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_57406:
    X86_TICK(c, 28);
    // 057406  pop edi
    X86_AT(c, 0x57406u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 057407  pop esi
    X86_AT(c, 0x57407u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 057408  pop ebx
    X86_AT(c, 0x57408u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 057409  leave 
    X86_AT(c, 0x57409u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05740a  ret 
    X86_AT(c, 0x5740au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57370u, "ran off the end of a function");
}
void f_0005740c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 05740c  enter 4, 0
    X86_AT(c, 0x5740cu);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 057410  call 0x57370
    X86_AT(c, 0x57410u);
    push32(c, 0x57415u); x86_call_known(c, 0x57370u, f_00057370); X86_RET(c, 0x57415u);
    X86_TICK(c, 25);
    // 057415  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x57415u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 057419  add dword ptr [0x4ba24], 0xffffffe8
    X86_AT(c, 0x57419u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4BA24u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFE8u, 0, 4)); }
    // 057420  leave 
    X86_AT(c, 0x57420u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 057421  ret 
    X86_AT(c, 0x57421u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5740cu, "ran off the end of a function");
}
void f_00057424(X86Cpu& c) {
    X86_TICK(c, 19);
    // 057424  enter 4, 0
    X86_AT(c, 0x57424u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 057428  push esi
    X86_AT(c, 0x57428u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 057429  push edi
    X86_AT(c, 0x57429u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05742a  mov si, 1
    X86_AT(c, 0x5742au);
    s16(c, 6, 0x1u);
    // 05742e  call 0x5740c
    X86_AT(c, 0x5742eu);
    push32(c, 0x57433u); x86_call_known(c, 0x5740cu, f_0005740c); X86_RET(c, 0x57433u);
    X86_TICK(c, 9);
    // 057433  lea edi, [esi + eax*1]
    X86_AT(c, 0x57433u);
    c.r[7] = (uint32_t)(c.r[6] + c.r[0]);
    // 057436  cmp di, si
    X86_AT(c, 0x57436u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 057439  jle 0x5743f
    X86_AT(c, 0x57439u);
    if (x86_cc(c, 14)) { goto L_5743f; }
    X86_TICK(c, 2);
    // 05743b  mov byte ptr [ebp - 1], 0
    X86_AT(c, 0x5743bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), 0x0u);
L_5743f:
    X86_TICK(c, 24);
    // 05743f  pop edi
    X86_AT(c, 0x5743fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 057440  pop esi
    X86_AT(c, 0x57440u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 057441  leave 
    X86_AT(c, 0x57441u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 057442  ret 
    X86_AT(c, 0x57442u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57424u, "ran off the end of a function");
}
void f_00057444(X86Cpu& c) {
    X86_TICK(c, 32);
    // 057444  esc 0xf, byte ptr [0x4ba88]
    X86_AT(c, 0x57444u);
    // 05744a  wait 
    X86_AT(c, 0x5744au);
    // 05744b  mov ax, word ptr [0x4ba88]
    X86_AT(c, 0x5744bu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4BA88u))));
    // 057451  and ax, 0xf3ff
    X86_AT(c, 0x57451u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xF3FFu, 2)); }
    // 057455  or eax, ecx
    X86_AT(c, 0x57455u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[1], 4); }
    // 057457  mov word ptr [0x4ba86], ax
    X86_AT(c, 0x57457u);
    wr16((c.sbase[3] + (uint32_t)(0x4BA86u)), (c.r[0] & 0xFFFFu));
    // 05745d  esc 0xd, byte ptr [0x4ba86]
    X86_AT(c, 0x5745du);
    // 057463  ret 
    X86_AT(c, 0x57463u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57444u, "ran off the end of a function");
}
void f_00057464(X86Cpu& c) {
    X86_TICK(c, 20);
    // 057464  push eax
    X86_AT(c, 0x57464u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 057465  esc 0x3c, al
    X86_AT(c, 0x57465u);
    // 057467  wait 
    X86_AT(c, 0x57467u);
    // 057468  and ax, 0x4100
    X86_AT(c, 0x57468u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0x4100u, 2)); }
    // 05746c  cmp ax, 0x4000
    X86_AT(c, 0x5746cu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x4000u, 0, 2);
    // 057470  je 0x57476
    X86_AT(c, 0x57470u);
    if (x86_cc(c, 4)) { goto L_57476; }
    X86_TICK(c, 2);
    // 057472  cmp ax, 1
    X86_AT(c, 0x57472u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x1u, 0, 2);
L_57476:
    X86_TICK(c, 14);
    // 057476  pop eax
    X86_AT(c, 0x57476u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 057477  ret 
    X86_AT(c, 0x57477u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57464u, "ran off the end of a function");
}
void f_0005748d(X86Cpu& c) {
    X86_TICK(c, 27);
    // 05748d  xor edx, edx
    X86_AT(c, 0x5748du);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 05748f  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0x5748fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 057493  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x57493u);
    // 057495  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x57495u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 057499  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x57499u);
    // 05749b  mov eax, dword ptr cs:[edx + 0x57481]
    X86_AT(c, 0x5749bu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0x57481u)));
    // 0574a2  call eax
    X86_AT(c, 0x574a2u);
    { uint32_t t = c.r[0]; push32(c, 0x574a4u); x86_call(c, t); X86_RET(c, 0x574a4u); }
    X86_TICK(c, 13);
    // 0574a4  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0x574a4u);
    // 0574a6  ret 8
    X86_AT(c, 0x574a6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x5748du, "ran off the end of a function");
}
void f_000574a9(X86Cpu& c) {
    goto L_574a9;
L_5748f:
    X86_TICK(c, 25);
    // 05748f  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0x5748fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 057493  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x57493u);
    // 057495  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x57495u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 057499  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x57499u);
    // 05749b  mov eax, dword ptr cs:[edx + 0x57481]
    X86_AT(c, 0x5749bu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0x57481u)));
    // 0574a2  call eax
    X86_AT(c, 0x574a2u);
    { uint32_t t = c.r[0]; push32(c, 0x574a4u); x86_call(c, t); X86_RET(c, 0x574a4u); }
    X86_TICK(c, 13);
    // 0574a4  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0x574a4u);
    // 0574a6  ret 8
    X86_AT(c, 0x574a6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_574a9:
    X86_TICK(c, 9);
    // 0574a9  mov edx, 4
    X86_AT(c, 0x574a9u);
    c.r[2] = 0x4u;
    // 0574ae  jmp 0x5748f
    X86_AT(c, 0x574aeu);
    X86_POLL(c, 0x5748fu); goto L_5748f;
    x86_fault(c, 0x574a9u, "ran off the end of a function");
}
void f_000574b0(X86Cpu& c) {
    goto L_574b0;
L_5748f:
    X86_TICK(c, 25);
    // 05748f  mov ecx, dword ptr [esp + 8]
    X86_AT(c, 0x5748fu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 057493  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x57493u);
    // 057495  mov ecx, dword ptr [esp + 4]
    X86_AT(c, 0x57495u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 057499  esc 0x1d, byte ptr [ecx]
    X86_AT(c, 0x57499u);
    // 05749b  mov eax, dword ptr cs:[edx + 0x57481]
    X86_AT(c, 0x5749bu);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[2] + 0x57481u)));
    // 0574a2  call eax
    X86_AT(c, 0x574a2u);
    { uint32_t t = c.r[0]; push32(c, 0x574a4u); x86_call(c, t); X86_RET(c, 0x574a4u); }
    X86_TICK(c, 13);
    // 0574a4  esc 0x1f, byte ptr [ecx]
    X86_AT(c, 0x574a4u);
    // 0574a6  ret 8
    X86_AT(c, 0x574a6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_574b0:
    X86_TICK(c, 9);
    // 0574b0  mov edx, 8
    X86_AT(c, 0x574b0u);
    c.r[2] = 0x8u;
    // 0574b5  jmp 0x5748f
    X86_AT(c, 0x574b5u);
    X86_POLL(c, 0x5748fu); goto L_5748f;
    x86_fault(c, 0x574b0u, "ran off the end of a function");
}
void f_000574b7(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0574b7  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x574b7u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 0574bb  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0x574bbu);
    // 0574bd  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0x574bdu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0574c1  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0x574c1u);
    // 0574c3  esc 0x33, cl
    X86_AT(c, 0x574c3u);
    // 0574c5  call 0x5752a
    X86_AT(c, 0x574c5u);
    push32(c, 0x574cau); x86_call_known(c, 0x5752au, f_0005752a); X86_RET(c, 0x574cau);
    X86_TICK(c, 10);
    // 0574ca  ret 8
    X86_AT(c, 0x574cau);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x574b7u, "ran off the end of a function");
}
void f_000574f3(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0574f3  esc 8, byte ptr [esp + 4]
    X86_AT(c, 0x574f3u);
    // 0574f7  ret 4
    X86_AT(c, 0x574f7u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x574f3u, "ran off the end of a function");
}
void f_0005750d(X86Cpu& c) {
    X86_TICK(c, 13);
    // 05750d  esc 0x28, byte ptr [esp + 4]
    X86_AT(c, 0x5750du);
    // 057511  ret 8
    X86_AT(c, 0x57511u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x5750du, "ran off the end of a function");
}
void f_00057514(X86Cpu& c) {
    X86_TICK(c, 23);
    // 057514  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x57514u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 057518  esc 0x1f, byte ptr [eax]
    X86_AT(c, 0x57518u);
    // 05751a  wait 
    X86_AT(c, 0x5751au);
    // 05751b  ret 4
    X86_AT(c, 0x5751bu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x57514u, "ran off the end of a function");
}
void f_0005751e(X86Cpu& c) {
    X86_TICK(c, 17);
    // 05751e  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x5751eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 057522  esc 0x1d, byte ptr [eax]
    X86_AT(c, 0x57522u);
    // 057524  ret 4
    X86_AT(c, 0x57524u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x5751eu, "ran off the end of a function");
}
void f_00057527(X86Cpu& c) {
    X86_TICK(c, 13);
    // 057527  esc 0x2b, al
    X86_AT(c, 0x57527u);
    // 057529  ret 
    X86_AT(c, 0x57529u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57527u, "ran off the end of a function");
}
void f_0005752a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 05752a  xor eax, eax
    X86_AT(c, 0x5752au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 05752c  call 0x57464
    X86_AT(c, 0x5752cu);
    push32(c, 0x57531u); x86_call_known(c, 0x57464u, f_00057464); X86_RET(c, 0x57531u);
    X86_TICK(c, 5);
    // 057531  je 0x57538
    X86_AT(c, 0x57531u);
    if (x86_cc(c, 4)) { goto L_57538; }
    X86_TICK(c, 5);
    // 057533  jb 0x57537
    X86_AT(c, 0x57533u);
    if (x86_cc(c, 2)) { goto L_57537; }
    X86_TICK(c, 12);
    // 057535  inc eax
    X86_AT(c, 0x57535u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 057536  ret 
    X86_AT(c, 0x57536u);
    c.eip = pop32(c); return;
L_57537:
    X86_TICK(c, 2);
    // 057537  dec eax
    X86_AT(c, 0x57537u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
L_57538:
    X86_TICK(c, 10);
    // 057538  ret 
    X86_AT(c, 0x57538u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5752au, "ran off the end of a function");
}
void f_00057567(X86Cpu& c) {
    X86_TICK(c, 24);
    // 057567  esc 0xc, ch
    X86_AT(c, 0x57567u);
    // 057569  xor eax, eax
    X86_AT(c, 0x57569u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 05756b  esc 0x3c, al
    X86_AT(c, 0x5756bu);
    // 05756d  wait 
    X86_AT(c, 0x5756du);
    // 05756e  ret 
    X86_AT(c, 0x5756eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57567u, "ran off the end of a function");
}
void f_0005756f(X86Cpu& c) {
    X86_TICK(c, 23);
    // 05756f  mov eax, dword ptr [esp + 4]
    X86_AT(c, 0x5756fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 057573  esc 0x3e, byte ptr [eax]
    X86_AT(c, 0x57573u);
    // 057575  wait 
    X86_AT(c, 0x57575u);
    // 057576  ret 4
    X86_AT(c, 0x57576u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x5756fu, "ran off the end of a function");
}
void f_00057584(X86Cpu& c) {
    X86_TICK(c, 36);
    // 057584  push ebp
    X86_AT(c, 0x57584u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 057585  mov ebp, esp
    X86_AT(c, 0x57585u);
    c.r[5] = c.r[4];
    // 057587  push esi
    X86_AT(c, 0x57587u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 057588  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x57588u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 05758b  mov edx, dword ptr [eax + 4]
    X86_AT(c, 0x5758bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)));
    // 05758e  mov esi, edx
    X86_AT(c, 0x5758eu);
    c.r[6] = c.r[2];
    // 057590  shr esi, 0x14
    X86_AT(c, 0x57590u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x14u, 4, w); if (w) c.r[6] = r; }
    // 057593  mov ecx, dword ptr [eax]
    X86_AT(c, 0x57593u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 057595  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x57595u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 057598  and si, 0x7ff
    X86_AT(c, 0x57598u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & 0x7FFu, 2)); }
    // 05759d  cmp si, 0x7ff
    X86_AT(c, 0x5759du);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x7FFu, 0, 2);
    // 0575a2  je 0x575e9
    X86_AT(c, 0x575a2u);
    if (x86_cc(c, 4)) { goto L_575e9; }
    X86_TICK(c, 7);
    // 0575a4  and si, si
    X86_AT(c, 0x575a4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0575a7  je 0x575f3
    X86_AT(c, 0x575a7u);
    if (x86_cc(c, 4)) { goto L_575f3; }
    X86_TICK(c, 6);
    // 0575a9  mov byte ptr [eax + 0xb], 0
    X86_AT(c, 0x575a9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x0u);
    // 0575ad  sub si, 0x3ff
    X86_AT(c, 0x575adu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_sub(c, v, 0x3FFu, 0, 2)); }
    // 0575b2  add si, 0x3fff
    X86_AT(c, 0x575b2u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x3FFFu, 0, 2)); }
L_575b7:
    X86_TICK(c, 9);
    // 0575b7  mov word ptr [eax + 8], si
    X86_AT(c, 0x575b7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)), (c.r[6] & 0xFFFFu));
    // 0575bb  test edx, 0x80000000
    X86_AT(c, 0x575bbu);
    (void)x86_logic(c, c.r[2] & 0x80000000u, 4);
    // 0575c1  je 0x575c9
    X86_AT(c, 0x575c1u);
    if (x86_cc(c, 4)) { goto L_575c9; }
    X86_TICK(c, 9);
    // 0575c3  mov byte ptr [eax + 0xa], 1
    X86_AT(c, 0x575c3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x1u);
    // 0575c7  jmp 0x575cd
    X86_AT(c, 0x575c7u);
    goto L_575cd;
L_575c9:
    X86_TICK(c, 2);
    // 0575c9  mov byte ptr [eax + 0xa], 0
    X86_AT(c, 0x575c9u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xAu)), 0x0u);
L_575cd:
    X86_TICK(c, 13);
    // 0575cd  shld edx, ecx, 0xb
    X86_AT(c, 0x575cdu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[1], 0xBu, 4, w); if (w) c.r[2] = r; }
    // 0575d1  shl ecx, 0xb
    X86_AT(c, 0x575d1u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xBu, 4, w); if (w) c.r[1] = r; }
    // 0575d4  and si, si
    X86_AT(c, 0x575d4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 0575d7  je 0x575df
    X86_AT(c, 0x575d7u);
    if (x86_cc(c, 4)) { goto L_575df; }
    X86_TICK(c, 2);
    // 0575d9  or edx, 0x80000000
    X86_AT(c, 0x575d9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v | 0x80000000u, 4); }
L_575df:
    X86_TICK(c, 22);
    // 0575df  mov dword ptr [eax + 4], edx
    X86_AT(c, 0x575dfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[0] + 0x4u)), c.r[2]);
    // 0575e2  mov dword ptr [eax], ecx
    X86_AT(c, 0x575e2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[0])), c.r[1]);
    // 0575e4  pop esi
    X86_AT(c, 0x575e4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0575e5  pop ebp
    X86_AT(c, 0x575e5u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0575e6  ret 8
    X86_AT(c, 0x575e6u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_575e9:
    X86_TICK(c, 11);
    // 0575e9  mov si, 0x7fff
    X86_AT(c, 0x575e9u);
    s16(c, 6, 0x7FFFu);
    // 0575ed  mov byte ptr [eax + 0xb], 0
    X86_AT(c, 0x575edu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x0u);
    // 0575f1  jmp 0x575b7
    X86_AT(c, 0x575f1u);
    X86_POLL(c, 0x575b7u); goto L_575b7;
L_575f3:
    X86_TICK(c, 9);
    // 0575f3  mov byte ptr [eax + 0xb], 1
    X86_AT(c, 0x575f3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0xBu)), 0x1u);
    // 0575f7  jmp 0x575b7
    X86_AT(c, 0x575f7u);
    X86_POLL(c, 0x575b7u); goto L_575b7;
    x86_fault(c, 0x57584u, "ran off the end of a function");
}
void f_0005767c(X86Cpu& c) {
    X86_TICK(c, 27);
    // 05767c  push ebp
    X86_AT(c, 0x5767cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 05767d  mov ebp, esp
    X86_AT(c, 0x5767du);
    c.r[5] = c.r[4];
    // 05767f  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x5767fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 057682  mov ecx, eax
    X86_AT(c, 0x57682u);
    c.r[1] = c.r[0];
    // 057684  shl ecx, 1
    X86_AT(c, 0x57684u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 057686  shr ecx, 0x18
    X86_AT(c, 0x57686u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x18u, 4, w); if (w) c.r[1] = r; }
    // 057689  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x57689u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 05768c  cmp cl, 0xff
    X86_AT(c, 0x5768cu);
    (void)x86_sub(c, g8(c, 1), 0xFFu, 0, 1);
    // 05768f  je 0x576d1
    X86_AT(c, 0x5768fu);
    if (x86_cc(c, 4)) { goto L_576d1; }
    X86_TICK(c, 7);
    // 057691  and cl, cl
    X86_AT(c, 0x57691u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & g8(c, 1), 1)); }
    // 057693  je 0x576db
    X86_AT(c, 0x57693u);
    if (x86_cc(c, 4)) { goto L_576db; }
    X86_TICK(c, 6);
    // 057695  mov byte ptr [edx + 0xb], 0
    X86_AT(c, 0x57695u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x0u);
    // 057699  sub cx, 0x7f
    X86_AT(c, 0x57699u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x7Fu, 0, 2)); }
    // 05769d  add cx, 0x3fff
    X86_AT(c, 0x5769du);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x3FFFu, 0, 2)); }
L_576a2:
    X86_TICK(c, 9);
    // 0576a2  mov word ptr [edx + 8], cx
    X86_AT(c, 0x576a2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), (c.r[1] & 0xFFFFu));
    // 0576a6  test eax, 0x80000000
    X86_AT(c, 0x576a6u);
    (void)x86_logic(c, c.r[0] & 0x80000000u, 4);
    // 0576ab  je 0x576b3
    X86_AT(c, 0x576abu);
    if (x86_cc(c, 4)) { goto L_576b3; }
    X86_TICK(c, 9);
    // 0576ad  mov byte ptr [edx + 0xa], 1
    X86_AT(c, 0x576adu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xAu)), 0x1u);
    // 0576b1  jmp 0x576b7
    X86_AT(c, 0x576b1u);
    goto L_576b7;
L_576b3:
    X86_TICK(c, 2);
    // 0576b3  mov byte ptr [edx + 0xa], 0
    X86_AT(c, 0x576b3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xAu)), 0x0u);
L_576b7:
    X86_TICK(c, 10);
    // 0576b7  shl eax, 8
    X86_AT(c, 0x576b7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0576ba  and cx, cx
    X86_AT(c, 0x576bau);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & (c.r[1] & 0xFFFFu), 2)); }
    // 0576bd  je 0x576c4
    X86_AT(c, 0x576bdu);
    if (x86_cc(c, 4)) { goto L_576c4; }
    X86_TICK(c, 2);
    // 0576bf  or eax, 0x80000000
    X86_AT(c, 0x576bfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | 0x80000000u, 4); }
L_576c4:
    X86_TICK(c, 18);
    // 0576c4  mov dword ptr [edx + 4], eax
    X86_AT(c, 0x576c4u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[0]);
    // 0576c7  mov dword ptr [edx], 0
    X86_AT(c, 0x576c7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), 0x0u);
    // 0576cd  pop ebp
    X86_AT(c, 0x576cdu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0576ce  ret 8
    X86_AT(c, 0x576ceu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_576d1:
    X86_TICK(c, 11);
    // 0576d1  mov cx, 0x7fff
    X86_AT(c, 0x576d1u);
    s16(c, 1, 0x7FFFu);
    // 0576d5  mov byte ptr [edx + 0xb], 0
    X86_AT(c, 0x576d5u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x0u);
    // 0576d9  jmp 0x576a2
    X86_AT(c, 0x576d9u);
    X86_POLL(c, 0x576a2u); goto L_576a2;
L_576db:
    X86_TICK(c, 9);
    // 0576db  mov byte ptr [edx + 0xb], 1
    X86_AT(c, 0x576dbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + 0xBu)), 0x1u);
    // 0576df  jmp 0x576a2
    X86_AT(c, 0x576dfu);
    X86_POLL(c, 0x576a2u); goto L_576a2;
    x86_fault(c, 0x5767cu, "ran off the end of a function");
}
void f_00057744(X86Cpu& c) {
    X86_TICK(c, 31);
    // 057744  push ebp
    X86_AT(c, 0x57744u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 057745  mov ebp, esp
    X86_AT(c, 0x57745u);
    c.r[5] = c.r[4];
    // 057747  push esi
    X86_AT(c, 0x57747u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 057748  push edi
    X86_AT(c, 0x57748u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 057749  push ebx
    X86_AT(c, 0x57749u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 05774a  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x5774au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 05774d  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x5774du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 057750  xor edx, edx
    X86_AT(c, 0x57750u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 057752  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x57752u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 057756  shr ecx, 1
    X86_AT(c, 0x57756u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 057758  clc 
    X86_AT(c, 0x57758u);
    c.fl &= ~X86_CF;
L_57759:
    X86_TICK(c, 24);
    // 057759  mov eax, dword ptr [edi + edx*4]
    X86_AT(c, 0x57759u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 4)));
    // 05775c  adc dword ptr [esi + edx*4], eax
    X86_AT(c, 0x5775cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], c.fl & 1, 4)); }
    // 05775f  inc edx
    X86_AT(c, 0x5775fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 057760  loop 0x57759
    X86_AT(c, 0x57760u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x57759u); goto L_57759; }
    X86_TICK(c, 31);
    // 057762  mov al, 0
    X86_AT(c, 0x57762u);
    s8(c, 0, 0x0u);
    // 057764  rcl al, 1
    X86_AT(c, 0x57764u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 057766  pop ebx
    X86_AT(c, 0x57766u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 057767  pop edi
    X86_AT(c, 0x57767u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 057768  pop esi
    X86_AT(c, 0x57768u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 057769  pop ebp
    X86_AT(c, 0x57769u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 05776a  ret 0xc
    X86_AT(c, 0x5776au);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x57744u, "ran off the end of a function");
}
void f_0005776d(X86Cpu& c) {
    X86_TICK(c, 28);
    // 05776d  push ebp
    X86_AT(c, 0x5776du);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 05776e  mov ebp, esp
    X86_AT(c, 0x5776eu);
    c.r[5] = c.r[4];
    // 057770  push esi
    X86_AT(c, 0x57770u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 057771  push edi
    X86_AT(c, 0x57771u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 057772  push ebx
    X86_AT(c, 0x57772u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 057773  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x57773u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 057776  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x57776u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 057779  xor edx, edx
    X86_AT(c, 0x57779u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 05777b  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x5777bu);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 05777f  clc 
    X86_AT(c, 0x5777fu);
    c.fl &= ~X86_CF;
L_57780:
    X86_TICK(c, 24);
    // 057780  mov ax, word ptr [edi + edx*2]
    X86_AT(c, 0x57780u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 2))));
    // 057784  sbb word ptr [esi + edx*2], ax
    X86_AT(c, 0x57784u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 2)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), c.fl & 1, 2)); }
    // 057788  inc edx
    X86_AT(c, 0x57788u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 057789  loop 0x57780
    X86_AT(c, 0x57789u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x57780u); goto L_57780; }
    X86_TICK(c, 31);
    // 05778b  mov al, 0
    X86_AT(c, 0x5778bu);
    s8(c, 0, 0x0u);
    // 05778d  rcl al, 1
    X86_AT(c, 0x5778du);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 05778f  pop ebx
    X86_AT(c, 0x5778fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 057790  pop edi
    X86_AT(c, 0x57790u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 057791  pop esi
    X86_AT(c, 0x57791u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 057792  pop ebp
    X86_AT(c, 0x57792u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 057793  ret 0xc
    X86_AT(c, 0x57793u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x5776du, "ran off the end of a function");
}
void f_00057796(X86Cpu& c) {
    X86_TICK(c, 31);
    // 057796  push ebp
    X86_AT(c, 0x57796u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 057797  mov ebp, esp
    X86_AT(c, 0x57797u);
    c.r[5] = c.r[4];
    // 057799  push esi
    X86_AT(c, 0x57799u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 05779a  push edi
    X86_AT(c, 0x5779au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05779b  push ebx
    X86_AT(c, 0x5779bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 05779c  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x5779cu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 05779f  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x5779fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0577a2  xor edx, edx
    X86_AT(c, 0x577a2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0577a4  movzx ecx, word ptr [ebp + 0x10]
    X86_AT(c, 0x577a4u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0577a8  shr ecx, 1
    X86_AT(c, 0x577a8u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 0577aa  clc 
    X86_AT(c, 0x577aau);
    c.fl &= ~X86_CF;
L_577ab:
    X86_TICK(c, 25);
    // 0577ab  mov eax, dword ptr [edi + edx*4]
    X86_AT(c, 0x577abu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + c.r[2] * 4)));
    // 0577ae  sbb eax, dword ptr [esi + edx*4]
    X86_AT(c, 0x577aeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4))), c.fl & 1, 4); }
    // 0577b1  mov dword ptr [esi + edx*4], eax
    X86_AT(c, 0x577b1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)), c.r[0]);
    // 0577b4  inc edx
    X86_AT(c, 0x577b4u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0577b5  loop 0x577ab
    X86_AT(c, 0x577b5u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x577abu); goto L_577ab; }
    X86_TICK(c, 31);
    // 0577b7  mov al, 0
    X86_AT(c, 0x577b7u);
    s8(c, 0, 0x0u);
    // 0577b9  rcl al, 1
    X86_AT(c, 0x577b9u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0577bb  pop ebx
    X86_AT(c, 0x577bbu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0577bc  pop edi
    X86_AT(c, 0x577bcu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0577bd  pop esi
    X86_AT(c, 0x577bdu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0577be  pop ebp
    X86_AT(c, 0x577beu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0577bf  ret 0xc
    X86_AT(c, 0x577bfu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x57796u, "ran off the end of a function");
}
void f_000577c2(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0577c2  push esi
    X86_AT(c, 0x577c2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0577c3  mov esi, dword ptr [esp + 8]
    X86_AT(c, 0x577c3u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 0577c7  movzx ecx, word ptr [esp + 0xc]
    X86_AT(c, 0x577c7u);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0577cc  shr ecx, 1
    X86_AT(c, 0x577ccu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[1] = r; }
    // 0577ce  xor edx, edx
    X86_AT(c, 0x577ceu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0577d0  clc 
    X86_AT(c, 0x577d0u);
    c.fl &= ~X86_CF;
L_577d1:
    X86_TICK(c, 23);
    // 0577d1  mov eax, 0
    X86_AT(c, 0x577d1u);
    c.r[0] = 0x0u;
    // 0577d6  sbb eax, dword ptr [esi + edx*4]
    X86_AT(c, 0x577d6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4))), c.fl & 1, 4); }
    // 0577d9  mov dword ptr [esi + edx*4], eax
    X86_AT(c, 0x577d9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + c.r[2] * 4)), c.r[0]);
    // 0577dc  inc edx
    X86_AT(c, 0x577dcu);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0577dd  loop 0x577d1
    X86_AT(c, 0x577ddu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x577d1u); goto L_577d1; }
    X86_TICK(c, 19);
    // 0577df  mov al, 0
    X86_AT(c, 0x577dfu);
    s8(c, 0, 0x0u);
    // 0577e1  rcl al, 1
    X86_AT(c, 0x577e1u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 0577e3  pop esi
    X86_AT(c, 0x577e3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0577e4  ret 8
    X86_AT(c, 0x577e4u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x577c2u, "ran off the end of a function");
}
void f_000577e7(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0577e7  push edi
    X86_AT(c, 0x577e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0577e8  push ebx
    X86_AT(c, 0x577e8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0577e9  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x577e9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 0577ed  xor eax, eax
    X86_AT(c, 0x577edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0577ef  mov ebx, dword ptr [edi + 4]
    X86_AT(c, 0x577efu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)));
    // 0577f2  mov edx, dword ptr [edi]
    X86_AT(c, 0x577f2u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7])));
L_577f4:
    X86_TICK(c, 7);
    // 0577f4  and ebx, ebx
    X86_AT(c, 0x577f4u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 0577f6  jne 0x57803
    X86_AT(c, 0x577f6u);
    if (x86_cc(c, 5)) { goto L_57803; }
    X86_TICK(c, 13);
    // 0577f8  mov ebx, edx
    X86_AT(c, 0x577f8u);
    c.r[3] = c.r[2];
    // 0577fa  xor edx, edx
    X86_AT(c, 0x577fau);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0577fc  add eax, 0x20
    X86_AT(c, 0x577fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x20u, 0, 4); }
    // 057801  jmp 0x577f4
    X86_AT(c, 0x57801u);
    X86_POLL(c, 0x577f4u); goto L_577f4;
L_57803:
    X86_TICK(c, 44);
    // 057803  bsr ecx, ebx
    X86_AT(c, 0x57803u);
    c.r[1] = x86_bsr(c, c.r[3], c.r[1]);
    // 057806  sub ecx, 0x1f
    X86_AT(c, 0x57806u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x1Fu, 0, 4); }
    // 057809  neg ecx
    X86_AT(c, 0x57809u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 05780b  shld ebx, edx, cl
    X86_AT(c, 0x5780bu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 05780e  shl edx, cl
    X86_AT(c, 0x5780eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 057810  add eax, ecx
    X86_AT(c, 0x57810u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 057812  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x57812u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 057815  mov dword ptr [edi], edx
    X86_AT(c, 0x57815u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[2]);
    // 057817  pop ebx
    X86_AT(c, 0x57817u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 057818  pop edi
    X86_AT(c, 0x57818u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 057819  ret 4
    X86_AT(c, 0x57819u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x577e7u, "ran off the end of a function");
}
void f_0005781c(X86Cpu& c) {
    X86_TICK(c, 33);
    // 05781c  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0x5781cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 057820  shl dword ptr [edx], 1
    X86_AT(c, 0x57820u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 057822  rcl dword ptr [edx + 4], 1
    X86_AT(c, 0x57822u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 057825  mov al, 0
    X86_AT(c, 0x57825u);
    s8(c, 0, 0x0u);
    // 057827  rcl al, 1
    X86_AT(c, 0x57827u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 057829  ret 4
    X86_AT(c, 0x57829u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x5781cu, "ran off the end of a function");
}
void f_00057838(X86Cpu& c) {
    X86_TICK(c, 15);
    // 057838  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0x57838u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 05783c  movzx ecx, word ptr [esp + 8]
    X86_AT(c, 0x5783cu);
    c.r[1] = rd16((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 057841  jecxz 0x57878
    X86_AT(c, 0x57841u);
    if (c.r[1] == 0) { goto L_57878; }
    X86_TICK(c, 7);
    // 057843  cmp ecx, 0x20
    X86_AT(c, 0x57843u);
    (void)x86_sub(c, c.r[1], 0x20u, 0, 4);
    // 057846  jl 0x5785f
    X86_AT(c, 0x57846u);
    if (x86_cc(c, 12)) { goto L_5785f; }
    X86_TICK(c, 14);
    // 057848  mov eax, dword ptr [edx + 4]
    X86_AT(c, 0x57848u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)));
    // 05784b  clc 
    X86_AT(c, 0x5784bu);
    c.fl &= ~X86_CF;
    // 05784c  shr eax, cl
    X86_AT(c, 0x5784cu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 05784e  jae 0x57851
    X86_AT(c, 0x5784eu);
    if (x86_cc(c, 3)) { goto L_57851; }
    X86_TICK(c, 2);
    // 057850  inc eax
    X86_AT(c, 0x57850u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_57851:
    X86_TICK(c, 11);
    // 057851  mov dword ptr [edx], eax
    X86_AT(c, 0x57851u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2])), c.r[0]);
    // 057853  mov dword ptr [edx + 4], 0
    X86_AT(c, 0x57853u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), 0x0u);
    // 05785a  jmp 0x57878
    X86_AT(c, 0x5785au);
    goto L_57878;
L_5785f:
    X86_TICK(c, 31);
    // 05785f  mov eax, dword ptr [edx + 4]
    X86_AT(c, 0x5785fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)));
    // 057862  shrd dword ptr [edx], eax, cl
    X86_AT(c, 0x57862u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_double(c, false, v, c.r[0], g8(c, 1), 4, w); if (w) wr32(ea, r); }
    // 057865  pushf 
    X86_AT(c, 0x57865u);
    push16(c, c.fl & 0xFFFFu);
    // 057867  shr eax, cl
    X86_AT(c, 0x57867u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 057869  popf 
    X86_AT(c, 0x57869u);
    x86_popfd(c, 2);
    // 05786b  jae 0x57875
    X86_AT(c, 0x5786bu);
    if (x86_cc(c, 3)) { goto L_57875; }
    X86_TICK(c, 9);
    // 05786d  add dword ptr [edx], 1
    X86_AT(c, 0x5786du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x1u, 0, 4)); }
    // 057870  adc eax, 0
    X86_AT(c, 0x57870u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
L_57875:
    X86_TICK(c, 2);
    // 057875  mov dword ptr [edx + 4], eax
    X86_AT(c, 0x57875u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[0]);
L_57878:
    X86_TICK(c, 10);
    // 057878  ret 8
    X86_AT(c, 0x57878u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x57838u, "ran off the end of a function");
}
void f_0005787b(X86Cpu& c) {
    X86_TICK(c, 42);
    // 05787b  mov edx, dword ptr [esp + 4]
    X86_AT(c, 0x5787bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x4u)));
    // 05787f  shl dword ptr [edx], 1
    X86_AT(c, 0x5787fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2])); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 057881  rcl dword ptr [edx + 4], 1
    X86_AT(c, 0x57881u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 057884  rcl dword ptr [edx + 8], 1
    X86_AT(c, 0x57884u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 057887  rcl dword ptr [edx + 0xc], 1
    X86_AT(c, 0x57887u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[2] + 0xCu)); uint32_t v = rd32(ea); bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) wr32(ea, r); }
    // 05788a  ret 4
    X86_AT(c, 0x5788au);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x5787bu, "ran off the end of a function");
}
void f_00057890(X86Cpu& c) {
    X86_TICK(c, 9);
    // 057890  push 0x17e8
    X86_AT(c, 0x57890u);
    { uint32_t v = 0x17E8u; push32(c, v); }
    // 057895  call 0x57d90
    X86_AT(c, 0x57895u);
    push32(c, 0x5789au); x86_call_known(c, 0x57d90u, f_00057d90); X86_RET(c, 0x5789au);
    X86_TICK(c, 13);
    // 05789a  mov ax, word ptr [0x4b8dc]
    X86_AT(c, 0x5789au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4B8DCu))));
    // 0578a0  push eax
    X86_AT(c, 0x578a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0578a1  call 0x56c14
    X86_AT(c, 0x578a1u);
    push32(c, 0x578a6u); x86_call_known(c, 0x56c14u, f_00056c14); X86_RET(c, 0x578a6u);
    X86_TICK(c, 9);
    // 0578a6  push 1
    X86_AT(c, 0x578a6u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0578a8  call 0x55cac
    X86_AT(c, 0x578a8u);
    push32(c, 0x578adu); x86_call_known(c, 0x55cacu, f_00055cac); X86_RET(c, 0x578adu);
    X86_TICK(c, 10);
    // 0578ad  ret 
    X86_AT(c, 0x578adu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x57890u, "ran off the end of a function");
}
void f_000578b0(X86Cpu& c) {
    X86_TICK(c, 13);
    // 0578b0  mov eax, 0x4ba18
    X86_AT(c, 0x578b0u);
    c.r[0] = 0x4BA18u;
    // 0578b5  cmp eax, dword ptr [0x4ba24]
    X86_AT(c, 0x578b5u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x4BA24u))), 0, 4);
    // 0578bb  ja 0x578c2
    X86_AT(c, 0x578bbu);
    if (x86_cc(c, 7)) { goto L_578c2; }
    X86_TICK(c, 7);
    // 0578bd  call 0x57890
    X86_AT(c, 0x578bdu);
    push32(c, 0x578c2u); x86_call_known(c, 0x57890u, f_00057890); X86_RET(c, 0x578c2u);
L_578c2:
    X86_TICK(c, 17);
    // 0578c2  add dword ptr [0x4ba24], 0xc
    X86_AT(c, 0x578c2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4BA24u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xCu, 0, 4)); }
    // 0578c9  ret 
    X86_AT(c, 0x578c9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x578b0u, "ran off the end of a function");
}
void f_000578cc(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0578cc  add dword ptr [0x4ba24], 0xfffffff4
    X86_AT(c, 0x578ccu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4BA24u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 0578d3  ret 
    X86_AT(c, 0x578d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x578ccu, "ran off the end of a function");
}
void f_000578d4(X86Cpu& c) {
    X86_TICK(c, 41);
    // 0578d4  push ebp
    X86_AT(c, 0x578d4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0578d5  mov ebp, esp
    X86_AT(c, 0x578d5u);
    c.r[5] = c.r[4];
    // 0578d7  push esi
    X86_AT(c, 0x578d7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0578d8  push edi
    X86_AT(c, 0x578d8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0578d9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x578d9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0578dc  mov ax, word ptr [edi]
    X86_AT(c, 0x578dcu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0578df  or ax, word ptr [edi + 2]
    X86_AT(c, 0x578dfu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2u))), 2)); }
    // 0578e3  or ax, word ptr [edi + 4]
    X86_AT(c, 0x578e3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 2)); }
    // 0578e7  or ax, word ptr [edi + 6]
    X86_AT(c, 0x578e7u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v | rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x6u))), 2)); }
    // 0578eb  and ax, ax
    X86_AT(c, 0x578ebu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0578ee  jne 0x578ff
    X86_AT(c, 0x578eeu);
    if (x86_cc(c, 5)) { goto L_578ff; }
    X86_TICK(c, 15);
    // 0578f0  sub eax, eax
    X86_AT(c, 0x578f0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0578f2  mov word ptr [edi + 8], ax
    X86_AT(c, 0x578f2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 0578f6  mov byte ptr [edi + 0xb], 1
    X86_AT(c, 0x578f6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xBu)), 0x1u);
    // 0578fa  mov byte ptr [edi + 0xa], al
    X86_AT(c, 0x578fau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xAu)), g8(c, 0));
    // 0578fd  jmp 0x57954
    X86_AT(c, 0x578fdu);
    goto L_57954;
L_578ff:
    X86_TICK(c, 12);
    // 0578ff  cmp word ptr [edi + 8], 0x7fff
    X86_AT(c, 0x578ffu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0x7FFFu, 0, 2);
    // 057905  jb 0x57923
    X86_AT(c, 0x57905u);
    if (x86_cc(c, 2)) { goto L_57923; }
    X86_TICK(c, 25);
    // 057907  mov ax, word ptr [0x4ba54]
    X86_AT(c, 0x57907u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4BA54u))));
    // 05790d  mov word ptr [edi + 8], ax
    X86_AT(c, 0x5790du);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), (c.r[0] & 0xFFFFu));
    // 057911  mov eax, dword ptr [0x4ba4c]
    X86_AT(c, 0x57911u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4BA4Cu)));
    // 057916  mov edx, dword ptr [0x4ba50]
    X86_AT(c, 0x57916u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4BA50u)));
    // 05791c  mov dword ptr [edi], eax
    X86_AT(c, 0x5791cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 05791e  mov dword ptr [edi + 4], edx
    X86_AT(c, 0x5791eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[2]);
    // 057921  jmp 0x57954
    X86_AT(c, 0x57921u);
    goto L_57954;
L_57923:
    X86_TICK(c, 12);
    // 057923  cmp byte ptr [edi + 7], 0x80
    X86_AT(c, 0x57923u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x7u))), 0x80u, 0, 1);
    // 057927  jae 0x57954
    X86_AT(c, 0x57927u);
    if (x86_cc(c, 3)) { goto L_57954; }
    X86_TICK(c, 9);
    // 057929  push edi
    X86_AT(c, 0x57929u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05792a  call 0x577e7
    X86_AT(c, 0x5792au);
    push32(c, 0x5792fu); x86_call_known(c, 0x577e7u, f_000577e7); X86_RET(c, 0x5792fu);
    X86_TICK(c, 19);
    // 05792f  xchg esi, eax
    X86_AT(c, 0x5792fu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 057930  movsx eax, si
    X86_AT(c, 0x57930u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[6] & 0xFFFFu);
    // 057933  movzx edx, word ptr [edi + 8]
    X86_AT(c, 0x57933u);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 057937  cmp edx, eax
    X86_AT(c, 0x57937u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 057939  jl 0x57941
    X86_AT(c, 0x57939u);
    if (x86_cc(c, 12)) { goto L_57941; }
    X86_TICK(c, 14);
    // 05793b  sub word ptr [edi + 8], si
    X86_AT(c, 0x5793bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 05793f  jmp 0x57954
    X86_AT(c, 0x5793fu);
    goto L_57954;
L_57941:
    X86_TICK(c, 19);
    // 057941  mov eax, esi
    X86_AT(c, 0x57941u);
    c.r[0] = c.r[6];
    // 057943  sub ax, word ptr [edi + 8]
    X86_AT(c, 0x57943u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 0, 2)); }
    // 057947  push eax
    X86_AT(c, 0x57947u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 057948  push edi
    X86_AT(c, 0x57948u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 057949  call 0x57838
    X86_AT(c, 0x57949u);
    push32(c, 0x5794eu); x86_call_known(c, 0x57838u, f_00057838); X86_RET(c, 0x5794eu);
    X86_TICK(c, 2);
    // 05794e  mov word ptr [edi + 8], 0
    X86_AT(c, 0x5794eu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), 0x0u);
L_57954:
    X86_TICK(c, 24);
    // 057954  pop edi
    X86_AT(c, 0x57954u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 057955  pop esi
    X86_AT(c, 0x57955u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 057956  leave 
    X86_AT(c, 0x57956u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 057957  ret 4
    X86_AT(c, 0x57957u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x578d4u, "ran off the end of a function");
}
void f_0005795c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 05795c  enter 0x10, 0
    X86_AT(c, 0x5795cu);
    x86_enter(c, 0x10u, 0x0u, 4);
    // 057960  push ebx
    X86_AT(c, 0x57960u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 057961  push esi
    X86_AT(c, 0x57961u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 057962  push edi
    X86_AT(c, 0x57962u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 057963  cmp byte ptr [0x4b593], 0
    X86_AT(c, 0x57963u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B593u))), 0x0u, 0, 1);
    // 05796a  je 0x5798a
    X86_AT(c, 0x5796au);
    if (x86_cc(c, 4)) { goto L_5798a; }
    X86_TICK(c, 12);
    // 05796c  push dword ptr [0x4ba24]
    X86_AT(c, 0x5796cu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4BA24u))); push32(c, v); }
    // 057972  call 0x5751e
    X86_AT(c, 0x57972u);
    push32(c, 0x57977u); x86_call_known(c, 0x5751eu, f_0005751e); X86_RET(c, 0x57977u);
    X86_TICK(c, 7);
    // 057977  call 0x57567
    X86_AT(c, 0x57977u);
    push32(c, 0x5797cu); x86_call_known(c, 0x57567u, f_00057567); X86_RET(c, 0x5797cu);
    X86_TICK(c, 9);
    // 05797c  mov word ptr [ebp - 2], ax
    X86_AT(c, 0x5797cu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), (c.r[0] & 0xFFFFu));
    // 057980  call 0x57527
    X86_AT(c, 0x57980u);
    push32(c, 0x57985u); x86_call_known(c, 0x57527u, f_00057527); X86_RET(c, 0x57985u);
    X86_TICK(c, 7);
    // 057985  jmp 0x57a11
    X86_AT(c, 0x57985u);
    goto L_57a11;
L_5798a:
    X86_TICK(c, 13);
    // 05798a  mov eax, 0x4b988
    X86_AT(c, 0x5798au);
    c.r[0] = 0x4B988u;
    // 05798f  cmp eax, dword ptr [0x4ba24]
    X86_AT(c, 0x5798fu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x4BA24u))), 0, 4);
    // 057995  jne 0x5799b
    X86_AT(c, 0x57995u);
    if (x86_cc(c, 5)) { goto L_5799b; }
    X86_TICK(c, 9);
    // 057997  mov bl, 0x41
    X86_AT(c, 0x57997u);
    s8(c, 3, 0x41u);
    // 057999  jmp 0x579f3
    X86_AT(c, 0x57999u);
    goto L_579f3;
L_5799b:
    X86_TICK(c, 33);
    // 05799b  mov esi, dword ptr [0x4ba24]
    X86_AT(c, 0x5799bu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 0579a1  lea edi, [ebp - 0x10]
    X86_AT(c, 0x579a1u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0579a4  mov ecx, 3
    X86_AT(c, 0x579a4u);
    c.r[1] = 0x3u;
    // 0579a9  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x579a9u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 0579ab  mov bl, byte ptr [ebp - 6]
    X86_AT(c, 0x579abu);
    s8(c, 3, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))));
    // 0579ae  add ebx, ebx
    X86_AT(c, 0x579aeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[3], 0, 4); }
    // 0579b0  cmp byte ptr [ebp - 5], 0
    X86_AT(c, 0x579b0u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))), 0x0u, 0, 1);
    // 0579b4  je 0x579bb
    X86_AT(c, 0x579b4u);
    if (x86_cc(c, 4)) { goto L_579bb; }
    X86_TICK(c, 9);
    // 0579b6  or bl, 0x40
    X86_AT(c, 0x579b6u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x40u, 1)); }
    // 0579b9  jmp 0x579f3
    X86_AT(c, 0x579b9u);
    goto L_579f3;
L_579bb:
    X86_TICK(c, 12);
    // 0579bb  cmp word ptr [ebp - 8], 0x7fff
    X86_AT(c, 0x579bbu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x7FFFu, 0, 2);
    // 0579c1  jne 0x579de
    X86_AT(c, 0x579c1u);
    if (x86_cc(c, 5)) { goto L_579de; }
    X86_TICK(c, 18);
    // 0579c3  lea esi, [ebp - 0x10]
    X86_AT(c, 0x579c3u);
    c.r[6] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 0579c6  mov edi, 0x4ba4c
    X86_AT(c, 0x579c6u);
    c.r[7] = 0x4BA4Cu;
    // 0579cb  mov ecx, 8
    X86_AT(c, 0x579cbu);
    c.r[1] = 0x8u;
    // 0579d0  cmpsb byte ptr [esi], byte ptr es:[edi]
    X86_AT(c, 0x579d0u);
    x86_string(c, 1, 1, 243, 4, 3);
    // 0579d2  jne 0x579d9
    X86_AT(c, 0x579d2u);
    if (x86_cc(c, 5)) { goto L_579d9; }
    X86_TICK(c, 9);
    // 0579d4  or bl, 5
    X86_AT(c, 0x579d4u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x5u, 1)); }
    // 0579d7  jmp 0x579f3
    X86_AT(c, 0x579d7u);
    goto L_579f3;
L_579d9:
    X86_TICK(c, 9);
    // 0579d9  or bl, 1
    X86_AT(c, 0x579d9u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x1u, 1)); }
    // 0579dc  jmp 0x579f3
    X86_AT(c, 0x579dcu);
    goto L_579f3;
L_579de:
    X86_TICK(c, 12);
    // 0579de  cmp word ptr [ebp - 8], 0
    X86_AT(c, 0x579deu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0x0u, 0, 2);
    // 0579e3  jne 0x579ea
    X86_AT(c, 0x579e3u);
    if (x86_cc(c, 5)) { goto L_579ea; }
    X86_TICK(c, 9);
    // 0579e5  or bl, 0x44
    X86_AT(c, 0x579e5u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x44u, 1)); }
    // 0579e8  jmp 0x579f3
    X86_AT(c, 0x579e8u);
    goto L_579f3;
L_579ea:
    X86_TICK(c, 12);
    // 0579ea  cmp byte ptr [ebp - 9], 0x80
    X86_AT(c, 0x579eau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x80u, 0, 1);
    // 0579ee  jb 0x579f3
    X86_AT(c, 0x579eeu);
    if (x86_cc(c, 2)) { goto L_579f3; }
    X86_TICK(c, 2);
    // 0579f0  or bl, 4
    X86_AT(c, 0x579f0u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v | 0x4u, 1)); }
L_579f3:
    X86_TICK(c, 27);
    // 0579f3  mov ax, word ptr [0x4ba28]
    X86_AT(c, 0x579f3u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4BA28u))));
    // 0579f9  and ax, 0xb800
    X86_AT(c, 0x579f9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xB800u, 2)); }
    // 0579fd  sub bh, bh
    X86_AT(c, 0x579fdu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_sub(c, v, g8(c, 7), 0, 1)); }
    // 0579ff  mov edx, ebx
    X86_AT(c, 0x579ffu);
    c.r[2] = c.r[3];
    // 057a01  shl edx, 8
    X86_AT(c, 0x57a01u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[2] = r; }
    // 057a04  or dx, ax
    X86_AT(c, 0x57a04u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v | (c.r[0] & 0xFFFFu), 2)); }
    // 057a07  mov word ptr [0x4ba28], dx
    X86_AT(c, 0x57a07u);
    wr16((c.sbase[3] + (uint32_t)(0x4BA28u)), (c.r[2] & 0xFFFFu));
    // 057a0e  xchg edx, eax
    X86_AT(c, 0x57a0eu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 057a0f  jmp 0x57a15
    X86_AT(c, 0x57a0fu);
    goto L_57a15;
L_57a11:
    X86_TICK(c, 4);
    // 057a11  mov ax, word ptr [ebp - 2]
    X86_AT(c, 0x57a11u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))));
L_57a15:
    X86_TICK(c, 28);
    // 057a15  pop edi
    X86_AT(c, 0x57a15u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 057a16  pop esi
    X86_AT(c, 0x57a16u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 057a17  pop ebx
    X86_AT(c, 0x57a17u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 057a18  leave 
    X86_AT(c, 0x57a18u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 057a19  ret 
    X86_AT(c, 0x57a19u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5795cu, "ran off the end of a function");
}
void f_00057b14(X86Cpu& c) {
    X86_TICK(c, 24);
    // 057b14  enter 0x2c, 0
    X86_AT(c, 0x57b14u);
    x86_enter(c, 0x2Cu, 0x0u, 4);
    // 057b18  push ebx
    X86_AT(c, 0x57b18u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 057b19  push esi
    X86_AT(c, 0x57b19u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 057b1a  push edi
    X86_AT(c, 0x57b1au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 057b1b  cmp byte ptr [0x4b593], 0
    X86_AT(c, 0x57b1bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B593u))), 0x0u, 0, 1);
    // 057b22  je 0x57b3c
    X86_AT(c, 0x57b22u);
    if (x86_cc(c, 4)) { goto L_57b3c; }
    X86_TICK(c, 12);
    // 057b24  push dword ptr [0x4ba24]
    X86_AT(c, 0x57b24u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4BA24u))); push32(c, v); }
    // 057b2a  call 0x5751e
    X86_AT(c, 0x57b2au);
    push32(c, 0x57b2fu); x86_call_known(c, 0x5751eu, f_0005751e); X86_RET(c, 0x57b2fu);
    X86_TICK(c, 12);
    // 057b2f  push dword ptr [ebp + 8]
    X86_AT(c, 0x57b2fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 057b32  call 0x5756f
    X86_AT(c, 0x57b32u);
    push32(c, 0x57b37u); x86_call_known(c, 0x5756fu, f_0005756f); X86_RET(c, 0x57b37u);
    X86_TICK(c, 7);
    // 057b37  jmp 0x57c9d
    X86_AT(c, 0x57b37u);
    goto L_57c9d;
L_57b3c:
    X86_TICK(c, 35);
    // 057b3c  mov esi, dword ptr [0x4ba24]
    X86_AT(c, 0x57b3cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x4BA24u)));
    // 057b42  lea edi, [ebp - 0xc]
    X86_AT(c, 0x57b42u);
    c.r[7] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 057b45  mov ecx, 3
    X86_AT(c, 0x57b45u);
    c.r[1] = 0x3u;
    // 057b4a  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x57b4au);
    x86_string(c, 0, 4, 243, 4, 3);
    // 057b4c  mov ax, word ptr [ebp - 4]
    X86_AT(c, 0x57b4cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))));
    // 057b50  sub ax, 0x3fff
    X86_AT(c, 0x57b50u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, 0x3FFFu, 0, 2)); }
    // 057b54  mov word ptr [ebp - 0x10], ax
    X86_AT(c, 0x57b54u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[0] & 0xFFFFu));
    // 057b58  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x57b58u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 057b5c  je 0x57b67
    X86_AT(c, 0x57b5cu);
    if (x86_cc(c, 4)) { goto L_57b67; }
    X86_TICK(c, 13);
    // 057b5e  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x57b5eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 057b61  mov byte ptr [eax + 9], 0x80
    X86_AT(c, 0x57b61u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)), 0x80u);
    // 057b65  jmp 0x57b6e
    X86_AT(c, 0x57b65u);
    goto L_57b6e;
L_57b67:
    X86_TICK(c, 6);
    // 057b67  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x57b67u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 057b6a  mov byte ptr [eax + 9], 0
    X86_AT(c, 0x57b6au);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + 0x9u)), 0x0u);
L_57b6e:
    X86_TICK(c, 12);
    // 057b6e  cmp word ptr [ebp - 0x10], 0x3f
    X86_AT(c, 0x57b6eu);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0x3Fu, 0, 2);
    // 057b73  jle 0x57b7b
    X86_AT(c, 0x57b73u);
    if (x86_cc(c, 14)) { goto L_57b7b; }
    X86_TICK(c, 9);
    // 057b75  mov byte ptr [ebp - 0xd], 0x99
    X86_AT(c, 0x57b75u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x99u);
    // 057b79  jmp 0x57b7f
    X86_AT(c, 0x57b79u);
    goto L_57b7f;
L_57b7b:
    X86_TICK(c, 2);
    // 057b7b  mov byte ptr [ebp - 0xd], 0
    X86_AT(c, 0x57b7bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u)), 0x0u);
L_57b7f:
    X86_TICK(c, 2);
    // 057b7f  mov word ptr [ebp - 0x12], 1
    X86_AT(c, 0x57b7fu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)), 0x1u);
L_57b85:
    X86_TICK(c, 23);
    // 057b85  movzx eax, word ptr [ebp - 0x12]
    X86_AT(c, 0x57b85u);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)));
    // 057b89  mov dl, byte ptr [ebp - 0xd]
    X86_AT(c, 0x57b89u);
    s8(c, 2, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF3u))));
    // 057b8c  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x57b8cu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 057b8f  mov byte ptr [ecx + eax*1 - 1], dl
    X86_AT(c, 0x57b8fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[1] + c.r[0] + 0xFFFFFFFFu)), g8(c, 2));
    // 057b93  cmp ax, 9
    X86_AT(c, 0x57b93u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x9u, 0, 2);
    // 057b97  jae 0x57b9f
    X86_AT(c, 0x57b97u);
    if (x86_cc(c, 3)) { goto L_57b9f; }
    X86_TICK(c, 13);
    // 057b99  inc word ptr [ebp - 0x12]
    X86_AT(c, 0x57b99u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFEEu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 057b9d  jmp 0x57b85
    X86_AT(c, 0x57b9du);
    X86_POLL(c, 0x57b85u); goto L_57b85;
L_57b9f:
    X86_TICK(c, 11);
    // 057b9f  mov ax, word ptr [ebp - 0x10]
    X86_AT(c, 0x57b9fu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))));
    // 057ba3  and ax, ax
    X86_AT(c, 0x57ba3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 057ba6  jl 0x57c9d
    X86_AT(c, 0x57ba6u);
    if (x86_cc(c, 12)) { goto L_57c9d; }
    X86_TICK(c, 7);
    // 057bac  cmp ax, 0x3f
    X86_AT(c, 0x57bacu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x3Fu, 0, 2);
    // 057bb0  jg 0x57c9d
    X86_AT(c, 0x57bb0u);
    if (x86_cc(c, 15)) { goto L_57c9d; }
    X86_TICK(c, 17);
    // 057bb6  mov dx, 0x3f
    X86_AT(c, 0x57bb6u);
    s16(c, 2, 0x3Fu);
    // 057bba  sub edx, eax
    X86_AT(c, 0x57bbau);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 057bbc  push edx
    X86_AT(c, 0x57bbcu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 057bbd  lea eax, [ebp - 0xc]
    X86_AT(c, 0x57bbdu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF4u);
    // 057bc0  push eax
    X86_AT(c, 0x57bc0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 057bc1  call 0x57838
    X86_AT(c, 0x57bc1u);
    push32(c, 0x57bc6u); x86_call_known(c, 0x57838u, f_00057838); X86_RET(c, 0x57bc6u);
    X86_TICK(c, 26);
    // 057bc6  mov eax, dword ptr [ebp - 0xc]
    X86_AT(c, 0x57bc6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)));
    // 057bc9  mov edx, dword ptr [ebp - 8]
    X86_AT(c, 0x57bc9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 057bcc  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0x57bccu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 057bcf  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0x57bcfu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
    // 057bd2  cmp dword ptr [ebp - 0x18], 0
    X86_AT(c, 0x57bd2u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 0x0u, 0, 4);
    // 057bd6  sete byte ptr [ebp - 0x26]
    X86_AT(c, 0x57bd6u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDAu)), x86_cc(c, 4) ? 1u : 0u);
    // 057bda  mov byte ptr [ebp - 0x25], 0
    X86_AT(c, 0x57bdau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu)), 0x0u);
L_57bde:
    X86_TICK(c, 12);
    // 057bde  cmp byte ptr [ebp - 0x26], 0
    X86_AT(c, 0x57bdeu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDAu))), 0x0u, 0, 1);
    // 057be2  je 0x57c04
    X86_AT(c, 0x57be2u);
    if (x86_cc(c, 4)) { goto L_57c04; }
    X86_TICK(c, 12);
    // 057be4  cmp dword ptr [ebp - 0x1c], 0
    X86_AT(c, 0x57be4u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u))), 0x0u, 0, 4);
    // 057be8  je 0x57c9d
    X86_AT(c, 0x57be8u);
    if (x86_cc(c, 4)) { goto L_57c9d; }
    X86_TICK(c, 61);
    // 057bee  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0x57beeu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 057bf1  sub edx, edx
    X86_AT(c, 0x57bf1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 057bf3  mov ecx, 0xa
    X86_AT(c, 0x57bf3u);
    c.r[1] = 0xAu;
    // 057bf8  div ecx
    X86_AT(c, 0x57bf8u);
    x86_div(c, c.r[1], 4, 0x57bf8u);
    // 057bfa  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0x57bfau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 057bfd  mov ebx, edx
    X86_AT(c, 0x57bfdu);
    c.r[3] = c.r[2];
    // 057bff  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0x57bffu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 057c02  jmp 0x57c64
    X86_AT(c, 0x57c02u);
    goto L_57c64;
L_57c04:
    X86_TICK(c, 17);
    // 057c04  mov eax, dword ptr [ebp - 0x1c]
    X86_AT(c, 0x57c04u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)));
    // 057c07  or eax, dword ptr [ebp - 0x18]
    X86_AT(c, 0x57c07u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u))), 4); }
    // 057c0a  and eax, eax
    X86_AT(c, 0x57c0au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 057c0c  je 0x57c9d
    X86_AT(c, 0x57c0cu);
    if (x86_cc(c, 4)) { goto L_57c9d; }
    X86_TICK(c, 4);
    // 057c12  sub edi, edi
    X86_AT(c, 0x57c12u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
    // 057c14  mov si, 3
    X86_AT(c, 0x57c14u);
    s16(c, 6, 0x3u);
L_57c18:
    X86_TICK(c, 24);
    // 057c18  movzx esi, si
    X86_AT(c, 0x57c18u);
    c.r[6] = (c.r[6] & 0xFFFFu);
    // 057c1b  shl edi, 0x10
    X86_AT(c, 0x57c1bu);
    { uint32_t v = c.r[7]; bool w; uint32_t r = x86_shift(c, 4, v, 0x10u, 4, w); if (w) c.r[7] = r; }
    // 057c1e  movzx eax, word ptr [ebp + esi*2 - 0x1c]
    X86_AT(c, 0x57c1eu);
    c.r[0] = rd16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFE4u)));
    // 057c23  or eax, edi
    X86_AT(c, 0x57c23u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v | c.r[7], 4); }
    // 057c25  xchg edi, eax
    X86_AT(c, 0x57c25u);
    { uint32_t t = c.r[7]; c.r[7] = c.r[0]; c.r[0] = t; }
    // 057c26  and edi, edi
    X86_AT(c, 0x57c26u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 057c28  jne 0x57c36
    X86_AT(c, 0x57c28u);
    if (x86_cc(c, 5)) { goto L_57c36; }
    X86_TICK(c, 13);
    // 057c2a  sub ebx, ebx
    X86_AT(c, 0x57c2au);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 057c2c  sub bx, bx
    X86_AT(c, 0x57c2cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 057c2f  mov word ptr [ebp + esi*2 - 0x24], bx
    X86_AT(c, 0x57c2fu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFDCu)), (c.r[3] & 0xFFFFu));
    // 057c34  jmp 0x57c50
    X86_AT(c, 0x57c34u);
    goto L_57c50;
L_57c36:
    X86_TICK(c, 57);
    // 057c36  movzx esi, si
    X86_AT(c, 0x57c36u);
    c.r[6] = (c.r[6] & 0xFFFFu);
    // 057c39  mov eax, edi
    X86_AT(c, 0x57c39u);
    c.r[0] = c.r[7];
    // 057c3b  sub edx, edx
    X86_AT(c, 0x57c3bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 057c3d  mov ecx, 0xa
    X86_AT(c, 0x57c3du);
    c.r[1] = 0xAu;
    // 057c42  div ecx
    X86_AT(c, 0x57c42u);
    x86_div(c, c.r[1], 4, 0x57c42u);
    // 057c44  mov dword ptr [ebp - 0x2c], eax
    X86_AT(c, 0x57c44u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFD4u)), c.r[0]);
    // 057c47  mov word ptr [ebp + esi*2 - 0x24], ax
    X86_AT(c, 0x57c47u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + c.r[6] * 2 + 0xFFFFFFDCu)), (c.r[0] & 0xFFFFu));
    // 057c4c  mov edi, edx
    X86_AT(c, 0x57c4cu);
    c.r[7] = c.r[2];
    // 057c4e  mov ebx, edi
    X86_AT(c, 0x57c4eu);
    c.r[3] = c.r[7];
L_57c50:
    X86_TICK(c, 7);
    // 057c50  and si, si
    X86_AT(c, 0x57c50u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v & (c.r[6] & 0xFFFFu), 2)); }
    // 057c53  jbe 0x57c58
    X86_AT(c, 0x57c53u);
    if (x86_cc(c, 6)) { goto L_57c58; }
    X86_TICK(c, 9);
    // 057c55  dec esi
    X86_AT(c, 0x57c55u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 057c56  jmp 0x57c18
    X86_AT(c, 0x57c56u);
    X86_POLL(c, 0x57c18u); goto L_57c18;
L_57c58:
    X86_TICK(c, 12);
    // 057c58  mov eax, dword ptr [ebp - 0x24]
    X86_AT(c, 0x57c58u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDCu)));
    // 057c5b  mov edx, dword ptr [ebp - 0x20]
    X86_AT(c, 0x57c5bu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE0u)));
    // 057c5e  mov dword ptr [ebp - 0x1c], eax
    X86_AT(c, 0x57c5eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE4u)), c.r[0]);
    // 057c61  mov dword ptr [ebp - 0x18], edx
    X86_AT(c, 0x57c61u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFE8u)), c.r[2]);
L_57c64:
    X86_TICK(c, 12);
    // 057c64  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x57c64u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 057c67  rcr al, 1
    X86_AT(c, 0x57c67u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 3, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 057c69  jb 0x57c7b
    X86_AT(c, 0x57c69u);
    if (x86_cc(c, 2)) { goto L_57c7b; }
    X86_TICK(c, 23);
    // 057c6b  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x57c6bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 057c6e  shr al, 1
    X86_AT(c, 0x57c6eu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 057c70  movzx eax, al
    X86_AT(c, 0x57c70u);
    c.r[0] = g8(c, 0);
    // 057c73  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x57c73u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 057c76  mov byte ptr [edx + eax*1], bl
    X86_AT(c, 0x57c76u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2] + c.r[0])), g8(c, 3));
    // 057c79  jmp 0x57c8e
    X86_AT(c, 0x57c79u);
    goto L_57c8e;
L_57c7b:
    X86_TICK(c, 26);
    // 057c7b  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x57c7bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 057c7e  shr al, 1
    X86_AT(c, 0x57c7eu);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 1, w); if (w) s8(c, 0, r); }
    // 057c80  movzx eax, al
    X86_AT(c, 0x57c80u);
    c.r[0] = g8(c, 0);
    // 057c83  mov edx, ebx
    X86_AT(c, 0x57c83u);
    c.r[2] = c.r[3];
    // 057c85  shl dl, 4
    X86_AT(c, 0x57c85u);
    { uint32_t v = g8(c, 2); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 1, w); if (w) s8(c, 2, r); }
    // 057c88  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x57c88u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 057c8b  add byte ptr [ecx + eax*1], dl
    X86_AT(c, 0x57c8bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[1] + c.r[0])); uint32_t v = rd8(ea); wr8(ea, x86_add(c, v, g8(c, 2), 0, 1)); }
L_57c8e:
    X86_TICK(c, 11);
    // 057c8e  mov al, byte ptr [ebp - 0x25]
    X86_AT(c, 0x57c8eu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu))));
    // 057c91  cmp al, 0x11
    X86_AT(c, 0x57c91u);
    (void)x86_sub(c, g8(c, 0), 0x11u, 0, 1);
    // 057c93  jae 0x57c9d
    X86_AT(c, 0x57c93u);
    if (x86_cc(c, 3)) { goto L_57c9d; }
    X86_TICK(c, 13);
    // 057c95  inc byte ptr [ebp - 0x25]
    X86_AT(c, 0x57c95u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFDBu)); uint32_t v = rd8(ea); wr8(ea, x86_inc(c, v, 1)); }
    // 057c98  jmp 0x57bde
    X86_AT(c, 0x57c98u);
    X86_POLL(c, 0x57bdeu); goto L_57bde;
L_57c9d:
    X86_TICK(c, 35);
    // 057c9d  add dword ptr [0x4ba24], 0xfffffff4
    X86_AT(c, 0x57c9du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4BA24u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0xFFFFFFF4u, 0, 4)); }
    // 057ca4  pop edi
    X86_AT(c, 0x57ca4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 057ca5  pop esi
    X86_AT(c, 0x57ca5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 057ca6  pop ebx
    X86_AT(c, 0x57ca6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 057ca7  leave 
    X86_AT(c, 0x57ca7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 057ca8  ret 4
    X86_AT(c, 0x57ca8u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x57b14u, "ran off the end of a function");
}
void f_00057cac(X86Cpu& c) {
    X86_TICK(c, 173);
    // 057cac  push ebp
    X86_AT(c, 0x57cacu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 057cad  mov ebp, esp
    X86_AT(c, 0x57cadu);
    c.r[5] = c.r[4];
    // 057caf  push edi
    X86_AT(c, 0x57cafu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 057cb0  push ebx
    X86_AT(c, 0x57cb0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 057cb1  xor ecx, ecx
    X86_AT(c, 0x57cb1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v ^ c.r[1], 4); }
    // 057cb3  mov ebx, ecx
    X86_AT(c, 0x57cb3u);
    c.r[3] = c.r[1];
    // 057cb5  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x57cb5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 057cb8  mul dword ptr [ebp + 0x14]
    X86_AT(c, 0x57cb8u);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 4);
    // 057cbb  push eax
    X86_AT(c, 0x57cbbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 057cbc  mov edi, edx
    X86_AT(c, 0x57cbcu);
    c.r[7] = c.r[2];
    // 057cbe  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x57cbeu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 057cc1  mul dword ptr [ebp + 0x18]
    X86_AT(c, 0x57cc1u);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 4);
    // 057cc4  add edi, eax
    X86_AT(c, 0x57cc4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 057cc6  adc ecx, edx
    X86_AT(c, 0x57cc6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 057cc8  adc ebx, 0
    X86_AT(c, 0x57cc8u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 057ccb  mov eax, dword ptr [ebp + 0x14]
    X86_AT(c, 0x57ccbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 057cce  mul dword ptr [ebp + 0x10]
    X86_AT(c, 0x57cceu);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 057cd1  add edi, eax
    X86_AT(c, 0x57cd1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[0], 0, 4); }
    // 057cd3  adc ecx, edx
    X86_AT(c, 0x57cd3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 057cd5  adc ebx, 0
    X86_AT(c, 0x57cd5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 057cd8  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0x57cd8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 057cdb  mul dword ptr [ebp + 0x10]
    X86_AT(c, 0x57cdbu);
    x86_mul(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 057cde  add ecx, eax
    X86_AT(c, 0x57cdeu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 057ce0  adc ebx, edx
    X86_AT(c, 0x57ce0u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, c.r[2], c.fl & 1, 4); }
    // 057ce2  mov edx, dword ptr [ebp + 8]
    X86_AT(c, 0x57ce2u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 057ce5  mov dword ptr [edx + 0xc], ebx
    X86_AT(c, 0x57ce5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0xCu)), c.r[3]);
    // 057ce8  mov dword ptr [edx + 8], ecx
    X86_AT(c, 0x57ce8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x8u)), c.r[1]);
    // 057ceb  mov dword ptr [edx + 4], edi
    X86_AT(c, 0x57cebu);
    wr32((c.sbase[3] + (uint32_t)(c.r[2] + 0x4u)), c.r[7]);
    // 057cee  pop dword ptr [edx]
    X86_AT(c, 0x57ceeu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[2])), v); }
    // 057cf0  pop ebx
    X86_AT(c, 0x57cf0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 057cf1  pop edi
    X86_AT(c, 0x57cf1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 057cf2  pop ebp
    X86_AT(c, 0x57cf2u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 057cf3  ret 0x14
    X86_AT(c, 0x57cf3u);
    c.eip = pop32(c); c.r[4] += 0x14u; return;
    x86_fault(c, 0x57cacu, "ran off the end of a function");
}
void f_00057cf8(X86Cpu& c) {
    X86_TICK(c, 34);
    // 057cf8  push ebp
    X86_AT(c, 0x57cf8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 057cf9  mov ebp, esp
    X86_AT(c, 0x57cf9u);
    c.r[5] = c.r[4];
    // 057cfb  push esi
    X86_AT(c, 0x57cfbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 057cfc  push edi
    X86_AT(c, 0x57cfcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 057cfd  push ebx
    X86_AT(c, 0x57cfdu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 057cfe  sub ebx, ebx
    X86_AT(c, 0x57cfeu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 057d00  mov eax, ebx
    X86_AT(c, 0x57d00u);
    c.r[0] = c.r[3];
    // 057d02  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x57d02u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 057d05  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x57d05u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 057d08  mov ecx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x57d08u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 057d0b  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x57d0bu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 057d0e  push ebp
    X86_AT(c, 0x57d0eu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 057d0f  xor ebp, ebp
    X86_AT(c, 0x57d0fu);
    { uint32_t v = c.r[5]; c.r[5] = x86_logic(c, v ^ c.r[5], 4); }
L_57d11:
    X86_TICK(c, 7);
    // 057d11  cmp edx, ecx
    X86_AT(c, 0x57d11u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 057d13  ja 0x57d1b
    X86_AT(c, 0x57d13u);
    if (x86_cc(c, 7)) { goto L_57d1b; }
    X86_TICK(c, 5);
    // 057d15  jb 0x57d26
    X86_AT(c, 0x57d15u);
    if (x86_cc(c, 2)) { goto L_57d26; }
    X86_TICK(c, 7);
    // 057d17  cmp esi, edi
    X86_AT(c, 0x57d17u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 057d19  jb 0x57d26
    X86_AT(c, 0x57d19u);
    if (x86_cc(c, 2)) { goto L_57d26; }
L_57d1b:
    X86_TICK(c, 19);
    // 057d1b  sub esi, edi
    X86_AT(c, 0x57d1bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 057d1d  sbb edx, ecx
    X86_AT(c, 0x57d1du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], c.fl & 1, 4); }
    // 057d1f  stc 
    X86_AT(c, 0x57d1fu);
    c.fl |= X86_CF;
    // 057d20  rcl eax, 1
    X86_AT(c, 0x57d20u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 057d22  rcl ebx, 1
    X86_AT(c, 0x57d22u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[3] = r; }
    // 057d24  jmp 0x57d2a
    X86_AT(c, 0x57d24u);
    goto L_57d2a;
L_57d26:
    X86_TICK(c, 6);
    // 057d26  shl eax, 1
    X86_AT(c, 0x57d26u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 057d28  rcl ebx, 1
    X86_AT(c, 0x57d28u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[3] = r; }
L_57d2a:
    X86_TICK(c, 7);
    // 057d2a  test ebx, 0x80000000
    X86_AT(c, 0x57d2au);
    (void)x86_logic(c, c.r[3] & 0x80000000u, 4);
    // 057d30  jne 0x57d3c
    X86_AT(c, 0x57d30u);
    if (x86_cc(c, 5)) { goto L_57d3c; }
    X86_TICK(c, 7);
    // 057d32  and edx, edx
    X86_AT(c, 0x57d32u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 057d34  jne 0x57d56
    X86_AT(c, 0x57d34u);
    if (x86_cc(c, 5)) { goto L_57d56; }
    X86_TICK(c, 7);
    // 057d36  and esi, esi
    X86_AT(c, 0x57d36u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 057d38  jne 0x57d56
    X86_AT(c, 0x57d38u);
    if (x86_cc(c, 5)) { goto L_57d56; }
    X86_TICK(c, 7);
    // 057d3a  jmp 0x57d5f
    X86_AT(c, 0x57d3au);
    goto L_57d5f;
L_57d3c:
    X86_TICK(c, 11);
    // 057d3c  shl esi, 1
    X86_AT(c, 0x57d3cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 057d3e  rcl edx, 1
    X86_AT(c, 0x57d3eu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 057d40  jb 0x57d4c
    X86_AT(c, 0x57d40u);
    if (x86_cc(c, 2)) { goto L_57d4c; }
    X86_TICK(c, 7);
    // 057d42  cmp edx, ecx
    X86_AT(c, 0x57d42u);
    (void)x86_sub(c, c.r[2], c.r[1], 0, 4);
    // 057d44  ja 0x57d4c
    X86_AT(c, 0x57d44u);
    if (x86_cc(c, 7)) { goto L_57d4c; }
    X86_TICK(c, 5);
    // 057d46  jb 0x57d7b
    X86_AT(c, 0x57d46u);
    if (x86_cc(c, 2)) { goto L_57d7b; }
    X86_TICK(c, 7);
    // 057d48  cmp esi, edi
    X86_AT(c, 0x57d48u);
    (void)x86_sub(c, c.r[6], c.r[7], 0, 4);
    // 057d4a  jb 0x57d7b
    X86_AT(c, 0x57d4au);
    if (x86_cc(c, 2)) { goto L_57d7b; }
L_57d4c:
    X86_TICK(c, 11);
    // 057d4c  add eax, 1
    X86_AT(c, 0x57d4cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x1u, 0, 4); }
    // 057d51  adc ebx, 0
    X86_AT(c, 0x57d51u);
    { uint32_t v = c.r[3]; c.r[3] = x86_add(c, v, 0x0u, c.fl & 1, 4); }
    // 057d54  jmp 0x57d7b
    X86_AT(c, 0x57d54u);
    goto L_57d7b;
L_57d56:
    X86_TICK(c, 13);
    // 057d56  inc ebp
    X86_AT(c, 0x57d56u);
    { uint32_t v = c.r[5]; c.r[5] = x86_inc(c, v, 4); }
    // 057d57  shl esi, 1
    X86_AT(c, 0x57d57u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x1u, 4, w); if (w) c.r[6] = r; }
    // 057d59  rcl edx, 1
    X86_AT(c, 0x57d59u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 2, v, 0x1u, 4, w); if (w) c.r[2] = r; }
    // 057d5b  jb 0x57d1b
    X86_AT(c, 0x57d5bu);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x57d1bu); goto L_57d1b; }
    X86_TICK(c, 7);
    // 057d5d  jmp 0x57d11
    X86_AT(c, 0x57d5du);
    X86_POLL(c, 0x57d11u); goto L_57d11;
L_57d5f:
    X86_TICK(c, 7);
    // 057d5f  and ebx, ebx
    X86_AT(c, 0x57d5fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v & c.r[3], 4); }
    // 057d61  jne 0x57d6c
    X86_AT(c, 0x57d61u);
    if (x86_cc(c, 5)) { goto L_57d6c; }
    X86_TICK(c, 13);
    // 057d63  add ebp, 0x20
    X86_AT(c, 0x57d63u);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, 0x20u, 0, 4); }
    // 057d66  mov ebx, eax
    X86_AT(c, 0x57d66u);
    c.r[3] = c.r[0];
    // 057d68  xor eax, eax
    X86_AT(c, 0x57d68u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 057d6a  jmp 0x57d5f
    X86_AT(c, 0x57d6au);
    X86_POLL(c, 0x57d5fu); goto L_57d5f;
L_57d6c:
    X86_TICK(c, 22);
    // 057d6c  bsr ecx, ebx
    X86_AT(c, 0x57d6cu);
    c.r[1] = x86_bsr(c, c.r[3], c.r[1]);
    // 057d6f  sub ecx, 0x1f
    X86_AT(c, 0x57d6fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x1Fu, 0, 4); }
    // 057d72  neg ecx
    X86_AT(c, 0x57d72u);
    { uint32_t v = c.r[1]; c.r[1] = x86_neg(c, v, 4); }
    // 057d74  shld ebx, eax, cl
    X86_AT(c, 0x57d74u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], g8(c, 1), 4, w); if (w) c.r[3] = r; }
    // 057d77  shl eax, cl
    X86_AT(c, 0x57d77u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 057d79  add ebp, ecx
    X86_AT(c, 0x57d79u);
    { uint32_t v = c.r[5]; c.r[5] = x86_add(c, v, c.r[1], 0, 4); }
L_57d7b:
    X86_TICK(c, 44);
    // 057d7b  pop ecx
    X86_AT(c, 0x57d7bu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 057d7c  xchg ebp, ecx
    X86_AT(c, 0x57d7cu);
    { uint32_t t = c.r[5]; c.r[5] = c.r[1]; c.r[1] = t; }
    // 057d7e  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x57d7eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 057d81  mov dword ptr [edi], eax
    X86_AT(c, 0x57d81u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 057d83  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x57d83u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 057d86  xchg ecx, eax
    X86_AT(c, 0x57d86u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 057d87  pop ebx
    X86_AT(c, 0x57d87u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 057d88  pop edi
    X86_AT(c, 0x57d88u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 057d89  pop esi
    X86_AT(c, 0x57d89u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 057d8a  pop ebp
    X86_AT(c, 0x57d8au);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 057d8b  ret 0x14
    X86_AT(c, 0x57d8bu);
    c.eip = pop32(c); c.r[4] += 0x14u; return;
    x86_fault(c, 0x57cf8u, "ran off the end of a function");
}
void f_00057d90(X86Cpu& c) {
    X86_TICK(c, 31);
    // 057d90  push ebp
    X86_AT(c, 0x57d90u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 057d91  mov ebp, esp
    X86_AT(c, 0x57d91u);
    c.r[5] = c.r[4];
    // 057d93  push edi
    X86_AT(c, 0x57d93u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 057d94  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x57d94u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 057d97  movzx eax, word ptr [edi]
    X86_AT(c, 0x57d97u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(c.r[7])));
    // 057d9a  push eax
    X86_AT(c, 0x57d9au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 057d9b  lea eax, [edi + 2]
    X86_AT(c, 0x57d9bu);
    c.r[0] = (uint32_t)(c.r[7] + 0x2u);
    // 057d9e  push eax
    X86_AT(c, 0x57d9eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 057d9f  push 2
    X86_AT(c, 0x57d9fu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 057da1  call 0x55d0c
    X86_AT(c, 0x57da1u);
    push32(c, 0x57da6u); x86_call_known(c, 0x55d0cu, f_00055d0c); X86_RET(c, 0x57da6u);
    X86_TICK(c, 19);
    // 057da6  movzx eax, word ptr [0x4b48c]
    X86_AT(c, 0x57da6u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x4B48Cu)));
    // 057dad  push eax
    X86_AT(c, 0x57dadu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 057dae  push 0x4b48e
    X86_AT(c, 0x57daeu);
    { uint32_t v = 0x4B48Eu; push32(c, v); }
    // 057db3  push 2
    X86_AT(c, 0x57db3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 057db5  call 0x55d0c
    X86_AT(c, 0x57db5u);
    push32(c, 0x57dbau); x86_call_known(c, 0x55d0cu, f_00055d0c); X86_RET(c, 0x57dbau);
    X86_TICK(c, 20);
    // 057dba  pop edi
    X86_AT(c, 0x57dbau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 057dbb  leave 
    X86_AT(c, 0x57dbbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 057dbc  ret 4
    X86_AT(c, 0x57dbcu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x57d90u, "ran off the end of a function");
}
}

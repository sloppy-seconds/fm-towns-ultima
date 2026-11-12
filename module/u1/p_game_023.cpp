#include "p_game_funcs.h"
namespace p_game {
void f_000e665c(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0e665c  push ebp
    X86_AT(c, 0xe665cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e665d  mov ebp, esp
    X86_AT(c, 0xe665du);
    c.r[5] = c.r[4];
    // 0e665f  push esi
    X86_AT(c, 0xe665fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6660  push edi
    X86_AT(c, 0xe6660u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6661  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe6661u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e6664  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6664u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e6667  cmp esi, 1
    X86_AT(c, 0xe6667u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0e666a  jl 0xe6674
    X86_AT(c, 0xe666au);
    if (x86_cc(c, 12)) { goto L_e6674; }
    X86_TICK(c, 7);
    // 0e666c  cmp esi, 1
    X86_AT(c, 0xe666cu);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0e666f  jne 0xe6678
    X86_AT(c, 0xe666fu);
    if (x86_cc(c, 5)) { goto L_e6678; }
    X86_TICK(c, 2);
    // 0e6671  mov byte ptr [edi], 0
    X86_AT(c, 0xe6671u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
L_e6674:
    X86_TICK(c, 9);
    // 0e6674  mov eax, edi
    X86_AT(c, 0xe6674u);
    c.r[0] = c.r[7];
    // 0e6676  jmp 0xe6687
    X86_AT(c, 0xe6676u);
    goto L_e6687;
L_e6678:
    X86_TICK(c, 20);
    // 0e6678  push 1
    X86_AT(c, 0xe6678u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e667a  lea eax, [esi - 1]
    X86_AT(c, 0xe667au);
    c.r[0] = (uint32_t)(c.r[6] + 0xFFFFFFFFu);
    // 0e667d  push eax
    X86_AT(c, 0xe667du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e667e  push edi
    X86_AT(c, 0xe667eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e667f  push dword ptr [ebp + 0x10]
    X86_AT(c, 0xe667fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 0e6682  call 0xe63d8
    X86_AT(c, 0xe6682u);
    push32(c, 0xe6687u); x86_call_known(c, 0xe63d8u, f_000e63d8); X86_RET(c, 0xe6687u);
L_e6687:
    X86_TICK(c, 24);
    // 0e6687  pop edi
    X86_AT(c, 0xe6687u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6688  pop esi
    X86_AT(c, 0xe6688u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6689  leave 
    X86_AT(c, 0xe6689u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e668a  ret 
    X86_AT(c, 0xe668au);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe665cu, "ran off the end of a function");
}
void f_000e66c0(X86Cpu& c) {
    X86_TICK(c, 42);
    // 0e66c0  enter 0x14, 0
    X86_AT(c, 0xe66c0u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 0e66c4  push ebx
    X86_AT(c, 0xe66c4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e66c5  push esi
    X86_AT(c, 0xe66c5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e66c6  push edi
    X86_AT(c, 0xe66c6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e66c7  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe66c7u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e66ca  mov ax, word ptr [0xc453a]
    X86_AT(c, 0xe66cau);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC453Au))));
    // 0e66d0  mov word ptr [ebp - 0xe], ax
    X86_AT(c, 0xe66d0u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u)), (c.r[0] & 0xFFFFu));
    // 0e66d4  sub eax, eax
    X86_AT(c, 0xe66d4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e66d6  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe66d6u);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
    // 0e66dc  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xe66dcu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e66df  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0xe66dfu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 0e66e3  je 0xe69d5
    X86_AT(c, 0xe66e3u);
    if (x86_cc(c, 4)) { goto L_e69d5; }
    X86_TICK(c, 9);
    // 0e66e9  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe66e9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e66ec  jmp 0xe69b6
    X86_AT(c, 0xe66ecu);
    goto L_e69b6;
L_e66f1:
    X86_TICK(c, 12);
    // 0e66f1  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xe66f1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0e66f5  je 0xe68ee
    X86_AT(c, 0xe66f5u);
    if (x86_cc(c, 4)) { goto L_e68ee; }
    X86_TICK(c, 12);
    // 0e66fb  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0xe66fbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 0e66ff  jne 0xe6746
    X86_AT(c, 0xe66ffu);
    if (x86_cc(c, 5)) { goto L_e6746; }
    X86_TICK(c, 12);
    // 0e6701  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xe6701u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0e6706  jne 0xe6746
    X86_AT(c, 0xe6706u);
    if (x86_cc(c, 5)) { goto L_e6746; }
    X86_TICK(c, 12);
    // 0e6708  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xe6708u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0e670c  jne 0xe698c
    X86_AT(c, 0xe670cu);
    if (x86_cc(c, 5)) { goto L_e698c; }
    X86_TICK(c, 33);
    // 0e6712  mov al, byte ptr [0xc40aa]
    X86_AT(c, 0xe6712u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC40AAu))));
    // 0e6717  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0xe6717u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e671a  mov byte ptr [edx], al
    X86_AT(c, 0xe671au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0e671c  push 0x1ff
    X86_AT(c, 0xe671cu);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 0e6721  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe6721u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e6724  inc eax
    X86_AT(c, 0xe6724u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e6725  push eax
    X86_AT(c, 0xe6725u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6726  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6726u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6729  push eax
    X86_AT(c, 0xe6729u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e672a  call 0xe9aac
    X86_AT(c, 0xe672au);
    push32(c, 0xe672fu); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe672fu);
    X86_TICK(c, 11);
    // 0e672f  inc eax
    X86_AT(c, 0xe672fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e6730  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xe6730u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 0e6733  dec eax
    X86_AT(c, 0xe6733u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e6734  jne 0xe677e
    X86_AT(c, 0xe6734u);
    if (x86_cc(c, 5)) { goto L_e677e; }
    X86_TICK(c, 15);
    // 0e6736  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe6736u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e6739  mov dword ptr [ebx], eax
    X86_AT(c, 0xe6739u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0e673b  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xe673bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 0e6741  jmp 0xe698c
    X86_AT(c, 0xe6741u);
    goto L_e698c;
L_e6746:
    X86_TICK(c, 12);
    // 0e6746  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6746u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e674a  jne 0xe67c3
    X86_AT(c, 0xe674au);
    if (x86_cc(c, 5)) { goto L_e67c3; }
    X86_TICK(c, 12);
    // 0e6750  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xe6750u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 0e6754  jne 0xe69be
    X86_AT(c, 0xe6754u);
    if (x86_cc(c, 5)) { goto L_e69be; }
    X86_TICK(c, 12);
    // 0e675a  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xe675au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0e675e  jne 0xe6774
    X86_AT(c, 0xe675eu);
    if (x86_cc(c, 5)) { goto L_e6774; }
    X86_TICK(c, 20);
    // 0e6760  push 0x200
    X86_AT(c, 0xe6760u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0e6765  push dword ptr [ebx + 8]
    X86_AT(c, 0xe6765u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0e6768  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6768u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e676b  push eax
    X86_AT(c, 0xe676bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e676c  call 0xe9aac
    X86_AT(c, 0xe676cu);
    push32(c, 0xe6771u); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe6771u);
    X86_TICK(c, 2);
    // 0e6771  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xe6771u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_e6774:
    X86_TICK(c, 12);
    // 0e6774  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6774u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e6778  je 0xe69be
    X86_AT(c, 0xe6778u);
    if (x86_cc(c, 4)) { goto L_e69be; }
L_e677e:
    X86_TICK(c, 28);
    // 0e677e  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe677eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6781  mov al, 0x1a
    X86_AT(c, 0xe6781u);
    s8(c, 0, 0x1Au);
    // 0e6783  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0xe6783u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e6786  push edi
    X86_AT(c, 0xe6786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6787  mov edi, ecx
    X86_AT(c, 0xe6787u);
    c.r[7] = c.r[1];
    // 0e6789  mov ecx, edx
    X86_AT(c, 0xe6789u);
    c.r[1] = c.r[2];
    // 0e678b  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe678bu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e678d  jne 0xe6792
    X86_AT(c, 0xe678du);
    if (x86_cc(c, 5)) { goto L_e6792; }
    X86_TICK(c, 4);
    // 0e678f  inc ecx
    X86_AT(c, 0xe678fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e6790  sub edx, ecx
    X86_AT(c, 0xe6790u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e6792:
    X86_TICK(c, 17);
    // 0e6792  pop edi
    X86_AT(c, 0xe6792u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6793  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0xe6793u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 0e6797  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe6797u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e679a  je 0xe67b8
    X86_AT(c, 0xe679au);
    if (x86_cc(c, 4)) { goto L_e67b8; }
    X86_TICK(c, 32);
    // 0e679c  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xe679cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 0e67a0  push 1
    X86_AT(c, 0xe67a0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e67a2  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0xe67a2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 0e67a5  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe67a5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 0e67a8  push edx
    X86_AT(c, 0xe67a8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e67a9  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe67a9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e67ac  push eax
    X86_AT(c, 0xe67acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e67ad  call 0xe9b84
    X86_AT(c, 0xe67adu);
    push32(c, 0xe67b2u); x86_call_known(c, 0xe9b84u, f_000e9b84); X86_RET(c, 0xe67b2u);
    X86_TICK(c, 6);
    // 0e67b2  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe67b2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e67b5  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xe67b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_e67b8:
    X86_TICK(c, 8);
    // 0e67b8  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe67b8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e67bb  mov dword ptr [ebx], eax
    X86_AT(c, 0xe67bbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0e67bd  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0xe67bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_e67c3:
    X86_TICK(c, 12);
    // 0e67c3  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe67c3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e67c7  jle 0xe69b6
    X86_AT(c, 0xe67c7u);
    if (x86_cc(c, 14)) { goto L_e69b6; }
    X86_TICK(c, 11);
    // 0e67cd  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe67cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0e67d1  cmp ax, 0xffff
    X86_AT(c, 0xe67d1u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 0e67d5  je 0xe67e5
    X86_AT(c, 0xe67d5u);
    if (x86_cc(c, 4)) { goto L_e67e5; }
    X86_TICK(c, 20);
    // 0e67d7  movsx eax, ax
    X86_AT(c, 0xe67d7u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0e67da  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe67dau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0e67dd  cmp eax, dword ptr [ebx]
    X86_AT(c, 0xe67ddu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0e67df  jge 0xe687c
    X86_AT(c, 0xe67dfu);
    if (x86_cc(c, 13)) { goto L_e687c; }
L_e67e5:
    X86_TICK(c, 30);
    // 0e67e5  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe67e5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e67e8  mov al, byte ptr [0xc40aa]
    X86_AT(c, 0xe67e8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC40AAu))));
    // 0e67ed  mov ecx, dword ptr [ebx]
    X86_AT(c, 0xe67edu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e67ef  push edi
    X86_AT(c, 0xe67efu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e67f0  mov edi, ecx
    X86_AT(c, 0xe67f0u);
    c.r[7] = c.r[1];
    // 0e67f2  mov ecx, edx
    X86_AT(c, 0xe67f2u);
    c.r[1] = c.r[2];
    // 0e67f4  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe67f4u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e67f6  jne 0xe67fb
    X86_AT(c, 0xe67f6u);
    if (x86_cc(c, 5)) { goto L_e67fb; }
    X86_TICK(c, 4);
    // 0e67f8  inc ecx
    X86_AT(c, 0xe67f8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e67f9  sub edx, ecx
    X86_AT(c, 0xe67f9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e67fb:
    X86_TICK(c, 13);
    // 0e67fb  pop edi
    X86_AT(c, 0xe67fbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e67fc  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0xe67fcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 0e6800  jmp 0xe6835
    X86_AT(c, 0xe6800u);
    goto L_e6835;
L_e6802:
    X86_TICK(c, 59);
    // 0e6802  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe6802u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e6806  add eax, dword ptr [ebx]
    X86_AT(c, 0xe6806u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 0e6808  inc eax
    X86_AT(c, 0xe6808u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e6809  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0xe6809u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0e680d  inc edx
    X86_AT(c, 0xe680du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e680e  movsx edx, dx
    X86_AT(c, 0xe680eu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 0e6811  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0xe6811u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6814  sub ecx, edx
    X86_AT(c, 0xe6814u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e6816  mov edx, ecx
    X86_AT(c, 0xe6816u);
    c.r[2] = c.r[1];
    // 0e6818  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xe6818u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0e681b  mov al, byte ptr [0xc40aa]
    X86_AT(c, 0xe681bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC40AAu))));
    // 0e6820  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe6820u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e6823  push edi
    X86_AT(c, 0xe6823u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6824  mov edi, ecx
    X86_AT(c, 0xe6824u);
    c.r[7] = c.r[1];
    // 0e6826  mov ecx, edx
    X86_AT(c, 0xe6826u);
    c.r[1] = c.r[2];
    // 0e6828  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe6828u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e682a  jne 0xe682f
    X86_AT(c, 0xe682au);
    if (x86_cc(c, 5)) { goto L_e682f; }
    X86_TICK(c, 4);
    // 0e682c  inc ecx
    X86_AT(c, 0xe682cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e682d  sub edx, ecx
    X86_AT(c, 0xe682du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e682f:
    X86_TICK(c, 13);
    // 0e682f  pop edi
    X86_AT(c, 0xe682fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6830  inc edx
    X86_AT(c, 0xe6830u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e6831  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0xe6831u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_e6835:
    X86_TICK(c, 19);
    // 0e6835  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe6835u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e6839  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe6839u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e683c  dec edx
    X86_AT(c, 0xe683cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e683d  cmp edx, eax
    X86_AT(c, 0xe683du);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0e683f  jle 0xe684e
    X86_AT(c, 0xe683fu);
    if (x86_cc(c, 14)) { goto L_e684e; }
    X86_TICK(c, 23);
    // 0e6841  add eax, dword ptr [ebx]
    X86_AT(c, 0xe6841u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 0e6843  inc eax
    X86_AT(c, 0xe6843u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e6844  mov al, byte ptr [eax]
    X86_AT(c, 0xe6844u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e6846  cmp al, byte ptr [0xc40ab]
    X86_AT(c, 0xe6846u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0xC40ABu))), 0, 1);
    // 0e684c  jne 0xe6802
    X86_AT(c, 0xe684cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe6802u); goto L_e6802; }
L_e684e:
    X86_TICK(c, 17);
    // 0e684e  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe684eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e6852  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe6852u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e6855  jne 0xe685f
    X86_AT(c, 0xe6855u);
    if (x86_cc(c, 5)) { goto L_e685f; }
    X86_TICK(c, 9);
    // 0e6857  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xe6857u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 0e685d  jmp 0xe687c
    X86_AT(c, 0xe685du);
    goto L_e687c;
L_e685f:
    X86_TICK(c, 19);
    // 0e685f  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe685fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e6863  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe6863u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6866  dec edx
    X86_AT(c, 0xe6866u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e6867  cmp edx, eax
    X86_AT(c, 0xe6867u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0e6869  jne 0xe6873
    X86_AT(c, 0xe6869u);
    if (x86_cc(c, 5)) { goto L_e6873; }
    X86_TICK(c, 9);
    // 0e686b  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xe686bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 0e6871  jmp 0xe687c
    X86_AT(c, 0xe6871u);
    goto L_e687c;
L_e6873:
    X86_TICK(c, 17);
    // 0e6873  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe6873u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e6875  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe6875u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0e6878  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0xe6878u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_e687c:
    X86_TICK(c, 12);
    // 0e687c  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xe687cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 0e6882  je 0xe698c
    X86_AT(c, 0xe6882u);
    if (x86_cc(c, 4)) { goto L_e698c; }
    X86_TICK(c, 12);
    // 0e6888  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xe6888u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0e688d  jne 0xe689d
    X86_AT(c, 0xe688du);
    if (x86_cc(c, 5)) { goto L_e689d; }
    X86_TICK(c, 11);
    // 0e688f  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0xe688fu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e6892  jl 0xe68e7
    X86_AT(c, 0xe6892u);
    if (x86_cc(c, 12)) { goto L_e68e7; }
    X86_TICK(c, 13);
    // 0e6894  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0xe6894u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6897  dec esi
    X86_AT(c, 0xe6897u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e6898  jmp 0xe6998
    X86_AT(c, 0xe6898u);
    goto L_e6998;
L_e689d:
    X86_TICK(c, 25);
    // 0e689d  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe689du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e689f  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe689fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0e68a2  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0xe68a2u);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e68a6  sub esi, eax
    X86_AT(c, 0xe68a6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e68a8  cmp edi, esi
    X86_AT(c, 0xe68a8u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0e68aa  jbe 0xe68e7
    X86_AT(c, 0xe68aau);
    if (x86_cc(c, 6)) { goto L_e68e7; }
    X86_TICK(c, 87);
    // 0e68ac  mov ecx, esi
    X86_AT(c, 0xe68acu);
    c.r[1] = c.r[6];
    // 0e68ae  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe68aeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e68b0  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe68b0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e68b3  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0xe68b3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 0e68b6  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0xe68b6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e68b9  lea edx, [edx + edi*1]
    X86_AT(c, 0xe68b9u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 0e68bc  push esi
    X86_AT(c, 0xe68bcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e68bd  push edi
    X86_AT(c, 0xe68bdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e68be  mov esi, eax
    X86_AT(c, 0xe68beu);
    c.r[6] = c.r[0];
    // 0e68c0  mov edi, edx
    X86_AT(c, 0xe68c0u);
    c.r[7] = c.r[2];
    // 0e68c2  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe68c2u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e68c4  pop edi
    X86_AT(c, 0xe68c4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e68c5  pop esi
    X86_AT(c, 0xe68c5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e68c6  add edi, esi
    X86_AT(c, 0xe68c6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 0e68c8  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe68c8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e68cb  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0xe68cbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 0e68cf  lea eax, [esi + 1]
    X86_AT(c, 0xe68cfu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0e68d2  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xe68d2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e68d5  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe68d5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e68d8  sub edi, eax
    X86_AT(c, 0xe68d8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e68da  lea eax, [esi + 2]
    X86_AT(c, 0xe68dau);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 0e68dd  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0xe68ddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0e68e0  add dword ptr [ebx], eax
    X86_AT(c, 0xe68e0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e68e2  jmp 0xe69b6
    X86_AT(c, 0xe68e2u);
    goto L_e69b6;
L_e68e7:
    X86_TICK(c, 9);
    // 0e68e7  mov esi, edi
    X86_AT(c, 0xe68e7u);
    c.r[6] = c.r[7];
    // 0e68e9  jmp 0xe6998
    X86_AT(c, 0xe68e9u);
    goto L_e6998;
L_e68ee:
    X86_TICK(c, 13);
    // 0e68ee  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0xe68eeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 0e68f4  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe68f4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e68f7  cmp edi, eax
    X86_AT(c, 0xe68f7u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0e68f9  jl 0xe691f
    X86_AT(c, 0xe68f9u);
    if (x86_cc(c, 12)) { goto L_e691f; }
    X86_TICK(c, 7);
    // 0e68fb  and eax, eax
    X86_AT(c, 0xe68fbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e68fd  jle 0xe691f
    X86_AT(c, 0xe68fdu);
    if (x86_cc(c, 14)) { goto L_e691f; }
    X86_TICK(c, 53);
    // 0e68ff  xchg ecx, eax
    X86_AT(c, 0xe68ffu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0e6900  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe6900u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e6902  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6902u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e6905  push esi
    X86_AT(c, 0xe6905u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6906  push edi
    X86_AT(c, 0xe6906u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6907  mov esi, eax
    X86_AT(c, 0xe6907u);
    c.r[6] = c.r[0];
    // 0e6909  mov edi, edx
    X86_AT(c, 0xe6909u);
    c.r[7] = c.r[2];
    // 0e690b  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe690bu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e690d  pop edi
    X86_AT(c, 0xe690du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e690e  pop esi
    X86_AT(c, 0xe690eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e690f  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0xe690fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 0e6912  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe6912u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6915  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xe6915u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e6918  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6918u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_e691f:
    X86_TICK(c, 7);
    // 0e691f  cmp edi, 0x200
    X86_AT(c, 0xe691fu);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0e6925  jb 0xe695d
    X86_AT(c, 0xe6925u);
    if (x86_cc(c, 2)) { goto L_e695d; }
    X86_TICK(c, 10);
    // 0e6927  mov esi, edi
    X86_AT(c, 0xe6927u);
    c.r[6] = c.r[7];
    // 0e6929  shr esi, 9
    X86_AT(c, 0xe6929u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 0e692c  shl esi, 9
    X86_AT(c, 0xe692cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 0e692f  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xe692fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_e6936:
    X86_TICK(c, 27);
    // 0e6936  push esi
    X86_AT(c, 0xe6936u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6937  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6937u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e693a  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe693au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0e693d  push eax
    X86_AT(c, 0xe693du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e693e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe693eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6941  push eax
    X86_AT(c, 0xe6941u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6942  call 0xe9aac
    X86_AT(c, 0xe6942u);
    push32(c, 0xe6947u); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe6947u);
    X86_TICK(c, 25);
    // 0e6947  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe6947u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e694a  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xe694au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e694d  sub esi, eax
    X86_AT(c, 0xe694du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e694f  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xe694fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e6952  and esi, esi
    X86_AT(c, 0xe6952u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e6954  je 0xe695a
    X86_AT(c, 0xe6954u);
    if (x86_cc(c, 4)) { goto L_e695a; }
    X86_TICK(c, 7);
    // 0e6956  and eax, eax
    X86_AT(c, 0xe6956u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e6958  jne 0xe6936
    X86_AT(c, 0xe6958u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe6936u); goto L_e6936; }
L_e695a:
    X86_TICK(c, 6);
    // 0e695a  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe695au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_e695d:
    X86_TICK(c, 7);
    // 0e695d  and edi, edi
    X86_AT(c, 0xe695du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e695f  jbe 0xe69b6
    X86_AT(c, 0xe695fu);
    if (x86_cc(c, 6)) { goto L_e69b6; }
    X86_TICK(c, 12);
    // 0e6961  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6961u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e6965  jne 0xe6986
    X86_AT(c, 0xe6965u);
    if (x86_cc(c, 5)) { goto L_e6986; }
    X86_TICK(c, 12);
    // 0e6967  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xe6967u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 0e696b  jne 0xe69be
    X86_AT(c, 0xe696bu);
    if (x86_cc(c, 5)) { goto L_e69be; }
    X86_TICK(c, 20);
    // 0e696d  push 0x200
    X86_AT(c, 0xe696du);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0e6972  push dword ptr [ebx + 8]
    X86_AT(c, 0xe6972u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0e6975  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6975u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6978  push eax
    X86_AT(c, 0xe6978u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6979  call 0xe9aac
    X86_AT(c, 0xe6979u);
    push32(c, 0xe697eu); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe697eu);
    X86_TICK(c, 8);
    // 0e697e  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xe697eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 0e6981  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe6981u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e6984  mov dword ptr [ebx], eax
    X86_AT(c, 0xe6984u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_e6986:
    X86_TICK(c, 12);
    // 0e6986  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6986u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e698a  jle 0xe69be
    X86_AT(c, 0xe698au);
    if (x86_cc(c, 14)) { goto L_e69be; }
L_e698c:
    X86_TICK(c, 13);
    // 0e698c  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe698cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e698f  mov edx, edi
    X86_AT(c, 0xe698fu);
    c.r[2] = c.r[7];
    // 0e6991  cmp edx, eax
    X86_AT(c, 0xe6991u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0e6993  jl 0xe6996
    X86_AT(c, 0xe6993u);
    if (x86_cc(c, 12)) { goto L_e6996; }
    X86_TICK(c, 3);
    // 0e6995  xchg edx, eax
    X86_AT(c, 0xe6995u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_e6996:
    X86_TICK(c, 2);
    // 0e6996  mov esi, edx
    X86_AT(c, 0xe6996u);
    c.r[6] = c.r[2];
L_e6998:
    X86_TICK(c, 62);
    // 0e6998  mov ecx, esi
    X86_AT(c, 0xe6998u);
    c.r[1] = c.r[6];
    // 0e699a  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe699au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e699c  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe699cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e699f  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0xe699fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0e69a2  push esi
    X86_AT(c, 0xe69a2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e69a3  push edi
    X86_AT(c, 0xe69a3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e69a4  mov esi, eax
    X86_AT(c, 0xe69a4u);
    c.r[6] = c.r[0];
    // 0e69a6  mov edi, edx
    X86_AT(c, 0xe69a6u);
    c.r[7] = c.r[2];
    // 0e69a8  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe69a8u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e69aa  pop edi
    X86_AT(c, 0xe69aau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e69ab  pop esi
    X86_AT(c, 0xe69abu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e69ac  add dword ptr [ebp - 4], esi
    X86_AT(c, 0xe69acu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0e69af  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0xe69afu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 0e69b2  sub edi, esi
    X86_AT(c, 0xe69b2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e69b4  add dword ptr [ebx], esi
    X86_AT(c, 0xe69b4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_e69b6:
    X86_TICK(c, 7);
    // 0e69b6  and edi, edi
    X86_AT(c, 0xe69b6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e69b8  ja 0xe66f1
    X86_AT(c, 0xe69b8u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xe66f1u); goto L_e66f1; }
L_e69be:
    X86_TICK(c, 12);
    // 0e69be  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xe69beu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0e69c2  jne 0xe69c8
    X86_AT(c, 0xe69c2u);
    if (x86_cc(c, 5)) { goto L_e69c8; }
    X86_TICK(c, 7);
    // 0e69c4  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xe69c4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_e69c8:
    X86_TICK(c, 13);
    // 0e69c8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe69c8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e69cb  mov dword ptr [0xc40c0], eax
    X86_AT(c, 0xe69cbu);
    wr32((c.sbase[3] + (uint32_t)(0xC40C0u)), c.r[0]);
    // 0e69d0  jmp 0xe6b00
    X86_AT(c, 0xe69d0u);
    goto L_e6b00;
L_e69d5:
    X86_TICK(c, 14);
    // 0e69d5  mov dword ptr [0xc40c0], 0
    X86_AT(c, 0xe69d5u);
    wr32((c.sbase[3] + (uint32_t)(0xC40C0u)), 0x0u);
    // 0e69df  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xe69dfu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0e69e3  je 0xe6aeb
    X86_AT(c, 0xe69e3u);
    if (x86_cc(c, 4)) { goto L_e6aeb; }
    X86_TICK(c, 12);
    // 0e69e9  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xe69e9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0e69ed  jne 0xe6aef
    X86_AT(c, 0xe69edu);
    if (x86_cc(c, 5)) { goto L_e6aef; }
    X86_TICK(c, 7);
    // 0e69f3  jmp 0xe6abd
    X86_AT(c, 0xe69f3u);
    goto L_e6abd;
L_e69f8:
    X86_TICK(c, 19);
    // 0e69f8  push 1
    X86_AT(c, 0xe69f8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e69fa  lea eax, [ebp - 0xf]
    X86_AT(c, 0xe69fau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF1u);
    // 0e69fd  push eax
    X86_AT(c, 0xe69fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e69fe  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe69feu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6a01  push edx
    X86_AT(c, 0xe6a01u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e6a02  call 0xe9aac
    X86_AT(c, 0xe6a02u);
    push32(c, 0xe6a07u); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe6a07u);
    X86_TICK(c, 10);
    // 0e6a07  xchg esi, eax
    X86_AT(c, 0xe6a07u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e6a08  and esi, esi
    X86_AT(c, 0xe6a08u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e6a0a  je 0xe6a62
    X86_AT(c, 0xe6a0au);
    if (x86_cc(c, 4)) { goto L_e6a62; }
    X86_TICK(c, 12);
    // 0e6a0c  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0xe6a0cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 0e6a10  je 0xe6a62
    X86_AT(c, 0xe6a10u);
    if (x86_cc(c, 4)) { goto L_e6a62; }
L_e6a12:
    X86_TICK(c, 15);
    // 0e6a12  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0xe6a12u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 0e6a15  cmp al, byte ptr [0xc40aa]
    X86_AT(c, 0xe6a15u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0xC40AAu))), 0, 1);
    // 0e6a1b  jne 0xe6aac
    X86_AT(c, 0xe6a1bu);
    if (x86_cc(c, 5)) { goto L_e6aac; }
    X86_TICK(c, 13);
    // 0e6a21  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6a21u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6a24  push eax
    X86_AT(c, 0xe6a24u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6a25  call 0xe9b3c
    X86_AT(c, 0xe6a25u);
    push32(c, 0xe6a2au); x86_call_known(c, 0xe9b3cu, f_000e9b3c); X86_RET(c, 0xe6a2au);
    X86_TICK(c, 7);
    // 0e6a2a  dec al
    X86_AT(c, 0xe6a2au);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_dec(c, v, 1)); }
    // 0e6a2c  je 0xe6a76
    X86_AT(c, 0xe6a2cu);
    if (x86_cc(c, 4)) { goto L_e6a76; }
    X86_TICK(c, 19);
    // 0e6a2e  push 1
    X86_AT(c, 0xe6a2eu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e6a30  lea eax, [ebp - 0xf]
    X86_AT(c, 0xe6a30u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF1u);
    // 0e6a33  push eax
    X86_AT(c, 0xe6a33u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6a34  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6a34u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6a37  push edx
    X86_AT(c, 0xe6a37u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e6a38  call 0xe9aac
    X86_AT(c, 0xe6a38u);
    push32(c, 0xe6a3du); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe6a3du);
    X86_TICK(c, 10);
    // 0e6a3d  xchg esi, eax
    X86_AT(c, 0xe6a3du);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e6a3e  and esi, esi
    X86_AT(c, 0xe6a3eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e6a40  je 0xe6a48
    X86_AT(c, 0xe6a40u);
    if (x86_cc(c, 4)) { goto L_e6a48; }
    X86_TICK(c, 12);
    // 0e6a42  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0xe6a42u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 0e6a46  jne 0xe6a6b
    X86_AT(c, 0xe6a46u);
    if (x86_cc(c, 5)) { goto L_e6a6b; }
L_e6a48:
    X86_TICK(c, 28);
    // 0e6a48  mov al, byte ptr [0xc40aa]
    X86_AT(c, 0xe6a48u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC40AAu))));
    // 0e6a4d  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6a4du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e6a50  mov byte ptr [edx], al
    X86_AT(c, 0xe6a50u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0e6a52  inc dword ptr [0xc40c0]
    X86_AT(c, 0xe6a52u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40C0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e6a58  cmp byte ptr [ebp - 0xf], 0x1a
    X86_AT(c, 0xe6a58u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))), 0x1Au, 0, 1);
    // 0e6a5c  jne 0xe6aef
    X86_AT(c, 0xe6a5cu);
    if (x86_cc(c, 5)) { goto L_e6aef; }
L_e6a62:
    X86_TICK(c, 14);
    // 0e6a62  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xe6a62u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 0e6a66  jmp 0xe6aef
    X86_AT(c, 0xe6a66u);
    goto L_e6aef;
L_e6a6b:
    X86_TICK(c, 15);
    // 0e6a6b  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0xe6a6bu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 0e6a6e  cmp al, byte ptr [0xc40ab]
    X86_AT(c, 0xe6a6eu);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0xC40ABu))), 0, 1);
    // 0e6a74  jne 0xe6a7e
    X86_AT(c, 0xe6a74u);
    if (x86_cc(c, 5)) { goto L_e6a7e; }
L_e6a76:
    X86_TICK(c, 13);
    // 0e6a76  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6a76u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e6a79  mov byte ptr [eax], 0xa
    X86_AT(c, 0xe6a79u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xAu);
    // 0e6a7c  jmp 0xe6ab4
    X86_AT(c, 0xe6a7cu);
    goto L_e6ab4;
L_e6a7e:
    X86_TICK(c, 33);
    // 0e6a7e  mov al, byte ptr [0xc40aa]
    X86_AT(c, 0xe6a7eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC40AAu))));
    // 0e6a83  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6a83u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e6a86  mov byte ptr [edx], al
    X86_AT(c, 0xe6a86u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0e6a88  inc dword ptr [0xc40c0]
    X86_AT(c, 0xe6a88u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40C0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e6a8e  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6a8eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e6a91  cmp edi, dword ptr [0xc40c0]
    X86_AT(c, 0xe6a91u);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xC40C0u))), 0, 4);
    // 0e6a97  jne 0xe6a12
    X86_AT(c, 0xe6a97u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe6a12u); goto L_e6a12; }
    X86_TICK(c, 17);
    // 0e6a9d  push 1
    X86_AT(c, 0xe6a9du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e6a9f  push 0xffffffff
    X86_AT(c, 0xe6a9fu);
    { uint32_t v = 0xFFFFFFFFu; push32(c, v); }
    // 0e6aa1  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6aa1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6aa4  push eax
    X86_AT(c, 0xe6aa4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6aa5  call 0xe9b84
    X86_AT(c, 0xe6aa5u);
    push32(c, 0xe6aaau); x86_call_known(c, 0xe9b84u, f_000e9b84); X86_RET(c, 0xe6aaau);
    X86_TICK(c, 7);
    // 0e6aaa  jmp 0xe6aef
    X86_AT(c, 0xe6aaau);
    goto L_e6aef;
L_e6aac:
    X86_TICK(c, 10);
    // 0e6aac  mov al, byte ptr [ebp - 0xf]
    X86_AT(c, 0xe6aacu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF1u))));
    // 0e6aaf  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6aafu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e6ab2  mov byte ptr [edx], al
    X86_AT(c, 0xe6ab2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
L_e6ab4:
    X86_TICK(c, 12);
    // 0e6ab4  inc dword ptr [0xc40c0]
    X86_AT(c, 0xe6ab4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40C0u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e6aba  inc dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6abau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_e6abd:
    X86_TICK(c, 11);
    // 0e6abd  cmp edi, dword ptr [0xc40c0]
    X86_AT(c, 0xe6abdu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(0xC40C0u))), 0, 4);
    // 0e6ac3  jbe 0xe6aef
    X86_AT(c, 0xe6ac3u);
    if (x86_cc(c, 6)) { goto L_e6aef; }
    X86_TICK(c, 7);
    // 0e6ac5  jmp 0xe69f8
    X86_AT(c, 0xe6ac5u);
    X86_POLL(c, 0xe69f8u); goto L_e69f8;
L_e6aca:
    X86_TICK(c, 27);
    // 0e6aca  push edi
    X86_AT(c, 0xe6acau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6acb  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6acbu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e6ace  add eax, dword ptr [0xc40c0]
    X86_AT(c, 0xe6aceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(0xC40C0u))), 0, 4); }
    // 0e6ad4  push eax
    X86_AT(c, 0xe6ad4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6ad5  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6ad5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6ad8  push eax
    X86_AT(c, 0xe6ad8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6ad9  call 0xe9aac
    X86_AT(c, 0xe6ad9u);
    push32(c, 0xe6adeu); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe6adeu);
    X86_TICK(c, 10);
    // 0e6ade  xchg esi, eax
    X86_AT(c, 0xe6adeu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e6adf  and esi, esi
    X86_AT(c, 0xe6adfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e6ae1  je 0xe6aef
    X86_AT(c, 0xe6ae1u);
    if (x86_cc(c, 4)) { goto L_e6aef; }
    X86_TICK(c, 9);
    // 0e6ae3  add dword ptr [0xc40c0], esi
    X86_AT(c, 0xe6ae3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0xC40C0u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0e6ae9  sub edi, esi
    X86_AT(c, 0xe6ae9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
L_e6aeb:
    X86_TICK(c, 7);
    // 0e6aeb  and edi, edi
    X86_AT(c, 0xe6aebu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e6aed  ja 0xe6aca
    X86_AT(c, 0xe6aedu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xe6acau); goto L_e6aca; }
L_e6aef:
    X86_TICK(c, 12);
    // 0e6aef  cmp dword ptr [0xc40c0], 0
    X86_AT(c, 0xe6aefu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(0xC40C0u))), 0x0u, 0, 4);
    // 0e6af6  jne 0xe6b00
    X86_AT(c, 0xe6af6u);
    if (x86_cc(c, 5)) { goto L_e6b00; }
    X86_TICK(c, 7);
    // 0e6af8  and edi, edi
    X86_AT(c, 0xe6af8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e6afa  jbe 0xe6b00
    X86_AT(c, 0xe6afau);
    if (x86_cc(c, 6)) { goto L_e6b00; }
    X86_TICK(c, 7);
    // 0e6afc  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xe6afcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_e6b00:
    X86_TICK(c, 12);
    // 0e6b00  cmp word ptr [0xc453a], 0
    X86_AT(c, 0xe6b00u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC453Au))), 0x0u, 0, 2);
    // 0e6b08  je 0xe6b10
    X86_AT(c, 0xe6b08u);
    if (x86_cc(c, 4)) { goto L_e6b10; }
    X86_TICK(c, 14);
    // 0e6b0a  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0xe6b0au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0e6b0e  jmp 0xe6b1a
    X86_AT(c, 0xe6b0eu);
    goto L_e6b1a;
L_e6b10:
    X86_TICK(c, 6);
    // 0e6b10  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0xe6b10u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 0e6b14  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe6b14u);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
L_e6b1a:
    X86_TICK(c, 28);
    // 0e6b1a  pop edi
    X86_AT(c, 0xe6b1au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6b1b  pop esi
    X86_AT(c, 0xe6b1bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6b1c  pop ebx
    X86_AT(c, 0xe6b1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e6b1d  leave 
    X86_AT(c, 0xe6b1du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6b1e  ret 0xc
    X86_AT(c, 0xe6b1eu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xe66c0u, "ran off the end of a function");
}
void f_000e6998(X86Cpu& c) {
    goto L_e6998;
L_e66f1:
    X86_TICK(c, 12);
    // 0e66f1  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xe66f1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0e66f5  je 0xe68ee
    X86_AT(c, 0xe66f5u);
    if (x86_cc(c, 4)) { goto L_e68ee; }
    X86_TICK(c, 12);
    // 0e66fb  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0xe66fbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 0e66ff  jne 0xe6746
    X86_AT(c, 0xe66ffu);
    if (x86_cc(c, 5)) { goto L_e6746; }
    X86_TICK(c, 12);
    // 0e6701  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xe6701u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0e6706  jne 0xe6746
    X86_AT(c, 0xe6706u);
    if (x86_cc(c, 5)) { goto L_e6746; }
    X86_TICK(c, 12);
    // 0e6708  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xe6708u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0e670c  jne 0xe698c
    X86_AT(c, 0xe670cu);
    if (x86_cc(c, 5)) { goto L_e698c; }
    X86_TICK(c, 33);
    // 0e6712  mov al, byte ptr [0xc40aa]
    X86_AT(c, 0xe6712u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC40AAu))));
    // 0e6717  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0xe6717u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e671a  mov byte ptr [edx], al
    X86_AT(c, 0xe671au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0e671c  push 0x1ff
    X86_AT(c, 0xe671cu);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 0e6721  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe6721u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e6724  inc eax
    X86_AT(c, 0xe6724u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e6725  push eax
    X86_AT(c, 0xe6725u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6726  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6726u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6729  push eax
    X86_AT(c, 0xe6729u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e672a  call 0xe9aac
    X86_AT(c, 0xe672au);
    push32(c, 0xe672fu); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe672fu);
    X86_TICK(c, 11);
    // 0e672f  inc eax
    X86_AT(c, 0xe672fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e6730  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xe6730u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 0e6733  dec eax
    X86_AT(c, 0xe6733u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e6734  jne 0xe677e
    X86_AT(c, 0xe6734u);
    if (x86_cc(c, 5)) { goto L_e677e; }
    X86_TICK(c, 15);
    // 0e6736  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe6736u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e6739  mov dword ptr [ebx], eax
    X86_AT(c, 0xe6739u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0e673b  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xe673bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 0e6741  jmp 0xe698c
    X86_AT(c, 0xe6741u);
    goto L_e698c;
L_e6746:
    X86_TICK(c, 12);
    // 0e6746  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6746u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e674a  jne 0xe67c3
    X86_AT(c, 0xe674au);
    if (x86_cc(c, 5)) { goto L_e67c3; }
    X86_TICK(c, 12);
    // 0e6750  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xe6750u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 0e6754  jne 0xe69be
    X86_AT(c, 0xe6754u);
    if (x86_cc(c, 5)) { goto L_e69be; }
    X86_TICK(c, 12);
    // 0e675a  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xe675au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0e675e  jne 0xe6774
    X86_AT(c, 0xe675eu);
    if (x86_cc(c, 5)) { goto L_e6774; }
    X86_TICK(c, 20);
    // 0e6760  push 0x200
    X86_AT(c, 0xe6760u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0e6765  push dword ptr [ebx + 8]
    X86_AT(c, 0xe6765u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0e6768  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6768u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e676b  push eax
    X86_AT(c, 0xe676bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e676c  call 0xe9aac
    X86_AT(c, 0xe676cu);
    push32(c, 0xe6771u); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe6771u);
    X86_TICK(c, 2);
    // 0e6771  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xe6771u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_e6774:
    X86_TICK(c, 12);
    // 0e6774  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6774u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e6778  je 0xe69be
    X86_AT(c, 0xe6778u);
    if (x86_cc(c, 4)) { goto L_e69be; }
L_e677e:
    X86_TICK(c, 28);
    // 0e677e  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe677eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6781  mov al, 0x1a
    X86_AT(c, 0xe6781u);
    s8(c, 0, 0x1Au);
    // 0e6783  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0xe6783u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e6786  push edi
    X86_AT(c, 0xe6786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6787  mov edi, ecx
    X86_AT(c, 0xe6787u);
    c.r[7] = c.r[1];
    // 0e6789  mov ecx, edx
    X86_AT(c, 0xe6789u);
    c.r[1] = c.r[2];
    // 0e678b  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe678bu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e678d  jne 0xe6792
    X86_AT(c, 0xe678du);
    if (x86_cc(c, 5)) { goto L_e6792; }
    X86_TICK(c, 4);
    // 0e678f  inc ecx
    X86_AT(c, 0xe678fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e6790  sub edx, ecx
    X86_AT(c, 0xe6790u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e6792:
    X86_TICK(c, 17);
    // 0e6792  pop edi
    X86_AT(c, 0xe6792u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6793  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0xe6793u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 0e6797  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe6797u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e679a  je 0xe67b8
    X86_AT(c, 0xe679au);
    if (x86_cc(c, 4)) { goto L_e67b8; }
    X86_TICK(c, 32);
    // 0e679c  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xe679cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 0e67a0  push 1
    X86_AT(c, 0xe67a0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e67a2  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0xe67a2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 0e67a5  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe67a5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 0e67a8  push edx
    X86_AT(c, 0xe67a8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e67a9  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe67a9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e67ac  push eax
    X86_AT(c, 0xe67acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e67ad  call 0xe9b84
    X86_AT(c, 0xe67adu);
    push32(c, 0xe67b2u); x86_call_known(c, 0xe9b84u, f_000e9b84); X86_RET(c, 0xe67b2u);
    X86_TICK(c, 6);
    // 0e67b2  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe67b2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e67b5  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xe67b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_e67b8:
    X86_TICK(c, 8);
    // 0e67b8  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe67b8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e67bb  mov dword ptr [ebx], eax
    X86_AT(c, 0xe67bbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0e67bd  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0xe67bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_e67c3:
    X86_TICK(c, 12);
    // 0e67c3  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe67c3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e67c7  jle 0xe69b6
    X86_AT(c, 0xe67c7u);
    if (x86_cc(c, 14)) { goto L_e69b6; }
    X86_TICK(c, 11);
    // 0e67cd  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe67cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0e67d1  cmp ax, 0xffff
    X86_AT(c, 0xe67d1u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 0e67d5  je 0xe67e5
    X86_AT(c, 0xe67d5u);
    if (x86_cc(c, 4)) { goto L_e67e5; }
    X86_TICK(c, 20);
    // 0e67d7  movsx eax, ax
    X86_AT(c, 0xe67d7u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0e67da  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe67dau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0e67dd  cmp eax, dword ptr [ebx]
    X86_AT(c, 0xe67ddu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0e67df  jge 0xe687c
    X86_AT(c, 0xe67dfu);
    if (x86_cc(c, 13)) { goto L_e687c; }
L_e67e5:
    X86_TICK(c, 30);
    // 0e67e5  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe67e5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e67e8  mov al, byte ptr [0xc40aa]
    X86_AT(c, 0xe67e8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC40AAu))));
    // 0e67ed  mov ecx, dword ptr [ebx]
    X86_AT(c, 0xe67edu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e67ef  push edi
    X86_AT(c, 0xe67efu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e67f0  mov edi, ecx
    X86_AT(c, 0xe67f0u);
    c.r[7] = c.r[1];
    // 0e67f2  mov ecx, edx
    X86_AT(c, 0xe67f2u);
    c.r[1] = c.r[2];
    // 0e67f4  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe67f4u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e67f6  jne 0xe67fb
    X86_AT(c, 0xe67f6u);
    if (x86_cc(c, 5)) { goto L_e67fb; }
    X86_TICK(c, 4);
    // 0e67f8  inc ecx
    X86_AT(c, 0xe67f8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e67f9  sub edx, ecx
    X86_AT(c, 0xe67f9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e67fb:
    X86_TICK(c, 13);
    // 0e67fb  pop edi
    X86_AT(c, 0xe67fbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e67fc  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0xe67fcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 0e6800  jmp 0xe6835
    X86_AT(c, 0xe6800u);
    goto L_e6835;
L_e6802:
    X86_TICK(c, 59);
    // 0e6802  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe6802u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e6806  add eax, dword ptr [ebx]
    X86_AT(c, 0xe6806u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 0e6808  inc eax
    X86_AT(c, 0xe6808u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e6809  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0xe6809u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0e680d  inc edx
    X86_AT(c, 0xe680du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e680e  movsx edx, dx
    X86_AT(c, 0xe680eu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 0e6811  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0xe6811u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6814  sub ecx, edx
    X86_AT(c, 0xe6814u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e6816  mov edx, ecx
    X86_AT(c, 0xe6816u);
    c.r[2] = c.r[1];
    // 0e6818  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xe6818u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0e681b  mov al, byte ptr [0xc40aa]
    X86_AT(c, 0xe681bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC40AAu))));
    // 0e6820  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe6820u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e6823  push edi
    X86_AT(c, 0xe6823u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6824  mov edi, ecx
    X86_AT(c, 0xe6824u);
    c.r[7] = c.r[1];
    // 0e6826  mov ecx, edx
    X86_AT(c, 0xe6826u);
    c.r[1] = c.r[2];
    // 0e6828  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe6828u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e682a  jne 0xe682f
    X86_AT(c, 0xe682au);
    if (x86_cc(c, 5)) { goto L_e682f; }
    X86_TICK(c, 4);
    // 0e682c  inc ecx
    X86_AT(c, 0xe682cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e682d  sub edx, ecx
    X86_AT(c, 0xe682du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e682f:
    X86_TICK(c, 13);
    // 0e682f  pop edi
    X86_AT(c, 0xe682fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6830  inc edx
    X86_AT(c, 0xe6830u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e6831  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0xe6831u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_e6835:
    X86_TICK(c, 19);
    // 0e6835  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe6835u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e6839  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe6839u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e683c  dec edx
    X86_AT(c, 0xe683cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e683d  cmp edx, eax
    X86_AT(c, 0xe683du);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0e683f  jle 0xe684e
    X86_AT(c, 0xe683fu);
    if (x86_cc(c, 14)) { goto L_e684e; }
    X86_TICK(c, 23);
    // 0e6841  add eax, dword ptr [ebx]
    X86_AT(c, 0xe6841u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 0e6843  inc eax
    X86_AT(c, 0xe6843u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e6844  mov al, byte ptr [eax]
    X86_AT(c, 0xe6844u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e6846  cmp al, byte ptr [0xc40ab]
    X86_AT(c, 0xe6846u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0xC40ABu))), 0, 1);
    // 0e684c  jne 0xe6802
    X86_AT(c, 0xe684cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe6802u); goto L_e6802; }
L_e684e:
    X86_TICK(c, 17);
    // 0e684e  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe684eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e6852  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe6852u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e6855  jne 0xe685f
    X86_AT(c, 0xe6855u);
    if (x86_cc(c, 5)) { goto L_e685f; }
    X86_TICK(c, 9);
    // 0e6857  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xe6857u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 0e685d  jmp 0xe687c
    X86_AT(c, 0xe685du);
    goto L_e687c;
L_e685f:
    X86_TICK(c, 19);
    // 0e685f  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe685fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e6863  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe6863u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6866  dec edx
    X86_AT(c, 0xe6866u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e6867  cmp edx, eax
    X86_AT(c, 0xe6867u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0e6869  jne 0xe6873
    X86_AT(c, 0xe6869u);
    if (x86_cc(c, 5)) { goto L_e6873; }
    X86_TICK(c, 9);
    // 0e686b  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xe686bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 0e6871  jmp 0xe687c
    X86_AT(c, 0xe6871u);
    goto L_e687c;
L_e6873:
    X86_TICK(c, 17);
    // 0e6873  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe6873u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e6875  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe6875u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0e6878  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0xe6878u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_e687c:
    X86_TICK(c, 12);
    // 0e687c  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xe687cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 0e6882  je 0xe698c
    X86_AT(c, 0xe6882u);
    if (x86_cc(c, 4)) { goto L_e698c; }
    X86_TICK(c, 12);
    // 0e6888  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xe6888u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0e688d  jne 0xe689d
    X86_AT(c, 0xe688du);
    if (x86_cc(c, 5)) { goto L_e689d; }
    X86_TICK(c, 11);
    // 0e688f  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0xe688fu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e6892  jl 0xe68e7
    X86_AT(c, 0xe6892u);
    if (x86_cc(c, 12)) { goto L_e68e7; }
    X86_TICK(c, 13);
    // 0e6894  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0xe6894u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6897  dec esi
    X86_AT(c, 0xe6897u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e6898  jmp 0xe6998
    X86_AT(c, 0xe6898u);
    goto L_e6998;
L_e689d:
    X86_TICK(c, 25);
    // 0e689d  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe689du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e689f  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe689fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0e68a2  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0xe68a2u);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e68a6  sub esi, eax
    X86_AT(c, 0xe68a6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e68a8  cmp edi, esi
    X86_AT(c, 0xe68a8u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0e68aa  jbe 0xe68e7
    X86_AT(c, 0xe68aau);
    if (x86_cc(c, 6)) { goto L_e68e7; }
    X86_TICK(c, 87);
    // 0e68ac  mov ecx, esi
    X86_AT(c, 0xe68acu);
    c.r[1] = c.r[6];
    // 0e68ae  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe68aeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e68b0  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe68b0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e68b3  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0xe68b3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 0e68b6  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0xe68b6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e68b9  lea edx, [edx + edi*1]
    X86_AT(c, 0xe68b9u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 0e68bc  push esi
    X86_AT(c, 0xe68bcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e68bd  push edi
    X86_AT(c, 0xe68bdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e68be  mov esi, eax
    X86_AT(c, 0xe68beu);
    c.r[6] = c.r[0];
    // 0e68c0  mov edi, edx
    X86_AT(c, 0xe68c0u);
    c.r[7] = c.r[2];
    // 0e68c2  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe68c2u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e68c4  pop edi
    X86_AT(c, 0xe68c4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e68c5  pop esi
    X86_AT(c, 0xe68c5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e68c6  add edi, esi
    X86_AT(c, 0xe68c6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 0e68c8  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe68c8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e68cb  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0xe68cbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 0e68cf  lea eax, [esi + 1]
    X86_AT(c, 0xe68cfu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0e68d2  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xe68d2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e68d5  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe68d5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e68d8  sub edi, eax
    X86_AT(c, 0xe68d8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e68da  lea eax, [esi + 2]
    X86_AT(c, 0xe68dau);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 0e68dd  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0xe68ddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0e68e0  add dword ptr [ebx], eax
    X86_AT(c, 0xe68e0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e68e2  jmp 0xe69b6
    X86_AT(c, 0xe68e2u);
    goto L_e69b6;
L_e68e7:
    X86_TICK(c, 9);
    // 0e68e7  mov esi, edi
    X86_AT(c, 0xe68e7u);
    c.r[6] = c.r[7];
    // 0e68e9  jmp 0xe6998
    X86_AT(c, 0xe68e9u);
    goto L_e6998;
L_e68ee:
    X86_TICK(c, 13);
    // 0e68ee  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0xe68eeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 0e68f4  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe68f4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e68f7  cmp edi, eax
    X86_AT(c, 0xe68f7u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0e68f9  jl 0xe691f
    X86_AT(c, 0xe68f9u);
    if (x86_cc(c, 12)) { goto L_e691f; }
    X86_TICK(c, 7);
    // 0e68fb  and eax, eax
    X86_AT(c, 0xe68fbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e68fd  jle 0xe691f
    X86_AT(c, 0xe68fdu);
    if (x86_cc(c, 14)) { goto L_e691f; }
    X86_TICK(c, 53);
    // 0e68ff  xchg ecx, eax
    X86_AT(c, 0xe68ffu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0e6900  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe6900u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e6902  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6902u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e6905  push esi
    X86_AT(c, 0xe6905u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6906  push edi
    X86_AT(c, 0xe6906u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6907  mov esi, eax
    X86_AT(c, 0xe6907u);
    c.r[6] = c.r[0];
    // 0e6909  mov edi, edx
    X86_AT(c, 0xe6909u);
    c.r[7] = c.r[2];
    // 0e690b  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe690bu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e690d  pop edi
    X86_AT(c, 0xe690du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e690e  pop esi
    X86_AT(c, 0xe690eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e690f  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0xe690fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 0e6912  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe6912u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6915  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xe6915u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e6918  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6918u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_e691f:
    X86_TICK(c, 7);
    // 0e691f  cmp edi, 0x200
    X86_AT(c, 0xe691fu);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0e6925  jb 0xe695d
    X86_AT(c, 0xe6925u);
    if (x86_cc(c, 2)) { goto L_e695d; }
    X86_TICK(c, 10);
    // 0e6927  mov esi, edi
    X86_AT(c, 0xe6927u);
    c.r[6] = c.r[7];
    // 0e6929  shr esi, 9
    X86_AT(c, 0xe6929u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 0e692c  shl esi, 9
    X86_AT(c, 0xe692cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 0e692f  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xe692fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_e6936:
    X86_TICK(c, 27);
    // 0e6936  push esi
    X86_AT(c, 0xe6936u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6937  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6937u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e693a  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe693au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0e693d  push eax
    X86_AT(c, 0xe693du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e693e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe693eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6941  push eax
    X86_AT(c, 0xe6941u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6942  call 0xe9aac
    X86_AT(c, 0xe6942u);
    push32(c, 0xe6947u); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe6947u);
    X86_TICK(c, 25);
    // 0e6947  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe6947u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e694a  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xe694au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e694d  sub esi, eax
    X86_AT(c, 0xe694du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e694f  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xe694fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e6952  and esi, esi
    X86_AT(c, 0xe6952u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e6954  je 0xe695a
    X86_AT(c, 0xe6954u);
    if (x86_cc(c, 4)) { goto L_e695a; }
    X86_TICK(c, 7);
    // 0e6956  and eax, eax
    X86_AT(c, 0xe6956u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e6958  jne 0xe6936
    X86_AT(c, 0xe6958u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe6936u); goto L_e6936; }
L_e695a:
    X86_TICK(c, 6);
    // 0e695a  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe695au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_e695d:
    X86_TICK(c, 7);
    // 0e695d  and edi, edi
    X86_AT(c, 0xe695du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e695f  jbe 0xe69b6
    X86_AT(c, 0xe695fu);
    if (x86_cc(c, 6)) { goto L_e69b6; }
    X86_TICK(c, 12);
    // 0e6961  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6961u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e6965  jne 0xe6986
    X86_AT(c, 0xe6965u);
    if (x86_cc(c, 5)) { goto L_e6986; }
    X86_TICK(c, 12);
    // 0e6967  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xe6967u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 0e696b  jne 0xe69be
    X86_AT(c, 0xe696bu);
    if (x86_cc(c, 5)) { goto L_e69be; }
    X86_TICK(c, 20);
    // 0e696d  push 0x200
    X86_AT(c, 0xe696du);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0e6972  push dword ptr [ebx + 8]
    X86_AT(c, 0xe6972u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0e6975  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6975u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6978  push eax
    X86_AT(c, 0xe6978u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6979  call 0xe9aac
    X86_AT(c, 0xe6979u);
    push32(c, 0xe697eu); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe697eu);
    X86_TICK(c, 8);
    // 0e697e  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xe697eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 0e6981  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe6981u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e6984  mov dword ptr [ebx], eax
    X86_AT(c, 0xe6984u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_e6986:
    X86_TICK(c, 12);
    // 0e6986  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6986u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e698a  jle 0xe69be
    X86_AT(c, 0xe698au);
    if (x86_cc(c, 14)) { goto L_e69be; }
L_e698c:
    X86_TICK(c, 13);
    // 0e698c  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe698cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e698f  mov edx, edi
    X86_AT(c, 0xe698fu);
    c.r[2] = c.r[7];
    // 0e6991  cmp edx, eax
    X86_AT(c, 0xe6991u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0e6993  jl 0xe6996
    X86_AT(c, 0xe6993u);
    if (x86_cc(c, 12)) { goto L_e6996; }
    X86_TICK(c, 3);
    // 0e6995  xchg edx, eax
    X86_AT(c, 0xe6995u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_e6996:
    X86_TICK(c, 2);
    // 0e6996  mov esi, edx
    X86_AT(c, 0xe6996u);
    c.r[6] = c.r[2];
L_e6998:
    X86_TICK(c, 62);
    // 0e6998  mov ecx, esi
    X86_AT(c, 0xe6998u);
    c.r[1] = c.r[6];
    // 0e699a  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe699au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e699c  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe699cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e699f  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0xe699fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0e69a2  push esi
    X86_AT(c, 0xe69a2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e69a3  push edi
    X86_AT(c, 0xe69a3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e69a4  mov esi, eax
    X86_AT(c, 0xe69a4u);
    c.r[6] = c.r[0];
    // 0e69a6  mov edi, edx
    X86_AT(c, 0xe69a6u);
    c.r[7] = c.r[2];
    // 0e69a8  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe69a8u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e69aa  pop edi
    X86_AT(c, 0xe69aau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e69ab  pop esi
    X86_AT(c, 0xe69abu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e69ac  add dword ptr [ebp - 4], esi
    X86_AT(c, 0xe69acu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0e69af  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0xe69afu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 0e69b2  sub edi, esi
    X86_AT(c, 0xe69b2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e69b4  add dword ptr [ebx], esi
    X86_AT(c, 0xe69b4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_e69b6:
    X86_TICK(c, 7);
    // 0e69b6  and edi, edi
    X86_AT(c, 0xe69b6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e69b8  ja 0xe66f1
    X86_AT(c, 0xe69b8u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xe66f1u); goto L_e66f1; }
L_e69be:
    X86_TICK(c, 12);
    // 0e69be  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xe69beu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0e69c2  jne 0xe69c8
    X86_AT(c, 0xe69c2u);
    if (x86_cc(c, 5)) { goto L_e69c8; }
    X86_TICK(c, 7);
    // 0e69c4  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xe69c4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_e69c8:
    X86_TICK(c, 13);
    // 0e69c8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe69c8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e69cb  mov dword ptr [0xc40c0], eax
    X86_AT(c, 0xe69cbu);
    wr32((c.sbase[3] + (uint32_t)(0xC40C0u)), c.r[0]);
    // 0e69d0  jmp 0xe6b00
    X86_AT(c, 0xe69d0u);
    goto L_e6b00;
L_e6b00:
    X86_TICK(c, 12);
    // 0e6b00  cmp word ptr [0xc453a], 0
    X86_AT(c, 0xe6b00u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC453Au))), 0x0u, 0, 2);
    // 0e6b08  je 0xe6b10
    X86_AT(c, 0xe6b08u);
    if (x86_cc(c, 4)) { goto L_e6b10; }
    X86_TICK(c, 14);
    // 0e6b0a  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0xe6b0au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0e6b0e  jmp 0xe6b1a
    X86_AT(c, 0xe6b0eu);
    goto L_e6b1a;
L_e6b10:
    X86_TICK(c, 6);
    // 0e6b10  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0xe6b10u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 0e6b14  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe6b14u);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
L_e6b1a:
    X86_TICK(c, 28);
    // 0e6b1a  pop edi
    X86_AT(c, 0xe6b1au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6b1b  pop esi
    X86_AT(c, 0xe6b1bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6b1c  pop ebx
    X86_AT(c, 0xe6b1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e6b1d  leave 
    X86_AT(c, 0xe6b1du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6b1e  ret 0xc
    X86_AT(c, 0xe6b1eu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xe6998u, "ran off the end of a function");
}
void f_000e69b6(X86Cpu& c) {
    goto L_e69b6;
L_e66f1:
    X86_TICK(c, 12);
    // 0e66f1  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xe66f1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0e66f5  je 0xe68ee
    X86_AT(c, 0xe66f5u);
    if (x86_cc(c, 4)) { goto L_e68ee; }
    X86_TICK(c, 12);
    // 0e66fb  cmp dword ptr [ebx + 4], 1
    X86_AT(c, 0xe66fbu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x1u, 0, 4);
    // 0e66ff  jne 0xe6746
    X86_AT(c, 0xe66ffu);
    if (x86_cc(c, 5)) { goto L_e6746; }
    X86_TICK(c, 12);
    // 0e6701  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xe6701u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0e6706  jne 0xe6746
    X86_AT(c, 0xe6706u);
    if (x86_cc(c, 5)) { goto L_e6746; }
    X86_TICK(c, 12);
    // 0e6708  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xe6708u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0e670c  jne 0xe698c
    X86_AT(c, 0xe670cu);
    if (x86_cc(c, 5)) { goto L_e698c; }
    X86_TICK(c, 33);
    // 0e6712  mov al, byte ptr [0xc40aa]
    X86_AT(c, 0xe6712u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC40AAu))));
    // 0e6717  mov edx, dword ptr [ebx + 8]
    X86_AT(c, 0xe6717u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e671a  mov byte ptr [edx], al
    X86_AT(c, 0xe671au);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0e671c  push 0x1ff
    X86_AT(c, 0xe671cu);
    { uint32_t v = 0x1FFu; push32(c, v); }
    // 0e6721  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe6721u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e6724  inc eax
    X86_AT(c, 0xe6724u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e6725  push eax
    X86_AT(c, 0xe6725u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6726  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6726u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6729  push eax
    X86_AT(c, 0xe6729u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e672a  call 0xe9aac
    X86_AT(c, 0xe672au);
    push32(c, 0xe672fu); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe672fu);
    X86_TICK(c, 11);
    // 0e672f  inc eax
    X86_AT(c, 0xe672fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e6730  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xe6730u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 0e6733  dec eax
    X86_AT(c, 0xe6733u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e6734  jne 0xe677e
    X86_AT(c, 0xe6734u);
    if (x86_cc(c, 5)) { goto L_e677e; }
    X86_TICK(c, 15);
    // 0e6736  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe6736u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e6739  mov dword ptr [ebx], eax
    X86_AT(c, 0xe6739u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0e673b  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xe673bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 0e6741  jmp 0xe698c
    X86_AT(c, 0xe6741u);
    goto L_e698c;
L_e6746:
    X86_TICK(c, 12);
    // 0e6746  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6746u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e674a  jne 0xe67c3
    X86_AT(c, 0xe674au);
    if (x86_cc(c, 5)) { goto L_e67c3; }
    X86_TICK(c, 12);
    // 0e6750  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xe6750u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 0e6754  jne 0xe69be
    X86_AT(c, 0xe6754u);
    if (x86_cc(c, 5)) { goto L_e69be; }
    X86_TICK(c, 12);
    // 0e675a  test byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xe675au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x4u, 1);
    // 0e675e  jne 0xe6774
    X86_AT(c, 0xe675eu);
    if (x86_cc(c, 5)) { goto L_e6774; }
    X86_TICK(c, 20);
    // 0e6760  push 0x200
    X86_AT(c, 0xe6760u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0e6765  push dword ptr [ebx + 8]
    X86_AT(c, 0xe6765u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0e6768  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6768u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e676b  push eax
    X86_AT(c, 0xe676bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e676c  call 0xe9aac
    X86_AT(c, 0xe676cu);
    push32(c, 0xe6771u); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe6771u);
    X86_TICK(c, 2);
    // 0e6771  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xe6771u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_e6774:
    X86_TICK(c, 12);
    // 0e6774  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6774u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e6778  je 0xe69be
    X86_AT(c, 0xe6778u);
    if (x86_cc(c, 4)) { goto L_e69be; }
L_e677e:
    X86_TICK(c, 28);
    // 0e677e  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe677eu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6781  mov al, 0x1a
    X86_AT(c, 0xe6781u);
    s8(c, 0, 0x1Au);
    // 0e6783  mov ecx, dword ptr [ebx + 8]
    X86_AT(c, 0xe6783u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e6786  push edi
    X86_AT(c, 0xe6786u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6787  mov edi, ecx
    X86_AT(c, 0xe6787u);
    c.r[7] = c.r[1];
    // 0e6789  mov ecx, edx
    X86_AT(c, 0xe6789u);
    c.r[1] = c.r[2];
    // 0e678b  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe678bu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e678d  jne 0xe6792
    X86_AT(c, 0xe678du);
    if (x86_cc(c, 5)) { goto L_e6792; }
    X86_TICK(c, 4);
    // 0e678f  inc ecx
    X86_AT(c, 0xe678fu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e6790  sub edx, ecx
    X86_AT(c, 0xe6790u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e6792:
    X86_TICK(c, 17);
    // 0e6792  pop edi
    X86_AT(c, 0xe6792u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6793  mov word ptr [ebp - 0x10], dx
    X86_AT(c, 0xe6793u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), (c.r[2] & 0xFFFFu));
    // 0e6797  cmp edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe6797u);
    (void)x86_sub(c, c.r[2], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e679a  je 0xe67b8
    X86_AT(c, 0xe679au);
    if (x86_cc(c, 4)) { goto L_e67b8; }
    X86_TICK(c, 32);
    // 0e679c  or byte ptr [ebx + 0xd], 4
    X86_AT(c, 0xe679cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 0e67a0  push 1
    X86_AT(c, 0xe67a0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e67a2  mov dword ptr [ebp - 0x14], edx
    X86_AT(c, 0xe67a2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[2]);
    // 0e67a5  sub edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe67a5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 0e67a8  push edx
    X86_AT(c, 0xe67a8u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e67a9  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe67a9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e67ac  push eax
    X86_AT(c, 0xe67acu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e67ad  call 0xe9b84
    X86_AT(c, 0xe67adu);
    push32(c, 0xe67b2u); x86_call_known(c, 0xe9b84u, f_000e9b84); X86_RET(c, 0xe67b2u);
    X86_TICK(c, 6);
    // 0e67b2  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe67b2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e67b5  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xe67b5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
L_e67b8:
    X86_TICK(c, 8);
    // 0e67b8  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe67b8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e67bb  mov dword ptr [ebx], eax
    X86_AT(c, 0xe67bbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0e67bd  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0xe67bdu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
L_e67c3:
    X86_TICK(c, 12);
    // 0e67c3  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe67c3u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e67c7  jle 0xe69b6
    X86_AT(c, 0xe67c7u);
    if (x86_cc(c, 14)) { goto L_e69b6; }
    X86_TICK(c, 11);
    // 0e67cd  mov ax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe67cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0e67d1  cmp ax, 0xffff
    X86_AT(c, 0xe67d1u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xFFFFu, 0, 2);
    // 0e67d5  je 0xe67e5
    X86_AT(c, 0xe67d5u);
    if (x86_cc(c, 4)) { goto L_e67e5; }
    X86_TICK(c, 20);
    // 0e67d7  movsx eax, ax
    X86_AT(c, 0xe67d7u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[0] & 0xFFFFu);
    // 0e67da  add eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe67dau);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0e67dd  cmp eax, dword ptr [ebx]
    X86_AT(c, 0xe67ddu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4);
    // 0e67df  jge 0xe687c
    X86_AT(c, 0xe67dfu);
    if (x86_cc(c, 13)) { goto L_e687c; }
L_e67e5:
    X86_TICK(c, 30);
    // 0e67e5  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe67e5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e67e8  mov al, byte ptr [0xc40aa]
    X86_AT(c, 0xe67e8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC40AAu))));
    // 0e67ed  mov ecx, dword ptr [ebx]
    X86_AT(c, 0xe67edu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e67ef  push edi
    X86_AT(c, 0xe67efu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e67f0  mov edi, ecx
    X86_AT(c, 0xe67f0u);
    c.r[7] = c.r[1];
    // 0e67f2  mov ecx, edx
    X86_AT(c, 0xe67f2u);
    c.r[1] = c.r[2];
    // 0e67f4  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe67f4u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e67f6  jne 0xe67fb
    X86_AT(c, 0xe67f6u);
    if (x86_cc(c, 5)) { goto L_e67fb; }
    X86_TICK(c, 4);
    // 0e67f8  inc ecx
    X86_AT(c, 0xe67f8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e67f9  sub edx, ecx
    X86_AT(c, 0xe67f9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e67fb:
    X86_TICK(c, 13);
    // 0e67fb  pop edi
    X86_AT(c, 0xe67fbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e67fc  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0xe67fcu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 0e6800  jmp 0xe6835
    X86_AT(c, 0xe6800u);
    goto L_e6835;
L_e6802:
    X86_TICK(c, 59);
    // 0e6802  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe6802u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e6806  add eax, dword ptr [ebx]
    X86_AT(c, 0xe6806u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 0e6808  inc eax
    X86_AT(c, 0xe6808u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e6809  mov dx, word ptr [ebx + 0x10]
    X86_AT(c, 0xe6809u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))));
    // 0e680d  inc edx
    X86_AT(c, 0xe680du);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e680e  movsx edx, dx
    X86_AT(c, 0xe680eu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 0e6811  mov ecx, dword ptr [ebx + 4]
    X86_AT(c, 0xe6811u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6814  sub ecx, edx
    X86_AT(c, 0xe6814u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e6816  mov edx, ecx
    X86_AT(c, 0xe6816u);
    c.r[2] = c.r[1];
    // 0e6818  mov dword ptr [ebp - 0x14], eax
    X86_AT(c, 0xe6818u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[0]);
    // 0e681b  mov al, byte ptr [0xc40aa]
    X86_AT(c, 0xe681bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(0xC40AAu))));
    // 0e6820  mov ecx, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe6820u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e6823  push edi
    X86_AT(c, 0xe6823u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6824  mov edi, ecx
    X86_AT(c, 0xe6824u);
    c.r[7] = c.r[1];
    // 0e6826  mov ecx, edx
    X86_AT(c, 0xe6826u);
    c.r[1] = c.r[2];
    // 0e6828  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe6828u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e682a  jne 0xe682f
    X86_AT(c, 0xe682au);
    if (x86_cc(c, 5)) { goto L_e682f; }
    X86_TICK(c, 4);
    // 0e682c  inc ecx
    X86_AT(c, 0xe682cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e682d  sub edx, ecx
    X86_AT(c, 0xe682du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e682f:
    X86_TICK(c, 13);
    // 0e682f  pop edi
    X86_AT(c, 0xe682fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6830  inc edx
    X86_AT(c, 0xe6830u);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0e6831  add word ptr [ebx + 0x10], dx
    X86_AT(c, 0xe6831u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
L_e6835:
    X86_TICK(c, 19);
    // 0e6835  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe6835u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e6839  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe6839u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e683c  dec edx
    X86_AT(c, 0xe683cu);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e683d  cmp edx, eax
    X86_AT(c, 0xe683du);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0e683f  jle 0xe684e
    X86_AT(c, 0xe683fu);
    if (x86_cc(c, 14)) { goto L_e684e; }
    X86_TICK(c, 23);
    // 0e6841  add eax, dword ptr [ebx]
    X86_AT(c, 0xe6841u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3]))), 0, 4); }
    // 0e6843  inc eax
    X86_AT(c, 0xe6843u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0e6844  mov al, byte ptr [eax]
    X86_AT(c, 0xe6844u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e6846  cmp al, byte ptr [0xc40ab]
    X86_AT(c, 0xe6846u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(0xC40ABu))), 0, 1);
    // 0e684c  jne 0xe6802
    X86_AT(c, 0xe684cu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe6802u); goto L_e6802; }
L_e684e:
    X86_TICK(c, 17);
    // 0e684e  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe684eu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e6852  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe6852u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e6855  jne 0xe685f
    X86_AT(c, 0xe6855u);
    if (x86_cc(c, 5)) { goto L_e685f; }
    X86_TICK(c, 9);
    // 0e6857  mov word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xe6857u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0x200u);
    // 0e685d  jmp 0xe687c
    X86_AT(c, 0xe685du);
    goto L_e687c;
L_e685f:
    X86_TICK(c, 19);
    // 0e685f  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe685fu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e6863  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe6863u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6866  dec edx
    X86_AT(c, 0xe6866u);
    { uint32_t v = c.r[2]; c.r[2] = x86_dec(c, v, 4); }
    // 0e6867  cmp edx, eax
    X86_AT(c, 0xe6867u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0e6869  jne 0xe6873
    X86_AT(c, 0xe6869u);
    if (x86_cc(c, 5)) { goto L_e6873; }
    X86_TICK(c, 9);
    // 0e686b  mov word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xe686bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFEu);
    // 0e6871  jmp 0xe687c
    X86_AT(c, 0xe6871u);
    goto L_e687c;
L_e6873:
    X86_TICK(c, 17);
    // 0e6873  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe6873u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e6875  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe6875u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0e6878  add word ptr [ebx + 0x10], ax
    X86_AT(c, 0xe6878u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_e687c:
    X86_TICK(c, 12);
    // 0e687c  cmp word ptr [ebx + 0x10], 0x200
    X86_AT(c, 0xe687cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0x200u, 0, 2);
    // 0e6882  je 0xe698c
    X86_AT(c, 0xe6882u);
    if (x86_cc(c, 4)) { goto L_e698c; }
    X86_TICK(c, 12);
    // 0e6888  cmp word ptr [ebx + 0x10], 0xfffe
    X86_AT(c, 0xe6888u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u))), 0xFFFEu, 0, 2);
    // 0e688d  jne 0xe689d
    X86_AT(c, 0xe688du);
    if (x86_cc(c, 5)) { goto L_e689d; }
    X86_TICK(c, 11);
    // 0e688f  cmp edi, dword ptr [ebx + 4]
    X86_AT(c, 0xe688fu);
    (void)x86_sub(c, c.r[7], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e6892  jl 0xe68e7
    X86_AT(c, 0xe6892u);
    if (x86_cc(c, 12)) { goto L_e68e7; }
    X86_TICK(c, 13);
    // 0e6894  mov esi, dword ptr [ebx + 4]
    X86_AT(c, 0xe6894u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6897  dec esi
    X86_AT(c, 0xe6897u);
    { uint32_t v = c.r[6]; c.r[6] = x86_dec(c, v, 4); }
    // 0e6898  jmp 0xe6998
    X86_AT(c, 0xe6898u);
    goto L_e6998;
L_e689d:
    X86_TICK(c, 25);
    // 0e689d  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe689du);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e689f  sub eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe689fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))), 0, 4); }
    // 0e68a2  movsx esi, word ptr [ebx + 0x10]
    X86_AT(c, 0xe68a2u);
    c.r[6] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e68a6  sub esi, eax
    X86_AT(c, 0xe68a6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e68a8  cmp edi, esi
    X86_AT(c, 0xe68a8u);
    (void)x86_sub(c, c.r[7], c.r[6], 0, 4);
    // 0e68aa  jbe 0xe68e7
    X86_AT(c, 0xe68aau);
    if (x86_cc(c, 6)) { goto L_e68e7; }
    X86_TICK(c, 87);
    // 0e68ac  mov ecx, esi
    X86_AT(c, 0xe68acu);
    c.r[1] = c.r[6];
    // 0e68ae  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe68aeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e68b0  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe68b0u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e68b3  mov dword ptr [ebp - 0x14], edi
    X86_AT(c, 0xe68b3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[7]);
    // 0e68b6  mov edi, dword ptr [ebp - 4]
    X86_AT(c, 0xe68b6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e68b9  lea edx, [edx + edi*1]
    X86_AT(c, 0xe68b9u);
    c.r[2] = (uint32_t)(c.r[2] + c.r[7]);
    // 0e68bc  push esi
    X86_AT(c, 0xe68bcu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e68bd  push edi
    X86_AT(c, 0xe68bdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e68be  mov esi, eax
    X86_AT(c, 0xe68beu);
    c.r[6] = c.r[0];
    // 0e68c0  mov edi, edx
    X86_AT(c, 0xe68c0u);
    c.r[7] = c.r[2];
    // 0e68c2  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe68c2u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e68c4  pop edi
    X86_AT(c, 0xe68c4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e68c5  pop esi
    X86_AT(c, 0xe68c5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e68c6  add edi, esi
    X86_AT(c, 0xe68c6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, c.r[6], 0, 4); }
    // 0e68c8  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe68c8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e68cb  mov byte ptr [eax + edi*1], 0xa
    X86_AT(c, 0xe68cbu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0] + c.r[7])), 0xAu);
    // 0e68cf  lea eax, [esi + 1]
    X86_AT(c, 0xe68cfu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0e68d2  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xe68d2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e68d5  mov edi, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe68d5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e68d8  sub edi, eax
    X86_AT(c, 0xe68d8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e68da  lea eax, [esi + 2]
    X86_AT(c, 0xe68dau);
    c.r[0] = (uint32_t)(c.r[6] + 0x2u);
    // 0e68dd  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0xe68ddu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0e68e0  add dword ptr [ebx], eax
    X86_AT(c, 0xe68e0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e68e2  jmp 0xe69b6
    X86_AT(c, 0xe68e2u);
    goto L_e69b6;
L_e68e7:
    X86_TICK(c, 9);
    // 0e68e7  mov esi, edi
    X86_AT(c, 0xe68e7u);
    c.r[6] = c.r[7];
    // 0e68e9  jmp 0xe6998
    X86_AT(c, 0xe68e9u);
    goto L_e6998;
L_e68ee:
    X86_TICK(c, 13);
    // 0e68ee  mov word ptr [ebx + 0x10], 0xffff
    X86_AT(c, 0xe68eeu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), 0xFFFFu);
    // 0e68f4  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe68f4u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e68f7  cmp edi, eax
    X86_AT(c, 0xe68f7u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0e68f9  jl 0xe691f
    X86_AT(c, 0xe68f9u);
    if (x86_cc(c, 12)) { goto L_e691f; }
    X86_TICK(c, 7);
    // 0e68fb  and eax, eax
    X86_AT(c, 0xe68fbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e68fd  jle 0xe691f
    X86_AT(c, 0xe68fdu);
    if (x86_cc(c, 14)) { goto L_e691f; }
    X86_TICK(c, 53);
    // 0e68ff  xchg ecx, eax
    X86_AT(c, 0xe68ffu);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0e6900  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe6900u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e6902  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6902u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e6905  push esi
    X86_AT(c, 0xe6905u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6906  push edi
    X86_AT(c, 0xe6906u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6907  mov esi, eax
    X86_AT(c, 0xe6907u);
    c.r[6] = c.r[0];
    // 0e6909  mov edi, edx
    X86_AT(c, 0xe6909u);
    c.r[7] = c.r[2];
    // 0e690b  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe690bu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e690d  pop edi
    X86_AT(c, 0xe690du);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e690e  pop esi
    X86_AT(c, 0xe690eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e690f  sub edi, dword ptr [ebx + 4]
    X86_AT(c, 0xe690fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4); }
    // 0e6912  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe6912u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6915  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xe6915u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e6918  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6918u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_e691f:
    X86_TICK(c, 7);
    // 0e691f  cmp edi, 0x200
    X86_AT(c, 0xe691fu);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0e6925  jb 0xe695d
    X86_AT(c, 0xe6925u);
    if (x86_cc(c, 2)) { goto L_e695d; }
    X86_TICK(c, 10);
    // 0e6927  mov esi, edi
    X86_AT(c, 0xe6927u);
    c.r[6] = c.r[7];
    // 0e6929  shr esi, 9
    X86_AT(c, 0xe6929u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 0e692c  shl esi, 9
    X86_AT(c, 0xe692cu);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[6] = r; }
    // 0e692f  mov dword ptr [ebp - 0xc], 0
    X86_AT(c, 0xe692fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
L_e6936:
    X86_TICK(c, 27);
    // 0e6936  push esi
    X86_AT(c, 0xe6936u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6937  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6937u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e693a  add eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe693au);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0e693d  push eax
    X86_AT(c, 0xe693du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e693e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe693eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6941  push eax
    X86_AT(c, 0xe6941u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6942  call 0xe9aac
    X86_AT(c, 0xe6942u);
    push32(c, 0xe6947u); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe6947u);
    X86_TICK(c, 25);
    // 0e6947  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe6947u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e694a  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0xe694au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e694d  sub esi, eax
    X86_AT(c, 0xe694du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e694f  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xe694fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e6952  and esi, esi
    X86_AT(c, 0xe6952u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e6954  je 0xe695a
    X86_AT(c, 0xe6954u);
    if (x86_cc(c, 4)) { goto L_e695a; }
    X86_TICK(c, 7);
    // 0e6956  and eax, eax
    X86_AT(c, 0xe6956u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e6958  jne 0xe6936
    X86_AT(c, 0xe6958u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe6936u); goto L_e6936; }
L_e695a:
    X86_TICK(c, 6);
    // 0e695a  sub edi, dword ptr [ebp - 0xc]
    X86_AT(c, 0xe695au);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0, 4); }
L_e695d:
    X86_TICK(c, 7);
    // 0e695d  and edi, edi
    X86_AT(c, 0xe695du);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e695f  jbe 0xe69b6
    X86_AT(c, 0xe695fu);
    if (x86_cc(c, 6)) { goto L_e69b6; }
    X86_TICK(c, 12);
    // 0e6961  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6961u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e6965  jne 0xe6986
    X86_AT(c, 0xe6965u);
    if (x86_cc(c, 5)) { goto L_e6986; }
    X86_TICK(c, 12);
    // 0e6967  test byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xe6967u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x10u, 1);
    // 0e696b  jne 0xe69be
    X86_AT(c, 0xe696bu);
    if (x86_cc(c, 5)) { goto L_e69be; }
    X86_TICK(c, 20);
    // 0e696d  push 0x200
    X86_AT(c, 0xe696du);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0e6972  push dword ptr [ebx + 8]
    X86_AT(c, 0xe6972u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0e6975  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6975u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6978  push eax
    X86_AT(c, 0xe6978u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6979  call 0xe9aac
    X86_AT(c, 0xe6979u);
    push32(c, 0xe697eu); x86_call_known(c, 0xe9aacu, f_000e9aac); X86_RET(c, 0xe697eu);
    X86_TICK(c, 8);
    // 0e697e  mov dword ptr [ebx + 4], eax
    X86_AT(c, 0xe697eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), c.r[0]);
    // 0e6981  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe6981u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e6984  mov dword ptr [ebx], eax
    X86_AT(c, 0xe6984u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_e6986:
    X86_TICK(c, 12);
    // 0e6986  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6986u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e698a  jle 0xe69be
    X86_AT(c, 0xe698au);
    if (x86_cc(c, 14)) { goto L_e69be; }
L_e698c:
    X86_TICK(c, 13);
    // 0e698c  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe698cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e698f  mov edx, edi
    X86_AT(c, 0xe698fu);
    c.r[2] = c.r[7];
    // 0e6991  cmp edx, eax
    X86_AT(c, 0xe6991u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0e6993  jl 0xe6996
    X86_AT(c, 0xe6993u);
    if (x86_cc(c, 12)) { goto L_e6996; }
    X86_TICK(c, 3);
    // 0e6995  xchg edx, eax
    X86_AT(c, 0xe6995u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_e6996:
    X86_TICK(c, 2);
    // 0e6996  mov esi, edx
    X86_AT(c, 0xe6996u);
    c.r[6] = c.r[2];
L_e6998:
    X86_TICK(c, 62);
    // 0e6998  mov ecx, esi
    X86_AT(c, 0xe6998u);
    c.r[1] = c.r[6];
    // 0e699a  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe699au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e699c  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe699cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e699f  add edx, dword ptr [ebp - 4]
    X86_AT(c, 0xe699fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0, 4); }
    // 0e69a2  push esi
    X86_AT(c, 0xe69a2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e69a3  push edi
    X86_AT(c, 0xe69a3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e69a4  mov esi, eax
    X86_AT(c, 0xe69a4u);
    c.r[6] = c.r[0];
    // 0e69a6  mov edi, edx
    X86_AT(c, 0xe69a6u);
    c.r[7] = c.r[2];
    // 0e69a8  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe69a8u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e69aa  pop edi
    X86_AT(c, 0xe69aau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e69ab  pop esi
    X86_AT(c, 0xe69abu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e69ac  add dword ptr [ebp - 4], esi
    X86_AT(c, 0xe69acu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0e69af  sub dword ptr [ebx + 4], esi
    X86_AT(c, 0xe69afu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[6], 0, 4)); }
    // 0e69b2  sub edi, esi
    X86_AT(c, 0xe69b2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e69b4  add dword ptr [ebx], esi
    X86_AT(c, 0xe69b4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_e69b6:
    X86_TICK(c, 7);
    // 0e69b6  and edi, edi
    X86_AT(c, 0xe69b6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e69b8  ja 0xe66f1
    X86_AT(c, 0xe69b8u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xe66f1u); goto L_e66f1; }
L_e69be:
    X86_TICK(c, 12);
    // 0e69be  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xe69beu);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0e69c2  jne 0xe69c8
    X86_AT(c, 0xe69c2u);
    if (x86_cc(c, 5)) { goto L_e69c8; }
    X86_TICK(c, 7);
    // 0e69c4  or byte ptr [ebx + 0xc], 0x10
    X86_AT(c, 0xe69c4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
L_e69c8:
    X86_TICK(c, 13);
    // 0e69c8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe69c8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e69cb  mov dword ptr [0xc40c0], eax
    X86_AT(c, 0xe69cbu);
    wr32((c.sbase[3] + (uint32_t)(0xC40C0u)), c.r[0]);
    // 0e69d0  jmp 0xe6b00
    X86_AT(c, 0xe69d0u);
    goto L_e6b00;
L_e6b00:
    X86_TICK(c, 12);
    // 0e6b00  cmp word ptr [0xc453a], 0
    X86_AT(c, 0xe6b00u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC453Au))), 0x0u, 0, 2);
    // 0e6b08  je 0xe6b10
    X86_AT(c, 0xe6b08u);
    if (x86_cc(c, 4)) { goto L_e6b10; }
    X86_TICK(c, 14);
    // 0e6b0a  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0xe6b0au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0e6b0e  jmp 0xe6b1a
    X86_AT(c, 0xe6b0eu);
    goto L_e6b1a;
L_e6b10:
    X86_TICK(c, 6);
    // 0e6b10  mov ax, word ptr [ebp - 0xe]
    X86_AT(c, 0xe6b10u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF2u))));
    // 0e6b14  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe6b14u);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
L_e6b1a:
    X86_TICK(c, 28);
    // 0e6b1a  pop edi
    X86_AT(c, 0xe6b1au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6b1b  pop esi
    X86_AT(c, 0xe6b1bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6b1c  pop ebx
    X86_AT(c, 0xe6b1cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e6b1d  leave 
    X86_AT(c, 0xe6b1du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6b1e  ret 0xc
    X86_AT(c, 0xe6b1eu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xe69b6u, "ran off the end of a function");
}
void f_000e6b28(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0e6b28  enter 4, 0
    X86_AT(c, 0xe6b28u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0e6b2c  push ebx
    X86_AT(c, 0xe6b2cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e6b2d  push esi
    X86_AT(c, 0xe6b2du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6b2e  push edi
    X86_AT(c, 0xe6b2eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6b2f  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe6b2fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e6b32  mov ebx, edi
    X86_AT(c, 0xe6b32u);
    c.r[3] = c.r[7];
    // 0e6b34  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0xe6b34u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 0e6b38  jne 0xe6b4a
    X86_AT(c, 0xe6b38u);
    if (x86_cc(c, 5)) { goto L_e6b4a; }
    X86_TICK(c, 18);
    // 0e6b3a  mov ax, 5
    X86_AT(c, 0xe6b3au);
    s16(c, 0, 0x5u);
    // 0e6b3e  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe6b3eu);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
    // 0e6b44  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0xe6b44u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0e6b48  jmp 0xe6b8a
    X86_AT(c, 0xe6b48u);
    goto L_e6b8a;
L_e6b4a:
    X86_TICK(c, 12);
    // 0e6b4a  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0xe6b4au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 0e6b4e  je 0xe6b56
    X86_AT(c, 0xe6b4eu);
    if (x86_cc(c, 4)) { goto L_e6b56; }
    X86_TICK(c, 9);
    // 0e6b50  push edi
    X86_AT(c, 0xe6b50u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6b51  call 0xe85ac
    X86_AT(c, 0xe6b51u);
    push32(c, 0xe6b56u); x86_call_known(c, 0xe85acu, f_000e85ac); X86_RET(c, 0xe6b56u);
L_e6b56:
    X86_TICK(c, 19);
    // 0e6b56  and byte ptr [ebx + 0xd], 0xf7
    X86_AT(c, 0xe6b56u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xF7u, 1)); }
    // 0e6b5a  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0xe6b5au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 0e6b5e  jne 0xe6b67
    X86_AT(c, 0xe6b5eu);
    if (x86_cc(c, 5)) { goto L_e6b67; }
    X86_TICK(c, 2);
    // 0e6b60  mov dword ptr [ebx + 4], 0
    X86_AT(c, 0xe6b60u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x0u);
L_e6b67:
    X86_TICK(c, 36);
    // 0e6b67  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6b67u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e6b6a  imul eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe6b6au);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 0e6b6e  xchg esi, eax
    X86_AT(c, 0xe6b6eu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e6b6f  and esi, esi
    X86_AT(c, 0xe6b6fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e6b71  jl 0xe6b7b
    X86_AT(c, 0xe6b71u);
    if (x86_cc(c, 12)) { goto L_e6b7b; }
    X86_TICK(c, 7);
    // 0e6b73  cmp esi, 0x7fffffff
    X86_AT(c, 0xe6b73u);
    (void)x86_sub(c, c.r[6], 0x7FFFFFFFu, 0, 4);
    // 0e6b79  jle 0xe6b86
    X86_AT(c, 0xe6b79u);
    if (x86_cc(c, 14)) { goto L_e6b86; }
L_e6b7b:
    X86_TICK(c, 9);
    // 0e6b7b  mov word ptr [0xc453a], 1
    X86_AT(c, 0xe6b7bu);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), 0x1u);
    // 0e6b84  jmp 0xe6b8a
    X86_AT(c, 0xe6b84u);
    goto L_e6b8a;
L_e6b86:
    X86_TICK(c, 7);
    // 0e6b86  and esi, esi
    X86_AT(c, 0xe6b86u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e6b88  jne 0xe6b8e
    X86_AT(c, 0xe6b88u);
    if (x86_cc(c, 5)) { goto L_e6b8e; }
L_e6b8a:
    X86_TICK(c, 9);
    // 0e6b8a  sub eax, eax
    X86_AT(c, 0xe6b8au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e6b8c  jmp 0xe6ba4
    X86_AT(c, 0xe6b8cu);
    goto L_e6ba4;
L_e6b8e:
    X86_TICK(c, 16);
    // 0e6b8e  push esi
    X86_AT(c, 0xe6b8eu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6b8f  push dword ptr [ebp + 8]
    X86_AT(c, 0xe6b8fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e6b92  push edi
    X86_AT(c, 0xe6b92u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6b93  call 0xe66c0
    X86_AT(c, 0xe6b93u);
    push32(c, 0xe6b98u); x86_call_known(c, 0xe66c0u, f_000e66c0); X86_RET(c, 0xe6b98u);
    X86_TICK(c, 48);
    // 0e6b98  mov eax, dword ptr [0xc40c0]
    X86_AT(c, 0xe6b98u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0xC40C0u)));
    // 0e6b9d  cdq 
    X86_AT(c, 0xe6b9du);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e6b9e  idiv dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6b9eu);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 4, 0xe6b9eu);
    // 0e6ba1  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe6ba1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_e6ba4:
    X86_TICK(c, 28);
    // 0e6ba4  pop edi
    X86_AT(c, 0xe6ba4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6ba5  pop esi
    X86_AT(c, 0xe6ba5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6ba6  pop ebx
    X86_AT(c, 0xe6ba6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e6ba7  leave 
    X86_AT(c, 0xe6ba7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6ba8  ret 
    X86_AT(c, 0xe6ba8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6b28u, "ran off the end of a function");
}
void f_000e6bd0(X86Cpu& c) {
    X86_TICK(c, 67);
    // 0e6bd0  enter 0xc, 0
    X86_AT(c, 0xe6bd0u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 0e6bd4  push ebx
    X86_AT(c, 0xe6bd4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e6bd5  push esi
    X86_AT(c, 0xe6bd5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6bd6  push edi
    X86_AT(c, 0xe6bd6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6bd7  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe6bd7u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e6bda  mov esi, dword ptr [ebp + 0x20]
    X86_AT(c, 0xe6bdau);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 0e6bdd  mov ax, word ptr [0xc453a]
    X86_AT(c, 0xe6bddu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC453Au))));
    // 0e6be3  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0xe6be3u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 0e6be7  sub eax, eax
    X86_AT(c, 0xe6be7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e6be9  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe6be9u);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
    // 0e6bef  mov ebx, eax
    X86_AT(c, 0xe6befu);
    c.r[3] = c.r[0];
    // 0e6bf1  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe6bf1u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e6bf4  mov byte ptr [edx], 1
    X86_AT(c, 0xe6bf4u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), 0x1u);
    // 0e6bf7  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xe6bf7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0e6bfa  mov byte ptr [edx], al
    X86_AT(c, 0xe6bfau);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0e6bfc  mov byte ptr [ebp - 2], al
    X86_AT(c, 0xe6bfcu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0e6bff  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6bffu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e6c02  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xe6c02u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0e6c05  mov dl, byte ptr [edx]
    X86_AT(c, 0xe6c05u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 0e6c07  mov byte ptr [ebp - 9], dl
    X86_AT(c, 0xe6c07u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 2));
    // 0e6c0a  mov byte ptr [esi], al
    X86_AT(c, 0xe6c0au);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
    // 0e6c0c  jmp 0xe6c85
    X86_AT(c, 0xe6c0cu);
    goto L_e6c85;
L_e6c11:
    X86_TICK(c, 13);
    // 0e6c11  movzx edx, byte ptr [ebp - 9]
    X86_AT(c, 0xe6c11u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)));
    // 0e6c15  cmp edx, 0x2b
    X86_AT(c, 0xe6c15u);
    (void)x86_sub(c, c.r[2], 0x2Bu, 0, 4);
    // 0e6c18  je 0xe6c5e
    X86_AT(c, 0xe6c18u);
    if (x86_cc(c, 4)) { goto L_e6c5e; }
    X86_TICK(c, 7);
    // 0e6c1a  cmp edx, 0x61
    X86_AT(c, 0xe6c1au);
    (void)x86_sub(c, c.r[2], 0x61u, 0, 4);
    // 0e6c1d  je 0xe6c38
    X86_AT(c, 0xe6c1du);
    if (x86_cc(c, 4)) { goto L_e6c38; }
    X86_TICK(c, 7);
    // 0e6c1f  cmp edx, 0x62
    X86_AT(c, 0xe6c1fu);
    (void)x86_sub(c, c.r[2], 0x62u, 0, 4);
    // 0e6c22  je 0xe6c6c
    X86_AT(c, 0xe6c22u);
    if (x86_cc(c, 4)) { goto L_e6c6c; }
    X86_TICK(c, 7);
    // 0e6c24  cmp edx, 0x72
    X86_AT(c, 0xe6c24u);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0e6c27  je 0xe6c53
    X86_AT(c, 0xe6c27u);
    if (x86_cc(c, 4)) { goto L_e6c53; }
    X86_TICK(c, 7);
    // 0e6c29  cmp edx, 0x74
    X86_AT(c, 0xe6c29u);
    (void)x86_sub(c, c.r[2], 0x74u, 0, 4);
    // 0e6c2c  je 0xe6c74
    X86_AT(c, 0xe6c2cu);
    if (x86_cc(c, 4)) { goto L_e6c74; }
    X86_TICK(c, 7);
    // 0e6c2e  cmp edx, 0x75
    X86_AT(c, 0xe6c2eu);
    (void)x86_sub(c, c.r[2], 0x75u, 0, 4);
    // 0e6c31  je 0xe6c67
    X86_AT(c, 0xe6c31u);
    if (x86_cc(c, 4)) { goto L_e6c67; }
    X86_TICK(c, 7);
    // 0e6c33  cmp edx, 0x77
    X86_AT(c, 0xe6c33u);
    (void)x86_sub(c, c.r[2], 0x77u, 0, 4);
    // 0e6c36  jne 0xe6c8f
    X86_AT(c, 0xe6c36u);
    if (x86_cc(c, 5)) { goto L_e6c8f; }
L_e6c38:
    X86_TICK(c, 7);
    // 0e6c38  and bl, bl
    X86_AT(c, 0xe6c38u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e6c3a  jne 0xe6c8f
    X86_AT(c, 0xe6c3au);
    if (x86_cc(c, 5)) { goto L_e6c8f; }
    X86_TICK(c, 33);
    // 0e6c3c  mov bl, 1
    X86_AT(c, 0xe6c3cu);
    s8(c, 3, 0x1u);
    // 0e6c3e  mov byte ptr [edi], bl
    X86_AT(c, 0xe6c3eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 3));
    // 0e6c40  mov al, byte ptr [ebp - 9]
    X86_AT(c, 0xe6c40u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))));
    // 0e6c43  cmp al, 0x61
    X86_AT(c, 0xe6c43u);
    (void)x86_sub(c, g8(c, 0), 0x61u, 0, 1);
    // 0e6c45  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0xe6c45u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0e6c48  sete byte ptr [edx]
    X86_AT(c, 0xe6c48u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), x86_cc(c, 4) ? 1u : 0u);
    // 0e6c4b  cmp al, 0x77
    X86_AT(c, 0xe6c4bu);
    (void)x86_sub(c, g8(c, 0), 0x77u, 0, 1);
    // 0e6c4d  sete byte ptr [ebp - 2]
    X86_AT(c, 0xe6c4du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), x86_cc(c, 4) ? 1u : 0u);
    // 0e6c51  jmp 0xe6c7a
    X86_AT(c, 0xe6c51u);
    goto L_e6c7a;
L_e6c53:
    X86_TICK(c, 7);
    // 0e6c53  and bl, bl
    X86_AT(c, 0xe6c53u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e6c55  jne 0xe6c8f
    X86_AT(c, 0xe6c55u);
    if (x86_cc(c, 5)) { goto L_e6c8f; }
    X86_TICK(c, 11);
    // 0e6c57  mov bl, 1
    X86_AT(c, 0xe6c57u);
    s8(c, 3, 0x1u);
    // 0e6c59  mov byte ptr [edi], 0
    X86_AT(c, 0xe6c59u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0e6c5c  jmp 0xe6c7a
    X86_AT(c, 0xe6c5cu);
    goto L_e6c7a;
L_e6c5e:
    X86_TICK(c, 7);
    // 0e6c5e  and bl, bl
    X86_AT(c, 0xe6c5eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e6c60  je 0xe6c8f
    X86_AT(c, 0xe6c60u);
    if (x86_cc(c, 4)) { goto L_e6c8f; }
    X86_TICK(c, 9);
    // 0e6c62  mov byte ptr [edi], 2
    X86_AT(c, 0xe6c62u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x2u);
    // 0e6c65  jmp 0xe6c7a
    X86_AT(c, 0xe6c65u);
    goto L_e6c7a;
L_e6c67:
    X86_TICK(c, 11);
    // 0e6c67  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe6c67u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e6c6a  jmp 0xe6c6f
    X86_AT(c, 0xe6c6au);
    goto L_e6c6f;
L_e6c6c:
    X86_TICK(c, 4);
    // 0e6c6c  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xe6c6cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
L_e6c6f:
    X86_TICK(c, 9);
    // 0e6c6f  mov byte ptr [eax], 0
    X86_AT(c, 0xe6c6fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 0e6c72  jmp 0xe6c7a
    X86_AT(c, 0xe6c72u);
    goto L_e6c7a;
L_e6c74:
    X86_TICK(c, 6);
    // 0e6c74  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xe6c74u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0e6c77  mov byte ptr [eax], 1
    X86_AT(c, 0xe6c77u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x1u);
L_e6c7a:
    X86_TICK(c, 16);
    // 0e6c7a  inc dword ptr [ebp - 8]
    X86_AT(c, 0xe6c7au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e6c7d  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe6c7du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e6c80  mov al, byte ptr [eax]
    X86_AT(c, 0xe6c80u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0e6c82  mov byte ptr [ebp - 9], al
    X86_AT(c, 0xe6c82u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
L_e6c85:
    X86_TICK(c, 12);
    // 0e6c85  cmp byte ptr [ebp - 9], 0
    X86_AT(c, 0xe6c85u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0e6c89  jne 0xe6c11
    X86_AT(c, 0xe6c89u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xe6c11u); goto L_e6c11; }
    X86_TICK(c, 7);
    // 0e6c8b  and bl, bl
    X86_AT(c, 0xe6c8bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0e6c8d  jne 0xe6c9a
    X86_AT(c, 0xe6c8du);
    if (x86_cc(c, 5)) { goto L_e6c9a; }
L_e6c8f:
    X86_TICK(c, 9);
    // 0e6c8f  mov word ptr [0xc453a], 1
    X86_AT(c, 0xe6c8fu);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), 0x1u);
    // 0e6c98  jmp 0xe6cf6
    X86_AT(c, 0xe6c98u);
    goto L_e6cf6;
L_e6c9a:
    X86_TICK(c, 12);
    // 0e6c9a  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xe6c9au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0e6c9e  jne 0xe6cb4
    X86_AT(c, 0xe6c9eu);
    if (x86_cc(c, 5)) { goto L_e6cb4; }
    X86_TICK(c, 29);
    // 0e6ca0  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xe6ca0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0e6ca3  cmp byte ptr [eax], 0
    X86_AT(c, 0xe6ca3u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0e6ca6  mov al, byte ptr [edi]
    X86_AT(c, 0xe6ca6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0e6ca8  push eax
    X86_AT(c, 0xe6ca8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6ca9  push dword ptr [ebp + 8]
    X86_AT(c, 0xe6ca9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e6cac  call 0xe941c
    X86_AT(c, 0xe6cacu);
    push32(c, 0xe6cb1u); x86_call_known(c, 0xe941cu, f_000e941c); X86_RET(c, 0xe6cb1u);
    X86_TICK(c, 2);
    // 0e6cb1  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xe6cb1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
L_e6cb4:
    X86_TICK(c, 16);
    // 0e6cb4  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0xe6cb4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0e6cb7  cmp byte ptr [eax], 0
    X86_AT(c, 0xe6cb7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0e6cba  je 0xe6cc6
    X86_AT(c, 0xe6cbau);
    if (x86_cc(c, 4)) { goto L_e6cc6; }
    X86_TICK(c, 12);
    // 0e6cbc  cmp word ptr [0xc453a], 2
    X86_AT(c, 0xe6cbcu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC453Au))), 0x2u, 0, 2);
    // 0e6cc4  je 0xe6ccc
    X86_AT(c, 0xe6cc4u);
    if (x86_cc(c, 4)) { goto L_e6ccc; }
L_e6cc6:
    X86_TICK(c, 12);
    // 0e6cc6  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0xe6cc6u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0e6cca  je 0xe6cec
    X86_AT(c, 0xe6ccau);
    if (x86_cc(c, 4)) { goto L_e6cec; }
L_e6ccc:
    X86_TICK(c, 20);
    // 0e6ccc  sub eax, eax
    X86_AT(c, 0xe6cccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e6cce  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe6cceu);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
    // 0e6cd4  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0xe6cd4u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0e6cd7  cmp byte ptr [edx], 0
    X86_AT(c, 0xe6cd7u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0x0u, 0, 1);
    // 0e6cda  je 0xe6cdf
    X86_AT(c, 0xe6cdau);
    if (x86_cc(c, 4)) { goto L_e6cdf; }
    X86_TICK(c, 9);
    // 0e6cdc  push eax
    X86_AT(c, 0xe6cdcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6cdd  jmp 0xe6ce1
    X86_AT(c, 0xe6cddu);
    goto L_e6ce1;
L_e6cdf:
    X86_TICK(c, 2);
    // 0e6cdf  push 0
    X86_AT(c, 0xe6cdfu);
    { uint32_t v = 0x0u; push32(c, v); }
L_e6ce1:
    X86_TICK(c, 12);
    // 0e6ce1  push dword ptr [ebp + 8]
    X86_AT(c, 0xe6ce1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e6ce4  call 0xe93f4
    X86_AT(c, 0xe6ce4u);
    push32(c, 0xe6ce9u); x86_call_known(c, 0xe93f4u, f_000e93f4); X86_RET(c, 0xe6ce9u);
    X86_TICK(c, 2);
    // 0e6ce9  mov byte ptr [ebp - 1], al
    X86_AT(c, 0xe6ce9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
L_e6cec:
    X86_TICK(c, 12);
    // 0e6cec  cmp word ptr [0xc453a], 0
    X86_AT(c, 0xe6cecu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC453Au))), 0x0u, 0, 2);
    // 0e6cf4  je 0xe6cfb
    X86_AT(c, 0xe6cf4u);
    if (x86_cc(c, 4)) { goto L_e6cfb; }
L_e6cf6:
    X86_TICK(c, 9);
    // 0e6cf6  mov byte ptr [esi], 1
    X86_AT(c, 0xe6cf6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), 0x1u);
    // 0e6cf9  jmp 0xe6d05
    X86_AT(c, 0xe6cf9u);
    goto L_e6d05;
L_e6cfb:
    X86_TICK(c, 6);
    // 0e6cfb  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0xe6cfbu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 0e6cff  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe6cffu);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
L_e6d05:
    X86_TICK(c, 32);
    // 0e6d05  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0xe6d05u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0e6d08  pop edi
    X86_AT(c, 0xe6d08u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6d09  pop esi
    X86_AT(c, 0xe6d09u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6d0a  pop ebx
    X86_AT(c, 0xe6d0au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e6d0b  leave 
    X86_AT(c, 0xe6d0bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6d0c  ret 0x1c
    X86_AT(c, 0xe6d0cu);
    c.eip = pop32(c); c.r[4] += 0x1Cu; return;
    x86_fault(c, 0xe6bd0u, "ran off the end of a function");
}
void f_000e6d20(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0e6d20  enter 4, 0
    X86_AT(c, 0xe6d20u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0e6d24  sub ecx, ecx
    X86_AT(c, 0xe6d24u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0e6d26  jmp 0xe6d3d
    X86_AT(c, 0xe6d26u);
    goto L_e6d3d;
L_e6d28:
    X86_TICK(c, 16);
    // 0e6d28  lea eax, [ecx + ecx*4]
    X86_AT(c, 0xe6d28u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0e6d2b  lea eax, [eax*4]
    X86_AT(c, 0xe6d2bu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0e6d32  cmp word ptr [eax + 0xc42e8], 0
    X86_AT(c, 0xe6d32u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0xC42E8u))), 0x0u, 0, 2);
    // 0e6d3a  je 0xe6d42
    X86_AT(c, 0xe6d3au);
    if (x86_cc(c, 4)) { goto L_e6d42; }
    X86_TICK(c, 2);
    // 0e6d3c  inc ecx
    X86_AT(c, 0xe6d3cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_e6d3d:
    X86_TICK(c, 7);
    // 0e6d3d  cmp ecx, 0x19
    X86_AT(c, 0xe6d3du);
    (void)x86_sub(c, c.r[1], 0x19u, 0, 4);
    // 0e6d40  jbe 0xe6d28
    X86_AT(c, 0xe6d40u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0xe6d28u); goto L_e6d28; }
L_e6d42:
    X86_TICK(c, 7);
    // 0e6d42  cmp ecx, 0x19
    X86_AT(c, 0xe6d42u);
    (void)x86_sub(c, c.r[1], 0x19u, 0, 4);
    // 0e6d45  jbe 0xe6d59
    X86_AT(c, 0xe6d45u);
    if (x86_cc(c, 6)) { goto L_e6d59; }
    X86_TICK(c, 11);
    // 0e6d47  mov word ptr [0xc453a], 4
    X86_AT(c, 0xe6d47u);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), 0x4u);
    // 0e6d50  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe6d50u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0e6d57  jmp 0xe6d6b
    X86_AT(c, 0xe6d57u);
    goto L_e6d6b;
L_e6d59:
    X86_TICK(c, 8);
    // 0e6d59  lea eax, [ecx + ecx*4]
    X86_AT(c, 0xe6d59u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0e6d5c  lea eax, [eax*4]
    X86_AT(c, 0xe6d5cu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0e6d63  add eax, 0xc42dc
    X86_AT(c, 0xe6d63u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xC42DCu, 0, 4); }
    // 0e6d68  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe6d68u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_e6d6b:
    X86_TICK(c, 20);
    // 0e6d6b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe6d6bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e6d6e  leave 
    X86_AT(c, 0xe6d6eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6d6f  ret 
    X86_AT(c, 0xe6d6fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6d20u, "ran off the end of a function");
}
void f_000e6d80(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0e6d80  push ebp
    X86_AT(c, 0xe6d80u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0e6d81  mov ebp, esp
    X86_AT(c, 0xe6d81u);
    c.r[5] = c.r[4];
    // 0e6d83  push ebx
    X86_AT(c, 0xe6d83u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e6d84  push edi
    X86_AT(c, 0xe6d84u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6d85  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe6d85u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e6d88  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0xe6d88u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0e6d8b  mov byte ptr [edi + 0xe], al
    X86_AT(c, 0xe6d8bu);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu)), g8(c, 0));
    // 0e6d8e  cmp byte ptr [ebp + 0x10], 0
    X86_AT(c, 0xe6d8eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 0e6d92  jne 0xe6d9c
    X86_AT(c, 0xe6d92u);
    if (x86_cc(c, 5)) { goto L_e6d9c; }
    X86_TICK(c, 9);
    // 0e6d94  mov word ptr [edi + 0xc], 2
    X86_AT(c, 0xe6d94u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x2u);
    // 0e6d9a  jmp 0xe6db0
    X86_AT(c, 0xe6d9au);
    goto L_e6db0;
L_e6d9c:
    X86_TICK(c, 12);
    // 0e6d9c  cmp byte ptr [ebp + 0x10], 1
    X86_AT(c, 0xe6d9cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0e6da0  jne 0xe6daa
    X86_AT(c, 0xe6da0u);
    if (x86_cc(c, 5)) { goto L_e6daa; }
    X86_TICK(c, 9);
    // 0e6da2  mov word ptr [edi + 0xc], 4
    X86_AT(c, 0xe6da2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x4u);
    // 0e6da8  jmp 0xe6db0
    X86_AT(c, 0xe6da8u);
    goto L_e6db0;
L_e6daa:
    X86_TICK(c, 2);
    // 0e6daa  mov word ptr [edi + 0xc], 6
    X86_AT(c, 0xe6daau);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x6u);
L_e6db0:
    X86_TICK(c, 12);
    // 0e6db0  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0xe6db0u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0e6db4  je 0xe6dba
    X86_AT(c, 0xe6db4u);
    if (x86_cc(c, 4)) { goto L_e6dba; }
    X86_TICK(c, 7);
    // 0e6db6  or byte ptr [edi + 0xc], 8
    X86_AT(c, 0xe6db6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
L_e6dba:
    X86_TICK(c, 12);
    // 0e6dba  cmp byte ptr [ebp + 0x18], 0
    X86_AT(c, 0xe6dbau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 1);
    // 0e6dbe  je 0xe6dc4
    X86_AT(c, 0xe6dbeu);
    if (x86_cc(c, 4)) { goto L_e6dc4; }
    X86_TICK(c, 7);
    // 0e6dc0  or byte ptr [edi + 0xc], 0x40
    X86_AT(c, 0xe6dc0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_e6dc4:
    X86_TICK(c, 12);
    // 0e6dc4  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6dc4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e6dc7  call 0xe9b3c
    X86_AT(c, 0xe6dc7u);
    push32(c, 0xe6dccu); x86_call_known(c, 0xe9b3cu, f_000e9b3c); X86_RET(c, 0xe6dccu);
    X86_TICK(c, 10);
    // 0e6dcc  xchg ebx, eax
    X86_AT(c, 0xe6dccu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e6dcd  cmp bl, 1
    X86_AT(c, 0xe6dcdu);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0e6dd0  je 0xe6dd7
    X86_AT(c, 0xe6dd0u);
    if (x86_cc(c, 4)) { goto L_e6dd7; }
    X86_TICK(c, 7);
    // 0e6dd2  cmp bl, 2
    X86_AT(c, 0xe6dd2u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0e6dd5  jne 0xe6ddb
    X86_AT(c, 0xe6dd5u);
    if (x86_cc(c, 5)) { goto L_e6ddb; }
L_e6dd7:
    X86_TICK(c, 2);
    // 0e6dd7  mov byte ptr [ebp + 0x1c], 0
    X86_AT(c, 0xe6dd7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), 0x0u);
L_e6ddb:
    X86_TICK(c, 12);
    // 0e6ddb  cmp byte ptr [ebp + 0x1c], 0
    X86_AT(c, 0xe6ddbu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))), 0x0u, 0, 1);
    // 0e6ddf  je 0xe6de5
    X86_AT(c, 0xe6ddfu);
    if (x86_cc(c, 4)) { goto L_e6de5; }
    X86_TICK(c, 7);
    // 0e6de1  or byte ptr [edi + 0xc], 1
    X86_AT(c, 0xe6de1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_e6de5:
    X86_TICK(c, 12);
    // 0e6de5  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0xe6de5u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0e6de9  je 0xe6df7
    X86_AT(c, 0xe6de9u);
    if (x86_cc(c, 4)) { goto L_e6df7; }
    X86_TICK(c, 16);
    // 0e6deb  push 2
    X86_AT(c, 0xe6debu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e6ded  push 0
    X86_AT(c, 0xe6dedu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e6def  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6defu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e6df2  call 0xe9b84
    X86_AT(c, 0xe6df2u);
    push32(c, 0xe6df7u); x86_call_known(c, 0xe9b84u, f_000e9b84); X86_RET(c, 0xe6df7u);
L_e6df7:
    X86_TICK(c, 24);
    // 0e6df7  pop edi
    X86_AT(c, 0xe6df7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6df8  pop ebx
    X86_AT(c, 0xe6df8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e6df9  leave 
    X86_AT(c, 0xe6df9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6dfa  ret 0x18
    X86_AT(c, 0xe6dfau);
    c.eip = pop32(c); c.r[4] += 0x18u; return;
    x86_fault(c, 0xe6d80u, "ran off the end of a function");
}
void f_000e6e04(X86Cpu& c) {
    X86_TICK(c, 63);
    // 0e6e04  enter 0xc, 0
    X86_AT(c, 0xe6e04u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 0e6e08  push ebx
    X86_AT(c, 0xe6e08u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e6e09  test byte ptr [0xc4568], 1
    X86_AT(c, 0xe6e09u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0xC4568u))) & 0x1u, 1);
    // 0e6e10  setne al
    X86_AT(c, 0xe6e10u);
    s8(c, 0, x86_cc(c, 5) ? 1u : 0u);
    // 0e6e13  xchg ebx, eax
    X86_AT(c, 0xe6e13u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0e6e14  xor bl, 1
    X86_AT(c, 0xe6e14u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ 0x1u, 1)); }
    // 0e6e17  mov byte ptr [ebp - 8], bl
    X86_AT(c, 0xe6e17u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), g8(c, 3));
    // 0e6e1a  lea ebx, [ebp - 0xa]
    X86_AT(c, 0xe6e1au);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF6u);
    // 0e6e1d  push ebx
    X86_AT(c, 0xe6e1du);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e6e1e  lea eax, [ebp - 8]
    X86_AT(c, 0xe6e1eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0e6e21  push eax
    X86_AT(c, 0xe6e21u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6e22  lea eax, [ebp - 7]
    X86_AT(c, 0xe6e22u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF9u);
    // 0e6e25  push eax
    X86_AT(c, 0xe6e25u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6e26  lea eax, [ebp - 6]
    X86_AT(c, 0xe6e26u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFAu);
    // 0e6e29  push eax
    X86_AT(c, 0xe6e29u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6e2a  lea eax, [ebp - 5]
    X86_AT(c, 0xe6e2au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0e6e2d  push eax
    X86_AT(c, 0xe6e2du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6e2e  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6e2eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e6e31  push dword ptr [ebp + 8]
    X86_AT(c, 0xe6e31u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e6e34  call 0xe6bd0
    X86_AT(c, 0xe6e34u);
    push32(c, 0xe6e39u); x86_call_known(c, 0xe6bd0u, f_000e6bd0); X86_RET(c, 0xe6e39u);
    X86_TICK(c, 14);
    // 0e6e39  mov byte ptr [ebp - 9], al
    X86_AT(c, 0xe6e39u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 0e6e3c  cmp byte ptr [ebx], 0
    X86_AT(c, 0xe6e3cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0x0u, 0, 1);
    // 0e6e3f  je 0xe6e4a
    X86_AT(c, 0xe6e3fu);
    if (x86_cc(c, 4)) { goto L_e6e4a; }
    X86_TICK(c, 9);
    // 0e6e41  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe6e41u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0e6e48  jmp 0xe6e52
    X86_AT(c, 0xe6e48u);
    goto L_e6e52;
L_e6e4a:
    X86_TICK(c, 7);
    // 0e6e4a  call 0xe6d20
    X86_AT(c, 0xe6e4au);
    push32(c, 0xe6e4fu); x86_call_known(c, 0xe6d20u, f_000e6d20); X86_RET(c, 0xe6e4fu);
    X86_TICK(c, 2);
    // 0e6e4f  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe6e4fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_e6e52:
    X86_TICK(c, 12);
    // 0e6e52  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0xe6e52u);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0e6e56  je 0xe6e7d
    X86_AT(c, 0xe6e56u);
    if (x86_cc(c, 4)) { goto L_e6e7d; }
    X86_TICK(c, 37);
    // 0e6e58  push dword ptr [ebp - 5]
    X86_AT(c, 0xe6e58u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))); push32(c, v); }
    // 0e6e5b  push dword ptr [ebp - 8]
    X86_AT(c, 0xe6e5bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0e6e5e  push dword ptr [ebp - 7]
    X86_AT(c, 0xe6e5eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u))); push32(c, v); }
    // 0e6e61  push dword ptr [ebp - 6]
    X86_AT(c, 0xe6e61u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))); push32(c, v); }
    // 0e6e64  push dword ptr [ebp - 9]
    X86_AT(c, 0xe6e64u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))); push32(c, v); }
    // 0e6e67  push dword ptr [ebp - 4]
    X86_AT(c, 0xe6e67u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0e6e6a  call 0xe6d80
    X86_AT(c, 0xe6e6au);
    push32(c, 0xe6e6fu); x86_call_known(c, 0xe6d80u, f_000e6d80); X86_RET(c, 0xe6e6fu);
    X86_TICK(c, 13);
    // 0e6e6f  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0xe6e6fu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e6e72  or byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0xe6e72u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 0e6e76  mov dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0xe6e76u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0xFFFFFFFFu);
L_e6e7d:
    X86_TICK(c, 24);
    // 0e6e7d  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe6e7du);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e6e80  pop ebx
    X86_AT(c, 0xe6e80u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e6e81  leave 
    X86_AT(c, 0xe6e81u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e6e82  ret 
    X86_AT(c, 0xe6e82u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe6e04u, "ran off the end of a function");
}
void f_000e6e98(X86Cpu& c) {
    X86_TICK(c, 44);
    // 0e6e98  enter 0x14, 0
    X86_AT(c, 0xe6e98u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 0e6e9c  push ebx
    X86_AT(c, 0xe6e9cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e6e9d  push esi
    X86_AT(c, 0xe6e9du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6e9e  push edi
    X86_AT(c, 0xe6e9eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6e9f  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe6e9fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e6ea2  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe6ea2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0e6ea9  mov ax, word ptr [0xc453a]
    X86_AT(c, 0xe6ea9u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC453Au))));
    // 0e6eaf  mov word ptr [ebp - 0xa], ax
    X86_AT(c, 0xe6eafu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), (c.r[0] & 0xFFFFu));
    // 0e6eb3  mov word ptr [0xc453a], 0
    X86_AT(c, 0xe6eb3u);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), 0x0u);
    // 0e6ebc  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0xe6ebcu);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e6ebf  sub esi, esi
    X86_AT(c, 0xe6ebfu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e6ec1  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0xe6ec1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 0e6ec5  jne 0xe6f6f
    X86_AT(c, 0xe6ec5u);
    if (x86_cc(c, 5)) { goto L_e6f6f; }
    X86_TICK(c, 12);
    // 0e6ecb  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xe6ecbu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0e6ecf  jne 0xe6f62
    X86_AT(c, 0xe6ecfu);
    if (x86_cc(c, 5)) { goto L_e6f62; }
    X86_TICK(c, 20);
    // 0e6ed5  push edi
    X86_AT(c, 0xe6ed5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6ed6  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6ed6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e6ed9  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6ed9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6edc  push eax
    X86_AT(c, 0xe6edcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6edd  call 0xe9ad8
    X86_AT(c, 0xe6eddu);
    push32(c, 0xe6ee2u); x86_call_known(c, 0xe9ad8u, f_000e9ad8); X86_RET(c, 0xe6ee2u);
    X86_TICK(c, 9);
    // 0e6ee2  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe6ee2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e6ee5  jmp 0xe7154
    X86_AT(c, 0xe6ee5u);
    goto L_e7154;
L_e6eea:
    X86_TICK(c, 32);
    // 0e6eea  mov edx, edi
    X86_AT(c, 0xe6eeau);
    c.r[2] = c.r[7];
    // 0e6eec  mov al, 0xa
    X86_AT(c, 0xe6eecu);
    s8(c, 0, 0xAu);
    // 0e6eee  mov ecx, esi
    X86_AT(c, 0xe6eeeu);
    c.r[1] = c.r[6];
    // 0e6ef0  add ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6ef0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0e6ef3  push edi
    X86_AT(c, 0xe6ef3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6ef4  mov edi, ecx
    X86_AT(c, 0xe6ef4u);
    c.r[7] = c.r[1];
    // 0e6ef6  mov dword ptr [ebp - 0x14], ecx
    X86_AT(c, 0xe6ef6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[1]);
    // 0e6ef9  mov ecx, edx
    X86_AT(c, 0xe6ef9u);
    c.r[1] = c.r[2];
    // 0e6efb  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe6efbu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e6efd  jne 0xe6f02
    X86_AT(c, 0xe6efdu);
    if (x86_cc(c, 5)) { goto L_e6f02; }
    X86_TICK(c, 4);
    // 0e6eff  inc ecx
    X86_AT(c, 0xe6effu);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e6f00  sub edx, ecx
    X86_AT(c, 0xe6f00u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e6f02:
    X86_TICK(c, 13);
    // 0e6f02  pop edi
    X86_AT(c, 0xe6f02u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6f03  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0xe6f03u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 0e6f07  and dx, dx
    X86_AT(c, 0xe6f07u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & (c.r[2] & 0xFFFFu), 2)); }
    // 0e6f0a  je 0xe6f34
    X86_AT(c, 0xe6f0au);
    if (x86_cc(c, 4)) { goto L_e6f34; }
    X86_TICK(c, 23);
    // 0e6f0c  movsx edx, dx
    X86_AT(c, 0xe6f0cu);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 0e6f0f  push edx
    X86_AT(c, 0xe6f0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e6f10  push dword ptr [ebp - 0x14]
    X86_AT(c, 0xe6f10u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0e6f13  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6f13u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6f16  push eax
    X86_AT(c, 0xe6f16u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6f17  call 0xe9ad8
    X86_AT(c, 0xe6f17u);
    push32(c, 0xe6f1cu); x86_call_known(c, 0xe9ad8u, f_000e9ad8); X86_RET(c, 0xe6f1cu);
    X86_TICK(c, 22);
    // 0e6f1c  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0xe6f1cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0e6f1f  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xe6f1fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e6f22  movsx edx, word ptr [ebx + 0x10]
    X86_AT(c, 0xe6f22u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e6f26  cmp edx, eax
    X86_AT(c, 0xe6f26u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0e6f28  jne 0xe7154
    X86_AT(c, 0xe6f28u);
    if (x86_cc(c, 5)) { goto L_e7154; }
    X86_TICK(c, 12);
    // 0e6f2e  add esi, dword ptr [ebp - 0x10]
    X86_AT(c, 0xe6f2eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 0e6f31  sub edi, dword ptr [ebp - 0x10]
    X86_AT(c, 0xe6f31u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
L_e6f34:
    X86_TICK(c, 7);
    // 0e6f34  and edi, edi
    X86_AT(c, 0xe6f34u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e6f36  jbe 0xe6f62
    X86_AT(c, 0xe6f36u);
    if (x86_cc(c, 6)) { goto L_e6f62; }
    X86_TICK(c, 23);
    // 0e6f38  movzx eax, word ptr [0xc40ac]
    X86_AT(c, 0xe6f38u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xC40ACu)));
    // 0e6f3f  push eax
    X86_AT(c, 0xe6f3fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6f40  push 0xc40ae
    X86_AT(c, 0xe6f40u);
    { uint32_t v = 0xC40AEu; push32(c, v); }
    // 0e6f45  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6f45u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6f48  push eax
    X86_AT(c, 0xe6f48u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6f49  call 0xe9ad8
    X86_AT(c, 0xe6f49u);
    push32(c, 0xe6f4eu); x86_call_known(c, 0xe9ad8u, f_000e9ad8); X86_RET(c, 0xe6f4eu);
    X86_TICK(c, 13);
    // 0e6f4e  movzx edx, word ptr [0xc40ac]
    X86_AT(c, 0xe6f4eu);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(0xC40ACu)));
    // 0e6f55  cmp edx, eax
    X86_AT(c, 0xe6f55u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0e6f57  jne 0xe7154
    X86_AT(c, 0xe6f57u);
    if (x86_cc(c, 5)) { goto L_e7154; }
    X86_TICK(c, 10);
    // 0e6f5d  inc dword ptr [ebp - 4]
    X86_AT(c, 0xe6f5du);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e6f60  inc esi
    X86_AT(c, 0xe6f60u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e6f61  dec edi
    X86_AT(c, 0xe6f61u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
L_e6f62:
    X86_TICK(c, 7);
    // 0e6f62  and edi, edi
    X86_AT(c, 0xe6f62u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e6f64  jbe 0xe7154
    X86_AT(c, 0xe6f64u);
    if (x86_cc(c, 6)) { goto L_e7154; }
    X86_TICK(c, 7);
    // 0e6f6a  jmp 0xe6eea
    X86_AT(c, 0xe6f6au);
    X86_POLL(c, 0xe6eeau); goto L_e6eea;
L_e6f6f:
    X86_TICK(c, 12);
    // 0e6f6f  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0xe6f6fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 0e6f73  jne 0xe6f7c
    X86_AT(c, 0xe6f73u);
    if (x86_cc(c, 5)) { goto L_e6f7c; }
    X86_TICK(c, 2);
    // 0e6f75  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0xe6f75u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
L_e6f7c:
    X86_TICK(c, 12);
    // 0e6f7c  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0xe6f7cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0e6f80  jne 0xe714c
    X86_AT(c, 0xe6f80u);
    if (x86_cc(c, 5)) { goto L_e714c; }
    X86_TICK(c, 11);
    // 0e6f86  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe6f86u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e6f89  cmp eax, 0x200
    X86_AT(c, 0xe6f89u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 0e6f8e  jge 0xe6fed
    X86_AT(c, 0xe6f8eu);
    if (x86_cc(c, 13)) { goto L_e6fed; }
    X86_TICK(c, 9);
    // 0e6f90  mov edx, edi
    X86_AT(c, 0xe6f90u);
    c.r[2] = c.r[7];
    // 0e6f92  cmp edx, eax
    X86_AT(c, 0xe6f92u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0e6f94  jl 0xe6f97
    X86_AT(c, 0xe6f94u);
    if (x86_cc(c, 12)) { goto L_e6f97; }
    X86_TICK(c, 3);
    // 0e6f96  xchg edx, eax
    X86_AT(c, 0xe6f96u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_e6f97:
    X86_TICK(c, 50);
    // 0e6f97  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0xe6f97u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0e6f9a  mov ecx, edx
    X86_AT(c, 0xe6f9au);
    c.r[1] = c.r[2];
    // 0e6f9c  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe6f9cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e6f9f  mov edx, dword ptr [ebx]
    X86_AT(c, 0xe6f9fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e6fa1  push esi
    X86_AT(c, 0xe6fa1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e6fa2  push edi
    X86_AT(c, 0xe6fa2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e6fa3  mov esi, eax
    X86_AT(c, 0xe6fa3u);
    c.r[6] = c.r[0];
    // 0e6fa5  mov edi, edx
    X86_AT(c, 0xe6fa5u);
    c.r[7] = c.r[2];
    // 0e6fa7  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe6fa7u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e6fa9  pop edi
    X86_AT(c, 0xe6fa9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e6faa  pop esi
    X86_AT(c, 0xe6faau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e6fab  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe6fabu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e6fae  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe6faeu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0e6fb1  jne 0xe6fdd
    X86_AT(c, 0xe6fb1u);
    if (x86_cc(c, 5)) { goto L_e6fdd; }
    X86_TICK(c, 20);
    // 0e6fb3  push 0x200
    X86_AT(c, 0xe6fb3u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0e6fb8  push dword ptr [ebx + 8]
    X86_AT(c, 0xe6fb8u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0e6fbb  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe6fbbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e6fbe  push eax
    X86_AT(c, 0xe6fbeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e6fbf  call 0xe9ad8
    X86_AT(c, 0xe6fbfu);
    push32(c, 0xe6fc4u); x86_call_known(c, 0xe9ad8u, f_000e9ad8); X86_RET(c, 0xe6fc4u);
    X86_TICK(c, 7);
    // 0e6fc4  cmp eax, 0x200
    X86_AT(c, 0xe6fc4u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 0e6fc9  jne 0xe7154
    X86_AT(c, 0xe6fc9u);
    if (x86_cc(c, 5)) { goto L_e7154; }
    X86_TICK(c, 15);
    // 0e6fcf  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0xe6fcfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
    // 0e6fd6  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe6fd6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e6fd9  mov dword ptr [ebx], eax
    X86_AT(c, 0xe6fd9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0e6fdb  jmp 0xe6fe5
    X86_AT(c, 0xe6fdbu);
    goto L_e6fe5;
L_e6fdd:
    X86_TICK(c, 18);
    // 0e6fdd  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe6fddu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e6fe0  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0xe6fe0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0e6fe3  add dword ptr [ebx], eax
    X86_AT(c, 0xe6fe3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_e6fe5:
    X86_TICK(c, 13);
    // 0e6fe5  mov esi, dword ptr [ebp - 8]
    X86_AT(c, 0xe6fe5u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e6fe8  sub edi, esi
    X86_AT(c, 0xe6fe8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0e6fea  add dword ptr [ebp - 4], esi
    X86_AT(c, 0xe6feau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_e6fed:
    X86_TICK(c, 7);
    // 0e6fed  cmp edi, 0x200
    X86_AT(c, 0xe6fedu);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0e6ff3  jbe 0xe7023
    X86_AT(c, 0xe6ff3u);
    if (x86_cc(c, 6)) { goto L_e7023; }
    X86_TICK(c, 35);
    // 0e6ff5  mov eax, edi
    X86_AT(c, 0xe6ff5u);
    c.r[0] = c.r[7];
    // 0e6ff7  shr eax, 9
    X86_AT(c, 0xe6ff7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e6ffa  shl eax, 9
    X86_AT(c, 0xe6ffau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0e6ffd  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0xe6ffdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0e7000  push eax
    X86_AT(c, 0xe7000u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7001  mov edx, esi
    X86_AT(c, 0xe7001u);
    c.r[2] = c.r[6];
    // 0e7003  add edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe7003u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0e7006  push edx
    X86_AT(c, 0xe7006u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e7007  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe7007u);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e700a  push edx
    X86_AT(c, 0xe700au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0e700b  call 0xe9ad8
    X86_AT(c, 0xe700bu);
    push32(c, 0xe7010u); x86_call_known(c, 0xe9ad8u, f_000e9ad8); X86_RET(c, 0xe7010u);
    X86_TICK(c, 11);
    // 0e7010  cmp eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe7010u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4);
    // 0e7013  jne 0xe7154
    X86_AT(c, 0xe7013u);
    if (x86_cc(c, 5)) { goto L_e7154; }
    X86_TICK(c, 15);
    // 0e7019  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0xe7019u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0e701c  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xe701cu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e701f  add esi, eax
    X86_AT(c, 0xe701fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e7021  sub edi, eax
    X86_AT(c, 0xe7021u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
L_e7023:
    X86_TICK(c, 7);
    // 0e7023  and edi, edi
    X86_AT(c, 0xe7023u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e7025  jbe 0xe7154
    X86_AT(c, 0xe7025u);
    if (x86_cc(c, 6)) { goto L_e7154; }
    X86_TICK(c, 65);
    // 0e702b  mov ecx, edi
    X86_AT(c, 0xe702bu);
    c.r[1] = c.r[7];
    // 0e702d  mov eax, esi
    X86_AT(c, 0xe702du);
    c.r[0] = c.r[6];
    // 0e702f  add eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe702fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0e7032  mov edx, dword ptr [ebx]
    X86_AT(c, 0xe7032u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e7034  push esi
    X86_AT(c, 0xe7034u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7035  push edi
    X86_AT(c, 0xe7035u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7036  mov esi, eax
    X86_AT(c, 0xe7036u);
    c.r[6] = c.r[0];
    // 0e7038  mov edi, edx
    X86_AT(c, 0xe7038u);
    c.r[7] = c.r[2];
    // 0e703a  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe703au);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e703c  pop edi
    X86_AT(c, 0xe703cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e703d  pop esi
    X86_AT(c, 0xe703du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e703e  sub dword ptr [ebx + 4], edi
    X86_AT(c, 0xe703eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0e7041  add dword ptr [ebx], edi
    X86_AT(c, 0xe7041u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0e7043  add dword ptr [ebp - 4], edi
    X86_AT(c, 0xe7043u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0e7046  jmp 0xe7154
    X86_AT(c, 0xe7046u);
    goto L_e7154;
L_e704b:
    X86_TICK(c, 9);
    // 0e704b  mov byte ptr [ebp - 0xc], 0
    X86_AT(c, 0xe704bu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 0e704f  jmp 0xe70fc
    X86_AT(c, 0xe704fu);
    goto L_e70fc;
L_e7054:
    X86_TICK(c, 11);
    // 0e7054  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe7054u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e7057  cmp eax, edi
    X86_AT(c, 0xe7057u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0e7059  jl 0xe705d
    X86_AT(c, 0xe7059u);
    if (x86_cc(c, 12)) { goto L_e705d; }
    X86_TICK(c, 2);
    // 0e705b  mov eax, edi
    X86_AT(c, 0xe705bu);
    c.r[0] = c.r[7];
L_e705d:
    X86_TICK(c, 31);
    // 0e705d  xchg edx, eax
    X86_AT(c, 0xe705du);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0e705e  mov al, 0xa
    X86_AT(c, 0xe705eu);
    s8(c, 0, 0xAu);
    // 0e7060  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe7060u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e7063  add ecx, esi
    X86_AT(c, 0xe7063u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[6], 0, 4); }
    // 0e7065  push edi
    X86_AT(c, 0xe7065u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7066  mov edi, ecx
    X86_AT(c, 0xe7066u);
    c.r[7] = c.r[1];
    // 0e7068  mov dword ptr [ebp - 0x14], ecx
    X86_AT(c, 0xe7068u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[1]);
    // 0e706b  mov ecx, edx
    X86_AT(c, 0xe706bu);
    c.r[1] = c.r[2];
    // 0e706d  scasb al, byte ptr es:[edi]
    X86_AT(c, 0xe706du);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0e706f  jne 0xe7074
    X86_AT(c, 0xe706fu);
    if (x86_cc(c, 5)) { goto L_e7074; }
    X86_TICK(c, 4);
    // 0e7071  inc ecx
    X86_AT(c, 0xe7071u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0e7072  sub edx, ecx
    X86_AT(c, 0xe7072u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_e7074:
    X86_TICK(c, 83);
    // 0e7074  pop edi
    X86_AT(c, 0xe7074u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7075  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0xe7075u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 0e7079  mov ecx, edx
    X86_AT(c, 0xe7079u);
    c.r[1] = c.r[2];
    // 0e707b  movsx ecx, cx
    X86_AT(c, 0xe707bu);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[1] & 0xFFFFu);
    // 0e707e  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0xe707eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0e7081  mov edx, dword ptr [ebx]
    X86_AT(c, 0xe7081u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e7083  push esi
    X86_AT(c, 0xe7083u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7084  push edi
    X86_AT(c, 0xe7084u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7085  mov esi, eax
    X86_AT(c, 0xe7085u);
    c.r[6] = c.r[0];
    // 0e7087  mov edi, edx
    X86_AT(c, 0xe7087u);
    c.r[7] = c.r[2];
    // 0e7089  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe7089u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e708b  pop edi
    X86_AT(c, 0xe708bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e708c  pop esi
    X86_AT(c, 0xe708cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e708d  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe708du);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e7091  add dword ptr [ebp - 4], eax
    X86_AT(c, 0xe7091u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e7094  add esi, eax
    X86_AT(c, 0xe7094u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0e7096  add dword ptr [ebx], eax
    X86_AT(c, 0xe7096u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e7098  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe7098u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e709c  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0xe709cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e709f  mov ecx, edi
    X86_AT(c, 0xe709fu);
    c.r[1] = c.r[7];
    // 0e70a1  cmp ecx, edx
    X86_AT(c, 0xe70a1u);
    (void)x86_sub(c, c.r[1], c.r[2], 0, 4);
    // 0e70a3  jl 0xe70a7
    X86_AT(c, 0xe70a3u);
    if (x86_cc(c, 12)) { goto L_e70a7; }
    X86_TICK(c, 2);
    // 0e70a5  mov ecx, edx
    X86_AT(c, 0xe70a5u);
    c.r[1] = c.r[2];
L_e70a7:
    X86_TICK(c, 7);
    // 0e70a7  cmp ecx, eax
    X86_AT(c, 0xe70a7u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 0e70a9  jle 0xe70f3
    X86_AT(c, 0xe70a9u);
    if (x86_cc(c, 14)) { goto L_e70f3; }
    X86_TICK(c, 15);
    // 0e70ab  sub edx, eax
    X86_AT(c, 0xe70abu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e70ad  movzx eax, word ptr [0xc40ac]
    X86_AT(c, 0xe70adu);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xC40ACu)));
    // 0e70b4  cmp eax, edx
    X86_AT(c, 0xe70b4u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0e70b6  jle 0xe70c3
    X86_AT(c, 0xe70b6u);
    if (x86_cc(c, 14)) { goto L_e70c3; }
    X86_TICK(c, 15);
    // 0e70b8  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe70b8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e70ba  mov byte ptr [eax], 0xd
    X86_AT(c, 0xe70bau);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xDu);
    // 0e70bd  mov byte ptr [ebp - 0xc], 1
    X86_AT(c, 0xe70bdu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1u);
    // 0e70c1  jmp 0xe70db
    X86_AT(c, 0xe70c1u);
    goto L_e70db;
L_e70c3:
    X86_TICK(c, 35);
    // 0e70c3  movzx ecx, word ptr [0xc40ac]
    X86_AT(c, 0xe70c3u);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0xC40ACu)));
    // 0e70ca  mov eax, 0xc40ae
    X86_AT(c, 0xe70cau);
    c.r[0] = 0xC40AEu;
    // 0e70cf  mov edx, dword ptr [ebx]
    X86_AT(c, 0xe70cfu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e70d1  push esi
    X86_AT(c, 0xe70d1u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e70d2  push edi
    X86_AT(c, 0xe70d2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e70d3  mov esi, eax
    X86_AT(c, 0xe70d3u);
    c.r[6] = c.r[0];
    // 0e70d5  mov edi, edx
    X86_AT(c, 0xe70d5u);
    c.r[7] = c.r[2];
    // 0e70d7  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0xe70d7u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0e70d9  pop edi
    X86_AT(c, 0xe70d9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e70da  pop esi
    X86_AT(c, 0xe70dau);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_e70db:
    X86_TICK(c, 36);
    // 0e70db  inc dword ptr [ebp - 4]
    X86_AT(c, 0xe70dbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e70de  inc esi
    X86_AT(c, 0xe70deu);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0e70df  dec edi
    X86_AT(c, 0xe70dfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0e70e0  movzx eax, word ptr [0xc40ac]
    X86_AT(c, 0xe70e0u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xC40ACu)));
    // 0e70e7  add dword ptr [ebx], eax
    X86_AT(c, 0xe70e7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0e70e9  movzx eax, word ptr [0xc40ac]
    X86_AT(c, 0xe70e9u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xC40ACu)));
    // 0e70f0  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0xe70f0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_e70f3:
    X86_TICK(c, 15);
    // 0e70f3  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0xe70f3u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0e70f7  sub edi, eax
    X86_AT(c, 0xe70f7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e70f9  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0xe70f9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_e70fc:
    X86_TICK(c, 12);
    // 0e70fc  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0xe70fcu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0e7100  jle 0xe710a
    X86_AT(c, 0xe7100u);
    if (x86_cc(c, 14)) { goto L_e710a; }
    X86_TICK(c, 7);
    // 0e7102  and edi, edi
    X86_AT(c, 0xe7102u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e7104  ja 0xe7054
    X86_AT(c, 0xe7104u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xe7054u); goto L_e7054; }
L_e710a:
    X86_TICK(c, 7);
    // 0e710a  and edi, edi
    X86_AT(c, 0xe710au);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e710c  ja 0xe7118
    X86_AT(c, 0xe710cu);
    if (x86_cc(c, 7)) { goto L_e7118; }
    X86_TICK(c, 7);
    // 0e710e  and edi, edi
    X86_AT(c, 0xe710eu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e7110  jne 0xe713c
    X86_AT(c, 0xe7110u);
    if (x86_cc(c, 5)) { goto L_e713c; }
    X86_TICK(c, 12);
    // 0e7112  cmp byte ptr [ebp - 0xc], 0
    X86_AT(c, 0xe7112u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 1);
    // 0e7116  je 0xe713c
    X86_AT(c, 0xe7116u);
    if (x86_cc(c, 4)) { goto L_e713c; }
L_e7118:
    X86_TICK(c, 20);
    // 0e7118  push 0x200
    X86_AT(c, 0xe7118u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0e711d  push dword ptr [ebx + 8]
    X86_AT(c, 0xe711du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0e7120  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe7120u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e7123  push eax
    X86_AT(c, 0xe7123u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7124  call 0xe9ad8
    X86_AT(c, 0xe7124u);
    push32(c, 0xe7129u); x86_call_known(c, 0xe9ad8u, f_000e9ad8); X86_RET(c, 0xe7129u);
    X86_TICK(c, 7);
    // 0e7129  cmp eax, 0x200
    X86_AT(c, 0xe7129u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 0e712e  jne 0xe7154
    X86_AT(c, 0xe712eu);
    if (x86_cc(c, 5)) { goto L_e7154; }
    X86_TICK(c, 8);
    // 0e7130  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0xe7130u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
    // 0e7137  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe7137u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e713a  mov dword ptr [ebx], eax
    X86_AT(c, 0xe713au);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_e713c:
    X86_TICK(c, 12);
    // 0e713c  cmp byte ptr [ebp - 0xc], 0
    X86_AT(c, 0xe713cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 1);
    // 0e7140  je 0xe714c
    X86_AT(c, 0xe7140u);
    if (x86_cc(c, 4)) { goto L_e714c; }
    X86_TICK(c, 18);
    // 0e7142  mov eax, dword ptr [ebx]
    X86_AT(c, 0xe7142u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0e7144  mov byte ptr [eax], 0xa
    X86_AT(c, 0xe7144u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xAu);
    // 0e7147  inc dword ptr [ebx]
    X86_AT(c, 0xe7147u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0e7149  dec dword ptr [ebx + 4]
    X86_AT(c, 0xe7149u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_e714c:
    X86_TICK(c, 7);
    // 0e714c  and edi, edi
    X86_AT(c, 0xe714cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0e714e  ja 0xe704b
    X86_AT(c, 0xe714eu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0xe704bu); goto L_e704b; }
L_e7154:
    X86_TICK(c, 12);
    // 0e7154  cmp word ptr [0xc453a], 0
    X86_AT(c, 0xe7154u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC453Au))), 0x0u, 0, 2);
    // 0e715c  je 0xe7164
    X86_AT(c, 0xe715cu);
    if (x86_cc(c, 4)) { goto L_e7164; }
    X86_TICK(c, 14);
    // 0e715e  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0xe715eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0e7162  jmp 0xe716e
    X86_AT(c, 0xe7162u);
    goto L_e716e;
L_e7164:
    X86_TICK(c, 6);
    // 0e7164  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0xe7164u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 0e7168  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe7168u);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
L_e716e:
    X86_TICK(c, 32);
    // 0e716e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe716eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e7171  pop edi
    X86_AT(c, 0xe7171u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7172  pop esi
    X86_AT(c, 0xe7172u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e7173  pop ebx
    X86_AT(c, 0xe7173u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e7174  leave 
    X86_AT(c, 0xe7174u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e7175  ret 0xc
    X86_AT(c, 0xe7175u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xe6e98u, "ran off the end of a function");
}
void f_000e7154(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0e7154  cmp word ptr [0xc453a], 0
    X86_AT(c, 0xe7154u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC453Au))), 0x0u, 0, 2);
    // 0e715c  je 0xe7164
    X86_AT(c, 0xe715cu);
    if (x86_cc(c, 4)) { goto L_e7164; }
    X86_TICK(c, 14);
    // 0e715e  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0xe715eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0e7162  jmp 0xe716e
    X86_AT(c, 0xe7162u);
    goto L_e716e;
L_e7164:
    X86_TICK(c, 6);
    // 0e7164  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0xe7164u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 0e7168  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe7168u);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
L_e716e:
    X86_TICK(c, 32);
    // 0e716e  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe716eu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e7171  pop edi
    X86_AT(c, 0xe7171u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e7172  pop esi
    X86_AT(c, 0xe7172u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e7173  pop ebx
    X86_AT(c, 0xe7173u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e7174  leave 
    X86_AT(c, 0xe7174u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e7175  ret 0xc
    X86_AT(c, 0xe7175u);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0xe7154u, "ran off the end of a function");
}
void f_000e7180(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0e7180  enter 4, 0
    X86_AT(c, 0xe7180u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0e7184  push ebx
    X86_AT(c, 0xe7184u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e7185  push esi
    X86_AT(c, 0xe7185u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7186  push edi
    X86_AT(c, 0xe7186u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7187  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0xe7187u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0e718a  mov ebx, edi
    X86_AT(c, 0xe718au);
    c.r[3] = c.r[7];
    // 0e718c  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0xe718cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 0e7190  jne 0xe71a2
    X86_AT(c, 0xe7190u);
    if (x86_cc(c, 5)) { goto L_e71a2; }
    X86_TICK(c, 18);
    // 0e7192  mov ax, 5
    X86_AT(c, 0xe7192u);
    s16(c, 0, 0x5u);
    // 0e7196  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe7196u);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
    // 0e719c  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0xe719cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0e71a0  jmp 0xe71d5
    X86_AT(c, 0xe71a0u);
    goto L_e71d5;
L_e71a2:
    X86_TICK(c, 12);
    // 0e71a2  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0xe71a2u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 0e71a6  je 0xe71ae
    X86_AT(c, 0xe71a6u);
    if (x86_cc(c, 4)) { goto L_e71ae; }
    X86_TICK(c, 9);
    // 0e71a8  push edi
    X86_AT(c, 0xe71a8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e71a9  call 0xe85ac
    X86_AT(c, 0xe71a9u);
    push32(c, 0xe71aeu); x86_call_known(c, 0xe85acu, f_000e85ac); X86_RET(c, 0xe71aeu);
L_e71ae:
    X86_TICK(c, 43);
    // 0e71ae  or byte ptr [ebx + 0xd], 8
    X86_AT(c, 0xe71aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
    // 0e71b2  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0xe71b2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0e71b5  imul eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe71b5u);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 0e71b9  xchg esi, eax
    X86_AT(c, 0xe71b9u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e71ba  and esi, esi
    X86_AT(c, 0xe71bau);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e71bc  jl 0xe71c6
    X86_AT(c, 0xe71bcu);
    if (x86_cc(c, 12)) { goto L_e71c6; }
    X86_TICK(c, 7);
    // 0e71be  cmp esi, 0x7fffffff
    X86_AT(c, 0xe71beu);
    (void)x86_sub(c, c.r[6], 0x7FFFFFFFu, 0, 4);
    // 0e71c4  jle 0xe71d1
    X86_AT(c, 0xe71c4u);
    if (x86_cc(c, 14)) { goto L_e71d1; }
L_e71c6:
    X86_TICK(c, 9);
    // 0e71c6  mov word ptr [0xc453a], 1
    X86_AT(c, 0xe71c6u);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), 0x1u);
    // 0e71cf  jmp 0xe71d5
    X86_AT(c, 0xe71cfu);
    goto L_e71d5;
L_e71d1:
    X86_TICK(c, 7);
    // 0e71d1  and esi, esi
    X86_AT(c, 0xe71d1u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e71d3  jne 0xe71d9
    X86_AT(c, 0xe71d3u);
    if (x86_cc(c, 5)) { goto L_e71d9; }
L_e71d5:
    X86_TICK(c, 9);
    // 0e71d5  sub eax, eax
    X86_AT(c, 0xe71d5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e71d7  jmp 0xe721a
    X86_AT(c, 0xe71d7u);
    goto L_e721a;
L_e71d9:
    X86_TICK(c, 12);
    // 0e71d9  test byte ptr [ebx + 0xc], 8
    X86_AT(c, 0xe71d9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x8u, 1);
    // 0e71dd  je 0xe71ec
    X86_AT(c, 0xe71ddu);
    if (x86_cc(c, 4)) { goto L_e71ec; }
    X86_TICK(c, 17);
    // 0e71df  push 2
    X86_AT(c, 0xe71dfu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e71e1  push 0
    X86_AT(c, 0xe71e1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e71e3  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe71e3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e71e6  push eax
    X86_AT(c, 0xe71e6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e71e7  call 0xe9b84
    X86_AT(c, 0xe71e7u);
    push32(c, 0xe71ecu); x86_call_known(c, 0xe9b84u, f_000e9b84); X86_RET(c, 0xe71ecu);
L_e71ec:
    X86_TICK(c, 16);
    // 0e71ec  push esi
    X86_AT(c, 0xe71ecu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e71ed  push dword ptr [ebp + 8]
    X86_AT(c, 0xe71edu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e71f0  push edi
    X86_AT(c, 0xe71f0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e71f1  call 0xe6e98
    X86_AT(c, 0xe71f1u);
    push32(c, 0xe71f6u); x86_call_known(c, 0xe6e98u, f_000e6e98); X86_RET(c, 0xe71f6u);
    X86_TICK(c, 56);
    // 0e71f6  cdq 
    X86_AT(c, 0xe71f6u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e71f7  idiv dword ptr [ebp + 0xc]
    X86_AT(c, 0xe71f7u);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 4, 0xe71f7u);
    // 0e71fa  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe71fau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e71fd  test byte ptr [ebx + 0xc], 8
    X86_AT(c, 0xe71fdu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x8u, 1);
    // 0e7201  je 0xe7217
    X86_AT(c, 0xe7201u);
    if (x86_cc(c, 4)) { goto L_e7217; }
    X86_TICK(c, 9);
    // 0e7203  push edi
    X86_AT(c, 0xe7203u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7204  call 0xe7234
    X86_AT(c, 0xe7204u);
    push32(c, 0xe7209u); x86_call_known(c, 0xe7234u, f_000e7234); X86_RET(c, 0xe7209u);
    X86_TICK(c, 21);
    // 0e7209  pop ecx
    X86_AT(c, 0xe7209u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0e720a  push 2
    X86_AT(c, 0xe720au);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e720c  push 0
    X86_AT(c, 0xe720cu);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e720e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe720eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e7211  push eax
    X86_AT(c, 0xe7211u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7212  call 0xe9b84
    X86_AT(c, 0xe7212u);
    push32(c, 0xe7217u); x86_call_known(c, 0xe9b84u, f_000e9b84); X86_RET(c, 0xe7217u);
L_e7217:
    X86_TICK(c, 4);
    // 0e7217  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe7217u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_e721a:
    X86_TICK(c, 28);
    // 0e721a  pop edi
    X86_AT(c, 0xe721au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e721b  pop esi
    X86_AT(c, 0xe721bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e721c  pop ebx
    X86_AT(c, 0xe721cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e721d  leave 
    X86_AT(c, 0xe721du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e721e  ret 
    X86_AT(c, 0xe721eu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7180u, "ran off the end of a function");
}
void f_000e7234(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0e7234  enter 4, 0
    X86_AT(c, 0xe7234u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0e7238  push edi
    X86_AT(c, 0xe7238u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7239  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe7239u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e723c  test byte ptr [edi + 0xc], 4
    X86_AT(c, 0xe723cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x4u, 1);
    // 0e7240  jne 0xe7259
    X86_AT(c, 0xe7240u);
    if (x86_cc(c, 5)) { goto L_e7259; }
    X86_TICK(c, 15);
    // 0e7242  mov ax, 1
    X86_AT(c, 0xe7242u);
    s16(c, 0, 0x1u);
    // 0e7246  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe7246u);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
    // 0e724c  mov eax, 1
    X86_AT(c, 0xe724cu);
    c.r[0] = 0x1u;
    // 0e7251  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe7251u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e7254  jmp 0xe72f0
    X86_AT(c, 0xe7254u);
    goto L_e72f0;
L_e7259:
    X86_TICK(c, 12);
    // 0e7259  test byte ptr [edi + 0xd], 8
    X86_AT(c, 0xe7259u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))) & 0x8u, 1);
    // 0e725d  je 0xe726b
    X86_AT(c, 0xe725du);
    if (x86_cc(c, 4)) { goto L_e726b; }
    X86_TICK(c, 12);
    // 0e725f  cmp dword ptr [edi + 4], 0xffffffff
    X86_AT(c, 0xe725fu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 0e7263  je 0xe726b
    X86_AT(c, 0xe7263u);
    if (x86_cc(c, 4)) { goto L_e726b; }
    X86_TICK(c, 12);
    // 0e7265  test byte ptr [edi + 0xc], 0x80
    X86_AT(c, 0xe7265u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x80u, 1);
    // 0e7269  je 0xe7272
    X86_AT(c, 0xe7269u);
    if (x86_cc(c, 4)) { goto L_e7272; }
L_e726b:
    X86_TICK(c, 9);
    // 0e726b  sub eax, eax
    X86_AT(c, 0xe726bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e726d  jmp 0xe72f3
    X86_AT(c, 0xe726du);
    goto L_e72f3;
L_e7272:
    X86_TICK(c, 12);
    // 0e7272  test byte ptr [edi + 0xc], 1
    X86_AT(c, 0xe7272u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x1u, 1);
    // 0e7276  je 0xe72e9
    X86_AT(c, 0xe7276u);
    if (x86_cc(c, 4)) { goto L_e72e9; }
    X86_TICK(c, 12);
    // 0e727c  cmp dword ptr [edi + 4], 0x200
    X86_AT(c, 0xe727cu);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0x200u, 0, 4);
    // 0e7283  jge 0xe72e9
    X86_AT(c, 0xe7283u);
    if (x86_cc(c, 13)) { goto L_e72e9; }
    X86_TICK(c, 12);
    // 0e7285  test byte ptr [edi + 0xc], 8
    X86_AT(c, 0xe7285u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x8u, 1);
    // 0e7289  je 0xe7298
    X86_AT(c, 0xe7289u);
    if (x86_cc(c, 4)) { goto L_e7298; }
    X86_TICK(c, 17);
    // 0e728b  push 2
    X86_AT(c, 0xe728bu);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0e728d  push 0
    X86_AT(c, 0xe728du);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0e728f  mov al, byte ptr [edi + 0xe]
    X86_AT(c, 0xe728fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu))));
    // 0e7292  push eax
    X86_AT(c, 0xe7292u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7293  call 0xe9b84
    X86_AT(c, 0xe7293u);
    push32(c, 0xe7298u); x86_call_known(c, 0xe9b84u, f_000e9b84); X86_RET(c, 0xe7298u);
L_e7298:
    X86_TICK(c, 28);
    // 0e7298  mov eax, 0x200
    X86_AT(c, 0xe7298u);
    c.r[0] = 0x200u;
    // 0e729d  sub eax, dword ptr [edi + 4]
    X86_AT(c, 0xe729du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4); }
    // 0e72a0  push eax
    X86_AT(c, 0xe72a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e72a1  push dword ptr [edi + 8]
    X86_AT(c, 0xe72a1u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))); push32(c, v); }
    // 0e72a4  mov al, byte ptr [edi + 0xe]
    X86_AT(c, 0xe72a4u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu))));
    // 0e72a7  push eax
    X86_AT(c, 0xe72a7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e72a8  call 0xe9ad8
    X86_AT(c, 0xe72a8u);
    push32(c, 0xe72adu); x86_call_known(c, 0xe9ad8u, f_000e9ad8); X86_RET(c, 0xe72adu);
    X86_TICK(c, 17);
    // 0e72ad  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe72adu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e72b0  mov edx, 0x200
    X86_AT(c, 0xe72b0u);
    c.r[2] = 0x200u;
    // 0e72b5  sub edx, dword ptr [edi + 4]
    X86_AT(c, 0xe72b5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4); }
    // 0e72b8  cmp edx, eax
    X86_AT(c, 0xe72b8u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0e72ba  jne 0xe72c5
    X86_AT(c, 0xe72bau);
    if (x86_cc(c, 5)) { goto L_e72c5; }
    X86_TICK(c, 9);
    // 0e72bc  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe72bcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0e72c3  jmp 0xe72db
    X86_AT(c, 0xe72c3u);
    goto L_e72db;
L_e72c5:
    X86_TICK(c, 15);
    // 0e72c5  mov ax, 0x15
    X86_AT(c, 0xe72c5u);
    s16(c, 0, 0x15u);
    // 0e72c9  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe72c9u);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
    // 0e72cf  mov eax, 0x15
    X86_AT(c, 0xe72cfu);
    c.r[0] = 0x15u;
    // 0e72d4  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe72d4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e72d7  or byte ptr [edi + 0xc], 0x20
    X86_AT(c, 0xe72d7u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
L_e72db:
    X86_TICK(c, 15);
    // 0e72db  mov eax, dword ptr [edi + 8]
    X86_AT(c, 0xe72dbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 0e72de  mov dword ptr [edi], eax
    X86_AT(c, 0xe72deu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0e72e0  mov dword ptr [edi + 4], 0x200
    X86_AT(c, 0xe72e0u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), 0x200u);
    // 0e72e7  jmp 0xe72f0
    X86_AT(c, 0xe72e7u);
    goto L_e72f0;
L_e72e9:
    X86_TICK(c, 2);
    // 0e72e9  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe72e9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_e72f0:
    X86_TICK(c, 4);
    // 0e72f0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe72f0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_e72f3:
    X86_TICK(c, 20);
    // 0e72f3  pop edi
    X86_AT(c, 0xe72f3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e72f4  leave 
    X86_AT(c, 0xe72f4u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e72f5  ret 
    X86_AT(c, 0xe72f5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7234u, "ran off the end of a function");
}
void f_000e7300(X86Cpu& c) {
    X86_TICK(c, 80);
    // 0e7300  enter 4, 0
    X86_AT(c, 0xe7300u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0e7304  push ebx
    X86_AT(c, 0xe7304u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e7305  push esi
    X86_AT(c, 0xe7305u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e7306  push edi
    X86_AT(c, 0xe7306u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7307  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe7307u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e730a  sub eax, eax
    X86_AT(c, 0xe730au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e730c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe730cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e730f  mov eax, edi
    X86_AT(c, 0xe730fu);
    c.r[0] = c.r[7];
    // 0e7311  mov edx, 0xc42dc
    X86_AT(c, 0xe7311u);
    c.r[2] = 0xC42DCu;
    // 0e7316  sub eax, edx
    X86_AT(c, 0xe7316u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0e7318  cdq 
    X86_AT(c, 0xe7318u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0e7319  mov ecx, 0x12
    X86_AT(c, 0xe7319u);
    c.r[1] = 0x12u;
    // 0e731e  idiv ecx
    X86_AT(c, 0xe731eu);
    x86_idiv(c, c.r[1], 4, 0xe731eu);
    // 0e7320  xchg esi, eax
    X86_AT(c, 0xe7320u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0e7321  and esi, esi
    X86_AT(c, 0xe7321u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e7323  jl 0xe7377
    X86_AT(c, 0xe7323u);
    if (x86_cc(c, 12)) { goto L_e7377; }
    X86_TICK(c, 7);
    // 0e7325  cmp esi, 0x19
    X86_AT(c, 0xe7325u);
    (void)x86_sub(c, c.r[6], 0x19u, 0, 4);
    // 0e7328  jg 0xe7377
    X86_AT(c, 0xe7328u);
    if (x86_cc(c, 15)) { goto L_e7377; }
    X86_TICK(c, 12);
    // 0e732a  cmp word ptr [edi + 0xc], 0
    X86_AT(c, 0xe732au);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))), 0x0u, 0, 2);
    // 0e732f  je 0xe7377
    X86_AT(c, 0xe732fu);
    if (x86_cc(c, 4)) { goto L_e7377; }
    X86_TICK(c, 14);
    // 0e7331  mov ebx, edi
    X86_AT(c, 0xe7331u);
    c.r[3] = c.r[7];
    // 0e7333  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0xe7333u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 0e7337  je 0xe7366
    X86_AT(c, 0xe7337u);
    if (x86_cc(c, 4)) { goto L_e7366; }
    X86_TICK(c, 12);
    // 0e7339  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0xe7339u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 0e733d  je 0xe734b
    X86_AT(c, 0xe733du);
    if (x86_cc(c, 4)) { goto L_e734b; }
    X86_TICK(c, 9);
    // 0e733f  push edi
    X86_AT(c, 0xe733fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e7340  call 0xe7234
    X86_AT(c, 0xe7340u);
    push32(c, 0xe7345u); x86_call_known(c, 0xe7234u, f_000e7234); X86_RET(c, 0xe7345u);
    X86_TICK(c, 13);
    // 0e7345  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe7345u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0e7348  pop ecx
    X86_AT(c, 0xe7348u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0e7349  jmp 0xe7351
    X86_AT(c, 0xe7349u);
    goto L_e7351;
L_e734b:
    X86_TICK(c, 12);
    // 0e734b  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0xe734bu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 0e734f  je 0xe7377
    X86_AT(c, 0xe734fu);
    if (x86_cc(c, 4)) { goto L_e7377; }
L_e7351:
    X86_TICK(c, 12);
    // 0e7351  test byte ptr [ebx + 0xd], 1
    X86_AT(c, 0xe7351u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x1u, 1);
    // 0e7355  jne 0xe7366
    X86_AT(c, 0xe7355u);
    if (x86_cc(c, 5)) { goto L_e7366; }
    X86_TICK(c, 12);
    // 0e7357  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0xe7357u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 0e735b  jne 0xe7366
    X86_AT(c, 0xe735bu);
    if (x86_cc(c, 5)) { goto L_e7366; }
    X86_TICK(c, 12);
    // 0e735d  push dword ptr [ebx + 8]
    X86_AT(c, 0xe735du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0e7360  call 0xe77c4
    X86_AT(c, 0xe7360u);
    push32(c, 0xe7365u); x86_call_known(c, 0xe77c4u, f_000e77c4); X86_RET(c, 0xe7365u);
    X86_TICK(c, 4);
    // 0e7365  pop ecx
    X86_AT(c, 0xe7365u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_e7366:
    X86_TICK(c, 13);
    // 0e7366  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe7366u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e7369  push eax
    X86_AT(c, 0xe7369u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e736a  call 0xe937c
    X86_AT(c, 0xe736au);
    push32(c, 0xe736fu); x86_call_known(c, 0xe937cu, f_000e937c); X86_RET(c, 0xe736fu);
    X86_TICK(c, 9);
    // 0e736f  mov word ptr [ebx + 0xc], 0
    X86_AT(c, 0xe736fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), 0x0u);
    // 0e7375  jmp 0xe7389
    X86_AT(c, 0xe7375u);
    goto L_e7389;
L_e7377:
    X86_TICK(c, 8);
    // 0e7377  mov ax, 6
    X86_AT(c, 0xe7377u);
    s16(c, 0, 0x6u);
    // 0e737b  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe737bu);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
    // 0e7381  mov eax, 6
    X86_AT(c, 0xe7381u);
    c.r[0] = 0x6u;
    // 0e7386  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe7386u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_e7389:
    X86_TICK(c, 32);
    // 0e7389  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe7389u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e738c  pop edi
    X86_AT(c, 0xe738cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e738d  pop esi
    X86_AT(c, 0xe738du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e738e  pop ebx
    X86_AT(c, 0xe738eu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e738f  leave 
    X86_AT(c, 0xe738fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e7390  ret 
    X86_AT(c, 0xe7390u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7300u, "ran off the end of a function");
}
void f_000e73a0(X86Cpu& c) {
    X86_TICK(c, 4);
    // 0e73a0  push edi
    X86_AT(c, 0xe73a0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e73a1  sub edi, edi
    X86_AT(c, 0xe73a1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_e73a3:
    X86_TICK(c, 16);
    // 0e73a3  lea eax, [edi + edi*4]
    X86_AT(c, 0xe73a3u);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 0e73a6  lea eax, [eax*4]
    X86_AT(c, 0xe73a6u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0e73ad  test byte ptr [eax + 0xc42e8], 6
    X86_AT(c, 0xe73adu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xC42E8u))) & 0x6u, 1);
    // 0e73b4  je 0xe73ca
    X86_AT(c, 0xe73b4u);
    if (x86_cc(c, 4)) { goto L_e73ca; }
    X86_TICK(c, 13);
    // 0e73b6  add eax, 0xc42dc
    X86_AT(c, 0xe73b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0xC42DCu, 0, 4); }
    // 0e73bb  cmp eax, dword ptr [0xc40b8]
    X86_AT(c, 0xe73bbu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0xC40B8u))), 0, 4);
    // 0e73c1  je 0xe73ca
    X86_AT(c, 0xe73c1u);
    if (x86_cc(c, 4)) { goto L_e73ca; }
    X86_TICK(c, 9);
    // 0e73c3  push eax
    X86_AT(c, 0xe73c3u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e73c4  call 0xe7300
    X86_AT(c, 0xe73c4u);
    push32(c, 0xe73c9u); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xe73c9u);
    X86_TICK(c, 4);
    // 0e73c9  pop ecx
    X86_AT(c, 0xe73c9u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_e73ca:
    X86_TICK(c, 7);
    // 0e73ca  cmp edi, 0x19
    X86_AT(c, 0xe73cau);
    (void)x86_sub(c, c.r[7], 0x19u, 0, 4);
    // 0e73cd  jae 0xe73d2
    X86_AT(c, 0xe73cdu);
    if (x86_cc(c, 3)) { goto L_e73d2; }
    X86_TICK(c, 9);
    // 0e73cf  inc edi
    X86_AT(c, 0xe73cfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0e73d0  jmp 0xe73a3
    X86_AT(c, 0xe73d0u);
    X86_POLL(c, 0xe73a3u); goto L_e73a3;
L_e73d2:
    X86_TICK(c, 12);
    // 0e73d2  push dword ptr [0xc40b8]
    X86_AT(c, 0xe73d2u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0xC40B8u))); push32(c, v); }
    // 0e73d8  call 0xe7300
    X86_AT(c, 0xe73d8u);
    push32(c, 0xe73ddu); x86_call_known(c, 0xe7300u, f_000e7300); X86_RET(c, 0xe73ddu);
    X86_TICK(c, 18);
    // 0e73dd  pop ecx
    X86_AT(c, 0xe73ddu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0e73de  pop edi
    X86_AT(c, 0xe73deu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e73df  ret 
    X86_AT(c, 0xe73dfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe73a0u, "ran off the end of a function");
}
void f_000e73f0(X86Cpu& c) {
    X86_TICK(c, 26);
    // 0e73f0  enter 4, 0
    X86_AT(c, 0xe73f0u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0e73f4  push dword ptr [ebp + 8]
    X86_AT(c, 0xe73f4u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0e73f7  push 1
    X86_AT(c, 0xe73f7u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e73f9  push 1
    X86_AT(c, 0xe73f9u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e73fb  lea eax, [ebp - 1]
    X86_AT(c, 0xe73fbu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 0e73fe  push eax
    X86_AT(c, 0xe73feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e73ff  call 0xe6b28
    X86_AT(c, 0xe73ffu);
    push32(c, 0xe7404u); x86_call_known(c, 0xe6b28u, f_000e6b28); X86_RET(c, 0xe7404u);
    X86_TICK(c, 9);
    // 0e7404  add esp, 0x10
    X86_AT(c, 0xe7404u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e7407  and eax, eax
    X86_AT(c, 0xe7407u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0e7409  jne 0xe7412
    X86_AT(c, 0xe7409u);
    if (x86_cc(c, 5)) { goto L_e7412; }
    X86_TICK(c, 9);
    // 0e740b  mov eax, 0xffffffff
    X86_AT(c, 0xe740bu);
    c.r[0] = 0xFFFFFFFFu;
    // 0e7410  jmp 0xe7416
    X86_AT(c, 0xe7410u);
    goto L_e7416;
L_e7412:
    X86_TICK(c, 6);
    // 0e7412  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0xe7412u);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
L_e7416:
    X86_TICK(c, 16);
    // 0e7416  leave 
    X86_AT(c, 0xe7416u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e7417  ret 
    X86_AT(c, 0xe7417u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe73f0u, "ran off the end of a function");
}
void f_000e7458(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0e7458  enter 8, 0
    X86_AT(c, 0xe7458u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 0e745c  push edi
    X86_AT(c, 0xe745cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e745d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe745du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e7460  mov eax, edi
    X86_AT(c, 0xe7460u);
    c.r[0] = c.r[7];
    // 0e7462  mov byte ptr [ebp - 5], al
    X86_AT(c, 0xe7462u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 0e7465  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe7465u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e7468  push 1
    X86_AT(c, 0xe7468u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e746a  push 1
    X86_AT(c, 0xe746au);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0e746c  lea eax, [ebp - 5]
    X86_AT(c, 0xe746cu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0e746f  push eax
    X86_AT(c, 0xe746fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7470  call 0xe7180
    X86_AT(c, 0xe7470u);
    push32(c, 0xe7475u); x86_call_known(c, 0xe7180u, f_000e7180); X86_RET(c, 0xe7475u);
    X86_TICK(c, 9);
    // 0e7475  add esp, 0x10
    X86_AT(c, 0xe7475u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0e7478  dec eax
    X86_AT(c, 0xe7478u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0e7479  je 0xe7484
    X86_AT(c, 0xe7479u);
    if (x86_cc(c, 4)) { goto L_e7484; }
    X86_TICK(c, 9);
    // 0e747b  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0xe747bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 0e7482  jmp 0xe7487
    X86_AT(c, 0xe7482u);
    goto L_e7487;
L_e7484:
    X86_TICK(c, 2);
    // 0e7484  mov dword ptr [ebp - 4], edi
    X86_AT(c, 0xe7484u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[7]);
L_e7487:
    X86_TICK(c, 24);
    // 0e7487  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe7487u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e748a  pop edi
    X86_AT(c, 0xe748au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e748b  leave 
    X86_AT(c, 0xe748bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e748c  ret 
    X86_AT(c, 0xe748cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7458u, "ran off the end of a function");
}
void f_000e7578(X86Cpu& c) {
    X86_TICK(c, 27);
    // 0e7578  enter 8, 0
    X86_AT(c, 0xe7578u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 0e757c  push ebx
    X86_AT(c, 0xe757cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0e757d  push esi
    X86_AT(c, 0xe757du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0e757e  push edi
    X86_AT(c, 0xe757eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e757f  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0xe757fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0e7582  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0xe7582u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0e7585  and esi, esi
    X86_AT(c, 0xe7585u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0e7587  jl 0xe758e
    X86_AT(c, 0xe7587u);
    if (x86_cc(c, 12)) { goto L_e758e; }
    X86_TICK(c, 7);
    // 0e7589  cmp esi, 2
    X86_AT(c, 0xe7589u);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 0e758c  jle 0xe759a
    X86_AT(c, 0xe758cu);
    if (x86_cc(c, 14)) { goto L_e759a; }
L_e758e:
    X86_TICK(c, 9);
    // 0e758e  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0xe758eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 0e7595  jmp 0xe764b
    X86_AT(c, 0xe7595u);
    goto L_e764b;
L_e759a:
    X86_TICK(c, 31);
    // 0e759a  mov ax, word ptr [0xc453a]
    X86_AT(c, 0xe759au);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0xC453Au))));
    // 0e75a0  mov word ptr [ebp - 6], ax
    X86_AT(c, 0xe75a0u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 0e75a4  sub eax, eax
    X86_AT(c, 0xe75a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0e75a6  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe75a6u);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
    // 0e75ac  mov ebx, edi
    X86_AT(c, 0xe75acu);
    c.r[3] = c.r[7];
    // 0e75ae  and byte ptr [ebx + 0xd], 0xfb
    X86_AT(c, 0xe75aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFBu, 1)); }
    // 0e75b2  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0xe75b2u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 0e75b6  je 0xe7611
    X86_AT(c, 0xe75b6u);
    if (x86_cc(c, 4)) { goto L_e7611; }
    X86_TICK(c, 12);
    // 0e75b8  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0xe75b8u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 0e75bc  je 0xe75f4
    X86_AT(c, 0xe75bcu);
    if (x86_cc(c, 4)) { goto L_e75f4; }
    X86_TICK(c, 12);
    // 0e75be  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0xe75beu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 0e75c2  je 0xe75d7
    X86_AT(c, 0xe75c2u);
    if (x86_cc(c, 4)) { goto L_e75d7; }
    X86_TICK(c, 12);
    // 0e75c4  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0xe75c4u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 0e75c8  je 0xe75d0
    X86_AT(c, 0xe75c8u);
    if (x86_cc(c, 4)) { goto L_e75d0; }
    X86_TICK(c, 12);
    // 0e75ca  test byte ptr [ebx + 0xd], 8
    X86_AT(c, 0xe75cau);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x8u, 1);
    // 0e75ce  je 0xe75d7
    X86_AT(c, 0xe75ceu);
    if (x86_cc(c, 4)) { goto L_e75d7; }
L_e75d0:
    X86_TICK(c, 9);
    // 0e75d0  push edi
    X86_AT(c, 0xe75d0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0e75d1  call 0xe7234
    X86_AT(c, 0xe75d1u);
    push32(c, 0xe75d6u); x86_call_known(c, 0xe7234u, f_000e7234); X86_RET(c, 0xe75d6u);
    X86_TICK(c, 4);
    // 0e75d6  pop ecx
    X86_AT(c, 0xe75d6u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_e75d7:
    X86_TICK(c, 7);
    // 0e75d7  cmp esi, 1
    X86_AT(c, 0xe75d7u);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 0e75da  jne 0xe75f4
    X86_AT(c, 0xe75dau);
    if (x86_cc(c, 5)) { goto L_e75f4; }
    X86_TICK(c, 12);
    // 0e75dc  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0xe75dcu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 0e75e0  je 0xe75f4
    X86_AT(c, 0xe75e0u);
    if (x86_cc(c, 4)) { goto L_e75f4; }
    X86_TICK(c, 12);
    // 0e75e2  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0xe75e2u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 0e75e6  je 0xe75ee
    X86_AT(c, 0xe75e6u);
    if (x86_cc(c, 4)) { goto L_e75ee; }
    X86_TICK(c, 12);
    // 0e75e8  test byte ptr [ebx + 0xd], 8
    X86_AT(c, 0xe75e8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x8u, 1);
    // 0e75ec  jne 0xe75f4
    X86_AT(c, 0xe75ecu);
    if (x86_cc(c, 5)) { goto L_e75f4; }
L_e75ee:
    X86_TICK(c, 11);
    // 0e75ee  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0xe75eeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0e75f1  sub dword ptr [ebp + 0xc], eax
    X86_AT(c, 0xe75f1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_e75f4:
    X86_TICK(c, 22);
    // 0e75f4  mov eax, esi
    X86_AT(c, 0xe75f4u);
    c.r[0] = c.r[6];
    // 0e75f6  push eax
    X86_AT(c, 0xe75f6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e75f7  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe75f7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e75fa  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe75fau);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e75fd  push eax
    X86_AT(c, 0xe75fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e75fe  call 0xe9b84
    X86_AT(c, 0xe75feu);
    push32(c, 0xe7603u); x86_call_known(c, 0xe9b84u, f_000e9b84); X86_RET(c, 0xe7603u);
    X86_TICK(c, 15);
    // 0e7603  mov dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0xe7603u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0xFFFFFFFFu);
    // 0e760a  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0xe760au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0e760d  mov dword ptr [ebx], eax
    X86_AT(c, 0xe760du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0e760f  jmp 0xe7620
    X86_AT(c, 0xe760fu);
    goto L_e7620;
L_e7611:
    X86_TICK(c, 22);
    // 0e7611  mov eax, esi
    X86_AT(c, 0xe7611u);
    c.r[0] = c.r[6];
    // 0e7613  push eax
    X86_AT(c, 0xe7613u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e7614  push dword ptr [ebp + 0xc]
    X86_AT(c, 0xe7614u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0e7617  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0xe7617u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0e761a  push eax
    X86_AT(c, 0xe761au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0e761b  call 0xe9b84
    X86_AT(c, 0xe761bu);
    push32(c, 0xe7620u); x86_call_known(c, 0xe9b84u, f_000e9b84); X86_RET(c, 0xe7620u);
L_e7620:
    X86_TICK(c, 12);
    // 0e7620  cmp word ptr [0xc453a], 0
    X86_AT(c, 0xe7620u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0xC453Au))), 0x0u, 0, 2);
    // 0e7628  jne 0xe763d
    X86_AT(c, 0xe7628u);
    if (x86_cc(c, 5)) { goto L_e763d; }
    X86_TICK(c, 15);
    // 0e762a  mov ax, word ptr [ebp - 6]
    X86_AT(c, 0xe762au);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))));
    // 0e762e  mov word ptr [0xc453a], ax
    X86_AT(c, 0xe762eu);
    wr16((c.sbase[3] + (uint32_t)(0xC453Au)), (c.r[0] & 0xFFFFu));
    // 0e7634  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0xe7634u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0e763b  jmp 0xe7647
    X86_AT(c, 0xe763bu);
    goto L_e7647;
L_e763d:
    X86_TICK(c, 8);
    // 0e763d  movzx eax, word ptr [0xc453a]
    X86_AT(c, 0xe763du);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0xC453Au)));
    // 0e7644  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0xe7644u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_e7647:
    X86_TICK(c, 7);
    // 0e7647  and byte ptr [edi + 0xc], 0xef
    X86_AT(c, 0xe7647u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xEFu, 1)); }
L_e764b:
    X86_TICK(c, 32);
    // 0e764b  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0xe764bu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0e764e  pop edi
    X86_AT(c, 0xe764eu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0e764f  pop esi
    X86_AT(c, 0xe764fu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0e7650  pop ebx
    X86_AT(c, 0xe7650u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0e7651  leave 
    X86_AT(c, 0xe7651u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0e7652  ret 
    X86_AT(c, 0xe7652u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xe7578u, "ran off the end of a function");
}
}

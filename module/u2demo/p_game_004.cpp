#include "p_game_funcs.h"
namespace p_game {
void f_000923e8(X86Cpu& c) {
    X86_TICK(c, 67);
    // 0923e8  enter 0xc, 0
    X86_AT(c, 0x923e8u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 0923ec  push ebx
    X86_AT(c, 0x923ecu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0923ed  push esi
    X86_AT(c, 0x923edu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0923ee  push edi
    X86_AT(c, 0x923eeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0923ef  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x923efu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0923f2  mov esi, dword ptr [ebp + 0x20]
    X86_AT(c, 0x923f2u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 0923f5  mov ax, word ptr [0x8a96e]
    X86_AT(c, 0x923f5u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A96Eu))));
    // 0923fb  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0x923fbu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 0923ff  sub eax, eax
    X86_AT(c, 0x923ffu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092401  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x92401u);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
    // 092407  mov ebx, eax
    X86_AT(c, 0x92407u);
    c.r[3] = c.r[0];
    // 092409  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x92409u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 09240c  mov byte ptr [edx], 1
    X86_AT(c, 0x9240cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), 0x1u);
    // 09240f  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x9240fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 092412  mov byte ptr [edx], al
    X86_AT(c, 0x92412u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 092414  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x92414u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 092417  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92417u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09241a  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0x9241au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 09241d  mov dl, byte ptr [edx]
    X86_AT(c, 0x9241du);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 09241f  mov byte ptr [ebp - 9], dl
    X86_AT(c, 0x9241fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 2));
    // 092422  mov byte ptr [esi], al
    X86_AT(c, 0x92422u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
    // 092424  jmp 0x9249d
    X86_AT(c, 0x92424u);
    goto L_9249d;
L_92429:
    X86_TICK(c, 13);
    // 092429  movzx edx, byte ptr [ebp - 9]
    X86_AT(c, 0x92429u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)));
    // 09242d  cmp edx, 0x2b
    X86_AT(c, 0x9242du);
    (void)x86_sub(c, c.r[2], 0x2Bu, 0, 4);
    // 092430  je 0x92476
    X86_AT(c, 0x92430u);
    if (x86_cc(c, 4)) { goto L_92476; }
    X86_TICK(c, 7);
    // 092432  cmp edx, 0x61
    X86_AT(c, 0x92432u);
    (void)x86_sub(c, c.r[2], 0x61u, 0, 4);
    // 092435  je 0x92450
    X86_AT(c, 0x92435u);
    if (x86_cc(c, 4)) { goto L_92450; }
    X86_TICK(c, 7);
    // 092437  cmp edx, 0x62
    X86_AT(c, 0x92437u);
    (void)x86_sub(c, c.r[2], 0x62u, 0, 4);
    // 09243a  je 0x92484
    X86_AT(c, 0x9243au);
    if (x86_cc(c, 4)) { goto L_92484; }
    X86_TICK(c, 7);
    // 09243c  cmp edx, 0x72
    X86_AT(c, 0x9243cu);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 09243f  je 0x9246b
    X86_AT(c, 0x9243fu);
    if (x86_cc(c, 4)) { goto L_9246b; }
    X86_TICK(c, 7);
    // 092441  cmp edx, 0x74
    X86_AT(c, 0x92441u);
    (void)x86_sub(c, c.r[2], 0x74u, 0, 4);
    // 092444  je 0x9248c
    X86_AT(c, 0x92444u);
    if (x86_cc(c, 4)) { goto L_9248c; }
    X86_TICK(c, 7);
    // 092446  cmp edx, 0x75
    X86_AT(c, 0x92446u);
    (void)x86_sub(c, c.r[2], 0x75u, 0, 4);
    // 092449  je 0x9247f
    X86_AT(c, 0x92449u);
    if (x86_cc(c, 4)) { goto L_9247f; }
    X86_TICK(c, 7);
    // 09244b  cmp edx, 0x77
    X86_AT(c, 0x9244bu);
    (void)x86_sub(c, c.r[2], 0x77u, 0, 4);
    // 09244e  jne 0x924a7
    X86_AT(c, 0x9244eu);
    if (x86_cc(c, 5)) { goto L_924a7; }
L_92450:
    X86_TICK(c, 7);
    // 092450  and bl, bl
    X86_AT(c, 0x92450u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 092452  jne 0x924a7
    X86_AT(c, 0x92452u);
    if (x86_cc(c, 5)) { goto L_924a7; }
    X86_TICK(c, 33);
    // 092454  mov bl, 1
    X86_AT(c, 0x92454u);
    s8(c, 3, 0x1u);
    // 092456  mov byte ptr [edi], bl
    X86_AT(c, 0x92456u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 3));
    // 092458  mov al, byte ptr [ebp - 9]
    X86_AT(c, 0x92458u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))));
    // 09245b  cmp al, 0x61
    X86_AT(c, 0x9245bu);
    (void)x86_sub(c, g8(c, 0), 0x61u, 0, 1);
    // 09245d  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x9245du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 092460  sete byte ptr [edx]
    X86_AT(c, 0x92460u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), x86_cc(c, 4) ? 1u : 0u);
    // 092463  cmp al, 0x77
    X86_AT(c, 0x92463u);
    (void)x86_sub(c, g8(c, 0), 0x77u, 0, 1);
    // 092465  sete byte ptr [ebp - 2]
    X86_AT(c, 0x92465u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), x86_cc(c, 4) ? 1u : 0u);
    // 092469  jmp 0x92492
    X86_AT(c, 0x92469u);
    goto L_92492;
L_9246b:
    X86_TICK(c, 7);
    // 09246b  and bl, bl
    X86_AT(c, 0x9246bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 09246d  jne 0x924a7
    X86_AT(c, 0x9246du);
    if (x86_cc(c, 5)) { goto L_924a7; }
    X86_TICK(c, 11);
    // 09246f  mov bl, 1
    X86_AT(c, 0x9246fu);
    s8(c, 3, 0x1u);
    // 092471  mov byte ptr [edi], 0
    X86_AT(c, 0x92471u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 092474  jmp 0x92492
    X86_AT(c, 0x92474u);
    goto L_92492;
L_92476:
    X86_TICK(c, 7);
    // 092476  and bl, bl
    X86_AT(c, 0x92476u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 092478  je 0x924a7
    X86_AT(c, 0x92478u);
    if (x86_cc(c, 4)) { goto L_924a7; }
    X86_TICK(c, 9);
    // 09247a  mov byte ptr [edi], 2
    X86_AT(c, 0x9247au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x2u);
    // 09247d  jmp 0x92492
    X86_AT(c, 0x9247du);
    goto L_92492;
L_9247f:
    X86_TICK(c, 11);
    // 09247f  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x9247fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 092482  jmp 0x92487
    X86_AT(c, 0x92482u);
    goto L_92487;
L_92484:
    X86_TICK(c, 4);
    // 092484  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x92484u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
L_92487:
    X86_TICK(c, 9);
    // 092487  mov byte ptr [eax], 0
    X86_AT(c, 0x92487u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 09248a  jmp 0x92492
    X86_AT(c, 0x9248au);
    goto L_92492;
L_9248c:
    X86_TICK(c, 6);
    // 09248c  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x9248cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 09248f  mov byte ptr [eax], 1
    X86_AT(c, 0x9248fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x1u);
L_92492:
    X86_TICK(c, 16);
    // 092492  inc dword ptr [ebp - 8]
    X86_AT(c, 0x92492u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 092495  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x92495u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 092498  mov al, byte ptr [eax]
    X86_AT(c, 0x92498u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 09249a  mov byte ptr [ebp - 9], al
    X86_AT(c, 0x9249au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
L_9249d:
    X86_TICK(c, 12);
    // 09249d  cmp byte ptr [ebp - 9], 0
    X86_AT(c, 0x9249du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 0924a1  jne 0x92429
    X86_AT(c, 0x924a1u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x92429u); goto L_92429; }
    X86_TICK(c, 7);
    // 0924a3  and bl, bl
    X86_AT(c, 0x924a3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0924a5  jne 0x924b2
    X86_AT(c, 0x924a5u);
    if (x86_cc(c, 5)) { goto L_924b2; }
L_924a7:
    X86_TICK(c, 9);
    // 0924a7  mov word ptr [0x8a96e], 1
    X86_AT(c, 0x924a7u);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), 0x1u);
    // 0924b0  jmp 0x9250e
    X86_AT(c, 0x924b0u);
    goto L_9250e;
L_924b2:
    X86_TICK(c, 12);
    // 0924b2  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x924b2u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0924b6  jne 0x924cc
    X86_AT(c, 0x924b6u);
    if (x86_cc(c, 5)) { goto L_924cc; }
    X86_TICK(c, 29);
    // 0924b8  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x924b8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0924bb  cmp byte ptr [eax], 0
    X86_AT(c, 0x924bbu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0924be  mov al, byte ptr [edi]
    X86_AT(c, 0x924beu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 0924c0  push eax
    X86_AT(c, 0x924c0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0924c1  push dword ptr [ebp + 8]
    X86_AT(c, 0x924c1u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0924c4  call 0x94790
    X86_AT(c, 0x924c4u);
    push32(c, 0x924c9u); x86_call_known(c, 0x94790u, f_00094790); X86_RET(c, 0x924c9u);
    X86_TICK(c, 2);
    // 0924c9  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x924c9u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
L_924cc:
    X86_TICK(c, 16);
    // 0924cc  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0x924ccu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0924cf  cmp byte ptr [eax], 0
    X86_AT(c, 0x924cfu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 0924d2  je 0x924de
    X86_AT(c, 0x924d2u);
    if (x86_cc(c, 4)) { goto L_924de; }
    X86_TICK(c, 12);
    // 0924d4  cmp word ptr [0x8a96e], 2
    X86_AT(c, 0x924d4u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A96Eu))), 0x2u, 0, 2);
    // 0924dc  je 0x924e4
    X86_AT(c, 0x924dcu);
    if (x86_cc(c, 4)) { goto L_924e4; }
L_924de:
    X86_TICK(c, 12);
    // 0924de  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x924deu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0924e2  je 0x92504
    X86_AT(c, 0x924e2u);
    if (x86_cc(c, 4)) { goto L_92504; }
L_924e4:
    X86_TICK(c, 20);
    // 0924e4  sub eax, eax
    X86_AT(c, 0x924e4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0924e6  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x924e6u);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
    // 0924ec  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x924ecu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0924ef  cmp byte ptr [edx], 0
    X86_AT(c, 0x924efu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0x0u, 0, 1);
    // 0924f2  je 0x924f7
    X86_AT(c, 0x924f2u);
    if (x86_cc(c, 4)) { goto L_924f7; }
    X86_TICK(c, 9);
    // 0924f4  push eax
    X86_AT(c, 0x924f4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0924f5  jmp 0x924f9
    X86_AT(c, 0x924f5u);
    goto L_924f9;
L_924f7:
    X86_TICK(c, 2);
    // 0924f7  push 0
    X86_AT(c, 0x924f7u);
    { uint32_t v = 0x0u; push32(c, v); }
L_924f9:
    X86_TICK(c, 12);
    // 0924f9  push dword ptr [ebp + 8]
    X86_AT(c, 0x924f9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0924fc  call 0x94768
    X86_AT(c, 0x924fcu);
    push32(c, 0x92501u); x86_call_known(c, 0x94768u, f_00094768); X86_RET(c, 0x92501u);
    X86_TICK(c, 2);
    // 092501  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x92501u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
L_92504:
    X86_TICK(c, 12);
    // 092504  cmp word ptr [0x8a96e], 0
    X86_AT(c, 0x92504u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A96Eu))), 0x0u, 0, 2);
    // 09250c  je 0x92513
    X86_AT(c, 0x9250cu);
    if (x86_cc(c, 4)) { goto L_92513; }
L_9250e:
    X86_TICK(c, 9);
    // 09250e  mov byte ptr [esi], 1
    X86_AT(c, 0x9250eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), 0x1u);
    // 092511  jmp 0x9251d
    X86_AT(c, 0x92511u);
    goto L_9251d;
L_92513:
    X86_TICK(c, 6);
    // 092513  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0x92513u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 092517  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x92517u);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
L_9251d:
    X86_TICK(c, 32);
    // 09251d  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0x9251du);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 092520  pop edi
    X86_AT(c, 0x92520u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092521  pop esi
    X86_AT(c, 0x92521u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092522  pop ebx
    X86_AT(c, 0x92522u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092523  leave 
    X86_AT(c, 0x92523u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092524  ret 0x1c
    X86_AT(c, 0x92524u);
    c.eip = pop32(c); c.r[4] += 0x1Cu; return;
    x86_fault(c, 0x923e8u, "ran off the end of a function");
}
void f_00092538(X86Cpu& c) {
    X86_TICK(c, 15);
    // 092538  enter 4, 0
    X86_AT(c, 0x92538u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 09253c  sub ecx, ecx
    X86_AT(c, 0x9253cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 09253e  jmp 0x92555
    X86_AT(c, 0x9253eu);
    goto L_92555;
L_92540:
    X86_TICK(c, 16);
    // 092540  lea eax, [ecx + ecx*4]
    X86_AT(c, 0x92540u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 092543  lea eax, [eax*4]
    X86_AT(c, 0x92543u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 09254a  cmp word ptr [eax + 0x8a71c], 0
    X86_AT(c, 0x9254au);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8A71Cu))), 0x0u, 0, 2);
    // 092552  je 0x9255a
    X86_AT(c, 0x92552u);
    if (x86_cc(c, 4)) { goto L_9255a; }
    X86_TICK(c, 2);
    // 092554  inc ecx
    X86_AT(c, 0x92554u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_92555:
    X86_TICK(c, 7);
    // 092555  cmp ecx, 0x19
    X86_AT(c, 0x92555u);
    (void)x86_sub(c, c.r[1], 0x19u, 0, 4);
    // 092558  jbe 0x92540
    X86_AT(c, 0x92558u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x92540u); goto L_92540; }
L_9255a:
    X86_TICK(c, 7);
    // 09255a  cmp ecx, 0x19
    X86_AT(c, 0x9255au);
    (void)x86_sub(c, c.r[1], 0x19u, 0, 4);
    // 09255d  jbe 0x92571
    X86_AT(c, 0x9255du);
    if (x86_cc(c, 6)) { goto L_92571; }
    X86_TICK(c, 11);
    // 09255f  mov word ptr [0x8a96e], 4
    X86_AT(c, 0x9255fu);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), 0x4u);
    // 092568  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x92568u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 09256f  jmp 0x92583
    X86_AT(c, 0x9256fu);
    goto L_92583;
L_92571:
    X86_TICK(c, 8);
    // 092571  lea eax, [ecx + ecx*4]
    X86_AT(c, 0x92571u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 092574  lea eax, [eax*4]
    X86_AT(c, 0x92574u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 09257b  add eax, 0x8a710
    X86_AT(c, 0x9257bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8A710u, 0, 4); }
    // 092580  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92580u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_92583:
    X86_TICK(c, 20);
    // 092583  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92583u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092586  leave 
    X86_AT(c, 0x92586u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092587  ret 
    X86_AT(c, 0x92587u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92538u, "ran off the end of a function");
}
void f_00092598(X86Cpu& c) {
    X86_TICK(c, 30);
    // 092598  push ebp
    X86_AT(c, 0x92598u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 092599  mov ebp, esp
    X86_AT(c, 0x92599u);
    c.r[5] = c.r[4];
    // 09259b  push ebx
    X86_AT(c, 0x9259bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09259c  push edi
    X86_AT(c, 0x9259cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09259d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x9259du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0925a0  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x925a0u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 0925a3  mov byte ptr [edi + 0xe], al
    X86_AT(c, 0x925a3u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu)), g8(c, 0));
    // 0925a6  cmp byte ptr [ebp + 0x10], 0
    X86_AT(c, 0x925a6u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 0925aa  jne 0x925b4
    X86_AT(c, 0x925aau);
    if (x86_cc(c, 5)) { goto L_925b4; }
    X86_TICK(c, 9);
    // 0925ac  mov word ptr [edi + 0xc], 2
    X86_AT(c, 0x925acu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x2u);
    // 0925b2  jmp 0x925c8
    X86_AT(c, 0x925b2u);
    goto L_925c8;
L_925b4:
    X86_TICK(c, 12);
    // 0925b4  cmp byte ptr [ebp + 0x10], 1
    X86_AT(c, 0x925b4u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0925b8  jne 0x925c2
    X86_AT(c, 0x925b8u);
    if (x86_cc(c, 5)) { goto L_925c2; }
    X86_TICK(c, 9);
    // 0925ba  mov word ptr [edi + 0xc], 4
    X86_AT(c, 0x925bau);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x4u);
    // 0925c0  jmp 0x925c8
    X86_AT(c, 0x925c0u);
    goto L_925c8;
L_925c2:
    X86_TICK(c, 2);
    // 0925c2  mov word ptr [edi + 0xc], 6
    X86_AT(c, 0x925c2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x6u);
L_925c8:
    X86_TICK(c, 12);
    // 0925c8  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0x925c8u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0925cc  je 0x925d2
    X86_AT(c, 0x925ccu);
    if (x86_cc(c, 4)) { goto L_925d2; }
    X86_TICK(c, 7);
    // 0925ce  or byte ptr [edi + 0xc], 8
    X86_AT(c, 0x925ceu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
L_925d2:
    X86_TICK(c, 12);
    // 0925d2  cmp byte ptr [ebp + 0x18], 0
    X86_AT(c, 0x925d2u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 1);
    // 0925d6  je 0x925dc
    X86_AT(c, 0x925d6u);
    if (x86_cc(c, 4)) { goto L_925dc; }
    X86_TICK(c, 7);
    // 0925d8  or byte ptr [edi + 0xc], 0x40
    X86_AT(c, 0x925d8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_925dc:
    X86_TICK(c, 12);
    // 0925dc  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x925dcu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0925df  call 0x94eb0
    X86_AT(c, 0x925dfu);
    push32(c, 0x925e4u); x86_call_known(c, 0x94eb0u, f_00094eb0); X86_RET(c, 0x925e4u);
    X86_TICK(c, 10);
    // 0925e4  xchg ebx, eax
    X86_AT(c, 0x925e4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0925e5  cmp bl, 1
    X86_AT(c, 0x925e5u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0925e8  je 0x925ef
    X86_AT(c, 0x925e8u);
    if (x86_cc(c, 4)) { goto L_925ef; }
    X86_TICK(c, 7);
    // 0925ea  cmp bl, 2
    X86_AT(c, 0x925eau);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0925ed  jne 0x925f3
    X86_AT(c, 0x925edu);
    if (x86_cc(c, 5)) { goto L_925f3; }
L_925ef:
    X86_TICK(c, 2);
    // 0925ef  mov byte ptr [ebp + 0x1c], 0
    X86_AT(c, 0x925efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), 0x0u);
L_925f3:
    X86_TICK(c, 12);
    // 0925f3  cmp byte ptr [ebp + 0x1c], 0
    X86_AT(c, 0x925f3u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))), 0x0u, 0, 1);
    // 0925f7  je 0x925fd
    X86_AT(c, 0x925f7u);
    if (x86_cc(c, 4)) { goto L_925fd; }
    X86_TICK(c, 7);
    // 0925f9  or byte ptr [edi + 0xc], 1
    X86_AT(c, 0x925f9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_925fd:
    X86_TICK(c, 12);
    // 0925fd  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0x925fdu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 092601  je 0x9260f
    X86_AT(c, 0x92601u);
    if (x86_cc(c, 4)) { goto L_9260f; }
    X86_TICK(c, 16);
    // 092603  push 2
    X86_AT(c, 0x92603u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 092605  push 0
    X86_AT(c, 0x92605u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 092607  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x92607u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 09260a  call 0x94ef8
    X86_AT(c, 0x9260au);
    push32(c, 0x9260fu); x86_call_known(c, 0x94ef8u, f_00094ef8); X86_RET(c, 0x9260fu);
L_9260f:
    X86_TICK(c, 24);
    // 09260f  pop edi
    X86_AT(c, 0x9260fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092610  pop ebx
    X86_AT(c, 0x92610u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092611  leave 
    X86_AT(c, 0x92611u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092612  ret 0x18
    X86_AT(c, 0x92612u);
    c.eip = pop32(c); c.r[4] += 0x18u; return;
    x86_fault(c, 0x92598u, "ran off the end of a function");
}
void f_0009261c(X86Cpu& c) {
    X86_TICK(c, 63);
    // 09261c  enter 0xc, 0
    X86_AT(c, 0x9261cu);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 092620  push ebx
    X86_AT(c, 0x92620u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092621  test byte ptr [0x8a99c], 1
    X86_AT(c, 0x92621u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A99Cu))) & 0x1u, 1);
    // 092628  setne al
    X86_AT(c, 0x92628u);
    s8(c, 0, x86_cc(c, 5) ? 1u : 0u);
    // 09262b  xchg ebx, eax
    X86_AT(c, 0x9262bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 09262c  xor bl, 1
    X86_AT(c, 0x9262cu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ 0x1u, 1)); }
    // 09262f  mov byte ptr [ebp - 8], bl
    X86_AT(c, 0x9262fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), g8(c, 3));
    // 092632  lea ebx, [ebp - 0xa]
    X86_AT(c, 0x92632u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF6u);
    // 092635  push ebx
    X86_AT(c, 0x92635u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092636  lea eax, [ebp - 8]
    X86_AT(c, 0x92636u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 092639  push eax
    X86_AT(c, 0x92639u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09263a  lea eax, [ebp - 7]
    X86_AT(c, 0x9263au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF9u);
    // 09263d  push eax
    X86_AT(c, 0x9263du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09263e  lea eax, [ebp - 6]
    X86_AT(c, 0x9263eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFAu);
    // 092641  push eax
    X86_AT(c, 0x92641u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092642  lea eax, [ebp - 5]
    X86_AT(c, 0x92642u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 092645  push eax
    X86_AT(c, 0x92645u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092646  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x92646u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 092649  push dword ptr [ebp + 8]
    X86_AT(c, 0x92649u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 09264c  call 0x923e8
    X86_AT(c, 0x9264cu);
    push32(c, 0x92651u); x86_call_known(c, 0x923e8u, f_000923e8); X86_RET(c, 0x92651u);
    X86_TICK(c, 14);
    // 092651  mov byte ptr [ebp - 9], al
    X86_AT(c, 0x92651u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 092654  cmp byte ptr [ebx], 0
    X86_AT(c, 0x92654u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0x0u, 0, 1);
    // 092657  je 0x92662
    X86_AT(c, 0x92657u);
    if (x86_cc(c, 4)) { goto L_92662; }
    X86_TICK(c, 9);
    // 092659  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x92659u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 092660  jmp 0x9266a
    X86_AT(c, 0x92660u);
    goto L_9266a;
L_92662:
    X86_TICK(c, 7);
    // 092662  call 0x92538
    X86_AT(c, 0x92662u);
    push32(c, 0x92667u); x86_call_known(c, 0x92538u, f_00092538); X86_RET(c, 0x92667u);
    X86_TICK(c, 2);
    // 092667  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92667u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_9266a:
    X86_TICK(c, 12);
    // 09266a  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x9266au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 09266e  je 0x92695
    X86_AT(c, 0x9266eu);
    if (x86_cc(c, 4)) { goto L_92695; }
    X86_TICK(c, 37);
    // 092670  push dword ptr [ebp - 5]
    X86_AT(c, 0x92670u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))); push32(c, v); }
    // 092673  push dword ptr [ebp - 8]
    X86_AT(c, 0x92673u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 092676  push dword ptr [ebp - 7]
    X86_AT(c, 0x92676u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u))); push32(c, v); }
    // 092679  push dword ptr [ebp - 6]
    X86_AT(c, 0x92679u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))); push32(c, v); }
    // 09267c  push dword ptr [ebp - 9]
    X86_AT(c, 0x9267cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))); push32(c, v); }
    // 09267f  push dword ptr [ebp - 4]
    X86_AT(c, 0x9267fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 092682  call 0x92598
    X86_AT(c, 0x92682u);
    push32(c, 0x92687u); x86_call_known(c, 0x92598u, f_00092598); X86_RET(c, 0x92687u);
    X86_TICK(c, 13);
    // 092687  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0x92687u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09268a  or byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x9268au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 09268e  mov dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x9268eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0xFFFFFFFFu);
L_92695:
    X86_TICK(c, 24);
    // 092695  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92695u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092698  pop ebx
    X86_AT(c, 0x92698u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092699  leave 
    X86_AT(c, 0x92699u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09269a  ret 
    X86_AT(c, 0x9269au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9261cu, "ran off the end of a function");
}
void f_000926b0(X86Cpu& c) {
    X86_TICK(c, 44);
    // 0926b0  enter 0x14, 0
    X86_AT(c, 0x926b0u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 0926b4  push ebx
    X86_AT(c, 0x926b4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0926b5  push esi
    X86_AT(c, 0x926b5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0926b6  push edi
    X86_AT(c, 0x926b6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0926b7  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x926b7u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0926ba  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x926bau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0926c1  mov ax, word ptr [0x8a96e]
    X86_AT(c, 0x926c1u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A96Eu))));
    // 0926c7  mov word ptr [ebp - 0xa], ax
    X86_AT(c, 0x926c7u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), (c.r[0] & 0xFFFFu));
    // 0926cb  mov word ptr [0x8a96e], 0
    X86_AT(c, 0x926cbu);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), 0x0u);
    // 0926d4  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x926d4u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0926d7  sub esi, esi
    X86_AT(c, 0x926d7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0926d9  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x926d9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 0926dd  jne 0x92787
    X86_AT(c, 0x926ddu);
    if (x86_cc(c, 5)) { goto L_92787; }
    X86_TICK(c, 12);
    // 0926e3  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x926e3u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0926e7  jne 0x9277a
    X86_AT(c, 0x926e7u);
    if (x86_cc(c, 5)) { goto L_9277a; }
    X86_TICK(c, 20);
    // 0926ed  push edi
    X86_AT(c, 0x926edu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0926ee  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x926eeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0926f1  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x926f1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0926f4  push eax
    X86_AT(c, 0x926f4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0926f5  call 0x94e4c
    X86_AT(c, 0x926f5u);
    push32(c, 0x926fau); x86_call_known(c, 0x94e4cu, f_00094e4c); X86_RET(c, 0x926fau);
    X86_TICK(c, 9);
    // 0926fa  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x926fau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0926fd  jmp 0x9296c
    X86_AT(c, 0x926fdu);
    goto L_9296c;
L_92702:
    X86_TICK(c, 32);
    // 092702  mov edx, edi
    X86_AT(c, 0x92702u);
    c.r[2] = c.r[7];
    // 092704  mov al, 0xa
    X86_AT(c, 0x92704u);
    s8(c, 0, 0xAu);
    // 092706  mov ecx, esi
    X86_AT(c, 0x92706u);
    c.r[1] = c.r[6];
    // 092708  add ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92708u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 09270b  push edi
    X86_AT(c, 0x9270bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09270c  mov edi, ecx
    X86_AT(c, 0x9270cu);
    c.r[7] = c.r[1];
    // 09270e  mov dword ptr [ebp - 0x14], ecx
    X86_AT(c, 0x9270eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[1]);
    // 092711  mov ecx, edx
    X86_AT(c, 0x92711u);
    c.r[1] = c.r[2];
    // 092713  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92713u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092715  jne 0x9271a
    X86_AT(c, 0x92715u);
    if (x86_cc(c, 5)) { goto L_9271a; }
    X86_TICK(c, 4);
    // 092717  inc ecx
    X86_AT(c, 0x92717u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092718  sub edx, ecx
    X86_AT(c, 0x92718u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_9271a:
    X86_TICK(c, 13);
    // 09271a  pop edi
    X86_AT(c, 0x9271au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09271b  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x9271bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 09271f  and dx, dx
    X86_AT(c, 0x9271fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & (c.r[2] & 0xFFFFu), 2)); }
    // 092722  je 0x9274c
    X86_AT(c, 0x92722u);
    if (x86_cc(c, 4)) { goto L_9274c; }
    X86_TICK(c, 23);
    // 092724  movsx edx, dx
    X86_AT(c, 0x92724u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 092727  push edx
    X86_AT(c, 0x92727u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 092728  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x92728u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 09272b  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x9272bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 09272e  push eax
    X86_AT(c, 0x9272eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09272f  call 0x94e4c
    X86_AT(c, 0x9272fu);
    push32(c, 0x92734u); x86_call_known(c, 0x94e4cu, f_00094e4c); X86_RET(c, 0x92734u);
    X86_TICK(c, 22);
    // 092734  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0x92734u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 092737  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x92737u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 09273a  movsx edx, word ptr [ebx + 0x10]
    X86_AT(c, 0x9273au);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09273e  cmp edx, eax
    X86_AT(c, 0x9273eu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092740  jne 0x9296c
    X86_AT(c, 0x92740u);
    if (x86_cc(c, 5)) { goto L_9296c; }
    X86_TICK(c, 12);
    // 092746  add esi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x92746u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 092749  sub edi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x92749u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
L_9274c:
    X86_TICK(c, 7);
    // 09274c  and edi, edi
    X86_AT(c, 0x9274cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 09274e  jbe 0x9277a
    X86_AT(c, 0x9274eu);
    if (x86_cc(c, 6)) { goto L_9277a; }
    X86_TICK(c, 23);
    // 092750  movzx eax, word ptr [0x8a5dc]
    X86_AT(c, 0x92750u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A5DCu)));
    // 092757  push eax
    X86_AT(c, 0x92757u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092758  push 0x8a5de
    X86_AT(c, 0x92758u);
    { uint32_t v = 0x8A5DEu; push32(c, v); }
    // 09275d  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x9275du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092760  push eax
    X86_AT(c, 0x92760u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092761  call 0x94e4c
    X86_AT(c, 0x92761u);
    push32(c, 0x92766u); x86_call_known(c, 0x94e4cu, f_00094e4c); X86_RET(c, 0x92766u);
    X86_TICK(c, 13);
    // 092766  movzx edx, word ptr [0x8a5dc]
    X86_AT(c, 0x92766u);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(0x8A5DCu)));
    // 09276d  cmp edx, eax
    X86_AT(c, 0x9276du);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 09276f  jne 0x9296c
    X86_AT(c, 0x9276fu);
    if (x86_cc(c, 5)) { goto L_9296c; }
    X86_TICK(c, 10);
    // 092775  inc dword ptr [ebp - 4]
    X86_AT(c, 0x92775u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 092778  inc esi
    X86_AT(c, 0x92778u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 092779  dec edi
    X86_AT(c, 0x92779u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
L_9277a:
    X86_TICK(c, 7);
    // 09277a  and edi, edi
    X86_AT(c, 0x9277au);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 09277c  jbe 0x9296c
    X86_AT(c, 0x9277cu);
    if (x86_cc(c, 6)) { goto L_9296c; }
    X86_TICK(c, 7);
    // 092782  jmp 0x92702
    X86_AT(c, 0x92782u);
    X86_POLL(c, 0x92702u); goto L_92702;
L_92787:
    X86_TICK(c, 12);
    // 092787  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x92787u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 09278b  jne 0x92794
    X86_AT(c, 0x9278bu);
    if (x86_cc(c, 5)) { goto L_92794; }
    X86_TICK(c, 2);
    // 09278d  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0x9278du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
L_92794:
    X86_TICK(c, 12);
    // 092794  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x92794u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 092798  jne 0x92964
    X86_AT(c, 0x92798u);
    if (x86_cc(c, 5)) { goto L_92964; }
    X86_TICK(c, 11);
    // 09279e  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x9279eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0927a1  cmp eax, 0x200
    X86_AT(c, 0x927a1u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 0927a6  jge 0x92805
    X86_AT(c, 0x927a6u);
    if (x86_cc(c, 13)) { goto L_92805; }
    X86_TICK(c, 9);
    // 0927a8  mov edx, edi
    X86_AT(c, 0x927a8u);
    c.r[2] = c.r[7];
    // 0927aa  cmp edx, eax
    X86_AT(c, 0x927aau);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0927ac  jl 0x927af
    X86_AT(c, 0x927acu);
    if (x86_cc(c, 12)) { goto L_927af; }
    X86_TICK(c, 3);
    // 0927ae  xchg edx, eax
    X86_AT(c, 0x927aeu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_927af:
    X86_TICK(c, 50);
    // 0927af  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0x927afu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0927b2  mov ecx, edx
    X86_AT(c, 0x927b2u);
    c.r[1] = c.r[2];
    // 0927b4  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x927b4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0927b7  mov edx, dword ptr [ebx]
    X86_AT(c, 0x927b7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0927b9  push esi
    X86_AT(c, 0x927b9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0927ba  push edi
    X86_AT(c, 0x927bau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0927bb  mov esi, eax
    X86_AT(c, 0x927bbu);
    c.r[6] = c.r[0];
    // 0927bd  mov edi, edx
    X86_AT(c, 0x927bdu);
    c.r[7] = c.r[2];
    // 0927bf  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x927bfu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0927c1  pop edi
    X86_AT(c, 0x927c1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0927c2  pop esi
    X86_AT(c, 0x927c2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0927c3  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x927c3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0927c6  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x927c6u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 0927c9  jne 0x927f5
    X86_AT(c, 0x927c9u);
    if (x86_cc(c, 5)) { goto L_927f5; }
    X86_TICK(c, 20);
    // 0927cb  push 0x200
    X86_AT(c, 0x927cbu);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0927d0  push dword ptr [ebx + 8]
    X86_AT(c, 0x927d0u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0927d3  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x927d3u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0927d6  push eax
    X86_AT(c, 0x927d6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0927d7  call 0x94e4c
    X86_AT(c, 0x927d7u);
    push32(c, 0x927dcu); x86_call_known(c, 0x94e4cu, f_00094e4c); X86_RET(c, 0x927dcu);
    X86_TICK(c, 7);
    // 0927dc  cmp eax, 0x200
    X86_AT(c, 0x927dcu);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 0927e1  jne 0x9296c
    X86_AT(c, 0x927e1u);
    if (x86_cc(c, 5)) { goto L_9296c; }
    X86_TICK(c, 15);
    // 0927e7  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0x927e7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
    // 0927ee  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x927eeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0927f1  mov dword ptr [ebx], eax
    X86_AT(c, 0x927f1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0927f3  jmp 0x927fd
    X86_AT(c, 0x927f3u);
    goto L_927fd;
L_927f5:
    X86_TICK(c, 18);
    // 0927f5  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x927f5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0927f8  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x927f8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0927fb  add dword ptr [ebx], eax
    X86_AT(c, 0x927fbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_927fd:
    X86_TICK(c, 13);
    // 0927fd  mov esi, dword ptr [ebp - 8]
    X86_AT(c, 0x927fdu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 092800  sub edi, esi
    X86_AT(c, 0x92800u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 092802  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x92802u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_92805:
    X86_TICK(c, 7);
    // 092805  cmp edi, 0x200
    X86_AT(c, 0x92805u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 09280b  jbe 0x9283b
    X86_AT(c, 0x9280bu);
    if (x86_cc(c, 6)) { goto L_9283b; }
    X86_TICK(c, 35);
    // 09280d  mov eax, edi
    X86_AT(c, 0x9280du);
    c.r[0] = c.r[7];
    // 09280f  shr eax, 9
    X86_AT(c, 0x9280fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 092812  shl eax, 9
    X86_AT(c, 0x92812u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 092815  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x92815u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 092818  push eax
    X86_AT(c, 0x92818u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092819  mov edx, esi
    X86_AT(c, 0x92819u);
    c.r[2] = c.r[6];
    // 09281b  add edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9281bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 09281e  push edx
    X86_AT(c, 0x9281eu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 09281f  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0x9281fu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092822  push edx
    X86_AT(c, 0x92822u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 092823  call 0x94e4c
    X86_AT(c, 0x92823u);
    push32(c, 0x92828u); x86_call_known(c, 0x94e4cu, f_00094e4c); X86_RET(c, 0x92828u);
    X86_TICK(c, 11);
    // 092828  cmp eax, dword ptr [ebp - 8]
    X86_AT(c, 0x92828u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4);
    // 09282b  jne 0x9296c
    X86_AT(c, 0x9282bu);
    if (x86_cc(c, 5)) { goto L_9296c; }
    X86_TICK(c, 15);
    // 092831  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x92831u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 092834  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x92834u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092837  add esi, eax
    X86_AT(c, 0x92837u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 092839  sub edi, eax
    X86_AT(c, 0x92839u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
L_9283b:
    X86_TICK(c, 7);
    // 09283b  and edi, edi
    X86_AT(c, 0x9283bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 09283d  jbe 0x9296c
    X86_AT(c, 0x9283du);
    if (x86_cc(c, 6)) { goto L_9296c; }
    X86_TICK(c, 65);
    // 092843  mov ecx, edi
    X86_AT(c, 0x92843u);
    c.r[1] = c.r[7];
    // 092845  mov eax, esi
    X86_AT(c, 0x92845u);
    c.r[0] = c.r[6];
    // 092847  add eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92847u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 09284a  mov edx, dword ptr [ebx]
    X86_AT(c, 0x9284au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 09284c  push esi
    X86_AT(c, 0x9284cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09284d  push edi
    X86_AT(c, 0x9284du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09284e  mov esi, eax
    X86_AT(c, 0x9284eu);
    c.r[6] = c.r[0];
    // 092850  mov edi, edx
    X86_AT(c, 0x92850u);
    c.r[7] = c.r[2];
    // 092852  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92852u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092854  pop edi
    X86_AT(c, 0x92854u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092855  pop esi
    X86_AT(c, 0x92855u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092856  sub dword ptr [ebx + 4], edi
    X86_AT(c, 0x92856u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 092859  add dword ptr [ebx], edi
    X86_AT(c, 0x92859u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 09285b  add dword ptr [ebp - 4], edi
    X86_AT(c, 0x9285bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 09285e  jmp 0x9296c
    X86_AT(c, 0x9285eu);
    goto L_9296c;
L_92863:
    X86_TICK(c, 9);
    // 092863  mov byte ptr [ebp - 0xc], 0
    X86_AT(c, 0x92863u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 092867  jmp 0x92914
    X86_AT(c, 0x92867u);
    goto L_92914;
L_9286c:
    X86_TICK(c, 11);
    // 09286c  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x9286cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 09286f  cmp eax, edi
    X86_AT(c, 0x9286fu);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 092871  jl 0x92875
    X86_AT(c, 0x92871u);
    if (x86_cc(c, 12)) { goto L_92875; }
    X86_TICK(c, 2);
    // 092873  mov eax, edi
    X86_AT(c, 0x92873u);
    c.r[0] = c.r[7];
L_92875:
    X86_TICK(c, 31);
    // 092875  xchg edx, eax
    X86_AT(c, 0x92875u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 092876  mov al, 0xa
    X86_AT(c, 0x92876u);
    s8(c, 0, 0xAu);
    // 092878  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92878u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09287b  add ecx, esi
    X86_AT(c, 0x9287bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[6], 0, 4); }
    // 09287d  push edi
    X86_AT(c, 0x9287du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09287e  mov edi, ecx
    X86_AT(c, 0x9287eu);
    c.r[7] = c.r[1];
    // 092880  mov dword ptr [ebp - 0x14], ecx
    X86_AT(c, 0x92880u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[1]);
    // 092883  mov ecx, edx
    X86_AT(c, 0x92883u);
    c.r[1] = c.r[2];
    // 092885  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92885u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092887  jne 0x9288c
    X86_AT(c, 0x92887u);
    if (x86_cc(c, 5)) { goto L_9288c; }
    X86_TICK(c, 4);
    // 092889  inc ecx
    X86_AT(c, 0x92889u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 09288a  sub edx, ecx
    X86_AT(c, 0x9288au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_9288c:
    X86_TICK(c, 83);
    // 09288c  pop edi
    X86_AT(c, 0x9288cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09288d  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x9288du);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 092891  mov ecx, edx
    X86_AT(c, 0x92891u);
    c.r[1] = c.r[2];
    // 092893  movsx ecx, cx
    X86_AT(c, 0x92893u);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[1] & 0xFFFFu);
    // 092896  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x92896u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 092899  mov edx, dword ptr [ebx]
    X86_AT(c, 0x92899u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 09289b  push esi
    X86_AT(c, 0x9289bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09289c  push edi
    X86_AT(c, 0x9289cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09289d  mov esi, eax
    X86_AT(c, 0x9289du);
    c.r[6] = c.r[0];
    // 09289f  mov edi, edx
    X86_AT(c, 0x9289fu);
    c.r[7] = c.r[2];
    // 0928a1  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x928a1u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0928a3  pop edi
    X86_AT(c, 0x928a3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0928a4  pop esi
    X86_AT(c, 0x928a4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0928a5  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x928a5u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0928a9  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x928a9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0928ac  add esi, eax
    X86_AT(c, 0x928acu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0928ae  add dword ptr [ebx], eax
    X86_AT(c, 0x928aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0928b0  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x928b0u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0928b4  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x928b4u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0928b7  mov ecx, edi
    X86_AT(c, 0x928b7u);
    c.r[1] = c.r[7];
    // 0928b9  cmp ecx, edx
    X86_AT(c, 0x928b9u);
    (void)x86_sub(c, c.r[1], c.r[2], 0, 4);
    // 0928bb  jl 0x928bf
    X86_AT(c, 0x928bbu);
    if (x86_cc(c, 12)) { goto L_928bf; }
    X86_TICK(c, 2);
    // 0928bd  mov ecx, edx
    X86_AT(c, 0x928bdu);
    c.r[1] = c.r[2];
L_928bf:
    X86_TICK(c, 7);
    // 0928bf  cmp ecx, eax
    X86_AT(c, 0x928bfu);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 0928c1  jle 0x9290b
    X86_AT(c, 0x928c1u);
    if (x86_cc(c, 14)) { goto L_9290b; }
    X86_TICK(c, 15);
    // 0928c3  sub edx, eax
    X86_AT(c, 0x928c3u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0928c5  movzx eax, word ptr [0x8a5dc]
    X86_AT(c, 0x928c5u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A5DCu)));
    // 0928cc  cmp eax, edx
    X86_AT(c, 0x928ccu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0928ce  jle 0x928db
    X86_AT(c, 0x928ceu);
    if (x86_cc(c, 14)) { goto L_928db; }
    X86_TICK(c, 15);
    // 0928d0  mov eax, dword ptr [ebx]
    X86_AT(c, 0x928d0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0928d2  mov byte ptr [eax], 0xd
    X86_AT(c, 0x928d2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xDu);
    // 0928d5  mov byte ptr [ebp - 0xc], 1
    X86_AT(c, 0x928d5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1u);
    // 0928d9  jmp 0x928f3
    X86_AT(c, 0x928d9u);
    goto L_928f3;
L_928db:
    X86_TICK(c, 35);
    // 0928db  movzx ecx, word ptr [0x8a5dc]
    X86_AT(c, 0x928dbu);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0x8A5DCu)));
    // 0928e2  mov eax, 0x8a5de
    X86_AT(c, 0x928e2u);
    c.r[0] = 0x8A5DEu;
    // 0928e7  mov edx, dword ptr [ebx]
    X86_AT(c, 0x928e7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0928e9  push esi
    X86_AT(c, 0x928e9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0928ea  push edi
    X86_AT(c, 0x928eau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0928eb  mov esi, eax
    X86_AT(c, 0x928ebu);
    c.r[6] = c.r[0];
    // 0928ed  mov edi, edx
    X86_AT(c, 0x928edu);
    c.r[7] = c.r[2];
    // 0928ef  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x928efu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0928f1  pop edi
    X86_AT(c, 0x928f1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0928f2  pop esi
    X86_AT(c, 0x928f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_928f3:
    X86_TICK(c, 36);
    // 0928f3  inc dword ptr [ebp - 4]
    X86_AT(c, 0x928f3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0928f6  inc esi
    X86_AT(c, 0x928f6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0928f7  dec edi
    X86_AT(c, 0x928f7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0928f8  movzx eax, word ptr [0x8a5dc]
    X86_AT(c, 0x928f8u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A5DCu)));
    // 0928ff  add dword ptr [ebx], eax
    X86_AT(c, 0x928ffu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092901  movzx eax, word ptr [0x8a5dc]
    X86_AT(c, 0x92901u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A5DCu)));
    // 092908  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x92908u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_9290b:
    X86_TICK(c, 15);
    // 09290b  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x9290bu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09290f  sub edi, eax
    X86_AT(c, 0x9290fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092911  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x92911u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_92914:
    X86_TICK(c, 12);
    // 092914  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x92914u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 092918  jle 0x92922
    X86_AT(c, 0x92918u);
    if (x86_cc(c, 14)) { goto L_92922; }
    X86_TICK(c, 7);
    // 09291a  and edi, edi
    X86_AT(c, 0x9291au);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 09291c  ja 0x9286c
    X86_AT(c, 0x9291cu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x9286cu); goto L_9286c; }
L_92922:
    X86_TICK(c, 7);
    // 092922  and edi, edi
    X86_AT(c, 0x92922u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092924  ja 0x92930
    X86_AT(c, 0x92924u);
    if (x86_cc(c, 7)) { goto L_92930; }
    X86_TICK(c, 7);
    // 092926  and edi, edi
    X86_AT(c, 0x92926u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092928  jne 0x92954
    X86_AT(c, 0x92928u);
    if (x86_cc(c, 5)) { goto L_92954; }
    X86_TICK(c, 12);
    // 09292a  cmp byte ptr [ebp - 0xc], 0
    X86_AT(c, 0x9292au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 1);
    // 09292e  je 0x92954
    X86_AT(c, 0x9292eu);
    if (x86_cc(c, 4)) { goto L_92954; }
L_92930:
    X86_TICK(c, 20);
    // 092930  push 0x200
    X86_AT(c, 0x92930u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 092935  push dword ptr [ebx + 8]
    X86_AT(c, 0x92935u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 092938  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92938u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 09293b  push eax
    X86_AT(c, 0x9293bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09293c  call 0x94e4c
    X86_AT(c, 0x9293cu);
    push32(c, 0x92941u); x86_call_known(c, 0x94e4cu, f_00094e4c); X86_RET(c, 0x92941u);
    X86_TICK(c, 7);
    // 092941  cmp eax, 0x200
    X86_AT(c, 0x92941u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 092946  jne 0x9296c
    X86_AT(c, 0x92946u);
    if (x86_cc(c, 5)) { goto L_9296c; }
    X86_TICK(c, 8);
    // 092948  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0x92948u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
    // 09294f  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x9294fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 092952  mov dword ptr [ebx], eax
    X86_AT(c, 0x92952u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_92954:
    X86_TICK(c, 12);
    // 092954  cmp byte ptr [ebp - 0xc], 0
    X86_AT(c, 0x92954u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 1);
    // 092958  je 0x92964
    X86_AT(c, 0x92958u);
    if (x86_cc(c, 4)) { goto L_92964; }
    X86_TICK(c, 18);
    // 09295a  mov eax, dword ptr [ebx]
    X86_AT(c, 0x9295au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 09295c  mov byte ptr [eax], 0xa
    X86_AT(c, 0x9295cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xAu);
    // 09295f  inc dword ptr [ebx]
    X86_AT(c, 0x9295fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 092961  dec dword ptr [ebx + 4]
    X86_AT(c, 0x92961u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_92964:
    X86_TICK(c, 7);
    // 092964  and edi, edi
    X86_AT(c, 0x92964u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092966  ja 0x92863
    X86_AT(c, 0x92966u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x92863u); goto L_92863; }
L_9296c:
    X86_TICK(c, 12);
    // 09296c  cmp word ptr [0x8a96e], 0
    X86_AT(c, 0x9296cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A96Eu))), 0x0u, 0, 2);
    // 092974  je 0x9297c
    X86_AT(c, 0x92974u);
    if (x86_cc(c, 4)) { goto L_9297c; }
    X86_TICK(c, 14);
    // 092976  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x92976u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 09297a  jmp 0x92986
    X86_AT(c, 0x9297au);
    goto L_92986;
L_9297c:
    X86_TICK(c, 6);
    // 09297c  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0x9297cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 092980  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x92980u);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
L_92986:
    X86_TICK(c, 32);
    // 092986  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92986u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092989  pop edi
    X86_AT(c, 0x92989u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09298a  pop esi
    X86_AT(c, 0x9298au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09298b  pop ebx
    X86_AT(c, 0x9298bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09298c  leave 
    X86_AT(c, 0x9298cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09298d  ret 0xc
    X86_AT(c, 0x9298du);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x926b0u, "ran off the end of a function");
}
void f_0009296c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 09296c  cmp word ptr [0x8a96e], 0
    X86_AT(c, 0x9296cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A96Eu))), 0x0u, 0, 2);
    // 092974  je 0x9297c
    X86_AT(c, 0x92974u);
    if (x86_cc(c, 4)) { goto L_9297c; }
    X86_TICK(c, 14);
    // 092976  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x92976u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 09297a  jmp 0x92986
    X86_AT(c, 0x9297au);
    goto L_92986;
L_9297c:
    X86_TICK(c, 6);
    // 09297c  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0x9297cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 092980  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x92980u);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
L_92986:
    X86_TICK(c, 32);
    // 092986  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92986u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092989  pop edi
    X86_AT(c, 0x92989u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09298a  pop esi
    X86_AT(c, 0x9298au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09298b  pop ebx
    X86_AT(c, 0x9298bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09298c  leave 
    X86_AT(c, 0x9298cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09298d  ret 0xc
    X86_AT(c, 0x9298du);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x9296cu, "ran off the end of a function");
}
void f_00092998(X86Cpu& c) {
    X86_TICK(c, 30);
    // 092998  enter 4, 0
    X86_AT(c, 0x92998u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 09299c  push ebx
    X86_AT(c, 0x9299cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09299d  push esi
    X86_AT(c, 0x9299du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09299e  push edi
    X86_AT(c, 0x9299eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09299f  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x9299fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0929a2  mov ebx, edi
    X86_AT(c, 0x929a2u);
    c.r[3] = c.r[7];
    // 0929a4  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x929a4u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 0929a8  jne 0x929ba
    X86_AT(c, 0x929a8u);
    if (x86_cc(c, 5)) { goto L_929ba; }
    X86_TICK(c, 18);
    // 0929aa  mov ax, 5
    X86_AT(c, 0x929aau);
    s16(c, 0, 0x5u);
    // 0929ae  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x929aeu);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
    // 0929b4  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x929b4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0929b8  jmp 0x929ed
    X86_AT(c, 0x929b8u);
    goto L_929ed;
L_929ba:
    X86_TICK(c, 12);
    // 0929ba  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x929bau);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 0929be  je 0x929c6
    X86_AT(c, 0x929beu);
    if (x86_cc(c, 4)) { goto L_929c6; }
    X86_TICK(c, 9);
    // 0929c0  push edi
    X86_AT(c, 0x929c0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0929c1  call 0x93920
    X86_AT(c, 0x929c1u);
    push32(c, 0x929c6u); x86_call_known(c, 0x93920u, f_00093920); X86_RET(c, 0x929c6u);
L_929c6:
    X86_TICK(c, 43);
    // 0929c6  or byte ptr [ebx + 0xd], 8
    X86_AT(c, 0x929c6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
    // 0929ca  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x929cau);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0929cd  imul eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x929cdu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 0929d1  xchg esi, eax
    X86_AT(c, 0x929d1u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0929d2  and esi, esi
    X86_AT(c, 0x929d2u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0929d4  jl 0x929de
    X86_AT(c, 0x929d4u);
    if (x86_cc(c, 12)) { goto L_929de; }
    X86_TICK(c, 7);
    // 0929d6  cmp esi, 0x7fffffff
    X86_AT(c, 0x929d6u);
    (void)x86_sub(c, c.r[6], 0x7FFFFFFFu, 0, 4);
    // 0929dc  jle 0x929e9
    X86_AT(c, 0x929dcu);
    if (x86_cc(c, 14)) { goto L_929e9; }
L_929de:
    X86_TICK(c, 9);
    // 0929de  mov word ptr [0x8a96e], 1
    X86_AT(c, 0x929deu);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), 0x1u);
    // 0929e7  jmp 0x929ed
    X86_AT(c, 0x929e7u);
    goto L_929ed;
L_929e9:
    X86_TICK(c, 7);
    // 0929e9  and esi, esi
    X86_AT(c, 0x929e9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0929eb  jne 0x929f1
    X86_AT(c, 0x929ebu);
    if (x86_cc(c, 5)) { goto L_929f1; }
L_929ed:
    X86_TICK(c, 9);
    // 0929ed  sub eax, eax
    X86_AT(c, 0x929edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0929ef  jmp 0x92a32
    X86_AT(c, 0x929efu);
    goto L_92a32;
L_929f1:
    X86_TICK(c, 12);
    // 0929f1  test byte ptr [ebx + 0xc], 8
    X86_AT(c, 0x929f1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x8u, 1);
    // 0929f5  je 0x92a04
    X86_AT(c, 0x929f5u);
    if (x86_cc(c, 4)) { goto L_92a04; }
    X86_TICK(c, 17);
    // 0929f7  push 2
    X86_AT(c, 0x929f7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0929f9  push 0
    X86_AT(c, 0x929f9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0929fb  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x929fbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0929fe  push eax
    X86_AT(c, 0x929feu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0929ff  call 0x94ef8
    X86_AT(c, 0x929ffu);
    push32(c, 0x92a04u); x86_call_known(c, 0x94ef8u, f_00094ef8); X86_RET(c, 0x92a04u);
L_92a04:
    X86_TICK(c, 16);
    // 092a04  push esi
    X86_AT(c, 0x92a04u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092a05  push dword ptr [ebp + 8]
    X86_AT(c, 0x92a05u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092a08  push edi
    X86_AT(c, 0x92a08u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092a09  call 0x926b0
    X86_AT(c, 0x92a09u);
    push32(c, 0x92a0eu); x86_call_known(c, 0x926b0u, f_000926b0); X86_RET(c, 0x92a0eu);
    X86_TICK(c, 56);
    // 092a0e  cdq 
    X86_AT(c, 0x92a0eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 092a0f  idiv dword ptr [ebp + 0xc]
    X86_AT(c, 0x92a0fu);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 4, 0x92a0fu);
    // 092a12  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92a12u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 092a15  test byte ptr [ebx + 0xc], 8
    X86_AT(c, 0x92a15u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x8u, 1);
    // 092a19  je 0x92a2f
    X86_AT(c, 0x92a19u);
    if (x86_cc(c, 4)) { goto L_92a2f; }
    X86_TICK(c, 9);
    // 092a1b  push edi
    X86_AT(c, 0x92a1bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092a1c  call 0x92a4c
    X86_AT(c, 0x92a1cu);
    push32(c, 0x92a21u); x86_call_known(c, 0x92a4cu, f_00092a4c); X86_RET(c, 0x92a21u);
    X86_TICK(c, 21);
    // 092a21  pop ecx
    X86_AT(c, 0x92a21u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 092a22  push 2
    X86_AT(c, 0x92a22u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 092a24  push 0
    X86_AT(c, 0x92a24u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 092a26  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92a26u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092a29  push eax
    X86_AT(c, 0x92a29u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092a2a  call 0x94ef8
    X86_AT(c, 0x92a2au);
    push32(c, 0x92a2fu); x86_call_known(c, 0x94ef8u, f_00094ef8); X86_RET(c, 0x92a2fu);
L_92a2f:
    X86_TICK(c, 4);
    // 092a2f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92a2fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_92a32:
    X86_TICK(c, 28);
    // 092a32  pop edi
    X86_AT(c, 0x92a32u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092a33  pop esi
    X86_AT(c, 0x92a33u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092a34  pop ebx
    X86_AT(c, 0x92a34u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092a35  leave 
    X86_AT(c, 0x92a35u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092a36  ret 
    X86_AT(c, 0x92a36u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92998u, "ran off the end of a function");
}
void f_00092a4c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 092a4c  enter 4, 0
    X86_AT(c, 0x92a4cu);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 092a50  push edi
    X86_AT(c, 0x92a50u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092a51  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x92a51u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 092a54  test byte ptr [edi + 0xc], 4
    X86_AT(c, 0x92a54u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x4u, 1);
    // 092a58  jne 0x92a71
    X86_AT(c, 0x92a58u);
    if (x86_cc(c, 5)) { goto L_92a71; }
    X86_TICK(c, 15);
    // 092a5a  mov ax, 1
    X86_AT(c, 0x92a5au);
    s16(c, 0, 0x1u);
    // 092a5e  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x92a5eu);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
    // 092a64  mov eax, 1
    X86_AT(c, 0x92a64u);
    c.r[0] = 0x1u;
    // 092a69  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92a69u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 092a6c  jmp 0x92b08
    X86_AT(c, 0x92a6cu);
    goto L_92b08;
L_92a71:
    X86_TICK(c, 12);
    // 092a71  test byte ptr [edi + 0xd], 8
    X86_AT(c, 0x92a71u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))) & 0x8u, 1);
    // 092a75  je 0x92a83
    X86_AT(c, 0x92a75u);
    if (x86_cc(c, 4)) { goto L_92a83; }
    X86_TICK(c, 12);
    // 092a77  cmp dword ptr [edi + 4], 0xffffffff
    X86_AT(c, 0x92a77u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 092a7b  je 0x92a83
    X86_AT(c, 0x92a7bu);
    if (x86_cc(c, 4)) { goto L_92a83; }
    X86_TICK(c, 12);
    // 092a7d  test byte ptr [edi + 0xc], 0x80
    X86_AT(c, 0x92a7du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x80u, 1);
    // 092a81  je 0x92a8a
    X86_AT(c, 0x92a81u);
    if (x86_cc(c, 4)) { goto L_92a8a; }
L_92a83:
    X86_TICK(c, 9);
    // 092a83  sub eax, eax
    X86_AT(c, 0x92a83u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092a85  jmp 0x92b0b
    X86_AT(c, 0x92a85u);
    goto L_92b0b;
L_92a8a:
    X86_TICK(c, 12);
    // 092a8a  test byte ptr [edi + 0xc], 1
    X86_AT(c, 0x92a8au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x1u, 1);
    // 092a8e  je 0x92b01
    X86_AT(c, 0x92a8eu);
    if (x86_cc(c, 4)) { goto L_92b01; }
    X86_TICK(c, 12);
    // 092a94  cmp dword ptr [edi + 4], 0x200
    X86_AT(c, 0x92a94u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0x200u, 0, 4);
    // 092a9b  jge 0x92b01
    X86_AT(c, 0x92a9bu);
    if (x86_cc(c, 13)) { goto L_92b01; }
    X86_TICK(c, 12);
    // 092a9d  test byte ptr [edi + 0xc], 8
    X86_AT(c, 0x92a9du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x8u, 1);
    // 092aa1  je 0x92ab0
    X86_AT(c, 0x92aa1u);
    if (x86_cc(c, 4)) { goto L_92ab0; }
    X86_TICK(c, 17);
    // 092aa3  push 2
    X86_AT(c, 0x92aa3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 092aa5  push 0
    X86_AT(c, 0x92aa5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 092aa7  mov al, byte ptr [edi + 0xe]
    X86_AT(c, 0x92aa7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu))));
    // 092aaa  push eax
    X86_AT(c, 0x92aaau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092aab  call 0x94ef8
    X86_AT(c, 0x92aabu);
    push32(c, 0x92ab0u); x86_call_known(c, 0x94ef8u, f_00094ef8); X86_RET(c, 0x92ab0u);
L_92ab0:
    X86_TICK(c, 28);
    // 092ab0  mov eax, 0x200
    X86_AT(c, 0x92ab0u);
    c.r[0] = 0x200u;
    // 092ab5  sub eax, dword ptr [edi + 4]
    X86_AT(c, 0x92ab5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4); }
    // 092ab8  push eax
    X86_AT(c, 0x92ab8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092ab9  push dword ptr [edi + 8]
    X86_AT(c, 0x92ab9u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))); push32(c, v); }
    // 092abc  mov al, byte ptr [edi + 0xe]
    X86_AT(c, 0x92abcu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu))));
    // 092abf  push eax
    X86_AT(c, 0x92abfu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092ac0  call 0x94e4c
    X86_AT(c, 0x92ac0u);
    push32(c, 0x92ac5u); x86_call_known(c, 0x94e4cu, f_00094e4c); X86_RET(c, 0x92ac5u);
    X86_TICK(c, 17);
    // 092ac5  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92ac5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 092ac8  mov edx, 0x200
    X86_AT(c, 0x92ac8u);
    c.r[2] = 0x200u;
    // 092acd  sub edx, dword ptr [edi + 4]
    X86_AT(c, 0x92acdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4); }
    // 092ad0  cmp edx, eax
    X86_AT(c, 0x92ad0u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092ad2  jne 0x92add
    X86_AT(c, 0x92ad2u);
    if (x86_cc(c, 5)) { goto L_92add; }
    X86_TICK(c, 9);
    // 092ad4  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x92ad4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 092adb  jmp 0x92af3
    X86_AT(c, 0x92adbu);
    goto L_92af3;
L_92add:
    X86_TICK(c, 15);
    // 092add  mov ax, 0x15
    X86_AT(c, 0x92addu);
    s16(c, 0, 0x15u);
    // 092ae1  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x92ae1u);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
    // 092ae7  mov eax, 0x15
    X86_AT(c, 0x92ae7u);
    c.r[0] = 0x15u;
    // 092aec  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92aecu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 092aef  or byte ptr [edi + 0xc], 0x20
    X86_AT(c, 0x92aefu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
L_92af3:
    X86_TICK(c, 15);
    // 092af3  mov eax, dword ptr [edi + 8]
    X86_AT(c, 0x92af3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 092af6  mov dword ptr [edi], eax
    X86_AT(c, 0x92af6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 092af8  mov dword ptr [edi + 4], 0x200
    X86_AT(c, 0x92af8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), 0x200u);
    // 092aff  jmp 0x92b08
    X86_AT(c, 0x92affu);
    goto L_92b08;
L_92b01:
    X86_TICK(c, 2);
    // 092b01  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x92b01u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_92b08:
    X86_TICK(c, 4);
    // 092b08  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92b08u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_92b0b:
    X86_TICK(c, 20);
    // 092b0b  pop edi
    X86_AT(c, 0x92b0bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092b0c  leave 
    X86_AT(c, 0x92b0cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092b0d  ret 
    X86_AT(c, 0x92b0du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92a4cu, "ran off the end of a function");
}
void f_00092b18(X86Cpu& c) {
    X86_TICK(c, 80);
    // 092b18  enter 4, 0
    X86_AT(c, 0x92b18u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 092b1c  push ebx
    X86_AT(c, 0x92b1cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092b1d  push esi
    X86_AT(c, 0x92b1du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092b1e  push edi
    X86_AT(c, 0x92b1eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092b1f  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x92b1fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 092b22  sub eax, eax
    X86_AT(c, 0x92b22u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092b24  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92b24u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 092b27  mov eax, edi
    X86_AT(c, 0x92b27u);
    c.r[0] = c.r[7];
    // 092b29  mov edx, 0x8a710
    X86_AT(c, 0x92b29u);
    c.r[2] = 0x8A710u;
    // 092b2e  sub eax, edx
    X86_AT(c, 0x92b2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 092b30  cdq 
    X86_AT(c, 0x92b30u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 092b31  mov ecx, 0x12
    X86_AT(c, 0x92b31u);
    c.r[1] = 0x12u;
    // 092b36  idiv ecx
    X86_AT(c, 0x92b36u);
    x86_idiv(c, c.r[1], 4, 0x92b36u);
    // 092b38  xchg esi, eax
    X86_AT(c, 0x92b38u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 092b39  and esi, esi
    X86_AT(c, 0x92b39u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092b3b  jl 0x92b8f
    X86_AT(c, 0x92b3bu);
    if (x86_cc(c, 12)) { goto L_92b8f; }
    X86_TICK(c, 7);
    // 092b3d  cmp esi, 0x19
    X86_AT(c, 0x92b3du);
    (void)x86_sub(c, c.r[6], 0x19u, 0, 4);
    // 092b40  jg 0x92b8f
    X86_AT(c, 0x92b40u);
    if (x86_cc(c, 15)) { goto L_92b8f; }
    X86_TICK(c, 12);
    // 092b42  cmp word ptr [edi + 0xc], 0
    X86_AT(c, 0x92b42u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))), 0x0u, 0, 2);
    // 092b47  je 0x92b8f
    X86_AT(c, 0x92b47u);
    if (x86_cc(c, 4)) { goto L_92b8f; }
    X86_TICK(c, 14);
    // 092b49  mov ebx, edi
    X86_AT(c, 0x92b49u);
    c.r[3] = c.r[7];
    // 092b4b  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x92b4bu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 092b4f  je 0x92b7e
    X86_AT(c, 0x92b4fu);
    if (x86_cc(c, 4)) { goto L_92b7e; }
    X86_TICK(c, 12);
    // 092b51  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x92b51u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 092b55  je 0x92b63
    X86_AT(c, 0x92b55u);
    if (x86_cc(c, 4)) { goto L_92b63; }
    X86_TICK(c, 9);
    // 092b57  push edi
    X86_AT(c, 0x92b57u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092b58  call 0x92a4c
    X86_AT(c, 0x92b58u);
    push32(c, 0x92b5du); x86_call_known(c, 0x92a4cu, f_00092a4c); X86_RET(c, 0x92b5du);
    X86_TICK(c, 13);
    // 092b5d  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92b5du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 092b60  pop ecx
    X86_AT(c, 0x92b60u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 092b61  jmp 0x92b69
    X86_AT(c, 0x92b61u);
    goto L_92b69;
L_92b63:
    X86_TICK(c, 12);
    // 092b63  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x92b63u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 092b67  je 0x92b8f
    X86_AT(c, 0x92b67u);
    if (x86_cc(c, 4)) { goto L_92b8f; }
L_92b69:
    X86_TICK(c, 12);
    // 092b69  test byte ptr [ebx + 0xd], 1
    X86_AT(c, 0x92b69u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x1u, 1);
    // 092b6d  jne 0x92b7e
    X86_AT(c, 0x92b6du);
    if (x86_cc(c, 5)) { goto L_92b7e; }
    X86_TICK(c, 12);
    // 092b6f  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x92b6fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 092b73  jne 0x92b7e
    X86_AT(c, 0x92b73u);
    if (x86_cc(c, 5)) { goto L_92b7e; }
    X86_TICK(c, 12);
    // 092b75  push dword ptr [ebx + 8]
    X86_AT(c, 0x92b75u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 092b78  call 0x92fdc
    X86_AT(c, 0x92b78u);
    push32(c, 0x92b7du); x86_call_known(c, 0x92fdcu, f_00092fdc); X86_RET(c, 0x92b7du);
    X86_TICK(c, 4);
    // 092b7d  pop ecx
    X86_AT(c, 0x92b7du);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_92b7e:
    X86_TICK(c, 13);
    // 092b7e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92b7eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092b81  push eax
    X86_AT(c, 0x92b81u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092b82  call 0x946f0
    X86_AT(c, 0x92b82u);
    push32(c, 0x92b87u); x86_call_known(c, 0x946f0u, f_000946f0); X86_RET(c, 0x92b87u);
    X86_TICK(c, 9);
    // 092b87  mov word ptr [ebx + 0xc], 0
    X86_AT(c, 0x92b87u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), 0x0u);
    // 092b8d  jmp 0x92ba1
    X86_AT(c, 0x92b8du);
    goto L_92ba1;
L_92b8f:
    X86_TICK(c, 8);
    // 092b8f  mov ax, 6
    X86_AT(c, 0x92b8fu);
    s16(c, 0, 0x6u);
    // 092b93  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x92b93u);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
    // 092b99  mov eax, 6
    X86_AT(c, 0x92b99u);
    c.r[0] = 0x6u;
    // 092b9e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92b9eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_92ba1:
    X86_TICK(c, 32);
    // 092ba1  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92ba1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092ba4  pop edi
    X86_AT(c, 0x92ba4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092ba5  pop esi
    X86_AT(c, 0x92ba5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092ba6  pop ebx
    X86_AT(c, 0x92ba6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092ba7  leave 
    X86_AT(c, 0x92ba7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092ba8  ret 
    X86_AT(c, 0x92ba8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92b18u, "ran off the end of a function");
}
void f_00092bb8(X86Cpu& c) {
    X86_TICK(c, 4);
    // 092bb8  push edi
    X86_AT(c, 0x92bb8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092bb9  sub edi, edi
    X86_AT(c, 0x92bb9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_92bbb:
    X86_TICK(c, 16);
    // 092bbb  lea eax, [edi + edi*4]
    X86_AT(c, 0x92bbbu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 092bbe  lea eax, [eax*4]
    X86_AT(c, 0x92bbeu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 092bc5  test byte ptr [eax + 0x8a71c], 6
    X86_AT(c, 0x92bc5u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8A71Cu))) & 0x6u, 1);
    // 092bcc  je 0x92be2
    X86_AT(c, 0x92bccu);
    if (x86_cc(c, 4)) { goto L_92be2; }
    X86_TICK(c, 13);
    // 092bce  add eax, 0x8a710
    X86_AT(c, 0x92bceu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8A710u, 0, 4); }
    // 092bd3  cmp eax, dword ptr [0x8a5ec]
    X86_AT(c, 0x92bd3u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A5ECu))), 0, 4);
    // 092bd9  je 0x92be2
    X86_AT(c, 0x92bd9u);
    if (x86_cc(c, 4)) { goto L_92be2; }
    X86_TICK(c, 9);
    // 092bdb  push eax
    X86_AT(c, 0x92bdbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092bdc  call 0x92b18
    X86_AT(c, 0x92bdcu);
    push32(c, 0x92be1u); x86_call_known(c, 0x92b18u, f_00092b18); X86_RET(c, 0x92be1u);
    X86_TICK(c, 4);
    // 092be1  pop ecx
    X86_AT(c, 0x92be1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_92be2:
    X86_TICK(c, 7);
    // 092be2  cmp edi, 0x19
    X86_AT(c, 0x92be2u);
    (void)x86_sub(c, c.r[7], 0x19u, 0, 4);
    // 092be5  jae 0x92bea
    X86_AT(c, 0x92be5u);
    if (x86_cc(c, 3)) { goto L_92bea; }
    X86_TICK(c, 9);
    // 092be7  inc edi
    X86_AT(c, 0x92be7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 092be8  jmp 0x92bbb
    X86_AT(c, 0x92be8u);
    X86_POLL(c, 0x92bbbu); goto L_92bbb;
L_92bea:
    X86_TICK(c, 12);
    // 092bea  push dword ptr [0x8a5ec]
    X86_AT(c, 0x92beau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A5ECu))); push32(c, v); }
    // 092bf0  call 0x92b18
    X86_AT(c, 0x92bf0u);
    push32(c, 0x92bf5u); x86_call_known(c, 0x92b18u, f_00092b18); X86_RET(c, 0x92bf5u);
    X86_TICK(c, 18);
    // 092bf5  pop ecx
    X86_AT(c, 0x92bf5u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 092bf6  pop edi
    X86_AT(c, 0x92bf6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092bf7  ret 
    X86_AT(c, 0x92bf7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92bb8u, "ran off the end of a function");
}
void f_00092c08(X86Cpu& c) {
    X86_TICK(c, 26);
    // 092c08  enter 4, 0
    X86_AT(c, 0x92c08u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 092c0c  push dword ptr [ebp + 8]
    X86_AT(c, 0x92c0cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092c0f  push 1
    X86_AT(c, 0x92c0fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092c11  push 1
    X86_AT(c, 0x92c11u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092c13  lea eax, [ebp - 1]
    X86_AT(c, 0x92c13u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 092c16  push eax
    X86_AT(c, 0x92c16u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092c17  call 0x92340
    X86_AT(c, 0x92c17u);
    push32(c, 0x92c1cu); x86_call_known(c, 0x92340u, f_00092340); X86_RET(c, 0x92c1cu);
    X86_TICK(c, 9);
    // 092c1c  add esp, 0x10
    X86_AT(c, 0x92c1cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 092c1f  and eax, eax
    X86_AT(c, 0x92c1fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 092c21  jne 0x92c2a
    X86_AT(c, 0x92c21u);
    if (x86_cc(c, 5)) { goto L_92c2a; }
    X86_TICK(c, 9);
    // 092c23  mov eax, 0xffffffff
    X86_AT(c, 0x92c23u);
    c.r[0] = 0xFFFFFFFFu;
    // 092c28  jmp 0x92c2e
    X86_AT(c, 0x92c28u);
    goto L_92c2e;
L_92c2a:
    X86_TICK(c, 6);
    // 092c2a  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0x92c2au);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
L_92c2e:
    X86_TICK(c, 16);
    // 092c2e  leave 
    X86_AT(c, 0x92c2eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092c2f  ret 
    X86_AT(c, 0x92c2fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92c08u, "ran off the end of a function");
}
void f_00092c70(X86Cpu& c) {
    X86_TICK(c, 36);
    // 092c70  enter 8, 0
    X86_AT(c, 0x92c70u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 092c74  push edi
    X86_AT(c, 0x92c74u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092c75  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x92c75u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 092c78  mov eax, edi
    X86_AT(c, 0x92c78u);
    c.r[0] = c.r[7];
    // 092c7a  mov byte ptr [ebp - 5], al
    X86_AT(c, 0x92c7au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 092c7d  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x92c7du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 092c80  push 1
    X86_AT(c, 0x92c80u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092c82  push 1
    X86_AT(c, 0x92c82u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092c84  lea eax, [ebp - 5]
    X86_AT(c, 0x92c84u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 092c87  push eax
    X86_AT(c, 0x92c87u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092c88  call 0x92998
    X86_AT(c, 0x92c88u);
    push32(c, 0x92c8du); x86_call_known(c, 0x92998u, f_00092998); X86_RET(c, 0x92c8du);
    X86_TICK(c, 9);
    // 092c8d  add esp, 0x10
    X86_AT(c, 0x92c8du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 092c90  dec eax
    X86_AT(c, 0x92c90u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 092c91  je 0x92c9c
    X86_AT(c, 0x92c91u);
    if (x86_cc(c, 4)) { goto L_92c9c; }
    X86_TICK(c, 9);
    // 092c93  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0x92c93u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 092c9a  jmp 0x92c9f
    X86_AT(c, 0x92c9au);
    goto L_92c9f;
L_92c9c:
    X86_TICK(c, 2);
    // 092c9c  mov dword ptr [ebp - 4], edi
    X86_AT(c, 0x92c9cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[7]);
L_92c9f:
    X86_TICK(c, 24);
    // 092c9f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92c9fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092ca2  pop edi
    X86_AT(c, 0x92ca2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092ca3  leave 
    X86_AT(c, 0x92ca3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092ca4  ret 
    X86_AT(c, 0x92ca4u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92c70u, "ran off the end of a function");
}
void f_00092d90(X86Cpu& c) {
    X86_TICK(c, 27);
    // 092d90  enter 8, 0
    X86_AT(c, 0x92d90u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 092d94  push ebx
    X86_AT(c, 0x92d94u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092d95  push esi
    X86_AT(c, 0x92d95u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092d96  push edi
    X86_AT(c, 0x92d96u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092d97  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x92d97u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 092d9a  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x92d9au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 092d9d  and esi, esi
    X86_AT(c, 0x92d9du);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092d9f  jl 0x92da6
    X86_AT(c, 0x92d9fu);
    if (x86_cc(c, 12)) { goto L_92da6; }
    X86_TICK(c, 7);
    // 092da1  cmp esi, 2
    X86_AT(c, 0x92da1u);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 092da4  jle 0x92db2
    X86_AT(c, 0x92da4u);
    if (x86_cc(c, 14)) { goto L_92db2; }
L_92da6:
    X86_TICK(c, 9);
    // 092da6  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0x92da6u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 092dad  jmp 0x92e63
    X86_AT(c, 0x92dadu);
    goto L_92e63;
L_92db2:
    X86_TICK(c, 31);
    // 092db2  mov ax, word ptr [0x8a96e]
    X86_AT(c, 0x92db2u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A96Eu))));
    // 092db8  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x92db8u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 092dbc  sub eax, eax
    X86_AT(c, 0x92dbcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092dbe  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x92dbeu);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
    // 092dc4  mov ebx, edi
    X86_AT(c, 0x92dc4u);
    c.r[3] = c.r[7];
    // 092dc6  and byte ptr [ebx + 0xd], 0xfb
    X86_AT(c, 0x92dc6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFBu, 1)); }
    // 092dca  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x92dcau);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 092dce  je 0x92e29
    X86_AT(c, 0x92dceu);
    if (x86_cc(c, 4)) { goto L_92e29; }
    X86_TICK(c, 12);
    // 092dd0  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x92dd0u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 092dd4  je 0x92e0c
    X86_AT(c, 0x92dd4u);
    if (x86_cc(c, 4)) { goto L_92e0c; }
    X86_TICK(c, 12);
    // 092dd6  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x92dd6u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 092dda  je 0x92def
    X86_AT(c, 0x92ddau);
    if (x86_cc(c, 4)) { goto L_92def; }
    X86_TICK(c, 12);
    // 092ddc  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x92ddcu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 092de0  je 0x92de8
    X86_AT(c, 0x92de0u);
    if (x86_cc(c, 4)) { goto L_92de8; }
    X86_TICK(c, 12);
    // 092de2  test byte ptr [ebx + 0xd], 8
    X86_AT(c, 0x92de2u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x8u, 1);
    // 092de6  je 0x92def
    X86_AT(c, 0x92de6u);
    if (x86_cc(c, 4)) { goto L_92def; }
L_92de8:
    X86_TICK(c, 9);
    // 092de8  push edi
    X86_AT(c, 0x92de8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092de9  call 0x92a4c
    X86_AT(c, 0x92de9u);
    push32(c, 0x92deeu); x86_call_known(c, 0x92a4cu, f_00092a4c); X86_RET(c, 0x92deeu);
    X86_TICK(c, 4);
    // 092dee  pop ecx
    X86_AT(c, 0x92deeu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_92def:
    X86_TICK(c, 7);
    // 092def  cmp esi, 1
    X86_AT(c, 0x92defu);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 092df2  jne 0x92e0c
    X86_AT(c, 0x92df2u);
    if (x86_cc(c, 5)) { goto L_92e0c; }
    X86_TICK(c, 12);
    // 092df4  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x92df4u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 092df8  je 0x92e0c
    X86_AT(c, 0x92df8u);
    if (x86_cc(c, 4)) { goto L_92e0c; }
    X86_TICK(c, 12);
    // 092dfa  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x92dfau);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 092dfe  je 0x92e06
    X86_AT(c, 0x92dfeu);
    if (x86_cc(c, 4)) { goto L_92e06; }
    X86_TICK(c, 12);
    // 092e00  test byte ptr [ebx + 0xd], 8
    X86_AT(c, 0x92e00u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x8u, 1);
    // 092e04  jne 0x92e0c
    X86_AT(c, 0x92e04u);
    if (x86_cc(c, 5)) { goto L_92e0c; }
L_92e06:
    X86_TICK(c, 11);
    // 092e06  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x92e06u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092e09  sub dword ptr [ebp + 0xc], eax
    X86_AT(c, 0x92e09u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_92e0c:
    X86_TICK(c, 22);
    // 092e0c  mov eax, esi
    X86_AT(c, 0x92e0cu);
    c.r[0] = c.r[6];
    // 092e0e  push eax
    X86_AT(c, 0x92e0eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092e0f  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x92e0fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 092e12  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92e12u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092e15  push eax
    X86_AT(c, 0x92e15u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092e16  call 0x94ef8
    X86_AT(c, 0x92e16u);
    push32(c, 0x92e1bu); x86_call_known(c, 0x94ef8u, f_00094ef8); X86_RET(c, 0x92e1bu);
    X86_TICK(c, 15);
    // 092e1b  mov dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x92e1bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0xFFFFFFFFu);
    // 092e22  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x92e22u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 092e25  mov dword ptr [ebx], eax
    X86_AT(c, 0x92e25u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 092e27  jmp 0x92e38
    X86_AT(c, 0x92e27u);
    goto L_92e38;
L_92e29:
    X86_TICK(c, 22);
    // 092e29  mov eax, esi
    X86_AT(c, 0x92e29u);
    c.r[0] = c.r[6];
    // 092e2b  push eax
    X86_AT(c, 0x92e2bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092e2c  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x92e2cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 092e2f  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92e2fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092e32  push eax
    X86_AT(c, 0x92e32u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092e33  call 0x94ef8
    X86_AT(c, 0x92e33u);
    push32(c, 0x92e38u); x86_call_known(c, 0x94ef8u, f_00094ef8); X86_RET(c, 0x92e38u);
L_92e38:
    X86_TICK(c, 12);
    // 092e38  cmp word ptr [0x8a96e], 0
    X86_AT(c, 0x92e38u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A96Eu))), 0x0u, 0, 2);
    // 092e40  jne 0x92e55
    X86_AT(c, 0x92e40u);
    if (x86_cc(c, 5)) { goto L_92e55; }
    X86_TICK(c, 15);
    // 092e42  mov ax, word ptr [ebp - 6]
    X86_AT(c, 0x92e42u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))));
    // 092e46  mov word ptr [0x8a96e], ax
    X86_AT(c, 0x92e46u);
    wr16((c.sbase[3] + (uint32_t)(0x8A96Eu)), (c.r[0] & 0xFFFFu));
    // 092e4c  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x92e4cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 092e53  jmp 0x92e5f
    X86_AT(c, 0x92e53u);
    goto L_92e5f;
L_92e55:
    X86_TICK(c, 8);
    // 092e55  movzx eax, word ptr [0x8a96e]
    X86_AT(c, 0x92e55u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A96Eu)));
    // 092e5c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92e5cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_92e5f:
    X86_TICK(c, 7);
    // 092e5f  and byte ptr [edi + 0xc], 0xef
    X86_AT(c, 0x92e5fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xEFu, 1)); }
L_92e63:
    X86_TICK(c, 32);
    // 092e63  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92e63u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092e66  pop edi
    X86_AT(c, 0x92e66u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092e67  pop esi
    X86_AT(c, 0x92e67u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092e68  pop ebx
    X86_AT(c, 0x92e68u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092e69  leave 
    X86_AT(c, 0x92e69u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092e6a  ret 
    X86_AT(c, 0x92e6au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92d90u, "ran off the end of a function");
}
void f_00092ef8(X86Cpu& c) {
    X86_TICK(c, 39);
    // 092ef8  push ebp
    X86_AT(c, 0x92ef8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 092ef9  mov ebp, esp
    X86_AT(c, 0x92ef9u);
    c.r[5] = c.r[4];
    // 092efb  push ecx
    X86_AT(c, 0x92efbu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 092efc  push ebx
    X86_AT(c, 0x92efcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092efd  push edi
    X86_AT(c, 0x92efdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092efe  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92efeu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092f01  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0x92f01u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092f04  push dword ptr [ebx + 8]
    X86_AT(c, 0x92f04u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 092f07  push edi
    X86_AT(c, 0x92f07u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092f08  push 1
    X86_AT(c, 0x92f08u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092f0a  push dword ptr [ebp + 8]
    X86_AT(c, 0x92f0au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092f0d  call 0x92998
    X86_AT(c, 0x92f0du);
    push32(c, 0x92f12u); x86_call_known(c, 0x92998u, f_00092998); X86_RET(c, 0x92f12u);
    X86_TICK(c, 9);
    // 092f12  add esp, 0x10
    X86_AT(c, 0x92f12u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 092f15  cmp edi, eax
    X86_AT(c, 0x92f15u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 092f17  je 0x92f24
    X86_AT(c, 0x92f17u);
    if (x86_cc(c, 4)) { goto L_92f24; }
    X86_TICK(c, 11);
    // 092f19  mov dword ptr [ebx - 4], 0xffffffff
    X86_AT(c, 0x92f19u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 092f20  mov ebp, ebx
    X86_AT(c, 0x92f20u);
    c.r[5] = c.r[3];
    // 092f22  jmp 0x92f5d
    X86_AT(c, 0x92f22u);
    goto L_92f5d;
L_92f24:
    X86_TICK(c, 24);
    // 092f24  pop edi
    X86_AT(c, 0x92f24u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092f25  pop ebx
    X86_AT(c, 0x92f25u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092f26  leave 
    X86_AT(c, 0x92f26u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092f27  ret 8
    X86_AT(c, 0x92f27u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_92f5d:
    X86_TICK(c, 34);
    // 092f5d  lea esp, [ebp - 0x10]
    X86_AT(c, 0x92f5du);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 092f60  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92f60u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092f63  pop edi
    X86_AT(c, 0x92f63u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092f64  pop esi
    X86_AT(c, 0x92f64u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092f65  pop ebx
    X86_AT(c, 0x92f65u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092f66  leave 
    X86_AT(c, 0x92f66u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092f67  ret 
    X86_AT(c, 0x92f67u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92ef8u, "ran off the end of a function");
}
void f_00092f34(X86Cpu& c) {
    X86_TICK(c, 33);
    // 092f34  enter 4, 0
    X86_AT(c, 0x92f34u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 092f38  push ebx
    X86_AT(c, 0x92f38u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092f39  push esi
    X86_AT(c, 0x92f39u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092f3a  push edi
    X86_AT(c, 0x92f3au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092f3b  mov dword ptr [0x8a610], 0x92ef8
    X86_AT(c, 0x92f3bu);
    wr32((c.sbase[3] + (uint32_t)(0x8A610u)), 0x92EF8u);
    // 092f45  mov dword ptr [0x8a614], ebp
    X86_AT(c, 0x92f45u);
    wr32((c.sbase[3] + (uint32_t)(0x8A614u)), c.r[5]);
    // 092f4b  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x92f4bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 092f4e  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x92f4eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 092f51  call 0x941a0
    X86_AT(c, 0x92f51u);
    push32(c, 0x92f56u); x86_call_known(c, 0x941a0u, f_000941a0); X86_RET(c, 0x92f56u);
    X86_TICK(c, 11);
    // 092f56  mov eax, dword ptr [0x8a60c]
    X86_AT(c, 0x92f56u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A60Cu)));
    // 092f5b  jmp 0x92f63
    X86_AT(c, 0x92f5bu);
    goto L_92f63;
L_92f63:
    X86_TICK(c, 28);
    // 092f63  pop edi
    X86_AT(c, 0x92f63u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092f64  pop esi
    X86_AT(c, 0x92f64u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092f65  pop ebx
    X86_AT(c, 0x92f65u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092f66  leave 
    X86_AT(c, 0x92f66u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092f67  ret 
    X86_AT(c, 0x92f67u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92f34u, "ran off the end of a function");
}
void f_00092f90(X86Cpu& c) {
    X86_TICK(c, 25);
    // 092f90  push ebp
    X86_AT(c, 0x92f90u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 092f91  mov ebp, esp
    X86_AT(c, 0x92f91u);
    c.r[5] = c.r[4];
    // 092f93  lea eax, [ebp + 0xc]
    X86_AT(c, 0x92f93u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 092f96  push eax
    X86_AT(c, 0x92f96u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092f97  push dword ptr [ebp + 8]
    X86_AT(c, 0x92f97u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092f9a  push dword ptr [0x8a5e8]
    X86_AT(c, 0x92f9au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A5E8u))); push32(c, v); }
    // 092fa0  call 0x92f34
    X86_AT(c, 0x92fa0u);
    push32(c, 0x92fa5u); x86_call_known(c, 0x92f34u, f_00092f34); X86_RET(c, 0x92fa5u);
    X86_TICK(c, 18);
    // 092fa5  add esp, 0xc
    X86_AT(c, 0x92fa5u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 092fa8  leave 
    X86_AT(c, 0x92fa8u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092fa9  ret 
    X86_AT(c, 0x92fa9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92f90u, "ran off the end of a function");
}
void f_00092fdc(X86Cpu& c) {
    X86_TICK(c, 16);
    // 092fdc  push ebp
    X86_AT(c, 0x92fdcu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 092fdd  mov ebp, esp
    X86_AT(c, 0x92fddu);
    c.r[5] = c.r[4];
    // 092fdf  push dword ptr [ebp + 8]
    X86_AT(c, 0x92fdfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092fe2  call 0x94cea
    X86_AT(c, 0x92fe2u);
    push32(c, 0x92fe7u); x86_call_known(c, 0x94ceau, f_00094cea); X86_RET(c, 0x92fe7u);
    X86_TICK(c, 16);
    // 092fe7  leave 
    X86_AT(c, 0x92fe7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092fe8  ret 
    X86_AT(c, 0x92fe8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92fdcu, "ran off the end of a function");
}
void f_00092ff0(X86Cpu& c) {
    X86_TICK(c, 16);
    // 092ff0  push ebp
    X86_AT(c, 0x92ff0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 092ff1  mov ebp, esp
    X86_AT(c, 0x92ff1u);
    c.r[5] = c.r[4];
    // 092ff3  push dword ptr [ebp + 8]
    X86_AT(c, 0x92ff3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092ff6  call 0x94cb0
    X86_AT(c, 0x92ff6u);
    push32(c, 0x92ffbu); x86_call_known(c, 0x94cb0u, f_00094cb0); X86_RET(c, 0x92ffbu);
    X86_TICK(c, 16);
    // 092ffb  leave 
    X86_AT(c, 0x92ffbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092ffc  ret 
    X86_AT(c, 0x92ffcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92ff0u, "ran off the end of a function");
}
void f_0009305c(X86Cpu& c) {
    X86_TICK(c, 46);
    // 09305c  enter 0x70, 0
    X86_AT(c, 0x9305cu);
    x86_enter(c, 0x70u, 0x0u, 4);
    // 093060  push esi
    X86_AT(c, 0x93060u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093061  push edi
    X86_AT(c, 0x93061u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093062  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x93062u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093065  mov eax, dword ptr [0x8a6dc]
    X86_AT(c, 0x93065u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A6DCu)));
    // 09306a  mov dx, word ptr [0x8a6e0]
    X86_AT(c, 0x9306au);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0x8A6E0u))));
    // 093071  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x93071u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 093074  mov word ptr [ebp - 8], dx
    X86_AT(c, 0x93074u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 093078  mov edx, 0x7fffffff
    X86_AT(c, 0x93078u);
    c.r[2] = 0x7FFFFFFFu;
    // 09307d  sub eax, eax
    X86_AT(c, 0x9307du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 09307f  push edi
    X86_AT(c, 0x9307fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093080  mov ecx, edx
    X86_AT(c, 0x93080u);
    c.r[1] = c.r[2];
    // 093082  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x93082u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 093084  jne 0x93089
    X86_AT(c, 0x93084u);
    if (x86_cc(c, 5)) { goto L_93089; }
    X86_TICK(c, 4);
    // 093086  inc ecx
    X86_AT(c, 0x93086u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 093087  sub edx, ecx
    X86_AT(c, 0x93087u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_93089:
    X86_TICK(c, 13);
    // 093089  pop edi
    X86_AT(c, 0x93089u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09308a  mov ax, 0x64
    X86_AT(c, 0x9308au);
    s16(c, 0, 0x64u);
    // 09308e  cmp ax, dx
    X86_AT(c, 0x9308eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 093091  jb 0x93094
    X86_AT(c, 0x93091u);
    if (x86_cc(c, 2)) { goto L_93094; }
    X86_TICK(c, 3);
    // 093093  xchg edx, eax
    X86_AT(c, 0x93093u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_93094:
    X86_TICK(c, 10);
    // 093094  movzx esi, ax
    X86_AT(c, 0x93094u);
    c.r[6] = (c.r[0] & 0xFFFFu);
    // 093097  jmp 0x9313b
    X86_AT(c, 0x93097u);
    goto L_9313b;
L_9309c:
    X86_TICK(c, 64);
    // 09309c  mov ecx, esi
    X86_AT(c, 0x9309cu);
    c.r[1] = c.r[6];
    // 09309e  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x9309eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 0930a1  push ds
    X86_AT(c, 0x930a1u);
    push32(c, c.sreg[3]);
    // 0930a2  push es
    X86_AT(c, 0x930a2u);
    push32(c, c.sreg[0]);
    // 0930a3  lea edx, [ebp - 0x70]
    X86_AT(c, 0x930a3u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFF90u);
    // 0930a6  push ds
    X86_AT(c, 0x930a6u);
    push32(c, c.sreg[3]);
    // 0930a7  pop es
    X86_AT(c, 0x930a7u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0930a8  pop ds
    X86_AT(c, 0x930a8u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0930a9  push esi
    X86_AT(c, 0x930a9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0930aa  push edi
    X86_AT(c, 0x930aau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0930ab  mov esi, eax
    X86_AT(c, 0x930abu);
    c.r[6] = c.r[0];
    // 0930ad  mov edi, edx
    X86_AT(c, 0x930adu);
    c.r[7] = c.r[2];
    // 0930af  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x930afu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0930b1  pop edi
    X86_AT(c, 0x930b1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0930b2  pop esi
    X86_AT(c, 0x930b2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0930b3  pop ds
    X86_AT(c, 0x930b3u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0930b4  push esi
    X86_AT(c, 0x930b4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0930b5  push edi
    X86_AT(c, 0x930b5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0930b6  push edx
    X86_AT(c, 0x930b6u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0930b7  call 0x94f44
    X86_AT(c, 0x930b7u);
    push32(c, 0x930bcu); x86_call_known(c, 0x94f44u, f_00094f44); X86_RET(c, 0x930bcu);
    X86_TICK(c, 7);
    // 0930bc  and ax, ax
    X86_AT(c, 0x930bcu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 0930bf  jne 0x93111
    X86_AT(c, 0x930bfu);
    if (x86_cc(c, 5)) { goto L_93111; }
    X86_TICK(c, 24);
    // 0930c1  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x930c1u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 0930c4  cmp byte ptr es:[eax + esi*1], 0x3d
    X86_AT(c, 0x930c4u);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[0] + c.r[6]))), 0x3Du, 0, 1);
    // 0930c9  push ds
    X86_AT(c, 0x930c9u);
    push32(c, c.sreg[3]);
    // 0930ca  pop es
    X86_AT(c, 0x930cau);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0930cb  jne 0x93111
    X86_AT(c, 0x930cbu);
    if (x86_cc(c, 5)) { goto L_93111; }
    X86_TICK(c, 37);
    // 0930cd  lea eax, [esi + 1]
    X86_AT(c, 0x930cdu);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 0930d0  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x930d0u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0930d3  mov edx, 0x7fffffff
    X86_AT(c, 0x930d3u);
    c.r[2] = 0x7FFFFFFFu;
    // 0930d8  sub eax, eax
    X86_AT(c, 0x930d8u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0930da  les ecx, fword ptr [ebp - 0xc]
    X86_AT(c, 0x930dau);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[1] = o; }
    // 0930dd  push edi
    X86_AT(c, 0x930ddu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0930de  mov edi, ecx
    X86_AT(c, 0x930deu);
    c.r[7] = c.r[1];
    // 0930e0  mov ecx, edx
    X86_AT(c, 0x930e0u);
    c.r[1] = c.r[2];
    // 0930e2  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x930e2u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0930e4  jne 0x930e9
    X86_AT(c, 0x930e4u);
    if (x86_cc(c, 5)) { goto L_930e9; }
    X86_TICK(c, 4);
    // 0930e6  inc ecx
    X86_AT(c, 0x930e6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0930e7  sub edx, ecx
    X86_AT(c, 0x930e7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_930e9:
    X86_TICK(c, 15);
    // 0930e9  pop edi
    X86_AT(c, 0x930e9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0930ea  inc edx
    X86_AT(c, 0x930eau);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0930eb  mov eax, 0x80
    X86_AT(c, 0x930ebu);
    c.r[0] = 0x80u;
    // 0930f0  cmp eax, edx
    X86_AT(c, 0x930f0u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0930f2  jb 0x930f5
    X86_AT(c, 0x930f2u);
    if (x86_cc(c, 2)) { goto L_930f5; }
    X86_TICK(c, 3);
    // 0930f4  xchg edx, eax
    X86_AT(c, 0x930f4u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_930f5:
    X86_TICK(c, 62);
    // 0930f5  xchg ecx, eax
    X86_AT(c, 0x930f5u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0930f6  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x930f6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 0930f9  push ds
    X86_AT(c, 0x930f9u);
    push32(c, c.sreg[3]);
    // 0930fa  push es
    X86_AT(c, 0x930fau);
    push32(c, c.sreg[0]);
    // 0930fb  mov edx, 0x8a630
    X86_AT(c, 0x930fbu);
    c.r[2] = 0x8A630u;
    // 093100  push ds
    X86_AT(c, 0x93100u);
    push32(c, c.sreg[3]);
    // 093101  pop es
    X86_AT(c, 0x93101u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 093102  pop ds
    X86_AT(c, 0x93102u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 093103  push esi
    X86_AT(c, 0x93103u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093104  push edi
    X86_AT(c, 0x93104u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093105  mov esi, eax
    X86_AT(c, 0x93105u);
    c.r[6] = c.r[0];
    // 093107  mov edi, edx
    X86_AT(c, 0x93107u);
    c.r[7] = c.r[2];
    // 093109  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x93109u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 09310b  pop edi
    X86_AT(c, 0x9310bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09310c  pop esi
    X86_AT(c, 0x9310cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09310d  pop ds
    X86_AT(c, 0x9310du);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 09310e  xchg edx, eax
    X86_AT(c, 0x9310eu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 09310f  jmp 0x9314f
    X86_AT(c, 0x9310fu);
    goto L_9314f;
L_93111:
    X86_TICK(c, 28);
    // 093111  mov edx, 0x7fffffff
    X86_AT(c, 0x93111u);
    c.r[2] = 0x7FFFFFFFu;
    // 093116  sub eax, eax
    X86_AT(c, 0x93116u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 093118  les ecx, fword ptr [ebp - 0xc]
    X86_AT(c, 0x93118u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[1] = o; }
    // 09311b  push edi
    X86_AT(c, 0x9311bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09311c  mov edi, ecx
    X86_AT(c, 0x9311cu);
    c.r[7] = c.r[1];
    // 09311e  mov ecx, edx
    X86_AT(c, 0x9311eu);
    c.r[1] = c.r[2];
    // 093120  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x93120u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 093122  jne 0x93127
    X86_AT(c, 0x93122u);
    if (x86_cc(c, 5)) { goto L_93127; }
    X86_TICK(c, 4);
    // 093124  inc ecx
    X86_AT(c, 0x93124u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 093125  sub edx, ecx
    X86_AT(c, 0x93125u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_93127:
    X86_TICK(c, 24);
    // 093127  pop edi
    X86_AT(c, 0x93127u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093128  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x93128u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 09312b  lea eax, es:[eax + edx*1 + 1]
    X86_AT(c, 0x9312bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x1u);
    // 093130  mov edx, es
    X86_AT(c, 0x93130u);
    c.r[2] = (uint32_t)c.sreg[0];
    // 093132  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x93132u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 093135  mov word ptr [ebp - 8], dx
    X86_AT(c, 0x93135u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 093139  push ds
    X86_AT(c, 0x93139u);
    push32(c, c.sreg[3]);
    // 09313a  pop es
    X86_AT(c, 0x9313au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
L_9313b:
    X86_TICK(c, 24);
    // 09313b  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x9313bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 09313e  cmp byte ptr es:[eax], 0
    X86_AT(c, 0x9313eu);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 093142  push ds
    X86_AT(c, 0x93142u);
    push32(c, c.sreg[3]);
    // 093143  pop es
    X86_AT(c, 0x93143u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 093144  jne 0x9309c
    X86_AT(c, 0x93144u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9309cu); goto L_9309c; }
    X86_TICK(c, 4);
    // 09314a  sub eax, eax
    X86_AT(c, 0x9314au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 09314c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x9314cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_9314f:
    X86_TICK(c, 24);
    // 09314f  pop edi
    X86_AT(c, 0x9314fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093150  pop esi
    X86_AT(c, 0x93150u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093151  leave 
    X86_AT(c, 0x93151u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093152  ret 
    X86_AT(c, 0x93152u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9305cu, "ran off the end of a function");
}
void f_00093154(X86Cpu& c) {
    X86_TICK(c, 72);
    // 093154  mov edx, esi
    X86_AT(c, 0x93154u);
    c.r[2] = c.r[6];
    // 093156  push edi
    X86_AT(c, 0x93156u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093157  sub eax, eax
    X86_AT(c, 0x93157u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 093159  mov ecx, 0xffffffff
    X86_AT(c, 0x93159u);
    c.r[1] = 0xFFFFFFFFu;
    // 09315e  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x9315eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 093162  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x93162u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 093164  not ecx
    X86_AT(c, 0x93164u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 093166  mov esi, dword ptr [esp + 0xc]
    X86_AT(c, 0x93166u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 09316a  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x9316au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 09316e  mov eax, ecx
    X86_AT(c, 0x9316eu);
    c.r[0] = c.r[1];
    // 093170  shr ecx, 2
    X86_AT(c, 0x93170u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 093173  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x93173u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 093175  mov ecx, eax
    X86_AT(c, 0x93175u);
    c.r[1] = c.r[0];
    // 093177  and ecx, 3
    X86_AT(c, 0x93177u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 09317d  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x9317du);
    x86_string(c, 0, 1, 243, 4, 3);
    // 09317f  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0x9317fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 093183  mov esi, edx
    X86_AT(c, 0x93183u);
    c.r[6] = c.r[2];
    // 093185  pop edi
    X86_AT(c, 0x93185u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093186  ret 
    X86_AT(c, 0x93186u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x93154u, "ran off the end of a function");
}
void f_00093198(X86Cpu& c) {
    X86_TICK(c, 16);
    // 093198  push ebp
    X86_AT(c, 0x93198u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093199  mov ebp, esp
    X86_AT(c, 0x93199u);
    c.r[5] = c.r[4];
    // 09319b  push dword ptr [ebp + 8]
    X86_AT(c, 0x9319bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 09319e  call 0x94dec
    X86_AT(c, 0x9319eu);
    push32(c, 0x931a3u); x86_call_known(c, 0x94decu, f_00094dec); X86_RET(c, 0x931a3u);
    X86_TICK(c, 16);
    // 0931a3  leave 
    X86_AT(c, 0x931a3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0931a4  ret 4
    X86_AT(c, 0x931a4u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x93198u, "ran off the end of a function");
}
void f_000931d4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0931d4  jmp 0x9322c
    X86_AT(c, 0x931d4u);
    goto L_9322c;
L_931d6:
    X86_TICK(c, 7);
    // 0931d6  call 0x8f248
    X86_AT(c, 0x931d6u);
    push32(c, 0x931dbu); x86_call_known(c, 0x8f248u, f_0008f248); X86_RET(c, 0x931dbu);
L_931db:
    X86_TICK(c, 9);
    // 0931db  push eax
    X86_AT(c, 0x931dbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0931dc  call 0x94dec
    X86_AT(c, 0x931dcu);
    push32(c, 0x931e1u); x86_call_known(c, 0x94decu, f_00094dec); X86_RET(c, 0x931e1u);
    X86_TICK(c, 39);
    // 0931e1  xor eax, eax
    X86_AT(c, 0x931e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0931e3  int 0x21
    X86_AT(c, 0x931e3u);
    x86_int(c, 0x21, 0x931e5u);
    X86_TICK(c, 10);
    // 0931e5  ret 
    X86_AT(c, 0x931e5u);
    c.eip = pop32(c); return;
L_9322c:
    X86_TICK(c, 7);
    // 09322c  cmp al, 0xcd
    X86_AT(c, 0x9322cu);
    (void)x86_sub(c, g8(c, 0), 0xCDu, 0, 1);
    // 09322e  jne 0x9324b
    X86_AT(c, 0x9322eu);
    if (x86_cc(c, 5)) { goto L_9324b; }
    X86_TICK(c, 7);
    // 093230  cmp ah, 0xab
    X86_AT(c, 0x93230u);
    (void)x86_sub(c, g8(c, 4), 0xABu, 0, 1);
    // 093233  jne 0x9324b
    X86_AT(c, 0x93233u);
    if (x86_cc(c, 5)) { goto L_9324b; }
    X86_TICK(c, 7);
    // 093235  cmp eax, 0xabcdabcd
    X86_AT(c, 0x93235u);
    (void)x86_sub(c, c.r[0], 0xABCDABCDu, 0, 4);
    // 09323a  jne 0x9324b
    X86_AT(c, 0x9323au);
    if (x86_cc(c, 5)) { goto L_9324b; }
    X86_TICK(c, 11);
    // 09323c  mov byte ptr [0x8a6f2], 1
    X86_AT(c, 0x9323cu);
    wr8((c.sbase[3] + (uint32_t)(0x8A6F2u)), 0x1u);
    // 093243  mov dword ptr [0x8a6c8], edx
    X86_AT(c, 0x93243u);
    wr32((c.sbase[3] + (uint32_t)(0x8A6C8u)), c.r[2]);
    // 093249  jmp 0x93252
    X86_AT(c, 0x93249u);
    goto L_93252;
L_9324b:
    X86_TICK(c, 2);
    // 09324b  mov byte ptr [0x8a6f2], 2
    X86_AT(c, 0x9324bu);
    wr8((c.sbase[3] + (uint32_t)(0x8A6F2u)), 0x2u);
L_93252:
    X86_TICK(c, 34);
    // 093252  sub ebp, ebp
    X86_AT(c, 0x93252u);
    { uint32_t v = c.r[5]; c.r[5] = x86_sub(c, v, c.r[5], 0, 4); }
    // 093254  and esp, 0xfffffffc
    X86_AT(c, 0x93254u);
    { uint32_t v = c.r[4]; c.r[4] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 093257  mov dword ptr [0x3538c], 0x200
    X86_AT(c, 0x93257u);
    wr32((c.sbase[3] + (uint32_t)(0x3538Cu)), 0x200u);
    // 093261  mov dword ptr [0x35390], 0x100
    X86_AT(c, 0x93261u);
    wr32((c.sbase[3] + (uint32_t)(0x35390u)), 0x100u);
    // 09326b  add dword ptr [0x3538c], 0x96f64
    X86_AT(c, 0x9326bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x3538Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x96F64u, 0, 4)); }
    // 093275  add dword ptr [0x35390], 0x96f64
    X86_AT(c, 0x93275u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x35390u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x96F64u, 0, 4)); }
    // 09327f  cmp byte ptr [0x8a6f2], 1
    X86_AT(c, 0x9327fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6F2u))), 0x1u, 0, 1);
    // 093286  je 0x932a8
    X86_AT(c, 0x93286u);
    if (x86_cc(c, 4)) { goto L_932a8; }
    X86_TICK(c, 23);
    // 093288  mov dword ptr [0x8a6c0], 0
    X86_AT(c, 0x93288u);
    wr32((c.sbase[3] + (uint32_t)(0x8A6C0u)), 0x0u);
    // 093292  lea eax, [esp + 0x20]
    X86_AT(c, 0x93292u);
    c.r[0] = (uint32_t)(c.r[4] + 0x20u);
    // 093296  mov dword ptr [0x8a6bc], esp
    X86_AT(c, 0x93296u);
    wr32((c.sbase[3] + (uint32_t)(0x8A6BCu)), c.r[4]);
    // 09329c  mov eax, ds
    X86_AT(c, 0x9329cu);
    c.r[0] = (uint32_t)c.sreg[3];
    // 09329e  lsl eax, eax
    X86_AT(c, 0x9329eu);
    { uint32_t v; if (x86_lsl(c, (c.r[0] & 0xFFFFu), v)) { c.r[0] = v; c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 0932a1  mov dword ptr [0x8a6c4], eax
    X86_AT(c, 0x932a1u);
    wr32((c.sbase[3] + (uint32_t)(0x8A6C4u)), c.r[0]);
    // 0932a6  jmp 0x932e8
    X86_AT(c, 0x932a6u);
    goto L_932e8;
L_932a8:
    X86_TICK(c, 84);
    // 0932a8  mov eax, esp
    X86_AT(c, 0x932a8u);
    c.r[0] = c.r[4];
    // 0932aa  mov ecx, dword ptr [edx + 0x74]
    X86_AT(c, 0x932aau);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x74u)));
    // 0932ad  shl ecx, 0xa
    X86_AT(c, 0x932adu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[1] = r; }
    // 0932b0  sub eax, ecx
    X86_AT(c, 0x932b0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0932b2  mov dword ptr [0x8a6c0], eax
    X86_AT(c, 0x932b2u);
    wr32((c.sbase[3] + (uint32_t)(0x8A6C0u)), c.r[0]);
    // 0932b7  mov eax, dword ptr [edx + 0x50]
    X86_AT(c, 0x932b7u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x50u)));
    // 0932ba  mov dword ptr [0x8a6bc], eax
    X86_AT(c, 0x932bau);
    wr32((c.sbase[3] + (uint32_t)(0x8A6BCu)), c.r[0]);
    // 0932bf  mov ecx, dword ptr [edx + 0x3c]
    X86_AT(c, 0x932bfu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x3Cu)));
    // 0932c2  shl ecx, 0xa
    X86_AT(c, 0x932c2u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[1] = r; }
    // 0932c5  add eax, ecx
    X86_AT(c, 0x932c5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 0932c7  mov dword ptr [0x8a6c4], eax
    X86_AT(c, 0x932c7u);
    wr32((c.sbase[3] + (uint32_t)(0x8A6C4u)), c.r[0]);
    // 0932cc  mov ebx, dword ptr [edx + 0x54]
    X86_AT(c, 0x932ccu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x54u)));
    // 0932cf  sub ebx, dword ptr [edx + 0x10]
    X86_AT(c, 0x932cfu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u))), 0, 4); }
    // 0932d2  shr ebx, 4
    X86_AT(c, 0x932d2u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0932d5  inc ebx
    X86_AT(c, 0x932d5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 0932d6  mov ah, 0x4a
    X86_AT(c, 0x932d6u);
    s8(c, 4, 0x4Au);
    // 0932d8  int 0x21
    X86_AT(c, 0x932d8u);
    x86_int(c, 0x21, 0x932dau);
    X86_TICK(c, 12);
    // 0932da  test byte ptr [edx + 0xb7], 1
    X86_AT(c, 0x932dau);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB7u))) & 0x1u, 1);
    // 0932e1  setne byte ptr [0x8a6e9]
    X86_AT(c, 0x932e1u);
    wr8((c.sbase[3] + (uint32_t)(0x8A6E9u)), x86_cc(c, 5) ? 1u : 0u);
L_932e8:
    X86_TICK(c, 11);
    // 0932e8  esc 0x1c, bl
    X86_AT(c, 0x932e8u);
    // 0932ea  xor eax, eax
    X86_AT(c, 0x932eau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0932ec  mov word ptr [0x8a6e5], ax
    X86_AT(c, 0x932ecu);
    wr16((c.sbase[3] + (uint32_t)(0x8A6E5u)), (c.r[0] & 0xFFFFu));
    // 0932f2  sub ecx, ecx
    X86_AT(c, 0x932f2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0932f4  mov cl, 0xf
    X86_AT(c, 0x932f4u);
    s8(c, 1, 0xFu);
L_932f6:
    X86_TICK(c, 11);
    // 0932f6  loop 0x932f6
    X86_AT(c, 0x932f6u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x932f6u); goto L_932f6; }
    X86_TICK(c, 5);
    // 0932f8  esc 0xf, byte ptr [0x8a6e5]
    X86_AT(c, 0x932f8u);
    // 0932fe  mov cl, 0xf
    X86_AT(c, 0x932feu);
    s8(c, 1, 0xFu);
L_93300:
    X86_TICK(c, 11);
    // 093300  loop 0x93300
    X86_AT(c, 0x93300u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x93300u); goto L_93300; }
    X86_TICK(c, 19);
    // 093302  and word ptr [0x8a6e5], 0xf3f
    X86_AT(c, 0x93302u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A6E5u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xF3Fu, 2)); }
    // 09330b  cmp word ptr [0x8a6e5], 0x33f
    X86_AT(c, 0x9330bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A6E5u))), 0x33Fu, 0, 2);
    // 093314  jne 0x93354
    X86_AT(c, 0x93314u);
    if (x86_cc(c, 5)) { goto L_93354; }
    X86_TICK(c, 5);
    // 093316  esc 0x2f, byte ptr [0x8a6e5]
    X86_AT(c, 0x93316u);
    // 09331c  mov cl, 0xf
    X86_AT(c, 0x9331cu);
    s8(c, 1, 0xFu);
L_9331e:
    X86_TICK(c, 11);
    // 09331e  loop 0x9331e
    X86_AT(c, 0x9331eu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x9331eu); goto L_9331e; }
    X86_TICK(c, 12);
    // 093320  test word ptr [0x8a6e5], 0xb8bf
    X86_AT(c, 0x93320u);
    (void)x86_logic(c, rd16((c.sbase[3] + (uint32_t)(0x8A6E5u))) & 0xB8BFu, 2);
    // 093329  jne 0x93354
    X86_AT(c, 0x93329u);
    if (x86_cc(c, 5)) { goto L_93354; }
    X86_TICK(c, 51);
    // 09332b  wait 
    X86_AT(c, 0x9332bu);
    // 09332c  esc 0xd, byte ptr cs:[0x935c8]
    X86_AT(c, 0x9332cu);
    // 093333  mov byte ptr [0x8a6e3], 1
    X86_AT(c, 0x93333u);
    wr8((c.sbase[3] + (uint32_t)(0x8A6E3u)), 0x1u);
    // 09333a  esc 0xd, al
    X86_AT(c, 0x9333au);
    // 09333c  esc 0xd, dh
    X86_AT(c, 0x9333cu);
    // 09333e  esc 0x37, cl
    X86_AT(c, 0x9333eu);
    // 093340  esc 8, al
    X86_AT(c, 0x93340u);
    // 093342  esc 0xc, al
    X86_AT(c, 0x93342u);
    // 093344  esc 0x33, cl
    X86_AT(c, 0x93344u);
    // 093346  wait 
    X86_AT(c, 0x93346u);
    // 093347  esc 0x3c, al
    X86_AT(c, 0x93347u);
    // 093349  wait 
    X86_AT(c, 0x93349u);
    // 09334a  sahf 
    X86_AT(c, 0x9334au);
    c.fl = (c.fl & ~0xD5u) | (g8(c, 4) & 0xD5u);
    // 09334b  je 0x93354
    X86_AT(c, 0x9334bu);
    if (x86_cc(c, 4)) { goto L_93354; }
    X86_TICK(c, 2);
    // 09334d  mov byte ptr [0x8a6e7], 1
    X86_AT(c, 0x9334du);
    wr8((c.sbase[3] + (uint32_t)(0x8A6E7u)), 0x1u);
L_93354:
    X86_TICK(c, 28);
    // 093354  push 0x3ff0000
    X86_AT(c, 0x93354u);
    { uint32_t v = 0x3FF0000u; push32(c, v); }
    // 093359  push 0x30000000
    X86_AT(c, 0x93359u);
    { uint32_t v = 0x30000000u; push32(c, v); }
    // 09335e  push 0xa0000000
    X86_AT(c, 0x9335eu);
    { uint32_t v = 0xA0000000u; push32(c, v); }
    // 093363  push 0x64000000
    X86_AT(c, 0x93363u);
    { uint32_t v = 0x64000000u; push32(c, v); }
    // 093368  push 0x16000000
    X86_AT(c, 0x93368u);
    { uint32_t v = 0x16000000u; push32(c, v); }
    // 09336d  push 0x98000000
    X86_AT(c, 0x9336du);
    { uint32_t v = 0x98000000u; push32(c, v); }
    // 093372  push 0x56000000
    X86_AT(c, 0x93372u);
    { uint32_t v = 0x56000000u; push32(c, v); }
    // 093377  push 0xb8000000
    X86_AT(c, 0x93377u);
    { uint32_t v = 0xB8000000u; push32(c, v); }
    // 09337c  cmp byte ptr [0x8a6f2], 1
    X86_AT(c, 0x9337cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6F2u))), 0x1u, 0, 1);
    // 093383  je 0x933dc
    X86_AT(c, 0x93383u);
    if (x86_cc(c, 4)) { goto L_933dc; }
    X86_TICK(c, 11);
    // 093385  mov eax, fs
    X86_AT(c, 0x93385u);
    c.r[0] = (uint32_t)c.sreg[4];
    // 093387  mov ebx, ds
    X86_AT(c, 0x93387u);
    c.r[3] = (uint32_t)c.sreg[3];
    // 093389  cmp ax, bx
    X86_AT(c, 0x93389u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 09338c  je 0x9342d
    X86_AT(c, 0x9338cu);
    if (x86_cc(c, 4)) { goto L_9342d; }
    X86_TICK(c, 18);
    // 093392  mov word ptr [0x8a6e9], 1
    X86_AT(c, 0x93392u);
    wr16((c.sbase[3] + (uint32_t)(0x8A6E9u)), 0x1u);
    // 09339b  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x9339bu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0933a1  mov eax, dword ptr fs:[0xc400]
    X86_AT(c, 0x933a1u);
    c.r[0] = rd32((c.sbase[4] + ((0xC400u) & 0xFFFFu)));
    // 0933a6  and ah, 0x80
    X86_AT(c, 0x933a6u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x80u, 1)); }
    // 0933a9  jne 0x933b5
    X86_AT(c, 0x933a9u);
    if (x86_cc(c, 5)) { goto L_933b5; }
    X86_TICK(c, 20);
    // 0933ab  pop eax
    X86_AT(c, 0x933abu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0933ac  pop eax
    X86_AT(c, 0x933acu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0933ad  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x933adu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0933b3  jmp 0x933c2
    X86_AT(c, 0x933b3u);
    goto L_933c2;
L_933b5:
    X86_TICK(c, 14);
    // 0933b5  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x933b5u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0933bb  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x933bbu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0933c1  pop eax
    X86_AT(c, 0x933c1u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_933c2:
    X86_TICK(c, 27);
    // 0933c2  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x933c2u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0933c8  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x933c8u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0933ce  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x933ceu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0933d4  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x933d4u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 0933da  jmp 0x93430
    X86_AT(c, 0x933dau);
    goto L_93430;
L_933dc:
    X86_TICK(c, 12);
    // 0933dc  cmp byte ptr [0x8a6e9], 1
    X86_AT(c, 0x933dcu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6E9u))), 0x1u, 0, 1);
    // 0933e3  jne 0x9342d
    X86_AT(c, 0x933e3u);
    if (x86_cc(c, 5)) { goto L_9342d; }
    X86_TICK(c, 17);
    // 0933e5  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x933e5u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0933eb  pop dword ptr [0xffc0c400]
    X86_AT(c, 0x933ebu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C400u)), v); }
    // 0933f1  and ah, 0x80
    X86_AT(c, 0x933f1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x80u, 1)); }
    // 0933f4  jne 0x93400
    X86_AT(c, 0x933f4u);
    if (x86_cc(c, 5)) { goto L_93400; }
    X86_TICK(c, 20);
    // 0933f6  pop eax
    X86_AT(c, 0x933f6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0933f7  pop eax
    X86_AT(c, 0x933f7u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0933f8  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x933f8u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0933fe  jmp 0x9340d
    X86_AT(c, 0x933feu);
    goto L_9340d;
L_93400:
    X86_TICK(c, 14);
    // 093400  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x93400u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 093406  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x93406u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 09340c  pop eax
    X86_AT(c, 0x9340cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_9340d:
    X86_TICK(c, 32);
    // 09340d  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x9340du);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 093413  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x93413u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 093419  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x93419u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 09341f  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x9341fu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 093425  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x93425u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 09342b  jmp 0x93430
    X86_AT(c, 0x9342bu);
    goto L_93430;
L_9342d:
    X86_TICK(c, 2);
    // 09342d  add esp, 0x20
    X86_AT(c, 0x9342du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_93430:
    X86_TICK(c, 14);
    // 093430  cld 
    X86_AT(c, 0x93430u);
    c.fl &= ~X86_DF;
    // 093431  cmp byte ptr [0x8a6f2], 2
    X86_AT(c, 0x93431u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6F2u))), 0x2u, 0, 1);
    // 093438  je 0x9347a
    X86_AT(c, 0x93438u);
    if (x86_cc(c, 4)) { goto L_9347a; }
    X86_TICK(c, 42);
    // 09343a  mov edi, dword ptr [edx + 0x10]
    X86_AT(c, 0x9343au);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)));
    // 09343d  mov word ptr [0x8a6d0], ds
    X86_AT(c, 0x9343du);
    wr16((c.sbase[3] + (uint32_t)(0x8A6D0u)), (uint32_t)c.sreg[3]);
    // 093443  mov dword ptr [0x8a6b6], edi
    X86_AT(c, 0x93443u);
    wr32((c.sbase[3] + (uint32_t)(0x8A6B6u)), c.r[7]);
    // 093449  mov word ptr [0x8a6ba], ds
    X86_AT(c, 0x93449u);
    wr16((c.sbase[3] + (uint32_t)(0x8A6BAu)), (uint32_t)c.sreg[3]);
    // 09344f  lea eax, [edi + 0x80]
    X86_AT(c, 0x9344fu);
    c.r[0] = (uint32_t)(c.r[7] + 0x80u);
    // 093455  xor ebx, ebx
    X86_AT(c, 0x93455u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 093457  mov bl, byte ptr [eax]
    X86_AT(c, 0x93457u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093459  mov dword ptr [0x8a6d8], ebx
    X86_AT(c, 0x93459u);
    wr32((c.sbase[3] + (uint32_t)(0x8A6D8u)), c.r[3]);
    // 09345f  inc eax
    X86_AT(c, 0x9345fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 093460  mov dword ptr [0x8a6cc], eax
    X86_AT(c, 0x93460u);
    wr32((c.sbase[3] + (uint32_t)(0x8A6CCu)), c.r[0]);
    // 093465  mov bx, word ptr [edi + 0x2c]
    X86_AT(c, 0x93465u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu))));
    // 093469  shl ebx, 4
    X86_AT(c, 0x93469u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 09346c  mov dword ptr [0x8a6dc], ebx
    X86_AT(c, 0x9346cu);
    wr32((c.sbase[3] + (uint32_t)(0x8A6DCu)), c.r[3]);
    // 093472  mov word ptr [0x8a6e0], ds
    X86_AT(c, 0x93472u);
    wr16((c.sbase[3] + (uint32_t)(0x8A6E0u)), (uint32_t)c.sreg[3]);
    // 093478  jmp 0x934cc
    X86_AT(c, 0x93478u);
    goto L_934cc;
L_9347a:
    X86_TICK(c, 81);
    // 09347a  mov ax, 0x24
    X86_AT(c, 0x9347au);
    s16(c, 0, 0x24u);
    // 09347e  mov ebx, cs
    X86_AT(c, 0x9347eu);
    c.r[3] = (uint32_t)c.sreg[1];
    // 093480  arpl ax, bx
    X86_AT(c, 0x93480u);
    { uint32_t d = (c.r[0] & 0xFFFFu), s = (c.r[3] & 0xFFFFu); if ((d & 3) < (s & 3)) { s16(c, 0, (d & ~3u) | (s & 3)); c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 093482  mov es, eax
    X86_AT(c, 0x93482u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 093484  mov word ptr [0x8a6ba], ax
    X86_AT(c, 0x93484u);
    wr16((c.sbase[3] + (uint32_t)(0x8A6BAu)), (c.r[0] & 0xFFFFu));
    // 09348a  mov word ptr [0x8a6ba], ax
    X86_AT(c, 0x9348au);
    wr16((c.sbase[3] + (uint32_t)(0x8A6BAu)), (c.r[0] & 0xFFFFu));
    // 093490  mov ax, 0x2c
    X86_AT(c, 0x93490u);
    s16(c, 0, 0x2Cu);
    // 093494  arpl ax, bx
    X86_AT(c, 0x93494u);
    { uint32_t d = (c.r[0] & 0xFFFFu), s = (c.r[3] & 0xFFFFu); if ((d & 3) < (s & 3)) { s16(c, 0, (d & ~3u) | (s & 3)); c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 093496  mov word ptr [0x8a6e0], ax
    X86_AT(c, 0x93496u);
    wr16((c.sbase[3] + (uint32_t)(0x8A6E0u)), (c.r[0] & 0xFFFFu));
    // 09349c  xor eax, eax
    X86_AT(c, 0x9349cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 09349e  mov al, byte ptr es:[0x80]
    X86_AT(c, 0x9349eu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(0x80u))));
    // 0934a4  mov dword ptr [0x8a6d8], eax
    X86_AT(c, 0x934a4u);
    wr32((c.sbase[3] + (uint32_t)(0x8A6D8u)), c.r[0]);
    // 0934a9  add eax, 3
    X86_AT(c, 0x934a9u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3u, 0, 4); }
    // 0934ae  and al, 0xfc
    X86_AT(c, 0x934aeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFCu, 1)); }
    // 0934b0  sub esp, eax
    X86_AT(c, 0x934b0u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0934b2  mov edi, esp
    X86_AT(c, 0x934b2u);
    c.r[7] = c.r[4];
    // 0934b4  mov dword ptr [0x8a6cc], edi
    X86_AT(c, 0x934b4u);
    wr32((c.sbase[3] + (uint32_t)(0x8A6CCu)), c.r[7]);
    // 0934ba  push edx
    X86_AT(c, 0x934bau);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0934bb  mov ecx, eax
    X86_AT(c, 0x934bbu);
    c.r[1] = c.r[0];
    // 0934bd  push ds
    X86_AT(c, 0x934bdu);
    push32(c, c.sreg[3]);
    // 0934be  push es
    X86_AT(c, 0x934beu);
    push32(c, c.sreg[0]);
    // 0934bf  pop ds
    X86_AT(c, 0x934bfu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0934c0  push es
    X86_AT(c, 0x934c0u);
    push32(c, c.sreg[0]);
    // 0934c1  push ss
    X86_AT(c, 0x934c1u);
    push32(c, c.sreg[2]);
    // 0934c2  pop es
    X86_AT(c, 0x934c2u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0934c3  mov esi, 0x81
    X86_AT(c, 0x934c3u);
    c.r[6] = 0x81u;
    // 0934c8  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x934c8u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0934ca  pop es
    X86_AT(c, 0x934cau);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0934cb  pop ds
    X86_AT(c, 0x934cbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_934cc:
    X86_TICK(c, 41);
    // 0934cc  sub eax, eax
    X86_AT(c, 0x934ccu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0934ce  mov ah, 0x30
    X86_AT(c, 0x934ceu);
    s8(c, 4, 0x30u);
    // 0934d0  int 0x21
    X86_AT(c, 0x934d0u);
    x86_int(c, 0x21, 0x934d2u);
    X86_TICK(c, 14);
    // 0934d2  mov word ptr [0x8a6f0], ax
    X86_AT(c, 0x934d2u);
    wr16((c.sbase[3] + (uint32_t)(0x8A6F0u)), (c.r[0] & 0xFFFFu));
    // 0934d8  cmp byte ptr [0x8a6f2], 1
    X86_AT(c, 0x934d8u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6F2u))), 0x1u, 0, 1);
    // 0934df  je 0x93529
    X86_AT(c, 0x934dfu);
    if (x86_cc(c, 4)) { goto L_93529; }
    X86_TICK(c, 10);
    // 0934e1  shr eax, 0x10
    X86_AT(c, 0x934e1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0934e4  cmp ax, 0x4458
    X86_AT(c, 0x934e4u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x4458u, 0, 2);
    // 0934e8  jne 0x934ec
    X86_AT(c, 0x934e8u);
    if (x86_cc(c, 5)) { goto L_934ec; }
    X86_TICK(c, 7);
    // 0934ea  jmp 0x93529
    X86_AT(c, 0x934eau);
    goto L_93529;
L_934ec:
    X86_TICK(c, 13);
    // 0934ec  mov byte ptr [0x8a6f2], 3
    X86_AT(c, 0x934ecu);
    wr8((c.sbase[3] + (uint32_t)(0x8A6F2u)), 0x3u);
    // 0934f3  mov ebx, dword ptr [0x8a6bc]
    X86_AT(c, 0x934f3u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x8A6BCu)));
    // 0934f9  jmp 0x93529
    X86_AT(c, 0x934f9u);
    goto L_93529;
L_93529:
    X86_TICK(c, 8);
    // 093529  les edi, fword ptr [0x8a6dc]
    X86_AT(c, 0x93529u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A6DCu)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 09352f  xor eax, eax
    X86_AT(c, 0x9352fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_93531:
    X86_TICK(c, 12);
    // 093531  cmp dword ptr es:[edi], 0x37384f4e
    X86_AT(c, 0x93531u);
    (void)x86_sub(c, rd32((c.sbase[0] + (uint32_t)(c.r[7]))), 0x37384F4Eu, 0, 4);
    // 093538  jne 0x93584
    X86_AT(c, 0x93538u);
    if (x86_cc(c, 5)) { goto L_93584; }
    X86_TICK(c, 12);
    // 09353a  cmp byte ptr es:[edi + 4], 0x3d
    X86_AT(c, 0x9353au);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u))), 0x3Du, 0, 1);
    // 09353f  jne 0x93584
    X86_AT(c, 0x9353fu);
    if (x86_cc(c, 5)) { goto L_93584; }
    X86_TICK(c, 16);
    // 093541  push eax
    X86_AT(c, 0x93541u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 093542  push edi
    X86_AT(c, 0x93542u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093543  cmp word ptr [0x8a6e3], 0
    X86_AT(c, 0x93543u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A6E3u))), 0x0u, 0, 2);
    // 09354b  je 0x93582
    X86_AT(c, 0x9354bu);
    if (x86_cc(c, 4)) { goto L_93582; }
    X86_TICK(c, 29);
    // 09354d  mov word ptr [0x8a6e3], 0
    X86_AT(c, 0x9354du);
    wr16((c.sbase[3] + (uint32_t)(0x8A6E3u)), 0x0u);
    // 093556  add edi, 5
    X86_AT(c, 0x93556u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x5u, 0, 4); }
    // 093559  mov esi, edi
    X86_AT(c, 0x93559u);
    c.r[6] = c.r[7];
    // 09355b  mov al, 0x20
    X86_AT(c, 0x9355bu);
    s8(c, 0, 0x20u);
    // 09355d  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x9355du);
    x86_string(c, 4, 1, 243, 4, 3);
    // 09355f  dec edi
    X86_AT(c, 0x9355fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 093560  cmp byte ptr es:[edi], 0
    X86_AT(c, 0x93560u);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 093564  je 0x93582
    X86_AT(c, 0x93564u);
    if (x86_cc(c, 4)) { goto L_93582; }
    X86_TICK(c, 2);
    // 093566  mov edi, esi
    X86_AT(c, 0x93566u);
    c.r[7] = c.r[6];
L_93568:
    X86_TICK(c, 11);
    // 093568  mov dl, byte ptr es:[edi]
    X86_AT(c, 0x93568u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 09356b  and dl, dl
    X86_AT(c, 0x9356bu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 09356d  je 0x93576
    X86_AT(c, 0x9356du);
    if (x86_cc(c, 4)) { goto L_93576; }
    X86_TICK(c, 39);
    // 09356f  mov ah, 6
    X86_AT(c, 0x9356fu);
    s8(c, 4, 0x6u);
    // 093571  int 0x21
    X86_AT(c, 0x93571u);
    x86_int(c, 0x21, 0x93573u);
    X86_TICK(c, 9);
    // 093573  inc edi
    X86_AT(c, 0x93573u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 093574  jmp 0x93568
    X86_AT(c, 0x93574u);
    X86_POLL(c, 0x93568u); goto L_93568;
L_93576:
    X86_TICK(c, 41);
    // 093576  mov dl, 0xd
    X86_AT(c, 0x93576u);
    s8(c, 2, 0xDu);
    // 093578  mov ah, 6
    X86_AT(c, 0x93578u);
    s8(c, 4, 0x6u);
    // 09357a  int 0x21
    X86_AT(c, 0x9357au);
    x86_int(c, 0x21, 0x9357cu);
    X86_TICK(c, 41);
    // 09357c  mov dl, 0xa
    X86_AT(c, 0x9357cu);
    s8(c, 2, 0xAu);
    // 09357e  mov ah, 6
    X86_AT(c, 0x9357eu);
    s8(c, 4, 0x6u);
    // 093580  int 0x21
    X86_AT(c, 0x93580u);
    x86_int(c, 0x21, 0x93582u);
L_93582:
    X86_TICK(c, 8);
    // 093582  pop edi
    X86_AT(c, 0x93582u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093583  pop eax
    X86_AT(c, 0x93583u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_93584:
    X86_TICK(c, 21);
    // 093584  mov ecx, 0xffffffff
    X86_AT(c, 0x93584u);
    c.r[1] = 0xFFFFFFFFu;
    // 093589  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x93589u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 09358b  cmp byte ptr es:[edi], 0
    X86_AT(c, 0x9358bu);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 09358f  jne 0x93531
    X86_AT(c, 0x9358fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x93531u); goto L_93531; }
    X86_TICK(c, 14);
    // 093591  add edi, 3
    X86_AT(c, 0x93591u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x3u, 0, 4); }
    // 093594  cmp byte ptr [0x8a6f0], 3
    X86_AT(c, 0x93594u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6F0u))), 0x3u, 0, 1);
    // 09359b  jb 0x935bd
    X86_AT(c, 0x9359bu);
    if (x86_cc(c, 2)) { goto L_935bd; }
    X86_TICK(c, 12);
    // 09359d  cmp byte ptr [0x8a6f2], 1
    X86_AT(c, 0x9359du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6F2u))), 0x1u, 0, 1);
    // 0935a4  jne 0x935ca
    X86_AT(c, 0x935a4u);
    if (x86_cc(c, 5)) { goto L_935ca; }
    X86_TICK(c, 12);
    // 0935a6  cmp byte ptr [0x8a6f2], 3
    X86_AT(c, 0x935a6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6F2u))), 0x3u, 0, 1);
    // 0935ad  je 0x935ca
    X86_AT(c, 0x935adu);
    if (x86_cc(c, 4)) { goto L_935ca; }
    X86_TICK(c, 11);
    // 0935af  mov dword ptr [0x8a6ec], edi
    X86_AT(c, 0x935afu);
    wr32((c.sbase[3] + (uint32_t)(0x8A6ECu)), c.r[7]);
    // 0935b5  mov word ptr [0x8a6f0], ds
    X86_AT(c, 0x935b5u);
    wr16((c.sbase[3] + (uint32_t)(0x8A6F0u)), (uint32_t)c.sreg[3]);
    // 0935bb  jmp 0x935fc
    X86_AT(c, 0x935bbu);
    goto L_935fc;
L_935bd:
    X86_TICK(c, 13);
    // 0935bd  xor edx, edx
    X86_AT(c, 0x935bdu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 0935bf  push edx
    X86_AT(c, 0x935bfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0935c0  mov dword ptr [0x8a6ec], esp
    X86_AT(c, 0x935c0u);
    wr32((c.sbase[3] + (uint32_t)(0x8A6ECu)), c.r[4]);
    // 0935c6  jmp 0x935fc
    X86_AT(c, 0x935c6u);
    goto L_935fc;
L_935ca:
    X86_TICK(c, 62);
    // 0935ca  mov eax, es
    X86_AT(c, 0x935cau);
    c.r[0] = (uint32_t)c.sreg[0];
    // 0935cc  lsl eax, eax
    X86_AT(c, 0x935ccu);
    { uint32_t v; if (x86_lsl(c, (c.r[0] & 0xFFFFu), v)) { c.r[0] = v; c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 0935cf  xor eax, eax
    X86_AT(c, 0x935cfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0935d1  sub ecx, ecx
    X86_AT(c, 0x935d1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0935d3  dec ecx
    X86_AT(c, 0x935d3u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 0935d4  mov ebx, edi
    X86_AT(c, 0x935d4u);
    c.r[3] = c.r[7];
    // 0935d6  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x935d6u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0935d8  sub edi, ebx
    X86_AT(c, 0x935d8u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[3], 0, 4); }
    // 0935da  lea eax, [edi + 3]
    X86_AT(c, 0x935dau);
    c.r[0] = (uint32_t)(c.r[7] + 0x3u);
    // 0935dd  and eax, 0xfffc
    X86_AT(c, 0x935ddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFCu, 4); }
    // 0935e2  sub esp, eax
    X86_AT(c, 0x935e2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0935e4  mov dword ptr [0x8a6ec], esp
    X86_AT(c, 0x935e4u);
    wr32((c.sbase[3] + (uint32_t)(0x8A6ECu)), c.r[4]);
    // 0935ea  mov ecx, edi
    X86_AT(c, 0x935eau);
    c.r[1] = c.r[7];
    // 0935ec  mov esi, ebx
    X86_AT(c, 0x935ecu);
    c.r[6] = c.r[3];
    // 0935ee  mov edi, esp
    X86_AT(c, 0x935eeu);
    c.r[7] = c.r[4];
    // 0935f0  push ds
    X86_AT(c, 0x935f0u);
    push32(c, c.sreg[3]);
    // 0935f1  mov ds, word ptr [0x8a6e0]
    X86_AT(c, 0x935f1u);
    x86_load_seg(c, 3, rd16((c.sbase[3] + (uint32_t)(0x8A6E0u))) & 0xFFFFu);
    // 0935f7  push ss
    X86_AT(c, 0x935f7u);
    push32(c, c.sreg[2]);
    // 0935f8  pop es
    X86_AT(c, 0x935f8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0935f9  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x935f9u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0935fb  pop ds
    X86_AT(c, 0x935fbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_935fc:
    X86_TICK(c, 33);
    // 0935fc  mov eax, dword ptr [0x8a6d8]
    X86_AT(c, 0x935fcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A6D8u)));
    // 093601  inc eax
    X86_AT(c, 0x93601u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 093602  shr eax, 1
    X86_AT(c, 0x93602u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 093604  inc eax
    X86_AT(c, 0x93604u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 093605  inc eax
    X86_AT(c, 0x93605u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 093606  shl eax, 2
    X86_AT(c, 0x93606u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 093609  sub esp, eax
    X86_AT(c, 0x93609u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 09360b  mov dword ptr [0x8a6d2], esp
    X86_AT(c, 0x9360bu);
    wr32((c.sbase[3] + (uint32_t)(0x8A6D2u)), c.r[4]);
    // 093611  push ds
    X86_AT(c, 0x93611u);
    push32(c, c.sreg[3]);
    // 093612  pop es
    X86_AT(c, 0x93612u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 093613  call 0x9463c
    X86_AT(c, 0x93613u);
    push32(c, 0x93618u); x86_call_known(c, 0x9463cu, f_0009463c); X86_RET(c, 0x93618u);
    X86_TICK(c, 7);
    // 093618  call 0x944a4
    X86_AT(c, 0x93618u);
    push32(c, 0x9361du); x86_call_known(c, 0x944a4u, f_000944a4); X86_RET(c, 0x9361du);
    X86_TICK(c, 14);
    // 09361d  push dword ptr [0x8a6d2]
    X86_AT(c, 0x9361du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A6D2u))); push32(c, v); }
    // 093623  sub eax, eax
    X86_AT(c, 0x93623u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 093625  call 0x94540
    X86_AT(c, 0x93625u);
    push32(c, 0x9362au); x86_call_known(c, 0x94540u, f_00094540); X86_RET(c, 0x9362au);
    X86_TICK(c, 14);
    // 09362a  push eax
    X86_AT(c, 0x9362au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09362b  cmp byte ptr [0x8a6e9], 1
    X86_AT(c, 0x9362bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6E9u))), 0x1u, 0, 1);
    // 093632  je 0x93654
    X86_AT(c, 0x93632u);
    if (x86_cc(c, 4)) { goto L_93654; }
    X86_TICK(c, 12);
    // 093634  cmp word ptr [0x8a6f7], 0xabcd
    X86_AT(c, 0x93634u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A6F7u))), 0xABCDu, 0, 2);
    // 09363d  jne 0x93654
    X86_AT(c, 0x9363du);
    if (x86_cc(c, 5)) { goto L_93654; }
    X86_TICK(c, 15);
    // 09363f  mov eax, dword ptr [0x8a6fd]
    X86_AT(c, 0x9363fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A6FDu)));
    // 093644  cmp eax, dword ptr [0x8a6f9]
    X86_AT(c, 0x93644u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A6F9u))), 0, 4);
    // 09364a  jne 0x93654
    X86_AT(c, 0x9364au);
    if (x86_cc(c, 5)) { goto L_93654; }
    X86_TICK(c, 11);
    // 09364c  mov edx, dword ptr [0x8a6fd]
    X86_AT(c, 0x9364cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A6FDu)));
    // 093652  jmp 0x9367b
    X86_AT(c, 0x93652u);
    goto L_9367b;
L_93654:
    X86_TICK(c, 12);
    // 093654  cmp byte ptr [0x8a6e3], 1
    X86_AT(c, 0x93654u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6E3u))), 0x1u, 0, 1);
    // 09365b  je 0x93684
    X86_AT(c, 0x9365bu);
    if (x86_cc(c, 4)) { goto L_93684; }
    X86_TICK(c, 12);
    // 09365d  cmp word ptr [0x8a701], 0xabcd
    X86_AT(c, 0x9365du);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A701u))), 0xABCDu, 0, 2);
    // 093666  jne 0x93684
    X86_AT(c, 0x93666u);
    if (x86_cc(c, 5)) { goto L_93684; }
    X86_TICK(c, 15);
    // 093668  mov eax, dword ptr [0x8a707]
    X86_AT(c, 0x93668u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A707u)));
    // 09366d  cmp eax, dword ptr [0x8a703]
    X86_AT(c, 0x9366du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A703u))), 0, 4);
    // 093673  jne 0x93684
    X86_AT(c, 0x93673u);
    if (x86_cc(c, 5)) { goto L_93684; }
    X86_TICK(c, 4);
    // 093675  mov edx, dword ptr [0x8a707]
    X86_AT(c, 0x93675u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A707u)));
L_9367b:
    X86_TICK(c, 39);
    // 09367b  mov ah, 9
    X86_AT(c, 0x9367bu);
    s8(c, 4, 0x9u);
    // 09367d  int 0x21
    X86_AT(c, 0x9367du);
    x86_int(c, 0x21, 0x9367fu);
    X86_TICK(c, 7);
    // 09367f  jmp 0x931db
    X86_AT(c, 0x9367fu);
    X86_POLL(c, 0x931dbu); goto L_931db;
L_93684:
    X86_TICK(c, 12);
    // 093684  cmp byte ptr [0x8a6e7], 1
    X86_AT(c, 0x93684u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6E7u))), 0x1u, 0, 1);
    // 09368b  je 0x936b8
    X86_AT(c, 0x9368bu);
    if (x86_cc(c, 4)) { goto L_936b8; }
    X86_TICK(c, 12);
    // 09368d  cmp word ptr [0x8a70b], 0xabcd
    X86_AT(c, 0x9368du);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A70Bu))), 0xABCDu, 0, 2);
    // 093696  jne 0x936b8
    X86_AT(c, 0x93696u);
    if (x86_cc(c, 5)) { goto L_936b8; }
    X86_TICK(c, 43);
    // 093698  mov edx, dword ptr cs:[0x936b4]
    X86_AT(c, 0x93698u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(0x936B4u)));
    // 09369f  mov ah, 9
    X86_AT(c, 0x9369fu);
    s8(c, 4, 0x9u);
    // 0936a1  int 0x21
    X86_AT(c, 0x936a1u);
    x86_int(c, 0x21, 0x936a3u);
    X86_TICK(c, 13);
    // 0936a3  mov edx, dword ptr [0x8a707]
    X86_AT(c, 0x936a3u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A707u)));
    // 0936a9  add edx, 0xa
    X86_AT(c, 0x936a9u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xAu, 0, 4); }
    // 0936ac  jmp 0x9367b
    X86_AT(c, 0x936acu);
    X86_POLL(c, 0x9367bu); goto L_9367b;
L_936b8:
    X86_TICK(c, 7);
    // 0936b8  jmp 0x931d6
    X86_AT(c, 0x936b8u);
    X86_POLL(c, 0x931d6u); goto L_931d6;
    x86_fault(c, 0x931d4u, "ran off the end of a function");
}
void f_000931e5(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0931e5  ret 
    X86_AT(c, 0x931e5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x931e5u, "ran off the end of a function");
}
void f_000936be(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0936be  mov eax, dword ptr [0x8a6bc]
    X86_AT(c, 0x936beu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A6BCu)));
    // 0936c3  add eax, 0x10
    X86_AT(c, 0x936c3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 0936c8  ret 
    X86_AT(c, 0x936c8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x936beu, "ran off the end of a function");
}
void f_000936ca(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0936ca  mov eax, dword ptr [0x8a6c4]
    X86_AT(c, 0x936cau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A6C4u)));
    // 0936cf  ret 
    X86_AT(c, 0x936cfu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x936cau, "ran off the end of a function");
}
void f_000936d0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0936d0  push ebx
    X86_AT(c, 0x936d0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0936d1  cmp byte ptr [0x8a6f2], 2
    X86_AT(c, 0x936d1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A6F2u))), 0x2u, 0, 1);
    // 0936d8  je 0x93715
    X86_AT(c, 0x936d8u);
    if (x86_cc(c, 4)) { goto L_93715; }
    X86_TICK(c, 7);
    // 0936da  jmp 0x93715
    X86_AT(c, 0x936dau);
    goto L_93715;
L_93715:
    X86_TICK(c, 14);
    // 093715  pop ebx
    X86_AT(c, 0x93715u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093716  ret 4
    X86_AT(c, 0x93716u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x936d0u, "ran off the end of a function");
}
void f_00093719(X86Cpu& c) {
    X86_TICK(c, 10);
    // 093719  ret 8
    X86_AT(c, 0x93719u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x93719u, "ran off the end of a function");
}
void f_0009372f(X86Cpu& c) {
    X86_TICK(c, 61);
    // 09372f  push ebp
    X86_AT(c, 0x9372fu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093730  mov ebp, esp
    X86_AT(c, 0x93730u);
    c.r[5] = c.r[4];
    // 093732  push esi
    X86_AT(c, 0x93732u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093733  push edi
    X86_AT(c, 0x93733u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093734  push ebx
    X86_AT(c, 0x93734u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093735  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0x93735u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 093739  mov cx, 0
    X86_AT(c, 0x93739u);
    s16(c, 1, 0x0u);
    // 09373d  mov dx, 0
    X86_AT(c, 0x9373du);
    s16(c, 2, 0x0u);
    // 093741  mov al, 1
    X86_AT(c, 0x93741u);
    s8(c, 0, 0x1u);
    // 093743  mov ah, 0x42
    X86_AT(c, 0x93743u);
    s8(c, 4, 0x42u);
    // 093745  clc 
    X86_AT(c, 0x93745u);
    c.fl &= ~X86_CF;
    // 093746  int 0x21
    X86_AT(c, 0x93746u);
    x86_int(c, 0x21, 0x93748u);
    X86_TICK(c, 5);
    // 093748  jb 0x93797
    X86_AT(c, 0x93748u);
    if (x86_cc(c, 2)) { goto L_93797; }
    X86_TICK(c, 57);
    // 09374a  mov ecx, 0x937ad
    X86_AT(c, 0x9374au);
    c.r[1] = 0x937ADu;
    // 09374f  mov word ptr [ecx + 2], dx
    X86_AT(c, 0x9374fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 093753  mov word ptr [ecx], ax
    X86_AT(c, 0x93753u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[0] & 0xFFFFu));
    // 093756  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0x93756u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 09375a  mov cx, 0
    X86_AT(c, 0x9375au);
    s16(c, 1, 0x0u);
    // 09375e  mov dx, 0
    X86_AT(c, 0x9375eu);
    s16(c, 2, 0x0u);
    // 093762  mov al, 2
    X86_AT(c, 0x93762u);
    s8(c, 0, 0x2u);
    // 093764  mov ah, 0x42
    X86_AT(c, 0x93764u);
    s8(c, 4, 0x42u);
    // 093766  clc 
    X86_AT(c, 0x93766u);
    c.fl &= ~X86_CF;
    // 093767  int 0x21
    X86_AT(c, 0x93767u);
    x86_int(c, 0x21, 0x93769u);
    X86_TICK(c, 5);
    // 093769  jb 0x93797
    X86_AT(c, 0x93769u);
    if (x86_cc(c, 2)) { goto L_93797; }
    X86_TICK(c, 63);
    // 09376b  mov ecx, 0x937b1
    X86_AT(c, 0x9376bu);
    c.r[1] = 0x937B1u;
    // 093770  mov word ptr [ecx + 2], dx
    X86_AT(c, 0x93770u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 093774  mov word ptr [ecx], ax
    X86_AT(c, 0x93774u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[0] & 0xFFFFu));
    // 093777  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0x93777u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 09377b  mov eax, 0x937ad
    X86_AT(c, 0x9377bu);
    c.r[0] = 0x937ADu;
    // 093780  mov cx, word ptr [eax + 2]
    X86_AT(c, 0x93780u);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2u))));
    // 093784  mov dx, word ptr [eax]
    X86_AT(c, 0x93784u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093787  mov al, 0
    X86_AT(c, 0x93787u);
    s8(c, 0, 0x0u);
    // 093789  mov ah, 0x42
    X86_AT(c, 0x93789u);
    s8(c, 4, 0x42u);
    // 09378b  clc 
    X86_AT(c, 0x9378bu);
    c.fl &= ~X86_CF;
    // 09378c  int 0x21
    X86_AT(c, 0x9378cu);
    x86_int(c, 0x21, 0x9378eu);
    X86_TICK(c, 5);
    // 09378e  jb 0x93797
    X86_AT(c, 0x9378eu);
    if (x86_cc(c, 2)) { goto L_93797; }
    X86_TICK(c, 11);
    // 093790  mov eax, dword ptr [0x937b1]
    X86_AT(c, 0x93790u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x937B1u)));
    // 093795  jmp 0x937a6
    X86_AT(c, 0x93795u);
    goto L_937a6;
L_93797:
    X86_TICK(c, 6);
    // 093797  and eax, 0xffff
    X86_AT(c, 0x93797u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 09379c  mov dword ptr [0x8a96e], eax
    X86_AT(c, 0x9379cu);
    wr32((c.sbase[3] + (uint32_t)(0x8A96Eu)), c.r[0]);
    // 0937a1  mov eax, 0xffffffff
    X86_AT(c, 0x937a1u);
    c.r[0] = 0xFFFFFFFFu;
L_937a6:
    X86_TICK(c, 28);
    // 0937a6  pop ebx
    X86_AT(c, 0x937a6u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0937a7  pop edi
    X86_AT(c, 0x937a7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0937a8  pop esi
    X86_AT(c, 0x937a8u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0937a9  mov esp, ebp
    X86_AT(c, 0x937a9u);
    c.r[4] = c.r[5];
    // 0937ab  pop ebp
    X86_AT(c, 0x937abu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0937ac  ret 
    X86_AT(c, 0x937acu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9372fu, "ran off the end of a function");
}
void f_0009385a(X86Cpu& c) {
    X86_TICK(c, 75);
    // 09385a  push ebp
    X86_AT(c, 0x9385au);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09385b  mov ebp, esp
    X86_AT(c, 0x9385bu);
    c.r[5] = c.r[4];
    // 09385d  push esi
    X86_AT(c, 0x9385du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09385e  push edi
    X86_AT(c, 0x9385eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09385f  push ebx
    X86_AT(c, 0x9385fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093860  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x93860u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093863  mov eax, dword ptr [esi]
    X86_AT(c, 0x93863u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 093865  mov ebx, dword ptr [esi + 4]
    X86_AT(c, 0x93865u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 093868  mov ecx, dword ptr [esi + 8]
    X86_AT(c, 0x93868u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 09386b  mov edx, dword ptr [esi + 0xc]
    X86_AT(c, 0x9386bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)));
    // 09386e  mov edi, dword ptr [esi + 0x14]
    X86_AT(c, 0x9386eu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)));
    // 093871  mov esi, dword ptr [esi + 0x10]
    X86_AT(c, 0x93871u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)));
    // 093874  int 0x21
    X86_AT(c, 0x93874u);
    x86_int(c, 0x21, 0x93876u);
    X86_TICK(c, 67);
    // 093876  push edi
    X86_AT(c, 0x93876u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093877  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x93877u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09387a  mov dword ptr [edi], eax
    X86_AT(c, 0x9387au);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 09387c  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x9387cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 09387f  mov dword ptr [edi + 8], ecx
    X86_AT(c, 0x9387fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), c.r[1]);
    // 093882  mov dword ptr [edi + 0xc], edx
    X86_AT(c, 0x93882u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), c.r[2]);
    // 093885  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0x93885u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 093888  pushfd 
    X86_AT(c, 0x93888u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 093889  pop dword ptr [edi + 0x18]
    X86_AT(c, 0x93889u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), v); }
    // 09388c  and dword ptr [edi + 0x18], 1
    X86_AT(c, 0x9388cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1u, 4)); }
    // 093890  pop dword ptr [edi + 0x14]
    X86_AT(c, 0x93890u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), v); }
    // 093893  pop ebx
    X86_AT(c, 0x93893u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093894  pop edi
    X86_AT(c, 0x93894u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093895  pop esi
    X86_AT(c, 0x93895u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093896  mov esp, ebp
    X86_AT(c, 0x93896u);
    c.r[4] = c.r[5];
    // 093898  pop ebp
    X86_AT(c, 0x93898u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 093899  ret 
    X86_AT(c, 0x93899u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9385au, "ran off the end of a function");
}
void f_00093920(X86Cpu& c) {
    X86_TICK(c, 32);
    // 093920  push ebp
    X86_AT(c, 0x93920u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093921  mov ebp, esp
    X86_AT(c, 0x93921u);
    c.r[5] = c.r[4];
    // 093923  push ebx
    X86_AT(c, 0x93923u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093924  push esi
    X86_AT(c, 0x93924u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093925  push edi
    X86_AT(c, 0x93925u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093926  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x93926u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093929  mov esi, edi
    X86_AT(c, 0x93929u);
    c.r[6] = c.r[7];
    // 09392b  and byte ptr [esi + 0xc], 0x7f
    X86_AT(c, 0x9392bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 09392f  mov eax, 0x8a710
    X86_AT(c, 0x9392fu);
    c.r[0] = 0x8A710u;
    // 093934  cmp eax, edi
    X86_AT(c, 0x93934u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 093936  jne 0x93950
    X86_AT(c, 0x93936u);
    if (x86_cc(c, 5)) { goto L_93950; }
    X86_TICK(c, 13);
    // 093938  mov al, byte ptr [esi + 0xe]
    X86_AT(c, 0x93938u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu))));
    // 09393b  push eax
    X86_AT(c, 0x9393bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09393c  call 0x94eb0
    X86_AT(c, 0x9393cu);
    push32(c, 0x93941u); x86_call_known(c, 0x94eb0u, f_00094eb0); X86_RET(c, 0x93941u);
    X86_TICK(c, 10);
    // 093941  xchg ebx, eax
    X86_AT(c, 0x93941u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 093942  cmp bl, 1
    X86_AT(c, 0x93942u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 093945  je 0x93950
    X86_AT(c, 0x93945u);
    if (x86_cc(c, 4)) { goto L_93950; }
    X86_TICK(c, 7);
    // 093947  cmp bl, 2
    X86_AT(c, 0x93947u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 09394a  je 0x93950
    X86_AT(c, 0x9394au);
    if (x86_cc(c, 4)) { goto L_93950; }
    X86_TICK(c, 7);
    // 09394c  or byte ptr [esi + 0xc], 1
    X86_AT(c, 0x9394cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_93950:
    X86_TICK(c, 9);
    // 093950  mov eax, 0x8a724
    X86_AT(c, 0x93950u);
    c.r[0] = 0x8A724u;
    // 093955  cmp eax, edi
    X86_AT(c, 0x93955u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 093957  jne 0x93970
    X86_AT(c, 0x93957u);
    if (x86_cc(c, 5)) { goto L_93970; }
    X86_TICK(c, 13);
    // 093959  mov al, byte ptr [esi + 0xe]
    X86_AT(c, 0x93959u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu))));
    // 09395c  push eax
    X86_AT(c, 0x9395cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09395d  call 0x94eb0
    X86_AT(c, 0x9395du);
    push32(c, 0x93962u); x86_call_known(c, 0x94eb0u, f_00094eb0); X86_RET(c, 0x93962u);
    X86_TICK(c, 7);
    // 093962  cmp al, 2
    X86_AT(c, 0x93962u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 093964  jne 0x9396c
    X86_AT(c, 0x93964u);
    if (x86_cc(c, 5)) { goto L_9396c; }
    X86_TICK(c, 14);
    // 093966  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0x93966u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
    // 09396a  jmp 0x93970
    X86_AT(c, 0x9396au);
    goto L_93970;
L_9396c:
    X86_TICK(c, 7);
    // 09396c  or byte ptr [esi + 0xc], 1
    X86_AT(c, 0x9396cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_93970:
    X86_TICK(c, 9);
    // 093970  mov eax, 0x8a738
    X86_AT(c, 0x93970u);
    c.r[0] = 0x8A738u;
    // 093975  cmp eax, edi
    X86_AT(c, 0x93975u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 093977  jne 0x9397d
    X86_AT(c, 0x93977u);
    if (x86_cc(c, 5)) { goto L_9397d; }
    X86_TICK(c, 7);
    // 093979  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0x93979u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
L_9397d:
    X86_TICK(c, 12);
    // 09397d  test byte ptr [esi + 0xc], 1
    X86_AT(c, 0x9397du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu))) & 0x1u, 1);
    // 093981  je 0x939a5
    X86_AT(c, 0x93981u);
    if (x86_cc(c, 4)) { goto L_939a5; }
    X86_TICK(c, 9);
    // 093983  push 0x201
    X86_AT(c, 0x93983u);
    { uint32_t v = 0x201u; push32(c, v); }
    // 093988  call 0x92ff0
    X86_AT(c, 0x93988u);
    push32(c, 0x9398du); x86_call_known(c, 0x92ff0u, f_00092ff0); X86_RET(c, 0x9398du);
    X86_TICK(c, 13);
    // 09398d  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x9398du);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 093990  pop ecx
    X86_AT(c, 0x93990u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 093991  and eax, eax
    X86_AT(c, 0x93991u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 093993  jne 0x93999
    X86_AT(c, 0x93993u);
    if (x86_cc(c, 5)) { goto L_93999; }
    X86_TICK(c, 7);
    // 093995  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0x93995u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
L_93999:
    X86_TICK(c, 8);
    // 093999  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x93999u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 09399c  mov dword ptr [esi], eax
    X86_AT(c, 0x9399cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 09399e  mov dword ptr [esi + 4], 0xffffffff
    X86_AT(c, 0x9399eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), 0xFFFFFFFFu);
L_939a5:
    X86_TICK(c, 30);
    // 0939a5  mov word ptr [esi + 0x10], 0xffff
    X86_AT(c, 0x939a5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0xFFFFu);
    // 0939ab  pop edi
    X86_AT(c, 0x939abu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0939ac  pop esi
    X86_AT(c, 0x939acu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0939ad  pop ebx
    X86_AT(c, 0x939adu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0939ae  leave 
    X86_AT(c, 0x939aeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0939af  ret 4
    X86_AT(c, 0x939afu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x93920u, "ran off the end of a function");
}
void f_000939cc(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0939cc  push ebp
    X86_AT(c, 0x939ccu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0939cd  mov ebp, esp
    X86_AT(c, 0x939cdu);
    c.r[5] = c.r[4];
    // 0939cf  push ebx
    X86_AT(c, 0x939cfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0939d0  push esi
    X86_AT(c, 0x939d0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0939d1  push edi
    X86_AT(c, 0x939d1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0939d2  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x939d2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0939d5  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x939d5u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0939d8  jmp 0x939f6
    X86_AT(c, 0x939d8u);
    goto L_939f6;
L_939da:
    X86_TICK(c, 9);
    // 0939da  mov eax, 0xa
    X86_AT(c, 0x939dau);
    c.r[0] = 0xAu;
    // 0939df  cmp eax, esi
    X86_AT(c, 0x939dfu);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0939e1  jb 0x939e5
    X86_AT(c, 0x939e1u);
    if (x86_cc(c, 2)) { goto L_939e5; }
    X86_TICK(c, 2);
    // 0939e3  mov eax, esi
    X86_AT(c, 0x939e3u);
    c.r[0] = c.r[6];
L_939e5:
    X86_TICK(c, 18);
    // 0939e5  xchg ebx, eax
    X86_AT(c, 0x939e5u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0939e6  push ebx
    X86_AT(c, 0x939e6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0939e7  push edi
    X86_AT(c, 0x939e7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0939e8  mov ecx, dword ptr [0x8a614]
    X86_AT(c, 0x939e8u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A614u)));
    // 0939ee  call dword ptr [0x8a610]
    X86_AT(c, 0x939eeu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A610u))); push32(c, 0x939f4u); x86_call(c, t); X86_RET(c, 0x939f4u); }
    X86_TICK(c, 2);
    // 0939f4  sub esi, ebx
    X86_AT(c, 0x939f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[3], 0, 4); }
L_939f6:
    X86_TICK(c, 7);
    // 0939f6  and esi, esi
    X86_AT(c, 0x939f6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0939f8  ja 0x939da
    X86_AT(c, 0x939f8u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x939dau); goto L_939da; }
    X86_TICK(c, 28);
    // 0939fa  pop edi
    X86_AT(c, 0x939fau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0939fb  pop esi
    X86_AT(c, 0x939fbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0939fc  pop ebx
    X86_AT(c, 0x939fcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0939fd  leave 
    X86_AT(c, 0x939fdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0939fe  ret 8
    X86_AT(c, 0x939feu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x939ccu, "ran off the end of a function");
}
void f_00093a14(X86Cpu& c) {
    X86_TICK(c, 23);
    // 093a14  push ebp
    X86_AT(c, 0x93a14u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093a15  mov ebp, esp
    X86_AT(c, 0x93a15u);
    c.r[5] = c.r[4];
    // 093a17  push esi
    X86_AT(c, 0x93a17u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093a18  push edi
    X86_AT(c, 0x93a18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093a19  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x93a19u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093a1c  mov eax, dword ptr [0x8a600]
    X86_AT(c, 0x93a1cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A600u)));
    // 093a21  cmp eax, 0xffff
    X86_AT(c, 0x93a21u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 093a26  je 0x93a5a
    X86_AT(c, 0x93a26u);
    if (x86_cc(c, 4)) { goto L_93a5a; }
    X86_TICK(c, 7);
    // 093a28  cmp edi, eax
    X86_AT(c, 0x93a28u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 093a2a  jae 0x93a5a
    X86_AT(c, 0x93a2au);
    if (x86_cc(c, 3)) { goto L_93a5a; }
    X86_TICK(c, 24);
    // 093a2c  xchg esi, eax
    X86_AT(c, 0x93a2cu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 093a2d  sub esi, edi
    X86_AT(c, 0x93a2du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 093a2f  add dword ptr [0x8a60c], esi
    X86_AT(c, 0x93a2fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A60Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 093a35  test byte ptr [0x8a5fc], 0x10
    X86_AT(c, 0x93a35u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x10u, 1);
    // 093a3c  je 0x93a4f
    X86_AT(c, 0x93a3cu);
    if (x86_cc(c, 4)) { goto L_93a4f; }
    X86_TICK(c, 12);
    // 093a3e  test byte ptr [0x8a5fc], 1
    X86_AT(c, 0x93a3eu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x1u, 1);
    // 093a45  jne 0x93a4f
    X86_AT(c, 0x93a45u);
    if (x86_cc(c, 5)) { goto L_93a4f; }
    X86_TICK(c, 11);
    // 093a47  push esi
    X86_AT(c, 0x93a47u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093a48  push 0x8a618
    X86_AT(c, 0x93a48u);
    { uint32_t v = 0x8A618u; push32(c, v); }
    // 093a4d  jmp 0x93a55
    X86_AT(c, 0x93a4du);
    goto L_93a55;
L_93a4f:
    X86_TICK(c, 4);
    // 093a4f  push esi
    X86_AT(c, 0x93a4fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093a50  push 0x8a622
    X86_AT(c, 0x93a50u);
    { uint32_t v = 0x8A622u; push32(c, v); }
L_93a55:
    X86_TICK(c, 7);
    // 093a55  call 0x939cc
    X86_AT(c, 0x93a55u);
    push32(c, 0x93a5au); x86_call_known(c, 0x939ccu, f_000939cc); X86_RET(c, 0x93a5au);
L_93a5a:
    X86_TICK(c, 24);
    // 093a5a  pop edi
    X86_AT(c, 0x93a5au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093a5b  pop esi
    X86_AT(c, 0x93a5bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093a5c  leave 
    X86_AT(c, 0x93a5cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093a5d  ret 4
    X86_AT(c, 0x93a5du);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x93a14u, "ran off the end of a function");
}
void f_00093a80(X86Cpu& c) {
    X86_TICK(c, 25);
    // 093a80  push ebp
    X86_AT(c, 0x93a80u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093a81  mov ebp, esp
    X86_AT(c, 0x93a81u);
    c.r[5] = c.r[4];
    // 093a83  push ecx
    X86_AT(c, 0x93a83u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093a84  sub esp, 8
    X86_AT(c, 0x93a84u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 093a87  push ebx
    X86_AT(c, 0x93a87u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093a88  mov eax, dword ptr [0x8a92c]
    X86_AT(c, 0x93a88u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093a8d  mov bl, byte ptr [eax]
    X86_AT(c, 0x93a8du);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093a8f  cmp bl, 0x2a
    X86_AT(c, 0x93a8fu);
    (void)x86_sub(c, g8(c, 3), 0x2Au, 0, 1);
    // 093a92  je 0x93ab6
    X86_AT(c, 0x93a92u);
    if (x86_cc(c, 4)) { goto L_93ab6; }
    X86_TICK(c, 7);
    // 093a94  cmp bl, 0x31
    X86_AT(c, 0x93a94u);
    (void)x86_sub(c, g8(c, 3), 0x31u, 0, 1);
    // 093a97  jb 0x93a9e
    X86_AT(c, 0x93a97u);
    if (x86_cc(c, 2)) { goto L_93a9e; }
    X86_TICK(c, 7);
    // 093a99  cmp bl, 0x39
    X86_AT(c, 0x93a99u);
    (void)x86_sub(c, g8(c, 3), 0x39u, 0, 1);
    // 093a9c  jbe 0x93ab6
    X86_AT(c, 0x93a9cu);
    if (x86_cc(c, 6)) { goto L_93ab6; }
L_93a9e:
    X86_TICK(c, 12);
    // 093a9e  cmp byte ptr [ebp + 0xc], 0
    X86_AT(c, 0x93a9eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 1);
    // 093aa2  je 0x93b5c
    X86_AT(c, 0x93aa2u);
    if (x86_cc(c, 4)) { goto L_93b5c; }
    X86_TICK(c, 16);
    // 093aa8  mov eax, dword ptr [0x8a92c]
    X86_AT(c, 0x93aa8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093aad  cmp byte ptr [eax], 0x30
    X86_AT(c, 0x93aadu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x30u, 0, 1);
    // 093ab0  jne 0x93b5c
    X86_AT(c, 0x93ab0u);
    if (x86_cc(c, 5)) { goto L_93b5c; }
L_93ab6:
    X86_TICK(c, 17);
    // 093ab6  mov eax, dword ptr [0x8a92c]
    X86_AT(c, 0x93ab6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093abb  mov al, byte ptr [eax]
    X86_AT(c, 0x93abbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093abd  mov byte ptr [ebp - 9], al
    X86_AT(c, 0x93abdu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 093ac0  cmp al, 0x30
    X86_AT(c, 0x93ac0u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 093ac2  jb 0x93b0b
    X86_AT(c, 0x93ac2u);
    if (x86_cc(c, 2)) { goto L_93b0b; }
    X86_TICK(c, 7);
    // 093ac4  cmp al, 0x39
    X86_AT(c, 0x93ac4u);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 093ac6  ja 0x93b0b
    X86_AT(c, 0x93ac6u);
    if (x86_cc(c, 7)) { goto L_93b0b; }
    X86_TICK(c, 9);
    // 093ac8  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0x93ac8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 093acf  jmp 0x93af0
    X86_AT(c, 0x93acfu);
    goto L_93af0;
L_93ad1:
    X86_TICK(c, 30);
    // 093ad1  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x93ad1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 093ad4  lea eax, [eax + eax*4]
    X86_AT(c, 0x93ad4u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 093ad7  add eax, eax
    X86_AT(c, 0x93ad7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 093ad9  mov edx, dword ptr [0x8a92c]
    X86_AT(c, 0x93ad9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093adf  movzx ecx, byte ptr [edx]
    X86_AT(c, 0x93adfu);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(c.r[2])));
    // 093ae2  add ecx, eax
    X86_AT(c, 0x93ae2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 093ae4  sub ecx, 0x30
    X86_AT(c, 0x93ae4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x30u, 0, 4); }
    // 093ae7  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0x93ae7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 093aea  inc dword ptr [0x8a92c]
    X86_AT(c, 0x93aeau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A92Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_93af0:
    X86_TICK(c, 17);
    // 093af0  mov eax, dword ptr [0x8a92c]
    X86_AT(c, 0x93af0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093af5  mov al, byte ptr [eax]
    X86_AT(c, 0x93af5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093af7  mov byte ptr [ebp - 0xa], al
    X86_AT(c, 0x93af7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), g8(c, 0));
    // 093afa  cmp al, 0x30
    X86_AT(c, 0x93afau);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 093afc  jb 0x93b72
    X86_AT(c, 0x93afcu);
    if (x86_cc(c, 2)) { goto L_93b72; }
    X86_TICK(c, 7);
    // 093b02  cmp al, 0x39
    X86_AT(c, 0x93b02u);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 093b04  jbe 0x93ad1
    X86_AT(c, 0x93b04u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x93ad1u); goto L_93ad1; }
    X86_TICK(c, 7);
    // 093b06  jmp 0x93b72
    X86_AT(c, 0x93b06u);
    goto L_93b72;
L_93b0b:
    X86_TICK(c, 16);
    // 093b0b  mov eax, dword ptr [0x8a92c]
    X86_AT(c, 0x93b0bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093b10  cmp byte ptr [eax], 0x2a
    X86_AT(c, 0x93b10u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Au, 0, 1);
    // 093b13  jne 0x93b72
    X86_AT(c, 0x93b13u);
    if (x86_cc(c, 5)) { goto L_93b72; }
    X86_TICK(c, 16);
    // 093b15  mov eax, dword ptr [0x8a918]
    X86_AT(c, 0x93b15u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A918u)));
    // 093b1a  cmp dword ptr [eax], 0
    X86_AT(c, 0x93b1au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 4);
    // 093b1d  jge 0x93b43
    X86_AT(c, 0x93b1du);
    if (x86_cc(c, 13)) { goto L_93b43; }
    X86_TICK(c, 12);
    // 093b1f  cmp byte ptr [ebp + 8], 0x50
    X86_AT(c, 0x93b1fu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x50u, 0, 1);
    // 093b23  jne 0x93b2e
    X86_AT(c, 0x93b23u);
    if (x86_cc(c, 5)) { goto L_93b2e; }
    X86_TICK(c, 9);
    // 093b25  mov dword ptr [ebp - 8], 0xffff
    X86_AT(c, 0x93b25u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFu);
    // 093b2c  jmp 0x93b4d
    X86_AT(c, 0x93b2cu);
    goto L_93b4d;
L_93b2e:
    X86_TICK(c, 26);
    // 093b2e  mov eax, dword ptr [0x8a918]
    X86_AT(c, 0x93b2eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A918u)));
    // 093b33  mov eax, dword ptr [eax]
    X86_AT(c, 0x93b33u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 093b35  neg eax
    X86_AT(c, 0x93b35u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 093b37  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x93b37u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 093b3a  or byte ptr [0x8a5fc], 1
    X86_AT(c, 0x93b3au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A5FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
    // 093b41  jmp 0x93b4d
    X86_AT(c, 0x93b41u);
    goto L_93b4d;
L_93b43:
    X86_TICK(c, 10);
    // 093b43  mov eax, dword ptr [0x8a918]
    X86_AT(c, 0x93b43u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A918u)));
    // 093b48  mov eax, dword ptr [eax]
    X86_AT(c, 0x93b48u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 093b4a  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x93b4au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_93b4d:
    X86_TICK(c, 20);
    // 093b4d  add dword ptr [0x8a918], 4
    X86_AT(c, 0x93b4du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A918u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 093b54  inc dword ptr [0x8a92c]
    X86_AT(c, 0x93b54u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A92Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 093b5a  jmp 0x93b72
    X86_AT(c, 0x93b5au);
    goto L_93b72;
L_93b5c:
    X86_TICK(c, 12);
    // 093b5c  cmp byte ptr [ebp + 8], 0x50
    X86_AT(c, 0x93b5cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x50u, 0, 1);
    // 093b60  jne 0x93b6b
    X86_AT(c, 0x93b60u);
    if (x86_cc(c, 5)) { goto L_93b6b; }
    X86_TICK(c, 9);
    // 093b62  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0x93b62u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 093b69  jmp 0x93b72
    X86_AT(c, 0x93b69u);
    goto L_93b72;
L_93b6b:
    X86_TICK(c, 2);
    // 093b6b  mov dword ptr [ebp - 8], 0xffff
    X86_AT(c, 0x93b6bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFu);
L_93b72:
    X86_TICK(c, 24);
    // 093b72  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x93b72u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 093b75  pop ebx
    X86_AT(c, 0x93b75u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093b76  leave 
    X86_AT(c, 0x93b76u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093b77  ret 8
    X86_AT(c, 0x93b77u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x93a80u, "ran off the end of a function");
}
void f_00093b90(X86Cpu& c) {
    X86_TICK(c, 20);
    // 093b90  push ebp
    X86_AT(c, 0x93b90u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093b91  mov ebp, esp
    X86_AT(c, 0x93b91u);
    c.r[5] = c.r[4];
    // 093b93  push ecx
    X86_AT(c, 0x93b93u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093b94  push eax
    X86_AT(c, 0x93b94u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 093b95  push ebx
    X86_AT(c, 0x93b95u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093b96  push esi
    X86_AT(c, 0x93b96u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093b97  push edi
    X86_AT(c, 0x93b97u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093b98  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x93b98u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093b9b  mov dword ptr [0x8a92c], eax
    X86_AT(c, 0x93b9bu);
    wr32((c.sbase[3] + (uint32_t)(0x8A92Cu)), c.r[0]);
L_93ba0:
    X86_TICK(c, 29);
    // 093ba0  sub eax, eax
    X86_AT(c, 0x93ba0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 093ba2  mov byte ptr [0x8a5fc], al
    X86_AT(c, 0x93ba2u);
    wr8((c.sbase[3] + (uint32_t)(0x8A5FCu)), g8(c, 0));
    // 093ba7  mov edx, 0xffff
    X86_AT(c, 0x93ba7u);
    c.r[2] = 0xFFFFu;
    // 093bac  mov dword ptr [0x8a600], edx
    X86_AT(c, 0x93bacu);
    wr32((c.sbase[3] + (uint32_t)(0x8A600u)), c.r[2]);
    // 093bb2  mov dword ptr [0x8a604], edx
    X86_AT(c, 0x93bb2u);
    wr32((c.sbase[3] + (uint32_t)(0x8A604u)), c.r[2]);
    // 093bb8  mov byte ptr [0x8a608], 1
    X86_AT(c, 0x93bb8u);
    wr8((c.sbase[3] + (uint32_t)(0x8A608u)), 0x1u);
    // 093bbf  mov edi, eax
    X86_AT(c, 0x93bbfu);
    c.r[7] = c.r[0];
    // 093bc1  mov edx, dword ptr [0x8a92c]
    X86_AT(c, 0x93bc1u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093bc7  cmp al, byte ptr [edx]
    X86_AT(c, 0x93bc7u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0, 1);
    // 093bc9  je 0x93d78
    X86_AT(c, 0x93bc9u);
    if (x86_cc(c, 4)) { goto L_93d78; }
    X86_TICK(c, 16);
    // 093bcf  mov eax, dword ptr [0x8a92c]
    X86_AT(c, 0x93bcfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093bd4  cmp byte ptr [eax], 0x25
    X86_AT(c, 0x93bd4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x25u, 0, 1);
    // 093bd7  je 0x93c1c
    X86_AT(c, 0x93bd7u);
    if (x86_cc(c, 4)) { goto L_93c1c; }
    X86_TICK(c, 28);
    // 093bd9  mov edx, dword ptr [0x8a924]
    X86_AT(c, 0x93bd9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A924u)));
    // 093bdf  mov al, 0x25
    X86_AT(c, 0x93bdfu);
    s8(c, 0, 0x25u);
    // 093be1  mov ecx, dword ptr [0x8a92c]
    X86_AT(c, 0x93be1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093be7  push edi
    X86_AT(c, 0x93be7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093be8  mov edi, ecx
    X86_AT(c, 0x93be8u);
    c.r[7] = c.r[1];
    // 093bea  mov ecx, edx
    X86_AT(c, 0x93beau);
    c.r[1] = c.r[2];
    // 093bec  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x93becu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 093bee  jne 0x93bf3
    X86_AT(c, 0x93beeu);
    if (x86_cc(c, 5)) { goto L_93bf3; }
    X86_TICK(c, 4);
    // 093bf0  inc ecx
    X86_AT(c, 0x93bf0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 093bf1  sub edx, ecx
    X86_AT(c, 0x93bf1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_93bf3:
    X86_TICK(c, 41);
    // 093bf3  pop edi
    X86_AT(c, 0x93bf3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093bf4  mov edi, edx
    X86_AT(c, 0x93bf4u);
    c.r[7] = c.r[2];
    // 093bf6  mov eax, dword ptr [0x8a92c]
    X86_AT(c, 0x93bf6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093bfb  mov dword ptr [0x8a91c], eax
    X86_AT(c, 0x93bfbu);
    wr32((c.sbase[3] + (uint32_t)(0x8A91Cu)), c.r[0]);
    // 093c00  mov dword ptr [0x8a920], edi
    X86_AT(c, 0x93c00u);
    wr32((c.sbase[3] + (uint32_t)(0x8A920u)), c.r[7]);
    // 093c06  add dword ptr [0x8a92c], edi
    X86_AT(c, 0x93c06u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A92Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 093c0c  sub dword ptr [0x8a924], edi
    X86_AT(c, 0x93c0cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A924u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 093c12  push 0x30
    X86_AT(c, 0x93c12u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 093c14  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x93c14u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 093c17  call dword ptr [ebp + 0xc]
    X86_AT(c, 0x93c17u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, 0x93c1au); x86_call(c, t); X86_RET(c, 0x93c1au); }
    X86_TICK(c, 7);
    // 093c1a  jmp 0x93ba0
    X86_AT(c, 0x93c1au);
    X86_POLL(c, 0x93ba0u); goto L_93ba0;
L_93c1c:
    X86_TICK(c, 6);
    // 093c1c  mov esi, dword ptr [0x8a92c]
    X86_AT(c, 0x93c1cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093c22  sub ebx, ebx
    X86_AT(c, 0x93c22u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_93c24:
    X86_TICK(c, 25);
    // 093c24  inc dword ptr [0x8a92c]
    X86_AT(c, 0x93c24u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A92Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 093c2a  mov eax, dword ptr [0x8a92c]
    X86_AT(c, 0x93c2au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093c2f  movzx eax, byte ptr [eax]
    X86_AT(c, 0x93c2fu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0])));
    // 093c32  sub eax, 0x20
    X86_AT(c, 0x93c32u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x20u, 0, 4); }
    // 093c35  cmp eax, 0x10
    X86_AT(c, 0x93c35u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 093c38  ja 0x93cb7
    X86_AT(c, 0x93c38u);
    if (x86_cc(c, 7)) { goto L_93cb7; }
    X86_TICK(c, 7);
    // 093c3e  jmp dword ptr cs:[eax*4 + 0x93c46]
    X86_AT(c, 0x93c3eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x93C46u)));
      switch (t) {
      case 0x93c8au: goto L_93c8a;
      case 0x93c93u: goto L_93c93;
      case 0x93c9cu: goto L_93c9c;
      case 0x93ca5u: goto L_93ca5;
      case 0x93caeu: goto L_93cae;
      case 0x93cb7u: goto L_93cb7;
      default: x86_jump(c, t); return; } }
L_93c8a:
    X86_TICK(c, 14);
    // 093c8a  or byte ptr [0x8a5fc], 1
    X86_AT(c, 0x93c8au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A5FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
    // 093c91  jmp 0x93cb9
    X86_AT(c, 0x93c91u);
    goto L_93cb9;
L_93c93:
    X86_TICK(c, 14);
    // 093c93  or byte ptr [0x8a5fc], 2
    X86_AT(c, 0x93c93u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A5FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 093c9a  jmp 0x93cb9
    X86_AT(c, 0x93c9au);
    goto L_93cb9;
L_93c9c:
    X86_TICK(c, 14);
    // 093c9c  or byte ptr [0x8a5fc], 4
    X86_AT(c, 0x93c9cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A5FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 093ca3  jmp 0x93cb9
    X86_AT(c, 0x93ca3u);
    goto L_93cb9;
L_93ca5:
    X86_TICK(c, 14);
    // 093ca5  or byte ptr [0x8a5fc], 8
    X86_AT(c, 0x93ca5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A5FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
    // 093cac  jmp 0x93cb9
    X86_AT(c, 0x93cacu);
    goto L_93cb9;
L_93cae:
    X86_TICK(c, 14);
    // 093cae  or byte ptr [0x8a5fc], 0x10
    X86_AT(c, 0x93caeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A5FCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
    // 093cb5  jmp 0x93cb9
    X86_AT(c, 0x93cb5u);
    goto L_93cb9;
L_93cb7:
    X86_TICK(c, 2);
    // 093cb7  mov bl, 1
    X86_AT(c, 0x93cb7u);
    s8(c, 3, 0x1u);
L_93cb9:
    X86_TICK(c, 7);
    // 093cb9  and bl, bl
    X86_AT(c, 0x93cb9u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 093cbb  je 0x93c24
    X86_AT(c, 0x93cbbu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x93c24u); goto L_93c24; }
    X86_TICK(c, 13);
    // 093cc1  push 0
    X86_AT(c, 0x93cc1u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 093cc3  push 0x46
    X86_AT(c, 0x93cc3u);
    { uint32_t v = 0x46u; push32(c, v); }
    // 093cc5  mov ecx, ebp
    X86_AT(c, 0x93cc5u);
    c.r[1] = c.r[5];
    // 093cc7  call 0x93a80
    X86_AT(c, 0x93cc7u);
    push32(c, 0x93cccu); x86_call_known(c, 0x93a80u, f_00093a80); X86_RET(c, 0x93cccu);
    X86_TICK(c, 18);
    // 093ccc  mov dword ptr [0x8a600], eax
    X86_AT(c, 0x93cccu);
    wr32((c.sbase[3] + (uint32_t)(0x8A600u)), c.r[0]);
    // 093cd1  mov eax, dword ptr [0x8a92c]
    X86_AT(c, 0x93cd1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093cd6  cmp byte ptr [eax], 0x2e
    X86_AT(c, 0x93cd6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Eu, 0, 1);
    // 093cd9  jne 0x93d15
    X86_AT(c, 0x93cd9u);
    if (x86_cc(c, 5)) { goto L_93d15; }
    X86_TICK(c, 22);
    // 093cdb  inc dword ptr [0x8a92c]
    X86_AT(c, 0x93cdbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A92Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 093ce1  mov eax, dword ptr [0x8a92c]
    X86_AT(c, 0x93ce1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093ce6  cmp byte ptr [eax], 0x2d
    X86_AT(c, 0x93ce6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Du, 0, 1);
    // 093ce9  jne 0x93d05
    X86_AT(c, 0x93ce9u);
    if (x86_cc(c, 5)) { goto L_93d05; }
L_93ceb:
    X86_TICK(c, 23);
    // 093ceb  inc dword ptr [0x8a92c]
    X86_AT(c, 0x93cebu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A92Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 093cf1  mov eax, dword ptr [0x8a92c]
    X86_AT(c, 0x93cf1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093cf6  mov al, byte ptr [eax]
    X86_AT(c, 0x93cf6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093cf8  mov byte ptr [ebp - 5], al
    X86_AT(c, 0x93cf8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 093cfb  cmp al, 0x30
    X86_AT(c, 0x93cfbu);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 093cfd  jb 0x93d15
    X86_AT(c, 0x93cfdu);
    if (x86_cc(c, 2)) { goto L_93d15; }
    X86_TICK(c, 7);
    // 093cff  cmp al, 0x39
    X86_AT(c, 0x93cffu);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 093d01  jbe 0x93ceb
    X86_AT(c, 0x93d01u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x93cebu); goto L_93ceb; }
    X86_TICK(c, 7);
    // 093d03  jmp 0x93d15
    X86_AT(c, 0x93d03u);
    goto L_93d15;
L_93d05:
    X86_TICK(c, 13);
    // 093d05  push 1
    X86_AT(c, 0x93d05u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 093d07  push 0x50
    X86_AT(c, 0x93d07u);
    { uint32_t v = 0x50u; push32(c, v); }
    // 093d09  mov ecx, ebp
    X86_AT(c, 0x93d09u);
    c.r[1] = c.r[5];
    // 093d0b  call 0x93a80
    X86_AT(c, 0x93d0bu);
    push32(c, 0x93d10u); x86_call_known(c, 0x93a80u, f_00093a80); X86_RET(c, 0x93d10u);
    X86_TICK(c, 2);
    // 093d10  mov dword ptr [0x8a604], eax
    X86_AT(c, 0x93d10u);
    wr32((c.sbase[3] + (uint32_t)(0x8A604u)), c.r[0]);
L_93d15:
    X86_TICK(c, 16);
    // 093d15  mov eax, dword ptr [0x8a92c]
    X86_AT(c, 0x93d15u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093d1a  cmp byte ptr [eax], 0x68
    X86_AT(c, 0x93d1au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x68u, 0, 1);
    // 093d1d  jne 0x93d28
    X86_AT(c, 0x93d1du);
    if (x86_cc(c, 5)) { goto L_93d28; }
    X86_TICK(c, 9);
    // 093d1f  mov byte ptr [0x8a608], 0
    X86_AT(c, 0x93d1fu);
    wr8((c.sbase[3] + (uint32_t)(0x8A608u)), 0x0u);
    // 093d26  jmp 0x93d4c
    X86_AT(c, 0x93d26u);
    goto L_93d4c;
L_93d28:
    X86_TICK(c, 16);
    // 093d28  mov eax, dword ptr [0x8a92c]
    X86_AT(c, 0x93d28u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093d2d  cmp byte ptr [eax], 0x6c
    X86_AT(c, 0x93d2du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x6Cu, 0, 1);
    // 093d30  jne 0x93d3b
    X86_AT(c, 0x93d30u);
    if (x86_cc(c, 5)) { goto L_93d3b; }
    X86_TICK(c, 9);
    // 093d32  mov byte ptr [0x8a608], 2
    X86_AT(c, 0x93d32u);
    wr8((c.sbase[3] + (uint32_t)(0x8A608u)), 0x2u);
    // 093d39  jmp 0x93d4c
    X86_AT(c, 0x93d39u);
    goto L_93d4c;
L_93d3b:
    X86_TICK(c, 16);
    // 093d3b  mov eax, dword ptr [0x8a92c]
    X86_AT(c, 0x93d3bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093d40  cmp byte ptr [eax], 0x4c
    X86_AT(c, 0x93d40u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x4Cu, 0, 1);
    // 093d43  jne 0x93d52
    X86_AT(c, 0x93d43u);
    if (x86_cc(c, 5)) { goto L_93d52; }
    X86_TICK(c, 2);
    // 093d45  mov byte ptr [0x8a608], 3
    X86_AT(c, 0x93d45u);
    wr8((c.sbase[3] + (uint32_t)(0x8A608u)), 0x3u);
L_93d4c:
    X86_TICK(c, 6);
    // 093d4c  inc dword ptr [0x8a92c]
    X86_AT(c, 0x93d4cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A92Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_93d52:
    X86_TICK(c, 21);
    // 093d52  mov eax, dword ptr [0x8a92c]
    X86_AT(c, 0x93d52u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093d57  mov al, byte ptr [eax]
    X86_AT(c, 0x93d57u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093d59  push eax
    X86_AT(c, 0x93d59u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 093d5a  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x93d5au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 093d5d  call dword ptr [ebp + 0xc]
    X86_AT(c, 0x93d5du);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, 0x93d60u); x86_call(c, t); X86_RET(c, 0x93d60u); }
    X86_TICK(c, 26);
    // 093d60  inc dword ptr [0x8a92c]
    X86_AT(c, 0x93d60u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A92Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 093d66  mov eax, dword ptr [0x8a92c]
    X86_AT(c, 0x93d66u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A92Cu)));
    // 093d6b  sub eax, esi
    X86_AT(c, 0x93d6bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 093d6d  sub dword ptr [0x8a924], eax
    X86_AT(c, 0x93d6du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A924u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 093d73  jmp 0x93ba0
    X86_AT(c, 0x93d73u);
    X86_POLL(c, 0x93ba0u); goto L_93ba0;
L_93d78:
    X86_TICK(c, 28);
    // 093d78  pop edi
    X86_AT(c, 0x93d78u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093d79  pop esi
    X86_AT(c, 0x93d79u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093d7a  pop ebx
    X86_AT(c, 0x93d7au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093d7b  leave 
    X86_AT(c, 0x93d7bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093d7c  ret 0xc
    X86_AT(c, 0x93d7cu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x93b90u, "ran off the end of a function");
}
void f_00093d8c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 093d8c  push ebp
    X86_AT(c, 0x93d8cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093d8d  mov ebp, esp
    X86_AT(c, 0x93d8du);
    c.r[5] = c.r[4];
    // 093d8f  push ecx
    X86_AT(c, 0x93d8fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093d90  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x93d90u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093d93  add dword ptr [0x8a60c], ecx
    X86_AT(c, 0x93d93u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A60Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[1], 0, 4)); }
    // 093d99  mov eax, dword ptr [0x8a600]
    X86_AT(c, 0x93d99u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A600u)));
    // 093d9e  cmp eax, 0xffff
    X86_AT(c, 0x93d9eu);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 093da3  je 0x93daf
    X86_AT(c, 0x93da3u);
    if (x86_cc(c, 4)) { goto L_93daf; }
    X86_TICK(c, 7);
    // 093da5  cmp ecx, eax
    X86_AT(c, 0x93da5u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 093da7  ja 0x93daf
    X86_AT(c, 0x93da7u);
    if (x86_cc(c, 7)) { goto L_93daf; }
    X86_TICK(c, 7);
    // 093da9  sub dword ptr [0x8a600], ecx
    X86_AT(c, 0x93da9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A600u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
L_93daf:
    X86_TICK(c, 16);
    // 093daf  leave 
    X86_AT(c, 0x93dafu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093db0  ret 4
    X86_AT(c, 0x93db0u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x93d8cu, "ran off the end of a function");
}
void f_00093dc8(X86Cpu& c) {
    X86_TICK(c, 25);
    // 093dc8  push ebp
    X86_AT(c, 0x93dc8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093dc9  mov ebp, esp
    X86_AT(c, 0x93dc9u);
    c.r[5] = c.r[4];
    // 093dcb  push ecx
    X86_AT(c, 0x93dcbu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093dcc  mov dword ptr [0x8a964], 0
    X86_AT(c, 0x93dccu);
    wr32((c.sbase[3] + (uint32_t)(0x8A964u)), 0x0u);
    // 093dd6  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x93dd6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093dd9  movzx eax, byte ptr [eax + 0xc]
    X86_AT(c, 0x93dd9u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)));
    // 093ddd  cmp eax, 0x69
    X86_AT(c, 0x93dddu);
    (void)x86_sub(c, c.r[0], 0x69u, 0, 4);
    // 093de0  ja 0x93dfa
    X86_AT(c, 0x93de0u);
    if (x86_cc(c, 7)) { goto L_93dfa; }
    X86_TICK(c, 7);
    // 093de2  cmp eax, 0x69
    X86_AT(c, 0x93de2u);
    (void)x86_sub(c, c.r[0], 0x69u, 0, 4);
    // 093de5  je 0x93e12
    X86_AT(c, 0x93de5u);
    if (x86_cc(c, 4)) { goto L_93e12; }
    X86_TICK(c, 7);
    // 093de7  cmp eax, 0x58
    X86_AT(c, 0x93de7u);
    (void)x86_sub(c, c.r[0], 0x58u, 0, 4);
    // 093dea  je 0x93e81
    X86_AT(c, 0x93deau);
    if (x86_cc(c, 4)) { goto L_93e81; }
    X86_TICK(c, 7);
    // 093df0  cmp eax, 0x64
    X86_AT(c, 0x93df0u);
    (void)x86_sub(c, c.r[0], 0x64u, 0, 4);
    // 093df3  je 0x93e12
    X86_AT(c, 0x93df3u);
    if (x86_cc(c, 4)) { goto L_93e12; }
    X86_TICK(c, 7);
    // 093df5  jmp 0x93eb5
    X86_AT(c, 0x93df5u);
    goto L_93eb5;
L_93dfa:
    X86_TICK(c, 7);
    // 093dfa  cmp eax, 0x6f
    X86_AT(c, 0x93dfau);
    (void)x86_sub(c, c.r[0], 0x6Fu, 0, 4);
    // 093dfd  je 0x93e5c
    X86_AT(c, 0x93dfdu);
    if (x86_cc(c, 4)) { goto L_93e5c; }
    X86_TICK(c, 7);
    // 093dff  cmp eax, 0x75
    X86_AT(c, 0x93dffu);
    (void)x86_sub(c, c.r[0], 0x75u, 0, 4);
    // 093e02  je 0x93e53
    X86_AT(c, 0x93e02u);
    if (x86_cc(c, 4)) { goto L_93e53; }
    X86_TICK(c, 7);
    // 093e04  cmp eax, 0x78
    X86_AT(c, 0x93e04u);
    (void)x86_sub(c, c.r[0], 0x78u, 0, 4);
    // 093e07  je 0x93e81
    X86_AT(c, 0x93e07u);
    if (x86_cc(c, 4)) { goto L_93e81; }
    X86_TICK(c, 7);
    // 093e0d  jmp 0x93eb5
    X86_AT(c, 0x93e0du);
    goto L_93eb5;
L_93e12:
    X86_TICK(c, 17);
    // 093e12  mov byte ptr [0x8a958], 0xa
    X86_AT(c, 0x93e12u);
    wr8((c.sbase[3] + (uint32_t)(0x8A958u)), 0xAu);
    // 093e19  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x93e19u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093e1c  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x93e1cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 093e1f  and edx, edx
    X86_AT(c, 0x93e1fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 093e21  jge 0x93e2f
    X86_AT(c, 0x93e21u);
    if (x86_cc(c, 13)) { goto L_93e2f; }
    X86_TICK(c, 15);
    // 093e23  neg dword ptr [eax + 8]
    X86_AT(c, 0x93e23u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_neg(c, v, 4)); }
    // 093e26  mov byte ptr [0x8a95a], 0x2d
    X86_AT(c, 0x93e26u);
    wr8((c.sbase[3] + (uint32_t)(0x8A95Au)), 0x2Du);
    // 093e2d  jmp 0x93e73
    X86_AT(c, 0x93e2du);
    goto L_93e73;
L_93e2f:
    X86_TICK(c, 12);
    // 093e2f  test byte ptr [0x8a5fc], 2
    X86_AT(c, 0x93e2fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x2u, 1);
    // 093e36  je 0x93e41
    X86_AT(c, 0x93e36u);
    if (x86_cc(c, 4)) { goto L_93e41; }
    X86_TICK(c, 9);
    // 093e38  mov byte ptr [0x8a95a], 0x2b
    X86_AT(c, 0x93e38u);
    wr8((c.sbase[3] + (uint32_t)(0x8A95Au)), 0x2Bu);
    // 093e3f  jmp 0x93e73
    X86_AT(c, 0x93e3fu);
    goto L_93e73;
L_93e41:
    X86_TICK(c, 12);
    // 093e41  test byte ptr [0x8a5fc], 4
    X86_AT(c, 0x93e41u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x4u, 1);
    // 093e48  je 0x93eb5
    X86_AT(c, 0x93e48u);
    if (x86_cc(c, 4)) { goto L_93eb5; }
    X86_TICK(c, 9);
    // 093e4a  mov byte ptr [0x8a95a], 0x20
    X86_AT(c, 0x93e4au);
    wr8((c.sbase[3] + (uint32_t)(0x8A95Au)), 0x20u);
    // 093e51  jmp 0x93e73
    X86_AT(c, 0x93e51u);
    goto L_93e73;
L_93e53:
    X86_TICK(c, 9);
    // 093e53  mov byte ptr [0x8a958], 0xa
    X86_AT(c, 0x93e53u);
    wr8((c.sbase[3] + (uint32_t)(0x8A958u)), 0xAu);
    // 093e5a  jmp 0x93eb5
    X86_AT(c, 0x93e5au);
    goto L_93eb5;
L_93e5c:
    X86_TICK(c, 14);
    // 093e5c  mov byte ptr [0x8a958], 8
    X86_AT(c, 0x93e5cu);
    wr8((c.sbase[3] + (uint32_t)(0x8A958u)), 0x8u);
    // 093e63  test byte ptr [0x8a5fc], 8
    X86_AT(c, 0x93e63u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x8u, 1);
    // 093e6a  je 0x93eb5
    X86_AT(c, 0x93e6au);
    if (x86_cc(c, 4)) { goto L_93eb5; }
    X86_TICK(c, 2);
    // 093e6c  mov byte ptr [0x8a95a], 0x30
    X86_AT(c, 0x93e6cu);
    wr8((c.sbase[3] + (uint32_t)(0x8A95Au)), 0x30u);
L_93e73:
    X86_TICK(c, 11);
    // 093e73  mov dword ptr [0x8a964], 1
    X86_AT(c, 0x93e73u);
    wr32((c.sbase[3] + (uint32_t)(0x8A964u)), 0x1u);
    // 093e7d  push 1
    X86_AT(c, 0x93e7du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 093e7f  jmp 0x93eae
    X86_AT(c, 0x93e7fu);
    goto L_93eae;
L_93e81:
    X86_TICK(c, 14);
    // 093e81  mov byte ptr [0x8a958], 0x10
    X86_AT(c, 0x93e81u);
    wr8((c.sbase[3] + (uint32_t)(0x8A958u)), 0x10u);
    // 093e88  test byte ptr [0x8a5fc], 8
    X86_AT(c, 0x93e88u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A5FCu))) & 0x8u, 1);
    // 093e8f  je 0x93eb5
    X86_AT(c, 0x93e8fu);
    if (x86_cc(c, 4)) { goto L_93eb5; }
    X86_TICK(c, 18);
    // 093e91  mov byte ptr [0x8a95a], 0x30
    X86_AT(c, 0x93e91u);
    wr8((c.sbase[3] + (uint32_t)(0x8A95Au)), 0x30u);
    // 093e98  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x93e98u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093e9b  mov al, byte ptr [eax + 0xc]
    X86_AT(c, 0x93e9bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))));
    // 093e9e  mov byte ptr [0x8a95b], al
    X86_AT(c, 0x93e9eu);
    wr8((c.sbase[3] + (uint32_t)(0x8A95Bu)), g8(c, 0));
    // 093ea3  mov eax, 2
    X86_AT(c, 0x93ea3u);
    c.r[0] = 0x2u;
    // 093ea8  mov dword ptr [0x8a964], eax
    X86_AT(c, 0x93ea8u);
    wr32((c.sbase[3] + (uint32_t)(0x8A964u)), c.r[0]);
    // 093ead  push eax
    X86_AT(c, 0x93eadu);
    { uint32_t v = c.r[0]; push32(c, v); }
L_93eae:
    X86_TICK(c, 9);
    // 093eae  mov ecx, ebp
    X86_AT(c, 0x93eaeu);
    c.r[1] = c.r[5];
    // 093eb0  call 0x93d8c
    X86_AT(c, 0x93eb0u);
    push32(c, 0x93eb5u); x86_call_known(c, 0x93d8cu, f_00093d8c); X86_RET(c, 0x93eb5u);
L_93eb5:
    X86_TICK(c, 16);
    // 093eb5  leave 
    X86_AT(c, 0x93eb5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093eb6  ret 
    X86_AT(c, 0x93eb6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x93dc8u, "ran off the end of a function");
}
}

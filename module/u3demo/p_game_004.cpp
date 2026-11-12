#include "p_game_funcs.h"
namespace p_game {
void f_000925a8(X86Cpu& c) {
    X86_TICK(c, 67);
    // 0925a8  enter 0xc, 0
    X86_AT(c, 0x925a8u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 0925ac  push ebx
    X86_AT(c, 0x925acu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0925ad  push esi
    X86_AT(c, 0x925adu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0925ae  push edi
    X86_AT(c, 0x925aeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0925af  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x925afu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0925b2  mov esi, dword ptr [ebp + 0x20]
    X86_AT(c, 0x925b2u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 0925b5  mov ax, word ptr [0x8aabe]
    X86_AT(c, 0x925b5u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AABEu))));
    // 0925bb  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0x925bbu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 0925bf  sub eax, eax
    X86_AT(c, 0x925bfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0925c1  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x925c1u);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
    // 0925c7  mov ebx, eax
    X86_AT(c, 0x925c7u);
    c.r[3] = c.r[0];
    // 0925c9  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x925c9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0925cc  mov byte ptr [edx], 1
    X86_AT(c, 0x925ccu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), 0x1u);
    // 0925cf  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x925cfu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0925d2  mov byte ptr [edx], al
    X86_AT(c, 0x925d2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0925d4  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x925d4u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0925d7  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x925d7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0925da  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0x925dau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0925dd  mov dl, byte ptr [edx]
    X86_AT(c, 0x925ddu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 0925df  mov byte ptr [ebp - 9], dl
    X86_AT(c, 0x925dfu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 2));
    // 0925e2  mov byte ptr [esi], al
    X86_AT(c, 0x925e2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
    // 0925e4  jmp 0x9265d
    X86_AT(c, 0x925e4u);
    goto L_9265d;
L_925e9:
    X86_TICK(c, 13);
    // 0925e9  movzx edx, byte ptr [ebp - 9]
    X86_AT(c, 0x925e9u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)));
    // 0925ed  cmp edx, 0x2b
    X86_AT(c, 0x925edu);
    (void)x86_sub(c, c.r[2], 0x2Bu, 0, 4);
    // 0925f0  je 0x92636
    X86_AT(c, 0x925f0u);
    if (x86_cc(c, 4)) { goto L_92636; }
    X86_TICK(c, 7);
    // 0925f2  cmp edx, 0x61
    X86_AT(c, 0x925f2u);
    (void)x86_sub(c, c.r[2], 0x61u, 0, 4);
    // 0925f5  je 0x92610
    X86_AT(c, 0x925f5u);
    if (x86_cc(c, 4)) { goto L_92610; }
    X86_TICK(c, 7);
    // 0925f7  cmp edx, 0x62
    X86_AT(c, 0x925f7u);
    (void)x86_sub(c, c.r[2], 0x62u, 0, 4);
    // 0925fa  je 0x92644
    X86_AT(c, 0x925fau);
    if (x86_cc(c, 4)) { goto L_92644; }
    X86_TICK(c, 7);
    // 0925fc  cmp edx, 0x72
    X86_AT(c, 0x925fcu);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0925ff  je 0x9262b
    X86_AT(c, 0x925ffu);
    if (x86_cc(c, 4)) { goto L_9262b; }
    X86_TICK(c, 7);
    // 092601  cmp edx, 0x74
    X86_AT(c, 0x92601u);
    (void)x86_sub(c, c.r[2], 0x74u, 0, 4);
    // 092604  je 0x9264c
    X86_AT(c, 0x92604u);
    if (x86_cc(c, 4)) { goto L_9264c; }
    X86_TICK(c, 7);
    // 092606  cmp edx, 0x75
    X86_AT(c, 0x92606u);
    (void)x86_sub(c, c.r[2], 0x75u, 0, 4);
    // 092609  je 0x9263f
    X86_AT(c, 0x92609u);
    if (x86_cc(c, 4)) { goto L_9263f; }
    X86_TICK(c, 7);
    // 09260b  cmp edx, 0x77
    X86_AT(c, 0x9260bu);
    (void)x86_sub(c, c.r[2], 0x77u, 0, 4);
    // 09260e  jne 0x92667
    X86_AT(c, 0x9260eu);
    if (x86_cc(c, 5)) { goto L_92667; }
L_92610:
    X86_TICK(c, 7);
    // 092610  and bl, bl
    X86_AT(c, 0x92610u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 092612  jne 0x92667
    X86_AT(c, 0x92612u);
    if (x86_cc(c, 5)) { goto L_92667; }
    X86_TICK(c, 33);
    // 092614  mov bl, 1
    X86_AT(c, 0x92614u);
    s8(c, 3, 0x1u);
    // 092616  mov byte ptr [edi], bl
    X86_AT(c, 0x92616u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 3));
    // 092618  mov al, byte ptr [ebp - 9]
    X86_AT(c, 0x92618u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))));
    // 09261b  cmp al, 0x61
    X86_AT(c, 0x9261bu);
    (void)x86_sub(c, g8(c, 0), 0x61u, 0, 1);
    // 09261d  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x9261du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 092620  sete byte ptr [edx]
    X86_AT(c, 0x92620u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), x86_cc(c, 4) ? 1u : 0u);
    // 092623  cmp al, 0x77
    X86_AT(c, 0x92623u);
    (void)x86_sub(c, g8(c, 0), 0x77u, 0, 1);
    // 092625  sete byte ptr [ebp - 2]
    X86_AT(c, 0x92625u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), x86_cc(c, 4) ? 1u : 0u);
    // 092629  jmp 0x92652
    X86_AT(c, 0x92629u);
    goto L_92652;
L_9262b:
    X86_TICK(c, 7);
    // 09262b  and bl, bl
    X86_AT(c, 0x9262bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 09262d  jne 0x92667
    X86_AT(c, 0x9262du);
    if (x86_cc(c, 5)) { goto L_92667; }
    X86_TICK(c, 11);
    // 09262f  mov bl, 1
    X86_AT(c, 0x9262fu);
    s8(c, 3, 0x1u);
    // 092631  mov byte ptr [edi], 0
    X86_AT(c, 0x92631u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 092634  jmp 0x92652
    X86_AT(c, 0x92634u);
    goto L_92652;
L_92636:
    X86_TICK(c, 7);
    // 092636  and bl, bl
    X86_AT(c, 0x92636u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 092638  je 0x92667
    X86_AT(c, 0x92638u);
    if (x86_cc(c, 4)) { goto L_92667; }
    X86_TICK(c, 9);
    // 09263a  mov byte ptr [edi], 2
    X86_AT(c, 0x9263au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x2u);
    // 09263d  jmp 0x92652
    X86_AT(c, 0x9263du);
    goto L_92652;
L_9263f:
    X86_TICK(c, 11);
    // 09263f  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x9263fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 092642  jmp 0x92647
    X86_AT(c, 0x92642u);
    goto L_92647;
L_92644:
    X86_TICK(c, 4);
    // 092644  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x92644u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
L_92647:
    X86_TICK(c, 9);
    // 092647  mov byte ptr [eax], 0
    X86_AT(c, 0x92647u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 09264a  jmp 0x92652
    X86_AT(c, 0x9264au);
    goto L_92652;
L_9264c:
    X86_TICK(c, 6);
    // 09264c  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x9264cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 09264f  mov byte ptr [eax], 1
    X86_AT(c, 0x9264fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x1u);
L_92652:
    X86_TICK(c, 16);
    // 092652  inc dword ptr [ebp - 8]
    X86_AT(c, 0x92652u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 092655  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x92655u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 092658  mov al, byte ptr [eax]
    X86_AT(c, 0x92658u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 09265a  mov byte ptr [ebp - 9], al
    X86_AT(c, 0x9265au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
L_9265d:
    X86_TICK(c, 12);
    // 09265d  cmp byte ptr [ebp - 9], 0
    X86_AT(c, 0x9265du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 092661  jne 0x925e9
    X86_AT(c, 0x92661u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x925e9u); goto L_925e9; }
    X86_TICK(c, 7);
    // 092663  and bl, bl
    X86_AT(c, 0x92663u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 092665  jne 0x92672
    X86_AT(c, 0x92665u);
    if (x86_cc(c, 5)) { goto L_92672; }
L_92667:
    X86_TICK(c, 9);
    // 092667  mov word ptr [0x8aabe], 1
    X86_AT(c, 0x92667u);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), 0x1u);
    // 092670  jmp 0x926ce
    X86_AT(c, 0x92670u);
    goto L_926ce;
L_92672:
    X86_TICK(c, 12);
    // 092672  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x92672u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 092676  jne 0x9268c
    X86_AT(c, 0x92676u);
    if (x86_cc(c, 5)) { goto L_9268c; }
    X86_TICK(c, 29);
    // 092678  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x92678u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 09267b  cmp byte ptr [eax], 0
    X86_AT(c, 0x9267bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 09267e  mov al, byte ptr [edi]
    X86_AT(c, 0x9267eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 092680  push eax
    X86_AT(c, 0x92680u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092681  push dword ptr [ebp + 8]
    X86_AT(c, 0x92681u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092684  call 0x94950
    X86_AT(c, 0x92684u);
    push32(c, 0x92689u); x86_call_known(c, 0x94950u, f_00094950); X86_RET(c, 0x92689u);
    X86_TICK(c, 2);
    // 092689  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x92689u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
L_9268c:
    X86_TICK(c, 16);
    // 09268c  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0x9268cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 09268f  cmp byte ptr [eax], 0
    X86_AT(c, 0x9268fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 092692  je 0x9269e
    X86_AT(c, 0x92692u);
    if (x86_cc(c, 4)) { goto L_9269e; }
    X86_TICK(c, 12);
    // 092694  cmp word ptr [0x8aabe], 2
    X86_AT(c, 0x92694u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8AABEu))), 0x2u, 0, 2);
    // 09269c  je 0x926a4
    X86_AT(c, 0x9269cu);
    if (x86_cc(c, 4)) { goto L_926a4; }
L_9269e:
    X86_TICK(c, 12);
    // 09269e  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x9269eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0926a2  je 0x926c4
    X86_AT(c, 0x926a2u);
    if (x86_cc(c, 4)) { goto L_926c4; }
L_926a4:
    X86_TICK(c, 20);
    // 0926a4  sub eax, eax
    X86_AT(c, 0x926a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0926a6  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x926a6u);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
    // 0926ac  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x926acu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0926af  cmp byte ptr [edx], 0
    X86_AT(c, 0x926afu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0x0u, 0, 1);
    // 0926b2  je 0x926b7
    X86_AT(c, 0x926b2u);
    if (x86_cc(c, 4)) { goto L_926b7; }
    X86_TICK(c, 9);
    // 0926b4  push eax
    X86_AT(c, 0x926b4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0926b5  jmp 0x926b9
    X86_AT(c, 0x926b5u);
    goto L_926b9;
L_926b7:
    X86_TICK(c, 2);
    // 0926b7  push 0
    X86_AT(c, 0x926b7u);
    { uint32_t v = 0x0u; push32(c, v); }
L_926b9:
    X86_TICK(c, 12);
    // 0926b9  push dword ptr [ebp + 8]
    X86_AT(c, 0x926b9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0926bc  call 0x94928
    X86_AT(c, 0x926bcu);
    push32(c, 0x926c1u); x86_call_known(c, 0x94928u, f_00094928); X86_RET(c, 0x926c1u);
    X86_TICK(c, 2);
    // 0926c1  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x926c1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
L_926c4:
    X86_TICK(c, 12);
    // 0926c4  cmp word ptr [0x8aabe], 0
    X86_AT(c, 0x926c4u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8AABEu))), 0x0u, 0, 2);
    // 0926cc  je 0x926d3
    X86_AT(c, 0x926ccu);
    if (x86_cc(c, 4)) { goto L_926d3; }
L_926ce:
    X86_TICK(c, 9);
    // 0926ce  mov byte ptr [esi], 1
    X86_AT(c, 0x926ceu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), 0x1u);
    // 0926d1  jmp 0x926dd
    X86_AT(c, 0x926d1u);
    goto L_926dd;
L_926d3:
    X86_TICK(c, 6);
    // 0926d3  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0x926d3u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 0926d7  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x926d7u);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
L_926dd:
    X86_TICK(c, 32);
    // 0926dd  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0x926ddu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0926e0  pop edi
    X86_AT(c, 0x926e0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0926e1  pop esi
    X86_AT(c, 0x926e1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0926e2  pop ebx
    X86_AT(c, 0x926e2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0926e3  leave 
    X86_AT(c, 0x926e3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0926e4  ret 0x1c
    X86_AT(c, 0x926e4u);
    c.eip = pop32(c); c.r[4] += 0x1Cu; return;
    x86_fault(c, 0x925a8u, "ran off the end of a function");
}
void f_000926f8(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0926f8  enter 4, 0
    X86_AT(c, 0x926f8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0926fc  sub ecx, ecx
    X86_AT(c, 0x926fcu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0926fe  jmp 0x92715
    X86_AT(c, 0x926feu);
    goto L_92715;
L_92700:
    X86_TICK(c, 16);
    // 092700  lea eax, [ecx + ecx*4]
    X86_AT(c, 0x92700u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 092703  lea eax, [eax*4]
    X86_AT(c, 0x92703u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 09270a  cmp word ptr [eax + 0x8a86c], 0
    X86_AT(c, 0x9270au);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8A86Cu))), 0x0u, 0, 2);
    // 092712  je 0x9271a
    X86_AT(c, 0x92712u);
    if (x86_cc(c, 4)) { goto L_9271a; }
    X86_TICK(c, 2);
    // 092714  inc ecx
    X86_AT(c, 0x92714u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_92715:
    X86_TICK(c, 7);
    // 092715  cmp ecx, 0x19
    X86_AT(c, 0x92715u);
    (void)x86_sub(c, c.r[1], 0x19u, 0, 4);
    // 092718  jbe 0x92700
    X86_AT(c, 0x92718u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x92700u); goto L_92700; }
L_9271a:
    X86_TICK(c, 7);
    // 09271a  cmp ecx, 0x19
    X86_AT(c, 0x9271au);
    (void)x86_sub(c, c.r[1], 0x19u, 0, 4);
    // 09271d  jbe 0x92731
    X86_AT(c, 0x9271du);
    if (x86_cc(c, 6)) { goto L_92731; }
    X86_TICK(c, 11);
    // 09271f  mov word ptr [0x8aabe], 4
    X86_AT(c, 0x9271fu);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), 0x4u);
    // 092728  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x92728u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 09272f  jmp 0x92743
    X86_AT(c, 0x9272fu);
    goto L_92743;
L_92731:
    X86_TICK(c, 8);
    // 092731  lea eax, [ecx + ecx*4]
    X86_AT(c, 0x92731u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 092734  lea eax, [eax*4]
    X86_AT(c, 0x92734u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 09273b  add eax, 0x8a860
    X86_AT(c, 0x9273bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8A860u, 0, 4); }
    // 092740  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92740u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_92743:
    X86_TICK(c, 20);
    // 092743  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92743u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092746  leave 
    X86_AT(c, 0x92746u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092747  ret 
    X86_AT(c, 0x92747u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x926f8u, "ran off the end of a function");
}
void f_00092758(X86Cpu& c) {
    X86_TICK(c, 30);
    // 092758  push ebp
    X86_AT(c, 0x92758u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 092759  mov ebp, esp
    X86_AT(c, 0x92759u);
    c.r[5] = c.r[4];
    // 09275b  push ebx
    X86_AT(c, 0x9275bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09275c  push edi
    X86_AT(c, 0x9275cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09275d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x9275du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 092760  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x92760u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 092763  mov byte ptr [edi + 0xe], al
    X86_AT(c, 0x92763u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu)), g8(c, 0));
    // 092766  cmp byte ptr [ebp + 0x10], 0
    X86_AT(c, 0x92766u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 09276a  jne 0x92774
    X86_AT(c, 0x9276au);
    if (x86_cc(c, 5)) { goto L_92774; }
    X86_TICK(c, 9);
    // 09276c  mov word ptr [edi + 0xc], 2
    X86_AT(c, 0x9276cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x2u);
    // 092772  jmp 0x92788
    X86_AT(c, 0x92772u);
    goto L_92788;
L_92774:
    X86_TICK(c, 12);
    // 092774  cmp byte ptr [ebp + 0x10], 1
    X86_AT(c, 0x92774u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 092778  jne 0x92782
    X86_AT(c, 0x92778u);
    if (x86_cc(c, 5)) { goto L_92782; }
    X86_TICK(c, 9);
    // 09277a  mov word ptr [edi + 0xc], 4
    X86_AT(c, 0x9277au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x4u);
    // 092780  jmp 0x92788
    X86_AT(c, 0x92780u);
    goto L_92788;
L_92782:
    X86_TICK(c, 2);
    // 092782  mov word ptr [edi + 0xc], 6
    X86_AT(c, 0x92782u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x6u);
L_92788:
    X86_TICK(c, 12);
    // 092788  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0x92788u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 09278c  je 0x92792
    X86_AT(c, 0x9278cu);
    if (x86_cc(c, 4)) { goto L_92792; }
    X86_TICK(c, 7);
    // 09278e  or byte ptr [edi + 0xc], 8
    X86_AT(c, 0x9278eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
L_92792:
    X86_TICK(c, 12);
    // 092792  cmp byte ptr [ebp + 0x18], 0
    X86_AT(c, 0x92792u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 1);
    // 092796  je 0x9279c
    X86_AT(c, 0x92796u);
    if (x86_cc(c, 4)) { goto L_9279c; }
    X86_TICK(c, 7);
    // 092798  or byte ptr [edi + 0xc], 0x40
    X86_AT(c, 0x92798u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_9279c:
    X86_TICK(c, 12);
    // 09279c  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x9279cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 09279f  call 0x95070
    X86_AT(c, 0x9279fu);
    push32(c, 0x927a4u); x86_call_known(c, 0x95070u, f_00095070); X86_RET(c, 0x927a4u);
    X86_TICK(c, 10);
    // 0927a4  xchg ebx, eax
    X86_AT(c, 0x927a4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0927a5  cmp bl, 1
    X86_AT(c, 0x927a5u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0927a8  je 0x927af
    X86_AT(c, 0x927a8u);
    if (x86_cc(c, 4)) { goto L_927af; }
    X86_TICK(c, 7);
    // 0927aa  cmp bl, 2
    X86_AT(c, 0x927aau);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0927ad  jne 0x927b3
    X86_AT(c, 0x927adu);
    if (x86_cc(c, 5)) { goto L_927b3; }
L_927af:
    X86_TICK(c, 2);
    // 0927af  mov byte ptr [ebp + 0x1c], 0
    X86_AT(c, 0x927afu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), 0x0u);
L_927b3:
    X86_TICK(c, 12);
    // 0927b3  cmp byte ptr [ebp + 0x1c], 0
    X86_AT(c, 0x927b3u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))), 0x0u, 0, 1);
    // 0927b7  je 0x927bd
    X86_AT(c, 0x927b7u);
    if (x86_cc(c, 4)) { goto L_927bd; }
    X86_TICK(c, 7);
    // 0927b9  or byte ptr [edi + 0xc], 1
    X86_AT(c, 0x927b9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_927bd:
    X86_TICK(c, 12);
    // 0927bd  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0x927bdu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0927c1  je 0x927cf
    X86_AT(c, 0x927c1u);
    if (x86_cc(c, 4)) { goto L_927cf; }
    X86_TICK(c, 16);
    // 0927c3  push 2
    X86_AT(c, 0x927c3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0927c5  push 0
    X86_AT(c, 0x927c5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0927c7  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x927c7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0927ca  call 0x950b8
    X86_AT(c, 0x927cau);
    push32(c, 0x927cfu); x86_call_known(c, 0x950b8u, f_000950b8); X86_RET(c, 0x927cfu);
L_927cf:
    X86_TICK(c, 24);
    // 0927cf  pop edi
    X86_AT(c, 0x927cfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0927d0  pop ebx
    X86_AT(c, 0x927d0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0927d1  leave 
    X86_AT(c, 0x927d1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0927d2  ret 0x18
    X86_AT(c, 0x927d2u);
    c.eip = pop32(c); c.r[4] += 0x18u; return;
    x86_fault(c, 0x92758u, "ran off the end of a function");
}
void f_000927dc(X86Cpu& c) {
    X86_TICK(c, 63);
    // 0927dc  enter 0xc, 0
    X86_AT(c, 0x927dcu);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 0927e0  push ebx
    X86_AT(c, 0x927e0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0927e1  test byte ptr [0x8aaec], 1
    X86_AT(c, 0x927e1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8AAECu))) & 0x1u, 1);
    // 0927e8  setne al
    X86_AT(c, 0x927e8u);
    s8(c, 0, x86_cc(c, 5) ? 1u : 0u);
    // 0927eb  xchg ebx, eax
    X86_AT(c, 0x927ebu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0927ec  xor bl, 1
    X86_AT(c, 0x927ecu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ 0x1u, 1)); }
    // 0927ef  mov byte ptr [ebp - 8], bl
    X86_AT(c, 0x927efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), g8(c, 3));
    // 0927f2  lea ebx, [ebp - 0xa]
    X86_AT(c, 0x927f2u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF6u);
    // 0927f5  push ebx
    X86_AT(c, 0x927f5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0927f6  lea eax, [ebp - 8]
    X86_AT(c, 0x927f6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0927f9  push eax
    X86_AT(c, 0x927f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0927fa  lea eax, [ebp - 7]
    X86_AT(c, 0x927fau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF9u);
    // 0927fd  push eax
    X86_AT(c, 0x927fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0927fe  lea eax, [ebp - 6]
    X86_AT(c, 0x927feu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFAu);
    // 092801  push eax
    X86_AT(c, 0x92801u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092802  lea eax, [ebp - 5]
    X86_AT(c, 0x92802u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 092805  push eax
    X86_AT(c, 0x92805u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092806  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x92806u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 092809  push dword ptr [ebp + 8]
    X86_AT(c, 0x92809u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 09280c  call 0x925a8
    X86_AT(c, 0x9280cu);
    push32(c, 0x92811u); x86_call_known(c, 0x925a8u, f_000925a8); X86_RET(c, 0x92811u);
    X86_TICK(c, 14);
    // 092811  mov byte ptr [ebp - 9], al
    X86_AT(c, 0x92811u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 092814  cmp byte ptr [ebx], 0
    X86_AT(c, 0x92814u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0x0u, 0, 1);
    // 092817  je 0x92822
    X86_AT(c, 0x92817u);
    if (x86_cc(c, 4)) { goto L_92822; }
    X86_TICK(c, 9);
    // 092819  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x92819u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 092820  jmp 0x9282a
    X86_AT(c, 0x92820u);
    goto L_9282a;
L_92822:
    X86_TICK(c, 7);
    // 092822  call 0x926f8
    X86_AT(c, 0x92822u);
    push32(c, 0x92827u); x86_call_known(c, 0x926f8u, f_000926f8); X86_RET(c, 0x92827u);
    X86_TICK(c, 2);
    // 092827  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92827u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_9282a:
    X86_TICK(c, 12);
    // 09282a  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x9282au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 09282e  je 0x92855
    X86_AT(c, 0x9282eu);
    if (x86_cc(c, 4)) { goto L_92855; }
    X86_TICK(c, 37);
    // 092830  push dword ptr [ebp - 5]
    X86_AT(c, 0x92830u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))); push32(c, v); }
    // 092833  push dword ptr [ebp - 8]
    X86_AT(c, 0x92833u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 092836  push dword ptr [ebp - 7]
    X86_AT(c, 0x92836u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u))); push32(c, v); }
    // 092839  push dword ptr [ebp - 6]
    X86_AT(c, 0x92839u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))); push32(c, v); }
    // 09283c  push dword ptr [ebp - 9]
    X86_AT(c, 0x9283cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))); push32(c, v); }
    // 09283f  push dword ptr [ebp - 4]
    X86_AT(c, 0x9283fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 092842  call 0x92758
    X86_AT(c, 0x92842u);
    push32(c, 0x92847u); x86_call_known(c, 0x92758u, f_00092758); X86_RET(c, 0x92847u);
    X86_TICK(c, 13);
    // 092847  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0x92847u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09284a  or byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x9284au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 09284e  mov dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x9284eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0xFFFFFFFFu);
L_92855:
    X86_TICK(c, 24);
    // 092855  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92855u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092858  pop ebx
    X86_AT(c, 0x92858u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092859  leave 
    X86_AT(c, 0x92859u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09285a  ret 
    X86_AT(c, 0x9285au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x927dcu, "ran off the end of a function");
}
void f_00092870(X86Cpu& c) {
    X86_TICK(c, 44);
    // 092870  enter 0x14, 0
    X86_AT(c, 0x92870u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 092874  push ebx
    X86_AT(c, 0x92874u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092875  push esi
    X86_AT(c, 0x92875u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092876  push edi
    X86_AT(c, 0x92876u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092877  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x92877u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 09287a  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x9287au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 092881  mov ax, word ptr [0x8aabe]
    X86_AT(c, 0x92881u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AABEu))));
    // 092887  mov word ptr [ebp - 0xa], ax
    X86_AT(c, 0x92887u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), (c.r[0] & 0xFFFFu));
    // 09288b  mov word ptr [0x8aabe], 0
    X86_AT(c, 0x9288bu);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), 0x0u);
    // 092894  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x92894u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 092897  sub esi, esi
    X86_AT(c, 0x92897u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 092899  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x92899u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 09289d  jne 0x92947
    X86_AT(c, 0x9289du);
    if (x86_cc(c, 5)) { goto L_92947; }
    X86_TICK(c, 12);
    // 0928a3  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x928a3u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0928a7  jne 0x9293a
    X86_AT(c, 0x928a7u);
    if (x86_cc(c, 5)) { goto L_9293a; }
    X86_TICK(c, 20);
    // 0928ad  push edi
    X86_AT(c, 0x928adu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0928ae  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x928aeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0928b1  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x928b1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0928b4  push eax
    X86_AT(c, 0x928b4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0928b5  call 0x9500c
    X86_AT(c, 0x928b5u);
    push32(c, 0x928bau); x86_call_known(c, 0x9500cu, f_0009500c); X86_RET(c, 0x928bau);
    X86_TICK(c, 9);
    // 0928ba  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x928bau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0928bd  jmp 0x92b2c
    X86_AT(c, 0x928bdu);
    goto L_92b2c;
L_928c2:
    X86_TICK(c, 32);
    // 0928c2  mov edx, edi
    X86_AT(c, 0x928c2u);
    c.r[2] = c.r[7];
    // 0928c4  mov al, 0xa
    X86_AT(c, 0x928c4u);
    s8(c, 0, 0xAu);
    // 0928c6  mov ecx, esi
    X86_AT(c, 0x928c6u);
    c.r[1] = c.r[6];
    // 0928c8  add ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x928c8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0928cb  push edi
    X86_AT(c, 0x928cbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0928cc  mov edi, ecx
    X86_AT(c, 0x928ccu);
    c.r[7] = c.r[1];
    // 0928ce  mov dword ptr [ebp - 0x14], ecx
    X86_AT(c, 0x928ceu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[1]);
    // 0928d1  mov ecx, edx
    X86_AT(c, 0x928d1u);
    c.r[1] = c.r[2];
    // 0928d3  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x928d3u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0928d5  jne 0x928da
    X86_AT(c, 0x928d5u);
    if (x86_cc(c, 5)) { goto L_928da; }
    X86_TICK(c, 4);
    // 0928d7  inc ecx
    X86_AT(c, 0x928d7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0928d8  sub edx, ecx
    X86_AT(c, 0x928d8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_928da:
    X86_TICK(c, 13);
    // 0928da  pop edi
    X86_AT(c, 0x928dau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0928db  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x928dbu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 0928df  and dx, dx
    X86_AT(c, 0x928dfu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & (c.r[2] & 0xFFFFu), 2)); }
    // 0928e2  je 0x9290c
    X86_AT(c, 0x928e2u);
    if (x86_cc(c, 4)) { goto L_9290c; }
    X86_TICK(c, 23);
    // 0928e4  movsx edx, dx
    X86_AT(c, 0x928e4u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 0928e7  push edx
    X86_AT(c, 0x928e7u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0928e8  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x928e8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0928eb  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x928ebu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0928ee  push eax
    X86_AT(c, 0x928eeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0928ef  call 0x9500c
    X86_AT(c, 0x928efu);
    push32(c, 0x928f4u); x86_call_known(c, 0x9500cu, f_0009500c); X86_RET(c, 0x928f4u);
    X86_TICK(c, 22);
    // 0928f4  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0x928f4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0928f7  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x928f7u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0928fa  movsx edx, word ptr [ebx + 0x10]
    X86_AT(c, 0x928fau);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0928fe  cmp edx, eax
    X86_AT(c, 0x928feu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092900  jne 0x92b2c
    X86_AT(c, 0x92900u);
    if (x86_cc(c, 5)) { goto L_92b2c; }
    X86_TICK(c, 12);
    // 092906  add esi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x92906u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 092909  sub edi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x92909u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
L_9290c:
    X86_TICK(c, 7);
    // 09290c  and edi, edi
    X86_AT(c, 0x9290cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 09290e  jbe 0x9293a
    X86_AT(c, 0x9290eu);
    if (x86_cc(c, 6)) { goto L_9293a; }
    X86_TICK(c, 23);
    // 092910  movzx eax, word ptr [0x8a72c]
    X86_AT(c, 0x92910u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A72Cu)));
    // 092917  push eax
    X86_AT(c, 0x92917u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092918  push 0x8a72e
    X86_AT(c, 0x92918u);
    { uint32_t v = 0x8A72Eu; push32(c, v); }
    // 09291d  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x9291du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092920  push eax
    X86_AT(c, 0x92920u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092921  call 0x9500c
    X86_AT(c, 0x92921u);
    push32(c, 0x92926u); x86_call_known(c, 0x9500cu, f_0009500c); X86_RET(c, 0x92926u);
    X86_TICK(c, 13);
    // 092926  movzx edx, word ptr [0x8a72c]
    X86_AT(c, 0x92926u);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(0x8A72Cu)));
    // 09292d  cmp edx, eax
    X86_AT(c, 0x9292du);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 09292f  jne 0x92b2c
    X86_AT(c, 0x9292fu);
    if (x86_cc(c, 5)) { goto L_92b2c; }
    X86_TICK(c, 10);
    // 092935  inc dword ptr [ebp - 4]
    X86_AT(c, 0x92935u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 092938  inc esi
    X86_AT(c, 0x92938u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 092939  dec edi
    X86_AT(c, 0x92939u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
L_9293a:
    X86_TICK(c, 7);
    // 09293a  and edi, edi
    X86_AT(c, 0x9293au);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 09293c  jbe 0x92b2c
    X86_AT(c, 0x9293cu);
    if (x86_cc(c, 6)) { goto L_92b2c; }
    X86_TICK(c, 7);
    // 092942  jmp 0x928c2
    X86_AT(c, 0x92942u);
    X86_POLL(c, 0x928c2u); goto L_928c2;
L_92947:
    X86_TICK(c, 12);
    // 092947  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x92947u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 09294b  jne 0x92954
    X86_AT(c, 0x9294bu);
    if (x86_cc(c, 5)) { goto L_92954; }
    X86_TICK(c, 2);
    // 09294d  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0x9294du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
L_92954:
    X86_TICK(c, 12);
    // 092954  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x92954u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 092958  jne 0x92b24
    X86_AT(c, 0x92958u);
    if (x86_cc(c, 5)) { goto L_92b24; }
    X86_TICK(c, 11);
    // 09295e  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x9295eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092961  cmp eax, 0x200
    X86_AT(c, 0x92961u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 092966  jge 0x929c5
    X86_AT(c, 0x92966u);
    if (x86_cc(c, 13)) { goto L_929c5; }
    X86_TICK(c, 9);
    // 092968  mov edx, edi
    X86_AT(c, 0x92968u);
    c.r[2] = c.r[7];
    // 09296a  cmp edx, eax
    X86_AT(c, 0x9296au);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 09296c  jl 0x9296f
    X86_AT(c, 0x9296cu);
    if (x86_cc(c, 12)) { goto L_9296f; }
    X86_TICK(c, 3);
    // 09296e  xchg edx, eax
    X86_AT(c, 0x9296eu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_9296f:
    X86_TICK(c, 50);
    // 09296f  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0x9296fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 092972  mov ecx, edx
    X86_AT(c, 0x92972u);
    c.r[1] = c.r[2];
    // 092974  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92974u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092977  mov edx, dword ptr [ebx]
    X86_AT(c, 0x92977u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092979  push esi
    X86_AT(c, 0x92979u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09297a  push edi
    X86_AT(c, 0x9297au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09297b  mov esi, eax
    X86_AT(c, 0x9297bu);
    c.r[6] = c.r[0];
    // 09297d  mov edi, edx
    X86_AT(c, 0x9297du);
    c.r[7] = c.r[2];
    // 09297f  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x9297fu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092981  pop edi
    X86_AT(c, 0x92981u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092982  pop esi
    X86_AT(c, 0x92982u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092983  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x92983u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 092986  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x92986u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 092989  jne 0x929b5
    X86_AT(c, 0x92989u);
    if (x86_cc(c, 5)) { goto L_929b5; }
    X86_TICK(c, 20);
    // 09298b  push 0x200
    X86_AT(c, 0x9298bu);
    { uint32_t v = 0x200u; push32(c, v); }
    // 092990  push dword ptr [ebx + 8]
    X86_AT(c, 0x92990u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 092993  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92993u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092996  push eax
    X86_AT(c, 0x92996u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092997  call 0x9500c
    X86_AT(c, 0x92997u);
    push32(c, 0x9299cu); x86_call_known(c, 0x9500cu, f_0009500c); X86_RET(c, 0x9299cu);
    X86_TICK(c, 7);
    // 09299c  cmp eax, 0x200
    X86_AT(c, 0x9299cu);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 0929a1  jne 0x92b2c
    X86_AT(c, 0x929a1u);
    if (x86_cc(c, 5)) { goto L_92b2c; }
    X86_TICK(c, 15);
    // 0929a7  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0x929a7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
    // 0929ae  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x929aeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0929b1  mov dword ptr [ebx], eax
    X86_AT(c, 0x929b1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0929b3  jmp 0x929bd
    X86_AT(c, 0x929b3u);
    goto L_929bd;
L_929b5:
    X86_TICK(c, 18);
    // 0929b5  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x929b5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0929b8  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x929b8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0929bb  add dword ptr [ebx], eax
    X86_AT(c, 0x929bbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_929bd:
    X86_TICK(c, 13);
    // 0929bd  mov esi, dword ptr [ebp - 8]
    X86_AT(c, 0x929bdu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0929c0  sub edi, esi
    X86_AT(c, 0x929c0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0929c2  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x929c2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_929c5:
    X86_TICK(c, 7);
    // 0929c5  cmp edi, 0x200
    X86_AT(c, 0x929c5u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0929cb  jbe 0x929fb
    X86_AT(c, 0x929cbu);
    if (x86_cc(c, 6)) { goto L_929fb; }
    X86_TICK(c, 35);
    // 0929cd  mov eax, edi
    X86_AT(c, 0x929cdu);
    c.r[0] = c.r[7];
    // 0929cf  shr eax, 9
    X86_AT(c, 0x929cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0929d2  shl eax, 9
    X86_AT(c, 0x929d2u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0929d5  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x929d5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0929d8  push eax
    X86_AT(c, 0x929d8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0929d9  mov edx, esi
    X86_AT(c, 0x929d9u);
    c.r[2] = c.r[6];
    // 0929db  add edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x929dbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0929de  push edx
    X86_AT(c, 0x929deu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0929df  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0x929dfu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0929e2  push edx
    X86_AT(c, 0x929e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0929e3  call 0x9500c
    X86_AT(c, 0x929e3u);
    push32(c, 0x929e8u); x86_call_known(c, 0x9500cu, f_0009500c); X86_RET(c, 0x929e8u);
    X86_TICK(c, 11);
    // 0929e8  cmp eax, dword ptr [ebp - 8]
    X86_AT(c, 0x929e8u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4);
    // 0929eb  jne 0x92b2c
    X86_AT(c, 0x929ebu);
    if (x86_cc(c, 5)) { goto L_92b2c; }
    X86_TICK(c, 15);
    // 0929f1  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x929f1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0929f4  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x929f4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0929f7  add esi, eax
    X86_AT(c, 0x929f7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0929f9  sub edi, eax
    X86_AT(c, 0x929f9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
L_929fb:
    X86_TICK(c, 7);
    // 0929fb  and edi, edi
    X86_AT(c, 0x929fbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0929fd  jbe 0x92b2c
    X86_AT(c, 0x929fdu);
    if (x86_cc(c, 6)) { goto L_92b2c; }
    X86_TICK(c, 65);
    // 092a03  mov ecx, edi
    X86_AT(c, 0x92a03u);
    c.r[1] = c.r[7];
    // 092a05  mov eax, esi
    X86_AT(c, 0x92a05u);
    c.r[0] = c.r[6];
    // 092a07  add eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92a07u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 092a0a  mov edx, dword ptr [ebx]
    X86_AT(c, 0x92a0au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092a0c  push esi
    X86_AT(c, 0x92a0cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092a0d  push edi
    X86_AT(c, 0x92a0du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092a0e  mov esi, eax
    X86_AT(c, 0x92a0eu);
    c.r[6] = c.r[0];
    // 092a10  mov edi, edx
    X86_AT(c, 0x92a10u);
    c.r[7] = c.r[2];
    // 092a12  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92a12u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092a14  pop edi
    X86_AT(c, 0x92a14u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092a15  pop esi
    X86_AT(c, 0x92a15u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092a16  sub dword ptr [ebx + 4], edi
    X86_AT(c, 0x92a16u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 092a19  add dword ptr [ebx], edi
    X86_AT(c, 0x92a19u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 092a1b  add dword ptr [ebp - 4], edi
    X86_AT(c, 0x92a1bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 092a1e  jmp 0x92b2c
    X86_AT(c, 0x92a1eu);
    goto L_92b2c;
L_92a23:
    X86_TICK(c, 9);
    // 092a23  mov byte ptr [ebp - 0xc], 0
    X86_AT(c, 0x92a23u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 092a27  jmp 0x92ad4
    X86_AT(c, 0x92a27u);
    goto L_92ad4;
L_92a2c:
    X86_TICK(c, 11);
    // 092a2c  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x92a2cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092a2f  cmp eax, edi
    X86_AT(c, 0x92a2fu);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 092a31  jl 0x92a35
    X86_AT(c, 0x92a31u);
    if (x86_cc(c, 12)) { goto L_92a35; }
    X86_TICK(c, 2);
    // 092a33  mov eax, edi
    X86_AT(c, 0x92a33u);
    c.r[0] = c.r[7];
L_92a35:
    X86_TICK(c, 31);
    // 092a35  xchg edx, eax
    X86_AT(c, 0x92a35u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 092a36  mov al, 0xa
    X86_AT(c, 0x92a36u);
    s8(c, 0, 0xAu);
    // 092a38  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92a38u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092a3b  add ecx, esi
    X86_AT(c, 0x92a3bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[6], 0, 4); }
    // 092a3d  push edi
    X86_AT(c, 0x92a3du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092a3e  mov edi, ecx
    X86_AT(c, 0x92a3eu);
    c.r[7] = c.r[1];
    // 092a40  mov dword ptr [ebp - 0x14], ecx
    X86_AT(c, 0x92a40u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[1]);
    // 092a43  mov ecx, edx
    X86_AT(c, 0x92a43u);
    c.r[1] = c.r[2];
    // 092a45  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92a45u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092a47  jne 0x92a4c
    X86_AT(c, 0x92a47u);
    if (x86_cc(c, 5)) { goto L_92a4c; }
    X86_TICK(c, 4);
    // 092a49  inc ecx
    X86_AT(c, 0x92a49u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092a4a  sub edx, ecx
    X86_AT(c, 0x92a4au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_92a4c:
    X86_TICK(c, 83);
    // 092a4c  pop edi
    X86_AT(c, 0x92a4cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092a4d  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x92a4du);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 092a51  mov ecx, edx
    X86_AT(c, 0x92a51u);
    c.r[1] = c.r[2];
    // 092a53  movsx ecx, cx
    X86_AT(c, 0x92a53u);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[1] & 0xFFFFu);
    // 092a56  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x92a56u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 092a59  mov edx, dword ptr [ebx]
    X86_AT(c, 0x92a59u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092a5b  push esi
    X86_AT(c, 0x92a5bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092a5c  push edi
    X86_AT(c, 0x92a5cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092a5d  mov esi, eax
    X86_AT(c, 0x92a5du);
    c.r[6] = c.r[0];
    // 092a5f  mov edi, edx
    X86_AT(c, 0x92a5fu);
    c.r[7] = c.r[2];
    // 092a61  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92a61u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092a63  pop edi
    X86_AT(c, 0x92a63u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092a64  pop esi
    X86_AT(c, 0x92a64u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092a65  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92a65u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 092a69  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x92a69u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092a6c  add esi, eax
    X86_AT(c, 0x92a6cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 092a6e  add dword ptr [ebx], eax
    X86_AT(c, 0x92a6eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092a70  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92a70u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 092a74  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x92a74u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092a77  mov ecx, edi
    X86_AT(c, 0x92a77u);
    c.r[1] = c.r[7];
    // 092a79  cmp ecx, edx
    X86_AT(c, 0x92a79u);
    (void)x86_sub(c, c.r[1], c.r[2], 0, 4);
    // 092a7b  jl 0x92a7f
    X86_AT(c, 0x92a7bu);
    if (x86_cc(c, 12)) { goto L_92a7f; }
    X86_TICK(c, 2);
    // 092a7d  mov ecx, edx
    X86_AT(c, 0x92a7du);
    c.r[1] = c.r[2];
L_92a7f:
    X86_TICK(c, 7);
    // 092a7f  cmp ecx, eax
    X86_AT(c, 0x92a7fu);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 092a81  jle 0x92acb
    X86_AT(c, 0x92a81u);
    if (x86_cc(c, 14)) { goto L_92acb; }
    X86_TICK(c, 15);
    // 092a83  sub edx, eax
    X86_AT(c, 0x92a83u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092a85  movzx eax, word ptr [0x8a72c]
    X86_AT(c, 0x92a85u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A72Cu)));
    // 092a8c  cmp eax, edx
    X86_AT(c, 0x92a8cu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 092a8e  jle 0x92a9b
    X86_AT(c, 0x92a8eu);
    if (x86_cc(c, 14)) { goto L_92a9b; }
    X86_TICK(c, 15);
    // 092a90  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92a90u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092a92  mov byte ptr [eax], 0xd
    X86_AT(c, 0x92a92u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xDu);
    // 092a95  mov byte ptr [ebp - 0xc], 1
    X86_AT(c, 0x92a95u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1u);
    // 092a99  jmp 0x92ab3
    X86_AT(c, 0x92a99u);
    goto L_92ab3;
L_92a9b:
    X86_TICK(c, 35);
    // 092a9b  movzx ecx, word ptr [0x8a72c]
    X86_AT(c, 0x92a9bu);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0x8A72Cu)));
    // 092aa2  mov eax, 0x8a72e
    X86_AT(c, 0x92aa2u);
    c.r[0] = 0x8A72Eu;
    // 092aa7  mov edx, dword ptr [ebx]
    X86_AT(c, 0x92aa7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092aa9  push esi
    X86_AT(c, 0x92aa9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092aaa  push edi
    X86_AT(c, 0x92aaau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092aab  mov esi, eax
    X86_AT(c, 0x92aabu);
    c.r[6] = c.r[0];
    // 092aad  mov edi, edx
    X86_AT(c, 0x92aadu);
    c.r[7] = c.r[2];
    // 092aaf  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92aafu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092ab1  pop edi
    X86_AT(c, 0x92ab1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092ab2  pop esi
    X86_AT(c, 0x92ab2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_92ab3:
    X86_TICK(c, 36);
    // 092ab3  inc dword ptr [ebp - 4]
    X86_AT(c, 0x92ab3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 092ab6  inc esi
    X86_AT(c, 0x92ab6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 092ab7  dec edi
    X86_AT(c, 0x92ab7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 092ab8  movzx eax, word ptr [0x8a72c]
    X86_AT(c, 0x92ab8u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A72Cu)));
    // 092abf  add dword ptr [ebx], eax
    X86_AT(c, 0x92abfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092ac1  movzx eax, word ptr [0x8a72c]
    X86_AT(c, 0x92ac1u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A72Cu)));
    // 092ac8  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x92ac8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_92acb:
    X86_TICK(c, 15);
    // 092acb  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92acbu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 092acf  sub edi, eax
    X86_AT(c, 0x92acfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092ad1  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x92ad1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_92ad4:
    X86_TICK(c, 12);
    // 092ad4  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x92ad4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 092ad8  jle 0x92ae2
    X86_AT(c, 0x92ad8u);
    if (x86_cc(c, 14)) { goto L_92ae2; }
    X86_TICK(c, 7);
    // 092ada  and edi, edi
    X86_AT(c, 0x92adau);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092adc  ja 0x92a2c
    X86_AT(c, 0x92adcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x92a2cu); goto L_92a2c; }
L_92ae2:
    X86_TICK(c, 7);
    // 092ae2  and edi, edi
    X86_AT(c, 0x92ae2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092ae4  ja 0x92af0
    X86_AT(c, 0x92ae4u);
    if (x86_cc(c, 7)) { goto L_92af0; }
    X86_TICK(c, 7);
    // 092ae6  and edi, edi
    X86_AT(c, 0x92ae6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092ae8  jne 0x92b14
    X86_AT(c, 0x92ae8u);
    if (x86_cc(c, 5)) { goto L_92b14; }
    X86_TICK(c, 12);
    // 092aea  cmp byte ptr [ebp - 0xc], 0
    X86_AT(c, 0x92aeau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 1);
    // 092aee  je 0x92b14
    X86_AT(c, 0x92aeeu);
    if (x86_cc(c, 4)) { goto L_92b14; }
L_92af0:
    X86_TICK(c, 20);
    // 092af0  push 0x200
    X86_AT(c, 0x92af0u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 092af5  push dword ptr [ebx + 8]
    X86_AT(c, 0x92af5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 092af8  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92af8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092afb  push eax
    X86_AT(c, 0x92afbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092afc  call 0x9500c
    X86_AT(c, 0x92afcu);
    push32(c, 0x92b01u); x86_call_known(c, 0x9500cu, f_0009500c); X86_RET(c, 0x92b01u);
    X86_TICK(c, 7);
    // 092b01  cmp eax, 0x200
    X86_AT(c, 0x92b01u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 092b06  jne 0x92b2c
    X86_AT(c, 0x92b06u);
    if (x86_cc(c, 5)) { goto L_92b2c; }
    X86_TICK(c, 8);
    // 092b08  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0x92b08u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
    // 092b0f  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x92b0fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 092b12  mov dword ptr [ebx], eax
    X86_AT(c, 0x92b12u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_92b14:
    X86_TICK(c, 12);
    // 092b14  cmp byte ptr [ebp - 0xc], 0
    X86_AT(c, 0x92b14u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 1);
    // 092b18  je 0x92b24
    X86_AT(c, 0x92b18u);
    if (x86_cc(c, 4)) { goto L_92b24; }
    X86_TICK(c, 18);
    // 092b1a  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92b1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092b1c  mov byte ptr [eax], 0xa
    X86_AT(c, 0x92b1cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xAu);
    // 092b1f  inc dword ptr [ebx]
    X86_AT(c, 0x92b1fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 092b21  dec dword ptr [ebx + 4]
    X86_AT(c, 0x92b21u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_92b24:
    X86_TICK(c, 7);
    // 092b24  and edi, edi
    X86_AT(c, 0x92b24u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092b26  ja 0x92a23
    X86_AT(c, 0x92b26u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x92a23u); goto L_92a23; }
L_92b2c:
    X86_TICK(c, 12);
    // 092b2c  cmp word ptr [0x8aabe], 0
    X86_AT(c, 0x92b2cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8AABEu))), 0x0u, 0, 2);
    // 092b34  je 0x92b3c
    X86_AT(c, 0x92b34u);
    if (x86_cc(c, 4)) { goto L_92b3c; }
    X86_TICK(c, 14);
    // 092b36  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x92b36u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 092b3a  jmp 0x92b46
    X86_AT(c, 0x92b3au);
    goto L_92b46;
L_92b3c:
    X86_TICK(c, 6);
    // 092b3c  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0x92b3cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 092b40  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x92b40u);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
L_92b46:
    X86_TICK(c, 32);
    // 092b46  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92b46u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092b49  pop edi
    X86_AT(c, 0x92b49u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092b4a  pop esi
    X86_AT(c, 0x92b4au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092b4b  pop ebx
    X86_AT(c, 0x92b4bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092b4c  leave 
    X86_AT(c, 0x92b4cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092b4d  ret 0xc
    X86_AT(c, 0x92b4du);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x92870u, "ran off the end of a function");
}
void f_00092b2c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 092b2c  cmp word ptr [0x8aabe], 0
    X86_AT(c, 0x92b2cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8AABEu))), 0x0u, 0, 2);
    // 092b34  je 0x92b3c
    X86_AT(c, 0x92b34u);
    if (x86_cc(c, 4)) { goto L_92b3c; }
    X86_TICK(c, 14);
    // 092b36  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x92b36u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 092b3a  jmp 0x92b46
    X86_AT(c, 0x92b3au);
    goto L_92b46;
L_92b3c:
    X86_TICK(c, 6);
    // 092b3c  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0x92b3cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 092b40  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x92b40u);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
L_92b46:
    X86_TICK(c, 32);
    // 092b46  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92b46u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092b49  pop edi
    X86_AT(c, 0x92b49u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092b4a  pop esi
    X86_AT(c, 0x92b4au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092b4b  pop ebx
    X86_AT(c, 0x92b4bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092b4c  leave 
    X86_AT(c, 0x92b4cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092b4d  ret 0xc
    X86_AT(c, 0x92b4du);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x92b2cu, "ran off the end of a function");
}
void f_00092b58(X86Cpu& c) {
    X86_TICK(c, 30);
    // 092b58  enter 4, 0
    X86_AT(c, 0x92b58u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 092b5c  push ebx
    X86_AT(c, 0x92b5cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092b5d  push esi
    X86_AT(c, 0x92b5du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092b5e  push edi
    X86_AT(c, 0x92b5eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092b5f  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x92b5fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 092b62  mov ebx, edi
    X86_AT(c, 0x92b62u);
    c.r[3] = c.r[7];
    // 092b64  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x92b64u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 092b68  jne 0x92b7a
    X86_AT(c, 0x92b68u);
    if (x86_cc(c, 5)) { goto L_92b7a; }
    X86_TICK(c, 18);
    // 092b6a  mov ax, 5
    X86_AT(c, 0x92b6au);
    s16(c, 0, 0x5u);
    // 092b6e  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x92b6eu);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
    // 092b74  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x92b74u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 092b78  jmp 0x92bad
    X86_AT(c, 0x92b78u);
    goto L_92bad;
L_92b7a:
    X86_TICK(c, 12);
    // 092b7a  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x92b7au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 092b7e  je 0x92b86
    X86_AT(c, 0x92b7eu);
    if (x86_cc(c, 4)) { goto L_92b86; }
    X86_TICK(c, 9);
    // 092b80  push edi
    X86_AT(c, 0x92b80u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092b81  call 0x93ae0
    X86_AT(c, 0x92b81u);
    push32(c, 0x92b86u); x86_call_known(c, 0x93ae0u, f_00093ae0); X86_RET(c, 0x92b86u);
L_92b86:
    X86_TICK(c, 43);
    // 092b86  or byte ptr [ebx + 0xd], 8
    X86_AT(c, 0x92b86u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
    // 092b8a  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92b8au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092b8d  imul eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x92b8du);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 092b91  xchg esi, eax
    X86_AT(c, 0x92b91u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 092b92  and esi, esi
    X86_AT(c, 0x92b92u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092b94  jl 0x92b9e
    X86_AT(c, 0x92b94u);
    if (x86_cc(c, 12)) { goto L_92b9e; }
    X86_TICK(c, 7);
    // 092b96  cmp esi, 0x7fffffff
    X86_AT(c, 0x92b96u);
    (void)x86_sub(c, c.r[6], 0x7FFFFFFFu, 0, 4);
    // 092b9c  jle 0x92ba9
    X86_AT(c, 0x92b9cu);
    if (x86_cc(c, 14)) { goto L_92ba9; }
L_92b9e:
    X86_TICK(c, 9);
    // 092b9e  mov word ptr [0x8aabe], 1
    X86_AT(c, 0x92b9eu);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), 0x1u);
    // 092ba7  jmp 0x92bad
    X86_AT(c, 0x92ba7u);
    goto L_92bad;
L_92ba9:
    X86_TICK(c, 7);
    // 092ba9  and esi, esi
    X86_AT(c, 0x92ba9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092bab  jne 0x92bb1
    X86_AT(c, 0x92babu);
    if (x86_cc(c, 5)) { goto L_92bb1; }
L_92bad:
    X86_TICK(c, 9);
    // 092bad  sub eax, eax
    X86_AT(c, 0x92badu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092baf  jmp 0x92bf2
    X86_AT(c, 0x92bafu);
    goto L_92bf2;
L_92bb1:
    X86_TICK(c, 12);
    // 092bb1  test byte ptr [ebx + 0xc], 8
    X86_AT(c, 0x92bb1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x8u, 1);
    // 092bb5  je 0x92bc4
    X86_AT(c, 0x92bb5u);
    if (x86_cc(c, 4)) { goto L_92bc4; }
    X86_TICK(c, 17);
    // 092bb7  push 2
    X86_AT(c, 0x92bb7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 092bb9  push 0
    X86_AT(c, 0x92bb9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 092bbb  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92bbbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092bbe  push eax
    X86_AT(c, 0x92bbeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092bbf  call 0x950b8
    X86_AT(c, 0x92bbfu);
    push32(c, 0x92bc4u); x86_call_known(c, 0x950b8u, f_000950b8); X86_RET(c, 0x92bc4u);
L_92bc4:
    X86_TICK(c, 16);
    // 092bc4  push esi
    X86_AT(c, 0x92bc4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092bc5  push dword ptr [ebp + 8]
    X86_AT(c, 0x92bc5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092bc8  push edi
    X86_AT(c, 0x92bc8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092bc9  call 0x92870
    X86_AT(c, 0x92bc9u);
    push32(c, 0x92bceu); x86_call_known(c, 0x92870u, f_00092870); X86_RET(c, 0x92bceu);
    X86_TICK(c, 56);
    // 092bce  cdq 
    X86_AT(c, 0x92bceu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 092bcf  idiv dword ptr [ebp + 0xc]
    X86_AT(c, 0x92bcfu);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 4, 0x92bcfu);
    // 092bd2  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92bd2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 092bd5  test byte ptr [ebx + 0xc], 8
    X86_AT(c, 0x92bd5u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x8u, 1);
    // 092bd9  je 0x92bef
    X86_AT(c, 0x92bd9u);
    if (x86_cc(c, 4)) { goto L_92bef; }
    X86_TICK(c, 9);
    // 092bdb  push edi
    X86_AT(c, 0x92bdbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092bdc  call 0x92c0c
    X86_AT(c, 0x92bdcu);
    push32(c, 0x92be1u); x86_call_known(c, 0x92c0cu, f_00092c0c); X86_RET(c, 0x92be1u);
    X86_TICK(c, 21);
    // 092be1  pop ecx
    X86_AT(c, 0x92be1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 092be2  push 2
    X86_AT(c, 0x92be2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 092be4  push 0
    X86_AT(c, 0x92be4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 092be6  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92be6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092be9  push eax
    X86_AT(c, 0x92be9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092bea  call 0x950b8
    X86_AT(c, 0x92beau);
    push32(c, 0x92befu); x86_call_known(c, 0x950b8u, f_000950b8); X86_RET(c, 0x92befu);
L_92bef:
    X86_TICK(c, 4);
    // 092bef  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92befu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_92bf2:
    X86_TICK(c, 28);
    // 092bf2  pop edi
    X86_AT(c, 0x92bf2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092bf3  pop esi
    X86_AT(c, 0x92bf3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092bf4  pop ebx
    X86_AT(c, 0x92bf4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092bf5  leave 
    X86_AT(c, 0x92bf5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092bf6  ret 
    X86_AT(c, 0x92bf6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92b58u, "ran off the end of a function");
}
void f_00092c0c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 092c0c  enter 4, 0
    X86_AT(c, 0x92c0cu);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 092c10  push edi
    X86_AT(c, 0x92c10u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092c11  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x92c11u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 092c14  test byte ptr [edi + 0xc], 4
    X86_AT(c, 0x92c14u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x4u, 1);
    // 092c18  jne 0x92c31
    X86_AT(c, 0x92c18u);
    if (x86_cc(c, 5)) { goto L_92c31; }
    X86_TICK(c, 15);
    // 092c1a  mov ax, 1
    X86_AT(c, 0x92c1au);
    s16(c, 0, 0x1u);
    // 092c1e  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x92c1eu);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
    // 092c24  mov eax, 1
    X86_AT(c, 0x92c24u);
    c.r[0] = 0x1u;
    // 092c29  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92c29u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 092c2c  jmp 0x92cc8
    X86_AT(c, 0x92c2cu);
    goto L_92cc8;
L_92c31:
    X86_TICK(c, 12);
    // 092c31  test byte ptr [edi + 0xd], 8
    X86_AT(c, 0x92c31u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))) & 0x8u, 1);
    // 092c35  je 0x92c43
    X86_AT(c, 0x92c35u);
    if (x86_cc(c, 4)) { goto L_92c43; }
    X86_TICK(c, 12);
    // 092c37  cmp dword ptr [edi + 4], 0xffffffff
    X86_AT(c, 0x92c37u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 092c3b  je 0x92c43
    X86_AT(c, 0x92c3bu);
    if (x86_cc(c, 4)) { goto L_92c43; }
    X86_TICK(c, 12);
    // 092c3d  test byte ptr [edi + 0xc], 0x80
    X86_AT(c, 0x92c3du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x80u, 1);
    // 092c41  je 0x92c4a
    X86_AT(c, 0x92c41u);
    if (x86_cc(c, 4)) { goto L_92c4a; }
L_92c43:
    X86_TICK(c, 9);
    // 092c43  sub eax, eax
    X86_AT(c, 0x92c43u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092c45  jmp 0x92ccb
    X86_AT(c, 0x92c45u);
    goto L_92ccb;
L_92c4a:
    X86_TICK(c, 12);
    // 092c4a  test byte ptr [edi + 0xc], 1
    X86_AT(c, 0x92c4au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x1u, 1);
    // 092c4e  je 0x92cc1
    X86_AT(c, 0x92c4eu);
    if (x86_cc(c, 4)) { goto L_92cc1; }
    X86_TICK(c, 12);
    // 092c54  cmp dword ptr [edi + 4], 0x200
    X86_AT(c, 0x92c54u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0x200u, 0, 4);
    // 092c5b  jge 0x92cc1
    X86_AT(c, 0x92c5bu);
    if (x86_cc(c, 13)) { goto L_92cc1; }
    X86_TICK(c, 12);
    // 092c5d  test byte ptr [edi + 0xc], 8
    X86_AT(c, 0x92c5du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x8u, 1);
    // 092c61  je 0x92c70
    X86_AT(c, 0x92c61u);
    if (x86_cc(c, 4)) { goto L_92c70; }
    X86_TICK(c, 17);
    // 092c63  push 2
    X86_AT(c, 0x92c63u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 092c65  push 0
    X86_AT(c, 0x92c65u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 092c67  mov al, byte ptr [edi + 0xe]
    X86_AT(c, 0x92c67u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu))));
    // 092c6a  push eax
    X86_AT(c, 0x92c6au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092c6b  call 0x950b8
    X86_AT(c, 0x92c6bu);
    push32(c, 0x92c70u); x86_call_known(c, 0x950b8u, f_000950b8); X86_RET(c, 0x92c70u);
L_92c70:
    X86_TICK(c, 28);
    // 092c70  mov eax, 0x200
    X86_AT(c, 0x92c70u);
    c.r[0] = 0x200u;
    // 092c75  sub eax, dword ptr [edi + 4]
    X86_AT(c, 0x92c75u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4); }
    // 092c78  push eax
    X86_AT(c, 0x92c78u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092c79  push dword ptr [edi + 8]
    X86_AT(c, 0x92c79u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))); push32(c, v); }
    // 092c7c  mov al, byte ptr [edi + 0xe]
    X86_AT(c, 0x92c7cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu))));
    // 092c7f  push eax
    X86_AT(c, 0x92c7fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092c80  call 0x9500c
    X86_AT(c, 0x92c80u);
    push32(c, 0x92c85u); x86_call_known(c, 0x9500cu, f_0009500c); X86_RET(c, 0x92c85u);
    X86_TICK(c, 17);
    // 092c85  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92c85u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 092c88  mov edx, 0x200
    X86_AT(c, 0x92c88u);
    c.r[2] = 0x200u;
    // 092c8d  sub edx, dword ptr [edi + 4]
    X86_AT(c, 0x92c8du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4); }
    // 092c90  cmp edx, eax
    X86_AT(c, 0x92c90u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092c92  jne 0x92c9d
    X86_AT(c, 0x92c92u);
    if (x86_cc(c, 5)) { goto L_92c9d; }
    X86_TICK(c, 9);
    // 092c94  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x92c94u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 092c9b  jmp 0x92cb3
    X86_AT(c, 0x92c9bu);
    goto L_92cb3;
L_92c9d:
    X86_TICK(c, 15);
    // 092c9d  mov ax, 0x15
    X86_AT(c, 0x92c9du);
    s16(c, 0, 0x15u);
    // 092ca1  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x92ca1u);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
    // 092ca7  mov eax, 0x15
    X86_AT(c, 0x92ca7u);
    c.r[0] = 0x15u;
    // 092cac  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92cacu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 092caf  or byte ptr [edi + 0xc], 0x20
    X86_AT(c, 0x92cafu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
L_92cb3:
    X86_TICK(c, 15);
    // 092cb3  mov eax, dword ptr [edi + 8]
    X86_AT(c, 0x92cb3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 092cb6  mov dword ptr [edi], eax
    X86_AT(c, 0x92cb6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 092cb8  mov dword ptr [edi + 4], 0x200
    X86_AT(c, 0x92cb8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), 0x200u);
    // 092cbf  jmp 0x92cc8
    X86_AT(c, 0x92cbfu);
    goto L_92cc8;
L_92cc1:
    X86_TICK(c, 2);
    // 092cc1  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x92cc1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_92cc8:
    X86_TICK(c, 4);
    // 092cc8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92cc8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_92ccb:
    X86_TICK(c, 20);
    // 092ccb  pop edi
    X86_AT(c, 0x92ccbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092ccc  leave 
    X86_AT(c, 0x92cccu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092ccd  ret 
    X86_AT(c, 0x92ccdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92c0cu, "ran off the end of a function");
}
void f_00092cd8(X86Cpu& c) {
    X86_TICK(c, 80);
    // 092cd8  enter 4, 0
    X86_AT(c, 0x92cd8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 092cdc  push ebx
    X86_AT(c, 0x92cdcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092cdd  push esi
    X86_AT(c, 0x92cddu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092cde  push edi
    X86_AT(c, 0x92cdeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092cdf  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x92cdfu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 092ce2  sub eax, eax
    X86_AT(c, 0x92ce2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092ce4  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92ce4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 092ce7  mov eax, edi
    X86_AT(c, 0x92ce7u);
    c.r[0] = c.r[7];
    // 092ce9  mov edx, 0x8a860
    X86_AT(c, 0x92ce9u);
    c.r[2] = 0x8A860u;
    // 092cee  sub eax, edx
    X86_AT(c, 0x92ceeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 092cf0  cdq 
    X86_AT(c, 0x92cf0u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 092cf1  mov ecx, 0x12
    X86_AT(c, 0x92cf1u);
    c.r[1] = 0x12u;
    // 092cf6  idiv ecx
    X86_AT(c, 0x92cf6u);
    x86_idiv(c, c.r[1], 4, 0x92cf6u);
    // 092cf8  xchg esi, eax
    X86_AT(c, 0x92cf8u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 092cf9  and esi, esi
    X86_AT(c, 0x92cf9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092cfb  jl 0x92d4f
    X86_AT(c, 0x92cfbu);
    if (x86_cc(c, 12)) { goto L_92d4f; }
    X86_TICK(c, 7);
    // 092cfd  cmp esi, 0x19
    X86_AT(c, 0x92cfdu);
    (void)x86_sub(c, c.r[6], 0x19u, 0, 4);
    // 092d00  jg 0x92d4f
    X86_AT(c, 0x92d00u);
    if (x86_cc(c, 15)) { goto L_92d4f; }
    X86_TICK(c, 12);
    // 092d02  cmp word ptr [edi + 0xc], 0
    X86_AT(c, 0x92d02u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))), 0x0u, 0, 2);
    // 092d07  je 0x92d4f
    X86_AT(c, 0x92d07u);
    if (x86_cc(c, 4)) { goto L_92d4f; }
    X86_TICK(c, 14);
    // 092d09  mov ebx, edi
    X86_AT(c, 0x92d09u);
    c.r[3] = c.r[7];
    // 092d0b  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x92d0bu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 092d0f  je 0x92d3e
    X86_AT(c, 0x92d0fu);
    if (x86_cc(c, 4)) { goto L_92d3e; }
    X86_TICK(c, 12);
    // 092d11  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x92d11u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 092d15  je 0x92d23
    X86_AT(c, 0x92d15u);
    if (x86_cc(c, 4)) { goto L_92d23; }
    X86_TICK(c, 9);
    // 092d17  push edi
    X86_AT(c, 0x92d17u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092d18  call 0x92c0c
    X86_AT(c, 0x92d18u);
    push32(c, 0x92d1du); x86_call_known(c, 0x92c0cu, f_00092c0c); X86_RET(c, 0x92d1du);
    X86_TICK(c, 13);
    // 092d1d  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92d1du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 092d20  pop ecx
    X86_AT(c, 0x92d20u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 092d21  jmp 0x92d29
    X86_AT(c, 0x92d21u);
    goto L_92d29;
L_92d23:
    X86_TICK(c, 12);
    // 092d23  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x92d23u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 092d27  je 0x92d4f
    X86_AT(c, 0x92d27u);
    if (x86_cc(c, 4)) { goto L_92d4f; }
L_92d29:
    X86_TICK(c, 12);
    // 092d29  test byte ptr [ebx + 0xd], 1
    X86_AT(c, 0x92d29u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x1u, 1);
    // 092d2d  jne 0x92d3e
    X86_AT(c, 0x92d2du);
    if (x86_cc(c, 5)) { goto L_92d3e; }
    X86_TICK(c, 12);
    // 092d2f  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x92d2fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 092d33  jne 0x92d3e
    X86_AT(c, 0x92d33u);
    if (x86_cc(c, 5)) { goto L_92d3e; }
    X86_TICK(c, 12);
    // 092d35  push dword ptr [ebx + 8]
    X86_AT(c, 0x92d35u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 092d38  call 0x9319c
    X86_AT(c, 0x92d38u);
    push32(c, 0x92d3du); x86_call_known(c, 0x9319cu, f_0009319c); X86_RET(c, 0x92d3du);
    X86_TICK(c, 4);
    // 092d3d  pop ecx
    X86_AT(c, 0x92d3du);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_92d3e:
    X86_TICK(c, 13);
    // 092d3e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92d3eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092d41  push eax
    X86_AT(c, 0x92d41u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092d42  call 0x948b0
    X86_AT(c, 0x92d42u);
    push32(c, 0x92d47u); x86_call_known(c, 0x948b0u, f_000948b0); X86_RET(c, 0x92d47u);
    X86_TICK(c, 9);
    // 092d47  mov word ptr [ebx + 0xc], 0
    X86_AT(c, 0x92d47u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), 0x0u);
    // 092d4d  jmp 0x92d61
    X86_AT(c, 0x92d4du);
    goto L_92d61;
L_92d4f:
    X86_TICK(c, 8);
    // 092d4f  mov ax, 6
    X86_AT(c, 0x92d4fu);
    s16(c, 0, 0x6u);
    // 092d53  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x92d53u);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
    // 092d59  mov eax, 6
    X86_AT(c, 0x92d59u);
    c.r[0] = 0x6u;
    // 092d5e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92d5eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_92d61:
    X86_TICK(c, 32);
    // 092d61  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92d61u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092d64  pop edi
    X86_AT(c, 0x92d64u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092d65  pop esi
    X86_AT(c, 0x92d65u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092d66  pop ebx
    X86_AT(c, 0x92d66u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092d67  leave 
    X86_AT(c, 0x92d67u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092d68  ret 
    X86_AT(c, 0x92d68u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92cd8u, "ran off the end of a function");
}
void f_00092d78(X86Cpu& c) {
    X86_TICK(c, 4);
    // 092d78  push edi
    X86_AT(c, 0x92d78u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092d79  sub edi, edi
    X86_AT(c, 0x92d79u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_92d7b:
    X86_TICK(c, 16);
    // 092d7b  lea eax, [edi + edi*4]
    X86_AT(c, 0x92d7bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 092d7e  lea eax, [eax*4]
    X86_AT(c, 0x92d7eu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 092d85  test byte ptr [eax + 0x8a86c], 6
    X86_AT(c, 0x92d85u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8A86Cu))) & 0x6u, 1);
    // 092d8c  je 0x92da2
    X86_AT(c, 0x92d8cu);
    if (x86_cc(c, 4)) { goto L_92da2; }
    X86_TICK(c, 13);
    // 092d8e  add eax, 0x8a860
    X86_AT(c, 0x92d8eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8A860u, 0, 4); }
    // 092d93  cmp eax, dword ptr [0x8a73c]
    X86_AT(c, 0x92d93u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A73Cu))), 0, 4);
    // 092d99  je 0x92da2
    X86_AT(c, 0x92d99u);
    if (x86_cc(c, 4)) { goto L_92da2; }
    X86_TICK(c, 9);
    // 092d9b  push eax
    X86_AT(c, 0x92d9bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092d9c  call 0x92cd8
    X86_AT(c, 0x92d9cu);
    push32(c, 0x92da1u); x86_call_known(c, 0x92cd8u, f_00092cd8); X86_RET(c, 0x92da1u);
    X86_TICK(c, 4);
    // 092da1  pop ecx
    X86_AT(c, 0x92da1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_92da2:
    X86_TICK(c, 7);
    // 092da2  cmp edi, 0x19
    X86_AT(c, 0x92da2u);
    (void)x86_sub(c, c.r[7], 0x19u, 0, 4);
    // 092da5  jae 0x92daa
    X86_AT(c, 0x92da5u);
    if (x86_cc(c, 3)) { goto L_92daa; }
    X86_TICK(c, 9);
    // 092da7  inc edi
    X86_AT(c, 0x92da7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 092da8  jmp 0x92d7b
    X86_AT(c, 0x92da8u);
    X86_POLL(c, 0x92d7bu); goto L_92d7b;
L_92daa:
    X86_TICK(c, 12);
    // 092daa  push dword ptr [0x8a73c]
    X86_AT(c, 0x92daau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A73Cu))); push32(c, v); }
    // 092db0  call 0x92cd8
    X86_AT(c, 0x92db0u);
    push32(c, 0x92db5u); x86_call_known(c, 0x92cd8u, f_00092cd8); X86_RET(c, 0x92db5u);
    X86_TICK(c, 18);
    // 092db5  pop ecx
    X86_AT(c, 0x92db5u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 092db6  pop edi
    X86_AT(c, 0x92db6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092db7  ret 
    X86_AT(c, 0x92db7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92d78u, "ran off the end of a function");
}
void f_00092dc8(X86Cpu& c) {
    X86_TICK(c, 26);
    // 092dc8  enter 4, 0
    X86_AT(c, 0x92dc8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 092dcc  push dword ptr [ebp + 8]
    X86_AT(c, 0x92dccu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092dcf  push 1
    X86_AT(c, 0x92dcfu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092dd1  push 1
    X86_AT(c, 0x92dd1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092dd3  lea eax, [ebp - 1]
    X86_AT(c, 0x92dd3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 092dd6  push eax
    X86_AT(c, 0x92dd6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092dd7  call 0x92500
    X86_AT(c, 0x92dd7u);
    push32(c, 0x92ddcu); x86_call_known(c, 0x92500u, f_00092500); X86_RET(c, 0x92ddcu);
    X86_TICK(c, 9);
    // 092ddc  add esp, 0x10
    X86_AT(c, 0x92ddcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 092ddf  and eax, eax
    X86_AT(c, 0x92ddfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 092de1  jne 0x92dea
    X86_AT(c, 0x92de1u);
    if (x86_cc(c, 5)) { goto L_92dea; }
    X86_TICK(c, 9);
    // 092de3  mov eax, 0xffffffff
    X86_AT(c, 0x92de3u);
    c.r[0] = 0xFFFFFFFFu;
    // 092de8  jmp 0x92dee
    X86_AT(c, 0x92de8u);
    goto L_92dee;
L_92dea:
    X86_TICK(c, 6);
    // 092dea  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0x92deau);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
L_92dee:
    X86_TICK(c, 16);
    // 092dee  leave 
    X86_AT(c, 0x92deeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092def  ret 
    X86_AT(c, 0x92defu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92dc8u, "ran off the end of a function");
}
void f_00092e30(X86Cpu& c) {
    X86_TICK(c, 36);
    // 092e30  enter 8, 0
    X86_AT(c, 0x92e30u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 092e34  push edi
    X86_AT(c, 0x92e34u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092e35  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x92e35u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 092e38  mov eax, edi
    X86_AT(c, 0x92e38u);
    c.r[0] = c.r[7];
    // 092e3a  mov byte ptr [ebp - 5], al
    X86_AT(c, 0x92e3au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 092e3d  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x92e3du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 092e40  push 1
    X86_AT(c, 0x92e40u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092e42  push 1
    X86_AT(c, 0x92e42u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092e44  lea eax, [ebp - 5]
    X86_AT(c, 0x92e44u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 092e47  push eax
    X86_AT(c, 0x92e47u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092e48  call 0x92b58
    X86_AT(c, 0x92e48u);
    push32(c, 0x92e4du); x86_call_known(c, 0x92b58u, f_00092b58); X86_RET(c, 0x92e4du);
    X86_TICK(c, 9);
    // 092e4d  add esp, 0x10
    X86_AT(c, 0x92e4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 092e50  dec eax
    X86_AT(c, 0x92e50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 092e51  je 0x92e5c
    X86_AT(c, 0x92e51u);
    if (x86_cc(c, 4)) { goto L_92e5c; }
    X86_TICK(c, 9);
    // 092e53  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0x92e53u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 092e5a  jmp 0x92e5f
    X86_AT(c, 0x92e5au);
    goto L_92e5f;
L_92e5c:
    X86_TICK(c, 2);
    // 092e5c  mov dword ptr [ebp - 4], edi
    X86_AT(c, 0x92e5cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[7]);
L_92e5f:
    X86_TICK(c, 24);
    // 092e5f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92e5fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092e62  pop edi
    X86_AT(c, 0x92e62u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092e63  leave 
    X86_AT(c, 0x92e63u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092e64  ret 
    X86_AT(c, 0x92e64u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92e30u, "ran off the end of a function");
}
void f_00092f50(X86Cpu& c) {
    X86_TICK(c, 27);
    // 092f50  enter 8, 0
    X86_AT(c, 0x92f50u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 092f54  push ebx
    X86_AT(c, 0x92f54u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092f55  push esi
    X86_AT(c, 0x92f55u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092f56  push edi
    X86_AT(c, 0x92f56u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092f57  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x92f57u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 092f5a  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x92f5au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 092f5d  and esi, esi
    X86_AT(c, 0x92f5du);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092f5f  jl 0x92f66
    X86_AT(c, 0x92f5fu);
    if (x86_cc(c, 12)) { goto L_92f66; }
    X86_TICK(c, 7);
    // 092f61  cmp esi, 2
    X86_AT(c, 0x92f61u);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 092f64  jle 0x92f72
    X86_AT(c, 0x92f64u);
    if (x86_cc(c, 14)) { goto L_92f72; }
L_92f66:
    X86_TICK(c, 9);
    // 092f66  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0x92f66u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 092f6d  jmp 0x93023
    X86_AT(c, 0x92f6du);
    goto L_93023;
L_92f72:
    X86_TICK(c, 31);
    // 092f72  mov ax, word ptr [0x8aabe]
    X86_AT(c, 0x92f72u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8AABEu))));
    // 092f78  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x92f78u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 092f7c  sub eax, eax
    X86_AT(c, 0x92f7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092f7e  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x92f7eu);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
    // 092f84  mov ebx, edi
    X86_AT(c, 0x92f84u);
    c.r[3] = c.r[7];
    // 092f86  and byte ptr [ebx + 0xd], 0xfb
    X86_AT(c, 0x92f86u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFBu, 1)); }
    // 092f8a  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x92f8au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 092f8e  je 0x92fe9
    X86_AT(c, 0x92f8eu);
    if (x86_cc(c, 4)) { goto L_92fe9; }
    X86_TICK(c, 12);
    // 092f90  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x92f90u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 092f94  je 0x92fcc
    X86_AT(c, 0x92f94u);
    if (x86_cc(c, 4)) { goto L_92fcc; }
    X86_TICK(c, 12);
    // 092f96  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x92f96u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 092f9a  je 0x92faf
    X86_AT(c, 0x92f9au);
    if (x86_cc(c, 4)) { goto L_92faf; }
    X86_TICK(c, 12);
    // 092f9c  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x92f9cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 092fa0  je 0x92fa8
    X86_AT(c, 0x92fa0u);
    if (x86_cc(c, 4)) { goto L_92fa8; }
    X86_TICK(c, 12);
    // 092fa2  test byte ptr [ebx + 0xd], 8
    X86_AT(c, 0x92fa2u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x8u, 1);
    // 092fa6  je 0x92faf
    X86_AT(c, 0x92fa6u);
    if (x86_cc(c, 4)) { goto L_92faf; }
L_92fa8:
    X86_TICK(c, 9);
    // 092fa8  push edi
    X86_AT(c, 0x92fa8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092fa9  call 0x92c0c
    X86_AT(c, 0x92fa9u);
    push32(c, 0x92faeu); x86_call_known(c, 0x92c0cu, f_00092c0c); X86_RET(c, 0x92faeu);
    X86_TICK(c, 4);
    // 092fae  pop ecx
    X86_AT(c, 0x92faeu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_92faf:
    X86_TICK(c, 7);
    // 092faf  cmp esi, 1
    X86_AT(c, 0x92fafu);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 092fb2  jne 0x92fcc
    X86_AT(c, 0x92fb2u);
    if (x86_cc(c, 5)) { goto L_92fcc; }
    X86_TICK(c, 12);
    // 092fb4  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x92fb4u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 092fb8  je 0x92fcc
    X86_AT(c, 0x92fb8u);
    if (x86_cc(c, 4)) { goto L_92fcc; }
    X86_TICK(c, 12);
    // 092fba  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x92fbau);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 092fbe  je 0x92fc6
    X86_AT(c, 0x92fbeu);
    if (x86_cc(c, 4)) { goto L_92fc6; }
    X86_TICK(c, 12);
    // 092fc0  test byte ptr [ebx + 0xd], 8
    X86_AT(c, 0x92fc0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x8u, 1);
    // 092fc4  jne 0x92fcc
    X86_AT(c, 0x92fc4u);
    if (x86_cc(c, 5)) { goto L_92fcc; }
L_92fc6:
    X86_TICK(c, 11);
    // 092fc6  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x92fc6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092fc9  sub dword ptr [ebp + 0xc], eax
    X86_AT(c, 0x92fc9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_92fcc:
    X86_TICK(c, 22);
    // 092fcc  mov eax, esi
    X86_AT(c, 0x92fccu);
    c.r[0] = c.r[6];
    // 092fce  push eax
    X86_AT(c, 0x92fceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092fcf  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x92fcfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 092fd2  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92fd2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092fd5  push eax
    X86_AT(c, 0x92fd5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092fd6  call 0x950b8
    X86_AT(c, 0x92fd6u);
    push32(c, 0x92fdbu); x86_call_known(c, 0x950b8u, f_000950b8); X86_RET(c, 0x92fdbu);
    X86_TICK(c, 15);
    // 092fdb  mov dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x92fdbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0xFFFFFFFFu);
    // 092fe2  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x92fe2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 092fe5  mov dword ptr [ebx], eax
    X86_AT(c, 0x92fe5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 092fe7  jmp 0x92ff8
    X86_AT(c, 0x92fe7u);
    goto L_92ff8;
L_92fe9:
    X86_TICK(c, 22);
    // 092fe9  mov eax, esi
    X86_AT(c, 0x92fe9u);
    c.r[0] = c.r[6];
    // 092feb  push eax
    X86_AT(c, 0x92febu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092fec  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x92fecu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 092fef  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92fefu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092ff2  push eax
    X86_AT(c, 0x92ff2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092ff3  call 0x950b8
    X86_AT(c, 0x92ff3u);
    push32(c, 0x92ff8u); x86_call_known(c, 0x950b8u, f_000950b8); X86_RET(c, 0x92ff8u);
L_92ff8:
    X86_TICK(c, 12);
    // 092ff8  cmp word ptr [0x8aabe], 0
    X86_AT(c, 0x92ff8u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8AABEu))), 0x0u, 0, 2);
    // 093000  jne 0x93015
    X86_AT(c, 0x93000u);
    if (x86_cc(c, 5)) { goto L_93015; }
    X86_TICK(c, 15);
    // 093002  mov ax, word ptr [ebp - 6]
    X86_AT(c, 0x93002u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))));
    // 093006  mov word ptr [0x8aabe], ax
    X86_AT(c, 0x93006u);
    wr16((c.sbase[3] + (uint32_t)(0x8AABEu)), (c.r[0] & 0xFFFFu));
    // 09300c  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x9300cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 093013  jmp 0x9301f
    X86_AT(c, 0x93013u);
    goto L_9301f;
L_93015:
    X86_TICK(c, 8);
    // 093015  movzx eax, word ptr [0x8aabe]
    X86_AT(c, 0x93015u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8AABEu)));
    // 09301c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x9301cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_9301f:
    X86_TICK(c, 7);
    // 09301f  and byte ptr [edi + 0xc], 0xef
    X86_AT(c, 0x9301fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xEFu, 1)); }
L_93023:
    X86_TICK(c, 32);
    // 093023  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x93023u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093026  pop edi
    X86_AT(c, 0x93026u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093027  pop esi
    X86_AT(c, 0x93027u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093028  pop ebx
    X86_AT(c, 0x93028u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093029  leave 
    X86_AT(c, 0x93029u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09302a  ret 
    X86_AT(c, 0x9302au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92f50u, "ran off the end of a function");
}
void f_000930b8(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0930b8  push ebp
    X86_AT(c, 0x930b8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0930b9  mov ebp, esp
    X86_AT(c, 0x930b9u);
    c.r[5] = c.r[4];
    // 0930bb  push ecx
    X86_AT(c, 0x930bbu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0930bc  push ebx
    X86_AT(c, 0x930bcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0930bd  push edi
    X86_AT(c, 0x930bdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0930be  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x930beu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0930c1  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0x930c1u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0930c4  push dword ptr [ebx + 8]
    X86_AT(c, 0x930c4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0930c7  push edi
    X86_AT(c, 0x930c7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0930c8  push 1
    X86_AT(c, 0x930c8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 0930ca  push dword ptr [ebp + 8]
    X86_AT(c, 0x930cau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0930cd  call 0x92b58
    X86_AT(c, 0x930cdu);
    push32(c, 0x930d2u); x86_call_known(c, 0x92b58u, f_00092b58); X86_RET(c, 0x930d2u);
    X86_TICK(c, 9);
    // 0930d2  add esp, 0x10
    X86_AT(c, 0x930d2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 0930d5  cmp edi, eax
    X86_AT(c, 0x930d5u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0930d7  je 0x930e4
    X86_AT(c, 0x930d7u);
    if (x86_cc(c, 4)) { goto L_930e4; }
    X86_TICK(c, 11);
    // 0930d9  mov dword ptr [ebx - 4], 0xffffffff
    X86_AT(c, 0x930d9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 0930e0  mov ebp, ebx
    X86_AT(c, 0x930e0u);
    c.r[5] = c.r[3];
    // 0930e2  jmp 0x9311d
    X86_AT(c, 0x930e2u);
    goto L_9311d;
L_930e4:
    X86_TICK(c, 24);
    // 0930e4  pop edi
    X86_AT(c, 0x930e4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0930e5  pop ebx
    X86_AT(c, 0x930e5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0930e6  leave 
    X86_AT(c, 0x930e6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0930e7  ret 8
    X86_AT(c, 0x930e7u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_9311d:
    X86_TICK(c, 34);
    // 09311d  lea esp, [ebp - 0x10]
    X86_AT(c, 0x9311du);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 093120  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x93120u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093123  pop edi
    X86_AT(c, 0x93123u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093124  pop esi
    X86_AT(c, 0x93124u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093125  pop ebx
    X86_AT(c, 0x93125u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093126  leave 
    X86_AT(c, 0x93126u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093127  ret 
    X86_AT(c, 0x93127u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x930b8u, "ran off the end of a function");
}
void f_000930f4(X86Cpu& c) {
    X86_TICK(c, 33);
    // 0930f4  enter 4, 0
    X86_AT(c, 0x930f4u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0930f8  push ebx
    X86_AT(c, 0x930f8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0930f9  push esi
    X86_AT(c, 0x930f9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0930fa  push edi
    X86_AT(c, 0x930fau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0930fb  mov dword ptr [0x8a760], 0x930b8
    X86_AT(c, 0x930fbu);
    wr32((c.sbase[3] + (uint32_t)(0x8A760u)), 0x930B8u);
    // 093105  mov dword ptr [0x8a764], ebp
    X86_AT(c, 0x93105u);
    wr32((c.sbase[3] + (uint32_t)(0x8A764u)), c.r[5]);
    // 09310b  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x9310bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 09310e  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x9310eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 093111  call 0x94360
    X86_AT(c, 0x93111u);
    push32(c, 0x93116u); x86_call_known(c, 0x94360u, f_00094360); X86_RET(c, 0x93116u);
    X86_TICK(c, 11);
    // 093116  mov eax, dword ptr [0x8a75c]
    X86_AT(c, 0x93116u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A75Cu)));
    // 09311b  jmp 0x93123
    X86_AT(c, 0x9311bu);
    goto L_93123;
L_93123:
    X86_TICK(c, 28);
    // 093123  pop edi
    X86_AT(c, 0x93123u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093124  pop esi
    X86_AT(c, 0x93124u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093125  pop ebx
    X86_AT(c, 0x93125u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093126  leave 
    X86_AT(c, 0x93126u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093127  ret 
    X86_AT(c, 0x93127u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x930f4u, "ran off the end of a function");
}
void f_00093150(X86Cpu& c) {
    X86_TICK(c, 25);
    // 093150  push ebp
    X86_AT(c, 0x93150u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093151  mov ebp, esp
    X86_AT(c, 0x93151u);
    c.r[5] = c.r[4];
    // 093153  lea eax, [ebp + 0xc]
    X86_AT(c, 0x93153u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 093156  push eax
    X86_AT(c, 0x93156u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 093157  push dword ptr [ebp + 8]
    X86_AT(c, 0x93157u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 09315a  push dword ptr [0x8a738]
    X86_AT(c, 0x9315au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A738u))); push32(c, v); }
    // 093160  call 0x930f4
    X86_AT(c, 0x93160u);
    push32(c, 0x93165u); x86_call_known(c, 0x930f4u, f_000930f4); X86_RET(c, 0x93165u);
    X86_TICK(c, 18);
    // 093165  add esp, 0xc
    X86_AT(c, 0x93165u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 093168  leave 
    X86_AT(c, 0x93168u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093169  ret 
    X86_AT(c, 0x93169u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x93150u, "ran off the end of a function");
}
void f_0009319c(X86Cpu& c) {
    X86_TICK(c, 16);
    // 09319c  push ebp
    X86_AT(c, 0x9319cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09319d  mov ebp, esp
    X86_AT(c, 0x9319du);
    c.r[5] = c.r[4];
    // 09319f  push dword ptr [ebp + 8]
    X86_AT(c, 0x9319fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0931a2  call 0x94eaa
    X86_AT(c, 0x931a2u);
    push32(c, 0x931a7u); x86_call_known(c, 0x94eaau, f_00094eaa); X86_RET(c, 0x931a7u);
    X86_TICK(c, 16);
    // 0931a7  leave 
    X86_AT(c, 0x931a7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0931a8  ret 
    X86_AT(c, 0x931a8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9319cu, "ran off the end of a function");
}
void f_000931b0(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0931b0  push ebp
    X86_AT(c, 0x931b0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0931b1  mov ebp, esp
    X86_AT(c, 0x931b1u);
    c.r[5] = c.r[4];
    // 0931b3  push dword ptr [ebp + 8]
    X86_AT(c, 0x931b3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0931b6  call 0x94e70
    X86_AT(c, 0x931b6u);
    push32(c, 0x931bbu); x86_call_known(c, 0x94e70u, f_00094e70); X86_RET(c, 0x931bbu);
    X86_TICK(c, 16);
    // 0931bb  leave 
    X86_AT(c, 0x931bbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0931bc  ret 
    X86_AT(c, 0x931bcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x931b0u, "ran off the end of a function");
}
void f_0009321c(X86Cpu& c) {
    X86_TICK(c, 46);
    // 09321c  enter 0x70, 0
    X86_AT(c, 0x9321cu);
    x86_enter(c, 0x70u, 0x0u, 4);
    // 093220  push esi
    X86_AT(c, 0x93220u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093221  push edi
    X86_AT(c, 0x93221u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093222  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x93222u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093225  mov eax, dword ptr [0x8a82c]
    X86_AT(c, 0x93225u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A82Cu)));
    // 09322a  mov dx, word ptr [0x8a830]
    X86_AT(c, 0x9322au);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0x8A830u))));
    // 093231  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x93231u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 093234  mov word ptr [ebp - 8], dx
    X86_AT(c, 0x93234u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 093238  mov edx, 0x7fffffff
    X86_AT(c, 0x93238u);
    c.r[2] = 0x7FFFFFFFu;
    // 09323d  sub eax, eax
    X86_AT(c, 0x9323du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 09323f  push edi
    X86_AT(c, 0x9323fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093240  mov ecx, edx
    X86_AT(c, 0x93240u);
    c.r[1] = c.r[2];
    // 093242  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x93242u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 093244  jne 0x93249
    X86_AT(c, 0x93244u);
    if (x86_cc(c, 5)) { goto L_93249; }
    X86_TICK(c, 4);
    // 093246  inc ecx
    X86_AT(c, 0x93246u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 093247  sub edx, ecx
    X86_AT(c, 0x93247u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_93249:
    X86_TICK(c, 13);
    // 093249  pop edi
    X86_AT(c, 0x93249u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09324a  mov ax, 0x64
    X86_AT(c, 0x9324au);
    s16(c, 0, 0x64u);
    // 09324e  cmp ax, dx
    X86_AT(c, 0x9324eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 093251  jb 0x93254
    X86_AT(c, 0x93251u);
    if (x86_cc(c, 2)) { goto L_93254; }
    X86_TICK(c, 3);
    // 093253  xchg edx, eax
    X86_AT(c, 0x93253u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_93254:
    X86_TICK(c, 10);
    // 093254  movzx esi, ax
    X86_AT(c, 0x93254u);
    c.r[6] = (c.r[0] & 0xFFFFu);
    // 093257  jmp 0x932fb
    X86_AT(c, 0x93257u);
    goto L_932fb;
L_9325c:
    X86_TICK(c, 64);
    // 09325c  mov ecx, esi
    X86_AT(c, 0x9325cu);
    c.r[1] = c.r[6];
    // 09325e  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x9325eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 093261  push ds
    X86_AT(c, 0x93261u);
    push32(c, c.sreg[3]);
    // 093262  push es
    X86_AT(c, 0x93262u);
    push32(c, c.sreg[0]);
    // 093263  lea edx, [ebp - 0x70]
    X86_AT(c, 0x93263u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFF90u);
    // 093266  push ds
    X86_AT(c, 0x93266u);
    push32(c, c.sreg[3]);
    // 093267  pop es
    X86_AT(c, 0x93267u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 093268  pop ds
    X86_AT(c, 0x93268u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 093269  push esi
    X86_AT(c, 0x93269u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09326a  push edi
    X86_AT(c, 0x9326au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09326b  mov esi, eax
    X86_AT(c, 0x9326bu);
    c.r[6] = c.r[0];
    // 09326d  mov edi, edx
    X86_AT(c, 0x9326du);
    c.r[7] = c.r[2];
    // 09326f  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x9326fu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 093271  pop edi
    X86_AT(c, 0x93271u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093272  pop esi
    X86_AT(c, 0x93272u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093273  pop ds
    X86_AT(c, 0x93273u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 093274  push esi
    X86_AT(c, 0x93274u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093275  push edi
    X86_AT(c, 0x93275u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093276  push edx
    X86_AT(c, 0x93276u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 093277  call 0x95104
    X86_AT(c, 0x93277u);
    push32(c, 0x9327cu); x86_call_known(c, 0x95104u, f_00095104); X86_RET(c, 0x9327cu);
    X86_TICK(c, 7);
    // 09327c  and ax, ax
    X86_AT(c, 0x9327cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 09327f  jne 0x932d1
    X86_AT(c, 0x9327fu);
    if (x86_cc(c, 5)) { goto L_932d1; }
    X86_TICK(c, 24);
    // 093281  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x93281u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 093284  cmp byte ptr es:[eax + esi*1], 0x3d
    X86_AT(c, 0x93284u);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[0] + c.r[6]))), 0x3Du, 0, 1);
    // 093289  push ds
    X86_AT(c, 0x93289u);
    push32(c, c.sreg[3]);
    // 09328a  pop es
    X86_AT(c, 0x9328au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 09328b  jne 0x932d1
    X86_AT(c, 0x9328bu);
    if (x86_cc(c, 5)) { goto L_932d1; }
    X86_TICK(c, 37);
    // 09328d  lea eax, [esi + 1]
    X86_AT(c, 0x9328du);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 093290  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x93290u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 093293  mov edx, 0x7fffffff
    X86_AT(c, 0x93293u);
    c.r[2] = 0x7FFFFFFFu;
    // 093298  sub eax, eax
    X86_AT(c, 0x93298u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 09329a  les ecx, fword ptr [ebp - 0xc]
    X86_AT(c, 0x9329au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[1] = o; }
    // 09329d  push edi
    X86_AT(c, 0x9329du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09329e  mov edi, ecx
    X86_AT(c, 0x9329eu);
    c.r[7] = c.r[1];
    // 0932a0  mov ecx, edx
    X86_AT(c, 0x932a0u);
    c.r[1] = c.r[2];
    // 0932a2  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x932a2u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0932a4  jne 0x932a9
    X86_AT(c, 0x932a4u);
    if (x86_cc(c, 5)) { goto L_932a9; }
    X86_TICK(c, 4);
    // 0932a6  inc ecx
    X86_AT(c, 0x932a6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0932a7  sub edx, ecx
    X86_AT(c, 0x932a7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_932a9:
    X86_TICK(c, 15);
    // 0932a9  pop edi
    X86_AT(c, 0x932a9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0932aa  inc edx
    X86_AT(c, 0x932aau);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 0932ab  mov eax, 0x80
    X86_AT(c, 0x932abu);
    c.r[0] = 0x80u;
    // 0932b0  cmp eax, edx
    X86_AT(c, 0x932b0u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 0932b2  jb 0x932b5
    X86_AT(c, 0x932b2u);
    if (x86_cc(c, 2)) { goto L_932b5; }
    X86_TICK(c, 3);
    // 0932b4  xchg edx, eax
    X86_AT(c, 0x932b4u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_932b5:
    X86_TICK(c, 62);
    // 0932b5  xchg ecx, eax
    X86_AT(c, 0x932b5u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 0932b6  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x932b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 0932b9  push ds
    X86_AT(c, 0x932b9u);
    push32(c, c.sreg[3]);
    // 0932ba  push es
    X86_AT(c, 0x932bau);
    push32(c, c.sreg[0]);
    // 0932bb  mov edx, 0x8a780
    X86_AT(c, 0x932bbu);
    c.r[2] = 0x8A780u;
    // 0932c0  push ds
    X86_AT(c, 0x932c0u);
    push32(c, c.sreg[3]);
    // 0932c1  pop es
    X86_AT(c, 0x932c1u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0932c2  pop ds
    X86_AT(c, 0x932c2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0932c3  push esi
    X86_AT(c, 0x932c3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0932c4  push edi
    X86_AT(c, 0x932c4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0932c5  mov esi, eax
    X86_AT(c, 0x932c5u);
    c.r[6] = c.r[0];
    // 0932c7  mov edi, edx
    X86_AT(c, 0x932c7u);
    c.r[7] = c.r[2];
    // 0932c9  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x932c9u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0932cb  pop edi
    X86_AT(c, 0x932cbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0932cc  pop esi
    X86_AT(c, 0x932ccu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0932cd  pop ds
    X86_AT(c, 0x932cdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0932ce  xchg edx, eax
    X86_AT(c, 0x932ceu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0932cf  jmp 0x9330f
    X86_AT(c, 0x932cfu);
    goto L_9330f;
L_932d1:
    X86_TICK(c, 28);
    // 0932d1  mov edx, 0x7fffffff
    X86_AT(c, 0x932d1u);
    c.r[2] = 0x7FFFFFFFu;
    // 0932d6  sub eax, eax
    X86_AT(c, 0x932d6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0932d8  les ecx, fword ptr [ebp - 0xc]
    X86_AT(c, 0x932d8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[1] = o; }
    // 0932db  push edi
    X86_AT(c, 0x932dbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0932dc  mov edi, ecx
    X86_AT(c, 0x932dcu);
    c.r[7] = c.r[1];
    // 0932de  mov ecx, edx
    X86_AT(c, 0x932deu);
    c.r[1] = c.r[2];
    // 0932e0  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x932e0u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0932e2  jne 0x932e7
    X86_AT(c, 0x932e2u);
    if (x86_cc(c, 5)) { goto L_932e7; }
    X86_TICK(c, 4);
    // 0932e4  inc ecx
    X86_AT(c, 0x932e4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0932e5  sub edx, ecx
    X86_AT(c, 0x932e5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_932e7:
    X86_TICK(c, 24);
    // 0932e7  pop edi
    X86_AT(c, 0x932e7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0932e8  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x932e8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 0932eb  lea eax, es:[eax + edx*1 + 1]
    X86_AT(c, 0x932ebu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x1u);
    // 0932f0  mov edx, es
    X86_AT(c, 0x932f0u);
    c.r[2] = (uint32_t)c.sreg[0];
    // 0932f2  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x932f2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 0932f5  mov word ptr [ebp - 8], dx
    X86_AT(c, 0x932f5u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 0932f9  push ds
    X86_AT(c, 0x932f9u);
    push32(c, c.sreg[3]);
    // 0932fa  pop es
    X86_AT(c, 0x932fau);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
L_932fb:
    X86_TICK(c, 24);
    // 0932fb  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x932fbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 0932fe  cmp byte ptr es:[eax], 0
    X86_AT(c, 0x932feu);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 093302  push ds
    X86_AT(c, 0x93302u);
    push32(c, c.sreg[3]);
    // 093303  pop es
    X86_AT(c, 0x93303u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 093304  jne 0x9325c
    X86_AT(c, 0x93304u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x9325cu); goto L_9325c; }
    X86_TICK(c, 4);
    // 09330a  sub eax, eax
    X86_AT(c, 0x9330au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 09330c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x9330cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_9330f:
    X86_TICK(c, 24);
    // 09330f  pop edi
    X86_AT(c, 0x9330fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093310  pop esi
    X86_AT(c, 0x93310u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093311  leave 
    X86_AT(c, 0x93311u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093312  ret 
    X86_AT(c, 0x93312u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9321cu, "ran off the end of a function");
}
void f_00093314(X86Cpu& c) {
    X86_TICK(c, 72);
    // 093314  mov edx, esi
    X86_AT(c, 0x93314u);
    c.r[2] = c.r[6];
    // 093316  push edi
    X86_AT(c, 0x93316u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093317  sub eax, eax
    X86_AT(c, 0x93317u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 093319  mov ecx, 0xffffffff
    X86_AT(c, 0x93319u);
    c.r[1] = 0xFFFFFFFFu;
    // 09331e  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x9331eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 093322  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x93322u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 093324  not ecx
    X86_AT(c, 0x93324u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 093326  mov esi, dword ptr [esp + 0xc]
    X86_AT(c, 0x93326u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 09332a  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x9332au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 09332e  mov eax, ecx
    X86_AT(c, 0x9332eu);
    c.r[0] = c.r[1];
    // 093330  shr ecx, 2
    X86_AT(c, 0x93330u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 093333  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x93333u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 093335  mov ecx, eax
    X86_AT(c, 0x93335u);
    c.r[1] = c.r[0];
    // 093337  and ecx, 3
    X86_AT(c, 0x93337u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 09333d  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x9333du);
    x86_string(c, 0, 1, 243, 4, 3);
    // 09333f  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0x9333fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 093343  mov esi, edx
    X86_AT(c, 0x93343u);
    c.r[6] = c.r[2];
    // 093345  pop edi
    X86_AT(c, 0x93345u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093346  ret 
    X86_AT(c, 0x93346u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x93314u, "ran off the end of a function");
}
void f_00093358(X86Cpu& c) {
    X86_TICK(c, 16);
    // 093358  push ebp
    X86_AT(c, 0x93358u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093359  mov ebp, esp
    X86_AT(c, 0x93359u);
    c.r[5] = c.r[4];
    // 09335b  push dword ptr [ebp + 8]
    X86_AT(c, 0x9335bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 09335e  call 0x94fac
    X86_AT(c, 0x9335eu);
    push32(c, 0x93363u); x86_call_known(c, 0x94facu, f_00094fac); X86_RET(c, 0x93363u);
    X86_TICK(c, 16);
    // 093363  leave 
    X86_AT(c, 0x93363u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093364  ret 4
    X86_AT(c, 0x93364u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x93358u, "ran off the end of a function");
}
void f_00093394(X86Cpu& c) {
    X86_TICK(c, 7);
    // 093394  jmp 0x933ec
    X86_AT(c, 0x93394u);
    goto L_933ec;
L_93396:
    X86_TICK(c, 7);
    // 093396  call 0x8f410
    X86_AT(c, 0x93396u);
    push32(c, 0x9339bu); x86_call_known(c, 0x8f410u, f_0008f410); X86_RET(c, 0x9339bu);
L_9339b:
    X86_TICK(c, 9);
    // 09339b  push eax
    X86_AT(c, 0x9339bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09339c  call 0x94fac
    X86_AT(c, 0x9339cu);
    push32(c, 0x933a1u); x86_call_known(c, 0x94facu, f_00094fac); X86_RET(c, 0x933a1u);
    X86_TICK(c, 39);
    // 0933a1  xor eax, eax
    X86_AT(c, 0x933a1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0933a3  int 0x21
    X86_AT(c, 0x933a3u);
    x86_int(c, 0x21, 0x933a5u);
    X86_TICK(c, 10);
    // 0933a5  ret 
    X86_AT(c, 0x933a5u);
    c.eip = pop32(c); return;
L_933ec:
    X86_TICK(c, 7);
    // 0933ec  cmp al, 0xcd
    X86_AT(c, 0x933ecu);
    (void)x86_sub(c, g8(c, 0), 0xCDu, 0, 1);
    // 0933ee  jne 0x9340b
    X86_AT(c, 0x933eeu);
    if (x86_cc(c, 5)) { goto L_9340b; }
    X86_TICK(c, 7);
    // 0933f0  cmp ah, 0xab
    X86_AT(c, 0x933f0u);
    (void)x86_sub(c, g8(c, 4), 0xABu, 0, 1);
    // 0933f3  jne 0x9340b
    X86_AT(c, 0x933f3u);
    if (x86_cc(c, 5)) { goto L_9340b; }
    X86_TICK(c, 7);
    // 0933f5  cmp eax, 0xabcdabcd
    X86_AT(c, 0x933f5u);
    (void)x86_sub(c, c.r[0], 0xABCDABCDu, 0, 4);
    // 0933fa  jne 0x9340b
    X86_AT(c, 0x933fau);
    if (x86_cc(c, 5)) { goto L_9340b; }
    X86_TICK(c, 11);
    // 0933fc  mov byte ptr [0x8a842], 1
    X86_AT(c, 0x933fcu);
    wr8((c.sbase[3] + (uint32_t)(0x8A842u)), 0x1u);
    // 093403  mov dword ptr [0x8a818], edx
    X86_AT(c, 0x93403u);
    wr32((c.sbase[3] + (uint32_t)(0x8A818u)), c.r[2]);
    // 093409  jmp 0x93412
    X86_AT(c, 0x93409u);
    goto L_93412;
L_9340b:
    X86_TICK(c, 2);
    // 09340b  mov byte ptr [0x8a842], 2
    X86_AT(c, 0x9340bu);
    wr8((c.sbase[3] + (uint32_t)(0x8A842u)), 0x2u);
L_93412:
    X86_TICK(c, 34);
    // 093412  sub ebp, ebp
    X86_AT(c, 0x93412u);
    { uint32_t v = c.r[5]; c.r[5] = x86_sub(c, v, c.r[5], 0, 4); }
    // 093414  and esp, 0xfffffffc
    X86_AT(c, 0x93414u);
    { uint32_t v = c.r[4]; c.r[4] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 093417  mov dword ptr [0x354e4], 0x200
    X86_AT(c, 0x93417u);
    wr32((c.sbase[3] + (uint32_t)(0x354E4u)), 0x200u);
    // 093421  mov dword ptr [0x354e8], 0x100
    X86_AT(c, 0x93421u);
    wr32((c.sbase[3] + (uint32_t)(0x354E8u)), 0x100u);
    // 09342b  add dword ptr [0x354e4], 0x97124
    X86_AT(c, 0x9342bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x354E4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x97124u, 0, 4)); }
    // 093435  add dword ptr [0x354e8], 0x97124
    X86_AT(c, 0x93435u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x354E8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x97124u, 0, 4)); }
    // 09343f  cmp byte ptr [0x8a842], 1
    X86_AT(c, 0x9343fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A842u))), 0x1u, 0, 1);
    // 093446  je 0x93468
    X86_AT(c, 0x93446u);
    if (x86_cc(c, 4)) { goto L_93468; }
    X86_TICK(c, 23);
    // 093448  mov dword ptr [0x8a810], 0
    X86_AT(c, 0x93448u);
    wr32((c.sbase[3] + (uint32_t)(0x8A810u)), 0x0u);
    // 093452  lea eax, [esp + 0x20]
    X86_AT(c, 0x93452u);
    c.r[0] = (uint32_t)(c.r[4] + 0x20u);
    // 093456  mov dword ptr [0x8a80c], esp
    X86_AT(c, 0x93456u);
    wr32((c.sbase[3] + (uint32_t)(0x8A80Cu)), c.r[4]);
    // 09345c  mov eax, ds
    X86_AT(c, 0x9345cu);
    c.r[0] = (uint32_t)c.sreg[3];
    // 09345e  lsl eax, eax
    X86_AT(c, 0x9345eu);
    { uint32_t v; if (x86_lsl(c, (c.r[0] & 0xFFFFu), v)) { c.r[0] = v; c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 093461  mov dword ptr [0x8a814], eax
    X86_AT(c, 0x93461u);
    wr32((c.sbase[3] + (uint32_t)(0x8A814u)), c.r[0]);
    // 093466  jmp 0x934a8
    X86_AT(c, 0x93466u);
    goto L_934a8;
L_93468:
    X86_TICK(c, 84);
    // 093468  mov eax, esp
    X86_AT(c, 0x93468u);
    c.r[0] = c.r[4];
    // 09346a  mov ecx, dword ptr [edx + 0x74]
    X86_AT(c, 0x9346au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x74u)));
    // 09346d  shl ecx, 0xa
    X86_AT(c, 0x9346du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[1] = r; }
    // 093470  sub eax, ecx
    X86_AT(c, 0x93470u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 093472  mov dword ptr [0x8a810], eax
    X86_AT(c, 0x93472u);
    wr32((c.sbase[3] + (uint32_t)(0x8A810u)), c.r[0]);
    // 093477  mov eax, dword ptr [edx + 0x50]
    X86_AT(c, 0x93477u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x50u)));
    // 09347a  mov dword ptr [0x8a80c], eax
    X86_AT(c, 0x9347au);
    wr32((c.sbase[3] + (uint32_t)(0x8A80Cu)), c.r[0]);
    // 09347f  mov ecx, dword ptr [edx + 0x3c]
    X86_AT(c, 0x9347fu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x3Cu)));
    // 093482  shl ecx, 0xa
    X86_AT(c, 0x93482u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[1] = r; }
    // 093485  add eax, ecx
    X86_AT(c, 0x93485u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 093487  mov dword ptr [0x8a814], eax
    X86_AT(c, 0x93487u);
    wr32((c.sbase[3] + (uint32_t)(0x8A814u)), c.r[0]);
    // 09348c  mov ebx, dword ptr [edx + 0x54]
    X86_AT(c, 0x9348cu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x54u)));
    // 09348f  sub ebx, dword ptr [edx + 0x10]
    X86_AT(c, 0x9348fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u))), 0, 4); }
    // 093492  shr ebx, 4
    X86_AT(c, 0x93492u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 093495  inc ebx
    X86_AT(c, 0x93495u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 093496  mov ah, 0x4a
    X86_AT(c, 0x93496u);
    s8(c, 4, 0x4Au);
    // 093498  int 0x21
    X86_AT(c, 0x93498u);
    x86_int(c, 0x21, 0x9349au);
    X86_TICK(c, 12);
    // 09349a  test byte ptr [edx + 0xb7], 1
    X86_AT(c, 0x9349au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB7u))) & 0x1u, 1);
    // 0934a1  setne byte ptr [0x8a839]
    X86_AT(c, 0x934a1u);
    wr8((c.sbase[3] + (uint32_t)(0x8A839u)), x86_cc(c, 5) ? 1u : 0u);
L_934a8:
    X86_TICK(c, 11);
    // 0934a8  esc 0x1c, bl
    X86_AT(c, 0x934a8u);
    // 0934aa  xor eax, eax
    X86_AT(c, 0x934aau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0934ac  mov word ptr [0x8a835], ax
    X86_AT(c, 0x934acu);
    wr16((c.sbase[3] + (uint32_t)(0x8A835u)), (c.r[0] & 0xFFFFu));
    // 0934b2  sub ecx, ecx
    X86_AT(c, 0x934b2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0934b4  mov cl, 0xf
    X86_AT(c, 0x934b4u);
    s8(c, 1, 0xFu);
L_934b6:
    X86_TICK(c, 11);
    // 0934b6  loop 0x934b6
    X86_AT(c, 0x934b6u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x934b6u); goto L_934b6; }
    X86_TICK(c, 5);
    // 0934b8  esc 0xf, byte ptr [0x8a835]
    X86_AT(c, 0x934b8u);
    // 0934be  mov cl, 0xf
    X86_AT(c, 0x934beu);
    s8(c, 1, 0xFu);
L_934c0:
    X86_TICK(c, 11);
    // 0934c0  loop 0x934c0
    X86_AT(c, 0x934c0u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x934c0u); goto L_934c0; }
    X86_TICK(c, 19);
    // 0934c2  and word ptr [0x8a835], 0xf3f
    X86_AT(c, 0x934c2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A835u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xF3Fu, 2)); }
    // 0934cb  cmp word ptr [0x8a835], 0x33f
    X86_AT(c, 0x934cbu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A835u))), 0x33Fu, 0, 2);
    // 0934d4  jne 0x93514
    X86_AT(c, 0x934d4u);
    if (x86_cc(c, 5)) { goto L_93514; }
    X86_TICK(c, 5);
    // 0934d6  esc 0x2f, byte ptr [0x8a835]
    X86_AT(c, 0x934d6u);
    // 0934dc  mov cl, 0xf
    X86_AT(c, 0x934dcu);
    s8(c, 1, 0xFu);
L_934de:
    X86_TICK(c, 11);
    // 0934de  loop 0x934de
    X86_AT(c, 0x934deu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x934deu); goto L_934de; }
    X86_TICK(c, 12);
    // 0934e0  test word ptr [0x8a835], 0xb8bf
    X86_AT(c, 0x934e0u);
    (void)x86_logic(c, rd16((c.sbase[3] + (uint32_t)(0x8A835u))) & 0xB8BFu, 2);
    // 0934e9  jne 0x93514
    X86_AT(c, 0x934e9u);
    if (x86_cc(c, 5)) { goto L_93514; }
    X86_TICK(c, 51);
    // 0934eb  wait 
    X86_AT(c, 0x934ebu);
    // 0934ec  esc 0xd, byte ptr cs:[0x93788]
    X86_AT(c, 0x934ecu);
    // 0934f3  mov byte ptr [0x8a833], 1
    X86_AT(c, 0x934f3u);
    wr8((c.sbase[3] + (uint32_t)(0x8A833u)), 0x1u);
    // 0934fa  esc 0xd, al
    X86_AT(c, 0x934fau);
    // 0934fc  esc 0xd, dh
    X86_AT(c, 0x934fcu);
    // 0934fe  esc 0x37, cl
    X86_AT(c, 0x934feu);
    // 093500  esc 8, al
    X86_AT(c, 0x93500u);
    // 093502  esc 0xc, al
    X86_AT(c, 0x93502u);
    // 093504  esc 0x33, cl
    X86_AT(c, 0x93504u);
    // 093506  wait 
    X86_AT(c, 0x93506u);
    // 093507  esc 0x3c, al
    X86_AT(c, 0x93507u);
    // 093509  wait 
    X86_AT(c, 0x93509u);
    // 09350a  sahf 
    X86_AT(c, 0x9350au);
    c.fl = (c.fl & ~0xD5u) | (g8(c, 4) & 0xD5u);
    // 09350b  je 0x93514
    X86_AT(c, 0x9350bu);
    if (x86_cc(c, 4)) { goto L_93514; }
    X86_TICK(c, 2);
    // 09350d  mov byte ptr [0x8a837], 1
    X86_AT(c, 0x9350du);
    wr8((c.sbase[3] + (uint32_t)(0x8A837u)), 0x1u);
L_93514:
    X86_TICK(c, 28);
    // 093514  push 0x3ff0000
    X86_AT(c, 0x93514u);
    { uint32_t v = 0x3FF0000u; push32(c, v); }
    // 093519  push 0x30000000
    X86_AT(c, 0x93519u);
    { uint32_t v = 0x30000000u; push32(c, v); }
    // 09351e  push 0xa0000000
    X86_AT(c, 0x9351eu);
    { uint32_t v = 0xA0000000u; push32(c, v); }
    // 093523  push 0x64000000
    X86_AT(c, 0x93523u);
    { uint32_t v = 0x64000000u; push32(c, v); }
    // 093528  push 0x16000000
    X86_AT(c, 0x93528u);
    { uint32_t v = 0x16000000u; push32(c, v); }
    // 09352d  push 0x98000000
    X86_AT(c, 0x9352du);
    { uint32_t v = 0x98000000u; push32(c, v); }
    // 093532  push 0x56000000
    X86_AT(c, 0x93532u);
    { uint32_t v = 0x56000000u; push32(c, v); }
    // 093537  push 0xb8000000
    X86_AT(c, 0x93537u);
    { uint32_t v = 0xB8000000u; push32(c, v); }
    // 09353c  cmp byte ptr [0x8a842], 1
    X86_AT(c, 0x9353cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A842u))), 0x1u, 0, 1);
    // 093543  je 0x9359c
    X86_AT(c, 0x93543u);
    if (x86_cc(c, 4)) { goto L_9359c; }
    X86_TICK(c, 11);
    // 093545  mov eax, fs
    X86_AT(c, 0x93545u);
    c.r[0] = (uint32_t)c.sreg[4];
    // 093547  mov ebx, ds
    X86_AT(c, 0x93547u);
    c.r[3] = (uint32_t)c.sreg[3];
    // 093549  cmp ax, bx
    X86_AT(c, 0x93549u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 09354c  je 0x935ed
    X86_AT(c, 0x9354cu);
    if (x86_cc(c, 4)) { goto L_935ed; }
    X86_TICK(c, 18);
    // 093552  mov word ptr [0x8a839], 1
    X86_AT(c, 0x93552u);
    wr16((c.sbase[3] + (uint32_t)(0x8A839u)), 0x1u);
    // 09355b  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x9355bu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 093561  mov eax, dword ptr fs:[0xc400]
    X86_AT(c, 0x93561u);
    c.r[0] = rd32((c.sbase[4] + ((0xC400u) & 0xFFFFu)));
    // 093566  and ah, 0x80
    X86_AT(c, 0x93566u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x80u, 1)); }
    // 093569  jne 0x93575
    X86_AT(c, 0x93569u);
    if (x86_cc(c, 5)) { goto L_93575; }
    X86_TICK(c, 20);
    // 09356b  pop eax
    X86_AT(c, 0x9356bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 09356c  pop eax
    X86_AT(c, 0x9356cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 09356d  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x9356du);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 093573  jmp 0x93582
    X86_AT(c, 0x93573u);
    goto L_93582;
L_93575:
    X86_TICK(c, 14);
    // 093575  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x93575u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 09357b  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x9357bu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 093581  pop eax
    X86_AT(c, 0x93581u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_93582:
    X86_TICK(c, 27);
    // 093582  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x93582u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 093588  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x93588u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 09358e  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x9358eu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 093594  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x93594u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 09359a  jmp 0x935f0
    X86_AT(c, 0x9359au);
    goto L_935f0;
L_9359c:
    X86_TICK(c, 12);
    // 09359c  cmp byte ptr [0x8a839], 1
    X86_AT(c, 0x9359cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A839u))), 0x1u, 0, 1);
    // 0935a3  jne 0x935ed
    X86_AT(c, 0x935a3u);
    if (x86_cc(c, 5)) { goto L_935ed; }
    X86_TICK(c, 17);
    // 0935a5  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x935a5u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0935ab  pop dword ptr [0xffc0c400]
    X86_AT(c, 0x935abu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C400u)), v); }
    // 0935b1  and ah, 0x80
    X86_AT(c, 0x935b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x80u, 1)); }
    // 0935b4  jne 0x935c0
    X86_AT(c, 0x935b4u);
    if (x86_cc(c, 5)) { goto L_935c0; }
    X86_TICK(c, 20);
    // 0935b6  pop eax
    X86_AT(c, 0x935b6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0935b7  pop eax
    X86_AT(c, 0x935b7u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0935b8  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x935b8u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0935be  jmp 0x935cd
    X86_AT(c, 0x935beu);
    goto L_935cd;
L_935c0:
    X86_TICK(c, 14);
    // 0935c0  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x935c0u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0935c6  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x935c6u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0935cc  pop eax
    X86_AT(c, 0x935ccu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_935cd:
    X86_TICK(c, 32);
    // 0935cd  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x935cdu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0935d3  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x935d3u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0935d9  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x935d9u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0935df  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x935dfu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0935e5  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x935e5u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0935eb  jmp 0x935f0
    X86_AT(c, 0x935ebu);
    goto L_935f0;
L_935ed:
    X86_TICK(c, 2);
    // 0935ed  add esp, 0x20
    X86_AT(c, 0x935edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_935f0:
    X86_TICK(c, 14);
    // 0935f0  cld 
    X86_AT(c, 0x935f0u);
    c.fl &= ~X86_DF;
    // 0935f1  cmp byte ptr [0x8a842], 2
    X86_AT(c, 0x935f1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A842u))), 0x2u, 0, 1);
    // 0935f8  je 0x9363a
    X86_AT(c, 0x935f8u);
    if (x86_cc(c, 4)) { goto L_9363a; }
    X86_TICK(c, 42);
    // 0935fa  mov edi, dword ptr [edx + 0x10]
    X86_AT(c, 0x935fau);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)));
    // 0935fd  mov word ptr [0x8a820], ds
    X86_AT(c, 0x935fdu);
    wr16((c.sbase[3] + (uint32_t)(0x8A820u)), (uint32_t)c.sreg[3]);
    // 093603  mov dword ptr [0x8a806], edi
    X86_AT(c, 0x93603u);
    wr32((c.sbase[3] + (uint32_t)(0x8A806u)), c.r[7]);
    // 093609  mov word ptr [0x8a80a], ds
    X86_AT(c, 0x93609u);
    wr16((c.sbase[3] + (uint32_t)(0x8A80Au)), (uint32_t)c.sreg[3]);
    // 09360f  lea eax, [edi + 0x80]
    X86_AT(c, 0x9360fu);
    c.r[0] = (uint32_t)(c.r[7] + 0x80u);
    // 093615  xor ebx, ebx
    X86_AT(c, 0x93615u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 093617  mov bl, byte ptr [eax]
    X86_AT(c, 0x93617u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093619  mov dword ptr [0x8a828], ebx
    X86_AT(c, 0x93619u);
    wr32((c.sbase[3] + (uint32_t)(0x8A828u)), c.r[3]);
    // 09361f  inc eax
    X86_AT(c, 0x9361fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 093620  mov dword ptr [0x8a81c], eax
    X86_AT(c, 0x93620u);
    wr32((c.sbase[3] + (uint32_t)(0x8A81Cu)), c.r[0]);
    // 093625  mov bx, word ptr [edi + 0x2c]
    X86_AT(c, 0x93625u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu))));
    // 093629  shl ebx, 4
    X86_AT(c, 0x93629u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 09362c  mov dword ptr [0x8a82c], ebx
    X86_AT(c, 0x9362cu);
    wr32((c.sbase[3] + (uint32_t)(0x8A82Cu)), c.r[3]);
    // 093632  mov word ptr [0x8a830], ds
    X86_AT(c, 0x93632u);
    wr16((c.sbase[3] + (uint32_t)(0x8A830u)), (uint32_t)c.sreg[3]);
    // 093638  jmp 0x9368c
    X86_AT(c, 0x93638u);
    goto L_9368c;
L_9363a:
    X86_TICK(c, 81);
    // 09363a  mov ax, 0x24
    X86_AT(c, 0x9363au);
    s16(c, 0, 0x24u);
    // 09363e  mov ebx, cs
    X86_AT(c, 0x9363eu);
    c.r[3] = (uint32_t)c.sreg[1];
    // 093640  arpl ax, bx
    X86_AT(c, 0x93640u);
    { uint32_t d = (c.r[0] & 0xFFFFu), s = (c.r[3] & 0xFFFFu); if ((d & 3) < (s & 3)) { s16(c, 0, (d & ~3u) | (s & 3)); c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 093642  mov es, eax
    X86_AT(c, 0x93642u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 093644  mov word ptr [0x8a80a], ax
    X86_AT(c, 0x93644u);
    wr16((c.sbase[3] + (uint32_t)(0x8A80Au)), (c.r[0] & 0xFFFFu));
    // 09364a  mov word ptr [0x8a80a], ax
    X86_AT(c, 0x9364au);
    wr16((c.sbase[3] + (uint32_t)(0x8A80Au)), (c.r[0] & 0xFFFFu));
    // 093650  mov ax, 0x2c
    X86_AT(c, 0x93650u);
    s16(c, 0, 0x2Cu);
    // 093654  arpl ax, bx
    X86_AT(c, 0x93654u);
    { uint32_t d = (c.r[0] & 0xFFFFu), s = (c.r[3] & 0xFFFFu); if ((d & 3) < (s & 3)) { s16(c, 0, (d & ~3u) | (s & 3)); c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 093656  mov word ptr [0x8a830], ax
    X86_AT(c, 0x93656u);
    wr16((c.sbase[3] + (uint32_t)(0x8A830u)), (c.r[0] & 0xFFFFu));
    // 09365c  xor eax, eax
    X86_AT(c, 0x9365cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 09365e  mov al, byte ptr es:[0x80]
    X86_AT(c, 0x9365eu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(0x80u))));
    // 093664  mov dword ptr [0x8a828], eax
    X86_AT(c, 0x93664u);
    wr32((c.sbase[3] + (uint32_t)(0x8A828u)), c.r[0]);
    // 093669  add eax, 3
    X86_AT(c, 0x93669u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3u, 0, 4); }
    // 09366e  and al, 0xfc
    X86_AT(c, 0x9366eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFCu, 1)); }
    // 093670  sub esp, eax
    X86_AT(c, 0x93670u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 093672  mov edi, esp
    X86_AT(c, 0x93672u);
    c.r[7] = c.r[4];
    // 093674  mov dword ptr [0x8a81c], edi
    X86_AT(c, 0x93674u);
    wr32((c.sbase[3] + (uint32_t)(0x8A81Cu)), c.r[7]);
    // 09367a  push edx
    X86_AT(c, 0x9367au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 09367b  mov ecx, eax
    X86_AT(c, 0x9367bu);
    c.r[1] = c.r[0];
    // 09367d  push ds
    X86_AT(c, 0x9367du);
    push32(c, c.sreg[3]);
    // 09367e  push es
    X86_AT(c, 0x9367eu);
    push32(c, c.sreg[0]);
    // 09367f  pop ds
    X86_AT(c, 0x9367fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 093680  push es
    X86_AT(c, 0x93680u);
    push32(c, c.sreg[0]);
    // 093681  push ss
    X86_AT(c, 0x93681u);
    push32(c, c.sreg[2]);
    // 093682  pop es
    X86_AT(c, 0x93682u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 093683  mov esi, 0x81
    X86_AT(c, 0x93683u);
    c.r[6] = 0x81u;
    // 093688  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x93688u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 09368a  pop es
    X86_AT(c, 0x9368au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 09368b  pop ds
    X86_AT(c, 0x9368bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_9368c:
    X86_TICK(c, 41);
    // 09368c  sub eax, eax
    X86_AT(c, 0x9368cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 09368e  mov ah, 0x30
    X86_AT(c, 0x9368eu);
    s8(c, 4, 0x30u);
    // 093690  int 0x21
    X86_AT(c, 0x93690u);
    x86_int(c, 0x21, 0x93692u);
    X86_TICK(c, 14);
    // 093692  mov word ptr [0x8a840], ax
    X86_AT(c, 0x93692u);
    wr16((c.sbase[3] + (uint32_t)(0x8A840u)), (c.r[0] & 0xFFFFu));
    // 093698  cmp byte ptr [0x8a842], 1
    X86_AT(c, 0x93698u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A842u))), 0x1u, 0, 1);
    // 09369f  je 0x936e9
    X86_AT(c, 0x9369fu);
    if (x86_cc(c, 4)) { goto L_936e9; }
    X86_TICK(c, 10);
    // 0936a1  shr eax, 0x10
    X86_AT(c, 0x936a1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0936a4  cmp ax, 0x4458
    X86_AT(c, 0x936a4u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x4458u, 0, 2);
    // 0936a8  jne 0x936ac
    X86_AT(c, 0x936a8u);
    if (x86_cc(c, 5)) { goto L_936ac; }
    X86_TICK(c, 7);
    // 0936aa  jmp 0x936e9
    X86_AT(c, 0x936aau);
    goto L_936e9;
L_936ac:
    X86_TICK(c, 13);
    // 0936ac  mov byte ptr [0x8a842], 3
    X86_AT(c, 0x936acu);
    wr8((c.sbase[3] + (uint32_t)(0x8A842u)), 0x3u);
    // 0936b3  mov ebx, dword ptr [0x8a80c]
    X86_AT(c, 0x936b3u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x8A80Cu)));
    // 0936b9  jmp 0x936e9
    X86_AT(c, 0x936b9u);
    goto L_936e9;
L_936e9:
    X86_TICK(c, 8);
    // 0936e9  les edi, fword ptr [0x8a82c]
    X86_AT(c, 0x936e9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A82Cu)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 0936ef  xor eax, eax
    X86_AT(c, 0x936efu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_936f1:
    X86_TICK(c, 12);
    // 0936f1  cmp dword ptr es:[edi], 0x37384f4e
    X86_AT(c, 0x936f1u);
    (void)x86_sub(c, rd32((c.sbase[0] + (uint32_t)(c.r[7]))), 0x37384F4Eu, 0, 4);
    // 0936f8  jne 0x93744
    X86_AT(c, 0x936f8u);
    if (x86_cc(c, 5)) { goto L_93744; }
    X86_TICK(c, 12);
    // 0936fa  cmp byte ptr es:[edi + 4], 0x3d
    X86_AT(c, 0x936fau);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u))), 0x3Du, 0, 1);
    // 0936ff  jne 0x93744
    X86_AT(c, 0x936ffu);
    if (x86_cc(c, 5)) { goto L_93744; }
    X86_TICK(c, 16);
    // 093701  push eax
    X86_AT(c, 0x93701u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 093702  push edi
    X86_AT(c, 0x93702u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093703  cmp word ptr [0x8a833], 0
    X86_AT(c, 0x93703u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A833u))), 0x0u, 0, 2);
    // 09370b  je 0x93742
    X86_AT(c, 0x9370bu);
    if (x86_cc(c, 4)) { goto L_93742; }
    X86_TICK(c, 29);
    // 09370d  mov word ptr [0x8a833], 0
    X86_AT(c, 0x9370du);
    wr16((c.sbase[3] + (uint32_t)(0x8A833u)), 0x0u);
    // 093716  add edi, 5
    X86_AT(c, 0x93716u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x5u, 0, 4); }
    // 093719  mov esi, edi
    X86_AT(c, 0x93719u);
    c.r[6] = c.r[7];
    // 09371b  mov al, 0x20
    X86_AT(c, 0x9371bu);
    s8(c, 0, 0x20u);
    // 09371d  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x9371du);
    x86_string(c, 4, 1, 243, 4, 3);
    // 09371f  dec edi
    X86_AT(c, 0x9371fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 093720  cmp byte ptr es:[edi], 0
    X86_AT(c, 0x93720u);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 093724  je 0x93742
    X86_AT(c, 0x93724u);
    if (x86_cc(c, 4)) { goto L_93742; }
    X86_TICK(c, 2);
    // 093726  mov edi, esi
    X86_AT(c, 0x93726u);
    c.r[7] = c.r[6];
L_93728:
    X86_TICK(c, 11);
    // 093728  mov dl, byte ptr es:[edi]
    X86_AT(c, 0x93728u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 09372b  and dl, dl
    X86_AT(c, 0x9372bu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 09372d  je 0x93736
    X86_AT(c, 0x9372du);
    if (x86_cc(c, 4)) { goto L_93736; }
    X86_TICK(c, 39);
    // 09372f  mov ah, 6
    X86_AT(c, 0x9372fu);
    s8(c, 4, 0x6u);
    // 093731  int 0x21
    X86_AT(c, 0x93731u);
    x86_int(c, 0x21, 0x93733u);
    X86_TICK(c, 9);
    // 093733  inc edi
    X86_AT(c, 0x93733u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 093734  jmp 0x93728
    X86_AT(c, 0x93734u);
    X86_POLL(c, 0x93728u); goto L_93728;
L_93736:
    X86_TICK(c, 41);
    // 093736  mov dl, 0xd
    X86_AT(c, 0x93736u);
    s8(c, 2, 0xDu);
    // 093738  mov ah, 6
    X86_AT(c, 0x93738u);
    s8(c, 4, 0x6u);
    // 09373a  int 0x21
    X86_AT(c, 0x9373au);
    x86_int(c, 0x21, 0x9373cu);
    X86_TICK(c, 41);
    // 09373c  mov dl, 0xa
    X86_AT(c, 0x9373cu);
    s8(c, 2, 0xAu);
    // 09373e  mov ah, 6
    X86_AT(c, 0x9373eu);
    s8(c, 4, 0x6u);
    // 093740  int 0x21
    X86_AT(c, 0x93740u);
    x86_int(c, 0x21, 0x93742u);
L_93742:
    X86_TICK(c, 8);
    // 093742  pop edi
    X86_AT(c, 0x93742u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093743  pop eax
    X86_AT(c, 0x93743u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_93744:
    X86_TICK(c, 21);
    // 093744  mov ecx, 0xffffffff
    X86_AT(c, 0x93744u);
    c.r[1] = 0xFFFFFFFFu;
    // 093749  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x93749u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 09374b  cmp byte ptr es:[edi], 0
    X86_AT(c, 0x9374bu);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 09374f  jne 0x936f1
    X86_AT(c, 0x9374fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x936f1u); goto L_936f1; }
    X86_TICK(c, 14);
    // 093751  add edi, 3
    X86_AT(c, 0x93751u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x3u, 0, 4); }
    // 093754  cmp byte ptr [0x8a840], 3
    X86_AT(c, 0x93754u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A840u))), 0x3u, 0, 1);
    // 09375b  jb 0x9377d
    X86_AT(c, 0x9375bu);
    if (x86_cc(c, 2)) { goto L_9377d; }
    X86_TICK(c, 12);
    // 09375d  cmp byte ptr [0x8a842], 1
    X86_AT(c, 0x9375du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A842u))), 0x1u, 0, 1);
    // 093764  jne 0x9378a
    X86_AT(c, 0x93764u);
    if (x86_cc(c, 5)) { goto L_9378a; }
    X86_TICK(c, 12);
    // 093766  cmp byte ptr [0x8a842], 3
    X86_AT(c, 0x93766u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A842u))), 0x3u, 0, 1);
    // 09376d  je 0x9378a
    X86_AT(c, 0x9376du);
    if (x86_cc(c, 4)) { goto L_9378a; }
    X86_TICK(c, 11);
    // 09376f  mov dword ptr [0x8a83c], edi
    X86_AT(c, 0x9376fu);
    wr32((c.sbase[3] + (uint32_t)(0x8A83Cu)), c.r[7]);
    // 093775  mov word ptr [0x8a840], ds
    X86_AT(c, 0x93775u);
    wr16((c.sbase[3] + (uint32_t)(0x8A840u)), (uint32_t)c.sreg[3]);
    // 09377b  jmp 0x937bc
    X86_AT(c, 0x9377bu);
    goto L_937bc;
L_9377d:
    X86_TICK(c, 13);
    // 09377d  xor edx, edx
    X86_AT(c, 0x9377du);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 09377f  push edx
    X86_AT(c, 0x9377fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 093780  mov dword ptr [0x8a83c], esp
    X86_AT(c, 0x93780u);
    wr32((c.sbase[3] + (uint32_t)(0x8A83Cu)), c.r[4]);
    // 093786  jmp 0x937bc
    X86_AT(c, 0x93786u);
    goto L_937bc;
L_9378a:
    X86_TICK(c, 62);
    // 09378a  mov eax, es
    X86_AT(c, 0x9378au);
    c.r[0] = (uint32_t)c.sreg[0];
    // 09378c  lsl eax, eax
    X86_AT(c, 0x9378cu);
    { uint32_t v; if (x86_lsl(c, (c.r[0] & 0xFFFFu), v)) { c.r[0] = v; c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 09378f  xor eax, eax
    X86_AT(c, 0x9378fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 093791  sub ecx, ecx
    X86_AT(c, 0x93791u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 093793  dec ecx
    X86_AT(c, 0x93793u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 093794  mov ebx, edi
    X86_AT(c, 0x93794u);
    c.r[3] = c.r[7];
    // 093796  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x93796u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 093798  sub edi, ebx
    X86_AT(c, 0x93798u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[3], 0, 4); }
    // 09379a  lea eax, [edi + 3]
    X86_AT(c, 0x9379au);
    c.r[0] = (uint32_t)(c.r[7] + 0x3u);
    // 09379d  and eax, 0xfffc
    X86_AT(c, 0x9379du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFCu, 4); }
    // 0937a2  sub esp, eax
    X86_AT(c, 0x937a2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0937a4  mov dword ptr [0x8a83c], esp
    X86_AT(c, 0x937a4u);
    wr32((c.sbase[3] + (uint32_t)(0x8A83Cu)), c.r[4]);
    // 0937aa  mov ecx, edi
    X86_AT(c, 0x937aau);
    c.r[1] = c.r[7];
    // 0937ac  mov esi, ebx
    X86_AT(c, 0x937acu);
    c.r[6] = c.r[3];
    // 0937ae  mov edi, esp
    X86_AT(c, 0x937aeu);
    c.r[7] = c.r[4];
    // 0937b0  push ds
    X86_AT(c, 0x937b0u);
    push32(c, c.sreg[3]);
    // 0937b1  mov ds, word ptr [0x8a830]
    X86_AT(c, 0x937b1u);
    x86_load_seg(c, 3, rd16((c.sbase[3] + (uint32_t)(0x8A830u))) & 0xFFFFu);
    // 0937b7  push ss
    X86_AT(c, 0x937b7u);
    push32(c, c.sreg[2]);
    // 0937b8  pop es
    X86_AT(c, 0x937b8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0937b9  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x937b9u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0937bb  pop ds
    X86_AT(c, 0x937bbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_937bc:
    X86_TICK(c, 33);
    // 0937bc  mov eax, dword ptr [0x8a828]
    X86_AT(c, 0x937bcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A828u)));
    // 0937c1  inc eax
    X86_AT(c, 0x937c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0937c2  shr eax, 1
    X86_AT(c, 0x937c2u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0937c4  inc eax
    X86_AT(c, 0x937c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0937c5  inc eax
    X86_AT(c, 0x937c5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0937c6  shl eax, 2
    X86_AT(c, 0x937c6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 0937c9  sub esp, eax
    X86_AT(c, 0x937c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0937cb  mov dword ptr [0x8a822], esp
    X86_AT(c, 0x937cbu);
    wr32((c.sbase[3] + (uint32_t)(0x8A822u)), c.r[4]);
    // 0937d1  push ds
    X86_AT(c, 0x937d1u);
    push32(c, c.sreg[3]);
    // 0937d2  pop es
    X86_AT(c, 0x937d2u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0937d3  call 0x947fc
    X86_AT(c, 0x937d3u);
    push32(c, 0x937d8u); x86_call_known(c, 0x947fcu, f_000947fc); X86_RET(c, 0x937d8u);
    X86_TICK(c, 7);
    // 0937d8  call 0x94664
    X86_AT(c, 0x937d8u);
    push32(c, 0x937ddu); x86_call_known(c, 0x94664u, f_00094664); X86_RET(c, 0x937ddu);
    X86_TICK(c, 14);
    // 0937dd  push dword ptr [0x8a822]
    X86_AT(c, 0x937ddu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A822u))); push32(c, v); }
    // 0937e3  sub eax, eax
    X86_AT(c, 0x937e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0937e5  call 0x94700
    X86_AT(c, 0x937e5u);
    push32(c, 0x937eau); x86_call_known(c, 0x94700u, f_00094700); X86_RET(c, 0x937eau);
    X86_TICK(c, 14);
    // 0937ea  push eax
    X86_AT(c, 0x937eau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0937eb  cmp byte ptr [0x8a839], 1
    X86_AT(c, 0x937ebu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A839u))), 0x1u, 0, 1);
    // 0937f2  je 0x93814
    X86_AT(c, 0x937f2u);
    if (x86_cc(c, 4)) { goto L_93814; }
    X86_TICK(c, 12);
    // 0937f4  cmp word ptr [0x8a847], 0xabcd
    X86_AT(c, 0x937f4u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A847u))), 0xABCDu, 0, 2);
    // 0937fd  jne 0x93814
    X86_AT(c, 0x937fdu);
    if (x86_cc(c, 5)) { goto L_93814; }
    X86_TICK(c, 15);
    // 0937ff  mov eax, dword ptr [0x8a84d]
    X86_AT(c, 0x937ffu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A84Du)));
    // 093804  cmp eax, dword ptr [0x8a849]
    X86_AT(c, 0x93804u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A849u))), 0, 4);
    // 09380a  jne 0x93814
    X86_AT(c, 0x9380au);
    if (x86_cc(c, 5)) { goto L_93814; }
    X86_TICK(c, 11);
    // 09380c  mov edx, dword ptr [0x8a84d]
    X86_AT(c, 0x9380cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A84Du)));
    // 093812  jmp 0x9383b
    X86_AT(c, 0x93812u);
    goto L_9383b;
L_93814:
    X86_TICK(c, 12);
    // 093814  cmp byte ptr [0x8a833], 1
    X86_AT(c, 0x93814u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A833u))), 0x1u, 0, 1);
    // 09381b  je 0x93844
    X86_AT(c, 0x9381bu);
    if (x86_cc(c, 4)) { goto L_93844; }
    X86_TICK(c, 12);
    // 09381d  cmp word ptr [0x8a851], 0xabcd
    X86_AT(c, 0x9381du);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A851u))), 0xABCDu, 0, 2);
    // 093826  jne 0x93844
    X86_AT(c, 0x93826u);
    if (x86_cc(c, 5)) { goto L_93844; }
    X86_TICK(c, 15);
    // 093828  mov eax, dword ptr [0x8a857]
    X86_AT(c, 0x93828u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A857u)));
    // 09382d  cmp eax, dword ptr [0x8a853]
    X86_AT(c, 0x9382du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A853u))), 0, 4);
    // 093833  jne 0x93844
    X86_AT(c, 0x93833u);
    if (x86_cc(c, 5)) { goto L_93844; }
    X86_TICK(c, 4);
    // 093835  mov edx, dword ptr [0x8a857]
    X86_AT(c, 0x93835u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A857u)));
L_9383b:
    X86_TICK(c, 39);
    // 09383b  mov ah, 9
    X86_AT(c, 0x9383bu);
    s8(c, 4, 0x9u);
    // 09383d  int 0x21
    X86_AT(c, 0x9383du);
    x86_int(c, 0x21, 0x9383fu);
    X86_TICK(c, 7);
    // 09383f  jmp 0x9339b
    X86_AT(c, 0x9383fu);
    X86_POLL(c, 0x9339bu); goto L_9339b;
L_93844:
    X86_TICK(c, 12);
    // 093844  cmp byte ptr [0x8a837], 1
    X86_AT(c, 0x93844u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A837u))), 0x1u, 0, 1);
    // 09384b  je 0x93878
    X86_AT(c, 0x9384bu);
    if (x86_cc(c, 4)) { goto L_93878; }
    X86_TICK(c, 12);
    // 09384d  cmp word ptr [0x8a85b], 0xabcd
    X86_AT(c, 0x9384du);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A85Bu))), 0xABCDu, 0, 2);
    // 093856  jne 0x93878
    X86_AT(c, 0x93856u);
    if (x86_cc(c, 5)) { goto L_93878; }
    X86_TICK(c, 43);
    // 093858  mov edx, dword ptr cs:[0x93874]
    X86_AT(c, 0x93858u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(0x93874u)));
    // 09385f  mov ah, 9
    X86_AT(c, 0x9385fu);
    s8(c, 4, 0x9u);
    // 093861  int 0x21
    X86_AT(c, 0x93861u);
    x86_int(c, 0x21, 0x93863u);
    X86_TICK(c, 13);
    // 093863  mov edx, dword ptr [0x8a857]
    X86_AT(c, 0x93863u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A857u)));
    // 093869  add edx, 0xa
    X86_AT(c, 0x93869u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xAu, 0, 4); }
    // 09386c  jmp 0x9383b
    X86_AT(c, 0x9386cu);
    X86_POLL(c, 0x9383bu); goto L_9383b;
L_93878:
    X86_TICK(c, 7);
    // 093878  jmp 0x93396
    X86_AT(c, 0x93878u);
    X86_POLL(c, 0x93396u); goto L_93396;
    x86_fault(c, 0x93394u, "ran off the end of a function");
}
void f_000933a5(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0933a5  ret 
    X86_AT(c, 0x933a5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x933a5u, "ran off the end of a function");
}
void f_0009387e(X86Cpu& c) {
    X86_TICK(c, 16);
    // 09387e  mov eax, dword ptr [0x8a80c]
    X86_AT(c, 0x9387eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A80Cu)));
    // 093883  add eax, 0x10
    X86_AT(c, 0x93883u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 093888  ret 
    X86_AT(c, 0x93888u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9387eu, "ran off the end of a function");
}
void f_0009388a(X86Cpu& c) {
    X86_TICK(c, 14);
    // 09388a  mov eax, dword ptr [0x8a814]
    X86_AT(c, 0x9388au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A814u)));
    // 09388f  ret 
    X86_AT(c, 0x9388fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9388au, "ran off the end of a function");
}
void f_00093890(X86Cpu& c) {
    X86_TICK(c, 14);
    // 093890  push ebx
    X86_AT(c, 0x93890u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093891  cmp byte ptr [0x8a842], 2
    X86_AT(c, 0x93891u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A842u))), 0x2u, 0, 1);
    // 093898  je 0x938d5
    X86_AT(c, 0x93898u);
    if (x86_cc(c, 4)) { goto L_938d5; }
    X86_TICK(c, 7);
    // 09389a  jmp 0x938d5
    X86_AT(c, 0x9389au);
    goto L_938d5;
L_938d5:
    X86_TICK(c, 14);
    // 0938d5  pop ebx
    X86_AT(c, 0x938d5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0938d6  ret 4
    X86_AT(c, 0x938d6u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x93890u, "ran off the end of a function");
}
void f_000938d9(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0938d9  ret 8
    X86_AT(c, 0x938d9u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x938d9u, "ran off the end of a function");
}
void f_000938ef(X86Cpu& c) {
    X86_TICK(c, 61);
    // 0938ef  push ebp
    X86_AT(c, 0x938efu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0938f0  mov ebp, esp
    X86_AT(c, 0x938f0u);
    c.r[5] = c.r[4];
    // 0938f2  push esi
    X86_AT(c, 0x938f2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0938f3  push edi
    X86_AT(c, 0x938f3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0938f4  push ebx
    X86_AT(c, 0x938f4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0938f5  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0x938f5u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0938f9  mov cx, 0
    X86_AT(c, 0x938f9u);
    s16(c, 1, 0x0u);
    // 0938fd  mov dx, 0
    X86_AT(c, 0x938fdu);
    s16(c, 2, 0x0u);
    // 093901  mov al, 1
    X86_AT(c, 0x93901u);
    s8(c, 0, 0x1u);
    // 093903  mov ah, 0x42
    X86_AT(c, 0x93903u);
    s8(c, 4, 0x42u);
    // 093905  clc 
    X86_AT(c, 0x93905u);
    c.fl &= ~X86_CF;
    // 093906  int 0x21
    X86_AT(c, 0x93906u);
    x86_int(c, 0x21, 0x93908u);
    X86_TICK(c, 5);
    // 093908  jb 0x93957
    X86_AT(c, 0x93908u);
    if (x86_cc(c, 2)) { goto L_93957; }
    X86_TICK(c, 57);
    // 09390a  mov ecx, 0x9396d
    X86_AT(c, 0x9390au);
    c.r[1] = 0x9396Du;
    // 09390f  mov word ptr [ecx + 2], dx
    X86_AT(c, 0x9390fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 093913  mov word ptr [ecx], ax
    X86_AT(c, 0x93913u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[0] & 0xFFFFu));
    // 093916  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0x93916u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 09391a  mov cx, 0
    X86_AT(c, 0x9391au);
    s16(c, 1, 0x0u);
    // 09391e  mov dx, 0
    X86_AT(c, 0x9391eu);
    s16(c, 2, 0x0u);
    // 093922  mov al, 2
    X86_AT(c, 0x93922u);
    s8(c, 0, 0x2u);
    // 093924  mov ah, 0x42
    X86_AT(c, 0x93924u);
    s8(c, 4, 0x42u);
    // 093926  clc 
    X86_AT(c, 0x93926u);
    c.fl &= ~X86_CF;
    // 093927  int 0x21
    X86_AT(c, 0x93927u);
    x86_int(c, 0x21, 0x93929u);
    X86_TICK(c, 5);
    // 093929  jb 0x93957
    X86_AT(c, 0x93929u);
    if (x86_cc(c, 2)) { goto L_93957; }
    X86_TICK(c, 63);
    // 09392b  mov ecx, 0x93971
    X86_AT(c, 0x9392bu);
    c.r[1] = 0x93971u;
    // 093930  mov word ptr [ecx + 2], dx
    X86_AT(c, 0x93930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 093934  mov word ptr [ecx], ax
    X86_AT(c, 0x93934u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[0] & 0xFFFFu));
    // 093937  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0x93937u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 09393b  mov eax, 0x9396d
    X86_AT(c, 0x9393bu);
    c.r[0] = 0x9396Du;
    // 093940  mov cx, word ptr [eax + 2]
    X86_AT(c, 0x93940u);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2u))));
    // 093944  mov dx, word ptr [eax]
    X86_AT(c, 0x93944u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093947  mov al, 0
    X86_AT(c, 0x93947u);
    s8(c, 0, 0x0u);
    // 093949  mov ah, 0x42
    X86_AT(c, 0x93949u);
    s8(c, 4, 0x42u);
    // 09394b  clc 
    X86_AT(c, 0x9394bu);
    c.fl &= ~X86_CF;
    // 09394c  int 0x21
    X86_AT(c, 0x9394cu);
    x86_int(c, 0x21, 0x9394eu);
    X86_TICK(c, 5);
    // 09394e  jb 0x93957
    X86_AT(c, 0x9394eu);
    if (x86_cc(c, 2)) { goto L_93957; }
    X86_TICK(c, 11);
    // 093950  mov eax, dword ptr [0x93971]
    X86_AT(c, 0x93950u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x93971u)));
    // 093955  jmp 0x93966
    X86_AT(c, 0x93955u);
    goto L_93966;
L_93957:
    X86_TICK(c, 6);
    // 093957  and eax, 0xffff
    X86_AT(c, 0x93957u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 09395c  mov dword ptr [0x8aabe], eax
    X86_AT(c, 0x9395cu);
    wr32((c.sbase[3] + (uint32_t)(0x8AABEu)), c.r[0]);
    // 093961  mov eax, 0xffffffff
    X86_AT(c, 0x93961u);
    c.r[0] = 0xFFFFFFFFu;
L_93966:
    X86_TICK(c, 28);
    // 093966  pop ebx
    X86_AT(c, 0x93966u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093967  pop edi
    X86_AT(c, 0x93967u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093968  pop esi
    X86_AT(c, 0x93968u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093969  mov esp, ebp
    X86_AT(c, 0x93969u);
    c.r[4] = c.r[5];
    // 09396b  pop ebp
    X86_AT(c, 0x9396bu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 09396c  ret 
    X86_AT(c, 0x9396cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x938efu, "ran off the end of a function");
}
void f_00093a1a(X86Cpu& c) {
    X86_TICK(c, 75);
    // 093a1a  push ebp
    X86_AT(c, 0x93a1au);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093a1b  mov ebp, esp
    X86_AT(c, 0x93a1bu);
    c.r[5] = c.r[4];
    // 093a1d  push esi
    X86_AT(c, 0x93a1du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093a1e  push edi
    X86_AT(c, 0x93a1eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093a1f  push ebx
    X86_AT(c, 0x93a1fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093a20  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x93a20u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093a23  mov eax, dword ptr [esi]
    X86_AT(c, 0x93a23u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 093a25  mov ebx, dword ptr [esi + 4]
    X86_AT(c, 0x93a25u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 093a28  mov ecx, dword ptr [esi + 8]
    X86_AT(c, 0x93a28u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 093a2b  mov edx, dword ptr [esi + 0xc]
    X86_AT(c, 0x93a2bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)));
    // 093a2e  mov edi, dword ptr [esi + 0x14]
    X86_AT(c, 0x93a2eu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)));
    // 093a31  mov esi, dword ptr [esi + 0x10]
    X86_AT(c, 0x93a31u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)));
    // 093a34  int 0x21
    X86_AT(c, 0x93a34u);
    x86_int(c, 0x21, 0x93a36u);
    X86_TICK(c, 67);
    // 093a36  push edi
    X86_AT(c, 0x93a36u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093a37  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x93a37u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 093a3a  mov dword ptr [edi], eax
    X86_AT(c, 0x93a3au);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 093a3c  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x93a3cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 093a3f  mov dword ptr [edi + 8], ecx
    X86_AT(c, 0x93a3fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), c.r[1]);
    // 093a42  mov dword ptr [edi + 0xc], edx
    X86_AT(c, 0x93a42u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), c.r[2]);
    // 093a45  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0x93a45u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 093a48  pushfd 
    X86_AT(c, 0x93a48u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 093a49  pop dword ptr [edi + 0x18]
    X86_AT(c, 0x93a49u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), v); }
    // 093a4c  and dword ptr [edi + 0x18], 1
    X86_AT(c, 0x93a4cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1u, 4)); }
    // 093a50  pop dword ptr [edi + 0x14]
    X86_AT(c, 0x93a50u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), v); }
    // 093a53  pop ebx
    X86_AT(c, 0x93a53u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093a54  pop edi
    X86_AT(c, 0x93a54u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093a55  pop esi
    X86_AT(c, 0x93a55u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093a56  mov esp, ebp
    X86_AT(c, 0x93a56u);
    c.r[4] = c.r[5];
    // 093a58  pop ebp
    X86_AT(c, 0x93a58u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 093a59  ret 
    X86_AT(c, 0x93a59u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x93a1au, "ran off the end of a function");
}
void f_00093ae0(X86Cpu& c) {
    X86_TICK(c, 32);
    // 093ae0  push ebp
    X86_AT(c, 0x93ae0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093ae1  mov ebp, esp
    X86_AT(c, 0x93ae1u);
    c.r[5] = c.r[4];
    // 093ae3  push ebx
    X86_AT(c, 0x93ae3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093ae4  push esi
    X86_AT(c, 0x93ae4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093ae5  push edi
    X86_AT(c, 0x93ae5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093ae6  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x93ae6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093ae9  mov esi, edi
    X86_AT(c, 0x93ae9u);
    c.r[6] = c.r[7];
    // 093aeb  and byte ptr [esi + 0xc], 0x7f
    X86_AT(c, 0x93aebu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 093aef  mov eax, 0x8a860
    X86_AT(c, 0x93aefu);
    c.r[0] = 0x8A860u;
    // 093af4  cmp eax, edi
    X86_AT(c, 0x93af4u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 093af6  jne 0x93b10
    X86_AT(c, 0x93af6u);
    if (x86_cc(c, 5)) { goto L_93b10; }
    X86_TICK(c, 13);
    // 093af8  mov al, byte ptr [esi + 0xe]
    X86_AT(c, 0x93af8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu))));
    // 093afb  push eax
    X86_AT(c, 0x93afbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 093afc  call 0x95070
    X86_AT(c, 0x93afcu);
    push32(c, 0x93b01u); x86_call_known(c, 0x95070u, f_00095070); X86_RET(c, 0x93b01u);
    X86_TICK(c, 10);
    // 093b01  xchg ebx, eax
    X86_AT(c, 0x93b01u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 093b02  cmp bl, 1
    X86_AT(c, 0x93b02u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 093b05  je 0x93b10
    X86_AT(c, 0x93b05u);
    if (x86_cc(c, 4)) { goto L_93b10; }
    X86_TICK(c, 7);
    // 093b07  cmp bl, 2
    X86_AT(c, 0x93b07u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 093b0a  je 0x93b10
    X86_AT(c, 0x93b0au);
    if (x86_cc(c, 4)) { goto L_93b10; }
    X86_TICK(c, 7);
    // 093b0c  or byte ptr [esi + 0xc], 1
    X86_AT(c, 0x93b0cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_93b10:
    X86_TICK(c, 9);
    // 093b10  mov eax, 0x8a874
    X86_AT(c, 0x93b10u);
    c.r[0] = 0x8A874u;
    // 093b15  cmp eax, edi
    X86_AT(c, 0x93b15u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 093b17  jne 0x93b30
    X86_AT(c, 0x93b17u);
    if (x86_cc(c, 5)) { goto L_93b30; }
    X86_TICK(c, 13);
    // 093b19  mov al, byte ptr [esi + 0xe]
    X86_AT(c, 0x93b19u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu))));
    // 093b1c  push eax
    X86_AT(c, 0x93b1cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 093b1d  call 0x95070
    X86_AT(c, 0x93b1du);
    push32(c, 0x93b22u); x86_call_known(c, 0x95070u, f_00095070); X86_RET(c, 0x93b22u);
    X86_TICK(c, 7);
    // 093b22  cmp al, 2
    X86_AT(c, 0x93b22u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 093b24  jne 0x93b2c
    X86_AT(c, 0x93b24u);
    if (x86_cc(c, 5)) { goto L_93b2c; }
    X86_TICK(c, 14);
    // 093b26  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0x93b26u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
    // 093b2a  jmp 0x93b30
    X86_AT(c, 0x93b2au);
    goto L_93b30;
L_93b2c:
    X86_TICK(c, 7);
    // 093b2c  or byte ptr [esi + 0xc], 1
    X86_AT(c, 0x93b2cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_93b30:
    X86_TICK(c, 9);
    // 093b30  mov eax, 0x8a888
    X86_AT(c, 0x93b30u);
    c.r[0] = 0x8A888u;
    // 093b35  cmp eax, edi
    X86_AT(c, 0x93b35u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 093b37  jne 0x93b3d
    X86_AT(c, 0x93b37u);
    if (x86_cc(c, 5)) { goto L_93b3d; }
    X86_TICK(c, 7);
    // 093b39  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0x93b39u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
L_93b3d:
    X86_TICK(c, 12);
    // 093b3d  test byte ptr [esi + 0xc], 1
    X86_AT(c, 0x93b3du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu))) & 0x1u, 1);
    // 093b41  je 0x93b65
    X86_AT(c, 0x93b41u);
    if (x86_cc(c, 4)) { goto L_93b65; }
    X86_TICK(c, 9);
    // 093b43  push 0x201
    X86_AT(c, 0x93b43u);
    { uint32_t v = 0x201u; push32(c, v); }
    // 093b48  call 0x931b0
    X86_AT(c, 0x93b48u);
    push32(c, 0x93b4du); x86_call_known(c, 0x931b0u, f_000931b0); X86_RET(c, 0x93b4du);
    X86_TICK(c, 13);
    // 093b4d  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x93b4du);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 093b50  pop ecx
    X86_AT(c, 0x93b50u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 093b51  and eax, eax
    X86_AT(c, 0x93b51u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 093b53  jne 0x93b59
    X86_AT(c, 0x93b53u);
    if (x86_cc(c, 5)) { goto L_93b59; }
    X86_TICK(c, 7);
    // 093b55  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0x93b55u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
L_93b59:
    X86_TICK(c, 8);
    // 093b59  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x93b59u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 093b5c  mov dword ptr [esi], eax
    X86_AT(c, 0x93b5cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 093b5e  mov dword ptr [esi + 4], 0xffffffff
    X86_AT(c, 0x93b5eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), 0xFFFFFFFFu);
L_93b65:
    X86_TICK(c, 30);
    // 093b65  mov word ptr [esi + 0x10], 0xffff
    X86_AT(c, 0x93b65u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0xFFFFu);
    // 093b6b  pop edi
    X86_AT(c, 0x93b6bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093b6c  pop esi
    X86_AT(c, 0x93b6cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093b6d  pop ebx
    X86_AT(c, 0x93b6du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093b6e  leave 
    X86_AT(c, 0x93b6eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093b6f  ret 4
    X86_AT(c, 0x93b6fu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x93ae0u, "ran off the end of a function");
}
void f_00093b8c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 093b8c  push ebp
    X86_AT(c, 0x93b8cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093b8d  mov ebp, esp
    X86_AT(c, 0x93b8du);
    c.r[5] = c.r[4];
    // 093b8f  push ebx
    X86_AT(c, 0x93b8fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093b90  push esi
    X86_AT(c, 0x93b90u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093b91  push edi
    X86_AT(c, 0x93b91u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093b92  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x93b92u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093b95  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x93b95u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 093b98  jmp 0x93bb6
    X86_AT(c, 0x93b98u);
    goto L_93bb6;
L_93b9a:
    X86_TICK(c, 9);
    // 093b9a  mov eax, 0xa
    X86_AT(c, 0x93b9au);
    c.r[0] = 0xAu;
    // 093b9f  cmp eax, esi
    X86_AT(c, 0x93b9fu);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 093ba1  jb 0x93ba5
    X86_AT(c, 0x93ba1u);
    if (x86_cc(c, 2)) { goto L_93ba5; }
    X86_TICK(c, 2);
    // 093ba3  mov eax, esi
    X86_AT(c, 0x93ba3u);
    c.r[0] = c.r[6];
L_93ba5:
    X86_TICK(c, 18);
    // 093ba5  xchg ebx, eax
    X86_AT(c, 0x93ba5u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 093ba6  push ebx
    X86_AT(c, 0x93ba6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093ba7  push edi
    X86_AT(c, 0x93ba7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093ba8  mov ecx, dword ptr [0x8a764]
    X86_AT(c, 0x93ba8u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A764u)));
    // 093bae  call dword ptr [0x8a760]
    X86_AT(c, 0x93baeu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A760u))); push32(c, 0x93bb4u); x86_call(c, t); X86_RET(c, 0x93bb4u); }
    X86_TICK(c, 2);
    // 093bb4  sub esi, ebx
    X86_AT(c, 0x93bb4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[3], 0, 4); }
L_93bb6:
    X86_TICK(c, 7);
    // 093bb6  and esi, esi
    X86_AT(c, 0x93bb6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 093bb8  ja 0x93b9a
    X86_AT(c, 0x93bb8u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x93b9au); goto L_93b9a; }
    X86_TICK(c, 28);
    // 093bba  pop edi
    X86_AT(c, 0x93bbau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093bbb  pop esi
    X86_AT(c, 0x93bbbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093bbc  pop ebx
    X86_AT(c, 0x93bbcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093bbd  leave 
    X86_AT(c, 0x93bbdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093bbe  ret 8
    X86_AT(c, 0x93bbeu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x93b8cu, "ran off the end of a function");
}
void f_00093bd4(X86Cpu& c) {
    X86_TICK(c, 23);
    // 093bd4  push ebp
    X86_AT(c, 0x93bd4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093bd5  mov ebp, esp
    X86_AT(c, 0x93bd5u);
    c.r[5] = c.r[4];
    // 093bd7  push esi
    X86_AT(c, 0x93bd7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093bd8  push edi
    X86_AT(c, 0x93bd8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093bd9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x93bd9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093bdc  mov eax, dword ptr [0x8a750]
    X86_AT(c, 0x93bdcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A750u)));
    // 093be1  cmp eax, 0xffff
    X86_AT(c, 0x93be1u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 093be6  je 0x93c1a
    X86_AT(c, 0x93be6u);
    if (x86_cc(c, 4)) { goto L_93c1a; }
    X86_TICK(c, 7);
    // 093be8  cmp edi, eax
    X86_AT(c, 0x93be8u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 093bea  jae 0x93c1a
    X86_AT(c, 0x93beau);
    if (x86_cc(c, 3)) { goto L_93c1a; }
    X86_TICK(c, 24);
    // 093bec  xchg esi, eax
    X86_AT(c, 0x93becu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 093bed  sub esi, edi
    X86_AT(c, 0x93bedu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 093bef  add dword ptr [0x8a75c], esi
    X86_AT(c, 0x93befu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A75Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 093bf5  test byte ptr [0x8a74c], 0x10
    X86_AT(c, 0x93bf5u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x10u, 1);
    // 093bfc  je 0x93c0f
    X86_AT(c, 0x93bfcu);
    if (x86_cc(c, 4)) { goto L_93c0f; }
    X86_TICK(c, 12);
    // 093bfe  test byte ptr [0x8a74c], 1
    X86_AT(c, 0x93bfeu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x1u, 1);
    // 093c05  jne 0x93c0f
    X86_AT(c, 0x93c05u);
    if (x86_cc(c, 5)) { goto L_93c0f; }
    X86_TICK(c, 11);
    // 093c07  push esi
    X86_AT(c, 0x93c07u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093c08  push 0x8a768
    X86_AT(c, 0x93c08u);
    { uint32_t v = 0x8A768u; push32(c, v); }
    // 093c0d  jmp 0x93c15
    X86_AT(c, 0x93c0du);
    goto L_93c15;
L_93c0f:
    X86_TICK(c, 4);
    // 093c0f  push esi
    X86_AT(c, 0x93c0fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093c10  push 0x8a772
    X86_AT(c, 0x93c10u);
    { uint32_t v = 0x8A772u; push32(c, v); }
L_93c15:
    X86_TICK(c, 7);
    // 093c15  call 0x93b8c
    X86_AT(c, 0x93c15u);
    push32(c, 0x93c1au); x86_call_known(c, 0x93b8cu, f_00093b8c); X86_RET(c, 0x93c1au);
L_93c1a:
    X86_TICK(c, 24);
    // 093c1a  pop edi
    X86_AT(c, 0x93c1au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093c1b  pop esi
    X86_AT(c, 0x93c1bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093c1c  leave 
    X86_AT(c, 0x93c1cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093c1d  ret 4
    X86_AT(c, 0x93c1du);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x93bd4u, "ran off the end of a function");
}
void f_00093c40(X86Cpu& c) {
    X86_TICK(c, 25);
    // 093c40  push ebp
    X86_AT(c, 0x93c40u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093c41  mov ebp, esp
    X86_AT(c, 0x93c41u);
    c.r[5] = c.r[4];
    // 093c43  push ecx
    X86_AT(c, 0x93c43u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093c44  sub esp, 8
    X86_AT(c, 0x93c44u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 093c47  push ebx
    X86_AT(c, 0x93c47u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093c48  mov eax, dword ptr [0x8aa7c]
    X86_AT(c, 0x93c48u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093c4d  mov bl, byte ptr [eax]
    X86_AT(c, 0x93c4du);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093c4f  cmp bl, 0x2a
    X86_AT(c, 0x93c4fu);
    (void)x86_sub(c, g8(c, 3), 0x2Au, 0, 1);
    // 093c52  je 0x93c76
    X86_AT(c, 0x93c52u);
    if (x86_cc(c, 4)) { goto L_93c76; }
    X86_TICK(c, 7);
    // 093c54  cmp bl, 0x31
    X86_AT(c, 0x93c54u);
    (void)x86_sub(c, g8(c, 3), 0x31u, 0, 1);
    // 093c57  jb 0x93c5e
    X86_AT(c, 0x93c57u);
    if (x86_cc(c, 2)) { goto L_93c5e; }
    X86_TICK(c, 7);
    // 093c59  cmp bl, 0x39
    X86_AT(c, 0x93c59u);
    (void)x86_sub(c, g8(c, 3), 0x39u, 0, 1);
    // 093c5c  jbe 0x93c76
    X86_AT(c, 0x93c5cu);
    if (x86_cc(c, 6)) { goto L_93c76; }
L_93c5e:
    X86_TICK(c, 12);
    // 093c5e  cmp byte ptr [ebp + 0xc], 0
    X86_AT(c, 0x93c5eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 1);
    // 093c62  je 0x93d1c
    X86_AT(c, 0x93c62u);
    if (x86_cc(c, 4)) { goto L_93d1c; }
    X86_TICK(c, 16);
    // 093c68  mov eax, dword ptr [0x8aa7c]
    X86_AT(c, 0x93c68u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093c6d  cmp byte ptr [eax], 0x30
    X86_AT(c, 0x93c6du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x30u, 0, 1);
    // 093c70  jne 0x93d1c
    X86_AT(c, 0x93c70u);
    if (x86_cc(c, 5)) { goto L_93d1c; }
L_93c76:
    X86_TICK(c, 17);
    // 093c76  mov eax, dword ptr [0x8aa7c]
    X86_AT(c, 0x93c76u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093c7b  mov al, byte ptr [eax]
    X86_AT(c, 0x93c7bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093c7d  mov byte ptr [ebp - 9], al
    X86_AT(c, 0x93c7du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 093c80  cmp al, 0x30
    X86_AT(c, 0x93c80u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 093c82  jb 0x93ccb
    X86_AT(c, 0x93c82u);
    if (x86_cc(c, 2)) { goto L_93ccb; }
    X86_TICK(c, 7);
    // 093c84  cmp al, 0x39
    X86_AT(c, 0x93c84u);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 093c86  ja 0x93ccb
    X86_AT(c, 0x93c86u);
    if (x86_cc(c, 7)) { goto L_93ccb; }
    X86_TICK(c, 9);
    // 093c88  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0x93c88u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 093c8f  jmp 0x93cb0
    X86_AT(c, 0x93c8fu);
    goto L_93cb0;
L_93c91:
    X86_TICK(c, 30);
    // 093c91  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x93c91u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 093c94  lea eax, [eax + eax*4]
    X86_AT(c, 0x93c94u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 093c97  add eax, eax
    X86_AT(c, 0x93c97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 093c99  mov edx, dword ptr [0x8aa7c]
    X86_AT(c, 0x93c99u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093c9f  movzx ecx, byte ptr [edx]
    X86_AT(c, 0x93c9fu);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(c.r[2])));
    // 093ca2  add ecx, eax
    X86_AT(c, 0x93ca2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 093ca4  sub ecx, 0x30
    X86_AT(c, 0x93ca4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x30u, 0, 4); }
    // 093ca7  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0x93ca7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 093caa  inc dword ptr [0x8aa7c]
    X86_AT(c, 0x93caau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA7Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_93cb0:
    X86_TICK(c, 17);
    // 093cb0  mov eax, dword ptr [0x8aa7c]
    X86_AT(c, 0x93cb0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093cb5  mov al, byte ptr [eax]
    X86_AT(c, 0x93cb5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093cb7  mov byte ptr [ebp - 0xa], al
    X86_AT(c, 0x93cb7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), g8(c, 0));
    // 093cba  cmp al, 0x30
    X86_AT(c, 0x93cbau);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 093cbc  jb 0x93d32
    X86_AT(c, 0x93cbcu);
    if (x86_cc(c, 2)) { goto L_93d32; }
    X86_TICK(c, 7);
    // 093cc2  cmp al, 0x39
    X86_AT(c, 0x93cc2u);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 093cc4  jbe 0x93c91
    X86_AT(c, 0x93cc4u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x93c91u); goto L_93c91; }
    X86_TICK(c, 7);
    // 093cc6  jmp 0x93d32
    X86_AT(c, 0x93cc6u);
    goto L_93d32;
L_93ccb:
    X86_TICK(c, 16);
    // 093ccb  mov eax, dword ptr [0x8aa7c]
    X86_AT(c, 0x93ccbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093cd0  cmp byte ptr [eax], 0x2a
    X86_AT(c, 0x93cd0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Au, 0, 1);
    // 093cd3  jne 0x93d32
    X86_AT(c, 0x93cd3u);
    if (x86_cc(c, 5)) { goto L_93d32; }
    X86_TICK(c, 16);
    // 093cd5  mov eax, dword ptr [0x8aa68]
    X86_AT(c, 0x93cd5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA68u)));
    // 093cda  cmp dword ptr [eax], 0
    X86_AT(c, 0x93cdau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 4);
    // 093cdd  jge 0x93d03
    X86_AT(c, 0x93cddu);
    if (x86_cc(c, 13)) { goto L_93d03; }
    X86_TICK(c, 12);
    // 093cdf  cmp byte ptr [ebp + 8], 0x50
    X86_AT(c, 0x93cdfu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x50u, 0, 1);
    // 093ce3  jne 0x93cee
    X86_AT(c, 0x93ce3u);
    if (x86_cc(c, 5)) { goto L_93cee; }
    X86_TICK(c, 9);
    // 093ce5  mov dword ptr [ebp - 8], 0xffff
    X86_AT(c, 0x93ce5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFu);
    // 093cec  jmp 0x93d0d
    X86_AT(c, 0x93cecu);
    goto L_93d0d;
L_93cee:
    X86_TICK(c, 26);
    // 093cee  mov eax, dword ptr [0x8aa68]
    X86_AT(c, 0x93ceeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA68u)));
    // 093cf3  mov eax, dword ptr [eax]
    X86_AT(c, 0x93cf3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 093cf5  neg eax
    X86_AT(c, 0x93cf5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 093cf7  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x93cf7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 093cfa  or byte ptr [0x8a74c], 1
    X86_AT(c, 0x93cfau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A74Cu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
    // 093d01  jmp 0x93d0d
    X86_AT(c, 0x93d01u);
    goto L_93d0d;
L_93d03:
    X86_TICK(c, 10);
    // 093d03  mov eax, dword ptr [0x8aa68]
    X86_AT(c, 0x93d03u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA68u)));
    // 093d08  mov eax, dword ptr [eax]
    X86_AT(c, 0x93d08u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 093d0a  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x93d0au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_93d0d:
    X86_TICK(c, 20);
    // 093d0d  add dword ptr [0x8aa68], 4
    X86_AT(c, 0x93d0du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA68u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 093d14  inc dword ptr [0x8aa7c]
    X86_AT(c, 0x93d14u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA7Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 093d1a  jmp 0x93d32
    X86_AT(c, 0x93d1au);
    goto L_93d32;
L_93d1c:
    X86_TICK(c, 12);
    // 093d1c  cmp byte ptr [ebp + 8], 0x50
    X86_AT(c, 0x93d1cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x50u, 0, 1);
    // 093d20  jne 0x93d2b
    X86_AT(c, 0x93d20u);
    if (x86_cc(c, 5)) { goto L_93d2b; }
    X86_TICK(c, 9);
    // 093d22  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0x93d22u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 093d29  jmp 0x93d32
    X86_AT(c, 0x93d29u);
    goto L_93d32;
L_93d2b:
    X86_TICK(c, 2);
    // 093d2b  mov dword ptr [ebp - 8], 0xffff
    X86_AT(c, 0x93d2bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFu);
L_93d32:
    X86_TICK(c, 24);
    // 093d32  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x93d32u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 093d35  pop ebx
    X86_AT(c, 0x93d35u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093d36  leave 
    X86_AT(c, 0x93d36u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093d37  ret 8
    X86_AT(c, 0x93d37u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x93c40u, "ran off the end of a function");
}
void f_00093d50(X86Cpu& c) {
    X86_TICK(c, 20);
    // 093d50  push ebp
    X86_AT(c, 0x93d50u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093d51  mov ebp, esp
    X86_AT(c, 0x93d51u);
    c.r[5] = c.r[4];
    // 093d53  push ecx
    X86_AT(c, 0x93d53u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093d54  push eax
    X86_AT(c, 0x93d54u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 093d55  push ebx
    X86_AT(c, 0x93d55u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093d56  push esi
    X86_AT(c, 0x93d56u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093d57  push edi
    X86_AT(c, 0x93d57u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093d58  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x93d58u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093d5b  mov dword ptr [0x8aa7c], eax
    X86_AT(c, 0x93d5bu);
    wr32((c.sbase[3] + (uint32_t)(0x8AA7Cu)), c.r[0]);
L_93d60:
    X86_TICK(c, 29);
    // 093d60  sub eax, eax
    X86_AT(c, 0x93d60u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 093d62  mov byte ptr [0x8a74c], al
    X86_AT(c, 0x93d62u);
    wr8((c.sbase[3] + (uint32_t)(0x8A74Cu)), g8(c, 0));
    // 093d67  mov edx, 0xffff
    X86_AT(c, 0x93d67u);
    c.r[2] = 0xFFFFu;
    // 093d6c  mov dword ptr [0x8a750], edx
    X86_AT(c, 0x93d6cu);
    wr32((c.sbase[3] + (uint32_t)(0x8A750u)), c.r[2]);
    // 093d72  mov dword ptr [0x8a754], edx
    X86_AT(c, 0x93d72u);
    wr32((c.sbase[3] + (uint32_t)(0x8A754u)), c.r[2]);
    // 093d78  mov byte ptr [0x8a758], 1
    X86_AT(c, 0x93d78u);
    wr8((c.sbase[3] + (uint32_t)(0x8A758u)), 0x1u);
    // 093d7f  mov edi, eax
    X86_AT(c, 0x93d7fu);
    c.r[7] = c.r[0];
    // 093d81  mov edx, dword ptr [0x8aa7c]
    X86_AT(c, 0x93d81u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093d87  cmp al, byte ptr [edx]
    X86_AT(c, 0x93d87u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0, 1);
    // 093d89  je 0x93f38
    X86_AT(c, 0x93d89u);
    if (x86_cc(c, 4)) { goto L_93f38; }
    X86_TICK(c, 16);
    // 093d8f  mov eax, dword ptr [0x8aa7c]
    X86_AT(c, 0x93d8fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093d94  cmp byte ptr [eax], 0x25
    X86_AT(c, 0x93d94u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x25u, 0, 1);
    // 093d97  je 0x93ddc
    X86_AT(c, 0x93d97u);
    if (x86_cc(c, 4)) { goto L_93ddc; }
    X86_TICK(c, 28);
    // 093d99  mov edx, dword ptr [0x8aa74]
    X86_AT(c, 0x93d99u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8AA74u)));
    // 093d9f  mov al, 0x25
    X86_AT(c, 0x93d9fu);
    s8(c, 0, 0x25u);
    // 093da1  mov ecx, dword ptr [0x8aa7c]
    X86_AT(c, 0x93da1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093da7  push edi
    X86_AT(c, 0x93da7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093da8  mov edi, ecx
    X86_AT(c, 0x93da8u);
    c.r[7] = c.r[1];
    // 093daa  mov ecx, edx
    X86_AT(c, 0x93daau);
    c.r[1] = c.r[2];
    // 093dac  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x93dacu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 093dae  jne 0x93db3
    X86_AT(c, 0x93daeu);
    if (x86_cc(c, 5)) { goto L_93db3; }
    X86_TICK(c, 4);
    // 093db0  inc ecx
    X86_AT(c, 0x93db0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 093db1  sub edx, ecx
    X86_AT(c, 0x93db1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_93db3:
    X86_TICK(c, 41);
    // 093db3  pop edi
    X86_AT(c, 0x93db3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093db4  mov edi, edx
    X86_AT(c, 0x93db4u);
    c.r[7] = c.r[2];
    // 093db6  mov eax, dword ptr [0x8aa7c]
    X86_AT(c, 0x93db6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093dbb  mov dword ptr [0x8aa6c], eax
    X86_AT(c, 0x93dbbu);
    wr32((c.sbase[3] + (uint32_t)(0x8AA6Cu)), c.r[0]);
    // 093dc0  mov dword ptr [0x8aa70], edi
    X86_AT(c, 0x93dc0u);
    wr32((c.sbase[3] + (uint32_t)(0x8AA70u)), c.r[7]);
    // 093dc6  add dword ptr [0x8aa7c], edi
    X86_AT(c, 0x93dc6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA7Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 093dcc  sub dword ptr [0x8aa74], edi
    X86_AT(c, 0x93dccu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA74u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 093dd2  push 0x30
    X86_AT(c, 0x93dd2u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 093dd4  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x93dd4u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 093dd7  call dword ptr [ebp + 0xc]
    X86_AT(c, 0x93dd7u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, 0x93ddau); x86_call(c, t); X86_RET(c, 0x93ddau); }
    X86_TICK(c, 7);
    // 093dda  jmp 0x93d60
    X86_AT(c, 0x93ddau);
    X86_POLL(c, 0x93d60u); goto L_93d60;
L_93ddc:
    X86_TICK(c, 6);
    // 093ddc  mov esi, dword ptr [0x8aa7c]
    X86_AT(c, 0x93ddcu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093de2  sub ebx, ebx
    X86_AT(c, 0x93de2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_93de4:
    X86_TICK(c, 25);
    // 093de4  inc dword ptr [0x8aa7c]
    X86_AT(c, 0x93de4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA7Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 093dea  mov eax, dword ptr [0x8aa7c]
    X86_AT(c, 0x93deau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093def  movzx eax, byte ptr [eax]
    X86_AT(c, 0x93defu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0])));
    // 093df2  sub eax, 0x20
    X86_AT(c, 0x93df2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x20u, 0, 4); }
    // 093df5  cmp eax, 0x10
    X86_AT(c, 0x93df5u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 093df8  ja 0x93e77
    X86_AT(c, 0x93df8u);
    if (x86_cc(c, 7)) { goto L_93e77; }
    X86_TICK(c, 7);
    // 093dfe  jmp dword ptr cs:[eax*4 + 0x93e06]
    X86_AT(c, 0x93dfeu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x93E06u)));
      switch (t) {
      case 0x93e4au: goto L_93e4a;
      case 0x93e53u: goto L_93e53;
      case 0x93e5cu: goto L_93e5c;
      case 0x93e65u: goto L_93e65;
      case 0x93e6eu: goto L_93e6e;
      case 0x93e77u: goto L_93e77;
      default: x86_jump(c, t); return; } }
L_93e4a:
    X86_TICK(c, 14);
    // 093e4a  or byte ptr [0x8a74c], 1
    X86_AT(c, 0x93e4au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A74Cu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
    // 093e51  jmp 0x93e79
    X86_AT(c, 0x93e51u);
    goto L_93e79;
L_93e53:
    X86_TICK(c, 14);
    // 093e53  or byte ptr [0x8a74c], 2
    X86_AT(c, 0x93e53u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A74Cu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 093e5a  jmp 0x93e79
    X86_AT(c, 0x93e5au);
    goto L_93e79;
L_93e5c:
    X86_TICK(c, 14);
    // 093e5c  or byte ptr [0x8a74c], 4
    X86_AT(c, 0x93e5cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A74Cu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 093e63  jmp 0x93e79
    X86_AT(c, 0x93e63u);
    goto L_93e79;
L_93e65:
    X86_TICK(c, 14);
    // 093e65  or byte ptr [0x8a74c], 8
    X86_AT(c, 0x93e65u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A74Cu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
    // 093e6c  jmp 0x93e79
    X86_AT(c, 0x93e6cu);
    goto L_93e79;
L_93e6e:
    X86_TICK(c, 14);
    // 093e6e  or byte ptr [0x8a74c], 0x10
    X86_AT(c, 0x93e6eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A74Cu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
    // 093e75  jmp 0x93e79
    X86_AT(c, 0x93e75u);
    goto L_93e79;
L_93e77:
    X86_TICK(c, 2);
    // 093e77  mov bl, 1
    X86_AT(c, 0x93e77u);
    s8(c, 3, 0x1u);
L_93e79:
    X86_TICK(c, 7);
    // 093e79  and bl, bl
    X86_AT(c, 0x93e79u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 093e7b  je 0x93de4
    X86_AT(c, 0x93e7bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x93de4u); goto L_93de4; }
    X86_TICK(c, 13);
    // 093e81  push 0
    X86_AT(c, 0x93e81u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 093e83  push 0x46
    X86_AT(c, 0x93e83u);
    { uint32_t v = 0x46u; push32(c, v); }
    // 093e85  mov ecx, ebp
    X86_AT(c, 0x93e85u);
    c.r[1] = c.r[5];
    // 093e87  call 0x93c40
    X86_AT(c, 0x93e87u);
    push32(c, 0x93e8cu); x86_call_known(c, 0x93c40u, f_00093c40); X86_RET(c, 0x93e8cu);
    X86_TICK(c, 18);
    // 093e8c  mov dword ptr [0x8a750], eax
    X86_AT(c, 0x93e8cu);
    wr32((c.sbase[3] + (uint32_t)(0x8A750u)), c.r[0]);
    // 093e91  mov eax, dword ptr [0x8aa7c]
    X86_AT(c, 0x93e91u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093e96  cmp byte ptr [eax], 0x2e
    X86_AT(c, 0x93e96u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Eu, 0, 1);
    // 093e99  jne 0x93ed5
    X86_AT(c, 0x93e99u);
    if (x86_cc(c, 5)) { goto L_93ed5; }
    X86_TICK(c, 22);
    // 093e9b  inc dword ptr [0x8aa7c]
    X86_AT(c, 0x93e9bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA7Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 093ea1  mov eax, dword ptr [0x8aa7c]
    X86_AT(c, 0x93ea1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093ea6  cmp byte ptr [eax], 0x2d
    X86_AT(c, 0x93ea6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Du, 0, 1);
    // 093ea9  jne 0x93ec5
    X86_AT(c, 0x93ea9u);
    if (x86_cc(c, 5)) { goto L_93ec5; }
L_93eab:
    X86_TICK(c, 23);
    // 093eab  inc dword ptr [0x8aa7c]
    X86_AT(c, 0x93eabu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA7Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 093eb1  mov eax, dword ptr [0x8aa7c]
    X86_AT(c, 0x93eb1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093eb6  mov al, byte ptr [eax]
    X86_AT(c, 0x93eb6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093eb8  mov byte ptr [ebp - 5], al
    X86_AT(c, 0x93eb8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 093ebb  cmp al, 0x30
    X86_AT(c, 0x93ebbu);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 093ebd  jb 0x93ed5
    X86_AT(c, 0x93ebdu);
    if (x86_cc(c, 2)) { goto L_93ed5; }
    X86_TICK(c, 7);
    // 093ebf  cmp al, 0x39
    X86_AT(c, 0x93ebfu);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 093ec1  jbe 0x93eab
    X86_AT(c, 0x93ec1u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x93eabu); goto L_93eab; }
    X86_TICK(c, 7);
    // 093ec3  jmp 0x93ed5
    X86_AT(c, 0x93ec3u);
    goto L_93ed5;
L_93ec5:
    X86_TICK(c, 13);
    // 093ec5  push 1
    X86_AT(c, 0x93ec5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 093ec7  push 0x50
    X86_AT(c, 0x93ec7u);
    { uint32_t v = 0x50u; push32(c, v); }
    // 093ec9  mov ecx, ebp
    X86_AT(c, 0x93ec9u);
    c.r[1] = c.r[5];
    // 093ecb  call 0x93c40
    X86_AT(c, 0x93ecbu);
    push32(c, 0x93ed0u); x86_call_known(c, 0x93c40u, f_00093c40); X86_RET(c, 0x93ed0u);
    X86_TICK(c, 2);
    // 093ed0  mov dword ptr [0x8a754], eax
    X86_AT(c, 0x93ed0u);
    wr32((c.sbase[3] + (uint32_t)(0x8A754u)), c.r[0]);
L_93ed5:
    X86_TICK(c, 16);
    // 093ed5  mov eax, dword ptr [0x8aa7c]
    X86_AT(c, 0x93ed5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093eda  cmp byte ptr [eax], 0x68
    X86_AT(c, 0x93edau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x68u, 0, 1);
    // 093edd  jne 0x93ee8
    X86_AT(c, 0x93eddu);
    if (x86_cc(c, 5)) { goto L_93ee8; }
    X86_TICK(c, 9);
    // 093edf  mov byte ptr [0x8a758], 0
    X86_AT(c, 0x93edfu);
    wr8((c.sbase[3] + (uint32_t)(0x8A758u)), 0x0u);
    // 093ee6  jmp 0x93f0c
    X86_AT(c, 0x93ee6u);
    goto L_93f0c;
L_93ee8:
    X86_TICK(c, 16);
    // 093ee8  mov eax, dword ptr [0x8aa7c]
    X86_AT(c, 0x93ee8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093eed  cmp byte ptr [eax], 0x6c
    X86_AT(c, 0x93eedu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x6Cu, 0, 1);
    // 093ef0  jne 0x93efb
    X86_AT(c, 0x93ef0u);
    if (x86_cc(c, 5)) { goto L_93efb; }
    X86_TICK(c, 9);
    // 093ef2  mov byte ptr [0x8a758], 2
    X86_AT(c, 0x93ef2u);
    wr8((c.sbase[3] + (uint32_t)(0x8A758u)), 0x2u);
    // 093ef9  jmp 0x93f0c
    X86_AT(c, 0x93ef9u);
    goto L_93f0c;
L_93efb:
    X86_TICK(c, 16);
    // 093efb  mov eax, dword ptr [0x8aa7c]
    X86_AT(c, 0x93efbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093f00  cmp byte ptr [eax], 0x4c
    X86_AT(c, 0x93f00u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x4Cu, 0, 1);
    // 093f03  jne 0x93f12
    X86_AT(c, 0x93f03u);
    if (x86_cc(c, 5)) { goto L_93f12; }
    X86_TICK(c, 2);
    // 093f05  mov byte ptr [0x8a758], 3
    X86_AT(c, 0x93f05u);
    wr8((c.sbase[3] + (uint32_t)(0x8A758u)), 0x3u);
L_93f0c:
    X86_TICK(c, 6);
    // 093f0c  inc dword ptr [0x8aa7c]
    X86_AT(c, 0x93f0cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA7Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_93f12:
    X86_TICK(c, 21);
    // 093f12  mov eax, dword ptr [0x8aa7c]
    X86_AT(c, 0x93f12u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093f17  mov al, byte ptr [eax]
    X86_AT(c, 0x93f17u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093f19  push eax
    X86_AT(c, 0x93f19u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 093f1a  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x93f1au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 093f1d  call dword ptr [ebp + 0xc]
    X86_AT(c, 0x93f1du);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, 0x93f20u); x86_call(c, t); X86_RET(c, 0x93f20u); }
    X86_TICK(c, 26);
    // 093f20  inc dword ptr [0x8aa7c]
    X86_AT(c, 0x93f20u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA7Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 093f26  mov eax, dword ptr [0x8aa7c]
    X86_AT(c, 0x93f26u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8AA7Cu)));
    // 093f2b  sub eax, esi
    X86_AT(c, 0x93f2bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 093f2d  sub dword ptr [0x8aa74], eax
    X86_AT(c, 0x93f2du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8AA74u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 093f33  jmp 0x93d60
    X86_AT(c, 0x93f33u);
    X86_POLL(c, 0x93d60u); goto L_93d60;
L_93f38:
    X86_TICK(c, 28);
    // 093f38  pop edi
    X86_AT(c, 0x93f38u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093f39  pop esi
    X86_AT(c, 0x93f39u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093f3a  pop ebx
    X86_AT(c, 0x93f3au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093f3b  leave 
    X86_AT(c, 0x93f3bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093f3c  ret 0xc
    X86_AT(c, 0x93f3cu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x93d50u, "ran off the end of a function");
}
void f_00093f4c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 093f4c  push ebp
    X86_AT(c, 0x93f4cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093f4d  mov ebp, esp
    X86_AT(c, 0x93f4du);
    c.r[5] = c.r[4];
    // 093f4f  push ecx
    X86_AT(c, 0x93f4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093f50  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x93f50u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093f53  add dword ptr [0x8a75c], ecx
    X86_AT(c, 0x93f53u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A75Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[1], 0, 4)); }
    // 093f59  mov eax, dword ptr [0x8a750]
    X86_AT(c, 0x93f59u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A750u)));
    // 093f5e  cmp eax, 0xffff
    X86_AT(c, 0x93f5eu);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 093f63  je 0x93f6f
    X86_AT(c, 0x93f63u);
    if (x86_cc(c, 4)) { goto L_93f6f; }
    X86_TICK(c, 7);
    // 093f65  cmp ecx, eax
    X86_AT(c, 0x93f65u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 093f67  ja 0x93f6f
    X86_AT(c, 0x93f67u);
    if (x86_cc(c, 7)) { goto L_93f6f; }
    X86_TICK(c, 7);
    // 093f69  sub dword ptr [0x8a750], ecx
    X86_AT(c, 0x93f69u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A750u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
L_93f6f:
    X86_TICK(c, 16);
    // 093f6f  leave 
    X86_AT(c, 0x93f6fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093f70  ret 4
    X86_AT(c, 0x93f70u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x93f4cu, "ran off the end of a function");
}
void f_00093f88(X86Cpu& c) {
    X86_TICK(c, 25);
    // 093f88  push ebp
    X86_AT(c, 0x93f88u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093f89  mov ebp, esp
    X86_AT(c, 0x93f89u);
    c.r[5] = c.r[4];
    // 093f8b  push ecx
    X86_AT(c, 0x93f8bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093f8c  mov dword ptr [0x8aab4], 0
    X86_AT(c, 0x93f8cu);
    wr32((c.sbase[3] + (uint32_t)(0x8AAB4u)), 0x0u);
    // 093f96  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x93f96u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093f99  movzx eax, byte ptr [eax + 0xc]
    X86_AT(c, 0x93f99u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)));
    // 093f9d  cmp eax, 0x69
    X86_AT(c, 0x93f9du);
    (void)x86_sub(c, c.r[0], 0x69u, 0, 4);
    // 093fa0  ja 0x93fba
    X86_AT(c, 0x93fa0u);
    if (x86_cc(c, 7)) { goto L_93fba; }
    X86_TICK(c, 7);
    // 093fa2  cmp eax, 0x69
    X86_AT(c, 0x93fa2u);
    (void)x86_sub(c, c.r[0], 0x69u, 0, 4);
    // 093fa5  je 0x93fd2
    X86_AT(c, 0x93fa5u);
    if (x86_cc(c, 4)) { goto L_93fd2; }
    X86_TICK(c, 7);
    // 093fa7  cmp eax, 0x58
    X86_AT(c, 0x93fa7u);
    (void)x86_sub(c, c.r[0], 0x58u, 0, 4);
    // 093faa  je 0x94041
    X86_AT(c, 0x93faau);
    if (x86_cc(c, 4)) { goto L_94041; }
    X86_TICK(c, 7);
    // 093fb0  cmp eax, 0x64
    X86_AT(c, 0x93fb0u);
    (void)x86_sub(c, c.r[0], 0x64u, 0, 4);
    // 093fb3  je 0x93fd2
    X86_AT(c, 0x93fb3u);
    if (x86_cc(c, 4)) { goto L_93fd2; }
    X86_TICK(c, 7);
    // 093fb5  jmp 0x94075
    X86_AT(c, 0x93fb5u);
    goto L_94075;
L_93fba:
    X86_TICK(c, 7);
    // 093fba  cmp eax, 0x6f
    X86_AT(c, 0x93fbau);
    (void)x86_sub(c, c.r[0], 0x6Fu, 0, 4);
    // 093fbd  je 0x9401c
    X86_AT(c, 0x93fbdu);
    if (x86_cc(c, 4)) { goto L_9401c; }
    X86_TICK(c, 7);
    // 093fbf  cmp eax, 0x75
    X86_AT(c, 0x93fbfu);
    (void)x86_sub(c, c.r[0], 0x75u, 0, 4);
    // 093fc2  je 0x94013
    X86_AT(c, 0x93fc2u);
    if (x86_cc(c, 4)) { goto L_94013; }
    X86_TICK(c, 7);
    // 093fc4  cmp eax, 0x78
    X86_AT(c, 0x93fc4u);
    (void)x86_sub(c, c.r[0], 0x78u, 0, 4);
    // 093fc7  je 0x94041
    X86_AT(c, 0x93fc7u);
    if (x86_cc(c, 4)) { goto L_94041; }
    X86_TICK(c, 7);
    // 093fcd  jmp 0x94075
    X86_AT(c, 0x93fcdu);
    goto L_94075;
L_93fd2:
    X86_TICK(c, 17);
    // 093fd2  mov byte ptr [0x8aaa8], 0xa
    X86_AT(c, 0x93fd2u);
    wr8((c.sbase[3] + (uint32_t)(0x8AAA8u)), 0xAu);
    // 093fd9  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x93fd9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093fdc  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x93fdcu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 093fdf  and edx, edx
    X86_AT(c, 0x93fdfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 093fe1  jge 0x93fef
    X86_AT(c, 0x93fe1u);
    if (x86_cc(c, 13)) { goto L_93fef; }
    X86_TICK(c, 15);
    // 093fe3  neg dword ptr [eax + 8]
    X86_AT(c, 0x93fe3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_neg(c, v, 4)); }
    // 093fe6  mov byte ptr [0x8aaaa], 0x2d
    X86_AT(c, 0x93fe6u);
    wr8((c.sbase[3] + (uint32_t)(0x8AAAAu)), 0x2Du);
    // 093fed  jmp 0x94033
    X86_AT(c, 0x93fedu);
    goto L_94033;
L_93fef:
    X86_TICK(c, 12);
    // 093fef  test byte ptr [0x8a74c], 2
    X86_AT(c, 0x93fefu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x2u, 1);
    // 093ff6  je 0x94001
    X86_AT(c, 0x93ff6u);
    if (x86_cc(c, 4)) { goto L_94001; }
    X86_TICK(c, 9);
    // 093ff8  mov byte ptr [0x8aaaa], 0x2b
    X86_AT(c, 0x93ff8u);
    wr8((c.sbase[3] + (uint32_t)(0x8AAAAu)), 0x2Bu);
    // 093fff  jmp 0x94033
    X86_AT(c, 0x93fffu);
    goto L_94033;
L_94001:
    X86_TICK(c, 12);
    // 094001  test byte ptr [0x8a74c], 4
    X86_AT(c, 0x94001u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x4u, 1);
    // 094008  je 0x94075
    X86_AT(c, 0x94008u);
    if (x86_cc(c, 4)) { goto L_94075; }
    X86_TICK(c, 9);
    // 09400a  mov byte ptr [0x8aaaa], 0x20
    X86_AT(c, 0x9400au);
    wr8((c.sbase[3] + (uint32_t)(0x8AAAAu)), 0x20u);
    // 094011  jmp 0x94033
    X86_AT(c, 0x94011u);
    goto L_94033;
L_94013:
    X86_TICK(c, 9);
    // 094013  mov byte ptr [0x8aaa8], 0xa
    X86_AT(c, 0x94013u);
    wr8((c.sbase[3] + (uint32_t)(0x8AAA8u)), 0xAu);
    // 09401a  jmp 0x94075
    X86_AT(c, 0x9401au);
    goto L_94075;
L_9401c:
    X86_TICK(c, 14);
    // 09401c  mov byte ptr [0x8aaa8], 8
    X86_AT(c, 0x9401cu);
    wr8((c.sbase[3] + (uint32_t)(0x8AAA8u)), 0x8u);
    // 094023  test byte ptr [0x8a74c], 8
    X86_AT(c, 0x94023u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x8u, 1);
    // 09402a  je 0x94075
    X86_AT(c, 0x9402au);
    if (x86_cc(c, 4)) { goto L_94075; }
    X86_TICK(c, 2);
    // 09402c  mov byte ptr [0x8aaaa], 0x30
    X86_AT(c, 0x9402cu);
    wr8((c.sbase[3] + (uint32_t)(0x8AAAAu)), 0x30u);
L_94033:
    X86_TICK(c, 11);
    // 094033  mov dword ptr [0x8aab4], 1
    X86_AT(c, 0x94033u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAB4u)), 0x1u);
    // 09403d  push 1
    X86_AT(c, 0x9403du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 09403f  jmp 0x9406e
    X86_AT(c, 0x9403fu);
    goto L_9406e;
L_94041:
    X86_TICK(c, 14);
    // 094041  mov byte ptr [0x8aaa8], 0x10
    X86_AT(c, 0x94041u);
    wr8((c.sbase[3] + (uint32_t)(0x8AAA8u)), 0x10u);
    // 094048  test byte ptr [0x8a74c], 8
    X86_AT(c, 0x94048u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A74Cu))) & 0x8u, 1);
    // 09404f  je 0x94075
    X86_AT(c, 0x9404fu);
    if (x86_cc(c, 4)) { goto L_94075; }
    X86_TICK(c, 18);
    // 094051  mov byte ptr [0x8aaaa], 0x30
    X86_AT(c, 0x94051u);
    wr8((c.sbase[3] + (uint32_t)(0x8AAAAu)), 0x30u);
    // 094058  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x94058u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 09405b  mov al, byte ptr [eax + 0xc]
    X86_AT(c, 0x9405bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))));
    // 09405e  mov byte ptr [0x8aaab], al
    X86_AT(c, 0x9405eu);
    wr8((c.sbase[3] + (uint32_t)(0x8AAABu)), g8(c, 0));
    // 094063  mov eax, 2
    X86_AT(c, 0x94063u);
    c.r[0] = 0x2u;
    // 094068  mov dword ptr [0x8aab4], eax
    X86_AT(c, 0x94068u);
    wr32((c.sbase[3] + (uint32_t)(0x8AAB4u)), c.r[0]);
    // 09406d  push eax
    X86_AT(c, 0x9406du);
    { uint32_t v = c.r[0]; push32(c, v); }
L_9406e:
    X86_TICK(c, 9);
    // 09406e  mov ecx, ebp
    X86_AT(c, 0x9406eu);
    c.r[1] = c.r[5];
    // 094070  call 0x93f4c
    X86_AT(c, 0x94070u);
    push32(c, 0x94075u); x86_call_known(c, 0x93f4cu, f_00093f4c); X86_RET(c, 0x94075u);
L_94075:
    X86_TICK(c, 16);
    // 094075  leave 
    X86_AT(c, 0x94075u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 094076  ret 
    X86_AT(c, 0x94076u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x93f88u, "ran off the end of a function");
}
}

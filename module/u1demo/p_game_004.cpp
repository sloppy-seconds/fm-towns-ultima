#include "p_game_funcs.h"
namespace p_game {
void f_00092248(X86Cpu& c) {
    X86_TICK(c, 67);
    // 092248  enter 0xc, 0
    X86_AT(c, 0x92248u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 09224c  push ebx
    X86_AT(c, 0x9224cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09224d  push esi
    X86_AT(c, 0x9224du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09224e  push edi
    X86_AT(c, 0x9224eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09224f  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x9224fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 092252  mov esi, dword ptr [ebp + 0x20]
    X86_AT(c, 0x92252u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 092255  mov ax, word ptr [0x8a7de]
    X86_AT(c, 0x92255u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A7DEu))));
    // 09225b  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0x9225bu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 09225f  sub eax, eax
    X86_AT(c, 0x9225fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092261  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x92261u);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
    // 092267  mov ebx, eax
    X86_AT(c, 0x92267u);
    c.r[3] = c.r[0];
    // 092269  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x92269u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 09226c  mov byte ptr [edx], 1
    X86_AT(c, 0x9226cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), 0x1u);
    // 09226f  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x9226fu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 092272  mov byte ptr [edx], al
    X86_AT(c, 0x92272u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 092274  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x92274u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 092277  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92277u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09227a  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0x9227au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 09227d  mov dl, byte ptr [edx]
    X86_AT(c, 0x9227du);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 09227f  mov byte ptr [ebp - 9], dl
    X86_AT(c, 0x9227fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 2));
    // 092282  mov byte ptr [esi], al
    X86_AT(c, 0x92282u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
    // 092284  jmp 0x922fd
    X86_AT(c, 0x92284u);
    goto L_922fd;
L_92289:
    X86_TICK(c, 13);
    // 092289  movzx edx, byte ptr [ebp - 9]
    X86_AT(c, 0x92289u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)));
    // 09228d  cmp edx, 0x2b
    X86_AT(c, 0x9228du);
    (void)x86_sub(c, c.r[2], 0x2Bu, 0, 4);
    // 092290  je 0x922d6
    X86_AT(c, 0x92290u);
    if (x86_cc(c, 4)) { goto L_922d6; }
    X86_TICK(c, 7);
    // 092292  cmp edx, 0x61
    X86_AT(c, 0x92292u);
    (void)x86_sub(c, c.r[2], 0x61u, 0, 4);
    // 092295  je 0x922b0
    X86_AT(c, 0x92295u);
    if (x86_cc(c, 4)) { goto L_922b0; }
    X86_TICK(c, 7);
    // 092297  cmp edx, 0x62
    X86_AT(c, 0x92297u);
    (void)x86_sub(c, c.r[2], 0x62u, 0, 4);
    // 09229a  je 0x922e4
    X86_AT(c, 0x9229au);
    if (x86_cc(c, 4)) { goto L_922e4; }
    X86_TICK(c, 7);
    // 09229c  cmp edx, 0x72
    X86_AT(c, 0x9229cu);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 09229f  je 0x922cb
    X86_AT(c, 0x9229fu);
    if (x86_cc(c, 4)) { goto L_922cb; }
    X86_TICK(c, 7);
    // 0922a1  cmp edx, 0x74
    X86_AT(c, 0x922a1u);
    (void)x86_sub(c, c.r[2], 0x74u, 0, 4);
    // 0922a4  je 0x922ec
    X86_AT(c, 0x922a4u);
    if (x86_cc(c, 4)) { goto L_922ec; }
    X86_TICK(c, 7);
    // 0922a6  cmp edx, 0x75
    X86_AT(c, 0x922a6u);
    (void)x86_sub(c, c.r[2], 0x75u, 0, 4);
    // 0922a9  je 0x922df
    X86_AT(c, 0x922a9u);
    if (x86_cc(c, 4)) { goto L_922df; }
    X86_TICK(c, 7);
    // 0922ab  cmp edx, 0x77
    X86_AT(c, 0x922abu);
    (void)x86_sub(c, c.r[2], 0x77u, 0, 4);
    // 0922ae  jne 0x92307
    X86_AT(c, 0x922aeu);
    if (x86_cc(c, 5)) { goto L_92307; }
L_922b0:
    X86_TICK(c, 7);
    // 0922b0  and bl, bl
    X86_AT(c, 0x922b0u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0922b2  jne 0x92307
    X86_AT(c, 0x922b2u);
    if (x86_cc(c, 5)) { goto L_92307; }
    X86_TICK(c, 33);
    // 0922b4  mov bl, 1
    X86_AT(c, 0x922b4u);
    s8(c, 3, 0x1u);
    // 0922b6  mov byte ptr [edi], bl
    X86_AT(c, 0x922b6u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 3));
    // 0922b8  mov al, byte ptr [ebp - 9]
    X86_AT(c, 0x922b8u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))));
    // 0922bb  cmp al, 0x61
    X86_AT(c, 0x922bbu);
    (void)x86_sub(c, g8(c, 0), 0x61u, 0, 1);
    // 0922bd  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x922bdu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0922c0  sete byte ptr [edx]
    X86_AT(c, 0x922c0u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), x86_cc(c, 4) ? 1u : 0u);
    // 0922c3  cmp al, 0x77
    X86_AT(c, 0x922c3u);
    (void)x86_sub(c, g8(c, 0), 0x77u, 0, 1);
    // 0922c5  sete byte ptr [ebp - 2]
    X86_AT(c, 0x922c5u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), x86_cc(c, 4) ? 1u : 0u);
    // 0922c9  jmp 0x922f2
    X86_AT(c, 0x922c9u);
    goto L_922f2;
L_922cb:
    X86_TICK(c, 7);
    // 0922cb  and bl, bl
    X86_AT(c, 0x922cbu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0922cd  jne 0x92307
    X86_AT(c, 0x922cdu);
    if (x86_cc(c, 5)) { goto L_92307; }
    X86_TICK(c, 11);
    // 0922cf  mov bl, 1
    X86_AT(c, 0x922cfu);
    s8(c, 3, 0x1u);
    // 0922d1  mov byte ptr [edi], 0
    X86_AT(c, 0x922d1u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 0922d4  jmp 0x922f2
    X86_AT(c, 0x922d4u);
    goto L_922f2;
L_922d6:
    X86_TICK(c, 7);
    // 0922d6  and bl, bl
    X86_AT(c, 0x922d6u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 0922d8  je 0x92307
    X86_AT(c, 0x922d8u);
    if (x86_cc(c, 4)) { goto L_92307; }
    X86_TICK(c, 9);
    // 0922da  mov byte ptr [edi], 2
    X86_AT(c, 0x922dau);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x2u);
    // 0922dd  jmp 0x922f2
    X86_AT(c, 0x922ddu);
    goto L_922f2;
L_922df:
    X86_TICK(c, 11);
    // 0922df  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x922dfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0922e2  jmp 0x922e7
    X86_AT(c, 0x922e2u);
    goto L_922e7;
L_922e4:
    X86_TICK(c, 4);
    // 0922e4  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x922e4u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
L_922e7:
    X86_TICK(c, 9);
    // 0922e7  mov byte ptr [eax], 0
    X86_AT(c, 0x922e7u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 0922ea  jmp 0x922f2
    X86_AT(c, 0x922eau);
    goto L_922f2;
L_922ec:
    X86_TICK(c, 6);
    // 0922ec  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x922ecu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0922ef  mov byte ptr [eax], 1
    X86_AT(c, 0x922efu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x1u);
L_922f2:
    X86_TICK(c, 16);
    // 0922f2  inc dword ptr [ebp - 8]
    X86_AT(c, 0x922f2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0922f5  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x922f5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0922f8  mov al, byte ptr [eax]
    X86_AT(c, 0x922f8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0922fa  mov byte ptr [ebp - 9], al
    X86_AT(c, 0x922fau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
L_922fd:
    X86_TICK(c, 12);
    // 0922fd  cmp byte ptr [ebp - 9], 0
    X86_AT(c, 0x922fdu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 092301  jne 0x92289
    X86_AT(c, 0x92301u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x92289u); goto L_92289; }
    X86_TICK(c, 7);
    // 092303  and bl, bl
    X86_AT(c, 0x92303u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 092305  jne 0x92312
    X86_AT(c, 0x92305u);
    if (x86_cc(c, 5)) { goto L_92312; }
L_92307:
    X86_TICK(c, 9);
    // 092307  mov word ptr [0x8a7de], 1
    X86_AT(c, 0x92307u);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), 0x1u);
    // 092310  jmp 0x9236e
    X86_AT(c, 0x92310u);
    goto L_9236e;
L_92312:
    X86_TICK(c, 12);
    // 092312  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x92312u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 092316  jne 0x9232c
    X86_AT(c, 0x92316u);
    if (x86_cc(c, 5)) { goto L_9232c; }
    X86_TICK(c, 29);
    // 092318  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x92318u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 09231b  cmp byte ptr [eax], 0
    X86_AT(c, 0x9231bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 09231e  mov al, byte ptr [edi]
    X86_AT(c, 0x9231eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 092320  push eax
    X86_AT(c, 0x92320u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092321  push dword ptr [ebp + 8]
    X86_AT(c, 0x92321u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092324  call 0x945f0
    X86_AT(c, 0x92324u);
    push32(c, 0x92329u); x86_call_known(c, 0x945f0u, f_000945f0); X86_RET(c, 0x92329u);
    X86_TICK(c, 2);
    // 092329  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x92329u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
L_9232c:
    X86_TICK(c, 16);
    // 09232c  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0x9232cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 09232f  cmp byte ptr [eax], 0
    X86_AT(c, 0x9232fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 092332  je 0x9233e
    X86_AT(c, 0x92332u);
    if (x86_cc(c, 4)) { goto L_9233e; }
    X86_TICK(c, 12);
    // 092334  cmp word ptr [0x8a7de], 2
    X86_AT(c, 0x92334u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A7DEu))), 0x2u, 0, 2);
    // 09233c  je 0x92344
    X86_AT(c, 0x9233cu);
    if (x86_cc(c, 4)) { goto L_92344; }
L_9233e:
    X86_TICK(c, 12);
    // 09233e  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x9233eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 092342  je 0x92364
    X86_AT(c, 0x92342u);
    if (x86_cc(c, 4)) { goto L_92364; }
L_92344:
    X86_TICK(c, 20);
    // 092344  sub eax, eax
    X86_AT(c, 0x92344u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092346  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x92346u);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
    // 09234c  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x9234cu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 09234f  cmp byte ptr [edx], 0
    X86_AT(c, 0x9234fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0x0u, 0, 1);
    // 092352  je 0x92357
    X86_AT(c, 0x92352u);
    if (x86_cc(c, 4)) { goto L_92357; }
    X86_TICK(c, 9);
    // 092354  push eax
    X86_AT(c, 0x92354u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092355  jmp 0x92359
    X86_AT(c, 0x92355u);
    goto L_92359;
L_92357:
    X86_TICK(c, 2);
    // 092357  push 0
    X86_AT(c, 0x92357u);
    { uint32_t v = 0x0u; push32(c, v); }
L_92359:
    X86_TICK(c, 12);
    // 092359  push dword ptr [ebp + 8]
    X86_AT(c, 0x92359u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 09235c  call 0x945c8
    X86_AT(c, 0x9235cu);
    push32(c, 0x92361u); x86_call_known(c, 0x945c8u, f_000945c8); X86_RET(c, 0x92361u);
    X86_TICK(c, 2);
    // 092361  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x92361u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
L_92364:
    X86_TICK(c, 12);
    // 092364  cmp word ptr [0x8a7de], 0
    X86_AT(c, 0x92364u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A7DEu))), 0x0u, 0, 2);
    // 09236c  je 0x92373
    X86_AT(c, 0x9236cu);
    if (x86_cc(c, 4)) { goto L_92373; }
L_9236e:
    X86_TICK(c, 9);
    // 09236e  mov byte ptr [esi], 1
    X86_AT(c, 0x9236eu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), 0x1u);
    // 092371  jmp 0x9237d
    X86_AT(c, 0x92371u);
    goto L_9237d;
L_92373:
    X86_TICK(c, 6);
    // 092373  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0x92373u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 092377  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x92377u);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
L_9237d:
    X86_TICK(c, 32);
    // 09237d  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0x9237du);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 092380  pop edi
    X86_AT(c, 0x92380u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092381  pop esi
    X86_AT(c, 0x92381u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092382  pop ebx
    X86_AT(c, 0x92382u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092383  leave 
    X86_AT(c, 0x92383u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092384  ret 0x1c
    X86_AT(c, 0x92384u);
    c.eip = pop32(c); c.r[4] += 0x1Cu; return;
    x86_fault(c, 0x92248u, "ran off the end of a function");
}
void f_00092398(X86Cpu& c) {
    X86_TICK(c, 15);
    // 092398  enter 4, 0
    X86_AT(c, 0x92398u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 09239c  sub ecx, ecx
    X86_AT(c, 0x9239cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 09239e  jmp 0x923b5
    X86_AT(c, 0x9239eu);
    goto L_923b5;
L_923a0:
    X86_TICK(c, 16);
    // 0923a0  lea eax, [ecx + ecx*4]
    X86_AT(c, 0x923a0u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0923a3  lea eax, [eax*4]
    X86_AT(c, 0x923a3u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0923aa  cmp word ptr [eax + 0x8a58c], 0
    X86_AT(c, 0x923aau);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x8A58Cu))), 0x0u, 0, 2);
    // 0923b2  je 0x923ba
    X86_AT(c, 0x923b2u);
    if (x86_cc(c, 4)) { goto L_923ba; }
    X86_TICK(c, 2);
    // 0923b4  inc ecx
    X86_AT(c, 0x923b4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_923b5:
    X86_TICK(c, 7);
    // 0923b5  cmp ecx, 0x19
    X86_AT(c, 0x923b5u);
    (void)x86_sub(c, c.r[1], 0x19u, 0, 4);
    // 0923b8  jbe 0x923a0
    X86_AT(c, 0x923b8u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x923a0u); goto L_923a0; }
L_923ba:
    X86_TICK(c, 7);
    // 0923ba  cmp ecx, 0x19
    X86_AT(c, 0x923bau);
    (void)x86_sub(c, c.r[1], 0x19u, 0, 4);
    // 0923bd  jbe 0x923d1
    X86_AT(c, 0x923bdu);
    if (x86_cc(c, 6)) { goto L_923d1; }
    X86_TICK(c, 11);
    // 0923bf  mov word ptr [0x8a7de], 4
    X86_AT(c, 0x923bfu);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), 0x4u);
    // 0923c8  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x923c8u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0923cf  jmp 0x923e3
    X86_AT(c, 0x923cfu);
    goto L_923e3;
L_923d1:
    X86_TICK(c, 8);
    // 0923d1  lea eax, [ecx + ecx*4]
    X86_AT(c, 0x923d1u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 0923d4  lea eax, [eax*4]
    X86_AT(c, 0x923d4u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 0923db  add eax, 0x8a580
    X86_AT(c, 0x923dbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8A580u, 0, 4); }
    // 0923e0  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x923e0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_923e3:
    X86_TICK(c, 20);
    // 0923e3  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x923e3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0923e6  leave 
    X86_AT(c, 0x923e6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0923e7  ret 
    X86_AT(c, 0x923e7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92398u, "ran off the end of a function");
}
void f_000923f8(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0923f8  push ebp
    X86_AT(c, 0x923f8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0923f9  mov ebp, esp
    X86_AT(c, 0x923f9u);
    c.r[5] = c.r[4];
    // 0923fb  push ebx
    X86_AT(c, 0x923fbu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0923fc  push edi
    X86_AT(c, 0x923fcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0923fd  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x923fdu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 092400  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x92400u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 092403  mov byte ptr [edi + 0xe], al
    X86_AT(c, 0x92403u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu)), g8(c, 0));
    // 092406  cmp byte ptr [ebp + 0x10], 0
    X86_AT(c, 0x92406u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 09240a  jne 0x92414
    X86_AT(c, 0x9240au);
    if (x86_cc(c, 5)) { goto L_92414; }
    X86_TICK(c, 9);
    // 09240c  mov word ptr [edi + 0xc], 2
    X86_AT(c, 0x9240cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x2u);
    // 092412  jmp 0x92428
    X86_AT(c, 0x92412u);
    goto L_92428;
L_92414:
    X86_TICK(c, 12);
    // 092414  cmp byte ptr [ebp + 0x10], 1
    X86_AT(c, 0x92414u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 092418  jne 0x92422
    X86_AT(c, 0x92418u);
    if (x86_cc(c, 5)) { goto L_92422; }
    X86_TICK(c, 9);
    // 09241a  mov word ptr [edi + 0xc], 4
    X86_AT(c, 0x9241au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x4u);
    // 092420  jmp 0x92428
    X86_AT(c, 0x92420u);
    goto L_92428;
L_92422:
    X86_TICK(c, 2);
    // 092422  mov word ptr [edi + 0xc], 6
    X86_AT(c, 0x92422u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x6u);
L_92428:
    X86_TICK(c, 12);
    // 092428  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0x92428u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 09242c  je 0x92432
    X86_AT(c, 0x9242cu);
    if (x86_cc(c, 4)) { goto L_92432; }
    X86_TICK(c, 7);
    // 09242e  or byte ptr [edi + 0xc], 8
    X86_AT(c, 0x9242eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
L_92432:
    X86_TICK(c, 12);
    // 092432  cmp byte ptr [ebp + 0x18], 0
    X86_AT(c, 0x92432u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 1);
    // 092436  je 0x9243c
    X86_AT(c, 0x92436u);
    if (x86_cc(c, 4)) { goto L_9243c; }
    X86_TICK(c, 7);
    // 092438  or byte ptr [edi + 0xc], 0x40
    X86_AT(c, 0x92438u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_9243c:
    X86_TICK(c, 12);
    // 09243c  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x9243cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 09243f  call 0x94d10
    X86_AT(c, 0x9243fu);
    push32(c, 0x92444u); x86_call_known(c, 0x94d10u, f_00094d10); X86_RET(c, 0x92444u);
    X86_TICK(c, 10);
    // 092444  xchg ebx, eax
    X86_AT(c, 0x92444u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 092445  cmp bl, 1
    X86_AT(c, 0x92445u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 092448  je 0x9244f
    X86_AT(c, 0x92448u);
    if (x86_cc(c, 4)) { goto L_9244f; }
    X86_TICK(c, 7);
    // 09244a  cmp bl, 2
    X86_AT(c, 0x9244au);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 09244d  jne 0x92453
    X86_AT(c, 0x9244du);
    if (x86_cc(c, 5)) { goto L_92453; }
L_9244f:
    X86_TICK(c, 2);
    // 09244f  mov byte ptr [ebp + 0x1c], 0
    X86_AT(c, 0x9244fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), 0x0u);
L_92453:
    X86_TICK(c, 12);
    // 092453  cmp byte ptr [ebp + 0x1c], 0
    X86_AT(c, 0x92453u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))), 0x0u, 0, 1);
    // 092457  je 0x9245d
    X86_AT(c, 0x92457u);
    if (x86_cc(c, 4)) { goto L_9245d; }
    X86_TICK(c, 7);
    // 092459  or byte ptr [edi + 0xc], 1
    X86_AT(c, 0x92459u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_9245d:
    X86_TICK(c, 12);
    // 09245d  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0x9245du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 092461  je 0x9246f
    X86_AT(c, 0x92461u);
    if (x86_cc(c, 4)) { goto L_9246f; }
    X86_TICK(c, 16);
    // 092463  push 2
    X86_AT(c, 0x92463u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 092465  push 0
    X86_AT(c, 0x92465u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 092467  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x92467u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 09246a  call 0x94d58
    X86_AT(c, 0x9246au);
    push32(c, 0x9246fu); x86_call_known(c, 0x94d58u, f_00094d58); X86_RET(c, 0x9246fu);
L_9246f:
    X86_TICK(c, 24);
    // 09246f  pop edi
    X86_AT(c, 0x9246fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092470  pop ebx
    X86_AT(c, 0x92470u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092471  leave 
    X86_AT(c, 0x92471u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092472  ret 0x18
    X86_AT(c, 0x92472u);
    c.eip = pop32(c); c.r[4] += 0x18u; return;
    x86_fault(c, 0x923f8u, "ran off the end of a function");
}
void f_0009247c(X86Cpu& c) {
    X86_TICK(c, 63);
    // 09247c  enter 0xc, 0
    X86_AT(c, 0x9247cu);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 092480  push ebx
    X86_AT(c, 0x92480u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092481  test byte ptr [0x8a80c], 1
    X86_AT(c, 0x92481u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A80Cu))) & 0x1u, 1);
    // 092488  setne al
    X86_AT(c, 0x92488u);
    s8(c, 0, x86_cc(c, 5) ? 1u : 0u);
    // 09248b  xchg ebx, eax
    X86_AT(c, 0x9248bu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 09248c  xor bl, 1
    X86_AT(c, 0x9248cu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ 0x1u, 1)); }
    // 09248f  mov byte ptr [ebp - 8], bl
    X86_AT(c, 0x9248fu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), g8(c, 3));
    // 092492  lea ebx, [ebp - 0xa]
    X86_AT(c, 0x92492u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF6u);
    // 092495  push ebx
    X86_AT(c, 0x92495u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092496  lea eax, [ebp - 8]
    X86_AT(c, 0x92496u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 092499  push eax
    X86_AT(c, 0x92499u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09249a  lea eax, [ebp - 7]
    X86_AT(c, 0x9249au);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF9u);
    // 09249d  push eax
    X86_AT(c, 0x9249du);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09249e  lea eax, [ebp - 6]
    X86_AT(c, 0x9249eu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFAu);
    // 0924a1  push eax
    X86_AT(c, 0x924a1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0924a2  lea eax, [ebp - 5]
    X86_AT(c, 0x924a2u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 0924a5  push eax
    X86_AT(c, 0x924a5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0924a6  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x924a6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0924a9  push dword ptr [ebp + 8]
    X86_AT(c, 0x924a9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0924ac  call 0x92248
    X86_AT(c, 0x924acu);
    push32(c, 0x924b1u); x86_call_known(c, 0x92248u, f_00092248); X86_RET(c, 0x924b1u);
    X86_TICK(c, 14);
    // 0924b1  mov byte ptr [ebp - 9], al
    X86_AT(c, 0x924b1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 0924b4  cmp byte ptr [ebx], 0
    X86_AT(c, 0x924b4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0x0u, 0, 1);
    // 0924b7  je 0x924c2
    X86_AT(c, 0x924b7u);
    if (x86_cc(c, 4)) { goto L_924c2; }
    X86_TICK(c, 9);
    // 0924b9  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x924b9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 0924c0  jmp 0x924ca
    X86_AT(c, 0x924c0u);
    goto L_924ca;
L_924c2:
    X86_TICK(c, 7);
    // 0924c2  call 0x92398
    X86_AT(c, 0x924c2u);
    push32(c, 0x924c7u); x86_call_known(c, 0x92398u, f_00092398); X86_RET(c, 0x924c7u);
    X86_TICK(c, 2);
    // 0924c7  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x924c7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_924ca:
    X86_TICK(c, 12);
    // 0924ca  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x924cau);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 0924ce  je 0x924f5
    X86_AT(c, 0x924ceu);
    if (x86_cc(c, 4)) { goto L_924f5; }
    X86_TICK(c, 37);
    // 0924d0  push dword ptr [ebp - 5]
    X86_AT(c, 0x924d0u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))); push32(c, v); }
    // 0924d3  push dword ptr [ebp - 8]
    X86_AT(c, 0x924d3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 0924d6  push dword ptr [ebp - 7]
    X86_AT(c, 0x924d6u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u))); push32(c, v); }
    // 0924d9  push dword ptr [ebp - 6]
    X86_AT(c, 0x924d9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))); push32(c, v); }
    // 0924dc  push dword ptr [ebp - 9]
    X86_AT(c, 0x924dcu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))); push32(c, v); }
    // 0924df  push dword ptr [ebp - 4]
    X86_AT(c, 0x924dfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 0924e2  call 0x923f8
    X86_AT(c, 0x924e2u);
    push32(c, 0x924e7u); x86_call_known(c, 0x923f8u, f_000923f8); X86_RET(c, 0x924e7u);
    X86_TICK(c, 13);
    // 0924e7  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0x924e7u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0924ea  or byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x924eau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 0924ee  mov dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x924eeu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0xFFFFFFFFu);
L_924f5:
    X86_TICK(c, 24);
    // 0924f5  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x924f5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0924f8  pop ebx
    X86_AT(c, 0x924f8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0924f9  leave 
    X86_AT(c, 0x924f9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0924fa  ret 
    X86_AT(c, 0x924fau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9247cu, "ran off the end of a function");
}
void f_00092510(X86Cpu& c) {
    X86_TICK(c, 44);
    // 092510  enter 0x14, 0
    X86_AT(c, 0x92510u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 092514  push ebx
    X86_AT(c, 0x92514u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092515  push esi
    X86_AT(c, 0x92515u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092516  push edi
    X86_AT(c, 0x92516u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092517  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x92517u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 09251a  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x9251au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 092521  mov ax, word ptr [0x8a7de]
    X86_AT(c, 0x92521u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A7DEu))));
    // 092527  mov word ptr [ebp - 0xa], ax
    X86_AT(c, 0x92527u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), (c.r[0] & 0xFFFFu));
    // 09252b  mov word ptr [0x8a7de], 0
    X86_AT(c, 0x9252bu);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), 0x0u);
    // 092534  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x92534u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 092537  sub esi, esi
    X86_AT(c, 0x92537u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 092539  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x92539u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 09253d  jne 0x925e7
    X86_AT(c, 0x9253du);
    if (x86_cc(c, 5)) { goto L_925e7; }
    X86_TICK(c, 12);
    // 092543  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x92543u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 092547  jne 0x925da
    X86_AT(c, 0x92547u);
    if (x86_cc(c, 5)) { goto L_925da; }
    X86_TICK(c, 20);
    // 09254d  push edi
    X86_AT(c, 0x9254du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09254e  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x9254eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 092551  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92551u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092554  push eax
    X86_AT(c, 0x92554u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092555  call 0x94cac
    X86_AT(c, 0x92555u);
    push32(c, 0x9255au); x86_call_known(c, 0x94cacu, f_00094cac); X86_RET(c, 0x9255au);
    X86_TICK(c, 9);
    // 09255a  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x9255au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 09255d  jmp 0x927cc
    X86_AT(c, 0x9255du);
    goto L_927cc;
L_92562:
    X86_TICK(c, 32);
    // 092562  mov edx, edi
    X86_AT(c, 0x92562u);
    c.r[2] = c.r[7];
    // 092564  mov al, 0xa
    X86_AT(c, 0x92564u);
    s8(c, 0, 0xAu);
    // 092566  mov ecx, esi
    X86_AT(c, 0x92566u);
    c.r[1] = c.r[6];
    // 092568  add ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92568u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 09256b  push edi
    X86_AT(c, 0x9256bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09256c  mov edi, ecx
    X86_AT(c, 0x9256cu);
    c.r[7] = c.r[1];
    // 09256e  mov dword ptr [ebp - 0x14], ecx
    X86_AT(c, 0x9256eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[1]);
    // 092571  mov ecx, edx
    X86_AT(c, 0x92571u);
    c.r[1] = c.r[2];
    // 092573  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92573u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092575  jne 0x9257a
    X86_AT(c, 0x92575u);
    if (x86_cc(c, 5)) { goto L_9257a; }
    X86_TICK(c, 4);
    // 092577  inc ecx
    X86_AT(c, 0x92577u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092578  sub edx, ecx
    X86_AT(c, 0x92578u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_9257a:
    X86_TICK(c, 13);
    // 09257a  pop edi
    X86_AT(c, 0x9257au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09257b  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x9257bu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 09257f  and dx, dx
    X86_AT(c, 0x9257fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & (c.r[2] & 0xFFFFu), 2)); }
    // 092582  je 0x925ac
    X86_AT(c, 0x92582u);
    if (x86_cc(c, 4)) { goto L_925ac; }
    X86_TICK(c, 23);
    // 092584  movsx edx, dx
    X86_AT(c, 0x92584u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 092587  push edx
    X86_AT(c, 0x92587u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 092588  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x92588u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 09258b  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x9258bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 09258e  push eax
    X86_AT(c, 0x9258eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09258f  call 0x94cac
    X86_AT(c, 0x9258fu);
    push32(c, 0x92594u); x86_call_known(c, 0x94cacu, f_00094cac); X86_RET(c, 0x92594u);
    X86_TICK(c, 22);
    // 092594  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0x92594u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 092597  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x92597u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 09259a  movsx edx, word ptr [ebx + 0x10]
    X86_AT(c, 0x9259au);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09259e  cmp edx, eax
    X86_AT(c, 0x9259eu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0925a0  jne 0x927cc
    X86_AT(c, 0x925a0u);
    if (x86_cc(c, 5)) { goto L_927cc; }
    X86_TICK(c, 12);
    // 0925a6  add esi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x925a6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 0925a9  sub edi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x925a9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
L_925ac:
    X86_TICK(c, 7);
    // 0925ac  and edi, edi
    X86_AT(c, 0x925acu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0925ae  jbe 0x925da
    X86_AT(c, 0x925aeu);
    if (x86_cc(c, 6)) { goto L_925da; }
    X86_TICK(c, 23);
    // 0925b0  movzx eax, word ptr [0x8a44c]
    X86_AT(c, 0x925b0u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A44Cu)));
    // 0925b7  push eax
    X86_AT(c, 0x925b7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0925b8  push 0x8a44e
    X86_AT(c, 0x925b8u);
    { uint32_t v = 0x8A44Eu; push32(c, v); }
    // 0925bd  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x925bdu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0925c0  push eax
    X86_AT(c, 0x925c0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0925c1  call 0x94cac
    X86_AT(c, 0x925c1u);
    push32(c, 0x925c6u); x86_call_known(c, 0x94cacu, f_00094cac); X86_RET(c, 0x925c6u);
    X86_TICK(c, 13);
    // 0925c6  movzx edx, word ptr [0x8a44c]
    X86_AT(c, 0x925c6u);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(0x8A44Cu)));
    // 0925cd  cmp edx, eax
    X86_AT(c, 0x925cdu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 0925cf  jne 0x927cc
    X86_AT(c, 0x925cfu);
    if (x86_cc(c, 5)) { goto L_927cc; }
    X86_TICK(c, 10);
    // 0925d5  inc dword ptr [ebp - 4]
    X86_AT(c, 0x925d5u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0925d8  inc esi
    X86_AT(c, 0x925d8u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0925d9  dec edi
    X86_AT(c, 0x925d9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
L_925da:
    X86_TICK(c, 7);
    // 0925da  and edi, edi
    X86_AT(c, 0x925dau);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0925dc  jbe 0x927cc
    X86_AT(c, 0x925dcu);
    if (x86_cc(c, 6)) { goto L_927cc; }
    X86_TICK(c, 7);
    // 0925e2  jmp 0x92562
    X86_AT(c, 0x925e2u);
    X86_POLL(c, 0x92562u); goto L_92562;
L_925e7:
    X86_TICK(c, 12);
    // 0925e7  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x925e7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 0925eb  jne 0x925f4
    X86_AT(c, 0x925ebu);
    if (x86_cc(c, 5)) { goto L_925f4; }
    X86_TICK(c, 2);
    // 0925ed  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0x925edu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
L_925f4:
    X86_TICK(c, 12);
    // 0925f4  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x925f4u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0925f8  jne 0x927c4
    X86_AT(c, 0x925f8u);
    if (x86_cc(c, 5)) { goto L_927c4; }
    X86_TICK(c, 11);
    // 0925fe  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x925feu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092601  cmp eax, 0x200
    X86_AT(c, 0x92601u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 092606  jge 0x92665
    X86_AT(c, 0x92606u);
    if (x86_cc(c, 13)) { goto L_92665; }
    X86_TICK(c, 9);
    // 092608  mov edx, edi
    X86_AT(c, 0x92608u);
    c.r[2] = c.r[7];
    // 09260a  cmp edx, eax
    X86_AT(c, 0x9260au);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 09260c  jl 0x9260f
    X86_AT(c, 0x9260cu);
    if (x86_cc(c, 12)) { goto L_9260f; }
    X86_TICK(c, 3);
    // 09260e  xchg edx, eax
    X86_AT(c, 0x9260eu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_9260f:
    X86_TICK(c, 50);
    // 09260f  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0x9260fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 092612  mov ecx, edx
    X86_AT(c, 0x92612u);
    c.r[1] = c.r[2];
    // 092614  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92614u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092617  mov edx, dword ptr [ebx]
    X86_AT(c, 0x92617u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092619  push esi
    X86_AT(c, 0x92619u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09261a  push edi
    X86_AT(c, 0x9261au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09261b  mov esi, eax
    X86_AT(c, 0x9261bu);
    c.r[6] = c.r[0];
    // 09261d  mov edi, edx
    X86_AT(c, 0x9261du);
    c.r[7] = c.r[2];
    // 09261f  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x9261fu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092621  pop edi
    X86_AT(c, 0x92621u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092622  pop esi
    X86_AT(c, 0x92622u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092623  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x92623u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 092626  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x92626u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 092629  jne 0x92655
    X86_AT(c, 0x92629u);
    if (x86_cc(c, 5)) { goto L_92655; }
    X86_TICK(c, 20);
    // 09262b  push 0x200
    X86_AT(c, 0x9262bu);
    { uint32_t v = 0x200u; push32(c, v); }
    // 092630  push dword ptr [ebx + 8]
    X86_AT(c, 0x92630u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 092633  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92633u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092636  push eax
    X86_AT(c, 0x92636u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092637  call 0x94cac
    X86_AT(c, 0x92637u);
    push32(c, 0x9263cu); x86_call_known(c, 0x94cacu, f_00094cac); X86_RET(c, 0x9263cu);
    X86_TICK(c, 7);
    // 09263c  cmp eax, 0x200
    X86_AT(c, 0x9263cu);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 092641  jne 0x927cc
    X86_AT(c, 0x92641u);
    if (x86_cc(c, 5)) { goto L_927cc; }
    X86_TICK(c, 15);
    // 092647  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0x92647u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
    // 09264e  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x9264eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 092651  mov dword ptr [ebx], eax
    X86_AT(c, 0x92651u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 092653  jmp 0x9265d
    X86_AT(c, 0x92653u);
    goto L_9265d;
L_92655:
    X86_TICK(c, 18);
    // 092655  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x92655u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 092658  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x92658u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 09265b  add dword ptr [ebx], eax
    X86_AT(c, 0x9265bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_9265d:
    X86_TICK(c, 13);
    // 09265d  mov esi, dword ptr [ebp - 8]
    X86_AT(c, 0x9265du);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 092660  sub edi, esi
    X86_AT(c, 0x92660u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 092662  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x92662u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_92665:
    X86_TICK(c, 7);
    // 092665  cmp edi, 0x200
    X86_AT(c, 0x92665u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 09266b  jbe 0x9269b
    X86_AT(c, 0x9266bu);
    if (x86_cc(c, 6)) { goto L_9269b; }
    X86_TICK(c, 35);
    // 09266d  mov eax, edi
    X86_AT(c, 0x9266du);
    c.r[0] = c.r[7];
    // 09266f  shr eax, 9
    X86_AT(c, 0x9266fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 092672  shl eax, 9
    X86_AT(c, 0x92672u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 092675  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x92675u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 092678  push eax
    X86_AT(c, 0x92678u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092679  mov edx, esi
    X86_AT(c, 0x92679u);
    c.r[2] = c.r[6];
    // 09267b  add edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9267bu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 09267e  push edx
    X86_AT(c, 0x9267eu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 09267f  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0x9267fu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092682  push edx
    X86_AT(c, 0x92682u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 092683  call 0x94cac
    X86_AT(c, 0x92683u);
    push32(c, 0x92688u); x86_call_known(c, 0x94cacu, f_00094cac); X86_RET(c, 0x92688u);
    X86_TICK(c, 11);
    // 092688  cmp eax, dword ptr [ebp - 8]
    X86_AT(c, 0x92688u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4);
    // 09268b  jne 0x927cc
    X86_AT(c, 0x9268bu);
    if (x86_cc(c, 5)) { goto L_927cc; }
    X86_TICK(c, 15);
    // 092691  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x92691u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 092694  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x92694u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092697  add esi, eax
    X86_AT(c, 0x92697u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 092699  sub edi, eax
    X86_AT(c, 0x92699u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
L_9269b:
    X86_TICK(c, 7);
    // 09269b  and edi, edi
    X86_AT(c, 0x9269bu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 09269d  jbe 0x927cc
    X86_AT(c, 0x9269du);
    if (x86_cc(c, 6)) { goto L_927cc; }
    X86_TICK(c, 65);
    // 0926a3  mov ecx, edi
    X86_AT(c, 0x926a3u);
    c.r[1] = c.r[7];
    // 0926a5  mov eax, esi
    X86_AT(c, 0x926a5u);
    c.r[0] = c.r[6];
    // 0926a7  add eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x926a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0926aa  mov edx, dword ptr [ebx]
    X86_AT(c, 0x926aau);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0926ac  push esi
    X86_AT(c, 0x926acu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0926ad  push edi
    X86_AT(c, 0x926adu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0926ae  mov esi, eax
    X86_AT(c, 0x926aeu);
    c.r[6] = c.r[0];
    // 0926b0  mov edi, edx
    X86_AT(c, 0x926b0u);
    c.r[7] = c.r[2];
    // 0926b2  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x926b2u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0926b4  pop edi
    X86_AT(c, 0x926b4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0926b5  pop esi
    X86_AT(c, 0x926b5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0926b6  sub dword ptr [ebx + 4], edi
    X86_AT(c, 0x926b6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 0926b9  add dword ptr [ebx], edi
    X86_AT(c, 0x926b9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0926bb  add dword ptr [ebp - 4], edi
    X86_AT(c, 0x926bbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 0926be  jmp 0x927cc
    X86_AT(c, 0x926beu);
    goto L_927cc;
L_926c3:
    X86_TICK(c, 9);
    // 0926c3  mov byte ptr [ebp - 0xc], 0
    X86_AT(c, 0x926c3u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 0926c7  jmp 0x92774
    X86_AT(c, 0x926c7u);
    goto L_92774;
L_926cc:
    X86_TICK(c, 11);
    // 0926cc  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x926ccu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 0926cf  cmp eax, edi
    X86_AT(c, 0x926cfu);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0926d1  jl 0x926d5
    X86_AT(c, 0x926d1u);
    if (x86_cc(c, 12)) { goto L_926d5; }
    X86_TICK(c, 2);
    // 0926d3  mov eax, edi
    X86_AT(c, 0x926d3u);
    c.r[0] = c.r[7];
L_926d5:
    X86_TICK(c, 31);
    // 0926d5  xchg edx, eax
    X86_AT(c, 0x926d5u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 0926d6  mov al, 0xa
    X86_AT(c, 0x926d6u);
    s8(c, 0, 0xAu);
    // 0926d8  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x926d8u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0926db  add ecx, esi
    X86_AT(c, 0x926dbu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[6], 0, 4); }
    // 0926dd  push edi
    X86_AT(c, 0x926ddu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0926de  mov edi, ecx
    X86_AT(c, 0x926deu);
    c.r[7] = c.r[1];
    // 0926e0  mov dword ptr [ebp - 0x14], ecx
    X86_AT(c, 0x926e0u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[1]);
    // 0926e3  mov ecx, edx
    X86_AT(c, 0x926e3u);
    c.r[1] = c.r[2];
    // 0926e5  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x926e5u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0926e7  jne 0x926ec
    X86_AT(c, 0x926e7u);
    if (x86_cc(c, 5)) { goto L_926ec; }
    X86_TICK(c, 4);
    // 0926e9  inc ecx
    X86_AT(c, 0x926e9u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0926ea  sub edx, ecx
    X86_AT(c, 0x926eau);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_926ec:
    X86_TICK(c, 83);
    // 0926ec  pop edi
    X86_AT(c, 0x926ecu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0926ed  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x926edu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 0926f1  mov ecx, edx
    X86_AT(c, 0x926f1u);
    c.r[1] = c.r[2];
    // 0926f3  movsx ecx, cx
    X86_AT(c, 0x926f3u);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[1] & 0xFFFFu);
    // 0926f6  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x926f6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 0926f9  mov edx, dword ptr [ebx]
    X86_AT(c, 0x926f9u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0926fb  push esi
    X86_AT(c, 0x926fbu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0926fc  push edi
    X86_AT(c, 0x926fcu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0926fd  mov esi, eax
    X86_AT(c, 0x926fdu);
    c.r[6] = c.r[0];
    // 0926ff  mov edi, edx
    X86_AT(c, 0x926ffu);
    c.r[7] = c.r[2];
    // 092701  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92701u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092703  pop edi
    X86_AT(c, 0x92703u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092704  pop esi
    X86_AT(c, 0x92704u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092705  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92705u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 092709  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x92709u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 09270c  add esi, eax
    X86_AT(c, 0x9270cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 09270e  add dword ptr [ebx], eax
    X86_AT(c, 0x9270eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092710  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x92710u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 092714  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x92714u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092717  mov ecx, edi
    X86_AT(c, 0x92717u);
    c.r[1] = c.r[7];
    // 092719  cmp ecx, edx
    X86_AT(c, 0x92719u);
    (void)x86_sub(c, c.r[1], c.r[2], 0, 4);
    // 09271b  jl 0x9271f
    X86_AT(c, 0x9271bu);
    if (x86_cc(c, 12)) { goto L_9271f; }
    X86_TICK(c, 2);
    // 09271d  mov ecx, edx
    X86_AT(c, 0x9271du);
    c.r[1] = c.r[2];
L_9271f:
    X86_TICK(c, 7);
    // 09271f  cmp ecx, eax
    X86_AT(c, 0x9271fu);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 092721  jle 0x9276b
    X86_AT(c, 0x92721u);
    if (x86_cc(c, 14)) { goto L_9276b; }
    X86_TICK(c, 15);
    // 092723  sub edx, eax
    X86_AT(c, 0x92723u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092725  movzx eax, word ptr [0x8a44c]
    X86_AT(c, 0x92725u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A44Cu)));
    // 09272c  cmp eax, edx
    X86_AT(c, 0x9272cu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 09272e  jle 0x9273b
    X86_AT(c, 0x9272eu);
    if (x86_cc(c, 14)) { goto L_9273b; }
    X86_TICK(c, 15);
    // 092730  mov eax, dword ptr [ebx]
    X86_AT(c, 0x92730u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092732  mov byte ptr [eax], 0xd
    X86_AT(c, 0x92732u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xDu);
    // 092735  mov byte ptr [ebp - 0xc], 1
    X86_AT(c, 0x92735u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1u);
    // 092739  jmp 0x92753
    X86_AT(c, 0x92739u);
    goto L_92753;
L_9273b:
    X86_TICK(c, 35);
    // 09273b  movzx ecx, word ptr [0x8a44c]
    X86_AT(c, 0x9273bu);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0x8A44Cu)));
    // 092742  mov eax, 0x8a44e
    X86_AT(c, 0x92742u);
    c.r[0] = 0x8A44Eu;
    // 092747  mov edx, dword ptr [ebx]
    X86_AT(c, 0x92747u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 092749  push esi
    X86_AT(c, 0x92749u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09274a  push edi
    X86_AT(c, 0x9274au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09274b  mov esi, eax
    X86_AT(c, 0x9274bu);
    c.r[6] = c.r[0];
    // 09274d  mov edi, edx
    X86_AT(c, 0x9274du);
    c.r[7] = c.r[2];
    // 09274f  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x9274fu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092751  pop edi
    X86_AT(c, 0x92751u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092752  pop esi
    X86_AT(c, 0x92752u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_92753:
    X86_TICK(c, 36);
    // 092753  inc dword ptr [ebp - 4]
    X86_AT(c, 0x92753u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 092756  inc esi
    X86_AT(c, 0x92756u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 092757  dec edi
    X86_AT(c, 0x92757u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 092758  movzx eax, word ptr [0x8a44c]
    X86_AT(c, 0x92758u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A44Cu)));
    // 09275f  add dword ptr [ebx], eax
    X86_AT(c, 0x9275fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092761  movzx eax, word ptr [0x8a44c]
    X86_AT(c, 0x92761u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A44Cu)));
    // 092768  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x92768u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_9276b:
    X86_TICK(c, 15);
    // 09276b  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x9276bu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 09276f  sub edi, eax
    X86_AT(c, 0x9276fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092771  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x92771u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_92774:
    X86_TICK(c, 12);
    // 092774  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x92774u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 092778  jle 0x92782
    X86_AT(c, 0x92778u);
    if (x86_cc(c, 14)) { goto L_92782; }
    X86_TICK(c, 7);
    // 09277a  and edi, edi
    X86_AT(c, 0x9277au);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 09277c  ja 0x926cc
    X86_AT(c, 0x9277cu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x926ccu); goto L_926cc; }
L_92782:
    X86_TICK(c, 7);
    // 092782  and edi, edi
    X86_AT(c, 0x92782u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092784  ja 0x92790
    X86_AT(c, 0x92784u);
    if (x86_cc(c, 7)) { goto L_92790; }
    X86_TICK(c, 7);
    // 092786  and edi, edi
    X86_AT(c, 0x92786u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 092788  jne 0x927b4
    X86_AT(c, 0x92788u);
    if (x86_cc(c, 5)) { goto L_927b4; }
    X86_TICK(c, 12);
    // 09278a  cmp byte ptr [ebp - 0xc], 0
    X86_AT(c, 0x9278au);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 1);
    // 09278e  je 0x927b4
    X86_AT(c, 0x9278eu);
    if (x86_cc(c, 4)) { goto L_927b4; }
L_92790:
    X86_TICK(c, 20);
    // 092790  push 0x200
    X86_AT(c, 0x92790u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 092795  push dword ptr [ebx + 8]
    X86_AT(c, 0x92795u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 092798  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92798u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 09279b  push eax
    X86_AT(c, 0x9279bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09279c  call 0x94cac
    X86_AT(c, 0x9279cu);
    push32(c, 0x927a1u); x86_call_known(c, 0x94cacu, f_00094cac); X86_RET(c, 0x927a1u);
    X86_TICK(c, 7);
    // 0927a1  cmp eax, 0x200
    X86_AT(c, 0x927a1u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 0927a6  jne 0x927cc
    X86_AT(c, 0x927a6u);
    if (x86_cc(c, 5)) { goto L_927cc; }
    X86_TICK(c, 8);
    // 0927a8  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0x927a8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
    // 0927af  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x927afu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0927b2  mov dword ptr [ebx], eax
    X86_AT(c, 0x927b2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_927b4:
    X86_TICK(c, 12);
    // 0927b4  cmp byte ptr [ebp - 0xc], 0
    X86_AT(c, 0x927b4u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 1);
    // 0927b8  je 0x927c4
    X86_AT(c, 0x927b8u);
    if (x86_cc(c, 4)) { goto L_927c4; }
    X86_TICK(c, 18);
    // 0927ba  mov eax, dword ptr [ebx]
    X86_AT(c, 0x927bau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0927bc  mov byte ptr [eax], 0xa
    X86_AT(c, 0x927bcu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xAu);
    // 0927bf  inc dword ptr [ebx]
    X86_AT(c, 0x927bfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0927c1  dec dword ptr [ebx + 4]
    X86_AT(c, 0x927c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_927c4:
    X86_TICK(c, 7);
    // 0927c4  and edi, edi
    X86_AT(c, 0x927c4u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0927c6  ja 0x926c3
    X86_AT(c, 0x927c6u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x926c3u); goto L_926c3; }
L_927cc:
    X86_TICK(c, 12);
    // 0927cc  cmp word ptr [0x8a7de], 0
    X86_AT(c, 0x927ccu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A7DEu))), 0x0u, 0, 2);
    // 0927d4  je 0x927dc
    X86_AT(c, 0x927d4u);
    if (x86_cc(c, 4)) { goto L_927dc; }
    X86_TICK(c, 14);
    // 0927d6  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x927d6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0927da  jmp 0x927e6
    X86_AT(c, 0x927dau);
    goto L_927e6;
L_927dc:
    X86_TICK(c, 6);
    // 0927dc  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0x927dcu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 0927e0  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x927e0u);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
L_927e6:
    X86_TICK(c, 32);
    // 0927e6  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x927e6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0927e9  pop edi
    X86_AT(c, 0x927e9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0927ea  pop esi
    X86_AT(c, 0x927eau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0927eb  pop ebx
    X86_AT(c, 0x927ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0927ec  leave 
    X86_AT(c, 0x927ecu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0927ed  ret 0xc
    X86_AT(c, 0x927edu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x92510u, "ran off the end of a function");
}
void f_000927cc(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0927cc  cmp word ptr [0x8a7de], 0
    X86_AT(c, 0x927ccu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A7DEu))), 0x0u, 0, 2);
    // 0927d4  je 0x927dc
    X86_AT(c, 0x927d4u);
    if (x86_cc(c, 4)) { goto L_927dc; }
    X86_TICK(c, 14);
    // 0927d6  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x927d6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 0927da  jmp 0x927e6
    X86_AT(c, 0x927dau);
    goto L_927e6;
L_927dc:
    X86_TICK(c, 6);
    // 0927dc  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0x927dcu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 0927e0  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x927e0u);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
L_927e6:
    X86_TICK(c, 32);
    // 0927e6  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x927e6u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 0927e9  pop edi
    X86_AT(c, 0x927e9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0927ea  pop esi
    X86_AT(c, 0x927eau);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0927eb  pop ebx
    X86_AT(c, 0x927ebu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0927ec  leave 
    X86_AT(c, 0x927ecu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0927ed  ret 0xc
    X86_AT(c, 0x927edu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x927ccu, "ran off the end of a function");
}
void f_000927f8(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0927f8  enter 4, 0
    X86_AT(c, 0x927f8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0927fc  push ebx
    X86_AT(c, 0x927fcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0927fd  push esi
    X86_AT(c, 0x927fdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0927fe  push edi
    X86_AT(c, 0x927feu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0927ff  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x927ffu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 092802  mov ebx, edi
    X86_AT(c, 0x92802u);
    c.r[3] = c.r[7];
    // 092804  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x92804u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 092808  jne 0x9281a
    X86_AT(c, 0x92808u);
    if (x86_cc(c, 5)) { goto L_9281a; }
    X86_TICK(c, 18);
    // 09280a  mov ax, 5
    X86_AT(c, 0x9280au);
    s16(c, 0, 0x5u);
    // 09280e  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x9280eu);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
    // 092814  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x92814u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 092818  jmp 0x9284d
    X86_AT(c, 0x92818u);
    goto L_9284d;
L_9281a:
    X86_TICK(c, 12);
    // 09281a  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x9281au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 09281e  je 0x92826
    X86_AT(c, 0x9281eu);
    if (x86_cc(c, 4)) { goto L_92826; }
    X86_TICK(c, 9);
    // 092820  push edi
    X86_AT(c, 0x92820u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092821  call 0x93780
    X86_AT(c, 0x92821u);
    push32(c, 0x92826u); x86_call_known(c, 0x93780u, f_00093780); X86_RET(c, 0x92826u);
L_92826:
    X86_TICK(c, 43);
    // 092826  or byte ptr [ebx + 0xd], 8
    X86_AT(c, 0x92826u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
    // 09282a  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x9282au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 09282d  imul eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x9282du);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 092831  xchg esi, eax
    X86_AT(c, 0x92831u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 092832  and esi, esi
    X86_AT(c, 0x92832u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092834  jl 0x9283e
    X86_AT(c, 0x92834u);
    if (x86_cc(c, 12)) { goto L_9283e; }
    X86_TICK(c, 7);
    // 092836  cmp esi, 0x7fffffff
    X86_AT(c, 0x92836u);
    (void)x86_sub(c, c.r[6], 0x7FFFFFFFu, 0, 4);
    // 09283c  jle 0x92849
    X86_AT(c, 0x9283cu);
    if (x86_cc(c, 14)) { goto L_92849; }
L_9283e:
    X86_TICK(c, 9);
    // 09283e  mov word ptr [0x8a7de], 1
    X86_AT(c, 0x9283eu);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), 0x1u);
    // 092847  jmp 0x9284d
    X86_AT(c, 0x92847u);
    goto L_9284d;
L_92849:
    X86_TICK(c, 7);
    // 092849  and esi, esi
    X86_AT(c, 0x92849u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 09284b  jne 0x92851
    X86_AT(c, 0x9284bu);
    if (x86_cc(c, 5)) { goto L_92851; }
L_9284d:
    X86_TICK(c, 9);
    // 09284d  sub eax, eax
    X86_AT(c, 0x9284du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 09284f  jmp 0x92892
    X86_AT(c, 0x9284fu);
    goto L_92892;
L_92851:
    X86_TICK(c, 12);
    // 092851  test byte ptr [ebx + 0xc], 8
    X86_AT(c, 0x92851u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x8u, 1);
    // 092855  je 0x92864
    X86_AT(c, 0x92855u);
    if (x86_cc(c, 4)) { goto L_92864; }
    X86_TICK(c, 17);
    // 092857  push 2
    X86_AT(c, 0x92857u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 092859  push 0
    X86_AT(c, 0x92859u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 09285b  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x9285bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 09285e  push eax
    X86_AT(c, 0x9285eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09285f  call 0x94d58
    X86_AT(c, 0x9285fu);
    push32(c, 0x92864u); x86_call_known(c, 0x94d58u, f_00094d58); X86_RET(c, 0x92864u);
L_92864:
    X86_TICK(c, 16);
    // 092864  push esi
    X86_AT(c, 0x92864u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092865  push dword ptr [ebp + 8]
    X86_AT(c, 0x92865u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092868  push edi
    X86_AT(c, 0x92868u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092869  call 0x92510
    X86_AT(c, 0x92869u);
    push32(c, 0x9286eu); x86_call_known(c, 0x92510u, f_00092510); X86_RET(c, 0x9286eu);
    X86_TICK(c, 56);
    // 09286e  cdq 
    X86_AT(c, 0x9286eu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 09286f  idiv dword ptr [ebp + 0xc]
    X86_AT(c, 0x9286fu);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 4, 0x9286fu);
    // 092872  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92872u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 092875  test byte ptr [ebx + 0xc], 8
    X86_AT(c, 0x92875u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x8u, 1);
    // 092879  je 0x9288f
    X86_AT(c, 0x92879u);
    if (x86_cc(c, 4)) { goto L_9288f; }
    X86_TICK(c, 9);
    // 09287b  push edi
    X86_AT(c, 0x9287bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09287c  call 0x928ac
    X86_AT(c, 0x9287cu);
    push32(c, 0x92881u); x86_call_known(c, 0x928acu, f_000928ac); X86_RET(c, 0x92881u);
    X86_TICK(c, 21);
    // 092881  pop ecx
    X86_AT(c, 0x92881u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 092882  push 2
    X86_AT(c, 0x92882u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 092884  push 0
    X86_AT(c, 0x92884u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 092886  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92886u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092889  push eax
    X86_AT(c, 0x92889u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09288a  call 0x94d58
    X86_AT(c, 0x9288au);
    push32(c, 0x9288fu); x86_call_known(c, 0x94d58u, f_00094d58); X86_RET(c, 0x9288fu);
L_9288f:
    X86_TICK(c, 4);
    // 09288f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x9288fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_92892:
    X86_TICK(c, 28);
    // 092892  pop edi
    X86_AT(c, 0x92892u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092893  pop esi
    X86_AT(c, 0x92893u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092894  pop ebx
    X86_AT(c, 0x92894u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092895  leave 
    X86_AT(c, 0x92895u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092896  ret 
    X86_AT(c, 0x92896u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x927f8u, "ran off the end of a function");
}
void f_000928ac(X86Cpu& c) {
    X86_TICK(c, 24);
    // 0928ac  enter 4, 0
    X86_AT(c, 0x928acu);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0928b0  push edi
    X86_AT(c, 0x928b0u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0928b1  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x928b1u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0928b4  test byte ptr [edi + 0xc], 4
    X86_AT(c, 0x928b4u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x4u, 1);
    // 0928b8  jne 0x928d1
    X86_AT(c, 0x928b8u);
    if (x86_cc(c, 5)) { goto L_928d1; }
    X86_TICK(c, 15);
    // 0928ba  mov ax, 1
    X86_AT(c, 0x928bau);
    s16(c, 0, 0x1u);
    // 0928be  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x928beu);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
    // 0928c4  mov eax, 1
    X86_AT(c, 0x928c4u);
    c.r[0] = 0x1u;
    // 0928c9  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x928c9u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0928cc  jmp 0x92968
    X86_AT(c, 0x928ccu);
    goto L_92968;
L_928d1:
    X86_TICK(c, 12);
    // 0928d1  test byte ptr [edi + 0xd], 8
    X86_AT(c, 0x928d1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))) & 0x8u, 1);
    // 0928d5  je 0x928e3
    X86_AT(c, 0x928d5u);
    if (x86_cc(c, 4)) { goto L_928e3; }
    X86_TICK(c, 12);
    // 0928d7  cmp dword ptr [edi + 4], 0xffffffff
    X86_AT(c, 0x928d7u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 0928db  je 0x928e3
    X86_AT(c, 0x928dbu);
    if (x86_cc(c, 4)) { goto L_928e3; }
    X86_TICK(c, 12);
    // 0928dd  test byte ptr [edi + 0xc], 0x80
    X86_AT(c, 0x928ddu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x80u, 1);
    // 0928e1  je 0x928ea
    X86_AT(c, 0x928e1u);
    if (x86_cc(c, 4)) { goto L_928ea; }
L_928e3:
    X86_TICK(c, 9);
    // 0928e3  sub eax, eax
    X86_AT(c, 0x928e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0928e5  jmp 0x9296b
    X86_AT(c, 0x928e5u);
    goto L_9296b;
L_928ea:
    X86_TICK(c, 12);
    // 0928ea  test byte ptr [edi + 0xc], 1
    X86_AT(c, 0x928eau);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x1u, 1);
    // 0928ee  je 0x92961
    X86_AT(c, 0x928eeu);
    if (x86_cc(c, 4)) { goto L_92961; }
    X86_TICK(c, 12);
    // 0928f4  cmp dword ptr [edi + 4], 0x200
    X86_AT(c, 0x928f4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0x200u, 0, 4);
    // 0928fb  jge 0x92961
    X86_AT(c, 0x928fbu);
    if (x86_cc(c, 13)) { goto L_92961; }
    X86_TICK(c, 12);
    // 0928fd  test byte ptr [edi + 0xc], 8
    X86_AT(c, 0x928fdu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x8u, 1);
    // 092901  je 0x92910
    X86_AT(c, 0x92901u);
    if (x86_cc(c, 4)) { goto L_92910; }
    X86_TICK(c, 17);
    // 092903  push 2
    X86_AT(c, 0x92903u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 092905  push 0
    X86_AT(c, 0x92905u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 092907  mov al, byte ptr [edi + 0xe]
    X86_AT(c, 0x92907u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu))));
    // 09290a  push eax
    X86_AT(c, 0x9290au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09290b  call 0x94d58
    X86_AT(c, 0x9290bu);
    push32(c, 0x92910u); x86_call_known(c, 0x94d58u, f_00094d58); X86_RET(c, 0x92910u);
L_92910:
    X86_TICK(c, 28);
    // 092910  mov eax, 0x200
    X86_AT(c, 0x92910u);
    c.r[0] = 0x200u;
    // 092915  sub eax, dword ptr [edi + 4]
    X86_AT(c, 0x92915u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4); }
    // 092918  push eax
    X86_AT(c, 0x92918u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092919  push dword ptr [edi + 8]
    X86_AT(c, 0x92919u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))); push32(c, v); }
    // 09291c  mov al, byte ptr [edi + 0xe]
    X86_AT(c, 0x9291cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu))));
    // 09291f  push eax
    X86_AT(c, 0x9291fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092920  call 0x94cac
    X86_AT(c, 0x92920u);
    push32(c, 0x92925u); x86_call_known(c, 0x94cacu, f_00094cac); X86_RET(c, 0x92925u);
    X86_TICK(c, 17);
    // 092925  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92925u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 092928  mov edx, 0x200
    X86_AT(c, 0x92928u);
    c.r[2] = 0x200u;
    // 09292d  sub edx, dword ptr [edi + 4]
    X86_AT(c, 0x9292du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4); }
    // 092930  cmp edx, eax
    X86_AT(c, 0x92930u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 092932  jne 0x9293d
    X86_AT(c, 0x92932u);
    if (x86_cc(c, 5)) { goto L_9293d; }
    X86_TICK(c, 9);
    // 092934  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x92934u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 09293b  jmp 0x92953
    X86_AT(c, 0x9293bu);
    goto L_92953;
L_9293d:
    X86_TICK(c, 15);
    // 09293d  mov ax, 0x15
    X86_AT(c, 0x9293du);
    s16(c, 0, 0x15u);
    // 092941  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x92941u);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
    // 092947  mov eax, 0x15
    X86_AT(c, 0x92947u);
    c.r[0] = 0x15u;
    // 09294c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x9294cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 09294f  or byte ptr [edi + 0xc], 0x20
    X86_AT(c, 0x9294fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
L_92953:
    X86_TICK(c, 15);
    // 092953  mov eax, dword ptr [edi + 8]
    X86_AT(c, 0x92953u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 092956  mov dword ptr [edi], eax
    X86_AT(c, 0x92956u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 092958  mov dword ptr [edi + 4], 0x200
    X86_AT(c, 0x92958u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), 0x200u);
    // 09295f  jmp 0x92968
    X86_AT(c, 0x9295fu);
    goto L_92968;
L_92961:
    X86_TICK(c, 2);
    // 092961  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x92961u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_92968:
    X86_TICK(c, 4);
    // 092968  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92968u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_9296b:
    X86_TICK(c, 20);
    // 09296b  pop edi
    X86_AT(c, 0x9296bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09296c  leave 
    X86_AT(c, 0x9296cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09296d  ret 
    X86_AT(c, 0x9296du);
    c.eip = pop32(c); return;
    x86_fault(c, 0x928acu, "ran off the end of a function");
}
void f_00092978(X86Cpu& c) {
    X86_TICK(c, 80);
    // 092978  enter 4, 0
    X86_AT(c, 0x92978u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 09297c  push ebx
    X86_AT(c, 0x9297cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 09297d  push esi
    X86_AT(c, 0x9297du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 09297e  push edi
    X86_AT(c, 0x9297eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 09297f  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x9297fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 092982  sub eax, eax
    X86_AT(c, 0x92982u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092984  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92984u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 092987  mov eax, edi
    X86_AT(c, 0x92987u);
    c.r[0] = c.r[7];
    // 092989  mov edx, 0x8a580
    X86_AT(c, 0x92989u);
    c.r[2] = 0x8A580u;
    // 09298e  sub eax, edx
    X86_AT(c, 0x9298eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 092990  cdq 
    X86_AT(c, 0x92990u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 092991  mov ecx, 0x12
    X86_AT(c, 0x92991u);
    c.r[1] = 0x12u;
    // 092996  idiv ecx
    X86_AT(c, 0x92996u);
    x86_idiv(c, c.r[1], 4, 0x92996u);
    // 092998  xchg esi, eax
    X86_AT(c, 0x92998u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 092999  and esi, esi
    X86_AT(c, 0x92999u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 09299b  jl 0x929ef
    X86_AT(c, 0x9299bu);
    if (x86_cc(c, 12)) { goto L_929ef; }
    X86_TICK(c, 7);
    // 09299d  cmp esi, 0x19
    X86_AT(c, 0x9299du);
    (void)x86_sub(c, c.r[6], 0x19u, 0, 4);
    // 0929a0  jg 0x929ef
    X86_AT(c, 0x929a0u);
    if (x86_cc(c, 15)) { goto L_929ef; }
    X86_TICK(c, 12);
    // 0929a2  cmp word ptr [edi + 0xc], 0
    X86_AT(c, 0x929a2u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))), 0x0u, 0, 2);
    // 0929a7  je 0x929ef
    X86_AT(c, 0x929a7u);
    if (x86_cc(c, 4)) { goto L_929ef; }
    X86_TICK(c, 14);
    // 0929a9  mov ebx, edi
    X86_AT(c, 0x929a9u);
    c.r[3] = c.r[7];
    // 0929ab  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x929abu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 0929af  je 0x929de
    X86_AT(c, 0x929afu);
    if (x86_cc(c, 4)) { goto L_929de; }
    X86_TICK(c, 12);
    // 0929b1  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x929b1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 0929b5  je 0x929c3
    X86_AT(c, 0x929b5u);
    if (x86_cc(c, 4)) { goto L_929c3; }
    X86_TICK(c, 9);
    // 0929b7  push edi
    X86_AT(c, 0x929b7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0929b8  call 0x928ac
    X86_AT(c, 0x929b8u);
    push32(c, 0x929bdu); x86_call_known(c, 0x928acu, f_000928ac); X86_RET(c, 0x929bdu);
    X86_TICK(c, 13);
    // 0929bd  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x929bdu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0929c0  pop ecx
    X86_AT(c, 0x929c0u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0929c1  jmp 0x929c9
    X86_AT(c, 0x929c1u);
    goto L_929c9;
L_929c3:
    X86_TICK(c, 12);
    // 0929c3  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x929c3u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 0929c7  je 0x929ef
    X86_AT(c, 0x929c7u);
    if (x86_cc(c, 4)) { goto L_929ef; }
L_929c9:
    X86_TICK(c, 12);
    // 0929c9  test byte ptr [ebx + 0xd], 1
    X86_AT(c, 0x929c9u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x1u, 1);
    // 0929cd  jne 0x929de
    X86_AT(c, 0x929cdu);
    if (x86_cc(c, 5)) { goto L_929de; }
    X86_TICK(c, 12);
    // 0929cf  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x929cfu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 0929d3  jne 0x929de
    X86_AT(c, 0x929d3u);
    if (x86_cc(c, 5)) { goto L_929de; }
    X86_TICK(c, 12);
    // 0929d5  push dword ptr [ebx + 8]
    X86_AT(c, 0x929d5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0929d8  call 0x92e3c
    X86_AT(c, 0x929d8u);
    push32(c, 0x929ddu); x86_call_known(c, 0x92e3cu, f_00092e3c); X86_RET(c, 0x929ddu);
    X86_TICK(c, 4);
    // 0929dd  pop ecx
    X86_AT(c, 0x929ddu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_929de:
    X86_TICK(c, 13);
    // 0929de  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x929deu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0929e1  push eax
    X86_AT(c, 0x929e1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0929e2  call 0x94550
    X86_AT(c, 0x929e2u);
    push32(c, 0x929e7u); x86_call_known(c, 0x94550u, f_00094550); X86_RET(c, 0x929e7u);
    X86_TICK(c, 9);
    // 0929e7  mov word ptr [ebx + 0xc], 0
    X86_AT(c, 0x929e7u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), 0x0u);
    // 0929ed  jmp 0x92a01
    X86_AT(c, 0x929edu);
    goto L_92a01;
L_929ef:
    X86_TICK(c, 8);
    // 0929ef  mov ax, 6
    X86_AT(c, 0x929efu);
    s16(c, 0, 0x6u);
    // 0929f3  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x929f3u);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
    // 0929f9  mov eax, 6
    X86_AT(c, 0x929f9u);
    c.r[0] = 0x6u;
    // 0929fe  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x929feu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_92a01:
    X86_TICK(c, 32);
    // 092a01  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92a01u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092a04  pop edi
    X86_AT(c, 0x92a04u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092a05  pop esi
    X86_AT(c, 0x92a05u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092a06  pop ebx
    X86_AT(c, 0x92a06u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092a07  leave 
    X86_AT(c, 0x92a07u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092a08  ret 
    X86_AT(c, 0x92a08u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92978u, "ran off the end of a function");
}
void f_00092a18(X86Cpu& c) {
    X86_TICK(c, 4);
    // 092a18  push edi
    X86_AT(c, 0x92a18u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092a19  sub edi, edi
    X86_AT(c, 0x92a19u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_92a1b:
    X86_TICK(c, 16);
    // 092a1b  lea eax, [edi + edi*4]
    X86_AT(c, 0x92a1bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 092a1e  lea eax, [eax*4]
    X86_AT(c, 0x92a1eu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 092a25  test byte ptr [eax + 0x8a58c], 6
    X86_AT(c, 0x92a25u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x8A58Cu))) & 0x6u, 1);
    // 092a2c  je 0x92a42
    X86_AT(c, 0x92a2cu);
    if (x86_cc(c, 4)) { goto L_92a42; }
    X86_TICK(c, 13);
    // 092a2e  add eax, 0x8a580
    X86_AT(c, 0x92a2eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x8A580u, 0, 4); }
    // 092a33  cmp eax, dword ptr [0x8a45c]
    X86_AT(c, 0x92a33u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A45Cu))), 0, 4);
    // 092a39  je 0x92a42
    X86_AT(c, 0x92a39u);
    if (x86_cc(c, 4)) { goto L_92a42; }
    X86_TICK(c, 9);
    // 092a3b  push eax
    X86_AT(c, 0x92a3bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092a3c  call 0x92978
    X86_AT(c, 0x92a3cu);
    push32(c, 0x92a41u); x86_call_known(c, 0x92978u, f_00092978); X86_RET(c, 0x92a41u);
    X86_TICK(c, 4);
    // 092a41  pop ecx
    X86_AT(c, 0x92a41u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_92a42:
    X86_TICK(c, 7);
    // 092a42  cmp edi, 0x19
    X86_AT(c, 0x92a42u);
    (void)x86_sub(c, c.r[7], 0x19u, 0, 4);
    // 092a45  jae 0x92a4a
    X86_AT(c, 0x92a45u);
    if (x86_cc(c, 3)) { goto L_92a4a; }
    X86_TICK(c, 9);
    // 092a47  inc edi
    X86_AT(c, 0x92a47u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 092a48  jmp 0x92a1b
    X86_AT(c, 0x92a48u);
    X86_POLL(c, 0x92a1bu); goto L_92a1b;
L_92a4a:
    X86_TICK(c, 12);
    // 092a4a  push dword ptr [0x8a45c]
    X86_AT(c, 0x92a4au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A45Cu))); push32(c, v); }
    // 092a50  call 0x92978
    X86_AT(c, 0x92a50u);
    push32(c, 0x92a55u); x86_call_known(c, 0x92978u, f_00092978); X86_RET(c, 0x92a55u);
    X86_TICK(c, 18);
    // 092a55  pop ecx
    X86_AT(c, 0x92a55u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 092a56  pop edi
    X86_AT(c, 0x92a56u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092a57  ret 
    X86_AT(c, 0x92a57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92a18u, "ran off the end of a function");
}
void f_00092a68(X86Cpu& c) {
    X86_TICK(c, 26);
    // 092a68  enter 4, 0
    X86_AT(c, 0x92a68u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 092a6c  push dword ptr [ebp + 8]
    X86_AT(c, 0x92a6cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092a6f  push 1
    X86_AT(c, 0x92a6fu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092a71  push 1
    X86_AT(c, 0x92a71u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092a73  lea eax, [ebp - 1]
    X86_AT(c, 0x92a73u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 092a76  push eax
    X86_AT(c, 0x92a76u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092a77  call 0x921a0
    X86_AT(c, 0x92a77u);
    push32(c, 0x92a7cu); x86_call_known(c, 0x921a0u, f_000921a0); X86_RET(c, 0x92a7cu);
    X86_TICK(c, 9);
    // 092a7c  add esp, 0x10
    X86_AT(c, 0x92a7cu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 092a7f  and eax, eax
    X86_AT(c, 0x92a7fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 092a81  jne 0x92a8a
    X86_AT(c, 0x92a81u);
    if (x86_cc(c, 5)) { goto L_92a8a; }
    X86_TICK(c, 9);
    // 092a83  mov eax, 0xffffffff
    X86_AT(c, 0x92a83u);
    c.r[0] = 0xFFFFFFFFu;
    // 092a88  jmp 0x92a8e
    X86_AT(c, 0x92a88u);
    goto L_92a8e;
L_92a8a:
    X86_TICK(c, 6);
    // 092a8a  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0x92a8au);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
L_92a8e:
    X86_TICK(c, 16);
    // 092a8e  leave 
    X86_AT(c, 0x92a8eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092a8f  ret 
    X86_AT(c, 0x92a8fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92a68u, "ran off the end of a function");
}
void f_00092ad0(X86Cpu& c) {
    X86_TICK(c, 36);
    // 092ad0  enter 8, 0
    X86_AT(c, 0x92ad0u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 092ad4  push edi
    X86_AT(c, 0x92ad4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092ad5  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x92ad5u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 092ad8  mov eax, edi
    X86_AT(c, 0x92ad8u);
    c.r[0] = c.r[7];
    // 092ada  mov byte ptr [ebp - 5], al
    X86_AT(c, 0x92adau);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 092add  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x92addu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 092ae0  push 1
    X86_AT(c, 0x92ae0u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092ae2  push 1
    X86_AT(c, 0x92ae2u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092ae4  lea eax, [ebp - 5]
    X86_AT(c, 0x92ae4u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 092ae7  push eax
    X86_AT(c, 0x92ae7u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092ae8  call 0x927f8
    X86_AT(c, 0x92ae8u);
    push32(c, 0x92aedu); x86_call_known(c, 0x927f8u, f_000927f8); X86_RET(c, 0x92aedu);
    X86_TICK(c, 9);
    // 092aed  add esp, 0x10
    X86_AT(c, 0x92aedu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 092af0  dec eax
    X86_AT(c, 0x92af0u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 092af1  je 0x92afc
    X86_AT(c, 0x92af1u);
    if (x86_cc(c, 4)) { goto L_92afc; }
    X86_TICK(c, 9);
    // 092af3  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0x92af3u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 092afa  jmp 0x92aff
    X86_AT(c, 0x92afau);
    goto L_92aff;
L_92afc:
    X86_TICK(c, 2);
    // 092afc  mov dword ptr [ebp - 4], edi
    X86_AT(c, 0x92afcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[7]);
L_92aff:
    X86_TICK(c, 24);
    // 092aff  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92affu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092b02  pop edi
    X86_AT(c, 0x92b02u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092b03  leave 
    X86_AT(c, 0x92b03u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092b04  ret 
    X86_AT(c, 0x92b04u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92ad0u, "ran off the end of a function");
}
void f_00092bf0(X86Cpu& c) {
    X86_TICK(c, 27);
    // 092bf0  enter 8, 0
    X86_AT(c, 0x92bf0u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 092bf4  push ebx
    X86_AT(c, 0x92bf4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092bf5  push esi
    X86_AT(c, 0x92bf5u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092bf6  push edi
    X86_AT(c, 0x92bf6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092bf7  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x92bf7u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 092bfa  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x92bfau);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 092bfd  and esi, esi
    X86_AT(c, 0x92bfdu);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 092bff  jl 0x92c06
    X86_AT(c, 0x92bffu);
    if (x86_cc(c, 12)) { goto L_92c06; }
    X86_TICK(c, 7);
    // 092c01  cmp esi, 2
    X86_AT(c, 0x92c01u);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 092c04  jle 0x92c12
    X86_AT(c, 0x92c04u);
    if (x86_cc(c, 14)) { goto L_92c12; }
L_92c06:
    X86_TICK(c, 9);
    // 092c06  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0x92c06u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 092c0d  jmp 0x92cc3
    X86_AT(c, 0x92c0du);
    goto L_92cc3;
L_92c12:
    X86_TICK(c, 31);
    // 092c12  mov ax, word ptr [0x8a7de]
    X86_AT(c, 0x92c12u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x8A7DEu))));
    // 092c18  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x92c18u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 092c1c  sub eax, eax
    X86_AT(c, 0x92c1cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092c1e  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x92c1eu);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
    // 092c24  mov ebx, edi
    X86_AT(c, 0x92c24u);
    c.r[3] = c.r[7];
    // 092c26  and byte ptr [ebx + 0xd], 0xfb
    X86_AT(c, 0x92c26u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFBu, 1)); }
    // 092c2a  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x92c2au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 092c2e  je 0x92c89
    X86_AT(c, 0x92c2eu);
    if (x86_cc(c, 4)) { goto L_92c89; }
    X86_TICK(c, 12);
    // 092c30  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x92c30u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 092c34  je 0x92c6c
    X86_AT(c, 0x92c34u);
    if (x86_cc(c, 4)) { goto L_92c6c; }
    X86_TICK(c, 12);
    // 092c36  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x92c36u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 092c3a  je 0x92c4f
    X86_AT(c, 0x92c3au);
    if (x86_cc(c, 4)) { goto L_92c4f; }
    X86_TICK(c, 12);
    // 092c3c  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x92c3cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 092c40  je 0x92c48
    X86_AT(c, 0x92c40u);
    if (x86_cc(c, 4)) { goto L_92c48; }
    X86_TICK(c, 12);
    // 092c42  test byte ptr [ebx + 0xd], 8
    X86_AT(c, 0x92c42u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x8u, 1);
    // 092c46  je 0x92c4f
    X86_AT(c, 0x92c46u);
    if (x86_cc(c, 4)) { goto L_92c4f; }
L_92c48:
    X86_TICK(c, 9);
    // 092c48  push edi
    X86_AT(c, 0x92c48u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092c49  call 0x928ac
    X86_AT(c, 0x92c49u);
    push32(c, 0x92c4eu); x86_call_known(c, 0x928acu, f_000928ac); X86_RET(c, 0x92c4eu);
    X86_TICK(c, 4);
    // 092c4e  pop ecx
    X86_AT(c, 0x92c4eu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_92c4f:
    X86_TICK(c, 7);
    // 092c4f  cmp esi, 1
    X86_AT(c, 0x92c4fu);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 092c52  jne 0x92c6c
    X86_AT(c, 0x92c52u);
    if (x86_cc(c, 5)) { goto L_92c6c; }
    X86_TICK(c, 12);
    // 092c54  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x92c54u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 092c58  je 0x92c6c
    X86_AT(c, 0x92c58u);
    if (x86_cc(c, 4)) { goto L_92c6c; }
    X86_TICK(c, 12);
    // 092c5a  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x92c5au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 092c5e  je 0x92c66
    X86_AT(c, 0x92c5eu);
    if (x86_cc(c, 4)) { goto L_92c66; }
    X86_TICK(c, 12);
    // 092c60  test byte ptr [ebx + 0xd], 8
    X86_AT(c, 0x92c60u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x8u, 1);
    // 092c64  jne 0x92c6c
    X86_AT(c, 0x92c64u);
    if (x86_cc(c, 5)) { goto L_92c6c; }
L_92c66:
    X86_TICK(c, 11);
    // 092c66  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x92c66u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 092c69  sub dword ptr [ebp + 0xc], eax
    X86_AT(c, 0x92c69u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_92c6c:
    X86_TICK(c, 22);
    // 092c6c  mov eax, esi
    X86_AT(c, 0x92c6cu);
    c.r[0] = c.r[6];
    // 092c6e  push eax
    X86_AT(c, 0x92c6eu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092c6f  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x92c6fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 092c72  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92c72u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092c75  push eax
    X86_AT(c, 0x92c75u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092c76  call 0x94d58
    X86_AT(c, 0x92c76u);
    push32(c, 0x92c7bu); x86_call_known(c, 0x94d58u, f_00094d58); X86_RET(c, 0x92c7bu);
    X86_TICK(c, 15);
    // 092c7b  mov dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x92c7bu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0xFFFFFFFFu);
    // 092c82  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x92c82u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 092c85  mov dword ptr [ebx], eax
    X86_AT(c, 0x92c85u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 092c87  jmp 0x92c98
    X86_AT(c, 0x92c87u);
    goto L_92c98;
L_92c89:
    X86_TICK(c, 22);
    // 092c89  mov eax, esi
    X86_AT(c, 0x92c89u);
    c.r[0] = c.r[6];
    // 092c8b  push eax
    X86_AT(c, 0x92c8bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092c8c  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x92c8cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 092c8f  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x92c8fu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 092c92  push eax
    X86_AT(c, 0x92c92u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092c93  call 0x94d58
    X86_AT(c, 0x92c93u);
    push32(c, 0x92c98u); x86_call_known(c, 0x94d58u, f_00094d58); X86_RET(c, 0x92c98u);
L_92c98:
    X86_TICK(c, 12);
    // 092c98  cmp word ptr [0x8a7de], 0
    X86_AT(c, 0x92c98u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A7DEu))), 0x0u, 0, 2);
    // 092ca0  jne 0x92cb5
    X86_AT(c, 0x92ca0u);
    if (x86_cc(c, 5)) { goto L_92cb5; }
    X86_TICK(c, 15);
    // 092ca2  mov ax, word ptr [ebp - 6]
    X86_AT(c, 0x92ca2u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))));
    // 092ca6  mov word ptr [0x8a7de], ax
    X86_AT(c, 0x92ca6u);
    wr16((c.sbase[3] + (uint32_t)(0x8A7DEu)), (c.r[0] & 0xFFFFu));
    // 092cac  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x92cacu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 092cb3  jmp 0x92cbf
    X86_AT(c, 0x92cb3u);
    goto L_92cbf;
L_92cb5:
    X86_TICK(c, 8);
    // 092cb5  movzx eax, word ptr [0x8a7de]
    X86_AT(c, 0x92cb5u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x8A7DEu)));
    // 092cbc  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92cbcu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_92cbf:
    X86_TICK(c, 7);
    // 092cbf  and byte ptr [edi + 0xc], 0xef
    X86_AT(c, 0x92cbfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xEFu, 1)); }
L_92cc3:
    X86_TICK(c, 32);
    // 092cc3  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92cc3u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092cc6  pop edi
    X86_AT(c, 0x92cc6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092cc7  pop esi
    X86_AT(c, 0x92cc7u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092cc8  pop ebx
    X86_AT(c, 0x92cc8u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092cc9  leave 
    X86_AT(c, 0x92cc9u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092cca  ret 
    X86_AT(c, 0x92ccau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92bf0u, "ran off the end of a function");
}
void f_00092d58(X86Cpu& c) {
    X86_TICK(c, 39);
    // 092d58  push ebp
    X86_AT(c, 0x92d58u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 092d59  mov ebp, esp
    X86_AT(c, 0x92d59u);
    c.r[5] = c.r[4];
    // 092d5b  push ecx
    X86_AT(c, 0x92d5bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 092d5c  push ebx
    X86_AT(c, 0x92d5cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092d5d  push edi
    X86_AT(c, 0x92d5du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092d5e  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x92d5eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 092d61  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0x92d61u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092d64  push dword ptr [ebx + 8]
    X86_AT(c, 0x92d64u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 092d67  push edi
    X86_AT(c, 0x92d67u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092d68  push 1
    X86_AT(c, 0x92d68u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 092d6a  push dword ptr [ebp + 8]
    X86_AT(c, 0x92d6au);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092d6d  call 0x927f8
    X86_AT(c, 0x92d6du);
    push32(c, 0x92d72u); x86_call_known(c, 0x927f8u, f_000927f8); X86_RET(c, 0x92d72u);
    X86_TICK(c, 9);
    // 092d72  add esp, 0x10
    X86_AT(c, 0x92d72u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 092d75  cmp edi, eax
    X86_AT(c, 0x92d75u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 092d77  je 0x92d84
    X86_AT(c, 0x92d77u);
    if (x86_cc(c, 4)) { goto L_92d84; }
    X86_TICK(c, 11);
    // 092d79  mov dword ptr [ebx - 4], 0xffffffff
    X86_AT(c, 0x92d79u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 092d80  mov ebp, ebx
    X86_AT(c, 0x92d80u);
    c.r[5] = c.r[3];
    // 092d82  jmp 0x92dbd
    X86_AT(c, 0x92d82u);
    goto L_92dbd;
L_92d84:
    X86_TICK(c, 24);
    // 092d84  pop edi
    X86_AT(c, 0x92d84u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092d85  pop ebx
    X86_AT(c, 0x92d85u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092d86  leave 
    X86_AT(c, 0x92d86u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092d87  ret 8
    X86_AT(c, 0x92d87u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_92dbd:
    X86_TICK(c, 34);
    // 092dbd  lea esp, [ebp - 0x10]
    X86_AT(c, 0x92dbdu);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 092dc0  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x92dc0u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 092dc3  pop edi
    X86_AT(c, 0x92dc3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092dc4  pop esi
    X86_AT(c, 0x92dc4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092dc5  pop ebx
    X86_AT(c, 0x92dc5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092dc6  leave 
    X86_AT(c, 0x92dc6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092dc7  ret 
    X86_AT(c, 0x92dc7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92d58u, "ran off the end of a function");
}
void f_00092d94(X86Cpu& c) {
    X86_TICK(c, 33);
    // 092d94  enter 4, 0
    X86_AT(c, 0x92d94u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 092d98  push ebx
    X86_AT(c, 0x92d98u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 092d99  push esi
    X86_AT(c, 0x92d99u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092d9a  push edi
    X86_AT(c, 0x92d9au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092d9b  mov dword ptr [0x8a480], 0x92d58
    X86_AT(c, 0x92d9bu);
    wr32((c.sbase[3] + (uint32_t)(0x8A480u)), 0x92D58u);
    // 092da5  mov dword ptr [0x8a484], ebp
    X86_AT(c, 0x92da5u);
    wr32((c.sbase[3] + (uint32_t)(0x8A484u)), c.r[5]);
    // 092dab  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x92dabu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 092dae  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x92daeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 092db1  call 0x94000
    X86_AT(c, 0x92db1u);
    push32(c, 0x92db6u); x86_call_known(c, 0x94000u, f_00094000); X86_RET(c, 0x92db6u);
    X86_TICK(c, 11);
    // 092db6  mov eax, dword ptr [0x8a47c]
    X86_AT(c, 0x92db6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A47Cu)));
    // 092dbb  jmp 0x92dc3
    X86_AT(c, 0x92dbbu);
    goto L_92dc3;
L_92dc3:
    X86_TICK(c, 28);
    // 092dc3  pop edi
    X86_AT(c, 0x92dc3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092dc4  pop esi
    X86_AT(c, 0x92dc4u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092dc5  pop ebx
    X86_AT(c, 0x92dc5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 092dc6  leave 
    X86_AT(c, 0x92dc6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092dc7  ret 
    X86_AT(c, 0x92dc7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92d94u, "ran off the end of a function");
}
void f_00092df0(X86Cpu& c) {
    X86_TICK(c, 25);
    // 092df0  push ebp
    X86_AT(c, 0x92df0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 092df1  mov ebp, esp
    X86_AT(c, 0x92df1u);
    c.r[5] = c.r[4];
    // 092df3  lea eax, [ebp + 0xc]
    X86_AT(c, 0x92df3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 092df6  push eax
    X86_AT(c, 0x92df6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 092df7  push dword ptr [ebp + 8]
    X86_AT(c, 0x92df7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092dfa  push dword ptr [0x8a458]
    X86_AT(c, 0x92dfau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A458u))); push32(c, v); }
    // 092e00  call 0x92d94
    X86_AT(c, 0x92e00u);
    push32(c, 0x92e05u); x86_call_known(c, 0x92d94u, f_00092d94); X86_RET(c, 0x92e05u);
    X86_TICK(c, 18);
    // 092e05  add esp, 0xc
    X86_AT(c, 0x92e05u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 092e08  leave 
    X86_AT(c, 0x92e08u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092e09  ret 
    X86_AT(c, 0x92e09u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92df0u, "ran off the end of a function");
}
void f_00092e3c(X86Cpu& c) {
    X86_TICK(c, 16);
    // 092e3c  push ebp
    X86_AT(c, 0x92e3cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 092e3d  mov ebp, esp
    X86_AT(c, 0x92e3du);
    c.r[5] = c.r[4];
    // 092e3f  push dword ptr [ebp + 8]
    X86_AT(c, 0x92e3fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092e42  call 0x94b4a
    X86_AT(c, 0x92e42u);
    push32(c, 0x92e47u); x86_call_known(c, 0x94b4au, f_00094b4a); X86_RET(c, 0x92e47u);
    X86_TICK(c, 16);
    // 092e47  leave 
    X86_AT(c, 0x92e47u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092e48  ret 
    X86_AT(c, 0x92e48u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92e3cu, "ran off the end of a function");
}
void f_00092e50(X86Cpu& c) {
    X86_TICK(c, 16);
    // 092e50  push ebp
    X86_AT(c, 0x92e50u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 092e51  mov ebp, esp
    X86_AT(c, 0x92e51u);
    c.r[5] = c.r[4];
    // 092e53  push dword ptr [ebp + 8]
    X86_AT(c, 0x92e53u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092e56  call 0x94b10
    X86_AT(c, 0x92e56u);
    push32(c, 0x92e5bu); x86_call_known(c, 0x94b10u, f_00094b10); X86_RET(c, 0x92e5bu);
    X86_TICK(c, 16);
    // 092e5b  leave 
    X86_AT(c, 0x92e5bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092e5c  ret 
    X86_AT(c, 0x92e5cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92e50u, "ran off the end of a function");
}
void f_00092ebc(X86Cpu& c) {
    X86_TICK(c, 46);
    // 092ebc  enter 0x70, 0
    X86_AT(c, 0x92ebcu);
    x86_enter(c, 0x70u, 0x0u, 4);
    // 092ec0  push esi
    X86_AT(c, 0x92ec0u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092ec1  push edi
    X86_AT(c, 0x92ec1u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092ec2  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x92ec2u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 092ec5  mov eax, dword ptr [0x8a54c]
    X86_AT(c, 0x92ec5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A54Cu)));
    // 092eca  mov dx, word ptr [0x8a550]
    X86_AT(c, 0x92ecau);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0x8A550u))));
    // 092ed1  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x92ed1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 092ed4  mov word ptr [ebp - 8], dx
    X86_AT(c, 0x92ed4u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 092ed8  mov edx, 0x7fffffff
    X86_AT(c, 0x92ed8u);
    c.r[2] = 0x7FFFFFFFu;
    // 092edd  sub eax, eax
    X86_AT(c, 0x92eddu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092edf  push edi
    X86_AT(c, 0x92edfu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092ee0  mov ecx, edx
    X86_AT(c, 0x92ee0u);
    c.r[1] = c.r[2];
    // 092ee2  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92ee2u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092ee4  jne 0x92ee9
    X86_AT(c, 0x92ee4u);
    if (x86_cc(c, 5)) { goto L_92ee9; }
    X86_TICK(c, 4);
    // 092ee6  inc ecx
    X86_AT(c, 0x92ee6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092ee7  sub edx, ecx
    X86_AT(c, 0x92ee7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_92ee9:
    X86_TICK(c, 13);
    // 092ee9  pop edi
    X86_AT(c, 0x92ee9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092eea  mov ax, 0x64
    X86_AT(c, 0x92eeau);
    s16(c, 0, 0x64u);
    // 092eee  cmp ax, dx
    X86_AT(c, 0x92eeeu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 092ef1  jb 0x92ef4
    X86_AT(c, 0x92ef1u);
    if (x86_cc(c, 2)) { goto L_92ef4; }
    X86_TICK(c, 3);
    // 092ef3  xchg edx, eax
    X86_AT(c, 0x92ef3u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_92ef4:
    X86_TICK(c, 10);
    // 092ef4  movzx esi, ax
    X86_AT(c, 0x92ef4u);
    c.r[6] = (c.r[0] & 0xFFFFu);
    // 092ef7  jmp 0x92f9b
    X86_AT(c, 0x92ef7u);
    goto L_92f9b;
L_92efc:
    X86_TICK(c, 64);
    // 092efc  mov ecx, esi
    X86_AT(c, 0x92efcu);
    c.r[1] = c.r[6];
    // 092efe  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x92efeu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 092f01  push ds
    X86_AT(c, 0x92f01u);
    push32(c, c.sreg[3]);
    // 092f02  push es
    X86_AT(c, 0x92f02u);
    push32(c, c.sreg[0]);
    // 092f03  lea edx, [ebp - 0x70]
    X86_AT(c, 0x92f03u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFF90u);
    // 092f06  push ds
    X86_AT(c, 0x92f06u);
    push32(c, c.sreg[3]);
    // 092f07  pop es
    X86_AT(c, 0x92f07u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 092f08  pop ds
    X86_AT(c, 0x92f08u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 092f09  push esi
    X86_AT(c, 0x92f09u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092f0a  push edi
    X86_AT(c, 0x92f0au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092f0b  mov esi, eax
    X86_AT(c, 0x92f0bu);
    c.r[6] = c.r[0];
    // 092f0d  mov edi, edx
    X86_AT(c, 0x92f0du);
    c.r[7] = c.r[2];
    // 092f0f  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92f0fu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092f11  pop edi
    X86_AT(c, 0x92f11u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092f12  pop esi
    X86_AT(c, 0x92f12u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092f13  pop ds
    X86_AT(c, 0x92f13u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 092f14  push esi
    X86_AT(c, 0x92f14u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092f15  push edi
    X86_AT(c, 0x92f15u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092f16  push edx
    X86_AT(c, 0x92f16u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 092f17  call 0x94da4
    X86_AT(c, 0x92f17u);
    push32(c, 0x92f1cu); x86_call_known(c, 0x94da4u, f_00094da4); X86_RET(c, 0x92f1cu);
    X86_TICK(c, 7);
    // 092f1c  and ax, ax
    X86_AT(c, 0x92f1cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 092f1f  jne 0x92f71
    X86_AT(c, 0x92f1fu);
    if (x86_cc(c, 5)) { goto L_92f71; }
    X86_TICK(c, 24);
    // 092f21  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x92f21u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 092f24  cmp byte ptr es:[eax + esi*1], 0x3d
    X86_AT(c, 0x92f24u);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[0] + c.r[6]))), 0x3Du, 0, 1);
    // 092f29  push ds
    X86_AT(c, 0x92f29u);
    push32(c, c.sreg[3]);
    // 092f2a  pop es
    X86_AT(c, 0x92f2au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 092f2b  jne 0x92f71
    X86_AT(c, 0x92f2bu);
    if (x86_cc(c, 5)) { goto L_92f71; }
    X86_TICK(c, 37);
    // 092f2d  lea eax, [esi + 1]
    X86_AT(c, 0x92f2du);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 092f30  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x92f30u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 092f33  mov edx, 0x7fffffff
    X86_AT(c, 0x92f33u);
    c.r[2] = 0x7FFFFFFFu;
    // 092f38  sub eax, eax
    X86_AT(c, 0x92f38u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092f3a  les ecx, fword ptr [ebp - 0xc]
    X86_AT(c, 0x92f3au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[1] = o; }
    // 092f3d  push edi
    X86_AT(c, 0x92f3du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092f3e  mov edi, ecx
    X86_AT(c, 0x92f3eu);
    c.r[7] = c.r[1];
    // 092f40  mov ecx, edx
    X86_AT(c, 0x92f40u);
    c.r[1] = c.r[2];
    // 092f42  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92f42u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092f44  jne 0x92f49
    X86_AT(c, 0x92f44u);
    if (x86_cc(c, 5)) { goto L_92f49; }
    X86_TICK(c, 4);
    // 092f46  inc ecx
    X86_AT(c, 0x92f46u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092f47  sub edx, ecx
    X86_AT(c, 0x92f47u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_92f49:
    X86_TICK(c, 15);
    // 092f49  pop edi
    X86_AT(c, 0x92f49u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092f4a  inc edx
    X86_AT(c, 0x92f4au);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 092f4b  mov eax, 0x80
    X86_AT(c, 0x92f4bu);
    c.r[0] = 0x80u;
    // 092f50  cmp eax, edx
    X86_AT(c, 0x92f50u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 092f52  jb 0x92f55
    X86_AT(c, 0x92f52u);
    if (x86_cc(c, 2)) { goto L_92f55; }
    X86_TICK(c, 3);
    // 092f54  xchg edx, eax
    X86_AT(c, 0x92f54u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_92f55:
    X86_TICK(c, 62);
    // 092f55  xchg ecx, eax
    X86_AT(c, 0x92f55u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 092f56  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x92f56u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 092f59  push ds
    X86_AT(c, 0x92f59u);
    push32(c, c.sreg[3]);
    // 092f5a  push es
    X86_AT(c, 0x92f5au);
    push32(c, c.sreg[0]);
    // 092f5b  mov edx, 0x8a4a0
    X86_AT(c, 0x92f5bu);
    c.r[2] = 0x8A4A0u;
    // 092f60  push ds
    X86_AT(c, 0x92f60u);
    push32(c, c.sreg[3]);
    // 092f61  pop es
    X86_AT(c, 0x92f61u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 092f62  pop ds
    X86_AT(c, 0x92f62u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 092f63  push esi
    X86_AT(c, 0x92f63u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 092f64  push edi
    X86_AT(c, 0x92f64u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092f65  mov esi, eax
    X86_AT(c, 0x92f65u);
    c.r[6] = c.r[0];
    // 092f67  mov edi, edx
    X86_AT(c, 0x92f67u);
    c.r[7] = c.r[2];
    // 092f69  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92f69u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092f6b  pop edi
    X86_AT(c, 0x92f6bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092f6c  pop esi
    X86_AT(c, 0x92f6cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092f6d  pop ds
    X86_AT(c, 0x92f6du);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 092f6e  xchg edx, eax
    X86_AT(c, 0x92f6eu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 092f6f  jmp 0x92faf
    X86_AT(c, 0x92f6fu);
    goto L_92faf;
L_92f71:
    X86_TICK(c, 28);
    // 092f71  mov edx, 0x7fffffff
    X86_AT(c, 0x92f71u);
    c.r[2] = 0x7FFFFFFFu;
    // 092f76  sub eax, eax
    X86_AT(c, 0x92f76u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092f78  les ecx, fword ptr [ebp - 0xc]
    X86_AT(c, 0x92f78u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[1] = o; }
    // 092f7b  push edi
    X86_AT(c, 0x92f7bu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092f7c  mov edi, ecx
    X86_AT(c, 0x92f7cu);
    c.r[7] = c.r[1];
    // 092f7e  mov ecx, edx
    X86_AT(c, 0x92f7eu);
    c.r[1] = c.r[2];
    // 092f80  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92f80u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092f82  jne 0x92f87
    X86_AT(c, 0x92f82u);
    if (x86_cc(c, 5)) { goto L_92f87; }
    X86_TICK(c, 4);
    // 092f84  inc ecx
    X86_AT(c, 0x92f84u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 092f85  sub edx, ecx
    X86_AT(c, 0x92f85u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_92f87:
    X86_TICK(c, 24);
    // 092f87  pop edi
    X86_AT(c, 0x92f87u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092f88  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x92f88u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 092f8b  lea eax, es:[eax + edx*1 + 1]
    X86_AT(c, 0x92f8bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x1u);
    // 092f90  mov edx, es
    X86_AT(c, 0x92f90u);
    c.r[2] = (uint32_t)c.sreg[0];
    // 092f92  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x92f92u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 092f95  mov word ptr [ebp - 8], dx
    X86_AT(c, 0x92f95u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 092f99  push ds
    X86_AT(c, 0x92f99u);
    push32(c, c.sreg[3]);
    // 092f9a  pop es
    X86_AT(c, 0x92f9au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
L_92f9b:
    X86_TICK(c, 24);
    // 092f9b  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x92f9bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 092f9e  cmp byte ptr es:[eax], 0
    X86_AT(c, 0x92f9eu);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 092fa2  push ds
    X86_AT(c, 0x92fa2u);
    push32(c, c.sreg[3]);
    // 092fa3  pop es
    X86_AT(c, 0x92fa3u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 092fa4  jne 0x92efc
    X86_AT(c, 0x92fa4u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x92efcu); goto L_92efc; }
    X86_TICK(c, 4);
    // 092faa  sub eax, eax
    X86_AT(c, 0x92faau);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092fac  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x92facu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_92faf:
    X86_TICK(c, 24);
    // 092faf  pop edi
    X86_AT(c, 0x92fafu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092fb0  pop esi
    X86_AT(c, 0x92fb0u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 092fb1  leave 
    X86_AT(c, 0x92fb1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 092fb2  ret 
    X86_AT(c, 0x92fb2u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92ebcu, "ran off the end of a function");
}
void f_00092fb4(X86Cpu& c) {
    X86_TICK(c, 72);
    // 092fb4  mov edx, esi
    X86_AT(c, 0x92fb4u);
    c.r[2] = c.r[6];
    // 092fb6  push edi
    X86_AT(c, 0x92fb6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 092fb7  sub eax, eax
    X86_AT(c, 0x92fb7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 092fb9  mov ecx, 0xffffffff
    X86_AT(c, 0x92fb9u);
    c.r[1] = 0xFFFFFFFFu;
    // 092fbe  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x92fbeu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 092fc2  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x92fc2u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 092fc4  not ecx
    X86_AT(c, 0x92fc4u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 092fc6  mov esi, dword ptr [esp + 0xc]
    X86_AT(c, 0x92fc6u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 092fca  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x92fcau);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 092fce  mov eax, ecx
    X86_AT(c, 0x92fceu);
    c.r[0] = c.r[1];
    // 092fd0  shr ecx, 2
    X86_AT(c, 0x92fd0u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 092fd3  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x92fd3u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 092fd5  mov ecx, eax
    X86_AT(c, 0x92fd5u);
    c.r[1] = c.r[0];
    // 092fd7  and ecx, 3
    X86_AT(c, 0x92fd7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 092fdd  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x92fddu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 092fdf  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0x92fdfu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 092fe3  mov esi, edx
    X86_AT(c, 0x92fe3u);
    c.r[6] = c.r[2];
    // 092fe5  pop edi
    X86_AT(c, 0x92fe5u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 092fe6  ret 
    X86_AT(c, 0x92fe6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x92fb4u, "ran off the end of a function");
}
void f_00092ff8(X86Cpu& c) {
    X86_TICK(c, 16);
    // 092ff8  push ebp
    X86_AT(c, 0x92ff8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 092ff9  mov ebp, esp
    X86_AT(c, 0x92ff9u);
    c.r[5] = c.r[4];
    // 092ffb  push dword ptr [ebp + 8]
    X86_AT(c, 0x92ffbu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 092ffe  call 0x94c4c
    X86_AT(c, 0x92ffeu);
    push32(c, 0x93003u); x86_call_known(c, 0x94c4cu, f_00094c4c); X86_RET(c, 0x93003u);
    X86_TICK(c, 16);
    // 093003  leave 
    X86_AT(c, 0x93003u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093004  ret 4
    X86_AT(c, 0x93004u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x92ff8u, "ran off the end of a function");
}
void f_00093034(X86Cpu& c) {
    X86_TICK(c, 7);
    // 093034  jmp 0x9308c
    X86_AT(c, 0x93034u);
    goto L_9308c;
L_93036:
    X86_TICK(c, 7);
    // 093036  call 0x8f0ac
    X86_AT(c, 0x93036u);
    push32(c, 0x9303bu); x86_call_known(c, 0x8f0acu, f_0008f0ac); X86_RET(c, 0x9303bu);
L_9303b:
    X86_TICK(c, 9);
    // 09303b  push eax
    X86_AT(c, 0x9303bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09303c  call 0x94c4c
    X86_AT(c, 0x9303cu);
    push32(c, 0x93041u); x86_call_known(c, 0x94c4cu, f_00094c4c); X86_RET(c, 0x93041u);
    X86_TICK(c, 39);
    // 093041  xor eax, eax
    X86_AT(c, 0x93041u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 093043  int 0x21
    X86_AT(c, 0x93043u);
    x86_int(c, 0x21, 0x93045u);
    X86_TICK(c, 10);
    // 093045  ret 
    X86_AT(c, 0x93045u);
    c.eip = pop32(c); return;
L_9308c:
    X86_TICK(c, 7);
    // 09308c  cmp al, 0xcd
    X86_AT(c, 0x9308cu);
    (void)x86_sub(c, g8(c, 0), 0xCDu, 0, 1);
    // 09308e  jne 0x930ab
    X86_AT(c, 0x9308eu);
    if (x86_cc(c, 5)) { goto L_930ab; }
    X86_TICK(c, 7);
    // 093090  cmp ah, 0xab
    X86_AT(c, 0x93090u);
    (void)x86_sub(c, g8(c, 4), 0xABu, 0, 1);
    // 093093  jne 0x930ab
    X86_AT(c, 0x93093u);
    if (x86_cc(c, 5)) { goto L_930ab; }
    X86_TICK(c, 7);
    // 093095  cmp eax, 0xabcdabcd
    X86_AT(c, 0x93095u);
    (void)x86_sub(c, c.r[0], 0xABCDABCDu, 0, 4);
    // 09309a  jne 0x930ab
    X86_AT(c, 0x9309au);
    if (x86_cc(c, 5)) { goto L_930ab; }
    X86_TICK(c, 11);
    // 09309c  mov byte ptr [0x8a562], 1
    X86_AT(c, 0x9309cu);
    wr8((c.sbase[3] + (uint32_t)(0x8A562u)), 0x1u);
    // 0930a3  mov dword ptr [0x8a538], edx
    X86_AT(c, 0x930a3u);
    wr32((c.sbase[3] + (uint32_t)(0x8A538u)), c.r[2]);
    // 0930a9  jmp 0x930b2
    X86_AT(c, 0x930a9u);
    goto L_930b2;
L_930ab:
    X86_TICK(c, 2);
    // 0930ab  mov byte ptr [0x8a562], 2
    X86_AT(c, 0x930abu);
    wr8((c.sbase[3] + (uint32_t)(0x8A562u)), 0x2u);
L_930b2:
    X86_TICK(c, 34);
    // 0930b2  sub ebp, ebp
    X86_AT(c, 0x930b2u);
    { uint32_t v = c.r[5]; c.r[5] = x86_sub(c, v, c.r[5], 0, 4); }
    // 0930b4  and esp, 0xfffffffc
    X86_AT(c, 0x930b4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0930b7  mov dword ptr [0x351f8], 0x200
    X86_AT(c, 0x930b7u);
    wr32((c.sbase[3] + (uint32_t)(0x351F8u)), 0x200u);
    // 0930c1  mov dword ptr [0x351fc], 0x100
    X86_AT(c, 0x930c1u);
    wr32((c.sbase[3] + (uint32_t)(0x351FCu)), 0x100u);
    // 0930cb  add dword ptr [0x351f8], 0x96dc4
    X86_AT(c, 0x930cbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x351F8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x96DC4u, 0, 4)); }
    // 0930d5  add dword ptr [0x351fc], 0x96dc4
    X86_AT(c, 0x930d5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x351FCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x96DC4u, 0, 4)); }
    // 0930df  cmp byte ptr [0x8a562], 1
    X86_AT(c, 0x930dfu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A562u))), 0x1u, 0, 1);
    // 0930e6  je 0x93108
    X86_AT(c, 0x930e6u);
    if (x86_cc(c, 4)) { goto L_93108; }
    X86_TICK(c, 23);
    // 0930e8  mov dword ptr [0x8a530], 0
    X86_AT(c, 0x930e8u);
    wr32((c.sbase[3] + (uint32_t)(0x8A530u)), 0x0u);
    // 0930f2  lea eax, [esp + 0x20]
    X86_AT(c, 0x930f2u);
    c.r[0] = (uint32_t)(c.r[4] + 0x20u);
    // 0930f6  mov dword ptr [0x8a52c], esp
    X86_AT(c, 0x930f6u);
    wr32((c.sbase[3] + (uint32_t)(0x8A52Cu)), c.r[4]);
    // 0930fc  mov eax, ds
    X86_AT(c, 0x930fcu);
    c.r[0] = (uint32_t)c.sreg[3];
    // 0930fe  lsl eax, eax
    X86_AT(c, 0x930feu);
    { uint32_t v; if (x86_lsl(c, (c.r[0] & 0xFFFFu), v)) { c.r[0] = v; c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 093101  mov dword ptr [0x8a534], eax
    X86_AT(c, 0x93101u);
    wr32((c.sbase[3] + (uint32_t)(0x8A534u)), c.r[0]);
    // 093106  jmp 0x93148
    X86_AT(c, 0x93106u);
    goto L_93148;
L_93108:
    X86_TICK(c, 84);
    // 093108  mov eax, esp
    X86_AT(c, 0x93108u);
    c.r[0] = c.r[4];
    // 09310a  mov ecx, dword ptr [edx + 0x74]
    X86_AT(c, 0x9310au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x74u)));
    // 09310d  shl ecx, 0xa
    X86_AT(c, 0x9310du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[1] = r; }
    // 093110  sub eax, ecx
    X86_AT(c, 0x93110u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 093112  mov dword ptr [0x8a530], eax
    X86_AT(c, 0x93112u);
    wr32((c.sbase[3] + (uint32_t)(0x8A530u)), c.r[0]);
    // 093117  mov eax, dword ptr [edx + 0x50]
    X86_AT(c, 0x93117u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x50u)));
    // 09311a  mov dword ptr [0x8a52c], eax
    X86_AT(c, 0x9311au);
    wr32((c.sbase[3] + (uint32_t)(0x8A52Cu)), c.r[0]);
    // 09311f  mov ecx, dword ptr [edx + 0x3c]
    X86_AT(c, 0x9311fu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x3Cu)));
    // 093122  shl ecx, 0xa
    X86_AT(c, 0x93122u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[1] = r; }
    // 093125  add eax, ecx
    X86_AT(c, 0x93125u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 093127  mov dword ptr [0x8a534], eax
    X86_AT(c, 0x93127u);
    wr32((c.sbase[3] + (uint32_t)(0x8A534u)), c.r[0]);
    // 09312c  mov ebx, dword ptr [edx + 0x54]
    X86_AT(c, 0x9312cu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x54u)));
    // 09312f  sub ebx, dword ptr [edx + 0x10]
    X86_AT(c, 0x9312fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u))), 0, 4); }
    // 093132  shr ebx, 4
    X86_AT(c, 0x93132u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 093135  inc ebx
    X86_AT(c, 0x93135u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 093136  mov ah, 0x4a
    X86_AT(c, 0x93136u);
    s8(c, 4, 0x4Au);
    // 093138  int 0x21
    X86_AT(c, 0x93138u);
    x86_int(c, 0x21, 0x9313au);
    X86_TICK(c, 12);
    // 09313a  test byte ptr [edx + 0xb7], 1
    X86_AT(c, 0x9313au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB7u))) & 0x1u, 1);
    // 093141  setne byte ptr [0x8a559]
    X86_AT(c, 0x93141u);
    wr8((c.sbase[3] + (uint32_t)(0x8A559u)), x86_cc(c, 5) ? 1u : 0u);
L_93148:
    X86_TICK(c, 11);
    // 093148  esc 0x1c, bl
    X86_AT(c, 0x93148u);
    // 09314a  xor eax, eax
    X86_AT(c, 0x9314au);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 09314c  mov word ptr [0x8a555], ax
    X86_AT(c, 0x9314cu);
    wr16((c.sbase[3] + (uint32_t)(0x8A555u)), (c.r[0] & 0xFFFFu));
    // 093152  sub ecx, ecx
    X86_AT(c, 0x93152u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 093154  mov cl, 0xf
    X86_AT(c, 0x93154u);
    s8(c, 1, 0xFu);
L_93156:
    X86_TICK(c, 11);
    // 093156  loop 0x93156
    X86_AT(c, 0x93156u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x93156u); goto L_93156; }
    X86_TICK(c, 5);
    // 093158  esc 0xf, byte ptr [0x8a555]
    X86_AT(c, 0x93158u);
    // 09315e  mov cl, 0xf
    X86_AT(c, 0x9315eu);
    s8(c, 1, 0xFu);
L_93160:
    X86_TICK(c, 11);
    // 093160  loop 0x93160
    X86_AT(c, 0x93160u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x93160u); goto L_93160; }
    X86_TICK(c, 19);
    // 093162  and word ptr [0x8a555], 0xf3f
    X86_AT(c, 0x93162u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A555u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xF3Fu, 2)); }
    // 09316b  cmp word ptr [0x8a555], 0x33f
    X86_AT(c, 0x9316bu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A555u))), 0x33Fu, 0, 2);
    // 093174  jne 0x931b4
    X86_AT(c, 0x93174u);
    if (x86_cc(c, 5)) { goto L_931b4; }
    X86_TICK(c, 5);
    // 093176  esc 0x2f, byte ptr [0x8a555]
    X86_AT(c, 0x93176u);
    // 09317c  mov cl, 0xf
    X86_AT(c, 0x9317cu);
    s8(c, 1, 0xFu);
L_9317e:
    X86_TICK(c, 11);
    // 09317e  loop 0x9317e
    X86_AT(c, 0x9317eu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x9317eu); goto L_9317e; }
    X86_TICK(c, 12);
    // 093180  test word ptr [0x8a555], 0xb8bf
    X86_AT(c, 0x93180u);
    (void)x86_logic(c, rd16((c.sbase[3] + (uint32_t)(0x8A555u))) & 0xB8BFu, 2);
    // 093189  jne 0x931b4
    X86_AT(c, 0x93189u);
    if (x86_cc(c, 5)) { goto L_931b4; }
    X86_TICK(c, 51);
    // 09318b  wait 
    X86_AT(c, 0x9318bu);
    // 09318c  esc 0xd, byte ptr cs:[0x93428]
    X86_AT(c, 0x9318cu);
    // 093193  mov byte ptr [0x8a553], 1
    X86_AT(c, 0x93193u);
    wr8((c.sbase[3] + (uint32_t)(0x8A553u)), 0x1u);
    // 09319a  esc 0xd, al
    X86_AT(c, 0x9319au);
    // 09319c  esc 0xd, dh
    X86_AT(c, 0x9319cu);
    // 09319e  esc 0x37, cl
    X86_AT(c, 0x9319eu);
    // 0931a0  esc 8, al
    X86_AT(c, 0x931a0u);
    // 0931a2  esc 0xc, al
    X86_AT(c, 0x931a2u);
    // 0931a4  esc 0x33, cl
    X86_AT(c, 0x931a4u);
    // 0931a6  wait 
    X86_AT(c, 0x931a6u);
    // 0931a7  esc 0x3c, al
    X86_AT(c, 0x931a7u);
    // 0931a9  wait 
    X86_AT(c, 0x931a9u);
    // 0931aa  sahf 
    X86_AT(c, 0x931aau);
    c.fl = (c.fl & ~0xD5u) | (g8(c, 4) & 0xD5u);
    // 0931ab  je 0x931b4
    X86_AT(c, 0x931abu);
    if (x86_cc(c, 4)) { goto L_931b4; }
    X86_TICK(c, 2);
    // 0931ad  mov byte ptr [0x8a557], 1
    X86_AT(c, 0x931adu);
    wr8((c.sbase[3] + (uint32_t)(0x8A557u)), 0x1u);
L_931b4:
    X86_TICK(c, 28);
    // 0931b4  push 0x3ff0000
    X86_AT(c, 0x931b4u);
    { uint32_t v = 0x3FF0000u; push32(c, v); }
    // 0931b9  push 0x30000000
    X86_AT(c, 0x931b9u);
    { uint32_t v = 0x30000000u; push32(c, v); }
    // 0931be  push 0xa0000000
    X86_AT(c, 0x931beu);
    { uint32_t v = 0xA0000000u; push32(c, v); }
    // 0931c3  push 0x64000000
    X86_AT(c, 0x931c3u);
    { uint32_t v = 0x64000000u; push32(c, v); }
    // 0931c8  push 0x16000000
    X86_AT(c, 0x931c8u);
    { uint32_t v = 0x16000000u; push32(c, v); }
    // 0931cd  push 0x98000000
    X86_AT(c, 0x931cdu);
    { uint32_t v = 0x98000000u; push32(c, v); }
    // 0931d2  push 0x56000000
    X86_AT(c, 0x931d2u);
    { uint32_t v = 0x56000000u; push32(c, v); }
    // 0931d7  push 0xb8000000
    X86_AT(c, 0x931d7u);
    { uint32_t v = 0xB8000000u; push32(c, v); }
    // 0931dc  cmp byte ptr [0x8a562], 1
    X86_AT(c, 0x931dcu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A562u))), 0x1u, 0, 1);
    // 0931e3  je 0x9323c
    X86_AT(c, 0x931e3u);
    if (x86_cc(c, 4)) { goto L_9323c; }
    X86_TICK(c, 11);
    // 0931e5  mov eax, fs
    X86_AT(c, 0x931e5u);
    c.r[0] = (uint32_t)c.sreg[4];
    // 0931e7  mov ebx, ds
    X86_AT(c, 0x931e7u);
    c.r[3] = (uint32_t)c.sreg[3];
    // 0931e9  cmp ax, bx
    X86_AT(c, 0x931e9u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 0931ec  je 0x9328d
    X86_AT(c, 0x931ecu);
    if (x86_cc(c, 4)) { goto L_9328d; }
    X86_TICK(c, 18);
    // 0931f2  mov word ptr [0x8a559], 1
    X86_AT(c, 0x931f2u);
    wr16((c.sbase[3] + (uint32_t)(0x8A559u)), 0x1u);
    // 0931fb  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x931fbu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 093201  mov eax, dword ptr fs:[0xc400]
    X86_AT(c, 0x93201u);
    c.r[0] = rd32((c.sbase[4] + ((0xC400u) & 0xFFFFu)));
    // 093206  and ah, 0x80
    X86_AT(c, 0x93206u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x80u, 1)); }
    // 093209  jne 0x93215
    X86_AT(c, 0x93209u);
    if (x86_cc(c, 5)) { goto L_93215; }
    X86_TICK(c, 20);
    // 09320b  pop eax
    X86_AT(c, 0x9320bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 09320c  pop eax
    X86_AT(c, 0x9320cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 09320d  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x9320du);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 093213  jmp 0x93222
    X86_AT(c, 0x93213u);
    goto L_93222;
L_93215:
    X86_TICK(c, 14);
    // 093215  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x93215u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 09321b  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x9321bu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 093221  pop eax
    X86_AT(c, 0x93221u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_93222:
    X86_TICK(c, 27);
    // 093222  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x93222u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 093228  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x93228u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 09322e  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x9322eu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 093234  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x93234u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 09323a  jmp 0x93290
    X86_AT(c, 0x9323au);
    goto L_93290;
L_9323c:
    X86_TICK(c, 12);
    // 09323c  cmp byte ptr [0x8a559], 1
    X86_AT(c, 0x9323cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A559u))), 0x1u, 0, 1);
    // 093243  jne 0x9328d
    X86_AT(c, 0x93243u);
    if (x86_cc(c, 5)) { goto L_9328d; }
    X86_TICK(c, 17);
    // 093245  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x93245u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 09324b  pop dword ptr [0xffc0c400]
    X86_AT(c, 0x9324bu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C400u)), v); }
    // 093251  and ah, 0x80
    X86_AT(c, 0x93251u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x80u, 1)); }
    // 093254  jne 0x93260
    X86_AT(c, 0x93254u);
    if (x86_cc(c, 5)) { goto L_93260; }
    X86_TICK(c, 20);
    // 093256  pop eax
    X86_AT(c, 0x93256u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 093257  pop eax
    X86_AT(c, 0x93257u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 093258  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x93258u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 09325e  jmp 0x9326d
    X86_AT(c, 0x9325eu);
    goto L_9326d;
L_93260:
    X86_TICK(c, 14);
    // 093260  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x93260u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 093266  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x93266u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 09326c  pop eax
    X86_AT(c, 0x9326cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_9326d:
    X86_TICK(c, 32);
    // 09326d  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x9326du);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 093273  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x93273u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 093279  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x93279u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 09327f  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x9327fu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 093285  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x93285u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 09328b  jmp 0x93290
    X86_AT(c, 0x9328bu);
    goto L_93290;
L_9328d:
    X86_TICK(c, 2);
    // 09328d  add esp, 0x20
    X86_AT(c, 0x9328du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_93290:
    X86_TICK(c, 14);
    // 093290  cld 
    X86_AT(c, 0x93290u);
    c.fl &= ~X86_DF;
    // 093291  cmp byte ptr [0x8a562], 2
    X86_AT(c, 0x93291u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A562u))), 0x2u, 0, 1);
    // 093298  je 0x932da
    X86_AT(c, 0x93298u);
    if (x86_cc(c, 4)) { goto L_932da; }
    X86_TICK(c, 42);
    // 09329a  mov edi, dword ptr [edx + 0x10]
    X86_AT(c, 0x9329au);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)));
    // 09329d  mov word ptr [0x8a540], ds
    X86_AT(c, 0x9329du);
    wr16((c.sbase[3] + (uint32_t)(0x8A540u)), (uint32_t)c.sreg[3]);
    // 0932a3  mov dword ptr [0x8a526], edi
    X86_AT(c, 0x932a3u);
    wr32((c.sbase[3] + (uint32_t)(0x8A526u)), c.r[7]);
    // 0932a9  mov word ptr [0x8a52a], ds
    X86_AT(c, 0x932a9u);
    wr16((c.sbase[3] + (uint32_t)(0x8A52Au)), (uint32_t)c.sreg[3]);
    // 0932af  lea eax, [edi + 0x80]
    X86_AT(c, 0x932afu);
    c.r[0] = (uint32_t)(c.r[7] + 0x80u);
    // 0932b5  xor ebx, ebx
    X86_AT(c, 0x932b5u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 0932b7  mov bl, byte ptr [eax]
    X86_AT(c, 0x932b7u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0932b9  mov dword ptr [0x8a548], ebx
    X86_AT(c, 0x932b9u);
    wr32((c.sbase[3] + (uint32_t)(0x8A548u)), c.r[3]);
    // 0932bf  inc eax
    X86_AT(c, 0x932bfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0932c0  mov dword ptr [0x8a53c], eax
    X86_AT(c, 0x932c0u);
    wr32((c.sbase[3] + (uint32_t)(0x8A53Cu)), c.r[0]);
    // 0932c5  mov bx, word ptr [edi + 0x2c]
    X86_AT(c, 0x932c5u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu))));
    // 0932c9  shl ebx, 4
    X86_AT(c, 0x932c9u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 0932cc  mov dword ptr [0x8a54c], ebx
    X86_AT(c, 0x932ccu);
    wr32((c.sbase[3] + (uint32_t)(0x8A54Cu)), c.r[3]);
    // 0932d2  mov word ptr [0x8a550], ds
    X86_AT(c, 0x932d2u);
    wr16((c.sbase[3] + (uint32_t)(0x8A550u)), (uint32_t)c.sreg[3]);
    // 0932d8  jmp 0x9332c
    X86_AT(c, 0x932d8u);
    goto L_9332c;
L_932da:
    X86_TICK(c, 81);
    // 0932da  mov ax, 0x24
    X86_AT(c, 0x932dau);
    s16(c, 0, 0x24u);
    // 0932de  mov ebx, cs
    X86_AT(c, 0x932deu);
    c.r[3] = (uint32_t)c.sreg[1];
    // 0932e0  arpl ax, bx
    X86_AT(c, 0x932e0u);
    { uint32_t d = (c.r[0] & 0xFFFFu), s = (c.r[3] & 0xFFFFu); if ((d & 3) < (s & 3)) { s16(c, 0, (d & ~3u) | (s & 3)); c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 0932e2  mov es, eax
    X86_AT(c, 0x932e2u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0932e4  mov word ptr [0x8a52a], ax
    X86_AT(c, 0x932e4u);
    wr16((c.sbase[3] + (uint32_t)(0x8A52Au)), (c.r[0] & 0xFFFFu));
    // 0932ea  mov word ptr [0x8a52a], ax
    X86_AT(c, 0x932eau);
    wr16((c.sbase[3] + (uint32_t)(0x8A52Au)), (c.r[0] & 0xFFFFu));
    // 0932f0  mov ax, 0x2c
    X86_AT(c, 0x932f0u);
    s16(c, 0, 0x2Cu);
    // 0932f4  arpl ax, bx
    X86_AT(c, 0x932f4u);
    { uint32_t d = (c.r[0] & 0xFFFFu), s = (c.r[3] & 0xFFFFu); if ((d & 3) < (s & 3)) { s16(c, 0, (d & ~3u) | (s & 3)); c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 0932f6  mov word ptr [0x8a550], ax
    X86_AT(c, 0x932f6u);
    wr16((c.sbase[3] + (uint32_t)(0x8A550u)), (c.r[0] & 0xFFFFu));
    // 0932fc  xor eax, eax
    X86_AT(c, 0x932fcu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0932fe  mov al, byte ptr es:[0x80]
    X86_AT(c, 0x932feu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(0x80u))));
    // 093304  mov dword ptr [0x8a548], eax
    X86_AT(c, 0x93304u);
    wr32((c.sbase[3] + (uint32_t)(0x8A548u)), c.r[0]);
    // 093309  add eax, 3
    X86_AT(c, 0x93309u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3u, 0, 4); }
    // 09330e  and al, 0xfc
    X86_AT(c, 0x9330eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFCu, 1)); }
    // 093310  sub esp, eax
    X86_AT(c, 0x93310u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 093312  mov edi, esp
    X86_AT(c, 0x93312u);
    c.r[7] = c.r[4];
    // 093314  mov dword ptr [0x8a53c], edi
    X86_AT(c, 0x93314u);
    wr32((c.sbase[3] + (uint32_t)(0x8A53Cu)), c.r[7]);
    // 09331a  push edx
    X86_AT(c, 0x9331au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 09331b  mov ecx, eax
    X86_AT(c, 0x9331bu);
    c.r[1] = c.r[0];
    // 09331d  push ds
    X86_AT(c, 0x9331du);
    push32(c, c.sreg[3]);
    // 09331e  push es
    X86_AT(c, 0x9331eu);
    push32(c, c.sreg[0]);
    // 09331f  pop ds
    X86_AT(c, 0x9331fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 093320  push es
    X86_AT(c, 0x93320u);
    push32(c, c.sreg[0]);
    // 093321  push ss
    X86_AT(c, 0x93321u);
    push32(c, c.sreg[2]);
    // 093322  pop es
    X86_AT(c, 0x93322u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 093323  mov esi, 0x81
    X86_AT(c, 0x93323u);
    c.r[6] = 0x81u;
    // 093328  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x93328u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 09332a  pop es
    X86_AT(c, 0x9332au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 09332b  pop ds
    X86_AT(c, 0x9332bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_9332c:
    X86_TICK(c, 41);
    // 09332c  sub eax, eax
    X86_AT(c, 0x9332cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 09332e  mov ah, 0x30
    X86_AT(c, 0x9332eu);
    s8(c, 4, 0x30u);
    // 093330  int 0x21
    X86_AT(c, 0x93330u);
    x86_int(c, 0x21, 0x93332u);
    X86_TICK(c, 14);
    // 093332  mov word ptr [0x8a560], ax
    X86_AT(c, 0x93332u);
    wr16((c.sbase[3] + (uint32_t)(0x8A560u)), (c.r[0] & 0xFFFFu));
    // 093338  cmp byte ptr [0x8a562], 1
    X86_AT(c, 0x93338u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A562u))), 0x1u, 0, 1);
    // 09333f  je 0x93389
    X86_AT(c, 0x9333fu);
    if (x86_cc(c, 4)) { goto L_93389; }
    X86_TICK(c, 10);
    // 093341  shr eax, 0x10
    X86_AT(c, 0x93341u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 093344  cmp ax, 0x4458
    X86_AT(c, 0x93344u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x4458u, 0, 2);
    // 093348  jne 0x9334c
    X86_AT(c, 0x93348u);
    if (x86_cc(c, 5)) { goto L_9334c; }
    X86_TICK(c, 7);
    // 09334a  jmp 0x93389
    X86_AT(c, 0x9334au);
    goto L_93389;
L_9334c:
    X86_TICK(c, 13);
    // 09334c  mov byte ptr [0x8a562], 3
    X86_AT(c, 0x9334cu);
    wr8((c.sbase[3] + (uint32_t)(0x8A562u)), 0x3u);
    // 093353  mov ebx, dword ptr [0x8a52c]
    X86_AT(c, 0x93353u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x8A52Cu)));
    // 093359  jmp 0x93389
    X86_AT(c, 0x93359u);
    goto L_93389;
L_93389:
    X86_TICK(c, 8);
    // 093389  les edi, fword ptr [0x8a54c]
    X86_AT(c, 0x93389u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A54Cu)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 09338f  xor eax, eax
    X86_AT(c, 0x9338fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_93391:
    X86_TICK(c, 12);
    // 093391  cmp dword ptr es:[edi], 0x37384f4e
    X86_AT(c, 0x93391u);
    (void)x86_sub(c, rd32((c.sbase[0] + (uint32_t)(c.r[7]))), 0x37384F4Eu, 0, 4);
    // 093398  jne 0x933e4
    X86_AT(c, 0x93398u);
    if (x86_cc(c, 5)) { goto L_933e4; }
    X86_TICK(c, 12);
    // 09339a  cmp byte ptr es:[edi + 4], 0x3d
    X86_AT(c, 0x9339au);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u))), 0x3Du, 0, 1);
    // 09339f  jne 0x933e4
    X86_AT(c, 0x9339fu);
    if (x86_cc(c, 5)) { goto L_933e4; }
    X86_TICK(c, 16);
    // 0933a1  push eax
    X86_AT(c, 0x933a1u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0933a2  push edi
    X86_AT(c, 0x933a2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0933a3  cmp word ptr [0x8a553], 0
    X86_AT(c, 0x933a3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A553u))), 0x0u, 0, 2);
    // 0933ab  je 0x933e2
    X86_AT(c, 0x933abu);
    if (x86_cc(c, 4)) { goto L_933e2; }
    X86_TICK(c, 29);
    // 0933ad  mov word ptr [0x8a553], 0
    X86_AT(c, 0x933adu);
    wr16((c.sbase[3] + (uint32_t)(0x8A553u)), 0x0u);
    // 0933b6  add edi, 5
    X86_AT(c, 0x933b6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x5u, 0, 4); }
    // 0933b9  mov esi, edi
    X86_AT(c, 0x933b9u);
    c.r[6] = c.r[7];
    // 0933bb  mov al, 0x20
    X86_AT(c, 0x933bbu);
    s8(c, 0, 0x20u);
    // 0933bd  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x933bdu);
    x86_string(c, 4, 1, 243, 4, 3);
    // 0933bf  dec edi
    X86_AT(c, 0x933bfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0933c0  cmp byte ptr es:[edi], 0
    X86_AT(c, 0x933c0u);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0933c4  je 0x933e2
    X86_AT(c, 0x933c4u);
    if (x86_cc(c, 4)) { goto L_933e2; }
    X86_TICK(c, 2);
    // 0933c6  mov edi, esi
    X86_AT(c, 0x933c6u);
    c.r[7] = c.r[6];
L_933c8:
    X86_TICK(c, 11);
    // 0933c8  mov dl, byte ptr es:[edi]
    X86_AT(c, 0x933c8u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 0933cb  and dl, dl
    X86_AT(c, 0x933cbu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 0933cd  je 0x933d6
    X86_AT(c, 0x933cdu);
    if (x86_cc(c, 4)) { goto L_933d6; }
    X86_TICK(c, 39);
    // 0933cf  mov ah, 6
    X86_AT(c, 0x933cfu);
    s8(c, 4, 0x6u);
    // 0933d1  int 0x21
    X86_AT(c, 0x933d1u);
    x86_int(c, 0x21, 0x933d3u);
    X86_TICK(c, 9);
    // 0933d3  inc edi
    X86_AT(c, 0x933d3u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 0933d4  jmp 0x933c8
    X86_AT(c, 0x933d4u);
    X86_POLL(c, 0x933c8u); goto L_933c8;
L_933d6:
    X86_TICK(c, 41);
    // 0933d6  mov dl, 0xd
    X86_AT(c, 0x933d6u);
    s8(c, 2, 0xDu);
    // 0933d8  mov ah, 6
    X86_AT(c, 0x933d8u);
    s8(c, 4, 0x6u);
    // 0933da  int 0x21
    X86_AT(c, 0x933dau);
    x86_int(c, 0x21, 0x933dcu);
    X86_TICK(c, 41);
    // 0933dc  mov dl, 0xa
    X86_AT(c, 0x933dcu);
    s8(c, 2, 0xAu);
    // 0933de  mov ah, 6
    X86_AT(c, 0x933deu);
    s8(c, 4, 0x6u);
    // 0933e0  int 0x21
    X86_AT(c, 0x933e0u);
    x86_int(c, 0x21, 0x933e2u);
L_933e2:
    X86_TICK(c, 8);
    // 0933e2  pop edi
    X86_AT(c, 0x933e2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0933e3  pop eax
    X86_AT(c, 0x933e3u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_933e4:
    X86_TICK(c, 21);
    // 0933e4  mov ecx, 0xffffffff
    X86_AT(c, 0x933e4u);
    c.r[1] = 0xFFFFFFFFu;
    // 0933e9  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x933e9u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0933eb  cmp byte ptr es:[edi], 0
    X86_AT(c, 0x933ebu);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 0933ef  jne 0x93391
    X86_AT(c, 0x933efu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x93391u); goto L_93391; }
    X86_TICK(c, 14);
    // 0933f1  add edi, 3
    X86_AT(c, 0x933f1u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x3u, 0, 4); }
    // 0933f4  cmp byte ptr [0x8a560], 3
    X86_AT(c, 0x933f4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A560u))), 0x3u, 0, 1);
    // 0933fb  jb 0x9341d
    X86_AT(c, 0x933fbu);
    if (x86_cc(c, 2)) { goto L_9341d; }
    X86_TICK(c, 12);
    // 0933fd  cmp byte ptr [0x8a562], 1
    X86_AT(c, 0x933fdu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A562u))), 0x1u, 0, 1);
    // 093404  jne 0x9342a
    X86_AT(c, 0x93404u);
    if (x86_cc(c, 5)) { goto L_9342a; }
    X86_TICK(c, 12);
    // 093406  cmp byte ptr [0x8a562], 3
    X86_AT(c, 0x93406u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A562u))), 0x3u, 0, 1);
    // 09340d  je 0x9342a
    X86_AT(c, 0x9340du);
    if (x86_cc(c, 4)) { goto L_9342a; }
    X86_TICK(c, 11);
    // 09340f  mov dword ptr [0x8a55c], edi
    X86_AT(c, 0x9340fu);
    wr32((c.sbase[3] + (uint32_t)(0x8A55Cu)), c.r[7]);
    // 093415  mov word ptr [0x8a560], ds
    X86_AT(c, 0x93415u);
    wr16((c.sbase[3] + (uint32_t)(0x8A560u)), (uint32_t)c.sreg[3]);
    // 09341b  jmp 0x9345c
    X86_AT(c, 0x9341bu);
    goto L_9345c;
L_9341d:
    X86_TICK(c, 13);
    // 09341d  xor edx, edx
    X86_AT(c, 0x9341du);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 09341f  push edx
    X86_AT(c, 0x9341fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 093420  mov dword ptr [0x8a55c], esp
    X86_AT(c, 0x93420u);
    wr32((c.sbase[3] + (uint32_t)(0x8A55Cu)), c.r[4]);
    // 093426  jmp 0x9345c
    X86_AT(c, 0x93426u);
    goto L_9345c;
L_9342a:
    X86_TICK(c, 62);
    // 09342a  mov eax, es
    X86_AT(c, 0x9342au);
    c.r[0] = (uint32_t)c.sreg[0];
    // 09342c  lsl eax, eax
    X86_AT(c, 0x9342cu);
    { uint32_t v; if (x86_lsl(c, (c.r[0] & 0xFFFFu), v)) { c.r[0] = v; c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 09342f  xor eax, eax
    X86_AT(c, 0x9342fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 093431  sub ecx, ecx
    X86_AT(c, 0x93431u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 093433  dec ecx
    X86_AT(c, 0x93433u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 093434  mov ebx, edi
    X86_AT(c, 0x93434u);
    c.r[3] = c.r[7];
    // 093436  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x93436u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 093438  sub edi, ebx
    X86_AT(c, 0x93438u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[3], 0, 4); }
    // 09343a  lea eax, [edi + 3]
    X86_AT(c, 0x9343au);
    c.r[0] = (uint32_t)(c.r[7] + 0x3u);
    // 09343d  and eax, 0xfffc
    X86_AT(c, 0x9343du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFCu, 4); }
    // 093442  sub esp, eax
    X86_AT(c, 0x93442u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 093444  mov dword ptr [0x8a55c], esp
    X86_AT(c, 0x93444u);
    wr32((c.sbase[3] + (uint32_t)(0x8A55Cu)), c.r[4]);
    // 09344a  mov ecx, edi
    X86_AT(c, 0x9344au);
    c.r[1] = c.r[7];
    // 09344c  mov esi, ebx
    X86_AT(c, 0x9344cu);
    c.r[6] = c.r[3];
    // 09344e  mov edi, esp
    X86_AT(c, 0x9344eu);
    c.r[7] = c.r[4];
    // 093450  push ds
    X86_AT(c, 0x93450u);
    push32(c, c.sreg[3]);
    // 093451  mov ds, word ptr [0x8a550]
    X86_AT(c, 0x93451u);
    x86_load_seg(c, 3, rd16((c.sbase[3] + (uint32_t)(0x8A550u))) & 0xFFFFu);
    // 093457  push ss
    X86_AT(c, 0x93457u);
    push32(c, c.sreg[2]);
    // 093458  pop es
    X86_AT(c, 0x93458u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 093459  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x93459u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 09345b  pop ds
    X86_AT(c, 0x9345bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_9345c:
    X86_TICK(c, 33);
    // 09345c  mov eax, dword ptr [0x8a548]
    X86_AT(c, 0x9345cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A548u)));
    // 093461  inc eax
    X86_AT(c, 0x93461u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 093462  shr eax, 1
    X86_AT(c, 0x93462u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 093464  inc eax
    X86_AT(c, 0x93464u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 093465  inc eax
    X86_AT(c, 0x93465u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 093466  shl eax, 2
    X86_AT(c, 0x93466u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 093469  sub esp, eax
    X86_AT(c, 0x93469u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 09346b  mov dword ptr [0x8a542], esp
    X86_AT(c, 0x9346bu);
    wr32((c.sbase[3] + (uint32_t)(0x8A542u)), c.r[4]);
    // 093471  push ds
    X86_AT(c, 0x93471u);
    push32(c, c.sreg[3]);
    // 093472  pop es
    X86_AT(c, 0x93472u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 093473  call 0x9449c
    X86_AT(c, 0x93473u);
    push32(c, 0x93478u); x86_call_known(c, 0x9449cu, f_0009449c); X86_RET(c, 0x93478u);
    X86_TICK(c, 7);
    // 093478  call 0x94304
    X86_AT(c, 0x93478u);
    push32(c, 0x9347du); x86_call_known(c, 0x94304u, f_00094304); X86_RET(c, 0x9347du);
    X86_TICK(c, 14);
    // 09347d  push dword ptr [0x8a542]
    X86_AT(c, 0x9347du);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x8A542u))); push32(c, v); }
    // 093483  sub eax, eax
    X86_AT(c, 0x93483u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 093485  call 0x943a0
    X86_AT(c, 0x93485u);
    push32(c, 0x9348au); x86_call_known(c, 0x943a0u, f_000943a0); X86_RET(c, 0x9348au);
    X86_TICK(c, 14);
    // 09348a  push eax
    X86_AT(c, 0x9348au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09348b  cmp byte ptr [0x8a559], 1
    X86_AT(c, 0x9348bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A559u))), 0x1u, 0, 1);
    // 093492  je 0x934b4
    X86_AT(c, 0x93492u);
    if (x86_cc(c, 4)) { goto L_934b4; }
    X86_TICK(c, 12);
    // 093494  cmp word ptr [0x8a567], 0xabcd
    X86_AT(c, 0x93494u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A567u))), 0xABCDu, 0, 2);
    // 09349d  jne 0x934b4
    X86_AT(c, 0x9349du);
    if (x86_cc(c, 5)) { goto L_934b4; }
    X86_TICK(c, 15);
    // 09349f  mov eax, dword ptr [0x8a56d]
    X86_AT(c, 0x9349fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A56Du)));
    // 0934a4  cmp eax, dword ptr [0x8a569]
    X86_AT(c, 0x934a4u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A569u))), 0, 4);
    // 0934aa  jne 0x934b4
    X86_AT(c, 0x934aau);
    if (x86_cc(c, 5)) { goto L_934b4; }
    X86_TICK(c, 11);
    // 0934ac  mov edx, dword ptr [0x8a56d]
    X86_AT(c, 0x934acu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A56Du)));
    // 0934b2  jmp 0x934db
    X86_AT(c, 0x934b2u);
    goto L_934db;
L_934b4:
    X86_TICK(c, 12);
    // 0934b4  cmp byte ptr [0x8a553], 1
    X86_AT(c, 0x934b4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A553u))), 0x1u, 0, 1);
    // 0934bb  je 0x934e4
    X86_AT(c, 0x934bbu);
    if (x86_cc(c, 4)) { goto L_934e4; }
    X86_TICK(c, 12);
    // 0934bd  cmp word ptr [0x8a571], 0xabcd
    X86_AT(c, 0x934bdu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A571u))), 0xABCDu, 0, 2);
    // 0934c6  jne 0x934e4
    X86_AT(c, 0x934c6u);
    if (x86_cc(c, 5)) { goto L_934e4; }
    X86_TICK(c, 15);
    // 0934c8  mov eax, dword ptr [0x8a577]
    X86_AT(c, 0x934c8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A577u)));
    // 0934cd  cmp eax, dword ptr [0x8a573]
    X86_AT(c, 0x934cdu);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x8A573u))), 0, 4);
    // 0934d3  jne 0x934e4
    X86_AT(c, 0x934d3u);
    if (x86_cc(c, 5)) { goto L_934e4; }
    X86_TICK(c, 4);
    // 0934d5  mov edx, dword ptr [0x8a577]
    X86_AT(c, 0x934d5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A577u)));
L_934db:
    X86_TICK(c, 39);
    // 0934db  mov ah, 9
    X86_AT(c, 0x934dbu);
    s8(c, 4, 0x9u);
    // 0934dd  int 0x21
    X86_AT(c, 0x934ddu);
    x86_int(c, 0x21, 0x934dfu);
    X86_TICK(c, 7);
    // 0934df  jmp 0x9303b
    X86_AT(c, 0x934dfu);
    X86_POLL(c, 0x9303bu); goto L_9303b;
L_934e4:
    X86_TICK(c, 12);
    // 0934e4  cmp byte ptr [0x8a557], 1
    X86_AT(c, 0x934e4u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A557u))), 0x1u, 0, 1);
    // 0934eb  je 0x93518
    X86_AT(c, 0x934ebu);
    if (x86_cc(c, 4)) { goto L_93518; }
    X86_TICK(c, 12);
    // 0934ed  cmp word ptr [0x8a57b], 0xabcd
    X86_AT(c, 0x934edu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x8A57Bu))), 0xABCDu, 0, 2);
    // 0934f6  jne 0x93518
    X86_AT(c, 0x934f6u);
    if (x86_cc(c, 5)) { goto L_93518; }
    X86_TICK(c, 43);
    // 0934f8  mov edx, dword ptr cs:[0x93514]
    X86_AT(c, 0x934f8u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(0x93514u)));
    // 0934ff  mov ah, 9
    X86_AT(c, 0x934ffu);
    s8(c, 4, 0x9u);
    // 093501  int 0x21
    X86_AT(c, 0x93501u);
    x86_int(c, 0x21, 0x93503u);
    X86_TICK(c, 13);
    // 093503  mov edx, dword ptr [0x8a577]
    X86_AT(c, 0x93503u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A577u)));
    // 093509  add edx, 0xa
    X86_AT(c, 0x93509u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xAu, 0, 4); }
    // 09350c  jmp 0x934db
    X86_AT(c, 0x9350cu);
    X86_POLL(c, 0x934dbu); goto L_934db;
L_93518:
    X86_TICK(c, 7);
    // 093518  jmp 0x93036
    X86_AT(c, 0x93518u);
    X86_POLL(c, 0x93036u); goto L_93036;
    x86_fault(c, 0x93034u, "ran off the end of a function");
}
void f_00093045(X86Cpu& c) {
    X86_TICK(c, 10);
    // 093045  ret 
    X86_AT(c, 0x93045u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x93045u, "ran off the end of a function");
}
void f_0009351e(X86Cpu& c) {
    X86_TICK(c, 16);
    // 09351e  mov eax, dword ptr [0x8a52c]
    X86_AT(c, 0x9351eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A52Cu)));
    // 093523  add eax, 0x10
    X86_AT(c, 0x93523u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 093528  ret 
    X86_AT(c, 0x93528u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9351eu, "ran off the end of a function");
}
void f_0009352a(X86Cpu& c) {
    X86_TICK(c, 14);
    // 09352a  mov eax, dword ptr [0x8a534]
    X86_AT(c, 0x9352au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A534u)));
    // 09352f  ret 
    X86_AT(c, 0x9352fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9352au, "ran off the end of a function");
}
void f_00093530(X86Cpu& c) {
    X86_TICK(c, 14);
    // 093530  push ebx
    X86_AT(c, 0x93530u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093531  cmp byte ptr [0x8a562], 2
    X86_AT(c, 0x93531u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x8A562u))), 0x2u, 0, 1);
    // 093538  je 0x93575
    X86_AT(c, 0x93538u);
    if (x86_cc(c, 4)) { goto L_93575; }
    X86_TICK(c, 7);
    // 09353a  jmp 0x93575
    X86_AT(c, 0x9353au);
    goto L_93575;
L_93575:
    X86_TICK(c, 14);
    // 093575  pop ebx
    X86_AT(c, 0x93575u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093576  ret 4
    X86_AT(c, 0x93576u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x93530u, "ran off the end of a function");
}
void f_00093579(X86Cpu& c) {
    X86_TICK(c, 10);
    // 093579  ret 8
    X86_AT(c, 0x93579u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x93579u, "ran off the end of a function");
}
void f_0009358f(X86Cpu& c) {
    X86_TICK(c, 61);
    // 09358f  push ebp
    X86_AT(c, 0x9358fu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093590  mov ebp, esp
    X86_AT(c, 0x93590u);
    c.r[5] = c.r[4];
    // 093592  push esi
    X86_AT(c, 0x93592u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093593  push edi
    X86_AT(c, 0x93593u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093594  push ebx
    X86_AT(c, 0x93594u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093595  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0x93595u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 093599  mov cx, 0
    X86_AT(c, 0x93599u);
    s16(c, 1, 0x0u);
    // 09359d  mov dx, 0
    X86_AT(c, 0x9359du);
    s16(c, 2, 0x0u);
    // 0935a1  mov al, 1
    X86_AT(c, 0x935a1u);
    s8(c, 0, 0x1u);
    // 0935a3  mov ah, 0x42
    X86_AT(c, 0x935a3u);
    s8(c, 4, 0x42u);
    // 0935a5  clc 
    X86_AT(c, 0x935a5u);
    c.fl &= ~X86_CF;
    // 0935a6  int 0x21
    X86_AT(c, 0x935a6u);
    x86_int(c, 0x21, 0x935a8u);
    X86_TICK(c, 5);
    // 0935a8  jb 0x935f7
    X86_AT(c, 0x935a8u);
    if (x86_cc(c, 2)) { goto L_935f7; }
    X86_TICK(c, 57);
    // 0935aa  mov ecx, 0x9360d
    X86_AT(c, 0x935aau);
    c.r[1] = 0x9360Du;
    // 0935af  mov word ptr [ecx + 2], dx
    X86_AT(c, 0x935afu);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 0935b3  mov word ptr [ecx], ax
    X86_AT(c, 0x935b3u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[0] & 0xFFFFu));
    // 0935b6  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0x935b6u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0935ba  mov cx, 0
    X86_AT(c, 0x935bau);
    s16(c, 1, 0x0u);
    // 0935be  mov dx, 0
    X86_AT(c, 0x935beu);
    s16(c, 2, 0x0u);
    // 0935c2  mov al, 2
    X86_AT(c, 0x935c2u);
    s8(c, 0, 0x2u);
    // 0935c4  mov ah, 0x42
    X86_AT(c, 0x935c4u);
    s8(c, 4, 0x42u);
    // 0935c6  clc 
    X86_AT(c, 0x935c6u);
    c.fl &= ~X86_CF;
    // 0935c7  int 0x21
    X86_AT(c, 0x935c7u);
    x86_int(c, 0x21, 0x935c9u);
    X86_TICK(c, 5);
    // 0935c9  jb 0x935f7
    X86_AT(c, 0x935c9u);
    if (x86_cc(c, 2)) { goto L_935f7; }
    X86_TICK(c, 63);
    // 0935cb  mov ecx, 0x93611
    X86_AT(c, 0x935cbu);
    c.r[1] = 0x93611u;
    // 0935d0  mov word ptr [ecx + 2], dx
    X86_AT(c, 0x935d0u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 0935d4  mov word ptr [ecx], ax
    X86_AT(c, 0x935d4u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[0] & 0xFFFFu));
    // 0935d7  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0x935d7u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0935db  mov eax, 0x9360d
    X86_AT(c, 0x935dbu);
    c.r[0] = 0x9360Du;
    // 0935e0  mov cx, word ptr [eax + 2]
    X86_AT(c, 0x935e0u);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2u))));
    // 0935e4  mov dx, word ptr [eax]
    X86_AT(c, 0x935e4u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0935e7  mov al, 0
    X86_AT(c, 0x935e7u);
    s8(c, 0, 0x0u);
    // 0935e9  mov ah, 0x42
    X86_AT(c, 0x935e9u);
    s8(c, 4, 0x42u);
    // 0935eb  clc 
    X86_AT(c, 0x935ebu);
    c.fl &= ~X86_CF;
    // 0935ec  int 0x21
    X86_AT(c, 0x935ecu);
    x86_int(c, 0x21, 0x935eeu);
    X86_TICK(c, 5);
    // 0935ee  jb 0x935f7
    X86_AT(c, 0x935eeu);
    if (x86_cc(c, 2)) { goto L_935f7; }
    X86_TICK(c, 11);
    // 0935f0  mov eax, dword ptr [0x93611]
    X86_AT(c, 0x935f0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x93611u)));
    // 0935f5  jmp 0x93606
    X86_AT(c, 0x935f5u);
    goto L_93606;
L_935f7:
    X86_TICK(c, 6);
    // 0935f7  and eax, 0xffff
    X86_AT(c, 0x935f7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 0935fc  mov dword ptr [0x8a7de], eax
    X86_AT(c, 0x935fcu);
    wr32((c.sbase[3] + (uint32_t)(0x8A7DEu)), c.r[0]);
    // 093601  mov eax, 0xffffffff
    X86_AT(c, 0x93601u);
    c.r[0] = 0xFFFFFFFFu;
L_93606:
    X86_TICK(c, 28);
    // 093606  pop ebx
    X86_AT(c, 0x93606u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093607  pop edi
    X86_AT(c, 0x93607u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093608  pop esi
    X86_AT(c, 0x93608u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093609  mov esp, ebp
    X86_AT(c, 0x93609u);
    c.r[4] = c.r[5];
    // 09360b  pop ebp
    X86_AT(c, 0x9360bu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 09360c  ret 
    X86_AT(c, 0x9360cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x9358fu, "ran off the end of a function");
}
void f_000936ba(X86Cpu& c) {
    X86_TICK(c, 75);
    // 0936ba  push ebp
    X86_AT(c, 0x936bau);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0936bb  mov ebp, esp
    X86_AT(c, 0x936bbu);
    c.r[5] = c.r[4];
    // 0936bd  push esi
    X86_AT(c, 0x936bdu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0936be  push edi
    X86_AT(c, 0x936beu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0936bf  push ebx
    X86_AT(c, 0x936bfu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0936c0  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x936c0u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0936c3  mov eax, dword ptr [esi]
    X86_AT(c, 0x936c3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0936c5  mov ebx, dword ptr [esi + 4]
    X86_AT(c, 0x936c5u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 0936c8  mov ecx, dword ptr [esi + 8]
    X86_AT(c, 0x936c8u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0936cb  mov edx, dword ptr [esi + 0xc]
    X86_AT(c, 0x936cbu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)));
    // 0936ce  mov edi, dword ptr [esi + 0x14]
    X86_AT(c, 0x936ceu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)));
    // 0936d1  mov esi, dword ptr [esi + 0x10]
    X86_AT(c, 0x936d1u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)));
    // 0936d4  int 0x21
    X86_AT(c, 0x936d4u);
    x86_int(c, 0x21, 0x936d6u);
    X86_TICK(c, 67);
    // 0936d6  push edi
    X86_AT(c, 0x936d6u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0936d7  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x936d7u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0936da  mov dword ptr [edi], eax
    X86_AT(c, 0x936dau);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0936dc  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x936dcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 0936df  mov dword ptr [edi + 8], ecx
    X86_AT(c, 0x936dfu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), c.r[1]);
    // 0936e2  mov dword ptr [edi + 0xc], edx
    X86_AT(c, 0x936e2u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), c.r[2]);
    // 0936e5  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0x936e5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 0936e8  pushfd 
    X86_AT(c, 0x936e8u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0936e9  pop dword ptr [edi + 0x18]
    X86_AT(c, 0x936e9u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), v); }
    // 0936ec  and dword ptr [edi + 0x18], 1
    X86_AT(c, 0x936ecu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1u, 4)); }
    // 0936f0  pop dword ptr [edi + 0x14]
    X86_AT(c, 0x936f0u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), v); }
    // 0936f3  pop ebx
    X86_AT(c, 0x936f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0936f4  pop edi
    X86_AT(c, 0x936f4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0936f5  pop esi
    X86_AT(c, 0x936f5u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0936f6  mov esp, ebp
    X86_AT(c, 0x936f6u);
    c.r[4] = c.r[5];
    // 0936f8  pop ebp
    X86_AT(c, 0x936f8u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 0936f9  ret 
    X86_AT(c, 0x936f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x936bau, "ran off the end of a function");
}
void f_00093780(X86Cpu& c) {
    X86_TICK(c, 32);
    // 093780  push ebp
    X86_AT(c, 0x93780u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093781  mov ebp, esp
    X86_AT(c, 0x93781u);
    c.r[5] = c.r[4];
    // 093783  push ebx
    X86_AT(c, 0x93783u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093784  push esi
    X86_AT(c, 0x93784u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093785  push edi
    X86_AT(c, 0x93785u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093786  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x93786u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093789  mov esi, edi
    X86_AT(c, 0x93789u);
    c.r[6] = c.r[7];
    // 09378b  and byte ptr [esi + 0xc], 0x7f
    X86_AT(c, 0x9378bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 09378f  mov eax, 0x8a580
    X86_AT(c, 0x9378fu);
    c.r[0] = 0x8A580u;
    // 093794  cmp eax, edi
    X86_AT(c, 0x93794u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 093796  jne 0x937b0
    X86_AT(c, 0x93796u);
    if (x86_cc(c, 5)) { goto L_937b0; }
    X86_TICK(c, 13);
    // 093798  mov al, byte ptr [esi + 0xe]
    X86_AT(c, 0x93798u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu))));
    // 09379b  push eax
    X86_AT(c, 0x9379bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 09379c  call 0x94d10
    X86_AT(c, 0x9379cu);
    push32(c, 0x937a1u); x86_call_known(c, 0x94d10u, f_00094d10); X86_RET(c, 0x937a1u);
    X86_TICK(c, 10);
    // 0937a1  xchg ebx, eax
    X86_AT(c, 0x937a1u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0937a2  cmp bl, 1
    X86_AT(c, 0x937a2u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0937a5  je 0x937b0
    X86_AT(c, 0x937a5u);
    if (x86_cc(c, 4)) { goto L_937b0; }
    X86_TICK(c, 7);
    // 0937a7  cmp bl, 2
    X86_AT(c, 0x937a7u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0937aa  je 0x937b0
    X86_AT(c, 0x937aau);
    if (x86_cc(c, 4)) { goto L_937b0; }
    X86_TICK(c, 7);
    // 0937ac  or byte ptr [esi + 0xc], 1
    X86_AT(c, 0x937acu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_937b0:
    X86_TICK(c, 9);
    // 0937b0  mov eax, 0x8a594
    X86_AT(c, 0x937b0u);
    c.r[0] = 0x8A594u;
    // 0937b5  cmp eax, edi
    X86_AT(c, 0x937b5u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0937b7  jne 0x937d0
    X86_AT(c, 0x937b7u);
    if (x86_cc(c, 5)) { goto L_937d0; }
    X86_TICK(c, 13);
    // 0937b9  mov al, byte ptr [esi + 0xe]
    X86_AT(c, 0x937b9u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu))));
    // 0937bc  push eax
    X86_AT(c, 0x937bcu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0937bd  call 0x94d10
    X86_AT(c, 0x937bdu);
    push32(c, 0x937c2u); x86_call_known(c, 0x94d10u, f_00094d10); X86_RET(c, 0x937c2u);
    X86_TICK(c, 7);
    // 0937c2  cmp al, 2
    X86_AT(c, 0x937c2u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0937c4  jne 0x937cc
    X86_AT(c, 0x937c4u);
    if (x86_cc(c, 5)) { goto L_937cc; }
    X86_TICK(c, 14);
    // 0937c6  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0x937c6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
    // 0937ca  jmp 0x937d0
    X86_AT(c, 0x937cau);
    goto L_937d0;
L_937cc:
    X86_TICK(c, 7);
    // 0937cc  or byte ptr [esi + 0xc], 1
    X86_AT(c, 0x937ccu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_937d0:
    X86_TICK(c, 9);
    // 0937d0  mov eax, 0x8a5a8
    X86_AT(c, 0x937d0u);
    c.r[0] = 0x8A5A8u;
    // 0937d5  cmp eax, edi
    X86_AT(c, 0x937d5u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0937d7  jne 0x937dd
    X86_AT(c, 0x937d7u);
    if (x86_cc(c, 5)) { goto L_937dd; }
    X86_TICK(c, 7);
    // 0937d9  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0x937d9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
L_937dd:
    X86_TICK(c, 12);
    // 0937dd  test byte ptr [esi + 0xc], 1
    X86_AT(c, 0x937ddu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu))) & 0x1u, 1);
    // 0937e1  je 0x93805
    X86_AT(c, 0x937e1u);
    if (x86_cc(c, 4)) { goto L_93805; }
    X86_TICK(c, 9);
    // 0937e3  push 0x201
    X86_AT(c, 0x937e3u);
    { uint32_t v = 0x201u; push32(c, v); }
    // 0937e8  call 0x92e50
    X86_AT(c, 0x937e8u);
    push32(c, 0x937edu); x86_call_known(c, 0x92e50u, f_00092e50); X86_RET(c, 0x937edu);
    X86_TICK(c, 13);
    // 0937ed  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x937edu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 0937f0  pop ecx
    X86_AT(c, 0x937f0u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0937f1  and eax, eax
    X86_AT(c, 0x937f1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 0937f3  jne 0x937f9
    X86_AT(c, 0x937f3u);
    if (x86_cc(c, 5)) { goto L_937f9; }
    X86_TICK(c, 7);
    // 0937f5  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0x937f5u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
L_937f9:
    X86_TICK(c, 8);
    // 0937f9  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x937f9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 0937fc  mov dword ptr [esi], eax
    X86_AT(c, 0x937fcu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 0937fe  mov dword ptr [esi + 4], 0xffffffff
    X86_AT(c, 0x937feu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), 0xFFFFFFFFu);
L_93805:
    X86_TICK(c, 30);
    // 093805  mov word ptr [esi + 0x10], 0xffff
    X86_AT(c, 0x93805u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0xFFFFu);
    // 09380b  pop edi
    X86_AT(c, 0x9380bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09380c  pop esi
    X86_AT(c, 0x9380cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09380d  pop ebx
    X86_AT(c, 0x9380du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09380e  leave 
    X86_AT(c, 0x9380eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09380f  ret 4
    X86_AT(c, 0x9380fu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x93780u, "ran off the end of a function");
}
void f_0009382c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 09382c  push ebp
    X86_AT(c, 0x9382cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 09382d  mov ebp, esp
    X86_AT(c, 0x9382du);
    c.r[5] = c.r[4];
    // 09382f  push ebx
    X86_AT(c, 0x9382fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093830  push esi
    X86_AT(c, 0x93830u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093831  push edi
    X86_AT(c, 0x93831u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093832  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x93832u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093835  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x93835u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 093838  jmp 0x93856
    X86_AT(c, 0x93838u);
    goto L_93856;
L_9383a:
    X86_TICK(c, 9);
    // 09383a  mov eax, 0xa
    X86_AT(c, 0x9383au);
    c.r[0] = 0xAu;
    // 09383f  cmp eax, esi
    X86_AT(c, 0x9383fu);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 093841  jb 0x93845
    X86_AT(c, 0x93841u);
    if (x86_cc(c, 2)) { goto L_93845; }
    X86_TICK(c, 2);
    // 093843  mov eax, esi
    X86_AT(c, 0x93843u);
    c.r[0] = c.r[6];
L_93845:
    X86_TICK(c, 18);
    // 093845  xchg ebx, eax
    X86_AT(c, 0x93845u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 093846  push ebx
    X86_AT(c, 0x93846u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 093847  push edi
    X86_AT(c, 0x93847u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093848  mov ecx, dword ptr [0x8a484]
    X86_AT(c, 0x93848u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A484u)));
    // 09384e  call dword ptr [0x8a480]
    X86_AT(c, 0x9384eu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x8A480u))); push32(c, 0x93854u); x86_call(c, t); X86_RET(c, 0x93854u); }
    X86_TICK(c, 2);
    // 093854  sub esi, ebx
    X86_AT(c, 0x93854u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[3], 0, 4); }
L_93856:
    X86_TICK(c, 7);
    // 093856  and esi, esi
    X86_AT(c, 0x93856u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 093858  ja 0x9383a
    X86_AT(c, 0x93858u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x9383au); goto L_9383a; }
    X86_TICK(c, 28);
    // 09385a  pop edi
    X86_AT(c, 0x9385au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 09385b  pop esi
    X86_AT(c, 0x9385bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 09385c  pop ebx
    X86_AT(c, 0x9385cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 09385d  leave 
    X86_AT(c, 0x9385du);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 09385e  ret 8
    X86_AT(c, 0x9385eu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x9382cu, "ran off the end of a function");
}
void f_00093874(X86Cpu& c) {
    X86_TICK(c, 23);
    // 093874  push ebp
    X86_AT(c, 0x93874u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093875  mov ebp, esp
    X86_AT(c, 0x93875u);
    c.r[5] = c.r[4];
    // 093877  push esi
    X86_AT(c, 0x93877u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 093878  push edi
    X86_AT(c, 0x93878u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093879  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x93879u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 09387c  mov eax, dword ptr [0x8a470]
    X86_AT(c, 0x9387cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A470u)));
    // 093881  cmp eax, 0xffff
    X86_AT(c, 0x93881u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 093886  je 0x938ba
    X86_AT(c, 0x93886u);
    if (x86_cc(c, 4)) { goto L_938ba; }
    X86_TICK(c, 7);
    // 093888  cmp edi, eax
    X86_AT(c, 0x93888u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 09388a  jae 0x938ba
    X86_AT(c, 0x9388au);
    if (x86_cc(c, 3)) { goto L_938ba; }
    X86_TICK(c, 24);
    // 09388c  xchg esi, eax
    X86_AT(c, 0x9388cu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 09388d  sub esi, edi
    X86_AT(c, 0x9388du);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 09388f  add dword ptr [0x8a47c], esi
    X86_AT(c, 0x9388fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A47Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 093895  test byte ptr [0x8a46c], 0x10
    X86_AT(c, 0x93895u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x10u, 1);
    // 09389c  je 0x938af
    X86_AT(c, 0x9389cu);
    if (x86_cc(c, 4)) { goto L_938af; }
    X86_TICK(c, 12);
    // 09389e  test byte ptr [0x8a46c], 1
    X86_AT(c, 0x9389eu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x1u, 1);
    // 0938a5  jne 0x938af
    X86_AT(c, 0x938a5u);
    if (x86_cc(c, 5)) { goto L_938af; }
    X86_TICK(c, 11);
    // 0938a7  push esi
    X86_AT(c, 0x938a7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0938a8  push 0x8a488
    X86_AT(c, 0x938a8u);
    { uint32_t v = 0x8A488u; push32(c, v); }
    // 0938ad  jmp 0x938b5
    X86_AT(c, 0x938adu);
    goto L_938b5;
L_938af:
    X86_TICK(c, 4);
    // 0938af  push esi
    X86_AT(c, 0x938afu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0938b0  push 0x8a492
    X86_AT(c, 0x938b0u);
    { uint32_t v = 0x8A492u; push32(c, v); }
L_938b5:
    X86_TICK(c, 7);
    // 0938b5  call 0x9382c
    X86_AT(c, 0x938b5u);
    push32(c, 0x938bau); x86_call_known(c, 0x9382cu, f_0009382c); X86_RET(c, 0x938bau);
L_938ba:
    X86_TICK(c, 24);
    // 0938ba  pop edi
    X86_AT(c, 0x938bau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0938bb  pop esi
    X86_AT(c, 0x938bbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0938bc  leave 
    X86_AT(c, 0x938bcu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0938bd  ret 4
    X86_AT(c, 0x938bdu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x93874u, "ran off the end of a function");
}
void f_000938e0(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0938e0  push ebp
    X86_AT(c, 0x938e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0938e1  mov ebp, esp
    X86_AT(c, 0x938e1u);
    c.r[5] = c.r[4];
    // 0938e3  push ecx
    X86_AT(c, 0x938e3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0938e4  sub esp, 8
    X86_AT(c, 0x938e4u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 0938e7  push ebx
    X86_AT(c, 0x938e7u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0938e8  mov eax, dword ptr [0x8a79c]
    X86_AT(c, 0x938e8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 0938ed  mov bl, byte ptr [eax]
    X86_AT(c, 0x938edu);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0938ef  cmp bl, 0x2a
    X86_AT(c, 0x938efu);
    (void)x86_sub(c, g8(c, 3), 0x2Au, 0, 1);
    // 0938f2  je 0x93916
    X86_AT(c, 0x938f2u);
    if (x86_cc(c, 4)) { goto L_93916; }
    X86_TICK(c, 7);
    // 0938f4  cmp bl, 0x31
    X86_AT(c, 0x938f4u);
    (void)x86_sub(c, g8(c, 3), 0x31u, 0, 1);
    // 0938f7  jb 0x938fe
    X86_AT(c, 0x938f7u);
    if (x86_cc(c, 2)) { goto L_938fe; }
    X86_TICK(c, 7);
    // 0938f9  cmp bl, 0x39
    X86_AT(c, 0x938f9u);
    (void)x86_sub(c, g8(c, 3), 0x39u, 0, 1);
    // 0938fc  jbe 0x93916
    X86_AT(c, 0x938fcu);
    if (x86_cc(c, 6)) { goto L_93916; }
L_938fe:
    X86_TICK(c, 12);
    // 0938fe  cmp byte ptr [ebp + 0xc], 0
    X86_AT(c, 0x938feu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 1);
    // 093902  je 0x939bc
    X86_AT(c, 0x93902u);
    if (x86_cc(c, 4)) { goto L_939bc; }
    X86_TICK(c, 16);
    // 093908  mov eax, dword ptr [0x8a79c]
    X86_AT(c, 0x93908u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 09390d  cmp byte ptr [eax], 0x30
    X86_AT(c, 0x9390du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x30u, 0, 1);
    // 093910  jne 0x939bc
    X86_AT(c, 0x93910u);
    if (x86_cc(c, 5)) { goto L_939bc; }
L_93916:
    X86_TICK(c, 17);
    // 093916  mov eax, dword ptr [0x8a79c]
    X86_AT(c, 0x93916u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 09391b  mov al, byte ptr [eax]
    X86_AT(c, 0x9391bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 09391d  mov byte ptr [ebp - 9], al
    X86_AT(c, 0x9391du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 093920  cmp al, 0x30
    X86_AT(c, 0x93920u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 093922  jb 0x9396b
    X86_AT(c, 0x93922u);
    if (x86_cc(c, 2)) { goto L_9396b; }
    X86_TICK(c, 7);
    // 093924  cmp al, 0x39
    X86_AT(c, 0x93924u);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 093926  ja 0x9396b
    X86_AT(c, 0x93926u);
    if (x86_cc(c, 7)) { goto L_9396b; }
    X86_TICK(c, 9);
    // 093928  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0x93928u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 09392f  jmp 0x93950
    X86_AT(c, 0x9392fu);
    goto L_93950;
L_93931:
    X86_TICK(c, 30);
    // 093931  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x93931u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 093934  lea eax, [eax + eax*4]
    X86_AT(c, 0x93934u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 093937  add eax, eax
    X86_AT(c, 0x93937u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 093939  mov edx, dword ptr [0x8a79c]
    X86_AT(c, 0x93939u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 09393f  movzx ecx, byte ptr [edx]
    X86_AT(c, 0x9393fu);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(c.r[2])));
    // 093942  add ecx, eax
    X86_AT(c, 0x93942u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 093944  sub ecx, 0x30
    X86_AT(c, 0x93944u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x30u, 0, 4); }
    // 093947  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0x93947u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 09394a  inc dword ptr [0x8a79c]
    X86_AT(c, 0x9394au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A79Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_93950:
    X86_TICK(c, 17);
    // 093950  mov eax, dword ptr [0x8a79c]
    X86_AT(c, 0x93950u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 093955  mov al, byte ptr [eax]
    X86_AT(c, 0x93955u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093957  mov byte ptr [ebp - 0xa], al
    X86_AT(c, 0x93957u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), g8(c, 0));
    // 09395a  cmp al, 0x30
    X86_AT(c, 0x9395au);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 09395c  jb 0x939d2
    X86_AT(c, 0x9395cu);
    if (x86_cc(c, 2)) { goto L_939d2; }
    X86_TICK(c, 7);
    // 093962  cmp al, 0x39
    X86_AT(c, 0x93962u);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 093964  jbe 0x93931
    X86_AT(c, 0x93964u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x93931u); goto L_93931; }
    X86_TICK(c, 7);
    // 093966  jmp 0x939d2
    X86_AT(c, 0x93966u);
    goto L_939d2;
L_9396b:
    X86_TICK(c, 16);
    // 09396b  mov eax, dword ptr [0x8a79c]
    X86_AT(c, 0x9396bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 093970  cmp byte ptr [eax], 0x2a
    X86_AT(c, 0x93970u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Au, 0, 1);
    // 093973  jne 0x939d2
    X86_AT(c, 0x93973u);
    if (x86_cc(c, 5)) { goto L_939d2; }
    X86_TICK(c, 16);
    // 093975  mov eax, dword ptr [0x8a788]
    X86_AT(c, 0x93975u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A788u)));
    // 09397a  cmp dword ptr [eax], 0
    X86_AT(c, 0x9397au);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 4);
    // 09397d  jge 0x939a3
    X86_AT(c, 0x9397du);
    if (x86_cc(c, 13)) { goto L_939a3; }
    X86_TICK(c, 12);
    // 09397f  cmp byte ptr [ebp + 8], 0x50
    X86_AT(c, 0x9397fu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x50u, 0, 1);
    // 093983  jne 0x9398e
    X86_AT(c, 0x93983u);
    if (x86_cc(c, 5)) { goto L_9398e; }
    X86_TICK(c, 9);
    // 093985  mov dword ptr [ebp - 8], 0xffff
    X86_AT(c, 0x93985u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFu);
    // 09398c  jmp 0x939ad
    X86_AT(c, 0x9398cu);
    goto L_939ad;
L_9398e:
    X86_TICK(c, 26);
    // 09398e  mov eax, dword ptr [0x8a788]
    X86_AT(c, 0x9398eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A788u)));
    // 093993  mov eax, dword ptr [eax]
    X86_AT(c, 0x93993u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 093995  neg eax
    X86_AT(c, 0x93995u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 093997  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x93997u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 09399a  or byte ptr [0x8a46c], 1
    X86_AT(c, 0x9399au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A46Cu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
    // 0939a1  jmp 0x939ad
    X86_AT(c, 0x939a1u);
    goto L_939ad;
L_939a3:
    X86_TICK(c, 10);
    // 0939a3  mov eax, dword ptr [0x8a788]
    X86_AT(c, 0x939a3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A788u)));
    // 0939a8  mov eax, dword ptr [eax]
    X86_AT(c, 0x939a8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0939aa  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x939aau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_939ad:
    X86_TICK(c, 20);
    // 0939ad  add dword ptr [0x8a788], 4
    X86_AT(c, 0x939adu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A788u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 0939b4  inc dword ptr [0x8a79c]
    X86_AT(c, 0x939b4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A79Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0939ba  jmp 0x939d2
    X86_AT(c, 0x939bau);
    goto L_939d2;
L_939bc:
    X86_TICK(c, 12);
    // 0939bc  cmp byte ptr [ebp + 8], 0x50
    X86_AT(c, 0x939bcu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x50u, 0, 1);
    // 0939c0  jne 0x939cb
    X86_AT(c, 0x939c0u);
    if (x86_cc(c, 5)) { goto L_939cb; }
    X86_TICK(c, 9);
    // 0939c2  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0x939c2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 0939c9  jmp 0x939d2
    X86_AT(c, 0x939c9u);
    goto L_939d2;
L_939cb:
    X86_TICK(c, 2);
    // 0939cb  mov dword ptr [ebp - 8], 0xffff
    X86_AT(c, 0x939cbu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFu);
L_939d2:
    X86_TICK(c, 24);
    // 0939d2  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x939d2u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0939d5  pop ebx
    X86_AT(c, 0x939d5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0939d6  leave 
    X86_AT(c, 0x939d6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0939d7  ret 8
    X86_AT(c, 0x939d7u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x938e0u, "ran off the end of a function");
}
void f_000939f0(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0939f0  push ebp
    X86_AT(c, 0x939f0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0939f1  mov ebp, esp
    X86_AT(c, 0x939f1u);
    c.r[5] = c.r[4];
    // 0939f3  push ecx
    X86_AT(c, 0x939f3u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 0939f4  push eax
    X86_AT(c, 0x939f4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0939f5  push ebx
    X86_AT(c, 0x939f5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0939f6  push esi
    X86_AT(c, 0x939f6u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0939f7  push edi
    X86_AT(c, 0x939f7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0939f8  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x939f8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0939fb  mov dword ptr [0x8a79c], eax
    X86_AT(c, 0x939fbu);
    wr32((c.sbase[3] + (uint32_t)(0x8A79Cu)), c.r[0]);
L_93a00:
    X86_TICK(c, 29);
    // 093a00  sub eax, eax
    X86_AT(c, 0x93a00u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 093a02  mov byte ptr [0x8a46c], al
    X86_AT(c, 0x93a02u);
    wr8((c.sbase[3] + (uint32_t)(0x8A46Cu)), g8(c, 0));
    // 093a07  mov edx, 0xffff
    X86_AT(c, 0x93a07u);
    c.r[2] = 0xFFFFu;
    // 093a0c  mov dword ptr [0x8a470], edx
    X86_AT(c, 0x93a0cu);
    wr32((c.sbase[3] + (uint32_t)(0x8A470u)), c.r[2]);
    // 093a12  mov dword ptr [0x8a474], edx
    X86_AT(c, 0x93a12u);
    wr32((c.sbase[3] + (uint32_t)(0x8A474u)), c.r[2]);
    // 093a18  mov byte ptr [0x8a478], 1
    X86_AT(c, 0x93a18u);
    wr8((c.sbase[3] + (uint32_t)(0x8A478u)), 0x1u);
    // 093a1f  mov edi, eax
    X86_AT(c, 0x93a1fu);
    c.r[7] = c.r[0];
    // 093a21  mov edx, dword ptr [0x8a79c]
    X86_AT(c, 0x93a21u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 093a27  cmp al, byte ptr [edx]
    X86_AT(c, 0x93a27u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0, 1);
    // 093a29  je 0x93bd8
    X86_AT(c, 0x93a29u);
    if (x86_cc(c, 4)) { goto L_93bd8; }
    X86_TICK(c, 16);
    // 093a2f  mov eax, dword ptr [0x8a79c]
    X86_AT(c, 0x93a2fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 093a34  cmp byte ptr [eax], 0x25
    X86_AT(c, 0x93a34u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x25u, 0, 1);
    // 093a37  je 0x93a7c
    X86_AT(c, 0x93a37u);
    if (x86_cc(c, 4)) { goto L_93a7c; }
    X86_TICK(c, 28);
    // 093a39  mov edx, dword ptr [0x8a794]
    X86_AT(c, 0x93a39u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x8A794u)));
    // 093a3f  mov al, 0x25
    X86_AT(c, 0x93a3fu);
    s8(c, 0, 0x25u);
    // 093a41  mov ecx, dword ptr [0x8a79c]
    X86_AT(c, 0x93a41u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 093a47  push edi
    X86_AT(c, 0x93a47u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 093a48  mov edi, ecx
    X86_AT(c, 0x93a48u);
    c.r[7] = c.r[1];
    // 093a4a  mov ecx, edx
    X86_AT(c, 0x93a4au);
    c.r[1] = c.r[2];
    // 093a4c  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x93a4cu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 093a4e  jne 0x93a53
    X86_AT(c, 0x93a4eu);
    if (x86_cc(c, 5)) { goto L_93a53; }
    X86_TICK(c, 4);
    // 093a50  inc ecx
    X86_AT(c, 0x93a50u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 093a51  sub edx, ecx
    X86_AT(c, 0x93a51u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_93a53:
    X86_TICK(c, 41);
    // 093a53  pop edi
    X86_AT(c, 0x93a53u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093a54  mov edi, edx
    X86_AT(c, 0x93a54u);
    c.r[7] = c.r[2];
    // 093a56  mov eax, dword ptr [0x8a79c]
    X86_AT(c, 0x93a56u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 093a5b  mov dword ptr [0x8a78c], eax
    X86_AT(c, 0x93a5bu);
    wr32((c.sbase[3] + (uint32_t)(0x8A78Cu)), c.r[0]);
    // 093a60  mov dword ptr [0x8a790], edi
    X86_AT(c, 0x93a60u);
    wr32((c.sbase[3] + (uint32_t)(0x8A790u)), c.r[7]);
    // 093a66  add dword ptr [0x8a79c], edi
    X86_AT(c, 0x93a66u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A79Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 093a6c  sub dword ptr [0x8a794], edi
    X86_AT(c, 0x93a6cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A794u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 093a72  push 0x30
    X86_AT(c, 0x93a72u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 093a74  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x93a74u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 093a77  call dword ptr [ebp + 0xc]
    X86_AT(c, 0x93a77u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, 0x93a7au); x86_call(c, t); X86_RET(c, 0x93a7au); }
    X86_TICK(c, 7);
    // 093a7a  jmp 0x93a00
    X86_AT(c, 0x93a7au);
    X86_POLL(c, 0x93a00u); goto L_93a00;
L_93a7c:
    X86_TICK(c, 6);
    // 093a7c  mov esi, dword ptr [0x8a79c]
    X86_AT(c, 0x93a7cu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 093a82  sub ebx, ebx
    X86_AT(c, 0x93a82u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_93a84:
    X86_TICK(c, 25);
    // 093a84  inc dword ptr [0x8a79c]
    X86_AT(c, 0x93a84u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A79Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 093a8a  mov eax, dword ptr [0x8a79c]
    X86_AT(c, 0x93a8au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 093a8f  movzx eax, byte ptr [eax]
    X86_AT(c, 0x93a8fu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0])));
    // 093a92  sub eax, 0x20
    X86_AT(c, 0x93a92u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x20u, 0, 4); }
    // 093a95  cmp eax, 0x10
    X86_AT(c, 0x93a95u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 093a98  ja 0x93b17
    X86_AT(c, 0x93a98u);
    if (x86_cc(c, 7)) { goto L_93b17; }
    X86_TICK(c, 7);
    // 093a9e  jmp dword ptr cs:[eax*4 + 0x93aa6]
    X86_AT(c, 0x93a9eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x93AA6u)));
      switch (t) {
      case 0x93aeau: goto L_93aea;
      case 0x93af3u: goto L_93af3;
      case 0x93afcu: goto L_93afc;
      case 0x93b05u: goto L_93b05;
      case 0x93b0eu: goto L_93b0e;
      case 0x93b17u: goto L_93b17;
      default: x86_jump(c, t); return; } }
L_93aea:
    X86_TICK(c, 14);
    // 093aea  or byte ptr [0x8a46c], 1
    X86_AT(c, 0x93aeau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A46Cu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
    // 093af1  jmp 0x93b19
    X86_AT(c, 0x93af1u);
    goto L_93b19;
L_93af3:
    X86_TICK(c, 14);
    // 093af3  or byte ptr [0x8a46c], 2
    X86_AT(c, 0x93af3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A46Cu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 093afa  jmp 0x93b19
    X86_AT(c, 0x93afau);
    goto L_93b19;
L_93afc:
    X86_TICK(c, 14);
    // 093afc  or byte ptr [0x8a46c], 4
    X86_AT(c, 0x93afcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A46Cu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 093b03  jmp 0x93b19
    X86_AT(c, 0x93b03u);
    goto L_93b19;
L_93b05:
    X86_TICK(c, 14);
    // 093b05  or byte ptr [0x8a46c], 8
    X86_AT(c, 0x93b05u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A46Cu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
    // 093b0c  jmp 0x93b19
    X86_AT(c, 0x93b0cu);
    goto L_93b19;
L_93b0e:
    X86_TICK(c, 14);
    // 093b0e  or byte ptr [0x8a46c], 0x10
    X86_AT(c, 0x93b0eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A46Cu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
    // 093b15  jmp 0x93b19
    X86_AT(c, 0x93b15u);
    goto L_93b19;
L_93b17:
    X86_TICK(c, 2);
    // 093b17  mov bl, 1
    X86_AT(c, 0x93b17u);
    s8(c, 3, 0x1u);
L_93b19:
    X86_TICK(c, 7);
    // 093b19  and bl, bl
    X86_AT(c, 0x93b19u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 093b1b  je 0x93a84
    X86_AT(c, 0x93b1bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x93a84u); goto L_93a84; }
    X86_TICK(c, 13);
    // 093b21  push 0
    X86_AT(c, 0x93b21u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 093b23  push 0x46
    X86_AT(c, 0x93b23u);
    { uint32_t v = 0x46u; push32(c, v); }
    // 093b25  mov ecx, ebp
    X86_AT(c, 0x93b25u);
    c.r[1] = c.r[5];
    // 093b27  call 0x938e0
    X86_AT(c, 0x93b27u);
    push32(c, 0x93b2cu); x86_call_known(c, 0x938e0u, f_000938e0); X86_RET(c, 0x93b2cu);
    X86_TICK(c, 18);
    // 093b2c  mov dword ptr [0x8a470], eax
    X86_AT(c, 0x93b2cu);
    wr32((c.sbase[3] + (uint32_t)(0x8A470u)), c.r[0]);
    // 093b31  mov eax, dword ptr [0x8a79c]
    X86_AT(c, 0x93b31u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 093b36  cmp byte ptr [eax], 0x2e
    X86_AT(c, 0x93b36u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Eu, 0, 1);
    // 093b39  jne 0x93b75
    X86_AT(c, 0x93b39u);
    if (x86_cc(c, 5)) { goto L_93b75; }
    X86_TICK(c, 22);
    // 093b3b  inc dword ptr [0x8a79c]
    X86_AT(c, 0x93b3bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A79Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 093b41  mov eax, dword ptr [0x8a79c]
    X86_AT(c, 0x93b41u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 093b46  cmp byte ptr [eax], 0x2d
    X86_AT(c, 0x93b46u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Du, 0, 1);
    // 093b49  jne 0x93b65
    X86_AT(c, 0x93b49u);
    if (x86_cc(c, 5)) { goto L_93b65; }
L_93b4b:
    X86_TICK(c, 23);
    // 093b4b  inc dword ptr [0x8a79c]
    X86_AT(c, 0x93b4bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A79Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 093b51  mov eax, dword ptr [0x8a79c]
    X86_AT(c, 0x93b51u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 093b56  mov al, byte ptr [eax]
    X86_AT(c, 0x93b56u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093b58  mov byte ptr [ebp - 5], al
    X86_AT(c, 0x93b58u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 093b5b  cmp al, 0x30
    X86_AT(c, 0x93b5bu);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 093b5d  jb 0x93b75
    X86_AT(c, 0x93b5du);
    if (x86_cc(c, 2)) { goto L_93b75; }
    X86_TICK(c, 7);
    // 093b5f  cmp al, 0x39
    X86_AT(c, 0x93b5fu);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 093b61  jbe 0x93b4b
    X86_AT(c, 0x93b61u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x93b4bu); goto L_93b4b; }
    X86_TICK(c, 7);
    // 093b63  jmp 0x93b75
    X86_AT(c, 0x93b63u);
    goto L_93b75;
L_93b65:
    X86_TICK(c, 13);
    // 093b65  push 1
    X86_AT(c, 0x93b65u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 093b67  push 0x50
    X86_AT(c, 0x93b67u);
    { uint32_t v = 0x50u; push32(c, v); }
    // 093b69  mov ecx, ebp
    X86_AT(c, 0x93b69u);
    c.r[1] = c.r[5];
    // 093b6b  call 0x938e0
    X86_AT(c, 0x93b6bu);
    push32(c, 0x93b70u); x86_call_known(c, 0x938e0u, f_000938e0); X86_RET(c, 0x93b70u);
    X86_TICK(c, 2);
    // 093b70  mov dword ptr [0x8a474], eax
    X86_AT(c, 0x93b70u);
    wr32((c.sbase[3] + (uint32_t)(0x8A474u)), c.r[0]);
L_93b75:
    X86_TICK(c, 16);
    // 093b75  mov eax, dword ptr [0x8a79c]
    X86_AT(c, 0x93b75u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 093b7a  cmp byte ptr [eax], 0x68
    X86_AT(c, 0x93b7au);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x68u, 0, 1);
    // 093b7d  jne 0x93b88
    X86_AT(c, 0x93b7du);
    if (x86_cc(c, 5)) { goto L_93b88; }
    X86_TICK(c, 9);
    // 093b7f  mov byte ptr [0x8a478], 0
    X86_AT(c, 0x93b7fu);
    wr8((c.sbase[3] + (uint32_t)(0x8A478u)), 0x0u);
    // 093b86  jmp 0x93bac
    X86_AT(c, 0x93b86u);
    goto L_93bac;
L_93b88:
    X86_TICK(c, 16);
    // 093b88  mov eax, dword ptr [0x8a79c]
    X86_AT(c, 0x93b88u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 093b8d  cmp byte ptr [eax], 0x6c
    X86_AT(c, 0x93b8du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x6Cu, 0, 1);
    // 093b90  jne 0x93b9b
    X86_AT(c, 0x93b90u);
    if (x86_cc(c, 5)) { goto L_93b9b; }
    X86_TICK(c, 9);
    // 093b92  mov byte ptr [0x8a478], 2
    X86_AT(c, 0x93b92u);
    wr8((c.sbase[3] + (uint32_t)(0x8A478u)), 0x2u);
    // 093b99  jmp 0x93bac
    X86_AT(c, 0x93b99u);
    goto L_93bac;
L_93b9b:
    X86_TICK(c, 16);
    // 093b9b  mov eax, dword ptr [0x8a79c]
    X86_AT(c, 0x93b9bu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 093ba0  cmp byte ptr [eax], 0x4c
    X86_AT(c, 0x93ba0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x4Cu, 0, 1);
    // 093ba3  jne 0x93bb2
    X86_AT(c, 0x93ba3u);
    if (x86_cc(c, 5)) { goto L_93bb2; }
    X86_TICK(c, 2);
    // 093ba5  mov byte ptr [0x8a478], 3
    X86_AT(c, 0x93ba5u);
    wr8((c.sbase[3] + (uint32_t)(0x8A478u)), 0x3u);
L_93bac:
    X86_TICK(c, 6);
    // 093bac  inc dword ptr [0x8a79c]
    X86_AT(c, 0x93bacu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A79Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_93bb2:
    X86_TICK(c, 21);
    // 093bb2  mov eax, dword ptr [0x8a79c]
    X86_AT(c, 0x93bb2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 093bb7  mov al, byte ptr [eax]
    X86_AT(c, 0x93bb7u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 093bb9  push eax
    X86_AT(c, 0x93bb9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 093bba  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x93bbau);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 093bbd  call dword ptr [ebp + 0xc]
    X86_AT(c, 0x93bbdu);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, 0x93bc0u); x86_call(c, t); X86_RET(c, 0x93bc0u); }
    X86_TICK(c, 26);
    // 093bc0  inc dword ptr [0x8a79c]
    X86_AT(c, 0x93bc0u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A79Cu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 093bc6  mov eax, dword ptr [0x8a79c]
    X86_AT(c, 0x93bc6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A79Cu)));
    // 093bcb  sub eax, esi
    X86_AT(c, 0x93bcbu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 093bcd  sub dword ptr [0x8a794], eax
    X86_AT(c, 0x93bcdu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A794u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 093bd3  jmp 0x93a00
    X86_AT(c, 0x93bd3u);
    X86_POLL(c, 0x93a00u); goto L_93a00;
L_93bd8:
    X86_TICK(c, 28);
    // 093bd8  pop edi
    X86_AT(c, 0x93bd8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 093bd9  pop esi
    X86_AT(c, 0x93bd9u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 093bda  pop ebx
    X86_AT(c, 0x93bdau);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 093bdb  leave 
    X86_AT(c, 0x93bdbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093bdc  ret 0xc
    X86_AT(c, 0x93bdcu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x939f0u, "ran off the end of a function");
}
void f_00093bec(X86Cpu& c) {
    X86_TICK(c, 28);
    // 093bec  push ebp
    X86_AT(c, 0x93becu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093bed  mov ebp, esp
    X86_AT(c, 0x93bedu);
    c.r[5] = c.r[4];
    // 093bef  push ecx
    X86_AT(c, 0x93befu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093bf0  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x93bf0u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 093bf3  add dword ptr [0x8a47c], ecx
    X86_AT(c, 0x93bf3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A47Cu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[1], 0, 4)); }
    // 093bf9  mov eax, dword ptr [0x8a470]
    X86_AT(c, 0x93bf9u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x8A470u)));
    // 093bfe  cmp eax, 0xffff
    X86_AT(c, 0x93bfeu);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 093c03  je 0x93c0f
    X86_AT(c, 0x93c03u);
    if (x86_cc(c, 4)) { goto L_93c0f; }
    X86_TICK(c, 7);
    // 093c05  cmp ecx, eax
    X86_AT(c, 0x93c05u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 093c07  ja 0x93c0f
    X86_AT(c, 0x93c07u);
    if (x86_cc(c, 7)) { goto L_93c0f; }
    X86_TICK(c, 7);
    // 093c09  sub dword ptr [0x8a470], ecx
    X86_AT(c, 0x93c09u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x8A470u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
L_93c0f:
    X86_TICK(c, 16);
    // 093c0f  leave 
    X86_AT(c, 0x93c0fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093c10  ret 4
    X86_AT(c, 0x93c10u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x93becu, "ran off the end of a function");
}
void f_00093c28(X86Cpu& c) {
    X86_TICK(c, 25);
    // 093c28  push ebp
    X86_AT(c, 0x93c28u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 093c29  mov ebp, esp
    X86_AT(c, 0x93c29u);
    c.r[5] = c.r[4];
    // 093c2b  push ecx
    X86_AT(c, 0x93c2bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 093c2c  mov dword ptr [0x8a7d4], 0
    X86_AT(c, 0x93c2cu);
    wr32((c.sbase[3] + (uint32_t)(0x8A7D4u)), 0x0u);
    // 093c36  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x93c36u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093c39  movzx eax, byte ptr [eax + 0xc]
    X86_AT(c, 0x93c39u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)));
    // 093c3d  cmp eax, 0x69
    X86_AT(c, 0x93c3du);
    (void)x86_sub(c, c.r[0], 0x69u, 0, 4);
    // 093c40  ja 0x93c5a
    X86_AT(c, 0x93c40u);
    if (x86_cc(c, 7)) { goto L_93c5a; }
    X86_TICK(c, 7);
    // 093c42  cmp eax, 0x69
    X86_AT(c, 0x93c42u);
    (void)x86_sub(c, c.r[0], 0x69u, 0, 4);
    // 093c45  je 0x93c72
    X86_AT(c, 0x93c45u);
    if (x86_cc(c, 4)) { goto L_93c72; }
    X86_TICK(c, 7);
    // 093c47  cmp eax, 0x58
    X86_AT(c, 0x93c47u);
    (void)x86_sub(c, c.r[0], 0x58u, 0, 4);
    // 093c4a  je 0x93ce1
    X86_AT(c, 0x93c4au);
    if (x86_cc(c, 4)) { goto L_93ce1; }
    X86_TICK(c, 7);
    // 093c50  cmp eax, 0x64
    X86_AT(c, 0x93c50u);
    (void)x86_sub(c, c.r[0], 0x64u, 0, 4);
    // 093c53  je 0x93c72
    X86_AT(c, 0x93c53u);
    if (x86_cc(c, 4)) { goto L_93c72; }
    X86_TICK(c, 7);
    // 093c55  jmp 0x93d15
    X86_AT(c, 0x93c55u);
    goto L_93d15;
L_93c5a:
    X86_TICK(c, 7);
    // 093c5a  cmp eax, 0x6f
    X86_AT(c, 0x93c5au);
    (void)x86_sub(c, c.r[0], 0x6Fu, 0, 4);
    // 093c5d  je 0x93cbc
    X86_AT(c, 0x93c5du);
    if (x86_cc(c, 4)) { goto L_93cbc; }
    X86_TICK(c, 7);
    // 093c5f  cmp eax, 0x75
    X86_AT(c, 0x93c5fu);
    (void)x86_sub(c, c.r[0], 0x75u, 0, 4);
    // 093c62  je 0x93cb3
    X86_AT(c, 0x93c62u);
    if (x86_cc(c, 4)) { goto L_93cb3; }
    X86_TICK(c, 7);
    // 093c64  cmp eax, 0x78
    X86_AT(c, 0x93c64u);
    (void)x86_sub(c, c.r[0], 0x78u, 0, 4);
    // 093c67  je 0x93ce1
    X86_AT(c, 0x93c67u);
    if (x86_cc(c, 4)) { goto L_93ce1; }
    X86_TICK(c, 7);
    // 093c6d  jmp 0x93d15
    X86_AT(c, 0x93c6du);
    goto L_93d15;
L_93c72:
    X86_TICK(c, 17);
    // 093c72  mov byte ptr [0x8a7c8], 0xa
    X86_AT(c, 0x93c72u);
    wr8((c.sbase[3] + (uint32_t)(0x8A7C8u)), 0xAu);
    // 093c79  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x93c79u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093c7c  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x93c7cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 093c7f  and edx, edx
    X86_AT(c, 0x93c7fu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 093c81  jge 0x93c8f
    X86_AT(c, 0x93c81u);
    if (x86_cc(c, 13)) { goto L_93c8f; }
    X86_TICK(c, 15);
    // 093c83  neg dword ptr [eax + 8]
    X86_AT(c, 0x93c83u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_neg(c, v, 4)); }
    // 093c86  mov byte ptr [0x8a7ca], 0x2d
    X86_AT(c, 0x93c86u);
    wr8((c.sbase[3] + (uint32_t)(0x8A7CAu)), 0x2Du);
    // 093c8d  jmp 0x93cd3
    X86_AT(c, 0x93c8du);
    goto L_93cd3;
L_93c8f:
    X86_TICK(c, 12);
    // 093c8f  test byte ptr [0x8a46c], 2
    X86_AT(c, 0x93c8fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x2u, 1);
    // 093c96  je 0x93ca1
    X86_AT(c, 0x93c96u);
    if (x86_cc(c, 4)) { goto L_93ca1; }
    X86_TICK(c, 9);
    // 093c98  mov byte ptr [0x8a7ca], 0x2b
    X86_AT(c, 0x93c98u);
    wr8((c.sbase[3] + (uint32_t)(0x8A7CAu)), 0x2Bu);
    // 093c9f  jmp 0x93cd3
    X86_AT(c, 0x93c9fu);
    goto L_93cd3;
L_93ca1:
    X86_TICK(c, 12);
    // 093ca1  test byte ptr [0x8a46c], 4
    X86_AT(c, 0x93ca1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x4u, 1);
    // 093ca8  je 0x93d15
    X86_AT(c, 0x93ca8u);
    if (x86_cc(c, 4)) { goto L_93d15; }
    X86_TICK(c, 9);
    // 093caa  mov byte ptr [0x8a7ca], 0x20
    X86_AT(c, 0x93caau);
    wr8((c.sbase[3] + (uint32_t)(0x8A7CAu)), 0x20u);
    // 093cb1  jmp 0x93cd3
    X86_AT(c, 0x93cb1u);
    goto L_93cd3;
L_93cb3:
    X86_TICK(c, 9);
    // 093cb3  mov byte ptr [0x8a7c8], 0xa
    X86_AT(c, 0x93cb3u);
    wr8((c.sbase[3] + (uint32_t)(0x8A7C8u)), 0xAu);
    // 093cba  jmp 0x93d15
    X86_AT(c, 0x93cbau);
    goto L_93d15;
L_93cbc:
    X86_TICK(c, 14);
    // 093cbc  mov byte ptr [0x8a7c8], 8
    X86_AT(c, 0x93cbcu);
    wr8((c.sbase[3] + (uint32_t)(0x8A7C8u)), 0x8u);
    // 093cc3  test byte ptr [0x8a46c], 8
    X86_AT(c, 0x93cc3u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x8u, 1);
    // 093cca  je 0x93d15
    X86_AT(c, 0x93ccau);
    if (x86_cc(c, 4)) { goto L_93d15; }
    X86_TICK(c, 2);
    // 093ccc  mov byte ptr [0x8a7ca], 0x30
    X86_AT(c, 0x93cccu);
    wr8((c.sbase[3] + (uint32_t)(0x8A7CAu)), 0x30u);
L_93cd3:
    X86_TICK(c, 11);
    // 093cd3  mov dword ptr [0x8a7d4], 1
    X86_AT(c, 0x93cd3u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7D4u)), 0x1u);
    // 093cdd  push 1
    X86_AT(c, 0x93cddu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 093cdf  jmp 0x93d0e
    X86_AT(c, 0x93cdfu);
    goto L_93d0e;
L_93ce1:
    X86_TICK(c, 14);
    // 093ce1  mov byte ptr [0x8a7c8], 0x10
    X86_AT(c, 0x93ce1u);
    wr8((c.sbase[3] + (uint32_t)(0x8A7C8u)), 0x10u);
    // 093ce8  test byte ptr [0x8a46c], 8
    X86_AT(c, 0x93ce8u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x8A46Cu))) & 0x8u, 1);
    // 093cef  je 0x93d15
    X86_AT(c, 0x93cefu);
    if (x86_cc(c, 4)) { goto L_93d15; }
    X86_TICK(c, 18);
    // 093cf1  mov byte ptr [0x8a7ca], 0x30
    X86_AT(c, 0x93cf1u);
    wr8((c.sbase[3] + (uint32_t)(0x8A7CAu)), 0x30u);
    // 093cf8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x93cf8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 093cfb  mov al, byte ptr [eax + 0xc]
    X86_AT(c, 0x93cfbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))));
    // 093cfe  mov byte ptr [0x8a7cb], al
    X86_AT(c, 0x93cfeu);
    wr8((c.sbase[3] + (uint32_t)(0x8A7CBu)), g8(c, 0));
    // 093d03  mov eax, 2
    X86_AT(c, 0x93d03u);
    c.r[0] = 0x2u;
    // 093d08  mov dword ptr [0x8a7d4], eax
    X86_AT(c, 0x93d08u);
    wr32((c.sbase[3] + (uint32_t)(0x8A7D4u)), c.r[0]);
    // 093d0d  push eax
    X86_AT(c, 0x93d0du);
    { uint32_t v = c.r[0]; push32(c, v); }
L_93d0e:
    X86_TICK(c, 9);
    // 093d0e  mov ecx, ebp
    X86_AT(c, 0x93d0eu);
    c.r[1] = c.r[5];
    // 093d10  call 0x93bec
    X86_AT(c, 0x93d10u);
    push32(c, 0x93d15u); x86_call_known(c, 0x93becu, f_00093bec); X86_RET(c, 0x93d15u);
L_93d15:
    X86_TICK(c, 16);
    // 093d15  leave 
    X86_AT(c, 0x93d15u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 093d16  ret 
    X86_AT(c, 0x93d16u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x93c28u, "ran off the end of a function");
}
}

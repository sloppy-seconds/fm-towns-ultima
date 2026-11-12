#include "p_game_funcs.h"
namespace p_game {
void f_000532a8(X86Cpu& c) {
    X86_TICK(c, 67);
    // 0532a8  enter 0xc, 0
    X86_AT(c, 0x532a8u);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 0532ac  push ebx
    X86_AT(c, 0x532acu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0532ad  push esi
    X86_AT(c, 0x532adu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0532ae  push edi
    X86_AT(c, 0x532aeu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0532af  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x532afu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 0532b2  mov esi, dword ptr [ebp + 0x20]
    X86_AT(c, 0x532b2u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x20u)));
    // 0532b5  mov ax, word ptr [0x4b81e]
    X86_AT(c, 0x532b5u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4B81Eu))));
    // 0532bb  mov word ptr [ebp - 0xc], ax
    X86_AT(c, 0x532bbu);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), (c.r[0] & 0xFFFFu));
    // 0532bf  sub eax, eax
    X86_AT(c, 0x532bfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0532c1  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x532c1u);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
    // 0532c7  mov ebx, eax
    X86_AT(c, 0x532c7u);
    c.r[3] = c.r[0];
    // 0532c9  mov edx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x532c9u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 0532cc  mov byte ptr [edx], 1
    X86_AT(c, 0x532ccu);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), 0x1u);
    // 0532cf  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x532cfu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 0532d2  mov byte ptr [edx], al
    X86_AT(c, 0x532d2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), g8(c, 0));
    // 0532d4  mov byte ptr [ebp - 2], al
    X86_AT(c, 0x532d4u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), g8(c, 0));
    // 0532d7  mov edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x532d7u);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 0532da  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0x532dau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 0532dd  mov dl, byte ptr [edx]
    X86_AT(c, 0x532ddu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[2]))));
    // 0532df  mov byte ptr [ebp - 9], dl
    X86_AT(c, 0x532dfu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 2));
    // 0532e2  mov byte ptr [esi], al
    X86_AT(c, 0x532e2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), g8(c, 0));
    // 0532e4  jmp 0x5335d
    X86_AT(c, 0x532e4u);
    goto L_5335d;
L_532e9:
    X86_TICK(c, 13);
    // 0532e9  movzx edx, byte ptr [ebp - 9]
    X86_AT(c, 0x532e9u);
    c.r[2] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)));
    // 0532ed  cmp edx, 0x2b
    X86_AT(c, 0x532edu);
    (void)x86_sub(c, c.r[2], 0x2Bu, 0, 4);
    // 0532f0  je 0x53336
    X86_AT(c, 0x532f0u);
    if (x86_cc(c, 4)) { goto L_53336; }
    X86_TICK(c, 7);
    // 0532f2  cmp edx, 0x61
    X86_AT(c, 0x532f2u);
    (void)x86_sub(c, c.r[2], 0x61u, 0, 4);
    // 0532f5  je 0x53310
    X86_AT(c, 0x532f5u);
    if (x86_cc(c, 4)) { goto L_53310; }
    X86_TICK(c, 7);
    // 0532f7  cmp edx, 0x62
    X86_AT(c, 0x532f7u);
    (void)x86_sub(c, c.r[2], 0x62u, 0, 4);
    // 0532fa  je 0x53344
    X86_AT(c, 0x532fau);
    if (x86_cc(c, 4)) { goto L_53344; }
    X86_TICK(c, 7);
    // 0532fc  cmp edx, 0x72
    X86_AT(c, 0x532fcu);
    (void)x86_sub(c, c.r[2], 0x72u, 0, 4);
    // 0532ff  je 0x5332b
    X86_AT(c, 0x532ffu);
    if (x86_cc(c, 4)) { goto L_5332b; }
    X86_TICK(c, 7);
    // 053301  cmp edx, 0x74
    X86_AT(c, 0x53301u);
    (void)x86_sub(c, c.r[2], 0x74u, 0, 4);
    // 053304  je 0x5334c
    X86_AT(c, 0x53304u);
    if (x86_cc(c, 4)) { goto L_5334c; }
    X86_TICK(c, 7);
    // 053306  cmp edx, 0x75
    X86_AT(c, 0x53306u);
    (void)x86_sub(c, c.r[2], 0x75u, 0, 4);
    // 053309  je 0x5333f
    X86_AT(c, 0x53309u);
    if (x86_cc(c, 4)) { goto L_5333f; }
    X86_TICK(c, 7);
    // 05330b  cmp edx, 0x77
    X86_AT(c, 0x5330bu);
    (void)x86_sub(c, c.r[2], 0x77u, 0, 4);
    // 05330e  jne 0x53367
    X86_AT(c, 0x5330eu);
    if (x86_cc(c, 5)) { goto L_53367; }
L_53310:
    X86_TICK(c, 7);
    // 053310  and bl, bl
    X86_AT(c, 0x53310u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 053312  jne 0x53367
    X86_AT(c, 0x53312u);
    if (x86_cc(c, 5)) { goto L_53367; }
    X86_TICK(c, 33);
    // 053314  mov bl, 1
    X86_AT(c, 0x53314u);
    s8(c, 3, 0x1u);
    // 053316  mov byte ptr [edi], bl
    X86_AT(c, 0x53316u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), g8(c, 3));
    // 053318  mov al, byte ptr [ebp - 9]
    X86_AT(c, 0x53318u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))));
    // 05331b  cmp al, 0x61
    X86_AT(c, 0x5331bu);
    (void)x86_sub(c, g8(c, 0), 0x61u, 0, 1);
    // 05331d  mov edx, dword ptr [ebp + 0x18]
    X86_AT(c, 0x5331du);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 053320  sete byte ptr [edx]
    X86_AT(c, 0x53320u);
    wr8((c.sbase[3] + (uint32_t)(c.r[2])), x86_cc(c, 4) ? 1u : 0u);
    // 053323  cmp al, 0x77
    X86_AT(c, 0x53323u);
    (void)x86_sub(c, g8(c, 0), 0x77u, 0, 1);
    // 053325  sete byte ptr [ebp - 2]
    X86_AT(c, 0x53325u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu)), x86_cc(c, 4) ? 1u : 0u);
    // 053329  jmp 0x53352
    X86_AT(c, 0x53329u);
    goto L_53352;
L_5332b:
    X86_TICK(c, 7);
    // 05332b  and bl, bl
    X86_AT(c, 0x5332bu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 05332d  jne 0x53367
    X86_AT(c, 0x5332du);
    if (x86_cc(c, 5)) { goto L_53367; }
    X86_TICK(c, 11);
    // 05332f  mov bl, 1
    X86_AT(c, 0x5332fu);
    s8(c, 3, 0x1u);
    // 053331  mov byte ptr [edi], 0
    X86_AT(c, 0x53331u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x0u);
    // 053334  jmp 0x53352
    X86_AT(c, 0x53334u);
    goto L_53352;
L_53336:
    X86_TICK(c, 7);
    // 053336  and bl, bl
    X86_AT(c, 0x53336u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 053338  je 0x53367
    X86_AT(c, 0x53338u);
    if (x86_cc(c, 4)) { goto L_53367; }
    X86_TICK(c, 9);
    // 05333a  mov byte ptr [edi], 2
    X86_AT(c, 0x5333au);
    wr8((c.sbase[3] + (uint32_t)(c.r[7])), 0x2u);
    // 05333d  jmp 0x53352
    X86_AT(c, 0x5333du);
    goto L_53352;
L_5333f:
    X86_TICK(c, 11);
    // 05333f  mov eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x5333fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 053342  jmp 0x53347
    X86_AT(c, 0x53342u);
    goto L_53347;
L_53344:
    X86_TICK(c, 4);
    // 053344  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x53344u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
L_53347:
    X86_TICK(c, 9);
    // 053347  mov byte ptr [eax], 0
    X86_AT(c, 0x53347u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x0u);
    // 05334a  jmp 0x53352
    X86_AT(c, 0x5334au);
    goto L_53352;
L_5334c:
    X86_TICK(c, 6);
    // 05334c  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x5334cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 05334f  mov byte ptr [eax], 1
    X86_AT(c, 0x5334fu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0x1u);
L_53352:
    X86_TICK(c, 16);
    // 053352  inc dword ptr [ebp - 8]
    X86_AT(c, 0x53352u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 053355  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x53355u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 053358  mov al, byte ptr [eax]
    X86_AT(c, 0x53358u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 05335a  mov byte ptr [ebp - 9], al
    X86_AT(c, 0x5335au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
L_5335d:
    X86_TICK(c, 12);
    // 05335d  cmp byte ptr [ebp - 9], 0
    X86_AT(c, 0x5335du);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))), 0x0u, 0, 1);
    // 053361  jne 0x532e9
    X86_AT(c, 0x53361u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x532e9u); goto L_532e9; }
    X86_TICK(c, 7);
    // 053363  and bl, bl
    X86_AT(c, 0x53363u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 053365  jne 0x53372
    X86_AT(c, 0x53365u);
    if (x86_cc(c, 5)) { goto L_53372; }
L_53367:
    X86_TICK(c, 9);
    // 053367  mov word ptr [0x4b81e], 1
    X86_AT(c, 0x53367u);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), 0x1u);
    // 053370  jmp 0x533ce
    X86_AT(c, 0x53370u);
    goto L_533ce;
L_53372:
    X86_TICK(c, 12);
    // 053372  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x53372u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 053376  jne 0x5338c
    X86_AT(c, 0x53376u);
    if (x86_cc(c, 5)) { goto L_5338c; }
    X86_TICK(c, 29);
    // 053378  mov eax, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x53378u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 05337b  cmp byte ptr [eax], 0
    X86_AT(c, 0x5337bu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 05337e  mov al, byte ptr [edi]
    X86_AT(c, 0x5337eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7]))));
    // 053380  push eax
    X86_AT(c, 0x53380u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053381  push dword ptr [ebp + 8]
    X86_AT(c, 0x53381u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 053384  call 0x55650
    X86_AT(c, 0x53384u);
    push32(c, 0x53389u); x86_call_known(c, 0x55650u, f_00055650); X86_RET(c, 0x53389u);
    X86_TICK(c, 2);
    // 053389  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x53389u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
L_5338c:
    X86_TICK(c, 16);
    // 05338c  mov eax, dword ptr [ebp + 0x18]
    X86_AT(c, 0x5338cu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u)));
    // 05338f  cmp byte ptr [eax], 0
    X86_AT(c, 0x5338fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 053392  je 0x5339e
    X86_AT(c, 0x53392u);
    if (x86_cc(c, 4)) { goto L_5339e; }
    X86_TICK(c, 12);
    // 053394  cmp word ptr [0x4b81e], 2
    X86_AT(c, 0x53394u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4B81Eu))), 0x2u, 0, 2);
    // 05339c  je 0x533a4
    X86_AT(c, 0x5339cu);
    if (x86_cc(c, 4)) { goto L_533a4; }
L_5339e:
    X86_TICK(c, 12);
    // 05339e  cmp byte ptr [ebp - 2], 0
    X86_AT(c, 0x5339eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFEu))), 0x0u, 0, 1);
    // 0533a2  je 0x533c4
    X86_AT(c, 0x533a2u);
    if (x86_cc(c, 4)) { goto L_533c4; }
L_533a4:
    X86_TICK(c, 20);
    // 0533a4  sub eax, eax
    X86_AT(c, 0x533a4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0533a6  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x533a6u);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
    // 0533ac  mov edx, dword ptr [ebp + 0x1c]
    X86_AT(c, 0x533acu);
    c.r[2] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)));
    // 0533af  cmp byte ptr [edx], 0
    X86_AT(c, 0x533afu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0x0u, 0, 1);
    // 0533b2  je 0x533b7
    X86_AT(c, 0x533b2u);
    if (x86_cc(c, 4)) { goto L_533b7; }
    X86_TICK(c, 9);
    // 0533b4  push eax
    X86_AT(c, 0x533b4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0533b5  jmp 0x533b9
    X86_AT(c, 0x533b5u);
    goto L_533b9;
L_533b7:
    X86_TICK(c, 2);
    // 0533b7  push 0
    X86_AT(c, 0x533b7u);
    { uint32_t v = 0x0u; push32(c, v); }
L_533b9:
    X86_TICK(c, 12);
    // 0533b9  push dword ptr [ebp + 8]
    X86_AT(c, 0x533b9u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0533bc  call 0x55628
    X86_AT(c, 0x533bcu);
    push32(c, 0x533c1u); x86_call_known(c, 0x55628u, f_00055628); X86_RET(c, 0x533c1u);
    X86_TICK(c, 2);
    // 0533c1  mov byte ptr [ebp - 1], al
    X86_AT(c, 0x533c1u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)), g8(c, 0));
L_533c4:
    X86_TICK(c, 12);
    // 0533c4  cmp word ptr [0x4b81e], 0
    X86_AT(c, 0x533c4u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4B81Eu))), 0x0u, 0, 2);
    // 0533cc  je 0x533d3
    X86_AT(c, 0x533ccu);
    if (x86_cc(c, 4)) { goto L_533d3; }
L_533ce:
    X86_TICK(c, 9);
    // 0533ce  mov byte ptr [esi], 1
    X86_AT(c, 0x533ceu);
    wr8((c.sbase[3] + (uint32_t)(c.r[6])), 0x1u);
    // 0533d1  jmp 0x533dd
    X86_AT(c, 0x533d1u);
    goto L_533dd;
L_533d3:
    X86_TICK(c, 6);
    // 0533d3  mov ax, word ptr [ebp - 0xc]
    X86_AT(c, 0x533d3u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))));
    // 0533d7  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x533d7u);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
L_533dd:
    X86_TICK(c, 32);
    // 0533dd  mov al, byte ptr [ebp - 1]
    X86_AT(c, 0x533ddu);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu))));
    // 0533e0  pop edi
    X86_AT(c, 0x533e0u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0533e1  pop esi
    X86_AT(c, 0x533e1u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0533e2  pop ebx
    X86_AT(c, 0x533e2u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0533e3  leave 
    X86_AT(c, 0x533e3u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0533e4  ret 0x1c
    X86_AT(c, 0x533e4u);
    c.eip = pop32(c); c.r[4] += 0x1Cu; return;
    x86_fault(c, 0x532a8u, "ran off the end of a function");
}
void f_000533f8(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0533f8  enter 4, 0
    X86_AT(c, 0x533f8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0533fc  sub ecx, ecx
    X86_AT(c, 0x533fcu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0533fe  jmp 0x53415
    X86_AT(c, 0x533feu);
    goto L_53415;
L_53400:
    X86_TICK(c, 16);
    // 053400  lea eax, [ecx + ecx*4]
    X86_AT(c, 0x53400u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 053403  lea eax, [eax*4]
    X86_AT(c, 0x53403u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 05340a  cmp word ptr [eax + 0x4b5cc], 0
    X86_AT(c, 0x5340au);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x4B5CCu))), 0x0u, 0, 2);
    // 053412  je 0x5341a
    X86_AT(c, 0x53412u);
    if (x86_cc(c, 4)) { goto L_5341a; }
    X86_TICK(c, 2);
    // 053414  inc ecx
    X86_AT(c, 0x53414u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
L_53415:
    X86_TICK(c, 7);
    // 053415  cmp ecx, 0x19
    X86_AT(c, 0x53415u);
    (void)x86_sub(c, c.r[1], 0x19u, 0, 4);
    // 053418  jbe 0x53400
    X86_AT(c, 0x53418u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x53400u); goto L_53400; }
L_5341a:
    X86_TICK(c, 7);
    // 05341a  cmp ecx, 0x19
    X86_AT(c, 0x5341au);
    (void)x86_sub(c, c.r[1], 0x19u, 0, 4);
    // 05341d  jbe 0x53431
    X86_AT(c, 0x5341du);
    if (x86_cc(c, 6)) { goto L_53431; }
    X86_TICK(c, 11);
    // 05341f  mov word ptr [0x4b81e], 4
    X86_AT(c, 0x5341fu);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), 0x4u);
    // 053428  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x53428u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 05342f  jmp 0x53443
    X86_AT(c, 0x5342fu);
    goto L_53443;
L_53431:
    X86_TICK(c, 8);
    // 053431  lea eax, [ecx + ecx*4]
    X86_AT(c, 0x53431u);
    c.r[0] = (uint32_t)(c.r[1] + c.r[1] * 4);
    // 053434  lea eax, [eax*4]
    X86_AT(c, 0x53434u);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 05343b  add eax, 0x4b5c0
    X86_AT(c, 0x5343bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4B5C0u, 0, 4); }
    // 053440  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x53440u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_53443:
    X86_TICK(c, 20);
    // 053443  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x53443u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 053446  leave 
    X86_AT(c, 0x53446u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 053447  ret 
    X86_AT(c, 0x53447u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x533f8u, "ran off the end of a function");
}
void f_00053458(X86Cpu& c) {
    X86_TICK(c, 30);
    // 053458  push ebp
    X86_AT(c, 0x53458u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 053459  mov ebp, esp
    X86_AT(c, 0x53459u);
    c.r[5] = c.r[4];
    // 05345b  push ebx
    X86_AT(c, 0x5345bu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 05345c  push edi
    X86_AT(c, 0x5345cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05345d  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x5345du);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 053460  mov al, byte ptr [ebp + 0xc]
    X86_AT(c, 0x53460u);
    s8(c, 0, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))));
    // 053463  mov byte ptr [edi + 0xe], al
    X86_AT(c, 0x53463u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu)), g8(c, 0));
    // 053466  cmp byte ptr [ebp + 0x10], 0
    X86_AT(c, 0x53466u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 05346a  jne 0x53474
    X86_AT(c, 0x5346au);
    if (x86_cc(c, 5)) { goto L_53474; }
    X86_TICK(c, 9);
    // 05346c  mov word ptr [edi + 0xc], 2
    X86_AT(c, 0x5346cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x2u);
    // 053472  jmp 0x53488
    X86_AT(c, 0x53472u);
    goto L_53488;
L_53474:
    X86_TICK(c, 12);
    // 053474  cmp byte ptr [ebp + 0x10], 1
    X86_AT(c, 0x53474u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 053478  jne 0x53482
    X86_AT(c, 0x53478u);
    if (x86_cc(c, 5)) { goto L_53482; }
    X86_TICK(c, 9);
    // 05347a  mov word ptr [edi + 0xc], 4
    X86_AT(c, 0x5347au);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x4u);
    // 053480  jmp 0x53488
    X86_AT(c, 0x53480u);
    goto L_53488;
L_53482:
    X86_TICK(c, 2);
    // 053482  mov word ptr [edi + 0xc], 6
    X86_AT(c, 0x53482u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), 0x6u);
L_53488:
    X86_TICK(c, 12);
    // 053488  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0x53488u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 05348c  je 0x53492
    X86_AT(c, 0x5348cu);
    if (x86_cc(c, 4)) { goto L_53492; }
    X86_TICK(c, 7);
    // 05348e  or byte ptr [edi + 0xc], 8
    X86_AT(c, 0x5348eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
L_53492:
    X86_TICK(c, 12);
    // 053492  cmp byte ptr [ebp + 0x18], 0
    X86_AT(c, 0x53492u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x18u))), 0x0u, 0, 1);
    // 053496  je 0x5349c
    X86_AT(c, 0x53496u);
    if (x86_cc(c, 4)) { goto L_5349c; }
    X86_TICK(c, 7);
    // 053498  or byte ptr [edi + 0xc], 0x40
    X86_AT(c, 0x53498u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x40u, 1)); }
L_5349c:
    X86_TICK(c, 12);
    // 05349c  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x5349cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 05349f  call 0x55d70
    X86_AT(c, 0x5349fu);
    push32(c, 0x534a4u); x86_call_known(c, 0x55d70u, f_00055d70); X86_RET(c, 0x534a4u);
    X86_TICK(c, 10);
    // 0534a4  xchg ebx, eax
    X86_AT(c, 0x534a4u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0534a5  cmp bl, 1
    X86_AT(c, 0x534a5u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 0534a8  je 0x534af
    X86_AT(c, 0x534a8u);
    if (x86_cc(c, 4)) { goto L_534af; }
    X86_TICK(c, 7);
    // 0534aa  cmp bl, 2
    X86_AT(c, 0x534aau);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0534ad  jne 0x534b3
    X86_AT(c, 0x534adu);
    if (x86_cc(c, 5)) { goto L_534b3; }
L_534af:
    X86_TICK(c, 2);
    // 0534af  mov byte ptr [ebp + 0x1c], 0
    X86_AT(c, 0x534afu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu)), 0x0u);
L_534b3:
    X86_TICK(c, 12);
    // 0534b3  cmp byte ptr [ebp + 0x1c], 0
    X86_AT(c, 0x534b3u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x1Cu))), 0x0u, 0, 1);
    // 0534b7  je 0x534bd
    X86_AT(c, 0x534b7u);
    if (x86_cc(c, 4)) { goto L_534bd; }
    X86_TICK(c, 7);
    // 0534b9  or byte ptr [edi + 0xc], 1
    X86_AT(c, 0x534b9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_534bd:
    X86_TICK(c, 12);
    // 0534bd  cmp byte ptr [ebp + 0x14], 0
    X86_AT(c, 0x534bdu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u))), 0x0u, 0, 1);
    // 0534c1  je 0x534cf
    X86_AT(c, 0x534c1u);
    if (x86_cc(c, 4)) { goto L_534cf; }
    X86_TICK(c, 16);
    // 0534c3  push 2
    X86_AT(c, 0x534c3u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0534c5  push 0
    X86_AT(c, 0x534c5u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0534c7  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x534c7u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0534ca  call 0x55db8
    X86_AT(c, 0x534cau);
    push32(c, 0x534cfu); x86_call_known(c, 0x55db8u, f_00055db8); X86_RET(c, 0x534cfu);
L_534cf:
    X86_TICK(c, 24);
    // 0534cf  pop edi
    X86_AT(c, 0x534cfu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0534d0  pop ebx
    X86_AT(c, 0x534d0u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0534d1  leave 
    X86_AT(c, 0x534d1u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0534d2  ret 0x18
    X86_AT(c, 0x534d2u);
    c.eip = pop32(c); c.r[4] += 0x18u; return;
    x86_fault(c, 0x53458u, "ran off the end of a function");
}
void f_000534dc(X86Cpu& c) {
    X86_TICK(c, 63);
    // 0534dc  enter 0xc, 0
    X86_AT(c, 0x534dcu);
    x86_enter(c, 0xCu, 0x0u, 4);
    // 0534e0  push ebx
    X86_AT(c, 0x534e0u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0534e1  test byte ptr [0x4b84c], 1
    X86_AT(c, 0x534e1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B84Cu))) & 0x1u, 1);
    // 0534e8  setne al
    X86_AT(c, 0x534e8u);
    s8(c, 0, x86_cc(c, 5) ? 1u : 0u);
    // 0534eb  xchg ebx, eax
    X86_AT(c, 0x534ebu);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0534ec  xor bl, 1
    X86_AT(c, 0x534ecu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v ^ 0x1u, 1)); }
    // 0534ef  mov byte ptr [ebp - 8], bl
    X86_AT(c, 0x534efu);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), g8(c, 3));
    // 0534f2  lea ebx, [ebp - 0xa]
    X86_AT(c, 0x534f2u);
    c.r[3] = (uint32_t)(c.r[5] + 0xFFFFFFF6u);
    // 0534f5  push ebx
    X86_AT(c, 0x534f5u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0534f6  lea eax, [ebp - 8]
    X86_AT(c, 0x534f6u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF8u);
    // 0534f9  push eax
    X86_AT(c, 0x534f9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0534fa  lea eax, [ebp - 7]
    X86_AT(c, 0x534fau);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFF9u);
    // 0534fd  push eax
    X86_AT(c, 0x534fdu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0534fe  lea eax, [ebp - 6]
    X86_AT(c, 0x534feu);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFAu);
    // 053501  push eax
    X86_AT(c, 0x53501u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053502  lea eax, [ebp - 5]
    X86_AT(c, 0x53502u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 053505  push eax
    X86_AT(c, 0x53505u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053506  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x53506u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 053509  push dword ptr [ebp + 8]
    X86_AT(c, 0x53509u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 05350c  call 0x532a8
    X86_AT(c, 0x5350cu);
    push32(c, 0x53511u); x86_call_known(c, 0x532a8u, f_000532a8); X86_RET(c, 0x53511u);
    X86_TICK(c, 14);
    // 053511  mov byte ptr [ebp - 9], al
    X86_AT(c, 0x53511u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 053514  cmp byte ptr [ebx], 0
    X86_AT(c, 0x53514u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[3]))), 0x0u, 0, 1);
    // 053517  je 0x53522
    X86_AT(c, 0x53517u);
    if (x86_cc(c, 4)) { goto L_53522; }
    X86_TICK(c, 9);
    // 053519  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x53519u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 053520  jmp 0x5352a
    X86_AT(c, 0x53520u);
    goto L_5352a;
L_53522:
    X86_TICK(c, 7);
    // 053522  call 0x533f8
    X86_AT(c, 0x53522u);
    push32(c, 0x53527u); x86_call_known(c, 0x533f8u, f_000533f8); X86_RET(c, 0x53527u);
    X86_TICK(c, 2);
    // 053527  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x53527u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_5352a:
    X86_TICK(c, 12);
    // 05352a  cmp dword ptr [ebp - 4], 0
    X86_AT(c, 0x5352au);
    (void)x86_sub(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))), 0x0u, 0, 4);
    // 05352e  je 0x53555
    X86_AT(c, 0x5352eu);
    if (x86_cc(c, 4)) { goto L_53555; }
    X86_TICK(c, 37);
    // 053530  push dword ptr [ebp - 5]
    X86_AT(c, 0x53530u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu))); push32(c, v); }
    // 053533  push dword ptr [ebp - 8]
    X86_AT(c, 0x53533u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))); push32(c, v); }
    // 053536  push dword ptr [ebp - 7]
    X86_AT(c, 0x53536u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF9u))); push32(c, v); }
    // 053539  push dword ptr [ebp - 6]
    X86_AT(c, 0x53539u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))); push32(c, v); }
    // 05353c  push dword ptr [ebp - 9]
    X86_AT(c, 0x5353cu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u))); push32(c, v); }
    // 05353f  push dword ptr [ebp - 4]
    X86_AT(c, 0x5353fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu))); push32(c, v); }
    // 053542  call 0x53458
    X86_AT(c, 0x53542u);
    push32(c, 0x53547u); x86_call_known(c, 0x53458u, f_00053458); X86_RET(c, 0x53547u);
    X86_TICK(c, 13);
    // 053547  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0x53547u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 05354a  or byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x5354au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x80u, 1)); }
    // 05354e  mov dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x5354eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0xFFFFFFFFu);
L_53555:
    X86_TICK(c, 24);
    // 053555  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x53555u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 053558  pop ebx
    X86_AT(c, 0x53558u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 053559  leave 
    X86_AT(c, 0x53559u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05355a  ret 
    X86_AT(c, 0x5355au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x534dcu, "ran off the end of a function");
}
void f_00053570(X86Cpu& c) {
    X86_TICK(c, 44);
    // 053570  enter 0x14, 0
    X86_AT(c, 0x53570u);
    x86_enter(c, 0x14u, 0x0u, 4);
    // 053574  push ebx
    X86_AT(c, 0x53574u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 053575  push esi
    X86_AT(c, 0x53575u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 053576  push edi
    X86_AT(c, 0x53576u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053577  mov edi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x53577u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 05357a  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x5357au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 053581  mov ax, word ptr [0x4b81e]
    X86_AT(c, 0x53581u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4B81Eu))));
    // 053587  mov word ptr [ebp - 0xa], ax
    X86_AT(c, 0x53587u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), (c.r[0] & 0xFFFFu));
    // 05358b  mov word ptr [0x4b81e], 0
    X86_AT(c, 0x5358bu);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), 0x0u);
    // 053594  mov ebx, dword ptr [ebp + 8]
    X86_AT(c, 0x53594u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 053597  sub esi, esi
    X86_AT(c, 0x53597u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 053599  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x53599u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 05359d  jne 0x53647
    X86_AT(c, 0x5359du);
    if (x86_cc(c, 5)) { goto L_53647; }
    X86_TICK(c, 12);
    // 0535a3  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x535a3u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 0535a7  jne 0x5363a
    X86_AT(c, 0x535a7u);
    if (x86_cc(c, 5)) { goto L_5363a; }
    X86_TICK(c, 20);
    // 0535ad  push edi
    X86_AT(c, 0x535adu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0535ae  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x535aeu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 0535b1  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x535b1u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0535b4  push eax
    X86_AT(c, 0x535b4u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0535b5  call 0x55d0c
    X86_AT(c, 0x535b5u);
    push32(c, 0x535bau); x86_call_known(c, 0x55d0cu, f_00055d0c); X86_RET(c, 0x535bau);
    X86_TICK(c, 9);
    // 0535ba  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x535bau);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0535bd  jmp 0x5382c
    X86_AT(c, 0x535bdu);
    goto L_5382c;
L_535c2:
    X86_TICK(c, 32);
    // 0535c2  mov edx, edi
    X86_AT(c, 0x535c2u);
    c.r[2] = c.r[7];
    // 0535c4  mov al, 0xa
    X86_AT(c, 0x535c4u);
    s8(c, 0, 0xAu);
    // 0535c6  mov ecx, esi
    X86_AT(c, 0x535c6u);
    c.r[1] = c.r[6];
    // 0535c8  add ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x535c8u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0535cb  push edi
    X86_AT(c, 0x535cbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0535cc  mov edi, ecx
    X86_AT(c, 0x535ccu);
    c.r[7] = c.r[1];
    // 0535ce  mov dword ptr [ebp - 0x14], ecx
    X86_AT(c, 0x535ceu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[1]);
    // 0535d1  mov ecx, edx
    X86_AT(c, 0x535d1u);
    c.r[1] = c.r[2];
    // 0535d3  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x535d3u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 0535d5  jne 0x535da
    X86_AT(c, 0x535d5u);
    if (x86_cc(c, 5)) { goto L_535da; }
    X86_TICK(c, 4);
    // 0535d7  inc ecx
    X86_AT(c, 0x535d7u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 0535d8  sub edx, ecx
    X86_AT(c, 0x535d8u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_535da:
    X86_TICK(c, 13);
    // 0535da  pop edi
    X86_AT(c, 0x535dau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0535db  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x535dbu);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 0535df  and dx, dx
    X86_AT(c, 0x535dfu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_logic(c, v & (c.r[2] & 0xFFFFu), 2)); }
    // 0535e2  je 0x5360c
    X86_AT(c, 0x535e2u);
    if (x86_cc(c, 4)) { goto L_5360c; }
    X86_TICK(c, 23);
    // 0535e4  movsx edx, dx
    X86_AT(c, 0x535e4u);
    c.r[2] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 0535e7  push edx
    X86_AT(c, 0x535e7u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0535e8  push dword ptr [ebp - 0x14]
    X86_AT(c, 0x535e8u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu))); push32(c, v); }
    // 0535eb  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x535ebu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0535ee  push eax
    X86_AT(c, 0x535eeu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0535ef  call 0x55d0c
    X86_AT(c, 0x535efu);
    push32(c, 0x535f4u); x86_call_known(c, 0x55d0cu, f_00055d0c); X86_RET(c, 0x535f4u);
    X86_TICK(c, 22);
    // 0535f4  mov dword ptr [ebp - 0x10], eax
    X86_AT(c, 0x535f4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u)), c.r[0]);
    // 0535f7  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x535f7u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0535fa  movsx edx, word ptr [ebx + 0x10]
    X86_AT(c, 0x535fau);
    c.r[2] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0535fe  cmp edx, eax
    X86_AT(c, 0x535feu);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 053600  jne 0x5382c
    X86_AT(c, 0x53600u);
    if (x86_cc(c, 5)) { goto L_5382c; }
    X86_TICK(c, 12);
    // 053606  add esi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x53606u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
    // 053609  sub edi, dword ptr [ebp - 0x10]
    X86_AT(c, 0x53609u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF0u))), 0, 4); }
L_5360c:
    X86_TICK(c, 7);
    // 05360c  and edi, edi
    X86_AT(c, 0x5360cu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 05360e  jbe 0x5363a
    X86_AT(c, 0x5360eu);
    if (x86_cc(c, 6)) { goto L_5363a; }
    X86_TICK(c, 23);
    // 053610  movzx eax, word ptr [0x4b48c]
    X86_AT(c, 0x53610u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x4B48Cu)));
    // 053617  push eax
    X86_AT(c, 0x53617u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053618  push 0x4b48e
    X86_AT(c, 0x53618u);
    { uint32_t v = 0x4B48Eu; push32(c, v); }
    // 05361d  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x5361du);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 053620  push eax
    X86_AT(c, 0x53620u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053621  call 0x55d0c
    X86_AT(c, 0x53621u);
    push32(c, 0x53626u); x86_call_known(c, 0x55d0cu, f_00055d0c); X86_RET(c, 0x53626u);
    X86_TICK(c, 13);
    // 053626  movzx edx, word ptr [0x4b48c]
    X86_AT(c, 0x53626u);
    c.r[2] = rd16((c.sbase[3] + (uint32_t)(0x4B48Cu)));
    // 05362d  cmp edx, eax
    X86_AT(c, 0x5362du);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 05362f  jne 0x5382c
    X86_AT(c, 0x5362fu);
    if (x86_cc(c, 5)) { goto L_5382c; }
    X86_TICK(c, 10);
    // 053635  inc dword ptr [ebp - 4]
    X86_AT(c, 0x53635u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 053638  inc esi
    X86_AT(c, 0x53638u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 053639  dec edi
    X86_AT(c, 0x53639u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
L_5363a:
    X86_TICK(c, 7);
    // 05363a  and edi, edi
    X86_AT(c, 0x5363au);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 05363c  jbe 0x5382c
    X86_AT(c, 0x5363cu);
    if (x86_cc(c, 6)) { goto L_5382c; }
    X86_TICK(c, 7);
    // 053642  jmp 0x535c2
    X86_AT(c, 0x53642u);
    X86_POLL(c, 0x535c2u); goto L_535c2;
L_53647:
    X86_TICK(c, 12);
    // 053647  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x53647u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 05364b  jne 0x53654
    X86_AT(c, 0x5364bu);
    if (x86_cc(c, 5)) { goto L_53654; }
    X86_TICK(c, 2);
    // 05364d  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0x5364du);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
L_53654:
    X86_TICK(c, 12);
    // 053654  test byte ptr [ebx + 0xc], 0x40
    X86_AT(c, 0x53654u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x40u, 1);
    // 053658  jne 0x53824
    X86_AT(c, 0x53658u);
    if (x86_cc(c, 5)) { goto L_53824; }
    X86_TICK(c, 11);
    // 05365e  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x5365eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 053661  cmp eax, 0x200
    X86_AT(c, 0x53661u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 053666  jge 0x536c5
    X86_AT(c, 0x53666u);
    if (x86_cc(c, 13)) { goto L_536c5; }
    X86_TICK(c, 9);
    // 053668  mov edx, edi
    X86_AT(c, 0x53668u);
    c.r[2] = c.r[7];
    // 05366a  cmp edx, eax
    X86_AT(c, 0x5366au);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 05366c  jl 0x5366f
    X86_AT(c, 0x5366cu);
    if (x86_cc(c, 12)) { goto L_5366f; }
    X86_TICK(c, 3);
    // 05366e  xchg edx, eax
    X86_AT(c, 0x5366eu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_5366f:
    X86_TICK(c, 50);
    // 05366f  mov dword ptr [ebp - 8], edx
    X86_AT(c, 0x5366fu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[2]);
    // 053672  mov ecx, edx
    X86_AT(c, 0x53672u);
    c.r[1] = c.r[2];
    // 053674  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x53674u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 053677  mov edx, dword ptr [ebx]
    X86_AT(c, 0x53677u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 053679  push esi
    X86_AT(c, 0x53679u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 05367a  push edi
    X86_AT(c, 0x5367au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05367b  mov esi, eax
    X86_AT(c, 0x5367bu);
    c.r[6] = c.r[0];
    // 05367d  mov edi, edx
    X86_AT(c, 0x5367du);
    c.r[7] = c.r[2];
    // 05367f  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x5367fu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 053681  pop edi
    X86_AT(c, 0x53681u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053682  pop esi
    X86_AT(c, 0x53682u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 053683  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x53683u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 053686  cmp eax, dword ptr [ebx + 4]
    X86_AT(c, 0x53686u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0, 4);
    // 053689  jne 0x536b5
    X86_AT(c, 0x53689u);
    if (x86_cc(c, 5)) { goto L_536b5; }
    X86_TICK(c, 20);
    // 05368b  push 0x200
    X86_AT(c, 0x5368bu);
    { uint32_t v = 0x200u; push32(c, v); }
    // 053690  push dword ptr [ebx + 8]
    X86_AT(c, 0x53690u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 053693  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x53693u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 053696  push eax
    X86_AT(c, 0x53696u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053697  call 0x55d0c
    X86_AT(c, 0x53697u);
    push32(c, 0x5369cu); x86_call_known(c, 0x55d0cu, f_00055d0c); X86_RET(c, 0x5369cu);
    X86_TICK(c, 7);
    // 05369c  cmp eax, 0x200
    X86_AT(c, 0x5369cu);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 0536a1  jne 0x5382c
    X86_AT(c, 0x536a1u);
    if (x86_cc(c, 5)) { goto L_5382c; }
    X86_TICK(c, 15);
    // 0536a7  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0x536a7u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
    // 0536ae  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x536aeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 0536b1  mov dword ptr [ebx], eax
    X86_AT(c, 0x536b1u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 0536b3  jmp 0x536bd
    X86_AT(c, 0x536b3u);
    goto L_536bd;
L_536b5:
    X86_TICK(c, 18);
    // 0536b5  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x536b5u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0536b8  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x536b8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 0536bb  add dword ptr [ebx], eax
    X86_AT(c, 0x536bbu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
L_536bd:
    X86_TICK(c, 13);
    // 0536bd  mov esi, dword ptr [ebp - 8]
    X86_AT(c, 0x536bdu);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0536c0  sub edi, esi
    X86_AT(c, 0x536c0u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[6], 0, 4); }
    // 0536c2  add dword ptr [ebp - 4], esi
    X86_AT(c, 0x536c2u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
L_536c5:
    X86_TICK(c, 7);
    // 0536c5  cmp edi, 0x200
    X86_AT(c, 0x536c5u);
    (void)x86_sub(c, c.r[7], 0x200u, 0, 4);
    // 0536cb  jbe 0x536fb
    X86_AT(c, 0x536cbu);
    if (x86_cc(c, 6)) { goto L_536fb; }
    X86_TICK(c, 35);
    // 0536cd  mov eax, edi
    X86_AT(c, 0x536cdu);
    c.r[0] = c.r[7];
    // 0536cf  shr eax, 9
    X86_AT(c, 0x536cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0536d2  shl eax, 9
    X86_AT(c, 0x536d2u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x9u, 4, w); if (w) c.r[0] = r; }
    // 0536d5  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x536d5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0536d8  push eax
    X86_AT(c, 0x536d8u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0536d9  mov edx, esi
    X86_AT(c, 0x536d9u);
    c.r[2] = c.r[6];
    // 0536db  add edx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x536dbu);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 0536de  push edx
    X86_AT(c, 0x536deu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0536df  mov dl, byte ptr [ebx + 0xe]
    X86_AT(c, 0x536dfu);
    s8(c, 2, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0536e2  push edx
    X86_AT(c, 0x536e2u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0536e3  call 0x55d0c
    X86_AT(c, 0x536e3u);
    push32(c, 0x536e8u); x86_call_known(c, 0x55d0cu, f_00055d0c); X86_RET(c, 0x536e8u);
    X86_TICK(c, 11);
    // 0536e8  cmp eax, dword ptr [ebp - 8]
    X86_AT(c, 0x536e8u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u))), 0, 4);
    // 0536eb  jne 0x5382c
    X86_AT(c, 0x536ebu);
    if (x86_cc(c, 5)) { goto L_5382c; }
    X86_TICK(c, 15);
    // 0536f1  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x536f1u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 0536f4  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x536f4u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0536f7  add esi, eax
    X86_AT(c, 0x536f7u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 0536f9  sub edi, eax
    X86_AT(c, 0x536f9u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
L_536fb:
    X86_TICK(c, 7);
    // 0536fb  and edi, edi
    X86_AT(c, 0x536fbu);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0536fd  jbe 0x5382c
    X86_AT(c, 0x536fdu);
    if (x86_cc(c, 6)) { goto L_5382c; }
    X86_TICK(c, 65);
    // 053703  mov ecx, edi
    X86_AT(c, 0x53703u);
    c.r[1] = c.r[7];
    // 053705  mov eax, esi
    X86_AT(c, 0x53705u);
    c.r[0] = c.r[6];
    // 053707  add eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x53707u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0, 4); }
    // 05370a  mov edx, dword ptr [ebx]
    X86_AT(c, 0x5370au);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 05370c  push esi
    X86_AT(c, 0x5370cu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 05370d  push edi
    X86_AT(c, 0x5370du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05370e  mov esi, eax
    X86_AT(c, 0x5370eu);
    c.r[6] = c.r[0];
    // 053710  mov edi, edx
    X86_AT(c, 0x53710u);
    c.r[7] = c.r[2];
    // 053712  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x53712u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 053714  pop edi
    X86_AT(c, 0x53714u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053715  pop esi
    X86_AT(c, 0x53715u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 053716  sub dword ptr [ebx + 4], edi
    X86_AT(c, 0x53716u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 053719  add dword ptr [ebx], edi
    X86_AT(c, 0x53719u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 05371b  add dword ptr [ebp - 4], edi
    X86_AT(c, 0x5371bu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 05371e  jmp 0x5382c
    X86_AT(c, 0x5371eu);
    goto L_5382c;
L_53723:
    X86_TICK(c, 9);
    // 053723  mov byte ptr [ebp - 0xc], 0
    X86_AT(c, 0x53723u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x0u);
    // 053727  jmp 0x537d4
    X86_AT(c, 0x53727u);
    goto L_537d4;
L_5372c:
    X86_TICK(c, 11);
    // 05372c  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x5372cu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 05372f  cmp eax, edi
    X86_AT(c, 0x5372fu);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 053731  jl 0x53735
    X86_AT(c, 0x53731u);
    if (x86_cc(c, 12)) { goto L_53735; }
    X86_TICK(c, 2);
    // 053733  mov eax, edi
    X86_AT(c, 0x53733u);
    c.r[0] = c.r[7];
L_53735:
    X86_TICK(c, 31);
    // 053735  xchg edx, eax
    X86_AT(c, 0x53735u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 053736  mov al, 0xa
    X86_AT(c, 0x53736u);
    s8(c, 0, 0xAu);
    // 053738  mov ecx, dword ptr [ebp + 0xc]
    X86_AT(c, 0x53738u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 05373b  add ecx, esi
    X86_AT(c, 0x5373bu);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[6], 0, 4); }
    // 05373d  push edi
    X86_AT(c, 0x5373du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05373e  mov edi, ecx
    X86_AT(c, 0x5373eu);
    c.r[7] = c.r[1];
    // 053740  mov dword ptr [ebp - 0x14], ecx
    X86_AT(c, 0x53740u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)), c.r[1]);
    // 053743  mov ecx, edx
    X86_AT(c, 0x53743u);
    c.r[1] = c.r[2];
    // 053745  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x53745u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 053747  jne 0x5374c
    X86_AT(c, 0x53747u);
    if (x86_cc(c, 5)) { goto L_5374c; }
    X86_TICK(c, 4);
    // 053749  inc ecx
    X86_AT(c, 0x53749u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 05374a  sub edx, ecx
    X86_AT(c, 0x5374au);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_5374c:
    X86_TICK(c, 83);
    // 05374c  pop edi
    X86_AT(c, 0x5374cu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05374d  mov word ptr [ebx + 0x10], dx
    X86_AT(c, 0x5374du);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)), (c.r[2] & 0xFFFFu));
    // 053751  mov ecx, edx
    X86_AT(c, 0x53751u);
    c.r[1] = c.r[2];
    // 053753  movsx ecx, cx
    X86_AT(c, 0x53753u);
    c.r[1] = (uint32_t)(int32_t)(int16_t)(c.r[1] & 0xFFFFu);
    // 053756  mov eax, dword ptr [ebp - 0x14]
    X86_AT(c, 0x53756u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFECu)));
    // 053759  mov edx, dword ptr [ebx]
    X86_AT(c, 0x53759u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 05375b  push esi
    X86_AT(c, 0x5375bu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 05375c  push edi
    X86_AT(c, 0x5375cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05375d  mov esi, eax
    X86_AT(c, 0x5375du);
    c.r[6] = c.r[0];
    // 05375f  mov edi, edx
    X86_AT(c, 0x5375fu);
    c.r[7] = c.r[2];
    // 053761  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x53761u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 053763  pop edi
    X86_AT(c, 0x53763u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053764  pop esi
    X86_AT(c, 0x53764u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 053765  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x53765u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 053769  add dword ptr [ebp - 4], eax
    X86_AT(c, 0x53769u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 05376c  add esi, eax
    X86_AT(c, 0x5376cu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 05376e  add dword ptr [ebx], eax
    X86_AT(c, 0x5376eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 053770  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x53770u);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 053774  mov edx, dword ptr [ebx + 4]
    X86_AT(c, 0x53774u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 053777  mov ecx, edi
    X86_AT(c, 0x53777u);
    c.r[1] = c.r[7];
    // 053779  cmp ecx, edx
    X86_AT(c, 0x53779u);
    (void)x86_sub(c, c.r[1], c.r[2], 0, 4);
    // 05377b  jl 0x5377f
    X86_AT(c, 0x5377bu);
    if (x86_cc(c, 12)) { goto L_5377f; }
    X86_TICK(c, 2);
    // 05377d  mov ecx, edx
    X86_AT(c, 0x5377du);
    c.r[1] = c.r[2];
L_5377f:
    X86_TICK(c, 7);
    // 05377f  cmp ecx, eax
    X86_AT(c, 0x5377fu);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 053781  jle 0x537cb
    X86_AT(c, 0x53781u);
    if (x86_cc(c, 14)) { goto L_537cb; }
    X86_TICK(c, 15);
    // 053783  sub edx, eax
    X86_AT(c, 0x53783u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[0], 0, 4); }
    // 053785  movzx eax, word ptr [0x4b48c]
    X86_AT(c, 0x53785u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x4B48Cu)));
    // 05378c  cmp eax, edx
    X86_AT(c, 0x5378cu);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 05378e  jle 0x5379b
    X86_AT(c, 0x5378eu);
    if (x86_cc(c, 14)) { goto L_5379b; }
    X86_TICK(c, 15);
    // 053790  mov eax, dword ptr [ebx]
    X86_AT(c, 0x53790u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 053792  mov byte ptr [eax], 0xd
    X86_AT(c, 0x53792u);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xDu);
    // 053795  mov byte ptr [ebp - 0xc], 1
    X86_AT(c, 0x53795u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), 0x1u);
    // 053799  jmp 0x537b3
    X86_AT(c, 0x53799u);
    goto L_537b3;
L_5379b:
    X86_TICK(c, 35);
    // 05379b  movzx ecx, word ptr [0x4b48c]
    X86_AT(c, 0x5379bu);
    c.r[1] = rd16((c.sbase[3] + (uint32_t)(0x4B48Cu)));
    // 0537a2  mov eax, 0x4b48e
    X86_AT(c, 0x537a2u);
    c.r[0] = 0x4B48Eu;
    // 0537a7  mov edx, dword ptr [ebx]
    X86_AT(c, 0x537a7u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 0537a9  push esi
    X86_AT(c, 0x537a9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0537aa  push edi
    X86_AT(c, 0x537aau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0537ab  mov esi, eax
    X86_AT(c, 0x537abu);
    c.r[6] = c.r[0];
    // 0537ad  mov edi, edx
    X86_AT(c, 0x537adu);
    c.r[7] = c.r[2];
    // 0537af  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x537afu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0537b1  pop edi
    X86_AT(c, 0x537b1u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0537b2  pop esi
    X86_AT(c, 0x537b2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
L_537b3:
    X86_TICK(c, 36);
    // 0537b3  inc dword ptr [ebp - 4]
    X86_AT(c, 0x537b3u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 0537b6  inc esi
    X86_AT(c, 0x537b6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_inc(c, v, 4); }
    // 0537b7  dec edi
    X86_AT(c, 0x537b7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 0537b8  movzx eax, word ptr [0x4b48c]
    X86_AT(c, 0x537b8u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x4B48Cu)));
    // 0537bf  add dword ptr [ebx], eax
    X86_AT(c, 0x537bfu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 0537c1  movzx eax, word ptr [0x4b48c]
    X86_AT(c, 0x537c1u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x4B48Cu)));
    // 0537c8  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x537c8u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_537cb:
    X86_TICK(c, 15);
    // 0537cb  movsx eax, word ptr [ebx + 0x10]
    X86_AT(c, 0x537cbu);
    c.r[0] = (uint32_t)(int32_t)(int16_t)rd16((c.sbase[3] + (uint32_t)(c.r[3] + 0x10u)));
    // 0537cf  sub edi, eax
    X86_AT(c, 0x537cfu);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0537d1  sub dword ptr [ebx + 4], eax
    X86_AT(c, 0x537d1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_537d4:
    X86_TICK(c, 12);
    // 0537d4  cmp dword ptr [ebx + 4], 0
    X86_AT(c, 0x537d4u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0x0u, 0, 4);
    // 0537d8  jle 0x537e2
    X86_AT(c, 0x537d8u);
    if (x86_cc(c, 14)) { goto L_537e2; }
    X86_TICK(c, 7);
    // 0537da  and edi, edi
    X86_AT(c, 0x537dau);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0537dc  ja 0x5372c
    X86_AT(c, 0x537dcu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x5372cu); goto L_5372c; }
L_537e2:
    X86_TICK(c, 7);
    // 0537e2  and edi, edi
    X86_AT(c, 0x537e2u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0537e4  ja 0x537f0
    X86_AT(c, 0x537e4u);
    if (x86_cc(c, 7)) { goto L_537f0; }
    X86_TICK(c, 7);
    // 0537e6  and edi, edi
    X86_AT(c, 0x537e6u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 0537e8  jne 0x53814
    X86_AT(c, 0x537e8u);
    if (x86_cc(c, 5)) { goto L_53814; }
    X86_TICK(c, 12);
    // 0537ea  cmp byte ptr [ebp - 0xc], 0
    X86_AT(c, 0x537eau);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 1);
    // 0537ee  je 0x53814
    X86_AT(c, 0x537eeu);
    if (x86_cc(c, 4)) { goto L_53814; }
L_537f0:
    X86_TICK(c, 20);
    // 0537f0  push 0x200
    X86_AT(c, 0x537f0u);
    { uint32_t v = 0x200u; push32(c, v); }
    // 0537f5  push dword ptr [ebx + 8]
    X86_AT(c, 0x537f5u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 0537f8  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x537f8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0537fb  push eax
    X86_AT(c, 0x537fbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0537fc  call 0x55d0c
    X86_AT(c, 0x537fcu);
    push32(c, 0x53801u); x86_call_known(c, 0x55d0cu, f_00055d0c); X86_RET(c, 0x53801u);
    X86_TICK(c, 7);
    // 053801  cmp eax, 0x200
    X86_AT(c, 0x53801u);
    (void)x86_sub(c, c.r[0], 0x200u, 0, 4);
    // 053806  jne 0x5382c
    X86_AT(c, 0x53806u);
    if (x86_cc(c, 5)) { goto L_5382c; }
    X86_TICK(c, 8);
    // 053808  mov dword ptr [ebx + 4], 0x200
    X86_AT(c, 0x53808u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0x200u);
    // 05380f  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x5380fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 053812  mov dword ptr [ebx], eax
    X86_AT(c, 0x53812u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
L_53814:
    X86_TICK(c, 12);
    // 053814  cmp byte ptr [ebp - 0xc], 0
    X86_AT(c, 0x53814u);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u))), 0x0u, 0, 1);
    // 053818  je 0x53824
    X86_AT(c, 0x53818u);
    if (x86_cc(c, 4)) { goto L_53824; }
    X86_TICK(c, 18);
    // 05381a  mov eax, dword ptr [ebx]
    X86_AT(c, 0x5381au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3])));
    // 05381c  mov byte ptr [eax], 0xa
    X86_AT(c, 0x5381cu);
    wr8((c.sbase[3] + (uint32_t)(c.r[0])), 0xAu);
    // 05381f  inc dword ptr [ebx]
    X86_AT(c, 0x5381fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3])); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 053821  dec dword ptr [ebx + 4]
    X86_AT(c, 0x53821u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)); uint32_t v = rd32(ea); wr32(ea, x86_dec(c, v, 4)); }
L_53824:
    X86_TICK(c, 7);
    // 053824  and edi, edi
    X86_AT(c, 0x53824u);
    { uint32_t v = c.r[7]; c.r[7] = x86_logic(c, v & c.r[7], 4); }
    // 053826  ja 0x53723
    X86_AT(c, 0x53826u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x53723u); goto L_53723; }
L_5382c:
    X86_TICK(c, 12);
    // 05382c  cmp word ptr [0x4b81e], 0
    X86_AT(c, 0x5382cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4B81Eu))), 0x0u, 0, 2);
    // 053834  je 0x5383c
    X86_AT(c, 0x53834u);
    if (x86_cc(c, 4)) { goto L_5383c; }
    X86_TICK(c, 14);
    // 053836  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x53836u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 05383a  jmp 0x53846
    X86_AT(c, 0x5383au);
    goto L_53846;
L_5383c:
    X86_TICK(c, 6);
    // 05383c  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0x5383cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 053840  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x53840u);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
L_53846:
    X86_TICK(c, 32);
    // 053846  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x53846u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 053849  pop edi
    X86_AT(c, 0x53849u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05384a  pop esi
    X86_AT(c, 0x5384au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 05384b  pop ebx
    X86_AT(c, 0x5384bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 05384c  leave 
    X86_AT(c, 0x5384cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05384d  ret 0xc
    X86_AT(c, 0x5384du);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x53570u, "ran off the end of a function");
}
void f_0005382c(X86Cpu& c) {
    X86_TICK(c, 12);
    // 05382c  cmp word ptr [0x4b81e], 0
    X86_AT(c, 0x5382cu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4B81Eu))), 0x0u, 0, 2);
    // 053834  je 0x5383c
    X86_AT(c, 0x53834u);
    if (x86_cc(c, 4)) { goto L_5383c; }
    X86_TICK(c, 14);
    // 053836  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x53836u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 05383a  jmp 0x53846
    X86_AT(c, 0x5383au);
    goto L_53846;
L_5383c:
    X86_TICK(c, 6);
    // 05383c  mov ax, word ptr [ebp - 0xa]
    X86_AT(c, 0x5383cu);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u))));
    // 053840  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x53840u);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
L_53846:
    X86_TICK(c, 32);
    // 053846  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x53846u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 053849  pop edi
    X86_AT(c, 0x53849u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05384a  pop esi
    X86_AT(c, 0x5384au);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 05384b  pop ebx
    X86_AT(c, 0x5384bu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 05384c  leave 
    X86_AT(c, 0x5384cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05384d  ret 0xc
    X86_AT(c, 0x5384du);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x5382cu, "ran off the end of a function");
}
void f_00053858(X86Cpu& c) {
    X86_TICK(c, 30);
    // 053858  enter 4, 0
    X86_AT(c, 0x53858u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 05385c  push ebx
    X86_AT(c, 0x5385cu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 05385d  push esi
    X86_AT(c, 0x5385du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 05385e  push edi
    X86_AT(c, 0x5385eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05385f  mov edi, dword ptr [ebp + 0x14]
    X86_AT(c, 0x5385fu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x14u)));
    // 053862  mov ebx, edi
    X86_AT(c, 0x53862u);
    c.r[3] = c.r[7];
    // 053864  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x53864u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 053868  jne 0x5387a
    X86_AT(c, 0x53868u);
    if (x86_cc(c, 5)) { goto L_5387a; }
    X86_TICK(c, 18);
    // 05386a  mov ax, 5
    X86_AT(c, 0x5386au);
    s16(c, 0, 0x5u);
    // 05386e  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x5386eu);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
    // 053874  or byte ptr [ebx + 0xc], 0x20
    X86_AT(c, 0x53874u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
    // 053878  jmp 0x538ad
    X86_AT(c, 0x53878u);
    goto L_538ad;
L_5387a:
    X86_TICK(c, 12);
    // 05387a  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x5387au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 05387e  je 0x53886
    X86_AT(c, 0x5387eu);
    if (x86_cc(c, 4)) { goto L_53886; }
    X86_TICK(c, 9);
    // 053880  push edi
    X86_AT(c, 0x53880u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053881  call 0x547e0
    X86_AT(c, 0x53881u);
    push32(c, 0x53886u); x86_call_known(c, 0x547e0u, f_000547e0); X86_RET(c, 0x53886u);
L_53886:
    X86_TICK(c, 43);
    // 053886  or byte ptr [ebx + 0xd], 8
    X86_AT(c, 0x53886u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
    // 05388a  mov eax, dword ptr [ebp + 0xc]
    X86_AT(c, 0x5388au);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 05388d  imul eax, dword ptr [ebp + 0x10]
    X86_AT(c, 0x5388du);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))), 4);
    // 053891  xchg esi, eax
    X86_AT(c, 0x53891u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 053892  and esi, esi
    X86_AT(c, 0x53892u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 053894  jl 0x5389e
    X86_AT(c, 0x53894u);
    if (x86_cc(c, 12)) { goto L_5389e; }
    X86_TICK(c, 7);
    // 053896  cmp esi, 0x7fffffff
    X86_AT(c, 0x53896u);
    (void)x86_sub(c, c.r[6], 0x7FFFFFFFu, 0, 4);
    // 05389c  jle 0x538a9
    X86_AT(c, 0x5389cu);
    if (x86_cc(c, 14)) { goto L_538a9; }
L_5389e:
    X86_TICK(c, 9);
    // 05389e  mov word ptr [0x4b81e], 1
    X86_AT(c, 0x5389eu);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), 0x1u);
    // 0538a7  jmp 0x538ad
    X86_AT(c, 0x538a7u);
    goto L_538ad;
L_538a9:
    X86_TICK(c, 7);
    // 0538a9  and esi, esi
    X86_AT(c, 0x538a9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0538ab  jne 0x538b1
    X86_AT(c, 0x538abu);
    if (x86_cc(c, 5)) { goto L_538b1; }
L_538ad:
    X86_TICK(c, 9);
    // 0538ad  sub eax, eax
    X86_AT(c, 0x538adu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0538af  jmp 0x538f2
    X86_AT(c, 0x538afu);
    goto L_538f2;
L_538b1:
    X86_TICK(c, 12);
    // 0538b1  test byte ptr [ebx + 0xc], 8
    X86_AT(c, 0x538b1u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x8u, 1);
    // 0538b5  je 0x538c4
    X86_AT(c, 0x538b5u);
    if (x86_cc(c, 4)) { goto L_538c4; }
    X86_TICK(c, 17);
    // 0538b7  push 2
    X86_AT(c, 0x538b7u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0538b9  push 0
    X86_AT(c, 0x538b9u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0538bb  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x538bbu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0538be  push eax
    X86_AT(c, 0x538beu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0538bf  call 0x55db8
    X86_AT(c, 0x538bfu);
    push32(c, 0x538c4u); x86_call_known(c, 0x55db8u, f_00055db8); X86_RET(c, 0x538c4u);
L_538c4:
    X86_TICK(c, 16);
    // 0538c4  push esi
    X86_AT(c, 0x538c4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0538c5  push dword ptr [ebp + 8]
    X86_AT(c, 0x538c5u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 0538c8  push edi
    X86_AT(c, 0x538c8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0538c9  call 0x53570
    X86_AT(c, 0x538c9u);
    push32(c, 0x538ceu); x86_call_known(c, 0x53570u, f_00053570); X86_RET(c, 0x538ceu);
    X86_TICK(c, 56);
    // 0538ce  cdq 
    X86_AT(c, 0x538ceu);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0538cf  idiv dword ptr [ebp + 0xc]
    X86_AT(c, 0x538cfu);
    x86_idiv(c, rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 4, 0x538cfu);
    // 0538d2  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x538d2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0538d5  test byte ptr [ebx + 0xc], 8
    X86_AT(c, 0x538d5u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x8u, 1);
    // 0538d9  je 0x538ef
    X86_AT(c, 0x538d9u);
    if (x86_cc(c, 4)) { goto L_538ef; }
    X86_TICK(c, 9);
    // 0538db  push edi
    X86_AT(c, 0x538dbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0538dc  call 0x5390c
    X86_AT(c, 0x538dcu);
    push32(c, 0x538e1u); x86_call_known(c, 0x5390cu, f_0005390c); X86_RET(c, 0x538e1u);
    X86_TICK(c, 21);
    // 0538e1  pop ecx
    X86_AT(c, 0x538e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 0538e2  push 2
    X86_AT(c, 0x538e2u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 0538e4  push 0
    X86_AT(c, 0x538e4u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 0538e6  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x538e6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 0538e9  push eax
    X86_AT(c, 0x538e9u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0538ea  call 0x55db8
    X86_AT(c, 0x538eau);
    push32(c, 0x538efu); x86_call_known(c, 0x55db8u, f_00055db8); X86_RET(c, 0x538efu);
L_538ef:
    X86_TICK(c, 4);
    // 0538ef  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x538efu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_538f2:
    X86_TICK(c, 28);
    // 0538f2  pop edi
    X86_AT(c, 0x538f2u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0538f3  pop esi
    X86_AT(c, 0x538f3u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0538f4  pop ebx
    X86_AT(c, 0x538f4u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0538f5  leave 
    X86_AT(c, 0x538f5u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0538f6  ret 
    X86_AT(c, 0x538f6u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x53858u, "ran off the end of a function");
}
void f_0005390c(X86Cpu& c) {
    X86_TICK(c, 24);
    // 05390c  enter 4, 0
    X86_AT(c, 0x5390cu);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 053910  push edi
    X86_AT(c, 0x53910u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053911  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x53911u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 053914  test byte ptr [edi + 0xc], 4
    X86_AT(c, 0x53914u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x4u, 1);
    // 053918  jne 0x53931
    X86_AT(c, 0x53918u);
    if (x86_cc(c, 5)) { goto L_53931; }
    X86_TICK(c, 15);
    // 05391a  mov ax, 1
    X86_AT(c, 0x5391au);
    s16(c, 0, 0x1u);
    // 05391e  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x5391eu);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
    // 053924  mov eax, 1
    X86_AT(c, 0x53924u);
    c.r[0] = 0x1u;
    // 053929  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x53929u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 05392c  jmp 0x539c8
    X86_AT(c, 0x5392cu);
    goto L_539c8;
L_53931:
    X86_TICK(c, 12);
    // 053931  test byte ptr [edi + 0xd], 8
    X86_AT(c, 0x53931u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xDu))) & 0x8u, 1);
    // 053935  je 0x53943
    X86_AT(c, 0x53935u);
    if (x86_cc(c, 4)) { goto L_53943; }
    X86_TICK(c, 12);
    // 053937  cmp dword ptr [edi + 4], 0xffffffff
    X86_AT(c, 0x53937u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 05393b  je 0x53943
    X86_AT(c, 0x5393bu);
    if (x86_cc(c, 4)) { goto L_53943; }
    X86_TICK(c, 12);
    // 05393d  test byte ptr [edi + 0xc], 0x80
    X86_AT(c, 0x5393du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x80u, 1);
    // 053941  je 0x5394a
    X86_AT(c, 0x53941u);
    if (x86_cc(c, 4)) { goto L_5394a; }
L_53943:
    X86_TICK(c, 9);
    // 053943  sub eax, eax
    X86_AT(c, 0x53943u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 053945  jmp 0x539cb
    X86_AT(c, 0x53945u);
    goto L_539cb;
L_5394a:
    X86_TICK(c, 12);
    // 05394a  test byte ptr [edi + 0xc], 1
    X86_AT(c, 0x5394au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x1u, 1);
    // 05394e  je 0x539c1
    X86_AT(c, 0x5394eu);
    if (x86_cc(c, 4)) { goto L_539c1; }
    X86_TICK(c, 12);
    // 053954  cmp dword ptr [edi + 4], 0x200
    X86_AT(c, 0x53954u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0x200u, 0, 4);
    // 05395b  jge 0x539c1
    X86_AT(c, 0x5395bu);
    if (x86_cc(c, 13)) { goto L_539c1; }
    X86_TICK(c, 12);
    // 05395d  test byte ptr [edi + 0xc], 8
    X86_AT(c, 0x5395du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))) & 0x8u, 1);
    // 053961  je 0x53970
    X86_AT(c, 0x53961u);
    if (x86_cc(c, 4)) { goto L_53970; }
    X86_TICK(c, 17);
    // 053963  push 2
    X86_AT(c, 0x53963u);
    { uint32_t v = 0x2u; push32(c, v); }
    // 053965  push 0
    X86_AT(c, 0x53965u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 053967  mov al, byte ptr [edi + 0xe]
    X86_AT(c, 0x53967u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu))));
    // 05396a  push eax
    X86_AT(c, 0x5396au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05396b  call 0x55db8
    X86_AT(c, 0x5396bu);
    push32(c, 0x53970u); x86_call_known(c, 0x55db8u, f_00055db8); X86_RET(c, 0x53970u);
L_53970:
    X86_TICK(c, 28);
    // 053970  mov eax, 0x200
    X86_AT(c, 0x53970u);
    c.r[0] = 0x200u;
    // 053975  sub eax, dword ptr [edi + 4]
    X86_AT(c, 0x53975u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4); }
    // 053978  push eax
    X86_AT(c, 0x53978u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053979  push dword ptr [edi + 8]
    X86_AT(c, 0x53979u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))); push32(c, v); }
    // 05397c  mov al, byte ptr [edi + 0xe]
    X86_AT(c, 0x5397cu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0xEu))));
    // 05397f  push eax
    X86_AT(c, 0x5397fu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053980  call 0x55d0c
    X86_AT(c, 0x53980u);
    push32(c, 0x53985u); x86_call_known(c, 0x55d0cu, f_00055d0c); X86_RET(c, 0x53985u);
    X86_TICK(c, 17);
    // 053985  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x53985u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 053988  mov edx, 0x200
    X86_AT(c, 0x53988u);
    c.r[2] = 0x200u;
    // 05398d  sub edx, dword ptr [edi + 4]
    X86_AT(c, 0x5398du);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u))), 0, 4); }
    // 053990  cmp edx, eax
    X86_AT(c, 0x53990u);
    (void)x86_sub(c, c.r[2], c.r[0], 0, 4);
    // 053992  jne 0x5399d
    X86_AT(c, 0x53992u);
    if (x86_cc(c, 5)) { goto L_5399d; }
    X86_TICK(c, 9);
    // 053994  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x53994u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 05399b  jmp 0x539b3
    X86_AT(c, 0x5399bu);
    goto L_539b3;
L_5399d:
    X86_TICK(c, 15);
    // 05399d  mov ax, 0x15
    X86_AT(c, 0x5399du);
    s16(c, 0, 0x15u);
    // 0539a1  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x539a1u);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
    // 0539a7  mov eax, 0x15
    X86_AT(c, 0x539a7u);
    c.r[0] = 0x15u;
    // 0539ac  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x539acu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0539af  or byte ptr [edi + 0xc], 0x20
    X86_AT(c, 0x539afu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x20u, 1)); }
L_539b3:
    X86_TICK(c, 15);
    // 0539b3  mov eax, dword ptr [edi + 8]
    X86_AT(c, 0x539b3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)));
    // 0539b6  mov dword ptr [edi], eax
    X86_AT(c, 0x539b6u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 0539b8  mov dword ptr [edi + 4], 0x200
    X86_AT(c, 0x539b8u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), 0x200u);
    // 0539bf  jmp 0x539c8
    X86_AT(c, 0x539bfu);
    goto L_539c8;
L_539c1:
    X86_TICK(c, 2);
    // 0539c1  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x539c1u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
L_539c8:
    X86_TICK(c, 4);
    // 0539c8  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x539c8u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
L_539cb:
    X86_TICK(c, 20);
    // 0539cb  pop edi
    X86_AT(c, 0x539cbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0539cc  leave 
    X86_AT(c, 0x539ccu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0539cd  ret 
    X86_AT(c, 0x539cdu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5390cu, "ran off the end of a function");
}
void f_000539d8(X86Cpu& c) {
    X86_TICK(c, 80);
    // 0539d8  enter 4, 0
    X86_AT(c, 0x539d8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 0539dc  push ebx
    X86_AT(c, 0x539dcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0539dd  push esi
    X86_AT(c, 0x539ddu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0539de  push edi
    X86_AT(c, 0x539deu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0539df  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x539dfu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0539e2  sub eax, eax
    X86_AT(c, 0x539e2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0539e4  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x539e4u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 0539e7  mov eax, edi
    X86_AT(c, 0x539e7u);
    c.r[0] = c.r[7];
    // 0539e9  mov edx, 0x4b5c0
    X86_AT(c, 0x539e9u);
    c.r[2] = 0x4B5C0u;
    // 0539ee  sub eax, edx
    X86_AT(c, 0x539eeu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[2], 0, 4); }
    // 0539f0  cdq 
    X86_AT(c, 0x539f0u);
    c.r[2] = (c.r[0] & 0x80000000u) ? 0xFFFFFFFFu : 0u;
    // 0539f1  mov ecx, 0x12
    X86_AT(c, 0x539f1u);
    c.r[1] = 0x12u;
    // 0539f6  idiv ecx
    X86_AT(c, 0x539f6u);
    x86_idiv(c, c.r[1], 4, 0x539f6u);
    // 0539f8  xchg esi, eax
    X86_AT(c, 0x539f8u);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0539f9  and esi, esi
    X86_AT(c, 0x539f9u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0539fb  jl 0x53a4f
    X86_AT(c, 0x539fbu);
    if (x86_cc(c, 12)) { goto L_53a4f; }
    X86_TICK(c, 7);
    // 0539fd  cmp esi, 0x19
    X86_AT(c, 0x539fdu);
    (void)x86_sub(c, c.r[6], 0x19u, 0, 4);
    // 053a00  jg 0x53a4f
    X86_AT(c, 0x53a00u);
    if (x86_cc(c, 15)) { goto L_53a4f; }
    X86_TICK(c, 12);
    // 053a02  cmp word ptr [edi + 0xc], 0
    X86_AT(c, 0x53a02u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu))), 0x0u, 0, 2);
    // 053a07  je 0x53a4f
    X86_AT(c, 0x53a07u);
    if (x86_cc(c, 4)) { goto L_53a4f; }
    X86_TICK(c, 14);
    // 053a09  mov ebx, edi
    X86_AT(c, 0x53a09u);
    c.r[3] = c.r[7];
    // 053a0b  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x53a0bu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 053a0f  je 0x53a3e
    X86_AT(c, 0x53a0fu);
    if (x86_cc(c, 4)) { goto L_53a3e; }
    X86_TICK(c, 12);
    // 053a11  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x53a11u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 053a15  je 0x53a23
    X86_AT(c, 0x53a15u);
    if (x86_cc(c, 4)) { goto L_53a23; }
    X86_TICK(c, 9);
    // 053a17  push edi
    X86_AT(c, 0x53a17u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053a18  call 0x5390c
    X86_AT(c, 0x53a18u);
    push32(c, 0x53a1du); x86_call_known(c, 0x5390cu, f_0005390c); X86_RET(c, 0x53a1du);
    X86_TICK(c, 13);
    // 053a1d  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x53a1du);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
    // 053a20  pop ecx
    X86_AT(c, 0x53a20u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 053a21  jmp 0x53a29
    X86_AT(c, 0x53a21u);
    goto L_53a29;
L_53a23:
    X86_TICK(c, 12);
    // 053a23  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x53a23u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 053a27  je 0x53a4f
    X86_AT(c, 0x53a27u);
    if (x86_cc(c, 4)) { goto L_53a4f; }
L_53a29:
    X86_TICK(c, 12);
    // 053a29  test byte ptr [ebx + 0xd], 1
    X86_AT(c, 0x53a29u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x1u, 1);
    // 053a2d  jne 0x53a3e
    X86_AT(c, 0x53a2du);
    if (x86_cc(c, 5)) { goto L_53a3e; }
    X86_TICK(c, 12);
    // 053a2f  test byte ptr [ebx + 0xc], 0x80
    X86_AT(c, 0x53a2fu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x80u, 1);
    // 053a33  jne 0x53a3e
    X86_AT(c, 0x53a33u);
    if (x86_cc(c, 5)) { goto L_53a3e; }
    X86_TICK(c, 12);
    // 053a35  push dword ptr [ebx + 8]
    X86_AT(c, 0x53a35u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 053a38  call 0x53e9c
    X86_AT(c, 0x53a38u);
    push32(c, 0x53a3du); x86_call_known(c, 0x53e9cu, f_00053e9c); X86_RET(c, 0x53a3du);
    X86_TICK(c, 4);
    // 053a3d  pop ecx
    X86_AT(c, 0x53a3du);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_53a3e:
    X86_TICK(c, 13);
    // 053a3e  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x53a3eu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 053a41  push eax
    X86_AT(c, 0x53a41u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053a42  call 0x555b0
    X86_AT(c, 0x53a42u);
    push32(c, 0x53a47u); x86_call_known(c, 0x555b0u, f_000555b0); X86_RET(c, 0x53a47u);
    X86_TICK(c, 9);
    // 053a47  mov word ptr [ebx + 0xc], 0
    X86_AT(c, 0x53a47u);
    wr16((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu)), 0x0u);
    // 053a4d  jmp 0x53a61
    X86_AT(c, 0x53a4du);
    goto L_53a61;
L_53a4f:
    X86_TICK(c, 8);
    // 053a4f  mov ax, 6
    X86_AT(c, 0x53a4fu);
    s16(c, 0, 0x6u);
    // 053a53  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x53a53u);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
    // 053a59  mov eax, 6
    X86_AT(c, 0x53a59u);
    c.r[0] = 0x6u;
    // 053a5e  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x53a5eu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_53a61:
    X86_TICK(c, 32);
    // 053a61  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x53a61u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 053a64  pop edi
    X86_AT(c, 0x53a64u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053a65  pop esi
    X86_AT(c, 0x53a65u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 053a66  pop ebx
    X86_AT(c, 0x53a66u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 053a67  leave 
    X86_AT(c, 0x53a67u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 053a68  ret 
    X86_AT(c, 0x53a68u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x539d8u, "ran off the end of a function");
}
void f_00053a78(X86Cpu& c) {
    X86_TICK(c, 4);
    // 053a78  push edi
    X86_AT(c, 0x53a78u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053a79  sub edi, edi
    X86_AT(c, 0x53a79u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_53a7b:
    X86_TICK(c, 16);
    // 053a7b  lea eax, [edi + edi*4]
    X86_AT(c, 0x53a7bu);
    c.r[0] = (uint32_t)(c.r[7] + c.r[7] * 4);
    // 053a7e  lea eax, [eax*4]
    X86_AT(c, 0x53a7eu);
    c.r[0] = (uint32_t)(c.r[0] * 4);
    // 053a85  test byte ptr [eax + 0x4b5cc], 6
    X86_AT(c, 0x53a85u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0x4B5CCu))) & 0x6u, 1);
    // 053a8c  je 0x53aa2
    X86_AT(c, 0x53a8cu);
    if (x86_cc(c, 4)) { goto L_53aa2; }
    X86_TICK(c, 13);
    // 053a8e  add eax, 0x4b5c0
    X86_AT(c, 0x53a8eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x4B5C0u, 0, 4); }
    // 053a93  cmp eax, dword ptr [0x4b49c]
    X86_AT(c, 0x53a93u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x4B49Cu))), 0, 4);
    // 053a99  je 0x53aa2
    X86_AT(c, 0x53a99u);
    if (x86_cc(c, 4)) { goto L_53aa2; }
    X86_TICK(c, 9);
    // 053a9b  push eax
    X86_AT(c, 0x53a9bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053a9c  call 0x539d8
    X86_AT(c, 0x53a9cu);
    push32(c, 0x53aa1u); x86_call_known(c, 0x539d8u, f_000539d8); X86_RET(c, 0x53aa1u);
    X86_TICK(c, 4);
    // 053aa1  pop ecx
    X86_AT(c, 0x53aa1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_53aa2:
    X86_TICK(c, 7);
    // 053aa2  cmp edi, 0x19
    X86_AT(c, 0x53aa2u);
    (void)x86_sub(c, c.r[7], 0x19u, 0, 4);
    // 053aa5  jae 0x53aaa
    X86_AT(c, 0x53aa5u);
    if (x86_cc(c, 3)) { goto L_53aaa; }
    X86_TICK(c, 9);
    // 053aa7  inc edi
    X86_AT(c, 0x53aa7u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 053aa8  jmp 0x53a7b
    X86_AT(c, 0x53aa8u);
    X86_POLL(c, 0x53a7bu); goto L_53a7b;
L_53aaa:
    X86_TICK(c, 12);
    // 053aaa  push dword ptr [0x4b49c]
    X86_AT(c, 0x53aaau);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4B49Cu))); push32(c, v); }
    // 053ab0  call 0x539d8
    X86_AT(c, 0x53ab0u);
    push32(c, 0x53ab5u); x86_call_known(c, 0x539d8u, f_000539d8); X86_RET(c, 0x53ab5u);
    X86_TICK(c, 18);
    // 053ab5  pop ecx
    X86_AT(c, 0x53ab5u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 053ab6  pop edi
    X86_AT(c, 0x53ab6u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053ab7  ret 
    X86_AT(c, 0x53ab7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x53a78u, "ran off the end of a function");
}
void f_00053ac8(X86Cpu& c) {
    X86_TICK(c, 26);
    // 053ac8  enter 4, 0
    X86_AT(c, 0x53ac8u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 053acc  push dword ptr [ebp + 8]
    X86_AT(c, 0x53accu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 053acf  push 1
    X86_AT(c, 0x53acfu);
    { uint32_t v = 0x1u; push32(c, v); }
    // 053ad1  push 1
    X86_AT(c, 0x53ad1u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 053ad3  lea eax, [ebp - 1]
    X86_AT(c, 0x53ad3u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFFu);
    // 053ad6  push eax
    X86_AT(c, 0x53ad6u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053ad7  call 0x53200
    X86_AT(c, 0x53ad7u);
    push32(c, 0x53adcu); x86_call_known(c, 0x53200u, f_00053200); X86_RET(c, 0x53adcu);
    X86_TICK(c, 9);
    // 053adc  add esp, 0x10
    X86_AT(c, 0x53adcu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 053adf  and eax, eax
    X86_AT(c, 0x53adfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 053ae1  jne 0x53aea
    X86_AT(c, 0x53ae1u);
    if (x86_cc(c, 5)) { goto L_53aea; }
    X86_TICK(c, 9);
    // 053ae3  mov eax, 0xffffffff
    X86_AT(c, 0x53ae3u);
    c.r[0] = 0xFFFFFFFFu;
    // 053ae8  jmp 0x53aee
    X86_AT(c, 0x53ae8u);
    goto L_53aee;
L_53aea:
    X86_TICK(c, 6);
    // 053aea  movzx eax, byte ptr [ebp - 1]
    X86_AT(c, 0x53aeau);
    c.r[0] = rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFFu)));
L_53aee:
    X86_TICK(c, 16);
    // 053aee  leave 
    X86_AT(c, 0x53aeeu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 053aef  ret 
    X86_AT(c, 0x53aefu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x53ac8u, "ran off the end of a function");
}
void f_00053b30(X86Cpu& c) {
    X86_TICK(c, 36);
    // 053b30  enter 8, 0
    X86_AT(c, 0x53b30u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 053b34  push edi
    X86_AT(c, 0x53b34u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053b35  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x53b35u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 053b38  mov eax, edi
    X86_AT(c, 0x53b38u);
    c.r[0] = c.r[7];
    // 053b3a  mov byte ptr [ebp - 5], al
    X86_AT(c, 0x53b3au);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 053b3d  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x53b3du);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 053b40  push 1
    X86_AT(c, 0x53b40u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 053b42  push 1
    X86_AT(c, 0x53b42u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 053b44  lea eax, [ebp - 5]
    X86_AT(c, 0x53b44u);
    c.r[0] = (uint32_t)(c.r[5] + 0xFFFFFFFBu);
    // 053b47  push eax
    X86_AT(c, 0x53b47u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053b48  call 0x53858
    X86_AT(c, 0x53b48u);
    push32(c, 0x53b4du); x86_call_known(c, 0x53858u, f_00053858); X86_RET(c, 0x53b4du);
    X86_TICK(c, 9);
    // 053b4d  add esp, 0x10
    X86_AT(c, 0x53b4du);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 053b50  dec eax
    X86_AT(c, 0x53b50u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 053b51  je 0x53b5c
    X86_AT(c, 0x53b51u);
    if (x86_cc(c, 4)) { goto L_53b5c; }
    X86_TICK(c, 9);
    // 053b53  mov dword ptr [ebp - 4], 0xffffffff
    X86_AT(c, 0x53b53u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 053b5a  jmp 0x53b5f
    X86_AT(c, 0x53b5au);
    goto L_53b5f;
L_53b5c:
    X86_TICK(c, 2);
    // 053b5c  mov dword ptr [ebp - 4], edi
    X86_AT(c, 0x53b5cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[7]);
L_53b5f:
    X86_TICK(c, 24);
    // 053b5f  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x53b5fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 053b62  pop edi
    X86_AT(c, 0x53b62u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053b63  leave 
    X86_AT(c, 0x53b63u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 053b64  ret 
    X86_AT(c, 0x53b64u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x53b30u, "ran off the end of a function");
}
void f_00053c50(X86Cpu& c) {
    X86_TICK(c, 27);
    // 053c50  enter 8, 0
    X86_AT(c, 0x53c50u);
    x86_enter(c, 0x8u, 0x0u, 4);
    // 053c54  push ebx
    X86_AT(c, 0x53c54u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 053c55  push esi
    X86_AT(c, 0x53c55u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 053c56  push edi
    X86_AT(c, 0x53c56u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053c57  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x53c57u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 053c5a  mov esi, dword ptr [ebp + 0x10]
    X86_AT(c, 0x53c5au);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 053c5d  and esi, esi
    X86_AT(c, 0x53c5du);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 053c5f  jl 0x53c66
    X86_AT(c, 0x53c5fu);
    if (x86_cc(c, 12)) { goto L_53c66; }
    X86_TICK(c, 7);
    // 053c61  cmp esi, 2
    X86_AT(c, 0x53c61u);
    (void)x86_sub(c, c.r[6], 0x2u, 0, 4);
    // 053c64  jle 0x53c72
    X86_AT(c, 0x53c64u);
    if (x86_cc(c, 14)) { goto L_53c72; }
L_53c66:
    X86_TICK(c, 9);
    // 053c66  mov dword ptr [ebp - 4], 1
    X86_AT(c, 0x53c66u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x1u);
    // 053c6d  jmp 0x53d23
    X86_AT(c, 0x53c6du);
    goto L_53d23;
L_53c72:
    X86_TICK(c, 31);
    // 053c72  mov ax, word ptr [0x4b81e]
    X86_AT(c, 0x53c72u);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(0x4B81Eu))));
    // 053c78  mov word ptr [ebp - 6], ax
    X86_AT(c, 0x53c78u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu)), (c.r[0] & 0xFFFFu));
    // 053c7c  sub eax, eax
    X86_AT(c, 0x53c7cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 053c7e  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x53c7eu);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
    // 053c84  mov ebx, edi
    X86_AT(c, 0x53c84u);
    c.r[3] = c.r[7];
    // 053c86  and byte ptr [ebx + 0xd], 0xfb
    X86_AT(c, 0x53c86u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[3] + 0xDu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFBu, 1)); }
    // 053c8a  test byte ptr [ebx + 0xc], 1
    X86_AT(c, 0x53c8au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x1u, 1);
    // 053c8e  je 0x53ce9
    X86_AT(c, 0x53c8eu);
    if (x86_cc(c, 4)) { goto L_53ce9; }
    X86_TICK(c, 12);
    // 053c90  cmp dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x53c90u);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u))), 0xFFFFFFFFu, 0, 4);
    // 053c94  je 0x53ccc
    X86_AT(c, 0x53c94u);
    if (x86_cc(c, 4)) { goto L_53ccc; }
    X86_TICK(c, 12);
    // 053c96  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x53c96u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 053c9a  je 0x53caf
    X86_AT(c, 0x53c9au);
    if (x86_cc(c, 4)) { goto L_53caf; }
    X86_TICK(c, 12);
    // 053c9c  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x53c9cu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 053ca0  je 0x53ca8
    X86_AT(c, 0x53ca0u);
    if (x86_cc(c, 4)) { goto L_53ca8; }
    X86_TICK(c, 12);
    // 053ca2  test byte ptr [ebx + 0xd], 8
    X86_AT(c, 0x53ca2u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x8u, 1);
    // 053ca6  je 0x53caf
    X86_AT(c, 0x53ca6u);
    if (x86_cc(c, 4)) { goto L_53caf; }
L_53ca8:
    X86_TICK(c, 9);
    // 053ca8  push edi
    X86_AT(c, 0x53ca8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053ca9  call 0x5390c
    X86_AT(c, 0x53ca9u);
    push32(c, 0x53caeu); x86_call_known(c, 0x5390cu, f_0005390c); X86_RET(c, 0x53caeu);
    X86_TICK(c, 4);
    // 053cae  pop ecx
    X86_AT(c, 0x53caeu);
    { uint32_t v = pop32(c); c.r[1] = v; }
L_53caf:
    X86_TICK(c, 7);
    // 053caf  cmp esi, 1
    X86_AT(c, 0x53cafu);
    (void)x86_sub(c, c.r[6], 0x1u, 0, 4);
    // 053cb2  jne 0x53ccc
    X86_AT(c, 0x53cb2u);
    if (x86_cc(c, 5)) { goto L_53ccc; }
    X86_TICK(c, 12);
    // 053cb4  test byte ptr [ebx + 0xc], 2
    X86_AT(c, 0x53cb4u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x2u, 1);
    // 053cb8  je 0x53ccc
    X86_AT(c, 0x53cb8u);
    if (x86_cc(c, 4)) { goto L_53ccc; }
    X86_TICK(c, 12);
    // 053cba  test byte ptr [ebx + 0xc], 4
    X86_AT(c, 0x53cbau);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xCu))) & 0x4u, 1);
    // 053cbe  je 0x53cc6
    X86_AT(c, 0x53cbeu);
    if (x86_cc(c, 4)) { goto L_53cc6; }
    X86_TICK(c, 12);
    // 053cc0  test byte ptr [ebx + 0xd], 8
    X86_AT(c, 0x53cc0u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xDu))) & 0x8u, 1);
    // 053cc4  jne 0x53ccc
    X86_AT(c, 0x53cc4u);
    if (x86_cc(c, 5)) { goto L_53ccc; }
L_53cc6:
    X86_TICK(c, 11);
    // 053cc6  mov eax, dword ptr [ebx + 4]
    X86_AT(c, 0x53cc6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)));
    // 053cc9  sub dword ptr [ebp + 0xc], eax
    X86_AT(c, 0x53cc9u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
L_53ccc:
    X86_TICK(c, 22);
    // 053ccc  mov eax, esi
    X86_AT(c, 0x53cccu);
    c.r[0] = c.r[6];
    // 053cce  push eax
    X86_AT(c, 0x53cceu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053ccf  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x53ccfu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 053cd2  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x53cd2u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 053cd5  push eax
    X86_AT(c, 0x53cd5u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053cd6  call 0x55db8
    X86_AT(c, 0x53cd6u);
    push32(c, 0x53cdbu); x86_call_known(c, 0x55db8u, f_00055db8); X86_RET(c, 0x53cdbu);
    X86_TICK(c, 15);
    // 053cdb  mov dword ptr [ebx + 4], 0xffffffff
    X86_AT(c, 0x53cdbu);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0x4u)), 0xFFFFFFFFu);
    // 053ce2  mov eax, dword ptr [ebx + 8]
    X86_AT(c, 0x53ce2u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u)));
    // 053ce5  mov dword ptr [ebx], eax
    X86_AT(c, 0x53ce5u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3])), c.r[0]);
    // 053ce7  jmp 0x53cf8
    X86_AT(c, 0x53ce7u);
    goto L_53cf8;
L_53ce9:
    X86_TICK(c, 22);
    // 053ce9  mov eax, esi
    X86_AT(c, 0x53ce9u);
    c.r[0] = c.r[6];
    // 053ceb  push eax
    X86_AT(c, 0x53cebu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053cec  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x53cecu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 053cef  mov al, byte ptr [ebx + 0xe]
    X86_AT(c, 0x53cefu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[3] + 0xEu))));
    // 053cf2  push eax
    X86_AT(c, 0x53cf2u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053cf3  call 0x55db8
    X86_AT(c, 0x53cf3u);
    push32(c, 0x53cf8u); x86_call_known(c, 0x55db8u, f_00055db8); X86_RET(c, 0x53cf8u);
L_53cf8:
    X86_TICK(c, 12);
    // 053cf8  cmp word ptr [0x4b81e], 0
    X86_AT(c, 0x53cf8u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4B81Eu))), 0x0u, 0, 2);
    // 053d00  jne 0x53d15
    X86_AT(c, 0x53d00u);
    if (x86_cc(c, 5)) { goto L_53d15; }
    X86_TICK(c, 15);
    // 053d02  mov ax, word ptr [ebp - 6]
    X86_AT(c, 0x53d02u);
    s16(c, 0, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFAu))));
    // 053d06  mov word ptr [0x4b81e], ax
    X86_AT(c, 0x53d06u);
    wr16((c.sbase[3] + (uint32_t)(0x4B81Eu)), (c.r[0] & 0xFFFFu));
    // 053d0c  mov dword ptr [ebp - 4], 0
    X86_AT(c, 0x53d0cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), 0x0u);
    // 053d13  jmp 0x53d1f
    X86_AT(c, 0x53d13u);
    goto L_53d1f;
L_53d15:
    X86_TICK(c, 8);
    // 053d15  movzx eax, word ptr [0x4b81e]
    X86_AT(c, 0x53d15u);
    c.r[0] = rd16((c.sbase[3] + (uint32_t)(0x4B81Eu)));
    // 053d1c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x53d1cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_53d1f:
    X86_TICK(c, 7);
    // 053d1f  and byte ptr [edi + 0xc], 0xef
    X86_AT(c, 0x53d1fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xEFu, 1)); }
L_53d23:
    X86_TICK(c, 32);
    // 053d23  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x53d23u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 053d26  pop edi
    X86_AT(c, 0x53d26u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053d27  pop esi
    X86_AT(c, 0x53d27u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 053d28  pop ebx
    X86_AT(c, 0x53d28u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 053d29  leave 
    X86_AT(c, 0x53d29u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 053d2a  ret 
    X86_AT(c, 0x53d2au);
    c.eip = pop32(c); return;
    x86_fault(c, 0x53c50u, "ran off the end of a function");
}
void f_00053db8(X86Cpu& c) {
    X86_TICK(c, 39);
    // 053db8  push ebp
    X86_AT(c, 0x53db8u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 053db9  mov ebp, esp
    X86_AT(c, 0x53db9u);
    c.r[5] = c.r[4];
    // 053dbb  push ecx
    X86_AT(c, 0x53dbbu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 053dbc  push ebx
    X86_AT(c, 0x53dbcu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 053dbd  push edi
    X86_AT(c, 0x53dbdu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053dbe  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x53dbeu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 053dc1  mov ebx, dword ptr [ebp - 4]
    X86_AT(c, 0x53dc1u);
    c.r[3] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 053dc4  push dword ptr [ebx + 8]
    X86_AT(c, 0x53dc4u);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(c.r[3] + 0x8u))); push32(c, v); }
    // 053dc7  push edi
    X86_AT(c, 0x53dc7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053dc8  push 1
    X86_AT(c, 0x53dc8u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 053dca  push dword ptr [ebp + 8]
    X86_AT(c, 0x53dcau);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 053dcd  call 0x53858
    X86_AT(c, 0x53dcdu);
    push32(c, 0x53dd2u); x86_call_known(c, 0x53858u, f_00053858); X86_RET(c, 0x53dd2u);
    X86_TICK(c, 9);
    // 053dd2  add esp, 0x10
    X86_AT(c, 0x53dd2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x10u, 0, 4); }
    // 053dd5  cmp edi, eax
    X86_AT(c, 0x53dd5u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 053dd7  je 0x53de4
    X86_AT(c, 0x53dd7u);
    if (x86_cc(c, 4)) { goto L_53de4; }
    X86_TICK(c, 11);
    // 053dd9  mov dword ptr [ebx - 4], 0xffffffff
    X86_AT(c, 0x53dd9u);
    wr32((c.sbase[3] + (uint32_t)(c.r[3] + 0xFFFFFFFCu)), 0xFFFFFFFFu);
    // 053de0  mov ebp, ebx
    X86_AT(c, 0x53de0u);
    c.r[5] = c.r[3];
    // 053de2  jmp 0x53e1d
    X86_AT(c, 0x53de2u);
    goto L_53e1d;
L_53de4:
    X86_TICK(c, 24);
    // 053de4  pop edi
    X86_AT(c, 0x53de4u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053de5  pop ebx
    X86_AT(c, 0x53de5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 053de6  leave 
    X86_AT(c, 0x53de6u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 053de7  ret 8
    X86_AT(c, 0x53de7u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
L_53e1d:
    X86_TICK(c, 34);
    // 053e1d  lea esp, [ebp - 0x10]
    X86_AT(c, 0x53e1du);
    c.r[4] = (uint32_t)(c.r[5] + 0xFFFFFFF0u);
    // 053e20  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x53e20u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 053e23  pop edi
    X86_AT(c, 0x53e23u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053e24  pop esi
    X86_AT(c, 0x53e24u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 053e25  pop ebx
    X86_AT(c, 0x53e25u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 053e26  leave 
    X86_AT(c, 0x53e26u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 053e27  ret 
    X86_AT(c, 0x53e27u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x53db8u, "ran off the end of a function");
}
void f_00053df4(X86Cpu& c) {
    X86_TICK(c, 33);
    // 053df4  enter 4, 0
    X86_AT(c, 0x53df4u);
    x86_enter(c, 0x4u, 0x0u, 4);
    // 053df8  push ebx
    X86_AT(c, 0x53df8u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 053df9  push esi
    X86_AT(c, 0x53df9u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 053dfa  push edi
    X86_AT(c, 0x53dfau);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053dfb  mov dword ptr [0x4b4c0], 0x53db8
    X86_AT(c, 0x53dfbu);
    wr32((c.sbase[3] + (uint32_t)(0x4B4C0u)), 0x53DB8u);
    // 053e05  mov dword ptr [0x4b4c4], ebp
    X86_AT(c, 0x53e05u);
    wr32((c.sbase[3] + (uint32_t)(0x4B4C4u)), c.r[5]);
    // 053e0b  push dword ptr [ebp + 0x10]
    X86_AT(c, 0x53e0bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u))); push32(c, v); }
    // 053e0e  push dword ptr [ebp + 0xc]
    X86_AT(c, 0x53e0eu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, v); }
    // 053e11  call 0x55060
    X86_AT(c, 0x53e11u);
    push32(c, 0x53e16u); x86_call_known(c, 0x55060u, f_00055060); X86_RET(c, 0x53e16u);
    X86_TICK(c, 11);
    // 053e16  mov eax, dword ptr [0x4b4bc]
    X86_AT(c, 0x53e16u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B4BCu)));
    // 053e1b  jmp 0x53e23
    X86_AT(c, 0x53e1bu);
    goto L_53e23;
L_53e23:
    X86_TICK(c, 28);
    // 053e23  pop edi
    X86_AT(c, 0x53e23u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053e24  pop esi
    X86_AT(c, 0x53e24u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 053e25  pop ebx
    X86_AT(c, 0x53e25u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 053e26  leave 
    X86_AT(c, 0x53e26u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 053e27  ret 
    X86_AT(c, 0x53e27u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x53df4u, "ran off the end of a function");
}
void f_00053e50(X86Cpu& c) {
    X86_TICK(c, 25);
    // 053e50  push ebp
    X86_AT(c, 0x53e50u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 053e51  mov ebp, esp
    X86_AT(c, 0x53e51u);
    c.r[5] = c.r[4];
    // 053e53  lea eax, [ebp + 0xc]
    X86_AT(c, 0x53e53u);
    c.r[0] = (uint32_t)(c.r[5] + 0xCu);
    // 053e56  push eax
    X86_AT(c, 0x53e56u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 053e57  push dword ptr [ebp + 8]
    X86_AT(c, 0x53e57u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 053e5a  push dword ptr [0x4b498]
    X86_AT(c, 0x53e5au);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4B498u))); push32(c, v); }
    // 053e60  call 0x53df4
    X86_AT(c, 0x53e60u);
    push32(c, 0x53e65u); x86_call_known(c, 0x53df4u, f_00053df4); X86_RET(c, 0x53e65u);
    X86_TICK(c, 18);
    // 053e65  add esp, 0xc
    X86_AT(c, 0x53e65u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0xCu, 0, 4); }
    // 053e68  leave 
    X86_AT(c, 0x53e68u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 053e69  ret 
    X86_AT(c, 0x53e69u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x53e50u, "ran off the end of a function");
}
void f_00053e9c(X86Cpu& c) {
    X86_TICK(c, 16);
    // 053e9c  push ebp
    X86_AT(c, 0x53e9cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 053e9d  mov ebp, esp
    X86_AT(c, 0x53e9du);
    c.r[5] = c.r[4];
    // 053e9f  push dword ptr [ebp + 8]
    X86_AT(c, 0x53e9fu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 053ea2  call 0x55baa
    X86_AT(c, 0x53ea2u);
    push32(c, 0x53ea7u); x86_call_known(c, 0x55baau, f_00055baa); X86_RET(c, 0x53ea7u);
    X86_TICK(c, 16);
    // 053ea7  leave 
    X86_AT(c, 0x53ea7u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 053ea8  ret 
    X86_AT(c, 0x53ea8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x53e9cu, "ran off the end of a function");
}
void f_00053eb0(X86Cpu& c) {
    X86_TICK(c, 16);
    // 053eb0  push ebp
    X86_AT(c, 0x53eb0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 053eb1  mov ebp, esp
    X86_AT(c, 0x53eb1u);
    c.r[5] = c.r[4];
    // 053eb3  push dword ptr [ebp + 8]
    X86_AT(c, 0x53eb3u);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 053eb6  call 0x55b70
    X86_AT(c, 0x53eb6u);
    push32(c, 0x53ebbu); x86_call_known(c, 0x55b70u, f_00055b70); X86_RET(c, 0x53ebbu);
    X86_TICK(c, 16);
    // 053ebb  leave 
    X86_AT(c, 0x53ebbu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 053ebc  ret 
    X86_AT(c, 0x53ebcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x53eb0u, "ran off the end of a function");
}
void f_00053f1c(X86Cpu& c) {
    X86_TICK(c, 46);
    // 053f1c  enter 0x70, 0
    X86_AT(c, 0x53f1cu);
    x86_enter(c, 0x70u, 0x0u, 4);
    // 053f20  push esi
    X86_AT(c, 0x53f20u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 053f21  push edi
    X86_AT(c, 0x53f21u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053f22  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x53f22u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 053f25  mov eax, dword ptr [0x4b58c]
    X86_AT(c, 0x53f25u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B58Cu)));
    // 053f2a  mov dx, word ptr [0x4b590]
    X86_AT(c, 0x53f2au);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(0x4B590u))));
    // 053f31  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x53f31u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 053f34  mov word ptr [ebp - 8], dx
    X86_AT(c, 0x53f34u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 053f38  mov edx, 0x7fffffff
    X86_AT(c, 0x53f38u);
    c.r[2] = 0x7FFFFFFFu;
    // 053f3d  sub eax, eax
    X86_AT(c, 0x53f3du);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 053f3f  push edi
    X86_AT(c, 0x53f3fu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053f40  mov ecx, edx
    X86_AT(c, 0x53f40u);
    c.r[1] = c.r[2];
    // 053f42  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x53f42u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 053f44  jne 0x53f49
    X86_AT(c, 0x53f44u);
    if (x86_cc(c, 5)) { goto L_53f49; }
    X86_TICK(c, 4);
    // 053f46  inc ecx
    X86_AT(c, 0x53f46u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 053f47  sub edx, ecx
    X86_AT(c, 0x53f47u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_53f49:
    X86_TICK(c, 13);
    // 053f49  pop edi
    X86_AT(c, 0x53f49u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053f4a  mov ax, 0x64
    X86_AT(c, 0x53f4au);
    s16(c, 0, 0x64u);
    // 053f4e  cmp ax, dx
    X86_AT(c, 0x53f4eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 053f51  jb 0x53f54
    X86_AT(c, 0x53f51u);
    if (x86_cc(c, 2)) { goto L_53f54; }
    X86_TICK(c, 3);
    // 053f53  xchg edx, eax
    X86_AT(c, 0x53f53u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_53f54:
    X86_TICK(c, 10);
    // 053f54  movzx esi, ax
    X86_AT(c, 0x53f54u);
    c.r[6] = (c.r[0] & 0xFFFFu);
    // 053f57  jmp 0x53ffb
    X86_AT(c, 0x53f57u);
    goto L_53ffb;
L_53f5c:
    X86_TICK(c, 64);
    // 053f5c  mov ecx, esi
    X86_AT(c, 0x53f5cu);
    c.r[1] = c.r[6];
    // 053f5e  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x53f5eu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 053f61  push ds
    X86_AT(c, 0x53f61u);
    push32(c, c.sreg[3]);
    // 053f62  push es
    X86_AT(c, 0x53f62u);
    push32(c, c.sreg[0]);
    // 053f63  lea edx, [ebp - 0x70]
    X86_AT(c, 0x53f63u);
    c.r[2] = (uint32_t)(c.r[5] + 0xFFFFFF90u);
    // 053f66  push ds
    X86_AT(c, 0x53f66u);
    push32(c, c.sreg[3]);
    // 053f67  pop es
    X86_AT(c, 0x53f67u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 053f68  pop ds
    X86_AT(c, 0x53f68u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 053f69  push esi
    X86_AT(c, 0x53f69u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 053f6a  push edi
    X86_AT(c, 0x53f6au);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053f6b  mov esi, eax
    X86_AT(c, 0x53f6bu);
    c.r[6] = c.r[0];
    // 053f6d  mov edi, edx
    X86_AT(c, 0x53f6du);
    c.r[7] = c.r[2];
    // 053f6f  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x53f6fu);
    x86_string(c, 0, 1, 243, 4, 3);
    // 053f71  pop edi
    X86_AT(c, 0x53f71u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053f72  pop esi
    X86_AT(c, 0x53f72u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 053f73  pop ds
    X86_AT(c, 0x53f73u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 053f74  push esi
    X86_AT(c, 0x53f74u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 053f75  push edi
    X86_AT(c, 0x53f75u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053f76  push edx
    X86_AT(c, 0x53f76u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 053f77  call 0x55e04
    X86_AT(c, 0x53f77u);
    push32(c, 0x53f7cu); x86_call_known(c, 0x55e04u, f_00055e04); X86_RET(c, 0x53f7cu);
    X86_TICK(c, 7);
    // 053f7c  and ax, ax
    X86_AT(c, 0x53f7cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & (c.r[0] & 0xFFFFu), 2)); }
    // 053f7f  jne 0x53fd1
    X86_AT(c, 0x53f7fu);
    if (x86_cc(c, 5)) { goto L_53fd1; }
    X86_TICK(c, 24);
    // 053f81  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x53f81u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 053f84  cmp byte ptr es:[eax + esi*1], 0x3d
    X86_AT(c, 0x53f84u);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[0] + c.r[6]))), 0x3Du, 0, 1);
    // 053f89  push ds
    X86_AT(c, 0x53f89u);
    push32(c, c.sreg[3]);
    // 053f8a  pop es
    X86_AT(c, 0x53f8au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 053f8b  jne 0x53fd1
    X86_AT(c, 0x53f8bu);
    if (x86_cc(c, 5)) { goto L_53fd1; }
    X86_TICK(c, 37);
    // 053f8d  lea eax, [esi + 1]
    X86_AT(c, 0x53f8du);
    c.r[0] = (uint32_t)(c.r[6] + 0x1u);
    // 053f90  add dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x53f90u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[0], 0, 4)); }
    // 053f93  mov edx, 0x7fffffff
    X86_AT(c, 0x53f93u);
    c.r[2] = 0x7FFFFFFFu;
    // 053f98  sub eax, eax
    X86_AT(c, 0x53f98u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 053f9a  les ecx, fword ptr [ebp - 0xc]
    X86_AT(c, 0x53f9au);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[1] = o; }
    // 053f9d  push edi
    X86_AT(c, 0x53f9du);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053f9e  mov edi, ecx
    X86_AT(c, 0x53f9eu);
    c.r[7] = c.r[1];
    // 053fa0  mov ecx, edx
    X86_AT(c, 0x53fa0u);
    c.r[1] = c.r[2];
    // 053fa2  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x53fa2u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 053fa4  jne 0x53fa9
    X86_AT(c, 0x53fa4u);
    if (x86_cc(c, 5)) { goto L_53fa9; }
    X86_TICK(c, 4);
    // 053fa6  inc ecx
    X86_AT(c, 0x53fa6u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 053fa7  sub edx, ecx
    X86_AT(c, 0x53fa7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_53fa9:
    X86_TICK(c, 15);
    // 053fa9  pop edi
    X86_AT(c, 0x53fa9u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053faa  inc edx
    X86_AT(c, 0x53faau);
    { uint32_t v = c.r[2]; c.r[2] = x86_inc(c, v, 4); }
    // 053fab  mov eax, 0x80
    X86_AT(c, 0x53fabu);
    c.r[0] = 0x80u;
    // 053fb0  cmp eax, edx
    X86_AT(c, 0x53fb0u);
    (void)x86_sub(c, c.r[0], c.r[2], 0, 4);
    // 053fb2  jb 0x53fb5
    X86_AT(c, 0x53fb2u);
    if (x86_cc(c, 2)) { goto L_53fb5; }
    X86_TICK(c, 3);
    // 053fb4  xchg edx, eax
    X86_AT(c, 0x53fb4u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
L_53fb5:
    X86_TICK(c, 62);
    // 053fb5  xchg ecx, eax
    X86_AT(c, 0x53fb5u);
    { uint32_t t = c.r[1]; c.r[1] = c.r[0]; c.r[0] = t; }
    // 053fb6  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x53fb6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 053fb9  push ds
    X86_AT(c, 0x53fb9u);
    push32(c, c.sreg[3]);
    // 053fba  push es
    X86_AT(c, 0x53fbau);
    push32(c, c.sreg[0]);
    // 053fbb  mov edx, 0x4b4e0
    X86_AT(c, 0x53fbbu);
    c.r[2] = 0x4B4E0u;
    // 053fc0  push ds
    X86_AT(c, 0x53fc0u);
    push32(c, c.sreg[3]);
    // 053fc1  pop es
    X86_AT(c, 0x53fc1u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 053fc2  pop ds
    X86_AT(c, 0x53fc2u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 053fc3  push esi
    X86_AT(c, 0x53fc3u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 053fc4  push edi
    X86_AT(c, 0x53fc4u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053fc5  mov esi, eax
    X86_AT(c, 0x53fc5u);
    c.r[6] = c.r[0];
    // 053fc7  mov edi, edx
    X86_AT(c, 0x53fc7u);
    c.r[7] = c.r[2];
    // 053fc9  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x53fc9u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 053fcb  pop edi
    X86_AT(c, 0x53fcbu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053fcc  pop esi
    X86_AT(c, 0x53fccu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 053fcd  pop ds
    X86_AT(c, 0x53fcdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 053fce  xchg edx, eax
    X86_AT(c, 0x53fceu);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 053fcf  jmp 0x5400f
    X86_AT(c, 0x53fcfu);
    goto L_5400f;
L_53fd1:
    X86_TICK(c, 28);
    // 053fd1  mov edx, 0x7fffffff
    X86_AT(c, 0x53fd1u);
    c.r[2] = 0x7FFFFFFFu;
    // 053fd6  sub eax, eax
    X86_AT(c, 0x53fd6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 053fd8  les ecx, fword ptr [ebp - 0xc]
    X86_AT(c, 0x53fd8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[1] = o; }
    // 053fdb  push edi
    X86_AT(c, 0x53fdbu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 053fdc  mov edi, ecx
    X86_AT(c, 0x53fdcu);
    c.r[7] = c.r[1];
    // 053fde  mov ecx, edx
    X86_AT(c, 0x53fdeu);
    c.r[1] = c.r[2];
    // 053fe0  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x53fe0u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 053fe2  jne 0x53fe7
    X86_AT(c, 0x53fe2u);
    if (x86_cc(c, 5)) { goto L_53fe7; }
    X86_TICK(c, 4);
    // 053fe4  inc ecx
    X86_AT(c, 0x53fe4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 053fe5  sub edx, ecx
    X86_AT(c, 0x53fe5u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_53fe7:
    X86_TICK(c, 24);
    // 053fe7  pop edi
    X86_AT(c, 0x53fe7u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 053fe8  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x53fe8u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 053feb  lea eax, es:[eax + edx*1 + 1]
    X86_AT(c, 0x53febu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[2] + 0x1u);
    // 053ff0  mov edx, es
    X86_AT(c, 0x53ff0u);
    c.r[2] = (uint32_t)c.sreg[0];
    // 053ff2  mov dword ptr [ebp - 0xc], eax
    X86_AT(c, 0x53ff2u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)), c.r[0]);
    // 053ff5  mov word ptr [ebp - 8], dx
    X86_AT(c, 0x53ff5u);
    wr16((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), (c.r[2] & 0xFFFFu));
    // 053ff9  push ds
    X86_AT(c, 0x53ff9u);
    push32(c, c.sreg[3]);
    // 053ffa  pop es
    X86_AT(c, 0x53ffau);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
L_53ffb:
    X86_TICK(c, 24);
    // 053ffb  les eax, fword ptr [ebp - 0xc]
    X86_AT(c, 0x53ffbu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF4u)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[0] = o; }
    // 053ffe  cmp byte ptr es:[eax], 0
    X86_AT(c, 0x53ffeu);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[0]))), 0x0u, 0, 1);
    // 054002  push ds
    X86_AT(c, 0x54002u);
    push32(c, c.sreg[3]);
    // 054003  pop es
    X86_AT(c, 0x54003u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 054004  jne 0x53f5c
    X86_AT(c, 0x54004u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x53f5cu); goto L_53f5c; }
    X86_TICK(c, 4);
    // 05400a  sub eax, eax
    X86_AT(c, 0x5400au);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 05400c  mov dword ptr [ebp - 4], eax
    X86_AT(c, 0x5400cu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)), c.r[0]);
L_5400f:
    X86_TICK(c, 24);
    // 05400f  pop edi
    X86_AT(c, 0x5400fu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 054010  pop esi
    X86_AT(c, 0x54010u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 054011  leave 
    X86_AT(c, 0x54011u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 054012  ret 
    X86_AT(c, 0x54012u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x53f1cu, "ran off the end of a function");
}
void f_00054014(X86Cpu& c) {
    X86_TICK(c, 72);
    // 054014  mov edx, esi
    X86_AT(c, 0x54014u);
    c.r[2] = c.r[6];
    // 054016  push edi
    X86_AT(c, 0x54016u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 054017  sub eax, eax
    X86_AT(c, 0x54017u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 054019  mov ecx, 0xffffffff
    X86_AT(c, 0x54019u);
    c.r[1] = 0xFFFFFFFFu;
    // 05401e  mov edi, dword ptr [esp + 0xc]
    X86_AT(c, 0x5401eu);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 054022  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x54022u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 054024  not ecx
    X86_AT(c, 0x54024u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 054026  mov esi, dword ptr [esp + 0xc]
    X86_AT(c, 0x54026u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0xCu)));
    // 05402a  mov edi, dword ptr [esp + 8]
    X86_AT(c, 0x5402au);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 05402e  mov eax, ecx
    X86_AT(c, 0x5402eu);
    c.r[0] = c.r[1];
    // 054030  shr ecx, 2
    X86_AT(c, 0x54030u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 4, w); if (w) c.r[1] = r; }
    // 054033  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x54033u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 054035  mov ecx, eax
    X86_AT(c, 0x54035u);
    c.r[1] = c.r[0];
    // 054037  and ecx, 3
    X86_AT(c, 0x54037u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x3u, 4); }
    // 05403d  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x5403du);
    x86_string(c, 0, 1, 243, 4, 3);
    // 05403f  mov eax, dword ptr [esp + 8]
    X86_AT(c, 0x5403fu);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[4] + 0x8u)));
    // 054043  mov esi, edx
    X86_AT(c, 0x54043u);
    c.r[6] = c.r[2];
    // 054045  pop edi
    X86_AT(c, 0x54045u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 054046  ret 
    X86_AT(c, 0x54046u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x54014u, "ran off the end of a function");
}
void f_00054058(X86Cpu& c) {
    X86_TICK(c, 16);
    // 054058  push ebp
    X86_AT(c, 0x54058u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 054059  mov ebp, esp
    X86_AT(c, 0x54059u);
    c.r[5] = c.r[4];
    // 05405b  push dword ptr [ebp + 8]
    X86_AT(c, 0x5405bu);
    { uint32_t v = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))); push32(c, v); }
    // 05405e  call 0x55cac
    X86_AT(c, 0x5405eu);
    push32(c, 0x54063u); x86_call_known(c, 0x55cacu, f_00055cac); X86_RET(c, 0x54063u);
    X86_TICK(c, 16);
    // 054063  leave 
    X86_AT(c, 0x54063u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 054064  ret 4
    X86_AT(c, 0x54064u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x54058u, "ran off the end of a function");
}
void f_00054094(X86Cpu& c) {
    X86_TICK(c, 7);
    // 054094  jmp 0x540ec
    X86_AT(c, 0x54094u);
    goto L_540ec;
L_54096:
    X86_TICK(c, 7);
    // 054096  call 0x50158
    X86_AT(c, 0x54096u);
    push32(c, 0x5409bu); x86_call_known(c, 0x50158u, f_00050158); X86_RET(c, 0x5409bu);
L_5409b:
    X86_TICK(c, 9);
    // 05409b  push eax
    X86_AT(c, 0x5409bu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05409c  call 0x55cac
    X86_AT(c, 0x5409cu);
    push32(c, 0x540a1u); x86_call_known(c, 0x55cacu, f_00055cac); X86_RET(c, 0x540a1u);
    X86_TICK(c, 39);
    // 0540a1  xor eax, eax
    X86_AT(c, 0x540a1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0540a3  int 0x21
    X86_AT(c, 0x540a3u);
    x86_int(c, 0x21, 0x540a5u);
    X86_TICK(c, 10);
    // 0540a5  ret 
    X86_AT(c, 0x540a5u);
    c.eip = pop32(c); return;
L_540ec:
    X86_TICK(c, 7);
    // 0540ec  cmp al, 0xcd
    X86_AT(c, 0x540ecu);
    (void)x86_sub(c, g8(c, 0), 0xCDu, 0, 1);
    // 0540ee  jne 0x5410b
    X86_AT(c, 0x540eeu);
    if (x86_cc(c, 5)) { goto L_5410b; }
    X86_TICK(c, 7);
    // 0540f0  cmp ah, 0xab
    X86_AT(c, 0x540f0u);
    (void)x86_sub(c, g8(c, 4), 0xABu, 0, 1);
    // 0540f3  jne 0x5410b
    X86_AT(c, 0x540f3u);
    if (x86_cc(c, 5)) { goto L_5410b; }
    X86_TICK(c, 7);
    // 0540f5  cmp eax, 0xabcdabcd
    X86_AT(c, 0x540f5u);
    (void)x86_sub(c, c.r[0], 0xABCDABCDu, 0, 4);
    // 0540fa  jne 0x5410b
    X86_AT(c, 0x540fau);
    if (x86_cc(c, 5)) { goto L_5410b; }
    X86_TICK(c, 11);
    // 0540fc  mov byte ptr [0x4b5a2], 1
    X86_AT(c, 0x540fcu);
    wr8((c.sbase[3] + (uint32_t)(0x4B5A2u)), 0x1u);
    // 054103  mov dword ptr [0x4b578], edx
    X86_AT(c, 0x54103u);
    wr32((c.sbase[3] + (uint32_t)(0x4B578u)), c.r[2]);
    // 054109  jmp 0x54112
    X86_AT(c, 0x54109u);
    goto L_54112;
L_5410b:
    X86_TICK(c, 2);
    // 05410b  mov byte ptr [0x4b5a2], 2
    X86_AT(c, 0x5410bu);
    wr8((c.sbase[3] + (uint32_t)(0x4B5A2u)), 0x2u);
L_54112:
    X86_TICK(c, 34);
    // 054112  sub ebp, ebp
    X86_AT(c, 0x54112u);
    { uint32_t v = c.r[5]; c.r[5] = x86_sub(c, v, c.r[5], 0, 4); }
    // 054114  and esp, 0xfffffffc
    X86_AT(c, 0x54114u);
    { uint32_t v = c.r[4]; c.r[4] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 054117  mov dword ptr [0x35040], 0x200
    X86_AT(c, 0x54117u);
    wr32((c.sbase[3] + (uint32_t)(0x35040u)), 0x200u);
    // 054121  mov dword ptr [0x35044], 0x100
    X86_AT(c, 0x54121u);
    wr32((c.sbase[3] + (uint32_t)(0x35044u)), 0x100u);
    // 05412b  add dword ptr [0x35040], 0x57e24
    X86_AT(c, 0x5412bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x35040u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x57E24u, 0, 4)); }
    // 054135  add dword ptr [0x35044], 0x57e24
    X86_AT(c, 0x54135u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x35044u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x57E24u, 0, 4)); }
    // 05413f  cmp byte ptr [0x4b5a2], 1
    X86_AT(c, 0x5413fu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B5A2u))), 0x1u, 0, 1);
    // 054146  je 0x54168
    X86_AT(c, 0x54146u);
    if (x86_cc(c, 4)) { goto L_54168; }
    X86_TICK(c, 23);
    // 054148  mov dword ptr [0x4b570], 0
    X86_AT(c, 0x54148u);
    wr32((c.sbase[3] + (uint32_t)(0x4B570u)), 0x0u);
    // 054152  lea eax, [esp + 0x20]
    X86_AT(c, 0x54152u);
    c.r[0] = (uint32_t)(c.r[4] + 0x20u);
    // 054156  mov dword ptr [0x4b56c], esp
    X86_AT(c, 0x54156u);
    wr32((c.sbase[3] + (uint32_t)(0x4B56Cu)), c.r[4]);
    // 05415c  mov eax, ds
    X86_AT(c, 0x5415cu);
    c.r[0] = (uint32_t)c.sreg[3];
    // 05415e  lsl eax, eax
    X86_AT(c, 0x5415eu);
    { uint32_t v; if (x86_lsl(c, (c.r[0] & 0xFFFFu), v)) { c.r[0] = v; c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 054161  mov dword ptr [0x4b574], eax
    X86_AT(c, 0x54161u);
    wr32((c.sbase[3] + (uint32_t)(0x4B574u)), c.r[0]);
    // 054166  jmp 0x541a8
    X86_AT(c, 0x54166u);
    goto L_541a8;
L_54168:
    X86_TICK(c, 84);
    // 054168  mov eax, esp
    X86_AT(c, 0x54168u);
    c.r[0] = c.r[4];
    // 05416a  mov ecx, dword ptr [edx + 0x74]
    X86_AT(c, 0x5416au);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x74u)));
    // 05416d  shl ecx, 0xa
    X86_AT(c, 0x5416du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[1] = r; }
    // 054170  sub eax, ecx
    X86_AT(c, 0x54170u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[1], 0, 4); }
    // 054172  mov dword ptr [0x4b570], eax
    X86_AT(c, 0x54172u);
    wr32((c.sbase[3] + (uint32_t)(0x4B570u)), c.r[0]);
    // 054177  mov eax, dword ptr [edx + 0x50]
    X86_AT(c, 0x54177u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x50u)));
    // 05417a  mov dword ptr [0x4b56c], eax
    X86_AT(c, 0x5417au);
    wr32((c.sbase[3] + (uint32_t)(0x4B56Cu)), c.r[0]);
    // 05417f  mov ecx, dword ptr [edx + 0x3c]
    X86_AT(c, 0x5417fu);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x3Cu)));
    // 054182  shl ecx, 0xa
    X86_AT(c, 0x54182u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0xAu, 4, w); if (w) c.r[1] = r; }
    // 054185  add eax, ecx
    X86_AT(c, 0x54185u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[1], 0, 4); }
    // 054187  mov dword ptr [0x4b574], eax
    X86_AT(c, 0x54187u);
    wr32((c.sbase[3] + (uint32_t)(0x4B574u)), c.r[0]);
    // 05418c  mov ebx, dword ptr [edx + 0x54]
    X86_AT(c, 0x5418cu);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x54u)));
    // 05418f  sub ebx, dword ptr [edx + 0x10]
    X86_AT(c, 0x5418fu);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u))), 0, 4); }
    // 054192  shr ebx, 4
    X86_AT(c, 0x54192u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 054195  inc ebx
    X86_AT(c, 0x54195u);
    { uint32_t v = c.r[3]; c.r[3] = x86_inc(c, v, 4); }
    // 054196  mov ah, 0x4a
    X86_AT(c, 0x54196u);
    s8(c, 4, 0x4Au);
    // 054198  int 0x21
    X86_AT(c, 0x54198u);
    x86_int(c, 0x21, 0x5419au);
    X86_TICK(c, 12);
    // 05419a  test byte ptr [edx + 0xb7], 1
    X86_AT(c, 0x5419au);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[2] + 0xB7u))) & 0x1u, 1);
    // 0541a1  setne byte ptr [0x4b599]
    X86_AT(c, 0x541a1u);
    wr8((c.sbase[3] + (uint32_t)(0x4B599u)), x86_cc(c, 5) ? 1u : 0u);
L_541a8:
    X86_TICK(c, 11);
    // 0541a8  esc 0x1c, bl
    X86_AT(c, 0x541a8u);
    // 0541aa  xor eax, eax
    X86_AT(c, 0x541aau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 0541ac  mov word ptr [0x4b595], ax
    X86_AT(c, 0x541acu);
    wr16((c.sbase[3] + (uint32_t)(0x4B595u)), (c.r[0] & 0xFFFFu));
    // 0541b2  sub ecx, ecx
    X86_AT(c, 0x541b2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 0541b4  mov cl, 0xf
    X86_AT(c, 0x541b4u);
    s8(c, 1, 0xFu);
L_541b6:
    X86_TICK(c, 11);
    // 0541b6  loop 0x541b6
    X86_AT(c, 0x541b6u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x541b6u); goto L_541b6; }
    X86_TICK(c, 5);
    // 0541b8  esc 0xf, byte ptr [0x4b595]
    X86_AT(c, 0x541b8u);
    // 0541be  mov cl, 0xf
    X86_AT(c, 0x541beu);
    s8(c, 1, 0xFu);
L_541c0:
    X86_TICK(c, 11);
    // 0541c0  loop 0x541c0
    X86_AT(c, 0x541c0u);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x541c0u); goto L_541c0; }
    X86_TICK(c, 19);
    // 0541c2  and word ptr [0x4b595], 0xf3f
    X86_AT(c, 0x541c2u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B595u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xF3Fu, 2)); }
    // 0541cb  cmp word ptr [0x4b595], 0x33f
    X86_AT(c, 0x541cbu);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4B595u))), 0x33Fu, 0, 2);
    // 0541d4  jne 0x54214
    X86_AT(c, 0x541d4u);
    if (x86_cc(c, 5)) { goto L_54214; }
    X86_TICK(c, 5);
    // 0541d6  esc 0x2f, byte ptr [0x4b595]
    X86_AT(c, 0x541d6u);
    // 0541dc  mov cl, 0xf
    X86_AT(c, 0x541dcu);
    s8(c, 1, 0xFu);
L_541de:
    X86_TICK(c, 11);
    // 0541de  loop 0x541de
    X86_AT(c, 0x541deu);
    c.r[1] -= 1; if (c.r[1] != 0) { X86_POLL(c, 0x541deu); goto L_541de; }
    X86_TICK(c, 12);
    // 0541e0  test word ptr [0x4b595], 0xb8bf
    X86_AT(c, 0x541e0u);
    (void)x86_logic(c, rd16((c.sbase[3] + (uint32_t)(0x4B595u))) & 0xB8BFu, 2);
    // 0541e9  jne 0x54214
    X86_AT(c, 0x541e9u);
    if (x86_cc(c, 5)) { goto L_54214; }
    X86_TICK(c, 51);
    // 0541eb  wait 
    X86_AT(c, 0x541ebu);
    // 0541ec  esc 0xd, byte ptr cs:[0x54488]
    X86_AT(c, 0x541ecu);
    // 0541f3  mov byte ptr [0x4b593], 1
    X86_AT(c, 0x541f3u);
    wr8((c.sbase[3] + (uint32_t)(0x4B593u)), 0x1u);
    // 0541fa  esc 0xd, al
    X86_AT(c, 0x541fau);
    // 0541fc  esc 0xd, dh
    X86_AT(c, 0x541fcu);
    // 0541fe  esc 0x37, cl
    X86_AT(c, 0x541feu);
    // 054200  esc 8, al
    X86_AT(c, 0x54200u);
    // 054202  esc 0xc, al
    X86_AT(c, 0x54202u);
    // 054204  esc 0x33, cl
    X86_AT(c, 0x54204u);
    // 054206  wait 
    X86_AT(c, 0x54206u);
    // 054207  esc 0x3c, al
    X86_AT(c, 0x54207u);
    // 054209  wait 
    X86_AT(c, 0x54209u);
    // 05420a  sahf 
    X86_AT(c, 0x5420au);
    c.fl = (c.fl & ~0xD5u) | (g8(c, 4) & 0xD5u);
    // 05420b  je 0x54214
    X86_AT(c, 0x5420bu);
    if (x86_cc(c, 4)) { goto L_54214; }
    X86_TICK(c, 2);
    // 05420d  mov byte ptr [0x4b597], 1
    X86_AT(c, 0x5420du);
    wr8((c.sbase[3] + (uint32_t)(0x4B597u)), 0x1u);
L_54214:
    X86_TICK(c, 28);
    // 054214  push 0x3ff0000
    X86_AT(c, 0x54214u);
    { uint32_t v = 0x3FF0000u; push32(c, v); }
    // 054219  push 0x30000000
    X86_AT(c, 0x54219u);
    { uint32_t v = 0x30000000u; push32(c, v); }
    // 05421e  push 0xa0000000
    X86_AT(c, 0x5421eu);
    { uint32_t v = 0xA0000000u; push32(c, v); }
    // 054223  push 0x64000000
    X86_AT(c, 0x54223u);
    { uint32_t v = 0x64000000u; push32(c, v); }
    // 054228  push 0x16000000
    X86_AT(c, 0x54228u);
    { uint32_t v = 0x16000000u; push32(c, v); }
    // 05422d  push 0x98000000
    X86_AT(c, 0x5422du);
    { uint32_t v = 0x98000000u; push32(c, v); }
    // 054232  push 0x56000000
    X86_AT(c, 0x54232u);
    { uint32_t v = 0x56000000u; push32(c, v); }
    // 054237  push 0xb8000000
    X86_AT(c, 0x54237u);
    { uint32_t v = 0xB8000000u; push32(c, v); }
    // 05423c  cmp byte ptr [0x4b5a2], 1
    X86_AT(c, 0x5423cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B5A2u))), 0x1u, 0, 1);
    // 054243  je 0x5429c
    X86_AT(c, 0x54243u);
    if (x86_cc(c, 4)) { goto L_5429c; }
    X86_TICK(c, 11);
    // 054245  mov eax, fs
    X86_AT(c, 0x54245u);
    c.r[0] = (uint32_t)c.sreg[4];
    // 054247  mov ebx, ds
    X86_AT(c, 0x54247u);
    c.r[3] = (uint32_t)c.sreg[3];
    // 054249  cmp ax, bx
    X86_AT(c, 0x54249u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 05424c  je 0x542ed
    X86_AT(c, 0x5424cu);
    if (x86_cc(c, 4)) { goto L_542ed; }
    X86_TICK(c, 18);
    // 054252  mov word ptr [0x4b599], 1
    X86_AT(c, 0x54252u);
    wr16((c.sbase[3] + (uint32_t)(0x4B599u)), 0x1u);
    // 05425b  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x5425bu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 054261  mov eax, dword ptr fs:[0xc400]
    X86_AT(c, 0x54261u);
    c.r[0] = rd32((c.sbase[4] + ((0xC400u) & 0xFFFFu)));
    // 054266  and ah, 0x80
    X86_AT(c, 0x54266u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x80u, 1)); }
    // 054269  jne 0x54275
    X86_AT(c, 0x54269u);
    if (x86_cc(c, 5)) { goto L_54275; }
    X86_TICK(c, 20);
    // 05426b  pop eax
    X86_AT(c, 0x5426bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 05426c  pop eax
    X86_AT(c, 0x5426cu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 05426d  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x5426du);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 054273  jmp 0x54282
    X86_AT(c, 0x54273u);
    goto L_54282;
L_54275:
    X86_TICK(c, 14);
    // 054275  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x54275u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 05427b  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x5427bu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 054281  pop eax
    X86_AT(c, 0x54281u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_54282:
    X86_TICK(c, 27);
    // 054282  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x54282u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 054288  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x54288u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 05428e  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x5428eu);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 054294  pop dword ptr fs:[0xc000]
    X86_AT(c, 0x54294u);
    { uint32_t v = pop32(c); wr32((c.sbase[4] + ((0xC000u) & 0xFFFFu)), v); }
    // 05429a  jmp 0x542f0
    X86_AT(c, 0x5429au);
    goto L_542f0;
L_5429c:
    X86_TICK(c, 12);
    // 05429c  cmp byte ptr [0x4b599], 1
    X86_AT(c, 0x5429cu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B599u))), 0x1u, 0, 1);
    // 0542a3  jne 0x542ed
    X86_AT(c, 0x542a3u);
    if (x86_cc(c, 5)) { goto L_542ed; }
    X86_TICK(c, 17);
    // 0542a5  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x542a5u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0542ab  pop dword ptr [0xffc0c400]
    X86_AT(c, 0x542abu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C400u)), v); }
    // 0542b1  and ah, 0x80
    X86_AT(c, 0x542b1u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v & 0x80u, 1)); }
    // 0542b4  jne 0x542c0
    X86_AT(c, 0x542b4u);
    if (x86_cc(c, 5)) { goto L_542c0; }
    X86_TICK(c, 20);
    // 0542b6  pop eax
    X86_AT(c, 0x542b6u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0542b7  pop eax
    X86_AT(c, 0x542b7u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0542b8  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x542b8u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0542be  jmp 0x542cd
    X86_AT(c, 0x542beu);
    goto L_542cd;
L_542c0:
    X86_TICK(c, 14);
    // 0542c0  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x542c0u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0542c6  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x542c6u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0542cc  pop eax
    X86_AT(c, 0x542ccu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_542cd:
    X86_TICK(c, 32);
    // 0542cd  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x542cdu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0542d3  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x542d3u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0542d9  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x542d9u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0542df  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x542dfu);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0542e5  pop dword ptr [0xffc0c000]
    X86_AT(c, 0x542e5u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(0xFFC0C000u)), v); }
    // 0542eb  jmp 0x542f0
    X86_AT(c, 0x542ebu);
    goto L_542f0;
L_542ed:
    X86_TICK(c, 2);
    // 0542ed  add esp, 0x20
    X86_AT(c, 0x542edu);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x20u, 0, 4); }
L_542f0:
    X86_TICK(c, 14);
    // 0542f0  cld 
    X86_AT(c, 0x542f0u);
    c.fl &= ~X86_DF;
    // 0542f1  cmp byte ptr [0x4b5a2], 2
    X86_AT(c, 0x542f1u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B5A2u))), 0x2u, 0, 1);
    // 0542f8  je 0x5433a
    X86_AT(c, 0x542f8u);
    if (x86_cc(c, 4)) { goto L_5433a; }
    X86_TICK(c, 42);
    // 0542fa  mov edi, dword ptr [edx + 0x10]
    X86_AT(c, 0x542fau);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[2] + 0x10u)));
    // 0542fd  mov word ptr [0x4b580], ds
    X86_AT(c, 0x542fdu);
    wr16((c.sbase[3] + (uint32_t)(0x4B580u)), (uint32_t)c.sreg[3]);
    // 054303  mov dword ptr [0x4b566], edi
    X86_AT(c, 0x54303u);
    wr32((c.sbase[3] + (uint32_t)(0x4B566u)), c.r[7]);
    // 054309  mov word ptr [0x4b56a], ds
    X86_AT(c, 0x54309u);
    wr16((c.sbase[3] + (uint32_t)(0x4B56Au)), (uint32_t)c.sreg[3]);
    // 05430f  lea eax, [edi + 0x80]
    X86_AT(c, 0x5430fu);
    c.r[0] = (uint32_t)(c.r[7] + 0x80u);
    // 054315  xor ebx, ebx
    X86_AT(c, 0x54315u);
    { uint32_t v = c.r[3]; c.r[3] = x86_logic(c, v ^ c.r[3], 4); }
    // 054317  mov bl, byte ptr [eax]
    X86_AT(c, 0x54317u);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 054319  mov dword ptr [0x4b588], ebx
    X86_AT(c, 0x54319u);
    wr32((c.sbase[3] + (uint32_t)(0x4B588u)), c.r[3]);
    // 05431f  inc eax
    X86_AT(c, 0x5431fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 054320  mov dword ptr [0x4b57c], eax
    X86_AT(c, 0x54320u);
    wr32((c.sbase[3] + (uint32_t)(0x4B57Cu)), c.r[0]);
    // 054325  mov bx, word ptr [edi + 0x2c]
    X86_AT(c, 0x54325u);
    s16(c, 3, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu))));
    // 054329  shl ebx, 4
    X86_AT(c, 0x54329u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[3] = r; }
    // 05432c  mov dword ptr [0x4b58c], ebx
    X86_AT(c, 0x5432cu);
    wr32((c.sbase[3] + (uint32_t)(0x4B58Cu)), c.r[3]);
    // 054332  mov word ptr [0x4b590], ds
    X86_AT(c, 0x54332u);
    wr16((c.sbase[3] + (uint32_t)(0x4B590u)), (uint32_t)c.sreg[3]);
    // 054338  jmp 0x5438c
    X86_AT(c, 0x54338u);
    goto L_5438c;
L_5433a:
    X86_TICK(c, 81);
    // 05433a  mov ax, 0x24
    X86_AT(c, 0x5433au);
    s16(c, 0, 0x24u);
    // 05433e  mov ebx, cs
    X86_AT(c, 0x5433eu);
    c.r[3] = (uint32_t)c.sreg[1];
    // 054340  arpl ax, bx
    X86_AT(c, 0x54340u);
    { uint32_t d = (c.r[0] & 0xFFFFu), s = (c.r[3] & 0xFFFFu); if ((d & 3) < (s & 3)) { s16(c, 0, (d & ~3u) | (s & 3)); c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 054342  mov es, eax
    X86_AT(c, 0x54342u);
    x86_load_seg(c, 0, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 054344  mov word ptr [0x4b56a], ax
    X86_AT(c, 0x54344u);
    wr16((c.sbase[3] + (uint32_t)(0x4B56Au)), (c.r[0] & 0xFFFFu));
    // 05434a  mov word ptr [0x4b56a], ax
    X86_AT(c, 0x5434au);
    wr16((c.sbase[3] + (uint32_t)(0x4B56Au)), (c.r[0] & 0xFFFFu));
    // 054350  mov ax, 0x2c
    X86_AT(c, 0x54350u);
    s16(c, 0, 0x2Cu);
    // 054354  arpl ax, bx
    X86_AT(c, 0x54354u);
    { uint32_t d = (c.r[0] & 0xFFFFu), s = (c.r[3] & 0xFFFFu); if ((d & 3) < (s & 3)) { s16(c, 0, (d & ~3u) | (s & 3)); c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 054356  mov word ptr [0x4b590], ax
    X86_AT(c, 0x54356u);
    wr16((c.sbase[3] + (uint32_t)(0x4B590u)), (c.r[0] & 0xFFFFu));
    // 05435c  xor eax, eax
    X86_AT(c, 0x5435cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 05435e  mov al, byte ptr es:[0x80]
    X86_AT(c, 0x5435eu);
    s8(c, 0, rd8((c.sbase[0] + (uint32_t)(0x80u))));
    // 054364  mov dword ptr [0x4b588], eax
    X86_AT(c, 0x54364u);
    wr32((c.sbase[3] + (uint32_t)(0x4B588u)), c.r[0]);
    // 054369  add eax, 3
    X86_AT(c, 0x54369u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x3u, 0, 4); }
    // 05436e  and al, 0xfc
    X86_AT(c, 0x5436eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0xFCu, 1)); }
    // 054370  sub esp, eax
    X86_AT(c, 0x54370u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 054372  mov edi, esp
    X86_AT(c, 0x54372u);
    c.r[7] = c.r[4];
    // 054374  mov dword ptr [0x4b57c], edi
    X86_AT(c, 0x54374u);
    wr32((c.sbase[3] + (uint32_t)(0x4B57Cu)), c.r[7]);
    // 05437a  push edx
    X86_AT(c, 0x5437au);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 05437b  mov ecx, eax
    X86_AT(c, 0x5437bu);
    c.r[1] = c.r[0];
    // 05437d  push ds
    X86_AT(c, 0x5437du);
    push32(c, c.sreg[3]);
    // 05437e  push es
    X86_AT(c, 0x5437eu);
    push32(c, c.sreg[0]);
    // 05437f  pop ds
    X86_AT(c, 0x5437fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 054380  push es
    X86_AT(c, 0x54380u);
    push32(c, c.sreg[0]);
    // 054381  push ss
    X86_AT(c, 0x54381u);
    push32(c, c.sreg[2]);
    // 054382  pop es
    X86_AT(c, 0x54382u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 054383  mov esi, 0x81
    X86_AT(c, 0x54383u);
    c.r[6] = 0x81u;
    // 054388  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x54388u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 05438a  pop es
    X86_AT(c, 0x5438au);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 05438b  pop ds
    X86_AT(c, 0x5438bu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_5438c:
    X86_TICK(c, 41);
    // 05438c  sub eax, eax
    X86_AT(c, 0x5438cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 05438e  mov ah, 0x30
    X86_AT(c, 0x5438eu);
    s8(c, 4, 0x30u);
    // 054390  int 0x21
    X86_AT(c, 0x54390u);
    x86_int(c, 0x21, 0x54392u);
    X86_TICK(c, 14);
    // 054392  mov word ptr [0x4b5a0], ax
    X86_AT(c, 0x54392u);
    wr16((c.sbase[3] + (uint32_t)(0x4B5A0u)), (c.r[0] & 0xFFFFu));
    // 054398  cmp byte ptr [0x4b5a2], 1
    X86_AT(c, 0x54398u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B5A2u))), 0x1u, 0, 1);
    // 05439f  je 0x543e9
    X86_AT(c, 0x5439fu);
    if (x86_cc(c, 4)) { goto L_543e9; }
    X86_TICK(c, 10);
    // 0543a1  shr eax, 0x10
    X86_AT(c, 0x543a1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0543a4  cmp ax, 0x4458
    X86_AT(c, 0x543a4u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x4458u, 0, 2);
    // 0543a8  jne 0x543ac
    X86_AT(c, 0x543a8u);
    if (x86_cc(c, 5)) { goto L_543ac; }
    X86_TICK(c, 7);
    // 0543aa  jmp 0x543e9
    X86_AT(c, 0x543aau);
    goto L_543e9;
L_543ac:
    X86_TICK(c, 13);
    // 0543ac  mov byte ptr [0x4b5a2], 3
    X86_AT(c, 0x543acu);
    wr8((c.sbase[3] + (uint32_t)(0x4B5A2u)), 0x3u);
    // 0543b3  mov ebx, dword ptr [0x4b56c]
    X86_AT(c, 0x543b3u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(0x4B56Cu)));
    // 0543b9  jmp 0x543e9
    X86_AT(c, 0x543b9u);
    goto L_543e9;
L_543e9:
    X86_TICK(c, 8);
    // 0543e9  les edi, fword ptr [0x4b58c]
    X86_AT(c, 0x543e9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B58Cu)); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 0, s); c.r[7] = o; }
    // 0543ef  xor eax, eax
    X86_AT(c, 0x543efu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
L_543f1:
    X86_TICK(c, 12);
    // 0543f1  cmp dword ptr es:[edi], 0x37384f4e
    X86_AT(c, 0x543f1u);
    (void)x86_sub(c, rd32((c.sbase[0] + (uint32_t)(c.r[7]))), 0x37384F4Eu, 0, 4);
    // 0543f8  jne 0x54444
    X86_AT(c, 0x543f8u);
    if (x86_cc(c, 5)) { goto L_54444; }
    X86_TICK(c, 12);
    // 0543fa  cmp byte ptr es:[edi + 4], 0x3d
    X86_AT(c, 0x543fau);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7] + 0x4u))), 0x3Du, 0, 1);
    // 0543ff  jne 0x54444
    X86_AT(c, 0x543ffu);
    if (x86_cc(c, 5)) { goto L_54444; }
    X86_TICK(c, 16);
    // 054401  push eax
    X86_AT(c, 0x54401u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 054402  push edi
    X86_AT(c, 0x54402u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 054403  cmp word ptr [0x4b593], 0
    X86_AT(c, 0x54403u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4B593u))), 0x0u, 0, 2);
    // 05440b  je 0x54442
    X86_AT(c, 0x5440bu);
    if (x86_cc(c, 4)) { goto L_54442; }
    X86_TICK(c, 29);
    // 05440d  mov word ptr [0x4b593], 0
    X86_AT(c, 0x5440du);
    wr16((c.sbase[3] + (uint32_t)(0x4B593u)), 0x0u);
    // 054416  add edi, 5
    X86_AT(c, 0x54416u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x5u, 0, 4); }
    // 054419  mov esi, edi
    X86_AT(c, 0x54419u);
    c.r[6] = c.r[7];
    // 05441b  mov al, 0x20
    X86_AT(c, 0x5441bu);
    s8(c, 0, 0x20u);
    // 05441d  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x5441du);
    x86_string(c, 4, 1, 243, 4, 3);
    // 05441f  dec edi
    X86_AT(c, 0x5441fu);
    { uint32_t v = c.r[7]; c.r[7] = x86_dec(c, v, 4); }
    // 054420  cmp byte ptr es:[edi], 0
    X86_AT(c, 0x54420u);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 054424  je 0x54442
    X86_AT(c, 0x54424u);
    if (x86_cc(c, 4)) { goto L_54442; }
    X86_TICK(c, 2);
    // 054426  mov edi, esi
    X86_AT(c, 0x54426u);
    c.r[7] = c.r[6];
L_54428:
    X86_TICK(c, 11);
    // 054428  mov dl, byte ptr es:[edi]
    X86_AT(c, 0x54428u);
    s8(c, 2, rd8((c.sbase[0] + (uint32_t)(c.r[7]))));
    // 05442b  and dl, dl
    X86_AT(c, 0x5442bu);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_logic(c, v & g8(c, 2), 1)); }
    // 05442d  je 0x54436
    X86_AT(c, 0x5442du);
    if (x86_cc(c, 4)) { goto L_54436; }
    X86_TICK(c, 39);
    // 05442f  mov ah, 6
    X86_AT(c, 0x5442fu);
    s8(c, 4, 0x6u);
    // 054431  int 0x21
    X86_AT(c, 0x54431u);
    x86_int(c, 0x21, 0x54433u);
    X86_TICK(c, 9);
    // 054433  inc edi
    X86_AT(c, 0x54433u);
    { uint32_t v = c.r[7]; c.r[7] = x86_inc(c, v, 4); }
    // 054434  jmp 0x54428
    X86_AT(c, 0x54434u);
    X86_POLL(c, 0x54428u); goto L_54428;
L_54436:
    X86_TICK(c, 41);
    // 054436  mov dl, 0xd
    X86_AT(c, 0x54436u);
    s8(c, 2, 0xDu);
    // 054438  mov ah, 6
    X86_AT(c, 0x54438u);
    s8(c, 4, 0x6u);
    // 05443a  int 0x21
    X86_AT(c, 0x5443au);
    x86_int(c, 0x21, 0x5443cu);
    X86_TICK(c, 41);
    // 05443c  mov dl, 0xa
    X86_AT(c, 0x5443cu);
    s8(c, 2, 0xAu);
    // 05443e  mov ah, 6
    X86_AT(c, 0x5443eu);
    s8(c, 4, 0x6u);
    // 054440  int 0x21
    X86_AT(c, 0x54440u);
    x86_int(c, 0x21, 0x54442u);
L_54442:
    X86_TICK(c, 8);
    // 054442  pop edi
    X86_AT(c, 0x54442u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 054443  pop eax
    X86_AT(c, 0x54443u);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_54444:
    X86_TICK(c, 21);
    // 054444  mov ecx, 0xffffffff
    X86_AT(c, 0x54444u);
    c.r[1] = 0xFFFFFFFFu;
    // 054449  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x54449u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 05444b  cmp byte ptr es:[edi], 0
    X86_AT(c, 0x5444bu);
    (void)x86_sub(c, rd8((c.sbase[0] + (uint32_t)(c.r[7]))), 0x0u, 0, 1);
    // 05444f  jne 0x543f1
    X86_AT(c, 0x5444fu);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x543f1u); goto L_543f1; }
    X86_TICK(c, 14);
    // 054451  add edi, 3
    X86_AT(c, 0x54451u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x3u, 0, 4); }
    // 054454  cmp byte ptr [0x4b5a0], 3
    X86_AT(c, 0x54454u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B5A0u))), 0x3u, 0, 1);
    // 05445b  jb 0x5447d
    X86_AT(c, 0x5445bu);
    if (x86_cc(c, 2)) { goto L_5447d; }
    X86_TICK(c, 12);
    // 05445d  cmp byte ptr [0x4b5a2], 1
    X86_AT(c, 0x5445du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B5A2u))), 0x1u, 0, 1);
    // 054464  jne 0x5448a
    X86_AT(c, 0x54464u);
    if (x86_cc(c, 5)) { goto L_5448a; }
    X86_TICK(c, 12);
    // 054466  cmp byte ptr [0x4b5a2], 3
    X86_AT(c, 0x54466u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B5A2u))), 0x3u, 0, 1);
    // 05446d  je 0x5448a
    X86_AT(c, 0x5446du);
    if (x86_cc(c, 4)) { goto L_5448a; }
    X86_TICK(c, 11);
    // 05446f  mov dword ptr [0x4b59c], edi
    X86_AT(c, 0x5446fu);
    wr32((c.sbase[3] + (uint32_t)(0x4B59Cu)), c.r[7]);
    // 054475  mov word ptr [0x4b5a0], ds
    X86_AT(c, 0x54475u);
    wr16((c.sbase[3] + (uint32_t)(0x4B5A0u)), (uint32_t)c.sreg[3]);
    // 05447b  jmp 0x544bc
    X86_AT(c, 0x5447bu);
    goto L_544bc;
L_5447d:
    X86_TICK(c, 13);
    // 05447d  xor edx, edx
    X86_AT(c, 0x5447du);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v ^ c.r[2], 4); }
    // 05447f  push edx
    X86_AT(c, 0x5447fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 054480  mov dword ptr [0x4b59c], esp
    X86_AT(c, 0x54480u);
    wr32((c.sbase[3] + (uint32_t)(0x4B59Cu)), c.r[4]);
    // 054486  jmp 0x544bc
    X86_AT(c, 0x54486u);
    goto L_544bc;
L_5448a:
    X86_TICK(c, 62);
    // 05448a  mov eax, es
    X86_AT(c, 0x5448au);
    c.r[0] = (uint32_t)c.sreg[0];
    // 05448c  lsl eax, eax
    X86_AT(c, 0x5448cu);
    { uint32_t v; if (x86_lsl(c, (c.r[0] & 0xFFFFu), v)) { c.r[0] = v; c.fl |= X86_ZF; } else c.fl &= ~X86_ZF; }
    // 05448f  xor eax, eax
    X86_AT(c, 0x5448fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v ^ c.r[0], 4); }
    // 054491  sub ecx, ecx
    X86_AT(c, 0x54491u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, c.r[1], 0, 4); }
    // 054493  dec ecx
    X86_AT(c, 0x54493u);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 054494  mov ebx, edi
    X86_AT(c, 0x54494u);
    c.r[3] = c.r[7];
    // 054496  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x54496u);
    x86_string(c, 4, 1, 242, 4, 3);
    // 054498  sub edi, ebx
    X86_AT(c, 0x54498u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[3], 0, 4); }
    // 05449a  lea eax, [edi + 3]
    X86_AT(c, 0x5449au);
    c.r[0] = (uint32_t)(c.r[7] + 0x3u);
    // 05449d  and eax, 0xfffc
    X86_AT(c, 0x5449du);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFCu, 4); }
    // 0544a2  sub esp, eax
    X86_AT(c, 0x544a2u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0544a4  mov dword ptr [0x4b59c], esp
    X86_AT(c, 0x544a4u);
    wr32((c.sbase[3] + (uint32_t)(0x4B59Cu)), c.r[4]);
    // 0544aa  mov ecx, edi
    X86_AT(c, 0x544aau);
    c.r[1] = c.r[7];
    // 0544ac  mov esi, ebx
    X86_AT(c, 0x544acu);
    c.r[6] = c.r[3];
    // 0544ae  mov edi, esp
    X86_AT(c, 0x544aeu);
    c.r[7] = c.r[4];
    // 0544b0  push ds
    X86_AT(c, 0x544b0u);
    push32(c, c.sreg[3]);
    // 0544b1  mov ds, word ptr [0x4b590]
    X86_AT(c, 0x544b1u);
    x86_load_seg(c, 3, rd16((c.sbase[3] + (uint32_t)(0x4B590u))) & 0xFFFFu);
    // 0544b7  push ss
    X86_AT(c, 0x544b7u);
    push32(c, c.sreg[2]);
    // 0544b8  pop es
    X86_AT(c, 0x544b8u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0544b9  movsb byte ptr es:[edi], byte ptr [esi]
    X86_AT(c, 0x544b9u);
    x86_string(c, 0, 1, 243, 4, 3);
    // 0544bb  pop ds
    X86_AT(c, 0x544bbu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_544bc:
    X86_TICK(c, 33);
    // 0544bc  mov eax, dword ptr [0x4b588]
    X86_AT(c, 0x544bcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B588u)));
    // 0544c1  inc eax
    X86_AT(c, 0x544c1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0544c2  shr eax, 1
    X86_AT(c, 0x544c2u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 4, w); if (w) c.r[0] = r; }
    // 0544c4  inc eax
    X86_AT(c, 0x544c4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0544c5  inc eax
    X86_AT(c, 0x544c5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0544c6  shl eax, 2
    X86_AT(c, 0x544c6u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x2u, 4, w); if (w) c.r[0] = r; }
    // 0544c9  sub esp, eax
    X86_AT(c, 0x544c9u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0544cb  mov dword ptr [0x4b582], esp
    X86_AT(c, 0x544cbu);
    wr32((c.sbase[3] + (uint32_t)(0x4B582u)), c.r[4]);
    // 0544d1  push ds
    X86_AT(c, 0x544d1u);
    push32(c, c.sreg[3]);
    // 0544d2  pop es
    X86_AT(c, 0x544d2u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0544d3  call 0x554fc
    X86_AT(c, 0x544d3u);
    push32(c, 0x544d8u); x86_call_known(c, 0x554fcu, f_000554fc); X86_RET(c, 0x544d8u);
    X86_TICK(c, 7);
    // 0544d8  call 0x55364
    X86_AT(c, 0x544d8u);
    push32(c, 0x544ddu); x86_call_known(c, 0x55364u, f_00055364); X86_RET(c, 0x544ddu);
    X86_TICK(c, 14);
    // 0544dd  push dword ptr [0x4b582]
    X86_AT(c, 0x544ddu);
    { uint32_t v = rd32((c.sbase[3] + (uint32_t)(0x4B582u))); push32(c, v); }
    // 0544e3  sub eax, eax
    X86_AT(c, 0x544e3u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 0544e5  call 0x55400
    X86_AT(c, 0x544e5u);
    push32(c, 0x544eau); x86_call_known(c, 0x55400u, f_00055400); X86_RET(c, 0x544eau);
    X86_TICK(c, 14);
    // 0544ea  push eax
    X86_AT(c, 0x544eau);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0544eb  cmp byte ptr [0x4b599], 1
    X86_AT(c, 0x544ebu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B599u))), 0x1u, 0, 1);
    // 0544f2  je 0x54514
    X86_AT(c, 0x544f2u);
    if (x86_cc(c, 4)) { goto L_54514; }
    X86_TICK(c, 12);
    // 0544f4  cmp word ptr [0x4b5a7], 0xabcd
    X86_AT(c, 0x544f4u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4B5A7u))), 0xABCDu, 0, 2);
    // 0544fd  jne 0x54514
    X86_AT(c, 0x544fdu);
    if (x86_cc(c, 5)) { goto L_54514; }
    X86_TICK(c, 15);
    // 0544ff  mov eax, dword ptr [0x4b5ad]
    X86_AT(c, 0x544ffu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B5ADu)));
    // 054504  cmp eax, dword ptr [0x4b5a9]
    X86_AT(c, 0x54504u);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x4B5A9u))), 0, 4);
    // 05450a  jne 0x54514
    X86_AT(c, 0x5450au);
    if (x86_cc(c, 5)) { goto L_54514; }
    X86_TICK(c, 11);
    // 05450c  mov edx, dword ptr [0x4b5ad]
    X86_AT(c, 0x5450cu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B5ADu)));
    // 054512  jmp 0x5453b
    X86_AT(c, 0x54512u);
    goto L_5453b;
L_54514:
    X86_TICK(c, 12);
    // 054514  cmp byte ptr [0x4b593], 1
    X86_AT(c, 0x54514u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B593u))), 0x1u, 0, 1);
    // 05451b  je 0x54544
    X86_AT(c, 0x5451bu);
    if (x86_cc(c, 4)) { goto L_54544; }
    X86_TICK(c, 12);
    // 05451d  cmp word ptr [0x4b5b1], 0xabcd
    X86_AT(c, 0x5451du);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4B5B1u))), 0xABCDu, 0, 2);
    // 054526  jne 0x54544
    X86_AT(c, 0x54526u);
    if (x86_cc(c, 5)) { goto L_54544; }
    X86_TICK(c, 15);
    // 054528  mov eax, dword ptr [0x4b5b7]
    X86_AT(c, 0x54528u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B5B7u)));
    // 05452d  cmp eax, dword ptr [0x4b5b3]
    X86_AT(c, 0x5452du);
    (void)x86_sub(c, c.r[0], rd32((c.sbase[3] + (uint32_t)(0x4B5B3u))), 0, 4);
    // 054533  jne 0x54544
    X86_AT(c, 0x54533u);
    if (x86_cc(c, 5)) { goto L_54544; }
    X86_TICK(c, 4);
    // 054535  mov edx, dword ptr [0x4b5b7]
    X86_AT(c, 0x54535u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B5B7u)));
L_5453b:
    X86_TICK(c, 39);
    // 05453b  mov ah, 9
    X86_AT(c, 0x5453bu);
    s8(c, 4, 0x9u);
    // 05453d  int 0x21
    X86_AT(c, 0x5453du);
    x86_int(c, 0x21, 0x5453fu);
    X86_TICK(c, 7);
    // 05453f  jmp 0x5409b
    X86_AT(c, 0x5453fu);
    X86_POLL(c, 0x5409bu); goto L_5409b;
L_54544:
    X86_TICK(c, 12);
    // 054544  cmp byte ptr [0x4b597], 1
    X86_AT(c, 0x54544u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B597u))), 0x1u, 0, 1);
    // 05454b  je 0x54578
    X86_AT(c, 0x5454bu);
    if (x86_cc(c, 4)) { goto L_54578; }
    X86_TICK(c, 12);
    // 05454d  cmp word ptr [0x4b5bb], 0xabcd
    X86_AT(c, 0x5454du);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(0x4B5BBu))), 0xABCDu, 0, 2);
    // 054556  jne 0x54578
    X86_AT(c, 0x54556u);
    if (x86_cc(c, 5)) { goto L_54578; }
    X86_TICK(c, 43);
    // 054558  mov edx, dword ptr cs:[0x54574]
    X86_AT(c, 0x54558u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(0x54574u)));
    // 05455f  mov ah, 9
    X86_AT(c, 0x5455fu);
    s8(c, 4, 0x9u);
    // 054561  int 0x21
    X86_AT(c, 0x54561u);
    x86_int(c, 0x21, 0x54563u);
    X86_TICK(c, 13);
    // 054563  mov edx, dword ptr [0x4b5b7]
    X86_AT(c, 0x54563u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B5B7u)));
    // 054569  add edx, 0xa
    X86_AT(c, 0x54569u);
    { uint32_t v = c.r[2]; c.r[2] = x86_add(c, v, 0xAu, 0, 4); }
    // 05456c  jmp 0x5453b
    X86_AT(c, 0x5456cu);
    X86_POLL(c, 0x5453bu); goto L_5453b;
L_54578:
    X86_TICK(c, 7);
    // 054578  jmp 0x54096
    X86_AT(c, 0x54578u);
    X86_POLL(c, 0x54096u); goto L_54096;
    x86_fault(c, 0x54094u, "ran off the end of a function");
}
void f_000540a5(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0540a5  ret 
    X86_AT(c, 0x540a5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x540a5u, "ran off the end of a function");
}
void f_0005457e(X86Cpu& c) {
    X86_TICK(c, 16);
    // 05457e  mov eax, dword ptr [0x4b56c]
    X86_AT(c, 0x5457eu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B56Cu)));
    // 054583  add eax, 0x10
    X86_AT(c, 0x54583u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, 0x10u, 0, 4); }
    // 054588  ret 
    X86_AT(c, 0x54588u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5457eu, "ran off the end of a function");
}
void f_0005458a(X86Cpu& c) {
    X86_TICK(c, 14);
    // 05458a  mov eax, dword ptr [0x4b574]
    X86_AT(c, 0x5458au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B574u)));
    // 05458f  ret 
    X86_AT(c, 0x5458fu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5458au, "ran off the end of a function");
}
void f_00054590(X86Cpu& c) {
    X86_TICK(c, 14);
    // 054590  push ebx
    X86_AT(c, 0x54590u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 054591  cmp byte ptr [0x4b5a2], 2
    X86_AT(c, 0x54591u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(0x4B5A2u))), 0x2u, 0, 1);
    // 054598  je 0x545d5
    X86_AT(c, 0x54598u);
    if (x86_cc(c, 4)) { goto L_545d5; }
    X86_TICK(c, 7);
    // 05459a  jmp 0x545d5
    X86_AT(c, 0x5459au);
    goto L_545d5;
L_545d5:
    X86_TICK(c, 14);
    // 0545d5  pop ebx
    X86_AT(c, 0x545d5u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0545d6  ret 4
    X86_AT(c, 0x545d6u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x54590u, "ran off the end of a function");
}
void f_000545d9(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0545d9  ret 8
    X86_AT(c, 0x545d9u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x545d9u, "ran off the end of a function");
}
void f_000545ef(X86Cpu& c) {
    X86_TICK(c, 61);
    // 0545ef  push ebp
    X86_AT(c, 0x545efu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0545f0  mov ebp, esp
    X86_AT(c, 0x545f0u);
    c.r[5] = c.r[4];
    // 0545f2  push esi
    X86_AT(c, 0x545f2u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0545f3  push edi
    X86_AT(c, 0x545f3u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0545f4  push ebx
    X86_AT(c, 0x545f4u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0545f5  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0x545f5u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 0545f9  mov cx, 0
    X86_AT(c, 0x545f9u);
    s16(c, 1, 0x0u);
    // 0545fd  mov dx, 0
    X86_AT(c, 0x545fdu);
    s16(c, 2, 0x0u);
    // 054601  mov al, 1
    X86_AT(c, 0x54601u);
    s8(c, 0, 0x1u);
    // 054603  mov ah, 0x42
    X86_AT(c, 0x54603u);
    s8(c, 4, 0x42u);
    // 054605  clc 
    X86_AT(c, 0x54605u);
    c.fl &= ~X86_CF;
    // 054606  int 0x21
    X86_AT(c, 0x54606u);
    x86_int(c, 0x21, 0x54608u);
    X86_TICK(c, 5);
    // 054608  jb 0x54657
    X86_AT(c, 0x54608u);
    if (x86_cc(c, 2)) { goto L_54657; }
    X86_TICK(c, 57);
    // 05460a  mov ecx, 0x5466d
    X86_AT(c, 0x5460au);
    c.r[1] = 0x5466Du;
    // 05460f  mov word ptr [ecx + 2], dx
    X86_AT(c, 0x5460fu);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 054613  mov word ptr [ecx], ax
    X86_AT(c, 0x54613u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[0] & 0xFFFFu));
    // 054616  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0x54616u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 05461a  mov cx, 0
    X86_AT(c, 0x5461au);
    s16(c, 1, 0x0u);
    // 05461e  mov dx, 0
    X86_AT(c, 0x5461eu);
    s16(c, 2, 0x0u);
    // 054622  mov al, 2
    X86_AT(c, 0x54622u);
    s8(c, 0, 0x2u);
    // 054624  mov ah, 0x42
    X86_AT(c, 0x54624u);
    s8(c, 4, 0x42u);
    // 054626  clc 
    X86_AT(c, 0x54626u);
    c.fl &= ~X86_CF;
    // 054627  int 0x21
    X86_AT(c, 0x54627u);
    x86_int(c, 0x21, 0x54629u);
    X86_TICK(c, 5);
    // 054629  jb 0x54657
    X86_AT(c, 0x54629u);
    if (x86_cc(c, 2)) { goto L_54657; }
    X86_TICK(c, 63);
    // 05462b  mov ecx, 0x54671
    X86_AT(c, 0x5462bu);
    c.r[1] = 0x54671u;
    // 054630  mov word ptr [ecx + 2], dx
    X86_AT(c, 0x54630u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1] + 0x2u)), (c.r[2] & 0xFFFFu));
    // 054634  mov word ptr [ecx], ax
    X86_AT(c, 0x54634u);
    wr16((c.sbase[3] + (uint32_t)(c.r[1])), (c.r[0] & 0xFFFFu));
    // 054637  mov bx, word ptr [ebp + 8]
    X86_AT(c, 0x54637u);
    s16(c, 3, rd16((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))));
    // 05463b  mov eax, 0x5466d
    X86_AT(c, 0x5463bu);
    c.r[0] = 0x5466Du;
    // 054640  mov cx, word ptr [eax + 2]
    X86_AT(c, 0x54640u);
    s16(c, 1, rd16((c.sbase[3] + (uint32_t)(c.r[0] + 0x2u))));
    // 054644  mov dx, word ptr [eax]
    X86_AT(c, 0x54644u);
    s16(c, 2, rd16((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 054647  mov al, 0
    X86_AT(c, 0x54647u);
    s8(c, 0, 0x0u);
    // 054649  mov ah, 0x42
    X86_AT(c, 0x54649u);
    s8(c, 4, 0x42u);
    // 05464b  clc 
    X86_AT(c, 0x5464bu);
    c.fl &= ~X86_CF;
    // 05464c  int 0x21
    X86_AT(c, 0x5464cu);
    x86_int(c, 0x21, 0x5464eu);
    X86_TICK(c, 5);
    // 05464e  jb 0x54657
    X86_AT(c, 0x5464eu);
    if (x86_cc(c, 2)) { goto L_54657; }
    X86_TICK(c, 11);
    // 054650  mov eax, dword ptr [0x54671]
    X86_AT(c, 0x54650u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x54671u)));
    // 054655  jmp 0x54666
    X86_AT(c, 0x54655u);
    goto L_54666;
L_54657:
    X86_TICK(c, 6);
    // 054657  and eax, 0xffff
    X86_AT(c, 0x54657u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0xFFFFu, 4); }
    // 05465c  mov dword ptr [0x4b81e], eax
    X86_AT(c, 0x5465cu);
    wr32((c.sbase[3] + (uint32_t)(0x4B81Eu)), c.r[0]);
    // 054661  mov eax, 0xffffffff
    X86_AT(c, 0x54661u);
    c.r[0] = 0xFFFFFFFFu;
L_54666:
    X86_TICK(c, 28);
    // 054666  pop ebx
    X86_AT(c, 0x54666u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 054667  pop edi
    X86_AT(c, 0x54667u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 054668  pop esi
    X86_AT(c, 0x54668u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 054669  mov esp, ebp
    X86_AT(c, 0x54669u);
    c.r[4] = c.r[5];
    // 05466b  pop ebp
    X86_AT(c, 0x5466bu);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 05466c  ret 
    X86_AT(c, 0x5466cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x545efu, "ran off the end of a function");
}
void f_0005471a(X86Cpu& c) {
    X86_TICK(c, 75);
    // 05471a  push ebp
    X86_AT(c, 0x5471au);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 05471b  mov ebp, esp
    X86_AT(c, 0x5471bu);
    c.r[5] = c.r[4];
    // 05471d  push esi
    X86_AT(c, 0x5471du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 05471e  push edi
    X86_AT(c, 0x5471eu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 05471f  push ebx
    X86_AT(c, 0x5471fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 054720  mov esi, dword ptr [ebp + 8]
    X86_AT(c, 0x54720u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 054723  mov eax, dword ptr [esi]
    X86_AT(c, 0x54723u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 054725  mov ebx, dword ptr [esi + 4]
    X86_AT(c, 0x54725u);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)));
    // 054728  mov ecx, dword ptr [esi + 8]
    X86_AT(c, 0x54728u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 05472b  mov edx, dword ptr [esi + 0xc]
    X86_AT(c, 0x5472bu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)));
    // 05472e  mov edi, dword ptr [esi + 0x14]
    X86_AT(c, 0x5472eu);
    c.r[7] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x14u)));
    // 054731  mov esi, dword ptr [esi + 0x10]
    X86_AT(c, 0x54731u);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)));
    // 054734  int 0x21
    X86_AT(c, 0x54734u);
    x86_int(c, 0x21, 0x54736u);
    X86_TICK(c, 67);
    // 054736  push edi
    X86_AT(c, 0x54736u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 054737  mov edi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x54737u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 05473a  mov dword ptr [edi], eax
    X86_AT(c, 0x5473au);
    wr32((c.sbase[3] + (uint32_t)(c.r[7])), c.r[0]);
    // 05473c  mov dword ptr [edi + 4], ebx
    X86_AT(c, 0x5473cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x4u)), c.r[3]);
    // 05473f  mov dword ptr [edi + 8], ecx
    X86_AT(c, 0x5473fu);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), c.r[1]);
    // 054742  mov dword ptr [edi + 0xc], edx
    X86_AT(c, 0x54742u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0xCu)), c.r[2]);
    // 054745  mov dword ptr [edi + 0x10], esi
    X86_AT(c, 0x54745u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x10u)), c.r[6]);
    // 054748  pushfd 
    X86_AT(c, 0x54748u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 054749  pop dword ptr [edi + 0x18]
    X86_AT(c, 0x54749u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)), v); }
    // 05474c  and dword ptr [edi + 0x18], 1
    X86_AT(c, 0x5474cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1u, 4)); }
    // 054750  pop dword ptr [edi + 0x14]
    X86_AT(c, 0x54750u);
    { uint32_t v = pop32(c); wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x14u)), v); }
    // 054753  pop ebx
    X86_AT(c, 0x54753u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 054754  pop edi
    X86_AT(c, 0x54754u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 054755  pop esi
    X86_AT(c, 0x54755u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 054756  mov esp, ebp
    X86_AT(c, 0x54756u);
    c.r[4] = c.r[5];
    // 054758  pop ebp
    X86_AT(c, 0x54758u);
    { uint32_t v = pop32(c); c.r[5] = v; }
    // 054759  ret 
    X86_AT(c, 0x54759u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5471au, "ran off the end of a function");
}
void f_000547e0(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0547e0  push ebp
    X86_AT(c, 0x547e0u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0547e1  mov ebp, esp
    X86_AT(c, 0x547e1u);
    c.r[5] = c.r[4];
    // 0547e3  push ebx
    X86_AT(c, 0x547e3u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0547e4  push esi
    X86_AT(c, 0x547e4u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0547e5  push edi
    X86_AT(c, 0x547e5u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0547e6  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x547e6u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0547e9  mov esi, edi
    X86_AT(c, 0x547e9u);
    c.r[6] = c.r[7];
    // 0547eb  and byte ptr [esi + 0xc], 0x7f
    X86_AT(c, 0x547ebu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0x7Fu, 1)); }
    // 0547ef  mov eax, 0x4b5c0
    X86_AT(c, 0x547efu);
    c.r[0] = 0x4B5C0u;
    // 0547f4  cmp eax, edi
    X86_AT(c, 0x547f4u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 0547f6  jne 0x54810
    X86_AT(c, 0x547f6u);
    if (x86_cc(c, 5)) { goto L_54810; }
    X86_TICK(c, 13);
    // 0547f8  mov al, byte ptr [esi + 0xe]
    X86_AT(c, 0x547f8u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu))));
    // 0547fb  push eax
    X86_AT(c, 0x547fbu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0547fc  call 0x55d70
    X86_AT(c, 0x547fcu);
    push32(c, 0x54801u); x86_call_known(c, 0x55d70u, f_00055d70); X86_RET(c, 0x54801u);
    X86_TICK(c, 10);
    // 054801  xchg ebx, eax
    X86_AT(c, 0x54801u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 054802  cmp bl, 1
    X86_AT(c, 0x54802u);
    (void)x86_sub(c, g8(c, 3), 0x1u, 0, 1);
    // 054805  je 0x54810
    X86_AT(c, 0x54805u);
    if (x86_cc(c, 4)) { goto L_54810; }
    X86_TICK(c, 7);
    // 054807  cmp bl, 2
    X86_AT(c, 0x54807u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 05480a  je 0x54810
    X86_AT(c, 0x5480au);
    if (x86_cc(c, 4)) { goto L_54810; }
    X86_TICK(c, 7);
    // 05480c  or byte ptr [esi + 0xc], 1
    X86_AT(c, 0x5480cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_54810:
    X86_TICK(c, 9);
    // 054810  mov eax, 0x4b5d4
    X86_AT(c, 0x54810u);
    c.r[0] = 0x4B5D4u;
    // 054815  cmp eax, edi
    X86_AT(c, 0x54815u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 054817  jne 0x54830
    X86_AT(c, 0x54817u);
    if (x86_cc(c, 5)) { goto L_54830; }
    X86_TICK(c, 13);
    // 054819  mov al, byte ptr [esi + 0xe]
    X86_AT(c, 0x54819u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xEu))));
    // 05481c  push eax
    X86_AT(c, 0x5481cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 05481d  call 0x55d70
    X86_AT(c, 0x5481du);
    push32(c, 0x54822u); x86_call_known(c, 0x55d70u, f_00055d70); X86_RET(c, 0x54822u);
    X86_TICK(c, 7);
    // 054822  cmp al, 2
    X86_AT(c, 0x54822u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 054824  jne 0x5482c
    X86_AT(c, 0x54824u);
    if (x86_cc(c, 5)) { goto L_5482c; }
    X86_TICK(c, 14);
    // 054826  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0x54826u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
    // 05482a  jmp 0x54830
    X86_AT(c, 0x5482au);
    goto L_54830;
L_5482c:
    X86_TICK(c, 7);
    // 05482c  or byte ptr [esi + 0xc], 1
    X86_AT(c, 0x5482cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
L_54830:
    X86_TICK(c, 9);
    // 054830  mov eax, 0x4b5e8
    X86_AT(c, 0x54830u);
    c.r[0] = 0x4B5E8u;
    // 054835  cmp eax, edi
    X86_AT(c, 0x54835u);
    (void)x86_sub(c, c.r[0], c.r[7], 0, 4);
    // 054837  jne 0x5483d
    X86_AT(c, 0x54837u);
    if (x86_cc(c, 5)) { goto L_5483d; }
    X86_TICK(c, 7);
    // 054839  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0x54839u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
L_5483d:
    X86_TICK(c, 12);
    // 05483d  test byte ptr [esi + 0xc], 1
    X86_AT(c, 0x5483du);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(c.r[6] + 0xCu))) & 0x1u, 1);
    // 054841  je 0x54865
    X86_AT(c, 0x54841u);
    if (x86_cc(c, 4)) { goto L_54865; }
    X86_TICK(c, 9);
    // 054843  push 0x201
    X86_AT(c, 0x54843u);
    { uint32_t v = 0x201u; push32(c, v); }
    // 054848  call 0x53eb0
    X86_AT(c, 0x54848u);
    push32(c, 0x5484du); x86_call_known(c, 0x53eb0u, f_00053eb0); X86_RET(c, 0x5484du);
    X86_TICK(c, 13);
    // 05484d  mov dword ptr [esi + 8], eax
    X86_AT(c, 0x5484du);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)), c.r[0]);
    // 054850  pop ecx
    X86_AT(c, 0x54850u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 054851  and eax, eax
    X86_AT(c, 0x54851u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[0], 4); }
    // 054853  jne 0x54859
    X86_AT(c, 0x54853u);
    if (x86_cc(c, 5)) { goto L_54859; }
    X86_TICK(c, 7);
    // 054855  and byte ptr [esi + 0xc], 0xfe
    X86_AT(c, 0x54855u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[6] + 0xCu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v & 0xFEu, 1)); }
L_54859:
    X86_TICK(c, 8);
    // 054859  mov eax, dword ptr [esi + 8]
    X86_AT(c, 0x54859u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0x8u)));
    // 05485c  mov dword ptr [esi], eax
    X86_AT(c, 0x5485cu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6])), c.r[0]);
    // 05485e  mov dword ptr [esi + 4], 0xffffffff
    X86_AT(c, 0x5485eu);
    wr32((c.sbase[3] + (uint32_t)(c.r[6] + 0x4u)), 0xFFFFFFFFu);
L_54865:
    X86_TICK(c, 30);
    // 054865  mov word ptr [esi + 0x10], 0xffff
    X86_AT(c, 0x54865u);
    wr16((c.sbase[3] + (uint32_t)(c.r[6] + 0x10u)), 0xFFFFu);
    // 05486b  pop edi
    X86_AT(c, 0x5486bu);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05486c  pop esi
    X86_AT(c, 0x5486cu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 05486d  pop ebx
    X86_AT(c, 0x5486du);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 05486e  leave 
    X86_AT(c, 0x5486eu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05486f  ret 4
    X86_AT(c, 0x5486fu);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x547e0u, "ran off the end of a function");
}
void f_0005488c(X86Cpu& c) {
    X86_TICK(c, 25);
    // 05488c  push ebp
    X86_AT(c, 0x5488cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 05488d  mov ebp, esp
    X86_AT(c, 0x5488du);
    c.r[5] = c.r[4];
    // 05488f  push ebx
    X86_AT(c, 0x5488fu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 054890  push esi
    X86_AT(c, 0x54890u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 054891  push edi
    X86_AT(c, 0x54891u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 054892  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x54892u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 054895  mov esi, dword ptr [ebp + 0xc]
    X86_AT(c, 0x54895u);
    c.r[6] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu)));
    // 054898  jmp 0x548b6
    X86_AT(c, 0x54898u);
    goto L_548b6;
L_5489a:
    X86_TICK(c, 9);
    // 05489a  mov eax, 0xa
    X86_AT(c, 0x5489au);
    c.r[0] = 0xAu;
    // 05489f  cmp eax, esi
    X86_AT(c, 0x5489fu);
    (void)x86_sub(c, c.r[0], c.r[6], 0, 4);
    // 0548a1  jb 0x548a5
    X86_AT(c, 0x548a1u);
    if (x86_cc(c, 2)) { goto L_548a5; }
    X86_TICK(c, 2);
    // 0548a3  mov eax, esi
    X86_AT(c, 0x548a3u);
    c.r[0] = c.r[6];
L_548a5:
    X86_TICK(c, 18);
    // 0548a5  xchg ebx, eax
    X86_AT(c, 0x548a5u);
    { uint32_t t = c.r[3]; c.r[3] = c.r[0]; c.r[0] = t; }
    // 0548a6  push ebx
    X86_AT(c, 0x548a6u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0548a7  push edi
    X86_AT(c, 0x548a7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0548a8  mov ecx, dword ptr [0x4b4c4]
    X86_AT(c, 0x548a8u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B4C4u)));
    // 0548ae  call dword ptr [0x4b4c0]
    X86_AT(c, 0x548aeu);
    { uint32_t t = rd32((c.sbase[3] + (uint32_t)(0x4B4C0u))); push32(c, 0x548b4u); x86_call(c, t); X86_RET(c, 0x548b4u); }
    X86_TICK(c, 2);
    // 0548b4  sub esi, ebx
    X86_AT(c, 0x548b4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[3], 0, 4); }
L_548b6:
    X86_TICK(c, 7);
    // 0548b6  and esi, esi
    X86_AT(c, 0x548b6u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & c.r[6], 4); }
    // 0548b8  ja 0x5489a
    X86_AT(c, 0x548b8u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x5489au); goto L_5489a; }
    X86_TICK(c, 28);
    // 0548ba  pop edi
    X86_AT(c, 0x548bau);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0548bb  pop esi
    X86_AT(c, 0x548bbu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0548bc  pop ebx
    X86_AT(c, 0x548bcu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0548bd  leave 
    X86_AT(c, 0x548bdu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 0548be  ret 8
    X86_AT(c, 0x548beu);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x5488cu, "ran off the end of a function");
}
void f_000548d4(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0548d4  push ebp
    X86_AT(c, 0x548d4u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 0548d5  mov ebp, esp
    X86_AT(c, 0x548d5u);
    c.r[5] = c.r[4];
    // 0548d7  push esi
    X86_AT(c, 0x548d7u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0548d8  push edi
    X86_AT(c, 0x548d8u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0548d9  mov edi, dword ptr [ebp + 8]
    X86_AT(c, 0x548d9u);
    c.r[7] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 0548dc  mov eax, dword ptr [0x4b4b0]
    X86_AT(c, 0x548dcu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B4B0u)));
    // 0548e1  cmp eax, 0xffff
    X86_AT(c, 0x548e1u);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 0548e6  je 0x5491a
    X86_AT(c, 0x548e6u);
    if (x86_cc(c, 4)) { goto L_5491a; }
    X86_TICK(c, 7);
    // 0548e8  cmp edi, eax
    X86_AT(c, 0x548e8u);
    (void)x86_sub(c, c.r[7], c.r[0], 0, 4);
    // 0548ea  jae 0x5491a
    X86_AT(c, 0x548eau);
    if (x86_cc(c, 3)) { goto L_5491a; }
    X86_TICK(c, 24);
    // 0548ec  xchg esi, eax
    X86_AT(c, 0x548ecu);
    { uint32_t t = c.r[6]; c.r[6] = c.r[0]; c.r[0] = t; }
    // 0548ed  sub esi, edi
    X86_AT(c, 0x548edu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[7], 0, 4); }
    // 0548ef  add dword ptr [0x4b4bc], esi
    X86_AT(c, 0x548efu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4BCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[6], 0, 4)); }
    // 0548f5  test byte ptr [0x4b4ac], 0x10
    X86_AT(c, 0x548f5u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x10u, 1);
    // 0548fc  je 0x5490f
    X86_AT(c, 0x548fcu);
    if (x86_cc(c, 4)) { goto L_5490f; }
    X86_TICK(c, 12);
    // 0548fe  test byte ptr [0x4b4ac], 1
    X86_AT(c, 0x548feu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x1u, 1);
    // 054905  jne 0x5490f
    X86_AT(c, 0x54905u);
    if (x86_cc(c, 5)) { goto L_5490f; }
    X86_TICK(c, 11);
    // 054907  push esi
    X86_AT(c, 0x54907u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 054908  push 0x4b4c8
    X86_AT(c, 0x54908u);
    { uint32_t v = 0x4B4C8u; push32(c, v); }
    // 05490d  jmp 0x54915
    X86_AT(c, 0x5490du);
    goto L_54915;
L_5490f:
    X86_TICK(c, 4);
    // 05490f  push esi
    X86_AT(c, 0x5490fu);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 054910  push 0x4b4d2
    X86_AT(c, 0x54910u);
    { uint32_t v = 0x4B4D2u; push32(c, v); }
L_54915:
    X86_TICK(c, 7);
    // 054915  call 0x5488c
    X86_AT(c, 0x54915u);
    push32(c, 0x5491au); x86_call_known(c, 0x5488cu, f_0005488c); X86_RET(c, 0x5491au);
L_5491a:
    X86_TICK(c, 24);
    // 05491a  pop edi
    X86_AT(c, 0x5491au);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 05491b  pop esi
    X86_AT(c, 0x5491bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 05491c  leave 
    X86_AT(c, 0x5491cu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 05491d  ret 4
    X86_AT(c, 0x5491du);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x548d4u, "ran off the end of a function");
}
void f_00054940(X86Cpu& c) {
    X86_TICK(c, 25);
    // 054940  push ebp
    X86_AT(c, 0x54940u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 054941  mov ebp, esp
    X86_AT(c, 0x54941u);
    c.r[5] = c.r[4];
    // 054943  push ecx
    X86_AT(c, 0x54943u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 054944  sub esp, 8
    X86_AT(c, 0x54944u);
    { uint32_t v = c.r[4]; c.r[4] = x86_sub(c, v, 0x8u, 0, 4); }
    // 054947  push ebx
    X86_AT(c, 0x54947u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 054948  mov eax, dword ptr [0x4b7dc]
    X86_AT(c, 0x54948u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 05494d  mov bl, byte ptr [eax]
    X86_AT(c, 0x5494du);
    s8(c, 3, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 05494f  cmp bl, 0x2a
    X86_AT(c, 0x5494fu);
    (void)x86_sub(c, g8(c, 3), 0x2Au, 0, 1);
    // 054952  je 0x54976
    X86_AT(c, 0x54952u);
    if (x86_cc(c, 4)) { goto L_54976; }
    X86_TICK(c, 7);
    // 054954  cmp bl, 0x31
    X86_AT(c, 0x54954u);
    (void)x86_sub(c, g8(c, 3), 0x31u, 0, 1);
    // 054957  jb 0x5495e
    X86_AT(c, 0x54957u);
    if (x86_cc(c, 2)) { goto L_5495e; }
    X86_TICK(c, 7);
    // 054959  cmp bl, 0x39
    X86_AT(c, 0x54959u);
    (void)x86_sub(c, g8(c, 3), 0x39u, 0, 1);
    // 05495c  jbe 0x54976
    X86_AT(c, 0x5495cu);
    if (x86_cc(c, 6)) { goto L_54976; }
L_5495e:
    X86_TICK(c, 12);
    // 05495e  cmp byte ptr [ebp + 0xc], 0
    X86_AT(c, 0x5495eu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))), 0x0u, 0, 1);
    // 054962  je 0x54a1c
    X86_AT(c, 0x54962u);
    if (x86_cc(c, 4)) { goto L_54a1c; }
    X86_TICK(c, 16);
    // 054968  mov eax, dword ptr [0x4b7dc]
    X86_AT(c, 0x54968u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 05496d  cmp byte ptr [eax], 0x30
    X86_AT(c, 0x5496du);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x30u, 0, 1);
    // 054970  jne 0x54a1c
    X86_AT(c, 0x54970u);
    if (x86_cc(c, 5)) { goto L_54a1c; }
L_54976:
    X86_TICK(c, 17);
    // 054976  mov eax, dword ptr [0x4b7dc]
    X86_AT(c, 0x54976u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 05497b  mov al, byte ptr [eax]
    X86_AT(c, 0x5497bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 05497d  mov byte ptr [ebp - 9], al
    X86_AT(c, 0x5497du);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF7u)), g8(c, 0));
    // 054980  cmp al, 0x30
    X86_AT(c, 0x54980u);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 054982  jb 0x549cb
    X86_AT(c, 0x54982u);
    if (x86_cc(c, 2)) { goto L_549cb; }
    X86_TICK(c, 7);
    // 054984  cmp al, 0x39
    X86_AT(c, 0x54984u);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 054986  ja 0x549cb
    X86_AT(c, 0x54986u);
    if (x86_cc(c, 7)) { goto L_549cb; }
    X86_TICK(c, 9);
    // 054988  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0x54988u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 05498f  jmp 0x549b0
    X86_AT(c, 0x5498fu);
    goto L_549b0;
L_54991:
    X86_TICK(c, 30);
    // 054991  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x54991u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 054994  lea eax, [eax + eax*4]
    X86_AT(c, 0x54994u);
    c.r[0] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 054997  add eax, eax
    X86_AT(c, 0x54997u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, c.r[0], 0, 4); }
    // 054999  mov edx, dword ptr [0x4b7dc]
    X86_AT(c, 0x54999u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 05499f  movzx ecx, byte ptr [edx]
    X86_AT(c, 0x5499fu);
    c.r[1] = rd8((c.sbase[3] + (uint32_t)(c.r[2])));
    // 0549a2  add ecx, eax
    X86_AT(c, 0x549a2u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, c.r[0], 0, 4); }
    // 0549a4  sub ecx, 0x30
    X86_AT(c, 0x549a4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0x30u, 0, 4); }
    // 0549a7  mov dword ptr [ebp - 8], ecx
    X86_AT(c, 0x549a7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[1]);
    // 0549aa  inc dword ptr [0x4b7dc]
    X86_AT(c, 0x549aau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7DCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_549b0:
    X86_TICK(c, 17);
    // 0549b0  mov eax, dword ptr [0x4b7dc]
    X86_AT(c, 0x549b0u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 0549b5  mov al, byte ptr [eax]
    X86_AT(c, 0x549b5u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 0549b7  mov byte ptr [ebp - 0xa], al
    X86_AT(c, 0x549b7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF6u)), g8(c, 0));
    // 0549ba  cmp al, 0x30
    X86_AT(c, 0x549bau);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 0549bc  jb 0x54a32
    X86_AT(c, 0x549bcu);
    if (x86_cc(c, 2)) { goto L_54a32; }
    X86_TICK(c, 7);
    // 0549c2  cmp al, 0x39
    X86_AT(c, 0x549c2u);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 0549c4  jbe 0x54991
    X86_AT(c, 0x549c4u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x54991u); goto L_54991; }
    X86_TICK(c, 7);
    // 0549c6  jmp 0x54a32
    X86_AT(c, 0x549c6u);
    goto L_54a32;
L_549cb:
    X86_TICK(c, 16);
    // 0549cb  mov eax, dword ptr [0x4b7dc]
    X86_AT(c, 0x549cbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 0549d0  cmp byte ptr [eax], 0x2a
    X86_AT(c, 0x549d0u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Au, 0, 1);
    // 0549d3  jne 0x54a32
    X86_AT(c, 0x549d3u);
    if (x86_cc(c, 5)) { goto L_54a32; }
    X86_TICK(c, 16);
    // 0549d5  mov eax, dword ptr [0x4b7c8]
    X86_AT(c, 0x549d5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7C8u)));
    // 0549da  cmp dword ptr [eax], 0
    X86_AT(c, 0x549dau);
    (void)x86_sub(c, rd32((c.sbase[3] + (uint32_t)(c.r[0]))), 0x0u, 0, 4);
    // 0549dd  jge 0x54a03
    X86_AT(c, 0x549ddu);
    if (x86_cc(c, 13)) { goto L_54a03; }
    X86_TICK(c, 12);
    // 0549df  cmp byte ptr [ebp + 8], 0x50
    X86_AT(c, 0x549dfu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x50u, 0, 1);
    // 0549e3  jne 0x549ee
    X86_AT(c, 0x549e3u);
    if (x86_cc(c, 5)) { goto L_549ee; }
    X86_TICK(c, 9);
    // 0549e5  mov dword ptr [ebp - 8], 0xffff
    X86_AT(c, 0x549e5u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFu);
    // 0549ec  jmp 0x54a0d
    X86_AT(c, 0x549ecu);
    goto L_54a0d;
L_549ee:
    X86_TICK(c, 26);
    // 0549ee  mov eax, dword ptr [0x4b7c8]
    X86_AT(c, 0x549eeu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7C8u)));
    // 0549f3  mov eax, dword ptr [eax]
    X86_AT(c, 0x549f3u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 0549f5  neg eax
    X86_AT(c, 0x549f5u);
    { uint32_t v = c.r[0]; c.r[0] = x86_neg(c, v, 4); }
    // 0549f7  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x549f7u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
    // 0549fa  or byte ptr [0x4b4ac], 1
    X86_AT(c, 0x549fau);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4ACu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
    // 054a01  jmp 0x54a0d
    X86_AT(c, 0x54a01u);
    goto L_54a0d;
L_54a03:
    X86_TICK(c, 10);
    // 054a03  mov eax, dword ptr [0x4b7c8]
    X86_AT(c, 0x54a03u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7C8u)));
    // 054a08  mov eax, dword ptr [eax]
    X86_AT(c, 0x54a08u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[0])));
    // 054a0a  mov dword ptr [ebp - 8], eax
    X86_AT(c, 0x54a0au);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), c.r[0]);
L_54a0d:
    X86_TICK(c, 20);
    // 054a0d  add dword ptr [0x4b7c8], 4
    X86_AT(c, 0x54a0du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7C8u)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, 0x4u, 0, 4)); }
    // 054a14  inc dword ptr [0x4b7dc]
    X86_AT(c, 0x54a14u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7DCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 054a1a  jmp 0x54a32
    X86_AT(c, 0x54a1au);
    goto L_54a32;
L_54a1c:
    X86_TICK(c, 12);
    // 054a1c  cmp byte ptr [ebp + 8], 0x50
    X86_AT(c, 0x54a1cu);
    (void)x86_sub(c, rd8((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u))), 0x50u, 0, 1);
    // 054a20  jne 0x54a2b
    X86_AT(c, 0x54a20u);
    if (x86_cc(c, 5)) { goto L_54a2b; }
    X86_TICK(c, 9);
    // 054a22  mov dword ptr [ebp - 8], 0
    X86_AT(c, 0x54a22u);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0x0u);
    // 054a29  jmp 0x54a32
    X86_AT(c, 0x54a29u);
    goto L_54a32;
L_54a2b:
    X86_TICK(c, 2);
    // 054a2b  mov dword ptr [ebp - 8], 0xffff
    X86_AT(c, 0x54a2bu);
    wr32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)), 0xFFFFu);
L_54a32:
    X86_TICK(c, 24);
    // 054a32  mov eax, dword ptr [ebp - 8]
    X86_AT(c, 0x54a32u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFF8u)));
    // 054a35  pop ebx
    X86_AT(c, 0x54a35u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 054a36  leave 
    X86_AT(c, 0x54a36u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 054a37  ret 8
    X86_AT(c, 0x54a37u);
    c.eip = pop32(c); c.r[4] += 0x8u; return;
    x86_fault(c, 0x54940u, "ran off the end of a function");
}
void f_00054a50(X86Cpu& c) {
    X86_TICK(c, 20);
    // 054a50  push ebp
    X86_AT(c, 0x54a50u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 054a51  mov ebp, esp
    X86_AT(c, 0x54a51u);
    c.r[5] = c.r[4];
    // 054a53  push ecx
    X86_AT(c, 0x54a53u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 054a54  push eax
    X86_AT(c, 0x54a54u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 054a55  push ebx
    X86_AT(c, 0x54a55u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 054a56  push esi
    X86_AT(c, 0x54a56u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 054a57  push edi
    X86_AT(c, 0x54a57u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 054a58  mov eax, dword ptr [ebp + 8]
    X86_AT(c, 0x54a58u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 054a5b  mov dword ptr [0x4b7dc], eax
    X86_AT(c, 0x54a5bu);
    wr32((c.sbase[3] + (uint32_t)(0x4B7DCu)), c.r[0]);
L_54a60:
    X86_TICK(c, 29);
    // 054a60  sub eax, eax
    X86_AT(c, 0x54a60u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 054a62  mov byte ptr [0x4b4ac], al
    X86_AT(c, 0x54a62u);
    wr8((c.sbase[3] + (uint32_t)(0x4B4ACu)), g8(c, 0));
    // 054a67  mov edx, 0xffff
    X86_AT(c, 0x54a67u);
    c.r[2] = 0xFFFFu;
    // 054a6c  mov dword ptr [0x4b4b0], edx
    X86_AT(c, 0x54a6cu);
    wr32((c.sbase[3] + (uint32_t)(0x4B4B0u)), c.r[2]);
    // 054a72  mov dword ptr [0x4b4b4], edx
    X86_AT(c, 0x54a72u);
    wr32((c.sbase[3] + (uint32_t)(0x4B4B4u)), c.r[2]);
    // 054a78  mov byte ptr [0x4b4b8], 1
    X86_AT(c, 0x54a78u);
    wr8((c.sbase[3] + (uint32_t)(0x4B4B8u)), 0x1u);
    // 054a7f  mov edi, eax
    X86_AT(c, 0x54a7fu);
    c.r[7] = c.r[0];
    // 054a81  mov edx, dword ptr [0x4b7dc]
    X86_AT(c, 0x54a81u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 054a87  cmp al, byte ptr [edx]
    X86_AT(c, 0x54a87u);
    (void)x86_sub(c, g8(c, 0), rd8((c.sbase[3] + (uint32_t)(c.r[2]))), 0, 1);
    // 054a89  je 0x54c38
    X86_AT(c, 0x54a89u);
    if (x86_cc(c, 4)) { goto L_54c38; }
    X86_TICK(c, 16);
    // 054a8f  mov eax, dword ptr [0x4b7dc]
    X86_AT(c, 0x54a8fu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 054a94  cmp byte ptr [eax], 0x25
    X86_AT(c, 0x54a94u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x25u, 0, 1);
    // 054a97  je 0x54adc
    X86_AT(c, 0x54a97u);
    if (x86_cc(c, 4)) { goto L_54adc; }
    X86_TICK(c, 28);
    // 054a99  mov edx, dword ptr [0x4b7d4]
    X86_AT(c, 0x54a99u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(0x4B7D4u)));
    // 054a9f  mov al, 0x25
    X86_AT(c, 0x54a9fu);
    s8(c, 0, 0x25u);
    // 054aa1  mov ecx, dword ptr [0x4b7dc]
    X86_AT(c, 0x54aa1u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 054aa7  push edi
    X86_AT(c, 0x54aa7u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 054aa8  mov edi, ecx
    X86_AT(c, 0x54aa8u);
    c.r[7] = c.r[1];
    // 054aaa  mov ecx, edx
    X86_AT(c, 0x54aaau);
    c.r[1] = c.r[2];
    // 054aac  scasb al, byte ptr es:[edi]
    X86_AT(c, 0x54aacu);
    x86_string(c, 4, 1, 242, 4, 3);
    // 054aae  jne 0x54ab3
    X86_AT(c, 0x54aaeu);
    if (x86_cc(c, 5)) { goto L_54ab3; }
    X86_TICK(c, 4);
    // 054ab0  inc ecx
    X86_AT(c, 0x54ab0u);
    { uint32_t v = c.r[1]; c.r[1] = x86_inc(c, v, 4); }
    // 054ab1  sub edx, ecx
    X86_AT(c, 0x54ab1u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[1], 0, 4); }
L_54ab3:
    X86_TICK(c, 41);
    // 054ab3  pop edi
    X86_AT(c, 0x54ab3u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 054ab4  mov edi, edx
    X86_AT(c, 0x54ab4u);
    c.r[7] = c.r[2];
    // 054ab6  mov eax, dword ptr [0x4b7dc]
    X86_AT(c, 0x54ab6u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 054abb  mov dword ptr [0x4b7cc], eax
    X86_AT(c, 0x54abbu);
    wr32((c.sbase[3] + (uint32_t)(0x4B7CCu)), c.r[0]);
    // 054ac0  mov dword ptr [0x4b7d0], edi
    X86_AT(c, 0x54ac0u);
    wr32((c.sbase[3] + (uint32_t)(0x4B7D0u)), c.r[7]);
    // 054ac6  add dword ptr [0x4b7dc], edi
    X86_AT(c, 0x54ac6u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7DCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[7], 0, 4)); }
    // 054acc  sub dword ptr [0x4b7d4], edi
    X86_AT(c, 0x54accu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7D4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[7], 0, 4)); }
    // 054ad2  push 0x30
    X86_AT(c, 0x54ad2u);
    { uint32_t v = 0x30u; push32(c, v); }
    // 054ad4  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x54ad4u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 054ad7  call dword ptr [ebp + 0xc]
    X86_AT(c, 0x54ad7u);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, 0x54adau); x86_call(c, t); X86_RET(c, 0x54adau); }
    X86_TICK(c, 7);
    // 054ada  jmp 0x54a60
    X86_AT(c, 0x54adau);
    X86_POLL(c, 0x54a60u); goto L_54a60;
L_54adc:
    X86_TICK(c, 6);
    // 054adc  mov esi, dword ptr [0x4b7dc]
    X86_AT(c, 0x54adcu);
    c.r[6] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 054ae2  sub ebx, ebx
    X86_AT(c, 0x54ae2u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
L_54ae4:
    X86_TICK(c, 25);
    // 054ae4  inc dword ptr [0x4b7dc]
    X86_AT(c, 0x54ae4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7DCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 054aea  mov eax, dword ptr [0x4b7dc]
    X86_AT(c, 0x54aeau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 054aef  movzx eax, byte ptr [eax]
    X86_AT(c, 0x54aefu);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0])));
    // 054af2  sub eax, 0x20
    X86_AT(c, 0x54af2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, 0x20u, 0, 4); }
    // 054af5  cmp eax, 0x10
    X86_AT(c, 0x54af5u);
    (void)x86_sub(c, c.r[0], 0x10u, 0, 4);
    // 054af8  ja 0x54b77
    X86_AT(c, 0x54af8u);
    if (x86_cc(c, 7)) { goto L_54b77; }
    X86_TICK(c, 7);
    // 054afe  jmp dword ptr cs:[eax*4 + 0x54b06]
    X86_AT(c, 0x54afeu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x54B06u)));
      switch (t) {
      case 0x54b4au: goto L_54b4a;
      case 0x54b53u: goto L_54b53;
      case 0x54b5cu: goto L_54b5c;
      case 0x54b65u: goto L_54b65;
      case 0x54b6eu: goto L_54b6e;
      case 0x54b77u: goto L_54b77;
      default: x86_jump(c, t); return; } }
L_54b4a:
    X86_TICK(c, 14);
    // 054b4a  or byte ptr [0x4b4ac], 1
    X86_AT(c, 0x54b4au);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4ACu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x1u, 1)); }
    // 054b51  jmp 0x54b79
    X86_AT(c, 0x54b51u);
    goto L_54b79;
L_54b53:
    X86_TICK(c, 14);
    // 054b53  or byte ptr [0x4b4ac], 2
    X86_AT(c, 0x54b53u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4ACu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x2u, 1)); }
    // 054b5a  jmp 0x54b79
    X86_AT(c, 0x54b5au);
    goto L_54b79;
L_54b5c:
    X86_TICK(c, 14);
    // 054b5c  or byte ptr [0x4b4ac], 4
    X86_AT(c, 0x54b5cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4ACu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x4u, 1)); }
    // 054b63  jmp 0x54b79
    X86_AT(c, 0x54b63u);
    goto L_54b79;
L_54b65:
    X86_TICK(c, 14);
    // 054b65  or byte ptr [0x4b4ac], 8
    X86_AT(c, 0x54b65u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4ACu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x8u, 1)); }
    // 054b6c  jmp 0x54b79
    X86_AT(c, 0x54b6cu);
    goto L_54b79;
L_54b6e:
    X86_TICK(c, 14);
    // 054b6e  or byte ptr [0x4b4ac], 0x10
    X86_AT(c, 0x54b6eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4ACu)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | 0x10u, 1)); }
    // 054b75  jmp 0x54b79
    X86_AT(c, 0x54b75u);
    goto L_54b79;
L_54b77:
    X86_TICK(c, 2);
    // 054b77  mov bl, 1
    X86_AT(c, 0x54b77u);
    s8(c, 3, 0x1u);
L_54b79:
    X86_TICK(c, 7);
    // 054b79  and bl, bl
    X86_AT(c, 0x54b79u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_logic(c, v & g8(c, 3), 1)); }
    // 054b7b  je 0x54ae4
    X86_AT(c, 0x54b7bu);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x54ae4u); goto L_54ae4; }
    X86_TICK(c, 13);
    // 054b81  push 0
    X86_AT(c, 0x54b81u);
    { uint32_t v = 0x0u; push32(c, v); }
    // 054b83  push 0x46
    X86_AT(c, 0x54b83u);
    { uint32_t v = 0x46u; push32(c, v); }
    // 054b85  mov ecx, ebp
    X86_AT(c, 0x54b85u);
    c.r[1] = c.r[5];
    // 054b87  call 0x54940
    X86_AT(c, 0x54b87u);
    push32(c, 0x54b8cu); x86_call_known(c, 0x54940u, f_00054940); X86_RET(c, 0x54b8cu);
    X86_TICK(c, 18);
    // 054b8c  mov dword ptr [0x4b4b0], eax
    X86_AT(c, 0x54b8cu);
    wr32((c.sbase[3] + (uint32_t)(0x4B4B0u)), c.r[0]);
    // 054b91  mov eax, dword ptr [0x4b7dc]
    X86_AT(c, 0x54b91u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 054b96  cmp byte ptr [eax], 0x2e
    X86_AT(c, 0x54b96u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Eu, 0, 1);
    // 054b99  jne 0x54bd5
    X86_AT(c, 0x54b99u);
    if (x86_cc(c, 5)) { goto L_54bd5; }
    X86_TICK(c, 22);
    // 054b9b  inc dword ptr [0x4b7dc]
    X86_AT(c, 0x54b9bu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7DCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 054ba1  mov eax, dword ptr [0x4b7dc]
    X86_AT(c, 0x54ba1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 054ba6  cmp byte ptr [eax], 0x2d
    X86_AT(c, 0x54ba6u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x2Du, 0, 1);
    // 054ba9  jne 0x54bc5
    X86_AT(c, 0x54ba9u);
    if (x86_cc(c, 5)) { goto L_54bc5; }
L_54bab:
    X86_TICK(c, 23);
    // 054bab  inc dword ptr [0x4b7dc]
    X86_AT(c, 0x54babu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7DCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 054bb1  mov eax, dword ptr [0x4b7dc]
    X86_AT(c, 0x54bb1u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 054bb6  mov al, byte ptr [eax]
    X86_AT(c, 0x54bb6u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 054bb8  mov byte ptr [ebp - 5], al
    X86_AT(c, 0x54bb8u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFBu)), g8(c, 0));
    // 054bbb  cmp al, 0x30
    X86_AT(c, 0x54bbbu);
    (void)x86_sub(c, g8(c, 0), 0x30u, 0, 1);
    // 054bbd  jb 0x54bd5
    X86_AT(c, 0x54bbdu);
    if (x86_cc(c, 2)) { goto L_54bd5; }
    X86_TICK(c, 7);
    // 054bbf  cmp al, 0x39
    X86_AT(c, 0x54bbfu);
    (void)x86_sub(c, g8(c, 0), 0x39u, 0, 1);
    // 054bc1  jbe 0x54bab
    X86_AT(c, 0x54bc1u);
    if (x86_cc(c, 6)) { X86_POLL(c, 0x54babu); goto L_54bab; }
    X86_TICK(c, 7);
    // 054bc3  jmp 0x54bd5
    X86_AT(c, 0x54bc3u);
    goto L_54bd5;
L_54bc5:
    X86_TICK(c, 13);
    // 054bc5  push 1
    X86_AT(c, 0x54bc5u);
    { uint32_t v = 0x1u; push32(c, v); }
    // 054bc7  push 0x50
    X86_AT(c, 0x54bc7u);
    { uint32_t v = 0x50u; push32(c, v); }
    // 054bc9  mov ecx, ebp
    X86_AT(c, 0x54bc9u);
    c.r[1] = c.r[5];
    // 054bcb  call 0x54940
    X86_AT(c, 0x54bcbu);
    push32(c, 0x54bd0u); x86_call_known(c, 0x54940u, f_00054940); X86_RET(c, 0x54bd0u);
    X86_TICK(c, 2);
    // 054bd0  mov dword ptr [0x4b4b4], eax
    X86_AT(c, 0x54bd0u);
    wr32((c.sbase[3] + (uint32_t)(0x4B4B4u)), c.r[0]);
L_54bd5:
    X86_TICK(c, 16);
    // 054bd5  mov eax, dword ptr [0x4b7dc]
    X86_AT(c, 0x54bd5u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 054bda  cmp byte ptr [eax], 0x68
    X86_AT(c, 0x54bdau);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x68u, 0, 1);
    // 054bdd  jne 0x54be8
    X86_AT(c, 0x54bddu);
    if (x86_cc(c, 5)) { goto L_54be8; }
    X86_TICK(c, 9);
    // 054bdf  mov byte ptr [0x4b4b8], 0
    X86_AT(c, 0x54bdfu);
    wr8((c.sbase[3] + (uint32_t)(0x4B4B8u)), 0x0u);
    // 054be6  jmp 0x54c0c
    X86_AT(c, 0x54be6u);
    goto L_54c0c;
L_54be8:
    X86_TICK(c, 16);
    // 054be8  mov eax, dword ptr [0x4b7dc]
    X86_AT(c, 0x54be8u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 054bed  cmp byte ptr [eax], 0x6c
    X86_AT(c, 0x54bedu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x6Cu, 0, 1);
    // 054bf0  jne 0x54bfb
    X86_AT(c, 0x54bf0u);
    if (x86_cc(c, 5)) { goto L_54bfb; }
    X86_TICK(c, 9);
    // 054bf2  mov byte ptr [0x4b4b8], 2
    X86_AT(c, 0x54bf2u);
    wr8((c.sbase[3] + (uint32_t)(0x4B4B8u)), 0x2u);
    // 054bf9  jmp 0x54c0c
    X86_AT(c, 0x54bf9u);
    goto L_54c0c;
L_54bfb:
    X86_TICK(c, 16);
    // 054bfb  mov eax, dword ptr [0x4b7dc]
    X86_AT(c, 0x54bfbu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 054c00  cmp byte ptr [eax], 0x4c
    X86_AT(c, 0x54c00u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[0]))), 0x4Cu, 0, 1);
    // 054c03  jne 0x54c12
    X86_AT(c, 0x54c03u);
    if (x86_cc(c, 5)) { goto L_54c12; }
    X86_TICK(c, 2);
    // 054c05  mov byte ptr [0x4b4b8], 3
    X86_AT(c, 0x54c05u);
    wr8((c.sbase[3] + (uint32_t)(0x4B4B8u)), 0x3u);
L_54c0c:
    X86_TICK(c, 6);
    // 054c0c  inc dword ptr [0x4b7dc]
    X86_AT(c, 0x54c0cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7DCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
L_54c12:
    X86_TICK(c, 21);
    // 054c12  mov eax, dword ptr [0x4b7dc]
    X86_AT(c, 0x54c12u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 054c17  mov al, byte ptr [eax]
    X86_AT(c, 0x54c17u);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0]))));
    // 054c19  push eax
    X86_AT(c, 0x54c19u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 054c1a  mov ecx, dword ptr [ebp + 0x10]
    X86_AT(c, 0x54c1au);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x10u)));
    // 054c1d  call dword ptr [ebp + 0xc]
    X86_AT(c, 0x54c1du);
    { uint32_t t = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xCu))); push32(c, 0x54c20u); x86_call(c, t); X86_RET(c, 0x54c20u); }
    X86_TICK(c, 26);
    // 054c20  inc dword ptr [0x4b7dc]
    X86_AT(c, 0x54c20u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7DCu)); uint32_t v = rd32(ea); wr32(ea, x86_inc(c, v, 4)); }
    // 054c26  mov eax, dword ptr [0x4b7dc]
    X86_AT(c, 0x54c26u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B7DCu)));
    // 054c2b  sub eax, esi
    X86_AT(c, 0x54c2bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[6], 0, 4); }
    // 054c2d  sub dword ptr [0x4b7d4], eax
    X86_AT(c, 0x54c2du);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B7D4u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[0], 0, 4)); }
    // 054c33  jmp 0x54a60
    X86_AT(c, 0x54c33u);
    X86_POLL(c, 0x54a60u); goto L_54a60;
L_54c38:
    X86_TICK(c, 28);
    // 054c38  pop edi
    X86_AT(c, 0x54c38u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 054c39  pop esi
    X86_AT(c, 0x54c39u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 054c3a  pop ebx
    X86_AT(c, 0x54c3au);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 054c3b  leave 
    X86_AT(c, 0x54c3bu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 054c3c  ret 0xc
    X86_AT(c, 0x54c3cu);
    c.eip = pop32(c); c.r[4] += 0xCu; return;
    x86_fault(c, 0x54a50u, "ran off the end of a function");
}
void f_00054c4c(X86Cpu& c) {
    X86_TICK(c, 28);
    // 054c4c  push ebp
    X86_AT(c, 0x54c4cu);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 054c4d  mov ebp, esp
    X86_AT(c, 0x54c4du);
    c.r[5] = c.r[4];
    // 054c4f  push ecx
    X86_AT(c, 0x54c4fu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 054c50  mov ecx, dword ptr [ebp + 8]
    X86_AT(c, 0x54c50u);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0x8u)));
    // 054c53  add dword ptr [0x4b4bc], ecx
    X86_AT(c, 0x54c53u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4BCu)); uint32_t v = rd32(ea); wr32(ea, x86_add(c, v, c.r[1], 0, 4)); }
    // 054c59  mov eax, dword ptr [0x4b4b0]
    X86_AT(c, 0x54c59u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(0x4B4B0u)));
    // 054c5e  cmp eax, 0xffff
    X86_AT(c, 0x54c5eu);
    (void)x86_sub(c, c.r[0], 0xFFFFu, 0, 4);
    // 054c63  je 0x54c6f
    X86_AT(c, 0x54c63u);
    if (x86_cc(c, 4)) { goto L_54c6f; }
    X86_TICK(c, 7);
    // 054c65  cmp ecx, eax
    X86_AT(c, 0x54c65u);
    (void)x86_sub(c, c.r[1], c.r[0], 0, 4);
    // 054c67  ja 0x54c6f
    X86_AT(c, 0x54c67u);
    if (x86_cc(c, 7)) { goto L_54c6f; }
    X86_TICK(c, 7);
    // 054c69  sub dword ptr [0x4b4b0], ecx
    X86_AT(c, 0x54c69u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(0x4B4B0u)); uint32_t v = rd32(ea); wr32(ea, x86_sub(c, v, c.r[1], 0, 4)); }
L_54c6f:
    X86_TICK(c, 16);
    // 054c6f  leave 
    X86_AT(c, 0x54c6fu);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 054c70  ret 4
    X86_AT(c, 0x54c70u);
    c.eip = pop32(c); c.r[4] += 0x4u; return;
    x86_fault(c, 0x54c4cu, "ran off the end of a function");
}
void f_00054c88(X86Cpu& c) {
    X86_TICK(c, 25);
    // 054c88  push ebp
    X86_AT(c, 0x54c88u);
    { uint32_t v = c.r[5]; push32(c, v); }
    // 054c89  mov ebp, esp
    X86_AT(c, 0x54c89u);
    c.r[5] = c.r[4];
    // 054c8b  push ecx
    X86_AT(c, 0x54c8bu);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 054c8c  mov dword ptr [0x4b814], 0
    X86_AT(c, 0x54c8cu);
    wr32((c.sbase[3] + (uint32_t)(0x4B814u)), 0x0u);
    // 054c96  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x54c96u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 054c99  movzx eax, byte ptr [eax + 0xc]
    X86_AT(c, 0x54c99u);
    c.r[0] = rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu)));
    // 054c9d  cmp eax, 0x69
    X86_AT(c, 0x54c9du);
    (void)x86_sub(c, c.r[0], 0x69u, 0, 4);
    // 054ca0  ja 0x54cba
    X86_AT(c, 0x54ca0u);
    if (x86_cc(c, 7)) { goto L_54cba; }
    X86_TICK(c, 7);
    // 054ca2  cmp eax, 0x69
    X86_AT(c, 0x54ca2u);
    (void)x86_sub(c, c.r[0], 0x69u, 0, 4);
    // 054ca5  je 0x54cd2
    X86_AT(c, 0x54ca5u);
    if (x86_cc(c, 4)) { goto L_54cd2; }
    X86_TICK(c, 7);
    // 054ca7  cmp eax, 0x58
    X86_AT(c, 0x54ca7u);
    (void)x86_sub(c, c.r[0], 0x58u, 0, 4);
    // 054caa  je 0x54d41
    X86_AT(c, 0x54caau);
    if (x86_cc(c, 4)) { goto L_54d41; }
    X86_TICK(c, 7);
    // 054cb0  cmp eax, 0x64
    X86_AT(c, 0x54cb0u);
    (void)x86_sub(c, c.r[0], 0x64u, 0, 4);
    // 054cb3  je 0x54cd2
    X86_AT(c, 0x54cb3u);
    if (x86_cc(c, 4)) { goto L_54cd2; }
    X86_TICK(c, 7);
    // 054cb5  jmp 0x54d75
    X86_AT(c, 0x54cb5u);
    goto L_54d75;
L_54cba:
    X86_TICK(c, 7);
    // 054cba  cmp eax, 0x6f
    X86_AT(c, 0x54cbau);
    (void)x86_sub(c, c.r[0], 0x6Fu, 0, 4);
    // 054cbd  je 0x54d1c
    X86_AT(c, 0x54cbdu);
    if (x86_cc(c, 4)) { goto L_54d1c; }
    X86_TICK(c, 7);
    // 054cbf  cmp eax, 0x75
    X86_AT(c, 0x54cbfu);
    (void)x86_sub(c, c.r[0], 0x75u, 0, 4);
    // 054cc2  je 0x54d13
    X86_AT(c, 0x54cc2u);
    if (x86_cc(c, 4)) { goto L_54d13; }
    X86_TICK(c, 7);
    // 054cc4  cmp eax, 0x78
    X86_AT(c, 0x54cc4u);
    (void)x86_sub(c, c.r[0], 0x78u, 0, 4);
    // 054cc7  je 0x54d41
    X86_AT(c, 0x54cc7u);
    if (x86_cc(c, 4)) { goto L_54d41; }
    X86_TICK(c, 7);
    // 054ccd  jmp 0x54d75
    X86_AT(c, 0x54ccdu);
    goto L_54d75;
L_54cd2:
    X86_TICK(c, 17);
    // 054cd2  mov byte ptr [0x4b808], 0xa
    X86_AT(c, 0x54cd2u);
    wr8((c.sbase[3] + (uint32_t)(0x4B808u)), 0xAu);
    // 054cd9  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x54cd9u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 054cdc  mov edx, dword ptr [eax + 8]
    X86_AT(c, 0x54cdcu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)));
    // 054cdf  and edx, edx
    X86_AT(c, 0x54cdfu);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & c.r[2], 4); }
    // 054ce1  jge 0x54cef
    X86_AT(c, 0x54ce1u);
    if (x86_cc(c, 13)) { goto L_54cef; }
    X86_TICK(c, 15);
    // 054ce3  neg dword ptr [eax + 8]
    X86_AT(c, 0x54ce3u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[0] + 0x8u)); uint32_t v = rd32(ea); wr32(ea, x86_neg(c, v, 4)); }
    // 054ce6  mov byte ptr [0x4b80a], 0x2d
    X86_AT(c, 0x54ce6u);
    wr8((c.sbase[3] + (uint32_t)(0x4B80Au)), 0x2Du);
    // 054ced  jmp 0x54d33
    X86_AT(c, 0x54cedu);
    goto L_54d33;
L_54cef:
    X86_TICK(c, 12);
    // 054cef  test byte ptr [0x4b4ac], 2
    X86_AT(c, 0x54cefu);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x2u, 1);
    // 054cf6  je 0x54d01
    X86_AT(c, 0x54cf6u);
    if (x86_cc(c, 4)) { goto L_54d01; }
    X86_TICK(c, 9);
    // 054cf8  mov byte ptr [0x4b80a], 0x2b
    X86_AT(c, 0x54cf8u);
    wr8((c.sbase[3] + (uint32_t)(0x4B80Au)), 0x2Bu);
    // 054cff  jmp 0x54d33
    X86_AT(c, 0x54cffu);
    goto L_54d33;
L_54d01:
    X86_TICK(c, 12);
    // 054d01  test byte ptr [0x4b4ac], 4
    X86_AT(c, 0x54d01u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x4u, 1);
    // 054d08  je 0x54d75
    X86_AT(c, 0x54d08u);
    if (x86_cc(c, 4)) { goto L_54d75; }
    X86_TICK(c, 9);
    // 054d0a  mov byte ptr [0x4b80a], 0x20
    X86_AT(c, 0x54d0au);
    wr8((c.sbase[3] + (uint32_t)(0x4B80Au)), 0x20u);
    // 054d11  jmp 0x54d33
    X86_AT(c, 0x54d11u);
    goto L_54d33;
L_54d13:
    X86_TICK(c, 9);
    // 054d13  mov byte ptr [0x4b808], 0xa
    X86_AT(c, 0x54d13u);
    wr8((c.sbase[3] + (uint32_t)(0x4B808u)), 0xAu);
    // 054d1a  jmp 0x54d75
    X86_AT(c, 0x54d1au);
    goto L_54d75;
L_54d1c:
    X86_TICK(c, 14);
    // 054d1c  mov byte ptr [0x4b808], 8
    X86_AT(c, 0x54d1cu);
    wr8((c.sbase[3] + (uint32_t)(0x4B808u)), 0x8u);
    // 054d23  test byte ptr [0x4b4ac], 8
    X86_AT(c, 0x54d23u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x8u, 1);
    // 054d2a  je 0x54d75
    X86_AT(c, 0x54d2au);
    if (x86_cc(c, 4)) { goto L_54d75; }
    X86_TICK(c, 2);
    // 054d2c  mov byte ptr [0x4b80a], 0x30
    X86_AT(c, 0x54d2cu);
    wr8((c.sbase[3] + (uint32_t)(0x4B80Au)), 0x30u);
L_54d33:
    X86_TICK(c, 11);
    // 054d33  mov dword ptr [0x4b814], 1
    X86_AT(c, 0x54d33u);
    wr32((c.sbase[3] + (uint32_t)(0x4B814u)), 0x1u);
    // 054d3d  push 1
    X86_AT(c, 0x54d3du);
    { uint32_t v = 0x1u; push32(c, v); }
    // 054d3f  jmp 0x54d6e
    X86_AT(c, 0x54d3fu);
    goto L_54d6e;
L_54d41:
    X86_TICK(c, 14);
    // 054d41  mov byte ptr [0x4b808], 0x10
    X86_AT(c, 0x54d41u);
    wr8((c.sbase[3] + (uint32_t)(0x4B808u)), 0x10u);
    // 054d48  test byte ptr [0x4b4ac], 8
    X86_AT(c, 0x54d48u);
    (void)x86_logic(c, rd8((c.sbase[3] + (uint32_t)(0x4B4ACu))) & 0x8u, 1);
    // 054d4f  je 0x54d75
    X86_AT(c, 0x54d4fu);
    if (x86_cc(c, 4)) { goto L_54d75; }
    X86_TICK(c, 18);
    // 054d51  mov byte ptr [0x4b80a], 0x30
    X86_AT(c, 0x54d51u);
    wr8((c.sbase[3] + (uint32_t)(0x4B80Au)), 0x30u);
    // 054d58  mov eax, dword ptr [ebp - 4]
    X86_AT(c, 0x54d58u);
    c.r[0] = rd32((c.sbase[2] + (uint32_t)(c.r[5] + 0xFFFFFFFCu)));
    // 054d5b  mov al, byte ptr [eax + 0xc]
    X86_AT(c, 0x54d5bu);
    s8(c, 0, rd8((c.sbase[3] + (uint32_t)(c.r[0] + 0xCu))));
    // 054d5e  mov byte ptr [0x4b80b], al
    X86_AT(c, 0x54d5eu);
    wr8((c.sbase[3] + (uint32_t)(0x4B80Bu)), g8(c, 0));
    // 054d63  mov eax, 2
    X86_AT(c, 0x54d63u);
    c.r[0] = 0x2u;
    // 054d68  mov dword ptr [0x4b814], eax
    X86_AT(c, 0x54d68u);
    wr32((c.sbase[3] + (uint32_t)(0x4B814u)), c.r[0]);
    // 054d6d  push eax
    X86_AT(c, 0x54d6du);
    { uint32_t v = c.r[0]; push32(c, v); }
L_54d6e:
    X86_TICK(c, 9);
    // 054d6e  mov ecx, ebp
    X86_AT(c, 0x54d6eu);
    c.r[1] = c.r[5];
    // 054d70  call 0x54c4c
    X86_AT(c, 0x54d70u);
    push32(c, 0x54d75u); x86_call_known(c, 0x54c4cu, f_00054c4c); X86_RET(c, 0x54d75u);
L_54d75:
    X86_TICK(c, 16);
    // 054d75  leave 
    X86_AT(c, 0x54d75u);
    c.r[4] = c.r[5]; c.r[5] = pop32(c);
    // 054d76  ret 
    X86_AT(c, 0x54d76u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x54c88u, "ran off the end of a function");
}
}

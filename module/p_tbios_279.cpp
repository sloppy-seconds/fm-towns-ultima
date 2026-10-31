#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00011389(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011389  ja 0x13557
    X86_AT(c, 0x11389u);
    if (x86_cc(c, 7)) { goto L_13557; }
    X86_TICK(c, 7);
    // 01138f  test dl, 0x80
    X86_AT(c, 0x1138fu);
    (void)x86_logic(c, g8(c, 2) & 0x80u, 1);
    // 011392  jne 0x13557
    X86_AT(c, 0x11392u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 37);
    // 011398  pushal 
    X86_AT(c, 0x11398u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011399  movzx ebx, bl
    X86_AT(c, 0x11399u);
    c.r[3] = g8(c, 3);
    // 01139c  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x1139cu);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0113a3  test byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113a3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u))) & g8(c, 5), 1);
    // 0113aa  jne 0x13553
    X86_AT(c, 0x113aau);
    if (x86_cc(c, 5)) { goto L_13553; }
    X86_TICK(c, 30);
    // 0113b0  or byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 0113b7  sub dh, 0xc
    X86_AT(c, 0x113b7u);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_sub(c, v, 0xCu, 0, 1)); }
    // 0113ba  mov byte ptr gs:[edi + ebx*1 + 0x1e0], dh
    X86_AT(c, 0x113bau);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1E0u)), g8(c, 6));
    // 0113c2  mov bp, word ptr gs:[edi + ebx*2 + 0x1e8]
    X86_AT(c, 0x113c2u);
    s16(c, 5, rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1E8u))));
    // 0113cb  movzx esi, dl
    X86_AT(c, 0x113cbu);
    c.r[6] = g8(c, 2);
    // 0113ce  movzx ecx, dh
    X86_AT(c, 0x113ceu);
    c.r[1] = g8(c, 6);
    // 0113d1  mov dx, 0x4d8
    X86_AT(c, 0x113d1u);
    s16(c, 2, 0x4D8u);
    // 0113d5  cmp bl, 2
    X86_AT(c, 0x113d5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0113d8  jbe 0x113e6
    X86_AT(c, 0x113d8u);
    if (x86_cc(c, 6)) { goto L_113e6; }
    X86_TICK(c, 6);
    // 0113da  add dl, 4
    X86_AT(c, 0x113dau);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0113dd  add edi, 0xf0
    X86_AT(c, 0x113ddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0113e3  sub bl, 3
    X86_AT(c, 0x113e3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_113e6:
    X86_TICK(c, 7);
    // 0113e6  test cl, cl
    X86_AT(c, 0x113e6u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 0113e8  jne 0x113f2
    X86_AT(c, 0x113e8u);
    if (x86_cc(c, 5)) { goto L_113f2; }
    X86_TICK(c, 11);
    // 0113ea  mov cx, 0x268
    X86_AT(c, 0x113eau);
    s16(c, 1, 0x268u);
    // 0113ee  xor al, al
    X86_AT(c, 0x113eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0113f0  jmp 0x11405
    X86_AT(c, 0x113f0u);
    goto L_11405;
L_113f2:
    X86_TICK(c, 53);
    // 0113f2  mov eax, ecx
    X86_AT(c, 0x113f2u);
    c.r[0] = c.r[1];
    // 0113f4  dec eax
    X86_AT(c, 0x113f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0113f5  mov cl, 0xc
    X86_AT(c, 0x113f5u);
    s8(c, 1, 0xCu);
    // 0113f7  div cl
    X86_AT(c, 0x113f7u);
    x86_div(c, g8(c, 1), 1, 0x113f7u);
    // 0113f9  movzx ecx, ah
    X86_AT(c, 0x113f9u);
    c.r[1] = g8(c, 4);
    // 0113fc  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x113fcu);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
L_11405:
    X86_TICK(c, 9);
    // 011405  add cx, bp
    X86_AT(c, 0x11405u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[5] & 0xFFFFu), 0, 2)); }
    // 011408  cmp cx, 0x268
    X86_AT(c, 0x11408u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x268u, 0, 2);
    // 01140d  jge 0x11421
    X86_AT(c, 0x1140du);
    if (x86_cc(c, 13)) { goto L_11421; }
    X86_TICK(c, 7);
    // 01140f  test al, al
    X86_AT(c, 0x1140fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011411  jne 0x11419
    X86_AT(c, 0x11411u);
    if (x86_cc(c, 5)) { goto L_11419; }
    X86_TICK(c, 9);
    // 011413  mov cx, 0x268
    X86_AT(c, 0x11413u);
    s16(c, 1, 0x268u);
    // 011417  jmp 0x11438
    X86_AT(c, 0x11417u);
    goto L_11438;
L_11419:
    X86_TICK(c, 11);
    // 011419  add cx, 0x268
    X86_AT(c, 0x11419u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x268u, 0, 2)); }
    // 01141e  dec eax
    X86_AT(c, 0x1141eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 01141f  jmp 0x11438
    X86_AT(c, 0x1141fu);
    goto L_11438;
L_11421:
    X86_TICK(c, 7);
    // 011421  cmp cx, 0x4d0
    X86_AT(c, 0x11421u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4D0u, 0, 2);
    // 011426  jle 0x11438
    X86_AT(c, 0x11426u);
    if (x86_cc(c, 14)) { goto L_11438; }
    X86_TICK(c, 7);
    // 011428  cmp al, 7
    X86_AT(c, 0x11428u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 01142a  jne 0x11432
    X86_AT(c, 0x1142au);
    if (x86_cc(c, 5)) { goto L_11432; }
    X86_TICK(c, 9);
    // 01142c  mov cx, 0x3c8c
    X86_AT(c, 0x1142cu);
    s16(c, 1, 0x3C8Cu);
    // 011430  jmp 0x11438
    X86_AT(c, 0x11430u);
    goto L_11438;
L_11432:
    X86_TICK(c, 4);
    // 011432  sub cx, 0x268
    X86_AT(c, 0x11432u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x268u, 0, 2)); }
    // 011437  inc eax
    X86_AT(c, 0x11437u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_11438:
    X86_TICK(c, 18);
    // 011438  shl al, 3
    X86_AT(c, 0x11438u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 0, r); }
    // 01143b  or ch, al
    X86_AT(c, 0x1143bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | g8(c, 0), 1)); }
    // 01143d  mov ah, 0xa4
    X86_AT(c, 0x1143du);
    s8(c, 4, 0xA4u);
    // 01143f  add ah, bl
    X86_AT(c, 0x1143fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011441  mov al, ch
    X86_AT(c, 0x11441u);
    s8(c, 0, g8(c, 5));
    // 011443  call 0x11bf0
    X86_AT(c, 0x11443u);
    push32(c, 0x11448u); f_00011bf0(c); X86_RET(c, 0x11448u);
    X86_TICK(c, 11);
    // 011448  sub ah, 4
    X86_AT(c, 0x11448u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x4u, 0, 1)); }
    // 01144b  mov al, cl
    X86_AT(c, 0x1144bu);
    s8(c, 0, g8(c, 1));
    // 01144d  call 0x11bf0
    X86_AT(c, 0x1144du);
    push32(c, 0x11452u); f_00011bf0(c); X86_RET(c, 0x11452u);
    X86_TICK(c, 28);
    // 011452  mov ecx, esi
    X86_AT(c, 0x11452u);
    c.r[1] = c.r[6];
    // 011454  shr cl, 2
    X86_AT(c, 0x11454u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 011457  add cl, 0x60
    X86_AT(c, 0x11457u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x60u, 0, 1)); }
    // 01145a  mov esi, ebx
    X86_AT(c, 0x1145au);
    c.r[6] = c.r[3];
    // 01145c  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x1145cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 011464  and eax, 7
    X86_AT(c, 0x11464u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 011469  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x11469u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 011470  mov byte ptr gs:[edi + esi*1 + 0xe0], cl
    X86_AT(c, 0x11470u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u)), g8(c, 1));
    // 011478  add bh, bh
    X86_AT(c, 0x11478u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 01147a  jae 0x114a3
    X86_AT(c, 0x1147au);
    if (x86_cc(c, 3)) { goto L_114a3; }
    X86_TICK(c, 73);
    // 01147c  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x1147cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 011484  xor al, 0x7f
    X86_AT(c, 0x11484u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011486  mul cl
    X86_AT(c, 0x11486u);
    x86_mul(c, g8(c, 1), 1);
    // 011488  shr eax, 7
    X86_AT(c, 0x11488u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01148b  inc eax
    X86_AT(c, 0x1148bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01148c  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1148cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011494  shr eax, 7
    X86_AT(c, 0x11494u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011497  inc eax
    X86_AT(c, 0x11497u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011498  xor al, 0x7f
    X86_AT(c, 0x11498u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01149a  mov ah, 0x40
    X86_AT(c, 0x1149au);
    s8(c, 4, 0x40u);
    // 01149c  add ah, bl
    X86_AT(c, 0x1149cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01149e  call 0x11bf0
    X86_AT(c, 0x1149eu);
    push32(c, 0x114a3u); f_00011bf0(c); X86_RET(c, 0x114a3u);
L_114a3:
    X86_TICK(c, 7);
    // 0114a3  add bh, bh
    X86_AT(c, 0x114a3u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114a5  jae 0x114ce
    X86_AT(c, 0x114a5u);
    if (x86_cc(c, 3)) { goto L_114ce; }
    X86_TICK(c, 73);
    // 0114a7  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x114a7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 0114af  xor al, 0x7f
    X86_AT(c, 0x114afu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114b1  mul cl
    X86_AT(c, 0x114b1u);
    x86_mul(c, g8(c, 1), 1);
    // 0114b3  shr eax, 7
    X86_AT(c, 0x114b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114b6  inc eax
    X86_AT(c, 0x114b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114b7  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114b7u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114bf  shr eax, 7
    X86_AT(c, 0x114bfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114c2  inc eax
    X86_AT(c, 0x114c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114c3  xor al, 0x7f
    X86_AT(c, 0x114c3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114c5  mov ah, 0x44
    X86_AT(c, 0x114c5u);
    s8(c, 4, 0x44u);
    // 0114c7  add ah, bl
    X86_AT(c, 0x114c7u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114c9  call 0x11bf0
    X86_AT(c, 0x114c9u);
    push32(c, 0x114ceu); f_00011bf0(c); X86_RET(c, 0x114ceu);
L_114ce:
    X86_TICK(c, 7);
    // 0114ce  add bh, bh
    X86_AT(c, 0x114ceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114d0  jae 0x114f9
    X86_AT(c, 0x114d0u);
    if (x86_cc(c, 3)) { goto L_114f9; }
    X86_TICK(c, 73);
    // 0114d2  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x114d2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 0114da  xor al, 0x7f
    X86_AT(c, 0x114dau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114dc  mul cl
    X86_AT(c, 0x114dcu);
    x86_mul(c, g8(c, 1), 1);
    // 0114de  shr eax, 7
    X86_AT(c, 0x114deu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114e1  inc eax
    X86_AT(c, 0x114e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114e2  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114e2u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114ea  shr eax, 7
    X86_AT(c, 0x114eau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114ed  inc eax
    X86_AT(c, 0x114edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114ee  xor al, 0x7f
    X86_AT(c, 0x114eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114f0  mov ah, 0x48
    X86_AT(c, 0x114f0u);
    s8(c, 4, 0x48u);
    // 0114f2  add ah, bl
    X86_AT(c, 0x114f2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114f4  call 0x11bf0
    X86_AT(c, 0x114f4u);
    push32(c, 0x114f9u); f_00011bf0(c); X86_RET(c, 0x114f9u);
L_114f9:
    X86_TICK(c, 7);
    // 0114f9  add bh, bh
    X86_AT(c, 0x114f9u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114fb  jae 0x11524
    X86_AT(c, 0x114fbu);
    if (x86_cc(c, 3)) { goto L_11524; }
    X86_TICK(c, 73);
    // 0114fd  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x114fdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011505  xor al, 0x7f
    X86_AT(c, 0x11505u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011507  mul cl
    X86_AT(c, 0x11507u);
    x86_mul(c, g8(c, 1), 1);
    // 011509  shr eax, 7
    X86_AT(c, 0x11509u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01150c  inc eax
    X86_AT(c, 0x1150cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01150d  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1150du);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011515  shr eax, 7
    X86_AT(c, 0x11515u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011518  inc eax
    X86_AT(c, 0x11518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011519  xor al, 0x7f
    X86_AT(c, 0x11519u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01151b  mov ah, 0x4c
    X86_AT(c, 0x1151bu);
    s8(c, 4, 0x4Cu);
    // 01151d  add ah, bl
    X86_AT(c, 0x1151du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01151f  call 0x11bf0
    X86_AT(c, 0x1151fu);
    push32(c, 0x11524u); f_00011bf0(c); X86_RET(c, 0x11524u);
L_11524:
    X86_TICK(c, 9);
    // 011524  mov cl, bl
    X86_AT(c, 0x11524u);
    s8(c, 1, g8(c, 3));
    // 011526  cmp dl, 0xd8
    X86_AT(c, 0x11526u);
    (void)x86_sub(c, g8(c, 2), 0xD8u, 0, 1);
    // 011529  je 0x1152e
    X86_AT(c, 0x11529u);
    if (x86_cc(c, 4)) { goto L_1152e; }
    X86_TICK(c, 2);
    // 01152b  add cl, 4
    X86_AT(c, 0x1152bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x4u, 0, 1)); }
L_1152e:
    X86_TICK(c, 21);
    // 01152e  mov ah, 0x80
    X86_AT(c, 0x1152eu);
    s8(c, 4, 0x80u);
    // 011530  add ah, bl
    X86_AT(c, 0x11530u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011532  push edx
    X86_AT(c, 0x11532u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011533  push eax
    X86_AT(c, 0x11533u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011534  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11534u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01153c  or al, 0xf
    X86_AT(c, 0x1153cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 01153e  call 0x11c20
    X86_AT(c, 0x1153eu);
    push32(c, 0x11543u); f_00011c20(c); X86_RET(c, 0x11543u);
    X86_TICK(c, 15);
    // 011543  add ah, 4
    X86_AT(c, 0x11543u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011546  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11546u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01154e  or al, 0xf
    X86_AT(c, 0x1154eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011550  call 0x11c20
    X86_AT(c, 0x11550u);
    push32(c, 0x11555u); f_00011c20(c); X86_RET(c, 0x11555u);
    X86_TICK(c, 15);
    // 011555  add ah, 4
    X86_AT(c, 0x11555u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011558  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x11558u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 011560  or al, 0xf
    X86_AT(c, 0x11560u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011562  call 0x11c20
    X86_AT(c, 0x11562u);
    push32(c, 0x11567u); f_00011c20(c); X86_RET(c, 0x11567u);
    X86_TICK(c, 15);
    // 011567  add ah, 4
    X86_AT(c, 0x11567u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01156a  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x1156au);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 011572  or al, 0xf
    X86_AT(c, 0x11572u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011574  call 0x11c20
    X86_AT(c, 0x11574u);
    push32(c, 0x11579u); f_00011c20(c); X86_RET(c, 0x11579u);
    X86_TICK(c, 13);
    // 011579  mov dl, 0xd8
    X86_AT(c, 0x11579u);
    s8(c, 2, 0xD8u);
    // 01157b  mov al, cl
    X86_AT(c, 0x1157bu);
    s8(c, 0, g8(c, 1));
    // 01157d  mov ah, 0x28
    X86_AT(c, 0x1157du);
    s8(c, 4, 0x28u);
    // 01157f  call 0x11c20
    X86_AT(c, 0x1157fu);
    push32(c, 0x11584u); f_00011c20(c); X86_RET(c, 0x11584u);
    X86_TICK(c, 19);
    // 011584  pop eax
    X86_AT(c, 0x11584u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011585  pop edx
    X86_AT(c, 0x11585u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011586  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11586u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01158e  call 0x11c20
    X86_AT(c, 0x1158eu);
    push32(c, 0x11593u); f_00011c20(c); X86_RET(c, 0x11593u);
    X86_TICK(c, 13);
    // 011593  add ah, 4
    X86_AT(c, 0x11593u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011596  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11596u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01159e  call 0x11c20
    X86_AT(c, 0x1159eu);
    push32(c, 0x115a3u); f_00011c20(c); X86_RET(c, 0x115a3u);
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
L_13553:
    X86_TICK(c, 36);
    // 013553  popal 
    X86_AT(c, 0x13553u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 013554  mov al, 2
    X86_AT(c, 0x13554u);
    s8(c, 0, 0x2u);
    // 013556  ret 
    X86_AT(c, 0x13556u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11389u, "ran off the end of a function");
}
void f_0001138f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01138f  test dl, 0x80
    X86_AT(c, 0x1138fu);
    (void)x86_logic(c, g8(c, 2) & 0x80u, 1);
    // 011392  jne 0x13557
    X86_AT(c, 0x11392u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 37);
    // 011398  pushal 
    X86_AT(c, 0x11398u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011399  movzx ebx, bl
    X86_AT(c, 0x11399u);
    c.r[3] = g8(c, 3);
    // 01139c  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x1139cu);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0113a3  test byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113a3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u))) & g8(c, 5), 1);
    // 0113aa  jne 0x13553
    X86_AT(c, 0x113aau);
    if (x86_cc(c, 5)) { goto L_13553; }
    X86_TICK(c, 30);
    // 0113b0  or byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 0113b7  sub dh, 0xc
    X86_AT(c, 0x113b7u);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_sub(c, v, 0xCu, 0, 1)); }
    // 0113ba  mov byte ptr gs:[edi + ebx*1 + 0x1e0], dh
    X86_AT(c, 0x113bau);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1E0u)), g8(c, 6));
    // 0113c2  mov bp, word ptr gs:[edi + ebx*2 + 0x1e8]
    X86_AT(c, 0x113c2u);
    s16(c, 5, rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1E8u))));
    // 0113cb  movzx esi, dl
    X86_AT(c, 0x113cbu);
    c.r[6] = g8(c, 2);
    // 0113ce  movzx ecx, dh
    X86_AT(c, 0x113ceu);
    c.r[1] = g8(c, 6);
    // 0113d1  mov dx, 0x4d8
    X86_AT(c, 0x113d1u);
    s16(c, 2, 0x4D8u);
    // 0113d5  cmp bl, 2
    X86_AT(c, 0x113d5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0113d8  jbe 0x113e6
    X86_AT(c, 0x113d8u);
    if (x86_cc(c, 6)) { goto L_113e6; }
    X86_TICK(c, 6);
    // 0113da  add dl, 4
    X86_AT(c, 0x113dau);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0113dd  add edi, 0xf0
    X86_AT(c, 0x113ddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0113e3  sub bl, 3
    X86_AT(c, 0x113e3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_113e6:
    X86_TICK(c, 7);
    // 0113e6  test cl, cl
    X86_AT(c, 0x113e6u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 0113e8  jne 0x113f2
    X86_AT(c, 0x113e8u);
    if (x86_cc(c, 5)) { goto L_113f2; }
    X86_TICK(c, 11);
    // 0113ea  mov cx, 0x268
    X86_AT(c, 0x113eau);
    s16(c, 1, 0x268u);
    // 0113ee  xor al, al
    X86_AT(c, 0x113eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0113f0  jmp 0x11405
    X86_AT(c, 0x113f0u);
    goto L_11405;
L_113f2:
    X86_TICK(c, 53);
    // 0113f2  mov eax, ecx
    X86_AT(c, 0x113f2u);
    c.r[0] = c.r[1];
    // 0113f4  dec eax
    X86_AT(c, 0x113f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0113f5  mov cl, 0xc
    X86_AT(c, 0x113f5u);
    s8(c, 1, 0xCu);
    // 0113f7  div cl
    X86_AT(c, 0x113f7u);
    x86_div(c, g8(c, 1), 1, 0x113f7u);
    // 0113f9  movzx ecx, ah
    X86_AT(c, 0x113f9u);
    c.r[1] = g8(c, 4);
    // 0113fc  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x113fcu);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
L_11405:
    X86_TICK(c, 9);
    // 011405  add cx, bp
    X86_AT(c, 0x11405u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[5] & 0xFFFFu), 0, 2)); }
    // 011408  cmp cx, 0x268
    X86_AT(c, 0x11408u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x268u, 0, 2);
    // 01140d  jge 0x11421
    X86_AT(c, 0x1140du);
    if (x86_cc(c, 13)) { goto L_11421; }
    X86_TICK(c, 7);
    // 01140f  test al, al
    X86_AT(c, 0x1140fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011411  jne 0x11419
    X86_AT(c, 0x11411u);
    if (x86_cc(c, 5)) { goto L_11419; }
    X86_TICK(c, 9);
    // 011413  mov cx, 0x268
    X86_AT(c, 0x11413u);
    s16(c, 1, 0x268u);
    // 011417  jmp 0x11438
    X86_AT(c, 0x11417u);
    goto L_11438;
L_11419:
    X86_TICK(c, 11);
    // 011419  add cx, 0x268
    X86_AT(c, 0x11419u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x268u, 0, 2)); }
    // 01141e  dec eax
    X86_AT(c, 0x1141eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 01141f  jmp 0x11438
    X86_AT(c, 0x1141fu);
    goto L_11438;
L_11421:
    X86_TICK(c, 7);
    // 011421  cmp cx, 0x4d0
    X86_AT(c, 0x11421u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4D0u, 0, 2);
    // 011426  jle 0x11438
    X86_AT(c, 0x11426u);
    if (x86_cc(c, 14)) { goto L_11438; }
    X86_TICK(c, 7);
    // 011428  cmp al, 7
    X86_AT(c, 0x11428u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 01142a  jne 0x11432
    X86_AT(c, 0x1142au);
    if (x86_cc(c, 5)) { goto L_11432; }
    X86_TICK(c, 9);
    // 01142c  mov cx, 0x3c8c
    X86_AT(c, 0x1142cu);
    s16(c, 1, 0x3C8Cu);
    // 011430  jmp 0x11438
    X86_AT(c, 0x11430u);
    goto L_11438;
L_11432:
    X86_TICK(c, 4);
    // 011432  sub cx, 0x268
    X86_AT(c, 0x11432u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x268u, 0, 2)); }
    // 011437  inc eax
    X86_AT(c, 0x11437u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_11438:
    X86_TICK(c, 18);
    // 011438  shl al, 3
    X86_AT(c, 0x11438u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 0, r); }
    // 01143b  or ch, al
    X86_AT(c, 0x1143bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | g8(c, 0), 1)); }
    // 01143d  mov ah, 0xa4
    X86_AT(c, 0x1143du);
    s8(c, 4, 0xA4u);
    // 01143f  add ah, bl
    X86_AT(c, 0x1143fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011441  mov al, ch
    X86_AT(c, 0x11441u);
    s8(c, 0, g8(c, 5));
    // 011443  call 0x11bf0
    X86_AT(c, 0x11443u);
    push32(c, 0x11448u); f_00011bf0(c); X86_RET(c, 0x11448u);
    X86_TICK(c, 11);
    // 011448  sub ah, 4
    X86_AT(c, 0x11448u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x4u, 0, 1)); }
    // 01144b  mov al, cl
    X86_AT(c, 0x1144bu);
    s8(c, 0, g8(c, 1));
    // 01144d  call 0x11bf0
    X86_AT(c, 0x1144du);
    push32(c, 0x11452u); f_00011bf0(c); X86_RET(c, 0x11452u);
    X86_TICK(c, 28);
    // 011452  mov ecx, esi
    X86_AT(c, 0x11452u);
    c.r[1] = c.r[6];
    // 011454  shr cl, 2
    X86_AT(c, 0x11454u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 011457  add cl, 0x60
    X86_AT(c, 0x11457u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x60u, 0, 1)); }
    // 01145a  mov esi, ebx
    X86_AT(c, 0x1145au);
    c.r[6] = c.r[3];
    // 01145c  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x1145cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 011464  and eax, 7
    X86_AT(c, 0x11464u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 011469  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x11469u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 011470  mov byte ptr gs:[edi + esi*1 + 0xe0], cl
    X86_AT(c, 0x11470u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u)), g8(c, 1));
    // 011478  add bh, bh
    X86_AT(c, 0x11478u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 01147a  jae 0x114a3
    X86_AT(c, 0x1147au);
    if (x86_cc(c, 3)) { goto L_114a3; }
    X86_TICK(c, 73);
    // 01147c  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x1147cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 011484  xor al, 0x7f
    X86_AT(c, 0x11484u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011486  mul cl
    X86_AT(c, 0x11486u);
    x86_mul(c, g8(c, 1), 1);
    // 011488  shr eax, 7
    X86_AT(c, 0x11488u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01148b  inc eax
    X86_AT(c, 0x1148bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01148c  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1148cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011494  shr eax, 7
    X86_AT(c, 0x11494u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011497  inc eax
    X86_AT(c, 0x11497u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011498  xor al, 0x7f
    X86_AT(c, 0x11498u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01149a  mov ah, 0x40
    X86_AT(c, 0x1149au);
    s8(c, 4, 0x40u);
    // 01149c  add ah, bl
    X86_AT(c, 0x1149cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01149e  call 0x11bf0
    X86_AT(c, 0x1149eu);
    push32(c, 0x114a3u); f_00011bf0(c); X86_RET(c, 0x114a3u);
L_114a3:
    X86_TICK(c, 7);
    // 0114a3  add bh, bh
    X86_AT(c, 0x114a3u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114a5  jae 0x114ce
    X86_AT(c, 0x114a5u);
    if (x86_cc(c, 3)) { goto L_114ce; }
    X86_TICK(c, 73);
    // 0114a7  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x114a7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 0114af  xor al, 0x7f
    X86_AT(c, 0x114afu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114b1  mul cl
    X86_AT(c, 0x114b1u);
    x86_mul(c, g8(c, 1), 1);
    // 0114b3  shr eax, 7
    X86_AT(c, 0x114b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114b6  inc eax
    X86_AT(c, 0x114b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114b7  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114b7u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114bf  shr eax, 7
    X86_AT(c, 0x114bfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114c2  inc eax
    X86_AT(c, 0x114c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114c3  xor al, 0x7f
    X86_AT(c, 0x114c3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114c5  mov ah, 0x44
    X86_AT(c, 0x114c5u);
    s8(c, 4, 0x44u);
    // 0114c7  add ah, bl
    X86_AT(c, 0x114c7u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114c9  call 0x11bf0
    X86_AT(c, 0x114c9u);
    push32(c, 0x114ceu); f_00011bf0(c); X86_RET(c, 0x114ceu);
L_114ce:
    X86_TICK(c, 7);
    // 0114ce  add bh, bh
    X86_AT(c, 0x114ceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114d0  jae 0x114f9
    X86_AT(c, 0x114d0u);
    if (x86_cc(c, 3)) { goto L_114f9; }
    X86_TICK(c, 73);
    // 0114d2  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x114d2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 0114da  xor al, 0x7f
    X86_AT(c, 0x114dau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114dc  mul cl
    X86_AT(c, 0x114dcu);
    x86_mul(c, g8(c, 1), 1);
    // 0114de  shr eax, 7
    X86_AT(c, 0x114deu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114e1  inc eax
    X86_AT(c, 0x114e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114e2  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114e2u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114ea  shr eax, 7
    X86_AT(c, 0x114eau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114ed  inc eax
    X86_AT(c, 0x114edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114ee  xor al, 0x7f
    X86_AT(c, 0x114eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114f0  mov ah, 0x48
    X86_AT(c, 0x114f0u);
    s8(c, 4, 0x48u);
    // 0114f2  add ah, bl
    X86_AT(c, 0x114f2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114f4  call 0x11bf0
    X86_AT(c, 0x114f4u);
    push32(c, 0x114f9u); f_00011bf0(c); X86_RET(c, 0x114f9u);
L_114f9:
    X86_TICK(c, 7);
    // 0114f9  add bh, bh
    X86_AT(c, 0x114f9u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114fb  jae 0x11524
    X86_AT(c, 0x114fbu);
    if (x86_cc(c, 3)) { goto L_11524; }
    X86_TICK(c, 73);
    // 0114fd  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x114fdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011505  xor al, 0x7f
    X86_AT(c, 0x11505u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011507  mul cl
    X86_AT(c, 0x11507u);
    x86_mul(c, g8(c, 1), 1);
    // 011509  shr eax, 7
    X86_AT(c, 0x11509u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01150c  inc eax
    X86_AT(c, 0x1150cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01150d  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1150du);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011515  shr eax, 7
    X86_AT(c, 0x11515u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011518  inc eax
    X86_AT(c, 0x11518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011519  xor al, 0x7f
    X86_AT(c, 0x11519u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01151b  mov ah, 0x4c
    X86_AT(c, 0x1151bu);
    s8(c, 4, 0x4Cu);
    // 01151d  add ah, bl
    X86_AT(c, 0x1151du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01151f  call 0x11bf0
    X86_AT(c, 0x1151fu);
    push32(c, 0x11524u); f_00011bf0(c); X86_RET(c, 0x11524u);
L_11524:
    X86_TICK(c, 9);
    // 011524  mov cl, bl
    X86_AT(c, 0x11524u);
    s8(c, 1, g8(c, 3));
    // 011526  cmp dl, 0xd8
    X86_AT(c, 0x11526u);
    (void)x86_sub(c, g8(c, 2), 0xD8u, 0, 1);
    // 011529  je 0x1152e
    X86_AT(c, 0x11529u);
    if (x86_cc(c, 4)) { goto L_1152e; }
    X86_TICK(c, 2);
    // 01152b  add cl, 4
    X86_AT(c, 0x1152bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x4u, 0, 1)); }
L_1152e:
    X86_TICK(c, 21);
    // 01152e  mov ah, 0x80
    X86_AT(c, 0x1152eu);
    s8(c, 4, 0x80u);
    // 011530  add ah, bl
    X86_AT(c, 0x11530u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011532  push edx
    X86_AT(c, 0x11532u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011533  push eax
    X86_AT(c, 0x11533u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011534  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11534u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01153c  or al, 0xf
    X86_AT(c, 0x1153cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 01153e  call 0x11c20
    X86_AT(c, 0x1153eu);
    push32(c, 0x11543u); f_00011c20(c); X86_RET(c, 0x11543u);
    X86_TICK(c, 15);
    // 011543  add ah, 4
    X86_AT(c, 0x11543u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011546  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11546u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01154e  or al, 0xf
    X86_AT(c, 0x1154eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011550  call 0x11c20
    X86_AT(c, 0x11550u);
    push32(c, 0x11555u); f_00011c20(c); X86_RET(c, 0x11555u);
    X86_TICK(c, 15);
    // 011555  add ah, 4
    X86_AT(c, 0x11555u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011558  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x11558u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 011560  or al, 0xf
    X86_AT(c, 0x11560u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011562  call 0x11c20
    X86_AT(c, 0x11562u);
    push32(c, 0x11567u); f_00011c20(c); X86_RET(c, 0x11567u);
    X86_TICK(c, 15);
    // 011567  add ah, 4
    X86_AT(c, 0x11567u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01156a  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x1156au);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 011572  or al, 0xf
    X86_AT(c, 0x11572u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011574  call 0x11c20
    X86_AT(c, 0x11574u);
    push32(c, 0x11579u); f_00011c20(c); X86_RET(c, 0x11579u);
    X86_TICK(c, 13);
    // 011579  mov dl, 0xd8
    X86_AT(c, 0x11579u);
    s8(c, 2, 0xD8u);
    // 01157b  mov al, cl
    X86_AT(c, 0x1157bu);
    s8(c, 0, g8(c, 1));
    // 01157d  mov ah, 0x28
    X86_AT(c, 0x1157du);
    s8(c, 4, 0x28u);
    // 01157f  call 0x11c20
    X86_AT(c, 0x1157fu);
    push32(c, 0x11584u); f_00011c20(c); X86_RET(c, 0x11584u);
    X86_TICK(c, 19);
    // 011584  pop eax
    X86_AT(c, 0x11584u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011585  pop edx
    X86_AT(c, 0x11585u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011586  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11586u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01158e  call 0x11c20
    X86_AT(c, 0x1158eu);
    push32(c, 0x11593u); f_00011c20(c); X86_RET(c, 0x11593u);
    X86_TICK(c, 13);
    // 011593  add ah, 4
    X86_AT(c, 0x11593u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011596  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11596u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01159e  call 0x11c20
    X86_AT(c, 0x1159eu);
    push32(c, 0x115a3u); f_00011c20(c); X86_RET(c, 0x115a3u);
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
L_13553:
    X86_TICK(c, 36);
    // 013553  popal 
    X86_AT(c, 0x13553u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 013554  mov al, 2
    X86_AT(c, 0x13554u);
    s8(c, 0, 0x2u);
    // 013556  ret 
    X86_AT(c, 0x13556u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1138fu, "ran off the end of a function");
}
void f_00011392(X86Cpu& c) {
    X86_TICK(c, 5);
    // 011392  jne 0x13557
    X86_AT(c, 0x11392u);
    if (x86_cc(c, 5)) { goto L_13557; }
    X86_TICK(c, 37);
    // 011398  pushal 
    X86_AT(c, 0x11398u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011399  movzx ebx, bl
    X86_AT(c, 0x11399u);
    c.r[3] = g8(c, 3);
    // 01139c  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x1139cu);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0113a3  test byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113a3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u))) & g8(c, 5), 1);
    // 0113aa  jne 0x13553
    X86_AT(c, 0x113aau);
    if (x86_cc(c, 5)) { goto L_13553; }
    X86_TICK(c, 30);
    // 0113b0  or byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 0113b7  sub dh, 0xc
    X86_AT(c, 0x113b7u);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_sub(c, v, 0xCu, 0, 1)); }
    // 0113ba  mov byte ptr gs:[edi + ebx*1 + 0x1e0], dh
    X86_AT(c, 0x113bau);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1E0u)), g8(c, 6));
    // 0113c2  mov bp, word ptr gs:[edi + ebx*2 + 0x1e8]
    X86_AT(c, 0x113c2u);
    s16(c, 5, rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1E8u))));
    // 0113cb  movzx esi, dl
    X86_AT(c, 0x113cbu);
    c.r[6] = g8(c, 2);
    // 0113ce  movzx ecx, dh
    X86_AT(c, 0x113ceu);
    c.r[1] = g8(c, 6);
    // 0113d1  mov dx, 0x4d8
    X86_AT(c, 0x113d1u);
    s16(c, 2, 0x4D8u);
    // 0113d5  cmp bl, 2
    X86_AT(c, 0x113d5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0113d8  jbe 0x113e6
    X86_AT(c, 0x113d8u);
    if (x86_cc(c, 6)) { goto L_113e6; }
    X86_TICK(c, 6);
    // 0113da  add dl, 4
    X86_AT(c, 0x113dau);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0113dd  add edi, 0xf0
    X86_AT(c, 0x113ddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0113e3  sub bl, 3
    X86_AT(c, 0x113e3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_113e6:
    X86_TICK(c, 7);
    // 0113e6  test cl, cl
    X86_AT(c, 0x113e6u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 0113e8  jne 0x113f2
    X86_AT(c, 0x113e8u);
    if (x86_cc(c, 5)) { goto L_113f2; }
    X86_TICK(c, 11);
    // 0113ea  mov cx, 0x268
    X86_AT(c, 0x113eau);
    s16(c, 1, 0x268u);
    // 0113ee  xor al, al
    X86_AT(c, 0x113eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0113f0  jmp 0x11405
    X86_AT(c, 0x113f0u);
    goto L_11405;
L_113f2:
    X86_TICK(c, 53);
    // 0113f2  mov eax, ecx
    X86_AT(c, 0x113f2u);
    c.r[0] = c.r[1];
    // 0113f4  dec eax
    X86_AT(c, 0x113f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0113f5  mov cl, 0xc
    X86_AT(c, 0x113f5u);
    s8(c, 1, 0xCu);
    // 0113f7  div cl
    X86_AT(c, 0x113f7u);
    x86_div(c, g8(c, 1), 1, 0x113f7u);
    // 0113f9  movzx ecx, ah
    X86_AT(c, 0x113f9u);
    c.r[1] = g8(c, 4);
    // 0113fc  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x113fcu);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
L_11405:
    X86_TICK(c, 9);
    // 011405  add cx, bp
    X86_AT(c, 0x11405u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[5] & 0xFFFFu), 0, 2)); }
    // 011408  cmp cx, 0x268
    X86_AT(c, 0x11408u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x268u, 0, 2);
    // 01140d  jge 0x11421
    X86_AT(c, 0x1140du);
    if (x86_cc(c, 13)) { goto L_11421; }
    X86_TICK(c, 7);
    // 01140f  test al, al
    X86_AT(c, 0x1140fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011411  jne 0x11419
    X86_AT(c, 0x11411u);
    if (x86_cc(c, 5)) { goto L_11419; }
    X86_TICK(c, 9);
    // 011413  mov cx, 0x268
    X86_AT(c, 0x11413u);
    s16(c, 1, 0x268u);
    // 011417  jmp 0x11438
    X86_AT(c, 0x11417u);
    goto L_11438;
L_11419:
    X86_TICK(c, 11);
    // 011419  add cx, 0x268
    X86_AT(c, 0x11419u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x268u, 0, 2)); }
    // 01141e  dec eax
    X86_AT(c, 0x1141eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 01141f  jmp 0x11438
    X86_AT(c, 0x1141fu);
    goto L_11438;
L_11421:
    X86_TICK(c, 7);
    // 011421  cmp cx, 0x4d0
    X86_AT(c, 0x11421u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4D0u, 0, 2);
    // 011426  jle 0x11438
    X86_AT(c, 0x11426u);
    if (x86_cc(c, 14)) { goto L_11438; }
    X86_TICK(c, 7);
    // 011428  cmp al, 7
    X86_AT(c, 0x11428u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 01142a  jne 0x11432
    X86_AT(c, 0x1142au);
    if (x86_cc(c, 5)) { goto L_11432; }
    X86_TICK(c, 9);
    // 01142c  mov cx, 0x3c8c
    X86_AT(c, 0x1142cu);
    s16(c, 1, 0x3C8Cu);
    // 011430  jmp 0x11438
    X86_AT(c, 0x11430u);
    goto L_11438;
L_11432:
    X86_TICK(c, 4);
    // 011432  sub cx, 0x268
    X86_AT(c, 0x11432u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x268u, 0, 2)); }
    // 011437  inc eax
    X86_AT(c, 0x11437u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_11438:
    X86_TICK(c, 18);
    // 011438  shl al, 3
    X86_AT(c, 0x11438u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 0, r); }
    // 01143b  or ch, al
    X86_AT(c, 0x1143bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | g8(c, 0), 1)); }
    // 01143d  mov ah, 0xa4
    X86_AT(c, 0x1143du);
    s8(c, 4, 0xA4u);
    // 01143f  add ah, bl
    X86_AT(c, 0x1143fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011441  mov al, ch
    X86_AT(c, 0x11441u);
    s8(c, 0, g8(c, 5));
    // 011443  call 0x11bf0
    X86_AT(c, 0x11443u);
    push32(c, 0x11448u); f_00011bf0(c); X86_RET(c, 0x11448u);
    X86_TICK(c, 11);
    // 011448  sub ah, 4
    X86_AT(c, 0x11448u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x4u, 0, 1)); }
    // 01144b  mov al, cl
    X86_AT(c, 0x1144bu);
    s8(c, 0, g8(c, 1));
    // 01144d  call 0x11bf0
    X86_AT(c, 0x1144du);
    push32(c, 0x11452u); f_00011bf0(c); X86_RET(c, 0x11452u);
    X86_TICK(c, 28);
    // 011452  mov ecx, esi
    X86_AT(c, 0x11452u);
    c.r[1] = c.r[6];
    // 011454  shr cl, 2
    X86_AT(c, 0x11454u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 011457  add cl, 0x60
    X86_AT(c, 0x11457u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x60u, 0, 1)); }
    // 01145a  mov esi, ebx
    X86_AT(c, 0x1145au);
    c.r[6] = c.r[3];
    // 01145c  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x1145cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 011464  and eax, 7
    X86_AT(c, 0x11464u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 011469  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x11469u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 011470  mov byte ptr gs:[edi + esi*1 + 0xe0], cl
    X86_AT(c, 0x11470u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u)), g8(c, 1));
    // 011478  add bh, bh
    X86_AT(c, 0x11478u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 01147a  jae 0x114a3
    X86_AT(c, 0x1147au);
    if (x86_cc(c, 3)) { goto L_114a3; }
    X86_TICK(c, 73);
    // 01147c  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x1147cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 011484  xor al, 0x7f
    X86_AT(c, 0x11484u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011486  mul cl
    X86_AT(c, 0x11486u);
    x86_mul(c, g8(c, 1), 1);
    // 011488  shr eax, 7
    X86_AT(c, 0x11488u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01148b  inc eax
    X86_AT(c, 0x1148bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01148c  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1148cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011494  shr eax, 7
    X86_AT(c, 0x11494u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011497  inc eax
    X86_AT(c, 0x11497u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011498  xor al, 0x7f
    X86_AT(c, 0x11498u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01149a  mov ah, 0x40
    X86_AT(c, 0x1149au);
    s8(c, 4, 0x40u);
    // 01149c  add ah, bl
    X86_AT(c, 0x1149cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01149e  call 0x11bf0
    X86_AT(c, 0x1149eu);
    push32(c, 0x114a3u); f_00011bf0(c); X86_RET(c, 0x114a3u);
L_114a3:
    X86_TICK(c, 7);
    // 0114a3  add bh, bh
    X86_AT(c, 0x114a3u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114a5  jae 0x114ce
    X86_AT(c, 0x114a5u);
    if (x86_cc(c, 3)) { goto L_114ce; }
    X86_TICK(c, 73);
    // 0114a7  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x114a7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 0114af  xor al, 0x7f
    X86_AT(c, 0x114afu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114b1  mul cl
    X86_AT(c, 0x114b1u);
    x86_mul(c, g8(c, 1), 1);
    // 0114b3  shr eax, 7
    X86_AT(c, 0x114b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114b6  inc eax
    X86_AT(c, 0x114b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114b7  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114b7u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114bf  shr eax, 7
    X86_AT(c, 0x114bfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114c2  inc eax
    X86_AT(c, 0x114c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114c3  xor al, 0x7f
    X86_AT(c, 0x114c3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114c5  mov ah, 0x44
    X86_AT(c, 0x114c5u);
    s8(c, 4, 0x44u);
    // 0114c7  add ah, bl
    X86_AT(c, 0x114c7u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114c9  call 0x11bf0
    X86_AT(c, 0x114c9u);
    push32(c, 0x114ceu); f_00011bf0(c); X86_RET(c, 0x114ceu);
L_114ce:
    X86_TICK(c, 7);
    // 0114ce  add bh, bh
    X86_AT(c, 0x114ceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114d0  jae 0x114f9
    X86_AT(c, 0x114d0u);
    if (x86_cc(c, 3)) { goto L_114f9; }
    X86_TICK(c, 73);
    // 0114d2  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x114d2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 0114da  xor al, 0x7f
    X86_AT(c, 0x114dau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114dc  mul cl
    X86_AT(c, 0x114dcu);
    x86_mul(c, g8(c, 1), 1);
    // 0114de  shr eax, 7
    X86_AT(c, 0x114deu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114e1  inc eax
    X86_AT(c, 0x114e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114e2  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114e2u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114ea  shr eax, 7
    X86_AT(c, 0x114eau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114ed  inc eax
    X86_AT(c, 0x114edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114ee  xor al, 0x7f
    X86_AT(c, 0x114eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114f0  mov ah, 0x48
    X86_AT(c, 0x114f0u);
    s8(c, 4, 0x48u);
    // 0114f2  add ah, bl
    X86_AT(c, 0x114f2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114f4  call 0x11bf0
    X86_AT(c, 0x114f4u);
    push32(c, 0x114f9u); f_00011bf0(c); X86_RET(c, 0x114f9u);
L_114f9:
    X86_TICK(c, 7);
    // 0114f9  add bh, bh
    X86_AT(c, 0x114f9u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114fb  jae 0x11524
    X86_AT(c, 0x114fbu);
    if (x86_cc(c, 3)) { goto L_11524; }
    X86_TICK(c, 73);
    // 0114fd  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x114fdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011505  xor al, 0x7f
    X86_AT(c, 0x11505u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011507  mul cl
    X86_AT(c, 0x11507u);
    x86_mul(c, g8(c, 1), 1);
    // 011509  shr eax, 7
    X86_AT(c, 0x11509u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01150c  inc eax
    X86_AT(c, 0x1150cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01150d  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1150du);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011515  shr eax, 7
    X86_AT(c, 0x11515u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011518  inc eax
    X86_AT(c, 0x11518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011519  xor al, 0x7f
    X86_AT(c, 0x11519u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01151b  mov ah, 0x4c
    X86_AT(c, 0x1151bu);
    s8(c, 4, 0x4Cu);
    // 01151d  add ah, bl
    X86_AT(c, 0x1151du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01151f  call 0x11bf0
    X86_AT(c, 0x1151fu);
    push32(c, 0x11524u); f_00011bf0(c); X86_RET(c, 0x11524u);
L_11524:
    X86_TICK(c, 9);
    // 011524  mov cl, bl
    X86_AT(c, 0x11524u);
    s8(c, 1, g8(c, 3));
    // 011526  cmp dl, 0xd8
    X86_AT(c, 0x11526u);
    (void)x86_sub(c, g8(c, 2), 0xD8u, 0, 1);
    // 011529  je 0x1152e
    X86_AT(c, 0x11529u);
    if (x86_cc(c, 4)) { goto L_1152e; }
    X86_TICK(c, 2);
    // 01152b  add cl, 4
    X86_AT(c, 0x1152bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x4u, 0, 1)); }
L_1152e:
    X86_TICK(c, 21);
    // 01152e  mov ah, 0x80
    X86_AT(c, 0x1152eu);
    s8(c, 4, 0x80u);
    // 011530  add ah, bl
    X86_AT(c, 0x11530u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011532  push edx
    X86_AT(c, 0x11532u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011533  push eax
    X86_AT(c, 0x11533u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011534  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11534u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01153c  or al, 0xf
    X86_AT(c, 0x1153cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 01153e  call 0x11c20
    X86_AT(c, 0x1153eu);
    push32(c, 0x11543u); f_00011c20(c); X86_RET(c, 0x11543u);
    X86_TICK(c, 15);
    // 011543  add ah, 4
    X86_AT(c, 0x11543u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011546  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11546u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01154e  or al, 0xf
    X86_AT(c, 0x1154eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011550  call 0x11c20
    X86_AT(c, 0x11550u);
    push32(c, 0x11555u); f_00011c20(c); X86_RET(c, 0x11555u);
    X86_TICK(c, 15);
    // 011555  add ah, 4
    X86_AT(c, 0x11555u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011558  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x11558u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 011560  or al, 0xf
    X86_AT(c, 0x11560u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011562  call 0x11c20
    X86_AT(c, 0x11562u);
    push32(c, 0x11567u); f_00011c20(c); X86_RET(c, 0x11567u);
    X86_TICK(c, 15);
    // 011567  add ah, 4
    X86_AT(c, 0x11567u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01156a  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x1156au);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 011572  or al, 0xf
    X86_AT(c, 0x11572u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011574  call 0x11c20
    X86_AT(c, 0x11574u);
    push32(c, 0x11579u); f_00011c20(c); X86_RET(c, 0x11579u);
    X86_TICK(c, 13);
    // 011579  mov dl, 0xd8
    X86_AT(c, 0x11579u);
    s8(c, 2, 0xD8u);
    // 01157b  mov al, cl
    X86_AT(c, 0x1157bu);
    s8(c, 0, g8(c, 1));
    // 01157d  mov ah, 0x28
    X86_AT(c, 0x1157du);
    s8(c, 4, 0x28u);
    // 01157f  call 0x11c20
    X86_AT(c, 0x1157fu);
    push32(c, 0x11584u); f_00011c20(c); X86_RET(c, 0x11584u);
    X86_TICK(c, 19);
    // 011584  pop eax
    X86_AT(c, 0x11584u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011585  pop edx
    X86_AT(c, 0x11585u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011586  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11586u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01158e  call 0x11c20
    X86_AT(c, 0x1158eu);
    push32(c, 0x11593u); f_00011c20(c); X86_RET(c, 0x11593u);
    X86_TICK(c, 13);
    // 011593  add ah, 4
    X86_AT(c, 0x11593u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011596  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11596u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01159e  call 0x11c20
    X86_AT(c, 0x1159eu);
    push32(c, 0x115a3u); f_00011c20(c); X86_RET(c, 0x115a3u);
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
L_13553:
    X86_TICK(c, 36);
    // 013553  popal 
    X86_AT(c, 0x13553u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 013554  mov al, 2
    X86_AT(c, 0x13554u);
    s8(c, 0, 0x2u);
    // 013556  ret 
    X86_AT(c, 0x13556u);
    c.eip = pop32(c); return;
L_13557:
    X86_TICK(c, 12);
    // 013557  mov al, 3
    X86_AT(c, 0x13557u);
    s8(c, 0, 0x3u);
    // 013559  ret 
    X86_AT(c, 0x13559u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11392u, "ran off the end of a function");
}
void f_00011398(X86Cpu& c) {
    X86_TICK(c, 37);
    // 011398  pushal 
    X86_AT(c, 0x11398u);
    { uint32_t sp = c.r[4]; for (int k = 0; k < 8; ++k) push32(c, k == 4 ? sp : c.r[k]); }
    // 011399  movzx ebx, bl
    X86_AT(c, 0x11399u);
    c.r[3] = g8(c, 3);
    // 01139c  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x1139cu);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0113a3  test byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113a3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u))) & g8(c, 5), 1);
    // 0113aa  jne 0x13553
    X86_AT(c, 0x113aau);
    if (x86_cc(c, 5)) { goto L_13553; }
    X86_TICK(c, 30);
    // 0113b0  or byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 0113b7  sub dh, 0xc
    X86_AT(c, 0x113b7u);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_sub(c, v, 0xCu, 0, 1)); }
    // 0113ba  mov byte ptr gs:[edi + ebx*1 + 0x1e0], dh
    X86_AT(c, 0x113bau);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1E0u)), g8(c, 6));
    // 0113c2  mov bp, word ptr gs:[edi + ebx*2 + 0x1e8]
    X86_AT(c, 0x113c2u);
    s16(c, 5, rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1E8u))));
    // 0113cb  movzx esi, dl
    X86_AT(c, 0x113cbu);
    c.r[6] = g8(c, 2);
    // 0113ce  movzx ecx, dh
    X86_AT(c, 0x113ceu);
    c.r[1] = g8(c, 6);
    // 0113d1  mov dx, 0x4d8
    X86_AT(c, 0x113d1u);
    s16(c, 2, 0x4D8u);
    // 0113d5  cmp bl, 2
    X86_AT(c, 0x113d5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0113d8  jbe 0x113e6
    X86_AT(c, 0x113d8u);
    if (x86_cc(c, 6)) { goto L_113e6; }
    X86_TICK(c, 6);
    // 0113da  add dl, 4
    X86_AT(c, 0x113dau);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0113dd  add edi, 0xf0
    X86_AT(c, 0x113ddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0113e3  sub bl, 3
    X86_AT(c, 0x113e3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_113e6:
    X86_TICK(c, 7);
    // 0113e6  test cl, cl
    X86_AT(c, 0x113e6u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 0113e8  jne 0x113f2
    X86_AT(c, 0x113e8u);
    if (x86_cc(c, 5)) { goto L_113f2; }
    X86_TICK(c, 11);
    // 0113ea  mov cx, 0x268
    X86_AT(c, 0x113eau);
    s16(c, 1, 0x268u);
    // 0113ee  xor al, al
    X86_AT(c, 0x113eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0113f0  jmp 0x11405
    X86_AT(c, 0x113f0u);
    goto L_11405;
L_113f2:
    X86_TICK(c, 53);
    // 0113f2  mov eax, ecx
    X86_AT(c, 0x113f2u);
    c.r[0] = c.r[1];
    // 0113f4  dec eax
    X86_AT(c, 0x113f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0113f5  mov cl, 0xc
    X86_AT(c, 0x113f5u);
    s8(c, 1, 0xCu);
    // 0113f7  div cl
    X86_AT(c, 0x113f7u);
    x86_div(c, g8(c, 1), 1, 0x113f7u);
    // 0113f9  movzx ecx, ah
    X86_AT(c, 0x113f9u);
    c.r[1] = g8(c, 4);
    // 0113fc  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x113fcu);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
L_11405:
    X86_TICK(c, 9);
    // 011405  add cx, bp
    X86_AT(c, 0x11405u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[5] & 0xFFFFu), 0, 2)); }
    // 011408  cmp cx, 0x268
    X86_AT(c, 0x11408u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x268u, 0, 2);
    // 01140d  jge 0x11421
    X86_AT(c, 0x1140du);
    if (x86_cc(c, 13)) { goto L_11421; }
    X86_TICK(c, 7);
    // 01140f  test al, al
    X86_AT(c, 0x1140fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011411  jne 0x11419
    X86_AT(c, 0x11411u);
    if (x86_cc(c, 5)) { goto L_11419; }
    X86_TICK(c, 9);
    // 011413  mov cx, 0x268
    X86_AT(c, 0x11413u);
    s16(c, 1, 0x268u);
    // 011417  jmp 0x11438
    X86_AT(c, 0x11417u);
    goto L_11438;
L_11419:
    X86_TICK(c, 11);
    // 011419  add cx, 0x268
    X86_AT(c, 0x11419u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x268u, 0, 2)); }
    // 01141e  dec eax
    X86_AT(c, 0x1141eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 01141f  jmp 0x11438
    X86_AT(c, 0x1141fu);
    goto L_11438;
L_11421:
    X86_TICK(c, 7);
    // 011421  cmp cx, 0x4d0
    X86_AT(c, 0x11421u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4D0u, 0, 2);
    // 011426  jle 0x11438
    X86_AT(c, 0x11426u);
    if (x86_cc(c, 14)) { goto L_11438; }
    X86_TICK(c, 7);
    // 011428  cmp al, 7
    X86_AT(c, 0x11428u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 01142a  jne 0x11432
    X86_AT(c, 0x1142au);
    if (x86_cc(c, 5)) { goto L_11432; }
    X86_TICK(c, 9);
    // 01142c  mov cx, 0x3c8c
    X86_AT(c, 0x1142cu);
    s16(c, 1, 0x3C8Cu);
    // 011430  jmp 0x11438
    X86_AT(c, 0x11430u);
    goto L_11438;
L_11432:
    X86_TICK(c, 4);
    // 011432  sub cx, 0x268
    X86_AT(c, 0x11432u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x268u, 0, 2)); }
    // 011437  inc eax
    X86_AT(c, 0x11437u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_11438:
    X86_TICK(c, 18);
    // 011438  shl al, 3
    X86_AT(c, 0x11438u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 0, r); }
    // 01143b  or ch, al
    X86_AT(c, 0x1143bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | g8(c, 0), 1)); }
    // 01143d  mov ah, 0xa4
    X86_AT(c, 0x1143du);
    s8(c, 4, 0xA4u);
    // 01143f  add ah, bl
    X86_AT(c, 0x1143fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011441  mov al, ch
    X86_AT(c, 0x11441u);
    s8(c, 0, g8(c, 5));
    // 011443  call 0x11bf0
    X86_AT(c, 0x11443u);
    push32(c, 0x11448u); f_00011bf0(c); X86_RET(c, 0x11448u);
    X86_TICK(c, 11);
    // 011448  sub ah, 4
    X86_AT(c, 0x11448u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x4u, 0, 1)); }
    // 01144b  mov al, cl
    X86_AT(c, 0x1144bu);
    s8(c, 0, g8(c, 1));
    // 01144d  call 0x11bf0
    X86_AT(c, 0x1144du);
    push32(c, 0x11452u); f_00011bf0(c); X86_RET(c, 0x11452u);
    X86_TICK(c, 28);
    // 011452  mov ecx, esi
    X86_AT(c, 0x11452u);
    c.r[1] = c.r[6];
    // 011454  shr cl, 2
    X86_AT(c, 0x11454u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 011457  add cl, 0x60
    X86_AT(c, 0x11457u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x60u, 0, 1)); }
    // 01145a  mov esi, ebx
    X86_AT(c, 0x1145au);
    c.r[6] = c.r[3];
    // 01145c  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x1145cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 011464  and eax, 7
    X86_AT(c, 0x11464u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 011469  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x11469u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 011470  mov byte ptr gs:[edi + esi*1 + 0xe0], cl
    X86_AT(c, 0x11470u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u)), g8(c, 1));
    // 011478  add bh, bh
    X86_AT(c, 0x11478u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 01147a  jae 0x114a3
    X86_AT(c, 0x1147au);
    if (x86_cc(c, 3)) { goto L_114a3; }
    X86_TICK(c, 73);
    // 01147c  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x1147cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 011484  xor al, 0x7f
    X86_AT(c, 0x11484u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011486  mul cl
    X86_AT(c, 0x11486u);
    x86_mul(c, g8(c, 1), 1);
    // 011488  shr eax, 7
    X86_AT(c, 0x11488u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01148b  inc eax
    X86_AT(c, 0x1148bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01148c  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1148cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011494  shr eax, 7
    X86_AT(c, 0x11494u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011497  inc eax
    X86_AT(c, 0x11497u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011498  xor al, 0x7f
    X86_AT(c, 0x11498u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01149a  mov ah, 0x40
    X86_AT(c, 0x1149au);
    s8(c, 4, 0x40u);
    // 01149c  add ah, bl
    X86_AT(c, 0x1149cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01149e  call 0x11bf0
    X86_AT(c, 0x1149eu);
    push32(c, 0x114a3u); f_00011bf0(c); X86_RET(c, 0x114a3u);
L_114a3:
    X86_TICK(c, 7);
    // 0114a3  add bh, bh
    X86_AT(c, 0x114a3u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114a5  jae 0x114ce
    X86_AT(c, 0x114a5u);
    if (x86_cc(c, 3)) { goto L_114ce; }
    X86_TICK(c, 73);
    // 0114a7  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x114a7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 0114af  xor al, 0x7f
    X86_AT(c, 0x114afu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114b1  mul cl
    X86_AT(c, 0x114b1u);
    x86_mul(c, g8(c, 1), 1);
    // 0114b3  shr eax, 7
    X86_AT(c, 0x114b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114b6  inc eax
    X86_AT(c, 0x114b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114b7  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114b7u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114bf  shr eax, 7
    X86_AT(c, 0x114bfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114c2  inc eax
    X86_AT(c, 0x114c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114c3  xor al, 0x7f
    X86_AT(c, 0x114c3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114c5  mov ah, 0x44
    X86_AT(c, 0x114c5u);
    s8(c, 4, 0x44u);
    // 0114c7  add ah, bl
    X86_AT(c, 0x114c7u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114c9  call 0x11bf0
    X86_AT(c, 0x114c9u);
    push32(c, 0x114ceu); f_00011bf0(c); X86_RET(c, 0x114ceu);
L_114ce:
    X86_TICK(c, 7);
    // 0114ce  add bh, bh
    X86_AT(c, 0x114ceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114d0  jae 0x114f9
    X86_AT(c, 0x114d0u);
    if (x86_cc(c, 3)) { goto L_114f9; }
    X86_TICK(c, 73);
    // 0114d2  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x114d2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 0114da  xor al, 0x7f
    X86_AT(c, 0x114dau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114dc  mul cl
    X86_AT(c, 0x114dcu);
    x86_mul(c, g8(c, 1), 1);
    // 0114de  shr eax, 7
    X86_AT(c, 0x114deu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114e1  inc eax
    X86_AT(c, 0x114e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114e2  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114e2u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114ea  shr eax, 7
    X86_AT(c, 0x114eau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114ed  inc eax
    X86_AT(c, 0x114edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114ee  xor al, 0x7f
    X86_AT(c, 0x114eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114f0  mov ah, 0x48
    X86_AT(c, 0x114f0u);
    s8(c, 4, 0x48u);
    // 0114f2  add ah, bl
    X86_AT(c, 0x114f2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114f4  call 0x11bf0
    X86_AT(c, 0x114f4u);
    push32(c, 0x114f9u); f_00011bf0(c); X86_RET(c, 0x114f9u);
L_114f9:
    X86_TICK(c, 7);
    // 0114f9  add bh, bh
    X86_AT(c, 0x114f9u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114fb  jae 0x11524
    X86_AT(c, 0x114fbu);
    if (x86_cc(c, 3)) { goto L_11524; }
    X86_TICK(c, 73);
    // 0114fd  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x114fdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011505  xor al, 0x7f
    X86_AT(c, 0x11505u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011507  mul cl
    X86_AT(c, 0x11507u);
    x86_mul(c, g8(c, 1), 1);
    // 011509  shr eax, 7
    X86_AT(c, 0x11509u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01150c  inc eax
    X86_AT(c, 0x1150cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01150d  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1150du);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011515  shr eax, 7
    X86_AT(c, 0x11515u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011518  inc eax
    X86_AT(c, 0x11518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011519  xor al, 0x7f
    X86_AT(c, 0x11519u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01151b  mov ah, 0x4c
    X86_AT(c, 0x1151bu);
    s8(c, 4, 0x4Cu);
    // 01151d  add ah, bl
    X86_AT(c, 0x1151du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01151f  call 0x11bf0
    X86_AT(c, 0x1151fu);
    push32(c, 0x11524u); f_00011bf0(c); X86_RET(c, 0x11524u);
L_11524:
    X86_TICK(c, 9);
    // 011524  mov cl, bl
    X86_AT(c, 0x11524u);
    s8(c, 1, g8(c, 3));
    // 011526  cmp dl, 0xd8
    X86_AT(c, 0x11526u);
    (void)x86_sub(c, g8(c, 2), 0xD8u, 0, 1);
    // 011529  je 0x1152e
    X86_AT(c, 0x11529u);
    if (x86_cc(c, 4)) { goto L_1152e; }
    X86_TICK(c, 2);
    // 01152b  add cl, 4
    X86_AT(c, 0x1152bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x4u, 0, 1)); }
L_1152e:
    X86_TICK(c, 21);
    // 01152e  mov ah, 0x80
    X86_AT(c, 0x1152eu);
    s8(c, 4, 0x80u);
    // 011530  add ah, bl
    X86_AT(c, 0x11530u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011532  push edx
    X86_AT(c, 0x11532u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011533  push eax
    X86_AT(c, 0x11533u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011534  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11534u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01153c  or al, 0xf
    X86_AT(c, 0x1153cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 01153e  call 0x11c20
    X86_AT(c, 0x1153eu);
    push32(c, 0x11543u); f_00011c20(c); X86_RET(c, 0x11543u);
    X86_TICK(c, 15);
    // 011543  add ah, 4
    X86_AT(c, 0x11543u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011546  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11546u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01154e  or al, 0xf
    X86_AT(c, 0x1154eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011550  call 0x11c20
    X86_AT(c, 0x11550u);
    push32(c, 0x11555u); f_00011c20(c); X86_RET(c, 0x11555u);
    X86_TICK(c, 15);
    // 011555  add ah, 4
    X86_AT(c, 0x11555u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011558  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x11558u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 011560  or al, 0xf
    X86_AT(c, 0x11560u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011562  call 0x11c20
    X86_AT(c, 0x11562u);
    push32(c, 0x11567u); f_00011c20(c); X86_RET(c, 0x11567u);
    X86_TICK(c, 15);
    // 011567  add ah, 4
    X86_AT(c, 0x11567u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01156a  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x1156au);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 011572  or al, 0xf
    X86_AT(c, 0x11572u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011574  call 0x11c20
    X86_AT(c, 0x11574u);
    push32(c, 0x11579u); f_00011c20(c); X86_RET(c, 0x11579u);
    X86_TICK(c, 13);
    // 011579  mov dl, 0xd8
    X86_AT(c, 0x11579u);
    s8(c, 2, 0xD8u);
    // 01157b  mov al, cl
    X86_AT(c, 0x1157bu);
    s8(c, 0, g8(c, 1));
    // 01157d  mov ah, 0x28
    X86_AT(c, 0x1157du);
    s8(c, 4, 0x28u);
    // 01157f  call 0x11c20
    X86_AT(c, 0x1157fu);
    push32(c, 0x11584u); f_00011c20(c); X86_RET(c, 0x11584u);
    X86_TICK(c, 19);
    // 011584  pop eax
    X86_AT(c, 0x11584u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011585  pop edx
    X86_AT(c, 0x11585u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011586  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11586u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01158e  call 0x11c20
    X86_AT(c, 0x1158eu);
    push32(c, 0x11593u); f_00011c20(c); X86_RET(c, 0x11593u);
    X86_TICK(c, 13);
    // 011593  add ah, 4
    X86_AT(c, 0x11593u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011596  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11596u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01159e  call 0x11c20
    X86_AT(c, 0x1159eu);
    push32(c, 0x115a3u); f_00011c20(c); X86_RET(c, 0x115a3u);
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
L_13553:
    X86_TICK(c, 36);
    // 013553  popal 
    X86_AT(c, 0x13553u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 013554  mov al, 2
    X86_AT(c, 0x13554u);
    s8(c, 0, 0x2u);
    // 013556  ret 
    X86_AT(c, 0x13556u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11398u, "ran off the end of a function");
}
void f_00011399(X86Cpu& c) {
    X86_TICK(c, 19);
    // 011399  movzx ebx, bl
    X86_AT(c, 0x11399u);
    c.r[3] = g8(c, 3);
    // 01139c  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x1139cu);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0113a3  test byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113a3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u))) & g8(c, 5), 1);
    // 0113aa  jne 0x13553
    X86_AT(c, 0x113aau);
    if (x86_cc(c, 5)) { goto L_13553; }
    X86_TICK(c, 30);
    // 0113b0  or byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 0113b7  sub dh, 0xc
    X86_AT(c, 0x113b7u);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_sub(c, v, 0xCu, 0, 1)); }
    // 0113ba  mov byte ptr gs:[edi + ebx*1 + 0x1e0], dh
    X86_AT(c, 0x113bau);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1E0u)), g8(c, 6));
    // 0113c2  mov bp, word ptr gs:[edi + ebx*2 + 0x1e8]
    X86_AT(c, 0x113c2u);
    s16(c, 5, rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1E8u))));
    // 0113cb  movzx esi, dl
    X86_AT(c, 0x113cbu);
    c.r[6] = g8(c, 2);
    // 0113ce  movzx ecx, dh
    X86_AT(c, 0x113ceu);
    c.r[1] = g8(c, 6);
    // 0113d1  mov dx, 0x4d8
    X86_AT(c, 0x113d1u);
    s16(c, 2, 0x4D8u);
    // 0113d5  cmp bl, 2
    X86_AT(c, 0x113d5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0113d8  jbe 0x113e6
    X86_AT(c, 0x113d8u);
    if (x86_cc(c, 6)) { goto L_113e6; }
    X86_TICK(c, 6);
    // 0113da  add dl, 4
    X86_AT(c, 0x113dau);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0113dd  add edi, 0xf0
    X86_AT(c, 0x113ddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0113e3  sub bl, 3
    X86_AT(c, 0x113e3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_113e6:
    X86_TICK(c, 7);
    // 0113e6  test cl, cl
    X86_AT(c, 0x113e6u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 0113e8  jne 0x113f2
    X86_AT(c, 0x113e8u);
    if (x86_cc(c, 5)) { goto L_113f2; }
    X86_TICK(c, 11);
    // 0113ea  mov cx, 0x268
    X86_AT(c, 0x113eau);
    s16(c, 1, 0x268u);
    // 0113ee  xor al, al
    X86_AT(c, 0x113eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0113f0  jmp 0x11405
    X86_AT(c, 0x113f0u);
    goto L_11405;
L_113f2:
    X86_TICK(c, 53);
    // 0113f2  mov eax, ecx
    X86_AT(c, 0x113f2u);
    c.r[0] = c.r[1];
    // 0113f4  dec eax
    X86_AT(c, 0x113f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0113f5  mov cl, 0xc
    X86_AT(c, 0x113f5u);
    s8(c, 1, 0xCu);
    // 0113f7  div cl
    X86_AT(c, 0x113f7u);
    x86_div(c, g8(c, 1), 1, 0x113f7u);
    // 0113f9  movzx ecx, ah
    X86_AT(c, 0x113f9u);
    c.r[1] = g8(c, 4);
    // 0113fc  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x113fcu);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
L_11405:
    X86_TICK(c, 9);
    // 011405  add cx, bp
    X86_AT(c, 0x11405u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[5] & 0xFFFFu), 0, 2)); }
    // 011408  cmp cx, 0x268
    X86_AT(c, 0x11408u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x268u, 0, 2);
    // 01140d  jge 0x11421
    X86_AT(c, 0x1140du);
    if (x86_cc(c, 13)) { goto L_11421; }
    X86_TICK(c, 7);
    // 01140f  test al, al
    X86_AT(c, 0x1140fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011411  jne 0x11419
    X86_AT(c, 0x11411u);
    if (x86_cc(c, 5)) { goto L_11419; }
    X86_TICK(c, 9);
    // 011413  mov cx, 0x268
    X86_AT(c, 0x11413u);
    s16(c, 1, 0x268u);
    // 011417  jmp 0x11438
    X86_AT(c, 0x11417u);
    goto L_11438;
L_11419:
    X86_TICK(c, 11);
    // 011419  add cx, 0x268
    X86_AT(c, 0x11419u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x268u, 0, 2)); }
    // 01141e  dec eax
    X86_AT(c, 0x1141eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 01141f  jmp 0x11438
    X86_AT(c, 0x1141fu);
    goto L_11438;
L_11421:
    X86_TICK(c, 7);
    // 011421  cmp cx, 0x4d0
    X86_AT(c, 0x11421u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4D0u, 0, 2);
    // 011426  jle 0x11438
    X86_AT(c, 0x11426u);
    if (x86_cc(c, 14)) { goto L_11438; }
    X86_TICK(c, 7);
    // 011428  cmp al, 7
    X86_AT(c, 0x11428u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 01142a  jne 0x11432
    X86_AT(c, 0x1142au);
    if (x86_cc(c, 5)) { goto L_11432; }
    X86_TICK(c, 9);
    // 01142c  mov cx, 0x3c8c
    X86_AT(c, 0x1142cu);
    s16(c, 1, 0x3C8Cu);
    // 011430  jmp 0x11438
    X86_AT(c, 0x11430u);
    goto L_11438;
L_11432:
    X86_TICK(c, 4);
    // 011432  sub cx, 0x268
    X86_AT(c, 0x11432u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x268u, 0, 2)); }
    // 011437  inc eax
    X86_AT(c, 0x11437u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_11438:
    X86_TICK(c, 18);
    // 011438  shl al, 3
    X86_AT(c, 0x11438u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 0, r); }
    // 01143b  or ch, al
    X86_AT(c, 0x1143bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | g8(c, 0), 1)); }
    // 01143d  mov ah, 0xa4
    X86_AT(c, 0x1143du);
    s8(c, 4, 0xA4u);
    // 01143f  add ah, bl
    X86_AT(c, 0x1143fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011441  mov al, ch
    X86_AT(c, 0x11441u);
    s8(c, 0, g8(c, 5));
    // 011443  call 0x11bf0
    X86_AT(c, 0x11443u);
    push32(c, 0x11448u); f_00011bf0(c); X86_RET(c, 0x11448u);
    X86_TICK(c, 11);
    // 011448  sub ah, 4
    X86_AT(c, 0x11448u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x4u, 0, 1)); }
    // 01144b  mov al, cl
    X86_AT(c, 0x1144bu);
    s8(c, 0, g8(c, 1));
    // 01144d  call 0x11bf0
    X86_AT(c, 0x1144du);
    push32(c, 0x11452u); f_00011bf0(c); X86_RET(c, 0x11452u);
    X86_TICK(c, 28);
    // 011452  mov ecx, esi
    X86_AT(c, 0x11452u);
    c.r[1] = c.r[6];
    // 011454  shr cl, 2
    X86_AT(c, 0x11454u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 011457  add cl, 0x60
    X86_AT(c, 0x11457u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x60u, 0, 1)); }
    // 01145a  mov esi, ebx
    X86_AT(c, 0x1145au);
    c.r[6] = c.r[3];
    // 01145c  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x1145cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 011464  and eax, 7
    X86_AT(c, 0x11464u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 011469  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x11469u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 011470  mov byte ptr gs:[edi + esi*1 + 0xe0], cl
    X86_AT(c, 0x11470u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u)), g8(c, 1));
    // 011478  add bh, bh
    X86_AT(c, 0x11478u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 01147a  jae 0x114a3
    X86_AT(c, 0x1147au);
    if (x86_cc(c, 3)) { goto L_114a3; }
    X86_TICK(c, 73);
    // 01147c  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x1147cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 011484  xor al, 0x7f
    X86_AT(c, 0x11484u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011486  mul cl
    X86_AT(c, 0x11486u);
    x86_mul(c, g8(c, 1), 1);
    // 011488  shr eax, 7
    X86_AT(c, 0x11488u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01148b  inc eax
    X86_AT(c, 0x1148bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01148c  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1148cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011494  shr eax, 7
    X86_AT(c, 0x11494u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011497  inc eax
    X86_AT(c, 0x11497u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011498  xor al, 0x7f
    X86_AT(c, 0x11498u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01149a  mov ah, 0x40
    X86_AT(c, 0x1149au);
    s8(c, 4, 0x40u);
    // 01149c  add ah, bl
    X86_AT(c, 0x1149cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01149e  call 0x11bf0
    X86_AT(c, 0x1149eu);
    push32(c, 0x114a3u); f_00011bf0(c); X86_RET(c, 0x114a3u);
L_114a3:
    X86_TICK(c, 7);
    // 0114a3  add bh, bh
    X86_AT(c, 0x114a3u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114a5  jae 0x114ce
    X86_AT(c, 0x114a5u);
    if (x86_cc(c, 3)) { goto L_114ce; }
    X86_TICK(c, 73);
    // 0114a7  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x114a7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 0114af  xor al, 0x7f
    X86_AT(c, 0x114afu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114b1  mul cl
    X86_AT(c, 0x114b1u);
    x86_mul(c, g8(c, 1), 1);
    // 0114b3  shr eax, 7
    X86_AT(c, 0x114b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114b6  inc eax
    X86_AT(c, 0x114b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114b7  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114b7u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114bf  shr eax, 7
    X86_AT(c, 0x114bfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114c2  inc eax
    X86_AT(c, 0x114c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114c3  xor al, 0x7f
    X86_AT(c, 0x114c3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114c5  mov ah, 0x44
    X86_AT(c, 0x114c5u);
    s8(c, 4, 0x44u);
    // 0114c7  add ah, bl
    X86_AT(c, 0x114c7u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114c9  call 0x11bf0
    X86_AT(c, 0x114c9u);
    push32(c, 0x114ceu); f_00011bf0(c); X86_RET(c, 0x114ceu);
L_114ce:
    X86_TICK(c, 7);
    // 0114ce  add bh, bh
    X86_AT(c, 0x114ceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114d0  jae 0x114f9
    X86_AT(c, 0x114d0u);
    if (x86_cc(c, 3)) { goto L_114f9; }
    X86_TICK(c, 73);
    // 0114d2  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x114d2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 0114da  xor al, 0x7f
    X86_AT(c, 0x114dau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114dc  mul cl
    X86_AT(c, 0x114dcu);
    x86_mul(c, g8(c, 1), 1);
    // 0114de  shr eax, 7
    X86_AT(c, 0x114deu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114e1  inc eax
    X86_AT(c, 0x114e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114e2  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114e2u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114ea  shr eax, 7
    X86_AT(c, 0x114eau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114ed  inc eax
    X86_AT(c, 0x114edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114ee  xor al, 0x7f
    X86_AT(c, 0x114eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114f0  mov ah, 0x48
    X86_AT(c, 0x114f0u);
    s8(c, 4, 0x48u);
    // 0114f2  add ah, bl
    X86_AT(c, 0x114f2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114f4  call 0x11bf0
    X86_AT(c, 0x114f4u);
    push32(c, 0x114f9u); f_00011bf0(c); X86_RET(c, 0x114f9u);
L_114f9:
    X86_TICK(c, 7);
    // 0114f9  add bh, bh
    X86_AT(c, 0x114f9u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114fb  jae 0x11524
    X86_AT(c, 0x114fbu);
    if (x86_cc(c, 3)) { goto L_11524; }
    X86_TICK(c, 73);
    // 0114fd  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x114fdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011505  xor al, 0x7f
    X86_AT(c, 0x11505u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011507  mul cl
    X86_AT(c, 0x11507u);
    x86_mul(c, g8(c, 1), 1);
    // 011509  shr eax, 7
    X86_AT(c, 0x11509u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01150c  inc eax
    X86_AT(c, 0x1150cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01150d  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1150du);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011515  shr eax, 7
    X86_AT(c, 0x11515u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011518  inc eax
    X86_AT(c, 0x11518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011519  xor al, 0x7f
    X86_AT(c, 0x11519u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01151b  mov ah, 0x4c
    X86_AT(c, 0x1151bu);
    s8(c, 4, 0x4Cu);
    // 01151d  add ah, bl
    X86_AT(c, 0x1151du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01151f  call 0x11bf0
    X86_AT(c, 0x1151fu);
    push32(c, 0x11524u); f_00011bf0(c); X86_RET(c, 0x11524u);
L_11524:
    X86_TICK(c, 9);
    // 011524  mov cl, bl
    X86_AT(c, 0x11524u);
    s8(c, 1, g8(c, 3));
    // 011526  cmp dl, 0xd8
    X86_AT(c, 0x11526u);
    (void)x86_sub(c, g8(c, 2), 0xD8u, 0, 1);
    // 011529  je 0x1152e
    X86_AT(c, 0x11529u);
    if (x86_cc(c, 4)) { goto L_1152e; }
    X86_TICK(c, 2);
    // 01152b  add cl, 4
    X86_AT(c, 0x1152bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x4u, 0, 1)); }
L_1152e:
    X86_TICK(c, 21);
    // 01152e  mov ah, 0x80
    X86_AT(c, 0x1152eu);
    s8(c, 4, 0x80u);
    // 011530  add ah, bl
    X86_AT(c, 0x11530u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011532  push edx
    X86_AT(c, 0x11532u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011533  push eax
    X86_AT(c, 0x11533u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011534  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11534u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01153c  or al, 0xf
    X86_AT(c, 0x1153cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 01153e  call 0x11c20
    X86_AT(c, 0x1153eu);
    push32(c, 0x11543u); f_00011c20(c); X86_RET(c, 0x11543u);
    X86_TICK(c, 15);
    // 011543  add ah, 4
    X86_AT(c, 0x11543u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011546  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11546u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01154e  or al, 0xf
    X86_AT(c, 0x1154eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011550  call 0x11c20
    X86_AT(c, 0x11550u);
    push32(c, 0x11555u); f_00011c20(c); X86_RET(c, 0x11555u);
    X86_TICK(c, 15);
    // 011555  add ah, 4
    X86_AT(c, 0x11555u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011558  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x11558u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 011560  or al, 0xf
    X86_AT(c, 0x11560u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011562  call 0x11c20
    X86_AT(c, 0x11562u);
    push32(c, 0x11567u); f_00011c20(c); X86_RET(c, 0x11567u);
    X86_TICK(c, 15);
    // 011567  add ah, 4
    X86_AT(c, 0x11567u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01156a  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x1156au);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 011572  or al, 0xf
    X86_AT(c, 0x11572u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011574  call 0x11c20
    X86_AT(c, 0x11574u);
    push32(c, 0x11579u); f_00011c20(c); X86_RET(c, 0x11579u);
    X86_TICK(c, 13);
    // 011579  mov dl, 0xd8
    X86_AT(c, 0x11579u);
    s8(c, 2, 0xD8u);
    // 01157b  mov al, cl
    X86_AT(c, 0x1157bu);
    s8(c, 0, g8(c, 1));
    // 01157d  mov ah, 0x28
    X86_AT(c, 0x1157du);
    s8(c, 4, 0x28u);
    // 01157f  call 0x11c20
    X86_AT(c, 0x1157fu);
    push32(c, 0x11584u); f_00011c20(c); X86_RET(c, 0x11584u);
    X86_TICK(c, 19);
    // 011584  pop eax
    X86_AT(c, 0x11584u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011585  pop edx
    X86_AT(c, 0x11585u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011586  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11586u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01158e  call 0x11c20
    X86_AT(c, 0x1158eu);
    push32(c, 0x11593u); f_00011c20(c); X86_RET(c, 0x11593u);
    X86_TICK(c, 13);
    // 011593  add ah, 4
    X86_AT(c, 0x11593u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011596  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11596u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01159e  call 0x11c20
    X86_AT(c, 0x1159eu);
    push32(c, 0x115a3u); f_00011c20(c); X86_RET(c, 0x115a3u);
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
L_13553:
    X86_TICK(c, 36);
    // 013553  popal 
    X86_AT(c, 0x13553u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 013554  mov al, 2
    X86_AT(c, 0x13554u);
    s8(c, 0, 0x2u);
    // 013556  ret 
    X86_AT(c, 0x13556u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x11399u, "ran off the end of a function");
}
void f_0001139c(X86Cpu& c) {
    X86_TICK(c, 16);
    // 01139c  mov ch, byte ptr cs:[ebx + 0x13580]
    X86_AT(c, 0x1139cu);
    s8(c, 5, rd8((c.sbase[1] + (uint32_t)(c.r[3] + 0x13580u))));
    // 0113a3  test byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113a3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u))) & g8(c, 5), 1);
    // 0113aa  jne 0x13553
    X86_AT(c, 0x113aau);
    if (x86_cc(c, 5)) { goto L_13553; }
    X86_TICK(c, 30);
    // 0113b0  or byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 0113b7  sub dh, 0xc
    X86_AT(c, 0x113b7u);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_sub(c, v, 0xCu, 0, 1)); }
    // 0113ba  mov byte ptr gs:[edi + ebx*1 + 0x1e0], dh
    X86_AT(c, 0x113bau);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1E0u)), g8(c, 6));
    // 0113c2  mov bp, word ptr gs:[edi + ebx*2 + 0x1e8]
    X86_AT(c, 0x113c2u);
    s16(c, 5, rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1E8u))));
    // 0113cb  movzx esi, dl
    X86_AT(c, 0x113cbu);
    c.r[6] = g8(c, 2);
    // 0113ce  movzx ecx, dh
    X86_AT(c, 0x113ceu);
    c.r[1] = g8(c, 6);
    // 0113d1  mov dx, 0x4d8
    X86_AT(c, 0x113d1u);
    s16(c, 2, 0x4D8u);
    // 0113d5  cmp bl, 2
    X86_AT(c, 0x113d5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0113d8  jbe 0x113e6
    X86_AT(c, 0x113d8u);
    if (x86_cc(c, 6)) { goto L_113e6; }
    X86_TICK(c, 6);
    // 0113da  add dl, 4
    X86_AT(c, 0x113dau);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0113dd  add edi, 0xf0
    X86_AT(c, 0x113ddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0113e3  sub bl, 3
    X86_AT(c, 0x113e3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_113e6:
    X86_TICK(c, 7);
    // 0113e6  test cl, cl
    X86_AT(c, 0x113e6u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 0113e8  jne 0x113f2
    X86_AT(c, 0x113e8u);
    if (x86_cc(c, 5)) { goto L_113f2; }
    X86_TICK(c, 11);
    // 0113ea  mov cx, 0x268
    X86_AT(c, 0x113eau);
    s16(c, 1, 0x268u);
    // 0113ee  xor al, al
    X86_AT(c, 0x113eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0113f0  jmp 0x11405
    X86_AT(c, 0x113f0u);
    goto L_11405;
L_113f2:
    X86_TICK(c, 53);
    // 0113f2  mov eax, ecx
    X86_AT(c, 0x113f2u);
    c.r[0] = c.r[1];
    // 0113f4  dec eax
    X86_AT(c, 0x113f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0113f5  mov cl, 0xc
    X86_AT(c, 0x113f5u);
    s8(c, 1, 0xCu);
    // 0113f7  div cl
    X86_AT(c, 0x113f7u);
    x86_div(c, g8(c, 1), 1, 0x113f7u);
    // 0113f9  movzx ecx, ah
    X86_AT(c, 0x113f9u);
    c.r[1] = g8(c, 4);
    // 0113fc  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x113fcu);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
L_11405:
    X86_TICK(c, 9);
    // 011405  add cx, bp
    X86_AT(c, 0x11405u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[5] & 0xFFFFu), 0, 2)); }
    // 011408  cmp cx, 0x268
    X86_AT(c, 0x11408u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x268u, 0, 2);
    // 01140d  jge 0x11421
    X86_AT(c, 0x1140du);
    if (x86_cc(c, 13)) { goto L_11421; }
    X86_TICK(c, 7);
    // 01140f  test al, al
    X86_AT(c, 0x1140fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011411  jne 0x11419
    X86_AT(c, 0x11411u);
    if (x86_cc(c, 5)) { goto L_11419; }
    X86_TICK(c, 9);
    // 011413  mov cx, 0x268
    X86_AT(c, 0x11413u);
    s16(c, 1, 0x268u);
    // 011417  jmp 0x11438
    X86_AT(c, 0x11417u);
    goto L_11438;
L_11419:
    X86_TICK(c, 11);
    // 011419  add cx, 0x268
    X86_AT(c, 0x11419u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x268u, 0, 2)); }
    // 01141e  dec eax
    X86_AT(c, 0x1141eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 01141f  jmp 0x11438
    X86_AT(c, 0x1141fu);
    goto L_11438;
L_11421:
    X86_TICK(c, 7);
    // 011421  cmp cx, 0x4d0
    X86_AT(c, 0x11421u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4D0u, 0, 2);
    // 011426  jle 0x11438
    X86_AT(c, 0x11426u);
    if (x86_cc(c, 14)) { goto L_11438; }
    X86_TICK(c, 7);
    // 011428  cmp al, 7
    X86_AT(c, 0x11428u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 01142a  jne 0x11432
    X86_AT(c, 0x1142au);
    if (x86_cc(c, 5)) { goto L_11432; }
    X86_TICK(c, 9);
    // 01142c  mov cx, 0x3c8c
    X86_AT(c, 0x1142cu);
    s16(c, 1, 0x3C8Cu);
    // 011430  jmp 0x11438
    X86_AT(c, 0x11430u);
    goto L_11438;
L_11432:
    X86_TICK(c, 4);
    // 011432  sub cx, 0x268
    X86_AT(c, 0x11432u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x268u, 0, 2)); }
    // 011437  inc eax
    X86_AT(c, 0x11437u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_11438:
    X86_TICK(c, 18);
    // 011438  shl al, 3
    X86_AT(c, 0x11438u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 0, r); }
    // 01143b  or ch, al
    X86_AT(c, 0x1143bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | g8(c, 0), 1)); }
    // 01143d  mov ah, 0xa4
    X86_AT(c, 0x1143du);
    s8(c, 4, 0xA4u);
    // 01143f  add ah, bl
    X86_AT(c, 0x1143fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011441  mov al, ch
    X86_AT(c, 0x11441u);
    s8(c, 0, g8(c, 5));
    // 011443  call 0x11bf0
    X86_AT(c, 0x11443u);
    push32(c, 0x11448u); f_00011bf0(c); X86_RET(c, 0x11448u);
    X86_TICK(c, 11);
    // 011448  sub ah, 4
    X86_AT(c, 0x11448u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x4u, 0, 1)); }
    // 01144b  mov al, cl
    X86_AT(c, 0x1144bu);
    s8(c, 0, g8(c, 1));
    // 01144d  call 0x11bf0
    X86_AT(c, 0x1144du);
    push32(c, 0x11452u); f_00011bf0(c); X86_RET(c, 0x11452u);
    X86_TICK(c, 28);
    // 011452  mov ecx, esi
    X86_AT(c, 0x11452u);
    c.r[1] = c.r[6];
    // 011454  shr cl, 2
    X86_AT(c, 0x11454u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 011457  add cl, 0x60
    X86_AT(c, 0x11457u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x60u, 0, 1)); }
    // 01145a  mov esi, ebx
    X86_AT(c, 0x1145au);
    c.r[6] = c.r[3];
    // 01145c  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x1145cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 011464  and eax, 7
    X86_AT(c, 0x11464u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 011469  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x11469u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 011470  mov byte ptr gs:[edi + esi*1 + 0xe0], cl
    X86_AT(c, 0x11470u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u)), g8(c, 1));
    // 011478  add bh, bh
    X86_AT(c, 0x11478u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 01147a  jae 0x114a3
    X86_AT(c, 0x1147au);
    if (x86_cc(c, 3)) { goto L_114a3; }
    X86_TICK(c, 73);
    // 01147c  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x1147cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 011484  xor al, 0x7f
    X86_AT(c, 0x11484u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011486  mul cl
    X86_AT(c, 0x11486u);
    x86_mul(c, g8(c, 1), 1);
    // 011488  shr eax, 7
    X86_AT(c, 0x11488u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01148b  inc eax
    X86_AT(c, 0x1148bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01148c  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1148cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011494  shr eax, 7
    X86_AT(c, 0x11494u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011497  inc eax
    X86_AT(c, 0x11497u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011498  xor al, 0x7f
    X86_AT(c, 0x11498u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01149a  mov ah, 0x40
    X86_AT(c, 0x1149au);
    s8(c, 4, 0x40u);
    // 01149c  add ah, bl
    X86_AT(c, 0x1149cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01149e  call 0x11bf0
    X86_AT(c, 0x1149eu);
    push32(c, 0x114a3u); f_00011bf0(c); X86_RET(c, 0x114a3u);
L_114a3:
    X86_TICK(c, 7);
    // 0114a3  add bh, bh
    X86_AT(c, 0x114a3u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114a5  jae 0x114ce
    X86_AT(c, 0x114a5u);
    if (x86_cc(c, 3)) { goto L_114ce; }
    X86_TICK(c, 73);
    // 0114a7  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x114a7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 0114af  xor al, 0x7f
    X86_AT(c, 0x114afu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114b1  mul cl
    X86_AT(c, 0x114b1u);
    x86_mul(c, g8(c, 1), 1);
    // 0114b3  shr eax, 7
    X86_AT(c, 0x114b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114b6  inc eax
    X86_AT(c, 0x114b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114b7  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114b7u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114bf  shr eax, 7
    X86_AT(c, 0x114bfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114c2  inc eax
    X86_AT(c, 0x114c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114c3  xor al, 0x7f
    X86_AT(c, 0x114c3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114c5  mov ah, 0x44
    X86_AT(c, 0x114c5u);
    s8(c, 4, 0x44u);
    // 0114c7  add ah, bl
    X86_AT(c, 0x114c7u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114c9  call 0x11bf0
    X86_AT(c, 0x114c9u);
    push32(c, 0x114ceu); f_00011bf0(c); X86_RET(c, 0x114ceu);
L_114ce:
    X86_TICK(c, 7);
    // 0114ce  add bh, bh
    X86_AT(c, 0x114ceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114d0  jae 0x114f9
    X86_AT(c, 0x114d0u);
    if (x86_cc(c, 3)) { goto L_114f9; }
    X86_TICK(c, 73);
    // 0114d2  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x114d2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 0114da  xor al, 0x7f
    X86_AT(c, 0x114dau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114dc  mul cl
    X86_AT(c, 0x114dcu);
    x86_mul(c, g8(c, 1), 1);
    // 0114de  shr eax, 7
    X86_AT(c, 0x114deu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114e1  inc eax
    X86_AT(c, 0x114e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114e2  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114e2u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114ea  shr eax, 7
    X86_AT(c, 0x114eau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114ed  inc eax
    X86_AT(c, 0x114edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114ee  xor al, 0x7f
    X86_AT(c, 0x114eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114f0  mov ah, 0x48
    X86_AT(c, 0x114f0u);
    s8(c, 4, 0x48u);
    // 0114f2  add ah, bl
    X86_AT(c, 0x114f2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114f4  call 0x11bf0
    X86_AT(c, 0x114f4u);
    push32(c, 0x114f9u); f_00011bf0(c); X86_RET(c, 0x114f9u);
L_114f9:
    X86_TICK(c, 7);
    // 0114f9  add bh, bh
    X86_AT(c, 0x114f9u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114fb  jae 0x11524
    X86_AT(c, 0x114fbu);
    if (x86_cc(c, 3)) { goto L_11524; }
    X86_TICK(c, 73);
    // 0114fd  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x114fdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011505  xor al, 0x7f
    X86_AT(c, 0x11505u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011507  mul cl
    X86_AT(c, 0x11507u);
    x86_mul(c, g8(c, 1), 1);
    // 011509  shr eax, 7
    X86_AT(c, 0x11509u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01150c  inc eax
    X86_AT(c, 0x1150cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01150d  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1150du);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011515  shr eax, 7
    X86_AT(c, 0x11515u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011518  inc eax
    X86_AT(c, 0x11518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011519  xor al, 0x7f
    X86_AT(c, 0x11519u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01151b  mov ah, 0x4c
    X86_AT(c, 0x1151bu);
    s8(c, 4, 0x4Cu);
    // 01151d  add ah, bl
    X86_AT(c, 0x1151du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01151f  call 0x11bf0
    X86_AT(c, 0x1151fu);
    push32(c, 0x11524u); f_00011bf0(c); X86_RET(c, 0x11524u);
L_11524:
    X86_TICK(c, 9);
    // 011524  mov cl, bl
    X86_AT(c, 0x11524u);
    s8(c, 1, g8(c, 3));
    // 011526  cmp dl, 0xd8
    X86_AT(c, 0x11526u);
    (void)x86_sub(c, g8(c, 2), 0xD8u, 0, 1);
    // 011529  je 0x1152e
    X86_AT(c, 0x11529u);
    if (x86_cc(c, 4)) { goto L_1152e; }
    X86_TICK(c, 2);
    // 01152b  add cl, 4
    X86_AT(c, 0x1152bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x4u, 0, 1)); }
L_1152e:
    X86_TICK(c, 21);
    // 01152e  mov ah, 0x80
    X86_AT(c, 0x1152eu);
    s8(c, 4, 0x80u);
    // 011530  add ah, bl
    X86_AT(c, 0x11530u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011532  push edx
    X86_AT(c, 0x11532u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011533  push eax
    X86_AT(c, 0x11533u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011534  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11534u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01153c  or al, 0xf
    X86_AT(c, 0x1153cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 01153e  call 0x11c20
    X86_AT(c, 0x1153eu);
    push32(c, 0x11543u); f_00011c20(c); X86_RET(c, 0x11543u);
    X86_TICK(c, 15);
    // 011543  add ah, 4
    X86_AT(c, 0x11543u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011546  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11546u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01154e  or al, 0xf
    X86_AT(c, 0x1154eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011550  call 0x11c20
    X86_AT(c, 0x11550u);
    push32(c, 0x11555u); f_00011c20(c); X86_RET(c, 0x11555u);
    X86_TICK(c, 15);
    // 011555  add ah, 4
    X86_AT(c, 0x11555u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011558  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x11558u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 011560  or al, 0xf
    X86_AT(c, 0x11560u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011562  call 0x11c20
    X86_AT(c, 0x11562u);
    push32(c, 0x11567u); f_00011c20(c); X86_RET(c, 0x11567u);
    X86_TICK(c, 15);
    // 011567  add ah, 4
    X86_AT(c, 0x11567u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01156a  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x1156au);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 011572  or al, 0xf
    X86_AT(c, 0x11572u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011574  call 0x11c20
    X86_AT(c, 0x11574u);
    push32(c, 0x11579u); f_00011c20(c); X86_RET(c, 0x11579u);
    X86_TICK(c, 13);
    // 011579  mov dl, 0xd8
    X86_AT(c, 0x11579u);
    s8(c, 2, 0xD8u);
    // 01157b  mov al, cl
    X86_AT(c, 0x1157bu);
    s8(c, 0, g8(c, 1));
    // 01157d  mov ah, 0x28
    X86_AT(c, 0x1157du);
    s8(c, 4, 0x28u);
    // 01157f  call 0x11c20
    X86_AT(c, 0x1157fu);
    push32(c, 0x11584u); f_00011c20(c); X86_RET(c, 0x11584u);
    X86_TICK(c, 19);
    // 011584  pop eax
    X86_AT(c, 0x11584u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011585  pop edx
    X86_AT(c, 0x11585u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011586  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11586u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01158e  call 0x11c20
    X86_AT(c, 0x1158eu);
    push32(c, 0x11593u); f_00011c20(c); X86_RET(c, 0x11593u);
    X86_TICK(c, 13);
    // 011593  add ah, 4
    X86_AT(c, 0x11593u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011596  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11596u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01159e  call 0x11c20
    X86_AT(c, 0x1159eu);
    push32(c, 0x115a3u); f_00011c20(c); X86_RET(c, 0x115a3u);
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
L_13553:
    X86_TICK(c, 36);
    // 013553  popal 
    X86_AT(c, 0x13553u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 013554  mov al, 2
    X86_AT(c, 0x13554u);
    s8(c, 0, 0x2u);
    // 013556  ret 
    X86_AT(c, 0x13556u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1139cu, "ran off the end of a function");
}
void f_000113a3(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0113a3  test byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113a3u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u))) & g8(c, 5), 1);
    // 0113aa  jne 0x13553
    X86_AT(c, 0x113aau);
    if (x86_cc(c, 5)) { goto L_13553; }
    X86_TICK(c, 30);
    // 0113b0  or byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 0113b7  sub dh, 0xc
    X86_AT(c, 0x113b7u);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_sub(c, v, 0xCu, 0, 1)); }
    // 0113ba  mov byte ptr gs:[edi + ebx*1 + 0x1e0], dh
    X86_AT(c, 0x113bau);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1E0u)), g8(c, 6));
    // 0113c2  mov bp, word ptr gs:[edi + ebx*2 + 0x1e8]
    X86_AT(c, 0x113c2u);
    s16(c, 5, rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1E8u))));
    // 0113cb  movzx esi, dl
    X86_AT(c, 0x113cbu);
    c.r[6] = g8(c, 2);
    // 0113ce  movzx ecx, dh
    X86_AT(c, 0x113ceu);
    c.r[1] = g8(c, 6);
    // 0113d1  mov dx, 0x4d8
    X86_AT(c, 0x113d1u);
    s16(c, 2, 0x4D8u);
    // 0113d5  cmp bl, 2
    X86_AT(c, 0x113d5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0113d8  jbe 0x113e6
    X86_AT(c, 0x113d8u);
    if (x86_cc(c, 6)) { goto L_113e6; }
    X86_TICK(c, 6);
    // 0113da  add dl, 4
    X86_AT(c, 0x113dau);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0113dd  add edi, 0xf0
    X86_AT(c, 0x113ddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0113e3  sub bl, 3
    X86_AT(c, 0x113e3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_113e6:
    X86_TICK(c, 7);
    // 0113e6  test cl, cl
    X86_AT(c, 0x113e6u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 0113e8  jne 0x113f2
    X86_AT(c, 0x113e8u);
    if (x86_cc(c, 5)) { goto L_113f2; }
    X86_TICK(c, 11);
    // 0113ea  mov cx, 0x268
    X86_AT(c, 0x113eau);
    s16(c, 1, 0x268u);
    // 0113ee  xor al, al
    X86_AT(c, 0x113eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0113f0  jmp 0x11405
    X86_AT(c, 0x113f0u);
    goto L_11405;
L_113f2:
    X86_TICK(c, 53);
    // 0113f2  mov eax, ecx
    X86_AT(c, 0x113f2u);
    c.r[0] = c.r[1];
    // 0113f4  dec eax
    X86_AT(c, 0x113f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0113f5  mov cl, 0xc
    X86_AT(c, 0x113f5u);
    s8(c, 1, 0xCu);
    // 0113f7  div cl
    X86_AT(c, 0x113f7u);
    x86_div(c, g8(c, 1), 1, 0x113f7u);
    // 0113f9  movzx ecx, ah
    X86_AT(c, 0x113f9u);
    c.r[1] = g8(c, 4);
    // 0113fc  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x113fcu);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
L_11405:
    X86_TICK(c, 9);
    // 011405  add cx, bp
    X86_AT(c, 0x11405u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[5] & 0xFFFFu), 0, 2)); }
    // 011408  cmp cx, 0x268
    X86_AT(c, 0x11408u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x268u, 0, 2);
    // 01140d  jge 0x11421
    X86_AT(c, 0x1140du);
    if (x86_cc(c, 13)) { goto L_11421; }
    X86_TICK(c, 7);
    // 01140f  test al, al
    X86_AT(c, 0x1140fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011411  jne 0x11419
    X86_AT(c, 0x11411u);
    if (x86_cc(c, 5)) { goto L_11419; }
    X86_TICK(c, 9);
    // 011413  mov cx, 0x268
    X86_AT(c, 0x11413u);
    s16(c, 1, 0x268u);
    // 011417  jmp 0x11438
    X86_AT(c, 0x11417u);
    goto L_11438;
L_11419:
    X86_TICK(c, 11);
    // 011419  add cx, 0x268
    X86_AT(c, 0x11419u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x268u, 0, 2)); }
    // 01141e  dec eax
    X86_AT(c, 0x1141eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 01141f  jmp 0x11438
    X86_AT(c, 0x1141fu);
    goto L_11438;
L_11421:
    X86_TICK(c, 7);
    // 011421  cmp cx, 0x4d0
    X86_AT(c, 0x11421u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4D0u, 0, 2);
    // 011426  jle 0x11438
    X86_AT(c, 0x11426u);
    if (x86_cc(c, 14)) { goto L_11438; }
    X86_TICK(c, 7);
    // 011428  cmp al, 7
    X86_AT(c, 0x11428u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 01142a  jne 0x11432
    X86_AT(c, 0x1142au);
    if (x86_cc(c, 5)) { goto L_11432; }
    X86_TICK(c, 9);
    // 01142c  mov cx, 0x3c8c
    X86_AT(c, 0x1142cu);
    s16(c, 1, 0x3C8Cu);
    // 011430  jmp 0x11438
    X86_AT(c, 0x11430u);
    goto L_11438;
L_11432:
    X86_TICK(c, 4);
    // 011432  sub cx, 0x268
    X86_AT(c, 0x11432u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x268u, 0, 2)); }
    // 011437  inc eax
    X86_AT(c, 0x11437u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_11438:
    X86_TICK(c, 18);
    // 011438  shl al, 3
    X86_AT(c, 0x11438u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 0, r); }
    // 01143b  or ch, al
    X86_AT(c, 0x1143bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | g8(c, 0), 1)); }
    // 01143d  mov ah, 0xa4
    X86_AT(c, 0x1143du);
    s8(c, 4, 0xA4u);
    // 01143f  add ah, bl
    X86_AT(c, 0x1143fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011441  mov al, ch
    X86_AT(c, 0x11441u);
    s8(c, 0, g8(c, 5));
    // 011443  call 0x11bf0
    X86_AT(c, 0x11443u);
    push32(c, 0x11448u); f_00011bf0(c); X86_RET(c, 0x11448u);
    X86_TICK(c, 11);
    // 011448  sub ah, 4
    X86_AT(c, 0x11448u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x4u, 0, 1)); }
    // 01144b  mov al, cl
    X86_AT(c, 0x1144bu);
    s8(c, 0, g8(c, 1));
    // 01144d  call 0x11bf0
    X86_AT(c, 0x1144du);
    push32(c, 0x11452u); f_00011bf0(c); X86_RET(c, 0x11452u);
    X86_TICK(c, 28);
    // 011452  mov ecx, esi
    X86_AT(c, 0x11452u);
    c.r[1] = c.r[6];
    // 011454  shr cl, 2
    X86_AT(c, 0x11454u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 011457  add cl, 0x60
    X86_AT(c, 0x11457u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x60u, 0, 1)); }
    // 01145a  mov esi, ebx
    X86_AT(c, 0x1145au);
    c.r[6] = c.r[3];
    // 01145c  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x1145cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 011464  and eax, 7
    X86_AT(c, 0x11464u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 011469  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x11469u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 011470  mov byte ptr gs:[edi + esi*1 + 0xe0], cl
    X86_AT(c, 0x11470u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u)), g8(c, 1));
    // 011478  add bh, bh
    X86_AT(c, 0x11478u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 01147a  jae 0x114a3
    X86_AT(c, 0x1147au);
    if (x86_cc(c, 3)) { goto L_114a3; }
    X86_TICK(c, 73);
    // 01147c  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x1147cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 011484  xor al, 0x7f
    X86_AT(c, 0x11484u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011486  mul cl
    X86_AT(c, 0x11486u);
    x86_mul(c, g8(c, 1), 1);
    // 011488  shr eax, 7
    X86_AT(c, 0x11488u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01148b  inc eax
    X86_AT(c, 0x1148bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01148c  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1148cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011494  shr eax, 7
    X86_AT(c, 0x11494u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011497  inc eax
    X86_AT(c, 0x11497u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011498  xor al, 0x7f
    X86_AT(c, 0x11498u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01149a  mov ah, 0x40
    X86_AT(c, 0x1149au);
    s8(c, 4, 0x40u);
    // 01149c  add ah, bl
    X86_AT(c, 0x1149cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01149e  call 0x11bf0
    X86_AT(c, 0x1149eu);
    push32(c, 0x114a3u); f_00011bf0(c); X86_RET(c, 0x114a3u);
L_114a3:
    X86_TICK(c, 7);
    // 0114a3  add bh, bh
    X86_AT(c, 0x114a3u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114a5  jae 0x114ce
    X86_AT(c, 0x114a5u);
    if (x86_cc(c, 3)) { goto L_114ce; }
    X86_TICK(c, 73);
    // 0114a7  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x114a7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 0114af  xor al, 0x7f
    X86_AT(c, 0x114afu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114b1  mul cl
    X86_AT(c, 0x114b1u);
    x86_mul(c, g8(c, 1), 1);
    // 0114b3  shr eax, 7
    X86_AT(c, 0x114b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114b6  inc eax
    X86_AT(c, 0x114b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114b7  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114b7u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114bf  shr eax, 7
    X86_AT(c, 0x114bfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114c2  inc eax
    X86_AT(c, 0x114c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114c3  xor al, 0x7f
    X86_AT(c, 0x114c3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114c5  mov ah, 0x44
    X86_AT(c, 0x114c5u);
    s8(c, 4, 0x44u);
    // 0114c7  add ah, bl
    X86_AT(c, 0x114c7u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114c9  call 0x11bf0
    X86_AT(c, 0x114c9u);
    push32(c, 0x114ceu); f_00011bf0(c); X86_RET(c, 0x114ceu);
L_114ce:
    X86_TICK(c, 7);
    // 0114ce  add bh, bh
    X86_AT(c, 0x114ceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114d0  jae 0x114f9
    X86_AT(c, 0x114d0u);
    if (x86_cc(c, 3)) { goto L_114f9; }
    X86_TICK(c, 73);
    // 0114d2  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x114d2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 0114da  xor al, 0x7f
    X86_AT(c, 0x114dau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114dc  mul cl
    X86_AT(c, 0x114dcu);
    x86_mul(c, g8(c, 1), 1);
    // 0114de  shr eax, 7
    X86_AT(c, 0x114deu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114e1  inc eax
    X86_AT(c, 0x114e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114e2  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114e2u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114ea  shr eax, 7
    X86_AT(c, 0x114eau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114ed  inc eax
    X86_AT(c, 0x114edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114ee  xor al, 0x7f
    X86_AT(c, 0x114eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114f0  mov ah, 0x48
    X86_AT(c, 0x114f0u);
    s8(c, 4, 0x48u);
    // 0114f2  add ah, bl
    X86_AT(c, 0x114f2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114f4  call 0x11bf0
    X86_AT(c, 0x114f4u);
    push32(c, 0x114f9u); f_00011bf0(c); X86_RET(c, 0x114f9u);
L_114f9:
    X86_TICK(c, 7);
    // 0114f9  add bh, bh
    X86_AT(c, 0x114f9u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114fb  jae 0x11524
    X86_AT(c, 0x114fbu);
    if (x86_cc(c, 3)) { goto L_11524; }
    X86_TICK(c, 73);
    // 0114fd  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x114fdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011505  xor al, 0x7f
    X86_AT(c, 0x11505u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011507  mul cl
    X86_AT(c, 0x11507u);
    x86_mul(c, g8(c, 1), 1);
    // 011509  shr eax, 7
    X86_AT(c, 0x11509u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01150c  inc eax
    X86_AT(c, 0x1150cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01150d  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1150du);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011515  shr eax, 7
    X86_AT(c, 0x11515u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011518  inc eax
    X86_AT(c, 0x11518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011519  xor al, 0x7f
    X86_AT(c, 0x11519u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01151b  mov ah, 0x4c
    X86_AT(c, 0x1151bu);
    s8(c, 4, 0x4Cu);
    // 01151d  add ah, bl
    X86_AT(c, 0x1151du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01151f  call 0x11bf0
    X86_AT(c, 0x1151fu);
    push32(c, 0x11524u); f_00011bf0(c); X86_RET(c, 0x11524u);
L_11524:
    X86_TICK(c, 9);
    // 011524  mov cl, bl
    X86_AT(c, 0x11524u);
    s8(c, 1, g8(c, 3));
    // 011526  cmp dl, 0xd8
    X86_AT(c, 0x11526u);
    (void)x86_sub(c, g8(c, 2), 0xD8u, 0, 1);
    // 011529  je 0x1152e
    X86_AT(c, 0x11529u);
    if (x86_cc(c, 4)) { goto L_1152e; }
    X86_TICK(c, 2);
    // 01152b  add cl, 4
    X86_AT(c, 0x1152bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x4u, 0, 1)); }
L_1152e:
    X86_TICK(c, 21);
    // 01152e  mov ah, 0x80
    X86_AT(c, 0x1152eu);
    s8(c, 4, 0x80u);
    // 011530  add ah, bl
    X86_AT(c, 0x11530u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011532  push edx
    X86_AT(c, 0x11532u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011533  push eax
    X86_AT(c, 0x11533u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011534  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11534u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01153c  or al, 0xf
    X86_AT(c, 0x1153cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 01153e  call 0x11c20
    X86_AT(c, 0x1153eu);
    push32(c, 0x11543u); f_00011c20(c); X86_RET(c, 0x11543u);
    X86_TICK(c, 15);
    // 011543  add ah, 4
    X86_AT(c, 0x11543u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011546  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11546u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01154e  or al, 0xf
    X86_AT(c, 0x1154eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011550  call 0x11c20
    X86_AT(c, 0x11550u);
    push32(c, 0x11555u); f_00011c20(c); X86_RET(c, 0x11555u);
    X86_TICK(c, 15);
    // 011555  add ah, 4
    X86_AT(c, 0x11555u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011558  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x11558u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 011560  or al, 0xf
    X86_AT(c, 0x11560u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011562  call 0x11c20
    X86_AT(c, 0x11562u);
    push32(c, 0x11567u); f_00011c20(c); X86_RET(c, 0x11567u);
    X86_TICK(c, 15);
    // 011567  add ah, 4
    X86_AT(c, 0x11567u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01156a  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x1156au);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 011572  or al, 0xf
    X86_AT(c, 0x11572u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011574  call 0x11c20
    X86_AT(c, 0x11574u);
    push32(c, 0x11579u); f_00011c20(c); X86_RET(c, 0x11579u);
    X86_TICK(c, 13);
    // 011579  mov dl, 0xd8
    X86_AT(c, 0x11579u);
    s8(c, 2, 0xD8u);
    // 01157b  mov al, cl
    X86_AT(c, 0x1157bu);
    s8(c, 0, g8(c, 1));
    // 01157d  mov ah, 0x28
    X86_AT(c, 0x1157du);
    s8(c, 4, 0x28u);
    // 01157f  call 0x11c20
    X86_AT(c, 0x1157fu);
    push32(c, 0x11584u); f_00011c20(c); X86_RET(c, 0x11584u);
    X86_TICK(c, 19);
    // 011584  pop eax
    X86_AT(c, 0x11584u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011585  pop edx
    X86_AT(c, 0x11585u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011586  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11586u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01158e  call 0x11c20
    X86_AT(c, 0x1158eu);
    push32(c, 0x11593u); f_00011c20(c); X86_RET(c, 0x11593u);
    X86_TICK(c, 13);
    // 011593  add ah, 4
    X86_AT(c, 0x11593u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011596  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11596u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01159e  call 0x11c20
    X86_AT(c, 0x1159eu);
    push32(c, 0x115a3u); f_00011c20(c); X86_RET(c, 0x115a3u);
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
L_13553:
    X86_TICK(c, 36);
    // 013553  popal 
    X86_AT(c, 0x13553u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 013554  mov al, 2
    X86_AT(c, 0x13554u);
    s8(c, 0, 0x2u);
    // 013556  ret 
    X86_AT(c, 0x13556u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x113a3u, "ran off the end of a function");
}
void f_000113aa(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0113aa  jne 0x13553
    X86_AT(c, 0x113aau);
    if (x86_cc(c, 5)) { goto L_13553; }
    X86_TICK(c, 30);
    // 0113b0  or byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 0113b7  sub dh, 0xc
    X86_AT(c, 0x113b7u);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_sub(c, v, 0xCu, 0, 1)); }
    // 0113ba  mov byte ptr gs:[edi + ebx*1 + 0x1e0], dh
    X86_AT(c, 0x113bau);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1E0u)), g8(c, 6));
    // 0113c2  mov bp, word ptr gs:[edi + ebx*2 + 0x1e8]
    X86_AT(c, 0x113c2u);
    s16(c, 5, rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1E8u))));
    // 0113cb  movzx esi, dl
    X86_AT(c, 0x113cbu);
    c.r[6] = g8(c, 2);
    // 0113ce  movzx ecx, dh
    X86_AT(c, 0x113ceu);
    c.r[1] = g8(c, 6);
    // 0113d1  mov dx, 0x4d8
    X86_AT(c, 0x113d1u);
    s16(c, 2, 0x4D8u);
    // 0113d5  cmp bl, 2
    X86_AT(c, 0x113d5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0113d8  jbe 0x113e6
    X86_AT(c, 0x113d8u);
    if (x86_cc(c, 6)) { goto L_113e6; }
    X86_TICK(c, 6);
    // 0113da  add dl, 4
    X86_AT(c, 0x113dau);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0113dd  add edi, 0xf0
    X86_AT(c, 0x113ddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0113e3  sub bl, 3
    X86_AT(c, 0x113e3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_113e6:
    X86_TICK(c, 7);
    // 0113e6  test cl, cl
    X86_AT(c, 0x113e6u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 0113e8  jne 0x113f2
    X86_AT(c, 0x113e8u);
    if (x86_cc(c, 5)) { goto L_113f2; }
    X86_TICK(c, 11);
    // 0113ea  mov cx, 0x268
    X86_AT(c, 0x113eau);
    s16(c, 1, 0x268u);
    // 0113ee  xor al, al
    X86_AT(c, 0x113eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0113f0  jmp 0x11405
    X86_AT(c, 0x113f0u);
    goto L_11405;
L_113f2:
    X86_TICK(c, 53);
    // 0113f2  mov eax, ecx
    X86_AT(c, 0x113f2u);
    c.r[0] = c.r[1];
    // 0113f4  dec eax
    X86_AT(c, 0x113f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0113f5  mov cl, 0xc
    X86_AT(c, 0x113f5u);
    s8(c, 1, 0xCu);
    // 0113f7  div cl
    X86_AT(c, 0x113f7u);
    x86_div(c, g8(c, 1), 1, 0x113f7u);
    // 0113f9  movzx ecx, ah
    X86_AT(c, 0x113f9u);
    c.r[1] = g8(c, 4);
    // 0113fc  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x113fcu);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
L_11405:
    X86_TICK(c, 9);
    // 011405  add cx, bp
    X86_AT(c, 0x11405u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[5] & 0xFFFFu), 0, 2)); }
    // 011408  cmp cx, 0x268
    X86_AT(c, 0x11408u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x268u, 0, 2);
    // 01140d  jge 0x11421
    X86_AT(c, 0x1140du);
    if (x86_cc(c, 13)) { goto L_11421; }
    X86_TICK(c, 7);
    // 01140f  test al, al
    X86_AT(c, 0x1140fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011411  jne 0x11419
    X86_AT(c, 0x11411u);
    if (x86_cc(c, 5)) { goto L_11419; }
    X86_TICK(c, 9);
    // 011413  mov cx, 0x268
    X86_AT(c, 0x11413u);
    s16(c, 1, 0x268u);
    // 011417  jmp 0x11438
    X86_AT(c, 0x11417u);
    goto L_11438;
L_11419:
    X86_TICK(c, 11);
    // 011419  add cx, 0x268
    X86_AT(c, 0x11419u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x268u, 0, 2)); }
    // 01141e  dec eax
    X86_AT(c, 0x1141eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 01141f  jmp 0x11438
    X86_AT(c, 0x1141fu);
    goto L_11438;
L_11421:
    X86_TICK(c, 7);
    // 011421  cmp cx, 0x4d0
    X86_AT(c, 0x11421u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4D0u, 0, 2);
    // 011426  jle 0x11438
    X86_AT(c, 0x11426u);
    if (x86_cc(c, 14)) { goto L_11438; }
    X86_TICK(c, 7);
    // 011428  cmp al, 7
    X86_AT(c, 0x11428u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 01142a  jne 0x11432
    X86_AT(c, 0x1142au);
    if (x86_cc(c, 5)) { goto L_11432; }
    X86_TICK(c, 9);
    // 01142c  mov cx, 0x3c8c
    X86_AT(c, 0x1142cu);
    s16(c, 1, 0x3C8Cu);
    // 011430  jmp 0x11438
    X86_AT(c, 0x11430u);
    goto L_11438;
L_11432:
    X86_TICK(c, 4);
    // 011432  sub cx, 0x268
    X86_AT(c, 0x11432u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x268u, 0, 2)); }
    // 011437  inc eax
    X86_AT(c, 0x11437u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_11438:
    X86_TICK(c, 18);
    // 011438  shl al, 3
    X86_AT(c, 0x11438u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 0, r); }
    // 01143b  or ch, al
    X86_AT(c, 0x1143bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | g8(c, 0), 1)); }
    // 01143d  mov ah, 0xa4
    X86_AT(c, 0x1143du);
    s8(c, 4, 0xA4u);
    // 01143f  add ah, bl
    X86_AT(c, 0x1143fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011441  mov al, ch
    X86_AT(c, 0x11441u);
    s8(c, 0, g8(c, 5));
    // 011443  call 0x11bf0
    X86_AT(c, 0x11443u);
    push32(c, 0x11448u); f_00011bf0(c); X86_RET(c, 0x11448u);
    X86_TICK(c, 11);
    // 011448  sub ah, 4
    X86_AT(c, 0x11448u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x4u, 0, 1)); }
    // 01144b  mov al, cl
    X86_AT(c, 0x1144bu);
    s8(c, 0, g8(c, 1));
    // 01144d  call 0x11bf0
    X86_AT(c, 0x1144du);
    push32(c, 0x11452u); f_00011bf0(c); X86_RET(c, 0x11452u);
    X86_TICK(c, 28);
    // 011452  mov ecx, esi
    X86_AT(c, 0x11452u);
    c.r[1] = c.r[6];
    // 011454  shr cl, 2
    X86_AT(c, 0x11454u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 011457  add cl, 0x60
    X86_AT(c, 0x11457u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x60u, 0, 1)); }
    // 01145a  mov esi, ebx
    X86_AT(c, 0x1145au);
    c.r[6] = c.r[3];
    // 01145c  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x1145cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 011464  and eax, 7
    X86_AT(c, 0x11464u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 011469  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x11469u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 011470  mov byte ptr gs:[edi + esi*1 + 0xe0], cl
    X86_AT(c, 0x11470u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u)), g8(c, 1));
    // 011478  add bh, bh
    X86_AT(c, 0x11478u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 01147a  jae 0x114a3
    X86_AT(c, 0x1147au);
    if (x86_cc(c, 3)) { goto L_114a3; }
    X86_TICK(c, 73);
    // 01147c  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x1147cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 011484  xor al, 0x7f
    X86_AT(c, 0x11484u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011486  mul cl
    X86_AT(c, 0x11486u);
    x86_mul(c, g8(c, 1), 1);
    // 011488  shr eax, 7
    X86_AT(c, 0x11488u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01148b  inc eax
    X86_AT(c, 0x1148bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01148c  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1148cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011494  shr eax, 7
    X86_AT(c, 0x11494u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011497  inc eax
    X86_AT(c, 0x11497u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011498  xor al, 0x7f
    X86_AT(c, 0x11498u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01149a  mov ah, 0x40
    X86_AT(c, 0x1149au);
    s8(c, 4, 0x40u);
    // 01149c  add ah, bl
    X86_AT(c, 0x1149cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01149e  call 0x11bf0
    X86_AT(c, 0x1149eu);
    push32(c, 0x114a3u); f_00011bf0(c); X86_RET(c, 0x114a3u);
L_114a3:
    X86_TICK(c, 7);
    // 0114a3  add bh, bh
    X86_AT(c, 0x114a3u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114a5  jae 0x114ce
    X86_AT(c, 0x114a5u);
    if (x86_cc(c, 3)) { goto L_114ce; }
    X86_TICK(c, 73);
    // 0114a7  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x114a7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 0114af  xor al, 0x7f
    X86_AT(c, 0x114afu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114b1  mul cl
    X86_AT(c, 0x114b1u);
    x86_mul(c, g8(c, 1), 1);
    // 0114b3  shr eax, 7
    X86_AT(c, 0x114b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114b6  inc eax
    X86_AT(c, 0x114b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114b7  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114b7u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114bf  shr eax, 7
    X86_AT(c, 0x114bfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114c2  inc eax
    X86_AT(c, 0x114c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114c3  xor al, 0x7f
    X86_AT(c, 0x114c3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114c5  mov ah, 0x44
    X86_AT(c, 0x114c5u);
    s8(c, 4, 0x44u);
    // 0114c7  add ah, bl
    X86_AT(c, 0x114c7u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114c9  call 0x11bf0
    X86_AT(c, 0x114c9u);
    push32(c, 0x114ceu); f_00011bf0(c); X86_RET(c, 0x114ceu);
L_114ce:
    X86_TICK(c, 7);
    // 0114ce  add bh, bh
    X86_AT(c, 0x114ceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114d0  jae 0x114f9
    X86_AT(c, 0x114d0u);
    if (x86_cc(c, 3)) { goto L_114f9; }
    X86_TICK(c, 73);
    // 0114d2  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x114d2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 0114da  xor al, 0x7f
    X86_AT(c, 0x114dau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114dc  mul cl
    X86_AT(c, 0x114dcu);
    x86_mul(c, g8(c, 1), 1);
    // 0114de  shr eax, 7
    X86_AT(c, 0x114deu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114e1  inc eax
    X86_AT(c, 0x114e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114e2  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114e2u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114ea  shr eax, 7
    X86_AT(c, 0x114eau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114ed  inc eax
    X86_AT(c, 0x114edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114ee  xor al, 0x7f
    X86_AT(c, 0x114eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114f0  mov ah, 0x48
    X86_AT(c, 0x114f0u);
    s8(c, 4, 0x48u);
    // 0114f2  add ah, bl
    X86_AT(c, 0x114f2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114f4  call 0x11bf0
    X86_AT(c, 0x114f4u);
    push32(c, 0x114f9u); f_00011bf0(c); X86_RET(c, 0x114f9u);
L_114f9:
    X86_TICK(c, 7);
    // 0114f9  add bh, bh
    X86_AT(c, 0x114f9u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114fb  jae 0x11524
    X86_AT(c, 0x114fbu);
    if (x86_cc(c, 3)) { goto L_11524; }
    X86_TICK(c, 73);
    // 0114fd  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x114fdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011505  xor al, 0x7f
    X86_AT(c, 0x11505u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011507  mul cl
    X86_AT(c, 0x11507u);
    x86_mul(c, g8(c, 1), 1);
    // 011509  shr eax, 7
    X86_AT(c, 0x11509u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01150c  inc eax
    X86_AT(c, 0x1150cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01150d  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1150du);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011515  shr eax, 7
    X86_AT(c, 0x11515u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011518  inc eax
    X86_AT(c, 0x11518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011519  xor al, 0x7f
    X86_AT(c, 0x11519u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01151b  mov ah, 0x4c
    X86_AT(c, 0x1151bu);
    s8(c, 4, 0x4Cu);
    // 01151d  add ah, bl
    X86_AT(c, 0x1151du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01151f  call 0x11bf0
    X86_AT(c, 0x1151fu);
    push32(c, 0x11524u); f_00011bf0(c); X86_RET(c, 0x11524u);
L_11524:
    X86_TICK(c, 9);
    // 011524  mov cl, bl
    X86_AT(c, 0x11524u);
    s8(c, 1, g8(c, 3));
    // 011526  cmp dl, 0xd8
    X86_AT(c, 0x11526u);
    (void)x86_sub(c, g8(c, 2), 0xD8u, 0, 1);
    // 011529  je 0x1152e
    X86_AT(c, 0x11529u);
    if (x86_cc(c, 4)) { goto L_1152e; }
    X86_TICK(c, 2);
    // 01152b  add cl, 4
    X86_AT(c, 0x1152bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x4u, 0, 1)); }
L_1152e:
    X86_TICK(c, 21);
    // 01152e  mov ah, 0x80
    X86_AT(c, 0x1152eu);
    s8(c, 4, 0x80u);
    // 011530  add ah, bl
    X86_AT(c, 0x11530u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011532  push edx
    X86_AT(c, 0x11532u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011533  push eax
    X86_AT(c, 0x11533u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011534  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11534u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01153c  or al, 0xf
    X86_AT(c, 0x1153cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 01153e  call 0x11c20
    X86_AT(c, 0x1153eu);
    push32(c, 0x11543u); f_00011c20(c); X86_RET(c, 0x11543u);
    X86_TICK(c, 15);
    // 011543  add ah, 4
    X86_AT(c, 0x11543u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011546  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11546u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01154e  or al, 0xf
    X86_AT(c, 0x1154eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011550  call 0x11c20
    X86_AT(c, 0x11550u);
    push32(c, 0x11555u); f_00011c20(c); X86_RET(c, 0x11555u);
    X86_TICK(c, 15);
    // 011555  add ah, 4
    X86_AT(c, 0x11555u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011558  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x11558u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 011560  or al, 0xf
    X86_AT(c, 0x11560u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011562  call 0x11c20
    X86_AT(c, 0x11562u);
    push32(c, 0x11567u); f_00011c20(c); X86_RET(c, 0x11567u);
    X86_TICK(c, 15);
    // 011567  add ah, 4
    X86_AT(c, 0x11567u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01156a  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x1156au);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 011572  or al, 0xf
    X86_AT(c, 0x11572u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011574  call 0x11c20
    X86_AT(c, 0x11574u);
    push32(c, 0x11579u); f_00011c20(c); X86_RET(c, 0x11579u);
    X86_TICK(c, 13);
    // 011579  mov dl, 0xd8
    X86_AT(c, 0x11579u);
    s8(c, 2, 0xD8u);
    // 01157b  mov al, cl
    X86_AT(c, 0x1157bu);
    s8(c, 0, g8(c, 1));
    // 01157d  mov ah, 0x28
    X86_AT(c, 0x1157du);
    s8(c, 4, 0x28u);
    // 01157f  call 0x11c20
    X86_AT(c, 0x1157fu);
    push32(c, 0x11584u); f_00011c20(c); X86_RET(c, 0x11584u);
    X86_TICK(c, 19);
    // 011584  pop eax
    X86_AT(c, 0x11584u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011585  pop edx
    X86_AT(c, 0x11585u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011586  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11586u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01158e  call 0x11c20
    X86_AT(c, 0x1158eu);
    push32(c, 0x11593u); f_00011c20(c); X86_RET(c, 0x11593u);
    X86_TICK(c, 13);
    // 011593  add ah, 4
    X86_AT(c, 0x11593u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011596  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11596u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01159e  call 0x11c20
    X86_AT(c, 0x1159eu);
    push32(c, 0x115a3u); f_00011c20(c); X86_RET(c, 0x115a3u);
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
L_13553:
    X86_TICK(c, 36);
    // 013553  popal 
    X86_AT(c, 0x13553u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 013554  mov al, 2
    X86_AT(c, 0x13554u);
    s8(c, 0, 0x2u);
    // 013556  ret 
    X86_AT(c, 0x13556u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x113aau, "ran off the end of a function");
}
void f_000113b0(X86Cpu& c) {
    X86_TICK(c, 30);
    // 0113b0  or byte ptr gs:[edi + 0x1e6], ch
    X86_AT(c, 0x113b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x1E6u)); uint32_t v = rd8(ea); wr8(ea, x86_logic(c, v | g8(c, 5), 1)); }
    // 0113b7  sub dh, 0xc
    X86_AT(c, 0x113b7u);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_sub(c, v, 0xCu, 0, 1)); }
    // 0113ba  mov byte ptr gs:[edi + ebx*1 + 0x1e0], dh
    X86_AT(c, 0x113bau);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1E0u)), g8(c, 6));
    // 0113c2  mov bp, word ptr gs:[edi + ebx*2 + 0x1e8]
    X86_AT(c, 0x113c2u);
    s16(c, 5, rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1E8u))));
    // 0113cb  movzx esi, dl
    X86_AT(c, 0x113cbu);
    c.r[6] = g8(c, 2);
    // 0113ce  movzx ecx, dh
    X86_AT(c, 0x113ceu);
    c.r[1] = g8(c, 6);
    // 0113d1  mov dx, 0x4d8
    X86_AT(c, 0x113d1u);
    s16(c, 2, 0x4D8u);
    // 0113d5  cmp bl, 2
    X86_AT(c, 0x113d5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0113d8  jbe 0x113e6
    X86_AT(c, 0x113d8u);
    if (x86_cc(c, 6)) { goto L_113e6; }
    X86_TICK(c, 6);
    // 0113da  add dl, 4
    X86_AT(c, 0x113dau);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0113dd  add edi, 0xf0
    X86_AT(c, 0x113ddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0113e3  sub bl, 3
    X86_AT(c, 0x113e3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_113e6:
    X86_TICK(c, 7);
    // 0113e6  test cl, cl
    X86_AT(c, 0x113e6u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 0113e8  jne 0x113f2
    X86_AT(c, 0x113e8u);
    if (x86_cc(c, 5)) { goto L_113f2; }
    X86_TICK(c, 11);
    // 0113ea  mov cx, 0x268
    X86_AT(c, 0x113eau);
    s16(c, 1, 0x268u);
    // 0113ee  xor al, al
    X86_AT(c, 0x113eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0113f0  jmp 0x11405
    X86_AT(c, 0x113f0u);
    goto L_11405;
L_113f2:
    X86_TICK(c, 53);
    // 0113f2  mov eax, ecx
    X86_AT(c, 0x113f2u);
    c.r[0] = c.r[1];
    // 0113f4  dec eax
    X86_AT(c, 0x113f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0113f5  mov cl, 0xc
    X86_AT(c, 0x113f5u);
    s8(c, 1, 0xCu);
    // 0113f7  div cl
    X86_AT(c, 0x113f7u);
    x86_div(c, g8(c, 1), 1, 0x113f7u);
    // 0113f9  movzx ecx, ah
    X86_AT(c, 0x113f9u);
    c.r[1] = g8(c, 4);
    // 0113fc  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x113fcu);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
L_11405:
    X86_TICK(c, 9);
    // 011405  add cx, bp
    X86_AT(c, 0x11405u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[5] & 0xFFFFu), 0, 2)); }
    // 011408  cmp cx, 0x268
    X86_AT(c, 0x11408u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x268u, 0, 2);
    // 01140d  jge 0x11421
    X86_AT(c, 0x1140du);
    if (x86_cc(c, 13)) { goto L_11421; }
    X86_TICK(c, 7);
    // 01140f  test al, al
    X86_AT(c, 0x1140fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011411  jne 0x11419
    X86_AT(c, 0x11411u);
    if (x86_cc(c, 5)) { goto L_11419; }
    X86_TICK(c, 9);
    // 011413  mov cx, 0x268
    X86_AT(c, 0x11413u);
    s16(c, 1, 0x268u);
    // 011417  jmp 0x11438
    X86_AT(c, 0x11417u);
    goto L_11438;
L_11419:
    X86_TICK(c, 11);
    // 011419  add cx, 0x268
    X86_AT(c, 0x11419u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x268u, 0, 2)); }
    // 01141e  dec eax
    X86_AT(c, 0x1141eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 01141f  jmp 0x11438
    X86_AT(c, 0x1141fu);
    goto L_11438;
L_11421:
    X86_TICK(c, 7);
    // 011421  cmp cx, 0x4d0
    X86_AT(c, 0x11421u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4D0u, 0, 2);
    // 011426  jle 0x11438
    X86_AT(c, 0x11426u);
    if (x86_cc(c, 14)) { goto L_11438; }
    X86_TICK(c, 7);
    // 011428  cmp al, 7
    X86_AT(c, 0x11428u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 01142a  jne 0x11432
    X86_AT(c, 0x1142au);
    if (x86_cc(c, 5)) { goto L_11432; }
    X86_TICK(c, 9);
    // 01142c  mov cx, 0x3c8c
    X86_AT(c, 0x1142cu);
    s16(c, 1, 0x3C8Cu);
    // 011430  jmp 0x11438
    X86_AT(c, 0x11430u);
    goto L_11438;
L_11432:
    X86_TICK(c, 4);
    // 011432  sub cx, 0x268
    X86_AT(c, 0x11432u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x268u, 0, 2)); }
    // 011437  inc eax
    X86_AT(c, 0x11437u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_11438:
    X86_TICK(c, 18);
    // 011438  shl al, 3
    X86_AT(c, 0x11438u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 0, r); }
    // 01143b  or ch, al
    X86_AT(c, 0x1143bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | g8(c, 0), 1)); }
    // 01143d  mov ah, 0xa4
    X86_AT(c, 0x1143du);
    s8(c, 4, 0xA4u);
    // 01143f  add ah, bl
    X86_AT(c, 0x1143fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011441  mov al, ch
    X86_AT(c, 0x11441u);
    s8(c, 0, g8(c, 5));
    // 011443  call 0x11bf0
    X86_AT(c, 0x11443u);
    push32(c, 0x11448u); f_00011bf0(c); X86_RET(c, 0x11448u);
    X86_TICK(c, 11);
    // 011448  sub ah, 4
    X86_AT(c, 0x11448u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x4u, 0, 1)); }
    // 01144b  mov al, cl
    X86_AT(c, 0x1144bu);
    s8(c, 0, g8(c, 1));
    // 01144d  call 0x11bf0
    X86_AT(c, 0x1144du);
    push32(c, 0x11452u); f_00011bf0(c); X86_RET(c, 0x11452u);
    X86_TICK(c, 28);
    // 011452  mov ecx, esi
    X86_AT(c, 0x11452u);
    c.r[1] = c.r[6];
    // 011454  shr cl, 2
    X86_AT(c, 0x11454u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 011457  add cl, 0x60
    X86_AT(c, 0x11457u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x60u, 0, 1)); }
    // 01145a  mov esi, ebx
    X86_AT(c, 0x1145au);
    c.r[6] = c.r[3];
    // 01145c  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x1145cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 011464  and eax, 7
    X86_AT(c, 0x11464u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 011469  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x11469u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 011470  mov byte ptr gs:[edi + esi*1 + 0xe0], cl
    X86_AT(c, 0x11470u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u)), g8(c, 1));
    // 011478  add bh, bh
    X86_AT(c, 0x11478u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 01147a  jae 0x114a3
    X86_AT(c, 0x1147au);
    if (x86_cc(c, 3)) { goto L_114a3; }
    X86_TICK(c, 73);
    // 01147c  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x1147cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 011484  xor al, 0x7f
    X86_AT(c, 0x11484u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011486  mul cl
    X86_AT(c, 0x11486u);
    x86_mul(c, g8(c, 1), 1);
    // 011488  shr eax, 7
    X86_AT(c, 0x11488u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01148b  inc eax
    X86_AT(c, 0x1148bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01148c  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1148cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011494  shr eax, 7
    X86_AT(c, 0x11494u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011497  inc eax
    X86_AT(c, 0x11497u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011498  xor al, 0x7f
    X86_AT(c, 0x11498u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01149a  mov ah, 0x40
    X86_AT(c, 0x1149au);
    s8(c, 4, 0x40u);
    // 01149c  add ah, bl
    X86_AT(c, 0x1149cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01149e  call 0x11bf0
    X86_AT(c, 0x1149eu);
    push32(c, 0x114a3u); f_00011bf0(c); X86_RET(c, 0x114a3u);
L_114a3:
    X86_TICK(c, 7);
    // 0114a3  add bh, bh
    X86_AT(c, 0x114a3u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114a5  jae 0x114ce
    X86_AT(c, 0x114a5u);
    if (x86_cc(c, 3)) { goto L_114ce; }
    X86_TICK(c, 73);
    // 0114a7  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x114a7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 0114af  xor al, 0x7f
    X86_AT(c, 0x114afu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114b1  mul cl
    X86_AT(c, 0x114b1u);
    x86_mul(c, g8(c, 1), 1);
    // 0114b3  shr eax, 7
    X86_AT(c, 0x114b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114b6  inc eax
    X86_AT(c, 0x114b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114b7  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114b7u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114bf  shr eax, 7
    X86_AT(c, 0x114bfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114c2  inc eax
    X86_AT(c, 0x114c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114c3  xor al, 0x7f
    X86_AT(c, 0x114c3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114c5  mov ah, 0x44
    X86_AT(c, 0x114c5u);
    s8(c, 4, 0x44u);
    // 0114c7  add ah, bl
    X86_AT(c, 0x114c7u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114c9  call 0x11bf0
    X86_AT(c, 0x114c9u);
    push32(c, 0x114ceu); f_00011bf0(c); X86_RET(c, 0x114ceu);
L_114ce:
    X86_TICK(c, 7);
    // 0114ce  add bh, bh
    X86_AT(c, 0x114ceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114d0  jae 0x114f9
    X86_AT(c, 0x114d0u);
    if (x86_cc(c, 3)) { goto L_114f9; }
    X86_TICK(c, 73);
    // 0114d2  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x114d2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 0114da  xor al, 0x7f
    X86_AT(c, 0x114dau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114dc  mul cl
    X86_AT(c, 0x114dcu);
    x86_mul(c, g8(c, 1), 1);
    // 0114de  shr eax, 7
    X86_AT(c, 0x114deu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114e1  inc eax
    X86_AT(c, 0x114e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114e2  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114e2u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114ea  shr eax, 7
    X86_AT(c, 0x114eau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114ed  inc eax
    X86_AT(c, 0x114edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114ee  xor al, 0x7f
    X86_AT(c, 0x114eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114f0  mov ah, 0x48
    X86_AT(c, 0x114f0u);
    s8(c, 4, 0x48u);
    // 0114f2  add ah, bl
    X86_AT(c, 0x114f2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114f4  call 0x11bf0
    X86_AT(c, 0x114f4u);
    push32(c, 0x114f9u); f_00011bf0(c); X86_RET(c, 0x114f9u);
L_114f9:
    X86_TICK(c, 7);
    // 0114f9  add bh, bh
    X86_AT(c, 0x114f9u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114fb  jae 0x11524
    X86_AT(c, 0x114fbu);
    if (x86_cc(c, 3)) { goto L_11524; }
    X86_TICK(c, 73);
    // 0114fd  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x114fdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011505  xor al, 0x7f
    X86_AT(c, 0x11505u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011507  mul cl
    X86_AT(c, 0x11507u);
    x86_mul(c, g8(c, 1), 1);
    // 011509  shr eax, 7
    X86_AT(c, 0x11509u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01150c  inc eax
    X86_AT(c, 0x1150cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01150d  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1150du);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011515  shr eax, 7
    X86_AT(c, 0x11515u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011518  inc eax
    X86_AT(c, 0x11518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011519  xor al, 0x7f
    X86_AT(c, 0x11519u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01151b  mov ah, 0x4c
    X86_AT(c, 0x1151bu);
    s8(c, 4, 0x4Cu);
    // 01151d  add ah, bl
    X86_AT(c, 0x1151du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01151f  call 0x11bf0
    X86_AT(c, 0x1151fu);
    push32(c, 0x11524u); f_00011bf0(c); X86_RET(c, 0x11524u);
L_11524:
    X86_TICK(c, 9);
    // 011524  mov cl, bl
    X86_AT(c, 0x11524u);
    s8(c, 1, g8(c, 3));
    // 011526  cmp dl, 0xd8
    X86_AT(c, 0x11526u);
    (void)x86_sub(c, g8(c, 2), 0xD8u, 0, 1);
    // 011529  je 0x1152e
    X86_AT(c, 0x11529u);
    if (x86_cc(c, 4)) { goto L_1152e; }
    X86_TICK(c, 2);
    // 01152b  add cl, 4
    X86_AT(c, 0x1152bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x4u, 0, 1)); }
L_1152e:
    X86_TICK(c, 21);
    // 01152e  mov ah, 0x80
    X86_AT(c, 0x1152eu);
    s8(c, 4, 0x80u);
    // 011530  add ah, bl
    X86_AT(c, 0x11530u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011532  push edx
    X86_AT(c, 0x11532u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011533  push eax
    X86_AT(c, 0x11533u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011534  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11534u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01153c  or al, 0xf
    X86_AT(c, 0x1153cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 01153e  call 0x11c20
    X86_AT(c, 0x1153eu);
    push32(c, 0x11543u); f_00011c20(c); X86_RET(c, 0x11543u);
    X86_TICK(c, 15);
    // 011543  add ah, 4
    X86_AT(c, 0x11543u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011546  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11546u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01154e  or al, 0xf
    X86_AT(c, 0x1154eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011550  call 0x11c20
    X86_AT(c, 0x11550u);
    push32(c, 0x11555u); f_00011c20(c); X86_RET(c, 0x11555u);
    X86_TICK(c, 15);
    // 011555  add ah, 4
    X86_AT(c, 0x11555u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011558  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x11558u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 011560  or al, 0xf
    X86_AT(c, 0x11560u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011562  call 0x11c20
    X86_AT(c, 0x11562u);
    push32(c, 0x11567u); f_00011c20(c); X86_RET(c, 0x11567u);
    X86_TICK(c, 15);
    // 011567  add ah, 4
    X86_AT(c, 0x11567u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01156a  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x1156au);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 011572  or al, 0xf
    X86_AT(c, 0x11572u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011574  call 0x11c20
    X86_AT(c, 0x11574u);
    push32(c, 0x11579u); f_00011c20(c); X86_RET(c, 0x11579u);
    X86_TICK(c, 13);
    // 011579  mov dl, 0xd8
    X86_AT(c, 0x11579u);
    s8(c, 2, 0xD8u);
    // 01157b  mov al, cl
    X86_AT(c, 0x1157bu);
    s8(c, 0, g8(c, 1));
    // 01157d  mov ah, 0x28
    X86_AT(c, 0x1157du);
    s8(c, 4, 0x28u);
    // 01157f  call 0x11c20
    X86_AT(c, 0x1157fu);
    push32(c, 0x11584u); f_00011c20(c); X86_RET(c, 0x11584u);
    X86_TICK(c, 19);
    // 011584  pop eax
    X86_AT(c, 0x11584u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011585  pop edx
    X86_AT(c, 0x11585u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011586  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11586u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01158e  call 0x11c20
    X86_AT(c, 0x1158eu);
    push32(c, 0x11593u); f_00011c20(c); X86_RET(c, 0x11593u);
    X86_TICK(c, 13);
    // 011593  add ah, 4
    X86_AT(c, 0x11593u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011596  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11596u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01159e  call 0x11c20
    X86_AT(c, 0x1159eu);
    push32(c, 0x115a3u); f_00011c20(c); X86_RET(c, 0x115a3u);
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x113b0u, "ran off the end of a function");
}
void f_000113b7(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0113b7  sub dh, 0xc
    X86_AT(c, 0x113b7u);
    { uint32_t v = g8(c, 6); s8(c, 6, x86_sub(c, v, 0xCu, 0, 1)); }
    // 0113ba  mov byte ptr gs:[edi + ebx*1 + 0x1e0], dh
    X86_AT(c, 0x113bau);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1E0u)), g8(c, 6));
    // 0113c2  mov bp, word ptr gs:[edi + ebx*2 + 0x1e8]
    X86_AT(c, 0x113c2u);
    s16(c, 5, rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1E8u))));
    // 0113cb  movzx esi, dl
    X86_AT(c, 0x113cbu);
    c.r[6] = g8(c, 2);
    // 0113ce  movzx ecx, dh
    X86_AT(c, 0x113ceu);
    c.r[1] = g8(c, 6);
    // 0113d1  mov dx, 0x4d8
    X86_AT(c, 0x113d1u);
    s16(c, 2, 0x4D8u);
    // 0113d5  cmp bl, 2
    X86_AT(c, 0x113d5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0113d8  jbe 0x113e6
    X86_AT(c, 0x113d8u);
    if (x86_cc(c, 6)) { goto L_113e6; }
    X86_TICK(c, 6);
    // 0113da  add dl, 4
    X86_AT(c, 0x113dau);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0113dd  add edi, 0xf0
    X86_AT(c, 0x113ddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0113e3  sub bl, 3
    X86_AT(c, 0x113e3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_113e6:
    X86_TICK(c, 7);
    // 0113e6  test cl, cl
    X86_AT(c, 0x113e6u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 0113e8  jne 0x113f2
    X86_AT(c, 0x113e8u);
    if (x86_cc(c, 5)) { goto L_113f2; }
    X86_TICK(c, 11);
    // 0113ea  mov cx, 0x268
    X86_AT(c, 0x113eau);
    s16(c, 1, 0x268u);
    // 0113ee  xor al, al
    X86_AT(c, 0x113eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0113f0  jmp 0x11405
    X86_AT(c, 0x113f0u);
    goto L_11405;
L_113f2:
    X86_TICK(c, 53);
    // 0113f2  mov eax, ecx
    X86_AT(c, 0x113f2u);
    c.r[0] = c.r[1];
    // 0113f4  dec eax
    X86_AT(c, 0x113f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0113f5  mov cl, 0xc
    X86_AT(c, 0x113f5u);
    s8(c, 1, 0xCu);
    // 0113f7  div cl
    X86_AT(c, 0x113f7u);
    x86_div(c, g8(c, 1), 1, 0x113f7u);
    // 0113f9  movzx ecx, ah
    X86_AT(c, 0x113f9u);
    c.r[1] = g8(c, 4);
    // 0113fc  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x113fcu);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
L_11405:
    X86_TICK(c, 9);
    // 011405  add cx, bp
    X86_AT(c, 0x11405u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[5] & 0xFFFFu), 0, 2)); }
    // 011408  cmp cx, 0x268
    X86_AT(c, 0x11408u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x268u, 0, 2);
    // 01140d  jge 0x11421
    X86_AT(c, 0x1140du);
    if (x86_cc(c, 13)) { goto L_11421; }
    X86_TICK(c, 7);
    // 01140f  test al, al
    X86_AT(c, 0x1140fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011411  jne 0x11419
    X86_AT(c, 0x11411u);
    if (x86_cc(c, 5)) { goto L_11419; }
    X86_TICK(c, 9);
    // 011413  mov cx, 0x268
    X86_AT(c, 0x11413u);
    s16(c, 1, 0x268u);
    // 011417  jmp 0x11438
    X86_AT(c, 0x11417u);
    goto L_11438;
L_11419:
    X86_TICK(c, 11);
    // 011419  add cx, 0x268
    X86_AT(c, 0x11419u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x268u, 0, 2)); }
    // 01141e  dec eax
    X86_AT(c, 0x1141eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 01141f  jmp 0x11438
    X86_AT(c, 0x1141fu);
    goto L_11438;
L_11421:
    X86_TICK(c, 7);
    // 011421  cmp cx, 0x4d0
    X86_AT(c, 0x11421u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4D0u, 0, 2);
    // 011426  jle 0x11438
    X86_AT(c, 0x11426u);
    if (x86_cc(c, 14)) { goto L_11438; }
    X86_TICK(c, 7);
    // 011428  cmp al, 7
    X86_AT(c, 0x11428u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 01142a  jne 0x11432
    X86_AT(c, 0x1142au);
    if (x86_cc(c, 5)) { goto L_11432; }
    X86_TICK(c, 9);
    // 01142c  mov cx, 0x3c8c
    X86_AT(c, 0x1142cu);
    s16(c, 1, 0x3C8Cu);
    // 011430  jmp 0x11438
    X86_AT(c, 0x11430u);
    goto L_11438;
L_11432:
    X86_TICK(c, 4);
    // 011432  sub cx, 0x268
    X86_AT(c, 0x11432u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x268u, 0, 2)); }
    // 011437  inc eax
    X86_AT(c, 0x11437u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_11438:
    X86_TICK(c, 18);
    // 011438  shl al, 3
    X86_AT(c, 0x11438u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 0, r); }
    // 01143b  or ch, al
    X86_AT(c, 0x1143bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | g8(c, 0), 1)); }
    // 01143d  mov ah, 0xa4
    X86_AT(c, 0x1143du);
    s8(c, 4, 0xA4u);
    // 01143f  add ah, bl
    X86_AT(c, 0x1143fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011441  mov al, ch
    X86_AT(c, 0x11441u);
    s8(c, 0, g8(c, 5));
    // 011443  call 0x11bf0
    X86_AT(c, 0x11443u);
    push32(c, 0x11448u); f_00011bf0(c); X86_RET(c, 0x11448u);
    X86_TICK(c, 11);
    // 011448  sub ah, 4
    X86_AT(c, 0x11448u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x4u, 0, 1)); }
    // 01144b  mov al, cl
    X86_AT(c, 0x1144bu);
    s8(c, 0, g8(c, 1));
    // 01144d  call 0x11bf0
    X86_AT(c, 0x1144du);
    push32(c, 0x11452u); f_00011bf0(c); X86_RET(c, 0x11452u);
    X86_TICK(c, 28);
    // 011452  mov ecx, esi
    X86_AT(c, 0x11452u);
    c.r[1] = c.r[6];
    // 011454  shr cl, 2
    X86_AT(c, 0x11454u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 011457  add cl, 0x60
    X86_AT(c, 0x11457u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x60u, 0, 1)); }
    // 01145a  mov esi, ebx
    X86_AT(c, 0x1145au);
    c.r[6] = c.r[3];
    // 01145c  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x1145cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 011464  and eax, 7
    X86_AT(c, 0x11464u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 011469  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x11469u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 011470  mov byte ptr gs:[edi + esi*1 + 0xe0], cl
    X86_AT(c, 0x11470u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u)), g8(c, 1));
    // 011478  add bh, bh
    X86_AT(c, 0x11478u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 01147a  jae 0x114a3
    X86_AT(c, 0x1147au);
    if (x86_cc(c, 3)) { goto L_114a3; }
    X86_TICK(c, 73);
    // 01147c  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x1147cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 011484  xor al, 0x7f
    X86_AT(c, 0x11484u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011486  mul cl
    X86_AT(c, 0x11486u);
    x86_mul(c, g8(c, 1), 1);
    // 011488  shr eax, 7
    X86_AT(c, 0x11488u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01148b  inc eax
    X86_AT(c, 0x1148bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01148c  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1148cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011494  shr eax, 7
    X86_AT(c, 0x11494u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011497  inc eax
    X86_AT(c, 0x11497u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011498  xor al, 0x7f
    X86_AT(c, 0x11498u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01149a  mov ah, 0x40
    X86_AT(c, 0x1149au);
    s8(c, 4, 0x40u);
    // 01149c  add ah, bl
    X86_AT(c, 0x1149cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01149e  call 0x11bf0
    X86_AT(c, 0x1149eu);
    push32(c, 0x114a3u); f_00011bf0(c); X86_RET(c, 0x114a3u);
L_114a3:
    X86_TICK(c, 7);
    // 0114a3  add bh, bh
    X86_AT(c, 0x114a3u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114a5  jae 0x114ce
    X86_AT(c, 0x114a5u);
    if (x86_cc(c, 3)) { goto L_114ce; }
    X86_TICK(c, 73);
    // 0114a7  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x114a7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 0114af  xor al, 0x7f
    X86_AT(c, 0x114afu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114b1  mul cl
    X86_AT(c, 0x114b1u);
    x86_mul(c, g8(c, 1), 1);
    // 0114b3  shr eax, 7
    X86_AT(c, 0x114b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114b6  inc eax
    X86_AT(c, 0x114b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114b7  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114b7u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114bf  shr eax, 7
    X86_AT(c, 0x114bfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114c2  inc eax
    X86_AT(c, 0x114c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114c3  xor al, 0x7f
    X86_AT(c, 0x114c3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114c5  mov ah, 0x44
    X86_AT(c, 0x114c5u);
    s8(c, 4, 0x44u);
    // 0114c7  add ah, bl
    X86_AT(c, 0x114c7u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114c9  call 0x11bf0
    X86_AT(c, 0x114c9u);
    push32(c, 0x114ceu); f_00011bf0(c); X86_RET(c, 0x114ceu);
L_114ce:
    X86_TICK(c, 7);
    // 0114ce  add bh, bh
    X86_AT(c, 0x114ceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114d0  jae 0x114f9
    X86_AT(c, 0x114d0u);
    if (x86_cc(c, 3)) { goto L_114f9; }
    X86_TICK(c, 73);
    // 0114d2  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x114d2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 0114da  xor al, 0x7f
    X86_AT(c, 0x114dau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114dc  mul cl
    X86_AT(c, 0x114dcu);
    x86_mul(c, g8(c, 1), 1);
    // 0114de  shr eax, 7
    X86_AT(c, 0x114deu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114e1  inc eax
    X86_AT(c, 0x114e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114e2  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114e2u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114ea  shr eax, 7
    X86_AT(c, 0x114eau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114ed  inc eax
    X86_AT(c, 0x114edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114ee  xor al, 0x7f
    X86_AT(c, 0x114eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114f0  mov ah, 0x48
    X86_AT(c, 0x114f0u);
    s8(c, 4, 0x48u);
    // 0114f2  add ah, bl
    X86_AT(c, 0x114f2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114f4  call 0x11bf0
    X86_AT(c, 0x114f4u);
    push32(c, 0x114f9u); f_00011bf0(c); X86_RET(c, 0x114f9u);
L_114f9:
    X86_TICK(c, 7);
    // 0114f9  add bh, bh
    X86_AT(c, 0x114f9u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114fb  jae 0x11524
    X86_AT(c, 0x114fbu);
    if (x86_cc(c, 3)) { goto L_11524; }
    X86_TICK(c, 73);
    // 0114fd  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x114fdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011505  xor al, 0x7f
    X86_AT(c, 0x11505u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011507  mul cl
    X86_AT(c, 0x11507u);
    x86_mul(c, g8(c, 1), 1);
    // 011509  shr eax, 7
    X86_AT(c, 0x11509u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01150c  inc eax
    X86_AT(c, 0x1150cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01150d  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1150du);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011515  shr eax, 7
    X86_AT(c, 0x11515u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011518  inc eax
    X86_AT(c, 0x11518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011519  xor al, 0x7f
    X86_AT(c, 0x11519u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01151b  mov ah, 0x4c
    X86_AT(c, 0x1151bu);
    s8(c, 4, 0x4Cu);
    // 01151d  add ah, bl
    X86_AT(c, 0x1151du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01151f  call 0x11bf0
    X86_AT(c, 0x1151fu);
    push32(c, 0x11524u); f_00011bf0(c); X86_RET(c, 0x11524u);
L_11524:
    X86_TICK(c, 9);
    // 011524  mov cl, bl
    X86_AT(c, 0x11524u);
    s8(c, 1, g8(c, 3));
    // 011526  cmp dl, 0xd8
    X86_AT(c, 0x11526u);
    (void)x86_sub(c, g8(c, 2), 0xD8u, 0, 1);
    // 011529  je 0x1152e
    X86_AT(c, 0x11529u);
    if (x86_cc(c, 4)) { goto L_1152e; }
    X86_TICK(c, 2);
    // 01152b  add cl, 4
    X86_AT(c, 0x1152bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x4u, 0, 1)); }
L_1152e:
    X86_TICK(c, 21);
    // 01152e  mov ah, 0x80
    X86_AT(c, 0x1152eu);
    s8(c, 4, 0x80u);
    // 011530  add ah, bl
    X86_AT(c, 0x11530u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011532  push edx
    X86_AT(c, 0x11532u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011533  push eax
    X86_AT(c, 0x11533u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011534  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11534u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01153c  or al, 0xf
    X86_AT(c, 0x1153cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 01153e  call 0x11c20
    X86_AT(c, 0x1153eu);
    push32(c, 0x11543u); f_00011c20(c); X86_RET(c, 0x11543u);
    X86_TICK(c, 15);
    // 011543  add ah, 4
    X86_AT(c, 0x11543u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011546  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11546u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01154e  or al, 0xf
    X86_AT(c, 0x1154eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011550  call 0x11c20
    X86_AT(c, 0x11550u);
    push32(c, 0x11555u); f_00011c20(c); X86_RET(c, 0x11555u);
    X86_TICK(c, 15);
    // 011555  add ah, 4
    X86_AT(c, 0x11555u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011558  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x11558u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 011560  or al, 0xf
    X86_AT(c, 0x11560u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011562  call 0x11c20
    X86_AT(c, 0x11562u);
    push32(c, 0x11567u); f_00011c20(c); X86_RET(c, 0x11567u);
    X86_TICK(c, 15);
    // 011567  add ah, 4
    X86_AT(c, 0x11567u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01156a  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x1156au);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 011572  or al, 0xf
    X86_AT(c, 0x11572u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011574  call 0x11c20
    X86_AT(c, 0x11574u);
    push32(c, 0x11579u); f_00011c20(c); X86_RET(c, 0x11579u);
    X86_TICK(c, 13);
    // 011579  mov dl, 0xd8
    X86_AT(c, 0x11579u);
    s8(c, 2, 0xD8u);
    // 01157b  mov al, cl
    X86_AT(c, 0x1157bu);
    s8(c, 0, g8(c, 1));
    // 01157d  mov ah, 0x28
    X86_AT(c, 0x1157du);
    s8(c, 4, 0x28u);
    // 01157f  call 0x11c20
    X86_AT(c, 0x1157fu);
    push32(c, 0x11584u); f_00011c20(c); X86_RET(c, 0x11584u);
    X86_TICK(c, 19);
    // 011584  pop eax
    X86_AT(c, 0x11584u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011585  pop edx
    X86_AT(c, 0x11585u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011586  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11586u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01158e  call 0x11c20
    X86_AT(c, 0x1158eu);
    push32(c, 0x11593u); f_00011c20(c); X86_RET(c, 0x11593u);
    X86_TICK(c, 13);
    // 011593  add ah, 4
    X86_AT(c, 0x11593u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011596  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11596u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01159e  call 0x11c20
    X86_AT(c, 0x1159eu);
    push32(c, 0x115a3u); f_00011c20(c); X86_RET(c, 0x115a3u);
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x113b7u, "ran off the end of a function");
}
void f_000113ba(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0113ba  mov byte ptr gs:[edi + ebx*1 + 0x1e0], dh
    X86_AT(c, 0x113bau);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] + 0x1E0u)), g8(c, 6));
    // 0113c2  mov bp, word ptr gs:[edi + ebx*2 + 0x1e8]
    X86_AT(c, 0x113c2u);
    s16(c, 5, rd16((c.sbase[5] + (uint32_t)(c.r[7] + c.r[3] * 2 + 0x1E8u))));
    // 0113cb  movzx esi, dl
    X86_AT(c, 0x113cbu);
    c.r[6] = g8(c, 2);
    // 0113ce  movzx ecx, dh
    X86_AT(c, 0x113ceu);
    c.r[1] = g8(c, 6);
    // 0113d1  mov dx, 0x4d8
    X86_AT(c, 0x113d1u);
    s16(c, 2, 0x4D8u);
    // 0113d5  cmp bl, 2
    X86_AT(c, 0x113d5u);
    (void)x86_sub(c, g8(c, 3), 0x2u, 0, 1);
    // 0113d8  jbe 0x113e6
    X86_AT(c, 0x113d8u);
    if (x86_cc(c, 6)) { goto L_113e6; }
    X86_TICK(c, 6);
    // 0113da  add dl, 4
    X86_AT(c, 0x113dau);
    { uint32_t v = g8(c, 2); s8(c, 2, x86_add(c, v, 0x4u, 0, 1)); }
    // 0113dd  add edi, 0xf0
    X86_AT(c, 0x113ddu);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xF0u, 0, 4); }
    // 0113e3  sub bl, 3
    X86_AT(c, 0x113e3u);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_sub(c, v, 0x3u, 0, 1)); }
L_113e6:
    X86_TICK(c, 7);
    // 0113e6  test cl, cl
    X86_AT(c, 0x113e6u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 0113e8  jne 0x113f2
    X86_AT(c, 0x113e8u);
    if (x86_cc(c, 5)) { goto L_113f2; }
    X86_TICK(c, 11);
    // 0113ea  mov cx, 0x268
    X86_AT(c, 0x113eau);
    s16(c, 1, 0x268u);
    // 0113ee  xor al, al
    X86_AT(c, 0x113eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0113f0  jmp 0x11405
    X86_AT(c, 0x113f0u);
    goto L_11405;
L_113f2:
    X86_TICK(c, 53);
    // 0113f2  mov eax, ecx
    X86_AT(c, 0x113f2u);
    c.r[0] = c.r[1];
    // 0113f4  dec eax
    X86_AT(c, 0x113f4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 0113f5  mov cl, 0xc
    X86_AT(c, 0x113f5u);
    s8(c, 1, 0xCu);
    // 0113f7  div cl
    X86_AT(c, 0x113f7u);
    x86_div(c, g8(c, 1), 1, 0x113f7u);
    // 0113f9  movzx ecx, ah
    X86_AT(c, 0x113f9u);
    c.r[1] = g8(c, 4);
    // 0113fc  mov cx, word ptr cs:[ecx*2 + 0x13590]
    X86_AT(c, 0x113fcu);
    s16(c, 1, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 2 + 0x13590u))));
L_11405:
    X86_TICK(c, 9);
    // 011405  add cx, bp
    X86_AT(c, 0x11405u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, (c.r[5] & 0xFFFFu), 0, 2)); }
    // 011408  cmp cx, 0x268
    X86_AT(c, 0x11408u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x268u, 0, 2);
    // 01140d  jge 0x11421
    X86_AT(c, 0x1140du);
    if (x86_cc(c, 13)) { goto L_11421; }
    X86_TICK(c, 7);
    // 01140f  test al, al
    X86_AT(c, 0x1140fu);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 011411  jne 0x11419
    X86_AT(c, 0x11411u);
    if (x86_cc(c, 5)) { goto L_11419; }
    X86_TICK(c, 9);
    // 011413  mov cx, 0x268
    X86_AT(c, 0x11413u);
    s16(c, 1, 0x268u);
    // 011417  jmp 0x11438
    X86_AT(c, 0x11417u);
    goto L_11438;
L_11419:
    X86_TICK(c, 11);
    // 011419  add cx, 0x268
    X86_AT(c, 0x11419u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x268u, 0, 2)); }
    // 01141e  dec eax
    X86_AT(c, 0x1141eu);
    { uint32_t v = c.r[0]; c.r[0] = x86_dec(c, v, 4); }
    // 01141f  jmp 0x11438
    X86_AT(c, 0x1141fu);
    goto L_11438;
L_11421:
    X86_TICK(c, 7);
    // 011421  cmp cx, 0x4d0
    X86_AT(c, 0x11421u);
    (void)x86_sub(c, (c.r[1] & 0xFFFFu), 0x4D0u, 0, 2);
    // 011426  jle 0x11438
    X86_AT(c, 0x11426u);
    if (x86_cc(c, 14)) { goto L_11438; }
    X86_TICK(c, 7);
    // 011428  cmp al, 7
    X86_AT(c, 0x11428u);
    (void)x86_sub(c, g8(c, 0), 0x7u, 0, 1);
    // 01142a  jne 0x11432
    X86_AT(c, 0x1142au);
    if (x86_cc(c, 5)) { goto L_11432; }
    X86_TICK(c, 9);
    // 01142c  mov cx, 0x3c8c
    X86_AT(c, 0x1142cu);
    s16(c, 1, 0x3C8Cu);
    // 011430  jmp 0x11438
    X86_AT(c, 0x11430u);
    goto L_11438;
L_11432:
    X86_TICK(c, 4);
    // 011432  sub cx, 0x268
    X86_AT(c, 0x11432u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x268u, 0, 2)); }
    // 011437  inc eax
    X86_AT(c, 0x11437u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_11438:
    X86_TICK(c, 18);
    // 011438  shl al, 3
    X86_AT(c, 0x11438u);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 0, r); }
    // 01143b  or ch, al
    X86_AT(c, 0x1143bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v | g8(c, 0), 1)); }
    // 01143d  mov ah, 0xa4
    X86_AT(c, 0x1143du);
    s8(c, 4, 0xA4u);
    // 01143f  add ah, bl
    X86_AT(c, 0x1143fu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011441  mov al, ch
    X86_AT(c, 0x11441u);
    s8(c, 0, g8(c, 5));
    // 011443  call 0x11bf0
    X86_AT(c, 0x11443u);
    push32(c, 0x11448u); f_00011bf0(c); X86_RET(c, 0x11448u);
    X86_TICK(c, 11);
    // 011448  sub ah, 4
    X86_AT(c, 0x11448u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_sub(c, v, 0x4u, 0, 1)); }
    // 01144b  mov al, cl
    X86_AT(c, 0x1144bu);
    s8(c, 0, g8(c, 1));
    // 01144d  call 0x11bf0
    X86_AT(c, 0x1144du);
    push32(c, 0x11452u); f_00011bf0(c); X86_RET(c, 0x11452u);
    X86_TICK(c, 28);
    // 011452  mov ecx, esi
    X86_AT(c, 0x11452u);
    c.r[1] = c.r[6];
    // 011454  shr cl, 2
    X86_AT(c, 0x11454u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x2u, 1, w); if (w) s8(c, 1, r); }
    // 011457  add cl, 0x60
    X86_AT(c, 0x11457u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x60u, 0, 1)); }
    // 01145a  mov esi, ebx
    X86_AT(c, 0x1145au);
    c.r[6] = c.r[3];
    // 01145c  mov al, byte ptr gs:[edi + esi*1 + 0xb0]
    X86_AT(c, 0x1145cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xB0u))));
    // 011464  and eax, 7
    X86_AT(c, 0x11464u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x7u, 4); }
    // 011469  mov bh, byte ptr cs:[eax + 0x135a8]
    X86_AT(c, 0x11469u);
    s8(c, 7, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x135A8u))));
    // 011470  mov byte ptr gs:[edi + esi*1 + 0xe0], cl
    X86_AT(c, 0x11470u);
    wr8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xE0u)), g8(c, 1));
    // 011478  add bh, bh
    X86_AT(c, 0x11478u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 01147a  jae 0x114a3
    X86_AT(c, 0x1147au);
    if (x86_cc(c, 3)) { goto L_114a3; }
    X86_TICK(c, 73);
    // 01147c  mov al, byte ptr gs:[edi + esi*1 + 0xc0]
    X86_AT(c, 0x1147cu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC0u))));
    // 011484  xor al, 0x7f
    X86_AT(c, 0x11484u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011486  mul cl
    X86_AT(c, 0x11486u);
    x86_mul(c, g8(c, 1), 1);
    // 011488  shr eax, 7
    X86_AT(c, 0x11488u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01148b  inc eax
    X86_AT(c, 0x1148bu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01148c  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1148cu);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011494  shr eax, 7
    X86_AT(c, 0x11494u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011497  inc eax
    X86_AT(c, 0x11497u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011498  xor al, 0x7f
    X86_AT(c, 0x11498u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01149a  mov ah, 0x40
    X86_AT(c, 0x1149au);
    s8(c, 4, 0x40u);
    // 01149c  add ah, bl
    X86_AT(c, 0x1149cu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01149e  call 0x11bf0
    X86_AT(c, 0x1149eu);
    push32(c, 0x114a3u); f_00011bf0(c); X86_RET(c, 0x114a3u);
L_114a3:
    X86_TICK(c, 7);
    // 0114a3  add bh, bh
    X86_AT(c, 0x114a3u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114a5  jae 0x114ce
    X86_AT(c, 0x114a5u);
    if (x86_cc(c, 3)) { goto L_114ce; }
    X86_TICK(c, 73);
    // 0114a7  mov al, byte ptr gs:[edi + esi*1 + 0xc4]
    X86_AT(c, 0x114a7u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC4u))));
    // 0114af  xor al, 0x7f
    X86_AT(c, 0x114afu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114b1  mul cl
    X86_AT(c, 0x114b1u);
    x86_mul(c, g8(c, 1), 1);
    // 0114b3  shr eax, 7
    X86_AT(c, 0x114b3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114b6  inc eax
    X86_AT(c, 0x114b6u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114b7  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114b7u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114bf  shr eax, 7
    X86_AT(c, 0x114bfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114c2  inc eax
    X86_AT(c, 0x114c2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114c3  xor al, 0x7f
    X86_AT(c, 0x114c3u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114c5  mov ah, 0x44
    X86_AT(c, 0x114c5u);
    s8(c, 4, 0x44u);
    // 0114c7  add ah, bl
    X86_AT(c, 0x114c7u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114c9  call 0x11bf0
    X86_AT(c, 0x114c9u);
    push32(c, 0x114ceu); f_00011bf0(c); X86_RET(c, 0x114ceu);
L_114ce:
    X86_TICK(c, 7);
    // 0114ce  add bh, bh
    X86_AT(c, 0x114ceu);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114d0  jae 0x114f9
    X86_AT(c, 0x114d0u);
    if (x86_cc(c, 3)) { goto L_114f9; }
    X86_TICK(c, 73);
    // 0114d2  mov al, byte ptr gs:[edi + esi*1 + 0xc8]
    X86_AT(c, 0x114d2u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xC8u))));
    // 0114da  xor al, 0x7f
    X86_AT(c, 0x114dau);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114dc  mul cl
    X86_AT(c, 0x114dcu);
    x86_mul(c, g8(c, 1), 1);
    // 0114de  shr eax, 7
    X86_AT(c, 0x114deu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114e1  inc eax
    X86_AT(c, 0x114e1u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114e2  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x114e2u);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 0114ea  shr eax, 7
    X86_AT(c, 0x114eau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 0114ed  inc eax
    X86_AT(c, 0x114edu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 0114ee  xor al, 0x7f
    X86_AT(c, 0x114eeu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 0114f0  mov ah, 0x48
    X86_AT(c, 0x114f0u);
    s8(c, 4, 0x48u);
    // 0114f2  add ah, bl
    X86_AT(c, 0x114f2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114f4  call 0x11bf0
    X86_AT(c, 0x114f4u);
    push32(c, 0x114f9u); f_00011bf0(c); X86_RET(c, 0x114f9u);
L_114f9:
    X86_TICK(c, 7);
    // 0114f9  add bh, bh
    X86_AT(c, 0x114f9u);
    { uint32_t v = g8(c, 7); s8(c, 7, x86_add(c, v, g8(c, 7), 0, 1)); }
    // 0114fb  jae 0x11524
    X86_AT(c, 0x114fbu);
    if (x86_cc(c, 3)) { goto L_11524; }
    X86_TICK(c, 73);
    // 0114fd  mov al, byte ptr gs:[edi + esi*1 + 0xcc]
    X86_AT(c, 0x114fdu);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xCCu))));
    // 011505  xor al, 0x7f
    X86_AT(c, 0x11505u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 011507  mul cl
    X86_AT(c, 0x11507u);
    x86_mul(c, g8(c, 1), 1);
    // 011509  shr eax, 7
    X86_AT(c, 0x11509u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 01150c  inc eax
    X86_AT(c, 0x1150cu);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 01150d  mul byte ptr gs:[edi + esi*1 + 0xd0]
    X86_AT(c, 0x1150du);
    x86_mul(c, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0xD0u))), 1);
    // 011515  shr eax, 7
    X86_AT(c, 0x11515u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x7u, 4, w); if (w) c.r[0] = r; }
    // 011518  inc eax
    X86_AT(c, 0x11518u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 011519  xor al, 0x7f
    X86_AT(c, 0x11519u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ 0x7Fu, 1)); }
    // 01151b  mov ah, 0x4c
    X86_AT(c, 0x1151bu);
    s8(c, 4, 0x4Cu);
    // 01151d  add ah, bl
    X86_AT(c, 0x1151du);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 01151f  call 0x11bf0
    X86_AT(c, 0x1151fu);
    push32(c, 0x11524u); f_00011bf0(c); X86_RET(c, 0x11524u);
L_11524:
    X86_TICK(c, 9);
    // 011524  mov cl, bl
    X86_AT(c, 0x11524u);
    s8(c, 1, g8(c, 3));
    // 011526  cmp dl, 0xd8
    X86_AT(c, 0x11526u);
    (void)x86_sub(c, g8(c, 2), 0xD8u, 0, 1);
    // 011529  je 0x1152e
    X86_AT(c, 0x11529u);
    if (x86_cc(c, 4)) { goto L_1152e; }
    X86_TICK(c, 2);
    // 01152b  add cl, 4
    X86_AT(c, 0x1152bu);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_add(c, v, 0x4u, 0, 1)); }
L_1152e:
    X86_TICK(c, 21);
    // 01152e  mov ah, 0x80
    X86_AT(c, 0x1152eu);
    s8(c, 4, 0x80u);
    // 011530  add ah, bl
    X86_AT(c, 0x11530u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 011532  push edx
    X86_AT(c, 0x11532u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 011533  push eax
    X86_AT(c, 0x11533u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 011534  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11534u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01153c  or al, 0xf
    X86_AT(c, 0x1153cu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 01153e  call 0x11c20
    X86_AT(c, 0x1153eu);
    push32(c, 0x11543u); f_00011c20(c); X86_RET(c, 0x11543u);
    X86_TICK(c, 15);
    // 011543  add ah, 4
    X86_AT(c, 0x11543u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011546  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11546u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01154e  or al, 0xf
    X86_AT(c, 0x1154eu);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011550  call 0x11c20
    X86_AT(c, 0x11550u);
    push32(c, 0x11555u); f_00011c20(c); X86_RET(c, 0x11555u);
    X86_TICK(c, 15);
    // 011555  add ah, 4
    X86_AT(c, 0x11555u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011558  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x11558u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 011560  or al, 0xf
    X86_AT(c, 0x11560u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011562  call 0x11c20
    X86_AT(c, 0x11562u);
    push32(c, 0x11567u); f_00011c20(c); X86_RET(c, 0x11567u);
    X86_TICK(c, 15);
    // 011567  add ah, 4
    X86_AT(c, 0x11567u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 01156a  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x1156au);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 011572  or al, 0xf
    X86_AT(c, 0x11572u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v | 0xFu, 1)); }
    // 011574  call 0x11c20
    X86_AT(c, 0x11574u);
    push32(c, 0x11579u); f_00011c20(c); X86_RET(c, 0x11579u);
    X86_TICK(c, 13);
    // 011579  mov dl, 0xd8
    X86_AT(c, 0x11579u);
    s8(c, 2, 0xD8u);
    // 01157b  mov al, cl
    X86_AT(c, 0x1157bu);
    s8(c, 0, g8(c, 1));
    // 01157d  mov ah, 0x28
    X86_AT(c, 0x1157du);
    s8(c, 4, 0x28u);
    // 01157f  call 0x11c20
    X86_AT(c, 0x1157fu);
    push32(c, 0x11584u); f_00011c20(c); X86_RET(c, 0x11584u);
    X86_TICK(c, 19);
    // 011584  pop eax
    X86_AT(c, 0x11584u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 011585  pop edx
    X86_AT(c, 0x11585u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 011586  mov al, byte ptr gs:[edi + esi*1 + 0x80]
    X86_AT(c, 0x11586u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x80u))));
    // 01158e  call 0x11c20
    X86_AT(c, 0x1158eu);
    push32(c, 0x11593u); f_00011c20(c); X86_RET(c, 0x11593u);
    X86_TICK(c, 13);
    // 011593  add ah, 4
    X86_AT(c, 0x11593u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 011596  mov al, byte ptr gs:[edi + esi*1 + 0x84]
    X86_AT(c, 0x11596u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x84u))));
    // 01159e  call 0x11c20
    X86_AT(c, 0x1159eu);
    push32(c, 0x115a3u); f_00011c20(c); X86_RET(c, 0x115a3u);
    X86_TICK(c, 13);
    // 0115a3  add ah, 4
    X86_AT(c, 0x115a3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115a6  mov al, byte ptr gs:[edi + esi*1 + 0x88]
    X86_AT(c, 0x115a6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x88u))));
    // 0115ae  call 0x11c20
    X86_AT(c, 0x115aeu);
    push32(c, 0x115b3u); f_00011c20(c); X86_RET(c, 0x115b3u);
    X86_TICK(c, 13);
    // 0115b3  add ah, 4
    X86_AT(c, 0x115b3u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, 0x4u, 0, 1)); }
    // 0115b6  mov al, byte ptr gs:[edi + esi*1 + 0x8c]
    X86_AT(c, 0x115b6u);
    s8(c, 0, rd8((c.sbase[5] + (uint32_t)(c.r[7] + c.r[6] + 0x8Cu))));
    // 0115be  call 0x11c20
    X86_AT(c, 0x115beu);
    push32(c, 0x115c3u); f_00011c20(c); X86_RET(c, 0x115c3u);
    X86_TICK(c, 15);
    // 0115c3  mov dl, 0xd8
    X86_AT(c, 0x115c3u);
    s8(c, 2, 0xD8u);
    // 0115c5  mov al, 0xf0
    X86_AT(c, 0x115c5u);
    s8(c, 0, 0xF0u);
    // 0115c7  add al, cl
    X86_AT(c, 0x115c7u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 1), 0, 1)); }
    // 0115c9  mov ah, 0x28
    X86_AT(c, 0x115c9u);
    s8(c, 4, 0x28u);
    // 0115cb  call 0x11bf0
    X86_AT(c, 0x115cbu);
    push32(c, 0x115d0u); f_00011bf0(c); X86_RET(c, 0x115d0u);
    X86_TICK(c, 36);
    // 0115d0  popal 
    X86_AT(c, 0x115d0u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0115d1  xor al, al
    X86_AT(c, 0x115d1u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v ^ g8(c, 0), 1)); }
    // 0115d3  ret 
    X86_AT(c, 0x115d3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x113bau, "ran off the end of a function");
}
}

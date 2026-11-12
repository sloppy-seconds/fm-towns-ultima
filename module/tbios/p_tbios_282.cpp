#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00011441(X86Cpu& c) {
    X86_TICK(c, 9);
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
    x86_fault(c, 0x11441u, "ran off the end of a function");
}
void f_00011443(X86Cpu& c) {
    X86_TICK(c, 7);
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
    x86_fault(c, 0x11443u, "ran off the end of a function");
}
void f_00011448(X86Cpu& c) {
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
    x86_fault(c, 0x11448u, "ran off the end of a function");
}
void f_0001144b(X86Cpu& c) {
    X86_TICK(c, 9);
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
    x86_fault(c, 0x1144bu, "ran off the end of a function");
}
void f_0001144d(X86Cpu& c) {
    X86_TICK(c, 7);
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
    x86_fault(c, 0x1144du, "ran off the end of a function");
}
void f_00011452(X86Cpu& c) {
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
    x86_fault(c, 0x11452u, "ran off the end of a function");
}
void f_00011454(X86Cpu& c) {
    X86_TICK(c, 26);
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
    x86_fault(c, 0x11454u, "ran off the end of a function");
}
void f_00011457(X86Cpu& c) {
    X86_TICK(c, 23);
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
    x86_fault(c, 0x11457u, "ran off the end of a function");
}
void f_0001145a(X86Cpu& c) {
    X86_TICK(c, 21);
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
    x86_fault(c, 0x1145au, "ran off the end of a function");
}
void f_0001145c(X86Cpu& c) {
    X86_TICK(c, 19);
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
    x86_fault(c, 0x1145cu, "ran off the end of a function");
}
void f_00011464(X86Cpu& c) {
    X86_TICK(c, 15);
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
    x86_fault(c, 0x11464u, "ran off the end of a function");
}
void f_00011469(X86Cpu& c) {
    X86_TICK(c, 13);
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
    x86_fault(c, 0x11469u, "ran off the end of a function");
}
void f_00011470(X86Cpu& c) {
    X86_TICK(c, 9);
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
    x86_fault(c, 0x11470u, "ran off the end of a function");
}
void f_00011478(X86Cpu& c) {
    X86_TICK(c, 7);
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
    x86_fault(c, 0x11478u, "ran off the end of a function");
}
void f_0001147a(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0x1147au, "ran off the end of a function");
}
void f_000114a3(X86Cpu& c) {
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
    x86_fault(c, 0x114a3u, "ran off the end of a function");
}
void f_000114a5(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0x114a5u, "ran off the end of a function");
}
void f_000114a7(X86Cpu& c) {
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
    x86_fault(c, 0x114a7u, "ran off the end of a function");
}
}

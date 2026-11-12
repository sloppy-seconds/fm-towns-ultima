#include "p_tbios_funcs.h"
namespace p_tbios {
void f_000114af(X86Cpu& c) {
    X86_TICK(c, 69);
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
    x86_fault(c, 0x114afu, "ran off the end of a function");
}
void f_000114b1(X86Cpu& c) {
    X86_TICK(c, 67);
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
    x86_fault(c, 0x114b1u, "ran off the end of a function");
}
void f_000114b3(X86Cpu& c) {
    X86_TICK(c, 45);
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
    x86_fault(c, 0x114b3u, "ran off the end of a function");
}
void f_000114b6(X86Cpu& c) {
    X86_TICK(c, 42);
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
    x86_fault(c, 0x114b6u, "ran off the end of a function");
}
void f_000114b7(X86Cpu& c) {
    X86_TICK(c, 40);
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
    x86_fault(c, 0x114b7u, "ran off the end of a function");
}
void f_000114bf(X86Cpu& c) {
    X86_TICK(c, 18);
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
    x86_fault(c, 0x114bfu, "ran off the end of a function");
}
void f_000114c2(X86Cpu& c) {
    X86_TICK(c, 15);
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
    x86_fault(c, 0x114c2u, "ran off the end of a function");
}
void f_000114c3(X86Cpu& c) {
    X86_TICK(c, 13);
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
    x86_fault(c, 0x114c3u, "ran off the end of a function");
}
void f_000114c5(X86Cpu& c) {
    X86_TICK(c, 11);
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
    x86_fault(c, 0x114c5u, "ran off the end of a function");
}
void f_000114c7(X86Cpu& c) {
    X86_TICK(c, 9);
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
    x86_fault(c, 0x114c7u, "ran off the end of a function");
}
void f_000114c9(X86Cpu& c) {
    X86_TICK(c, 7);
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
    x86_fault(c, 0x114c9u, "ran off the end of a function");
}
void f_000114ce(X86Cpu& c) {
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
    x86_fault(c, 0x114ceu, "ran off the end of a function");
}
void f_000114d0(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0x114d0u, "ran off the end of a function");
}
void f_000114d2(X86Cpu& c) {
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
    x86_fault(c, 0x114d2u, "ran off the end of a function");
}
void f_000114da(X86Cpu& c) {
    X86_TICK(c, 69);
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
    x86_fault(c, 0x114dau, "ran off the end of a function");
}
void f_000114dc(X86Cpu& c) {
    X86_TICK(c, 67);
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
    x86_fault(c, 0x114dcu, "ran off the end of a function");
}
void f_000114de(X86Cpu& c) {
    X86_TICK(c, 45);
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
    x86_fault(c, 0x114deu, "ran off the end of a function");
}
void f_000114e1(X86Cpu& c) {
    X86_TICK(c, 42);
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
    x86_fault(c, 0x114e1u, "ran off the end of a function");
}
void f_000114e2(X86Cpu& c) {
    X86_TICK(c, 40);
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
    x86_fault(c, 0x114e2u, "ran off the end of a function");
}
void f_000114ea(X86Cpu& c) {
    X86_TICK(c, 18);
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
    x86_fault(c, 0x114eau, "ran off the end of a function");
}
void f_000114ed(X86Cpu& c) {
    X86_TICK(c, 15);
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
    x86_fault(c, 0x114edu, "ran off the end of a function");
}
void f_000114ee(X86Cpu& c) {
    X86_TICK(c, 13);
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
    x86_fault(c, 0x114eeu, "ran off the end of a function");
}
void f_000114f0(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0114f0  mov ah, 0x48
    X86_AT(c, 0x114f0u);
    s8(c, 4, 0x48u);
    // 0114f2  add ah, bl
    X86_AT(c, 0x114f2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114f4  call 0x11bf0
    X86_AT(c, 0x114f4u);
    push32(c, 0x114f9u); f_00011bf0(c); X86_RET(c, 0x114f9u);
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
    x86_fault(c, 0x114f0u, "ran off the end of a function");
}
void f_000114f2(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0114f2  add ah, bl
    X86_AT(c, 0x114f2u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 3), 0, 1)); }
    // 0114f4  call 0x11bf0
    X86_AT(c, 0x114f4u);
    push32(c, 0x114f9u); f_00011bf0(c); X86_RET(c, 0x114f9u);
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
    x86_fault(c, 0x114f2u, "ran off the end of a function");
}
void f_000114f4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0114f4  call 0x11bf0
    X86_AT(c, 0x114f4u);
    push32(c, 0x114f9u); f_00011bf0(c); X86_RET(c, 0x114f9u);
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
    x86_fault(c, 0x114f4u, "ran off the end of a function");
}
}

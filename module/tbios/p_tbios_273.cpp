#include "p_tbios_funcs.h"
namespace p_tbios {
void f_000108b3(X86Cpu& c) {
    X86_TICK(c, 120);
    // 0108b3  mov dx, 0x3ad6
    X86_AT(c, 0x108b3u);
    s16(c, 2, 0x3AD6u);
    // 0108b7  in al, dx
    X86_AT(c, 0x108b7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108b8  shl eax, 8
    X86_AT(c, 0x108b8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108bb  sub dx, 2
    X86_AT(c, 0x108bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108bf  in al, dx
    X86_AT(c, 0x108bfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c0  shl eax, 8
    X86_AT(c, 0x108c0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108c3  sub dx, 2
    X86_AT(c, 0x108c3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108c7  in al, dx
    X86_AT(c, 0x108c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108b3u, "ran off the end of a function");
}
void f_000108b7(X86Cpu& c) {
    X86_TICK(c, 118);
    // 0108b7  in al, dx
    X86_AT(c, 0x108b7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108b8  shl eax, 8
    X86_AT(c, 0x108b8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108bb  sub dx, 2
    X86_AT(c, 0x108bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108bf  in al, dx
    X86_AT(c, 0x108bfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c0  shl eax, 8
    X86_AT(c, 0x108c0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108c3  sub dx, 2
    X86_AT(c, 0x108c3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108c7  in al, dx
    X86_AT(c, 0x108c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108b7u, "ran off the end of a function");
}
void f_000108b8(X86Cpu& c) {
    X86_TICK(c, 106);
    // 0108b8  shl eax, 8
    X86_AT(c, 0x108b8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108bb  sub dx, 2
    X86_AT(c, 0x108bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108bf  in al, dx
    X86_AT(c, 0x108bfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c0  shl eax, 8
    X86_AT(c, 0x108c0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108c3  sub dx, 2
    X86_AT(c, 0x108c3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108c7  in al, dx
    X86_AT(c, 0x108c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108b8u, "ran off the end of a function");
}
void f_000108bb(X86Cpu& c) {
    X86_TICK(c, 103);
    // 0108bb  sub dx, 2
    X86_AT(c, 0x108bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108bf  in al, dx
    X86_AT(c, 0x108bfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c0  shl eax, 8
    X86_AT(c, 0x108c0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108c3  sub dx, 2
    X86_AT(c, 0x108c3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108c7  in al, dx
    X86_AT(c, 0x108c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108bbu, "ran off the end of a function");
}
void f_000108bf(X86Cpu& c) {
    X86_TICK(c, 101);
    // 0108bf  in al, dx
    X86_AT(c, 0x108bfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c0  shl eax, 8
    X86_AT(c, 0x108c0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108c3  sub dx, 2
    X86_AT(c, 0x108c3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108c7  in al, dx
    X86_AT(c, 0x108c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108bfu, "ran off the end of a function");
}
void f_000108c0(X86Cpu& c) {
    X86_TICK(c, 89);
    // 0108c0  shl eax, 8
    X86_AT(c, 0x108c0u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108c3  sub dx, 2
    X86_AT(c, 0x108c3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108c7  in al, dx
    X86_AT(c, 0x108c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108c0u, "ran off the end of a function");
}
void f_000108c3(X86Cpu& c) {
    X86_TICK(c, 86);
    // 0108c3  sub dx, 2
    X86_AT(c, 0x108c3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108c7  in al, dx
    X86_AT(c, 0x108c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108c3u, "ran off the end of a function");
}
void f_000108c7(X86Cpu& c) {
    X86_TICK(c, 84);
    // 0108c7  in al, dx
    X86_AT(c, 0x108c7u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108c7u, "ran off the end of a function");
}
void f_000108c8(X86Cpu& c) {
    X86_TICK(c, 72);
    // 0108c8  shl eax, 8
    X86_AT(c, 0x108c8u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108c8u, "ran off the end of a function");
}
void f_000108cb(X86Cpu& c) {
    X86_TICK(c, 69);
    // 0108cb  sub dx, 2
    X86_AT(c, 0x108cbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108cbu, "ran off the end of a function");
}
void f_000108cf(X86Cpu& c) {
    X86_TICK(c, 67);
    // 0108cf  in al, dx
    X86_AT(c, 0x108cfu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108cfu, "ran off the end of a function");
}
void f_000108d0(X86Cpu& c) {
    X86_TICK(c, 55);
    // 0108d0  mov edi, eax
    X86_AT(c, 0x108d0u);
    c.r[7] = c.r[0];
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108d0u, "ran off the end of a function");
}
void f_000108d2(X86Cpu& c) {
    X86_TICK(c, 53);
    // 0108d2  mov dx, 0x3ada
    X86_AT(c, 0x108d2u);
    s16(c, 2, 0x3ADAu);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108d2u, "ran off the end of a function");
}
void f_000108d6(X86Cpu& c) {
    X86_TICK(c, 51);
    // 0108d6  in al, dx
    X86_AT(c, 0x108d6u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108d6u, "ran off the end of a function");
}
void f_000108d7(X86Cpu& c) {
    X86_TICK(c, 39);
    // 0108d7  shl eax, 8
    X86_AT(c, 0x108d7u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108d7u, "ran off the end of a function");
}
void f_000108da(X86Cpu& c) {
    X86_TICK(c, 36);
    // 0108da  sub dx, 2
    X86_AT(c, 0x108dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108dau, "ran off the end of a function");
}
void f_000108de(X86Cpu& c) {
    X86_TICK(c, 34);
    // 0108de  in al, dx
    X86_AT(c, 0x108deu);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108deu, "ran off the end of a function");
}
void f_000108df(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0108df  mov ds, eax
    X86_AT(c, 0x108dfu);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108dfu, "ran off the end of a function");
}
void f_000108e1(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0108e1  pop edx
    X86_AT(c, 0x108e1u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108e1u, "ran off the end of a function");
}
void f_000108e2(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0108e2  pop eax
    X86_AT(c, 0x108e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108e2u, "ran off the end of a function");
}
void f_000108e3(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0108e3  cmp word ptr [edi + 9], 0
    X86_AT(c, 0x108e3u);
    (void)x86_sub(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x9u))), 0x0u, 0, 2);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108e3u, "ran off the end of a function");
}
void f_000108e8(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0108e8  je 0x108f1
    X86_AT(c, 0x108e8u);
    if (x86_cc(c, 4)) { goto L_108f1; }
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f1:
    X86_TICK(c, 7);
    // 0108f1  call 0x10b22
    X86_AT(c, 0x108f1u);
    push32(c, 0x108f6u); f_00010b22(c); X86_RET(c, 0x108f6u);
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108e8u, "ran off the end of a function");
}
void f_000108ea(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0108ea  call 0x108ff
    X86_AT(c, 0x108eau);
    push32(c, 0x108efu); f_000108ff(c); X86_RET(c, 0x108efu);
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108eau, "ran off the end of a function");
}
void f_000108ef(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0108ef  jmp 0x108f6
    X86_AT(c, 0x108efu);
    goto L_108f6;
L_108f6:
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108efu, "ran off the end of a function");
}
void f_000108f6(X86Cpu& c) {
    X86_TICK(c, 52);
    // 0108f6  popfd 
    X86_AT(c, 0x108f6u);
    x86_popfd(c, 4);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108f6u, "ran off the end of a function");
}
void f_000108f7(X86Cpu& c) {
    X86_TICK(c, 46);
    // 0108f7  popal 
    X86_AT(c, 0x108f7u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108f7u, "ran off the end of a function");
}
void f_000108f8(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0108f8  pop gs
    X86_AT(c, 0x108f8u);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108f8u, "ran off the end of a function");
}
void f_000108fa(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0108fa  pop fs
    X86_AT(c, 0x108fau);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108fau, "ran off the end of a function");
}
void f_000108fc(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0108fc  pop es
    X86_AT(c, 0x108fcu);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108fcu, "ran off the end of a function");
}
void f_000108fd(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0108fd  pop ds
    X86_AT(c, 0x108fdu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108fdu, "ran off the end of a function");
}
void f_000108fe(X86Cpu& c) {
    X86_TICK(c, 6);
    // 0108fe  retf 
    X86_AT(c, 0x108feu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x108feu, "ran off the end of a function");
}
void f_000108ff(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0108ff  call 0x10a2d
    X86_AT(c, 0x108ffu);
    push32(c, 0x10904u); f_00010a2d(c); X86_RET(c, 0x10904u);
    X86_TICK(c, 140);
    // 010904  shl dx, 3
    X86_AT(c, 0x10904u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 010908  mov eax, edx
    X86_AT(c, 0x10908u);
    c.r[0] = c.r[2];
    // 01090a  add ax, word ptr [edi + 0x45]
    X86_AT(c, 0x1090au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u))), 0, 2)); }
    // 01090e  cwd 
    X86_AT(c, 0x1090eu);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 010910  idiv word ptr [edi + 0x5e]
    X86_AT(c, 0x10910u);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu))), 2, 0x10910u);
    // 010914  xchg edx, eax
    X86_AT(c, 0x10914u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 010915  mov word ptr [edi + 0x45], ax
    X86_AT(c, 0x10915u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u)), (c.r[0] & 0xFFFFu));
    // 010919  add dx, word ptr [edi + 0x52]
    X86_AT(c, 0x10919u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u))), 0, 2)); }
    // 01091d  push edx
    X86_AT(c, 0x1091du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01091e  shl bx, 3
    X86_AT(c, 0x1091eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 3, r); }
    // 010922  add bx, word ptr [edi + 0x47]
    X86_AT(c, 0x10922u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u))), 0, 2)); }
    // 010926  mov eax, ebx
    X86_AT(c, 0x10926u);
    c.r[0] = c.r[3];
    // 010928  cwd 
    X86_AT(c, 0x10928u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 01092a  idiv word ptr [edi + 0x60]
    X86_AT(c, 0x1092au);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x60u))), 2, 0x1092au);
    // 01092e  mov ebx, eax
    X86_AT(c, 0x1092eu);
    c.r[3] = c.r[0];
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x108ffu, "ran off the end of a function");
}
void f_00010904(X86Cpu& c) {
    X86_TICK(c, 140);
    // 010904  shl dx, 3
    X86_AT(c, 0x10904u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 2, r); }
    // 010908  mov eax, edx
    X86_AT(c, 0x10908u);
    c.r[0] = c.r[2];
    // 01090a  add ax, word ptr [edi + 0x45]
    X86_AT(c, 0x1090au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u))), 0, 2)); }
    // 01090e  cwd 
    X86_AT(c, 0x1090eu);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 010910  idiv word ptr [edi + 0x5e]
    X86_AT(c, 0x10910u);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu))), 2, 0x10910u);
    // 010914  xchg edx, eax
    X86_AT(c, 0x10914u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 010915  mov word ptr [edi + 0x45], ax
    X86_AT(c, 0x10915u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u)), (c.r[0] & 0xFFFFu));
    // 010919  add dx, word ptr [edi + 0x52]
    X86_AT(c, 0x10919u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u))), 0, 2)); }
    // 01091d  push edx
    X86_AT(c, 0x1091du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01091e  shl bx, 3
    X86_AT(c, 0x1091eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 3, r); }
    // 010922  add bx, word ptr [edi + 0x47]
    X86_AT(c, 0x10922u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u))), 0, 2)); }
    // 010926  mov eax, ebx
    X86_AT(c, 0x10926u);
    c.r[0] = c.r[3];
    // 010928  cwd 
    X86_AT(c, 0x10928u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 01092a  idiv word ptr [edi + 0x60]
    X86_AT(c, 0x1092au);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x60u))), 2, 0x1092au);
    // 01092e  mov ebx, eax
    X86_AT(c, 0x1092eu);
    c.r[3] = c.r[0];
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10904u, "ran off the end of a function");
}
void f_00010908(X86Cpu& c) {
    X86_TICK(c, 137);
    // 010908  mov eax, edx
    X86_AT(c, 0x10908u);
    c.r[0] = c.r[2];
    // 01090a  add ax, word ptr [edi + 0x45]
    X86_AT(c, 0x1090au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u))), 0, 2)); }
    // 01090e  cwd 
    X86_AT(c, 0x1090eu);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 010910  idiv word ptr [edi + 0x5e]
    X86_AT(c, 0x10910u);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu))), 2, 0x10910u);
    // 010914  xchg edx, eax
    X86_AT(c, 0x10914u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 010915  mov word ptr [edi + 0x45], ax
    X86_AT(c, 0x10915u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u)), (c.r[0] & 0xFFFFu));
    // 010919  add dx, word ptr [edi + 0x52]
    X86_AT(c, 0x10919u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u))), 0, 2)); }
    // 01091d  push edx
    X86_AT(c, 0x1091du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01091e  shl bx, 3
    X86_AT(c, 0x1091eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 3, r); }
    // 010922  add bx, word ptr [edi + 0x47]
    X86_AT(c, 0x10922u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u))), 0, 2)); }
    // 010926  mov eax, ebx
    X86_AT(c, 0x10926u);
    c.r[0] = c.r[3];
    // 010928  cwd 
    X86_AT(c, 0x10928u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 01092a  idiv word ptr [edi + 0x60]
    X86_AT(c, 0x1092au);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x60u))), 2, 0x1092au);
    // 01092e  mov ebx, eax
    X86_AT(c, 0x1092eu);
    c.r[3] = c.r[0];
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10908u, "ran off the end of a function");
}
void f_0001090a(X86Cpu& c) {
    X86_TICK(c, 135);
    // 01090a  add ax, word ptr [edi + 0x45]
    X86_AT(c, 0x1090au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u))), 0, 2)); }
    // 01090e  cwd 
    X86_AT(c, 0x1090eu);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 010910  idiv word ptr [edi + 0x5e]
    X86_AT(c, 0x10910u);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu))), 2, 0x10910u);
    // 010914  xchg edx, eax
    X86_AT(c, 0x10914u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 010915  mov word ptr [edi + 0x45], ax
    X86_AT(c, 0x10915u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u)), (c.r[0] & 0xFFFFu));
    // 010919  add dx, word ptr [edi + 0x52]
    X86_AT(c, 0x10919u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u))), 0, 2)); }
    // 01091d  push edx
    X86_AT(c, 0x1091du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01091e  shl bx, 3
    X86_AT(c, 0x1091eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 3, r); }
    // 010922  add bx, word ptr [edi + 0x47]
    X86_AT(c, 0x10922u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u))), 0, 2)); }
    // 010926  mov eax, ebx
    X86_AT(c, 0x10926u);
    c.r[0] = c.r[3];
    // 010928  cwd 
    X86_AT(c, 0x10928u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 01092a  idiv word ptr [edi + 0x60]
    X86_AT(c, 0x1092au);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x60u))), 2, 0x1092au);
    // 01092e  mov ebx, eax
    X86_AT(c, 0x1092eu);
    c.r[3] = c.r[0];
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1090au, "ran off the end of a function");
}
void f_0001090e(X86Cpu& c) {
    X86_TICK(c, 129);
    // 01090e  cwd 
    X86_AT(c, 0x1090eu);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 010910  idiv word ptr [edi + 0x5e]
    X86_AT(c, 0x10910u);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu))), 2, 0x10910u);
    // 010914  xchg edx, eax
    X86_AT(c, 0x10914u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 010915  mov word ptr [edi + 0x45], ax
    X86_AT(c, 0x10915u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u)), (c.r[0] & 0xFFFFu));
    // 010919  add dx, word ptr [edi + 0x52]
    X86_AT(c, 0x10919u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u))), 0, 2)); }
    // 01091d  push edx
    X86_AT(c, 0x1091du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01091e  shl bx, 3
    X86_AT(c, 0x1091eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 3, r); }
    // 010922  add bx, word ptr [edi + 0x47]
    X86_AT(c, 0x10922u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u))), 0, 2)); }
    // 010926  mov eax, ebx
    X86_AT(c, 0x10926u);
    c.r[0] = c.r[3];
    // 010928  cwd 
    X86_AT(c, 0x10928u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 01092a  idiv word ptr [edi + 0x60]
    X86_AT(c, 0x1092au);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x60u))), 2, 0x1092au);
    // 01092e  mov ebx, eax
    X86_AT(c, 0x1092eu);
    c.r[3] = c.r[0];
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1090eu, "ran off the end of a function");
}
void f_00010910(X86Cpu& c) {
    X86_TICK(c, 127);
    // 010910  idiv word ptr [edi + 0x5e]
    X86_AT(c, 0x10910u);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu))), 2, 0x10910u);
    // 010914  xchg edx, eax
    X86_AT(c, 0x10914u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 010915  mov word ptr [edi + 0x45], ax
    X86_AT(c, 0x10915u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u)), (c.r[0] & 0xFFFFu));
    // 010919  add dx, word ptr [edi + 0x52]
    X86_AT(c, 0x10919u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u))), 0, 2)); }
    // 01091d  push edx
    X86_AT(c, 0x1091du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01091e  shl bx, 3
    X86_AT(c, 0x1091eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 3, r); }
    // 010922  add bx, word ptr [edi + 0x47]
    X86_AT(c, 0x10922u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u))), 0, 2)); }
    // 010926  mov eax, ebx
    X86_AT(c, 0x10926u);
    c.r[0] = c.r[3];
    // 010928  cwd 
    X86_AT(c, 0x10928u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 01092a  idiv word ptr [edi + 0x60]
    X86_AT(c, 0x1092au);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x60u))), 2, 0x1092au);
    // 01092e  mov ebx, eax
    X86_AT(c, 0x1092eu);
    c.r[3] = c.r[0];
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10910u, "ran off the end of a function");
}
void f_00010914(X86Cpu& c) {
    X86_TICK(c, 87);
    // 010914  xchg edx, eax
    X86_AT(c, 0x10914u);
    { uint32_t t = c.r[2]; c.r[2] = c.r[0]; c.r[0] = t; }
    // 010915  mov word ptr [edi + 0x45], ax
    X86_AT(c, 0x10915u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u)), (c.r[0] & 0xFFFFu));
    // 010919  add dx, word ptr [edi + 0x52]
    X86_AT(c, 0x10919u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u))), 0, 2)); }
    // 01091d  push edx
    X86_AT(c, 0x1091du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01091e  shl bx, 3
    X86_AT(c, 0x1091eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 3, r); }
    // 010922  add bx, word ptr [edi + 0x47]
    X86_AT(c, 0x10922u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u))), 0, 2)); }
    // 010926  mov eax, ebx
    X86_AT(c, 0x10926u);
    c.r[0] = c.r[3];
    // 010928  cwd 
    X86_AT(c, 0x10928u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 01092a  idiv word ptr [edi + 0x60]
    X86_AT(c, 0x1092au);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x60u))), 2, 0x1092au);
    // 01092e  mov ebx, eax
    X86_AT(c, 0x1092eu);
    c.r[3] = c.r[0];
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10914u, "ran off the end of a function");
}
void f_00010915(X86Cpu& c) {
    X86_TICK(c, 84);
    // 010915  mov word ptr [edi + 0x45], ax
    X86_AT(c, 0x10915u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x45u)), (c.r[0] & 0xFFFFu));
    // 010919  add dx, word ptr [edi + 0x52]
    X86_AT(c, 0x10919u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u))), 0, 2)); }
    // 01091d  push edx
    X86_AT(c, 0x1091du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01091e  shl bx, 3
    X86_AT(c, 0x1091eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 3, r); }
    // 010922  add bx, word ptr [edi + 0x47]
    X86_AT(c, 0x10922u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u))), 0, 2)); }
    // 010926  mov eax, ebx
    X86_AT(c, 0x10926u);
    c.r[0] = c.r[3];
    // 010928  cwd 
    X86_AT(c, 0x10928u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 01092a  idiv word ptr [edi + 0x60]
    X86_AT(c, 0x1092au);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x60u))), 2, 0x1092au);
    // 01092e  mov ebx, eax
    X86_AT(c, 0x1092eu);
    c.r[3] = c.r[0];
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10915u, "ran off the end of a function");
}
void f_00010919(X86Cpu& c) {
    X86_TICK(c, 82);
    // 010919  add dx, word ptr [edi + 0x52]
    X86_AT(c, 0x10919u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u))), 0, 2)); }
    // 01091d  push edx
    X86_AT(c, 0x1091du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01091e  shl bx, 3
    X86_AT(c, 0x1091eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 3, r); }
    // 010922  add bx, word ptr [edi + 0x47]
    X86_AT(c, 0x10922u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u))), 0, 2)); }
    // 010926  mov eax, ebx
    X86_AT(c, 0x10926u);
    c.r[0] = c.r[3];
    // 010928  cwd 
    X86_AT(c, 0x10928u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 01092a  idiv word ptr [edi + 0x60]
    X86_AT(c, 0x1092au);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x60u))), 2, 0x1092au);
    // 01092e  mov ebx, eax
    X86_AT(c, 0x1092eu);
    c.r[3] = c.r[0];
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10919u, "ran off the end of a function");
}
void f_0001091d(X86Cpu& c) {
    X86_TICK(c, 76);
    // 01091d  push edx
    X86_AT(c, 0x1091du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01091e  shl bx, 3
    X86_AT(c, 0x1091eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 3, r); }
    // 010922  add bx, word ptr [edi + 0x47]
    X86_AT(c, 0x10922u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u))), 0, 2)); }
    // 010926  mov eax, ebx
    X86_AT(c, 0x10926u);
    c.r[0] = c.r[3];
    // 010928  cwd 
    X86_AT(c, 0x10928u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 01092a  idiv word ptr [edi + 0x60]
    X86_AT(c, 0x1092au);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x60u))), 2, 0x1092au);
    // 01092e  mov ebx, eax
    X86_AT(c, 0x1092eu);
    c.r[3] = c.r[0];
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1091du, "ran off the end of a function");
}
void f_0001091e(X86Cpu& c) {
    X86_TICK(c, 74);
    // 01091e  shl bx, 3
    X86_AT(c, 0x1091eu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 2, w); if (w) s16(c, 3, r); }
    // 010922  add bx, word ptr [edi + 0x47]
    X86_AT(c, 0x10922u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u))), 0, 2)); }
    // 010926  mov eax, ebx
    X86_AT(c, 0x10926u);
    c.r[0] = c.r[3];
    // 010928  cwd 
    X86_AT(c, 0x10928u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 01092a  idiv word ptr [edi + 0x60]
    X86_AT(c, 0x1092au);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x60u))), 2, 0x1092au);
    // 01092e  mov ebx, eax
    X86_AT(c, 0x1092eu);
    c.r[3] = c.r[0];
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1091eu, "ran off the end of a function");
}
void f_00010922(X86Cpu& c) {
    X86_TICK(c, 71);
    // 010922  add bx, word ptr [edi + 0x47]
    X86_AT(c, 0x10922u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u))), 0, 2)); }
    // 010926  mov eax, ebx
    X86_AT(c, 0x10926u);
    c.r[0] = c.r[3];
    // 010928  cwd 
    X86_AT(c, 0x10928u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 01092a  idiv word ptr [edi + 0x60]
    X86_AT(c, 0x1092au);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x60u))), 2, 0x1092au);
    // 01092e  mov ebx, eax
    X86_AT(c, 0x1092eu);
    c.r[3] = c.r[0];
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10922u, "ran off the end of a function");
}
void f_00010926(X86Cpu& c) {
    X86_TICK(c, 65);
    // 010926  mov eax, ebx
    X86_AT(c, 0x10926u);
    c.r[0] = c.r[3];
    // 010928  cwd 
    X86_AT(c, 0x10928u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 01092a  idiv word ptr [edi + 0x60]
    X86_AT(c, 0x1092au);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x60u))), 2, 0x1092au);
    // 01092e  mov ebx, eax
    X86_AT(c, 0x1092eu);
    c.r[3] = c.r[0];
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10926u, "ran off the end of a function");
}
void f_00010928(X86Cpu& c) {
    X86_TICK(c, 63);
    // 010928  cwd 
    X86_AT(c, 0x10928u);
    s16(c, 2, (c.r[0] & 0x8000u) ? 0xFFFFu : 0u);
    // 01092a  idiv word ptr [edi + 0x60]
    X86_AT(c, 0x1092au);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x60u))), 2, 0x1092au);
    // 01092e  mov ebx, eax
    X86_AT(c, 0x1092eu);
    c.r[3] = c.r[0];
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10928u, "ran off the end of a function");
}
void f_0001092a(X86Cpu& c) {
    X86_TICK(c, 61);
    // 01092a  idiv word ptr [edi + 0x60]
    X86_AT(c, 0x1092au);
    x86_idiv(c, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x60u))), 2, 0x1092au);
    // 01092e  mov ebx, eax
    X86_AT(c, 0x1092eu);
    c.r[3] = c.r[0];
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1092au, "ran off the end of a function");
}
void f_0001092e(X86Cpu& c) {
    X86_TICK(c, 21);
    // 01092e  mov ebx, eax
    X86_AT(c, 0x1092eu);
    c.r[3] = c.r[0];
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x1092eu, "ran off the end of a function");
}
void f_00010930(X86Cpu& c) {
    X86_TICK(c, 19);
    // 010930  mov word ptr [edi + 0x47], dx
    X86_AT(c, 0x10930u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x47u)), (c.r[2] & 0xFFFFu));
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10930u, "ran off the end of a function");
}
void f_00010934(X86Cpu& c) {
    X86_TICK(c, 17);
    // 010934  add bx, word ptr [edi + 0x54]
    X86_AT(c, 0x10934u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x54u))), 0, 2)); }
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10934u, "ran off the end of a function");
}
void f_00010938(X86Cpu& c) {
    X86_TICK(c, 11);
    // 010938  pop edx
    X86_AT(c, 0x10938u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 010939  call 0x1082b
    X86_AT(c, 0x10939u);
    push32(c, 0x1093eu); f_0001082b(c); X86_RET(c, 0x1093eu);
    X86_TICK(c, 18);
    // 01093e  and word ptr [edi + 0x30], 0
    X86_AT(c, 0x1093eu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0x0u, 2)); }
    // 010943  cmp dx, word ptr [edi + 0x56]
    X86_AT(c, 0x10943u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x56u))), 0, 2);
    // 010947  jne 0x1094f
    X86_AT(c, 0x10947u);
    if (x86_cc(c, 5)) { goto L_1094f; }
    X86_TICK(c, 11);
    // 010949  cmp bx, word ptr [edi + 0x58]
    X86_AT(c, 0x10949u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x58u))), 0, 2);
    // 01094d  je 0x1095f
    X86_AT(c, 0x1094du);
    if (x86_cc(c, 4)) { goto L_1095f; }
L_1094f:
    X86_TICK(c, 19);
    // 01094f  or word ptr [edi + 0x30], 1
    X86_AT(c, 0x1094fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x1u, 2)); }
    // 010954  cmp byte ptr [edi + 0x17], 0
    X86_AT(c, 0x10954u);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u))), 0x0u, 0, 1);
    // 010958  je 0x1095f
    X86_AT(c, 0x10958u);
    if (x86_cc(c, 4)) { goto L_1095f; }
    X86_TICK(c, 7);
    // 01095a  call 0x10890
    X86_AT(c, 0x1095au);
    push32(c, 0x1095fu); f_00010890(c); X86_RET(c, 0x1095fu);
L_1095f:
    X86_TICK(c, 24);
    // 01095f  mov edx, dword ptr [edi + 0x52]
    X86_AT(c, 0x1095fu);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 010962  shld ebx, edx, 0x10
    X86_AT(c, 0x10962u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 010966  mov ah, byte ptr [edi + 0x44]
    X86_AT(c, 0x10966u);
    s8(c, 4, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 010969  mov al, ah
    X86_AT(c, 0x10969u);
    s8(c, 0, g8(c, 4));
    // 01096b  xor ah, byte ptr [edi + 8]
    X86_AT(c, 0x1096bu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u))), 1)); }
    // 01096e  je 0x109cd
    X86_AT(c, 0x1096eu);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 9);
    // 010970  mov byte ptr [edi + 8], al
    X86_AT(c, 0x10970u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x8u)), g8(c, 0));
    // 010973  test ah, 1
    X86_AT(c, 0x10973u);
    (void)x86_logic(c, g8(c, 4) & 0x1u, 1);
    // 010976  je 0x109a0
    X86_AT(c, 0x10976u);
    if (x86_cc(c, 4)) { goto L_109a0; }
    X86_TICK(c, 7);
    // 010978  test al, 1
    X86_AT(c, 0x10978u);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 01097a  je 0x1098f
    X86_AT(c, 0x1097au);
    if (x86_cc(c, 4)) { goto L_1098f; }
    X86_TICK(c, 24);
    // 01097c  or word ptr [edi + 0x30], 2
    X86_AT(c, 0x1097cu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x2u, 2)); }
    // 010981  inc word ptr [edi + 0x18]
    X86_AT(c, 0x10981u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x18u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010985  mov word ptr [edi + 0x1a], dx
    X86_AT(c, 0x10985u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Au)), (c.r[2] & 0xFFFFu));
    // 010989  mov word ptr [edi + 0x1c], bx
    X86_AT(c, 0x10989u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x1Cu)), (c.r[3] & 0xFFFFu));
    // 01098d  jmp 0x109a0
    X86_AT(c, 0x1098du);
    goto L_109a0;
L_1098f:
    X86_TICK(c, 17);
    // 01098f  or word ptr [edi + 0x30], 4
    X86_AT(c, 0x1098fu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x4u, 2)); }
    // 010994  inc word ptr [edi + 0x1e]
    X86_AT(c, 0x10994u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x1Eu)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 010998  mov word ptr [edi + 0x20], dx
    X86_AT(c, 0x10998u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x20u)), (c.r[2] & 0xFFFFu));
    // 01099c  mov word ptr [edi + 0x22], bx
    X86_AT(c, 0x1099cu);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x22u)), (c.r[3] & 0xFFFFu));
L_109a0:
    X86_TICK(c, 7);
    // 0109a0  test ah, 2
    X86_AT(c, 0x109a0u);
    (void)x86_logic(c, g8(c, 4) & 0x2u, 1);
    // 0109a3  je 0x109cd
    X86_AT(c, 0x109a3u);
    if (x86_cc(c, 4)) { goto L_109cd; }
    X86_TICK(c, 7);
    // 0109a5  test al, 2
    X86_AT(c, 0x109a5u);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 0109a7  je 0x109bc
    X86_AT(c, 0x109a7u);
    if (x86_cc(c, 4)) { goto L_109bc; }
    X86_TICK(c, 24);
    // 0109a9  or word ptr [edi + 0x30], 8
    X86_AT(c, 0x109a9u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x8u, 2)); }
    // 0109ae  inc word ptr [edi + 0x24]
    X86_AT(c, 0x109aeu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x24u)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109b2  mov word ptr [edi + 0x26], dx
    X86_AT(c, 0x109b2u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x26u)), (c.r[2] & 0xFFFFu));
    // 0109b6  mov word ptr [edi + 0x28], bx
    X86_AT(c, 0x109b6u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x28u)), (c.r[3] & 0xFFFFu));
    // 0109ba  jmp 0x109cd
    X86_AT(c, 0x109bau);
    goto L_109cd;
L_109bc:
    X86_TICK(c, 17);
    // 0109bc  or word ptr [edi + 0x30], 0x10
    X86_AT(c, 0x109bcu);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x30u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | 0x10u, 2)); }
    // 0109c1  inc word ptr [edi + 0x2a]
    X86_AT(c, 0x109c1u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x2Au)); uint32_t v = rd16(ea); wr16(ea, x86_inc(c, v, 2)); }
    // 0109c5  mov word ptr [edi + 0x2c], dx
    X86_AT(c, 0x109c5u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Cu)), (c.r[2] & 0xFFFFu));
    // 0109c9  mov word ptr [edi + 0x2e], bx
    X86_AT(c, 0x109c9u);
    wr16((c.sbase[3] + (uint32_t)(c.r[7] + 0x2Eu)), (c.r[3] & 0xFFFFu));
L_109cd:
    X86_TICK(c, 15);
    // 0109cd  mov ax, word ptr [edi + 0x30]
    X86_AT(c, 0x109cdu);
    s16(c, 0, rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x30u))));
    // 0109d1  and ax, word ptr [edi + 0x32]
    X86_AT(c, 0x109d1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & rd16((c.sbase[3] + (uint32_t)(c.r[7] + 0x32u))), 2)); }
    // 0109d5  je 0x109ea
    X86_AT(c, 0x109d5u);
    if (x86_cc(c, 4)) { goto L_109ea; }
    X86_TICK(c, 27);
    // 0109d7  mov ch, byte ptr [edi + 0x44]
    X86_AT(c, 0x109d7u);
    s8(c, 5, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x44u))));
    // 0109da  mov ebx, dword ptr [edi + 0x52]
    X86_AT(c, 0x109dau);
    c.r[3] = rd32((c.sbase[3] + (uint32_t)(c.r[7] + 0x52u)));
    // 0109dd  shld edx, ebx, 0x10
    X86_AT(c, 0x109ddu);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0109e1  push ds
    X86_AT(c, 0x109e1u);
    push32(c, c.sreg[3]);
    // 0109e2  push edi
    X86_AT(c, 0x109e2u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 0109e3  pushfd 
    X86_AT(c, 0x109e3u);
    push32(c, c.fl & 0x00FCFFFFu);
    // 0109e4  lcall fword ptr [edi + 0x3e]
    X86_AT(c, 0x109e4u);
    { uint32_t ea = (c.sbase[3] + (uint32_t)(c.r[7] + 0x3Eu)); x86_far(c, rd16(ea + 4), rd32(ea), true, 4, 0x109e7u); }
    X86_RET(c, 0x109e7u);
    X86_TICK(c, 14);
    // 0109e7  popfd 
    X86_AT(c, 0x109e7u);
    x86_popfd(c, 4);
    // 0109e8  pop edi
    X86_AT(c, 0x109e8u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 0109e9  pop ds
    X86_AT(c, 0x109e9u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
L_109ea:
    X86_TICK(c, 10);
    // 0109ea  ret 
    X86_AT(c, 0x109eau);
    c.eip = pop32(c); return;
    x86_fault(c, 0x10938u, "ran off the end of a function");
}
}

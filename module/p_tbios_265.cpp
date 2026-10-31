#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000f80f(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f80f  je 0xf824
    X86_AT(c, 0xf80fu);
    if (x86_cc(c, 4)) { goto L_f824; }
    X86_TICK(c, 14);
    // 00f811  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf811u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f819  shr ax, 1
    X86_AT(c, 0xf819u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f81c  add word ptr gs:[ebp + 0x35c], ax
    X86_AT(c, 0xf81cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f824:
    X86_TICK(c, 23);
    // 00f824  push ds
    X86_AT(c, 0xf824u);
    push32(c, c.sreg[3]);
    // 00f825  push esi
    X86_AT(c, 0xf825u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f826  mov byte ptr gs:[ebp + 0x380], 1
    X86_AT(c, 0xf826u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), 0x1u);
    // 00f82e  mov eax, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xf82eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00f835  mov dword ptr gs:[ebp + 0x37c], eax
    X86_AT(c, 0xf835u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), c.r[0]);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf80fu, "ran off the end of a function");
}
void f_0000f824(X86Cpu& c) {
    X86_TICK(c, 23);
    // 00f824  push ds
    X86_AT(c, 0xf824u);
    push32(c, c.sreg[3]);
    // 00f825  push esi
    X86_AT(c, 0xf825u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f826  mov byte ptr gs:[ebp + 0x380], 1
    X86_AT(c, 0xf826u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), 0x1u);
    // 00f82e  mov eax, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xf82eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00f835  mov dword ptr gs:[ebp + 0x37c], eax
    X86_AT(c, 0xf835u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), c.r[0]);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf824u, "ran off the end of a function");
}
void f_0000f825(X86Cpu& c) {
    X86_TICK(c, 21);
    // 00f825  push esi
    X86_AT(c, 0xf825u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f826  mov byte ptr gs:[ebp + 0x380], 1
    X86_AT(c, 0xf826u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), 0x1u);
    // 00f82e  mov eax, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xf82eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00f835  mov dword ptr gs:[ebp + 0x37c], eax
    X86_AT(c, 0xf835u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), c.r[0]);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf825u, "ran off the end of a function");
}
void f_0000f826(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00f826  mov byte ptr gs:[ebp + 0x380], 1
    X86_AT(c, 0xf826u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), 0x1u);
    // 00f82e  mov eax, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xf82eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00f835  mov dword ptr gs:[ebp + 0x37c], eax
    X86_AT(c, 0xf835u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), c.r[0]);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf826u, "ran off the end of a function");
}
void f_0000f82e(X86Cpu& c) {
    X86_TICK(c, 17);
    // 00f82e  mov eax, dword ptr gs:[ebp + 0x36c]
    X86_AT(c, 0xf82eu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)));
    // 00f835  mov dword ptr gs:[ebp + 0x37c], eax
    X86_AT(c, 0xf835u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), c.r[0]);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf82eu, "ran off the end of a function");
}
void f_0000f835(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00f835  mov dword ptr gs:[ebp + 0x37c], eax
    X86_AT(c, 0xf835u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), c.r[0]);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf835u, "ran off the end of a function");
}
void f_0000f83c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00f83c  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf83cu);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf83cu, "ran off the end of a function");
}
void f_0000f843(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f843  test dl, 1
    X86_AT(c, 0xf843u);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf843u, "ran off the end of a function");
}
void f_0000f846(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f846  je 0xf858
    X86_AT(c, 0xf846u);
    if (x86_cc(c, 4)) { goto L_f858; }
    X86_TICK(c, 11);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f858:
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf846u, "ran off the end of a function");
}
void f_0000f848(X86Cpu& c) {
    X86_TICK(c, 18);
    // 00f848  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf848u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf848u, "ran off the end of a function");
}
void f_0000f850(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00f850  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf850u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf850u, "ran off the end of a function");
}
void f_0000f858(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f858  test dl, 2
    X86_AT(c, 0xf858u);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf858u, "ran off the end of a function");
}
void f_0000f85b(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f85b  je 0xf87d
    X86_AT(c, 0xf85bu);
    if (x86_cc(c, 4)) { goto L_f87d; }
    X86_TICK(c, 25);
    // 00f85d  mov eax, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf85du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f864  add ax, ax
    X86_AT(c, 0xf864u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f867  add word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf867u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f86f  shr eax, 0x10
    X86_AT(c, 0xf86fu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00f872  add ax, ax
    X86_AT(c, 0xf872u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00f875  add word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf875u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f87d:
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf85bu, "ran off the end of a function");
}
void f_0000f87d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f87d  call 0xfa24
    X86_AT(c, 0xf87du);
    push32(c, 0xf882u); f_0000fa24(c); X86_RET(c, 0xf882u);
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf87du, "ran off the end of a function");
}
void f_0000f882(X86Cpu& c) {
    X86_TICK(c, 18);
    // 00f882  pop esi
    X86_AT(c, 0xf882u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf882u, "ran off the end of a function");
}
void f_0000f883(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00f883  pop ds
    X86_AT(c, 0xf883u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf883u, "ran off the end of a function");
}
void f_0000f884(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00f884  ret 
    X86_AT(c, 0xf884u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xf884u, "ran off the end of a function");
}
void f_0000f888(X86Cpu& c) {
    X86_TICK(c, 16);
    // 00f888  push ds
    X86_AT(c, 0xf888u);
    push32(c, c.sreg[3]);
    // 00f889  push esi
    X86_AT(c, 0xf889u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f88a  push word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf88au);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))); push16(c, v); }
    // 00f892  call 0x6120
    X86_AT(c, 0xf892u);
    push32(c, 0xf897u); f_00006120(c); X86_RET(c, 0xf897u);
    X86_TICK(c, 12);
    // 00f897  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf897u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f89f  je 0xf8b4
    X86_AT(c, 0xf89fu);
    if (x86_cc(c, 4)) { goto L_f8b4; }
    X86_TICK(c, 14);
    // 00f8a1  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf8a1u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f8a9  shr ax, 1
    X86_AT(c, 0xf8a9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f8ac  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf8acu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f8b4:
    X86_TICK(c, 15);
    // 00f8b4  sub eax, eax
    X86_AT(c, 0xf8b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f8b6  sub ebx, ebx
    X86_AT(c, 0xf8b6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00f8b8  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf8b8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f8bf  test dl, 1
    X86_AT(c, 0xf8bfu);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f8c2  je 0xf8cc
    X86_AT(c, 0xf8c2u);
    if (x86_cc(c, 4)) { goto L_f8cc; }
    X86_TICK(c, 4);
    // 00f8c4  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8c4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
L_f8cc:
    X86_TICK(c, 7);
    // 00f8cc  test dl, 2
    X86_AT(c, 0xf8ccu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f8cf  je 0xf8e4
    X86_AT(c, 0xf8cfu);
    if (x86_cc(c, 4)) { goto L_f8e4; }
    X86_TICK(c, 13);
    // 00f8d1  mov ebx, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8d1u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f8d8  add bx, bx
    X86_AT(c, 0xf8d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8db  add ax, bx
    X86_AT(c, 0xf8dbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8de  shr ebx, 0x10
    X86_AT(c, 0xf8deu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8e1  add bx, bx
    X86_AT(c, 0xf8e1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f8e4:
    X86_TICK(c, 24);
    // 00f8e4  mov word ptr gs:[ebp + 0x448], ax
    X86_AT(c, 0xf8e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), (c.r[0] & 0xFFFFu));
    // 00f8ec  mov word ptr gs:[ebp + 0x44a], bx
    X86_AT(c, 0xf8ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au)), (c.r[3] & 0xFFFFu));
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf888u, "ran off the end of a function");
}
void f_0000f889(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00f889  push esi
    X86_AT(c, 0xf889u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00f88a  push word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf88au);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))); push16(c, v); }
    // 00f892  call 0x6120
    X86_AT(c, 0xf892u);
    push32(c, 0xf897u); f_00006120(c); X86_RET(c, 0xf897u);
    X86_TICK(c, 12);
    // 00f897  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf897u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f89f  je 0xf8b4
    X86_AT(c, 0xf89fu);
    if (x86_cc(c, 4)) { goto L_f8b4; }
    X86_TICK(c, 14);
    // 00f8a1  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf8a1u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f8a9  shr ax, 1
    X86_AT(c, 0xf8a9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f8ac  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf8acu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f8b4:
    X86_TICK(c, 15);
    // 00f8b4  sub eax, eax
    X86_AT(c, 0xf8b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f8b6  sub ebx, ebx
    X86_AT(c, 0xf8b6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00f8b8  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf8b8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f8bf  test dl, 1
    X86_AT(c, 0xf8bfu);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f8c2  je 0xf8cc
    X86_AT(c, 0xf8c2u);
    if (x86_cc(c, 4)) { goto L_f8cc; }
    X86_TICK(c, 4);
    // 00f8c4  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8c4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
L_f8cc:
    X86_TICK(c, 7);
    // 00f8cc  test dl, 2
    X86_AT(c, 0xf8ccu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f8cf  je 0xf8e4
    X86_AT(c, 0xf8cfu);
    if (x86_cc(c, 4)) { goto L_f8e4; }
    X86_TICK(c, 13);
    // 00f8d1  mov ebx, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8d1u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f8d8  add bx, bx
    X86_AT(c, 0xf8d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8db  add ax, bx
    X86_AT(c, 0xf8dbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8de  shr ebx, 0x10
    X86_AT(c, 0xf8deu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8e1  add bx, bx
    X86_AT(c, 0xf8e1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f8e4:
    X86_TICK(c, 24);
    // 00f8e4  mov word ptr gs:[ebp + 0x448], ax
    X86_AT(c, 0xf8e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), (c.r[0] & 0xFFFFu));
    // 00f8ec  mov word ptr gs:[ebp + 0x44a], bx
    X86_AT(c, 0xf8ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au)), (c.r[3] & 0xFFFFu));
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf889u, "ran off the end of a function");
}
void f_0000f88a(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00f88a  push word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf88au);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))); push16(c, v); }
    // 00f892  call 0x6120
    X86_AT(c, 0xf892u);
    push32(c, 0xf897u); f_00006120(c); X86_RET(c, 0xf897u);
    X86_TICK(c, 12);
    // 00f897  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf897u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f89f  je 0xf8b4
    X86_AT(c, 0xf89fu);
    if (x86_cc(c, 4)) { goto L_f8b4; }
    X86_TICK(c, 14);
    // 00f8a1  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf8a1u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f8a9  shr ax, 1
    X86_AT(c, 0xf8a9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f8ac  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf8acu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f8b4:
    X86_TICK(c, 15);
    // 00f8b4  sub eax, eax
    X86_AT(c, 0xf8b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f8b6  sub ebx, ebx
    X86_AT(c, 0xf8b6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00f8b8  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf8b8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f8bf  test dl, 1
    X86_AT(c, 0xf8bfu);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f8c2  je 0xf8cc
    X86_AT(c, 0xf8c2u);
    if (x86_cc(c, 4)) { goto L_f8cc; }
    X86_TICK(c, 4);
    // 00f8c4  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8c4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
L_f8cc:
    X86_TICK(c, 7);
    // 00f8cc  test dl, 2
    X86_AT(c, 0xf8ccu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f8cf  je 0xf8e4
    X86_AT(c, 0xf8cfu);
    if (x86_cc(c, 4)) { goto L_f8e4; }
    X86_TICK(c, 13);
    // 00f8d1  mov ebx, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8d1u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f8d8  add bx, bx
    X86_AT(c, 0xf8d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8db  add ax, bx
    X86_AT(c, 0xf8dbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8de  shr ebx, 0x10
    X86_AT(c, 0xf8deu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8e1  add bx, bx
    X86_AT(c, 0xf8e1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f8e4:
    X86_TICK(c, 24);
    // 00f8e4  mov word ptr gs:[ebp + 0x448], ax
    X86_AT(c, 0xf8e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), (c.r[0] & 0xFFFFu));
    // 00f8ec  mov word ptr gs:[ebp + 0x44a], bx
    X86_AT(c, 0xf8ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au)), (c.r[3] & 0xFFFFu));
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf88au, "ran off the end of a function");
}
void f_0000f892(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f892  call 0x6120
    X86_AT(c, 0xf892u);
    push32(c, 0xf897u); f_00006120(c); X86_RET(c, 0xf897u);
    X86_TICK(c, 12);
    // 00f897  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf897u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f89f  je 0xf8b4
    X86_AT(c, 0xf89fu);
    if (x86_cc(c, 4)) { goto L_f8b4; }
    X86_TICK(c, 14);
    // 00f8a1  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf8a1u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f8a9  shr ax, 1
    X86_AT(c, 0xf8a9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f8ac  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf8acu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f8b4:
    X86_TICK(c, 15);
    // 00f8b4  sub eax, eax
    X86_AT(c, 0xf8b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f8b6  sub ebx, ebx
    X86_AT(c, 0xf8b6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00f8b8  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf8b8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f8bf  test dl, 1
    X86_AT(c, 0xf8bfu);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f8c2  je 0xf8cc
    X86_AT(c, 0xf8c2u);
    if (x86_cc(c, 4)) { goto L_f8cc; }
    X86_TICK(c, 4);
    // 00f8c4  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8c4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
L_f8cc:
    X86_TICK(c, 7);
    // 00f8cc  test dl, 2
    X86_AT(c, 0xf8ccu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f8cf  je 0xf8e4
    X86_AT(c, 0xf8cfu);
    if (x86_cc(c, 4)) { goto L_f8e4; }
    X86_TICK(c, 13);
    // 00f8d1  mov ebx, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8d1u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f8d8  add bx, bx
    X86_AT(c, 0xf8d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8db  add ax, bx
    X86_AT(c, 0xf8dbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8de  shr ebx, 0x10
    X86_AT(c, 0xf8deu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8e1  add bx, bx
    X86_AT(c, 0xf8e1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f8e4:
    X86_TICK(c, 24);
    // 00f8e4  mov word ptr gs:[ebp + 0x448], ax
    X86_AT(c, 0xf8e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), (c.r[0] & 0xFFFFu));
    // 00f8ec  mov word ptr gs:[ebp + 0x44a], bx
    X86_AT(c, 0xf8ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au)), (c.r[3] & 0xFFFFu));
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf892u, "ran off the end of a function");
}
void f_0000f897(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00f897  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf897u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f89f  je 0xf8b4
    X86_AT(c, 0xf89fu);
    if (x86_cc(c, 4)) { goto L_f8b4; }
    X86_TICK(c, 14);
    // 00f8a1  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf8a1u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f8a9  shr ax, 1
    X86_AT(c, 0xf8a9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f8ac  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf8acu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f8b4:
    X86_TICK(c, 15);
    // 00f8b4  sub eax, eax
    X86_AT(c, 0xf8b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f8b6  sub ebx, ebx
    X86_AT(c, 0xf8b6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00f8b8  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf8b8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f8bf  test dl, 1
    X86_AT(c, 0xf8bfu);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f8c2  je 0xf8cc
    X86_AT(c, 0xf8c2u);
    if (x86_cc(c, 4)) { goto L_f8cc; }
    X86_TICK(c, 4);
    // 00f8c4  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8c4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
L_f8cc:
    X86_TICK(c, 7);
    // 00f8cc  test dl, 2
    X86_AT(c, 0xf8ccu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f8cf  je 0xf8e4
    X86_AT(c, 0xf8cfu);
    if (x86_cc(c, 4)) { goto L_f8e4; }
    X86_TICK(c, 13);
    // 00f8d1  mov ebx, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8d1u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f8d8  add bx, bx
    X86_AT(c, 0xf8d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8db  add ax, bx
    X86_AT(c, 0xf8dbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8de  shr ebx, 0x10
    X86_AT(c, 0xf8deu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8e1  add bx, bx
    X86_AT(c, 0xf8e1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f8e4:
    X86_TICK(c, 24);
    // 00f8e4  mov word ptr gs:[ebp + 0x448], ax
    X86_AT(c, 0xf8e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), (c.r[0] & 0xFFFFu));
    // 00f8ec  mov word ptr gs:[ebp + 0x44a], bx
    X86_AT(c, 0xf8ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au)), (c.r[3] & 0xFFFFu));
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf897u, "ran off the end of a function");
}
void f_0000f89f(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f89f  je 0xf8b4
    X86_AT(c, 0xf89fu);
    if (x86_cc(c, 4)) { goto L_f8b4; }
    X86_TICK(c, 14);
    // 00f8a1  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf8a1u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f8a9  shr ax, 1
    X86_AT(c, 0xf8a9u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 0, r); }
    // 00f8ac  add word ptr gs:[ebp + 0x384], ax
    X86_AT(c, 0xf8acu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
L_f8b4:
    X86_TICK(c, 15);
    // 00f8b4  sub eax, eax
    X86_AT(c, 0xf8b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f8b6  sub ebx, ebx
    X86_AT(c, 0xf8b6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00f8b8  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf8b8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f8bf  test dl, 1
    X86_AT(c, 0xf8bfu);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f8c2  je 0xf8cc
    X86_AT(c, 0xf8c2u);
    if (x86_cc(c, 4)) { goto L_f8cc; }
    X86_TICK(c, 4);
    // 00f8c4  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8c4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
L_f8cc:
    X86_TICK(c, 7);
    // 00f8cc  test dl, 2
    X86_AT(c, 0xf8ccu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f8cf  je 0xf8e4
    X86_AT(c, 0xf8cfu);
    if (x86_cc(c, 4)) { goto L_f8e4; }
    X86_TICK(c, 13);
    // 00f8d1  mov ebx, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8d1u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f8d8  add bx, bx
    X86_AT(c, 0xf8d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8db  add ax, bx
    X86_AT(c, 0xf8dbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8de  shr ebx, 0x10
    X86_AT(c, 0xf8deu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8e1  add bx, bx
    X86_AT(c, 0xf8e1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f8e4:
    X86_TICK(c, 24);
    // 00f8e4  mov word ptr gs:[ebp + 0x448], ax
    X86_AT(c, 0xf8e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), (c.r[0] & 0xFFFFu));
    // 00f8ec  mov word ptr gs:[ebp + 0x44a], bx
    X86_AT(c, 0xf8ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au)), (c.r[3] & 0xFFFFu));
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf89fu, "ran off the end of a function");
}
void f_0000f8b4(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00f8b4  sub eax, eax
    X86_AT(c, 0xf8b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 00f8b6  sub ebx, ebx
    X86_AT(c, 0xf8b6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00f8b8  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf8b8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f8bf  test dl, 1
    X86_AT(c, 0xf8bfu);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f8c2  je 0xf8cc
    X86_AT(c, 0xf8c2u);
    if (x86_cc(c, 4)) { goto L_f8cc; }
    X86_TICK(c, 4);
    // 00f8c4  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8c4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
L_f8cc:
    X86_TICK(c, 7);
    // 00f8cc  test dl, 2
    X86_AT(c, 0xf8ccu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f8cf  je 0xf8e4
    X86_AT(c, 0xf8cfu);
    if (x86_cc(c, 4)) { goto L_f8e4; }
    X86_TICK(c, 13);
    // 00f8d1  mov ebx, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8d1u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f8d8  add bx, bx
    X86_AT(c, 0xf8d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8db  add ax, bx
    X86_AT(c, 0xf8dbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8de  shr ebx, 0x10
    X86_AT(c, 0xf8deu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8e1  add bx, bx
    X86_AT(c, 0xf8e1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f8e4:
    X86_TICK(c, 24);
    // 00f8e4  mov word ptr gs:[ebp + 0x448], ax
    X86_AT(c, 0xf8e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), (c.r[0] & 0xFFFFu));
    // 00f8ec  mov word ptr gs:[ebp + 0x44a], bx
    X86_AT(c, 0xf8ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au)), (c.r[3] & 0xFFFFu));
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf8b4u, "ran off the end of a function");
}
void f_0000f8b6(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00f8b6  sub ebx, ebx
    X86_AT(c, 0xf8b6u);
    { uint32_t v = c.r[3]; c.r[3] = x86_sub(c, v, c.r[3], 0, 4); }
    // 00f8b8  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf8b8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f8bf  test dl, 1
    X86_AT(c, 0xf8bfu);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f8c2  je 0xf8cc
    X86_AT(c, 0xf8c2u);
    if (x86_cc(c, 4)) { goto L_f8cc; }
    X86_TICK(c, 4);
    // 00f8c4  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8c4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
L_f8cc:
    X86_TICK(c, 7);
    // 00f8cc  test dl, 2
    X86_AT(c, 0xf8ccu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f8cf  je 0xf8e4
    X86_AT(c, 0xf8cfu);
    if (x86_cc(c, 4)) { goto L_f8e4; }
    X86_TICK(c, 13);
    // 00f8d1  mov ebx, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8d1u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f8d8  add bx, bx
    X86_AT(c, 0xf8d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8db  add ax, bx
    X86_AT(c, 0xf8dbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8de  shr ebx, 0x10
    X86_AT(c, 0xf8deu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8e1  add bx, bx
    X86_AT(c, 0xf8e1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f8e4:
    X86_TICK(c, 24);
    // 00f8e4  mov word ptr gs:[ebp + 0x448], ax
    X86_AT(c, 0xf8e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), (c.r[0] & 0xFFFFu));
    // 00f8ec  mov word ptr gs:[ebp + 0x44a], bx
    X86_AT(c, 0xf8ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au)), (c.r[3] & 0xFFFFu));
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf8b6u, "ran off the end of a function");
}
void f_0000f8b8(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00f8b8  mov dl, byte ptr gs:[ebp + 0x379]
    X86_AT(c, 0xf8b8u);
    s8(c, 2, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x379u))));
    // 00f8bf  test dl, 1
    X86_AT(c, 0xf8bfu);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f8c2  je 0xf8cc
    X86_AT(c, 0xf8c2u);
    if (x86_cc(c, 4)) { goto L_f8cc; }
    X86_TICK(c, 4);
    // 00f8c4  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8c4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
L_f8cc:
    X86_TICK(c, 7);
    // 00f8cc  test dl, 2
    X86_AT(c, 0xf8ccu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f8cf  je 0xf8e4
    X86_AT(c, 0xf8cfu);
    if (x86_cc(c, 4)) { goto L_f8e4; }
    X86_TICK(c, 13);
    // 00f8d1  mov ebx, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8d1u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f8d8  add bx, bx
    X86_AT(c, 0xf8d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8db  add ax, bx
    X86_AT(c, 0xf8dbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8de  shr ebx, 0x10
    X86_AT(c, 0xf8deu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8e1  add bx, bx
    X86_AT(c, 0xf8e1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f8e4:
    X86_TICK(c, 24);
    // 00f8e4  mov word ptr gs:[ebp + 0x448], ax
    X86_AT(c, 0xf8e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), (c.r[0] & 0xFFFFu));
    // 00f8ec  mov word ptr gs:[ebp + 0x44a], bx
    X86_AT(c, 0xf8ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au)), (c.r[3] & 0xFFFFu));
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf8b8u, "ran off the end of a function");
}
void f_0000f8bf(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f8bf  test dl, 1
    X86_AT(c, 0xf8bfu);
    (void)x86_logic(c, g8(c, 2) & 0x1u, 1);
    // 00f8c2  je 0xf8cc
    X86_AT(c, 0xf8c2u);
    if (x86_cc(c, 4)) { goto L_f8cc; }
    X86_TICK(c, 4);
    // 00f8c4  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8c4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
L_f8cc:
    X86_TICK(c, 7);
    // 00f8cc  test dl, 2
    X86_AT(c, 0xf8ccu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f8cf  je 0xf8e4
    X86_AT(c, 0xf8cfu);
    if (x86_cc(c, 4)) { goto L_f8e4; }
    X86_TICK(c, 13);
    // 00f8d1  mov ebx, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8d1u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f8d8  add bx, bx
    X86_AT(c, 0xf8d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8db  add ax, bx
    X86_AT(c, 0xf8dbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8de  shr ebx, 0x10
    X86_AT(c, 0xf8deu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8e1  add bx, bx
    X86_AT(c, 0xf8e1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f8e4:
    X86_TICK(c, 24);
    // 00f8e4  mov word ptr gs:[ebp + 0x448], ax
    X86_AT(c, 0xf8e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), (c.r[0] & 0xFFFFu));
    // 00f8ec  mov word ptr gs:[ebp + 0x44a], bx
    X86_AT(c, 0xf8ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au)), (c.r[3] & 0xFFFFu));
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf8bfu, "ran off the end of a function");
}
void f_0000f8c2(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f8c2  je 0xf8cc
    X86_AT(c, 0xf8c2u);
    if (x86_cc(c, 4)) { goto L_f8cc; }
    X86_TICK(c, 4);
    // 00f8c4  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8c4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
L_f8cc:
    X86_TICK(c, 7);
    // 00f8cc  test dl, 2
    X86_AT(c, 0xf8ccu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f8cf  je 0xf8e4
    X86_AT(c, 0xf8cfu);
    if (x86_cc(c, 4)) { goto L_f8e4; }
    X86_TICK(c, 13);
    // 00f8d1  mov ebx, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8d1u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f8d8  add bx, bx
    X86_AT(c, 0xf8d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8db  add ax, bx
    X86_AT(c, 0xf8dbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8de  shr ebx, 0x10
    X86_AT(c, 0xf8deu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8e1  add bx, bx
    X86_AT(c, 0xf8e1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f8e4:
    X86_TICK(c, 24);
    // 00f8e4  mov word ptr gs:[ebp + 0x448], ax
    X86_AT(c, 0xf8e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), (c.r[0] & 0xFFFFu));
    // 00f8ec  mov word ptr gs:[ebp + 0x44a], bx
    X86_AT(c, 0xf8ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au)), (c.r[3] & 0xFFFFu));
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf8c2u, "ran off the end of a function");
}
void f_0000f8c4(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00f8c4  mov ax, word ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8c4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u))));
    // 00f8cc  test dl, 2
    X86_AT(c, 0xf8ccu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f8cf  je 0xf8e4
    X86_AT(c, 0xf8cfu);
    if (x86_cc(c, 4)) { goto L_f8e4; }
    X86_TICK(c, 13);
    // 00f8d1  mov ebx, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8d1u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f8d8  add bx, bx
    X86_AT(c, 0xf8d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8db  add ax, bx
    X86_AT(c, 0xf8dbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8de  shr ebx, 0x10
    X86_AT(c, 0xf8deu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8e1  add bx, bx
    X86_AT(c, 0xf8e1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f8e4:
    X86_TICK(c, 24);
    // 00f8e4  mov word ptr gs:[ebp + 0x448], ax
    X86_AT(c, 0xf8e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), (c.r[0] & 0xFFFFu));
    // 00f8ec  mov word ptr gs:[ebp + 0x44a], bx
    X86_AT(c, 0xf8ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au)), (c.r[3] & 0xFFFFu));
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf8c4u, "ran off the end of a function");
}
void f_0000f8cc(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f8cc  test dl, 2
    X86_AT(c, 0xf8ccu);
    (void)x86_logic(c, g8(c, 2) & 0x2u, 1);
    // 00f8cf  je 0xf8e4
    X86_AT(c, 0xf8cfu);
    if (x86_cc(c, 4)) { goto L_f8e4; }
    X86_TICK(c, 13);
    // 00f8d1  mov ebx, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8d1u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f8d8  add bx, bx
    X86_AT(c, 0xf8d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8db  add ax, bx
    X86_AT(c, 0xf8dbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8de  shr ebx, 0x10
    X86_AT(c, 0xf8deu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8e1  add bx, bx
    X86_AT(c, 0xf8e1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f8e4:
    X86_TICK(c, 24);
    // 00f8e4  mov word ptr gs:[ebp + 0x448], ax
    X86_AT(c, 0xf8e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), (c.r[0] & 0xFFFFu));
    // 00f8ec  mov word ptr gs:[ebp + 0x44a], bx
    X86_AT(c, 0xf8ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au)), (c.r[3] & 0xFFFFu));
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf8ccu, "ran off the end of a function");
}
void f_0000f8cf(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00f8cf  je 0xf8e4
    X86_AT(c, 0xf8cfu);
    if (x86_cc(c, 4)) { goto L_f8e4; }
    X86_TICK(c, 13);
    // 00f8d1  mov ebx, dword ptr gs:[ebp + 0x388]
    X86_AT(c, 0xf8d1u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x388u)));
    // 00f8d8  add bx, bx
    X86_AT(c, 0xf8d8u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8db  add ax, bx
    X86_AT(c, 0xf8dbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00f8de  shr ebx, 0x10
    X86_AT(c, 0xf8deu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8e1  add bx, bx
    X86_AT(c, 0xf8e1u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
L_f8e4:
    X86_TICK(c, 24);
    // 00f8e4  mov word ptr gs:[ebp + 0x448], ax
    X86_AT(c, 0xf8e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), (c.r[0] & 0xFFFFu));
    // 00f8ec  mov word ptr gs:[ebp + 0x44a], bx
    X86_AT(c, 0xf8ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au)), (c.r[3] & 0xFFFFu));
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf8cfu, "ran off the end of a function");
}
void f_0000f8e4(X86Cpu& c) {
    X86_TICK(c, 24);
    // 00f8e4  mov word ptr gs:[ebp + 0x448], ax
    X86_AT(c, 0xf8e4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u)), (c.r[0] & 0xFFFFu));
    // 00f8ec  mov word ptr gs:[ebp + 0x44a], bx
    X86_AT(c, 0xf8ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au)), (c.r[3] & 0xFFFFu));
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf8e4u, "ran off the end of a function");
}
void f_0000f8ec(X86Cpu& c) {
    X86_TICK(c, 22);
    // 00f8ec  mov word ptr gs:[ebp + 0x44a], bx
    X86_AT(c, 0xf8ecu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au)), (c.r[3] & 0xFFFFu));
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf8ecu, "ran off the end of a function");
}
void f_0000f8f4(X86Cpu& c) {
    X86_TICK(c, 20);
    // 00f8f4  mov edx, dword ptr gs:[ebp + 0x344]
    X86_AT(c, 0xf8f4u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x344u)));
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf8f4u, "ran off the end of a function");
}
void f_0000f8fb(X86Cpu& c) {
    X86_TICK(c, 16);
    // 00f8fb  shld ebx, edx, 0x10
    X86_AT(c, 0xf8fbu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf8fbu, "ran off the end of a function");
}
void f_0000f8ff(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00f8ff  movzx ecx, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0xf8ffu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf8ffu, "ran off the end of a function");
}
void f_0000f907(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00f907  call dword ptr cs:[ecx*4 + 0xfc80]
    X86_AT(c, 0xf907u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xFC80u))); push32(c, 0xf90fu);
      switch (t) {
      case 0xfc90u: f_0000fc90(c); break;
      case 0xfcebu: f_0000fceb(c); break;
      case 0xfd46u: f_0000fd46(c); break;
      case 0xfda1u: f_0000fda1(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0xf90fu); }
    X86_TICK(c, 16);
    // 00f90f  mov ch, byte ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf90fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))));
    // 00f916  mov ax, word ptr gs:[ebp + 0x386]
    X86_AT(c, 0xf916u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x386u))));
    // 00f91e  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xf91eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00f926  mov word ptr gs:[ebp + 0x376], 0
    X86_AT(c, 0xf926u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), 0x0u);
    // 00f930  push ds
    X86_AT(c, 0xf930u);
    push32(c, c.sreg[3]);
    // 00f931  push esi
    X86_AT(c, 0xf931u);
    { uint32_t v = c.r[6]; push32(c, v); }
L_f932:
    X86_TICK(c, 78);
    // 00f932  mov ax, word ptr gs:[ebp + 0x35a]
    X86_AT(c, 0xf932u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Au))));
    // 00f93a  add ax, word ptr gs:[ebp + 0x376]
    X86_AT(c, 0xf93au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u))), 0, 2)); }
    // 00f942  sub edx, edx
    X86_AT(c, 0xf942u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f944  div word ptr gs:[ebp + 0x372]
    X86_AT(c, 0xf944u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x372u))), 2, 0xf944u);
    // 00f94c  mov word ptr gs:[ebp + 0x36e], ax
    X86_AT(c, 0xf94cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Eu)), (c.r[0] & 0xFFFFu));
    // 00f954  add ax, word ptr gs:[ebp + 0x44a]
    X86_AT(c, 0xf954u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x44Au))), 0, 2)); }
    // 00f95c  mov word ptr gs:[ebp + 0x37e], ax
    X86_AT(c, 0xf95cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Eu)), (c.r[0] & 0xFFFFu));
    // 00f964  mov word ptr gs:[ebp + 0x376], dx
    X86_AT(c, 0xf964u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x376u)), (c.r[2] & 0xFFFFu));
    // 00f96c  mov ah, 1
    X86_AT(c, 0xf96cu);
    s8(c, 4, 0x1u);
    // 00f96e  mov cl, byte ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf96eu);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))));
    // 00f975  mov dx, word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xf975u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u))));
    // 00f97d  mov word ptr gs:[ebp + 0x35c], dx
    X86_AT(c, 0xf97du);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Cu)), (c.r[2] & 0xFFFFu));
    // 00f985  mov word ptr gs:[ebp + 0x374], 0
    X86_AT(c, 0xf985u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), 0x0u);
L_f98f:
    X86_TICK(c, 15);
    // 00f98f  lds esi, fword ptr [esp]
    X86_AT(c, 0xf98fu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t o = rd32(ea); uint32_t s = rd16(ea + 4); x86_load_seg(c, 3, s); c.r[6] = o; }
    // 00f992  lodsb al, byte ptr [esi]
    X86_AT(c, 0xf992u);
    x86_string(c, 3, 1, 0, 4, 3);
    // 00f993  mov dword ptr [esp], esi
    X86_AT(c, 0xf993u);
    wr32((c.sbase[2] + (uint32_t)(c.r[4])), c.r[6]);
L_f996:
    X86_TICK(c, 82);
    // 00f996  add al, al
    X86_AT(c, 0xf996u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_add(c, v, g8(c, 0), 0, 1)); }
    // 00f998  setb byte ptr gs:[ebp + 0x380]
    X86_AT(c, 0xf998u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x380u)), x86_cc(c, 2) ? 1u : 0u);
    // 00f9a0  push eax
    X86_AT(c, 0xf9a0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 00f9a1  push ecx
    X86_AT(c, 0xf9a1u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 00f9a2  mov ax, word ptr gs:[ebp + 0x358]
    X86_AT(c, 0xf9a2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x358u))));
    // 00f9aa  add ax, word ptr gs:[ebp + 0x374]
    X86_AT(c, 0xf9aau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u))), 0, 2)); }
    // 00f9b2  sub edx, edx
    X86_AT(c, 0xf9b2u);
    { uint32_t v = c.r[2]; c.r[2] = x86_sub(c, v, c.r[2], 0, 4); }
    // 00f9b4  div word ptr gs:[ebp + 0x370]
    X86_AT(c, 0xf9b4u);
    x86_div(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x370u))), 2, 0xf9b4u);
    // 00f9bc  mov word ptr gs:[ebp + 0x36c], ax
    X86_AT(c, 0xf9bcu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x36Cu)), (c.r[0] & 0xFFFFu));
    // 00f9c4  add ax, word ptr gs:[ebp + 0x448]
    X86_AT(c, 0xf9c4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x448u))), 0, 2)); }
    // 00f9cc  mov word ptr gs:[ebp + 0x37c], ax
    X86_AT(c, 0xf9ccu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x37Cu)), (c.r[0] & 0xFFFFu));
    // 00f9d4  mov word ptr gs:[ebp + 0x374], dx
    X86_AT(c, 0xf9d4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x374u)), (c.r[2] & 0xFFFFu));
    // 00f9dc  call 0xfa24
    X86_AT(c, 0xf9dcu);
    push32(c, 0xf9e1u); f_0000fa24(c); X86_RET(c, 0xf9e1u);
    X86_TICK(c, 15);
    // 00f9e1  pop ecx
    X86_AT(c, 0xf9e1u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00f9e2  pop eax
    X86_AT(c, 0xf9e2u);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 00f9e3  dec cl
    X86_AT(c, 0xf9e3u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 00f9e5  je 0xf9ed
    X86_AT(c, 0xf9e5u);
    if (x86_cc(c, 4)) { goto L_f9ed; }
    X86_TICK(c, 8);
    // 00f9e7  rol ah, 1
    X86_AT(c, 0xf9e7u);
    { uint32_t v = g8(c, 4); bool w; uint32_t r = x86_shift(c, 0, v, 0x1u, 1, w); if (w) s8(c, 4, r); }
    // 00f9e9  jae 0xf996
    X86_AT(c, 0xf9e9u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0xf996u); goto L_f996; }
    X86_TICK(c, 7);
    // 00f9eb  jmp 0xf98f
    X86_AT(c, 0xf9ebu);
    X86_POLL(c, 0xf98fu); goto L_f98f;
L_f9ed:
    X86_TICK(c, 12);
    // 00f9ed  test byte ptr gs:[ebp + 0x338], 2
    X86_AT(c, 0xf9edu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x338u))) & 0x2u, 1);
    // 00f9f5  jne 0x10058
    X86_AT(c, 0xf9f5u);
    if (x86_cc(c, 5)) { goto L_10058; }
L_f9fb:
    X86_TICK(c, 13);
    // 00f9fb  mov ax, word ptr gs:[ebp + 0x360]
    X86_AT(c, 0xf9fbu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x360u))));
    // 00fa03  mov word ptr gs:[ebp + 0x35e], ax
    X86_AT(c, 0xfa03u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x35Eu)), (c.r[0] & 0xFFFFu));
    // 00fa0b  dec ch
    X86_AT(c, 0xfa0bu);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_dec(c, v, 1)); }
    // 00fa0d  jne 0xf932
    X86_AT(c, 0xfa0du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0xf932u); goto L_f932; }
    X86_TICK(c, 25);
    // 00fa13  add esp, 8
    X86_AT(c, 0xfa13u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x8u, 0, 4); }
    // 00fa16  pop word ptr gs:[ebp + 0x384]
    X86_AT(c, 0xfa16u);
    { uint32_t v = pop16(c); wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)), v); }
    // 00fa1e  pop esi
    X86_AT(c, 0xfa1eu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00fa1f  pop ds
    X86_AT(c, 0xfa1fu);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 00fa20  ret 
    X86_AT(c, 0xfa20u);
    c.eip = pop32(c); return;
L_10058:
    X86_TICK(c, 13);
    // 010058  movzx eax, byte ptr gs:[ebp + 0x34c]
    X86_AT(c, 0x10058u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x34Cu)));
    // 010060  call dword ptr cs:[eax*4 + 0x10084]
    X86_AT(c, 0x10060u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x10084u))); push32(c, 0x10068u);
      switch (t) {
      case 0x10094u: f_00010094(c); break;
      case 0x100b8u: f_000100b8(c); break;
      case 0x100dcu: f_000100dc(c); break;
      case 0x10100u: f_00010100(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10068u); }
    X86_TICK(c, 22);
    // 010068  bt ax, 0
    X86_AT(c, 0x10068u);
    x86_bitop(c, 0, 0, false, 0x0u, 2, c.r, 0);
    // 01006d  adc bx, 0
    X86_AT(c, 0x1006du);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 010071  shr bx, 1
    X86_AT(c, 0x10071u);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x1u, 2, w); if (w) s16(c, 3, r); }
    // 010074  sub word ptr gs:[ebp + 0x384], bx
    X86_AT(c, 0x10074u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x384u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 01007c  jmp 0xf9fb
    X86_AT(c, 0x1007cu);
    X86_POLL(c, 0xf9fbu); goto L_f9fb;
    x86_fault(c, 0xf907u, "ran off the end of a function");
}
}

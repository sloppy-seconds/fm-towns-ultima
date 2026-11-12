#include "p_tbios_funcs.h"
namespace p_tbios {
void f_000089b8(X86Cpu& c) {
    X86_TICK(c, 41);
    // 0089b8  xchg dl, dh
    X86_AT(c, 0x89b8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 0089ba  rol edx, 0x10
    X86_AT(c, 0x89bau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0089bd  xchg dl, dh
    X86_AT(c, 0x89bdu);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 0089bf  mov eax, dword ptr [esi]
    X86_AT(c, 0x89bfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0089c1  xchg al, ah
    X86_AT(c, 0x89c1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c3  rol eax, 0x10
    X86_AT(c, 0x89c3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0089c6  xchg al, ah
    X86_AT(c, 0x89c6u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c8  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x89c8u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 0089cf  shrd eax, edx, cl
    X86_AT(c, 0x89cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0089d2  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x89d2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 0089da  jne 0x89de
    X86_AT(c, 0x89dau);
    if (x86_cc(c, 5)) { goto L_89de; }
    X86_TICK(c, 2);
    // 0089dc  not eax
    X86_AT(c, 0x89dcu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_89de:
    X86_TICK(c, 21);
    // 0089de  pop edx
    X86_AT(c, 0x89deu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89b8u, "ran off the end of a function");
}
void f_000089ba(X86Cpu& c) {
    X86_TICK(c, 38);
    // 0089ba  rol edx, 0x10
    X86_AT(c, 0x89bau);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 0089bd  xchg dl, dh
    X86_AT(c, 0x89bdu);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 0089bf  mov eax, dword ptr [esi]
    X86_AT(c, 0x89bfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0089c1  xchg al, ah
    X86_AT(c, 0x89c1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c3  rol eax, 0x10
    X86_AT(c, 0x89c3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0089c6  xchg al, ah
    X86_AT(c, 0x89c6u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c8  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x89c8u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 0089cf  shrd eax, edx, cl
    X86_AT(c, 0x89cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0089d2  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x89d2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 0089da  jne 0x89de
    X86_AT(c, 0x89dau);
    if (x86_cc(c, 5)) { goto L_89de; }
    X86_TICK(c, 2);
    // 0089dc  not eax
    X86_AT(c, 0x89dcu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_89de:
    X86_TICK(c, 21);
    // 0089de  pop edx
    X86_AT(c, 0x89deu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89bau, "ran off the end of a function");
}
void f_000089bd(X86Cpu& c) {
    X86_TICK(c, 35);
    // 0089bd  xchg dl, dh
    X86_AT(c, 0x89bdu);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 0089bf  mov eax, dword ptr [esi]
    X86_AT(c, 0x89bfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0089c1  xchg al, ah
    X86_AT(c, 0x89c1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c3  rol eax, 0x10
    X86_AT(c, 0x89c3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0089c6  xchg al, ah
    X86_AT(c, 0x89c6u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c8  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x89c8u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 0089cf  shrd eax, edx, cl
    X86_AT(c, 0x89cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0089d2  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x89d2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 0089da  jne 0x89de
    X86_AT(c, 0x89dau);
    if (x86_cc(c, 5)) { goto L_89de; }
    X86_TICK(c, 2);
    // 0089dc  not eax
    X86_AT(c, 0x89dcu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_89de:
    X86_TICK(c, 21);
    // 0089de  pop edx
    X86_AT(c, 0x89deu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89bdu, "ran off the end of a function");
}
void f_000089bf(X86Cpu& c) {
    X86_TICK(c, 32);
    // 0089bf  mov eax, dword ptr [esi]
    X86_AT(c, 0x89bfu);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 0089c1  xchg al, ah
    X86_AT(c, 0x89c1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c3  rol eax, 0x10
    X86_AT(c, 0x89c3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0089c6  xchg al, ah
    X86_AT(c, 0x89c6u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c8  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x89c8u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 0089cf  shrd eax, edx, cl
    X86_AT(c, 0x89cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0089d2  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x89d2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 0089da  jne 0x89de
    X86_AT(c, 0x89dau);
    if (x86_cc(c, 5)) { goto L_89de; }
    X86_TICK(c, 2);
    // 0089dc  not eax
    X86_AT(c, 0x89dcu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_89de:
    X86_TICK(c, 21);
    // 0089de  pop edx
    X86_AT(c, 0x89deu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89bfu, "ran off the end of a function");
}
void f_000089c1(X86Cpu& c) {
    X86_TICK(c, 28);
    // 0089c1  xchg al, ah
    X86_AT(c, 0x89c1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c3  rol eax, 0x10
    X86_AT(c, 0x89c3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0089c6  xchg al, ah
    X86_AT(c, 0x89c6u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c8  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x89c8u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 0089cf  shrd eax, edx, cl
    X86_AT(c, 0x89cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0089d2  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x89d2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 0089da  jne 0x89de
    X86_AT(c, 0x89dau);
    if (x86_cc(c, 5)) { goto L_89de; }
    X86_TICK(c, 2);
    // 0089dc  not eax
    X86_AT(c, 0x89dcu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_89de:
    X86_TICK(c, 21);
    // 0089de  pop edx
    X86_AT(c, 0x89deu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89c1u, "ran off the end of a function");
}
void f_000089c3(X86Cpu& c) {
    X86_TICK(c, 25);
    // 0089c3  rol eax, 0x10
    X86_AT(c, 0x89c3u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 0089c6  xchg al, ah
    X86_AT(c, 0x89c6u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c8  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x89c8u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 0089cf  shrd eax, edx, cl
    X86_AT(c, 0x89cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0089d2  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x89d2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 0089da  jne 0x89de
    X86_AT(c, 0x89dau);
    if (x86_cc(c, 5)) { goto L_89de; }
    X86_TICK(c, 2);
    // 0089dc  not eax
    X86_AT(c, 0x89dcu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_89de:
    X86_TICK(c, 21);
    // 0089de  pop edx
    X86_AT(c, 0x89deu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89c3u, "ran off the end of a function");
}
void f_000089c6(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0089c6  xchg al, ah
    X86_AT(c, 0x89c6u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 0089c8  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x89c8u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 0089cf  shrd eax, edx, cl
    X86_AT(c, 0x89cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0089d2  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x89d2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 0089da  jne 0x89de
    X86_AT(c, 0x89dau);
    if (x86_cc(c, 5)) { goto L_89de; }
    X86_TICK(c, 2);
    // 0089dc  not eax
    X86_AT(c, 0x89dcu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_89de:
    X86_TICK(c, 21);
    // 0089de  pop edx
    X86_AT(c, 0x89deu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89c6u, "ran off the end of a function");
}
void f_000089c8(X86Cpu& c) {
    X86_TICK(c, 19);
    // 0089c8  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x89c8u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 0089cf  shrd eax, edx, cl
    X86_AT(c, 0x89cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0089d2  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x89d2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 0089da  jne 0x89de
    X86_AT(c, 0x89dau);
    if (x86_cc(c, 5)) { goto L_89de; }
    X86_TICK(c, 2);
    // 0089dc  not eax
    X86_AT(c, 0x89dcu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_89de:
    X86_TICK(c, 21);
    // 0089de  pop edx
    X86_AT(c, 0x89deu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89c8u, "ran off the end of a function");
}
void f_000089cf(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0089cf  shrd eax, edx, cl
    X86_AT(c, 0x89cfu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 0089d2  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x89d2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 0089da  jne 0x89de
    X86_AT(c, 0x89dau);
    if (x86_cc(c, 5)) { goto L_89de; }
    X86_TICK(c, 2);
    // 0089dc  not eax
    X86_AT(c, 0x89dcu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_89de:
    X86_TICK(c, 21);
    // 0089de  pop edx
    X86_AT(c, 0x89deu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89cfu, "ran off the end of a function");
}
void f_000089d2(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0089d2  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x89d2u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 0089da  jne 0x89de
    X86_AT(c, 0x89dau);
    if (x86_cc(c, 5)) { goto L_89de; }
    X86_TICK(c, 2);
    // 0089dc  not eax
    X86_AT(c, 0x89dcu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_89de:
    X86_TICK(c, 21);
    // 0089de  pop edx
    X86_AT(c, 0x89deu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89d2u, "ran off the end of a function");
}
void f_000089da(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0089da  jne 0x89de
    X86_AT(c, 0x89dau);
    if (x86_cc(c, 5)) { goto L_89de; }
    X86_TICK(c, 2);
    // 0089dc  not eax
    X86_AT(c, 0x89dcu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_89de:
    X86_TICK(c, 21);
    // 0089de  pop edx
    X86_AT(c, 0x89deu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89dau, "ran off the end of a function");
}
void f_000089dc(X86Cpu& c) {
    X86_TICK(c, 23);
    // 0089dc  not eax
    X86_AT(c, 0x89dcu);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
    // 0089de  pop edx
    X86_AT(c, 0x89deu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89dcu, "ran off the end of a function");
}
void f_000089de(X86Cpu& c) {
    X86_TICK(c, 21);
    // 0089de  pop edx
    X86_AT(c, 0x89deu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89deu, "ran off the end of a function");
}
void f_000089df(X86Cpu& c) {
    X86_TICK(c, 17);
    // 0089df  and eax, edx
    X86_AT(c, 0x89dfu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89dfu, "ran off the end of a function");
}
void f_000089e1(X86Cpu& c) {
    X86_TICK(c, 15);
    // 0089e1  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x89e1u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89e1u, "ran off the end of a function");
}
void f_000089e9(X86Cpu& c) {
    X86_TICK(c, 11);
    // 0089e9  push ebx
    X86_AT(c, 0x89e9u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89e9u, "ran off the end of a function");
}
void f_000089ea(X86Cpu& c) {
    X86_TICK(c, 9);
    // 0089ea  push esi
    X86_AT(c, 0x89eau);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89eau, "ran off the end of a function");
}
void f_000089eb(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0089eb  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x89ebu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x89f2u); x86_call(c, t); X86_RET(c, 0x89f2u); }
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89ebu, "ran off the end of a function");
}
void f_000089f2(X86Cpu& c) {
    X86_TICK(c, 22);
    // 0089f2  pop esi
    X86_AT(c, 0x89f2u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89f2u, "ran off the end of a function");
}
void f_000089f3(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0089f3  pop ebx
    X86_AT(c, 0x89f3u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89f3u, "ran off the end of a function");
}
void f_000089f4(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0089f4  add esi, 4
    X86_AT(c, 0x89f4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89f4u, "ran off the end of a function");
}
void f_000089f7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0089f7  push word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x89f7u);
    { uint32_t v = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))); push16(c, v); }
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89f7u, "ran off the end of a function");
}
void f_000089ff(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0089ff  and word ptr [esp], 0xffe0
    X86_AT(c, 0x89ffu);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[4])); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & 0xFFE0u, 2)); }
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89ffu, "ran off the end of a function");
}
void f_00008a05(X86Cpu& c) {
L_8a05:
    X86_TICK(c, 14);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a05u, "ran off the end of a function");
}
void f_00008a09(X86Cpu& c) {
    goto L_8a09;
L_8a05:
    X86_TICK(c, 2);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
L_8a09:
    X86_TICK(c, 12);
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a09u, "ran off the end of a function");
}
void f_00008a0d(X86Cpu& c) {
    goto L_8a0d;
L_8a05:
    X86_TICK(c, 9);
    // 008a05  add bx, 0x20
    X86_AT(c, 0x8a05u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, 0x20u, 0, 2)); }
    // 008a09  cmp word ptr [esp], bx
    X86_AT(c, 0x8a09u);
    (void)x86_sub(c, rd16((c.sbase[2] + (uint32_t)(c.r[4]))), (c.r[3] & 0xFFFFu), 0, 2);
L_8a0d:
    X86_TICK(c, 5);
    // 008a0d  je 0x8a54
    X86_AT(c, 0x8a0du);
    if (x86_cc(c, 4)) { goto L_8a54; }
    X86_TICK(c, 47);
    // 008a0f  push edx
    X86_AT(c, 0x8a0fu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a10  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a10u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a13  xchg dl, dh
    X86_AT(c, 0x8a13u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a15  rol edx, 0x10
    X86_AT(c, 0x8a15u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a18  xchg dl, dh
    X86_AT(c, 0x8a18u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a1a  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a1au);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a1c  xchg al, ah
    X86_AT(c, 0x8a1cu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a1e  rol eax, 0x10
    X86_AT(c, 0x8a1eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a21  xchg al, ah
    X86_AT(c, 0x8a21u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a23  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a23u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a2a  shrd eax, edx, cl
    X86_AT(c, 0x8a2au);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a2d  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a2du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a35  jne 0x8a39
    X86_AT(c, 0x8a35u);
    if (x86_cc(c, 5)) { goto L_8a39; }
    X86_TICK(c, 2);
    // 008a37  not eax
    X86_AT(c, 0x8a37u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a39:
    X86_TICK(c, 19);
    // 008a39  pop edx
    X86_AT(c, 0x8a39u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a3a  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a3au);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008a42  push ebx
    X86_AT(c, 0x8a42u);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 008a43  push esi
    X86_AT(c, 0x8a43u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 008a44  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8a44u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8a4bu); x86_call(c, t); X86_RET(c, 0x8a4bu); }
    X86_TICK(c, 17);
    // 008a4b  pop esi
    X86_AT(c, 0x8a4bu);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 008a4c  pop ebx
    X86_AT(c, 0x8a4cu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 008a4d  add esi, 4
    X86_AT(c, 0x8a4du);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 008a50  jmp 0x8a05
    X86_AT(c, 0x8a50u);
    X86_POLL(c, 0x8a05u); goto L_8a05;
L_8a54:
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a0du, "ran off the end of a function");
}
void f_00008a54(X86Cpu& c) {
    X86_TICK(c, 59);
    // 008a54  add esp, 2
    X86_AT(c, 0x8a54u);
    { uint32_t v = c.r[4]; c.r[4] = x86_add(c, v, 0x2u, 0, 4); }
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a54u, "ran off the end of a function");
}
void f_00008a57(X86Cpu& c) {
    X86_TICK(c, 57);
    // 008a57  mov ax, word ptr gs:[ebp + 0x224]
    X86_AT(c, 0x8a57u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x224u))));
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a57u, "ran off the end of a function");
}
void f_00008a5f(X86Cpu& c) {
    X86_TICK(c, 53);
    // 008a5f  and eax, 0x1f
    X86_AT(c, 0x8a5fu);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a5fu, "ran off the end of a function");
}
void f_00008a64(X86Cpu& c) {
    X86_TICK(c, 51);
    // 008a64  mov edx, dword ptr cs:[eax*4 + 0xbeb4]
    X86_AT(c, 0x8a64u);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBEB4u)));
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a64u, "ran off the end of a function");
}
void f_00008a6c(X86Cpu& c) {
    X86_TICK(c, 47);
    // 008a6c  push edx
    X86_AT(c, 0x8a6cu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a6cu, "ran off the end of a function");
}
void f_00008a6d(X86Cpu& c) {
    X86_TICK(c, 45);
    // 008a6d  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8a6du);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a6du, "ran off the end of a function");
}
void f_00008a70(X86Cpu& c) {
    X86_TICK(c, 41);
    // 008a70  xchg dl, dh
    X86_AT(c, 0x8a70u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a70u, "ran off the end of a function");
}
void f_00008a72(X86Cpu& c) {
    X86_TICK(c, 38);
    // 008a72  rol edx, 0x10
    X86_AT(c, 0x8a72u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a72u, "ran off the end of a function");
}
void f_00008a75(X86Cpu& c) {
    X86_TICK(c, 35);
    // 008a75  xchg dl, dh
    X86_AT(c, 0x8a75u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a75u, "ran off the end of a function");
}
void f_00008a77(X86Cpu& c) {
    X86_TICK(c, 32);
    // 008a77  mov eax, dword ptr [esi]
    X86_AT(c, 0x8a77u);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a77u, "ran off the end of a function");
}
void f_00008a79(X86Cpu& c) {
    X86_TICK(c, 28);
    // 008a79  xchg al, ah
    X86_AT(c, 0x8a79u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a79u, "ran off the end of a function");
}
void f_00008a7b(X86Cpu& c) {
    X86_TICK(c, 25);
    // 008a7b  rol eax, 0x10
    X86_AT(c, 0x8a7bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a7bu, "ran off the end of a function");
}
void f_00008a7e(X86Cpu& c) {
    X86_TICK(c, 22);
    // 008a7e  xchg al, ah
    X86_AT(c, 0x8a7eu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a7eu, "ran off the end of a function");
}
void f_00008a80(X86Cpu& c) {
    X86_TICK(c, 19);
    // 008a80  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8a80u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a80u, "ran off the end of a function");
}
void f_00008a87(X86Cpu& c) {
    X86_TICK(c, 15);
    // 008a87  shrd eax, edx, cl
    X86_AT(c, 0x8a87u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a87u, "ran off the end of a function");
}
void f_00008a8a(X86Cpu& c) {
    X86_TICK(c, 12);
    // 008a8a  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8a8au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008a92  jne 0x8a96
    X86_AT(c, 0x8a92u);
    if (x86_cc(c, 5)) { goto L_8a96; }
    X86_TICK(c, 2);
    // 008a94  not eax
    X86_AT(c, 0x8a94u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8a96:
    X86_TICK(c, 17);
    // 008a96  pop edx
    X86_AT(c, 0x8a96u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008a97  and eax, edx
    X86_AT(c, 0x8a97u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008a99  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8a99u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008aa1  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8aa1u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8aa8u); x86_call(c, t); X86_RET(c, 0x8aa8u); }
    X86_TICK(c, 10);
    // 008aa8  ret 
    X86_AT(c, 0x8aa8u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a8au, "ran off the end of a function");
}
}

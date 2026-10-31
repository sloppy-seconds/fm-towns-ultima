#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000895b(X86Cpu& c) {
    X86_TICK(c, 39);
    // 00895b  mov bx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x895bu);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 008963  and bx, 0xffe0
    X86_AT(c, 0x8963u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008968  sub ax, bx
    X86_AT(c, 0x8968u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00896b  shr eax, 3
    X86_AT(c, 0x896bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00896e  add esi, eax
    X86_AT(c, 0x896eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 008970  mov cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8970u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 008978  and cl, 0x1f
    X86_AT(c, 0x8978u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 00897b  mov byte ptr gs:[ebp + 0x22b], cl
    X86_AT(c, 0x897bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu)), g8(c, 1));
    // 008982  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8982u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008989  and bx, 0xffe0
    X86_AT(c, 0x8989u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 00898e  shld eax, ebx, 0x10
    X86_AT(c, 0x898eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008992  and ax, 0xffe0
    X86_AT(c, 0x8992u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008996  cmp bx, ax
    X86_AT(c, 0x8996u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x895bu, "ran off the end of a function");
}
void f_00008963(X86Cpu& c) {
    X86_TICK(c, 35);
    // 008963  and bx, 0xffe0
    X86_AT(c, 0x8963u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008968  sub ax, bx
    X86_AT(c, 0x8968u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00896b  shr eax, 3
    X86_AT(c, 0x896bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00896e  add esi, eax
    X86_AT(c, 0x896eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 008970  mov cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8970u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 008978  and cl, 0x1f
    X86_AT(c, 0x8978u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 00897b  mov byte ptr gs:[ebp + 0x22b], cl
    X86_AT(c, 0x897bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu)), g8(c, 1));
    // 008982  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8982u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008989  and bx, 0xffe0
    X86_AT(c, 0x8989u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 00898e  shld eax, ebx, 0x10
    X86_AT(c, 0x898eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008992  and ax, 0xffe0
    X86_AT(c, 0x8992u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008996  cmp bx, ax
    X86_AT(c, 0x8996u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8963u, "ran off the end of a function");
}
void f_00008968(X86Cpu& c) {
    X86_TICK(c, 33);
    // 008968  sub ax, bx
    X86_AT(c, 0x8968u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00896b  shr eax, 3
    X86_AT(c, 0x896bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00896e  add esi, eax
    X86_AT(c, 0x896eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 008970  mov cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8970u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 008978  and cl, 0x1f
    X86_AT(c, 0x8978u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 00897b  mov byte ptr gs:[ebp + 0x22b], cl
    X86_AT(c, 0x897bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu)), g8(c, 1));
    // 008982  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8982u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008989  and bx, 0xffe0
    X86_AT(c, 0x8989u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 00898e  shld eax, ebx, 0x10
    X86_AT(c, 0x898eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008992  and ax, 0xffe0
    X86_AT(c, 0x8992u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008996  cmp bx, ax
    X86_AT(c, 0x8996u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8968u, "ran off the end of a function");
}
void f_0000896b(X86Cpu& c) {
    X86_TICK(c, 31);
    // 00896b  shr eax, 3
    X86_AT(c, 0x896bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x3u, 4, w); if (w) c.r[0] = r; }
    // 00896e  add esi, eax
    X86_AT(c, 0x896eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 008970  mov cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8970u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 008978  and cl, 0x1f
    X86_AT(c, 0x8978u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 00897b  mov byte ptr gs:[ebp + 0x22b], cl
    X86_AT(c, 0x897bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu)), g8(c, 1));
    // 008982  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8982u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008989  and bx, 0xffe0
    X86_AT(c, 0x8989u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 00898e  shld eax, ebx, 0x10
    X86_AT(c, 0x898eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008992  and ax, 0xffe0
    X86_AT(c, 0x8992u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008996  cmp bx, ax
    X86_AT(c, 0x8996u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x896bu, "ran off the end of a function");
}
void f_0000896e(X86Cpu& c) {
    X86_TICK(c, 28);
    // 00896e  add esi, eax
    X86_AT(c, 0x896eu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, c.r[0], 0, 4); }
    // 008970  mov cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8970u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 008978  and cl, 0x1f
    X86_AT(c, 0x8978u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 00897b  mov byte ptr gs:[ebp + 0x22b], cl
    X86_AT(c, 0x897bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu)), g8(c, 1));
    // 008982  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8982u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008989  and bx, 0xffe0
    X86_AT(c, 0x8989u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 00898e  shld eax, ebx, 0x10
    X86_AT(c, 0x898eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008992  and ax, 0xffe0
    X86_AT(c, 0x8992u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008996  cmp bx, ax
    X86_AT(c, 0x8996u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x896eu, "ran off the end of a function");
}
void f_00008970(X86Cpu& c) {
    X86_TICK(c, 26);
    // 008970  mov cx, word ptr gs:[ebp + 0x414]
    X86_AT(c, 0x8970u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x414u))));
    // 008978  and cl, 0x1f
    X86_AT(c, 0x8978u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 00897b  mov byte ptr gs:[ebp + 0x22b], cl
    X86_AT(c, 0x897bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu)), g8(c, 1));
    // 008982  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8982u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008989  and bx, 0xffe0
    X86_AT(c, 0x8989u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 00898e  shld eax, ebx, 0x10
    X86_AT(c, 0x898eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008992  and ax, 0xffe0
    X86_AT(c, 0x8992u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008996  cmp bx, ax
    X86_AT(c, 0x8996u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8970u, "ran off the end of a function");
}
void f_00008978(X86Cpu& c) {
    X86_TICK(c, 22);
    // 008978  and cl, 0x1f
    X86_AT(c, 0x8978u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v & 0x1Fu, 1)); }
    // 00897b  mov byte ptr gs:[ebp + 0x22b], cl
    X86_AT(c, 0x897bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu)), g8(c, 1));
    // 008982  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8982u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008989  and bx, 0xffe0
    X86_AT(c, 0x8989u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 00898e  shld eax, ebx, 0x10
    X86_AT(c, 0x898eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008992  and ax, 0xffe0
    X86_AT(c, 0x8992u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008996  cmp bx, ax
    X86_AT(c, 0x8996u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8978u, "ran off the end of a function");
}
void f_0000897b(X86Cpu& c) {
    X86_TICK(c, 20);
    // 00897b  mov byte ptr gs:[ebp + 0x22b], cl
    X86_AT(c, 0x897bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu)), g8(c, 1));
    // 008982  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8982u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008989  and bx, 0xffe0
    X86_AT(c, 0x8989u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 00898e  shld eax, ebx, 0x10
    X86_AT(c, 0x898eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008992  and ax, 0xffe0
    X86_AT(c, 0x8992u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008996  cmp bx, ax
    X86_AT(c, 0x8996u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x897bu, "ran off the end of a function");
}
void f_00008982(X86Cpu& c) {
    X86_TICK(c, 18);
    // 008982  mov ebx, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8982u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008989  and bx, 0xffe0
    X86_AT(c, 0x8989u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 00898e  shld eax, ebx, 0x10
    X86_AT(c, 0x898eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008992  and ax, 0xffe0
    X86_AT(c, 0x8992u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008996  cmp bx, ax
    X86_AT(c, 0x8996u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8982u, "ran off the end of a function");
}
void f_00008989(X86Cpu& c) {
    X86_TICK(c, 14);
    // 008989  and bx, 0xffe0
    X86_AT(c, 0x8989u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_logic(c, v & 0xFFE0u, 2)); }
    // 00898e  shld eax, ebx, 0x10
    X86_AT(c, 0x898eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008992  and ax, 0xffe0
    X86_AT(c, 0x8992u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008996  cmp bx, ax
    X86_AT(c, 0x8996u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8989u, "ran off the end of a function");
}
void f_0000898e(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00898e  shld eax, ebx, 0x10
    X86_AT(c, 0x898eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008992  and ax, 0xffe0
    X86_AT(c, 0x8992u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008996  cmp bx, ax
    X86_AT(c, 0x8996u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x898eu, "ran off the end of a function");
}
void f_00008992(X86Cpu& c) {
    X86_TICK(c, 9);
    // 008992  and ax, 0xffe0
    X86_AT(c, 0x8992u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_logic(c, v & 0xFFE0u, 2)); }
    // 008996  cmp bx, ax
    X86_AT(c, 0x8996u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8992u, "ran off the end of a function");
}
void f_00008996(X86Cpu& c) {
    X86_TICK(c, 7);
    // 008996  cmp bx, ax
    X86_AT(c, 0x8996u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8996u, "ran off the end of a function");
}
void f_00008999(X86Cpu& c) {
    X86_TICK(c, 5);
    // 008999  je 0x8aac
    X86_AT(c, 0x8999u);
    if (x86_cc(c, 4)) { goto L_8aac; }
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
L_8aac:
    X86_TICK(c, 68);
    // 008aac  mov eax, dword ptr gs:[ebp + 0x222]
    X86_AT(c, 0x8aacu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u)));
    // 008ab3  shld ecx, eax, 0x10
    X86_AT(c, 0x8ab3u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[1] = r; }
    // 008ab7  and eax, 0x1f
    X86_AT(c, 0x8ab7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 008abc  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x8abcu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 008ac4  and ecx, 0x1f
    X86_AT(c, 0x8ac4u);
    { uint32_t v = c.r[1]; c.r[1] = x86_logic(c, v & 0x1Fu, 4); }
    // 008ac7  and edx, dword ptr cs:[ecx*4 + 0xbeb4]
    X86_AT(c, 0x8ac7u);
    { uint32_t v = c.r[2]; c.r[2] = x86_logic(c, v & rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0xBEB4u))), 4); }
    // 008acf  push edx
    X86_AT(c, 0x8acfu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 008ad0  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x8ad0u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
    // 008ad3  xchg dl, dh
    X86_AT(c, 0x8ad3u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ad5  rol edx, 0x10
    X86_AT(c, 0x8ad5u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[2] = r; }
    // 008ad8  xchg dl, dh
    X86_AT(c, 0x8ad8u);
    { uint32_t t = g8(c, 2); s8(c, 2, g8(c, 6)); s8(c, 6, t); }
    // 008ada  mov eax, dword ptr [esi]
    X86_AT(c, 0x8adau);
    c.r[0] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 008adc  xchg al, ah
    X86_AT(c, 0x8adcu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ade  rol eax, 0x10
    X86_AT(c, 0x8adeu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 008ae1  xchg al, ah
    X86_AT(c, 0x8ae1u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 008ae3  mov cl, byte ptr gs:[ebp + 0x22b]
    X86_AT(c, 0x8ae3u);
    s8(c, 1, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x22Bu))));
    // 008aea  shrd eax, edx, cl
    X86_AT(c, 0x8aeau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, false, v, c.r[2], g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 008aed  cmp byte ptr gs:[ebp + 0x104], 5
    X86_AT(c, 0x8aedu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x5u, 0, 1);
    // 008af5  jne 0x8af9
    X86_AT(c, 0x8af5u);
    if (x86_cc(c, 5)) { goto L_8af9; }
    X86_TICK(c, 2);
    // 008af7  not eax
    X86_AT(c, 0x8af7u);
    { uint32_t v = c.r[0]; c.r[0] = ~v & 0xFFFFFFFFu; }
L_8af9:
    X86_TICK(c, 17);
    // 008af9  pop edx
    X86_AT(c, 0x8af9u);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 008afa  and eax, edx
    X86_AT(c, 0x8afau);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[2], 4); }
    // 008afc  mov dx, word ptr gs:[ebp + 0x226]
    X86_AT(c, 0x8afcu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x226u))));
    // 008b04  call dword ptr gs:[ebp + 0x31c]
    X86_AT(c, 0x8b04u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu))); push32(c, 0x8b0bu); x86_call(c, t); X86_RET(c, 0x8b0bu); }
    X86_TICK(c, 10);
    // 008b0b  ret 
    X86_AT(c, 0x8b0bu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8999u, "ran off the end of a function");
}
void f_0000899f(X86Cpu& c) {
    X86_TICK(c, 57);
    // 00899f  mov ax, word ptr gs:[ebp + 0x222]
    X86_AT(c, 0x899fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x222u))));
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
    x86_fault(c, 0x899fu, "ran off the end of a function");
}
void f_000089a7(X86Cpu& c) {
    X86_TICK(c, 53);
    // 0089a7  and eax, 0x1f
    X86_AT(c, 0x89a7u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
    x86_fault(c, 0x89a7u, "ran off the end of a function");
}
void f_000089ac(X86Cpu& c) {
    X86_TICK(c, 51);
    // 0089ac  mov edx, dword ptr cs:[eax*4 + 0xbe34]
    X86_AT(c, 0x89acu);
    c.r[2] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBE34u)));
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
    x86_fault(c, 0x89acu, "ran off the end of a function");
}
void f_000089b4(X86Cpu& c) {
    X86_TICK(c, 47);
    // 0089b4  push edx
    X86_AT(c, 0x89b4u);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
    x86_fault(c, 0x89b4u, "ran off the end of a function");
}
void f_000089b5(X86Cpu& c) {
    X86_TICK(c, 45);
    // 0089b5  mov edx, dword ptr [esi - 4]
    X86_AT(c, 0x89b5u);
    c.r[2] = rd32((c.sbase[3] + (uint32_t)(c.r[6] + 0xFFFFFFFCu)));
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
    x86_fault(c, 0x89b5u, "ran off the end of a function");
}
}

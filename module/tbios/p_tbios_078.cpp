#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00005b22(X86Cpu& c) {
    X86_TICK(c, 12);
    // 005b22  cmp byte ptr gs:[ebp + 0x1e3], 0xff
    X86_AT(c, 0x5b22u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0xFFu, 0, 1);
    // 005b2a  je 0x5b70
    X86_AT(c, 0x5b2au);
    if (x86_cc(c, 4)) { goto L_5b70; }
    X86_TICK(c, 21);
    // 005b2c  movzx bx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0x5b2cu);
    s16(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 005b35  mov eax, dword ptr gs:[ebp + 0x1e4]
    X86_AT(c, 0x5b35u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)));
    // 005b3c  sub ax, word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b3cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u))), 0, 2)); }
    // 005b44  jae 0x5b49
    X86_AT(c, 0x5b44u);
    if (x86_cc(c, 3)) { goto L_5b49; }
    X86_TICK(c, 2);
    // 005b46  neg ax
    X86_AT(c, 0x5b46u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b49:
    X86_TICK(c, 7);
    // 005b49  cmp ax, bx
    X86_AT(c, 0x5b49u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b4c  jae 0x5b78
    X86_AT(c, 0x5b4cu);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 14);
    // 005b4e  shr eax, 0x10
    X86_AT(c, 0x5b4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005b51  sub ax, word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x5b51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu))), 0, 2)); }
    // 005b59  jae 0x5b5e
    X86_AT(c, 0x5b59u);
    if (x86_cc(c, 3)) { goto L_5b5e; }
    X86_TICK(c, 2);
    // 005b5b  neg ax
    X86_AT(c, 0x5b5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b5e:
    X86_TICK(c, 7);
    // 005b5e  cmp ax, bx
    X86_AT(c, 0x5b5eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b70:
    X86_TICK(c, 2);
    // 005b70  mov byte ptr gs:[ebp + 0x1e2], 0
    X86_AT(c, 0x5b70u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), 0x0u);
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b22u, "ran off the end of a function");
}
void f_00005b2a(X86Cpu& c) {
    X86_TICK(c, 5);
    // 005b2a  je 0x5b70
    X86_AT(c, 0x5b2au);
    if (x86_cc(c, 4)) { goto L_5b70; }
    X86_TICK(c, 21);
    // 005b2c  movzx bx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0x5b2cu);
    s16(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 005b35  mov eax, dword ptr gs:[ebp + 0x1e4]
    X86_AT(c, 0x5b35u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)));
    // 005b3c  sub ax, word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b3cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u))), 0, 2)); }
    // 005b44  jae 0x5b49
    X86_AT(c, 0x5b44u);
    if (x86_cc(c, 3)) { goto L_5b49; }
    X86_TICK(c, 2);
    // 005b46  neg ax
    X86_AT(c, 0x5b46u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b49:
    X86_TICK(c, 7);
    // 005b49  cmp ax, bx
    X86_AT(c, 0x5b49u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b4c  jae 0x5b78
    X86_AT(c, 0x5b4cu);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 14);
    // 005b4e  shr eax, 0x10
    X86_AT(c, 0x5b4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005b51  sub ax, word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x5b51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu))), 0, 2)); }
    // 005b59  jae 0x5b5e
    X86_AT(c, 0x5b59u);
    if (x86_cc(c, 3)) { goto L_5b5e; }
    X86_TICK(c, 2);
    // 005b5b  neg ax
    X86_AT(c, 0x5b5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b5e:
    X86_TICK(c, 7);
    // 005b5e  cmp ax, bx
    X86_AT(c, 0x5b5eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b70:
    X86_TICK(c, 2);
    // 005b70  mov byte ptr gs:[ebp + 0x1e2], 0
    X86_AT(c, 0x5b70u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), 0x0u);
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b2au, "ran off the end of a function");
}
void f_00005b2c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 005b2c  movzx bx, byte ptr gs:[ebp + 0x228]
    X86_AT(c, 0x5b2cu);
    s16(c, 3, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x228u))));
    // 005b35  mov eax, dword ptr gs:[ebp + 0x1e4]
    X86_AT(c, 0x5b35u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)));
    // 005b3c  sub ax, word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b3cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u))), 0, 2)); }
    // 005b44  jae 0x5b49
    X86_AT(c, 0x5b44u);
    if (x86_cc(c, 3)) { goto L_5b49; }
    X86_TICK(c, 2);
    // 005b46  neg ax
    X86_AT(c, 0x5b46u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b49:
    X86_TICK(c, 7);
    // 005b49  cmp ax, bx
    X86_AT(c, 0x5b49u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b4c  jae 0x5b78
    X86_AT(c, 0x5b4cu);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 14);
    // 005b4e  shr eax, 0x10
    X86_AT(c, 0x5b4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005b51  sub ax, word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x5b51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu))), 0, 2)); }
    // 005b59  jae 0x5b5e
    X86_AT(c, 0x5b59u);
    if (x86_cc(c, 3)) { goto L_5b5e; }
    X86_TICK(c, 2);
    // 005b5b  neg ax
    X86_AT(c, 0x5b5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b5e:
    X86_TICK(c, 7);
    // 005b5e  cmp ax, bx
    X86_AT(c, 0x5b5eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b2cu, "ran off the end of a function");
}
void f_00005b35(X86Cpu& c) {
    X86_TICK(c, 15);
    // 005b35  mov eax, dword ptr gs:[ebp + 0x1e4]
    X86_AT(c, 0x5b35u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)));
    // 005b3c  sub ax, word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b3cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u))), 0, 2)); }
    // 005b44  jae 0x5b49
    X86_AT(c, 0x5b44u);
    if (x86_cc(c, 3)) { goto L_5b49; }
    X86_TICK(c, 2);
    // 005b46  neg ax
    X86_AT(c, 0x5b46u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b49:
    X86_TICK(c, 7);
    // 005b49  cmp ax, bx
    X86_AT(c, 0x5b49u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b4c  jae 0x5b78
    X86_AT(c, 0x5b4cu);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 14);
    // 005b4e  shr eax, 0x10
    X86_AT(c, 0x5b4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005b51  sub ax, word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x5b51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu))), 0, 2)); }
    // 005b59  jae 0x5b5e
    X86_AT(c, 0x5b59u);
    if (x86_cc(c, 3)) { goto L_5b5e; }
    X86_TICK(c, 2);
    // 005b5b  neg ax
    X86_AT(c, 0x5b5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b5e:
    X86_TICK(c, 7);
    // 005b5e  cmp ax, bx
    X86_AT(c, 0x5b5eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b35u, "ran off the end of a function");
}
void f_00005b3c(X86Cpu& c) {
    X86_TICK(c, 11);
    // 005b3c  sub ax, word ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b3cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u))), 0, 2)); }
    // 005b44  jae 0x5b49
    X86_AT(c, 0x5b44u);
    if (x86_cc(c, 3)) { goto L_5b49; }
    X86_TICK(c, 2);
    // 005b46  neg ax
    X86_AT(c, 0x5b46u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b49:
    X86_TICK(c, 7);
    // 005b49  cmp ax, bx
    X86_AT(c, 0x5b49u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b4c  jae 0x5b78
    X86_AT(c, 0x5b4cu);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 14);
    // 005b4e  shr eax, 0x10
    X86_AT(c, 0x5b4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005b51  sub ax, word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x5b51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu))), 0, 2)); }
    // 005b59  jae 0x5b5e
    X86_AT(c, 0x5b59u);
    if (x86_cc(c, 3)) { goto L_5b5e; }
    X86_TICK(c, 2);
    // 005b5b  neg ax
    X86_AT(c, 0x5b5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b5e:
    X86_TICK(c, 7);
    // 005b5e  cmp ax, bx
    X86_AT(c, 0x5b5eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b3cu, "ran off the end of a function");
}
void f_00005b44(X86Cpu& c) {
    X86_TICK(c, 5);
    // 005b44  jae 0x5b49
    X86_AT(c, 0x5b44u);
    if (x86_cc(c, 3)) { goto L_5b49; }
    X86_TICK(c, 2);
    // 005b46  neg ax
    X86_AT(c, 0x5b46u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b49:
    X86_TICK(c, 7);
    // 005b49  cmp ax, bx
    X86_AT(c, 0x5b49u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b4c  jae 0x5b78
    X86_AT(c, 0x5b4cu);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 14);
    // 005b4e  shr eax, 0x10
    X86_AT(c, 0x5b4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005b51  sub ax, word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x5b51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu))), 0, 2)); }
    // 005b59  jae 0x5b5e
    X86_AT(c, 0x5b59u);
    if (x86_cc(c, 3)) { goto L_5b5e; }
    X86_TICK(c, 2);
    // 005b5b  neg ax
    X86_AT(c, 0x5b5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b5e:
    X86_TICK(c, 7);
    // 005b5e  cmp ax, bx
    X86_AT(c, 0x5b5eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b44u, "ran off the end of a function");
}
void f_00005b46(X86Cpu& c) {
    X86_TICK(c, 9);
    // 005b46  neg ax
    X86_AT(c, 0x5b46u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 005b49  cmp ax, bx
    X86_AT(c, 0x5b49u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b4c  jae 0x5b78
    X86_AT(c, 0x5b4cu);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 14);
    // 005b4e  shr eax, 0x10
    X86_AT(c, 0x5b4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005b51  sub ax, word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x5b51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu))), 0, 2)); }
    // 005b59  jae 0x5b5e
    X86_AT(c, 0x5b59u);
    if (x86_cc(c, 3)) { goto L_5b5e; }
    X86_TICK(c, 2);
    // 005b5b  neg ax
    X86_AT(c, 0x5b5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b5e:
    X86_TICK(c, 7);
    // 005b5e  cmp ax, bx
    X86_AT(c, 0x5b5eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b46u, "ran off the end of a function");
}
void f_00005b49(X86Cpu& c) {
    X86_TICK(c, 7);
    // 005b49  cmp ax, bx
    X86_AT(c, 0x5b49u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b4c  jae 0x5b78
    X86_AT(c, 0x5b4cu);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 14);
    // 005b4e  shr eax, 0x10
    X86_AT(c, 0x5b4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005b51  sub ax, word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x5b51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu))), 0, 2)); }
    // 005b59  jae 0x5b5e
    X86_AT(c, 0x5b59u);
    if (x86_cc(c, 3)) { goto L_5b5e; }
    X86_TICK(c, 2);
    // 005b5b  neg ax
    X86_AT(c, 0x5b5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b5e:
    X86_TICK(c, 7);
    // 005b5e  cmp ax, bx
    X86_AT(c, 0x5b5eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b49u, "ran off the end of a function");
}
void f_00005b4c(X86Cpu& c) {
    X86_TICK(c, 5);
    // 005b4c  jae 0x5b78
    X86_AT(c, 0x5b4cu);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 14);
    // 005b4e  shr eax, 0x10
    X86_AT(c, 0x5b4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005b51  sub ax, word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x5b51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu))), 0, 2)); }
    // 005b59  jae 0x5b5e
    X86_AT(c, 0x5b59u);
    if (x86_cc(c, 3)) { goto L_5b5e; }
    X86_TICK(c, 2);
    // 005b5b  neg ax
    X86_AT(c, 0x5b5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b5e:
    X86_TICK(c, 7);
    // 005b5e  cmp ax, bx
    X86_AT(c, 0x5b5eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b4cu, "ran off the end of a function");
}
void f_00005b4e(X86Cpu& c) {
    X86_TICK(c, 14);
    // 005b4e  shr eax, 0x10
    X86_AT(c, 0x5b4eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 005b51  sub ax, word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x5b51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu))), 0, 2)); }
    // 005b59  jae 0x5b5e
    X86_AT(c, 0x5b59u);
    if (x86_cc(c, 3)) { goto L_5b5e; }
    X86_TICK(c, 2);
    // 005b5b  neg ax
    X86_AT(c, 0x5b5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b5e:
    X86_TICK(c, 7);
    // 005b5e  cmp ax, bx
    X86_AT(c, 0x5b5eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b4eu, "ran off the end of a function");
}
void f_00005b51(X86Cpu& c) {
    X86_TICK(c, 11);
    // 005b51  sub ax, word ptr gs:[ebp + 0x1da]
    X86_AT(c, 0x5b51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu))), 0, 2)); }
    // 005b59  jae 0x5b5e
    X86_AT(c, 0x5b59u);
    if (x86_cc(c, 3)) { goto L_5b5e; }
    X86_TICK(c, 2);
    // 005b5b  neg ax
    X86_AT(c, 0x5b5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b5e:
    X86_TICK(c, 7);
    // 005b5e  cmp ax, bx
    X86_AT(c, 0x5b5eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b51u, "ran off the end of a function");
}
void f_00005b59(X86Cpu& c) {
    X86_TICK(c, 5);
    // 005b59  jae 0x5b5e
    X86_AT(c, 0x5b59u);
    if (x86_cc(c, 3)) { goto L_5b5e; }
    X86_TICK(c, 2);
    // 005b5b  neg ax
    X86_AT(c, 0x5b5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_5b5e:
    X86_TICK(c, 7);
    // 005b5e  cmp ax, bx
    X86_AT(c, 0x5b5eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b59u, "ran off the end of a function");
}
void f_00005b5b(X86Cpu& c) {
    X86_TICK(c, 9);
    // 005b5b  neg ax
    X86_AT(c, 0x5b5bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 005b5e  cmp ax, bx
    X86_AT(c, 0x5b5eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b5bu, "ran off the end of a function");
}
void f_00005b5e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 005b5e  cmp ax, bx
    X86_AT(c, 0x5b5eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b5eu, "ran off the end of a function");
}
void f_00005b61(X86Cpu& c) {
    X86_TICK(c, 5);
    // 005b61  jae 0x5b78
    X86_AT(c, 0x5b61u);
    if (x86_cc(c, 3)) { goto L_5b78; }
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b78:
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b61u, "ran off the end of a function");
}
void f_00005b63(X86Cpu& c) {
    X86_TICK(c, 12);
    // 005b63  cmp byte ptr gs:[ebp + 0x1e3], 3
    X86_AT(c, 0x5b63u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u))), 0x3u, 0, 1);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
    x86_fault(c, 0x5b63u, "ran off the end of a function");
}
void f_00005b6b(X86Cpu& c) {
    X86_TICK(c, 5);
    // 005b6b  je 0x5b8f
    X86_AT(c, 0x5b6bu);
    if (x86_cc(c, 4)) { goto L_5b8f; }
    X86_TICK(c, 10);
    // 005b6d  ret 
    X86_AT(c, 0x5b6du);
    c.eip = pop32(c); return;
L_5b8f:
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
    x86_fault(c, 0x5b6bu, "ran off the end of a function");
}
void f_00005b70(X86Cpu& c) {
    X86_TICK(c, 15);
    // 005b70  mov byte ptr gs:[ebp + 0x1e2], 0
    X86_AT(c, 0x5b70u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), 0x0u);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b70u, "ran off the end of a function");
}
void f_00005b78(X86Cpu& c) {
    X86_TICK(c, 13);
    // 005b78  mov eax, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x5b78u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b78u, "ran off the end of a function");
}
void f_00005b7f(X86Cpu& c) {
    X86_TICK(c, 9);
    // 005b7f  mov dword ptr gs:[ebp + 0x1e4], eax
    X86_AT(c, 0x5b7fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E4u)), c.r[0]);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b7fu, "ran off the end of a function");
}
void f_00005b86(X86Cpu& c) {
    X86_TICK(c, 7);
    // 005b86  call 0x5c68
    X86_AT(c, 0x5b86u);
    push32(c, 0x5b8bu); f_00005c68(c); X86_RET(c, 0x5b8bu);
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b86u, "ran off the end of a function");
}
void f_00005b8b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 005b8b  test al, 2
    X86_AT(c, 0x5b8bu);
    (void)x86_logic(c, g8(c, 0) & 0x2u, 1);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b8bu, "ran off the end of a function");
}
void f_00005b8d(X86Cpu& c) {
    X86_TICK(c, 5);
    // 005b8d  je 0x5b96
    X86_AT(c, 0x5b8du);
    if (x86_cc(c, 4)) { goto L_5b96; }
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
L_5b96:
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b8du, "ran off the end of a function");
}
void f_00005b8f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 005b8f  jmp dword ptr gs:[ebp + 0x310]
    X86_AT(c, 0x5b8fu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x310u)))); return;
    x86_fault(c, 0x5b8fu, "ran off the end of a function");
}
void f_00005b96(X86Cpu& c) {
    X86_TICK(c, 10);
    // 005b96  ret 
    X86_AT(c, 0x5b96u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5b96u, "ran off the end of a function");
}
void f_00005c68(X86Cpu& c) {
    X86_TICK(c, 35);
    // 005c68  mov eax, dword ptr gs:[ebp + 0x1dc]
    X86_AT(c, 0x5c68u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DCu)));
    // 005c6f  mov ch, byte ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5c6fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u))));
    // 005c76  inc ch
    X86_AT(c, 0x5c76u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
    // 005c78  and ch, 0x1f
    X86_AT(c, 0x5c78u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x1Fu, 1)); }
    // 005c7b  mov cl, ch
    X86_AT(c, 0x5c7bu);
    s8(c, 1, g8(c, 5));
    // 005c7d  xor cl, 0x1f
    X86_AT(c, 0x5c7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v ^ 0x1Fu, 1)); }
    // 005c80  ror eax, cl
    X86_AT(c, 0x5c80u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 1, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 005c82  and al, 3
    X86_AT(c, 0x5c82u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 005c84  mov byte ptr gs:[ebp + 0x1e3], al
    X86_AT(c, 0x5c84u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), g8(c, 0));
    // 005c8b  mov byte ptr gs:[ebp + 0x1e2], ch
    X86_AT(c, 0x5c8bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), g8(c, 5));
    // 005c92  ret 
    X86_AT(c, 0x5c92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5c68u, "ran off the end of a function");
}
void f_00005c6f(X86Cpu& c) {
    X86_TICK(c, 31);
    // 005c6f  mov ch, byte ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5c6fu);
    s8(c, 5, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u))));
    // 005c76  inc ch
    X86_AT(c, 0x5c76u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
    // 005c78  and ch, 0x1f
    X86_AT(c, 0x5c78u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x1Fu, 1)); }
    // 005c7b  mov cl, ch
    X86_AT(c, 0x5c7bu);
    s8(c, 1, g8(c, 5));
    // 005c7d  xor cl, 0x1f
    X86_AT(c, 0x5c7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v ^ 0x1Fu, 1)); }
    // 005c80  ror eax, cl
    X86_AT(c, 0x5c80u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 1, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 005c82  and al, 3
    X86_AT(c, 0x5c82u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 005c84  mov byte ptr gs:[ebp + 0x1e3], al
    X86_AT(c, 0x5c84u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), g8(c, 0));
    // 005c8b  mov byte ptr gs:[ebp + 0x1e2], ch
    X86_AT(c, 0x5c8bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), g8(c, 5));
    // 005c92  ret 
    X86_AT(c, 0x5c92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5c6fu, "ran off the end of a function");
}
void f_00005c76(X86Cpu& c) {
    X86_TICK(c, 27);
    // 005c76  inc ch
    X86_AT(c, 0x5c76u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
    // 005c78  and ch, 0x1f
    X86_AT(c, 0x5c78u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x1Fu, 1)); }
    // 005c7b  mov cl, ch
    X86_AT(c, 0x5c7bu);
    s8(c, 1, g8(c, 5));
    // 005c7d  xor cl, 0x1f
    X86_AT(c, 0x5c7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v ^ 0x1Fu, 1)); }
    // 005c80  ror eax, cl
    X86_AT(c, 0x5c80u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 1, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 005c82  and al, 3
    X86_AT(c, 0x5c82u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 005c84  mov byte ptr gs:[ebp + 0x1e3], al
    X86_AT(c, 0x5c84u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), g8(c, 0));
    // 005c8b  mov byte ptr gs:[ebp + 0x1e2], ch
    X86_AT(c, 0x5c8bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), g8(c, 5));
    // 005c92  ret 
    X86_AT(c, 0x5c92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5c76u, "ran off the end of a function");
}
void f_00005c78(X86Cpu& c) {
    X86_TICK(c, 25);
    // 005c78  and ch, 0x1f
    X86_AT(c, 0x5c78u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v & 0x1Fu, 1)); }
    // 005c7b  mov cl, ch
    X86_AT(c, 0x5c7bu);
    s8(c, 1, g8(c, 5));
    // 005c7d  xor cl, 0x1f
    X86_AT(c, 0x5c7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v ^ 0x1Fu, 1)); }
    // 005c80  ror eax, cl
    X86_AT(c, 0x5c80u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 1, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 005c82  and al, 3
    X86_AT(c, 0x5c82u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 005c84  mov byte ptr gs:[ebp + 0x1e3], al
    X86_AT(c, 0x5c84u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), g8(c, 0));
    // 005c8b  mov byte ptr gs:[ebp + 0x1e2], ch
    X86_AT(c, 0x5c8bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), g8(c, 5));
    // 005c92  ret 
    X86_AT(c, 0x5c92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5c78u, "ran off the end of a function");
}
void f_00005c7b(X86Cpu& c) {
    X86_TICK(c, 23);
    // 005c7b  mov cl, ch
    X86_AT(c, 0x5c7bu);
    s8(c, 1, g8(c, 5));
    // 005c7d  xor cl, 0x1f
    X86_AT(c, 0x5c7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v ^ 0x1Fu, 1)); }
    // 005c80  ror eax, cl
    X86_AT(c, 0x5c80u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 1, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 005c82  and al, 3
    X86_AT(c, 0x5c82u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 005c84  mov byte ptr gs:[ebp + 0x1e3], al
    X86_AT(c, 0x5c84u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), g8(c, 0));
    // 005c8b  mov byte ptr gs:[ebp + 0x1e2], ch
    X86_AT(c, 0x5c8bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), g8(c, 5));
    // 005c92  ret 
    X86_AT(c, 0x5c92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5c7bu, "ran off the end of a function");
}
void f_00005c7d(X86Cpu& c) {
    X86_TICK(c, 21);
    // 005c7d  xor cl, 0x1f
    X86_AT(c, 0x5c7du);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_logic(c, v ^ 0x1Fu, 1)); }
    // 005c80  ror eax, cl
    X86_AT(c, 0x5c80u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 1, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 005c82  and al, 3
    X86_AT(c, 0x5c82u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 005c84  mov byte ptr gs:[ebp + 0x1e3], al
    X86_AT(c, 0x5c84u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), g8(c, 0));
    // 005c8b  mov byte ptr gs:[ebp + 0x1e2], ch
    X86_AT(c, 0x5c8bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), g8(c, 5));
    // 005c92  ret 
    X86_AT(c, 0x5c92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5c7du, "ran off the end of a function");
}
void f_00005c80(X86Cpu& c) {
    X86_TICK(c, 19);
    // 005c80  ror eax, cl
    X86_AT(c, 0x5c80u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 1, v, g8(c, 1), 4, w); if (w) c.r[0] = r; }
    // 005c82  and al, 3
    X86_AT(c, 0x5c82u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 005c84  mov byte ptr gs:[ebp + 0x1e3], al
    X86_AT(c, 0x5c84u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), g8(c, 0));
    // 005c8b  mov byte ptr gs:[ebp + 0x1e2], ch
    X86_AT(c, 0x5c8bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), g8(c, 5));
    // 005c92  ret 
    X86_AT(c, 0x5c92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5c80u, "ran off the end of a function");
}
void f_00005c82(X86Cpu& c) {
    X86_TICK(c, 16);
    // 005c82  and al, 3
    X86_AT(c, 0x5c82u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_logic(c, v & 0x3u, 1)); }
    // 005c84  mov byte ptr gs:[ebp + 0x1e3], al
    X86_AT(c, 0x5c84u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), g8(c, 0));
    // 005c8b  mov byte ptr gs:[ebp + 0x1e2], ch
    X86_AT(c, 0x5c8bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), g8(c, 5));
    // 005c92  ret 
    X86_AT(c, 0x5c92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5c82u, "ran off the end of a function");
}
void f_00005c84(X86Cpu& c) {
    X86_TICK(c, 14);
    // 005c84  mov byte ptr gs:[ebp + 0x1e3], al
    X86_AT(c, 0x5c84u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E3u)), g8(c, 0));
    // 005c8b  mov byte ptr gs:[ebp + 0x1e2], ch
    X86_AT(c, 0x5c8bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), g8(c, 5));
    // 005c92  ret 
    X86_AT(c, 0x5c92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5c84u, "ran off the end of a function");
}
void f_00005c8b(X86Cpu& c) {
    X86_TICK(c, 12);
    // 005c8b  mov byte ptr gs:[ebp + 0x1e2], ch
    X86_AT(c, 0x5c8bu);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), g8(c, 5));
    // 005c92  ret 
    X86_AT(c, 0x5c92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5c8bu, "ran off the end of a function");
}
void f_00005c92(X86Cpu& c) {
    X86_TICK(c, 10);
    // 005c92  ret 
    X86_AT(c, 0x5c92u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5c92u, "ran off the end of a function");
}
void f_00005db0(X86Cpu& c) {
    X86_TICK(c, 23);
    // 005db0  mov word ptr gs:[ebp + 0x1d8], dx
    X86_AT(c, 0x5db0u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), (c.r[2] & 0xFFFFu));
    // 005db8  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x5db8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 005dc0  mov eax, dword ptr gs:[ebp + 0x3ac]
    X86_AT(c, 0x5dc0u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3ACu)));
    // 005dc7  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5dc7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005dce  mov ax, word ptr gs:[ebp + 0x3b0]
    X86_AT(c, 0x5dceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B0u))));
    // 005dd6  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5dd6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005dde  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5ddeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5de5u); x86_call(c, t); X86_RET(c, 0x5de5u); }
    X86_TICK(c, 22);
    // 005de5  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5de5u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005dec  mov dword ptr gs:[ebp + 0x3ac], eax
    X86_AT(c, 0x5decu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3ACu)), c.r[0]);
    // 005df3  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5df3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005dfb  mov word ptr gs:[ebp + 0x3b0], ax
    X86_AT(c, 0x5dfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B0u)), (c.r[0] & 0xFFFFu));
    // 005e03  ret 
    X86_AT(c, 0x5e03u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5db0u, "ran off the end of a function");
}
void f_00005db8(X86Cpu& c) {
    X86_TICK(c, 21);
    // 005db8  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x5db8u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 005dc0  mov eax, dword ptr gs:[ebp + 0x3ac]
    X86_AT(c, 0x5dc0u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3ACu)));
    // 005dc7  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5dc7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005dce  mov ax, word ptr gs:[ebp + 0x3b0]
    X86_AT(c, 0x5dceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B0u))));
    // 005dd6  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5dd6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005dde  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5ddeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5de5u); x86_call(c, t); X86_RET(c, 0x5de5u); }
    X86_TICK(c, 22);
    // 005de5  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5de5u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005dec  mov dword ptr gs:[ebp + 0x3ac], eax
    X86_AT(c, 0x5decu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3ACu)), c.r[0]);
    // 005df3  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5df3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005dfb  mov word ptr gs:[ebp + 0x3b0], ax
    X86_AT(c, 0x5dfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B0u)), (c.r[0] & 0xFFFFu));
    // 005e03  ret 
    X86_AT(c, 0x5e03u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5db8u, "ran off the end of a function");
}
void f_00005dc0(X86Cpu& c) {
    X86_TICK(c, 19);
    // 005dc0  mov eax, dword ptr gs:[ebp + 0x3ac]
    X86_AT(c, 0x5dc0u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3ACu)));
    // 005dc7  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5dc7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005dce  mov ax, word ptr gs:[ebp + 0x3b0]
    X86_AT(c, 0x5dceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B0u))));
    // 005dd6  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5dd6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005dde  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5ddeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5de5u); x86_call(c, t); X86_RET(c, 0x5de5u); }
    X86_TICK(c, 22);
    // 005de5  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5de5u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005dec  mov dword ptr gs:[ebp + 0x3ac], eax
    X86_AT(c, 0x5decu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3ACu)), c.r[0]);
    // 005df3  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5df3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005dfb  mov word ptr gs:[ebp + 0x3b0], ax
    X86_AT(c, 0x5dfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B0u)), (c.r[0] & 0xFFFFu));
    // 005e03  ret 
    X86_AT(c, 0x5e03u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5dc0u, "ran off the end of a function");
}
void f_00005dc7(X86Cpu& c) {
    X86_TICK(c, 15);
    // 005dc7  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5dc7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005dce  mov ax, word ptr gs:[ebp + 0x3b0]
    X86_AT(c, 0x5dceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B0u))));
    // 005dd6  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5dd6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005dde  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5ddeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5de5u); x86_call(c, t); X86_RET(c, 0x5de5u); }
    X86_TICK(c, 22);
    // 005de5  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5de5u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005dec  mov dword ptr gs:[ebp + 0x3ac], eax
    X86_AT(c, 0x5decu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3ACu)), c.r[0]);
    // 005df3  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5df3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005dfb  mov word ptr gs:[ebp + 0x3b0], ax
    X86_AT(c, 0x5dfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B0u)), (c.r[0] & 0xFFFFu));
    // 005e03  ret 
    X86_AT(c, 0x5e03u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5dc7u, "ran off the end of a function");
}
void f_00005dce(X86Cpu& c) {
    X86_TICK(c, 13);
    // 005dce  mov ax, word ptr gs:[ebp + 0x3b0]
    X86_AT(c, 0x5dceu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B0u))));
    // 005dd6  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5dd6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005dde  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5ddeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5de5u); x86_call(c, t); X86_RET(c, 0x5de5u); }
    X86_TICK(c, 22);
    // 005de5  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5de5u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005dec  mov dword ptr gs:[ebp + 0x3ac], eax
    X86_AT(c, 0x5decu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3ACu)), c.r[0]);
    // 005df3  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5df3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005dfb  mov word ptr gs:[ebp + 0x3b0], ax
    X86_AT(c, 0x5dfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B0u)), (c.r[0] & 0xFFFFu));
    // 005e03  ret 
    X86_AT(c, 0x5e03u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5dceu, "ran off the end of a function");
}
void f_00005dd6(X86Cpu& c) {
    X86_TICK(c, 9);
    // 005dd6  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5dd6u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005dde  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5ddeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5de5u); x86_call(c, t); X86_RET(c, 0x5de5u); }
    X86_TICK(c, 22);
    // 005de5  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5de5u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005dec  mov dword ptr gs:[ebp + 0x3ac], eax
    X86_AT(c, 0x5decu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3ACu)), c.r[0]);
    // 005df3  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5df3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005dfb  mov word ptr gs:[ebp + 0x3b0], ax
    X86_AT(c, 0x5dfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B0u)), (c.r[0] & 0xFFFFu));
    // 005e03  ret 
    X86_AT(c, 0x5e03u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5dd6u, "ran off the end of a function");
}
void f_00005dde(X86Cpu& c) {
    X86_TICK(c, 7);
    // 005dde  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5ddeu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5de5u); x86_call(c, t); X86_RET(c, 0x5de5u); }
    X86_TICK(c, 22);
    // 005de5  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5de5u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005dec  mov dword ptr gs:[ebp + 0x3ac], eax
    X86_AT(c, 0x5decu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3ACu)), c.r[0]);
    // 005df3  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5df3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005dfb  mov word ptr gs:[ebp + 0x3b0], ax
    X86_AT(c, 0x5dfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B0u)), (c.r[0] & 0xFFFFu));
    // 005e03  ret 
    X86_AT(c, 0x5e03u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5ddeu, "ran off the end of a function");
}
void f_00005de5(X86Cpu& c) {
    X86_TICK(c, 22);
    // 005de5  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5de5u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005dec  mov dword ptr gs:[ebp + 0x3ac], eax
    X86_AT(c, 0x5decu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3ACu)), c.r[0]);
    // 005df3  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5df3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005dfb  mov word ptr gs:[ebp + 0x3b0], ax
    X86_AT(c, 0x5dfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B0u)), (c.r[0] & 0xFFFFu));
    // 005e03  ret 
    X86_AT(c, 0x5e03u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5de5u, "ran off the end of a function");
}
void f_00005dec(X86Cpu& c) {
    X86_TICK(c, 18);
    // 005dec  mov dword ptr gs:[ebp + 0x3ac], eax
    X86_AT(c, 0x5decu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3ACu)), c.r[0]);
    // 005df3  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5df3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005dfb  mov word ptr gs:[ebp + 0x3b0], ax
    X86_AT(c, 0x5dfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B0u)), (c.r[0] & 0xFFFFu));
    // 005e03  ret 
    X86_AT(c, 0x5e03u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5decu, "ran off the end of a function");
}
void f_00005df3(X86Cpu& c) {
    X86_TICK(c, 16);
    // 005df3  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5df3u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005dfb  mov word ptr gs:[ebp + 0x3b0], ax
    X86_AT(c, 0x5dfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B0u)), (c.r[0] & 0xFFFFu));
    // 005e03  ret 
    X86_AT(c, 0x5e03u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5df3u, "ran off the end of a function");
}
void f_00005dfb(X86Cpu& c) {
    X86_TICK(c, 12);
    // 005dfb  mov word ptr gs:[ebp + 0x3b0], ax
    X86_AT(c, 0x5dfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B0u)), (c.r[0] & 0xFFFFu));
    // 005e03  ret 
    X86_AT(c, 0x5e03u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5dfbu, "ran off the end of a function");
}
void f_00005e03(X86Cpu& c) {
    X86_TICK(c, 10);
    // 005e03  ret 
    X86_AT(c, 0x5e03u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e03u, "ran off the end of a function");
}
void f_00005e04(X86Cpu& c) {
    X86_TICK(c, 23);
    // 005e04  mov word ptr gs:[ebp + 0x1d8], dx
    X86_AT(c, 0x5e04u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), (c.r[2] & 0xFFFFu));
    // 005e0c  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x5e0cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 005e14  mov eax, dword ptr gs:[ebp + 0x3b4]
    X86_AT(c, 0x5e14u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B4u)));
    // 005e1b  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5e1bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005e22  mov ax, word ptr gs:[ebp + 0x3b8]
    X86_AT(c, 0x5e22u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B8u))));
    // 005e2a  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5e2au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005e32  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5e32u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5e39u); x86_call(c, t); X86_RET(c, 0x5e39u); }
    X86_TICK(c, 22);
    // 005e39  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5e39u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005e40  mov dword ptr gs:[ebp + 0x3b4], eax
    X86_AT(c, 0x5e40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B4u)), c.r[0]);
    // 005e47  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e47u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005e4f  mov word ptr gs:[ebp + 0x3b8], ax
    X86_AT(c, 0x5e4fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B8u)), (c.r[0] & 0xFFFFu));
    // 005e57  ret 
    X86_AT(c, 0x5e57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e04u, "ran off the end of a function");
}
void f_00005e0c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 005e0c  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x5e0cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 005e14  mov eax, dword ptr gs:[ebp + 0x3b4]
    X86_AT(c, 0x5e14u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B4u)));
    // 005e1b  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5e1bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005e22  mov ax, word ptr gs:[ebp + 0x3b8]
    X86_AT(c, 0x5e22u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B8u))));
    // 005e2a  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5e2au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005e32  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5e32u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5e39u); x86_call(c, t); X86_RET(c, 0x5e39u); }
    X86_TICK(c, 22);
    // 005e39  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5e39u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005e40  mov dword ptr gs:[ebp + 0x3b4], eax
    X86_AT(c, 0x5e40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B4u)), c.r[0]);
    // 005e47  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e47u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005e4f  mov word ptr gs:[ebp + 0x3b8], ax
    X86_AT(c, 0x5e4fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B8u)), (c.r[0] & 0xFFFFu));
    // 005e57  ret 
    X86_AT(c, 0x5e57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e0cu, "ran off the end of a function");
}
void f_00005e14(X86Cpu& c) {
    X86_TICK(c, 19);
    // 005e14  mov eax, dword ptr gs:[ebp + 0x3b4]
    X86_AT(c, 0x5e14u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B4u)));
    // 005e1b  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5e1bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005e22  mov ax, word ptr gs:[ebp + 0x3b8]
    X86_AT(c, 0x5e22u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B8u))));
    // 005e2a  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5e2au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005e32  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5e32u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5e39u); x86_call(c, t); X86_RET(c, 0x5e39u); }
    X86_TICK(c, 22);
    // 005e39  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5e39u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005e40  mov dword ptr gs:[ebp + 0x3b4], eax
    X86_AT(c, 0x5e40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B4u)), c.r[0]);
    // 005e47  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e47u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005e4f  mov word ptr gs:[ebp + 0x3b8], ax
    X86_AT(c, 0x5e4fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B8u)), (c.r[0] & 0xFFFFu));
    // 005e57  ret 
    X86_AT(c, 0x5e57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e14u, "ran off the end of a function");
}
void f_00005e1b(X86Cpu& c) {
    X86_TICK(c, 15);
    // 005e1b  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5e1bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005e22  mov ax, word ptr gs:[ebp + 0x3b8]
    X86_AT(c, 0x5e22u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B8u))));
    // 005e2a  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5e2au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005e32  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5e32u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5e39u); x86_call(c, t); X86_RET(c, 0x5e39u); }
    X86_TICK(c, 22);
    // 005e39  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5e39u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005e40  mov dword ptr gs:[ebp + 0x3b4], eax
    X86_AT(c, 0x5e40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B4u)), c.r[0]);
    // 005e47  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e47u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005e4f  mov word ptr gs:[ebp + 0x3b8], ax
    X86_AT(c, 0x5e4fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B8u)), (c.r[0] & 0xFFFFu));
    // 005e57  ret 
    X86_AT(c, 0x5e57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e1bu, "ran off the end of a function");
}
void f_00005e22(X86Cpu& c) {
    X86_TICK(c, 13);
    // 005e22  mov ax, word ptr gs:[ebp + 0x3b8]
    X86_AT(c, 0x5e22u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B8u))));
    // 005e2a  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5e2au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005e32  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5e32u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5e39u); x86_call(c, t); X86_RET(c, 0x5e39u); }
    X86_TICK(c, 22);
    // 005e39  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5e39u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005e40  mov dword ptr gs:[ebp + 0x3b4], eax
    X86_AT(c, 0x5e40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B4u)), c.r[0]);
    // 005e47  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e47u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005e4f  mov word ptr gs:[ebp + 0x3b8], ax
    X86_AT(c, 0x5e4fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B8u)), (c.r[0] & 0xFFFFu));
    // 005e57  ret 
    X86_AT(c, 0x5e57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e22u, "ran off the end of a function");
}
void f_00005e2a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 005e2a  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5e2au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005e32  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5e32u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5e39u); x86_call(c, t); X86_RET(c, 0x5e39u); }
    X86_TICK(c, 22);
    // 005e39  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5e39u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005e40  mov dword ptr gs:[ebp + 0x3b4], eax
    X86_AT(c, 0x5e40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B4u)), c.r[0]);
    // 005e47  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e47u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005e4f  mov word ptr gs:[ebp + 0x3b8], ax
    X86_AT(c, 0x5e4fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B8u)), (c.r[0] & 0xFFFFu));
    // 005e57  ret 
    X86_AT(c, 0x5e57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e2au, "ran off the end of a function");
}
void f_00005e32(X86Cpu& c) {
    X86_TICK(c, 7);
    // 005e32  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5e32u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5e39u); x86_call(c, t); X86_RET(c, 0x5e39u); }
    X86_TICK(c, 22);
    // 005e39  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5e39u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005e40  mov dword ptr gs:[ebp + 0x3b4], eax
    X86_AT(c, 0x5e40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B4u)), c.r[0]);
    // 005e47  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e47u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005e4f  mov word ptr gs:[ebp + 0x3b8], ax
    X86_AT(c, 0x5e4fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B8u)), (c.r[0] & 0xFFFFu));
    // 005e57  ret 
    X86_AT(c, 0x5e57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e32u, "ran off the end of a function");
}
void f_00005e39(X86Cpu& c) {
    X86_TICK(c, 22);
    // 005e39  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5e39u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005e40  mov dword ptr gs:[ebp + 0x3b4], eax
    X86_AT(c, 0x5e40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B4u)), c.r[0]);
    // 005e47  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e47u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005e4f  mov word ptr gs:[ebp + 0x3b8], ax
    X86_AT(c, 0x5e4fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B8u)), (c.r[0] & 0xFFFFu));
    // 005e57  ret 
    X86_AT(c, 0x5e57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e39u, "ran off the end of a function");
}
void f_00005e40(X86Cpu& c) {
    X86_TICK(c, 18);
    // 005e40  mov dword ptr gs:[ebp + 0x3b4], eax
    X86_AT(c, 0x5e40u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B4u)), c.r[0]);
    // 005e47  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e47u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005e4f  mov word ptr gs:[ebp + 0x3b8], ax
    X86_AT(c, 0x5e4fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B8u)), (c.r[0] & 0xFFFFu));
    // 005e57  ret 
    X86_AT(c, 0x5e57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e40u, "ran off the end of a function");
}
void f_00005e47(X86Cpu& c) {
    X86_TICK(c, 16);
    // 005e47  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e47u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005e4f  mov word ptr gs:[ebp + 0x3b8], ax
    X86_AT(c, 0x5e4fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B8u)), (c.r[0] & 0xFFFFu));
    // 005e57  ret 
    X86_AT(c, 0x5e57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e47u, "ran off the end of a function");
}
void f_00005e4f(X86Cpu& c) {
    X86_TICK(c, 12);
    // 005e4f  mov word ptr gs:[ebp + 0x3b8], ax
    X86_AT(c, 0x5e4fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3B8u)), (c.r[0] & 0xFFFFu));
    // 005e57  ret 
    X86_AT(c, 0x5e57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e4fu, "ran off the end of a function");
}
void f_00005e57(X86Cpu& c) {
    X86_TICK(c, 10);
    // 005e57  ret 
    X86_AT(c, 0x5e57u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e57u, "ran off the end of a function");
}
void f_00005e58(X86Cpu& c) {
    X86_TICK(c, 23);
    // 005e58  mov word ptr gs:[ebp + 0x1d8], dx
    X86_AT(c, 0x5e58u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), (c.r[2] & 0xFFFFu));
    // 005e60  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x5e60u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 005e68  mov eax, dword ptr gs:[ebp + 0x3bc]
    X86_AT(c, 0x5e68u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3BCu)));
    // 005e6f  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5e6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005e76  mov ax, word ptr gs:[ebp + 0x3c0]
    X86_AT(c, 0x5e76u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C0u))));
    // 005e7e  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5e7eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005e86  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5e86u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5e8du); x86_call(c, t); X86_RET(c, 0x5e8du); }
    X86_TICK(c, 22);
    // 005e8d  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5e8du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005e94  mov dword ptr gs:[ebp + 0x3bc], eax
    X86_AT(c, 0x5e94u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3BCu)), c.r[0]);
    // 005e9b  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e9bu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ea3  mov word ptr gs:[ebp + 0x3c0], ax
    X86_AT(c, 0x5ea3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C0u)), (c.r[0] & 0xFFFFu));
    // 005eab  ret 
    X86_AT(c, 0x5eabu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e58u, "ran off the end of a function");
}
void f_00005e60(X86Cpu& c) {
    X86_TICK(c, 21);
    // 005e60  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x5e60u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 005e68  mov eax, dword ptr gs:[ebp + 0x3bc]
    X86_AT(c, 0x5e68u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3BCu)));
    // 005e6f  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5e6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005e76  mov ax, word ptr gs:[ebp + 0x3c0]
    X86_AT(c, 0x5e76u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C0u))));
    // 005e7e  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5e7eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005e86  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5e86u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5e8du); x86_call(c, t); X86_RET(c, 0x5e8du); }
    X86_TICK(c, 22);
    // 005e8d  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5e8du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005e94  mov dword ptr gs:[ebp + 0x3bc], eax
    X86_AT(c, 0x5e94u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3BCu)), c.r[0]);
    // 005e9b  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e9bu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ea3  mov word ptr gs:[ebp + 0x3c0], ax
    X86_AT(c, 0x5ea3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C0u)), (c.r[0] & 0xFFFFu));
    // 005eab  ret 
    X86_AT(c, 0x5eabu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e60u, "ran off the end of a function");
}
void f_00005e68(X86Cpu& c) {
    X86_TICK(c, 19);
    // 005e68  mov eax, dword ptr gs:[ebp + 0x3bc]
    X86_AT(c, 0x5e68u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3BCu)));
    // 005e6f  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5e6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005e76  mov ax, word ptr gs:[ebp + 0x3c0]
    X86_AT(c, 0x5e76u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C0u))));
    // 005e7e  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5e7eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005e86  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5e86u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5e8du); x86_call(c, t); X86_RET(c, 0x5e8du); }
    X86_TICK(c, 22);
    // 005e8d  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5e8du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005e94  mov dword ptr gs:[ebp + 0x3bc], eax
    X86_AT(c, 0x5e94u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3BCu)), c.r[0]);
    // 005e9b  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e9bu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ea3  mov word ptr gs:[ebp + 0x3c0], ax
    X86_AT(c, 0x5ea3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C0u)), (c.r[0] & 0xFFFFu));
    // 005eab  ret 
    X86_AT(c, 0x5eabu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e68u, "ran off the end of a function");
}
void f_00005e6f(X86Cpu& c) {
    X86_TICK(c, 15);
    // 005e6f  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5e6fu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005e76  mov ax, word ptr gs:[ebp + 0x3c0]
    X86_AT(c, 0x5e76u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C0u))));
    // 005e7e  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5e7eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005e86  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5e86u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5e8du); x86_call(c, t); X86_RET(c, 0x5e8du); }
    X86_TICK(c, 22);
    // 005e8d  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5e8du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005e94  mov dword ptr gs:[ebp + 0x3bc], eax
    X86_AT(c, 0x5e94u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3BCu)), c.r[0]);
    // 005e9b  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e9bu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ea3  mov word ptr gs:[ebp + 0x3c0], ax
    X86_AT(c, 0x5ea3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C0u)), (c.r[0] & 0xFFFFu));
    // 005eab  ret 
    X86_AT(c, 0x5eabu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e6fu, "ran off the end of a function");
}
void f_00005e76(X86Cpu& c) {
    X86_TICK(c, 13);
    // 005e76  mov ax, word ptr gs:[ebp + 0x3c0]
    X86_AT(c, 0x5e76u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C0u))));
    // 005e7e  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5e7eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005e86  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5e86u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5e8du); x86_call(c, t); X86_RET(c, 0x5e8du); }
    X86_TICK(c, 22);
    // 005e8d  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5e8du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005e94  mov dword ptr gs:[ebp + 0x3bc], eax
    X86_AT(c, 0x5e94u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3BCu)), c.r[0]);
    // 005e9b  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e9bu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ea3  mov word ptr gs:[ebp + 0x3c0], ax
    X86_AT(c, 0x5ea3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C0u)), (c.r[0] & 0xFFFFu));
    // 005eab  ret 
    X86_AT(c, 0x5eabu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e76u, "ran off the end of a function");
}
void f_00005e7e(X86Cpu& c) {
    X86_TICK(c, 9);
    // 005e7e  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5e7eu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005e86  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5e86u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5e8du); x86_call(c, t); X86_RET(c, 0x5e8du); }
    X86_TICK(c, 22);
    // 005e8d  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5e8du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005e94  mov dword ptr gs:[ebp + 0x3bc], eax
    X86_AT(c, 0x5e94u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3BCu)), c.r[0]);
    // 005e9b  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e9bu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ea3  mov word ptr gs:[ebp + 0x3c0], ax
    X86_AT(c, 0x5ea3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C0u)), (c.r[0] & 0xFFFFu));
    // 005eab  ret 
    X86_AT(c, 0x5eabu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e7eu, "ran off the end of a function");
}
void f_00005e86(X86Cpu& c) {
    X86_TICK(c, 7);
    // 005e86  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5e86u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5e8du); x86_call(c, t); X86_RET(c, 0x5e8du); }
    X86_TICK(c, 22);
    // 005e8d  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5e8du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005e94  mov dword ptr gs:[ebp + 0x3bc], eax
    X86_AT(c, 0x5e94u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3BCu)), c.r[0]);
    // 005e9b  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e9bu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ea3  mov word ptr gs:[ebp + 0x3c0], ax
    X86_AT(c, 0x5ea3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C0u)), (c.r[0] & 0xFFFFu));
    // 005eab  ret 
    X86_AT(c, 0x5eabu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e86u, "ran off the end of a function");
}
void f_00005e8d(X86Cpu& c) {
    X86_TICK(c, 22);
    // 005e8d  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5e8du);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005e94  mov dword ptr gs:[ebp + 0x3bc], eax
    X86_AT(c, 0x5e94u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3BCu)), c.r[0]);
    // 005e9b  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e9bu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ea3  mov word ptr gs:[ebp + 0x3c0], ax
    X86_AT(c, 0x5ea3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C0u)), (c.r[0] & 0xFFFFu));
    // 005eab  ret 
    X86_AT(c, 0x5eabu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e8du, "ran off the end of a function");
}
void f_00005e94(X86Cpu& c) {
    X86_TICK(c, 18);
    // 005e94  mov dword ptr gs:[ebp + 0x3bc], eax
    X86_AT(c, 0x5e94u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3BCu)), c.r[0]);
    // 005e9b  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e9bu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ea3  mov word ptr gs:[ebp + 0x3c0], ax
    X86_AT(c, 0x5ea3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C0u)), (c.r[0] & 0xFFFFu));
    // 005eab  ret 
    X86_AT(c, 0x5eabu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e94u, "ran off the end of a function");
}
void f_00005e9b(X86Cpu& c) {
    X86_TICK(c, 16);
    // 005e9b  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5e9bu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ea3  mov word ptr gs:[ebp + 0x3c0], ax
    X86_AT(c, 0x5ea3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C0u)), (c.r[0] & 0xFFFFu));
    // 005eab  ret 
    X86_AT(c, 0x5eabu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5e9bu, "ran off the end of a function");
}
void f_00005ea3(X86Cpu& c) {
    X86_TICK(c, 12);
    // 005ea3  mov word ptr gs:[ebp + 0x3c0], ax
    X86_AT(c, 0x5ea3u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C0u)), (c.r[0] & 0xFFFFu));
    // 005eab  ret 
    X86_AT(c, 0x5eabu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5ea3u, "ran off the end of a function");
}
void f_00005eab(X86Cpu& c) {
    X86_TICK(c, 10);
    // 005eab  ret 
    X86_AT(c, 0x5eabu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5eabu, "ran off the end of a function");
}
void f_00005eac(X86Cpu& c) {
    X86_TICK(c, 23);
    // 005eac  mov word ptr gs:[ebp + 0x1d8], dx
    X86_AT(c, 0x5eacu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), (c.r[2] & 0xFFFFu));
    // 005eb4  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x5eb4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 005ebc  mov eax, dword ptr gs:[ebp + 0x3c4]
    X86_AT(c, 0x5ebcu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C4u)));
    // 005ec3  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5ec3u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005eca  mov ax, word ptr gs:[ebp + 0x3c8]
    X86_AT(c, 0x5ecau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C8u))));
    // 005ed2  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5ed2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005eda  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5edau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5ee1u); x86_call(c, t); X86_RET(c, 0x5ee1u); }
    X86_TICK(c, 22);
    // 005ee1  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5ee1u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005ee8  mov dword ptr gs:[ebp + 0x3c4], eax
    X86_AT(c, 0x5ee8u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C4u)), c.r[0]);
    // 005eef  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5eefu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ef7  mov word ptr gs:[ebp + 0x3c8], ax
    X86_AT(c, 0x5ef7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C8u)), (c.r[0] & 0xFFFFu));
    // 005eff  ret 
    X86_AT(c, 0x5effu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5eacu, "ran off the end of a function");
}
void f_00005eb4(X86Cpu& c) {
    X86_TICK(c, 21);
    // 005eb4  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x5eb4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 005ebc  mov eax, dword ptr gs:[ebp + 0x3c4]
    X86_AT(c, 0x5ebcu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C4u)));
    // 005ec3  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5ec3u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005eca  mov ax, word ptr gs:[ebp + 0x3c8]
    X86_AT(c, 0x5ecau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C8u))));
    // 005ed2  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5ed2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005eda  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5edau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5ee1u); x86_call(c, t); X86_RET(c, 0x5ee1u); }
    X86_TICK(c, 22);
    // 005ee1  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5ee1u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005ee8  mov dword ptr gs:[ebp + 0x3c4], eax
    X86_AT(c, 0x5ee8u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C4u)), c.r[0]);
    // 005eef  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5eefu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ef7  mov word ptr gs:[ebp + 0x3c8], ax
    X86_AT(c, 0x5ef7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C8u)), (c.r[0] & 0xFFFFu));
    // 005eff  ret 
    X86_AT(c, 0x5effu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5eb4u, "ran off the end of a function");
}
void f_00005ebc(X86Cpu& c) {
    X86_TICK(c, 19);
    // 005ebc  mov eax, dword ptr gs:[ebp + 0x3c4]
    X86_AT(c, 0x5ebcu);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C4u)));
    // 005ec3  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5ec3u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005eca  mov ax, word ptr gs:[ebp + 0x3c8]
    X86_AT(c, 0x5ecau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C8u))));
    // 005ed2  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5ed2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005eda  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5edau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5ee1u); x86_call(c, t); X86_RET(c, 0x5ee1u); }
    X86_TICK(c, 22);
    // 005ee1  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5ee1u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005ee8  mov dword ptr gs:[ebp + 0x3c4], eax
    X86_AT(c, 0x5ee8u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C4u)), c.r[0]);
    // 005eef  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5eefu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ef7  mov word ptr gs:[ebp + 0x3c8], ax
    X86_AT(c, 0x5ef7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C8u)), (c.r[0] & 0xFFFFu));
    // 005eff  ret 
    X86_AT(c, 0x5effu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5ebcu, "ran off the end of a function");
}
void f_00005ec3(X86Cpu& c) {
    X86_TICK(c, 15);
    // 005ec3  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5ec3u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005eca  mov ax, word ptr gs:[ebp + 0x3c8]
    X86_AT(c, 0x5ecau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C8u))));
    // 005ed2  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5ed2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005eda  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5edau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5ee1u); x86_call(c, t); X86_RET(c, 0x5ee1u); }
    X86_TICK(c, 22);
    // 005ee1  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5ee1u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005ee8  mov dword ptr gs:[ebp + 0x3c4], eax
    X86_AT(c, 0x5ee8u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C4u)), c.r[0]);
    // 005eef  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5eefu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ef7  mov word ptr gs:[ebp + 0x3c8], ax
    X86_AT(c, 0x5ef7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C8u)), (c.r[0] & 0xFFFFu));
    // 005eff  ret 
    X86_AT(c, 0x5effu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5ec3u, "ran off the end of a function");
}
void f_00005eca(X86Cpu& c) {
    X86_TICK(c, 13);
    // 005eca  mov ax, word ptr gs:[ebp + 0x3c8]
    X86_AT(c, 0x5ecau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C8u))));
    // 005ed2  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5ed2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005eda  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5edau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5ee1u); x86_call(c, t); X86_RET(c, 0x5ee1u); }
    X86_TICK(c, 22);
    // 005ee1  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5ee1u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005ee8  mov dword ptr gs:[ebp + 0x3c4], eax
    X86_AT(c, 0x5ee8u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C4u)), c.r[0]);
    // 005eef  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5eefu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ef7  mov word ptr gs:[ebp + 0x3c8], ax
    X86_AT(c, 0x5ef7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C8u)), (c.r[0] & 0xFFFFu));
    // 005eff  ret 
    X86_AT(c, 0x5effu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5ecau, "ran off the end of a function");
}
void f_00005ed2(X86Cpu& c) {
    X86_TICK(c, 9);
    // 005ed2  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5ed2u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005eda  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5edau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5ee1u); x86_call(c, t); X86_RET(c, 0x5ee1u); }
    X86_TICK(c, 22);
    // 005ee1  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5ee1u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005ee8  mov dword ptr gs:[ebp + 0x3c4], eax
    X86_AT(c, 0x5ee8u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C4u)), c.r[0]);
    // 005eef  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5eefu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ef7  mov word ptr gs:[ebp + 0x3c8], ax
    X86_AT(c, 0x5ef7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C8u)), (c.r[0] & 0xFFFFu));
    // 005eff  ret 
    X86_AT(c, 0x5effu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5ed2u, "ran off the end of a function");
}
void f_00005eda(X86Cpu& c) {
    X86_TICK(c, 7);
    // 005eda  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5edau);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5ee1u); x86_call(c, t); X86_RET(c, 0x5ee1u); }
    X86_TICK(c, 22);
    // 005ee1  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5ee1u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005ee8  mov dword ptr gs:[ebp + 0x3c4], eax
    X86_AT(c, 0x5ee8u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C4u)), c.r[0]);
    // 005eef  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5eefu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ef7  mov word ptr gs:[ebp + 0x3c8], ax
    X86_AT(c, 0x5ef7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C8u)), (c.r[0] & 0xFFFFu));
    // 005eff  ret 
    X86_AT(c, 0x5effu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5edau, "ran off the end of a function");
}
void f_00005ee1(X86Cpu& c) {
    X86_TICK(c, 22);
    // 005ee1  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5ee1u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005ee8  mov dword ptr gs:[ebp + 0x3c4], eax
    X86_AT(c, 0x5ee8u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C4u)), c.r[0]);
    // 005eef  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5eefu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ef7  mov word ptr gs:[ebp + 0x3c8], ax
    X86_AT(c, 0x5ef7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C8u)), (c.r[0] & 0xFFFFu));
    // 005eff  ret 
    X86_AT(c, 0x5effu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5ee1u, "ran off the end of a function");
}
void f_00005ee8(X86Cpu& c) {
    X86_TICK(c, 18);
    // 005ee8  mov dword ptr gs:[ebp + 0x3c4], eax
    X86_AT(c, 0x5ee8u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C4u)), c.r[0]);
    // 005eef  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5eefu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ef7  mov word ptr gs:[ebp + 0x3c8], ax
    X86_AT(c, 0x5ef7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C8u)), (c.r[0] & 0xFFFFu));
    // 005eff  ret 
    X86_AT(c, 0x5effu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5ee8u, "ran off the end of a function");
}
void f_00005eef(X86Cpu& c) {
    X86_TICK(c, 16);
    // 005eef  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5eefu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005ef7  mov word ptr gs:[ebp + 0x3c8], ax
    X86_AT(c, 0x5ef7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C8u)), (c.r[0] & 0xFFFFu));
    // 005eff  ret 
    X86_AT(c, 0x5effu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5eefu, "ran off the end of a function");
}
void f_00005ef7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 005ef7  mov word ptr gs:[ebp + 0x3c8], ax
    X86_AT(c, 0x5ef7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3C8u)), (c.r[0] & 0xFFFFu));
    // 005eff  ret 
    X86_AT(c, 0x5effu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5ef7u, "ran off the end of a function");
}
void f_00005eff(X86Cpu& c) {
    X86_TICK(c, 10);
    // 005eff  ret 
    X86_AT(c, 0x5effu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5effu, "ran off the end of a function");
}
void f_00005f00(X86Cpu& c) {
    X86_TICK(c, 23);
    // 005f00  mov word ptr gs:[ebp + 0x1d8], dx
    X86_AT(c, 0x5f00u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), (c.r[2] & 0xFFFFu));
    // 005f08  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x5f08u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 005f10  mov eax, dword ptr gs:[ebp + 0x3cc]
    X86_AT(c, 0x5f10u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CCu)));
    // 005f17  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5f17u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005f1e  mov ax, word ptr gs:[ebp + 0x3d0]
    X86_AT(c, 0x5f1eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D0u))));
    // 005f26  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5f26u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005f2e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5f2eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5f35u); x86_call(c, t); X86_RET(c, 0x5f35u); }
    X86_TICK(c, 22);
    // 005f35  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5f35u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005f3c  mov dword ptr gs:[ebp + 0x3cc], eax
    X86_AT(c, 0x5f3cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CCu)), c.r[0]);
    // 005f43  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f43u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f4b  mov word ptr gs:[ebp + 0x3d0], ax
    X86_AT(c, 0x5f4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D0u)), (c.r[0] & 0xFFFFu));
    // 005f53  ret 
    X86_AT(c, 0x5f53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f00u, "ran off the end of a function");
}
void f_00005f08(X86Cpu& c) {
    X86_TICK(c, 21);
    // 005f08  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x5f08u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 005f10  mov eax, dword ptr gs:[ebp + 0x3cc]
    X86_AT(c, 0x5f10u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CCu)));
    // 005f17  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5f17u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005f1e  mov ax, word ptr gs:[ebp + 0x3d0]
    X86_AT(c, 0x5f1eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D0u))));
    // 005f26  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5f26u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005f2e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5f2eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5f35u); x86_call(c, t); X86_RET(c, 0x5f35u); }
    X86_TICK(c, 22);
    // 005f35  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5f35u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005f3c  mov dword ptr gs:[ebp + 0x3cc], eax
    X86_AT(c, 0x5f3cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CCu)), c.r[0]);
    // 005f43  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f43u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f4b  mov word ptr gs:[ebp + 0x3d0], ax
    X86_AT(c, 0x5f4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D0u)), (c.r[0] & 0xFFFFu));
    // 005f53  ret 
    X86_AT(c, 0x5f53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f08u, "ran off the end of a function");
}
void f_00005f10(X86Cpu& c) {
    X86_TICK(c, 19);
    // 005f10  mov eax, dword ptr gs:[ebp + 0x3cc]
    X86_AT(c, 0x5f10u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CCu)));
    // 005f17  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5f17u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005f1e  mov ax, word ptr gs:[ebp + 0x3d0]
    X86_AT(c, 0x5f1eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D0u))));
    // 005f26  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5f26u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005f2e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5f2eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5f35u); x86_call(c, t); X86_RET(c, 0x5f35u); }
    X86_TICK(c, 22);
    // 005f35  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5f35u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005f3c  mov dword ptr gs:[ebp + 0x3cc], eax
    X86_AT(c, 0x5f3cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CCu)), c.r[0]);
    // 005f43  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f43u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f4b  mov word ptr gs:[ebp + 0x3d0], ax
    X86_AT(c, 0x5f4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D0u)), (c.r[0] & 0xFFFFu));
    // 005f53  ret 
    X86_AT(c, 0x5f53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f10u, "ran off the end of a function");
}
void f_00005f17(X86Cpu& c) {
    X86_TICK(c, 15);
    // 005f17  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5f17u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005f1e  mov ax, word ptr gs:[ebp + 0x3d0]
    X86_AT(c, 0x5f1eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D0u))));
    // 005f26  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5f26u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005f2e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5f2eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5f35u); x86_call(c, t); X86_RET(c, 0x5f35u); }
    X86_TICK(c, 22);
    // 005f35  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5f35u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005f3c  mov dword ptr gs:[ebp + 0x3cc], eax
    X86_AT(c, 0x5f3cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CCu)), c.r[0]);
    // 005f43  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f43u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f4b  mov word ptr gs:[ebp + 0x3d0], ax
    X86_AT(c, 0x5f4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D0u)), (c.r[0] & 0xFFFFu));
    // 005f53  ret 
    X86_AT(c, 0x5f53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f17u, "ran off the end of a function");
}
void f_00005f1e(X86Cpu& c) {
    X86_TICK(c, 13);
    // 005f1e  mov ax, word ptr gs:[ebp + 0x3d0]
    X86_AT(c, 0x5f1eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D0u))));
    // 005f26  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5f26u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005f2e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5f2eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5f35u); x86_call(c, t); X86_RET(c, 0x5f35u); }
    X86_TICK(c, 22);
    // 005f35  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5f35u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005f3c  mov dword ptr gs:[ebp + 0x3cc], eax
    X86_AT(c, 0x5f3cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CCu)), c.r[0]);
    // 005f43  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f43u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f4b  mov word ptr gs:[ebp + 0x3d0], ax
    X86_AT(c, 0x5f4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D0u)), (c.r[0] & 0xFFFFu));
    // 005f53  ret 
    X86_AT(c, 0x5f53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f1eu, "ran off the end of a function");
}
void f_00005f26(X86Cpu& c) {
    X86_TICK(c, 9);
    // 005f26  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5f26u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005f2e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5f2eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5f35u); x86_call(c, t); X86_RET(c, 0x5f35u); }
    X86_TICK(c, 22);
    // 005f35  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5f35u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005f3c  mov dword ptr gs:[ebp + 0x3cc], eax
    X86_AT(c, 0x5f3cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CCu)), c.r[0]);
    // 005f43  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f43u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f4b  mov word ptr gs:[ebp + 0x3d0], ax
    X86_AT(c, 0x5f4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D0u)), (c.r[0] & 0xFFFFu));
    // 005f53  ret 
    X86_AT(c, 0x5f53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f26u, "ran off the end of a function");
}
void f_00005f2e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 005f2e  call dword ptr gs:[ebp + 0x330]
    X86_AT(c, 0x5f2eu);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x330u))); push32(c, 0x5f35u); x86_call(c, t); X86_RET(c, 0x5f35u); }
    X86_TICK(c, 22);
    // 005f35  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5f35u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005f3c  mov dword ptr gs:[ebp + 0x3cc], eax
    X86_AT(c, 0x5f3cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CCu)), c.r[0]);
    // 005f43  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f43u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f4b  mov word ptr gs:[ebp + 0x3d0], ax
    X86_AT(c, 0x5f4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D0u)), (c.r[0] & 0xFFFFu));
    // 005f53  ret 
    X86_AT(c, 0x5f53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f2eu, "ran off the end of a function");
}
void f_00005f35(X86Cpu& c) {
    X86_TICK(c, 22);
    // 005f35  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5f35u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005f3c  mov dword ptr gs:[ebp + 0x3cc], eax
    X86_AT(c, 0x5f3cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CCu)), c.r[0]);
    // 005f43  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f43u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f4b  mov word ptr gs:[ebp + 0x3d0], ax
    X86_AT(c, 0x5f4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D0u)), (c.r[0] & 0xFFFFu));
    // 005f53  ret 
    X86_AT(c, 0x5f53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f35u, "ran off the end of a function");
}
void f_00005f3c(X86Cpu& c) {
    X86_TICK(c, 18);
    // 005f3c  mov dword ptr gs:[ebp + 0x3cc], eax
    X86_AT(c, 0x5f3cu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3CCu)), c.r[0]);
    // 005f43  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f43u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f4b  mov word ptr gs:[ebp + 0x3d0], ax
    X86_AT(c, 0x5f4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D0u)), (c.r[0] & 0xFFFFu));
    // 005f53  ret 
    X86_AT(c, 0x5f53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f3cu, "ran off the end of a function");
}
void f_00005f43(X86Cpu& c) {
    X86_TICK(c, 16);
    // 005f43  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f43u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f4b  mov word ptr gs:[ebp + 0x3d0], ax
    X86_AT(c, 0x5f4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D0u)), (c.r[0] & 0xFFFFu));
    // 005f53  ret 
    X86_AT(c, 0x5f53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f43u, "ran off the end of a function");
}
void f_00005f4b(X86Cpu& c) {
    X86_TICK(c, 12);
    // 005f4b  mov word ptr gs:[ebp + 0x3d0], ax
    X86_AT(c, 0x5f4bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D0u)), (c.r[0] & 0xFFFFu));
    // 005f53  ret 
    X86_AT(c, 0x5f53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f4bu, "ran off the end of a function");
}
void f_00005f53(X86Cpu& c) {
    X86_TICK(c, 10);
    // 005f53  ret 
    X86_AT(c, 0x5f53u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f53u, "ran off the end of a function");
}
void f_00005f54(X86Cpu& c) {
    X86_TICK(c, 23);
    // 005f54  mov word ptr gs:[ebp + 0x1d8], dx
    X86_AT(c, 0x5f54u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)), (c.r[2] & 0xFFFFu));
    // 005f5c  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x5f5cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 005f64  mov eax, dword ptr gs:[ebp + 0x3d4]
    X86_AT(c, 0x5f64u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D4u)));
    // 005f6b  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5f6bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005f72  mov ax, word ptr gs:[ebp + 0x3d8]
    X86_AT(c, 0x5f72u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D8u))));
    // 005f7a  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5f7au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005f82  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5f82u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5f89u); x86_call(c, t); X86_RET(c, 0x5f89u); }
    X86_TICK(c, 22);
    // 005f89  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5f89u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005f90  mov dword ptr gs:[ebp + 0x3d4], eax
    X86_AT(c, 0x5f90u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D4u)), c.r[0]);
    // 005f97  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f97u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f9f  mov word ptr gs:[ebp + 0x3d8], ax
    X86_AT(c, 0x5f9fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D8u)), (c.r[0] & 0xFFFFu));
    // 005fa7  ret 
    X86_AT(c, 0x5fa7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f54u, "ran off the end of a function");
}
void f_00005f5c(X86Cpu& c) {
    X86_TICK(c, 21);
    // 005f5c  mov word ptr gs:[ebp + 0x1da], ax
    X86_AT(c, 0x5f5cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1DAu)), (c.r[0] & 0xFFFFu));
    // 005f64  mov eax, dword ptr gs:[ebp + 0x3d4]
    X86_AT(c, 0x5f64u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D4u)));
    // 005f6b  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5f6bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005f72  mov ax, word ptr gs:[ebp + 0x3d8]
    X86_AT(c, 0x5f72u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D8u))));
    // 005f7a  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5f7au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005f82  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5f82u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5f89u); x86_call(c, t); X86_RET(c, 0x5f89u); }
    X86_TICK(c, 22);
    // 005f89  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5f89u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005f90  mov dword ptr gs:[ebp + 0x3d4], eax
    X86_AT(c, 0x5f90u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D4u)), c.r[0]);
    // 005f97  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f97u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f9f  mov word ptr gs:[ebp + 0x3d8], ax
    X86_AT(c, 0x5f9fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D8u)), (c.r[0] & 0xFFFFu));
    // 005fa7  ret 
    X86_AT(c, 0x5fa7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f5cu, "ran off the end of a function");
}
void f_00005f64(X86Cpu& c) {
    X86_TICK(c, 19);
    // 005f64  mov eax, dword ptr gs:[ebp + 0x3d4]
    X86_AT(c, 0x5f64u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D4u)));
    // 005f6b  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5f6bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005f72  mov ax, word ptr gs:[ebp + 0x3d8]
    X86_AT(c, 0x5f72u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D8u))));
    // 005f7a  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5f7au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005f82  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5f82u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5f89u); x86_call(c, t); X86_RET(c, 0x5f89u); }
    X86_TICK(c, 22);
    // 005f89  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5f89u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005f90  mov dword ptr gs:[ebp + 0x3d4], eax
    X86_AT(c, 0x5f90u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D4u)), c.r[0]);
    // 005f97  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f97u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f9f  mov word ptr gs:[ebp + 0x3d8], ax
    X86_AT(c, 0x5f9fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D8u)), (c.r[0] & 0xFFFFu));
    // 005fa7  ret 
    X86_AT(c, 0x5fa7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f64u, "ran off the end of a function");
}
void f_00005f6b(X86Cpu& c) {
    X86_TICK(c, 15);
    // 005f6b  mov dword ptr gs:[ebp + 0x1e2], eax
    X86_AT(c, 0x5f6bu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)), c.r[0]);
    // 005f72  mov ax, word ptr gs:[ebp + 0x3d8]
    X86_AT(c, 0x5f72u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D8u))));
    // 005f7a  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5f7au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005f82  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5f82u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5f89u); x86_call(c, t); X86_RET(c, 0x5f89u); }
    X86_TICK(c, 22);
    // 005f89  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5f89u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005f90  mov dword ptr gs:[ebp + 0x3d4], eax
    X86_AT(c, 0x5f90u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D4u)), c.r[0]);
    // 005f97  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f97u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f9f  mov word ptr gs:[ebp + 0x3d8], ax
    X86_AT(c, 0x5f9fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D8u)), (c.r[0] & 0xFFFFu));
    // 005fa7  ret 
    X86_AT(c, 0x5fa7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f6bu, "ran off the end of a function");
}
void f_00005f72(X86Cpu& c) {
    X86_TICK(c, 13);
    // 005f72  mov ax, word ptr gs:[ebp + 0x3d8]
    X86_AT(c, 0x5f72u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D8u))));
    // 005f7a  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5f7au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005f82  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5f82u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5f89u); x86_call(c, t); X86_RET(c, 0x5f89u); }
    X86_TICK(c, 22);
    // 005f89  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5f89u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005f90  mov dword ptr gs:[ebp + 0x3d4], eax
    X86_AT(c, 0x5f90u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D4u)), c.r[0]);
    // 005f97  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f97u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f9f  mov word ptr gs:[ebp + 0x3d8], ax
    X86_AT(c, 0x5f9fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D8u)), (c.r[0] & 0xFFFFu));
    // 005fa7  ret 
    X86_AT(c, 0x5fa7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f72u, "ran off the end of a function");
}
void f_00005f7a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 005f7a  mov word ptr gs:[ebp + 0x1e6], ax
    X86_AT(c, 0x5f7au);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u)), (c.r[0] & 0xFFFFu));
    // 005f82  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5f82u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5f89u); x86_call(c, t); X86_RET(c, 0x5f89u); }
    X86_TICK(c, 22);
    // 005f89  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5f89u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005f90  mov dword ptr gs:[ebp + 0x3d4], eax
    X86_AT(c, 0x5f90u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D4u)), c.r[0]);
    // 005f97  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f97u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f9f  mov word ptr gs:[ebp + 0x3d8], ax
    X86_AT(c, 0x5f9fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D8u)), (c.r[0] & 0xFFFFu));
    // 005fa7  ret 
    X86_AT(c, 0x5fa7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f7au, "ran off the end of a function");
}
void f_00005f82(X86Cpu& c) {
    X86_TICK(c, 7);
    // 005f82  call dword ptr gs:[ebp + 0x334]
    X86_AT(c, 0x5f82u);
    { uint32_t t = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x334u))); push32(c, 0x5f89u); x86_call(c, t); X86_RET(c, 0x5f89u); }
    X86_TICK(c, 22);
    // 005f89  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5f89u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005f90  mov dword ptr gs:[ebp + 0x3d4], eax
    X86_AT(c, 0x5f90u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D4u)), c.r[0]);
    // 005f97  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f97u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f9f  mov word ptr gs:[ebp + 0x3d8], ax
    X86_AT(c, 0x5f9fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D8u)), (c.r[0] & 0xFFFFu));
    // 005fa7  ret 
    X86_AT(c, 0x5fa7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f82u, "ran off the end of a function");
}
void f_00005f89(X86Cpu& c) {
    X86_TICK(c, 22);
    // 005f89  mov eax, dword ptr gs:[ebp + 0x1e2]
    X86_AT(c, 0x5f89u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E2u)));
    // 005f90  mov dword ptr gs:[ebp + 0x3d4], eax
    X86_AT(c, 0x5f90u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D4u)), c.r[0]);
    // 005f97  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f97u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f9f  mov word ptr gs:[ebp + 0x3d8], ax
    X86_AT(c, 0x5f9fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D8u)), (c.r[0] & 0xFFFFu));
    // 005fa7  ret 
    X86_AT(c, 0x5fa7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f89u, "ran off the end of a function");
}
void f_00005f90(X86Cpu& c) {
    X86_TICK(c, 18);
    // 005f90  mov dword ptr gs:[ebp + 0x3d4], eax
    X86_AT(c, 0x5f90u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D4u)), c.r[0]);
    // 005f97  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f97u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f9f  mov word ptr gs:[ebp + 0x3d8], ax
    X86_AT(c, 0x5f9fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D8u)), (c.r[0] & 0xFFFFu));
    // 005fa7  ret 
    X86_AT(c, 0x5fa7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f90u, "ran off the end of a function");
}
void f_00005f97(X86Cpu& c) {
    X86_TICK(c, 16);
    // 005f97  mov ax, word ptr gs:[ebp + 0x1e6]
    X86_AT(c, 0x5f97u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1E6u))));
    // 005f9f  mov word ptr gs:[ebp + 0x3d8], ax
    X86_AT(c, 0x5f9fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D8u)), (c.r[0] & 0xFFFFu));
    // 005fa7  ret 
    X86_AT(c, 0x5fa7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f97u, "ran off the end of a function");
}
void f_00005f9f(X86Cpu& c) {
    X86_TICK(c, 12);
    // 005f9f  mov word ptr gs:[ebp + 0x3d8], ax
    X86_AT(c, 0x5f9fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3D8u)), (c.r[0] & 0xFFFFu));
    // 005fa7  ret 
    X86_AT(c, 0x5fa7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5f9fu, "ran off the end of a function");
}
void f_00005fa7(X86Cpu& c) {
    X86_TICK(c, 10);
    // 005fa7  ret 
    X86_AT(c, 0x5fa7u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5fa7u, "ran off the end of a function");
}
void f_00005fa8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 005fa8  call 0xbb94
    X86_AT(c, 0x5fa8u);
    push32(c, 0x5fadu); f_0000bb94(c); X86_RET(c, 0x5fadu);
    X86_TICK(c, 11);
    // 005fad  mov word ptr gs:[ebp + 0x468], ax
    X86_AT(c, 0x5fadu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u)), (c.r[0] & 0xFFFFu));
    // 005fb5  mov byte ptr gs:[ebp + 0x46a], dh
    X86_AT(c, 0x5fb5u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Au)), g8(c, 6));
    // 005fbc  call 0xbbfc
    X86_AT(c, 0x5fbcu);
    push32(c, 0x5fc1u); f_0000bbfc(c); X86_RET(c, 0x5fc1u);
    X86_TICK(c, 22);
    // 005fc1  mov word ptr gs:[ebp + 0x46c], ax
    X86_AT(c, 0x5fc1u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu)), (c.r[0] & 0xFFFFu));
    // 005fc9  mov byte ptr gs:[ebp + 0x46e], dh
    X86_AT(c, 0x5fc9u);
    wr8((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Eu)), g8(c, 6));
    // 005fd0  movzx ecx, word ptr gs:[ebp + 0x1f2]
    X86_AT(c, 0x5fd0u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x1F2u)));
    // 005fd8  cmp word ptr gs:[ebp + 0x30c], 0
    X86_AT(c, 0x5fd8u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x30Cu))), 0x0u, 0, 2);
    // 005fe1  jne 0x5fe8
    X86_AT(c, 0x5fe1u);
    if (x86_cc(c, 5)) { goto L_5fe8; }
    X86_TICK(c, 17);
    // 005fe3  movsd dword ptr es:[edi], dword ptr [esi]
    X86_AT(c, 0x5fe3u);
    x86_string(c, 0, 4, 243, 4, 3);
    // 005fe5  ret 
    X86_AT(c, 0x5fe5u);
    c.eip = pop32(c); return;
L_5fe8:
    X86_TICK(c, 19);
    // 005fe8  push ecx
    X86_AT(c, 0x5fe8u);
    { uint32_t v = c.r[1]; push32(c, v); }
    // 005fe9  mov ecx, dword ptr [esi]
    X86_AT(c, 0x5fe9u);
    c.r[1] = rd32((c.sbase[3] + (uint32_t)(c.r[6])));
    // 005feb  sub cx, word ptr gs:[ebp + 0x464]
    X86_AT(c, 0x5febu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u))), 0, 2)); }
    // 005ff3  mov bh, ch
    X86_AT(c, 0x5ff3u);
    s8(c, 7, g8(c, 5));
    // 005ff5  jge 0x5ffa
    X86_AT(c, 0x5ff5u);
    if (x86_cc(c, 13)) { goto L_5ffa; }
    X86_TICK(c, 2);
    // 005ff7  neg cx
    X86_AT(c, 0x5ff7u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_neg(c, v, 2)); }
L_5ffa:
    X86_TICK(c, 80);
    // 005ffa  mov ax, word ptr gs:[ebp + 0x468]
    X86_AT(c, 0x5ffau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u))));
    // 006002  mul cx
    X86_AT(c, 0x6002u);
    x86_mul(c, (c.r[1] & 0xFFFFu), 2);
    // 006005  add ah, ah
    X86_AT(c, 0x6005u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 006007  adc dx, 0
    X86_AT(c, 0x6007u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 00600b  mov word ptr gs:[ebp + 0x470], dx
    X86_AT(c, 0x600bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)), (c.r[2] & 0xFFFFu));
    // 006013  mov ax, word ptr gs:[ebp + 0x46c]
    X86_AT(c, 0x6013u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))));
    // 00601b  mul cx
    X86_AT(c, 0x601bu);
    x86_mul(c, (c.r[1] & 0xFFFFu), 2);
    // 00601e  add ah, ah
    X86_AT(c, 0x601eu);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 006020  adc dx, 0
    X86_AT(c, 0x6020u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 006024  mov word ptr gs:[ebp + 0x472], dx
    X86_AT(c, 0x6024u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u)), (c.r[2] & 0xFFFFu));
    // 00602c  shr ecx, 0x10
    X86_AT(c, 0x602cu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 5, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 00602f  sub cx, word ptr gs:[ebp + 0x466]
    X86_AT(c, 0x602fu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x466u))), 0, 2)); }
    // 006037  mov bl, ch
    X86_AT(c, 0x6037u);
    s8(c, 3, g8(c, 5));
    // 006039  jge 0x603e
    X86_AT(c, 0x6039u);
    if (x86_cc(c, 13)) { goto L_603e; }
    X86_TICK(c, 2);
    // 00603b  neg cx
    X86_AT(c, 0x603bu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_neg(c, v, 2)); }
L_603e:
    X86_TICK(c, 76);
    // 00603e  mov ax, word ptr gs:[ebp + 0x468]
    X86_AT(c, 0x603eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x468u))));
    // 006046  mul cx
    X86_AT(c, 0x6046u);
    x86_mul(c, (c.r[1] & 0xFFFFu), 2);
    // 006049  add ah, ah
    X86_AT(c, 0x6049u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 00604b  adc dx, 0
    X86_AT(c, 0x604bu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 00604f  mov word ptr gs:[ebp + 0x474], dx
    X86_AT(c, 0x604fu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)), (c.r[2] & 0xFFFFu));
    // 006057  mov ax, word ptr gs:[ebp + 0x46c]
    X86_AT(c, 0x6057u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Cu))));
    // 00605f  mul cx
    X86_AT(c, 0x605fu);
    x86_mul(c, (c.r[1] & 0xFFFFu), 2);
    // 006062  add ah, ah
    X86_AT(c, 0x6062u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_add(c, v, g8(c, 4), 0, 1)); }
    // 006064  adc dx, 0
    X86_AT(c, 0x6064u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x0u, c.fl & 1, 2)); }
    // 006068  mov word ptr gs:[ebp + 0x476], dx
    X86_AT(c, 0x6068u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)), (c.r[2] & 0xFFFFu));
    // 006070  cmp byte ptr gs:[ebp + 0x46a], 0
    X86_AT(c, 0x6070u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Au))), 0x0u, 0, 1);
    // 006078  je 0x608a
    X86_AT(c, 0x6078u);
    if (x86_cc(c, 4)) { goto L_608a; }
    X86_TICK(c, 12);
    // 00607a  neg word ptr gs:[ebp + 0x470]
    X86_AT(c, 0x607au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)); uint32_t v = rd16(ea); wr16(ea, x86_neg(c, v, 2)); }
    // 006082  neg word ptr gs:[ebp + 0x474]
    X86_AT(c, 0x6082u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)); uint32_t v = rd16(ea); wr16(ea, x86_neg(c, v, 2)); }
L_608a:
    X86_TICK(c, 12);
    // 00608a  cmp byte ptr gs:[ebp + 0x46e], 0
    X86_AT(c, 0x608au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x46Eu))), 0x0u, 0, 1);
    // 006092  je 0x60a4
    X86_AT(c, 0x6092u);
    if (x86_cc(c, 4)) { goto L_60a4; }
    X86_TICK(c, 12);
    // 006094  neg word ptr gs:[ebp + 0x472]
    X86_AT(c, 0x6094u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x472u)); uint32_t v = rd16(ea); wr16(ea, x86_neg(c, v, 2)); }
    // 00609c  neg word ptr gs:[ebp + 0x476]
    X86_AT(c, 0x609cu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)); uint32_t v = rd16(ea); wr16(ea, x86_neg(c, v, 2)); }
L_60a4:
    X86_TICK(c, 7);
    // 0060a4  test bh, bh
    X86_AT(c, 0x60a4u);
    (void)x86_logic(c, g8(c, 7) & g8(c, 7), 1);
    // 0060a6  jge 0x60b8
    X86_AT(c, 0x60a6u);
    if (x86_cc(c, 13)) { goto L_60b8; }
    X86_TICK(c, 12);
    // 0060a8  neg word ptr gs:[ebp + 0x470]
    X86_AT(c, 0x60a8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)); uint32_t v = rd16(ea); wr16(ea, x86_neg(c, v, 2)); }
    // 0060b0  neg word ptr gs:[ebp + 0x472]
    X86_AT(c, 0x60b0u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x472u)); uint32_t v = rd16(ea); wr16(ea, x86_neg(c, v, 2)); }
L_60b8:
    X86_TICK(c, 7);
    // 0060b8  test bl, bl
    X86_AT(c, 0x60b8u);
    (void)x86_logic(c, g8(c, 3) & g8(c, 3), 1);
    // 0060ba  jge 0x60cc
    X86_AT(c, 0x60bau);
    if (x86_cc(c, 13)) { goto L_60cc; }
    X86_TICK(c, 12);
    // 0060bc  neg word ptr gs:[ebp + 0x474]
    X86_AT(c, 0x60bcu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x474u)); uint32_t v = rd16(ea); wr16(ea, x86_neg(c, v, 2)); }
    // 0060c4  neg word ptr gs:[ebp + 0x476]
    X86_AT(c, 0x60c4u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x476u)); uint32_t v = rd16(ea); wr16(ea, x86_neg(c, v, 2)); }
L_60cc:
    X86_TICK(c, 51);
    // 0060cc  mov ax, word ptr gs:[ebp + 0x464]
    X86_AT(c, 0x60ccu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x464u))));
    // 0060d4  add ax, word ptr gs:[ebp + 0x472]
    X86_AT(c, 0x60d4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))), 0, 2)); }
    // 0060dc  sub ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0x60dcu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))), 0, 2)); }
    // 0060e4  mov bx, word ptr gs:[ebp + 0x466]
    X86_AT(c, 0x60e4u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x466u))));
    // 0060ec  add bx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0x60ecu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))), 0, 2)); }
    // 0060f4  add bx, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0x60f4u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))), 0, 2)); }
    // 0060fc  mov word ptr es:[edi], ax
    X86_AT(c, 0x60fcu);
    wr16((c.sbase[0] + (uint32_t)(c.r[7])), (c.r[0] & 0xFFFFu));
    // 006100  mov word ptr es:[edi + 2], bx
    X86_AT(c, 0x6100u);
    wr16((c.sbase[0] + (uint32_t)(c.r[7] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 006105  add esi, 4
    X86_AT(c, 0x6105u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 006108  add edi, 4
    X86_AT(c, 0x6108u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00610b  pop ecx
    X86_AT(c, 0x610bu);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 00610c  dec ecx
    X86_AT(c, 0x610cu);
    { uint32_t v = c.r[1]; c.r[1] = x86_dec(c, v, 4); }
    // 00610d  jne 0x5fe8
    X86_AT(c, 0x610du);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x5fe8u); goto L_5fe8; }
    X86_TICK(c, 10);
    // 006113  ret 
    X86_AT(c, 0x6113u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x5fa8u, "ran off the end of a function");
}
void f_00006120(X86Cpu& c) {
    X86_TICK(c, 18);
    // 006120  mov ecx, dword ptr gs:[ebp + 0x14]
    X86_AT(c, 0x6120u);
    c.r[1] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x14u)));
    // 006124  sub eax, eax
    X86_AT(c, 0x6124u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 006126  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x6126u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00612e  jne 0x614a
    X86_AT(c, 0x612eu);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 14);
    // 006130  inc eax
    X86_AT(c, 0x6130u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 006131  test byte ptr gs:[ebp + 0x10a], 2
    X86_AT(c, 0x6131u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x2u, 1);
    // 006139  jne 0x614a
    X86_AT(c, 0x6139u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 14);
    // 00613b  lea eax, [eax + ecx*2 + 1]
    X86_AT(c, 0x613bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] * 2 + 0x1u);
    // 00613f  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x613fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 006147  jne 0x614a
    X86_AT(c, 0x6147u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 2);
    // 006149  inc eax
    X86_AT(c, 0x6149u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_614a:
    X86_TICK(c, 21);
    // 00614a  mov edi, dword ptr cs:[eax*4 + 0x61c4]
    X86_AT(c, 0x614au);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x61C4u)));
    // 006152  mov dword ptr gs:[ebp + 0x314], edi
    X86_AT(c, 0x6152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)), c.r[7]);
    // 006159  mov edi, dword ptr cs:[eax*4 + 0x6a9c]
    X86_AT(c, 0x6159u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x6A9Cu)));
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6120u, "ran off the end of a function");
}
void f_00006124(X86Cpu& c) {
    X86_TICK(c, 14);
    // 006124  sub eax, eax
    X86_AT(c, 0x6124u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 006126  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x6126u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00612e  jne 0x614a
    X86_AT(c, 0x612eu);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 14);
    // 006130  inc eax
    X86_AT(c, 0x6130u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 006131  test byte ptr gs:[ebp + 0x10a], 2
    X86_AT(c, 0x6131u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x2u, 1);
    // 006139  jne 0x614a
    X86_AT(c, 0x6139u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 14);
    // 00613b  lea eax, [eax + ecx*2 + 1]
    X86_AT(c, 0x613bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] * 2 + 0x1u);
    // 00613f  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x613fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 006147  jne 0x614a
    X86_AT(c, 0x6147u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 2);
    // 006149  inc eax
    X86_AT(c, 0x6149u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_614a:
    X86_TICK(c, 21);
    // 00614a  mov edi, dword ptr cs:[eax*4 + 0x61c4]
    X86_AT(c, 0x614au);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x61C4u)));
    // 006152  mov dword ptr gs:[ebp + 0x314], edi
    X86_AT(c, 0x6152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)), c.r[7]);
    // 006159  mov edi, dword ptr cs:[eax*4 + 0x6a9c]
    X86_AT(c, 0x6159u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x6A9Cu)));
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6124u, "ran off the end of a function");
}
void f_00006126(X86Cpu& c) {
    X86_TICK(c, 12);
    // 006126  cmp byte ptr gs:[ebp + 0x300], 0
    X86_AT(c, 0x6126u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x300u))), 0x0u, 0, 1);
    // 00612e  jne 0x614a
    X86_AT(c, 0x612eu);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 14);
    // 006130  inc eax
    X86_AT(c, 0x6130u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 006131  test byte ptr gs:[ebp + 0x10a], 2
    X86_AT(c, 0x6131u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x2u, 1);
    // 006139  jne 0x614a
    X86_AT(c, 0x6139u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 14);
    // 00613b  lea eax, [eax + ecx*2 + 1]
    X86_AT(c, 0x613bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] * 2 + 0x1u);
    // 00613f  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x613fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 006147  jne 0x614a
    X86_AT(c, 0x6147u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 2);
    // 006149  inc eax
    X86_AT(c, 0x6149u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_614a:
    X86_TICK(c, 21);
    // 00614a  mov edi, dword ptr cs:[eax*4 + 0x61c4]
    X86_AT(c, 0x614au);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x61C4u)));
    // 006152  mov dword ptr gs:[ebp + 0x314], edi
    X86_AT(c, 0x6152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)), c.r[7]);
    // 006159  mov edi, dword ptr cs:[eax*4 + 0x6a9c]
    X86_AT(c, 0x6159u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x6A9Cu)));
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6126u, "ran off the end of a function");
}
void f_0000612e(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00612e  jne 0x614a
    X86_AT(c, 0x612eu);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 14);
    // 006130  inc eax
    X86_AT(c, 0x6130u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 006131  test byte ptr gs:[ebp + 0x10a], 2
    X86_AT(c, 0x6131u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x2u, 1);
    // 006139  jne 0x614a
    X86_AT(c, 0x6139u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 14);
    // 00613b  lea eax, [eax + ecx*2 + 1]
    X86_AT(c, 0x613bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] * 2 + 0x1u);
    // 00613f  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x613fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 006147  jne 0x614a
    X86_AT(c, 0x6147u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 2);
    // 006149  inc eax
    X86_AT(c, 0x6149u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_614a:
    X86_TICK(c, 21);
    // 00614a  mov edi, dword ptr cs:[eax*4 + 0x61c4]
    X86_AT(c, 0x614au);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x61C4u)));
    // 006152  mov dword ptr gs:[ebp + 0x314], edi
    X86_AT(c, 0x6152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)), c.r[7]);
    // 006159  mov edi, dword ptr cs:[eax*4 + 0x6a9c]
    X86_AT(c, 0x6159u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x6A9Cu)));
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x612eu, "ran off the end of a function");
}
void f_00006130(X86Cpu& c) {
    X86_TICK(c, 14);
    // 006130  inc eax
    X86_AT(c, 0x6130u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 006131  test byte ptr gs:[ebp + 0x10a], 2
    X86_AT(c, 0x6131u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x2u, 1);
    // 006139  jne 0x614a
    X86_AT(c, 0x6139u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 14);
    // 00613b  lea eax, [eax + ecx*2 + 1]
    X86_AT(c, 0x613bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] * 2 + 0x1u);
    // 00613f  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x613fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 006147  jne 0x614a
    X86_AT(c, 0x6147u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 2);
    // 006149  inc eax
    X86_AT(c, 0x6149u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_614a:
    X86_TICK(c, 21);
    // 00614a  mov edi, dword ptr cs:[eax*4 + 0x61c4]
    X86_AT(c, 0x614au);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x61C4u)));
    // 006152  mov dword ptr gs:[ebp + 0x314], edi
    X86_AT(c, 0x6152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)), c.r[7]);
    // 006159  mov edi, dword ptr cs:[eax*4 + 0x6a9c]
    X86_AT(c, 0x6159u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x6A9Cu)));
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6130u, "ran off the end of a function");
}
void f_00006131(X86Cpu& c) {
    X86_TICK(c, 12);
    // 006131  test byte ptr gs:[ebp + 0x10a], 2
    X86_AT(c, 0x6131u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x2u, 1);
    // 006139  jne 0x614a
    X86_AT(c, 0x6139u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 14);
    // 00613b  lea eax, [eax + ecx*2 + 1]
    X86_AT(c, 0x613bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] * 2 + 0x1u);
    // 00613f  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x613fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 006147  jne 0x614a
    X86_AT(c, 0x6147u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 2);
    // 006149  inc eax
    X86_AT(c, 0x6149u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_614a:
    X86_TICK(c, 21);
    // 00614a  mov edi, dword ptr cs:[eax*4 + 0x61c4]
    X86_AT(c, 0x614au);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x61C4u)));
    // 006152  mov dword ptr gs:[ebp + 0x314], edi
    X86_AT(c, 0x6152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)), c.r[7]);
    // 006159  mov edi, dword ptr cs:[eax*4 + 0x6a9c]
    X86_AT(c, 0x6159u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x6A9Cu)));
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6131u, "ran off the end of a function");
}
void f_00006139(X86Cpu& c) {
    X86_TICK(c, 5);
    // 006139  jne 0x614a
    X86_AT(c, 0x6139u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 14);
    // 00613b  lea eax, [eax + ecx*2 + 1]
    X86_AT(c, 0x613bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] * 2 + 0x1u);
    // 00613f  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x613fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 006147  jne 0x614a
    X86_AT(c, 0x6147u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 2);
    // 006149  inc eax
    X86_AT(c, 0x6149u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_614a:
    X86_TICK(c, 21);
    // 00614a  mov edi, dword ptr cs:[eax*4 + 0x61c4]
    X86_AT(c, 0x614au);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x61C4u)));
    // 006152  mov dword ptr gs:[ebp + 0x314], edi
    X86_AT(c, 0x6152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)), c.r[7]);
    // 006159  mov edi, dword ptr cs:[eax*4 + 0x6a9c]
    X86_AT(c, 0x6159u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x6A9Cu)));
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6139u, "ran off the end of a function");
}
void f_0000613b(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00613b  lea eax, [eax + ecx*2 + 1]
    X86_AT(c, 0x613bu);
    c.r[0] = (uint32_t)(c.r[0] + c.r[1] * 2 + 0x1u);
    // 00613f  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x613fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 006147  jne 0x614a
    X86_AT(c, 0x6147u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 2);
    // 006149  inc eax
    X86_AT(c, 0x6149u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_614a:
    X86_TICK(c, 21);
    // 00614a  mov edi, dword ptr cs:[eax*4 + 0x61c4]
    X86_AT(c, 0x614au);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x61C4u)));
    // 006152  mov dword ptr gs:[ebp + 0x314], edi
    X86_AT(c, 0x6152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)), c.r[7]);
    // 006159  mov edi, dword ptr cs:[eax*4 + 0x6a9c]
    X86_AT(c, 0x6159u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x6A9Cu)));
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x613bu, "ran off the end of a function");
}
void f_0000613f(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00613f  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x613fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 006147  jne 0x614a
    X86_AT(c, 0x6147u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 2);
    // 006149  inc eax
    X86_AT(c, 0x6149u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_614a:
    X86_TICK(c, 21);
    // 00614a  mov edi, dword ptr cs:[eax*4 + 0x61c4]
    X86_AT(c, 0x614au);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x61C4u)));
    // 006152  mov dword ptr gs:[ebp + 0x314], edi
    X86_AT(c, 0x6152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)), c.r[7]);
    // 006159  mov edi, dword ptr cs:[eax*4 + 0x6a9c]
    X86_AT(c, 0x6159u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x6A9Cu)));
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x613fu, "ran off the end of a function");
}
void f_00006147(X86Cpu& c) {
    X86_TICK(c, 5);
    // 006147  jne 0x614a
    X86_AT(c, 0x6147u);
    if (x86_cc(c, 5)) { goto L_614a; }
    X86_TICK(c, 2);
    // 006149  inc eax
    X86_AT(c, 0x6149u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
L_614a:
    X86_TICK(c, 21);
    // 00614a  mov edi, dword ptr cs:[eax*4 + 0x61c4]
    X86_AT(c, 0x614au);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x61C4u)));
    // 006152  mov dword ptr gs:[ebp + 0x314], edi
    X86_AT(c, 0x6152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)), c.r[7]);
    // 006159  mov edi, dword ptr cs:[eax*4 + 0x6a9c]
    X86_AT(c, 0x6159u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x6A9Cu)));
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6147u, "ran off the end of a function");
}
void f_00006149(X86Cpu& c) {
    X86_TICK(c, 23);
    // 006149  inc eax
    X86_AT(c, 0x6149u);
    { uint32_t v = c.r[0]; c.r[0] = x86_inc(c, v, 4); }
    // 00614a  mov edi, dword ptr cs:[eax*4 + 0x61c4]
    X86_AT(c, 0x614au);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x61C4u)));
    // 006152  mov dword ptr gs:[ebp + 0x314], edi
    X86_AT(c, 0x6152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)), c.r[7]);
    // 006159  mov edi, dword ptr cs:[eax*4 + 0x6a9c]
    X86_AT(c, 0x6159u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x6A9Cu)));
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6149u, "ran off the end of a function");
}
void f_0000614a(X86Cpu& c) {
    X86_TICK(c, 21);
    // 00614a  mov edi, dword ptr cs:[eax*4 + 0x61c4]
    X86_AT(c, 0x614au);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x61C4u)));
    // 006152  mov dword ptr gs:[ebp + 0x314], edi
    X86_AT(c, 0x6152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)), c.r[7]);
    // 006159  mov edi, dword ptr cs:[eax*4 + 0x6a9c]
    X86_AT(c, 0x6159u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x6A9Cu)));
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x614au, "ran off the end of a function");
}
void f_00006152(X86Cpu& c) {
    X86_TICK(c, 17);
    // 006152  mov dword ptr gs:[ebp + 0x314], edi
    X86_AT(c, 0x6152u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)), c.r[7]);
    // 006159  mov edi, dword ptr cs:[eax*4 + 0x6a9c]
    X86_AT(c, 0x6159u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x6A9Cu)));
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6152u, "ran off the end of a function");
}
void f_00006159(X86Cpu& c) {
    X86_TICK(c, 15);
    // 006159  mov edi, dword ptr cs:[eax*4 + 0x6a9c]
    X86_AT(c, 0x6159u);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x6A9Cu)));
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6159u, "ran off the end of a function");
}
void f_00006161(X86Cpu& c) {
    X86_TICK(c, 11);
    // 006161  mov dword ptr gs:[ebp + 0x31c], edi
    X86_AT(c, 0x6161u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x31Cu)), c.r[7]);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6161u, "ran off the end of a function");
}
void f_00006168(X86Cpu& c) {
    X86_TICK(c, 9);
    // 006168  mov edi, 0x81f4
    X86_AT(c, 0x6168u);
    c.r[7] = 0x81F4u;
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6168u, "ran off the end of a function");
}
void f_0000616d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00616d  test al, 1
    X86_AT(c, 0x616du);
    (void)x86_logic(c, g8(c, 0) & 0x1u, 1);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x616du, "ran off the end of a function");
}
void f_0000616f(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00616f  je 0x6187
    X86_AT(c, 0x616fu);
    if (x86_cc(c, 4)) { goto L_6187; }
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x616fu, "ran off the end of a function");
}
void f_00006171(X86Cpu& c) {
    X86_TICK(c, 7);
    // 006171  cmp al, 2
    X86_AT(c, 0x6171u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6171u, "ran off the end of a function");
}
void f_00006173(X86Cpu& c) {
    X86_TICK(c, 5);
    // 006173  jb 0x6187
    X86_AT(c, 0x6173u);
    if (x86_cc(c, 2)) { goto L_6187; }
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6173u, "ran off the end of a function");
}
void f_00006175(X86Cpu& c) {
    X86_TICK(c, 12);
    // 006175  cmp byte ptr gs:[ebp + 0x104], 2
    X86_AT(c, 0x6175u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0x2u, 0, 1);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6175u, "ran off the end of a function");
}
void f_0000617d(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00617d  jae 0x6187
    X86_AT(c, 0x617du);
    if (x86_cc(c, 3)) { goto L_6187; }
    X86_TICK(c, 4);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
L_6187:
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x617du, "ran off the end of a function");
}
void f_0000617f(X86Cpu& c) {
    X86_TICK(c, 33);
    // 00617f  mov edi, dword ptr cs:[ecx*4 + 0x8280]
    X86_AT(c, 0x617fu);
    c.r[7] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x8280u)));
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x617fu, "ran off the end of a function");
}
void f_00006187(X86Cpu& c) {
    X86_TICK(c, 29);
    // 006187  mov dword ptr gs:[ebp + 0x328], edi
    X86_AT(c, 0x6187u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x328u)), c.r[7]);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6187u, "ran off the end of a function");
}
void f_0000618e(X86Cpu& c) {
    X86_TICK(c, 27);
    // 00618e  shl ecx, 4
    X86_AT(c, 0x618eu);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x618eu, "ran off the end of a function");
}
void f_00006191(X86Cpu& c) {
    X86_TICK(c, 24);
    // 006191  add ecx, dword ptr gs:[ebp + 0x104]
    X86_AT(c, 0x6191u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x104u))), 0, 4); }
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6191u, "ran off the end of a function");
}
void f_00006198(X86Cpu& c) {
    X86_TICK(c, 18);
    // 006198  mov eax, dword ptr cs:[ecx*4 + 0x61ec]
    X86_AT(c, 0x6198u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x61ECu)));
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6198u, "ran off the end of a function");
}
void f_000061a0(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0061a0  mov dword ptr gs:[ebp + 0x318], eax
    X86_AT(c, 0x61a0u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x318u)), c.r[0]);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x61a0u, "ran off the end of a function");
}
void f_000061a7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0061a7  test byte ptr gs:[ebp + 0x10a], 1
    X86_AT(c, 0x61a7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10Au))) & 0x1u, 1);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x61a7u, "ran off the end of a function");
}
void f_000061af(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0061af  je 0x61b4
    X86_AT(c, 0x61afu);
    if (x86_cc(c, 4)) { goto L_61b4; }
    X86_TICK(c, 2);
    // 0061b1  add ecx, 0x40
    X86_AT(c, 0x61b1u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x40u, 0, 4); }
L_61b4:
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x61afu, "ran off the end of a function");
}
void f_000061b4(X86Cpu& c) {
    X86_TICK(c, 16);
    // 0061b4  mov eax, dword ptr cs:[ecx*4 + 0x6ac4]
    X86_AT(c, 0x61b4u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x6AC4u)));
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x61b4u, "ran off the end of a function");
}
void f_000061bc(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0061bc  mov dword ptr gs:[ebp + 0x320], eax
    X86_AT(c, 0x61bcu);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x320u)), c.r[0]);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x61bcu, "ran off the end of a function");
}
void f_000061c3(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0061c3  ret 
    X86_AT(c, 0x61c3u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x61c3u, "ran off the end of a function");
}
void f_00006343(X86Cpu& c) {
    X86_TICK(c, 19);
    // 006343  mov ebx, dword ptr gs:[ebp + 0x1d8]
    X86_AT(c, 0x6343u);
    c.r[3] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1D8u)));
    // 00634a  shld edx, ebx, 0x10
    X86_AT(c, 0x634au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00634e  cmp word ptr gs:[ebp + 0x28], bx
    X86_AT(c, 0x634eu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 006353  jg 0x63c5
    X86_AT(c, 0x6353u);
    if (x86_cc(c, 15)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 006355  cmp word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x6355u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00635a  jl 0x63c5
    X86_AT(c, 0x635au);
    if (x86_cc(c, 12)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 00635c  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x635cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 006361  jg 0x63c5
    X86_AT(c, 0x6361u);
    if (x86_cc(c, 15)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 006363  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x6363u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 006368  jl 0x63c5
    X86_AT(c, 0x6368u);
    if (x86_cc(c, 12)) { goto L_63c5; }
    X86_TICK(c, 55);
    // 00636a  movsx eax, dx
    X86_AT(c, 0x636au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 00636d  mov edi, eax
    X86_AT(c, 0x636du);
    c.r[7] = c.r[0];
    // 00636f  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x636fu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 006374  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x6374u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 006378  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x6378u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00637f  mov eax, ebx
    X86_AT(c, 0x637fu);
    c.r[0] = c.r[3];
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6343u, "ran off the end of a function");
}
void f_0000634a(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00634a  shld edx, ebx, 0x10
    X86_AT(c, 0x634au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[3], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00634e  cmp word ptr gs:[ebp + 0x28], bx
    X86_AT(c, 0x634eu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 006353  jg 0x63c5
    X86_AT(c, 0x6353u);
    if (x86_cc(c, 15)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 006355  cmp word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x6355u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00635a  jl 0x63c5
    X86_AT(c, 0x635au);
    if (x86_cc(c, 12)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 00635c  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x635cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 006361  jg 0x63c5
    X86_AT(c, 0x6361u);
    if (x86_cc(c, 15)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 006363  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x6363u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 006368  jl 0x63c5
    X86_AT(c, 0x6368u);
    if (x86_cc(c, 12)) { goto L_63c5; }
    X86_TICK(c, 55);
    // 00636a  movsx eax, dx
    X86_AT(c, 0x636au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 00636d  mov edi, eax
    X86_AT(c, 0x636du);
    c.r[7] = c.r[0];
    // 00636f  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x636fu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 006374  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x6374u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 006378  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x6378u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00637f  mov eax, ebx
    X86_AT(c, 0x637fu);
    c.r[0] = c.r[3];
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x634au, "ran off the end of a function");
}
void f_0000634e(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00634e  cmp word ptr gs:[ebp + 0x28], bx
    X86_AT(c, 0x634eu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x28u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 006353  jg 0x63c5
    X86_AT(c, 0x6353u);
    if (x86_cc(c, 15)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 006355  cmp word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x6355u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00635a  jl 0x63c5
    X86_AT(c, 0x635au);
    if (x86_cc(c, 12)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 00635c  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x635cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 006361  jg 0x63c5
    X86_AT(c, 0x6361u);
    if (x86_cc(c, 15)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 006363  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x6363u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 006368  jl 0x63c5
    X86_AT(c, 0x6368u);
    if (x86_cc(c, 12)) { goto L_63c5; }
    X86_TICK(c, 55);
    // 00636a  movsx eax, dx
    X86_AT(c, 0x636au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 00636d  mov edi, eax
    X86_AT(c, 0x636du);
    c.r[7] = c.r[0];
    // 00636f  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x636fu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 006374  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x6374u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 006378  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x6378u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00637f  mov eax, ebx
    X86_AT(c, 0x637fu);
    c.r[0] = c.r[3];
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x634eu, "ran off the end of a function");
}
void f_00006353(X86Cpu& c) {
    X86_TICK(c, 5);
    // 006353  jg 0x63c5
    X86_AT(c, 0x6353u);
    if (x86_cc(c, 15)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 006355  cmp word ptr gs:[ebp + 0x2c], bx
    X86_AT(c, 0x6355u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Cu))), (c.r[3] & 0xFFFFu), 0, 2);
    // 00635a  jl 0x63c5
    X86_AT(c, 0x635au);
    if (x86_cc(c, 12)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 00635c  cmp word ptr gs:[ebp + 0x2a], dx
    X86_AT(c, 0x635cu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Au))), (c.r[2] & 0xFFFFu), 0, 2);
    // 006361  jg 0x63c5
    X86_AT(c, 0x6361u);
    if (x86_cc(c, 15)) { goto L_63c5; }
    X86_TICK(c, 12);
    // 006363  cmp word ptr gs:[ebp + 0x2e], dx
    X86_AT(c, 0x6363u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x2Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 006368  jl 0x63c5
    X86_AT(c, 0x6368u);
    if (x86_cc(c, 12)) { goto L_63c5; }
    X86_TICK(c, 55);
    // 00636a  movsx eax, dx
    X86_AT(c, 0x636au);
    c.r[0] = (uint32_t)(int32_t)(int16_t)(c.r[2] & 0xFFFFu);
    // 00636d  mov edi, eax
    X86_AT(c, 0x636du);
    c.r[7] = c.r[0];
    // 00636f  imul eax, dword ptr gs:[ebp + 0x20]
    X86_AT(c, 0x636fu);
    c.r[0] = x86_imul2(c, c.r[0], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x20u))), 4);
    // 006374  add eax, dword ptr gs:[ebp]
    X86_AT(c, 0x6374u);
    { uint32_t v = c.r[0]; c.r[0] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5]))), 0, 4); }
    // 006378  mov dword ptr gs:[ebp + 0x1cc], eax
    X86_AT(c, 0x6378u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1CCu)), c.r[0]);
    // 00637f  mov eax, ebx
    X86_AT(c, 0x637fu);
    c.r[0] = c.r[3];
    // 006381  and eax, 0x1f
    X86_AT(c, 0x6381u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & 0x1Fu, 4); }
    // 006386  mov eax, dword ptr cs:[eax*4 + 0xbdb4]
    X86_AT(c, 0x6386u);
    c.r[0] = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0xBDB4u)));
    // 00638e  cmp byte ptr gs:[ebp + 0x10], 0
    X86_AT(c, 0x638eu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x0u, 0, 1);
    // 006393  je 0x63ba
    X86_AT(c, 0x6393u);
    if (x86_cc(c, 4)) { goto L_63ba; }
    X86_TICK(c, 48);
    // 006395  imul edi, dword ptr gs:[ebp + 0x1c]
    X86_AT(c, 0x6395u);
    c.r[7] = x86_imul2(c, c.r[7], rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x1Cu))), 4);
    // 00639a  add edi, dword ptr gs:[ebp + 8]
    X86_AT(c, 0x639au);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x8u))), 0, 4); }
    // 00639e  movsx esi, bx
    X86_AT(c, 0x639eu);
    c.r[6] = (uint32_t)(int32_t)(int16_t)(c.r[3] & 0xFFFFu);
    // 0063a1  sar esi, 3
    X86_AT(c, 0x63a1u);
    { uint32_t v = c.r[6]; bool w; uint32_t r = x86_shift(c, 7, v, 0x3u, 4, w); if (w) c.r[6] = r; }
    // 0063a4  and esi, 0xfffffffc
    X86_AT(c, 0x63a4u);
    { uint32_t v = c.r[6]; c.r[6] = x86_logic(c, v & 0xFFFFFFFCu, 4); }
    // 0063a7  cmp byte ptr gs:[ebp + 0x10], 1
    X86_AT(c, 0x63a7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x10u))), 0x1u, 0, 1);
    // 0063ac  jne 0x63b6
    X86_AT(c, 0x63acu);
    if (x86_cc(c, 5)) { goto L_63b6; }
    X86_TICK(c, 8);
    // 0063ae  mov ecx, dword ptr ss:[edi + esi*1]
    X86_AT(c, 0x63aeu);
    c.r[1] = rd32((c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])));
    // 0063b2  not ecx
    X86_AT(c, 0x63b2u);
    { uint32_t v = c.r[1]; c.r[1] = ~v & 0xFFFFFFFFu; }
    // 0063b4  and eax, ecx
    X86_AT(c, 0x63b4u);
    { uint32_t v = c.r[0]; c.r[0] = x86_logic(c, v & c.r[1], 4); }
L_63b6:
    X86_TICK(c, 7);
    // 0063b6  or dword ptr ss:[edi + esi*1], eax
    X86_AT(c, 0x63b6u);
    { uint32_t ea = (c.sbase[2] + (uint32_t)(c.r[7] + c.r[6])); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v | c.r[0], 4)); }
L_63ba:
    X86_TICK(c, 7);
    // 0063ba  test eax, eax
    X86_AT(c, 0x63bau);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0063bc  je 0x63c5
    X86_AT(c, 0x63bcu);
    if (x86_cc(c, 4)) { goto L_63c5; }
    X86_TICK(c, 7);
    // 0063be  jmp dword ptr gs:[ebp + 0x314]
    X86_AT(c, 0x63beu);
    x86_jump(c, rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x314u)))); return;
L_63c5:
    X86_TICK(c, 10);
    // 0063c5  ret 
    X86_AT(c, 0x63c5u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6353u, "ran off the end of a function");
}
}

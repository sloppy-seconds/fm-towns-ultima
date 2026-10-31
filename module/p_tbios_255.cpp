#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000d35d(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00d35d  neg dx
    X86_AT(c, 0xd35du);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d360  neg ax
    X86_AT(c, 0xd360u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d363  call 0xd508
    X86_AT(c, 0xd363u);
    push32(c, 0xd368u); f_0000d508(c); X86_RET(c, 0xd368u);
    X86_TICK(c, 12);
    // 00d368  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd368u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d370  jne 0xd4b0
    X86_AT(c, 0xd370u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 7);
    // 00d376  cmp si, 2
    X86_AT(c, 0xd376u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d37a  jb 0xd413
    X86_AT(c, 0xd37au);
    if (x86_cc(c, 2)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d380  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xd380u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00d388  jne 0xd3cf
    X86_AT(c, 0xd388u);
    if (x86_cc(c, 5)) { goto L_d3cf; }
    X86_TICK(c, 19);
    // 00d38a  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd38au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d391  shld eax, edx, 0x10
    X86_AT(c, 0xd391u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d395  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd395u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d39d  jne 0xd3c8
    X86_AT(c, 0xd39du);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 12);
    // 00d39f  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd39fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d3a8  je 0xd3c8
    X86_AT(c, 0xd3a8u);
    if (x86_cc(c, 4)) { goto L_d3c8; }
    X86_TICK(c, 15);
    // 00d3aa  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd3aau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d3cf:
    X86_TICK(c, 12);
    // 00d3cf  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd3cfu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d3d7  jne 0xd413
    X86_AT(c, 0xd3d7u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3d9  test byte ptr gs:[ebp + esi*1 + 0x498], 1
    X86_AT(c, 0xd3d9u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x1u, 1);
    // 00d3e2  jne 0xd413
    X86_AT(c, 0xd3e2u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3e4  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd3e4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d3ec  je 0xd413
    X86_AT(c, 0xd3ecu);
    if (x86_cc(c, 4)) { goto L_d413; }
    X86_TICK(c, 15);
    // 00d3ee  mov dx, word ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd3eeu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u))));
    // 00d3f6  mov ax, word ptr gs:[ebp + 0x472]
    X86_AT(c, 0xd3f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))));
    // 00d3fe  cmp si, 2
    X86_AT(c, 0xd3feu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d402  jne 0xd409
    X86_AT(c, 0xd402u);
    if (x86_cc(c, 5)) { goto L_d409; }
    X86_TICK(c, 5);
    // 00d404  neg ax
    X86_AT(c, 0xd404u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d407  xchg dx, ax
    X86_AT(c, 0xd407u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_d409:
    X86_TICK(c, 7);
    // 00d409  call 0xd508
    X86_AT(c, 0xd409u);
    push32(c, 0xd40eu); f_0000d508(c); X86_RET(c, 0xd40eu);
    X86_TICK(c, 7);
    // 00d40e  call 0xd508
    X86_AT(c, 0xd40eu);
    push32(c, 0xd413u); f_0000d508(c); X86_RET(c, 0xd413u);
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd35du, "ran off the end of a function");
}
void f_0000d360(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00d360  neg ax
    X86_AT(c, 0xd360u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d363  call 0xd508
    X86_AT(c, 0xd363u);
    push32(c, 0xd368u); f_0000d508(c); X86_RET(c, 0xd368u);
    X86_TICK(c, 12);
    // 00d368  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd368u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d370  jne 0xd4b0
    X86_AT(c, 0xd370u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 7);
    // 00d376  cmp si, 2
    X86_AT(c, 0xd376u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d37a  jb 0xd413
    X86_AT(c, 0xd37au);
    if (x86_cc(c, 2)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d380  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xd380u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00d388  jne 0xd3cf
    X86_AT(c, 0xd388u);
    if (x86_cc(c, 5)) { goto L_d3cf; }
    X86_TICK(c, 19);
    // 00d38a  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd38au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d391  shld eax, edx, 0x10
    X86_AT(c, 0xd391u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d395  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd395u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d39d  jne 0xd3c8
    X86_AT(c, 0xd39du);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 12);
    // 00d39f  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd39fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d3a8  je 0xd3c8
    X86_AT(c, 0xd3a8u);
    if (x86_cc(c, 4)) { goto L_d3c8; }
    X86_TICK(c, 15);
    // 00d3aa  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd3aau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d3cf:
    X86_TICK(c, 12);
    // 00d3cf  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd3cfu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d3d7  jne 0xd413
    X86_AT(c, 0xd3d7u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3d9  test byte ptr gs:[ebp + esi*1 + 0x498], 1
    X86_AT(c, 0xd3d9u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x1u, 1);
    // 00d3e2  jne 0xd413
    X86_AT(c, 0xd3e2u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3e4  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd3e4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d3ec  je 0xd413
    X86_AT(c, 0xd3ecu);
    if (x86_cc(c, 4)) { goto L_d413; }
    X86_TICK(c, 15);
    // 00d3ee  mov dx, word ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd3eeu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u))));
    // 00d3f6  mov ax, word ptr gs:[ebp + 0x472]
    X86_AT(c, 0xd3f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))));
    // 00d3fe  cmp si, 2
    X86_AT(c, 0xd3feu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d402  jne 0xd409
    X86_AT(c, 0xd402u);
    if (x86_cc(c, 5)) { goto L_d409; }
    X86_TICK(c, 5);
    // 00d404  neg ax
    X86_AT(c, 0xd404u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d407  xchg dx, ax
    X86_AT(c, 0xd407u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_d409:
    X86_TICK(c, 7);
    // 00d409  call 0xd508
    X86_AT(c, 0xd409u);
    push32(c, 0xd40eu); f_0000d508(c); X86_RET(c, 0xd40eu);
    X86_TICK(c, 7);
    // 00d40e  call 0xd508
    X86_AT(c, 0xd40eu);
    push32(c, 0xd413u); f_0000d508(c); X86_RET(c, 0xd413u);
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd360u, "ran off the end of a function");
}
void f_0000d363(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d363  call 0xd508
    X86_AT(c, 0xd363u);
    push32(c, 0xd368u); f_0000d508(c); X86_RET(c, 0xd368u);
    X86_TICK(c, 12);
    // 00d368  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd368u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d370  jne 0xd4b0
    X86_AT(c, 0xd370u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 7);
    // 00d376  cmp si, 2
    X86_AT(c, 0xd376u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d37a  jb 0xd413
    X86_AT(c, 0xd37au);
    if (x86_cc(c, 2)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d380  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xd380u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00d388  jne 0xd3cf
    X86_AT(c, 0xd388u);
    if (x86_cc(c, 5)) { goto L_d3cf; }
    X86_TICK(c, 19);
    // 00d38a  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd38au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d391  shld eax, edx, 0x10
    X86_AT(c, 0xd391u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d395  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd395u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d39d  jne 0xd3c8
    X86_AT(c, 0xd39du);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 12);
    // 00d39f  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd39fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d3a8  je 0xd3c8
    X86_AT(c, 0xd3a8u);
    if (x86_cc(c, 4)) { goto L_d3c8; }
    X86_TICK(c, 15);
    // 00d3aa  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd3aau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d3cf:
    X86_TICK(c, 12);
    // 00d3cf  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd3cfu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d3d7  jne 0xd413
    X86_AT(c, 0xd3d7u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3d9  test byte ptr gs:[ebp + esi*1 + 0x498], 1
    X86_AT(c, 0xd3d9u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x1u, 1);
    // 00d3e2  jne 0xd413
    X86_AT(c, 0xd3e2u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3e4  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd3e4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d3ec  je 0xd413
    X86_AT(c, 0xd3ecu);
    if (x86_cc(c, 4)) { goto L_d413; }
    X86_TICK(c, 15);
    // 00d3ee  mov dx, word ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd3eeu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u))));
    // 00d3f6  mov ax, word ptr gs:[ebp + 0x472]
    X86_AT(c, 0xd3f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))));
    // 00d3fe  cmp si, 2
    X86_AT(c, 0xd3feu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d402  jne 0xd409
    X86_AT(c, 0xd402u);
    if (x86_cc(c, 5)) { goto L_d409; }
    X86_TICK(c, 5);
    // 00d404  neg ax
    X86_AT(c, 0xd404u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d407  xchg dx, ax
    X86_AT(c, 0xd407u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_d409:
    X86_TICK(c, 7);
    // 00d409  call 0xd508
    X86_AT(c, 0xd409u);
    push32(c, 0xd40eu); f_0000d508(c); X86_RET(c, 0xd40eu);
    X86_TICK(c, 7);
    // 00d40e  call 0xd508
    X86_AT(c, 0xd40eu);
    push32(c, 0xd413u); f_0000d508(c); X86_RET(c, 0xd413u);
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd363u, "ran off the end of a function");
}
void f_0000d368(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d368  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd368u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d370  jne 0xd4b0
    X86_AT(c, 0xd370u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 7);
    // 00d376  cmp si, 2
    X86_AT(c, 0xd376u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d37a  jb 0xd413
    X86_AT(c, 0xd37au);
    if (x86_cc(c, 2)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d380  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xd380u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00d388  jne 0xd3cf
    X86_AT(c, 0xd388u);
    if (x86_cc(c, 5)) { goto L_d3cf; }
    X86_TICK(c, 19);
    // 00d38a  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd38au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d391  shld eax, edx, 0x10
    X86_AT(c, 0xd391u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d395  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd395u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d39d  jne 0xd3c8
    X86_AT(c, 0xd39du);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 12);
    // 00d39f  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd39fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d3a8  je 0xd3c8
    X86_AT(c, 0xd3a8u);
    if (x86_cc(c, 4)) { goto L_d3c8; }
    X86_TICK(c, 15);
    // 00d3aa  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd3aau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d3cf:
    X86_TICK(c, 12);
    // 00d3cf  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd3cfu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d3d7  jne 0xd413
    X86_AT(c, 0xd3d7u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3d9  test byte ptr gs:[ebp + esi*1 + 0x498], 1
    X86_AT(c, 0xd3d9u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x1u, 1);
    // 00d3e2  jne 0xd413
    X86_AT(c, 0xd3e2u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3e4  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd3e4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d3ec  je 0xd413
    X86_AT(c, 0xd3ecu);
    if (x86_cc(c, 4)) { goto L_d413; }
    X86_TICK(c, 15);
    // 00d3ee  mov dx, word ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd3eeu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u))));
    // 00d3f6  mov ax, word ptr gs:[ebp + 0x472]
    X86_AT(c, 0xd3f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))));
    // 00d3fe  cmp si, 2
    X86_AT(c, 0xd3feu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d402  jne 0xd409
    X86_AT(c, 0xd402u);
    if (x86_cc(c, 5)) { goto L_d409; }
    X86_TICK(c, 5);
    // 00d404  neg ax
    X86_AT(c, 0xd404u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d407  xchg dx, ax
    X86_AT(c, 0xd407u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_d409:
    X86_TICK(c, 7);
    // 00d409  call 0xd508
    X86_AT(c, 0xd409u);
    push32(c, 0xd40eu); f_0000d508(c); X86_RET(c, 0xd40eu);
    X86_TICK(c, 7);
    // 00d40e  call 0xd508
    X86_AT(c, 0xd40eu);
    push32(c, 0xd413u); f_0000d508(c); X86_RET(c, 0xd413u);
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd368u, "ran off the end of a function");
}
void f_0000d370(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d370  jne 0xd4b0
    X86_AT(c, 0xd370u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 7);
    // 00d376  cmp si, 2
    X86_AT(c, 0xd376u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d37a  jb 0xd413
    X86_AT(c, 0xd37au);
    if (x86_cc(c, 2)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d380  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xd380u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00d388  jne 0xd3cf
    X86_AT(c, 0xd388u);
    if (x86_cc(c, 5)) { goto L_d3cf; }
    X86_TICK(c, 19);
    // 00d38a  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd38au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d391  shld eax, edx, 0x10
    X86_AT(c, 0xd391u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d395  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd395u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d39d  jne 0xd3c8
    X86_AT(c, 0xd39du);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 12);
    // 00d39f  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd39fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d3a8  je 0xd3c8
    X86_AT(c, 0xd3a8u);
    if (x86_cc(c, 4)) { goto L_d3c8; }
    X86_TICK(c, 15);
    // 00d3aa  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd3aau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d3cf:
    X86_TICK(c, 12);
    // 00d3cf  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd3cfu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d3d7  jne 0xd413
    X86_AT(c, 0xd3d7u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3d9  test byte ptr gs:[ebp + esi*1 + 0x498], 1
    X86_AT(c, 0xd3d9u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x1u, 1);
    // 00d3e2  jne 0xd413
    X86_AT(c, 0xd3e2u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3e4  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd3e4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d3ec  je 0xd413
    X86_AT(c, 0xd3ecu);
    if (x86_cc(c, 4)) { goto L_d413; }
    X86_TICK(c, 15);
    // 00d3ee  mov dx, word ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd3eeu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u))));
    // 00d3f6  mov ax, word ptr gs:[ebp + 0x472]
    X86_AT(c, 0xd3f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))));
    // 00d3fe  cmp si, 2
    X86_AT(c, 0xd3feu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d402  jne 0xd409
    X86_AT(c, 0xd402u);
    if (x86_cc(c, 5)) { goto L_d409; }
    X86_TICK(c, 5);
    // 00d404  neg ax
    X86_AT(c, 0xd404u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d407  xchg dx, ax
    X86_AT(c, 0xd407u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_d409:
    X86_TICK(c, 7);
    // 00d409  call 0xd508
    X86_AT(c, 0xd409u);
    push32(c, 0xd40eu); f_0000d508(c); X86_RET(c, 0xd40eu);
    X86_TICK(c, 7);
    // 00d40e  call 0xd508
    X86_AT(c, 0xd40eu);
    push32(c, 0xd413u); f_0000d508(c); X86_RET(c, 0xd413u);
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd370u, "ran off the end of a function");
}
void f_0000d376(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d376  cmp si, 2
    X86_AT(c, 0xd376u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d37a  jb 0xd413
    X86_AT(c, 0xd37au);
    if (x86_cc(c, 2)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d380  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xd380u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00d388  jne 0xd3cf
    X86_AT(c, 0xd388u);
    if (x86_cc(c, 5)) { goto L_d3cf; }
    X86_TICK(c, 19);
    // 00d38a  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd38au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d391  shld eax, edx, 0x10
    X86_AT(c, 0xd391u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d395  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd395u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d39d  jne 0xd3c8
    X86_AT(c, 0xd39du);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 12);
    // 00d39f  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd39fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d3a8  je 0xd3c8
    X86_AT(c, 0xd3a8u);
    if (x86_cc(c, 4)) { goto L_d3c8; }
    X86_TICK(c, 15);
    // 00d3aa  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd3aau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d3cf:
    X86_TICK(c, 12);
    // 00d3cf  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd3cfu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d3d7  jne 0xd413
    X86_AT(c, 0xd3d7u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3d9  test byte ptr gs:[ebp + esi*1 + 0x498], 1
    X86_AT(c, 0xd3d9u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x1u, 1);
    // 00d3e2  jne 0xd413
    X86_AT(c, 0xd3e2u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3e4  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd3e4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d3ec  je 0xd413
    X86_AT(c, 0xd3ecu);
    if (x86_cc(c, 4)) { goto L_d413; }
    X86_TICK(c, 15);
    // 00d3ee  mov dx, word ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd3eeu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u))));
    // 00d3f6  mov ax, word ptr gs:[ebp + 0x472]
    X86_AT(c, 0xd3f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))));
    // 00d3fe  cmp si, 2
    X86_AT(c, 0xd3feu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d402  jne 0xd409
    X86_AT(c, 0xd402u);
    if (x86_cc(c, 5)) { goto L_d409; }
    X86_TICK(c, 5);
    // 00d404  neg ax
    X86_AT(c, 0xd404u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d407  xchg dx, ax
    X86_AT(c, 0xd407u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_d409:
    X86_TICK(c, 7);
    // 00d409  call 0xd508
    X86_AT(c, 0xd409u);
    push32(c, 0xd40eu); f_0000d508(c); X86_RET(c, 0xd40eu);
    X86_TICK(c, 7);
    // 00d40e  call 0xd508
    X86_AT(c, 0xd40eu);
    push32(c, 0xd413u); f_0000d508(c); X86_RET(c, 0xd413u);
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd376u, "ran off the end of a function");
}
void f_0000d37a(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d37a  jb 0xd413
    X86_AT(c, 0xd37au);
    if (x86_cc(c, 2)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d380  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xd380u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00d388  jne 0xd3cf
    X86_AT(c, 0xd388u);
    if (x86_cc(c, 5)) { goto L_d3cf; }
    X86_TICK(c, 19);
    // 00d38a  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd38au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d391  shld eax, edx, 0x10
    X86_AT(c, 0xd391u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d395  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd395u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d39d  jne 0xd3c8
    X86_AT(c, 0xd39du);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 12);
    // 00d39f  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd39fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d3a8  je 0xd3c8
    X86_AT(c, 0xd3a8u);
    if (x86_cc(c, 4)) { goto L_d3c8; }
    X86_TICK(c, 15);
    // 00d3aa  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd3aau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d3cf:
    X86_TICK(c, 12);
    // 00d3cf  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd3cfu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d3d7  jne 0xd413
    X86_AT(c, 0xd3d7u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3d9  test byte ptr gs:[ebp + esi*1 + 0x498], 1
    X86_AT(c, 0xd3d9u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x1u, 1);
    // 00d3e2  jne 0xd413
    X86_AT(c, 0xd3e2u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3e4  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd3e4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d3ec  je 0xd413
    X86_AT(c, 0xd3ecu);
    if (x86_cc(c, 4)) { goto L_d413; }
    X86_TICK(c, 15);
    // 00d3ee  mov dx, word ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd3eeu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u))));
    // 00d3f6  mov ax, word ptr gs:[ebp + 0x472]
    X86_AT(c, 0xd3f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))));
    // 00d3fe  cmp si, 2
    X86_AT(c, 0xd3feu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d402  jne 0xd409
    X86_AT(c, 0xd402u);
    if (x86_cc(c, 5)) { goto L_d409; }
    X86_TICK(c, 5);
    // 00d404  neg ax
    X86_AT(c, 0xd404u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d407  xchg dx, ax
    X86_AT(c, 0xd407u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_d409:
    X86_TICK(c, 7);
    // 00d409  call 0xd508
    X86_AT(c, 0xd409u);
    push32(c, 0xd40eu); f_0000d508(c); X86_RET(c, 0xd40eu);
    X86_TICK(c, 7);
    // 00d40e  call 0xd508
    X86_AT(c, 0xd40eu);
    push32(c, 0xd413u); f_0000d508(c); X86_RET(c, 0xd413u);
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd37au, "ran off the end of a function");
}
void f_0000d380(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d380  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xd380u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00d388  jne 0xd3cf
    X86_AT(c, 0xd388u);
    if (x86_cc(c, 5)) { goto L_d3cf; }
    X86_TICK(c, 19);
    // 00d38a  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd38au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d391  shld eax, edx, 0x10
    X86_AT(c, 0xd391u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d395  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd395u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d39d  jne 0xd3c8
    X86_AT(c, 0xd39du);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 12);
    // 00d39f  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd39fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d3a8  je 0xd3c8
    X86_AT(c, 0xd3a8u);
    if (x86_cc(c, 4)) { goto L_d3c8; }
    X86_TICK(c, 15);
    // 00d3aa  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd3aau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d3cf:
    X86_TICK(c, 12);
    // 00d3cf  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd3cfu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d3d7  jne 0xd413
    X86_AT(c, 0xd3d7u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3d9  test byte ptr gs:[ebp + esi*1 + 0x498], 1
    X86_AT(c, 0xd3d9u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x1u, 1);
    // 00d3e2  jne 0xd413
    X86_AT(c, 0xd3e2u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3e4  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd3e4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d3ec  je 0xd413
    X86_AT(c, 0xd3ecu);
    if (x86_cc(c, 4)) { goto L_d413; }
    X86_TICK(c, 15);
    // 00d3ee  mov dx, word ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd3eeu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u))));
    // 00d3f6  mov ax, word ptr gs:[ebp + 0x472]
    X86_AT(c, 0xd3f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))));
    // 00d3fe  cmp si, 2
    X86_AT(c, 0xd3feu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d402  jne 0xd409
    X86_AT(c, 0xd402u);
    if (x86_cc(c, 5)) { goto L_d409; }
    X86_TICK(c, 5);
    // 00d404  neg ax
    X86_AT(c, 0xd404u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d407  xchg dx, ax
    X86_AT(c, 0xd407u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_d409:
    X86_TICK(c, 7);
    // 00d409  call 0xd508
    X86_AT(c, 0xd409u);
    push32(c, 0xd40eu); f_0000d508(c); X86_RET(c, 0xd40eu);
    X86_TICK(c, 7);
    // 00d40e  call 0xd508
    X86_AT(c, 0xd40eu);
    push32(c, 0xd413u); f_0000d508(c); X86_RET(c, 0xd413u);
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd380u, "ran off the end of a function");
}
void f_0000d388(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d388  jne 0xd3cf
    X86_AT(c, 0xd388u);
    if (x86_cc(c, 5)) { goto L_d3cf; }
    X86_TICK(c, 19);
    // 00d38a  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd38au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d391  shld eax, edx, 0x10
    X86_AT(c, 0xd391u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d395  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd395u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d39d  jne 0xd3c8
    X86_AT(c, 0xd39du);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 12);
    // 00d39f  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd39fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d3a8  je 0xd3c8
    X86_AT(c, 0xd3a8u);
    if (x86_cc(c, 4)) { goto L_d3c8; }
    X86_TICK(c, 15);
    // 00d3aa  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd3aau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d3cf:
    X86_TICK(c, 12);
    // 00d3cf  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd3cfu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d3d7  jne 0xd413
    X86_AT(c, 0xd3d7u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3d9  test byte ptr gs:[ebp + esi*1 + 0x498], 1
    X86_AT(c, 0xd3d9u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x1u, 1);
    // 00d3e2  jne 0xd413
    X86_AT(c, 0xd3e2u);
    if (x86_cc(c, 5)) { goto L_d413; }
    X86_TICK(c, 12);
    // 00d3e4  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd3e4u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d3ec  je 0xd413
    X86_AT(c, 0xd3ecu);
    if (x86_cc(c, 4)) { goto L_d413; }
    X86_TICK(c, 15);
    // 00d3ee  mov dx, word ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd3eeu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u))));
    // 00d3f6  mov ax, word ptr gs:[ebp + 0x472]
    X86_AT(c, 0xd3f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))));
    // 00d3fe  cmp si, 2
    X86_AT(c, 0xd3feu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d402  jne 0xd409
    X86_AT(c, 0xd402u);
    if (x86_cc(c, 5)) { goto L_d409; }
    X86_TICK(c, 5);
    // 00d404  neg ax
    X86_AT(c, 0xd404u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d407  xchg dx, ax
    X86_AT(c, 0xd407u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_d409:
    X86_TICK(c, 7);
    // 00d409  call 0xd508
    X86_AT(c, 0xd409u);
    push32(c, 0xd40eu); f_0000d508(c); X86_RET(c, 0xd40eu);
    X86_TICK(c, 7);
    // 00d40e  call 0xd508
    X86_AT(c, 0xd40eu);
    push32(c, 0xd413u); f_0000d508(c); X86_RET(c, 0xd413u);
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd388u, "ran off the end of a function");
}
void f_0000d38a(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00d38a  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd38au);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d391  shld eax, edx, 0x10
    X86_AT(c, 0xd391u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d395  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd395u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d39d  jne 0xd3c8
    X86_AT(c, 0xd39du);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 12);
    // 00d39f  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd39fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d3a8  je 0xd3c8
    X86_AT(c, 0xd3a8u);
    if (x86_cc(c, 4)) { goto L_d3c8; }
    X86_TICK(c, 15);
    // 00d3aa  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd3aau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd38au, "ran off the end of a function");
}
void f_0000d391(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00d391  shld eax, edx, 0x10
    X86_AT(c, 0xd391u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d395  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd395u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d39d  jne 0xd3c8
    X86_AT(c, 0xd39du);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 12);
    // 00d39f  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd39fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d3a8  je 0xd3c8
    X86_AT(c, 0xd3a8u);
    if (x86_cc(c, 4)) { goto L_d3c8; }
    X86_TICK(c, 15);
    // 00d3aa  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd3aau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd391u, "ran off the end of a function");
}
void f_0000d395(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d395  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd395u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d39d  jne 0xd3c8
    X86_AT(c, 0xd39du);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 12);
    // 00d39f  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd39fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d3a8  je 0xd3c8
    X86_AT(c, 0xd3a8u);
    if (x86_cc(c, 4)) { goto L_d3c8; }
    X86_TICK(c, 15);
    // 00d3aa  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd3aau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd395u, "ran off the end of a function");
}
void f_0000d39d(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d39d  jne 0xd3c8
    X86_AT(c, 0xd39du);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 12);
    // 00d39f  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd39fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d3a8  je 0xd3c8
    X86_AT(c, 0xd3a8u);
    if (x86_cc(c, 4)) { goto L_d3c8; }
    X86_TICK(c, 15);
    // 00d3aa  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd3aau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd39du, "ran off the end of a function");
}
void f_0000d39f(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d39f  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd39fu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d3a8  je 0xd3c8
    X86_AT(c, 0xd3a8u);
    if (x86_cc(c, 4)) { goto L_d3c8; }
    X86_TICK(c, 15);
    // 00d3aa  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd3aau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd39fu, "ran off the end of a function");
}
void f_0000d3a8(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d3a8  je 0xd3c8
    X86_AT(c, 0xd3a8u);
    if (x86_cc(c, 4)) { goto L_d3c8; }
    X86_TICK(c, 15);
    // 00d3aa  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd3aau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3a8u, "ran off the end of a function");
}
void f_0000d3aa(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00d3aa  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd3aau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3aau, "ran off the end of a function");
}
void f_0000d3b2(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00d3b2  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd3b2u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3b2u, "ran off the end of a function");
}
void f_0000d3ba(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d3ba  cmp si, 2
    X86_AT(c, 0xd3bau);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3bau, "ran off the end of a function");
}
void f_0000d3be(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d3be  jne 0xd3c8
    X86_AT(c, 0xd3beu);
    if (x86_cc(c, 5)) { goto L_d3c8; }
    X86_TICK(c, 7);
    // 00d3c0  xchg dx, ax
    X86_AT(c, 0xd3c0u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d3c2  neg dx
    X86_AT(c, 0xd3c2u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d3c5  neg ax
    X86_AT(c, 0xd3c5u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d3c8:
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3beu, "ran off the end of a function");
}
void f_0000d3c8(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d3c8  call 0xd508
    X86_AT(c, 0xd3c8u);
    push32(c, 0xd3cdu); f_0000d508(c); X86_RET(c, 0xd3cdu);
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3c8u, "ran off the end of a function");
}
void f_0000d3cd(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d3cd  jmp 0xd413
    X86_AT(c, 0xd3cdu);
    goto L_d413;
L_d413:
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd3cdu, "ran off the end of a function");
}
void f_0000d413(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d413  cmp di, 2
    X86_AT(c, 0xd413u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd413u, "ran off the end of a function");
}
void f_0000d417(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d417  jb 0xd4b0
    X86_AT(c, 0xd417u);
    if (x86_cc(c, 2)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd417u, "ran off the end of a function");
}
void f_0000d41d(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d41d  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd41du);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd41du, "ran off the end of a function");
}
void f_0000d425(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d425  jne 0xd46c
    X86_AT(c, 0xd425u);
    if (x86_cc(c, 5)) { goto L_d46c; }
    X86_TICK(c, 19);
    // 00d427  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd427u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d42e  shld eax, edx, 0x10
    X86_AT(c, 0xd42eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d432  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd432u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d43a  jne 0xd465
    X86_AT(c, 0xd43au);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 12);
    // 00d43c  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd43cu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d445  je 0xd465
    X86_AT(c, 0xd445u);
    if (x86_cc(c, 4)) { goto L_d465; }
    X86_TICK(c, 15);
    // 00d447  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd447u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d44f  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd44fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d457  cmp di, 2
    X86_AT(c, 0xd457u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d45b  jne 0xd465
    X86_AT(c, 0xd45bu);
    if (x86_cc(c, 5)) { goto L_d465; }
    X86_TICK(c, 7);
    // 00d45d  xchg dx, ax
    X86_AT(c, 0xd45du);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d45f  neg dx
    X86_AT(c, 0xd45fu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d462  neg ax
    X86_AT(c, 0xd462u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d465:
    X86_TICK(c, 7);
    // 00d465  call 0xd508
    X86_AT(c, 0xd465u);
    push32(c, 0xd46au); f_0000d508(c); X86_RET(c, 0xd46au);
    X86_TICK(c, 7);
    // 00d46a  jmp 0xd4b0
    X86_AT(c, 0xd46au);
    goto L_d4b0;
L_d46c:
    X86_TICK(c, 12);
    // 00d46c  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd46cu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d474  jne 0xd4b0
    X86_AT(c, 0xd474u);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d476  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd476u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d47f  jne 0xd4b0
    X86_AT(c, 0xd47fu);
    if (x86_cc(c, 5)) { goto L_d4b0; }
    X86_TICK(c, 12);
    // 00d481  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd481u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d489  je 0xd4b0
    X86_AT(c, 0xd489u);
    if (x86_cc(c, 4)) { goto L_d4b0; }
    X86_TICK(c, 16);
    // 00d48b  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd48bu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d492  shld eax, edx, 0x10
    X86_AT(c, 0xd492u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d496  inc dx
    X86_AT(c, 0xd496u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d498  cmp di, 2
    X86_AT(c, 0xd498u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d49c  jne 0xd4a6
    X86_AT(c, 0xd49cu);
    if (x86_cc(c, 5)) { goto L_d4a6; }
    X86_TICK(c, 7);
    // 00d49e  xchg dx, ax
    X86_AT(c, 0xd49eu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d4a0  neg dx
    X86_AT(c, 0xd4a0u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d4a3  neg ax
    X86_AT(c, 0xd4a3u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d4a6:
    X86_TICK(c, 7);
    // 00d4a6  call 0xd508
    X86_AT(c, 0xd4a6u);
    push32(c, 0xd4abu); f_0000d508(c); X86_RET(c, 0xd4abu);
    X86_TICK(c, 7);
    // 00d4ab  call 0xd508
    X86_AT(c, 0xd4abu);
    push32(c, 0xd4b0u); f_0000d508(c); X86_RET(c, 0xd4b0u);
L_d4b0:
    X86_TICK(c, 12);
    // 00d4b0  cmp byte ptr gs:[ebp + 0x497], 0
    X86_AT(c, 0xd4b0u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x497u))), 0x0u, 0, 1);
    // 00d4b8  je 0xd4ec
    X86_AT(c, 0xd4b8u);
    if (x86_cc(c, 4)) { goto L_d4ec; }
    X86_TICK(c, 19);
    // 00d4ba  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd4bau);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d4c1  shld eax, edx, 0x10
    X86_AT(c, 0xd4c1u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d4c5  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd4c5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d4cd  jne 0xd4e7
    X86_AT(c, 0xd4cdu);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 7);
    // 00d4cf  cmp di, 3
    X86_AT(c, 0xd4cfu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x3u, 0, 2);
    // 00d4d3  jne 0xd4e7
    X86_AT(c, 0xd4d3u);
    if (x86_cc(c, 5)) { goto L_d4e7; }
    X86_TICK(c, 12);
    // 00d4d5  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd4d5u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d4dd  je 0xd4e7
    X86_AT(c, 0xd4ddu);
    if (x86_cc(c, 4)) { goto L_d4e7; }
    X86_TICK(c, 4);
    // 00d4df  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd4dfu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
L_d4e7:
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
L_d4ec:
    X86_TICK(c, 15);
    // 00d4ec  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd4ecu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d4f4  neg ax
    X86_AT(c, 0xd4f4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d4f7  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd4f7u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd425u, "ran off the end of a function");
}
}

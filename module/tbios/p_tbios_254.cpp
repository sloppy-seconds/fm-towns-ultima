#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000d1f1(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d1f1  test byte ptr gs:[ebp + esi*1 + 0x498], 1
    X86_AT(c, 0xd1f1u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x1u, 1);
    // 00d1fa  jne 0xd22b
    X86_AT(c, 0xd1fau);
    if (x86_cc(c, 5)) { goto L_d22b; }
    X86_TICK(c, 12);
    // 00d1fc  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd1fcu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d204  je 0xd22b
    X86_AT(c, 0xd204u);
    if (x86_cc(c, 4)) { goto L_d22b; }
    X86_TICK(c, 15);
    // 00d206  mov dx, word ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd206u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u))));
    // 00d20e  mov ax, word ptr gs:[ebp + 0x472]
    X86_AT(c, 0xd20eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))));
    // 00d216  cmp si, 1
    X86_AT(c, 0xd216u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d21a  jne 0xd221
    X86_AT(c, 0xd21au);
    if (x86_cc(c, 5)) { goto L_d221; }
    X86_TICK(c, 5);
    // 00d21c  neg ax
    X86_AT(c, 0xd21cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d21f  xchg dx, ax
    X86_AT(c, 0xd21fu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_d221:
    X86_TICK(c, 7);
    // 00d221  call 0xd508
    X86_AT(c, 0xd221u);
    push32(c, 0xd226u); f_0000d508(c); X86_RET(c, 0xd226u);
    X86_TICK(c, 7);
    // 00d226  call 0xd508
    X86_AT(c, 0xd226u);
    push32(c, 0xd22bu); f_0000d508(c); X86_RET(c, 0xd22bu);
L_d22b:
    X86_TICK(c, 7);
    // 00d22b  cmp di, 2
    X86_AT(c, 0xd22bu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d22f  jae 0xd2c8
    X86_AT(c, 0xd22fu);
    if (x86_cc(c, 3)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d235  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd235u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d23d  jne 0xd284
    X86_AT(c, 0xd23du);
    if (x86_cc(c, 5)) { goto L_d284; }
    X86_TICK(c, 19);
    // 00d23f  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd23fu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d246  shld eax, edx, 0x10
    X86_AT(c, 0xd246u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d24a  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd24au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d252  jne 0xd27d
    X86_AT(c, 0xd252u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 12);
    // 00d254  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd254u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d25d  je 0xd27d
    X86_AT(c, 0xd25du);
    if (x86_cc(c, 4)) { goto L_d27d; }
    X86_TICK(c, 15);
    // 00d25f  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd25fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d267  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd267u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d26f  cmp di, 1
    X86_AT(c, 0xd26fu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d273  jne 0xd27d
    X86_AT(c, 0xd273u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 7);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d27d:
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d284:
    X86_TICK(c, 12);
    // 00d284  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd284u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d28c  jne 0xd2c8
    X86_AT(c, 0xd28cu);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d28e  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd28eu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d297  jne 0xd2c8
    X86_AT(c, 0xd297u);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d299  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd299u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d2a1  je 0xd2c8
    X86_AT(c, 0xd2a1u);
    if (x86_cc(c, 4)) { goto L_d2c8; }
    X86_TICK(c, 16);
    // 00d2a3  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2a3u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2aa  shld eax, edx, 0x10
    X86_AT(c, 0xd2aau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2ae  inc dx
    X86_AT(c, 0xd2aeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d2b0  cmp di, 1
    X86_AT(c, 0xd2b0u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d2b4  jne 0xd2be
    X86_AT(c, 0xd2b4u);
    if (x86_cc(c, 5)) { goto L_d2be; }
    X86_TICK(c, 7);
    // 00d2b6  xchg dx, ax
    X86_AT(c, 0xd2b6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d2b8  neg dx
    X86_AT(c, 0xd2b8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d2bb  neg ax
    X86_AT(c, 0xd2bbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d2be:
    X86_TICK(c, 7);
    // 00d2be  call 0xd508
    X86_AT(c, 0xd2beu);
    push32(c, 0xd2c3u); f_0000d508(c); X86_RET(c, 0xd2c3u);
    X86_TICK(c, 7);
    // 00d2c3  call 0xd508
    X86_AT(c, 0xd2c3u);
    push32(c, 0xd2c8u); f_0000d508(c); X86_RET(c, 0xd2c8u);
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1f1u, "ran off the end of a function");
}
void f_0000d1fa(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d1fa  jne 0xd22b
    X86_AT(c, 0xd1fau);
    if (x86_cc(c, 5)) { goto L_d22b; }
    X86_TICK(c, 12);
    // 00d1fc  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd1fcu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d204  je 0xd22b
    X86_AT(c, 0xd204u);
    if (x86_cc(c, 4)) { goto L_d22b; }
    X86_TICK(c, 15);
    // 00d206  mov dx, word ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd206u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u))));
    // 00d20e  mov ax, word ptr gs:[ebp + 0x472]
    X86_AT(c, 0xd20eu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x472u))));
    // 00d216  cmp si, 1
    X86_AT(c, 0xd216u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d21a  jne 0xd221
    X86_AT(c, 0xd21au);
    if (x86_cc(c, 5)) { goto L_d221; }
    X86_TICK(c, 5);
    // 00d21c  neg ax
    X86_AT(c, 0xd21cu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d21f  xchg dx, ax
    X86_AT(c, 0xd21fu);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
L_d221:
    X86_TICK(c, 7);
    // 00d221  call 0xd508
    X86_AT(c, 0xd221u);
    push32(c, 0xd226u); f_0000d508(c); X86_RET(c, 0xd226u);
    X86_TICK(c, 7);
    // 00d226  call 0xd508
    X86_AT(c, 0xd226u);
    push32(c, 0xd22bu); f_0000d508(c); X86_RET(c, 0xd22bu);
L_d22b:
    X86_TICK(c, 7);
    // 00d22b  cmp di, 2
    X86_AT(c, 0xd22bu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d22f  jae 0xd2c8
    X86_AT(c, 0xd22fu);
    if (x86_cc(c, 3)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d235  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd235u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d23d  jne 0xd284
    X86_AT(c, 0xd23du);
    if (x86_cc(c, 5)) { goto L_d284; }
    X86_TICK(c, 19);
    // 00d23f  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd23fu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d246  shld eax, edx, 0x10
    X86_AT(c, 0xd246u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d24a  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd24au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d252  jne 0xd27d
    X86_AT(c, 0xd252u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 12);
    // 00d254  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd254u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d25d  je 0xd27d
    X86_AT(c, 0xd25du);
    if (x86_cc(c, 4)) { goto L_d27d; }
    X86_TICK(c, 15);
    // 00d25f  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd25fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d267  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd267u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d26f  cmp di, 1
    X86_AT(c, 0xd26fu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d273  jne 0xd27d
    X86_AT(c, 0xd273u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 7);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d27d:
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d284:
    X86_TICK(c, 12);
    // 00d284  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd284u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d28c  jne 0xd2c8
    X86_AT(c, 0xd28cu);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d28e  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd28eu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d297  jne 0xd2c8
    X86_AT(c, 0xd297u);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d299  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd299u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d2a1  je 0xd2c8
    X86_AT(c, 0xd2a1u);
    if (x86_cc(c, 4)) { goto L_d2c8; }
    X86_TICK(c, 16);
    // 00d2a3  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2a3u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2aa  shld eax, edx, 0x10
    X86_AT(c, 0xd2aau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2ae  inc dx
    X86_AT(c, 0xd2aeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d2b0  cmp di, 1
    X86_AT(c, 0xd2b0u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d2b4  jne 0xd2be
    X86_AT(c, 0xd2b4u);
    if (x86_cc(c, 5)) { goto L_d2be; }
    X86_TICK(c, 7);
    // 00d2b6  xchg dx, ax
    X86_AT(c, 0xd2b6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d2b8  neg dx
    X86_AT(c, 0xd2b8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d2bb  neg ax
    X86_AT(c, 0xd2bbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d2be:
    X86_TICK(c, 7);
    // 00d2be  call 0xd508
    X86_AT(c, 0xd2beu);
    push32(c, 0xd2c3u); f_0000d508(c); X86_RET(c, 0xd2c3u);
    X86_TICK(c, 7);
    // 00d2c3  call 0xd508
    X86_AT(c, 0xd2c3u);
    push32(c, 0xd2c8u); f_0000d508(c); X86_RET(c, 0xd2c8u);
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd1fau, "ran off the end of a function");
}
void f_0000d22b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d22b  cmp di, 2
    X86_AT(c, 0xd22bu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x2u, 0, 2);
    // 00d22f  jae 0xd2c8
    X86_AT(c, 0xd22fu);
    if (x86_cc(c, 3)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d235  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd235u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d23d  jne 0xd284
    X86_AT(c, 0xd23du);
    if (x86_cc(c, 5)) { goto L_d284; }
    X86_TICK(c, 19);
    // 00d23f  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd23fu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d246  shld eax, edx, 0x10
    X86_AT(c, 0xd246u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d24a  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd24au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d252  jne 0xd27d
    X86_AT(c, 0xd252u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 12);
    // 00d254  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd254u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d25d  je 0xd27d
    X86_AT(c, 0xd25du);
    if (x86_cc(c, 4)) { goto L_d27d; }
    X86_TICK(c, 15);
    // 00d25f  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd25fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d267  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd267u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d26f  cmp di, 1
    X86_AT(c, 0xd26fu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d273  jne 0xd27d
    X86_AT(c, 0xd273u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 7);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d27d:
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d284:
    X86_TICK(c, 12);
    // 00d284  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd284u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d28c  jne 0xd2c8
    X86_AT(c, 0xd28cu);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d28e  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd28eu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d297  jne 0xd2c8
    X86_AT(c, 0xd297u);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d299  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd299u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d2a1  je 0xd2c8
    X86_AT(c, 0xd2a1u);
    if (x86_cc(c, 4)) { goto L_d2c8; }
    X86_TICK(c, 16);
    // 00d2a3  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2a3u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2aa  shld eax, edx, 0x10
    X86_AT(c, 0xd2aau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2ae  inc dx
    X86_AT(c, 0xd2aeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d2b0  cmp di, 1
    X86_AT(c, 0xd2b0u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d2b4  jne 0xd2be
    X86_AT(c, 0xd2b4u);
    if (x86_cc(c, 5)) { goto L_d2be; }
    X86_TICK(c, 7);
    // 00d2b6  xchg dx, ax
    X86_AT(c, 0xd2b6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d2b8  neg dx
    X86_AT(c, 0xd2b8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d2bb  neg ax
    X86_AT(c, 0xd2bbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d2be:
    X86_TICK(c, 7);
    // 00d2be  call 0xd508
    X86_AT(c, 0xd2beu);
    push32(c, 0xd2c3u); f_0000d508(c); X86_RET(c, 0xd2c3u);
    X86_TICK(c, 7);
    // 00d2c3  call 0xd508
    X86_AT(c, 0xd2c3u);
    push32(c, 0xd2c8u); f_0000d508(c); X86_RET(c, 0xd2c8u);
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd22bu, "ran off the end of a function");
}
void f_0000d22f(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d22f  jae 0xd2c8
    X86_AT(c, 0xd22fu);
    if (x86_cc(c, 3)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d235  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd235u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d23d  jne 0xd284
    X86_AT(c, 0xd23du);
    if (x86_cc(c, 5)) { goto L_d284; }
    X86_TICK(c, 19);
    // 00d23f  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd23fu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d246  shld eax, edx, 0x10
    X86_AT(c, 0xd246u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d24a  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd24au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d252  jne 0xd27d
    X86_AT(c, 0xd252u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 12);
    // 00d254  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd254u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d25d  je 0xd27d
    X86_AT(c, 0xd25du);
    if (x86_cc(c, 4)) { goto L_d27d; }
    X86_TICK(c, 15);
    // 00d25f  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd25fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d267  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd267u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d26f  cmp di, 1
    X86_AT(c, 0xd26fu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d273  jne 0xd27d
    X86_AT(c, 0xd273u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 7);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d27d:
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d284:
    X86_TICK(c, 12);
    // 00d284  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd284u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d28c  jne 0xd2c8
    X86_AT(c, 0xd28cu);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d28e  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd28eu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d297  jne 0xd2c8
    X86_AT(c, 0xd297u);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d299  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd299u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d2a1  je 0xd2c8
    X86_AT(c, 0xd2a1u);
    if (x86_cc(c, 4)) { goto L_d2c8; }
    X86_TICK(c, 16);
    // 00d2a3  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2a3u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2aa  shld eax, edx, 0x10
    X86_AT(c, 0xd2aau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2ae  inc dx
    X86_AT(c, 0xd2aeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d2b0  cmp di, 1
    X86_AT(c, 0xd2b0u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d2b4  jne 0xd2be
    X86_AT(c, 0xd2b4u);
    if (x86_cc(c, 5)) { goto L_d2be; }
    X86_TICK(c, 7);
    // 00d2b6  xchg dx, ax
    X86_AT(c, 0xd2b6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d2b8  neg dx
    X86_AT(c, 0xd2b8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d2bb  neg ax
    X86_AT(c, 0xd2bbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d2be:
    X86_TICK(c, 7);
    // 00d2be  call 0xd508
    X86_AT(c, 0xd2beu);
    push32(c, 0xd2c3u); f_0000d508(c); X86_RET(c, 0xd2c3u);
    X86_TICK(c, 7);
    // 00d2c3  call 0xd508
    X86_AT(c, 0xd2c3u);
    push32(c, 0xd2c8u); f_0000d508(c); X86_RET(c, 0xd2c8u);
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd22fu, "ran off the end of a function");
}
void f_0000d235(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d235  cmp byte ptr gs:[ebp + 0x4b9], 0
    X86_AT(c, 0xd235u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B9u))), 0x0u, 0, 1);
    // 00d23d  jne 0xd284
    X86_AT(c, 0xd23du);
    if (x86_cc(c, 5)) { goto L_d284; }
    X86_TICK(c, 19);
    // 00d23f  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd23fu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d246  shld eax, edx, 0x10
    X86_AT(c, 0xd246u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d24a  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd24au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d252  jne 0xd27d
    X86_AT(c, 0xd252u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 12);
    // 00d254  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd254u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d25d  je 0xd27d
    X86_AT(c, 0xd25du);
    if (x86_cc(c, 4)) { goto L_d27d; }
    X86_TICK(c, 15);
    // 00d25f  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd25fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d267  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd267u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d26f  cmp di, 1
    X86_AT(c, 0xd26fu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d273  jne 0xd27d
    X86_AT(c, 0xd273u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 7);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d27d:
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d284:
    X86_TICK(c, 12);
    // 00d284  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd284u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d28c  jne 0xd2c8
    X86_AT(c, 0xd28cu);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d28e  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd28eu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d297  jne 0xd2c8
    X86_AT(c, 0xd297u);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d299  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd299u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d2a1  je 0xd2c8
    X86_AT(c, 0xd2a1u);
    if (x86_cc(c, 4)) { goto L_d2c8; }
    X86_TICK(c, 16);
    // 00d2a3  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2a3u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2aa  shld eax, edx, 0x10
    X86_AT(c, 0xd2aau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2ae  inc dx
    X86_AT(c, 0xd2aeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d2b0  cmp di, 1
    X86_AT(c, 0xd2b0u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d2b4  jne 0xd2be
    X86_AT(c, 0xd2b4u);
    if (x86_cc(c, 5)) { goto L_d2be; }
    X86_TICK(c, 7);
    // 00d2b6  xchg dx, ax
    X86_AT(c, 0xd2b6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d2b8  neg dx
    X86_AT(c, 0xd2b8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d2bb  neg ax
    X86_AT(c, 0xd2bbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d2be:
    X86_TICK(c, 7);
    // 00d2be  call 0xd508
    X86_AT(c, 0xd2beu);
    push32(c, 0xd2c3u); f_0000d508(c); X86_RET(c, 0xd2c3u);
    X86_TICK(c, 7);
    // 00d2c3  call 0xd508
    X86_AT(c, 0xd2c3u);
    push32(c, 0xd2c8u); f_0000d508(c); X86_RET(c, 0xd2c8u);
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd235u, "ran off the end of a function");
}
void f_0000d23d(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d23d  jne 0xd284
    X86_AT(c, 0xd23du);
    if (x86_cc(c, 5)) { goto L_d284; }
    X86_TICK(c, 19);
    // 00d23f  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd23fu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d246  shld eax, edx, 0x10
    X86_AT(c, 0xd246u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d24a  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd24au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d252  jne 0xd27d
    X86_AT(c, 0xd252u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 12);
    // 00d254  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd254u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d25d  je 0xd27d
    X86_AT(c, 0xd25du);
    if (x86_cc(c, 4)) { goto L_d27d; }
    X86_TICK(c, 15);
    // 00d25f  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd25fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d267  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd267u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d26f  cmp di, 1
    X86_AT(c, 0xd26fu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d273  jne 0xd27d
    X86_AT(c, 0xd273u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 7);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d27d:
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d284:
    X86_TICK(c, 12);
    // 00d284  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd284u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d28c  jne 0xd2c8
    X86_AT(c, 0xd28cu);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d28e  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd28eu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d297  jne 0xd2c8
    X86_AT(c, 0xd297u);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d299  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd299u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d2a1  je 0xd2c8
    X86_AT(c, 0xd2a1u);
    if (x86_cc(c, 4)) { goto L_d2c8; }
    X86_TICK(c, 16);
    // 00d2a3  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2a3u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2aa  shld eax, edx, 0x10
    X86_AT(c, 0xd2aau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2ae  inc dx
    X86_AT(c, 0xd2aeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d2b0  cmp di, 1
    X86_AT(c, 0xd2b0u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d2b4  jne 0xd2be
    X86_AT(c, 0xd2b4u);
    if (x86_cc(c, 5)) { goto L_d2be; }
    X86_TICK(c, 7);
    // 00d2b6  xchg dx, ax
    X86_AT(c, 0xd2b6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d2b8  neg dx
    X86_AT(c, 0xd2b8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d2bb  neg ax
    X86_AT(c, 0xd2bbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d2be:
    X86_TICK(c, 7);
    // 00d2be  call 0xd508
    X86_AT(c, 0xd2beu);
    push32(c, 0xd2c3u); f_0000d508(c); X86_RET(c, 0xd2c3u);
    X86_TICK(c, 7);
    // 00d2c3  call 0xd508
    X86_AT(c, 0xd2c3u);
    push32(c, 0xd2c8u); f_0000d508(c); X86_RET(c, 0xd2c8u);
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd23du, "ran off the end of a function");
}
void f_0000d23f(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00d23f  mov edx, dword ptr gs:[ebp + 0x4b4]
    X86_AT(c, 0xd23fu);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B4u)));
    // 00d246  shld eax, edx, 0x10
    X86_AT(c, 0xd246u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d24a  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd24au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d252  jne 0xd27d
    X86_AT(c, 0xd252u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 12);
    // 00d254  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd254u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d25d  je 0xd27d
    X86_AT(c, 0xd25du);
    if (x86_cc(c, 4)) { goto L_d27d; }
    X86_TICK(c, 15);
    // 00d25f  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd25fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d267  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd267u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d26f  cmp di, 1
    X86_AT(c, 0xd26fu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d273  jne 0xd27d
    X86_AT(c, 0xd273u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 7);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d27d:
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd23fu, "ran off the end of a function");
}
void f_0000d246(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00d246  shld eax, edx, 0x10
    X86_AT(c, 0xd246u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d24a  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd24au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d252  jne 0xd27d
    X86_AT(c, 0xd252u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 12);
    // 00d254  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd254u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d25d  je 0xd27d
    X86_AT(c, 0xd25du);
    if (x86_cc(c, 4)) { goto L_d27d; }
    X86_TICK(c, 15);
    // 00d25f  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd25fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d267  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd267u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d26f  cmp di, 1
    X86_AT(c, 0xd26fu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d273  jne 0xd27d
    X86_AT(c, 0xd273u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 7);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d27d:
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd246u, "ran off the end of a function");
}
void f_0000d24a(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d24a  cmp byte ptr gs:[ebp + 0x4cb], 2
    X86_AT(c, 0xd24au);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CBu))), 0x2u, 0, 1);
    // 00d252  jne 0xd27d
    X86_AT(c, 0xd252u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 12);
    // 00d254  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd254u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d25d  je 0xd27d
    X86_AT(c, 0xd25du);
    if (x86_cc(c, 4)) { goto L_d27d; }
    X86_TICK(c, 15);
    // 00d25f  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd25fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d267  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd267u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d26f  cmp di, 1
    X86_AT(c, 0xd26fu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d273  jne 0xd27d
    X86_AT(c, 0xd273u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 7);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d27d:
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd24au, "ran off the end of a function");
}
void f_0000d252(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d252  jne 0xd27d
    X86_AT(c, 0xd252u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 12);
    // 00d254  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd254u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d25d  je 0xd27d
    X86_AT(c, 0xd25du);
    if (x86_cc(c, 4)) { goto L_d27d; }
    X86_TICK(c, 15);
    // 00d25f  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd25fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d267  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd267u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d26f  cmp di, 1
    X86_AT(c, 0xd26fu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d273  jne 0xd27d
    X86_AT(c, 0xd273u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 7);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d27d:
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd252u, "ran off the end of a function");
}
void f_0000d254(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d254  test byte ptr gs:[ebp + edi*1 + 0x498], 2
    X86_AT(c, 0xd254u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x2u, 1);
    // 00d25d  je 0xd27d
    X86_AT(c, 0xd25du);
    if (x86_cc(c, 4)) { goto L_d27d; }
    X86_TICK(c, 15);
    // 00d25f  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd25fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d267  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd267u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d26f  cmp di, 1
    X86_AT(c, 0xd26fu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d273  jne 0xd27d
    X86_AT(c, 0xd273u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 7);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d27d:
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd254u, "ran off the end of a function");
}
void f_0000d25d(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d25d  je 0xd27d
    X86_AT(c, 0xd25du);
    if (x86_cc(c, 4)) { goto L_d27d; }
    X86_TICK(c, 15);
    // 00d25f  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd25fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d267  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd267u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d26f  cmp di, 1
    X86_AT(c, 0xd26fu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d273  jne 0xd27d
    X86_AT(c, 0xd273u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 7);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d27d:
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd25du, "ran off the end of a function");
}
void f_0000d25f(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00d25f  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd25fu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d267  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd267u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d26f  cmp di, 1
    X86_AT(c, 0xd26fu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d273  jne 0xd27d
    X86_AT(c, 0xd273u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 7);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d27d:
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd25fu, "ran off the end of a function");
}
void f_0000d267(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00d267  mov ax, word ptr gs:[ebp + 0x476]
    X86_AT(c, 0xd267u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x476u))));
    // 00d26f  cmp di, 1
    X86_AT(c, 0xd26fu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d273  jne 0xd27d
    X86_AT(c, 0xd273u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 7);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d27d:
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd267u, "ran off the end of a function");
}
void f_0000d26f(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d26f  cmp di, 1
    X86_AT(c, 0xd26fu);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d273  jne 0xd27d
    X86_AT(c, 0xd273u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 7);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d27d:
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd26fu, "ran off the end of a function");
}
void f_0000d273(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d273  jne 0xd27d
    X86_AT(c, 0xd273u);
    if (x86_cc(c, 5)) { goto L_d27d; }
    X86_TICK(c, 7);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d27d:
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd273u, "ran off the end of a function");
}
void f_0000d275(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00d275  xchg dx, ax
    X86_AT(c, 0xd275u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd275u, "ran off the end of a function");
}
void f_0000d277(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00d277  neg dx
    X86_AT(c, 0xd277u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd277u, "ran off the end of a function");
}
void f_0000d27a(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00d27a  neg ax
    X86_AT(c, 0xd27au);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd27au, "ran off the end of a function");
}
void f_0000d27d(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d27d  call 0xd508
    X86_AT(c, 0xd27du);
    push32(c, 0xd282u); f_0000d508(c); X86_RET(c, 0xd282u);
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd27du, "ran off the end of a function");
}
void f_0000d282(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d282  jmp 0xd2c8
    X86_AT(c, 0xd282u);
    goto L_d2c8;
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd282u, "ran off the end of a function");
}
void f_0000d284(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d284  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd284u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d28c  jne 0xd2c8
    X86_AT(c, 0xd28cu);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d28e  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd28eu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d297  jne 0xd2c8
    X86_AT(c, 0xd297u);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d299  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd299u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d2a1  je 0xd2c8
    X86_AT(c, 0xd2a1u);
    if (x86_cc(c, 4)) { goto L_d2c8; }
    X86_TICK(c, 16);
    // 00d2a3  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2a3u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2aa  shld eax, edx, 0x10
    X86_AT(c, 0xd2aau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2ae  inc dx
    X86_AT(c, 0xd2aeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d2b0  cmp di, 1
    X86_AT(c, 0xd2b0u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d2b4  jne 0xd2be
    X86_AT(c, 0xd2b4u);
    if (x86_cc(c, 5)) { goto L_d2be; }
    X86_TICK(c, 7);
    // 00d2b6  xchg dx, ax
    X86_AT(c, 0xd2b6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d2b8  neg dx
    X86_AT(c, 0xd2b8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d2bb  neg ax
    X86_AT(c, 0xd2bbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d2be:
    X86_TICK(c, 7);
    // 00d2be  call 0xd508
    X86_AT(c, 0xd2beu);
    push32(c, 0xd2c3u); f_0000d508(c); X86_RET(c, 0xd2c3u);
    X86_TICK(c, 7);
    // 00d2c3  call 0xd508
    X86_AT(c, 0xd2c3u);
    push32(c, 0xd2c8u); f_0000d508(c); X86_RET(c, 0xd2c8u);
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd284u, "ran off the end of a function");
}
void f_0000d28c(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d28c  jne 0xd2c8
    X86_AT(c, 0xd28cu);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d28e  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd28eu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d297  jne 0xd2c8
    X86_AT(c, 0xd297u);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d299  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd299u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d2a1  je 0xd2c8
    X86_AT(c, 0xd2a1u);
    if (x86_cc(c, 4)) { goto L_d2c8; }
    X86_TICK(c, 16);
    // 00d2a3  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2a3u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2aa  shld eax, edx, 0x10
    X86_AT(c, 0xd2aau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2ae  inc dx
    X86_AT(c, 0xd2aeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d2b0  cmp di, 1
    X86_AT(c, 0xd2b0u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d2b4  jne 0xd2be
    X86_AT(c, 0xd2b4u);
    if (x86_cc(c, 5)) { goto L_d2be; }
    X86_TICK(c, 7);
    // 00d2b6  xchg dx, ax
    X86_AT(c, 0xd2b6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d2b8  neg dx
    X86_AT(c, 0xd2b8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d2bb  neg ax
    X86_AT(c, 0xd2bbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d2be:
    X86_TICK(c, 7);
    // 00d2be  call 0xd508
    X86_AT(c, 0xd2beu);
    push32(c, 0xd2c3u); f_0000d508(c); X86_RET(c, 0xd2c3u);
    X86_TICK(c, 7);
    // 00d2c3  call 0xd508
    X86_AT(c, 0xd2c3u);
    push32(c, 0xd2c8u); f_0000d508(c); X86_RET(c, 0xd2c8u);
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd28cu, "ran off the end of a function");
}
void f_0000d28e(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d28e  test byte ptr gs:[ebp + edi*1 + 0x498], 1
    X86_AT(c, 0xd28eu);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x498u))) & 0x1u, 1);
    // 00d297  jne 0xd2c8
    X86_AT(c, 0xd297u);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d299  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd299u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d2a1  je 0xd2c8
    X86_AT(c, 0xd2a1u);
    if (x86_cc(c, 4)) { goto L_d2c8; }
    X86_TICK(c, 16);
    // 00d2a3  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2a3u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2aa  shld eax, edx, 0x10
    X86_AT(c, 0xd2aau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2ae  inc dx
    X86_AT(c, 0xd2aeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d2b0  cmp di, 1
    X86_AT(c, 0xd2b0u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d2b4  jne 0xd2be
    X86_AT(c, 0xd2b4u);
    if (x86_cc(c, 5)) { goto L_d2be; }
    X86_TICK(c, 7);
    // 00d2b6  xchg dx, ax
    X86_AT(c, 0xd2b6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d2b8  neg dx
    X86_AT(c, 0xd2b8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d2bb  neg ax
    X86_AT(c, 0xd2bbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d2be:
    X86_TICK(c, 7);
    // 00d2be  call 0xd508
    X86_AT(c, 0xd2beu);
    push32(c, 0xd2c3u); f_0000d508(c); X86_RET(c, 0xd2c3u);
    X86_TICK(c, 7);
    // 00d2c3  call 0xd508
    X86_AT(c, 0xd2c3u);
    push32(c, 0xd2c8u); f_0000d508(c); X86_RET(c, 0xd2c8u);
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd28eu, "ran off the end of a function");
}
void f_0000d297(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d297  jne 0xd2c8
    X86_AT(c, 0xd297u);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 12);
    // 00d299  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd299u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d2a1  je 0xd2c8
    X86_AT(c, 0xd2a1u);
    if (x86_cc(c, 4)) { goto L_d2c8; }
    X86_TICK(c, 16);
    // 00d2a3  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2a3u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2aa  shld eax, edx, 0x10
    X86_AT(c, 0xd2aau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2ae  inc dx
    X86_AT(c, 0xd2aeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d2b0  cmp di, 1
    X86_AT(c, 0xd2b0u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d2b4  jne 0xd2be
    X86_AT(c, 0xd2b4u);
    if (x86_cc(c, 5)) { goto L_d2be; }
    X86_TICK(c, 7);
    // 00d2b6  xchg dx, ax
    X86_AT(c, 0xd2b6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d2b8  neg dx
    X86_AT(c, 0xd2b8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d2bb  neg ax
    X86_AT(c, 0xd2bbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d2be:
    X86_TICK(c, 7);
    // 00d2be  call 0xd508
    X86_AT(c, 0xd2beu);
    push32(c, 0xd2c3u); f_0000d508(c); X86_RET(c, 0xd2c3u);
    X86_TICK(c, 7);
    // 00d2c3  call 0xd508
    X86_AT(c, 0xd2c3u);
    push32(c, 0xd2c8u); f_0000d508(c); X86_RET(c, 0xd2c8u);
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd297u, "ran off the end of a function");
}
void f_0000d299(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d299  cmp byte ptr gs:[ebp + 0x479], 0
    X86_AT(c, 0xd299u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x479u))), 0x0u, 0, 1);
    // 00d2a1  je 0xd2c8
    X86_AT(c, 0xd2a1u);
    if (x86_cc(c, 4)) { goto L_d2c8; }
    X86_TICK(c, 16);
    // 00d2a3  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2a3u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2aa  shld eax, edx, 0x10
    X86_AT(c, 0xd2aau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2ae  inc dx
    X86_AT(c, 0xd2aeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d2b0  cmp di, 1
    X86_AT(c, 0xd2b0u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d2b4  jne 0xd2be
    X86_AT(c, 0xd2b4u);
    if (x86_cc(c, 5)) { goto L_d2be; }
    X86_TICK(c, 7);
    // 00d2b6  xchg dx, ax
    X86_AT(c, 0xd2b6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d2b8  neg dx
    X86_AT(c, 0xd2b8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d2bb  neg ax
    X86_AT(c, 0xd2bbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d2be:
    X86_TICK(c, 7);
    // 00d2be  call 0xd508
    X86_AT(c, 0xd2beu);
    push32(c, 0xd2c3u); f_0000d508(c); X86_RET(c, 0xd2c3u);
    X86_TICK(c, 7);
    // 00d2c3  call 0xd508
    X86_AT(c, 0xd2c3u);
    push32(c, 0xd2c8u); f_0000d508(c); X86_RET(c, 0xd2c8u);
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd299u, "ran off the end of a function");
}
void f_0000d2a1(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d2a1  je 0xd2c8
    X86_AT(c, 0xd2a1u);
    if (x86_cc(c, 4)) { goto L_d2c8; }
    X86_TICK(c, 16);
    // 00d2a3  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2a3u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2aa  shld eax, edx, 0x10
    X86_AT(c, 0xd2aau);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2ae  inc dx
    X86_AT(c, 0xd2aeu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d2b0  cmp di, 1
    X86_AT(c, 0xd2b0u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), 0x1u, 0, 2);
    // 00d2b4  jne 0xd2be
    X86_AT(c, 0xd2b4u);
    if (x86_cc(c, 5)) { goto L_d2be; }
    X86_TICK(c, 7);
    // 00d2b6  xchg dx, ax
    X86_AT(c, 0xd2b6u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d2b8  neg dx
    X86_AT(c, 0xd2b8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d2bb  neg ax
    X86_AT(c, 0xd2bbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d2be:
    X86_TICK(c, 7);
    // 00d2be  call 0xd508
    X86_AT(c, 0xd2beu);
    push32(c, 0xd2c3u); f_0000d508(c); X86_RET(c, 0xd2c3u);
    X86_TICK(c, 7);
    // 00d2c3  call 0xd508
    X86_AT(c, 0xd2c3u);
    push32(c, 0xd2c8u); f_0000d508(c); X86_RET(c, 0xd2c8u);
L_d2c8:
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2a1u, "ran off the end of a function");
}
void f_0000d2c8(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d2c8  cmp byte ptr gs:[ebp + 0x494], 0
    X86_AT(c, 0xd2c8u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x494u))), 0x0u, 0, 1);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2c8u, "ran off the end of a function");
}
void f_0000d2d0(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d2d0  je 0xd303
    X86_AT(c, 0xd2d0u);
    if (x86_cc(c, 4)) { goto L_d303; }
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
L_d303:
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2d0u, "ran off the end of a function");
}
void f_0000d2d2(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00d2d2  mov edx, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd2d2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2d2u, "ran off the end of a function");
}
void f_0000d2d9(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00d2d9  shld eax, edx, 0x10
    X86_AT(c, 0xd2d9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2d9u, "ran off the end of a function");
}
void f_0000d2dd(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d2dd  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd2ddu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2ddu, "ran off the end of a function");
}
void f_0000d2e5(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d2e5  jne 0xd2fe
    X86_AT(c, 0xd2e5u);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2e5u, "ran off the end of a function");
}
void f_0000d2e7(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d2e7  or si, si
    X86_AT(c, 0xd2e7u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2e7u, "ran off the end of a function");
}
void f_0000d2ea(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d2ea  jne 0xd2fe
    X86_AT(c, 0xd2eau);
    if (x86_cc(c, 5)) { goto L_d2fe; }
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2eau, "ran off the end of a function");
}
void f_0000d2ec(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d2ec  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd2ecu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2ecu, "ran off the end of a function");
}
void f_0000d2f4(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d2f4  je 0xd2fe
    X86_AT(c, 0xd2f4u);
    if (x86_cc(c, 4)) { goto L_d2fe; }
    X86_TICK(c, 4);
    // 00d2f6  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd2f6u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d2fe:
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2f4u, "ran off the end of a function");
}
void f_0000d2fe(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d2fe  call 0xd508
    X86_AT(c, 0xd2feu);
    push32(c, 0xd303u); f_0000d508(c); X86_RET(c, 0xd303u);
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd2feu, "ran off the end of a function");
}
void f_0000d303(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00d303  mov ax, word ptr gs:[ebp + 0x47a]
    X86_AT(c, 0xd303u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x47Au))));
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd303u, "ran off the end of a function");
}
void f_0000d30b(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00d30b  mov word ptr gs:[ebp + 0x49c], ax
    X86_AT(c, 0xd30bu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu)), (c.r[0] & 0xFFFFu));
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd30bu, "ran off the end of a function");
}
void f_0000d313(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d313  call 0xd530
    X86_AT(c, 0xd313u);
    push32(c, 0xd318u); f_0000d530(c); X86_RET(c, 0xd318u);
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd313u, "ran off the end of a function");
}
void f_0000d318(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00d318  ret 
    X86_AT(c, 0xd318u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd318u, "ran off the end of a function");
}
void f_0000d31c(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00d31c  mov word ptr gs:[ebp + 0x49e], 0
    X86_AT(c, 0xd31cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu)), 0x0u);
    // 00d326  cmp byte ptr gs:[ebp + 0x496], 0
    X86_AT(c, 0xd326u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x496u))), 0x0u, 0, 1);
    // 00d32e  je 0xd368
    X86_AT(c, 0xd32eu);
    if (x86_cc(c, 4)) { goto L_d368; }
    X86_TICK(c, 19);
    // 00d330  mov eax, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd330u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d337  shld edx, eax, 0x10
    X86_AT(c, 0xd337u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00d33b  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd33bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d343  jne 0xd35d
    X86_AT(c, 0xd343u);
    if (x86_cc(c, 5)) { goto L_d35d; }
    X86_TICK(c, 7);
    // 00d345  cmp si, 2
    X86_AT(c, 0xd345u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d349  jne 0xd35d
    X86_AT(c, 0xd349u);
    if (x86_cc(c, 5)) { goto L_d35d; }
    X86_TICK(c, 12);
    // 00d34b  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd34bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d353  je 0xd35d
    X86_AT(c, 0xd353u);
    if (x86_cc(c, 4)) { goto L_d35d; }
    X86_TICK(c, 4);
    // 00d355  mov dx, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd355u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d35d:
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
L_d368:
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
    x86_fault(c, 0xd31cu, "ran off the end of a function");
}
void f_0000d326(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d326  cmp byte ptr gs:[ebp + 0x496], 0
    X86_AT(c, 0xd326u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x496u))), 0x0u, 0, 1);
    // 00d32e  je 0xd368
    X86_AT(c, 0xd32eu);
    if (x86_cc(c, 4)) { goto L_d368; }
    X86_TICK(c, 19);
    // 00d330  mov eax, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd330u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d337  shld edx, eax, 0x10
    X86_AT(c, 0xd337u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00d33b  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd33bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d343  jne 0xd35d
    X86_AT(c, 0xd343u);
    if (x86_cc(c, 5)) { goto L_d35d; }
    X86_TICK(c, 7);
    // 00d345  cmp si, 2
    X86_AT(c, 0xd345u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d349  jne 0xd35d
    X86_AT(c, 0xd349u);
    if (x86_cc(c, 5)) { goto L_d35d; }
    X86_TICK(c, 12);
    // 00d34b  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd34bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d353  je 0xd35d
    X86_AT(c, 0xd353u);
    if (x86_cc(c, 4)) { goto L_d35d; }
    X86_TICK(c, 4);
    // 00d355  mov dx, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd355u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d35d:
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
L_d368:
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
    x86_fault(c, 0xd326u, "ran off the end of a function");
}
void f_0000d32e(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d32e  je 0xd368
    X86_AT(c, 0xd32eu);
    if (x86_cc(c, 4)) { goto L_d368; }
    X86_TICK(c, 19);
    // 00d330  mov eax, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd330u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d337  shld edx, eax, 0x10
    X86_AT(c, 0xd337u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00d33b  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd33bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d343  jne 0xd35d
    X86_AT(c, 0xd343u);
    if (x86_cc(c, 5)) { goto L_d35d; }
    X86_TICK(c, 7);
    // 00d345  cmp si, 2
    X86_AT(c, 0xd345u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d349  jne 0xd35d
    X86_AT(c, 0xd349u);
    if (x86_cc(c, 5)) { goto L_d35d; }
    X86_TICK(c, 12);
    // 00d34b  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd34bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d353  je 0xd35d
    X86_AT(c, 0xd353u);
    if (x86_cc(c, 4)) { goto L_d35d; }
    X86_TICK(c, 4);
    // 00d355  mov dx, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd355u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d35d:
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
L_d368:
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
    x86_fault(c, 0xd32eu, "ran off the end of a function");
}
void f_0000d330(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00d330  mov eax, dword ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd330u);
    c.r[0] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u)));
    // 00d337  shld edx, eax, 0x10
    X86_AT(c, 0xd337u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00d33b  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd33bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d343  jne 0xd35d
    X86_AT(c, 0xd343u);
    if (x86_cc(c, 5)) { goto L_d35d; }
    X86_TICK(c, 7);
    // 00d345  cmp si, 2
    X86_AT(c, 0xd345u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d349  jne 0xd35d
    X86_AT(c, 0xd349u);
    if (x86_cc(c, 5)) { goto L_d35d; }
    X86_TICK(c, 12);
    // 00d34b  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd34bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d353  je 0xd35d
    X86_AT(c, 0xd353u);
    if (x86_cc(c, 4)) { goto L_d35d; }
    X86_TICK(c, 4);
    // 00d355  mov dx, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd355u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d35d:
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
    x86_fault(c, 0xd330u, "ran off the end of a function");
}
void f_0000d337(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00d337  shld edx, eax, 0x10
    X86_AT(c, 0xd337u);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_double(c, true, v, c.r[0], 0x10u, 4, w); if (w) c.r[2] = r; }
    // 00d33b  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd33bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d343  jne 0xd35d
    X86_AT(c, 0xd343u);
    if (x86_cc(c, 5)) { goto L_d35d; }
    X86_TICK(c, 7);
    // 00d345  cmp si, 2
    X86_AT(c, 0xd345u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d349  jne 0xd35d
    X86_AT(c, 0xd349u);
    if (x86_cc(c, 5)) { goto L_d35d; }
    X86_TICK(c, 12);
    // 00d34b  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd34bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d353  je 0xd35d
    X86_AT(c, 0xd353u);
    if (x86_cc(c, 4)) { goto L_d35d; }
    X86_TICK(c, 4);
    // 00d355  mov dx, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd355u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d35d:
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
    x86_fault(c, 0xd337u, "ran off the end of a function");
}
void f_0000d33b(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d33b  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd33bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d343  jne 0xd35d
    X86_AT(c, 0xd343u);
    if (x86_cc(c, 5)) { goto L_d35d; }
    X86_TICK(c, 7);
    // 00d345  cmp si, 2
    X86_AT(c, 0xd345u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d349  jne 0xd35d
    X86_AT(c, 0xd349u);
    if (x86_cc(c, 5)) { goto L_d35d; }
    X86_TICK(c, 12);
    // 00d34b  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd34bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d353  je 0xd35d
    X86_AT(c, 0xd353u);
    if (x86_cc(c, 4)) { goto L_d35d; }
    X86_TICK(c, 4);
    // 00d355  mov dx, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd355u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d35d:
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
    x86_fault(c, 0xd33bu, "ran off the end of a function");
}
void f_0000d343(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d343  jne 0xd35d
    X86_AT(c, 0xd343u);
    if (x86_cc(c, 5)) { goto L_d35d; }
    X86_TICK(c, 7);
    // 00d345  cmp si, 2
    X86_AT(c, 0xd345u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d349  jne 0xd35d
    X86_AT(c, 0xd349u);
    if (x86_cc(c, 5)) { goto L_d35d; }
    X86_TICK(c, 12);
    // 00d34b  cmp byte ptr gs:[ebp + 0x478], 0
    X86_AT(c, 0xd34bu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x478u))), 0x0u, 0, 1);
    // 00d353  je 0xd35d
    X86_AT(c, 0xd353u);
    if (x86_cc(c, 4)) { goto L_d35d; }
    X86_TICK(c, 4);
    // 00d355  mov dx, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd355u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
L_d35d:
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
    x86_fault(c, 0xd343u, "ran off the end of a function");
}
}

#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000d178(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00d178  neg ax
    X86_AT(c, 0xd178u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d17b  call 0xd508
    X86_AT(c, 0xd17bu);
    push32(c, 0xd180u); f_0000d508(c); X86_RET(c, 0xd180u);
    X86_TICK(c, 12);
    // 00d180  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd180u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d188  jne 0xd2c8
    X86_AT(c, 0xd188u);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 7);
    // 00d18e  cmp si, 2
    X86_AT(c, 0xd18eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d192  jae 0xd22b
    X86_AT(c, 0xd192u);
    if (x86_cc(c, 3)) { goto L_d22b; }
    X86_TICK(c, 12);
    // 00d198  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xd198u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00d1a0  jne 0xd1e7
    X86_AT(c, 0xd1a0u);
    if (x86_cc(c, 5)) { goto L_d1e7; }
    X86_TICK(c, 19);
    // 00d1a2  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd1a2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d1a9  shld eax, edx, 0x10
    X86_AT(c, 0xd1a9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d1ad  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd1adu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d1b5  jne 0xd1e0
    X86_AT(c, 0xd1b5u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 12);
    // 00d1b7  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd1b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d1c0  je 0xd1e0
    X86_AT(c, 0xd1c0u);
    if (x86_cc(c, 4)) { goto L_d1e0; }
    X86_TICK(c, 15);
    // 00d1c2  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd1c2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d1ca  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd1cau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
L_d1e7:
    X86_TICK(c, 12);
    // 00d1e7  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd1e7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d1ef  jne 0xd22b
    X86_AT(c, 0xd1efu);
    if (x86_cc(c, 5)) { goto L_d22b; }
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
    x86_fault(c, 0xd178u, "ran off the end of a function");
}
void f_0000d17b(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d17b  call 0xd508
    X86_AT(c, 0xd17bu);
    push32(c, 0xd180u); f_0000d508(c); X86_RET(c, 0xd180u);
    X86_TICK(c, 12);
    // 00d180  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd180u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d188  jne 0xd2c8
    X86_AT(c, 0xd188u);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 7);
    // 00d18e  cmp si, 2
    X86_AT(c, 0xd18eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d192  jae 0xd22b
    X86_AT(c, 0xd192u);
    if (x86_cc(c, 3)) { goto L_d22b; }
    X86_TICK(c, 12);
    // 00d198  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xd198u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00d1a0  jne 0xd1e7
    X86_AT(c, 0xd1a0u);
    if (x86_cc(c, 5)) { goto L_d1e7; }
    X86_TICK(c, 19);
    // 00d1a2  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd1a2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d1a9  shld eax, edx, 0x10
    X86_AT(c, 0xd1a9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d1ad  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd1adu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d1b5  jne 0xd1e0
    X86_AT(c, 0xd1b5u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 12);
    // 00d1b7  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd1b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d1c0  je 0xd1e0
    X86_AT(c, 0xd1c0u);
    if (x86_cc(c, 4)) { goto L_d1e0; }
    X86_TICK(c, 15);
    // 00d1c2  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd1c2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d1ca  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd1cau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
L_d1e7:
    X86_TICK(c, 12);
    // 00d1e7  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd1e7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d1ef  jne 0xd22b
    X86_AT(c, 0xd1efu);
    if (x86_cc(c, 5)) { goto L_d22b; }
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
    x86_fault(c, 0xd17bu, "ran off the end of a function");
}
void f_0000d180(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d180  cmp byte ptr gs:[ebp + 0x41f], 1
    X86_AT(c, 0xd180u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Fu))), 0x1u, 0, 1);
    // 00d188  jne 0xd2c8
    X86_AT(c, 0xd188u);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 7);
    // 00d18e  cmp si, 2
    X86_AT(c, 0xd18eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d192  jae 0xd22b
    X86_AT(c, 0xd192u);
    if (x86_cc(c, 3)) { goto L_d22b; }
    X86_TICK(c, 12);
    // 00d198  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xd198u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00d1a0  jne 0xd1e7
    X86_AT(c, 0xd1a0u);
    if (x86_cc(c, 5)) { goto L_d1e7; }
    X86_TICK(c, 19);
    // 00d1a2  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd1a2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d1a9  shld eax, edx, 0x10
    X86_AT(c, 0xd1a9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d1ad  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd1adu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d1b5  jne 0xd1e0
    X86_AT(c, 0xd1b5u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 12);
    // 00d1b7  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd1b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d1c0  je 0xd1e0
    X86_AT(c, 0xd1c0u);
    if (x86_cc(c, 4)) { goto L_d1e0; }
    X86_TICK(c, 15);
    // 00d1c2  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd1c2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d1ca  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd1cau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
L_d1e7:
    X86_TICK(c, 12);
    // 00d1e7  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd1e7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d1ef  jne 0xd22b
    X86_AT(c, 0xd1efu);
    if (x86_cc(c, 5)) { goto L_d22b; }
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
    x86_fault(c, 0xd180u, "ran off the end of a function");
}
void f_0000d188(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d188  jne 0xd2c8
    X86_AT(c, 0xd188u);
    if (x86_cc(c, 5)) { goto L_d2c8; }
    X86_TICK(c, 7);
    // 00d18e  cmp si, 2
    X86_AT(c, 0xd18eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d192  jae 0xd22b
    X86_AT(c, 0xd192u);
    if (x86_cc(c, 3)) { goto L_d22b; }
    X86_TICK(c, 12);
    // 00d198  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xd198u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00d1a0  jne 0xd1e7
    X86_AT(c, 0xd1a0u);
    if (x86_cc(c, 5)) { goto L_d1e7; }
    X86_TICK(c, 19);
    // 00d1a2  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd1a2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d1a9  shld eax, edx, 0x10
    X86_AT(c, 0xd1a9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d1ad  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd1adu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d1b5  jne 0xd1e0
    X86_AT(c, 0xd1b5u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 12);
    // 00d1b7  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd1b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d1c0  je 0xd1e0
    X86_AT(c, 0xd1c0u);
    if (x86_cc(c, 4)) { goto L_d1e0; }
    X86_TICK(c, 15);
    // 00d1c2  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd1c2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d1ca  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd1cau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
L_d1e7:
    X86_TICK(c, 12);
    // 00d1e7  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd1e7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d1ef  jne 0xd22b
    X86_AT(c, 0xd1efu);
    if (x86_cc(c, 5)) { goto L_d22b; }
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
    x86_fault(c, 0xd188u, "ran off the end of a function");
}
void f_0000d18e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d18e  cmp si, 2
    X86_AT(c, 0xd18eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x2u, 0, 2);
    // 00d192  jae 0xd22b
    X86_AT(c, 0xd192u);
    if (x86_cc(c, 3)) { goto L_d22b; }
    X86_TICK(c, 12);
    // 00d198  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xd198u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00d1a0  jne 0xd1e7
    X86_AT(c, 0xd1a0u);
    if (x86_cc(c, 5)) { goto L_d1e7; }
    X86_TICK(c, 19);
    // 00d1a2  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd1a2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d1a9  shld eax, edx, 0x10
    X86_AT(c, 0xd1a9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d1ad  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd1adu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d1b5  jne 0xd1e0
    X86_AT(c, 0xd1b5u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 12);
    // 00d1b7  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd1b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d1c0  je 0xd1e0
    X86_AT(c, 0xd1c0u);
    if (x86_cc(c, 4)) { goto L_d1e0; }
    X86_TICK(c, 15);
    // 00d1c2  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd1c2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d1ca  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd1cau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
L_d1e7:
    X86_TICK(c, 12);
    // 00d1e7  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd1e7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d1ef  jne 0xd22b
    X86_AT(c, 0xd1efu);
    if (x86_cc(c, 5)) { goto L_d22b; }
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
    x86_fault(c, 0xd18eu, "ran off the end of a function");
}
void f_0000d192(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d192  jae 0xd22b
    X86_AT(c, 0xd192u);
    if (x86_cc(c, 3)) { goto L_d22b; }
    X86_TICK(c, 12);
    // 00d198  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xd198u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00d1a0  jne 0xd1e7
    X86_AT(c, 0xd1a0u);
    if (x86_cc(c, 5)) { goto L_d1e7; }
    X86_TICK(c, 19);
    // 00d1a2  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd1a2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d1a9  shld eax, edx, 0x10
    X86_AT(c, 0xd1a9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d1ad  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd1adu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d1b5  jne 0xd1e0
    X86_AT(c, 0xd1b5u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 12);
    // 00d1b7  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd1b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d1c0  je 0xd1e0
    X86_AT(c, 0xd1c0u);
    if (x86_cc(c, 4)) { goto L_d1e0; }
    X86_TICK(c, 15);
    // 00d1c2  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd1c2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d1ca  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd1cau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
L_d1e7:
    X86_TICK(c, 12);
    // 00d1e7  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd1e7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d1ef  jne 0xd22b
    X86_AT(c, 0xd1efu);
    if (x86_cc(c, 5)) { goto L_d22b; }
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
    x86_fault(c, 0xd192u, "ran off the end of a function");
}
void f_0000d198(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d198  cmp byte ptr gs:[ebp + 0x4b8], 0
    X86_AT(c, 0xd198u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B8u))), 0x0u, 0, 1);
    // 00d1a0  jne 0xd1e7
    X86_AT(c, 0xd1a0u);
    if (x86_cc(c, 5)) { goto L_d1e7; }
    X86_TICK(c, 19);
    // 00d1a2  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd1a2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d1a9  shld eax, edx, 0x10
    X86_AT(c, 0xd1a9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d1ad  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd1adu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d1b5  jne 0xd1e0
    X86_AT(c, 0xd1b5u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 12);
    // 00d1b7  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd1b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d1c0  je 0xd1e0
    X86_AT(c, 0xd1c0u);
    if (x86_cc(c, 4)) { goto L_d1e0; }
    X86_TICK(c, 15);
    // 00d1c2  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd1c2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d1ca  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd1cau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
L_d1e7:
    X86_TICK(c, 12);
    // 00d1e7  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd1e7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d1ef  jne 0xd22b
    X86_AT(c, 0xd1efu);
    if (x86_cc(c, 5)) { goto L_d22b; }
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
    x86_fault(c, 0xd198u, "ran off the end of a function");
}
void f_0000d1a0(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d1a0  jne 0xd1e7
    X86_AT(c, 0xd1a0u);
    if (x86_cc(c, 5)) { goto L_d1e7; }
    X86_TICK(c, 19);
    // 00d1a2  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd1a2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d1a9  shld eax, edx, 0x10
    X86_AT(c, 0xd1a9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d1ad  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd1adu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d1b5  jne 0xd1e0
    X86_AT(c, 0xd1b5u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 12);
    // 00d1b7  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd1b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d1c0  je 0xd1e0
    X86_AT(c, 0xd1c0u);
    if (x86_cc(c, 4)) { goto L_d1e0; }
    X86_TICK(c, 15);
    // 00d1c2  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd1c2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d1ca  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd1cau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
L_d1e7:
    X86_TICK(c, 12);
    // 00d1e7  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd1e7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d1ef  jne 0xd22b
    X86_AT(c, 0xd1efu);
    if (x86_cc(c, 5)) { goto L_d22b; }
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
    x86_fault(c, 0xd1a0u, "ran off the end of a function");
}
void f_0000d1a2(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00d1a2  mov edx, dword ptr gs:[ebp + 0x4b0]
    X86_AT(c, 0xd1a2u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + 0x4B0u)));
    // 00d1a9  shld eax, edx, 0x10
    X86_AT(c, 0xd1a9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d1ad  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd1adu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d1b5  jne 0xd1e0
    X86_AT(c, 0xd1b5u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 12);
    // 00d1b7  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd1b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d1c0  je 0xd1e0
    X86_AT(c, 0xd1c0u);
    if (x86_cc(c, 4)) { goto L_d1e0; }
    X86_TICK(c, 15);
    // 00d1c2  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd1c2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d1ca  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd1cau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
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
    x86_fault(c, 0xd1a2u, "ran off the end of a function");
}
void f_0000d1a9(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00d1a9  shld eax, edx, 0x10
    X86_AT(c, 0xd1a9u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d1ad  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd1adu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d1b5  jne 0xd1e0
    X86_AT(c, 0xd1b5u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 12);
    // 00d1b7  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd1b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d1c0  je 0xd1e0
    X86_AT(c, 0xd1c0u);
    if (x86_cc(c, 4)) { goto L_d1e0; }
    X86_TICK(c, 15);
    // 00d1c2  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd1c2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d1ca  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd1cau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
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
    x86_fault(c, 0xd1a9u, "ran off the end of a function");
}
void f_0000d1ad(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d1ad  cmp byte ptr gs:[ebp + 0x4ca], 2
    X86_AT(c, 0xd1adu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x4CAu))), 0x2u, 0, 1);
    // 00d1b5  jne 0xd1e0
    X86_AT(c, 0xd1b5u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 12);
    // 00d1b7  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd1b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d1c0  je 0xd1e0
    X86_AT(c, 0xd1c0u);
    if (x86_cc(c, 4)) { goto L_d1e0; }
    X86_TICK(c, 15);
    // 00d1c2  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd1c2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d1ca  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd1cau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
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
    x86_fault(c, 0xd1adu, "ran off the end of a function");
}
void f_0000d1b5(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d1b5  jne 0xd1e0
    X86_AT(c, 0xd1b5u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 12);
    // 00d1b7  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd1b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d1c0  je 0xd1e0
    X86_AT(c, 0xd1c0u);
    if (x86_cc(c, 4)) { goto L_d1e0; }
    X86_TICK(c, 15);
    // 00d1c2  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd1c2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d1ca  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd1cau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
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
    x86_fault(c, 0xd1b5u, "ran off the end of a function");
}
void f_0000d1b7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d1b7  test byte ptr gs:[ebp + esi*1 + 0x498], 2
    X86_AT(c, 0xd1b7u);
    (void)x86_logic(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x498u))) & 0x2u, 1);
    // 00d1c0  je 0xd1e0
    X86_AT(c, 0xd1c0u);
    if (x86_cc(c, 4)) { goto L_d1e0; }
    X86_TICK(c, 15);
    // 00d1c2  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd1c2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d1ca  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd1cau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
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
    x86_fault(c, 0xd1b7u, "ran off the end of a function");
}
void f_0000d1c0(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d1c0  je 0xd1e0
    X86_AT(c, 0xd1c0u);
    if (x86_cc(c, 4)) { goto L_d1e0; }
    X86_TICK(c, 15);
    // 00d1c2  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd1c2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d1ca  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd1cau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
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
    x86_fault(c, 0xd1c0u, "ran off the end of a function");
}
void f_0000d1c2(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00d1c2  mov dx, word ptr gs:[ebp + 0x470]
    X86_AT(c, 0xd1c2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x470u))));
    // 00d1ca  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd1cau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
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
    x86_fault(c, 0xd1c2u, "ran off the end of a function");
}
void f_0000d1ca(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00d1ca  mov ax, word ptr gs:[ebp + 0x474]
    X86_AT(c, 0xd1cau);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x474u))));
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
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
    x86_fault(c, 0xd1cau, "ran off the end of a function");
}
void f_0000d1d2(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d1d2  cmp si, 1
    X86_AT(c, 0xd1d2u);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), 0x1u, 0, 2);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
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
    x86_fault(c, 0xd1d2u, "ran off the end of a function");
}
void f_0000d1d6(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d1d6  jne 0xd1e0
    X86_AT(c, 0xd1d6u);
    if (x86_cc(c, 5)) { goto L_d1e0; }
    X86_TICK(c, 7);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
L_d1e0:
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
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
    x86_fault(c, 0xd1d6u, "ran off the end of a function");
}
void f_0000d1d8(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00d1d8  xchg dx, ax
    X86_AT(c, 0xd1d8u);
    { uint32_t t = (c.r[2] & 0xFFFFu); s16(c, 2, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
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
    x86_fault(c, 0xd1d8u, "ran off the end of a function");
}
void f_0000d1da(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00d1da  neg dx
    X86_AT(c, 0xd1dau);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_neg(c, v, 2)); }
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
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
    x86_fault(c, 0xd1dau, "ran off the end of a function");
}
void f_0000d1dd(X86Cpu& c) {
    X86_TICK(c, 9);
    // 00d1dd  neg ax
    X86_AT(c, 0xd1ddu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_neg(c, v, 2)); }
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
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
    x86_fault(c, 0xd1ddu, "ran off the end of a function");
}
void f_0000d1e0(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d1e0  call 0xd508
    X86_AT(c, 0xd1e0u);
    push32(c, 0xd1e5u); f_0000d508(c); X86_RET(c, 0xd1e5u);
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
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
    x86_fault(c, 0xd1e0u, "ran off the end of a function");
}
void f_0000d1e5(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d1e5  jmp 0xd22b
    X86_AT(c, 0xd1e5u);
    goto L_d22b;
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
    x86_fault(c, 0xd1e5u, "ran off the end of a function");
}
void f_0000d1e7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d1e7  cmp byte ptr gs:[ebp + 0x41c], 0
    X86_AT(c, 0xd1e7u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x0u, 0, 1);
    // 00d1ef  jne 0xd22b
    X86_AT(c, 0xd1efu);
    if (x86_cc(c, 5)) { goto L_d22b; }
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
    x86_fault(c, 0xd1e7u, "ran off the end of a function");
}
void f_0000d1ef(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d1ef  jne 0xd22b
    X86_AT(c, 0xd1efu);
    if (x86_cc(c, 5)) { goto L_d22b; }
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
    x86_fault(c, 0xd1efu, "ran off the end of a function");
}
}

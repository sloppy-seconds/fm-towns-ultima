#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000d46c(X86Cpu& c) {
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
    x86_fault(c, 0xd46cu, "ran off the end of a function");
}
void f_0000d474(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0xd474u, "ran off the end of a function");
}
void f_0000d476(X86Cpu& c) {
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
    x86_fault(c, 0xd476u, "ran off the end of a function");
}
void f_0000d47f(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0xd47fu, "ran off the end of a function");
}
void f_0000d481(X86Cpu& c) {
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
    x86_fault(c, 0xd481u, "ran off the end of a function");
}
void f_0000d489(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0xd489u, "ran off the end of a function");
}
void f_0000d4b0(X86Cpu& c) {
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
    x86_fault(c, 0xd4b0u, "ran off the end of a function");
}
void f_0000d4b8(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0xd4b8u, "ran off the end of a function");
}
void f_0000d4ba(X86Cpu& c) {
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
    x86_fault(c, 0xd4bau, "ran off the end of a function");
}
void f_0000d4c1(X86Cpu& c) {
    X86_TICK(c, 15);
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
    x86_fault(c, 0xd4c1u, "ran off the end of a function");
}
void f_0000d4c5(X86Cpu& c) {
    X86_TICK(c, 12);
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
    x86_fault(c, 0xd4c5u, "ran off the end of a function");
}
void f_0000d4cd(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0xd4cdu, "ran off the end of a function");
}
void f_0000d4cf(X86Cpu& c) {
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
    x86_fault(c, 0xd4cfu, "ran off the end of a function");
}
void f_0000d4d3(X86Cpu& c) {
    X86_TICK(c, 5);
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
    x86_fault(c, 0xd4d3u, "ran off the end of a function");
}
void f_0000d4e7(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d4e7  call 0xd508
    X86_AT(c, 0xd4e7u);
    push32(c, 0xd4ecu); f_0000d508(c); X86_RET(c, 0xd4ecu);
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
    x86_fault(c, 0xd4e7u, "ran off the end of a function");
}
void f_0000d4ec(X86Cpu& c) {
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
    x86_fault(c, 0xd4ecu, "ran off the end of a function");
}
void f_0000d4f4(X86Cpu& c) {
    X86_TICK(c, 11);
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
    x86_fault(c, 0xd4f4u, "ran off the end of a function");
}
void f_0000d4f7(X86Cpu& c) {
    X86_TICK(c, 9);
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
    x86_fault(c, 0xd4f7u, "ran off the end of a function");
}
void f_0000d4ff(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d4ff  call 0xd530
    X86_AT(c, 0xd4ffu);
    push32(c, 0xd504u); f_0000d530(c); X86_RET(c, 0xd504u);
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd4ffu, "ran off the end of a function");
}
void f_0000d504(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00d504  ret 
    X86_AT(c, 0xd504u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd504u, "ran off the end of a function");
}
void f_0000d508(X86Cpu& c) {
    X86_TICK(c, 24);
    // 00d508  movzx ecx, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd508u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu)));
    // 00d510  mov word ptr gs:[ebp + ecx*1 + 0x4a0], dx
    X86_AT(c, 0xd510u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] + 0x4A0u)), (c.r[2] & 0xFFFFu));
    // 00d519  mov word ptr gs:[ebp + ecx*1 + 0x4a2], ax
    X86_AT(c, 0xd519u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d522  add ecx, 4
    X86_AT(c, 0xd522u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d525  mov word ptr gs:[ebp + 0x49e], cx
    X86_AT(c, 0xd525u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu)), (c.r[1] & 0xFFFFu));
    // 00d52d  ret 
    X86_AT(c, 0xd52du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd508u, "ran off the end of a function");
}
void f_0000d510(X86Cpu& c) {
    X86_TICK(c, 18);
    // 00d510  mov word ptr gs:[ebp + ecx*1 + 0x4a0], dx
    X86_AT(c, 0xd510u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] + 0x4A0u)), (c.r[2] & 0xFFFFu));
    // 00d519  mov word ptr gs:[ebp + ecx*1 + 0x4a2], ax
    X86_AT(c, 0xd519u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d522  add ecx, 4
    X86_AT(c, 0xd522u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d525  mov word ptr gs:[ebp + 0x49e], cx
    X86_AT(c, 0xd525u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu)), (c.r[1] & 0xFFFFu));
    // 00d52d  ret 
    X86_AT(c, 0xd52du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd510u, "ran off the end of a function");
}
void f_0000d519(X86Cpu& c) {
    X86_TICK(c, 16);
    // 00d519  mov word ptr gs:[ebp + ecx*1 + 0x4a2], ax
    X86_AT(c, 0xd519u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[1] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d522  add ecx, 4
    X86_AT(c, 0xd522u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d525  mov word ptr gs:[ebp + 0x49e], cx
    X86_AT(c, 0xd525u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu)), (c.r[1] & 0xFFFFu));
    // 00d52d  ret 
    X86_AT(c, 0xd52du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd519u, "ran off the end of a function");
}
void f_0000d522(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00d522  add ecx, 4
    X86_AT(c, 0xd522u);
    { uint32_t v = c.r[1]; c.r[1] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d525  mov word ptr gs:[ebp + 0x49e], cx
    X86_AT(c, 0xd525u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu)), (c.r[1] & 0xFFFFu));
    // 00d52d  ret 
    X86_AT(c, 0xd52du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd522u, "ran off the end of a function");
}
void f_0000d525(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d525  mov word ptr gs:[ebp + 0x49e], cx
    X86_AT(c, 0xd525u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu)), (c.r[1] & 0xFFFFu));
    // 00d52d  ret 
    X86_AT(c, 0xd52du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd525u, "ran off the end of a function");
}
void f_0000d52d(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00d52d  ret 
    X86_AT(c, 0xd52du);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd52du, "ran off the end of a function");
}
void f_0000d530(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00d530  push esi
    X86_AT(c, 0xd530u);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00d531  cmp word ptr gs:[ebp + 0x49e], 8
    X86_AT(c, 0xd531u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))), 0x8u, 0, 2);
    // 00d53a  jl 0xd627
    X86_AT(c, 0xd53au);
    if (x86_cc(c, 12)) { goto L_d627; }
    X86_TICK(c, 7);
    // 00d540  call 0xd62c
    X86_AT(c, 0xd540u);
    push32(c, 0xd545u); f_0000d62c(c); X86_RET(c, 0xd545u);
    X86_TICK(c, 14);
    // 00d545  sub esi, esi
    X86_AT(c, 0xd545u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d547  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xd547u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00d54f  jne 0xd59f
    X86_AT(c, 0xd54fu);
    if (x86_cc(c, 5)) { goto L_d59f; }
L_d551:
    X86_TICK(c, 11);
    // 00d551  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd551u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d559  or si, si
    X86_AT(c, 0xd559u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d55c  je 0xd568
    X86_AT(c, 0xd55cu);
    if (x86_cc(c, 4)) { goto L_d568; }
    X86_TICK(c, 7);
    // 00d55e  cmp ax, 0x10
    X86_AT(c, 0xd55eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x10u, 0, 2);
    // 00d562  jne 0xd568
    X86_AT(c, 0xd562u);
    if (x86_cc(c, 5)) { goto L_d568; }
    X86_TICK(c, 2);
    // 00d564  add si, 4
    X86_AT(c, 0xd564u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
L_d568:
    X86_TICK(c, 20);
    // 00d568  mov edx, dword ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd568u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)));
    // 00d570  shld eax, edx, 0x10
    X86_AT(c, 0xd570u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d574  add esi, 4
    X86_AT(c, 0xd574u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d577  inc dx
    X86_AT(c, 0xd577u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d579  dec ax
    X86_AT(c, 0xd579u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00d57b  cmp dx, ax
    X86_AT(c, 0xd57bu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d57e  jg 0xd58d
    X86_AT(c, 0xd57eu);
    if (x86_cc(c, 15)) { goto L_d58d; }
    X86_TICK(c, 11);
    // 00d580  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd580u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d588  call 0xd724
    X86_AT(c, 0xd588u);
    push32(c, 0xd58du); f_0000d724(c); X86_RET(c, 0xd58du);
L_d58d:
    X86_TICK(c, 13);
    // 00d58d  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd58du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d595  sub ax, si
    X86_AT(c, 0xd595u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d598  cmp ax, si
    X86_AT(c, 0xd598u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d59b  jg 0xd551
    X86_AT(c, 0xd59bu);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xd551u); goto L_d551; }
    X86_TICK(c, 14);
    // 00d59d  pop esi
    X86_AT(c, 0xd59du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d59e  ret 
    X86_AT(c, 0xd59eu);
    c.eip = pop32(c); return;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
L_d627:
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd530u, "ran off the end of a function");
}
void f_0000d531(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d531  cmp word ptr gs:[ebp + 0x49e], 8
    X86_AT(c, 0xd531u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))), 0x8u, 0, 2);
    // 00d53a  jl 0xd627
    X86_AT(c, 0xd53au);
    if (x86_cc(c, 12)) { goto L_d627; }
    X86_TICK(c, 7);
    // 00d540  call 0xd62c
    X86_AT(c, 0xd540u);
    push32(c, 0xd545u); f_0000d62c(c); X86_RET(c, 0xd545u);
    X86_TICK(c, 14);
    // 00d545  sub esi, esi
    X86_AT(c, 0xd545u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d547  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xd547u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00d54f  jne 0xd59f
    X86_AT(c, 0xd54fu);
    if (x86_cc(c, 5)) { goto L_d59f; }
L_d551:
    X86_TICK(c, 11);
    // 00d551  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd551u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d559  or si, si
    X86_AT(c, 0xd559u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d55c  je 0xd568
    X86_AT(c, 0xd55cu);
    if (x86_cc(c, 4)) { goto L_d568; }
    X86_TICK(c, 7);
    // 00d55e  cmp ax, 0x10
    X86_AT(c, 0xd55eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x10u, 0, 2);
    // 00d562  jne 0xd568
    X86_AT(c, 0xd562u);
    if (x86_cc(c, 5)) { goto L_d568; }
    X86_TICK(c, 2);
    // 00d564  add si, 4
    X86_AT(c, 0xd564u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
L_d568:
    X86_TICK(c, 20);
    // 00d568  mov edx, dword ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd568u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)));
    // 00d570  shld eax, edx, 0x10
    X86_AT(c, 0xd570u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d574  add esi, 4
    X86_AT(c, 0xd574u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d577  inc dx
    X86_AT(c, 0xd577u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d579  dec ax
    X86_AT(c, 0xd579u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00d57b  cmp dx, ax
    X86_AT(c, 0xd57bu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d57e  jg 0xd58d
    X86_AT(c, 0xd57eu);
    if (x86_cc(c, 15)) { goto L_d58d; }
    X86_TICK(c, 11);
    // 00d580  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd580u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d588  call 0xd724
    X86_AT(c, 0xd588u);
    push32(c, 0xd58du); f_0000d724(c); X86_RET(c, 0xd58du);
L_d58d:
    X86_TICK(c, 13);
    // 00d58d  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd58du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d595  sub ax, si
    X86_AT(c, 0xd595u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d598  cmp ax, si
    X86_AT(c, 0xd598u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d59b  jg 0xd551
    X86_AT(c, 0xd59bu);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xd551u); goto L_d551; }
    X86_TICK(c, 14);
    // 00d59d  pop esi
    X86_AT(c, 0xd59du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d59e  ret 
    X86_AT(c, 0xd59eu);
    c.eip = pop32(c); return;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
L_d627:
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd531u, "ran off the end of a function");
}
void f_0000d53a(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d53a  jl 0xd627
    X86_AT(c, 0xd53au);
    if (x86_cc(c, 12)) { goto L_d627; }
    X86_TICK(c, 7);
    // 00d540  call 0xd62c
    X86_AT(c, 0xd540u);
    push32(c, 0xd545u); f_0000d62c(c); X86_RET(c, 0xd545u);
    X86_TICK(c, 14);
    // 00d545  sub esi, esi
    X86_AT(c, 0xd545u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d547  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xd547u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00d54f  jne 0xd59f
    X86_AT(c, 0xd54fu);
    if (x86_cc(c, 5)) { goto L_d59f; }
L_d551:
    X86_TICK(c, 11);
    // 00d551  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd551u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d559  or si, si
    X86_AT(c, 0xd559u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d55c  je 0xd568
    X86_AT(c, 0xd55cu);
    if (x86_cc(c, 4)) { goto L_d568; }
    X86_TICK(c, 7);
    // 00d55e  cmp ax, 0x10
    X86_AT(c, 0xd55eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x10u, 0, 2);
    // 00d562  jne 0xd568
    X86_AT(c, 0xd562u);
    if (x86_cc(c, 5)) { goto L_d568; }
    X86_TICK(c, 2);
    // 00d564  add si, 4
    X86_AT(c, 0xd564u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
L_d568:
    X86_TICK(c, 20);
    // 00d568  mov edx, dword ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd568u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)));
    // 00d570  shld eax, edx, 0x10
    X86_AT(c, 0xd570u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d574  add esi, 4
    X86_AT(c, 0xd574u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d577  inc dx
    X86_AT(c, 0xd577u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d579  dec ax
    X86_AT(c, 0xd579u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00d57b  cmp dx, ax
    X86_AT(c, 0xd57bu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d57e  jg 0xd58d
    X86_AT(c, 0xd57eu);
    if (x86_cc(c, 15)) { goto L_d58d; }
    X86_TICK(c, 11);
    // 00d580  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd580u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d588  call 0xd724
    X86_AT(c, 0xd588u);
    push32(c, 0xd58du); f_0000d724(c); X86_RET(c, 0xd58du);
L_d58d:
    X86_TICK(c, 13);
    // 00d58d  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd58du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d595  sub ax, si
    X86_AT(c, 0xd595u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d598  cmp ax, si
    X86_AT(c, 0xd598u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d59b  jg 0xd551
    X86_AT(c, 0xd59bu);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xd551u); goto L_d551; }
    X86_TICK(c, 14);
    // 00d59d  pop esi
    X86_AT(c, 0xd59du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d59e  ret 
    X86_AT(c, 0xd59eu);
    c.eip = pop32(c); return;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
L_d627:
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd53au, "ran off the end of a function");
}
void f_0000d540(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d540  call 0xd62c
    X86_AT(c, 0xd540u);
    push32(c, 0xd545u); f_0000d62c(c); X86_RET(c, 0xd545u);
    X86_TICK(c, 14);
    // 00d545  sub esi, esi
    X86_AT(c, 0xd545u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d547  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xd547u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00d54f  jne 0xd59f
    X86_AT(c, 0xd54fu);
    if (x86_cc(c, 5)) { goto L_d59f; }
L_d551:
    X86_TICK(c, 11);
    // 00d551  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd551u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d559  or si, si
    X86_AT(c, 0xd559u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d55c  je 0xd568
    X86_AT(c, 0xd55cu);
    if (x86_cc(c, 4)) { goto L_d568; }
    X86_TICK(c, 7);
    // 00d55e  cmp ax, 0x10
    X86_AT(c, 0xd55eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x10u, 0, 2);
    // 00d562  jne 0xd568
    X86_AT(c, 0xd562u);
    if (x86_cc(c, 5)) { goto L_d568; }
    X86_TICK(c, 2);
    // 00d564  add si, 4
    X86_AT(c, 0xd564u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
L_d568:
    X86_TICK(c, 20);
    // 00d568  mov edx, dword ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd568u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)));
    // 00d570  shld eax, edx, 0x10
    X86_AT(c, 0xd570u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d574  add esi, 4
    X86_AT(c, 0xd574u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d577  inc dx
    X86_AT(c, 0xd577u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d579  dec ax
    X86_AT(c, 0xd579u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00d57b  cmp dx, ax
    X86_AT(c, 0xd57bu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d57e  jg 0xd58d
    X86_AT(c, 0xd57eu);
    if (x86_cc(c, 15)) { goto L_d58d; }
    X86_TICK(c, 11);
    // 00d580  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd580u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d588  call 0xd724
    X86_AT(c, 0xd588u);
    push32(c, 0xd58du); f_0000d724(c); X86_RET(c, 0xd58du);
L_d58d:
    X86_TICK(c, 13);
    // 00d58d  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd58du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d595  sub ax, si
    X86_AT(c, 0xd595u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d598  cmp ax, si
    X86_AT(c, 0xd598u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d59b  jg 0xd551
    X86_AT(c, 0xd59bu);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xd551u); goto L_d551; }
    X86_TICK(c, 14);
    // 00d59d  pop esi
    X86_AT(c, 0xd59du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d59e  ret 
    X86_AT(c, 0xd59eu);
    c.eip = pop32(c); return;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd540u, "ran off the end of a function");
}
void f_0000d545(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00d545  sub esi, esi
    X86_AT(c, 0xd545u);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d547  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xd547u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00d54f  jne 0xd59f
    X86_AT(c, 0xd54fu);
    if (x86_cc(c, 5)) { goto L_d59f; }
L_d551:
    X86_TICK(c, 11);
    // 00d551  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd551u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d559  or si, si
    X86_AT(c, 0xd559u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d55c  je 0xd568
    X86_AT(c, 0xd55cu);
    if (x86_cc(c, 4)) { goto L_d568; }
    X86_TICK(c, 7);
    // 00d55e  cmp ax, 0x10
    X86_AT(c, 0xd55eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x10u, 0, 2);
    // 00d562  jne 0xd568
    X86_AT(c, 0xd562u);
    if (x86_cc(c, 5)) { goto L_d568; }
    X86_TICK(c, 2);
    // 00d564  add si, 4
    X86_AT(c, 0xd564u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
L_d568:
    X86_TICK(c, 20);
    // 00d568  mov edx, dword ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd568u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)));
    // 00d570  shld eax, edx, 0x10
    X86_AT(c, 0xd570u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d574  add esi, 4
    X86_AT(c, 0xd574u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d577  inc dx
    X86_AT(c, 0xd577u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d579  dec ax
    X86_AT(c, 0xd579u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00d57b  cmp dx, ax
    X86_AT(c, 0xd57bu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d57e  jg 0xd58d
    X86_AT(c, 0xd57eu);
    if (x86_cc(c, 15)) { goto L_d58d; }
    X86_TICK(c, 11);
    // 00d580  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd580u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d588  call 0xd724
    X86_AT(c, 0xd588u);
    push32(c, 0xd58du); f_0000d724(c); X86_RET(c, 0xd58du);
L_d58d:
    X86_TICK(c, 13);
    // 00d58d  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd58du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d595  sub ax, si
    X86_AT(c, 0xd595u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d598  cmp ax, si
    X86_AT(c, 0xd598u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d59b  jg 0xd551
    X86_AT(c, 0xd59bu);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xd551u); goto L_d551; }
    X86_TICK(c, 14);
    // 00d59d  pop esi
    X86_AT(c, 0xd59du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d59e  ret 
    X86_AT(c, 0xd59eu);
    c.eip = pop32(c); return;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd545u, "ran off the end of a function");
}
void f_0000d547(X86Cpu& c) {
    X86_TICK(c, 12);
    // 00d547  cmp byte ptr gs:[ebp + 0x41c], 1
    X86_AT(c, 0xd547u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x41Cu))), 0x1u, 0, 1);
    // 00d54f  jne 0xd59f
    X86_AT(c, 0xd54fu);
    if (x86_cc(c, 5)) { goto L_d59f; }
L_d551:
    X86_TICK(c, 11);
    // 00d551  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd551u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d559  or si, si
    X86_AT(c, 0xd559u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d55c  je 0xd568
    X86_AT(c, 0xd55cu);
    if (x86_cc(c, 4)) { goto L_d568; }
    X86_TICK(c, 7);
    // 00d55e  cmp ax, 0x10
    X86_AT(c, 0xd55eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x10u, 0, 2);
    // 00d562  jne 0xd568
    X86_AT(c, 0xd562u);
    if (x86_cc(c, 5)) { goto L_d568; }
    X86_TICK(c, 2);
    // 00d564  add si, 4
    X86_AT(c, 0xd564u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
L_d568:
    X86_TICK(c, 20);
    // 00d568  mov edx, dword ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd568u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)));
    // 00d570  shld eax, edx, 0x10
    X86_AT(c, 0xd570u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d574  add esi, 4
    X86_AT(c, 0xd574u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d577  inc dx
    X86_AT(c, 0xd577u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d579  dec ax
    X86_AT(c, 0xd579u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00d57b  cmp dx, ax
    X86_AT(c, 0xd57bu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d57e  jg 0xd58d
    X86_AT(c, 0xd57eu);
    if (x86_cc(c, 15)) { goto L_d58d; }
    X86_TICK(c, 11);
    // 00d580  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd580u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d588  call 0xd724
    X86_AT(c, 0xd588u);
    push32(c, 0xd58du); f_0000d724(c); X86_RET(c, 0xd58du);
L_d58d:
    X86_TICK(c, 13);
    // 00d58d  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd58du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d595  sub ax, si
    X86_AT(c, 0xd595u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d598  cmp ax, si
    X86_AT(c, 0xd598u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d59b  jg 0xd551
    X86_AT(c, 0xd59bu);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xd551u); goto L_d551; }
    X86_TICK(c, 14);
    // 00d59d  pop esi
    X86_AT(c, 0xd59du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d59e  ret 
    X86_AT(c, 0xd59eu);
    c.eip = pop32(c); return;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd547u, "ran off the end of a function");
}
void f_0000d54f(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d54f  jne 0xd59f
    X86_AT(c, 0xd54fu);
    if (x86_cc(c, 5)) { goto L_d59f; }
L_d551:
    X86_TICK(c, 11);
    // 00d551  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd551u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d559  or si, si
    X86_AT(c, 0xd559u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d55c  je 0xd568
    X86_AT(c, 0xd55cu);
    if (x86_cc(c, 4)) { goto L_d568; }
    X86_TICK(c, 7);
    // 00d55e  cmp ax, 0x10
    X86_AT(c, 0xd55eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x10u, 0, 2);
    // 00d562  jne 0xd568
    X86_AT(c, 0xd562u);
    if (x86_cc(c, 5)) { goto L_d568; }
    X86_TICK(c, 2);
    // 00d564  add si, 4
    X86_AT(c, 0xd564u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
L_d568:
    X86_TICK(c, 20);
    // 00d568  mov edx, dword ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd568u);
    c.r[2] = rd32((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)));
    // 00d570  shld eax, edx, 0x10
    X86_AT(c, 0xd570u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_double(c, true, v, c.r[2], 0x10u, 4, w); if (w) c.r[0] = r; }
    // 00d574  add esi, 4
    X86_AT(c, 0xd574u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d577  inc dx
    X86_AT(c, 0xd577u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d579  dec ax
    X86_AT(c, 0xd579u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_dec(c, v, 2)); }
    // 00d57b  cmp dx, ax
    X86_AT(c, 0xd57bu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d57e  jg 0xd58d
    X86_AT(c, 0xd57eu);
    if (x86_cc(c, 15)) { goto L_d58d; }
    X86_TICK(c, 11);
    // 00d580  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd580u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d588  call 0xd724
    X86_AT(c, 0xd588u);
    push32(c, 0xd58du); f_0000d724(c); X86_RET(c, 0xd58du);
L_d58d:
    X86_TICK(c, 13);
    // 00d58d  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd58du);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d595  sub ax, si
    X86_AT(c, 0xd595u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d598  cmp ax, si
    X86_AT(c, 0xd598u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d59b  jg 0xd551
    X86_AT(c, 0xd59bu);
    if (x86_cc(c, 15)) { X86_POLL(c, 0xd551u); goto L_d551; }
    X86_TICK(c, 14);
    // 00d59d  pop esi
    X86_AT(c, 0xd59du);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d59e  ret 
    X86_AT(c, 0xd59eu);
    c.eip = pop32(c); return;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd54fu, "ran off the end of a function");
}
void f_0000d59f(X86Cpu& c) {
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd59fu, "ran off the end of a function");
}
void f_0000d5a2(X86Cpu& c) {
    goto L_d5a2;
L_d59f:
    X86_TICK(c, 2);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
L_d5a2:
    X86_TICK(c, 5);
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5a2u, "ran off the end of a function");
}
void f_0000d5a4(X86Cpu& c) {
    goto L_d5a4;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
L_d5a4:
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5a4u, "ran off the end of a function");
}
void f_0000d5ac(X86Cpu& c) {
    goto L_d5ac;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 4);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
L_d5ac:
    X86_TICK(c, 7);
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5acu, "ran off the end of a function");
}
void f_0000d5b0(X86Cpu& c) {
    goto L_d5b0;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 6);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
L_d5b0:
    X86_TICK(c, 5);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5b0u, "ran off the end of a function");
}
void f_0000d5b2(X86Cpu& c) {
    goto L_d5b2;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
L_d5b2:
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5b2u, "ran off the end of a function");
}
void f_0000d5bb(X86Cpu& c) {
    goto L_d5bb;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 4);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
L_d5bb:
    X86_TICK(c, 11);
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5bbu, "ran off the end of a function");
}
void f_0000d5bd(X86Cpu& c) {
    goto L_d5bd;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 6);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5bd:
    X86_TICK(c, 9);
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5bdu, "ran off the end of a function");
}
void f_0000d5c1(X86Cpu& c) {
    goto L_d5c1;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 8);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
L_d5c1:
    X86_TICK(c, 7);
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5c1u, "ran off the end of a function");
}
void f_0000d5eb(X86Cpu& c) {
    goto L_d5eb;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5ebu, "ran off the end of a function");
}
void f_0000d5f4(X86Cpu& c) {
    goto L_d5f4;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 4);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
L_d5f4:
    X86_TICK(c, 2);
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5f4u, "ran off the end of a function");
}
void f_0000d5f8(X86Cpu& c) {
    goto L_d5f8;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd5f8u, "ran off the end of a function");
}
void f_0000d601(X86Cpu& c) {
    goto L_d601;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 4);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
L_d601:
    X86_TICK(c, 7);
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd601u, "ran off the end of a function");
}
void f_0000d604(X86Cpu& c) {
    goto L_d604;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 6);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
L_d604:
    X86_TICK(c, 5);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd604u, "ran off the end of a function");
}
void f_0000d606(X86Cpu& c) {
    goto L_d606;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
L_d606:
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd606u, "ran off the end of a function");
}
void f_0000d60e(X86Cpu& c) {
    goto L_d60e;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 4);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
L_d60e:
    X86_TICK(c, 7);
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd60eu, "ran off the end of a function");
}
void f_0000d613(X86Cpu& c) {
    goto L_d613;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 13);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd613u, "ran off the end of a function");
}
void f_0000d61b(X86Cpu& c) {
    goto L_d61b;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 4);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
L_d61b:
    X86_TICK(c, 9);
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd61bu, "ran off the end of a function");
}
void f_0000d61e(X86Cpu& c) {
    goto L_d61e;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 6);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
L_d61e:
    X86_TICK(c, 7);
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd61eu, "ran off the end of a function");
}
void f_0000d621(X86Cpu& c) {
    goto L_d621;
L_d59f:
    X86_TICK(c, 7);
    // 00d59f  or si, si
    X86_AT(c, 0xd59fu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_logic(c, v | (c.r[6] & 0xFFFFu), 2)); }
    // 00d5a2  je 0xd5eb
    X86_AT(c, 0xd5a2u);
    if (x86_cc(c, 4)) { goto L_d5eb; }
    X86_TICK(c, 11);
    // 00d5a4  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd5a4u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d5ac  cmp ax, 0xc
    X86_AT(c, 0xd5acu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0xCu, 0, 2);
    // 00d5b0  jne 0xd5c3
    X86_AT(c, 0xd5b0u);
    if (x86_cc(c, 5)) { goto L_d5c3; }
    X86_TICK(c, 15);
    // 00d5b2  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5b2u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5bb  inc dx
    X86_AT(c, 0xd5bbu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
    // 00d5bd  add si, 4
    X86_AT(c, 0xd5bdu);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x4u, 0, 2)); }
    // 00d5c1  jmp 0xd5f8
    X86_AT(c, 0xd5c1u);
    goto L_d5f8;
L_d5c3:
    X86_TICK(c, 18);
    // 00d5c3  add esi, 2
    X86_AT(c, 0xd5c3u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x2u, 0, 4); }
    // 00d5c6  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5c6u);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5cf  cmp word ptr gs:[ebp + esi*1 + 0x49e], dx
    X86_AT(c, 0xd5cfu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))), (c.r[2] & 0xFFFFu), 0, 2);
    // 00d5d8  jl 0xd5e5
    X86_AT(c, 0xd5d8u);
    if (x86_cc(c, 12)) { goto L_d5e5; }
    X86_TICK(c, 6);
    // 00d5da  mov dx, word ptr gs:[ebp + esi*1 + 0x49e]
    X86_AT(c, 0xd5dau);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x49Eu))));
    // 00d5e3  inc dx
    X86_AT(c, 0xd5e3u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_inc(c, v, 2)); }
L_d5e5:
    X86_TICK(c, 9);
    // 00d5e5  add si, 6
    X86_AT(c, 0xd5e5u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
    // 00d5e9  jmp 0xd5f8
    X86_AT(c, 0xd5e9u);
    goto L_d5f8;
L_d5eb:
    X86_TICK(c, 6);
    // 00d5eb  mov dx, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5ebu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d5f4  add si, 6
    X86_AT(c, 0xd5f4u);
    { uint32_t v = (c.r[6] & 0xFFFFu); s16(c, 6, x86_add(c, v, 0x6u, 0, 2)); }
L_d5f8:
    X86_TICK(c, 11);
    // 00d5f8  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd5f8u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d601  cmp dx, ax
    X86_AT(c, 0xd601u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d604  jg 0xd613
    X86_AT(c, 0xd604u);
    if (x86_cc(c, 15)) { goto L_d613; }
    X86_TICK(c, 11);
    // 00d606  mov cx, word ptr gs:[ebp + 0x49c]
    X86_AT(c, 0xd606u);
    s16(c, 1, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Cu))));
    // 00d60e  call 0xd724
    X86_AT(c, 0xd60eu);
    push32(c, 0xd613u); f_0000d724(c); X86_RET(c, 0xd613u);
L_d613:
    X86_TICK(c, 8);
    // 00d613  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd613u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d61b  sub ax, si
    X86_AT(c, 0xd61bu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, (c.r[6] & 0xFFFFu), 0, 2)); }
    // 00d61e  cmp ax, si
    X86_AT(c, 0xd61eu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[6] & 0xFFFFu), 0, 2);
L_d621:
    X86_TICK(c, 5);
    // 00d621  jge 0xd59f
    X86_AT(c, 0xd621u);
    if (x86_cc(c, 13)) { X86_POLL(c, 0xd59fu); goto L_d59f; }
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd621u, "ran off the end of a function");
}
void f_0000d627(X86Cpu& c) {
    X86_TICK(c, 14);
    // 00d627  pop esi
    X86_AT(c, 0xd627u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd627u, "ran off the end of a function");
}
void f_0000d628(X86Cpu& c) {
    X86_TICK(c, 10);
    // 00d628  ret 
    X86_AT(c, 0xd628u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd628u, "ran off the end of a function");
}
void f_0000d62c(X86Cpu& c) {
    X86_TICK(c, 19);
    // 00d62c  push edi
    X86_AT(c, 0xd62cu);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 00d62d  push esi
    X86_AT(c, 0xd62du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00d62e  push ebx
    X86_AT(c, 0xd62eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00d62f  sub esi, esi
    X86_AT(c, 0xd62fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d631  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd631u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d639  cmp ax, 8
    X86_AT(c, 0xd639u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x8u, 0, 2);
    // 00d63d  ja 0xd684
    X86_AT(c, 0xd63du);
    if (x86_cc(c, 7)) { goto L_d684; }
    X86_TICK(c, 16);
    // 00d63f  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd63fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d648  cmp word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd648u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d651  jge 0xd680
    X86_AT(c, 0xd651u);
    if (x86_cc(c, 13)) { goto L_d680; }
    X86_TICK(c, 18);
    // 00d653  xchg word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd653u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d65c  mov word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd65cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d665  mov ax, word ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd665u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))));
    // 00d66e  xchg word ptr gs:[ebp + esi*1 + 0x4a6], ax
    X86_AT(c, 0xd66eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A6u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d677  mov word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd677u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d680:
    X86_TICK(c, 22);
    // 00d680  pop ebx
    X86_AT(c, 0xd680u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d681  pop esi
    X86_AT(c, 0xd681u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d682  pop edi
    X86_AT(c, 0xd682u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d683  ret 
    X86_AT(c, 0xd683u);
    c.eip = pop32(c); return;
L_d684:
    X86_TICK(c, 10);
    // 00d684  mov ebx, eax
    X86_AT(c, 0xd684u);
    c.r[3] = c.r[0];
    // 00d686  sub bx, 4
    X86_AT(c, 0xd686u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d68a  mov ecx, ebx
    X86_AT(c, 0xd68au);
    c.r[1] = c.r[3];
    // 00d68c  sub cx, 4
    X86_AT(c, 0xd68cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d690  sub edi, edi
    X86_AT(c, 0xd690u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd62cu, "ran off the end of a function");
}
void f_0000d62d(X86Cpu& c) {
    X86_TICK(c, 17);
    // 00d62d  push esi
    X86_AT(c, 0xd62du);
    { uint32_t v = c.r[6]; push32(c, v); }
    // 00d62e  push ebx
    X86_AT(c, 0xd62eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00d62f  sub esi, esi
    X86_AT(c, 0xd62fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d631  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd631u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d639  cmp ax, 8
    X86_AT(c, 0xd639u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x8u, 0, 2);
    // 00d63d  ja 0xd684
    X86_AT(c, 0xd63du);
    if (x86_cc(c, 7)) { goto L_d684; }
    X86_TICK(c, 16);
    // 00d63f  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd63fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d648  cmp word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd648u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d651  jge 0xd680
    X86_AT(c, 0xd651u);
    if (x86_cc(c, 13)) { goto L_d680; }
    X86_TICK(c, 18);
    // 00d653  xchg word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd653u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d65c  mov word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd65cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d665  mov ax, word ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd665u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))));
    // 00d66e  xchg word ptr gs:[ebp + esi*1 + 0x4a6], ax
    X86_AT(c, 0xd66eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A6u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d677  mov word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd677u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d680:
    X86_TICK(c, 22);
    // 00d680  pop ebx
    X86_AT(c, 0xd680u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d681  pop esi
    X86_AT(c, 0xd681u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d682  pop edi
    X86_AT(c, 0xd682u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d683  ret 
    X86_AT(c, 0xd683u);
    c.eip = pop32(c); return;
L_d684:
    X86_TICK(c, 10);
    // 00d684  mov ebx, eax
    X86_AT(c, 0xd684u);
    c.r[3] = c.r[0];
    // 00d686  sub bx, 4
    X86_AT(c, 0xd686u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d68a  mov ecx, ebx
    X86_AT(c, 0xd68au);
    c.r[1] = c.r[3];
    // 00d68c  sub cx, 4
    X86_AT(c, 0xd68cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d690  sub edi, edi
    X86_AT(c, 0xd690u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd62du, "ran off the end of a function");
}
void f_0000d62e(X86Cpu& c) {
    X86_TICK(c, 15);
    // 00d62e  push ebx
    X86_AT(c, 0xd62eu);
    { uint32_t v = c.r[3]; push32(c, v); }
    // 00d62f  sub esi, esi
    X86_AT(c, 0xd62fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d631  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd631u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d639  cmp ax, 8
    X86_AT(c, 0xd639u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x8u, 0, 2);
    // 00d63d  ja 0xd684
    X86_AT(c, 0xd63du);
    if (x86_cc(c, 7)) { goto L_d684; }
    X86_TICK(c, 16);
    // 00d63f  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd63fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d648  cmp word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd648u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d651  jge 0xd680
    X86_AT(c, 0xd651u);
    if (x86_cc(c, 13)) { goto L_d680; }
    X86_TICK(c, 18);
    // 00d653  xchg word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd653u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d65c  mov word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd65cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d665  mov ax, word ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd665u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))));
    // 00d66e  xchg word ptr gs:[ebp + esi*1 + 0x4a6], ax
    X86_AT(c, 0xd66eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A6u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d677  mov word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd677u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d680:
    X86_TICK(c, 22);
    // 00d680  pop ebx
    X86_AT(c, 0xd680u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d681  pop esi
    X86_AT(c, 0xd681u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d682  pop edi
    X86_AT(c, 0xd682u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d683  ret 
    X86_AT(c, 0xd683u);
    c.eip = pop32(c); return;
L_d684:
    X86_TICK(c, 10);
    // 00d684  mov ebx, eax
    X86_AT(c, 0xd684u);
    c.r[3] = c.r[0];
    // 00d686  sub bx, 4
    X86_AT(c, 0xd686u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d68a  mov ecx, ebx
    X86_AT(c, 0xd68au);
    c.r[1] = c.r[3];
    // 00d68c  sub cx, 4
    X86_AT(c, 0xd68cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d690  sub edi, edi
    X86_AT(c, 0xd690u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd62eu, "ran off the end of a function");
}
void f_0000d62f(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00d62f  sub esi, esi
    X86_AT(c, 0xd62fu);
    { uint32_t v = c.r[6]; c.r[6] = x86_sub(c, v, c.r[6], 0, 4); }
    // 00d631  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd631u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d639  cmp ax, 8
    X86_AT(c, 0xd639u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x8u, 0, 2);
    // 00d63d  ja 0xd684
    X86_AT(c, 0xd63du);
    if (x86_cc(c, 7)) { goto L_d684; }
    X86_TICK(c, 16);
    // 00d63f  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd63fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d648  cmp word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd648u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d651  jge 0xd680
    X86_AT(c, 0xd651u);
    if (x86_cc(c, 13)) { goto L_d680; }
    X86_TICK(c, 18);
    // 00d653  xchg word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd653u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d65c  mov word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd65cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d665  mov ax, word ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd665u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))));
    // 00d66e  xchg word ptr gs:[ebp + esi*1 + 0x4a6], ax
    X86_AT(c, 0xd66eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A6u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d677  mov word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd677u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d680:
    X86_TICK(c, 22);
    // 00d680  pop ebx
    X86_AT(c, 0xd680u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d681  pop esi
    X86_AT(c, 0xd681u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d682  pop edi
    X86_AT(c, 0xd682u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d683  ret 
    X86_AT(c, 0xd683u);
    c.eip = pop32(c); return;
L_d684:
    X86_TICK(c, 10);
    // 00d684  mov ebx, eax
    X86_AT(c, 0xd684u);
    c.r[3] = c.r[0];
    // 00d686  sub bx, 4
    X86_AT(c, 0xd686u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d68a  mov ecx, ebx
    X86_AT(c, 0xd68au);
    c.r[1] = c.r[3];
    // 00d68c  sub cx, 4
    X86_AT(c, 0xd68cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d690  sub edi, edi
    X86_AT(c, 0xd690u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd62fu, "ran off the end of a function");
}
void f_0000d631(X86Cpu& c) {
    X86_TICK(c, 11);
    // 00d631  mov ax, word ptr gs:[ebp + 0x49e]
    X86_AT(c, 0xd631u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x49Eu))));
    // 00d639  cmp ax, 8
    X86_AT(c, 0xd639u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x8u, 0, 2);
    // 00d63d  ja 0xd684
    X86_AT(c, 0xd63du);
    if (x86_cc(c, 7)) { goto L_d684; }
    X86_TICK(c, 16);
    // 00d63f  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd63fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d648  cmp word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd648u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d651  jge 0xd680
    X86_AT(c, 0xd651u);
    if (x86_cc(c, 13)) { goto L_d680; }
    X86_TICK(c, 18);
    // 00d653  xchg word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd653u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d65c  mov word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd65cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d665  mov ax, word ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd665u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))));
    // 00d66e  xchg word ptr gs:[ebp + esi*1 + 0x4a6], ax
    X86_AT(c, 0xd66eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A6u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d677  mov word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd677u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d680:
    X86_TICK(c, 22);
    // 00d680  pop ebx
    X86_AT(c, 0xd680u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d681  pop esi
    X86_AT(c, 0xd681u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d682  pop edi
    X86_AT(c, 0xd682u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d683  ret 
    X86_AT(c, 0xd683u);
    c.eip = pop32(c); return;
L_d684:
    X86_TICK(c, 10);
    // 00d684  mov ebx, eax
    X86_AT(c, 0xd684u);
    c.r[3] = c.r[0];
    // 00d686  sub bx, 4
    X86_AT(c, 0xd686u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d68a  mov ecx, ebx
    X86_AT(c, 0xd68au);
    c.r[1] = c.r[3];
    // 00d68c  sub cx, 4
    X86_AT(c, 0xd68cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d690  sub edi, edi
    X86_AT(c, 0xd690u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd631u, "ran off the end of a function");
}
void f_0000d639(X86Cpu& c) {
    X86_TICK(c, 7);
    // 00d639  cmp ax, 8
    X86_AT(c, 0xd639u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), 0x8u, 0, 2);
    // 00d63d  ja 0xd684
    X86_AT(c, 0xd63du);
    if (x86_cc(c, 7)) { goto L_d684; }
    X86_TICK(c, 16);
    // 00d63f  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd63fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d648  cmp word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd648u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d651  jge 0xd680
    X86_AT(c, 0xd651u);
    if (x86_cc(c, 13)) { goto L_d680; }
    X86_TICK(c, 18);
    // 00d653  xchg word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd653u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d65c  mov word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd65cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d665  mov ax, word ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd665u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))));
    // 00d66e  xchg word ptr gs:[ebp + esi*1 + 0x4a6], ax
    X86_AT(c, 0xd66eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A6u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d677  mov word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd677u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d680:
    X86_TICK(c, 22);
    // 00d680  pop ebx
    X86_AT(c, 0xd680u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d681  pop esi
    X86_AT(c, 0xd681u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d682  pop edi
    X86_AT(c, 0xd682u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d683  ret 
    X86_AT(c, 0xd683u);
    c.eip = pop32(c); return;
L_d684:
    X86_TICK(c, 10);
    // 00d684  mov ebx, eax
    X86_AT(c, 0xd684u);
    c.r[3] = c.r[0];
    // 00d686  sub bx, 4
    X86_AT(c, 0xd686u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d68a  mov ecx, ebx
    X86_AT(c, 0xd68au);
    c.r[1] = c.r[3];
    // 00d68c  sub cx, 4
    X86_AT(c, 0xd68cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d690  sub edi, edi
    X86_AT(c, 0xd690u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd639u, "ran off the end of a function");
}
void f_0000d63d(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00d63d  ja 0xd684
    X86_AT(c, 0xd63du);
    if (x86_cc(c, 7)) { goto L_d684; }
    X86_TICK(c, 16);
    // 00d63f  mov ax, word ptr gs:[ebp + esi*1 + 0x4a0]
    X86_AT(c, 0xd63fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))));
    // 00d648  cmp word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd648u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d651  jge 0xd680
    X86_AT(c, 0xd651u);
    if (x86_cc(c, 13)) { goto L_d680; }
    X86_TICK(c, 18);
    // 00d653  xchg word ptr gs:[ebp + esi*1 + 0x4a4], ax
    X86_AT(c, 0xd653u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A4u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d65c  mov word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd65cu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d665  mov ax, word ptr gs:[ebp + esi*1 + 0x4a2]
    X86_AT(c, 0xd665u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))));
    // 00d66e  xchg word ptr gs:[ebp + esi*1 + 0x4a6], ax
    X86_AT(c, 0xd66eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A6u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d677  mov word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd677u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d680:
    X86_TICK(c, 22);
    // 00d680  pop ebx
    X86_AT(c, 0xd680u);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d681  pop esi
    X86_AT(c, 0xd681u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d682  pop edi
    X86_AT(c, 0xd682u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d683  ret 
    X86_AT(c, 0xd683u);
    c.eip = pop32(c); return;
L_d684:
    X86_TICK(c, 10);
    // 00d684  mov ebx, eax
    X86_AT(c, 0xd684u);
    c.r[3] = c.r[0];
    // 00d686  sub bx, 4
    X86_AT(c, 0xd686u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d68a  mov ecx, ebx
    X86_AT(c, 0xd68au);
    c.r[1] = c.r[3];
    // 00d68c  sub cx, 4
    X86_AT(c, 0xd68cu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_sub(c, v, 0x4u, 0, 2)); }
    // 00d690  sub edi, edi
    X86_AT(c, 0xd690u);
    { uint32_t v = c.r[7]; c.r[7] = x86_sub(c, v, c.r[7], 0, 4); }
L_d692:
    X86_TICK(c, 4);
    // 00d692  mov esi, edi
    X86_AT(c, 0xd692u);
    c.r[6] = c.r[7];
    // 00d694  add esi, 4
    X86_AT(c, 0xd694u);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
L_d697:
    X86_TICK(c, 16);
    // 00d697  mov ax, word ptr gs:[ebp + edi*1 + 0x4a0]
    X86_AT(c, 0xd697u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u))));
    // 00d6a0  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6a0u);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6a9  jge 0xd6da
    X86_AT(c, 0xd6a9u);
    if (x86_cc(c, 13)) { goto L_d6da; }
    X86_TICK(c, 25);
    // 00d6ab  xchg word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6abu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6b4  mov word ptr gs:[ebp + edi*1 + 0x4a0], ax
    X86_AT(c, 0xd6b4u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A0u)), (c.r[0] & 0xFFFFu));
    // 00d6bd  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6bdu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6c6  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6c6u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d6cf  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd6cfu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
    // 00d6d8  jmp 0xd70b
    X86_AT(c, 0xd6d8u);
    goto L_d70b;
L_d6da:
    X86_TICK(c, 12);
    // 00d6da  cmp word ptr gs:[ebp + esi*1 + 0x4a0], ax
    X86_AT(c, 0xd6dau);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A0u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6e3  jne 0xd70b
    X86_AT(c, 0xd6e3u);
    if (x86_cc(c, 5)) { goto L_d70b; }
    X86_TICK(c, 16);
    // 00d6e5  mov ax, word ptr gs:[ebp + edi*1 + 0x4a2]
    X86_AT(c, 0xd6e5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u))));
    // 00d6ee  cmp word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6eeu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u))), (c.r[0] & 0xFFFFu), 0, 2);
    // 00d6f7  jge 0xd70b
    X86_AT(c, 0xd6f7u);
    if (x86_cc(c, 13)) { goto L_d70b; }
    X86_TICK(c, 7);
    // 00d6f9  xchg word ptr gs:[ebp + esi*1 + 0x4a2], ax
    X86_AT(c, 0xd6f9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] + 0x4A2u)); uint32_t t = rd16(ea); wr16(ea, (c.r[0] & 0xFFFFu)); s16(c, 0, t); }
    // 00d702  mov word ptr gs:[ebp + edi*1 + 0x4a2], ax
    X86_AT(c, 0xd702u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[7] + 0x4A2u)), (c.r[0] & 0xFFFFu));
L_d70b:
    X86_TICK(c, 9);
    // 00d70b  add esi, 4
    X86_AT(c, 0xd70bu);
    { uint32_t v = c.r[6]; c.r[6] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d70e  cmp si, bx
    X86_AT(c, 0xd70eu);
    (void)x86_sub(c, (c.r[6] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00d711  jle 0xd697
    X86_AT(c, 0xd711u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd697u); goto L_d697; }
    X86_TICK(c, 9);
    // 00d713  add edi, 4
    X86_AT(c, 0xd713u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x4u, 0, 4); }
    // 00d716  cmp di, cx
    X86_AT(c, 0xd716u);
    (void)x86_sub(c, (c.r[7] & 0xFFFFu), (c.r[1] & 0xFFFFu), 0, 2);
    // 00d719  jle 0xd692
    X86_AT(c, 0xd719u);
    if (x86_cc(c, 14)) { X86_POLL(c, 0xd692u); goto L_d692; }
    X86_TICK(c, 22);
    // 00d71f  pop ebx
    X86_AT(c, 0xd71fu);
    { uint32_t v = pop32(c); c.r[3] = v; }
    // 00d720  pop esi
    X86_AT(c, 0xd720u);
    { uint32_t v = pop32(c); c.r[6] = v; }
    // 00d721  pop edi
    X86_AT(c, 0xd721u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 00d722  ret 
    X86_AT(c, 0xd722u);
    c.eip = pop32(c); return;
    x86_fault(c, 0xd63du, "ran off the end of a function");
}
}

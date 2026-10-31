#include "p_tbios_funcs.h"
namespace p_tbios {
void f_0000066c(X86Cpu& c) {
    goto L_66c;
L_65d:
    X86_TICK(c, 22);
    // 00065d  mov dx, 0x440
    X86_AT(c, 0x65du);
    s16(c, 2, 0x440u);
    // 000661  mov al, bl
    X86_AT(c, 0x661u);
    s8(c, 0, g8(c, 3));
    // 000663  out dx, al
    X86_AT(c, 0x663u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000664  mov dx, 0x442
    X86_AT(c, 0x664u);
    s16(c, 2, 0x442u);
    // 000668  mov ax, word ptr gs:[edi]
    X86_AT(c, 0x668u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
L_66c:
    X86_TICK(c, 23);
    // 00066c  out dx, ax
    X86_AT(c, 0x66cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 00066e  inc bl
    X86_AT(c, 0x66eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 000670  add edi, 2
    X86_AT(c, 0x670u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 000673  dec cl
    X86_AT(c, 0x673u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 000675  jne 0x65d
    X86_AT(c, 0x675u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x65du); goto L_65d; }
    X86_TICK(c, 10);
    // 000677  ret 
    X86_AT(c, 0x677u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x66cu, "ran off the end of a function");
}
void f_0000066e(X86Cpu& c) {
    goto L_66e;
L_65d:
    X86_TICK(c, 34);
    // 00065d  mov dx, 0x440
    X86_AT(c, 0x65du);
    s16(c, 2, 0x440u);
    // 000661  mov al, bl
    X86_AT(c, 0x661u);
    s8(c, 0, g8(c, 3));
    // 000663  out dx, al
    X86_AT(c, 0x663u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000664  mov dx, 0x442
    X86_AT(c, 0x664u);
    s16(c, 2, 0x442u);
    // 000668  mov ax, word ptr gs:[edi]
    X86_AT(c, 0x668u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 00066c  out dx, ax
    X86_AT(c, 0x66cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
L_66e:
    X86_TICK(c, 11);
    // 00066e  inc bl
    X86_AT(c, 0x66eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 000670  add edi, 2
    X86_AT(c, 0x670u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 000673  dec cl
    X86_AT(c, 0x673u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 000675  jne 0x65d
    X86_AT(c, 0x675u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x65du); goto L_65d; }
    X86_TICK(c, 10);
    // 000677  ret 
    X86_AT(c, 0x677u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x66eu, "ran off the end of a function");
}
void f_00000670(X86Cpu& c) {
    goto L_670;
L_65d:
    X86_TICK(c, 36);
    // 00065d  mov dx, 0x440
    X86_AT(c, 0x65du);
    s16(c, 2, 0x440u);
    // 000661  mov al, bl
    X86_AT(c, 0x661u);
    s8(c, 0, g8(c, 3));
    // 000663  out dx, al
    X86_AT(c, 0x663u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000664  mov dx, 0x442
    X86_AT(c, 0x664u);
    s16(c, 2, 0x442u);
    // 000668  mov ax, word ptr gs:[edi]
    X86_AT(c, 0x668u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 00066c  out dx, ax
    X86_AT(c, 0x66cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 00066e  inc bl
    X86_AT(c, 0x66eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
L_670:
    X86_TICK(c, 9);
    // 000670  add edi, 2
    X86_AT(c, 0x670u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 000673  dec cl
    X86_AT(c, 0x673u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 000675  jne 0x65d
    X86_AT(c, 0x675u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x65du); goto L_65d; }
    X86_TICK(c, 10);
    // 000677  ret 
    X86_AT(c, 0x677u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x670u, "ran off the end of a function");
}
void f_00000673(X86Cpu& c) {
    goto L_673;
L_65d:
    X86_TICK(c, 38);
    // 00065d  mov dx, 0x440
    X86_AT(c, 0x65du);
    s16(c, 2, 0x440u);
    // 000661  mov al, bl
    X86_AT(c, 0x661u);
    s8(c, 0, g8(c, 3));
    // 000663  out dx, al
    X86_AT(c, 0x663u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000664  mov dx, 0x442
    X86_AT(c, 0x664u);
    s16(c, 2, 0x442u);
    // 000668  mov ax, word ptr gs:[edi]
    X86_AT(c, 0x668u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 00066c  out dx, ax
    X86_AT(c, 0x66cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 00066e  inc bl
    X86_AT(c, 0x66eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 000670  add edi, 2
    X86_AT(c, 0x670u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
L_673:
    X86_TICK(c, 7);
    // 000673  dec cl
    X86_AT(c, 0x673u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
    // 000675  jne 0x65d
    X86_AT(c, 0x675u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x65du); goto L_65d; }
    X86_TICK(c, 10);
    // 000677  ret 
    X86_AT(c, 0x677u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x673u, "ran off the end of a function");
}
void f_00000675(X86Cpu& c) {
    goto L_675;
L_65d:
    X86_TICK(c, 40);
    // 00065d  mov dx, 0x440
    X86_AT(c, 0x65du);
    s16(c, 2, 0x440u);
    // 000661  mov al, bl
    X86_AT(c, 0x661u);
    s8(c, 0, g8(c, 3));
    // 000663  out dx, al
    X86_AT(c, 0x663u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 000664  mov dx, 0x442
    X86_AT(c, 0x664u);
    s16(c, 2, 0x442u);
    // 000668  mov ax, word ptr gs:[edi]
    X86_AT(c, 0x668u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 00066c  out dx, ax
    X86_AT(c, 0x66cu);
    x86_out(c, (c.r[2] & 0xFFFFu), 2, (c.r[0] & 0xFFFFu));
    // 00066e  inc bl
    X86_AT(c, 0x66eu);
    { uint32_t v = g8(c, 3); s8(c, 3, x86_inc(c, v, 1)); }
    // 000670  add edi, 2
    X86_AT(c, 0x670u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0x2u, 0, 4); }
    // 000673  dec cl
    X86_AT(c, 0x673u);
    { uint32_t v = g8(c, 1); s8(c, 1, x86_dec(c, v, 1)); }
L_675:
    X86_TICK(c, 5);
    // 000675  jne 0x65d
    X86_AT(c, 0x675u);
    if (x86_cc(c, 5)) { X86_POLL(c, 0x65du); goto L_65d; }
    X86_TICK(c, 10);
    // 000677  ret 
    X86_AT(c, 0x677u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x675u, "ran off the end of a function");
}
void f_00000677(X86Cpu& c) {
    X86_TICK(c, 10);
    // 000677  ret 
    X86_AT(c, 0x677u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x677u, "ran off the end of a function");
}
void f_00000678(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000678  cmp al, 4
    X86_AT(c, 0x678u);
    (void)x86_sub(c, g8(c, 0), 0x4u, 0, 1);
    // 00067a  jae 0x7d7
    X86_AT(c, 0x67au);
    if (x86_cc(c, 3)) { goto L_7d7; }
    X86_TICK(c, 10);
    // 000680  movzx eax, al
    X86_AT(c, 0x680u);
    c.r[0] = g8(c, 0);
    // 000683  jmp dword ptr cs:[eax*4 + 0x68c]
    X86_AT(c, 0x683u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x68Cu)));
      switch (t) {
      case 0x69cu: goto L_69c;
      case 0x888u: goto L_888;
      case 0x9f4u: goto L_9f4;
      case 0xb0cu: goto L_b0c;
      default: x86_jump(c, t); return; } }
L_69c:
    X86_TICK(c, 13);
    // 00069c  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x69cu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0006a1  cmp al, 2
    X86_AT(c, 0x6a1u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0006a3  jae 0x7d7
    X86_AT(c, 0x6a3u);
    if (x86_cc(c, 3)) { goto L_7d7; }
    X86_TICK(c, 20);
    // 0006a9  mov ecx, eax
    X86_AT(c, 0x6a9u);
    c.r[1] = c.r[0];
    // 0006ab  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x6abu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0006b1  cmp byte ptr cs:[eax + 0x7dd], 0
    X86_AT(c, 0x6b1u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x7DDu))), 0x0u, 0, 1);
    // 0006b9  je 0x7d7
    X86_AT(c, 0x6b9u);
    if (x86_cc(c, 4)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006bf  cmp dx, word ptr cs:[eax*4 + 0x7f0]
    X86_AT(c, 0x6bfu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F0u))), 0, 2);
    // 0006c8  ja 0x7d7
    X86_AT(c, 0x6c8u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006ce  cmp bx, word ptr cs:[eax*4 + 0x7f2]
    X86_AT(c, 0x6ceu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F2u))), 0, 2);
    // 0006d7  ja 0x7d7
    X86_AT(c, 0x6d7u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 23);
    // 0006dd  add bx, bx
    X86_AT(c, 0x6ddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0006e0  push eax
    X86_AT(c, 0x6e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0006e1  lea esi, [ebp + ecx*4 + 0xa0]
    X86_AT(c, 0x6e1u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xA0u);
    // 0006e8  lea edi, [ebp + ecx*4 + 0xd2]
    X86_AT(c, 0x6e8u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xD2u);
    // 0006ef  mov eax, ecx
    X86_AT(c, 0x6efu);
    c.r[0] = c.r[1];
    // 0006f1  movzx ecx, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0x6f1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)));
    // 0006f9  test eax, eax
    X86_AT(c, 0x6f9u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0006fb  jne 0x704
    X86_AT(c, 0x6fbu);
    if (x86_cc(c, 5)) { goto L_704; }
    X86_TICK(c, 9);
    // 0006fd  and cx, 0xff
    X86_AT(c, 0x6fdu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFFu, 2)); }
    // 000702  jmp 0x70d
    X86_AT(c, 0x702u);
    goto L_70d;
L_704:
    X86_TICK(c, 5);
    // 000704  and cx, 0xff00
    X86_AT(c, 0x704u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFF00u, 2)); }
    // 000709  shr cx, 8
    X86_AT(c, 0x709u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 1, r); }
L_70d:
    X86_TICK(c, 103);
    // 00070d  shl ecx, 4
    X86_AT(c, 0x70du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 000710  shr cl, 4
    X86_AT(c, 0x710u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 000713  add cx, 0x101
    X86_AT(c, 0x713u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x101u, 0, 2)); }
    // 000718  shl ecx, 8
    X86_AT(c, 0x718u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[1] = r; }
    // 00071b  xchg cl, ch
    X86_AT(c, 0x71bu);
    { uint32_t t = g8(c, 1); s8(c, 1, g8(c, 5)); s8(c, 5, t); }
    // 00071d  imul dx, cx
    X86_AT(c, 0x71du);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000721  rol ecx, 0x10
    X86_AT(c, 0x721u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 000724  imul bx, cx
    X86_AT(c, 0x724u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000728  pop ecx
    X86_AT(c, 0x728u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 000729  rol ebx, 0x10
    X86_AT(c, 0x729u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00072c  mov ax, word ptr gs:[edi + 2]
    X86_AT(c, 0x72cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x2u))));
    // 000731  sub ax, word ptr gs:[esi]
    X86_AT(c, 0x731u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000735  add ax, dx
    X86_AT(c, 0x735u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000738  mov bx, word ptr gs:[edi]
    X86_AT(c, 0x738u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 00073c  sub bx, word ptr gs:[esi]
    X86_AT(c, 0x73cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000740  add bx, word ptr cs:[ecx*4 + 0x83c]
    X86_AT(c, 0x740u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Cu))), 0, 2)); }
    // 000749  cmp ax, bx
    X86_AT(c, 0x749u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00074c  ja 0x7d7
    X86_AT(c, 0x74cu);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 72);
    // 000752  mov ax, word ptr gs:[esi]
    X86_AT(c, 0x752u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000756  sub word ptr gs:[edi], ax
    X86_AT(c, 0x756u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00075a  add word ptr gs:[edi], dx
    X86_AT(c, 0x75au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00075e  sub word ptr gs:[edi + 2], ax
    X86_AT(c, 0x75eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000763  add word ptr gs:[edi + 2], dx
    X86_AT(c, 0x763u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000768  mov word ptr gs:[esi], dx
    X86_AT(c, 0x768u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[2] & 0xFFFFu));
    // 00076c  rol ebx, 0x10
    X86_AT(c, 0x76cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00076f  mov ax, word ptr gs:[edi + 0xa]
    X86_AT(c, 0x76fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0xAu))));
    // 000774  sub ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x774u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000779  add ax, bx
    X86_AT(c, 0x779u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00077c  mov dx, word ptr gs:[edi + 8]
    X86_AT(c, 0x77cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x8u))));
    // 000781  sub dx, word ptr gs:[esi + 2]
    X86_AT(c, 0x781u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000786  add dx, word ptr cs:[ecx*4 + 0x83e]
    X86_AT(c, 0x786u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Eu))), 0, 2)); }
    // 00078f  cmp ax, dx
    X86_AT(c, 0x78fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 000792  ja 0x7d7
    X86_AT(c, 0x792u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 49);
    // 000794  mov ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x794u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))));
    // 000799  sub word ptr gs:[edi + 8], ax
    X86_AT(c, 0x799u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00079e  add word ptr gs:[edi + 8], bx
    X86_AT(c, 0x79eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007a3  sub word ptr gs:[edi + 0xa], ax
    X86_AT(c, 0x7a3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0007a8  add word ptr gs:[edi + 0xa], bx
    X86_AT(c, 0x7a8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007ad  mov word ptr gs:[esi + 2], bx
    X86_AT(c, 0x7adu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 0007b2  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0x7b2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 0007bd  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x7bdu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0007c2  call 0x968
    X86_AT(c, 0x7c2u);
    push32(c, 0x7c7u); f_00000968(c); X86_RET(c, 0x7c7u);
    X86_TICK(c, 13);
    // 0007c7  mov cl, 0xe
    X86_AT(c, 0x7c7u);
    s8(c, 1, 0xEu);
    // 0007c9  mov bl, 9
    X86_AT(c, 0x7c9u);
    s8(c, 3, 0x9u);
    // 0007cb  lea edi, [ebp + 0xd2]
    X86_AT(c, 0x7cbu);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 0007d1  call 0x658
    X86_AT(c, 0x7d1u);
    push32(c, 0x7d6u); f_00000658(c); X86_RET(c, 0x7d6u);
    X86_TICK(c, 10);
    // 0007d6  ret 
    X86_AT(c, 0x7d6u);
    c.eip = pop32(c); return;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_888:
    X86_TICK(c, 16);
    // 000888  mov word ptr gs:[ebp + 0x3a4], dx
    X86_AT(c, 0x888u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), (c.r[2] & 0xFFFFu));
    // 000890  mov word ptr gs:[ebp + 0x3a6], bx
    X86_AT(c, 0x890u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)), (c.r[3] & 0xFFFFu));
    // 000898  cmp byte ptr gs:[ebp + 0x30], 2
    X86_AT(c, 0x898u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), 0x2u, 0, 1);
    // 00089d  ja 0x7d7
    X86_AT(c, 0x89du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 13);
    // 0008a3  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x8a3u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0008a8  test eax, eax
    X86_AT(c, 0x8a8u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0008aa  je 0x8b7
    X86_AT(c, 0x8aau);
    if (x86_cc(c, 4)) { goto L_8b7; }
    X86_TICK(c, 12);
    // 0008ac  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x8acu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 0008b1  jae 0x7d7
    X86_AT(c, 0x8b1u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8b7:
    X86_TICK(c, 19);
    // 0008b7  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x8b7u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0008bd  mov ebx, eax
    X86_AT(c, 0x8bdu);
    c.r[3] = c.r[0];
    // 0008bf  mov al, byte ptr cs:[eax + 0x8fa]
    X86_AT(c, 0x8bfu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x8FAu))));
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
L_9f4:
    X86_TICK(c, 13);
    // 0009f4  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x9f4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0009f9  cmp al, 2
    X86_AT(c, 0x9f9u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0009fb  jae 0x7d7
    X86_AT(c, 0x9fbu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000a01  dec dx
    X86_AT(c, 0xa01u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 000a03  dec bx
    X86_AT(c, 0xa03u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 000a05  cmp dx, 0xf
    X86_AT(c, 0xa05u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFu, 0, 2);
    // 000a09  ja 0x7d7
    X86_AT(c, 0xa09u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 000a0f  cmp bx, 0xf
    X86_AT(c, 0xa0fu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0xFu, 0, 2);
    // 000a13  ja 0x7d7
    X86_AT(c, 0xa13u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 15);
    // 000a19  xor ch, ch
    X86_AT(c, 0xa19u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 000a1b  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xa1bu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000a20  test eax, eax
    X86_AT(c, 0xa20u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
L_b0c:
    X86_TICK(c, 13);
    // 000b0c  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xb0cu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000b11  cmp al, 2
    X86_AT(c, 0xb11u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 000b13  jae 0x7d7
    X86_AT(c, 0xb13u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 20);
    // 000b19  mov esi, eax
    X86_AT(c, 0xb19u);
    c.r[6] = c.r[0];
    // 000b1b  movzx ecx, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xb1bu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000b21  cmp byte ptr cs:[ecx + 0x7dd], 0
    X86_AT(c, 0xb21u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x7DDu))), 0x0u, 0, 1);
    // 000b29  je 0x7d7
    X86_AT(c, 0xb29u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 16);
    // 000b2f  xchg al, cl
    X86_AT(c, 0xb2fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 1)); s8(c, 1, t); }
    // 000b31  lea edi, [eax + eax*4]
    X86_AT(c, 0xb31u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 000b34  cmp dx, word ptr cs:[edi*2 + 0x598]
    X86_AT(c, 0xb34u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x598u))), 0, 2);
    // 000b3d  ja 0x7d7
    X86_AT(c, 0xb3du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000b43  cmp bx, word ptr cs:[edi*2 + 0x59a]
    X86_AT(c, 0xb43u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x59Au))), 0, 2);
    // 000b4c  ja 0x7d7
    X86_AT(c, 0xb4cu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 94);
    // 000b52  mov edi, eax
    X86_AT(c, 0xb52u);
    c.r[7] = c.r[0];
    // 000b54  mov ax, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0xb54u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u))));
    // 000b5c  test cl, cl
    X86_AT(c, 0xb5cu);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000b5e  setne cl
    X86_AT(c, 0xb5eu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000b61  shl cl, 3
    X86_AT(c, 0xb61u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000b64  shr ax, cl
    X86_AT(c, 0xb64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000b67  xor ah, ah
    X86_AT(c, 0xb67u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000b69  shl ax, 4
    X86_AT(c, 0xb69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000b6d  shr al, 4
    X86_AT(c, 0xb6du);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000b70  add ax, 0x101
    X86_AT(c, 0xb70u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x101u, 0, 2)); }
    // 000b74  shl eax, 8
    X86_AT(c, 0xb74u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000b77  xchg al, ah
    X86_AT(c, 0xb77u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000b79  imul dx, ax
    X86_AT(c, 0xb79u);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b7d  rol eax, 0x10
    X86_AT(c, 0xb7du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000b80  add bx, bx
    X86_AT(c, 0xb80u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 000b83  imul bx, ax
    X86_AT(c, 0xb83u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b87  cmp dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb87u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2);
    // 000b90  jb 0xb9b
    X86_AT(c, 0xb90u);
    if (x86_cc(c, 2)) { goto L_b9b; }
    X86_TICK(c, 4);
    // 000b92  mov dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb92u);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))));
L_b9b:
    X86_TICK(c, 11);
    // 000b9b  cmp bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xb9bu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2);
    // 000ba4  jb 0xbaf
    X86_AT(c, 0xba4u);
    if (x86_cc(c, 2)) { goto L_baf; }
    X86_TICK(c, 4);
    // 000ba6  mov bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xba6u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))));
L_baf:
    X86_TICK(c, 25);
    // 000baf  mov ax, word ptr gs:[ebp + esi*4 + 0xd2]
    X86_AT(c, 0xbafu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD2u))));
    // 000bb8  add dx, ax
    X86_AT(c, 0xbb8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000bbb  sub ax, word ptr gs:[ebp + esi*4 + 0xa0]
    X86_AT(c, 0xbbbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA0u))), 0, 2)); }
    // 000bc4  add ax, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xbc4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2)); }
    // 000bcd  cmp dx, ax
    X86_AT(c, 0xbcdu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bd0  jb 0xbd5
    X86_AT(c, 0xbd0u);
    if (x86_cc(c, 2)) { goto L_bd5; }
    X86_TICK(c, 2);
    // 000bd2  mov dx, ax
    X86_AT(c, 0xbd2u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
L_bd5:
    X86_TICK(c, 25);
    // 000bd5  mov ax, word ptr gs:[ebp + esi*4 + 0xda]
    X86_AT(c, 0xbd5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDAu))));
    // 000bde  add bx, ax
    X86_AT(c, 0xbdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000be1  sub ax, word ptr gs:[ebp + esi*4 + 0xa2]
    X86_AT(c, 0xbe1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA2u))), 0, 2)); }
    // 000bea  add ax, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xbeau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2)); }
    // 000bf3  cmp bx, ax
    X86_AT(c, 0xbf3u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bf6  jb 0xbfb
    X86_AT(c, 0xbf6u);
    if (x86_cc(c, 2)) { goto L_bfb; }
    X86_TICK(c, 2);
    // 000bf8  mov bx, ax
    X86_AT(c, 0xbf8u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
L_bfb:
    X86_TICK(c, 17);
    // 000bfb  mov word ptr gs:[ebp + esi*4 + 0xd4], dx
    X86_AT(c, 0xbfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD4u)), (c.r[2] & 0xFFFFu));
    // 000c04  mov word ptr gs:[ebp + esi*4 + 0xdc], bx
    X86_AT(c, 0xc04u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDCu)), (c.r[3] & 0xFFFFu));
    // 000c0d  mov cl, 8
    X86_AT(c, 0xc0du);
    s8(c, 1, 0x8u);
    // 000c0f  mov bl, 9
    X86_AT(c, 0xc0fu);
    s8(c, 3, 0x9u);
    // 000c11  lea edi, [ebp + 0xd2]
    X86_AT(c, 0xc11u);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 000c17  call 0x658
    X86_AT(c, 0xc17u);
    push32(c, 0xc1cu); f_00000658(c); X86_RET(c, 0xc1cu);
    X86_TICK(c, 10);
    // 000c1c  ret 
    X86_AT(c, 0xc1cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x678u, "ran off the end of a function");
}
void f_0000067a(X86Cpu& c) {
    X86_TICK(c, 5);
    // 00067a  jae 0x7d7
    X86_AT(c, 0x67au);
    if (x86_cc(c, 3)) { goto L_7d7; }
    X86_TICK(c, 10);
    // 000680  movzx eax, al
    X86_AT(c, 0x680u);
    c.r[0] = g8(c, 0);
    // 000683  jmp dword ptr cs:[eax*4 + 0x68c]
    X86_AT(c, 0x683u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x68Cu)));
      switch (t) {
      case 0x69cu: goto L_69c;
      case 0x888u: goto L_888;
      case 0x9f4u: goto L_9f4;
      case 0xb0cu: goto L_b0c;
      default: x86_jump(c, t); return; } }
L_69c:
    X86_TICK(c, 13);
    // 00069c  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x69cu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0006a1  cmp al, 2
    X86_AT(c, 0x6a1u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0006a3  jae 0x7d7
    X86_AT(c, 0x6a3u);
    if (x86_cc(c, 3)) { goto L_7d7; }
    X86_TICK(c, 20);
    // 0006a9  mov ecx, eax
    X86_AT(c, 0x6a9u);
    c.r[1] = c.r[0];
    // 0006ab  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x6abu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0006b1  cmp byte ptr cs:[eax + 0x7dd], 0
    X86_AT(c, 0x6b1u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x7DDu))), 0x0u, 0, 1);
    // 0006b9  je 0x7d7
    X86_AT(c, 0x6b9u);
    if (x86_cc(c, 4)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006bf  cmp dx, word ptr cs:[eax*4 + 0x7f0]
    X86_AT(c, 0x6bfu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F0u))), 0, 2);
    // 0006c8  ja 0x7d7
    X86_AT(c, 0x6c8u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006ce  cmp bx, word ptr cs:[eax*4 + 0x7f2]
    X86_AT(c, 0x6ceu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F2u))), 0, 2);
    // 0006d7  ja 0x7d7
    X86_AT(c, 0x6d7u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 23);
    // 0006dd  add bx, bx
    X86_AT(c, 0x6ddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0006e0  push eax
    X86_AT(c, 0x6e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0006e1  lea esi, [ebp + ecx*4 + 0xa0]
    X86_AT(c, 0x6e1u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xA0u);
    // 0006e8  lea edi, [ebp + ecx*4 + 0xd2]
    X86_AT(c, 0x6e8u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xD2u);
    // 0006ef  mov eax, ecx
    X86_AT(c, 0x6efu);
    c.r[0] = c.r[1];
    // 0006f1  movzx ecx, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0x6f1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)));
    // 0006f9  test eax, eax
    X86_AT(c, 0x6f9u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0006fb  jne 0x704
    X86_AT(c, 0x6fbu);
    if (x86_cc(c, 5)) { goto L_704; }
    X86_TICK(c, 9);
    // 0006fd  and cx, 0xff
    X86_AT(c, 0x6fdu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFFu, 2)); }
    // 000702  jmp 0x70d
    X86_AT(c, 0x702u);
    goto L_70d;
L_704:
    X86_TICK(c, 5);
    // 000704  and cx, 0xff00
    X86_AT(c, 0x704u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFF00u, 2)); }
    // 000709  shr cx, 8
    X86_AT(c, 0x709u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 1, r); }
L_70d:
    X86_TICK(c, 103);
    // 00070d  shl ecx, 4
    X86_AT(c, 0x70du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 000710  shr cl, 4
    X86_AT(c, 0x710u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 000713  add cx, 0x101
    X86_AT(c, 0x713u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x101u, 0, 2)); }
    // 000718  shl ecx, 8
    X86_AT(c, 0x718u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[1] = r; }
    // 00071b  xchg cl, ch
    X86_AT(c, 0x71bu);
    { uint32_t t = g8(c, 1); s8(c, 1, g8(c, 5)); s8(c, 5, t); }
    // 00071d  imul dx, cx
    X86_AT(c, 0x71du);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000721  rol ecx, 0x10
    X86_AT(c, 0x721u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 000724  imul bx, cx
    X86_AT(c, 0x724u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000728  pop ecx
    X86_AT(c, 0x728u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 000729  rol ebx, 0x10
    X86_AT(c, 0x729u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00072c  mov ax, word ptr gs:[edi + 2]
    X86_AT(c, 0x72cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x2u))));
    // 000731  sub ax, word ptr gs:[esi]
    X86_AT(c, 0x731u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000735  add ax, dx
    X86_AT(c, 0x735u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000738  mov bx, word ptr gs:[edi]
    X86_AT(c, 0x738u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 00073c  sub bx, word ptr gs:[esi]
    X86_AT(c, 0x73cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000740  add bx, word ptr cs:[ecx*4 + 0x83c]
    X86_AT(c, 0x740u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Cu))), 0, 2)); }
    // 000749  cmp ax, bx
    X86_AT(c, 0x749u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00074c  ja 0x7d7
    X86_AT(c, 0x74cu);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 72);
    // 000752  mov ax, word ptr gs:[esi]
    X86_AT(c, 0x752u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000756  sub word ptr gs:[edi], ax
    X86_AT(c, 0x756u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00075a  add word ptr gs:[edi], dx
    X86_AT(c, 0x75au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00075e  sub word ptr gs:[edi + 2], ax
    X86_AT(c, 0x75eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000763  add word ptr gs:[edi + 2], dx
    X86_AT(c, 0x763u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000768  mov word ptr gs:[esi], dx
    X86_AT(c, 0x768u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[2] & 0xFFFFu));
    // 00076c  rol ebx, 0x10
    X86_AT(c, 0x76cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00076f  mov ax, word ptr gs:[edi + 0xa]
    X86_AT(c, 0x76fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0xAu))));
    // 000774  sub ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x774u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000779  add ax, bx
    X86_AT(c, 0x779u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00077c  mov dx, word ptr gs:[edi + 8]
    X86_AT(c, 0x77cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x8u))));
    // 000781  sub dx, word ptr gs:[esi + 2]
    X86_AT(c, 0x781u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000786  add dx, word ptr cs:[ecx*4 + 0x83e]
    X86_AT(c, 0x786u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Eu))), 0, 2)); }
    // 00078f  cmp ax, dx
    X86_AT(c, 0x78fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 000792  ja 0x7d7
    X86_AT(c, 0x792u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 49);
    // 000794  mov ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x794u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))));
    // 000799  sub word ptr gs:[edi + 8], ax
    X86_AT(c, 0x799u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00079e  add word ptr gs:[edi + 8], bx
    X86_AT(c, 0x79eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007a3  sub word ptr gs:[edi + 0xa], ax
    X86_AT(c, 0x7a3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0007a8  add word ptr gs:[edi + 0xa], bx
    X86_AT(c, 0x7a8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007ad  mov word ptr gs:[esi + 2], bx
    X86_AT(c, 0x7adu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 0007b2  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0x7b2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 0007bd  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x7bdu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0007c2  call 0x968
    X86_AT(c, 0x7c2u);
    push32(c, 0x7c7u); f_00000968(c); X86_RET(c, 0x7c7u);
    X86_TICK(c, 13);
    // 0007c7  mov cl, 0xe
    X86_AT(c, 0x7c7u);
    s8(c, 1, 0xEu);
    // 0007c9  mov bl, 9
    X86_AT(c, 0x7c9u);
    s8(c, 3, 0x9u);
    // 0007cb  lea edi, [ebp + 0xd2]
    X86_AT(c, 0x7cbu);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 0007d1  call 0x658
    X86_AT(c, 0x7d1u);
    push32(c, 0x7d6u); f_00000658(c); X86_RET(c, 0x7d6u);
    X86_TICK(c, 10);
    // 0007d6  ret 
    X86_AT(c, 0x7d6u);
    c.eip = pop32(c); return;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_888:
    X86_TICK(c, 16);
    // 000888  mov word ptr gs:[ebp + 0x3a4], dx
    X86_AT(c, 0x888u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), (c.r[2] & 0xFFFFu));
    // 000890  mov word ptr gs:[ebp + 0x3a6], bx
    X86_AT(c, 0x890u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)), (c.r[3] & 0xFFFFu));
    // 000898  cmp byte ptr gs:[ebp + 0x30], 2
    X86_AT(c, 0x898u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), 0x2u, 0, 1);
    // 00089d  ja 0x7d7
    X86_AT(c, 0x89du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 13);
    // 0008a3  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x8a3u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0008a8  test eax, eax
    X86_AT(c, 0x8a8u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0008aa  je 0x8b7
    X86_AT(c, 0x8aau);
    if (x86_cc(c, 4)) { goto L_8b7; }
    X86_TICK(c, 12);
    // 0008ac  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x8acu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 0008b1  jae 0x7d7
    X86_AT(c, 0x8b1u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8b7:
    X86_TICK(c, 19);
    // 0008b7  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x8b7u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0008bd  mov ebx, eax
    X86_AT(c, 0x8bdu);
    c.r[3] = c.r[0];
    // 0008bf  mov al, byte ptr cs:[eax + 0x8fa]
    X86_AT(c, 0x8bfu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x8FAu))));
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
L_9f4:
    X86_TICK(c, 13);
    // 0009f4  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x9f4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0009f9  cmp al, 2
    X86_AT(c, 0x9f9u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0009fb  jae 0x7d7
    X86_AT(c, 0x9fbu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000a01  dec dx
    X86_AT(c, 0xa01u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 000a03  dec bx
    X86_AT(c, 0xa03u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 000a05  cmp dx, 0xf
    X86_AT(c, 0xa05u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFu, 0, 2);
    // 000a09  ja 0x7d7
    X86_AT(c, 0xa09u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 000a0f  cmp bx, 0xf
    X86_AT(c, 0xa0fu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0xFu, 0, 2);
    // 000a13  ja 0x7d7
    X86_AT(c, 0xa13u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 15);
    // 000a19  xor ch, ch
    X86_AT(c, 0xa19u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 000a1b  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xa1bu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000a20  test eax, eax
    X86_AT(c, 0xa20u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
L_b0c:
    X86_TICK(c, 13);
    // 000b0c  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xb0cu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000b11  cmp al, 2
    X86_AT(c, 0xb11u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 000b13  jae 0x7d7
    X86_AT(c, 0xb13u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 20);
    // 000b19  mov esi, eax
    X86_AT(c, 0xb19u);
    c.r[6] = c.r[0];
    // 000b1b  movzx ecx, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xb1bu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000b21  cmp byte ptr cs:[ecx + 0x7dd], 0
    X86_AT(c, 0xb21u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x7DDu))), 0x0u, 0, 1);
    // 000b29  je 0x7d7
    X86_AT(c, 0xb29u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 16);
    // 000b2f  xchg al, cl
    X86_AT(c, 0xb2fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 1)); s8(c, 1, t); }
    // 000b31  lea edi, [eax + eax*4]
    X86_AT(c, 0xb31u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 000b34  cmp dx, word ptr cs:[edi*2 + 0x598]
    X86_AT(c, 0xb34u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x598u))), 0, 2);
    // 000b3d  ja 0x7d7
    X86_AT(c, 0xb3du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000b43  cmp bx, word ptr cs:[edi*2 + 0x59a]
    X86_AT(c, 0xb43u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x59Au))), 0, 2);
    // 000b4c  ja 0x7d7
    X86_AT(c, 0xb4cu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 94);
    // 000b52  mov edi, eax
    X86_AT(c, 0xb52u);
    c.r[7] = c.r[0];
    // 000b54  mov ax, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0xb54u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u))));
    // 000b5c  test cl, cl
    X86_AT(c, 0xb5cu);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000b5e  setne cl
    X86_AT(c, 0xb5eu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000b61  shl cl, 3
    X86_AT(c, 0xb61u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000b64  shr ax, cl
    X86_AT(c, 0xb64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000b67  xor ah, ah
    X86_AT(c, 0xb67u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000b69  shl ax, 4
    X86_AT(c, 0xb69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000b6d  shr al, 4
    X86_AT(c, 0xb6du);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000b70  add ax, 0x101
    X86_AT(c, 0xb70u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x101u, 0, 2)); }
    // 000b74  shl eax, 8
    X86_AT(c, 0xb74u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000b77  xchg al, ah
    X86_AT(c, 0xb77u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000b79  imul dx, ax
    X86_AT(c, 0xb79u);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b7d  rol eax, 0x10
    X86_AT(c, 0xb7du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000b80  add bx, bx
    X86_AT(c, 0xb80u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 000b83  imul bx, ax
    X86_AT(c, 0xb83u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b87  cmp dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb87u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2);
    // 000b90  jb 0xb9b
    X86_AT(c, 0xb90u);
    if (x86_cc(c, 2)) { goto L_b9b; }
    X86_TICK(c, 4);
    // 000b92  mov dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb92u);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))));
L_b9b:
    X86_TICK(c, 11);
    // 000b9b  cmp bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xb9bu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2);
    // 000ba4  jb 0xbaf
    X86_AT(c, 0xba4u);
    if (x86_cc(c, 2)) { goto L_baf; }
    X86_TICK(c, 4);
    // 000ba6  mov bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xba6u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))));
L_baf:
    X86_TICK(c, 25);
    // 000baf  mov ax, word ptr gs:[ebp + esi*4 + 0xd2]
    X86_AT(c, 0xbafu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD2u))));
    // 000bb8  add dx, ax
    X86_AT(c, 0xbb8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000bbb  sub ax, word ptr gs:[ebp + esi*4 + 0xa0]
    X86_AT(c, 0xbbbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA0u))), 0, 2)); }
    // 000bc4  add ax, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xbc4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2)); }
    // 000bcd  cmp dx, ax
    X86_AT(c, 0xbcdu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bd0  jb 0xbd5
    X86_AT(c, 0xbd0u);
    if (x86_cc(c, 2)) { goto L_bd5; }
    X86_TICK(c, 2);
    // 000bd2  mov dx, ax
    X86_AT(c, 0xbd2u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
L_bd5:
    X86_TICK(c, 25);
    // 000bd5  mov ax, word ptr gs:[ebp + esi*4 + 0xda]
    X86_AT(c, 0xbd5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDAu))));
    // 000bde  add bx, ax
    X86_AT(c, 0xbdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000be1  sub ax, word ptr gs:[ebp + esi*4 + 0xa2]
    X86_AT(c, 0xbe1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA2u))), 0, 2)); }
    // 000bea  add ax, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xbeau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2)); }
    // 000bf3  cmp bx, ax
    X86_AT(c, 0xbf3u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bf6  jb 0xbfb
    X86_AT(c, 0xbf6u);
    if (x86_cc(c, 2)) { goto L_bfb; }
    X86_TICK(c, 2);
    // 000bf8  mov bx, ax
    X86_AT(c, 0xbf8u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
L_bfb:
    X86_TICK(c, 17);
    // 000bfb  mov word ptr gs:[ebp + esi*4 + 0xd4], dx
    X86_AT(c, 0xbfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD4u)), (c.r[2] & 0xFFFFu));
    // 000c04  mov word ptr gs:[ebp + esi*4 + 0xdc], bx
    X86_AT(c, 0xc04u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDCu)), (c.r[3] & 0xFFFFu));
    // 000c0d  mov cl, 8
    X86_AT(c, 0xc0du);
    s8(c, 1, 0x8u);
    // 000c0f  mov bl, 9
    X86_AT(c, 0xc0fu);
    s8(c, 3, 0x9u);
    // 000c11  lea edi, [ebp + 0xd2]
    X86_AT(c, 0xc11u);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 000c17  call 0x658
    X86_AT(c, 0xc17u);
    push32(c, 0xc1cu); f_00000658(c); X86_RET(c, 0xc1cu);
    X86_TICK(c, 10);
    // 000c1c  ret 
    X86_AT(c, 0xc1cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x67au, "ran off the end of a function");
}
void f_00000680(X86Cpu& c) {
    X86_TICK(c, 10);
    // 000680  movzx eax, al
    X86_AT(c, 0x680u);
    c.r[0] = g8(c, 0);
    // 000683  jmp dword ptr cs:[eax*4 + 0x68c]
    X86_AT(c, 0x683u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x68Cu)));
      switch (t) {
      case 0x69cu: goto L_69c;
      case 0x888u: goto L_888;
      case 0x9f4u: goto L_9f4;
      case 0xb0cu: goto L_b0c;
      default: x86_jump(c, t); return; } }
L_69c:
    X86_TICK(c, 13);
    // 00069c  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x69cu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0006a1  cmp al, 2
    X86_AT(c, 0x6a1u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0006a3  jae 0x7d7
    X86_AT(c, 0x6a3u);
    if (x86_cc(c, 3)) { goto L_7d7; }
    X86_TICK(c, 20);
    // 0006a9  mov ecx, eax
    X86_AT(c, 0x6a9u);
    c.r[1] = c.r[0];
    // 0006ab  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x6abu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0006b1  cmp byte ptr cs:[eax + 0x7dd], 0
    X86_AT(c, 0x6b1u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x7DDu))), 0x0u, 0, 1);
    // 0006b9  je 0x7d7
    X86_AT(c, 0x6b9u);
    if (x86_cc(c, 4)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006bf  cmp dx, word ptr cs:[eax*4 + 0x7f0]
    X86_AT(c, 0x6bfu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F0u))), 0, 2);
    // 0006c8  ja 0x7d7
    X86_AT(c, 0x6c8u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006ce  cmp bx, word ptr cs:[eax*4 + 0x7f2]
    X86_AT(c, 0x6ceu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F2u))), 0, 2);
    // 0006d7  ja 0x7d7
    X86_AT(c, 0x6d7u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 23);
    // 0006dd  add bx, bx
    X86_AT(c, 0x6ddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0006e0  push eax
    X86_AT(c, 0x6e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0006e1  lea esi, [ebp + ecx*4 + 0xa0]
    X86_AT(c, 0x6e1u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xA0u);
    // 0006e8  lea edi, [ebp + ecx*4 + 0xd2]
    X86_AT(c, 0x6e8u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xD2u);
    // 0006ef  mov eax, ecx
    X86_AT(c, 0x6efu);
    c.r[0] = c.r[1];
    // 0006f1  movzx ecx, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0x6f1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)));
    // 0006f9  test eax, eax
    X86_AT(c, 0x6f9u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0006fb  jne 0x704
    X86_AT(c, 0x6fbu);
    if (x86_cc(c, 5)) { goto L_704; }
    X86_TICK(c, 9);
    // 0006fd  and cx, 0xff
    X86_AT(c, 0x6fdu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFFu, 2)); }
    // 000702  jmp 0x70d
    X86_AT(c, 0x702u);
    goto L_70d;
L_704:
    X86_TICK(c, 5);
    // 000704  and cx, 0xff00
    X86_AT(c, 0x704u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFF00u, 2)); }
    // 000709  shr cx, 8
    X86_AT(c, 0x709u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 1, r); }
L_70d:
    X86_TICK(c, 103);
    // 00070d  shl ecx, 4
    X86_AT(c, 0x70du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 000710  shr cl, 4
    X86_AT(c, 0x710u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 000713  add cx, 0x101
    X86_AT(c, 0x713u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x101u, 0, 2)); }
    // 000718  shl ecx, 8
    X86_AT(c, 0x718u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[1] = r; }
    // 00071b  xchg cl, ch
    X86_AT(c, 0x71bu);
    { uint32_t t = g8(c, 1); s8(c, 1, g8(c, 5)); s8(c, 5, t); }
    // 00071d  imul dx, cx
    X86_AT(c, 0x71du);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000721  rol ecx, 0x10
    X86_AT(c, 0x721u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 000724  imul bx, cx
    X86_AT(c, 0x724u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000728  pop ecx
    X86_AT(c, 0x728u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 000729  rol ebx, 0x10
    X86_AT(c, 0x729u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00072c  mov ax, word ptr gs:[edi + 2]
    X86_AT(c, 0x72cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x2u))));
    // 000731  sub ax, word ptr gs:[esi]
    X86_AT(c, 0x731u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000735  add ax, dx
    X86_AT(c, 0x735u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000738  mov bx, word ptr gs:[edi]
    X86_AT(c, 0x738u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 00073c  sub bx, word ptr gs:[esi]
    X86_AT(c, 0x73cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000740  add bx, word ptr cs:[ecx*4 + 0x83c]
    X86_AT(c, 0x740u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Cu))), 0, 2)); }
    // 000749  cmp ax, bx
    X86_AT(c, 0x749u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00074c  ja 0x7d7
    X86_AT(c, 0x74cu);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 72);
    // 000752  mov ax, word ptr gs:[esi]
    X86_AT(c, 0x752u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000756  sub word ptr gs:[edi], ax
    X86_AT(c, 0x756u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00075a  add word ptr gs:[edi], dx
    X86_AT(c, 0x75au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00075e  sub word ptr gs:[edi + 2], ax
    X86_AT(c, 0x75eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000763  add word ptr gs:[edi + 2], dx
    X86_AT(c, 0x763u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000768  mov word ptr gs:[esi], dx
    X86_AT(c, 0x768u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[2] & 0xFFFFu));
    // 00076c  rol ebx, 0x10
    X86_AT(c, 0x76cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00076f  mov ax, word ptr gs:[edi + 0xa]
    X86_AT(c, 0x76fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0xAu))));
    // 000774  sub ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x774u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000779  add ax, bx
    X86_AT(c, 0x779u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00077c  mov dx, word ptr gs:[edi + 8]
    X86_AT(c, 0x77cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x8u))));
    // 000781  sub dx, word ptr gs:[esi + 2]
    X86_AT(c, 0x781u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000786  add dx, word ptr cs:[ecx*4 + 0x83e]
    X86_AT(c, 0x786u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Eu))), 0, 2)); }
    // 00078f  cmp ax, dx
    X86_AT(c, 0x78fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 000792  ja 0x7d7
    X86_AT(c, 0x792u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 49);
    // 000794  mov ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x794u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))));
    // 000799  sub word ptr gs:[edi + 8], ax
    X86_AT(c, 0x799u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00079e  add word ptr gs:[edi + 8], bx
    X86_AT(c, 0x79eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007a3  sub word ptr gs:[edi + 0xa], ax
    X86_AT(c, 0x7a3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0007a8  add word ptr gs:[edi + 0xa], bx
    X86_AT(c, 0x7a8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007ad  mov word ptr gs:[esi + 2], bx
    X86_AT(c, 0x7adu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 0007b2  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0x7b2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 0007bd  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x7bdu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0007c2  call 0x968
    X86_AT(c, 0x7c2u);
    push32(c, 0x7c7u); f_00000968(c); X86_RET(c, 0x7c7u);
    X86_TICK(c, 13);
    // 0007c7  mov cl, 0xe
    X86_AT(c, 0x7c7u);
    s8(c, 1, 0xEu);
    // 0007c9  mov bl, 9
    X86_AT(c, 0x7c9u);
    s8(c, 3, 0x9u);
    // 0007cb  lea edi, [ebp + 0xd2]
    X86_AT(c, 0x7cbu);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 0007d1  call 0x658
    X86_AT(c, 0x7d1u);
    push32(c, 0x7d6u); f_00000658(c); X86_RET(c, 0x7d6u);
    X86_TICK(c, 10);
    // 0007d6  ret 
    X86_AT(c, 0x7d6u);
    c.eip = pop32(c); return;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_888:
    X86_TICK(c, 16);
    // 000888  mov word ptr gs:[ebp + 0x3a4], dx
    X86_AT(c, 0x888u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), (c.r[2] & 0xFFFFu));
    // 000890  mov word ptr gs:[ebp + 0x3a6], bx
    X86_AT(c, 0x890u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)), (c.r[3] & 0xFFFFu));
    // 000898  cmp byte ptr gs:[ebp + 0x30], 2
    X86_AT(c, 0x898u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), 0x2u, 0, 1);
    // 00089d  ja 0x7d7
    X86_AT(c, 0x89du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 13);
    // 0008a3  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x8a3u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0008a8  test eax, eax
    X86_AT(c, 0x8a8u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0008aa  je 0x8b7
    X86_AT(c, 0x8aau);
    if (x86_cc(c, 4)) { goto L_8b7; }
    X86_TICK(c, 12);
    // 0008ac  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x8acu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 0008b1  jae 0x7d7
    X86_AT(c, 0x8b1u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8b7:
    X86_TICK(c, 19);
    // 0008b7  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x8b7u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0008bd  mov ebx, eax
    X86_AT(c, 0x8bdu);
    c.r[3] = c.r[0];
    // 0008bf  mov al, byte ptr cs:[eax + 0x8fa]
    X86_AT(c, 0x8bfu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x8FAu))));
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
L_9f4:
    X86_TICK(c, 13);
    // 0009f4  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x9f4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0009f9  cmp al, 2
    X86_AT(c, 0x9f9u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0009fb  jae 0x7d7
    X86_AT(c, 0x9fbu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000a01  dec dx
    X86_AT(c, 0xa01u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 000a03  dec bx
    X86_AT(c, 0xa03u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 000a05  cmp dx, 0xf
    X86_AT(c, 0xa05u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFu, 0, 2);
    // 000a09  ja 0x7d7
    X86_AT(c, 0xa09u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 000a0f  cmp bx, 0xf
    X86_AT(c, 0xa0fu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0xFu, 0, 2);
    // 000a13  ja 0x7d7
    X86_AT(c, 0xa13u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 15);
    // 000a19  xor ch, ch
    X86_AT(c, 0xa19u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 000a1b  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xa1bu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000a20  test eax, eax
    X86_AT(c, 0xa20u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
L_b0c:
    X86_TICK(c, 13);
    // 000b0c  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xb0cu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000b11  cmp al, 2
    X86_AT(c, 0xb11u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 000b13  jae 0x7d7
    X86_AT(c, 0xb13u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 20);
    // 000b19  mov esi, eax
    X86_AT(c, 0xb19u);
    c.r[6] = c.r[0];
    // 000b1b  movzx ecx, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xb1bu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000b21  cmp byte ptr cs:[ecx + 0x7dd], 0
    X86_AT(c, 0xb21u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x7DDu))), 0x0u, 0, 1);
    // 000b29  je 0x7d7
    X86_AT(c, 0xb29u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 16);
    // 000b2f  xchg al, cl
    X86_AT(c, 0xb2fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 1)); s8(c, 1, t); }
    // 000b31  lea edi, [eax + eax*4]
    X86_AT(c, 0xb31u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 000b34  cmp dx, word ptr cs:[edi*2 + 0x598]
    X86_AT(c, 0xb34u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x598u))), 0, 2);
    // 000b3d  ja 0x7d7
    X86_AT(c, 0xb3du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000b43  cmp bx, word ptr cs:[edi*2 + 0x59a]
    X86_AT(c, 0xb43u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x59Au))), 0, 2);
    // 000b4c  ja 0x7d7
    X86_AT(c, 0xb4cu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 94);
    // 000b52  mov edi, eax
    X86_AT(c, 0xb52u);
    c.r[7] = c.r[0];
    // 000b54  mov ax, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0xb54u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u))));
    // 000b5c  test cl, cl
    X86_AT(c, 0xb5cu);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000b5e  setne cl
    X86_AT(c, 0xb5eu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000b61  shl cl, 3
    X86_AT(c, 0xb61u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000b64  shr ax, cl
    X86_AT(c, 0xb64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000b67  xor ah, ah
    X86_AT(c, 0xb67u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000b69  shl ax, 4
    X86_AT(c, 0xb69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000b6d  shr al, 4
    X86_AT(c, 0xb6du);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000b70  add ax, 0x101
    X86_AT(c, 0xb70u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x101u, 0, 2)); }
    // 000b74  shl eax, 8
    X86_AT(c, 0xb74u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000b77  xchg al, ah
    X86_AT(c, 0xb77u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000b79  imul dx, ax
    X86_AT(c, 0xb79u);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b7d  rol eax, 0x10
    X86_AT(c, 0xb7du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000b80  add bx, bx
    X86_AT(c, 0xb80u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 000b83  imul bx, ax
    X86_AT(c, 0xb83u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b87  cmp dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb87u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2);
    // 000b90  jb 0xb9b
    X86_AT(c, 0xb90u);
    if (x86_cc(c, 2)) { goto L_b9b; }
    X86_TICK(c, 4);
    // 000b92  mov dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb92u);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))));
L_b9b:
    X86_TICK(c, 11);
    // 000b9b  cmp bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xb9bu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2);
    // 000ba4  jb 0xbaf
    X86_AT(c, 0xba4u);
    if (x86_cc(c, 2)) { goto L_baf; }
    X86_TICK(c, 4);
    // 000ba6  mov bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xba6u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))));
L_baf:
    X86_TICK(c, 25);
    // 000baf  mov ax, word ptr gs:[ebp + esi*4 + 0xd2]
    X86_AT(c, 0xbafu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD2u))));
    // 000bb8  add dx, ax
    X86_AT(c, 0xbb8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000bbb  sub ax, word ptr gs:[ebp + esi*4 + 0xa0]
    X86_AT(c, 0xbbbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA0u))), 0, 2)); }
    // 000bc4  add ax, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xbc4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2)); }
    // 000bcd  cmp dx, ax
    X86_AT(c, 0xbcdu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bd0  jb 0xbd5
    X86_AT(c, 0xbd0u);
    if (x86_cc(c, 2)) { goto L_bd5; }
    X86_TICK(c, 2);
    // 000bd2  mov dx, ax
    X86_AT(c, 0xbd2u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
L_bd5:
    X86_TICK(c, 25);
    // 000bd5  mov ax, word ptr gs:[ebp + esi*4 + 0xda]
    X86_AT(c, 0xbd5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDAu))));
    // 000bde  add bx, ax
    X86_AT(c, 0xbdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000be1  sub ax, word ptr gs:[ebp + esi*4 + 0xa2]
    X86_AT(c, 0xbe1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA2u))), 0, 2)); }
    // 000bea  add ax, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xbeau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2)); }
    // 000bf3  cmp bx, ax
    X86_AT(c, 0xbf3u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bf6  jb 0xbfb
    X86_AT(c, 0xbf6u);
    if (x86_cc(c, 2)) { goto L_bfb; }
    X86_TICK(c, 2);
    // 000bf8  mov bx, ax
    X86_AT(c, 0xbf8u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
L_bfb:
    X86_TICK(c, 17);
    // 000bfb  mov word ptr gs:[ebp + esi*4 + 0xd4], dx
    X86_AT(c, 0xbfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD4u)), (c.r[2] & 0xFFFFu));
    // 000c04  mov word ptr gs:[ebp + esi*4 + 0xdc], bx
    X86_AT(c, 0xc04u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDCu)), (c.r[3] & 0xFFFFu));
    // 000c0d  mov cl, 8
    X86_AT(c, 0xc0du);
    s8(c, 1, 0x8u);
    // 000c0f  mov bl, 9
    X86_AT(c, 0xc0fu);
    s8(c, 3, 0x9u);
    // 000c11  lea edi, [ebp + 0xd2]
    X86_AT(c, 0xc11u);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 000c17  call 0x658
    X86_AT(c, 0xc17u);
    push32(c, 0xc1cu); f_00000658(c); X86_RET(c, 0xc1cu);
    X86_TICK(c, 10);
    // 000c1c  ret 
    X86_AT(c, 0xc1cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x680u, "ran off the end of a function");
}
void f_00000683(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000683  jmp dword ptr cs:[eax*4 + 0x68c]
    X86_AT(c, 0x683u);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x68Cu)));
      switch (t) {
      case 0x69cu: goto L_69c;
      case 0x888u: goto L_888;
      case 0x9f4u: goto L_9f4;
      case 0xb0cu: goto L_b0c;
      default: x86_jump(c, t); return; } }
L_69c:
    X86_TICK(c, 13);
    // 00069c  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x69cu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0006a1  cmp al, 2
    X86_AT(c, 0x6a1u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0006a3  jae 0x7d7
    X86_AT(c, 0x6a3u);
    if (x86_cc(c, 3)) { goto L_7d7; }
    X86_TICK(c, 20);
    // 0006a9  mov ecx, eax
    X86_AT(c, 0x6a9u);
    c.r[1] = c.r[0];
    // 0006ab  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x6abu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0006b1  cmp byte ptr cs:[eax + 0x7dd], 0
    X86_AT(c, 0x6b1u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x7DDu))), 0x0u, 0, 1);
    // 0006b9  je 0x7d7
    X86_AT(c, 0x6b9u);
    if (x86_cc(c, 4)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006bf  cmp dx, word ptr cs:[eax*4 + 0x7f0]
    X86_AT(c, 0x6bfu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F0u))), 0, 2);
    // 0006c8  ja 0x7d7
    X86_AT(c, 0x6c8u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006ce  cmp bx, word ptr cs:[eax*4 + 0x7f2]
    X86_AT(c, 0x6ceu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F2u))), 0, 2);
    // 0006d7  ja 0x7d7
    X86_AT(c, 0x6d7u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 23);
    // 0006dd  add bx, bx
    X86_AT(c, 0x6ddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0006e0  push eax
    X86_AT(c, 0x6e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0006e1  lea esi, [ebp + ecx*4 + 0xa0]
    X86_AT(c, 0x6e1u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xA0u);
    // 0006e8  lea edi, [ebp + ecx*4 + 0xd2]
    X86_AT(c, 0x6e8u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xD2u);
    // 0006ef  mov eax, ecx
    X86_AT(c, 0x6efu);
    c.r[0] = c.r[1];
    // 0006f1  movzx ecx, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0x6f1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)));
    // 0006f9  test eax, eax
    X86_AT(c, 0x6f9u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0006fb  jne 0x704
    X86_AT(c, 0x6fbu);
    if (x86_cc(c, 5)) { goto L_704; }
    X86_TICK(c, 9);
    // 0006fd  and cx, 0xff
    X86_AT(c, 0x6fdu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFFu, 2)); }
    // 000702  jmp 0x70d
    X86_AT(c, 0x702u);
    goto L_70d;
L_704:
    X86_TICK(c, 5);
    // 000704  and cx, 0xff00
    X86_AT(c, 0x704u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFF00u, 2)); }
    // 000709  shr cx, 8
    X86_AT(c, 0x709u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 1, r); }
L_70d:
    X86_TICK(c, 103);
    // 00070d  shl ecx, 4
    X86_AT(c, 0x70du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 000710  shr cl, 4
    X86_AT(c, 0x710u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 000713  add cx, 0x101
    X86_AT(c, 0x713u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x101u, 0, 2)); }
    // 000718  shl ecx, 8
    X86_AT(c, 0x718u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[1] = r; }
    // 00071b  xchg cl, ch
    X86_AT(c, 0x71bu);
    { uint32_t t = g8(c, 1); s8(c, 1, g8(c, 5)); s8(c, 5, t); }
    // 00071d  imul dx, cx
    X86_AT(c, 0x71du);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000721  rol ecx, 0x10
    X86_AT(c, 0x721u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 000724  imul bx, cx
    X86_AT(c, 0x724u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000728  pop ecx
    X86_AT(c, 0x728u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 000729  rol ebx, 0x10
    X86_AT(c, 0x729u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00072c  mov ax, word ptr gs:[edi + 2]
    X86_AT(c, 0x72cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x2u))));
    // 000731  sub ax, word ptr gs:[esi]
    X86_AT(c, 0x731u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000735  add ax, dx
    X86_AT(c, 0x735u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000738  mov bx, word ptr gs:[edi]
    X86_AT(c, 0x738u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 00073c  sub bx, word ptr gs:[esi]
    X86_AT(c, 0x73cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000740  add bx, word ptr cs:[ecx*4 + 0x83c]
    X86_AT(c, 0x740u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Cu))), 0, 2)); }
    // 000749  cmp ax, bx
    X86_AT(c, 0x749u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00074c  ja 0x7d7
    X86_AT(c, 0x74cu);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 72);
    // 000752  mov ax, word ptr gs:[esi]
    X86_AT(c, 0x752u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000756  sub word ptr gs:[edi], ax
    X86_AT(c, 0x756u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00075a  add word ptr gs:[edi], dx
    X86_AT(c, 0x75au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00075e  sub word ptr gs:[edi + 2], ax
    X86_AT(c, 0x75eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000763  add word ptr gs:[edi + 2], dx
    X86_AT(c, 0x763u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000768  mov word ptr gs:[esi], dx
    X86_AT(c, 0x768u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[2] & 0xFFFFu));
    // 00076c  rol ebx, 0x10
    X86_AT(c, 0x76cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00076f  mov ax, word ptr gs:[edi + 0xa]
    X86_AT(c, 0x76fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0xAu))));
    // 000774  sub ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x774u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000779  add ax, bx
    X86_AT(c, 0x779u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00077c  mov dx, word ptr gs:[edi + 8]
    X86_AT(c, 0x77cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x8u))));
    // 000781  sub dx, word ptr gs:[esi + 2]
    X86_AT(c, 0x781u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000786  add dx, word ptr cs:[ecx*4 + 0x83e]
    X86_AT(c, 0x786u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Eu))), 0, 2)); }
    // 00078f  cmp ax, dx
    X86_AT(c, 0x78fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 000792  ja 0x7d7
    X86_AT(c, 0x792u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 49);
    // 000794  mov ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x794u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))));
    // 000799  sub word ptr gs:[edi + 8], ax
    X86_AT(c, 0x799u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00079e  add word ptr gs:[edi + 8], bx
    X86_AT(c, 0x79eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007a3  sub word ptr gs:[edi + 0xa], ax
    X86_AT(c, 0x7a3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0007a8  add word ptr gs:[edi + 0xa], bx
    X86_AT(c, 0x7a8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007ad  mov word ptr gs:[esi + 2], bx
    X86_AT(c, 0x7adu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 0007b2  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0x7b2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 0007bd  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x7bdu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0007c2  call 0x968
    X86_AT(c, 0x7c2u);
    push32(c, 0x7c7u); f_00000968(c); X86_RET(c, 0x7c7u);
    X86_TICK(c, 13);
    // 0007c7  mov cl, 0xe
    X86_AT(c, 0x7c7u);
    s8(c, 1, 0xEu);
    // 0007c9  mov bl, 9
    X86_AT(c, 0x7c9u);
    s8(c, 3, 0x9u);
    // 0007cb  lea edi, [ebp + 0xd2]
    X86_AT(c, 0x7cbu);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 0007d1  call 0x658
    X86_AT(c, 0x7d1u);
    push32(c, 0x7d6u); f_00000658(c); X86_RET(c, 0x7d6u);
    X86_TICK(c, 10);
    // 0007d6  ret 
    X86_AT(c, 0x7d6u);
    c.eip = pop32(c); return;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_888:
    X86_TICK(c, 16);
    // 000888  mov word ptr gs:[ebp + 0x3a4], dx
    X86_AT(c, 0x888u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), (c.r[2] & 0xFFFFu));
    // 000890  mov word ptr gs:[ebp + 0x3a6], bx
    X86_AT(c, 0x890u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)), (c.r[3] & 0xFFFFu));
    // 000898  cmp byte ptr gs:[ebp + 0x30], 2
    X86_AT(c, 0x898u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), 0x2u, 0, 1);
    // 00089d  ja 0x7d7
    X86_AT(c, 0x89du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 13);
    // 0008a3  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x8a3u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0008a8  test eax, eax
    X86_AT(c, 0x8a8u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0008aa  je 0x8b7
    X86_AT(c, 0x8aau);
    if (x86_cc(c, 4)) { goto L_8b7; }
    X86_TICK(c, 12);
    // 0008ac  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x8acu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 0008b1  jae 0x7d7
    X86_AT(c, 0x8b1u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8b7:
    X86_TICK(c, 19);
    // 0008b7  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x8b7u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0008bd  mov ebx, eax
    X86_AT(c, 0x8bdu);
    c.r[3] = c.r[0];
    // 0008bf  mov al, byte ptr cs:[eax + 0x8fa]
    X86_AT(c, 0x8bfu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x8FAu))));
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
L_9f4:
    X86_TICK(c, 13);
    // 0009f4  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x9f4u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0009f9  cmp al, 2
    X86_AT(c, 0x9f9u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0009fb  jae 0x7d7
    X86_AT(c, 0x9fbu);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000a01  dec dx
    X86_AT(c, 0xa01u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_dec(c, v, 2)); }
    // 000a03  dec bx
    X86_AT(c, 0xa03u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_dec(c, v, 2)); }
    // 000a05  cmp dx, 0xf
    X86_AT(c, 0xa05u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), 0xFu, 0, 2);
    // 000a09  ja 0x7d7
    X86_AT(c, 0xa09u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 000a0f  cmp bx, 0xf
    X86_AT(c, 0xa0fu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), 0xFu, 0, 2);
    // 000a13  ja 0x7d7
    X86_AT(c, 0xa13u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 15);
    // 000a19  xor ch, ch
    X86_AT(c, 0xa19u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_logic(c, v ^ g8(c, 5), 1)); }
    // 000a1b  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xa1bu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000a20  test eax, eax
    X86_AT(c, 0xa20u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 000a22  je 0xa2f
    X86_AT(c, 0xa22u);
    if (x86_cc(c, 4)) { goto L_a2f; }
    X86_TICK(c, 12);
    // 000a24  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa24u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a29  jae 0x7d7
    X86_AT(c, 0xa29u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_a2f:
    X86_TICK(c, 12);
    // 000a2f  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0xa2fu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 000a34  jb 0xa38
    X86_AT(c, 0xa34u);
    if (x86_cc(c, 2)) { goto L_a38; }
    X86_TICK(c, 2);
    // 000a36  inc ch
    X86_AT(c, 0xa36u);
    { uint32_t v = g8(c, 5); s8(c, 5, x86_inc(c, v, 1)); }
L_a38:
    X86_TICK(c, 50);
    // 000a38  mov cl, al
    X86_AT(c, 0xa38u);
    s8(c, 1, g8(c, 0));
    // 000a3a  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xa3au);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000a40  movzx eax, word ptr cs:[eax*2 + 0xae4]
    X86_AT(c, 0xa40u);
    c.r[0] = rd16((c.sbase[1] + (uint32_t)(c.r[0] * 2 + 0xAE4u)));
    // 000a49  test cl, cl
    X86_AT(c, 0xa49u);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000a4b  setne cl
    X86_AT(c, 0xa4bu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000a4e  shl cl, 3
    X86_AT(c, 0xa4eu);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000a51  shr ax, cl
    X86_AT(c, 0xa51u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000a54  xor ah, ah
    X86_AT(c, 0xa54u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000a56  shl ax, 4
    X86_AT(c, 0xa56u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000a5a  shr al, 4
    X86_AT(c, 0xa5au);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000a5d  shl eax, 8
    X86_AT(c, 0xa5du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000a60  xchg al, ah
    X86_AT(c, 0xa60u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000a62  rol eax, 0x10
    X86_AT(c, 0xa62u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a65  cmp bx, ax
    X86_AT(c, 0xa65u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a68  jb 0x7d7
    X86_AT(c, 0xa68u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 10);
    // 000a6e  rol eax, 0x10
    X86_AT(c, 0xa6eu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000a71  cmp dx, ax
    X86_AT(c, 0xa71u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000a74  jb 0x7d7
    X86_AT(c, 0xa74u);
    if (x86_cc(c, 2)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 24);
    // 000a7a  shl edx, 0xc
    X86_AT(c, 0xa7au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, 0xCu, 4, w); if (w) c.r[2] = r; }
    // 000a7d  shrd dx, bx, 4
    X86_AT(c, 0xa7du);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_double(c, false, v, (c.r[3] & 0xFFFFu), 0x4u, 2, w); if (w) s16(c, 2, r); }
    // 000a82  shr dx, 8
    X86_AT(c, 0xa82u);
    { uint32_t v = (c.r[2] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 2, r); }
    // 000a86  mov bx, 0xff00
    X86_AT(c, 0xa86u);
    s16(c, 3, 0xFF00u);
    // 000a8a  shl edx, cl
    X86_AT(c, 0xa8au);
    { uint32_t v = c.r[2]; bool w; uint32_t r = x86_shift(c, 4, v, g8(c, 1), 4, w); if (w) c.r[2] = r; }
    // 000a8c  shr bx, cl
    X86_AT(c, 0xa8cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 3, r); }
    // 000a8f  test ch, ch
    X86_AT(c, 0xa8fu);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000a91  je 0xa97
    X86_AT(c, 0xa91u);
    if (x86_cc(c, 4)) { goto L_a97; }
    X86_TICK(c, 4);
    // 000a93  mov dh, dl
    X86_AT(c, 0xa93u);
    s8(c, 6, g8(c, 2));
    // 000a95  mov bh, bl
    X86_AT(c, 0xa95u);
    s8(c, 7, g8(c, 3));
L_a97:
    X86_TICK(c, 23);
    // 000a97  and word ptr gs:[ebp + 0xf6], bx
    X86_AT(c, 0xa97u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v & (c.r[3] & 0xFFFFu), 2)); }
    // 000a9f  or word ptr gs:[ebp + 0xf6], dx
    X86_AT(c, 0xa9fu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)); uint32_t v = rd16(ea); wr16(ea, x86_logic(c, v | (c.r[2] & 0xFFFFu), 2)); }
    // 000aa7  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0xaa7u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 000ab2  test ch, ch
    X86_AT(c, 0xab2u);
    (void)x86_logic(c, g8(c, 5) & g8(c, 5), 1);
    // 000ab4  jne 0xac2
    X86_AT(c, 0xab4u);
    if (x86_cc(c, 5)) { goto L_ac2; }
    X86_TICK(c, 13);
    // 000ab6  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xab6u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000abb  call 0x968
    X86_AT(c, 0xabbu);
    push32(c, 0xac0u); f_00000968(c); X86_RET(c, 0xac0u);
    X86_TICK(c, 7);
    // 000ac0  jmp 0xad3
    X86_AT(c, 0xac0u);
    goto L_ad3;
L_ac2:
    X86_TICK(c, 9);
    // 000ac2  sub eax, eax
    X86_AT(c, 0xac2u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000ac4  call 0x968
    X86_AT(c, 0xac4u);
    push32(c, 0xac9u); f_00000968(c); X86_RET(c, 0xac9u);
    X86_TICK(c, 9);
    // 000ac9  mov eax, 1
    X86_AT(c, 0xac9u);
    c.r[0] = 0x1u;
    // 000ace  call 0x968
    X86_AT(c, 0xaceu);
    push32(c, 0xad3u); f_00000968(c); X86_RET(c, 0xad3u);
L_ad3:
    X86_TICK(c, 13);
    // 000ad3  mov cl, 0xb
    X86_AT(c, 0xad3u);
    s8(c, 1, 0xBu);
    // 000ad5  mov bl, 0x11
    X86_AT(c, 0xad5u);
    s8(c, 3, 0x11u);
    // 000ad7  lea edi, [ebp + 0xe2]
    X86_AT(c, 0xad7u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 000add  call 0x658
    X86_AT(c, 0xaddu);
    push32(c, 0xae2u); f_00000658(c); X86_RET(c, 0xae2u);
    X86_TICK(c, 10);
    // 000ae2  ret 
    X86_AT(c, 0xae2u);
    c.eip = pop32(c); return;
L_b0c:
    X86_TICK(c, 13);
    // 000b0c  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0xb0cu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 000b11  cmp al, 2
    X86_AT(c, 0xb11u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 000b13  jae 0x7d7
    X86_AT(c, 0xb13u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 20);
    // 000b19  mov esi, eax
    X86_AT(c, 0xb19u);
    c.r[6] = c.r[0];
    // 000b1b  movzx ecx, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0xb1bu);
    c.r[1] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 000b21  cmp byte ptr cs:[ecx + 0x7dd], 0
    X86_AT(c, 0xb21u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[1] + 0x7DDu))), 0x0u, 0, 1);
    // 000b29  je 0x7d7
    X86_AT(c, 0xb29u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 16);
    // 000b2f  xchg al, cl
    X86_AT(c, 0xb2fu);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 1)); s8(c, 1, t); }
    // 000b31  lea edi, [eax + eax*4]
    X86_AT(c, 0xb31u);
    c.r[7] = (uint32_t)(c.r[0] + c.r[0] * 4);
    // 000b34  cmp dx, word ptr cs:[edi*2 + 0x598]
    X86_AT(c, 0xb34u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x598u))), 0, 2);
    // 000b3d  ja 0x7d7
    X86_AT(c, 0xb3du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 11);
    // 000b43  cmp bx, word ptr cs:[edi*2 + 0x59a]
    X86_AT(c, 0xb43u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 2 + 0x59Au))), 0, 2);
    // 000b4c  ja 0x7d7
    X86_AT(c, 0xb4cu);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 94);
    // 000b52  mov edi, eax
    X86_AT(c, 0xb52u);
    c.r[7] = c.r[0];
    // 000b54  mov ax, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0xb54u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u))));
    // 000b5c  test cl, cl
    X86_AT(c, 0xb5cu);
    (void)x86_logic(c, g8(c, 1) & g8(c, 1), 1);
    // 000b5e  setne cl
    X86_AT(c, 0xb5eu);
    s8(c, 1, x86_cc(c, 5) ? 1u : 0u);
    // 000b61  shl cl, 3
    X86_AT(c, 0xb61u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 4, v, 0x3u, 1, w); if (w) s8(c, 1, r); }
    // 000b64  shr ax, cl
    X86_AT(c, 0xb64u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, g8(c, 1), 2, w); if (w) s16(c, 0, r); }
    // 000b67  xor ah, ah
    X86_AT(c, 0xb67u);
    { uint32_t v = g8(c, 4); s8(c, 4, x86_logic(c, v ^ g8(c, 4), 1)); }
    // 000b69  shl ax, 4
    X86_AT(c, 0xb69u);
    { uint32_t v = (c.r[0] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 2, w); if (w) s16(c, 0, r); }
    // 000b6d  shr al, 4
    X86_AT(c, 0xb6du);
    { uint32_t v = g8(c, 0); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 0, r); }
    // 000b70  add ax, 0x101
    X86_AT(c, 0xb70u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, 0x101u, 0, 2)); }
    // 000b74  shl eax, 8
    X86_AT(c, 0xb74u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 000b77  xchg al, ah
    X86_AT(c, 0xb77u);
    { uint32_t t = g8(c, 0); s8(c, 0, g8(c, 4)); s8(c, 4, t); }
    // 000b79  imul dx, ax
    X86_AT(c, 0xb79u);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b7d  rol eax, 0x10
    X86_AT(c, 0xb7du);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[0] = r; }
    // 000b80  add bx, bx
    X86_AT(c, 0xb80u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 000b83  imul bx, ax
    X86_AT(c, 0xb83u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 2));
    // 000b87  cmp dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb87u);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2);
    // 000b90  jb 0xb9b
    X86_AT(c, 0xb90u);
    if (x86_cc(c, 2)) { goto L_b9b; }
    X86_TICK(c, 4);
    // 000b92  mov dx, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xb92u);
    s16(c, 2, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))));
L_b9b:
    X86_TICK(c, 11);
    // 000b9b  cmp bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xb9bu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2);
    // 000ba4  jb 0xbaf
    X86_AT(c, 0xba4u);
    if (x86_cc(c, 2)) { goto L_baf; }
    X86_TICK(c, 4);
    // 000ba6  mov bx, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xba6u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))));
L_baf:
    X86_TICK(c, 25);
    // 000baf  mov ax, word ptr gs:[ebp + esi*4 + 0xd2]
    X86_AT(c, 0xbafu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD2u))));
    // 000bb8  add dx, ax
    X86_AT(c, 0xbb8u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000bbb  sub ax, word ptr gs:[ebp + esi*4 + 0xa0]
    X86_AT(c, 0xbbbu);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA0u))), 0, 2)); }
    // 000bc4  add ax, word ptr cs:[edi*4 + 0x83c]
    X86_AT(c, 0xbc4u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Cu))), 0, 2)); }
    // 000bcd  cmp dx, ax
    X86_AT(c, 0xbcdu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bd0  jb 0xbd5
    X86_AT(c, 0xbd0u);
    if (x86_cc(c, 2)) { goto L_bd5; }
    X86_TICK(c, 2);
    // 000bd2  mov dx, ax
    X86_AT(c, 0xbd2u);
    s16(c, 2, (c.r[0] & 0xFFFFu));
L_bd5:
    X86_TICK(c, 25);
    // 000bd5  mov ax, word ptr gs:[ebp + esi*4 + 0xda]
    X86_AT(c, 0xbd5u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDAu))));
    // 000bde  add bx, ax
    X86_AT(c, 0xbdeu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000be1  sub ax, word ptr gs:[ebp + esi*4 + 0xa2]
    X86_AT(c, 0xbe1u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xA2u))), 0, 2)); }
    // 000bea  add ax, word ptr cs:[edi*4 + 0x83e]
    X86_AT(c, 0xbeau);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[7] * 4 + 0x83Eu))), 0, 2)); }
    // 000bf3  cmp bx, ax
    X86_AT(c, 0xbf3u);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), (c.r[0] & 0xFFFFu), 0, 2);
    // 000bf6  jb 0xbfb
    X86_AT(c, 0xbf6u);
    if (x86_cc(c, 2)) { goto L_bfb; }
    X86_TICK(c, 2);
    // 000bf8  mov bx, ax
    X86_AT(c, 0xbf8u);
    s16(c, 3, (c.r[0] & 0xFFFFu));
L_bfb:
    X86_TICK(c, 17);
    // 000bfb  mov word ptr gs:[ebp + esi*4 + 0xd4], dx
    X86_AT(c, 0xbfbu);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xD4u)), (c.r[2] & 0xFFFFu));
    // 000c04  mov word ptr gs:[ebp + esi*4 + 0xdc], bx
    X86_AT(c, 0xc04u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + c.r[6] * 4 + 0xDCu)), (c.r[3] & 0xFFFFu));
    // 000c0d  mov cl, 8
    X86_AT(c, 0xc0du);
    s8(c, 1, 0x8u);
    // 000c0f  mov bl, 9
    X86_AT(c, 0xc0fu);
    s8(c, 3, 0x9u);
    // 000c11  lea edi, [ebp + 0xd2]
    X86_AT(c, 0xc11u);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 000c17  call 0x658
    X86_AT(c, 0xc17u);
    push32(c, 0xc1cu); f_00000658(c); X86_RET(c, 0xc1cu);
    X86_TICK(c, 10);
    // 000c1c  ret 
    X86_AT(c, 0xc1cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x683u, "ran off the end of a function");
}
void f_0000069c(X86Cpu& c) {
    X86_TICK(c, 13);
    // 00069c  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x69cu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0006a1  cmp al, 2
    X86_AT(c, 0x6a1u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0006a3  jae 0x7d7
    X86_AT(c, 0x6a3u);
    if (x86_cc(c, 3)) { goto L_7d7; }
    X86_TICK(c, 20);
    // 0006a9  mov ecx, eax
    X86_AT(c, 0x6a9u);
    c.r[1] = c.r[0];
    // 0006ab  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x6abu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0006b1  cmp byte ptr cs:[eax + 0x7dd], 0
    X86_AT(c, 0x6b1u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x7DDu))), 0x0u, 0, 1);
    // 0006b9  je 0x7d7
    X86_AT(c, 0x6b9u);
    if (x86_cc(c, 4)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006bf  cmp dx, word ptr cs:[eax*4 + 0x7f0]
    X86_AT(c, 0x6bfu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F0u))), 0, 2);
    // 0006c8  ja 0x7d7
    X86_AT(c, 0x6c8u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006ce  cmp bx, word ptr cs:[eax*4 + 0x7f2]
    X86_AT(c, 0x6ceu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F2u))), 0, 2);
    // 0006d7  ja 0x7d7
    X86_AT(c, 0x6d7u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 23);
    // 0006dd  add bx, bx
    X86_AT(c, 0x6ddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0006e0  push eax
    X86_AT(c, 0x6e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0006e1  lea esi, [ebp + ecx*4 + 0xa0]
    X86_AT(c, 0x6e1u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xA0u);
    // 0006e8  lea edi, [ebp + ecx*4 + 0xd2]
    X86_AT(c, 0x6e8u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xD2u);
    // 0006ef  mov eax, ecx
    X86_AT(c, 0x6efu);
    c.r[0] = c.r[1];
    // 0006f1  movzx ecx, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0x6f1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)));
    // 0006f9  test eax, eax
    X86_AT(c, 0x6f9u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0006fb  jne 0x704
    X86_AT(c, 0x6fbu);
    if (x86_cc(c, 5)) { goto L_704; }
    X86_TICK(c, 9);
    // 0006fd  and cx, 0xff
    X86_AT(c, 0x6fdu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFFu, 2)); }
    // 000702  jmp 0x70d
    X86_AT(c, 0x702u);
    goto L_70d;
L_704:
    X86_TICK(c, 5);
    // 000704  and cx, 0xff00
    X86_AT(c, 0x704u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFF00u, 2)); }
    // 000709  shr cx, 8
    X86_AT(c, 0x709u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 1, r); }
L_70d:
    X86_TICK(c, 103);
    // 00070d  shl ecx, 4
    X86_AT(c, 0x70du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 000710  shr cl, 4
    X86_AT(c, 0x710u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 000713  add cx, 0x101
    X86_AT(c, 0x713u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x101u, 0, 2)); }
    // 000718  shl ecx, 8
    X86_AT(c, 0x718u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[1] = r; }
    // 00071b  xchg cl, ch
    X86_AT(c, 0x71bu);
    { uint32_t t = g8(c, 1); s8(c, 1, g8(c, 5)); s8(c, 5, t); }
    // 00071d  imul dx, cx
    X86_AT(c, 0x71du);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000721  rol ecx, 0x10
    X86_AT(c, 0x721u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 000724  imul bx, cx
    X86_AT(c, 0x724u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000728  pop ecx
    X86_AT(c, 0x728u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 000729  rol ebx, 0x10
    X86_AT(c, 0x729u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00072c  mov ax, word ptr gs:[edi + 2]
    X86_AT(c, 0x72cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x2u))));
    // 000731  sub ax, word ptr gs:[esi]
    X86_AT(c, 0x731u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000735  add ax, dx
    X86_AT(c, 0x735u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000738  mov bx, word ptr gs:[edi]
    X86_AT(c, 0x738u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 00073c  sub bx, word ptr gs:[esi]
    X86_AT(c, 0x73cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000740  add bx, word ptr cs:[ecx*4 + 0x83c]
    X86_AT(c, 0x740u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Cu))), 0, 2)); }
    // 000749  cmp ax, bx
    X86_AT(c, 0x749u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00074c  ja 0x7d7
    X86_AT(c, 0x74cu);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 72);
    // 000752  mov ax, word ptr gs:[esi]
    X86_AT(c, 0x752u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000756  sub word ptr gs:[edi], ax
    X86_AT(c, 0x756u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00075a  add word ptr gs:[edi], dx
    X86_AT(c, 0x75au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00075e  sub word ptr gs:[edi + 2], ax
    X86_AT(c, 0x75eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000763  add word ptr gs:[edi + 2], dx
    X86_AT(c, 0x763u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000768  mov word ptr gs:[esi], dx
    X86_AT(c, 0x768u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[2] & 0xFFFFu));
    // 00076c  rol ebx, 0x10
    X86_AT(c, 0x76cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00076f  mov ax, word ptr gs:[edi + 0xa]
    X86_AT(c, 0x76fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0xAu))));
    // 000774  sub ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x774u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000779  add ax, bx
    X86_AT(c, 0x779u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00077c  mov dx, word ptr gs:[edi + 8]
    X86_AT(c, 0x77cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x8u))));
    // 000781  sub dx, word ptr gs:[esi + 2]
    X86_AT(c, 0x781u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000786  add dx, word ptr cs:[ecx*4 + 0x83e]
    X86_AT(c, 0x786u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Eu))), 0, 2)); }
    // 00078f  cmp ax, dx
    X86_AT(c, 0x78fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 000792  ja 0x7d7
    X86_AT(c, 0x792u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 49);
    // 000794  mov ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x794u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))));
    // 000799  sub word ptr gs:[edi + 8], ax
    X86_AT(c, 0x799u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00079e  add word ptr gs:[edi + 8], bx
    X86_AT(c, 0x79eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007a3  sub word ptr gs:[edi + 0xa], ax
    X86_AT(c, 0x7a3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0007a8  add word ptr gs:[edi + 0xa], bx
    X86_AT(c, 0x7a8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007ad  mov word ptr gs:[esi + 2], bx
    X86_AT(c, 0x7adu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 0007b2  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0x7b2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 0007bd  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x7bdu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0007c2  call 0x968
    X86_AT(c, 0x7c2u);
    push32(c, 0x7c7u); f_00000968(c); X86_RET(c, 0x7c7u);
    X86_TICK(c, 13);
    // 0007c7  mov cl, 0xe
    X86_AT(c, 0x7c7u);
    s8(c, 1, 0xEu);
    // 0007c9  mov bl, 9
    X86_AT(c, 0x7c9u);
    s8(c, 3, 0x9u);
    // 0007cb  lea edi, [ebp + 0xd2]
    X86_AT(c, 0x7cbu);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 0007d1  call 0x658
    X86_AT(c, 0x7d1u);
    push32(c, 0x7d6u); f_00000658(c); X86_RET(c, 0x7d6u);
    X86_TICK(c, 10);
    // 0007d6  ret 
    X86_AT(c, 0x7d6u);
    c.eip = pop32(c); return;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x69cu, "ran off the end of a function");
}
void f_000006a1(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0006a1  cmp al, 2
    X86_AT(c, 0x6a1u);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0006a3  jae 0x7d7
    X86_AT(c, 0x6a3u);
    if (x86_cc(c, 3)) { goto L_7d7; }
    X86_TICK(c, 20);
    // 0006a9  mov ecx, eax
    X86_AT(c, 0x6a9u);
    c.r[1] = c.r[0];
    // 0006ab  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x6abu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0006b1  cmp byte ptr cs:[eax + 0x7dd], 0
    X86_AT(c, 0x6b1u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x7DDu))), 0x0u, 0, 1);
    // 0006b9  je 0x7d7
    X86_AT(c, 0x6b9u);
    if (x86_cc(c, 4)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006bf  cmp dx, word ptr cs:[eax*4 + 0x7f0]
    X86_AT(c, 0x6bfu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F0u))), 0, 2);
    // 0006c8  ja 0x7d7
    X86_AT(c, 0x6c8u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006ce  cmp bx, word ptr cs:[eax*4 + 0x7f2]
    X86_AT(c, 0x6ceu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F2u))), 0, 2);
    // 0006d7  ja 0x7d7
    X86_AT(c, 0x6d7u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 23);
    // 0006dd  add bx, bx
    X86_AT(c, 0x6ddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0006e0  push eax
    X86_AT(c, 0x6e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0006e1  lea esi, [ebp + ecx*4 + 0xa0]
    X86_AT(c, 0x6e1u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xA0u);
    // 0006e8  lea edi, [ebp + ecx*4 + 0xd2]
    X86_AT(c, 0x6e8u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xD2u);
    // 0006ef  mov eax, ecx
    X86_AT(c, 0x6efu);
    c.r[0] = c.r[1];
    // 0006f1  movzx ecx, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0x6f1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)));
    // 0006f9  test eax, eax
    X86_AT(c, 0x6f9u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0006fb  jne 0x704
    X86_AT(c, 0x6fbu);
    if (x86_cc(c, 5)) { goto L_704; }
    X86_TICK(c, 9);
    // 0006fd  and cx, 0xff
    X86_AT(c, 0x6fdu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFFu, 2)); }
    // 000702  jmp 0x70d
    X86_AT(c, 0x702u);
    goto L_70d;
L_704:
    X86_TICK(c, 5);
    // 000704  and cx, 0xff00
    X86_AT(c, 0x704u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFF00u, 2)); }
    // 000709  shr cx, 8
    X86_AT(c, 0x709u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 1, r); }
L_70d:
    X86_TICK(c, 103);
    // 00070d  shl ecx, 4
    X86_AT(c, 0x70du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 000710  shr cl, 4
    X86_AT(c, 0x710u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 000713  add cx, 0x101
    X86_AT(c, 0x713u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x101u, 0, 2)); }
    // 000718  shl ecx, 8
    X86_AT(c, 0x718u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[1] = r; }
    // 00071b  xchg cl, ch
    X86_AT(c, 0x71bu);
    { uint32_t t = g8(c, 1); s8(c, 1, g8(c, 5)); s8(c, 5, t); }
    // 00071d  imul dx, cx
    X86_AT(c, 0x71du);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000721  rol ecx, 0x10
    X86_AT(c, 0x721u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 000724  imul bx, cx
    X86_AT(c, 0x724u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000728  pop ecx
    X86_AT(c, 0x728u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 000729  rol ebx, 0x10
    X86_AT(c, 0x729u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00072c  mov ax, word ptr gs:[edi + 2]
    X86_AT(c, 0x72cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x2u))));
    // 000731  sub ax, word ptr gs:[esi]
    X86_AT(c, 0x731u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000735  add ax, dx
    X86_AT(c, 0x735u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000738  mov bx, word ptr gs:[edi]
    X86_AT(c, 0x738u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 00073c  sub bx, word ptr gs:[esi]
    X86_AT(c, 0x73cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000740  add bx, word ptr cs:[ecx*4 + 0x83c]
    X86_AT(c, 0x740u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Cu))), 0, 2)); }
    // 000749  cmp ax, bx
    X86_AT(c, 0x749u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00074c  ja 0x7d7
    X86_AT(c, 0x74cu);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 72);
    // 000752  mov ax, word ptr gs:[esi]
    X86_AT(c, 0x752u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000756  sub word ptr gs:[edi], ax
    X86_AT(c, 0x756u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00075a  add word ptr gs:[edi], dx
    X86_AT(c, 0x75au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00075e  sub word ptr gs:[edi + 2], ax
    X86_AT(c, 0x75eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000763  add word ptr gs:[edi + 2], dx
    X86_AT(c, 0x763u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000768  mov word ptr gs:[esi], dx
    X86_AT(c, 0x768u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[2] & 0xFFFFu));
    // 00076c  rol ebx, 0x10
    X86_AT(c, 0x76cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00076f  mov ax, word ptr gs:[edi + 0xa]
    X86_AT(c, 0x76fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0xAu))));
    // 000774  sub ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x774u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000779  add ax, bx
    X86_AT(c, 0x779u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00077c  mov dx, word ptr gs:[edi + 8]
    X86_AT(c, 0x77cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x8u))));
    // 000781  sub dx, word ptr gs:[esi + 2]
    X86_AT(c, 0x781u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000786  add dx, word ptr cs:[ecx*4 + 0x83e]
    X86_AT(c, 0x786u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Eu))), 0, 2)); }
    // 00078f  cmp ax, dx
    X86_AT(c, 0x78fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 000792  ja 0x7d7
    X86_AT(c, 0x792u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 49);
    // 000794  mov ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x794u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))));
    // 000799  sub word ptr gs:[edi + 8], ax
    X86_AT(c, 0x799u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00079e  add word ptr gs:[edi + 8], bx
    X86_AT(c, 0x79eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007a3  sub word ptr gs:[edi + 0xa], ax
    X86_AT(c, 0x7a3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0007a8  add word ptr gs:[edi + 0xa], bx
    X86_AT(c, 0x7a8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007ad  mov word ptr gs:[esi + 2], bx
    X86_AT(c, 0x7adu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 0007b2  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0x7b2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 0007bd  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x7bdu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0007c2  call 0x968
    X86_AT(c, 0x7c2u);
    push32(c, 0x7c7u); f_00000968(c); X86_RET(c, 0x7c7u);
    X86_TICK(c, 13);
    // 0007c7  mov cl, 0xe
    X86_AT(c, 0x7c7u);
    s8(c, 1, 0xEu);
    // 0007c9  mov bl, 9
    X86_AT(c, 0x7c9u);
    s8(c, 3, 0x9u);
    // 0007cb  lea edi, [ebp + 0xd2]
    X86_AT(c, 0x7cbu);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 0007d1  call 0x658
    X86_AT(c, 0x7d1u);
    push32(c, 0x7d6u); f_00000658(c); X86_RET(c, 0x7d6u);
    X86_TICK(c, 10);
    // 0007d6  ret 
    X86_AT(c, 0x7d6u);
    c.eip = pop32(c); return;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6a1u, "ran off the end of a function");
}
void f_000006a3(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0006a3  jae 0x7d7
    X86_AT(c, 0x6a3u);
    if (x86_cc(c, 3)) { goto L_7d7; }
    X86_TICK(c, 20);
    // 0006a9  mov ecx, eax
    X86_AT(c, 0x6a9u);
    c.r[1] = c.r[0];
    // 0006ab  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x6abu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0006b1  cmp byte ptr cs:[eax + 0x7dd], 0
    X86_AT(c, 0x6b1u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x7DDu))), 0x0u, 0, 1);
    // 0006b9  je 0x7d7
    X86_AT(c, 0x6b9u);
    if (x86_cc(c, 4)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006bf  cmp dx, word ptr cs:[eax*4 + 0x7f0]
    X86_AT(c, 0x6bfu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F0u))), 0, 2);
    // 0006c8  ja 0x7d7
    X86_AT(c, 0x6c8u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006ce  cmp bx, word ptr cs:[eax*4 + 0x7f2]
    X86_AT(c, 0x6ceu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F2u))), 0, 2);
    // 0006d7  ja 0x7d7
    X86_AT(c, 0x6d7u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 23);
    // 0006dd  add bx, bx
    X86_AT(c, 0x6ddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0006e0  push eax
    X86_AT(c, 0x6e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0006e1  lea esi, [ebp + ecx*4 + 0xa0]
    X86_AT(c, 0x6e1u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xA0u);
    // 0006e8  lea edi, [ebp + ecx*4 + 0xd2]
    X86_AT(c, 0x6e8u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xD2u);
    // 0006ef  mov eax, ecx
    X86_AT(c, 0x6efu);
    c.r[0] = c.r[1];
    // 0006f1  movzx ecx, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0x6f1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)));
    // 0006f9  test eax, eax
    X86_AT(c, 0x6f9u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0006fb  jne 0x704
    X86_AT(c, 0x6fbu);
    if (x86_cc(c, 5)) { goto L_704; }
    X86_TICK(c, 9);
    // 0006fd  and cx, 0xff
    X86_AT(c, 0x6fdu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFFu, 2)); }
    // 000702  jmp 0x70d
    X86_AT(c, 0x702u);
    goto L_70d;
L_704:
    X86_TICK(c, 5);
    // 000704  and cx, 0xff00
    X86_AT(c, 0x704u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFF00u, 2)); }
    // 000709  shr cx, 8
    X86_AT(c, 0x709u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 1, r); }
L_70d:
    X86_TICK(c, 103);
    // 00070d  shl ecx, 4
    X86_AT(c, 0x70du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 000710  shr cl, 4
    X86_AT(c, 0x710u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 000713  add cx, 0x101
    X86_AT(c, 0x713u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x101u, 0, 2)); }
    // 000718  shl ecx, 8
    X86_AT(c, 0x718u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[1] = r; }
    // 00071b  xchg cl, ch
    X86_AT(c, 0x71bu);
    { uint32_t t = g8(c, 1); s8(c, 1, g8(c, 5)); s8(c, 5, t); }
    // 00071d  imul dx, cx
    X86_AT(c, 0x71du);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000721  rol ecx, 0x10
    X86_AT(c, 0x721u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 000724  imul bx, cx
    X86_AT(c, 0x724u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000728  pop ecx
    X86_AT(c, 0x728u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 000729  rol ebx, 0x10
    X86_AT(c, 0x729u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00072c  mov ax, word ptr gs:[edi + 2]
    X86_AT(c, 0x72cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x2u))));
    // 000731  sub ax, word ptr gs:[esi]
    X86_AT(c, 0x731u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000735  add ax, dx
    X86_AT(c, 0x735u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000738  mov bx, word ptr gs:[edi]
    X86_AT(c, 0x738u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 00073c  sub bx, word ptr gs:[esi]
    X86_AT(c, 0x73cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000740  add bx, word ptr cs:[ecx*4 + 0x83c]
    X86_AT(c, 0x740u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Cu))), 0, 2)); }
    // 000749  cmp ax, bx
    X86_AT(c, 0x749u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00074c  ja 0x7d7
    X86_AT(c, 0x74cu);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 72);
    // 000752  mov ax, word ptr gs:[esi]
    X86_AT(c, 0x752u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000756  sub word ptr gs:[edi], ax
    X86_AT(c, 0x756u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00075a  add word ptr gs:[edi], dx
    X86_AT(c, 0x75au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00075e  sub word ptr gs:[edi + 2], ax
    X86_AT(c, 0x75eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000763  add word ptr gs:[edi + 2], dx
    X86_AT(c, 0x763u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000768  mov word ptr gs:[esi], dx
    X86_AT(c, 0x768u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[2] & 0xFFFFu));
    // 00076c  rol ebx, 0x10
    X86_AT(c, 0x76cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00076f  mov ax, word ptr gs:[edi + 0xa]
    X86_AT(c, 0x76fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0xAu))));
    // 000774  sub ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x774u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000779  add ax, bx
    X86_AT(c, 0x779u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00077c  mov dx, word ptr gs:[edi + 8]
    X86_AT(c, 0x77cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x8u))));
    // 000781  sub dx, word ptr gs:[esi + 2]
    X86_AT(c, 0x781u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000786  add dx, word ptr cs:[ecx*4 + 0x83e]
    X86_AT(c, 0x786u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Eu))), 0, 2)); }
    // 00078f  cmp ax, dx
    X86_AT(c, 0x78fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 000792  ja 0x7d7
    X86_AT(c, 0x792u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 49);
    // 000794  mov ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x794u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))));
    // 000799  sub word ptr gs:[edi + 8], ax
    X86_AT(c, 0x799u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00079e  add word ptr gs:[edi + 8], bx
    X86_AT(c, 0x79eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007a3  sub word ptr gs:[edi + 0xa], ax
    X86_AT(c, 0x7a3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0007a8  add word ptr gs:[edi + 0xa], bx
    X86_AT(c, 0x7a8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007ad  mov word ptr gs:[esi + 2], bx
    X86_AT(c, 0x7adu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 0007b2  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0x7b2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 0007bd  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x7bdu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0007c2  call 0x968
    X86_AT(c, 0x7c2u);
    push32(c, 0x7c7u); f_00000968(c); X86_RET(c, 0x7c7u);
    X86_TICK(c, 13);
    // 0007c7  mov cl, 0xe
    X86_AT(c, 0x7c7u);
    s8(c, 1, 0xEu);
    // 0007c9  mov bl, 9
    X86_AT(c, 0x7c9u);
    s8(c, 3, 0x9u);
    // 0007cb  lea edi, [ebp + 0xd2]
    X86_AT(c, 0x7cbu);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 0007d1  call 0x658
    X86_AT(c, 0x7d1u);
    push32(c, 0x7d6u); f_00000658(c); X86_RET(c, 0x7d6u);
    X86_TICK(c, 10);
    // 0007d6  ret 
    X86_AT(c, 0x7d6u);
    c.eip = pop32(c); return;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6a3u, "ran off the end of a function");
}
void f_000006a9(X86Cpu& c) {
    X86_TICK(c, 20);
    // 0006a9  mov ecx, eax
    X86_AT(c, 0x6a9u);
    c.r[1] = c.r[0];
    // 0006ab  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x6abu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0006b1  cmp byte ptr cs:[eax + 0x7dd], 0
    X86_AT(c, 0x6b1u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x7DDu))), 0x0u, 0, 1);
    // 0006b9  je 0x7d7
    X86_AT(c, 0x6b9u);
    if (x86_cc(c, 4)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006bf  cmp dx, word ptr cs:[eax*4 + 0x7f0]
    X86_AT(c, 0x6bfu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F0u))), 0, 2);
    // 0006c8  ja 0x7d7
    X86_AT(c, 0x6c8u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006ce  cmp bx, word ptr cs:[eax*4 + 0x7f2]
    X86_AT(c, 0x6ceu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F2u))), 0, 2);
    // 0006d7  ja 0x7d7
    X86_AT(c, 0x6d7u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 23);
    // 0006dd  add bx, bx
    X86_AT(c, 0x6ddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0006e0  push eax
    X86_AT(c, 0x6e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0006e1  lea esi, [ebp + ecx*4 + 0xa0]
    X86_AT(c, 0x6e1u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xA0u);
    // 0006e8  lea edi, [ebp + ecx*4 + 0xd2]
    X86_AT(c, 0x6e8u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xD2u);
    // 0006ef  mov eax, ecx
    X86_AT(c, 0x6efu);
    c.r[0] = c.r[1];
    // 0006f1  movzx ecx, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0x6f1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)));
    // 0006f9  test eax, eax
    X86_AT(c, 0x6f9u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0006fb  jne 0x704
    X86_AT(c, 0x6fbu);
    if (x86_cc(c, 5)) { goto L_704; }
    X86_TICK(c, 9);
    // 0006fd  and cx, 0xff
    X86_AT(c, 0x6fdu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFFu, 2)); }
    // 000702  jmp 0x70d
    X86_AT(c, 0x702u);
    goto L_70d;
L_704:
    X86_TICK(c, 5);
    // 000704  and cx, 0xff00
    X86_AT(c, 0x704u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFF00u, 2)); }
    // 000709  shr cx, 8
    X86_AT(c, 0x709u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 1, r); }
L_70d:
    X86_TICK(c, 103);
    // 00070d  shl ecx, 4
    X86_AT(c, 0x70du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 000710  shr cl, 4
    X86_AT(c, 0x710u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 000713  add cx, 0x101
    X86_AT(c, 0x713u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x101u, 0, 2)); }
    // 000718  shl ecx, 8
    X86_AT(c, 0x718u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[1] = r; }
    // 00071b  xchg cl, ch
    X86_AT(c, 0x71bu);
    { uint32_t t = g8(c, 1); s8(c, 1, g8(c, 5)); s8(c, 5, t); }
    // 00071d  imul dx, cx
    X86_AT(c, 0x71du);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000721  rol ecx, 0x10
    X86_AT(c, 0x721u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 000724  imul bx, cx
    X86_AT(c, 0x724u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000728  pop ecx
    X86_AT(c, 0x728u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 000729  rol ebx, 0x10
    X86_AT(c, 0x729u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00072c  mov ax, word ptr gs:[edi + 2]
    X86_AT(c, 0x72cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x2u))));
    // 000731  sub ax, word ptr gs:[esi]
    X86_AT(c, 0x731u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000735  add ax, dx
    X86_AT(c, 0x735u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000738  mov bx, word ptr gs:[edi]
    X86_AT(c, 0x738u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 00073c  sub bx, word ptr gs:[esi]
    X86_AT(c, 0x73cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000740  add bx, word ptr cs:[ecx*4 + 0x83c]
    X86_AT(c, 0x740u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Cu))), 0, 2)); }
    // 000749  cmp ax, bx
    X86_AT(c, 0x749u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00074c  ja 0x7d7
    X86_AT(c, 0x74cu);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 72);
    // 000752  mov ax, word ptr gs:[esi]
    X86_AT(c, 0x752u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000756  sub word ptr gs:[edi], ax
    X86_AT(c, 0x756u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00075a  add word ptr gs:[edi], dx
    X86_AT(c, 0x75au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00075e  sub word ptr gs:[edi + 2], ax
    X86_AT(c, 0x75eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000763  add word ptr gs:[edi + 2], dx
    X86_AT(c, 0x763u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000768  mov word ptr gs:[esi], dx
    X86_AT(c, 0x768u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[2] & 0xFFFFu));
    // 00076c  rol ebx, 0x10
    X86_AT(c, 0x76cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00076f  mov ax, word ptr gs:[edi + 0xa]
    X86_AT(c, 0x76fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0xAu))));
    // 000774  sub ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x774u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000779  add ax, bx
    X86_AT(c, 0x779u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00077c  mov dx, word ptr gs:[edi + 8]
    X86_AT(c, 0x77cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x8u))));
    // 000781  sub dx, word ptr gs:[esi + 2]
    X86_AT(c, 0x781u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000786  add dx, word ptr cs:[ecx*4 + 0x83e]
    X86_AT(c, 0x786u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Eu))), 0, 2)); }
    // 00078f  cmp ax, dx
    X86_AT(c, 0x78fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 000792  ja 0x7d7
    X86_AT(c, 0x792u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 49);
    // 000794  mov ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x794u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))));
    // 000799  sub word ptr gs:[edi + 8], ax
    X86_AT(c, 0x799u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00079e  add word ptr gs:[edi + 8], bx
    X86_AT(c, 0x79eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007a3  sub word ptr gs:[edi + 0xa], ax
    X86_AT(c, 0x7a3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0007a8  add word ptr gs:[edi + 0xa], bx
    X86_AT(c, 0x7a8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007ad  mov word ptr gs:[esi + 2], bx
    X86_AT(c, 0x7adu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 0007b2  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0x7b2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 0007bd  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x7bdu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0007c2  call 0x968
    X86_AT(c, 0x7c2u);
    push32(c, 0x7c7u); f_00000968(c); X86_RET(c, 0x7c7u);
    X86_TICK(c, 13);
    // 0007c7  mov cl, 0xe
    X86_AT(c, 0x7c7u);
    s8(c, 1, 0xEu);
    // 0007c9  mov bl, 9
    X86_AT(c, 0x7c9u);
    s8(c, 3, 0x9u);
    // 0007cb  lea edi, [ebp + 0xd2]
    X86_AT(c, 0x7cbu);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 0007d1  call 0x658
    X86_AT(c, 0x7d1u);
    push32(c, 0x7d6u); f_00000658(c); X86_RET(c, 0x7d6u);
    X86_TICK(c, 10);
    // 0007d6  ret 
    X86_AT(c, 0x7d6u);
    c.eip = pop32(c); return;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6a9u, "ran off the end of a function");
}
void f_000006ab(X86Cpu& c) {
    X86_TICK(c, 18);
    // 0006ab  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x6abu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0006b1  cmp byte ptr cs:[eax + 0x7dd], 0
    X86_AT(c, 0x6b1u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x7DDu))), 0x0u, 0, 1);
    // 0006b9  je 0x7d7
    X86_AT(c, 0x6b9u);
    if (x86_cc(c, 4)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006bf  cmp dx, word ptr cs:[eax*4 + 0x7f0]
    X86_AT(c, 0x6bfu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F0u))), 0, 2);
    // 0006c8  ja 0x7d7
    X86_AT(c, 0x6c8u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006ce  cmp bx, word ptr cs:[eax*4 + 0x7f2]
    X86_AT(c, 0x6ceu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F2u))), 0, 2);
    // 0006d7  ja 0x7d7
    X86_AT(c, 0x6d7u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 23);
    // 0006dd  add bx, bx
    X86_AT(c, 0x6ddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0006e0  push eax
    X86_AT(c, 0x6e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0006e1  lea esi, [ebp + ecx*4 + 0xa0]
    X86_AT(c, 0x6e1u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xA0u);
    // 0006e8  lea edi, [ebp + ecx*4 + 0xd2]
    X86_AT(c, 0x6e8u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xD2u);
    // 0006ef  mov eax, ecx
    X86_AT(c, 0x6efu);
    c.r[0] = c.r[1];
    // 0006f1  movzx ecx, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0x6f1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)));
    // 0006f9  test eax, eax
    X86_AT(c, 0x6f9u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0006fb  jne 0x704
    X86_AT(c, 0x6fbu);
    if (x86_cc(c, 5)) { goto L_704; }
    X86_TICK(c, 9);
    // 0006fd  and cx, 0xff
    X86_AT(c, 0x6fdu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFFu, 2)); }
    // 000702  jmp 0x70d
    X86_AT(c, 0x702u);
    goto L_70d;
L_704:
    X86_TICK(c, 5);
    // 000704  and cx, 0xff00
    X86_AT(c, 0x704u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFF00u, 2)); }
    // 000709  shr cx, 8
    X86_AT(c, 0x709u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 1, r); }
L_70d:
    X86_TICK(c, 103);
    // 00070d  shl ecx, 4
    X86_AT(c, 0x70du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 000710  shr cl, 4
    X86_AT(c, 0x710u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 000713  add cx, 0x101
    X86_AT(c, 0x713u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x101u, 0, 2)); }
    // 000718  shl ecx, 8
    X86_AT(c, 0x718u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[1] = r; }
    // 00071b  xchg cl, ch
    X86_AT(c, 0x71bu);
    { uint32_t t = g8(c, 1); s8(c, 1, g8(c, 5)); s8(c, 5, t); }
    // 00071d  imul dx, cx
    X86_AT(c, 0x71du);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000721  rol ecx, 0x10
    X86_AT(c, 0x721u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 000724  imul bx, cx
    X86_AT(c, 0x724u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000728  pop ecx
    X86_AT(c, 0x728u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 000729  rol ebx, 0x10
    X86_AT(c, 0x729u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00072c  mov ax, word ptr gs:[edi + 2]
    X86_AT(c, 0x72cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x2u))));
    // 000731  sub ax, word ptr gs:[esi]
    X86_AT(c, 0x731u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000735  add ax, dx
    X86_AT(c, 0x735u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000738  mov bx, word ptr gs:[edi]
    X86_AT(c, 0x738u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 00073c  sub bx, word ptr gs:[esi]
    X86_AT(c, 0x73cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000740  add bx, word ptr cs:[ecx*4 + 0x83c]
    X86_AT(c, 0x740u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Cu))), 0, 2)); }
    // 000749  cmp ax, bx
    X86_AT(c, 0x749u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00074c  ja 0x7d7
    X86_AT(c, 0x74cu);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 72);
    // 000752  mov ax, word ptr gs:[esi]
    X86_AT(c, 0x752u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000756  sub word ptr gs:[edi], ax
    X86_AT(c, 0x756u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00075a  add word ptr gs:[edi], dx
    X86_AT(c, 0x75au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00075e  sub word ptr gs:[edi + 2], ax
    X86_AT(c, 0x75eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000763  add word ptr gs:[edi + 2], dx
    X86_AT(c, 0x763u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000768  mov word ptr gs:[esi], dx
    X86_AT(c, 0x768u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[2] & 0xFFFFu));
    // 00076c  rol ebx, 0x10
    X86_AT(c, 0x76cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00076f  mov ax, word ptr gs:[edi + 0xa]
    X86_AT(c, 0x76fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0xAu))));
    // 000774  sub ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x774u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000779  add ax, bx
    X86_AT(c, 0x779u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00077c  mov dx, word ptr gs:[edi + 8]
    X86_AT(c, 0x77cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x8u))));
    // 000781  sub dx, word ptr gs:[esi + 2]
    X86_AT(c, 0x781u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000786  add dx, word ptr cs:[ecx*4 + 0x83e]
    X86_AT(c, 0x786u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Eu))), 0, 2)); }
    // 00078f  cmp ax, dx
    X86_AT(c, 0x78fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 000792  ja 0x7d7
    X86_AT(c, 0x792u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 49);
    // 000794  mov ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x794u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))));
    // 000799  sub word ptr gs:[edi + 8], ax
    X86_AT(c, 0x799u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00079e  add word ptr gs:[edi + 8], bx
    X86_AT(c, 0x79eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007a3  sub word ptr gs:[edi + 0xa], ax
    X86_AT(c, 0x7a3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0007a8  add word ptr gs:[edi + 0xa], bx
    X86_AT(c, 0x7a8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007ad  mov word ptr gs:[esi + 2], bx
    X86_AT(c, 0x7adu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 0007b2  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0x7b2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 0007bd  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x7bdu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0007c2  call 0x968
    X86_AT(c, 0x7c2u);
    push32(c, 0x7c7u); f_00000968(c); X86_RET(c, 0x7c7u);
    X86_TICK(c, 13);
    // 0007c7  mov cl, 0xe
    X86_AT(c, 0x7c7u);
    s8(c, 1, 0xEu);
    // 0007c9  mov bl, 9
    X86_AT(c, 0x7c9u);
    s8(c, 3, 0x9u);
    // 0007cb  lea edi, [ebp + 0xd2]
    X86_AT(c, 0x7cbu);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 0007d1  call 0x658
    X86_AT(c, 0x7d1u);
    push32(c, 0x7d6u); f_00000658(c); X86_RET(c, 0x7d6u);
    X86_TICK(c, 10);
    // 0007d6  ret 
    X86_AT(c, 0x7d6u);
    c.eip = pop32(c); return;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6abu, "ran off the end of a function");
}
void f_000006b1(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0006b1  cmp byte ptr cs:[eax + 0x7dd], 0
    X86_AT(c, 0x6b1u);
    (void)x86_sub(c, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x7DDu))), 0x0u, 0, 1);
    // 0006b9  je 0x7d7
    X86_AT(c, 0x6b9u);
    if (x86_cc(c, 4)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006bf  cmp dx, word ptr cs:[eax*4 + 0x7f0]
    X86_AT(c, 0x6bfu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F0u))), 0, 2);
    // 0006c8  ja 0x7d7
    X86_AT(c, 0x6c8u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006ce  cmp bx, word ptr cs:[eax*4 + 0x7f2]
    X86_AT(c, 0x6ceu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F2u))), 0, 2);
    // 0006d7  ja 0x7d7
    X86_AT(c, 0x6d7u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 23);
    // 0006dd  add bx, bx
    X86_AT(c, 0x6ddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0006e0  push eax
    X86_AT(c, 0x6e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0006e1  lea esi, [ebp + ecx*4 + 0xa0]
    X86_AT(c, 0x6e1u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xA0u);
    // 0006e8  lea edi, [ebp + ecx*4 + 0xd2]
    X86_AT(c, 0x6e8u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xD2u);
    // 0006ef  mov eax, ecx
    X86_AT(c, 0x6efu);
    c.r[0] = c.r[1];
    // 0006f1  movzx ecx, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0x6f1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)));
    // 0006f9  test eax, eax
    X86_AT(c, 0x6f9u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0006fb  jne 0x704
    X86_AT(c, 0x6fbu);
    if (x86_cc(c, 5)) { goto L_704; }
    X86_TICK(c, 9);
    // 0006fd  and cx, 0xff
    X86_AT(c, 0x6fdu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFFu, 2)); }
    // 000702  jmp 0x70d
    X86_AT(c, 0x702u);
    goto L_70d;
L_704:
    X86_TICK(c, 5);
    // 000704  and cx, 0xff00
    X86_AT(c, 0x704u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFF00u, 2)); }
    // 000709  shr cx, 8
    X86_AT(c, 0x709u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 1, r); }
L_70d:
    X86_TICK(c, 103);
    // 00070d  shl ecx, 4
    X86_AT(c, 0x70du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 000710  shr cl, 4
    X86_AT(c, 0x710u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 000713  add cx, 0x101
    X86_AT(c, 0x713u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x101u, 0, 2)); }
    // 000718  shl ecx, 8
    X86_AT(c, 0x718u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[1] = r; }
    // 00071b  xchg cl, ch
    X86_AT(c, 0x71bu);
    { uint32_t t = g8(c, 1); s8(c, 1, g8(c, 5)); s8(c, 5, t); }
    // 00071d  imul dx, cx
    X86_AT(c, 0x71du);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000721  rol ecx, 0x10
    X86_AT(c, 0x721u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 000724  imul bx, cx
    X86_AT(c, 0x724u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000728  pop ecx
    X86_AT(c, 0x728u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 000729  rol ebx, 0x10
    X86_AT(c, 0x729u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00072c  mov ax, word ptr gs:[edi + 2]
    X86_AT(c, 0x72cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x2u))));
    // 000731  sub ax, word ptr gs:[esi]
    X86_AT(c, 0x731u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000735  add ax, dx
    X86_AT(c, 0x735u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000738  mov bx, word ptr gs:[edi]
    X86_AT(c, 0x738u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 00073c  sub bx, word ptr gs:[esi]
    X86_AT(c, 0x73cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000740  add bx, word ptr cs:[ecx*4 + 0x83c]
    X86_AT(c, 0x740u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Cu))), 0, 2)); }
    // 000749  cmp ax, bx
    X86_AT(c, 0x749u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00074c  ja 0x7d7
    X86_AT(c, 0x74cu);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 72);
    // 000752  mov ax, word ptr gs:[esi]
    X86_AT(c, 0x752u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000756  sub word ptr gs:[edi], ax
    X86_AT(c, 0x756u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00075a  add word ptr gs:[edi], dx
    X86_AT(c, 0x75au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00075e  sub word ptr gs:[edi + 2], ax
    X86_AT(c, 0x75eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000763  add word ptr gs:[edi + 2], dx
    X86_AT(c, 0x763u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000768  mov word ptr gs:[esi], dx
    X86_AT(c, 0x768u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[2] & 0xFFFFu));
    // 00076c  rol ebx, 0x10
    X86_AT(c, 0x76cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00076f  mov ax, word ptr gs:[edi + 0xa]
    X86_AT(c, 0x76fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0xAu))));
    // 000774  sub ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x774u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000779  add ax, bx
    X86_AT(c, 0x779u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00077c  mov dx, word ptr gs:[edi + 8]
    X86_AT(c, 0x77cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x8u))));
    // 000781  sub dx, word ptr gs:[esi + 2]
    X86_AT(c, 0x781u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000786  add dx, word ptr cs:[ecx*4 + 0x83e]
    X86_AT(c, 0x786u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Eu))), 0, 2)); }
    // 00078f  cmp ax, dx
    X86_AT(c, 0x78fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 000792  ja 0x7d7
    X86_AT(c, 0x792u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 49);
    // 000794  mov ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x794u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))));
    // 000799  sub word ptr gs:[edi + 8], ax
    X86_AT(c, 0x799u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00079e  add word ptr gs:[edi + 8], bx
    X86_AT(c, 0x79eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007a3  sub word ptr gs:[edi + 0xa], ax
    X86_AT(c, 0x7a3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0007a8  add word ptr gs:[edi + 0xa], bx
    X86_AT(c, 0x7a8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007ad  mov word ptr gs:[esi + 2], bx
    X86_AT(c, 0x7adu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 0007b2  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0x7b2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 0007bd  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x7bdu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0007c2  call 0x968
    X86_AT(c, 0x7c2u);
    push32(c, 0x7c7u); f_00000968(c); X86_RET(c, 0x7c7u);
    X86_TICK(c, 13);
    // 0007c7  mov cl, 0xe
    X86_AT(c, 0x7c7u);
    s8(c, 1, 0xEu);
    // 0007c9  mov bl, 9
    X86_AT(c, 0x7c9u);
    s8(c, 3, 0x9u);
    // 0007cb  lea edi, [ebp + 0xd2]
    X86_AT(c, 0x7cbu);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 0007d1  call 0x658
    X86_AT(c, 0x7d1u);
    push32(c, 0x7d6u); f_00000658(c); X86_RET(c, 0x7d6u);
    X86_TICK(c, 10);
    // 0007d6  ret 
    X86_AT(c, 0x7d6u);
    c.eip = pop32(c); return;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6b1u, "ran off the end of a function");
}
void f_000006b9(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0006b9  je 0x7d7
    X86_AT(c, 0x6b9u);
    if (x86_cc(c, 4)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006bf  cmp dx, word ptr cs:[eax*4 + 0x7f0]
    X86_AT(c, 0x6bfu);
    (void)x86_sub(c, (c.r[2] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F0u))), 0, 2);
    // 0006c8  ja 0x7d7
    X86_AT(c, 0x6c8u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 11);
    // 0006ce  cmp bx, word ptr cs:[eax*4 + 0x7f2]
    X86_AT(c, 0x6ceu);
    (void)x86_sub(c, (c.r[3] & 0xFFFFu), rd16((c.sbase[1] + (uint32_t)(c.r[0] * 4 + 0x7F2u))), 0, 2);
    // 0006d7  ja 0x7d7
    X86_AT(c, 0x6d7u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 23);
    // 0006dd  add bx, bx
    X86_AT(c, 0x6ddu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0006e0  push eax
    X86_AT(c, 0x6e0u);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 0006e1  lea esi, [ebp + ecx*4 + 0xa0]
    X86_AT(c, 0x6e1u);
    c.r[6] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xA0u);
    // 0006e8  lea edi, [ebp + ecx*4 + 0xd2]
    X86_AT(c, 0x6e8u);
    c.r[7] = (uint32_t)(c.r[5] + c.r[1] * 4 + 0xD2u);
    // 0006ef  mov eax, ecx
    X86_AT(c, 0x6efu);
    c.r[0] = c.r[1];
    // 0006f1  movzx ecx, word ptr gs:[ebp + 0xf6]
    X86_AT(c, 0x6f1u);
    c.r[1] = rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0xF6u)));
    // 0006f9  test eax, eax
    X86_AT(c, 0x6f9u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0006fb  jne 0x704
    X86_AT(c, 0x6fbu);
    if (x86_cc(c, 5)) { goto L_704; }
    X86_TICK(c, 9);
    // 0006fd  and cx, 0xff
    X86_AT(c, 0x6fdu);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFFu, 2)); }
    // 000702  jmp 0x70d
    X86_AT(c, 0x702u);
    goto L_70d;
L_704:
    X86_TICK(c, 5);
    // 000704  and cx, 0xff00
    X86_AT(c, 0x704u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_logic(c, v & 0xFF00u, 2)); }
    // 000709  shr cx, 8
    X86_AT(c, 0x709u);
    { uint32_t v = (c.r[1] & 0xFFFFu); bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 2, w); if (w) s16(c, 1, r); }
L_70d:
    X86_TICK(c, 103);
    // 00070d  shl ecx, 4
    X86_AT(c, 0x70du);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x4u, 4, w); if (w) c.r[1] = r; }
    // 000710  shr cl, 4
    X86_AT(c, 0x710u);
    { uint32_t v = g8(c, 1); bool w; uint32_t r = x86_shift(c, 5, v, 0x4u, 1, w); if (w) s8(c, 1, r); }
    // 000713  add cx, 0x101
    X86_AT(c, 0x713u);
    { uint32_t v = (c.r[1] & 0xFFFFu); s16(c, 1, x86_add(c, v, 0x101u, 0, 2)); }
    // 000718  shl ecx, 8
    X86_AT(c, 0x718u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[1] = r; }
    // 00071b  xchg cl, ch
    X86_AT(c, 0x71bu);
    { uint32_t t = g8(c, 1); s8(c, 1, g8(c, 5)); s8(c, 5, t); }
    // 00071d  imul dx, cx
    X86_AT(c, 0x71du);
    s16(c, 2, x86_imul2(c, (c.r[2] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000721  rol ecx, 0x10
    X86_AT(c, 0x721u);
    { uint32_t v = c.r[1]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[1] = r; }
    // 000724  imul bx, cx
    X86_AT(c, 0x724u);
    s16(c, 3, x86_imul2(c, (c.r[3] & 0xFFFFu), (c.r[1] & 0xFFFFu), 2));
    // 000728  pop ecx
    X86_AT(c, 0x728u);
    { uint32_t v = pop32(c); c.r[1] = v; }
    // 000729  rol ebx, 0x10
    X86_AT(c, 0x729u);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00072c  mov ax, word ptr gs:[edi + 2]
    X86_AT(c, 0x72cu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x2u))));
    // 000731  sub ax, word ptr gs:[esi]
    X86_AT(c, 0x731u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000735  add ax, dx
    X86_AT(c, 0x735u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000738  mov bx, word ptr gs:[edi]
    X86_AT(c, 0x738u);
    s16(c, 3, rd16((c.sbase[5] + (uint32_t)(c.r[7]))));
    // 00073c  sub bx, word ptr gs:[esi]
    X86_AT(c, 0x73cu);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6]))), 0, 2)); }
    // 000740  add bx, word ptr cs:[ecx*4 + 0x83c]
    X86_AT(c, 0x740u);
    { uint32_t v = (c.r[3] & 0xFFFFu); s16(c, 3, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Cu))), 0, 2)); }
    // 000749  cmp ax, bx
    X86_AT(c, 0x749u);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[3] & 0xFFFFu), 0, 2);
    // 00074c  ja 0x7d7
    X86_AT(c, 0x74cu);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 72);
    // 000752  mov ax, word ptr gs:[esi]
    X86_AT(c, 0x752u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6]))));
    // 000756  sub word ptr gs:[edi], ax
    X86_AT(c, 0x756u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00075a  add word ptr gs:[edi], dx
    X86_AT(c, 0x75au);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7])); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 00075e  sub word ptr gs:[edi + 2], ax
    X86_AT(c, 0x75eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 000763  add word ptr gs:[edi + 2], dx
    X86_AT(c, 0x763u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x2u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[2] & 0xFFFFu), 0, 2)); }
    // 000768  mov word ptr gs:[esi], dx
    X86_AT(c, 0x768u);
    wr16((c.sbase[5] + (uint32_t)(c.r[6])), (c.r[2] & 0xFFFFu));
    // 00076c  rol ebx, 0x10
    X86_AT(c, 0x76cu);
    { uint32_t v = c.r[3]; bool w; uint32_t r = x86_shift(c, 0, v, 0x10u, 4, w); if (w) c.r[3] = r; }
    // 00076f  mov ax, word ptr gs:[edi + 0xa]
    X86_AT(c, 0x76fu);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0xAu))));
    // 000774  sub ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x774u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000779  add ax, bx
    X86_AT(c, 0x779u);
    { uint32_t v = (c.r[0] & 0xFFFFu); s16(c, 0, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 00077c  mov dx, word ptr gs:[edi + 8]
    X86_AT(c, 0x77cu);
    s16(c, 2, rd16((c.sbase[5] + (uint32_t)(c.r[7] + 0x8u))));
    // 000781  sub dx, word ptr gs:[esi + 2]
    X86_AT(c, 0x781u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))), 0, 2)); }
    // 000786  add dx, word ptr cs:[ecx*4 + 0x83e]
    X86_AT(c, 0x786u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, rd16((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x83Eu))), 0, 2)); }
    // 00078f  cmp ax, dx
    X86_AT(c, 0x78fu);
    (void)x86_sub(c, (c.r[0] & 0xFFFFu), (c.r[2] & 0xFFFFu), 0, 2);
    // 000792  ja 0x7d7
    X86_AT(c, 0x792u);
    if (x86_cc(c, 7)) { goto L_7d7; }
    X86_TICK(c, 49);
    // 000794  mov ax, word ptr gs:[esi + 2]
    X86_AT(c, 0x794u);
    s16(c, 0, rd16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u))));
    // 000799  sub word ptr gs:[edi + 8], ax
    X86_AT(c, 0x799u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 00079e  add word ptr gs:[edi + 8], bx
    X86_AT(c, 0x79eu);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0x8u)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007a3  sub word ptr gs:[edi + 0xa], ax
    X86_AT(c, 0x7a3u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_sub(c, v, (c.r[0] & 0xFFFFu), 0, 2)); }
    // 0007a8  add word ptr gs:[edi + 0xa], bx
    X86_AT(c, 0x7a8u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[7] + 0xAu)); uint32_t v = rd16(ea); wr16(ea, x86_add(c, v, (c.r[3] & 0xFFFFu), 0, 2)); }
    // 0007ad  mov word ptr gs:[esi + 2], bx
    X86_AT(c, 0x7adu);
    wr16((c.sbase[5] + (uint32_t)(c.r[6] + 0x2u)), (c.r[3] & 0xFFFFu));
    // 0007b2  mov dword ptr gs:[ebp + 0x3a4], 0
    X86_AT(c, 0x7b2u);
    wr32((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), 0x0u);
    // 0007bd  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x7bdu);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0007c2  call 0x968
    X86_AT(c, 0x7c2u);
    push32(c, 0x7c7u); f_00000968(c); X86_RET(c, 0x7c7u);
    X86_TICK(c, 13);
    // 0007c7  mov cl, 0xe
    X86_AT(c, 0x7c7u);
    s8(c, 1, 0xEu);
    // 0007c9  mov bl, 9
    X86_AT(c, 0x7c9u);
    s8(c, 3, 0x9u);
    // 0007cb  lea edi, [ebp + 0xd2]
    X86_AT(c, 0x7cbu);
    c.r[7] = (uint32_t)(c.r[5] + 0xD2u);
    // 0007d1  call 0x658
    X86_AT(c, 0x7d1u);
    push32(c, 0x7d6u); f_00000658(c); X86_RET(c, 0x7d6u);
    X86_TICK(c, 10);
    // 0007d6  ret 
    X86_AT(c, 0x7d6u);
    c.eip = pop32(c); return;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x6b9u, "ran off the end of a function");
}
void f_000007d7(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x7d7u, "ran off the end of a function");
}
void f_000007dc(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x7dcu, "ran off the end of a function");
}
void f_00000888(X86Cpu& c) {
    goto L_888;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_888:
    X86_TICK(c, 16);
    // 000888  mov word ptr gs:[ebp + 0x3a4], dx
    X86_AT(c, 0x888u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)), (c.r[2] & 0xFFFFu));
    // 000890  mov word ptr gs:[ebp + 0x3a6], bx
    X86_AT(c, 0x890u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)), (c.r[3] & 0xFFFFu));
    // 000898  cmp byte ptr gs:[ebp + 0x30], 2
    X86_AT(c, 0x898u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), 0x2u, 0, 1);
    // 00089d  ja 0x7d7
    X86_AT(c, 0x89du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 13);
    // 0008a3  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x8a3u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0008a8  test eax, eax
    X86_AT(c, 0x8a8u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0008aa  je 0x8b7
    X86_AT(c, 0x8aau);
    if (x86_cc(c, 4)) { goto L_8b7; }
    X86_TICK(c, 12);
    // 0008ac  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x8acu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 0008b1  jae 0x7d7
    X86_AT(c, 0x8b1u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8b7:
    X86_TICK(c, 19);
    // 0008b7  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x8b7u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0008bd  mov ebx, eax
    X86_AT(c, 0x8bdu);
    c.r[3] = c.r[0];
    // 0008bf  mov al, byte ptr cs:[eax + 0x8fa]
    X86_AT(c, 0x8bfu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x8FAu))));
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x888u, "ran off the end of a function");
}
void f_00000890(X86Cpu& c) {
    goto L_890;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_890:
    X86_TICK(c, 14);
    // 000890  mov word ptr gs:[ebp + 0x3a6], bx
    X86_AT(c, 0x890u);
    wr16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A6u)), (c.r[3] & 0xFFFFu));
    // 000898  cmp byte ptr gs:[ebp + 0x30], 2
    X86_AT(c, 0x898u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), 0x2u, 0, 1);
    // 00089d  ja 0x7d7
    X86_AT(c, 0x89du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 13);
    // 0008a3  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x8a3u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0008a8  test eax, eax
    X86_AT(c, 0x8a8u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0008aa  je 0x8b7
    X86_AT(c, 0x8aau);
    if (x86_cc(c, 4)) { goto L_8b7; }
    X86_TICK(c, 12);
    // 0008ac  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x8acu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 0008b1  jae 0x7d7
    X86_AT(c, 0x8b1u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8b7:
    X86_TICK(c, 19);
    // 0008b7  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x8b7u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0008bd  mov ebx, eax
    X86_AT(c, 0x8bdu);
    c.r[3] = c.r[0];
    // 0008bf  mov al, byte ptr cs:[eax + 0x8fa]
    X86_AT(c, 0x8bfu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x8FAu))));
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x890u, "ran off the end of a function");
}
void f_00000898(X86Cpu& c) {
    goto L_898;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_898:
    X86_TICK(c, 12);
    // 000898  cmp byte ptr gs:[ebp + 0x30], 2
    X86_AT(c, 0x898u);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u))), 0x2u, 0, 1);
    // 00089d  ja 0x7d7
    X86_AT(c, 0x89du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 13);
    // 0008a3  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x8a3u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0008a8  test eax, eax
    X86_AT(c, 0x8a8u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0008aa  je 0x8b7
    X86_AT(c, 0x8aau);
    if (x86_cc(c, 4)) { goto L_8b7; }
    X86_TICK(c, 12);
    // 0008ac  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x8acu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 0008b1  jae 0x7d7
    X86_AT(c, 0x8b1u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8b7:
    X86_TICK(c, 19);
    // 0008b7  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x8b7u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0008bd  mov ebx, eax
    X86_AT(c, 0x8bdu);
    c.r[3] = c.r[0];
    // 0008bf  mov al, byte ptr cs:[eax + 0x8fa]
    X86_AT(c, 0x8bfu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x8FAu))));
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x898u, "ran off the end of a function");
}
void f_0000089d(X86Cpu& c) {
    goto L_89d;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_89d:
    X86_TICK(c, 5);
    // 00089d  ja 0x7d7
    X86_AT(c, 0x89du);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 13);
    // 0008a3  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x8a3u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0008a8  test eax, eax
    X86_AT(c, 0x8a8u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0008aa  je 0x8b7
    X86_AT(c, 0x8aau);
    if (x86_cc(c, 4)) { goto L_8b7; }
    X86_TICK(c, 12);
    // 0008ac  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x8acu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 0008b1  jae 0x7d7
    X86_AT(c, 0x8b1u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8b7:
    X86_TICK(c, 19);
    // 0008b7  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x8b7u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0008bd  mov ebx, eax
    X86_AT(c, 0x8bdu);
    c.r[3] = c.r[0];
    // 0008bf  mov al, byte ptr cs:[eax + 0x8fa]
    X86_AT(c, 0x8bfu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x8FAu))));
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x89du, "ran off the end of a function");
}
void f_000008a3(X86Cpu& c) {
    goto L_8a3;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_8a3:
    X86_TICK(c, 13);
    // 0008a3  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x8a3u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 0008a8  test eax, eax
    X86_AT(c, 0x8a8u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0008aa  je 0x8b7
    X86_AT(c, 0x8aau);
    if (x86_cc(c, 4)) { goto L_8b7; }
    X86_TICK(c, 12);
    // 0008ac  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x8acu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 0008b1  jae 0x7d7
    X86_AT(c, 0x8b1u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8b7:
    X86_TICK(c, 19);
    // 0008b7  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x8b7u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0008bd  mov ebx, eax
    X86_AT(c, 0x8bdu);
    c.r[3] = c.r[0];
    // 0008bf  mov al, byte ptr cs:[eax + 0x8fa]
    X86_AT(c, 0x8bfu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x8FAu))));
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a3u, "ran off the end of a function");
}
void f_000008a8(X86Cpu& c) {
    goto L_8a8;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_8a8:
    X86_TICK(c, 7);
    // 0008a8  test eax, eax
    X86_AT(c, 0x8a8u);
    (void)x86_logic(c, c.r[0] & c.r[0], 4);
    // 0008aa  je 0x8b7
    X86_AT(c, 0x8aau);
    if (x86_cc(c, 4)) { goto L_8b7; }
    X86_TICK(c, 12);
    // 0008ac  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x8acu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 0008b1  jae 0x7d7
    X86_AT(c, 0x8b1u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8b7:
    X86_TICK(c, 19);
    // 0008b7  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x8b7u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0008bd  mov ebx, eax
    X86_AT(c, 0x8bdu);
    c.r[3] = c.r[0];
    // 0008bf  mov al, byte ptr cs:[eax + 0x8fa]
    X86_AT(c, 0x8bfu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x8FAu))));
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8a8u, "ran off the end of a function");
}
void f_000008aa(X86Cpu& c) {
    goto L_8aa;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_8aa:
    X86_TICK(c, 5);
    // 0008aa  je 0x8b7
    X86_AT(c, 0x8aau);
    if (x86_cc(c, 4)) { goto L_8b7; }
    X86_TICK(c, 12);
    // 0008ac  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x8acu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 0008b1  jae 0x7d7
    X86_AT(c, 0x8b1u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8b7:
    X86_TICK(c, 19);
    // 0008b7  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x8b7u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0008bd  mov ebx, eax
    X86_AT(c, 0x8bdu);
    c.r[3] = c.r[0];
    // 0008bf  mov al, byte ptr cs:[eax + 0x8fa]
    X86_AT(c, 0x8bfu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x8FAu))));
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8aau, "ran off the end of a function");
}
void f_000008ac(X86Cpu& c) {
    goto L_8ac;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_8ac:
    X86_TICK(c, 12);
    // 0008ac  cmp byte ptr gs:[ebp + 0x3c], 0xc
    X86_AT(c, 0x8acu);
    (void)x86_sub(c, rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x3Cu))), 0xCu, 0, 1);
    // 0008b1  jae 0x7d7
    X86_AT(c, 0x8b1u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 19);
    // 0008b7  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x8b7u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0008bd  mov ebx, eax
    X86_AT(c, 0x8bdu);
    c.r[3] = c.r[0];
    // 0008bf  mov al, byte ptr cs:[eax + 0x8fa]
    X86_AT(c, 0x8bfu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x8FAu))));
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8acu, "ran off the end of a function");
}
void f_000008b1(X86Cpu& c) {
    goto L_8b1;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_8b1:
    X86_TICK(c, 5);
    // 0008b1  jae 0x7d7
    X86_AT(c, 0x8b1u);
    if (x86_cc(c, 3)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 19);
    // 0008b7  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x8b7u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0008bd  mov ebx, eax
    X86_AT(c, 0x8bdu);
    c.r[3] = c.r[0];
    // 0008bf  mov al, byte ptr cs:[eax + 0x8fa]
    X86_AT(c, 0x8bfu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x8FAu))));
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b1u, "ran off the end of a function");
}
void f_000008b7(X86Cpu& c) {
    goto L_8b7;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_8b7:
    X86_TICK(c, 19);
    // 0008b7  movzx eax, byte ptr gs:[ebp + eax*1 + 0x3c]
    X86_AT(c, 0x8b7u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + c.r[0] + 0x3Cu)));
    // 0008bd  mov ebx, eax
    X86_AT(c, 0x8bdu);
    c.r[3] = c.r[0];
    // 0008bf  mov al, byte ptr cs:[eax + 0x8fa]
    X86_AT(c, 0x8bfu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x8FAu))));
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8b7u, "ran off the end of a function");
}
void f_000008bd(X86Cpu& c) {
    goto L_8bd;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_8bd:
    X86_TICK(c, 13);
    // 0008bd  mov ebx, eax
    X86_AT(c, 0x8bdu);
    c.r[3] = c.r[0];
    // 0008bf  mov al, byte ptr cs:[eax + 0x8fa]
    X86_AT(c, 0x8bfu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x8FAu))));
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bdu, "ran off the end of a function");
}
void f_000008bf(X86Cpu& c) {
    goto L_8bf;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_8bf:
    X86_TICK(c, 11);
    // 0008bf  mov al, byte ptr cs:[eax + 0x8fa]
    X86_AT(c, 0x8bfu);
    s8(c, 0, rd8((c.sbase[1] + (uint32_t)(c.r[0] + 0x8FAu))));
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8bfu, "ran off the end of a function");
}
void f_000008c6(X86Cpu& c) {
    goto L_8c6;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_8c6:
    X86_TICK(c, 7);
    // 0008c6  test al, al
    X86_AT(c, 0x8c6u);
    (void)x86_logic(c, g8(c, 0) & g8(c, 0), 1);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c6u, "ran off the end of a function");
}
void f_000008c8(X86Cpu& c) {
    goto L_8c8;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_8c8:
    X86_TICK(c, 5);
    // 0008c8  je 0x7d7
    X86_AT(c, 0x8c8u);
    if (x86_cc(c, 4)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8c8u, "ran off the end of a function");
}
void f_000008ce(X86Cpu& c) {
    goto L_8ce;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_8ce:
    X86_TICK(c, 7);
    // 0008ce  cmp al, 2
    X86_AT(c, 0x8ceu);
    (void)x86_sub(c, g8(c, 0), 0x2u, 0, 1);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8ceu, "ran off the end of a function");
}
void f_000008d0(X86Cpu& c) {
    goto L_8d0;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_8d0:
    X86_TICK(c, 5);
    // 0008d0  je 0x8e9
    X86_AT(c, 0x8d0u);
    if (x86_cc(c, 4)) { goto L_8e9; }
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
L_8e9:
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d0u, "ran off the end of a function");
}
void f_000008d2(X86Cpu& c) {
    goto L_8d2;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_8d2:
    X86_TICK(c, 16);
    // 0008d2  mov bx, word ptr cs:[ebx*2 + 0x90e]
    X86_AT(c, 0x8d2u);
    s16(c, 3, rd16((c.sbase[1] + (uint32_t)(c.r[3] * 2 + 0x90Eu))));
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8d2u, "ran off the end of a function");
}
void f_000008db(X86Cpu& c) {
    goto L_8db;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_8db:
    X86_TICK(c, 12);
    // 0008db  cmp word ptr gs:[ebp + 0x3a4], bx
    X86_AT(c, 0x8dbu);
    (void)x86_sub(c, rd16((c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u))), (c.r[3] & 0xFFFFu), 0, 2);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8dbu, "ran off the end of a function");
}
void f_000008e3(X86Cpu& c) {
    goto L_8e3;
L_7d7:
    X86_TICK(c, 12);
    // 0007d7  mov byte ptr [esp + 0x21], 0xff
    X86_AT(c, 0x7d7u);
    wr8((c.sbase[2] + (uint32_t)(c.r[4] + 0x21u)), 0xFFu);
    // 0007dc  ret 
    X86_AT(c, 0x7dcu);
    c.eip = pop32(c); return;
L_8e3:
    X86_TICK(c, 5);
    // 0008e3  ja 0x7d7
    X86_AT(c, 0x8e3u);
    if (x86_cc(c, 7)) { X86_POLL(c, 0x7d7u); goto L_7d7; }
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8e3u, "ran off the end of a function");
}
void f_000008e9(X86Cpu& c) {
    X86_TICK(c, 14);
    // 0008e9  and dword ptr gs:[ebp + 0x3a4], 0x1ff03ff
    X86_AT(c, 0x8e9u);
    { uint32_t ea = (c.sbase[5] + (uint32_t)(c.r[5] + 0x3A4u)); uint32_t v = rd32(ea); wr32(ea, x86_logic(c, v & 0x1FF03FFu, 4)); }
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8e9u, "ran off the end of a function");
}
void f_000008f4(X86Cpu& c) {
    X86_TICK(c, 7);
    // 0008f4  call 0x934
    X86_AT(c, 0x8f4u);
    push32(c, 0x8f9u); f_00000934(c); X86_RET(c, 0x8f9u);
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f4u, "ran off the end of a function");
}
void f_000008f9(X86Cpu& c) {
    X86_TICK(c, 10);
    // 0008f9  ret 
    X86_AT(c, 0x8f9u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x8f9u, "ran off the end of a function");
}
void f_00000934(X86Cpu& c) {
    X86_TICK(c, 7);
    // 000934  cmp al, 3
    X86_AT(c, 0x934u);
    (void)x86_sub(c, g8(c, 0), 0x3u, 0, 1);
    // 000936  je 0x944
    X86_AT(c, 0x936u);
    if (x86_cc(c, 4)) { goto L_944; }
    X86_TICK(c, 13);
    // 000938  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x938u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 00093d  call 0x968
    X86_AT(c, 0x93du);
    push32(c, 0x942u); f_00000968(c); X86_RET(c, 0x942u);
    X86_TICK(c, 7);
    // 000942  jmp 0x955
    X86_AT(c, 0x942u);
    goto L_955;
L_944:
    X86_TICK(c, 9);
    // 000944  sub eax, eax
    X86_AT(c, 0x944u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000946  call 0x968
    X86_AT(c, 0x946u);
    push32(c, 0x94bu); f_00000968(c); X86_RET(c, 0x94bu);
    X86_TICK(c, 9);
    // 00094b  mov eax, 1
    X86_AT(c, 0x94bu);
    c.r[0] = 0x1u;
    // 000950  call 0x968
    X86_AT(c, 0x950u);
    push32(c, 0x955u); f_00000968(c); X86_RET(c, 0x955u);
L_955:
    X86_TICK(c, 13);
    // 000955  mov cl, 6
    X86_AT(c, 0x955u);
    s8(c, 1, 0x6u);
    // 000957  mov bl, 0x11
    X86_AT(c, 0x957u);
    s8(c, 3, 0x11u);
    // 000959  lea edi, [ebp + 0xe2]
    X86_AT(c, 0x959u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 00095f  call 0x658
    X86_AT(c, 0x95fu);
    push32(c, 0x964u); f_00000658(c); X86_RET(c, 0x964u);
    X86_TICK(c, 10);
    // 000964  ret 
    X86_AT(c, 0x964u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x934u, "ran off the end of a function");
}
void f_00000936(X86Cpu& c) {
    X86_TICK(c, 5);
    // 000936  je 0x944
    X86_AT(c, 0x936u);
    if (x86_cc(c, 4)) { goto L_944; }
    X86_TICK(c, 13);
    // 000938  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x938u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 00093d  call 0x968
    X86_AT(c, 0x93du);
    push32(c, 0x942u); f_00000968(c); X86_RET(c, 0x942u);
    X86_TICK(c, 7);
    // 000942  jmp 0x955
    X86_AT(c, 0x942u);
    goto L_955;
L_944:
    X86_TICK(c, 9);
    // 000944  sub eax, eax
    X86_AT(c, 0x944u);
    { uint32_t v = c.r[0]; c.r[0] = x86_sub(c, v, c.r[0], 0, 4); }
    // 000946  call 0x968
    X86_AT(c, 0x946u);
    push32(c, 0x94bu); f_00000968(c); X86_RET(c, 0x94bu);
    X86_TICK(c, 9);
    // 00094b  mov eax, 1
    X86_AT(c, 0x94bu);
    c.r[0] = 0x1u;
    // 000950  call 0x968
    X86_AT(c, 0x950u);
    push32(c, 0x955u); f_00000968(c); X86_RET(c, 0x955u);
L_955:
    X86_TICK(c, 13);
    // 000955  mov cl, 6
    X86_AT(c, 0x955u);
    s8(c, 1, 0x6u);
    // 000957  mov bl, 0x11
    X86_AT(c, 0x957u);
    s8(c, 3, 0x11u);
    // 000959  lea edi, [ebp + 0xe2]
    X86_AT(c, 0x959u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 00095f  call 0x658
    X86_AT(c, 0x95fu);
    push32(c, 0x964u); f_00000658(c); X86_RET(c, 0x964u);
    X86_TICK(c, 10);
    // 000964  ret 
    X86_AT(c, 0x964u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x936u, "ran off the end of a function");
}
void f_00000938(X86Cpu& c) {
    X86_TICK(c, 13);
    // 000938  movzx eax, byte ptr gs:[ebp + 0x30]
    X86_AT(c, 0x938u);
    c.r[0] = rd8((c.sbase[5] + (uint32_t)(c.r[5] + 0x30u)));
    // 00093d  call 0x968
    X86_AT(c, 0x93du);
    push32(c, 0x942u); f_00000968(c); X86_RET(c, 0x942u);
    X86_TICK(c, 7);
    // 000942  jmp 0x955
    X86_AT(c, 0x942u);
    goto L_955;
L_955:
    X86_TICK(c, 13);
    // 000955  mov cl, 6
    X86_AT(c, 0x955u);
    s8(c, 1, 0x6u);
    // 000957  mov bl, 0x11
    X86_AT(c, 0x957u);
    s8(c, 3, 0x11u);
    // 000959  lea edi, [ebp + 0xe2]
    X86_AT(c, 0x959u);
    c.r[7] = (uint32_t)(c.r[5] + 0xE2u);
    // 00095f  call 0x658
    X86_AT(c, 0x95fu);
    push32(c, 0x964u); f_00000658(c); X86_RET(c, 0x964u);
    X86_TICK(c, 10);
    // 000964  ret 
    X86_AT(c, 0x964u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x938u, "ran off the end of a function");
}
}

#include "p_tbios_funcs.h"
namespace p_tbios {
void f_00010226(X86Cpu& c) {
    X86_TICK(c, 7);
    // 010226  test ecx, ecx
    X86_AT(c, 0x10226u);
    (void)x86_logic(c, c.r[1] & c.r[1], 4);
    // 010228  jne 0x1025c
    X86_AT(c, 0x10228u);
    if (x86_cc(c, 5)) { goto L_1025c; }
    X86_TICK(c, 112);
    // 01022a  push eax
    X86_AT(c, 0x1022au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01022b  push edx
    X86_AT(c, 0x1022bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01022c  mov eax, edi
    X86_AT(c, 0x1022cu);
    c.r[0] = c.r[7];
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1025c:
    X86_TICK(c, 119);
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10226u, "ran off the end of a function");
}
void f_00010228(X86Cpu& c) {
    X86_TICK(c, 5);
    // 010228  jne 0x1025c
    X86_AT(c, 0x10228u);
    if (x86_cc(c, 5)) { goto L_1025c; }
    X86_TICK(c, 112);
    // 01022a  push eax
    X86_AT(c, 0x1022au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01022b  push edx
    X86_AT(c, 0x1022bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01022c  mov eax, edi
    X86_AT(c, 0x1022cu);
    c.r[0] = c.r[7];
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
L_1025c:
    X86_TICK(c, 119);
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10228u, "ran off the end of a function");
}
void f_0001022a(X86Cpu& c) {
    X86_TICK(c, 231);
    // 01022a  push eax
    X86_AT(c, 0x1022au);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01022b  push edx
    X86_AT(c, 0x1022bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01022c  mov eax, edi
    X86_AT(c, 0x1022cu);
    c.r[0] = c.r[7];
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1022au, "ran off the end of a function");
}
void f_0001022b(X86Cpu& c) {
    X86_TICK(c, 229);
    // 01022b  push edx
    X86_AT(c, 0x1022bu);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01022c  mov eax, edi
    X86_AT(c, 0x1022cu);
    c.r[0] = c.r[7];
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1022bu, "ran off the end of a function");
}
void f_0001022c(X86Cpu& c) {
    X86_TICK(c, 227);
    // 01022c  mov eax, edi
    X86_AT(c, 0x1022cu);
    c.r[0] = c.r[7];
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1022cu, "ran off the end of a function");
}
void f_0001022e(X86Cpu& c) {
    X86_TICK(c, 225);
    // 01022e  mov dx, 0x3ad0
    X86_AT(c, 0x1022eu);
    s16(c, 2, 0x3AD0u);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1022eu, "ran off the end of a function");
}
void f_00010232(X86Cpu& c) {
    X86_TICK(c, 223);
    // 010232  out dx, al
    X86_AT(c, 0x10232u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10232u, "ran off the end of a function");
}
void f_00010233(X86Cpu& c) {
    X86_TICK(c, 211);
    // 010233  shr eax, 8
    X86_AT(c, 0x10233u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10233u, "ran off the end of a function");
}
void f_00010236(X86Cpu& c) {
    X86_TICK(c, 208);
    // 010236  add dx, 2
    X86_AT(c, 0x10236u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10236u, "ran off the end of a function");
}
void f_0001023a(X86Cpu& c) {
    X86_TICK(c, 206);
    // 01023a  out dx, al
    X86_AT(c, 0x1023au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1023au, "ran off the end of a function");
}
void f_0001023b(X86Cpu& c) {
    X86_TICK(c, 194);
    // 01023b  shr eax, 8
    X86_AT(c, 0x1023bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1023bu, "ran off the end of a function");
}
void f_0001023e(X86Cpu& c) {
    X86_TICK(c, 191);
    // 01023e  add dx, 2
    X86_AT(c, 0x1023eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1023eu, "ran off the end of a function");
}
void f_00010242(X86Cpu& c) {
    X86_TICK(c, 189);
    // 010242  out dx, al
    X86_AT(c, 0x10242u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10242u, "ran off the end of a function");
}
void f_00010243(X86Cpu& c) {
    X86_TICK(c, 177);
    // 010243  shr eax, 8
    X86_AT(c, 0x10243u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10243u, "ran off the end of a function");
}
void f_00010246(X86Cpu& c) {
    X86_TICK(c, 174);
    // 010246  add dx, 2
    X86_AT(c, 0x10246u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10246u, "ran off the end of a function");
}
void f_0001024a(X86Cpu& c) {
    X86_TICK(c, 172);
    // 01024a  out dx, al
    X86_AT(c, 0x1024au);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1024au, "ran off the end of a function");
}
void f_0001024b(X86Cpu& c) {
    X86_TICK(c, 160);
    // 01024b  mov eax, gs
    X86_AT(c, 0x1024bu);
    c.r[0] = (uint32_t)c.sreg[5];
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1024bu, "ran off the end of a function");
}
void f_0001024d(X86Cpu& c) {
    X86_TICK(c, 158);
    // 01024d  mov dx, 0x3ad8
    X86_AT(c, 0x1024du);
    s16(c, 2, 0x3AD8u);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1024du, "ran off the end of a function");
}
void f_00010251(X86Cpu& c) {
    X86_TICK(c, 156);
    // 010251  out dx, al
    X86_AT(c, 0x10251u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10251u, "ran off the end of a function");
}
void f_00010252(X86Cpu& c) {
    X86_TICK(c, 144);
    // 010252  shr eax, 8
    X86_AT(c, 0x10252u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 5, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10252u, "ran off the end of a function");
}
void f_00010255(X86Cpu& c) {
    X86_TICK(c, 141);
    // 010255  add dx, 2
    X86_AT(c, 0x10255u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_add(c, v, 0x2u, 0, 2)); }
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10255u, "ran off the end of a function");
}
void f_00010259(X86Cpu& c) {
    X86_TICK(c, 139);
    // 010259  out dx, al
    X86_AT(c, 0x10259u);
    x86_out(c, (c.r[2] & 0xFFFFu), 1, g8(c, 0));
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10259u, "ran off the end of a function");
}
void f_0001025a(X86Cpu& c) {
    X86_TICK(c, 127);
    // 01025a  pop edx
    X86_AT(c, 0x1025au);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1025au, "ran off the end of a function");
}
void f_0001025b(X86Cpu& c) {
    X86_TICK(c, 123);
    // 01025b  pop eax
    X86_AT(c, 0x1025bu);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1025bu, "ran off the end of a function");
}
void f_0001025c(X86Cpu& c) {
    X86_TICK(c, 119);
    // 01025c  push eax
    X86_AT(c, 0x1025cu);
    { uint32_t v = c.r[0]; push32(c, v); }
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1025cu, "ran off the end of a function");
}
void f_0001025d(X86Cpu& c) {
    X86_TICK(c, 117);
    // 01025d  push edx
    X86_AT(c, 0x1025du);
    { uint32_t v = c.r[2]; push32(c, v); }
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1025du, "ran off the end of a function");
}
void f_0001025e(X86Cpu& c) {
    X86_TICK(c, 115);
    // 01025e  mov dx, 0x3ad6
    X86_AT(c, 0x1025eu);
    s16(c, 2, 0x3AD6u);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1025eu, "ran off the end of a function");
}
void f_00010262(X86Cpu& c) {
    X86_TICK(c, 113);
    // 010262  in al, dx
    X86_AT(c, 0x10262u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10262u, "ran off the end of a function");
}
void f_00010263(X86Cpu& c) {
    X86_TICK(c, 101);
    // 010263  shl eax, 8
    X86_AT(c, 0x10263u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10263u, "ran off the end of a function");
}
void f_00010266(X86Cpu& c) {
    X86_TICK(c, 98);
    // 010266  sub dx, 2
    X86_AT(c, 0x10266u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10266u, "ran off the end of a function");
}
void f_0001026a(X86Cpu& c) {
    X86_TICK(c, 96);
    // 01026a  in al, dx
    X86_AT(c, 0x1026au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1026au, "ran off the end of a function");
}
void f_0001026b(X86Cpu& c) {
    X86_TICK(c, 84);
    // 01026b  shl eax, 8
    X86_AT(c, 0x1026bu);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1026bu, "ran off the end of a function");
}
void f_0001026e(X86Cpu& c) {
    X86_TICK(c, 81);
    // 01026e  sub dx, 2
    X86_AT(c, 0x1026eu);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1026eu, "ran off the end of a function");
}
void f_00010272(X86Cpu& c) {
    X86_TICK(c, 79);
    // 010272  in al, dx
    X86_AT(c, 0x10272u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10272u, "ran off the end of a function");
}
void f_00010273(X86Cpu& c) {
    X86_TICK(c, 67);
    // 010273  shl eax, 8
    X86_AT(c, 0x10273u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10273u, "ran off the end of a function");
}
void f_00010276(X86Cpu& c) {
    X86_TICK(c, 64);
    // 010276  sub dx, 2
    X86_AT(c, 0x10276u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10276u, "ran off the end of a function");
}
void f_0001027a(X86Cpu& c) {
    X86_TICK(c, 62);
    // 01027a  in al, dx
    X86_AT(c, 0x1027au);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1027au, "ran off the end of a function");
}
void f_0001027b(X86Cpu& c) {
    X86_TICK(c, 50);
    // 01027b  mov edi, eax
    X86_AT(c, 0x1027bu);
    c.r[7] = c.r[0];
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1027bu, "ran off the end of a function");
}
void f_0001027d(X86Cpu& c) {
    X86_TICK(c, 48);
    // 01027d  mov dx, 0x3ada
    X86_AT(c, 0x1027du);
    s16(c, 2, 0x3ADAu);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1027du, "ran off the end of a function");
}
void f_00010281(X86Cpu& c) {
    X86_TICK(c, 46);
    // 010281  in al, dx
    X86_AT(c, 0x10281u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10281u, "ran off the end of a function");
}
void f_00010282(X86Cpu& c) {
    X86_TICK(c, 34);
    // 010282  shl eax, 8
    X86_AT(c, 0x10282u);
    { uint32_t v = c.r[0]; bool w; uint32_t r = x86_shift(c, 4, v, 0x8u, 4, w); if (w) c.r[0] = r; }
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10282u, "ran off the end of a function");
}
void f_00010285(X86Cpu& c) {
    X86_TICK(c, 31);
    // 010285  sub dx, 2
    X86_AT(c, 0x10285u);
    { uint32_t v = (c.r[2] & 0xFFFFu); s16(c, 2, x86_sub(c, v, 0x2u, 0, 2)); }
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10285u, "ran off the end of a function");
}
void f_00010289(X86Cpu& c) {
    X86_TICK(c, 29);
    // 010289  in al, dx
    X86_AT(c, 0x10289u);
    s8(c, 0, x86_in(c, (c.r[2] & 0xFFFFu), 1));
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10289u, "ran off the end of a function");
}
void f_0001028a(X86Cpu& c) {
    X86_TICK(c, 17);
    // 01028a  mov ds, eax
    X86_AT(c, 0x1028au);
    x86_load_seg(c, 3, (c.r[0] & 0xFFFFu) & 0xFFFFu);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1028au, "ran off the end of a function");
}
void f_0001028c(X86Cpu& c) {
    X86_TICK(c, 15);
    // 01028c  pop edx
    X86_AT(c, 0x1028cu);
    { uint32_t v = pop32(c); c.r[2] = v; }
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1028cu, "ran off the end of a function");
}
void f_0001028d(X86Cpu& c) {
    X86_TICK(c, 11);
    // 01028d  pop eax
    X86_AT(c, 0x1028du);
    { uint32_t v = pop32(c); c.r[0] = v; }
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1028du, "ran off the end of a function");
}
void f_0001028e(X86Cpu& c) {
    X86_TICK(c, 7);
    // 01028e  call dword ptr cs:[ecx*4 + 0x102a8]
    X86_AT(c, 0x1028eu);
    { uint32_t t = rd32((c.sbase[1] + (uint32_t)(c.r[1] * 4 + 0x102A8u))); push32(c, 0x10296u);
      switch (t) {
      case 0x102ecu: f_000102ec(c); break;
      case 0x1033du: f_0001033d(c); break;
      case 0x10353u: f_00010353(c); break;
      case 0x10384u: f_00010384(c); break;
      case 0x1039au: f_0001039a(c); break;
      case 0x103bbu: f_000103bb(c); break;
      case 0x103c3u: f_000103c3(c); break;
      case 0x10400u: f_00010400(c); break;
      case 0x10408u: f_00010408(c); break;
      case 0x10459u: f_00010459(c); break;
      case 0x1050au: f_0001050a(c); break;
      case 0x1051fu: f_0001051f(c); break;
      case 0x10532u: f_00010532(c); break;
      case 0x1054cu: f_0001054c(c); break;
      case 0x106f4u: f_000106f4(c); break;
      case 0x107a8u: f_000107a8(c); break;
      case 0x107dfu: f_000107df(c); break;
      default: x86_call(c, t); }
      X86_RET(c, 0x10296u); }
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1028eu, "ran off the end of a function");
}
void f_00010296(X86Cpu& c) {
    X86_TICK(c, 52);
    // 010296  popfd 
    X86_AT(c, 0x10296u);
    x86_popfd(c, 4);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10296u, "ran off the end of a function");
}
void f_00010297(X86Cpu& c) {
    X86_TICK(c, 46);
    // 010297  popal 
    X86_AT(c, 0x10297u);
    for (int k = 7; k >= 0; --k) { uint32_t v = pop32(c); if (k != 4) c.r[k] = v; }
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10297u, "ran off the end of a function");
}
void f_00010298(X86Cpu& c) {
    X86_TICK(c, 22);
    // 010298  pop ds
    X86_AT(c, 0x10298u);
    x86_load_seg(c, 3, pop32(c) & 0xFFFFu);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10298u, "ran off the end of a function");
}
void f_00010299(X86Cpu& c) {
    X86_TICK(c, 18);
    // 010299  pop es
    X86_AT(c, 0x10299u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x10299u, "ran off the end of a function");
}
void f_0001029a(X86Cpu& c) {
    X86_TICK(c, 14);
    // 01029a  pop fs
    X86_AT(c, 0x1029au);
    x86_load_seg(c, 4, pop32(c) & 0xFFFFu);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1029au, "ran off the end of a function");
}
void f_0001029c(X86Cpu& c) {
    X86_TICK(c, 10);
    // 01029c  pop gs
    X86_AT(c, 0x1029cu);
    x86_load_seg(c, 5, pop32(c) & 0xFFFFu);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1029cu, "ran off the end of a function");
}
void f_0001029e(X86Cpu& c) {
    X86_TICK(c, 6);
    // 01029e  retf 
    X86_AT(c, 0x1029eu);
    x86_retf(c, 4, 0u); return;
    x86_fault(c, 0x1029eu, "ran off the end of a function");
}
void f_000102ec(X86Cpu& c) {
    X86_TICK(c, 12);
    // 0102ec  cmp byte ptr [edi + 0x51], 1
    X86_AT(c, 0x102ecu);
    (void)x86_sub(c, rd8((c.sbase[3] + (uint32_t)(c.r[7] + 0x51u))), 0x1u, 0, 1);
    // 0102f0  je 0x10338
    X86_AT(c, 0x102f0u);
    if (x86_cc(c, 4)) { goto L_10338; }
    X86_TICK(c, 42);
    // 0102f2  mov byte ptr [edi + 0x51], 1
    X86_AT(c, 0x102f2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x51u)), 0x1u);
    // 0102f6  push ds
    X86_AT(c, 0x102f6u);
    push32(c, c.sreg[3]);
    // 0102f7  pop es
    X86_AT(c, 0x102f7u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0102f8  mov ecx, 0x51
    X86_AT(c, 0x102f8u);
    c.r[1] = 0x51u;
    // 0102fd  sub ecx, 0xf
    X86_AT(c, 0x102fdu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0xFu, 0, 4); }
    // 010300  sub al, al
    X86_AT(c, 0x10300u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 010302  cld 
    X86_AT(c, 0x10302u);
    c.fl &= ~X86_DF;
    // 010303  push edi
    X86_AT(c, 0x10303u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010304  add edi, 0xf
    X86_AT(c, 0x10304u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xFu, 0, 4); }
    // 010307  stosb byte ptr es:[edi], al
    X86_AT(c, 0x10307u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 010309  pop edi
    X86_AT(c, 0x10309u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 01030a  mov al, 1
    X86_AT(c, 0x1030au);
    s8(c, 0, 0x1u);
    // 01030c  mov dx, 3
    X86_AT(c, 0x1030cu);
    s16(c, 2, 0x3u);
    // 010310  call 0x1054c
    X86_AT(c, 0x10310u);
    push32(c, 0x10315u); f_0001054c(c); X86_RET(c, 0x10315u);
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102ecu, "ran off the end of a function");
}
void f_000102f0(X86Cpu& c) {
    X86_TICK(c, 5);
    // 0102f0  je 0x10338
    X86_AT(c, 0x102f0u);
    if (x86_cc(c, 4)) { goto L_10338; }
    X86_TICK(c, 42);
    // 0102f2  mov byte ptr [edi + 0x51], 1
    X86_AT(c, 0x102f2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x51u)), 0x1u);
    // 0102f6  push ds
    X86_AT(c, 0x102f6u);
    push32(c, c.sreg[3]);
    // 0102f7  pop es
    X86_AT(c, 0x102f7u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0102f8  mov ecx, 0x51
    X86_AT(c, 0x102f8u);
    c.r[1] = 0x51u;
    // 0102fd  sub ecx, 0xf
    X86_AT(c, 0x102fdu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0xFu, 0, 4); }
    // 010300  sub al, al
    X86_AT(c, 0x10300u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 010302  cld 
    X86_AT(c, 0x10302u);
    c.fl &= ~X86_DF;
    // 010303  push edi
    X86_AT(c, 0x10303u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010304  add edi, 0xf
    X86_AT(c, 0x10304u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xFu, 0, 4); }
    // 010307  stosb byte ptr es:[edi], al
    X86_AT(c, 0x10307u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 010309  pop edi
    X86_AT(c, 0x10309u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 01030a  mov al, 1
    X86_AT(c, 0x1030au);
    s8(c, 0, 0x1u);
    // 01030c  mov dx, 3
    X86_AT(c, 0x1030cu);
    s16(c, 2, 0x3u);
    // 010310  call 0x1054c
    X86_AT(c, 0x10310u);
    push32(c, 0x10315u); f_0001054c(c); X86_RET(c, 0x10315u);
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
L_10338:
    X86_TICK(c, 12);
    // 010338  mov byte ptr [ebp + 0x21], 0xff
    X86_AT(c, 0x10338u);
    wr8((c.sbase[2] + (uint32_t)(c.r[5] + 0x21u)), 0xFFu);
    // 01033c  ret 
    X86_AT(c, 0x1033cu);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102f0u, "ran off the end of a function");
}
void f_000102f2(X86Cpu& c) {
    X86_TICK(c, 42);
    // 0102f2  mov byte ptr [edi + 0x51], 1
    X86_AT(c, 0x102f2u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x51u)), 0x1u);
    // 0102f6  push ds
    X86_AT(c, 0x102f6u);
    push32(c, c.sreg[3]);
    // 0102f7  pop es
    X86_AT(c, 0x102f7u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0102f8  mov ecx, 0x51
    X86_AT(c, 0x102f8u);
    c.r[1] = 0x51u;
    // 0102fd  sub ecx, 0xf
    X86_AT(c, 0x102fdu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0xFu, 0, 4); }
    // 010300  sub al, al
    X86_AT(c, 0x10300u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 010302  cld 
    X86_AT(c, 0x10302u);
    c.fl &= ~X86_DF;
    // 010303  push edi
    X86_AT(c, 0x10303u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010304  add edi, 0xf
    X86_AT(c, 0x10304u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xFu, 0, 4); }
    // 010307  stosb byte ptr es:[edi], al
    X86_AT(c, 0x10307u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 010309  pop edi
    X86_AT(c, 0x10309u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 01030a  mov al, 1
    X86_AT(c, 0x1030au);
    s8(c, 0, 0x1u);
    // 01030c  mov dx, 3
    X86_AT(c, 0x1030cu);
    s16(c, 2, 0x3u);
    // 010310  call 0x1054c
    X86_AT(c, 0x10310u);
    push32(c, 0x10315u); f_0001054c(c); X86_RET(c, 0x10315u);
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102f2u, "ran off the end of a function");
}
void f_000102f6(X86Cpu& c) {
    X86_TICK(c, 40);
    // 0102f6  push ds
    X86_AT(c, 0x102f6u);
    push32(c, c.sreg[3]);
    // 0102f7  pop es
    X86_AT(c, 0x102f7u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0102f8  mov ecx, 0x51
    X86_AT(c, 0x102f8u);
    c.r[1] = 0x51u;
    // 0102fd  sub ecx, 0xf
    X86_AT(c, 0x102fdu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0xFu, 0, 4); }
    // 010300  sub al, al
    X86_AT(c, 0x10300u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 010302  cld 
    X86_AT(c, 0x10302u);
    c.fl &= ~X86_DF;
    // 010303  push edi
    X86_AT(c, 0x10303u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010304  add edi, 0xf
    X86_AT(c, 0x10304u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xFu, 0, 4); }
    // 010307  stosb byte ptr es:[edi], al
    X86_AT(c, 0x10307u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 010309  pop edi
    X86_AT(c, 0x10309u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 01030a  mov al, 1
    X86_AT(c, 0x1030au);
    s8(c, 0, 0x1u);
    // 01030c  mov dx, 3
    X86_AT(c, 0x1030cu);
    s16(c, 2, 0x3u);
    // 010310  call 0x1054c
    X86_AT(c, 0x10310u);
    push32(c, 0x10315u); f_0001054c(c); X86_RET(c, 0x10315u);
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102f6u, "ran off the end of a function");
}
void f_000102f7(X86Cpu& c) {
    X86_TICK(c, 38);
    // 0102f7  pop es
    X86_AT(c, 0x102f7u);
    x86_load_seg(c, 0, pop32(c) & 0xFFFFu);
    // 0102f8  mov ecx, 0x51
    X86_AT(c, 0x102f8u);
    c.r[1] = 0x51u;
    // 0102fd  sub ecx, 0xf
    X86_AT(c, 0x102fdu);
    { uint32_t v = c.r[1]; c.r[1] = x86_sub(c, v, 0xFu, 0, 4); }
    // 010300  sub al, al
    X86_AT(c, 0x10300u);
    { uint32_t v = g8(c, 0); s8(c, 0, x86_sub(c, v, g8(c, 0), 0, 1)); }
    // 010302  cld 
    X86_AT(c, 0x10302u);
    c.fl &= ~X86_DF;
    // 010303  push edi
    X86_AT(c, 0x10303u);
    { uint32_t v = c.r[7]; push32(c, v); }
    // 010304  add edi, 0xf
    X86_AT(c, 0x10304u);
    { uint32_t v = c.r[7]; c.r[7] = x86_add(c, v, 0xFu, 0, 4); }
    // 010307  stosb byte ptr es:[edi], al
    X86_AT(c, 0x10307u);
    x86_string(c, 2, 1, 243, 4, 3);
    // 010309  pop edi
    X86_AT(c, 0x10309u);
    { uint32_t v = pop32(c); c.r[7] = v; }
    // 01030a  mov al, 1
    X86_AT(c, 0x1030au);
    s8(c, 0, 0x1u);
    // 01030c  mov dx, 3
    X86_AT(c, 0x1030cu);
    s16(c, 2, 0x3u);
    // 010310  call 0x1054c
    X86_AT(c, 0x10310u);
    push32(c, 0x10315u); f_0001054c(c); X86_RET(c, 0x10315u);
    X86_TICK(c, 11);
    // 010315  mov al, 0
    X86_AT(c, 0x10315u);
    s8(c, 0, 0x0u);
    // 010317  mov dx, 3
    X86_AT(c, 0x10317u);
    s16(c, 2, 0x3u);
    // 01031b  call 0x1054c
    X86_AT(c, 0x1031bu);
    push32(c, 0x10320u); f_0001054c(c); X86_RET(c, 0x10320u);
    X86_TICK(c, 9);
    // 010320  mov al, 0
    X86_AT(c, 0x10320u);
    s8(c, 0, 0x0u);
    // 010322  call 0x106f4
    X86_AT(c, 0x10322u);
    push32(c, 0x10327u); f_000106f4(c); X86_RET(c, 0x10327u);
    X86_TICK(c, 9);
    // 010327  mov dword ptr [edi + 0x5e], 0x80008
    X86_AT(c, 0x10327u);
    wr32((c.sbase[3] + (uint32_t)(c.r[7] + 0x5Eu)), 0x80008u);
    // 01032e  call 0x10b22
    X86_AT(c, 0x1032eu);
    push32(c, 0x10333u); f_00010b22(c); X86_RET(c, 0x10333u);
    X86_TICK(c, 12);
    // 010333  mov byte ptr [edi + 0x17], 1
    X86_AT(c, 0x10333u);
    wr8((c.sbase[3] + (uint32_t)(c.r[7] + 0x17u)), 0x1u);
    // 010337  ret 
    X86_AT(c, 0x10337u);
    c.eip = pop32(c); return;
    x86_fault(c, 0x102f7u, "ran off the end of a function");
}
}
